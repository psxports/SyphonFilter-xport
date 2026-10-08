#include <windows.h>
#undef LOBYTE
#undef HIBYTE
#undef LOWORD
#undef HIWORD
#include "game_draft.h"
#include <stdint.h>
#include <stdio.h>

extern sint32 sf_gte_import_snapshot(const PsxGteSnapshot *state);
extern void sf_gte_write_data(uint32 index, uint32 value);
extern uint32 sf_gte_read_data(uint32 index);
extern sint32 sf_gte_execute(uint32 command);

/* Native tokens occupy segments rejected by the PSX memory bus */
static const uint32 sf_native_tags[10] = {
    0x20000000u, 0x30000000u, 0x40000000u, 0x50000000u,
    0x60000000u, 0x70000000u, 0xc0000000u, 0xd0000000u,
    0xe0000000u, 0xf0000000u
};
static uintptr_t sf_native_windows[10];
static uint32 sf_native_window_count;
static SRWLOCK sf_native_lock = SRWLOCK_INIT;

void *sf_draft_guest_ptr(uint32 address)
{
    uint32 index;
    uint32 tag = address & 0xf0000000u;
    uintptr_t native = 0u;
    if (!address)
        return NULL;
    AcquireSRWLockShared(&sf_native_lock);
    for (index = 0; index < sf_native_window_count; ++index)
    {
        if (tag == sf_native_tags[index])
        {
            native = sf_native_windows[index] + (address & 0x0fffffffu);
            break;
        }
    }
    ReleaseSRWLockShared(&sf_native_lock);
    if (native)
        return xport_memory_readable((void *)native, 1u) ? (void *)native : NULL;
    /* MMIO has no host lvalue; callers must use the width-specific bus */
    return xport_guest_ptr(address, 1u);
}

uint32 sf_draft_guest_address(const void *pointer)
{
    XportMemoryRegion region;
    uint32 offset;
    uint32 index;
    uint32 token = 0u;
    uintptr_t value = (uintptr_t)pointer;
    uintptr_t window = value & ~(uintptr_t)0x0fffffffu;
    if (!pointer)
        return 0u;
    if (xport_memory_pointer_identity(pointer, 1u, &region, &offset))
    {
        if (region == XPORT_MEMORY_DRAM)
            return 0x80000000u | offset;
        if (region == XPORT_MEMORY_SCRATCHPAD)
            return 0x1f800000u | offset;
        if (region == XPORT_MEMORY_BIOS)
            return 0xbfc00000u | offset;
    }
    AcquireSRWLockExclusive(&sf_native_lock);
    for (index = 0; index < sf_native_window_count; ++index)
        if (sf_native_windows[index] == window)
            break;
    if (index == sf_native_window_count && index < 10u)
    {
        sf_native_windows[index] = window;
        ++sf_native_window_count;
    }
    if (index < 10u)
        token = sf_native_tags[index] | (uint32)(value & 0x0fffffffu);
    ReleaseSRWLockExclusive(&sf_native_lock);
    if (!token)
        fprintf(stderr, "SF native pointer encoding exhausted for %p\n", pointer);
    return token;
}

uint32 sf_draft_carry_add(uint64 left, uint64 right, uint32 width)
{
    uint32 bits;
    uint64 mask;
    if (!width || width > 8u)
        return 0u;
    bits = width * 8u;
    if (bits == 64u)
        return (uint32)((left + right) < left);
    mask = ((uint64)1u << bits) - 1u;
    return (uint32)(((left & mask) + (right & mask)) >> bits);
}

static uint32 sf_draft_geometry_read_memory(uint32 address)
{
    uint32 segment = address & 0xe0000000u;
    if (segment == 0u || segment == 0x80000000u || segment == 0xa0000000u)
        return r_u32(address);
    return xport_load_le32(sf_draft_guest_ptr(address));
}

static void sf_draft_geometry_write_memory(uint32 address, uint32 value)
{
    uint32 segment = address & 0xe0000000u;
    if (segment == 0u || segment == 0x80000000u || segment == 0xa0000000u)
        w_u32(address, value);
    else
        xport_store_le32(sf_draft_guest_ptr(address), value);
}

static void sf_draft_geometry_controls(uint32 control[32])
{
    PsxGteSnapshot state;
    MATRIX *matrices[3];
    uint32 bases[3] = {0u, 8u, 16u};
    uint32 matrix;
    uint32 pair;
    psx_gte_snapshot(&state);
    matrices[0] = &state.rotation;
    matrices[1] = &state.light;
    matrices[2] = &state.color;
    for (matrix = 0u; matrix < 3u; ++matrix)
    {
        for (pair = 0u; pair < 4u; ++pair)
        {
            uint32 first = pair * 2u;
            uint32 second = first + 1u;
            control[bases[matrix] + pair] = (uint16)matrices[matrix]->m[first / 3u][first % 3u]
                | ((uint32)(uint16)matrices[matrix]->m[second / 3u][second % 3u] << 16);
        }
        control[bases[matrix] + 4u] = (uint32)(sint32)matrices[matrix]->m[2][2];
    }
    for (pair = 0u; pair < 3u; ++pair)
    {
        control[5u + pair] = (uint32)state.translation[pair];
        control[13u + pair] = (uint32)state.back_color[pair];
        control[21u + pair] = (uint32)state.far_color[pair];
    }
    control[24] = (uint32)state.ofx << 16;
    control[25] = (uint32)state.ofy << 16;
    control[26] = (uint32)(uint16)state.h;
    control[27] = (uint32)(sint32)(sint16)state.dqa;
    control[28] = (uint32)state.dqb;
    control[29] = (uint32)(sint32)(sint16)state.zsf3;
    control[30] = (uint32)(sint32)(sint16)state.zsf4;
    control[31] = (uint32)state.flag;
}

static uint32 sf_draft_geometry_read_control(uint32 index)
{
    uint32 controls[32];
    sf_draft_geometry_controls(controls);
    return controls[index & 31u];
}

static void sf_draft_geometry_write_control(uint32 index, uint32 value)
{
    uint32 controls[32];
    if (index < 8u)
        xport_gte_write_control(index, value);
    else
    {
        sf_draft_geometry_controls(controls);
        controls[index & 31u] = value;
        psx_gte_import_control_registers(controls);
    }
}

void sf_draft_geometry_800D0058_stage1(sint32 input1, sint32 input2, sint32 input3)
{
    sf_draft_geometry_write_control(13u, (uint32)input1);
    sf_draft_geometry_write_control(14u, (uint32)input2);
    sf_draft_geometry_write_control(15u, (uint32)input3);
}

void sf_draft_geometry_800D0058_stage2(sint32 input1, sint32 input2, sint32 input3)
{
    sf_draft_geometry_write_control(13u, (uint32)input1);
    sf_draft_geometry_write_control(14u, (uint32)input2);
    sf_draft_geometry_write_control(15u, (uint32)input3);
}

void sf_draft_geometry_800D0058_stage3(sint32 input1, sint32 input2, sint32 input3)
{
    sf_draft_geometry_write_control(13u, (uint32)input1);
    sf_draft_geometry_write_control(14u, (uint32)input2);
    sf_draft_geometry_write_control(15u, (uint32)input3);
}

void sf_draft_geometry_800D0058_stage4(sint32 input1, sint32 input2, sint32 input3)
{
    sf_draft_geometry_write_control(13u, (uint32)input1);
    sf_draft_geometry_write_control(14u, (uint32)input2);
    sf_draft_geometry_write_control(15u, (uint32)input3);
}

void sf_draft_geometry_800D0058_stage5(sint32 input1, sint32 input2, sint32 input3)
{
    sf_draft_geometry_write_control(13u, (uint32)input1);
    sf_draft_geometry_write_control(14u, (uint32)input2);
    sf_draft_geometry_write_control(15u, (uint32)input3);
}

void sf_draft_geometry_80077278_stage1(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6, sint32 *output7, uint32 memory8, sint32 *output9, uint32 memory10, sint32 *output11, uint32 memory12)
{
    sf_gte_write_data(0u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(1u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(2u, sf_draft_geometry_read_memory(memory3));
    sf_gte_write_data(3u, sf_draft_geometry_read_memory(memory4));
    sf_gte_write_data(4u, sf_draft_geometry_read_memory(memory5));
    sf_gte_write_data(5u, sf_draft_geometry_read_memory(memory6));
    sf_gte_execute(0x280030u);
    *output7 = (sint32)sf_gte_read_data(17u);
    sf_draft_geometry_write_memory(memory8, sf_gte_read_data(12u));
    *output9 = (sint32)sf_gte_read_data(18u);
    sf_draft_geometry_write_memory(memory10, sf_gte_read_data(13u));
    *output11 = (sint32)sf_gte_read_data(19u);
    sf_draft_geometry_write_memory(memory12, sf_gte_read_data(14u));
}

void sf_draft_geometry_80077278_stage2(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6)
{
    sf_gte_write_data(0u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(1u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(2u, sf_draft_geometry_read_memory(memory3));
    sf_gte_write_data(3u, sf_draft_geometry_read_memory(memory4));
    sf_gte_write_data(4u, sf_draft_geometry_read_memory(memory5));
    sf_gte_write_data(5u, sf_draft_geometry_read_memory(memory6));
    sf_gte_execute(0x280030u);
}

void sf_draft_geometry_80077278_stage3(sint32 *output1, uint32 memory2, sint32 *output3, uint32 memory4, sint32 *output5, uint32 memory6, uint32 memory7, uint32 memory8, uint32 memory9, uint32 memory10)
{
    *output1 = (sint32)sf_gte_read_data(17u);
    sf_draft_geometry_write_memory(memory2, sf_gte_read_data(12u));
    *output3 = (sint32)sf_gte_read_data(18u);
    sf_draft_geometry_write_memory(memory4, sf_gte_read_data(13u));
    *output5 = (sint32)sf_gte_read_data(19u);
    sf_draft_geometry_write_memory(memory6, sf_gte_read_data(14u));
    sf_gte_write_data(0u, sf_draft_geometry_read_memory(memory7));
    sf_gte_write_data(1u, sf_draft_geometry_read_memory(memory8));
    sf_gte_write_data(2u, sf_draft_geometry_read_memory(memory9));
    sf_gte_write_data(3u, sf_draft_geometry_read_memory(memory10));
    sf_gte_execute(0x280030u);
}

void sf_draft_geometry_80077278_stage4(sint32 *output1, uint32 memory2, sint32 *output3, uint32 memory4)
{
    *output1 = (sint32)sf_gte_read_data(17u);
    sf_draft_geometry_write_memory(memory2, sf_gte_read_data(12u));
    *output3 = (sint32)sf_gte_read_data(18u);
    sf_draft_geometry_write_memory(memory4, sf_gte_read_data(13u));
}

void sf_draft_geometry_80077278_stage5(sint32 *output1, sint32 *output2, sint32 *output3)
{
    *output1 = (sint32)sf_draft_geometry_read_control(5u);
    *output2 = (sint32)sf_draft_geometry_read_control(6u);
    *output3 = (sint32)sf_draft_geometry_read_control(7u);
}

void sf_draft_geometry_80077278_stage6(sint32 *output1, sint32 *output2, sint32 *output3, sint32 *output4, sint32 *output5)
{
    *output1 = (sint32)sf_draft_geometry_read_control(0u);
    *output2 = (sint32)sf_draft_geometry_read_control(1u);
    *output3 = (sint32)sf_draft_geometry_read_control(2u);
    *output4 = (sint32)sf_draft_geometry_read_control(3u);
    *output5 = (sint32)sf_draft_geometry_read_control(4u);
}

void sf_draft_geometry_80077278_stage7(sint32 input1, sint32 input2, sint32 input3)
{
    sf_draft_geometry_write_control(0u, (uint32)input1);
    sf_draft_geometry_write_control(1u, (uint32)input2);
    sf_draft_geometry_write_control(2u, (uint32)input3);
}

void sf_draft_geometry_80077278_stage8(sint32 input1, sint32 input2)
{
    sf_draft_geometry_write_control(3u, (uint32)input1);
    sf_draft_geometry_write_control(4u, (uint32)input2);
}

void sf_draft_geometry_80077278_stage9(sint32 input1, sint32 input2, sint32 input3)
{
    sf_draft_geometry_write_control(5u, (uint32)input1);
    sf_draft_geometry_write_control(6u, (uint32)input2);
    sf_draft_geometry_write_control(7u, (uint32)input3);
}

void sf_draft_geometry_80077278_stage10(uint32 memory1, uint32 memory2, sint32 *output3)
{
    sf_gte_write_data(0u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(1u, sf_draft_geometry_read_memory(memory2));
    sf_gte_execute(0x180001u);
    *output3 = (sint32)sf_gte_read_data(19u);
}

void sf_draft_geometry_80077278_stage11(sint32 *output1)
{
    *output1 = (sint32)sf_gte_read_data(14u);
}

void sf_draft_geometry_80077278_stage12(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5)
{
    sf_draft_geometry_write_control(0u, (uint32)input1);
    sf_draft_geometry_write_control(1u, (uint32)input2);
    sf_draft_geometry_write_control(2u, (uint32)input3);
    sf_draft_geometry_write_control(3u, (uint32)input4);
    sf_draft_geometry_write_control(4u, (uint32)input5);
}

void sf_draft_geometry_80077278_stage13(sint32 input1, sint32 input2, sint32 input3)
{
    sf_draft_geometry_write_control(5u, (uint32)input1);
    sf_draft_geometry_write_control(6u, (uint32)input2);
    sf_draft_geometry_write_control(7u, (uint32)input3);
}

void sf_draft_geometry_80077278_stage14(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_gte_write_data(12u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(13u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(14u, sf_draft_geometry_read_memory(memory3));
}

void sf_draft_geometry_80077278_stage15(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_gte_write_data(12u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(13u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(14u, sf_draft_geometry_read_memory(memory3));
}

void sf_draft_geometry_80077278_stage16(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_gte_write_data(12u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(13u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(14u, sf_draft_geometry_read_memory(memory3));
}

void sf_draft_geometry_80077278_stage17(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_gte_write_data(12u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(13u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(14u, sf_draft_geometry_read_memory(memory3));
}

void sf_draft_geometry_80077278_stage18(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_gte_write_data(12u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(13u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(14u, sf_draft_geometry_read_memory(memory3));
}

void sf_draft_geometry_80077278_stage19(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_gte_write_data(12u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(13u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(14u, sf_draft_geometry_read_memory(memory3));
}

void sf_draft_geometry_80077278_stage20(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_gte_write_data(12u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(13u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(14u, sf_draft_geometry_read_memory(memory3));
}

void sf_draft_geometry_80077278_stage21(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_gte_write_data(12u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(13u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(14u, sf_draft_geometry_read_memory(memory3));
}

void sf_draft_geometry_80077278_stage22(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_gte_write_data(12u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(13u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(14u, sf_draft_geometry_read_memory(memory3));
}

void sf_draft_geometry_80077278_stage23(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_gte_write_data(12u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(13u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(14u, sf_draft_geometry_read_memory(memory3));
}

void sf_draft_geometry_80077278_stage24(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_gte_write_data(12u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(13u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(14u, sf_draft_geometry_read_memory(memory3));
}

void sf_draft_geometry_80077278_stage25(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_gte_write_data(12u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(13u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(14u, sf_draft_geometry_read_memory(memory3));
}

void sf_draft_geometry_800D5100_stage1(sint32 input1, sint32 input2, sint32 input3)
{
    sf_gte_write_data(20u, (uint32)input1);
    sf_gte_write_data(21u, (uint32)input2);
    sf_gte_write_data(22u, (uint32)input3);
}

void sf_draft_geometry_800D5100_stage2(sint32 input1)
{
    sf_gte_write_data(27u, (uint32)input1);
}

void sf_draft_geometry_800D5100_stage3(sint32 input1)
{
    sf_gte_write_data(26u, (uint32)input1);
}

void sf_draft_geometry_800D2424_stage1(sint32 input1)
{
    sf_draft_geometry_write_control(16u, (uint32)input1);
}

void sf_draft_geometry_800D2424_stage2(sint32 input1, sint32 input2)
{
    sf_draft_geometry_write_control(17u, (uint32)input1);
    sf_draft_geometry_write_control(18u, (uint32)input2);
}

void sf_draft_geometry_800D2424_stage3(sint32 input1, sint32 input2)
{
    sf_draft_geometry_write_control(19u, (uint32)input1);
    sf_draft_geometry_write_control(20u, (uint32)input2);
}

void sf_draft_geometry_800D2424_stage4(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6)
{
    sf_gte_write_data(0u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(1u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(2u, sf_draft_geometry_read_memory(memory3));
    sf_gte_write_data(3u, sf_draft_geometry_read_memory(memory4));
    sf_gte_write_data(4u, sf_draft_geometry_read_memory(memory5));
    sf_gte_write_data(5u, sf_draft_geometry_read_memory(memory6));
    sf_gte_execute(0x280030u);
}

void sf_draft_geometry_800D2424_stage5(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6)
{
    sf_draft_geometry_write_memory(memory1, sf_gte_read_data(12u));
    sf_draft_geometry_write_memory(memory2, sf_gte_read_data(17u));
    sf_draft_geometry_write_memory(memory3, sf_gte_read_data(13u));
    sf_draft_geometry_write_memory(memory4, sf_gte_read_data(18u));
    sf_draft_geometry_write_memory(memory5, sf_gte_read_data(14u));
    sf_draft_geometry_write_memory(memory6, sf_gte_read_data(19u));
}

void sf_draft_geometry_800D2424_stage6(uint32 memory1, sint32 input2)
{
    sf_gte_write_data(6u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(8u, (uint32)input2);
}

void sf_draft_geometry_800D2424_stage7(sint32 input1, sint32 input2)
{
    sf_gte_write_data(0u, (uint32)input1);
    sf_gte_write_data(1u, (uint32)input2);
    sf_gte_execute(0xE80413u);
}

void sf_draft_geometry_800D2424_stage8(uint32 memory1, uint32 memory2)
{
    sf_gte_write_data(12u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(13u, sf_draft_geometry_read_memory(memory2));
}

void sf_draft_geometry_800D2424_stage9(uint32 memory1)
{
    sf_gte_write_data(14u, sf_draft_geometry_read_memory(memory1));
}

void sf_draft_geometry_800D2424_stage10(void)
{
    sf_gte_execute(0x1400006u);
}

void sf_draft_geometry_800D2424_stage11(sint32 *output1)
{
    *output1 = (sint32)sf_gte_read_data(24u);
}

void sf_draft_geometry_800D2424_stage12(sint32 *output1)
{
    *output1 = (sint32)sf_gte_read_data(12u);
}

void sf_draft_geometry_800D2424_stage13(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_draft_geometry_write_memory(memory1, sf_gte_read_data(12u));
    sf_draft_geometry_write_memory(memory2, sf_gte_read_data(13u));
    sf_draft_geometry_write_memory(memory3, sf_gte_read_data(14u));
}

void sf_draft_geometry_800D2424_stage14(uint32 memory1, uint32 memory2)
{
    sf_draft_geometry_write_memory(memory1, sf_gte_read_data(22u));
    sf_draft_geometry_write_memory(memory2, sf_gte_read_data(12u));
}

void sf_draft_geometry_800D2424_stage15(uint32 memory1)
{
    sf_draft_geometry_write_memory(memory1, sf_gte_read_data(13u));
}

void sf_draft_geometry_800D2424_stage16(uint32 memory1)
{
    sf_draft_geometry_write_memory(memory1, sf_gte_read_data(14u));
}

void sf_draft_geometry_800D2424_stage17(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5)
{
    sf_draft_geometry_write_control(16u, (uint32)input1);
    sf_draft_geometry_write_control(17u, (uint32)input2);
    sf_draft_geometry_write_control(18u, (uint32)input3);
    sf_draft_geometry_write_control(19u, (uint32)input4);
    sf_draft_geometry_write_control(20u, (uint32)input5);
}

void sf_draft_geometry_800D6C14_stage1(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, sint32 input6, sint32 *output7, sint32 *output8, sint32 *output9, sint32 *output10, sint32 *output11, sint32 *output12, sint32 input13, sint32 input14, sint32 *output15)
{
    sf_gte_write_data(0u, (uint32)input1);
    sf_gte_write_data(1u, (uint32)input2);
    sf_gte_write_data(2u, (uint32)input3);
    sf_gte_write_data(3u, (uint32)input4);
    sf_gte_write_data(4u, (uint32)input5);
    sf_gte_write_data(5u, (uint32)input6);
    sf_gte_execute(0x280030u);
    *output7 = (sint32)sf_gte_read_data(17u);
    *output8 = (sint32)sf_gte_read_data(18u);
    *output9 = (sint32)sf_gte_read_data(19u);
    *output10 = (sint32)sf_gte_read_data(12u);
    *output11 = (sint32)sf_gte_read_data(13u);
    *output12 = (sint32)sf_gte_read_data(14u);
    sf_gte_write_data(0u, (uint32)input13);
    sf_gte_write_data(1u, (uint32)input14);
    sf_gte_execute(0x180001u);
    *output15 = (sint32)sf_gte_read_data(19u);
}

void sf_draft_geometry_800D6C14_stage2(sint32 *output1)
{
    *output1 = (sint32)sf_gte_read_data(14u);
}

void sf_draft_geometry_800D6C14_stage3(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6)
{
    sf_gte_write_data(0u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(1u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(2u, sf_draft_geometry_read_memory(memory3));
    sf_gte_write_data(3u, sf_draft_geometry_read_memory(memory4));
    sf_gte_write_data(4u, sf_draft_geometry_read_memory(memory5));
    sf_gte_write_data(5u, sf_draft_geometry_read_memory(memory6));
    sf_gte_execute(0x280030u);
}

void sf_draft_geometry_800D6C14_stage4(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6)
{
    sf_draft_geometry_write_memory(memory1, sf_gte_read_data(12u));
    sf_draft_geometry_write_memory(memory2, sf_gte_read_data(17u));
    sf_draft_geometry_write_memory(memory3, sf_gte_read_data(13u));
    sf_draft_geometry_write_memory(memory4, sf_gte_read_data(18u));
    sf_draft_geometry_write_memory(memory5, sf_gte_read_data(14u));
    sf_draft_geometry_write_memory(memory6, sf_gte_read_data(19u));
}

void sf_draft_geometry_800CEDA4_stage1(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5)
{
    sf_draft_geometry_write_control(0u, (uint32)input1);
    sf_draft_geometry_write_control(1u, (uint32)input2);
    sf_draft_geometry_write_control(2u, (uint32)input3);
    sf_draft_geometry_write_control(3u, (uint32)input4);
    sf_draft_geometry_write_control(4u, (uint32)input5);
}

void sf_draft_geometry_800CEDA4_stage2(sint32 input1, sint32 input2)
{
    sf_gte_write_data(0u, (uint32)input1);
    sf_gte_write_data(1u, (uint32)input2);
    sf_gte_execute(0x486012u);
}

void sf_draft_geometry_800CEDA4_stage3(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
    *output3 = (sint32)sf_gte_read_data(11u);
    sf_gte_write_data(0u, (uint32)input4);
    sf_gte_write_data(1u, (uint32)input5);
    sf_gte_execute(0x486012u);
}

void sf_draft_geometry_800CEDA4_stage4(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
    *output3 = (sint32)sf_gte_read_data(11u);
    sf_gte_write_data(0u, (uint32)input4);
    sf_gte_write_data(1u, (uint32)input5);
    sf_gte_execute(0x486012u);
}

void sf_draft_geometry_800CEDA4_stage5(sint32 *output1, sint32 *output2)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
}

void sf_draft_geometry_800CEDA4_stage6(sint32 *output1, sint32 input2, sint32 input3, sint32 input4, sint32 input5)
{
    *output1 = (sint32)sf_gte_read_data(11u);
    sf_draft_geometry_write_control(8u, (uint32)input2);
    sf_draft_geometry_write_control(9u, (uint32)input3);
    sf_draft_geometry_write_control(10u, (uint32)input4);
    sf_draft_geometry_write_control(11u, (uint32)input5);
    sf_draft_geometry_write_control(12u, (uint32)*output1);

}

void sf_draft_geometry_800CEDA4_stage7(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, uint32 memory6, uint32 memory7, uint32 memory8, sint32 *output9, sint32 *output10, sint32 *output11)
{
    sf_draft_geometry_write_control(0u, (uint32)input1);
    sf_draft_geometry_write_control(1u, (uint32)input2);
    sf_draft_geometry_write_control(2u, (uint32)input3);
    sf_draft_geometry_write_control(3u, (uint32)input4);
    sf_draft_geometry_write_control(4u, (uint32)input5);
    sf_gte_write_data(9u, sf_draft_geometry_read_memory(memory6));
    sf_gte_write_data(10u, sf_draft_geometry_read_memory(memory7));
    sf_gte_write_data(11u, sf_draft_geometry_read_memory(memory8));
    sf_gte_execute(0x49E012u);
    *output9 = (sint32)sf_gte_read_data(25u);
    *output10 = (sint32)sf_gte_read_data(26u);
    *output11 = (sint32)sf_gte_read_data(27u);
}

void sf_draft_geometry_800CEDA4_stage8(sint32 input1, sint32 input2)
{
    sf_gte_write_data(0u, (uint32)input1);
    sf_gte_write_data(1u, (uint32)input2);
    sf_gte_execute(0x486012u);
}

void sf_draft_geometry_800CEDA4_stage9(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
    *output3 = (sint32)sf_gte_read_data(11u);
    sf_gte_write_data(0u, (uint32)input4);
    sf_gte_write_data(1u, (uint32)input5);
    sf_gte_execute(0x486012u);
}

void sf_draft_geometry_800CEDA4_stage10(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
    *output3 = (sint32)sf_gte_read_data(11u);
    sf_gte_write_data(0u, (uint32)input4);
    sf_gte_write_data(1u, (uint32)input5);
    sf_gte_execute(0x486012u);
}

void sf_draft_geometry_800CEDA4_stage11(sint32 *output1, sint32 *output2)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
}

void sf_draft_geometry_800CEDA4_stage12(sint32 *output1)
{
    *output1 = (sint32)sf_gte_read_data(11u);
}

void sf_draft_geometry_800CEDA4_stage13(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, sint32 input6, sint32 input7, sint32 input8)
{
    sf_draft_geometry_write_control(0u, (uint32)input1);
    sf_draft_geometry_write_control(1u, (uint32)input2);
    sf_draft_geometry_write_control(2u, (uint32)input3);
    sf_draft_geometry_write_control(3u, (uint32)input4);
    sf_draft_geometry_write_control(4u, (uint32)input5);
    sf_draft_geometry_write_control(5u, (uint32)input6);
    sf_draft_geometry_write_control(6u, (uint32)input7);
    sf_draft_geometry_write_control(7u, (uint32)input8);
}

void sf_draft_geometry_800D6F50_stage1(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6)
{
    sf_gte_write_data(0u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(1u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(2u, sf_draft_geometry_read_memory(memory3));
    sf_gte_write_data(3u, sf_draft_geometry_read_memory(memory4));
    sf_gte_write_data(4u, sf_draft_geometry_read_memory(memory5));
    sf_gte_write_data(5u, sf_draft_geometry_read_memory(memory6));
    sf_gte_execute(0x280030u);
}

void sf_draft_geometry_800D6F50_stage2(uint32 memory1)
{
    sf_draft_geometry_write_memory(memory1, sf_gte_read_data(12u));
}

void sf_draft_geometry_800D6F50_stage3(uint32 memory1)
{
    sf_draft_geometry_write_memory(memory1, sf_gte_read_data(13u));
}

void sf_draft_geometry_800D6F50_stage4(uint32 memory1)
{
    sf_draft_geometry_write_memory(memory1, sf_gte_read_data(14u));
}

void sf_draft_geometry_800C720C_stage1(sint32 input1, sint32 *output2)
{
    sf_gte_write_data(30u, (uint32)input1);
    *output2 = (sint32)sf_gte_read_data(31u);
}

void sf_draft_geometry_800C720C_stage2(sint32 input1, sint32 input2, sint32 input3, sint32 *output4, sint32 *output5, sint32 *output6)
{
    sf_gte_write_data(9u, (uint32)input1);
    sf_gte_write_data(10u, (uint32)input2);
    sf_gte_write_data(11u, (uint32)input3);
    sf_gte_execute(0xA00428u);
    *output4 = (sint32)sf_gte_read_data(25u);
    *output5 = (sint32)sf_gte_read_data(26u);
    *output6 = (sint32)sf_gte_read_data(27u);
}

void sf_draft_geometry_800C720C_stage3(sint32 input1, sint32 *output2)
{
    sf_gte_write_data(30u, (uint32)input1);
    *output2 = (sint32)sf_gte_read_data(31u);
}

void sf_draft_geometry_800C720C_stage4(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 *output5, sint32 *output6, sint32 *output7)
{
    sf_gte_write_data(8u, (uint32)input1);
    sf_gte_write_data(9u, (uint32)input2);
    sf_gte_write_data(10u, (uint32)input3);
    sf_gte_write_data(11u, (uint32)input4);
    sf_gte_execute(0x190003Du);
    *output5 = (sint32)sf_gte_read_data(25u);
    *output6 = (sint32)sf_gte_read_data(26u);
    *output7 = (sint32)sf_gte_read_data(27u);
}

void sf_draft_geometry_800D6B04_stage1(sint32 input1, sint32 input2, sint32 input3, sint32 input4)
{
    sf_gte_write_data(0u, (uint32)input1);
    sf_gte_write_data(1u, (uint32)input2);
    sf_gte_write_data(2u, (uint32)input3);
    sf_gte_write_data(3u, (uint32)input4);
}

void sf_draft_geometry_800D6B04_stage2(sint32 input1, sint32 input2, sint32 *output3, sint32 *output4, sint32 *output5)
{
    sf_gte_write_data(4u, (uint32)input1);
    sf_gte_write_data(5u, (uint32)input2);
    sf_gte_execute(0x280030u);
    *output3 = (sint32)sf_gte_read_data(17u);
    *output4 = (sint32)sf_gte_read_data(18u);
    *output5 = (sint32)sf_gte_read_data(19u);
}

void sf_draft_geometry_800D6B04_stage3(sint32 input1, sint32 input2)
{
    sf_gte_write_data(0u, (uint32)input1);
    sf_gte_write_data(1u, (uint32)input2);
}

void sf_draft_geometry_800D6B04_stage4(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 *output5, sint32 *output6, sint32 *output7)
{
    sf_gte_write_data(2u, (uint32)input1);
    sf_gte_write_data(3u, (uint32)input2);
    sf_gte_write_data(4u, (uint32)input3);
    sf_gte_write_data(5u, (uint32)input4);
    sf_gte_execute(0x280030u);
    *output5 = (sint32)sf_gte_read_data(17u);
    *output6 = (sint32)sf_gte_read_data(18u);
    *output7 = (sint32)sf_gte_read_data(19u);
}

void sf_draft_geometry_800D6B04_stage5(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 *output5, sint32 *output6)
{
    sf_gte_write_data(0u, (uint32)input1);
    sf_gte_write_data(1u, (uint32)input2);
    sf_gte_write_data(2u, (uint32)input3);
    sf_gte_write_data(3u, (uint32)input4);
    sf_gte_execute(0x280030u);
    *output5 = (sint32)sf_gte_read_data(18u);
    *output6 = (sint32)sf_gte_read_data(19u);
}

void sf_draft_geometry_8004C654_stage1(sint32 input1, sint32 *output2)
{
    sf_gte_write_data(30u, (uint32)input1);
    *output2 = (sint32)sf_gte_read_data(31u);
}

void sf_draft_geometry_80077B84_stage1(sint32 input1, sint32 input2, sint32 *output3)
{
    sf_gte_write_data(0u, (uint32)input1);
    sf_gte_write_data(1u, (uint32)input2);
    sf_gte_execute(0x180001u);
    *output3 = (sint32)sf_gte_read_data(19u);
}

void sf_draft_geometry_80077B84_stage2(sint32 *output1)
{
    *output1 = (sint32)sf_gte_read_data(14u);
}

void sf_draft_geometry_800C6EAC_stage1(sint32 input1, uint32 memory2, sint32 *output3, sint32 *output4)
{
    sf_gte_write_data(0u, (uint32)input1);
    sf_gte_write_data(1u, sf_draft_geometry_read_memory(memory2));
    sf_gte_execute(0x180001u);
    *output3 = (sint32)sf_gte_read_data(14u);
    *output4 = (sint32)sf_gte_read_data(19u);
}

void sf_draft_geometry_80077B48_stage1(sint32 input1, sint32 input2, sint32 *output3)
{
    sf_gte_write_data(0u, (uint32)input1);
    sf_gte_write_data(1u, (uint32)input2);
    sf_gte_execute(0x180001u);
    *output3 = (sint32)sf_gte_read_data(19u);
}

void sf_draft_geometry_800EB8D4_stage1(sint32 *output1)
{
    *output1 = (sint32)sf_draft_geometry_read_control(26u);
}

static void sf_draft_outer_product(uint32 left, uint32 right, uint32 output, uint32 command)
{
    uint32 saved[3];
    uint32 row;
    for (row = 0; row < 3u; ++row)
    {
        saved[row] = sf_draft_geometry_read_control(row * 2u);
        sf_draft_geometry_write_control(row * 2u, sf_draft_geometry_read_memory(left + row * 4u));
        sf_gte_write_data(9u + row, sf_draft_geometry_read_memory(right + row * 4u));
    }
    sf_gte_execute(command);
    for (row = 0; row < 3u; ++row)
        sf_draft_geometry_write_memory(output + row * 4u, sf_gte_read_data(25u + row));
    for (row = 0; row < 3u; ++row)
        sf_draft_geometry_write_control(row * 2u, saved[row]);
}

void sub_800EBA78(uint32 left, uint32 right, uint32 output)
{
    sf_draft_outer_product(left, right, output, 0x178000cu);
}

void sub_800EBAD0(uint32 left, uint32 right, uint32 output)
{
    sf_draft_outer_product(left, right, output, 0x170000cu);
}

/* Worker1 geometry operations use the same canonical GTE service */

void sf_draft_missing_gte_800CDE88_1(sint32 input1, sint32 input2, sint32 input3)
{
    sf_draft_geometry_write_control(13u, (uint32)input1);
    sf_draft_geometry_write_control(14u, (uint32)input2);
    sf_draft_geometry_write_control(15u, (uint32)input3);
}

void sf_draft_missing_gte_800CDE88_2(sint32 input1, sint32 input2, sint32 input3)
{
    sf_draft_geometry_write_control(13u, (uint32)input1);
    sf_draft_geometry_write_control(14u, (uint32)input2);
    sf_draft_geometry_write_control(15u, (uint32)input3);
}

void sf_draft_missing_gte_800CDE88_3(sint32 input1, sint32 input2, sint32 input3)
{
    sf_draft_geometry_write_control(13u, (uint32)input1);
    sf_draft_geometry_write_control(14u, (uint32)input2);
    sf_draft_geometry_write_control(15u, (uint32)input3);
}

void sf_draft_missing_gte_800CDE88_4(sint32 input1, sint32 input2, sint32 input3)
{
    sf_draft_geometry_write_control(13u, (uint32)input1);
    sf_draft_geometry_write_control(14u, (uint32)input2);
    sf_draft_geometry_write_control(15u, (uint32)input3);
}

void sf_draft_missing_gte_800CDE88_5(sint32 input1, sint32 input2, sint32 input3)
{
    sf_draft_geometry_write_control(13u, (uint32)input1);
    sf_draft_geometry_write_control(14u, (uint32)input2);
    sf_draft_geometry_write_control(15u, (uint32)input3);
}

void sf_draft_missing_gte_800C733C_1(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5)
{
    sf_draft_geometry_write_control(0u, (uint32)input1);
    sf_draft_geometry_write_control(1u, (uint32)input2);
    sf_draft_geometry_write_control(2u, (uint32)input3);
    sf_draft_geometry_write_control(3u, (uint32)input4);
    sf_draft_geometry_write_control(4u, (uint32)input5);
}

void sf_draft_missing_gte_800C733C_2(sint32 input1, sint32 input2)
{
    sf_gte_write_data(0u, (uint32)input1);
    sf_gte_write_data(1u, (uint32)input2);
    sf_gte_execute(0x486012u);
}

void sf_draft_missing_gte_800C733C_3(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
    *output3 = (sint32)sf_gte_read_data(11u);
    sf_gte_write_data(0u, (uint32)input4);
    sf_gte_write_data(1u, (uint32)input5);
    sf_gte_execute(0x486012u);
}

void sf_draft_missing_gte_800C733C_4(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
    *output3 = (sint32)sf_gte_read_data(11u);
    sf_gte_write_data(0u, (uint32)input4);
    sf_gte_write_data(1u, (uint32)input5);
    sf_gte_execute(0x486012u);
}

void sf_draft_missing_gte_800C733C_5(sint32 *output1, sint32 *output2, sint32 *output3)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
    *output3 = (sint32)sf_gte_read_data(11u);
}

void sf_draft_missing_gte_800C733C_6(sint32 input1, sint32 input2, sint32 input3, sint32 *output4, sint32 *output5, sint32 *output6, sint32 input7, sint32 input8, sint32 input9, sint32 *output10, sint32 *output11, sint32 *output12)
{
    sf_gte_write_data(9u, (uint32)input1);
    sf_gte_write_data(10u, (uint32)input2);
    sf_gte_write_data(11u, (uint32)input3);
    sf_gte_execute(0x41E012u);
    *output4 = (sint32)sf_gte_read_data(25u);
    *output5 = (sint32)sf_gte_read_data(26u);
    *output6 = (sint32)sf_gte_read_data(27u);
    sf_gte_write_data(9u, (uint32)input7);
    sf_gte_write_data(10u, (uint32)input8);
    sf_gte_write_data(11u, (uint32)input9);
    sf_gte_execute(0x49E012u);
    *output10 = (sint32)sf_gte_read_data(25u);
    *output11 = (sint32)sf_gte_read_data(26u);
    *output12 = (sint32)sf_gte_read_data(27u);
}

void sf_draft_missing_gte_800D2168_1(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5)
{
    sf_draft_geometry_write_control(0u, (uint32)input1);
    sf_draft_geometry_write_control(1u, (uint32)input2);
    sf_draft_geometry_write_control(2u, (uint32)input3);
    sf_draft_geometry_write_control(3u, (uint32)input4);
    sf_draft_geometry_write_control(4u, (uint32)input5);
}

void sf_draft_missing_gte_800D2168_2(sint32 input1, sint32 input2)
{
    sf_gte_write_data(0u, (uint32)input1);
    sf_gte_write_data(1u, (uint32)input2);
    sf_gte_execute(0x486012u);
}

void sf_draft_missing_gte_800D2168_3(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
    *output3 = (sint32)sf_gte_read_data(11u);
    sf_gte_write_data(0u, (uint32)input4);
    sf_gte_write_data(1u, (uint32)input5);
    sf_gte_execute(0x486012u);
}

void sf_draft_missing_gte_800D2168_4(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
    *output3 = (sint32)sf_gte_read_data(11u);
    sf_gte_write_data(0u, (uint32)input4);
    sf_gte_write_data(1u, (uint32)input5);
    sf_gte_execute(0x486012u);
}

void sf_draft_missing_gte_800D2168_5(sint32 *output1, sint32 *output2)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
}

void sf_draft_missing_gte_800D2168_6(sint32 *output1, sint32 input2, sint32 input3, sint32 input4, sint32 input5)
{
    *output1 = (sint32)sf_gte_read_data(11u);
    sf_draft_geometry_write_control(8u, (uint32)input2);
    sf_draft_geometry_write_control(9u, (uint32)input3);
    sf_draft_geometry_write_control(10u, (uint32)input4);
    sf_draft_geometry_write_control(11u, (uint32)input5);
    sf_draft_geometry_write_control(12u, (uint32)(*output1));
}

void sf_draft_missing_gte_800D2168_7(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, uint32 memory6, uint32 memory7, uint32 memory8, sint32 *output9, sint32 *output10, sint32 *output11)
{
    sf_draft_geometry_write_control(0u, (uint32)input1);
    sf_draft_geometry_write_control(1u, (uint32)input2);
    sf_draft_geometry_write_control(2u, (uint32)input3);
    sf_draft_geometry_write_control(3u, (uint32)input4);
    sf_draft_geometry_write_control(4u, (uint32)input5);
    sf_gte_write_data(9u, sf_draft_geometry_read_memory(memory6));
    sf_gte_write_data(10u, sf_draft_geometry_read_memory(memory7));
    sf_gte_write_data(11u, sf_draft_geometry_read_memory(memory8));
    sf_gte_execute(0x49E012u);
    *output9 = (sint32)sf_gte_read_data(25u);
    *output10 = (sint32)sf_gte_read_data(26u);
    *output11 = (sint32)sf_gte_read_data(27u);
}

void sf_draft_missing_gte_800D2168_8(sint32 input1, sint32 input2)
{
    sf_gte_write_data(0u, (uint32)input1);
    sf_gte_write_data(1u, (uint32)input2);
    sf_gte_execute(0x486012u);
}

void sf_draft_missing_gte_800D2168_9(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
    *output3 = (sint32)sf_gte_read_data(11u);
    sf_gte_write_data(0u, (uint32)input4);
    sf_gte_write_data(1u, (uint32)input5);
    sf_gte_execute(0x486012u);
}

void sf_draft_missing_gte_800D2168_10(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
    *output3 = (sint32)sf_gte_read_data(11u);
    sf_gte_write_data(0u, (uint32)input4);
    sf_gte_write_data(1u, (uint32)input5);
    sf_gte_execute(0x486012u);
}

void sf_draft_missing_gte_800D2168_11(sint32 *output1, sint32 *output2)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
}

void sf_draft_missing_gte_800D2168_12(sint32 *output1)
{
    *output1 = (sint32)sf_gte_read_data(11u);
}

void sf_draft_missing_gte_800D2168_13(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, sint32 input6, sint32 input7, sint32 input8)
{
    sf_draft_geometry_write_control(0u, (uint32)input1);
    sf_draft_geometry_write_control(1u, (uint32)input2);
    sf_draft_geometry_write_control(2u, (uint32)input3);
    sf_draft_geometry_write_control(3u, (uint32)input4);
    sf_draft_geometry_write_control(4u, (uint32)input5);
    sf_draft_geometry_write_control(5u, (uint32)input6);
    sf_draft_geometry_write_control(6u, (uint32)input7);
    sf_draft_geometry_write_control(7u, (uint32)input8);
}

void sf_draft_missing_gte_800D39D8_1(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, uint32 memory6, uint32 memory7, uint32 memory8, sint32 *output9, sint32 *output10, sint32 *output11)
{
    sf_draft_geometry_write_control(0u, (uint32)input1);
    sf_draft_geometry_write_control(1u, (uint32)input2);
    sf_draft_geometry_write_control(2u, (uint32)input3);
    sf_draft_geometry_write_control(3u, (uint32)input4);
    sf_draft_geometry_write_control(4u, (uint32)input5);
    sf_gte_write_data(9u, sf_draft_geometry_read_memory(memory6));
    sf_gte_write_data(10u, sf_draft_geometry_read_memory(memory7));
    sf_gte_write_data(11u, sf_draft_geometry_read_memory(memory8));
    sf_gte_execute(0x49E012u);
    *output9 = (sint32)sf_gte_read_data(25u);
    *output10 = (sint32)sf_gte_read_data(26u);
    *output11 = (sint32)sf_gte_read_data(27u);
}

void sf_draft_missing_gte_800D39D8_2(sint32 input1, sint32 input2)
{
    sf_gte_write_data(0u, (uint32)input1);
    sf_gte_write_data(1u, (uint32)input2);
    sf_gte_execute(0x486012u);
}

void sf_draft_missing_gte_800D39D8_3(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
    *output3 = (sint32)sf_gte_read_data(11u);
    sf_gte_write_data(0u, (uint32)input4);
    sf_gte_write_data(1u, (uint32)input5);
    sf_gte_execute(0x486012u);
}

void sf_draft_missing_gte_800D39D8_4(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
    *output3 = (sint32)sf_gte_read_data(11u);
    sf_gte_write_data(0u, (uint32)input4);
    sf_gte_write_data(1u, (uint32)input5);
    sf_gte_execute(0x486012u);
}

void sf_draft_missing_gte_800D39D8_5(sint32 *output1, sint32 *output2)
{
    *output1 = (sint32)sf_gte_read_data(9u);
    *output2 = (sint32)sf_gte_read_data(10u);
}

void sf_draft_missing_gte_800D39D8_6(sint32 *output1)
{
    *output1 = (sint32)sf_gte_read_data(11u);
}

void sf_draft_missing_gte_800D39D8_7(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, sint32 input6, sint32 input7, sint32 input8)
{
    sf_draft_geometry_write_control(0u, (uint32)input1);
    sf_draft_geometry_write_control(1u, (uint32)input2);
    sf_draft_geometry_write_control(2u, (uint32)input3);
    sf_draft_geometry_write_control(3u, (uint32)input4);
    sf_draft_geometry_write_control(4u, (uint32)input5);
    sf_draft_geometry_write_control(5u, (uint32)input6);
    sf_draft_geometry_write_control(6u, (uint32)input7);
    sf_draft_geometry_write_control(7u, (uint32)input8);
}

void sf_draft_missing_gte_800D5824_1(sint32 *output1, sint32 *output2, sint32 *output3)
{
    *output1 = (sint32)sf_gte_read_data(12u);
    *output2 = (sint32)sf_gte_read_data(13u);
    *output3 = (sint32)sf_gte_read_data(14u);
}

void sf_draft_missing_gte_800D5824_2(sint32 *output1, sint32 *output2, sint32 *output3)
{
    *output1 = (sint32)sf_gte_read_data(12u);
    *output2 = (sint32)sf_gte_read_data(13u);
    *output3 = (sint32)sf_gte_read_data(14u);
}

void sf_draft_missing_gte_800770F8_1(sint32 *output1, sint32 *output2)
{
    *output1 = (sint32)sf_gte_read_data(12u);
    *output2 = (sint32)sf_gte_read_data(14u);
    sf_gte_write_data(14u, (uint32)(*output1));
    sf_gte_write_data(12u, (uint32)(*output2));
}

void sf_draft_missing_gte_800770F8_2(sint32 *output1)
{
    sf_gte_execute(0x1400006u);
    *output1 = (sint32)sf_gte_read_data(24u);
}

void sf_draft_missing_gte_800770F8_3(sint32 *output1, sint32 *output2, sint32 *output3)
{
    *output1 = (sint32)sf_gte_read_data(12u);
    *output2 = (sint32)sf_gte_read_data(13u);
    *output3 = (sint32)sf_gte_read_data(14u);
}

void sf_draft_missing_gte_800D5680_1(sint32 *output1, sint32 *output2, sint32 *output3)
{
    *output1 = (sint32)sf_gte_read_data(12u);
    *output2 = (sint32)sf_gte_read_data(13u);
    *output3 = (sint32)sf_gte_read_data(14u);
}

void sf_draft_missing_gte_800D3CB4_1(sint32 input1, sint32 *output2)
{
    sf_gte_write_data(25u, (uint32)input1);
    *output2 = (sint32)sf_gte_read_data(25u);
}

void sf_draft_missing_gte_800D1898_1(sint32 *output1)
{
    sf_gte_write_data(0u, 0u);
    sf_gte_write_data(1u, 0u);
    sf_gte_execute(0x180001u);
    *output1 = (sint32)sf_gte_read_data(19u);
}

void sf_draft_missing_gte_800D1898_2(sint32 *output1)
{
    *output1 = (sint32)sf_gte_read_data(14u);
}

void sf_draft_missing_gte_800D1910_1(sint32 input1, sint32 input2, sint32 input3)
{
    sf_draft_geometry_write_control(13u, (uint32)input1);
    sf_draft_geometry_write_control(14u, (uint32)input2);
    sf_draft_geometry_write_control(15u, (uint32)input3);
}

void sf_draft_missing_gte_800CF0E4_1(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6)
{
    sf_gte_write_data(0u, sf_draft_geometry_read_memory(memory1));
    sf_gte_write_data(1u, sf_draft_geometry_read_memory(memory2));
    sf_gte_write_data(2u, sf_draft_geometry_read_memory(memory3));
    sf_gte_write_data(3u, sf_draft_geometry_read_memory(memory4));
    sf_gte_write_data(4u, sf_draft_geometry_read_memory(memory5));
    sf_gte_write_data(5u, sf_draft_geometry_read_memory(memory6));
}

void sf_draft_missing_gte_800CF0E4_2(sint32 input1)
{
    sf_gte_write_data(0u, (uint32)input1);
}

void sf_draft_missing_gte_800CF0E4_3(sint32 input1)
{
    sf_gte_write_data(1u, (uint32)input1);
}

void sf_draft_missing_gte_800CF0E4_4(sint32 input1)
{
    sf_gte_write_data(2u, (uint32)input1);
}

void sf_draft_missing_gte_800CF0E4_5(sint32 input1)
{
    sf_gte_write_data(3u, (uint32)input1);
}

void sf_draft_missing_gte_800CF0E4_6(sint32 input1)
{
    sf_gte_write_data(4u, (uint32)input1);
}

void sf_draft_missing_gte_800CF0E4_7(sint32 input1)
{
    sf_gte_write_data(5u, (uint32)input1);
}

void sf_draft_missing_gte_800CF0E4_8(void)
{
    sf_gte_execute(0x280030u);
}

void sf_draft_missing_gte_800CF0E4_9(sint32 *output1)
{
    *output1 = (sint32)sf_draft_geometry_read_control(13u);
}

void sf_draft_missing_gte_800CF0E4_10(sint32 *output1, sint32 *output2)
{
    *output1 = (sint32)sf_gte_read_data(16u);
    *output2 = (sint32)sf_gte_read_data(17u);
}

void sf_draft_missing_gte_800CF0E4_11(sint32 *output1)
{
    *output1 = (sint32)sf_gte_read_data(18u);
}

void sf_draft_missing_gte_800CF0E4_12(void)
{
    sf_gte_execute(0x1400006u);
}

void sf_draft_missing_gte_800CF0E4_13(sint32 *output1)
{
    *output1 = (sint32)sf_gte_read_data(24u);
}

void sf_draft_missing_gte_800CF0E4_14(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_draft_geometry_write_memory(memory1, sf_gte_read_data(13u));
    sf_draft_geometry_write_memory(memory2, sf_gte_read_data(14u));
    sf_draft_geometry_write_memory(memory3, sf_gte_read_data(12u));
}

void sf_draft_missing_gte_800CF0E4_15(sint32 input1)
{
    sf_gte_write_data(0u, (uint32)input1);
}

void sf_draft_missing_gte_800CF0E4_16(sint32 input1)
{
    sf_gte_write_data(1u, (uint32)input1);
}

void sf_draft_missing_gte_800CF0E4_17(sint32 input1)
{
    sf_gte_write_data(2u, (uint32)input1);
}

void sf_draft_missing_gte_800CF0E4_18(sint32 input1)
{
    sf_gte_write_data(3u, (uint32)input1);
}

void sf_draft_missing_gte_800CF0E4_19(sint32 input1)
{
    sf_gte_write_data(4u, (uint32)input1);
}

void sf_draft_missing_gte_800CF0E4_20(sint32 input1, sint32 input2)
{
    sf_gte_write_data(5u, (uint32)input1);
    sf_gte_write_data(6u, (uint32)input2);
    sf_gte_write_data(8u, 0u);
    sf_gte_execute(0xF80416u);
}

void sf_draft_missing_gte_800CF0E4_21(sint32 input1, sint32 input2, sint32 input3)
{
    sf_gte_write_data(20u, (uint32)input1);
    sf_gte_write_data(21u, (uint32)input2);
    sf_gte_write_data(22u, (uint32)input3);
}

void sf_draft_missing_gte_800CF0E4_22(uint32 memory1, uint32 memory2, uint32 memory3)
{
    sf_draft_geometry_write_memory(memory1, sf_gte_read_data(20u));
    sf_draft_geometry_write_memory(memory2, sf_gte_read_data(21u));
    sf_draft_geometry_write_memory(memory3, sf_gte_read_data(22u));
}

/* TODO Recover original callee-clobbered a1 only if this guarded branch becomes active */
uint32 sf_draft_c818c_unbound_a1_at_15198(uint32 context)
{
    if (r_u32(context + 20u) != 0u)
        return 0u;
    fprintf(stderr, "Unbound original a1 carrier at 80015198 -> 800C818C\n");
    abort();
}

/* TODO Recover original uninitialized SP10..12 location carrier before completing this path */
__declspec(noreturn) void sf_draft_df6ec_unbound_stack_location(uint32 handle)
{
    fprintf(stderr, "Unbound original DF6EC stack location for handle %08X\n", handle);
    abort();
}

__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset)
{
    /* TODO Recover the original producer contract before continuing this path */
    fprintf(stderr, "Unbound original stack field: function %08X, frame offset %X\n", function, offset);
    abort();
}
void sf_native_protected_callback(uint32 target, uint8 mode, uint32 cancellation, uint32 argument);
void sf_draft_saved_callback(uint32 target, uint8 mode, uint32 cancellation, uint32 argument)
{
    sf_native_protected_callback(target, mode, cancellation, argument);
}

sint32 sf_draft_missing_callback_i32(uint32 target)
{
    /* TODO Bind the original callback argument contract before dispatch */
    fprintf(stderr, "Unbound callback returning sint32: %08X\n", target);
    abort();
}

__declspec(noreturn) void sf_draft_missing_callback_void(uint32 target)
{
    /* TODO Bind the original callback argument contract before dispatch */
    fprintf(stderr, "Unbound callback returning void: %08X\n", target);
    abort();
}

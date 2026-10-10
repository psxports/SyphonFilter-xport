#include "game_draft.h"
#include "xport_trace.h"
#include "psx_gpu.h"

static uint32 sf_software_gpu_bound;
static uint32 sf_software_gpu_active;

static uint32 sf_sprite_sort_packet(uint32 packet, uint32 table, uint16 depth, uint8 words)
{
    sint32 index = (sint32)((uint32)depth - r_u32(table + 8u));
    uint32 link = r_u32(table + 4u) + (uint32)index * 4u;
    if (index < 0)
        fprintf(stderr, "ps_sort_sprite,bg: z resolution overflow\n");
    w_u32(packet, r_u32(link));
    w_u8(packet + 3u, words);
    w_u32(link, packet);
    w_u8(link + 3u, 0u);
    return packet + (uint32)words * 4u + 4u;
}

static void sf_sprite_rotation_z(sint16 angle, uint32 matrix[8])
{
    sint32 signed_angle = angle;
    uint32 index = (uint32)(signed_angle < 0 ? -signed_angle : signed_angle) & 4095u;
    uint32 trig = r_u32(0x801103F8u + 4u * index);
    sint32 sine = (sint16)trig;
    sint32 cosine = (sint16)(trig >> 16);
    sint16 *elements = (sint16 *)matrix;
    if (signed_angle < 0)
        sine = -sine;
    elements[0] = (sint16)cosine;
    elements[1] = (sint16)-sine;
    elements[2] = 0;
    elements[3] = (sint16)sine;
    elements[4] = (sint16)cosine;
    elements[5] = 0;
    elements[6] = 0;
    elements[7] = 0;
    elements[8] = 4096;
}

static void sf_sprite_scale(uint32 matrix[8], sint32 x, sint32 y)
{
    sint16 *elements = (sint16 *)matrix;
    uint32 i;
    for (i = 0; i < 8u; ++i)
    {
        sint32 scale = i % 3u == 0u ? x : (i % 3u == 1u ? y : 0);
        uint32 product = (uint32)(sint32)elements[i] * (uint32)scale;
        elements[i] = (sint16)((sint32)product >> 12);
    }
    /* Original final SW replaces the unused upper halfword as well */
    matrix[4] = 0u;
}

static void sf_sprite_project(uint32 matrix[8], const sint16 corners[4][3], uint32 xy[4])
{
    uint32 i;
    for (i = 0; i < 4u; ++i)
        xport_gte_write_control(i, matrix[i]);
    xport_gte_write_control(4u, (uint32)(sint32)((const sint16 *)matrix)[8]);
    for (i = 0; i < 3u; ++i)
        xport_gte_write_control(5u + i, matrix[5u + i]);
    for (i = 0; i < 3u; ++i)
    {
        sf_gte_write_data(2u * i, (uint32)(uint16)corners[i][0] | ((uint32)(uint16)corners[i][1] << 16));
        sf_gte_write_data(2u * i + 1u, (uint32)(uint16)corners[i][2]);
    }
    sf_gte_execute(0x280030u);
    xy[0] = sf_gte_read_data(12u);
    xy[1] = sf_gte_read_data(13u);
    xy[2] = sf_gte_read_data(14u);
    sf_gte_write_data(0u, (uint32)(uint16)corners[3][0] | ((uint32)(uint16)corners[3][1] << 16));
    sf_gte_write_data(1u, (uint32)(uint16)corners[3][2]);
    sf_gte_execute(0x180001u);
    xy[3] = sf_gte_read_data(14u);
}

void sub_800E82B4(sint32 source, sint32 ordering_table, uint16 depth)
{
    uint32 sprite = (uint32)source;
    uint32 flags = r_u32(sprite), packet, command, texture;
    uint32 width, height, scale, rotation;
    sint32 pivot_x, pivot_y;
    uint32 matrix[8], xy[4], i;
    sint16 corners[4][3];
    uint8 u0, u1, v0, v1;
    uint8 words;
    if ((sint32)flags < 0)
        return;
    width = r_u16(sprite + 8u);
    if (!width)
        return;
    height = r_u16(sprite + 10u);
    if (!height)
        return;
    packet = r_u32(0x8012C8A0u);
    scale = r_u32(sprite + 28u);
    rotation = r_u32(sprite + 32u);
    command = ((flags >> 5) & 0x02000000u) | ((flags << 18) & 0x01000000u) | ((uint32)r_u8(sprite + 22u) << 16) | ((uint32)r_u8(sprite + 21u) << 8) | r_u8(sprite + 20u);
    texture = r_u8(sprite + 14u) | ((uint32)r_u8(sprite + 15u) << 8) | ((uint32)(sint32)r_s16(sprite + 18u) << 22) | (((uint32)(sint32)r_s16(sprite + 16u) << 12) & 0x003F0000u);
    pivot_x = r_s16(sprite + 24u);
    pivot_y = r_s16(sprite + 26u);
    if ((flags & 0x08000000u) || (scale == 0x10001000u && !rotation && !(flags & 0x00C00000u)))
    {
        sint32 x = r_s16(sprite + 4u) + r_s16(0x8012F9F8u) - pivot_x;
        sint32 y = r_s16(sprite + 6u) + r_s16(0x8012F9FAu) - pivot_y;
        w_u32(packet + 4u, 0xE1000200u | (r_u16(sprite + 12u) & 31u) | ((flags >> 17) & 0x180u) | ((flags >> 23) & 0x60u));
        w_u32(packet + 8u, command | 0x64000000u);
        w_u32(packet + 12u, (uint32)(uint16)x | ((uint32)y << 16));
        w_u32(packet + 16u, texture);
        w_u32(packet + 20u, width | (height << 16));
        words = 5u;
    }
    else
    {
        if (rotation)
            sf_sprite_rotation_z((sint16)((sint32)rotation / 360), matrix);
        else
            for (i = 0; i < 8u; ++i)
                matrix[i] = r_u32(0x80130110u + 4u * i);
        if (scale != 0x10001000u)
            sf_sprite_scale(matrix, r_s16(sprite + 28u), r_s16(sprite + 30u));
        matrix[5] = (uint32)(sint32)r_s16(sprite + 4u);
        matrix[6] = (uint32)(sint32)r_s16(sprite + 6u);
        matrix[7] = (uint32)(sint32)(sint16)gte_read_h();
        for (i = 0; i < 4u; ++i)
        {
            corners[i][0] = (sint16)((i & 1u ? width : 0u) - (uint32)pivot_x);
            corners[i][1] = (sint16)((i & 2u ? height : 0u) - (uint32)pivot_y);
            corners[i][2] = 0;
        }
        sf_sprite_project(matrix, corners, xy);
        u0 = r_u8(sprite + 14u);
        u1 = (uint8)(u0 + r_u8(sprite + 8u) - 1u);
        v0 = r_u8(sprite + 15u);
        v1 = (uint8)(v0 + r_u8(sprite + 10u) - 1u);
        if (flags & 0x00800000u)
        {
            uint8 temporary = u0;
            u0 = u1;
            u1 = temporary;
        }
        if (flags & 0x00400000u)
        {
            uint8 temporary = v0;
            v0 = v1;
            v1 = temporary;
        }
        w_u32(packet + 4u, command | 0x2C000000u);
        w_u32(packet + 8u, xy[0]);
        w_u32(packet + 12u, u0 | ((uint32)v0 << 8) | ((uint32)(sint32)r_s16(sprite + 18u) << 22) | (((uint32)(sint32)r_s16(sprite + 16u) << 12) & 0x003F0000u));
        w_u32(packet + 16u, xy[1]);
        w_u32(packet + 20u, u1 | ((uint32)v0 << 8) | ((r_u16(sprite + 12u) & 31u) << 16) | ((flags >> 1) & 0x01800000u) | ((flags >> 7) & 0x00600000u));
        w_u32(packet + 24u, xy[2]);
        w_u32(packet + 28u, u0 | ((uint32)v1 << 8));
        w_u32(packet + 32u, xy[3]);
        w_u32(packet + 36u, u1 | ((uint32)v1 << 8));
        words = 9u;
    }
    w_u32(0x8012C8A0u, sf_sprite_sort_packet(packet, (uint32)ordering_table, depth, words));
}

static uint32 sf_graphics_device_read(uint32 address)
{
    uint32 value = r_u32(address);
    if (xport_memory_error() != XPORT_MEMORY_ERROR_NONE)
    {
        fprintf(stderr, "SF: Unbound graphics device read at %08X\n", address);
        abort();
    }
    return value;
}

uint32 sub_800E7CA4(void)
{
    uint32 control_address;
    if (sf_software_gpu_bound)
    {
        if (sf_software_gpu_active)
        {
            fprintf(stderr, "SF: BreakDraw cannot interrupt an active synchronous raster call\n");
            abort();
        }
        return 0u;
    }
    control_address = r_u32(0x8010F570u);
    uint32 control = sf_graphics_device_read(control_address);
    uint32 address;
    if (!(control & 0x01000000u))
        return 0u;
    control = sf_graphics_device_read(control_address);
    if (((control & 0x700u) >> 8) != 4u)
        return 0xFFFFFFFFu;
    control = sf_graphics_device_read(control_address);
    w_u32(control_address, control & ~0x01000000u);
    if (xport_memory_error() != XPORT_MEMORY_ERROR_NONE)
    {
        fprintf(stderr, "SF: Unbound BreakDraw DMA control at %08X\n", control_address);
        abort();
    }
    (void)sf_graphics_device_read(r_u32(0x8010F570u));
    address = sf_graphics_device_read(r_u32(0x8010F568u));
    return (address & 0x00FFFFFFu) == 0x00FFFFFFu ? 0u : address;
}

void sub_800EB714(uint32 matrix)
{
    uint32 i, values[5];
    for (i = 0; i < 5u; ++i)
        values[i] = r_u32(matrix + i * 4u);
    for (i = 0; i < 5u; ++i)
        xport_gte_write_control(i, values[i]);
}

void sub_800EB7A4(uint32 matrix)
{
    uint32 x = r_u32(matrix + 20u);
    uint32 y = r_u32(matrix + 24u);
    uint32 z = r_u32(matrix + 28u);
    xport_gte_write_control(5u, x);
    xport_gte_write_control(6u, y);
    xport_gte_write_control(7u, z);
}

void sf_native_graphics_bind_software_gpu(void)
{
    if (sf_software_gpu_active)
    {
        fprintf(stderr, "SF: Cannot rebind an active software GPU\n");
        abort();
    }
    sf_software_gpu_bound = 1u;
}

void sf_native_draw_otag(uint32 ordering_table)
{
    if (!sf_software_gpu_bound || sf_software_gpu_active)
    {
        fprintf(stderr, "SF: Invalid synchronous GPU submission state\n");
        abort();
    }
    sf_software_gpu_active = 1u;
    DrawOTag((uint32 *)sf_draft_guest_ptr(ordering_table));
    if (gpu_transfer_observation_failed() || gpu_linked_submit_failed() || xport_memory_error() != XPORT_MEMORY_ERROR_NONE)
    {
        fprintf(stderr, "SF: Native ordering table submission failed at %08X\n", ordering_table);
        abort();
    }
    sf_software_gpu_active = 0u;
}

uint32 sub_800E55F4(uint32 ordering_table)
{
    /* The synchronous owner completes the original direct-dispatch operation */
    sf_native_draw_otag(ordering_table);
    return 0u;
}

void sf_native_graphics_require_idle(void)
{
    if (!sf_software_gpu_bound || sf_software_gpu_active)
    {
        fprintf(stderr, "SF: GPU SDK operation requires an idle synchronous owner\n");
        abort();
    }
}

void sf_gte_write_data(uint32 index, uint32 value);
uint32 sf_gte_read_data(uint32 index);

uint32 sub_800EA904(sint32 value)
{
    uint32 leading, even, normalized, shift, table_offset, root;
    sf_gte_write_data(30u, (uint32)value);
    leading = sf_gte_read_data(31u);
    if (leading == 32u)
        return 0u;
    even = leading & ~1u;
    shift = (31u - even) >> 1;
    if (even >= 24u)
        normalized = (uint32)value << ((even - 24u) & 31u);
    else
        normalized = (uint32)(value >> ((24u - even) & 31u));
    table_offset = (normalized - 64u) << 1;
    root = (uint32)(sint32)(sint16)r_u16(0x8010FDB8u + table_offset);
    return (root << (shift & 31u)) >> 12;
}

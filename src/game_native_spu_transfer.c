#include "game_draft.h"
#include "psx_spu.h"

uint32 sub_800F1FF8(uint32 source, uint32 bytes)
{
    const void *data;
    uint32 result;
    FUNCTION_MARKER(0x800F1FF8u, "SCUS_942.40");
    if (bytes > 0x7EFF0u)
    {
        fprintf(stderr, "SF: Internal SPU write exceeds native transfer limit\n");
        abort();
    }
    data = source ? sf_draft_guest_ptr(source) : psx_addr(0u, 1u);
    result = SpuWrite(data, bytes);
    if (spu_transfer_failed() || result != bytes)
    {
        fprintf(stderr, "SF: Failed native SPU sample transfer\n");
        abort();
    }
    return bytes;
}

uint32 sub_800F2124(sint32 selector, uint32 address)
{
    uint32 units;
    FUNCTION_MARKER(0x800F2124u, "SCUS_942.40");
    if (r_u32(0x8011511Cu))
    {
        uint32 alignment = r_u32(0x80115124u);
        if (!alignment)
            _break(7u, 0);
        if (address % alignment)
            address = (address + alignment) & ~r_u32(0x80115128u);
    }
    units = address >> (r_u32(0x80115120u) & 31u);
    if (selector == -2)
        return address;
    if (selector == -1)
        return units & 0xFFFFu;
    w_u16(r_u32(0x801150F8u) + 2u * (uint32)selector, (uint16)units);
    return address;
}

uint32 sub_800FE724(uint32 source, uint32 bytes)
{
    uint32 count = bytes > 0x7EFF0u ? 0x7EFF0u : bytes;
    uint32 start;
    FUNCTION_MARKER(0x800FE724u, "SCUS_942.40");
    start = (uint32)r_u16(0x80115110u) << (r_u32(0x80115120u) & 31u);
    sub_800F1FF8(source, count);
    w_u16(0x80115110u, (uint16)sub_800F2124(-1, start + count));
    if (!r_u32(0x80115130u))
        w_u32(0x8011512Cu, 0u);
    return count;
}

sint32 sub_800FE3E4(uint32 source, uint16 bank)
{
    FUNCTION_MARKER(0x800FE3E4u, "SCUS_942.40");
    if (bank < 17u && r_u8(0x80130FF8u + bank) == 2u)
    {
        uint32 start = r_u32(0x8013C6D8u + 4u * bank);
        sub_800FE564(0);
        if (sub_800FE504(start))
        {
            sub_800FE4A4(source, r_u32(0x8013C648u + 4u * bank));
            w_u8(0x80130FF8u + bank, 1u);
            return bank;
        }
    }
    sub_800FB064(0);
    return -1;
}

sint32 sub_800FE594(uint32 source, uint32 bytes, sint16 bank)
{
    uint32 count;
    uint32 remaining;
    sint16 active;
    FUNCTION_MARKER(0x800FE594u, "SCUS_942.40");
    if ((uint16)bank >= 17u || r_u8(0x80130FF8u + (uint32)bank) != 2u)
        goto failure;
    if (!r_u32(0x80115B88u))
    {
        remaining = r_u32(0x8013C648u + 4u * (uint32)bank);
        w_u16(0x80115B8Cu, (uint16)bank);
        w_u32(0x80115B88u, remaining);
        sub_800FE564(0);
        if (!sub_800FE504(r_u32(0x8013C6D8u + 4u * (uint32)bank)))
        {
            w_u32(0x80115B88u, 0u);
            w_u16(0x80115B8Cu, 0xFFFFu);
            goto failure;
        }
    }
    active = r_s16(0x80115B8Cu);
    if (active != bank)
        goto failure;
    remaining = r_u32(0x80115B88u);
    count = remaining < bytes ? remaining : bytes;
    sub_800FB064(1);
    sub_800FE724(source, count);
    remaining = r_u32(0x80115B88u) - count;
    w_u32(0x80115B88u, remaining);
    if (remaining)
        return -2;
    w_u16(0x80115B8Cu, 0xFFFFu);
    w_u32(0x80115B88u, 0u);
    w_u8(0x80130FF8u + (uint32)active, 1u);
    return active;
failure:
    sub_800FB064(0);
    return -1;
}

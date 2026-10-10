#include "game_draft.h"

uint32 sub_800F5B44(sint32 sequence, sint32 track, sint8 mode, sint8 repeats)
{
    uint32 slot, offset, record, cursor, saved, restart, current, result;
    uint16 left, right;
    FUNCTION_MARKER(0x800F5B44u, "SCUS_942.40");
    slot = 0x8013B8C8u + 4u * (uint32)(sint32)(sint16)sequence;
    offset = 176u * (uint32)(sint32)(sint16)track;
    record = r_u32(slot) + offset;
    cursor = r_u32(record + 4u);
    saved = r_u32(record + 4u);
    restart = r_u32(record + 4u);
    w_u32(record, cursor);
    w_u32(record + 8u, saved);
    w_u32(record + 12u, restart);
    current = r_u32(slot) + offset;
    w_u32(current + 152u, r_u32(current + 152u) & ~0x200u);
    current = r_u32(slot) + offset;
    w_u32(current + 152u, r_u32(current + 152u) & ~4u);
    w_u8(record + 32u, (uint8)repeats);
    if (mode == 1)
    {
        current = r_u32(slot) + offset;
        w_u32(current + 152u, r_u32(current + 152u) | 1u);
        left = r_u16(record + 88u);
        w_u8(record + 20u, (uint8)mode);
        right = r_u16(record + 90u);
        w_u8(record + 33u, 0u);
        return sub_800FCCF4((sint16)((uint32)sequence | ((uint32)track << 8)), (sint16)left, (sint16)right);
    }
    result = 1u;
    if (mode == 0)
    {
        current = r_u32(slot) + offset;
        result = r_u32(current + 152u) | 2u;
        w_u32(current + 152u, result);
    }
    return result;
}

uint32 sub_800F594C(sint16 sequence, sint16 track, sint8 mode, sint16 repeats)
{
    FUNCTION_MARKER(0x800F594Cu, "SCUS_942.40");
    return sub_800F5B44(sequence, track, mode, (sint8)repeats);
}

uint32 sub_8013F5BC(uint32 value)
{
    FUNCTION_MARKER(0x8013F5BCu, "MOVIE.OVL");
    if (r_s32(0x80142A3Cu) > 0)
    {
        sub_800EC914(SF_DRAFT_PTR(char, 0x8013D690u));
        return 0u;
    }
    w_u32(0x80142A3Cu, 1u);
    w_u32(0x80142A40u, 0u);
    w_u32(0x80142A44u, 0u);
    w_u32(0x80142A48u, value);
    sub_80140EE0(0x8013F624u);
    return 1u;
}

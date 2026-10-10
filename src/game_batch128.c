#include "game_draft.h"

sint32 sub_800FD36C(sint16 sequence_track)
{
    uint32 voice = 0u;
    sint32 result;
    FUNCTION_MARKER(0x800FD36Cu, "SCUS_942.40");
    result = r_s8(0x8012FF90u);
    if (result <= 0)
        return result;
    do
    {
        if ((r_u32(0x80115618u) & (1u << (voice & 31u))) == 0u && r_s16(0x80128890u + 54u * voice) == sequence_track)
        {
            w_u16(0x80130FF0u, (uint16)voice);
            sub_800FC2F4();
        }
        voice = (voice + 1u) & 0xFFu;
        result = (sint32)voice < r_s8(0x8012FF90u);
    } while (result);
    return result;
}

sint32 sub_800F7314(sint32 sequence, sint16 track)
{
    uint32 slot, offset, record, current, delta, restart, cursor, saved_cursor;
    uint32 address, channel;
    uint16 interval;
    FUNCTION_MARKER(0x800F7314u, "SCUS_942.40");
    slot = 0x8013B8C8u + 4u * (uint32)(sint32)(sint16)sequence;
    offset = 176u * (uint32)(sint32)track;
    record = r_u32(slot) + offset;
    w_u32(record + 152u, r_u32(record + 152u) & ~1u);
    current = r_u32(slot) + offset;
    w_u32(current + 152u, r_u32(current + 152u) & ~2u);
    current = r_u32(slot) + offset;
    w_u32(current + 152u, r_u32(current + 152u) & ~8u);
    current = r_u32(slot) + offset;
    w_u32(current + 152u, r_u32(current + 152u) & ~0x400u);
    current = r_u32(slot) + offset;
    w_u32(current + 152u, r_u32(current + 152u) | 4u);
    sub_800FD36C((sint16)((uint32)sequence | ((uint32)(sint32)track << 8)));
    sub_800FA304();
    delta = r_u32(record + 132u);
    restart = r_u32(record + 140u);
    interval = r_u16(record + 86u);
    cursor = r_u32(record + 4u);
    saved_cursor = r_u32(record + 4u);
    w_u8(record + 20u, 0u);
    w_u32(record + 136u, 0u);
    w_u8(record + 28u, 0u);
    w_u8(record + 24u, 0u);
    w_u8(record + 25u, 0u);
    w_u8(record + 30u, 0u);
    w_u8(record + 26u, 0u);
    w_u8(record + 27u, 0u);
    w_u8(record + 31u, 0u);
    w_u8(record + 23u, 0u);
    w_u8(record + 33u, 0u);
    w_u8(record + 28u, 0u);
    w_u8(record + 29u, 0u);
    w_u8(record + 21u, 0u);
    w_u8(record + 22u, 0u);
    w_u32(record + 144u, delta);
    w_u32(record + 148u, restart);
    w_u16(record + 84u, interval);
    w_u32(record, cursor);
    w_u32(record + 8u, saved_cursor);
    address = record;
    for (channel = 0u; channel < 16u; ++channel)
    {
        w_u8(record + channel + 55u, (uint8)channel);
        w_u8(record + channel + 39u, 64u);
        w_u16(address + 96u, 127u);
        address += 2u;
    }
    w_u16(record + 92u, 127u);
    w_u16(record + 94u, 127u);
    return 127;
}

sint32 sub_80147C08(void)
{
    FUNCTION_MARKER(0x80147C08u, "TITLE.DEP.OVL");
    w_u16(0x8014A814u, 0xFFFFu);
    w_u16(0x8014A816u, 0xFFFFu);
    w_u32(0x8014A8F4u, 0u);
    w_u32(0x8014A8F8u, 0u);
    return -1;
}

uint32 sub_800F7AFC(sint32 sequence, sint16 track, uint16 left, uint16 right)
{
    uint32 record;
    FUNCTION_MARKER(0x800F7AFCu, "SCUS_942.40");
    record = r_u32(0x8013B8C8u + 4u * (uint32)(sint32)(sint16)sequence) + 176u * (uint32)(sint32)track;
    if (r_u32(record + 152u) == 1u)
        return sub_800FCCF4((sint16)((uint32)sequence | ((uint32)(sint32)track << 8)), (sint16)left, (sint16)right);
    w_u16(record + 88u, left);
    w_u16(record + 90u, right);
    return 1u;
}

#include "game_draft.h"

sint32 sub_8014D118(void)
{
    uint32 output, index = 0u, level_offset = 0u, record, level_record;
    uint32 entry, rejected;
    sint32 count;
    FUNCTION_MARKER(0x8014D118u, "INIT.DEP.OVL");
    output = sub_800DE414((sint32)(r_u32(0x80116A5Cu) * 36u));
    if (output == 0u)
        sub_800DDC34(1, 0u, 0x8014C284u, 753);
    count = (sint32)r_u32(0x80116A5Cu);
    if (count <= 0)
        return count;
    do
    {
        entry = (uint32)(sint32)(sint16)(uint16)index;
        record = output + 28u;
        level_record = r_u32(0x80115CCCu) + level_offset;
        w_u32(record - 12u, 0u);
        w_u32(record - 8u, 0u);
        w_u32(record - 20u, 0u);
        w_u32(record - 16u, 0u);
        w_u32(record - 4u, level_record + 56u);
        rejected = sub_800172B4((sint16)entry) & 255u;
        if (rejected != 0u)
        {
            level_record = r_u32(0x80115CCCu) + 76u * entry;
            w_u16(level_record + 38u, 0u);
            w_u16(level_record + 36u, 0u);
            w_u32(level_record + 52u, 0u);
        }
        else
        {
            w_u16(record - 26u, (uint16)index);
            w_u8(output, 0u);
            w_u8(record - 27u, 0u);
            w_u8(record + 7u, 0u);
            w_u8(record + 4u, 6u);
            w_u8(record + 5u, 0u);
            w_u8(record + 6u, 0u);
            level_record = r_u32(0x80115CCCu) + level_offset;
            w_u32(record - 24u, 0u);
            w_u32(record, 0u);
            w_u32(level_record + 52u, output);
            output += 36u;
        }
        ++index;
        level_offset += 76u;
    } while ((sint32)index < (sint32)r_u32(0x80116A5Cu));
    return 0;
}

uint32 sub_800172B4(sint16 index)
{
    sint32 kind;
    uint32 row, definition;
    FUNCTION_MARKER(0x800172B4u, "SCUS_942.40.DEP");
    if (index == 666)
        kind = 666;
    else
    {
        row = r_u32(0x80115CCCu) + 76u * (uint32)(sint32)index;
        definition = r_u32(row);
        kind = r_s16(r_u32(0x80116B98u) + 20u * definition);
    }
    switch (kind)
    {
        case 14:
        case 24:
        case 34:
        case 93:
        case 95:
        case 115:
        case 116:
        case 119:
            return 1u;
        default:
            return 0u;
    }
}

#include "game_draft.h"

sint32 sub_8014C500(uint8 embedded)
{
    char filename[80];
    uint32 base, header, name, list, objects, groups, parallel, row, value, second;
    uint32 index, entry, count;
    sint32 group_count, object_count, result;
    FUNCTION_MARKER(0x8014C500u, "INIT.DEP.OVL");
    if (embedded != 0u)
    {
        header = r_u32(0x80116B94u);
        base = r_u32(header + 48u);
        base += r_u32(header + 12u);
        w_u32(0x80116B18u, base);
    }
    else
    {
        name = r_u32(0x80102D1Cu + 4u * (uint32)(sint32)r_s16(0x80130C88u));
        sub_800EC924(sf_draft_guest_address(filename), 0x8014C20Cu, name, name);
        sub_80015850(filename, 0x80116B18u, 0u);
        base = r_u32(0x80116B18u);
    }
    header = r_u32(0x80116B18u);
    count = r_u32(header + 4u);
    object_count = (sint32)r_u32(header + 8u);
    group_count = (sint32)r_u32(header + 12u);
    second = r_u32(header + 28u);
    list = base + r_u32(header + 16u);
    w_u32(0x801169A8u, count);
    w_u32(0x80116A5Cu, (uint32)object_count);
    w_u32(0x80116B14u, (uint32)group_count);
    w_u32(0x80116AB0u, second);
    w_u32(0x80116B98u, list);
    for (index = 0u; (sint32)index < group_count; ++index)
    {
        value = base + r_u32(list + 4u);
        second = base + r_u32(list + 12u);
        w_u32(list + 4u, value);
        w_u32(list + 12u, second);
        list += 20u;
    }
    header = r_u32(0x80116B18u);
    objects = base + r_u32(header + 20u);
    object_count = (sint32)r_u32(0x80116A5Cu);
    w_u32(0x80115CCCu, objects);
    row = objects;
    for (index = 0u; (sint32)index < object_count; ++index)
    {
        value = r_u32(row + 44u);
        if (value != 0u)
            w_u32(row + 44u, base + value);
        row += 76u;
    }
    header = r_u32(0x80116B18u);
    value = base + r_u32(header + 24u);
    group_count = (sint32)r_u32(header + 32u);
    w_u32(0x80116A30u, value);
    value = r_u32(header + 40u);
    w_u32(0x80116ADCu, 0u);
    w_u32(0x80116A54u, (uint32)group_count);
    w_u32(0x80116B10u, base + value);
    if (group_count > 0)
        w_u32(0x80116ADCu, base + r_u32(header + 36u));
    index = 0u;
    if (group_count > 0)
    {
        do
        {
            row = r_u32(0x80116ADCu) + 16u * index;
            sub_8005FC80(index);
            w_u32(row + 8u, base + r_u32(row + 8u));
            value = r_u32(row + 12u);
            count = r_u8(row + 4u);
            w_u32(row + 12u, base + value);
            entry = 0u;
            if (count != 0u)
            {
                do
                {
                    list = r_u32(row + 8u) + 4u * entry;
                    w_u32(list, base + r_u32(list));
                    count = r_u8(row + 4u);
                    ++entry;
                } while (entry < count);
            }
            group_count = (sint32)r_u32(0x80116A54u);
            ++index;
        } while ((sint32)index < group_count);
    }
    result = (sint32)r_u32(0x801169A8u);
    if (result > 0)
    {
        objects = r_u32(0x80115CCCu);
        groups = r_u32(0x80116A30u);
        parallel = r_u32(0x80116B10u);
        index = 0u;
        do
        {
            w_u32(groups + 4u, base + r_u32(groups + 4u));
            w_u32(parallel + 4u, base + r_u32(parallel + 4u));
            count = r_u32(groups);
            entry = 0u;
            if ((sint32)count > 0)
            {
                do
                {
                    list = r_u32(groups + 4u) + 4u * entry;
                    w_u32(list, objects + 76u * r_u32(list));
                    count = r_u32(groups);
                    ++entry;
                } while ((sint32)entry < (sint32)count);
            }
            groups += 8u;
            count = r_u32(0x801169A8u);
            ++index;
            result = (sint32)index < (sint32)count;
            parallel += 8u;
        } while (result);
    }
    return result;
}

uint32 sub_8005FC80(uint32 index)
{
    uint32 row, flags, counter;
    FUNCTION_MARKER(0x8005FC80u, "SCUS_942.40");
    row = r_u32(0x80116ADCu) + 16u * index;
    flags = r_u16(row);
    if ((flags & 0x7FFu) == 0u)
        w_u16(row, (uint16)(flags | 0x7FFu));
    counter = r_u16(0x801169BAu);
    flags = r_u16(row) & 0xBFFFu;
    w_u16(row, (uint16)flags);
    w_u16(0x801169BAu, (uint16)(counter + 1u));
    return flags;
}

#include "game_draft.h"

uint32 sub_80082358(void)
{
    uint32 index;
    FUNCTION_MARKER(0x80082358u, "SCUS_942.40.DEP");
    w_u32(0x80116AA4u, 0x8013D630u);
    w_u32(0x8011609Cu, 0u);
    w_u32(0x80116A08u, 0u);
    w_u32(0x80116B3Cu, 0u);
    for (index = 0u; index < 30u; ++index)
    {
        w_u32(0x8012BD44u + 36u * index, 0xFFFFFFFFu);
        w_u32(0x8012BD48u + 36u * index, index);
    }
    return 0u;
}

uint32 sub_80152D6C(void)
{
    uint8 file[80];
    uint32 group, offset, index, address, name, file_address, cursor;
    sint32 found;
    FUNCTION_MARKER(0x80152D6Cu, "INIT.DEP.OVL");
    sub_80082358();
    for (group = 0u; group < 2u; ++group)
    {
        address = 0x80127CA8u + 32u * group;
        for (index = 32u; index != 0u; --index)
            w_u8(address + index - 1u, 0u);
        name = group == 0u ? 0x8014C0A8u : 0x8014C470u;
        sub_800EC924(0x8012FF68u, 0x8014C45Cu, r_u32(0x80102D1Cu + 4u * (uint32)(sint32)r_s16(0x80130C88u)), name);
        found = sub_800DEB50((sint32)sf_draft_guest_address(file), (sint32)0x8012FF68u);
        if (group == 0u && found == 0)
            sub_800DDC34(1, 0u, 0x8014C284u, 1830);
        if (found != 0)
        {
            w_u16(0x8011606Au, r_u16(0x8011606Au) + 1u);
            file_address = (uint32)sub_800EDB24((uint32)found) + 1u;
            offset = 528u * group;
            cursor = 0x8012DBB8u;
            for (index = 0u; index < 33u; ++index)
            {
                address = cursor + offset;
                w_u32(address, 0u);
                sub_800EDA20((sint32)file_address, address + 4u);
                cursor += 16u;
                w_u8(address + 9u, (uint8)index);
                w_u8(address + 10u, (uint8)index);
                file_address += 16u;
            }
        }
    }
    return 0u;
}

void sub_800CD808(sint32 first, sint32 second)
{
    FUNCTION_MARKER(0x800CD808u, "SCUS_942.40.DEP");
    w_u32(0x801164B8u, (uint32)first);
    w_u32(0x801164C0u, (uint32)second);
}

void sub_800CD818(sint16 value)
{
    FUNCTION_MARKER(0x800CD818u, "SCUS_942.40.DEP");
    w_u16(0x801164BCu, (uint16)value);
}

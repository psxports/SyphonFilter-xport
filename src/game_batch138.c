#include "game_draft.h"

static void sf_init_load_model_variant(uint32 offset, uint32 name_field)
{
    uint32 attempt, row, name, length, archive;
    static const uint32 extensions[3] = {0x8014C26Cu, 0x8014C274u, 0x8014C27Cu};
    row = r_u32(0x80116B98u) + offset;
    name = r_u32(row + name_field);
    if (r_u8(name) == 0u)
        return;
    for (attempt = 0u; attempt < 3u; ++attempt)
    {
        row = r_u32(0x80116B98u) + offset;
        length = (uint32)sub_800EC8A4(r_u32(row + name_field));
        w_u8(r_u32(row + name_field) + length - 4u, 0u);
        row = r_u32(0x80116B98u) + offset;
        name = r_u32(row + name_field);
        sub_800EC874(name, extensions[attempt]);
        row = r_u32(0x80116B98u) + offset;
        archive = r_u32(0x801169C8u);
        name = r_u32(row + name_field);
        if (sub_800DFD64((sint32)archive, (sint32)name, row + name_field + 4u) == 0)
            return;
    }
}

sint32 sub_8014CC70(void)
{
    uint32 resource, name, index = 0u, offset;
    sint32 level, count;
    FUNCTION_MARKER(0x8014CC70u, "INIT.DEP.OVL");
    level = r_s16(0x80130C88u);
    w_u16(0x80116AAEu, 0xFFFFu);
    w_u16(0x80116B00u, 0xFFFFu);
    w_u32(0x80116934u, 0u);
    w_u32(0x80116970u, 0u);
    if (level == 3)
        name = 0x8014C23Cu;
    else if ((uint16)(level - 7) < 2u || level == 10)
        name = 0x8014C248u;
    else if ((uint16)(level - 18) < 2u)
        name = 0x8014C254u;
    else
        name = 0x8014C260u;
    if (sub_800DFD64((sint32)r_u32(0x801169C8u), (sint32)name, sf_draft_guest_address(&resource)) == 0)
        sub_800D0D90(resource);
    if ((sint32)r_u32(0x80116B14u) > 0)
    {
        do
        {
            offset = 20u * (uint32)(sint32)(sint16)(uint16)index;
            sf_init_load_model_variant(offset, 4u);
            sf_init_load_model_variant(offset, 12u);
            ++index;
        } while ((sint32)(sint16)(uint16)index < (sint32)r_u32(0x80116B14u));
    }
    count = (sint32)r_u32(0x80116A5Cu);
    if (count <= 0)
        return count;
    index = 0u;
    do
    {
        sub_80015364(2u, 5u, 65534, (sint16)(uint16)index, 0, 0, 0, 0);
        ++index;
    } while ((sint32)(sint16)(uint16)index < (sint32)r_u32(0x80116A5Cu));
    return 0;
}

void sub_800D0D90(uint32 resource)
{
    FUNCTION_MARKER(0x800D0D90u, "SCUS_942.40.DEP");
    w_u32(0x80116520u, resource);
}

uint32 sub_800EC874(uint32 destination, uint32 source)
{
    uint32 end;
    FUNCTION_MARKER(0x800EC874u, "SCUS_942.40.DEP");
    end = destination + (uint32)sub_800EC8A4(destination);
    sub_800EC894(end, source);
    return destination;
}

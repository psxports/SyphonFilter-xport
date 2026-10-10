#include "game_draft.h"

void sub_80148CD4(sint32 selection)
{
    FUNCTION_MARKER(0x80148CD4u, "TITLE.OVL");
    if (selection == 1 && r_u32(0x8014A818u) != 0u)
        selection = (sint32)(2u - r_u32(0x8014A8F0u));
    uint32 index = r_u32(0x8014A8B0u);
    sint32 count = (sint32)r_u32(0x8014A8B4u + (index << 2));
    if (selection < count && selection >= 0)
    {
        if (r_u32(0x8014B468u) == 0u)
            sub_8006BC98(5, 2u, 0, 0u);
        w_u32(0x8014A8F0u, (uint32)selection);
    }
}

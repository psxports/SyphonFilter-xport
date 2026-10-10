#include "game_draft.h"

sint32 sub_800E9B44(sint32 mode)
{
    FUNCTION_MARKER(0x800E9B44u, "SCUS_942.40");
    if (mode == 1)
    {
        w_u32(0x8013B8C0u, (uint32)mode);
        return 1;
    }
    if (mode < 2)
    {
        if (mode == 0)
        {
            w_u32(0x8013B8C0u, 0u);
            return 2;
        }
    }
    else if (mode == 2 || mode == 3)
    {
        w_u32(0x8013B8C0u, (uint32)mode);
        return 3;
    }
    return sub_800EC914(SF_DRAFT_PTR(char, 0x80013D2Cu), mode);
}

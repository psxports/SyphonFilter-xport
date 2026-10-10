#include "game_draft.h"

void sub_80149154(void)
{
    FUNCTION_MARKER(0x80149154u, "TITLE.OVL");
    if (r_u32(0x8014A8F0u) == 0u)
    {
        sub_80082EC0();
        sub_80016568(0x8014A4F8u);
        w_u32(0x8014A80Cu, r_u32(0x801169A4u) + 40u);
    }
    else
    {
        /* TODO Missing callee export; retain exact zero-argument transfer */
        sf_draft_call(0x80148B1Cu, 0u, NULL);
    }
}

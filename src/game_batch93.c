#include "game_draft.h"

sint32 sub_8013D830(void)
{
    FUNCTION_MARKER(0x8013D830u, "MOVIE.DEP.OVL");
    sint32 status = sub_800DF32C(r_u32(0x801419E0u));
    if (status)
    {
        sub_8013E8F4();
        return status;
    }
    sub_800F0B14(1, 1, (sint32)r_u32(0x801419ECu));
    sub_800F0704();
    w_u8(0x80141A2Eu, 1u);
    return 0;
}

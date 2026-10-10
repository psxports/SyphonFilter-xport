#include "game_draft.h"

sint32 sub_8013E4E0(void)
{
    FUNCTION_MARKER(0x8013E4E0u, "MOVIE.DEP.OVL");
    sint32 status;
    if (!r_u8(0x80141A20u))
        return 28;
    (void)r_u32(0x801419E0u);
    w_u8(0x80141A29u, 1u);
    w_u8(0x80141A2Au, 1u);
    w_u8(0x80141A2Bu, 0u);
    w_u8(0x80141A2Cu, 0u);
    w_u8(0x80141A2Eu, 1u);
    status = sub_8013D830();
    if (status)
    {
        sub_8013E8F4();
        return status;
    }
    sub_8013E9D0(0);
    return 0;
}

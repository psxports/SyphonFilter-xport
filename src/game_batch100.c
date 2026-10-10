#include "game_draft.h"

sint32 sub_8013E7BC(void)
{
    volatile uint32 counter = 0u;
    uint32 previous;
    FUNCTION_MARKER(0x8013E7BCu, "MOVIE.DEP.OVL");
    if (r_u8(0x80141A20u) == 0u)
        return 28;
    if (r_u8(0x80141A2Au) != 0u)
        return 0;
    do
    {
        previous = counter;
        counter = previous + 1u;
    } while (previous <= 1000000u);
    /* Service real queued native completions after the original pure delay */
    sf_native_mdec_poll();
    if (r_u8(0x80141A2Au) != 0u)
        return 0;
    w_u8(0x80141A2Au, 1u);
    return 39;
}

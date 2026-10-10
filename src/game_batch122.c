#include "game_draft.h"

void sf_native_video_poll(void);

void sub_8013F57C(void)
{
    FUNCTION_MARKER(0x8013F57Cu, "MOVIE.OVL");
    while (r_u32(0x80142A3Cu) != 0u)
    {
        /* Native execution must deliver the interrupts that complete this wait */
        sf_native_video_poll();
    }
    sub_800E4248(7u, 0u);
    sub_801412AC();
}

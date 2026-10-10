#include "game_draft.h"

static sint32 sf_movie_pause_core(uint32 disposing_handle)
{
    if (!r_u8(0x80141A20u))
        return 28;
    if (r_u8(0x80141A2Cu))
        return 0;
    sub_800F0B14(1, 0, (sint32)r_u32(0x801419ECu));
    if (disposing_handle)
        sf_file_cancel_before_movie_dispose(disposing_handle);
    else
        sub_800DF6EC(1);
    w_u8(0x80141A2Cu, 1u);
    return 0;
}

sint32 sub_8013E83C(void)
{
    FUNCTION_MARKER(0x8013E83Cu, "MOVIE.DEP.OVL");
    return sf_movie_pause_core(0u);
}

sint32 sf_movie_pause_before_dispose(uint32 handle)
{
    return sf_movie_pause_core(handle);
}

#include "game_draft.h"

sint32 sub_8013E83C(void);
void sub_8013E9D0(sint32 enabled);
uint32 sub_8013EC6C(uint32 source);

sint32 sub_8013E8F4(void)
{
    FUNCTION_MARKER(0x8013E8F4u, "MOVIE.OVL");
    /* TODO Integrate remaining MOVIE service dependencies */
    if (r_u8(0x80141A20u))
    {
        sf_movie_pause_before_dispose(r_u32(0x801419E0u));
        sub_800F0764();
        sub_8013E9D0(0);
        sub_8013EC6C(0);
        sub_800DF3B0(0x801419E0u);
        w_u8(0x80141A20u, 0u);
    }
    return 0;
}

uint32 sub_800834D8(void)
{
    FUNCTION_MARKER(0x800834D8u, "SCUS_942.40");
    uint32 flag = sub_80016160() & 0xFFu;
    uint32 current = r_u32(0x801169A4u);
    uint32 cached = r_u32(SF_DRAFT_GP + 0xBC0u);

    if (!((current + 1u < cached && flag == 0u) || cached < current))
        return 0xFFFFFFFFu;
    /* The less-than branch reloads the cached value before cancellation */
    if (!(current + 1u < cached && flag == 0u))
        cached = r_u32(SF_DRAFT_GP + 0xBC0u);
    if (cached != 0xFFFFFFFFu)
        sub_800C8A9C((sint32)0x80086830u, 0, 0);
    sub_80015364(0x1Fu, 4u, 65534, 65534, 0, 0, 0, 0);
    current = r_u32(0x801169A4u) + 1u;
    w_u32(SF_DRAFT_GP + 0xBC0u, current);
    return current;
}

uint32 sub_800CA6EC(void)
{
    FUNCTION_MARKER(0x800CA6ECu, "SCUS_942.40");
    uint32 callback = r_u32(SF_DRAFT_GP + 0x878u);
    if (callback == 0u)
        return 0u;
    w_u32(SF_DRAFT_GP + 0x878u, 0u);
    return sf_draft_call(callback, 0u, NULL);
}

#include "game_draft.h"

uint32 sub_80140FF4(void)
{
    FUNCTION_MARKER(0x80140FF4u, "MOVIE.OVL");
    w_u32(0x80142B08u, 1u);
    return 0u;
}

void sub_801412AC(void)
{
    uint32 enabled, index;
    FUNCTION_MARKER(0x801412ACu, "MOVIE.OVL");
    enabled = sub_800E3F34();
    for (index = 0u; index < 8u; ++index)
        CloseEventPSX(r_u32(0x80142AE4u + 4u * index));
    if (enabled == 1u)
        sub_800E3F44();
}

uint32 sub_80141044(void)
{
    FUNCTION_MARKER(0x80141044u, "MOVIE.OVL");
    w_u32(0x80142B18u, 1u);
    return 0u;
}

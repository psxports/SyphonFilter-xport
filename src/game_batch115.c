#include "game_draft.h"

void sub_80140F5C(void)
{
    FUNCTION_MARKER(0x80140F5Cu, "MOVIE.OVL");
    uint32 index = r_u32(0x801429ECu);
    uint32 callback, argument;
    if ((sint32)index < 0)
        return;
    callback = r_u32(0x80142AD4u + (index << 2));
    argument = 0x80142A94u + (index << 4);
    if (sf_draft_call(callback, 1u, &argument) != 0u)
        w_u32(0x801429ECu, r_u32(0x801429ECu) - 1u);
}

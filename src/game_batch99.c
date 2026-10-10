#include "game_draft.h"

void sub_8013DF00(void)
{
    FUNCTION_MARKER(0x8013DF00u, "MOVIE.OVL");
    sint32 block_width;
    sint32 block_x;
    sint32 movie_x;
    sint32 movie_width;
    uint32 index;
    uint32 output;
    uint32 words;
    uint16 x;
    uint16 width;
    if (r_u32(0x80141A30u) == 1u && r_u32(0x8012CA00u) == 1u)
    {
        /* TODO Bind the original RGB24 stream service if this branch is used */
        sf_draft_call(0x800F0B34u, 0u, NULL);
        w_u32(0x8012CA00u, 0u);
    }
    block_width = (sint32)(sint16)r_u16(0x80142A20u);
    block_x = (sint32)(sint16)r_u16(0x80142A1Cu);
    movie_x = (sint32)(sint16)r_u16(0x80142A14u);
    movie_width = (sint32)(sint16)r_u16(0x80142A18u);
    if (movie_x + movie_width >= block_x + 2 * block_width)
    {
        index = r_u32(0x80141A1Cu);
        words = r_u32(0x80142A10u);
        output = r_u32(0x80141A0Cu + (index << 2));
        sub_8013EBB0(output, words);
    }
    else
    {
        sub_800E5000(0);
        w_u8(0x80141A2Au, 1u);
    }
    index = r_u32(0x80141A1Cu);
    index = index < 1u;
    output = r_u32(0x80141A0Cu + (index << 2));
    w_u32(0x80141A1Cu, index);
    sub_800E52AC(0x80142A1Cu, (sint32)output);
    x = r_u16(0x80142A1Cu);
    width = r_u16(0x80142A20u);
    w_u16(0x80142A1Cu, (uint16)((uint32)x + (uint32)width));
}

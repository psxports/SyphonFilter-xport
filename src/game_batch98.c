#include "game_draft.h"

sint32 sub_8013DE64(uint32 payload, uint32 block_words, uint32 mode, uint32 index_address, uint32 buffers)
{
    FUNCTION_MARKER(0x8013DE64u, "MOVIE.OVL");
    uint32 index;
    uint32 output;
    sub_8013E9D0(1);
    sf_draft_call(0x8013EB34u, 2u, (const uint32[]){payload, mode == 1u});
    index = r_u32(index_address);
    output = r_u32(buffers + (index << 2));
    sf_draft_call(0x8013EBB0u, 2u, (const uint32[]){output, block_words});
    index = r_u32(index_address);
    w_u32(index_address, index < 1u);
    return 0;
}

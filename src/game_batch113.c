#include "game_draft.h"

void sub_80140EE0(uint32 callback)
{
    FUNCTION_MARKER(0x80140EE0u, "MOVIE.OVL");
    uint32 index = r_u32(0x801429ECu) + 1u;
    uint32 slot;
    if ((sint32)index >= 4)
    {
        sub_800EC914(SF_DRAFT_PTR(char, 0x8013D810u));
        return;
    }
    slot = 0x80142AA0u + (index << 4);
    w_u32(0x801429ECu, index);
    w_u32(0x80142AD4u + (index << 2), callback);
    w_u32(slot, 0u);
    w_u32(slot - 4u, 0u);
    w_u32(slot - 8u, 0u);
    w_u32(slot - 12u, 0u);
}

#include "game_draft.h"

sint32 sub_8013F7F8(uint32 argument)
{
    FUNCTION_MARKER(0x8013F7F8u, "MOVIE.OVL");
    if (r_s32(0x80142A3Cu) > 0)
    {
        sub_800EC914(SF_DRAFT_PTR(char, 0x8013D690u));
        return 0;
    }
    w_u32(0x80142A3Cu, 2u);
    w_u32(0x80142A40u, 0u);
    w_u32(0x80142A44u, 0u);
    w_u32(0x80142A48u, argument);
    sub_80140EE0(0x8013F860u);
    return 1;
}

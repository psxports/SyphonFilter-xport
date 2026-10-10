#include "game_draft.h"

sint32 sub_8013DDE0(uint32 payload, uint32 destination)
{
    FUNCTION_MARKER(0x8013DDE0u, "MOVIE.OVL");
    uint32 size = sf_draft_call(0x8013EB28u, 1u, (const uint32[]){payload});
    uint32 result;
    if (r_u32(0x80142A0Cu) < size)
    {
        sf_draft_call(0x800F0964u, 1u, (const uint32[]){payload});
        return 31;
    }
    sf_draft_call(0x8013F180u, 3u, (const uint32[]){payload, destination, r_u32(0x80142B44u)});
    result = sf_draft_call(0x800F0964u, 1u, (const uint32[]){payload});
    return result == 1u ? 38 : 0;
}

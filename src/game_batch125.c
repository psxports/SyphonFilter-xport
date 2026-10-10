#include "game_draft.h"

uint32 sub_8014D744(uint32 end)
{
    uint32 cursor = end - 4u;
    uint32 words, index = 0u, result = (uint32)-120000;
    FUNCTION_MARKER(0x8014D744u, "INIT.DEP.OVL");
    words = (uint32)((sint32)sub_800DE3FC() >> 2) - 9232u - 120000u;
    if ((sint32)words <= 0)
        return result;
    do
    {
        w_u32(cursor, 0u);
        ++index;
        result = (uint32)((sint32)index < (sint32)words);
        cursor -= 4u;
    } while (result != 0u);
    return result;
}

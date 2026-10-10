#include "game_draft.h"

sint32 sub_80147B90(void)
{
    sint32 previous;
    uint16 next;
    sint32 index;
    FUNCTION_MARKER(0x80147B90u, "TITLE.DEP.OVL");
    previous = (sint32)(sint16)r_u16(0x8014A814u);
    if (previous == (sint32)(sint16)r_u16(0x8014A816u))
        return 9;
    next = (uint16)((uint32)previous + 1u);
    w_u16(0x8014A814u, next);
    if ((sint16)next >= 10)
        w_u16(0x8014A814u, 0u);
    index = (sint32)(sint16)r_u16(0x8014A814u);
    return (sint32)r_u32(0x8014A928u + ((uint32)index << 2));
}

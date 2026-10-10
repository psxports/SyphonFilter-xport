#include "game_draft.h"

void sub_801473A4(sint32 x, sint32 y, sint32 z, sint32 w)
{
    FUNCTION_MARKER(0x801473A4u, "TITLE.OVL");
    sint32 difference;
    w_u32(0x8014B248u, (((uint32)x << 6) & 0xFFFFu) | ((uint32)y << 22));
    w_u32(0x8014B24Cu, (((uint32)z << 6) & 0xFFFFu) | ((uint32)w << 22));
    difference = (sint32)(sint16)r_u16(0x8014B248u) - (sint32)(sint16)r_u16(0x8014B240u);
    w_u16(0x8014B250u, (uint16)(difference / 8));
    difference = (sint32)(sint16)r_u16(0x8014B24Au) - (sint32)(sint16)r_u16(0x8014B242u);
    w_u16(0x8014B252u, (uint16)(difference / 8));
    difference = (sint32)(sint16)r_u16(0x8014B24Cu) - (sint32)(sint16)r_u16(0x8014B244u);
    w_u16(0x8014B254u, (uint16)(difference / 8));
    difference = (sint32)(sint16)r_u16(0x8014B24Eu) - (sint32)(sint16)r_u16(0x8014B246u);
    w_u16(0x8014B256u, (uint16)(difference / 8));
}

#include "game_draft.h"

sint32 sub_8014EE38(uint32 record, sint32 kind)
{
    uint8 flags;
    sint16 index;
    FUNCTION_MARKER(0x8014EE38u, "INIT.MAIN.OVL");
    index = r_s16(record + 2u);
    w_u8(record + 34u, 0u);
    sub_8014C94C(index, 0u);
    w_u8(r_u32(record + 8u) + 9u, 64u);
    flags = r_u8(record);
    w_u8(record, flags & 0x16u);
    w_u8(record, kind == 5 ? (flags & 0x16u) | 0x10u : flags & 6u);
    w_u8(record + 32u, r_u8(record + 32u) | 0x80u);
    sub_80032784((sint32)record, (sint32)0x8012C8B0u, 0, 0u);
    w_u32(record + 16u, 0u);
    return sub_8014EB54(record);
}

#include "game_draft.h"

void sub_80147A70(void)
{
    sint32 handle;
    FUNCTION_MARKER(0x80147A70u, "TITLE.OVL");
    sub_8013F57C();
    handle = (sint32)r_u32(0x80116964u);
    w_u32(0x8014A818u, 8u);
    sub_800C7BF8(handle, 0x8014B064u);
    sub_80044848(0);
    sub_80084C30(r_u8(0x8014A810u));
    sub_80084C30(r_u8(0x8014A811u));
    sub_800CB1FC();
    if (r_u32(0x8014B5A8u) != 0u)
        sub_800C7BF8((sint32)r_u32(0x80116998u), 0x8014B5A8u);
}

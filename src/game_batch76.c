#include "game_draft.h"

sint32 sub_80147924(void)
{
    FUNCTION_MARKER(0x80147924u, "TITLE.DEP.OVL");
    uint32 allocation;
    uint32 argument = 1u;
    uint32 cursor;
    int index;

    sub_8003B030();
    w_u8(0x8014A810u, (uint8)sub_80084998(0u - 106u, 0u - 38u, 204u, 79u));
    w_u8(0x8014A811u, (uint8)sub_80084998(0u, 0u - 22u, 98u, 63u));
    sub_800CA718();
    sub_800CA780(0xFFFFFFFFu, 51u, 0);
    w_u32(0x8014A8ECu, 0u);
    /* TODO Original callee export unavailable; preserve exact no-argument transfer */
    sf_draft_call(0x8013F52Cu, 0u, NULL);
    w_u32(0x8014A818u, 7u);
    /* TODO Original callee export unavailable; preserve explicit incoming a0 */
    sf_draft_call(0x80147B0Cu, 1u, &argument);
    allocation = (uint32)sub_800CB118(0xF000);
    w_u32(0x8014B5A0u, allocation);
    sub_800848D4(allocation, 210);
    sub_800848D4(0x8014B088u, 10);
    sub_800C7CEC(0x8014B064u, 0xB46450, 0, 0, 0, 0);
    w_u32(0x8014B068u, 1u);
    w_u8(0x8014B073u, (uint8)(r_u8(0x8014B073u) | 2u));
    sub_800C7BB0((sint32)r_u32(0x80116964u), 0x8014B064u);
    cursor = 0x8014B240u;
    for (index = 0; index < 3; ++index)
    {
        w_u32(cursor + 4u, 0u);
        w_u32(cursor, 0u);
        cursor += 8u;
    }
    return 0;
}

void sub_80147B0C(uint32 value)
{
    FUNCTION_MARKER(0x80147B0Cu, "TITLE.OVL");
    uint32 incremented = (uint32)r_u16(0x8014A816u) + 1u;
    sint16 write_index;

    w_u16(0x8014A816u, (uint16)incremented);
    if ((sint16)incremented >= 10)
        w_u16(0x8014A816u, 0u);
    write_index = r_s16(0x8014A816u);
    w_u32(0x8014A928u + ((uint32)(sint32)write_index << 2), value);
    if (write_index == r_s16(0x8014A814u))
        sub_800DDC34(1, 0u, 0x80146D04u, 0x450);
}

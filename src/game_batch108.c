#include "game_draft.h"

sint32 sub_80148F78(void)
{
    FUNCTION_MARKER(0x80148F78u, "TITLE.OVL");
    sub_80044848(0);
    sub_8003B030();
    sub_8003B1FC();
    w_u32(0x8014B244u, 0u);
    w_u32(0x8014B240u, 0u);
    uint32 configured = r_u32(0x8014B518u);
    w_u16(0x8014B240u, 1u);
    if (!configured)
    {
        uint32 record = 0x8014B4F0u;
        for (sint32 index = 0; index < 4; ++index)
        {
            sint32 owner = (sint32)r_u32(0x80116964u);
            uint32 current = record;
            record += 44u;
            sub_800C7B20(owner, (sint32)current);
        }
    }
    sub_80016568(0x8014A6CCu);
    sub_800CDA74(1);
    w_u8(0x801168D0u, 0u);
    w_u8(0x801168D1u, 0u);
    return sub_800D85BC(3, 0u, 0u);
}

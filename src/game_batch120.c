#include "game_draft.h"

void sub_801486A8(void)
{
    FUNCTION_MARKER(0x801486A8u, "TITLE.OVL");
    uint32 index, descriptor = 0x8014B4F0u;
    uint32 linked;
    sub_8001629C();
    for (index = 0u; index < 4u; ++index, descriptor += 44u)
    {
        linked = r_u32(descriptor + 40u);
        w_u32(descriptor + 20u, 0u);
        if (linked != 0u)
            sub_800C7B68((sint32)r_u32(0x80116964u), (sint32)descriptor);
    }
}

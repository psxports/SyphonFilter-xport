#include "game_draft.h"

sint32 sub_80149880(void)
{
    FUNCTION_MARKER(0x80149880u, "TITLE.DEP.OVL");
    uint32 pad_address;
    uint32 held;
    uint32 edges;
    uint32 previous;
    uint32 callback;
    uint32 result;

    sub_800D84E8(&pad_address, 0u);
    held = *SF_DRAFT_PTR(uint16, pad_address + 4u);
    /* The original loop executes exactly one four-byte record */
    if (r_u32(0x8014A8B0u) == r_u8(0x8014A8FCu) && r_u32(0x8014A8F0u) == r_u8(0x8014A8FDu) && held == r_u16(0x8014A8FEu) && r_u32(0x8014A924u) != held)
    {
        uint32 argument = 0u;
        /* TODO Missing callee export; exact explicit a0 retained */
        sf_draft_call(0x80149830u, 1u, &argument);
    }
    previous = r_u32(0x8014A924u);
    w_u32(0x8014A924u, held);
    edges = held & ~previous;
    if (*SF_DRAFT_PTR(uint8, pad_address) == 255u || edges == 0u)
        return 255;

    callback = r_u32(0x80146C24u + (r_u32(0x8014A8B0u) << 2));
    if (callback != 0u && (edges & 0x40u) != 0u)
    {
        /* Original bit-test carrier a0 is ignored by all seven reviewed table targets */
        return (sint32)sf_draft_call(callback, 0u, NULL);
    }
    callback = r_u32(0x80146C40u + (r_u32(0x8014A8B0u) << 2));
    if (callback != 0u)
    {
        if ((edges & 0x6000u) != 0u)
        {
            uint32 argument = r_u32(0x8014A8F0u) + 1u;
            callback = r_u32(0x80146C40u + (r_u32(0x8014A8B0u) << 2));
            sf_draft_call(callback, 1u, &argument);
        }
        if ((edges & 0x9000u) != 0u)
        {
            uint32 argument = r_u32(0x8014A8F0u) - 1u;
            callback = r_u32(0x80146C40u + (r_u32(0x8014A8B0u) << 2));
            sf_draft_call(callback, 1u, &argument);
        }
    }
    if (r_u32(0x8014A8B0u) != 4u)
        return 4;
    result = edges & 0x10u;
    if (result != 0u)
    {
        sub_8006BC98(5, 0u, 0, 0u);
        /* TODO Missing callee export; retain exact no-argument transfer */
        result = sf_draft_call(0x8014785Cu, 0u, NULL);
    }
    return (sint32)result;
}

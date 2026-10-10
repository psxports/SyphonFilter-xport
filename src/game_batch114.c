#include "game_draft.h"

sint32 sub_80147C34(uint32 message, sint32 mode, uint32 unused, uint32 callback)
{
    FUNCTION_MARKER(0x80147C34u, "TITLE.DEP.OVL");
    uint32 result = r_u32(0x8014A840u);
    if (result)
        return (sint32)result;
    uint32 state = r_u32(0x8014A8B0u);
    if (state == 1u)
    {
        result = r_u32(0x8014A81Cu);
        if (message == result)
            return (sint32)result;
        sub_80084C30(r_u8(0x8014A810u));
        w_u32(0x8014B468u, state);
    }
    else
        sub_8014775C(1u);
    w_u32(0x8014A83Cu, callback);
    w_u32(0x8014A81Cu, message);
    w_u32(0x8014A838u, (uint32)mode);
    if (mode == 1)
        result = 0x8014A4D4u;
    else if (mode == 2)
        result = 0x8014A4CCu;
    else
    {
        if (!mode)
        {
            sub_800DDC34(1, 0u, 0x80146D04u, 1165);
            /* TODO The original assertion return carrier is unbound */
            abort();
        }
        if (mode == 4)
        {
            w_u32(0x8014A82Cu, 0u);
            w_u32(0x8014A830u, 0u);
        }
        return 4;
    }
    w_u32(0x8014A82Cu, (uint32)mode);
    w_u32(0x8014A830u, result);
    return (sint32)result;
}

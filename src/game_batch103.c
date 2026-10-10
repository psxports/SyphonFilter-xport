#include "game_draft.h"

uint32 sub_80148B1C(void)
{
    FUNCTION_MARKER(0x80148B1Cu, "TITLE.DEP.OVL");
    uint32 clock = r_u32(0x801169A4u);
    uint32 deadline = r_u32(0x8014A80Cu);
    uint32 result = clock < deadline;
    uint32 selection;
    if (result)
        return result;
    selection = r_u32(0x8014A8F0u);
    if (!selection)
    {
        result = r_u8(0x80141A20u);
        if (result)
            return result;
    }
    sub_8001629C();
    selection = r_u32(0x8014A8F0u) + 1u;
    w_u32(0x8014A8F0u, selection);
    if (selection >= 3u)
        return (uint32)sub_8014775C(0u);
    sub_80082EC0();
    selection = r_u32(0x8014A8F0u);
    sub_80016568(0x8014A4F8u + 156u * selection);
    result = r_u32(0x801169A4u) + 40u;
    w_u32(0x8014A80Cu, result);
    return result;
}

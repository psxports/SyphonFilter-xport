#include "game_draft.h"

uint32 sub_80027DF8(void)
{
    uint32 flag;
    FUNCTION_MARKER(0x80027DF8u, "SCUS_942.40");
    flag = r_u32(0x80115E80u);
    if (flag != 0u)
        return (uint32)sub_80028F3C((sint32)r_u32(0x80116AB0u), 13);
    return flag;
}

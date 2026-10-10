#include "game_draft.h"

void sub_80024278(uint32 value)
{
    FUNCTION_MARKER(0x80024278u, "SCUS_942.40");
    w_u32(SF_DRAFT_GP + 3300u, value);
}

#include "game_draft.h"

sint32 sub_800D7A14(uint32 result)
{
    FUNCTION_MARKER(0x800D7A14u, "SCUS_942.40.DEP");
    *SF_DRAFT_PTR(uint32, result) = r_u32(SF_DRAFT_GP + 0x904u);
    return 0;
}

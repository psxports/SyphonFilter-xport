#include "game_draft.h"

sint32 sub_80089624(sint32 origin, sint32 value, sint32 divisor, sint32 slope, sint32 boundary)
{
    uint32 delta;
    sint32 product;
    FUNCTION_MARKER(0x80089624u, "SCUS_942.40");
    delta = (uint32)boundary - (uint32)origin;
    if (divisor == 0)
        return 0;
    product = (sint32)((uint32)slope * delta);
    if (divisor == -1 && product == (sint32)0x80000000u)
        _break(6u, 0u);
    return (sint32)((uint32)value + (uint32)(product / divisor));
}

extern uint32 sub_8008B668(sint16 item, uint8 flag, uint8 flag2);

sint32 sub_8008B718(uint32 output, sint16 count, sint16 item, uint8 flag, uint8 flag2)
{
    FUNCTION_MARKER(0x8008B718u, "SCUS_942.40");
    uint32 category = sub_8008B668(item, flag, flag2);
    uint32 name = r_u32(0x8010DE20u + (uint32)(sint32)item * 4u);
    uint32 count_label = count == 1 ? 0x80116140u : 0x80116378u;
    return sub_800EC924(output, r_u32(SF_DRAFT_GP + 0x4E8u), name,
                       category, count_label, r_u32(SF_DRAFT_GP + 0x508u));
}
uint32 sub_8008B668(sint16 item, uint8 flag, uint8 flag2)
{
    FUNCTION_MARKER(0x8008B668u, "SCUS_942.40");
    sub_800EC924(0x80121718u, r_u32(SF_DRAFT_GP + 0x4FCu),
                0x8011637Cu, r_u32(0x8010DE68u));
    if (!flag) return 0x80116140u;
    if (!flag2) return r_u32(SF_DRAFT_GP + 0x520u);
    if (item == 20) return 0x80121718u;
    return r_u32(SF_DRAFT_GP + 0x514u);
}
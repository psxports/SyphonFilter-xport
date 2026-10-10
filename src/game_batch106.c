#include "game_draft.h"

void sub_800EB8BC(sint32 dqa)
{
    FUNCTION_MARKER(0x800EB8BCu, "SCUS_942.40");
    xport_gte_write_control(27u, (uint32)dqa);
}

void sub_800EB8C8(uint32 dqb)
{
    FUNCTION_MARKER(0x800EB8C8u, "SCUS_942.40");
    xport_gte_write_control(28u, dqb);
}

void sub_800EB8E4(uint32 red, uint32 green, uint32 blue)
{
    FUNCTION_MARKER(0x800EB8E4u, "SCUS_942.40");
    xport_gte_write_control(21u, red << 4);
    xport_gte_write_control(22u, green << 4);
    xport_gte_write_control(23u, blue << 4);
}

void sub_800E9BC4(uint32 descriptor)
{
    uint32 red, green, blue;
    FUNCTION_MARKER(0x800E9BC4u, "SCUS_942.40");
    sub_800EB8BC((sint32)r_s16(descriptor));
    sub_800EB8C8(r_u32(descriptor + 4u));
    red = r_u8(descriptor + 8u);
    green = r_u8(descriptor + 9u);
    blue = r_u8(descriptor + 10u);
    sub_800EB8E4(red, green, blue);
}

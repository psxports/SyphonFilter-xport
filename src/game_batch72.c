#include "game_draft.h"
#include <stdio.h>
#include <stdlib.h>

void sub_800EB924(sint32 projection_distance)
{
    FUNCTION_MARKER(0x800EB924u, "SCUS_942.40");
    xport_gte_write_control(26u, (uint32)projection_distance);
}

static sint32 sf_mips_checked_signed(sint64 value, uint32 owner)
{
    if (value < (-2147483647LL - 1LL) || value > 2147483647LL)
    {
        fprintf(stderr, "Original sub_%08X signed arithmetic overflow\n", owner);
        abort();
    }
    return (sint32)value;
}

sint32 sub_800C6F08(uint16 x, sint32 y, sint32 z)
{
    uint32 xy;
    FUNCTION_MARKER(0x800C6F08u, "SCUS_942.40");
    xy = ((uint32)sf_mips_checked_signed(-(sint64)y, 0x800C6F08u) << 16) | x;
    sf_gte_write_data(0u, xy);
    sf_gte_write_data(1u, (uint32)z);
    sf_gte_execute(0x180001u);
    return (sint32)sf_gte_read_data(19u);
}

uint32 sub_800CF06C(sint32 maximum_depth, sint32 horizontal_limit)
{
    sint32 depth;
    sint32 horizontal;
    sint32 triple;
    FUNCTION_MARKER(0x800CF06Cu, "SCUS_942.40");
    sf_gte_write_data(0u, 0u);
    sf_gte_write_data(1u, 0u);
    sf_gte_execute(0x180001u);
    depth = (sint32)sf_gte_read_data(19u);
    if (depth <= 0 || sf_mips_checked_signed((sint64)depth - maximum_depth, 0x800CF06Cu) > 0)
        return 0u;
    horizontal = (sint16)sf_gte_read_data(14u);
    if (horizontal < 0)
        horizontal = -horizontal;
    if (sf_mips_checked_signed((sint64)horizontal - horizontal_limit, 0x800CF06Cu) >= 0)
        return 0u;
    triple = sf_mips_checked_signed((sint64)depth + depth, 0x800CF06Cu);
    triple = sf_mips_checked_signed((sint64)triple + depth, 0x800CF06Cu);
    return (uint32)triple >> 2;
}

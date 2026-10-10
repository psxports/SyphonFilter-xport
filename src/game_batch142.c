#include "game_draft.h"

void sf_gte_write_data(uint32 index, uint32 value);
uint32 sf_gte_read_data(uint32 index);

uint32 sub_800EAC44(sint32 input)
{
    uint32 leading, even, normalized, value;
    sint32 scale;
    FUNCTION_MARKER(0x800EAC44u, "SCUS_942.40");
    sf_gte_write_data(30u, (uint32)input);
    leading = sf_gte_read_data(31u);
    if (leading == 32u)
        return 0u;
    even = leading & ~1u;
    scale = (19 - (sint32)even) >> 1;
    if (even < 24u)
        normalized = (uint32)(input >> (24u - even));
    else
        normalized = (uint32)input << (even - 24u);
    value = (uint32)(sint32)r_s16(0x8010FDB8u + 2u * (normalized - 64u));
    return scale < 0 ? value >> (uint32)(-scale) : value << (uint32)scale;
}

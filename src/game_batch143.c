#include "game_draft.h"

uint32 sub_800EC68C(uint32 matrix, uint32 input, uint32 output)
{
    uint16 *rotation = SF_DRAFT_PTR(uint16, matrix);
    sint32 *vector = SF_DRAFT_PTR(sint32, input);
    uint32 *result = SF_DRAFT_PTR(uint32, output);
    uint32 high[3], low[3], high_mac[3];
    uint32 index, last;
    FUNCTION_MARKER(0x800EC68Cu, "SCUS_942.40");
    memcpy(&last, (const uint8 *)rotation + 16u, sizeof(last));
    xport_gte_write_control(0u, rotation[0] | ((uint32)rotation[3] << 16));
    xport_gte_write_control(1u, rotation[6] | ((uint32)rotation[1] << 16));
    xport_gte_write_control(2u, rotation[4] | ((uint32)rotation[7] << 16));
    xport_gte_write_control(3u, rotation[2] | ((uint32)rotation[5] << 16));
    xport_gte_write_control(4u, last);
    for (index = 0u; index < 3u; ++index)
    {
        sint32 value = vector[index];
        uint32 magnitude = value < 0 ? 0u - (uint32)value : (uint32)value;
        uint32 upper = (uint32)((sint32)magnitude >> 15);
        uint32 lower = magnitude & 0x7FFFu;
        high[index] = value < 0 ? 0u - upper : upper;
        low[index] = value < 0 ? 0u - lower : lower;
    }
    sf_gte_write_data(0u, (high[0] & 0xFFFFu) | (high[1] << 16));
    sf_gte_write_data(1u, high[2]);
    sf_gte_execute(0x406012u);
    for (index = 0u; index < 3u; ++index)
        high_mac[index] = sf_gte_read_data(25u + index);
    sf_gte_write_data(0u, (low[0] & 0xFFFFu) | (low[1] << 16));
    sf_gte_write_data(1u, low[2]);
    xport_gte_mvmva(0x486012u);
    for (index = 0u; index < 3u; ++index)
        result[index] = sf_gte_read_data(25u + index) + (high_mac[index] << 3);
    return output;
}

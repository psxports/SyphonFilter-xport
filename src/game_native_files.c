#include "game_draft.h"

uint32 sub_800E9DB4(uint32 data, uint32 descriptor)
{
    uint8 *output = SF_DRAFT_PTR(uint8, descriptor);
    uint32 flags;
    uint32 cursor;
    uint32 result;
    uint16 value;
    memcpy(&flags, SF_DRAFT_PTR(uint8, data), 4u);
    memcpy(output, &flags, 4u);
    if (flags & 8u)
    {
        uint32 length;
        cursor = data + 4u;
        memcpy(&length, SF_DRAFT_PTR(uint8, cursor), 4u);
        result = cursor + (length & ~3u) + 4u;
        cursor += 4u;
        memcpy(output + 16u, SF_DRAFT_PTR(uint8, cursor), 2u);
        memcpy(&value, SF_DRAFT_PTR(uint8, cursor + 2u), 2u);
        cursor += 4u;
        memcpy(output + 18u, &value, 2u);
        memcpy(output + 20u, SF_DRAFT_PTR(uint8, cursor), 2u);
        memcpy(&value, SF_DRAFT_PTR(uint8, cursor + 2u), 2u);
        cursor += 4u;
        memcpy(output + 24u, &cursor, 4u);
        memcpy(output + 22u, &value, 2u);
        memcpy(output + 4u, SF_DRAFT_PTR(uint8, result), 2u);
        memcpy(&value, SF_DRAFT_PTR(uint8, result + 2u), 2u);
        result += 4u;
        memcpy(output + 6u, &value, 2u);
        memcpy(output + 8u, SF_DRAFT_PTR(uint8, result), 2u);
        memcpy(&value, SF_DRAFT_PTR(uint8, result + 2u), 2u);
        result += 4u;
        memcpy(output + 12u, &result, 4u);
        memcpy(output + 10u, &value, 2u);
    }
    else
    {
        cursor = data + 8u;
        memcpy(output + 4u, SF_DRAFT_PTR(uint8, cursor), 2u);
        memcpy(&value, SF_DRAFT_PTR(uint8, cursor + 2u), 2u);
        cursor += 4u;
        memcpy(output + 6u, &value, 2u);
        memcpy(output + 8u, SF_DRAFT_PTR(uint8, cursor), 2u);
        memcpy(&value, SF_DRAFT_PTR(uint8, cursor + 2u), 2u);
        cursor += 4u;
        memcpy(output + 12u, &cursor, 4u);
        memcpy(output + 10u, &value, 2u);
        result = value;
    }
    return result;
}

uint32 sub_800EDA20(sint32 sector, uint32 position)
{
    sint32 total = (sint32)((uint32)sector + 150u);
    sint32 seconds = total / 75;
    sint32 frames = total % 75;
    sint32 minutes = seconds / 60;
    uint8 *output = SF_DRAFT_PTR(uint8, position);
    seconds %= 60;
    output[2] = (uint8)(16 * (frames / 10) + frames % 10);
    output[1] = (uint8)(16 * (seconds / 10) + seconds % 10);
    output[0] = (uint8)(16 * (minutes / 10) + minutes % 10);
    return position;
}

uint32 sub_800EF304(uint32 destination, uint32 filename)
{
    /* Use the mounted ISO directory through the native SDK boundary */
    void *output = sf_draft_guest_ptr(destination);
    const char *path = SF_DRAFT_PTR(const char, filename);
    if (!output || !path)
        return 0u;
    return CdSearchFile((CdlFILE *)output, path) ? destination : 0u;
}

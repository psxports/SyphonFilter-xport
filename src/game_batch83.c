#include "game_draft.h"

sint32 sub_8013F060(uint32 destination)
{
    FUNCTION_MARKER(0x8013F060u, "MOVIE.DEP.OVL");
    uint32 source = 0x80141B8Cu;
    uint32 output = destination;
    uint32 distance = 0u;
    uint32 index;
    do
    {
        uint32 command = r_u8(source++);
        if (command >= 240u)
        {
            distance = 0u;
            if (command != 240u)
                distance = ((command << 8) | r_u8(source++)) - 61695u;
        }
        else if (distance)
        {
            uint32 count = command + 1u;
            do
            {
                uint8 value = r_u8(output - distance);
                w_u8(output++, value);
            } while (--count);
        }
        else
        {
            uint32 count = command + 1u;
            do
            {
                uint8 value = r_u8(source++);
                w_u8(output++, value);
            } while (--count);
        }
    } while (distance != 3840u);
    output = destination + 8u;
    index = 4u;
    do
    {
        uint16 value = r_u16(output);
        uint16 previous = r_u16(output - 8u);
        ++index;
        w_u16(output, (uint16)(value ^ previous));
        output += 2u;
    } while (index <= 34815u);
    return 1;
}

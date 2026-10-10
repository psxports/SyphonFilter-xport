#include "game_draft.h"

uint32 sub_800E63B0(sint16 x, sint16 y)
{
    sint32 clipped_x = 0;
    sint32 clipped_y = y;
    FUNCTION_MARKER(0x800E63B0u, "SCUS_942.40");
    if (x >= 0)
    {
        sint32 maximum = (sint32)r_s16(0x8010F41Cu) - 1;
        clipped_x = (sint32)r_u16(0x8010F41Cu) - 1;
        if (maximum >= x)
            clipped_x = x;
    }
    if (y < 0)
        clipped_y = 0;
    else
    {
        sint32 maximum = (sint32)r_s16(0x8010F41Eu) - 1;
        uint32 bound = r_u16(0x8010F41Eu);
        if (maximum < y)
            clipped_y = (sint32)bound - 1;
    }
    return 0xE3000000u | ((uint32)clipped_x & 0x3FFu) | (((uint32)clipped_y & 0x3FFu) << 10);
}

uint32 sub_800E6448(sint16 x, sint16 y)
{
    sint32 clipped_x = 0;
    sint32 clipped_y = y;
    FUNCTION_MARKER(0x800E6448u, "SCUS_942.40");
    if (x >= 0)
    {
        sint32 maximum = (sint32)r_s16(0x8010F41Cu) - 1;
        clipped_x = (sint32)r_u16(0x8010F41Cu) - 1;
        if (maximum >= x)
            clipped_x = x;
    }
    if (y < 0)
        clipped_y = 0;
    else
    {
        sint32 maximum = (sint32)r_s16(0x8010F41Eu) - 1;
        uint32 bound = r_u16(0x8010F41Eu);
        if (maximum < y)
            clipped_y = (sint32)bound - 1;
    }
    return 0xE4000000u | ((uint32)clipped_x & 0x3FFu) | (((uint32)clipped_y & 0x3FFu) << 10);
}

uint32 sub_800E5DC4(uint32 packet, uint32 rectangle)
{
    sint16 x, y, end_x, end_y;
    uint32 command, x_word, y_word, width;
    FUNCTION_MARKER(0x800E5DC4u, "SCUS_942.40");
    w_u8(packet + 3u, 2u);
    x = r_s16(rectangle);
    y = r_s16(rectangle + 2u);
    command = sub_800E63B0(x, y);
    w_u32(packet + 4u, command);
    x_word = r_u16(rectangle);
    width = r_u16(rectangle + 4u);
    y_word = r_u16(rectangle + 2u);
    end_x = (sint16)(uint16)(x_word + width - 1u);
    end_y = (sint16)(uint16)(y_word + r_u16(rectangle + 6u) - 1u);
    command = sub_800E6448(end_x, end_y);
    w_u32(packet + 8u, command);
    return command;
}

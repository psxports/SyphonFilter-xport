#include "game_draft.h"

sint32 sub_8013D8E8(uint32 header, sint32 x, sint32 y, uint32 buffer, sint32 remaining, sint32 count, uint32 mode, uint32 rect, uint32 block_rect, uint32 buffers, uint32 block_bytes, uint32 extra_buffers, uint32 extra_bytes)
{
    FUNCTION_MARKER(0x8013D8E8u, "MOVIE.OVL");
    uint32 descriptor;
    uint32 descriptor_output = sf_draft_guest_address(&descriptor);
    uint32 first_word;
    uint32 second_word;
    sint32 screen_width;
    sint32 screen_height;
    sint32 difference;
    uint32 selected;
    sint32 width;
    sint32 height;
    uint32 bytes;
    uint32 index;
    /* TODO Resolve the original descriptor output callee through numeric dispatch */
    sf_draft_call(0x800D8B38u, 1u, (const uint32[]){descriptor_output});
    first_word = r_u32(descriptor);
    second_word = r_u32(descriptor + 4u);
    (void)first_word;
    screen_width = (sint32)(sint16)(uint16)second_word;
    screen_height = (sint32)(sint16)(uint16)(second_word >> 16);
    difference = (sint32)((uint32)screen_width - (uint32)x);
    selected = r_u16(header + 16u);
    if (difference >= 0 && (sint32)selected < difference)
        selected = r_u16(header + 16u);
    else
        selected = difference < 0 ? 0u : (uint32)difference;
    w_u16(rect + 4u, (uint16)selected);
    width = (sint32)(sint16)(uint16)selected;
    w_u16(rect + 4u, (uint16)(mode == 1u ? width * 24 / 16 : width));
    difference = (sint32)((uint32)screen_height - (uint32)y);
    selected = r_u16(header + 18u);
    if (difference >= 0 && (sint32)selected < difference)
        selected = r_u16(header + 18u);
    else
        selected = difference < 0 ? 0u : (uint32)difference;
    w_u16(rect + 6u, (uint16)selected);
    w_u16(block_rect + 4u, 16u);
    if (mode == 1u)
        w_u16(block_rect + 4u, 24u);
    height = (sint32)(sint16)r_u16(rect + 6u);
    if (height < 0)
        height += 15;
    w_u16(block_rect + 6u, (uint16)((uint32)height & 0xFFF0u));
    selected = r_u16(header + 18u);
    bytes = mode == 1u ? selected * 12u : selected * 8u;
    w_u32(block_bytes, bytes);
    if (!buffer)
        sub_800DDC34(1, 0u, 0x8013D634u, 214);
    for (index = 0u; index < 2u; ++index)
    {
        w_u32(buffers + 4u * index, buffer);
        bytes = r_u32(block_bytes) << 2;
        remaining = (sint32)((uint32)remaining - bytes);
        buffer += bytes;
        if (remaining < 0)
        {
            sub_8013E8F4();
            return 31;
        }
    }
    selected = r_u16(header + 6u);
    w_u32(extra_bytes, selected * 1710u);
    for (index = 0u; (sint32)index < count; ++index)
    {
        w_u32(extra_buffers + 4u * index, buffer);
        bytes = r_u32(extra_bytes) << 2;
        remaining = (sint32)((uint32)remaining - bytes);
        buffer += bytes;
        if (remaining < 0)
        {
            sub_8013E8F4();
            return 31;
        }
    }
    return 0;
}

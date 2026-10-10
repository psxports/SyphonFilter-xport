#include "game_draft.h"

uint32 sub_8014D5A0(void)
{
    char text[96];
    uint32 descriptor, first, second, total = 0u, cursor, result, index;
    uint8 window;
    sint32 count;
    uint16 item;
    FUNCTION_MARKER(0x8014D5A0u, "INIT.DEP.OVL");
    sub_80044848(6);
    window = (uint8)sub_80084998((uint32)-155, (uint32)-90, 310u, 170u);
    w_u8(0x80115F16u, window);
    sub_80084DD0(window, 110, (sint8)130, (sint8)200);
    descriptor = r_u32(0x801168D4u);
    first = r_u32(descriptor);
    second = r_u32(descriptor + 4u);
    sub_800EC924(sf_draft_guest_address(text), 0x8014C2B4u, first, second);
    sub_8008582C(r_u8(0x80115F16u), sf_draft_guest_address(text), -1, 0);
    result = r_u32(0x801164B0u);
    if (result == 0u)
        return result;
    descriptor = r_u32(0x801168D4u);
    count = (sint32)r_u32(descriptor + 12u);
    if (count >= 3)
        count = 2;
    for (index = 0u; (sint32)index < count; ++index)
    {
        descriptor = r_u32(0x801168D4u);
        first = r_u32(descriptor + 16u);
        first = r_u32(first + 4u * index);
        total += (uint32)sub_800EC8A4(first);
    }
    cursor = r_u32(0x801164B0u);
    result = (uint32)sub_800848D4(cursor, (sint32)total);
    for (index = 0u; (sint32)index < count;)
    {
        descriptor = r_u32(0x801168D4u);
        window = r_u8(0x80115F16u);
        first = r_u32(descriptor + 16u);
        first = r_u32(first + 4u * index);
        ++index;
        item = (uint16)sub_8008582C(window, first, -1, (sint32)cursor);
        cursor += 44u * (uint32)sub_800862DC(item, 0);
        result = (uint32)((sint32)index < count);
    }
    w_u32(0x801164B0u, cursor);
    return result;
}

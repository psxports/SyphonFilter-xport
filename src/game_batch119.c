#include "game_draft.h"

void sub_80149328(void)
{
    FUNCTION_MARKER(0x80149328u, "TITLE.OVL");
    uint32 index, descriptor;
    uint8 rgb[3];
    bool dim;
    if (r_u32(0x8014A8F0u) == 1u && r_u32(0x8014A818u) != 0u)
        w_u32(0x8014A8F0u, 0u);
    if (r_u8(0x80141A20u) != 0u)
    {
        descriptor = 0x8014B4F0u;
        for (index = 0u; index < 4u; ++index, descriptor += 44u)
        {
            rgb[0] = r_u8(descriptor + 20u);
            rgb[1] = r_u8(descriptor + 21u);
            rgb[2] = r_u8(descriptor + 22u);
            dim = false;
            if (index == 1u && r_u32(0x8014A818u) != 0u)
                dim = true;
            else if (index == 3u && r_u32(0x8014A818u) != 7u)
                dim = true;
            else if (r_u32(0x80141A24u) >= 629u)
                dim = true;

            if (dim)
            {
                if (rgb[0] == 0u)
                    continue;
                rgb[0] = rgb[0] >= 11u ? (uint8)(rgb[0] - 10u) : 0u;
            }
            else if (index == r_u32(0x8014A8F0u))
            {
                if (rgb[0] == 200u)
                    continue;
                rgb[0] = rgb[0] < 190u ? (uint8)(rgb[0] + 10u) : 200u;
            }
            else
            {
                if (rgb[0] == 70u)
                    continue;
                if (rgb[0] >= 81u)
                    rgb[0] = (uint8)(rgb[0] - 10u);
                else if (rgb[0] < 60u)
                    rgb[0] = (uint8)(rgb[0] + 10u);
                else
                    rgb[0] = 70u;
            }
            rgb[2] = rgb[0];
            rgb[1] = rgb[0];
            w_u8(descriptor + 20u, rgb[0]);
            w_u8(descriptor + 21u, rgb[1]);
            w_u8(descriptor + 22u, rgb[2]);
        }
        return;
    }

    sub_801486A8();
    sub_80147A70();
    w_u32(0x8014A8B0u, 11u);
    for (index = 0u; index < 9u; ++index)
        w_u32(0x8010BAF4u + (index << 2), r_u32(0x8014A900u + (index << 2)));
    sub_80039708(1);
}

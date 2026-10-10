#include "game_draft.h"

sint32 sub_8013DBD0(uint32 *first, uint32 *second)
{
    FUNCTION_MARKER(0x8013DBD0u, "MOVIE.OVL");
    uint32 frame;
    uint32 status;
    uint32 counter;

    if (r_u32(0x80141A38u) == r_u32(0x80141A34u) && r_u8(0x80141A28u) == 0u)
        w_u8(0x80141A2Bu, 1u);
    if (r_u8(0x80141A2Bu) == 0u)
    {
        status = 1u;
        counter = 0u;
        while (status == 1u)
        {
            uint32 previous_counter = counter;
            ++counter;
            if (previous_counter >= 300000u)
                break;
            status = sub_800F0A54(first, second);
        }
        if (status == 1u)
            w_u8(0x80141A2Bu, 1u);
        else if (*SF_DRAFT_PTR(uint16, *second + 2u) != 0x8001u || *SF_DRAFT_PTR(uint16, *second + 4u) != 0u)
            w_u8(0x80141A2Bu, 1u);
        if (r_u8(0x80141A2Bu) == 0u)
        {
            if (r_u8(0x80141A28u) == 0u)
            {
                frame = *SF_DRAFT_PTR(uint32, *second + 8u);
                if (r_u32(0x80141A34u) < frame)
                    w_u8(0x80141A2Bu, 1u);
                else if (r_u32(0x80141A38u) >= frame)
                    w_u8(0x80141A2Bu, 1u);
            }
            else
            {
                sint32 limit = r_s32(0x801419ECu);
                if (limit > 0)
                    w_u32(0x80141A34u, (uint32)limit);
                else
                {
                    uint32 divisor = (uint32)*SF_DRAFT_PTR(uint16, *second + 6u) << 11;
                    uint32 length = r_u32(r_u32(0x801419E0u) + 4u);
                    if (divisor == 0u)
                        _break(7u, 0u);
                    w_u32(0x80141A34u, length / divisor);
                }
            }
        }
    }
    if (r_u8(0x80141A2Bu) == 0u)
        frame = *SF_DRAFT_PTR(uint32, *second + 8u);
    else
        frame = 0u;
    w_u32(0x80141A38u, frame);
    w_u32(0x80141A24u, frame);
    return 0;
}

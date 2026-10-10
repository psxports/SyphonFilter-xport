#include "game_draft.h"

static void sf_TITLE49558_window_mode(uint32 window, uint32 mode)
{
    const uint32 arguments[2] = {window, mode};
    /* TODO Missing central callee contract; retain exact explicit arguments */
    sf_draft_call(0x80084CC0u, 2u, arguments);
}

uint32 sub_80149558(void)
{
    FUNCTION_MARKER(0x80149558u, "TITLE.DEP.OVL");
    uint32 used = 0u;
    uint32 state = r_u32(0x8014A8B0u);
    uint32 entry = r_u32(0x8014A8D0u + (state << 2));
    const uint32 clear_arguments[4] = {0u, 0u, 0u, 0u};
    sint32 index;
    uint32 callback;
    uint32 result;

    /* TODO Missing central callee contract; retain four original zero arguments */
    sf_draft_call(0x801473A4u, 4u, clear_arguments);
    for (index = 7; index >= 0; --index)
        w_u16(0x8014B458u + (uint32)index * 2u, 0xFFFFu);
    if (r_u8(0x8014A810u) != 255u)
    {
        sub_80084DD0(r_u8(0x8014A810u), 110, (sint8)130, (sint8)200);
        if (entry != 0u)
        {
            sf_TITLE49558_window_mode(r_u8(0x8014A810u), r_u32(0x8014A8B0u) == 0u);
            index = 0;
            if (r_s32(0x8014A8B4u + (r_u32(0x8014A8B0u) << 2)) > 0)
            {
                do
                {
                    uint32 kind = r_u32(entry);
                    if (kind != 0u)
                    {
                        uint32 output;
                        uint32 packet = r_u32(0x8014B5A0u) + used * 44u;
                        if (kind == 1u)
                        {
                            uint32 text = r_u32(r_u32(entry + 4u));
                            uint32 item = (uint32)sub_8008582C(r_u8(0x8014A810u), text, -1, (sint32)packet);
                            output = r_u32(entry + 8u);
                            w_u16(output, (uint16)item);
                        }
                        else
                        {
                            const uint32 arguments[6] = {r_u8(0x8014A810u), r_u32(entry), r_u32(entry + 4u), 0xFFFFFFFFu, packet, r_u32(entry + 8u)};
                            /* TODO Missing central six-argument callee contract */
                            sf_draft_call(0x800859A0u, 6u, arguments);
                        }
                        output = r_u32(entry + 8u);
                        if (r_u16(output) == 0xFFFFu)
                            sub_800DDC34(1, 0u, 0x80146D04u, 2410);
                        used += (uint32)sub_800862DC(r_u16(r_u32(entry + 8u)), 1);
                        if (r_u32(0x8014A8B0u) == 4u)
                        {
                            if (index == 0)
                                sf_TITLE49558_window_mode(r_u8(0x8014A810u), 0xFFFFFFFFu);
                            else if (index == 5)
                                sf_TITLE49558_window_mode(r_u8(0x8014A810u), 0u);
                        }
                    }
                    ++index;
                    entry += 12u;
                } while (index < r_s32(0x8014A8B4u + (r_u32(0x8014A8B0u) << 2)));
            }
        }
    }
    callback = r_u32(0x80146C5Cu + (r_u32(0x8014A8B0u) << 2));
    if (callback != 0u)
        sf_draft_call(callback, 0u, NULL);
    result = r_u32(0x80146C40u + (r_u32(0x8014A8B0u) << 2));
    if (result != 0u)
    {
        uint32 argument = r_u32(0x8014A8F0u);
        result = sf_draft_call(result, 1u, &argument);
    }
    w_u32(0x8014B468u, 0u);
    return result;
}

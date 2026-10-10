#include "game_draft.h"

sint32 sub_80148070(sint32 value)
{
    uint32 callback, state, message;
    sint16 selected, count;
    FUNCTION_MARKER(0x80148070u, "TITLE.DEP.OVL");
    if (value == 0)
    {
        selected = (sint16)r_u16(0x8014A814u);
        count = (sint16)r_u16(0x8014A816u);
        if (selected < count)
            return 1;
        callback = r_u32(0x8014A8F4u);
        w_u32(0x8014A8F8u, 0u);
        if (callback != 0u)
        {
            w_u32(0x8014A8F4u, 0u);
            /* TODO Unknown stored targets retain dispatcher fail-fast handling */
            sf_draft_call(callback, 0u, NULL);
        }
        return 1;
    }
    if (value != 6)
    {
        switch (value)
        {
            case 1:
                state = 1u;
                break;
            case 3:
                state = 7u;
                break;
            case 4:
                state = 4u;
                break;
            case 5:
                state = 5u;
                break;
            case 7:
                state = 6u;
                break;
            default:
                state = 2u;
                break;
        }
        w_u32(0x8014A818u, state);
    }
    callback = r_u32(0x8014A8F8u);
    if (callback != 0u)
    {
        w_u32(0x8014A8F8u, 0u);
        sf_draft_call(callback, 0u, NULL);
        return 0;
    }
    switch (value)
    {
        case 1:
        case 2:
        case 6:
        case 7:
            message = r_u32(0x8014A484u + 4u * (uint32)value);
            sub_80147C34(message, 1, 0u, 0u);
            sub_80147C08();
            break;
        case 3:
            sub_80148230(1);
            break;
        case 4:
        case 5:
            message = r_u32(0x8014A484u + 4u * (uint32)value);
            sub_80147C34(message, 2, 0u, value == 4 ? 0x80147D78u : 0x80147E00u);
            break;
        default:
            w_u32(0x8014A818u, 2u);
            break;
    }
    return 0;
}

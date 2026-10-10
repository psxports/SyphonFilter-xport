#include "game_draft.h"

sint32 sub_80034C28(void)
{
    return sub_80034C30((sint32)r_u32(0x801169D4u));
}

sint32 sub_80091AEC(sint16 entity)
{
    return sub_80091AF0(entity, r_u8(SF_DRAFT_GP + 0xBDCu));
}

#include <stdlib.h>

uint32 sub_8006C0BC(sint32 mode, uint32 channel, sint32 entity, uint32 left_output, uint32 right_output)
{
    FUNCTION_MARKER(0x8006C0BCu, "SCUS_942.40");
    return (uint32)sub_8006B90C(mode, channel, entity, 0u, left_output, right_output);
}

sint32 sub_8001D494(uint8 mode, sint32 a1, sint32 a2, sint32 a3, sint32 extra16, sint32 extra20, sint32 extra24, uint8 flag28)
{
    FUNCTION_MARKER(0x8001D494u, "SCUS_942.40");
    return sub_8001D384(12, a1, a2, a3, extra16, extra20, extra24, mode, flag28);
}

sint32 sub_8006CA74(sint32 request, sint32 entity)
{
    uint32 object;
    sint32 event;
    FUNCTION_MARKER(0x8006CA74u, "SCUS_942.40");
    if ((sint32)r_u32(0x80128DACu) != -3)
    {
        if (request != -1)
            sub_80015364((uint8)request, 4u, 65535, entity, 0, 0, 0, 0);
        w_u16(0x80128DB0u, 0xFFFFu);
        w_u16(0x80128DB2u, 0xFFFFu);
        return 0;
    }
    event = (sint16)r_u16(0x80128DB4u);
    w_u32(0x80128DACu, 0xFFFFFFFCu);
    object = r_u32(0x80115CCCu) + (uint32)entity * 76u;
    w_u16(0x80128DB0u, (uint16)request);
    w_u16(0x80128DB2u, (uint16)entity);
    sub_8006C620((uint32)event, (sint32)r_u32(object + 52u), 1);
    return 1;
}

sint32 sub_8006CB74(uint32 data, sint32 parameter)
{
    uint32 choices[4];
    uint32 count = 0u;
    uint32 index = 0u;
    sint32 random;
    sint32 result;
    uint32 choice;
    FUNCTION_MARKER(0x8006CB74u, "SCUS_942.40");
    while ((sint16)r_u16(data + 4u + index * 2u) != -1)
    {
        if (index >= 4u)
            break;
        if (!(r_u32(data) & (1u << index)))
            choices[count++] = index;
        ++index;
    }
    random = (sint32)sub_800EC8F4();
    if (!count)
        _break(7u, 0u);
    choice = choices[random % (sint32)count];
    w_u32(data, r_u32(data) | (1u << choice));
    result = sub_8006C620((uint32)(sint32)(sint16)r_u16(data + 4u + choice * 2u), parameter, 0);
    if (count == 1u)
        w_u32(data, 0u);
    return result;
}

sint32 sub_8006CB54(uint32 data)
{
    FUNCTION_MARKER(0x8006CB54u, "SCUS_942.40");
    return sub_8006CB74(data, 0);
}

sint32 sub_80027D3C(void)
{
    uint32 payload;
    FUNCTION_MARKER(0x80027D3Cu, "SCUS_942.40");
    sub_8006C7CC();
    sub_8006CB54(0x8010B548u);
    if (!r_u8(0x80116944u))
        return 0;
    payload = r_u32(0x80116AB0u);
    return (sint32)sub_80015364(44u, 4u, (sint32)payload, (sint32)payload, 0, 0, 0, 0);
}

void sub_8008A3B4(void)
{
    FUNCTION_MARKER(0x8008A3B4u, "SCUS_942.40");
}

uint32 sub_800DF43C(uint32 context)
{
    uint32 callback;
    FUNCTION_MARKER(0x800DF43Cu, "SCUS_942.40");
    callback = r_u32(0x80116614u);
    if (!callback)
        return 0u;
    return sf_draft_call(callback, 1u, &context);
}

sint32 sub_8014D4F4(sint16 offset)
{
    uint32 index;
    uint32 x;
    FUNCTION_MARKER(0x8014D4F4u, "INIT.DEP.OVL");
    if (r_u32(0x80116984u) != 6u)
        return 6;
    x = (uint16)((uint32)(sint32)offset - 50u);
    for (index = 0u; index < 3u; ++index)
    {
        uint32 node = 0x80155098u + index * 24u;
        if (!r_u32(node))
            sub_800C7BB0(r_u32(0x80116964u), node);
        w_u32(0x801550ACu + index * 24u, x | ((index + 79u) << 16));
    }
    return 0;
}

sint32 sub_800D92F0(sint32 value, sint32 period, uint32 output)
{
    sint32 *remainder = SF_DRAFT_PTR(sint32, output);
    sint32 current;
    FUNCTION_MARKER(0x800D92F0u, "SCUS_942.40");
    *remainder = value;
    if (!period)
        return 1;
    if (value < 0)
        *remainder = (sint32)((uint32)value + (uint32)period);
    else if (value >= period)
        *remainder = (sint32)((uint32)value - (uint32)period);
    current = *remainder;
    if (current < 0 || current >= period)
    {
        if (period == -1 && current == (sint32)0x80000000u)
            abort();
        *remainder = current % period;
    }
    return 0;
}

sint32 sf_native_get_table(sint32 *address, sint32 *count, uint32 *flags)
{
    sint32 result = 256;
    *address = (sint32)0x801217B8u;
    *count = 256;
    if (flags)
    {
        result = (sint32)r_u32(0x80121838u);
        *flags = (uint32)result;
    }
    return result;
}

sint32 sub_800932AC(uint32 address, uint32 count, uint32 flags)
{
    FUNCTION_MARKER(0x800932ACu, "SCUS_942.40.DEP");
    return sf_native_get_table(SF_DRAFT_PTR(sint32, address), SF_DRAFT_PTR(sint32, count), flags ? SF_DRAFT_PTR(uint32, flags) : NULL);
}

sint32 sf_native_movie_input(sint32 mode, sint32 *event, sint32 *value)
{
    sint32 pending;
    sint32 initial_value;
    sint32 initial = (sint32)r_u32(0x80142A3Cu);
    if (!initial && !r_u32(0x80142A44u))
        return -1;
    initial = (sint32)r_u32(0x80142A3Cu);
    initial_value = (sint32)r_u32(0x80142A40u);
    pending = (sint32)r_u32(0x80142A44u);
    if (!mode)
    {
        while (!r_u32(0x80142A44u))
        {
            /* Service original asynchronous interrupts during the native wait */
            psx_native_poll_events();
            if (xport_isquit())
                return -1;
        }
        pending = 1;
    }
    if (pending)
    {
        if (value)
            *value = (sint32)r_u32(0x80142A88u);
        if (event)
            *event = (sint32)r_u32(0x80142A84u);
        w_u32(0x80142A44u, 0u);
        return 1;
    }
    if (value)
        *value = initial_value;
    if (event)
        *event = initial;
    return 0;
}

sint32 sub_801406FC(sint32 mode, uint32 event, uint32 value)
{
    FUNCTION_MARKER(0x801406FCu, "MOVIE.EXTRA.OVL");
    return sf_native_movie_input(mode, event ? SF_DRAFT_PTR(sint32, event) : NULL, value ? SF_DRAFT_PTR(sint32, value) : NULL);
}

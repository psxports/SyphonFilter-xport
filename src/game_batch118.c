#include "game_draft.h"

sint32 sub_80140E50(sint32 card)
{
    FUNCTION_MARKER(0x80140E50u, "MOVIE.OVL");
    return _card_info(card);
}

uint32 sub_80141618(void)
{
    uint32 second, first, third, fourth;
    FUNCTION_MARKER(0x80141618u, "MOVIE.OVL");
    second = r_u32(0x80142B08u);
    first = r_u32(0x80142B04u);
    third = r_u32(0x80142B0Cu);
    first += second << 1;
    third <<= 2;
    fourth = r_u32(0x80142B10u);
    first += third;
    return first + (fourth << 3);
}

sint32 sub_80141468(void)
{
    uint32 mask, first, second, third, fourth, value;
    FUNCTION_MARKER(0x80141468u, "MOVIE.OVL");
    do
    {
        second = r_u32(0x80142B08u);
        first = r_u32(0x80142B04u);
        third = r_u32(0x80142B0Cu);
        first += second << 1;
        third <<= 2;
        fourth = r_u32(0x80142B10u);
        first += third;
        mask = first + (fourth << 3);
    } while (mask == 0u);

    sub_800FE894(r_u32(0x80142AF4u));
    sub_800FE894(r_u32(0x80142AF8u));
    sub_800FE894(r_u32(0x80142AFCu));
    sub_800FE894(r_u32(0x80142B00u));
    w_u32(0x80142B10u, 0u);
    value = r_u32(0x80142B10u);
    w_u32(0x80142B0Cu, value);
    value = r_u32(0x80142B0Cu);
    w_u32(0x80142B08u, value);
    value = r_u32(0x80142B08u);
    w_u32(0x80142B04u, value);
    return (sint32)mask >> 1;
}

uint32 sub_80140D1C(sint32 status)
{
    FUNCTION_MARKER(0x80140D1Cu, "MOVIE.OVL");
    switch (status)
    {
        case 0:
            return 0u;
        case 1:
            return 2u;
        case 2:
            return 1u;
        case 4:
            return 3u;
        default:
            return (uint32)status | 0x8000u;
    }
}

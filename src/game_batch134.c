#include "game_draft.h"

sint32 sub_80056588(void)
{
    uint32 index, row, column;
    FUNCTION_MARKER(0x80056588u, "SCUS_942.40.DEP");
    for (index = 0u; index < 6u; ++index)
    {
        w_u32(0x8012F120u + 4u * index, 0xFFFFFFFFu);
        w_u8(0x8011678Cu + index, 0u);
    }
    w_u16(0x8011679Cu, 0xFFFFFFFFu);
    w_u16(0x801167A0u, 0xFFFFFFFFu);
    w_u16(0x801167A4u, 0xFFFFFFFFu);
    w_u16(0x801168C4u, 0xFFFFFFFFu);
    w_u16(0x801167B0u, 0xFFFFFFFFu);
    w_u16(0x801167B4u, 0xFFFFFFFFu);
    w_u16(0x80116A7Cu, 0xFFFFFFFFu);
    w_u16(0x80116B44u, 0xFFFFFFFFu);
    w_u16(0x80116914u, 0xFFFFFFFFu);
    w_u8(0x80116988u, 0x00000000u);
    w_u32(0x801168CCu, 0x00000000u);
    w_u8(0x801169FCu, 0u);
    w_u32(0x801167A8u, 0xFFFFFFD8u);
    w_u8(0x801167B8u, 0x00000000u);
    w_u8(0x801167BCu, 0x00000000u);
    w_u8(0x80116976u, 0x00000000u);
    w_u8(0x801167C0u, 0x00000000u);
    w_u8(0x801167C4u, 0x00000000u);
    w_u16(0x801169BAu, 0x00000000u);
    w_u32(0x80116794u, 0x00000000u);
    w_u32(0x8012F144u, 0u);
    w_u32(0x801169D0u, 0x00000000u);
    w_u8(0x8011691Cu, 0x00000000u);
    w_u8(0x80116961u, 0x00000000u);
    w_u8(0x80116B1Cu, 0x00000000u);
    w_u16(0x80116A92u, 0x00000000u);
    w_u8(0x80116B64u, 0x00000000u);
    w_u16(0x80116A06u, 0x00000000u);
    w_u16(0x80116A4Au, 0x00000000u);
    w_u8(0x801167C8u, 0x00000000u);
    w_u8(0x80116B90u, 0x0000008Cu);
    for (row = 0u; row < 12u; ++row)
        for (column = 6u; column != 0u; --column)
            w_u16(0x8010CBEEu + 48u * row + 8u * (column - 1u), 0u);
    w_u16(0x80116A22u, 2048u);
    w_u16(0x80116ACCu, 0xFFFFu);
    return -1;
}

uint32 sub_80032730(void)
{
    uint32 index, result;
    FUNCTION_MARKER(0x80032730u, "SCUS_942.40.DEP");
    w_u16(0x80115EAAu, 0xFFFFu);
    w_u8(0x80115EACu, 0u);
    for (index = 8u; index != 0u; --index)
        w_u16(0x8012C860u + 8u * (index - 1u), 0xFFFFu);
    result = r_u16(r_u32(0x80116A60u) + 76u);
    w_u32(0x801169BCu, 0u);
    w_u16(0x8010BA9Eu, (uint16)result);
    return result;
}

uint32 sub_80068704(void)
{
    FUNCTION_MARKER(0x80068704u, "SCUS_942.40.DEP");
    w_u32(0x8011600Cu, 0u);
    w_u32(0x80116010u, 0u);
    w_u8(0x801167E4u, 0u);
    w_u8(0x801167E0u, 16u);
    return 16u;
}

uint32 sub_800167EC(void)
{
    uint32 index;
    FUNCTION_MARKER(0x800167ECu, "SCUS_942.40.DEP");
    w_u32(0x80116990u, 0u);
    for (index = 0u; index < 16u; ++index)
    {
        w_u32(0x80116BA8u + 12u * index, 0u);
        w_u32(0x80116BACu + 12u * index, 0u);
        w_u32(0x80116BB0u + 12u * index, 0u);
    }
    return 0u;
}

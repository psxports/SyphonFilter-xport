#include "game_draft.h"

sint32 sub_8013E154(void)
{
    uint32 descriptor;
    uint32 first_word;
    uint32 second_word;
    uint32 x;
    uint32 y;
    uint32 index;
    uint32 arguments[5];
    sint32 result;
    FUNCTION_MARKER(0x8013E154u, "MOVIE.DEP.OVL");
    sub_800D8B38(&descriptor);
    /* Snapshot both original unaligned descriptor words before global writes */
    first_word = (uint32)r_u8(descriptor) | ((uint32)r_u8(descriptor + 1u) << 8) | ((uint32)r_u8(descriptor + 2u) << 16) | ((uint32)r_u8(descriptor + 3u) << 24);
    second_word = (uint32)r_u8(descriptor + 4u) | ((uint32)r_u8(descriptor + 5u) << 8) | ((uint32)r_u8(descriptor + 6u) << 16) | ((uint32)r_u8(descriptor + 7u) << 24);
    (void)second_word;
    x = (uint32)(uint16)first_word + r_u32(0x801419E4u);
    index = r_u32(0x80141A18u);
    arguments[2] = r_u32(0x80141A30u);
    y = (first_word >> 16) + r_u32(0x801419E8u);
    w_u16(0x80142A14u, (uint16)x);
    w_u16(0x80142A1Cu, (uint16)x);
    w_u16(0x80142A16u, (uint16)y);
    w_u16(0x80142A1Eu, (uint16)y);
    arguments[0] = r_u32(0x80141A04u + (index << 2));
    arguments[1] = r_u32(0x80142A10u);
    arguments[3] = 0x80141A1Cu;
    arguments[4] = 0x80141A0Cu;
    w_u8(0x80141A2Au, 0u);
    /* TODO Bind the complete DE64 callee ABI without losing its fifth argument */
    result = (sint32)sf_draft_call(0x8013DE64u, 5u, arguments);
    if (result != 0)
    {
        sub_8013E8F4();
        return result;
    }
    return 0;
}

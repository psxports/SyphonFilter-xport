#include "game_draft.h"

sint32 sub_8013F624(uint32 state)
{
    FUNCTION_MARKER(0x8013F624u, "MOVIE.OVL");
    uint32 phase = r_u32(state);
    uint32 argument, result, retries, bit, mapped;
    if (phase == 0u)
    {
        w_u32(0x80142A28u, 0u);
        w_u32(0x80142A24u, 0u);
        w_u32(state, 10u);
    }
    else if (phase != 10u && phase != 11u)
        return 0;

    if (phase != 11u)
    {
        sub_80141360();
        argument = r_u32(0x80142A48u);
        sub_80140E50((sint32)argument);
        w_u32(state, r_u32(state) + 1u);
        return 0;
    }

    if (sub_80141618() == 0u)
        return 0;
    result = (uint32)sub_80141468();
    w_u32(0x80142A28u, result);
    if (result == 4u)
    {
        argument = 4u;
        mapped = sub_80140D1C((sint32)argument);
        w_u32(0x80142A40u, mapped);
        return 1;
    }
    if (result == 0u)
    {
        argument = r_u32(0x80142A48u);
        bit = 1u << (argument & 31u);
        if ((r_u32(0x80142A38u) & bit) == 0u)
            w_u32(0x80142A28u, 4u);
        argument = r_u32(0x80142A28u);
        mapped = sub_80140D1C((sint32)argument);
        w_u32(0x80142A40u, mapped);
        return 1;
    }
    if ((sint32)result > 0 && (sint32)result < 3)
    {
        retries = r_u32(0x80142A24u) + 1u;
        w_u32(0x80142A24u, retries);
        if ((sint32)retries < 5)
        {
            w_u32(state, 10u);
            return 0;
        }
    }
    bit = 1u << (r_u32(0x80142A48u) & 31u);
    argument = r_u32(0x80142A28u);
    w_u32(0x80142A38u, r_u32(0x80142A38u) & ~bit);
    mapped = sub_80140D1C((sint32)argument);
    w_u32(0x80142A40u, mapped);
    return 1;
}

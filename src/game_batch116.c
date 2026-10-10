#include "game_draft.h"

sint32 sub_8013F860(uint32 state)
{
    FUNCTION_MARKER(0x8013F860u, "MOVIE.OVL");
    uint32 value, argument, result;
    /* TODO Bind the pending operation helpers with their reviewed native ABIs */
    switch (r_u32(state))
    {
        case 0:
            w_u32(0x80142A34u, 0u);
            w_u32(0x80142A30u, 0u);
            w_u32(0x80142A2Cu, 0u);
            sub_80140EE0(0x8013F624u);
            w_u32(state, 10u);
            return 0;
        case 10:
            value = r_u32(0x80142A40u);
            if (value == 0u)
            {
                w_u32(state, 30u);
                return 0;
            }
            if (value != 3u)
                return 1;
            argument = r_u32(0x80142A48u);
            value = r_u32(0x80142A38u);
            w_u32(0x80142A34u, 1u);
            w_u32(0x80142A38u, value | (1u << (argument & 31u)));
            sub_80141360();
            argument = r_u32(0x80142A48u);
            sf_draft_call(0x80140E90u, 1u, &argument);
            w_u32(state, 21u);
            return 0;
        case 21:
            if (sf_draft_call(0x80141654u, 0u, NULL) == 0u)
                return 0;
            sf_draft_call(0x80141540u, 0u, NULL);
            w_u32(state, 30u);
            return 0;
        case 30:
            sub_80141360();
            argument = r_u32(0x80142A48u);
            sf_draft_call(0x80140E60u, 1u, &argument);
            w_u32(state, r_u32(state) + 1u);
            return 0;
        case 31:
            if (sf_draft_call(0x80141618u, 0u, NULL) == 0u)
                return 0;
            result = sf_draft_call(0x80141468u, 0u, NULL);
            w_u32(0x80142A30u, result);
            if (result == 0u)
            {
                w_u32(0x80142A40u, r_u32(0x80142A34u) ? 3u : 0u);
                return 1;
            }
            if (((sint32)result > 0 && (sint32)result < 3) || result == 4u)
            {
                value = r_u32(0x80142A2Cu) + 1u;
                w_u32(0x80142A2Cu, value);
                if ((sint32)value < 5)
                {
                    w_u32(state, 30u);
                    return 0;
                }
            }
            argument = r_u32(0x80142A30u);
            if (argument == 4u)
                w_u32(0x80142A40u, argument);
            else
                w_u32(0x80142A40u, sf_draft_call(0x80140D1Cu, 1u, &argument));
            return 1;
        default:
            return 0;
    }
}

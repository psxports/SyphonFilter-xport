#include "game_draft.h"

sint32 sub_8013E01C(void)
{
    FUNCTION_MARKER(0x8013E01Cu, "MOVIE.DEP.OVL");
    uint32 first;
    uint32 second;
    uint32 first_address = sf_draft_guest_address(&first);
    uint32 second_address = sf_draft_guest_address(&second);
    sint32 status;
    /* TODO Bind the decoded output and thirteen-argument callees */
    status = (sint32)sf_draft_call(0x8013DBD0u, 2u, (const uint32[]){first_address, second_address});
    if (status)
        goto cleanup;
    if (r_u8(0x80141A2Bu))
        return 0;
    if (r_u8(0x80141A28u))
    {
        uint32 args[13];
        args[7] = 0x80142A14u;
        args[8] = 0x80142A1Cu;
        args[9] = 0x80141A0Cu;
        args[10] = 0x80142A10u;
        args[11] = 0x80141A04u;
        args[12] = 0x80142A0Cu;
        args[4] = r_u32(0x801419F8u);
        args[1] = r_u32(0x801419E4u);
        args[5] = r_u32(0x801419FCu);
        args[6] = r_u32(0x80141A30u);
        args[2] = r_u32(0x801419E8u);
        args[3] = r_u32(0x801419F4u);
        args[0] = second;
        status = (sint32)sf_draft_call(0x8013D8E8u, 13u, args);
        if (status)
            goto cleanup;
    }
    {
        uint32 index = r_u32(0x80141A18u);
        uint32 decoded = first;
        uint32 destination = r_u32(0x80141A04u + (index << 2));
        status = (sint32)sf_draft_call(0x8013DDE0u, 2u, (const uint32[]){decoded, destination});
    }
    if (!status)
        return 0;
cleanup:
    sub_8013E8F4();
    return status;
}

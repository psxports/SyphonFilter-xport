#include "game_draft.h"

sint32 sf_native_get_table(sint32 *address, sint32 *count, uint32 *flags);

sint32 sub_80148230(sint32 action)
{
    FUNCTION_MARKER(0x80148230u, "TITLE.DEP.OVL");
    uint32 status = 0u;
    uint32 arguments[5];
    sint32 address, count;
    uint32 buffer, offset, fifth;
    if (action == 9)
        return 9;
    switch (action)
    {
        case 0:
            arguments[0] = 0u;
            /* TODO Bind the actual resident lower-overlay function */
            status = sf_draft_call(0x8013F5BCu, 1u, arguments);
            break;
        case 1:
            arguments[0] = 0u;
            /* TODO Bind the actual resident lower-overlay function */
            status = sf_draft_call(0x8013F7F8u, 1u, arguments);
            break;
        case 2:
            buffer = 0x8014B470u;
            offset = 512u;
            fifth = 128u;
            goto transfer;
        case 3:
        {
            uint16 selection = r_u16(0x8014A808u);
            w_u16(0x8014B49Au, selection);
            w_u16(0x8014B498u, selection);
            arguments[0] = 0u;
            arguments[1] = 0x80146D10u;
            arguments[2] = 0x8014B470u;
            arguments[3] = 512u;
            arguments[4] = 128u;
            status = sf_draft_call(0x80140268u, 5u, arguments);
            break;
        }
        case 4:
            if (r_u32(0x8014B470u + (r_u32(0x8014A808u) << 2)) == 0u)
            {
                status = 1u;
                break;
            }
            sf_native_get_table(&address, &count, NULL);
            offset = (uint32)count * r_u32(0x8014A808u) + 640u;
            fifth = (uint32)count;
            buffer = (uint32)address;
            goto transfer;
        case 5:
            if ((sint32)r_u32(0x8014B470u + (r_u32(0x8014A808u) << 2)) <= 0)
            {
                arguments[0] = 1u;
                sf_draft_call(0x80147F28u, 1u, arguments);
            }
            else
            {
                arguments[0] = r_u32(0x8014A4F4u);
                arguments[1] = 2u;
                arguments[2] = 0u;
                arguments[3] = 0x80147F28u;
                sf_draft_call(0x80147C34u, 4u, arguments);
            }
            status = 1u;
            break;
        case 7:
            sub_8014775C(4u);
            status = 1u;
            break;
        case 8:
            sf_native_get_table(&address, &count, NULL);
            offset = (uint32)count * r_u32(0x8014A808u) + 640u;
            buffer = 0x8014B258u;
            fifth = (uint32)count;
        transfer:
            arguments[0] = 0u;
            arguments[1] = 0x80146D10u;
            arguments[2] = buffer;
            arguments[3] = offset;
            arguments[4] = fifth;
            /* TODO Bind the actual resident lower-overlay transfer function */
            status = sf_draft_call(0x80140048u, 5u, arguments);
            break;
        default:
            break;
    }
    if (status == 0u)
        sub_800DDC34(1, 0u, 0x80146D04u, 1510);
    uint32 message = r_u32(0x8014A4A4u + ((uint32)action << 2));
    uint32 result = r_u8(message);
    if (result != 0u)
    {
        arguments[0] = message;
        arguments[1] = 4u;
        arguments[2] = 0u;
        arguments[3] = 0u;
        return (sint32)sf_draft_call(0x80147C34u, 4u, arguments);
    }
    return (sint32)result;
}

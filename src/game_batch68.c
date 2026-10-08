#include "game_draft.h"

sint32 sub_800C302C(sint16 sequence_id)
{
    sint32 index;
    FUNCTION_MARKER(0x800C302Cu, "SCUS_942.40");
    for (index = 0; index < 6; ++index)
    {
        uint32 table = *SF_DRAFT_PTR(uint32, 0x8012FF98u + 4u * (uint32)index);
        if (*SF_DRAFT_PTR(sint16, table + 12) == sequence_id)
            return index;
    }
    return -1;
}

uint32 sf_native_clear_sequence(uint32 initial_result)
{
    uint32 sequence = *SF_DRAFT_PTR(uint32, SF_DRAFT_GP + 0x75Cu);
    uint32 result = initial_result;
    uint32 table_slot;
    sint32 index = 0;
    sint32 count;
    uint32 record;
    FUNCTION_MARKER(0x800C0C74u, "SCUS_942.40");
    if (!sequence)
        return result;
    record = sequence + 24u * (uint32)*SF_DRAFT_PTR(sint16, SF_DRAFT_GP + 0x764u);
    if (*SF_DRAFT_PTR(sint8, record + 4) == -1)
        return 0xFFFFFFFFu;
    table_slot = 0x8012FF98u + 4u * (uint32)sub_800C302C(*SF_DRAFT_PTR(uint8, record + 3));
    count = *SF_DRAFT_PTR(sint16, *SF_DRAFT_PTR(uint32, table_slot) + 6);
    result = (uint32)count;
    if (count > 0)
    {
        do
        {
            sequence = *SF_DRAFT_PTR(uint32, SF_DRAFT_GP + 0x75Cu);
            record = sequence + 24u * (uint32)*SF_DRAFT_PTR(sint16, SF_DRAFT_GP + 0x764u);
            sub_800F74BC(*SF_DRAFT_PTR(uint8, record + 3), (sint16)index);
            count = *SF_DRAFT_PTR(sint16, *SF_DRAFT_PTR(uint32, table_slot) + 6);
            ++index;
            result = (uint32)(index < count);
        } while (result);
    }
    *SF_DRAFT_PTR(uint32, SF_DRAFT_GP + 0x75Cu) = 0;
    return result;
}

void sub_800C0C74(void)
{
    (void)sf_native_clear_sequence(0);
}

void sub_8005FCC8(void)
{
    FUNCTION_MARKER(0x8005FCC8u, "SCUS_942.40");
}

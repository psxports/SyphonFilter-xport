#include "game_draft.h"

void sub_80029E40(void)
{
    FUNCTION_MARKER(0x80029E40u, "SCUS_942.40");
}

sint32 sub_8014D270(uint32 path)
{
    uint32 descriptor[4];
    uint32 descriptor_address;
    uint8 output[48];
    uint32 output_address;
    sint32 count, index, result;
    FUNCTION_MARKER(0x8014D270u, "INIT.DEP.OVL");
    descriptor[0] = SF_DRAFT_PTR(uint8, path)[8] == 'I' ? 0x80160000u : 0x80187B00u;
    descriptor_address = sf_draft_guest_address(descriptor);
    output_address = sf_draft_guest_address(output);
    count = sub_800DFCD0(descriptor_address);
    for (index = 0; index < count; ++index)
    {
        if (sub_800DFCF4(descriptor_address, index, output_address))
            sub_800DDC34(1, 0, 0x8014C284u, 840);
        sub_800DDD24((sint32)output_address);
        sub_800DDF84((sint32)output_address);
    }
    result = sub_800EC884(path, 0x8014C290u);
    if (!result)
        return (sint32)sub_80039CF4((sint32)descriptor_address);
    result = sub_800EC884(path, 0x8014C2A4u);
    if (!result)
    {
        sub_80039E38((sint32)descriptor_address, 5, 0x8010C240u);
        result = sub_80039FDC((sint32)descriptor_address);
        sub_80029E40();
        return result;
    }
    return result;
}

sint32 sub_801539A0(uint8 common)
{
    uint32 index;
    FUNCTION_MARKER(0x801539A0u, "INIT.DEP.OVL");
    if (common)
        return sub_800171A8(0x8010AA64u, (sint32)0x80127DC0u, 0);
    for (index = 0u; index < 8u; ++index)
    {
        sint32 stage = r_s16(0x80130C88u);
        w_u32(0x8013C6B0u + index * 4u,
            r_u32(0x8010ACC0u + (uint32)stage * 32u + index * 4u));
    }
    return sub_800171A8(0x8013C6B0u, (sint32)0x80127DC0u, 150);
}

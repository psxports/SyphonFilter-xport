#include "game_draft.h"

sint32 sub_80148474(void)
{
    FUNCTION_MARKER(0x80148474u, "TITLE.DEP.OVL");
    uint32 descriptor[12];
    uint32 filenames[4];
    uint32 handle;
    uint32 directory;
    uint32 color = r_u32(0x80146D88u);
    uint32 descriptor_address = sf_draft_guest_address(descriptor);
    int index;

    for (index = 0; index < 4; ++index)
        filenames[index] = r_u32(0x80146DB8u + (uint32)index * 4u);
    sub_800DEEF4((sint32)0x80146DC8u, sf_draft_guest_address(&handle));
    sub_800DF83C((sint32)handle, 0, sf_draft_guest_address(&directory), (sint32)r_u32(0x8014B5A0u), 0xF000);
    for (index = 0; index < 4; ++index)
    {
        sint16 x;
        sint16 y;
        uint32 record = 0x8014B4F0u + (uint32)index * 44u;
        sub_800DFD64((sint32)directory, (sint32)filenames[index], descriptor_address);
        sub_800DDD24((sint32)descriptor_address);
        sub_800DDF84((sint32)descriptor_address);
        if (index == 0)
        {
            x = 42;
            y = 157;
        }
        else if (index == 1)
        {
            x = 131;
            y = 157;
        }
        else if (index == 2)
        {
            x = 233;
            y = 157;
        }
        else
        {
            x = 133;
            y = 166;
        }
        sub_800DE120((sint32)descriptor_address, (sint32)record, x, y, 0, 0);
        w_u8(record + 20u, (uint8)color);
        w_u8(record + 21u, (uint8)(color >> 8));
        w_u8(record + 22u, (uint8)(color >> 16));
        sub_800DE31C(record, 1);
    }
    return 0;
}

sint32 sub_8014775C(uint32 value)
{
    FUNCTION_MARKER(0x8014775Cu, "TITLE.DEP.OVL");
    uint32 current;
    uint32 depth;
    uint8 first;
    uint32 result;

    if (r_s32(0x8014A8ECu) >= 10)
        sub_800DDC34(1, 0u, 0x80146D04u, 956);
    if (value >= 7u)
        sub_800DDC34(1, 0u, 0x80146D04u, 957);
    current = r_u32(0x8014A8B0u);
    if (current != 3u)
    {
        uint32 previous;
        depth = r_u32(0x8014A8ECu);
        previous = r_u32(0x8014A8F0u);
        w_u16(0x8014B5D2u + (depth << 2), (uint16)current);
        w_u16(0x8014B5D0u + (depth << 2), (uint16)previous);
        w_u32(0x8014A8ECu, depth + 1u);
    }
    first = r_u8(0x8014A810u);
    w_u32(0x8014B468u, 1u);
    result = 255u;
    w_u32(0x8014A8B0u, value);
    if (first != 255u)
    {
        sub_80084C30(first);
        result = sub_80084C30(r_u8(0x8014A811u));
    }
    w_u32(0x8014A8F0u, 0u);
    return (sint32)result;
}

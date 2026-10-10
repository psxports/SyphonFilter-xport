#include "game_draft.h"

void sub_80152EEC(uint32 sectors_per_block, uint8 preload)
{
    uint8 file[80];
    uint32 loaded = 0u;
    uint32 callback[7];
    uint32 header, names, offsets, file_info, first_sector, fixed_models;
    uint32 index, model_offset, descriptor, start, end, length, blocks, sector;
    uint32 name_kind, scan, dot, flags_address, pool, data, level, list, item;
    uint32 previous = 254u, segment = 0u, count, divisor;
    sint32 models, maximum = 0, total, signed_divisor;
    uint8 pinned;
    FUNCTION_MARKER(0x80152EECu, "INIT.DEP.OVL");
    w_u32(0x80116B54u, 5u);
    w_u32(0x8011696Cu, sectors_per_block);
    fixed_models = r_u32(0x80116A60u) + 120u;
    sub_800EC924(0x80128DF8u, 0x8014C474u, r_u32(0x80102D1Cu + 4u * (uint32)(sint32)r_s16(0x80130C88u)));
    file_info = (uint32)sub_800DEB50((sint32)sf_draft_guest_address(file), (sint32)0x80128DF8u);
    if (file_info == 0u)
        sub_800DDC34(1, 0u, 0x8014C284u, 2019);
    first_sector = (uint32)sub_800EDB24(file_info);
    if (sub_800DF99C((sint32)0x80128DF8u, 0, sf_draft_guest_address(&loaded)) != 0)
        sub_800DDC34(1, 0u, 0x8014C284u, 2023);
    header = loaded;
    w_u32(0x80116A44u, header);
    names = header + r_u32(header + 12u);
    models = (sint32)r_u32(header + 4u);
    offsets = header + r_u32(header + 8u);
    w_u32(0x80116BA4u, sub_800DE414((sint32)((uint32)models * 16u)));
    w_u32(0x80116994u, sub_800DE414((sint32)((uint32)models * 60u)));
    w_u32(0x801169B0u, (uint32)models);
    for (index = 0u; (sint32)index < models; ++index)
    {
        pinned = 0u;
        start = r_u32(offsets + 4u * index);
        descriptor = r_u32(0x80116BA4u) + 16u * index;
        if (index == (uint32)models - 1u)
            end = *SF_DRAFT_PTR(uint32, file_info + 4u) - r_u32(header + 16u);
        else
            end = r_u32(offsets + 4u * index + 4u);
        sector = first_sector + ((start + r_u32(header + 16u)) >> 11);
        sub_800EDA20((sint32)sector, descriptor + 4u);
        length = end - (start + 1u);
        blocks = r_u32(0x8011696Cu);
        divisor = blocks << 11;
        if (divisor == 0u)
            _break(7u, 0u);
        blocks = (length / divisor + 1u) * blocks;
        w_u32(descriptor, names);
        w_u16(descriptor + 12u, (uint16)length);
        w_u8(descriptor + 9u, (uint8)index);
        w_u8(descriptor + 10u, (uint8)index);
        w_u8(descriptor + 8u, (uint8)blocks);
        name_kind = r_u8(names);
        scan = fixed_models;
        do
        {
            item = r_u8(scan);
            if (item == 255u)
                break;
            ++scan;
            if (item == index)
            {
                pinned = 1u;
                break;
            }
        } while ((sint32)scan < (sint32)(fixed_models + 16u));
        names += (uint32)sub_800EC8A4(names) + 1u;
        dot = sub_800EC8B4(r_u32(descriptor), 46);
        if (dot != 0u)
            w_u8(dot, 0u);
        model_offset = 60u * index;
        sub_800D8CDC(0xFFFFFFFFu, (sint32)0x8010E1ECu, 0x1000000, (sint32)(r_u32(0x80116994u) + model_offset));
        if (pinned != 0u)
        {
            flags_address = r_u32(r_u32(r_u32(0x80116994u) + model_offset) + 16u) + 40u;
            w_u32(flags_address, r_u32(flags_address) | 0x20000u);
        }
        if (name_kind - 56u < 2u)
        {
            flags_address = r_u32(r_u32(r_u32(0x80116994u) + model_offset) + 16u) + 40u;
            w_u32(flags_address, r_u32(flags_address) | (name_kind == 57u ? 0x200000u : 0x100000u));
        }
    }
    if (models > 0)
    {
        level = r_u32(0x80116A60u);
        pool = r_u32(0x80116BA4u);
        signed_divisor = (sint32)r_u32(0x8011696Cu);
        for (index = 0u; (sint32)index < models; ++index)
        {
            if (signed_divisor == 0)
                _break(7u, 0u);
            total = (sint32)r_u8(pool + 16u * index + 8u) / signed_divisor;
            list = level + 144u + 15u * index;
            item = r_u8(list);
            for (count = 0u; item != 255u && count < 14u; ++count)
            {
                if (item != 254u)
                    total = (sint32)((uint32)total + (uint32)((sint32)r_u8(pool + 16u * item + 8u) / signed_divisor));
                item = r_u8(++list);
            }
            total = (sint16)(uint16)total;
            if (maximum < total)
                maximum = total;
        }
    }
    w_u32(0x80116950u, (uint32)maximum);
    w_u32(0x80116A50u, (uint32)maximum);
    w_u32(0x801169E4u, (uint32)maximum);
    pool = sub_800DE414((sint32)((uint32)maximum * 20u));
    level = r_u32(0x80116B94u);
    data = r_u32(level + 48u) + r_u32(level + 8u);
    w_u32(0x80116A8Cu, pool);
    w_u32(0x8011693Cu, data);
    for (index = 0u; (sint32)index < maximum; ++index)
    {
        descriptor = pool + 20u * index;
        w_u32(descriptor, data);
        data += sectors_per_block << 11;
        w_u32(descriptor + 4u, 0u);
        w_u32(descriptor + 8u, 0u);
        w_u32(descriptor + 12u, 0xFFFFFFFFu);
        w_u32(descriptor + 16u, 1u);
    }
    if (preload != 0u)
    {
        level = r_u32(0x80116B94u);
        for (index = 0u; index < r_u32(level + 52u); ++index)
        {
            descriptor = r_u32(0x80116A8Cu) + 20u * index;
            item = r_u8(level + 56u + index);
            count = r_u32(0x80116A50u);
            w_u32(descriptor + 16u, 0xFFFFFFFFu);
            pool = r_u32(0x80116BA4u);
            w_u32(0x80116A50u, count - 1u);
            model_offset = 60u * item;
            data = r_u32(0x80116994u);
            w_u32(descriptor + 12u, item);
            w_u32(descriptor + 8u, pool + 16u * item);
            count = r_u32(0x801169E4u);
            w_u32(descriptor + 4u, r_u32(data + model_offset));
            w_u32(0x801169E4u, count - 1u);
            if (item == (previous & 255u))
                ++segment;
            else
            {
                segment = 0u;
                if ((previous & 255u) != 254u)
                {
                    callback[6] = previous & 255u;
                    sub_80080758((sint32)sf_draft_guest_address(callback));
                    segment = 0u;
                }
                previous = item;
                flags_address = r_u32(r_u32(r_u32(0x80116994u) + model_offset) + 16u) + 32u;
                w_u32(flags_address, r_u32(descriptor) & 0x7FFFFFFFu);
            }
            w_u32(r_u32(0x80116994u) + model_offset + 4u * segment + 4u, r_u32(descriptor));
        }
        callback[6] = previous;
        sub_80080758((sint32)sf_draft_guest_address(callback));
    }
    sub_80015B68(NULL, 0u);
}

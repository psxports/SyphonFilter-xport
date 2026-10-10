#include "game_draft.h"

uint32 sub_800D57A4(uint32 fourth_sxy, uint32 primitive_kind)
{
    uint32 first, second, third, flags = 0u;
    FUNCTION_MARKER(0x800D57A4u, "SCUS_942.40");
    first = sf_gte_read_data(12u);
    second = sf_gte_read_data(13u);
    third = sf_gte_read_data(14u);
    if (((first ^ second) & 0x8000u) != 0u || ((first ^ third) & 0x8000u) != 0u || (primitive_kind == 0u && ((first ^ fourth_sxy) & 0x8000u) != 0u))
        flags |= 1u;
    if (((first ^ second) & 0x80000000u) != 0u || ((first ^ third) & 0x80000000u) != 0u || (primitive_kind == 0u && ((first ^ fourth_sxy) & 0x80000000u) != 0u))
        flags |= 2u;
    return flags;
}

uint32 sub_8004008C(uint32 incoming_v0)
{
    sint32 count, limit;
    FUNCTION_MARKER(0x8004008Cu, "SCUS_942.40");
    if (incoming_v0 == 0u)
        return incoming_v0;
    limit = (sint32)r_u32(SF_DRAFT_GP + 0xA2Cu);
    count = (sint32)r_u32(SF_DRAFT_GP + 0xA28u);
    if (count < limit)
    {
        sf_draft_call(r_u32(SF_DRAFT_GP + 0xA30u), 0u, NULL);
        w_u32(SF_DRAFT_GP + 0xA28u, 0x7FFFFFFFu);
        w_u32(SF_DRAFT_GP + 0xA2Cu, 0x7FFFFFFFu);
        return 0x7FFFFFFFu;
    }
    w_u32(SF_DRAFT_GP + 0xA28u, (uint32)count - 1u);
    if (r_u16(SF_DRAFT_GP + 0x2BAu) == 0xFFFFu)
        return 0xFFFFu;
    sub_8003FE58();
    return sub_80015364(15u, 4u, 0xFFFE, 0xFFFE, 0, 0, 0, 0);
}

uint32 sub_80040088(void)
{
    FUNCTION_MARKER(0x80040088u, "SCUS_942.40");
    return sub_8004008C(r_u32(SF_DRAFT_GP + 0x2C0u));
}

uint32 sub_8003FB14(uint32 incoming_v0)
{
    uint32 phase;
    FUNCTION_MARKER(0x8003FB14u, "SCUS_942.40");
    if (incoming_v0 == 0u)
    {
        sub_80063B5C();
        nullsub_15();
    }
    sub_80030574();
    if (r_u32(SF_DRAFT_GP + 0x2D4u) == 1u)
        sub_8003F634();
    if (r_u8(SF_DRAFT_GP + 0x2AFu) != 0u && r_u32(0x8011BB44u) != 0u)
        sub_8003D100();
    sub_80045138();
    if (r_u8(SF_DRAFT_GP + 0xA40u) != 0u)
        sub_8003B1FC();
    else
    {
        phase = r_u32(SF_DRAFT_GP + 0x2D4u);
        if (phase == 2u || phase == 3u)
            sub_80044870();
        else if (phase == 5u)
        {
            sub_80044E68();
            sub_80044900();
        }
        sub_8003DB64();
    }
    return sub_80015364(14u, 4u, 0xFFFE, 0xFFFE, 0, 0, 0, 0);
}

uint32 sub_8003FB0C(void)
{
    FUNCTION_MARKER(0x8003FB0Cu, "SCUS_942.40");
    return sub_8003FB14(r_u8(0x801168D8u));
}

static void sf_matrix_columns_71(uint32 matrix, uint32 words[5])
{
    uint32 rows[3][3], i, j;
    for (i = 0u; i < 3u; ++i)
    {
        uint32 xy, z;
        if (i == 0u)
        {
            xy = r_u16(matrix) | (r_u32(matrix + 4u) & 0xFFFF0000u);
            z = r_u32(matrix + 12u);
        }
        else if (i == 1u)
        {
            xy = r_u16(matrix + 2u) | (r_u32(matrix + 8u) << 16);
            z = (uint32)(sint32)r_s16(matrix + 14u);
        }
        else
        {
            xy = r_u16(matrix + 4u) | (r_u32(matrix + 8u) & 0xFFFF0000u);
            z = r_u32(matrix + 16u);
        }
        sf_gte_write_data(0u, xy);
        sf_gte_write_data(1u, z);
        sf_gte_execute(0x486012u);
        for (j = 0u; j < 3u; ++j)
            rows[i][j] = sf_gte_read_data(9u + j);
    }
    words[0] = (rows[0][0] & 0xFFFFu) | (rows[1][0] << 16);
    words[1] = (rows[2][0] & 0xFFFFu) | (rows[0][1] << 16);
    words[2] = (rows[1][1] & 0xFFFFu) | (rows[2][1] << 16);
    words[3] = (rows[0][2] & 0xFFFFu) | (rows[1][2] << 16);
    words[4] = rows[2][2];
}

void sub_800C6F44(uint32 matrix)
{
    uint32 words[5], translation[3], i;
    FUNCTION_MARKER(0x800C6F44u, "SCUS_942.40");
    for (i = 0u; i < 5u; ++i)
        xport_gte_write_control(i, r_u32(0x8012DB98u + 4u * i));
    sf_matrix_columns_71(matrix, words);
    for (i = 0u; i < 5u; ++i)
        xport_gte_write_control(8u + i, words[i]);
    for (i = 0u; i < 5u; ++i)
        xport_gte_write_control(i, r_u32(0x80130CD8u + 4u * i));
    for (i = 0u; i < 3u; ++i)
        sf_gte_write_data(9u + i, r_u32(matrix + 20u + 4u * i));
    sf_gte_execute(0x49E012u);
    for (i = 0u; i < 3u; ++i)
        translation[i] = sf_gte_read_data(25u + i);
    sf_matrix_columns_71(matrix, words);
    for (i = 0u; i < 5u; ++i)
        xport_gte_write_control(i, words[i]);
    for (i = 0u; i < 3u; ++i)
        xport_gte_write_control(5u + i, translation[i] + r_u32(0x80130CECu + 4u * i));
}

void sub_800D1924(uint32 matrix)
{
    uint32 words[5], translation[3], i;
    FUNCTION_MARKER(0x800D1924u, "SCUS_942.40");
    for (i = 0u; i < 5u; ++i)
        xport_gte_write_control(i, r_u32(0x1F800100u + 4u * i));
    sf_matrix_columns_71(matrix, words);
    for (i = 0u; i < 5u; ++i)
        xport_gte_write_control(8u + i, words[i]);
    for (i = 0u; i < 5u; ++i)
        xport_gte_write_control(i, r_u32(0x1F800120u + 4u * i));
    for (i = 0u; i < 3u; ++i)
        sf_gte_write_data(9u + i, r_u32(matrix + 20u + 4u * i));
    sf_gte_execute(0x49E012u);
    for (i = 0u; i < 3u; ++i)
        translation[i] = sf_gte_read_data(25u + i);
    sf_matrix_columns_71(matrix, words);
    for (i = 0u; i < 5u; ++i)
        xport_gte_write_control(i, words[i]);
    for (i = 0u; i < 3u; ++i)
        xport_gte_write_control(5u + i, translation[i] + r_u32(0x1F800134u + 4u * i));
}

sint32 sub_800D2BF0(sint32 model, sint32 index, sint32 output, sint32 descriptor)
{
    uint32 winner = 0u;
    FUNCTION_MARKER(0x800D2BF0u, "SCUS_942.40");
    if (index >= 0 && index < 15)
    {
        uint32 section, table, vertex_start, normal_start, normal, best = 0u;
        uint32 depth, i;
        sint32 count;
        uint32 *result = SF_DRAFT_PTR(uint32, (uint32)output);
        result[3] = 255u;
        sub_800E95D4(2, output);
        depth = sf_gte_color_02() & 0xFFFFu;
        for (i = 13u; i <= 20u; ++i)
            xport_gte_write_control(i, i == 17u ? depth : 0u);
        section = (uint32)model + 36u + 4u * r_u32((uint32)model + 8u);
        table = r_u32((uint32)descriptor + 24u);
        while (index != 0)
        {
            section += r_u32(section);
            table += 4u;
            --index;
        }
        sub_800C6F44(r_u32(table));
        vertex_start = section + 68u;
        if (r_u32(section + 52u) != 0u)
        {
            normal_start = vertex_start;
            count = (sint32)r_u32(section + 8u);
            do
            {
                --count;
                normal_start += 24u;
            } while (count != 0);
            normal = normal_start;
            count = (sint32)r_s16(section + 52u);
            sf_gte_write_data(6u, 0x34FFFFFFu);
            sf_gte_write_data(8u, 0u);
            do
            {
                uint32 intensity;
                sf_gte_write_data(0u, r_u32(normal));
                sf_gte_write_data(1u, r_u32(normal + 4u));
                sf_gte_execute(0xE80413u);
                intensity = sf_gte_read_data(22u) & 0xFFu;
                --count;
                if (best < intensity)
                {
                    winner = normal;
                    best = intensity;
                }
                normal += 8u;
            } while (count != 0);
            if (winner != 0u)
            {
                uint32 vertex = winner - normal_start + vertex_start;
                result[0] = (uint32)(sint32)r_s16(vertex);
                result[1] = (uint32)(sint32)r_s16(vertex + 2u);
                result[2] = (uint32)(sint32)r_s16(vertex + 4u);
                result[3] = winner;
            }
        }
    }
    sub_800E95D4(2, (sint32)0x800D2BD4u);
    return (sint32)winner;
}

sint32 sub_800CD9F4(uint32 callback)
{
    FUNCTION_MARKER(0x800CD9F4u, "SCUS_942.40");
    sub_800C8A9C((sint32)0x800CD90Cu, 0, (sint32)callback);
    return sub_800CD824(callback);
}

uint32 sub_800401A0(sint16 start, sint16 limit, uint32 callback)
{
    uint32 handle;
    FUNCTION_MARKER(0x800401A0u, "SCUS_942.40");
    w_u32(SF_DRAFT_GP + 0xA30u, callback);
    w_u32(SF_DRAFT_GP + 0xA28u, (uint32)((sint32)start * 20));
    w_u32(SF_DRAFT_GP + 0xA2Cu, (uint32)((sint32)limit * 20));
    handle = (uint32)sub_80085E04(r_u32(0x80116284u), (sint32)0x8011BFD8u, -153, 50);
    w_u16(SF_DRAFT_GP + 0x2BAu, (uint16)handle);
    sub_80086254(handle & 0xFFFFu, 0);
    sub_80015364(15u, 4u, 0xFFFEu, 0xFFFEu, 0u, 0u, 0u, 0u);
    sub_8003FE58();
    w_u32(SF_DRAFT_GP + 0x2BCu, 5u);
    return 5u;
}

sint32 sub_80077A18(uint32 input, uint32 output)
{
    sint32 x = *SF_DRAFT_PTR(sint32, input);
    sint32 y = *SF_DRAFT_PTR(sint32, input + 4u);
    sint32 z = *SF_DRAFT_PTR(sint32, input + 8u);
    uint32 magnitudes = (x < 0 ? 0u - (uint32)x : (uint32)x) | (y < 0 ? 0u - (uint32)y : (uint32)y) | (z < 0 ? 0u - (uint32)z : (uint32)z);
    sint32 shift, sum, normalization;
    uint32 leading, table_index;
    sint16 reciprocal;
    FUNCTION_MARKER(0x80077A18u, "SCUS_942.40");
    sf_gte_write_data(30u, magnitudes);
    shift = 18 - (sint32)sf_gte_read_data(31u);
    if (shift > 0)
    {
        x >>= (uint32)shift & 31u;
        y >>= (uint32)shift & 31u;
        z >>= (uint32)shift & 31u;
    }
    sf_gte_write_data(9u, (uint32)x);
    sf_gte_write_data(10u, (uint32)y);
    sf_gte_write_data(11u, (uint32)z);
    sf_gte_execute(0xA00428u);
    sum = (sint32)(sf_gte_read_data(25u) + sf_gte_read_data(26u) + sf_gte_read_data(27u));
    sf_gte_write_data(30u, (uint32)sum);
    leading = sf_gte_read_data(31u) & 0xFFFFFFFEu;
    normalization = (31 - (sint32)leading) >> 1;
    if ((sint32)leading < 24)
        table_index = (uint32)(sum >> ((24u - leading) & 31u));
    else
        table_index = (uint32)sum << ((leading - 24u) & 31u);
    reciprocal = *SF_DRAFT_PTR(sint16, 0x8010FF5Cu + 2u * (table_index - 64u));
    sf_gte_write_data(8u, (uint32)(sint32)reciprocal);
    sf_gte_write_data(9u, (uint32)x);
    sf_gte_write_data(10u, (uint32)y);
    sf_gte_write_data(11u, (uint32)z);
    sf_gte_execute(0x190003Du);
    *SF_DRAFT_PTR(sint32, output) = (sint32)sf_gte_read_data(25u) >> ((uint32)normalization & 31u);
    *SF_DRAFT_PTR(sint32, output + 4u) = (sint32)sf_gte_read_data(26u) >> ((uint32)normalization & 31u);
    *SF_DRAFT_PTR(sint32, output + 8u) = (sint32)sf_gte_read_data(27u) >> ((uint32)normalization & 31u);
    return sum;
}

void sub_800D69D8(sint32 geometry, sint32 mode, sint32 ordering_table, uint32 uv)
{
    uint32 packet = r_u32(0x8012C8A0u);
    sint32 depth;
    uint32 tag, i;
    FUNCTION_MARKER(0x800D69D8u, "SCUS_942.40");
    sf_gte_write_data(0u, *SF_DRAFT_PTR(uint32, (uint32)geometry));
    sf_gte_write_data(1u, *SF_DRAFT_PTR(uint32, (uint32)geometry + 4u));
    sf_gte_write_data(2u, *SF_DRAFT_PTR(uint32, (uint32)geometry + 8u));
    sf_gte_write_data(3u, *SF_DRAFT_PTR(uint32, (uint32)geometry + 12u));
    sf_gte_write_data(4u, *SF_DRAFT_PTR(uint32, (uint32)geometry + 24u));
    sf_gte_write_data(5u, *SF_DRAFT_PTR(uint32, (uint32)geometry + 28u));
    sf_gte_execute(0x280030u);
    depth = (sint32)((sf_gte_read_data(16u) + sf_gte_read_data(17u) + sf_gte_read_data(18u)) >> 2) - 50;
    if (depth < 50 || depth >= 4097)
        return;
    sf_gte_execute(0x1400006u);
    if ((sint32)sf_gte_read_data(24u) < 0)
        return;
    w_u32(packet + 4u, mode ? 0x2E002800u : 0x2E282828u);
    for (i = 0u; i < 3u; ++i)
    {
        w_u32(packet + 8u + 8u * i, sf_gte_read_data(12u + i));
        w_u32(packet + 12u + 8u * i, *SF_DRAFT_PTR(uint32, uv + 4u * i));
    }
    sf_gte_write_data(0u, *SF_DRAFT_PTR(uint32, (uint32)geometry + 16u));
    sf_gte_write_data(1u, *SF_DRAFT_PTR(uint32, (uint32)geometry + 20u));
    sf_gte_execute(0x180001u);
    w_u32(packet + 32u, sf_gte_read_data(14u));
    w_u32(packet + 36u, *SF_DRAFT_PTR(uint32, uv + 12u));
    tag = (uint32)ordering_table + ((uint32)depth & 0xFFFCu);
    w_u32(packet, r_u32(tag));
    w_u8(packet + 3u, 9u);
    w_u32(tag, packet);
    w_u8(tag + 3u, 0u);
    w_u32(0x8012C8A0u, packet + 40u);
}

void sub_80077BFC(uint32 matrix)
{
    uint32 rows[3][3], translation[3], words[5], i;
    FUNCTION_MARKER(0x80077BFCu, "SCUS_942.40");
    for (i = 0u; i < 5u; ++i)
        xport_gte_write_control(i, r_u32(0x80130CD8u + 4u * i));
    sf_gte_write_data(9u, *SF_DRAFT_PTR(uint32, matrix + 20u));
    sf_gte_write_data(10u, *SF_DRAFT_PTR(uint32, matrix + 24u));
    sf_gte_write_data(11u, *SF_DRAFT_PTR(uint32, matrix + 28u));
    sf_gte_execute(0x49E012u);
    for (i = 0u; i < 3u; ++i)
        translation[i] = sf_gte_read_data(25u + i);
    sf_gte_write_data(0u, (uint32)*SF_DRAFT_PTR(uint16, matrix) | (*SF_DRAFT_PTR(uint32, matrix + 4u) & 0xFFFF0000u));
    sf_gte_write_data(1u, *SF_DRAFT_PTR(uint32, matrix + 12u));
    sf_gte_execute(0x486012u);
    for (i = 0u; i < 3u; ++i)
        rows[0][i] = sf_gte_read_data(9u + i);
    sf_gte_write_data(0u, (uint32)*SF_DRAFT_PTR(uint16, matrix + 2u) | (*SF_DRAFT_PTR(uint32, matrix + 8u) << 16));
    sf_gte_write_data(1u, (uint32)(sint32)*SF_DRAFT_PTR(sint16, matrix + 14u));
    sf_gte_execute(0x486012u);
    for (i = 0u; i < 3u; ++i)
        rows[1][i] = sf_gte_read_data(9u + i);
    sf_gte_write_data(0u, (uint32)*SF_DRAFT_PTR(uint16, matrix + 4u) | (*SF_DRAFT_PTR(uint32, matrix + 8u) & 0xFFFF0000u));
    sf_gte_write_data(1u, *SF_DRAFT_PTR(uint32, matrix + 16u));
    sf_gte_execute(0x486012u);
    for (i = 0u; i < 3u; ++i)
        rows[2][i] = sf_gte_read_data(9u + i);
    words[0] = (rows[0][0] & 0xFFFFu) | (rows[1][0] << 16);
    words[1] = (rows[2][0] & 0xFFFFu) | (rows[0][1] << 16);
    words[2] = (rows[1][1] & 0xFFFFu) | (rows[2][1] << 16);
    words[3] = (rows[0][2] & 0xFFFFu) | (rows[1][2] << 16);
    words[4] = rows[2][2];
    for (i = 0u; i < 5u; ++i)
        xport_gte_write_control(i, words[i]);
    for (i = 0u; i < 3u; ++i)
        xport_gte_write_control(5u + i, translation[i] + r_u32(0x80130CECu + 4u * i));
}

void sub_800D1BE0(uint32 model, sint32 packed_mode, sint32 ordering_table, sint32 descriptor)
{
    uint32 section, polygons, matrix_table, staging, colors, packet, groups, i;
    sint32 mode = packed_mode >> 16;
    uint32 depth_bias = (uint16)packed_mode;
    FUNCTION_MARKER(0x800D1BE0u, "SCUS_942.40");
    w_u32(0x1F8000BCu, 0x1F8000C0u);
    w_u32(0x1F8000B0u, r_u32(0x8011652Cu));
    w_u32(0x1F8000ACu, r_u32(0x80116530u));
    colors = r_u32(0x8011651Cu);
    for (i = 0u; i < 5u; ++i)
        w_u32(0x1F800100u + 4u * i, r_u32(0x8012DB98u + 4u * i));
    for (i = 0u; i < 8u; ++i)
        w_u32(0x1F800120u + 4u * i, r_u32(0x80130CD8u + 4u * i));
    polygons = model + 36u;
    packet = r_u32(0x8012C8A0u);
    section = polygons + 4u * r_u32(model + 8u);
    matrix_table = r_u32((uint32)descriptor + 24u);
    groups = r_u32(model + 4u);
    staging = r_u32(0x800D304Cu);
    do
    {
        uint32 far_color, repeated, vertices, destination, count;
        sub_800D1924(r_u32(matrix_table));
        far_color = r_u32(0x1F8000ACu);
        repeated = (far_color << 16) | far_color;
        xport_gte_write_control(16u, r_u32(colors) | (far_color << 16));
        xport_gte_write_control(17u, r_u32(colors + 4u) | far_color);
        xport_gte_write_control(18u, repeated);
        xport_gte_write_control(19u, r_u32(colors + 8u) | (far_color << 16));
        xport_gte_write_control(20u, repeated);
        colors += 12u;
        vertices = section + 68u;
        destination = staging;
        count = r_u32(section + 8u);
        do
        {
            for (i = 0u; i < 6u; ++i)
                sf_gte_write_data(i, r_u32(vertices + 4u * i));
            sf_gte_execute(0x280030u);
            --count;
            vertices += 24u;
            for (i = 0u; i < 3u; ++i)
            {
                w_u32(destination + 12u * i, sf_gte_read_data(12u + i));
                w_u32(destination + 12u * i + 4u, sf_gte_read_data(17u + i));
            }
            destination += 36u;
        } while (count != 0u);
        count = r_u32(section + 12u);
        sf_gte_write_data(6u, 0x34FFFFFFu);
        sf_gte_write_data(8u, 0u);
        destination = staging;
        do
        {
            uint32 mask_cursor, masked_vertex;
            for (i = 0u; i < 6u; ++i)
                sf_gte_write_data(i, r_u32(vertices + 4u * i));
            sf_gte_execute(0xF80416u);
            mask_cursor = r_u32(0x1F8000BCu);
            masked_vertex = r_u32(mask_cursor);
            if (masked_vertex != 0u)
            {
                for (i = 0u; i < 3u; ++i)
                {
                    if (vertices + 8u * i == masked_vertex)
                    {
                        sf_gte_write_data(20u + i, sf_gte_read_data(20u + i) & 0xFF0000FFu);
                        mask_cursor += 4u;
                        if (i != 2u)
                            masked_vertex = r_u32(mask_cursor);
                        w_u32(0x1F8000BCu, mask_cursor);
                    }
                }
            }
            vertices += 24u;
            for (i = 0u; i < 3u; ++i)
                w_u32(destination + 12u * i + 8u, sf_gte_read_data(20u + i));
            --count;
            destination += 36u;
        } while (count != 0u);
        --groups;
        if (groups != 0u)
        {
            uint32 next_section = r_u32(section);
            matrix_table += 4u;
            staging += 12u * r_u16(section + 52u);
            section += next_section;
        }
    } while (groups != 0u);
    {
        uint32 remaining = r_u32(section + 4u) - 1u;
        uint32 base = r_u32(0x800D304Cu);
        do
        {
            uint32 texture0 = r_u32(polygons), texture1 = r_u32(polygons + 4u);
            uint32 indices0 = r_u32(polygons + 8u), indices1 = r_u32(polygons + 12u);
            uint32 first = base + (indices0 >> 16), second = base + (indices1 & 0xFFFFu), third = base + (indices1 >> 16);
            uint32 depth, tag, color0;
            sint32 area;
            sf_gte_write_data(12u, r_u32(first));
            sf_gte_write_data(13u, r_u32(second));
            sf_gte_write_data(14u, r_u32(third));
            depth = (r_u32(first + 4u) + r_u32(second + 4u) + r_u32(third + 4u)) >> 2;
            sf_gte_execute(0x1400006u);
            if (depth != 0u)
            {
                uint32 screen;
                sint32 x, y;
                if (depth >= 8185u)
                    depth = 8184u;
                tag = (uint32)ordering_table + ((depth - depth_bias) & ~3u);
                area = (sint32)sf_gte_read_data(24u);
                screen = sf_gte_read_data(12u);
                x = (sint16)screen;
                y = (sint32)screen >> 16;
                if (x <= 0)
                    x = -x;
                if (y <= 0)
                    y = -y;
                if (area > 0 && (area >= 65 || (x < 195 && y < 123)))
                {
                    uint32 link = r_u32(tag) & 0xFFFFFFu;
                    color0 = r_u32(first + 8u);
                    if ((color0 >> 24) != 0u)
                    {
                        if ((mode & 16) != 0)
                        {
                            if ((sint32)packet < (sint32)r_u32(0x1F8000B0u))
                            {
                                w_u32(packet, link | 0x04000000u);
                                w_u32(packet + 4u, 0x2200FF48u);
                                for (i = 0u; i < 3u; ++i)
                                    w_u32(packet + 8u + 4u * i, sf_gte_read_data(12u + i));
                                w_u32(tag, packet);
                                w_u8(tag + 3u, 0u);
                                packet += 20u;
                            }
                        }
                        else
                        {
                            uint32 color1 = r_u32(second + 8u), color2 = r_u32(third + 8u);
                            w_u32(packet, link | 0x09000000u);
                            if (mode <= 0)
                                color0 |= 0x02000000u;
                            w_u32(packet + 4u, color0);
                            w_u32(packet + 8u, sf_gte_read_data(12u));
                            w_u32(packet + 12u, texture0);
                            w_u32(packet + 16u, color1);
                            w_u32(packet + 20u, sf_gte_read_data(13u));
                            w_u32(packet + 24u, texture1);
                            w_u32(packet + 28u, color2);
                            w_u32(packet + 32u, sf_gte_read_data(14u));
                            w_u16(packet + 36u, (uint16)indices0);
                            w_u32(tag, packet);
                            w_u8(tag + 3u, 0u);
                            packet += 40u;
                        }
                    }
                }
            }
            polygons += 16u;
        } while (remaining-- != 0u);
    }
    w_u32(0x8012C8A0u, packet);
    for (i = 16u; i <= 20u; ++i)
        xport_gte_write_control(i, 0u);
}

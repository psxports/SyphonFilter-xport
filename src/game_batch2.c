#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);

static sint32 sf_36a1c_scale_units(sint32 scale)
{
    sint32 product = (sint32)((uint32)scale << 2);
    if (product < 0)
        return (sint32)(0u - (uint32)((sint32)(0u - (uint32)product) >> 12));
    return product >> 12;
}

static sint32 sf_36a1c_request_units(sint32 value)
{
    sint32 magnitude = value < 0 ? (sint32)(0u - (uint32)value) : value;
    if (magnitude < 4097)
        return value > 0 ? 1 : value >> 31;
    if (value < 0)
        return (sint32)(0u - (uint32)(magnitude >> 12));
    return value >> 12;
}

static uint32 sf_36a1c_scaled_component(uint32 value, uint32 multiplier)
{
    sint32 product;
    if ((sint32)value <= 0)
        return value;
    product = (sint32)(value * multiplier);
    if (product < 0)
        return 0u - (uint32)((sint32)(0u - (uint32)product) >> 12);
    return (uint32)(product >> 12);
}

static void sf_36a1c_store_vector(uint32 camera, uint32 offset, const uint32 values[4])
{
    w_u32(camera + offset, values[0]);
    w_u32(camera + offset + 4u, values[1]);
    w_u32(camera + offset + 8u, values[2]);
    w_u32(camera + offset + 12u, values[3]);
}

static sint32 sf_36a1c_direction(uint32 object, bool reverse)
{
    sint32 x, z;
    if (reverse)
    {
        z = (sint32)r_u32(object + 244u);
        x = (sint32)r_u32(object + 236u);
        z = (sint32)(0u - (uint32)z);
    }
    else
    {
        x = (sint32)r_u32(object + 236u);
        z = (sint32)r_u32(object + 244u);
    }
    return sub_800EC124(x, z);
}

static sint32 sf_36a1c_motion_scale(uint32 object, sint32 scale, bool retain_scale)
{
    sint32 units, direction, product, first, second;
    bool reverse, constrained = true;
    if (r_u32(object + 356u))
    {
        units = sf_36a1c_scale_units(scale);
        direction = sf_36a1c_direction(object, false);
        if (direction < 0)
            direction = (sint32)(0u - (uint32)sf_36a1c_direction(object, false));
        else
            direction = sf_36a1c_direction(object, false);
        if (direction >= 1025)
            return (sint32)((uint32)(units / 4) << 12);
        direction = sf_36a1c_direction(object, false);
        if (direction < 0)
            direction = (sint32)(0u - (uint32)sf_36a1c_direction(object, false));
        else
            direction = sf_36a1c_direction(object, false);
        product = (sint32)((uint32)units * (uint32)direction);
        return (sint32)((uint32)(product / 4096) << 12);
    }
    if (retain_scale)
        return scale;
    first = (sint32)r_u32(object + 256u);
    if (first != 1)
    {
        second = (sint32)r_u32(object + 260u);
        constrained = second == 1 || first == 0 || second == 0;
    }
    reverse = r_u32(object + 348u) >= 2u;
    if (constrained)
    {
        direction = sf_36a1c_direction(object, reverse);
        if (reverse ? (sint32)(0u - (uint32)direction) >= 0 : direction < 0)
            direction = (sint32)(0u - (uint32)sf_36a1c_direction(object, reverse));
        else
            direction = sf_36a1c_direction(object, reverse);
        if ((sint32)((uint32)direction - 284u) <= 0)
            return 0;
        units = sf_36a1c_scale_units(scale);
        direction = sf_36a1c_direction(object, reverse);
        if (reverse ? (sint32)(0u - (uint32)direction) >= 0 : direction < 0)
            direction = (sint32)(0u - (uint32)sf_36a1c_direction(object, reverse));
        else
            direction = sf_36a1c_direction(object, reverse);
        direction = (sint32)((uint32)direction - 284u);
        product = (sint32)((uint32)units * (uint32)direction);
        return (sint32)((uint32)(product / 2960) << 12);
    }
    units = sf_36a1c_scale_units(scale);
    direction = sf_36a1c_direction(object, reverse);
    if (reverse ? (sint32)(0u - (uint32)direction) < 0 : direction >= 0)
        direction = sf_36a1c_direction(object, reverse);
    else
        direction = (sint32)(0u - (uint32)sf_36a1c_direction(object, reverse));
    product = (sint32)((uint32)units * (uint32)direction);
    return (sint32)((uint32)(product / 4096) << 12);
}

sint32 sub_80036A1C(sint32 a1)
{
    uint32 entry_index, entry_table, entry_literal[4], entry_camera, counter_word, mode_word;
    FUNCTION_MARKER(0x80036A1Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint32 v2;
    int v4;
    int v5;
    uint8 v6;
    uint8 v7;
    bool v8;
    int v9;
    int v10;
    int v11;
    unsigned int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    uint32 v18;
    int v19;
    int v20;
    int v21;
    uint32 v22;
    int v23;
    int v24;
    int v25;
    int v26;
    int *v27;
    int v28;
    int v29;
    int v30;
    int v31;
    uint32 v32;
    int v33;
    int v34;
    int v35;
    uint32 v36;
    int v37;
    uint32 v38;
    int v39;
    int v40;
    int v41;
    int v42;
    uint32 v43;
    int v44;
    int v45;
    int v46;
    bool v47; // dc
    int v60;
    int v61;
    int v62;
    int v63;
    int v64;
    int v65;
    int v66;
    uint32 v67;
    int v68;
    int v69;
    int v70;
    int v71;
    int v72;
    int v73;
    int v74;
    int v75;
    int v76;
    int v77;
    int v78;
    int v79;
    int v80;
    int v81;
    int v82;
    int v83;
    int v84;
    int v85;
    int v86;
    int v87;
    int v88;
    int v128;
    int v130;

    int v132;
    int v133;
    sint32 basis_vector[4];

    int v138;
    int v139;
    int v140[4];
    sint32 motion_vector[4];

    int v145;
    int v146;
    int v147;
    int v148;
    int v149;
    int v150;
    int v151;
    int v152;
    int v153;
    int v154;
    entry_index = r_u32(0x801169D4u);
    entry_table = r_u32(0x80115CCCu);
    v2 = r_u32(entry_table + 76u * entry_index + 52u);
    entry_literal[0] = r_u32(0x80011450u);
    entry_literal[1] = r_u32(0x80011454u);
    entry_literal[2] = r_u32(0x80011458u);
    entry_literal[3] = r_u32(0x8001145Cu);
    v132 = (sint32)entry_literal[3];
    v4 = (sint32)r_u32(r_u32(r_u32((uint32)v2 + 12u) + 408u) + 60u);
    if (v4 == 5 || (v5 = 0, (uint32)v4 - 8u < 2u))
        v5 = 1;
    v6 = 0;
    if (!v5)
        goto LABEL_7;
    v7 = 0;
    if (((r_u32(r_u32((uint32)v2 + 16u)) >> 1) & 1u) != 0u)
    {
        v6 = 1;
    LABEL_7:
        v7 = 0;
    }
    if ((uint8)sub_8001C960(6) || (uint8)sub_8001C960(7) || (uint8)sub_8001C960(8) || (uint8)sub_8001C960(9))
        v7 = 1;
    v8 = (uint8)sub_8001C960(0) != 0u;
    if (r_u32(0x80115E80u) - 2u >= 2u)
    {
        w_u32((uint32)a1 + 372u, 0u);
        goto LABEL_34;
    }
    sub_800D84E8(SF_DRAFT_PTR(uint32, sf_draft_guest_address(&v133)), 0);
    v9 = (sint32)r_u32((uint32)a1 + 32u);
    v10 = (sint32)((uint32)v133 + 4u);
    v11 = (sint32)(((uint32)v133 + 4u) & 3u);
    v12 = (uint32)v133 + 4u;
    if (v11)
    {
        v9 = (sint32)((uint32)v9 + 8u * (uint32)v11);
        v12 = v10 & 0xFFFFFFFC;
    }
    if ((r_u32(4u * (uint32)(v9 >> 5) + v12) & (1u << ((uint32)v9 & 31u))) != 0u)
    {
        v13 = (sint32)r_u32((uint32)a1 + 372u);
        v14 = (sint32)((uint32)v13 - 45u);
        if (v13 <= 0)
        {
            if (v14 < -45)
                v14 = -45;
            w_u32((uint32)a1 + 372u, (uint32)v14);
            goto LABEL_29;
        }
    }
    else
    {
        v15 = (sint32)r_u32((uint32)a1 + 48u);
        if (v11)
        {
            v15 = (sint32)((uint32)v15 + 8u * (uint32)v11);
            v10 &= 0xFFFFFFFC;
        }
        if ((r_u32(4u * (uint32)(v15 >> 5) + (uint32)v10) & (1u << ((uint32)v15 & 31u))) != 0u)
        {
            v16 = (sint32)r_u32((uint32)a1 + 372u);
            if (v16 >= 0)
            {
                v17 = 45;
                if ((sint32)((uint32)v16 + 45u) < 46)
                    v17 = (sint32)((uint32)v16 + 45u);
                w_u32((uint32)a1 + 372u, (uint32)v17);
                goto LABEL_29;
            }
        }
    }
    w_u32((uint32)a1 + 372u, 0u);
LABEL_29:
    entry_camera = (uint32)sub_8002FC18();
    counter_word = r_u32((uint32)a1 + 372u);
    w_u32(entry_camera + 3356u, counter_word);
    entry_camera = (uint32)sub_8002FC18();
    w_u8(entry_camera + 3392u, 1u);
    v18 = (uint32)sub_8002FC18();
    sub_80018994((sint32)v18, 3, 8, 1);
    sub_800189FC(r_u32(0x80115D84u), 0, 0, 4);
    entry_camera = r_u32(0x80115D84u);
    basis_vector[0] = (sint32)r_u32(entry_camera + 3356u);
    v19 = (sint32)r_u32(entry_camera + 3360u);
    v20 = (sint32)r_u32(entry_camera + 3364u);
    v21 = (sint32)r_u32(entry_camera + 3368u);
    basis_vector[1] = v19;
    basis_vector[2] = v20;
    basis_vector[3] = v21;
    v22 = (uint32)sub_8002FC18();
    if (r_u32(v22 + 3028u))
    {
        v138 = (sint32)r_u32(v22 + 3036u);
        v23 = (sint32)r_u32(v22 + 3040u);
        v24 = (sint32)r_u32(v22 + 3044u);
        v25 = (sint32)r_u32(v22 + 3048u);
        v139 = v23;
        v140[0] = v24;
        v140[1] = v25;
    }
    else
    {
        v138 = (sint32)r_u32(v22 + 3036u);
    }
    sub_80044968(basis_vector[0], basis_vector[1], v138);
LABEL_34:
    if ((uint8)sub_8001C960(6) || (uint8)sub_8001C960(7) || (uint8)sub_8001C960(8))
    {
        basis_vector[0] = (sint32)r_u32(0x80011450u);
        basis_vector[1] = (sint32)r_u32(0x80011454u);
        basis_vector[2] = (sint32)r_u32(0x80011458u);
        basis_vector[3] = (sint32)r_u32(0x8001145Cu);
        v26 = (sint32)r_u32((uint32)a1 + 376u);
        if (v26 < 0)
            v26 = (sint32)(0u - (uint32)v26);
        v27 = 0;
        if ((unsigned int)v26 >= 0x14)
        {
            sub_8003A2A8(v2, sf_draft_guest_address(v140));
            entry_camera = r_u32(0x80115D84u);
            motion_vector[0] = (sint32)r_u32(r_u32(r_u32(entry_camera)) + 20u);
            motion_vector[1] = (sint32)r_u32(r_u32(r_u32(entry_camera)) + 24u);
            v27 = v140;
            v28 = (sint32)r_u32(r_u32(r_u32(entry_camera)) + 28u);
            motion_vector[1] = (sint32)(0u - (uint32)motion_vector[1]);
            v140[0] = motion_vector[0];
            motion_vector[2] = v28;
            v140[2] = v28;
        }
        sub_800628C8(sf_draft_guest_address(v27));
        v29 = (sint32)r_u32((uint32)a1 + 24u);
        if (v29 == 1)
        {
            basis_vector[0] = 128;
            v30 = (sint32)r_u32((uint32)a1 + 376u);
            if (v30 > 0)
            {
                if (v30 < 20)
                    w_u32((uint32)a1 + 376u, (uint32)v30 + 1u);
            }
            else
            {
                w_u32((uint32)a1 + 376u, 1u);
            }
        }
        else if (v29 == 2)
        {
            basis_vector[0] = -128;
            v31 = (sint32)r_u32((uint32)a1 + 376u);
            if (v31 < 0)
            {
                if (v31 >= -19)
                    w_u32((uint32)a1 + 376u, (uint32)v31 - 1u);
            }
            else
            {
                w_u32((uint32)a1 + 376u, 0xFFFFFFFFu);
            }
        }
        else
        {
            basis_vector[0] = 0;
            w_u32((uint32)a1 + 376u, 0u);
        }
        v32 = r_u32(0x80115D84u);
        v33 = basis_vector[1];
        v34 = basis_vector[2];
        v35 = basis_vector[3];
        w_u32(v32 + 3356u, (uint32)basis_vector[0]);
        w_u32(v32 + 3360u, (uint32)v33);
        w_u32(v32 + 3364u, (uint32)v34);
        w_u32(v32 + 3368u, (uint32)v35);
        v36 = r_u32(0x80115D84u);
        w_u32(v36 + 3376u, 1u);
        w_u32(v36 + 3380u, 0u);
        w_u32(v36 + 3384u, 0u);
        w_u32(v36 + 3388u, (uint32)v132);
        w_u8(r_u32(0x80115D84u) + 3392u, 0u);
        sub_80018994(r_u32(0x80115D84u), 1, 1, 1);
    }
    else
    {
        w_u32((uint32)a1 + 376u, 0u);
        sub_800628C8(0);
    }
    mode_word = r_u32(0x80115E80u);
    if (mode_word - 2u < 2u || mode_word == 4u)
    {
        v37 = 184320;
        v145 = 184320;
    LABEL_126:
        v42 = v7;
        goto LABEL_127;
    }
    if (v7)
    {
        sub_8001C960(9);
    LABEL_68:
        v37 = 311296;
        goto LABEL_69;
    }
    if (!v8)
        goto LABEL_68;
    v38 = r_u32((uint32)v2 + 16u);
    v39 = r_u8(v38 + 8u);
    v37 = 311296;
    if (v39 != 10)
    {
        v40 = (sint32)r_u32(v38);
        if ((v40 & 0x8000) == 0 && v39 != 12 && v39 != 7 && (v40 & 0x2000) == 0 && v39 != 4 && (v40 & 0x1000) == 0)
            v37 = 466944;
    }
LABEL_69:
    v41 = (sint32)r_u32((uint32)a1 + 236u);
    v145 = v37;
    if (!v41 && !r_u32((uint32)a1 + 240u))
    {
        v42 = v7;
        if (!r_u32((uint32)a1 + 244u))
            goto LABEL_127;
    }
    v43 = r_u32((uint32)v2 + 16u);
    v44 = r_u8(v43 + 8u);
    if (v44 != 10)
    {
        v45 = (sint32)r_u32(v43);
        if ((v45 & 0x8000) == 0 && v44 != 12 && v44 != 7 && (v45 & 0x2000) == 0)
        {
            if (v44 == 4 || (v45 & 0x1000) != 0)
            {
                v145 = 0;
                goto LABEL_126;
            }
            v145 = sf_36a1c_motion_scale((uint32)a1, v145, v6 != 0);
            goto LABEL_126;
        }
    }
    v46 = (sint32)r_u32((uint32)a1 + 244u);
    if (v46 < 0)
        v46 = (sint32)(0u - (uint32)v46);
    v47 = v46 < 2634;
    v42 = v7;
    if (!v47)
    {
        v145 = 0;
        goto LABEL_126;
    }
LABEL_127:
    if (v42)
        v60 = (sint32)r_u32((uint32)a1 + 192u);
    else
        v60 = (sint32)r_u32((uint32)a1 + 252u);
    v145 = sub_800C6D4C(v145, v60);
    v61 = (sint32)r_u32((uint32)a1 + 256u);
    v62 = v6;
    if (v61 != 1)
    {
        v63 = (sint32)r_u32((uint32)a1 + 260u);
        if (v63 != 1)
        {
            if (v61)
            {
                v47 = v63 != 0;
                v64 = v7;
                if (v47)
                {
                LABEL_144:
                    if (v64)
                    {
                        mode_word = r_u32(0x80115E80u);
                        if (mode_word - 2u < 2u || mode_word == 4u)
                        {
                            v147 = 294;
                            v148 = 4096;
                            v67 = (uint32)sub_8002FC18();
                            if (r_u32(v67 + 3028u))
                            {
                                v146 = (sint32)r_u32(v67 + 3036u);
                                v68 = (sint32)r_u32(v67 + 3040u);
                                v69 = (sint32)r_u32(v67 + 3044u);
                                v70 = (sint32)r_u32(v67 + 3048u);
                                v147 = v68;
                                v148 = v69;
                                v149 = v70;
                            }
                            else
                            {
                                v146 = (sint32)r_u32(v67 + 3036u);
                            }
                            v147 = (sint32)((uint32)v147 * (uint32)v146) / 827;
                        LABEL_168:
                            if (v147 >= 4097)
                                v147 = 4096;
                            if (v148 >= 4097)
                                v148 = 4096;
                            v147 = sub_800C6D4C(v147, v145);
                            v148 = sub_800C6D4C(v148, v37);
                            if (v145 && v147 < 61)
                                v147 = 61;
                            if (v37 && v148 < 61)
                                v148 = 61;
                            motion_vector[0] = (sint32)r_u32((uint32)a1 + 204u);
                            v76 = (sint32)r_u32((uint32)a1 + 208u);
                            v77 = (sint32)r_u32((uint32)a1 + 212u);
                            v78 = (sint32)r_u32((uint32)a1 + 216u);
                            motion_vector[1] = v76;
                            motion_vector[2] = v77;
                            motion_vector[3] = v78;
                            basis_vector[0] = (sint32)r_u32((uint32)a1 + 176u);
                            v79 = (sint32)r_u32((uint32)a1 + 180u);
                            v80 = (sint32)r_u32((uint32)a1 + 184u);
                            v81 = (sint32)r_u32((uint32)a1 + 188u);
                            basis_vector[1] = v79;
                            basis_vector[2] = v80;
                            basis_vector[3] = v81;
                            if (!basis_vector[0] && !basis_vector[1] && !basis_vector[2] && (motion_vector[0] || motion_vector[1] || motion_vector[2]))
                            {
                                sub_800C720C(sf_draft_guest_address(&motion_vector[0]), sf_draft_guest_address(&basis_vector[0]));
                                basis_vector[0] = (sint32)(0u - (uint32)basis_vector[0]);
                                basis_vector[2] = (sint32)(0u - (uint32)basis_vector[2]);
                                basis_vector[1] = (sint32)(0u - (uint32)basis_vector[1]);
                            }
                            v151 = 0;
                            v150 = basis_vector[2];
                            v152 = (sint32)(0u - (uint32)basis_vector[0]);
                            v82 = sub_800C6D4C(motion_vector[0], basis_vector[0]);
                            v83 = sub_800C6D4C(motion_vector[1], basis_vector[1]);
                            v153 = (sint32)((uint32)v82 + (uint32)v83 + (uint32)sub_800C6D4C(motion_vector[2], basis_vector[2]));
                            v84 = sub_800C6D4C(motion_vector[0], v150);
                            v85 = sub_800C6D4C(motion_vector[1], v151);
                            v154 = (sint32)((uint32)v84 + (uint32)v85 + (uint32)sub_800C6D4C(motion_vector[2], v152));
                            if (v145 >= v153)
                            {
                                v86 = v145;
                                if (v153 < 0)
                                {
                                    v87 = (sint32)((uint32)v153 + (uint32)v148);
                                    if ((sint32)((uint32)v153 + (uint32)v148) > 0)
                                        v87 = 0;
                                    v153 = v87;
                                LABEL_194:
                                    if (v154 <= 0)
                                    {
                                        if (v154 >= 0)
                                        {
                                        LABEL_201:
                                            basis_vector[0] = sub_800C6D4C(basis_vector[0], v153);
                                            basis_vector[1] = sub_800C6D4C(basis_vector[1], v153);
                                            basis_vector[2] = sub_800C6D4C(basis_vector[2], v153);
                                            v150 = sub_800C6D4C(v150, v154);
                                            v151 = sub_800C6D4C(v151, v154);
                                            v152 = sub_800C6D4C(v152, v154);
                                            w_u32((uint32)a1 + 204u, (uint32)basis_vector[0] + (uint32)v150);
                                            w_u32((uint32)a1 + 208u, (uint32)basis_vector[1] + (uint32)v151);
                                            w_u32((uint32)a1 + 212u, (uint32)basis_vector[2] + (uint32)v152);
                                            goto LABEL_202;
                                        }
                                        v88 = (sint32)((uint32)v154 + (uint32)v147);
                                        if ((sint32)((uint32)v154 + (uint32)v147) > 0)
                                            v88 = 0;
                                    }
                                    else
                                    {
                                        v88 = (sint32)((uint32)v154 - (uint32)v147);
                                        if ((sint32)((uint32)v154 - (uint32)v147) < 0)
                                            v88 = 0;
                                    }
                                    v154 = v88;
                                    goto LABEL_201;
                                }
                                if ((sint32)((uint32)v153 + (uint32)v147) < v145)
                                    v86 = (sint32)((uint32)v153 + (uint32)v147);
                            }
                            else
                            {
                                v86 = (sint32)((uint32)v153 - (uint32)v148);
                                if (v145 >= (sint32)((uint32)v153 - (uint32)v148))
                                    v86 = v145;
                            }
                            v153 = v86;
                            goto LABEL_194;
                        }
                        if ((uint8)sub_8001C960(9))
                        {
                            v147 = 256;
                            v71 = 3072;
                        LABEL_167:
                            v148 = v71;
                            goto LABEL_168;
                        }
                        if (r_u32(0x80115E80u) != 5u)
                        {
                            v147 = 128;
                            v71 = 614;
                            goto LABEL_167;
                        }
                        v72 = 341;
                    }
                    else
                    {
                        v73 = (sint32)r_u32(r_u32(r_u32((uint32)v2 + 12u) + 408u) + 60u);
                        if (v73 == 5 || (v74 = 0, (uint32)v73 - 8u < 2u))
                            v74 = 1;
                        if (v74 || (v75 = 0, (r_u32(r_u32((uint32)v2 + 16u)) & 2u) != 0))
                            v75 = 1;
                        v47 = v75 == 0;
                        v72 = 273;
                        if (!v47)
                        {
                            v72 = 409;
                            v44 = r_u8(r_u32((uint32)v2 + 16u) + 8u);
                            if ((uint32)v44 - 1u >= 2u)
                            {
                                v72 = 273;
                                if (v44 == 9)
                                    v72 = 409;
                            }
                        }
                    }
                    v147 = v72;
                    v71 = 4096;
                    goto LABEL_167;
                }
            }
        }
        v62 = v6;
    }
    v47 = v62 != 0;
    v64 = v7;
    if (v47)
        goto LABEL_144;
    v64 = v7;
    if (!v8)
        goto LABEL_144;
    v64 = v7;
    if (r_u32((uint32)a1 + 356u))
        goto LABEL_144;
    v65 = (sint32)r_u32((uint32)a1 + 160u);
    v47 = v65 > 0;
    w_u32((uint32)a1 + 212u, 0u);
    if (v47)
    {
        v66 = v145;
    }
    else if (v65 >= 0)
    {
        v66 = 0;
    }
    else
    {
        v66 = (sint32)(0u - (uint32)v145);
    }
    w_u32((uint32)a1 + 204u, (uint32)v66);
LABEL_202:
    v128 = (sint32)r_u32((uint32)a1 + 212u);
    v130 = (sint32)r_u32((uint32)a1 + 204u);
    v128 = sf_36a1c_request_units(v128);
    v130 = sf_36a1c_request_units(v130);
    if (!r_u8((uint32)a1 + 384u))
        v128 = (sint32)(0u - (uint32)v128);
    if (r_u32((uint32)a1 + 348u) == 3u)
        v130 = 2048;
    entry_camera = r_u32(0x80115D84u);
    w_u32(entry_camera + 3356u, (uint32)v128);
    w_u32(entry_camera + 3360u, (uint32)v130);
    w_u32(entry_camera + 3364u, 0u);
    /* Native padding for the three-component relative camera request */
    w_u32(entry_camera + 3368u, 0u);
    entry_camera = r_u32(0x80115D84u);
    w_u32(entry_camera + 3376u, 1u);
    w_u32(entry_camera + 3380u, 1u);
    w_u32(entry_camera + 3384u, 0u);
    w_u32(entry_camera + 3388u, (uint32)v132);
    w_u8(r_u32(0x80115D84u) + 3392u, 1u);
    sub_80018994(r_u32(0x80115D84u), 3, 6, 1);
    if ((uint8)sub_8001C960(0))
    {
        entry_camera = r_u32(0x80115D84u);
        entry_literal[0] = r_u32(0x80011460u);
        entry_literal[1] = r_u32(0x80011464u);
        entry_literal[2] = r_u32(0x80011468u);
        entry_literal[3] = r_u32(0x8001146Cu);
        w_u32(entry_camera + 3356u, entry_literal[0]);
        w_u32(entry_camera + 3360u, entry_literal[1]);
        w_u32(entry_camera + 3364u, entry_literal[2]);
        w_u32(entry_camera + 3368u, entry_literal[3]);
        entry_camera = r_u32(0x80115D84u);
        w_u32(entry_camera + 3376u, 1u);
        w_u32(entry_camera + 3380u, 0u);
        w_u32(entry_camera + 3384u, 0u);
        w_u32(entry_camera + 3388u, (uint32)v132);
        w_u8(r_u32(0x80115D84u) + 3392u, 0u);
        sub_80018994(r_u32(0x80115D84u), 1, 6, 2);
    }
    if ((uint8)sub_8001C960(0))
    {
        uint32 state = r_u32(r_u32(r_u32((uint32)v2 + 12u) + 408u) + 60u);
        if (state == 5u || state - 8u < 2u)
        {
            uint32 literal[4], multiplier[4], scaled[4], mask[4];
            literal[0] = r_u32(0x80011470u);
            literal[1] = r_u32(0x80011474u);
            literal[2] = r_u32(0x80011478u);
            literal[3] = r_u32(0x8001147Cu);
            multiplier[0] = r_u32(0x80011480u);
            multiplier[1] = r_u32(0x80011484u);
            multiplier[2] = r_u32(0x80011488u);
            multiplier[3] = r_u32(0x8001148Cu);
            entry_camera = r_u32(0x80115D84u);
            sf_36a1c_store_vector(entry_camera, 3356u, literal);
            mask[0] = 1u;
            mask[1] = 0u;
            mask[2] = 1u;
            mask[3] = (uint32)v132;
            sf_36a1c_store_vector(r_u32(0x80115D84u), 3376u, mask);
            w_u8(r_u32(0x80115D84u) + 3392u, 0u);
            sub_80018994(r_u32(0x80115D84u), 1, 0, 6);
            scaled[0] = sf_36a1c_scaled_component(literal[0], multiplier[0]);
            scaled[1] = sf_36a1c_scaled_component(literal[1], multiplier[1]);
            scaled[2] = sf_36a1c_scaled_component(literal[2], multiplier[2]);
            scaled[3] = literal[3];
            sf_36a1c_store_vector(r_u32(0x80115D84u), 3356u, scaled);
            sf_36a1c_store_vector(r_u32(0x80115D84u), 3376u, mask);
            w_u8(r_u32(0x80115D84u) + 3392u, 0u);
            sub_80018994(r_u32(0x80115D84u), 1, 3, 6);
            mask[0] = r_u32(0x80011440u);
            mask[1] = r_u32(0x80011444u);
            mask[2] = r_u32(0x80011448u);
            mask[3] = r_u32(0x8001144Cu);
            entry_camera = r_u32(0x80115D84u);
            scaled[0] = literal[0];
            scaled[1] = literal[0];
            scaled[2] = literal[0];
            sf_36a1c_store_vector(entry_camera, 3356u, scaled);
            sf_36a1c_store_vector(r_u32(0x80115D84u), 3376u, mask);
            w_u8(r_u32(0x80115D84u) + 3392u, 0u);
            sub_80018994(r_u32(0x80115D84u), 1, 2, 6);
        }
    }
    return 1;
}

sint32 sub_8004308C(uint8 a1)
{
    FUNCTION_MARKER(0x8004308Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *v1 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
    int v3;
    int *v4;
    int v5;
    int v6;
    int *v7;
    int result;
    int v9;
    _DWORD *v10 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
    int v11;
    int v12;
    int v13;
    int *v14;
    int v16;
    int *v17;
    int v18;
    _DWORD *v19;
    _DWORD *v20;
    int v21;
    int v22;
    sint32 v23;
    _DWORD *v24;
    _DWORD *v25;
    int v26;
    char v27;
    bool v28; // dc
    _DWORD *v29;
    int v30;
    int v32;
    _DWORD *v33;
    int v35;
    _DWORD *v36;
    int v38;
    int v39;
    int v40;
    _DWORD *v41;
    int v42;
    int v43;
    _DWORD *v44;
    int v45;
    uint16 v46;
    uint16 v47;
    int v49;
    _DWORD *v50;
    char v51;
    int v52;
    _DWORD *v53;
    __int16 v54;
    __int16 v55;
    _DWORD *v56;
    uint16 v57;
    int v58;
    int v59;
    _DWORD *v60;
    int v62;
    char v63;
    int v64;
    int v65;
    int v66;
    int v67;
    int v68;
    int v69;
    int v70;
    _DWORD *v71;
    _DWORD *v72;
    int i;
    _DWORD *v74;
    int v75;
    int v76;
    int v77;
    int v78;
    int j;
    int v80;
    int k;
    int v82;
    int v83;
    int v84;
    int v85;
    int v86;
    int v87;
    int v88;
    if ((*SF_DRAFT_PTR(uint32, 0x8010C374u)) >= 0)
    {
    LABEL_5:
        v5 = a1;
        if (!v1[179])
        {
            v6 = 0;
            if ((*SF_DRAFT_PTR(uint32, 0x8010C374u)) != -1)
            {
                (*SF_DRAFT_PTR(uint32, 0x8010C374u)) = -1;
                v7 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011C138u)));
                do
                {
                    if (*v7)
                        sub_800C7BF8(v1[844], sf_draft_guest_address(v7));
                    ++v6;
                    v7 += 6;
                } while (v6 < 36);
                return a1;
            }
            return a1;
        }
        v9 = (*SF_DRAFT_PTR(uint32, 0x8010C374u));
        if (!(uint8)sub_80040B50(a1, sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8010C374u)))))
            return 0;
        v11 = 30 * v9 / 12;
        v12 = 30 * (*SF_DRAFT_PTR(uint32, 0x8010C374u)) / 12;
        v85 = 26 * v9 / 12;
        v86 = 26 * (*SF_DRAFT_PTR(uint32, 0x8010C374u)) / 12;
        v87 = 2 * v9;
        v88 = 2 * (*SF_DRAFT_PTR(uint32, 0x8010C374u));
        if ((*SF_DRAFT_PTR(uint32, 0x8010C374u)) > 0)
        {
            if ((*SF_DRAFT_PTR(uint32, 0x8010C374u)) >= 12 && (!v5 || (*SF_DRAFT_PTR(uint32, 0x8010C374u)) >= 13))
                return v5 == 0;
        }
        else
        {
            if (v5)
            {
                sub_800C8148((*SF_DRAFT_PTR(uint32, 0x8011C138u)), 15753456, 67109888, 67109888);
                v13 = 1;
                v14 = &(*SF_DRAFT_PTR(uint32, 0x8011C150u));
                do
                {
                    sub_800C8148(sf_draft_guest_address(v14), 11822170, 67109888, 67109888);
                    ++v13;
                    v14 += 6;
                } while (v13 < 36);
                result = a1;
                if (SF_DRAFT_PTR(uint32, 0x8011C138u)[0])
                    return result;
                sub_800C7BB0(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376)), (*SF_DRAFT_PTR(uint32, 0x8011C138u)));
                return a1;
            }
            if ((*SF_DRAFT_PTR(uint32, 0x8010C374u)) < 0)
                return 0;
        }
        v16 = a1;
        if (SF_DRAFT_PTR(uint32, 0x8011BB44u)[0])
        {
            sub_8003D100();
            v16 = a1;
        }
        if (v16)
        {
            v17 = &SF_DRAFT_PTR(uint32, 0x80011BB0u)[2 * v11];
            v18 = v10[179];
            v19 = SF_DRAFT_PTR(_DWORD, (v18 + 36 * v11));
            v20 = SF_DRAFT_PTR(_DWORD, (v10[180] + 48 * v11));
            if (!*SF_DRAFT_PTR(_DWORD, (v18 + 1080)))
            {
                sub_800C7BB0(v10[844], v18 + 1080);
                v21 = v10[179];
                *SF_DRAFT_PTR(_DWORD, (v21 + 1092)) = 682910800;
                *SF_DRAFT_PTR(_BYTE, (v21 + 1095)) |= 2u;
            }
            v22 = 30 * v9 / 12;
            v23 = v12 < 30;
            if (v11 < v12)
            {
                v24 = v17 + 3;
                v25 = v19 + 1;
                do
                {
                    v26 = *(v24 - 1);
                    sub_800C7CEC(sf_draft_guest_address(v19), 10503740, *v17, *(v24 - 2), v26, *v24);
                    v27 = *((_BYTE *)v25 + 11);
                    *v25 = 6;
                    *((_BYTE *)v25 + 11) = v27 | 2;
                    if (!*v19)
                        sub_800C7BB0(v10[844], sf_draft_guest_address(v19));
                    v25 += 9;
                    v19 += 9;
                    if (v22 != 14)
                    {
                        sub_800C8148(sf_draft_guest_address(v20), 11822170, *v17, v26);
                        v28 = *v20 != 0;
                        v20[1] = 5;
                        if (!v28)
                            sub_800C7BB0(v10[844], sf_draft_guest_address(v20));
                    }
                    v29 = v20 + 6;
                    if (v22 != 16)
                    {
                        sub_800C8148(sf_draft_guest_address(v29), 11822170, *(v24 - 2), *v24);
                        v28 = *v29 != 0;
                        v29[1] = 5;
                        if (!v28)
                            sub_800C7BB0(v10[844], sf_draft_guest_address(v29));
                    }
                    v20 = v29 + 6;
                    v24 += 2;
                    ++v22;
                    v17 += 2;
                } while (v22 < v12);
                v23 = v12 < 30;
            }
            if (v23)
            {
                v30 = v17[3];
                sub_800C7CEC(sf_draft_guest_address(v19), 16757880, *v17, v17[1], v17[2], v30);
                v32 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376));
                v19[1] = 6;
                sub_800C7BB0(v32, sf_draft_guest_address(v19));
                sub_800C8148(sf_draft_guest_address(v20), 16757880, v17[1], v30);
                v33 = v20;
                v35 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376));
                v20[1] = 5;
                v36 = v20 + 6;
                sub_800C7BB0(v35, sf_draft_guest_address(v33));
                sub_800C8148(sf_draft_guest_address(v36), 16757880, v17[1], v30);
                v38 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376));
                v36[1] = 5;
                sub_800C7BB0(v38, sf_draft_guest_address(v36));
            }
            switch (v12)
            {
                case 6:
                case 7:
                    goto LABEL_55;
                case 8:
                case 9:
                    goto LABEL_52;
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                    goto LABEL_49;
                case 26:
                case 27:
                case 28:
                case 29:
                case 30:
                    if (!(*SF_DRAFT_PTR(uint32, 0x8011C150u)))
                        sub_800C7BB0(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C150u))));
                    (*SF_DRAFT_PTR(uint32, 0x8011C160u)) = 262259;
                    (*SF_DRAFT_PTR(uint32, 0x8011C164u)) = (uint16)(-56 * (v12 - 26) / 4 + 115) | 0x40000;
                LABEL_49:
                    if (!(*SF_DRAFT_PTR(uint32, 0x8011C180u)))
                        sub_800C7BB0(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C180u))));
                    (*SF_DRAFT_PTR(uint32, 0x8011C190u)) = 6488010;
                    (*SF_DRAFT_PTR(uint32, 0x8011C194u)) = (uint16)((__int16)(-115 * (v12 - 10)) / 20 - 54) | 0x620000;
                LABEL_52:
                    if (!SF_DRAFT_PTR(uint32, 0x8011C198u)[0])
                        sub_800C7BB0(v10[844], (*SF_DRAFT_PTR(uint32, 0x8011C198u)));
                    (*SF_DRAFT_PTR(uint32, 0x8011C1A8u)) = 5963607;
                    (*SF_DRAFT_PTR(uint32, 0x8011C1ACu)) = ((8 * (v12 - 8) / 22 + 90) << 16) | 0xFF57;
                LABEL_55:
                    if (!(*SF_DRAFT_PTR(uint32, 0x8011C1B0u)))
                        sub_800C7BB0(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C1B0u))));
                    (*SF_DRAFT_PTR(uint32, 0x8011C1C0u)) = 3407703;
                    (*SF_DRAFT_PTR(uint32, 0x8011C1C4u)) = ((-81 * (v12 - 6) / 24 + 51) << 16) | 0xFF57;
                    break;
                default:
                    break;
            }
            if (!(*SF_DRAFT_PTR(uint32, 0x8011C168u)))
                sub_800C7BB0(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C168u))));
            v39 = v85;
            v40 = v10[180];
            (*SF_DRAFT_PTR(uint32, 0x8011C178u)) = -6160349;
            v41 = SF_DRAFT_PTR(_DWORD, (v40 + 24 * v85 + 1440));
            (*SF_DRAFT_PTR(uint32, 0x8011C17Cu)) = (uint16)((__int16)(78 * v12) / 30 + 35) | 0xFFA20000;
            if (v86 >= v85)
            {
                v42 = 10 * v85 - 180;
                v43 = 10 * v85;
                v44 = v41 + 1;
                do
                {
                    v45 = v43 - 89;
                    if (v39 >= 18)
                        v45 = -10 - v42;
                    if (v39)
                    {
                        if (v39 >= 18)
                        {
                            v46 = 156;
                            if (v39 == 18)
                                v46 = 154;
                        }
                        else
                        {
                            v46 = 34;
                        }
                    }
                    else
                    {
                        v46 = 31;
                    }
                    v47 = -156;
                    if (v39 >= 7)
                    {
                        if (v39 == 7)
                        {
                            v47 = -151;
                        }
                        else
                        {
                            v47 = -147;
                            if (v39 >= 18)
                            {
                                if (v39 == 18)
                                {
                                    v47 = 43;
                                }
                                else
                                {
                                    v47 = 43;
                                    if (v39 < 25)
                                        v47 = 42;
                                }
                            }
                        }
                    }
                    if (v39 == v86)
                    {
                        if (v86 < 26)
                        {
                            sub_800C8148(sf_draft_guest_address(v41), 15774840, v47 | (v45 << 16), v46 | (v45 << 16));
                            v49 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376));
                            v50 = v41;
                            *v44 = 5;
                        LABEL_83:
                            sub_800C7BB0(v49, sf_draft_guest_address(v50));
                        }
                    }
                    else
                    {
                        sub_800C8148(sf_draft_guest_address(v41), 9190470, v47 | (v45 << 16), v46 | (v45 << 16));
                        v51 = *((_BYTE *)v44 + 11);
                        *v44 = 5;
                        *((_BYTE *)v44 + 11) = v51 | 2;
                        v50 = v41;
                        if (!*v41)
                        {
                            v49 = v10[844];
                            goto LABEL_83;
                        }
                    }
                    v44 += 6;
                    v41 += 6;
                    v42 += 10;
                    ++v39;
                    v43 += 10;
                } while (v86 >= v39);
            }
            v52 = v85;
            v53 = SF_DRAFT_PTR(_DWORD, (v10[180] + 24 * v85 + 2064));
            if (v86 >= v85)
            {
                v54 = 12 * v85 - 192;
                v55 = 12 * v85;
                v56 = v53 + 1;
                do
                {
                    v57 = v55 - 151;
                    if (v52 >= 16)
                        v57 = v54 + 44;
                    if (v52)
                    {
                        v58 = 88;
                        if (v52 >= 15)
                        {
                            v58 = 86;
                            if (v52 != 15)
                            {
                                if (v52 == 16)
                                {
                                    v58 = -10;
                                }
                                else
                                {
                                    v58 = -9;
                                    if (v52 < 25)
                                        v58 = -5;
                                }
                            }
                        }
                    }
                    else
                    {
                        v58 = -20;
                    }
                    if (v52)
                    {
                        v59 = -95;
                        if (v52 >= 15)
                        {
                            v59 = -91;
                            if (v52 != 15)
                            {
                                if (v52 == 16)
                                {
                                    v59 = -82;
                                }
                                else
                                {
                                    v59 = -84;
                                    if (v52 < 25)
                                        v59 = -85;
                                }
                            }
                        }
                    }
                    else
                    {
                        v59 = -94;
                    }
                    if (v52 == v86)
                    {
                        if (v86 < 26)
                        {
                            sub_800C8148(sf_draft_guest_address(v53), 15774840, v57 | (v58 << 16), v57 | (v59 << 16));
                            v60 = v53;
                            v62 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376));
                            *v56 = 5;
                        LABEL_110:
                            sub_800C7BB0(v62, sf_draft_guest_address(v60));
                        }
                    }
                    else
                    {
                        sub_800C8148(sf_draft_guest_address(v53), 9190470, v57 | (v58 << 16), v57 | (v59 << 16));
                        v63 = *((_BYTE *)v56 + 11);
                        *v56 = 5;
                        *((_BYTE *)v56 + 11) = v63 | 2;
                        v60 = v53;
                        if (!*v53)
                        {
                            v62 = v10[844];
                            goto LABEL_110;
                        }
                    }
                    v56 += 6;
                    v53 += 6;
                    v54 += 12;
                    ++v52;
                    v55 += 12;
                } while (v86 >= v52);
            }
            v64 = v87;
            v65 = v10[180] + 2688;
            if (v87 < v88)
            {
                v66 = 24 * v87 + v65;
                v67 = v66;
                do
                {
                    v66 += 24;
                    sub_800C7BB0(v10[844], v67);
                    ++v64;
                    v67 = v66;
                } while (v64 < v88);
            }
            if (v64 < 12)
            {
                v68 = 24 * v64 + v65;
                (*SF_DRAFT_PTR(uint32, 0x8011C148u)) = *SF_DRAFT_PTR(_DWORD, (v68 + 16));
                (*SF_DRAFT_PTR(uint32, 0x8011C14Cu)) = *SF_DRAFT_PTR(_DWORD, (v68 + 20));
                return 1;
            }
            v69 = v10[844];
        }
        else
        {
            v70 = v10[179];
            v71 = SF_DRAFT_PTR(_DWORD, (v70 + 36 * v12));
            v72 = SF_DRAFT_PTR(_DWORD, (v10[180] + 48 * v12));
            if (*SF_DRAFT_PTR(_DWORD, (v70 + 1080)))
                sub_800C7BF8(v10[844], v70 + 1080);
            for (i = v12; i < v11; v71 += 9)
            {
                if (*v71)
                    sub_800C7BF8(v10[844], sf_draft_guest_address(v71));
                if (*v72)
                    sub_800C7BF8(v10[844], sf_draft_guest_address(v72));
                v74 = v72 + 6;
                if (*v74)
                    sub_800C7BF8(v10[844], sf_draft_guest_address(v74));
                v72 = v74 + 6;
                ++i;
            }
            switch (v12)
            {
                case 6:
                case 7:
                    goto LABEL_136;
                case 8:
                case 9:
                    goto LABEL_135;
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                    if ((*SF_DRAFT_PTR(uint32, 0x8011C150u)))
                        sub_800C7BF8(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C150u))));
                    goto LABEL_134;
                case 26:
                case 27:
                case 28:
                case 29:
                case 30:
                    v75 = -56 * (v12 - 26);
                    v76 = v75 >> 2;
                    if (v75 < 0)
                        v76 = (v75 + 3) >> 2;
                    (*SF_DRAFT_PTR(uint32, 0x8011C160u)) = 262259;
                    (*SF_DRAFT_PTR(uint32, 0x8011C164u)) = (uint16)(v76 + 115) | 0x40000;
                LABEL_134:
                    (*SF_DRAFT_PTR(uint32, 0x8011C190u)) = 6488010;
                    (*SF_DRAFT_PTR(uint32, 0x8011C194u)) = (uint16)(-115 * (v12 - 10) / 20 - 54) | 0x620000;
                LABEL_135:
                    (*SF_DRAFT_PTR(uint32, 0x8011C1A8u)) = 5963607;
                    (*SF_DRAFT_PTR(uint32, 0x8011C1ACu)) = ((8 * (v12 - 8) / 22 + 90) << 16) | 0xFF57;
                LABEL_136:
                    (*SF_DRAFT_PTR(uint32, 0x8011C1C0u)) = 3407703;
                    (*SF_DRAFT_PTR(uint32, 0x8011C1C4u)) = ((-81 * (v12 - 6) / 24 + 51) << 16) | 0xFF57;
                    break;
                default:
                    if ((*SF_DRAFT_PTR(uint32, 0x8011C180u)))
                        sub_800C7BF8(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C180u))));
                    if (SF_DRAFT_PTR(uint32, 0x8011C198u)[0])
                        sub_800C7BF8(v10[844], (*SF_DRAFT_PTR(uint32, 0x8011C198u)));
                    if ((*SF_DRAFT_PTR(uint32, 0x8011C1B0u)))
                        sub_800C7BF8(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C1B0u))));
                    break;
            }
            v77 = 78 * v12 / 30;
            if (v77 > 0)
            {
                (*SF_DRAFT_PTR(uint32, 0x8011C178u)) = -6160349;
                (*SF_DRAFT_PTR(uint32, 0x8011C17Cu)) = (uint16)(v77 + 35) | 0xFFA20000;
            }
            else if ((*SF_DRAFT_PTR(uint32, 0x8011C168u)))
            {
                sub_800C7BF8(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C168u))));
            }
            v78 = v86;
            for (j = v10[180] + 24 * v86 + 1440; v78 < v85; j += 24)
            {
                ++v78;
                sub_800C7BF8(v10[844], j);
            }
            v80 = v86;
            for (k = v10[180] + 24 * v86 + 2064; v80 < v85; k += 24)
            {
                ++v80;
                sub_800C7BF8(v10[844], k);
            }
            v82 = v88;
            if (v88 < v87)
            {
                v83 = 24 * v88 + v10[180] + 2688;
                v84 = v83;
                do
                {
                    v83 += 24;
                    sub_800C7BF8(v10[844], v84);
                    ++v82;
                    v84 = v83;
                } while (v82 < v87);
            }
            result = 1;
            if (!SF_DRAFT_PTR(uint32, 0x8011C138u)[0])
                return result;
            v69 = v10[844];
        }
        sub_800C7BF8(v69, (*SF_DRAFT_PTR(uint32, 0x8011C138u)));
        return 1;
    }
    v3 = 0;
    v4 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011C138u)));
    while (1)
    {
        ++v3;
        if (*v4)
            return v1[181] == 4;
        v4 += 6;
        if (v3 >= 6)
            goto LABEL_5;
    }
}

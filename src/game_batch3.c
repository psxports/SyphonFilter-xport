#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);
#include "game_draft.h"
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_8005FBCC();

/* TODO Integrate guest pointer and missing SDK adapters before use */

static void sf_63b5c_copy4(uint32 destination, uint32 source)
{
    uint32 x = r_u32(source);
    uint32 y = r_u32(source + 4u);
    uint32 z = r_u32(source + 8u);
    uint32 fourth = r_u32(source + 12u);
    w_u32(destination, x);
    w_u32(destination + 4u, y);
    w_u32(destination + 8u, z);
    w_u32(destination + 12u, fourth);
}

// FUNCTION_MARKER 0x80063B5Cu 0x80063b5c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80063B5C(void)
{
    uint32 entry_state, entry_index, entry_table, status_root, status_word, list_count;
    uint32 coordinate_root, target_root, camera_root;
    sint32 selected_identity;
    uint32 result_request[13], auxiliary_result[5];
    sint32 relative_vector[4], position_vector[4], camera_vector[4];
    sint32 alternate_origin[4], alternate_endpoint[4];
    uint16 matrix_values[9];
    uint32 matrix_index;
    bool linked_object;
    FUNCTION_MARKER(0x80063B5Cu, "SCUS_942.40");
    int v1;
    int result;
    __int16 v3;
    int v4;
    int v5;
    uint32 v6;
    int v7;
    int v8;
    int v9;
    bool v10;
    int v11;
    uint32 v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18 = SF_DRAFT_GP;
    int v19;
    int v20;
    int v21;
    int v22;
    uint32 v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    unsigned int v29;
    uint32 v30;
    int v31;
    int v32;
    int v33;
    int v34;
    __int16 v35;
    uint32 v36;
    int v37;
    int v38;
    int v39;
    int v40;
    uint32 v41;
    int v42;
    int v43;
    unsigned int v44;
    int v45;
    int v46;
    int v47;
    int v48;
    int v49;
    int v50;
    int v51;
    int v52;
    int v53;
    int v54;
    int v55;
    int v56;
    int v57;
    int v61;
    unsigned int v62;
    unsigned int v63;
    int v64;
    int v65;
    int v66;
    int v79;
    int v80;
    int v81;
    int v82;
    int v83;
    char v84;
    int v86;
    char v87;
    int v88;
    char v95[8];
    int v99[4];
    char v111;
    char v126[8];
    char v138;
    char v139;
    int v140;
    int v141;
    int v142;

    v1 = 0;
    entry_state = r_u32(0x80116A88u);
    result = entry_state < 5u;
    v142 = 2;
    if (entry_state < 5u)
        return result;
    entry_index = r_u32(0x80116AB0u);
    entry_table = r_u32(0x80115CCCu);
    v141 = (sint32)r_u32(entry_table + 76u * entry_index + 52u);
    while (1)
    {
        v3 = (sint16)r_u16(0x80116A06u);
        v4 = v3;
        w_u16(0x8011690Eu, (uint16)v3);
        v5 = -1;
        if (v3 < 6)
        {
            v6 = 0x8012F120u + 4u * (uint32)v4;
            while (1)
            {
                v5 = (sint32)r_u32(v6);
                if (v5 >= 0)
                    break;
                ++v4;
                v6 += 4u;
                if (v4 >= 6)
                    goto LABEL_7;
            }
            w_u16(0x8011690Eu, (uint16)((uint32)v4 + 1u));
        }
    LABEL_7:
        v7 = (sint32)((uint32)v5 << 2);
        if (v5 < 0)
        {
            v8 = v142;
            w_u16(0x8011690Eu, 0u);
            v142 = v8 - 1;
            if (v8 == 1)
            {
                w_u16(0x80116A06u, 0u);
                goto LABEL_201;
            }
            v9 = (sint32)r_u16(0x80116914u) + 1;
            w_u16(0x80116914u, (uint16)v9);
            if ((sint32)((uint32)v9 << 16) > 0)
                w_u16(0x80116914u, 0xFFFFu);
            entry_index = r_u32(0x80116AB0u);
            v10 = (uint32)v5 == entry_index;
            v5 = (sint32)entry_index;
            if (!v10)
            {
                v7 = (sint32)(entry_index << 2);
                goto LABEL_21;
            }
            v11 = 0;
            v12 = 0x8012F120u;
            while (1)
            {
                v5 = (sint32)r_u32(v12);
                if (v5 >= 0)
                    break;
                ++v11;
                v12 += 4u;
                if (v11 >= 6)
                    goto LABEL_19;
            }
            w_u16(0x8011690Eu, (uint16)((uint32)v11 + 1u));
        LABEL_19:
            v7 = (sint32)((uint32)v5 << 2);
            if (v5 < 0)
                break;
        }
    LABEL_21:
        v13 = (sint32)r_u32(0x80115CCCu);
        v14 = (sint16)r_u16(0x80130C88u);
        v15 = (sint32)r_u32((uint32)v13 + 76u * (uint32)v5 + 52u);
        w_u16(0x80116A06u, r_u16(0x8011690Eu));
        if (v14 == 9)
        {
            v16 = (sint16)r_u16((uint32)v15 + 2u);
            if (v16 != 666)
            {
                entry_index = r_u32((uint32)v13 + 76u * (uint32)v16);
                entry_table = r_u32(0x80116B98u);
            }
            if (v16 != 666 && (sint16)r_u16(entry_table + 20u * entry_index) == 3)
            {
                v17 = (sint32)r_u32((uint32)v15 + 20u);
                v19 = (sint32)(r_u32((uint32)v17 + 4u) >> 3);
                sf_draft_call(0x80149AC0u, 2u, (const uint32[]){(uint32)v17 + 212u, sf_draft_guest_address(v95)});
                v20 = (uint8)v95[0];
                if ((v19 & 1) != v20)
                {
                    if (v20)
                    {
                        sub_8003D000((sint16)r_u16((uint32)v15 + 2u));
                    }
                    else if (r_u32((uint32)v15 + 28u))
                    {
                        sub_8003CCD8((sint16)r_u16((uint32)v15 + 2u));
                    }
                    v20 = (uint8)v95[0];
                    status_root = r_u32((uint32)v15 + 20u);
                    status_word = r_u32(status_root + 4u);
                    w_u32(status_root + 4u, (status_word & 0xFFFFFFF7u) | (((uint32)v20 & 1u) << 3));
                    v20 = (uint8)v95[0];
                }
                if (!v20)
                    w_u16(r_u32((uint32)v141 + 20u), 0xFFFFu);
                result = r_u16(0x8011690Eu);
                w_u16(0x80116A06u, (uint16)result);
                return result;
            }
            if ((uint32)v5 != r_u32(0x80116AB0u) && (r_u32(r_u32((uint32)v15 + 12u) + 404u) & 0x100000u) == 0u && (sint16)r_u16(0x80116914u) < 0)
                goto LABEL_200;
        }
        if ((uint8)sub_800CF9E8(r_u32((uint32)v15 + 8u)))
        {
            if ((sint16)r_u16(0x80116914u) < 0)
            {
                v22 = (sint32)r_u32(76u * (uint32)v5 + r_u32(0x80115CCCu) + 52u);
                v23 = r_u32((uint32)v22 + 12u);
                v99[0] = (sint32)r_u32(v23 + 268u);
                v24 = (sint32)r_u32(v23 + 272u);
                v25 = (sint32)r_u32(v23 + 276u);
                v26 = (sint32)r_u32(v23 + 280u);
                v99[2] = v25;
                v99[3] = v26;
                v99[1] = (sint32)((uint32)v24 + 32u);
                status_root = r_u32(0x80115D84u);
                camera_vector[0] = (sint32)r_u32(r_u32(r_u32(status_root)) + 20u);
                camera_vector[1] = (sint32)r_u32(r_u32(r_u32(status_root)) + 24u);
                v27 = (sint32)r_u32(r_u32(r_u32(status_root)) + 28u);
                v28 = (sint32)(0u - (uint32)camera_vector[1]);
                camera_vector[1] = v28;
                camera_vector[2] = v27;
                if ((r_u8(r_u32((uint32)v22 + 8u) + 11u) & 0x20u) == 0u)
                    camera_vector[1] = (sint32)((uint32)v28 - 134u);
                result_request[0] = sf_draft_guest_address(camera_vector);
                result_request[2] = 666u;
                result_request[1] = sf_draft_guest_address(v99);
                result_request[3] = 0u;
                result_request[7] = sf_draft_guest_address(&v111);
                result_request[8] = 0u;
                result_request[9] = 0u;
                result_request[10] = 0u;
                result_request[11] = 0u;
                result_request[12] = 0u;
                /* TODO Original camera point fourth word has no reviewed writer */
                camera_vector[3] = (sf_draft_unbound_stack_field(0x80063B5Cu, 0x44u), 0);
                sub_8003A3C8((sint32)sf_draft_guest_address(result_request));
                v1 = 1;
                if (!v111)
                {
                    v29 = 0;
                    list_count = r_u32(0x80116B74u);
                    if (list_count)
                    {
                        entry_table = r_u32(0x80115CCCu);
                        v30 = 0x80130F10u;
                        do
                        {
                            v31 = (sint32)r_u32(v30);
                            v32 = -1;
                            if (v31 && r_u32((uint32)v31 + 8u) == 1u)
                                v32 = r_u16(r_u32((uint32)v31 + 72u) + 20u) & 0x3FF;
                            if (v32 < 0)
                            {
                                status_word = r_u32((uint32)v31 + 8u);
                                ++v29;
                                if (status_word != 2u)
                                    break;
                            }
                            else
                            {
                                if ((uint32)r_u8(r_u32(entry_table + 76u * (uint32)v32 + 52u) + 34u) - 1u >= 2u)
                                    break;
                                entry_state = (uint32)(sint32)(sint16)r_u16((uint32)v22 + 2u);
                                ++v29;
                                if ((uint32)v32 == entry_state)
                                {
                                    v111 = 1;
                                    break;
                                }
                            }
                            v30 += 4u;
                        } while (v29 < list_count);
                    }
                }
                entry_state = (uint8)v111;
                status_root = r_u32((uint32)v22 + 20u);
                status_word = r_u32(status_root + 4u);
                w_u32(status_root + 4u, (status_word & 0xFFFFFFDFu) | ((entry_state & 1u) << 5));
                v33 = (sint32)r_u32((uint32)v22 + 16u);
                if ((r_u32((uint32)v33 + 4u) & 0x80u) != 0u || r_u8((uint32)v33 + 8u) == 8u || r_u8(0x80116944u))
                {
                    v34 = (sint32)r_u32((uint32)v22 + 8u);
                    v35 = -16;
                }
                else
                {
                    v35 = sub_80063B10(r_u32((uint32)v22 + 8u));
                    v34 = (sint32)r_u32((uint32)v22 + 8u);
                }
                w_u16((uint32)v34 + 22u, (uint16)v35);
                if (!v111 && r_u32(r_u32(0x80130F10u) + 4u) < 0x80u)
                {
                    status_root = r_u32((uint32)v22 + 8u);
                    w_u8(status_root + 11u, r_u8(status_root + 11u) & 0xBFu);
                    if ((sint16)r_u16(r_u32((uint32)v22 + 24u) + 8u) == -1)
                    {
                        status_root = r_u32((uint32)v22 + 8u);
                        w_u8(status_root + 11u, r_u8(status_root + 11u) & 0xDFu);
                    }
                    goto LABEL_200;
                }
                status_root = r_u32((uint32)v22 + 8u);
                w_u8(status_root + 11u, r_u8(status_root + 11u) | 0x40u);
                if ((r_u32(r_u32((uint32)v22 + 20u) + 4u) & 8u) != 0u || !v111 || (uint32)v5 == r_u32(0x80116AB0u) || (r_u8(r_u32((uint32)v22 + 8u) + 8u) & 0x40u) == 0u)
                {
                LABEL_73:
                    if ((sint16)r_u16(r_u32((uint32)v22 + 24u) + 8u) > 0)
                        goto LABEL_200;
                }
                else if ((sint16)r_u16(r_u32((uint32)v22 + 24u) + 8u) > 0)
                {
                    if (sub_8001C950() != 11)
                        sub_8005AD04(v22, 1);
                    goto LABEL_73;
                }
                status_root = r_u32((uint32)v22 + 8u);
                w_u8(status_root + 11u, r_u8(status_root + 11u) | 0x20u);
                goto LABEL_200;
            }
            v36 = 0;
            if (r_u16(0x80116914u))
                goto LABEL_200;
            v37 = (sint16)r_u16(r_u32((uint32)v15 + 24u) + 8u);
            v38 = 0;
            v139 = 0;
            v126[0] = 0;
            if (v37 <= 0)
            {
                v39 = (sint32)r_u32((uint32)v15 + 28u);
                if (v39)
                {
                    if (!r_u8((uint32)v39 + 65u))
                        goto LABEL_200;
                }
            }
            v40 = (sint32)r_u32(76u * (uint32)v5 + r_u32(0x80115CCCu) + 52u);
            entry_index = r_u32(0x80116AB0u);
            v41 = r_u32((uint32)v40 + 20u);
            if ((uint32)v5 != entry_index)
            {
                v42 = (sint32)r_u32((uint32)v40 + 28u);
                v43 = (sint32)r_u32((uint32)v42 + 32u);
                v44 = (v43 & 0x800000) != 0 ? v43 & 0xFF7FFFFF : v43 | 0x800000;
                w_u32((uint32)v42 + 32u, v44);
                entry_state = (uint32)(sint32)(sint16)r_u16(r_u32((uint32)v40 + 20u));
                entry_index = r_u32(0x80116AB0u);
                if (entry_state != entry_index && (uint32)v5 != (uint32)(sint32)(sint16)r_u16(r_u32(r_u32(0x80116B9Cu) + 20u)) && (r_u32(r_u32((uint32)v40 + 28u) + 32u) & 0x800000u) != 0u)
                {
                    if (v5 == 666)
                        v45 = 666;
                    else
                    {
                        entry_table = r_u32(0x80115CCCu);
                        entry_index = r_u32(entry_table + 76u * (uint32)v5);
                        entry_table = r_u32(0x80116B98u);
                        v45 = (sint16)r_u16(entry_table + 20u * entry_index);
                    }
                    if (v45 != 53 && v45 != 76 && v45 != 92)
                        v38 = 1;
                }
            }
            if (v38)
            {
                position_vector[0] = (sint32)r_u32(r_u32(r_u32(r_u32((uint32)v40 + 8u) + 24u)) + 20u);
                position_vector[1] = (sint32)r_u32(r_u32(r_u32(r_u32((uint32)v40 + 8u) + 24u)) + 24u);
                coordinate_root = r_u32(r_u32((uint32)v40 + 8u) + 24u);
                target_root = r_u32(0x80116B9Cu);
                coordinate_root = r_u32(coordinate_root);
                position_vector[1] = (sint32)(0u - (uint32)position_vector[1]);
                v46 = (sint32)r_u32(coordinate_root + 28u);
                position_vector[1] = (sint32)((uint32)position_vector[1] - 8u);
                position_vector[2] = v46;
                relative_vector[0] = (sint32)r_u32(r_u32(r_u32(r_u32(target_root + 8u) + 24u)) + 20u);
                relative_vector[1] = (sint32)r_u32(r_u32(r_u32(r_u32(target_root + 8u) + 24u)) + 24u);
                coordinate_root = r_u32(target_root + 8u);
                relative_vector[0] = (sint32)((uint32)relative_vector[0] - (uint32)position_vector[0]);
                coordinate_root = r_u32(coordinate_root + 24u);
                coordinate_root = r_u32(coordinate_root);
                relative_vector[1] = (sint32)(0u - (uint32)relative_vector[1]);
                v47 = (sint32)(r_u32(coordinate_root + 28u) - (uint32)v46);
                relative_vector[2] = v47;
                result_request[0] = sf_draft_guest_address(position_vector);
                result_request[4] = sf_draft_guest_address(relative_vector);
                result_request[6] = 6400u;
                relative_vector[1] = (sint32)((uint32)relative_vector[1] - 8u - (uint32)position_vector[1]);
                result_request[2] = 0u;
                result_request[3] = 0u;
                result_request[7] = sf_draft_guest_address(v126);
                result_request[8] = 0u;
                result_request[9] = 0u;
                result_request[10] = 0u;
                result_request[11] = 0u;
                result_request[12] = 0u;
                /* TODO Original position fourth word has no reviewed writer */
                position_vector[3] = (sf_draft_unbound_stack_field(0x80063B5Cu, 0x2Cu), 0);
                sub_8003A7FC((sint32)sf_draft_guest_address(result_request));
                if (!(uint8)v126[0])
                    v126[0] = (uint8)sub_80063A6C(v5, r_u32(0x80116AB0u));
                if ((r_u32(v41 + 4u) & 8u) == 0u && (uint8)v126[0] && (uint32)v5 != r_u32(0x80116AB0u) && (r_u8(r_u32((uint32)v40 + 8u) + 8u) & 0x40u) != 0u && (sint16)r_u16(r_u32((uint32)v40 + 24u) + 8u) > 0)
                {
                    sub_8005AD04(v40, 1);
                }
                v1 = 1;
                goto LABEL_187;
            }
            if ((uint32)v5 != r_u32(0x80116AB0u) && (r_u32(r_u32((uint32)v40 + 20u) + 4u) & 8u) == 0u)
            {
                v48 = (sint32)r_u32((uint32)v40 + 28u);
                if ((r_u32((uint32)v48 + 32u) & 0x800000u) != 0u && !r_u8((uint32)v48 + 65u) && (sint16)r_u16(r_u32((uint32)v40 + 24u) + 8u) > 0)
                {
                    coordinate_root = r_u32(r_u32((uint32)v40 + 8u) + 24u);
                    alternate_endpoint[0] = (sint32)r_u32(r_u32(coordinate_root) + 20u);
                    coordinate_root = r_u32(r_u32((uint32)v40 + 8u) + 24u);
                    alternate_endpoint[1] = (sint32)r_u32(r_u32(coordinate_root) + 24u);
                    coordinate_root = r_u32(r_u32((uint32)v40 + 8u) + 24u);
                    camera_root = r_u32(0x80115D84u);
                    coordinate_root = r_u32(coordinate_root);
                    alternate_endpoint[1] = (sint32)(0u - (uint32)alternate_endpoint[1]);
                    v49 = (sint32)r_u32(coordinate_root + 28u);
                    alternate_endpoint[1] = (sint32)((uint32)alternate_endpoint[1] - 8u);
                    alternate_endpoint[2] = v49;
                    alternate_origin[0] = (sint32)r_u32(r_u32(r_u32(camera_root)) + 20u);
                    alternate_origin[1] = (sint32)r_u32(r_u32(r_u32(camera_root)) + 24u);
                    coordinate_root = r_u32(camera_root);
                    coordinate_root = r_u32(coordinate_root);
                    alternate_origin[1] = (sint32)(0u - (uint32)alternate_origin[1]);
                    v50 = (sint32)r_u32(coordinate_root + 28u);
                    result_request[0] = sf_draft_guest_address(alternate_origin);
                    result_request[1] = sf_draft_guest_address(alternate_endpoint);
                    result_request[2] = 0u;
                    alternate_origin[2] = v50;
                    result_request[3] = (uint32)v40;
                    result_request[7] = sf_draft_guest_address(&v138);
                    result_request[8] = 0u;
                    result_request[9] = 0u;
                    result_request[10] = 0u;
                    result_request[11] = 0u;
                    result_request[12] = 0u;
                    /* TODO Resolve conditionally retained fourth words from earlier queries */
                    alternate_origin[3] = (sf_draft_unbound_stack_field(0x80063B5Cu, 0x7Cu), 0);
                    alternate_endpoint[3] = (sf_draft_unbound_stack_field(0x80063B5Cu, 0xA4u), 0);
                    sub_8003A3C8((sint32)sf_draft_guest_address(result_request));
                    v1 = 1;
                    if ((r_u32(r_u32((uint32)v40 + 20u) + 4u) & 8u) == 0u && (uint8)v138 && (r_u8(r_u32((uint32)v40 + 8u) + 8u) & 0x40u) != 0u && sub_8001C950() != 11)
                    {
                        sub_8005AD04(v40, 1);
                    }
                    goto LABEL_200;
                }
            }
            v51 = (sint16)r_u16(r_u32((uint32)v40 + 20u));
            if (v51 >= 0)
            {
                entry_table = r_u32(0x80115CCCu);
                v15 = (sint32)r_u32(76u * (uint32)v51 + entry_table + 52u);
                if (v15)
                {
                    linked_object = r_u32(r_u32((uint32)v15 + 8u) + 24u) != 0u && r_u32(r_u32((uint32)v40 + 8u) + 24u) != 0u;
                    if (!linked_object)
                    {
                        v52 = (sint32)r_u32((uint32)v40 + 28u);
                        if (v52 && (r_u32((uint32)v52 + 32u) & 0x1000000u) != 0u)
                        {
                            entry_index = (uint32)(sint16)r_u16((uint32)v40 + 2u);
                            selected_identity = (sint16)r_u16((uint32)v15 + 2u);
                            linked_object = (uint32)selected_identity == r_u32(76u * entry_index + entry_table + 48u);
                        }
                    }
                    if (linked_object)
                    {
                        selected_identity = (sint16)r_u16((uint32)v15 + 2u);
                        entry_index = r_u32(0x80116AB0u);
                        if ((uint32)selected_identity == entry_index && r_u32(0x8012F144u))
                        {
                            relative_vector[0] = (sint32)r_u32(0x8012F138u);
                            relative_vector[1] = (sint32)r_u32(0x8012F13Cu);
                            relative_vector[2] = (sint32)r_u32(0x8012F140u);
                        }
                        else
                        {
                            if ((uint32)r_u8((uint32)v15 + 34u) - 1u >= 2u)
                            {
                                relative_vector[0] = (sint32)r_u32(r_u32(r_u32((uint32)v15 + 8u) + 12u) + 20u);
                                relative_vector[1] = (sint32)r_u32(r_u32(r_u32((uint32)v15 + 8u) + 12u) + 24u);
                                v53 = (sint32)r_u32(r_u32(r_u32((uint32)v15 + 8u) + 12u) + 28u);
                                v54 = (sint32)(0u - (uint32)relative_vector[1]);
                            }
                            else
                            {
                                relative_vector[0] = (sint32)r_u32(r_u32(r_u32(r_u32((uint32)v15 + 8u) + 24u)) + 20u);
                                relative_vector[1] = (sint32)r_u32(r_u32(r_u32(r_u32((uint32)v15 + 8u) + 24u)) + 24u);
                                v53 = (sint32)r_u32(r_u32(r_u32(r_u32((uint32)v15 + 8u) + 24u)) + 28u);
                                v54 = (sint32)(0u - (uint32)relative_vector[1] - 8u);
                            }
                            relative_vector[1] = v54;
                            relative_vector[2] = v53;
                        }
                        position_vector[0] = (sint32)r_u32(r_u32(r_u32(r_u32((uint32)v40 + 8u) + 24u)) + 20u);
                        position_vector[1] = (sint32)r_u32(r_u32(r_u32(r_u32((uint32)v40 + 8u) + 24u)) + 24u);
                        v1 = 1;
                        v55 = (sint32)r_u32(r_u32(r_u32(r_u32((uint32)v40 + 8u) + 24u)) + 28u);
                        relative_vector[0] = (sint32)((uint32)relative_vector[0] - (uint32)position_vector[0]);
                        position_vector[1] = (sint32)(0u - (uint32)position_vector[1] - 8u);
                        position_vector[2] = v55;
                        relative_vector[1] = (sint32)((uint32)relative_vector[1] - (uint32)position_vector[1]);
                        relative_vector[2] = (sint32)((uint32)relative_vector[2] - (uint32)v55);
                    }
                }
            }
            if (!v1)
            {
                v1 = 1;
                if ((uint32)r_u8((uint32)v40 + 34u) - 1u >= 2u)
                {
                    position_vector[0] = (sint32)r_u32(r_u32(r_u32((uint32)v40 + 8u) + 12u) + 20u);
                    position_vector[1] = (sint32)r_u32(r_u32(r_u32((uint32)v40 + 8u) + 12u) + 24u);
                    v61 = (sint32)r_u32(r_u32(r_u32((uint32)v40 + 8u) + 12u) + 28u);
                    position_vector[1] = (sint32)(0u - (uint32)position_vector[1]);
                    position_vector[2] = v61;
                }
                else
                {
                    position_vector[0] = (sint32)r_u32(r_u32(r_u32(r_u32((uint32)v40 + 8u) + 24u)) + 20u);
                    position_vector[1] = (sint32)r_u32(r_u32(r_u32(r_u32((uint32)v40 + 8u) + 24u)) + 24u);
                    v56 = (sint32)r_u32(r_u32(r_u32(r_u32((uint32)v40 + 8u) + 24u)) + 28u);
                    position_vector[1] = (sint32)(0u - (uint32)position_vector[1] - 8u);
                    position_vector[2] = v56;
                    selected_identity = (sint16)r_u16((uint32)v40 + 2u);
                    entry_index = r_u32(0x80116AB0u);
                    if ((uint32)selected_identity == entry_index && (r_u32(r_u32((uint32)v40 + 16u)) & 0x2000000u) != 0u)
                    {
                        camera_root = r_u32(0x80115D84u);
                        relative_vector[0] = (sint16)r_u16(r_u32(r_u32(camera_root)) + 4u);
                        relative_vector[1] = (sint16)r_u16(r_u32(r_u32(camera_root)) + 10u);
                        v57 = (sint16)r_u16(r_u32(r_u32(camera_root)) + 16u);
                        relative_vector[1] = 0;
                        goto LABEL_138;
                    }
                    if ((r_u32(r_u32((uint32)v40 + 16u)) & 0x1000120u) == 288u)
                    {
                        for (matrix_index = 0u; matrix_index < 9u; ++matrix_index)
                        {
                            coordinate_root = r_u32(r_u32(r_u32((uint32)v40 + 8u) + 24u) + 32u);
                            matrix_values[matrix_index] = r_u16(coordinate_root + 2u * matrix_index);
                            if (matrix_index & 1u)
                                matrix_values[matrix_index] = (uint16)(0u - (uint32)matrix_values[matrix_index]);
                        }
                        relative_vector[0] = -(sint32)(sint16)matrix_values[1];
                        relative_vector[1] = -(sint32)(sint16)matrix_values[4];
                        relative_vector[2] = -(sint32)(sint16)matrix_values[7];
                        goto LABEL_139;
                    }
                }
                relative_vector[0] = (sint16)r_u16(r_u32(r_u32((uint32)v40 + 8u) + 12u) + 4u);
                relative_vector[1] = (sint16)r_u16(r_u32(r_u32((uint32)v40 + 8u) + 12u) + 10u);
                v57 = (sint16)r_u16(r_u32(r_u32((uint32)v40 + 8u) + 12u) + 16u);
                relative_vector[1] = (sint32)(0u - (uint32)relative_vector[1]);
            LABEL_138:
                relative_vector[2] = v57;
            LABEL_139:
                v15 = 0;
            }
            /* TODO Resolve input point fourth words */
            result_request[0] = sf_draft_guest_address(&position_vector[0]);
            result_request[4] = sf_draft_guest_address(&relative_vector[0]);
            result_request[6] = 6400u;
            result_request[7] = sf_draft_guest_address(v126);
            result_request[8] = v41 + 100u;
            result_request[9] = v41 + 132u;
            result_request[11] = sf_draft_guest_address(&v139);
            result_request[2] = (uint32)v40;
            result_request[3] = 0u;
            result_request[10] = 0u;
            result_request[12] = sf_draft_guest_address(auxiliary_result);
            /* The wrapper writes word1 and both consumers ignore word5 */
            /* TODO Original position fourth word has no reviewed writer */
            position_vector[3] = (sf_draft_unbound_stack_field(0x80063B5Cu, 0x2Cu), 0);
            sub_8003A7FC((sint32)sf_draft_guest_address(result_request));
            v62 = 0;
            if (!r_u32(0x80116B74u))
                goto LABEL_162;
            v63 = 0;
            while (1)
            {
                v64 = (sint32)r_u32(0x80130F10u + 4u * (uint32)v63);
                v65 = -1;
                if (v64 && r_u32((uint32)v64 + 8u) == 1u)
                    v65 = r_u16(r_u32((uint32)v64 + 72u) + 20u) & 0x3FFu;
                if (v65 != v5)
                {
                    v36 = (uint32)v64;
                    if (v65 < 0)
                    {
                        if (r_u32(v36 + 8u) != 2u)
                        {
                        LABEL_155:
                            v126[0] = 0;
                            goto LABEL_162;
                        }
                        v36 = 0;
                    }
                    else
                    {
                        v66 = (sint32)r_u32(76u * (uint32)v65 + r_u32(0x80115CCCu) + 52u);
                        if (v15 && v65 == (sint16)r_u16((uint32)v15 + 2u))
                        {
                            if ((uint32)r_u8((uint32)v66 + 34u) - 1u < 2u)
                                sub_80075F98(r_u32((uint32)v66 + 8u));
                            sf_63b5c_copy4(v41 + 100u, v36 + 32u);
                            sf_63b5c_copy4(v41 + 132u, v36 + 16u);
                            v126[0] = 1;
                            if ((uint32)v62 + 1u < r_u32(0x80116B74u))
                                v36 = r_u32(0x80130F14u + 4u * (uint32)v62);
                            else
                                v36 = 0;
                        LABEL_162:
                            if (v36)
                            {
                                sf_63b5c_copy4(v41 + 116u, v36 + 32u);
                                sf_63b5c_copy4(v41 + 148u, v36 + 16u);
                                w_u16(v41 + 96u, r_u16(r_u32(v36 + 76u) + 2u) & 0x3Fu);
                                v79 = -1;
                                if (r_u32(v36 + 8u) == 1u)
                                    v79 = r_u16(r_u32(v36 + 72u) + 20u) & 0x3FFu;
                                if (v79 < 0 || v79 >= (sint32)r_u32(0x80116A5Cu))
                                    w_u16(v41 + 92u, 0xFFFFu);
                                else
                                    w_u16(v41 + 92u, (uint16)v79);
                            }
                            else
                            {
                                sub_800C720C(sf_draft_guest_address(&relative_vector[0]), sf_draft_guest_address(&relative_vector[0]));
                                w_u32(v41 + 148u, (uint32)relative_vector[0]);
                                w_u32(v41 + 152u, (uint32)relative_vector[1]);
                                w_u32(v41 + 156u, (uint32)relative_vector[2]);
                                w_u32(v41 + 116u, (uint32)position_vector[0] + (uint32)relative_vector[0]);
                                w_u32(v41 + 120u, (uint32)position_vector[1] + (uint32)relative_vector[1]);
                                v80 = position_vector[2];
                                v81 = relative_vector[2];
                                w_u16(v41 + 92u, 0xFFFFu);
                                w_u16(v41 + 96u, 25u);
                                w_u32(v41 + 124u, (uint32)v80 + (uint32)v81);
                            }
                            selected_identity = (sint16)r_u16((uint32)v15 + 2u);
                            entry_index = r_u32(0x80116AB0u);
                            if ((uint32)selected_identity == entry_index)
                            {
                                if (r_u32(0x8012F144u))
                                {
                                    if (!v126[0])
                                    {
                                        sub_800E0364(sf_draft_guest_address(&position_vector[0]), v41 + 116, sf_draft_guest_address(&v140));
                                        if ((sint16)r_u16(r_u32((uint32)v40 + 28u) + 44u) < v140)
                                            v126[0] = 1;
                                    }
                                }
                            }
                            status_word = r_u32(v41 + 4u);
                            w_u32(v41 + 4u, (status_word & 0xFFFFFFFDu) | (((uint32)(uint8)v126[0] & 1u) << 1));
                            selected_identity = r_u16((uint32)v15 + 2u);
                            v10 = (uint8)v139 == 0u;
                            w_u16(v41 + 90u, (uint16)selected_identity);
                            if (v10 || (uint8)auxiliary_result[1] != 2u)
                                w_u16(v41 + 94u, 0xFFFFu);
                            else
                                w_u16(v41 + 94u, r_u16(auxiliary_result[0] + 2u));
                            selected_identity = (sint16)r_u16((uint32)v15 + 2u);
                            entry_index = r_u32(0x80116AB0u);
                            if ((uint32)selected_identity == entry_index)
                            {
                                if ((r_u32(r_u32((uint32)v40 + 20u) + 4u) & 8u) != 0u)
                                    goto LABEL_185;
                                if (!v126[0])
                                    goto LABEL_186;
                                if ((r_u8(r_u32((uint32)v40 + 8u) + 8u) & 0x40u) != 0u && (sint16)r_u16(r_u32((uint32)v40 + 24u) + 8u) > 0)
                                    sub_8005AD04(v40, 1);
                            LABEL_185:
                                if (!v126[0])
                                LABEL_186:
                                    v126[0] = (uint8)sub_80063A6C(v5, r_u32(0x80116AB0u));
                            LABEL_187:
                                status_word = r_u32(v41 + 4u);
                                w_u32(v41 + 4u, (status_word & 0xFFFFFFEFu) | (((uint32)(uint8)v126[0] & 1u) << 4));
                            }
                            else if ((uint32)(sint16)r_u16((uint32)v40 + 2u) == entry_index)
                            {
                                if (v126[0])
                                {
                                    v82 = (sint16)r_u16(v41 + 92u);
                                    if (v82 >= 0)
                                    {
                                        v83 = (sint32)r_u32(76u * (uint32)v82 + r_u32(0x80115CCCu) + 52u);
                                        if (r_u8((uint32)v83 + 34u) == 2u)
                                        {
                                            if (r_u8(r_u32((uint32)v15 + 28u) + 72u))
                                                sub_80058FC0(v15);
                                            if (r_u8(r_u32((uint32)v83 + 28u) + 72u))
                                                sub_80059108(v83);
                                        }
                                    }
                                }
                                if (v15)
                                {
                                    v84 = v126[0];
                                    if (!v126[0])
                                    {
                                        v84 = (uint8)sub_80063A6C(r_u32(0x80116AB0u), v5);
                                        v126[0] = v84;
                                    }
                                    status_root = r_u32((uint32)v15 + 20u);
                                    status_word = r_u32(status_root + 4u);
                                    w_u32(status_root + 4u, (status_word & 0xFFFFFFEFu) | (((uint32)(uint8)v84 & 1u) << 4));
                                }
                            }
                            goto LABEL_200;
                        }
                        if (r_u8((uint32)v66 + 34u) == 2u)
                        {
                            if (sub_80075F98(r_u32((uint32)v66 + 8u)))
                                goto LABEL_155;
                        }
                        else
                        {
                            if (v65 == 666)
                                goto LABEL_155;
                            entry_index = r_u32(76u * (uint32)v65 + r_u32(0x80115CCCu));
                            entry_table = r_u32(0x80116B98u);
                            if ((sint16)r_u16(20u * entry_index + entry_table) != 66)
                            {
                                v126[0] = 0;
                                goto LABEL_162;
                            }
                        }
                    }
                }
                v62 = (sint32)((uint32)v62 + 1u);
                v63 = v62;
                if ((uint32)v62 >= r_u32(0x80116B74u))
                    goto LABEL_162;
            }
        }
        status_root = r_u32((uint32)v15 + 20u);
        status_word = r_u32(status_root + 4u);
        w_u32(status_root + 4u, status_word & 0xFFFFFFFDu);
        status_root = r_u32((uint32)v15 + 20u);
        status_word = r_u32(status_root + 4u);
        w_u32(status_root + 4u, status_word & 0xFFFFFFEFu);
        status_root = r_u32((uint32)v15 + 20u);
        status_word = r_u32(status_root + 4u);
        w_u32(status_root + 4u, status_word & 0xFFFFFFDFu);
        w_u16(r_u32((uint32)v15 + 28u) + 54u, 0u);
        v21 = (sint32)r_u32((uint32)v15 + 28u);
        if ((r_u32((uint32)v21 + 32u) & 0x20u) == 0u)
            goto LABEL_200;
        if (r_u8((uint32)v21 + 79u) >= 0x51u)
        {
            sub_8005FBCC(v15);
            goto LABEL_200;
        }
        if (!(sint16)r_u16(0x80116914u))
            goto LABEL_201;
    LABEL_200:
        if (v1)
            goto LABEL_201;
    }
    w_u16(0x8011690Eu, 0u);
LABEL_201:
    if (v5 >= 0)
    {
        (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(&v88);
        sub_80062BC0(v5);
        v86 = r_u8(0x80116961u);
        v10 = v86 == 0;
        v87 = v86 - 1;
        if (!v10)
            w_u8(0x80116961u, (uint8)v87);
    }
    return sub_800638E4();
}

// FUNCTION_MARKER 0x8001B584u 0x8001b584
/* TODO Original unwritten request words remain explicit native draft carriers */
sint32 sub_8001B584(sint32 a1, sint32 a2, sint8 a3)
{
    /* TODO Original position words can be unwritten outside mode12 */
    sint32 camera_position[4] = {0, 0, 0, 0};
    sint32 scale_values[4];
    uint32 literal_packet[4], literal_parameters[4], literal_index;
    uint32 entry_index, entry_body, entry_destination, entry_root, entry_vertex;
    uint32 entry_words[4];
    bool scale_y_ready = false;
    /* TODO Original request fourth words at3C and early7C are unwritten */
    sint32 unknown_request_word = 0;
    FUNCTION_MARKER(0x8001B584u, "SCUS_942.40");
    int v209;
    int v5;
    uint32 v7;
    uint32 v8;
    int v9;
    int v11;
    uint32 v27;
    uint32 v28;
    uint32 v29;
    uint32 v30;
    uint32 v31;
    int v32;
    int v33;
    int v34;
    int v35;
    uint32 v36;
    int v37;
    int v38;
    int v39;
    uint32 v40;
    int v41;
    int v42;
    int v43;
    int v44;
    int v45;
    int v46;
    int v47;
    unsigned int v48;
    uint32 v49;
    uint32 v50;
    int v51;
    int v52;
    int v53;
    uint32 v54;
    int v55;
    int v56;
    int v57;
    uint32 v58;
    uint32 v60;
    int v61;
    int v62;
    int v63;
    uint32 v64;
    int v65;
    int v66;
    int v67;
    uint32 v68;
    uint32 v69;
    uint32 v70;
    int v71;
    int v72;
    int v73;
    uint32 v74;
    uint32 v75;
    uint32 v76;
    uint32 v78;
    uint32 v81;
    int v82;
    int v83;
    int v84;
    uint32 v85;
    uint32 v87;
    int v88;
    int v89;
    int v90;
    uint32 v91;
    uint32 v92;
    int v93;
    int v94;
    int v95;
    uint32 v96;
    uint32 v98;
    int v99;
    int v100;
    int v101;
    uint32 v102;
    uint32 v103;
    int v104;
    uint32 v105;
    uint32 v107;
    int v108;
    uint32 v109;
    uint32 v110;
    uint32 v111;
    int v112;
    int v113;
    int v114;
    uint32 v115;
    int *v117;
    int v118;
    int v119;
    uint32 v120;
    int v121;
    int v122;
    int v123;
    uint32 v124;
    int v126;
    int v127;
    int v128;
    int v129;
    int v130;
    int v131;
    int v132;
    int v133;
    int v134;
    uint32 v135;
    int v136;
    int v137;
    int v138;
    uint32 v139;
    uint32 v140;
    int v141;
    int v142;
    int v143;
    uint32 v144;
    int v145;
    int v146;
    int v147;
    uint32 v149;
    int v150;
    int v151;
    int v152;
    uint32 v153;
    uint32 v155;
    int v156;
    int v157;
    int v158;
    uint32 v159;
    uint32 v160;
    int v161;
    int v162;
    int v163;
    uint32 v164;
    int v165;
    int v166;
    int v167;
    uint32 v169;
    int v170;
    int v171;
    int v172;
    uint32 v173;
    uint32 v175;
    int v176;
    int v177;
    int v178;
    uint32 v179;
    uint32 v180;
    int v181;
    int v182;
    int v183;
    uint32 v184;
    int v185;
    int v186;
    int v187;
    int v189;
    int v190;
    int v191;
    int v192;
    int v202;
    int v203;
    int v204;
    int v205;
    int v206;
    int v207;
    int v208;
    int v210;
    int v211;
    int v212;

    v5 = (sint32)(60u * (uint32)a1);
    entry_destination = r_u32(0x80119208u) + 60u * (uint32)a1;
    v7 = entry_destination;
    entry_index = r_u32(entry_destination);
    for (literal_index = 0u; literal_index < 4u; ++literal_index)
        literal_packet[literal_index] = r_u32(0x800101D0u + 4u * literal_index);
    for (literal_index = 0u; literal_index < 4u; ++literal_index)
        literal_parameters[literal_index] = r_u32(0x800101D0u + 4u * literal_index);
    v190 = (sint32)literal_parameters[3];
    entry_body = r_u32(0x80119204u) + 168u * entry_index;
    v8 = entry_body;
    v9 = (sint32)r_u32(entry_body + 64u);
    entry_destination = r_u32(0x80115D84u);
    w_u32(0x801191F0u, 0u);
    v11 = (sint32)r_u32(0x801191ECu);
    entry_words[0] = r_u32(entry_body + 152u);
    entry_words[1] = r_u32(entry_body + 156u);
    entry_words[2] = r_u32(entry_body + 160u);
    entry_words[3] = r_u32(entry_body + 164u);
    w_u32(entry_destination + 0xD1Cu, entry_words[0]);
    w_u32(entry_destination + 0xD20u, entry_words[1]);
    w_u32(entry_destination + 0xD24u, entry_words[2]);
    w_u32(entry_destination + 0xD28u, entry_words[3]);
    entry_destination = r_u32(0x80115D84u);
    w_u32(entry_destination + 0xD30u, 1u);
    w_u32(entry_destination + 0xD34u, 1u);
    w_u32(entry_destination + 0xD38u, 1u);
    w_u32(entry_destination + 0xD3Cu, (uint32)v190);
    w_u8(r_u32(0x80115D84u) + 0xD40u, 1u);
    sub_80018994(r_u32(0x80115D84u), 1, 6, 3);
    entry_destination = r_u32(0x80115D84u);
    entry_words[0] = r_u32(entry_body + 136u);
    entry_words[1] = r_u32(entry_body + 140u);
    entry_words[2] = r_u32(entry_body + 144u);
    entry_words[3] = r_u32(entry_body + 148u);
    w_u32(entry_destination + 0xD1Cu, entry_words[0]);
    w_u32(entry_destination + 0xD20u, entry_words[1]);
    w_u32(entry_destination + 0xD24u, entry_words[2]);
    w_u32(entry_destination + 0xD28u, entry_words[3]);
    entry_destination = r_u32(0x80115D84u);
    w_u32(entry_destination + 0xD30u, 1u);
    w_u32(entry_destination + 0xD34u, 1u);
    w_u32(entry_destination + 0xD38u, 1u);
    w_u32(entry_destination + 0xD3Cu, (uint32)v190);
    w_u8(r_u32(0x80115D84u) + 0xD40u, 1u);
    sub_80018994(r_u32(0x80115D84u), 1, 6, 2);
    entry_root = r_u32(0x80119398u);
    if (entry_root)
    {
        entry_destination = r_u32(0x80119208u);
        entry_vertex = r_u32(entry_root);
        entry_destination += (uint32)v5;
        entry_words[0] = r_u32(entry_vertex + 4u);
        entry_words[1] = r_u32(entry_vertex + 8u);
        entry_words[2] = r_u32(entry_vertex + 12u);
        entry_words[3] = r_u32(entry_vertex + 16u);
        w_u32(entry_destination + 24u, entry_words[0]);
        w_u32(entry_destination + 28u, entry_words[1]);
        w_u32(entry_destination + 32u, entry_words[2]);
        w_u32(entry_destination + 36u, entry_words[3]);
        if (r_u32(0x801191E8u))
        {
            sub_800DC8AC(0x801191C8u, 0, r_u32(0x80119208u) + (uint32)v5 + 24u);
        }
        else
        {
            entry_destination = r_u32(0x80119208u) + (uint32)v5;
            w_u32(0x801191DCu, r_u32(entry_destination + 24u));
            w_u32(0x801191E0u, 0u - r_u32(entry_destination + 28u));
            w_u32(0x801191E4u, r_u32(entry_destination + 32u));
        }
    }
    v191 = -1;
    v192 = -1;
    switch (a1)
    {
        case 2:
        case 5:
        case 11:
            if ((r_u32(0x80119194u)))
            {
                v28 = r_u32(((r_u32(0x80119194u)) + 8));
                if (v28)
                    w_u32(v7 + 4u, (uint32)(r_u32((v28 + 12))));
            }
            if ((r_u32(0x80119198u)))
            {
                v29 = r_u32(((r_u32(0x80119198u)) + 8));
                if (v29)
                    w_u32(v7 + 8u, (uint32)(r_u32((v29 + 12))));
            }
            v191 = 46603;
            v192 = 46603;
            goto LABEL_63;
        case 4:
        case 10:
            w_u32(v7 + 4u, (uint32)((r_u32(0x801191A0u))));
            if ((r_u32(0x80119194u)))
            {
                v27 = r_u32(((r_u32(0x80119194u)) + 8));
                if (v27)
                    w_u32(v7 + 8u, (uint32)(r_u32((v27 + 12))));
            }
            if (a1 == 4)
            {
                v191 = 46603;
                v192 = 46603;
            }
            goto LABEL_63;
        case 6:
        case 7:
        case 8:
        case 9:
            if ((r_u32(0x80119194u)))
            {
                v30 = r_u32(((r_u32(0x80119194u)) + 8));
                if (v30)
                    w_u32(v7 + 4u, (uint32)(r_u32((v30 + 12))));
            }
            w_u32(v7 + 8u, (uint32)(0));
            v189 = 0;
            if (a1 == 9)
            {
                camera_position[0] = (sint32)r_u32(entry_body + 48u);
            LABEL_33:
                /* TODO Mode9 has no Y producer; modes6..8 have no Z producer */
                if (a1 >= 6 && a1 <= 9)
                    sf_draft_unbound_stack_field(0x8001B584u, a1 == 9 ? 0x44u : 0x48u);
                v36 = r_u32(0x80115D84u);
                v37 = camera_position[1];
                v38 = camera_position[2];
                v39 = camera_position[3];
                w_u32(v36 + 3356u, (uint32)(camera_position[0]));
                w_u32(v36 + 3360u, (uint32)(v37));
                w_u32(v36 + 3364u, (uint32)(v38));
                w_u32(v36 + 3368u, (uint32)(v39));
                v40 = r_u32(0x80115D84u);
                w_u32(v40 + 3376u, (uint32)(1));
                w_u32(v40 + 3380u, (uint32)(v189));
                w_u32(v40 + 3384u, (uint32)(0));
                w_u32(v40 + 3388u, (uint32)(v190));
                w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
                sub_80018994(r_u32((0x80115D84u)), 1, 6, 1);
                goto LABEL_63;
            }
            v31 = r_u32(0x80115D84u);
            v189 = 1;
            if (r_u32(v31 + 2380u))
            {
                scale_values[0] = (sint32)r_u32(v31 + 0x954u);
                v32 = (sint32)r_u32(v31 + 0x958u);
                v33 = (sint32)r_u32(v31 + 0x95Cu);
                v34 = (sint32)r_u32(v31 + 0x960u);
                scale_values[1] = v32;
                scale_values[2] = v33;
                scale_values[3] = v34;
                scale_y_ready = true;
            }
            else
            {
                scale_values[0] = (sint32)r_u32(v31 + 0x954u);
            }
            v35 = (sint32)r_u32(entry_body + 48u);
            if ((sint32)((uint32)v35 - (uint32)scale_values[0]) < 0)
            {
                if ((sint32)((uint32)scale_values[0] - (uint32)v35) < 114)
                {
                LABEL_30:
                    camera_position[0] = (sint32)r_u32(entry_body + 48u);
                LABEL_32:
                    /* TODO Inactive camera does not initialize the scale Y word */
                    if (!scale_y_ready)
                        sf_draft_unbound_stack_field(0x8001B584u, 0x54u);
                    camera_position[1] = scale_values[1];
                    goto LABEL_33;
                }
            }
            else if ((sint32)((uint32)v35 - (uint32)scale_values[0]) < 114)
            {
                goto LABEL_30;
            }
            camera_position[0] = scale_values[0];
            goto LABEL_32;
        case 12:
            v41 = 60u * (uint32)a1 + r_u32(0x80119208u);
            w_u32(0x801191F0u, r_u32(v41 + 12u));
            w_u32(0x80119194u, r_u32(v41 + 16u));
            w_u32(0x80119198u, r_u32(v41 + 20u));
            camera_position[0] = (sint32)r_u32(v41 + 24u);
            v42 = (sint32)r_u32(v41 + 28u);
            v43 = (sint32)r_u32(v41 + 32u);
            v44 = (sint32)r_u32(v41 + 36u);
            camera_position[1] = v42;
            camera_position[2] = v43;
            camera_position[3] = v44;
            entry_destination = r_u32(0x80119208u);
            entry_root = r_u32(0x80119208u);
            entry_destination += (uint32)v5;
            v202 = (sint32)r_u32(entry_destination + 40u);
            v45 = (sint32)r_u32(entry_destination + 44u);
            v46 = (sint32)r_u32(entry_destination + 48u);
            v47 = (sint32)r_u32(entry_destination + 52u);
            v203 = v45;
            v204 = v46;
            v205 = v47;
            entry_root += (uint32)v5;
            w_u8(0x8011921Au, r_u8(entry_root + 56u));
            v48 = r_u32(entry_root + 12u);
            if (v48 == 2)
            {
                w_u32(0x80119198u, (uint32)(0));
                w_u32(v7 + 4u, (uint32)(0x801191C8u));
                if ((r_u32(0x80119194u)))
                {
                    v58 = r_u32(((r_u32(0x80119194u)) + 8));
                    if (v58)
                        w_u32(v7 + 8u, (uint32)(r_u32((v58 + 12))));
                }
                sub_800DC8AC(0x801191C8u, 0, sf_draft_guest_address(&camera_position[0]));
                w_u32(v8 + 64u, (uint32)(0));
            }
            else if (v48 >= 3)
            {
                if (v48 == 3)
                {
                    w_u32(0x80119194u, (uint32)(0));
                    w_u32(0x80119198u, (uint32)(0));
                    w_u32(v7 + 4u, (uint32)(0x801191C8u));
                    w_u32(v7 + 8u, (uint32)(0));
                    sub_800DC8AC(0x801191C8u, 0, sf_draft_guest_address(&camera_position[0]));
                    v60 = r_u32(0x80115D84u);
                    v206 = 1;
                    v207 = 1;
                    v208 = 0;
                    v61 = v203;
                    v62 = v204;
                    v63 = v205;
                    w_u32(v60 + 3356u, (uint32)(v202));
                    w_u32(v60 + 3360u, (uint32)(v61));
                    w_u32(v60 + 3364u, (uint32)(v62));
                    w_u32(v60 + 3368u, (uint32)(v63));
                    v64 = r_u32(0x80115D84u);
                    v65 = v207;
                    v66 = v208;
                    v67 = unknown_request_word;
                    w_u32(v64 + 3376u, (uint32)(v206));
                    w_u32(v64 + 3380u, (uint32)(v65));
                    w_u32(v64 + 3384u, (uint32)(v66));
                    w_u32(v64 + 3388u, (uint32)(v67));
                    w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
                    sub_80018994(r_u32((0x80115D84u)), 2, 6, 1);
                    w_u32(v8 + 64u, (uint32)(0));
                }
                else if (v48 == 9)
                {
                    w_u32(0x80119198u, (uint32)(0));
                    if ((r_u32(0x80119194u)))
                    {
                        v68 = r_u32(((r_u32(0x80119194u)) + 8));
                        if (v68)
                            w_u32(v7 + 4u, (uint32)(r_u32((v68 + 12))));
                    }
                    w_u32(v7 + 8u, (uint32)(0));
                }
            }
            else if (v48 == 1)
            {
                w_u32(0x80119198u, (uint32)(0));
                if ((r_u32(0x80119194u)))
                {
                    v49 = r_u32(((r_u32(0x80119194u)) + 8));
                    if (v49)
                        w_u32(v7 + 4u, (uint32)(r_u32((v49 + 12))));
                }
                v50 = r_u32(0x80115D84u);
                w_u32(v7 + 8u, (uint32)(0));
                v206 = 1;
                v207 = 1;
                v208 = 0;
                v51 = v203;
                v52 = v204;
                v53 = v205;
                w_u32(v50 + 3356u, (uint32)(v202));
                w_u32(v50 + 3360u, (uint32)(v51));
                w_u32(v50 + 3364u, (uint32)(v52));
                w_u32(v50 + 3368u, (uint32)(v53));
                v54 = r_u32(0x80115D84u);
                v55 = v207;
                v56 = v208;
                v57 = unknown_request_word;
                w_u32(v54 + 3376u, (uint32)(v206));
                w_u32(v54 + 3380u, (uint32)(v55));
                w_u32(v54 + 3384u, (uint32)(v56));
                w_u32(v54 + 3388u, (uint32)(v57));
                w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
                sub_80018994(r_u32((0x80115D84u)), 2, 6, 1);
            }
            v191 = 46603;
            v192 = 46603;
            goto LABEL_63;
        default:
            if ((r_u32(0x80119194u)))
            {
                v69 = r_u32(((r_u32(0x80119194u)) + 8));
                if (v69)
                    w_u32(v7 + 4u, (uint32)(r_u32((v69 + 12))));
            }
            w_u32(v7 + 8u, (uint32)(r_u32(v7 + 4u)));
            if (a1 == 1 || a1 == 3)
            {
                v70 = r_u32(0x80115D84u);
                entry_words[0] = r_u32(entry_body + 48u);
                v71 = (sint32)r_u32(entry_body + 52u);
                v72 = (sint32)r_u32(entry_body + 56u);
                v73 = (sint32)r_u32(entry_body + 60u);
                w_u32(v70 + 3356u, (uint32)(entry_words[0]));
                w_u32(v70 + 3360u, (uint32)(v71));
                w_u32(v70 + 3364u, (uint32)(v72));
                w_u32(v70 + 3368u, (uint32)(v73));
                v74 = r_u32(0x80115D84u);
                w_u32(v74 + 3376u, (uint32)(1));
                w_u32(v74 + 3380u, (uint32)(0));
                w_u32(v74 + 3384u, (uint32)(0));
                w_u32(v74 + 3388u, (uint32)(v190));
                w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
                sub_80018994(r_u32((0x80115D84u)), 1, 6, 1);
                if (a1 == 1)
                {
                    v191 = 233016;
                    v192 = 233016;
                }
            }
            else
            {
                v192 = 139810;
                v191 = 46603;
            }
        LABEL_63:
            v75 = r_u32(0x80115D84u);
            w_u32(v75 + 3356u, (uint32)(v191));
            w_u32(v75 + 3360u, (uint32)(v192));
            w_u32(v75 + 3364u, (uint32)(-1));
            w_u32(v75 + 3368u, (uint32)(unknown_request_word));
            v76 = r_u32(0x80115D84u);
            w_u32(v76 + 3376u, (uint32)(1));
            w_u32(v76 + 3380u, (uint32)(1));
            w_u32(v76 + 3384u, (uint32)(0));
            w_u32(v76 + 3388u, (uint32)(v190));
            w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
            sub_80018994(r_u32((0x80115D84u)), 1, 6, 5);
            v78 = r_u32(0x80115D84u);
            w_u32(0x801191ECu, (uint32)(a1));
            sub_80018804(v78, r_u32(v7 + 4u), v8);
            entry_root = r_u32(0x80115D84u);
            entry_index = r_u32(v7 + 8u);
            sub_8001888C(entry_root, entry_index, v8 + 16u);
            v81 = r_u32(0x80115D84u);
            entry_words[0] = r_u32(entry_body + 32u);
            v82 = (sint32)r_u32(entry_body + 36u);
            v83 = (sint32)r_u32(entry_body + 40u);
            v84 = (sint32)r_u32(entry_body + 44u);
            w_u32(v81 + 3356u, (uint32)(entry_words[0]));
            w_u32(v81 + 3360u, (uint32)(v82));
            w_u32(v81 + 3364u, (uint32)(v83));
            w_u32(v81 + 3368u, (uint32)(v84));
            v85 = r_u32(0x80115D84u);
            w_u32(v85 + 3376u, (uint32)(1));
            w_u32(v85 + 3380u, (uint32)(1));
            w_u32(v85 + 3384u, (uint32)(1));
            w_u32(v85 + 3388u, (uint32)(v190));
            w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
            sub_80018994(r_u32((0x80115D84u)), 1, 1, 1);
            if (v11 == 11)
            {
                v87 = r_u32(0x80115D84u);
                entry_words[0] = r_u32(entry_body + 32u);
                v88 = (sint32)r_u32(entry_body + 36u);
                v89 = (sint32)r_u32(entry_body + 40u);
                v90 = (sint32)r_u32(entry_body + 44u);
                w_u32(v87 + 3356u, (uint32)(entry_words[0]));
                w_u32(v87 + 3360u, (uint32)(v88));
                w_u32(v87 + 3364u, (uint32)(v89));
                w_u32(v87 + 3368u, (uint32)(v90));
                v91 = r_u32(0x80115D84u);
                w_u32(v91 + 3376u, (uint32)(1));
                w_u32(v91 + 3380u, (uint32)(1));
                w_u32(v91 + 3384u, (uint32)(1));
                w_u32(v91 + 3388u, (uint32)(v190));
                sub_80018994(r_u32((0x80115D84u)), 1, 1, 0);
            }
            v92 = r_u32(0x80115D84u);
            entry_words[0] = r_u32(entry_body + 48u);
            v93 = (sint32)r_u32(entry_body + 52u);
            v94 = (sint32)r_u32(entry_body + 56u);
            v95 = (sint32)r_u32(entry_body + 60u);
            w_u32(v92 + 3356u, (uint32)(entry_words[0]));
            w_u32(v92 + 3360u, (uint32)(v93));
            w_u32(v92 + 3364u, (uint32)(v94));
            w_u32(v92 + 3368u, (uint32)(v95));
            v96 = r_u32(0x80115D84u);
            w_u32(v96 + 3376u, (uint32)(1));
            w_u32(v96 + 3380u, (uint32)(1));
            w_u32(v96 + 3384u, (uint32)(1));
            w_u32(v96 + 3388u, (uint32)(v190));
            w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
            sub_80018994(r_u32((0x80115D84u)), 1, 7, 1);
            if (v11 == 11)
            {
                v98 = r_u32(0x80115D84u);
                entry_words[0] = r_u32(entry_body + 48u);
                v99 = (sint32)r_u32(entry_body + 52u);
                v100 = (sint32)r_u32(entry_body + 56u);
                v101 = (sint32)r_u32(entry_body + 60u);
                w_u32(v98 + 3356u, (uint32)(entry_words[0]));
                w_u32(v98 + 3360u, (uint32)(v99));
                w_u32(v98 + 3364u, (uint32)(v100));
                w_u32(v98 + 3368u, (uint32)(v101));
                v102 = r_u32(0x80115D84u);
                w_u32(v102 + 3376u, (uint32)(1));
                w_u32(v102 + 3380u, (uint32)(1));
                w_u32(v102 + 3384u, (uint32)(1));
                w_u32(v102 + 3388u, (uint32)(v190));
                sub_80018994(r_u32((0x80115D84u)), 1, 7, 0);
            }
            v103 = r_u32((0x80115D84u));
            v104 = r_u32(v8 + 64u);
            w_u8((v103 + 3392), (uint32)(1));
            v105 = r_u32((0x80115D84u));
            w_u32((v103 + 3356), (uint32)(v104));
            sub_80018994(v105, 1, 5, 1);
            if (v11 == 11)
            {
                v107 = r_u32((0x80115D84u));
                w_u32((v107 + 3356), (uint32)(r_u32(v8 + 64u)));
                sub_80018994(v107, 1, 5, 0);
            }
            v108 = r_u32(v8 + 68u);
            if (v108 >= 0)
            {
                v109 = r_u32((0x80115D84u));
                w_u8((v109 + 3392), (uint32)(1));
                v110 = r_u32((0x80115D84u));
                w_u32((v109 + 3356), (uint32)(v108));
                sub_80018994(v110, 1, 8, 1);
            }
            v111 = r_u32(0x80115D84u);
            entry_words[0] = r_u32(entry_body + 72u);
            v112 = (sint32)r_u32(entry_body + 76u);
            v113 = (sint32)r_u32(entry_body + 80u);
            v114 = (sint32)r_u32(entry_body + 84u);
            w_u32(v111 + 3356u, (uint32)(entry_words[0]));
            w_u32(v111 + 3360u, (uint32)(v112));
            w_u32(v111 + 3364u, (uint32)(v113));
            w_u32(v111 + 3368u, (uint32)(v114));
            v115 = r_u32(0x80115D84u);
            w_u32(v115 + 3376u, (uint32)(1));
            w_u32(v115 + 3380u, (uint32)(1));
            w_u32(v115 + 3384u, (uint32)(1));
            w_u32(v115 + 3388u, (uint32)(v190));
            w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
            sub_80018994(r_u32((0x80115D84u)), 1, 6, 4);
            scale_values[0] = (r_u32(0x800101E0u));
            scale_values[1] = (r_u32(0x800101E4u));
            scale_values[2] = (r_u32(0x800101E8u));
            scale_values[3] = (r_u32(0x800101ECu));
            if ((uint32)a1 - 7u < 2u || (v117 = &scale_values[0], a1 == 6))
                v117 = 0;
            v210 = (sint32)r_u32(entry_body + 120u);
            v118 = (sint32)r_u32(entry_body + 104u);
            v119 = (sint32)r_u32(entry_body + 88u);
            v211 = v118;
            v212 = v119;
            if (entry_body + 120u != 0u)
            {
                v120 = r_u32(0x80115D84u);
                entry_words[0] = r_u32(entry_body + 120u);
                v121 = (sint32)r_u32(entry_body + 124u);
                v122 = (sint32)r_u32(entry_body + 128u);
                v123 = (sint32)r_u32(entry_body + 132u);
                w_u32(v120 + 3356u, (uint32)(entry_words[0]));
                w_u32(v120 + 3360u, (uint32)(v121));
                w_u32(v120 + 3364u, (uint32)(v122));
                w_u32(v120 + 3368u, (uint32)(v123));
                v124 = r_u32(0x80115D84u);
                w_u32(v124 + 3376u, (uint32)(1));
                w_u32(v124 + 3380u, (uint32)(1));
                w_u32(v124 + 3384u, (uint32)(1));
                w_u32(v124 + 3388u, (uint32)(v190));
                w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
                sub_80018994(r_u32((0x80115D84u)), 1, 0, 6);
                v202 = (sint32)r_u32(entry_body + 120u);
                v126 = (sint32)r_u32(entry_body + 124u);
                v127 = (sint32)r_u32(entry_body + 128u);
                v128 = (sint32)r_u32(entry_body + 132u);
                v203 = v126;
                v204 = v127;
                v205 = v128;
                if (v117)
                {
                    if (v202 > 0)
                    {
                        v129 = (sint32)((uint32)v202 * (uint32)(*v117));
                        if (v129 < 0)
                            v130 = (sint32)(0u - (uint32)((sint32)(0u - (uint32)v129) >> 12));
                        else
                            v130 = v129 >> 12;
                        v202 = v130;
                    }
                    if (v203 > 0)
                    {
                        v131 = (sint32)((uint32)v203 * (uint32)(v117[1]));
                        if (v131 < 0)
                            v132 = (sint32)(0u - (uint32)((sint32)(0u - (uint32)v131) >> 12));
                        else
                            v132 = v131 >> 12;
                        v203 = v132;
                    }
                    if (v204 > 0)
                    {
                        v133 = (sint32)((uint32)v204 * (uint32)(v117[2]));
                        if (v133 < 0)
                            v134 = (sint32)(0u - (uint32)((sint32)(0u - (uint32)v133) >> 12));
                        else
                            v134 = v133 >> 12;
                        v204 = v134;
                    }
                }
                v135 = r_u32(0x80115D84u);
                v136 = v203;
                v137 = v204;
                v138 = v205;
                w_u32(v135 + 3356u, (uint32)(v202));
                w_u32(v135 + 3360u, (uint32)(v136));
                w_u32(v135 + 3364u, (uint32)(v137));
                w_u32(v135 + 3368u, (uint32)(v138));
                v139 = r_u32(0x80115D84u);
                w_u32(v139 + 3376u, (uint32)(1));
                w_u32(v139 + 3380u, (uint32)(1));
                w_u32(v139 + 3384u, (uint32)(1));
                w_u32(v139 + 3388u, (uint32)(v190));
                w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
                sub_80018994(r_u32((0x80115D84u)), 1, 3, 6);
            }
            v206 = (r_u32(0x800101C0u));
            v207 = (r_u32(0x800101C4u));
            v208 = (r_u32(0x800101C8u));
            v209 = (r_u32(0x800101CCu));
            v140 = r_u32(0x80115D84u);
            v202 = v210;
            v203 = v210;
            v204 = v210;
            v141 = v210;
            v142 = v210;
            v143 = v205;
            w_u32(v140 + 3356u, (uint32)(v210));
            w_u32(v140 + 3360u, (uint32)(v141));
            w_u32(v140 + 3364u, (uint32)(v142));
            w_u32(v140 + 3368u, (uint32)(v143));
            v144 = r_u32(0x80115D84u);
            v145 = v207;
            v146 = v208;
            v147 = v209;
            w_u32(v144 + 3376u, (uint32)(v206));
            w_u32(v144 + 3380u, (uint32)(v145));
            w_u32(v144 + 3384u, (uint32)(v146));
            w_u32(v144 + 3388u, (uint32)(v147));
            w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
            sub_80018994(r_u32((0x80115D84u)), 1, 2, 6);
            if (entry_body + 104u != 0u)
            {
                v149 = r_u32(0x80115D84u);
                entry_words[0] = r_u32(entry_body + 104u);
                v150 = (sint32)r_u32(entry_body + 108u);
                v151 = (sint32)r_u32(entry_body + 112u);
                v152 = (sint32)r_u32(entry_body + 116u);
                w_u32(v149 + 3356u, (uint32)(entry_words[0]));
                w_u32(v149 + 3360u, (uint32)(v150));
                w_u32(v149 + 3364u, (uint32)(v151));
                w_u32(v149 + 3368u, (uint32)(v152));
                v153 = r_u32(0x80115D84u);
                w_u32(v153 + 3376u, (uint32)(1));
                w_u32(v153 + 3380u, (uint32)(1));
                w_u32(v153 + 3384u, (uint32)(1));
                w_u32(v153 + 3388u, (uint32)(v190));
                w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
                sub_80018994(r_u32((0x80115D84u)), 1, 0, 5);
                v155 = r_u32(0x80115D84u);
                entry_words[0] = r_u32(entry_body + 104u);
                v156 = (sint32)r_u32(entry_body + 108u);
                v157 = (sint32)r_u32(entry_body + 112u);
                v158 = (sint32)r_u32(entry_body + 116u);
                w_u32(v155 + 3356u, (uint32)(entry_words[0]));
                w_u32(v155 + 3360u, (uint32)(v156));
                w_u32(v155 + 3364u, (uint32)(v157));
                w_u32(v155 + 3368u, (uint32)(v158));
                v159 = r_u32(0x80115D84u);
                w_u32(v159 + 3376u, (uint32)(1));
                w_u32(v159 + 3380u, (uint32)(1));
                w_u32(v159 + 3384u, (uint32)(1));
                w_u32(v159 + 3388u, (uint32)(v190));
                w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
                sub_80018994(r_u32((0x80115D84u)), 1, 3, 5);
            }
            v206 = (r_u32(0x800101C0u));
            v207 = (r_u32(0x800101C4u));
            v208 = (r_u32(0x800101C8u));
            v209 = (r_u32(0x800101CCu));
            v160 = r_u32(0x80115D84u);
            v202 = v211;
            v203 = v211;
            v204 = v211;
            v161 = v211;
            v162 = v211;
            v163 = v205;
            w_u32(v160 + 3356u, (uint32)(v211));
            w_u32(v160 + 3360u, (uint32)(v161));
            w_u32(v160 + 3364u, (uint32)(v162));
            w_u32(v160 + 3368u, (uint32)(v163));
            v164 = r_u32(0x80115D84u);
            v165 = v207;
            v166 = v208;
            v167 = v209;
            w_u32(v164 + 3376u, (uint32)(v206));
            w_u32(v164 + 3380u, (uint32)(v165));
            w_u32(v164 + 3384u, (uint32)(v166));
            w_u32(v164 + 3388u, (uint32)(v167));
            w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
            sub_80018994(r_u32((0x80115D84u)), 1, 2, 5);
            if (entry_body + 88u != 0u)
            {
                v169 = r_u32(0x80115D84u);
                entry_words[0] = r_u32(entry_body + 88u);
                v170 = (sint32)r_u32(entry_body + 92u);
                v171 = (sint32)r_u32(entry_body + 96u);
                v172 = (sint32)r_u32(entry_body + 100u);
                w_u32(v169 + 3356u, (uint32)(entry_words[0]));
                w_u32(v169 + 3360u, (uint32)(v170));
                w_u32(v169 + 3364u, (uint32)(v171));
                w_u32(v169 + 3368u, (uint32)(v172));
                v173 = r_u32(0x80115D84u);
                w_u32(v173 + 3376u, (uint32)(1));
                w_u32(v173 + 3380u, (uint32)(1));
                w_u32(v173 + 3384u, (uint32)(1));
                w_u32(v173 + 3388u, (uint32)(v190));
                w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
                sub_80018994(r_u32((0x80115D84u)), 1, 0, 4);
                v175 = r_u32(0x80115D84u);
                entry_words[0] = r_u32(entry_body + 88u);
                v176 = (sint32)r_u32(entry_body + 92u);
                v177 = (sint32)r_u32(entry_body + 96u);
                v178 = (sint32)r_u32(entry_body + 100u);
                w_u32(v175 + 3356u, (uint32)(entry_words[0]));
                w_u32(v175 + 3360u, (uint32)(v176));
                w_u32(v175 + 3364u, (uint32)(v177));
                w_u32(v175 + 3368u, (uint32)(v178));
                v179 = r_u32(0x80115D84u);
                w_u32(v179 + 3376u, (uint32)(1));
                w_u32(v179 + 3380u, (uint32)(1));
                w_u32(v179 + 3384u, (uint32)(1));
                w_u32(v179 + 3388u, (uint32)(v190));
                w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
                sub_80018994(r_u32((0x80115D84u)), 1, 3, 4);
            }
            v206 = (r_u32(0x800101C0u));
            v207 = (r_u32(0x800101C4u));
            v208 = (r_u32(0x800101C8u));
            v209 = (r_u32(0x800101CCu));
            v180 = r_u32(0x80115D84u);
            v202 = v212;
            v203 = v212;
            v204 = v212;
            v181 = v212;
            v182 = v212;
            v183 = v205;
            w_u32(v180 + 3356u, (uint32)(v212));
            w_u32(v180 + 3360u, (uint32)(v181));
            w_u32(v180 + 3364u, (uint32)(v182));
            w_u32(v180 + 3368u, (uint32)(v183));
            v184 = r_u32(0x80115D84u);
            v185 = v207;
            v186 = v208;
            v187 = v209;
            w_u32(v184 + 3376u, (uint32)(v206));
            w_u32(v184 + 3380u, (uint32)(v185));
            w_u32(v184 + 3384u, (uint32)(v186));
            w_u32(v184 + 3388u, (uint32)(v187));
            w_u8((r_u32((0x80115D84u)) + 3392), (uint32)(1));
            sub_80018994(r_u32((0x80115D84u)), 1, 2, 4);
            if (a3 == 1)
                sub_800201DC();
            w_u32(entry_body + 64u, (uint32)v9);
            return 1;
    }
}

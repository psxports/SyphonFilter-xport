#include "game_draft.h"
#include <stdio.h>
#include <stdlib.h>

static uint32 sf_draft_missing_padding_800654F4(uint32 offset)
{
    fprintf(stderr, "TODO 800654F4 original unwritten padding +%X\n", offset);
    abort();
}

uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);

/* TODO Resolve external dependency signatures */
uint32 sub_80056F8C();

sint32 sub_80072274(sint32 a1, sint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80072274u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
    _DWORD *a4_view = SF_DRAFT_PTR(_DWORD, a4);
    _DWORD *v6;
    int v8;
    _DWORD *v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int result;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    int v29;
    int v30;
    int v31;
    int v32;
    int v33;
    int v34;
    int v35;
    int v36;

    v6 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(a1 + 12));
    v16 = v6[24];
    v17 = v6[25];
    v18 = v6[26];
    v19 = v6[27];
    v23 = v6[28];
    v24 = v6[29];
    v25 = v6[30];
    v26 = v6[31];
    v8 = v6[65];
    if (v8 == 4096)
    {
        v27 = v6[24];
        v28 = v6[25];
        v29 = v6[26];
    }
    else
    {
        v27 = sub_800C6D4C(v16, v8);
        v28 = sub_800C6D4C(v17, v8);
        v29 = sub_800C6D4C(v18, v8);
    }
    if (a2 && (v9 = *(_DWORD **)(a2 + 12)) != 0)
    {
        v20 = v9[24];
        v21 = v9[25];
        v22 = v9[26];
        *a3_view = v16 - v20;
        a3_view[1] = v17 - v21;
        a3_view[2] = v18 - v22;
        v10 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 12)) + 260));
        if (v10 <= 0)
        {
            if (v8 == 4096)
            {
                v33 = v20;
                v34 = v21;
                v35 = v22;
                goto LABEL_16;
            }
            v33 = sub_800C6D4C(v20, v8);
            v11 = sub_800C6D4C(v21, v8);
            v12 = v22;
            v13 = v8;
        }
        else
        {
            if (v10 == 4096)
            {
                v30 = v20;
                v31 = v21;
                v32 = v22;
            }
            else
            {
                v30 = sub_800C6D4C(v20, v10);
                v31 = sub_800C6D4C(v21, v10);
                v32 = sub_800C6D4C(v22, v10);
            }
            v36 = sub_800C6D90(v8, v8 + v10);
            v33 = sub_800C6D4C(v27 + v30, v36);
            v11 = sub_800C6D4C(v28 + v31, v36);
            v12 = v29 + v32;
            v13 = v36;
        }
        v34 = v11;
        v35 = sub_800C6D4C(v12, v13);
    }
    else
    {
        *a3_view = v16;
        a3_view[1] = v17;
        a3_view[2] = v18;
        a3_view[3] = v19;
        v33 = 0;
        v34 = 0;
        v35 = 0;
    }
LABEL_16:
    if (v8 == 4096)
    {
        *a4_view = v23;
        a4_view[1] = v24;
        a4_view[2] = v25;
        a4_view[3] = v26;
    }
    else
    {
        *a4_view = sub_800C6D4C(v23, v8);
        a4_view[1] = sub_800C6D4C(v24, v8);
        a4_view[2] = sub_800C6D4C(v25, v8);
    }
    *a4_view -= v33 - v27;
    v14 = a4_view[2];
    a4_view[1] -= v34 - v28;
    result = 1;
    a4_view[2] = v14 - (v35 - v29);
    return result;
}

sint32 sub_8005A694(sint32 a1)
{
    FUNCTION_MARKER(0x8005A694u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    char v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v18;

    v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
    v4 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
    v5 = v4 & 3;
    if ((v4 & 0x4000) != 0)
    {
        v6 = 6;
        if (**(__int16 **)(a1 + 20) >= 0)
            goto LABEL_47;
        v5 = v4 & 3;
    }
    if (!v5)
    {
        v7 = *SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 8;
        if ((v4 & 0x8000000) == 0 || (v7 = v4 & 8, !*SF_DRAFT_PTR(_BYTE, (v3 + 72))))
        {
            if (!v7)
            {
                v6 = 6;
                if (*SF_DRAFT_PTR(_BYTE, (v3 + 72)))
                {
                    v6 = 7;
                    if (*SF_DRAFT_PTR(__int16, (v3 + 44)) < 800 && (*SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x2000) != 0 && *(uint8 *)(v3 + 71) >= 0x50u && (*SF_DRAFT_PTR(_WORD, (a1 + 2)) & 1) != 0 && !*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3252)))
                    {
                        v6 = 6;
                    }
                }
                goto LABEL_47;
            }
        }
    }
    v6 = 7;
    if ((*SF_DRAFT_PTR(uint16, 0x80130C88u)) != 13)
    {
    LABEL_47:
        *SF_DRAFT_PTR(_BYTE, (v3 + 70)) = v6;
        return v6;
    }
    v8 = **(__int16 **)(a1 + 20);
    v18 = 3200;
    if (v8 >= 0)
        sub_800E0364(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E660u))), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * v8 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 12))), sf_draft_guest_address(&v18));
    v9 = 76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    if (!*SF_DRAFT_PTR(_BYTE, (v9 + 36)))
    {
        v10 = *SF_DRAFT_PTR(_DWORD, (v9 + 36)) & 0x3000;
        if (v10 != 4096 && v10 != 0x2000 && (v18 < 480 || (int)(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 20)) + 212)) & 0xFFFF3FFF) >= 2744))
        {
            if (**(__int16 **)(a1 + 20) >= 0)
            {
                v11 = *(uint8 *)(SF_DRAFT_GP + 2912);
                *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 912)) = 1;
                v6 = 5;
                if (!v11)
                {
                    v12 = sub_800EC8F4();
                    if ((v12 & 0xFu) < 0xD)
                        sub_8006C620(v12 & 1 | 0x120, a1, 0);
                    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2912)) = 1;
                }
                goto LABEL_30;
            }
            goto LABEL_23;
        }
    }
    if (**(__int16 **)(a1 + 20) < 0 || v18 >= 1601)
    {
    LABEL_23:
        (*SF_DRAFT_PTR(uint32, 0x8011CEB8u)) = (*SF_DRAFT_PTR(uint32, 0x8011E660u)) - (*SF_DRAFT_PTR(uint32, 0x8011E650u));
        (*SF_DRAFT_PTR(uint32, 0x8011CEC0u)) = (*SF_DRAFT_PTR(uint32, 0x8011E668u)) - (*SF_DRAFT_PTR(uint32, 0x8011E658u));
        (*SF_DRAFT_PTR(uint32, 0x8011CEBCu)) = 0;
        sub_800C720C(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011CEB8u))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011CEB8u))));
        if ((*SF_DRAFT_PTR(uint32, 0x8011CEB8u)) * *SF_DRAFT_PTR(_DWORD, v3) + (*SF_DRAFT_PTR(uint32, 0x8011CEC0u)) * *SF_DRAFT_PTR(_DWORD, (v3 + 8)) < 0 || *SF_DRAFT_PTR(__int16, (v3 + 44)) < 320)
        {
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 912)) = -1;
            v6 = 7;
            goto LABEL_30;
        }
    }
    v13 = *SF_DRAFT_PTR(__int16, (v3 + 44));
    if (v13 < 1601)
    {
        v6 = 7;
        if (v13 >= 641)
        {
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 912)) = 1;
            v6 = 6;
        }
    }
    else
    {
        v6 = 5;
    }
LABEL_30:
    v14 = 76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    if (*SF_DRAFT_PTR(_BYTE, (v14 + 36)) || (v15 = *SF_DRAFT_PTR(_DWORD, (v14 + 36)) & 0x3000, v15 == 4096) || v15 == 0x2000)
    {
        if (*SF_DRAFT_PTR(int, (SF_DRAFT_GP + 912)) >= 0)
            goto LABEL_47;
    }
    v16 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 912));
    if (v16 > 0)
    {
        if (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 8)) != 2 && (*SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x10000) == 0)
        {
            sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), 10);
            *SF_DRAFT_PTR(_DWORD, (v3 + 32)) |= 0x10000u;
        }
        goto LABEL_47;
    }
    if (v16 >= 0)
        goto LABEL_47;
    sub_80059108(a1);
    *SF_DRAFT_PTR(_BYTE, (v3 + 70)) = v6;
    return v6;
}

sint32 sub_80045F84(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80045F84u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v4;
    int v5;
    int *v6;
    int v7;
    int *v8;
    int v9;
    char v10;
    int *v11;
    int v12;
    int *v13;
    int *v14;
    int *v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int *v22;
    int result;
    int v24;
    int v25;
    int v26;

    int *v28;
    int *v29;
    int *v30;
    int v31;
    int v32;
    int v33;
    int v34;
    int v35;
    int v36;
    int *v37;
    int v38;

    v4 = -1;
    v5 = 0;
    v6 = SF_DRAFT_PTR(int, 0x8011C97Cu);
    v7 = 0;
    do
    {
        v8 = &SF_DRAFT_PTR(uint32, 0x8012B828u)[v5];
        if (*v8 == a1)
        {
            v9 = SF_DRAFT_PTR(uint32, 0x80127CE8u)[v5];
            v10 = *SF_DRAFT_PTR(_BYTE, (v9 + 10));
            *SF_DRAFT_PTR(_DWORD, (v9 + 24)) = 0;
            *SF_DRAFT_PTR(_BYTE, (v9 + 9)) = 17;
            *SF_DRAFT_PTR(_DWORD, (v9 + 24)) = 0;
            *SF_DRAFT_PTR(_BYTE, (v9 + 10)) = v10 & 0xEF;
            if (!a2)
            {
                v11 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
                *v8 = (-1);
                *SF_DRAFT_PTR(_DWORD, (v9 + 12)) = 0;
                sub_800C8218((*v11), v9);
                v6 += 9;
                goto LABEL_16;
            }
            v12 = sub_800CCCD4((*SF_DRAFT_PTR(_DWORD, (v9 + 12)) + 20));
            v13 = v6;
            if (v12)
            {
                v4 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v12 + 16)) + 32)) + 2));
                *v8 = (v4);
                v14 = SF_DRAFT_PTR(int, *(int **)(v9 + 12));
                v15 = v14 + 8;
                do
                {
                    v16 = v14[1];
                    v17 = v14[2];
                    v18 = v14[3];
                    *v13 = (*v14);
                    v13[1] = v16;
                    v13[2] = v17;
                    v13[3] = v18;
                    v14 += 4;
                    v13 += 4;
                } while (v14 != v15);
                *v13 = (*v14);
                SF_DRAFT_PTR(uint32, 0x8011C99Cu)[v7] = 0;
                *SF_DRAFT_PTR(_DWORD, (v9 + 12)) = sf_draft_guest_address(v6);
                *(_WORD *)v6 = 0;
                *((_WORD *)v6 + 6) = 0;
                *((_WORD *)v6 + 4) = 0;
                *((_WORD *)v6 + 5) = 0;
                sub_800EA514(sf_draft_guest_address(v6), sf_draft_guest_address(v6));
                v6[6] = (0u - (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 300)) + 40));
                v19 = 76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                LOWORD(v20) = *(uint8 *)(v19 + 36);
                if (!*SF_DRAFT_PTR(_BYTE, (v19 + 36)))
                {
                    v21 = *SF_DRAFT_PTR(_DWORD, (v19 + 36)) & 0x3000;
                    if (v21 == 4096)
                        LOWORD(v20) = 19;
                    else
                        v20 = v21 == 0x2000 ? 0x14 : 0;
                }
                *SF_DRAFT_PTR(_WORD, (v9 + 22)) = v20;
            }
            else
            {
                v22 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
                *v8 = (-1);
                *SF_DRAFT_PTR(_DWORD, (v9 + 12)) = 0;
                sub_800C8218((*v22), v9);
            }
            *SF_DRAFT_PTR(_BYTE, (76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) = 0;
        }
        v6 += 9;
    LABEL_16:
        ++v5;
        v7 += 9;
    } while (v5 < 30);
    result = a2;
    if (a2)
    {
        v24 = *SF_DRAFT_PTR(__int16, (a1 + 2));
        if (v24 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (result = *SF_DRAFT_PTR(_DWORD, (76 * v24 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) & 0x4000) != 0)
        {
            v25 = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
            result = *SF_DRAFT_PTR(__int16, (v25 + 6));
            if (*SF_DRAFT_PTR(_WORD, (v25 + 6)))
            {
                result = *SF_DRAFT_PTR(__int16, (v25 + 8));
                if (result <= 0)
                {
                    if (v4 >= 0)
                        goto LABEL_26;
                    result = sub_800CCCD4((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 20));
                    if (result)
                    {
                        result = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (result + 16)) + 32));
                        v4 = *SF_DRAFT_PTR(__int16, (result + 2));
                    }
                    if (v4 >= 0)
                    {
                    LABEL_26:
                        v26 = sub_80045B10(v4, sf_draft_guest_address(&v38));
                        v28 = SF_DRAFT_PTR(int, *(int **)(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 52));
                        v29 = &SF_DRAFT_PTR(uint32, 0x8011C97Cu)[9 * v38];
                        v30 = v28 + 8;
                        do
                        {
                            v31 = v28[1];
                            v32 = v28[2];
                            v33 = v28[3];
                            *v29 = (*v28);
                            v29[1] = v31;
                            v29[2] = v32;
                            v29[3] = v33;
                            v28 += 4;
                            v29 += 4;
                        } while (v28 != v30);
                        *v29 = (*v28);
                        v34 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 300));
                        v35 = 9 * v38;
                        SF_DRAFT_PTR(uint32, 0x8011C99Cu)[v35] = 0;
                        SF_DRAFT_PTR(uint32, 0x8011C994u)[v35] = -(v34 + 40);
                        *SF_DRAFT_PTR(_WORD, (v26 + 22)) = 128;
                        v36 = *SF_DRAFT_PTR(__int16, (a1 + 2));
                        if (v36 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
                            *SF_DRAFT_PTR(_DWORD, (76 * v36 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) &= ~0x4000u;
                        v37 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
                        *SF_DRAFT_PTR(_DWORD, (v26 + 16)) = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3192));
                        return sub_800C818C(*v37, v26);
                    }
                }
            }
        }
    }
    return result;
}

sint32 sub_8001E350(void)
{
    union
    {
        uint32 words[8];
        uint16 halves[16];
    } matrix;

    uint32 camera, index, orientation[4], rotation_flag, scale_flag;
    uint32 rotation_x, rotation_y, rotation_z, scale, base_flag;
    uint32 offsets[3], position[4], base[4], current[4];
    sint16 angles[3], basis[3];
    sint32 delta[3], length;
    uint32 has_fourth = 0u;
    FUNCTION_MARKER(0x8001E350u, "SCUS_942.40");
    camera = r_u32(0x80115D84u);
    for (index = 0u; index < 4u; ++index)
        orientation[index] = r_u32(0x800101D0u + 4u * index);
    rotation_flag = r_u32(camera + 0x94Cu);
    rotation_x = r_u32(camera + 0x954u);
    /* TODO Inactive rotation leaves original Y/Z words SP+24/28 unwritten */
    if (!rotation_flag)
        sf_draft_unbound_stack_field(0x8001E350u, 0x24u);
    rotation_y = r_u32(camera + 0x958u);
    rotation_z = r_u32(camera + 0x95Cu);
    (void)r_u32(camera + 0x960u);
    angles[0] = (sint16)(0u - rotation_x);
    angles[1] = (sint16)rotation_y;
    angles[2] = (sint16)(0u - rotation_z);
    sub_800EBE94(sf_draft_guest_address(angles), sf_draft_guest_address(&matrix));
    basis[0] = (sint16)matrix.halves[2];
    camera = r_u32(0x80115D84u);
    matrix.halves[1] = (uint16)(0u - (uint32)matrix.halves[1]);
    matrix.halves[5] = (uint16)(0u - (uint32)matrix.halves[5]);
    matrix.halves[3] = (uint16)(0u - (uint32)matrix.halves[3]);
    matrix.halves[7] = (uint16)(0u - (uint32)matrix.halves[7]);
    basis[1] = (sint16)matrix.halves[5];
    basis[2] = (sint16)matrix.halves[8];
    scale_flag = r_u32(camera + 0x808u);
    scale = r_u32(camera + 0x810u);
    if (scale_flag)
    {
        (void)r_u32(camera + 0x814u);
        (void)r_u32(camera + 0x818u);
        (void)r_u32(camera + 0x81Cu);
    }
    for (index = 0u; index < 3u; ++index)
        offsets[index] = (uint32)sub_800C6D4C(basis[index], (sint32)scale);
    sub_800189FC((sint32)r_u32(0x80115D84u), 0, 1, 1);
    camera = r_u32(0x80115D84u);
    for (index = 0u; index < 4u; ++index)
        current[index] = r_u32(camera + 0xD1Cu + 4u * index);
    for (index = 0u; index < 3u; ++index)
        position[index] = current[index] + r_u32(0x8011921Cu + 4u * index) - offsets[index];
    if (r_u32(0x801191ECu) == 1u)
    {
        camera = r_u32(0x80115D84u);
        base_flag = r_u32(camera + 0x1B4u);
        /* Original buffer reuses the transformed rotation matrix */
        base[0] = r_u32(camera + 0x1ECu);
        if (base_flag)
        {
            base[1] = r_u32(camera + 0x1F0u);
            base[2] = r_u32(camera + 0x1F4u);
            base[3] = r_u32(camera + 0x1F8u);
        }
        else
        {
            base[1] = matrix.words[1];
            base[2] = matrix.words[2];
            base[3] = matrix.words[3];
        }
        for (index = 0u; index < 3u; ++index)
            delta[index] = (sint32)(base[index] - position[index]);
        sub_800D9580(sf_draft_guest_address(delta), sf_draft_guest_address(&length));
        if (length < 17)
        {
            for (index = 0u; index < 4u; ++index)
                position[index] = base[index];
            has_fourth = 1u;
        }
        else
        {
            sub_800C720C(sf_draft_guest_address(delta), sf_draft_guest_address(delta));
            for (index = 0u; index < 3u; ++index)
                delta[index] = sub_800C6D4C(delta[index], 16);
            for (index = 0u; index < 3u; ++index)
                position[index] += (uint32)delta[index];
        }
    }
    camera = r_u32(0x80115D84u);
    orientation[0] = orientation[1] = orientation[2] = 1u;
    /* Native padding is zero outside snap; reviewed request consumers use XYZ */
    if (!has_fourth)
        position[3] = 0u;
    for (index = 0u; index < 4u; ++index)
        w_u32(camera + 0xD1Cu + 4u * index, position[index]);
    camera = r_u32(0x80115D84u);
    for (index = 0u; index < 4u; ++index)
        w_u32(camera + 0xD30u + 4u * index, orientation[index]);
    w_u8(r_u32(0x80115D84u) + 0xD40u, 0u);
    sub_80018994((sint32)r_u32(0x80115D84u), 1, 0, 1);
    return 1;
}

sint32 sub_8001EE00(void)
{
    uint32 camera, timer, index, event;
    uint32 position[4], orientation[4], alternate[4], neutral[4];
    uint32 output[4] = {0};
    FUNCTION_MARKER(0x8001EE00u, "SCUS_942.40");
    if (r_u8(0x8011921Au) == 1u)
        sub_8001E8A4();
    else
    {
        sub_8001D9A4();
        sub_8001E314();
        sub_8001B51C();
        sub_8001E350();
        /* Native fourth-word padding follows the reviewed XYZ request contract */
        sub_8001E710(sf_draft_guest_address(output));
        sub_80020258();
    }
    if (r_u32(0x801191F4u) == 7u && r_u32(0x801191ECu) == 0u)
    {
        for (index = 0u; index < 4u; ++index)
            position[index] = r_u32(0x800101F0u + 4u * index);
        for (index = 0u; index < 4u; ++index)
            orientation[index] = r_u32(0x80010200u + 4u * index);
        camera = r_u32(0x80115D84u);
        for (index = 0u; index < 4u; ++index)
            alternate[index] = r_u32(0x80010210u + 4u * index);
        for (event = 0u; event < 2u; ++event)
        {
            if (event != 0u)
                camera = r_u32(0x80115D84u);
            for (index = 0u; index < 4u; ++index)
                w_u32(camera + 3356u + 4u * index, position[index]);
            camera = r_u32(0x80115D84u);
            for (index = 0u; index < 4u; ++index)
                w_u32(camera + 3376u + 4u * index, orientation[index]);
            w_u8(r_u32(0x80115D84u) + 3392u, 0u);
            sub_80018994((sint32)r_u32(0x80115D84u), 1, event == 0u ? 0 : 3, 5);
        }
        for (index = 0u; index < 4u; ++index)
            neutral[index] = r_u32(0x800101C0u + 4u * index);
        camera = r_u32(0x80115D84u);
        position[3] = 0u;
        position[0] = position[1] = position[2] = 0xFFFFFFFFu;
        for (index = 0u; index < 4u; ++index)
            w_u32(camera + 3356u + 4u * index, position[index]);
        camera = r_u32(0x80115D84u);
        for (index = 0u; index < 4u; ++index)
            w_u32(camera + 3376u + 4u * index, neutral[index]);
        w_u8(r_u32(0x80115D84u) + 3392u, 0u);
        sub_80018994((sint32)r_u32(0x80115D84u), 1, 2, 5);
        for (event = 0u; event < 2u; ++event)
        {
            camera = r_u32(0x80115D84u);
            position[3] = 0u;
            position[0] = 0u;
            position[1] = event == 0u ? 1630208u : 0xFFFFFFFFu;
            position[2] = 0u;
            for (index = 0u; index < 4u; ++index)
                w_u32(camera + 3356u + 4u * index, position[index]);
            camera = r_u32(0x80115D84u);
            for (index = 0u; index < 4u; ++index)
                w_u32(camera + 3376u + 4u * index, alternate[index]);
            w_u8(r_u32(0x80115D84u) + 3392u, 0u);
            sub_80018994((sint32)r_u32(0x80115D84u), 1, 6, event == 0u ? 4 : 5);
        }
    }
    timer = r_u32(0x80119394u);
    if ((sint32)timer > 0)
        w_u32(0x80119394u, timer - 1u);
    w_u8(0x8011921Au, 0u);
    return 1;
}

sint32 sub_800654F4(sint32 a1, sint32 a2)
{
    uint32 object = (uint32)a1, slot = (uint32)a2;
    uint32 routes, state, position, flags, result, fourth;
    sint32 first[3], second[3], origin[3], direction[3], neighbour, i;
    uint32 handle;

    FUNCTION_MARKER(0x800654F4u, "SCUS_942.40");
    w_u8(r_u32(object + 28u) + 77u, (uint8)slot);
    sub_80032784(a1, (sint32)(0x8011CF28u + 216u * slot), 2, 2);
    w_u16(r_u32(object + 20u) + 2u, 1);
    w_u32(r_u32(object + 20u) + 180u, 0);
    w_u32(r_u32(object + 20u) + 184u, 0);
    w_u32(object + 12u, 0x8011D438u + 424u * slot);
    sub_80048884(a1, 0, 0, 0, 0);
    w_u32(r_u32(object + 12u) + 408u, 0x8011DE28u + 344u * slot);
    sub_8004A240(a1, 30144, 99584, 4096, 819, 819);
    sub_800223E0(a1, -1, 1);
    sub_8006E0D8(a1, (sint32)0x80000001u, 0, 0, -1, -1);
    w_u32(0x8011E638u + 4u * slot, 160);
    sub_80017140((sint16)r_u16(object + 2u), sf_draft_guest_address(&handle), 0x80116798u);

    position = r_u8(r_u32(object + 28u) + 68u);
    routes = r_u32(SF_DRAFT_GP + 2864u);
    first[0] = (sint16)r_u16(routes + 12u * position);
    position = r_u8(r_u32(object + 28u) + 68u);
    first[1] = (sint16)r_u16(routes + 12u * position + 2u);
    position = r_u8(r_u32(object + 28u) + 68u);
    first[2] = (sint16)r_u16(routes + 12u * position + 4u);
    position = r_u8(r_u32(object + 28u) + 67u);
    second[0] = (sint16)r_u16(routes + 12u * position);
    position = r_u8(r_u32(object + 28u) + 67u);
    second[1] = (sint16)r_u16(routes + 12u * position + 2u);
    position = r_u8(r_u32(object + 28u) + 67u);
    second[2] = (sint16)r_u16(routes + 12u * position + 4u);
    state = r_u32(r_u32(object + 12u) + 408u);
    w_u8(state + 68u, 1);
    state = r_u32(r_u32(object + 12u) + 408u);
    /* TODO Original first route fourth word is read before publication */
    fourth = sf_draft_missing_padding_800654F4(0x2Cu);
    w_u32(state + 72u, (uint32)first[0]);
    w_u32(state + 76u, (uint32)first[1]);
    w_u32(state + 80u, (uint32)first[2]);
    w_u32(state + 84u, fourth);
    state = r_u32(r_u32(object + 12u) + 408u);
    /* TODO Original second route fourth word is read before publication */
    fourth = sf_draft_missing_padding_800654F4(0x3Cu);
    w_u32(state + 88u, (uint32)second[0]);
    w_u32(state + 92u, (uint32)second[1]);
    w_u32(state + 96u, (uint32)second[2]);
    w_u32(state + 100u, fourth);
    state = r_u32(object + 28u);
    if ((r_u32(state + 32u) & 0x20u) && !r_u8(state + 67u))
    {
        routes = r_u32(SF_DRAFT_GP + 2864u);
        origin[0] = (sint16)r_u16(routes);
        origin[1] = (sint16)r_u16(routes + 2u);
        origin[2] = (sint16)r_u16(routes + 4u);
        neighbour = 0;
        for (i = 0; i < 3; ++i)
        {
            neighbour = (sint8)r_u8(routes + 8u + (uint32)i);
            if (neighbour > 0)
                break;
        }
        if (neighbour <= 0)
        {
            /* TODO Original failed neighbour search leaves X/Z SP+58/60 unwritten; Y is set to zero */
            (void)sf_draft_missing_padding_800654F4(0x58u);
        }
        position = routes + 12u * (uint32)neighbour;
        direction[0] = (sint16)r_u16(position);
        direction[1] = (sint16)r_u16(position + 2u);
        direction[2] = (sint16)r_u16(position + 4u);
        direction[1] = 0;
        direction[0] = (sint32)((uint32)origin[0] - (uint32)direction[0]);
        direction[2] = (sint32)((uint32)origin[2] - (uint32)direction[2]);
        sub_800DD0DC((sint32)r_u32(r_u32(object + 8u) + 12u), 0, sf_draft_guest_address(direction), 0);
    }
    state = r_u32(object + 28u);
    flags = r_u32(state + 32u);
    w_u32(state + 32u, flags & ~0x400u);
    result = r_u32(object + 28u);
    w_u8(result + 69u, 0);
    w_u8(0x8011678Cu + slot, 0);
    return (sint32)result;
}

sint32 sub_80029924(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80029924u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint8 *a2_view = SF_DRAFT_PTR(uint8, a2);
    int v3;
    int v4;
    int v5;
    uint8 v6;
    int v7;
    int v8;
    int v9;
    _DWORD *v10;
    _BYTE *v11;
    int v12;
    int v13;
    int v14;
    void (*v15)(_DWORD, int);
    int v16;
    int v17;
    int *v18;
    void (*v19)(_DWORD, _DWORD);
    int result;
    uint8 *v21;
    int v23;
    int v25;
    uint8 v26;
    char v27;

    v21 = (uint8 *)(a2_view);
    v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
    v4 = *SF_DRAFT_PTR(_DWORD, (v3 + 12)) + 8;
    v25 = *SF_DRAFT_PTR(_DWORD, (v3 + 20));
    do
    {
        v26 = 0;
        v23 = 0;
        if (*v21)
        {
            do
            {
                v27 = 0;
                v5 = *(_DWORD *)(4 * v23 + *((_DWORD *)v21 + 1));
                v6 = 0;
                if (v5)
                {
                    v7 = 0;
                    v8 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
                    v9 = *SF_DRAFT_PTR(_DWORD, (v8 + 16));
                    SF_DRAFT_PTR(uint8, 0x80119440u)[v5] = 0;
                    v10 = SF_DRAFT_PTR(_DWORD, (v9 + 44 * v5));
                    v11 = SF_DRAFT_PTR(_BYTE, (v8 + 8));
                    if (v10[6])
                        v7 = sub_800287AC(a1, sf_draft_guest_address(v10), v8 + 8);
                    *SF_DRAFT_PTR(_DWORD, v4) = -1;
                    v12 = 0;
                    v13 = v4;
                    while (*SF_DRAFT_PTR(_DWORD, (v13 + 4)) == 255 || *SF_DRAFT_PTR(_DWORD, (v13 + 4)) != *((uint8 *)sub_800282C4(sf_draft_guest_address(v10), ((uint8)v11[1]), v7) + 6) && *SF_DRAFT_PTR(_DWORD, (v13 + 4)) != *((uint8 *)sub_800282C4(sf_draft_guest_address(v10), ((uint8)v11[1]), v7) + 7) && *SF_DRAFT_PTR(_DWORD, (v13 + 4)) != *((uint8 *)sub_800282C4(sf_draft_guest_address(v10), ((uint8)v11[1]), v7) + 8))
                    {
                        ++v12;
                        v13 += 4;
                        if (v12 >= 3)
                            goto LABEL_13;
                    }
                    *SF_DRAFT_PTR(_DWORD, v4) = v12;
                LABEL_13:
                    if (sub_800283E0(a1, sf_draft_guest_address(v10), sf_draft_guest_address(v11)))
                    {
                        sub_80029048(a1, sf_draft_guest_address(v10), sf_draft_guest_address(v11), v7);
                        sub_800284C8(a1, sf_draft_guest_address(v10), sf_draft_guest_address(v11), v7);
                        if (!v25 || *SF_DRAFT_PTR(_DWORD, v4) == -1 || *SF_DRAFT_PTR(_DWORD, (4 * *SF_DRAFT_PTR(_DWORD, v4) + v4 + 16)) != 1)
                        {
                            v27 = 1;
                            v6 = 1;
                        }
                        v14 = v6;
                        if (v27)
                        {
                            v15 = (void (*)(_DWORD, int))v10[7];
                            if (v15)
                                v15(*SF_DRAFT_PTR(__int16, (a1 + 2)), v5);
                            v14 = v6;
                        }
                        if (v14 && v10[8])
                            sub_80015364((v10[8]), 2u, (*SF_DRAFT_PTR(__int16, (a1 + 2))), (*SF_DRAFT_PTR(__int16, (a1 + 2))), 0, 0, 0, 0);
                        v26 = 1;
                        *(_DWORD *)(4 * v23 + *((_DWORD *)v21 + 1)) = 0;
                    }
                    if (*SF_DRAFT_PTR(_WORD, (v4 + 100)))
                    {
                        v16 = 0;
                        if (*SF_DRAFT_PTR(__int16, (v4 + 100)) > 0)
                        {
                            v17 = 104;
                            do
                            {
                                v18 = SF_DRAFT_PTR(int, sub_800282C4((*SF_DRAFT_PTR(_DWORD, (v4 + v17 + 16))), *(uint8 *)(v4 + v17 + 9), (*SF_DRAFT_PTR(_DWORD, (v4 + v17 + 12)))));
                                v19 = (void (*)(_DWORD, _DWORD))v18[4];
                                if (v19)
                                    v19(*SF_DRAFT_PTR(__int16, (v4 + v17)), *(uint8 *)(*SF_DRAFT_PTR(_DWORD, (v4 + v17 + 16)) + 4));
                                if (*((_BYTE *)v18 + 20))
                                    sub_80015364((*((_BYTE *)v18 + 20)), 5u, (*SF_DRAFT_PTR(__int16, (a1 + 2))), (*SF_DRAFT_PTR(__int16, (a1 + 2))), 0, 0, 0, 0);
                                ++v16;
                                v17 += 20;
                            } while (v16 < *SF_DRAFT_PTR(__int16, (v4 + 100)));
                        }
                        *SF_DRAFT_PTR(_WORD, (v4 + 100)) = 0;
                    }
                }
                ++v23;
            } while (v23 < *v21);
        }
        result = v26;
    } while (v26);
    *v21 = 0;
    return result;
}

sint32 sub_80032340(sint32 a1)
{
    FUNCTION_MARKER(0x80032340u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v2;
    int v3;
    __int16 v4;
    __int16 v5;
    int v6;
    int result;
    int v8;
    int *v9;
    int v10;
    int v11;
    _DWORD *v12;
    int v13;
    int v14;
    char v15;
    int v16;
    int v17;
    int v18;
    int *v19;

    v2 = -1;
    v3 = -1;
    v4 = (*SF_DRAFT_PTR(uint32, 0x80116B54u));
    v5 = 32000;
    if (*SF_DRAFT_PTR(_BYTE, (a1 + 34)) == 2)
    {
        v6 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
        v2 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
        if (v6 && (*SF_DRAFT_PTR(_DWORD, (v6 + 32)) & 1) != 0 || (*SF_DRAFT_PTR(_DWORD, (v6 + 32)) & 0x100000) != 0 && (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 13)
            v2 = sub_80056F8C(*SF_DRAFT_PTR(__int16, (a1 + 2)));
    }
    else
    {
        result = (*SF_DRAFT_PTR(uint16, 0x801169A0u));
        v8 = 0;
        if ((*SF_DRAFT_PTR(uint16, 0x801169A0u)) >= 0)
            return result;
        (*SF_DRAFT_PTR(uint16, 0x8011690Eu)) = 0;
        v9 = SF_DRAFT_PTR(int, 0x8012F120u);
        while (1)
        {
            v10 = *v9;
            if (*v9 >= 0)
                break;
            ++v8;
            ++v9;
            if (v8 >= 6)
                goto LABEL_13;
        }
        (*SF_DRAFT_PTR(uint16, 0x8011690Eu)) = v8 + 1;
    LABEL_13:
        if (v10 >= 0)
        {
            v11 = 4 * v10;
            do
            {
                v12 = (_DWORD *)(4 * (4 * (v11 + v10) - v10) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)));
                v13 = v12[13];
                if (v13 && *SF_DRAFT_PTR(_DWORD, (v13 + 24)))
                {
                    v14 = 666;
                    if (v10 != 666)
                        v14 = *(__int16 *)(20 * *v12 + (*SF_DRAFT_PTR(uint32, 0x80116B98u)));
                    if (*SF_DRAFT_PTR(__int16, (a1 + 2)) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (v15 = 0, v14 != 53) && v14 != 76 && v14 != 92 && (!(*SF_DRAFT_PTR(uint32, 0x801169BCu)) || (uint8)sf_draft_call((uint32)((*SF_DRAFT_PTR(uint32, 0x801169BCu))), 1u, (const uint32[]){(uint32)(*SF_DRAFT_PTR(__int16, (v13 + 2)))})))
                    {
                        v15 = 1;
                    }
                    if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v13 + 24)) + 8)) <= 0 || !v15)
                        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 20)) + 4)) &= ~1u;
                    if ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 20)) + 4)) & 8) != 0)
                    {
                        v16 = *SF_DRAFT_PTR(__int16, (v13 + 2));
                        if (v16 != *SF_DRAFT_PTR(__int16, (a1 + 2)) && (!(*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) || v16 != **(__int16 **)(a1 + 20)))
                        {
                            v17 = (uint8)sub_80031F2C(a1, v16, 1);
                            if (v17 != 1)
                                goto LABEL_43;
                            if ((*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) && (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 20)) + 4)) & 0x10) == 0)
                                v17 = 2;
                            if (v17 == 1)
                            {
                                if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v13 + 28)) + 44)) < v4)
                                {
                                    v2 = *SF_DRAFT_PTR(__int16, (v13 + 2));
                                    v4 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 28)) + 44));
                                }
                            }
                            else
                            {
                            LABEL_43:
                                if ((*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) && v17 && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v13 + 28)) + 44)) < v5)
                                {
                                    v3 = *SF_DRAFT_PTR(__int16, (v13 + 2));
                                    v5 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 28)) + 44));
                                }
                            }
                        }
                    }
                }
                v18 = (*SF_DRAFT_PTR(uint16, 0x8011690Eu));
                v10 = -1;
                if ((*SF_DRAFT_PTR(uint16, 0x8011690Eu)) < 6)
                {
                    v19 = &SF_DRAFT_PTR(uint32, 0x8012F120u)[(*SF_DRAFT_PTR(uint16, 0x8011690Eu))];
                    while (1)
                    {
                        v10 = *v19;
                        if (*v19 >= 0)
                            break;
                        ++v18;
                        ++v19;
                        if (v18 >= 6)
                            goto LABEL_49;
                    }
                    (*SF_DRAFT_PTR(uint16, 0x8011690Eu)) = v18 + 1;
                }
            LABEL_49:
                v11 = 4 * v10;
            } while (v10 >= 0);
        }
    }
    if (v3 != -1)
    {
        result = v2;
        if (v2 != -1)
            return result;
        return v3;
    }
    return v2;
}

sint32 sub_80035F4C(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80035F4Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    int result;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    __int16 v21;
    __int16 v22;
    __int16 v23;
    __int16 v24;

    if (a3 == 1)
    {
        result = a3;
        if (!*a1_view)
        {
            result = a3;
            if (!a1_view[2])
            {
                *a2_view = 0;
                a2_view[1] = 0;
                a2_view[2] = 0;
                return result;
            }
        }
    }
    else
    {
        result = a3;
    }
    if (result || *a2_view || (result = a2_view[2]) != 0)
    {
        v21 = **(_WORD **)*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
        v22 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 4));
        v6 = (__int16)-*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 6));
        v23 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 12));
        v24 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 16));
        if ((v6 & 0x8000u) != 0)
            v6 = -(__int16)v6;
        v12 = v21;
        v15 = v23;
        v17 = v22;
        v20 = v24;
        if (v6 < 2896)
        {
            v17 = -v23;
            v20 = v21;
        }
        else
        {
            v12 = v24;
            v15 = -v22;
        }
        if (a3 == 1)
        {
            v13 = sub_800C6D4C(v12, (*a1_view));
            v14 = sub_800C6D4C(0, (*a1_view));
            v16 = sub_800C6D4C(v15, (*a1_view));
            v18 = sub_800C6D4C(v17, (a1_view[2]));
            v19 = sub_800C6D4C(0, (a1_view[2]));
            v7 = sub_800C6D4C(v20, (a1_view[2]));
            *a2_view = v13 + v18;
            a2_view[1] = v14 + v19;
            result = v16 + v7;
            a2_view[2] = result;
        }
        else
        {
            v8 = sub_800C6D4C((*a2_view), v12);
            v9 = sub_800C6D4C((a2_view[1]), 0);
            *a1_view = v8 + v9 + sub_800C6D4C((a2_view[2]), v15);
            a1_view[1] = 0;
            v10 = sub_800C6D4C((*a2_view), v17);
            v11 = sub_800C6D4C((a2_view[1]), 0);
            result = sub_800C6D4C((a2_view[2]), v20);
            a1_view[2] = v10 + v11 + result;
        }
    }
    else
    {
        *a1_view = 0;
        a1_view[1] = 0;
        a1_view[2] = 0;
    }
    return result;
}

sint32 sub_8006CFBC(sint32 a1)
{
    FUNCTION_MARKER(0x8006CFBCu, "SCUS_942.40");

    int v2;
    int v3;
    signed int v4;
    _DWORD *v5;
    int v6;
    int v7;
    int *v8;
    int v9;
    int v10;
    int v11;
    int *v12;
    _DWORD *v14;
    _DWORD *v15;
    int v16;
    signed int v17;
    int v18;
    int v19;
    int *v20;
    int v21;
    int v22;
    int v23;
    int *v24;
    int v25;
    int v26;
    int v27;
    int v28;
    sint32 divisor;

    struct
    {
        int v30, v31, v32;
    } position;

    struct
    {
        int v33, v34, v35;
    } other;

    int distances[6];
    int v37[4];

    v2 = 0;
    v3 = 21312;
    v4 = 0;
    v5 = SF_DRAFT_PTR(_DWORD, r_u32(r_u32((uint32)a1 + 8u) + 12u));
    v6 = 0;
    v7 = v5[5];
    v8 = SF_DRAFT_PTR(int, 0x8012F120u);
    (*SF_DRAFT_PTR(uint16, 0x8011690Eu)) = 0;
    position.v30 = v7;
    v9 = v5[6];
    v37[0] = -1;
    position.v31 = v9;
    v10 = v5[7];
    position.v31 = (sint32)(0u - (uint32)v9);
    position.v32 = v10;
    while (1)
    {
        v11 = *v8;
        if (*v8 >= 0)
            break;
        ++v6;
        ++v8;
        if (v6 >= 6)
            goto LABEL_4;
    }
    (*SF_DRAFT_PTR(uint16, 0x8011690Eu)) = v6 + 1;
LABEL_4:
    if (v11 >= 0)
    {
        v12 = distances;
        do
        {
            v14 = SF_DRAFT_PTR(_DWORD, r_u32(76u * (uint32)v11 + r_u32(0x80115CCCu) + 52u));
            v15 = SF_DRAFT_PTR(_DWORD, r_u32(v14[2] + 12u));
            other.v33 = v15[5];
            other.v34 = v15[6];
            v16 = v15[7];
            other.v34 = (sint32)(0u - (uint32)other.v34);
            other.v35 = v16;
            v17 = r_u32(v14[5] + 212u) & 0xFFFF3FFF;
            if ((r_u32(v14[7] + 32u) & 2) != 0)
                v17 = 2744;
            if (v4 < v17)
                v4 = v17;
            if (v17 > 0 && r_s16(v14[6] + 8u) > 0)
            {
                sub_800E0364(sf_draft_guest_address(&position.v30), sf_draft_guest_address(&other.v33), sf_draft_guest_address(v37));
                v18 = v37[0];
                if (v37[0] >= v3)
                {
                    *v12 = v37[0];
                }
                else
                {
                    v3 = v37[0];
                    /* The first self-store is overwritten before any observation */
                    if (v2)
                        *v12 = distances[0];
                    distances[0] = v18;
                }
                if (v2 < 5)
                {
                    ++v12;
                    ++v2;
                }
            }
            v19 = r_s16(0x8011690Eu);
            v11 = -1;
            if (v19 < 6)
            {
                v20 = SF_DRAFT_PTR(int, 0x8012F120u + 4u * (uint32)v19);
                while (1)
                {
                    v11 = *v20;
                    if (*v20 >= 0)
                        break;
                    ++v19;
                    ++v20;
                    if (v19 >= 6)
                        goto LABEL_22;
                }
                (*SF_DRAFT_PTR(uint16, 0x8011690Eu)) = v19 + 1;
            }
        LABEL_22:;
        } while (v11 >= 0);
    }
    v21 = 0;
    if (v4)
    {
        if (v4 == 1)
        {
            v21 = (*SF_DRAFT_PTR(sint8, 0x8010D01Eu));
            v22 = 0;
        }
        else if (((uint32)v4 - 1351u) >= 0x571)
        {
            if (((uint32)v4 - 2744u) >= 0x548)
            {
                v22 = 0;
                if (v4 == 4096)
                    v21 = (*SF_DRAFT_PTR(sint8, 0x8010D021u));
            }
            else
            {
                v21 = (*SF_DRAFT_PTR(sint8, 0x8010D020u));
                v22 = 0;
            }
        }
        else
        {
            v21 = (*SF_DRAFT_PTR(sint8, 0x8010D01Fu));
            v22 = 0;
        }
    }
    else
    {
        v21 = (*SF_DRAFT_PTR(sint8, 0x8010D01Du));
        v22 = 0;
    }
    v23 = 0;
    if (v2 > 0)
    {
        divisor = r_s8(0x8010D01Cu);
        v24 = distances;
        do
        {
            v25 = (sint32)(3200u - (uint32)*v24) >> 5;
            if (!divisor)
                _break(7u, 0);
            if (divisor == -1 && v25 == 0x80000000)
                _break(6u, 0);
            v26 = v25 / divisor;
            if (v26 < 0)
                v26 = 0;
            v27 = (sint32)((uint32)(sint32)r_s8(0x8010D018u + (uint32)v22) * (uint32)v26);
            if (!divisor)
                _break(7u, 0);
            if (divisor == -1 && v27 == 0x80000000)
                _break(6u, 0);
            ++v24;
            ++v22;
            v23 = (sint32)((uint32)v23 + (uint32)(v27 / divisor));
        } while (v22 < v2);
    }
    v28 = (sint32)((uint32)v21 + (uint32)v23 + r_u32(SF_DRAFT_GP + 2968u));
    if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2964)))
        v28 = (sint32)((uint32)v28 + (uint32)(sint32)r_s8(0x8010D022u));
    if (v28 < 101)
    {
        if (v28 <= 0)
            v28 = 1;
    }
    else
    {
        v28 = 100;
    }
    return sub_8006CF68(v28);
}

sint32 sub_8006B90C(sint32 a1, uint32 a2, sint32 a3, uint32 a4, uint32 a9, uint32 a10)
{
    FUNCTION_MARKER(0x8006B90Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a4_view = SF_DRAFT_PTR(int, a4);
    _WORD *a9_view = SF_DRAFT_PTR(_WORD, a9);
    _WORD *a10_view = SF_DRAFT_PTR(_WORD, a10);

    int result;
    int v14;
    _DWORD *v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    int v29;
    int v30[4];
    int v31;

    if (a3 && *SF_DRAFT_PTR(__int16, (a3 + 2)) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (result = 4, a4_view))
    {
        if (a3)
        {
            v14 = *SF_DRAFT_PTR(_DWORD, (a3 + 8));
            if (!v14)
            {
                v15 = SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a3 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
                v27 = v15[6];
                v28 = v15[7];
                v29 = v15[8];
            LABEL_10:
                v24 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 20));
                v25 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 24));
                v17 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 28));
                v25 = -v25;
                v26 = v17;
                sub_800E0220(sf_draft_guest_address(&v24), sf_draft_guest_address(&v27), sf_draft_guest_address(&v31));
                if (a1 == 4)
                    v18 = 127;
                else
                    v18 = sub_800C19D0((SF_DRAFT_PTR(uint32, 0x8011E8A0u)[a1]), (__int16)a2, -1);
                v31 -= 640;
                if (v31 < 0)
                    v31 = 0;
                if (a1 != 2 || a2 - 29 >= 4 || (v19 = 1600, (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 18))
                {
                    if (a1 != 1 || a2 - 38 >= 4 || (v19 = 1600, (*SF_DRAFT_PTR(uint16, 0x80130C88u))))
                    {
                        if (a1 || a2 != 11)
                        {
                            v19 = 3840;
                            if (a1 == 4)
                                v19 = 1920;
                        }
                        else
                        {
                            v19 = 1600;
                        }
                    }
                }
                v20 = (__int16)v18 * v31 / v19;
                LOWORD(v21) = v18 - v20;
                if ((v18 - v20) << 16 <= 0)
                {
                    LOWORD(v21) = 0;
                    if (!a1)
                        v21 = a2 < 2 ? 0x1E : 0;
                }
                sub_800DD8C0(sf_draft_guest_address(&v27), 0, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u))))), sf_draft_guest_address(v30));
                v22 = 360 * sub_800EC124(v30[0], v30[2]);
                v23 = (unsigned int)v22 >> 12;
                if (v22 < 0)
                    v23 = -(-v22 >> 12);
                result = v23 << 16;
                if ((v23 & 0x8000) != 0)
                    LOWORD(v23) = v23 + 360;
                goto LABEL_35;
            }
            v27 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 20));
            v28 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a3 + 8)) + 12)) + 24));
            v16 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a3 + 8)) + 12)) + 28));
            v28 = -v28;
        }
        else
        {
            v27 = *a4_view;
            v28 = a4_view[1];
            v16 = a4_view[2];
        }
        v29 = v16;
        goto LABEL_10;
    }
    LOWORD(v21) = -1;
    LOWORD(v23) = -1;
    if (a1 == 4)
    {
        result = *(uint8 *)(SF_DRAFT_GP + 954) << 24;
        LOWORD(v21) = *SF_DRAFT_PTR(char, (SF_DRAFT_GP + 954));
    }
LABEL_35:
    *a9_view = v21;
    *a10_view = v23;
    return result;
}

static uint32 sf_input_vector_bit(uint32 address, uint32 bit)
{
    uint32 adjusted = bit + 8u * (address & 3u);
    uint32 word = (address & ~3u) + 4u * (uint32)((sint32)adjusted >> 5);
    return r_u32(word) & (1u << (adjusted & 31u));
}

void sub_80038AB4(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80038AB4u, "SCUS_942.40");
    uint32 state = (uint32)a1, pad = (uint32)a2;
    uint32 bit = r_u32(state + 28u);
    uint32 table = r_u32(state + 96u);
    uint32 vectors = state + 100u;
    uint32 source, destination, row, column, first, second, both, mode;
    uint32 values[4];
    w_u8(state + 20u, sf_input_vector_bit(pad + 4u, bit) != 0u);
    sub_800357CC(a1, a2);
    destination = vectors;
    for (row = 0; row < 4u; ++row, destination += 60u)
    {
        w_u32(destination, 0);
        w_u32(destination + 4u, 0);
        w_u32(destination + 8u, 0);
        w_u32(destination + 40u, 0xFFFFFFFFu);
        w_u32(destination + 36u, 0xFFFFFFFFu);
    }
    sub_800358DC(pad + 12u, 0, table + 64u);
    mode = r_u32(state + 24u);
    w_u32(table + 92u, mode == 1u ? 4096u : mode == 2u ? (uint32)-4096 : 0u);
    w_u32(table + 96u, 0);
    w_u32(table + 100u, 0);
    if (r_u8(pad + 2u))
    {
        sub_800358DC(pad + 28u, 1, table + 36u);
        sub_800358DC(pad + 44u, 1, table + 8u);
    }
    else
    {
        w_u32(table + 36u, 0);
        w_u32(table + 40u, 0);
        w_u32(table + 44u, 0);
        w_u32(table + 8u, 0);
        w_u32(table + 12u, 0);
        w_u32(table + 16u, 0);
    }
    sub_80035B24(a1);
    sub_80035C04(state);
    source = table;
    for (row = 0; row < 4u; ++row, source += 28u)
    {
        destination = vectors;
        for (column = 0; column < 4u; ++column, destination += 60u)
        {
            first = sf_input_vector_bit(source, column);
            second = sf_input_vector_bit(source + 4u, column);
            both = first && second && (r_u32(source + 8u) || r_u32(source + 16u));
            if (both || (first && r_u32(source + 8u)))
            {
                values[0] = r_u32(source + 8u);
                w_u32(destination + 36u, row);
                w_u32(destination, values[0]);
            }
            if (both || (second && r_u32(source + 16u)))
            {
                values[0] = r_u32(source + 16u);
                w_u32(destination + 40u, row);
                w_u32(destination + 8u, values[0]);
            }
        }
    }
    destination = vectors;
    do
    {
        sub_800D9580(destination, destination + 32u);
        if (r_u32(destination + 32u))
            sub_800C720C(destination, destination + 16u);
        else
        {
            w_u32(destination + 16u, 0);
            w_u32(destination + 20u, 0);
            w_u32(destination + 24u, 0);
        }
        if (r_s32(destination + 32u) >= 4097)
        {
            for (column = 0; column < 4u; ++column)
                values[column] = r_u32(destination + 16u + 4u * column);
            for (column = 0; column < 4u; ++column)
                w_u32(destination + 4u * column, values[column]);
        }
        destination += 60u;
    } while ((sint32)destination < (sint32)(vectors + 240u));
    sub_80035D58(state);
    sub_80035F44(a1);
    sub_80038098(state);
    sub_800362C4(state);
    sub_80036A1C(a1);
    sub_800382B0(state);
}

sint32 sub_80075B08(uint32 a1)
{
    FUNCTION_MARKER(0x80075B08u, "SCUS_942.40");
    sint32 group_index = -3;
    sint32 sector = *SF_DRAFT_PTR(sint16, a1);
    uint32 neighbours = r_u32(0x80116A60u) + 15u * (uint32)sector + 144u;
    uint8 accepted;
    uint32 output = sf_draft_guest_address(&accepted);
    for (;; group_index = (sint32)((uint32)group_index + 1u))
    {
        uint32 group = 0, callback, mode, item, index = 0;
        uint32 descriptor[5] = {0}, count, records;
        sint32 enumerate = 0;
        if (group_index == -3)
            group = 0x80128E50u;
        else if (group_index == -2)
            group = 0x801301F8u;
        else
        {
            sint32 id = group_index == -1 ? *SF_DRAFT_PTR(sint16, a1) : r_u8(neighbours + (uint32)group_index);
            if (id < r_s32(0x801169B0u) && (group_index != -1 || id >= 0))
                group = r_u32(0x80116994u) + 60u * (uint32)id;
        }
        if (!group)
            return 1;
        callback = *SF_DRAFT_PTR(uint32, a1 + 12u);
        if (callback && r_u32(group + 20u))
            sf_draft_call(callback, 3, (const uint32[]){group + 20u, a1 + 12u, output});
        else
            accepted = 1;
        if (!accepted)
            continue;
        mode = *SF_DRAFT_PTR(uint32, a1 + 4u);
        ((uint8 *)descriptor)[4] = 1;
        ((uint8 *)descriptor)[5] = 1;
        if (group_index >= -1 && (mode == 4u || mode == 0u))
        {
            uint32 source = r_u32(group);
            enumerate = 1;
            item = sf_draft_guest_address(descriptor);
            sub_800CCA38(source, sf_draft_guest_address(&count), sf_draft_guest_address(&records));
        }
        else
            item = r_u32(group + 40u + 4u * mode);
        while (item)
        {
            if (enumerate)
            {
                sint32 found = 0;
                while (index < count)
                {
                    uint32 record = records + 72u * index;
                    descriptor[0] = record;
                    if (!mode && (r_u32(record) & 1u))
                    {
                        descriptor[3] = 0;
                        found = 1;
                        break;
                    }
                    if (mode == 4u && (r_u32(record) & 16u))
                    {
                        descriptor[3] = 0x800830ACu;
                        ((uint8 *)descriptor)[8] = (uint8)((r_u32(record) >> 9) & 1u);
                        found = 1;
                        break;
                    }
                    ++index;
                }
                if (!found)
                    break;
            }
            callback = *SF_DRAFT_PTR(uint32, a1 + 152u);
            if (callback)
            {
                callback = *SF_DRAFT_PTR(uint32, a1 + 152u);
                accepted = 0;
                sf_draft_call(callback, 3, (const uint32[]){item, a1 + 152u, output});
                callback = *SF_DRAFT_PTR(uint32, item + 12u);
                if (callback)
                {
                    uint8 flag = *SF_DRAFT_PTR(uint8, item + 8u);
                    if ((accepted && !flag) || (!accepted && flag == 1u))
                    {
                        uint32 selected_mode = *SF_DRAFT_PTR(uint32, a1 + 4u);
                        uint32 argument = *SF_DRAFT_PTR(uint32, a1 + 156u);
                        sf_draft_call(callback, 3, (const uint32[]){item, selected_mode, argument});
                    }
                }
                if (accepted && *SF_DRAFT_PTR(uint8, a1 + 8u) == 1u)
                    return 1;
            }
            if (enumerate)
                ++index;
            else
                item = *SF_DRAFT_PTR(uint32, item + 16u);
        }
    }
}

#include "game_draft.h"
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);

void sub_8006784C(sint32 a1, sint32 a2, sint32 a3, uint32 a4, uint32 a9)
{
    int v30;
    FUNCTION_MARKER(0x8006784Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a4_view = SF_DRAFT_PTR(int, a4);
    _DWORD *a9_view = SF_DRAFT_PTR(_DWORD, a9);
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int *v24;
    int v25;
    int v26;
    int v27;
    int v28;
    int v29;
    int v31;
    char v33;
    int v35;
    int v36;
    int v37;
    int v39;
    int v44;
    int v46;
    int v47;
    int v48;
    __int16 v49;
    int v51;
    __int16 *v52;
    int v53;
    int v54;
    __int16 *v55;
    int v56;
    int v57;
    __int16 *v58;
    int v59;
    int v60;
    sint32 vector_62[3];
    sint32 vector_65[3];
    sint32 vector_68[3];
    sint32 vector_71[3];
    sint32 vector_120[3];
    int v74[4];
    int v75;
    int v76;
    int v77[4];
    int v78[16];
    sint32 vertices[32];
    sint32 bounds_a[16];
    sint32 bounds_b[16];
    int v105[4];
    int v106[4];
    switch (a3)
    {
        case 1:
            if (!a2)
            {
                vector_62[0] = (sint32)(0u - (*a9_view));
                vector_62[1] = (sint32)(0u - (a9_view[1]));
                vector_62[2] = (sint32)(0u - (a9_view[2]));
                sub_8004EC5C(a1, -1, sf_draft_guest_address(a4_view), sf_draft_guest_address(&vector_62[0]));
                return;
            }
            if (!(*SF_DRAFT_PTR(uint32, 0x80115E80u)))
            {
                if (a1 < 0)
                    return;
                v13 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
                if (a1 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
                {
                    LOWORD(v15) = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
                }
                else
                {
                    v14 = 76 * *SF_DRAFT_PTR(__int16, (v13 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                    LOWORD(v15) = *SF_DRAFT_PTR(uint8, (v14 + 36));
                    if (!*SF_DRAFT_PTR(_BYTE, (v14 + 36)))
                    {
                        v16 = *SF_DRAFT_PTR(_DWORD, (v14 + 36)) & 0x3000;
                        if (v16 == 4096)
                            LOWORD(v15) = 19;
                        else
                            v15 = v16 == 0x2000 ? 0x14 : 0;
                    }
                }
                vector_71[0] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 8)) + 12)) + 20));
                vector_71[1] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 8)) + 12)) + 24));
                v17 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 8)) + 12)) + 28));
                vector_71[1] = -vector_71[1];
                vector_71[2] = v17;
                vector_68[0] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 12)) + 20));
                vector_68[1] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 12)) + 24));
                v18 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 12)) + 28));
                vector_68[1] = -vector_68[1];
                v74[0] = vector_68[0] - vector_71[0];
                v74[1] = vector_68[1] - vector_71[1];
                vector_68[2] = v18;
                v74[2] = v18 - v17;
                v19 = sub_800674E4(*SF_DRAFT_PTR(_DWORD, (a2 + 8)), sf_draft_guest_address(v74), sf_draft_guest_address(&v75), sf_draft_guest_address(&v76));
                vector_65[0] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * v19 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 24)))) + 20));
                vector_65[1] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * v19 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 24)))) + 24));
                v20 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * v19 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 24)))) + 28));
                vector_65[1] = -vector_65[1];
                vector_65[2] = v20;
                if ((uint16)(v15 - 6) >= 2u)
                {
                    sub_800CBCB8(*SF_DRAFT_PTR(_DWORD, (a2 + 8)), v19, sf_draft_guest_address(v74), sf_draft_guest_address(&vector_65[0]), 0);
                }
                else
                {
                    v21 = 0;
                    if (v76 > 0)
                    {
                        do
                            sub_800CBCB8(*SF_DRAFT_PTR(_DWORD, (a2 + 8)), *SF_DRAFT_PTR(_DWORD, (4 * v21++ + v75)), sf_draft_guest_address(v74), sf_draft_guest_address(&vector_65[0]), 0);
                        while (v21 < v76);
                        v22 = a1;
                        goto LABEL_18;
                    }
                }
                v22 = a1;
            LABEL_18:
                v23 = *SF_DRAFT_PTR(__int16, (a2 + 2));
                v24 = &vector_65[0];
                goto LABEL_25;
            }
            if (a1 < 0)
                return;
            v25 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
            vector_71[0] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v25 + 8)) + 12)) + 20));
            vector_71[1] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v25 + 8)) + 12)) + 24));
            v26 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v25 + 8)) + 12)) + 28));
            vector_71[1] = -vector_71[1];
            vector_71[2] = v26;
            vector_68[0] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 12)) + 20));
            v27 = 0;
            vector_68[1] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 12)) + 24));
            v28 = (*SF_DRAFT_PTR(uint32, 0x80115E90u));
            v29 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 12)) + 28));
            vector_68[1] = -vector_68[1];
            v77[0] = vector_68[0] - vector_71[0];
            v77[1] = vector_68[1] - vector_71[1];
            vector_68[2] = v29;
            v77[2] = v29 - v26;
            do
            {
                if ((v28 & 1) != 0)
                    sub_800CBCB8(*SF_DRAFT_PTR(_DWORD, (a2 + 8)), v27, sf_draft_guest_address(v77), sf_draft_guest_address(a4_view), 1);
                ++v27;
                v28 >>= 1;
            } while (v27 < 15);
            v22 = a1;
            v23 = *SF_DRAFT_PTR(__int16, (a2 + 2));
            v24 = a4_view;
        LABEL_25:
            sub_8004EC5C(v22, v23, sf_draft_guest_address(v24), sf_draft_guest_address(a9_view));
            return;
        case 3:
            if (a1 != -1)
            {
                sub_80057EF0(1, a1, sf_draft_guest_address(a4_view), 480);
                sub_80050ED8(a1, sf_draft_guest_address(a4_view));
                if ((sub_800EC8F4() & 3) == 0)
                    goto LABEL_48;
            }
            return;
        case 4:
            if (a1 != -1)
            {
                if (!a2 || *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a2 + 24)) + 8)) > 0)
                {
                    sub_80057EF0(1, a1, sf_draft_guest_address(a4_view), 480);
                    v33 = sub_800EC8F4();
                    sub_800513AC(sf_draft_guest_address(a4_view), 64, 0xFFFF, (v33 & 7) + 4);
                    v35 = sub_800EC8F4();
                    v36 = 2;
                    v37 = v35 % 4;
                    goto LABEL_61;
                }
                goto LABEL_34;
            }
            return;
        case 5:
            goto LABEL_58;
        case 6:
        case 22:
            if (!a2)
                return;
            v55 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a2 + 24)));
            if (v55[4] <= 0 || (*SF_DRAFT_PTR(_BYTE, (a2 + 1)) & 0x80) != 0 || v55[6] < v55[3])
                goto LABEL_77;
            if (a1 == -1)
                v56 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
            else
                v56 = a1;
            sub_80057EF0(1, v56, sf_draft_guest_address(a4_view), 3200);
            sub_800DEAE8(*SF_DRAFT_PTR(_DWORD, (a2 + 8)), 0, sf_draft_guest_address(&bounds_b[0]));
            vertices[0] = bounds_b[0];
            vertices[1] = bounds_b[1];
            vertices[2] = bounds_b[2];
            vertices[3] = bounds_b[3];
            vertices[4] = bounds_b[0] + bounds_b[4];
            vertices[5] = bounds_b[1] + bounds_b[5];
            vertices[6] = bounds_b[2] + bounds_b[6];
            vertices[8] = bounds_b[0] + bounds_b[12];
            vertices[10] = bounds_b[2] + bounds_b[14];
            vertices[12] = bounds_b[4] + bounds_b[0] + bounds_b[12];
            vertices[14] = bounds_b[6] + bounds_b[2] + bounds_b[14];
            vertices[18] = bounds_b[0] + bounds_b[4] + bounds_b[8];
            vertices[19] = bounds_b[1] + bounds_b[5] + bounds_b[9];
            vertices[20] = bounds_b[2] + bounds_b[6] + bounds_b[10];
            vertices[21] = bounds_b[0] + bounds_b[12] + bounds_b[8];
            vertices[9] = bounds_b[1] + bounds_b[13];
            vertices[13] = bounds_b[5] + bounds_b[1] + bounds_b[13];
            vertices[15] = bounds_b[0] + bounds_b[8];
            vertices[17] = bounds_b[2] + bounds_b[10];
            vertices[16] = bounds_b[1] + bounds_b[9];
            vertices[22] = bounds_b[1] + bounds_b[13] + bounds_b[9];
            vertices[23] = bounds_b[2] + bounds_b[14] + bounds_b[10];
            vertices[24] = vertices[12] + bounds_b[8];
            vertices[25] = vertices[13] + bounds_b[9];
            vertices[26] = vertices[14] + bounds_b[10];
            sub_800E2814(sf_draft_guest_address(vertices), 8, sf_draft_guest_address(v105));
            sub_80052480(a1, a2, sf_draft_guest_address(v105), sf_draft_guest_address(v106), a9);
            v54 = 4;
            goto LABEL_89;
        case 8:
            if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a2 + 24)) + 8)) > 0)
            {
                if (a1 != -1)
                    sub_80057EF0(1, a1, sf_draft_guest_address(a4_view), 32000);
                sub_8004F6DC(a1, a4, (sint32)a9, 4096, 1);
            }
            return;
        case 9:
            if (a1 == -1)
                return;
            if (a2 && (unsigned int)*SF_DRAFT_PTR(uint8, (a2 + 34)) - 7 < 2)
            {
                if (*SF_DRAFT_PTR(_BYTE, (a2 + 34)) == 8)
                {
                    sub_80051104(a1, sf_draft_guest_address(a4_view), sf_draft_guest_address(a9_view));
                    v47 = a1;
                    v48 = (int)a4_view;
                    v49 = 6400;
                }
                else
                {
                    sub_80050D1C(a1, sf_draft_guest_address(a4_view), (int)a9_view, 12648447);
                    v47 = a1;
                    v48 = (int)a4_view;
                    v49 = 1600;
                }
                sub_80057EF0(1, v47, v48, v49);
                v51 = sub_800EC8F4();
                v36 = 2;
                v37 = v51 % 4 + 12;
            }
            else
            {
                sub_800510E4(a1, sf_draft_guest_address(a4_view));
                sub_80057EF0(1, a1, sf_draft_guest_address(a4_view), 16000);
                v46 = sub_800EC8F4();
                v36 = 2;
                v37 = v46 % 4;
            }
            goto LABEL_61;
        case 10:
            if (!a2)
                return;
            v58 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a2 + 24)));
            if (v58[4] <= 0 || (*SF_DRAFT_PTR(_BYTE, (a2 + 1)) & 0x80) != 0 || v58[6] < v58[3])
                return;
            vector_120[0] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 12)) + 20));
            vector_120[1] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 12)) + 24));
            v59 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 12)) + 28));
            vector_120[1] = -vector_120[1];
            vector_120[2] = v59;
            if (a1 != -1)
                sub_80057EF0(1, a1, sf_draft_guest_address(a4_view), 640);
            sub_80051878(a1, *SF_DRAFT_PTR(__int16, (a2 + 2)), sf_draft_guest_address(&vector_120[0]));
            v60 = *SF_DRAFT_PTR(__int16, (a2 + 2));
            if (v60 == 666)
                goto LABEL_68;
            v54 = 3;
            if (*SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v60 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 114)
                v54 = 28;
            goto LABEL_89;
        case 11:
        case 14:
            if (a1 != -1)
            {
                sub_80057EF0(1, a1, sf_draft_guest_address(a4_view), 480);
                sub_80051530(a1, sf_draft_guest_address(a4_view), sf_draft_guest_address(a9_view), 3945010);
                if (a1 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (sub_800EC8F4() & 1) != 0)
                    goto LABEL_48;
            }
            return;
        case 12:
        case 16:
        case 24:
            sub_80051430(sf_draft_guest_address(a4_view), 12820);
            if (a1 != -1)
                goto LABEL_94;
            return;
        case 13:
        case 20:
            if (a1 != -1)
            {
                sub_80057EF0(1, a1, sf_draft_guest_address(a4_view), 480);
                sub_80051530(a1, sf_draft_guest_address(a4_view), sf_draft_guest_address(a9_view), 2109500);
                if ((sub_800EC8F4() & 3) == 0)
                    goto LABEL_48;
            }
            return;
        case 17:
            if (!a2)
                return;
        LABEL_58:
            if (!a2)
                return;
            v52 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a2 + 24)));
            v53 = v52[3];
            if (v53 == 0x7FFF)
            {
                sub_80050D1C(a1, sf_draft_guest_address(a4_view), (int)a9_view, 12648447);
                v36 = 1;
                v37 = 17;
            LABEL_61:
                sub_8006BC98(v36, v37, 0, sf_draft_guest_address(a4_view));
            }
            else if (v52[4] <= 0 || (*SF_DRAFT_PTR(_BYTE, (a2 + 1)) & 0x80) != 0 || v52[6] < v53)
            {
            LABEL_77:
                v57 = *SF_DRAFT_PTR(__int16, (a2 + 2));
                if (v57 != 666 && *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v57 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 52)
                {
                    sub_8006BC98(0, 3, a2, 0);
                    sub_800677E4(a1, sf_draft_guest_address(a4_view), (int)a9_view);
                }
            }
            else
            {
                if (a1 != -1)
                    sub_80057EF0(1, a1, sf_draft_guest_address(a4_view), 3200);
                sub_800DEAE8(*SF_DRAFT_PTR(_DWORD, (a2 + 8)), 0, sf_draft_guest_address(&bounds_a[0]));
                v78[0] = bounds_a[0];
                v78[1] = bounds_a[1];
                v78[2] = bounds_a[2];
                v78[3] = bounds_a[3];
                v78[4] = bounds_a[0] + bounds_a[4];
                v78[5] = bounds_a[1] + bounds_a[5];
                v78[6] = bounds_a[2] + bounds_a[6];
                v78[8] = bounds_a[0] + bounds_a[12];
                v78[12] = bounds_a[4] + bounds_a[0] + bounds_a[12];
                v78[9] = bounds_a[1] + bounds_a[13];
                v78[10] = bounds_a[2] + bounds_a[14];
                v78[13] = bounds_a[5] + bounds_a[1] + bounds_a[13];
                v78[14] = bounds_a[6] + bounds_a[2] + bounds_a[14];
                sub_800E2814(sf_draft_guest_address(v78), 4, sf_draft_guest_address(&vector_68[0]));
                sub_80052EF8(a1, *SF_DRAFT_PTR(__int16, (a2 + 2)), sf_draft_guest_address(&vector_68[0]), sf_draft_guest_address(&vector_71[0]));
                v54 = 4;
                if (a3 == 5)
                LABEL_68:
                    v54 = 3;
            LABEL_89:
                sub_8006BC98(0, v54, a2, 0);
                *SF_DRAFT_PTR(_BYTE, (a2 + 1)) |= 0x80u;
            }
            return;
        case 18:
            return;
        case 19:
            if (a1 == -1)
                return;
            sub_80057EF0(1, a1, sf_draft_guest_address(a4_view), 480);
            sub_80050ED8(a1, sf_draft_guest_address(a4_view));
            if ((sub_800EC8F4() & 3) != 0)
                return;
        LABEL_48:
            v44 = sub_800EC8F4();
            v36 = 2;
            v37 = v44 % 4;
            goto LABEL_61;
        case 21:
            if (a1 != -1)
            {
                sub_800677E4(a1, sf_draft_guest_address(a4_view), (int)a9_view);
                if (a2)
                    sub_8006BC98(0, 3, a2, 0);
            LABEL_94:
                sub_80057EF0(1, a1, sf_draft_guest_address(a4_view), 480);
            }
            return;
        case 23:
            sub_80057EF0(1, a1, sf_draft_guest_address(a4_view), 1600);
            if (*SF_DRAFT_PTR(__int16, (a2 + 2)) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (v30 = a1, !(*SF_DRAFT_PTR(uint8, 0x801169C0u))))
            {
                v31 = sub_800EC8F4();
                sub_8006BC98(2, v31 % 4 + 19, 0, sf_draft_guest_address(a4_view));
                v30 = a1;
            }
            sub_8004F048(v30, *SF_DRAFT_PTR(__int16, (a2 + 2)), sf_draft_guest_address(a4_view), (int)a9_view);
            return;
        default:
        LABEL_34:
            if (a1 == -1)
                return;
            sub_80057EF0(1, a1, sf_draft_guest_address(a4_view), 480);
            sub_80050D1C(a1, sf_draft_guest_address(a4_view), (int)a9_view, 12648447);
            v39 = sub_800EC8F4();
            v36 = 2;
            v37 = v39 % 4;
            goto LABEL_61;
    }
}

void sub_8002337C(uint32 a1)
{
    int v30;
    int v62;
    char diagnostic[24];
    FUNCTION_MARKER(0x8002337Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint16 *a1_view = SF_DRAFT_PTR(uint16, a1);
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v11;
    int v12;
    bool v13; // dc
    int v14;
    int v15;
    int v16;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    char v26;
    int v27;
    int v28;
    int v29;
    int v31;
    int v32;
    char v34;
    int v35;
    int v36;
    int v37;
    int v38;
    int v41;
    int v42;
    int v43;
    int v44;
    int v46;
    int v47;
    uint32 v50;
    uint32 v54;
    uint32 v58;
    uint32 v59;
    int v60;
    int v61;
    int v66;
    int v67;
    int v68;
    int v69;
    int v70;
    int v71;
    int v72;
    int v73;
    v4 = *SF_DRAFT_PTR(_DWORD, (76 * *((_DWORD *)a1_view + 2) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v5 = *a1_view;
    v62 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 8)) + 12));
    v6 = *SF_DRAFT_PTR(_DWORD, (v4 + 12));
    switch (v5)
    {
        case 2:
            sf_draft_call(0x80153D88u, 3, (const uint32[]){v4, sf_draft_guest_address(&v62), v6});
            if ((*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 9)
                v7 = 3;
            else
                v7 = 1;
            sub_80032784(v4, 0, v7, 1);
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 20)) + 2)) = 2;
            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 20)) + 180)) = 4;
            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 20)) + 184)) = 0;
            v8 = *SF_DRAFT_PTR(__int16, (v4 + 2));
            v9 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
            (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) = 0;
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 448)) = 0;
            if (v8 == v9)
            {
                v14 = (sint32)(32u * r_u32(0x80115FB8u));
            }
            else
            {
                v11 = 76 * v8 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                v12 = *SF_DRAFT_PTR(uint8, (v11 + 36));
                v13 = v12 != 0;
                v14 = 32 * v12;
                if (!v13)
                {
                    v15 = *SF_DRAFT_PTR(_DWORD, (v11 + 36)) & 0x3000;
                    if (v15 == 4096)
                        v14 = 608;
                    else
                        v14 = v15 == 0x2000 ? 0x280 : 0;
                }
            }
            sub_80023214(v4, ((r_u32(0x8010C390u + (uint32)v14) >> 3) & 7));
            (*SF_DRAFT_PTR(uint32, 0x801169D4u)) = *SF_DRAFT_PTR(__int16, (v4 + 2));
            sub_8002FB1C();
            sub_80028F3C((*SF_DRAFT_PTR(__int16, (v4 + 2))), 1);
            sub_80015364(0xAu, 4u, (*SF_DRAFT_PTR(__int16, (v4 + 2))), (*SF_DRAFT_PTR(__int16, (v4 + 2))), 0, 0, 0, 0);
            if ((*SF_DRAFT_PTR(uint32, 0x8011659Cu)))
            {
                sub_800EC924(sf_draft_guest_address(diagnostic), 0x80010B14u, (*SF_DRAFT_PTR(uint32, 0x8011659Cu)));
                sub_80085EB0(*SF_DRAFT_PTR(uint16, (v4 + 2)), sf_draft_guest_address(diagnostic), 200, 0);
                sub_800D86C4();
            }
            return;
        case 7:
            sub_80025DFC(v4, 7, v6);
            return;
        case 8:
            sub_80025DFC(v4, 8, v6);
            return;
        case 10:
            sub_8006D610(v4);
            sub_80028F3C((*SF_DRAFT_PTR(__int16, (v4 + 2))), 2);
            if (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 448)))
            {
                if ((*SF_DRAFT_PTR(uint16, 0x80116AE6u)))
                    sub_80046A74(v4, 0);
                *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 448)) = 1;
                sub_800D85BC(1, 80, 3);
            }
            v19 = v4;
            if (!(*SF_DRAFT_PTR(uint32, 0x80115E80u)))
                goto LABEL_34;
            v20 = *SF_DRAFT_PTR(__int16, (v4 + 2));
            if (v20 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            {
                v19 = v4;
                if ((*SF_DRAFT_PTR(uint32, 0x80115FB8u)) == 19)
                    goto LABEL_34;
            }
            else
            {
                v21 = 76 * v20 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                if (*SF_DRAFT_PTR(_BYTE, (v21 + 36)))
                {
                    v16 = 1;
                    if (*SF_DRAFT_PTR(_BYTE, (v21 + 36)) == 19)
                        goto LABEL_34;
                }
                else
                {
                    v19 = v4;
                    if ((*SF_DRAFT_PTR(_DWORD, (v21 + 36)) & 0x3000) == 4096)
                        goto LABEL_34;
                }
            }
            v22 = *SF_DRAFT_PTR(__int16, (v4 + 2));
            if (v22 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            {
                v19 = v4;
                if ((*SF_DRAFT_PTR(uint32, 0x80115FB8u)) == 20)
                    goto LABEL_34;
                goto LABEL_33;
            }
            v23 = 76 * v22 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
            if (*SF_DRAFT_PTR(_BYTE, (v23 + 36)))
            {
                v19 = v4;
                if (*SF_DRAFT_PTR(_BYTE, (v23 + 36)) == 20)
                    goto LABEL_34;
                goto LABEL_33;
            }
            v24 = *SF_DRAFT_PTR(_DWORD, (v23 + 36)) & 0x3000;
            if (v24 == 4096 || (v19 = v4, v24 != 0x2000))
            {
            LABEL_33:
                sub_800D0DA8(*SF_DRAFT_PTR(_DWORD, (v4 + 8)));
                v19 = v4;
            }
        LABEL_34:
            sub_8007EC08(v19, 1, 0);
            v25 = *SF_DRAFT_PTR(_DWORD, (v4 + 8));
            if ((*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v4 + 16))) & 0x100002) == 1048578)
                v26 = *SF_DRAFT_PTR(_BYTE, (v25 + 11)) | 1;
            else
                v26 = *SF_DRAFT_PTR(_BYTE, (v25 + 11)) & 0xFE;
            *SF_DRAFT_PTR(_BYTE, (v25 + 11)) = v26;
            if ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 16)) + 4)) & 0x100) == 0)
                goto LABEL_47;
            v27 = *SF_DRAFT_PTR(__int16, (v4 + 2));
            if (v27 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            {
                v30 = (sint32)(32u * r_u32(0x80115FB8u));
            }
            else
            {
                v28 = 76 * v27 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                v29 = *SF_DRAFT_PTR(uint8, (v28 + 36));
                v13 = v29 != 0;
                v30 = 32 * v29;
                if (!v13)
                {
                    v31 = *SF_DRAFT_PTR(_DWORD, (v28 + 36)) & 0x3000;
                    if (v31 == 4096)
                        v30 = 608;
                    else
                        v30 = v31 == 0x2000 ? 0x280 : 0;
                }
            }
            if (((r_u32(0x8010C390u + (uint32)v30) >> 3) & 7) == 2 && sub_8001C950())
            {
            LABEL_47:
                v32 = sub_800456AC(v4);
                v34 = *SF_DRAFT_PTR(_BYTE, (v32 + 8)) & 0xF7;
            }
            else
            {
                v32 = sub_800456AC(v4);
                v34 = *SF_DRAFT_PTR(_BYTE, (v32 + 8)) | 8;
            }
            *SF_DRAFT_PTR(_BYTE, (v32 + 8)) = v34;
            if (!*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 444)))
            {
                v35 = *SF_DRAFT_PTR(_DWORD, (v4 + 12));
                v36 = *SF_DRAFT_PTR(_DWORD, (v35 + 404));
                if ((v36 & 0x40000) != 0)
                    *SF_DRAFT_PTR(_DWORD, (v35 + 404)) = v36 & 0xFFFBFFFF;
            }
            v37 = *SF_DRAFT_PTR(__int16, (v4 + 2));
            *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 444)) = 0;
            sub_80015364(0xAu, 2u, v37, v37, 0, 0, 0, 0);
            return;
        case 11:
            if ((*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v4 + 16))) & 0x10) == 0)
                goto LABEL_58;
            if (!(*SF_DRAFT_PTR(uint16, 0x80116AE6u)) && !(*SF_DRAFT_PTR(uint32, 0x80115C78u)) && (*SF_DRAFT_PTR(uint8, 0x80116925u)))
            {
                v38 = *SF_DRAFT_PTR(__int16, (v4 + 2));
                (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) = 0;
                sub_80028F3C(v38, 12);
                sub_80028F3C((*SF_DRAFT_PTR(__int16, (v4 + 2))), 43);
                sub_8001CB20(0, 0, 0, 0);
                sub_8002FA48(1);
                return;
            }
            if ((*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v4 + 16))) & 0x10) == 0)
            {
            LABEL_58:
                sub_8002FA48(0);
                sub_80028F3C((*SF_DRAFT_PTR(__int16, (v4 + 2))), 45);
            }
            return;
        case 13:
            v42 = 225;
            v43 = (sint32)sub_800EC8F4() % 5;
            if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v4 + 24)) + 12)) < 50)
                v42 = 127;
            sub_800D85BC(0, 1, (uint8)(v43 + 5));
            sub_800D85BC(1, v42, (uint8)(v43 + 10));
            v44 = *((_DWORD *)a1_view + 1);
            if (v44 != 65534 && v44 == 666)
            {
                if ((*SF_DRAFT_PTR(uint8, 0x801169C0u)) == 2)
                {
                    sub_80058BC0((*SF_DRAFT_PTR(uint32, 0x80116AB0u)));
                    if ((*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v4 + 16))) & 0x400) != 0)
                    {
                        sub_80015364(0xDu, 4u, (*((_DWORD *)a1_view + 1)), (*SF_DRAFT_PTR(__int16, (v4 + 2))), 0, 0, 0, 0);
                        sub_80069CB0(-1, -1, (*SF_DRAFT_PTR(__int16, (v4 + 2))), 30, (*SF_DRAFT_PTR(sint16, *SF_DRAFT_PTR(uint32, v4 + 24) + 6) != 0 ? 0x4Du : 0x10u));
                    }
                    else
                    {
                        (*SF_DRAFT_PTR(uint8, 0x801169C0u)) = 0;
                    }
                }
                else
                {
                    sub_80015364(0xDu, 4u, (*((_DWORD *)a1_view + 1)), (*SF_DRAFT_PTR(__int16, (v4 + 2))), 0, 0, 0, 0);
                    if (!(*SF_DRAFT_PTR(uint8, 0x801169C0u)))
                    {
                        sub_8005898C((*SF_DRAFT_PTR(uint32, 0x80116AB0u)));
                        (*SF_DRAFT_PTR(uint8, 0x801169C0u)) = 1;
                    }
                    if ((*SF_DRAFT_PTR(uint8, 0x80116B70u)))
                    {
                        if ((*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v4 + 16))) & 0x400) != 0)
                            (*SF_DRAFT_PTR(uint8, 0x801169C0u)) = 2;
                        else
                            sub_80069CB0(-1, -1, (*SF_DRAFT_PTR(__int16, (v4 + 2))), 60, 0x4Du);
                    }
                    sub_80058BC0((*SF_DRAFT_PTR(uint32, 0x80116AB0u)));
                }
            }
            if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v4 + 24)) + 8)) <= 0)
            {
                sub_8003558C(1);
                sub_800405F4(0, 0);
                sub_80046A74(v4, 0);
            }
            return;
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 35:
        case 36:
            *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3632)) = *a1_view;
            (*SF_DRAFT_PTR(uint16, 0x80116A9Au)) = *((_DWORD *)a1_view + 1);
            return;
        case 25:
            *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3632)) = 0;
            (*SF_DRAFT_PTR(uint16, 0x80116A9Au)) = -1;
            return;
        case 26:
            v46 = *((_DWORD *)a1_view + 1);
            if (v46 != 666 && *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v46 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 32 || *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (76 * v46 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 34)) == 9)
            {
                v47 = *SF_DRAFT_PTR(_DWORD, (v4 + 12));
                *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 444)) = 1;
                *SF_DRAFT_PTR(_DWORD, (v47 + 404)) |= 0x40000u;
            }
            return;
        case 30:
            if ((*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v4 + 16))) & 0x2000000) != 0)
            {
                v41 = *SF_DRAFT_PTR(uint8, (76 * *SF_DRAFT_PTR(__int16, (v4 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36));
                if (!*SF_DRAFT_PTR(_BYTE, (76 * *SF_DRAFT_PTR(__int16, (v4 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) || v41 != 18 && (!*SF_DRAFT_PTR(_BYTE, (76 * *SF_DRAFT_PTR(__int16, (v4 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) || v41 != 21 || (*SF_DRAFT_PTR(uint32, 0x8012F9B8u))))
                {
                    sub_80028F3C((*SF_DRAFT_PTR(__int16, (v4 + 2))), 43);
                }
            }
            return;
        case 32:
            sub_80017904();
            return;
        case 37:
            v13 = (*SF_DRAFT_PTR(uint32, 0x80115E80u)) == 0;
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * *((_DWORD *)a1_view + 1) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 8)) + 22)) = 16;
            if (!v13)
                sub_80028F3C((*SF_DRAFT_PTR(__int16, (v4 + 2))), 13);
            sub_80028F3C((*SF_DRAFT_PTR(__int16, (v4 + 2))), 5);
            sub_800354E8();
            sub_8001CBD0(1u, 0, 0);
            sub_800D85BC(0, 1, 3);
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 448)) = 1;
            (*SF_DRAFT_PTR(uint8, 0x80116B32u)) = 1;
            return;
        case 38:
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * *((_DWORD *)a1_view + 1) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 8)) + 22)) = 0;
            sub_8001CBD0(0, 0, 0);
            sub_800D85BC(1, 1, 3);
            sub_800354FC();
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 448)) = 0;
            (*SF_DRAFT_PTR(uint8, 0x80116B32u)) = 0;
            return;
        case 40:
            if (!(*SF_DRAFT_PTR(uint32, 0x80115E80u)))
            {
                if ((*SF_DRAFT_PTR(uint16, 0x80116AE6u)))
                    sub_80046A74(v4, 0);
                sub_80028F3C((*SF_DRAFT_PTR(__int16, (v4 + 2))), 46);
            }
            return;
        case 43:
            if (!(*SF_DRAFT_PTR(uint8, 0x801169C0u)))
            {
                if (sub_8001C950() != 11)
                {
                    if ((*SF_DRAFT_PTR(uint32, 0x80115E80u)))
                        sub_80028F3C((*SF_DRAFT_PTR(__int16, (v4 + 2))), 13);
                    (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) = 0;
                    sub_8001CB20(0, 0, 0, 0);
                    sub_8001D494(1, 9, v4, 0, 0, 0, 0, 0);
                    v66 = (*SF_DRAFT_PTR(uint32, 0x80010B24u));
                    v67 = (*SF_DRAFT_PTR(uint32, 0x80010B28u));
                    v68 = (*SF_DRAFT_PTR(uint32, 0x80010B2Cu));
                    v69 = (*SF_DRAFT_PTR(uint32, 0x80010B30u));
                    v70 = (*SF_DRAFT_PTR(uint32, 0x80010B34u));
                    v71 = (*SF_DRAFT_PTR(uint32, 0x80010B38u));
                    v72 = (*SF_DRAFT_PTR(uint32, 0x80010B3Cu));
                    v73 = (*SF_DRAFT_PTR(uint32, 0x80010B40u));
                    v50 = r_u32(0x80115D84u);
                    w_u32(v50 + 0xD1Cu, (uint32)v66);
                    w_u32(v50 + 0xD20u, (uint32)v67);
                    w_u32(v50 + 0xD24u, (uint32)v68);
                    w_u32(v50 + 0xD28u, (uint32)v69);
                    v54 = r_u32(0x80115D84u);
                    w_u32(v54 + 0xD30u, (uint32)v70);
                    w_u32(v54 + 0xD34u, (uint32)v71);
                    w_u32(v54 + 0xD38u, (uint32)v72);
                    w_u32(v54 + 0xD3Cu, (uint32)v73);
                    w_u8(r_u32(0x80115D84u) + 0xD40u, 1u);
                    sub_80018994(r_u32(0x80115D84u), 1, 7, 1);
                    v58 = r_u32(0x80115D84u);
                    w_u8(v58 + 0xD40u, 1u);
                    v59 = r_u32(0x80115D84u);
                    w_u32(v58 + 0xD1Cu, 288u);
                    sub_80018994(v59, 1, 5, 1);
                }
                sub_8006CA74(44, *SF_DRAFT_PTR(__int16, (v4 + 2)));
                (*SF_DRAFT_PTR(uint8, 0x80116944u)) = 1;
                (*SF_DRAFT_PTR(uint8, 0x80127D98u)) = 1;
            }
            return;
        case 44:
            if (sub_8001C950() == 11)
            {
                v60 = sub_80020714();
                sub_80015364(0x13u, 4u, (*SF_DRAFT_PTR(__int16, (v60 + 2))), (*SF_DRAFT_PTR(__int16, (v60 + 2))), 0, 0, 0, 0);
            }
            else
            {
                sub_8001D494(0, 9, v4, 0, 0, 0, 0, 1);
                sub_80020210();
                sub_80016F90(0);
                sub_800354FC();
            }
            v61 = 93;
            if (*SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (v4 + 16))) < 0)
                v61 = 99;
            sub_80028F3C((*SF_DRAFT_PTR(__int16, (v4 + 2))), v61);
            (*SF_DRAFT_PTR(uint8, 0x80116944u)) = 0;
            return;
        default:
            return;
    }
}

sint32 sub_800959EC(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x800959ECu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
    int *a4_view = SF_DRAFT_PTR(int, a4);
    int v7;
    unsigned int i;
    int *v9;
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
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    unsigned int v26;
    int v27;
    int v28;
    signed int v29;
    __int16 *v30;
    __int16 *v31;
    __int16 *v32;
    bool v33;
    sint32 v34;
    __int16 *v35;
    int v36;
    int v37;
    int v38;
    int v39;
    int v40;
    int v41;
    int v42;
    int v43;
    int v44;
    int v45;
    int v46;
    sint32 v47;
    int v48;
    int v49;
    int v50;
    int v51;
    _DWORD *v52;
    int v53;
    int v54;
    _DWORD *v55;
    _DWORD *v56;
    int v57;
    int v58;
    int v59;
    sint32 normalized_direction[4];
    sint32 collision_record[24];
    sint32 bounds_output[8];
    int v61;
    int v62;
    int v90;
    int v91;
    int v92;
    int v93;
    int v94;
    int v95;
    int v96;
    int v97;
    int v98;
    int v99;
    int v100;
    int v101;
    int v102;
    int v103[4];
    int v104;
    int *v105;
    uint8 v106;
    int v107;
    int v108;
    v105 = a1_view;
    v106 = 0;
    v7 = sub_80020714();
    v107 = sub_8001C950();
    v108 = sub_8001C978();
    sub_800C720C(sf_draft_guest_address(a2_view), sf_draft_guest_address(&normalized_direction[0]));
    for (i = 0; i < 2; ++i)
    {
        v90 = (*SF_DRAFT_PTR(uint32, 0x800135C4u));
        v91 = (*SF_DRAFT_PTR(uint32, 0x800135C8u));
        v92 = (*SF_DRAFT_PTR(uint32, 0x800135CCu));
        v93 = (*SF_DRAFT_PTR(uint32, 0x800135D0u));
        v94 = (*SF_DRAFT_PTR(uint32, 0x800135C4u));
        v95 = (*SF_DRAFT_PTR(uint32, 0x800135C8u));
        v96 = (*SF_DRAFT_PTR(uint32, 0x800135CCu));
        v97 = (*SF_DRAFT_PTR(uint32, 0x800135D0u));
        v98 = (*SF_DRAFT_PTR(uint32, 0x800135C4u));
        v99 = (*SF_DRAFT_PTR(uint32, 0x800135C8u));
        v100 = (*SF_DRAFT_PTR(uint32, 0x800135CCu));
        v101 = (*SF_DRAFT_PTR(uint32, 0x800135D0u));
        if (i)
        {
            v23 = a4_view[1];
            v24 = a4_view[2];
            v25 = a4_view[3];
            collision_record[0] = *a4_view;
            collision_record[1] = v23;
            collision_record[2] = v24;
            collision_record[3] = v25;
            collision_record[4] = 80;
            collision_record[10] = 0x8000;
            collision_record[11] = 0x20000;
            collision_record[12] = 0x10000;
            collision_record[5] = 0;
            collision_record[6] = 0;
            collision_record[7] = 0;
            collision_record[13] = 0;
            v61 = 0x20000;
            v62 = 0x20000;
            v20 = 80;
            v21 = v23 - 80;
            v22 = v23 + 80;
            goto LABEL_23;
        }
        v9 = v105;
        v10 = v105[1];
        v11 = v105[2];
        v12 = v105[3];
        collision_record[0] = *v105;
        collision_record[1] = v10;
        collision_record[2] = v11;
        collision_record[3] = v12;
        collision_record[4] = 0;
        collision_record[5] = *a2_view << 12;
        collision_record[6] = a2_view[1] << 12;
        v13 = a2_view[2];
        collision_record[10] = 0;
        collision_record[11] = 0;
        collision_record[12] = 0x10000;
        collision_record[13] = 0;
        collision_record[7] = v13 << 12;
        *a4_view = *v105 + *a2_view;
        a4_view[1] = v9[1] + a2_view[1];
        a4_view[2] = v9[2] + a2_view[2];
        v14 = collision_record[12];
        v15 = collision_record[10];
        if (collision_record[10] < 0)
            v15 = -collision_record[10];
        if (collision_record[12] < 0)
            v14 = -collision_record[12];
        v16 = collision_record[11];
        if (collision_record[11] < 0)
            v16 = -collision_record[11];
        if (v16 < v14)
        {
            if (v15 >= v14)
            {
            LABEL_19:
                v19 = collision_record[10];
                if (collision_record[10] < 0)
                    v19 = -collision_record[10];
                goto LABEL_21;
            }
        }
        else if (v15 >= v16)
        {
            goto LABEL_19;
        }
        v17 = collision_record[12];
        v18 = collision_record[11];
        if (collision_record[12] < 0)
            v17 = -collision_record[12];
        v19 = v17;
        if (collision_record[11] < 0)
            v18 = -collision_record[11];
        if (v18 >= v17)
            v19 = v18;
    LABEL_21:
        v61 = v19;
        v62 = v19;
        v20 = collision_record[4];
        v21 = collision_record[1] - collision_record[4];
        v22 = collision_record[1] + collision_record[4];
    LABEL_23:
        v26 = 0;
        sub_80094DEC(sf_draft_guest_address(collision_record), v20, v21, v22, sf_draft_guest_address(&collision_record[5]), v61, v62, sf_draft_guest_address(bounds_output));
        do
        {
            if (v26)
            {
                v27 = 0;
                if (v7 && *SF_DRAFT_PTR(__int16, (v7 + 2)) == (*SF_DRAFT_PTR(uint32, 0x801169D4u)))
                    v27 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v7 + 8)) + 40));
            }
            else
            {
                v27 = (*SF_DRAFT_PTR(uint32, 0x80128DE8u));
            }
            if (v27 < 0)
            {
                v28 = v27 + 8;
                while (1)
                {
                    collision_record[9] = v28;
                    v29 = ((unsigned int)(*SF_DRAFT_PTR(uint16, (v27 + 26)) << 18) >> 22) - 1;
                    if (v29 < 0 || (unsigned int)*SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (76 * v29 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 34)) - 1 >= 2 || v107 == 12 && v108 == 2)
                    {
                        break;
                    }
                LABEL_138:
                    v27 = *SF_DRAFT_PTR(_DWORD, (v27 + 4));
                    v28 = v27 + 8;
                    if (!v27)
                        goto LABEL_139;
                }
                v30 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (collision_record[9] + 20)));
                v31 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (collision_record[9] + 24)));
                v32 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (collision_record[9] + 28)));
                if (*SF_DRAFT_PTR(_DWORD, collision_record[9]) == 3)
                {
                    if (v30[1] >= bounds_output[1] || v31[1] >= bounds_output[1] || (v33 = 0, v32[1] >= bounds_output[1]))
                    {
                        if (bounds_output[5] >= v30[1] || bounds_output[5] >= v31[1] || (v33 = 0, bounds_output[5] >= v32[1]))
                        {
                            if (*v30 >= bounds_output[0] || *v31 >= bounds_output[0] || (v33 = 0, *v32 >= bounds_output[0]))
                            {
                                if (bounds_output[4] >= *v30 || bounds_output[4] >= *v31 || (v33 = 0, bounds_output[4] >= *v32))
                                {
                                    if (v30[2] >= bounds_output[2] || v31[2] >= bounds_output[2] || (v33 = 0, v32[2] >= bounds_output[2]))
                                    {
                                        v33 = 1;
                                        if (bounds_output[6] < v30[2])
                                        {
                                            v33 = 1;
                                            if (bounds_output[6] < v31[2])
                                            {
                                                v34 = bounds_output[6] < v32[2];
                                                goto LABEL_79;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    v33 = 0;
                    if (*SF_DRAFT_PTR(_DWORD, collision_record[9]) == 4)
                    {
                        v35 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (collision_record[9] + 32)));
                        if (v30[1] >= bounds_output[1] || v31[1] >= bounds_output[1] || v32[1] >= bounds_output[1] || (v33 = 0, v35[1] >= bounds_output[1]))
                        {
                            if (bounds_output[5] >= v30[1] || bounds_output[5] >= v31[1] || bounds_output[5] >= v32[1] || (v33 = 0, bounds_output[5] >= v35[1]))
                            {
                                if (*v30 >= bounds_output[0] || *v31 >= bounds_output[0] || *v32 >= bounds_output[0] || (v33 = 0, *v35 >= bounds_output[0]))
                                {
                                    if (bounds_output[4] >= *v30 || bounds_output[4] >= *v31 || bounds_output[4] >= *v32 || (v33 = 0, bounds_output[4] >= *v35))
                                    {
                                        if (v30[2] >= bounds_output[2] || v31[2] >= bounds_output[2] || v32[2] >= bounds_output[2] || (v33 = 0, v35[2] >= bounds_output[2]))
                                        {
                                            v33 = 1;
                                            if (bounds_output[6] < v30[2])
                                            {
                                                v33 = 1;
                                                if (bounds_output[6] < v31[2])
                                                {
                                                    v33 = 1;
                                                    if (bounds_output[6] < v32[2])
                                                    {
                                                        v34 = bounds_output[6] < v35[2];
                                                    LABEL_79:
                                                        v33 = !v34;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (v33)
                {
                    if (i == 1)
                    {
                        v36 = *SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (collision_record[9] + 8))) * *a3_view + *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (collision_record[9] + 8)) + 2)) * a3_view[1] + *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (collision_record[9] + 8)) + 4)) * a3_view[2];
                        v102 = v36;
                        if (v36 < 0)
                            v37 = -(-v36 >> 12);
                        else
                            v37 = v36 >> 12;
                        v102 = v37;
                        v38 = v37;
                        if (v37 < -4096)
                            v38 = -4096;
                        if (4096 - v38 >= 6145)
                            goto LABEL_91;
                        v39 = v37;
                        if (v37 < -4096)
                            v39 = -4096;
                        if (80 * (4096 - v39) < 0)
                        {
                            v43 = v37;
                            if (v37 < -4096)
                                v43 = -4096;
                            v41 = 120;
                            if (4096 - v43 < 6145)
                            {
                                v44 = v37;
                                if (v37 < -4096)
                                    v44 = -4096;
                                v41 = -((-80 * (4096 - v44)) >> 12);
                            }
                        }
                        else
                        {
                        LABEL_91:
                            v40 = 4096 - v102;
                            if (v102 < -4096)
                                v40 = 0x2000;
                            v41 = 120;
                            if (v40 < 6145)
                            {
                                v42 = v102;
                                if (v102 < -4096)
                                    v42 = -4096;
                                v41 = (80 * (4096 - v42)) >> 12;
                            }
                        }
                        collision_record[4] = v41;
                        v45 = *SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (collision_record[9] + 8))) * (_DWORD)normalized_direction[0] + *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (collision_record[9] + 8)) + 2)) * normalized_direction[1] + *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (collision_record[9] + 8)) + 4)) * normalized_direction[2];
                        v102 = v45;
                        if (v45 < 0)
                            v46 = -(-v45 >> 12);
                        else
                            v46 = v45 >> 12;
                        v102 = -v46;
                        v47 = -v46 < -4096;
                        v48 = -v46;
                        if (-v46 < -4096)
                            v48 = -4096;
                        if (3723 * (v48 + 409) < 0)
                        {
                            v51 = -v46;
                            if (v47)
                                v51 = -4096;
                            v50 = -((-3723 * (v51 + 409)) >> 12);
                        }
                        else
                        {
                            v49 = -v46;
                            if (v47)
                                v49 = -4096;
                            v50 = (3723 * (v49 + 409)) >> 12;
                        }
                        collision_record[11] = 32 * v50;
                    }
                    sub_80096A30(sf_draft_guest_address(&collision_record[0]));
                    if (((uint8 *)collision_record)[56] == 1)
                    {
                        v52 = SF_DRAFT_PTR(_DWORD, collision_record[9]);
                        v53 = 0;
                        if (*SF_DRAFT_PTR(int, collision_record[9]) > 0)
                        {
                            while (1)
                            {
                                v54 = 0;
                                if (v53 != *v52 - 1)
                                    v54 = v53 + 1;
                                v55 = &v52[v54];
                                v56 = &v52[v53];
                                v103[0] = *SF_DRAFT_PTR(__int16, v55[5]) - *SF_DRAFT_PTR(__int16, v56[5]);
                                v103[1] = *SF_DRAFT_PTR(__int16, (v55[5] + 2)) - *SF_DRAFT_PTR(__int16, (v56[5] + 2));
                                v103[2] = *SF_DRAFT_PTR(__int16, (v55[5] + 4)) - *SF_DRAFT_PTR(__int16, (v56[5] + 4));
                                sub_800D9738(sf_draft_guest_address(v103), sf_draft_guest_address(&v104));
                                ++v53;
                                if ((unsigned int)(v104 - 1) < 0x17)
                                    break;
                                v52 = SF_DRAFT_PTR(_DWORD, collision_record[9]);
                                if (v53 >= *SF_DRAFT_PTR(sint32, collision_record[9]))
                                    goto LABEL_123;
                            }
                            ((uint8 *)collision_record)[56] = 0;
                        }
                    }
                LABEL_123:
                    if (((uint8 *)collision_record)[56])
                    {
                        v106 = 1;
                        if (i)
                        {
                            if (v94 < collision_record[21])
                                v94 = collision_record[21];
                            if (collision_record[21] < v98)
                                v98 = collision_record[21];
                            if (v95 < collision_record[22])
                                v95 = collision_record[22];
                            if (collision_record[22] < v99)
                                v99 = collision_record[22];
                            if (v96 < collision_record[23])
                                v96 = collision_record[23];
                            if (collision_record[23] < v100)
                                v100 = collision_record[23];
                        }
                        else
                        {
                            collision_record[5] += collision_record[21];
                            collision_record[6] += collision_record[22];
                            collision_record[7] += collision_record[23];
                            v90 += collision_record[21];
                            v91 += collision_record[22];
                            v92 += collision_record[23];
                        }
                    }
                }
                goto LABEL_138;
            }
        LABEL_139:
            ++v26;
        } while (v26 < 2);
        if (i == 1)
        {
            v90 = v94 + v98;
            v91 = v95 + v99;
            v92 = v96 + v100;
        }
        v57 = v90 >> 12;
        if (v90 < 0)
            v57 = -(-v90 >> 12);
        v90 = v57;
        if (v91 < 0)
            v58 = -(-v91 >> 12);
        else
            v58 = v91 >> 12;
        v91 = v58;
        if (v92 < 0)
            v59 = -(-v92 >> 12);
        else
            v59 = v92 >> 12;
        v92 = v59;
        *a4_view += v90;
        a4_view[1] += v91;
        a4_view[2] += v92;
    }
    return v106;
}

void sub_8002C3E8(sint32 a1)
{
    FUNCTION_MARKER(0x8002C3E8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v2;
    int v3;
    int v4;
    char v5;
    int v6;
    int v7;
    int v8;
    bool v9;
    int *v10;
    _DWORD *v11;
    int v12;
    int v13;
    _DWORD *v14;
    int i;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    char v25;
    uint8 v26;
    char v27;
    int v28;
    int v29;
    int v31;
    _DWORD *v32;
    int v33;
    int v34;
    int v35;
    int v36;
    int v37;
    int v38;
    sint32 event_position[3];
    int v42[4];
    int v43;
    int v44;
    int v45;
    v2 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(_DWORD, (a1 + 8)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v3 = *SF_DRAFT_PTR(__int16, (v2 + 2));
    if (v3 == 666)
        v4 = 666;
    else
        v4 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v3 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
    switch (*SF_DRAFT_PTR(_WORD, a1))
    {
        case 2:
            sf_draft_call(0x8014FD78u, 2, (const uint32[]){v2, v4});
            return;
        case 5:
            *SF_DRAFT_PTR(_BYTE, v2) &= ~0x40u;
            if (v4 != 111)
            {
                if (v4 == 52)
                    sub_80073DF8(v2);
                else
                    sub_80073E20(v2);
                if (v4 == 94)
                    sub_80073DD8(v2);
            }
            return;
        case 6:
            *SF_DRAFT_PTR(_BYTE, v2) |= 0x40u;
            if (v4 != 111)
            {
                if (v4 == 52)
                    sub_80073CD8(v2, 1, 0, 0);
                else
                    sub_80073D30(v2, 1, 0, 0);
                if (v4 == 94)
                    sub_80073D88(v2, 1, 0, 1, 1);
            }
            if (v4 == 107 || v4 == 111)
            {
                sub_8002C264(sf_draft_guest_address(SF_DRAFT_PTR(uint8, v2)));
                if ((*SF_DRAFT_PTR(_DWORD, v2) & 0xC8) == 72 && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8)) > 0)
                    goto LABEL_85;
            }
            return;
        case 0xA:
            if (v4 == 107 || v4 == 111)
            {
                if ((*SF_DRAFT_PTR(_DWORD, v2) & 0xC8) == 72 && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8)) > 0)
                {
                    v5 = *SF_DRAFT_PTR(_BYTE, (v2 + 1)) - 1;
                    *SF_DRAFT_PTR(_BYTE, (v2 + 1)) = v5;
                    if (!v5)
                    {
                        v6 = ((*SF_DRAFT_PTR(_BYTE, v2) >> 1) ^ 1) & 1;
                        *SF_DRAFT_PTR(_BYTE, (v2 + 1)) = *SF_DRAFT_PTR(_DWORD, (v2 + 4));
                        sub_8002BA08(v2, v6);
                        v7 = *SF_DRAFT_PTR(_DWORD, (v2 + 8));
                        if ((*SF_DRAFT_PTR(_BYTE, (v7 + 10)) & 8) != 0)
                        {
                            if ((*SF_DRAFT_PTR(_BYTE, v2) & 2) != 0)
                                sub_800D8FD4(v7);
                            else
                                sub_800D8F60(v7);
                        }
                    }
                    goto LABEL_85;
                }
            }
            else if (v4 == 109)
            {
                v8 = *SF_DRAFT_PTR(_DWORD, (v2 + 12));
                if (*SF_DRAFT_PTR(_BYTE, (v8 + 264)) && (*SF_DRAFT_PTR(_DWORD, (v8 + 404)) & 0x100000) != 0 || (v9 = 0, !*SF_DRAFT_PTR(_BYTE, (v8 + 257))))
                {
                    v9 = 0;
                    if ((unsigned int)(*SF_DRAFT_PTR(_DWORD, (v8 + 32)) + 0x2000) < 0x4001 && (unsigned int)(*SF_DRAFT_PTR(_DWORD, (v8 + 36)) + 0x2000) < 0x4001)
                    {
                        v9 = (unsigned int)(*SF_DRAFT_PTR(_DWORD, (v8 + 40)) + 0x2000) < 0x4001;
                    }
                }
                v10 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (v2 + 12)));
                v11 = SF_DRAFT_PTR(_DWORD, v10[1]);
                v12 = v10[2];
                v13 = v10[3];
                v31 = *v10;
                v32 = v11;
                v33 = v12;
                v34 = v13;
                v14 = SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116A30u)) + 8 * *SF_DRAFT_PTR(_DWORD, (v2 + 4))));
                for (i = 0; (uint32)i < *v14; ++i)
                {
                    v16 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * i + v14[1])) + 52));
                    if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v16 + 24)) + 8)) > 0)
                    {
                        v35 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v16 + 8)) + 12)) + 20));
                        v36 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v16 + 8)) + 12)) + 24));
                        v17 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v16 + 8)) + 12)) + 28));
                        v36 = -v36;
                        v37 = v17;
                        sub_800E0364(sf_draft_guest_address(&v31), sf_draft_guest_address(&v35), sf_draft_guest_address(&v38));
                        if (v38 < 96)
                            sub_80069CB0(-1, (*SF_DRAFT_PTR(__int16, (a1 + 4))), (*SF_DRAFT_PTR(__int16, (v16 + 2))), (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v16 + 24)) + 8))), 0x11u);
                    }
                }
                if (((*SF_DRAFT_PTR(uint32, 0x80116A88u)) & 3) == (*SF_DRAFT_PTR(_WORD, (v2 + 2)) & 3) || (v18 = 0, v9))
                {
                    v42[0] = SF_DRAFT_PTR(uint32, 0x80010F24u)[0];
                    v42[1] = SF_DRAFT_PTR(uint32, 0x80010F24u)[1];
                    v42[2] = SF_DRAFT_PTR(uint32, 0x80010F24u)[2];
                    v42[3] = SF_DRAFT_PTR(uint32, 0x80010F24u)[3];
                    event_position[0] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 20));
                    event_position[1] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 24));
                    v19 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 28));
                    event_position[1] = -event_position[1];
                    event_position[2] = v19;
                    sub_8004F6DC(-1, sf_draft_guest_address(&event_position[0]), (sint32)sf_draft_guest_address(v42), 2048, (uint8)v9);
                    v18 = 0;
                    if (v9)
                    {
                        if ((*SF_DRAFT_PTR(_BYTE, v2) & 2) != 0)
                            sub_8002BA08(v2, 0);
                        *SF_DRAFT_PTR(_BYTE, v2) &= ~8u;
                        sub_80048A70(v2);
                        v43 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 20));
                        v44 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 24));
                        v20 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 28));
                        v44 = -v44;
                        v45 = v20;
                        sub_80051878(-1, *SF_DRAFT_PTR(__int16, (v2 + 2)), sf_draft_guest_address(&v43));
                        sub_8004FBA0(-1, sf_draft_guest_address(&v43), 4096, -1, 0, 10, 30);
                        sub_8006A4B8(-1, sf_draft_guest_address(&v43), (*SF_DRAFT_PTR(uint32, 0x8010C5F8u) >> 6) & 0x3FFu, 320, 320, 17, 1);
                        sub_80020724(0, 5, 1, 0x8010B770u, 0, sf_draft_guest_address(&v43));
                        *SF_DRAFT_PTR(_BYTE, (v2 + 35)) |= 2u;
                        sub_8006BC98(0, 1, v2, 0);
                        sub_8006BC98(0, 4, v2, 0);
                        sub_8002AFB4(v2);
                        v18 = 1;
                    }
                }
                if (!v18)
                    goto LABEL_85;
            }
            return;
        case 0xD:
            goto LABEL_72;
        case 0x14:
        case 0x15:
            if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8)) <= 0)
                return;
            if ((*SF_DRAFT_PTR(_BYTE, v2) & 2) != 0)
                sub_8002BA08(v2, 0);
            if (v4 == 111)
            {
                v24 = *SF_DRAFT_PTR(_DWORD, (v2 + 8));
                v25 = *SF_DRAFT_PTR(_BYTE, v2) & 0xF7;
                goto LABEL_98;
            }
            if ((*SF_DRAFT_PTR(_BYTE, v2) & 2) == 0)
            {
                v21 = *SF_DRAFT_PTR(__int16, (a1 + 4));
                v22 = *SF_DRAFT_PTR(__int16, (v2 + 2));
                v23 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8));
            LABEL_61:
                sub_80069CB0(-1, v21, v22, v23, 0x0Fu);
            }
            return;
        case 0x1A:
            v23 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8));
            if (v23 <= 0 || v4 != 94)
                return;
            v21 = *SF_DRAFT_PTR(__int16, (a1 + 4));
            v22 = *SF_DRAFT_PTR(__int16, (v2 + 2));
            goto LABEL_61;
        case 0x29:
            if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8)) > 0 && v4 == 107)
                *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 12))) = *SF_DRAFT_PTR(_BYTE, v2) & 8;
            return;
        case 0x2A:
            if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8)) > 0)
            {
                if (v4 == 107)
                {
                    if (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 12))))
                    {
                        *SF_DRAFT_PTR(_BYTE, v2) |= 8u;
                    }
                    else if ((*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 10)) & 8) != 0)
                    {
                        sub_8002BA08(v2, 0);
                        sub_800D8F60(*SF_DRAFT_PTR(_DWORD, (v2 + 8)));
                    }
                }
                return;
            }
            *SF_DRAFT_PTR(_BYTE, (v2 + 1)) |= 0x80u;
        LABEL_72:
            if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8)) > 0)
                goto LABEL_100;
            v26 = *SF_DRAFT_PTR(_BYTE, v2);
            if ((*SF_DRAFT_PTR(_BYTE, v2) & 0x80) != 0)
                goto LABEL_100;
            if (v4 == 52)
            {
                if (*SF_DRAFT_PTR(_WORD, a1) == 42)
                {
                    if ((v26 & 2) != 0)
                        sub_8002BA08(v2, 0);
                    v24 = *SF_DRAFT_PTR(_DWORD, (v2 + 8));
                    v25 = *SF_DRAFT_PTR(_BYTE, v2) | 0x80;
                LABEL_98:
                    *SF_DRAFT_PTR(_BYTE, v2) = v25;
                    if ((*SF_DRAFT_PTR(_BYTE, (v24 + 10)) & 8) != 0)
                        sub_800D8F60(v24);
                }
                else
                {
                    if ((v26 & 2) != 0)
                        sub_8002BA08(v2, 0);
                    if (!*SF_DRAFT_PTR(_DWORD, (v2 + 4)))
                    {
                        v29 = *SF_DRAFT_PTR(_DWORD, (v2 + 8));
                        *SF_DRAFT_PTR(_DWORD, (v2 + 4)) = 1;
                        if ((*SF_DRAFT_PTR(_BYTE, (v29 + 10)) & 8) != 0)
                            ((void (*)(void))sub_800D8F60)();
                        if (*SF_DRAFT_PTR(_DWORD, (v2 + 4)))
                            *SF_DRAFT_PTR(_BYTE, v2) |= 0x80u;
                        else
                            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8)) = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 6));
                    }
                }
            }
            else
            {
                v27 = v26 | 0x80;
                *SF_DRAFT_PTR(_BYTE, v2) = v27;
                if ((v4 != 109 || *SF_DRAFT_PTR(_WORD, a1) != 13) && (v27 & 2) != 0)
                    sub_8002BA08(v2, 0);
                if (v4 == 107)
                    *SF_DRAFT_PTR(_BYTE, v2) &= ~8u;
                if (v4 != 109 || *SF_DRAFT_PTR(_WORD, a1) == 42)
                {
                LABEL_100:
                    *SF_DRAFT_PTR(_BYTE, (v2 + 35)) |= 2u;
                    return;
                }
                if ((*SF_DRAFT_PTR(_BYTE, v2) & 8) == 0)
                {
                    *SF_DRAFT_PTR(_BYTE, v2) |= 8u;
                    sub_800489F8(v2);
                    v28 = sub_80022994(v2);
                    sub_800229F0(v2, v28 - 1, sf_draft_guest_address(&event_position[0]));
                    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 300)) = event_position[1];
                    *SF_DRAFT_PTR(_DWORD, (v2 + 4)) = sub_800CFA20(*SF_DRAFT_PTR(_DWORD, (v2 + 8)));
                    sub_8006BC98(0, 0, v2, 0);
                    sub_8006BC98(0, 4, v2, 0);
                    sub_8002AF78(v2);
                LABEL_85:
                    sub_80015364(0xAu, 4u, (*SF_DRAFT_PTR(__int16, (v2 + 2))), (*SF_DRAFT_PTR(__int16, (v2 + 2))), 0, 0, 0, 0);
                }
            }
            return;
        default:
            return;
    }
}

#include "game_draft.h"
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);

/* TODO Resolve external dependency signatures */
uint32 sub_8002FC5C();
uint32 sub_8003C718();
uint32 sub_8003CDCC();
uint32 sub_8003CE88();
uint32 sub_8004D278();
uint32 sub_80059488();
uint32 sub_80065FA0();
uint32 sub_800663A8();
uint32 sub_800669B4();
uint32 sub_8008C358();
uint32 sub_8008C464();
uint32 sub_8008CA44();
uint32 sub_80091C14();

sint32 sub_80059574(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80059574u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v3;
    int v4;
    int *v5;
    unsigned int v6;
    int result;
    int v8;
    int v9;
    int v10;
    __int16 *v11;
    int v12;
    int v13;
    int v14;
    int v15;
    __int16 *v16;
    int v17;
    int v18;
    int v19;
    __int16 *v20;
    int v21;
    __int16 *v22;
    int v23;
    int v24;
    int v25;
    __int16 *v26;
    int v27;
    int v28;
    int v29;
    int v30;
    __int16 *v31;
    int v32;
    int v33;
    int v34;
    int v35;
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
    int v47;
    int v48;
    __int16 *v49;

    v3 = 0;
    v46 = a1;
    v47 = a2;
    v48 = -1;
    v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
    v5 = SF_DRAFT_PTR(int, (v4 + 16));
    if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3252)))
    {
        if ((*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3252)) & 1) != 0)
        {
            sub_800E0364((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_PTR(uint32, 0x801169D8u)[0] + 12))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E660u))), sf_draft_guest_address(&v37));
            if (v37 < 2560)
            {
                v5 = SF_DRAFT_PTR(int, *(int **)(SF_DRAFT_PTR(uint32, 0x801169D8u)[0] + 12));
                v3 = 1920;
            }
        }
        else if ((*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3252)) & 2) != 0)
        {
            sub_800E0364((*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x801169DCu)) + 12))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E660u))), sf_draft_guest_address(&v37));
            if (v37 < 1280)
            {
                v5 = SF_DRAFT_PTR(int, *(int **)((*SF_DRAFT_PTR(uint32, 0x801169DCu)) + 12));
                v3 = 960;
            }
        }
    }
    else if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3321)))
    {
        sub_800E0364(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80127DA8u))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E660u))), sf_draft_guest_address(&v37));
        if (v37 < 960)
        {
            v3 = 32000;
            v5 = &(*SF_DRAFT_PTR(uint32, 0x80127DA8u));
        }
    }
    if (v3)
    {
        (*SF_DRAFT_PTR(uint32, 0x8011CEC8u)) = (*v5 + (*SF_DRAFT_PTR(uint32, 0x8011E650u))) >> 1;
        (*SF_DRAFT_PTR(uint32, 0x8011CECCu)) = v5[1];
        v9 = v5[2];
        v5 = &(*SF_DRAFT_PTR(uint32, 0x8011CEC8u));
        (*SF_DRAFT_PTR(uint32, 0x8011CED0u)) = (v9 + (*SF_DRAFT_PTR(uint32, 0x8011E658u))) >> 1;
    }
    else
    {
        v6 = *(uint8 *)(v4 + 71);
        if (v6 < 0xA)
        {
        LABEL_13:
            v3 = 32000;
            goto LABEL_23;
        }
        if ((*SF_DRAFT_PTR(_DWORD, (v4 + 32)) & 1) != 0)
        {
            if ((*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 13)
                return *SF_DRAFT_PTR(char, (12 * *(uint8 *)(v4 + 67) + v47 + 8));
            v8 = **(__int16 **)(v46 + 20);
            if (v8 < 0)
                goto LABEL_13;
            v5 = SF_DRAFT_PTR(int, *(int **)(*SF_DRAFT_PTR(_DWORD, (76 * v8 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 12));
            v3 = 32;
        }
        else
        {
            v3 = 32;
            if (*SF_DRAFT_PTR(_BYTE, (v4 + 72)) != 1 && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 24)) + 8)) > 0)
            {
                v3 = 32 * (100 - v6);
            }
        }
    }
LABEL_23:
    v10 = *(uint8 *)(v4 + 67);
    v11 = SF_DRAFT_PTR(__int16, (12 * v10 + v47));
    v34 = *v11;
    v35 = v11[1];
    v36 = v11[2];
    sub_800E0364(sf_draft_guest_address(&v34), sf_draft_guest_address(v5), sf_draft_guest_address(&v38));
    v12 = v38 - v3;
    if (v38 - v3 < 0)
        v12 = v3 - v38;
    v38 = v12;
    v13 = v10;
    if ((uint16)(v11[3] & 0xF00) >> 8 == 7)
        v48 = 7;
    v14 = 0;
    v49 = v11;
    do
    {
        v15 = *((char *)v49 + v14 + 8);
        v16 = SF_DRAFT_PTR(__int16, (12 * v15 + v47));
        v17 = (uint16)(v16[3] & 0xF00) >> 8;
        if (v15 >= 0 && v15 != v13 && v17 != 1 && v17 != v48)
        {
            v34 = *v16;
            v35 = v16[1];
            v36 = v16[2];
            sub_800E0364(sf_draft_guest_address(&v34), sf_draft_guest_address(v5), sf_draft_guest_address(&v37));
            v18 = 0;
            v19 = v37 - v3;
            if (v37 - v3 < 0)
                v19 = v3 - v37;
            v37 = v19;
            v20 = v16;
            do
            {
                v21 = *((char *)v20 + 8);
                if (v21 >= 0 && v21 != v13 && v21 != v15 && v21 != 1 && v21 != v48)
                {
                    v22 = SF_DRAFT_PTR(__int16, (12 * v21 + v47));
                    v34 = *v22;
                    v35 = v22[1];
                    v36 = v22[2];
                    sub_800E0364(sf_draft_guest_address(&v34), sf_draft_guest_address(v5), sf_draft_guest_address(&v39));
                    v23 = v39 - v3;
                    if (v39 - v3 < 0)
                        v23 = v3 - v39;
                    v39 = v23;
                    if (v23 < v37)
                        v37 = v23;
                }
                v20 = (__int16 *)((char *)v16 + ++v18);
            } while (v18 < 3);
            if (v37 < v38)
            {
                v10 = v15;
                v38 = v37;
                *SF_DRAFT_PTR(_DWORD, (v4 + 32)) &= ~0x4000u;
            }
        }
        ++v14;
    } while (v14 < 3);
    if (v10 != v13)
    {
        result = v10;
        if (v10 != *(uint8 *)(v4 + 68))
            return result;
    }
    v24 = *SF_DRAFT_PTR(_DWORD, (v4 + 32));
    if ((v24 & 2) != 0)
    {
        sub_80069CB0(-1, -1, (*SF_DRAFT_PTR(__int16, (v46 + 2))), 0x7FFF, 77);
        return v10;
    }
    v25 = *(uint8 *)(v4 + 72);
    if (v25 == 1)
        goto LABEL_59;
    if ((v24 & 1) == 0)
    {
    LABEL_65:
        result = v10;
        if (v25 != 2)
            return result;
        result = v10;
        if (v3 >= 961)
            return result;
        result = v10;
        if ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v46 + 20)) + 4)) & 2) != 0)
            return result;
        v28 = 0;
        v40 = *v5 - (*SF_DRAFT_PTR(uint32, 0x8011E660u));
        v41 = v5[1] - (*SF_DRAFT_PTR(uint32, 0x8011E664u));
        v42 = v5[2] - (*SF_DRAFT_PTR(uint32, 0x8011E668u));
        v29 = 12 * v13 + v47;
        while (1)
        {
            v30 = *SF_DRAFT_PTR(char, (v29 + 8));
            v31 = SF_DRAFT_PTR(__int16, (12 * v30 + v47));
            v32 = (uint16)(v31[3] & 0xF00) >> 8;
            if (v30 >= 0 && v30 != v13 && v32 != 1 && v32 != v48)
            {
                v34 = *v31;
                v35 = v31[1];
                v36 = v31[2];
                v33 = (*v5 - v34) * v40;
                v43 = *v5 - v34;
                v44 = v5[1] - v35;
                v45 = v5[2] - v36;
                if (v33 + v45 * v42 < 0)
                    break;
            }
            v29 = ++v28 + 12 * v13 + v47;
            if (v28 >= 3)
                return v10;
        }
        v10 = v30;
        v27 = *SF_DRAFT_PTR(_DWORD, (v4 + 32)) | 0x4000;
        goto LABEL_63;
    }
    v26 = SF_DRAFT_PTR(__int16, *(__int16 **)(v46 + 20));
    if (*v26 < 0 || (*((_DWORD *)v26 + 1) & 2) != 0 || *(uint8 *)(v4 + 74) < 0x29u || (*SF_DRAFT_PTR(uint16, 0x80130C88u)) && (*SF_DRAFT_PTR(uint16, 0x80130C88u)) != 3)
    {
        v25 = *(uint8 *)(v4 + 72);
        goto LABEL_65;
    }
LABEL_59:
    v10 = sub_80059488(v47, v13, -1);
    if (*SF_DRAFT_PTR(_BYTE, (v4 + 72)) != 1)
        *SF_DRAFT_PTR(_BYTE, (v4 + 74)) = 0;
    sub_80059FCC(v46, 2, 1, 0);
    v27 = *SF_DRAFT_PTR(_DWORD, (v4 + 32)) | 0x4000;
LABEL_63:
    *SF_DRAFT_PTR(_DWORD, (v4 + 32)) = v27;
    return v10;
}

sint32 sub_800410D0(uint32 a1)
{
    FUNCTION_MARKER(0x800410D0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v2;

    int v5;
    int v6;
    int *v7;
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
    int *v34;
    int v35;
    int v36;
    int v37;
    int v38;
    int *v39;
    int v40;
    int v41;
    int v42;
    int v43;
    int *v44;
    int v45;

    int v48;
    int v49;
    int v50;
    int v51;
    int v52;

    if (SF_DRAFT_PTR(uint8, 0x80011BA8u)[*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724))])
    {
        v2 = a1;
    }
    else
    {
        v2 = a1;
        if (!a1)
        {
            sub_8003E87C();
            return 0;
        }
    }
    if (!(uint8)sub_80040B50(v2, sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8010C368u)))))
        return 0;
    v5 = (*SF_DRAFT_PTR(uint32, 0x8010C368u));
    if (v2)
    {
        if (!(*SF_DRAFT_PTR(uint32, 0x8010C368u)))
        {
            if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 687)))
                sub_8003C8F0();
            sub_80040FDC(((*SF_DRAFT_PTR(uint32, 0x8011BC70u))), 4, 15171179, 1);
        }
    }
    else
    {
        if ((*SF_DRAFT_PTR(uint32, 0x8010C368u)) < 0)
        {
            v6 = 0;
            if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 687)))
                sub_8003C718();
            v7 = SF_DRAFT_PTR(int, 0x8011BC70u);
            do
            {
                if (*v7)
                    sub_800C7BF8((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v7));
                ++v6;
                v7 += 6;
            } while (v6 < 4);
            return 0;
        }
        sub_8003E87C();
    }
    v8 = (uint16)(-2 * v5);
    v9 = (20 * v5 / -12) << 16;
    v10 = v8 | v9;
    v11 = (uint16)(2 * v5);
    LOWORD(v49) = v8 - 153;
    HIWORD(v49) = 20 * v5 / -12 + 80;
    v12 = v49;
    v13 = v11 | v9;
    LOWORD(v49) = v13 - 153;
    HIWORD(v49) = HIWORD(v13) + 80;
    v14 = v49;
    LOWORD(v49) = v8 - 153;
    HIWORD(v49) = 20 * v5 / 12 + 80;
    v15 = v49;
    (*SF_DRAFT_PTR(uint32, 0x8011BB54u)) = v12;
    v50 = v11 | ((20 * v5 / 12) << 16);
    (*SF_DRAFT_PTR(uint32, 0x8011BB58u)) = v14;
    (*SF_DRAFT_PTR(uint32, 0x8011BB5Cu)) = v15;
    LOWORD(v50) = v11 - 153;
    HIWORD(v50) += 80;
    v16 = v50;
    LOWORD(v50) = v10 - 153;
    HIWORD(v50) = HIWORD(v10) + 80;
    v17 = v50;
    v18 = 18 * v5 / 12 * v5;
    HIWORD(v50) = HIWORD(v13) + 80;
    LOWORD(v50) = v13 - 153;
    v19 = v50;
    LOWORD(v50) = -2 * v5 - 153;
    HIWORD(v50) = 80;
    (*SF_DRAFT_PTR(uint32, 0x8011BB60u)) = v16;
    (*SF_DRAFT_PTR(uint32, 0x8011BBECu)) = v17;
    (*SF_DRAFT_PTR(uint32, 0x8011BBF4u)) = v19;
    (*SF_DRAFT_PTR(uint32, 0x8011BC08u)) = v50;
    LOWORD(v50) = 2 * v5 - 154;
    v20 = 15 * v5 / 12 * v5;
    HIWORD(v50) = 80;
    LOWORD(v13) = v18 / -12;
    v21 = (uint16)(v18 / 12);
    v22 = v20 / 12;
    v23 = (v20 / -12) << 16;
    v24 = v50;
    LOWORD(v50) = (v13 | v23) - 153;
    HIWORD(v50) = HIWORD(v23) + 80;
    v25 = v50;
    LOWORD(v50) = (v21 | v23) - 153;
    HIWORD(v50) = HIWORD(v23) + 80;
    (*SF_DRAFT_PTR(uint32, 0x8011BC0Cu)) = v24;
    (*SF_DRAFT_PTR(uint32, 0x8011BB78u)) = v25;
    (*SF_DRAFT_PTR(uint32, 0x8011BB7Cu)) = v50;
    LOWORD(v50) = v13 - 153;
    v26 = v21 | (v22 << 16);
    HIWORD(v50) = v22 + 80;
    v27 = v50;
    v28 = v22 - 7;
    LOWORD(v50) = v26 - 153;
    HIWORD(v50) = HIWORD(v26) + 80;
    (*SF_DRAFT_PTR(uint32, 0x8011BB80u)) = v27;
    (*SF_DRAFT_PTR(uint32, 0x8011BB84u)) = v50;
    v29 = v28 != 0;
    if (v28 < 0)
    {
        v28 = 0;
        v29 = 0;
    }
    v30 = -v29 & 9;
    v31 = 1;
    v32 = -65536 * v28;
    v33 = v28 << 16;
    v34 = SF_DRAFT_PTR(int, 0x8011BC10u);
    do
    {
        v35 = (uint16)v30;
        if ((v31 & 1) == 0)
            v35 = (uint16) - (__int16)v30;
        v36 = v35 | v33;
        if ((v31 & 1) == 0)
            v36 = v35 | v32;
        LOWORD(v51) = v36 - 153;
        HIWORD(v51) = HIWORD(v36) + 80;
        v34[4] = v51;
        v37 = (uint16)v30;
        if ((v31 & 2) == 0)
            v37 = (uint16) - (__int16)v30;
        v38 = v37 | v32;
        if ((v31 & 2) == 0)
            v38 = v37 | v33;
        LOWORD(v52) = v38 - 153;
        HIWORD(v52) = HIWORD(v38) + 80;
        ++v31;
        v34[5] = v52;
        v34 += 6;
    } while (v31 < 5);
    v39 = SF_DRAFT_PTR(int, 0x8011BC88u);
    v40 = 2;
    (*SF_DRAFT_PTR(uint32, 0x8011BC80u)) = -6095030;
    (*SF_DRAFT_PTR(uint32, 0x8011BC84u)) = ((30 * v5 / 12 - 94) << 16) | 0xFF4A;
    do
    {
        v41 = 4 * ((SF_DRAFT_PTR(uint16, 0x80011B78u)[v40] + 178) * v5 / 12) - 3 * (SF_DRAFT_PTR(uint16, 0x80011B78u)[v40] + 178);
        if (v41 <= 0)
        {
            v39[5] = 67109888;
            v39[4] = 67109888;
        }
        else
        {
            v42 = (uint16)SF_DRAFT_PTR(uint16, 0x80011B7Au)[v40] << 16;
            v39[4] = v42 | 0xFF4B;
            v39[5] = (uint16)(v41 - 182) | v42;
        }
        v40 += 2;
        v39 += 6;
    } while (v40 < 8);
    v43 = 0;
    v44 = SF_DRAFT_PTR(int, 0x8011B38Cu);
    v45 = 404 - 271 * v5 / 12;
    do
    {
        sub_800398A8(sf_draft_guest_address(v44), v45, 91);
        ++v43;
        v44 += 3;
    } while (v43 < 23);
    sub_80086208(*(uint16 *)(SF_DRAFT_GP + 696), v45 - 15, 94);
    v48 = *(uint16 *)(SF_DRAFT_GP + 698);
    if (v48 != 0xFFFF)
        sub_80086208(v48, -153, (130 - 80 * v5 / 12));
    return 1;
}

sint32 sub_80061874(sint32 a1)
{
    FUNCTION_MARKER(0x80061874u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;
    uint8 *v4;
    int v5;
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
    int v21;
    int v22;
    unsigned int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    int v29;
    _DWORD v31[8];

    result = (sint32)(76u * *SF_DRAFT_PTR(uint32, (uint32)a1 + 8u) + r_u32(0x80115CCCu));
    v4 = SF_DRAFT_PTR(uint8, r_u32((uint32)result + 52u));
    switch (*SF_DRAFT_PTR(_WORD, a1))
    {
        case 2:
            result = -1;
            if (!*((_DWORD *)v4 + 7))
            {
                sub_8014C94C(*((sint16 *)v4 + 1), 0x80127DC0u);
                v5 = sub_800DE414(88);
                if (!v5)
                    sub_800DDC34(1, 0, 0x80116000u, 5470);
                v6 = *((__int16 *)v4 + 1);
                *((_DWORD *)v4 + 7) = v5;
                sub_8001704C(v6, sf_draft_guest_address(v31));
                *SF_DRAFT_PTR(_WORD, (v5 + 50)) = v31[6];
                sub_800DC40C(r_u32(((uint32 *)v4)[2] + 12u), 0, sf_draft_guest_address(v31));
                v4[32] |= 0x40u;
                sub_8005805C(sf_draft_guest_address(v4));
                v4[33] = 0;
                result = -1;
            }
            *((_DWORD *)v4 + 1) = -1;
            break;
        case 5:
            v13 = *((uint16 *)v4 + 1);
            result = sub_80065FA0(v13);
            break;
        case 6:
            v14 = *((uint16 *)v4 + 1);
            sub_800659B8(v14);
            if (r_u8(((uint32 *)v4)[4] + 8u) == 10)
                sub_80028F3C((*((__int16 *)v4 + 1)), 63);
            result = sub_80028F3C((*((__int16 *)v4 + 1)), 5);
            break;
        case 0xA:
            if ((v4[35] & 2) == 0)
            {
                sub_8006075C(sf_draft_guest_address(v4));
            }
            v7 = *((_DWORD *)v4 + 7);
            result = *SF_DRAFT_PTR(_DWORD, (v7 + 32)) & 0xFFFEFFFF;
            *SF_DRAFT_PTR(_DWORD, (v7 + 32)) = result;
            break;
        case 0xD:
            *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3236)) = *SF_DRAFT_PTR(_DWORD, (a1 + 4));
            result = sub_80061410(sf_draft_guest_address(v4));
            break;
        case 0x12:
            result = r_s16(((uint32 *)v4)[6] + 8u);
            if (result > 0)
            {
                v15 = *((__int16 *)v4 + 1);
                if (v15 == 666 || (result = 92, *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v15 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 92))
                {
                    if ((v16 = *SF_DRAFT_PTR(_DWORD, (76 * v15 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48)), v16 < 0) || (v17 = *SF_DRAFT_PTR(_DWORD, (76 * v16 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52))) == 0 || ((v18 = *SF_DRAFT_PTR(__int16, (v17 + 2)), v18 == 666) ? (v19 = 666) : (v19 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v18 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))))), v19 != 46 || (result = *SF_DRAFT_PTR(_BYTE, (v17 + 1)) & 0x80, (*SF_DRAFT_PTR(_BYTE, (v17 + 1)) & 0x80) == 0)))
                    {
                        result = v4[35] & 0xFD;
                        goto LABEL_61;
                    }
                }
            }
            break;
        case 0x14:
        case 0x27:
            v20 = *v4;
            result = v20 | 0x20;
            if ((v20 & 0x20) == 0)
            {
                v21 = *((__int16 *)v4 + 1);
                *v4 = (result);
                sf_draft_call((uint32)((*SF_DRAFT_PTR(uint32, 0x801163ACu))), 1u, (const uint32[]){(uint32)(v21)});
                result = sub_8008CA44(*((__int16 *)v4 + 1));
            }
            break;
        case 0x1A:
            result = 666;
            if (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            {
                v8 = *((__int16 *)v4 + 1);
                if (v8 == 666 || (v9 = 76 * v8 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)), *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, v9) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 101) || *SF_DRAFT_PTR(_BYTE, (v9 + 36)) || (v10 = *SF_DRAFT_PTR(_DWORD, (v9 + 36)) & 0x3000, v10 == 4096) || v10 == 0x2000)
                {
                    v11 = *((_DWORD *)v4 + 7);
                    v12 = *SF_DRAFT_PTR(_DWORD, (v11 + 32));
                    result = 0x40000000;
                    if ((v12 & 2) == 0)
                    {
                        result = v12 | 0x40000000;
                        *SF_DRAFT_PTR(_DWORD, (v11 + 32)) = v12 | 0x40000000;
                    }
                }
                else
                {
                    result = sub_800588A8((sint32)sf_draft_guest_address(v4));
                }
            }
            break;
        case 0x29:
            v22 = *((__int16 *)v4 + 1);
            v23 = 0;
            if (v22 != 666 && *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v22 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 92 && (unsigned int)(uint16)(*SF_DRAFT_PTR(uint16, 0x80130C88u)) - 11 < 2 && (*v4 & 0x20) != 0)
            {
                w_u16(((uint32 *)v4)[6] + 8u, 0xFFFFu);
                *SF_DRAFT_PTR(uint32, *SF_DRAFT_PTR(uint32, (uint32)a1 + 12u)) = 128u;
                result = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
                *SF_DRAFT_PTR(_WORD, result) = 0;
            }
            else
            {
                v24 = *((_DWORD *)v4 + 6);
                result = 255;
                if (*SF_DRAFT_PTR(__int16, (v24 + 8)) > 0)
                {
                    v25 = *((_DWORD *)v4 + 7);
                    if (r_u8((uint32)v25 + 67u) != 255)
                    {
                        if ((v4[35] & 2) != 0)
                        {
                            *SF_DRAFT_PTR(_WORD, (v24 + 8)) = -1;
                        }
                        else
                        {
                            if ((*v4 & 0x20) != 0)
                                v23 = *SF_DRAFT_PTR(_DWORD, (v25 + 32)) | 0xC0;
                            else
                                v23 = *SF_DRAFT_PTR(_DWORD, (v25 + 32)) & 0xFFFFFF3F | 0x40;
                            v26 = v23 & 0x200;
                            if ((v23 & 0x20) != 0)
                            {
                                v23 = (uint8)v23;
                                if (v26)
                                {
                                    v27 = 3 * (*((__int16 *)v4 + 1) - *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3164)));
                                    v23 |= ((uint32)r_u8(0x8012D688u + (uint32)v27) << 8) | ((uint32)r_u8(0x8012D689u + (uint32)v27) << 16) | ((uint32)r_u8(0x8012D68Au + (uint32)v27) << 24);
                                }
                                else
                                {
                                    v23 = 0;
                                }
                            }
                            *SF_DRAFT_PTR(uint32, *SF_DRAFT_PTR(uint32, (uint32)a1 + 12u)) = v23;
                            *SF_DRAFT_PTR(uint16, *SF_DRAFT_PTR(uint32, (uint32)a1 + 16u)) = r_u8(((uint32 *)v4)[7] + 72u) | ((uint32)r_u8(((uint32 *)v4)[7] + 67u) << 8);
                        }
                        result = r_u32(((uint32 *)v4)[7] + 32u) & 0x20;
                        if (result)
                        {
                            result = -1;
                            if (!v23)
                                w_u16(((uint32 *)v4)[6] + 8u, 0xFFFFu);
                        }
                    }
                }
            }
            break;
        case 0x2A:
            v28 = (sint32)*SF_DRAFT_PTR(uint32, *SF_DRAFT_PTR(uint32, (uint32)a1 + 12u));
            if (v28)
            {
                result = sub_800663A8(*((sint16 *)v4 + 1), *SF_DRAFT_PTR(uint8, *SF_DRAFT_PTR(uint32, (uint32)a1 + 16u)), v28, SF_DRAFT_PTR(uint8, *SF_DRAFT_PTR(uint32, (uint32)a1 + 16u))[1]);
            }
            else
            {
                v29 = *((_DWORD *)v4 + 6);
                result = -1;
                if (*SF_DRAFT_PTR(__int16, (v29 + 8)) <= 0)
                {
                    *SF_DRAFT_PTR(_WORD, (v29 + 8)) = -1;
                    result = v4[35] | 2;
                LABEL_61:
                    v4[35] = result;
                }
            }
            break;
        default:
            return result;
    }
    return result;
}

sint32 sub_80069224(sint32 a1)
{
    FUNCTION_MARKER(0x80069224u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v1;
    int v2;
    __int16 *v4;
    _DWORD *v5;
    int v6;
    int v7;
    int *v8;
    int result;
    int v10;
    _DWORD *v11;
    int v12;
    int v13;
    int v14;
    int v15;
    __int16 *v16;
    int v17;
    int *v18;
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
    int v37;
    int v38;
    int v39;
    int v40;
    sint32 direction[4];
    int v41;
    v1 = 0;
    v2 = *SF_DRAFT_PTR(_DWORD, (76 * (__int16)a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v4 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, v2 + 24));
    v5 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v2 + 8));
    v6 = v4[2];
    v7 = v4[5];
    v8 = 0;
    if (!*v5)
    {
        result = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
        if (*SF_DRAFT_PTR(__int16, (v2 + 2)) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            return result;
    }
    if (v4[7] == 2194)
    {
        (*SF_DRAFT_PTR(uint32, 0x8011E670u)) = *SF_DRAFT_PTR(uint32, v5[3] + 20);
        (*SF_DRAFT_PTR(uint32, 0x8011E674u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 24));
        v10 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 28));
        (*SF_DRAFT_PTR(uint32, 0x8011E674u)) = (0u - (*SF_DRAFT_PTR(uint32, 0x8011E674u)));
        (*SF_DRAFT_PTR(uint32, 0x8011E678u)) = v10;
        v11 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v2 + 20));
        v12 = v11[34];
        v13 = v11[35];
        v14 = v11[36];
        direction[0] = v11[33];
        direction[1] = v12;
        direction[2] = v13;
        direction[3] = v14;
        goto LABEL_21;
    }
    if (v6 == -1)
    {
        if ((unsigned int)*SF_DRAFT_PTR(uint8, v2 + 34) - 1 >= 2)
        {
            (*SF_DRAFT_PTR(uint32, 0x8011E670u)) = *SF_DRAFT_PTR(uint32, v5[3] + 20);
            (*SF_DRAFT_PTR(uint32, 0x8011E674u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 24));
            v38 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 28));
            (*SF_DRAFT_PTR(uint32, 0x8011E674u)) = (0u - (*SF_DRAFT_PTR(uint32, 0x8011E674u)));
            (*SF_DRAFT_PTR(uint32, 0x8011E678u)) = v38;
        }
        else
        {
            v35 = sub_800EC8F4();
            (*SF_DRAFT_PTR(uint32, 0x8011E670u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * (v35 % 15) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 24)))) + 20));
            v36 = sub_800EC8F4();
            (*SF_DRAFT_PTR(uint32, 0x8011E674u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * (v36 % 15) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 24)))) + 24));
            v37 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * (sub_800EC8F4() % 15) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 24)))) + 28));
            (*SF_DRAFT_PTR(uint32, 0x8011E674u)) = (0u - (*SF_DRAFT_PTR(uint32, 0x8011E674u)));
            (*SF_DRAFT_PTR(uint32, 0x8011E678u)) = v37;
        }
        if (v7 == -1)
        {
            direction[0] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 20));
            direction[1] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 24));
            v39 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 28));
            direction[0] -= (*SF_DRAFT_PTR(uint32, 0x8011E670u));
            direction[1] = -direction[1] - (*SF_DRAFT_PTR(uint32, 0x8011E674u));
            direction[2] = (v39 - (*SF_DRAFT_PTR(uint32, 0x8011E678u)));
        }
        else
        {
            sub_80067448(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E670u))), (*SF_DRAFT_PTR(_DWORD, (76 * v7 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52))), sf_draft_guest_address(&direction[0]));
        }
        goto LABEL_21;
    }
    v15 = *SF_DRAFT_PTR(_DWORD, (76 * v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v16 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, v15 + 20));
    v1 = 1;
    if (v6 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v17 = a1 << 16;
    LABEL_10:
        if (v17 >> 16 == *v16)
        {
            v24 = *((_DWORD *)v16 + 26);
            v25 = *((_DWORD *)v16 + 27);
            (*SF_DRAFT_PTR(uint32, 0x8011E670u)) = *((_DWORD *)v16 + 25);
            (*SF_DRAFT_PTR(uint32, 0x8011E674u)) = v24;
            (*SF_DRAFT_PTR(uint32, 0x8011E678u)) = v25;
            (*SF_DRAFT_PTR(uint32, 0x8011E67Cu)) = *((_DWORD *)v16 + 28);
            v26 = *((_DWORD *)v16 + 34);
            v27 = *((_DWORD *)v16 + 35);
            v28 = *((_DWORD *)v16 + 36);
            direction[0] = *((_DWORD *)v16 + 33);
            direction[1] = v26;
            direction[2] = v27;
            direction[3] = v28;
        }
        else if (v17 >> 16 == v16[46])
        {
            v29 = *((_DWORD *)v16 + 30);
            v30 = *((_DWORD *)v16 + 31);
            (*SF_DRAFT_PTR(uint32, 0x8011E670u)) = *((_DWORD *)v16 + 29);
            (*SF_DRAFT_PTR(uint32, 0x8011E674u)) = v29;
            (*SF_DRAFT_PTR(uint32, 0x8011E678u)) = v30;
            (*SF_DRAFT_PTR(uint32, 0x8011E67Cu)) = *((_DWORD *)v16 + 32);
            v31 = *((_DWORD *)v16 + 38);
            v32 = *((_DWORD *)v16 + 39);
            v33 = *((_DWORD *)v16 + 40);
            direction[0] = *((_DWORD *)v16 + 37);
            direction[1] = v31;
            direction[2] = v32;
            direction[3] = v33;
        }
        else
        {
            (*SF_DRAFT_PTR(uint32, 0x8011E670u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 20));
            (*SF_DRAFT_PTR(uint32, 0x8011E674u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 24));
            v34 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 28));
            (*SF_DRAFT_PTR(uint32, 0x8011E674u)) = (0u - (*SF_DRAFT_PTR(uint32, 0x8011E674u)));
            (*SF_DRAFT_PTR(uint32, 0x8011E678u)) = v34;
            v1 = 0;
            sub_80067448(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E670u))), v15, sf_draft_guest_address(&direction[0]));
        }
        goto LABEL_21;
    }
    v17 = a1 << 16;
    if (!(*SF_DRAFT_PTR(uint32, 0x80115E80u)))
        goto LABEL_10;
    v18 = SF_DRAFT_PTR(int, sub_8002FC5C(0));
    v19 = v18[1];
    v20 = v18[2];
    (*SF_DRAFT_PTR(uint32, 0x8011E670u)) = *v18;
    (*SF_DRAFT_PTR(uint32, 0x8011E674u)) = v19;
    (*SF_DRAFT_PTR(uint32, 0x8011E678u)) = v20;
    (*SF_DRAFT_PTR(uint32, 0x8011E67Cu)) = v18[3];
    v21 = *((_DWORD *)v16 + 34);
    v22 = *((_DWORD *)v16 + 35);
    v23 = *((_DWORD *)v16 + 36);
    direction[0] = *((_DWORD *)v16 + 33);
    direction[1] = v21;
    direction[2] = v22;
    direction[3] = v23;
LABEL_21:
    if (v6 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) && (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) == 14 && !(*SF_DRAFT_PTR(uint16, 0x80116AE6u)))
    {
        sub_8004D278(&(*SF_DRAFT_PTR(uint32, 0x8011E670u)));
        result = -1;
    }
    else if (v6 >= 0)
    {
        v40 = sub_8004CD24(v6, sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E670u))));
        if (v40 > 0)
            v8 = SF_DRAFT_PTR(int, sub_800671AC());
        if (v8)
        {
            *((_BYTE *)v8 + 28) = v40 + 1;
            v41 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 2));
            *((_WORD *)v8 + 8) = a1;
            *((_WORD *)v8 + 10) = v6;
            *((_WORD *)v8 + 11) = v7;
            v8[6] = v41;
            LOWORD(v41) = v4[6];
            *((_BYTE *)v8 + 30) = v1;
            *((_WORD *)v8 + 9) = v41;
            *v8 = *SF_DRAFT_PTR(uint32, 0x8011E670u);
            *((_WORD *)v8 + 4) = (*SF_DRAFT_PTR(uint32, 0x8011E674u));
            v8[1] = (*SF_DRAFT_PTR(uint32, 0x8011E678u));
            *((_WORD *)v8 + 5) = direction[0];
            *((_WORD *)v8 + 6) = direction[1];
            *((_WORD *)v8 + 7) = (_WORD)direction[2];
        }
        else
        {
            sub_80068770((__int16)a1, v6, v7, v4[6], *SF_DRAFT_PTR(sint16, (*SF_DRAFT_PTR(uint32, v2 + 24)) + 2), v1, 0x8011E670u, sf_draft_guest_address(direction));
        }
        sub_8004E1F0((*SF_DRAFT_PTR(_DWORD, (76 * v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E670u))));
        result = -1;
    }
    else
    {
        sub_80068770((__int16)a1, v6, v7, v4[6], *SF_DRAFT_PTR(sint16, (*SF_DRAFT_PTR(uint32, v2 + 24)) + 2), v1, 0x8011E670u, sf_draft_guest_address(direction));
        result = -1;
    }
    v4[5] = -1;
    v4[2] = -1;
    return result;
}

sint32 sub_8005D5B0(sint32 a1)
{
    FUNCTION_MARKER(0x8005D5B0u, "SCUS_942.40");
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
    unsigned int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    bool v18; // dc
    int v19;
    int result;
    int v21;
    int v22;
    int v23;
    unsigned int v24;
    int v25;

    v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
    v4 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
    if ((v4 & 0x400) == 0)
        sub_8005A694(a1);
    v5 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    if (v5 != 666 && *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v5 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 2)
    {
        sub_80059FCC(a1, 2, 0, 0);
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2868)) = *SF_DRAFT_PTR(_WORD, (a1 + 2));
    }
    v6 = v4 & 0x100;
    if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 904)))
    {
        v6 = 0;
        v7 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
        *SF_DRAFT_PTR(_WORD, (v3 + 54)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v3 + 32)) = v7 & 0xFFFFFEFF;
    }
    if (*SF_DRAFT_PTR(__int16, (v3 + 54)) > 0)
    {
        if (*SF_DRAFT_PTR(_BYTE, (v3 + 72)))
        {
            if (*SF_DRAFT_PTR(_BYTE, (v3 + 72)) == 1)
                sub_80059FCC(a1, 2, 0, 0);
            else
                sub_80059F4C(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, a1)));
        }
        else
        {
            sub_80059FCC(a1, 2, 0, 1);
            if (*(uint8 *)(v3 + 67) != *(uint8 *)(v3 + 68))
            {
                v8 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
                if ((v8 & 0x8000000) == 0)
                    *SF_DRAFT_PTR(_DWORD, (v3 + 32)) = v8 | 0x200000;
            }
        }
    }
    if (!*SF_DRAFT_PTR(_BYTE, (v3 + 72)))
    {
        if (v6)
        {
            sub_80059FCC(a1, 2, 0, 1);
            if (*(uint8 *)(v3 + 67) != *(uint8 *)(v3 + 68))
            {
                v9 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
                if ((v9 & 0x8000000) == 0)
                    *SF_DRAFT_PTR(_DWORD, (v3 + 32)) = v9 | 0x200000;
            }
        }
    }
    v10 = *(uint8 *)(v3 + 72);
    if (v10 == 1)
    {
        if (v6)
        {
            sub_80059FCC(a1, 2, 0, 1);
            if (*(uint8 *)(v3 + 67) == *(uint8 *)(v3 + 68))
                goto LABEL_31;
            v11 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
            if ((v11 & 0x8000000) != 0)
                goto LABEL_31;
            v12 = v11 | 0x200000;
        }
        else
        {
            v13 = *(uint16 *)(v3 + 52) - 1;
            *SF_DRAFT_PTR(_WORD, (v3 + 52)) = v13;
            if (v13 << 16 > 0)
                goto LABEL_31;
            if ((v4 & 0x400) != 0)
                goto LABEL_31;
            sub_80059F4C(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, a1)));
            if ((v4 & 0x4000) == 0)
                goto LABEL_31;
            sub_80059FCC(a1, 2, 1, 0);
            v12 = *SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0xFFFFBFFF;
        }
        *SF_DRAFT_PTR(_DWORD, (v3 + 32)) = v12;
    LABEL_31:
        v10 = *(uint8 *)(v3 + 72);
    }
    if (v10 != 2)
        goto LABEL_48;
    if ((*SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x20000000) != 0)
    {
        v14 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
        v15 = *SF_DRAFT_PTR(_DWORD, (v14 + 32));
        if ((v15 & 0x80000) != 0)
        {
            v16 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 212));
            if (*SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3514)) < (int)(v16 & 0xFFFF3FFF) || (v16 & 0x8000) != 0)
            {
                *SF_DRAFT_PTR(_DWORD, (v14 + 32)) = v15 & 0xFFF7FFFF;
                *SF_DRAFT_PTR(_BYTE, (v3 + 65)) = 0;
                sub_80059108(a1);
                *SF_DRAFT_PTR(_BYTE, (v3 + 65)) = 127;
                *SF_DRAFT_PTR(_BYTE, (v3 + 76)) = 0;
            }
        }
    LABEL_45:
        v19 = v4 & 0x8000;
        goto LABEL_46;
    }
    if ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 4)) & 8) != 0)
    {
        v17 = *(uint16 *)(v3 + 52) - 1;
        *SF_DRAFT_PTR(_WORD, (v3 + 52)) = v17;
        v18 = v17 << 16 > 0;
        v19 = v4 & 0x8000;
        if (!v18)
        {
            v19 = v4 & 0x8000;
            if ((v4 & 0x400) == 0)
            {
                sub_80059FCC(a1, 1, 0, 0);
                v19 = v4 & 0x8000;
            }
        }
        goto LABEL_46;
    }
    v19 = v4 & 0x8000;
    if (v6)
    {
        if ((*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 8)) & 0x40) != 0)
            sub_8005AD04(a1, 1);
        goto LABEL_45;
    }
LABEL_46:
    if (!v19)
        sub_8005AE20(a1);
LABEL_48:
    result = *(uint8 *)(v3 + 84);
    *SF_DRAFT_PTR(_WORD, (v3 + 54)) = 0;
    if (!result)
    {
        *SF_DRAFT_PTR(_DWORD, (v3 + 32)) &= ~0x40000u;
        if ((v4 & 0x40000000) != 0)
        {
            if (!*SF_DRAFT_PTR(_BYTE, (v3 + 72)))
                sub_80059FCC(a1, 2, 0, 1);
            sub_800E0364(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E650u))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E660u))), sf_draft_guest_address(&v25));
            if (v25 < 512)
            {
                *SF_DRAFT_PTR(_BYTE, (v3 + 84)) = 40;
                *SF_DRAFT_PTR(_DWORD, (v3 + 32)) |= 0x40000u;
            }
        }
        v21 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
        result = v21 & 0x40000;
        *SF_DRAFT_PTR(_DWORD, (v3 + 32)) = v21 & 0xBFFFFFFF;
        if ((v21 & 0x40000) == 0)
        {
            result = v21 & 0x400;
            if (*SF_DRAFT_PTR(_BYTE, (v3 + 72)))
            {
                v18 = result != 0;
                result = v4 & 0x800;
                if (!v18)
                {
                    v18 = result != 0;
                    result = 0x8000000;
                    if (!v18)
                    {
                        result = v21 & 0x8000000;
                        if ((v21 & 0x8000000) == 0)
                        {
                            result = v4 & 0x100;
                            if (!*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3252)) && (v4 & 0x100) != 0)
                            {
                                v22 = 76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                                if (*SF_DRAFT_PTR(_BYTE, (v22 + 36)) || (v23 = *SF_DRAFT_PTR(_DWORD, (v22 + 36)) & 0x3000, result = 0x2000, v23 == 4096) || v23 == 0x2000)
                                {
                                    v24 = *(uint8 *)(v3 + 71);
                                    result = 1;
                                    if (v24 >= 0x33 && *SF_DRAFT_PTR(_BYTE, (v3 + 75)) != 1)
                                    {
                                        if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 88)) >= 80 || (*SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x2000) == 0 || (result = 32 * (100 - v24), *SF_DRAFT_PTR(__int16, (v3 + 44)) < result))
                                        {
                                            result = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 24)) + 8));
                                            if (result > 0)
                                            {
                                                if ((*SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x40000) == 0 && (**(_DWORD **)(a1 + 16) & 8) != 0 && !*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 60)))
                                                {
                                                    sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), 76);
                                                    *SF_DRAFT_PTR(_DWORD, (v3 + 60)) = 76;
                                                }
                                                *SF_DRAFT_PTR(_BYTE, (v3 + 84)) = 40;
                                                result = *SF_DRAFT_PTR(_DWORD, (v3 + 32)) | 0x40000;
                                                *SF_DRAFT_PTR(_DWORD, (v3 + 32)) = result;
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
    }
    return result;
}

void sub_80091D08(sint32 a1)
{
    int position[3];
    FUNCTION_MARKER(0x80091D08u, "SCUS_942.40");
    /* Event locals use adapters; guest object links stay numeric */

    uint8 *v2;
    int v3;
    int v4;
    uint8 v5;
    char v6;
    uint8 v7;
    int v8;
    int v9;
    uint8 v10;
    int v11;
    int v12;
    uint8 v13;
    int v14;
    int v15;

    uint32 v17;
    uint8 v18;
    int v19;
    int v20;

    v2 = SF_DRAFT_PTR(uint8, r_u32(76u * *SF_DRAFT_PTR(uint32, (uint32)a1 + 8u) + r_u32(0x80115CCCu) + 52u));
    v3 = *((__int16 *)v2 + 1);
    if (v3 == 666)
        v4 = 666;
    else
        v4 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v3 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
    switch (*SF_DRAFT_PTR(_WORD, a1))
    {
        case 2:
            sf_draft_call((uint32)(0x80150E9Cu), 2u, (const uint32[]){sf_draft_guest_address(v2), (uint32)(v4)});
            return;
        case 5:
            v6 = *v2;
            *v2 &= ~0x40u;
            if (v4 == 46)
            {
                sub_80073DF8((sint32)sf_draft_guest_address(v2));
                sub_80073DD8(sf_draft_guest_address(v2));
                if ((v2[1] & 0x80) == 0 && r_s16(*((uint32 *)v2 + 6) + 8u) > 0)
                    goto LABEL_14;
            }
            else if ((v6 & 0x20) == 0)
            {
            LABEL_14:
                sub_8003CE88();
                return;
            }
            return;
        case 6:
            v5 = *v2 | 0x40;
            *v2 = (v5);
            if (v4 != 46)
            {
                if ((v5 & 0x20) != 0)
                    return;
                goto LABEL_10;
            }
            sub_80073CD8(sf_draft_guest_address(v2), 1, 0, 0);
            sub_80073D88(sf_draft_guest_address(v2), 1, 0, 1, 0);
            if ((v2[1] & 0x80) == 0 && r_s16(*((uint32 *)v2 + 6) + 8u) > 0)
            LABEL_10:
                sub_8003CDCC(*((__int16 *)v2 + 1));
            return;
        case 0xD:
            if ((v2[1] & 0x80) == 0 && r_s16(*((uint32 *)v2 + 6) + 8u) <= 0 && v4 == 46)
                sub_80091C14(sf_draft_guest_address(v2));
            return;
        case 0x12:
            if ((*v2 & 0x20) == 0 && r_s16(*((uint32 *)v2 + 6) + 8u) > 0)
            {
                sub_8008C358(*((_WORD *)v2 + 1), 0);
                v7 = 36;
                v8 = *((__int16 *)v2 + 1);
                v9 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
                v10 = 4;
                goto LABEL_22;
            }
            return;
        case 0x13:
            if ((*v2 & 0x20) == 0)
            {
                sub_8008C464(*((__int16 *)v2 + 1));
                v7 = 25;
                v8 = *((__int16 *)v2 + 1);
                v9 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
                v10 = 3;
            LABEL_22:
                sub_80015364(v7, v10, v8, v9, 0, 0, 0, 0);
            }
            return;
        case 0x14:
            if (v4 != 46)
                goto LABEL_31;
            if ((v2[1] & 0x80) == 0)
            {
                v11 = r_s16(76u * (uint32)(sint32) * ((sint16 *)v2 + 1) + r_u32(0x80115CCCu) + 48u);
                if (v11 != -1)
                {
                    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (76 * v11 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 35)) &= ~1u;
                    sub_8005FD04(v11);
                }
            }
            return;
        case 0x24:
        case 0x27:
        LABEL_31:
            if (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
                v12 = (v2[1] >> 7) ^ 1;
            else
                v12 = ((*v2 >> 5) ^ 1) & 1;
            if ((_BYTE)v12)
            {
                if (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
                {
                    v13 = v2[35] | 8;
                    v2[1] |= 0x80u;
                    v2[35] = v13;
                    sub_8002C378(sf_draft_guest_address(v2));
                    sub_800669B4(*SF_DRAFT_PTR(_DWORD, (a1 + 4)));
                    sub_8003CE88();
                    v14 = *((_DWORD *)v2 + 2);
                    if ((*SF_DRAFT_PTR(_BYTE, (v14 + 10)) & 8) != 0)
                        sub_800D8F60(v14);
                }
                else
                {
                    *v2 |= 0x20u;
                    sub_8002C378(sf_draft_guest_address(v2));
                    sub_8008CA44(*((_WORD *)v2 + 1));
                    if (v4 != 46)
                        sub_8003CE88();
                }
                position[0] = r_u32(r_u32(*((uint32 *)v2 + 2) + 12u) + 20u);
                position[1] = r_u32(r_u32(*((uint32 *)v2 + 2) + 12u) + 24u);
                v15 = r_u32(r_u32(*((uint32 *)v2 + 2) + 12u) + 28u);
                position[1] = (sint32)(0u - (uint32)position[1]);
                position[2] = v15;
                sub_8006BC98(1, 0x14u, 0, sf_draft_guest_address(position));
                if (r_s16(*((uint32 *)v2 + 6) + 8u) > 0)
                {
                    v17 = r_u32(SF_DRAFT_GP + 1848u);
                    if (v17)
                        sf_draft_call(v17, 2u, (uint32[]){(uint32)(sint32) * ((sint16 *)v2 + 1), (uint32)(sint32)*SF_DRAFT_PTR(sint16, (uint32)a1 + 4u)});
                }
            }
            return;
        case 0x29:
            *SF_DRAFT_PTR(uint32, *SF_DRAFT_PTR(uint32, (uint32)a1 + 12u)) = (v2[35] >> 1) & 1;
            *SF_DRAFT_PTR(uint16, *SF_DRAFT_PTR(uint32, (uint32)a1 + 16u)) = *v2 | (v2[1] << 8);
            return;
        case 0x2A:
            *v2 = (*SF_DRAFT_PTR(uint8, *SF_DRAFT_PTR(uint32, (uint32)a1 + 16u)));
            v18 = *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 1));
            v2[1] = v18;
            if ((v18 & 0x80) != 0)
            {
                v19 = v2[1] & 0x80;
                v2[35] |= 2u;
                if (v19)
                {
                    v20 = *((_DWORD *)v2 + 2);
                    if ((*SF_DRAFT_PTR(_BYTE, (v20 + 10)) & 8) != 0)
                        sub_800D8F60(v20);
                }
            }
            return;
        default:
            return;
    }
}

uint32 sub_80038E1C(uint32 a1)
{
    struct
    {
        int v45, v46, v47, v48;
        int padding[4];
    } rotation;

    FUNCTION_MARKER(0x80038E1Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    uint32 result;
    int v2;
    int *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    _DWORD *v12;
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
    __int64 v26; // kr00_8
    int v27;
    int v28;
    int v29;
    __int64 v30; // kr08_8
    int v31;
    int v32;
    int v33;
    int v34;
    int v35;
    int v36;
    int v37;
    int v38;
    int v39;
    int v40;
    __int16 v41;
    int v42;
    int v43;
    int v44;
    __int16 v49[4];
    int v50;
    int v51;
    int v52;

    result = r_u32(0x80115CCCu);
    v2 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x801169D4u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    if (!v2)
        return result;
    result = r_u32(v2 + 12);
    if (!result)
        return result;
    result = SF_DRAFT_PTR(int, result)[102];
    v4 = SF_DRAFT_PTR(int, result);
    if (!result)
        return result;
    if (SF_DRAFT_PTR(int, result)[11] || SF_DRAFT_PTR(int, result)[12] || SF_DRAFT_PTR(int, result)[13])
    {
        v5 = SF_DRAFT_PTR(int, result)[12];
        v6 = SF_DRAFT_PTR(int, result)[13];
        v7 = SF_DRAFT_PTR(int, result)[14];
        *a1_view = SF_DRAFT_PTR(int, result)[11];
        a1_view[1] = v5;
        a1_view[2] = v6;
        a1_view[3] = v7;
    }
    else
    {
        v8 = SF_DRAFT_PTR(int, result)[7];
        v9 = SF_DRAFT_PTR(int, result)[8];
        v10 = SF_DRAFT_PTR(int, result)[9];
        *a1_view = SF_DRAFT_PTR(int, result)[6];
        a1_view[1] = v8;
        a1_view[2] = v9;
        a1_view[3] = v10;
    }
    v11 = 3072;
    if ((r_u32(r_u32(v2 + 16)) & 0xC000000) == 0)
        v11 = 1024;
    v4[1] = v11;
    *v4 = 3072;
    v4[1] = 3072;
    *v4 = 3072;
    v4[1] = 3072;
    v12 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(v2 + 12));
    v37 = v12[40];
    v38 = v12[41];
    v39 = v12[42];
    v40 = v12[32];
    v42 = v12[33];
    v44 = v12[34];
    if (v37 < 0)
        v13 = v40 - (-v37 >> 12);
    else
        v13 = v40 + (v37 >> 12);
    v41 = v13;
    if (v38 < 0)
        v14 = v42 - (-v38 >> 12);
    else
        v14 = v42 + (v38 >> 12);
    v43 = v14;
    if (v39 < 0)
        v15 = v44 - (-v39 >> 12);
    else
        v15 = v44 + (v39 >> 12);
    v49[2] = -(__int16)v15;
    v49[0] = -v41;
    v49[1] = v43;
    sub_800EBE94(sf_draft_guest_address(v49), sf_draft_guest_address(&rotation));
    rotation.v45 = SF_DRAFT_PTR(uint32, 0x80011440u)[4];
    rotation.v46 = SF_DRAFT_PTR(uint32, 0x80011440u)[5];
    rotation.v47 = SF_DRAFT_PTR(uint32, 0x80011440u)[6];
    rotation.v48 = SF_DRAFT_PTR(uint32, 0x80011440u)[7];
    if (*a1_view || a1_view[1] || a1_view[2])
    {
        v50 = sub_800EC124(*a1_view, a1_view[2]);
        v16 = v4[15];
        if (v16 == 5 || (unsigned int)(v16 - 8) < 2 || (v17 = v43, v16 == 6))
        {
            v18 = *v4;
            v17 = v43;
        }
        else
        {
            v18 = v4[1];
        }
        sub_800E1480(v17, v50, v18, 1, sf_draft_guest_address(&v51), sf_draft_guest_address(&v52));
        v19 = v51 + v52;
        if (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v2 + 16)) + 8)) == 9)
        {
            v20 = v51 + v52;
            if (v19 < 0)
                v20 = -v19;
            if (v20 >= 1935)
                v51 = 0;
        }
        else
        {
            v21 = v51 + v52;
            if (v19 < 0)
                v21 = -v19;
            if (v21 >= 1935 && (unsigned int)((*SF_DRAFT_PTR(uint32, 0x8010BCA0u)) - 2) < 2 && ((*SF_DRAFT_PTR(uint32, 0x8010BB54u)) == 1 && v19 < 0 || (*SF_DRAFT_PTR(uint32, 0x8010BB54u)) == 2 && v19 > 0))
            {
                v51 = -v51;
            }
        }
        v22 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 408));
        v51 <<= 12;
        v23 = *SF_DRAFT_PTR(_DWORD, (v22 + 60));
        if (v23 == 5 || (v24 = 0, (unsigned int)(v23 - 8) < 2))
            v24 = 1;
        if (v24)
        {
            v25 = 2 * (5 * v51 + 3 * v38);
            v26 = 780903145LL * v25;
            v27 = v25 >> 31;
            v28 = SHIDWORD(v26) >> 2;
        }
        else
        {
            if (!sub_8001C960(0))
            {
                rotation.v46 = (8 * v38 + 4 * v51) / 32;
                goto LABEL_53;
            }
            v29 = 8 * v38 + 4 * v51;
            if ((*SF_DRAFT_PTR(uint32, 0x8010BCA0u)))
            {
                v28 = (int)((uint64)(2454267027LL * v29) >> 32) >> 4;
                v27 = v29 >> 31;
            }
            else
            {
                v30 = 1717986919LL * v29;
                v27 = v29 >> 31;
                v28 = SHIDWORD(v30) >> 3;
            }
        }
        rotation.v46 = v28 - v27;
    LABEL_53:
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 240)) += rotation.v45;
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 244)) += rotation.v46;
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 248)) += rotation.v47;
    }
    if (v4[11] || v4[12] || v4[13])
    {
        result = v4[11];
        v31 = v4[12];
        v32 = v4[13];
        v33 = v4[14];
        *a1_view = result;
        a1_view[1] = v31;
        a1_view[2] = v32;
        a1_view[3] = v33;
    }
    else
    {
        result = v4[6];
        v34 = v4[7];
        v35 = v4[8];
        v36 = v4[9];
        *a1_view = result;
        a1_view[1] = v34;
        a1_view[2] = v35;
        a1_view[3] = v36;
    }
    return result;
}

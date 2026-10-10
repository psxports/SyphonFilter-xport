#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);

sint32 sub_8003352C(sint32 a1, uint8 a2)
{
    sint32 hit_flags;
    FUNCTION_MARKER(0x8003352Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v3;
    char v4;
    __int16 *v5;
    int v6;
    __int16 v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int *v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int *v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    int result;
    __int16 *v30;
    int v31;
    int v33;
    unsigned int v34;
    int v35;
    __int16 v36;
    int v37;
    int v38;
    int v39;
    __int16 *v40;
    __int16 *v41;
    int v42;
    int v43;
    int v44;
    char v45;
    sint32 v46;
    bool v47; // dc
    int v48;
    int v49;
    int v50;
    int v51;
    __int16 v52;
    int v53;
    int v54;
    uint8 v55;
    __int16 *v56;
    __int16 *v57;
    int *v58;
    int v59;
    int v60;
    unsigned int v62;
    int v63;
    int v64;
    int v65;
    int v66;
    int v67;
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
    int v82[2];
    int v83;
    int v84;
    int v85;
    v3 = 0;
    v4 = 1;
    v5 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a1 + 20)));
    v6 = v5[44];
    sub_8007EAA8(a1, *SF_DRAFT_PTR(sint16, a1 + 2) != *SF_DRAFT_PTR(sint32, 0x80116AB0u));
    v8 = v5[48];
    if (!v8)
        v8 = (*SF_DRAFT_PTR(uint16, 0x80116A20u));
    v9 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    if (v9 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v11 = (uint16)(*SF_DRAFT_PTR(uint32, 0x80115FB8u));
    }
    else
    {
        v10 = 76 * v9 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        v11 = *SF_DRAFT_PTR(uint8, (v10 + 36));
        if (!*SF_DRAFT_PTR(_BYTE, (v10 + 36)))
        {
            v12 = *SF_DRAFT_PTR(_DWORD, (v10 + 36)) & 0x3000;
            if (v12 == 4096)
                v11 = 19;
            else
                v11 = v12 == 0x2000 ? 0x14 : 0;
        }
    }
    v76 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 4));
    v77 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 10));
    v13 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 16));
    v77 = -v77;
    v78 = v13;
    v14 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (a1 + 12)));
    v15 = v14[1];
    v16 = v14[2];
    v17 = v14[3];
    v68 = *v14;
    v69 = v15;
    v70 = v16;
    v71 = v17;
    v18 = *SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a1 + 20)));
    if (v18 < 0)
    {
        sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), 43);
    }
    else
    {
        v3 = *SF_DRAFT_PTR(_DWORD, (76 * v18 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        v79 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 8)) + 12)) + 4));
        v80 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 8)) + 12)) + 10));
        v19 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 8)) + 12)) + 16));
        v80 = -v80;
        v81 = v19;
        v20 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (v3 + 12)));
        v21 = v20[1];
        v22 = v20[2];
        v23 = v20[3];
        v72 = *v20;
        v73 = v21;
        v74 = v22;
        v75 = v23;
        if (((*SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C390u))) + (v11 << 16 >> 11))) >> 3) & 7) == 2)
            v4 = sub_80034450((*SF_DRAFT_PTR(__int16, (a1 + 2))), sf_draft_guest_address(&v68), sf_draft_guest_address(&v76), 32000, 2048, sf_draft_guest_address(&v72));
    }
    v24 = v5[47];
    *((_DWORD *)v5 + 52) = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
    if (v24 >= 0)
        sub_80069CB0((*SF_DRAFT_PTR(__int16, (a1 + 2))), (*SF_DRAFT_PTR(__int16, (a1 + 2))), v24, (*SF_DRAFT_PTR(_WORD, (SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(uint32, 0x8010C398u))) + (v11 << 16 >> 11) + 2)) & 0x3FF), 0x892u);
    v25 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
    if (v25 >= 0 && *SF_DRAFT_PTR(_BYTE, (a1 + 34)) == 2 && v25 != v5[47] && (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 0x1000000) != 0)
    {
        v26 = *SF_DRAFT_PTR(_DWORD, (76 * v25 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v26 + 24)) + 8)) > 0)
        {
            v27 = *SF_DRAFT_PTR(__int16, (v26 + 2));
            if (v27 == 666)
                v28 = 666;
            else
                v28 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v27 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
            if (v28 != 55)
            {
                hit_flags = sub_80046A3C((__int16)v11);
                sub_80069CB0((*SF_DRAFT_PTR(__int16, (a1 + 2))), (*SF_DRAFT_PTR(__int16, (a1 + 2))), (__int16)v25, (uint16)SF_DRAFT_PTR(uint32, 0x8010C398u)[8 * (__int16)v11] >> 6, (uint16)hit_flags);
                return 1;
            }
            sub_80069CB0((*SF_DRAFT_PTR(__int16, (a1 + 2))), (*SF_DRAFT_PTR(__int16, (a1 + 2))), (__int16)v25, (uint16)*SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C398u))) + (v11 << 16 >> 11))) >> 6, 0x892u);
        }
    }
    v30 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a1 + 20)));
    if (*v30 < 0 || !v4)
    {
        v65 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 20));
        v66 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 24));
        v31 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 28));
        v66 = -v66;
        v67 = v31;
        sub_800E0364(sf_draft_guest_address(&v65), sf_draft_guest_address(v5 + 58), sf_draft_guest_address(v82));
        v33 = v11 << 16;
        if (v82[0] >= 961)
            LOWORD(v34) = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C398u))) + (v33 >> 11) + 2));
        else
            v34 = *SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C398u))) + (v33 >> 11))) >> 6;
        v35 = v5[46];
        v36 = v34 & 0x3FF;
        if (v35 >= 0)
        {
            if (v35 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            {
                hit_flags = sub_80046A3C((__int16)v11);
                sub_80069CB0((*SF_DRAFT_PTR(__int16, (a1 + 2))), (*SF_DRAFT_PTR(__int16, (a1 + 2))), v5[46], v36, (uint16)hit_flags);
                return 0;
            }
            return 0;
        }
        if ((__int16)v11 == 16)
        {
            v40 = v5 + 58;
            v41 = v5 + 74;
            v39 = *SF_DRAFT_PTR(__int16, (a1 + 2));
        }
        else
        {
            v37 = *SF_DRAFT_PTR(__int16, (a1 + 2));
            v38 = sub_80039F84(v8);
            if (v38)
                sub_800CCDD0(sf_draft_guest_address(v5 + 58), sf_draft_guest_address(v5 + 74), sf_draft_guest_address(&v76), v38, 0);
            v39 = v37;
            v40 = v5 + 58;
            v41 = v5 + 74;
        }
        sub_80069A40(v39, sf_draft_guest_address(v40), sf_draft_guest_address(v41), sf_draft_guest_address(&v76), (sint16)v8);
        if (*SF_DRAFT_PTR(__int16, (a1 + 2)) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            return 0;
        goto LABEL_83;
    }
    if (v5[94] == *v5)
    {
        if ((*((_DWORD *)v30 + 1) & 2) != 0)
        {
            v43 = *((_DWORD *)v5 + 48);
            v44 = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
            v45 = *((_BYTE *)v5 + 200) + 1;
            *((_BYTE *)v5 + 200) = v45;
            *((_DWORD *)v5 + 49) = v43;
            *((_DWORD *)v5 + 48) = v44;
            if (v45 >= 101)
                *((_BYTE *)v5 + 200) = 100;
        }
    }
    else
    {
        v42 = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
        v5[94] = *v5;
        *((_BYTE *)v5 + 200) = 0;
        *((_DWORD *)v5 + 49) = v42;
        *((_DWORD *)v5 + 48) = v42;
    }
    if (*SF_DRAFT_PTR(_BYTE, (a1 + 34)) == 2)
    {
        v46 = v6 < 120;
        if (*SF_DRAFT_PTR(__int16, (v3 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
        {
            v47 = sub_8005ABC0() == 0;
            v46 = v6 < 120;
            if (!v47)
            {
                v6 = 0;
                v46 = 1;
            }
        }
        v47 = v46;
        v48 = a2;
        if (!v47)
            return v6;
    }
    else
    {
        if (v6 >= 100)
            return 100;
        v48 = a2;
        if ((__int16)v11 == 16)
            return 100;
    }
    if (v48 && v6 > 0 && (uint32)v6 >= sub_800EC8F4() % 100)
    {
        v64 = 1;
        if ((*SF_DRAFT_PTR(uint32, 0x80116938u)) >= 0)
            v64 = (*SF_DRAFT_PTR(uint32, 0x80116938u)) + 1;
        (*SF_DRAFT_PTR(uint32, 0x80116938u)) = v64;
        return v6;
    }
    if (*SF_DRAFT_PTR(_BYTE, (a1 + 34)) != 2)
    {
        if ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 4)) & 2) != 0)
        {
            v83 = v68 - *((_DWORD *)v5 + 29);
            v84 = v69 - *((_DWORD *)v5 + 30);
            v85 = v70 - *((_DWORD *)v5 + 31);
            *((_DWORD *)v5 + 29) = *((_DWORD *)v5 + 29) - 127 + (v83 >> 4) + (uint8)sub_800EC8F4();
            *((_DWORD *)v5 + 30) = *((_DWORD *)v5 + 30) - 127 + (v84 >> 4) + (uint8)sub_800EC8F4();
            v55 = sub_800EC8F4();
            v56 = v5 + 58;
            v57 = v5 + 74;
            v58 = &v83;
            *((_DWORD *)v5 + 31) = *((_DWORD *)v5 + 31) - 127 + (v85 >> 4) + v55;
        }
        else
        {
            v59 = v5[46];
            v56 = v5 + 58;
            if (v59 >= 0)
            {
                if (v59 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
                {
                    v65 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 20));
                    v66 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 24));
                    v60 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 28));
                    v66 = -v66;
                    v67 = v60;
                    sub_800E0364(sf_draft_guest_address(&v65), sf_draft_guest_address(v5 + 58), sf_draft_guest_address(v82));
                    hit_flags = sub_80046A3C((__int16)v11);
                    if (v82[0] >= 961)
                        LOWORD(v62) = HIWORD(SF_DRAFT_PTR(uint32, 0x8010C398u)[8 * (__int16)v11]);
                    else
                        v62 = (unsigned int)SF_DRAFT_PTR(uint32, 0x8010C398u)[8 * (__int16)v11] >> 6;
                    sub_80069CB0((*SF_DRAFT_PTR(__int16, (a1 + 2))), (*SF_DRAFT_PTR(__int16, (a1 + 2))), v5[46], v62 & 0x3FF, (uint16)hit_flags);
                }
                goto LABEL_83;
            }
            v57 = v5 + 74;
            v58 = SF_DRAFT_PTR(int, (v5 + 74));
        }
        sub_80069A40((*SF_DRAFT_PTR(__int16, (a1 + 2))), sf_draft_guest_address(v56), sf_draft_guest_address(v57), sf_draft_guest_address(v58), (sint16)v11);
    LABEL_83:
        v63 = -1;
        if ((*SF_DRAFT_PTR(uint32, 0x80116938u)) <= 0)
            v63 = (*SF_DRAFT_PTR(uint32, 0x80116938u)) - 1;
        (*SF_DRAFT_PTR(uint32, 0x80116938u)) = v63;
        return 0;
    }
    v49 = 0;
    if (v5[46] >= 0)
        v49 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 92)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    if (v49)
    {
        if ((unsigned int)*SF_DRAFT_PTR(uint8, (v49 + 34)) - 1 >= 2)
        {
            v50 = v11 << 16;
            if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v49 + 24)) + 8)) > 0)
            {
                v51 = v50 >> 16;
                v52 = *v5;
                *v5 = -1;
                hit_flags = sub_80046A3C(v51);
                sub_80069CB0((*SF_DRAFT_PTR(__int16, (a1 + 2))), (*SF_DRAFT_PTR(__int16, (a1 + 2))), v5[46], (HIWORD(SF_DRAFT_PTR(uint32, 0x8010C398u)[8 * v51]) & 0x3FF), (uint16)hit_flags);
                *v5 = v52;
                return 0;
            }
        }
    }
    if ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 4)) & 2) != 0 && *v5 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v47 = (uint8)sub_800340AC(v3, sf_draft_guest_address(&v68), sf_draft_guest_address(&v68), sf_draft_guest_address(&v83)) != 1;
        result = 0;
        if (!v47)
        {
            v53 = *SF_DRAFT_PTR(__int16, (a1 + 2));
            v54 = sub_80039F84((*SF_DRAFT_PTR(uint16, 0x80116A20u)));
            if (v54)
                sub_800CCDD0(sf_draft_guest_address(&v68), sf_draft_guest_address(&v83), sf_draft_guest_address(&v83), v54, 0);
            sub_80069A40(v53, sf_draft_guest_address(&v68), sf_draft_guest_address(&v83), sf_draft_guest_address(&v83), *SF_DRAFT_PTR(sint16, 0x80116A20u));
            return 0;
        }
    }
    else
    {
        result = 0;
        if (!v49)
        {
            sub_80069A40((*SF_DRAFT_PTR(__int16, (a1 + 2))), sf_draft_guest_address(v5 + 58), sf_draft_guest_address(v5 + 74), sf_draft_guest_address(v5 + 74), (sint16)v11);
            return 0;
        }
    }
    return result;
}

sint32 sub_8006090C(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x8006090Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint32 v6;
    uint32 v7;
    int v8;
    int v10;
    uint32 v11;
    int v12;
    bool v13; // dc
    int v14;
    int v15;
    int v16;
    uint32 v17;
    uint32 v18;
    int v19;
    uint32 v20;
    int v21;
    uint32 v22;
    __int16 *v23;
    _DWORD *v24;
    int v25;
    int v26;
    int v27;
    _DWORD *v28;
    int v29;
    int v30;
    int v31;
    int v32;
    uint32 v33;
    int v34;
    int v35;
    int v36;
    int v37;
    uint32 v38;
    int v39;
    int v40;
    int v41;
    uint32 v42;
    uint32 v43;
    int v44;
    int v45;
    int v46;
    int v47;
    int v49;
    uint32 v50;
    int v51;
    __int16 *v52;
    __int16 v53;
    int v54;
    uint32 v55;
    __int16 *v56;
    _DWORD *v57;
    int v58;
    int v59;
    int v60;
    _DWORD *v61;
    int v62;
    int v63;
    int v64;
    int v65;
    uint32 v66;
    int v67;
    int v68;
    int v69;
    int v70;
    uint32 v71;
    int v72;
    int v73;
    int result;
    sint32 origin[3];
    sint32 destination[3];
    sint32 displacement[3];
    sint32 candidate[3];
    sint32 route_origin[3];
    sint32 route_target[3];
    int v76;

    int v92;

    v6 = *SF_DRAFT_PTR(_DWORD, (76u * (uint32)a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v7 = *SF_DRAFT_PTR(_DWORD, (v6 + 28));
    sub_80017140((*SF_DRAFT_PTR(__int16, (v6 + 2))), sf_draft_guest_address(&v76), 0x80116798u);
    sub_80057EF0(4, a1, 0, 640);
    sub_8005AD04(v6, 0);
    uint8 flags = r_u8(v6 + 35u);
    v8 = r_s16(v6 + 2u);
    w_u8(v6 + 35u, flags & 0xFEu);
    sub_80028F3C(v8, 45);
    v10 = 0;
    if (*SF_DRAFT_PTR(_BYTE, (v7 + 65)))
    {
        v11 = 76u * (uint32)(sint32)*SF_DRAFT_PTR(__int16, (v6 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
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
        if (((*SF_DRAFT_PTR(unsigned int, (0x8010C390u + (uint32)v14)) >> 8) & 7) != 0 && (sub_800EC8F4() & 1) == 0)
            *SF_DRAFT_PTR(_WORD, *SF_DRAFT_PTR(uint32, (v6 + 20))) = -1;
        else
            *SF_DRAFT_PTR(_BYTE, (v7 + 65)) = 0;
    }
    if ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 12)) + 404)) & 0x100000) != 0)
    {
        v17 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2864));
        v18 = 12u * *SF_DRAFT_PTR(uint8, (v7 + 67)) + v17;
        v16 = -1;
        if ((uint16)(*SF_DRAFT_PTR(_WORD, (v18 + 6)) & 0xF00) >> 8 == 7)
        {
            v19 = 0;
            v20 = 12u * *SF_DRAFT_PTR(uint8, (v7 + 67)) + v17;
            while (1)
            {
                v21 = *SF_DRAFT_PTR(sint8, (v20 + 8));
                if (v21 != v19 && v21 >= 0 && (uint16)(*SF_DRAFT_PTR(_WORD, (12u * (uint32)v21 + v17 + 6)) & 0xF00) >> 8 == 7)
                    break;
                ++v19;
                v20 = (uint32)v19 + v18;
                if (v19 >= 3)
                    goto LABEL_18;
            }
            v16 = *SF_DRAFT_PTR(sint8, (v20 + 8));
        LABEL_18:
            if (v16 >= 0)
            {
                v22 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2864));
                v23 = SF_DRAFT_PTR(__int16, (12u * (uint32)v16 + v22));
                destination[0] = *v23;
                destination[1] = v23[1];
                destination[2] = v23[2];
                origin[0] = *SF_DRAFT_PTR(__int16, (12u * *SF_DRAFT_PTR(uint8, (v7 + 67)) + v22));
                origin[1] = *SF_DRAFT_PTR(__int16, (12u * *SF_DRAFT_PTR(uint8, (v7 + 67)) + v22 + 2));
                origin[2] = *SF_DRAFT_PTR(__int16, (12u * *SF_DRAFT_PTR(uint8, (v7 + 67)) + v22 + 4));
                *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 12)) + 408)) + 68)) = 1;
                v24 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (v6 + 12)) + 408)));
                v25 = origin[1];
                v26 = origin[2];
                v27 = (sf_draft_unbound_stack_field(0x8006090Cu, 0x2Cu), 0u);
                v24[18] = (uint32)origin[0];
                v24[19] = v25;
                v24[20] = v26;
                v24[21] = v27;
                v28 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (v6 + 12)) + 408)));
                v29 = destination[1];
                v30 = destination[2];
                v31 = (sf_draft_unbound_stack_field(0x8006090Cu, 0x3Cu), 0u);
                v28[22] = destination[0];
                v28[23] = v29;
                v28[24] = v30;
                v28[25] = v31;
                destination[1] = (sint32)((uint32)destination[1] + 64u);
                sub_80027094(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v6 + 12)))), sf_draft_guest_address(&destination[0]), 1351, 170, a3);
                destination[1] = (sint32)((uint32)destination[1] - 64u);
                *SF_DRAFT_PTR(_WORD, (v7 + 50)) = destination[1];
                *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 12)) + 300)) = destination[1];
                v32 = *SF_DRAFT_PTR(_DWORD, (76u * (uint32)(sint32)*SF_DRAFT_PTR(__int16, (v6 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
                v10 = 15;
                if (v32 >= 0)
                {
                    v33 = *SF_DRAFT_PTR(_DWORD, (76u * (uint32)v32 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
                    if (v33)
                    {
                        v34 = *SF_DRAFT_PTR(__int16, (v33 + 2));
                        v35 = v34 == 666 ? 666 : *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76u * (uint32)v34 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
                        if (v35 == 55 && (*SF_DRAFT_PTR(_DWORD, (v7 + 32)) & 0x1000000) == 0)
                        {
                            v36 = *SF_DRAFT_PTR(__int16, (v6 + 2));
                            v37 = *SF_DRAFT_PTR(__int16, (v33 + 2));
                            v38 = 76u * (uint32)v36 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                            if (*SF_DRAFT_PTR(_BYTE, (v38 + 36)))
                            {
                                v39 = 32 * *SF_DRAFT_PTR(uint8, (v38 + 36));
                            }
                            else
                            {
                                v40 = *SF_DRAFT_PTR(_DWORD, (v38 + 36)) & 0x3000;
                                if (v40 == 4096)
                                    v39 = 608;
                                else
                                    v39 = v40 == 0x2000 ? 0x280 : 0;
                            }
                            v10 = 17;
                            sub_80069CB0((sint16)v36, v36, v37, (uint16)*SF_DRAFT_PTR(int, (0x8010C398u + (uint32)v39)) >> 6, 0x892u);
                        }
                    }
                }
                if (v10 == 15)
                {
                    v41 = *SF_DRAFT_PTR(__int16, (v6 + 2));
                    if (v41 != r_s16(0x801169A0u) && (sint32)((uint32)origin[1] - (uint32)destination[1]) >= 1281)
                        sub_80056698(v41);
                }
            }
        }
        else if (a2 >= 0)
        {
            v42 = *SF_DRAFT_PTR(_DWORD, (76u * (uint32)a2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
            v43 = *SF_DRAFT_PTR(_DWORD, (v42 + 8));
            v44 = -1;
            if (v43)
            {
                origin[0] = (sint32)*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (v43 + 12)) + 20));
                origin[1] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v42 + 8)) + 12)) + 24));
                v45 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v42 + 8)) + 12)) + 28));
                origin[1] = (sint32)(0u - (uint32)origin[1]);
                origin[2] = v45;
                destination[0] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 20));
                v46 = 0;
                destination[1] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 24));
                v47 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 28));
                destination[1] = (sint32)(0u - (uint32)destination[1]);
                displacement[0] = (sint32)((uint32)origin[0] - (uint32)destination[0]);
                displacement[1] = 0;
                destination[2] = v47;
                displacement[2] = (sint32)((uint32)v45 - (uint32)v47);
                sub_800C720C(sf_draft_guest_address(&displacement[0]), sf_draft_guest_address(&displacement[0]));
                v49 = 0;
                origin[0] = (sint32)((uint32)origin[0] + (uint32)displacement[0]);
                origin[1] = (sint32)((uint32)origin[1] + (uint32)displacement[1]);
                origin[2] = (sint32)((uint32)origin[2] + (uint32)displacement[2]);
                do
                {
                    v50 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2864));
                    v51 = *SF_DRAFT_PTR(sint8, (v49 + 12u * *SF_DRAFT_PTR(uint8, (v7 + 67)) + v50 + 8));
                    if (v51 != v49 && v51 >= 0)
                    {
                        v52 = SF_DRAFT_PTR(__int16, (12u * (uint32)v51 + v50));
                        v53 = v52[3];
                        if ((uint16)(v53 & 0xF00) >> 8 == 1 && (v53 & 0xF) == 1)
                        {
                            candidate[0] = *v52;
                            candidate[1] = *(volatile sint16 *)(v52 + 1);
                            v54 = v52[2];
                            candidate[1] = origin[1];
                            candidate[2] = v54;
                            sub_800E0364(sf_draft_guest_address(&origin[0]), sf_draft_guest_address(&candidate[0]), sf_draft_guest_address(&v92));
                            if (v46 < v92)
                            {
                                v44 = v51;
                                v46 = v92;
                            }
                        }
                    }
                    ++v49;
                } while (v49 < 3);
                if (v44 >= 0)
                {
                    v55 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2864));
                    v56 = SF_DRAFT_PTR(__int16, (12u * (uint32)v44 + v55));
                    route_target[0] = *v56;
                    route_target[1] = v56[1];
                    route_target[2] = v56[2];
                    route_origin[0] = *SF_DRAFT_PTR(__int16, (12u * *SF_DRAFT_PTR(uint8, (v7 + 67)) + v55));
                    route_origin[1] = *SF_DRAFT_PTR(__int16, (12u * *SF_DRAFT_PTR(uint8, (v7 + 67)) + v55 + 2));
                    route_origin[2] = *SF_DRAFT_PTR(__int16, (12u * *SF_DRAFT_PTR(uint8, (v7 + 67)) + v55 + 4));
                    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 12)) + 408)) + 68)) = 1;
                    v57 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (v6 + 12)) + 408)));
                    v58 = route_origin[1];
                    v59 = route_origin[2];
                    v60 = (sf_draft_unbound_stack_field(0x8006090Cu, 0x74u), 0u);
                    v57[18] = route_origin[0];
                    v57[19] = v58;
                    v57[20] = v59;
                    v57[21] = v60;
                    v61 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (v6 + 12)) + 408)));
                    v62 = route_target[1];
                    v63 = route_target[2];
                    v64 = (sf_draft_unbound_stack_field(0x8006090Cu, 0x84u), 0u);
                    v61[22] = route_target[0];
                    v61[23] = v62;
                    v61[24] = v63;
                    v61[25] = v64;
                    route_target[1] = (sint32)((uint32)route_target[1] + 64u);
                    sub_80027094(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v6 + 12)))), sf_draft_guest_address(&route_target[0]), 1351, 170, a3);
                    route_target[1] = (sint32)((uint32)route_target[1] - 64u);
                    v65 = *SF_DRAFT_PTR(_DWORD, (76u * (uint32)(sint32)*SF_DRAFT_PTR(__int16, (v6 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
                    v10 = 17;
                    if (v65 >= 0)
                    {
                        v66 = *SF_DRAFT_PTR(_DWORD, (76u * (uint32)v65 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
                        if (v66)
                        {
                            v67 = *SF_DRAFT_PTR(__int16, (v66 + 2));
                            v68 = v67 == 666 ? 666 : *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76u * (uint32)v67 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
                            if (v68 == 55 && (*SF_DRAFT_PTR(_DWORD, (v7 + 32)) & 0x1000000) == 0)
                            {
                                v69 = *SF_DRAFT_PTR(__int16, (v6 + 2));
                                v70 = *SF_DRAFT_PTR(__int16, (v66 + 2));
                                v71 = 76u * (uint32)v69 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                                if (*SF_DRAFT_PTR(_BYTE, (v71 + 36)))
                                {
                                    v72 = 32 * *SF_DRAFT_PTR(uint8, (v71 + 36));
                                }
                                else
                                {
                                    v73 = *SF_DRAFT_PTR(_DWORD, (v71 + 36)) & 0x3000;
                                    if (v73 == 4096)
                                        v72 = 608;
                                    else
                                        v72 = v73 == 0x2000 ? 0x280 : 0;
                                }
                                sub_80069CB0((sint16)v69, v69, v70, (uint16)*SF_DRAFT_PTR(int, (0x8010C398u + (uint32)v72)) >> 6, 0x892u);
                            }
                        }
                    }
                }
            }
        }
    }
    result = v10;
    if ((*SF_DRAFT_PTR(_DWORD, (v7 + 32)) & 0x20000) != 0)
    {
        sub_80073DD8(v6);
        *SF_DRAFT_PTR(_DWORD, (v7 + 32)) &= ~0x20000u;
        return v10;
    }
    return result;
}

uint32 sub_8004E1F0(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8004E1F0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    int v3;
    int v4;
    int v6;
    int v7;
    unsigned int result;
    int v9;
    int v10;
    int v11;
    int v12;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    unsigned int v21;
    int v22;
    int v23;
    int v24;
    int *v25;
    int v26;
    __int16 v27;
    int v28;
    int v29;
    int v30;
    int *v31;
    int *v32;
    int v33;
    int v34;
    int v35;
    int v36;
    int v37;
    __int16 v38;
    int v40;
    unsigned int v42;
    int v43;
    int v44;
    int v45;
    int v46;
    int v47;
    int v48;
    int *v49;
    int v50;
    int v51;
    int v52;
    int v53;
    int v54;
    int v55;
    int v56;
    int v57;
    int v58;
    int v59;
    int v60;
    __int16 v61;
    __int16 v62;
    __int16 v63;
    v3 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    v4 = 76 * v3 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    if (*SF_DRAFT_PTR(_BYTE, (v4 + 36)))
    {
        v6 = *SF_DRAFT_PTR(uint8, (v4 + 36));
    }
    else
    {
        v7 = *SF_DRAFT_PTR(_DWORD, (v4 + 36)) & 0x3000;
        if (v7 == 4096)
            v6 = 19;
        else
            v6 = v7 == 0x2000 ? 0x14 : 0;
    }
    result = v6 - 6;
    if ((*SF_DRAFT_PTR(uint32, 0x80115E80u)))
    {
        result = v6 - 6;
        if (v3 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
        {
            result = 18;
            if ((unsigned int)(v6 - 12) < 2)
                return result;
            result = v6 - 6;
            if (v6 == 18)
                return result;
        }
    }
    result = result < 2;
    if (result)
        return result;
    sub_80018430((*SF_DRAFT_PTR(uint32, 0x80115D84u)), sf_draft_guest_address(&v53));
    if ((unsigned int)*SF_DRAFT_PTR(uint8, (a1 + 34)) - 1 < 2 && *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 8))) && (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 0x200) != 0)
    {
        sub_800456D0(a1, sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011CDC8u))));
    }
    else
    {
        result = 4 * v3;
        if (v3 == 666)
            return result;
        result = 3;
        if (*SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v3 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 3)
            return result;
        v9 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 16));
        (*SF_DRAFT_PTR(uint32, 0x8011CDC8u)) = *SF_DRAFT_PTR(_DWORD, (v9 + 20));
        (*SF_DRAFT_PTR(uint32, 0x8011CDCCu)) = *SF_DRAFT_PTR(_DWORD, (v9 + 24));
        v10 = *SF_DRAFT_PTR(_DWORD, (v9 + 28));
        (*SF_DRAFT_PTR(uint32, 0x8011CDCCu)) = (sint32)(0u - (*SF_DRAFT_PTR(uint32, 0x8011CDCCu)));
        (*SF_DRAFT_PTR(uint32, 0x8011CDD0u)) = v10;
        v11 = *SF_DRAFT_PTR(__int16, (v9 + 4));
        v54 = v11;
        v55 = *SF_DRAFT_PTR(__int16, (v9 + 10));
        v12 = *SF_DRAFT_PTR(__int16, (v9 + 16));
        v55 = -v55;
        v56 = v12;
        v54 = sub_800C6D4C(v11, 256);
        v55 = sub_800C6D4C(v55, 256);
        v56 = sub_800C6D4C(v56, 256);
        (*SF_DRAFT_PTR(uint32, 0x8011CDC8u)) += v54;
        (*SF_DRAFT_PTR(uint32, 0x8011CDCCu)) += v55;
        (*SF_DRAFT_PTR(uint32, 0x8011CDD0u)) += v56;
    }
    (*SF_DRAFT_PTR(uint32, 0x8011CDB8u)) = (*SF_DRAFT_PTR(uint32, 0x8011CDC8u)) - *a2_view;
    (*SF_DRAFT_PTR(uint32, 0x8011CDBCu)) = (*SF_DRAFT_PTR(uint32, 0x8011CDCCu)) - a2_view[1];
    (*SF_DRAFT_PTR(uint32, 0x8011CDC0u)) = (*SF_DRAFT_PTR(uint32, 0x8011CDD0u)) - a2_view[2];
    sub_800C720C(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011CDB8u))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011CDB8u))));
    sub_800E0364(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011CDC8u))), sf_draft_guest_address(a2_view), sf_draft_guest_address(&v57));
    (*SF_DRAFT_PTR(uint32, 0x8011CDB8u)) = (sint32)(0u - (*SF_DRAFT_PTR(uint32, 0x8011CDB8u))) >> 3;
    (*SF_DRAFT_PTR(uint32, 0x8011CDBCu)) = (sint32)(0u - (*SF_DRAFT_PTR(uint32, 0x8011CDBCu))) >> 3;
    (*SF_DRAFT_PTR(uint32, 0x8011CDC0u)) = (sint32)(0u - (*SF_DRAFT_PTR(uint32, 0x8011CDC0u))) >> 3;
    v14 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
    v15 = (v57 - 512) >> 9;
    if (v14)
    {
        v16 = 76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        v17 = *SF_DRAFT_PTR(__int16, (v14 + 56));
        v18 = v17;
        if (v17 < 0)
            v18 = -v17;
        v19 = 32 * *SF_DRAFT_PTR(uint8, (v16 + 36));
        if (!*SF_DRAFT_PTR(_BYTE, (v16 + 36)))
        {
            v20 = *SF_DRAFT_PTR(_DWORD, (v16 + 36)) & 0x3000;
            if (v20 == 4096)
                v19 = 608;
            else
                v19 = v20 == 0x2000 ? 0x280 : 0;
        }
        v21 = *SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C390u))) + v19)) >> 11;
    }
    else
    {
        v18 = (*SF_DRAFT_PTR(uint32, 0x38));
        v21 = (unsigned int)SF_DRAFT_PTR(uint32, 0x8010C3B0u)[8 * (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) - 8] >> 11;
    }
    v22 = v21 & 7;
    if (v15 < 0)
        goto LABEL_37;
    result = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
    if (v3 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        if (v22 <= 0)
            goto LABEL_38;
        if (v18 % v22 || (v23 = sub_8004C0E8(1, *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2684)))) == 0)
        {
        LABEL_37:
            result = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
        LABEL_38:
            if (v3 != result)
                return result;
            goto LABEL_39;
        }
        *SF_DRAFT_PTR(_DWORD, (v23 + 44)) = 4;
        v24 = *SF_DRAFT_PTR(__int16, (v23 + 30));
        *SF_DRAFT_PTR(_DWORD, (v23 + 48)) = 3;
        v25 = &SF_DRAFT_PTR(uint32, 0x80137740u)[26 * v24];
        v25[4] = (*SF_DRAFT_PTR(uint32, 0x8011CDB8u));
        v25[5] = (*SF_DRAFT_PTR(uint32, 0x8011CDBCu)) << 12;
        v26 = (*SF_DRAFT_PTR(uint32, 0x8011CDC0u));
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2684)) = v23;
        v25[6] = v26;
        *SF_DRAFT_PTR(_BYTE, (v23 + 38)) = 0;
        (*SF_DRAFT_PTR(uint32, 0x8011CDC8u)) = *a2_view - v15 * (*SF_DRAFT_PTR(uint32, 0x8011CDB8u));
        (*SF_DRAFT_PTR(uint32, 0x8011CDCCu)) = a2_view[1] - v15 * (*SF_DRAFT_PTR(uint32, 0x8011CDBCu));
        (*SF_DRAFT_PTR(uint32, 0x8011CDD0u)) = a2_view[2] - v15 * (*SF_DRAFT_PTR(uint32, 0x8011CDC0u));
        *((_WORD *)v25 + 40) = (*SF_DRAFT_PTR(uint32, 0x8011CDC8u)) - (*SF_DRAFT_PTR(uint32, 0x8011CDB8u));
        *((_WORD *)v25 + 41) = (*SF_DRAFT_PTR(uint32, 0x8011CDCCu)) - (*SF_DRAFT_PTR(uint32, 0x8011CDBCu));
        LOWORD(v24) = (*SF_DRAFT_PTR(uint32, 0x8011CDD0u));
        v27 = (*SF_DRAFT_PTR(uint32, 0x8011CDC0u));
        *((_WORD *)v25 + 18) = v15 + 2;
        *((_WORD *)v25 + 42) = v24 - v27;
        v28 = (*SF_DRAFT_PTR(uint32, 0x8011CDCCu));
        v29 = (*SF_DRAFT_PTR(uint32, 0x8011CDD0u));
        v30 = (*SF_DRAFT_PTR(uint32, 0x8011CDD4u));
        *v25 = (*SF_DRAFT_PTR(uint32, 0x8011CDC8u));
        v25[1] = v28;
        v25[2] = v29;
        v25[3] = v30;
        v25[8] = 38600;
        v31 = v25 + 10;
        if ((*SF_DRAFT_PTR(uint32, 0x80115E80u)))
        {
            v32 = v25 + 10;
            if ((*SF_DRAFT_PTR(uint32, 0x80115FB8u)) != 12)
            {
            LABEL_36:
                sub_800C811C(sf_draft_guest_address(v32), 0, 400, 400, v25[8]);
                sub_800C7BB0(v53, sf_draft_guest_address(v31));
                goto LABEL_37;
            }
            v25[8] = 38400;
        }
        v32 = v25 + 10;
        goto LABEL_36;
    }
LABEL_39:
    result = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3708)) + 24 < 120;
    if (*SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3708)) + 24 < 120)
    {
        result = 12;
        if (!(*SF_DRAFT_PTR(uint32, 0x80115E80u)) || (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) != 12)
        {
            v33 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
            v34 = (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v33 + 28)) + 4)) + *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v33 + 28)) + 6)) + *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v33 + 28)) + 8))) >> 1;
            if (v34 >= 4097)
                v34 = 4096;
            (*SF_DRAFT_PTR(uint32, 0x8011CDC8u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v33 + 24)) + 32)) + 20));
            (*SF_DRAFT_PTR(uint32, 0x8011CDCCu)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 24));
            v35 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 28));
            (*SF_DRAFT_PTR(uint32, 0x8011CDCCu)) = 8 - (*SF_DRAFT_PTR(uint32, 0x8011CDCCu));
            (*SF_DRAFT_PTR(uint32, 0x8011CDD0u)) = v35;
            LOWORD(v58) = *SF_DRAFT_PTR(_WORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)));
            v36 = -*SF_DRAFT_PTR(uint16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 2));
            HIWORD(v58) = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 2));
            LOWORD(v59) = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 4));
            HIWORD(v59) = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 6));
            LOWORD(v60) = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 8));
            HIWORD(v60) = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 10));
            v61 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 12));
            v37 = -*SF_DRAFT_PTR(uint16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 14));
            v62 = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 14));
            LOWORD(v35) = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 16));
            (*SF_DRAFT_PTR(uint32, 0x8011CDC0u)) = -(__int16)v37;
            (*SF_DRAFT_PTR(uint32, 0x8011CDB8u)) = -(__int16)v36;
            (*SF_DRAFT_PTR(uint32, 0x8011CDBCu)) = -(__int16)v60;
            v63 = v35;
            (*SF_DRAFT_PTR(uint32, 0x8011CDBCu)) = sub_800EC8F4() & 0x1FFF | 0x8000;
            (*SF_DRAFT_PTR(uint32, 0x8011CDC0u)) = (sub_800EC8F4() & 0x1FFF) - 8 * (*SF_DRAFT_PTR(uint32, 0x8011CDB8u));
            v38 = sub_800EC8F4();
            v40 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2680));
            (*SF_DRAFT_PTR(uint32, 0x8011CDB8u)) = -8 * (__int16)v37 + (v38 & 0x1FFF);
            result = sub_8004C0E8(1, v40);
            v42 = result;
            if (result)
            {
                v43 = *SF_DRAFT_PTR(__int16, (result + 30));
                v58 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 28)) + 20));
                v59 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 28)) + 24));
                v44 = v59;
                v45 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3824));
                v46 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 28));
                *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2680)) = v42;
                v47 = *SF_DRAFT_PTR(_DWORD, (v46 + 28));
                v59 = -v44;
                v48 = 32 - v44;
                v60 = v47;
                v49 = &SF_DRAFT_PTR(uint32, 0x80137740u)[26 * v43];
                if (v48 < v45)
                    LOWORD(v45) = v48;
                *SF_DRAFT_PTR(_WORD, (v42 + 26)) = -8192;
                *SF_DRAFT_PTR(_DWORD, (v42 + 44)) = 6;
                *SF_DRAFT_PTR(_WORD, (v42 + 28)) = v45;
                *SF_DRAFT_PTR(_DWORD, (v42 + 48)) = 2;
                v50 = (*SF_DRAFT_PTR(uint32, 0x8011CDCCu));
                v51 = (*SF_DRAFT_PTR(uint32, 0x8011CDD0u));
                v52 = (*SF_DRAFT_PTR(uint32, 0x8011CDD4u));
                *v49 = (*SF_DRAFT_PTR(uint32, 0x8011CDC8u));
                v49[1] = v50;
                v49[2] = v51;
                v49[3] = v52;
                *((_WORD *)v49 + 18) = 60;
                v49[4] = (*SF_DRAFT_PTR(uint32, 0x8011CDB8u)) >> 12;
                v49[5] = (*SF_DRAFT_PTR(uint32, 0x8011CDBCu));
                v49[6] = (*SF_DRAFT_PTR(uint32, 0x8011CDC0u)) >> 12;
                *((_WORD *)v49 + 49) = sub_800EC8F4() & 0x7FF;
                *((_WORD *)v49 + 50) = 256;
                *((_WORD *)v49 + 48) = 7;
                sub_800C8148(sf_draft_guest_address(v49 + 10), ((9 * v34) >> 10 << 16) + ((((9 * v34) >> 8) - ((9 * v34) >> 10)) << 8) + ((9 * v34) >> 8), 400, 400);
                return sub_800C7BB0(v53, sf_draft_guest_address(v49 + 10));
            }
        }
    }
    return result;
}

sint32 sub_8007265C(sint32 a1, sint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x8007265Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint32 v5;
    int v7;
    uint32 v8;
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
    uint32 v22;
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
    uint32 v35;
    int v36;
    int v37;
    int v38;
    int v39;
    int v40;
    int v41;
    int v42;
    int v43;
    bool v44; // dc
    int result;
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
    int v58;
    int v59;
    int v60;
    int v61;
    int v62;
    int v63;
    int v64;
    int v65;
    int v66;
    int v67;
    int v68;
    int v69;
    int v70;
    int v71;
    int v72;
    bool v73;
    bool v74;
    bool v75;
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
    uint32 camera_cell, camera_matrix, camera_index;
    sint16 camera_basis[9];
    uint32 output_value, operand;
    v5 = r_u32(((uint32)a1 + 12u));
    v7 = r_u32((v5 + 260u));
    v8 = r_u32((v5 + 416u));
    w_u32(a3, (uint32)(0));
    w_u32(a3 + 4u, (uint32)(0));
    w_u32(a3 + 8u, (uint32)(0));
    w_u32(a4, (uint32)(0));
    w_u32(a4 + 4u, (uint32)(0));
    w_u32(a4 + 8u, (uint32)(0));
    if (a2 == r_u32((v8 + 36u)))
    {
        v51 = (sint16)r_u16((r_u32((r_u32(((uint32)a1 + 8u)) + 12u)) + 4u));
        v52 = -(sint16)r_u16((r_u32((r_u32(((uint32)a1 + 8u)) + 12u)) + 10u));
        v54 = -v51;
        v53 = (sint16)r_u16((r_u32((r_u32(((uint32)a1 + 8u)) + 12u)) + 16u));
        if (r_u8((v8 + 28u)))
        {
            v10 = r_u32((v8 + 12u));
            if (v10)
            {
                v55 = sub_800C6D4C(v53, v10);
                v59 = sub_800C6D4C(0, r_u32((v8 + 12u)));
                v63 = sub_800C6D4C(v54, r_u32((v8 + 12u)));
                {
                    output_value = r_u32(a4);
                    operand = (uint32)(v55);
                    w_u32(a4, output_value + operand);
                }
                {
                    output_value = r_u32(a4 + 4u);
                    operand = (uint32)(v59);
                    w_u32(a4 + 4u, output_value + operand);
                }
                {
                    output_value = r_u32(a4 + 8u);
                    operand = (uint32)(v63);
                    w_u32(a4 + 8u, output_value + operand);
                }
            }
            v11 = r_u32((v8 + 20u));
            if (v11)
            {
                v56 = sub_800C6D4C(v51, v11);
                v60 = sub_800C6D4C(v52, r_u32((v8 + 20u)));
                v64 = sub_800C6D4C(v53, r_u32((v8 + 20u)));
                {
                    output_value = r_u32(a4);
                    operand = (uint32)(v56);
                    w_u32(a4, output_value + operand);
                }
                {
                    output_value = r_u32(a4 + 4u);
                    operand = (uint32)(v60);
                    w_u32(a4 + 4u, output_value + operand);
                }
                {
                    output_value = r_u32(a4 + 8u);
                    operand = (uint32)(v64);
                    w_u32(a4 + 8u, output_value + operand);
                }
            }
            {
                output_value = r_u32(a4 + 4u);
                operand = (uint32)(r_u32((v8 + 16u)));
                w_u32(a4 + 4u, output_value + operand);
            }
        }
        else
        {
            v18 = r_u32((v8 + 12u));
            v12 = r_u32((v8 + 16u));
            v13 = r_u32((v8 + 20u));
            v14 = r_u32((v8 + 24u));
            w_u32(a4, (uint32)(v18));
            w_u32(a4 + 4u, (uint32)(v12));
            w_u32(a4 + 8u, (uint32)(v13));
            w_u32(a4 + 12u, (uint32)(v14));
        }
        v18 = (sint32)r_u32(a4);
        v15 = (sint32)r_u32(a4 + 4u);
        v16 = (sint32)r_u32(a4 + 8u);
        v17 = (sint32)r_u32(a4 + 12u);
        w_u32(a3, (uint32)(v18));
        w_u32(a3 + 4u, (uint32)(v15));
        w_u32(a3 + 8u, (uint32)(v16));
        w_u32(a3 + 12u, (uint32)(v17));
        if (v7 != 4096 && v7)
        {
            v18 = sub_800C6D90((sint32)r_u32(a3), v7);
            v19 = (sint32)r_u32(a3 + 4u);
            w_u32(a3, (uint32)(v18));
            v20 = sub_800C6D90(v19, v7);
            v21 = (sint32)r_u32(a3 + 8u);
            w_u32(a3 + 4u, (uint32)(v20));
            w_u32(a3 + 8u, (uint32)(sub_800C6D90(v21, v7)));
        }
        v73 = r_u8((v8 + 29u)) == 0;
        v74 = r_u8((v8 + 30u)) == 0;
        v75 = r_u8((v8 + 31u)) == 0;
        if (v73 || v74 || v75)
        {
            v22 = r_u32((v8 + 36u));
            v67 = r_u32(v22 + 156u);
            v69 = r_u32(v22 + 160u);
            v71 = r_u32(v22 + 164u);
            v17 = r_u32(v22 + 168u);
            if (!v73)
            {
                v29 = sub_800C6D4C(v67, v51);
                v30 = sub_800C6D4C(v69, v52);
                v77 = (sint32)((uint32)v29 + (uint32)v30 + (uint32)sub_800C6D4C(v71, v53));
                v57 = sub_800C6D4C(v51, v77);
                v26 = sub_800C6D4C(v52, v77);
                v27 = v53;
                v28 = v77;
            }
            else
            {
                if (v75)
                {
                    {
                        output_value = r_u32(a4);
                        operand = (uint32)(v67);
                        w_u32(a4, output_value + operand);
                    }
                    v23 = (sint32)(r_u32(a4 + 8u) + (uint32)v71);
                    goto LABEL_21;
                }
                v24 = sub_800C6D4C(v67, v53);
                v25 = sub_800C6D4C(v69, 0);
                v76 = (sint32)((uint32)v24 + (uint32)v25 + (uint32)sub_800C6D4C(v71, v54));
                v57 = sub_800C6D4C(v53, v76);
                v26 = sub_800C6D4C(0, v76);
                v27 = -v51;
                v28 = v76;
            }
            v61 = v26;
            v65 = sub_800C6D4C(v27, v28);
            {
                output_value = r_u32(a4);
                operand = (uint32)(v57);
                w_u32(a4, output_value + operand);
            }
            {
                output_value = r_u32(a4 + 4u);
                operand = (uint32)(v61);
                w_u32(a4 + 4u, output_value + operand);
            }
            v23 = (sint32)(r_u32(a4 + 8u) + (uint32)v65);
        LABEL_21:
            w_u32(a4 + 8u, (uint32)(v23));
            if (v74)
            {
                output_value = r_u32(a4 + 4u);
                operand = (uint32)(v69);
                w_u32(a4 + 4u, output_value + operand);
            }
            if (v7 != 4096 && v7)
            {
                v31 = sub_800C6D4C((sint32)r_u32(a4), v7);
                v32 = (sint32)r_u32(a4 + 4u);
                w_u32(a4, (uint32)(v31));
                v33 = sub_800C6D4C(v32, v7);
                v34 = (sint32)r_u32(a4 + 8u);
                w_u32(a4 + 4u, (uint32)(v33));
                w_u32(a4 + 8u, (uint32)(sub_800C6D4C(v34, v7)));
            }
            if ((sint32)r_u32(a4 + 4u) <= 0)
                w_u32(a4 + 4u, (uint32)(0));
            v35 = r_u32((v8 + 36u));
            v68 = r_u32(v35 + 92u);
            v70 = r_u32(v35 + 96u);
            v72 = r_u32(v35 + 100u);
            v17 = r_u32(v35 + 104u);
            if (v73)
            {
                if (v75)
                {
                    {
                        output_value = r_u32(a3);
                        operand = (uint32)(v68);
                        w_u32(a3, output_value + operand);
                    }
                    v36 = (sint32)(r_u32(a3 + 8u) + (uint32)v72);
                LABEL_34:
                    w_u32(a3 + 8u, (uint32)(v36));
                    if (v74)
                    {
                        output_value = r_u32(a3 + 4u);
                        operand = (uint32)(v70);
                        w_u32(a3 + 4u, output_value + operand);
                    }
                    if ((sint32)r_u32(a3 + 4u) <= 0)
                        w_u32(a3 + 4u, (uint32)(0));
                    goto LABEL_38;
                }
                v37 = sub_800C6D4C(v68, v53);
                v38 = sub_800C6D4C(v70, 0);
                v78 = (sint32)((uint32)v37 + (uint32)v38 + (uint32)sub_800C6D4C(v72, v54));
                v58 = sub_800C6D4C(v53, v78);
                v39 = sub_800C6D4C(0, v78);
                v40 = -v51;
                v41 = v78;
            }
            else
            {
                v42 = sub_800C6D4C(v68, v51);
                v43 = sub_800C6D4C(v70, v52);
                v79 = (sint32)((uint32)v42 + (uint32)v43 + (uint32)sub_800C6D4C(v72, v53));
                v58 = sub_800C6D4C(v51, v79);
                v39 = sub_800C6D4C(v52, v79);
                v40 = v53;
                v41 = v79;
            }
            v62 = v39;
            v66 = sub_800C6D4C(v40, v41);
            {
                output_value = r_u32(a3);
                operand = (uint32)(v58);
                w_u32(a3, output_value + operand);
            }
            {
                output_value = r_u32(a3 + 4u);
                operand = (uint32)(v62);
                w_u32(a3 + 4u, output_value + operand);
            }
            v36 = (sint32)(r_u32(a3 + 8u) + (uint32)v66);
            goto LABEL_34;
        }
    }
LABEL_38:
    v44 = !(uint8)sub_8003559C(a1);
    result = 1;
    if (!v44)
    {
        camera_cell = r_u32(0x80115D84u);
        for (camera_index = 0u; camera_index < 9u; ++camera_index)
        {
            camera_matrix = r_u32(r_u32(camera_cell));
            camera_basis[camera_index] = (sint16)r_u16(camera_matrix + 2u * camera_index);
            if (camera_index & 1u)
                camera_basis[camera_index] = (sint16)(0u - (uint16)camera_basis[camera_index]);
        }
        v80 = -(sint32)camera_basis[6];
        v81 = camera_basis[0];
        v46 = sub_800C6D4C((sint32)r_u32(a4), v80);
        v47 = sub_800C6D4C((sint32)r_u32(a4 + 4u), 0);
        v87 = (sint32)((uint32)v46 + (uint32)v47 + (uint32)sub_800C6D4C((sint32)r_u32(a4 + 8u), v81));
        v82 = sub_800C6D4C(v80, v87);
        v84 = sub_800C6D4C(0, v87);
        v86 = sub_800C6D4C(v81, v87);
        {
            output_value = r_u32(a4);
            operand = (uint32)(v82);
            w_u32(a4, output_value - operand);
        }
        {
            output_value = r_u32(a4 + 4u);
            operand = (uint32)(v84);
            w_u32(a4 + 4u, output_value - operand);
        }
        {
            output_value = r_u32(a4 + 8u);
            operand = (uint32)(v86);
            w_u32(a4 + 8u, output_value - operand);
        }
        v48 = sub_800C6D4C((sint32)r_u32(a3), v80);
        v49 = sub_800C6D4C((sint32)r_u32(a3 + 4u), 0);
        v88 = (sint32)((uint32)v48 + (uint32)v49 + (uint32)sub_800C6D4C((sint32)r_u32(a3 + 8u), v81));
        v83 = sub_800C6D4C(v80, v88);
        v85 = sub_800C6D4C(0, v88);
        v50 = sub_800C6D4C(v81, v88);
        {
            output_value = r_u32(a3);
            operand = (uint32)(v83);
            w_u32(a3, output_value - operand);
        }
        {
            output_value = r_u32(a3 + 4u);
            operand = (uint32)(v85);
            w_u32(a3 + 4u, output_value - operand);
        }
        {
            output_value = r_u32(a3 + 8u);
            operand = (uint32)(v50);
            w_u32(a3 + 8u, output_value - operand);
        }
        return 1;
    }
    return result;
}

sint32 sub_800D7AEC(sint32 a1, uint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800D7AECu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint8 *a2_view = SF_DRAFT_PTR(uint8, a2);
    int result;
    unsigned int v6;
    int v7;
    int v9;
    unsigned int v10;
    unsigned int v11;
    int v12;
    int v13;
    unsigned int v14;
    int v15;
    int v16;
    unsigned int v17;
    int v18;
    int v19;
    unsigned int v20;
    int v21;
    int v22;
    unsigned int v23;
    int v24;
    int v25;
    unsigned int v26;
    int v27;
    int v28;
    int v29;
    unsigned int v30;
    int v31;
    int v32;
    int v33;
    int v34;
    int v35;
    unsigned int v36;
    int v37;
    int v38;
    int v39;
    unsigned int v40;
    int v41;
    unsigned int v42;
    int v43;
    int v44;
    int v45;
    int v46;
    unsigned int v47;
    int v48;
    int v49;
    int v50;
    unsigned int v51;
    int v52;
    int v53;
    unsigned int v54;
    unsigned int v55;
    int v56;
    int v57;
    int v58;
    int v59;
    int v60;
    int v61;
    unsigned int v62;
    int v63;
    int v64;
    int v65;
    int v66;
    int v67;
    int v68;
    int v69;
    int v70;
    int v71;
    int v72;
    int v73;
    int v74;
    int v75;
    int i;
    int v77;
    int v78;
    int v79;
    int v80;
    int v81;
    unsigned int v82;
    int v83;
    int v84;
    char v85;
    unsigned int v86;
    int v87;
    int v88;
    unsigned int v89;
    int v90;
    int v91;
    int v92;
    int v93;
    if (*a2_view == 255)
    {
        result = 255;
        *SF_DRAFT_PTR(_WORD, a1) = 255;
        *SF_DRAFT_PTR(_WORD, (a1 + 4)) = 0;
        return result;
    }
    *SF_DRAFT_PTR(_BYTE, a1) = *a2_view;
    v6 = a2_view[1];
    *SF_DRAFT_PTR(_BYTE, (a1 + 2)) = 0;
    *SF_DRAFT_PTR(_BYTE, (a1 + 1)) = v6 >> 4;
    *SF_DRAFT_PTR(_WORD, (a1 + 4)) = ~_byteswap_ushort(*((_WORD *)a2_view + 1));
    *SF_DRAFT_PTR(_BYTE, (a1 + 6)) = a2_view[4];
    *SF_DRAFT_PTR(_BYTE, (a1 + 7)) = a2_view[5];
    *SF_DRAFT_PTR(_BYTE, (a1 + 8)) = a2_view[6];
    *SF_DRAFT_PTR(_BYTE, (a1 + 9)) = a2_view[7];
    v9 = sub_800FF4E0(a3);
    v7 = sub_800FF5A0(a3, 2, 0);
    v10 = a1 + 4;
    if (v7 && *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3108)))
    {
        v11 = a1 + 4;
        if (v9 != 6)
            goto LABEL_10;
        if (sub_800FF814(a3, (*SF_DRAFT_PTR(uint32, 0x80116564u))))
            sub_800FF894(a3, sf_draft_guest_address(&(*SF_DRAFT_PTR(uint8, 0x80116888u))), 2);
        v10 = a1 + 4;
    }
    v11 = v10;
LABEL_10:
    v12 = 12;
    v13 = v10 & 3;
    *SF_DRAFT_PTR(_DWORD, (a1 + 12)) = 0;
    *SF_DRAFT_PTR(_DWORD, (a1 + 16)) = 0;
    *SF_DRAFT_PTR(_DWORD, (a1 + 20)) = 0;
    if ((v10 & 3) != 0)
    {
        v12 = 8 * v13 + 12;
        v11 = v10 & 0xFFFFFFFC;
    }
    if ((*SF_DRAFT_PTR(_DWORD, (4 * (v12 >> 5) + v11)) & (1 << (v12 & 0x1F))) != 0)
        *SF_DRAFT_PTR(_DWORD, (a1 + 20)) = 127;
    v14 = v10;
    v15 = 14;
    if ((v10 & 3) != 0)
    {
        v15 = 8 * v13 + 14;
        v14 = v10 & 0xFFFFFFFC;
    }
    v16 = *SF_DRAFT_PTR(_DWORD, (4 * (v15 >> 5) + v14)) & (1 << (v15 & 0x1F));
    v17 = v10;
    if (v16)
        *SF_DRAFT_PTR(_DWORD, (a1 + 20)) -= 127;
    v18 = 13;
    if ((v10 & 3) != 0)
    {
        v18 = 8 * v13 + 13;
        v17 = v10 & 0xFFFFFFFC;
    }
    v19 = *SF_DRAFT_PTR(_DWORD, (4 * (v18 >> 5) + v17)) & (1 << (v18 & 0x1F));
    v20 = v10;
    if (v19)
        *SF_DRAFT_PTR(_DWORD, (a1 + 12)) += 127;
    v21 = 15;
    if ((v10 & 3) != 0)
    {
        v21 = 8 * v13 + 15;
        v20 = v10 & 0xFFFFFFFC;
    }
    v22 = *SF_DRAFT_PTR(_DWORD, (4 * (v21 >> 5) + v20)) & (1 << (v21 & 0x1F));
    v23 = v10;
    if (v22)
        *SF_DRAFT_PTR(_DWORD, (a1 + 12)) -= 127;
    v24 = 12;
    if ((v10 & 3) != 0)
    {
        v24 = 8 * v13 + 12;
        v23 = v10 & 0xFFFFFFFC;
    }
    v25 = *SF_DRAFT_PTR(_DWORD, (4 * (v24 >> 5) + v23)) & (1 << (v24 & 0x1F));
    v26 = v10;
    if (v25)
    {
        v27 = 14;
        if ((v10 & 3) != 0)
        {
            v27 = 8 * v13 + 14;
            v26 = v10 & 0xFFFFFFFC;
        }
        v28 = *SF_DRAFT_PTR(_DWORD, (4 * (v27 >> 5) + v26)) & (1 << (v27 & 0x1F));
        v29 = a1 + 4;
        if (v28)
        {
            v30 = a1 + 4;
            v31 = v29 & 3;
            v32 = 12;
            if ((v29 & 3) != 0)
            {
                v32 = 8 * v31 + 12;
                v30 = v29 & 0xFFFFFFFC;
            }
            v33 = a1 + 4;
            v34 = 14;
            *SF_DRAFT_PTR(_DWORD, (4 * (v32 >> 5) + v30)) &= ~(1 << (v32 & 0x1F));
            if ((v29 & 3) != 0)
            {
                v34 = 8 * v31 + 14;
                v33 &= 0xFFFFFFFC;
            }
            *SF_DRAFT_PTR(_DWORD, (4 * (v34 >> 5) + v33)) &= ~(1 << (v34 & 0x1F));
        }
    }
    v35 = a1 + 4;
    v36 = a1 + 4;
    v37 = (a1 + 4) & 3;
    v38 = 13;
    if (v37)
    {
        v38 = 8 * v37 + 13;
        v36 = v35 & 0xFFFFFFFC;
    }
    v39 = *SF_DRAFT_PTR(_DWORD, (4 * (v38 >> 5) + v36)) & (1 << (v38 & 0x1F));
    v40 = a1 + 4;
    if (v39)
    {
        v41 = 15;
        if (v37)
        {
            v41 = 8 * v37 + 15;
            v40 = v35 & 0xFFFFFFFC;
        }
        v42 = a1 + 4;
        if ((*SF_DRAFT_PTR(_DWORD, (4 * (v41 >> 5) + v40)) & (1 << (v41 & 0x1F))) != 0)
        {
            v43 = 13;
            if (v37)
            {
                v43 = 8 * v37 + 13;
                v42 = v35 & 0xFFFFFFFC;
            }
            v44 = a1 + 4;
            v45 = 15;
            *SF_DRAFT_PTR(_DWORD, (4 * (v43 >> 5) + v42)) &= ~(1 << (v43 & 0x1F));
            if (v37)
            {
                v45 = 8 * v37 + 15;
                v44 &= 0xFFFFFFFC;
            }
            *SF_DRAFT_PTR(_DWORD, (4 * (v45 >> 5) + v44)) &= ~(1 << (v45 & 0x1F));
        }
    }
    v46 = a1 + 4;
    v47 = a1 + 4;
    v48 = (a1 + 4) & 3;
    v49 = 12;
    if (v48)
    {
        v49 = 8 * v48 + 12;
        v47 = v46 & 0xFFFFFFFC;
    }
    v50 = *SF_DRAFT_PTR(_DWORD, (4 * (v49 >> 5) + v47)) & (1 << (v49 & 0x1F));
    v51 = a1 + 4;
    if (v50)
        goto LABEL_54;
    v52 = 14;
    if (v48)
    {
        v52 = 8 * v48 + 14;
        v51 = v46 & 0xFFFFFFFC;
    }
    v53 = *SF_DRAFT_PTR(_DWORD, (4 * (v52 >> 5) + v51)) & (1 << (v52 & 0x1F));
    v54 = a1 + 4;
    if (v53)
    {
    LABEL_54:
        v55 = a1 + 4;
        v56 = (a1 + 4) & 3;
        v57 = 13;
        if (v56)
        {
            v57 = 8 * v56 + 13;
            v55 = (a1 + 4) & 0xFFFFFFFC;
        }
        v58 = a1 + 4;
        v59 = 15;
        *SF_DRAFT_PTR(_DWORD, (4 * (v57 >> 5) + v55)) &= ~(1 << (v57 & 0x1F));
        if (!v56)
            goto LABEL_69;
        v59 = 8 * v56 + 15;
    LABEL_68:
        v58 &= 0xFFFFFFFC;
    LABEL_69:
        *SF_DRAFT_PTR(_DWORD, (4 * (v59 >> 5) + v58)) &= ~(1 << (v59 & 0x1F));
        goto LABEL_70;
    }
    v60 = 13;
    if (v48)
    {
        v60 = 8 * v48 + 13;
        v54 = v46 & 0xFFFFFFFC;
    }
    if ((*SF_DRAFT_PTR(_DWORD, (4 * (v60 >> 5) + v54)) & (1 << (v60 & 0x1F))) != 0)
        goto LABEL_64;
    v61 = 15;
    if (v48)
    {
        v61 = 8 * v48 + 15;
        v46 &= 0xFFFFFFFC;
    }
    if ((*SF_DRAFT_PTR(_DWORD, (4 * (v61 >> 5) + v46)) & (1 << (v61 & 0x1F))) != 0)
    {
    LABEL_64:
        v62 = a1 + 4;
        v63 = (a1 + 4) & 3;
        v64 = 12;
        if (v63)
        {
            v64 = 8 * v63 + 12;
            v62 = (a1 + 4) & 0xFFFFFFFC;
        }
        v58 = a1 + 4;
        v59 = 14;
        *SF_DRAFT_PTR(_DWORD, (4 * (v64 >> 5) + v62)) &= ~(1 << (v64 & 0x1F));
        if (!v63)
            goto LABEL_69;
        v59 = 8 * v63 + 14;
        goto LABEL_68;
    }
LABEL_70:
    v65 = *SF_DRAFT_PTR(uint8, (a1 + 1));
    if (v65 == 2 || (result = 7, v65 == 5) || v65 == 7)
    {
        v66 = *SF_DRAFT_PTR(uint8, (a1 + 8));
        *SF_DRAFT_PTR(_BYTE, (a1 + 2)) = 1;
        v67 = v66 - 127;
        if (v66 - 127 >= 128)
            v67 = 127;
        v68 = *SF_DRAFT_PTR(uint8, (a1 + 9));
        *SF_DRAFT_PTR(_DWORD, (a1 + 28)) = v67;
        *SF_DRAFT_PTR(_DWORD, (a1 + 32)) = 0;
        if (v68 - 127 >= 128)
            v69 = -127;
        else
            v69 = 127 - v68;
        v70 = *SF_DRAFT_PTR(uint8, (a1 + 6));
        *SF_DRAFT_PTR(_DWORD, (a1 + 36)) = v69;
        v71 = v70 - 127;
        if (v70 - 127 >= 128)
            v71 = 127;
        v72 = *SF_DRAFT_PTR(uint8, (a1 + 7));
        *SF_DRAFT_PTR(_DWORD, (a1 + 44)) = v71;
        *SF_DRAFT_PTR(_DWORD, (a1 + 48)) = 0;
        v73 = v72 - 127 >= 128 ? -127 : 127 - v72;
        result = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
        *SF_DRAFT_PTR(_DWORD, (a1 + 52)) = v73;
        if (!result)
        {
            result = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
            if (!result)
            {
                result = *SF_DRAFT_PTR(_DWORD, (a1 + 20));
                v74 = 1;
                if (!result)
                {
                    v75 = a1 + 4;
                    for (i = a1 + 16;; i += 16)
                    {
                        v77 = *SF_DRAFT_PTR(_DWORD, (i + 20));
                        v78 = v77;
                        if (v77 < 0)
                            v78 = -v77;
                        if (v78 >= 97)
                            break;
                        v79 = *SF_DRAFT_PTR(_DWORD, (i + 12));
                        if (v79 < 0)
                            v79 = -v79;
                        if (v79 >= 97)
                            break;
                        result = ++v74 < 2;
                        if (v74 >= 2)
                            return result;
                    }
                    v80 = *SF_DRAFT_PTR(_DWORD, (i + 12));
                    v81 = v80;
                    if (v80 < 0)
                        v81 = -v80;
                    if (v81 >= v78)
                    {
                        if (v80 < 97)
                        {
                            result = v75 & 3;
                            if (v80 >= -96)
                                return result;
                            v92 = 15;
                            if ((v75 & 3) != 0)
                            {
                                v92 = 8 * result + 15;
                                v75 &= 0xFFFFFFFC;
                            }
                            v93 = v92 >> 5;
                            v85 = v92 & 0x1F;
                            result = 4 * v93 + v75;
                        }
                        else
                        {
                            v89 = a1 + 4;
                            v90 = 13;
                            if ((v75 & 3) != 0)
                            {
                                v90 = 8 * (v75 & 3) + 13;
                                v89 = v75 & 0xFFFFFFFC;
                            }
                            v91 = v90 >> 5;
                            v85 = v90 & 0x1F;
                            result = 4 * v91 + v89;
                        }
                    }
                    else
                    {
                        result = v77 < -96;
                        if (v77 < 97)
                        {
                            v86 = a1 + 4;
                            if (!result)
                                return result;
                            v87 = 14;
                            if ((v75 & 3) != 0)
                            {
                                v87 = 8 * (v75 & 3) + 14;
                                v86 = v75 & 0xFFFFFFFC;
                            }
                            v88 = v87 >> 5;
                            v85 = v87 & 0x1F;
                            result = 4 * v88 + v86;
                        }
                        else
                        {
                            v82 = a1 + 4;
                            v83 = 12;
                            if ((v75 & 3) != 0)
                            {
                                v83 = 8 * (v75 & 3) + 12;
                                v82 = v75 & 0xFFFFFFFC;
                            }
                            v84 = v83 >> 5;
                            v85 = v83 & 0x1F;
                            result = 4 * v84 + v82;
                        }
                    }
                    *SF_DRAFT_PTR(_DWORD, result) |= 1 << v85;
                }
            }
        }
    }
    return result;
}

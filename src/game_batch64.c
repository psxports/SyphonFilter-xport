#include "game_draft.h"

sint32 sub_8014E1B8(uint8 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8014E1B8u, "INIT.OVL");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    unsigned int v3;
    __int16 *v4;
    _DWORD *v5;
    _DWORD *v6;
    _DWORD *v7;
    __int16 *v8;
    int v9;
    int v10;
    int v11;
    _DWORD *v12;
    int v13;
    int v14;
    uint16 v15;
    int v16;
    int v17;
    int v18;
    char *v19;
    int m;
    _DWORD *v21;
    _DWORD *v22;
    signed int v23;
    _DWORD *v24;
    _DWORD *v25;
    int v26;
    int n;
    int result;
    int v29;
    unsigned int v30;
    _DWORD *v31;
    _DWORD *v32;
    unsigned int i;
    _DWORD *v34;
    _DWORD *v35;
    int j;
    _DWORD *v37;
    int k;

    if (a2 <= 0)
    {
        v3 = 0;
        if (!a1)
        {
        LABEL_32:
            v29 = (sint32)(16u * (uint32)a2);
            if ((*SF_DRAFT_PTR(uint8, 0x80115F16u)) != 255)
            {
                sub_80084C30((*SF_DRAFT_PTR(uint8, 0x80115F16u)));
                (*SF_DRAFT_PTR(uint8, 0x80115F16u)) = -1;
                v29 = (sint32)(16u * (uint32)a2);
            }
            v30 = (v29 + a2) / 0xCu;
            v31 = SF_DRAFT_PTR(_DWORD, 0x801546FCu + 36 * v30);
            v32 = SF_DRAFT_PTR(_DWORD, 0x80154960u + 48 * v30);
            for (i = v30; i < 0x11; v32 = v34 + 6)
            {
                if (*v31)
                    sub_800C7BF8((*SF_DRAFT_PTR(uint32, 0x80116964u)), sf_draft_guest_address(v31));
                v31 += 9;
                if (*v32)
                    sub_800C7BF8((*SF_DRAFT_PTR(uint32, 0x80116964u)), sf_draft_guest_address(v32));
                v34 = v32 + 6;
                if (*v34)
                    sub_800C7BF8((*SF_DRAFT_PTR(uint32, 0x80116964u)), sf_draft_guest_address(v34));
                ++i;
            }
            v35 = SF_DRAFT_PTR(_DWORD, 0x80154C90u + 24 * (43 * a2 / 12));
            for (j = 43 * a2 / 12; j < 43; v35 += 6)
            {
                if (*v35)
                    sub_800C7BF8((*SF_DRAFT_PTR(uint32, 0x80116964u)), sf_draft_guest_address(v35));
                ++j;
            }
            v37 = SF_DRAFT_PTR(uint32, 0x80155098u);
            for (k = 0; k < 3; ++k)
            {
                if (*v37)
                    sub_800C7BF8((*SF_DRAFT_PTR(uint32, 0x80116964u)), sf_draft_guest_address(v37));
                v37 += 6;
            }
            return 1;
        }
        v4 = SF_DRAFT_PTR(__int16, 0x8014C17Cu);
        v5 = SF_DRAFT_PTR(uint32, 0x801546FCu);
        v6 = SF_DRAFT_PTR(uint32, 0x80154960u);
        v7 = SF_DRAFT_PTR(uint32, 0x80154C90u);
        v8 = SF_DRAFT_PTR(__int16, 0x8014C180u);
        do
        {
            v9 = *((_DWORD *)v8 + 1);
            v10 = *((_DWORD *)v8 + 2);
            ++v3;
            sub_800C7CEC(sf_draft_guest_address(v5), 5908510, *(_DWORD *)v4, *(_DWORD *)v8, v9, v10);
            v5[1] = 2;
            v5 += 9;
            v11 = *(_DWORD *)v4;
            v4 += 4;
            *v5 = 0;
            sub_800C8148(sf_draft_guest_address(v6), 11822170, v11, v9);
            v6[1] = 1;
            v12 = v6 + 6;
            v13 = *(_DWORD *)v8;
            v8 += 4;
            *v12 = 0;
            sub_800C8148(sf_draft_guest_address(v12), 11822170, v13, v10);
            v12[1] = 1;
            v6 = v12 + 6;
            *v6 = 0;
        } while (v3 < 0x11);
        sub_8014D4F4(0);
        v14 = 0;
        v15 = -156;
        do
        {
            v16 = 70;
            if ((unsigned int)(v14 - 9) < 9)
                v16 = 83;
            sub_800C8148(sf_draft_guest_address(v7), 4595240, v15 | 0xFFA30000, v15 | (v16 << 16));
            v7[1] = 7;
            v7 += 6;
            v15 += 12;
            ++v14;
            *v7 = 0;
        } while (v14 < 27);
        v17 = 0;
        v18 = -88;
        do
        {
            sub_800C8148(sf_draft_guest_address(v7), 4595240, ((uint32)v18 << 16) | 0xFF59, ((uint32)v18 << 16) | 0xA7);
            v7[1] = 7;
            v7 += 6;
            v18 += 10;
            ++v17;
            *v7 = 0;
        } while (v17 < 16);
        v19 = SF_DRAFT_PTR(char, 0x80155098u);
        for (m = 0; m < 3; ++m)
        {
            sub_800C8148(sf_draft_guest_address(v19), 16757880, ((m + 79) << 16) | 0xFFCE, ((m + 79) << 16) | 0xFFCE);
            v19 += 24;
        }
    }
    if (!a1)
        goto LABEL_32;
    v21 = SF_DRAFT_PTR(uint32, 0x801546FCu);
    v22 = SF_DRAFT_PTR(uint32, 0x80154960u);
    v23 = 0;
    if ((uint32)(17u * (uint32)a2) / 12u)
    {
        do
        {
            if (!*v21)
                sub_800C7BB0((*SF_DRAFT_PTR(uint32, 0x80116964u)), sf_draft_guest_address(v21));
            v21[3] = 676997150;
            v21 += 9;
            if (!*v22 && v23 != 11)
                sub_800C7BB0((*SF_DRAFT_PTR(uint32, 0x80116964u)), sf_draft_guest_address(v22));
            v24 = v22 + 6;
            if (!*v24 && v23 != 15)
                sub_800C7BB0((*SF_DRAFT_PTR(uint32, 0x80116964u)), sf_draft_guest_address(v24));
            ++v23;
            v22 = v24 + 6;
        } while (v23 < (int)((uint32)(17u * (uint32)a2) / 12u));
    }
    if ((unsigned int)v23 < 0x11)
    {
        sub_800C7BB0((*SF_DRAFT_PTR(uint32, 0x80116964u)), sf_draft_guest_address(v21));
        v21[3] = 687846520;
    }
    v25 = SF_DRAFT_PTR(uint32, 0x80154C90u);
    v26 = 43 * a2 / 12;
    for (n = 0; n < v26; v25 += 6)
    {
        if (!*v25)
            sub_800C7BB0((*SF_DRAFT_PTR(uint32, 0x80116964u)), sf_draft_guest_address(v25));
        v25[3] = 1078337064;
        ++n;
    }
    result = 1;
    if (n < 43)
    {
        sub_800C7BB0((*SF_DRAFT_PTR(uint32, 0x80116964u)), sf_draft_guest_address(v25));
        v25[3] = 1089516664;
        return 1;
    }
    return result;
}

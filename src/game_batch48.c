#include "game_draft.h"
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_80086540();

extern uint32 sub_800EC8D4();
extern uint32 sub_800ED6FC();
extern sint32 sub_800F1624(sint32 mode);
extern sint32 sub_800F9AA4(sint16 left, sint16 right);
extern sint32 sub_800F9B34(sint16 mode);

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x800C5F18u 0x800c5f18
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800C5F18(sint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x800C5F18u, "SCUS_942.40");
    _DWORD *v4 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
    int *result;
    int v6;
    int v7 = SF_DRAFT_GP;
    int *v8;
    bool v9;
    char v10[8];

    result = SF_DRAFT_PTR(int, v4[497]);
    if (!result && (result = SF_DRAFT_PTR(int, v4[498])) == 0 || a3)
    {
        v6 = v4[497];
        v4[501] = 0;
        if (v6 || v4[498])
        {
            v8 = SF_DRAFT_PTR(int, v4[771]);
            *v8 = a1;
            v8[1] = a2;
            v8[2] = a4;
            v8 += 3;
            v4[771] = sf_draft_guest_address(v8);
            v9 = 0x8012237Cu >= sf_draft_guest_address(v8);
            result = SF_DRAFT_PTR(uint32, 0x80122328u);
            if (!v9)
                v4[771] = sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x80122328u));
        }
        else
        {
            v4[773] = 64;
            v10[0] = 1;
            v10[1] = a2;
            v4[772] = a1;
            v4[495] = 0;
            v4[774] = (uint8)a2;
            v4[499] = 0;
            sub_800ED6FC(13, sf_draft_guest_address(v10));
            return sub_800C64C0(6, *SF_DRAFT_PTR(_DWORD, (v7 + 3088)));
        }
    }
    return sf_draft_guest_address(result);
}

// FUNCTION_MARKER 0x800C956Cu 0x800c956c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C956C(sint8 a1)
{
    FUNCTION_MARKER(0x800C956Cu, "SCUS_942.40");
    int v1 = SF_DRAFT_GP;
    int v2;
    unsigned int v3;
    int v4;
    bool v5;
    int *v6;
    int v7;

    v2 = (*SF_DRAFT_PTR(uint32, 0x8012C8A0u));
    v3 = 0;
    if (*SF_DRAFT_PTR(_DWORD, (v1 + 3232)))
    {
        v4 = a1 & 1;
        v5 = a1 == 0;
        v6 = SF_DRAFT_PTR(int, 0x80128058u);
        do
        {
            v7 = *((uint8 *)v6 + 4);
            if (*SF_DRAFT_PTR(_DWORD, (v1 + 2100)))
                break;
            if ((v7 == 3 || !v4) && (!v5 || v7 != 3))
                sub_800D59CC(sf_draft_guest_address(v6), v6[4]);
            ++v3;
            v6 += 5;
        } while (v3 < *SF_DRAFT_PTR(_DWORD, (v1 + 3232)));
    }
    return (uint16)(((*SF_DRAFT_PTR(uint32, 0x8012C8A0u)) - v2) / 0x28u);
}

// FUNCTION_MARKER 0x800CD824u 0x800cd824
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800CD824(uint32 arg0)
{
    FUNCTION_MARKER(0x800CD824u, "SCUS_942.40");
    uint8 v2;
    int v3;
    int v4;
    int v5;
    __int16 v6;
    int v7;
    __int16 v8;
    int result;

    v2 = 0;
    v3 = 0;
    v4 = 0;
    do
    {
        v5 = SF_DRAFT_PTR(uint32, 0x8012D6A4u)[v4];
        if (arg0)
        {
            v7 = *SF_DRAFT_PTR(__int16, (v5 + 6));
            if (v7 < 240)
            {
                v2 = 1;
                v8 = *SF_DRAFT_PTR(_WORD, (v5 + 2));
                *SF_DRAFT_PTR(_WORD, (v5 + 6)) = v7 + 4;
                *SF_DRAFT_PTR(_WORD, (v5 + 2)) = v8 - 2;
            }
        LABEL_8:
            ++v3;
            goto LABEL_9;
        }
        v6 = *SF_DRAFT_PTR(_WORD, (v5 + 6));
        if (v6 >= 240)
            goto LABEL_8;
        do
        {
            *SF_DRAFT_PTR(_WORD, (v5 + 6)) = v6 + 4;
            v6 = *SF_DRAFT_PTR(_WORD, (v5 + 6));
            *SF_DRAFT_PTR(_WORD, (v5 + 2)) -= 2;
        } while (v6 < 240);
        ++v3;
    LABEL_9:
        v4 += 61;
    } while (v3 < 3);
    result = v2;
    if (arg0)
    {
        if (v2)
            return sub_800C8A9C((int)0x800CD824u, 2, (int)arg0);
        else
            return (sint32)sf_draft_call(arg0, 0u, NULL);
    }
    return result;
}

// FUNCTION_MARKER 0x800C8BB0u 0x800c8bb0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800C8BB0(uint8 a1)
{
    FUNCTION_MARKER(0x800C8BB0u, "SCUS_942.40");
    int v1 = SF_DRAFT_GP;
    int *v2;
    int v3;
    int v4;
    int v5;
    int *v6;
    int v7;
    int result;
    uint32 callback;

    v2 = SF_DRAFT_PTR(int, r_u32((v1 + 2148)));
    v3 = (*SF_DRAFT_PTR(uint32, 0x8012D734u));
    if (v2)
    {
        v4 = a1;
        while (1)
        {
            v5 = *v2;
            v6 = SF_DRAFT_PTR(int, v2[2]);
            v7 = 666;
            if (v4 || (result = *SF_DRAFT_PTR(_DWORD, (v5 + 8)), result == -524288000))
            {
                result = *SF_DRAFT_PTR(_DWORD, (v5 + 4)) - 1;
                v7 = result;
                *SF_DRAFT_PTR(_DWORD, (v5 + 4)) = result;
            }
            if (v7)
                goto LABEL_9;
            callback = r_u32((uint32)v5);
            *SF_DRAFT_PTR(_DWORD, v5) = 0;
            sub_800DE6E0(0x801164CCu, sf_draft_guest_address(v2));
            result = (*SF_DRAFT_PTR(uint32, 0x8012D734u));
            v2 = v6;
            if ((*SF_DRAFT_PTR(uint32, 0x8012D734u)) == v3)
                break;
        LABEL_10:
            if (!v2)
                return;
        }
        {
            uint32 argument = r_u32((uint32)v5 + 8u);
            sf_draft_call(callback, 1u, &argument);
        }
    LABEL_9:
        v2 = v6;
        goto LABEL_10;
    }
    return;
}

// FUNCTION_MARKER 0x80080674u 0x80080674
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80080674(sint32 a1)
{
    FUNCTION_MARKER(0x80080674u, "SCUS_942.40");
    _DWORD *v1 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
    int result;
    int v4;
    int v5;
    int v6;
    int v7;

    result = v1[826];
    v4 = 0;
    if (result > 0)
    {
        v5 = 0;
        do
        {
            v6 = v5 + v1[905];
            if (*SF_DRAFT_PTR(_DWORD, (v6 + 12)) == a1)
            {
                if (*SF_DRAFT_PTR(int, (v6 + 16)) >= 0)
                    sub_800DDC34(1, 0, 0x80012350u, 387);
                v7 = v5 + v1[905];
                if (*SF_DRAFT_PTR(_DWORD, (v7 + 16)) == 1)
                    --v1[890];
                *SF_DRAFT_PTR(_DWORD, (v7 + 16)) = 0;
            }
            result = ++v4 < (sint32)v1[826];
            v5 += 20;
        } while (v4 < (sint32)v1[826]);
    }
    return result;
}

// FUNCTION_MARKER 0x80048354u 0x80048354
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80048354(uint32 a1, uint32 a2)
{
    _DWORD *native_a1 = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *native_a2 = SF_DRAFT_PTR(_DWORD, a2);
    FUNCTION_MARKER(0x80048354u, "SCUS_942.40");
    int v2;
    int v3;
    int v4;
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
    int result;

    v2 = native_a2[1];
    v3 = native_a2[2];
    v4 = native_a2[3];
    native_a1[16] = *native_a2;
    native_a1[17] = v2;
    native_a1[18] = v3;
    native_a1[19] = v4;
    v5 = native_a1[17];
    v6 = native_a1[1];
    native_a1[20] = native_a1[16] - *native_a1;
    v7 = native_a1[18];
    v8 = native_a1[2];
    native_a1[21] = v5 - v6;
    v9 = native_a1[20];
    native_a1[22] = v7 - v8;
    v10 = native_a1[21];
    native_a1[20] = v9 << 12;
    v11 = native_a1[22] << 12;
    native_a1[21] = v10 << 12;
    native_a1[22] = v11;
    v12 = native_a1[21];
    v13 = native_a1[22];
    v14 = native_a1[23];
    native_a1[24] = native_a1[20];
    native_a1[25] = v12;
    native_a1[26] = v13;
    native_a1[27] = v14;
    v15 = native_a1[9];
    v16 = native_a1[10];
    native_a1[28] = native_a1[24] - native_a1[8];
    v17 = native_a1[26] - v16;
    native_a1[29] = native_a1[25] - v15;
    result = 1;
    native_a1[30] = v17;
    return result;
}

// FUNCTION_MARKER 0x8008CD00u 0x8008cd00
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8008CD00(uint32 a1, sint32 a2)
{
    char *native_a1 = SF_DRAFT_PTR(char, a1);
    FUNCTION_MARKER(0x8008CD00u, "SCUS_942.40");
    uint16 *v4;
    bool v5;
    int result;
    int v7;

    v4 = (uint16 *)SF_DRAFT_PTR(uint16, 0x80121764u)[a2];
    v5 = sub_80086104(*v4) == 0;
    LOBYTE(result) = 1;
    if (!v5)
    {
        if ((uint8)SF_DRAFT_PTR(uint8, 0x8012179Cu)[a2] == (uint8)sub_800865BC(sf_draft_guest_address(native_a1)))
        {
            v7 = sub_800EC8A4(sf_draft_guest_address(native_a1));
            sub_80086540(*v4, 2 * v7 + 24);
            LOBYTE(result) = 0;
        }
        else
        {
            sub_80086018(*v4);
            LOBYTE(result) = 1;
        }
    }
    result = (uint8)result;
    if ((_BYTE)result)
    {
        SF_DRAFT_PTR(uint16, 0x80121764u)[a2] = sub_80085D04(sf_draft_guest_address(native_a1), 0);
        result = sub_800865BC(sf_draft_guest_address(native_a1));
        SF_DRAFT_PTR(uint8, 0x8012179Cu)[a2] = result;
    }
    return result;
}

// FUNCTION_MARKER 0x800DFF9Cu 0x800dff9c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DFF9C(uint32 a1, sint32 a2, uint32 a3)
{
    int *native_a1 = SF_DRAFT_PTR(int, a1);
    _DWORD *native_a3 = SF_DRAFT_PTR(_DWORD, a3);
    FUNCTION_MARKER(0x800DFF9Cu, "SCUS_942.40");
    int v3;
    int result;
    int v5;
    int v6;
    uint8 *v7;
    int v8;
    uint8 *v9;
    int v10;

    if (!native_a1)
        return 1;
    v3 = *native_a1;
    result = 1;
    if (!*native_a1)
        return result;
    if (!native_a3)
        return 1;
    result = 14;
    if (a2 >= 0)
    {
        v5 = 0;
        if (a2 < *SF_DRAFT_PTR(sint32, (v3 + 4)))
        {
            v6 = 0;
            if (a2 > 0)
            {
                v7 = SF_DRAFT_PTR(uint8, (v3 + *SF_DRAFT_PTR(_DWORD, (v3 + 12))));
                do
                {
                    v8 = *v7++;
                    ++v6;
                    if (v8)
                    {
                        v9 = SF_DRAFT_PTR(uint8, (v6 + *native_a1 + *SF_DRAFT_PTR(_DWORD, (*native_a1 + 12))));
                        do
                        {
                            v10 = *v9++;
                            ++v7;
                            ++v6;
                        } while (v10);
                    }
                    ++v5;
                } while (v5 < a2);
            }
            result = 0;
            *native_a3 = *native_a1 + *SF_DRAFT_PTR(_DWORD, (*native_a1 + 12)) + v6;
        }
        else
        {
            return 14;
        }
    }
    return result;
}

// FUNCTION_MARKER 0x800C77F4u 0x800c77f4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sf_draft_saved_callback(uint32 target, uint8 mode, uint32 cancellation, uint32 argument);

void sub_800C77F4(uint32 target, sint32 mode, sint32 cancellation, sint32 argument)
{
    FUNCTION_MARKER(0x800C77F4u, "SCUS_942.40");
    /* TODO Bind the original timer exception continuation to the native callback */
    sf_draft_saved_callback(target, (uint8)mode, (uint32)cancellation, (uint32)argument);
}

// FUNCTION_MARKER 0x80023214u 0x80023214
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80023214(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80023214u, "SCUS_942.40");
    int v4;
    int result;

    if (*SF_DRAFT_PTR(_DWORD, (a1 + 16)))
        sub_80028A98(*SF_DRAFT_PTR(__int16, (a1 + 2)));
    else
        sub_800288BC(r_s16((uint32)a1 + 2u), 0x801097D4u, 0x80129A90u, 20);
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 8)) = 1;
    if (a2 == 2)
    {
        v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
        result = 3;
    LABEL_12:
        *SF_DRAFT_PTR(_BYTE, (v4 + 9)) = result;
        return result;
    }
    result = 2;
    if (a2 == 1)
    {
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 9)) = 2;
        return result;
    }
    if (!a2)
    {
        result = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
        *SF_DRAFT_PTR(_BYTE, (result + 9)) = 1;
        return result;
    }
    result = 4;
    if (a2 == 4)
    {
        v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
        goto LABEL_12;
    }
    return result;
}

// FUNCTION_MARKER 0x800C618Cu 0x800c618c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800C618C(sint32 a1, uint32 a2)
{
    _BYTE *native_a2 = SF_DRAFT_PTR(_BYTE, a2);
    FUNCTION_MARKER(0x800C618Cu, "SCUS_942.40");
    unsigned int v2;
    _BYTE *result;

    v2 = a1 + 150;
    result = native_a2;
    native_a2[2] = 16 * (v2 % 0x4B / 0xA) + v2 % 0x4B % 0xA;
    native_a2[1] = 16 * (v2 / 0x4B % 0x3C / 0xA) + v2 / 0x4B % 0x3C % 0xA;
    *native_a2 = 16 * (v2 / 0x4B / 0x3C / 0xA) + v2 / 0x4B / 0x3C % 0xA;
    return sf_draft_guest_address(result);
}

// FUNCTION_MARKER 0x8008BFECu 0x8008bfec
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8008BFEC(sint32 a1)
{
    FUNCTION_MARKER(0x8008BFECu, "SCUS_942.40");
    int v1 = SF_DRAFT_GP;
    int v2;
    int v3;
    int v4;
    __int16 v5;
    int v6;
    int v7;
    int result;

    v2 = *SF_DRAFT_PTR(_DWORD, (v1 + 3032)) - 1;
    *SF_DRAFT_PTR(_DWORD, (v1 + 3032)) = v2;
    if (a1 < v2)
    {
        v3 = 4 * (a1 + 1);
        v4 = 4 * a1;
        do
        {
            SF_DRAFT_PTR(uint16, 0x80121738u)[v4] = SF_DRAFT_PTR(uint16, 0x80121738u)[v3];
            SF_DRAFT_PTR(uint8, 0x8012173Au)[v4 * 2] = SF_DRAFT_PTR(uint8, 0x8012173Au)[v3 * 2];
            SF_DRAFT_PTR(uint8, 0x8012173Bu)[v4 * 2] = SF_DRAFT_PTR(uint8, 0x8012173Bu)[v3 * 2];
            ++a1;
            SF_DRAFT_PTR(uint16, 0x8012173Cu)[v4] = SF_DRAFT_PTR(uint16, 0x8012173Cu)[v3];
            v5 = SF_DRAFT_PTR(uint16, 0x8012173Eu)[v3];
            v3 += 4;
            SF_DRAFT_PTR(uint16, 0x8012173Eu)[v4] = v5;
            v4 += 4;
        } while (a1 < *SF_DRAFT_PTR(sint32, (v1 + 3032)));
    }
    v6 = 4 * *SF_DRAFT_PTR(_DWORD, (v1 + 3032));
    SF_DRAFT_PTR(uint8, 0x8012173Au)[v6 * 2] = 0;
    v7 = *SF_DRAFT_PTR(_DWORD, (v1 + 3032));
    SF_DRAFT_PTR(uint16, 0x80121738u)[v6] = -1;
    SF_DRAFT_PTR(uint8, 0x8012173Bu)[8 * v7] = 0;
    result = 4 * *SF_DRAFT_PTR(_DWORD, (v1 + 3032));
    SF_DRAFT_PTR(uint16, 0x8012173Cu)[result] = 0;
    SF_DRAFT_PTR(uint16, 0x8012173Eu)[result] = 0;
    return result * 2;
}

// FUNCTION_MARKER 0x800C484Cu 0x800c484c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800C484C(sint16 a1, sint32 a2, sint16 a3)
{
    FUNCTION_MARKER(0x800C484Cu, "SCUS_942.40");
    int v3 = SF_DRAFT_GP;
    __int16 *result;
    __int16 *v5;

    result = SF_DRAFT_PTR(__int16, r_u32((v3 + 1928)));
    if (!result)
        return 0;
    v5 = SF_DRAFT_PTR(__int16, r_u32((v3 + 1928)));
    if (result[1] == a3 && *result == a1 && *(SF_DRAFT_PTR(_DWORD, result) + 1) == a2)
        return sf_draft_guest_address(result);
    if (!*((_DWORD *)v5 + 6))
        return 0;
    while (1)
    {
        v5 = (__int16 *)*((_DWORD *)v5 + 6);
        if (v5)
        {
            if (v5[1] == a3 && *v5 == a1)
            {
                result = v5;
                if (*((_DWORD *)v5 + 1) == a2)
                    break;
            }
        }
        if (!*((_DWORD *)v5 + 6))
            return 0;
    }
    return sf_draft_guest_address(result);
}

// FUNCTION_MARKER 0x8007EB38u 0x8007eb38
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8007EB38(sint32 a1, uint32 a2, sint8 a3)
{
    int *native_a2 = SF_DRAFT_PTR(int, a2);
    FUNCTION_MARKER(0x8007EB38u, "SCUS_942.40");
    int result;
    int *v5;
    int v6;
    int v7;
    int v8;
    char v9[8];

    v9[0] = a3;
    result = sub_8007E6CC(a1, sf_draft_guest_address(v9));
    if (result >= 0)
    {
        if (v9[0])
            SF_DRAFT_PTR(uint32, 0x8011F3A4u)[24 * result] = 10;
        else
            SF_DRAFT_PTR(uint32, 0x8011F3A4u)[24 * result] = 0;
        SF_DRAFT_PTR(uint8, 0x8011F3A0u)[96 * result] = 1;
        v5 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x8011F3A8u)[24 * result]);
        v6 = native_a2[1];
        v7 = native_a2[2];
        v8 = native_a2[3];
        *v5 = *native_a2;
        v5[1] = v6;
        v5[2] = v7;
        v5[3] = v8;
        return sub_800C720C(sf_draft_guest_address(v5), sf_draft_guest_address(v5));
    }
    return result;
}

// FUNCTION_MARKER 0x800C2C94u 0x800c2c94
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C2C94(sint16 a1, sint16 a2)
{
    FUNCTION_MARKER(0x800C2C94u, "SCUS_942.40");
    _WORD *v2 = SF_DRAFT_PTR(_WORD, SF_DRAFT_GP);
    int v5;
    int v6 = SF_DRAFT_GP;
    int result;

    v5 = a1;
    if (a1 == -1)
        return sub_800C2C68();
    if (a1 != (__int16)v2[966])
    {
        sub_800F9CF4();
        sub_800F9AA4(0, 0);
        sub_800F9B34(v5);
        sub_800F1624(v5);
        *SF_DRAFT_PTR(_WORD, (v6 + 1944)) = 1;
        sub_800F9D14();
        v2[966] = a1;
    }
    result = (__int16)v2[972];
    v2[967] = a2;
    if (!result)
        return sub_800C2C38();
    return result;
}

// FUNCTION_MARKER 0x80097ED8u 0x80097ed8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80097ED8(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80097ED8u, "SCUS_942.40");
    int v2;
    int v3;
    _DWORD *v4;
    int v5;
    int v6;
    int result;

    *SF_DRAFT_PTR(_DWORD, a2) = *SF_DRAFT_PTR(_DWORD, a1);
    v2 = 0;
    if (*SF_DRAFT_PTR(int, a1) > 0)
    {
        v3 = a1;
        v4 = SF_DRAFT_PTR(_DWORD, a2);
        do
        {
            v4[1] = *SF_DRAFT_PTR(__int16, r_u32((v3 + 20)));
            v4[2] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v3 + 20)) + 2));
            ++v2;
            v5 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v3 + 20)) + 4));
            v3 += 4;
            v4[3] = v5;
            v4 += 4;
        } while (v2 < *SF_DRAFT_PTR(sint32, a1));
    }
    *SF_DRAFT_PTR(_DWORD, (a2 + 68)) = *SF_DRAFT_PTR(__int16, r_u32((a1 + 8)));
    *SF_DRAFT_PTR(_DWORD, (a2 + 72)) = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 2));
    v6 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 4));
    result = 1;
    *SF_DRAFT_PTR(_BYTE, (a2 + 84)) = 1;
    *SF_DRAFT_PTR(_DWORD, (a2 + 76)) = v6;
    return result;
}

// FUNCTION_MARKER 0x800C2B84u 0x800c2b84
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C2B84(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800C2B84u, "SCUS_942.40");
    int result;
    int v3;
    int v4;
    int v5;
    int v6;

    result = -1;
    if ((__int16)a2 != -1)
    {
        result = 0;
        if (*SF_DRAFT_PTR(uint8, (a1 + 12)) - 1 >= (__int16)a2)
        {
            v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 4));
            v4 = a2 << 16;
            if ((*SF_DRAFT_PTR(_WORD, (24 * (__int16)a2 + v3)) & 0x1F) == 11)
                v4 = (a2 + 1) << 16;
            v5 = 24 * (v4 >> 16) + v3;
            v6 = *SF_DRAFT_PTR(_WORD, v5) & 0x1F;
            if (v6 == 1)
                return 1;
            result = 0;
            if (v6 == 2)
            {
                result = 0;
                if (!*SF_DRAFT_PTR(_BYTE, (v5 + 5)))
                    return 1;
            }
        }
    }
    return result;
}

// FUNCTION_MARKER 0x80019954u 0x80019954
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80019954(sint32 a1)
{
    FUNCTION_MARKER(0x80019954u, "SCUS_942.40");
    uint32 context = (uint32)a1;
    uint32 args[1], target;
    sub_80019D60(a1);
    sub_80019DBC(a1);
    target = r_u32(r_u32(context + 8u) + 4u);
    args[0] = context;
    sf_draft_call(target, 1u, args);
    sub_80019F24(a1);
    target = r_u32(r_u32(context + 8u) + 8u);
    args[0] = context;
    sf_draft_call(target, 1u, args);
    return sub_80019E18(a1);
}

// FUNCTION_MARKER 0x8001CB20u 0x8001cb20
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001CB20(unsigned __int8 a1, sint32 a2, sint32 a3, sint8 a4)
{
    FUNCTION_MARKER(0x8001CB20u, "SCUS_942.40");
    char v8[4];
    int v9;

    v8[0] = a4;
    if ((uint8)sub_8001C780(2, a1, sf_draft_guest_address(v8), sf_draft_guest_address(&v9)) == 1)
    {
        if (a2)
            (*SF_DRAFT_PTR(uint32, 0x80119194u)) = a2;
        if (a3)
            (*SF_DRAFT_PTR(uint32, 0x80119198u)) = a3;
        sub_8001B584(v9, a1, v8[0]);
    }
    sub_8001C838(2, a1);
    return 1;
}

// FUNCTION_MARKER 0x8001C780u 0x8001c780
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001C780(sint32 a1, sint8 a2, sint32 a3, uint32 a4)
{
    _DWORD *native_a4 = SF_DRAFT_PTR(_DWORD, a4);
    FUNCTION_MARKER(0x8001C780u, "SCUS_942.40");
    int v5;
    int result;

    if (a2)
    {
        (*SF_DRAFT_PTR(uint32, 0x801191F8u)) |= 1 << a1;
    }
    else
    {
        if (((*SF_DRAFT_PTR(uint32, 0x801191F8u)) & (1 << a1)) == 0)
            return 0;
        (*SF_DRAFT_PTR(uint32, 0x801191F8u)) &= ~(1 << a1);
    }
    v5 = 12;
    while (((*SF_DRAFT_PTR(uint32, 0x801191F8u)) & (1 << v5)) == 0)
    {
        if (--v5 < 0)
            return 0;
    }
    if (a1 >= v5)
    {
        result = 1;
        *native_a4 = *SF_DRAFT_PTR(_DWORD, (4 * v5 + (*SF_DRAFT_PTR(uint32, 0x8011920Cu))));
        return result;
    }
    return 0;
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_8004C654_stage1(sint32 input1, sint32 *output2);

// FUNCTION_MARKER 0x8004C654u 0x8004c654
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8004C654(sint32 A0, sint32 a2)
{
    FUNCTION_MARKER(0x8004C654u, "SCUS_942.40");
    sint32 temporary_a2; /* TODO Geometry value type */
    _DWORD *v2 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
    int v3;
    int result;

    v3 = (*SF_DRAFT_PTR(uint32, 0x80115E80u));
    v2[666] = A0;
    if (v3 && (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) == 12)
        a2 = (BYTE2(a2) + ((a2 & 0xFF00) >> 8) + (uint8)a2) >> 2 << 8;
    v2[667] = a2;
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_8004C654_stage1(A0, &temporary_a2);
    LOBYTE(temporary_a2) = 31 - temporary_a2;
    result = (uint8)(((uint8)a2 - ((int)(uint8)a2 >> 2)) >> temporary_a2);
    v2[668] = (((a2 & 0xFF0000) - ((a2 & 0xFF0000) >> 2)) >> temporary_a2) & 0xFF0000 | (((a2 & 0xFF00) - ((a2 & 0xFF00) >> 2)) >> temporary_a2) & 0xFF00 | result;
    return result;
}

// FUNCTION_MARKER 0x80085E04u 0x80085e04
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80085E04(uint32 a1, sint32 a2, sint16 a3, sint16 a4)
{
    _BYTE *native_a1 = SF_DRAFT_PTR(_BYTE, a1);
    FUNCTION_MARKER(0x80085E04u, "SCUS_942.40");
    int result;
    int v5;
    int v6;
    int *v7;
    int var8[4];

    LOWORD(var8[0]) = a3;
    HIWORD(var8[0]) = a4;
    if (!a2)
        return 0xFFFF;
    v6 = (uint16)sub_8008507C(0, sf_draft_guest_address(native_a1), -1, a2, sf_draft_guest_address(var8), sf_draft_guest_address(var8) + 2);
    result = v6;
    if (v6 != 0xFFFF)
    {
        sub_800834D8();
        v5 = sub_80083584(v6);
        sub_800DE5E0(0x801160D8u, v5);
        v7 = SF_DRAFT_PTR(int, sub_80083584(v6));
        *((_BYTE *)v7 + 20) &= ~0x80u;
        return v6;
    }
    return result;
}

// FUNCTION_MARKER 0x8003FD24u 0x8003fd24
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8003FD24(sint32 a1)
{
    FUNCTION_MARKER(0x8003FD24u, "SCUS_942.40");
    _WORD *v1 = SF_DRAFT_PTR(_WORD, SF_DRAFT_GP);
    uint16 *v2;
    int v3;
    int i;
    int result;

    v1[1292] = *SF_DRAFT_PTR(_WORD, (a1 + 28));
    v2 = SF_DRAFT_PTR(uint16, 0x8011BCD0u);
    v1[1293] = *SF_DRAFT_PTR(_WORD, (a1 + 30));
    v3 = *SF_DRAFT_PTR(uint16, (a1 + 32));
    v1[1294] = v3;
    v1[1295] = *SF_DRAFT_PTR(_WORD, (a1 + 34));
    sub_800EC8D4(0x8011BCD0u, *SF_DRAFT_PTR(_DWORD, (a1 + 36)), (uint32)((sint32)(sint16)v3 * 2));
    for (i = 0; i < 256; ++i)
    {
        if ((*v2 & 0x7FFF) != 0)
            *v2 |= 0x8000u;
        ++v2;
    }
    result = (*SF_DRAFT_PTR(uint16, 0x8011BE6Au)) & 0x7FFF;
    (*SF_DRAFT_PTR(uint16, 0x8011BE6Au)) &= ~0x8000u;
    return result;
}

// FUNCTION_MARKER 0x80016F90u 0x80016f90
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80016F90(sint32 a1)
{
    FUNCTION_MARKER(0x80016F90u, "SCUS_942.40");
    int result;

    if (a1 == 1)
    {
        sub_80044848(0);
        return sub_800CDA34(0x80016F88u);
    }
    else if (a1)
    {
        result = 3;
        if (a1 == 2)
        {
            sub_80044848(0);
            return sub_800CDA34(0);
        }
        else if (a1 == 3)
        {
            sub_800CD9F4(0u);
            result = (*SF_DRAFT_PTR(uint32, 0x80116984u));
            if (!(*SF_DRAFT_PTR(uint32, 0x80116984u)))
                return sub_80044848(1);
        }
    }
    else
    {
        sub_80044848(1);
        return sub_800CD9F4(0x80016F88u);
    }
    return result;
}

// FUNCTION_MARKER 0x8003B1FCu 0x8003b1fc
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8003B1FC(void)
{
    FUNCTION_MARKER(0x8003B1FCu, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;
    uint8 v1;
    int v2;
    uint32 *v3;
    int v4;
    uint32 v5;
    int v6;

    v1 = 0;
    if (*SF_DRAFT_PTR(_BYTE, (v0 + 2624)))
    {
        v2 = 1;
        v3 = SF_DRAFT_PTR(uint32, 0x80011B8Cu);
        do
        {
            v4 = 0;
            v5 = *v3;
            if (v2 == *SF_DRAFT_PTR(_DWORD, (v0 + 724)))
                v4 = 1;
            ++v3;
            v1 |= sf_draft_call((uint32)(v5), 1u, (const uint32[]){v4});
            ++v2;
        } while (v2 < 8);
        if (!v1)
        {
            v6 = *SF_DRAFT_PTR(_DWORD, (v0 + 724));
            *SF_DRAFT_PTR(_BYTE, (v0 + 2624)) = 0;
            *SF_DRAFT_PTR(_DWORD, (v0 + 3356)) = v6;
        }
    }
    sub_8003DB64();
    return v1;
}

// FUNCTION_MARKER 0x800DB558u 0x800db558
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DB558(sint32 a1)
{
    FUNCTION_MARKER(0x800DB558u, "SCUS_942.40");
    _DWORD *v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int result;

    v2 = SF_DRAFT_PTR(_DWORD, sub_800DE414(36));
    *SF_DRAFT_PTR(_DWORD, a1) = sf_draft_guest_address(v2);
    if (!v2)
        return 3;
    v3 = (*SF_DRAFT_PTR(uint32, 0x8010E1F0u));
    v4 = (*SF_DRAFT_PTR(uint32, 0x8010E1F4u));
    *v2 = sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, 0x8010E1ECu));
    v2[1] = v3;
    v2[2] = v4;
    v5 = (*SF_DRAFT_PTR(uint32, 0x8010E1FCu));
    v6 = (*SF_DRAFT_PTR(uint32, 0x8010E200u));
    v2[3] = (*SF_DRAFT_PTR(uint32, 0x8010E1F8u));
    v2[4] = v5;
    v2[5] = v6;
    v7 = (*SF_DRAFT_PTR(uint32, 0x8010E208u));
    v2[6] = (*SF_DRAFT_PTR(uint32, 0x8010E204u));
    v2[7] = v7;
    result = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a1) + 32)) = 0;
    return result;
}

// FUNCTION_MARKER 0x800CBBD8u 0x800cbbd8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800CBBD8(uint32 a1)
{
    uint32 index = 0u, total = 0u, entry, result;
    sint32 count;
    FUNCTION_MARKER(0x800CBBD8u, "SCUS_942.40");
    count = r_s32(a1 + 4u);
    entry = a1 + 4u * r_u32(a1 + 8u) + 36u;
    if (count > 0)
    {
        do
        {
            uint32 amount = r_u32(entry + 8u);
            uint32 stride = r_u32(entry);
            ++index;
            total += amount;
            entry += stride;
        } while ((sint32)index < count);
    }
    if ((sint32)r_s16(0x80116942u) < (sint32)total)
        w_u16(0x80116942u, (uint16)total);
    result = 15u;
    if (r_u32(a1 + 4u) == 15u)
    {
        result = a1 + r_u32(a1 + 20u);
        w_u32(result + 420u, (uint32)-51);
        w_u32(result + 436u, (uint32)-10);
        result = a1 + r_u32(a1 + 20u);
        w_u32(result + 452u, (uint32)-20);
        w_u32(result + 468u, 20u);
    }
    return (sint32)result;
}

// FUNCTION_MARKER 0x80031E7Cu 0x80031e7c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80031E7C(void)
{
    FUNCTION_MARKER(0x80031E7Cu, "SCUS_942.40");
    int v0;
    int v1;
    uint8 v2;
    int v3;
    int result;

    v0 = sub_800354D8();
    if ((*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) && (v1 = *SF_DRAFT_PTR(__int16, r_u32(((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 20))), v2 = 1, v1 >= 0))
    {
        v3 = *SF_DRAFT_PTR(_DWORD, (76 * v1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    }
    else
    {
        v2 = 0;
        v3 = 0;
    }
    sub_8001CB20(v2, 0, v3, 0);
    result = 6;
    if (v0 == 6)
        return sub_8003545C(6);
    return result;
}

// FUNCTION_MARKER 0x8001CA84u 0x8001ca84
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001CA84(unsigned __int8 a1, sint32 a2, sint8 a3)
{
    FUNCTION_MARKER(0x8001CA84u, "SCUS_942.40");
    char v6[4];
    int v7;

    v6[0] = a3;
    if ((uint8)sub_8001C780(1, a1, sf_draft_guest_address(v6), sf_draft_guest_address(&v7)) == 1)
    {
        if (a2)
            (*SF_DRAFT_PTR(uint32, 0x80119194u)) = a2;
        sub_8001B584(v7, a1, v6[0]);
    }
    sub_8001C838(1, a1);
    return 1;
}

// FUNCTION_MARKER 0x800CB994u 0x800cb994
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800CB994(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800CB994u, "SCUS_942.40");
    int v3;
    int result;
    void (*v5)(int, unsigned int, _DWORD);
    int v6;

    v3 = sub_800CB6DC(a1, a2);
    result = 45;
    if (v3)
    {
        if (*SF_DRAFT_PTR(int, (v3 + 32)) < 0)
        {
            v5 = *(void (**)(int, unsigned int, _DWORD))(v3 + 28);
            if (v5)
                v5(a1, 0x80000000, *SF_DRAFT_PTR(_DWORD, (v3 + 36)));
        }
        sub_800DE6E0(a1 + 32u, r_u32((uint32)v3));
        result = 0;
        *SF_DRAFT_PTR(_WORD, (v3 + 4)) = -1;
        v6 = *SF_DRAFT_PTR(_DWORD, (v3 + 8));
        *SF_DRAFT_PTR(_DWORD, v3) = 0;
        *SF_DRAFT_PTR(_DWORD, (v3 + 44)) = -1;
        *SF_DRAFT_PTR(_DWORD, (v3 + 8)) = v6 & 0xAFFFFFFF;
    }
    return result;
}

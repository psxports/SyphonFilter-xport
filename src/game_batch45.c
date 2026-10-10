#include "game_draft.h"
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_800183D4();
extern uint32 sub_8002FF6C();

extern uint32 sub_800E02DC();

sint32 sub_800E8AC4(uint16 width, uint16 height, uint32 flags, uint8 dither, uint16 rgb24);
extern uint32 sub_800E8D4C();
void sub_800E9494(sint16 x0, sint16 y0, sint16 x1, sint16 y1);

uint32 sub_800EC68C(uint32 matrix, uint32 input, uint32 output);
sint32 sub_800ED558(sint32 mode, uint32 result);

sint32 sub_800F0654(uint32 mode);
extern uint32 sub_800F7494();
extern uint32 sub_800F7974();

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x80058FC0u 0x80058fc0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80058FC0(sint32 a1)
{
    FUNCTION_MARKER(0x80058FC0u, "SCUS_942.40");
    int v1 = SF_DRAFT_GP;
    int v3;
    int v4;
    int v5;
    int result;
    int v7;
    int v8;

    v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
    v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
    v5 = 0;
    if ((*SF_DRAFT_PTR(_DWORD, v3) & 0x80) != 0)
        return v5;
    result = 0;
    if (!*SF_DRAFT_PTR(_BYTE, (v4 + 83)))
    {
        result = 0;
        if (!*SF_DRAFT_PTR(_BYTE, (v4 + 65)))
        {
            result = 0;
            if (*SF_DRAFT_PTR(_BYTE, (v3 + 8)) != 2)
            {
                result = 0;
                if (*SF_DRAFT_PTR(uint8, (v4 + 71)) >= 0xBu)
                {
                    v7 = *SF_DRAFT_PTR(__int16, (a1 + 2));
                    if (v7 == 666 || (result = 0, *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v7 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 92))
                    {
                        result = 0;
                        if (!*SF_DRAFT_PTR(_BYTE, (v1 + 3252)))
                        {
                            result = 0;
                            if ((*SF_DRAFT_PTR(_DWORD, (v4 + 32)) & 0x10000) == 0)
                            {
                                result = 0;
                                if (*SF_DRAFT_PTR(__int16, r_u32((a1 + 20))) >= 0)
                                {
                                    sub_80028F3C(v7, 10);
                                    v5 = 1;
                                    v8 = *SF_DRAFT_PTR(_DWORD, (v4 + 32));
                                    *SF_DRAFT_PTR(_BYTE, (v4 + 83)) = 100;
                                    *SF_DRAFT_PTR(_DWORD, (v4 + 32)) = v8 | 0x10000;
                                    return v5;
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

// FUNCTION_MARKER 0x8006E150u 0x8006e150
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8006E150(sint32 a1, uint32 a2)
{
    _DWORD *native_a2 = SF_DRAFT_PTR(_DWORD, a2);
    FUNCTION_MARKER(0x8006E150u, "SCUS_942.40");
    int v4;
    int v5;

    if (!a1)
        return 0;
    if (!*SF_DRAFT_PTR(_DWORD, (a1 + 12)))
        return 0;
    sub_8006E0D8(a1, -2147483647, -1, -1, -1, -1);
    v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    v5 = sub_800DE414(68);
    *SF_DRAFT_PTR(_DWORD, (v4 + 416)) = v5;
    if (!v5)
        return 0;
    *SF_DRAFT_PTR(_DWORD, (v5 + 8)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 416)) + 12)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 416)) + 16)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 416)) + 20)) = 0;
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v4 + 416)) + 28)) = 1;
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v4 + 416)) + 29)) = 0;
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v4 + 416)) + 30)) = 0;
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v4 + 416)) + 31)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 416)) + 36)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 416)) + 40)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 416)) + 44)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 416)) + 52)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 416)) + 56)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 416)) + 60)) = 0;
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v4 + 416)) + 64)) = 0;
    sub_8006E0B8(a1, sf_draft_guest_address(native_a2));
    return 1;
}

// FUNCTION_MARKER 0x80030DA8u 0x80030da8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80030DA8(sint32 a1)
{
    FUNCTION_MARKER(0x80030DA8u, "SCUS_942.40");
    __int16 *v1;
    int v2;
    int v3;
    int v4;
    int result;
    int v6;
    int v7;
    int v8;
    int v9;

    v1 = SF_DRAFT_PTR(__int16, r_u32((a1 + 20)));
    v2 = *SF_DRAFT_PTR(_DWORD, (76 * *v1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    if (*SF_DRAFT_PTR(_BYTE, (a1 + 34)) == 2 && *SF_DRAFT_PTR(__int16, (v2 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
    }
    else
    {
        if (*SF_DRAFT_PTR(_BYTE, (v2 + 34)) != 2 || *SF_DRAFT_PTR(__int16, (a1 + 2)) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
        {
            v6 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 20));
            v7 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 24));
            v4 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 28));
            v7 = -v7;
            v8 = v4;
            sub_800E02DC(*SF_DRAFT_PTR(_DWORD, (a1 + 12)), sf_draft_guest_address(&v6), sf_draft_guest_address(&v9));
            goto LABEL_9;
        }
        v3 = *SF_DRAFT_PTR(_DWORD, (v2 + 28));
    }
    v9 = *SF_DRAFT_PTR(__int16, (v3 + 44));
LABEL_9:
    result = (**((__int16 **)v1 + 12) - v9) >> 5;
    v1[26] = result;
    return result;
}

// FUNCTION_MARKER 0x80039E38u 0x80039e38
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80039E38(sint32 a1, sint32 a2, uint32 a3)
{
    __int16 *native_a3 = SF_DRAFT_PTR(__int16, a3);
    FUNCTION_MARKER(0x80039E38u, "SCUS_942.40");
    bool v4;
    int v6;
    int v7;
    __int16 *v8;
    int v9;
    int v10;
    int v11;
    int *v12;

    v4 = 1;
    v6 = a2 << 16;
    if (v6 >> 16 > 0)
    {
        v7 = v6 >> 16;
        v8 = native_a3;
        do
        {
            v9 = *v8;
            v10 = 0;
            if (v9 > 0)
            {
                v11 = 0;
                do
                {
                    v12 = SF_DRAFT_PTR(int, (4 * v10 + *((_DWORD *)v8 + 1)));
                    if (*SF_DRAFT_PTR(uint8, (uint32)*v12))
                    {
                        v4 = sub_80039718(a1, *v12, *((_DWORD *)v8 + 2) + v11);
                        if (v4)
                        {
                            if (sub_800DDF84(*((_DWORD *)v8 + 2) + v11))
                                v4 = 0;
                        }
                    }
                    ++v10;
                    v11 += 44;
                } while (v10 < v9);
            }
            v8 += 6;
        } while ((sint32)sf_draft_guest_address(v8) < (sint32)sf_draft_guest_address(&native_a3[6 * v7]));
    }
    return v4;
}

// FUNCTION_MARKER 0x800DC780u 0x800dc780
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DC780(uint32 a1, uint32 a2, uint32 a3)
{
    _DWORD *native_a1 = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *native_a2 = SF_DRAFT_PTR(_DWORD, a2);
    _DWORD *native_a3 = SF_DRAFT_PTR(_DWORD, a3);
    FUNCTION_MARKER(0x800DC780u, "SCUS_942.40");
    int result;
    _DWORD v5[8];
    _DWORD v6[8];

    if (native_a2 == native_a1)
    {
        *native_a3 = 0;
        native_a3[1] = 0;
        native_a3[2] = 0;
    }
    else if (native_a2)
    {
        if (native_a1)
        {
            *native_a3 = native_a1[5];
            native_a3[1] = native_a1[6];
            native_a3[2] = native_a1[7];
            sub_800DA474(sf_draft_guest_address(native_a2), sf_draft_guest_address(v6));
            sub_800EADF4(sf_draft_guest_address(v6), sf_draft_guest_address(native_a3), sf_draft_guest_address(native_a3));
            *native_a3 += v6[5];
            native_a3[1] += v6[6];
            native_a3[2] += v6[7];
        }
        else
        {
            sub_800DA474(sf_draft_guest_address(native_a2), sf_draft_guest_address(v5));
            *native_a3 = v5[5];
            native_a3[1] = v5[6];
            native_a3[2] = v5[7];
        }
    }
    else
    {
        *native_a3 = native_a1[5];
        native_a3[1] = native_a1[6];
        native_a3[2] = native_a1[7];
    }
    result = 0;
    native_a3[1] = (0u - native_a3[1]);
    return result;
}

// FUNCTION_MARKER 0x80019768u 0x80019768
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80019768(sint32 a1, uint32 a2, sint32 a3, uint32 a4)
{
    _DWORD *native_a2 = SF_DRAFT_PTR(_DWORD, a2);
    _DWORD *native_a4 = SF_DRAFT_PTR(_DWORD, a4);
    FUNCTION_MARKER(0x80019768u, "SCUS_942.40");
    int result;
    _DWORD *v5;

    if (!*native_a2 && a3)
        return 0;
    switch (a3)
    {
        case 0:
            sub_8001987C(a1, a2, 0, a4);
            return 1;
        case 1:
            v5 = native_a2 + 1;
            goto LABEL_19;
        case 2:
            v5 = native_a2 + 5;
            goto LABEL_19;
        case 3:
            v5 = native_a2 + 9;
            goto LABEL_19;
        case 7:
            v5 = native_a2 + 25;
            goto LABEL_19;
        case 9:
            sub_8001987C(a1, a2 + 132u, 1, a4);
            return 1;
        default:
            if (*native_a2 == *native_a4)
            {
                if (a3 == 5)
                {
                    v5 = native_a2 + 17;
                }
                else if (a3 >= 6)
                {
                    v5 = native_a2 + 21;
                    if (a3 != 6)
                        return 0;
                }
                else
                {
                    v5 = native_a2 + 13;
                    if (a3 != 4)
                        return 0;
                }
            }
            else
            {
                v5 = native_a2 + 29;
                if (a3 != 8)
                    return 0;
            }
        LABEL_19:
            sub_800198CC(a1, sf_draft_guest_address(v5), 0, a4);
            result = 1;
            break;
    }
    return result;
}

// FUNCTION_MARKER 0x800C2900u 0x800c2900
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C2900(sint32 a1, sint16 a2)
{
    FUNCTION_MARKER(0x800C2900u, "SCUS_942.40");
    int v3;
    int result;
    int v5;
    int v6;
    int v7;
    int v8;

    v3 = a2;
    if (a2 != -1)
    {
        result = 2 * a2;
        if (*SF_DRAFT_PTR(uint8, (a1 + 12)) - 1 >= a2)
        {
            v5 = 24 * a2 + *SF_DRAFT_PTR(_DWORD, (a1 + 4));
            v6 = *SF_DRAFT_PTR(_WORD, v5) & 0x1F;
            if (v6 == 1)
            {
                result = *SF_DRAFT_PTR(char, (v5 + 16));
                if (result != -1)
                {
                    sub_800F7974((*SF_DRAFT_PTR(uint8, (v5 + 2)) << 8) | *SF_DRAFT_PTR(uint8, (v5 + 5)), (*SF_DRAFT_PTR(uint8, (v5 + 17)) << 8) | *SF_DRAFT_PTR(uint8, (v5 + 8)));
                    *SF_DRAFT_PTR(_BYTE, (v5 + 16)) = -1;
                    return sub_800C49DC(a1, v3);
                }
            }
            else
            {
                result = 2;
                if ((*SF_DRAFT_PTR(_WORD, v5) & 0x1Fu) >= 2)
                {
                    result = 99;
                    if (v6 == 2)
                    {
                        v7 = *SF_DRAFT_PTR(uint8, (v5 + 3));
                        if (v7 != 99)
                        {
                            v8 = *SF_DRAFT_PTR(char, (v5 + 4));
                            if (v8 == -1)
                                return sub_800F7494(v7);
                            else
                                return sub_800F74BC(v7, v8);
                        }
                    }
                }
            }
        }
    }
    return result;
}

// FUNCTION_MARKER 0x8007E6CCu 0x8007e6cc
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8007E6CC(sint32 a1, uint32 a2)
{
    char *native_a2 = SF_DRAFT_PTR(char, a2);
    FUNCTION_MARKER(0x8007E6CCu, "SCUS_942.40");
    int v3;
    char *v4;
    int v5;
    int v6;
    int result;
    int v8;
    int v9;
    BOOL v10;
    unsigned int v11;
    char v12;

    v3 = 0;
    if (a1)
    {
        v4 = SF_DRAFT_PTR(char, 0x8011F360u);
        v5 = 0;
        do
        {
            if (a1 == SF_DRAFT_PTR(uint32, 0x8011F35Cu)[v5] && SF_DRAFT_PTR(uint8, 0x8011F359u)[v5 * 4])
            {
                v6 = (uint8)*v4;
                if (v6 == 1)
                {
                    result = v3;
                    if (!*native_a2)
                    {
                        *v4 = 0;
                        SF_DRAFT_PTR(uint32, 0x8011F39Cu)[v5] = 0;
                        SF_DRAFT_PTR(uint32, 0x8011F3A4u)[v5] = 0;
                    }
                }
                else
                {
                    *native_a2 = v6;
                    return v3;
                }
                return result;
            }
            v4 += 96;
            ++v3;
            v5 += 24;
        } while (v3 < 7);
        v8 = 0;
        v9 = 0;
        while (1)
        {
            v10 = v8 < 7;
            if (!SF_DRAFT_PTR(uint8, 0x8011F359u)[v9])
                break;
            ++v8;
            v9 += 96;
            if (v8 >= 7)
            {
                v10 = v8 < 7;
                break;
            }
        }
        if (v10)
        {
            v11 = 96 * v8;
            SF_DRAFT_PTR(uint8, 0x8011F359u)[v11] = 1;
            SF_DRAFT_PTR(uint32, 0x8011F35Cu)[v11 / 4] = a1;
            v12 = *native_a2;
            SF_DRAFT_PTR(uint32, 0x8011F364u)[v11 / 4] = 0;
            SF_DRAFT_PTR(uint8, 0x8011F368u)[v11] = 1;
            SF_DRAFT_PTR(uint8, 0x8011F398u)[v11] = 0;
            SF_DRAFT_PTR(uint32, 0x8011F39Cu)[v11 / 4] = 0;
            SF_DRAFT_PTR(uint8, 0x8011F3A0u)[v11] = 0;
            SF_DRAFT_PTR(uint32, 0x8011F3A4u)[v11 / 4] = 0;
            SF_DRAFT_PTR(uint8, 0x8011F360u)[v11] = v12;
            return v8;
        }
    }
    return -1;
}

// FUNCTION_MARKER 0x800DF464u 0x800df464
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DF464(void)
{
    FUNCTION_MARKER(0x800DF464u, "SCUS_942.40");
    int v0;
    int v1 = SF_DRAFT_GP;
    int result;
    int v3;
    int v4;
    int v5;
    char v6[8];

    v0 = 0;
    sub_800ED558(1, sf_draft_guest_address(v6));
    result = 2;
    if (v6[0] == 2)
    {
        v3 = *SF_DRAFT_PTR(_DWORD, (v1 + 2472));
        if (v3)
            sub_800D89D8(v3);
        *SF_DRAFT_PTR(_DWORD, (v1 + 2472)) = 0;
        v4 = 1;
        do
        {
            if (v4 >= 11)
                break;
            v0 = sub_800ED5C0(2, *SF_DRAFT_PTR(_DWORD, (v1 + 2456)) + 12, 0);
            if (v0 == 1)
            {
                v5 = 448;
                if (*SF_DRAFT_PTR(_BYTE, (v1 + 2461)) == 1)
                    v5 = 192;
                v0 = sub_800F0654(v5);
            }
            ++v4;
        } while (!v0);
        result = 1;
        if (v0)
        {
            if (*SF_DRAFT_PTR(_BYTE, (v1 + 2461)) == 1)
            {
                result = *SF_DRAFT_PTR(_DWORD, (v1 + 2468));
                if (!result)
                    return sub_800D8930((int)0x800DF588u, 3, 0x8011660Cu);
            }
        }
        else
        {
            sub_800DF43C(37u);
            return sub_800DF6EC(1);
        }
    }
    return result;
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800C720C_stage1(sint32 input1, sint32 *output2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800C720C_stage2(sint32 input1, sint32 input2, sint32 input3, sint32 *output4, sint32 *output5, sint32 *output6);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800C720C_stage3(sint32 input1, sint32 *output2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800C720C_stage4(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 *output5, sint32 *output6, sint32 *output7);

// FUNCTION_MARKER 0x800C720Cu 0x800c720c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C720C(uint32 a1, uint32 a2)
{
    int *native_a1 = SF_DRAFT_PTR(int, a1);
    int *native_a2 = SF_DRAFT_PTR(int, a2);
    FUNCTION_MARKER(0x800C720Cu, "SCUS_942.40");
    sint32 temporary_v1; /* TODO Geometry value type */
    sint32 temporary_t5; /* TODO Geometry value type */
    sint32 temporary_t4; /* TODO Geometry value type */
    sint32 temporary_t3; /* TODO Geometry value type */
    sint32 temporary_t2; /* TODO Geometry value type */
    sint32 temporary_t1; /* TODO Geometry value type */
    sint32 temporary_t0; /* TODO Geometry value type */
    int v5;
    int v6;
    int v7;
    char v10;
    int result;
    unsigned int v16;
    int v17;
    int v18;

    temporary_t0 = *native_a1;
    temporary_t1 = native_a1[1];
    temporary_t2 = native_a1[2];
    v5 = *native_a1;
    if (*native_a1 < 0)
        v5 = -temporary_t0;
    v6 = native_a1[1];
    if (temporary_t1 < 0)
        v6 = -temporary_t1;
    v7 = native_a1[2];
    if (temporary_t2 < 0)
        v7 = -temporary_t2;
    temporary_t3 = v5 | v6 | v7;
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800C720C_stage1(temporary_t3, &temporary_t3);
    v10 = 18 - temporary_t3;
    if (18 - temporary_t3 > 0)
    {
        temporary_t0 >>= v10;
        temporary_t1 >>= v10;
        temporary_t2 >>= v10;
    }
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800C720C_stage2(temporary_t0, temporary_t1, temporary_t2, &temporary_t3, &temporary_t4, &temporary_t5);
    result = temporary_t3 + temporary_t4 + temporary_t5;
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800C720C_stage3(result, &temporary_v1);
    v16 = temporary_v1 & 0xFFFFFFFE;
    v17 = (int)(31 - v16) >> 1;
    if ((int)(v16 - 24) < 0)
        v18 = result >> (24 - v16);
    else
        v18 = result << (v16 - 24);
    temporary_t5 = SF_DRAFT_PTR(uint16, 0x8010FF5Cu)[v18 - 64];
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800C720C_stage4(temporary_t5, temporary_t0, temporary_t1, temporary_t2, &temporary_t0, &temporary_t1, &temporary_t2);
    *native_a2 = temporary_t0 >> v17;
    native_a2[1] = temporary_t1 >> v17;
    native_a2[2] = temporary_t2 >> v17;
    return result;
}

// FUNCTION_MARKER 0x8001B120u 0x8001b120
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001B120(uint32 a1)
{
    uint32 object = r_u32(a1);
    FUNCTION_MARKER(0x8001B120u, "SCUS_942.40");
    int v2;
    int result;
    sint32 column0[3], column1[3], column2[3];
    v2 = r_u32(object);
    sub_800DCBBC(v2, 0, sf_draft_guest_address(column0), sf_draft_guest_address(column1), sf_draft_guest_address(column2));
    column0[0] = sub_800C6D4C(column0[0], 27648);
    column0[1] = sub_800C6D4C(column0[1], 27648);
    column0[2] = sub_800C6D4C(column0[2], 27648);
    column1[0] = sub_800C6D4C(column1[0], 27648);
    column1[1] = sub_800C6D4C(column1[1], 27648);
    column1[2] = sub_800C6D4C(column1[2], 27648);
    sub_800DCEDC(v2, 0, sf_draft_guest_address(column0), sf_draft_guest_address(column1), sf_draft_guest_address(column2));
    result = 1;
    w_u16(object + 4u, (uint16)((sint32)((uint64)(1272582903LL * ((uint32)r_u16(object + 4u) << 12)) >> 32) >> 13));
    return result;
}

// FUNCTION_MARKER 0x80016834u 0x80016834
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_80016834(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x80016834u, "SCUS_942.40");
    int v3 = SF_DRAFT_GP;
    int v5;
    _DWORD *v8;
    int v9;
    int *v10;
    int *v11;
    BOOL v12;

    v5 = *SF_DRAFT_PTR(_DWORD, (v3 + 3368));
    if (v5)
    {
        while (1)
        {
            v8 = SF_DRAFT_PTR(_DWORD, r_u32(v5));
            if (*SF_DRAFT_PTR(_DWORD, r_u32(v5)) == a1 && v8[2] == a3)
                break;
            v5 = *SF_DRAFT_PTR(_DWORD, (v5 + 8));
            if (!v5)
                goto LABEL_8;
        }
        if (a2)
        {
            v8[1] = a2;
        }
        else
        {
            sub_800DE6E0(0x80116990u, (uint32)v5);
            *v8 = 0;
        }
    }
    else
    {
    LABEL_8:
        v9 = 0;
        if (a2)
        {
            v10 = SF_DRAFT_PTR(uint32, 0x80116BA8u);
            while (1)
            {
                v11 = v10;
                v12 = v9 < 16;
                if (!*v10)
                    break;
                ++v9;
                v10 += 3;
                if (v9 >= 16)
                {
                    v12 = v9 < 16;
                    break;
                }
            }
            if (!v12)
                sub_800DDC34(1, 0, 0x8001009Cu, 1967);
            *v11 = a1;
            v11[1] = a2;
            v11[2] = a3;
            sub_800DE5E0(0x80116990u, (sint32)sf_draft_guest_address(v11));
        }
    }
}

// FUNCTION_MARKER 0x800E0E88u 0x800e0e88
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800E0E88(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800E0E88u, "SCUS_942.40");
    sint16 *matrix = SF_DRAFT_PTR(sint16, a1);
    sint32 *output = SF_DRAFT_PTR(sint32, a2);
    sint32 first_column[4];
    sint32 third_column[3];
    sint32 angles[3];

    first_column[0] = matrix[0];
    first_column[1] = matrix[3];
    first_column[2] = matrix[6];
    (void)*(volatile sint16 *)(matrix + 1);
    (void)*(volatile sint16 *)(matrix + 4);
    (void)*(volatile sint16 *)(matrix + 7);
    third_column[0] = matrix[2];
    third_column[1] = matrix[5];
    third_column[2] = matrix[8];
    sub_800E0C00(sf_draft_guest_address(third_column), a2);
    if (third_column[0] || third_column[2])
        output[1] = sub_800EC124(third_column[0], third_column[2]);
    else
        output[1] = 0;
    angles[0] = output[0];
    angles[1] = output[1];
    angles[2] = 0;
    /* Spare native word is only self-copied and never observed */
    first_column[3] = 0;
    sub_800E0A8C(sf_draft_guest_address(first_column), sf_draft_guest_address(angles), sf_draft_guest_address(first_column));
    output[2] = sub_800EC124(first_column[1], first_column[0]);
    return 0;
}

// FUNCTION_MARKER 0x8001C838u 0x8001c838
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001C838(sint32 a1, sint8 a2)
{
    FUNCTION_MARKER(0x8001C838u, "SCUS_942.40");
    int v2;
    int result;
    int v4;
    int v5;
    int v6;

    v2 = *SF_DRAFT_PTR(_DWORD, (4 * a1 + (*SF_DRAFT_PTR(uint32, 0x80119210u))));
    if (a2)
    {
        (*SF_DRAFT_PTR(uint32, 0x80119200u)) |= 1 << v2;
    }
    else
    {
        if (((*SF_DRAFT_PTR(uint32, 0x80119200u)) & (1 << v2)) == 0)
            return 0;
        (*SF_DRAFT_PTR(uint32, 0x80119200u)) &= ~(1 << v2);
    }
    v5 = 12;
    v6 = 4096;
    do
    {
        if (((*SF_DRAFT_PTR(uint32, 0x80119200u)) & v6) != 0)
        {
            v4 = 4 * v5;
            sub_8003545C(*SF_DRAFT_PTR(_DWORD, (v4 + (*SF_DRAFT_PTR(uint32, 0x80119214u)))));
            result = 1;
            (*SF_DRAFT_PTR(uint32, 0x801191FCu)) = *SF_DRAFT_PTR(_DWORD, (v4 + (*SF_DRAFT_PTR(uint32, 0x80119214u))));
            return result;
        }
        v6 = 1 << --v5;
    } while (v5 >= 0);
    sub_8003545C(5);
    (*SF_DRAFT_PTR(uint32, 0x801191FCu)) = 5;
    return 1;
}

// FUNCTION_MARKER 0x800E0A8Cu 0x800e0a8c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800E0A8C(uint32 a1, sint32 a2, uint32 a3)
{
    _DWORD *native_a1 = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *native_a3 = SF_DRAFT_PTR(_DWORD, a3);
    FUNCTION_MARKER(0x800E0A8Cu, "SCUS_942.40");
    int v5;
    int v6;
    int v7;
    uint32 rotation_matrix[8];
    __int16 v13[4];

    if (*native_a1 || native_a1[1] || native_a1[2])
    {
        v13[0] = (0u - *SF_DRAFT_PTR(_WORD, a2));
        v13[1] = *SF_DRAFT_PTR(_DWORD, (a2 + 4));
        v13[2] = -(__int16)*SF_DRAFT_PTR(_DWORD, (a2 + 8));
        sub_800EBE94(sf_draft_guest_address(v13), sf_draft_guest_address(rotation_matrix));
        ((sint16 *)rotation_matrix)[1] = -((sint16 *)rotation_matrix)[1];
        ((sint16 *)rotation_matrix)[3] = -((sint16 *)rotation_matrix)[3];
        ((sint16 *)rotation_matrix)[5] = -((sint16 *)rotation_matrix)[5];
        ((sint16 *)rotation_matrix)[7] = -((sint16 *)rotation_matrix)[7];
        sub_800EC68C(sf_draft_guest_address(rotation_matrix), a1, a3);
        return 0;
    }
    else
    {
        v5 = native_a1[1];
        v6 = native_a1[2];
        v7 = native_a1[3];
        *native_a3 = *native_a1;
        native_a3[1] = v5;
        native_a3[2] = v6;
        native_a3[3] = v7;
        return 0;
    }
}

// FUNCTION_MARKER 0x80057DD4u 0x80057dd4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80057DD4(sint8 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80057DD4u, "SCUS_942.40");
    int v2 = SF_DRAFT_GP;
    int v3;
    int *v4;
    int v5;
    int result;
    int v7;
    int v8;
    int *v9;

    if (a2 > 35000)
        a2 = 35000;
    *SF_DRAFT_PTR(_WORD, (v2 + 3238)) = 0;
    v3 = 0;
    v4 = SF_DRAFT_PTR(int, 0x8012F120u);
    while (1)
    {
        v5 = *v4;
        if (*v4 >= 0)
            break;
        ++v3;
        ++v4;
        if (v3 >= 6)
            goto LABEL_7;
    }
    *SF_DRAFT_PTR(_WORD, (v2 + 3238)) = v3 + 1;
LABEL_7:
    for (result = 4 * v5; v5 >= 0; result = 4 * v5)
    {
        v7 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * (4 * (result + v5) - v5) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 28));
        if (v7 && *SF_DRAFT_PTR(__int16, (v7 + 54)) < a2 && *SF_DRAFT_PTR(__int16, (v7 + 44)) < a2)
        {
            *SF_DRAFT_PTR(_WORD, (v7 + 54)) = a2;
            *SF_DRAFT_PTR(_BYTE, (v7 + 64)) = a1;
        }
        v8 = *SF_DRAFT_PTR(__int16, (v2 + 3238));
        v5 = -1;
        if (v8 < 6)
        {
            v9 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x8012F120u)[v8]);
            while (1)
            {
                v5 = *v9;
                if (*v9 >= 0)
                    break;
                ++v8;
                ++v9;
                if (v8 >= 6)
                    goto LABEL_17;
            }
            *SF_DRAFT_PTR(_WORD, (v2 + 3238)) = v8 + 1;
        }
    LABEL_17:;
    }
    return result;
}

// FUNCTION_MARKER 0x80088154u 0x80088154
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80088154(sint32 a1)
{
    FUNCTION_MARKER(0x80088154u, "SCUS_942.40");
    uint32 body = r_u32((uint32)a1 + 12u);
    uint32 position[4], query[74] = {0};
    uint16 sector;
    position[0] = r_u32(body);
    position[1] = r_u32(body + 4u);
    position[2] = r_u32(body + 8u);
    position[3] = r_u32(body + 12u);
    position[1] = (uint32)sub_80088ACC(a1, 1);
    sector = r_u16(0x80116946u);
    position[1] += 105u;
    query[1] = 4;
    ((uint8 *)query)[8] = 0;
    query[3] = 0x80074D08u;
    ((uint16 *)query)[0] = sector;
    query[5] = position[0];
    query[6] = position[1];
    query[7] = position[2];
    query[8] = position[3];
    query[10] = 9600;
    query[9] = (uint32)a1;
    query[38] = 0x80074D54u;
    query[40] = position[0];
    query[41] = position[1];
    query[42] = position[2];
    query[43] = position[3];
    query[44] = (uint32)a1;
    query[45] = 2560;
    sub_80075B08(sf_draft_guest_address(query));
    return 0;
}

// FUNCTION_MARKER 0x80018D68u 0x80018d68
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80018D68(uint32 a1, uint32 a2, uint32 a3, sint32 a4)
{
    _DWORD *native_a1 = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *native_a2 = SF_DRAFT_PTR(_DWORD, a2);
    FUNCTION_MARKER(0x80018D68u, "SCUS_942.40");
    int v4;

    v4 = 1;
    if (a3)
    {
        if (a3 >= 3)
        {
            return 0;
        }
        else
        {
            if (*SF_DRAFT_PTR(_DWORD, (a4 + 28)) == 1)
                *native_a1 = *SF_DRAFT_PTR(_DWORD, (a4 + 8));
            if (*SF_DRAFT_PTR(_DWORD, (a4 + 32)) == 1)
                native_a1[1] = *SF_DRAFT_PTR(_DWORD, (a4 + 12));
            if (*SF_DRAFT_PTR(_DWORD, (a4 + 36)) == 1)
                native_a1[2] = *SF_DRAFT_PTR(_DWORD, (a4 + 16));
            if (*SF_DRAFT_PTR(_BYTE, (a4 + 44)) == 1 && native_a2)
            {
                if (*SF_DRAFT_PTR(_DWORD, (a4 + 28)) == 1)
                    *native_a2 = *SF_DRAFT_PTR(_DWORD, (a4 + 8));
                if (*SF_DRAFT_PTR(_DWORD, (a4 + 32)) == 1)
                    native_a2[1] = *SF_DRAFT_PTR(_DWORD, (a4 + 12));
                if (*SF_DRAFT_PTR(_DWORD, (a4 + 36)) == 1)
                    native_a2[2] = *SF_DRAFT_PTR(_DWORD, (a4 + 16));
            }
        }
    }
    else
    {
        *native_a1 = *SF_DRAFT_PTR(_DWORD, (a4 + 8));
        if (*SF_DRAFT_PTR(_BYTE, (a4 + 44)) == 1 && native_a2)
            *native_a2 = *SF_DRAFT_PTR(_DWORD, (a4 + 8));
    }
    return v4;
}

// FUNCTION_MARKER 0x80030574u 0x80030574
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80030574(void)
{
    FUNCTION_MARKER(0x80030574u, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;
    char v1;
    int result;
    int v3 = SF_DRAFT_GP;

    if (*SF_DRAFT_PTR(_DWORD, (v0 + 536)))
        sub_8002FF6C(*SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)));
    if (!*SF_DRAFT_PTR(_BYTE, (v0 + 548)))
    {
        if (*SF_DRAFT_PTR(_WORD, (v0 + 546)) && *SF_DRAFT_PTR(_WORD, (v0 + 544)))
        {
            *SF_DRAFT_PTR(_BYTE, (v0 + 548)) = 1;
            v1 = 1;
            return sub_800183D4(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8013C730u)), v1);
        }
        result = *SF_DRAFT_PTR(uint8, (v0 + 548));
        if (!*SF_DRAFT_PTR(_BYTE, (v0 + 548)))
            return result;
    }
    if (!*SF_DRAFT_PTR(_WORD, (v0 + 546)) || (result = *SF_DRAFT_PTR(__int16, (v0 + 544)), !*SF_DRAFT_PTR(_WORD, (v0 + 544))))
    {
        (*SF_DRAFT_PTR(uint32, 0x8013D44Cu)) = 827;
        sub_80018994((int)SF_DRAFT_PTR(uint32, 0x8013C730u), 1, 8, 0);
        v1 = 0;
        *SF_DRAFT_PTR(_BYTE, (v3 + 548)) = 0;
        return sub_800183D4(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8013C730u)), v1);
    }
    return result;
}

// FUNCTION_MARKER 0x8004BAA8u 0x8004baa8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8004BAA8(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8004BAA8u, "SCUS_942.40");
    int v2;
    int v3;
    int v4;
    int v5;
    int result;
    int v7;
    int v8;
    int v9;

    v2 = a1 << 16;
    v3 = v2 >> 16;
    v4 = *SF_DRAFT_PTR(_DWORD, (76 * (v2 >> 16) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    if (a2 == 78)
    {
        v5 = *SF_DRAFT_PTR(_DWORD, r_u32((v4 + 16)));
        if ((v5 & 2) == 0)
        {
            result = v5 & 0x100000;
            v7 = v2 >> 16;
            if ((v5 & 0x100000) != 0)
                return result;
            v8 = 11;
            return sub_80028F3C(v7, v8);
        }
        result = sub_800354D8();
        if (result != 6)
        {
            result = (uint8)sub_8008B164(v4, 3, 1);
            v7 = v3;
            if (result)
            {
                v8 = 27;
                return sub_80028F3C(v7, v8);
            }
        }
    }
    else
    {
        v9 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 12)) + 408)) + 60));
        if (v9 == 5 || (result = (unsigned int)(v9 - 8) < 2) != 0)
        {
            v7 = v2 >> 16;
            v8 = 78;
            return sub_80028F3C(v7, v8);
        }
    }
    return result;
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D6B04_stage1(sint32 input1, sint32 input2, sint32 input3, sint32 input4);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D6B04_stage2(sint32 input1, sint32 input2, sint32 *output3, sint32 *output4, sint32 *output5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D6B04_stage3(sint32 input1, sint32 input2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D6B04_stage4(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 *output5, sint32 *output6, sint32 *output7);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D6B04_stage5(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 *output5, sint32 *output6);

// FUNCTION_MARKER 0x800D6B04u 0x800d6b04
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800D6B04(sint32 a1)
{
    FUNCTION_MARKER(0x800D6B04u, "SCUS_942.40");
    sint32 temporary_t9; /* TODO Geometry value type */
    sint32 temporary_t8; /* TODO Geometry value type */
    sint32 temporary_t7; /* TODO Geometry value type */
    sint32 temporary_t6; /* TODO Geometry value type */
    sint32 temporary_t3; /* TODO Geometry value type */
    sint32 temporary_t1; /* TODO Geometry value type */
    int v8;
    int v9;
    int v14;

    temporary_t1 = (uint16)*SF_DRAFT_PTR(_DWORD, (a1 + 8));
    temporary_t3 = (uint16)*SF_DRAFT_PTR(_DWORD, (a1 + 24));
    temporary_t6 = (sint32)((uint32)r_u16(a1) | (r_u32(a1 + 4u) << 16));
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800D6B04_stage1(temporary_t6, temporary_t1, temporary_t6, temporary_t3);
    temporary_t6 = (uint16)*SF_DRAFT_PTR(_DWORD, (a1 + 16)) | (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) << 16);
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800D6B04_stage2(temporary_t6, temporary_t1, &temporary_t7, &temporary_t8, &temporary_t9);
    v8 = temporary_t7 + temporary_t8 + temporary_t9;
    v9 = 1;
    if (!v8)
    {
        /* Geometry operation uses the project SDK bridge */
        sf_draft_geometry_800D6B04_stage3(temporary_t6, temporary_t3);
        temporary_t6 = (sint32)((uint32)r_u16(a1 + 16u) | (r_u32(a1 + 20u) << 16));
        /* Geometry operation uses the project SDK bridge */
        sf_draft_geometry_800D6B04_stage4(temporary_t6, temporary_t3, temporary_t6, temporary_t1, &temporary_t7, &temporary_t8, &temporary_t9);
        v14 = temporary_t7 + temporary_t8 + temporary_t9;
        v9 = 1;
        if (!v14)
        {
            temporary_t6 = (uint16)*SF_DRAFT_PTR(_DWORD, a1);
            /* Geometry operation uses the project SDK bridge */
            sf_draft_geometry_800D6B04_stage5(temporary_t6, temporary_t3, temporary_t6, temporary_t1, &temporary_t9, &temporary_t8);
            return temporary_t9 + temporary_t8;
        }
    }
    return v9;
}

// FUNCTION_MARKER 0x800731E4u 0x800731e4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800731E4(uint32 a1, sint32 a2, uint32 a3)
{
    _DWORD *native_a1 = SF_DRAFT_PTR(_DWORD, a1);
    int *native_a3 = SF_DRAFT_PTR(int, a3);
    FUNCTION_MARKER(0x800731E4u, "SCUS_942.40");
    bool v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v17;

    sub_800D9580(sf_draft_guest_address(native_a1), sf_draft_guest_address(&v17));
    v6 = a2 >= v17;
    v7 = -a2;
    if (v6)
    {
        *native_a3 = (0u - *native_a1);
        native_a3[1] = (0u - native_a1[1]);
        native_a3[2] = (0u - native_a1[2]);
    }
    else
    {
        *native_a3 = sub_800C6D4C(*native_a1, v7);
        native_a3[1] = sub_800C6D4C(native_a1[1], v7);
        v8 = sub_800C6D4C(native_a1[2], v7);
        v9 = *native_a3;
        v10 = v17;
        native_a3[2] = v8;
        v11 = sub_800C6D90(v9, v10);
        v12 = native_a3[1];
        *native_a3 = v11;
        v13 = sub_800C6D90(v12, v17);
        v14 = native_a3[2];
        v15 = v17;
        native_a3[1] = v13;
        native_a3[2] = sub_800C6D90(v14, v15);
    }
    return 1;
}

// FUNCTION_MARKER 0x800C794Cu 0x800c794c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800C794C(void)
{
    FUNCTION_MARKER(0x800C794Cu, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;
    int v1;
    int v2 = SF_DRAFT_GP;
    int v3;
    int *v4;
    int v5;
    int v6 = SF_DRAFT_GP;
    int result;

    sub_800DE504();
    sub_800CB5F8();
    sub_800E8D4C(0, 0, 0, 0x8013D560u + 20u * (uint32)(sint32)*SF_DRAFT_PTR(sint16, v0 + 2038));
    sub_800D769C();
    sub_800D769C();
    v1 = 45;
    *SF_DRAFT_PTR(_WORD, (v2 + 2020)) = 0;
    do
    {
        SF_DRAFT_PTR(uint32, 0x8013D560u)[v1] = 0;
        v1 -= 5;
        v3 = 0;
    } while (v1 >= 0);
    v4 = SF_DRAFT_PTR(int, 0x8012CD10u);
    v5 = 0;
    do
    {
        SF_DRAFT_PTR(uint32, 0x8012CD10u)[v5] = 2;
        SF_DRAFT_PTR(uint32, 0x8012CD14u)[v5] = sub_800DE414(16);
        sub_800E9C44(0, 0, sf_draft_guest_address(v4));
        v4 += 5;
        ++v3;
        v5 += 5;
    } while (v3 < 2);
    result = 0;
    *SF_DRAFT_PTR(_WORD, (v6 + 3290)) = 0;
    (*SF_DRAFT_PTR(uint16, 0x80128DD4u)) = 0;
    (*SF_DRAFT_PTR(uint32, 0x80128DE8u)) = 0;
    return result;
}

// FUNCTION_MARKER 0x80080494u 0x80080494
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80080494(sint32 a1)
{
    FUNCTION_MARKER(0x80080494u, "SCUS_942.40");
    int v1 = SF_DRAFT_GP;
    _DWORD *v2;
    int v3;
    uint8 *v4;
    unsigned int v5;
    int v6;
    bool v7;
    int v8;
    char *v9;

    v2 = SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 3372)) + 60 * a1));
    v3 = *v2;
    v4 = SF_DRAFT_PTR(uint8, v2[1]);
    v5 = *((_DWORD *)v4 + 34);
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*v2 + 16)) + 32)) = sf_draft_guest_address(v4);
    v6 = *v4 >> 4;
    v7 = v6 < *SF_DRAFT_PTR(__int16, (v1 + 1026));
    *((_WORD *)v4 + 1) = a1;
    if (!v7)
        sub_800DDC34(1, 0, 0x80012350u, 345);
    v8 = 0;
    v9 = SF_DRAFT_PTR(char, 0x80127CA8u + 32u * (uint32)v6);
    do
    {
        if ((v5 & 1) != 0 && !*v9)
            sub_8008040C(v8, v6);
        ++v9;
        ++v8;
        v5 >>= 1;
    } while (v8 < 32);
    return sub_80081DBC((uint32)v3);
}

// FUNCTION_MARKER 0x800D0DA8u 0x800d0da8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800D0DA8(uint32 arg0)
{
    FUNCTION_MARKER(0x800D0DA8u, "SCUS_942.40");
    int v1 = SF_DRAFT_GP;
    uint32 result;
    uint32 *native_arg0 = SF_DRAFT_PTR(uint32, arg0);
    _DWORD *v4;
    int v6;
    int v7;
    _DWORD *v8;
    int v9;
    int v10;

    result = native_arg0[6];
    v4 = SF_DRAFT_PTR(_DWORD, native_arg0[8]);
    if (result)
    {
        result = native_arg0[9];
        if (result)
        {
            while (v4)
            {
                v6 = *v4;
                v7 = *SF_DRAFT_PTR(_DWORD, (*v4 + 40));
                v4 = SF_DRAFT_PTR(_DWORD, v4[2]);
                if (!v7 || v7 == 0x4000)
                    sub_800D0F08(arg0, v6, 1);
            }
            v8 = SF_DRAFT_PTR(_DWORD, native_arg0[8]);
            while (v8)
            {
                v9 = *v8;
                v10 = *SF_DRAFT_PTR(_DWORD, (*v8 + 40));
                v8 = SF_DRAFT_PTR(_DWORD, v8[2]);
                if (v10 == 0x8000)
                    sub_800D0F08(arg0, v9, 1);
            }
            result = r_u32(v1 + 2252u);
            if (result)
                return sf_draft_call(result, 1u, (const uint32[]){arg0});
        }
    }
    return result;
}

// FUNCTION_MARKER 0x80057EF0u 0x80057ef0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_80057EF0(sint32 a1, sint32 a2, sint32 a3, sint16 a4)
{
    FUNCTION_MARKER(0x80057EF0u, "SCUS_942.40");
    int v5;
    int v6;
    int v7;
    bool v8;
    int v9;

    v5 = a3;
    if (a2 >= 0)
    {
        v6 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
        v7 = *SF_DRAFT_PTR(_DWORD, (76 * a2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        if (a2 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
        {
            v8 = a1 == 1;
            a1 = 3;
            if (!v8)
            {
                sub_80057DD4(3, a4);
                return;
            }
        }
        else
        {
            if (a1 == 4)
            {
                *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v7 + 28)) + 54)) = a4;
                *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v7 + 28)) + 64)) = 4;
            }
            v6 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
        }
        if (a2 == v6 || (v9 = *SF_DRAFT_PTR(_DWORD, (v7 + 28))) != 0 && ((*SF_DRAFT_PTR(_DWORD, (v9 + 32)) & 1) == 0 || *SF_DRAFT_PTR(__int16, r_u32((v7 + 20))) == v6))
        {
            if (!a3)
                v5 = *SF_DRAFT_PTR(_DWORD, (v7 + 12));
            sub_80057BB4(a1, v5, a4, a2);
        }
    }
}

// FUNCTION_MARKER 0x800DB8D4u 0x800db8d4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DB8D4(sint32 a1)
{
    FUNCTION_MARKER(0x800DB8D4u, "SCUS_942.40");
    int result;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;

    result = 0;
    if (a1)
    {
        v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 32));
        result = 43;
        if (v2)
        {
            v3 = *SF_DRAFT_PTR(_DWORD, (v2 + 32));
            if (v3)
            {
                v4 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
                result = 43;
                if (v4)
                {
                    v5 = *SF_DRAFT_PTR(_DWORD, (v4 + 40));
                    if (v5)
                    {
                        if (a1 == v5)
                        {
                            *SF_DRAFT_PTR(_DWORD, (v4 + 40)) = *SF_DRAFT_PTR(_DWORD, (v2 + 36));
                        LABEL_16:
                            result = 0;
                            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 32)) = 0;
                            *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 44)) = 1;
                        }
                        else
                        {
                            while (1)
                            {
                                v6 = v5;
                                v7 = *SF_DRAFT_PTR(_DWORD, (v5 + 32));
                                result = 43;
                                if (!v7)
                                    break;
                                v5 = *SF_DRAFT_PTR(_DWORD, (v7 + 36));
                                if (!v5 || v5 == a1)
                                {
                                    v8 = *SF_DRAFT_PTR(_DWORD, (v6 + 32));
                                    result = 43;
                                    if (!v8)
                                        return result;
                                    if (*SF_DRAFT_PTR(_DWORD, (v8 + 36)))
                                    {
                                        *SF_DRAFT_PTR(_DWORD, (v8 + 36)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 36));
                                        goto LABEL_16;
                                    }
                                    return 43;
                                }
                            }
                        }
                    }
                    else
                    {
                        return 43;
                    }
                }
            }
            else
            {
                return 0;
            }
        }
    }
    return result;
}

// FUNCTION_MARKER 0x800DF600u 0x800df600
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DF600(sint32 a1, sint8 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800DF600u, "SCUS_942.40");
    uint32 descriptor = (uint32)a1;
    sint32 result;
    uint32 pending;

    if (descriptor == 0u)
        return 1;
    if (*SF_DRAFT_PTR(sint32, descriptor + 8u) < 0)
        sub_800DDC34(1, 0u, 0x800139D4u, 540);
    if (r_u8(SF_DRAFT_GP + 0x99Cu) == 1u)
    {
        result = sub_800DF6EC(0);
        if (result != 0)
            return result;
    }
    pending = r_u32(SF_DRAFT_GP + 0x9A8u);
    w_u32(SF_DRAFT_GP + 0x998u, descriptor);
    w_u32(SF_DRAFT_GP + 0x9A0u, (uint32)a3);
    w_u8(SF_DRAFT_GP + 0x99Du, (uint8)a2);
    w_u8(SF_DRAFT_GP + 0x99Cu, 1u);
    if (pending != 0u)
        sub_800DDC34(1, 0u, 0x800139D4u, 555);
    return sub_800D8930((sint32)0x800DF464u, 1, 0x80116610u);
}

// FUNCTION_MARKER 0x800CB118u 0x800cb118
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800CB118(sint32 a1)
{
    FUNCTION_MARKER(0x800CB118u, "SCUS_942.40");
    _DWORD *v2 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
    signed int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    _DWORD *i;

    sub_800E5000(0);
    v3 = (a1 + 8) & 0xFFFFFFF8;
    v4 = v3 >> 1;
    if ((sint32)v2[527] < v3 >> 1)
        sub_800DDC34(1, 0, 0x800138A4u, 2107);
    if (v2[529])
        sub_800DDC34(1, 0, 0x800138A4u, 2108);
    v5 = v2[527];
    v6 = v2[788];
    v7 = v2[528];
    v8 = 0;
    v2[529] = v4;
    v9 = v5 - v4;
    v10 = v6 + v9;
    v2[528] = v7 - v4;
    v2[527] = v9;
    (*SF_DRAFT_PTR(uint32, 0x801168BCu)) = v10;
    for (i = SF_DRAFT_PTR(_DWORD, (v10 + v9)); v8 < v3 >> 2; ++i)
    {
        *i = 0;
        ++v8;
    }
    return v10 + v9;
}

// FUNCTION_MARKER 0x800D7854u 0x800d7854
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800D7854(sint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800D7854u, "SCUS_942.40");
    sint32 width = a1;
    sint32 height = a2;
    uint32 mode = a3;
    uint32 center;

    if (width <= 0)
        width = r_s16(SF_DRAFT_GP + 0xC28u);
    if (height <= 0)
        height = r_s16(SF_DRAFT_GP + 0xC2Cu);
    if (mode >= 2u)
        mode = r_u32(SF_DRAFT_GP + 0x904u);
    sub_800E8AC4((uint16)width, (uint16)height, 4u, 1u, (uint16)(mode == 1u));
    sub_800E9494(0, 0, 0, (uint16)height);
    center = r_u16(SF_DRAFT_GP + 0x924u);
    w_u16(SF_DRAFT_GP + 0xC28u, (uint16)width);
    w_u16(SF_DRAFT_GP + 0xC2Cu, (uint16)height);
    w_u32(SF_DRAFT_GP + 0x904u, mode);
    w_u16(0x8012C7B0u, (uint16)(center + (uint32)(width >> 1)));
    center = r_u16(SF_DRAFT_GP + 0x926u);
    w_u16(0x8012C7B2u, (uint16)(center + (uint32)(height >> 1)));
    sub_800D7930(0u);
    return 0;
}

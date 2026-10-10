#include "game_draft.h"
void sf_gte_write_data(uint32 index, uint32 value);
uint32 sf_gte_read_data(uint32 index);

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static uint32 sf_draft_missing_stale_8001E710(uint32 local_offset)
{
    fprintf(stderr, "TODO 8001E710 original unwritten local +%X\n", local_offset);
    abort();
}

void sf_draft_missing_gte_800770F8_1(sint32 *output1, sint32 *output2);
void sf_draft_missing_gte_800770F8_2(sint32 *output1);
void sf_draft_missing_gte_800770F8_3(sint32 *output1, sint32 *output2, sint32 *output3);
void sf_draft_missing_gte_800D39D8_1(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, uint32 memory6, uint32 memory7, uint32 memory8, sint32 *output9, sint32 *output10, sint32 *output11);
void sf_draft_missing_gte_800D39D8_2(sint32 input1, sint32 input2);
void sf_draft_missing_gte_800D39D8_3(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
void sf_draft_missing_gte_800D39D8_4(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
void sf_draft_missing_gte_800D39D8_5(sint32 *output1, sint32 *output2);
void sf_draft_missing_gte_800D39D8_6(sint32 *output1);
void sf_draft_missing_gte_800D39D8_7(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, sint32 input6, sint32 input7, sint32 input8);
void sf_draft_missing_gte_800D5824_1(sint32 *output1, sint32 *output2, sint32 *output3);
void sf_draft_missing_gte_800D5824_2(sint32 *output1, sint32 *output2, sint32 *output3);
/* TODO Resolve external dependency signatures */
uint32 sub_80059488();
uint32 sub_80086540();
uint32 sub_800C67CC();
uint32 sub_800C6AC0();
uint32 sub_800CD630();
uint32 sub_800CD68C();

sint32 sub_800288BC(sint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x800288BCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v4;
    int v7;
    int v8;
    uint32 v9;
    uint32 v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int result;

    v4 = a2;
    v7 = 0;
    v8 = *SF_DRAFT_PTR(_DWORD, (76u * (uint32)a1 + r_u32(0x80115CCCu) + 52u));
    do
    {
        v9 = 0;
        v10 = r_u32((uint32)a2 + 24u);
        while (1)
        {
            v11 = r_s16(v10);
            v10 += 24u;
            if (v11 < 0)
                break;
            ++v9;
        }
        *SF_DRAFT_PTR(_WORD, (a2 + 42)) = v9;
        ++v7;
        a2 = (sint32)((uint32)a2 + 44u);
    } while (v7 < 108);
    v12 = sub_800DE414(24);
    if (!v12)
        sub_800DDC34(1, 0, 0x80115E44u, 615);
    v13 = sub_800DE414(172);
    if (!v13)
        sub_800DDC34(1, 0, 0x80115E44u, 619);
    v14 = sub_800DE414((uint32)a4 * 4u);
    *SF_DRAFT_PTR(_DWORD, (v13 + 4)) = v14;
    if (!v14)
        sub_800DDC34(1, 0, 0x80115E44u, 622);
    v15 = 0;
    v16 = v13;
    *SF_DRAFT_PTR(_BYTE, v13) = 0;
    *SF_DRAFT_PTR(_BYTE, (v13 + 1)) = a4;
    *SF_DRAFT_PTR(_DWORD, (v13 + 8)) = -1;
    *SF_DRAFT_PTR(_WORD, (v13 + 108)) = 0;
    do
    {
        *SF_DRAFT_PTR(_DWORD, (v16 + 12)) = 255;
        *SF_DRAFT_PTR(_DWORD, (v16 + 24)) = 0;
        ++v15;
        v16 += 4;
    } while (v15 < 3);
    *SF_DRAFT_PTR(_BYTE, (v12 + 8)) = 1;
    *SF_DRAFT_PTR(_BYTE, (v12 + 9)) = 1;
    *SF_DRAFT_PTR(_DWORD, (v12 + 12)) = v13;
    *SF_DRAFT_PTR(_DWORD, (v12 + 16)) = v4;
    *SF_DRAFT_PTR(_DWORD, (v12 + 20)) = a3;
    *SF_DRAFT_PTR(_DWORD, (v8 + 16)) = v12;
    *SF_DRAFT_PTR(_DWORD, v12) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v8 + 16)) + 4)) = 0;
    result = 20;
    if (!(*SF_DRAFT_PTR(uint32, 0x8010B5D4u)))
    {
        (*SF_DRAFT_PTR(uint8, 0x8010B5D0u)) = 0;
        (*SF_DRAFT_PTR(uint8, 0x8010B5D1u)) = 20;
        result = sub_800DE414(172);
        (*SF_DRAFT_PTR(uint32, 0x8010B5D4u)) = result;
        if (!result)
        {
            sub_800DDC34(1, 0, 0x80115E44u, 663);
            /* TODO Resolve incidental return if the fatal handler returns */
            abort();
        }
    }
    return result;
}

uint32 sub_8003129C(sint32 a1)
{
    FUNCTION_MARKER(0x8003129Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    __int16 *v2;
    unsigned int v3;
    int v4;
    int v5;
    unsigned int v6;
    __int16 v7;
    int v8;
    _DWORD *result;
    int v10;
    bool v11; // dc
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    unsigned int v18;
    int v19;

    v2 = SF_DRAFT_PTR(__int16, *(__int16 **)(a1 + 20));
    if (*SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v3 = **(_DWORD **)(a1 + 16);
        v4 = (v3 >> 20) & 1;
        if ((v3 & 2) == 0 || v4 != *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2560)) || (v3 & 0x1001400) != 0)
        {
            v5 = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2560)) = v4;
            *((_DWORD *)v2 + 51) = v5;
        }
        v6 = (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - *((_DWORD *)v2 + 51)) >> 2;
        if (v6 >= 0x65)
            LOWORD(v6) = 100;
        v7 = *(_WORD *)(*((_DWORD *)v2 + 12) + 20) * v6;
        v8 = *((_DWORD *)v2 + 12);
        v2[32] = v7;
        result = SF_DRAFT_PTR(_DWORD, v7);
        v10 = *SF_DRAFT_PTR(__int16, (v8 + 22));
        if (v10 < v7)
            v2[32] = v10;
    }
    else
    {
        result = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(*(_DWORD *)(76 * *v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52) + 16));
        if (result)
        {
            v11 = (*result & 0x400) == 0;
            v12 = *result & 8;
            if (v11)
            {
                if (v12)
                {
                    v14 = *((_DWORD *)v2 + 12);
                    *((_DWORD *)v2 + 51) = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
                    result = SF_DRAFT_PTR(_DWORD, *(uint16 *)(v14 + 32));
                    v2[34] = (__int16)result;
                }
                else
                {
                    v15 = *((_DWORD *)v2 + 12);
                    v16 = *((_DWORD *)v2 + 51);
                    v17 = *SF_DRAFT_PTR(__int16, (v15 + 32));
                    if (v16 < 0)
                    {
                        v16 = -v16;
                        v17 = *SF_DRAFT_PTR(__int16, (v15 + 34));
                    }
                    v18 = (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - v16) >> 2;
                    if (v18 >= 0x65)
                        v18 = 100;
                    v19 = (0u - v18) * *SF_DRAFT_PTR(__int16, ((*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 76));
                    result = SF_DRAFT_PTR(_DWORD, (v17 - v19));
                    if (v17 < v19)
                        v2[34] = (__int16)result;
                }
            }
            else
            {
                v13 = *((_DWORD *)v2 + 12);
                *((_DWORD *)v2 + 51) = (0u - (*SF_DRAFT_PTR(uint32, 0x80116A88u)));
                result = SF_DRAFT_PTR(_DWORD, *(uint16 *)(v13 + 34));
                v2[34] = (__int16)result;
            }
        }
        else
        {
            v2[34] = 0;
        }
    }
    return sf_draft_guest_address(result);
}

sint32 sub_80059CF4(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x80059CF4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v6;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int result;

    v6 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
    v8 = -1;
    if (*SF_DRAFT_PTR(_BYTE, (v6 + 72)) && ((v9 = *SF_DRAFT_PTR(__int16, (a1 + 2)), v9 == 666) || *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v9 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 2))
    {
        if ((*SF_DRAFT_PTR(_DWORD, (v6 + 32)) & 0x20000000) != 0)
        {
            if ((uint16)(*SF_DRAFT_PTR(_WORD, (12 * a3 + a2 + 6)) & 0xF00) >> 8 == 6 && (v12 = a2, (int)(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 212)) & 0xFFFF3FFF) < *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3514)) - 409))
            {
                v13 = -1;
                *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) |= 0x80000u;
                *SF_DRAFT_PTR(_BYTE, (v6 + 65)) = 0;
            }
            else
            {
                v13 = *(uint8 *)(v6 + 68);
                v12 = a2;
            }
            v8 = sub_80059488(v12, a3, v13);
        }
        else
        {
            v8 = sub_80059574(a1, a2);
        }
    }
    else
    {
        v10 = *SF_DRAFT_PTR(char, (12 * a3 + a2 + 8));
        v11 = (uint16)(*SF_DRAFT_PTR(_WORD, (12 * v10 + a2 + 6)) & 0xF00) >> 8;
        if (v10 >= 0 && v11 != 1 && v11 != 7)
            v8 = *SF_DRAFT_PTR(char, (12 * a3 + a2 + 8));
    }
    result = 0;
    if (v8 >= 0)
    {
        result = 1;
        if (*(uint8 *)(v6 + 67) == v8)
        {
            return 0;
        }
        else
        {
            *SF_DRAFT_PTR(_BYTE, (v6 + 68)) = *SF_DRAFT_PTR(_BYTE, (v6 + 67));
            *SF_DRAFT_PTR(_BYTE, (v6 + 67)) = v8;
            *SF_DRAFT_PTR(_BYTE, (v6 + 73)) = -1;
        }
    }
    return result;
}

void sub_8006B618(void)
{
    FUNCTION_MARKER(0x8006B618u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v0;

    int v2;
    int v3;
    int v5;
    int v6;
    int v7;

    sub_800EC894(0x8001218Cu, sf_draft_guest_address("\\COMMON\\INGAME.XH;1"));
    sub_80015850(SF_DRAFT_PTR(const char, 0x8001218Cu), sf_draft_guest_address(&v5), 0);
    v0 = sub_800BF09C(v5);
    sub_800EC894(0x8001218Cu, sf_draft_guest_address("\\COMMON\\BEEPSX.VH;1"));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2960)) = v0;
    sub_80015850(SF_DRAFT_PTR(const char, 0x8001218Cu), sf_draft_guest_address(&v6), 0);
    v2 = sub_800DE4F8();
    sub_800EC894(0x8001218Cu, sf_draft_guest_address("\\COMMON\\BEEPSX.VB;1"));
    v3 = v2;
    sub_80015850(SF_DRAFT_PTR(const char, 0x8001218Cu), sf_draft_guest_address(&v7), 0);
    if (v7 && v6)
    {
        (*SF_DRAFT_PTR(uint32, 0x8011E8B4u)) = sub_800BED04(v6, v7);
        while (!(sub_800BF02C() << 16))
            ;
    }
    sub_800BF2A0(3, 5);
    sub_800DE4EC(v3);
}

void sub_800D39D8(uint32 A0)
{
    const uint8 *matrix = SF_DRAFT_PTR(uint8, A0);
    uint32 rotation[5], translated[3], offsets[3];
    uint32 first[3], second[3], final[3], xy, z, index;
    long long sum;
    FUNCTION_MARKER(0x800D39D8u, "SCUS_942.40");
    for (index = 0u; index < 5u; ++index)
        rotation[index] = r_u32(0x80130CD8u + 4u * index);
    for (index = 0u; index < 5u; ++index)
        xport_gte_write_control(index, rotation[index]);
    sf_gte_write_data(9u, xport_load_le32(matrix + 20u));
    sf_gte_write_data(10u, xport_load_le32(matrix + 24u));
    sf_gte_write_data(11u, xport_load_le32(matrix + 28u));
    sf_gte_execute(0x49E012u);
    translated[0] = sf_gte_read_data(25u);
    translated[1] = sf_gte_read_data(26u);
    translated[2] = sf_gte_read_data(27u);
    xy = xport_load_le16(matrix);
    xy |= xport_load_le32(matrix + 4u) & 0xffff0000u;
    z = xport_load_le32(matrix + 12u);
    sf_gte_write_data(0u, xy);
    sf_gte_write_data(1u, z);
    sf_gte_execute(0x486012u);
    xy = xport_load_le16(matrix + 2u);
    xy |= xport_load_le32(matrix + 8u) << 16;
    z = (uint32)(sint32)(sint16)xport_load_le16(matrix + 14u);
    first[0] = sf_gte_read_data(9u);
    first[1] = sf_gte_read_data(10u);
    first[2] = sf_gte_read_data(11u);
    sf_gte_write_data(0u, xy);
    sf_gte_write_data(1u, z);
    sf_gte_execute(0x486012u);
    xy = xport_load_le16(matrix + 4u);
    xy |= xport_load_le32(matrix + 8u) & 0xffff0000u;
    z = xport_load_le32(matrix + 16u);
    second[0] = sf_gte_read_data(9u);
    second[1] = sf_gte_read_data(10u);
    second[2] = sf_gte_read_data(11u);
    sf_gte_write_data(0u, xy);
    sf_gte_write_data(1u, z);
    sf_gte_execute(0x486012u);
    rotation[0] = (second[0] << 16) | (first[0] & 0xffffu);
    rotation[3] = (second[2] << 16) | (first[2] & 0xffffu);
    final[0] = sf_gte_read_data(9u);
    final[1] = sf_gte_read_data(10u);
    rotation[1] = (first[1] << 16) | (final[0] & 0xffffu);
    rotation[2] = (final[1] << 16) | (second[1] & 0xffffu);
    final[2] = sf_gte_read_data(11u);
    rotation[4] = final[2];
    for (index = 0u; index < 3u; ++index)
        offsets[index] = r_u32(0x80130CECu + 4u * index);
    for (index = 0u; index < 3u; ++index)
    {
        sum = (long long)(sint32)translated[index] + (sint32)offsets[index];
        if (sum < -2147483648LL || sum > 2147483647LL)
        {
            fprintf(stderr, "Original sub_800D39D8 ADD translation overflow\n");
            abort();
        }
        translated[index] = (uint32)(sint32)sum;
    }
    for (index = 0u; index < 5u; ++index)
        xport_gte_write_control(index, rotation[index]);
    for (index = 0u; index < 3u; ++index)
        xport_gte_write_control(5u + index, translated[index]);
}

sint32 sub_80084998(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80084998u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int *v4;
    int v5;
    char *v6;
    _DWORD *v7;
    _DWORD *v8;
    int result;
    int *v10;
    int v11;

    v4 = &(*SF_DRAFT_PTR(uint32, 0x80120EF8u));
    v5 = 0;
    v6 = &(*SF_DRAFT_PTR(uint8, 0x80120EFFu));
    do
    {
        if (*(__int16 *)(v6 + 1) == a1 && *(__int16 *)(v6 + 3) == a2 && *(__int16 *)(v6 + 5) == a3 && *(__int16 *)(v6 + 7) == a4)
        {
            *v4 |= 3u;
            v7 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(v6 + 9));
            while (v7)
            {
                if ((unsigned int)(*SF_DRAFT_PTR(uint32, 0x801169A4u)) < *(_DWORD *)(*v7 + 8))
                {
                    v7 = (_DWORD *)v7[2];
                }
                else
                {
                    v8 = (_DWORD *)v7[2];
                    sub_80087660(*v7);
                    sub_800DE6E0(sf_draft_guest_address(v4 + 4), sf_draft_guest_address(v7));
                    v7 = v8;
                }
            }
            *v6 = 0;
            return (uint8)v5;
        }
        ++v5;
        v6 += 20;
        v4 += 5;
    } while (v5 < 6);
    v10 = &(*SF_DRAFT_PTR(uint32, 0x80120EF8u));
    v11 = 0;
    if (((*SF_DRAFT_PTR(uint32, 0x80120EF8u)) & 1) != 0)
    {
        while (1)
        {
            v10 += 5;
            if (v11 >= 6)
                break;
            ++v11;
            if ((*v10 & 1) == 0)
                goto LABEL_16;
        }
    }
    else
    {
    LABEL_16:
        result = (uint8)v11;
        if (v11 < 6)
        {
            *((_BYTE *)v10 + 6) = 0x80;
            *((_BYTE *)v10 + 5) = 0x80;
            *((_BYTE *)v10 + 4) = 0x80;
            *((_WORD *)v10 + 4) = a1;
            *((_WORD *)v10 + 5) = a2;
            *((_WORD *)v10 + 6) = a3;
            *((_WORD *)v10 + 7) = a4;
            *((_BYTE *)v10 + 7) = 0;
            *v10 = (3);
            return result;
        }
    }
    return 255;
}

sint32 sub_80055D90(void)
{
    FUNCTION_MARKER(0x80055D90u, "SCUS_942.40");
    uint32 current = r_u32(0x80116700u);
    uint32 previous = r_u32(0x80116704u);
    uint32 result;
    if (current != previous)
    {
        w_u8(0x801166CCu, 0);
        if (!current)
            w_u8(0x801166C8u, 16);
        else if (!previous)
        {
            if (!r_u32(0x8011CE08u))
                sub_800CD630(0x8011CE08u);
            w_u8(0x801166C8u, 4);
        }
        w_u32(0x80116704u, r_u32(0x80116700u));
    }
    if (r_u32(0x80116700u))
    {
        uint32 fade = r_u8(0x801166C8u);
        uint32 random, amplitude, packed, object, flags, parameter;
        if (fade)
            w_u8(0x801166C8u, fade - 1u);
        random = (uint32)sub_800EC8F4();
        fade = r_u8(0x801166C8u);
        amplitude = ((4u - fade) << 5) + (random & 31u);
        random = (uint32)sub_800EC8F4();
        packed = (((uint32)((sint32)amplitude / 2) + (random & 31u)) << 8) + amplitude;
        object = r_u32(0x80116700u);
        w_u8(0x801166C8u, 4);
        flags = r_u32(object + 4u);
        if (flags & 0x80000u)
        {
            packed |= 0x80000000u;
            w_u32(object + 4u, flags & 0xfff7ffffu);
            w_u8(0x801166CCu, 1);
        }
        parameter = 2u * (uint32)(sint32)r_s16(0x80116708u) + 100u;
        sub_800CD624((sint32)0x8011CE08u, (sint16)parameter, (sint32)packed);
        return sub_800DC8AC(r_u32(0x8011CE34u), 0, 0x8011CE38u);
    }
    result = r_u8(0x801166C8u);
    if (result)
    {
        uint32 amplitude = (result << 3) + 15u;
        uint32 packed = ((amplitude >> 1) << 8) + amplitude;
        uint32 parameter = 2u * (uint32)(sint32)r_s16(0x80116708u) + 100u;
        w_u8(0x801166C8u, result - 1u);
        sub_800CD624((sint32)0x8011CE08u, (sint16)parameter, (sint32)packed);
        result = r_u8(0x801166C8u);
        if (result)
            return (sint32)result;
    }
    result = r_u32(0x8011CE08u);
    if (result)
    {
        result = sub_800CD68C(0x8011CE08u);
        w_u32(0x80116704u, 0);
    }
    return (sint32)result;
}

sint32 sub_8001E710(uint32 a1)
{
    FUNCTION_MARKER(0x8001E710u, "SCUS_942.40");
    uint32 *output = SF_DRAFT_PTR(uint32, a1);
    uint32 camera = r_u32(0x80115D84u);
    uint32 orientation[4], rotation[4], base[4], published[4];
    sint32 displacement[3];
    uint32 active, index, z;
    for (index = 0; index < 4u; ++index)
        orientation[index] = r_u32(0x800101C0u + 4u * index);
    active = r_u32(camera + 0x94Cu);
    rotation[0] = r_u32(camera + 0x954u);
    if (active)
    {
        rotation[1] = r_u32(camera + 0x958u);
        rotation[2] = r_u32(camera + 0x95Cu);
        rotation[3] = r_u32(camera + 0x960u);
    }
    else
    {
        /* TODO Recover meaningful unwritten rotation Y/Z at original SP+24/28 */
        sf_draft_unbound_stack_field(0x8001E710u, 0x24u);
    }
    displacement[0] = 0;
    displacement[1] = 0;
    displacement[2] = 704;
    sub_800E098C(sf_draft_guest_address(displacement), (sint32)sf_draft_guest_address(rotation), sf_draft_guest_address(displacement));
    camera = r_u32(0x80115D84u);
    active = r_u32(camera + 0x1B4u);
    base[0] = r_u32(camera + 0x1ECu);
    if (active)
    {
        base[1] = r_u32(camera + 0x1F0u);
        base[2] = r_u32(camera + 0x1F4u);
        base[3] = r_u32(camera + 0x1F8u);
    }
    else
    {
        /* TODO Recover meaningful unwritten base Y/Z at original SP+14/18 */
        sf_draft_unbound_stack_field(0x8001E710u, 0x14u);
    }
    output[0] = base[0] + (uint32)displacement[0];
    output[1] = base[1] + (uint32)displacement[1];
    z = base[2] + (uint32)displacement[2];
    camera = r_u32(0x80115D84u);
    output[2] = z;
    for (index = 0; index < 4u; ++index)
        published[index] = output[index];
    for (index = 0; index < 4u; ++index)
        w_u32(camera + 0xD1Cu + 4u * index, published[index]);
    camera = r_u32(0x80115D84u);
    for (index = 0; index < 4u; ++index)
        w_u32(camera + 0xD30u + 4u * index, orientation[index]);
    w_u8(r_u32(0x80115D84u) + 0xD40u, 0u);
    sub_80018994(r_u32(0x80115D84u), 1, 2, 1);
    return 1;
}

sint32 sub_800C087C(sint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    uint32 records, row;
    sint16 selected = (sint16)a2;
    sint32 result;
    FUNCTION_MARKER(0x800C087Cu, "SCUS_942.40");
    if (r_u32(SF_DRAFT_GP + 0x75Cu) != 0u)
        sub_800C0C74();
    records = r_u32((uint32)a1 + 4u);
    row = records + 24u * (uint32)(sint32)selected;
    if ((sint16)a3 != -2)
    {
        if ((sint16)a3 == -1)
            w_u8(row + 9u, r_u8(row + 12u));
        else
            w_u8(row + 9u, (uint8)a3);
    }
    if ((sint16)a4 != -2)
    {
        if ((sint16)a4 == -1)
            w_u16(row + 10u, r_u16(row + 14u));
        else
            w_u16(row + 10u, (uint16)a4);
    }
    sub_800C5D68();
    sub_800C5D58(r_u8(row + 9u), (uint32)(sint32)r_s16(row + 10u));
    w_u32(SF_DRAFT_GP + 0x75Cu, records);
    w_u32(SF_DRAFT_GP + 0x760u, (uint32)a1);
    w_u16(SF_DRAFT_GP + 0x764u, (uint16)a2);
    w_u32(SF_DRAFT_GP + 0x768u, 0u);
    w_u32(SF_DRAFT_GP + 0x76Cu, 0u);
    result = sub_800BFC68(a1, selected, r_u8(row + 9u), (uint32)(sint32)r_s16(row + 10u));
    if ((sint16)result == -1)
        w_u32(SF_DRAFT_GP + 0x768u, 1u);
    return 1;
}

sint32 sub_80059FCC(sint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x80059FCCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v7;
    int v8;
    int result;

    uint32 v12;

    v7 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
    v8 = *SF_DRAFT_PTR(_DWORD, (v7 + 32));
    if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 24)) + 8)) <= 0 || (result = *SF_DRAFT_PTR(_DWORD, (v7 + 32)) & 8, (v8 & 8) == 0))
    {
        result = 5;
        if (!*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 904)))
        {
            if ((*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 5 && *SF_DRAFT_PTR(_BYTE, (v7 + 82)) == 4)
                a2 = 2;
            sub_80059F4C((uint32)a1);
            result = r_u8((uint32)v7 + 72u);
            if (a2 != result)
            {
                if (a4)
                {
                    if (a2 == 2)
                    {
                        v12 = r_u32(0x80115FE0u);
                        if (v12)
                            sf_draft_call(v12, 1u, (const uint32[]){(uint32)(sint32)r_s16((uint32)a1 + 2u)});
                    }
                }
                result = 2;
                if (a2 != r_u8((uint32)v7 + 72u))
                {
                    if (a2 == 2 || (v8 & 1) != 0)
                    {
                        *SF_DRAFT_PTR(_BYTE, (v7 + 72)) = 2;
                        sub_80059108(a1);
                        if (r_u8(0x80116988u) >= 2u && (sub_800EC8F4() & 3) == 0 || (result = r_u8(r_u32((uint32)a1 + 28u) + 82u) < 3u, !result))
                        {
                            result = 9;
                            if ((*SF_DRAFT_PTR(_DWORD, (v7 + 32)) & 0x100) != 0)
                            {
                                if (*SF_DRAFT_PTR(_BYTE, (v7 + 82)) != 9)
                                    return sub_80056740(a1, 4);
                            }
                            else
                            {
                                return sub_80056740(a1, 3);
                            }
                        }
                    }
                    else
                    {
                        *SF_DRAFT_PTR(_BYTE, (v7 + 72)) = 1;
                        return sub_80058FC0(a1);
                    }
                }
            }
        }
    }
    return result;
}

sint32 sub_800DB730(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800DB730u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;
    int v5;
    __int16 v6[10];
    int v7;
    int v8;
    int v9;

    if (!a1)
    {
        result = 24;
        if (!a2)
            return result;
    LABEL_5:
        if (!*SF_DRAFT_PTR(_DWORD, (a2 + 32)))
        {
            result = sub_800DB648(a2, 0);
            if (result)
                return result;
        }
        goto LABEL_7;
    }
    if (a2)
        goto LABEL_5;
LABEL_7:
    result = 0;
    if (!a1)
        return result;
    v5 = *SF_DRAFT_PTR(_DWORD, (a1 + 32));
    if (!v5)
    {
        result = sub_800DB648(a1, a2);
        if (result)
            return result;
        return 0;
    }
    if (*SF_DRAFT_PTR(_DWORD, (v5 + 32)))
        sub_800DB8D4(a1);
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 32)) = a2;
    if (a2)
    {
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 36)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 32)) + 40));
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 32)) + 40)) = a1;
    }
    result = 0;
    if (!*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 44)))
    {
        v6[0] = *SF_DRAFT_PTR(_WORD, a1);
        v6[1] = -*SF_DRAFT_PTR(_WORD, (a1 + 2));
        v6[2] = *SF_DRAFT_PTR(_WORD, (a1 + 4));
        v6[3] = -*SF_DRAFT_PTR(_WORD, (a1 + 6));
        v6[4] = *SF_DRAFT_PTR(_WORD, (a1 + 8));
        v6[5] = -*SF_DRAFT_PTR(_WORD, (a1 + 10));
        v6[6] = *SF_DRAFT_PTR(_WORD, (a1 + 12));
        v6[7] = -*SF_DRAFT_PTR(_WORD, (a1 + 14));
        v6[8] = *SF_DRAFT_PTR(_WORD, (a1 + 16));
        v7 = *SF_DRAFT_PTR(_DWORD, (a1 + 20));
        v8 = (0u - *SF_DRAFT_PTR(_DWORD, (a1 + 24)));
        v9 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
        sub_800DC40C(a1, 0, sf_draft_guest_address(v6));
        return 0;
    }
    return result;
}

sint32 sub_8006C620(uint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x8006C620u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    bool v8; // dc
    __int16 v9;
    __int16 v10;
    __int16 v11;

    sint16 volume[2];

    if ((uint8)sub_800826C0())
    {
    LABEL_4:
        sub_8006B90C(4, 0xFFFFFFFF, a2, 0, sf_draft_guest_address(&volume[0]), sf_draft_guest_address(&volume[1]));
        v8 = sub_800C04A4(r_u32(SF_DRAFT_GP + 2960u), (sint16)a1, volume[0], volume[1], 1, 1, (!a2 || r_s16(a2 + 2u) != (sint32)r_u32(0x80116AB0u))) == 0;
        result = -1;
        if (v8)
            return result;
        (*SF_DRAFT_PTR(uint32, 0x80128DA0u)) = -1;
        v9 = -1;
        (*SF_DRAFT_PTR(uint16, 0x80128DA8u)) = a1;
        (*SF_DRAFT_PTR(uint16, 0x80128DA4u)) = -1;
        if (a2)
            v9 = *SF_DRAFT_PTR(_WORD, (a2 + 2));
        (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) = v9;
        if ((*SF_DRAFT_PTR(uint32, 0x80128DACu)) == -4)
        {
            (*SF_DRAFT_PTR(uint32, 0x80128DACu)) = -1;
            v10 = (*SF_DRAFT_PTR(uint16, 0x80128DB0u));
            v11 = (*SF_DRAFT_PTR(uint16, 0x80128DB2u));
            (*SF_DRAFT_PTR(uint16, 0x80128DB4u)) = -1;
            (*SF_DRAFT_PTR(uint16, 0x80128DB0u)) = -1;
            (*SF_DRAFT_PTR(uint16, 0x80128DB2u)) = -1;
            (*SF_DRAFT_PTR(uint16, 0x80128DA4u)) = v10;
            (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) = v11;
        }
        return sub_800C8A9C(0x8006C440u, 5, -524288000);
    }
    result = sub_800C60B4();
    if (result)
    {
        if (!a3)
            return result;
        goto LABEL_4;
    }
    result = -2;
    if (!a3)
        return result;
    (*SF_DRAFT_PTR(uint32, 0x80128DA0u)) = -2;
    (*SF_DRAFT_PTR(uint16, 0x80128DA8u)) = a1;
    (*SF_DRAFT_PTR(uint16, 0x80128DA4u)) = -1;
    (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) = -1;
    if (a2)
        (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) = *SF_DRAFT_PTR(_WORD, (a2 + 2));
    return sub_800C8A9C(0x8006C440u, 5, -524288000);
}

sint32 sub_8002BDC0(sint32 a1)
{
    FUNCTION_MARKER(0x8002BDC0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v1;
    int v2;
    bool v3; // dc
    int result;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;

    if (a1 >= (sint32)r_u32(0x801169B0u) || a1 < 0)
        v1 = 0;
    else
        v1 = (*SF_DRAFT_PTR(uint32, 0x80116994u)) + 60 * a1;
    v2 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v1) + 16)) + 32));
    v3 = sub_800C6A94(v2) == 0;
    result = 9;
    if (!v3)
    {
        v5 = 0;
        if ((*SF_DRAFT_PTR(uint32, 0x80116A5Cu)) > 0)
        {
            v6 = 0;
            do
            {
                v7 = *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
                if (v7 && *SF_DRAFT_PTR(_BYTE, (v7 + 34)) == 4 && (*SF_DRAFT_PTR(_BYTE, v7) & 2) == 0)
                {
                    if (v5 == 666)
                        v8 = 666;
                    else
                        v8 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
                    v9 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (v7 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
                    if (v8 == 20 || v8 == 40 || v8 == 109 || v8 == 52)
                        sub_800C67CC(v2, (__int16)v9);
                    else
                        sub_800C6AC0(v2, (__int16)v9, 0);
                }
                ++v5;
                v6 += 76;
            } while (v5 < (sint32)r_u32(0x80116A5Cu));
        }
        return 9;
    }
    return result;
}

void sub_800D3D50(uint32 record, uint32 rgbflags, uint32 index, uint32 polygon, uint32 primitive, uint32 mode, uint32 buffer_base, uint32 channel_mask, uint32 *vertex_buffer, sint16 coords[4])
{
    uint32 owner, node, color, rgb, red, green, blue;
    FUNCTION_MARKER(0x800D3D50u, "SCUS_942.40");
    /* TODO Native renderer contract requires runtime validation */
    w_u32(rgbflags, r_u32(rgbflags) | (0x40000000u >> (index & 31u)));
    owner = r_u32(record);
    if (r_u32(owner + 40u))
    {
        w_u32(owner + 24u, r_u32(owner + 24u) + 1u);
        rgb = r_u32(rgbflags + 4u);
        w_u32(owner + 28u, r_u32(owner + 28u) + (rgb & 255u));
        w_u32(owner + 32u, r_u32(owner + 32u) + ((rgb >> 8) & 255u));
        w_u32(owner + 36u, r_u32(owner + 36u) + ((rgb >> 16) & 255u));
    }
    node = r_u32(owner + 12u);
    if (!node)
        return;
    color = sub_800D3CB4(r_u32(rgbflags + 4u), node, channel_mask);
    w_u32(rgbflags + 4u, color);
    if ((sint32)node < 0)
    {
        uint32 change = mode != 1u;
        if (mode == 1u)
        {
            *vertex_buffer = (buffer_base + ((uint32)(sint32)r_s16(polygon + 6u) << 3)) & 0xFFFFFFu;
            change = (primitive & 0xFFFFFFu) < *vertex_buffer;
        }
        if (change)
        {
            rgb = r_u16(primitive + 6u);
            red = (rgb >> 7) & 0xF8u;
            green = (rgb >> 2) & 0xF8u;
            blue = (rgb << 3) & 0xF8u;
            if (red >= 7u)
                red = 7u;
            if (green >= 13u)
                green = 13u;
            if (blue >= 18u)
                blue = 18u;
            w_u16(primitive + 6u, (uint16)((((red + 4u) >> 3) << 10) | (((green + 4u) >> 3) << 5) | ((blue + 4u) >> 3) | 0x8000u));
        }
    }
    coords[0] = r_s16(record + 4u);
    coords[1] = r_s16(record + 6u);
    coords[2] = r_s16(record + 8u);
    coords[3] = r_s16(record + 10u);
}

sint32 sub_800D5824(uint32 fourthSXY, uint32 triangle)
{
    sint32 coordinates[4], minimum, maximum, result;
    uint32 index, count;
    FUNCTION_MARKER(0x800D5824u, "SCUS_942.40");
    coordinates[0] = (sint16)(sf_gte_read_data(12u) >> 16);
    coordinates[1] = (sint16)(sf_gte_read_data(13u) >> 16);
    coordinates[2] = (sint16)(sf_gte_read_data(14u) >> 16);
    coordinates[3] = (sint16)(fourthSXY >> 16);
    count = triangle ? 3u : 4u;
    minimum = maximum = coordinates[0];
    for (index = 1u; index < count; ++index)
    {
        if (coordinates[index] >= maximum)
            maximum = coordinates[index];
        if (minimum >= coordinates[index])
            minimum = coordinates[index];
    }
    if (minimum > 120 || maximum < -120)
        return 0;
    result = maximum - minimum >= 351;
    coordinates[0] = (sint16)sf_gte_read_data(12u);
    coordinates[1] = (sint16)sf_gte_read_data(13u);
    coordinates[2] = (sint16)sf_gte_read_data(14u);
    coordinates[3] = (sint16)fourthSXY;
    minimum = maximum = coordinates[0];
    for (index = 1u; index < count; ++index)
    {
        if (coordinates[index] >= maximum)
            maximum = coordinates[index];
        if (minimum >= coordinates[index])
            minimum = coordinates[index];
    }
    if (minimum > 192 || maximum < -192)
        return 0;
    if (maximum - minimum >= 501)
        return 1;
    return result;
}

sint32 sub_800D9110(uint32 a1, sint32 a2, sint32 a3, uint32 a4, uint32 a9, sint32 a10)
{
    uint32 object, auxiliary, model, first, second, third;
    FUNCTION_MARKER(0x800D9110u, "SCUS_942.40");
    object = sub_800DE414(44);
    auxiliary = sub_800DE414(20);
    model = sub_800D8B9C(a1, (sint32)object, 0x400000);
    if ((uint8)a4 == 0u)
        w_u32(model + 40u, r_u32(model + 40u) | 0x02000000u);
    first = r_u32(0x8010E1CCu);
    second = r_u32(0x8010E1D0u);
    third = r_u32(0x8010E1D4u);
    w_u32(model, first);
    w_u32(model + 4u, second);
    w_u32(model + 8u, third);
    w_u32(model + 12u, r_u32(0x8010E1D8u));
    first = r_u32(0x8010E1DCu);
    second = r_u32(0x8010E1E0u);
    third = r_u32(0x8010E1E4u);
    w_u32(model + 16u, first);
    w_u32(model + 20u, second);
    w_u32(model + 24u, third);
    w_u32(model + 28u, r_u32(0x8010E1E8u));
    sub_800DB5EC((sint32)(object + 12u), 0);
    w_u8(object + 9u, 128u);
    w_u32(object, 0u);
    w_u32(object + 4u, 0u);
    w_u8(object + 8u, 0u);
    w_u8(object + 10u, 0u);
    w_u8(object + 11u, 0u);
    w_u32(object + 16u, model);
    w_u16(object + 20u, 0u);
    w_u16(object + 22u, 0u);
    w_u32(object + 40u, 0u);
    w_u16(auxiliary + 8u, 500u);
    w_u16(auxiliary + 6u, 500u);
    w_u16(auxiliary + 4u, 500u);
    w_u16(auxiliary + 16u, 0u);
    w_u16(auxiliary + 14u, 0u);
    w_u16(auxiliary + 12u, 0u);
    w_u32(auxiliary, 0u);
    w_u32(object + 28u, auxiliary);
    sub_800CBF44(object, a1, a2, a10);
    *SF_DRAFT_PTR(uint32, a9) = object;
    return 0;
}

uint32 sub_800297A8(sint32 a1)
{
    FUNCTION_MARKER(0x800297A8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v2;
    int v3;
    int *v4;
    int *v5;
    int *v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    _DWORD *v13;
    int v14;
    uint32 v15;
    sint32 result;

    v2 = 0;
    v3 = 0;
    v4 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 12)) + 8));
    v5 = v4;
    v6 = v4;
    do
    {
        if (v6[4] == 2)
        {
            v7 = v6[7];
            v8 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
            v9 = v6[12];
            v10 = *SF_DRAFT_PTR(_DWORD, (v8 + 16));
            v11 = *SF_DRAFT_PTR(_DWORD, (v8 + 20));
            v12 = 32 * v6[1];
            *v4 = (v2);
            v13 = SF_DRAFT_PTR(_DWORD, (v10 + 44 * v7));
            v14 = v11 + v12;
            sub_800284C8(a1, sf_draft_guest_address(v13), sf_draft_guest_address((_BYTE *)v4 + v3 + 40), v9);
            if (*SF_DRAFT_PTR(_BYTE, (v14 + 20)))
            {
                v15 = v13[7];
                if (v15)
                    sf_draft_call((uint32)v15, 2u, (const uint32[]){(uint32)r_s16((uint32)a1 + 2u), (uint32)v7});
            }
            if (*SF_DRAFT_PTR(_BYTE, (v14 + 21)))
            {
                if (v13[8])
                    sub_80015364(v13[8] & 255u, 5u, r_s16((uint32)a1 + 2u), r_s16((uint32)a1 + 2u), 0, 0, 0, 0);
            }
            v6[4] = 0;
            v6[1] = 255;
            v6[7] = 0;
            *((_BYTE *)v5 + 40) = 0;
            *((_BYTE *)v5 + 41) = 0;
            v6[12] = 0;
        }
        v5 = (int *)((char *)v5 + 2);
        v3 += 2;
        result = ++v2 < 3;
        ++v6;
    } while (v2 < 3);
    return result;
}

sint32 sub_800DEEF4(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800DEEF4u, "SCUS_942.40");

    union
    {
        uint8 bytes[24];
        uint32 words[6];
    } file;

    uint32 handle;
    uint32 *output_slot;
    sint32 result, found = 0, attempts = 0;
    if (!a1 || !a2)
        return 1;
    output_slot = SF_DRAFT_PTR(uint32, a2);
    if (r_u8(SF_DRAFT_GP + 0x99Cu) == 1)
    {
        result = sub_800DF6EC(0);
        if (result)
            return result;
    }
    handle = sub_800DED2C();
    *output_slot = handle;
    if (!handle)
        return 3;
    while (attempts < 5 && !found)
    {
        ++attempts;
        found = sub_800DEB50((sint32)sf_draft_guest_address(&file), a1);
    }
    if (!found || !file.words[1])
    {
        sint32 error = found ? 4 : 5;
        w_u32(*output_slot + 4u, 0xCACACACAu);
        *output_slot = 0u;
        sub_800DF43C(error);
        return error;
    }
    result = sub_800EDB24(sf_draft_guest_address(&file));
    w_u32(*output_slot, file.words[0]);
    w_u32(*output_slot + 4u, file.words[1]);
    w_u32(*output_slot + 8u, (uint32)result + ((file.words[1] + 2047u) >> 11) - 1u);
    w_u32(*output_slot + 12u, file.words[0]);
    w_u32(*output_slot + 16u, file.words[1]);
    return sub_800DEDB4(*output_slot);
}

sint32 sub_80066D74(sint32 a1)
{
    FUNCTION_MARKER(0x80066D74u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    _DWORD *v2;
    int v3;
    int v4;
    int v5;
    char v6;
    char v7;

    __int16 v10[4];

    v2 = SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
    v3 = v2[13];
    if ((*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 14 || (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 28)) + 32)) & 1) == 0)
        goto LABEL_15;
    v4 = 666;
    if (a1 != 666)
        v4 = *(__int16 *)(20 * *v2 + (*SF_DRAFT_PTR(uint32, 0x80116B98u)));
    if (v4 == 53)
    {
        if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v3 + 24)) + 8)) <= 0)
        {
            *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3342)) = 1;
        }
        else
        {
            v6 = sub_8006C180();
            v5 = v3;
            if (v6 || *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v3 + 28)) + 82)) == 5)
                return sub_80059FCC(v5, 2, 0, 1);
            v10[0] = 342;
            v10[1] = 346;
            v7 = sub_800EC8F4();
            sub_8006C620((v10[v7 & 1] + (*SF_DRAFT_PTR(_WORD, (v3 + 2)) & 3)), v3, 0);
            *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v3 + 28)) + 80)) = (sub_800EC8F4() & 0x3F) + 0x80;
        }
    LABEL_15:
        v5 = v3;
        return sub_80059FCC(v5, 2, 0, 1);
    }
    if (v4 != 76 && v4 != 92)
        *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2908)) = 1;
    v5 = v3;
    return sub_80059FCC(v5, 2, 0, 1);
}

sint32 sub_8003D99C(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8003D99Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v2;
    int *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int result;
    int *v12;

    v2 = 2 * a1;
    v3 = &SF_DRAFT_PTR(uint32, 0x80011B7Cu)[a1];
    if (a2 || (v4 = 12 * a1, SF_DRAFT_PTR(uint32, 0x8011B884u)[12 * a1] != SF_DRAFT_PTR(uint32, 0x8011B888u)[12 * a1]))
    {
        v5 = SLOWORD(SF_DRAFT_PTR(uint32, 0x8011B888u)[12 * a1]) - SLOWORD(SF_DRAFT_PTR(uint32, 0x8011B884u)[12 * a1]);
        if (a2)
        {
            v6 = v5 + 8;
            if (SF_DRAFT_PTR(uint32, 0x8011B884u)[12 * a1] == SF_DRAFT_PTR(uint32, 0x8011B888u)[12 * a1])
            {
                v7 = 6 * (v2 + 1);
                v8 = *((__int16 *)v3 + 1);
                v9 = (uint16)(*(_WORD *)v3 - 3);
                SF_DRAFT_PTR(uint32, 0x8011B884u)[v7] = v9 | (v8 << 16);
                SF_DRAFT_PTR(uint32, 0x8011B888u)[v7] = v9 | ((v8 + 4) << 16);
                SF_DRAFT_PTR(uint32, 0x8011B884u)[6 * v2] = v9 | ((v8 + 5) << 16);
                v6 = v5 + 8;
            }
            LOWORD(v10) = v6;
            if (v6 >= 53)
            {
                LOWORD(v10) = 53;
                result = 1;
            LABEL_11:
                SF_DRAFT_PTR(uint32, 0x8011B888u)[6 * v2] = (uint16)(*(_WORD *)v3 + v10 - 3) | ((*((__int16 *)v3 + 1) + 5) << 16);
                return result;
            }
        }
        else
        {
            v10 = v5 - 8;
            result = 0;
            if (v10 >= 0)
                goto LABEL_11;
            LOWORD(v10) = 0;
        }
        result = 0;
        goto LABEL_11;
    }
    result = 1;
    v12 = &SF_DRAFT_PTR(uint32, 0x8011B874u)[6 * v2 + 6];
    v12[5] = 67109888;
    v12[4] = 67109888;
    SF_DRAFT_PTR(uint32, 0x8011B874u)[v4 + 5] = 67109888;
    SF_DRAFT_PTR(uint32, 0x8011B884u)[v4] = 67109888;
    return result;
}

sint32 sub_8001A7AC(uint32 a1)
{
    FUNCTION_MARKER(0x8001A7ACu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    int v2;
    int v3;
    int result;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;

    v2 = *a1_view;
    v3 = a1_view[3];
    if (*a1_view == v3)
    {
        if (!a1_view[1])
        {
            result = a1_view[2];
            if (!result)
                return result;
        }
        v3 = a1_view[3];
        v2 = *a1_view;
    }
    v5 = (v3 - v2) * a1_view[8];
    v6 = a1_view[7];
    v7 = v5 - a1_view[1];
    v12 = v7;
    if (v6 >= 0)
    {
        if (v6 < v7 || (v6 = -v6, v7 < v6))
            v12 = v6;
    }
    v8 = a1_view[1] + v12;
    v13 = v8;
    if ((v8 <= 0 || v5 > 0) && (v8 >= 0 || v5 < 0))
    {
        if (v8 > 0 && v8 >= v5 || v8 < 0 && v5 >= v8)
            v13 = v5;
    }
    else
    {
        v13 = 0;
    }
    v9 = a1_view[6];
    if (v9 >= 0)
    {
        if (v9 < v13 || (v9 = -v9, v13 < v9))
            v13 = v9;
    }
    a1_view[2] = v13 - a1_view[1];
    a1_view[1] = v13;
    if (v13 < 0)
        v10 = v13 - 4095;
    else
        v10 = v13 + 4095;
    if (v10 < 0)
        v11 = -(-v10 >> 12);
    else
        v11 = v10 >> 12;
    result = *a1_view + v11;
    *a1_view = result;
    return result;
}

sint32 sub_80080758(sint32 a1)
{
    uint32 terrain, descriptor, table, geometry, index, divisor, offset, page;
    FUNCTION_MARKER(0x80080758u, "SCUS_942.40");
    terrain = xport_load_le32(SF_DRAFT_PTR(uint8, (uint32)a1) + 24u);
    descriptor = r_u32(0x80116994u) + 60u * terrain;
    table = r_u32(descriptor + 4u);
    geometry = r_u32(descriptor);
    for (index = 0u; index < 4u; ++index)
        w_u32(table + 140u + 4u * index, r_u32(descriptor + 4u + 4u * index));
    for (index = 0u; index < 33u; ++index)
    {
        divisor = r_u32(0x8011696Cu);
        offset = r_u32(table + 4u + 4u * index);
        divisor <<= 11;
        if (divisor == 0u)
        {
            fprintf(stderr, "Original BREAK7 terrain division at sub_80080758\n");
            abort();
        }
        page = offset / divisor;
        if (offset != 0xFFFFFFFFu && offset != 0u)
        {
            if ((sint32)page >= 4)
                sub_800DDC34(1, 0, 0x80012350u, 486);
            divisor = r_u32(0x8011696Cu) << 11;
            if (divisor == 0u)
            {
                fprintf(stderr, "Original BREAK7 terrain remainder at sub_80080758\n");
                abort();
            }
            offset = r_u32(table + 140u + 4u * page) + offset % divisor;
            w_u32(table + 4u + 4u * index, offset);
        }
    }
    sub_80080494((sint32)terrain);
    sub_80082FD8((sint32)geometry);
    sub_800D2850((sint32)table, r_u32(geometry + 16u));
    sub_80076990(r_u32(geometry + 16u));
    sub_8002BDC0((sint32)terrain);
    return sub_80080674((sint32)terrain);
}

sint32 sub_80032A1C(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80032A1Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v3;
    int result;
    int v5;

    int v7;

    int v11;
    bool v12; // dc
    _WORD *v13;

    v3 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    result = 3;
    if (a2 == 2)
    {
        v5 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 581)))
        {
            (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) = 1;
            result = sub_8003320C(v5, 1);
            *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 581)) = 0;
        }
        else
        {
            v7 = (uint8)(*SF_DRAFT_PTR(uint8, 0x80116B7Cu));
            result = sub_8003320C(v5, 0);
            if (v7)
            {
                if (sub_80086104(*(uint16 *)(SF_DRAFT_GP + 578)))
                {
                    if (**(__int16 **)(v3 + 20) >= 0)
                        return sub_80086018(*(uint16 *)(SF_DRAFT_GP + 578));
                    else
                        return sub_80086540(*(uint16 *)(SF_DRAFT_GP + 578), 40);
                }
                else
                {
                    result = **(__int16 **)(v3 + 20);
                    if (result < 0)
                    {
                        result = sub_80085D04((SF_DRAFT_PTR(uint32, 0x80116314u)[0]), 0);
                        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 578)) = result;
                    }
                }
            }
        }
    }
    else if (a2 == 3)
    {
        v11 = (uint8)(*SF_DRAFT_PTR(uint8, 0x80116B7Cu));
        *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 580)) = 0;
        v12 = v11 == 0;
        result = 1;
        if (v12)
        {
            if ((*SF_DRAFT_PTR(uint32, 0x80115E80u)))
                sub_80028F3C(a1, 13);
            v13 = SF_DRAFT_PTR(_WORD, *(_WORD **)(v3 + 20));
            (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) = 1;
            result = -1;
            *v13 = (-1);
        }
        else
        {
            *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 581)) = 1;
        }
    }
    return result;
}

sint32 sub_80033090(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80033090u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v4;
    uint8 v5;
    int v6;
    int v7;
    int *v8;
    __int16 *v9;
    int v10;
    int v11;
    bool v12; // dc
    int result;
    int v14;
    unsigned int v15;

    v4 = -1;
    v5 = 0;
    v6 = 0;
    v7 = (__int16)a1;
    v8 = SF_DRAFT_PTR(int, 0x8012C864u);
    v9 = SF_DRAFT_PTR(__int16, 0x8012C860u);
    while (1)
    {
        v10 = *v9;
        if (v10 == v7)
            break;
        if (v10 == -1)
            v4 = v6;
        v8 += 2;
        ++v6;
        v9 += 4;
        if (v6 >= 8)
            goto LABEL_16;
    }
    if (a2 == 43)
    {
        *v8 = ((*SF_DRAFT_PTR(uint32, 0x80116A88u)));
    LABEL_12:
        v5 = 1;
        goto LABEL_16;
    }
    if (a2 == 44)
    {
        *v9 = (-1);
        goto LABEL_12;
    }
    v5 = 1;
    if (a2 != 45)
    {
    LABEL_16:
        v11 = v5;
        goto LABEL_17;
    }
    v11 = 1;
    if ((unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - *v8) >= 0x3D)
    {
        if (v10 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (v11 = 1, !(*SF_DRAFT_PTR(uint32, 0x8012F9B8u))))
        {
            sub_80028F3C(v10, 44);
            goto LABEL_12;
        }
    }
LABEL_17:
    v12 = v11 != 0;
    result = -1;
    if (!v12)
    {
        if (v4 != -1 && a2 == 43)
        {
            v14 = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
            v15 = 8 * v4;
            SF_DRAFT_PTR(uint16, 0x8012C860u)[v15 / 2] = a1;
            SF_DRAFT_PTR(uint32, 0x8012C864u)[v15 / 4] = v14;
        }
        result = a1 << 16;
        if (a2 == 45 && (__int16)a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            return sub_80028F3C((__int16)a1, 44);
    }
    return result;
}

sint32 sub_800D59CC(uint32 a1, uint32 ordering_table)
{
    FUNCTION_MARKER(0x800D59CCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    int v1;
    uint32 cursor;
    int v3;
    unsigned int v4;
    int v6;
    int v7;
    int v8;
    unsigned int v9;
    unsigned int v10;
    unsigned int v11;
    unsigned int v12;
    unsigned int v13;

    v1 = *a1_view;
    cursor = r_u32(0x8012C8A0u);
    v3 = (uint16)a1_view[1];
    (*SF_DRAFT_PTR(uint32, 0x1F800010)) = HIWORD(a1_view[1]);
    (*SF_DRAFT_PTR(uint32, 0x1F800014)) = (*SF_DRAFT_PTR(uint32, 0x1F800010));
    (*SF_DRAFT_PTR(uint32, 0x1F800018)) = (*SF_DRAFT_PTR(uint32, 0x1F800010));
    (*SF_DRAFT_PTR(uint32, 0x1F80001C)) = (*SF_DRAFT_PTR(uint32, 0x1F800010));
    v4 = a1_view[2];
    v6 = v1;
    if (v4)
    {
        v7 = *((__int16 *)a1_view + 6);
        v8 = *((__int16 *)a1_view + 7);
        v9 = (unsigned int)((uint16)v4 + HIWORD(v4)) >> 1;
        v10 = ((unsigned int)(uint16)v4 + v7) >> 1;
        v11 = (unsigned int)(HIWORD(v4) + v8) >> 1;
        v12 = (unsigned int)(v7 + v8) >> 1;
        v13 = (v9 + v10 + v11 + v12) >> 2;
        (*SF_DRAFT_PTR(uint32, 0x1F800010)) = (3 * ((uint16)v4 + v9 + v7 + v13)) >> 4;
        (*SF_DRAFT_PTR(uint32, 0x1F800014)) = (3 * (v9 + HIWORD(v4) + v11 + v13)) >> 4;
        (*SF_DRAFT_PTR(uint32, 0x1F800018)) = (3 * (v7 + v12 + v10 + v13)) >> 4;
        (*SF_DRAFT_PTR(uint32, 0x1F80001C)) = (3 * (v12 + v8 + v11 + v13)) >> 4;
    }
    if ((*SF_DRAFT_PTR(_BYTE, (v6 + 7)) & 8) != 0 && v3 == 8194)
        sub_800D7110(v1, &cursor, ordering_table, (uint32)v3);
    else
        sub_800D5B50(v1, &cursor, ordering_table, (uint32)v3);
    w_u32(0x8012C8A0u, cursor);
    return 1;
}

sint32 sub_800C7D8C(sint32 a1, sint32 a2, sint32 a3, sint32 a4, sint32 a9, sint32 a10, sint32 a11, sint32 a12)
{
    FUNCTION_MARKER(0x800C7D8Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v13;
    char v14;
    unsigned int v15;
    int v16;
    __int16 v17;
    int v18;
    __int16 v19;
    __int16 v20;
    unsigned int v21;
    int result;
    int v23;

    *SF_DRAFT_PTR(_DWORD, (a1 + 4)) = 0;
    *SF_DRAFT_PTR(_DWORD, (a1 + 8)) = 150994944;
    *SF_DRAFT_PTR(_DWORD, (a1 + 16)) = a2;
    *SF_DRAFT_PTR(_DWORD, (a1 + 24)) = a3;
    *SF_DRAFT_PTR(_DWORD, (a1 + 32)) = a4;
    *SF_DRAFT_PTR(_DWORD, (a1 + 12)) = a10 | 0x2C000000;
    *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = a9;
    v13 = *SF_DRAFT_PTR(_DWORD, (a11 + 12)) & 3;
    v14 = 0;
    if (v13)
    {
        if (v13 == 1)
            v14 = 1;
    }
    else
    {
        v14 = 2;
    }
    v15 = (uint16)sub_800E7F14(v13, a12, *SF_DRAFT_PTR(__int16, (a11 + 16)), *SF_DRAFT_PTR(__int16, (a11 + 18)));
    if (v15 >= 0x10)
        v16 = (*SF_DRAFT_PTR(__int16, (a11 + 16)) - ((v15 - 16) << 6)) << v14;
    else
        v16 = (*SF_DRAFT_PTR(__int16, (a11 + 16)) - (v15 << 6)) << v14;
    v17 = *SF_DRAFT_PTR(_WORD, (a11 + 18));
    if (v17 >= 256)
        LOBYTE(v17) = (uint8)r_u16(a11 + 18);
    v18 = *(uint16 *)(a11 + 20);
    v19 = *SF_DRAFT_PTR(_WORD, (a11 + 22));
    *SF_DRAFT_PTR(_BYTE, (a1 + 20)) = v16;
    *SF_DRAFT_PTR(_BYTE, (a1 + 21)) = (uint8)v17;
    v20 = *SF_DRAFT_PTR(_WORD, (a11 + 30));
    v21 = *(uint16 *)(a11 + 28);
    *SF_DRAFT_PTR(_BYTE, (a1 + 29)) = (uint8)v17;
    *SF_DRAFT_PTR(_WORD, (a1 + 30)) = v15;
    *SF_DRAFT_PTR(_BYTE, (a1 + 36)) = v16;
    result = (v21 >> 4) & 0x3F;
    v23 = v16 + (v18 << v14) - 1;
    LOBYTE(v19) = v17 + v19 - 1;
    *SF_DRAFT_PTR(_WORD, (a1 + 22)) = (v20 << 6) | result;
    *SF_DRAFT_PTR(_BYTE, (a1 + 28)) = v23;
    *SF_DRAFT_PTR(_BYTE, (a1 + 37)) = (uint8)v19;
    *SF_DRAFT_PTR(_BYTE, (a1 + 44)) = v23;
    *SF_DRAFT_PTR(_BYTE, (a1 + 45)) = (uint8)v19;
    return result;
}

sint32 sub_800770F8(uint32 output, uint32 source, uint32 index1, uint32 index2, uint32 index3)
{
    uint32 xy0, xy1, xy2, swap, vertices[3], i, context, transform;
    FUNCTION_MARKER(0x800770F8u, "SCUS_942.40");
    /* TODO Native geometry requires runtime validation */
    if (r_s32(0x1F80000Cu) <= 0)
    {
        xy0 = sf_gte_read_data(12u);
        xy2 = sf_gte_read_data(14u);
        sf_gte_write_data(14u, xy0);
        sf_gte_write_data(12u, xy2);
        swap = index1;
        index1 = index3;
        index3 = swap;
    }
    sf_gte_execute(0x4B400006u);
    if ((sint32)sf_gte_read_data(24u) <= 0)
        return 0;
    xy0 = sf_gte_read_data(12u);
    xy1 = sf_gte_read_data(13u);
    xy2 = sf_gte_read_data(14u);
    if (!((xy0 ^ xy1) & 0x80000000u) && !((xy0 ^ xy2) & 0x80000000u))
        return 0;
    if (!((xy0 ^ xy1) & 0x8000u) && !((xy0 ^ xy2) & 0x8000u))
        return 0;
    vertices[0] = source + (index1 << 3);
    vertices[1] = source + (index2 << 3);
    vertices[2] = source + (index3 << 3);
    for (i = 0; i < 3u; ++i)
    {
        uint32 first = r_u32(vertices[i] + 4u);
        uint32 second = r_u32(vertices[i] + 8u);
        w_u32(output + 48u + i * 8u, first);
        w_u32(output + 52u + i * 8u, second);
    }
    w_u32(0x80128E34u, output + 48u);
    w_u32(0x80128E38u, output + 56u);
    w_u32(0x80128E3Cu, output + 64u);
    context = r_u32(0x80077270u);
    transform = r_u32(context + 72u);
    if (transform)
    {
        transform = r_u32(transform + 12u);
        if (transform != 0x8010E1ECu)
            sub_80078BD0(0x80128E20u, transform);
    }
    context = r_u32(0x80077270u);
    return sub_80078724(r_u32(0x80077274u), 0x80128E20u, context + 32u, context + 16u) == 0;
}

sint32 sub_80051530(sint32 a1, uint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x80051530u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);

    int v8;
    int v9;
    char v10;
    char v11;
    char v12;
    _DWORD v14[4];

    sub_8004C354(sf_draft_guest_address(a2_view));
    sub_800C720C(a3, sf_draft_guest_address(v14));
    sub_8004C354(sf_draft_guest_address(a2_view));
    sub_8004C654(5, a4);
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3348)) = 32;
    sub_8004C758(sf_draft_guest_address(v14), 0x7FFF, 0);
    v8 = sub_8004C0E8(8, 0);
    v9 = v8;
    if (v8)
    {
        *SF_DRAFT_PTR(_DWORD, (v8 + 44)) = 7;
        *SF_DRAFT_PTR(_BYTE, (v8 + 35)) = 3;
        *SF_DRAFT_PTR(_WORD, (v8 + 28)) = 0;
        *SF_DRAFT_PTR(_WORD, (v8 + 26)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v8 + 48)) = 3;
        sub_8004C7B0(v8, 8);
        sub_8004C5C8(1365, 0, 255);
        sub_8004C654(10, a4);
        v10 = sub_800EC8F4();
        sub_8004C758(sf_draft_guest_address(v14), ((v10 & 3) << 16) | 0xFFF, 0);
        v11 = sub_800EC8F4();
        v9 = sub_8004C0E8((v11 & 3) + 1, 0);
        if (v9)
        {
            *SF_DRAFT_PTR(_BYTE, (v9 + 35)) = 10;
            *SF_DRAFT_PTR(_WORD, (v9 + 26)) = -10518;
            *SF_DRAFT_PTR(_WORD, (v9 + 28)) = 0;
            *SF_DRAFT_PTR(_DWORD, (v9 + 44)) = 9;
            *SF_DRAFT_PTR(_DWORD, (v9 + 48)) = 0;
            v12 = sub_800EC8F4();
            sub_8004C7B0(v9, (v12 & 3) + 1);
            *SF_DRAFT_PTR(_BYTE, (v9 + 36)) = 3;
        }
    }
    return v9;
}

uint32 sub_80035C04(uint32 a1)
{
    FUNCTION_MARKER(0x80035C04u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *v2;
    int v3;
    int v4;
    unsigned int v5;
    int v6;
    unsigned int v7;
    _DWORD *v8;
    int v9;
    int v10;
    unsigned int v11;
    int v12;
    sint32 result;

    v2 = (_DWORD *)a1_view[24];
    switch (sub_8001C950())
    {
        case 1:
        case 4:
            v3 = 2;
            break;
        case 2:
            v3 = 3;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            v3 = 4;
            break;
        default:
            v3 = a1_view[6] != 0;
            break;
    }
    v4 = 0;
    v5 = (unsigned int)v2;
    v6 = a1_view[85] + 32 * v3;
    do
    {
        v7 = v5;
        v8 = SF_DRAFT_PTR(_DWORD, (v6 + 8 * *SF_DRAFT_PTR(_DWORD, (v5 + 24))));
        v9 = 5;
        if ((v5 & 3) != 0)
        {
            v9 = 8 * (v5 & 3) + 5;
            v7 = v5 & 0xFFFFFFFC;
        }
        v10 = *SF_DRAFT_PTR(_DWORD, (4 * (v9 >> 5) + v7)) & (1 << (v9 & 0x1F));
        v11 = v5 + 4;
        if (!v10)
            *SF_DRAFT_PTR(_DWORD, v5) = *v8;
        v12 = 5;
        if ((v11 & 3) != 0)
        {
            v12 = 8 * (v11 & 3) + 5;
            v11 &= 0xFFFFFFFC;
        }
        if ((*SF_DRAFT_PTR(_DWORD, (4 * (v12 >> 5) + v11)) & (1 << (v12 & 0x1F))) == 0)
            *SF_DRAFT_PTR(_DWORD, (v5 + 4)) = v8[1];
        result = ++v4 < 4;
        v5 += 28;
    } while (v4 < 4);
    return result;
}

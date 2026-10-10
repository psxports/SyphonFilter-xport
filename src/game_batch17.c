#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);

sint32 sub_8003E984(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8003E984u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint16 *a1_view = SF_DRAFT_PTR(uint16, a1);
    int v4;
    int *v5;
    int v6;
    int v7;
    int v8;
    int *v9;
    int v10;
    int v11;
    int *v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19; // kr00_4
    int v20;
    int v21;
    int v22;
    int v23;
    int result;
    int v25;
    int *v26;
    int v27;
    int *v28;
    v4 = 35;
    v5 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011C480u)));
    do
    {
        --v4;
        v6 = *(v5 - 43);
        v7 = *(v5 - 47) + 4;
        v5[4] = *(v5 - 44);
        v5[5] = v6;
        v5[1] = v7;
        v5 -= 6;
    } while (v4 >= 20);
    v8 = 20;
    if (a2)
    {
        v9 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011C318u)));
        do
        {
            --v8;
            v10 = *(v9 - 43);
            v11 = *(v9 - 47) + 4;
            v9[4] = *(v9 - 44);
            v9[5] = v10;
            v9[1] = v11;
            v9 -= 6;
        } while (v8 >= 12);
    }
    else
    {
        v12 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011C318u)));
        do
        {
            v12[5] = 67109888;
            v12[4] = 67109888;
            --v8;
            v12 -= 6;
        } while (v8 >= 12);
    }
    v13 = *((_DWORD *)a1_view + 2);
    if (v13 <= 0)
    {
        v27 = 0;
        v28 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011C138u)));
        do
        {
            v28[5] = 67109888;
            v28[4] = 67109888;
            result = ++v27 < 12;
            v28 += 6;
        } while (v27 < 12);
    }
    else
    {
        v14 = 4;
        if (60 * *SF_DRAFT_PTR(uint16, (*SF_DRAFT_PTR(uint32, 0x80115D84u) + 4)) / v13 >= 4)
            v14 = 60 * *SF_DRAFT_PTR(uint16, (*SF_DRAFT_PTR(uint32, 0x80115D84u) + 4)) / v13;
        v15 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2572));
        v16 = v14 * v15;
        v17 = (v14 * v15) >> 2;
        if (v14 * v15 < 0)
        {
            v16 += 3;
            v17 = v16 >> 2;
        }
        v18 = (int)(v17 + ((unsigned int)v16 >> 31)) >> 1;
        v19 = v17 * v15;
        v20 = 2 * (v17 * v15 / 4);
        (*SF_DRAFT_PTR(uint32, 0x8011C148u)) = (uint16)(*(_DWORD *)a1_view - v20) | (a1_view[2] << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C14Cu)) = (uint16)(*(_DWORD *)a1_view - v19 / 4) | (a1_view[2] << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C160u)) = (uint16)(*(_DWORD *)a1_view + v19 / 4) | (a1_view[2] << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C164u)) = (uint16)(*(_DWORD *)a1_view + v20) | (a1_view[2] << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C178u)) = *a1_view | ((*((_DWORD *)a1_view + 1) - v17) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C17Cu)) = *a1_view | ((*((_DWORD *)a1_view + 1) - v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C190u)) = *a1_view | ((*((_DWORD *)a1_view + 1) + v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C194u)) = *a1_view | ((*((_DWORD *)a1_view + 1) + v17) << 16);
        v21 = v19 / 4 / 3;
        (*SF_DRAFT_PTR(uint32, 0x8011C1A8u)) = (uint16)(*(_DWORD *)a1_view - v21) | ((*((_DWORD *)a1_view + 1) - v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C1ACu)) = (uint16)(*(_DWORD *)a1_view + v21) | ((*((_DWORD *)a1_view + 1) - v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C1C0u)) = (uint16)(*(_DWORD *)a1_view - v21) | ((*((_DWORD *)a1_view + 1) + v18) << 16);
        v22 = (uint16)(*(_DWORD *)a1_view + v21) | ((*((_DWORD *)a1_view + 1) + v18) << 16);
        v23 = v19 / 4 - v21;
        (*SF_DRAFT_PTR(uint32, 0x8011C1C4u)) = v22;
        (*SF_DRAFT_PTR(uint32, 0x8011C1D8u)) = (uint16)(*(_DWORD *)a1_view - v19 / 4) | ((*((_DWORD *)a1_view + 1) - v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C1DCu)) = (uint16)(*(_DWORD *)a1_view - v19 / 4) | ((*((_DWORD *)a1_view + 1) + v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C1F0u)) = (uint16)(*(_DWORD *)a1_view + v19 / 4) | ((*((_DWORD *)a1_view + 1) - v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C1F4u)) = (uint16)(*(_DWORD *)a1_view + v19 / 4) | ((*((_DWORD *)a1_view + 1) + v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C208u)) = (uint16)(*(_DWORD *)a1_view - v19 / 4) | ((*((_DWORD *)a1_view + 1) - v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C20Cu)) = (uint16)(*(_DWORD *)a1_view - v23) | ((*((_DWORD *)a1_view + 1) - v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C220u)) = (uint16)(*(_DWORD *)a1_view - v19 / 4) | ((*((_DWORD *)a1_view + 1) + v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C224u)) = (uint16)(*(_DWORD *)a1_view - v23) | ((*((_DWORD *)a1_view + 1) + v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C238u)) = (uint16)(*(_DWORD *)a1_view + v19 / 4) | ((*((_DWORD *)a1_view + 1) - v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C23Cu)) = (uint16)(*(_DWORD *)a1_view + v23) | ((*((_DWORD *)a1_view + 1) - v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C250u)) = (uint16)(*(_DWORD *)a1_view + v19 / 4) | ((*((_DWORD *)a1_view + 1) + v18) << 16);
        (*SF_DRAFT_PTR(uint32, 0x8011C254u)) = (uint16)(*(_DWORD *)a1_view + v23) | ((*((_DWORD *)a1_view + 1) + v18) << 16);
        result = (*((int *)a1_view + 2) >> 3) - 10;
        v25 = 11;
        if (result <= 0)
            result = 1;
        v26 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011C240u)));
        do
        {
            v26[1] = result;
            --v25;
            v26 -= 6;
        } while (v25 >= 0);
    }
    return result;
}

void sub_80088FB4(sint32 a1)
{
    FUNCTION_MARKER(0x80088FB4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v1;
    int v2;
    int v3;
    int v4;
    _DWORD *v5;
    int v6;
    _DWORD *v7;
    char v8;
    int v9;
    int v10;
    int v11;
    int i;
    int j;
    int v14;
    int v15;
    int v16;
    int v17;
    _DWORD *v18;
    int *v19;
    v1 = 0;
    v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 3456));
    v18 = SF_DRAFT_PTR(_DWORD, (a1 + 640));
    if (v2 > 0)
    {
        v3 = (int)v18;
        do
        {
            *SF_DRAFT_PTR(_DWORD, (v3 + 80)) = v3;
            *SF_DRAFT_PTR(_DWORD, (v3 + 84)) = 0;
            ++v1;
            v3 += 88;
        } while (v1 < v2);
    }
    v4 = 0;
    if (v2 > 0)
    {
        v5 = v18;
        v19 = &v15;
        while (1)
        {
            v6 = v4 + 1;
            if (v4 + 1 < v2)
                break;
        LABEL_36:
            ++v4;
            v5 += 22;
            if (v4 >= v2)
                return;
        }
        v7 = &v18[22 * v4 + 22];
        while (1)
        {
            if (v5[20] != v7[20] && v5[19] == v7[19])
            {
                if ((unsigned int)(*v5 - *v7 + 8) < 0x11 && (unsigned int)(v5[1] - v7[1] + 8) < 0x11 && (unsigned int)(v5[2] - v7[2] + 8) < 0x11 || (unsigned int)(*v5 - v7[4] + 8) < 0x11 && (unsigned int)(v5[1] - v7[5] + 8) < 0x11 && (unsigned int)(v5[2] - v7[6] + 8) < 0x11 || (unsigned int)(v5[4] - *v7 + 8) < 0x11 && (unsigned int)(v5[5] - v7[1] + 8) < 0x11 && (unsigned int)(v5[6] - v7[2] + 8) < 0x11 || (unsigned int)(v5[4] - v7[4] + 8) < 0x11 && (unsigned int)(v5[5] - v7[5] + 8) < 0x11 && (unsigned int)(v5[6] - v7[6] + 8) < 0x11)
                {
                    goto LABEL_28;
                }
                v14 = sub_80088EFC(sf_draft_guest_address(v7), sf_draft_guest_address(v7 + 4));
                v15 = sub_80088EFC(sf_draft_guest_address(v5), sf_draft_guest_address(v7));
                v8 = 0;
                v16 = sub_80088EFC(sf_draft_guest_address(v5), sf_draft_guest_address(v7 + 4));
                if (v14 + 40 >= v15 + v16 || (v15 = sub_80088EFC(sf_draft_guest_address(v5 + 4), sf_draft_guest_address(v7)), v16 = sub_80088EFC(sf_draft_guest_address(v5 + 4), sf_draft_guest_address(v7 + 4)), v14 + 40 >= v15 + v16))
                {
                    v8 = 1;
                }
                if (!v8)
                    goto LABEL_35;
                sub_800E0220(sf_draft_guest_address(v7), sf_draft_guest_address(v7 + 4), sf_draft_guest_address(&v14));
                sub_800E0220(sf_draft_guest_address(v5), sf_draft_guest_address(v7), sf_draft_guest_address(v19));
                sub_800E0220(sf_draft_guest_address(v5), sf_draft_guest_address(v7 + 4), sf_draft_guest_address(&v16));
                if (v14 + 8 >= v15 + v16 || (sub_800E0220(sf_draft_guest_address(v5 + 4), sf_draft_guest_address(v7), sf_draft_guest_address(v19)), sub_800E0220(sf_draft_guest_address(v5 + 4), sf_draft_guest_address(v7 + 4), sf_draft_guest_address(&v16)), v9 = 0, v14 + 8 >= v15 + v16))
                {
                LABEL_28:
                    v9 = 1;
                }
                if (v9)
                {
                    v10 = sub_800C6D4C(v5[12], v7[12]);
                    v11 = sub_800C6D4C(v5[13], v7[13]);
                    v17 = v10 + v11 + sub_800C6D4C(v5[14], v7[14]);
                    if (v17 >= 3974)
                    {
                        for (i = v5[20]; *SF_DRAFT_PTR(_DWORD, (i + 84)); i = *SF_DRAFT_PTR(_DWORD, (i + 84)))
                            ;
                        *SF_DRAFT_PTR(_DWORD, (i + 84)) = v7[20];
                        for (j = v7[20]; j; j = *SF_DRAFT_PTR(_DWORD, (j + 84)))
                            *SF_DRAFT_PTR(_DWORD, (j + 80)) = v5[20];
                    }
                }
            }
        LABEL_35:
            ++v6;
            v7 += 22;
            if (v6 >= v2)
                goto LABEL_36;
        }
    }
}

static sint32 sf_3a3c8_half(uint32 value)
{
    if ((sint32)value < 0)
        return (sint32)(0u - (uint32)((sint32)(0u - value) >> 1));
    return (sint32)value >> 1;
}

static void sf_3a3c8_copy(uint32 destination, const uint32 *source)
{
    uint32 first = source[0], second = source[1], third = source[2], fourth = source[3];
    w_u32(destination, first);
    w_u32(destination + 4u, second);
    w_u32(destination + 8u, third);
    w_u32(destination + 12u, fourth);
}

sint32 sub_8003A3C8(sint32 a1)
{
    uint32 request = (uint32)a1, start, end, index, destination, value, field;
    uint32 origin[4], displacement[4], midpoint[4], result[4];
    uint32 endpoint_value, origin_value;
    sint32 length, half_length;

    union
    {
        uint32 words[73];
        uint16 halves[146];
        uint8 bytes[292];
    } query;

    FUNCTION_MARKER(0x8003A3C8u, "SCUS_942.40");
    start = r_u32(request);
    for (index = 0u; index < 4u; ++index)
        origin[index] = r_u32(start + 4u * index);
    for (index = 0u; index < 3u; ++index)
    {
        end = r_u32(request + 4u);
        start = r_u32(request);
        endpoint_value = r_u32(end + 4u * index);
        origin_value = r_u32(start + 4u * index);
        displacement[index] = endpoint_value - origin_value;
    }
    sub_800D9580(sf_draft_guest_address(displacement), sf_draft_guest_address(&length));
    half_length = sf_3a3c8_half((uint32)length);
    for (index = 0u; index < 3u; ++index)
        midpoint[index] = origin[index] + (uint32)sf_3a3c8_half(displacement[index]);
    query.words[1] = 0u;
    query.halves[0] = r_u16(0x80116946u);
    query.bytes[8] = r_u32(request + 32u) == 0u;
    for (index = 0u; index < 4u; ++index)
        query.words[43u + index] = origin[index];
    /* TODO Original displacement fourth word SP+2C is read before copying */
    displacement[3] = (sf_draft_unbound_stack_field(0x8003A3C8u, 0x2Cu), 0u);
    for (index = 0u; index < 4u; ++index)
        query.words[47u + index] = displacement[index];
    /* TODO Original midpoint fourth word SP+4C is read before copying */
    midpoint[3] = (sf_draft_unbound_stack_field(0x8003A3C8u, 0x4Cu), 0u);
    for (index = 0u; index < 4u; ++index)
        query.words[51u + index] = midpoint[index];
    query.words[40] = r_u32(request + 8u);
    field = r_u32(request + 12u);
    query.words[55] = (uint32)half_length + 3840u;
    query.words[56] = (uint32)length;
    query.words[57] = (uint32)half_length;
    query.bytes[168] = 1u;
    query.words[58] = 0x7FFFFFFFu;
    query.bytes[236] = 0u;
    query.words[41] = field;
    end = r_u32(request + 4u);
    for (index = 0u; index < 4u; ++index)
        query.words[60u + index] = r_u32(end + 4u * index);
    field = r_u32(request + 12u);
    query.words[68] = field;
    query.words[69] = field ? 2u : 0u;
    query.words[71] = 0u;
    query.bytes[280] = 0u;
    query.words[72] = 0u;
    /* TODO Query padding and conditional helper outputs need a producer review */
    sub_80076C58(sf_draft_guest_address(&query), 0, r_u32(request + 8u) == 0x29Au);
    destination = r_u32(request + 28u);
    if (destination)
        w_u8(destination, query.bytes[236] != 1u);
    destination = r_u32(request + 32u);
    if (destination)
    {
        sf_3a3c8_copy(destination, query.words + 60u);
        destination = r_u32(request + 36u);
        if (destination && query.bytes[236] == 1u)
            sf_3a3c8_copy(destination, query.words + 64u);
        destination = r_u32(request + 40u);
        if (destination)
        {
            sf_3a3c8_copy(destination, query.words + 68u);
            w_u32(destination + 16u, query.words[72]);
        }
    }
    if (r_u32(request + 44u) && r_u32(request + 48u))
    {
        query.bytes[236] = 0u;
        query.words[68] = 0u;
        query.words[69] = 0u;
        query.words[71] = 0u;
        query.bytes[280] = 0u;
        query.words[72] = 0u;
        sub_80077FA0((sint32)sf_draft_guest_address(&query));
        value = r_u32(0x80116B84u);
        destination = r_u32(request + 44u);
        w_u8(destination, value != 0u);
        w_u8(0x80130CC4u, 2u);
        value = r_u32(0x8013C5B8u);
        w_u32(0x80130CC0u, value);
        destination = r_u32(request + 48u);
        for (index = 0u; index < 4u; ++index)
            result[index] = r_u32(0x80130CC0u + 4u * index);
        sf_3a3c8_copy(destination, result);
        value = r_u32(0x80130CD0u);
        w_u32(destination + 16u, value);
    }
    return 0;
}

sint32 sub_80076C58(uint32 a1, sint8 a2, uint8 a3)
{
    FUNCTION_MARKER(0x80076C58u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int v5;
    int v6;
    int *v8;
    int v9;
    int v10;
    int v11;
    int v12;
    __int16 v14;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int result;
    int v23;
    int v24;
    int v25;
    int v26;
    uint8 *i;
    int v28;
    _DWORD *v29;
    sint32 *v30;
    int *v31;
    int v32;
    sint32 normalized_vector[3];
    char v36;
    uint8 v37;
    uint8 v38;
    int v39;
    int v40;
    v36 = a2;
    v38 = 0;
    v37 = a3;
    v5 = a1_view[40];
    v6 = a1_view[41];
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3536)) = 0;
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3872)) = 0;
    v8 = a1_view + 43;
    sub_80077A18(sf_draft_guest_address(a1_view + 47), sf_draft_guest_address(&normalized_vector[0]));
    if (v5)
    {
        v9 = 100;
        if (v5 != 666 && !v36)
        {
            v9 = 500;
            a1_view[43] -= (normalized_vector[0] >> 6) + (normalized_vector[0] >> 8);
            a1_view[44] -= (normalized_vector[1] >> 6) + (normalized_vector[1] >> 8);
            v10 = normalized_vector[2];
            *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3872)) = 1;
            a1_view[45] -= (v10 >> 6) + (v10 >> 8);
        }
    }
    else
    {
        v9 = 100;
    }
    sub_800E95B4(v9);
    sub_800DC8AC(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80130C98u))), 0, sf_draft_guest_address(a1_view + 43));
    sub_800DD0DC(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80130C98u))), 0, sf_draft_guest_address(a1_view + 47), 0);
    sub_800CD35C(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80130C98u))));
    v11 = *v8;
    v12 = a1_view[47];
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3532)) = sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8012DB60u)));
    (*SF_DRAFT_PTR(uint32, 0x8012C160u)) = v11 + v12;
    (*SF_DRAFT_PTR(uint32, 0x8012C164u)) = a1_view[44] + a1_view[48];
    (*SF_DRAFT_PTR(uint32, 0x8012C168u)) = a1_view[45] + a1_view[49];
    v14 = sub_800C6F08((__int16)(v11 + v12), ((__int16)(*SF_DRAFT_PTR(uint32, 0x8012C164u))), ((__int16)(*SF_DRAFT_PTR(uint32, 0x8012C168u))));
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3484)) = v14;
    v16 = normalized_vector[1];
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3396)) = 0;
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3792)) = 0;
    v17 = a1_view[44];
    v18 = a1_view[45];
    (*SF_DRAFT_PTR(uint32, 0x8012C7B8u)) = *v8;
    (*SF_DRAFT_PTR(uint32, 0x8012C7BCu)) = v17;
    (*SF_DRAFT_PTR(uint32, 0x8012C7C0u)) = v18;
    v19 = a1_view[47];
    v20 = a1_view[48];
    (*SF_DRAFT_PTR(uint32, 0x8012C7C4u)) = a1_view[46];
    (*SF_DRAFT_PTR(uint32, 0x8012C7C8u)) = v19;
    (*SF_DRAFT_PTR(uint32, 0x8012C7CCu)) = v20;
    v21 = a1_view[50];
    (*SF_DRAFT_PTR(uint32, 0x8012C7D0u)) = a1_view[49];
    (*SF_DRAFT_PTR(uint32, 0x8012C7D4u)) = v21;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3208)) = 0;
    if (v16 < 0)
        v16 = -v16;
    if (v16 >= 2601 || !v6 && *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3484)) < 192)
        v38 = 1;
    result = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3484));
    v23 = -1;
    if (*SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3484)))
    {
        v24 = (__int16)*v8;
        v25 = (__int16)a1_view[45];
        v40 = (__int16)(*SF_DRAFT_PTR(uint32, 0x8012C160u));
        v26 = *(__int16 *)a1_view;
        v39 = (__int16)(*SF_DRAFT_PTR(uint32, 0x8012C168u));
        (*SF_DRAFT_PTR(uint32, 0x80128040u)) = 0;
        (*SF_DRAFT_PTR(uint8, 0x80128044u)) = 1;
        (*SF_DRAFT_PTR(uint8, 0x80128045u)) = 1;
        (*SF_DRAFT_PTR(uint8, 0x80128046u)) = 0;
        (*SF_DRAFT_PTR(uint8, 0x80128047u)) = 0;
        (*SF_DRAFT_PTR(uint32, 0x8012804Cu)) = 0;
        (*SF_DRAFT_PTR(uint8, 0x80128048u)) = 0;
        (*SF_DRAFT_PTR(uint32, 0x80128050u)) = 0;
        for (i = SF_DRAFT_PTR(uint8, (15 * v26 + (*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 143));; ++i)
        {
            v28 = v23 >= 0 ? *i : *(__int16 *)a1_view;
            if ((*SF_DRAFT_PTR(sint32, 0x801169B0u)) < v28)
                break;
            v29 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (60 * v28 + (*SF_DRAFT_PTR(uint32, 0x80116994u)))));
            if (*v29)
            {
                if ((v30 = SF_DRAFT_PTR(sint32, v29[4]), *v30 < v24) && v24 < v30[4] && v30[2] < v25 && v25 < v30[6] || *v30 < v40 && v40 < v30[4] && v30[2] < v39 && v39 < v30[6] || (v31 = &SF_DRAFT_PTR(uint32, 0x8012C170u)[20 * *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3396))], v31[18] = (int)v29, sub_80077278((v29[4] + 48), (*SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3484))), sf_draft_guest_address(v31), sf_draft_guest_address(a1_view + 43))))
                {
                    sub_800D6C14(*SF_DRAFT_PTR(_DWORD, (v29[4] + 32)), v38, v37);
                }
            }
            ++v23;
        }
        (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(&v32);
        return sub_800769CC(sf_draft_guest_address(a1_view), v36, 0);
    }
    return result;
}

uint32 sub_800C9140(sint32 a1, sint32 a2, sint32 a3, sint32 a4, sint32 a9, sint8 a10)
{
    FUNCTION_MARKER(0x800C9140u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
    _DWORD *v27;
    int *v29;
    uint16 v30;
    unsigned int *v31;
    int *v32;
    unsigned int result;
    uint8 *v35;
    unsigned int v36;
    unsigned int v37;
    int v38;
    int v39;
    unsigned int v40;
    unsigned int *v41;
    int *v42;
    uint16 v44;
    unsigned int *v45;
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
    int v57[2];
    int v58;
    char v59;
    char v60;
    char v61;
    char v62;
    __int16 v63;
    __int16 v64;
    __int16 v65;
    __int16 v66;
    int v67[4];
    v46 = (*SF_DRAFT_PTR(uint32, 0x8010E1ECu));
    v47 = (*SF_DRAFT_PTR(uint32, 0x8010E1F0u));
    v48 = (*SF_DRAFT_PTR(uint32, 0x8010E1F4u));
    v49 = (*SF_DRAFT_PTR(uint32, 0x8010E1F8u));
    v50 = (*SF_DRAFT_PTR(uint32, 0x8010E1FCu));
    v51 = (*SF_DRAFT_PTR(uint32, 0x8010E200u));
    v52 = (*SF_DRAFT_PTR(uint32, 0x8010E204u));
    v53 = (*SF_DRAFT_PTR(uint32, 0x8010E208u));
    v14 = (*SF_DRAFT_PTR(uint16, 0x8012D69Eu)) & 0x10;
    sub_800E95B4((uint16)(*SF_DRAFT_PTR(uint16, 0x8012D69Cu)));
    (*SF_DRAFT_PTR(uint32, 0x8012D6B0u)) = 0;
    v15 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x8012D698u)) + 4));
    v16 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x8012D698u)) + 8));
    (*SF_DRAFT_PTR(uint32, 0x8012D6B4u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x8012D698u)));
    (*SF_DRAFT_PTR(uint32, 0x8012D6B8u)) = v15;
    (*SF_DRAFT_PTR(uint32, 0x8012D6BCu)) = v16;
    v17 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x8012D698u)) + 16));
    v18 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x8012D698u)) + 20));
    (*SF_DRAFT_PTR(uint32, 0x8012D6C0u)) = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x8012D698u)) + 12));
    (*SF_DRAFT_PTR(uint32, 0x8012D6C4u)) = v17;
    (*SF_DRAFT_PTR(uint32, 0x8012D6C8u)) = v18;
    v19 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x8012D698u)) + 28));
    (*SF_DRAFT_PTR(uint32, 0x8012D6CCu)) = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x8012D698u)) + 24));
    (*SF_DRAFT_PTR(uint32, 0x8012D6D0u)) = v19;
    sub_800E9F84((*SF_DRAFT_PTR(uint32, 0x8012D700u)));
    v54 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x8012D698u)) + 20));
    v21 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x8012D698u)) + 24));
    v55 = v21;
    v22 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x8012D698u)) + 28));
    v55 = -v21;
    v56 = v22;
    if (!a10)
    {
        v23 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3600));
        v55 = -v21 - *SF_DRAFT_PTR(_DWORD, (v23 + 64));
        v24 = v55 * *SF_DRAFT_PTR(_DWORD, (v23 + 68));
        v25 = v24 >> 12;
        if (v24 < 0)
            v25 = -(-v24 >> 12);
        v26 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3600));
        v55 = v25;
        v55 = v25 + *SF_DRAFT_PTR(_DWORD, (v26 + 64));
    }
    v27 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (SF_DRAFT_GP + 3600)));
    v52 = v55;
    v51 = v54;
    v53 = v56;
    *v27 = a1;
    v27[1] = a2;
    v27[4] = a4;
    HIWORD(v46) = -HIWORD(v46);
    HIWORD(v48) = -HIWORD(v48);
    HIWORD(v47) = -HIWORD(v47);
    v52 = -v52;
    HIWORD(v49) = -HIWORD(v49);
    sub_800C6F44(sf_draft_guest_address((uint16 *)(&v46)));
    sub_800D6F50(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3600)), (*SF_DRAFT_PTR(_DWORD, (a9 + 4)) + 4 * a4));
    v29 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)));
    v30 = sub_800E7F14(2, 1, 0, 0);
    sub_800E7F94(sf_draft_guest_address(v57), 0, 1, v30);
    sub_800C6E48(sf_draft_guest_address(v29), sf_draft_guest_address(v57), 2);
    v31 = (unsigned int *)v29;
    v32 = v29 + 2;
    sub_800C84B4(sf_draft_guest_address(SF_DRAFT_PTR(unsigned int, (*SF_DRAFT_PTR(_DWORD, (a9 + 4)) + 4 * a4))), sf_draft_guest_address(v31));
    result = 4;
    if (a3 != 4)
    {
        v35 = SF_DRAFT_PTR(uint8, *SF_DRAFT_PTR(uint32, (SF_DRAFT_GP + 3600)));
        v36 = v35[25];
        v37 = v35[26];
        v38 = v35[24];
        if (v36 < v37)
        {
            if (v38 < (int)v37)
                goto LABEL_10;
        }
        else if (v38 < (int)v36)
        {
        LABEL_10:
            v39 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3600));
            v40 = *SF_DRAFT_PTR(uint8, (v39 + 26));
            if (*SF_DRAFT_PTR(uint8, (v39 + 25)) >= v40)
                LOBYTE(v40) = *SF_DRAFT_PTR(_BYTE, (v39 + 25));
            goto LABEL_13;
        }
        LOBYTE(v40) = *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3600)) + 24));
    LABEL_13:
        HIBYTE(v58) = 3;
        v63 = -208;
        v64 = -136;
        v65 = 416;
        v66 = 272;
        v62 = 98;
        if (v14)
            v59 = 0;
        else
            v59 = *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3600)) + 24));
        if (v14)
            v60 = v40;
        else
            v60 = *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3600)) + 25));
        if (v14)
            v61 = 0;
        else
            v61 = *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3600)) + 26));
        sub_800C6E48(sf_draft_guest_address(v32), sf_draft_guest_address(&v58), 4);
        v41 = (unsigned int *)v32;
        v42 = v32 + 4;
        sub_800C84B4(sf_draft_guest_address(SF_DRAFT_PTR(unsigned int, (*SF_DRAFT_PTR(_DWORD, (a9 + 4)) + 4 * a4))), sf_draft_guest_address(v41));
        v44 = sub_800E7F14(2, *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3600)) + 20)), 0, 0);
        sub_800E5ED4(sf_draft_guest_address(v67), 0, 1, v44, 0);
        sub_800C6E48(sf_draft_guest_address(v42), sf_draft_guest_address(v67), 3);
        v45 = (unsigned int *)v42;
        v32 = v42 + 3;
        result = sub_800C84B4(sf_draft_guest_address(SF_DRAFT_PTR(unsigned int, (*SF_DRAFT_PTR(_DWORD, (a9 + 4)) + 4 * a4))), sf_draft_guest_address(v45));
    }
    (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)) = (int)v32;
    return result;
}

uint32 sub_800869EC(sint32 a1)
{
    FUNCTION_MARKER(0x800869ECu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    unsigned int v3;
    int v4;
    int *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    _WORD *v10;
    __int16 v11;
    int v12;
    unsigned int v13;
    int v14;
    int v15;
    int v16;
    sint32 v17;
    int v18;
    int v19;
    unsigned int result;
    char v21;
    int v22[4];
    v3 = -1;
    v4 = 0;
    if (a1)
        v5 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (a1 + 16)));
    else
        v5 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (SF_DRAFT_GP + 1136)));
    v6 = 0;
    while (v5)
    {
        v7 = *v5;
        if ((*SF_DRAFT_PTR(_BYTE, (*v5 + 20)) & 0x10) != 0)
        {
            v8 = *SF_DRAFT_PTR(_DWORD, (v7 + 8));
            if (v8 != -1)
                *SF_DRAFT_PTR(_DWORD, (v7 + 8)) = v8 + 1;
        }
        else
        {
            if (a1 && v6)
            {
                for (; v7; v7 = *SF_DRAFT_PTR(_DWORD, (v7 + 24)))
                {
                    v9 = 0;
                    if (*SF_DRAFT_PTR(_WORD, (v7 + 12)))
                    {
                        v10 = SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, v7) + 6));
                        do
                        {
                            if (SF_DRAFT_PTR(int, a1) == &(*SF_DRAFT_PTR(uint32, 0x80120F70u)))
                                v11 = *v10 + v6;
                            else
                                v11 = *v10 - v6;
                            *v10 = v11;
                            ++v9;
                            v10 += 22;
                        } while (v9 < *SF_DRAFT_PTR(uint16, (v7 + 12)));
                    }
                }
                v7 = *v5;
            }
            if ((*SF_DRAFT_PTR(_BYTE, (v7 + 20)) & 2) != 0)
            {
                v12 = v7;
                if (!v4)
                {
                    sub_80018430((*SF_DRAFT_PTR(uint32, 0x80115D84u)), sf_draft_guest_address(v22));
                    sub_800C8D98(v22[0]);
                    v12 = v7;
                }
                if (sub_80083DF8(v12, v4))
                    ++v4;
                else
                    sub_80084620(v4);
                v3 = 0;
            }
            v13 = *SF_DRAFT_PTR(_DWORD, (v7 + 8));
            v14 = 8;
            if ((*SF_DRAFT_PTR(uint32, 0x801169A4u)) < v13)
            {
                for (; v7; v7 = *SF_DRAFT_PTR(_DWORD, (v7 + 24)))
                {
                    v18 = 1;
                    if ((*SF_DRAFT_PTR(_BYTE, (v7 + 20)) & 2) == 0)
                        v18 = *SF_DRAFT_PTR(uint16, (v7 + 22));
                    v19 = *SF_DRAFT_PTR(uint16, (v7 + 12));
                    if (*SF_DRAFT_PTR(_DWORD, (v7 + 4)) + (v19 << 12) / v18 + 8 < (unsigned int)(*SF_DRAFT_PTR(uint32, 0x801169A4u)))
                    {
                        if ((*SF_DRAFT_PTR(_DWORD, (v7 + 16)) & 0xFFFFFF) == (*SF_DRAFT_PTR(_DWORD, (44 * v19 + *SF_DRAFT_PTR(_DWORD, v7) - 24)) & 0xFFFFFF))
                        {
                            if (*SF_DRAFT_PTR(_DWORD, (v7 + 8)) < v3)
                                v3 = *SF_DRAFT_PTR(_DWORD, (v7 + 8));
                        }
                        else
                        {
                            sub_80087528(v7);
                            v3 = 0;
                        }
                    }
                    else if ((uint8)sub_80087208(v7))
                    {
                        v3 = 0;
                    }
                }
            }
            else
            {
                v15 = (*SF_DRAFT_PTR(uint32, 0x801169A4u)) - v13;
                if ((*SF_DRAFT_PTR(_BYTE, (v7 + 20)) & 0x80) != 0)
                    v14 = 6;
                v16 = *SF_DRAFT_PTR(uint8, (v7 + 19));
                v17 = v15 < 8;
                if (8 - v14 < v15)
                {
                    v6 += v16;
                    v17 = v15 < 8;
                }
                if (!v17)
                {
                    sub_80087660(v7);
                    uint32 original_node = sf_draft_guest_address(v5);
                    v5 = SF_DRAFT_PTR(int, v5[2]);
                    if (a1)
                    {
                        *SF_DRAFT_PTR(_BYTE, (a1 + 7)) -= v14 * v16;
                        sub_800DE6E0(a1 + 16, original_node);
                        if (!*SF_DRAFT_PTR(_DWORD, (a1 + 16)))
                            sub_80084B58(sf_draft_guest_address(SF_DRAFT_PTR(int, a1)));
                    }
                    else
                    {
                        sub_800DE6E0(0x801160D8u, original_node);
                    }
                    continue;
                }
                sub_80087194(v7);
                v3 = 0;
            }
        }
        v5 = SF_DRAFT_PTR(int, v5[2]);
    }
    result = v3;
    if (a1)
    {
        v21 = *SF_DRAFT_PTR(_BYTE, (a1 + 7)) + v6;
        *SF_DRAFT_PTR(_BYTE, (a1 + 7)) = v21;
        if ((v21 & 0x80) != 0)
            *SF_DRAFT_PTR(_BYTE, (a1 + 7)) = 0;
        result = v3;
        if (!*SF_DRAFT_PTR(_DWORD, (a1 + 16)))
        {
            result = v3;
            if (*SF_DRAFT_PTR(_BYTE, (a1 + 7)))
                *SF_DRAFT_PTR(_BYTE, (a1 + 7)) = 0;
        }
    }
    return result;
}

sint32 sub_800830AC(uint32 a1)
{
    int v19;
    int v20;
    int v21;
    FUNCTION_MARKER(0x800830ACu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint32 *a1_view = SF_DRAFT_PTR(uint32, a1);
    int v1;
    int result;
    int *v3;
    int v4;
    int v5;
    int v6;
    int v8;
    int v9;
    int v10;
    uint8 v11;
    unsigned int v12;
    int v13;
    uint8 v14;
    int v15;
    v1 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    result = 0;
    if ((*SF_DRAFT_PTR(uint8, 0x80116962u)))
    {
        if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v1 + 24)) + 8)) <= 0)
            return 0;
        v3 = SF_DRAFT_PTR(int, *a1_view);
        v4 = *SF_DRAFT_PTR(int, *a1_view);
        switch ((uint8)v4)
        {
            case 0x14u:
                if ((unsigned int)(uint16)(*SF_DRAFT_PTR(uint16, 0x80130C88u)) - 14 < 2)
                {
                    result = 1;
                    if ((*SF_DRAFT_PTR(uint8, 0x80116A3Cu)))
                    {
                        result = 1;
                        if (((*SF_DRAFT_PTR(uint32, 0x801169A4u)) & 3) == 0)
                        {
                            v5 = sub_800EC8F4() % 15;
                            v19 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * v5 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 24)))) + 20));
                            v20 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * v5 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 24)))) + 24));
                            v6 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * v5 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 24)))) + 28));
                            v20 = -v20;
                            v21 = v6;
                            sub_80051684(sf_draft_guest_address(&v19));
                            v8 = sub_800EC8F4();
                            v9 = 4 * (v8 % 15);
                            if (v5 != v8 % 15)
                            {
                                v19 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v9 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 24)))) + 20));
                                v20 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v9 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 24)))) + 24));
                                v10 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v9 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 24)))) + 28));
                                v20 = -v20;
                                v21 = v10;
                                sub_80051684(sf_draft_guest_address(&v19));
                            }
                            sub_80069CB0(-1, -1, (*SF_DRAFT_PTR(__int16, (v1 + 2))), (*((uint8 *)v3 + 68)), v19);
                            return 1;
                        }
                    }
                }
                else
                {
                    result = 1;
                    if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 24)) + 8)) > 0)
                    {
                        result = 1;
                        if (!(*SF_DRAFT_PTR(uint8, 0x801169C0u)))
                        {
                            sub_80015364(0xDu, 4u, 666, (*SF_DRAFT_PTR(uint32, 0x80116AB0u)), 0, 0, 0, 0);
                            return 1;
                        }
                    }
                }
                break;
            case 0x11u:
            case 0x18u:
                if ((v4 & 0x200) != 0)
                {
                    *v3 = v4 & 0xFFFFFDFF;
                    if ((uint8)v4 == 17)
                        sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), 55);
                    else
                        sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), 56);
                    return 1;
                }
                else
                {
                    *v3 = v4 | 0x200;
                    if ((uint8)v4 == 17)
                        sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), 53);
                    else
                        sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), 54);
                    return 1;
                }
            case 0x12u:
                v11 = 0;
                if ((v4 & 0x200) != 0)
                {
                    v12 = v4 & 0xFFFFFDFF;
                }
                else
                {
                    v11 = 1;
                    v12 = v4 | 0x200;
                }
                *v3 = v12;
                sub_8001CC64(v11, 0, v3[17], 0, 1);
                return 1;
            default:
                result = 1;
                if ((uint8)v4 != 16)
                    return result;
                if ((v4 & 0x200) != 0)
                {
                    v13 = v3[17];
                    *v3 = v4 & 0xFFFFFDFF;
                    if (v13 < 0)
                        return 1;
                    v14 = 19;
                }
                else
                {
                    v15 = v3[17];
                    *v3 = v4 | 0x200;
                    if (v15 < 0)
                    {
                        sub_8005FD04(v15 & 0x7FFFFFFF);
                        return 1;
                    }
                    v14 = 18;
                }
                sub_80015364(v14, 4u, 65534, v3[17], sf_draft_guest_address(v3), 0, 0, 0);
                return 1;
        }
    }
    return result;
}

sint32 sub_8008836C(sint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a9)
{
    uint32 entity = (uint32)a1, node, body, transform, polygon, vertex;
    sint32 point[4], packet[21], count, i, limit, height, difference;
    uint8 candidate, hit;
    FUNCTION_MARKER(0x8008836Cu, "SCUS_942.40");
    node = r_u32(r_u32(entity + 8u) + 40u);
    body = r_u32(entity + 12u);
    point[0] = (sint32)r_u32(body + 268u);
    point[1] = (sint32)r_u32(body + 272u);
    point[2] = (sint32)r_u32(body + 276u);
    point[3] = (sint32)r_u32(body + 280u);
    point[1] = (sint32)((uint32)point[1] - 9u);
    body = r_u32(entity + 12u);
    point[0] = (sint32)r_u32(body);
    point[1] = (sint32)r_u32(body + 4u);
    point[2] = (sint32)r_u32(body + 8u);
    point[3] = (sint32)r_u32(body + 12u);
    transform = r_u32(r_u32(r_u32(entity + 12u) + 416u) + 44u);
    point[0] = (sint32)((uint32)point[0] + r_u32(transform + 60u));
    transform = r_u32(r_u32(r_u32(entity + 12u) + 416u) + 44u);
    point[1] = (sint32)((uint32)point[1] + r_u32(transform + 64u));
    transform = r_u32(r_u32(r_u32(entity + 12u) + 416u) + 44u);
    point[2] = (sint32)((uint32)point[2] + r_u32(transform + 68u));
    transform = r_u32(r_u32(r_u32(entity + 12u) + 416u) + 44u);
    point[1] = (sint32)((uint32)point[1] - r_u32(transform + 20u));
    w_u32(r_u32(entity + 12u) + 300u, 0x80000001u);
    *SF_DRAFT_PTR(uint8, a2) = 0u;
    *SF_DRAFT_PTR(uint32, a3) = 0u;
    *SF_DRAFT_PTR(uint32, a9) = 0x7fffffffu;
    limit = (sint32)((uint32)point[1] + 64u);
    while (node)
    {
        polygon = node + 8u;
        if (r_s16(r_u32(node + 16u) + 2u) >= 2049)
        {
            count = (sint32)r_u32(node + 8u);
            candidate = 0u;
            if (count == 3 || count == 4)
            {
                for (i = 0; i < count; ++i)
                {
                    if (limit >= r_s16(r_u32(node + 28u + 4u * (uint32)i) + 2u))
                    {
                        candidate = 1u;
                        break;
                    }
                }
            }
            else if (count > 0)
            {
                for (i = 0; i < count; ++i)
                {
                    if (limit >= r_s16(r_u32(polygon + 20u + 4u * (uint32)i) + 2u))
                    {
                        candidate = 1u;
                        break;
                    }
                }
            }
            if (candidate)
            {
                count = (sint32)r_u32(polygon);
                /* TODO More than five vertices overlaps original helper output locals */
                if (count > 5)
                {
                    fprintf(stderr, "TODO 8008836C: Polygon count overlaps original local outputs\n");
                    abort();
                }
                packet[0] = count;
                for (i = 0; i < count; ++i)
                {
                    vertex = r_u32(polygon + 20u + 4u * (uint32)i);
                    packet[1 + 4 * i] = r_s16(vertex);
                    vertex = r_u32(polygon + 20u + 4u * (uint32)i);
                    packet[2 + 4 * i] = r_s16(vertex + 2u);
                    vertex = r_u32(polygon + 20u + 4u * (uint32)i);
                    packet[3 + 4 * i] = r_s16(vertex + 4u);
                }
                /* Helpers use XYZ only; vertex padding remains untouched */
                sub_80088290(sf_draft_guest_address(point), sf_draft_guest_address(packet), sf_draft_guest_address(&candidate));
                if (candidate)
                {
                    /* TODO Height interpolation requires three populated vertices */
                    if (count < 3)
                    {
                        fprintf(stderr, "TODO 8008836C: Fewer than three populated vertices\n");
                        abort();
                    }
                    sub_800E1E64(sf_draft_guest_address(point), sf_draft_guest_address(packet), sf_draft_guest_address(&hit), sf_draft_guest_address(&height));
                    if (hit)
                    {
                        difference = (sint32)((uint32)point[1] - (uint32)height);
                        if (difference >= -63 && difference < *SF_DRAFT_PTR(sint32, a9))
                        {
                            w_u32(r_u32(entity + 12u) + 300u, (uint32)height);
                            *SF_DRAFT_PTR(uint8, a2) = 1u;
                            *SF_DRAFT_PTR(uint32, a3) = polygon;
                            *SF_DRAFT_PTR(uint32, a4) = (uint32)height;
                            *SF_DRAFT_PTR(uint32, a9) = (uint32)difference;
                        }
                    }
                }
            }
        }
        node = r_u32(node + 4u);
    }
    return 1;
}

BOOL sub_8003E2D4(uint32 a1)
{
    FUNCTION_MARKER(0x8003E2D4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    __int16 *a1_view = SF_DRAFT_PTR(__int16, a1);
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
    int v18;
    int v19;
    int v20;
    int v21;
    int *v22;
    int *v23;
    int v24;
    int *v25;
    __int16 *v26;
    __int16 v27;
    int v28;
    int v29;
    __int16 v30;
    sint32 result;
    _DWORD *v32;
    int v33;
    int v34;
    int v35;
    int v36;
    int v37;
    v33 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 8)) + 12)) + 4));
    v34 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 8)) + 12)) + 10));
    v2 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 8)) + 12)) + 16));
    v34 = 0;
    v35 = v2;
    sub_800C720C(sf_draft_guest_address(&v33), sf_draft_guest_address(&v33));
    sub_800EADF4(sf_draft_guest_address(a1_view), sf_draft_guest_address(&v33), sf_draft_guest_address(&v33));
    v3 = 1;
    if (v33 < 0)
        v3 = -1;
    v4 = 1;
    if (v35 < 0)
        v4 = -1;
    if (24 * v33 < 0)
        v5 = -((-24 * v33) >> 12);
    else
        v5 = (24 * v33) >> 12;
    v6 = v5 - v3;
    v7 = v6 >> 3;
    if (v6 < 0)
        v7 = (v6 + 7) >> 3;
    if (-20 * v35 < 0)
        v8 = -((20 * v35) >> 12);
    else
        v8 = (-20 * v35) >> 12;
    v9 = v8 - v4;
    v10 = v9 >> 3;
    if (v9 < 0)
        v10 = (v9 + 7) >> 3;
    if (20 * v33 < 0)
        v11 = -((-20 * v33) >> 12);
    else
        v11 = (20 * v33) >> 12;
    v12 = (v11 - v3) / 6;
    if (-24 * v35 < 0)
        v13 = -((24 * v35) >> 12);
    else
        v13 = (-24 * v35) >> 12;
    v14 = v13 - v4;
    v37 = 5308263;
    HIWORD(v36) = v10 + 80;
    LOWORD(v36) = v7 - 153;
    v15 = v36;
    LOWORD(v36) = v14 / 6 - v7 - 153;
    HIWORD(v36) = -(__int16)v12 - v10 + 80;
    v16 = v36;
    LOWORD(v36) = (__int16)v14 / -6 - v7 - 153;
    HIWORD(v36) = v12 - v10 + 80;
    (*SF_DRAFT_PTR(uint32, 0x8011B328u)) = v15;
    (*SF_DRAFT_PTR(uint32, 0x8011B330u)) = v16;
    (*SF_DRAFT_PTR(uint32, 0x8011B338u)) = v36;
    v17 = a1_view[2];
    v33 = v17;
    v34 = a1_view[5];
    v18 = a1_view[8];
    v35 = v18;
    v19 = sub_800EC124(v18, v17) + 256;
    v20 = 8 * (v19 + (v19 < 0 ? 0x1000 : 0));
    if (v20 < 0)
        v21 = -(-v20 >> 12);
    else
        v21 = v20 >> 12;
    v22 = &SF_DRAFT_PTR(uint32, 0x8010C2E4u)[4 * v21];
    v23 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011BB8Cu)));
    v24 = 0;
    v25 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011BBA8u)));
    v26 = (__int16 *)v22 + 3;
    do
    {
        if (!*(_WORD *)v22)
            break;
        *(v25 - 3) = *(uint16 *)v22 | ((uint16) * (v26 - 2) << 16);
        ++v24;
        *(v25 - 2) = (uint16)(*(_WORD *)v22 + *(v26 - 1)) | ((uint16) * (v26 - 2) << 16);
        v23 += 9;
        *(v25 - 1) = *(uint16 *)v22 | ((*(v26 - 2) + *v26) << 16);
        v27 = *(v26 - 1);
        v28 = *(v26 - 2);
        v29 = *v26;
        v26 += 4;
        v30 = *(_WORD *)v22;
        v22 += 2;
        *v25 = (uint16)(v30 + v27) | ((v28 + v29) << 16);
        v25 += 9;
    } while (v24 < 2);
    result = v24 < 2;
    if (v24 < 2)
    {
        v32 = v23 + 4;
        do
        {
            ++v24;
            v32[3] = 67109888;
            v32[2] = 67109888;
            v32[1] = 67109888;
            *v32 = 67109888;
            result = v24 < 2;
            v32 += 9;
        } while (v24 < 2);
    }
    return result;
}

sint32 sub_80031F2C(sint32 a1, sint32 a2, uint8 mode)
{
    FUNCTION_MARKER(0x80031F2Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v2;
    int result;
    int *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    uint8 v11;
    int target_position[4];
    int v12[4];
    sint32 direction[3];
    int v16;
    int v17;
    int v18;
    __int16 v19;
    __int16 v20;
    __int16 v21;
    __int16 v22;
    __int16 v23;
    __int16 v24;
    __int16 v25;
    __int16 v26;
    __int16 v27;
    char v28[8];
    v2 = *SF_DRAFT_PTR(_DWORD, (76 * a2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    if ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 20)) + 4)) & 1) == 0)
        return 0;
    result = 0;
    if ((*SF_DRAFT_PTR(_BYTE, (v2 + 35)) & 2) != 0)
        return result;
    v5 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (a1 + 12)));
    v6 = v5[1];
    v7 = v5[2];
    v8 = v5[3];
    v12[0] = *v5;
    v12[1] = v6;
    v12[2] = v7;
    v12[3] = v8;
    memcpy(target_position, SF_DRAFT_PTR(void, *SF_DRAFT_PTR(uint32, v2 + 12)), sizeof(target_position));
    if (!*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v2 + 8))))
        return 0;
    if (*SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v19 = *SF_DRAFT_PTR(_WORD, *SF_DRAFT_PTR(uint32, *SF_DRAFT_PTR(uint32, 0x80115D84u)));
        v20 = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2));
        v21 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 4));
        v9 = -*SF_DRAFT_PTR(uint16, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 6));
        v22 = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 6));
        v23 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 8));
        v24 = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 10));
        v25 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 12));
        v26 = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 14));
        v27 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 16));
        v18 = v25;
        v16 = v19;
        v17 = (__int16)v9;
        direction[0] = -v25;
        direction[1] = 0;
        direction[2] = v19;
    }
    else if ((*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 16))) & 0x100000) != 0)
    {
        direction[0] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 4));
        direction[1] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 10));
        v10 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 16));
        direction[1] = -direction[1];
        direction[2] = v10;
    }
    else
    {
        sub_800DC730(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 56)), 0, sf_draft_guest_address(&direction[0]));
        direction[0] = -direction[0];
        direction[2] = -direction[2];
        direction[1] = -direction[1];
    }
    direction[1] = 0;
    sub_800E0D14(sf_draft_guest_address(&direction[0]), sf_draft_guest_address(v28));
    result = 0;
    if (*SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8)) > 0)
        {
            if (!(*SF_DRAFT_PTR(uint8, 0x80116B7Cu)))
            {
                v11 = 0;
                if ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 20)) + 4)) & 0x10) == 0)
                    return v11;
            }
        }
        else
        {
            v11 = 0;
            if (!(*SF_DRAFT_PTR(uint8, 0x80116B7Cu)))
            {
                *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 20)) + 4)) &= ~1u;
                return v11;
            }
        }
        LOBYTE(result) = sub_80034450((*SF_DRAFT_PTR(uint32, 0x80116AB0u)), sf_draft_guest_address(v12), sf_draft_guest_address(&direction[0]), 32000, mode ? (*SF_DRAFT_PTR(uint8, 0x80116B7Cu) ? 2048 : 625) : 4096, sf_draft_guest_address(target_position));
        v11 = result;
        if (!(*SF_DRAFT_PTR(uint8, 0x80116B7Cu)))
            return v11;
        result = (uint8)result;
        v11 = 3;
        if (!(_BYTE)result)
            return v11;
    }
    return result;
}

uint32 sub_80046584(sint32 a1)
{
    FUNCTION_MARKER(0x80046584u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    uint32 v8;
    int v9;
    uint8 v10;
    int v11;
    unsigned int result;
    int v13;
    __int16 *v14;
    int v15;
    int v16;
    uint32 v17;
    int v18;
    unsigned int v19;
    v3 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    if (v3 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v13 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 848));
        v14 = &SF_DRAFT_PTR(uint16, 0x8012F0B0u)[2 * v13];
        if (v14[1])
        {
            if (v13 != 14)
                --v14[1];
            v15 = SBYTE2(SF_DRAFT_PTR(uint32, 0x8010C390u)[8 * *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 848))]);
            if (v15 >= 0)
            {
                sub_8006BC98(1, v15, a1, 0);
                v16 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 848));
                if ((unsigned int)(v16 - 19) >= 2)
                {
                    sub_80057EF0(0, (*SF_DRAFT_PTR(uint32, 0x80116AB0u)), 0, (SF_DRAFT_PTR(uint16, 0x8010C394u)[16 * v16]));
                    v17 = *SF_DRAFT_PTR(uint32, SF_DRAFT_GP + 808);
                    if (v17)
                        sf_draft_call(v17, 2, (const uint32[]){(uint32)(sint16)*SF_DRAFT_PTR(uint32, 0x80116AB0u), (uint32)(sint16)*SF_DRAFT_PTR(uint32, SF_DRAFT_GP + 848)});
                }
            }
        }
        if (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 8)) != 8)
        {
            v18 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 848));
            v19 = v18 - 6;
            if ((SF_DRAFT_PTR(uint32, 0x8010C390u)[8 * v18] & 7) == 0 || !v14[1] && (v19 = v18 - 6, *v14))
            {
                if (v19 < 2 || v18 == 16)
                {
                    if ((*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 16))) & 0xC) != 0)
                    {
                        if (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 848)) != 16)
                            sub_80046468(*SF_DRAFT_PTR(_WORD, (a1 + 2)), 85, 0);
                    }
                    else
                    {
                        if (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)) + 60)) == 5)
                            sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), 5);
                        sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), 85);
                    }
                }
                else if ((uint8)sub_800463D0(v18))
                {
                    if (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)) + 60)) == 5)
                        sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), 5);
                    sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), 62);
                }
            }
        }
        return sub_8003FDD0();
    }
    else
    {
        v4 = 76 * v3 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        v5 = *SF_DRAFT_PTR(uint8, (v4 + 36));
        if (!*SF_DRAFT_PTR(_BYTE, (v4 + 36)))
        {
            v6 = *SF_DRAFT_PTR(_DWORD, (v4 + 36)) & 0x3000;
            if (v6 == 4096)
                v5 = 19;
            else
                v5 = v6 == 0x2000 ? 0x14 : 0;
        }
        v7 = SHIBYTE(SF_DRAFT_PTR(uint32, 0x8010C390u)[8 * v5]);
        if (v7 == -2)
        {
            sub_8006BC98(1, (SBYTE2(SF_DRAFT_PTR(uint32, 0x8010C390u)[8 * v5])), a1, 0);
        }
        else if (v7 >= 0)
        {
            sub_8006CE48(1, v7, a1, *SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 77)));
        }
        v8 = *SF_DRAFT_PTR(uint32, SF_DRAFT_GP + 808);
        if (v8)
            sf_draft_call(v8, 2, (const uint32[]){(uint32)*SF_DRAFT_PTR(sint16, a1 + 2), (uint32)v5});
        v9 = 8 * v5;
        v10 = 1;
        if ((SF_DRAFT_PTR(uint32, 0x8010C390u)[8 * v5] & 7) != 0)
        {
            --*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 56));
            if ((SF_DRAFT_PTR(uint32, 0x8010C390u)[v9] & 7) != 0)
            {
                v11 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
                v10 = 0;
                if (!*SF_DRAFT_PTR(_WORD, (v11 + 56)))
                {
                    v10 = 1;
                    *SF_DRAFT_PTR(_WORD, (v11 + 56)) = (uint8)SF_DRAFT_PTR(uint8, 0x8010C38Du)[v9 * 4];
                }
            }
            else
            {
                v10 = 0;
            }
        }
        result = v10;
        if (*SF_DRAFT_PTR(_DWORD, (a1 + 16)))
        {
            result = v5 - 6;
            if (v10)
            {
                if (result < 2 || v5 == 16)
                    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 60)) = 85;
                else
                    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 60)) = 62;
                *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 85)) = 20;
                if (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)) + 60)) == 5)
                    sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), 5);
                return sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 60)));
            }
        }
    }
    return result;
}

sint32 sub_800CCDD0(sint32 a1, sint32 a2, sint32 a3, uint32 a4, sint32 a9)
{
    FUNCTION_MARKER(0x800CCDD0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _WORD *a4_view = SF_DRAFT_PTR(_WORD, a4);
    int v10;
    char v15;
    int *v16;
    int v17;
    unsigned int v18;
    __int16 v19;
    int v20;
    int v21;
    __int16 v22;
    int v23;
    int result;
    sint32 basis_right[3];
    sint32 basis_up[3];
    int v31;
    v10 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2156));
    v15 = 9;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2156)) = v10 + 1;
    v16 = &SF_DRAFT_PTR(uint32, 0x8012E130u)[14 * v10];
    v17 = a4_view[8] & 0x3F;
    LOWORD(v10) = a4_view[11];
    v31 = 2 * (uint16)a4_view[10] - 1;
    v18 = (uint16)a4_view[9];
    v19 = v10 - 1;
    if (a9 == 666)
        v15 = 8;
    if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2220)))
    {
        sub_800CCDA8();
        *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2220)) = 0;
    }
    if (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2156)) == 60)
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2156)) = 0;
    v16[8] = 1;
    v16[9] = a9;
    v20 = (uint8)v18 << 8;
    v16[10] = ((((__int16)a4_view[15] << 6) | ((uint16)a4_view[14] >> 4) & 0x3F) << 16) + v20 + 2 * v17;
    v21 = (((uint8)v18 + v19) << 8) + 2 * v17;
    v22 = a4_view[8];
    v16[12] = v21;
    v23 = (__int16)v31;
    v16[13] = v21 + (__int16)v31;
    v16[11] = (((v18 >> 4) & 0x10 | ((uint16)(v22 & 0x3FF) >> 6) | 0x80 | (4 * (v18 & 0x200))) << 16) + v20 + 2 * v17 + v23;
    sub_800EBA78(a2, a3, sf_draft_guest_address(&basis_right[0]));
    if (!basis_right[0] && !basis_right[1] && !basis_right[2])
        sub_800EBA78(a2, a1, sf_draft_guest_address(&basis_right[0]));
    sub_800C720C(sf_draft_guest_address(&basis_right[0]), sf_draft_guest_address(&basis_right[0]));
    sub_800EBA78(sf_draft_guest_address(&basis_right[0]), a2, sf_draft_guest_address(&basis_up[0]));
    sub_800C720C(sf_draft_guest_address(&basis_up[0]), sf_draft_guest_address(&basis_up[0]));
    basis_right[1] >>= v15;
    basis_right[2] >>= v15;
    basis_right[0] >>= v15;
    basis_up[0] >>= v15;
    basis_up[2] >>= v15;
    basis_up[1] >>= v15;
    *(_WORD *)v16 = *SF_DRAFT_PTR(_DWORD, a1) - basis_right[0] + basis_up[0];
    *((_WORD *)v16 + 1) = -(__int16)(*SF_DRAFT_PTR(_WORD, (a1 + 4)) - basis_right[1] + basis_up[1]);
    *((_WORD *)v16 + 2) = *SF_DRAFT_PTR(_DWORD, (a1 + 8)) - basis_right[2] + basis_up[2];
    *((_WORD *)v16 + 4) = *SF_DRAFT_PTR(_DWORD, a1) + basis_right[0] + basis_up[0];
    *((_WORD *)v16 + 5) = -(__int16)(*SF_DRAFT_PTR(_WORD, (a1 + 4)) + basis_right[1] + basis_up[1]);
    *((_WORD *)v16 + 6) = *SF_DRAFT_PTR(_DWORD, (a1 + 8)) + basis_right[2] + basis_up[2];
    *((_WORD *)v16 + 8) = *SF_DRAFT_PTR(_DWORD, a1) + basis_right[0] - basis_up[0];
    *((_WORD *)v16 + 9) = basis_up[1] - (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) + basis_right[1]);
    *((_WORD *)v16 + 10) = *SF_DRAFT_PTR(_DWORD, (a1 + 8)) + basis_right[2] - basis_up[2];
    *((_WORD *)v16 + 12) = *SF_DRAFT_PTR(_DWORD, a1) - basis_right[0] - basis_up[0];
    *((_WORD *)v16 + 13) = basis_up[1] - (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) - basis_right[1]);
    result = *SF_DRAFT_PTR(_DWORD, (a1 + 8)) - basis_right[2] - basis_up[2];
    *((_WORD *)v16 + 14) = result;
    return result;
}

sint32 sub_80069CB0(sint16 a1, sint32 a2, sint32 a3, sint16 a4, uint16 a9)
{
    FUNCTION_MARKER(0x80069CB0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int result;
    __int16 v18;
    sint32 v19;
    int v20;
    int v21;
    int v22;
    __int16 *v23;
    int *v24;
    bool v25;
    int v26;
    if (a1 == -1)
    {
        v12 = -1;
    }
    else
    {
        v10 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 2));
        if (v10 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
        {
            v12 = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
            v14 = a3 << 16;
            goto LABEL_10;
        }
        v11 = 76 * v10 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        v12 = *SF_DRAFT_PTR(uint8, (v11 + 36));
        if (!*SF_DRAFT_PTR(_BYTE, (v11 + 36)))
        {
            v13 = *SF_DRAFT_PTR(_DWORD, (v11 + 36)) & 0x3000;
            if (v13 == 4096)
                v12 = 19;
            else
                v12 = v13 == 0x2000 ? 0x14 : 0;
        }
    }
    v14 = a3 << 16;
LABEL_10:
    v15 = *SF_DRAFT_PTR(_DWORD, (76 * (v14 >> 16) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    if (a1 == -1)
        v16 = 0;
    else
        v16 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    if (a1 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) && (*SF_DRAFT_PTR(uint8, 0x801168D1u)))
    {
        result = (__int16)a3;
        if ((__int16)a3 == a1)
            return result;
        v18 = 10 * a4;
        v19 = a4 < (__int16)(10 * a4);
        a4 = 0x7FFF;
        if (v19)
            a4 = v18;
    }
    v20 = a9 << 16;
    if (*SF_DRAFT_PTR(_BYTE, (v15 + 34)) == 2)
    {
        v21 = *SF_DRAFT_PTR(_DWORD, (v15 + 28));
        if (v21)
        {
            result = *SF_DRAFT_PTR(_DWORD, (v21 + 32)) & 0x200;
            if (!result)
                return result;
        }
        v20 = a9 << 16;
    }
    if (v20 >> 16 == 2194)
    {
        v22 = a2 << 16;
    }
    else
    {
        v22 = a2 << 16;
        if (v12 == 16)
        {
            v23 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (v16 + 20)));
            if ((__int16)a3 == *v23)
            {
                if ((__int16)a3 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (v24 = &(*SF_DRAFT_PTR(uint32, 0x8012F138u)), !(*SF_DRAFT_PTR(uint32, 0x8012F144u))))
                    v24 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(_DWORD, (v16 + 20)) + 100));
            }
            else
            {
                v24 = SF_DRAFT_PTR(int, (v23 + 58));
            }
            return sub_80050724(a1, sf_draft_guest_address(v24));
        }
    }
    if (v22 >> 16 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (__int16)a3 == 666 || (result = 46, *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * (__int16)a3 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 46))
    {
        v25 = 0;
        if ((*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 4 && *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 24)) + 8)) == 0x7FFF)
            v25 = *SF_DRAFT_PTR(_DWORD, (v15 + 16)) != 0;
        *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 24)) + 4)) = a1;
        *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 24)) + 10)) = a2;
        if (a1 != -1 && (*SF_DRAFT_PTR(_BYTE, (v15 + 32)) & 0x10) != 0)
            a4 = 0;
        *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 24)) + 12)) = a4;
        *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 24)) + 14)) = a9;
        if (*SF_DRAFT_PTR(_DWORD, (v15 + 16)) && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v15 + 24)) + 8)) > 0)
        {
            v26 = a3 << 16;
            if (!v25)
                return sub_80028F3C((__int16)a3, 14);
        }
        else
        {
            v26 = a3 << 16;
        }
        sub_80069224(v26 >> 16);
        result = v25;
        if (v25)
            return sf_draft_call(0x80146A5Cu, 1, (const uint32[]){v15});
    }
    return result;
}

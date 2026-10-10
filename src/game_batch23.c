#include "game_draft.h"
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);

uint32 sub_80030FA4(sint32 a1)
{
    FUNCTION_MARKER(0x80030FA4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    __int16 *v2;
    sint32 v3;
    int v4;
    int v5;
    int v6;
    unsigned int v7;
    int v8;
    __int16 v9;
    __int16 v10;
    __int16 v11;
    int v12;
    int v13;
    unsigned int result;
    int v15;
    int v16;
    v2 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a1 + 20)));
    v3 = 0;
    if (*SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        if ((*((_DWORD *)v2 + 1) & 2) != 0)
            v3 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (76 * *v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 2)) == v2[45];
    }
    else if ((*((_DWORD *)v2 + 1) & 2) != 0 && *v2 == v2[45] && (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 0x100) != 0)
    {
        v3 = 1;
    }
    if (v3)
    {
        if (*SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
        {
            result = 200;
            if ((*SF_DRAFT_PTR(uint8, 0x801168D1u)))
                v2[33] = 200;
        }
        else
        {
            v4 = *((_DWORD *)v2 + 42);
            if (v4 < 0)
            {
                v5 = v4 & 0x7FFFFFFF;
                v6 = (*SF_DRAFT_PTR(uint32, 0x80116A88u)) - *((_DWORD *)v2 + 41);
                if (v6 >= 40)
                    *((_DWORD *)v2 + 41) = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
                else
                    *((_DWORD *)v2 + 41) = (*SF_DRAFT_PTR(uint32, 0x80116A88u)) - 4 * v5 * (40 - v6) / 0x28u;
            }
            v7 = (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - *((_DWORD *)v2 + 41)) >> 2;
            if (v7 >= 0x81)
                v7 = 128;
            *((_DWORD *)v2 + 42) = v7;
            v8 = *SF_DRAFT_PTR(__int16, (a1 + 2));
            if (v8 != 666 && *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v8 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 2 || (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 0x20000000) != 0)
            {
                v9 = 4;
                if (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 82)) != 3)
                    v9 = 10;
            }
            else if ((*SF_DRAFT_PTR(uint16, 0x80130C88u)) || (v9 = 3, *v2 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u))))
            {
                v9 = *SF_DRAFT_PTR(_WORD, ((*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 76));
            }
            v10 = v9 * v7;
            if ((*SF_DRAFT_PTR(uint8, 0x801168D0u)))
            {
                v11 = v9 + 6;
                if (*v2 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
                    v10 = v11 * v7;
            }
            v12 = *((_DWORD *)v2 + 12);
            v2[33] = v10;
            v13 = *SF_DRAFT_PTR(__int16, (v12 + 26));
            result = v13 < v10;
            if (v13 < v10)
                v2[33] = v13;
        }
    }
    else
    {
        v15 = *((_DWORD *)v2 + 42);
        result = *SF_DRAFT_PTR(uint16, (*((_DWORD *)v2 + 12) + 40));
        v2[33] = result;
        if (v15 >= 0)
        {
            v16 = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
            result = v15 | 0x80000000;
            *((_DWORD *)v2 + 42) = v15 | 0x80000000;
            *((_DWORD *)v2 + 41) = v16;
        }
    }
    return result;
}

sint32 sub_8006FC48(sint32 a1)
{
    FUNCTION_MARKER(0x8006FC48u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v2;
    int v3;
    _DWORD *v4;
    int result;
    int v6;
    int v7;
    bool v8; // dc
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    if ((unsigned int)*SF_DRAFT_PTR(uint8, (a1 + 34)) - 1 >= 2)
    {
        v4 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 12)));
        result = v4[101] & 4;
        if (!result)
            return result;
        v11 = v4[56] + v4[60];
        v12 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 228)) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 244));
        v13 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 232)) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 248));
        v6 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 316));
        if (v6 != 4096)
        {
            if (v6)
            {
                v11 = sub_800C6D4C(v11, *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 316)));
                v12 = sub_800C6D4C(v12, v6);
                v13 = sub_800C6D4C(v13, v6);
            }
            else
            {
                v11 = 0;
                v12 = 0;
                v13 = 0;
            }
        }
        v7 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 312));
        if (v7)
        {
            v8 = v7 == 4096;
            v9 = v7 + 4096;
            if (v8)
            {
                v11 *= 2;
                v13 *= 2;
                v12 *= 2;
            }
            else
            {
                v11 = sub_800C6D4C(v11, v9);
                v12 = sub_800C6D4C(v12, v9);
                v13 = sub_800C6D4C(v13, v9);
            }
        }
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 240)) -= v11;
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 244)) -= v12;
        v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
        v3 = -v13;
    }
    else
    {
        v10 = (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 164))));
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 240)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 240));
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 244)) += v10;
        v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
        v3 = 0;
    }
    result = *SF_DRAFT_PTR(_DWORD, (v2 + 248)) + v3;
    *SF_DRAFT_PTR(_DWORD, (v2 + 248)) = result;
    return result;
}

sint32 sub_80056994(sint32 a1)
{
    uint32 entity, model, flags, table, parent, result, node, sound, identity;
    FUNCTION_MARKER(0x80056994u, "SCUS_942.40");
    entity = r_u32(r_u32(0x80115CCCu) + 76u * (uint32)a1 + 52u);
    model = r_u32(entity + 28u);
    flags = r_u32(model + 32u);
    if ((flags & 0x80000u) != 0u)
    {
        w_u32(model + 32u, flags & 0xFFFFFFEFu);
        model = r_u32(entity + 28u);
        w_u32(model + 32u, r_u32(model + 32u) & 0xFFF7FFFFu);
        sound = r_u32(entity + 12u);
        identity = (uint32)r_s16(entity + 2u);
        sub_80057BB4(5, (sint32)sound, 32000, (sint32)identity);
    }
    else
    {
        w_u32(model + 32u, flags | 0x10u);
        model = r_u32(entity + 28u);
        w_u32(model + 32u, r_u32(model + 32u) | 0x80000u);
        w_u8(entity + 33u, 100u);
    }
    w_u8(r_u32(entity + 28u) + 71u, 99u);
    identity = (uint32)r_s16(entity + 2u);
    table = r_u32(0x80115CCCu);
    node = r_u32(entity + 20u);
    w_u16(node, (uint16)r_u32(table + 76u * identity + 48u));
    for (;;)
    {
        identity = (uint32)r_s16(entity + 2u);
        table = r_u32(0x80115CCCu);
        parent = r_u32(table + 76u * identity + 48u);
        result = parent << 2;
        if ((sint32)parent < 0)
            return (sint32)result;
        result = table + 76u * parent;
        entity = r_u32(result + 52u);
        model = r_u32(entity + 28u);
        if (model == 0u)
            return (sint32)result;
        if (r_s16(r_u32(entity + 24u) + 8u) <= 0)
            continue;
        flags = r_u32(model + 32u);
        w_u32(model + 32u, (flags & 0x80000u) != 0u ? flags & 0xFFF7FFFFu : flags | 0x80000u);
        model = r_u32(entity + 28u);
        flags = r_u32(model + 32u);
        if ((flags & 0x80000u) != 0u)
        {
            w_u32(model + 32u, flags | 0x400000u);
            node = r_u32(entity + 24u);
            w_u8(entity + 33u, 1u);
            w_u16(node + 6u, 50u);
            w_u16(node + 8u, 50u);
        }
        else
        {
            w_u32(model + 32u, flags & 0xFFBFFFFFu);
            sub_80028F3C(r_s16(entity + 2u), 87);
            w_u8(entity + 33u, r_u8(r_u32(entity + 28u) + 82u) == 4u ? 80u : 0u);
            w_u8(entity + 35u, r_u8(entity + 35u) | 8u);
        }
        model = r_u32(entity + 28u);
        w_u8(model + 71u, r_u8(model + 71u) & 0xFEu);
        w_u8(r_u32(entity + 28u) + 72u, 0u);
        w_u8(r_u32(entity + 28u) + 69u, 0u);
        model = r_u32(entity + 28u);
        w_u32(model + 32u, r_u32(model + 32u) | 8u);
        model = r_u32(entity + 28u);
        w_u32(model + 32u, r_u32(model + 32u) | 0x8000u);
    }
}

sint32 sub_800E2004(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    volatile uint32 *point = SF_DRAFT_PTR(uint32, a1);
    volatile uint32 *plane = SF_DRAFT_PTR(uint32, a2);
    uint8 *valid = SF_DRAFT_PTR(uint8, a3);
    uint32 *height = SF_DRAFT_PTR(uint32, a4);
    uint32 origin[4], normal[4], first[3], second[3];
    uint32 index, determinant, numerator, point_x, point_z, u, v;
    sint32 abs_x, abs_y, abs_z, maximum, quotient;
    FUNCTION_MARKER(0x800E2004u, "SCUS_942.40");
    for (index = 0u; index < 4u; ++index)
        origin[index] = plane[index];
    for (index = 0u; index < 4u; ++index)
        normal[index] = plane[4u + index];
    abs_x = (sint32)normal[0];
    abs_z = (sint32)normal[2];
    if (abs_x < 0)
        abs_x = (sint32)(0u - normal[0]);
    abs_y = (sint32)normal[1];
    if (abs_z < 0)
        abs_z = (sint32)(0u - normal[2]);
    if (abs_y < 0)
        abs_y = (sint32)(0u - normal[1]);
    if (abs_y < abs_z)
        maximum = abs_x >= abs_z ? abs_x : abs_z;
    else
        maximum = abs_x >= abs_y ? abs_x : abs_y;
    if (maximum == abs_x)
    {
        first[0] = 0u - normal[1];
        first[1] = normal[0];
        first[2] = 0u;
        second[0] = 0u - normal[2];
        second[1] = 0u;
        second[2] = normal[0];
    }
    else if (maximum == abs_y)
    {
        first[0] = 0u;
        first[1] = 0u - normal[2];
        first[2] = normal[1];
        second[0] = normal[1];
        second[1] = 0u - normal[0];
        second[2] = 0u;
    }
    else
    {
        first[0] = normal[2];
        first[1] = 0u;
        first[2] = 0u - normal[0];
        second[0] = 0u;
        second[1] = normal[2];
        second[2] = 0u - normal[1];
    }
    determinant = second[0] * first[2] - second[2] * first[0];
    point_z = point[2] - origin[2];
    u = point_z * second[0];
    point_x = point[0] - origin[0];
    u -= point_x * second[2];
    point_x = point[0] - origin[0];
    v = point_x * first[2];
    point_z = point[2] - origin[2];
    v -= point_z * first[0];
    if (determinant == 0u)
    {
        *valid = 0u;
        return 0;
    }
    numerator = u * first[1] + v * second[1];
    if (determinant == 0xffffffffu && numerator == 0x80000000u)
    {
        fprintf(stderr, "Original sub_800E2004 BREAK6 division overflow\n");
        abort();
    }
    quotient = (sint32)numerator / (sint32)determinant;
    *height = origin[1] + (uint32)quotient;
    *valid = 1u;
    return 0;
}

void sub_800CD35C(uint32 a1)
{
    FUNCTION_MARKER(0x800CD35Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    __int16 *a1_view = SF_DRAFT_PTR(__int16, a1);
    __int16 v2;
    __int16 v3;
    __int16 v4;
    __int16 v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    __int16 v12;
    __int16 v13;
    __int16 v14;
    __int16 v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    (*SF_DRAFT_PTR(uint32, 0x8013C5D8u)) = 0;
    v2 = a1_view[5];
    a1_view[2] = -a1_view[2];
    v3 = a1_view[8];
    a1_view[5] = -v2;
    v4 = *a1_view;
    a1_view[8] = -v3;
    v5 = a1_view[3];
    *a1_view = -v4;
    v6 = -(uint16)a1_view[6];
    a1_view[3] = -v5;
    a1_view[6] = v6;
    v7 = *((_DWORD *)a1_view + 1);
    v8 = *((_DWORD *)a1_view + 2);
    (*SF_DRAFT_PTR(uint32, 0x8013C5DCu)) = *(_DWORD *)a1_view;
    (*SF_DRAFT_PTR(uint32, 0x8013C5E0u)) = v7;
    (*SF_DRAFT_PTR(uint32, 0x8013C5E4u)) = v8;
    v9 = *((_DWORD *)a1_view + 4);
    v10 = *((_DWORD *)a1_view + 5);
    (*SF_DRAFT_PTR(uint32, 0x8013C5E8u)) = *((_DWORD *)a1_view + 3);
    (*SF_DRAFT_PTR(uint32, 0x8013C5ECu)) = v9;
    (*SF_DRAFT_PTR(uint32, 0x8013C5F0u)) = v10;
    v11 = *((_DWORD *)a1_view + 7);
    (*SF_DRAFT_PTR(uint32, 0x8013C5F4u)) = *((_DWORD *)a1_view + 6);
    (*SF_DRAFT_PTR(uint32, 0x8013C5F8u)) = v11;
    sub_800E9F84(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x801311F0u))));
    sub_800C6F44(sf_draft_guest_address((uint16 *)(&(*SF_DRAFT_PTR(uint32, 0x8010E1ECu)))));
    (*SF_DRAFT_PTR(uint32, 0x8012DB60u)) = (*SF_DRAFT_PTR(uint32, 0x80130CD8u));
    (*SF_DRAFT_PTR(uint32, 0x8012DB64u)) = (*SF_DRAFT_PTR(uint32, 0x80130CDCu));
    (*SF_DRAFT_PTR(uint32, 0x8012DB68u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE0u));
    (*SF_DRAFT_PTR(uint32, 0x8012DB6Cu)) = (*SF_DRAFT_PTR(uint32, 0x80130CE4u));
    (*SF_DRAFT_PTR(uint32, 0x8012DB70u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE8u));
    (*SF_DRAFT_PTR(uint32, 0x8012DB74u)) = (*SF_DRAFT_PTR(uint32, 0x80130CECu));
    (*SF_DRAFT_PTR(uint32, 0x8012DB78u)) = (*SF_DRAFT_PTR(uint32, 0x80130CF0u));
    (*SF_DRAFT_PTR(uint32, 0x8012DB7Cu)) = (*SF_DRAFT_PTR(uint32, 0x80130CF4u));
    v12 = a1_view[5];
    a1_view[2] = -a1_view[2];
    v13 = a1_view[8];
    a1_view[5] = -v12;
    v14 = *a1_view;
    a1_view[8] = -v13;
    v15 = a1_view[3];
    *a1_view = -v14;
    v16 = -(uint16)a1_view[6];
    a1_view[3] = -v15;
    a1_view[6] = v16;
    v17 = *((_DWORD *)a1_view + 1);
    v18 = *((_DWORD *)a1_view + 2);
    (*SF_DRAFT_PTR(uint32, 0x8013C5DCu)) = *(_DWORD *)a1_view;
    (*SF_DRAFT_PTR(uint32, 0x8013C5E0u)) = v17;
    (*SF_DRAFT_PTR(uint32, 0x8013C5E4u)) = v18;
    v19 = *((_DWORD *)a1_view + 4);
    v20 = *((_DWORD *)a1_view + 5);
    (*SF_DRAFT_PTR(uint32, 0x8013C5E8u)) = *((_DWORD *)a1_view + 3);
    (*SF_DRAFT_PTR(uint32, 0x8013C5ECu)) = v19;
    (*SF_DRAFT_PTR(uint32, 0x8013C5F0u)) = v20;
    v21 = *((_DWORD *)a1_view + 7);
    (*SF_DRAFT_PTR(uint32, 0x8013C5F4u)) = *((_DWORD *)a1_view + 6);
    (*SF_DRAFT_PTR(uint32, 0x8013C5F8u)) = v21;
    sub_800E9F84(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x801311F0u))));
    (*SF_DRAFT_PTR(uint32, 0x8012FD48u)) = (*SF_DRAFT_PTR(uint32, 0x80130CD8u));
    (*SF_DRAFT_PTR(uint32, 0x8012FD4Cu)) = (*SF_DRAFT_PTR(uint32, 0x80130CDCu));
    (*SF_DRAFT_PTR(uint32, 0x8012FD50u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE0u));
    (*SF_DRAFT_PTR(uint32, 0x8012FD54u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE4u));
    (*SF_DRAFT_PTR(uint32, 0x8012FD58u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE8u));
    (*SF_DRAFT_PTR(uint32, 0x8012FD5Cu)) = (*SF_DRAFT_PTR(uint32, 0x80130CECu));
    (*SF_DRAFT_PTR(uint32, 0x8012FD60u)) = (*SF_DRAFT_PTR(uint32, 0x80130CF0u));
    (*SF_DRAFT_PTR(uint32, 0x8012FD64u)) = (*SF_DRAFT_PTR(uint32, 0x80130CF4u));
    sub_800C6F44(sf_draft_guest_address((uint16 *)(&(*SF_DRAFT_PTR(uint32, 0x8010E1ECu)))));
}

sint32 sub_800C34C0(sint16 a1, sint16 a2, uint32 a3, uint32 a4, sint16 a9)
{
    FUNCTION_MARKER(0x800C34C0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    __int16 *a3_view = SF_DRAFT_PTR(__int16, a3);
    __int16 *a4_view = SF_DRAFT_PTR(__int16, a4);
    int v10;
    int result;
    __int16 v12;
    int v13;
    int v14;
    __int16 v15;
    __int16 v16;
    int v17;
    int v18;
    bool v19; // dc
    sint32 v20;
    v10 = a1 * SF_DRAFT_PTR(uint16, 0x80116858u)[a9] / 127;
    result = v10 << 16;
    v12 = a2;
    if (!(v10 << 16))
    {
        *a4_view = 0;
        *a3_view = 0;
        return result;
    }
    v13 = 0;
    if ((uint16)(a2 - 91) < 0xB3u)
    {
        v14 = a2 - 180;
        if (v14 < 0)
            v14 = 180 - a2;
        v13 = 90 - v14;
        v15 = 180 - a2;
        v12 = v15;
        if ((v15 & 0x8000) != 0)
            v12 = v15 + 360;
    }
    if (v12 >= 91)
        v12 -= 360;
    v16 = (__int16)(127 * (v12 + 91)) / 180;
    if (*SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1880)))
    {
        v18 = v16;
        v19 = v16 != 64;
        v20 = v16 < 64;
        if (v19)
        {
            if (v20)
            {
                *a3_view = v10;
                *a4_view = (__int16)v10 * v18 / 64;
                goto LABEL_20;
            }
            *a3_view = (__int16)v10 * (127 - v18) / 64;
        }
        else
        {
            *a3_view = v10;
        }
        *a4_view = v10;
    LABEL_20:
        if (v13)
        {
            *a3_view -= *a3_view / 4 * v13 / 90;
            *a4_view -= (__int16)(*a4_view / 4 * v13) / 90;
        }
        goto LABEL_22;
    }
    if (v13)
    {
        v17 = 95 * (__int16)v10 / 100;
        *a4_view = v17;
        *a3_view = v17;
    }
    else
    {
        *a4_view = v10;
        *a3_view = v10;
    }
LABEL_22:
    if (!*a3_view)
        *a3_view = 1;
    result = 1;
    if (!*a4_view)
        *a4_view = 1;
    return result;
}

sint32 sub_800C3814(sint32 a1, sint16 a2)
{
    uint32 state;
    uint32 active;
    uint32 slot;
    FUNCTION_MARKER(0x800C3814u, "SCUS_942.40");
    state = r_u32(SF_DRAFT_GP + 0x7ACu);
    if (state != 0u && state != 3u && a1 != 2)
    {
        if (state == 2u)
            sub_800C4AC4();
        {
            sint16 volume = (sint16)r_u16(SF_DRAFT_GP + 0xE44u);
            w_u32(SF_DRAFT_GP + 0x7ACu, 0u);
            sub_800C3814(0, volume);
        }
        sub_800C3814(1, (sint16)r_u16(SF_DRAFT_GP + 0xCE0u));
    }
    slot = 0x80116858u + ((uint32)a1 << 1);
    w_u16(slot, (uint16)a2);
    if (a2 >= 128)
        w_u16(slot, 127u);
    active = r_u32(SF_DRAFT_GP + 0x75Cu);
    if (active != 0u)
    {
        sint16 index = (sint16)r_u16(SF_DRAFT_GP + 0x764u);
        if (a1 == (sint32)r_u8(active + (uint32)((sint32)index * 24) + 18u))
            sub_800C0D4C();
    }
    if (a1 == 2)
    {
        sint32 scaled = ((sint32)(sint16)r_u16(SF_DRAFT_GP + 0x7A0u) * 60) / 100;
        sint16 left;
        sint16 right;
        uint32 left_output = sf_draft_guest_address(&left);
        uint32 right_output = sf_draft_guest_address(&right);
        if ((sint16)scaled >= 128)
            scaled = 127;
        sub_800C34C0((sint16)scaled, (sint16)r_u16(SF_DRAFT_GP + 0x7A2u), left_output, right_output, 2);
        sub_800F74F4(0, left, right);
    }
    for (slot = 0x801311B0u; slot < 0x801311F0u; slot += 4u)
    {
        uint32 entry = r_u32(slot);
        if (entry != 0u)
        {
            uint32 count = r_u8(entry + 12u);
            uint32 records = r_u32(entry + 4u);
            uint32 index = 0u;
            while ((sint32)(sint16)(uint16)index < (sint32)count)
            {
                uint32 record = records + (uint32)((sint32)(sint16)(uint16)index * 24);
                uint32 kind = r_u16(record) & 31u;
                if (((kind == 1u || kind == 3u) && (sint8)r_u8(record + 16u) != -1) || kind == 2u)
                {
                    sub_800C12E4((sint32)r_u32(slot), (sint16)(uint16)index, r_u8(record + 9u), 0, 2);
                }
                index += 1u;
            }
        }
    }
    return 0;
}

uint32 sub_80028C7C(sint32 a1)
{
    FUNCTION_MARKER(0x80028C7Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v2;
    int v3;
    _DWORD *v4;
    int *result;
    int v6;
    int v7;
    int v9;
    uint8 *v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v20;
    v2 = 76 * a1;
    v3 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v4 = SF_DRAFT_PTR(_DWORD, sub_800CB720(*SF_DRAFT_PTR(_DWORD, (v3 + 8)), 0x4000));
    if (v4 || (v4 = SF_DRAFT_PTR(_DWORD, sub_800CB720(*SF_DRAFT_PTR(_DWORD, (v3 + 8)), 0)), result = 0, v4))
    {
        v6 = v4[5];
        v7 = sub_800CB764(sf_draft_guest_address(v4));
        if (v7)
        {
            if (a1 != 666 && *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 60)
                goto LABEL_18;
            v9 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 8)) + 16));
            if ((*SF_DRAFT_PTR(_DWORD, (v9 + 40)) & 0x2000000) != 0)
                v10 = SF_DRAFT_PTR(uint8, *SF_DRAFT_PTR(uint32, (v9 + 44)));
            else
                v10 = SF_DRAFT_PTR(uint8, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (v9 + 44)) + 348)));
            if (*v10 == 234)
                v10 += 256 * v10[2] + v10[1];
            if (SF_DRAFT_PTR(uint8, v4[3]) == v10)
            {
                v11 = 0;
                if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 484)))
                {
                    do
                    {
                        v12 = v11 + 1;
                        v13 = (v11 + 1) << 12;
                        v14 = v13 >> 31;
                        v15 = (uint64)(2454267027LL * v13) >> 32;
                        v16 = 4 * v11;
                        SF_DRAFT_PTR(uint8, 0x80119408u)[4 * v11] = sub_800EA474(v13 / 14) / 4096;
                        v17 = sub_800EA474((v15 >> 2) - v14);
                        v18 = v17 >> 11;
                        if (v17 < 0)
                            v18 = (v17 + 2047) >> 11;
                        SF_DRAFT_PTR(uint8, 0x80119409u)[v16] = 98 - v18;
                        SF_DRAFT_PTR(uint8, 0x8011940Au)[v16] = 25 - sub_800EA474((v15 >> 2) - v14) / 1024;
                        ++v11;
                    } while (v12 < 14);
                    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 484)) = 0;
                }
                return 0x80119404u + 4u * v6;
            }
            else
            {
            LABEL_18:
                v20 = 4 * v6;
                if (v6 != 1)
                    return (uint32)(v7 + v20 - 4);
                v20 = 4;
                if (v4[11])
                    return (uint32)(v7 + v20 - 4);
                else
                    return (uint32)(v7 + 4);
            }
        }
        else
        {
            return 0;
        }
    }
    return sf_draft_guest_address(result);
}

uint32 sub_80016568(uint32 a1)
{
    FUNCTION_MARKER(0x80016568u, "SCUS_942.40");
    uint32 file_information[6];
    char path[56];
    uint32 path_address = sf_draft_guest_address(path);
    uint32 prefix = 0x80115C70u;
    uint32 offset;
    sint32 status = 5;
    uint8 initial;

    sub_800CDA74(0);
    sub_800405F4(0, 0);
    if ((uint8)sub_800826C0() == 0u)
    {
        if ((uint8)sub_8006C180() != 0u)
            sub_8006C7CC();
        else
        {
            sub_80082DE0();
            sub_80082EC0();
            sub_800826C0();
        }
    }
    sub_80015B68(SF_DRAFT_PTR(const char, 0x80010050u), 0);
    sub_8013E27C(25);
    if (r_u8(0x8013D558u) != 0u)
    {
        sub_8001629C();
        w_u8(0x8013D558u, 0u);
    }
    initial = *SF_DRAFT_PTR(uint8, a1);
    if (initial != 92u && initial != 47u)
        prefix = 0x800100B4u;
    sub_800EC924(path_address, 0x800100A8u, prefix, a1);
    /* Original copies nine sixteen-byte groups then three words */
    for (offset = 0u; offset < 144u; offset += 16u)
    {
        uint32 word0 = *SF_DRAFT_PTR(uint32, a1 + offset);
        uint32 word1 = *SF_DRAFT_PTR(uint32, a1 + offset + 4u);
        uint32 word2 = *SF_DRAFT_PTR(uint32, a1 + offset + 8u);
        uint32 word3 = *SF_DRAFT_PTR(uint32, a1 + offset + 12u);
        w_u32(0x8013D4C0u + offset, word0);
        w_u32(0x8013D4C4u + offset, word1);
        w_u32(0x8013D4C8u + offset, word2);
        w_u32(0x8013D4CCu + offset, word3);
    }
    {
        uint32 word0 = *SF_DRAFT_PTR(uint32, a1 + 144u);
        uint32 word1 = *SF_DRAFT_PTR(uint32, a1 + 148u);
        uint32 word2 = *SF_DRAFT_PTR(uint32, a1 + 152u);
        w_u32(0x8013D550u, word0);
        w_u32(0x8013D554u, word1);
        w_u32(0x8013D558u, word2);
    }
    if (r_u8(SF_DRAFT_GP + 32u) == 0u && sub_800DEB50((sint32)sf_draft_guest_address(file_information), (sint32)path_address) != 0)
    {
        sub_8013E258(0);
        if (*SF_DRAFT_PTR(uint8, a1 + 136u) != 0u)
            sub_800D79E8(1);
        w_u32(0x8013D554u, *SF_DRAFT_PTR(sint16, a1 + 134u) != 0 ? 135000u : 155000u);
        status = sub_8013E28C(path_address, *SF_DRAFT_PTR(sint16, a1 + 132u), *SF_DRAFT_PTR(sint16, a1 + 134u), -1, (sint32)0x8001629Cu, 0x8014C0A8u, (sint32)r_u32(0x8013D554u));
    }
    if (status != 0)
    {
        uint32 mode = r_u32(SF_DRAFT_GP + 16u);
        w_u8(0x8013D558u, 0u);
        if (mode != 4u)
            sub_800CA718();
        if (r_u32(SF_DRAFT_GP + 16u) == 3u)
            sub_80016094();
        return sub_8001629C();
    }
    if (r_u32(SF_DRAFT_GP + 16u) != 4u)
        sub_800CA718();
    return (uint32)sub_800164AC();
}

sint32 sub_800CBCB8(sint32 a1, sint32 a2, sint32 a3, uint32 a4, sint8 a9)
{
    FUNCTION_MARKER(0x800CBCB8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a4_view = SF_DRAFT_PTR(_DWORD, a4);
    int v13;
    int *v14;
    int result;
    int v17;
    int i;
    int v19;
    int v20;
    _DWORD *v21;
    int v22;
    int v23;
    int v24;
    unsigned int v25;
    int v26;
    int v27;
    int v28;
    unsigned int v29;
    bool v30; // dc
    sint32 v31;
    int v32;
    v13 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 32));
    v14 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (v13 + 16)));
    if (a1 == (*SF_DRAFT_PTR(uint32, 0x8012D734u)))
    {
        if (!*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2212)) || (*SF_DRAFT_PTR(uint32, 0x8013B94Cu)) != *SF_DRAFT_PTR(_DWORD, (a1 + 24)))
            sub_800CBC7C();
        v14 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011650Cu)));
    }
    sub_800E95B4(300);
    result = 0;
    if (v14)
    {
        v17 = 0;
        if (*v14 <= 0)
            return 0;
        for (i = 0;; i += 60)
        {
            v19 = v14[1] + i;
            v20 = *SF_DRAFT_PTR(_DWORD, (v19 + 4));
            if (v20 == *SF_DRAFT_PTR(_DWORD, (a1 + 24)))
                break;
            if (++v17 >= *v14)
                return 0;
        }
        v21 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (4 * a2 + v20)));
        v22 = a9 ? sub_800D2DD4(a1, a2, a3, sf_draft_guest_address(a4_view)) : sub_800D2BF0(v13, a2, a3, a1);
        if (!v22)
            return 0;
        v23 = 0;
        v24 = *SF_DRAFT_PTR(_DWORD, (v19 + 12));
        v25 = v22;
        if (!a9)
        {
            sub_800EADF4(sf_draft_guest_address(v21), a3, sf_draft_guest_address(a4_view));
            *a4_view += v21[5];
            a4_view[1] += v21[6];
            v26 = (sint32)(0u - (a4_view[1]));
            a4_view[2] += v21[7];
            a4_view[1] = v26;
        }
        if (v24 == 10)
            return 0;
        v27 = v24;
        if (v24 > 0)
        {
            v28 = v19;
            while (1)
            {
                v29 = *SF_DRAFT_PTR(_DWORD, (v28 + 16));
                v30 = v25 == v29;
                v31 = v25 < v29;
                if (v30)
                    return 0;
                v27 = v24;
                if (v31)
                    break;
                ++v23;
                v28 += 4;
                if (v23 >= v24)
                {
                    v27 = v24;
                    break;
                }
            }
        }
        if (v23 < v27)
        {
            v32 = 4 * v27 + v19;
            do
            {
                --v27;
                *SF_DRAFT_PTR(_DWORD, (v32 + 16)) = *SF_DRAFT_PTR(_DWORD, (v32 + 12));
                v32 -= 4;
            } while (v23 < v27);
        }
        *SF_DRAFT_PTR(_DWORD, (4 * v23 + v19 + 16)) = v25;
        result = 1;
        ++*SF_DRAFT_PTR(_DWORD, (v19 + 12));
    }
    return result;
}

sint32 sub_8004C0E8(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8004C0E8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    __int16 v11;
    sint32 v12;
    int v13;
    int v14;
    int result;
    bool v16; // dc
    v3 = 0;
    v4 = 0;
    v5 = -1;
    v6 = 0;
    if (a2)
    {
        v3 = a2;
    }
    else
    {
        v7 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2676));
        if (*SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2696)) < v7)
        {
            v8 = 0;
            if (v7 > 0)
            {
                v9 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2676));
                v10 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3256));
                while (1)
                {
                    v11 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2708)) + 1;
                    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2708)) = v11;
                    if (v11 >= v9)
                        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2708)) = 0;
                    ++v8;
                    if (*SF_DRAFT_PTR(__int16, (52 * *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2708)) + v10 + 30)) == -1)
                        break;
                    if (v8 >= v9)
                        goto LABEL_12;
                }
                v3 = 52 * *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2708)) + v10;
            }
        }
    }
LABEL_12:
    if (!v3)
        return v3;
    if ((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3348)) & 0x100000) == 0)
    {
        v12 = a1 < 4;
        if (a1 >= 9)
        {
            v12 = a1 < 4;
            if (*SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3708)) + a1 >= 129)
            {
                a1 >>= 2;
                v12 = a1 < 4;
            }
        }
        if (!v12 && *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3708)) + a1 >= 121)
            a1 >>= 1;
    }
    v13 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2692));
    if (v13 < 160)
    {
        v14 = 52 * v13;
        do
        {
            if (SF_DRAFT_PTR(uint16, 0x80137764u)[v14] == -32768)
            {
                if (v5 >= 0)
                    SF_DRAFT_PTR(uint16, 0x80137766u)[52 * v6] = v13;
                else
                    v5 = v13;
                ++v4;
                ++*SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3708));
                v6 = v13;
                if (v4 == a1)
                    break;
            }
            ++v13;
            v14 += 52;
        } while (v13 < 160);
    }
    result = 0;
    if (v5 >= 0)
    {
        if (a2)
        {
            SF_DRAFT_PTR(uint16, 0x80137766u)[52 * v6] = *SF_DRAFT_PTR(_WORD, (v3 + 30));
        }
        else
        {
            SF_DRAFT_PTR(uint16, 0x80137766u)[52 * v6] = -1;
            sub_8004BE10(v3);
        }
        v16 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2692)) >= v6;
        *SF_DRAFT_PTR(_WORD, (v3 + 30)) = v5;
        if (!v16)
        {
            *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2692)) = v6;
            return v3;
        }
        return v3;
    }
    return result;
}

uint32 sub_800C8EE8(sint32 a1)
{
    uint32 tag, rectangle, mode_packet, index, packet, original, link, result;
    sint32 floor, fade, step;
    uint16 page;
    uint8 color;
    FUNCTION_MARKER(0x800C8EE8u, "SCUS_942.40");
    index = (uint32)(sint32)r_s16(SF_DRAFT_GP + 2038u);
    tag = *SF_DRAFT_PTR(uint32, (uint32)a1 + 4u);
    rectangle = 0x801223C8u + (index << 4);
    mode_packet = 0x801223E8u + index * 12u;
    floor = r_u8(0x800D37F4u);
    if (r_u8(SF_DRAFT_GP + 2181u))
    {
        w_u8(SF_DRAFT_GP + 2181u, 0u);
        w_u16(SF_DRAFT_GP + 2162u, (uint16)floor);
        for (index = 0u; index < 2u; ++index)
        {
            packet = 0x801223C8u + index * 16u;
            w_u8(packet + 3u, 3u);
            w_u8(packet + 7u, 0x60u);
            color = r_u8(packet + 7u);
            w_u16(packet + 8u, (uint16)-208);
            w_u16(packet + 10u, (uint16)-136);
            w_u16(packet + 12u, 416u);
            w_u16(packet + 14u, 272u);
            w_u8(packet + 7u, color | 2u);
            page = (uint16)sub_800E7F14(1, 2, 0, 0);
            sub_800E5ED4((sint32)(0x801223E8u + index * 12u), 0, 1, page, 0);
        }
    }
    fade = r_s16(SF_DRAFT_GP + 2162u);
    if ((fade == 255 && r_s16(SF_DRAFT_GP + 2160u) > 0) || (fade == floor && r_s16(SF_DRAFT_GP + 2160u) < 0))
    {
        sub_800CA6EC();
        color = (uint8)r_s16(SF_DRAFT_GP + 2162u);
    }
    else
    {
        fade = (sint16)(uint16)(r_u16(SF_DRAFT_GP + 2162u) + r_u16(SF_DRAFT_GP + 2160u));
        w_u16(SF_DRAFT_GP + 2162u, (uint16)fade);
        if (fade >= 256)
            w_u16(SF_DRAFT_GP + 2162u, 255u);
        else if (fade < floor)
            w_u16(SF_DRAFT_GP + 2162u, (uint16)floor);
        color = 255u;
        if (r_s32(SF_DRAFT_GP + 2016u) >= 8)
        {
            step = r_s16(SF_DRAFT_GP + 2160u);
            color = (uint8)floor;
            if (step)
                color = (uint8)r_s16(SF_DRAFT_GP + 2162u);
        }
    }
    original = r_u32(rectangle);
    w_u8(rectangle + 4u, color);
    w_u8(rectangle + 5u, color);
    w_u8(rectangle + 6u, color);
    w_u32(rectangle, (original & 0xFF000000u) | (r_u32(tag) & 0xFFFFFFu));
    link = (r_u32(tag) & 0xFF000000u) | (rectangle & 0xFFFFFFu);
    w_u32(tag, link);
    w_u32(mode_packet, (r_u32(mode_packet) & 0xFF000000u) | (link & 0xFFFFFFu));
    result = (r_u32(tag) & 0xFF000000u) | (mode_packet & 0xFFFFFFu);
    w_u32(tag, result);
    return result;
}

sint32 sub_800358DC(uint32 a1, sint8 a2, uint32 a3)
{
    volatile uint32 *input = SF_DRAFT_PTR(uint32, a1);
    volatile uint32 *output = SF_DRAFT_PTR(uint32, a3);
    uint32 words[4], scale, index;
    sint32 length, denominator, quotients[3], x, z, magnitude;
    FUNCTION_MARKER(0x800358DCu, "SCUS_942.40");
    if ((uint8)a2 == 0u)
    {
        output[1] = 0u;
        x = (sint32)input[0];
        if (x != 0 && (sint32)input[2] != 0)
        {
            output[0] = (uint32)(x > 0 ? 2896 : -2896);
            magnitude = 2896;
        }
        else
        {
            if (x > 0)
                output[0] = 4096u;
            else
                output[0] = (uint32)((sint32)input[0] >> 31) & 0xfffff000u;
            magnitude = 4096;
        }
        z = (sint32)input[2];
        if (z > 0)
        {
            output[2] = (uint32)magnitude;
            return z;
        }
        output[2] = (uint32)(z >> 31) & (uint32)(-magnitude);
        return -magnitude;
    }
    words[0] = input[0];
    words[1] = input[1];
    words[2] = input[2];
    words[3] = input[3];
    output[0] = words[0];
    output[1] = words[1];
    output[2] = words[2];
    output[3] = words[3];
    output[1] = 0u;
    sub_800D9580(a3, sf_draft_guest_address(&length));
    if (length < 56)
    {
        output[0] = 0u;
        output[1] = 0u;
        output[2] = 0u;
        return 1;
    }
    if (length >= 127)
        return sub_800C720C(a3, a3);
    scale = (uint32)(length - 55);
    denominator = 72 * length;
    for (index = 0u; index < 3u; ++index)
    {
        output[index] = (output[index] << 12) * scale;
        quotients[index] = (sint32)output[index] / denominator;
    }
    output[0] = (uint32)quotients[0];
    output[1] = (uint32)quotients[1];
    output[2] = (uint32)quotients[2];
    return quotients[2];
}

uint32 sub_800865EC(uint32 a1)
{
    FUNCTION_MARKER(0x800865ECu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint32 *a1_view = SF_DRAFT_PTR(uint32, a1);
    int **v1;
    int *v2;
    int *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    unsigned int result;
    __int16 v15;
    uint16 v16;
    __int16 v17;
    __int16 v18;
    __int16 v19;
    __int16 v20;
    v1 = (int **)a1_view;
    v2 = SF_DRAFT_PTR(int, sub_8008634C(*a1_view, 1));
    v15 = *(_WORD *)v2;
    v17 = *((_WORD *)v2 + 1);
    v19 = *((_WORD *)v2 + 2);
    v20 = *((_WORD *)v2 + 3);
    while (1)
    {
        v1 = SF_DRAFT_PTR(int *, v1[2]);
        if (!v1)
            break;
        v4 = SF_DRAFT_PTR(int, sub_8008634C(sf_draft_guest_address(*v1), 1));
        v5 = *(__int16 *)v4;
        if (v5 < v15)
        {
            v19 += v15 - v5;
            v15 = *(_WORD *)v4;
        }
        v6 = *((__int16 *)v4 + 1);
        if (v6 < v17)
        {
            v20 += v17 - v6;
            v17 = *((_WORD *)v4 + 1);
        }
        v7 = *(__int16 *)v4;
        v8 = *((__int16 *)v4 + 2);
        if (v15 + v19 < v7 + v8)
            v19 = v7 + v8 - v15;
        v9 = *((__int16 *)v4 + 1);
        v10 = *((__int16 *)v4 + 3);
        if (v17 + v20 < v9 + v10)
            v20 = v9 + v10 - v17;
    }
    v16 = v15 - 3;
    v18 = v17 - 2;
    v11 = v18 << 16;
    v12 = (v18 + (__int16)(v20 + 4)) << 16;
    v13 = (uint16)(v16 + v19 + 7);
    (*SF_DRAFT_PTR(uint32, 0x80121084u)) = v16 | v11;
    (*SF_DRAFT_PTR(uint32, 0x80121088u)) = v16 | v12;
    (*SF_DRAFT_PTR(uint32, 0x8012108Cu)) = v13 | v11;
    (*SF_DRAFT_PTR(uint32, 0x80121090u)) = v13 | v12;
    if (!(*SF_DRAFT_PTR(uint32, 0x80121074u)))
        sub_800C7BB0(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3324)), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80121074u))));
    result = (((*SF_DRAFT_PTR(uint32, 0x801168E8u)) | 0x28000000u) >> 24) | 2;
    (*SF_DRAFT_PTR(uint32, 0x80121080u)) = (*SF_DRAFT_PTR(uint32, 0x801168E8u)) | 0x2A000000;
    return result;
}

sint32 sub_8004B57C(sint16 a1)
{
    FUNCTION_MARKER(0x8004B57Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v1;
    int result;
    int v3;
    int *v4;
    int v5;
    int *v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int *v13;
    v1 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    result = 0;
    if (v1)
    {
        v3 = *SF_DRAFT_PTR(_DWORD, (v1 + 12));
        if (!v3)
            return 0;
        v4 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (v3 + 408)));
        v5 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        if (!v4)
            return 0;
        v6 = v4;
        sub_8004B20C(v5, sf_draft_guest_address(&v13));
        if ((unsigned int)(v6[16] - 6) < 2 && ((v7 = v6[15], v7 == 5) || (unsigned int)(v7 - 8) < 2))
        {
            if ((*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v1 + 16))) & 0x100000) != 0)
                sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), 57);
            result = 1;
            if ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 16)) + 4)) & 0x30) != 0)
            {
                sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), v6[15]);
                sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), 5);
                v8 = *SF_DRAFT_PTR(__int16, (v1 + 2));
                v9 = 100;
                goto LABEL_27;
            }
        }
        else
        {
            v10 = v6[16];
            if (v10 != 5 && (unsigned int)(v10 - 8) >= 2 || (unsigned int)(v6[15] - 6) >= 2)
            {
                v12 = v6[15];
                if (v12 == 5 || (unsigned int)(v12 - 8) < 2)
                {
                    v8 = *SF_DRAFT_PTR(__int16, (v1 + 2));
                    v9 = 5;
                    if (v8 != (*SF_DRAFT_PTR(uint32, 0x801169D4u)))
                        goto LABEL_27;
                }
                else
                {
                    v8 = *SF_DRAFT_PTR(__int16, (v1 + 2));
                }
                v9 = v6[15];
            LABEL_27:
                sub_80028F3C(v8, v9);
                return 1;
            }
            if ((*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v1 + 16))) & 0x100000) != 0)
            {
                v11 = *SF_DRAFT_PTR(__int16, (v1 + 2));
                if (v11 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || v6[4] >= 0)
                    sub_80028F3C(v11, 58);
            }
            result = 1;
            if ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 16)) + 4)) & 0x30) != 0)
            {
                sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), v6[15]);
                sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), 7);
                v8 = *SF_DRAFT_PTR(__int16, (v1 + 2));
                v9 = 100;
                goto LABEL_27;
            }
        }
    }
    return result;
}

sint32 sub_80060500(sint32 a1)
{
    FUNCTION_MARKER(0x80060500u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v3;
    int result;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    sub_80017140(a1, sf_draft_guest_address(&v9), sf_draft_guest_address(&v10));
    v3 = 1;
    if (!v10)
    {
        result = 0;
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 35)) |= 2u;
        return result;
    }
    result = 0;
    if (!*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3764)))
    {
        v5 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2876));
        if (v5 < 0 || (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2880))) >= 0x14)
        {
            if ((*SF_DRAFT_PTR(uint8, 0x801169FCu)) && (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 7)
            {
                v3 = 0;
                if (a1 == (*SF_DRAFT_PTR(uint16, 0x80116AAEu)))
                {
                    if (*SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 3360)) >= *SF_DRAFT_PTR(__int16, ((*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 82)))
                    {
                        if (*SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3604)) < 0)
                            sub_8005FD4C(0, a1);
                    }
                    else
                    {
                        v3 = 1;
                    }
                }
                goto LABEL_27;
            }
            if (*SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 3360)) < *SF_DRAFT_PTR(__int16, ((*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 82)))
            {
            LABEL_27:
                result = v3;
                if (v3)
                {
                    v8 = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
                    ++*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3360));
                    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3172)) = v8;
                    return v3;
                }
                return result;
            }
            if (*SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3604)) < 0)
            {
                v6 = 0;
                if ((unsigned int)(uint16)(*SF_DRAFT_PTR(uint16, 0x80130C88u)) - 11 < 2 || (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 13)
                {
                    v7 = a1 == 666 ? 666 : *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
                    if (v7 == 101 || v7 == 92)
                        v6 = 1;
                }
                sub_8005FD4C(v6, a1);
            }
        }
        else if (v5 == a1)
        {
            *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2876)) = -1;
            goto LABEL_27;
        }
        v3 = 0;
        goto LABEL_27;
    }
    return result;
}

sint32 sub_800732D8(sint32 a1, sint32 a2, sint32 a3, uint32 a4)
{
    volatile uint32 *items = SF_DRAFT_PTR(uint32, (uint32)a2);
    uint32 *output = SF_DRAFT_PTR(uint32, a4);
    uint32 sum[4], selected, index, item, factor, values[3];
    sint32 threshold, length, result;
    FUNCTION_MARKER(0x800732D8u, "SCUS_942.40");
    sum[0] = r_u32(0x800122D4u);
    sum[1] = r_u32(0x800122D8u);
    sum[2] = r_u32(0x800122DCu);
    sum[3] = r_u32(0x800122E0u);
    selected = 0u;
    for (index = 0u; (sint32)index < a3; ++index)
    {
        item = items[index];
        threshold = r_s32((uint32)a1 + 36u);
        if (r_s32(item + 72u) >= threshold)
        {
            sum[0] += r_u32(item + 68u);
            item = items[index];
            sum[1] += r_u32(item + 72u);
            item = items[index];
            ++selected;
            sum[2] += r_u32(item + 76u);
        }
    }
    result = (sint32)selected < 2;
    if ((sint32)selected <= 0)
        return result;
    factor = 52428u;
    if ((sint32)selected >= 2)
    {
        sub_800D9580(sf_draft_guest_address(sum), sf_draft_guest_address(&length));
        if (length == 0)
        {
            fprintf(stderr, "Original sub_800732D8 BREAK7 zero vector length\n");
            abort();
        }
        factor = (uint32)(214745088 / length);
    }
    factor = 0u - factor;
    for (index = 0u; (sint32)index < a3; ++index)
    {
        item = items[index];
        threshold = r_s32((uint32)a1 + 36u);
        if (r_s32(item + 72u) >= threshold)
        {
            values[0] = (uint32)sub_800C6D4C(r_s32(item + 68u), (sint32)factor);
            item = items[index];
            values[1] = (uint32)sub_800C6D4C(r_s32(item + 72u), (sint32)factor);
            item = items[index];
            values[2] = (uint32)sub_800C6D4C(r_s32(item + 76u), (sint32)factor);
            output[0] += values[0];
            output[1] += values[1];
            output[2] += values[2];
        }
        result = (sint32)(index + 1u) < a3;
    }
    return result;
}

sint32 sub_80022120(void)
{
    FUNCTION_MARKER(0x80022120u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v1;
    int v2;
    int v3;
    int v4;
    int result;
    int v6;
    int *v7;
    int *v8;
    int *v9;
    int *v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    if ((uint8)((*SF_DRAFT_PTR(uint8, 0x80119234u)) + 1) >= 2u)
    {
        v1 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284));
        v11 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v1)) + 20));
        v12 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v1)) + 24));
        v2 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v1)) + 28));
        v12 = -v12;
        v13 = v2;
        v3 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v1)) + 4));
        v14 = v3;
        v15 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v1)) + 10));
        v4 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v1)) + 16));
        v15 = -v15;
        v16 = v4;
        v14 = sub_800C6D4C(v3, 32);
        v15 = sub_800C6D4C(v15, 32);
        v16 = sub_800C6D4C(v16, 32);
        v11 += v14;
        v12 += v15;
        v13 += v16;
        sub_800DC8AC(*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x8011922Cu)) + 12)), 0, sf_draft_guest_address(&v11));
    }
    result = (*SF_DRAFT_PTR(uint32, 0x80119230u));
    if ((*SF_DRAFT_PTR(uint32, 0x80119230u)))
    {
        sub_80018430(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (SF_DRAFT_GP + 284)))), sf_draft_guest_address(&v17));
        result = (*SF_DRAFT_PTR(uint32, 0x80119230u));
        v6 = 0;
        if ((*SF_DRAFT_PTR(uint32, 0x80119230u)) >= 0)
        {
            if ((*SF_DRAFT_PTR(uint32, 0x80119230u)) > 0)
            {
                v9 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80130D38u)));
                do
                {
                    v10 = v9;
                    v9 += 8;
                    ++v6;
                    sub_800C7BF8(v17, sf_draft_guest_address(v10));
                } while (v6 < 13);
                result = (sint32)(0u - (*SF_DRAFT_PTR(uint32, 0x80119230u)));
                (*SF_DRAFT_PTR(uint32, 0x80119230u)) = (sint32)(0u - (*SF_DRAFT_PTR(uint32, 0x80119230u)));
            }
        }
        else
        {
            v7 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80130D38u)));
            do
            {
                v8 = v7;
                v7 += 8;
                ++v6;
                sub_800C7BB0(v17, sf_draft_guest_address(v8));
            } while (v6 < 13);
            result = (*SF_DRAFT_PTR(uint32, 0x80119230u));
            if ((*SF_DRAFT_PTR(uint32, 0x80119230u)) < 0)
                result = (sint32)(0u - (*SF_DRAFT_PTR(uint32, 0x80119230u)));
            (*SF_DRAFT_PTR(uint32, 0x80119230u)) = result;
        }
    }
    return result;
}

BOOL sub_80078DF4(void)
{
    FUNCTION_MARKER(0x80078DF4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    unsigned int v0;
    int *v1;
    bool v2;
    unsigned int v3;
    bool v4; // dc
    sint32 v5;
    int v6;
    unsigned int v7;
    int v8;
    sint32 result;
    int v10;
    unsigned int v11;
    int v12;
    int *v13;
    int *v14;
    unsigned int v15;
    int v16;
    (*SF_DRAFT_PTR(uint32, 0x80116B74u)) = 0;
    v0 = 0;
    sub_80077BFC(sf_draft_guest_address((uint16 *)(&(*SF_DRAFT_PTR(uint32, 0x8010E1ECu)))));
    if ((*SF_DRAFT_PTR(uint32, 0x801169ACu)))
    {
        v1 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, 0x8012C170u));
        while (1)
        {
            v2 = v1[2] == 1;
            v3 = sub_80077B48(v1[8], v1[9], v1[10]);
            v4 = (*SF_DRAFT_PTR(uint8, 0x80116B88u)) == 0;
            v1[1] = v3;
            if (v4)
                break;
            v5 = v2;
            if (v1[2])
                goto LABEL_7;
            if (v3 >= 0x50)
                break;
        LABEL_16:
            ++v0;
            v1 += 20;
            if (v0 >= (*SF_DRAFT_PTR(uint32, 0x801169ACu)))
                goto LABEL_17;
        }
        v5 = v2;
    LABEL_7:
        if (v5)
        {
            v6 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(_WORD, (v1[18] + 20)) & 0x3FF) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
            if (v6)
            {
                if ((unsigned int)*SF_DRAFT_PTR(uint8, (v6 + 34)) - 1 < 2)
                    v1[1] = sub_80077B48(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 20)), (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 24)))), *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 28)));
            }
        }
        v7 = v1[1];
        if (v7 >= 0x21 && v2)
            v1[1] = v7 - 32;
        if (v1[1])
        {
            v8 = (*SF_DRAFT_PTR(uint32, 0x80116B74u))++;
            SF_DRAFT_PTR(uint32, 0x80130F10u)[v8] = (int)v1;
        }
        goto LABEL_16;
    }
LABEL_17:
    result = (unsigned int)(*SF_DRAFT_PTR(uint32, 0x80116B74u)) < 2;
    if ((unsigned int)(*SF_DRAFT_PTR(uint32, 0x80116B74u)) >= 2)
    {
        v10 = (*SF_DRAFT_PTR(uint32, 0x80116B74u)) - 1;
        if ((*SF_DRAFT_PTR(uint32, 0x80116B74u)))
        {
            v11 = 0;
            do
            {
                v12 = 0;
                if (v10)
                {
                    v13 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80130F14u)));
                    v14 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80130F10u)));
                    v15 = (*SF_DRAFT_PTR(uint32, 0x80116B74u)) - 1;
                    do
                    {
                        v16 = *v14;
                        if (*SF_DRAFT_PTR(_DWORD, (*v13 + 4)) < *SF_DRAFT_PTR(_DWORD, (*v14 + 4)))
                        {
                            ++v12;
                            *v14 = *v13;
                            *v13 = v16;
                        }
                        ++v13;
                        result = ++v11 < v15;
                        ++v14;
                    } while (v11 < v15);
                }
                v11 = 0;
            } while (v12);
        }
    }
    return result;
}

sint32 sub_80071384(uint32 a1)
{
    FUNCTION_MARKER(0x80071384u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int v2;
    int result;
    int v4;
    int v5;
    _DWORD *v6;
    _DWORD *v7;
    int v8;
    int v9;
    if (!a1_view)
        return 0;
    v2 = a1_view[3];
    result = 0;
    if (!v2)
        return result;
    if (!*SF_DRAFT_PTR(_DWORD, (v2 + 416)))
        return 0;
    *SF_DRAFT_PTR(_DWORD, (v2 + 404)) &= ~0x100000u;
    *SF_DRAFT_PTR(_DWORD, (a1_view[3] + 404)) &= ~4u;
    *SF_DRAFT_PTR(_DWORD, (a1_view[3] + 404)) &= ~2u;
    v4 = *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1_view[3] + 416)));
    if (v4 == 1)
    {
        sub_8006ED44(sf_draft_guest_address(a1_view));
    }
    else
    {
        result = 0;
        if (v4 != 3)
            return result;
        sub_8006F8A0(sf_draft_guest_address(a1_view));
    }
    sub_8006F8C0(sf_draft_guest_address(a1_view));
    v5 = *SF_DRAFT_PTR(_DWORD, (a1_view[3] + 416));
    *SF_DRAFT_PTR(_DWORD, (v5 + 12)) = 0;
    *SF_DRAFT_PTR(_DWORD, (v5 + 16)) = 0;
    *SF_DRAFT_PTR(_DWORD, (v5 + 20)) = 0;
    *SF_DRAFT_PTR(_BYTE, (v5 + 28)) = 1;
    *SF_DRAFT_PTR(_BYTE, (v5 + 29)) = 1;
    *SF_DRAFT_PTR(_BYTE, (v5 + 30)) = 1;
    *SF_DRAFT_PTR(_BYTE, (v5 + 31)) = 1;
    v6 = SF_DRAFT_PTR(_DWORD, a1_view[3]);
    v7 = v6 + 97;
    if (v6[97] || v6[98] || v6[99])
    {
        v8 = v6[99];
        *v7 <<= 12;
        v9 = v7[1];
        v7[2] = v8 << 12;
        v7[1] = v9 << 12;
        *SF_DRAFT_PTR(_DWORD, (a1_view[3] + 80)) += *v7;
        *SF_DRAFT_PTR(_DWORD, (a1_view[3] + 84)) += v7[1];
        *SF_DRAFT_PTR(_DWORD, (a1_view[3] + 88)) += v7[2];
        *v7 = 0;
        v7[1] = 0;
        v7[2] = 0;
    }
    if ((*SF_DRAFT_PTR(_BYTE, (a1_view[2] + 10)) & 2) != 0 || *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1_view[3] + 416))) == 1)
        sub_80048F3C(sf_draft_guest_address(a1_view), 1, 0);
    sub_8006FC48(sf_draft_guest_address(a1_view));
    return 1;
}

sint32 sub_800243FC(sint16 a1, sint32 a2, sint32 a3, uint8 a4)
{
    FUNCTION_MARKER(0x800243FCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v5;
    int *v7;
    int v8;
    int v9;
    bool v10; // dc
    _BYTE *v11;
    int v12;
    int result;
    int v14;
    int v15;
    int v16;
    int *v17;
    int v18;
    int v19;
    _DWORD *v20;
    int v21;
    int v22;
    int v23;
    int v24[4];
    sint16 callback_left;
    sint16 callback_right;
    v5 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    if (a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v14 = *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v5 + 16)));
        if ((v14 & 0x100000) == 0)
        {
            v15 = (uint8)SF_DRAFT_PTR(uint8, 0x8013C590u)[0] + (a4 != 0);
            if ((v14 & 4) != 0)
            {
                sub_8006C0BC(0, v15, v5, sf_draft_guest_address(&callback_left), sf_draft_guest_address(&callback_right));
                callback_left = (sint16)(callback_left >> 1);
                sub_8006C0E8(0, v15, (uint32)(sint32)callback_left, (uint32)(sint32)callback_right);
            }
            else
            {
                sub_8006BC98(0, (uint8)SF_DRAFT_PTR(uint8, 0x8013C590u)[0] + (a4 != 0), v5, 0);
            }
        }
        goto LABEL_13;
    }
    if ((*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v5 + 16))) & 0x100000) == 0)
    {
        v7 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 12)) + 416)) + 60)));
        if (v7)
        {
            v8 = *v7;
            v9 = v7[1];
            v10 = v8 != 4;
            v11 = SF_DRAFT_PTR(_BYTE, (v9 - 13));
            if (!v10)
                v11 = SF_DRAFT_PTR(_BYTE, (v9 - 2));
            sub_8006BC98(0, (uint8)SF_DRAFT_PTR(uint8, 0x8013C590u)[*v11 & 0x1F] + (a4 != 0), v5, 0);
        }
    }
    v12 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3480));
    result = 2;
    if (v12 == 1)
    {
        sf_draft_call(0x80148804u, 1, (const uint32[]){a4});
    LABEL_13:
        v12 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3480));
        result = 2;
    }
    if (v12 == 2)
    {
        v16 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 8)) + 24));
        if (a4)
            v17 = SF_DRAFT_PTR(int, (v16 + 28));
        else
            v17 = SF_DRAFT_PTR(int, (v16 + 4));
        v18 = *v17;
        v19 = sub_8003A02C(a4 == 0);
        v20 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v5 + 12)));
        v21 = v20[85];
        v22 = v20[86];
        v23 = v20[87];
        v24[0] = v20[84];
        v24[1] = v21;
        v24[2] = v22;
        v24[3] = v23;
        return sub_800CD15C(v18, v19, sf_draft_guest_address(v24));
    }
    return result;
}

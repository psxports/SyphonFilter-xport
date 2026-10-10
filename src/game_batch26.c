#include "game_draft.h"
#include <stdio.h>
#include <stdlib.h>
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);
sint32 sub_80031858(sint32 a1);

sint32 sub_80045C04(sint32 a1)
{
    uint32 record = (uint32)a1;
    uint32 row, kind, flags, descriptor, object, model, parameter, context_slot;
    uint32 count, context;
    sint32 index;
    FUNCTION_MARKER(0x80045C04u, "SCUS_942.40");
    row = r_u32(0x80115CCCu) + 76u * (uint32)(sint32)r_s16(record + 2u);
    kind = r_u8(row + 36u);
    if (kind != 0u)
        descriptor = 0x8010C384u + 32u * kind;
    else
    {
        flags = r_u32(row + 36u) & 0x3000u;
        descriptor = flags == 0x1000u ? 0x8010C5E4u : flags == 0x2000u ? 0x8010C604u : 0x8010C384u;
    }
    for (index = 30; index >= 0; --index)
        if (r_u32(0x8012B828u + 4u * (uint32)index) == record)
            break;
    if (index < 0)
        object = (uint32)sub_80045B10(a1, 0u);
    else
        object = r_u32(0x80127CE8u + 4u * (uint32)index);
    if (r_u32(descriptor + 4u) != 0u)
    {
        w_u32(object + 24u, 0u);
        w_u8(object + 9u, 17u);
        w_u32(object + 24u, r_u32(record + 8u));
        model = r_u32(record + 8u);
        kind = r_u8(record + 34u);
        parameter = r_u32(model + 24u);
        w_u32(object + 12u, r_u32(parameter + (kind == 8u ? 16u : 32u)));
        w_u32(object + 16u, r_u32(descriptor + 4u));
        row = r_u32(0x80115CCCu) + 76u * (uint32)(sint32)r_s16(record + 2u);
        kind = r_u8(row + 36u);
        if (kind == 0u)
        {
            flags = r_u32(row + 36u) & 0x3000u;
            kind = flags == 0x1000u ? 19u : flags == 0x2000u ? 20u : 0u;
        }
        context_slot = r_u32(0x80115D84u);
        w_u16(object + 22u, (uint16)kind);
        return sub_800C818C((sint32)r_u32(context_slot), (sint32)object);
    }
    count = r_u32(0x80115FC0u);
    context_slot = r_u32(0x80115D84u);
    w_u32(object + 12u, 0u);
    w_u32(0x8012B828u + 4u * count, 0xFFFFFFFFu);
    context = r_u32(context_slot);
    w_u32(0x80115FC0u, count - 1u);
    return sub_800C8218((sint32)context, object);
}

sint32 sub_80032784(sint32 a1, sint32 a2, sint32 a3, uint8 a4)
{
    FUNCTION_MARKER(0x80032784u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v5;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int result;
    v5 = a2;
    if (!a2)
    {
        v5 = sub_800DE414(216);
        if (!v5)
            sub_800DDC34(1, 0, sf_draft_guest_address(SF_DRAFT_PTR(char, 0x80011434u)), 1345);
    }
    *SF_DRAFT_PTR(_DWORD, (a1 + 20)) = v5;
    v8 = 14;
    v9 = v5 + 28;
    do
    {
        *SF_DRAFT_PTR(_WORD, (v9 + 52)) = 0;
        --v8;
        v9 -= 2;
    } while (v8 >= 0);
    *SF_DRAFT_PTR(_DWORD, (v5 + 48)) = sf_draft_guest_address(&SF_DRAFT_PTR(uint16, 0x8010BA1Au)[27 * a3]);
    switch (a3)
    {
        case 1:
            *SF_DRAFT_PTR(_DWORD, (v5 + 8)) = 0x80030DA8u;
            *SF_DRAFT_PTR(_DWORD, (v5 + 12)) = 0x80030EECu;
            *SF_DRAFT_PTR(_DWORD, (v5 + 16)) = 0x80030FA4u;
            *SF_DRAFT_PTR(_DWORD, (v5 + 20)) = 0x8003129Cu;
            *SF_DRAFT_PTR(_DWORD, (v5 + 24)) = 0x80031488u;
        LABEL_12:
            *SF_DRAFT_PTR(_DWORD, (v5 + 28)) = 0;
        LABEL_15:
            v10 = a4;
            goto LABEL_16;
        case 2:
            *SF_DRAFT_PTR(_DWORD, (v5 + 8)) = 0x80030DA8u;
            *SF_DRAFT_PTR(_DWORD, (v5 + 12)) = 0x80030EECu;
            *SF_DRAFT_PTR(_DWORD, (v5 + 16)) = 0x80030FA4u;
            *SF_DRAFT_PTR(_DWORD, (v5 + 20)) = 0x8003129Cu;
            *SF_DRAFT_PTR(_DWORD, (v5 + 24)) = 0x80031488u;
            goto LABEL_12;
        case 3:
            *SF_DRAFT_PTR(_DWORD, (v5 + 8)) = 0x80030DA8u;
            *SF_DRAFT_PTR(_DWORD, (v5 + 12)) = 0x80030FA4u;
            *SF_DRAFT_PTR(_DWORD, (v5 + 16)) = 0x8003129Cu;
            *SF_DRAFT_PTR(_DWORD, (v5 + 20)) = 0x80031488u;
            *SF_DRAFT_PTR(_DWORD, (v5 + 24)) = 0x80031858u;
            goto LABEL_12;
    }
    v10 = a4;
    if (!a3)
    {
        *SF_DRAFT_PTR(_DWORD, (v5 + 8)) = 0;
        goto LABEL_15;
    }
LABEL_16:
    *SF_DRAFT_PTR(_DWORD, (v5 + 172)) = v10;
    *SF_DRAFT_PTR(_DWORD, (v5 + 176)) = v10;
    *SF_DRAFT_PTR(_DWORD, (v5 + 168)) = 0x80000000;
    v11 = *SF_DRAFT_PTR(_DWORD, (v5 + 4));
    v12 = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
    *SF_DRAFT_PTR(_WORD, (v5 + 82)) = 0;
    *SF_DRAFT_PTR(_WORD, (v5 + 84)) = 0;
    *SF_DRAFT_PTR(_WORD, (v5 + 86)) = 0;
    *SF_DRAFT_PTR(_DWORD, (v5 + 164)) = 0;
    *SF_DRAFT_PTR(_WORD, (v5 + 96)) = 0;
    *SF_DRAFT_PTR(_WORD, (v5 + 2)) = 0;
    *SF_DRAFT_PTR(_DWORD, (v5 + 212)) = 0;
    *SF_DRAFT_PTR(_DWORD, (v5 + 192)) = 0;
    *SF_DRAFT_PTR(_DWORD, (v5 + 4)) = v11 & 0xFFFFFFF5;
    v13 = *SF_DRAFT_PTR(_DWORD, (v5 + 4));
    result = -1;
    *SF_DRAFT_PTR(_WORD, v5) = -1;
    *SF_DRAFT_PTR(_WORD, (v5 + 188)) = -1;
    *SF_DRAFT_PTR(_WORD, (v5 + 90)) = -1;
    *SF_DRAFT_PTR(_WORD, (v5 + 94)) = -1;
    *SF_DRAFT_PTR(_WORD, (v5 + 92)) = -1;
    *SF_DRAFT_PTR(_DWORD, (v5 + 204)) = v12;
    *SF_DRAFT_PTR(_DWORD, (v5 + 208)) = v12;
    *SF_DRAFT_PTR(_DWORD, (v5 + 4)) = v13 | 1;
    return result;
}

sint32 sub_80039410(sint32 a1)
{
    FUNCTION_MARKER(0x80039410u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v3;
    int v4;
    int v5;
    unsigned int v6;
    unsigned int v7;
    int v8;
    int v9;
    unsigned int v10;
    int *v11;
    sint32 v12;
    int v13;
    unsigned int v14;
    int v15;
    unsigned int v16;
    int v17;
    uint8 *v19;
    sub_800D84E8(SF_DRAFT_PTR(uint32, sf_draft_guest_address(&v19)), 0);
    v3 = 0;
    if (*SF_DRAFT_PTR(uint16, (SF_DRAFT_GP + 630)) != *((uint16 *)v19 + 2))
    {
        v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 40));
        v5 = (unsigned int)(v19 + 4) & 3;
        v6 = (unsigned int)(v19 + 4);
        if (v5)
        {
            v4 += 8 * v5;
            v6 = (unsigned int)(v19 + 4) & 0xFFFFFFFC;
        }
        v7 = (unsigned int)(v19 + 4);
        v8 = *SF_DRAFT_PTR(_DWORD, (a1 + 44));
        v9 = *SF_DRAFT_PTR(_DWORD, (4 * (v4 >> 5) + v6)) & (1 << (v4 & 0x1F));
        if (v5)
        {
            v8 += 8 * v5;
            v7 &= 0xFFFFFFFC;
        }
        if ((_BYTE)v9)
        {
            if ((*SF_DRAFT_PTR(_BYTE, (4 * (v8 >> 5) + v7)) & (uint8)(1 << (v8 & 0x1F))) == 0)
                v3 = -1;
        }
        else if ((*SF_DRAFT_PTR(_BYTE, (4 * (v8 >> 5) + v7)) & (uint8)(1 << (v8 & 0x1F))) != 0)
        {
            v3 = 1;
        }
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 630)) = *((_WORD *)v19 + 2);
    }
    v10 = 0;
    v11 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8010BAF4u)));
    while (1)
    {
        v12 = v10 < 9;
        if (*v11 == 8)
            break;
        ++v10;
        ++v11;
        if (v10 >= 9)
        {
            v12 = v10 < 9;
            break;
        }
    }
    v13 = 0;
    if (v12)
    {
        v14 = (unsigned int)(v19 + 4);
        v15 = (unsigned int)(v19 + 4) & 3;
        v16 = (unsigned int)(v19 + 4);
        if (v15)
        {
            v10 += 8 * v15;
            v16 = v14 & 0xFFFFFFFC;
        }
        if ((*SF_DRAFT_PTR(_DWORD, (4 * ((int)v10 >> 5) + v16)) & (1 << (v10 & 0x1F))) == 0)
            goto LABEL_24;
        v17 = 11;
        if (v15)
        {
            v17 = 8 * v15 + 11;
            v14 &= 0xFFFFFFFC;
        }
        if ((*SF_DRAFT_PTR(_DWORD, (4 * (v17 >> 5) + v14)) & (1 << (v17 & 0x1F))) != 0 || (v13 = 1, *v19 == 255))
        LABEL_24:
            v13 = 0;
    }
    sub_800405F4(v13, v3);
    return 1;
}

sint32 sub_800DD0DC(sint32 a1, uint32 a2, uint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x800DD0DCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    char *a2_view = SF_DRAFT_PTR(char, a2);
    int *a3_view = SF_DRAFT_PTR(int, a3);
    int result;
    sint32 v8;
    sint32 v9;
    sint32 tangent[3];
    sint32 cross_product[3];
    sint32 normal[3];
    __int16 v19[16];
    uint32 rotation_matrix[8];

    __int16 v28[4];
    if (!a1)
        return 1;
    result = 1;
    if (!a3_view)
        return result;
    v8 = 0;
    if (!*a3_view && !a3_view[1])
        v8 = a3_view[2] == 0;
    if (v8)
        return 1;
    sub_800C720C(sf_draft_guest_address(a3_view), sf_draft_guest_address(&normal[0]));
    v9 = 0;
    tangent[1] = 0;
    tangent[0] = normal[2];
    tangent[2] = -normal[0];
    if (!normal[2])
        v9 = normal[0] == 0;
    if (v9)
        tangent[2] = 4096;
    sub_800C720C(sf_draft_guest_address(&tangent[0]), sf_draft_guest_address(&tangent[0]));
    sub_800EBA78(sf_draft_guest_address(&normal[0]), sf_draft_guest_address(&tangent[0]), sf_draft_guest_address(&cross_product[0]));
    v19[0] = tangent[0];
    v19[3] = tangent[1];
    v19[6] = tangent[2];
    v19[1] = cross_product[0];
    v19[4] = cross_product[1];
    v19[7] = cross_product[2];
    v19[2] = normal[0];
    v19[5] = normal[1];
    v19[8] = normal[2];
    if (a4)
    {
        v28[0] = 0;
        v28[1] = 0;
        v28[2] = -(__int16)a4;
        sub_800EBE94(sf_draft_guest_address(v28), sf_draft_guest_address(rotation_matrix));
        ((sint16 *)rotation_matrix)[1] = -((sint16 *)rotation_matrix)[1];
        ((sint16 *)rotation_matrix)[3] = -((sint16 *)rotation_matrix)[3];
        ((sint16 *)rotation_matrix)[5] = -((sint16 *)rotation_matrix)[5];
        ((sint16 *)rotation_matrix)[7] = -((sint16 *)rotation_matrix)[7];
        sub_800EACE4(sf_draft_guest_address(v19), sf_draft_guest_address(rotation_matrix), sf_draft_guest_address(v19));
    }
    return sub_800DC0B8(a1, sf_draft_guest_address(a2_view), sf_draft_guest_address(v19));
}

sint32 sub_8001FB0C(uint32 a1)
{
    uint32 entity, transform, base_x, base_y, base_z;
    uint32 target_x, target_y, target_z;
    sint32 rotation[3], delta[3];
    uint32 has_base_vector, has_rotation, has_target, facing;
    FUNCTION_MARKER(0x8001FB0Cu, "SCUS_942.40");
    if (r_u32(a1 + 0xBD4u))
    {
        facing = r_u32(a1 + 0xBDCu);
        (void)r_u32(a1 + 0xBE0u);
        (void)r_u32(a1 + 0xBE4u);
        (void)r_u32(a1 + 0xBE8u);
    }
    else
        facing = r_u32(a1 + 0xBDCu);
    entity = r_u32(a1);
    sub_800CAD98(entity, facing);
    entity = r_u32(a1);
    has_base_vector = r_u32(a1 + 0x1B4u);
    transform = r_u32(entity);
    base_x = r_u32(a1 + 0x1BCu);
    if (has_base_vector)
    {
        base_y = r_u32(a1 + 0x1C0u);
        base_z = r_u32(a1 + 0x1C4u);
        (void)r_u32(a1 + 0x1C8u);
    }
    has_rotation = r_u32(a1 + 0x580u);
    rotation[0] = (sint32)r_u32(a1 + 0x588u);
    /* TODO Inactive rotation leaves original XYZ words SP+24/28 unwritten */
    if (!has_rotation)
        sf_draft_unbound_stack_field(0x8001FB0Cu, 0x24u);
    rotation[1] = (sint32)r_u32(a1 + 0x58Cu);
    rotation[2] = (sint32)r_u32(a1 + 0x590u);
    (void)r_u32(a1 + 0x594u);
    sub_800DC8AC(transform, 0, sf_draft_guest_address(rotation));
    has_target = r_u32(a1 + 0x43Cu);
    target_x = r_u32(a1 + 0x444u);
    /* TODO Inactive target leaves original direction words SP+44/48 unwritten */
    if (!has_target)
        sf_draft_unbound_stack_field(0x8001FB0Cu, 0x44u);
    target_y = r_u32(a1 + 0x448u);
    target_z = r_u32(a1 + 0x44Cu);
    (void)r_u32(a1 + 0x450u);
    delta[0] = (sint32)(target_x - base_x);
    /* TODO Inactive base leaves original direction words SP+14/18 unwritten */
    if (!has_base_vector)
        sf_draft_unbound_stack_field(0x8001FB0Cu, 0x14u);
    delta[1] = (sint32)(target_y - base_y);
    delta[2] = (sint32)(target_z - base_z);
    sub_800DD0DC(transform, 0, sf_draft_guest_address(delta), 0);
    sub_8001F1B8();
    sub_80022120();
    return 1;
}

sint32 sub_800DB9E0(uint32 a1, uint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800DB9E0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _WORD *a1_view = SF_DRAFT_PTR(_WORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    __int16 v6;
    __int16 v7;
    int result;
    __int16 v9;
    int v10;
    __int16 v11;
    char v12[20];
    int v13;
    int v14;
    int v15;
    if (a2_view == (_DWORD *)a1_view)
    {
        *SF_DRAFT_PTR(_DWORD, a3) = (*SF_DRAFT_PTR(uint32, 0x8010E1ECu));
        *SF_DRAFT_PTR(_DWORD, (a3 + 4)) = (*SF_DRAFT_PTR(uint32, 0x8010E1F0u));
        *SF_DRAFT_PTR(_DWORD, (a3 + 8)) = (*SF_DRAFT_PTR(uint32, 0x8010E1F4u));
        *SF_DRAFT_PTR(_DWORD, (a3 + 12)) = (*SF_DRAFT_PTR(uint32, 0x8010E1F8u));
        *SF_DRAFT_PTR(_WORD, (a3 + 16)) = (*SF_DRAFT_PTR(uint32, 0x8010E1FCu));
    }
    else if (a2_view)
    {
        if (a1_view)
        {
            sub_800EBBC4(sf_draft_guest_address(a2_view), sf_draft_guest_address(v12));
            v13 = a2_view[5];
            v14 = a2_view[6];
            v15 = a2_view[7];
            sub_800EACE4(sf_draft_guest_address(v12), sf_draft_guest_address(a1_view), a3);
        }
        else
        {
            sub_800EBBC4(sf_draft_guest_address(a2_view), a3);
            *SF_DRAFT_PTR(_DWORD, (a3 + 20)) = a2_view[5];
            *SF_DRAFT_PTR(_DWORD, (a3 + 24)) = a2_view[6];
            *SF_DRAFT_PTR(_DWORD, (a3 + 28)) = a2_view[7];
        }
    }
    else
    {
        *SF_DRAFT_PTR(_WORD, a3) = *a1_view;
        *SF_DRAFT_PTR(_WORD, (a3 + 2)) = a1_view[1];
        *SF_DRAFT_PTR(_WORD, (a3 + 4)) = a1_view[2];
        *SF_DRAFT_PTR(_WORD, (a3 + 6)) = a1_view[3];
        *SF_DRAFT_PTR(_WORD, (a3 + 8)) = a1_view[4];
        *SF_DRAFT_PTR(_WORD, (a3 + 10)) = a1_view[5];
        *SF_DRAFT_PTR(_WORD, (a3 + 12)) = a1_view[6];
        *SF_DRAFT_PTR(_WORD, (a3 + 14)) = a1_view[7];
        *SF_DRAFT_PTR(_WORD, (a3 + 16)) = a1_view[8];
    }
    v6 = *SF_DRAFT_PTR(_WORD, (a3 + 2));
    v7 = *SF_DRAFT_PTR(_WORD, (a3 + 10));
    result = 0;
    *SF_DRAFT_PTR(_DWORD, (a3 + 20)) = 0;
    *SF_DRAFT_PTR(_DWORD, (a3 + 24)) = 0;
    *SF_DRAFT_PTR(_DWORD, (a3 + 28)) = 0;
    *SF_DRAFT_PTR(_WORD, (a3 + 2)) = -v6;
    v9 = *SF_DRAFT_PTR(_WORD, (a3 + 6));
    *SF_DRAFT_PTR(_WORD, (a3 + 10)) = -v7;
    v10 = *SF_DRAFT_PTR(_DWORD, (a3 + 24));
    *SF_DRAFT_PTR(_WORD, (a3 + 6)) = -v9;
    v11 = *SF_DRAFT_PTR(_WORD, (a3 + 14));
    *SF_DRAFT_PTR(_DWORD, (a3 + 24)) = -v10;
    *SF_DRAFT_PTR(_WORD, (a3 + 14)) = -v11;
    return result;
}

sint32 sub_8006E28C(uint32 a1, uint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x8006E28Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    int *a2_view = SF_DRAFT_PTR(int, a2);
    int result;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    sint32 vector_output[3];
    int v15[4];
    int v16[4];
    v16[0] = (*SF_DRAFT_PTR(uint32, 0x800122B4u));
    v16[1] = (*SF_DRAFT_PTR(uint32, 0x800122B8u));
    v16[2] = (*SF_DRAFT_PTR(uint32, 0x800122BCu));
    v16[3] = (*SF_DRAFT_PTR(uint32, 0x800122C0u));
    if (!a1_view)
        return 0;
    *a1_view = *a2_view;
    v7 = a2_view[2];
    v8 = a2_view[3];
    v9 = a2_view[4];
    a1_view[1] = a2_view[1];
    a1_view[2] = v7;
    a1_view[3] = v8;
    a1_view[4] = v9;
    v10 = *a1_view;
    a1_view[5] = a2_view[5];
    a1_view[7] = a2_view[6];
    a1_view[8] = a2_view[7];
    a1_view[9] = a2_view[8];
    a1_view[10] = a2_view[9];
    a1_view[11] = a2_view[10];
    a1_view[12] = a2_view[11];
    a1_view[13] = a2_view[12];
    a1_view[14] = a2_view[13];
    sub_800DD8C0(sf_draft_guest_address(a1_view + 1), v10, 0, sf_draft_guest_address(&vector_output[0]));
    if (a3)
    {
        sub_80048210(a3, sf_draft_guest_address(v15));
        vector_output[0] -= v15[0];
        vector_output[1] -= v15[1];
        vector_output[2] -= v15[2];
    }
    sub_800482B8(sf_draft_guest_address(a1_view + 15), sf_draft_guest_address(&vector_output[0]));
    sub_800482B8(sf_draft_guest_address(a1_view + 47), sf_draft_guest_address(v16));
    a1_view[79] = 0;
    a1_view[80] = 0;
    a1_view[81] = 0;
    a1_view[83] = 0;
    a1_view[84] = 0;
    a1_view[85] = 0;
    a1_view[87] = 0;
    a1_view[88] = 0;
    a1_view[89] = 0;
    a1_view[91] = 0;
    v11 = a2_view[14];
    result = 1;
    a1_view[93] = 0;
    a1_view[92] = v11;
    return result;
}

sint32 sub_8001902C(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8001902Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    _DWORD *v11;
    int result;
    char v13[32];
    v4 = SF_DRAFT_PTR(_DWORD, a1_view[80]);
    if (v4)
    {
        sub_800DBBD4((*v4), 0, sf_draft_guest_address(v13));
        sub_800E2338(a2 + 8, sf_draft_guest_address(v13), a2 + 8);
    }
    if (*SF_DRAFT_PTR(_DWORD, (a2 + 28)) == 1)
    {
        v5 = *SF_DRAFT_PTR(_DWORD, (a2 + 8));
        v6 = a1_view[39];
        if (v5 >= v6)
        {
            v6 = a1_view[43];
            if (v6 >= v5)
                v6 = *SF_DRAFT_PTR(_DWORD, (a2 + 8));
        }
        a1_view[15] = v6;
        a1_view[35] = 1;
    }
    if (*SF_DRAFT_PTR(_DWORD, (a2 + 32)) == 1)
    {
        v7 = *SF_DRAFT_PTR(_DWORD, (a2 + 12));
        v8 = a1_view[40];
        if (v7 >= v8)
        {
            v8 = a1_view[44];
            if (v8 >= v7)
                v8 = *SF_DRAFT_PTR(_DWORD, (a2 + 12));
        }
        a1_view[16] = v8;
        a1_view[36] = 1;
    }
    if (*SF_DRAFT_PTR(_DWORD, (a2 + 36)) == 1)
    {
        v9 = *SF_DRAFT_PTR(_DWORD, (a2 + 16));
        v10 = a1_view[41];
        if (v9 >= v10)
        {
            v10 = a1_view[45];
            if (v10 >= v9)
                v10 = *SF_DRAFT_PTR(_DWORD, (a2 + 16));
        }
        a1_view[17] = v10;
        a1_view[37] = 1;
    }
    v11 = SF_DRAFT_PTR(_DWORD, a1_view[79]);
    if (v11)
    {
        *SF_DRAFT_PTR(_DWORD, (a2 + 8)) -= *v11;
        *SF_DRAFT_PTR(_DWORD, (a2 + 12)) -= *SF_DRAFT_PTR(_DWORD, (a1_view[79] + 4));
        *SF_DRAFT_PTR(_DWORD, (a2 + 16)) -= *SF_DRAFT_PTR(_DWORD, (a1_view[79] + 8));
    }
    result = 1;
    if (*SF_DRAFT_PTR(_BYTE, (a2 + 44)) == 1)
        return (uint8)sub_800196E4(sf_draft_guest_address(a1_view), a2 + 28);
    return result;
}

sint32 sub_800952A4(uint32 a1, uint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800952A4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    sint32 *a1_view = SF_DRAFT_PTR(sint32, a1);
    int *a2_view = SF_DRAFT_PTR(int, a2);
    int v4;
    int v6;
    int v7;
    int *v8;
    int v9;
    int *v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    sint32 v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    sint32 v29;
    int v30;
    int v31;
    if (a3 < 0)
        v4 = -(-a3 >> 12);
    else
        v4 = a3 >> 12;
    v6 = *a2_view;
    v7 = 0;
    if (*a2_view > 0)
    {
        v8 = a2_view;
        do
        {
            v9 = 4 * (v7 + 1);
            if (v7 + 1 == v6)
                v9 = 0;
            v10 = &a2_view[v9];
            v11 = v8[3] - v10[3];
            v30 = v11;
            v12 = v10[1];
            if (v11 < 0)
                v11 = -v11;
            v13 = v12 - v8[1];
            v14 = v13;
            if (v13 < 0)
                v14 = -v13;
            v15 = v11 + v14;
            v16 = v11 - v14;
            v31 = v13;
            v17 = (v11 + v14) >> 1;
            v18 = (v11 + v14) >> 2;
            if (v11 - v14 < 0)
                v16 = v14 - v11;
            if (v16 >= v17)
            {
                v20 = v15 < 2;
                if (v17 + v18 < v16)
                    goto LABEL_20;
                v19 = v15 - (v15 >> 3);
            }
            else
            {
                v19 = v15 - v18;
            }
            v20 = v19 < 2;
        LABEL_20:
            v21 = 1;
            if (v20)
                goto LABEL_32;
            v22 = v30;
            v23 = v31;
            if (v30 < 0)
                v22 = -v30;
            if (v31 < 0)
                v23 = -v31;
            v24 = v22 + v23;
            v25 = v22 - v23;
            v26 = (v22 + v23) >> 1;
            v27 = (v22 + v23) >> 2;
            if (v22 - v23 < 0)
                v25 = v23 - v22;
            if (v25 >= v26)
            {
                v29 = v26 + v27 < v25;
                v21 = v24;
                if (v29)
                    goto LABEL_32;
                v28 = v24 - (v24 >> 3);
            }
            else
            {
                v28 = v24 - v27;
            }
            v21 = v28;
        LABEL_32:
            ++v7;
            if (v4 * v21 < (*a1_view - v8[1]) * v30 + (a1_view[2] - v8[3]) * v31)
                return 0;
            v6 = *a2_view;
            v8 += 4;
        } while (v7 < *a2_view);
    }
    return 1;
}

uint32 sub_80015850(const char *filename, uint32 destination_slot_guest, uint32 size)
{
    FUNCTION_MARKER(0x80015850u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *destination_slot_guest_view = SF_DRAFT_PTR(_DWORD, destination_slot_guest);
    int v6;
    int i;
    int v9;
    char v10[56];
    int v11;
    unsigned int v12;
    char v13[8];
    uint32 filename_address = sf_draft_guest_address(filename);
    v6 = 0;
    while (2)
    {
        for (i = v6;; i = v6)
        {
            while (1)
            {
                ++v6;
                if (i >= 6)
                    return 0;
                sub_800EC894(sf_draft_guest_address(v10), filename_address);
                if (!sub_800DEEF4(sf_draft_guest_address(v10), sf_draft_guest_address(&v11)))
                    break;
                sub_800EC924(sf_draft_guest_address(v10), sf_draft_guest_address("\\COMMON\\%s;1"), filename_address);
                if (!sub_800DEEF4(sf_draft_guest_address(v10), sf_draft_guest_address(&v11)))
                    break;
                sub_800EC924(sf_draft_guest_address(v10), sf_draft_guest_address("\\%s\\%s;1"), SF_DRAFT_PTR(uint32, 0x80102D1Cu)[(*SF_DRAFT_PTR(uint16, 0x80130C88u))], filename_address);
                if (!sub_800DEEF4(sf_draft_guest_address(v10), sf_draft_guest_address(&v11)))
                    break;
                sub_80016160();
                i = v6;
            }
            if ((sint32)size >= 0)
            {
                if (size)
                {
                    v12 = size;
                    goto LABEL_16;
                }
                sub_800DF148(v11, sf_draft_guest_address(&v12));
            }
            else
            {
                sub_800DF148(v11, sf_draft_guest_address(&v12));
                if (v12 < (0u - size))
                    v12 = 0u - size;
            }
            *destination_slot_guest_view = sub_800DE414(v12);
        LABEL_16:
            if (*destination_slot_guest_view)
                break;
            sub_800DF3B0(sf_draft_guest_address(&v11));
        }
        v9 = sub_800DF198(v11, *destination_slot_guest_view, v12, sf_draft_guest_address(v13));
        sub_800DF3B0(sf_draft_guest_address(&v11));
        if (v9)
        {
            *destination_slot_guest_view = 0;
            continue;
        }
        return v12;
    }
}

void sub_80069A40(sint32 a1, uint32 a2, sint32 a3, uint32 a4, sint32 a9)
{
    FUNCTION_MARKER(0x80069A40u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);
    _DWORD *a4_view = SF_DRAFT_PTR(_DWORD, a4);
    int v11;
    int v12;
    int v14;
    int *v15;
    v11 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v12 = *SF_DRAFT_PTR(__int16, (v11 + 2));
    if (v12 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        if ((*SF_DRAFT_PTR(uint32, 0x80115FB8u)) != 16)
            goto LABEL_7;
    LABEL_6:
        sub_80050724(*SF_DRAFT_PTR(__int16, (v11 + 2)), sf_draft_guest_address(a2_view));
        return;
    }
    v14 = *SF_DRAFT_PTR(uint8, (76 * v12 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36));
    if (v14 && v14 == 16)
        goto LABEL_6;
LABEL_7:
    if (a9 == 25)
    {
        sub_8004E1F0(v11, sf_draft_guest_address(a2_view));
    }
    else
    {
        v15 = SF_DRAFT_PTR(int, sub_800671AC());
        if (v15 && a1 >= 0)
        {
            *((_BYTE *)v15 + 28) = sub_8004CD24(a1, sf_draft_guest_address(a2_view)) + 1;
            v15[6] = a9;
            *((_BYTE *)v15 + 30) = 0;
            *((_WORD *)v15 + 8) = -1;
            *((_WORD *)v15 + 10) = a1;
            *v15 = *a2_view;
            *((_WORD *)v15 + 4) = a2_view[1];
            v15[1] = a2_view[2];
            *((_WORD *)v15 + 5) = *a4_view;
            *((_WORD *)v15 + 6) = a4_view[1];
            *((_WORD *)v15 + 7) = a4_view[2];
            sub_8004E1F0(v11, sf_draft_guest_address(a2_view));
        }
        else
        {
            sub_8006784C(a1, 0, a9, sf_draft_guest_address(a2_view), a4);
        }
    }
}

sint32 sub_800E9F84(uint32 a1)
{
    uint32 *coordinate = SF_DRAFT_PTR(uint32, a1);
    uint32 parent_matrix[8];
    uint32 inverse_matrix[8];
    uint32 transformed[3];
    uint32 parent, parent_address, inverse_address;
    uint32 first[4];
    uint32 index;
    FUNCTION_MARKER(0x800E9F84u, "SCUS_942.40");
    for (index = 0u; index < 4u; ++index)
        first[index] = coordinate[index];
    for (index = 0u; index < 4u; ++index)
        w_u32(0x80130CD8u + index * 4u, first[index]);
    for (index = 0u; index < 4u; ++index)
        first[index] = coordinate[index + 4u];
    for (index = 0u; index < 4u; ++index)
        w_u32(0x80130CE8u + index * 4u, first[index]);
    parent = coordinate[8];
    if (parent)
    {
        parent_address = sf_draft_guest_address(parent_matrix);
        inverse_address = sf_draft_guest_address(inverse_matrix);
        sub_800EA0E4(parent, parent_address);
        sub_800EBBC4(parent_address, (sint32)inverse_address);
        sub_800EADF4(inverse_address, sf_draft_guest_address(parent_matrix + 5), sf_draft_guest_address(transformed));
        inverse_matrix[5] = 0u - transformed[0];
        inverse_matrix[7] = 0u - transformed[2];
        inverse_matrix[6] = 0u - transformed[1];
        sub_800E92F0(0x80130CD8u, inverse_address);
        for (index = 0u; index < 4u; ++index)
            first[index] = inverse_matrix[index];
        for (index = 0u; index < 4u; ++index)
            w_u32(0x80130CD8u + index * 4u, first[index]);
        for (index = 0u; index < 4u; ++index)
            first[index] = inverse_matrix[index + 4u];
        for (index = 0u; index < 4u; ++index)
            w_u32(0x80130CE8u + index * 4u, first[index]);
    }
    for (index = 0u; index < 8u;)
    {
        uint32 count = index < 6u ? 3u : 2u;
        uint32 group;
        for (group = 0u; group < count; ++group)
            first[group] = r_u32(0x80130CD8u + (index + group) * 4u);
        for (group = 0u; group < count; ++group)
            w_u32(0x8012C9C8u + (index + group) * 4u, first[group]);
        index += count;
    }
    return 0;
}

uint32 sub_8008634C(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8008634Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    _WORD *v2 = SF_DRAFT_PTR(_WORD, SF_DRAFT_GP);
    int v5;
    int v6;
    __int16 v7;
    int v8;
    int v9;
    __int16 *v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    if (!a1_view)
        return 0;
    v5 = 8;
    if ((a1_view[5] & 0x80) != 0)
        v5 = 6;
    v6 = *a1_view;
    v2[1500] = *SF_DRAFT_PTR(_WORD, (*a1_view + 4));
    v2[1501] = *SF_DRAFT_PTR(_WORD, (v6 + 6));
    v7 = *SF_DRAFT_PTR(_WORD, (v6 + 8));
    v2[1503] = v5;
    v2[1502] = v7;
    if (a2)
    {
        v8 = a1_view[6];
        if (v8)
            sub_8008634C(v8, 1);
    }
    v9 = 0;
    if (*((_WORD *)a1_view + 6))
    {
        v10 = SF_DRAFT_PTR(__int16, (v6 + 6));
        do
        {
            v11 = *(v10 - 1);
            if (v11 < (__int16)v2[1500])
            {
                v2[1502] += v2[1500] - v11;
                v2[1500] = *(v10 - 1);
            }
            v12 = *v10;
            if (v12 < (__int16)v2[1501])
            {
                v2[1503] += v2[1501] - v12;
                v2[1501] = *v10;
            }
            v13 = (__int16)v2[1500];
            v14 = (uint16)v10[1];
            v15 = *(v10 - 1);
            if ((__int16)v2[1502] + v13 < v14 + v15)
                v2[1502] = v15 + v14 - v13;
            v16 = (__int16)v2[1501];
            if ((__int16)v2[1503] + v16 < *v10 + v5)
                v2[1503] = *v10 + v5 - v16;
            ++v9;
            v10 += 22;
        } while (v9 < *((uint16 *)a1_view + 6));
    }
    return (*SF_DRAFT_PTR(uint32, 0x80116820u));
}

sint32 sub_8003F2F0(uint32 a1)
{
    FUNCTION_MARKER(0x8003F2F0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    int v1;
    int result;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    v1 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 20))) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    if ((unsigned int)*SF_DRAFT_PTR(uint8, (v1 + 34)) - 1 >= 2)
    {
        result = *SF_DRAFT_PTR(_DWORD, (v1 + 12));
        v4 = *SF_DRAFT_PTR(_DWORD, (result + 4));
        v5 = *SF_DRAFT_PTR(_DWORD, (result + 8));
        v6 = *SF_DRAFT_PTR(_DWORD, (result + 12));
        *a1_view = *SF_DRAFT_PTR(_DWORD, result);
        a1_view[1] = v4;
        a1_view[2] = v5;
        a1_view[3] = v6;
    }
    else
    {
        v7 = (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 24))) + 24))));
        v8 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 24))) + 28));
        v9 = (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 24)) + 52)) + 24))));
        v10 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 24)) + 52)) + 28));
        *a1_view = (3 * *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 24))) + 20)) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 24)) + 52)) + 20))) >> 2;
        a1_view[1] = (3 * v7 + v9) >> 2;
        result = (3 * v8 + v10) >> 2;
        a1_view[2] = result;
    }
    return result;
}

void sub_800D3EF4(sint32 record_count, sint32 vertical_radius, uint32 packed_xy0, uint32 packed_xy1, uint32 packed_xy2, uint32 polygon, uint32 rgb_base, uint32 mode, uint32 buffer_base, uint32 channel_mask, uint32 *vertex_buffer)
{
    FUNCTION_MARKER(0x800D3EF4u, "SCUS_942.40");
    uint32 record = 0x1F8003C0u;
    uint32 index = 0;
    const uint32 packed_xy[3] = {packed_xy0, packed_xy1, packed_xy2};
    do
    {
        sint16 coords[4];
        uint32 vertex;
        coords[0] = r_s16(record + 4);
        coords[1] = r_s16(record + 6);
        coords[2] = r_s16(record + 8);
        coords[3] = r_s16(record + 10);
        for (vertex = 0; vertex < 3; ++vertex)
        {
            sint32 distance_x = (sint16)packed_xy[vertex] - coords[0];
            sint32 distance_z;
            sint32 distance_y;
            if (distance_x < 0)
                distance_x = -distance_x;
            if (distance_x - coords[3] > 0)
                continue;
            distance_z = r_s16(*vertex_buffer + 8 * vertex + 4) - coords[2];
            if (distance_z < 0)
                distance_z = -distance_z;
            if (distance_z - coords[3] > 0)
                continue;
            distance_y = ((sint32)packed_xy[vertex] >> 16) - coords[1];
            if (distance_y < 0)
                distance_y = -distance_y;
            if (distance_y - vertical_radius > 0)
                continue;
            /* A lighting callback can replace the vertex base before the next test */
            sub_800D3D50(record, rgb_base + 4 + 12 * vertex, index, polygon, *vertex_buffer + 8 * vertex, mode, buffer_base, channel_mask, vertex_buffer, coords);
        }
        ++index;
        record += 16;
    } while (index != (uint32)record_count);
}

sint32 sub_800CBA34(uint32 a1, sint32 a2)
{
    uint32 queue, index, offset, slot, occupant, binding, target;
    sint32 count;
    FUNCTION_MARKER(0x800CBA34u, "SCUS_942.40");
    queue = r_u32(r_u32(r_u32(a1 + 16u) + 32u) + 16u);
    if (queue == 0u)
        sub_800DDC34(1, 0, 0x800138A4u, 2485);
    count = r_s32(queue);
    if (count > 0)
    {
        index = 0u;
        offset = 0u;
        do
        {
            occupant = r_u32(r_u32(queue + 4u) + offset);
            if (occupant != 0u)
            {
                uint32 identity = r_u16(occupant + 20u) & 0x3ffu;
                if (((uint32)sub_80016A14(identity) & 0xffu) == 0u)
                    w_u32(r_u32(queue + 4u) + offset, 0u);
            }
            ++index;
            count = r_s32(queue);
            offset += 60u;
        } while ((sint32)index < count);
        count = r_s32(queue);
    }
    if (count > 0)
    {
        index = 0u;
        offset = 0u;
        do
        {
            slot = r_u32(queue + 4u) + offset;
            occupant = r_u32(slot);
            if (a2 != 0)
            {
                if (occupant == 0u)
                {
                    binding = r_u32(slot + 4u);
                    w_u32(slot, a1);
                    w_u32(a1 + 24u, binding);
                    target = r_u32(slot + 8u);
                    w_u32(a1 + 36u, target);
                    binding = r_u32(slot + 4u);
                    w_u32(slot + 12u, 0u);
                    target = r_u32(a1 + 12u);
                    return sub_800DB730((sint32)r_u32(binding + 56u), (sint32)target);
                }
            }
            else if (occupant == a1)
            {
                w_u32(slot, 0u);
                w_u32(a1 + 24u, 0u);
                w_u32(a1 + 36u, 0u);
                return (sint32)occupant;
            }
            count = r_s32(queue);
            ++index;
            offset += 60u;
        } while ((sint32)index < count);
    }
    sub_800DDC34(1, 0, 0x800138A4u, 2518);
    /* TODO A returning assertion callback has no reviewed native return carrier */
    fprintf(stderr, "Unresolved sub_800CBA34 assertion return carrier\n");
    abort();
}

uint32 sub_80086830()
{
    FUNCTION_MARKER(0x80086830u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    unsigned int v1;
    int result;
    int *v3;
    int v4;
    unsigned int v5;
    unsigned int v6;
    v1 = -1;
    if (!(*SF_DRAFT_PTR(uint32, 0x801169A4u)) || (result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1224)), result != (*SF_DRAFT_PTR(uint32, 0x801169A4u))))
    {
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1224)) = (*SF_DRAFT_PTR(uint32, 0x801169A4u));
        v3 = SF_DRAFT_PTR(int, 0x80120EF8u);
        v4 = 0;
        do
        {
            if (*v3)
            {
                v5 = sub_800869EC(sf_draft_guest_address(v3));
                if (v5 < v1)
                    v1 = v5;
            }
            ++v4;
            v3 += 5;
        } while ((uint8)v4 < 7u);
        v6 = sub_800869EC(0);
        if (v6 < v1)
            v1 = v6;
        if (((*SF_DRAFT_PTR(uint32, 0x80120F70u)) & 2) != 0 && (*SF_DRAFT_PTR(uint32, 0x80120F80u)))
        {
            sub_800865EC(sf_draft_guest_address(SF_DRAFT_PTR(int *, (*SF_DRAFT_PTR(uint32, 0x80120F80u)))));
        }
        else if ((*SF_DRAFT_PTR(uint32, 0x80121074u)))
        {
            sub_800C7BF8(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3324)), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80121074u))));
        }
        if (sub_80016160())
        {
            result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3008)) + 1;
            goto LABEL_23;
        }
        if (!v1)
        {
            sub_80015364(0x1Fu, 4u, 65534, 65534, 0, 0, 0, 0);
            result = (*SF_DRAFT_PTR(uint32, 0x801169A4u)) + 1;
        LABEL_23:
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3008)) = result;
            return result;
        }
        result = -1;
        if (v1 != *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3008)))
        {
            if (v1 != -1)
                result = sub_800C8A9C(0x80086830u, (v1 - (*SF_DRAFT_PTR(uint32, 0x801169A4u)) + 1), 0);
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3008)) = v1;
        }
    }
    return result;
}

BOOL sub_8004BEDC(sint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x8004BEDCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v9;
    __int16 v10;
    unsigned int v11; // kr00_4
    int v12;
    sint32 result;
    bool v14; // dc
    int v15;
    sub_80018430((*SF_DRAFT_PTR(uint32, 0x80115D84u)), sf_draft_guest_address(&v15));
    if (*SF_DRAFT_PTR(_DWORD, (a1 + 44)) != 8)
    {
        if (*SF_DRAFT_PTR(_DWORD, (a1 + 48)) == 4)
        {
            if (*SF_DRAFT_PTR(_BYTE, (a1 + 37)))
                sub_800C7B68(v15, a2 + 40);
        }
        else
        {
            sub_800C7BF8(v15, a2 + 40);
        }
    }
    *SF_DRAFT_PTR(_WORD, (a2 + 36)) = 0x8000;
    v9 = *SF_DRAFT_PTR(__int16, (a1 + 30));
    --*SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3708));
    if (a4 == v9)
    {
        v10 = *SF_DRAFT_PTR(_WORD, (a2 + 38));
        *SF_DRAFT_PTR(_WORD, (a1 + 30)) = v10;
        if ((v10 & 0x8000) != 0)
        {
            v11 = (-991146299 * (a1 - *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3256)))) >> 2;
            *SF_DRAFT_PTR(_WORD, (a1 + 22)) = 0;
            *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2708)) = v11 / 0x34;
            *SF_DRAFT_PTR(_BYTE, (a1 + 39)) = 0;
            *SF_DRAFT_PTR(_BYTE, (a1 + 37)) = 0;
            *SF_DRAFT_PTR(_BYTE, (a1 + 38)) = 0;
            v12 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2712));
            *SF_DRAFT_PTR(_DWORD, (a1 + 48)) = 5;
            if (v12 == a1)
                *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2712)) = 0;
            *SF_DRAFT_PTR(_WORD, (a1 + 32)) = -1;
            *SF_DRAFT_PTR(_BYTE, (a1 + 36)) = -1;
            *SF_DRAFT_PTR(_DWORD, (a1 + 4)) = 0;
            sub_8004BE50(a1);
        }
    }
    else
    {
        SF_DRAFT_PTR(uint16, 0x80137766u)[52 * a3] = *SF_DRAFT_PTR(_WORD, (a2 + 38));
    }
    result = a4 < *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2692));
    v14 = a4 >= *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2692));
    *SF_DRAFT_PTR(_WORD, (a2 + 38)) = -1;
    if (!v14)
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2692)) = a4;
    return result;
}

BOOL sub_800DB244(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800DB244u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int *v9;
    int *v10;
    int v11;
    int *v12;
    int v13;
    int *v14;
    int v15;
    int *v16;
    int v17;
    /* Normal vector and projected coordinates share the indexed output object */
    sint32 geometry_output[10];
    sub_800EBAD0(sf_draft_guest_address(a1_view), sf_draft_guest_address(a1_view + 4), sf_draft_guest_address(&geometry_output[0]));
    v4 = geometry_output[2];
    v5 = geometry_output[0];
    if (geometry_output[0] < 0)
        v5 = -geometry_output[0];
    if (geometry_output[2] < 0)
        v4 = -geometry_output[2];
    geometry_output[0] = v5;
    geometry_output[2] = v4;
    v6 = geometry_output[1];
    if (geometry_output[1] < 0)
        v6 = -geometry_output[1];
    geometry_output[1] = v6;
    if (v6 < v4)
    {
        if (v5 < v4)
            goto LABEL_11;
    LABEL_13:
        v7 = geometry_output[0];
        goto LABEL_14;
    }
    if (v5 >= v6)
        goto LABEL_13;
LABEL_11:
    v7 = geometry_output[2];
    if (geometry_output[1] >= geometry_output[2])
        v7 = geometry_output[1];
LABEL_14:
    v8 = 0;
    if (v7 == geometry_output[2])
    {
        v9 = a1_view;
        v10 = &geometry_output[0];
        do
        {
            ++v8;
            v10[4] = *v9;
            v11 = v9[1];
            v9 += 4;
            v10[7] = v11;
            ++v10;
        } while (v8 < 3);
    }
    else
    {
        v12 = a1_view;
        if (v7 == geometry_output[0])
        {
            v13 = 0;
            v14 = &geometry_output[0];
            do
            {
                ++v13;
                v14[4] = v12[1];
                v15 = v12[2];
                v12 += 4;
                v14[7] = v15;
                ++v14;
            } while (v13 < 3);
        }
        else
        {
            v16 = &geometry_output[0];
            do
            {
                ++v8;
                v16[4] = v12[2];
                v17 = *v12;
                v12 += 4;
                v16[7] = v17;
                ++v16;
            } while (v8 < 3);
        }
    }
    return sub_800DA52C(sf_draft_guest_address((geometry_output + 4)), sf_draft_guest_address(a2_view));
}

sint32 sub_800C1B54(sint32 a1)
{
    FUNCTION_MARKER(0x800C1B54u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int result;
    int v4;
    __int16 *v5;
    int *v6;
    int *v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    __int16 *v15;
    int *v16;
    __int16 v17;
    int v19[4];
    result = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 1904));
    if (a1 != result)
    {
        if (a1)
        {
            v4 = 0;
            v5 = SF_DRAFT_PTR(__int16, 0x80116858u);
            v6 = v19;
            do
            {
                ++v4;
                *(_WORD *)v6 = *v5;
                *v5++ = 0;
                v6 = SF_DRAFT_PTR(int, ((char *)v6 + 2));
            } while (v4 < 3);
        }
        v7 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x801311B0u)));
        do
        {
            v8 = *v7;
            if (*v7)
            {
                v9 = *SF_DRAFT_PTR(uint8, (v8 + 12));
                v10 = *SF_DRAFT_PTR(_DWORD, (v8 + 4));
                v11 = 0;
                if (v9)
                {
                    v12 = v10;
                    do
                    {
                        v13 = *SF_DRAFT_PTR(_WORD, v12) & 0x1F;
                        if ((v13 == 1 || v13 == 3) && *SF_DRAFT_PTR(char, (v12 + 16)) != -1 || (*SF_DRAFT_PTR(_WORD, v12) & 0x1F) == 2)
                            sub_800C12E4((*v7), v11, *SF_DRAFT_PTR(uint8, (v12 + 9)), 0, v19[2]);
                        ++v11;
                        v12 += 24;
                    } while (v11 < v9);
                }
            }
            result = (int)++v7 < (int)&(*SF_DRAFT_PTR(uint32, 0x801311F0u));
        } while ((int)v7 < (int)&(*SF_DRAFT_PTR(uint32, 0x801311F0u)));
        if (a1)
        {
            v14 = 0;
            v15 = SF_DRAFT_PTR(__int16, 0x80116858u);
            v16 = v19;
            do
            {
                v17 = *(_WORD *)v16;
                v16 = SF_DRAFT_PTR(int, ((char *)v16 + 2));
                ++v14;
                *v15 = v17;
                result = v14 < 3;
                ++v15;
            } while (v14 < 3);
        }
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1904)) = a1;
    }
    return result;
}

sint32 sub_8006075C(sint32 a1)
{
    FUNCTION_MARKER(0x8006075Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v2;
    int result;
    int v4;
    int v5;
    bool v6; // dc
    int v7;
    v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
    sub_80017140((*SF_DRAFT_PTR(__int16, (a1 + 2))), sf_draft_guest_address(&v7), (*SF_DRAFT_PTR(uint32, 0x80116798u)));
    (*SF_DRAFT_PTR(uint32, 0x8011E660u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 20));
    (*SF_DRAFT_PTR(uint32, 0x8011E664u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 24));
    result = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 28));
    (*SF_DRAFT_PTR(uint32, 0x8011E664u)) = (sint32)(0u - (*SF_DRAFT_PTR(uint32, 0x8011E664u)));
    (*SF_DRAFT_PTR(uint32, 0x8011E668u)) = result;
    if (v2)
    {
        result = *SF_DRAFT_PTR(_DWORD, (v2 + 32)) & 0x200;
        if (result)
        {
            if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 24)) + 8)) > 0 && *SF_DRAFT_PTR(__int16, (a1 + 2)) != (*SF_DRAFT_PTR(uint16, 0x801169A0u)))
            {
                sub_8005DE18(a1);
                sub_80062220(a1);
                v4 = *SF_DRAFT_PTR(__int16, (a1 + 2));
                if (v4 != 666 && *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v4 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 92)
                    sub_80066F90(a1);
            }
            if ((*SF_DRAFT_PTR(_DWORD, (v2 + 32)) & 4) != 0)
                sub_80058BC0(*SF_DRAFT_PTR(__int16, (a1 + 2)));
            if (*SF_DRAFT_PTR(uint8, (v2 + 79)) != 255)
                ++*SF_DRAFT_PTR(_BYTE, (v2 + 79));
            v5 = *SF_DRAFT_PTR(uint8, (v2 + 78));
            v6 = v5 == 0;
            result = v5 - 1;
            if (!v6)
                *SF_DRAFT_PTR(_BYTE, (v2 + 78)) = result;
        }
    }
    return result;
}

sint32 sub_80027AB8(sint16 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80027AB8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v2;
    int v3;
    int v5;
    int v6;
    int v7;
    int result;
    uint8 v9;
    bool v10; // dc
    int v11;
    int v12;
    v2 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v3 = *SF_DRAFT_PTR(__int16, (v2 + 2));
    if (v3 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v6 = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
    }
    else
    {
        v5 = 76 * v3 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        v6 = *SF_DRAFT_PTR(uint8, (v5 + 36));
        if (!*SF_DRAFT_PTR(_BYTE, (v5 + 36)))
        {
            v7 = *SF_DRAFT_PTR(_DWORD, (v5 + 36)) & 0x3000;
            if (v7 == 4096)
                v6 = 19;
            else
                v6 = v7 == 0x2000 ? 0x14 : 0;
        }
    }
    if (a2 == 100)
        return sub_80046468(a1, 100, 1);
    result = 16;
    if ((unsigned int)((*SF_DRAFT_PTR(uint32, 0x80115E80u)) - 2) >= 2)
    {
        v9 = 0;
        if (v6 == 16 || (unsigned int)(v6 - 6) < 2)
            v9 = 1;
        v10 = (uint8)sub_800463D0(v6) != 0;
        result = v9;
        if (v10 || v9)
        {
            v11 = v9;
            if (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 408)) + 60)) == 5)
            {
                sub_80028F3C((*SF_DRAFT_PTR(__int16, (v2 + 2))), 5);
                v11 = v9;
            }
            v12 = 85;
            if (!v11)
                v12 = 62;
            return sub_80028F3C((*SF_DRAFT_PTR(__int16, (v2 + 2))), v12);
        }
    }
    return result;
}

sint32 sub_8003E6E0(sint8 a1)
{
    uint32 camera, first, object, slot, index, total;
    FUNCTION_MARKER(0x8003E6E0u, "SCUS_942.40");
    camera = r_u32(0x80115D84u);
    first = r_u32(0x8011C138u);
    object = r_u32(camera);
    if (first)
        return 0;
    total = (uint8)a1 ? 36u : 30u;
    slot = 0x8011C138u;
    for (index = 0u; index < total; ++index)
    {
        if (!r_u32(slot))
            sub_800C7BB0(object, slot);
        slot += 24u;
    }
    sub_80040FDC(0x8011C138u, 12, 0x40FF40u, 0);
    if ((uint8)a1)
    {
        sub_80040FDC(0x8011C258u, 8, 0x1EC01Eu, 0);
        sub_80040FDC(0x8011C318u, 8, 0x19A019u, 0);
        sub_80040FDC(0x8011C3D8u, 8, 0x148014u, 0);
        w_u16(0x801169EEu, 1u);
    }
    else
    {
        sub_80040FDC(0x8011C258u, 6, 0x1EC01Eu, 0);
        sub_80040FDC(0x8011C2E8u, 6, 0x19A019u, 0);
        sub_80040FDC(0x8011C378u, 6, 0x148014u, 0);
        w_u16(0x801169EEu, 2u);
    }
    return 1;
}

sint32 sub_80047D34(sint32 a1, sint32 a2)
{
    uint32 index = (uint32)a2;
    uint32 total = r_u16(0x8012F0B0u + 4u * index);
    uint32 current = r_u16(0x8012F0B2u + 4u * index);
    uint32 text_address, cursor;
    char text[7];
    FUNCTION_MARKER(0x80047D34u, "SCUS_942.40");
    if ((uint16)a1 == 0xFFFFu)
        return 0xFFFF;
    if ((a2 == 24 || r_u8(0x8010C38Du + 32u * index) * ((r_u32(0x8010C390u + 32u * index) & 7u) + 1u)) && a2 != 14)
    {
        if (current >= 100u)
            current = 99u;
        text[0] = (char)(current / 10u + 48u);
        text[1] = (char)(current % 10u + 48u);
        if (total == 0u)
            text[2] = 0;
        else
        {
            text[2] = '/';
            cursor = 3u;
            if (total >= 100u)
            {
                cursor = 4u;
                text[3] = (char)(total / 100u + 48u);
                total %= 100u;
            }
            text[cursor + 2u] = 0;
            text[cursor] = (char)(total / 10u + 48u);
            text[cursor + 1u] = (char)(total % 10u + 48u);
        }
        text_address = sf_draft_guest_address(text);
    }
    else
        text_address = 0x80115FCCu;
    return (uint16)sub_80086EA0((uint16)a1, text_address);
}

sint32 sub_80048884(sint32 a1, sint32 a2, sint32 a3, sint32 a4, sint8 a9)
{
    FUNCTION_MARKER(0x80048884u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v13;
    int v14;
    _DWORD *v16;
    sint32 request[3];
    if (!a1)
        return 0;
    v13 = (sint32)((uint32)a1 + 12u);
    if (!*SF_DRAFT_PTR(_DWORD, (a1 + 12)))
    {
        v14 = sub_800DE414(424);
        *SF_DRAFT_PTR(_DWORD, (a1 + 12)) = v14;
        if (!v14)
            return 0;
    }
    sub_800223E0(a1, -1, 0);
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, v13) + 265)) = 0;
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, v13) + 352)) = 0;
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, v13) + 353)) = 0;
    v16 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v13));
    v16[89] = 0;
    v16[90] = 0;
    v16[91] = 0;
    v16[92] = 0;
    v16[93] = 0;
    v16[94] = 0;
    v16[96] = 0;
    v16[97] = 0;
    v16[98] = 0;
    v16[99] = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v13) + 408)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v13) + 412)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v13) + 416)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v13) + 420)) = 0;
    if (a9 == 1)
        sub_800489F8(a1);
    if (a2)
    {
        request[0] = 0;
        request[1] = a2;
    }
    else
    {
        request[0] = 2;
        request[1] = a3;
        request[2] = a4;
    }
    sub_80048628(a1, sf_draft_guest_address(&request[0]));
    return 1;
}

sint32 sub_8005EC90(sint32 a1)
{
    FUNCTION_MARKER(0x8005EC90u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int result;
    int v3;
    int v4;
    int v5;
    _DWORD *v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    char v15;
    result = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3164));
    v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
    if (result < 0)
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3164)) = v3;
    v4 = (*SF_DRAFT_PTR(uint32, 0x80116ADCu));
    if ((*SF_DRAFT_PTR(uint32, 0x80116ADCu)))
    {
        v5 = 76 * v3;
        v6 = SF_DRAFT_PTR(_DWORD, (76 * v3 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
        v6[11] = 0;
        *v6 = *SF_DRAFT_PTR(uint8, *SF_DRAFT_PTR(uint32, (v4 + 12)));
        v7 = SF_DRAFT_PTR(uint32, 0x8001390Cu)[1];
        v8 = SF_DRAFT_PTR(uint32, 0x80013914u)[0];
        v6[1] = SF_DRAFT_PTR(uint32, 0x8001390Cu)[0];
        v6[2] = v7;
        v6[3] = v8;
        v9 = SF_DRAFT_PTR(uint32, 0x8001391Cu)[0];
        v10 = SF_DRAFT_PTR(uint32, 0x8001391Cu)[1];
        v6[4] = SF_DRAFT_PTR(uint32, 0x80013914u)[1];
        v6[5] = v9;
        v6[6] = v10;
        v11 = SF_DRAFT_PTR(uint32, 0x8001391Cu)[3];
        v6[7] = SF_DRAFT_PTR(uint32, 0x8001391Cu)[2];
        v6[8] = v11;
        sf_draft_call(0x8014C94Cu, 2, (const uint32[]){(sint16)v3, *SF_DRAFT_PTR(uint32, 0x80127DC0u)});
        v12 = *SF_DRAFT_PTR(_DWORD, (v5 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        if (!*SF_DRAFT_PTR(_DWORD, (v12 + 8)))
            sub_800DDC34(1, 0, sf_draft_guest_address(SF_DRAFT_PTR(char, 0x80116000u)), 4443);
        v13 = sub_800DE414(88);
        v14 = v12;
        if (!v13)
        {
            sub_800DDC34(1, 0, sf_draft_guest_address(SF_DRAFT_PTR(char, 0x80116000u)), 4445);
            v14 = v12;
        }
        v15 = *SF_DRAFT_PTR(_BYTE, (v14 + 32));
        *SF_DRAFT_PTR(_BYTE, (v14 + 33)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v14 + 28)) = v13;
        *SF_DRAFT_PTR(_BYTE, (v14 + 32)) = v15 | 0x40;
        sub_80023214(v14, 0);
        result = 32;
        *SF_DRAFT_PTR(_DWORD, (v13 + 32)) = 32;
    }
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2916)) = 0;
    return result;
}

sint32 sub_800638E4(void)
{
    FUNCTION_MARKER(0x800638E4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v1;
    __int16 v2;
    int v3;
    int result;
    int v5;
    int v6;
    int v7;
    bool v8; // dc
    v1 = 5;
    while (1)
    {
        v2 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3554)) + 1;
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3554)) = v2;
        if (v2 >= 6)
            *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3554)) = 0;
        v3 = SF_DRAFT_PTR(uint32, 0x8012F120u)[*SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3554))];
        result = 666;
        if (v3 < 0 || v3 != 666 && (result = 3, *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v3 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 3))
        {
            --v1;
            goto LABEL_16;
        }
        v5 = *SF_DRAFT_PTR(_DWORD, (76 * v3 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        result = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 24)) + 8));
        --v1;
        if (result != -1)
            break;
    LABEL_16:
        if (v1 == -1)
            return result;
    }
    v6 = *SF_DRAFT_PTR(_DWORD, (v5 + 28));
    v7 = *SF_DRAFT_PTR(_DWORD, (v6 + 32));
    result = v7 & 0x2000;
    if (*SF_DRAFT_PTR(_BYTE, (v6 + 65)))
    {
        v8 = result == 0;
        result = v7 & 0x1000;
        if (!v8)
        {
            if ((v7 & 0x1000) == 0 || (result = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2868)), *SF_DRAFT_PTR(__int16, (v5 + 2)) == result))
            {
                result = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 12)) + 404)) & 0x100000;
                if (result)
                {
                    result = *SF_DRAFT_PTR(_DWORD, (v6 + 60));
                    if (!result)
                        return sub_800630C0(v5, (*SF_DRAFT_PTR(__int16, (v6 + 44))));
                }
            }
        }
    }
    return result;
}

#include "game_draft.h"
#include <stdio.h>
#include <stdlib.h>

sint32 sub_80088290(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80088290u, "SCUS_942.40");
    volatile uint32 *point = SF_DRAFT_PTR(uint32, a1);
    volatile uint32 *packet = SF_DRAFT_PTR(uint32, a2);
    volatile uint8 *valid = SF_DRAFT_PTR(uint8, a3);
    volatile uint32 *current = packet;
    uint32 count, index = 0u, next, offset, dz, dx, relative, sum;
    *valid = 1u;
    count = packet[0];
    if ((sint32)count <= 0)
        return 1;
    for (;;)
    {
        next = index + 1u;
        offset = next == count ? 0u : (next << 2);
        dz = current[3];
        dz -= packet[offset + 3u];
        dx = packet[offset + 1u];
        dx -= current[1];
        relative = point[0];
        relative -= current[1];
        sum = relative * dz;
        relative = point[2];
        relative -= current[3];
        sum += relative * dx;
        if ((sint32)sum > 0)
        {
            *valid = 0u;
            return 1;
        }
        count = packet[0];
        index = next;
        if ((sint32)index >= (sint32)count)
            return 1;
        current += 4;
    }
}

sint32 sub_800DC8AC(uint32 a1, sint32 a2, sint32 a3)
{
    uint32 vector[3];
    uint32 child = *SF_DRAFT_PTR(uint32, a1 + 32);
    uint32 destination;
    sint32 result;
    FUNCTION_MARKER(0x800DC8ACu, "SCUS_942.40");
    if (child)
    {
        result = sub_800DD8C0(a3, a2, *SF_DRAFT_PTR(uint32, child + 32), sf_draft_guest_address(vector));
        vector[1] = 0u - vector[1];
        destination = *SF_DRAFT_PTR(uint32, a1 + 32);
        *SF_DRAFT_PTR(uint32, destination + 20) = vector[0];
        destination = *SF_DRAFT_PTR(uint32, a1 + 32);
        *SF_DRAFT_PTR(uint32, destination + 24) = vector[1];
        destination = *SF_DRAFT_PTR(uint32, a1 + 32);
        *SF_DRAFT_PTR(uint32, destination + 28) = vector[2];
        destination = *SF_DRAFT_PTR(uint32, a1 + 32);
        *SF_DRAFT_PTR(uint8, destination + 44) = 1;
    }
    else
    {
        result = sub_800DD8C0(a3, a2, 0, sf_draft_guest_address(vector));
        vector[1] = 0u - vector[1];
        *SF_DRAFT_PTR(uint32, a1 + 20) = vector[0];
        *SF_DRAFT_PTR(uint32, a1 + 24) = vector[1];
        *SF_DRAFT_PTR(uint32, a1 + 28) = vector[2];
    }
    return result;
}

sint32 sub_8001B040(void)
{
    FUNCTION_MARKER(0x8001B040u, "SCUS_942.40");
    uint32 index, slot, entry, field, model;
    for (index = 0u; index < 2u; ++index)
    {
        slot = 0x80115D74u + 4u * index;
        entry = r_u32(slot);
        if (entry)
        {
            field = r_u32(entry);
            model = r_u32(field);
            sub_800DC40C(model, 0u, (sint32)(0x80130158u + 32u * index));
            field = r_u32(r_u32(slot));
            w_u16(field + 4u, (uint16)r_u32(0x8012C9E8u + 4u * index));
        }
    }
    for (index = 0u; index < 2u; ++index)
    {
        entry = r_u32(0x80115D74u + 4u * index);
        if (entry)
            sub_80019954(entry);
    }
    return 1;
}

sint32 sub_8006FB70(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8006FB70u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v2;
    int v3;
    int v4;
    int v5;
    int result;
    int v7;
    int v8;
    v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    v3 = *SF_DRAFT_PTR(_DWORD, (v2 + 404));
    if ((v3 & 4) != 0)
    {
        *SF_DRAFT_PTR(_DWORD, (v2 + 404)) = v3 & 0xFFFFFEFF;
        v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
        v3 = *SF_DRAFT_PTR(_DWORD, (v2 + 404));
    }
    if ((v3 & 0x100000) != 0)
        *SF_DRAFT_PTR(_DWORD, (v2 + 404)) = v3 & 0xFFF7FFFF;
    if (a2 <= 0x40000 || (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) & 4) != 0)
    {
        v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
        v5 = *SF_DRAFT_PTR(_DWORD, (v4 + 404));
        if ((v5 & 0x100000) == 0)
            *SF_DRAFT_PTR(_DWORD, (v4 + 404)) = v5 | 0x80000;
    }
    result = a2 > 0x40000;
    if (a2 > 0x40000)
    {
        v7 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
        v8 = *SF_DRAFT_PTR(_DWORD, (v7 + 404));
        result = v8 | 0x100;
        if ((v8 & 4) == 0)
            *SF_DRAFT_PTR(_DWORD, (v7 + 404)) = result;
    }
    return result;
}

sint32 sub_8008005C(void)
{
    FUNCTION_MARKER(0x8008005Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v1;
    int result;
    int v3;
    int v4;
    int v5;
    int v6;
    v1 = 0;
    result = 15 * (*SF_DRAFT_PTR(uint16, 0x80116946u)) + 144;
    v3 = (*SF_DRAFT_PTR(uint32, 0x80116A60u)) + result;
    if (*SF_DRAFT_PTR(int, (SF_DRAFT_GP + 3304)) > 0)
    {
        v4 = 0;
        do
        {
            v5 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3620)) + v4;
            v6 = *SF_DRAFT_PTR(_DWORD, (v5 + 12));
            if (*SF_DRAFT_PTR(int, (v5 + 16)) <= 0 && v6 != (*SF_DRAFT_PTR(uint16, 0x80116946u)) && !(uint8)sub_800808C4((__int16)v6, v3, 1))
                sub_80081CB4(v6);
            result = ++v1 < *SF_DRAFT_PTR(sint32, (SF_DRAFT_GP + 3304));
            v4 += 20;
        } while (v1 < *SF_DRAFT_PTR(sint32, (SF_DRAFT_GP + 3304)));
    }
    return result;
}

sint32 sub_80027C54(sint32 a1)
{
    FUNCTION_MARKER(0x80027C54u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int result;
    *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 24)) + 8)) = 150;
    *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 24)) + 6)) = 600;
    sub_8004532C(1, (3 * (uint8)(*SF_DRAFT_PTR(uint8, 0x8010C3AEu))));
    sub_8004532C(13, (uint8)(*SF_DRAFT_PTR(uint8, 0x8010C52Eu)));
    sub_8004532C(14, 99);
    sub_8004532C(21, 0);
    if ((*SF_DRAFT_PTR(uint16, 0x80130C88u)) >= 15)
        sub_8004532C(18, 0);
    sub_80023214((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)), 1);
    sub_80045E24((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)), 1, 1);
    sub_80045C04((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)));
    sub_80040294();
    result = (uint8)(*SF_DRAFT_PTR(uint8, 0x80116AF0u));
    if (!(*SF_DRAFT_PTR(uint8, 0x80116AF0u)))
        return sub_80092590();
    return result;
}

sint32 sub_800182C0(sint32 a1, uint8 a2)
{
    uint32 slot, value;
    FUNCTION_MARKER(0x800182C0u, "SCUS_942.40");
    if (a2 == 1u)
        sub_800182C0(a1, 0u);
    if (!a1)
        return 0;
    for (slot = 0u; slot < 2u; ++slot)
    {
        value = r_u32(0x80115D74u + 4u * slot);
        if (a2 == 1u)
        {
            if (!value)
            {
                w_u32(0x80115D74u + 4u * slot, (uint32)a1);
                return 1;
            }
        }
        else if (value == (uint32)a1)
        {
            w_u32(0x80115D74u + 4u * slot, 0u);
            return 1;
        }
    }
    return 0;
}

static uint32 sf_73b78_request_read(uint32 address)
{
    XportMemoryRegion region;
    uint32 offset, value;
    const void *source = sf_draft_guest_ptr(address);
    if (!source || !xport_memory_readable(source, sizeof(value)))
    {
        fprintf(stderr, "Invalid 80073B78 request %08X\n", address);
        abort();
    }
    if (xport_memory_pointer_identity(source, sizeof(value), &region, &offset))
        return r_u32(address);
    memcpy(&value, source, sizeof(value));
    return value;
}

sint32 sub_80073B78(uint32 a1, uint32 a2)
{
    uint32 node, first, second, third, fourth;
    FUNCTION_MARKER(0x80073B78u, "SCUS_942.40");
    if (!r_u32(0x80116058u))
        return 0;
    node = r_u32(a2);
    if (node)
    {
        first = sf_73b78_request_read(a1);
        do
        {
            if (r_u32(node) == first)
                return 0;
            node = r_u32(node + 16u);
        } while (node);
    }
    /* The original reads physical RAM zero after the list is exhausted */
    first = r_u32(node);
    second = sf_73b78_request_read(a1);
    if (first == second)
        return 0;
    node = r_u32(0x80116058u);
    w_u32(0x80116058u, r_u32(node + 16u));
    first = sf_73b78_request_read(a1);
    second = sf_73b78_request_read(a1 + 4u);
    third = sf_73b78_request_read(a1 + 8u);
    fourth = sf_73b78_request_read(a1 + 12u);
    w_u32(node, first);
    w_u32(node + 4u, second);
    w_u32(node + 8u, third);
    w_u32(node + 12u, fourth);
    first = sf_73b78_request_read(a1 + 16u);
    w_u32(node + 16u, first);
    w_u8(node + 7u, 1u);
    sub_80073B28((sint32)node, a2);
    return 1;
}

sint32 sub_800DA474(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800DA474u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    int v4;
    int result;
    int v6;
    int v7;
    int v8;
    sub_800EBBC4(sf_draft_guest_address(a1_view), sf_draft_guest_address(a2_view));
    a2_view[5] = a1_view[5];
    a2_view[6] = a1_view[6];
    a2_view[7] = a1_view[7];
    v6 = a1_view[5];
    v7 = a1_view[6];
    v4 = a1_view[7];
    v6 = -v6;
    v7 = -v7;
    v8 = -v4;
    sub_800EADF4(sf_draft_guest_address(a2_view), sf_draft_guest_address(&v6), sf_draft_guest_address(&v6));
    a2_view[5] = v6;
    a2_view[6] = v7;
    result = 0;
    a2_view[7] = v8;
    return result;
}

sint32 sub_8006D610(sint32 a1)
{
    FUNCTION_MARKER(0x8006D610u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *v1 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
    int v2;
    int v3;
    int v4;
    unsigned int v5;
    int result;
    int v7;
    sub_8006CFBC(a1);
    if (v1[743])
    {
        v2 = 0;
        v3 = 0;
        do
        {
            v4 = SF_DRAFT_PTR(uint32, 0x8011E8C8u)[v3];
            if (v4 != -1)
                sub_8006BFF0(v4, SF_DRAFT_PTR(uint32, 0x8011E8CCu)[v3], SF_DRAFT_PTR(uint32, 0x8011E8D0u)[v3], -1, -1);
            ++v2;
            v3 += 3;
        } while (v2 < 10);
    }
    v5 = v1[745];
    result = -1;
    if (v5 != -1)
    {
        v7 = v1[744];
        result = v5 < (*SF_DRAFT_PTR(uint32, 0x801169A4u)) - v7;
        if (v5 < (*SF_DRAFT_PTR(uint32, 0x801169A4u)) - v7)
            return sub_8006D408(v5);
    }
    return result;
}

uint32 sub_800D769C(void)
{
    FUNCTION_MARKER(0x800D769Cu, "SCUS_942.40");
    uint32 index = r_u32(0x80116584u) + 1u;
    uint32 frames = r_u32(0x8011657Cu) + 1u;
    uint32 elapsed;
    w_u32(0x8011657Cu, frames);
    w_u32(0x80116584u, index);
    w_u32(0x80116580u, r_u32(0x80116580u) + 1u);
    if (index == 100u)
    {
        index = 0u;
        w_u32(0x80116584u, 0u);
    }
    w_u32(0x8012269Cu + index * 4u, r_u32(0x8011689Cu));
    elapsed = r_u32(0x8011689Cu) - r_u32(0x80116574u);
    if (elapsed >= (sub_800E4C68() ? 50u : 60u))
    {
        w_u32(0x8011657Cu, 0u);
        w_u32(0x80116574u, r_u32(0x8011689Cu));
        w_u32(0x80116578u, frames);
    }
    return (uint32)sub_800CA7FC();
}

sint32 sub_800DBFD4(sint32 a1, sint32 a2, sint32 a3)
{
    sint16 rotation[4];
    uint8 matrix[32];
    sint16 *elements = (sint16 *)matrix;
    FUNCTION_MARKER(0x800DBFD4u, "SCUS_942.40");
    rotation[0] = (sint16)(0u - *SF_DRAFT_PTR(uint32, a3));
    rotation[1] = (sint16)*SF_DRAFT_PTR(uint32, a3 + 4);
    rotation[2] = (sint16)(0u - *SF_DRAFT_PTR(uint32, a3 + 8));
    sub_800EBE94(sf_draft_guest_address(rotation), sf_draft_guest_address(matrix));
    elements[1] = (sint16)(0u - (uint16)elements[1]);
    elements[3] = (sint16)(0u - (uint16)elements[3]);
    elements[5] = (sint16)(0u - (uint16)elements[5]);
    elements[7] = (sint16)(0u - (uint16)elements[7]);
    return sub_800DC0B8(a1, (uint32)a2, sf_draft_guest_address(matrix));
}

sint32 sub_800DCBBC(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a9)
{
    FUNCTION_MARKER(0x800DCBBCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _WORD *a1_view = SF_DRAFT_PTR(_WORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
    _DWORD *a4_view = SF_DRAFT_PTR(_DWORD, a4);
    _DWORD *a9_view = SF_DRAFT_PTR(_DWORD, a9);
    int result;
    __int16 v12[16];
    sub_800DB9E0(sf_draft_guest_address(a1_view), sf_draft_guest_address(a2_view), sf_draft_guest_address(v12));
    *a3_view = v12[0];
    a3_view[1] = v12[3];
    a3_view[2] = v12[6];
    *a4_view = v12[1];
    a4_view[1] = v12[4];
    a4_view[2] = v12[7];
    *a9_view = v12[2];
    a9_view[1] = v12[5];
    result = 0;
    a9_view[2] = v12[8];
    return result;
}

sint32 sub_80083750(sint32 a1, sint16 a2, sint16 a3)
{
    FUNCTION_MARKER(0x80083750u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v3;
    int v4;
    __int16 v6;
    int result;
    int v8;
    int v9;
    v3 = a1;
    v4 = *SF_DRAFT_PTR(_DWORD, a1);
    *SF_DRAFT_PTR(_WORD, (a1 + 14)) = a2;
    v6 = a3 - *SF_DRAFT_PTR(_WORD, (v4 + 6));
    sub_800835C8(a1);
    result = *SF_DRAFT_PTR(_DWORD, v3);
    for (*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, v3) + 6)) = a3; v3; v3 = *SF_DRAFT_PTR(_DWORD, (v3 + 24)))
    {
        v8 = 1;
        result = *SF_DRAFT_PTR(uint16, (v3 + 12)) > 1u;
        if (*SF_DRAFT_PTR(uint16, (v3 + 12)) > 1u)
        {
            v9 = 44;
            do
            {
                ++v8;
                *SF_DRAFT_PTR(_WORD, (v9 + *SF_DRAFT_PTR(_DWORD, v3) + 6)) += v6;
                result = v8 < *SF_DRAFT_PTR(uint16, (v3 + 12));
                v9 += 44;
            } while (v8 < *SF_DRAFT_PTR(uint16, (v3 + 12)));
        }
    }
    return result;
}

sint32 sub_80069BF8(sint16 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x80069BF8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v3;
    int result;
    int *v7;
    v3 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    result = *SF_DRAFT_PTR(_BYTE, (v3 + 32)) & 0x80;
    if ((*SF_DRAFT_PTR(_BYTE, (v3 + 32)) & 0x80) != 0)
    {
        v7 = SF_DRAFT_PTR(int, sub_80039F84((*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v3 + 24)) + 2)))));
        result = 2;
        if (v7)
        {
            if (*SF_DRAFT_PTR(_BYTE, (v3 + 34)) != 2)
                return sub_800CCDD0(a2, a3, 0x8010CE80u, sf_draft_guest_address(v7), v3);
        }
    }
    return result;
}

sint32 sub_80069980(sint16 a1)
{
    FUNCTION_MARKER(0x80069980u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v1;
    bool v2; // dc
    int result;
    int v4;
    v1 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v2 = a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
    *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 24)) + 8)) = -1;
    if (!v2)
    {
        v2 = (*SF_DRAFT_PTR(uint32, 0x80115E80u)) == 0;
        *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 24)) + 6)) = 0;
        if (!v2)
            sub_8002FA48(0);
    }
    result = (unsigned int)*SF_DRAFT_PTR(uint8, (v1 + 34)) - 1 < 2;
    if ((unsigned int)*SF_DRAFT_PTR(uint8, (v1 + 34)) - 1 >= 2)
    {
        v4 = *SF_DRAFT_PTR(_DWORD, (v1 + 8));
        result = *SF_DRAFT_PTR(_BYTE, (v4 + 10)) & 8;
        if ((*SF_DRAFT_PTR(_BYTE, (v4 + 10)) & 8) != 0)
            return sub_800D8F60(v4);
    }
    return result;
}

sint32 sub_800D8930(sint32 a1, sint32 a2, uint32 a3)
{
    uint8 previous;
    uint32 node;
    uint32 head;
    FUNCTION_MARKER(0x800D8930u, "SCUS_942.40");
    previous = r_u8(SF_DRAFT_GP + 0xC3Cu);
    if (a1 == 0 || a2 == 0)
        return 1;
    w_u8(SF_DRAFT_GP + 0xC3Cu, 1u);
    node = sub_800D7614();
    if (node == 0u || node == 0xFFFFFFFFu)
    {
        w_u8(SF_DRAFT_GP + 0xC3Cu, previous);
        return 3;
    }
    head = r_u32(SF_DRAFT_GP + 0xC38u);
    w_u32(node, (uint32)a1);
    w_u32(node + 4u, (uint32)a2);
    w_u32(node + 8u, (uint32)a2);
    w_u32(SF_DRAFT_GP + 0xC38u, node);
    w_u32(node + 12u, head);
    *SF_DRAFT_PTR(uint32, a3) = node;
    w_u8(SF_DRAFT_GP + 0xC3Cu, previous);
    return 0;
}

void sub_80029D88(void)
{
    FUNCTION_MARKER(0x80029D88u, "SCUS_942.40");
    uint32 node = r_u32(0x80115E40u);
    while (node)
    {
        uint32 original_node = node;
        uint32 entity = r_u32(node);
        uint32 state = r_u32(entity + 16u);
        uint32 payload;
        node = r_u32(original_node + 8u);
        payload = r_u32(state + 12u);
        sub_800DE6E0(0x80115E40u, original_node);
        if (r_s16(entity + 2u) != r_s32(0x80116AB0u))
        {
            uint32 flags = r_u32(r_u32(entity + 28u) + 32u);
            if (!(flags & 0x200u))
                continue;
        }
        sub_800297A8((sint32)entity);
        sub_80029CC4(payload);
        sub_80029924((sint32)entity, 0x8010B5D0u);
    }
}

sint32 sub_800C1234(sint32 a1, sint32 a2, sint16 a3, sint16 a4)
{
    FUNCTION_MARKER(0x800C1234u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v5;
    int v6;
    int result;
    __int16 v8;
    __int16 v9[3];
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1952)) = a3;
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1954)) = a4;
    v5 = 60 * a3 / 100;
    v6 = v5 << 16;
    if (v5 >= 128)
        v6 = 8323072;
    sub_800C34C0(v6 >> 16, a4, sf_draft_guest_address(&v8), sf_draft_guest_address(v9), 2);
    if (v8)
        return sub_800F74F4(0, v8, v9[0]);
    result = v9[0];
    if (v9[0])
        return sub_800F74F4(0, v8, v9[0]);
    return result;
}

sint32 sub_800CACF0(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800CACF0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);
    int result;
    int v5;
    int v6;
    uint16 v7;
    char v8[2];
    unsigned int v9;
    if (a1 >= 2048)
        return 1;
    sub_800D7A4C(SF_DRAFT_PTR(uint16, sf_draft_guest_address(&v7)), SF_DRAFT_PTR(uint16, sf_draft_guest_address(v8)));
    v5 = a1 >> 1;
    if (a1 < 0)
        v5 = -(-a1 >> 1);
    result = sub_800D9464(v5, sf_draft_guest_address(&v9));
    if (!result)
    {
        v6 = v7 << 16 >> 17;
        if ((v7 & 0x8000u) != 0)
            v6 = -(-(__int16)v7 >> 1);
        *a2_view = sub_800C6D90(v6, v9);
        return 0;
    }
    return result;
}

sint32 sub_800CFDB0(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800CFDB0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int result;
    int *v3;
    int v4;
    int v5;
    int v6;
    int *v7;
    int v8;
    int v9;
    int v10;
    result = (*SF_DRAFT_PTR(uint32, 0x8012D734u));
    v3 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (a1 + 16)));
    v4 = 528482496;
    if (a2 == (*SF_DRAFT_PTR(uint32, 0x8012D734u)))
        v3 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011650Cu)));
    if (!v3)
        goto LABEL_11;
    result = *v3;
    v5 = 0;
    if (*v3 <= 0)
        goto LABEL_11;
    v6 = 0;
    while (1)
    {
        v7 = SF_DRAFT_PTR(int, (v3[1] + v6));
        result = *v7;
        if (*v7 == a2)
            break;
        result = ++v5 < *v3;
        v6 += 60;
        if (v5 >= *v3)
            goto LABEL_11;
    }
    v8 = v7[3];
    v9 = 0;
    if (v8 > 0)
    {
        do
        {
            v10 = v7[4];
            ++v7;
            ++v9;
            *SF_DRAFT_PTR(_DWORD, v4) = v10;
            result = v9 < v8;
            v4 += 4;
        } while (v9 < v8);
        *SF_DRAFT_PTR(_DWORD, v4) = 0;
    }
    else
    {
    LABEL_11:
        (*SF_DRAFT_PTR(uint32, 0x1F8000C0)) = 0;
    }
    return result;
}

sint32 sub_80091AF0(sint16 a1, sint32 status)
{
    FUNCTION_MARKER(0x80091AF0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int result = status;
    _DWORD *v3;
    if (!result)
    {
        v3 = SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
        result = 666;
        if ((*SF_DRAFT_PTR(_BYTE, (v3[13] + 1)) & 0x80) == 0 && a1 != 666)
        {
            result = 1;
            if (*SF_DRAFT_PTR(_WORD, (20 * *v3 + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 46)
            {
                *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3036)) = 1;
                return sub_8006C620(106, 0, 1);
            }
        }
    }
    return result;
}

uint32 sub_800DE6E0(uint32 head, uint32 node)
{
    FUNCTION_MARKER(0x800DE6E0u, "SCUS_942.40");
    uint32 previous;
    uint32 next;
    uint32 free_head;
    uint32 result;
    if (!node)
    {
        /* TODO This path returns incoming v0, not a defined native result */
        fprintf(stderr, "Unresolved native return at DE6E0 with null node\n");
        abort();
    }
    if (!r_u32(head))
        return 0;
    if ((node >> 24) != 0x80u)
        return 0x00FF0000u;
    result = node & 3u;
    if (((node & 0x00FFFFFFu) - 0x10000u) > 0x1F0000u || result)
        return result;
    previous = r_u32(node + 4u);
    next = r_u32(node + 8u);
    if (previous)
        w_u32(previous + 8u, next);
    else
        w_u32(head, next);
    if (next)
    {
        previous = r_u32(node + 4u);
        w_u32(next + 4u, previous);
    }
    free_head = r_u32(SF_DRAFT_GP + 0x990u);
    result = r_u16(SF_DRAFT_GP + 0x994u);
    w_u32(SF_DRAFT_GP + 0x990u, node);
    result -= 1u;
    w_u32(free_head + 4u, node);
    w_u32(node + 4u, 0u);
    w_u32(node + 8u, free_head);
    w_u16(SF_DRAFT_GP + 0x994u, (uint16)result);
    return result;
}

BOOL sub_800D3050(sint32 a1)
{
    FUNCTION_MARKER(0x800D3050u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v1;
    int v2;
    int v3;
    sint32 result;
    v1 = 0;
    v2 = 5 * a1;
    v3 = 0;
    do
    {
        if (SF_DRAFT_PTR(uint32, 0x8012E130u)[v3 + 8])
            sub_800D69D8(sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x8012E130u)[v3]), (SF_DRAFT_PTR(uint16, 0x8012D69Eu)[122 * (uint16)(*SF_DRAFT_PTR(uint16, 0x8011644Eu))] & 0x10), (SF_DRAFT_PTR(uint32, 0x8013D564u)[v2]), sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x8012E130u)[v3 + 10]));
        result = ++v1 < 60;
        v3 += 14;
    } while (v1 < 60);
    return result;
}

uint32 sub_800671AC(void)
{
    FUNCTION_MARKER(0x800671ACu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v1;
    int *v2;
    char v3;
    int v4;
    int v5;
    int i;
    v1 = *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 2940));
    v2 = 0;
    if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2936)) == 16)
    {
        v2 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011E680u)));
        (*SF_DRAFT_PTR(uint8, 0x8011E69Du)) = 16;
        *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2936)) = 0;
        *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2940)) = 1;
    }
    else
    {
        v4 = 0;
        v5 = 8 * v1;
        for (i = v1 + 1;; ++i)
        {
            v5 += 8;
            if (i >= 16)
            {
                v5 = 0;
                i = 0;
            }
            ++v4;
            if (!SF_DRAFT_PTR(uint8, 0x8011E69Cu)[v5 * 4])
                break;
            if (v4 >= 16)
                return sf_draft_guest_address(v2);
        }
        v3 = *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2936));
        v2 = &SF_DRAFT_PTR(uint32, 0x8011E680u)[v5];
        *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2940)) = i;
        BYTE1(SF_DRAFT_PTR(uint32, 0x8011E680u)[v5 + 7]) = v3;
        *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2936)) = i;
    }
    return sf_draft_guest_address(v2);
}

sint32 sub_800DEDB4(sint32 a1)
{
    FUNCTION_MARKER(0x800DEDB4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v2;
    int v3;
    int v4;
    int result;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    do
    {
        ++v2;
        if (v4 >= 10)
            break;
        v3 = sub_800ED5C0(2, a1 + 12, 0);
        if (v3 == 1)
            v3 = sub_800ED5C0(21, 0, 0);
        v4 = v2;
    } while (!v3);
    result = 0;
    if (!v3)
    {
        sub_800DF43C(37);
        return 37;
    }
    return result;
}

sint32 sub_8006B868(void)
{
    FUNCTION_MARKER(0x8006B868u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int result;
    int *v3;
    int v4;
    int v5;
    result = *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 956));
    if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 956)))
    {
        sub_8006BF1C();
        sub_800C2C68();
        if (*SF_DRAFT_PTR(uint32, SF_DRAFT_GP + 0xB8Cu))
            sub_800BFA30(*SF_DRAFT_PTR(sint32, SF_DRAFT_GP + 0xB8Cu));
        if (*SF_DRAFT_PTR(uint32, SF_DRAFT_GP + 0xB88u))
            sub_800BFA30(*SF_DRAFT_PTR(sint32, SF_DRAFT_GP + 0xB88u));
        v3 = SF_DRAFT_PTR(int, 0x8011E8A0u);
        v4 = 0;
        sub_800BF108(*SF_DRAFT_PTR(sint32, SF_DRAFT_GP + 0xB90u));
        do
        {
            v5 = *v3++;
            ++v4;
            sub_800BF9E4(v5);
            result = v4 < 4;
        } while (v4 < 4);
        *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 956)) = 0;
    }
    return result;
}

sint32 sub_8001C9F0(uint8 a1, sint32 a2, sint8 a3)
{
    FUNCTION_MARKER(0x8001C9F0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    char v6[4];
    int v7;
    v6[0] = a3;
    if ((uint8)sub_8001C780(0, a1, sf_draft_guest_address(v6), sf_draft_guest_address(&v7)) == 1)
    {
        if (a2)
            (*SF_DRAFT_PTR(uint32, 0x80119194u)) = a2;
        sub_8001B584(v7, a1, v6[0]);
    }
    sub_8001C838(0, a1);
    return 1;
}

sint32 sub_80063A6C(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80063A6Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v2;
    int v3;
    int *i;
    int v5;
    int v6;
    bool v7; // dc
    int result;
    v2 = 0;
    v3 = 0;
    if (!(*SF_DRAFT_PTR(uint32, 0x80116B74u)))
        return v3;
    for (i = &(*SF_DRAFT_PTR(uint32, 0x80130F10u));; ++i)
    {
        v5 = *i;
        v6 = -1;
        if (*i)
        {
            if (*SF_DRAFT_PTR(_DWORD, (v5 + 8)) == 1)
                v6 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 72)) + 20)) & 0x3FF;
            else
                v6 = -1;
        }
        if (v6 != a1)
            break;
    LABEL_11:
        if ((uint32)++v2 >= (unsigned int)(*SF_DRAFT_PTR(uint32, 0x80116B74u)))
            return v3;
    }
    if (v6 != a2)
    {
        v7 = v6 < 0;
        result = 0;
        if (v7)
            return result;
        goto LABEL_11;
    }
    return 1;
}

sint32 sub_8008A31C(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8008A31Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    int v2;
    int v3;
    _DWORD *v4;
    int v5;
    v2 = a2_view[9];
    v3 = 0;
    if (v2 > 0)
    {
        v4 = a2_view;
        do
        {
            v5 = v4[10];
            if (*SF_DRAFT_PTR(_DWORD, (v5 + 76)) < 2u)
            {
                v4[10] = a2_view[v2 + 9];
                a2_view[a2_view[9]-- + 9] = v5;
            }
            v2 = a2_view[9];
            ++v3;
            ++v4;
        } while (v3 < v2);
    }
    return sub_80089684(a1, sf_draft_guest_address(a2_view), sf_draft_guest_address(a2_view));
}

sint32 sub_80016184(sint8 a1)
{
    FUNCTION_MARKER(0x80016184u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int result;
    sub_800D85BC(2, 0, 0);
    (*SF_DRAFT_PTR(uint16, 0x8012D97Au)) &= ~1u;
    if (a1 == 3)
        sub_8006BF1C();
    else
        sub_8006B868();
    if (a1 == 5)
        sub_80014CF0();
    sub_80016020(2u);
    result = sub_80084698(0);
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 20)) = a1;
    return result;
}

void sub_8001888C(uint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8001888Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
    int v4;
    int v5;
    int v6;
    if (a1_view)
    {
        a1_view[73] = a2;
        if (a3_view)
        {
            v4 = a3_view[1];
            v5 = a3_view[2];
            v6 = a3_view[3];
            a1_view[102] = *a3_view;
            a1_view[103] = v4;
            a1_view[104] = v5;
            a1_view[105] = v6;
        }
        sub_80019DBC(sf_draft_guest_address(a1_view));
        a1_view[78] = 0;
        a1_view[79] = 0;
        a1_view[80] = 0;
        a1_view[82] = 0;
        a1_view[83] = 0;
        a1_view[84] = 0;
        a1_view[90] = 0;
        a1_view[91] = 0;
        a1_view[92] = 0;
        a1_view[94] = 0;
        a1_view[95] = 0;
        a1_view[96] = 0;
    }
}

uint32 sub_800DE414(sint32 a1)
{
    FUNCTION_MARKER(0x800DE414u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v2;
    unsigned int v5;
    v2 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2436));
    if (!a1)
        return 0;
    if (!v2)
        sub_800DDC34(1, 0, sf_draft_guest_address(SF_DRAFT_PTR(char, 0x800139C8u)), 93);
    v5 = v2 - a1 - ((v2 - a1) & 3);
    if (v5 < *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2432)))
        sub_800DDC34(1, 0, sf_draft_guest_address(SF_DRAFT_PTR(char, 0x800139C8u)), 100);
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2436)) = v5;
    return v5;
}

sint32 sub_80048420(uint32 a1)
{
    FUNCTION_MARKER(0x80048420u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int v1;
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
    v1 = a1_view[17];
    v2 = a1_view[18];
    v3 = a1_view[19];
    *a1_view = a1_view[16];
    a1_view[1] = v1;
    a1_view[2] = v2;
    a1_view[3] = v3;
    v4 = a1_view[21];
    v5 = a1_view[22];
    v6 = a1_view[23];
    a1_view[4] = a1_view[20];
    a1_view[5] = v4;
    a1_view[6] = v5;
    a1_view[7] = v6;
    v7 = a1_view[25];
    v8 = a1_view[26];
    v9 = a1_view[27];
    a1_view[8] = a1_view[24];
    a1_view[9] = v7;
    a1_view[10] = v8;
    a1_view[11] = v9;
    v10 = a1_view[29];
    v11 = a1_view[30];
    v12 = a1_view[31];
    a1_view[12] = a1_view[28];
    a1_view[13] = v10;
    a1_view[14] = v11;
    a1_view[15] = v12;
    return 1;
}

sint32 sub_80085794(sint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80085794u, "SCUS_942.40");
    uint32 window = (uint32)a1;
    uint32 link = r_u32(window + 16u), total = 0u, object, length, factor = 8u;
    uint32 vertical;
    uint16 horizontal;
    while (link != 0u)
    {
        object = r_u32(link);
        length = r_u8(object + 19u);
        link = r_u32(link + 8u);
        total += length;
    }
    if (window && (r_u32(window) & 0x10u))
        factor = 6u;
    vertical = total * factor - (uint32)(sint32)(sint8)r_u8(window + 7u);
    if (window == 0x80120F70u)
        vertical = 0u - vertical;
    vertical += r_u16(window + 10u);
    *SF_DRAFT_PTR(uint16, a3) = (uint16)vertical;
    horizontal = r_u16(window + 8u);
    *SF_DRAFT_PTR(uint16, a2) = horizontal;
    return horizontal;
}

sint32 sub_80028720(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x80028720u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v4;
    int v5;
    int v6;
    int result;
    int v8;
    int *v9;
    v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
    v5 = *SF_DRAFT_PTR(_DWORD, (v4 + 20));
    if (a2 != -1)
    {
        v6 = 32 * a2 + v5;
        *SF_DRAFT_PTR(_DWORD, (v4 + 4)) &= ~*SF_DRAFT_PTR(_DWORD, (v6 + 16));
        result = ~*SF_DRAFT_PTR(_DWORD, (v6 + 8));
        *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 16))) &= result;
    }
    if (a3 != -1)
    {
        v8 = 32 * a3 + v5;
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 4)) |= *SF_DRAFT_PTR(_DWORD, (v8 + 12));
        v9 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (a1 + 16)));
        result = *v9 | *SF_DRAFT_PTR(_DWORD, (v8 + 4));
        *v9 = result;
    }
    return result;
}

sint32 sub_8002C2E8(sint32 a1, sint32 a2, sint8 a3)
{
    FUNCTION_MARKER(0x8002C2E8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v3;
    int result;
    v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
    if (a3)
    {
        *SF_DRAFT_PTR(_BYTE, a1) = *SF_DRAFT_PTR(_BYTE, a1) & 0x77 | 8;
        *SF_DRAFT_PTR(_WORD, (v3 + 8)) = *SF_DRAFT_PTR(_WORD, (v3 + 6));
    }
    else
    {
        *SF_DRAFT_PTR(_BYTE, a1) = *SF_DRAFT_PTR(_BYTE, a1) & 0x77 | 0x80;
        *SF_DRAFT_PTR(_WORD, (v3 + 8)) = -1;
    }
    if ((*SF_DRAFT_PTR(_BYTE, a2) & 0x40) != 0)
        return sub_8002C264(sf_draft_guest_address(SF_DRAFT_PTR(uint8, a1)));
    result = *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a2 + 8)));
    if (result)
        return sub_8002C264(sf_draft_guest_address(SF_DRAFT_PTR(uint8, a1)));
    return result;
}

sint32 sub_800511A0(sint32 a1)
{
    FUNCTION_MARKER(0x800511A0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v2;
    int v3;
    __int16 *v4;
    int v5;
    if ((uint16)(*SF_DRAFT_PTR(uint16, 0x80130C88u)) >= 0x15u)
        return *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3824));
    v2 = a1;
    v3 = 0;
    v4 = SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(uint32, 0x8010C714u))) + 7 * (*SF_DRAFT_PTR(uint16, 0x80130C88u));
    if (SF_DRAFT_PTR(uint8, 0x8010C6FCu)[(*SF_DRAFT_PTR(uint16, 0x80130C88u))])
    {
        while (1)
        {
            v5 = *v4;
            ++v3;
            if (v5 - 128 < a1)
                break;
            ++v4;
            if (v3 >= (uint8)SF_DRAFT_PTR(uint8, 0x8010C6FCu)[(*SF_DRAFT_PTR(uint16, 0x80130C88u))])
                return a1;
        }
        return v5 - 96;
    }
    return v2;
}

sint32 sub_800CFC08(void)
{
    FUNCTION_MARKER(0x800CFC08u, "SCUS_942.40");
    uint32 descriptor = 0x8012EE58u;
    uint32 index;
    for (index = 0u; index < 24u; ++index)
    {
        uint32 allocation;
        w_u32(descriptor, 8u);
        allocation = sub_800DE414(1024u);
        w_u32(descriptor + 4u, allocation);
        sub_800E9C44(0u, 0u, descriptor);
        descriptor += 20u;
    }
    return 24576;
}

sint32 sub_800198CC(sint32 a1, uint32 a2, sint8 a3, uint32 a4)
{
    FUNCTION_MARKER(0x800198CCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    _DWORD *a4_view = SF_DRAFT_PTR(_DWORD, a4);
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    v5 = 1;
    if (a1)
    {
        if (a1 == 1)
        {
            if (a3 == 1)
            {
                v9 = a4_view[3];
                v10 = a4_view[4];
                v11 = a4_view[5];
                *a2_view = a4_view[2];
                a2_view[1] = v9;
                a2_view[2] = v10;
                a2_view[3] = v11;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        v6 = a2_view[1];
        v7 = a2_view[2];
        v8 = a2_view[3];
        a4_view[2] = *a2_view;
        a4_view[3] = v6;
        a4_view[4] = v7;
        a4_view[5] = v8;
        a4_view[6] = sf_draft_guest_address(a2_view);
    }
    return v5;
}

sint32 sub_8007FFD0(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8007FFD0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    v2 = *a1_view - *a2_view;
    if (v2 < 0)
        v2 = *a2_view - *a1_view;
    v3 = a1_view[1];
    v4 = a2_view[1];
    v5 = v3 - v4;
    if (v3 - v4 < 0)
        v5 = v4 - v3;
    v6 = a1_view[2];
    v7 = a2_view[2];
    v8 = v6 - v7;
    if (v6 - v7 < 0)
        v8 = v7 - v6;
    v9 = v2;
    if (v2 < v5)
    {
        v2 = v5;
        v5 = v9;
    }
    if (v2 < v8)
    {
        v10 = v2;
        v2 = v8;
        v8 = v10;
    }
    return v2 + ((v5 + v8) >> 2);
}

BOOL sub_800DA52C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800DA52Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
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
    sint32 result;
    v2 = a1_view[1];
    v3 = a1_view[3];
    v4 = *a1_view;
    v5 = v2 * v3;
    v6 = a1_view[4];
    v7 = v6 * *a1_view;
    v8 = a1_view[5];
    v9 = v8 * v2;
    v10 = a1_view[2];
    v11 = v10 * v3;
    a2_view[2] = v5 - v7;
    *a2_view = v5 - v7;
    a2_view[1] = v9 - v10 * v6;
    result = *a2_view == 0;
    a2_view[3] = v11 - v8 * v4;
    return result;
}

sint32 sub_80025B90(sint16 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80025B90u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int result;
    uint8 v3;
    if (a1 >= 0)
    {
        result = (*SF_DRAFT_PTR(uint32, 0x801169D4u));
        if (a1 == (*SF_DRAFT_PTR(uint32, 0x801169D4u)))
        {
            switch (a2)
            {
                case 27:
                case 28:
                case 31:
                case 94:
                    v3 = 1;
                    goto LABEL_6;
                case 32:
                case 33:
                case 63:
                case 69:
                    v3 = 0;
                LABEL_6:
                    result = sub_8001CA84(v3, 0, 0);
                    break;
                default:
                    return result;
            }
        }
    }
    return result;
}

sint32 sub_80028A98(sint32 a1)
{
    FUNCTION_MARKER(0x80028A98u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v1;
    int v2;
    int v3;
    int v4;
    int result;
    v1 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v2 = *SF_DRAFT_PTR(_DWORD, (v1 + 16));
    v3 = 0;
    v4 = *SF_DRAFT_PTR(_DWORD, (v2 + 12));
    *SF_DRAFT_PTR(_DWORD, (v4 + 8)) = -1;
    *SF_DRAFT_PTR(_WORD, (v4 + 108)) = 0;
    do
    {
        *SF_DRAFT_PTR(_DWORD, (v4 + 12)) = 255;
        *SF_DRAFT_PTR(_DWORD, (v4 + 24)) = 0;
        ++v3;
        v4 += 4;
    } while (v3 < 3);
    *SF_DRAFT_PTR(_BYTE, (v2 + 8)) = 1;
    *SF_DRAFT_PTR(_BYTE, (v2 + 9)) = 2;
    *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v1 + 16))) = 0;
    result = *SF_DRAFT_PTR(_DWORD, (v1 + 16));
    *SF_DRAFT_PTR(_DWORD, (result + 4)) = 0;
    return result;
}

sint32 sub_800196E4(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800196E4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    int v2;
    v2 = 1;
    if (a1_view[1])
    {
        if (a2_view)
        {
            if (*a2_view == 1)
                a1_view[19] = a1_view[15];
            if (a2_view[1] == 1)
                a1_view[20] = a1_view[16];
            if (a2_view[2] == 1)
                a1_view[21] = a1_view[17];
        }
        else
        {
            return 0;
        }
    }
    else
    {
        a1_view[19] = a1_view[15];
    }
    return v2;
}

sint32 sub_8008BB2C(void)
{
    uint32 offset, text, mode, format;
    FUNCTION_MARKER(0x8008BB2Cu, "SCUS_942.40");
    for (offset = 0u; offset < 16u; offset += 8u)
    {
        w_u16(0x80130CF8u + offset, 0xFFFFu);
        w_u32(0x80130CFCu + offset, 0u);
    }
    text = 0x80116140u;
    mode = r_u32(0x80116B2Cu);
    format = r_u32(0x801161D0u);
    if (mode != 1u)
        text = 0x80116378u;
    sub_800EC924(0x80130130u, format, r_u32(0x8010DE84u), text);
    format = r_u32(0x801161CCu);
    return sub_800EC924(0x80127D70u, format, r_u32(0x80116348u));
}

sint32 sub_800CCC08(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800CCC08u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *v3;
    int result;
    v3 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (a1 + 28)));
    result = *v3;
    if (!*v3)
    {
        *v3 = (int)(*SF_DRAFT_PTR(uint32, 0x8010E0E0u));
        *SF_DRAFT_PTR(_BYTE, (a1 + 10)) |= 0x10u;
        if (a2 != 666)
            sub_800C8A9C(0x800CCBE8u, a2, a1);
        result = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
        *SF_DRAFT_PTR(_DWORD, (result + 28)) = 3162192;
    }
    return result;
}

sint32 sub_80016A64(sint32 a1)
{
    FUNCTION_MARKER(0x80016A64u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v2;
    int result;
    v2 = sub_800DE414(424);
    *SF_DRAFT_PTR(_DWORD, a1) = v2;
    if (!v2)
        return 0;
    *SF_DRAFT_PTR(_DWORD, (v2 + 356)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a1) + 364)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a1) + 384)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a1) + 388)) = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a1) + 392)) = 0;
    result = 1;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a1) + 396)) = 0;
    return result;
}

sint32 sub_8003E908(sint32 a1)
{
    FUNCTION_MARKER(0x8003E908u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v2;
    bool v3; // dc
    int v4;
    int v6;
    int v7;
    if (a1 >= 0)
    {
        v6 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2572));
        v7 = v6 + a1;
        if (v6 < 4)
        {
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2572)) = v7;
            if (v7 >= 5)
                *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2572)) = 4;
        }
    }
    else
    {
        v2 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2572));
        v3 = v2 != 0;
        v4 = v2 + a1;
        if (!v3)
            return 0;
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2572)) = v4;
        if (v4 <= 0)
            sub_8003E87C();
    }
    return *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2572));
}

sint32 sub_80018E78(sint32 a1, uint32 output)
{
    FUNCTION_MARKER(0x80018E78u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v1;
    v1 = *SF_DRAFT_PTR(_DWORD, (a1 + 4));
    if (v1 == 1)
    {
        sub_8001902C((uint32)a1, (sint32)output);
        return 1;
    }
    else if (v1)
    {
        if (v1 == 2)
        {
            sub_800191F0((uint32)a1, (sint32)output);
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        sub_80018FB8((uint32)a1, (sint32)output);
        return 1;
    }
}

sint32 sub_8006E0D8(sint32 a1, sint32 a2, sint32 a3, sint32 a4, sint32 a9, sint32 a10)
{
    FUNCTION_MARKER(0x8006E0D8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v10;
    int v11;
    int result;
    int v13;
    v10 = a9;
    v11 = a10;
    result = 0;
    if (a1)
    {
        v13 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
        if (v13)
        {
            *SF_DRAFT_PTR(_BYTE, (v13 + 265)) = 2;
            *SF_DRAFT_PTR(_DWORD, (v13 + 300)) = a2;
            if (a3 < 0)
                a3 = 0;
            if (a4 < 0)
                a4 = 4096;
            if (a9 < 0)
                v10 = 0;
            result = 1;
            if (a10 < 0)
                v11 = 4096;
            *SF_DRAFT_PTR(_DWORD, (v13 + 304)) = a3;
            *SF_DRAFT_PTR(_DWORD, (v13 + 308)) = a4;
            *SF_DRAFT_PTR(_DWORD, (v13 + 312)) = v10;
            *SF_DRAFT_PTR(_DWORD, (v13 + 316)) = v11;
            *SF_DRAFT_PTR(_DWORD, (v13 + 404)) = 0;
        }
        else
        {
            return 0;
        }
    }
    return result;
}

uint32 sub_800DE504(void)
{
    FUNCTION_MARKER(0x800DE504u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v1;
    int *v2;
    int *v3;
    int *result;
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2452)) = 0;
    v1 = 0;
    v2 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80122A7Cu)));
    v3 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80122A94u)));
    do
    {
        if (v1 >= 2547)
            SF_DRAFT_PTR(uint32, 0x80122A90u)[v1] = 0;
        else
            SF_DRAFT_PTR(uint32, 0x80122A90u)[v1] = (int)v3;
        if (v1 * 4)
            SF_DRAFT_PTR(uint32, 0x80122A8Cu)[v1] = (int)v2;
        else
            SF_DRAFT_PTR(uint32, 0x80122A8Cu)[0] = 0;
        SF_DRAFT_PTR(uint32, 0x80122A88u)[v1] = 0;
        v1 += 3;
        v2 += 3;
        v3 += 3;
    } while (v1 < 2550);
    result = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80122A88u)));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2448)) = (*SF_DRAFT_PTR(uint32, 0x80122A88u));
    return sf_draft_guest_address(result);
}

sint32 sub_80020100(uint8 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80020100u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int result;
    if (a1)
    {
        if (a2)
        {
            (*SF_DRAFT_PTR(uint32, 0x80119194u)) = a2;
        }
        else
        {
            result = (*SF_DRAFT_PTR(uint32, 0x80119194u));
            if (!(*SF_DRAFT_PTR(uint32, 0x80119194u)))
                return result;
        }
        if ((*SF_DRAFT_PTR(uint32, 0x801191ECu)) == -1)
            sub_8001C9F0(1u, a2, 1);
    }
    return sub_800182C0(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284)), a1);
}

sint32 sub_8008B82C(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x8008B82Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *v4;
    if ((uint16)(a3 - 18) >= 2u)
    {
        v4 = &(*SF_DRAFT_PTR(uint32, 0x80116140u));
    }
    else
    {
        v4 = &(*SF_DRAFT_PTR(uint32, 0x80116140u));
        if (a2 != 1)
            v4 = &(*SF_DRAFT_PTR(uint32, 0x80116378u));
    }
    return sub_800EC924(a1, sf_draft_guest_address(SF_DRAFT_PTR(const char, *SF_DRAFT_PTR(uint32, (SF_DRAFT_GP + 1252)))), sf_draft_guest_address(SF_DRAFT_PTR(char, *SF_DRAFT_PTR(uint32, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010DE20u))) + (a3 << 16 >> 14))))), v4);
}

uint32 sub_800489F8(sint32 a1)
{
    FUNCTION_MARKER(0x800489F8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int result;
    int v3;
    int v4;
    int v5;
    result = 0;
    if (a1)
    {
        result = 0;
        if (*SF_DRAFT_PTR(_DWORD, (a1 + 12)))
        {
            v3 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 876));
            if (v3)
            {
                do
                {
                    if (v3 == a1)
                        return 0;
                    v3 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 12)) + 420));
                } while (v3);
                v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
                v5 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 876));
                *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 876)) = a1;
                *SF_DRAFT_PTR(_DWORD, (v4 + 420)) = v5;
                return 1;
            }
            else
            {
                *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 876)) = a1;
                return 1;
            }
        }
    }
    return result;
}

sint32 sub_80018FB8(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80018FB8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int v2;
    int v3;
    uint8 v4;
    v2 = *SF_DRAFT_PTR(_DWORD, (a2 + 8));
    v3 = a1_view[39];
    v4 = 1;
    if (v2 >= v3)
    {
        v3 = a1_view[43];
        if (v3 >= v2)
            v3 = *SF_DRAFT_PTR(_DWORD, (a2 + 8));
    }
    a1_view[15] = v3;
    a1_view[35] = 1;
    if (*SF_DRAFT_PTR(_BYTE, (a2 + 44)) == 1)
        return (uint8)sub_800196E4(sf_draft_guest_address(a1_view), 0);
    return v4;
}

void sf_native_cd_set_stream_owner(uint32 enabled);

void sub_800F0764(void)
{
    FUNCTION_MARKER(0x800F0764u, "SCUS_942.40");
    sub_800E3F34();
    sf_native_cd_set_stream_owner(0u);
    if (r_u32(0x80114CE0u) == 1u)
    {
        /* TODO Alternate callback services retain their explicit native boundaries */
        sub_800FF410(0u);
        sub_800FF3E8(0);
    }
    else
    {
        sub_800ED9DC(0u);
        sub_800ED5AC(0u);
    }
    /* Native FIFO cursor reset replaces fixed CD index and request port writes */
    sf_native_cd_reset_data_fifo();
    sub_800E3F44();
}

sint32 sub_800862DC(uint16 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800862DCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *v3;
    int v4;
    int result;
    int v6;
    v3 = SF_DRAFT_PTR(int, sub_80083584(a1));
    v4 = 0;
    if (a2)
    {
        result = 0;
        if (v3)
        {
            do
            {
                v6 = *((uint16 *)v3 + 6);
                v3 = SF_DRAFT_PTR(int, v3[6]);
                v4 += v6;
            } while (v3);
            return v4;
        }
    }
    else
    {
        result = 0;
        if (v3)
            return *((uint16 *)v3 + 6);
    }
    return result;
}

void sub_8008B44C(sint32 a1)
{
    FUNCTION_MARKER(0x8008B44Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _BYTE v2[16];
    sub_80088154(a1);
    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v2);
    sub_80088770(a1);
    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v2);
    nullsub_10();
    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v2);
    sub_80087E64();
}

sint32 sub_8003B2A4(sint32 a1)
{
    FUNCTION_MARKER(0x8003B2A4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int result;
    result = 81920;
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2576)) = 98304 / (32 * a1);
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2580)) = 0x4000;
    return result;
}

uint32 sub_80082724()
{
    FUNCTION_MARKER(0x80082724u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int result;
    (*SF_DRAFT_PTR(uint16, 0x8012D97Au)) &= ~1u;
    if (!(*SF_DRAFT_PTR(uint32, 0x80115C78u)))
        goto LABEL_4;
    while (1)
    {
        result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3796));
        if (!result)
            break;
        while (1)
        {
            sub_8008294C(0);
            sub_8008294C(0);
            if ((*SF_DRAFT_PTR(uint32, 0x80115C78u)))
                break;
        LABEL_4:
            result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3488));
            if (!result)
                return result;
        }
    }
    return result;
}

void sub_80016020(uint32 a1)
{
    FUNCTION_MARKER(0x80016020u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v3;
    if (*SF_DRAFT_PTR(int, (SF_DRAFT_GP + 12)) >= 10)
        sub_800DDC34(1, 0, sf_draft_guest_address(SF_DRAFT_PTR(char, 0x8001009Cu)), 1530);
    v3 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 12)) + 1;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 12)) = v3;
    SF_DRAFT_PTR(uint32, 0x80102AA4u)[v3] = a1;
    sub_80015E80(a1, 1);
}

sint32 sub_800DFC64(uint32 a1)
{
    FUNCTION_MARKER(0x800DFC64u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint32 *a1_view = SF_DRAFT_PTR(uint32, a1);
    int result;
    int v3;
    if (!a1_view)
        return 1;
    result = 1;
    if (!*a1_view)
        return result;
    v3 = *SF_DRAFT_PTR(int, *a1_view);
    if (!v3)
        return 1;
    sub_800DE4A4(v3);
    sub_800DE4A4((int)*a1_view);
    result = 0;
    *a1_view = 0;
    return result;
}

sint32 sub_8003CCD8(sint32 a1)
{
    FUNCTION_MARKER(0x8003CCD8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int result;
    int v2;
    __int16 *v3;
    result = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 28));
    if (result)
    {
        v2 = *SF_DRAFT_PTR(char, (result + 77));
        v3 = &SF_DRAFT_PTR(uint16, 0x8011BA00u)[v2];
        if (*v3 != -1)
            *v3 = -1;
        result = 4 * v2;
        SF_DRAFT_PTR(uint32, 0x8011BB2Cu)[v2] = 0;
    }
    return result;
}

sint32 sub_800C2D4C(void)
{
    FUNCTION_MARKER(0x800C2D4Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v0;
    int result;
    v0 = sub_800C484C(11, 0, 100);
    sub_800C4978(v0);
    sub_800F5C64(0, 0, 1);
    sub_800F74F4(0, 127, 127);
    sub_800F5C64(0, 1, 0);
    result = 127;
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1882)) = 127;
    return result;
}

sint32 sub_80044780(uint8 a1)
{
    FUNCTION_MARKER(0x80044780u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v1;
    v1 = a1;
    if ((uint8)sub_80040B50(a1, sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8010C37Cu)))))
        return (uint8)sub_8014E1B8(v1, (*SF_DRAFT_PTR(uint32, 0x8010C37Cu)));
    else
        return 0;
}

sint32 sub_800DE31C(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800DE31Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    unsigned int *a1_view = SF_DRAFT_PTR(unsigned int, a1);
    unsigned int v4;
    if (!a1_view)
        return 22;
    v4 = *a1_view & 0x8FFFFFFF;
    *a1_view = v4;
    if (a2 != 4)
        *a1_view = v4 | 0x40000000 | ((a2 & 3) << 28);
    return 0;
}

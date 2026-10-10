#include "game_draft.h"
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_80019550();
extern uint32 sub_80019580();
extern uint32 sub_8004AC64();

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x800164ACu 0x800164ac
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800164AC(void)
{
    FUNCTION_MARKER(0x800164ACu, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;

    sub_800D85BC(2, 0, 0);
    sub_800CADE4(0x8014C0A8u, (*SF_DRAFT_PTR(uint32, 0x8013D554u)) + 69632);
    if (*SF_DRAFT_PTR(_DWORD, (v0 + 16)) != 4)
    {
        sub_80016020(3u);
        sub_8006CF48(1);
    }
    (*SF_DRAFT_PTR(uint8, 0x8013D558u)) = 1;
    sub_800CA618();
    sub_800D7A28((*SF_DRAFT_PTR(uint16, 0x8013D540u)), (*SF_DRAFT_PTR(uint16, 0x8013D542u)));
    sub_800CA750();
    sub_800C7A58((*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))));
    return sub_800C2D4C();
}

// FUNCTION_MARKER 0x80049FDCu 0x80049fdc
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80049FDC(void)
{
    FUNCTION_MARKER(0x80049FDCu, "SCUS_942.40");
    _BYTE v1[16];

    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v1);
    sub_80049774();
    sub_8007E314(1);
    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v1);
    sub_80049854();
    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v1);
    sub_800498B4();
    sub_80049ACC();
    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v1);
    sub_80049B24();
    sub_80049D20();
    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v1);
    sub_80049DCC();
    sub_8007E314(0);
    return 1;
}

// FUNCTION_MARKER 0x8004B7C4u 0x8004b7c4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8004B7C4(sint16 a1)
{
    FUNCTION_MARKER(0x8004B7C4u, "SCUS_942.40");
    int v1;
    int result;
    _BYTE v3[16];

    v1 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 16));
    if (*SF_DRAFT_PTR(_BYTE, (v1 + 8)) == 8)
    {
        (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v3);
        return sub_8004AC64(a1);
    }
    else
    {
        result = *SF_DRAFT_PTR(_DWORD, v1) & 0x80000;
        if (!result)
        {
            (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v3);
            return sub_8004B57C(a1);
        }
    }
    return result;
}

// FUNCTION_MARKER 0x80087660u 0x80087660
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80087660(sint32 a1)
{
    FUNCTION_MARKER(0x80087660u, "SCUS_942.40");
    int v1 = SF_DRAFT_GP;
    int v3;
    int v4;
    _BYTE *v5;
    int result;
    _BYTE *i;

    if (a1)
    {
        v3 = *SF_DRAFT_PTR(uint16, (a1 + 12));
        v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
        v5 = SF_DRAFT_PTR(_BYTE, r_u32(a1));
        if (v4)
            result = sub_80087660(v4);
        for (i = v5; v3 > 0; i = v5)
        {
            v5[22] = 0;
            v5[21] = 0;
            v5[20] = 0;
            v5 += 44;
            --v3;
            result = sub_800C7B68(*SF_DRAFT_PTR(_DWORD, (v1 + 3324)), sf_draft_guest_address(i));
        }
        *SF_DRAFT_PTR(_DWORD, a1) = 0;
        *SF_DRAFT_PTR(_BYTE, (a1 + 20)) = 0;
        *SF_DRAFT_PTR(_DWORD, (a1 + 24)) = 0;
        *SF_DRAFT_PTR(_WORD, (a1 + 12)) = 0;
    }
    return result;
}

// FUNCTION_MARKER 0x80049D20u 0x80049d20
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_80049D20(void)
{
    FUNCTION_MARKER(0x80049D20u, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;
    int i;
    int v2;
    int result;
    _BYTE v4[16];

    for (i = *SF_DRAFT_PTR(_DWORD, (v0 + 876)); i; i = *SF_DRAFT_PTR(_DWORD, (v2 + 420)))
    {
        v2 = *SF_DRAFT_PTR(_DWORD, (i + 12));
        result = *SF_DRAFT_PTR(_DWORD, (v2 + 416));
        if (result)
        {
            (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v4);
            sub_800C777C(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (i + 8)) + 12)));
            (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v4);
            sub_80048B0C(i);
            sub_8008B44C(i);
        }
    }
    return;
}

// FUNCTION_MARKER 0x800DD8C0u 0x800dd8c0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DD8C0(sint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    _DWORD *native_a2 = SF_DRAFT_PTR(_DWORD, a2);
    _DWORD *native_a3 = SF_DRAFT_PTR(_DWORD, a3);
    _DWORD *native_a4 = SF_DRAFT_PTR(_DWORD, a4);
    FUNCTION_MARKER(0x800DD8C0u, "SCUS_942.40");
    int v5;
    int v7;
    int v8;
    int v9;
    int result;
    uint32 matrix[8];
    v5 = sub_800DBBD4(sf_draft_guest_address(native_a2), sf_draft_guest_address(native_a3), sf_draft_guest_address(matrix));
    v7 = a1;
    v8 = v5;
    sub_800EADF4(sf_draft_guest_address(matrix), v7, sf_draft_guest_address(native_a4));
    *native_a4 += matrix[5];
    v9 = native_a4[2];
    native_a4[1] += matrix[6];
    result = v8;
    native_a4[2] = v9 + matrix[7];
    return result;
}

// FUNCTION_MARKER 0x800DE644u 0x800de644
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DE644(uint32 a1, sint32 i, sint32 a3)
{
    int *native_a1 = SF_DRAFT_PTR(int, a1);
    FUNCTION_MARKER(0x800DE644u, "SCUS_942.40");
    int v3 = SF_DRAFT_GP;
    _DWORD *v4;
    int result;
    int v6;

    v4 = SF_DRAFT_PTR(_DWORD, r_u32((v3 + 2448)));
    result = 0;
    if (v4)
    {
        v6 = v4[2];
        *SF_DRAFT_PTR(_DWORD, (v3 + 2448)) = v6;
        *SF_DRAFT_PTR(_DWORD, (v6 + 4)) = 0;
        *v4 = a3;
        v4[2] = 0;
        v4[1] = 0;
        if (*native_a1)
        {
            if (!i)
            {
                for (i = *native_a1; *SF_DRAFT_PTR(_DWORD, (i + 8)); i = *SF_DRAFT_PTR(_DWORD, (i + 8)))
                    ;
            }
            *SF_DRAFT_PTR(_DWORD, (i + 8)) = sf_draft_guest_address(v4);
            v4[1] = i;
        }
        else
        {
            *native_a1 = sf_draft_guest_address(v4);
        }
        ++*SF_DRAFT_PTR(_WORD, (v3 + 2452));
        return *native_a1;
    }
    return result;
}

// FUNCTION_MARKER 0x800C8D98u 0x800c8d98
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800C8D98(sint32 a1)
{
    FUNCTION_MARKER(0x800C8D98u, "SCUS_942.40");
    _DWORD *v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;

    v2 = SF_DRAFT_PTR(_DWORD, r_u32(a1));
    *SF_DRAFT_PTR(_DWORD, (a1 + 24)) = 0;
    v3 = v2[1];
    v4 = v2[2];
    v5 = v2[3];
    *SF_DRAFT_PTR(_DWORD, (a1 + 28)) = *v2;
    *SF_DRAFT_PTR(_DWORD, (a1 + 32)) = v3;
    *SF_DRAFT_PTR(_DWORD, (a1 + 36)) = v4;
    *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = v5;
    v6 = v2[5];
    v7 = v2[6];
    v8 = v2[7];
    *SF_DRAFT_PTR(_DWORD, (a1 + 44)) = v2[4];
    *SF_DRAFT_PTR(_DWORD, (a1 + 48)) = v6;
    *SF_DRAFT_PTR(_DWORD, (a1 + 52)) = v7;
    *SF_DRAFT_PTR(_DWORD, (a1 + 56)) = v8;
    sub_800E95B4(*SF_DRAFT_PTR(uint16, (a1 + 4)));
    sub_800E9F84(a1 + 104);
    sub_800C6F44(sf_draft_guest_address((uint16 *)SF_DRAFT_PTR(uint32, 0x8010E1ECu)));
}

// FUNCTION_MARKER 0x800E0364u 0x800e0364
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800E0364(uint32 a1, uint32 a2, uint32 a3)
{
    _DWORD *native_a1 = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *native_a2 = SF_DRAFT_PTR(_DWORD, a2);
    _DWORD *native_a3 = SF_DRAFT_PTR(_DWORD, a3);
    FUNCTION_MARKER(0x800E0364u, "SCUS_942.40");
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;

    v3 = *native_a1 - *native_a2;
    if (v3 < 0)
        v3 = *native_a2 - *native_a1;
    v4 = native_a1[1];
    v5 = native_a2[1];
    v6 = v4 - v5;
    if (v4 - v5 < 0)
        v6 = v5 - v4;
    v7 = native_a1[2];
    v8 = native_a2[2];
    v9 = v7 - v8;
    if (v7 - v8 < 0)
        v9 = v8 - v7;
    v10 = v3;
    if (v3 < v6)
    {
        v3 = v6;
        v6 = v10;
    }
    if (v3 < v9)
    {
        v11 = v3;
        v3 = v9;
        v9 = v11;
    }
    *native_a3 = v3 + ((v6 + v9) >> 2);
    return 0;
}

// FUNCTION_MARKER 0x800D8ED0u 0x800d8ed0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800D8ED0(uint32 a1, uint32 a2)
{
    int *native_a1 = SF_DRAFT_PTR(int, a1);
    __int16 *native_a2 = SF_DRAFT_PTR(__int16, a2);
    FUNCTION_MARKER(0x800D8ED0u, "SCUS_942.40");
    int v4;

    v4 = native_a1[10];
    if ((v4 & 0x4000000) != 0)
    {
        *native_a1 = native_a2[5];
        native_a1[1] = native_a2[6];
        native_a1[2] = native_a2[7];
        native_a1[4] = native_a2[8];
        native_a1[5] = native_a2[9];
        native_a1[6] = native_a2[10];
    }
    else if ((v4 & 0x1000000) != 0)
    {
        sub_800D2850(sf_draft_guest_address(native_a2), sf_draft_guest_address(native_a1));
    }
    return 0;
}

// FUNCTION_MARKER 0x80059EC0u 0x80059ec0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80059EC0(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80059EC0u, "SCUS_942.40");
    int *v2;
    int result;
    int v4;
    int v5;
    bool v6;
    char v7;
    int v8;
    int v9;

    v2 = SF_DRAFT_PTR(int, r_u32((a1 + 28)));
    result = v2[8] & 0x800;
    if ((v2[8] & 0x408) == 0)
    {
        if (result)
        {
            *((_BYTE *)v2 + 69) = 0;
        }
        else
        {
            v4 = sub_80059574(a1, a2);
            v5 = *((uint8 *)v2 + 68);
            v6 = v4 != v5;
            result = 255;
            if (!v6)
            {
                v7 = *((_BYTE *)v2 + 67);
                *((_BYTE *)v2 + 73) = -1;
                v8 = *v2;
                *((_BYTE *)v2 + 67) = v5;
                *((_BYTE *)v2 + 68) = v7;
                v9 = v2[2];
                result = -v8;
                *v2 = result;
                v2[2] = -v9;
            }
        }
    }
    return result;
}

// FUNCTION_MARKER 0x80084C30u 0x80084c30
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_80084C30(unsigned __int8 a1)
{
    FUNCTION_MARKER(0x80084C30u, "SCUS_942.40");
    uint32 channel, node;
    if (a1 >= 7u)
        return 0u;
    channel = 0x80120EF8u + 20u * a1;
    for (;;)
    {
        node = r_u32(channel + 16u);
        if (node == 0u)
            break;
        sub_80087660(r_u32(node));
        node = r_u32(channel + 16u);
        sub_800DE6E0(channel + 16u, node);
    }
    w_u32(channel, 0u);
    sub_800834D8();
    return 1u;
}

// FUNCTION_MARKER 0x8003477Cu 0x8003477c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8003477C(void)
{
    FUNCTION_MARKER(0x8003477Cu, "SCUS_942.40");
    unsigned int v0;
    int *v1;
    int *v2;
    int v3;
    int *v4;
    int v5;
    int v6;
    int v7;
    int v8;

    v0 = 0;
    v1 = SF_DRAFT_PTR(int, 0x80128E90u);
    v2 = SF_DRAFT_PTR(int, 0x8010BAF4u);
    do
    {
        v3 = *v2++;
        ++v0;
        v4 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x8010BCC0u)[6 * v3]);
        v5 = v4[1];
        v6 = v4[2];
        v7 = v4[3];
        *v1 = *v4;
        v1[1] = v5;
        v1[2] = v6;
        v1[3] = v7;
        v8 = v4[5];
        v1[4] = v4[4];
        v1[5] = v8;
        v1 += 6;
    } while (v0 < 9);
    return sub_80034734(0);
}

// FUNCTION_MARKER 0x800348D0u 0x800348d0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800348D0(void)
{
    uint32 index, source, destination, first, second, third, fourth;
    FUNCTION_MARKER(0x800348D0u, "SCUS_942.40");
    for (index = 0u; index < 9u; ++index)
    {
        source = 0x8010BD98u + 24u * r_u32(0x8010BAF4u + 4u * index);
        destination = 0x80129190u + 24u * index;
        first = r_u32(source);
        second = r_u32(source + 4u);
        third = r_u32(source + 8u);
        fourth = r_u32(source + 12u);
        w_u32(destination, first);
        w_u32(destination + 4u, second);
        w_u32(destination + 8u, third);
        w_u32(destination + 12u, fourth);
        first = r_u32(source + 16u);
        second = r_u32(source + 20u);
        w_u32(destination + 16u, first);
        w_u32(destination + 20u, second);
    }
    return sub_80034734(2);
}

// FUNCTION_MARKER 0x800DCEDCu 0x800dcedc
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DCEDC(sint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a9)
{
    char *native_a2 = SF_DRAFT_PTR(char, a2);
    _DWORD *native_a3 = SF_DRAFT_PTR(_DWORD, a3);
    _DWORD *native_a4 = SF_DRAFT_PTR(_DWORD, a4);
    _DWORD *native_a9 = SF_DRAFT_PTR(_DWORD, a9);
    FUNCTION_MARKER(0x800DCEDCu, "SCUS_942.40");
    __int16 v10[16];

    v10[0] = *native_a3;
    v10[3] = native_a3[1];
    v10[6] = native_a3[2];
    v10[1] = *native_a4;
    v10[4] = native_a4[1];
    v10[7] = native_a4[2];
    v10[2] = *native_a9;
    v10[5] = native_a9[1];
    v10[8] = native_a9[2];
    return sub_800DC0B8(a1, sf_draft_guest_address(native_a2), sf_draft_guest_address(v10));
}

// FUNCTION_MARKER 0x80079A70u 0x80079a70
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80079A70(uint32 a1, uint32 a2)
{
    _DWORD *native_a1 = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *native_a2 = SF_DRAFT_PTR(_DWORD, a2);
    FUNCTION_MARKER(0x80079A70u, "SCUS_942.40");
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;

    v2 = *native_a1 - *native_a2;
    if (v2 < 0)
        v2 = *native_a2 - *native_a1;
    v3 = native_a1[1];
    v4 = native_a2[1];
    v5 = v3 - v4;
    if (v3 - v4 < 0)
        v5 = v4 - v3;
    v6 = native_a1[2];
    v7 = native_a2[2];
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

// FUNCTION_MARKER 0x8001D924u 0x8001d924
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001D924(uint32 a1)
{
    _DWORD *native_a1 = SF_DRAFT_PTR(_DWORD, a1);
    FUNCTION_MARKER(0x8001D924u, "SCUS_942.40");
    int v1 = SF_DRAFT_GP;
    int result;

    result = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 284)) + 2712));
    *native_a1 = result;
    return result;
}

// FUNCTION_MARKER 0x8003E87Cu 0x8003e87c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_8003E87C(void)
{
    uint32 camera, object, slot, index, result;
    sint32 mode;
    FUNCTION_MARKER(0x8003E87Cu, "SCUS_942.40");
    camera = r_u32(0x80115D84u);
    mode = r_s16(0x801169EEu);
    object = r_u32(camera);
    result = camera;
    if (mode)
    {
        slot = 0x8011C138u;
        for (index = 0u; index < 36u; ++index)
        {
            if (r_u32(slot))
                sub_800C7BF8(object, slot);
            slot += 24u;
        }
        result = 0u;
        w_u16(0x801169EEu, 0u);
    }
    w_u32(0x80116674u, 0u);
    return result;
}

// FUNCTION_MARKER 0x80019630u 0x80019630
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80019630(sint32 angle, uint32 output)
{
    sint32 magnitude = angle < 0 ? (sint32)(0u - (uint32)angle) : angle;
    sint32 remainder = angle;
    FUNCTION_MARKER(0x80019630u, "SCUS_942.40");
    if (magnitude >= 4097)
        sub_800D92F0(angle, 4096, sf_draft_guest_address(&remainder));
    if (remainder >= 2049)
        remainder = (sint32)((uint32)remainder - 4096u);
    else if (remainder < -2048)
        remainder = (sint32)((uint32)remainder + 4096u);
    *SF_DRAFT_PTR(sint32, output) = remainder;
    return remainder;
}

// FUNCTION_MARKER 0x800DF3B0u 0x800df3b0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DF3B0(sint32 a1)
{
    FUNCTION_MARKER(0x800DF3B0u, "SCUS_942.40");
    int v1 = SF_DRAFT_GP;
    int result;

    if (!a1 || !*SF_DRAFT_PTR(_DWORD, a1))
        return 1;
    if (*SF_DRAFT_PTR(_BYTE, (v1 + 2460)) == 1 && *SF_DRAFT_PTR(_DWORD, a1) == *SF_DRAFT_PTR(_DWORD, (v1 + 2456)))
        sub_800DF6EC(1);
    result = 0;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a1) + 4)) = -892679478;
    *SF_DRAFT_PTR(_DWORD, a1) = 0;
    return result;
}

// FUNCTION_MARKER 0x80016994u 0x80016994
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_80016994(void)
{
    FUNCTION_MARKER(0x80016994u, "SCUS_942.40");
    uint32 node = r_u32(0x80116990u);
    while (node)
    {
        uint32 timer = r_u32(node);
        uint32 remaining = r_u32(timer + 4u);
        uint32 next = r_u32(node + 8u);
        remaining -= 1u;
        w_u32(timer + 4u, remaining);
        if (!remaining)
        {
            uint32 callback = r_u32(timer);
            uint32 argument;
            w_u32(timer, 0);
            sub_800DE6E0(0x80116990u, node);
            argument = r_u32(timer + 8u);
            sf_draft_call(callback, 1, &argument);
        }
        node = next;
    }
}

// FUNCTION_MARKER 0x80015B68u 0x80015b68
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_80015B68(const char *filename, uint32 buffered)
{
    uint32 filename_address = sf_draft_guest_address(filename);
    FUNCTION_MARKER(0x80015B68u, "SCUS_942.40");
    if (filename)
    {
        if (sub_800EC884(filename_address, 0x80102ACCu))
        {
            sub_80015A00(filename, 0x8013D630u, (uint8)buffered);
            sub_800EC894(0x80102ACCu, filename_address);
        }
    }
    else
    {
        (*SF_DRAFT_PTR(uint8, 0x80102ACCu)) = 0;
    }
}

// FUNCTION_MARKER 0x800D8DE8u 0x800d8de8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800D8DE8(uint32 a1, sint32 a2)
{
    _DWORD *native_a1 = SF_DRAFT_PTR(_DWORD, a1);
    FUNCTION_MARKER(0x800D8DE8u, "SCUS_942.40");
    _DWORD *v5;

    if (!native_a1)
        return 0;
    v5 = SF_DRAFT_PTR(uint32, sub_800D8B9C(sf_draft_guest_address(native_a1), 0, a2));
    if ((a2 & 0x1000000) == 0)
        sub_800D8ED0(sf_draft_guest_address(v5), sf_draft_guest_address(native_a1));
    v5[8] = sf_draft_guest_address(native_a1);
    return sf_draft_guest_address(v5);
}

// FUNCTION_MARKER 0x800C610Cu 0x800c610c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C610C(uint32 a1)
{
    uint8 *native_a1 = SF_DRAFT_PTR(uint8, a1);
    FUNCTION_MARKER(0x800C610Cu, "SCUS_942.40");
    return 75 * (60 * (10 * (*native_a1 >> 4) + (*native_a1 & 0xF)) + 10 * (native_a1[1] >> 4) + (native_a1[1] & 0xF)) + 10 * (native_a1[2] >> 4) + (native_a1[2] & 0xF) - 150;
}

// FUNCTION_MARKER 0x800DF32Cu 0x800df32c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DF32C(uint32 a1)
{
    uint32 location;
    FUNCTION_MARKER(0x800DF32Cu, "SCUS_942.40");
    if (a1 == 0u)
        return 1;
    if ((sint32)r_u32(a1 + 8u) < 0)
        return 4;
    if (r_u8(SF_DRAFT_GP + 0x99Cu) == 1u)
        (void)sf_file_cancel_before_location_reset(0, a1);
    /* Snapshot the original unaligned word before overwriting the location */
    location = (uint32)r_u8(a1) | ((uint32)r_u8(a1 + 1u) << 8) | ((uint32)r_u8(a1 + 2u) << 16) | ((uint32)r_u8(a1 + 3u) << 24);
    w_u8(a1 + 12u, (uint8)location);
    w_u8(a1 + 13u, (uint8)(location >> 8));
    w_u8(a1 + 14u, (uint8)(location >> 16));
    w_u8(a1 + 15u, (uint8)(location >> 24));
    location = r_u32(a1 + 4u);
    w_u32(a1 + 16u, location);
    return sub_800DEDB4(a1);
}

// FUNCTION_MARKER 0x80018F3Cu 0x80018f3c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80018F3C(sint32 a1, uint32 output)
{
    FUNCTION_MARKER(0x80018F3Cu, "SCUS_942.40");
    int v1;

    v1 = *SF_DRAFT_PTR(_DWORD, (a1 + 4));
    if (v1 == 1)
    {
        sub_80019580((uint32)a1, output);
        return 1;
    }
    else if (v1)
    {
        if (v1 == 2)
        {
            sub_800195D8((uint32)a1, output);
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        sub_80019550((uint32)a1, output);
        return 1;
    }
}

// FUNCTION_MARKER 0x800DFB74u 0x800dfb74
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DFB74(uint32 a1, sint32 a2, uint32 a3)
{
    int *native_a1 = SF_DRAFT_PTR(int, a1);
    uint32 *native_a3 = SF_DRAFT_PTR(uint32, a3);
    FUNCTION_MARKER(0x800DFB74u, "SCUS_942.40");
    int result;
    int var8[3];

    if (!native_a1 || native_a1 == SF_DRAFT_PTR(uint32, 0x80116624u) || !native_a3)
        return 1;
    result = sub_800DEEF4(sf_draft_guest_address(native_a1), sf_draft_guest_address(var8));
    if (!result)
        return sub_800DF83C(var8[0], a2, sf_draft_guest_address(native_a3), 0, 0);
    return result;
}

// FUNCTION_MARKER 0x800DED2Cu 0x800ded2c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800DED2C(void)
{
    FUNCTION_MARKER(0x800DED2Cu, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;
    int v1;
    int i;
    int *v3;
    int *v4;
    int *result;

    v1 = 0;
    if (!*SF_DRAFT_PTR(_BYTE, (v0 + 2488)))
    {
        *SF_DRAFT_PTR(_BYTE, (v0 + 2488)) = 1;
        for (i = 20; i >= 0; i -= 5)
        {
            SF_DRAFT_PTR(uint32, 0x80125264u)[i] = -892679478;
            v1 = 0;
        }
    }
    v3 = SF_DRAFT_PTR(uint32, 0x80125260u);
    v4 = SF_DRAFT_PTR(int, 0x80125264u);
    do
    {
        result = v3;
        if (*v4 == -892679478)
        {
            *v4 = 0;
            return sf_draft_guest_address(result);
        }
        v3 += 5;
        ++v1;
        v4 += 5;
    } while (v1 < 5);
    return 0;
}

// FUNCTION_MARKER 0x80029E70u 0x80029e70
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80029E70(void)
{
    FUNCTION_MARKER(0x80029E70u, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;

    sub_8002A3F4(0);
    sub_8002D2C8(0);
    sub_8002D2D8(0);
    sub_8002D2E8(0);
    sub_8002D56C(0);
    sub_8002D57C(0);
    *SF_DRAFT_PTR(_BYTE, (v0 + 3848)) = 1;
    *SF_DRAFT_PTR(_DWORD, (v0 + 2520)) = 0;
    sub_80029E48((int)(*SF_DRAFT_PTR(uint32, 0x8010B694u)));
    sub_80029E48((int)(*SF_DRAFT_PTR(uint32, 0x8010B6D4u)));
    return sub_80029E48((int)(*SF_DRAFT_PTR(uint32, 0x8010B714u)));
}

// FUNCTION_MARKER 0x800398A8u 0x800398a8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800398A8(sint32 a1, sint16 a2, sint16 a3)
{
    FUNCTION_MARKER(0x800398A8u, "SCUS_942.40");
    int v4;
    __int16 v5;
    int result;
    __int16 v7;
    int v8;
    int v9;
    __int16 v10;

    v4 = 0;
    v5 = a2 - *SF_DRAFT_PTR(_WORD, a1);
    result = *SF_DRAFT_PTR(__int16, (a1 + 2));
    v7 = a3 - result;
    if (*SF_DRAFT_PTR(int, (a1 + 4)) > 0)
    {
        v8 = 0;
        do
        {
            ++v4;
            v9 = *SF_DRAFT_PTR(_DWORD, (a1 + 8)) + v8;
            v10 = *SF_DRAFT_PTR(_WORD, (v9 + 6)) + v7;
            *SF_DRAFT_PTR(_WORD, (v9 + 4)) += v5;
            *SF_DRAFT_PTR(_WORD, (v9 + 6)) = v10;
            result = v4 < *SF_DRAFT_PTR(sint32, (a1 + 4));
            v8 += 44;
        } while (v4 < *SF_DRAFT_PTR(sint32, (a1 + 4)));
    }
    *SF_DRAFT_PTR(_WORD, a1) = a2;
    *SF_DRAFT_PTR(_WORD, (a1 + 2)) = a3;
    return result;
}

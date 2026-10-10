#include "game_draft.h"
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);

void sf_draft_missing_gte_800D1910_1(sint32 input1, sint32 input2, sint32 input3);
/* TODO Resolve external dependency signatures */
uint32 sub_800E4184(void);
uint32 sub_800ED6FC();
sint32 sub_800F1624(sint32 mode);
uint32 sub_800F2A94();
uint32 sub_800F6AC4(sint16 sequence, sint16 separation);
sint32 sub_800F9AA4(sint16 left, sint16 right);
sint32 sub_800F9BE4(sint32 enabled);
uint32 sub_8010011C();

uint32 sub_80082DE0(void)
{
    FUNCTION_MARKER(0x80082DE0u, "SCUS_942.40");
    uint32 result = r_u8(SF_DRAFT_GP + 0x438u);
    uint32 initial = r_u32(SF_DRAFT_GP + 0x434u);
    if (!result)
    {
        result = 0xCACACACAu;
        if (initial != result)
        {
            result = 1u;
            if (initial)
            {
                do
                {
                    sub_8008294C(1u);
                    result = 1u;
                } while (r_u32(SF_DRAFT_GP + 0x434u) == initial);
            }
            w_u8(SF_DRAFT_GP + 0x438u, (uint8)result);
        }
    }
    return result;
}

sint32 sub_800E0220(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800E0220u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
    int v4[4];

    v4[0] = *a1_view - *a2_view;
    v4[1] = a1_view[1] - a2_view[1];
    v4[2] = a1_view[2] - a2_view[2];
    sub_800D9580(sf_draft_guest_address(v4), sf_draft_guest_address(a3_view));
    return 0;
}

sint32 sub_80081E20(uint32 a1)
{
    FUNCTION_MARKER(0x80081E20u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    int v2;
    int result;

    v2 = (*SF_DRAFT_PTR(uint32, 0x8013C730u));
    sub_800C8218((*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))), sf_draft_guest_address(a1_view));
    result = *a1_view;
    if (*a1_view)
        return sub_800C8218(v2, sf_draft_guest_address(a1_view));
    return result;
}

sint32 sub_8004C5F0(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8004C5F0u, "SCUS_942.40");
    uint32 active = r_u32(0x80115E80u);
    sint32 result = 12;
    w_u32(SF_DRAFT_GP + 0xA68u, (uint32)a1);
    if (active)
    {
        result = (sint32)(a2 >> 16);
        if (r_u32(0x80115FB8u) == 12u)
        {
            result = (sint32)(((a2 >> 16) & 255u) + ((a2 >> 8) & 255u) + (a2 & 255u));
            result = (result >> 2) << 8;
            w_u32(SF_DRAFT_GP + 0xA6Cu, (uint32)result);
        }
        else
        {
            w_u32(SF_DRAFT_GP + 0xA6Cu, a2);
        }
    }
    else
    {
        w_u32(SF_DRAFT_GP + 0xA6Cu, a2);
    }
    w_u32(SF_DRAFT_GP + 0xA70u, 0);
    return result;
}

sint32 sub_800CCA38(uint32 a1, uint32 a2, uint32 a3)
{
    uint32 data, table = 0u, result = 0xFFFFFFFFu;
    uint32 *count = SF_DRAFT_PTR(uint32, a2);
    uint32 *entries = SF_DRAFT_PTR(uint32, a3);
    FUNCTION_MARKER(0x800CCA38u, "SCUS_942.40");
    data = r_u32(r_u32(a1 + 16u) + 32u);
    if (data != 0xFFFFFFFFu)
        table = r_u32(data + 132u);
    if (table != 0u)
        result = r_u32(a1);
    if (table != 0u && result != 0u)
    {
        *count = r_u32(table);
        result = table + 4u;
        *entries = result;
    }
    else
    {
        *count = 0u;
        *entries = 0u;
    }
    return (sint32)result;
}

sint32 sub_800C6058(void)
{
    FUNCTION_MARKER(0x800C6058u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    if (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1988)) || (result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1992))) != 0)
    {
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1992)) = 0;
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1988)) = 0;
        sub_800ED6FC(9, 0);
        sub_800F74F4(0, 0, 0);
        return sub_800C6264();
    }
    return result;
}

uint32 sub_80020514(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80020514u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    _DWORD *result;
    int v3;
    int v4;
    int v5;

    result = SF_DRAFT_PTR(_DWORD, (168 * *SF_DRAFT_PTR(_DWORD, (60 * a1 + (*SF_DRAFT_PTR(uint32, 0x80119208u)))) + (*SF_DRAFT_PTR(uint32, 0x80119204u))));
    v3 = result[1];
    v4 = result[2];
    v5 = result[3];
    *a2_view = *result;
    a2_view[1] = v3;
    a2_view[2] = v4;
    a2_view[3] = v5;
    return sf_draft_guest_address(result);
}

sint32 sub_8008CF34(void)
{
    FUNCTION_MARKER(0x8008CF34u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int *v0;
    int v1;
    int v2;
    int v3;
    int v5[4];

    v0 = SF_DRAFT_PTR(int, *(int **)((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 12));
    v1 = v0[1];
    v2 = v0[2];
    v3 = v0[3];
    v5[0] = *v0;
    v5[1] = v1;
    v5[2] = v2;
    v5[3] = v3;
    return sub_8006BC98(1, 0x14u, 0, sf_draft_guest_address(v5));
}

sint32 sub_800C7EE0(uint32 a1, sint32 a2, sint32 a3, sint32 a4, sint32 a9, sint32 a10, sint32 a11, sint32 a12, sint32 a13)
{
    FUNCTION_MARKER(0x800C7EE0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int result;

    a1_view[2] = 0x8000000;
    a1_view[1] = 0;
    a1_view[3] = a2 | 0x38000000;
    a1_view[4] = a3;
    a1_view[6] = a4;
    result = 4;
    a1_view[11] = 4;
    a1_view[8] = a9;
    a1_view[10] = a10;
    a1_view[5] = a11;
    a1_view[7] = a12;
    a1_view[9] = a13;
    return result;
}

void sub_80016094(void)
{
    FUNCTION_MARKER(0x80016094u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v1;
    unsigned int v2;

    if (*SF_DRAFT_PTR(int, (SF_DRAFT_GP + 12)) <= 0)
        sub_800DDC34(1, 0, 0x8001009Cu, 1547);
    v1 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 12)) - 1;
    v2 = SF_DRAFT_PTR(uint32, 0x80102AA4u)[v1];
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 12)) = v1;
    sub_80015E80(v2, 0);
}

sint32 sub_80035524(void)
{
    FUNCTION_MARKER(0x80035524u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v0;

    v0 = 0;
    if ((*SF_DRAFT_PTR(uint32, 0x8010BCA8u)) || (*SF_DRAFT_PTR(uint8, 0x8010BCACu)) == 1 || (*SF_DRAFT_PTR(uint32, 0x8010BB40u)) == 5 || (*SF_DRAFT_PTR(uint32, 0x8010BB40u)) == 7 || (*SF_DRAFT_PTR(uint8, 0x8010BB4Cu)) == 1)
        return 1;
    return v0;
}

sint32 sub_80049ACC(void)
{
    FUNCTION_MARKER(0x80049ACCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int i;
    int v2;
    int result;

    for (i = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 876)); i; i = *SF_DRAFT_PTR(_DWORD, (v2 + 420)))
    {
        v2 = *SF_DRAFT_PTR(_DWORD, (i + 12));
        result = *SF_DRAFT_PTR(_DWORD, (v2 + 416));
        if (result)
            result = sub_8008B410(i);
    }
    return result;
}

sint32 sub_80040B50(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80040B50u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);
    int v2;
    bool v3; // dc
    int result;

    if (a1)
    {
        v2 = *a2_view + 1;
        if (*a2_view >= 13)
            return 0;
        *a2_view = v2;
        v3 = v2 < 13;
        result = 1;
        if (!v3)
            return 0;
    }
    else
    {
        if (*a2_view < 0)
            return 0;
        --*a2_view;
        return 1;
    }
    return result;
}

sint32 sub_8006E4FC(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8006E4FCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v3;
    bool v4; // dc
    int result;
    int v6;

    v3 = (uint8)sub_8006E084(a1, sf_draft_guest_address(&v6));
    if (!v6)
        return 0;
    v4 = v3 != 0;
    result = 1;
    if (!v4)
        return 0;
    *SF_DRAFT_PTR(_DWORD, (v6 + 56)) = a2;
    return result;
}

sint32 sub_800DCB6C(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800DCB6Cu, "SCUS_942.40");

    union
    {
        uint8 bytes[32];
        sint16 halves[16];
    } matrix;

    sub_800DB9E0(a1, a2, sf_draft_guest_address(&matrix));
    w_u32(a3, (uint32)(sint32)matrix.halves[2]);
    w_u32(a3 + 4u, (uint32)(sint32)matrix.halves[5]);
    w_u32(a3 + 8u, (uint32)(sint32)matrix.halves[8]);
    return 0;
}

sint32 sub_800DC730(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800DC730u, "SCUS_942.40");

    union
    {
        uint8 bytes[32];
        sint16 halves[16];
    } matrix;

    sint32 result = sub_800DB9E0(a1, a2, sf_draft_guest_address(&matrix));
    w_u32(a3, (uint32)(sint32)matrix.halves[2]);
    w_u32(a3 + 4u, (uint32)(sint32)matrix.halves[5]);
    w_u32(a3 + 8u, (uint32)(sint32)matrix.halves[8]);
    return result;
}

sint32 sub_800C3470(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800C3470u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v2;
    int v3;
    int v4;

    v2 = -1;
    v3 = 0;
    LOBYTE(v4) = a1;
    do
    {
        if ((v4 & 1) != 0 && ++v2 == a2)
            return (__int16)v3;
        v4 = a1 >> ++v3;
    } while (v3 < 24);
    return -1;
}

uint32 sub_80086208(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80086208u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int *result;

    result = SF_DRAFT_PTR(int, sub_80083584(a1));
    if (result)
        return sub_80083750(sf_draft_guest_address(result), a2, a3);
    return sf_draft_guest_address(result);
}

uint32 sub_80039F84(uint32 a1)
{
    FUNCTION_MARKER(0x80039F84u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v1;

    if (a1 >= 0x1A)
        v1 = 2;
    else
        v1 = SF_DRAFT_PTR(uint32, 0x8010C27Cu)[a1];
    if (v1)
        return 0x8011A9C8u + 44u * v1;
    else
        return 0;
}

sint32 sub_80073B28(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80073B28u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);
    int v2;
    bool v3; // dc
    int result;

    v2 = *a2_view;
    if (*a2_view)
    {
        while (v2 != a1)
        {
            v2 = *SF_DRAFT_PTR(_DWORD, (v2 + 16));
            if (!v2)
                goto LABEL_4;
        }
    }
    else
    {
    LABEL_4:
        v3 = v2 == a1;
        result = 1;
        if (!v3)
        {
            *SF_DRAFT_PTR(_DWORD, (a1 + 16)) = *a2_view;
            *a2_view = a1;
            return result;
        }
    }
    return 0;
}

sint32 sub_80018388(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80018388u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    int v2;
    int v3;
    __int16 v4;

    v2 = 1;
    if (!a1_view)
        return 0;
    v3 = *a1_view;
    if (!v3)
        return 0;
    if (a2 == 1)
        v4 = *SF_DRAFT_PTR(_WORD, (v3 + 6)) | 1;
    else
        v4 = *SF_DRAFT_PTR(_WORD, (v3 + 6)) & 0xFFFE;
    *SF_DRAFT_PTR(_WORD, (v3 + 6)) = v4;
    return v2;
}

sint32 sub_800C7BF8(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800C7BF8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    int result;

    if (a2_view)
    {
        result = 0;
        if (!*a2_view)
            return result;
        sub_800DE6E0(a1 + 152, *a2_view);
        *a2_view = 0;
    }
    return 0;
}

void sub_800DE4A4(sint32 a1)
{
    FUNCTION_MARKER(0x800DE4A4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    if (!*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2436)))
        sub_800DDC34(1, 0, 0x800139C8u, 108);
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2436)) = a1;
}

void sub_800DE3B4(sint32 a1)
{
    FUNCTION_MARKER(0x800DE3B4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    if ((a1 & 3) != 0)
        sub_800DDC34(1, 0, 0x800139C8u, 71);
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2432)) = a1;
}

sint32 sub_80017270(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80017270u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);

    int result;

    result = sub_800DFD64((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3424))), a1, sf_draft_guest_address(a2_view));
    if (result)
        *a2_view = 0;
    return result;
}

sint32 sub_80100F64(sint32 a1)
{
    FUNCTION_MARKER(0x80100F64u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v1;
    _BYTE *v3;

    v1 = sf_draft_call((uint32)((*SF_DRAFT_PTR(uint32, 0x80115BC8u))), 0u, NULL);
    v3 = SF_DRAFT_PTR(_BYTE, *(_BYTE **)(a1 + 60));
    (*SF_DRAFT_PTR(uint32, 0x80115C30u)) = v1;
    *v3 = 0;
    return sub_8010011C(a1, -2);
}

sint32 sub_80014D24(uint32 a1)
{
    FUNCTION_MARKER(0x80014D24u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    __int16 v1;
    int result;

    v1 = a1;
    if (a1 >= 0x15)
        v1 = 0;
    (*SF_DRAFT_PTR(uint8, 0x801163B1u)) = 0;
    result = sub_80016184(4);
    (*SF_DRAFT_PTR(uint16, 0x80130C88u)) = v1;
    return result;
}

sint32 sub_800CB720(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800CB720u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    _DWORD *v2;
    int result;

    v2 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(a1 + 32));
    for (result = 0; v2; result = 0)
    {
        result = *v2;
        if (a2 < 0)
            break;
        result = *v2;
        if (*(_DWORD *)(*v2 + 40) == a2)
            break;
        v2 = (_DWORD *)v2[2];
    }
    return result;
}

sint32 sub_800C6D4C(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800C6D4Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v2;
    unsigned int v3;
    unsigned int v5;
    int v6;

    v2 = (uint64)(a1 * (__int64)a2) >> 32;
    v3 = a1 * a2;
    if (v2 >= 0)
        return (v2 << 20) + (v3 >> 12);
    v5 = (0u - v3);
    v6 = ~v2;
    if (!v5)
        ++v6;
    return (0u - ((v6 << 20) + (v5 >> 12)));
}

uint32 sub_80083584(uint32 a1)
{
    FUNCTION_MARKER(0x80083584u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int *v1;
    int *result;

    v1 = &SF_DRAFT_PTR(uint32, 0x80120A98u)[7 * (uint8)a1];
    result = 0;
    if ((uint8)(a1 >> 8) == *((uint8 *)v1 + 21))
        return (uint8)a1 < 0x28u ? sf_draft_guest_address(v1) : 0;
    return sf_draft_guest_address(result);
}

sint32 sub_80056548(void)
{
    FUNCTION_MARKER(0x80056548u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    sub_80066F40(0);
    sub_80066F50(0);
    sub_80066F60(0);
    sub_80066F70(0);
    return sub_80066F80(0);
}

sint32 sub_80088244(sint32 a1)
{
    FUNCTION_MARKER(0x80088244u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int vars0;

    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(&vars0);
    sub_80079AFC(a1);
    return 0;
}

sint32 sub_800C7CB0(uint32 a1, sint32 a2, sint32 a3, sint32 a4, sint32 a9, sint32 a10, sint32 a11)
{
    FUNCTION_MARKER(0x800C7CB0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int result;

    a1_view[2] = 100663296;
    result = 805306368;
    a1_view[1] = 0;
    a1_view[3] = a2 | 0x30000000;
    a1_view[4] = a3;
    a1_view[6] = a4;
    a1_view[8] = a9;
    a1_view[5] = a10;
    a1_view[7] = a11;
    return result;
}

sint32 sub_800C7CEC(uint32 a1, sint32 a2, sint32 a3, sint32 a4, sint32 a9, sint32 a10)
{
    FUNCTION_MARKER(0x800C7CECu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int result;

    a1_view[2] = 83886080;
    a1_view[1] = 0;
    a1_view[3] = a2 | 0x28000000;
    a1_view[4] = a3;
    a1_view[5] = a4;
    result = 4;
    a1_view[8] = 4;
    a1_view[6] = a9;
    a1_view[7] = a10;
    return result;
}

sint32 sub_80076990(uint32 a1)
{
    FUNCTION_MARKER(0x80076990u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    return sub_80076630(sf_draft_guest_address(a1_view + 12), sf_draft_guest_address(a1_view), ((a1_view[10] & 0x8000) != 0 ? 0x29A : 0), 0);
}

sint32 sub_8006C0E8(sint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x8006C0E8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    return sub_800BFC68((SF_DRAFT_PTR(uint32, 0x8011E8A0u)[a1]), a2, a3, a4);
}

sint32 sub_800196AC(sint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800196ACu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
    int result;

    if (a1 - a2 < 2049)
    {
        result = a1 + 4096;
        if (a1 - a2 >= -2048)
            *a3_view = a1;
        else
            *a3_view = result;
    }
    else
    {
        result = a1 - 4096;
        *a3_view = a1 - 4096;
    }
    return result;
}

uint32 sub_800C84B4(uint32 a1, uint32 a2)
{
    uint32 packet_tag, slot_tag, result;
    FUNCTION_MARKER(0x800C84B4u, "SCUS_942.40");
    packet_tag = r_u32(a2);
    slot_tag = r_u32(a1);
    w_u32(a2, (packet_tag & 0xFF000000u) | (slot_tag & 0x00FFFFFFu));
    slot_tag = r_u32(a1);
    result = (slot_tag & 0xFF000000u) | (a2 & 0x00FFFFFFu);
    w_u32(a1, result);
    return result;
}

sint32 sub_800DE2DC(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800DE2DCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _WORD *a2_view = SF_DRAFT_PTR(_WORD, a2);
    int result;

    result = 22;
    if (a1)
    {
        *a2_view = *SF_DRAFT_PTR(_WORD, (a1 + 4)) + (*SF_DRAFT_PTR(uint16, 0x8012C7B0u));
        result = 0;
        a2_view[1] = *SF_DRAFT_PTR(_WORD, (a1 + 6)) + (*SF_DRAFT_PTR(uint16, 0x8012C7B2u));
    }
    return result;
}

uint32 sub_8003A050(void)
{
    FUNCTION_MARKER(0x8003A050u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v0;
    int *v1;
    int v2;
    sint32 result;

    v0 = 0;
    v1 = &(*SF_DRAFT_PTR(uint32, 0x8011B260u));
    v2 = 0;
    do
    {
        SF_DRAFT_PTR(uint32, 0x8011AB50u)[v2] = 0;
        *v1++ = -1;
        result = ++v0 < 42;
        v2 += 11;
    } while (v0 < 42);
    return result;
}

sint32 sub_800CD6D8(uint32 a1)
{
    FUNCTION_MARKER(0x800CD6D8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int result;

    a1_view[3] = 80;
    a1_view[4] = 14;
    result = 6;
    *a1_view = 0;
    a1_view[2] = 0;
    a1_view[1] = 0;
    a1_view[5] = 6;
    a1_view[6] = 0;
    a1_view[7] = 0xFFFFFF;
    return result;
}

sint32 sub_800F2B84(void)
{
    FUNCTION_MARKER(0x800F2B84u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    sub_800E4184();
    sub_800F2BC4();
    sub_800F1624(7u);
    return sub_800F2A94();
}

uint32 sub_80031918(sint32 a1)
{
    FUNCTION_MARKER(0x80031918u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v1;
    unsigned int result;

    v1 = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
    *SF_DRAFT_PTR(_WORD, (a1 + 188)) = -1;
    result = 0x80000000;
    *SF_DRAFT_PTR(_BYTE, (a1 + 200)) = 0;
    *SF_DRAFT_PTR(_DWORD, (a1 + 196)) = 0;
    *SF_DRAFT_PTR(_DWORD, (a1 + 192)) = 0;
    *SF_DRAFT_PTR(_WORD, (a1 + 88)) = 0;
    *SF_DRAFT_PTR(_DWORD, (a1 + 164)) = 0;
    *SF_DRAFT_PTR(_DWORD, (a1 + 168)) = 0x80000000;
    *SF_DRAFT_PTR(_DWORD, (a1 + 204)) = v1;
    return result;
}

sint32 sub_800C3074(void)
{
    FUNCTION_MARKER(0x800C3074u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v0;
    int *i;
    int result;

    v0 = 0;
    for (i = SF_DRAFT_PTR(int, 0x8012FBF0u);; ++i)
    {
        result = v0;
        if (!*i)
            break;
        if (++v0 >= 6)
            return -1;
    }
    return result;
}

sint32 sub_800329E8(void)
{
    FUNCTION_MARKER(0x800329E8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    result = *(uint8 *)(SF_DRAFT_GP + 580);
    if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 580)))
        result = sub_8003320C(((*SF_DRAFT_PTR(uint32, 0x80116B9Cu))), 2);
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 580)) = 0;
    return result;
}

sint32 sub_800C2C38(void)
{
    FUNCTION_MARKER(0x800C2C38u, "SCUS_942.40");
    sint32 voice = r_s16(SF_DRAFT_GP + 0x78Eu);
    w_u16(SF_DRAFT_GP + 0x790u, 1);
    w_u16(SF_DRAFT_GP + 0x798u, 0);
    return sub_800F9AA4(voice, voice);
}

sint32 sub_800CBC7C(void)
{
    FUNCTION_MARKER(0x800CBC7Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v1;
    int result;

    v1 = (*SF_DRAFT_PTR(uint32, 0x8012D734u));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2212)) = 1;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2216)) = sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8013B948u)));
    (*SF_DRAFT_PTR(uint32, 0x8013B954u)) = 0;
    result = *SF_DRAFT_PTR(_DWORD, (v1 + 24));
    (*SF_DRAFT_PTR(uint32, 0x8013B948u)) = v1;
    (*SF_DRAFT_PTR(uint32, 0x8013B94Cu)) = result;
    return result;
}

sint32 sub_8004A0B4(void)
{
    FUNCTION_MARKER(0x8004A0B4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v1;

    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(&v1);
    sub_80049E1C();
    return 1;
}

sint32 sub_800865BC(uint32 a1)
{
    FUNCTION_MARKER(0x800865BCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    char *a1_view = SF_DRAFT_PTR(char, a1);
    char v1;
    int result;

    v1 = *a1_view;
    for (LOBYTE(result) = 0; *a1_view; v1 = *a1_view)
    {
        LOBYTE(result) = v1 + result;
        ++a1_view;
    }
    return (uint8)result;
}

sint32 sub_800C7C40(uint32 a1, sint32 a2, sint32 a3, sint32 a4, sint32 a9)
{
    FUNCTION_MARKER(0x800C7C40u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int result;

    a1_view[2] = 0x4000000;
    result = 0x20000000;
    a1_view[1] = 0;
    a1_view[3] = a2 | 0x20000000;
    a1_view[4] = a3;
    a1_view[5] = a4;
    a1_view[6] = a9;
    return result;
}

sint32 sub_8003FDD0(void)
{
    sint32 result;
    FUNCTION_MARKER(0x8003FDD0u, "SCUS_942.40");
    result = sub_80047D34(r_u16(0x80115F20u), r_u32(0x80115FB8u));
    w_u16(0x80115F20u, (uint16)result);
    return result;
}

sint32 sub_800D79E8(uint32 a1)
{
    FUNCTION_MARKER(0x800D79E8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    return sub_800D7854((*SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3112))), (*SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3116))), a1);
}

sint32 sub_800F6A94(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800F6A94u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    return sub_800F6AC4(a1, a2);
}

sint32 sub_800C6A94(sint32 a1)
{
    FUNCTION_MARKER(0x800C6A94u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    if (a1 != -1 && *SF_DRAFT_PTR(_DWORD, (a1 + 128)))
        return *SF_DRAFT_PTR(_DWORD, (a1 + 128));
    else
        return 0;
}

sint32 sub_8006B824(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8006B824u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    SF_DRAFT_PTR(uint8, 0x80116020u)[a1] = a2;
    return sub_800C3814(a1, a2);
}

sint32 sub_8008C900(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8008C900u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _WORD *a2_view = SF_DRAFT_PTR(_WORD, a2);
    _WORD *a3_view = SF_DRAFT_PTR(_WORD, a3);
    int result;

    *a2_view = (a1 & 0x80) != 0;
    result = a1 & 0x3F;
    *a3_view = a1 & 0x3F;
    return result;
}

sint32 sub_80029E48(sint32 a1)
{
    FUNCTION_MARKER(0x80029E48u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;
    int v2;

    *SF_DRAFT_PTR(_DWORD, (a1 + 4)) = 0;
    result = 11;
    v2 = a1 + 44;
    do
    {
        *SF_DRAFT_PTR(_DWORD, (v2 + 8)) = -1;
        --result;
        v2 -= 4;
    } while (result >= 0);
    return result;
}

sint32 sub_80044848(sint32 a1)
{
    FUNCTION_MARKER(0x80044848u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724));
    if (a1 != result)
    {
        *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2624)) = 1;
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724)) = a1;
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3356)) = 9;
    }
    return result;
}

sint32 sub_800FB064(sint32 a1)
{
    FUNCTION_MARKER(0x800FB064u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    result = 1;
    (*SF_DRAFT_PTR(uint32, 0x8011512Cu)) = a1 != 1;
    return result;
}

sint32 sub_800D7A28(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800D7A28u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    return sub_800D7854(a1, a2, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2308))));
}

uint32 sub_80016160()
{
    FUNCTION_MARKER(0x80016160u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v1;
    sint32 result;

    v1 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 16));
    result = 0;
    if (v1)
        return (unsigned int)(v1 - 5) >= 2;
    return result;
}

sint32 sub_800D0000(void)
{
    FUNCTION_MARKER(0x800D0000u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    for (result = 68; result >= 0; result -= 17)
        SF_DRAFT_PTR(uint32, 0x8012DFDCu)[result] = 0;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2256)) = 0;
    return result * 4;
}

sint32 sub_800F9CF4(void)
{
    FUNCTION_MARKER(0x800F9CF4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    return sub_800F9BE4(0);
}

sint32 sub_800E22F0(sint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800E22F0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
    sub_800DA080(a1, a2, sf_draft_guest_address(a3_view));
    return 0;
}

void sub_800F6324(void)
{
    FUNCTION_MARKER(0x800F6324u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    sub_800F60F4(1);
}

sint32 sub_8006E064(void)
{
    FUNCTION_MARKER(0x8006E064u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    sub_80087B10();
    return 1;
}

uint32 sub_800C5D34(void)
{
    FUNCTION_MARKER(0x800C5D34u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v0;
    int *result;

    v0 = 15;
    result = SF_DRAFT_PTR(int, 0x8010DF48u);
    do
    {
        *result = 0;
        --v0;
        --result;
    } while (v0 >= 0);
    return sf_draft_guest_address(result);
}

uint32 sub_800D7A4C(uint16 *screen_x, uint16 *screen_y)
{
    FUNCTION_MARKER(0x800D7A4Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    *screen_x = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3112));
    *screen_y = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3116));
    return 0;
}

sint32 sub_800CCBE8(sint32 a1)
{
    FUNCTION_MARKER(0x800CCBE8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    **(_DWORD **)(a1 + 28) = 0;
    result = *SF_DRAFT_PTR(_BYTE, (a1 + 10)) & 0xEF;
    *SF_DRAFT_PTR(_BYTE, (a1 + 10)) = result;
    return result;
}

sint32 sub_80055530(sint32 a1)
{
    FUNCTION_MARKER(0x80055530u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int i;

    for (i = 0; a1 > 0; ++i)
        a1 >>= 1;
    return i - 1;
}

sint32 sub_800201F0(void)
{
    FUNCTION_MARKER(0x800201F0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    (*SF_DRAFT_PTR(uint8, 0x8011921Au)) = 1;
    result = 5;
    (*SF_DRAFT_PTR(uint32, 0x801191F4u)) = 5;
    return result;
}

sint32 sub_800C7A8C(sint32 a1)
{
    FUNCTION_MARKER(0x800C7A8Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    *SF_DRAFT_PTR(_WORD, (a1 + 6)) &= ~2u;
    return 0;
}

void sub_800CD608(sint32 a1)
{
    FUNCTION_MARKER(0x800CD608u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    *SF_DRAFT_PTR(_DWORD, a1) = 0;
    *SF_DRAFT_PTR(_DWORD, (a1 + 8)) = 0;
    *SF_DRAFT_PTR(_DWORD, (a1 + 12)) = 0;
    *SF_DRAFT_PTR(_WORD, (a1 + 22)) = 0;
}

uint32 sub_800FB08C(void)
{
    FUNCTION_MARKER(0x800FB08Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    return (*SF_DRAFT_PTR(uint32, 0x8011512Cu)) != 1;
}

void sub_800D1910(sint32 A0, sint32 A1, sint32 A2)
{
    FUNCTION_MARKER(0x800D1910u, "SCUS_942.40");
    xport_gte_write_control(13u, (uint32)A0);
    xport_gte_write_control(14u, (uint32)A1);
    xport_gte_write_control(15u, (uint32)A2);
}

void sub_80082EC0(void)
{
    FUNCTION_MARKER(0x80082EC0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 1080)) = 0;
    LOBYTE((*SF_DRAFT_PTR(uint32, 0x8010D024u))) = 0;
}

void sub_800C5D58(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800C5D58u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1972)) = a1;
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1974)) = a2;
}

sint32 sub_80066F60(sint32 a1)
{
    FUNCTION_MARKER(0x80066F60u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2840));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2840)) = a1;
    return result;
}

sint32 sub_8008BE80(sint32 a1)
{
    FUNCTION_MARKER(0x8008BE80u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1828));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1828)) = a1;
    return result;
}

sint32 sub_80091CF8(sint32 a1)
{
    FUNCTION_MARKER(0x80091CF8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1848));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1848)) = a1;
    return result;
}

sint32 sub_80091220(sint32 a1)
{
    FUNCTION_MARKER(0x80091220u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1844));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1844)) = a1;
    return result;
}

sint32 sub_8002D2D8(sint32 a1)
{
    FUNCTION_MARKER(0x8002D2D8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 496));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 496)) = a1;
    return result;
}

sint32 sub_8002D57C(sint32 a1)
{
    FUNCTION_MARKER(0x8002D57Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 508));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 508)) = a1;
    return result;
}

void sub_800FA304(void)
{
    FUNCTION_MARKER(0x800FA304u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    (*SF_DRAFT_PTR(uint16, 0x8012CA48u)) = 0;
}

sint32 sub_8006B854(sint32 a1)
{
    FUNCTION_MARKER(0x8006B854u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    return SF_DRAFT_PTR(uint8, 0x80116020u)[a1];
}

uint32 sub_8005A688(void)
{
    FUNCTION_MARKER(0x8005A688u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    return *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 900)) == 0;
}

sint32 sub_8001C950(void)
{
    FUNCTION_MARKER(0x8001C950u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    return (*SF_DRAFT_PTR(uint32, 0x801191ECu));
}

void sub_8001C9C8(sint32 a1)
{
    FUNCTION_MARKER(0x8001C9C8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    (*SF_DRAFT_PTR(uint32, 0x801191F4u)) = a1;
}

void sub_80018008(void)
{
    FUNCTION_MARKER(0x80018008u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 278)) = 0;
}

void sub_80016A58(void)
{
    FUNCTION_MARKER(0x80016A58u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 74)) = 0;
}

void sub_80017FE4(uint32 a1)
{
    FUNCTION_MARKER(0x80017FE4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3654)) = a1;
}

sint32 sub_800C60B4(void)
{
    FUNCTION_MARKER(0x800C60B4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    return *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1988));
}

void sub_80035F44(sint32 a1)
{
    FUNCTION_MARKER(0x80035F44u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    *SF_DRAFT_PTR(_DWORD, (a1 + 360)) = 0;
}

sint32 sub_8001D5A4(void)
{
    FUNCTION_MARKER(0x8001D5A4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    return 1;
}

sint32 sub_8006AFD0(void)
{
    FUNCTION_MARKER(0x8006AFD0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    return 1;
}

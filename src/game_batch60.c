#include "game_draft.h"
sint32 sf_native_cd_get_sector(uint32 destination, uint32 words);
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_800E55F4();
extern uint32 sub_800EF034();
extern sint32 sub_800F9BE4(sint32 enabled);

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x800CA718u 0x800ca718
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800CA718(void)
{
    FUNCTION_MARKER(0x800CA718u, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;

    *SF_DRAFT_PTR(_WORD, (v0 + 2160)) = 1;
    *SF_DRAFT_PTR(_WORD, (v0 + 2162)) = 255;
    sub_800CA618();
    return sub_800CA6EC();
}

// FUNCTION_MARKER 0x800201A8u 0x800201a8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800201A8(sint8 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800201A8u, "SCUS_942.40");
    sub_80020100(a1, a2);
    return sub_80020180(a1);
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077B48_stage1(sint32 input1, sint32 input2, sint32 *output3);

// FUNCTION_MARKER 0x80077B48u 0x80077b48
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80077B48(unsigned __int16 a1, sint32 a2, sint32 A2)
{
    FUNCTION_MARKER(0x80077B48u, "SCUS_942.40");
    sint32 temporary_t0; /* TODO Geometry value type */
    temporary_t0 = (-65536 * a2) | a1;
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_80077B48_stage1(temporary_t0, A2, &temporary_t0);
    return temporary_t0;
}

// FUNCTION_MARKER 0x80046550u 0x80046550
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_80046550(sint16 a1, sint16 a2)
{
    FUNCTION_MARKER(0x80046550u, "SCUS_942.40");
    int v2 = SF_DRAFT_GP;
    uint32 result;

    result = r_u32(v2 + 808u);
    if (result)
        return sf_draft_call(result, 2u, (const uint32[]){(uint32)(sint32)a1, (uint32)(sint32)a2});
    return result;
}

// FUNCTION_MARKER 0x800CBF10u 0x800cbf10
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800CBF10(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800CBF10u, "SCUS_942.40");
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 32)) = a2;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 36)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 32)) + 40));
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 32)) + 40)) = a1;
    return 0;
}

// FUNCTION_MARKER 0x8006E084u 0x8006e084
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8006E084(sint32 a1, uint32 a2)
{
    _DWORD *native_a2 = SF_DRAFT_PTR(_DWORD, a2);
    FUNCTION_MARKER(0x8006E084u, "SCUS_942.40");
    int result;
    int v3;

    result = 0;
    if (a1)
    {
        v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
        result = 1;
        if (v3)
            *native_a2 = *SF_DRAFT_PTR(_DWORD, (v3 + 416));
        else
            return 0;
    }
    return result;
}

// FUNCTION_MARKER 0x8006D388u 0x8006d388
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8006D388(void)
{
    FUNCTION_MARKER(0x8006D388u, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;

    *SF_DRAFT_PTR(_BYTE, (v0 + 2964)) = 1;
    return sub_800C8A9C(0x8006D37Cu, 10, 0);
}

// FUNCTION_MARKER 0x8006725Cu 0x8006725c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8006725C(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8006725Cu, "SCUS_942.40");
    int v2 = SF_DRAFT_GP;
    int result;

    result = 32 * a2;
    if (a2 == 16)
    {
        result = *SF_DRAFT_PTR(uint8, (a1 + 29));
        *SF_DRAFT_PTR(_BYTE, (v2 + 2936)) = result;
    }
    else
    {
        SF_DRAFT_PTR(uint8, 0x8011E69Du)[result] = *SF_DRAFT_PTR(_BYTE, (a1 + 29));
    }
    return result;
}

// FUNCTION_MARKER 0x8008B3B4u 0x8008b3b4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8008B3B4(sint32 a1)
{
    FUNCTION_MARKER(0x8008B3B4u, "SCUS_942.40");
    int v2;

    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(&v2);
    return sub_80087FE4(a1, 1);
}

// FUNCTION_MARKER 0x80018964u 0x80018964
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80018964(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80018964u, "SCUS_942.40");
    int result;

    result = 0;
    if (a1)
    {
        if (a2)
            *SF_DRAFT_PTR(_DWORD, (a1 + 144)) = *SF_DRAFT_PTR(_DWORD, (a2 + 12));
        else
            *SF_DRAFT_PTR(_DWORD, (a1 + 144)) = 0;
        return 1;
    }
    return result;
}

// FUNCTION_MARKER 0x800CA750u 0x800ca750
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800CA750(void)
{
    FUNCTION_MARKER(0x800CA750u, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;
    __int16 v1;

    v1 = r_u8(0x800D37F4u);
    *SF_DRAFT_PTR(_WORD, (v0 + 2160)) = 0;
    *SF_DRAFT_PTR(_WORD, (v0 + 2162)) = v1;
    return sub_800CA6EC();
}

// FUNCTION_MARKER 0x80040128u 0x80040128
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80040128(void)
{
    FUNCTION_MARKER(0x80040128u, "SCUS_942.40");
    return (sint32)sub_800401A0(r_s16(SF_DRAFT_GP + 0xA34u), r_s16(SF_DRAFT_GP + 0xA38u), r_u32(SF_DRAFT_GP + 0xA3Cu));
}

// FUNCTION_MARKER 0x800D0028u 0x800d0028
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800D0028(sint32 a1)
{
    FUNCTION_MARKER(0x800D0028u, "SCUS_942.40");
    int result;

    LOWORD(result) = *SF_DRAFT_PTR(_WORD, (a1 + 22)) - 20;
    if (((*SF_DRAFT_PTR(uint16, 0x8012D69Eu)) & 0x40) != 0)
        return (__int16)result;
    else
        return *SF_DRAFT_PTR(__int16, (a1 + 22));
}

// FUNCTION_MARKER 0x80018430u 0x80018430
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80018430(uint32 a1, uint32 a2)
{
    _DWORD *native_a1 = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *native_a2 = SF_DRAFT_PTR(_DWORD, a2);
    FUNCTION_MARKER(0x80018430u, "SCUS_942.40");
    int result;

    result = 0;
    if (native_a1)
    {
        result = 1;
        if (native_a2)
            *native_a2 = *native_a1;
        else
            return 0;
    }
    return result;
}

// FUNCTION_MARKER 0x800C7A58u 0x800c7a58
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C7A58(sint32 a1)
{
    FUNCTION_MARKER(0x800C7A58u, "SCUS_942.40");
    __int16 v1;

    v1 = *SF_DRAFT_PTR(_WORD, (a1 + 6));
    if ((v1 & 2) != 0)
        return 29;
    *SF_DRAFT_PTR(_WORD, (a1 + 6)) = v1 | 2;
    return 0;
}

// FUNCTION_MARKER 0x800C6264u 0x800c6264
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800C6264(void)
{
    FUNCTION_MARKER(0x800C6264u, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;
    int i;
    int *result;

    for (i = 21; i >= 0; i -= 3)
        SF_DRAFT_PTR(uint32, 0x80122328u)[i] = 0;
    result = SF_DRAFT_PTR(int, 0x80122328u);
    *SF_DRAFT_PTR(_DWORD, (v0 + 3080)) = 0x80122328u;
    *SF_DRAFT_PTR(_DWORD, (v0 + 3084)) = 0x80122328u;
    return sf_draft_guest_address(result);
}

// FUNCTION_MARKER 0x80020180u 0x80020180
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80020180(sint8 a1)
{
    FUNCTION_MARKER(0x80020180u, "SCUS_942.40");
    int v1 = SF_DRAFT_GP;

    return sub_80018388(sf_draft_guest_address(SF_DRAFT_PTR(int, r_u32((v1 + 284)))), a1);
}

// FUNCTION_MARKER 0x8002462Cu 0x8002462c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8002462C(sint16 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x8002462Cu, "SCUS_942.40");
    return sub_800243FC(a1, a2, a3, 0);
}

// FUNCTION_MARKER 0x800E4250u 0x800e4250
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800E4250(uint32 callback_table, uint32 slot, uint32 callback)
{
    FUNCTION_MARKER(0x800E4250u, "SCUS_942.40");
    return sf_draft_call(r_u32(callback_table + 20u), 2u, (const uint32[]){slot, callback});
}

// FUNCTION_MARKER 0x800C8148u 0x800c8148
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C8148(uint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    _DWORD *native_a1 = SF_DRAFT_PTR(_DWORD, a1);
    FUNCTION_MARKER(0x800C8148u, "SCUS_942.40");
    int result;

    native_a1[2] = 50331648;
    result = 0x40000000;
    native_a1[1] = 0;
    native_a1[3] = a2 | 0x40000000;
    native_a1[4] = a3;
    native_a1[5] = a4;
    return result;
}

// FUNCTION_MARKER 0x800E9C14u 0x800e9c14
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800E9C14(sint32 a1)
{
    FUNCTION_MARKER(0x800E9C14u, "SCUS_942.40");
    return sub_800E55F4(*SF_DRAFT_PTR(_DWORD, (a1 + 16)));
}

// FUNCTION_MARKER 0x800DFCD0u 0x800dfcd0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DFCD0(uint32 a1)
{
    int *native_a1 = SF_DRAFT_PTR(int, a1);
    FUNCTION_MARKER(0x800DFCD0u, "SCUS_942.40");
    int result;
    int v2;

    result = 1;
    if (native_a1)
    {
        v2 = *native_a1;
        if (v2)
            return *SF_DRAFT_PTR(_DWORD, (v2 + 4));
    }
    return result;
}

// FUNCTION_MARKER 0x800CCDA8u 0x800ccda8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800CCDA8(void)
{
    FUNCTION_MARKER(0x800CCDA8u, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;
    int result;

    for (result = 826; result >= 0; result -= 14)
        SF_DRAFT_PTR(uint32, 0x8012E150u)[result] = 0;
    *SF_DRAFT_PTR(_DWORD, (v0 + 2156)) = 0;
    return result * 4;
}

// FUNCTION_MARKER 0x800BED04u 0x800bed04
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800BED04(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800BED04u, "SCUS_942.40");
    return sub_800BED9C(a1, a2, 0);
}

// FUNCTION_MARKER 0x8006CF48u 0x8006cf48
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8006CF48(unsigned __int8 a1)
{
    FUNCTION_MARKER(0x8006CF48u, "SCUS_942.40");
    return sub_800C5D04(a1);
}

// FUNCTION_MARKER 0x800ED99Cu 0x800ed99c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800ED99C(uint32 destination, uint32 words)
{
    FUNCTION_MARKER(0x800ED99Cu, "SCUS_942.40");
    return sf_native_cd_get_sector(destination, words);
}

// FUNCTION_MARKER 0x800F9D14u 0x800f9d14
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800F9D14(void)
{
    FUNCTION_MARKER(0x800F9D14u, "SCUS_942.40");
    return sub_800F9BE4(1);
}

// FUNCTION_MARKER 0x80039F60u 0x80039f60
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_80039F60(sint32 a1)
{
    FUNCTION_MARKER(0x80039F60u, "SCUS_942.40");
    return 0x801195D8u + 44u * (uint32)a1;
}

// FUNCTION_MARKER 0x800DB9C0u 0x800db9c0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DB9C0(uint32 a1)
{
    _DWORD *native_a1 = SF_DRAFT_PTR(_DWORD, a1);
    FUNCTION_MARKER(0x800DB9C0u, "SCUS_942.40");
    return sub_800DB41C(sf_draft_guest_address(native_a1));
}

// FUNCTION_MARKER 0x80073DD8u 0x80073dd8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80073DD8(sint32 a1)
{
    FUNCTION_MARKER(0x80073DD8u, "SCUS_942.40");
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 11)) &= 0xF9u;
    return 1;
}

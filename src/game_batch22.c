#include "game_draft.h"
#include <stdio.h>
#include <stdlib.h>

static uint32 sf_draft_missing_stale_local_80048D58(void)
{
    fprintf(stderr, "TODO 80048D58 observable stale fourth local word\n");
    abort();
}

uint32 sub_8006D3C8();

/* TODO Resolve external dependency signatures */
uint32 sub_800224AC();
uint32 sub_80070F74();
uint32 sub_800D8E60();
uint32 sub_800E29B0();

sint32 sub_800769CC(sint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800769CCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    unsigned int v5;
    int v8;
    int *v9;
    int v10;
    int v11;
    int v12;
    int *v13;
    unsigned int v14;

    v5 = 0;
    if (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3536)))
    {
        v8 = 0;
        do
        {
            v9 = &SF_DRAFT_PTR(uint32, 0x8012FC08u)[v8];
            v10 = SF_DRAFT_PTR(uint32, 0x8012FC08u)[v8];
            v11 = 3;
            if (*SF_DRAFT_PTR(int, v10) < 0)
                v11 = 4;
            v12 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3396));
            (*SF_DRAFT_PTR(uint32, 0x80128E20u)) = v11;
            (*SF_DRAFT_PTR(uint32, 0x80128E28u)) = (int)(*SF_DRAFT_PTR(uint32, 0x80128E2Cu));
            v13 = &SF_DRAFT_PTR(uint32, 0x8012C170u)[20 * v12];
            (*SF_DRAFT_PTR(uint32, 0x80128E34u)) = v9[1] + 8 * *(uint8 *)(v10 + 7) / 3;
            (*SF_DRAFT_PTR(uint32, 0x80128E38u)) = v9[1] + 8 * *(uint8 *)(v10 + 10) / 3;
            if (v11 == 3)
            {
                (*SF_DRAFT_PTR(uint32, 0x80128E3Cu)) = v9[1] + 8 * *(uint8 *)(v10 + 11) / 3;
            }
            else
            {
                (*SF_DRAFT_PTR(uint32, 0x80128E3Cu)) = v9[1] + 8 * *(uint8 *)(v10 + 8) / 3;
                (*SF_DRAFT_PTR(uint32, 0x80128E40u)) = v9[1] + 8 * *(uint8 *)(v10 + 11) / 3;
            }
            if (!sub_80078724(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8012C7B8u))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80128E20u))), sf_draft_guest_address(v13 + 8), sf_draft_guest_address(v13 + 4)))
            {
                v14 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3396));
                v13[19] = v10;
                v13[2] = 0;
                v13[3] = 0;
                if (v14 < 0x13)
                    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3396)) = v14 + 1;
            }
            ++v5;
            v8 = 2 * v5;
        } while (v5 < *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3536)));
    }
    sub_80077FD8(a1, 1);
    if (a2)
        sub_80077FD8(a1, 2);
    return sub_8007903C(a1);
}

sint32 sub_800C31E8(sint32 a1, sint32 a2, sint32 a3, sint16 a4, sint16 a9, uint32 a10, uint32 a11)
{
    uint32 bank = (uint32)a1, program, tone_base, tone, volume, left, right, pan_value;
    uint16 *left_output = SF_DRAFT_PTR(uint16, a10);
    uint16 *right_output = SF_DRAFT_PTR(uint16, a11);
    sint32 maximum_volume, input_pan, result;
    FUNCTION_MARKER(0x800C31E8u, "SCUS_942.40");
    if (a9 >= a4)
    {
        maximum_volume = a9;
        input_pan = 127 - (63 * (sint32)a4) / (a9 ? (sint32)a9 : 1);
    }
    else
    {
        maximum_volume = a4;
        input_pan = (64 * (sint32)a9) / (a4 ? (sint32)a4 : 1);
    }
    program = bank + 32u + 16u * (uint32)(sint32)(sint16)a2;
    volume = 129u * r_u8(bank + 24u);
    volume *= r_u8(program + 1u);
    tone_base = bank + 32u + (r_u32(program + 8u) << 9) + 2048u;
    tone = tone_base + 32u * (uint32)(sint32)(sint16)a3;
    pan_value = r_u8(tone + 2u);
    volume = (volume / 127u) * pan_value;
    volume = (volume / 127u) * (uint32)maximum_volume;
    pan_value = r_u8(bank + 25u);
    right = volume / 127u;
    left = right;
    if (pan_value >= 65u)
        left = (left * (127u - pan_value)) >> 6;
    else
        right = (right * pan_value) >> 6;
    pan_value = r_u8(program + 4u);
    if (pan_value >= 65u)
        left = (left * (127u - pan_value)) >> 6;
    else
        right = (right * pan_value) >> 6;
    pan_value = r_u8(tone + 3u);
    if (pan_value >= 65u)
        left = (left * (127u - pan_value)) >> 6;
    else
        right = (right * pan_value) >> 6;
    input_pan = (sint16)input_pan;
    result = input_pan < 65;
    if (input_pan >= 65)
    {
        result = 127 - input_pan;
        left = (left * (uint32)result) >> 6;
    }
    else
        right = (right * (uint32)input_pan) >> 6;
    *left_output = (uint16)left;
    *right_output = (uint16)right;
    return result;
}

sint32 sub_80061F78(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80061F78u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    bool v13; // dc
    int v14;
    int v15;
    sint32 v16;

    result = 4 * a1;
    if ((*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 4)
        return result;
    v4 = *(_DWORD *)(76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52);
    v5 = *SF_DRAFT_PTR(_DWORD, (v4 + 28));
    v6 = 1024;
    if ((*SF_DRAFT_PTR(_DWORD, (v5 + 32)) & 0x10) != 0)
    {
    LABEL_16:
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2868)) = a1;
        goto LABEL_24;
    }
    v7 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2868));
    if (v7 >= 0)
        goto LABEL_18;
    if ((**(_DWORD **)(v4 + 16) & 2) != 0 && *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3196)) != 1 || *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v4 + 24)) + 8)) <= 0 || *SF_DRAFT_PTR(_BYTE, (v5 + 72)) != 2)
    {
        v7 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2868));
    LABEL_18:
        if (a1 == v7)
        {
            if (a2 < 819 && (**(_DWORD **)(v4 + 16) & 2) != 0)
            {
                v6 = 0x2000;
                if (*(uint8 *)(SF_DRAFT_GP + 3196) < 2u)
                    goto LABEL_24;
                *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2868)) = -1;
            }
            v6 = 0x2000;
            goto LABEL_24;
        }
        goto LABEL_24;
    }
    v8 = *SF_DRAFT_PTR(__int16, (v4 + 2));
    if (v8 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v9 = 76 * v8 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        if (!*SF_DRAFT_PTR(_BYTE, (v9 + 36)))
        {
            v10 = *SF_DRAFT_PTR(_DWORD, (v9 + 36)) & 0x3000;
            if (v10 != 4096 && v10 != 0x2000)
                goto LABEL_24;
        }
    LABEL_14:
        if (a1 != 666 && *(_WORD *)(20 * *(_DWORD *)(76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))) == 76)
            goto LABEL_24;
        goto LABEL_16;
    }
    if ((*SF_DRAFT_PTR(uint32, 0x80115FB8u)))
        goto LABEL_14;
LABEL_24:
    v11 = 76 * *SF_DRAFT_PTR(__int16, (v4 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    v12 = *(uint8 *)(v11 + 36);
    v13 = v12 != 0;
    v14 = 32 * v12;
    if (!v13)
    {
        v15 = *SF_DRAFT_PTR(_DWORD, (v11 + 36)) & 0x3000;
        if (v15 == 4096)
            v14 = 608;
        else
            v14 = v15 == 0x2000 ? 0x280 : 0;
    }
    v13 = ((*SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C390u))) + v14)) >> 3) & 7) != 2;
    v16 = v6 < a2;
    if (!v13)
        v16 = a2 > 819;
    if (v16)
        result = *SF_DRAFT_PTR(_DWORD, (v5 + 32)) & 0xFFFFDFFF;
    else
        result = *SF_DRAFT_PTR(_DWORD, (v5 + 32)) | 0x2000;
    *SF_DRAFT_PTR(_DWORD, (v5 + 32)) = result;
    return result;
}

void sub_80048628(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80048628u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);
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
    uint32 position[3];
    _DWORD v18[4];
    __int16 v19[16];

    if (a1)
    {
        v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
        if (v4)
        {
            v5 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
            v6 = *a2_view;
            v7 = *SF_DRAFT_PTR(_DWORD, (v5 + 12));
            if (*a2_view == 1)
            {
                v9 = a2_view[1];
                if (v9)
                    sub_800DC8AC((*SF_DRAFT_PTR(_DWORD, (v5 + 12))), 0, v9);
                if (a2_view[2])
                    sub_800DC0B8(v7, 0, a2_view[2]);
            }
            else if (v6)
            {
                if (v6 == 2)
                {
                    v10 = a2_view[1];
                    if (v10)
                        sub_800DC8AC(v7, 0, v10);
                    v11 = a2_view[2];
                    if (v11)
                        sub_800DBFD4(v7, 0, v11);
                }
                else if (v6 == 3)
                {
                    v12 = a2_view[1];
                    if (v12)
                        sub_800DC8AC(v7, 0, v12);
                    v13 = a2_view[2];
                    if (v13)
                        sub_800DD0DC(v7, 0, v13, (a2_view[3]));
                }
            }
            else
            {
                v8 = a2_view[1];
                if (v8)
                    sub_800DC40C(v7, 0, v8);
            }
            if (*SF_DRAFT_PTR(_DWORD, (v7 + 32)))
                sub_800C777C(v7);
            position[0] = *SF_DRAFT_PTR(_DWORD, (v7 + 20));
            position[1] = *SF_DRAFT_PTR(_DWORD, (v7 + 24));
            v14 = *SF_DRAFT_PTR(_DWORD, (v7 + 28));
            position[1] = 0u - position[1];
            position[2] = v14;
            sub_800482B8(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, v4)), sf_draft_guest_address(&position[0]));
            v19[0] = *SF_DRAFT_PTR(_WORD, v7);
            v19[1] = -*SF_DRAFT_PTR(_WORD, (v7 + 2));
            v19[2] = *SF_DRAFT_PTR(_WORD, (v7 + 4));
            v19[3] = -*SF_DRAFT_PTR(_WORD, (v7 + 6));
            v19[4] = *SF_DRAFT_PTR(_WORD, (v7 + 8));
            v19[5] = -*SF_DRAFT_PTR(_WORD, (v7 + 10));
            v19[6] = *SF_DRAFT_PTR(_WORD, (v7 + 12));
            v19[7] = -*SF_DRAFT_PTR(_WORD, (v7 + 14));
            v19[8] = *SF_DRAFT_PTR(_WORD, (v7 + 16));
            sub_800E0E88(sf_draft_guest_address(v19), sf_draft_guest_address(v18));
            sub_800482B8(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, (v4 + 128))), sf_draft_guest_address(v18));
            *SF_DRAFT_PTR(_BYTE, (v4 + 256)) = 0;
            sub_80048D58(a1);
            *SF_DRAFT_PTR(_BYTE, (v4 + 264)) = 0;
            *SF_DRAFT_PTR(_DWORD, (v4 + 404)) = 0;
            *SF_DRAFT_PTR(_DWORD, (v4 + 320)) = 0;
            *SF_DRAFT_PTR(_DWORD, (v4 + 324)) = 0;
            *SF_DRAFT_PTR(_DWORD, (v4 + 328)) = 0;
            *SF_DRAFT_PTR(_DWORD, (v4 + 336)) = 0;
            *SF_DRAFT_PTR(_DWORD, (v4 + 340)) = 4096;
            *SF_DRAFT_PTR(_DWORD, (v4 + 344)) = 0;
            *SF_DRAFT_PTR(_DWORD, (v4 + 300)) = -2147483647;
        }
    }
}

sint32 sub_80077FD8(sint32 a1, sint32 a2)
{
    uint32 node, excluded_first, excluded_second, count, output;
    sint32 result;
    FUNCTION_MARKER(0x80077FD8u, "SCUS_942.40");
    node = r_u32(0x80128E78u + 4u * (uint32)a2);
    excluded_first = r_u32((uint32)a1 + 160u);
    excluded_second = r_u32((uint32)a1 + 164u);
    count = r_u32(0x801169ACu);
    w_u32(0x80128E20u, 3u);
    w_u32(0x80128E28u, 0x80128E2Cu);
    result = (sint32)(80u * count);
    output = 0x8012C170u + 80u * count;
    while (node)
    {
        uint32 entity = r_u32(node);
        uint32 object = r_u32(entity + 8u);
        sint32 id = r_s16(entity + 2u);
        uint32 model = r_u32(object + 16u);
        sint32 kind = 666;
        uint8 flags, special;
        if (id != 666)
        {
            uint32 index = r_u32(0x80115CCCu + 76u * (uint32)id);
            kind = r_s16(0x80116B98u + 20u * index);
        }
        flags = r_u8(entity + 34u);
        special = kind == 44 || kind == 98 || kind == 56 || kind == 30 || kind == 108 || kind == 32 || flags == 9;
        if (r_s32(model + 116u) == -1)
            sub_80076990(model);
        result = special;
        w_u32(model + 48u, special ? 0u : 0xffffffffu);
        if (entity != excluded_second && entity != excluded_first)
        {
            sub_80077BFC(r_u32(r_u32(entity + 8u) + 12u));
            result = sub_80077B84(6000, 150);
            if (!result)
                result = special;
            if (result)
            {
                sint32 scale = r_s16(0x80116A04u);
                uint16 rendered = r_u16(0x80116B38u);
                uint32 render_object = r_u32(entity + 8u);
                w_u16(0x80116B38u, (uint16)((uint32)rendered + 1u));
                w_u32(output + 72u, render_object);
                result = sub_80077278(model + 48u, scale, output, 0x8012C7B8u);
                if (result)
                {
                    count = r_u32(0x801169ACu);
                    w_u32(output + 76u, node);
                    w_u32(output + 8u, (uint32)a2);
                    w_u32(output + 12u, model + 48u);
                    if (count < 19u)
                        w_u32(0x801169ACu, count + 1u);
                    count = r_u32(0x801169ACu);
                    result = (sint32)0x8012C170u;
                    output = 0x8012C170u + 80u * count;
                }
            }
        }
        node = r_u32(node + 16u);
    }
    return result;
}

sint32 sub_800C04A4(sint32 a1, sint16 a2, sint16 a3, sint16 a4, sint16 a9, sint32 a10, sint32 a11)
{
    FUNCTION_MARKER(0x800C04A4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    __int16 v14;
    int v15;

    int v17;

    int v19;
    __int16 v20;

    int v25;
    int result;
    __int16 v27;
    __int16 v28[11];

    v14 = a2 % 15;
    if (a2 / 15)
        v15 = *SF_DRAFT_PTR(_DWORD, (a1 + 132)) + *SF_DRAFT_PTR(_DWORD, (a1 + 4 * (a2 / 15) + 136));
    else
        v15 = *SF_DRAFT_PTR(_DWORD, (a1 + 132));
    if (!*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1948)) || !sub_8006AFD0())
        return 0;
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1952)) = a3;
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1954)) = a4;
    v17 = 60 * a3 / 100;
    if (v17 >= 128)
        LOWORD(v17) = 127;
    sub_800C34C0((__int16)v17, a4, sf_draft_guest_address(&v27), sf_draft_guest_address(v28), 2);
    if (a11)
    {
        v19 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1964));
        if (v19 != 1)
        {
            if (v19 != 2)
            {
                v20 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3058));
                *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3652)) = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3056));
                *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3296)) = v20;
            }
            sub_800C3814(0, ((__int16)(*SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3652)) - *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3652)) / 4)));
            sub_800C3814(1, ((__int16)(*SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3296)) - *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3296)) / 4)));
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1964)) = a11;
        }
    }
    sub_800F5C64(0, 1, 1);
    sub_800F74F4(0, v27, v28[0]);
    sub_800C5E64();
    sub_800C5F18(v15, v14, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1960))), a10);
    v25 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 1944));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1960)) = a9;
    result = 1;
    if (v25)
    {
        sub_800C2C38();
        return 1;
    }
    return result;
}

uint32 sub_800D1608(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800D1608u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    __int16 *a1_view = SF_DRAFT_PTR(__int16, a1);
    _WORD *a2_view = SF_DRAFT_PTR(_WORD, a2);
    int v2;
    _WORD *result;
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

    v2 = *a1_view;
    result = (_WORD *)(a2_view);
    if (v2 >= 0)
    {
        v4 = SF_DRAFT_PTR(uint32, 0x801103F8u)[v2 & 0xFFF];
        v6 = (__int16)v4;
        v5 = -(__int16)v4;
    }
    else
    {
        v4 = SF_DRAFT_PTR(uint32, 0x801103F8u)[-v2 & 0xFFF];
        LOWORD(v5) = v4;
        v6 = -(__int16)v4;
    }
    v7 = v4 >> 16;
    v8 = a1_view[1];
    if (v8 >= 0)
    {
        v9 = SF_DRAFT_PTR(uint32, 0x801103F8u)[v8 & 0xFFF];
        v10 = (__int16)v9;
    }
    else
    {
        v9 = SF_DRAFT_PTR(uint32, 0x801103F8u)[-v8 & 0xFFF];
        v10 = -(__int16)v9;
    }
    v11 = v9 >> 16;
    v12 = a1_view[2];
    a2_view[5] = v5;
    a2_view[2] = (v10 * v7) >> 12;
    a2_view[8] = ((v9 >> 16) * v7) >> 12;
    if (v12 >= 0)
    {
        v13 = SF_DRAFT_PTR(uint32, 0x801103F8u)[v12 & 0xFFF];
        v14 = (__int16)v13;
    }
    else
    {
        v13 = SF_DRAFT_PTR(uint32, 0x801103F8u)[-v12 & 0xFFF];
        v14 = -(__int16)v13;
    }
    a2_view[3] = (v14 * v7) >> 12;
    a2_view[4] = ((v13 >> 16) * v7) >> 12;
    v15 = (v10 * v6) >> 12;
    *a2_view = ((v11 * (v13 >> 16)) >> 12) + ((v15 * v14) >> 12);
    a2_view[1] = ((v15 * (v13 >> 16)) >> 12) - ((v11 * v14) >> 12);
    v16 = (v11 * v6) >> 12;
    a2_view[7] = ((v10 * v14) >> 12) + ((v16 * (v13 >> 16)) >> 12);
    a2_view[6] = ((v16 * v14) >> 12) - ((v10 * (v13 >> 16)) >> 12);
    return sf_draft_guest_address(result);
}

sint32 sub_8007E848(sint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x8007E848u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);
    int v7;
    int result;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    __int16 *v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    int v29;
    int v30;
    char v31[8];

    v31[0] = a4;
    v7 = sub_8007E6CC(a1, sf_draft_guest_address(v31));
    result = 2 * v7;
    if (v7 >= 0)
    {
        v9 = 24 * v7;
        SF_DRAFT_PTR(uint32, 0x8011F364u)[v9] = 1;
        SF_DRAFT_PTR(uint8, 0x8011F368u)[v9 * 4] = a3;
        SF_DRAFT_PTR(uint32, 0x8011F36Cu)[v9] = 2;
        if (a2_view)
        {
            v10 = a2_view[1];
            v11 = a2_view[2];
            v12 = a2_view[3];
            v21 = *a2_view;
            v22 = v10;
            v23 = v11;
            v24 = v12;
            v13 = 2 * v7;
        }
        else
        {
            v14 = SF_DRAFT_PTR(__int16, *(__int16 **)(a1 + 20));
            if (v14 && (v15 = *v14, v15 >= 0))
            {
                sub_8003A2A8((*SF_DRAFT_PTR(_DWORD, (76 * v15 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52))), sf_draft_guest_address(&v21));
                v13 = 2 * v7;
            }
            else
            {
                v25 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 20));
                v26 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 24));
                v16 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 28));
                v26 = -v26;
                v27 = v16;
                v17 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 4));
                v28 = v17;
                v29 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 10));
                v30 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 16));
                v21 = v25 + sub_800C6D4C(v17, 1600);
                v22 = v26 + sub_800C6D4C(-v29, 1600);
                v23 = v27 + sub_800C6D4C(v30, 1600);
                v13 = 2 * v7;
            }
        }
        result = 32 * (v13 + v7);
        v18 = v22;
        v19 = v23;
        v20 = v24;
        *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8011F370u))) + result)) = v21;
        *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011F374u))) + result)) = v18;
        *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011F378u))) + result)) = v19;
        *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011F37Cu))) + result)) = v20;
    }
    return result;
}

sint32 sub_800CC214(sint32 a1)
{
    uint32 count, node, entry, object, output, flag, index, component;
    uint32 record, next_count, matrix, offset, first, second, third, fourth;
    sint32 denominator, numerator;
    FUNCTION_MARKER(0x800CC214u, "SCUS_942.40");
    count = r_u32(0x801164C4u);
    node = r_u32(0x80116478u);
    if ((sint32)count > 0)
    {
        flag = r_u8(0x80116A14u);
        for (index = 0u; (sint32)index < (sint32)count; ++index)
        {
            entry = 0x8012FA38u + 44u * index;
            object = r_u32(entry + 40u);
            if (object == 0u)
                continue;
            denominator = r_s32(entry + 24u);
            output = r_u32(object + 28u);
            if (denominator == 0 || (index == 0u && flag == 0u))
                continue;
            for (component = 0u; component < 3u; ++component)
            {
                numerator = r_s32(entry + 28u + 4u * component);
                if (denominator == -1 && (uint32)numerator == 0x80000000u)
                {
                    fprintf(stderr, "Original sub_800CC214 BREAK6 division overflow\n");
                    abort();
                }
                w_u16(output + 4u + 2u * component, (uint16)(((uint32)(numerator / denominator) << 3) + 500u));
            }
        }
    }
    w_u32(0x8012FA40u, (uint32)a1);
    first = r_u32(0x8012D698u);
    w_u32(0x801164C4u, 2u);
    w_u32(0x8012FA60u, (uint32)a1);
    w_u32(0x8012FA6Cu, 0x80128DC0u);
    w_u32(0x8012FA8Cu, 0u);
    w_u16(0x80128DD4u, 0u);
    w_u32(0x80128DCCu, first);
    while (node != 0u)
    {
        count = r_u32(0x801164C4u);
        next_count = count + 1u;
        if ((sint32)next_count >= 10)
            break;
        object = r_u32(node);
        matrix = r_u32(object + 4u);
        if (matrix != 0u)
        {
            record = 0x8012FA38u + 44u * count;
            w_u16(object + 16u, (uint16)r_u32(matrix + 20u));
            w_u16(object + 18u, (uint16)r_u32(matrix + 24u));
            first = r_u32(matrix + 28u);
            w_u32(0x801164C4u, next_count);
            w_u32(object + 8u, 0u);
            w_u32(object + 40u, 0u);
            w_u16(object + 20u, (uint16)first);
            for (offset = 0u; offset < 32u; offset += 16u)
            {
                first = r_u32(object + offset);
                second = r_u32(object + offset + 4u);
                third = r_u32(object + offset + 8u);
                fourth = r_u32(object + offset + 12u);
                w_u32(record + offset, first);
                w_u32(record + offset + 4u, second);
                w_u32(record + offset + 8u, third);
                w_u32(record + offset + 12u, fourth);
            }
            first = r_u32(object + 32u);
            second = r_u32(object + 36u);
            third = r_u32(object + 40u);
            w_u32(record + 32u, first);
            w_u32(record + 36u, second);
            w_u32(record + 40u, third);
        }
        node = r_u32(node + 8u);
    }
    count = r_u32(0x801164C4u);
    w_u32(0x80116B68u, count);
    return (sint32)count;
}

sint32 sub_8003FE58(void)
{
    FUNCTION_MARKER(0x8003FE58u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v1;
    int v2;
    int v3;
    __int64 v4; // kr00_8
    char v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;

    int result;
    int v13;
    int v14;
    int v15;
    char v16[16];

    v1 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2600));
    if (v1 <= 0)
    {
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 776)) = 0;
        v2 = 0;
        v6 = 0;
        v5 = 0;
    }
    else
    {
        v2 = v1 / 1200;
        v3 = v1 % 1200 % 20;
        v4 = 1431655766LL * v3;
        v3 >>= 31;
        v5 = ((uint8)((uint64)v4 >> 32)) - v3;
        v6 = v1 % 1200 / 20;
        if (HIDWORD(v4) != v3 || v6)
        {
            v7 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 776));
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 776)) = v7 - 7;
            if (v7 - 7 < 0)
                *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 776)) = v7 + 3;
        }
        else
        {
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 776)) = 0;
        }
    }
    v8 = *(uint16 *)(SF_DRAFT_GP + 698);
    v9 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 776));
    v16[2] = 58;
    v16[5] = 58;
    v16[6] = v5 + 48;
    v16[8] = 0;
    v16[7] = v9 + 48;
    v16[0] = v2 / 10 + 48;
    v16[1] = v2 % 10 + 48;
    v16[3] = v6 / 10 + 48;
    v16[4] = v6 % 10 + 48;
    LOWORD(v10) = sub_80086EA0(v8, sf_draft_guest_address(v16));
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 698)) = v10;
    if (v2 <= 0)
    {
        result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 700));
        v10 = (uint16)v10;
        if (result == 1)
            return result;
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 700)) = 1;
        v13 = 192;
        v14 = 80;
        v15 = 96;
    }
    else
    {
        result = 1;
        if (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 700)) == 2)
            return result;
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 700)) = 2;
        if (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724)) == 1)
        {
            v10 = (uint16)v10;
            v13 = (uint8)(*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 672)) + 20);
            v14 = (uint8)(*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 673)) + 30);
            v15 = (uint8)(*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 674)) + 40);
        }
        else
        {
            v13 = *(uint8 *)(SF_DRAFT_GP + 728);
            v14 = *(uint8 *)(SF_DRAFT_GP + 729);
            v15 = *(uint8 *)(SF_DRAFT_GP + 730);
            v10 = (uint16)v10;
        }
    }
    return sub_80086E44(v10, v13, v14, v15);
}

sint32 sub_80078BD0(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80078BD0u, "SCUS_942.40");
    sint32 point[3];
    uint32 token = sf_draft_guest_address(point);
    uint32 offset;
    for (offset = 20; offset <= 28; offset += 4)
    {
        point[0] = r_s16(r_u32(a1 + offset));
        point[1] = r_s16(r_u32(a1 + offset) + 2u);
        point[2] = r_s16(r_u32(a1 + offset) + 4u);
        sub_800EADF4(a2, token, token);
        point[0] = (sint32)((uint32)point[0] + r_u32(a2 + 20u));
        point[1] = (sint32)((uint32)point[1] + r_u32(a2 + 24u));
        point[2] = (sint32)((uint32)point[2] + r_u32(a2 + 28u));
        w_u16(r_u32(a1 + offset), (uint16)point[0]);
        w_u16(r_u32(a1 + offset) + 2u, (uint16)point[1]);
        w_u16(r_u32(a1 + offset) + 4u, (uint16)point[2]);
    }
    return point[2];
}

sint32 sub_80084698(sint32 a1)
{
    FUNCTION_MARKER(0x80084698u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int *v2;
    int *v3;
    int v4;
    char *v5;
    int v6;
    int *v7;
    int v8;
    int v9;
    int *v10;
    int v11;
    int result;
    int v13[4];

    v13[0] = (*SF_DRAFT_PTR(uint32, 0x800124DCu));
    v13[1] = (*SF_DRAFT_PTR(uint32, 0x800124E0u));
    v13[2] = (*SF_DRAFT_PTR(uint32, 0x800124E4u));
    v13[3] = (*SF_DRAFT_PTR(uint32, 0x800124E8u));
    v2 = &(*SF_DRAFT_PTR(uint32, 0x80120EF8u));
    v3 = SF_DRAFT_PTR(int, 0x80120A98u);
    if (a1)
    {
        sub_800CB250(0, sf_draft_guest_address(v13), 1, 0x80116128u, 4, 2, 0, 0x80116964u);
        *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3324)) + 6)) |= 1u;
    }
    v4 = 0;
    v5 = &(*SF_DRAFT_PTR(uint8, 0x80120EFFu));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1128)) = 0;
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1132)) = 0;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3008)) = -1;
    do
    {
        ++v4;
        *(_WORD *)(v5 + 3) = 0;
        *(_WORD *)(v5 + 1) = 0;
        *(_WORD *)(v5 + 7) = 0;
        *(_WORD *)(v5 + 5) = 0;
        *(_DWORD *)(v5 + 9) = 0;
        *v2 = 0;
        *(v5 - 1) = 0x80;
        *(v5 - 2) = 0x80;
        *(v5 - 3) = 0x80;
        *v5 = 0;
        v5 += 20;
        v2 += 5;
    } while (v4 < 6);
    v6 = 0;
    v7 = &SF_DRAFT_PTR(uint32, 0x80120A98u)[5];
    v8 = *v2;
    *((_WORD *)v2 + 4) = -122;
    *((_WORD *)v2 + 5) = 90;
    *((_WORD *)v2 + 6) = 210;
    *((_WORD *)v2 + 7) = 60;
    v2[4] = 0;
    *((_BYTE *)v2 + 6) = 0x80;
    *((_BYTE *)v2 + 5) = 0x80;
    *((_BYTE *)v2 + 4) = 0x80;
    *((_BYTE *)v2 + 7) = 0;
    v2[9] = 0;
    *v2 = (v8 | 4);
    do
    {
        ++v6;
        *((_WORD *)v7 - 4) = 0;
        *(v7 - 3) = 0;
        *(v7 - 4) = 0;
        *v3 = 0;
        v7[1] = 0;
        *(_BYTE *)v7 = 0;
        v7 += 7;
        v3 += 7;
    } while (v6 < 40);
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1136)) = 0;
    sub_800848D4(0x8011F5F8u, 120);
    v9 = 0;
    v10 = SF_DRAFT_PTR(int, 0x80120F84u);
    v11 = 0;
    do
    {
        sub_800C8148(sf_draft_guest_address(v10), 0, 67109888, 67109888);
        SF_DRAFT_PTR(uint32, 0x80120F84u)[v11] = 0;
        v10 += 6;
        ++v9;
        v11 += 6;
    } while (v9 < 10);
    sub_800C7CEC(0x80121074u, 5255208, 67109888, 67109888, 67109888, 67109888);
    result = 3;
    (*SF_DRAFT_PTR(uint32, 0x80121074u)) = 0;
    (*SF_DRAFT_PTR(uint32, 0x80121078u)) = 3;
    return result;
}

sint32 sub_80038098(uint32 a1)
{
    FUNCTION_MARKER(0x80038098u, "SCUS_942.40");
    uint32 index = r_u32(0x801169D4u);
    uint32 old_mode = r_u32(a1 + 0x15Cu);
    uint32 actor = r_u32(r_u32(0x80115CCCu) + 76u * index + 52u);
    sint32 vector[4];
    uint32 next_mode = 0;
    sint32 result;
    vector[0] = (sint32)r_u32(a1 + 0x128u);
    vector[1] = (sint32)r_u32(a1 + 0x12Cu);
    vector[2] = (sint32)r_u32(a1 + 0x130u);
    vector[3] = (sint32)r_u32(a1 + 0x134u);
    /* Retain original descriptor reads whose flag is unused */
    r_u32(r_u32(r_u32(actor + 12u) + 0x198u) + 0x3Cu);
    if (r_u32(a1 + 0x15Cu) >= 2u && r_u32(a1 + 0x168u) == 3u)
    {
        result = 5;
        next_mode = old_mode == 5u ? 5u : 4u;
        goto publish;
    }
    result = (uint32)(r_u8(r_u32(actor + 16u) + 8u) - 1u) < 2u;
    if (!result)
        goto publish;
    result = (uint8)sub_8001C960(0);
    if (!result)
        goto publish;
    result = (sint32)r_u32(a1 + 0x164u);
    if (result)
        goto publish;
    if (vector[0] || vector[1] || vector[2])
    {
        if (old_mode < 2u)
        {
            result = 1;
            if (vector[2] >= -2633)
                goto publish;
        }
        else
        {
            result = vector[2] > 2633;
            if (result)
                goto publish;
        }
        if (old_mode == 1u)
        {
            result = -1;
            w_u32(a1 + 0x14Cu, (uint32)result);
            next_mode = 2;
        }
        else if (old_mode == 2u)
        {
            sint32 countdown = (sint32)r_u32(a1 + 0x14Cu);
            uint64 encoded = sub_800FEFE4(countdown);
            sint32 greater = sub_800FF284((uint32)encoded, (uint32)(encoded >> 32), 0, 0xC0080000u);
            result = (sint32)((uint32)countdown - 1u);
            if (greater > 0)
            {
                w_u32(a1 + 0x14Cu, (uint32)result);
                next_mode = 2;
            }
            else
                next_mode = 4;
        }
        else
        {
            result = 4;
            next_mode = old_mode == 4u ? 4u : 5u;
        }
    }
    else
    {
        result = 2;
        next_mode = old_mode == 2u ? 3u : 1u;
    }
publish:
    w_u32(a1 + 0x158u, old_mode);
    w_u32(a1 + 0x15Cu, next_mode);
    return result;
}

sint32 sub_80072F84(uint32 a1, sint32 a2, sint32 a3, uint32 a4, uint32 a9, uint32 a10)
{
    FUNCTION_MARKER(0x80072F84u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a4_view = SF_DRAFT_PTR(_DWORD, a4);
    _DWORD *a9_view = SF_DRAFT_PTR(_DWORD, a9);
    int *a10_view = SF_DRAFT_PTR(int, a10);
    int v13;
    int v14;
    int result;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;

    if (a3 == 1)
    {
        v13 = sub_800C6D4C((*a1_view), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 68))));
        v14 = sub_800C6D4C((a1_view[1]), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 72))));
        v21 = v13 + v14 + sub_800C6D4C((a1_view[2]), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 76))));
        v18 = sub_800C6D4C((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 68))), v21);
        v19 = sub_800C6D4C((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 72))), v21);
        v20 = sub_800C6D4C((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 76))), v21);
        *a9_view = *a1_view - v18;
        a9_view[1] = a1_view[1] - v19;
        result = a1_view[2] - v20;
        a9_view[2] = result;
        if (a10_view)
            return sub_800D9580(sf_draft_guest_address(a9_view), sf_draft_guest_address(a10_view));
    }
    else
    {
        result = 3;
        if (a3 == 2)
        {
            v16 = sub_800C6D4C((*a1_view), (*a4_view));
            v17 = sub_800C6D4C((a1_view[1]), (a4_view[1]));
            v22 = v16 + v17 + sub_800C6D4C((a1_view[2]), (a4_view[2]));
            *a9_view = sub_800C6D4C((*a4_view), v22);
            a9_view[1] = sub_800C6D4C((a4_view[1]), v22);
            result = sub_800C6D4C((a4_view[2]), v22);
            a9_view[2] = result;
            if (a10_view)
            {
                result = v22;
                if (v22 < 0)
                    result = -v22;
                *a10_view = result;
            }
        }
        else if (a3 == 3)
        {
            *a9_view = 0;
            a9_view[1] = 0;
            a9_view[2] = 0;
            if (a10_view)
                *a10_view = 0;
        }
    }
    return result;
}

static void sf_matrix_flip_axis(uint32 matrix)
{
    uint16 *halves = SF_DRAFT_PTR(uint16, matrix);
    uint32 *words = SF_DRAFT_PTR(uint32, matrix);
    uint16 second = halves[1], tenth = halves[5], sixth, fourteenth;
    uint32 position;
    halves[1] = (uint16)(0u - (uint32)second);
    sixth = halves[3];
    halves[5] = (uint16)(0u - (uint32)tenth);
    position = words[6];
    halves[3] = (uint16)(0u - (uint32)sixth);
    fourteenth = halves[7];
    words[6] = 0u - position;
    halves[7] = (uint16)(0u - (uint32)fourteenth);
}

static void sf_matrix_copy_words(uint32 destination, uint32 source)
{
    uint32 *output = SF_DRAFT_PTR(uint32, destination);
    uint32 *input = SF_DRAFT_PTR(uint32, source);
    uint32 first, second, third, fourth;
    first = input[0];
    second = input[1];
    third = input[2];
    fourth = input[3];
    output[0] = first;
    output[1] = second;
    output[2] = third;
    output[3] = fourth;
    first = input[4];
    second = input[5];
    third = input[6];
    fourth = input[7];
    output[4] = first;
    output[5] = second;
    output[6] = third;
    output[7] = fourth;
}

sint32 sub_800DC40C(uint32 a1, uint32 a2, sint32 a3)
{
    uint32 matrix = (uint32)a3, owner, parent;
    uint32 inverse[8], composed[8];
    FUNCTION_MARKER(0x800DC40Cu, "SCUS_942.40");
    if (a1 == 0u)
        return 24;
    sf_matrix_flip_axis(matrix);
    owner = r_u32(a1 + 32u);
    if (owner != 0u)
    {
        parent = r_u32(owner + 32u);
        if (a2 == parent)
        {
            sf_matrix_copy_words(owner, matrix);
        }
        else if (a2 != 0u && parent == 0u)
        {
            sub_800EB0D4(a2, matrix, owner);
        }
        else if (a2 == 0u && parent != 0u)
        {
            sub_800DA474(parent, sf_draft_guest_address(inverse));
            owner = r_u32(a1 + 32u);
            sub_800EB0D4(sf_draft_guest_address(inverse), matrix, owner);
        }
        else
        {
            sub_800EB0D4(a2, matrix, sf_draft_guest_address(composed));
            sub_800DA474(r_u32(r_u32(a1 + 32u) + 32u), sf_draft_guest_address(inverse));
            owner = r_u32(a1 + 32u);
            sub_800EB0D4(sf_draft_guest_address(inverse), sf_draft_guest_address(composed), owner);
        }
        w_u8(r_u32(a1 + 32u) + 44u, 1u);
    }
    else if (a2 == 0u)
    {
        sf_matrix_copy_words(a1, matrix);
    }
    else
    {
        sub_800EB0D4(a2, matrix, a1);
    }
    sf_matrix_flip_axis(matrix);
    return 0;
}

sint32 sub_80057BB4(sint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x80057BB4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v9;
    int *v10;
    int v11;
    int result;
    int v13;
    int v14;
    int *v15;
    int v16;
    int v17;
    int v18;
    int *v19;
    int v20;

    v9 = 0;
    v10 = SF_DRAFT_PTR(int, 0x8012F120u);
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3238)) = 0;
    while (1)
    {
        v11 = *v10;
        if (*v10 >= 0)
            break;
        ++v9;
        ++v10;
        if (v9 >= 6)
        {
            result = a3 < 3200;
            goto LABEL_5;
        }
    }
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3238)) = v9 + 1;
    result = a3 < 3200;
LABEL_5:
    if (result && a1)
    {
        while (v11 >= 0)
        {
            if (v11 != a4)
            {
                v16 = *SF_DRAFT_PTR(_DWORD, (76 * v11 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
                v17 = *SF_DRAFT_PTR(_DWORD, (v16 + 28));
                if (!*SF_DRAFT_PTR(_WORD, (v17 + 54)))
                {
                    if (v17)
                    {
                        sub_800E0364(a2, (*SF_DRAFT_PTR(_DWORD, (v16 + 12))), sf_draft_guest_address(&v20));
                        if (v20 < a3)
                        {
                            *SF_DRAFT_PTR(_WORD, (v17 + 54)) = a3;
                            *SF_DRAFT_PTR(_BYTE, (v17 + 64)) = a1;
                        }
                    }
                }
            }
            v18 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3238));
            result = v18 < 6;
            v11 = -1;
            if (v18 < 6)
            {
                v19 = &SF_DRAFT_PTR(uint32, 0x8012F120u)[v18];
                while (1)
                {
                    v11 = *v19;
                    result = v18 + 1;
                    if (*v19 >= 0)
                        break;
                    result = ++v18 < 6;
                    ++v19;
                    if (v18 >= 6)
                        goto LABEL_29;
                }
                *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3238)) = result;
            }
        LABEL_29:;
        }
    }
    else
    {
        while (v11 >= 0)
        {
            if (v11 != a4)
            {
                v13 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * v11 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 28));
                *SF_DRAFT_PTR(_WORD, (v13 + 54)) = a3;
                *SF_DRAFT_PTR(_BYTE, (v13 + 64)) = a1;
            }
            v14 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3238));
            result = v14 < 6;
            v11 = -1;
            if (v14 < 6)
            {
                v15 = &SF_DRAFT_PTR(uint32, 0x8012F120u)[v14];
                while (1)
                {
                    v11 = *v15;
                    result = v14 + 1;
                    if (*v15 >= 0)
                        break;
                    result = ++v14 < 6;
                    ++v15;
                    if (v14 >= 6)
                        goto LABEL_15;
                }
                *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3238)) = result;
            }
        LABEL_15:;
        }
    }
    return result;
}

sint32 sub_800191F0(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800191F0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int result;

    if (*SF_DRAFT_PTR(_DWORD, (a2 + 28)) == 1)
    {
        v4 = *SF_DRAFT_PTR(_DWORD, (a2 + 8));
        v5 = a1_view[39];
        if (v4 >= v5)
        {
            v5 = a1_view[43];
            if (v5 >= v4)
                v5 = *SF_DRAFT_PTR(_DWORD, (a2 + 8));
        }
        *SF_DRAFT_PTR(_DWORD, (a2 + 8)) = v5;
        if (v5 != a1_view[15])
        {
            sub_80019630(v5, sf_draft_guest_address(a1_view + 15));
            sub_80019630((a1_view[3]), sf_draft_guest_address(a1_view + 3));
            sub_800196AC((a1_view[3]), (a1_view[15]), sf_draft_guest_address(a1_view + 3));
        }
        a1_view[35] = 1;
    }
    if (*SF_DRAFT_PTR(_DWORD, (a2 + 32)) == 1)
    {
        v6 = *SF_DRAFT_PTR(_DWORD, (a2 + 12));
        v7 = a1_view[40];
        if (v6 >= v7)
        {
            v7 = a1_view[44];
            if (v7 >= v6)
                v7 = *SF_DRAFT_PTR(_DWORD, (a2 + 12));
        }
        *SF_DRAFT_PTR(_DWORD, (a2 + 12)) = v7;
        if (v7 != a1_view[16])
        {
            sub_80019630(v7, sf_draft_guest_address(a1_view + 16));
            sub_80019630((a1_view[4]), sf_draft_guest_address(a1_view + 4));
            sub_800196AC((a1_view[4]), (a1_view[16]), sf_draft_guest_address(a1_view + 4));
        }
        a1_view[36] = 1;
    }
    if (*SF_DRAFT_PTR(_DWORD, (a2 + 36)) == 1)
    {
        v8 = *SF_DRAFT_PTR(_DWORD, (a2 + 16));
        v9 = a1_view[41];
        if (v8 >= v9)
        {
            v9 = a1_view[45];
            if (v9 >= v8)
                v9 = *SF_DRAFT_PTR(_DWORD, (a2 + 16));
        }
        *SF_DRAFT_PTR(_DWORD, (a2 + 16)) = v9;
        if (v9 != a1_view[17])
        {
            sub_80019630(v9, sf_draft_guest_address(a1_view + 17));
            sub_80019630((a1_view[5]), sf_draft_guest_address(a1_view + 5));
            sub_800196AC((a1_view[5]), (a1_view[17]), sf_draft_guest_address(a1_view + 5));
        }
        a1_view[37] = 1;
    }
    result = 1;
    if (*SF_DRAFT_PTR(_BYTE, (a2 + 44)) == 1)
        return (uint8)sub_800196E4(sf_draft_guest_address(a1_view), a2 + 28);
    return result;
}

sint32 sub_800950C4(uint32 a1)
{
    FUNCTION_MARKER(0x800950C4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int v2;
    int v3;
    __int16 *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int result;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;

    v2 = a1_view[16];
    v3 = a1_view[15];
    v4 = (__int16 *)(*(__int16 **)(a1_view[9] + 8));
    v5 = a1_view[4] << 12;
    if ((sint32)a1_view[13] < v2)
    {
        v26 = sub_800C6D90((a1_view[5]), v2);
        v27 = sub_800C6D90((a1_view[6]), v2);
        v16 = v3 - v5;
        v28 = sub_800C6D90((a1_view[7]), v2);
        v24 = sub_800C6D4C(v26, v16);
        v25 = sub_800C6D4C(v27, v16);
        v17 = sub_800C6D4C(v28, v16);
        a1_view[21] = v24 - a1_view[5];
        a1_view[22] = v25 - a1_view[6];
        a1_view[23] = v17 - a1_view[7];
        result = a1_view[21];
        v18 = a1_view[22];
        v19 = a1_view[23];
        v20 = a1_view[24];
        a1_view[25] = result;
        a1_view[26] = v18;
        a1_view[27] = v19;
        a1_view[28] = v20;
        a1_view[29] = 0;
        a1_view[30] = 0;
        a1_view[31] = 0;
    }
    else
    {
        v21 = *v4;
        v6 = v2 - v3 + (a1_view[4] << 12);
        v22 = v4[1];
        v23 = v4[2];
        a1_view[21] = sub_800C6D4C(v21, v6);
        a1_view[22] = sub_800C6D4C(v22, v6);
        a1_view[23] = sub_800C6D4C(v23, v6);
        a1_view[25] = sub_800C6D4C(v21, v2);
        a1_view[26] = sub_800C6D4C(v22, v2);
        v7 = sub_800C6D4C(v23, v2);
        v8 = a1_view[21];
        v9 = a1_view[25];
        a1_view[27] = v7;
        v10 = a1_view[22];
        v11 = a1_view[27];
        v12 = v8 - v9;
        v13 = a1_view[26];
        a1_view[29] = v12;
        result = v10 - v13;
        v15 = a1_view[23] - v11;
        a1_view[30] = result;
        a1_view[31] = v15;
    }
    return result;
}

sint32 sub_800938CC(sint32 a1, sint32 a2, uint32 a3, sint32 a4, uint32 a5)
{
    FUNCTION_MARKER(0x800938CCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
    uint32 texture[8];
    uint32 packedColor;
    int result;
    int v7;
    sint32 v8;
    int v9;
    bool v10; // dc
    _DWORD *v11;

    result = 4;
    if (a4 != 4)
        return result;
    v7 = 0;
    if ((int)a3_view[2] <= 0)
        goto LABEL_11;
    v8 = 1;
    if ((int)a3_view[6] > 0)
    {
        v8 = 1;
        if ((int)a3_view[10] > 0)
        {
            if ((int)a3_view[14] > 0)
            {
                texture[3] = 2;
                texture[4] = 0x00A00300u;
                texture[5] = 0x00200010u;
                texture[7] = 0x01E30300u;
                packedColor = ((uint32)(r_u8(a5 + 2u) >> 2) << 16) + ((uint32)(r_u8(a5 + 1u) >> 2) << 8) + (r_u8(a5) >> 2);
                sub_800C7D8C(a1, *a3_view - (a3_view[1] << 16), a3_view[4] - (a3_view[5] << 16), a3_view[12] - (a3_view[13] << 16), a3_view[8] - (a3_view[9] << 16), packedColor, sf_draft_guest_address(texture), 2);
                *SF_DRAFT_PTR(_BYTE, (a1 + 15)) |= 2u;
                v9 = 3 * (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) - 128) / 16;
                if (v9 < 0)
                    v9 = 0;
                v10 = *SF_DRAFT_PTR(_DWORD, a1) != 0;
                *SF_DRAFT_PTR(_DWORD, (a1 + 4)) = v9;
                if (!v10)
                    sub_800C7BB0((*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))), a1);
                v7 = 1;
            }
        LABEL_11:
            v8 = v7 < 4;
        }
    }
    v10 = !v8;
    result = 2 * v7;
    if (!v10)
    {
        v11 = (_DWORD *)(48 * v7 + a1);
        do
        {
            if (*v11)
                sub_800C7BF8((*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))), sf_draft_guest_address(v11));
            result = ++v7 < 4;
            v11 += 12;
        } while (v7 < 4);
    }
    return result;
}

sint32 sub_80048D58(sint32 a1)
{
    uint32 object = (uint32)a1;
    uint32 flags, body, source, value, fourth, index;

    union
    {
        uint16 halves[16];
        uint32 words[8];
    } matrix;

    sint32 bounds[8], best[3], maximum_y, minimum_y;
    sint16 points[8][4];
    FUNCTION_MARKER(0x80048D58u, "SCUS_942.40");
    flags = r_u8(object + 34u);
    body = r_u32(object + 12u);
    if (flags - 1u < 2u)
        return sub_80048B0C(a1);
    if (r_u8(body + 265u) != 3u)
        return 3;
    source = r_u32(r_u32(object + 8u) + 12u);
    for (index = 0u; index < 9u; ++index)
    {
        value = r_u16(source + 2u * index);
        matrix.halves[index] = (uint16)((index & 1u) ? 0u - value : value);
    }
    matrix.words[5] = r_u32(source + 20u);
    matrix.words[6] = 0u - r_u32(source + 24u);
    matrix.words[7] = r_u32(source + 28u);
    sub_800D8E60(r_u32(object + 8u), 0, sf_draft_guest_address(bounds));
    maximum_y = (sint32)(0u - (uint32)bounds[5]);
    minimum_y = (sint32)(0u - (uint32)bounds[1]);
    bounds[1] = maximum_y;
    bounds[5] = minimum_y;
    sub_800E29B0(sf_draft_guest_address(bounds), sf_draft_guest_address(points), sf_draft_guest_address(&matrix));
    best[0] = points[0][0];
    best[1] = points[0][1];
    best[2] = points[0][2];
    for (index = 1u; index < 8u; ++index)
    {
        if (points[index][1] < best[1])
        {
            best[0] = points[index][0];
            best[1] = points[index][1];
            best[2] = points[index][2];
        }
    }
    /* TODO Original fourth point word SP+1C is read before publication */
    fourth = sf_draft_missing_stale_local_80048D58();
    w_u32(body + 268u, (uint32)best[0]);
    w_u32(body + 272u, (uint32)best[1]);
    w_u32(body + 276u, (uint32)best[2]);
    w_u32(body + 280u, fourth);
    return best[0];
}

sint32 sub_8006D408(sint32 a1)
{
    FUNCTION_MARKER(0x8006D408u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v2;

    int v4;
    int v5;
    int v6;
    int v7;

    int v10;

    int v12;
    int v13;
    int v14;
    int v15;
    int result;

    if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2992)))
    {
        v2 = sub_800EC8F4();
        v4 = 3 * (v2 / 360);
        v5 = 45 * (v2 / 360);
    }
    else
    {
        v2 = sub_800EC8F4();
        v4 = (int)((uint64)(1717986919LL * v2) >> 32) >> 4;
        v5 = 5 * (v2 / 40);
    }
    v6 = v2 - 8 * v5;
    v7 = v6 + 180;
    if (!*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2992)))
        v7 = v6 + 60;
    if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2992)) == 1)
    {
        sub_8006BE10((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2984))), (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2988))));
    }
    else
    {
        if ((*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 3 && (unsigned int)(*SF_DRAFT_PTR(uint32, 0x80116A88u)) >= 0x97)
        {
            (*SF_DRAFT_PTR(uint8, 0x8011645Cu)) = 1;
            sub_800EC8F4();
            v10 = sub_800EC8F4();
            sub_800C8A9C(0x8006D3C8u, v10 % 40 + 2, 0);
        }
        else
        {
            sub_8006BC98((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2984))), (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2988))), 0, 0);
        }
        v12 = sub_800EC8F4();
        if (v12 % 10 >= 6)
        {
            v13 = sub_800EC8F4();
            *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2992)) = 1;
            v7 = v13 % 20 + 5;
        }
    }
    v14 = (*SF_DRAFT_PTR(uint32, 0x801169A4u));
    v15 = *(uint8 *)(SF_DRAFT_GP + 2992);
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2980)) = v7;
    result = v15 ^ 1;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2976)) = v14;
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2992)) = result;
    return result;
}

void sub_80049B24(void)
{
    FUNCTION_MARKER(0x80049B24u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int i;
    int v2;
    int v3;
    int v4;
    int v5;

    for (i = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 876)); i; i = *SF_DRAFT_PTR(_DWORD, (v3 + 420)))
    {
        v2 = *SF_DRAFT_PTR(_DWORD, (i + 8));
        v3 = *SF_DRAFT_PTR(_DWORD, (i + 12));
        v4 = 0;
        if ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 16)) + 40)) & 0x400000) != 0 && ((*SF_DRAFT_PTR(_BYTE, (v2 + 8)) & 0x10) != 0 || !v3) || (v5 = 0, *SF_DRAFT_PTR(_BYTE, (v3 + 256))))
        {
            v4 = 1;
            v5 = 1;
        }
        if (v5)
        {
            sub_800482B8(r_u32(i + 12), 0);
            *SF_DRAFT_PTR(_DWORD, (v3 + 404)) = 0;
            *SF_DRAFT_PTR(_BYTE, (v3 + 264)) = 0;
        }
        else
        {
            if (*SF_DRAFT_PTR(_BYTE, (v3 + 265)))
            {
                if (*SF_DRAFT_PTR(_DWORD, (v3 + 416)))
                {
                    sub_80071384(i);
                }
                else if ((unsigned int)*(uint8 *)(i + 34) - 1 >= 2)
                {
                    sub_80070F74(i, v4);
                }
                else
                {
                    sub_8006FED0(i);
                }
            }
            else
            {
                sub_80048F3C(i, 1, 0);
                sub_800493F0(i, 1, 0);
                sub_80049690(i, 1, 0);
            }
            *SF_DRAFT_PTR(_BYTE, (v3 + 264)) = 1;
        }
        if (*SF_DRAFT_PTR(_DWORD, (v3 + 412)))
        {
            sub_800224AC(i);
        }
        else if (*SF_DRAFT_PTR(_BYTE, (v3 + 257)) && (!*SF_DRAFT_PTR(_DWORD, (v3 + 416)) || (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (i + 8)) + 10)) & 2) != 0))
        {
            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (i + 12)) + 112)) += (*SF_DRAFT_PTR(uint32, 0x80103F04u));
            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (i + 12)) + 116)) += (*SF_DRAFT_PTR(uint32, 0x80103F08u));
            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (i + 12)) + 120)) += (*SF_DRAFT_PTR(uint32, 0x80103F0Cu));
        }
    }
}

sint32 sub_800E1088(uint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800E1088u, "SCUS_942.40");
    sint32 forward[4], side[3], up[3];
    sint16 angles[4];
    uint8 rotation[32];
    uint32 forward_address, side_address, up_address, rotation_address;
    if (a1 && (r_u32(a1) || r_u32(a1 + 4u) || r_u32(a1 + 8u)))
    {
        forward[0] = (sint32)r_u32(a1);
        forward[1] = (sint32)r_u32(a1 + 4u);
        forward[2] = (sint32)r_u32(a1 + 8u);
        forward[3] = (sint32)r_u32(a1 + 12u);
        side[0] = forward[2];
        side[1] = 0;
        side[2] = (sint32)(0u - (uint32)forward[0]);
        if (!forward[2] && !forward[0])
            side[2] = 4096;
        forward_address = sf_draft_guest_address(forward);
        side_address = sf_draft_guest_address(side);
        up_address = sf_draft_guest_address(up);
        sub_800C720C(side_address, side_address);
        sub_800EBA78(forward_address, side_address, up_address);
        w_u16(a3, (uint16)side[0]);
        w_u16(a3 + 6u, (uint16)side[1]);
        w_u16(a3 + 12u, (uint16)side[2]);
        w_u16(a3 + 2u, (uint16)up[0]);
        w_u16(a3 + 8u, (uint16)up[1]);
        w_u16(a3 + 14u, (uint16)up[2]);
        w_u16(a3 + 4u, (uint16)forward[0]);
        w_u16(a3 + 10u, (uint16)forward[1]);
        w_u16(a3 + 16u, (uint16)forward[2]);
        if (a2)
        {
            angles[0] = 0;
            angles[1] = 0;
            angles[2] = (sint16)(0u - (uint32)a2);
            rotation_address = sf_draft_guest_address(rotation);
            sub_800EBE94(sf_draft_guest_address(angles), rotation_address);
            w_u16(rotation_address + 2u, (uint16)(0u - r_u16(rotation_address + 2u)));
            w_u16(rotation_address + 6u, (uint16)(0u - r_u16(rotation_address + 6u)));
            w_u16(rotation_address + 10u, (uint16)(0u - r_u16(rotation_address + 10u)));
            w_u16(rotation_address + 14u, (uint16)(0u - r_u16(rotation_address + 14u)));
            sub_800EACE4(a3, rotation_address, a3);
        }
    }
    return 1;
}

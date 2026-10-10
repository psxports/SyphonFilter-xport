#include "game_draft.h"
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_8002FC5C();
extern uint32 sub_8003EE3C();
extern uint32 sub_80057B14();

extern uint32 sub_80089440();
extern uint32 sub_8008A3BC();
extern uint32 sub_8008A3FC();
extern uint32 sub_8008C464();
extern uint32 sub_800D990C();

extern uint32 sub_800E3F54();
sint32 sub_800E4C84(sint32 mode);
void sub_800E4F68(sint32 mask);
extern sint32 sub_800E5184(uint32 rectangle, uint8 red, uint8 green, uint8 blue);
extern uint32 sub_800E5D28();
extern uint32 sub_800E5DC4(uint32 packet, uint32 rectangle);
extern uint32 sub_800E7F54();
void sub_800E81D4(uint32 box, uint32 ordering_table, uint16 depth);

extern uint32 sub_800EC8E4();

sint32 sub_800ED558(sint32 mode, uint32 result);

extern uint32 sub_800ED6FC();
extern uint32 sub_800EDA20();
extern uint32 sub_800F0384();

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x8009498Cu 0x8009498c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8009498C(uint32 a1, sint32 a2)
{
    int *native_a1 = SF_DRAFT_PTR(int, a1);
    FUNCTION_MARKER(0x8009498Cu, "SCUS_942.40");
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
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
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    int v29;
    int v30;
    int v31;
    int v32;
    int v33;
    int v34;
    char v35[4];
    int v36;
    int v37;

    v14 = (*SF_DRAFT_PTR(uint32, 0x80013570u));
    v15 = (*SF_DRAFT_PTR(uint32, 0x80013554u));
    v16 = (*SF_DRAFT_PTR(uint32, 0x80013558u));
    v17 = (*SF_DRAFT_PTR(uint32, 0x8001355Cu));
    v18 = (*SF_DRAFT_PTR(uint32, 0x80013560u));
    v19 = (*SF_DRAFT_PTR(uint32, 0x80013574u));
    v20 = (*SF_DRAFT_PTR(uint32, 0x80013578u));
    v21 = (*SF_DRAFT_PTR(uint32, 0x8001357Cu));
    v22 = (*SF_DRAFT_PTR(uint32, 0x80013580u));
    v23 = (*SF_DRAFT_PTR(uint32, 0x80013584u));
    v24 = (*SF_DRAFT_PTR(uint32, 0x80013588u));
    v25 = (*SF_DRAFT_PTR(uint32, 0x8001358Cu));
    v26 = (*SF_DRAFT_PTR(uint32, 0x80013590u));
    v11 = (*SF_DRAFT_PTR(uint32, 0x80013564u)) / 32;
    v12 = (*SF_DRAFT_PTR(uint32, 0x80013568u)) / 32;
    v13 = (*SF_DRAFT_PTR(uint32, 0x8001356Cu)) / 32;
    v27 = (*SF_DRAFT_PTR(uint32, 0x80013594u));
    v28 = (*SF_DRAFT_PTR(uint32, 0x80013598u));
    v29 = (*SF_DRAFT_PTR(uint32, 0x8001359Cu));
    v30 = (*SF_DRAFT_PTR(uint32, 0x800135A0u));
    v31 = (*SF_DRAFT_PTR(uint32, 0x800135A4u));
    v32 = (*SF_DRAFT_PTR(uint32, 0x800135A8u));
    v33 = (*SF_DRAFT_PTR(uint32, 0x800135ACu));
    v34 = (*SF_DRAFT_PTR(uint32, 0x800135B0u));
    v4 = native_a1[1];
    v5 = native_a1[2];
    v6 = native_a1[3];
    v31 = *native_a1;
    v32 = v4;
    v33 = v5;
    v34 = v6;
    sub_800E2004(sf_draft_guest_address(&v11), sf_draft_guest_address(&v27), sf_draft_guest_address(v35), sf_draft_guest_address(&v36));
    v11 *= 32;
    v12 = 32 * v36;
    v13 *= 32;
    if (v35[0])
    {
        v19 /= 32;
        v20 /= 32;
        v21 /= 32;
        v27 = (*SF_DRAFT_PTR(uint32, 0x80013594u));
        v28 = (*SF_DRAFT_PTR(uint32, 0x80013598u));
        v29 = (*SF_DRAFT_PTR(uint32, 0x8001359Cu));
        v30 = (*SF_DRAFT_PTR(uint32, 0x800135A0u));
        v31 = (*SF_DRAFT_PTR(uint32, 0x800135A4u));
        v32 = (*SF_DRAFT_PTR(uint32, 0x800135A8u));
        v33 = (*SF_DRAFT_PTR(uint32, 0x800135ACu));
        v34 = (*SF_DRAFT_PTR(uint32, 0x800135B0u));
        v7 = native_a1[1];
        v8 = native_a1[2];
        v9 = native_a1[3];
        v31 = *native_a1;
        v32 = v7;
        v33 = v8;
        v34 = v9;
        sub_800E2004(sf_draft_guest_address(&v19), sf_draft_guest_address(&v27), sf_draft_guest_address(v35), sf_draft_guest_address(&v37));
        v19 *= 32;
        v20 = 32 * v37;
        v21 *= 32;
        if (v35[0])
        {
            if ((unsigned int)(v11 + 32358) > 0xFCCC || (unsigned int)(v12 + 32358) > 0xFCCC || (unsigned int)(v13 + 32358) > 0xFCCC)
            {
                sub_800D990C(sf_draft_guest_address(&v11), 32358, sf_draft_guest_address(&v11));
            }
            if ((unsigned int)(v19 + 32358) > 0xFCCC || (unsigned int)(v20 + 32358) > 0xFCCC || (unsigned int)(v21 + 32358) > 0xFCCC)
            {
                sub_800D990C(sf_draft_guest_address(&v19), 32358, sf_draft_guest_address(&v19));
            }
            *SF_DRAFT_PTR(_WORD, a2) = v11;
            *SF_DRAFT_PTR(_WORD, (a2 + 6)) = v12;
            *SF_DRAFT_PTR(_WORD, (a2 + 12)) = v13;
            *SF_DRAFT_PTR(_WORD, (a2 + 2)) = v15;
            *SF_DRAFT_PTR(_WORD, (a2 + 8)) = v16;
            *SF_DRAFT_PTR(_WORD, (a2 + 14)) = v17;
            *SF_DRAFT_PTR(_WORD, (a2 + 4)) = v19;
            *SF_DRAFT_PTR(_WORD, (a2 + 10)) = v20;
            *SF_DRAFT_PTR(_WORD, (a2 + 16)) = v21;
            *SF_DRAFT_PTR(_DWORD, (a2 + 20)) = v23;
            *SF_DRAFT_PTR(_DWORD, (a2 + 24)) = v24;
            *SF_DRAFT_PTR(_DWORD, (a2 + 28)) = v25;
        }
    }
    return (uint8)v35[0];
}

// FUNCTION_MARKER 0x800CA7FCu 0x800ca7fc
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800CA7FC(void)
{
    FUNCTION_MARKER(0x800CA7FCu, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;
    int v1 = SF_DRAFT_GP;
    char v2;
    int result;
    int v4 = SF_DRAFT_GP;
    int v5;
    int v6;
    int v7;
    int v8;
    int *v9;
    __int16 v10;
    int *v11;
    __int16 *v12;
    int v13;
    char *v14;
    int *v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    uint16 v22[1];
    uint16 v23[3];
    char v24[24];

    union
    {
        uint32 words[2];
        uint16 halves[4];
    } clear_rect;

    struct
    {
        uint32 flags;
        uint16 coords[4];
        uint8 rgb[3];
    } clear_sprite;

    int *v35;

    v35 = SF_DRAFT_PTR(int, 0x8012CD10u + 20u * (uint32)(sint32)*SF_DRAFT_PTR(sint16, v0 + 2038));
    sub_800E4C84(1);
    if ((*SF_DRAFT_PTR(uint8, 0x801165BBu)))
        sub_800E9024();
    else
        sub_800C77F4(0x800E9024u, 3, (int)0x80027DF8u, 0);
    sub_800D7A4C(v22, v23);
    sub_800E4F68(*SF_DRAFT_PTR(_DWORD, (v1 + 2016)) >= 8);
    v2 = 0;
    if (((*SF_DRAFT_PTR(uint16, 0x8012D69Eu)) & 2) == 0)
    {
        sub_800E5D28(sf_draft_guest_address(v24));
        v5 = (uint8)v24[2];
        v6 = 0;
        while (1)
        {
            v7 = 0;
            if (*SF_DRAFT_PTR(_WORD, (v4 + 2020)))
                break;
        LABEL_35:
            if (++v6 >= 5)
                goto LABEL_36;
        }
        v8 = 0;
        while (1)
        {
            v9 = SF_DRAFT_PTR(int, 0x8012D698u + 4u * (uint32)v8);
            v10 = *SF_DRAFT_PTR(_WORD, (v4 + 2038)) + 2 * BYTE1(SF_DRAFT_PTR(uint32, 0x8012D698u)[v8 + 2]);
            v11 = SF_DRAFT_PTR(int, 0x8013D560u + 20u * (uint32)(sint32)v10);
            if (*v11)
            {
                if (*((uint8 *)v9 + 8) == v6)
                {
                    v12 = SF_DRAFT_PTR(__int16, v9[3]);
                    if (v12[2])
                    {
                        if (v12[3])
                            break;
                    }
                }
            }
        LABEL_34:
            ++v7;
            v8 += 61;
            if (v7 >= *SF_DRAFT_PTR(uint16, (v4 + 2020)))
                goto LABEL_35;
        }
        if (v5)
        {
            if (v12[1] < 240)
                goto LABEL_20;
        }
        else
        {
            v13 = v12[1];
            if (v13 < 240)
            {
                v12[1] = v13 + 240;
                goto LABEL_20;
            }
        }
        *SF_DRAFT_PTR(_WORD, (v9[3] + 2)) -= 240;
    LABEL_20:
        if ((*((_WORD *)v9 + 3) & 1) != 0)
        {
            v14 = SF_DRAFT_PTR(char, 0x80122400u + 12u * (uint32)(sint32)v10);
            sub_800E5DC4(sf_draft_guest_address(v14), v9[3]);
            sub_800E7F54(v11[1] + (4 << *v11) - 4, sf_draft_guest_address(v14));
            if (v2)
            {
                if ((*((_WORD *)v9 + 3) & 8) != 0)
                {
                    clear_sprite.flags = 0;
                    clear_sprite.coords[0] = *SF_DRAFT_PTR(_WORD, v9[3]) - (*SF_DRAFT_PTR(uint16, 0x8012C7B0u));
                    v20 = v9[3];
                    v21 = *SF_DRAFT_PTR(__int16, (v20 + 2));
                    if (v21 >= 240)
                        *SF_DRAFT_PTR(_WORD, (v20 + 2)) = v21 - 240;
                    clear_sprite.coords[1] = *SF_DRAFT_PTR(_WORD, (v9[3] + 2)) - (*SF_DRAFT_PTR(uint16, 0x8012C7B2u));
                    clear_sprite.coords[2] = *SF_DRAFT_PTR(_WORD, (v9[3] + 4));
                    clear_sprite.coords[3] = *SF_DRAFT_PTR(_WORD, (v9[3] + 6));
                    clear_sprite.rgb[0] = *((_BYTE *)v9 + 16);
                    clear_sprite.rgb[1] = *((_BYTE *)v9 + 17);
                    clear_sprite.rgb[2] = *((_BYTE *)v9 + 18);
                    sub_800E81D4(sf_draft_guest_address(&clear_sprite), sf_draft_guest_address(v11), (uint16)((1 << *v11) - 2));
                }
            }
            else
            {
                v15 = SF_DRAFT_PTR(int, v9[3]);
                v16 = v15[1];
                clear_rect.words[0] = *v15;
                clear_rect.words[1] = v16;
                if (SHIWORD(v16) != 240)
                {
                    HIWORD(clear_rect.words[1]) = 240;
                    HIWORD(clear_rect.words[0]) = SHIWORD(clear_rect.words[0]) >= 240 ? 0xF0 : 0;
                }
                if ((*((_WORD *)v9 + 3) & 0x10) != 0 && (*SF_DRAFT_PTR(uint32, 0x80116B28u)) == (*SF_DRAFT_PTR(uint32, 0x80116540u)))
                {
                    v17 = (uint8)(*SF_DRAFT_PTR(uint32, 0x80116B28u));
                    v18 = BYTE1((*SF_DRAFT_PTR(uint32, 0x80116B28u)));
                    v19 = BYTE2((*SF_DRAFT_PTR(uint32, 0x80116B28u)));
                }
                else
                {
                    v17 = *((uint8 *)v9 + 16);
                    v18 = *((uint8 *)v9 + 17);
                    v19 = *((uint8 *)v9 + 18);
                }
                v2 = 1;
                sub_800E5184(sf_draft_guest_address(&clear_rect), v17, v18, v19);
            }
            sub_800E9C14(sf_draft_guest_address(v11));
        }
        goto LABEL_34;
    }
    result = sub_8013E578();
    if (!result)
    {
        if (((*SF_DRAFT_PTR(uint16, 0x8012D792u)) & 4) != 0)
            sub_800E9C14(0x8013D560u + 20u * (uint32)(sint32)(sint16)(*SF_DRAFT_PTR(uint16, v4 + 2038) + 2));
    LABEL_36:
        result = 0;
        if (((*SF_DRAFT_PTR(uint16, 0x8012D69Eu)) & 2) == 0)
        {
            if (*SF_DRAFT_PTR(_WORD, (v4 + 2162)) || (result = 0, *SF_DRAFT_PTR(_BYTE, (v4 + 2054))))
            {
                sub_800E9C14(sf_draft_guest_address(v35));
                return 0;
            }
        }
    }
    return result;
}

// FUNCTION_MARKER 0x80027E50u 0x80027e50
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80027E50(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x80027E50u, "SCUS_942.40");
    int v4;
    int result;
    int v6;
    int v7;
    int v8;
    _DWORD *v9;
    int v10;
    int v11;
    int v12;
    uint8 v13;
    int v14;
    _DWORD *v15;
    unsigned int v16;
    char *v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    _DWORD *v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    int v30;
    int v31;
    int v32;
    int v33;
    int v34;

    v31 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(_DWORD, a3) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v4 = sub_800CB6DC(*SF_DRAFT_PTR(_DWORD, (v31 + 8)), *SF_DRAFT_PTR(_DWORD, (a3 + 4)));
    *SF_DRAFT_PTR(_DWORD, (v4 + 32)) &= ~a2;
    result = *SF_DRAFT_PTR(_DWORD, (v31 + 16));
    v30 = -1;
    v6 = *SF_DRAFT_PTR(_DWORD, (result + 20));
    v32 = *SF_DRAFT_PTR(_DWORD, (result + 12)) + 8;
    if (!v6)
        return result;
    v7 = *SF_DRAFT_PTR(_DWORD, (a3 + 4));
    v8 = v6 + 32 * v7;
    v33 = v8 + 20;
    v9 = SF_DRAFT_PTR(_DWORD, r_u32((v8 + 28)));
    if (!*SF_DRAFT_PTR(_BYTE, v8))
    {
    LABEL_27:
        v10 = 0;
        goto LABEL_28;
    }
    if (a2 == 0x80000000)
        sub_80028720(v31, v7, -1);
    v10 = 0;
    if (!v9)
        goto LABEL_28;
    v11 = 0;
    v12 = -1;
    v13 = 0;
    if (*v9 == -1)
        goto LABEL_28;
    v14 = 0x4000000;
    v15 = v9;
    v16 = a2 & 0xFFFF0000;
    while (1)
    {
        if (v16 == v14 && (uint8)a2 == *v15)
        {
            v13 = 1;
            if (v15[2] == -1)
            {
                v34 = v14;
                v17 = SF_DRAFT_PTR(char, sub_800282C4(*SF_DRAFT_PTR(_DWORD, (a3 + 16)), *SF_DRAFT_PTR(uint8, (a3 + 9)), *SF_DRAFT_PTR(_DWORD, (a3 + 12))));
                v18 = *SF_DRAFT_PTR(_DWORD, (v4 + 40));
                v14 = v34;
                if (v18 == 0x8000 && v17[9] == -1 || v18 == 0x4000 && v17[10] == -1 || v17[11] == -1)
                    v12 = 0;
            }
            else
            {
                v12 = v11 + 1;
            }
            if (v12 != -1)
                *SF_DRAFT_PTR(_DWORD, (v4 + 32)) = *SF_DRAFT_PTR(_DWORD, (v4 + 32)) & 0xFFFFFF00 | v9[2 * v12] | v14;
            goto LABEL_23;
        }
        v19 = v13;
        if (v16 == 0x80000000)
        {
            v19 = v13;
            if (*v15 == -1)
            {
                v13 = 1;
            LABEL_23:
                v19 = 1;
            }
        }
        if (v19)
            break;
        v15 += 2;
        ++v11;
        if (*v15 == -1)
            goto LABEL_27;
    }
    sf_draft_call((uint32)(v15[1]), 3u, (const uint32[]){*SF_DRAFT_PTR(__int16, (v31 + 2)), *SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (a3 + 16)) + 4)), v11});
    v10 = 0;
LABEL_28:
    v20 = v32;
    while (1)
    {
        v21 = *SF_DRAFT_PTR(_DWORD, (v20 + 4));
        if (v21 != 255 && v21 == *SF_DRAFT_PTR(_DWORD, (a3 + 4)))
            break;
        ++v10;
        v20 += 4;
        if (v10 >= 3)
            goto LABEL_33;
    }
    v30 = v10;
LABEL_33:
    v22 = 4 * v30;
    if (v30 == -1 || (v23 = SF_DRAFT_PTR(_DWORD, (v22 + v32)), *SF_DRAFT_PTR(_DWORD, (v22 + v32 + 16)) != 1))
    {
    LABEL_37:
        v24 = a2;
        result = 0x80000000;
    }
    else
    {
        v24 = a2;
        result = 0x80000000;
        if ((a2 & 0xFFFF0000) == *SF_DRAFT_PTR(_DWORD, (v33 + 4)))
        {
            v23[4] = 2;
            v23[7] = *SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (a3 + 16)) + 4));
            v25 = v32 + 2 * v30;
            *SF_DRAFT_PTR(_BYTE, (v25 + 40)) = *SF_DRAFT_PTR(_BYTE, (a3 + 8));
            *SF_DRAFT_PTR(_BYTE, (v25 + 41)) = *SF_DRAFT_PTR(_BYTE, (a3 + 9));
            v23[12] = *SF_DRAFT_PTR(_DWORD, (a3 + 12));
            sub_80028F3C(*SF_DRAFT_PTR(__int16, (v31 + 2)), 91);
            goto LABEL_37;
        }
    }
    if (v24 == 0x80000000)
    {
        v26 = sub_800282C4(*SF_DRAFT_PTR(_DWORD, (a3 + 16)), *SF_DRAFT_PTR(uint8, (a3 + 9)), *SF_DRAFT_PTR(_DWORD, (a3 + 12)));
        v27 = v26;
        if (*SF_DRAFT_PTR(_BYTE, (v26 + 15)))
            sub_80028F3C(*SF_DRAFT_PTR(__int16, (v31 + 2)), *SF_DRAFT_PTR(uint8, (v26 + 15)));
        if (*SF_DRAFT_PTR(_DWORD, (v27 + 16)) || (result = *SF_DRAFT_PTR(uint8, (v27 + 20)), *SF_DRAFT_PTR(_BYTE, (v27 + 20))))
        {
            v28 = v32 + 20 * *SF_DRAFT_PTR(__int16, (v32 + 100));
            *SF_DRAFT_PTR(_DWORD, (v28 + 104)) = *SF_DRAFT_PTR(_DWORD, a3);
            *SF_DRAFT_PTR(_BYTE, (v28 + 112)) = *SF_DRAFT_PTR(_BYTE, (a3 + 8));
            *SF_DRAFT_PTR(_BYTE, (v28 + 113)) = *SF_DRAFT_PTR(_BYTE, (a3 + 9));
            *SF_DRAFT_PTR(_DWORD, (v28 + 116)) = *SF_DRAFT_PTR(_DWORD, (a3 + 12));
            *SF_DRAFT_PTR(_DWORD, (v28 + 120)) = *SF_DRAFT_PTR(_DWORD, (a3 + 16));
            ++*SF_DRAFT_PTR(_WORD, (v32 + 100));
            return sub_80028F3C(*SF_DRAFT_PTR(__int16, (v31 + 2)), 91);
        }
    }
    return result;
}

// FUNCTION_MARKER 0x8003F634u 0x8003f634
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8003F634(void)
{
    uint32 active = 0u, enabled = 0u, changed = 0u;
    uint32 entity, descriptor, owner_root, row, state_byte, state_bits;
    uint32 camera, source, object, random, colour;
    sint32 id, mode, result, target = -1, kind, offset;
    sint32 position[4];
    FUNCTION_MARKER(0x8003F634u, "SCUS_942.40");
    if (r_u8(0x80116B7Cu))
    {
        entity = r_u32(0x80116B9Cu);
        active = r_s16(r_u32(entity + 20u)) >= 0;
    }
    if (r_u32(0x80115E80u) != 1u)
        goto process;
    entity = r_u32(0x80116B9Cu);
    descriptor = r_u32(entity + 16u);
    if (r_u8(descriptor + 8u) != 8u)
        goto enable;
    if (!(r_u32(descriptor) & 0x200000u))
        goto process;
    id = r_s16(entity + 2u);
    if ((uint32)id == r_u32(0x80116AB0u))
    {
        if (r_u32(0x80115FB8u) == 19u)
            goto process;
    }
    else
    {
        owner_root = r_u32(0x80115CCCu);
        row = owner_root + 76u * (uint32)id;
        state_byte = r_u8(row + 36u);
        if (state_byte)
        {
            if (state_byte == 19u)
                goto process;
        }
        else if ((r_u32(row + 36u) & 0x3000u) == 0x1000u)
            goto process;
    }
    entity = r_u32(0x80116B9Cu);
    id = r_s16(entity + 2u);
    if ((uint32)id == r_u32(0x80116AB0u))
    {
        if (r_u32(0x80115FB8u) == 20u)
            goto process;
        goto enable;
    }
    owner_root = r_u32(0x80115CCCu);
    row = owner_root + 76u * (uint32)id;
    state_byte = r_u8(row + 36u);
    if (state_byte)
    {
        if (state_byte == 20u)
            goto process;
    }
    else
    {
        state_bits = r_u32(row + 36u) & 0x3000u;
        if (state_bits == 0x2000u)
            goto process;
    }
enable:
    enabled = 1u;
process:
    if ((active || enabled) && r_s16(r_u32(r_u32(0x80116B9Cu) + 24u) + 8u) > 0)
    {
        mode = r_s16(0x801169EEu);
        if (mode == 0)
            sub_8003E6E0((sint8)active);
        else if (mode == (active ? 2 : 1))
        {
            sub_8003E87C();
            sub_8003E6E0((sint8)active);
        }
        mode = r_s16(0x801169EEu);
        if (!mode)
        {
            /* TODO Mode-zero branch has no original XYZ producer */
            sf_draft_unbound_stack_field(0x8003F634u, 0x10u);
        }
        sub_8003E908(1);
        if (active)
            sub_8003F2F0(sf_draft_guest_address(position));
        else
        {
            source = sub_8002FC5C(sf_draft_guest_address(&target));
            position[0] = r_s32(source);
            position[1] = r_s32(source + 4u);
            position[2] = r_s32(source + 8u);
        }
        if (active && r_s32(0x80116674u) >= 4)
            sub_8003F4B0(sf_draft_guest_address(position));
        if ((uint32)position[0] - (uint32)(sint32)r_s16(0x801169E8u) + 16u >= 33u || (uint32)position[1] - (uint32)(sint32)r_s16(0x801169EAu) + 16u >= 33u || (uint32)position[2] - (uint32)(sint32)r_s16(0x801169ECu) + 16u >= 33u)
        {
            w_u16(0x801169E8u, (uint16)position[0]);
            w_u16(0x801169EAu, (uint16)position[1]);
            w_u16(0x801169ECu, (uint16)position[2]);
            changed = 1u;
        }
        else if (r_s32(0x80116674u) < 4)
            changed = 1u;
    }
    else
    {
        result = sub_8003E908(-1);
        changed = 1u;
        if (!result)
            return result;
        position[0] = r_s16(0x801169E8u);
        position[1] = r_s16(0x801169EAu);
        position[2] = r_s16(0x801169ECu);
    }
    camera = r_u32(0x80115D84u);
    sub_800CB424(sf_draft_guest_address(position), r_u32(camera), sf_draft_guest_address(position));
    result = (sint32)(0u - (uint32)position[1]);
    mode = r_s16(0x801169EEu);
    position[1] = result;
    if (!mode)
        return result;
    if (mode == 1)
        sub_8003E984(sf_draft_guest_address(position), changed);
    else
    {
        kind = 0;
        if (target >= 0)
        {
            owner_root = r_u32(0x80115CCCu);
            object = r_u32(owner_root + 76u * (uint32)target + 52u);
            kind = (sint16)sub_800D0028(r_u32(object + 8u));
        }
        sub_8003EE3C((uint16 *)position, changed, kind);
    }
    random = (uint32)sub_800EC8F4() & 31u;
    colour = ((random + 33u) << 16) | ((random | 0xE0u) << 8) | (random + 33u) | 0x40000000u;
    for (offset = 264; offset >= 0; offset -= 24)
        w_u32(0x8011C144u + (uint32)offset, colour);
    return offset;
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D5100_stage1(sint32 input1, sint32 input2, sint32 input3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D5100_stage2(sint32 input1);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D5100_stage3(sint32 input1);

// FUNCTION_MARKER 0x800D5100u 0x800d5100
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800D5100(uint32 region, uint32 scratch, uint32 vertex0, uint32 vertex1, uint32 vertex2, sint32 extent, uint32 record, uint32 vertex_pool)
{
    FUNCTION_MARKER(0x800D5100u, "SCUS_942.40");
    sint32 temporary_t5; /* TODO Geometry value type */
    sint32 temporary_t3; /* TODO Geometry value type */
    int result = (sint32)region;
    int v1 = (sint32)scratch;
    int v2 = (sint32)vertex0;
    int v3 = (sint32)vertex1;
    int v4 = (sint32)vertex2;
    int v5 = extent;
    int v6 = (sint32)record;
    int v7 = (sint32)vertex_pool;
    int v8;
    int v9;
    int v10;
    int v11;
    __int16 *v12;
    int v13;
    int v14;
    int v15;
    __int16 *v16;
    int v17;
    int v18;
    int v19;
    __int16 *v20;
    int v21;
    int v22;
    int v23;
    __int16 *v24;
    int v25;
    int v26;
    int v27;
    int v28;
    int v29;
    int v30;
    int v31;
    int v32;
    int v33;
    bool v34;
    int v36;
    int *v37;
    int v38;
    int v39;
    int v40;
    int v41;
    unsigned int v43;
    int v44;
    int v45;

    if (!*SF_DRAFT_PTR(_DWORD, (v6 + 12)))
        return result;
    v8 = *SF_DRAFT_PTR(__int16, (result + 16));
    if (!*SF_DRAFT_PTR(_DWORD, (result + 8)))
        return result;
    v9 = *SF_DRAFT_PTR(__int16, (result + 20));
    v10 = *SF_DRAFT_PTR(__int16, (result + 18));
    v11 = 0;
    v12 = SF_DRAFT_PTR(__int16, (8 * *SF_DRAFT_PTR(char, (v2 + 11)) + v7));
    v13 = *v12 - v8;
    v14 = v12[2] - v9;
    if (v13 < 0)
        v13 = v8 - *v12;
    if (v13 - v5 <= 0)
    {
        v15 = v12[1] - v10;
        if (v14 < 0)
            v14 = v9 - v12[2];
        if (v14 - v5 <= 0)
        {
            if (v15 < 0)
                v15 = v10 - v12[1];
            if (v15 - v5 <= 0)
                goto LABEL_46;
            v11 = 1;
        }
    }
    v16 = SF_DRAFT_PTR(__int16, (8 * *SF_DRAFT_PTR(char, (v3 + 11)) + v7));
    v17 = *v16 - v8;
    v18 = v16[2] - v9;
    if (v17 < 0)
        v17 = v8 - *v16;
    if (v17 - v5 <= 0)
    {
        v19 = v16[1] - v10;
        if (v18 < 0)
            v18 = v9 - v16[2];
        if (v18 - v5 <= 0)
        {
            if (v19 < 0)
                v19 = v10 - v16[1];
            if (v19 - v5 <= 0)
                goto LABEL_46;
            v11 = 1;
        }
    }
    v20 = SF_DRAFT_PTR(__int16, (8 * *SF_DRAFT_PTR(char, (v4 + 11)) + v7));
    v21 = *v20 - v8;
    v22 = v20[2] - v9;
    if (v21 < 0)
        v21 = v8 - *v20;
    if (v21 - v5 <= 0)
    {
        v23 = v20[1] - v10;
        if (v22 < 0)
            v22 = v9 - v20[2];
        if (v22 - v5 <= 0)
        {
            if (v23 < 0)
                v23 = v10 - v20[1];
            if (v23 - v5 <= 0)
                goto LABEL_46;
            v11 = 1;
        }
    }
    if (*SF_DRAFT_PTR(int, (v1 + 944)) > 0)
        goto LABEL_44;
    v24 = SF_DRAFT_PTR(__int16, (8 * *SF_DRAFT_PTR(char, (4 * (uint8)*SF_DRAFT_PTR(_DWORD, (v1 + 952)) + v1 + 11)) + v7));
    v25 = *v24 - v8;
    v26 = v24[2] - v9;
    if (v25 < 0)
        v25 = v8 - *v24;
    if (v25 - v5 > 0)
        goto LABEL_44;
    v27 = v24[1] - v10;
    if (v26 < 0)
        v26 = v9 - v24[2];
    if (v26 - v5 > 0)
    {
    LABEL_44:
        if (!v11)
            return result;
        goto LABEL_47;
    }
    if (v27 < 0)
        v27 = v10 - v24[1];
    if (v27 - v5 > 0)
    {
        v11 = 1;
        goto LABEL_44;
    }
LABEL_46:
    LOWORD(v11) = 0;
LABEL_47:
    v28 = *SF_DRAFT_PTR(__int16, (v2 + 4));
    v29 = *SF_DRAFT_PTR(__int16, (v3 + 4));
    v30 = *SF_DRAFT_PTR(__int16, (v4 + 4));
    v31 = v28;
    if (v29 >= v28)
        v28 = *SF_DRAFT_PTR(__int16, (v3 + 4));
    if (v31 >= v29)
        v31 = *SF_DRAFT_PTR(__int16, (v3 + 4));
    if (v30 >= v28)
        v28 = *SF_DRAFT_PTR(__int16, (v4 + 4));
    if (v31 >= v30)
        v31 = *SF_DRAFT_PTR(__int16, (v4 + 4));
    v32 = *SF_DRAFT_PTR(__int16, (v1 + 1018));
    v33 = v31 - 12;
    if (v28 + 12 >= v32)
    {
        v34 = v32 < v33;
        v32 = 1;
        if (!v34)
            *SF_DRAFT_PTR(_BYTE, (v1 + 1013)) = 1;
    }
    if ((*SF_DRAFT_PTR(_BYTE, (v1 + 1014)) & 2) != 0 && v32 < v33)
        *SF_DRAFT_PTR(_BYTE, (v1 + 1013)) = 3;
    if ((*SF_DRAFT_PTR(uint32, 0x801164B4u)))
    {
        temporary_t3 = (4 * v6) & 0xFFFFFF | 0x34000000;
        /* Geometry operation uses the project SDK bridge */
        sf_draft_geometry_800D5100_stage1(temporary_t3, temporary_t3, temporary_t3);
    }
    v36 = (*SF_DRAFT_PTR(uint32, 0x801164D0u));
    v37 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(_DWORD, (result + 8)) + 40));
    v38 = *v37;
    if ((*SF_DRAFT_PTR(uint32, 0x801164D0u)))
    {
        /* Geometry operation uses the project SDK bridge */
        sf_draft_geometry_800D5100_stage2(0);
        v39 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x801164D0u)) + 4));
        *v37 = (uint32)v36;
        (*SF_DRAFT_PTR(uint32, 0x801164D0u)) = v39;
        *SF_DRAFT_PTR(_DWORD, (v36 + 4)) = v38;
        if (*SF_DRAFT_PTR(int, (v1 + 944)) < 0)
        {
            *SF_DRAFT_PTR(_DWORD, (v36 + 8)) = 4;
            v44 = 8 * *SF_DRAFT_PTR(char, (v3 + 11));
            *SF_DRAFT_PTR(_DWORD, (v36 + 28)) = v7 + 8 * *SF_DRAFT_PTR(char, (v2 + 11));
            v45 = 8 * *SF_DRAFT_PTR(char, (v4 + 11));
            *SF_DRAFT_PTR(_DWORD, (v36 + 32)) = v7 + v44;
            *SF_DRAFT_PTR(_DWORD, (v36 + 40)) = v7 + v45;
            *SF_DRAFT_PTR(_DWORD, (v36 + 36)) = v7 + 8 * *SF_DRAFT_PTR(char, (4 * (uint8)*SF_DRAFT_PTR(_DWORD, (v1 + 952)) + v1 + 11));
            temporary_t5 = 2;
            *SF_DRAFT_PTR(_DWORD, (v36 + 12)) = v6 + 4;
        }
        else
        {
            *SF_DRAFT_PTR(_DWORD, (v36 + 8)) = 3;
            v40 = 8 * *SF_DRAFT_PTR(char, (v3 + 11));
            *SF_DRAFT_PTR(_DWORD, (v36 + 28)) = v7 + 8 * *SF_DRAFT_PTR(char, (v2 + 11));
            v41 = 8 * *SF_DRAFT_PTR(char, (v4 + 11));
            *SF_DRAFT_PTR(_DWORD, (v36 + 32)) = v7 + v40;
            *SF_DRAFT_PTR(_DWORD, (v36 + 36)) = v7 + v41;
            *SF_DRAFT_PTR(_DWORD, (v36 + 12)) = v6 + 15;
            temporary_t5 = 1;
        }
        *SF_DRAFT_PTR(_DWORD, (v36 + 16)) = v36 + 20;
        v43 = *SF_DRAFT_PTR(_DWORD, (v6 + 12));
        *SF_DRAFT_PTR(_WORD, (v36 + 20)) = (__int16)((_WORD)v43 << 8) >> 2;
        *SF_DRAFT_PTR(_WORD, (v36 + 22)) = (__int16)(v43 & 0xFF00) >> 2;
        *SF_DRAFT_PTR(_WORD, (v36 + 24)) = ((__int16)(v43 >> 8) >> 2) & 0xFFC0;
        *SF_DRAFT_PTR(_WORD, (v36 + 26)) = v11;
        if (*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (result + 8)) + 20)))
        {
            *SF_DRAFT_PTR(_DWORD, (v1 + 940)) += temporary_t5;
            /* Geometry operation uses the project SDK bridge */
            sf_draft_geometry_800D5100_stage3(temporary_t5);
        }
    }
    return result;
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage1(sint32 input1);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage2(sint32 input1, sint32 input2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage3(sint32 input1, sint32 input2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage4(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage5(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage6(uint32 memory1, sint32 input2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage7(sint32 input1, sint32 input2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage8(uint32 memory1, uint32 memory2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage9(uint32 memory1);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage10(void);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage11(sint32 *output1);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage12(sint32 *output1);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage13(uint32 memory1, uint32 memory2, uint32 memory3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage14(uint32 memory1, uint32 memory2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage15(uint32 memory1);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage16(uint32 memory1);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D2424_stage17(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5);

// FUNCTION_MARKER 0x800D2424u 0x800d2424
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800D2424(uint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    _DWORD *native_a1 = SF_DRAFT_PTR(_DWORD, a1);
    FUNCTION_MARKER(0x800D2424u, "SCUS_942.40");
    sint32 temporary_t6; /* TODO Geometry value type */
    sint32 temporary_t5; /* TODO Geometry value type */
    sint32 temporary_t4; /* TODO Geometry value type */
    sint32 temporary_t3; /* TODO Geometry value type */
    sint32 temporary_t2; /* TODO Geometry value type */
    sint32 temporary_t1; /* TODO Geometry value type */
    sint32 temporary_t0; /* TODO Geometry value type */
    sint32 temporary_s6; /* TODO Geometry value type */
    sint32 temporary_fp; /* TODO Geometry value type */
    int v4;
    int *v5;
    int v6;
    int *v7;
    uint32 *v8;
    int v9;
    int v14;
    uint32 v16 = 0x1F800000u;
    int v17;
    int v18;
    int v20;
    int v21;
    int v22;
    unsigned int v23;
    int v27;
    int v28;
    unsigned int v29;
    unsigned int v30;
    unsigned int v31;
    int v33;
    int v34;
    int v36;
    int v37;
    int v38;
    _DWORD *v41 = SF_DRAFT_PTR(_DWORD, r_u32(0x8011651Cu));
    int v42;
    int v43;
    int v44;
    uint32 *v45;

    (*SF_DRAFT_PTR(uint32, 0x1F8000BC)) = 528482496;
    (*SF_DRAFT_PTR(uint32, 0x1F8003F0)) = (*SF_DRAFT_PTR(uint32, 0x8011652Cu));
    (*SF_DRAFT_PTR(uint32, 0x1F8003F4)) = (*SF_DRAFT_PTR(uint32, 0x80116530u));
    v45 = SF_DRAFT_PTR(uint32, a4);
    v44 = a3;
    v4 = a2 >> 16;
    v43 = (uint16)a2;
    (*SF_DRAFT_PTR(uint32, 0x1F8003B0)) = (*SF_DRAFT_PTR(uint32, 0x8012DB98u));
    (*SF_DRAFT_PTR(uint32, 0x1F8003B4)) = (*SF_DRAFT_PTR(uint32, 0x8012DB9Cu));
    (*SF_DRAFT_PTR(uint32, 0x1F8003B8)) = (*SF_DRAFT_PTR(uint32, 0x8012DBA0u));
    (*SF_DRAFT_PTR(uint32, 0x1F8003BC)) = (*SF_DRAFT_PTR(uint32, 0x8012DBA4u));
    (*SF_DRAFT_PTR(uint32, 0x1F8003C0)) = (*SF_DRAFT_PTR(uint32, 0x8012DBA8u));
    (*SF_DRAFT_PTR(uint32, 0x1F8003D0)) = (*SF_DRAFT_PTR(uint32, 0x80130CD8u));
    (*SF_DRAFT_PTR(uint32, 0x1F8003D4)) = (*SF_DRAFT_PTR(uint32, 0x80130CDCu));
    (*SF_DRAFT_PTR(uint32, 0x1F8003D8)) = (*SF_DRAFT_PTR(uint32, 0x80130CE0u));
    (*SF_DRAFT_PTR(uint32, 0x1F8003DC)) = (*SF_DRAFT_PTR(uint32, 0x80130CE4u));
    (*SF_DRAFT_PTR(uint32, 0x1F8003E0)) = (*SF_DRAFT_PTR(uint32, 0x80130CE8u));
    (*SF_DRAFT_PTR(uint32, 0x1F8003E4)) = (*SF_DRAFT_PTR(uint32, 0x80130CECu));
    (*SF_DRAFT_PTR(uint32, 0x1F8003E8)) = (*SF_DRAFT_PTR(uint32, 0x80130CF0u));
    (*SF_DRAFT_PTR(uint32, 0x1F8003EC)) = (*SF_DRAFT_PTR(uint32, 0x80130CF4u));
    v42 = 620756991;
    v5 = native_a1 + 9;
    v6 = (*SF_DRAFT_PTR(uint32, 0x8012C8A0u));
    v7 = &native_a1[native_a1[2] + 9];
    v8 = SF_DRAFT_PTR(uint32, r_u32((uint32)a4 + 24u));
    v9 = native_a1[1];
    v45 = v8;
    while (1)
    {
        sub_800D2168(*v8);
        temporary_t5 = ((*SF_DRAFT_PTR(uint32, 0x1F8003F4)) << 16) | (*SF_DRAFT_PTR(uint32, 0x1F8003F4));
        temporary_t1 = *v41 | ((*SF_DRAFT_PTR(uint32, 0x1F8003F4)) << 16);
        /* Geometry operation uses the project SDK bridge */
        sf_draft_geometry_800D2424_stage1(temporary_t1);
        temporary_t2 = v41[1] | (*SF_DRAFT_PTR(uint32, 0x1F8003F4));
        /* Geometry operation uses the project SDK bridge */
        sf_draft_geometry_800D2424_stage2(temporary_t2, temporary_t5);
        temporary_t3 = v41[2] | ((*SF_DRAFT_PTR(uint32, 0x1F8003F4)) << 16);
        v41 += 3;
        /* Geometry operation uses the project SDK bridge */
        sf_draft_geometry_800D2424_stage3(temporary_t3, temporary_t5);
        v14 = v7[2];
        temporary_fp = sf_draft_guest_address(v7 + 17);
        v17 = v16;
        do
        {
            /* Geometry operation uses the project SDK bridge */
            sf_draft_geometry_800D2424_stage4(((uint32)temporary_fp + 0), ((uint32)temporary_fp + 4), ((uint32)temporary_fp + 8), ((uint32)temporary_fp + 0xC), ((uint32)temporary_fp + 0x10), ((uint32)temporary_fp + 0x14));
            --v14;
            temporary_fp += 24;
            /* Geometry operation uses the project SDK bridge */
            sf_draft_geometry_800D2424_stage5(((uint32)v17 + 0), ((uint32)v17 + 4), ((uint32)v17 + 8), ((uint32)v17 + 0xC), ((uint32)v17 + 0x10), ((uint32)v17 + 0x14));
            v17 += 24;
        } while (v14);
        --v9;
        v18 = *v7;
        if (!v9)
            break;
        v8 = ++v45;
        v7 = SF_DRAFT_PTR(int, ((char *)v7 + v18));
    }
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800D2424_stage6(sf_draft_guest_address(&v42), 0);
    temporary_t0 = 4095;
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800D2424_stage7(temporary_t0, temporary_t0);
    v20 = v7[1] - 1;
    v21 = v43;
    v22 = v44;
    do
    {
        v23 = v5[2];
        temporary_t3 = HIWORD(v23) + 528482304;
        temporary_t5 = HIWORD(v5[3]) + 528482304;
        temporary_t4 = (uint16)v5[3] + 528482304;
        /* Geometry operation uses the project SDK bridge */
        sf_draft_geometry_800D2424_stage8(((uint32)temporary_t3 + 0), ((uint32)temporary_t4 + 0));
        v27 = *SF_DRAFT_PTR(_DWORD, ((uint16)v5[3] + 0x1F800004));
        /* Geometry operation uses the project SDK bridge */
        sf_draft_geometry_800D2424_stage9(((uint32)temporary_t5 + 0));
        v28 = *SF_DRAFT_PTR(_DWORD, (HIWORD(v5[3]) + 0x1F800004));
        /* Geometry operation uses the project SDK bridge */
        sf_draft_geometry_800D2424_stage10();
        v29 = (unsigned int)(*SF_DRAFT_PTR(_DWORD, (HIWORD(v23) + 0x1F800004)) + v27 + v28) >> 2;
        if (v29)
        {
            v30 = (unsigned int)(*SF_DRAFT_PTR(_DWORD, (HIWORD(v23) + 0x1F800004)) + v27 + v28) >> 2;
            v31 = ((v29 - v21) & 0xFFFFFFFC) + v22;
            /* Geometry operation uses the project SDK bridge */
            sf_draft_geometry_800D2424_stage11(&temporary_t6);
            v33 = *v5;
            v34 = v5[1];
            if (temporary_t6 > 0)
            {
                if (temporary_t6 >= 65)
                    goto LABEL_16;
                /* Geometry operation uses the project SDK bridge */
                sf_draft_geometry_800D2424_stage12(&temporary_s6);
                v36 = (__int16)temporary_s6;
                if ((__int16)temporary_s6 <= 0)
                    v36 = -(__int16)temporary_s6;
                if (v36 < 195)
                {
                    v37 = temporary_s6 >> 16;
                    if (temporary_s6 >> 16 <= 0)
                        v37 = -v37;
                    if (v37 < 123)
                    {
                    LABEL_16:
                        v38 = *SF_DRAFT_PTR(_DWORD, v31) & 0xFFFFFF;
                        if ((v4 & 0x10) != 0)
                        {
                            if (v6 < (*SF_DRAFT_PTR(sint32, 0x1F8003F0)))
                            {
                                *SF_DRAFT_PTR(_DWORD, v6) = v38 | 0x4000000;
                                *SF_DRAFT_PTR(_DWORD, (v6 + 4)) = 536936264;
                                /* Geometry operation uses the project SDK bridge */
                                sf_draft_geometry_800D2424_stage13(((uint32)v6 + 8), ((uint32)v6 + 0xC), ((uint32)v6 + 0x10));
                                *SF_DRAFT_PTR(_DWORD, (v6 + 20)) = v30;
                                *SF_DRAFT_PTR(_DWORD, v31) = v6;
                                *SF_DRAFT_PTR(_BYTE, (v31 + 3)) = 0;
                                v6 += 24;
                            }
                        }
                        else
                        {
                            *SF_DRAFT_PTR(_DWORD, v6) = v38 | 0x7000000;
                            /* Geometry operation uses the project SDK bridge */
                            sf_draft_geometry_800D2424_stage14(((uint32)v6 + 4), ((uint32)v6 + 8));
                            *SF_DRAFT_PTR(_DWORD, (v6 + 12)) = v33;
                            /* Geometry operation uses the project SDK bridge */
                            sf_draft_geometry_800D2424_stage15(((uint32)v6 + 0x10));
                            *SF_DRAFT_PTR(_DWORD, (v6 + 20)) = v34;
                            /* Geometry operation uses the project SDK bridge */
                            sf_draft_geometry_800D2424_stage16(((uint32)v6 + 0x18));
                            *SF_DRAFT_PTR(_WORD, (v6 + 28)) = v23;
                            *SF_DRAFT_PTR(_DWORD, v31) = v6;
                            *SF_DRAFT_PTR(_BYTE, (v31 + 3)) = 0;
                            v6 += 32;
                        }
                    }
                }
            }
        }
        v5 += 4;
    } while (v20-- != 0);
    (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)) = v6;
    temporary_t3 = 0;
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800D2424_stage17(temporary_t3, temporary_t3, temporary_t3, temporary_t3, temporary_t3);
}

// FUNCTION_MARKER 0x8008294Cu 0x8008294c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_8008294C(unsigned __int8 a1)
{
    FUNCTION_MARKER(0x8008294Cu, "SCUS_942.40");
    int v1 = SF_DRAFT_GP;
    int v2;
    uint8 v4;
    int result;
    int *v6;
    int v7 = SF_DRAFT_GP;
    int v8 = SF_DRAFT_GP;
    int v9;
    int v10 = SF_DRAFT_GP;
    __int16 v11;
    char v12;
    int v13;
    int v14 = SF_DRAFT_GP;
    void (*v15)(int);
    int *v16;
    bool v17;
    int *v18;
    int v19;
    int v20;
    int v21 = SF_DRAFT_GP;
    unsigned int v22;
    __int16 v23;
    int v24;
    int v25;
    int *v26;
    int v27;
    char v28[8];

    v2 = (*SF_DRAFT_PTR(uint32, 0x80115C78u));
    v4 = 1;
    result = (*SF_DRAFT_PTR(uint16, 0x8012D97Au)) & 1;
    if (((*SF_DRAFT_PTR(uint16, 0x8012D97Au)) & 1) != 0)
        return result;
    if ((*SF_DRAFT_PTR(uint32, 0x80115C78u)) != *SF_DRAFT_PTR(_DWORD, (v1 + 1092)))
    {
        sub_800ED6FC(9, 0);
        if (!v2)
            sub_800828A4((*SF_DRAFT_PTR(uint32, 0x80116B3Cu)));
        *SF_DRAFT_PTR(_DWORD, (v1 + 1076)) = 0;
        *SF_DRAFT_PTR(_BYTE, (v1 + 1080)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v1 + 1092)) = (*SF_DRAFT_PTR(uint32, 0x80115C78u));
    }
    v6 = SF_DRAFT_PTR(int, r_u32((v1 + 1076)));
    if (v6)
    {
        result = *v6;
        if (!result)
        {
        LABEL_8:
            *SF_DRAFT_PTR(_DWORD, (v1 + 1076)) = 0;
            return result;
        }
    }
    if (!*SF_DRAFT_PTR(_BYTE, (v1 + 1080)) && (*SF_DRAFT_PTR(uint32, 0x80115E80u)) != 2)
    {
        *SF_DRAFT_PTR(_DWORD, (v1 + 1088)) = 0;
        while (1)
        {
            if (*SF_DRAFT_PTR(_DWORD, (v1 + 1076)))
            {
                result = sub_800F0520(1, (*SF_DRAFT_PTR(uint32, 0x80116AB8u)));
                v13 = *SF_DRAFT_PTR(_DWORD, r_u32((v1 + 1076)));
                if (!v13)
                    goto LABEL_8;
                if (result)
                {
                    if (result < 0)
                        goto LABEL_8;
                    result = v4;
                    if (!*SF_DRAFT_PTR(_BYTE, (v13 + 12)))
                        return result;
                    goto LABEL_55;
                }
                LOBYTE((*SF_DRAFT_PTR(uint32, 0x8010D024u))) = 0;
                sub_800ED6FC(9, 0);
                if (*SF_DRAFT_PTR(_DWORD, (v13 + 4)) != *SF_DRAFT_PTR(_DWORD, (v14 + 1084)))
                {
                    v16 = SF_DRAFT_PTR(int, 0x80116B3Cu);
                    *SF_DRAFT_PTR(_BYTE, (v13 + 12)) = 0;
                    v17 = (*SF_DRAFT_PTR(uint32, 0x80115C78u)) != 0;
                    *SF_DRAFT_PTR(_DWORD, (v13 + 28)) = -1;
                    if (!v17)
                        v16 = SF_DRAFT_PTR(uint32, 0x80116A08u);
                    result = sub_800DE6E0(sf_draft_guest_address(v16), r_u32(SF_DRAFT_GP + 1076u));
                    goto LABEL_8;
                }
                v15 = *(void (**)(int))(v13 + 16);
                if (v15)
                    v15(v13);
                v18 = SF_DRAFT_PTR(int, 0x80116B3Cu);
                if (!(*SF_DRAFT_PTR(uint32, 0x80115C78u)))
                    v18 = SF_DRAFT_PTR(uint32, 0x80116A08u);
                sub_800DE6E0(sf_draft_guest_address(v18), r_u32(SF_DRAFT_GP + 1076u));
                *SF_DRAFT_PTR(_DWORD, (v1 + 1076)) = 0;
                *SF_DRAFT_PTR(_DWORD, (v13 + 28)) = -1;
                *SF_DRAFT_PTR(_BYTE, (v13 + 12)) = 0;
                v19 = *SF_DRAFT_PTR(_DWORD, (v1 + 1076));
                if (v19)
                {
                    result = *SF_DRAFT_PTR(uint8, (*(_DWORD *)v19 + 12));
                    if (!result)
                        return result;
                }
            }
            if ((*SF_DRAFT_PTR(uint32, 0x80115C78u)))
            {
                result = a1;
                if (!*SF_DRAFT_PTR(_DWORD, (v1 + 3796)))
                    return result;
            }
            else
            {
                result = a1;
                if (!*SF_DRAFT_PTR(_DWORD, (v1 + 3488)))
                    return result;
            }
            if (result)
                return result;
            v20 = sub_800ED558(1, (*SF_DRAFT_PTR(uint32, 0x80116AB8u)));
            LOBYTE((*SF_DRAFT_PTR(uint32, 0x8010D024u))) = 0;
            if (!v20)
            {
                if (!*SF_DRAFT_PTR(_DWORD, (v21 + 1072)))
                {
                    v9 = sub_800E3F54(-1);
                    *SF_DRAFT_PTR(_DWORD, (v10 + 1072)) = v9 + 120;
                    result = *SF_DRAFT_PTR(_DWORD, (v10 + 1104));
                    v11 = *SF_DRAFT_PTR(_WORD, (v10 + 1108));
                    v12 = *SF_DRAFT_PTR(_BYTE, (v10 + 1110));
                    (*SF_DRAFT_PTR(uint32, 0x8010D024u)) = result;
                    (*SF_DRAFT_PTR(uint16, 0x8010D028u)) = v11;
                    (*SF_DRAFT_PTR(uint8, 0x8010D02Au)) = v12;
                    return result;
                }
                v22 = sub_800E3F54(-1);
                result = v22 < *SF_DRAFT_PTR(_DWORD, (v21 + 1072));
                v20 = 5;
                if (result)
                    return result;
            }
            if (v20 == 5)
            {
                v23 = *SF_DRAFT_PTR(_WORD, (v21 + 1116));
                (*SF_DRAFT_PTR(uint32, 0x8010D024u)) = *SF_DRAFT_PTR(_DWORD, (v21 + 1112));
                (*SF_DRAFT_PTR(uint16, 0x8010D028u)) = v23;
                sub_800ED6FC(9, 0);
            }
            v24 = *SF_DRAFT_PTR(_DWORD, (v21 + 1076));
            *SF_DRAFT_PTR(_DWORD, (v21 + 1072)) = 0;
            if (!v24)
            {
                v25 = (*SF_DRAFT_PTR(uint32, 0x80115C78u)) ? *SF_DRAFT_PTR(_DWORD, (v21 + 3796)) : *SF_DRAFT_PTR(_DWORD, (v21 + 3488));
                *SF_DRAFT_PTR(_DWORD, (v21 + 1076)) = v25;
                if (!v25)
                    sub_800DDC34(1, 0, 0x8001236Cu, 489);
            }
            v26 = SF_DRAFT_PTR(int, r_u32((v21 + 1076)));
            v27 = *v26;
            sub_800EDA20(*SF_DRAFT_PTR(_DWORD, (*v26 + 4)), sf_draft_guest_address(v28));
            sub_800ED5C0(2, sf_draft_guest_address(v28), 0);
            sub_800F0384(*SF_DRAFT_PTR(_DWORD, (v27 + 8)), *SF_DRAFT_PTR(_DWORD, v27), 128);
            *SF_DRAFT_PTR(_DWORD, (v1 + 1084)) = *SF_DRAFT_PTR(_DWORD, (v27 + 4));
            result = v4;
            if (!*SF_DRAFT_PTR(_BYTE, (v27 + 12)))
            {
                v4 = 0;
                result = 0;
            }
        LABEL_55:
            if (!result)
                return result;
        }
    }
    if ((*SF_DRAFT_PTR(uint32, 0x80115C78u)))
    {
        result = *SF_DRAFT_PTR(_DWORD, (v1 + 3796));
        if (!result)
            return result;
    }
    else
    {
        result = *SF_DRAFT_PTR(_DWORD, (v1 + 3488));
        if (!result)
            return result;
    }
    result = (uint8)(*SF_DRAFT_PTR(uint8, 0x80116944u));
    if (!(*SF_DRAFT_PTR(uint8, 0x80116944u)))
    {
        sub_800EC924(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8010D024u)), sf_draft_guest_address("WAIT %d"), (*SF_DRAFT_PTR(int, (v1 + 1088)) >> 3) + 1);
        result = *SF_DRAFT_PTR(_DWORD, (v7 + 1088)) + 1;
        *SF_DRAFT_PTR(_DWORD, (v7 + 1088)) = result;
        if (result == 61)
        {
            result = sub_8006C7CC();
            *SF_DRAFT_PTR(_DWORD, (v8 + 1088)) = 0;
        }
    }
    return result;
}

// FUNCTION_MARKER 0x8008AD30u 0x8008ad30
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_8008AD30(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8008AD30u, "SCUS_942.40");
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
    int v14;

    if (!(*SF_DRAFT_PTR(uint8, 0x8010D254u)))
    {
        (*SF_DRAFT_PTR(uint8, 0x8010D254u)) = 1;
        v4 = SF_DRAFT_PTR(int, r_u32((a1 + 12)));
        v5 = v4[1];
        v6 = v4[2];
        (*SF_DRAFT_PTR(uint32, 0x8010D258u)) = *v4;
        (*SF_DRAFT_PTR(uint32, 0x8010D25Cu)) = v5;
        (*SF_DRAFT_PTR(uint32, 0x8010D260u)) = v6;
        (*SF_DRAFT_PTR(uint32, 0x8010D264u)) = v4[3];
        (*SF_DRAFT_PTR(uint32, 0x8010D298u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 20));
        (*SF_DRAFT_PTR(uint32, 0x8010D29Cu)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 24));
        v7 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 28));
        (*SF_DRAFT_PTR(uint32, 0x8010D29Cu)) = (0u - (*SF_DRAFT_PTR(uint32, 0x8010D29Cu)));
        (*SF_DRAFT_PTR(uint32, 0x8010D2A0u)) = v7;
        (*SF_DRAFT_PTR(uint32, 0x8010D2A8u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 8)) + 20));
        (*SF_DRAFT_PTR(uint32, 0x8010D2ACu)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 8)) + 24));
        (*SF_DRAFT_PTR(uint32, 0x8010D2B0u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 8)) + 28));
        (*SF_DRAFT_PTR(uint32, 0x8010D2ACu)) = (0u - (*SF_DRAFT_PTR(uint32, 0x8010D2ACu)));
        (*SF_DRAFT_PTR(uint32, 0x8010D288u)) = (*SF_DRAFT_PTR(uint32, 0x8010D258u));
        (*SF_DRAFT_PTR(uint32, 0x8010D28Cu)) = v5;
        (*SF_DRAFT_PTR(uint32, 0x8010D290u)) = v6;
        (*SF_DRAFT_PTR(uint32, 0x8010D294u)) = (*SF_DRAFT_PTR(uint32, 0x8010D264u));
        (*SF_DRAFT_PTR(uint32, 0x8010D28Cu)) = sub_80088ACC(a1, 0);
        (*SF_DRAFT_PTR(uint32, 0x8010D268u)) = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 4));
        (*SF_DRAFT_PTR(uint32, 0x8010D26Cu)) = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 10));
        v8 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 16));
        (*SF_DRAFT_PTR(uint32, 0x8010D26Cu)) = (0u - (*SF_DRAFT_PTR(uint32, 0x8010D26Cu)));
        (*SF_DRAFT_PTR(uint32, 0x8010D270u)) = v8;
        v9 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 96)) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 112));
        (*SF_DRAFT_PTR(uint32, 0x8010D278u)) = v9;
        (*SF_DRAFT_PTR(uint32, 0x8010D27Cu)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 100)) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 116));
        (*SF_DRAFT_PTR(uint32, 0x8010D280u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 104)) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 120));
        v10 = v9 >> 12;
        if (v9 < 0)
            v10 = -(-v9 >> 12);
        (*SF_DRAFT_PTR(uint32, 0x8010D278u)) = v10;
        if ((sint32)(*SF_DRAFT_PTR(uint32, 0x8010D27Cu)) < 0)
            v11 = (sint32)(0u - (uint32)((sint32)(0u - (*SF_DRAFT_PTR(uint32, 0x8010D27Cu))) >> 12));
        else
            v11 = (sint32)(*SF_DRAFT_PTR(uint32, 0x8010D27Cu)) >> 12;
        (*SF_DRAFT_PTR(uint32, 0x8010D27Cu)) = v11;
        if ((sint32)(*SF_DRAFT_PTR(uint32, 0x8010D280u)) < 0)
            v12 = (sint32)(0u - (uint32)((sint32)(0u - (*SF_DRAFT_PTR(uint32, 0x8010D280u))) >> 12));
        else
            v12 = (sint32)(*SF_DRAFT_PTR(uint32, 0x8010D280u)) >> 12;
        (*SF_DRAFT_PTR(uint32, 0x8010D280u)) = v12;
        sub_80088FB4((int)(*SF_DRAFT_PTR(uint32, 0x8010D038u)));
        v13 = 0;
        LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D044u)[5]) = 0;
        LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D0B0u)[5]) = 0;
        LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D11Cu)[5]) = 0;
        LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D180u)[7]) = 0;
        LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D1E8u)[8]) = 0;
        SF_DRAFT_PTR(uint32, 0x8010D044u)[6] = 0;
        SF_DRAFT_PTR(uint32, 0x8010D0B0u)[6] = 0;
        SF_DRAFT_PTR(uint32, 0x8010D11Cu)[6] = 0;
        SF_DRAFT_PTR(uint32, 0x8010D180u)[8] = 0;
        SF_DRAFT_PTR(uint32, 0x8010D1E8u)[9] = 0;
        if ((*SF_DRAFT_PTR(uint32, 0x8010DDB8u)) > 0)
        {
            v14 = 160;
            do
            {
                sub_80089440(a1, (*SF_DRAFT_PTR(uint32, 0x8010D038u)), SF_DRAFT_PTR(uint32, 0x8010D038u)[v14]);
                ++v13;
                v14 += 22;
            } while (v13 < (*SF_DRAFT_PTR(sint32, 0x8010DDB8u)));
        }
    }
    switch (a2)
    {
        case 3:
            if (!LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D044u)[5]))
            {
                LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D044u)[5]) = 1;
                sub_8008A31C(a1, (*SF_DRAFT_PTR(uint32, 0x8010D038u)));
            }
            break;
        case 4:
            if (!LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D0B0u)[5]))
            {
                LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D0B0u)[5]) = 1;
                sub_8008A3B4();
            }
            break;
        case 5:
            if (!LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D11Cu)[5]))
            {
                LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D11Cu)[5]) = 1;
                sub_8008A3BC(a1, (*SF_DRAFT_PTR(uint32, 0x8010D038u)));
            }
            break;
        case 6:
            if (!LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D180u)[7]))
            {
                LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D180u)[7]) = 1;
                sub_8008A3DC(a1, (*SF_DRAFT_PTR(uint32, 0x8010D038u)));
            }
            break;
        case 7:
            if (!LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D1E8u)[8]))
            {
                LOBYTE(SF_DRAFT_PTR(uint32, 0x8010D1E8u)[8]) = 1;
                sub_8008A3FC(a1, (*SF_DRAFT_PTR(uint32, 0x8010D038u)));
            }
            break;
        default:
            return;
    }
}

// FUNCTION_MARKER 0x80061410u 0x80061410
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80061410(sint32 a1)
{
    FUNCTION_MARKER(0x80061410u, "SCUS_942.40");
    int v2;
    int v3;
    int v4;
    int v5;

    int v7 = SF_DRAFT_GP;
    int v8;
    int v9;
    int v10;
    unsigned int v11;
    int v12;
    char v13;
    int v14;
    int v15;
    int v16;
    int result;
    bool v18;
    int v19;
    int v20;
    char v21;
    int v22;

    v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
    v3 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
    v5 = *SF_DRAFT_PTR(__int16, (v2 + 6));
    if (v5 < 100)
        v5 = 100;
    sub_80057EF0(4, v3, 0, 64000 * *SF_DRAFT_PTR(__int16, (v2 + 8)) / v5 + 640);
    if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 24)) + 8)) > 0)
    {
        if ((unsigned int)(uint16)(*SF_DRAFT_PTR(uint16, 0x80130C88u)) - 13 < 2)
        {
            v8 = *SF_DRAFT_PTR(__int16, (v7 + 3236));
            if (v8 >= 0 && v8 < (*SF_DRAFT_PTR(sint32, 0x80116A5Cu)))
                sub_80057B14(*SF_DRAFT_PTR(__int16, (a1 + 2)), v8);
        }
        (*SF_DRAFT_PTR(uint32, 0x8011E660u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 20));
        (*SF_DRAFT_PTR(uint32, 0x8011E664u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 24));
        v9 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 28));
        (*SF_DRAFT_PTR(uint32, 0x8011E664u)) = (0u - (*SF_DRAFT_PTR(uint32, 0x8011E664u)));
        (*SF_DRAFT_PTR(uint32, 0x8011E668u)) = v9;
        sub_80059F4C(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, a1)));
        sub_80059FCC(a1, 2, 1, 0);
        if (!*SF_DRAFT_PTR(_BYTE, (v4 + 78)) && *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 24)) + 12)))
        {
            v10 = *SF_DRAFT_PTR(__int16, (a1 + 2));
            if (v10 != 666 && *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v10 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 92)
                sub_8008C464();
            v11 = *SF_DRAFT_PTR(uint8, (v4 + 71));
            if (v11 >= 0x29 && (*SF_DRAFT_PTR(_DWORD, (v4 + 32)) & 2) == 0)
                *SF_DRAFT_PTR(_BYTE, (v4 + 71)) = v11 - 20;
        }
        if (!(uint8)sub_8006C180())
        {
            if (*SF_DRAFT_PTR(_BYTE, (v4 + 82)) == 9)
            {
                sub_80056740(a1, 4);
            }
            else if ((*SF_DRAFT_PTR(_DWORD, (v4 + 80)) & 0xFF00FF) == 0x20000 && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 24)) + 4)) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) && (*SF_DRAFT_PTR(_DWORD, r_u32(((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 16))) & 2) != 0)
            {
                v13 = ((int (*)(void))0x800EC8F4u)();
                v14 = 338;
                if ((v13 & 1) == 0)
                    v14 = 326;
                sub_8006C620(v14 + (*SF_DRAFT_PTR(_WORD, (a1 + 2)) & 3), a1, 0);
                *SF_DRAFT_PTR(_BYTE, (v4 + 80)) = -1;
            }
        }
        if (*SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 82)) < 3u || (v12 = a1, (unsigned int)*SF_DRAFT_PTR(uint8, (v4 + 82)) - 10 < 2))
        {
            v16 = sub_800EC8F4();
            return sub_8006BC98(2, v16 % 5 + 37, a1, 0);
        }
        v15 = 0;
        return sub_80056740(v12, v15);
    }
    v18 = (uint8)sub_8006C180() == 0;
    result = 3;
    if (v18)
    {
        v19 = *SF_DRAFT_PTR(uint8, (v4 + 82));
        if (v19 == 3)
            return result;
        v20 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 24)) + 14));
        result = 89;
        if (v20 != 18)
        {
            v12 = a1;
            if (v20 == 89)
                return result;
            v15 = 1;
            return sub_80056740(v12, v15);
        }
        result = 9;
        if (v19 != 9)
        {
            v21 = ((int (*)(void))0x800EC8F4u)();
            v22 = 150;
            if ((v21 & 3) != 0)
                v22 = 151;
            return sub_8006C620(v22, a1, 0);
        }
    }
    else if ((*SF_DRAFT_PTR(_DWORD, (v4 + 32)) & 2) != 0 && *SF_DRAFT_PTR(_BYTE, (v4 + 82)) == 12)
    {
        return sub_8006C7CC();
    }
    else
    {
        return sub_8006C328(*SF_DRAFT_PTR(uint8, (v4 + 82)));
    }
    return result;
}

// FUNCTION_MARKER 0x8001FCC4u 0x8001fcc4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001FCC4(void)
{
    FUNCTION_MARKER(0x8001FCC4u, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;
    int v1;
    int v2 = SF_DRAFT_GP;
    int v3;
    int v4 = SF_DRAFT_GP;
    int v5;
    int v6;
    int i;
    int v8;
    int v9;
    int v10;
    int v11 = SF_DRAFT_GP;
    int v12;
    int v13;
    sint32 camera_position[4];
    int v19[4];

    camera_position[0] = r_u32(0x80010220u);
    camera_position[1] = r_u32(0x80010224u);
    camera_position[2] = r_u32(0x80010228u);
    camera_position[3] = r_u32(0x8001022Cu);
    v19[0] = SF_DRAFT_PTR(uint32, 0x80010224u)[3];
    v19[1] = SF_DRAFT_PTR(uint32, 0x80010234u)[0];
    v19[2] = SF_DRAFT_PTR(uint32, 0x80010234u)[1];
    v19[3] = SF_DRAFT_PTR(uint32, 0x80010234u)[2];
    *SF_DRAFT_PTR(_DWORD, (v0 + 3448)) = 0;
    v3 = sub_800EA474(413);
    v1 = sub_800EA3A4(413);
    if (!v1)
        _break(7u, 0);
    if (v1 == -1 && (uint32)v3 * 192u == 0x80000000u)
        _break(6u, 0);
    sub_80018014(r_u32(v2 + 284), 0, sf_draft_guest_address(camera_position), sf_draft_guest_address(v19), (sint32)((uint32)v3 * 192u) / v1, (sint32)0x80115D88u, 0, 2400, (sint32)0x80103B78u, 0x80103C80u, 0, 0);
    sub_800EC8E4(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x80119194u)), 0, 600);
    (*SF_DRAFT_PTR(uint32, 0x801191A4u)) = (*SF_DRAFT_PTR(uint32, 0x8010E1ECu));
    (*SF_DRAFT_PTR(uint32, 0x801191A8u)) = (*SF_DRAFT_PTR(uint32, 0x8010E1F0u));
    (*SF_DRAFT_PTR(uint32, 0x801191ACu)) = (*SF_DRAFT_PTR(uint32, 0x8010E1F4u));
    (*SF_DRAFT_PTR(uint32, 0x801191B0u)) = (*SF_DRAFT_PTR(uint32, 0x8010E1F8u));
    (*SF_DRAFT_PTR(uint32, 0x801191B4u)) = (*SF_DRAFT_PTR(uint32, 0x8010E1FCu));
    (*SF_DRAFT_PTR(uint32, 0x801191B8u)) = (*SF_DRAFT_PTR(uint32, 0x8010E200u));
    (*SF_DRAFT_PTR(uint32, 0x801191BCu)) = (*SF_DRAFT_PTR(uint32, 0x8010E204u));
    (*SF_DRAFT_PTR(uint32, 0x801191C0u)) = (*SF_DRAFT_PTR(uint32, 0x8010E208u));
    (*SF_DRAFT_PTR(uint32, 0x801191C4u)) = 0;
    (*SF_DRAFT_PTR(uint32, 0x801191C8u)) = (*SF_DRAFT_PTR(uint32, 0x8010E1ECu));
    (*SF_DRAFT_PTR(uint32, 0x801191CCu)) = (*SF_DRAFT_PTR(uint32, 0x8010E1F0u));
    (*SF_DRAFT_PTR(uint32, 0x801191D0u)) = (*SF_DRAFT_PTR(uint32, 0x8010E1F4u));
    (*SF_DRAFT_PTR(uint32, 0x801191D4u)) = (*SF_DRAFT_PTR(uint32, 0x8010E1F8u));
    (*SF_DRAFT_PTR(uint32, 0x801191D8u)) = (*SF_DRAFT_PTR(uint32, 0x8010E1FCu));
    (*SF_DRAFT_PTR(uint32, 0x801191DCu)) = (*SF_DRAFT_PTR(uint32, 0x8010E200u));
    (*SF_DRAFT_PTR(uint32, 0x801191E0u)) = (*SF_DRAFT_PTR(uint32, 0x8010E204u));
    (*SF_DRAFT_PTR(uint32, 0x801191E4u)) = (*SF_DRAFT_PTR(uint32, 0x8010E208u));
    v5 = 0;
    v6 = 0;
    (*SF_DRAFT_PTR(uint32, 0x801191ECu)) = -1;
    (*SF_DRAFT_PTR(uint32, 0x801191FCu)) = 5;
    (*SF_DRAFT_PTR(uint32, 0x80119204u)) = 0x80102F48u;
    (*SF_DRAFT_PTR(uint32, 0x80119208u)) = 0x801037D0u;
    (*SF_DRAFT_PTR(uint32, 0x8011920Cu)) = 0x80103ADCu;
    (*SF_DRAFT_PTR(uint32, 0x80119210u)) = 0x80103B10u;
    (*SF_DRAFT_PTR(uint32, 0x80119214u)) = 0x80103B44u;
    (*SF_DRAFT_PTR(uint32, 0x801191E8u)) = 0;
    (*SF_DRAFT_PTR(uint32, 0x801191F0u)) = 0;
    (*SF_DRAFT_PTR(uint32, 0x801191F4u)) = 0;
    (*SF_DRAFT_PTR(uint32, 0x801191F8u)) = 0;
    (*SF_DRAFT_PTR(uint32, 0x80119200u)) = 0;
    (*SF_DRAFT_PTR(uint8, 0x80119218u)) = 1;
    (*SF_DRAFT_PTR(uint8, 0x80119219u)) = 0;
    (*SF_DRAFT_PTR(uint8, 0x8011921Au)) = 1;
    do
    {
        *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 4)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 8)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 12)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 16)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 20)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 24)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 28)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 32)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 40)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 44)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 48)) = 0;
        ++v5;
        *SF_DRAFT_PTR(_BYTE, (v6 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 56)) = 0;
        v6 += 60;
    } while (v5 < 13);
    (*SF_DRAFT_PTR(uint32, 0x8011922Cu)) = 0;
    for (i = 272; i >= 0; i -= 68)
        SF_DRAFT_PTR(uint8, 0x8011923Cu)[i] = 0;
    v8 = 15;
    (*SF_DRAFT_PTR(uint32, 0x80119238u)) = 0;
    (*SF_DRAFT_PTR(uint8, 0x80119390u)) = 1;
    (*SF_DRAFT_PTR(uint8, 0x80119391u)) = 1;
    (*SF_DRAFT_PTR(uint8, 0x80119392u)) = 1;
    (*SF_DRAFT_PTR(uint32, 0x80119394u)) = 0;
    do
    {
        SF_DRAFT_PTR(uint32, 0x8011939Cu)[v8] = -1;
        v8 -= 5;
    } while (v8 >= 0);
    v9 = *SF_DRAFT_PTR(_DWORD, (v4 + 284));
    (*SF_DRAFT_PTR(uint32, 0x80119398u)) = 0;
    *SF_DRAFT_PTR(_BYTE, (v9 + 3392)) = 1;
    v10 = *SF_DRAFT_PTR(_DWORD, (v4 + 284));
    *SF_DRAFT_PTR(_DWORD, (v9 + 3356)) = 215;
    sub_80018994(v10, 1, 8, 2);
    v12 = *SF_DRAFT_PTR(_DWORD, (v11 + 284));
    *SF_DRAFT_PTR(_BYTE, (v12 + 3392)) = 1;
    v13 = *SF_DRAFT_PTR(_DWORD, (v11 + 284));
    *SF_DRAFT_PTR(_DWORD, (v12 + 3356)) = 827;
    return sub_80018994(v13, 1, 8, 3);
}

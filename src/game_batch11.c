#include "game_draft.h"
sint32 sub_80034C00(void);
sint32 sub_800346D0(sint32 a1);

BOOL sub_8003D100(void)
{
    sint32 position_output[3];
    uint32 matrix_output[8];
    FUNCTION_MARKER(0x8003D100u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint16 v1;
    __int16 v2;
    int v3;
    int *v4;
    _DWORD *v5 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
    int v6;
    int *v7;
    int *v8;
    signed int v9;
    unsigned int v10;
    char v11;
    int v12;
    _DWORD *v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int *v26;
    int v43[8];
    int v44;
    int v45[3];
    int v46;
    int v47;
    int v48;
    int v49;
    int v50;
    __int16 v51;
    _BYTE v52[6];
    int v53;
    __int16 v54;
    int v55;
    __int16 v56;
    int v57;
    __int16 v58;
    v1 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2576));
    v56 = 0;
    v55 = v1;
    v50 = v1;
    v51 = 0;
    v2 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2580));
    v57 = 0;
    v58 = v2;
    *(_DWORD *)v52 = 0;
    *(_WORD *)(&v52[4]) = v2;
    v53 = (*SF_DRAFT_PTR(uint32, 0x80115F68u));
    v54 = (*SF_DRAFT_PTR(uint16, 0x80115F6Cu));
    v44 = v55;
    v45[0] = 0;
    v45[1] = *(_DWORD *)(&v52[2]);
    v45[2] = (*SF_DRAFT_PTR(uint32, 0x80115F68u));
    LOWORD(v46) = (*SF_DRAFT_PTR(uint16, 0x80115F6Cu));
    v47 = (*SF_DRAFT_PTR(uint32, 0x80011CB8u));
    v48 = (*SF_DRAFT_PTR(uint32, 0x80011CBCu));
    v49 = (*SF_DRAFT_PTR(uint32, 0x80011CC0u));
    v43[0] = v55;
    v43[1] = 0;
    v43[2] = *(_DWORD *)(&v52[2]);
    v43[3] = (*SF_DRAFT_PTR(uint32, 0x80115F68u));
    v43[4] = v46;
    v43[5] = (*SF_DRAFT_PTR(uint32, 0x80011CB8u));
    v43[6] = (*SF_DRAFT_PTR(uint32, 0x80011CBCu));
    v43[7] = (*SF_DRAFT_PTR(uint32, 0x80011CC0u));
    ((sint16 *)matrix_output)[0] = *SF_DRAFT_PTR(_WORD, *SF_DRAFT_PTR(uint32, *SF_DRAFT_PTR(uint32, 0x80115D84u)));
    ((sint16 *)matrix_output)[1] = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2));
    ((sint16 *)matrix_output)[2] = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 4));
    ((sint16 *)matrix_output)[3] = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 6));
    ((sint16 *)matrix_output)[4] = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 8));
    ((sint16 *)matrix_output)[5] = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 10));
    ((sint16 *)matrix_output)[6] = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 12));
    ((sint16 *)matrix_output)[7] = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 14));
    ((sint16 *)matrix_output)[8] = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 16));
    matrix_output[5] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 20));
    v3 = 0;
    matrix_output[6] = (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 24))));
    v4 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011B904u)));
    matrix_output[7] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 28));
    ((sint16 *)matrix_output)[7] = 0;
    ((sint16 *)matrix_output)[5] = 0;
    ((sint16 *)matrix_output)[3] = 0;
    ((sint16 *)matrix_output)[1] = 0;
    ((sint16 *)matrix_output)[4] = 4096;
    sub_800EA514(sf_draft_guest_address(&((sint16 *)matrix_output)[0]), sf_draft_guest_address(&((sint16 *)matrix_output)[0]));
    sub_800EBBC4(sf_draft_guest_address(&((sint16 *)matrix_output)[0]), sf_draft_guest_address(&((sint16 *)matrix_output)[0]));
    sub_8003E2D4(sf_draft_guest_address(&((sint16 *)matrix_output)[0]));
    sub_800EACE4(sf_draft_guest_address(v43), sf_draft_guest_address(&((sint16 *)matrix_output)[0]), sf_draft_guest_address(&((sint16 *)matrix_output)[0]));
    do
    {
        v6 = SF_DRAFT_PTR(uint16, 0x8011BA00u)[v3];
        if (v6 == -1)
        {
            if (*v4)
            {
                if (v4[3] == 676343848)
                {
                    sub_800C7BF8(v5[844], sf_draft_guest_address(v4));
                    ++v3;
                    goto LABEL_42;
                }
                v7 = v45;
                v8 = &v44;
                v44 = v4[3];
                v45[0] = 5255208;
                do
                {
                    v9 = *(uint8 *)v7;
                    v10 = *(uint8 *)v8;
                    if ((uint32)v9 >= v10)
                    {
                        v12 = v10 + 10;
                        if (v12 < v9)
                            LOBYTE(v9) = v12;
                        *(_BYTE *)v7 = v9;
                    }
                    else
                    {
                        if (v9 < (int)(v10 - 10))
                            v11 = *(_BYTE *)v8 - 10;
                        else
                            v11 = *(_BYTE *)v7;
                        *(_BYTE *)v7 = v11;
                    }
                    v7 = SF_DRAFT_PTR(int, ((char *)v7 + 1));
                    v8 = SF_DRAFT_PTR(int, ((char *)v8 + 1));
                } while ((int)v7 < (int)v45 + 3);
                v4[3] = v45[0] | 0x28000000;
            }
        }
        else
        {
            v13 = SF_DRAFT_PTR(_DWORD, (76 * v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
            v14 = v13[13];
            v15 = 666;
            if (v6 != 666)
                v15 = *SF_DRAFT_PTR(__int16, (20 * *v13 + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
            if ((v15 != 53 || (*SF_DRAFT_PTR(uint8, 0x80116976u))) && v15 != 76 && v15 != 92 && (v15 != 101 || (v16 = 76 * *SF_DRAFT_PTR(__int16, (v14 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)), *SF_DRAFT_PTR(_BYTE, (v16 + 36))) || (v17 = *SF_DRAFT_PTR(_DWORD, (v16 + 36)) & 0x3000, v17 == 4096) || v17 == 0x2000))
            {
                v18 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 20)) + 212)) & 0xFFFF3FFF;
                if ((unsigned int)v18 >= 0x1001)
                    v18 = (v18 >= 4097) << 12;
                if (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v14 + 28)) + 82)) == 9 && v18 < 2744)
                    v18 = 2744;
                if (*SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (v14 + 20))) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
                    v18 = 0;
            }
            else
            {
                v18 = -1;
            }
            position_output[0] = *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v14 + 12))) - *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 12)));
            position_output[1] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 4)) - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 12)) + 4));
            position_output[2] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 8)) - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 12)) + 8));
            sub_800EADF4(sf_draft_guest_address(&((sint16 *)matrix_output)[0]), sf_draft_guest_address(&position_output[0]), sf_draft_guest_address(&position_output[0]));
            sub_8003C0B0(v3, sf_draft_guest_address(position_output));
            if (v15 == 53 || v15 == 101)
            {
                sub_8003BE84(v3, -1);
                SF_DRAFT_PTR(uint32, 0x8011BB2Cu)[v3] = v18;
            }
            else
            {
                sub_8003BE84(v3, v18);
            }
            v20 = sub_800C6D4C(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2596)), 4096 - v18);
            v21 = *v4;
            v5[649] = v20;
            if (!v21)
            {
                sub_800C7BB0(v5[844], sf_draft_guest_address(v4));
                v22 = v4[4];
                v4[3] = 687865855;
                v45[0] = -65538;
                LOWORD(v44) = v22 - 2;
                HIWORD(v44) = HIWORD(v22) - 2;
                v23 = v4[5];
                v45[0] = -131070;
                v4[4] = v44;
                LOWORD(v44) = v23 + LOWORD(v45[0]);
                HIWORD(v44) = HIWORD(v23) + HIWORD(v45[0]);
                v24 = v4[6];
                v45[0] = 196606;
                v4[5] = v44;
                LOWORD(v44) = v24 + LOWORD(v45[0]);
                HIWORD(v44) = HIWORD(v24) + HIWORD(v45[0]);
                v4[6] = v44;
                v25 = v4[7];
                v45[0] = 131074;
                LOWORD(v44) = v25 + 2;
                HIWORD(v44) = HIWORD(v25) + 2;
                v4[7] = v44;
            }
        }
        ++v3;
    LABEL_42:
        v4 += 9;
    } while (v3 < 6);
    if ((*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) && *SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 20))) >= 0)
    {
        if (!(*SF_DRAFT_PTR(uint32, 0x8011B9DCu)))
            sub_800C7BB0(v5[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011B9DCu))));
    }
    else if ((*SF_DRAFT_PTR(uint32, 0x8011B9DCu)))
    {
        sub_800C7BF8(v5[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011B9DCu))));
    }
    if (v5[173])
    {
        if ((*SF_DRAFT_PTR(uint32, 0x80130D28u)) || (*SF_DRAFT_PTR(uint32, 0x80130D2Cu)) || (*SF_DRAFT_PTR(uint32, 0x80130D30u)))
        {
            position_output[0] = (*SF_DRAFT_PTR(uint32, 0x80130D28u)) - *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 12)));
            position_output[1] = (*SF_DRAFT_PTR(uint32, 0x80130D2Cu)) - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 12)) + 4));
            position_output[2] = (*SF_DRAFT_PTR(uint32, 0x80130D30u)) - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 12)) + 8));
            sub_800EADF4(sf_draft_guest_address(&((sint16 *)matrix_output)[0]), sf_draft_guest_address(&position_output[0]), sf_draft_guest_address(&position_output[0]));
            v26 = &position_output[0];
        }
        else
        {
            v26 = 0;
        }
        sub_8003CED0(sf_draft_guest_address(v26));
    }
    return sub_8003BD80();
}

sint32 sub_80034C30(sint32 entity_index)
{
    FUNCTION_MARKER(0x80034C30u, "SCUS_942.40");
    uint32 result = r_u32(0x80115CCCu) + 76u * (uint32)entity_index;
    uint32 actor = r_u32(result + 52u);
    uint32 pad, record, cursor, index, offset, count, delay, old;
    uint16 buttons, previous, timer;
    sint32 value, group;
    if (!r_u8(0x8010BB3Cu))
        return (sint32)result;
    result = r_u32(0x801169A4u) < 4u;
    if (result || !actor)
        return (sint32)result;
    sub_800D84E8(&pad, 0u);
    if (r_u8(0x80116AF0u))
    {
        result = r_u32(0x801169C4u);
        if (!result)
            return 0;
        if (r_u32(0x80115EB4u) == 0xFFFFFFFFu)
        {
            w_u32(0x80115EB4u, 0u);
            sub_800EC904(1);
            sub_80016F90(2);
            sub_80016F90(0);
        }
        cursor = r_u32(0x80115EB4u);
        record = r_u32(0x801169C4u) + 6u * cursor;
        if (r_s16(record + 4u) == -1 || r_u16(pad + 4u) || r_s16(r_u32(r_u32(0x80116B9Cu) + 24u) + 6u) < 6)
        {
            w_u32(0x80115EB4u, 0xFFFFFFFFu);
            w_u8(0x80116AF0u, 0u);
            w_u32(0x801169C4u, 0u);
            sub_8003B030();
            sub_80084698(0);
            return sub_80015CF0(0, 7, 0x80034C00u);
        }
        w_u16(pad + 4u, r_u16(record + 4u));
        w_u32(pad + 12u, (uint32)r_s8(record));
        value = r_s8(record + 1u);
        w_u32(0x80115EB4u, cursor + 1u);
        w_u32(pad + 16u, (uint32)value);
        value = r_s8(record + 2u);
        w_u8(pad + 2u, 0u);
        w_u32(pad + 20u, (uint32)value);
    }
    buttons = r_u16(pad + 4u);
    if (r_u32(0x80115C78u) == 3u)
    {
        timer = r_u16(0x80115EDCu);
        result = timer < 41u;
        w_u16(0x80115EDCu, (uint16)(timer + 1u));
        if (!result)
        {
            if ((buttons & 0x40u) || (result = 2048u, buttons == 2048u))
            {
                w_u16(0x80115EDCu, 0);
                return (sint32)sub_8001629C();
            }
        }
        return (sint32)result;
    }
    if (r_u8(0x80116944u))
    {
        timer = r_u16(0x80115EDCu);
        result = timer < 41u;
        w_u16(0x80115EDCu, (uint16)(timer + 1u));
        if (!result)
        {
            previous = r_u16(0x8010BB4Eu);
            result = previous < buttons;
            if (previous != buttons)
            {
                if (previous < buttons && (buttons & 0x40u))
                {
                    w_u16(0x80115EDCu, 0);
                    return sub_80027D3C();
                }
                result = buttons < r_u16(0x8010BB4Eu);
                if (result)
                    w_u16(0x8010BB4Eu, buttons);
            }
        }
        return (sint32)result;
    }
    if (r_u32(0x8010BB40u) == 5u && sub_8001C950() == 11 && !r_u8(0x80116944u))
    {
        timer = r_u16(0x80115EDCu);
        w_u16(0x80115EDCu, (uint16)(timer + 1u));
        if (timer >= 41u && buttons && buttons != r_u16(0x8010BB4Eu))
        {
            if (r_u16(0x8010BB4Eu) < buttons && (buttons & 0x40u))
            {
                group = r_s16((uint32)sub_80020714() + 2u);
                sub_80015364(0x13u, 4u, group, group, 0, 0, 0, 0);
                w_u16(0x80115EDCu, 0);
            }
            else if (buttons < r_u16(0x8010BB4Eu))
                w_u16(0x8010BB4Eu, buttons);
        }
    }
    sub_80038AB4(0x8010BB3Cu, pad);
    result = 5u;
    if (r_u32(0x8010BB40u) == 5u)
        return (sint32)result;
    result = r_u8(0x8010BB4Cu);
    if (result)
        return (sint32)result;
    offset = 0;
    for (index = 0; index < 16u; ++index, offset += 24u)
    {
        record = r_u32(0x8010BB48u) + offset;
        if (buttons & (1u << index))
        {
            if (r_u8(record + 8u) && (r_u16(0x8010BB4Eu) & (1u << index)) && r_u32(record + 12u) < r_u32(record + 16u))
                continue;
            delay = r_u32(record + 12u);
            count = r_u32(record + 16u);
            if (delay && count < delay)
            {
                if (count != 666u)
                    w_u32(record + 16u, count + 1u);
            }
            else if (!delay || count != 666u)
            {
                value = r_s16(record + 20u);
                old = r_u32(record);
                w_u32(record + 16u, 666u);
                if (value < 0)
                    value = -value;
                w_u16(record + 20u, (uint16)(0u - (uint32)value));
                sub_80028F3C(r_s16(actor + 2u), old);
            }
        }
        else if (r_u16(0x8010BB4Eu) & (1u << index))
        {
            delay = r_u32(record + 12u);
            if (!delay || r_u32(record + 16u) >= delay)
            {
                value = r_s16(record + 20u);
                if (value)
                {
                    if (value < 0)
                        value = -value;
                    w_u16(record + 20u, (uint16)value);
                    sub_800C8A9C(0x800346D0u, (sint16)value, r_u32(0x8010BB48u) + offset);
                }
                else
                    sub_80028F3C(r_s16(actor + 2u), r_u32(record + 4u));
            }
            w_u32(record + 16u, 0u);
        }
    }
    result = r_u32(0x8010BB40u);
    if (result == 6u)
    {
        sub_80039410(0x8010BB3Cu);
        result = r_u32(0x8010BB40u);
    }
    if (result != 5u)
    {
        if (((buttons & 0x800u) && !(r_u16(0x8010BB4Eu) & 0x800u) && !r_u32(0x80115E80u)) || (r_u8(pad) == 255u && r_u32(0x80115C78u) != 3u))
        {
            if (!r_u8(0x80116AF0u) && !r_u8(0x8010BB4Du) && r_u32(0x80116A88u) >= 11u)
            {
                w_u16(0x8010BB4Eu, r_u16(0x8010BB4Eu) | 0x800u);
                sub_80016020(7u);
                goto publish_mode;
            }
        }
        w_u16(0x8010BB4Eu, buttons);
    }
publish_mode:
    result = r_u32(0x8010BB40u);
    w_u32(0x8010BB44u, result);
    return (sint32)result;
}

sint32 sub_800630C0(sint32 a1, sint32 a2)
{
    sint32 hit_flags;
    FUNCTION_MARKER(0x800630C0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int result;
    _DWORD *v13;
    int v14;
    int v15;
    char v16;
    char v17;
    int v18;
    char v19;
    int v20;
    int v21;
    bool v22; // dc
    int v23;
    int v24;
    unsigned int v25;
    char v26;
    int v27;
    int v28;
    int v30;
    char v32;
    int v33;
    int *v34;
    int v35;
    int v36;
    int v37;
    int v38;
    int v39;
    int v40;
    int v41;
    int v42;
    sint32 v43;
    int v44;
    int v45;
    int v46;
    int v47;
    int v48;
    unsigned int v49;
    int v50;
    int v51;
    int v52;
    int v53;
    int v54;
    int v55;
    int v56;
    __int16 v57;
    int v58;
    int v59;
    int v60[6];
    v4 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    v5 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
    v6 = -1;
    if (v4 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v8 = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
    }
    else
    {
        v7 = 76 * v4 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        v8 = *SF_DRAFT_PTR(uint8, (v7 + 36));
        if (!*SF_DRAFT_PTR(_BYTE, (v7 + 36)))
        {
            v9 = *SF_DRAFT_PTR(_DWORD, (v7 + 36)) & 0x3000;
            if (v9 == 4096)
                v8 = 19;
            else
                v8 = v9 == 0x2000 ? 0x14 : 0;
        }
    }
    v10 = *SF_DRAFT_PTR(_DWORD, (a1 + 20));
    if (*SF_DRAFT_PTR(__int16, (v10 + 88)) > 0 || (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 0x10000000) != 0 || (v11 = *SF_DRAFT_PTR(_DWORD, (v10 + 164)), (result = (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - v11) < 0x28) != 0))
    {
        result = *SF_DRAFT_PTR(uint8, (v5 + 76));
        if (!*SF_DRAFT_PTR(_BYTE, (v5 + 76)))
        {
            if (!(*SF_DRAFT_PTR(uint8, 0x80116B32u)) && (result = 32 * v8, !(*SF_DRAFT_PTR(uint8, 0x80116944u))) || (result = 32 * v8, *SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a1 + 20))) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u))))
            {
                result = sub_80016AE0(*SF_DRAFT_PTR(_DWORD, (v5 + 36)), ((*SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C398u))) + result)) >> 26) & 0x1F));
                if (result)
                {
                    v13 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 16)));
                    if ((*v13 & 0x100) == 0 && v13)
                    {
                        sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), 43);
                        result = 10;
                        *SF_DRAFT_PTR(_BYTE, (v5 + 76)) = 10;
                        return result;
                    }
                    v14 = *SF_DRAFT_PTR(_DWORD, (a1 + 20));
                    *SF_DRAFT_PTR(_DWORD, (v5 + 36)) = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
                    sub_80057EF0(0, (*SF_DRAFT_PTR(__int16, (a1 + 2))), 0, 32000);
                    if ((*SF_DRAFT_PTR(_DWORD, (v14 + 4)) & 8) == 0)
                    {
                        v15 = a1;
                        if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 24)) + 8)) > 0)
                            sub_8005AD04(a1, 1);
                    }
                    v16 = *SF_DRAFT_PTR(_BYTE, (v5 + 65)) - 1;
                    *SF_DRAFT_PTR(_BYTE, (v5 + 65)) = v16;
                    if (!v16)
                    {
                        v17 = sub_800EC8F4();
                        v18 = *SF_DRAFT_PTR(__int16, (a1 + 2));
                        v19 = v17;
                        if (v18 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
                        {
                            v23 = 32 * (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
                        }
                        else
                        {
                            v20 = 76 * v18 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                            v21 = *SF_DRAFT_PTR(uint8, (v20 + 36));
                            v22 = v21 != 0;
                            v23 = 32 * v21;
                            if (!v22)
                            {
                                v24 = *SF_DRAFT_PTR(_DWORD, (v20 + 36)) & 0x3000;
                                if (v24 == 4096)
                                    v23 = 608;
                                else
                                    v23 = v24 == 0x2000 ? 0x280 : 0;
                            }
                        }
                        v25 = *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C398u))) + v23));
                        v26 = SF_DRAFT_PTR(uint8, 0x8010C8C4u)[(*SF_DRAFT_PTR(uint16, 0x80130C88u))];
                        *SF_DRAFT_PTR(_DWORD, (v5 + 32)) &= ~0x10000000u;
                        *SF_DRAFT_PTR(_BYTE, (v5 + 76)) = ((v25 >> 26) & 0x1F) + (((v19 & 0x1F) + 20) >> v26);
                    }
                    sub_80046584(a1);
                    if ((unsigned int)(v8 - 19) >= 2)
                        sub_80046550(*SF_DRAFT_PTR(_WORD, (a1 + 2)), v8);
                    v27 = a1;
                    if (*SF_DRAFT_PTR(_BYTE, (v5 + 78)))
                    {
                        v28 = *SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a1 + 20)));
                        if (v28 >= 0)
                        {
                            sub_800E0364(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E660u))), *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * v28 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 12)), sf_draft_guest_address(v60));
                            v27 = a1;
                            if (v60[0] >= 321)
                            {
                                v6 = *SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a1 + 20)));
                                *SF_DRAFT_PTR(_WORD, v14) = -1;
                            }
                        }
                    }
                    v30 = sub_8003352C(v27, 0);
                    if ((*SF_DRAFT_PTR(_DWORD, (v5 + 32)) & 0x4000000) == 0 && *SF_DRAFT_PTR(_BYTE, (v5 + 82)) == 5 && (sub_800EC8F4() & 1) == 0)
                    {
                        v32 = sub_800EC8F4();
                        v33 = 267;
                        if ((v32 & 1) == 0)
                            v33 = 259;
                        sub_8006C620(v33, a1, 0);
                    }
                    *SF_DRAFT_PTR(_DWORD, (v5 + 32)) |= 0x4000000u;
                    sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), 21);
                    v34 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (a1 + 12)));
                    v35 = v34[1];
                    v36 = v34[2];
                    v37 = v34[3];
                    v60[2] = *v34;
                    v60[3] = v35;
                    v60[4] = v36;
                    v60[5] = v37;
                    v38 = 76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                    v39 = *SF_DRAFT_PTR(uint8, (v38 + 36));
                    v22 = v39 != 0;
                    v40 = 32 * v39;
                    if (!v22)
                    {
                        v41 = *SF_DRAFT_PTR(_DWORD, (v38 + 36)) & 0x3000;
                        if (v41 == 4096)
                            v40 = 608;
                        else
                            v40 = v41 == 0x2000 ? 0x280 : 0;
                    }
                    sub_800CCC8C(*SF_DRAFT_PTR(_DWORD, (a1 + 8)), 2, *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8010C3A0u))) + v40)));
                    result = sub_8006D388();
                    if (v6 >= 0)
                    {
                        *SF_DRAFT_PTR(_WORD, v14) = v6;
                        return result;
                    }
                    if (v30)
                    {
                        v42 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a1 + 20))) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
                        v43 = a2 < 961;
                        if (a2 >= 1921)
                            v43 = 0;
                        if (v43)
                        {
                            v44 = *SF_DRAFT_PTR(__int16, (a1 + 2));
                            if (v44 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
                            {
                                v47 = 32 * (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
                            }
                            else
                            {
                                v45 = 76 * v44 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                                v46 = *SF_DRAFT_PTR(uint8, (v45 + 36));
                                v22 = v46 != 0;
                                v47 = 32 * v46;
                                if (!v22)
                                {
                                    v48 = *SF_DRAFT_PTR(_DWORD, (v45 + 36)) & 0x3000;
                                    if (v48 == 4096)
                                        v47 = 608;
                                    else
                                        v47 = v48 == 0x2000 ? 0x280 : 0;
                                }
                            }
                            v49 = *SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C398u))) + v47)) >> 6;
                        }
                        else
                        {
                            v50 = *SF_DRAFT_PTR(__int16, (a1 + 2));
                            if (v50 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
                            {
                                v53 = 32 * (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
                            }
                            else
                            {
                                v51 = 76 * v50 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                                v52 = *SF_DRAFT_PTR(uint8, (v51 + 36));
                                v22 = v52 != 0;
                                v53 = 32 * v52;
                                if (!v22)
                                {
                                    v54 = *SF_DRAFT_PTR(_DWORD, (v51 + 36)) & 0x3000;
                                    if (v54 == 4096)
                                        v53 = 608;
                                    else
                                        v53 = v54 == 0x2000 ? 0x280 : 0;
                                }
                            }
                            LOWORD(v49) = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C398u))) + v53 + 2));
                        }
                        v55 = 76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                        v56 = *SF_DRAFT_PTR(uint8, (v55 + 36));
                        v57 = v49 & 0x3FF;
                        if (!*SF_DRAFT_PTR(_BYTE, (v55 + 36)))
                        {
                            v58 = *SF_DRAFT_PTR(_DWORD, (v55 + 36)) & 0x3000;
                            if (v58 == 4096)
                                v56 = 19;
                            else
                                v56 = v58 == 0x2000 ? 0x14 : 0;
                        }
                        hit_flags = sub_80046A3C(v56);
                        sub_80069CB0((*SF_DRAFT_PTR(__int16, (a1 + 2))), (*SF_DRAFT_PTR(__int16, (a1 + 2))), (*SF_DRAFT_PTR(__int16, (v42 + 2))), v57, (uint16)hit_flags);
                        SF_DRAFT_PTR(uint32, 0x8011E638u)[*SF_DRAFT_PTR(char, (v5 + 77))] = (*SF_DRAFT_PTR(uint32, 0x80116A88u)) + 60;
                        v59 = a1;
                        if (*SF_DRAFT_PTR(_BYTE, (v5 + 82)) == 1)
                        {
                            result = 9;
                            if ((*SF_DRAFT_PTR(uint16, 0x80130C88u)) != 9)
                                return result;
                        }
                        return sub_80056740(v59, 2);
                    }
                    if (*SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 82)) >= 3u)
                    {
                        v59 = a1;
                        return sub_80056740(v59, 2);
                    }
                    result = 0x20000;
                    if ((*SF_DRAFT_PTR(_DWORD, (v5 + 80)) & 0xFF00FF) != 0x20000)
                        return result;
                    if (*SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a1 + 20))) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
                    {
                        result = *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 16))) & 2;
                        if (!result)
                            return result;
                        sub_8006C620(((*SF_DRAFT_PTR(_WORD, (a1 + 2)) & 3) + 330), a1, 0);
                        result = 255;
                    }
                    else
                    {
                        sub_80056740(a1, 4);
                        result = 255;
                    }
                    *SF_DRAFT_PTR(_BYTE, (v5 + 80)) = -1;
                }
            }
        }
    }
    return result;
}

sint32 sub_80029048(sint32 a1, sint32 a2, uint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x80029048u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _BYTE *a3_view = SF_DRAFT_PTR(_BYTE, a3);
    int v5;
    int v6;
    int v7;
    int *v8;
    int v9;
    int *v10;
    int *v11;
    int result;
    int *v13;
    char v14;
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
    int *v27;
    int v28;
    uint8 *v29;
    unsigned int v30;
    int v31;
    int *v32;
    int v33;
    char v34;
    int v35;
    int v36;
    char v37;
    char v38;
    int v39;
    int v40;
    uint16 v41;
    uint16 v42;
    int v43;
    char v44;
    uint8 v45;
    v39 = a2;
    v40 = a4;
    v41 = 0;
    v42 = 255;
    v5 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
    v44 = 0;
    v43 = *SF_DRAFT_PTR(_DWORD, (v5 + 20));
    v6 = *SF_DRAFT_PTR(_DWORD, (v5 + 12));
    LOBYTE(v5) = *a3_view;
    v7 = 0;
    v45 = 0;
    v37 = v5;
    v38 = a3_view[1];
    v9 = 255;
    v8 = SF_DRAFT_PTR(int, sub_800282C4(a2, (uint8)a3_view[1], a4));
    v10 = v8;
    v11 = SF_DRAFT_PTR(int, (v6 + 8));
    if (*((_BYTE *)v8 + 13))
    {
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 8)) = *((_BYTE *)v8 + 13);
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 9)) = *((_BYTE *)v8 + 14);
    }
    result = 255;
    if ((v10[1] & 0xFFFF0000) == -65536 && *((uint8 *)v10 + 8) == 255)
    {
        if (*((_BYTE *)v10 + 15))
            sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), (*((uint8 *)v10 + 15)));
        if (v10[4] || (result = *((uint8 *)v10 + 20), *((_BYTE *)v10 + 20)))
        {
            v13 = &v11[5 * *SF_DRAFT_PTR(__int16, (v6 + 108))];
            v13[26] = *SF_DRAFT_PTR(__int16, (a1 + 2));
            *((_BYTE *)v13 + 112) = v37;
            v14 = v38;
            v13[29] = v40;
            v13[30] = v39;
            *((_BYTE *)v13 + 113) = v14;
            result = *SF_DRAFT_PTR(uint16, (v6 + 108)) + 1;
            *SF_DRAFT_PTR(_WORD, (v6 + 108)) = result;
        }
        return result;
    }
    if (!v43)
        return result;
    result = sub_8002833C(a1, v39, sf_draft_guest_address(&v37), v40);
    if (!result)
        return result;
    v16 = 0;
    if (!*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 8))))
    {
        result = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
        if (*SF_DRAFT_PTR(__int16, (a1 + 2)) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            return result;
    }
    do
    {
        v17 = 0;
        if (v16)
        {
            if (v16 == 0x4000)
            {
                if ((__int16)v9 == 255 || (v18 = v9, (__int16)v9 == -666))
                {
                    v18 = *((uint8 *)v10 + 7);
                    v7 = *((char *)v10 + 10);
                }
                else
                {
                    v44 = 1;
                }
                v41 = 1;
            }
            else
            {
                if (v42 == 255 || (__int16)v42 == -666)
                {
                    v18 = *((uint8 *)v10 + 6);
                    v7 = *((char *)v10 + 9);
                }
                else
                {
                    v18 = v42;
                    v44 = 1;
                }
                v41 = 0;
            }
        }
        else
        {
            v41 = 0;
            v18 = *((uint8 *)v10 + 8);
            v7 = *((char *)v10 + 11);
        }
        if ((!v16 || v16 == 0x8000) && (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 4)) & (uint8)v10[1]) != 0 || (v19 = v18 << 16, v16 == 0x4000) && (v19 = v18 << 16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 4)) & *((uint8 *)v10 + 5)) != 0))
        {
            v18 = 255;
            v19 = 16711680;
        }
        v20 = v19 >> 16;
        if (v19 >> 16 != 255)
        {
            v15 = sub_800CB720(*SF_DRAFT_PTR(_DWORD, (a1 + 8)), v16);
            if (!v15 || *SF_DRAFT_PTR(__int16, (v15 + 4)) != v20 || v7 == -2 || v42 != 255 || (__int16)v9 != 255 || v7 == -3)
            {
                if (v7 == -3)
                    v7 = 0;
                if (v15)
                {
                    if (v44)
                        v7 = *SF_DRAFT_PTR(_DWORD, (v15 + 44));
                    sub_800CB994(*SF_DRAFT_PTR(_DWORD, (a1 + 8)), (*SF_DRAFT_PTR(__int16, (v15 + 4))));
                }
                v15 = v18 << 16;
                if (v7 != -2)
                {
                    v21 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
                    v45 = 1;
                    sub_800CB7B0(v21, (__int16)v18, v7, v16, 20);
                    if (v16 == 0x8000 && v42 == 255)
                    {
                        if (*((uint8 *)v10 + 7) == 255)
                        {
                            v22 = sub_800CB720(*SF_DRAFT_PTR(_DWORD, (a1 + 8)), 0x4000);
                            v23 = v18 << 16;
                            if (v22)
                            {
                                v9 = *SF_DRAFT_PTR(uint16, (v22 + 4));
                                v24 = (__int16)v18;
                            LABEL_62:
                                v26 = 32 * v24 + v43;
                                if (*SF_DRAFT_PTR(_BYTE, v26))
                                {
                                    sub_80028720(a1, -1, v24);
                                    if (*SF_DRAFT_PTR(_DWORD, (v26 + 24)))
                                    {
                                        v27 = v11;
                                        if (*v11 == -1)
                                        {
                                            v28 = 0;
                                            while (v27[4])
                                            {
                                                ++v28;
                                                ++v27;
                                                if (v28 >= 3)
                                                    goto LABEL_68;
                                            }
                                            *v11 = v28;
                                        }
                                    LABEL_68:
                                        v11[*v11 + 4] = 1;
                                        v11[*v11 + 1] = (__int16)v18;
                                        v17 = *SF_DRAFT_PTR(_DWORD, (32 * (__int16)v18 + v43 + 24));
                                    }
                                    v29 = SF_DRAFT_PTR(uint8, *SF_DRAFT_PTR(uint32, ((v18 << 16 >> 11) + v43 + 28)));
                                    if (v29)
                                        v17 |= 0x4000000 | *v29;
                                }
                                v30 = v17 | 0x80000000;
                                if (!v44)
                                {
                                    v31 = *SF_DRAFT_PTR(__int16, (a1 + 2));
                                    v32 = &v11[5 * v41];
                                    v32[16] = (__int16)v18;
                                    v33 = v39;
                                    v32[15] = v31;
                                    v32[19] = v33;
                                    *((_BYTE *)v32 + 68) = v37;
                                    v34 = v38;
                                    v32[18] = v40;
                                    *((_BYTE *)v32 + 69) = v34;
                                }
                                v15 = sub_800CB720(*SF_DRAFT_PTR(_DWORD, (a1 + 8)), v16);
                                *SF_DRAFT_PTR(_DWORD, (v15 + 28)) = 0x80027E50u;
                                *SF_DRAFT_PTR(_DWORD, (v15 + 32)) = v30;
                                *SF_DRAFT_PTR(_DWORD, (v15 + 36)) = sf_draft_guest_address(&v11[5 * v41 + 15]);
                                goto LABEL_74;
                            }
                        LABEL_61:
                            v24 = v23 >> 16;
                            goto LABEL_62;
                        }
                        v9 = -666;
                    }
                    else
                    {
                        v23 = v18 << 16;
                        if (v16 != 0x4000)
                            goto LABEL_61;
                        v23 = v18 << 16;
                        if ((__int16)v9 != 255)
                            goto LABEL_61;
                        if (*((uint8 *)v10 + 6) == 255)
                        {
                            v25 = sub_800CB720(*SF_DRAFT_PTR(_DWORD, (a1 + 8)), 0x8000);
                            v23 = v18 << 16;
                            if (v25)
                                v42 = *SF_DRAFT_PTR(_WORD, (v25 + 4));
                            goto LABEL_61;
                        }
                        v42 = -666;
                    }
                    v23 = v18 << 16;
                    goto LABEL_61;
                }
            }
        }
    LABEL_74:
        if (v44 || v16 == 0x8000 && (__int16)v42 == -666 || v16 == 0x4000 && (__int16)v9 == -666)
        {
            v16 = -1;
            continue;
        }
        if (!v16)
            goto LABEL_85;
        if (v16 == 0x4000 || v42 != 255)
        {
            v16 = 0x8000;
            continue;
        }
        v16 = -1;
        if ((__int16)v9 != 255)
        LABEL_85:
            v16 = 0x4000;
    } while (v16 != -1);
    result = v45;
    if (v45)
    {
        v35 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
        result = *SF_DRAFT_PTR(_BYTE, (v35 + 8)) & 0x10;
        if ((*SF_DRAFT_PTR(_BYTE, (v35 + 8)) & 0x10) != 0)
        {
            sub_800D0DA8(v35);
            sub_800C777C(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)));
            *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 8)) |= 4u;
            v36 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
            result = *SF_DRAFT_PTR(_BYTE, (v36 + 8)) & 0xEF;
            *SF_DRAFT_PTR(_BYTE, (v36 + 8)) = result;
        }
    }
    return result;
}

sint32 sub_8008507C(sint32 a1, uint32 a2, sint32 a3, sint32 a4, uint32 a9, uint32 a10)
{
    FUNCTION_MARKER(0x8008507Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _BYTE *a2_view = SF_DRAFT_PTR(_BYTE, a2);
    __int16 *a9_view = SF_DRAFT_PTR(__int16, a9);
    __int16 *a10_view = SF_DRAFT_PTR(__int16, a10);
    _BYTE *v12;
    int v14;
    int v15;
    int result;
    int v17;
    int *v18;
    uint16 v19;
    int v20;
    int v21;
    int v23;
    int v24;
    int v25;
    int v26;
    sint32 v27;
    int v28;
    bool v29; // dc
    int v30;
    int v31;
    int v32;
    int v33;
    __int16 v34;
    int v35;
    int v36;
    _DWORD *v37;
    int v38;
    int v39;
    __int16 v40;
    __int16 v41;
    _WORD *v42;
    int v43;
    __int16 v44;
    int v45;
    int v46;
    sint32 v47;
    __int16 v48;
    __int16 *v49;
    __int16 v50;
    __int16 v51;
    int v52;
    int v53;
    int v54;
    __int16 v55;
    __int16 v57;
    uint8 v58;
    v12 = a2_view;
    v14 = 0;
    v58 = 0;
    v15 = 1;
    v57 = *a9_view;
    if (a1)
    {
        result = 0xFFFF;
        if (!*SF_DRAFT_PTR(_WORD, (a1 + 12)))
            return result;
        result = 0xFFFF;
        if (!*SF_DRAFT_PTR(_WORD, (a1 + 14)))
            return result;
    }
    if (a4)
    {
        result = 0xFFFF;
        if (*SF_DRAFT_PTR(_DWORD, (a4 + 40)))
            return result;
    }
    v17 = *SF_DRAFT_PTR(uint16, (SF_DRAFT_GP + 1132));
    v18 = &SF_DRAFT_PTR(uint32, 0x80120A98u)[7 * v17];
    if ((v18[5] & 1) == 0)
    {
    LABEL_11:
        v21 = sub_80085024(sf_draft_guest_address(a2_view));
        v23 = 0;
        v24 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1128));
        v25 = v21;
        *v18 = a4;
        if (!a4)
        {
            v26 = v24;
            v27 = v24 < v21;
            v28 = v21 + v24;
            do
            {
                if (v28 >= 120)
                {
                    v29 = v23 != 0;
                    v23 = 1;
                    if (v29)
                        return 0xFFFF;
                    v24 = 0;
                }
                v30 = v25 - 1;
                *v18 = (sint32)(0x8011F5F8u + 44u * (uint32)v24);
                if (v25 - 1 >= 0)
                {
                    v31 = 44 * v30;
                    while (!*SF_DRAFT_PTR(_DWORD, (v31 + *v18 + 40)))
                    {
                        --v30;
                        v31 -= 44;
                        if (v30 < 0)
                            goto LABEL_26;
                    }
                    v32 = v24 + v30 + 1;
                    if (v24 < v26)
                    {
                        result = 0xFFFF;
                        if (v32 >= v26)
                            return result;
                    }
                    v24 = v32;
                    if (v32 + v25 >= 120)
                    {
                        result = 0xFFFF;
                        if (v27)
                            return result;
                        v24 = v32;
                    }
                    *v18 = 0;
                }
            LABEL_26:
                v28 = v25 + v24;
            } while (!*v18);
        }
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1128)) = v24;
        if (a1)
            *SF_DRAFT_PTR(_DWORD, a1) |= 3u;
        v33 = (*SF_DRAFT_PTR(uint32, 0x801169A4u));
        v18[1] = (*SF_DRAFT_PTR(uint32, 0x801169A4u)) + (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3008)) != (*SF_DRAFT_PTR(uint32, 0x801169A4u)));
        v34 = *a9_view;
        v18[2] = v33 + a3;
        *((_WORD *)v18 + 7) = v34;
        if (__CFADD__(v33, a3))
            v18[2] = -1;
        v35 = *v18;
        v36 = 0;
        if (!*v12)
        {
        LABEL_77:
            *((_WORD *)v18 + 6) = v36;
            v52 = *((uint16 *)v18 + 6);
            *((_BYTE *)v18 + 19) = v15;
            *((_BYTE *)v18 + 21) = v58;
            if (v52)
            {
                v53 = *SF_DRAFT_PTR(__int16, (44 * v36 + *v18 - 38)) - *SF_DRAFT_PTR(__int16, (*v18 + 6));
                if (a1 && (*SF_DRAFT_PTR(_DWORD, a1) & 0x10) != 0)
                {
                    v54 = v53 / 6;
                }
                else
                {
                    v29 = v53 >= 0;
                    v54 = v53 >> 3;
                    if (!v29)
                        v54 = (*SF_DRAFT_PTR(__int16, (44 * v36 + *v18 - 38)) - *SF_DRAFT_PTR(__int16, (*v18 + 6)) + 7) >> 3;
                }
                if (v54 >= 15)
                    v55 = -1;
                else
                    v55 = ((_WORD)v54 + 1) << 12;
            }
            else
            {
                v55 = 4096;
            }
            *((_WORD *)v18 + 11) = v55;
            *((_BYTE *)v18 + 16) = *SF_DRAFT_PTR(_BYTE, (a1 + 4));
            *((_BYTE *)v18 + 17) = *SF_DRAFT_PTR(_BYTE, (a1 + 5));
            *((_BYTE *)v18 + 18) = *SF_DRAFT_PTR(_BYTE, (a1 + 6));
            if (a1 && (*SF_DRAFT_PTR(_DWORD, a1) & 0x10) != 0)
                *((_BYTE *)v18 + 20) |= 0x80u;
            if (!a4)
                *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1128)) += v36;
            *((_BYTE *)v18 + 20) |= 1u;
            return *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1132)) | (uint16)(v58 << 8);
        }
        v37 = SF_DRAFT_PTR(_DWORD, (v35 + 40));
        v38 = (uint8)*v12;
        while (1)
        {
            v58 += v38;
            if (v38 == 10)
                break;
            if (v38 < 11)
            {
                if (v38 == 9)
                {
                    if (a1)
                        v39 = *SF_DRAFT_PTR(__int16, (a1 + 8));
                    else
                        v39 = *SF_DRAFT_PTR(__int16, (a4 + 4));
                    *a9_view = v39 + 25 * ((*a9_view - v39) / 25 + 1);
                    v14 = 0;
                    goto LABEL_76;
                }
            LABEL_48:
                if (!a1)
                    goto LABEL_51;
                if (*SF_DRAFT_PTR(__int16, (a1 + 10)) + *SF_DRAFT_PTR(__int16, (a1 + 14)) < *a10_view)
                {
                    *((_WORD *)v18 + 6) = v36;
                    sub_80087660(sf_draft_guest_address(v18));
                    return 0xFFFF;
                }
                if (*a9_view < *SF_DRAFT_PTR(__int16, (a1 + 8)) + *SF_DRAFT_PTR(__int16, (a1 + 12)))
                {
                LABEL_51:
                    if (!v14)
                        v14 = v35;
                    *((_WORD *)v37 - 18) = *a9_view;
                    v43 = *v37;
                    v44 = *a10_view;
                    *((_BYTE *)v37 - 18) = 0;
                    *((_BYTE *)v37 - 19) = 0;
                    *((_BYTE *)v37 - 20) = 0;
                    *((_WORD *)v37 - 14) = 13;
                    *((_WORD *)v37 - 17) = v44;
                    if (!v43)
                        *v37 = sub_800DE5E0(*SF_DRAFT_PTR(uint32, SF_DRAFT_GP + 3324) + 144u, v35);
                    v45 = (uint8)*v12;
                    if (v45 == 37)
                    {
                        *a9_view += sub_8008798C(sf_draft_guest_address(++v12), v35);
                        v46 = (uint8)*v12;
                        if (v46 == 114 || v46 == 108 || v46 == 115)
                            ++v12;
                    }
                    else
                    {
                        v47 = 0;
                        if (a1)
                            v47 = (*SF_DRAFT_PTR(_DWORD, a1) & 0x10) != 0;
                        *a9_view += (uint8)sub_800876F0(v45, v35, v47);
                    }
                    v37 += 11;
                    v35 += 44;
                    ++v36;
                    goto LABEL_76;
                }
                if (v14)
                {
                    v48 = *SF_DRAFT_PTR(_WORD, (v14 + 4)) - v57;
                    if (v14 != v35)
                    {
                        v49 = SF_DRAFT_PTR(__int16, (v14 + 6));
                        do
                        {
                            v50 = *v49;
                            *(v49 - 1) -= v48;
                            v51 = v50 + 6;
                            if ((*SF_DRAFT_PTR(_DWORD, a1) & 0x10) == 0)
                                v51 = v50 + 8;
                            *v49 = v51;
                            v49 += 22;
                        } while (v49 != SF_DRAFT_PTR(__int16, (v35 + 6)));
                    }
                    v14 = 0;
                    *a9_view -= v48;
                }
                else
                {
                    *a9_view = v57;
                }
                v41 = *a10_view + 6;
                if ((*SF_DRAFT_PTR(_DWORD, a1) & 0x10) == 0)
                    v41 = *a10_view + 8;
                ++v15;
                v42 = a10_view;
                --v12;
            LABEL_75:
                *v42 = v41;
                goto LABEL_76;
            }
            if (v38 != 13)
            {
                if (v38 != 32)
                    goto LABEL_48;
                v14 = 0;
                *a9_view += 4;
            }
        LABEL_76:
            v38 = (uint8) * ++v12;
            if (!*v12)
                goto LABEL_77;
        }
        *a9_view = v57;
        v40 = *a10_view;
        v41 = *a10_view + 8;
        if (a1)
        {
            v41 = v40 + 6;
            if ((*SF_DRAFT_PTR(_DWORD, a1) & 0x10) == 0)
                v41 = v40 + 8;
        }
        v14 = 0;
        v42 = a10_view;
        ++v15;
        goto LABEL_75;
    }
    while (1)
    {
        v19 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1132)) + 1;
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1132)) = v19;
        if (v19 >= 0x28u)
            *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1132)) = 0;
        v20 = *SF_DRAFT_PTR(uint16, (SF_DRAFT_GP + 1132));
        if (v17 == v20)
            return 0xFFFF;
        v18 = &SF_DRAFT_PTR(uint32, 0x80120A98u)[7 * v20];
        if ((v18[5] & 1) == 0)
            goto LABEL_11;
    }
}

sint32 sub_8003DB64(void)
{
    FUNCTION_MARKER(0x8003DB64u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int *v8;
    int *v9;
    int *v10;
    __int16 v11;
    int v12;
    int v13;
    __int16 v14;
    uint16 v15;
    int v16;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    __int16 v23;
    int v24;
    __int16 *v25;
    int v26;
    unsigned int v27;
    int v28;
    int v29;
    uint16 v30;
    int v34;
    __int16 v35;
    int v36;
    int v37;
    sint32 v38;
    int v39;
    int *v40;
    int *v41;
    int *v42;
    __int16 v43;
    int v44;
    uint16 v45;
    int v49;
    __int16 v50;
    int result;
    int v52;
    int v53[3];
    int v54[2];
    v1 = 0;
    if (SF_DRAFT_PTR(uint8, 0x80011BA8u)[*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724))] || !(*SF_DRAFT_PTR(uint32, 0x80116B9Cu)))
    {
        v6 = 0;
        v5 = 0;
    }
    else
    {
        v2 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 24));
        v3 = *SF_DRAFT_PTR(uint16, (v2 + 6)) << 16 >> 31;
        v4 = (int)((uint64)(715827883LL * *SF_DRAFT_PTR(__int16, (v2 + 6))) >> 32) >> 1;
        v5 = v4 - v3;
        v6 = ((uint64)(1431655766LL * *SF_DRAFT_PTR(__int16, (v2 + 8))) >> 32) - (*SF_DRAFT_PTR(uint16, (v2 + 8)) << 16 >> 31);
        if (v4 == v3)
        {
            v52 = 255;
            v53[0] = 0;
            v7 = (sub_800EA474((*SF_DRAFT_PTR(uint32, 0x801169A4u)) << 8) + 4096) >> 5;
            v8 = v54;
            v9 = v53;
            v10 = &v52;
            HIBYTE(v54[0]) = 0;
            do
            {
                v11 = v7 * *(uint8 *)v10;
                v10 = SF_DRAFT_PTR(int, ((char *)v10 + 1));
                *(_BYTE *)v8 = (uint16)(v11 + (256 - v7) * *(uint8 *)v9) >> 8;
                v8 = SF_DRAFT_PTR(int, ((char *)v8 + 1));
                v9 = SF_DRAFT_PTR(int, ((char *)v9 + 1));
            } while ((int)v8 < (int)v54 + 3);
            v1 = SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8011625Cu)));
            (*SF_DRAFT_PTR(uint32, 0x8011B4D0u)) = v54[0] | 0x28000000;
        }
        else
        {
            v1 = SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x80116268u)));
            (*SF_DRAFT_PTR(uint32, 0x8011B4D0u)) = (*SF_DRAFT_PTR(uint32, 0x80011B6Cu)) | 0x2A000000;
        }
    }
    v12 = SLOWORD(SF_DRAFT_PTR(uint32, 0x8011B4B4u)[0]) - SLOWORD(SF_DRAFT_PTR(uint32, 0x8011B4B0u)[0]);
    v13 = (*SF_DRAFT_PTR(uint16, 0x8011B4D8u)) - SLOWORD(SF_DRAFT_PTR(uint32, 0x8011B4B0u)[0]);
    if (!v1)
    {
        v16 = *SF_DRAFT_PTR(uint16, (SF_DRAFT_GP + 680));
        if (v16 == 0xFFFF)
            goto LABEL_22;
        sub_80086018(v16);
        v14 = -1;
        goto LABEL_21;
    }
    if (*SF_DRAFT_PTR(uint16, (SF_DRAFT_GP + 680)) == 0xFFFF)
    {
        v15 = sub_80085E04(sf_draft_guest_address(v1), (*SF_DRAFT_PTR(uint32, 0x8011B530u)), -172, -102);
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 680)) = v15;
        if (v15 != 0xFFFF)
            sub_80086E44(v15, *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 728)), *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 729)), *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 730)));
    }
    else if (v12 > 0 && !v5 || !v12 && v5 > 0)
    {
        v14 = sub_80086EA0(*SF_DRAFT_PTR(uint16, (SF_DRAFT_GP + 680)), sf_draft_guest_address(v1));
    LABEL_21:
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 680)) = v14;
    }
LABEL_22:
    sub_8003D99C(0, (SF_DRAFT_PTR(uint8, 0x80011BA8u)[*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724))] == 0));
    if (v5 == v12)
    {
        v21 = v5;
        if (v6 >= v5)
            v21 = v6;
        v20 = v21;
    }
    else
    {
        v18 = v12 - 5;
        if (v5 >= v12 - 5)
            v18 = v5;
        if (v12 + 5 < v18)
            v18 = v12 + 5;
        v19 = v18;
        LOWORD((*SF_DRAFT_PTR(uint32, 0x8011B4D4u))) = LOWORD(SF_DRAFT_PTR(uint32, 0x8011B4B0u)[0]) + v18;
        LOWORD(SF_DRAFT_PTR(uint32, 0x8011B4B4u)[0]) = LOWORD(SF_DRAFT_PTR(uint32, 0x8011B4B0u)[0]) + v18;
        LOWORD((*SF_DRAFT_PTR(uint32, 0x8011B4DCu))) = LOWORD(SF_DRAFT_PTR(uint32, 0x8011B4B8u)[0]) + v18;
        LOWORD(SF_DRAFT_PTR(uint32, 0x8011B4BCu)[0]) = LOWORD(SF_DRAFT_PTR(uint32, 0x8011B4B8u)[0]) + v18;
        if (v6 >= v18)
            v19 = v6;
        v20 = v19;
    }
    if (v20 != v13)
    {
        v22 = v13 - 5;
        if (v20 >= v13 - 5)
            v22 = v20;
        v23 = v22;
        if (v13 + 5 < v22)
            v23 = v13 + 5;
        (*SF_DRAFT_PTR(uint16, 0x8011B4D8u)) = LOWORD(SF_DRAFT_PTR(uint32, 0x8011B4B0u)[0]) + v23;
        (*SF_DRAFT_PTR(uint16, 0x8011B4E0u)) = LOWORD(SF_DRAFT_PTR(uint32, 0x8011B4B8u)[0]) + v23;
    }
    v24 = -1;
    if (!SF_DRAFT_PTR(uint8, 0x80011BA8u)[*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724))])
    {
        if ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)))
        {
            v25 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 20)));
            if (*v25 >= 0)
            {
                if ((*SF_DRAFT_PTR(uint8, 0x80116B7Cu)))
                {
                    v26 = v25[44];
                    v27 = (unsigned int)v26 >> 31;
                    if (v26 >= 101)
                    {
                        v26 = 100;
                        v27 = 0;
                    }
                    v24 = (int)(v26 + v27) >> 1;
                }
            }
        }
    }
    v28 = *SF_DRAFT_PTR(uint16, (SF_DRAFT_GP + 682));
    (*SF_DRAFT_PTR(uint32, 0x8011B4F4u)) = (*SF_DRAFT_PTR(uint32, 0x80011B70u)) | 0x2A000000;
    v29 = (*SF_DRAFT_PTR(uint16, 0x8011B4FCu)) - (*SF_DRAFT_PTR(uint16, 0x8011B4F8u));
    if (v28 == 0xFFFF)
    {
        if (v24 >= 0)
        {
            v30 = sub_80085E04((*SF_DRAFT_PTR(uint32, 0x80116274u)), (*SF_DRAFT_PTR(uint32, 0x8011B638u)), -172, -72);
            *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 682)) = v30;
            if (v30 != 0xFFFF)
                sub_80086E44(v30, *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 728)), *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 729)), *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 730)));
        }
    }
    else if (v24 < 0)
    {
        sub_80086018(v28);
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 682)) = -1;
    }
    sub_8003D99C(1, v24 != -1);
    if (v24 < 0)
        v24 = 0;
    if (v24 != v29)
    {
        v34 = v29 - 5;
        if (v24 >= v29 - 5)
            v34 = v24;
        v35 = v34;
        if (v29 + 5 < v34)
            v35 = v29 + 5;
        (*SF_DRAFT_PTR(uint16, 0x8011B4FCu)) = (*SF_DRAFT_PTR(uint16, 0x8011B4F8u)) + v35;
        (*SF_DRAFT_PTR(uint16, 0x8011B504u)) = (*SF_DRAFT_PTR(uint16, 0x8011B500u)) + v35;
    }
    v36 = 0;
    if (!SF_DRAFT_PTR(uint8, 0x80011BA8u)[*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724))])
    {
        v37 = 50 * *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2596));
        if (v37 < 0)
            v36 = ((-50 * *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2596))) >> 12) + 50;
        else
            v36 = 50 - (v37 >> 12);
        if (v36 < 3)
        {
            v36 = 0;
        }
        else
        {
            v38 = v36 < 49;
            if (v36 < 51)
                goto LABEL_69;
            v36 = 50;
        }
    }
    v38 = v36 < 49;
LABEL_69:
    if (v38)
    {
        (*SF_DRAFT_PTR(uint32, 0x8011B518u)) = (*SF_DRAFT_PTR(uint32, 0x80011B74u)) | 0x2A000000;
    }
    else
    {
        v52 = 0;
        v53[0] = 255;
        v39 = (sub_800EA474((*SF_DRAFT_PTR(uint32, 0x801169A4u)) << 8) + 4096) >> 5;
        v40 = v54;
        v41 = v53;
        v42 = &v52;
        HIBYTE(v54[0]) = 0;
        do
        {
            v43 = v39 * *(uint8 *)v42;
            v42 = SF_DRAFT_PTR(int, ((char *)v42 + 1));
            *(_BYTE *)v40 = (uint16)(v43 + (256 - v39) * *(uint8 *)v41) >> 8;
            v40 = SF_DRAFT_PTR(int, ((char *)v40 + 1));
            v41 = SF_DRAFT_PTR(int, ((char *)v41 + 1));
        } while ((int)v40 < (int)v54 + 3);
        (*SF_DRAFT_PTR(uint32, 0x8011B518u)) = v54[0] | 0x28000000;
    }
    v44 = (*SF_DRAFT_PTR(uint16, 0x8011B520u)) - (*SF_DRAFT_PTR(uint16, 0x8011B51Cu));
    if (*SF_DRAFT_PTR(uint16, (SF_DRAFT_GP + 684)) == 0xFFFF)
    {
        if (v36 > 0)
        {
            v45 = sub_80085E04((SF_DRAFT_PTR(uint32, 0x80116280u)[0]), (*SF_DRAFT_PTR(uint32, 0x8011B740u)), -172, -87);
            *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 684)) = v45;
            if (v45 != 0xFFFF)
                sub_80086E44(v45, *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 728)), *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 729)), *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 730)));
        }
    }
    else if (!v36)
    {
        sub_80086018(*SF_DRAFT_PTR(uint16, (SF_DRAFT_GP + 684)));
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 684)) = -1;
    }
    sub_8003D99C(2, v36);
    if (v36 != v44)
    {
        v49 = v44 - 5;
        if (v36 >= v44 - 5)
            v49 = v36;
        v50 = v49;
        if (v44 + 5 < v49)
            v50 = v44 + 5;
        (*SF_DRAFT_PTR(uint16, 0x8011B520u)) = (*SF_DRAFT_PTR(uint16, 0x8011B51Cu)) + v50;
        (*SF_DRAFT_PTR(uint16, 0x8011B528u)) = (*SF_DRAFT_PTR(uint16, 0x8011B524u)) + v50;
    }
    result = 4096;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2596)) = 4096;
    return result;
}

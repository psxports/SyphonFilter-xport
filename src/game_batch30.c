#include "game_draft.h"
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_800329A4();

uint32 sub_80014FF8(void)
{
    uint32 mode, timer, object, count, index, record, code, target, table, entity;
    uint32 word, callback_argument;
    uint8 fourth, fifth, sixth;
    FUNCTION_MARKER(0x80014FF8u, "SCUS_942.40");
    w_u32(0x80116A88u, r_u32(0x80116A88u) + 1u);
    sub_8008B4E0(1);
    sub_8001D5AC();
    sub_8001B040();
    sub_80015364(4, 5, 65534, 65534, 0, 0, 0, 0);
    sub_80049FDC();
    sub_80016E68();
    sub_80016EDC();
    sub_8008B564();
    sub_80029D88();
    mode = r_u32(0x80115C78u);
    if (mode == 0u || mode == 5u)
    {
        timer = r_u32(0x80115C94u);
        if (timer != 0u)
        {
            w_u32(0x80115C94u, timer + 1u);
            if ((sint32)timer < 61)
            {
                word = r_u32(0x80115C98u);
                fourth = r_u8(0x80115C9Cu);
                w_u32(0x8010D024u, word);
                w_u8(0x8010D028u, fourth);
                fifth = r_u8(0x80115C9Du);
                sixth = r_u8(0x80115C9Eu);
                w_u8(0x8010D029u, fifth);
                w_u8(0x8010D02Au, sixth);
            }
            else
                w_u32(0x80115C94u, 0u);
        }
        object = r_u32(r_u32(0x80116B9Cu) + 8u);
        if (object != 0u && r_u32(object) == 0u && r_u32(0x80115E80u) == 0u)
        {
            sub_800C818C((sint32)0x8012D698u, (sint32)object);
            w_u32(0x80115C94u, 1u);
        }
        sub_80016994();
        sub_800156DC(0x80116C68u, 0x8011775Cu);
        count = r_u32(0x8011775Cu);
        for (index = 0u; (sint32)index < (sint32)count; ++index)
        {
            record = 0x80117760u + 28u * index;
            word = r_u32(0x8011775Cu);
            code = r_u32(record + 8u);
            if (word == 0u)
                break;
            callback_argument = record;
            if (code == 65535u)
            {
                target = r_u32(0x80102AE0u + 12u * r_u16(record));
                sf_draft_call(target, 1u, &callback_argument);
            }
            else if (code - 65533u < 2u)
            {
                entity = r_u16(record);
                table = r_u32(0x80130C8Cu);
                target = r_u32(table + 12u * entity + 4u);
                sf_draft_call(target, 1u, &callback_argument);
            }
            else
            {
                if (code == 666u)
                    table = 0x8010330Cu;
                else
                {
                    entity = r_u32(r_u32(0x80115CCCu) + 76u * code);
                    table = r_u32(0x80116B98u) + 20u * entity;
                    table = 0x801028A4u + 4u * (uint32)(sint32)r_s16(table);
                }
                target = r_u32(table);
                if (target != 0u)
                    sf_draft_call(target, 1u, &callback_argument);
            }
        }
        sub_80014B3C();
    }
    sub_8004A0B4();
    sub_80094888();
    return sub_8001AF64();
}

sint32 sub_8001B224(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8001B224u, "SCUS_942.40");
    sint32 *input = SF_DRAFT_PTR(sint32, a1);
    uint32 *output = SF_DRAFT_PTR(uint32, a2);
    sint32 forward[3], sideways[3];
    sint32 vertical;
    uint32 camera;
    if (r_u8(0x8011921Au) != 0)
    {
        uint32 angles[4];
        uint32 active;
        camera = r_u32(0x80115D84u);
        active = r_u32(camera + 0x94Cu);
        angles[0] = r_u32(camera + 0x984u);
        if (active != 0)
        {
            angles[1] = r_u32(camera + 0x988u);
            angles[2] = r_u32(camera + 0x98Cu);
            angles[3] = r_u32(camera + 0x990u);
        }
        else
        {
            /* TODO Recover meaningful unwritten input Y/Z at original SP+14/18 */
            sf_draft_unbound_stack_field(0x8001B224u, 0x14u);
        }
        sub_800E0FE8((sint32)sf_draft_guest_address(angles), sf_draft_guest_address(forward));
    }
    else
    {
        sint16 rotation[9];
        uint32 i;
        camera = r_u32(0x80115D84u);
        for (i = 0; i < 9; ++i)
        {
            uint16 component = r_u16(r_u32(r_u32(camera)) + 2u * i);
            rotation[i] = (sint16)((i & 1u) ? 0u - (uint32)component : (uint32)component);
        }
        forward[0] = (sint32)(0u - (uint32)(sint32)rotation[6]);
        forward[1] = 0;
        forward[2] = rotation[0];
    }
    if (forward[1] != 0)
    {
        forward[1] = 0;
        sub_800C720C(sf_draft_guest_address(forward), sf_draft_guest_address(forward));
    }
    sideways[1] = 0;
    sideways[0] = forward[2];
    sideways[2] = (sint32)(0u - (uint32)forward[0]);
    sideways[0] = sub_800C6D4C(sideways[0], input[0]);
    sideways[1] = sub_800C6D4C(sideways[1], input[0]);
    sideways[2] = sub_800C6D4C(sideways[2], input[0]);
    vertical = input[1];
    forward[0] = sub_800C6D4C(forward[0], input[2]);
    forward[1] = sub_800C6D4C(forward[1], input[2]);
    forward[2] = sub_800C6D4C(forward[2], input[2]);
    output[0] = 0;
    {
        uint32 first = output[0];
        uint32 second;
        output[1] = 0;
        output[2] = 0;
        output[0] = first + (uint32)sideways[0];
        output[1] += (uint32)sideways[1];
        second = output[1];
        output[2] += (uint32)sideways[2];
        first = output[0];
        output[1] = second + (uint32)vertical;
        output[0] = first + (uint32)forward[0];
    }
    output[1] += (uint32)forward[1];
    {
        uint32 result = output[2] + (uint32)forward[2];
        output[2] = result;
        return (sint32)result;
    }
}

// FUNCTION_MARKER 0x80020258u 0x80020258
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80020258(void)
{
    FUNCTION_MARKER(0x80020258u, "SCUS_942.40");
    uint32 camera = r_u32(0x80115D84u);
    uint32 position[4], origin[4], rotation[4], matrix[8];
    sint32 displacement[3], normal[3];
    sint16 angles[3];
    uint32 index, z, mode;
    position[0] = r_u32(camera + 0x1ECu);
    if (r_u32(camera + 0x1B4u))
    {
        for (index = 1; index < 4u; ++index)
            position[index] = r_u32(camera + 0x1ECu + 4u * index);
    }
    else
    {
        /* TODO Recover meaningful unwritten position Y/Z at original SP+24/28 */
        sf_draft_unbound_stack_field(0x80020258u, 0x24u);
    }
    w_u8(0x80119219u, 0);
    if (r_u8(0x80119218u) && r_u32(0x801191ECu) != 4u && r_u32(0x801191ECu) != 11u && r_u32(0x801191F0u) != 3u)
    {
        mode = (r_u32(0x801191ECu) == 4u || r_u32(0x801191ECu) == 10u || r_u32(0x801191F0u) == 2u) ? 2u : 1u;
        sub_800189FC(r_u32(0x80115D84u), 0, mode, 1);
        camera = r_u32(0x80115D84u);
        for (index = 0; index < 4u; ++index)
            origin[index] = r_u32(camera + 0xD1Cu + 4u * index);
        if (r_u8(r_u32(r_u32(0x80119194u) + 16u) + 8u) == 8u)
            origin[1] += 64u;
        displacement[0] = (sint32)(position[0] - origin[0]);
        displacement[1] = (sint32)(position[1] - origin[1]);
        z = position[2];
        camera = r_u32(0x80115D84u);
        displacement[2] = (sint32)(z - origin[2]);
        rotation[0] = r_u32(camera + 0x984u);
        if (r_u32(camera + 0x94Cu))
        {
            for (index = 1; index < 4u; ++index)
                rotation[index] = r_u32(camera + 0x984u + 4u * index);
        }
        else
        {
            /* TODO Recover meaningful unwritten rotation Y/Z at original SP+54/58 */
            sf_draft_unbound_stack_field(0x80020258u, 0x54u);
        }
        angles[0] = (sint16)(0u - rotation[0]);
        angles[1] = (sint16)rotation[1];
        angles[2] = (sint16)(0u - rotation[2]);
        sub_800EBE94(sf_draft_guest_address(angles), sf_draft_guest_address(matrix));
        HIWORD(matrix[0]) = (uint16)(0u - HIWORD(matrix[0]));
        z = 0u - HIWORD(matrix[2]);
        HIWORD(matrix[2]) = (uint16)z;
        HIWORD(matrix[1]) = (uint16)(0u - HIWORD(matrix[1]));
        HIWORD(matrix[3]) = (uint16)(0u - HIWORD(matrix[3]));
        normal[0] = (sint16)matrix[1];
        normal[1] = (sint16)z;
        normal[2] = ((sint16 *)matrix)[8];
        if ((uint8)sub_800959EC(sf_draft_guest_address(origin), sf_draft_guest_address(displacement), sf_draft_guest_address(normal), sf_draft_guest_address(position)))
            w_u8(0x80119219u, 1);
    }
    else
    {
        /* Native padding for the camera request's unused fourth orientation word */
        matrix[3] = 0;
    }
    camera = r_u32(0x80115D84u);
    matrix[0] = 1;
    matrix[1] = 1;
    matrix[2] = 1;
    for (index = 0; index < 4u; ++index)
        w_u32(camera + 0xD1Cu + 4u * index, position[index]);
    camera = r_u32(0x80115D84u);
    for (index = 0; index < 4u; ++index)
        w_u32(camera + 0xD30u + 4u * index, matrix[index]);
    w_u8(r_u32(0x80115D84u) + 0xD40u, 0);
    sub_80018994(r_u32(0x80115D84u), 1, 3, 1);
    return 1;
}

// FUNCTION_MARKER 0x80054FBCu 0x80054fbc
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80054FBC(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80054FBCu, "SCUS_942.40");
    int v4;
    int v5;
    int *v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int result;
    int v13;
    int v14;
    char v15;
    int v16;
    int v17;
    int v18;

    v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 4));
    v5 = 1;
    if ((v4 & 0x80) == 0)
        --*SF_DRAFT_PTR(_WORD, (a2 + 36));
    if (!*SF_DRAFT_PTR(_WORD, (a2 + 36)))
        return 0;
    if (*SF_DRAFT_PTR(__int16, (a2 + 36)) < (int)*SF_DRAFT_PTR(uint8, (a1 + 34)))
        *SF_DRAFT_PTR(_DWORD, (a2 + 32)) -= *SF_DRAFT_PTR(_DWORD, a1);
    if ((*SF_DRAFT_PTR(_DWORD, (a1 + 4)) & 0x20000) != 0)
    {
        v6 = SF_DRAFT_PTR(int, r_u32((*SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a1 + 20)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 12)));
        *SF_DRAFT_PTR(_DWORD, a2) += v6[4] >> 12;
        *SF_DRAFT_PTR(_DWORD, (a2 + 4)) += v6[5] >> 12;
        *SF_DRAFT_PTR(_DWORD, (a2 + 8)) += v6[6] >> 12;
    }
    v7 = *SF_DRAFT_PTR(_DWORD, (a2 + 20));
    v8 = *SF_DRAFT_PTR(_DWORD, (a2 + 4));
    if (v7 < 0)
        v9 = v8 - (-v7 >> 12);
    else
        v9 = v8 + (v7 >> 12);
    *SF_DRAFT_PTR(_DWORD, (a2 + 4)) = v9;
    v10 = *SF_DRAFT_PTR(_DWORD, (a2 + 8)) + *SF_DRAFT_PTR(_DWORD, (a2 + 24));
    *SF_DRAFT_PTR(_DWORD, a2) += *SF_DRAFT_PTR(_DWORD, (a2 + 16));
    *SF_DRAFT_PTR(_DWORD, (a2 + 8)) = v10;
    if ((v4 & 0x4000) != 0)
    {
        *SF_DRAFT_PTR(_DWORD, a2) += (*SF_DRAFT_PTR(uint32, 0x8012FA20u)) >> 5;
        *SF_DRAFT_PTR(_DWORD, (a2 + 8)) += (*SF_DRAFT_PTR(uint32, 0x8012FA28u)) >> 5;
    }
    *SF_DRAFT_PTR(_DWORD, (a2 + 20)) += *SF_DRAFT_PTR(__int16, (a1 + 26));
    if ((v4 & 0x10) != 0)
    {
        v11 = *SF_DRAFT_PTR(_DWORD, (a2 + 24)) - ((*SF_DRAFT_PTR(_DWORD, (a2 + 24)) + 1) >> 4);
        *SF_DRAFT_PTR(_DWORD, (a2 + 16)) -= (*SF_DRAFT_PTR(_DWORD, (a2 + 16)) + 1) >> 4;
        *SF_DRAFT_PTR(_DWORD, (a2 + 24)) = v11;
    }
    result = 1;
    if ((v4 & 0x20) == 0)
    {
        v13 = *SF_DRAFT_PTR(__int16, (a1 + 28));
        if (*SF_DRAFT_PTR(sint32, (a2 + 4)) >= v13)
            return v5;
        if ((v4 & 0x80) == 0)
        {
            if ((v4 & 0x40) != 0)
            {
                v14 = *SF_DRAFT_PTR(uint16, (a2 + 36)) << 16;
                *SF_DRAFT_PTR(_DWORD, (a2 + 16)) = (*SF_DRAFT_PTR(int, (a2 + 16)) >> 1) + (sub_800EC8F4() & (v14 >> 16)) - (v14 >> 17);
                *SF_DRAFT_PTR(_DWORD, (a2 + 24)) = (*SF_DRAFT_PTR(int, (a2 + 24)) >> 1) + (sub_800EC8F4() & (v14 >> 16)) - (v14 >> 17);
                v15 = sub_800EC8F4();
                v16 = sub_800EC8F4() & (v14 >> 17);
                v17 = v14 >> 18;
                v18 = *SF_DRAFT_PTR(int, (a2 + 20)) >> ((v15 & 1) + 1);
                if (v18 < 0)
                    v18 = -v18;
                *SF_DRAFT_PTR(_DWORD, (a2 + 20)) = v18 + v16 - v17;
                *SF_DRAFT_PTR(_DWORD, (a2 + 4)) = *SF_DRAFT_PTR(__int16, (a1 + 28));
            }
            else
            {
                *SF_DRAFT_PTR(_DWORD, (a2 + 4)) = v13;
                *SF_DRAFT_PTR(_DWORD, (a2 + 16)) = 0;
                *SF_DRAFT_PTR(_DWORD, (a2 + 20)) = 0;
                *SF_DRAFT_PTR(_DWORD, (a2 + 24)) = 0;
            }
            return v5;
        }
        return 0;
    }
    return result;
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage1(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage2(sint32 input1, sint32 input2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage3(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage4(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage5(sint32 *output1, sint32 *output2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage6(sint32 *output1, sint32 input2, sint32 input3, sint32 input4, sint32 input5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage7(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, uint32 memory6, uint32 memory7, uint32 memory8, sint32 *output9, sint32 *output10, sint32 *output11);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage8(sint32 input1, sint32 input2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage9(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage10(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage11(sint32 *output1, sint32 *output2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage12(sint32 *output1);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage13(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, sint32 input6, sint32 input7, sint32 input8);

// FUNCTION_MARKER 0x800CEDA4u 0x800ceda4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800CEDA4(uint32 A0)
{
    uint16 *native_A0 = SF_DRAFT_PTR(uint16, A0);
    FUNCTION_MARKER(0x800CEDA4u, "SCUS_942.40");
    sint32 temporary_t8; /* TODO Geometry value type */
    sint32 temporary_t7; /* TODO Geometry value type */
    sint32 temporary_t6; /* TODO Geometry value type */
    sint32 temporary_t5; /* TODO Geometry value type */
    sint32 temporary_t4; /* TODO Geometry value type */
    sint32 temporary_t3; /* TODO Geometry value type */
    sint32 temporary_t2; /* TODO Geometry value type */
    sint32 temporary_t1; /* TODO Geometry value type */
    sint32 temporary_t0; /* TODO Geometry value type */
    sint32 temporary_s7; /* TODO Geometry value type */
    sint32 temporary_s6; /* TODO Geometry value type */
    sint32 temporary_s5; /* TODO Geometry value type */
    sint32 temporary_s4; /* TODO Geometry value type */
    sint32 temporary_s3; /* TODO Geometry value type */
    sint32 temporary_s2; /* TODO Geometry value type */
    sint32 temporary_s1; /* TODO Geometry value type */
    sint32 temporary_s0; /* TODO Geometry value type */
    temporary_t0 = (*SF_DRAFT_PTR(uint32, 0x8012DB98u));
    temporary_t1 = (*SF_DRAFT_PTR(uint32, 0x8012DB9Cu));
    temporary_t2 = (*SF_DRAFT_PTR(uint32, 0x8012DBA0u));
    temporary_t3 = (*SF_DRAFT_PTR(uint32, 0x8012DBA4u));
    temporary_t4 = (*SF_DRAFT_PTR(uint32, 0x8012DBA8u));
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800CEDA4_stage1(temporary_t0, temporary_t1, temporary_t2, temporary_t3, temporary_t4);
    temporary_t2 = *((_DWORD *)native_A0 + 3);
    temporary_t0 = *native_A0 | *((_DWORD *)native_A0 + 1) & 0xFFFF0000;
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800CEDA4_stage2(temporary_t0, temporary_t2);
    temporary_t2 = (__int16)native_A0[7];
    temporary_t0 = native_A0[1] | (*((_DWORD *)native_A0 + 2) << 16);
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800CEDA4_stage3(&temporary_t3, &temporary_t4, &temporary_t5, temporary_t0, temporary_t2);
    temporary_t2 = *((_DWORD *)native_A0 + 4);
    temporary_t0 = native_A0[2] | *((_DWORD *)native_A0 + 2) & 0xFFFF0000;
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800CEDA4_stage4(&temporary_t6, &temporary_t7, &temporary_t8, temporary_t0, temporary_t2);
    temporary_s0 = (temporary_t6 << 16) | (uint16)temporary_t3;
    temporary_s3 = (uint16)temporary_t5 | (temporary_t8 << 16);
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800CEDA4_stage5(&temporary_t0, &temporary_t1);
    temporary_s1 = (uint16)temporary_t0 | (temporary_t4 << 16);
    temporary_s2 = (temporary_t1 << 16) | (uint16)temporary_t7;
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800CEDA4_stage6(&temporary_s4, temporary_s0, temporary_s1, temporary_s2, temporary_s3);
    temporary_t0 = (*SF_DRAFT_PTR(uint32, 0x80130CD8u));
    temporary_t1 = (*SF_DRAFT_PTR(uint32, 0x80130CDCu));
    temporary_t2 = (*SF_DRAFT_PTR(uint32, 0x80130CE0u));
    temporary_t3 = (*SF_DRAFT_PTR(uint32, 0x80130CE4u));
    temporary_t4 = (*SF_DRAFT_PTR(uint32, 0x80130CE8u));
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800CEDA4_stage7(temporary_t0, temporary_t1, temporary_t2, temporary_t3, temporary_t4, (sf_draft_guest_address(native_A0) + 0x14), (sf_draft_guest_address(native_A0) + 0x18), (sf_draft_guest_address(native_A0) + 0x1C), &temporary_s5, &temporary_s6, &temporary_s7);
    temporary_t2 = *((_DWORD *)native_A0 + 3);
    temporary_t0 = *native_A0 | *((_DWORD *)native_A0 + 1) & 0xFFFF0000;
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800CEDA4_stage8(temporary_t0, temporary_t2);
    temporary_t2 = (__int16)native_A0[7];
    temporary_t0 = native_A0[1] | (*((_DWORD *)native_A0 + 2) << 16);
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800CEDA4_stage9(&temporary_t3, &temporary_t4, &temporary_t5, temporary_t0, temporary_t2);
    temporary_t2 = *((_DWORD *)native_A0 + 4);
    temporary_t0 = native_A0[2] | *((_DWORD *)native_A0 + 2) & 0xFFFF0000;
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800CEDA4_stage10(&temporary_t6, &temporary_t7, &temporary_t8, temporary_t0, temporary_t2);
    temporary_s0 = (temporary_t6 << 16) | (uint16)temporary_t3;
    temporary_s3 = (uint16)temporary_t5 | (temporary_t8 << 16);
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800CEDA4_stage11(&temporary_t0, &temporary_t1);
    temporary_s1 = (uint16)temporary_t0 | (temporary_t4 << 16);
    temporary_s2 = (temporary_t1 << 16) | (uint16)temporary_t7;
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800CEDA4_stage12(&temporary_s4);
    temporary_s5 = temporary_s5 + (*SF_DRAFT_PTR(uint32, 0x80130CECu));
    temporary_s6 = temporary_s6 + (*SF_DRAFT_PTR(uint32, 0x80130CF0u));
    temporary_s7 = temporary_s7 + (*SF_DRAFT_PTR(uint32, 0x80130CF4u));
    /* Geometry operation uses the project SDK bridge */
    sf_draft_geometry_800CEDA4_stage13(temporary_s0, temporary_s1, temporary_s2, temporary_s3, temporary_s4, temporary_s5, temporary_s6, temporary_s7);
}

// FUNCTION_MARKER 0x8003320Cu 0x8003320c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_8003320C(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8003320Cu, "SCUS_942.40");
    __int16 *v3;
    int v4;
    int v6;
    int v7;
    int v8;
    __int16 v9;
    int v10;
    unsigned int result;

    v3 = SF_DRAFT_PTR(__int16, r_u32((a1 + 20)));
    v4 = *v3;
    if (*SF_DRAFT_PTR(_BYTE, (a1 + 34)) == 2)
    {
        v6 = -1;
        if ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 0x1000000) != 0)
        {
            v7 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
            if (*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v7 + 24)) + 8)) > 0)
            {
                v8 = *SF_DRAFT_PTR(__int16, (v7 + 2));
                if (v8 == 666 || *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v8 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 55)
                    v6 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
            }
        }
        if (v6 < 0)
            LOWORD(v6) = sub_80032340(a1);
        *v3 = v6;
    }
    else
    {
        if (a2 && (v4 >= 0 || a2 == 2))
        {
            if (a2 == 1)
            {
                v9 = sub_800329A4(a1);
                v10 = *((_DWORD *)v3 + 1);
                *v3 = v9;
                *((_DWORD *)v3 + 1) = v10 | 8;
            }
            else if (a2 == 2)
            {
                *v3 = -1;
                (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) = 0;
            }
        }
        else if ((*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) && v4 >= 0)
        {
            if (!(uint8)sub_80031F2C(a1, *v3, 0))
                *v3 = -1;
        }
        else
        {
            *v3 = sub_80032340(a1);
        }
        if ((*SF_DRAFT_PTR(uint32, 0x80115FB8u)) == 18 || (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) == 21 && !(*SF_DRAFT_PTR(uint32, 0x8012F9B8u)))
        {
            sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 45);
        }
        else if ((*SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16))) & 0x2000000) == 0 && !(*SF_DRAFT_PTR(uint32, 0x8012F9B8u)))
        {
            if (*SF_DRAFT_PTR(__int16, r_u32((a1 + 20))) >= 0 && (uint8)sub_80031F2C(a1, *v3, 0))
            {
                sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 43);
            }
            else
            {
                *v3 = -1;
                if (a2 != 2)
                    sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 45);
                (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) = 0;
            }
        }
        sub_80031E7C();
    }
    result = *v3;
    if (result != v4)
        return sub_80031918(sf_draft_guest_address(v3));
    return result;
}

// FUNCTION_MARKER 0x8006F8C0u 0x8006f8c0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8006F8C0(sint32 a1)
{
    FUNCTION_MARKER(0x8006F8C0u, "SCUS_942.40");
    int v2;
    unsigned int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    _DWORD *v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    _DWORD *v17;
    int v18;
    _DWORD *v19;
    int result;
    int v21;

    v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    v3 = *SF_DRAFT_PTR(_DWORD, (v2 + 404));
    *SF_DRAFT_PTR(_DWORD, (v2 + 404)) = v3 & 0xFFFFFDFF;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) &= ~0x400u;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) &= ~0x800u;
    v4 = (v3 >> 9) & 1;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) &= ~0x200000u;
    v5 = (v3 >> 19) & 1;
    v6 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    v7 = (v3 >> 21) & 1;
    v8 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 408)) + 304));
    v21 = *SF_DRAFT_PTR(_DWORD, (v6 + 272));
    if (!a1 || (v9 = *SF_DRAFT_PTR(_DWORD, (a1 + 12))) == 0 || (v10 = SF_DRAFT_PTR(_DWORD, r_u32((v9 + 416)))) == 0 || (v11 = 0, *v10 != 1))
    {
        v11 = 0;
        if (v8 != -2147483647)
            v11 = v8 - v21;
    }
    if ((_BYTE)v4)
        goto LABEL_11;
    v12 = (uint8)v7;
    if (v11 >= 705)
    {
        if (!(_BYTE)v7)
            goto LABEL_16;
        v12 = (uint8)v7;
        if (!(_BYTE)v5)
        {
        LABEL_11:
            v13 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
            v14 = *SF_DRAFT_PTR(_DWORD, (v13 + 404));
            if ((v14 & 0x100000) != 0)
            {
                *SF_DRAFT_PTR(_DWORD, (v13 + 404)) = v14 | 0x400;
            }
            else
            {
                *SF_DRAFT_PTR(_DWORD, (v13 + 404)) = v14 | 0x200000;
                if (v11 >= 1297)
                    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) |= 0x200u;
            }
            goto LABEL_25;
        }
    }
    if (!v12)
    {
    LABEL_16:
        if (*SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 36)) >= -73626)
            goto LABEL_25;
    }
    v15 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    v16 = *SF_DRAFT_PTR(_DWORD, (v15 + 404));
    if ((v16 & 0x100000) != 0 || a1 && v15 && (v17 = SF_DRAFT_PTR(_DWORD, r_u32((v15 + 416)))) != 0 && *v17 == 1)
    {
        if (v11 >= 289)
            *SF_DRAFT_PTR(_DWORD, (v15 + 404)) = v16 | 0x800;
    }
    else
    {
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) |= 0x200000u;
    }
LABEL_25:
    v18 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    if ((*SF_DRAFT_PTR(_DWORD, (v18 + 404)) & 0x100000) != 0 || a1 && v18 && (v19 = SF_DRAFT_PTR(_DWORD, r_u32((v18 + 416)))) != 0 && *v19 == 1 || (result = 1, v8 == -2147483647))
    {
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)) + 304)) = v21;
        return 1;
    }
    return result;
}

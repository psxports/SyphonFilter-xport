#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);
uint32 sf_gte_read_data(uint32 index);
uint32 sub_80017DD4();
uint32 sub_80017E18();
uint32 sub_80080750();
void sub_800C78C8(void);
uint32 sub_800D85A8();

void sf_draft_missing_gte_800D5680_1(sint32 *output1, sint32 *output2, sint32 *output3);
/* TODO Resolve external dependency signatures */
uint32 sub_80017EA4();
uint32 sub_8002D224();
sint32 sub_800E4C84(sint32 mode);
uint32 sub_800EDA20();
uint32 sub_800EF304();
uint32 sub_800F5204();
sint32 sub_800F9F40(uint32 voice, sint32 left, sint32 right);

sint32 sub_800DF99C(sint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800DF99Cu, "SCUS_942.40");
    /* Guest handle stays numeric across file services */
    int *a3_view = SF_DRAFT_PTR(int, a3);
    int v5;
    int result;
    bool v7; // dc
    int v8;
    sint32 v9;
    uint32 v10;
    unsigned int v11;

    v5 = sub_800DE414(2048);
    if (!v5)
        sub_800DDC34(1, 0, 0x800139E0u, 254);
    if (!a1)
        return 1;
    v7 = sub_800DEEF4(a1, sf_draft_guest_address(&v10)) != 0;
    result = 4;
    if (!v7)
    {
        if (sub_800DF198((sint32)v10, v5, 0x800u, sf_draft_guest_address(&v11)))
            goto LABEL_14;
        v8 = *SF_DRAFT_PTR(_DWORD, (v5 + 16));
        v9 = v8 < 2049;
        if ((unsigned int)v8 < 0x800)
        {
            v8 = 2048;
            v9 = 1;
        }
        if (v9)
            goto LABEL_15;
        sub_800DE4A4(v5);
        v5 = sub_800DE414(v8);
        if (!v5)
            sub_800DDC34(1, 0, 0x800139E0u, 280);
        if (sub_800DF32C((sint32)v10) || sub_800DF198((sint32)v10, v5, v8, sf_draft_guest_address(&v11)))
        {
        LABEL_14:
            sub_800DF3B0(sf_draft_guest_address(&v10));
            return 4;
        }
        else
        {
        LABEL_15:
            *a3_view = v5;
            sub_800DF3B0(sf_draft_guest_address(&v10));
            return 0;
        }
    }
    return result;
}

uint32 sub_80039CF4(sint32 a1)
{
    FUNCTION_MARKER(0x80039CF4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v2;
    int v3;
    int *v4;
    bool v5;
    int *v6;
    int v7;
    char v9[48];
    int v10;

    v2 = 0;
    v3 = 0;
    v4 = SF_DRAFT_PTR(int, 0x8010C058u);
    do
    {
        v5 = sub_80039718(a1, (*v4), sf_draft_guest_address(v9));
        if (v5)
        {
            if (sub_800DDF84(sf_draft_guest_address(v9)))
                v5 = 0;
            v6 = &SF_DRAFT_PTR(uint32, 0x801195D8u)[v3];
            if (sub_800DE120(sf_draft_guest_address(v9), sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x801195D8u)[v3]), 128, 128, 0, 0))
                v5 = 0;
            v10 = (*SF_DRAFT_PTR(uint32, 0x80115EFCu));
            *((_BYTE *)v6 + 20) = (*SF_DRAFT_PTR(uint32, 0x80115EFCu));
            *((uint8 *)v6 + 21) = (uint8)((uint32)v10 >> 8);
            *((uint8 *)v6 + 22) = (uint8)((uint32)v10 >> 16);
            if (!v2)
                sub_8003FD24(sf_draft_guest_address(v9));
            if ((unsigned int)(v2 - 44) >= 0xF)
                v7 = 4;
            else
                v7 = 0;
            sub_800DE31C(sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x801195D8u)[v3]), v7);
        }
        v3 += 11;
        ++v2;
        ++v4;
    } while (v2 < 64);
    return v5;
}

uint32 sub_800823B0(sint32 a1, sint32 a2, sint32 a3, uint32 a4, sint32 a9, sint32 a10)
{
    FUNCTION_MARKER(0x800823B0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    _DWORD *v11;
    int *v12;
    _DWORD *v13;
    int *result;
    int v15;
    int v16;
    int *v17;

    if ((*SF_DRAFT_PTR(uint32, 0x80115C78u)))
        v11 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 3796));
    else
        v11 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 3488));
    v13 = 0;
    if (v11)
    {
        while (1)
        {
            v13 = v11;
            if (*SF_DRAFT_PTR(_DWORD, *v11) == a1)
            {
                result = 0;
                if (*(_DWORD *)(*v11 + 24) == a10)
                    break;
            }
            v11 = (_DWORD *)v11[2];
            if (!v11)
                goto LABEL_9;
        }
    }
    else
    {
    LABEL_9:
        v12 = 0;
        v15 = 0;
        v16 = 0;
        while (1)
        {
            ++v15;
            if (SF_DRAFT_PTR(uint32, 0x8012BD44u)[v16])
                break;
            v16 += 9;
            if (v15 >= 30)
                goto LABEL_12;
        }
        v12 = &SF_DRAFT_PTR(uint32, 0x8012BD28u)[v16];
        *v12 = (a1);
        v12[1] = a2;
        v12[2] = a3;
        v12[6] = a10;
        v12[4] = a9;
        v12[5] = 0;
        v12[7] = 0;
        *((_BYTE *)v12 + 12) = a4;
    LABEL_12:
        if (!v12)
            sub_800DDC34(1, 0, 0x8001236Cu, 108);
        if ((*SF_DRAFT_PTR(uint32, 0x80115C78u)))
            v17 = SF_DRAFT_PTR(int, 0x80116B3Cu);
        else
            v17 = &(*SF_DRAFT_PTR(uint32, 0x80116A08u));
        sub_800DE644(sf_draft_guest_address(v17), sf_draft_guest_address(v13), sf_draft_guest_address(v12));
        result = v12;
        if (*((_BYTE *)v12 + 12))
        {
            sub_8008294C(0);
            return sf_draft_guest_address(v12);
        }
    }
    return sf_draft_guest_address(result);
}

sint32 sub_800D2850(sint32 a1, uint32 a2)
{
    uint32 cursor = (uint32)a1 + 4u, chunk;
    sint32 min_x = 100000, min_z = 100000, min_y = 100000;
    sint32 max_x = -100000, max_z = -100000, max_y = -100000;
    sint32 x, z, y;
    sint32 *output = SF_DRAFT_PTR(sint32, a2);
    FUNCTION_MARKER(0x800D2850u, "SCUS_942.40");
    for (;;)
    {
        chunk = r_u32(cursor);
        if (chunk == 0xFFFFFFFFu)
            break;
        x = r_s16(chunk + 8u);
        z = r_s16(chunk + 10u);
        y = r_s16(chunk + 16u);
        if (x < min_x)
            min_x = x;
        if (z < min_z)
            min_z = z;
        x = r_s16(chunk + 12u);
        z = r_s16(chunk + 14u);
        if (y < min_y)
            min_y = y;
        y = r_s16(chunk + 18u);
        if (x > max_x)
            max_x = x;
        if (z > max_z)
            max_z = z;
        if (y > max_y)
            max_y = y;
        cursor += 4u;
    }
    output[0] = min_x;
    output[1] = min_y;
    output[2] = min_z;
    output[4] = max_x;
    output[5] = max_y;
    output[6] = max_z;
    return 0;
}

sint32 sub_800DB41C(uint32 a1)
{
    FUNCTION_MARKER(0x800DB41Cu, "SCUS_942.40");
    /* Unverified native draft with numeric matrix tree links */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int result;
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
    int v13;

    if (!a1_view)
        return 24;
    v3 = a1_view[8];
    if (!v3)
        return 43;
    v4 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
    if (v4)
    {
        result = sub_800DB41C((*SF_DRAFT_PTR(_DWORD, (v3 + 32))));
        if (result)
            return result;
        v5 = a1_view[8];
        if (*SF_DRAFT_PTR(_BYTE, (v5 + 44)) == 1)
            sub_800EB0D4(v4, v5, a1);
    }
    else if (*SF_DRAFT_PTR(_BYTE, (v3 + 44)) == 1)
    {
        v6 = *SF_DRAFT_PTR(_DWORD, (v3 + 4));
        v7 = *SF_DRAFT_PTR(_DWORD, (v3 + 8));
        v8 = *SF_DRAFT_PTR(_DWORD, (v3 + 12));
        *a1_view = *SF_DRAFT_PTR(_DWORD, v3);
        a1_view[1] = v6;
        a1_view[2] = v7;
        a1_view[3] = v8;
        v9 = *SF_DRAFT_PTR(_DWORD, (v3 + 20));
        v10 = *SF_DRAFT_PTR(_DWORD, (v3 + 24));
        v11 = *SF_DRAFT_PTR(_DWORD, (v3 + 28));
        a1_view[4] = *SF_DRAFT_PTR(_DWORD, (v3 + 16));
        a1_view[5] = v9;
        a1_view[6] = v10;
        a1_view[7] = v11;
    }
    *SF_DRAFT_PTR(_BYTE, (a1_view[8] + 44u)) = 0;
    v12 = *SF_DRAFT_PTR(_DWORD, (a1_view[8] + 40u));
    result = 0;
    if (v12)
    {
        while (1)
        {
            v13 = *SF_DRAFT_PTR(_DWORD, (v12 + 32));
            if (!v13)
                break;
            *SF_DRAFT_PTR(_BYTE, (v13 + 44)) = 1;
            v12 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v12 + 32)) + 36));
            result = 0;
            if (!v12)
                return result;
        }
        return 43;
    }
    return result;
}

sint32 sub_800CD230(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800CD230u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    _DWORD *v5;
    int v6;
    int result;
    uint8 *v8;
    int v9;
    uint8 *v10;
    int v11;
    int v12;
    int v13;
    unsigned int i;

    v5 = SF_DRAFT_PTR(_DWORD, sub_800CB6DC(a1, a2));
    v6 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 32));
    result = 45;
    if (v5)
    {
        v8 = (uint8 *)v5[3];
        while (1)
        {
            result = 0;
            if (*v8 >> 4 != 15)
                break;
            v9 = v8[1];
            if (v9 == a3)
            {
                result = 0;
                v5[4] = sf_draft_guest_address(v8);
                v5[5] = v9;
                return result;
            }
            v10 = v8 + 2;
            if (v9 == 252)
                return 46;
            v11 = *v10;
            v12 = v10[1];
            v8 = v10 + 2;
            v13 = 0;
            for (i = v12 | (v11 << 8); v13 < (sint32)r_u32(v6 + 4); i >>= 1)
            {
                if ((i & 1) != 0)
                {
                    if ((*v8 & 0x80) != 0)
                    {
                        if ((*v8 & 0x40) != 0)
                        {
                            v8 += 4;
                        }
                        else if ((*v8 & 0x20) != 0)
                        {
                            v8 += 6;
                        }
                        else
                        {
                            v8 += 3;
                        }
                    }
                    else
                    {
                        v8 += 2;
                    }
                    if (v9 == 1 || !v13)
                        v8 += 3;
                }
                ++v13;
            }
        }
    }
    return result;
}

sint32 sub_8003C8F0(void)
{
    FUNCTION_MARKER(0x8003C8F0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int *v1;
    int v2;

    int *v6;
    int v7;
    int *v8;
    int result;

    v1 = SF_DRAFT_PTR(int, 0x8011BBF8u);
    v2 = 0;
    sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), ((*SF_DRAFT_PTR(uint32, 0x8011BB44u))));
    sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), ((*SF_DRAFT_PTR(uint32, 0x8011BB68u))));
    sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011BBD4u))));
    do
    {
        v6 = v1;
        v1 += 6;
        ++v2;
        sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v6));
    } while (v2 < 5);
    v7 = 0;
    if (!(*SF_DRAFT_PTR(uint32, 0x8011B318u)))
        sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011B318u))));
    v8 = SF_DRAFT_PTR(int, 0x8011BB8Cu);
    do
    {
        if (!*v8)
            sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v8));
        ++v7;
        v8 += 9;
    } while (v7 < 2);
    if ((*SF_DRAFT_PTR(uint32, 0x8011B308u)) || (*SF_DRAFT_PTR(uint32, 0x8011B30Cu)) || (result = (*SF_DRAFT_PTR(uint32, 0x8011B310u))) != 0)
    {
        result = (*SF_DRAFT_PTR(uint32, 0x8011B33Cu));
        if (!(*SF_DRAFT_PTR(uint32, 0x8011B33Cu)))
            return sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011B33Cu))));
    }
    return result;
}

sint32 sub_80039778(uint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x80039778u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    __int16 *a1_view = SF_DRAFT_PTR(__int16, a1);
    int v5;
    int v6;
    int v7;
    int result;
    __int16 v9[8];

    v5 = a3;
    v6 = a2 - 1;
    a1_view[1] = 0;
    *a1_view = 0;
    *((_DWORD *)a1_view + 2) = a3;
    *((_DWORD *)a1_view + 1) = a2;
    if (a2)
    {
        do
        {
            v7 = v5;
            v5 += 44;
            sub_800DE2DC(v7, sf_draft_guest_address(v9));
            --v6;
            *a1_view += v9[0] - (*SF_DRAFT_PTR(uint16, 0x8012C7B0u));
            a1_view[1] += v9[1] - (*SF_DRAFT_PTR(uint16, 0x8012C7B2u));
        } while (v6 != -1);
    }
    result = a1_view[1] / a2;
    *a1_view /= a2;
    a1_view[1] = result;
    return result;
}

sint32 sub_800BF158(sint32 a1)
{
    uint32 descriptor = (uint32)a1, bank, slot, value, index;
    sint16 sequence;
    FUNCTION_MARKER(0x800BF158u, "SCUS_942.40");
    bank = sub_800C2EE0((sint32)r_u32(descriptor + 8u));
    if (bank == 0u)
        return 0;
    value = r_u32(bank + 8u);
    sequence = (sint16)sub_800C2FF4();
    if (sequence == -1)
        return 0;
    slot = 0x8012FF98u + 4u * (uint32)(sint32)sequence;
    w_u32(slot, descriptor);
    /* TODO Missing SDK F5204 remains a fail-fast boundary */
    if (r_s16(descriptor + 4u) == 0)
    {
        value = sub_800F5204(descriptor + 16u, (sint16)value);
        w_u16(r_u32(slot) + 12u, (uint16)value);
        sub_800F2C64(r_s16(r_u32(slot) + 12u), 0, 0x800C4B1Cu);
    }
    else
    {
        value = sub_800F2C94(descriptor + 16u, (sint16)value, r_s16(descriptor + 6u));
        w_u16(r_u32(slot) + 12u, (uint16)value);
        if (r_s16(descriptor + 6u) > 0)
        {
            index = 0u;
            do
            {
                sub_800F2C64(r_s16(r_u32(slot) + 12u), (sint16)index, 0x800C4B1Cu);
                ++index;
            } while ((sint32)index < r_s16(descriptor + 6u));
        }
    }
    return 1;
}

sint32 sub_800CAED0(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800CAED0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v4;
    int v5;
    int v6;
    int v7;
    int v9;
    int v10;
    int *v11;
    int v12;
    int v13;

    v4 = SF_DRAFT_PTR(uint8, (uint32)a1)[9];
    v5 = 2 * v4;
    v6 = SF_DRAFT_PTR(uint8, (uint32)a1)[10];
    v7 = 0;
    if (SF_DRAFT_PTR(uint32, 0x8013D560u)[10 * v4])
        return 0;
    v9 = 2 * v4;
    if (v5 < v5 + 2)
    {
        v7 = (sint32)(4u << (v6 & 31));
        v10 = v5 + 2;
        v11 = &SF_DRAFT_PTR(uint32, 0x8013D560u)[10 * v4];
        v12 = 10 * v4;
        do
        {
            SF_DRAFT_PTR(uint32, 0x8013D560u)[v12] = v6;
            SF_DRAFT_PTR(uint32, 0x8013D564u)[v12] = sub_800DE414((sint32)(4u << (v6 & 31)));
            sub_800E9C44(0, 0, sf_draft_guest_address(v11));
            v11 += 5;
            ++v9;
            v12 += 5;
        } while (v9 < v10);
    }
    v13 = a2 << 6;
    if (a2 > 0)
    {
        w_u32(0x801168BCu, 0x801550E0u);
        w_u32(SF_DRAFT_GP + 0xC50u, 0x801550E0u + (uint32)v13);
        w_u32(SF_DRAFT_GP + 0x83Cu, (uint32)v13);
        w_u32(SF_DRAFT_GP + 0x840u, (uint32)v13);
        w_u32(SF_DRAFT_GP + 0x848u, 0x801550E0u + 2u * (uint32)v13);
    }
    return 2 * v7;
}

sint32 sub_800D5680(uint32 record_base)
{
    FUNCTION_MARKER(0x800D5680u, "SCUS_942.40");
    sint32 y0 = (sint32)sf_gte_read_data(12) >> 16;
    sint32 y1 = (sint32)sf_gte_read_data(13) >> 16;
    sint32 y2 = (sint32)sf_gte_read_data(14) >> 16;
    sint32 maximum = y0, minimum = y0;
    uint32 packed0, packed1;
    sint32 flags;
    if (maximum < y1)
        maximum = y1;
    if (minimum > y1)
        minimum = y1;
    if (maximum < y2)
        maximum = y2;
    if (minimum > y2)
        minimum = y2;
    if (maximum < -24 || minimum >= 25)
        return 0;
    flags = r_s32(record_base + 0x3B0u);
    packed0 = r_u32(record_base + 0x3B4u);
    packed1 = r_u32(record_base + 0x3B8u);
    y0 = r_s16(record_base + ((packed0 >> 22) & 0x3FCu) + 4u);
    y1 = r_s16(record_base + ((packed1 >> 14) & 0x3FCu) + 4u);
    y2 = r_s16(record_base + ((packed1 >> 22) & 0x3FCu) + 4u);
    maximum = minimum = y0;
    if (maximum < y1)
        maximum = y1;
    if (minimum > y1)
        minimum = y1;
    if (maximum < y2)
        maximum = y2;
    if (minimum > y2)
        minimum = y2;
    if (flags < 0)
    {
        sint32 y3 = r_s16(record_base + ((packed1 << 2) & 0x3FCu) + 4u);
        if (maximum < y3)
            maximum = y3;
        if (minimum > y3)
            minimum = y3;
    }
    return maximum - minimum >= 206;
}

sint32 sub_80019E18(uint32 a1)
{
    FUNCTION_MARKER(0x80019E18u, "SCUS_942.40");
    uint32 position[3];
    sint32 angles[4], side[3];
    position[0] = r_u32(r_u32(a1 + 12u) + 20u);
    position[1] = 0u - r_u32(r_u32(a1 + 12u) + 24u);
    position[2] = r_u32(r_u32(a1 + 12u) + 28u);
    sub_80019A3C(a1 + 16u, sf_draft_guest_address(position), 1);
    sub_800DCB6C(r_u32(a1 + 12u), 0, a1 + 112u);
    sub_800E0C00(a1 + 112u, sf_draft_guest_address(angles));
    sub_800E0D14(a1 + 112u, sf_draft_guest_address(angles + 1));
    angles[2] = 0;
    sub_800DCB1C(r_u32(a1 + 12u), 0, sf_draft_guest_address(side));
    if (side[1] < 0)
    {
        angles[0] = (sint32)((uint32)(angles[0] < 0 ? -2048 : 2048) - (uint32)angles[0]);
        angles[1] = (sint32)((uint32)angles[1] + (angles[1] < 0 ? 2048u : (uint32)-2048));
    }
    return sub_80019A3C(a1 + 64u, sf_draft_guest_address(angles), 1);
}

void sf_native_cancel_request(void);

sint32 sub_800D87E0(void)
{
    FUNCTION_MARKER(0x800D87E0u, "SCUS_942.40");
    uint32 start = r_u32(0x801165A8u);
    uint32 tick = r_u32(0x80116598u) + 1u;
    uint32 timer;
    sint32 result;
    w_u32(0x80116598u, tick);
    if (start && !r_u8(0x801165BAu) && start + 1u < tick)
    {
        uint32 cancellation = r_u32(0x801165B4u);
        if (cancellation)
            sf_draft_call(cancellation, 0u, NULL);
        w_u8(0x801165BAu, 1u);
        sf_native_cancel_request();
    }
    result = r_u8(0x80116570u);
    if (result == 1)
    {
        result = (sint32)(r_u32(0x8011689Cu) + 1u);
        w_u32(0x8011689Cu, (uint32)result);
    }
    timer = r_u32(0x801168A0u);
    if (timer)
    {
        result = 1;
        if (r_u8(0x801168A4u) != 1u)
        {
            w_u8(0x801168A4u, 1u);
            do
            {
                uint32 count = r_u32(timer + 8u);
                uint32 next = r_u32(timer + 12u);
                result = (sint32)(count - 1u);
                if (count != 1u)
                    w_u32(timer + 8u, (uint32)result);
                else
                {
                    uint32 callback = r_u32(timer);
                    w_u32(timer + 8u, r_u32(timer + 4u));
                    result = (sint32)sf_draft_call(callback, 0u, NULL);
                }
                timer = next;
            } while (timer);
            w_u8(0x801168A4u, 0u);
        }
    }
    return result;
}

sint32 sub_800D8CDC(uint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    uint32 object, model;
    uint32 *slot;
    FUNCTION_MARKER(0x800D8CDCu, "SCUS_942.40");
    if (a1 == 0u)
        return 1;
    slot = SF_DRAFT_PTR(uint32, (uint32)a4);
    object = sub_800DE414(28);
    *slot = object;
    model = sub_800D8B9C(a1, (sint32)object, a3);
    w_u32(*slot + 16u, model);
    if (((uint32)a3 & 0x1000000u) == 0u)
        sub_800D8ED0(model, a1);
    w_u32(model + 32u, a1);
    w_u8(*slot + 8u, 0u);
    w_u8(*slot + 9u, 64u);
    w_u8(*slot + 10u, 0u);
    w_u8(*slot + 11u, 0u);
    w_u32(*slot + 12u, (uint32)a2);
    w_u32(*slot, 0u);
    w_u32(*slot + 4u, 0u);
    w_u16(*slot + 20u, 0u);
    w_u32(*slot + 24u, 0u);
    return 0;
}

sint32 sub_800357CC(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800357CCu, "SCUS_942.40");
    uint32 state = (uint32)a1;
    uint32 pad_word = (uint32)a2 + 4u;
    uint32 first_before = r_u8(state + 21u);
    sint32 gate = r_s32(0x80115F50u);
    uint32 second_before = r_u8(state + 22u);
    uint32 bit, word, first_word, second_bit;
    if (gate >= 0)
    {
        w_u8(state + 21u, 0);
        w_u8(state + 22u, 0);
    }
    else
    {
        bit = r_u32(state + 44u) + 8u * (pad_word & 3u);
        word = (pad_word & ~3u) + 4u * (uint32)((sint32)bit >> 5);
        first_word = r_u32(word);
        second_bit = r_u32(state + 40u);
        w_u8(state + 21u, (first_word & (1u << (bit & 31u))) != 0u);
        second_bit += 8u * (pad_word & 3u);
        word = (pad_word & ~3u) + 4u * (uint32)((sint32)second_bit >> 5);
        w_u8(state + 22u, (r_u32(word) & (1u << (second_bit & 31u))) != 0u);
    }
    if (r_u8(state + 21u))
    {
        if (!r_u8(state + 22u) || !first_before)
        {
            w_u32(state + 24u, 1u);
            return 1;
        }
        if (second_before)
            return 2;
        w_u32(state + 24u, 2u);
        return 2;
    }
    if (r_u8(state + 22u))
        w_u32(state + 24u, 2u);
    else
        w_u32(state + 24u, 0u);
    return 2;
}

sint32 sub_8003A2A8(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8003A2A8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    int v2;
    int v3;
    int result;

    if ((unsigned int)*(uint8 *)(a1 + 34) - 1 < 2 && (v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 8)), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 16)) + 40)) & 0x400000) != 0) && (*SF_DRAFT_PTR(_BYTE, (v2 + 8)) & 0x10) == 0 && *SF_DRAFT_PTR(_DWORD, (a1 + 12)))
    {
        *a2_view = *SF_DRAFT_PTR(_DWORD, (**(_DWORD **)(v2 + 24) + 20));
        a2_view[1] = *SF_DRAFT_PTR(_DWORD, (**(_DWORD **)(*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24) + 24));
        v3 = *SF_DRAFT_PTR(_DWORD, (**(_DWORD **)(*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24) + 28));
        result = (0u - a2_view[1]) - 8;
    }
    else
    {
        *a2_view = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 20));
        a2_view[1] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 24));
        v3 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 28));
        result = (0u - a2_view[1]);
    }
    a2_view[1] = result;
    a2_view[2] = v3;
    return result;
}

sint32 sub_800DEB50(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800DEB50u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v5;
    _BYTE *v6;

    int v8;
    int i;
    int v10;
    int v11;
    bool v12; // dc
    int v13;
    char v15[16];

    if (!*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2484)))
        return sub_800EF304(a1, a2);
    v5 = sub_800EC8C4(a2, 92);
    if (v5)
        sub_800EC894(sf_draft_guest_address(v15), v5 + 1);
    v6 = SF_DRAFT_PTR(uint8, sub_800EC8B4(sf_draft_guest_address(v15), 59));
    v8 = 0;
    if (v6)
        *v6 = 0;
    for (i = 16;; i += 24)
    {
        v10 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2484)) + i;
        if (!sub_800EC884(v10, sf_draft_guest_address(v15)))
            break;
        if (++v8 >= 16)
            return sub_800EF304(a1, a2);
    }
    sub_800EDA20(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2484)) + 8)) + *SF_DRAFT_PTR(_DWORD, (v10 + 16)), a1);
    v11 = *SF_DRAFT_PTR(_DWORD, (v10 + 20));
    v12 = v11 != 0;
    v13 = v11 << 11;
    if (!v12)
        return 0;
    *SF_DRAFT_PTR(_DWORD, (a1 + 4)) = v13;
    return a1;
}

sint32 sub_800C30EC(sint32 a1, sint16 a2, sint16 a3)
{
    FUNCTION_MARKER(0x800C30ECu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v3;
    int result;
    int v6;
    __int16 v7;
    int v8;
    __int16 v9;
    __int16 v10;

    v3 = 0;
    result = *SF_DRAFT_PTR(char, (a1 + 16));
    if (result > 0)
    {
        v6 = 0;
        do
        {
            v7 = sub_800C3470((*SF_DRAFT_PTR(_DWORD, (a1 + 20))), v6 >> 16);
            sub_800C31E8(r_u32(0x801311B0u + 4u * r_u8(a1 + 2u)), r_u8(a1 + 5u), (sint16)(r_u8(a1 + 6u) + v3), a2, a3, sf_draft_guest_address(&v9), sf_draft_guest_address(&v10));
            sub_800F9F40(v7, v9, v10);
            ++v3;
            v8 = *SF_DRAFT_PTR(char, (a1 + 16));
            result = (__int16)v3 < v8;
            v6 = v3 << 16;
        } while ((__int16)v3 < v8);
    }
    return result;
}

sint32 sub_80094888(void)
{
    FUNCTION_MARKER(0x80094888u, "SCUS_942.40");
    sint16 rectangle[4] = {768, 160, 16, 32};
    uint32 node, count = 0, packet = 0x8012B8A8u;
    sub_800E52AC(sf_draft_guest_address(rectangle), 0x8013C190u);
    node = r_u32(0x80116AE8u);
    while (node)
    {
        uint32 next = r_u32(node + 8u);
        if (count < 6u)
        {
            uint32 object = r_u32(node);
            if ((uint8)sub_80094668((sint32)object, (sint32)packet, 4))
            {
                packet += 192u;
                ++count;
            }
        }
        sub_800DE6E0(0x80116AE8u, node);
        node = next;
    }
    if (count >= 6u)
        return (sint32)(count << 1);
    packet = 0x8012B8A8u + 192u * count;
    do
    {
        sub_80094820((sint32)packet);
        ++count;
        packet += 192u;
    } while (count < 6u);
    return 0;
}

void sub_80017ED8(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80017ED8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v3;
    int v5;
    bool v6; // dc
    int v7;
    void *v8;

    v3 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3380));
    if (v3)
    {
        v5 = *SF_DRAFT_PTR(_DWORD, (v3 + 24));
        if ((v5 & (1 << a1)) == 0)
        {
            *SF_DRAFT_PTR(_DWORD, (v3 + 24)) = v5 | (1 << a1);
            v6 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3744)) == (*SF_DRAFT_PTR(uint32, 0x80116A88u));
            *SF_DRAFT_PTR(_DWORD, (v3 + 28)) |= 1 << a1;
            if (!v6)
            {
                if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3625)))
                    sub_80017EA4();
                *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3625)) = 0;
                if (a2 == -1)
                    v7 = 0xFFFF;
                else
                    v7 = (uint16)sub_8002D224();
                if (v7 == 0xFFFF)
                {
                    if ((*SF_DRAFT_PTR(uint8, 0x80116944u)))
                    {
                        *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3625)) = 1;
                        v8 = sub_80017E18;
                    }
                    else
                    {
                        v8 = sub_80017DD4;
                    }
                    sub_80016834(sf_draft_guest_address(v8), 1, 0);
                }
                else
                {
                    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3625)) = 1;
                }
                *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3744)) = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
            }
        }
    }
}

sint32 sub_80085D04(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80085D04u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _BYTE *a1_view = SF_DRAFT_PTR(_BYTE, a1);
    uint16 v3;
    int result;
    int *v5;
    int *v6;
    unsigned int v7;
    int v8;
    int v9;

    v3 = sub_8008582C(6u, sf_draft_guest_address(a1_view), -1, 0);
    result = v3;
    if (v3 != 0xFFFF)
    {
        v5 = SF_DRAFT_PTR(int, sub_80083584(v3));
        v6 = v5;
        v5[2] = a2 ? (*SF_DRAFT_PTR(uint32, 0x801169A4u)) + a2 : (*SF_DRAFT_PTR(uint32, 0x801169A4u)) + 24 + 2 * *((uint16 *)v5 + 6);
        v7 = *((uint8 *)v5 + 19);
        result = v3;
        if (v7 >= 2)
        {
            v8 = 0;
            if (*((_WORD *)v6 + 6))
            {
                v9 = 0;
                do
                {
                    ++v8;
                    *(_WORD *)(v9 + *v6 + 6) -= 8 * (v7 - 1);
                    v9 += 44;
                } while (v8 < *((uint16 *)v6 + 6));
            }
            return v3;
        }
    }
    return result;
}

uint32 sub_8003BD80(void)
{
    FUNCTION_MARKER(0x8003BD80u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v1;
    unsigned int v2;
    int v3;
    int *v4;
    int *v5;
    sint32 result;

    v1 = 5;
    v2 = (*SF_DRAFT_PTR(uint32, 0x801169A4u)) % 6u;
    if ((*SF_DRAFT_PTR(uint32, 0x801169A4u)) % 6u)
        v1 = v2 - 1;
    v3 = 0;
    v4 = SF_DRAFT_PTR(int, 0x8011BA0Cu);
    v5 = SF_DRAFT_PTR(int, 0x8011BB2Cu);
    do
    {
        if (v2 == v3 && *v5 >= 3686)
        {
            if (!*v4)
            {
                sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v4));
                v4 += 12;
                goto LABEL_12;
            }
        }
        else if (v3 != v1)
        {
            if (*v4)
                sub_800C7BF8((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v4));
        }
        v4 += 12;
    LABEL_12:
        result = ++v3 < 6;
        ++v5;
    } while (v3 < 6);
    return result;
}

sint32 sub_80040FDC(sint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x80040FDCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    _DWORD *v6;
    int v7;
    int v9;
    _BYTE *v10;

    char v12;

    v6 = SF_DRAFT_PTR(_DWORD, a1);
    v7 = 0;
    v9 = a3 & 0xFFFFFF | 0x40000000;
    if (a2 > 0)
    {
        v10 = SF_DRAFT_PTR(_BYTE, (a1 + 15));
        do
        {
            sub_800C8148(sf_draft_guest_address(v6), v9, 67109888, 67109888);
            if (a4)
                v12 = *v10 | 2;
            else
                v12 = *v10 & 0xFD;
            *v10 = (v12);
            if (!*v6)
                sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v6));
            ++v7;
            v10 += 24;
            v6 += 6;
        } while (v7 < a2);
    }
    return a1;
}

sint32 sub_80082ED4(sint32 a1)
{
    FUNCTION_MARKER(0x80082ED4u, "SCUS_942.40");
    uint32 node = r_u32(0x80115C68u + (r_u32(0x80115C78u) ? 0xED4u : 0xDA0u));
    uint32 result = r_u32(0x80115C68u + 0x434u);
    if (result)
    {
        uint32 object = r_u32(result);
        result = r_u32(object + 24u);
        if (result == (uint32)a1)
        {
            result = 0x80152D58u;
            if (r_u32(object + 16u) != result)
            {
                w_u32(object + 16u, 0x80080750u);
                result = 0xFFFFFFFFu;
                w_u32(object + 28u, result);
                w_u32(0x80115C68u + 0x434u, 0);
            }
        }
    }
    while (node)
    {
        uint32 object = r_u32(node);
        uint32 next = r_u32(node + 8u);
        result = r_u32(object + 24u);
        if (result == (uint32)a1)
        {
            uint32 head = r_u32(0x80115C78u) ? 0x80116B3Cu : 0x80116A08u;
            result = sub_800DE6E0(head, node);
            w_u32(object + 28u, 0xFFFFFFFFu);
        }
        node = next;
    }
    return (sint32)result;
}

sint32 sub_80059108(sint32 a1)
{
    FUNCTION_MARKER(0x80059108u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v1;
    int v2;
    int result;
    int v4;
    int v5;

    v1 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
    v2 = 0;
    if (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 8)) != 2)
        return v2;
    result = 0;
    if (!*SF_DRAFT_PTR(_BYTE, (v1 + 83)))
    {
        result = 0;
        if (!*SF_DRAFT_PTR(_BYTE, (v1 + 65)))
        {
            v4 = *SF_DRAFT_PTR(__int16, (a1 + 2));
            if (v4 == 666 || (result = 0, *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v4 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 92))
            {
                result = 0;
                if ((*SF_DRAFT_PTR(_DWORD, (v1 + 32)) & 0x10000) == 0)
                {
                    sub_80028F3C(v4, 11);
                    v2 = 1;
                    v5 = *SF_DRAFT_PTR(_DWORD, (v1 + 32));
                    *SF_DRAFT_PTR(_BYTE, (v1 + 83)) = 100;
                    *SF_DRAFT_PTR(_DWORD, (v1 + 32)) = v5 | 0x10000;
                    return v2;
                }
            }
        }
    }
    return result;
}

sint32 sub_80025C04(void)
{
    FUNCTION_MARKER(0x80025C04u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v1;
    int result;
    int v3;
    int v4;

    v1 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    result = **(_DWORD **)(v1 + 16) & 0x100;
    if (result)
    {
        sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), 70);
        result = 2;
        if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3628)) == 2)
        {
            v3 = *SF_DRAFT_PTR(__int16, (v1 + 2));
            if (v3 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            {
                result = 14;
                if ((*SF_DRAFT_PTR(uint32, 0x80115FB8u)) != 14)
                LABEL_8:
                    result = sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), 21);
            }
            else
            {
                v4 = *(uint8 *)(76 * v3 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36);
                result = 14;
                if (!v4 || v4 != 14)
                    goto LABEL_8;
            }
        }
    }
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3628)) = 0;
    return result;
}

sint32 sub_800937DC(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800937DCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    char *a2_view = SF_DRAFT_PTR(char, a2);
    int v2;
    __int16 *v3;
    int v4;
    int v5;
    int v6;
    __int16 v7;
    bool v8; // dc
    __int16 v9;
    int v10;
    int v11; // kr00_4
    int v12; // kr04_4
    int v13;
    char v14;
    int result;

    v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
    if ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 16)) + 40)) & 0x400000) == 0)
        return 0;
    v3 = SF_DRAFT_PTR(__int16, *(__int16 **)(v2 + 28));
    v4 = v3[3];
    v5 = v3[4];
    v6 = v3[2];
    if (v4 < v5)
    {
        if (v6 < v5)
        {
        LABEL_6:
            v7 = v3[3];
            v8 = v7 >= v3[4];
            v9 = v3[4];
            if (!v8)
                v7 = v9;
            v10 = v7;
            goto LABEL_10;
        }
    }
    else if (v6 < v4)
    {
        goto LABEL_6;
    }
    v10 = v3[2];
LABEL_10:
    v11 = v10;
    v12 = v10;
    v13 = v10 / 16;
    if (v12 / 16 < 256 && v13 <= 0)
    {
        v14 = 0;
    }
    else
    {
        v14 = -1;
        if (v11 / 16 < 256)
            v14 = v13;
    }
    result = 1;
    a2_view[2] = v14;
    a2_view[1] = v14;
    *a2_view = v14;
    return result;
}

sint32 sub_8002FB1C(void)
{
    FUNCTION_MARKER(0x8002FB1Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;

    sub_80018014(0x8013C730u, 0, 0, 0, 827, 0x80115E84u, 2, 1000, 0x8010B790u, 0x8010B898u, 0, 0);
    sub_80018964(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8013C730u))), ((*SF_DRAFT_PTR(uint32, 0x80115D84u))));
    (*SF_DRAFT_PTR(uint32, 0x8013D44Cu)) = 137;
    (*SF_DRAFT_PTR(uint8, 0x8013D470u)) = 1;
    sub_80018994(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8013C730u))), 1, 8, 2);
    (*SF_DRAFT_PTR(uint32, 0x8013D44Cu)) = 827;
    (*SF_DRAFT_PTR(uint8, 0x8013D470u)) = 1;
    sub_80018994(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8013C730u))), 1, 8, 3);
    result = 1;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 564)) = 827;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 568)) = 827;
    return result;
}

sint32 sub_80025D04(uint32 a1)
{
    FUNCTION_MARKER(0x80025D04u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;
    int v3;
    int v4;
    int v5;

    result = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
    if (a1 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v3 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        v4 = **(_DWORD **)(v3 + 16);
        v5 = 20;
        if ((v4 & 2) != 0)
        {
            v5 = 5;
        }
        else if ((v4 & 4) == 0 && (v4 & 8) != 0)
        {
            v5 = 10;
        }
        if ((**(_DWORD **)(v3 + 16) & 0x100000) != 0)
            v5 += 3;
        result = 1;
        if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3628)) == 1)
        {
            sub_800C8A9C(0x80025C04u, v5, 0);
            result = 2;
        }
        else
        {
            if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3628)))
                return result;
            sub_800C8A9C(0x80025C04u, v5, 0);
            result = 3;
        }
        *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3628)) = result;
    }
    return result;
}

sint32 sub_80035B24(sint32 a1)
{
    FUNCTION_MARKER(0x80035B24u, "SCUS_942.40");
    uint32 state = (uint32)a1;
    uint32 active = r_u8(state + 368u);
    uint32 table = r_u32(state + 96u);
    uint32 row, record, countdown, result;
    if (active == 1u)
    {
        w_u8(state + 368u, 0);
        record = table;
        for (row = 0; row < 4u; ++row, record += 28u)
        {
            if (r_u32(record + 8u) || r_u32(record + 12u) || r_u32(record + 16u))
            {
                w_u8(state + 368u, 1);
                break;
            }
        }
    }
    if ((uint8)sub_80035524())
    {
        record = table;
        for (row = 0; row < 4u; ++row, record += 28u)
        {
            w_u32(record + 8u, 0);
            w_u32(record + 12u, 0);
            w_u32(record + 16u, 0);
        }
        w_u32(state + 24u, 0);
    }
    countdown = r_u32(state + 364u);
    result = countdown - 1u;
    if ((sint32)countdown > 0)
        w_u32(state + 364u, result);
    return (sint32)result;
}

sint32 sub_800D85BC(sint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800D85BCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v4;
    int v5;

    switch (a1)
    {
        case 0:
            if (!(*SF_DRAFT_PTR(uint8, SF_DRAFT_GP + 3108u)))
                break;
            if ((uint8)a2)
                SF_DRAFT_PTR(uint8, 0x80116888u)[a1] = 1;
            else
                SF_DRAFT_PTR(uint8, 0x80116888u)[a1] = 0;
            goto LABEL_8;
        case 1:
            v4 = (uint8)(*SF_DRAFT_PTR(uint8, SF_DRAFT_GP + 3108u));
            if (!(*SF_DRAFT_PTR(uint8, SF_DRAFT_GP + 3108u)))
                goto LABEL_13;
            SF_DRAFT_PTR(uint8, 0x80116888u)[a1] = a2;
        LABEL_8:
            sub_800C8A9C(0x800D85A8u, (uint8)a3, a1);
            break;
        case 2:
            goto LABEL_11;
        case 3:
            (*SF_DRAFT_PTR(uint8, SF_DRAFT_GP + 3108u)) = 1;
            break;
        case 4:
            (*SF_DRAFT_PTR(uint8, SF_DRAFT_GP + 3108u)) = 0;
        LABEL_11:
            (*SF_DRAFT_PTR(uint8, SF_DRAFT_GP + 3104u)) = 0;
            (*SF_DRAFT_PTR(uint8, SF_DRAFT_GP + 3105u)) = 0;
            break;
        default:
            break;
    }
    v4 = (uint8)(*SF_DRAFT_PTR(uint8, SF_DRAFT_GP + 3108u));
LABEL_13:
    v5 = 6;
    if (v4)
        return 7;
    return v5;
}

sint32 sub_80046468(uint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x80046468u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v5;
    int v6;
    int v7;
    int v8;
    bool v9; // dc
    unsigned int v10;
    int v11;
    int v12;
    int result;
    int v14;

    v5 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v6 = *SF_DRAFT_PTR(__int16, (v5 + 2));
    if (v6 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v12 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 848));
    }
    else
    {
        v7 = 76 * v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        v8 = *(uint8 *)(v7 + 36);
        v9 = v8 != 0;
        v10 = v8 - 6;
        if (v9)
            goto LABEL_8;
        v11 = *SF_DRAFT_PTR(_DWORD, (v7 + 36)) & 0x3000;
        if (v11 == 4096)
            v12 = 19;
        else
            v12 = v11 == 0x2000 ? 0x14 : 0;
    }
    v10 = v12 - 6;
LABEL_8:
    result = v10 < 2;
    if (result)
    {
        v9 = a3 != 0;
        v14 = 14;
        if (v9)
            return result;
    }
    else
    {
        v14 = 19;
    }
    return sub_8006BC98(1, v14, v5, 0);
}

sint32 sub_80028F3C(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80028F3Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v3;
    int result;
    unsigned int v5;
    int v6;

    v3 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    result = *SF_DRAFT_PTR(_DWORD, (v3 + 16));
    if (a2)
    {
        v5 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2508));
        if (v5 && *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2504)) == *SF_DRAFT_PTR(__int16, (v3 + 2)))
        {
            v6 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2512));
            result = v5 < (*SF_DRAFT_PTR(uint32, 0x801169A4u)) - v6;
            if (v5 < (*SF_DRAFT_PTR(uint32, 0x801169A4u)) - v6)
            {
                *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2508)) = 0;
                *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2512)) = 0;
            }
        }
        else
        {
            result = (uint8)sub_80028F04(r_u32(result + 12), a2);
            if (result)
            {
                result = (uint8)sub_800DE5A0(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80115E40u))), 0, v3);
                if (!result)
                    return sub_800DE5E0(0x80115E40u, v3);
            }
        }
    }
    return result;
}

sint32 sub_800DDF84(sint32 a1)
{
    FUNCTION_MARKER(0x800DDF84u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;
    __int16 v3[4];
    __int16 v4[4];

    sub_800E5000(0);
    result = 19;
    if (a1 != -12)
    {
        v3[0] = *SF_DRAFT_PTR(_WORD, (a1 + 16));
        v3[1] = *SF_DRAFT_PTR(_WORD, (a1 + 18));
        v3[2] = *SF_DRAFT_PTR(_WORD, (a1 + 20));
        v3[3] = *SF_DRAFT_PTR(_WORD, (a1 + 22));
        sub_800E52AC(sf_draft_guest_address(v3), *SF_DRAFT_PTR(_DWORD, (a1 + 24)));
        if (((*SF_DRAFT_PTR(_DWORD, (a1 + 12)) >> 3) & 1) != 0)
        {
            v4[0] = *SF_DRAFT_PTR(_WORD, (a1 + 28));
            v4[1] = *SF_DRAFT_PTR(_WORD, (a1 + 30));
            v4[2] = *SF_DRAFT_PTR(_WORD, (a1 + 32));
            v4[3] = *SF_DRAFT_PTR(_WORD, (a1 + 34));
            sub_800E52AC(sf_draft_guest_address(v4), *SF_DRAFT_PTR(_DWORD, (a1 + 36)));
        }
        *SF_DRAFT_PTR(_BYTE, (a1 + 9)) = 1;
        return 0;
    }
    return result;
}

sint32 sub_800E1480(sint32 a1, sint32 a2, sint32 a3, uint32 a4, uint32 a9, uint32 a10)
{
    FUNCTION_MARKER(0x800E1480u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a9_view = SF_DRAFT_PTR(int, a9);
    _DWORD *a10_view = SF_DRAFT_PTR(_DWORD, a10);
    int v10;
    int v11;
    int result;

    v10 = a2 - a1;
    if (a2 - a1 < 2049)
    {
        v11 = a4;
        if (v10 >= -2048)
            goto LABEL_6;
        v10 += 4096;
    }
    else
    {
        v10 -= 4096;
    }
    v11 = a4;
LABEL_6:
    if (v11 != 1)
    {
        if (a3 < 0)
            a3 = -a3;
        if (v10 < 0)
        {
            if (-v10 >= a3)
            {
                *a9_view = -a3;
                goto LABEL_16;
            }
        }
        else if (v10 >= a3)
        {
            *a9_view = a3;
            goto LABEL_16;
        }
        *a9_view = v10;
        goto LABEL_16;
    }
    *a9_view = sub_800C6D4C(v10, a3);
LABEL_16:
    result = 0;
    *a10_view = v10 - *a9_view;
    return result;
}

sint32 sub_800848D4(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800848D4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *v2;
    int v3;
    _DWORD *v4;
    int result;

    v2 = (_DWORD *)(a1_view);
    v3 = a2 - 1;
    if (a2)
    {
        v4 = (_DWORD *)(a1_view + 10);
        do
        {
            *v2 = (0x1000000);
            *((_WORD *)v4 - 15) = 8;
            *((_WORD *)v4 - 14) = 13;
            *((_WORD *)v4 - 12) = 768;
            *((_WORD *)v4 - 8) = 0;
            *((_WORD *)v4 - 7) = 0;
            *((_WORD *)v4 - 11) = 483;
            *((_BYTE *)v4 - 20) = 0;
            *((_BYTE *)v4 - 19) = 0;
            *((_BYTE *)v4 - 18) = 0;
            *(v4 - 2) = 0;
            *((_WORD *)v4 - 6) = 4096;
            *((_WORD *)v4 - 5) = 4096;
            *(v4 - 1) = 0;
            *v4 = 0;
            sub_800DE31C(sf_draft_guest_address(v2), 1);
            v4 += 11;
            --v3;
            result = -1;
            v2 += 11;
        } while (v3 != -1);
    }
    return result;
}

uint32 sub_8003B030()
{
    FUNCTION_MARKER(0x8003B030u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v0;
    int *v1;
    int v2;
    int *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    sint32 result;

    v0 = 1;
    v1 = &(*SF_DRAFT_PTR(uint32, 0x8010C368u));
    do
    {
        if (*v1 > 0)
            *v1 = (1);
        ++v0;
        ++v1;
    } while (v0 < 8);
    sub_80044848(0);
    sub_8003B1FC();
    sub_8003B1FC();
    v2 = 0;
    v3 = &(*SF_DRAFT_PTR(uint32, 0x8011B874u));
    v4 = 0;
    do
    {
        v3[5] = 67109888;
        v3 += 6;
        SF_DRAFT_PTR(uint32, 0x8011B884u)[v4] = 67109888;
        ++v2;
        v4 += 6;
    } while (v2 < 6);
    v5 = 0;
    v6 = 0;
    (*SF_DRAFT_PTR(uint32, 0x8011B4D4u)) = SF_DRAFT_PTR(uint32, 0x8011B4B0u)[0];
    (*SF_DRAFT_PTR(uint32, 0x8011B4DCu)) = SF_DRAFT_PTR(uint32, 0x8011B4B8u)[0];
    do
    {
        v7 = SF_DRAFT_PTR(uint32, 0x8011B4B8u)[v6];
        ++v5;
        SF_DRAFT_PTR(uint32, 0x8011B4B4u)[v6] = SF_DRAFT_PTR(uint32, 0x8011B4B0u)[v6];
        SF_DRAFT_PTR(uint32, 0x8011B4BCu)[v6] = v7;
        result = v5 < 4;
        v6 += 9;
    } while (v5 < 4);
    return result;
}

sint32 sub_8001AF64(void)
{
    FUNCTION_MARKER(0x8001AF64u, "SCUS_942.40");
    uint32 index;
    for (index = 0; index < 2u; ++index)
    {
        uint32 slot = 0x80115D74u + 4u * index;
        uint32 camera = r_u32(slot);
        if (camera)
        {
            uint32 object = r_u32(camera);
            uint32 matrix = r_u32(object);
            sub_800DBBD4((sint32)matrix, 0, 0x80130158u + 32u * index);
            camera = r_u32(slot);
            object = r_u32(camera);
            w_u32(0x8012C9E8u + 4u * index, r_u16(object + 4u));
        }
    }
    for (index = 0; index < 2u; ++index)
    {
        uint32 camera = r_u32(0x80115D74u + 4u * index);
        if (camera)
            sub_8001B120(camera);
    }
    return 1;
}

sint32 sub_800CA618(void)
{
    FUNCTION_MARKER(0x800CA618u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v0;
    int v1;
    int *v2;
    int *v3;

    sub_800E5000(0);
    sub_800E4C84(1);
    v0 = 0;
    sub_800C82B8();
    v1 = 0;
    sub_800E9024();
    sub_800E4C84(1);
    sub_800C82B8();
    sub_800E9024();
    v2 = SF_DRAFT_PTR(int, 0x8013D560u);
    v3 = SF_DRAFT_PTR(int, 0x8012CD10u);
    do
    {
        sub_800E9C44(0, 0, sf_draft_guest_address(v3));
        if (SF_DRAFT_PTR(uint32, 0x8013D560u)[v1])
            sub_800E9C44(0, 0, sf_draft_guest_address(v2));
        v2 += 5;
        v3 += 5;
        ++v0;
        v1 += 5;
    } while (v0 < 2);
    return sub_800E5000(0);
}

sint32 sub_800C19D0(sint32 a1, uint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800C19D0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    __int16 v3;
    int result;
    int v5;
    int v6;
    int v7;

    v3 = a2;
    if (a2 == -1)
        return -1;
    result = 0;
    if ((uint32)(*(uint8 *)(a1 + 12) - 1) >= a2)
    {
        v5 = *SF_DRAFT_PTR(_DWORD, (a1 + 4));
        v6 = a3 << 16;
        if ((*SF_DRAFT_PTR(_WORD, (24 * a2 + v5)) & 0x1F) == 11)
        {
            v3 = a2 + 1;
            v6 = -65536;
        }
        v7 = v6 >> 16;
        if (v6 >> 16 == -2)
        {
            return *(uint8 *)(24 * v3 + v5 + 9);
        }
        else
        {
            result = 0;
            if (v7 == -1)
                return *(uint8 *)(24 * v3 + v5 + 12);
        }
    }
    return result;
}

sint32 sub_8003A7FC(sint32 a1)
{
    uint32 request = (uint32)a1, direction, scale, coordinate, origin;
    uint32 scaled[3], endpoint[4];
    FUNCTION_MARKER(0x8003A7FCu, "SCUS_942.40");
    direction = r_u32(request + 16u);
    scale = r_u32(request + 24u);
    coordinate = r_u32(direction);
    scaled[0] = (uint32)sub_800C6D4C((sint32)coordinate, (sint32)scale);
    direction = r_u32(request + 16u);
    scale = r_u32(request + 24u);
    coordinate = r_u32(direction + 4u);
    scaled[1] = (uint32)sub_800C6D4C((sint32)coordinate, (sint32)scale);
    direction = r_u32(request + 16u);
    scale = r_u32(request + 24u);
    coordinate = r_u32(direction + 8u);
    scaled[2] = (uint32)sub_800C6D4C((sint32)coordinate, (sint32)scale);
    origin = r_u32(request);
    endpoint[0] = r_u32(origin) + scaled[0];
    origin = r_u32(request);
    endpoint[1] = r_u32(origin + 4u) + scaled[1];
    origin = r_u32(request);
    endpoint[2] = r_u32(origin + 8u) + scaled[2];
    w_u32(request + 4u, sf_draft_guest_address(endpoint));
    /* TODO The segment consumer reads the unwritten endpoint fourth word */
    sf_draft_unbound_stack_field(0x8003A7FCu, 0x1Cu);
    return (uint8)sub_8003A3C8(a1);
}

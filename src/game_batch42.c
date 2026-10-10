#include "game_draft.h"
__declspec(noreturn) void sf_draft_df6ec_unbound_stack_location(uint32 handle);
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_800459F8();

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x80087FE4u 0x80087fe4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80087FE4(sint32 a1, sint8 a2)
{
    FUNCTION_MARKER(0x80087FE4u, "SCUS_942.40");
    int v2 = SF_DRAFT_GP;
    _DWORD *v3;
    int result;
    int v5;
    int v6;
    int *v7;
    int v8;
    int v9;
    int v10;
    _DWORD *v11;
    int v12;
    int v13;
    int v14;
    int *v15;
    int v16;
    int v17;

    v3 = SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 40)));
    result = 1;
    if (a2 == 1)
    {
        v5 = *SF_DRAFT_PTR(_DWORD, (v2 + 1236));
        v6 = 0;
        if (v5 > 0)
        {
            v7 = SF_DRAFT_PTR(int, 0x80121098u);
            do
            {
                ++v6;
                *SF_DRAFT_PTR(_WORD, (*v7 + 2)) = -*SF_DRAFT_PTR(_WORD, (*v7 + 2));
                result = v6 < v5;
                ++v7;
            } while (v6 < v5);
        }
        for (*SF_DRAFT_PTR(_DWORD, (v2 + 1236)) = 0; v3; v3 = SF_DRAFT_PTR(_DWORD, v3[1]))
        {
            v8 = v3[4];
            result = -*SF_DRAFT_PTR(uint16, (v8 + 2));
            *SF_DRAFT_PTR(_WORD, (v8 + 2)) = result;
        }
    }
    else
    {
        for (; v3; v3 = SF_DRAFT_PTR(_DWORD, v3[1]))
        {
            v9 = v3[2];
            v10 = 0;
            if (v9 > 0)
            {
                v11 = v3;
                do
                {
                    v12 = *SF_DRAFT_PTR(_DWORD, (v2 + 1236));
                    v13 = v11[7];
                    v14 = 0;
                    if (v12 <= 0)
                        goto LABEL_16;
                    v15 = SF_DRAFT_PTR(int, 0x80121098u);
                    do
                    {
                        if (*v15 == v13)
                            break;
                        ++v14;
                        ++v15;
                    } while (v14 < v12);
                    if (v14 >= *SF_DRAFT_PTR(sint32, (v2 + 1236)))
                    {
                    LABEL_16:
                        v16 = *SF_DRAFT_PTR(_DWORD, (v2 + 1236));
                        result = v16 + 1;
                        if (v16 >= 400)
                            return result;
                        *SF_DRAFT_PTR(_DWORD, (v2 + 1236)) = result;
                        *SF_DRAFT_PTR(_WORD, (v13 + 2)) = -*SF_DRAFT_PTR(_WORD, (v13 + 2));
                        SF_DRAFT_PTR(uint32, 0x80121098u)[v16] = v13;
                    }
                    ++v10;
                    ++v11;
                } while (v10 < v9);
            }
            v17 = v3[4];
            result = -*SF_DRAFT_PTR(uint16, (v17 + 2));
            *SF_DRAFT_PTR(_WORD, (v17 + 2)) = result;
        }
    }
    return result;
}

// FUNCTION_MARKER 0x800DF6ECu 0x800df6ec
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
static sint32 sf_file_cancel_core(sint8 a1, uint32 reset_handle, uint32 disposing)
{
    uint8 parameter = 0x80u;
    uint32 handle;
    uint32 active;
    uint32 callback;
    uint32 attempt;
    uint32 timers_removed = 1u;
    sint32 status = 0;
    if (!r_u8(SF_DRAFT_GP + 0x99Cu))
        return 0;
    handle = r_u32(SF_DRAFT_GP + 0x9A8u);
    if (handle)
    {
        sint32 removed = sub_800D89D8(handle);
        if (removed)
            timers_removed = 0u;
    }
    handle = r_u32(SF_DRAFT_GP + 0x9A4u);
    w_u32(SF_DRAFT_GP + 0x9A8u, 0u);
    if (handle)
    {
        sint32 removed = sub_800D89D8(handle);
        if (removed)
            timers_removed = 0u;
    }
    active = r_u8(SF_DRAFT_GP + 0x99Cu);
    w_u32(SF_DRAFT_GP + 0x9A4u, 0u);
    if (!active)
        return 0;
    callback = r_u32(SF_DRAFT_GP + 0x9A0u);
    w_u8(SF_DRAFT_GP + 0x99Cu, 0u);
    if (callback)
        sf_draft_call(callback, 0u, NULL);
    w_u32(SF_DRAFT_GP + 0x9A0u, 0u);
    for (attempt = 0u; attempt < 10u; ++attempt)
    {
        uint8 command = (uint8)a1 == 1u ? 9u : 14u;
        uint32 argument = command == 9u ? 0u : sf_draft_guest_address(&parameter);
        status = sub_800ED5C0(command, (sint32)argument, 0);
        if (status)
            break;
    }
    if (status)
    {
        uint32 pending = r_u32(SF_DRAFT_GP + 0x998u);
        uint8 *file_view;
        uint8 *control_view;
        uintptr_t file_start;
        uintptr_t control_start;
        if (!reset_handle || pending != reset_handle)
            sf_draft_df6ec_unbound_stack_location(pending);
        if (disposing)
        {
            /* Omit dead location stores only inside the reviewed movie disposal */
            if (pending < 0x80125260u || pending >= 0x801252C4u || (pending - 0x80125260u) % 20u || r_u32(pending + 4u) == 0xCACACACAu || r_u32(0x801419E0u) != pending || !timers_removed || !r_u16(0x8010E2B0u) || r_u32(0x80142A7Cu) || r_u32(SF_DRAFT_GP + 0x9A4u) || r_u32(SF_DRAFT_GP + 0x9A8u) || r_u8(SF_DRAFT_GP + 0x99Cu))
                sf_draft_df6ec_unbound_stack_location(pending);
            w_u32(SF_DRAFT_GP + 0x998u, 0u);
            return 0;
        }
        file_view = SF_DRAFT_PTR(uint8, pending);
        control_view = SF_DRAFT_PTR(uint8, SF_DRAFT_GP + 0x998u);
        file_start = (uintptr_t)file_view;
        control_start = (uintptr_t)control_view;
        /* Validate the whole object before omitting stores immediately overwritten */
        (void)r_u8(pending + 19u);
        if (file_start > UINTPTR_MAX - 20u || control_start > UINTPTR_MAX - 20u || !(file_start + 20u <= control_start || control_start + 20u <= file_start))
            sf_draft_df6ec_unbound_stack_location(pending);
        w_u32(SF_DRAFT_GP + 0x998u, 0u);
        return 0;
    }
    sub_800DF43C(37u);
    return 37;
}

sint32 sub_800DF6EC(sint8 mode)
{
    FUNCTION_MARKER(0x800DF6ECu, "SCUS_942.40");
    return sf_file_cancel_core(mode, 0u, 0u);
}

sint32 sf_file_cancel_before_location_reset(sint8 mode, uint32 reset_handle)
{
    return sf_file_cancel_core(mode, reset_handle, 0u);
}

sint32 sf_file_cancel_before_movie_dispose(uint32 handle)
{
    /* TODO Generic pause still lacks an original location-byte producer */
    return sf_file_cancel_core(1, handle, 1u);
}

// FUNCTION_MARKER 0x80034A58u 0x80034a58
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_80034A58(void)
{
    FUNCTION_MARKER(0x80034A58u, "SCUS_942.40");
    uint32 index, record;
    if (!r_u8(0x8010BB3Cu))
        w_u8(0x8010BCBCu, 1);
    w_u8(0x8010BB3Cu, 1);
    w_u32(0x80115EB4u, 0xFFFFFFFFu);
    sub_8003477C();
    sub_80034810();
    sub_80034870();
    sub_800348D0();
    sub_80034964();
    sub_800349F8();
    sub_8003545C(0);
    w_u32(0x8010BB48u, 0x80128E90u);
    for (index = 0; index < 9u; ++index)
        w_u32(0x8010BB58u + 4u * r_u32(0x8010BAF4u + 4u * index), index);
    w_u8(0x8010BB50u, 0);
    w_u32(0x8010BB98u, 4055u);
    w_u8(0x8010BB51u, 0);
    w_u8(0x8010BB52u, 0);
    w_u32(0x8010BB54u, 0);
    w_u32(0x8010BB9Cu, 0x8010BF48u);
    record = 0x8010BBCCu;
    for (index = 0; index < 4u; ++index, record += 60u)
    {
        w_u32(record, 0);
        w_u32(record + 4u, 0);
        w_u32(record + 8u, 0);
    }
    w_u32(0x8010BC90u, 0x8010BFB8u);
    w_u32(0x8010BC94u, 0);
    w_u32(0x8010BC98u, 0);
    w_u32(0x8010BC9Cu, 0);
    w_u32(0x8010BCA0u, 0);
    w_u32(0x8010BCA4u, 0);
    w_u32(0x8010BCA8u, 0);
    w_u8(0x8010BCACu, 0);
    w_u8(0x8010BB4Cu, 0);
    w_u8(0x8010BB4Du, 0);
    w_u32(0x8010BCB0u, 0);
    w_u32(0x8010BCB4u, 0);
    w_u32(0x8010BCB8u, 0);
    w_u16(0x8010BB4Eu, 0);
    return 0x8010BFB8u;
}

// FUNCTION_MARKER 0x80045E24u 0x80045e24
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80045E24(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x80045E24u, "SCUS_942.40");
    int v3 = SF_DRAFT_GP;
    int v5;
    int v7;
    int v8 = SF_DRAFT_GP;
    int v9;
    int i;
    int v11;
    int result;

    v5 = a2;
    if (a1 != (*SF_DRAFT_PTR(uint32, 0x80116B9Cu)))
        goto LABEL_17;
    if (a2 == 28)
    {
        v5 = sub_800459F8(*SF_DRAFT_PTR(_DWORD, (v3 + 848)));
    }
    else if (a2 == 27)
    {
        v7 = sub_80045A84(*SF_DRAFT_PTR(_DWORD, (v3 + 848)));
        v9 = v7;
        if (!a3)
        {
            for (i = 32 * v7;; i = 32 * v9)
            {
                v11 = 2 * v9;
                if (SF_DRAFT_PTR(uint8, 0x8010C38Du)[i])
                {
                    if (SF_DRAFT_PTR(uint16, 0x8012F0B2u)[v11] || SF_DRAFT_PTR(uint16, 0x8012F0B0u)[v11])
                        break;
                }
                v9 = sub_80045A84(v9);
            }
        }
        *SF_DRAFT_PTR(_DWORD, (v8 + 848)) = v9;
        v5 = v9;
        goto LABEL_13;
    }
    *SF_DRAFT_PTR(_DWORD, (v3 + 848)) = v5;
LABEL_13:
    if (!a3)
    {
        sub_80040294();
        sub_800463D0(v5);
        sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 37);
    }
    if ((*SF_DRAFT_PTR(uint32, 0x8012B8A0u)) == -1)
        (*SF_DRAFT_PTR(uint32, 0x8012B8A0u)) = a1;
LABEL_17:
    result = (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    *SF_DRAFT_PTR(_BYTE, (76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) = v5;
    return result;
}

#include "game_draft.h"

sint32 sub_80153A50(uint32 record)
{
    uint32 index, object, state, count = 3u, head = 0u;
    uint32 request[15];
    FUNCTION_MARKER(0x80153A50u, "INIT.MAIN.OVL");
    for (index = 0u; index < 15u; ++index)
    {
        w_u32(0x8012FFB8u + 4u * index, 0x80134298u + 0x90u * index);
        w_u32(0x8012FFF8u + 4u * index, 0x80134B08u + 0x90u * index);
        w_u32(0x80130038u + 4u * index, 0x80135378u + 0x90u * index);
    }
    sub_8006E150((sint32)record, sf_draft_guest_address(&count));
    object = r_u32(record + 8u);
    request[0] = r_u32(object + 12u);
    request[1] = 0u;
    request[2] = (uint32)-73;
    request[3] = 0u;
    /* TODO Original request word at offset16 is unwritten */
    request[4] = 0u;
    request[5] = 48u;
    request[6] = 0x80000001u;
    request[7] = 0x7FFFFFFFu;
    request[8] = 0xB50u;
    request[9] = 0x7FFFFFFFu;
    request[10] = 0u;
    request[11] = 0u;
    request[12] = 4096u;
    request[13] = 4096u;
    request[14] = 0x8012FFB8u;
    sub_8006E438(0x80116AD8u, sf_draft_guest_address(request), (sint32)record);
    object = r_u32(record + 8u);
    request[0] = r_u32(r_u32(object + 24u) + 56u);
    request[1] = 0u;
    request[2] = (uint32)-4;
    request[3] = 0u;
    request[5] = 20u;
    request[6] = 0x80000001u;
    request[7] = 0x7FFFFFFFu;
    request[8] = 0xB50u;
    request[9] = 0x7FFFFFFFu;
    request[10] = 0u;
    request[11] = 0u;
    request[12] = 4096u;
    request[13] = 4096u;
    request[14] = 0x8012FFF8u;
    sub_8006E438(0x801169B4u, sf_draft_guest_address(request), (sint32)record);
    object = r_u32(record + 8u);
    request[0] = r_u32(r_u32(object + 24u) + 28u);
    request[1] = 0u;
    request[2] = 3u;
    request[3] = (uint32)-5;
    request[5] = 16u;
    request[6] = 0x80000001u;
    request[7] = 0x7FFFFFFFu;
    request[8] = 0xB50u;
    request[9] = 0x7FFFFFFFu;
    request[10] = 0u;
    request[11] = 0u;
    request[12] = 4096u;
    request[13] = 4096u;
    request[14] = 0x80130038u;
    sub_8006E438(0x80116B5Cu, sf_draft_guest_address(request), (sint32)record);
    object = r_u32(record + 8u);
    request[0] = r_u32(r_u32(object + 24u) + 4u);
    request[1] = 0u;
    request[2] = 3u;
    request[3] = (uint32)-5;
    request[5] = 16u;
    request[6] = 0x80000001u;
    request[7] = 0x7FFFFFFFu;
    request[8] = 0xB50u;
    request[9] = 0x7FFFFFFFu;
    request[10] = 0u;
    request[11] = 0u;
    request[12] = 4096u;
    request[13] = 4096u;
    request[14] = 0x80130038u;
    sub_8006E438(0x80116AC0u, sf_draft_guest_address(request), (sint32)record);
    state = r_u32(r_u32(record + 12u) + 416u);
    w_u32(state + 52u, 0u);
    state = r_u32(r_u32(record + 12u) + 416u);
    object = r_u32(0x80116AD8u);
    w_u32(state + 44u, object);
    state = r_u32(r_u32(record + 12u) + 416u);
    w_u32(state + 48u, object);
    sub_8006E54C((sint32)r_u32(0x80116B5Cu), 0, sf_draft_guest_address(&head));
    sub_8006E54C((sint32)r_u32(0x80116AC0u), 1, sf_draft_guest_address(&head));
    sub_8006E54C((sint32)r_u32(0x801169B4u), 2, sf_draft_guest_address(&head));
    sub_8006E4FC((sint32)record, (sint32)head);
    sub_8006DA20((sint32)record, -1);
    w_u32(r_u32(r_u32(record + 12u) + 416u), 3u);
    w_u32(r_u32(r_u32(record + 12u) + 408u) + 4u, 0x599u);
    return 1;
}

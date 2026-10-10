#include "game_draft.h"
#include "../../xport/src/psx_stream.h"
#include "../../xport/src/psx_press.h"

void sub_800C7940(sint32 value)
{
    FUNCTION_MARKER(0x800C7940u, "SCUS_942.40.DEP");
    w_u32(SF_DRAFT_GP + 0x80Cu, (uint32)value);
}

sint32 sub_800FF5A0(sint32 port, sint32 term, sint32 offset)
{
    FUNCTION_MARKER(0x800FF5A0u, "SCUS_942.40");
    return PadInfoMode(port, term, offset);
}

sint32 sub_800E5184(uint32 rectangle, uint8 red, uint8 green, uint8 blue)
{
    FUNCTION_MARKER(0x800E5184u, "SCUS_942.40");
    return ClearImage(SF_DRAFT_PTR(PSX_RECT, rectangle), red, green, blue);
}

sint32 sub_800F2474(uint32 event_class, uint32 specification, uint32 mode, uint32 guest_callback)
{
    FUNCTION_MARKER(0x800F2474u, "SCUS_942.40");
    return OpenEventPSX(event_class, specification, mode, guest_callback);
}

sint32 sub_800F2484(uint32 handle)
{
    FUNCTION_MARKER(0x800F2484u, "SCUS_942.40");
    return EnableEventPSX(handle);
}

sint32 sub_800FE894(uint32 handle)
{
    FUNCTION_MARKER(0x800FE894u, "SCUS_942.40");
    return TestEvent(handle);
}

uint32 sub_800E4958(uint32 slot, uint32 callback)
{
    uint32 address = 0x8010F358u + 4u * slot;
    uint32 previous;
    FUNCTION_MARKER(0x800E4958u, "SCUS_942.40");
    previous = r_u32(address);
    if (callback != previous)
        w_u32(address, callback);
    return previous;
}

uint32 sub_800E4248(uint32 slot, uint32 callback)
{
    FUNCTION_MARKER(0x800E4248u, "SCUS_942.40");
    return sub_800E4250(r_u32(0x8010F338u), slot, callback);
}

void sub_800F0704(void)
{
    uint32 sectors, source, i;
    FUNCTION_MARKER(0x800F0704u, "SCUS_942.40");
    sectors = r_u32(0x8013D4B8u);
    w_u32(0x8013773Cu, 0);
    w_u32(0x80137714u, 0);
    w_u32(0x80137710u, 0);
    w_u32(0x80130150u, 0);
    source = r_u32(0x8013C644u);
    for (i = 0; i < sectors; ++i)
        w_u32(source + 32u * i, 0);
    w_u32(0x8012CA00u, 0);
    w_u16(0x80128DF4u, 0);
    w_u32(0x80128038u, 0);
    StClearRing();
}

void sub_800ED284(uint32 source, uint32 sectors)
{
    FUNCTION_MARKER(0x800ED284u, "SCUS_942.40");
    w_u32(0x8013C644u, source);
    w_u32(0x8013D4B8u, sectors);
    StSetRing(SF_DRAFT_PTR(uint32, source), sectors);
    sub_800F0704();
}

static void sf_stream_complete_callback(void)
{
    uint32 callback = r_u32(0x8012C8A4u);
    if (callback)
        sf_draft_call(callback, 0u, NULL);
}

static void sf_stream_limit_callback(void)
{
    uint32 callback = r_u32(0x8012C8ACu);
    if (callback)
        sf_draft_call(callback, 0u, NULL);
}

void sub_800F08D4(uint32 mode, uint32 start_frame, uint32 end_frame, uint32 complete_callback, uint32 limit_callback)
{
    FUNCTION_MARKER(0x800F08D4u, "SCUS_942.40");
    w_u32(0x8013C63Cu, 1);
    w_u32(0x8012EE50u, start_frame);
    w_u32(0x8013C5D0u, end_frame);
    w_u32(0x8013C5ACu, 0);
    w_u32(0x8012C8A4u, complete_callback);
    w_u32(0x80128E44u, mode & 1u);
    w_u32(0x8012FD68u, 0);
    w_u32(0x8012E12Cu, 0);
    w_u16(0x80128DF4u, 0);
    w_u32(0x80128038u, 0);
    w_u32(0x8012C8ACu, limit_callback);
    sf_native_cd_set_stream_owner(1u);
    StSetStream(mode, start_frame, end_frame, complete_callback ? sf_stream_complete_callback : NULL, limit_callback ? sf_stream_limit_callback : NULL);
}

void sf_native_continuation_enter(void);
void sf_native_continuation_leave(void);

static uint32 sf_mdec_callbacks[64];
static uint32 sf_mdec_callback_head;
static uint32 sf_mdec_callback_count;
static uint32 sf_mdec_dispatching;

static void sf_mdec_clear_completions(void)
{
    sf_mdec_callback_head = 0u;
    sf_mdec_callback_count = 0u;
}

void sf_native_mdec_poll(void)
{
    if (sf_mdec_dispatching)
        return;
    sf_native_continuation_enter();
    sf_mdec_dispatching = 1u;
    mdec_psyq_pump(0u);
    while (sf_mdec_callback_count)
    {
        uint32 callback = sf_mdec_callbacks[sf_mdec_callback_head];
        sf_mdec_callback_head = (sf_mdec_callback_head + 1u) % 64u;
        --sf_mdec_callback_count;
        sf_draft_call(callback, 0u, NULL);
        mdec_psyq_pump(0u);
    }
    sf_mdec_dispatching = 0u;
    sf_native_continuation_leave();
}

void sub_8013EC90(uint32 mode)
{
    FUNCTION_MARKER(0x8013EC90u, "MOVIE.OVL");
    if (mode <= 1u)
    {
        sf_mdec_clear_completions();
        DecDCTReset((sint32)mode);
    }
    else
        sub_800EC914(SF_DRAFT_PTR(char, 0x8013D640u), (sint32)mode);
}

static void sf_mdec_output_callback(void)
{
    uint32 callback = r_u32(0x8010F390u);
    if (callback)
    {
        uint32 tail;
        if (sf_mdec_callback_count == 64u)
        {
            fprintf(stderr, "MDEC completion queue overflow\n");
            abort();
        }
        tail = (sf_mdec_callback_head + sf_mdec_callback_count) % 64u;
        sf_mdec_callbacks[tail] = callback;
        ++sf_mdec_callback_count;
    }
}

uint32 sub_800E41E4(uint32 channel, uint32 callback)
{
    uint32 address, previous;
    FUNCTION_MARKER(0x800E41E4u, "SCUS_942.40");
    if (channel != 1u)
    {
        fprintf(stderr, "TODO DMACallback: Unbound native channel %u adapter\n", channel);
        abort();
    }
    address = 0x8010F38Cu + 4u * channel;
    previous = r_u32(address);
    if (callback == previous)
        return previous;
    w_u32(address, callback);
    /* Native MDEC callback ownership replaces hardware DICR enable bookkeeping */
    DecDCToutCallback(callback ? sf_mdec_output_callback : NULL);
    return previous;
}

sint32 sub_800E8B2C(uint16 width, uint16 height)
{
    sint32 ratio;
    uint32 i;
    FUNCTION_MARKER(0x800E8B2Cu, "SCUS_942.40");
    w_u32(0x8012FFB0u, width);
    w_u32(0x80130108u, height);
    if (!width)
        _break(7u, 0);
    ratio = (sint32)((uint32)height << 14u) / (sint32)width;
    w_u16(0x80130114u, 0);
    w_u16(0x80130112u, 0);
    w_u16(0x8013011Au, 0);
    w_u16(0x80130116u, 0);
    w_u16(0x8013011Eu, 0);
    w_u16(0x8013011Cu, 0);
    w_u32(0x8013012Cu, 0);
    w_u32(0x80130128u, 0);
    w_u32(0x80130124u, 0);
    w_u16(0x80130110u, 4096);
    w_u16(0x80130118u, 4096);
    w_u16(0x80130120u, 4096);
    for (i = 0; i < 32u; i += 4u)
        w_u32(0x80130EE0u + i, r_u32(0x80130110u + i));
    for (i = 0; i < 32u; i += 4u)
        w_u32(0x8012DB98u + i, r_u32(0x80130110u + i));
    w_u16(0x8012DBA8u, 0);
    w_u16(0x8012DBA0u, 0);
    w_u16(0x8012DB98u, 0);
    for (i = 0; i < 32u; i += 4u)
        w_u32(0x8012FA00u + i, r_u32(0x8012DB98u + i));
    w_u16(0x8012B7D0u, 0);
    w_u16(0x8012B7D2u, 0);
    w_u16(0x8012B7D4u, 0);
    w_u16(0x8012B7D6u, 0);
    w_u16(0x8012C7B2u, 0);
    w_u16(0x8012C7B0u, 0);
    w_u16(0x80130F0Au, 0);
    w_u16(0x80130EE8u, (uint16)(ratio / 3));
    w_u16(0x80130F08u, 0);
    w_u8(0x8012541Bu, 3);
    w_u8(0x8012541Fu, 2);
    w_u8(0x8012542Bu, 3);
    w_u8(0x8012542Fu, 2);
    w_u32(0x8013C5B0u, 1);
    w_u16(0x80130F0Cu, r_u16(0x8012FFB0u));
    w_u16(0x80130F0Eu, r_u16(0x80130108u));
    return 1;
}

sint32 sub_800E8AC4(uint16 width, uint16 height, uint32 flags, uint8 dither, uint16 rgb24)
{
    FUNCTION_MARKER(0x800E8AC4u, "SCUS_942.40");
    w_u16(0x8012F04Cu, 0);
    w_u8(0x8012F04Eu, dither);
    w_u8(0x8012F04Fu, 0);
    w_u8(0x8012F050u, 0);
    w_u16(0x8012F09Cu, width);
    w_u16(0x8012F09Eu, height);
    w_u8(0x8012F0A8u, (uint8)(flags & 1u));
    w_u16(0x8013C638u, (uint16)(flags & 4u));
    w_u8(0x8012F0A9u, (uint8)rgb24);
    return sub_800E8B2C(width, height);
}

uint32 sub_800F0A54(uint32 *payload, uint32 *header)
{
    uint32 *native_payload, *native_header;
    uint32 status;
    FUNCTION_MARKER(0x800F0A54u, "SCUS_942.40");
    /* TODO Original end-zero rewind clearing differs from the canonical owner */
    status = StGetNext(&native_payload, &native_header);
    if (!status)
    {
        *payload = sf_draft_guest_address(native_payload);
        *header = sf_draft_guest_address(native_header);
    }
    return status;
}

sint32 sub_800ED558(sint32 mode, uint32 result)
{
    FUNCTION_MARKER(0x800ED558u, "SCUS_942.40");
    /* TODO Canonical CdSync supplies byte zero; original copies eight response bytes */
    return CdSync(mode, result ? SF_DRAFT_PTR(uint8, result) : NULL);
}

void sf_native_cd_set_stream_owner(uint32 enabled);

sint32 sub_800F0654(uint32 mode)
{
    uint8 parameter = (uint8)mode;
    FUNCTION_MARKER(0x800F0654u, "SCUS_942.40");
    sub_800ED5C0(14u, (sint32)sf_draft_guest_address(&parameter), 0);
    if (mode & 0x100u)
    {
        w_u32(0x80128E48u, (mode & 0x20u) == 0u);
        sf_native_cd_set_stream_owner(1u);
        sub_800ED9DC(0x800F07E4u);
        sub_800ED5AC(0x800F06D8u);
    }
    return sub_800ED5C0(27u, 0, 0);
}

uint32 sub_8013EB28(uint32 payload)
{
    uint32 *native_payload = SF_DRAFT_PTR(uint32, payload);
    FUNCTION_MARKER(0x8013EB28u, "MOVIE.OVL");
    return (uint32)DecDCTBufSize(native_payload);
}

sint32 sub_8013F180(uint32 payload, uint32 output, uint32 table)
{
    uint32 *native_payload = payload ? SF_DRAFT_PTR(uint32, payload) : NULL;
    uint32 *native_output = SF_DRAFT_PTR(uint32, output);
    uint16 *native_table = SF_DRAFT_PTR(uint16, table);
    FUNCTION_MARKER(0x8013F180u, "MOVIE.OVL");
    /* TODO Native decoder owns continuation state and chunk limit instead of guest mirrors */
    return DecDCTvlc2(native_payload, native_output, native_table);
}

uint32 sub_800F0964(uint32 payload)
{
    uint32 *native_payload = SF_DRAFT_PTR(uint32, payload);
    FUNCTION_MARKER(0x800F0964u, "SCUS_942.40");
    /* TODO Native ring owns header statuses and read index instead of guest mirrors */
    return StFreeRing(native_payload);
}

void sub_8013EB34(uint32 payload, sint32 mode)
{
    uint32 *native_payload = SF_DRAFT_PTR(uint32, payload);
    FUNCTION_MARKER(0x8013EB34u, "MOVIE.OVL");
    DecDCTin(native_payload, mode);
}

void sub_8013EBB0(uint32 output, sint32 words)
{
    uint32 *native_output = SF_DRAFT_PTR(uint32, output);
    FUNCTION_MARKER(0x8013EBB0u, "MOVIE.OVL");
    DecDCTout(native_output, words);
}

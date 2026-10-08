#include "game_draft.h"
extern sint32 CdRead(sint32 count, uint32 *destination, sint32 mode);
extern sint32 CdReadSync(sint32 mode, uint8 *result);

extern sint32 cd_read_sector_native(uint8 output[2352]);
void sf_native_continuation_enter(void);
void sf_native_continuation_leave(void);
static uint8 sf_cd_sector[2352];
static uint32 sf_cd_mode, sf_cd_streaming, sf_cd_polling;
static uint32 sf_cd_fifo_offset, sf_cd_sector_ready;
static uint64 sf_cd_last_us, sf_cd_fraction;

static void sf_cd_command_complete(uint8 command, const uint8 *parameter)
{
    if (command == 14u && parameter)
        sf_cd_mode = parameter[0];
    if (command == 2u)
        sf_cd_sector_ready = 0u;
    if (command == 6u || command == 27u)
    {
        if (sf_cd_mode & 0x10u)
        {
            fprintf(stderr, "Unsupported original 582-word streaming CD mode %02X\n", sf_cd_mode);
            abort();
        }
        sf_cd_streaming = 1u;
        sf_cd_last_us = xport_timer_get();
        sf_cd_fraction = 0u;
    }
    if (command == 8u || command == 9u || command == 10u)
    {
        sf_cd_streaming = 0u;
        sf_cd_sector_ready = 0u;
    }
}

/* Callback addresses retain guest identity across native event dispatch */
static uint32 sf_cd_data_callback;

static void sf_cd_ready_dispatch(uint8 status, uint8 *result)
{
    uint32 callback = r_u32(0x80114CC4u);
    uint32 arguments[2];
    if (!callback)
        return;
    arguments[0] = status;
    arguments[1] = result ? sf_draft_guest_address(result) : 0u;
    sf_draft_call(callback, 2u, arguments);
}

static void sf_cd_data_dispatch(uint8 status, uint8 *result)
{
    /* The original DMA channel callback receives no semantic arguments */
    (void)status;
    (void)result;
    if (sf_cd_data_callback)
        sf_draft_call(sf_cd_data_callback, 0u, NULL);
}

uint32 sub_800ED5AC(uint32 callback)
{
    uint32 previous = r_u32(0x80114CC4u);
    w_u32(0x80114CC4u, callback);
    CdReadyCallback(callback ? sf_cd_ready_dispatch : NULL);
    return previous;
}

uint32 sub_800ED9DC(uint32 callback)
{
    uint32 previous = sf_cd_data_callback;
    sf_cd_data_callback = callback;
    CdDataCallback(callback ? sf_cd_data_dispatch : NULL);
    return previous;
}

sint32 sub_800ED5C0(uint8 command, sint32 parameter, sint32 result)
{
    uint8 *parameters = parameter ? (uint8 *)sf_draft_guest_ptr((uint32)parameter) : NULL;
    sint32 completed = CdControl(command, parameters,
        result ? (uint8 *)sf_draft_guest_ptr((uint32)result) : NULL);
    if (completed)
        sf_cd_command_complete(command, parameters);
    return completed;
}

uint32 sub_800ED6FC(uint8 command, uint32 parameter)
{
    uint8 *parameters = parameter ? (uint8 *)sf_draft_guest_ptr(parameter) : NULL;
    uint32 completed = (uint32)CdControlF(command, parameters);
    if (completed)
        sf_cd_command_complete(command, parameters);
    return completed;
}

uint32 sub_800F0384(sint32 count, uint32 destination, sint32 mode)
{
    if (((uint32)mode & 0x30u) == 0x10u || ((uint32)mode & 0x30u) == 0x30u)
    {
        fprintf(stderr, "Unsupported original 582-word CD read mode %08X\n", (uint32)mode);
        abort();
    }
    sf_cd_streaming = 0u;
    sf_cd_sector_ready = 0u;
    return (uint32)CdRead(count, (uint32 *)sf_draft_guest_ptr(destination), mode);
}

sint32 sub_800F0520(sint32 mode, uint32 result)
{
    return CdReadSync(mode, result ? (uint8 *)sf_draft_guest_ptr(result) : NULL);
}

extern sint32 CD_getsector(uint32 destination, uint32 words);

sint32 sf_native_cd_get_sector(uint32 destination, uint32 words)
{
    sint32 copied;
    uint32 address;
    void *output;
    if (words > 585u)
        return 0;
    output = sf_draft_guest_ptr(destination);
    if (sf_cd_sector_ready)
    {
        uint32 bytes = words * 4u;
        if (!output || bytes > sizeof(sf_cd_sector) - sf_cd_fifo_offset)
            return 0;
        memcpy(output, sf_cd_sector + sf_cd_fifo_offset, bytes);
        sf_cd_fifo_offset += bytes;
        copied = 1;
    }
    else
    {
        address = xport_guest_buffer_address(output, (size_t)words * 4u);
        if (!address)
        {
            fprintf(stderr, "Unbound native CD sector output buffer %08X (%u words)\n", destination, words);
            abort();
        }
        copied = CD_getsector(address, words);
    }
    if (copied && sf_cd_data_callback)
    {
        sf_native_continuation_enter();
        sf_draft_call(sf_cd_data_callback, 0u, NULL);
        sf_native_continuation_leave();
    }
    return copied;
}

void sf_native_cd_poll(void)
{
    uint64 now, elapsed, due;
    uint32 rate;
    if (!sf_cd_streaming || sf_cd_polling)
        return;
    sf_native_continuation_enter();
    sf_cd_polling = 1u;
    now = xport_timer_get();
    elapsed = now >= sf_cd_last_us ? now - sf_cd_last_us : 0u;
    sf_cd_last_us = now;
    rate = (sf_cd_mode & 0x80u) ? 150u : 75u;
    due = elapsed / 1000000u * rate;
    sf_cd_fraction += elapsed % 1000000u * rate;
    due += sf_cd_fraction / 1000000u;
    sf_cd_fraction %= 1000000u;
    while (due && sf_cd_streaming)
    {
        uint32 callback, arguments[2], index, status;
        --due;
        if (!cd_read_sector_native(sf_cd_sector))
        {
            fprintf(stderr, "Native streaming CD sector read failed\n");
            abort();
        }
        sf_cd_sector_ready = 1u;
        sf_cd_fifo_offset = (sf_cd_mode & 0x20u) ? 12u : 24u;
        /* Successful ReadN or ReadS owns motor-on and reading status */
        status = 0x22u | (r_u8(0x80114CCCu) & 0x18u);
        w_u32(0x80114CCCu, status);
        w_u32(0x80114CD0u, 0u);
        /* Original CD interrupt code zero-pads its eight-byte response cache */
        for (index = 0u; index < 8u; ++index)
            w_u8(0x80125450u + index, index ? 0u : status);
        w_u8(0x80114F9Du, 1u);
        callback = r_u32(0x80114CC4u);
        if (callback)
        {
            arguments[0] = 1u;
            arguments[1] = 0x80125450u;
            sf_draft_call(callback, 2u, arguments);
        }
    }
    sf_cd_polling = 0u;
    sf_native_continuation_leave();
}

void sf_native_video_poll(void);

sint32 sub_800ED578(sint32 mode, uint32 result)
{
    uint32 status, cache, flag, index;
    uint8 *output = result ? (uint8 *)sf_draft_guest_ptr(result) : NULL;
    for (;;)
    {
        sf_native_cd_poll();
        status = r_u8(0x80114F9Eu);
        flag = 0x80114F9Eu;
        cache = 0x80125458u;
        if (!status)
        {
            status = r_u8(0x80114F9Du);
            flag = 0x80114F9Du;
            cache = 0x80125450u;
        }
        if (status || mode || !sf_cd_streaming)
            break;
        if (sf_cd_polling)
        {
            fprintf(stderr, "Blocking CD-ready request inside its active CD interrupt dispatch\n");
            abort();
        }
        xport_poll();
        if (xport_isquit())
            return -1;
        sf_native_video_poll();
    }
    if (status)
    {
        w_u8(flag, 0u);
        if (result && !output)
        {
            fprintf(stderr, "Invalid native CD-ready response output %08X\n", result);
            abort();
        }
        if (output)
            for (index = 0u; index < 8u; ++index)
                output[index] = r_u8(cache + index);
    }
    return (sint32)status;
}

#include "game_draft.h"
#include <setjmp.h>
#include <stdlib.h>

void sf_native_video_poll(void);

static jmp_buf sf_protected_environment;
static uint32 sf_protected_active;
static uint32 sf_protected_cancel_pending;
static uint32 sf_continuation_guards;

void sf_native_protected_callback(uint32 target, uint8 mode,
    uint32 cancellation, uint32 argument)
{
    if (sf_protected_active || sf_continuation_guards || !target)
    {
        fprintf(stderr, "Unsupported nested, guarded or null protected callback %08X\n", target);
        abort();
    }
    sf_protected_active = 1u;
    sf_protected_cancel_pending = 0u;
    /* Encoded native continuation ownership replaces guest frame addresses */
    w_u32(0x801165ACu, sf_draft_guest_address(&sf_protected_environment));
    w_u32(0x801165B0u, sf_draft_guest_address(&sf_protected_environment));
    w_u32(0x801165A8u, r_u32(0x80116598u));
    w_u8(0x801165BCu, mode);
    w_u32(0x801165B4u, cancellation);
    if (!setjmp(sf_protected_environment))
    {
        sf_native_video_poll();
        sf_draft_call(target, 1u, &argument);
        sf_native_video_poll();
        w_u32(0x801165ACu, 0u);
        w_u32(0x801165B0u, 0u);
        w_u32(0x801165A8u, 0u);
    }
    sf_protected_active = 0u;
    sf_protected_cancel_pending = 0u;
}

void sf_native_cancel_request(void)
{
    if (!sf_protected_active)
    {
        fprintf(stderr, "Cancellation without a native protected continuation\n");
        abort();
    }
    sf_protected_cancel_pending = 1u;
}

__declspec(noreturn) void sub_800C78C8(void)
{
    FUNCTION_MARKER(0x800C78C8u, "SCUS_942.40");
    if (!sf_protected_active)
    {
        fprintf(stderr, "Unbound native C78C8 continuation\n");
        abort();
    }
    w_u32(0x801165ACu, 0u);
    w_u32(0x801165B0u, 0u);
    w_u32(0x801165A8u, 0u);
    w_u8(0x801165BAu, 0u);
    w_u8(0x801165BBu, 60u);
    longjmp(sf_protected_environment, 1);
}

/* Call only after video, BIOS callback and interrupt dispatch cleanup */
void sf_native_continuation_safepoint(void)
{
    if (sf_protected_cancel_pending && !sf_continuation_guards)
        sub_800C78C8();
}

void sf_native_continuation_enter(void)
{
    if (sf_continuation_guards == ~0u)
        abort();
    ++sf_continuation_guards;
}

void sf_native_continuation_leave(void)
{
    if (!sf_continuation_guards)
        abort();
    --sf_continuation_guards;
    sf_native_continuation_safepoint();
}

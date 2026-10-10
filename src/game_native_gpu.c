#include "game_draft.h"
#include "psx_gpu.h"

void sf_native_update_video(const DISPENV *display);
uint32 sf_native_reset_callbacks(void);
void sf_native_graphics_require_idle(void);

static void sf_gpu_bind_state(void)
{
    const GpuPsyqStateBinding binding = {0x8010F484u, 0x8010F428u, 0x8010F418u, 0x8010F41Bu, 0x8010F3B8u, 0u};
    if (!gpu_bind_psyq_state(&binding))
        abort();
}

/* FUNCTION_MARKER: 800E4C84 */
sint32 sub_800E4C84(sint32 mode)
{
    uint32 kind = (uint32)mode & 7u;
    sf_native_graphics_require_idle();
    sf_gpu_bind_state();
    w_u32(0x8010F544u, 0u);
    w_u32(0x8010F540u, 0u);
    if (kind != 0u && kind != 3u && kind != 5u)
    {
        /* The synchronous owner has no pending FIFO or DMA transfer */
        return 0;
    }
    memset(sf_draft_guest_ptr(0x8010F418u), 0, 128u);
    sf_native_reset_callbacks();
    if (kind == 0u)
    {
        if (ResetGraph(0) < 0)
            abort();
        memset(sf_draft_guest_ptr(0x80125310u), 0, 256u);
        memset(sf_draft_guest_ptr(0x80135F08u), 0, 6144u);
    }
    w_u8(0x8010F418u, 0u);
    w_u8(0x8010F419u, 1u);
    w_u16(0x8010F41Cu, r_u16(0x8010F498u));
    w_u16(0x8010F41Eu, r_u16(0x8010F4A4u));
    memset(sf_draft_guest_ptr(0x8010F428u), 0xff, 92u);
    memset(sf_draft_guest_ptr(0x8010F484u), 0xff, 20u);
    return 0;
}

/* FUNCTION_MARKER: 800E4F68 */
void sub_800E4F68(sint32 enabled)
{
    sf_gpu_bind_state();
    SetDispMask(enabled);
}

/* FUNCTION_MARKER: 800E5D28 */
uint32 sub_800E5D28(uint32 destination)
{
    memcpy(sf_draft_guest_ptr(destination), sf_draft_guest_ptr(0x8010F484u), 20u);
    return destination;
}

/* FUNCTION_MARKER: 800E5664 */
uint32 sub_800E5664(uint32 environment)
{
    sf_gpu_bind_state();
    PutDrawEnv(SF_DRAFT_PTR(DRAWENV, environment));
    return environment;
}

/* FUNCTION_MARKER: 800E5830 */
uint32 sub_800E5830(uint32 environment)
{
    DISPENV *display = SF_DRAFT_PTR(DISPENV, environment);
    sf_gpu_bind_state();
    PutDispEnv(display);
    sf_native_update_video(display);
    return environment;
}

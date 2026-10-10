#include "game_draft.h"

void sub_80140D70(void)
{
    FUNCTION_MARKER(0x80140D70u, "MOVIE.OVL");
    uint32 callback;
    uint32 first;
    uint32 second;
    /* TODO Resolve the pending original scheduler callees */
    if (sf_draft_call(0x80140FC8u, 0u, NULL))
        return;
    sf_draft_call(0x80140F5Cu, 0u, NULL);
    if (!sf_draft_call(0x80140FC8u, 0u, NULL))
        return;
    w_u32(0x80142A44u, 1u);
    w_u32(0x80142A84u, r_u32(0x80142A3Cu));
    second = r_u32(0x80142A40u);
    callback = r_u32(0x80142A7Cu);
    w_u32(0x80142A88u, second);
    w_u32(0x80142A3Cu, 0u);
    w_u32(0x80142A40u, 0u);
    if (callback)
    {
        first = r_u32(0x80142A84u);
        second = r_u32(0x80142A88u);
        sf_draft_call(callback, 2u, (const uint32[]){first, second});
    }
}

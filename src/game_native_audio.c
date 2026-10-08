#include "game_draft.h"
#include "psx_spu.h"

sint32 sub_800F67E4(sint32 sequence, sint16 track);
uint32 sub_800F69F4(sint32 sequence, sint16 track);
uint32 sub_800F7BC4(sint32 sequence, sint16 track);
sint32 sub_800F72B4(sint32 sequence, sint16 track);

static uint32 sf_audio_fresh_cold;

static void sf_audio_bind_transfer(void)
{
    const SpuNativeTransferGuestBinding binding = {
        0x80115168u, 0x80115114u, 0x80115110u, 0x8011512Cu,
        0x80115130u, 0x8011514Cu, 0x80115150u, 3u
    };
    if (!spu_bind_native_transfer_guest(&binding))
    {
        fprintf(stderr, "SF: Cannot bind native SPU transfer owner\n");
        abort();
    }
}

void sub_800F2314(sint32 mode)
{
    if (mode)
        SpuInitHot();
    else
        SpuInit();
    sf_audio_fresh_cold = mode == 0;
    sf_audio_bind_transfer();
    w_u32(0x80115168u, 0u);
    w_u32(0x80115114u, 0u);
    w_u16(0x80115110u, 0u);
    w_u32(0x8011511Cu, 2u);
    w_u32(0x80115120u, 3u);
    w_u32(0x80115124u, 8u);
    w_u32(0x80115128u, 7u);
    w_u32(0x80115170u, 0u);
    w_u32(0x80115174u, r_u32(0x801155E8u));
    w_u32(0x801151D8u, 0u);
    w_u32(0x801151DCu, 0u);
    w_u32(0x801151E0u, 0u);
}

void sub_800F5D24(uint32 attributes)
{
    SpuSetCommonAttr((SpuCommonAttr *)sf_draft_guest_ptr(attributes));
}

sint32 sub_800F1624(sint32 mode)
{
    uint32 work[10];
    uint8 presets[680];
    uint32 i;
    if ((uint32)mode >= 10u)
        return -1;
    for (i = 0; i < 10u; ++i)
        work[i] = r_u32(0x801155E8u + i * 4u);
    for (i = 0; i < sizeof(presets); ++i)
        presets[i] = r_u8(0x801157B8u + i);
    spu_bind_reverb_presets(work, presets, 3u);
    return SpuClearReverbWorkArea(mode);
}

sint32 sub_800FE564(sint32 mode)
{
    sint32 result = SpuSetTransferMode(mode);
    if (spu_transfer_failed())
    {
        fprintf(stderr, "SF: Unbound or failed SPU transfer mode owner\n");
        abort();
    }
    return result;
}

uint32 sub_800FE504(uint32 address)
{
    uint32 result = SpuSetTransferStartAddr(address);
    if (spu_transfer_failed())
    {
        fprintf(stderr, "SF: Unbound or failed SPU transfer address owner\n");
        abort();
    }
    return result;
}


uint32 sub_800F2A94(void)
{
    uint32 voice, i, block;
    SpuVoiceAttr attr;
    SpuCommonAttr common;
    SpuReverbAttr reverb;
    uint16 registers[16];
    if (!sf_audio_fresh_cold)
    {
        fprintf(stderr, "SF: Repeated SPU register initialization needs a native envelope/pitch/noise adapter\n");
        abort();
    }
    sf_audio_fresh_cold = 0u;
    for (voice = 0; voice < 24u; ++voice)
    {
        memset(&attr, 0, sizeof(attr));
        attr.voice = 1u << voice;
        attr.mask = SPU_VOICE_VOLL | SPU_VOICE_VOLR | SPU_VOICE_PITCH |
            SPU_VOICE_WDSA | SPU_VOICE_ADSR_ADSR1 | SPU_VOICE_ADSR_ADSR2 | SPU_VOICE_LSAX;
        attr.volume.left = (sint16)r_u16(0x80115624u);
        attr.volume.right = (sint16)r_u16(0x80115626u);
        attr.pitch = r_u16(0x80115628u);
        attr.addr = (uint32)r_u16(0x8011562Au) << 3;
        attr.adsr1 = r_u16(0x8011562Cu);
        attr.adsr2 = r_u16(0x8011562Eu);
        attr.loop_addr = (uint32)r_u16(0x80115632u) << 3;
        SpuSetVoiceAttr(&attr);
        SpuGetVoiceAttr(&attr);
        if ((uint16)attr.envx != r_u16(0x80115630u))
        {
            fprintf(stderr, "SF: Unrepresented SPU envelope initialization for voice %u\n", voice);
            abort();
        }
    }
    for (i = 0; i < 16u; ++i)
        registers[i] = r_u16(0x80115634u + i * 2u);
    /* The cold mixer reset owns zero pitch modulation and noise state */
    if (registers[8] || registers[9] || registers[10] || registers[11])
    {
        fprintf(stderr, "SF: Missing native SPU pitch modulation/noise initialization adapter\n");
        abort();
    }
    memset(&common, 0, sizeof(common));
    common.mask = SPU_COMMON_MVOLL | SPU_COMMON_MVOLR;
    common.mvol.left = (sint16)registers[0];
    common.mvol.right = (sint16)registers[1];
    SpuSetCommonAttr(&common);
    memset(&reverb, 0, sizeof(reverb));
    reverb.mask = 6u;
    reverb.depth.left = (sint16)registers[2];
    reverb.depth.right = (sint16)registers[3];
    SpuSetReverbDepth(&reverb);
    SpuSetKey(SPU_ON, registers[4] | ((uint32)registers[5] << 16));
    SpuSetKey(SPU_OFF, registers[6] | ((uint32)registers[7] << 16));
    SpuSetReverbVoice(SPU_OFF, SPU_ALLCH);
    SpuSetReverbVoice(SPU_ON, registers[12] | ((uint32)registers[13] << 16));
    /* These unused register words are zero in the original cold preset */
    if (registers[14] || registers[15])
    {
        fprintf(stderr, "SF: Missing native SPU unused-register write adapter\n");
        abort();
    }
    sub_800FACB4(24);
    for (block = 0; block < 32u; ++block)
        for (i = 0; i < 16u; ++i)
            w_u32(0x8013B988u + block * 64u + 60u - i * 4u, 0u);
    w_u32(0x8013770Cu, 60u);
    w_u32(0x80130F00u, 0u);
    w_u32(0x8012F118u, 0u);
    return 60u;
}

uint32 sub_800FB004(sint32 count, uint32 table)
{
    const SpuMallocGuestBinding binding = {
        0x80115120u, 0x80115128u, 0x801151D8u, 0x801151DCu,
        0x801151E0u, 0x80115170u, 0x80115174u
    };
    uint32 result;
    if (count <= 0)
        return 0u;
    if (!spu_bind_malloc_guest(&binding))
    {
        fprintf(stderr, "SF: Cannot bind original SPU allocation table\n");
        abort();
    }
    result = spu_init_malloc_guest((uint32)count, table);
    if (result != (uint32)count || spu_heap_failed())
    {
        fprintf(stderr, "SF: Failed native SPU heap initialization\n");
        abort();
    }
    return result;
}

void sub_800F7F94(uint32 attributes)
{
    SpuSetVoiceAttr((SpuVoiceAttr *)sf_draft_guest_ptr(attributes));
}

void sub_800FC2F4(void)
{
    uint32 voice = r_u16(0x80130FF0u);
    uint32 low = voice < 16u ? 1u << voice : 0u;
    uint32 high = voice < 16u ? 0u : 1u << ((voice - 16u) & 31u);
    uint32 record = 0x80128880u + voice * 54u;
    uint16 value;
    w_u8(record + 29u, 0u);
    w_u16(record + 4u, 0u);
    w_u16(record, 0u);
    value = (uint16)(r_u16(0x8013D628u) | low);
    w_u16(0x8013D628u, value);
    w_u16(0x80127D64u, (uint16)(r_u16(0x80127D64u) & ~value));
    value = (uint16)(r_u16(0x8013D62Au) | high);
    w_u16(0x8013D62Au, value);
    w_u16(0x80127D66u, (uint16)(r_u16(0x80127D66u) & ~value));
}

static uint32 sf_audio_noise_mask;
static uint32 sf_audio_noise_mask_operation(sint32 mode, uint32 mask)
{
    uint32 next = sf_audio_noise_mask;
    mask &= 0x00FFFFFFu;
    if (mode == 0)
        next &= ~mask;
    else if (mode == 1)
        next |= mask;
    else if (mode == 8)
        next = mask;
    if (next)
    {
        fprintf(stderr, "SF: Missing native SPU noise generator adapter for mask %08X\n", next);
        abort();
    }
    sf_audio_noise_mask = next;
    return next;
}

static uint32 sf_audio_pair_mask(uint32 low_address, uint32 high_address)
{
    return r_u16(low_address) | ((uint32)r_u8(high_address) << 16);
}

uint32 sub_800FA324(void)
{
    uint32 i, ring = (r_u32(0x80135DB4u) + 1u) & 15u;
    uint32 inactive = 0xFFFFFFFFu, result;
    SpuVoiceAttr attr;
    w_u32(0x80135DB4u, ring);
    w_u32(0x8013D478u + ring * 4u, 0u);
    for (i = 0; (sint32)i < (sint8)r_u8(0x8012FF90u); ++i)
    {
        memset(&attr, 0, sizeof(attr));
        attr.voice = 1u << i;
        SpuGetVoiceAttr(&attr);
        w_u16(0x80128886u + i * 54u, (uint16)attr.envx);
        if (!r_u16(0x80128886u + i * 54u))
        {
            uint32 address = 0x8013D478u + r_u32(0x80135DB4u) * 4u;
            w_u32(address, r_u32(address) | (1u << i));
        }
    }
    if (!(sint8)r_u8(0x80134230u))
    {
        for (i = 0; i < 15u; ++i)
            inactive &= r_u32(0x8013D478u + i * 4u);
        for (i = 0; (sint32)i < (sint8)r_u8(0x8012FF90u); ++i)
        {
            uint32 address = 0x8012889Du + i * 54u;
            if (inactive & (1u << i))
            {
                if ((sint8)r_u8(address) == 2)
                {
                    uint32 mask = i < 16u ? (uint32)(sint32)(sint16)(1u << i) : 1u << i;
                    sf_audio_noise_mask_operation(0, mask);
                }
                w_u8(address, 0u);
            }
        }
    }
    w_u16(0x80127D64u, (uint16)(r_u16(0x80127D64u) & ~r_u16(0x8013D628u)));
    w_u16(0x80127D66u, (uint16)(r_u16(0x80127D66u) & ~r_u16(0x8013D62Au)));
    for (i = 0; i < 24u; ++i)
    {
        uint32 record = 0x80128880u + i * 54u;
        if (r_u16(record + 30u))
            sf_draft_call(r_u32(0x801311A8u), 1u, &i);
        if (r_u16(record + 42u))
            sf_draft_call(r_u32(0x80130F04u), 1u, &i);
    }
    for (i = 0; i < 24u; ++i)
    {
        uint32 flags = r_u8(0x8012B7B8u + i), values = 0x80131028u + i * 16u;
        memset(&attr, 0, sizeof(attr));
        attr.voice = 1u << i;
        if (flags & 1u)
        {
            attr.mask = 3u;
            attr.volume.left = (sint16)r_u16(values);
            attr.volume.right = (sint16)r_u16(values + 2u);
        }
        if (flags & 4u)
        {
            attr.mask |= SPU_VOICE_PITCH;
            attr.pitch = r_u16(values + 4u);
        }
        if (flags & 8u)
        {
            attr.mask |= SPU_VOICE_WDSA;
            attr.addr = (uint32)r_u16(values + 6u) * 8u;
        }
        if (flags & 16u)
        {
            attr.mask |= SPU_VOICE_ADSR_ADSR1 | SPU_VOICE_ADSR_ADSR2;
            attr.adsr1 = r_u16(values + 8u);
            attr.adsr2 = r_u16(values + 10u);
        }
        if (attr.mask)
            SpuSetVoiceAttr(&attr);
        w_u8(0x8012B7B8u + i, 0u);
    }
    SpuSetKey(SPU_OFF, sf_audio_pair_mask(0x8013D628u, 0x8013D62Au));
    SpuSetKey(SPU_ON, sf_audio_pair_mask(0x80127D64u, 0x80127D66u));
    SpuSetReverbVoice(SPU_OFF, SPU_ALLCH);
    SpuSetReverbVoice(SPU_ON, sf_audio_pair_mask(0x80127D68u, 0x80127D90u));
    result = sf_audio_noise_mask_operation(8, sf_audio_pair_mask(0x80127D92u, 0x80127D94u));
    w_u16(0x8013D628u, 0u);
    w_u16(0x8013D62Au, 0u);
    w_u16(0x80127D64u, 0u);
    w_u16(0x80127D66u, 0u);
    w_u16(0x80127D92u, 0u);
    w_u16(0x80127D94u, 0u);
    return result;
}

void sub_800FACB4(sint32 voice_count)
{
    uint32 i, record;
    sint32 count = (sint8)voice_count;
    SpuVoiceAttr attr;
    static const uint8 zero_halfwords[] = {4,6,8,12,18,20,30,32,34,36,38,42,44,46,48,50};
    sub_800FB064(0);
    w_u16(0x8012CA48u, 0u);
    sub_800FB004(32, 0x801278A0u);
    for (i = 0; i < 192u; ++i)
        w_u16(0x80131028u + i * 2u, 0u);
    for (i = 0; i < 24u; ++i)
        w_u8(0x8012B7B8u + i, 0u);
    w_u16(0x8013C6A8u, 0u);
    for (i = 0; i < 16u; ++i)
        w_u8(0x80130FF8u + i, 0u);
    if ((uint32)count >= 24u)
        count = 24;
    w_u8(0x8012FF90u, (uint8)count);
    for (i = 0; (sint32)i < (sint8)r_u8(0x8012FF90u); ++i)
    {
        uint32 j;
        record = 0x80128880u + i * 54u;
        w_u16(record + 2u, 24u);
        w_u16(record, 255u);
        w_u8(record + 29u, 0u);
        w_u16(record + 16u, 0xFFFFu);
        w_u16(record + 22u, 255u);
        w_u8(record + 10u, 64u);
        for (j = 0; j < sizeof(zero_halfwords); ++j)
            w_u16(record + zero_halfwords[j], 0u);
        memset(&attr, 0, sizeof(attr));
        attr.voice = 1u << i;
        attr.mask = 0x60093u;
        attr.pitch = 0x1000u;
        attr.addr = 0x1000u;
        attr.adsr1 = 0x80FFu;
        attr.adsr2 = 0x4000u;
        SpuSetVoiceAttr(&attr);
        w_u16(0x80130FF0u, (uint16)i);
        sub_800FC2F4();
    }
    w_u32(0x80128DE0u, 0u);
    w_u16(0x80128DE8u, 0x3FFFu);
    w_u16(0x80128DEAu, 0x3FFFu);
    w_u32(0x80128DE4u, 0u);
    w_u16(0x80127D64u, 0u);
    w_u16(0x80127D66u, 0u);
    w_u16(0x8013D628u, 0u);
    w_u16(0x80127D68u, 0u);
    w_u16(0x80127D90u, 0u);
    w_u16(0x80127D92u, 0u);
    w_u16(0x80127D94u, 0u);
    w_u8(0x80134230u, 0u);
    w_u16(0x8012EE54u, 0u);
    w_u16(0x8012F948u, 128u);
    (void)sub_800FA324();
}

sint32 sub_800F9BE4(sint32 enabled)
{
    sint32 result = SpuSetReverb(enabled);
    if (result < 0 || (result && spu_reverb_incomplete()))
    {
        fprintf(stderr, "SF: Missing native SPU reverb processing adapter\n");
        abort();
    }
    w_u32(0x8011516Cu, (uint32)result);
    return result;
}

sint32 sub_800FE7E4(sint32 mode)
{
    sint32 result = SpuIsTransferCompleted(mode);
    if (spu_transfer_failed())
    {
        fprintf(stderr, "SF: Failed native SPU transfer completion owner\n");
        abort();
    }
    return result;
}

void sub_800FDC14(uint32 address)
{
    SpuFree(address);
    if (spu_heap_failed())
    {
        fprintf(stderr, "SF: Failed native SPU free/compaction owner\n");
        abort();
    }
}

void sub_800F7604(uint32 table, sint16 sequences, sint16 tracks)
{
    sint32 i, j;
    w_u16(0x8013C188u, (uint16)sequences);
    w_u16(0x8013C5AAu, (uint16)tracks);
    for (i = 0; i < sequences; ++i)
        w_u32(0x8013B8C8u + (uint32)i * 4u, table + 176u * (uint32)(i * tracks));
    for (i = sequences; i < 32; ++i)
        w_u32(0x80130F00u, r_u32(0x80130F00u) | (1u << ((uint32)i & 31u)));
    for (i = 0; i < (sint16)r_u16(0x8013C188u); ++i)
        for (j = 0; j < (sint16)r_u16(0x8013C5AAu); ++j)
        {
            uint32 record = r_u32(0x8013B8C8u + (uint32)i * 4u) + (uint32)j * 176u;
            w_u32(record + 152u, 0u);
            w_u8(record + 34u, 255u);
            w_u8(record + 35u, 0u);
            w_u16(record + 72u, 0u);
            w_u16(record + 74u, 0u);
            w_u32(record + 156u, 0u);
            w_u32(record + 160u, 0u);
            w_u16(record + 76u, 0u);
            w_u32(record + 172u, 0u);
            w_u32(record + 168u, 0u);
            w_u32(record + 164u, 0u);
            w_u16(record + 78u, 0u);
            w_u16(record + 88u, 127u);
            w_u16(record + 90u, 127u);
            w_u16(record + 92u, 127u);
            w_u16(record + 94u, 127u);
        }
}

void sub_800F60A4(sint16 left, sint16 right)
{
    SpuCommonAttr attr;
    memset(&attr, 0, sizeof(attr));
    attr.mask = 3u;
    attr.mvol.left = (sint16)((sint32)left * 129);
    attr.mvol.right = (sint16)((sint32)right * 129);
    SpuSetCommonAttr(&attr);
}

static sint32 sf_audio_apply_reverb_parameters(void)
{
    sint32 result = SpuSetReverbModeParam((SpuReverbAttr *)sf_draft_guest_ptr(0x80128DE0u));
    if (spu_reverb_incomplete())
    {
        fprintf(stderr, "SF: Missing native SPU reverb parameter processing adapter\n");
        abort();
    }
    return result;
}

sint32 sub_800F9B34(sint16 mode)
{
    uint32 value = (uint32)(sint32)mode;
    uint32 magnitude = mode < 0 ? 0u - value : value;
    if ((magnitude & 0xFFFFu) >= 10u)
        return -1;
    w_u32(0x80128DE0u, 1u);
    w_u32(0x80128DE4u, (uint32)(sint32)(sint16)(magnitude | (mode < 0 ? 256u : 0u)));
    if (!(sint16)magnitude)
        sub_800F9BE4(0);
    (void)sf_audio_apply_reverb_parameters();
    return (sint16)magnitude;
}

sint32 sub_800F9AA4(sint16 left, sint16 right)
{
    w_u32(0x80128DE0u, 6u);
    w_u16(0x80128DE8u, (uint16)((sint32)left * 32767 / 127));
    w_u16(0x80128DEAu, (uint16)((sint32)right * 32767 / 127));
    return sf_audio_apply_reverb_parameters();
}

void sub_800F7824(sint32 tick_mode)
{
    sint32 video = sub_800E4C68();
    sint32 mode = tick_mode & 0x1000 ? tick_mode & 0xFFF : tick_mode;
    w_u32(0x8011565Cu, (tick_mode & 0x1000) != 0);
    w_u32(0x80115658u, (uint32)mode);
    if (mode >= 6)
        w_u32(0x8013770Cu, (uint32)mode);
    else if (mode == 2)
        w_u32(0x8013770Cu, 240u);
    else if (mode == 3)
        w_u32(0x8013770Cu, 120u);
    else if (mode == 4)
    {
        w_u32(0x8013770Cu, 50u);
        w_u32(0x80115658u, video == 1 ? 5u : 50u);
    }
    else if (mode == 1)
    {
        w_u32(0x8013770Cu, 60u);
        w_u32(0x80115658u, video == 0 ? 5u : 60u);
    }
    else
        w_u32(0x8013770Cu, video == 1 && (mode == 0 || mode == 5) ? 50u : 60u);
}

sint32 sub_800BEB64(sint32 enabled)
{
    uint32 i;
    sub_800F2B84();
    w_u32(SF_DRAFT_GP + 1948u, (uint32)enabled);
    sub_800F7604(0x80132BE0u, 2, 16);
    for (i = 0; i < 8u; ++i)
        w_u16(0x80135E22u + i * 28u, 0xFFFFu);
    for (i = 0; i < 16u; ++i)
        w_u32(0x801311B0u + i * 4u, 0u);
    for (i = 0; i < 6u; ++i)
        w_u32(0x8012FF98u + i * 4u, 0u);
    for (i = 0; i < 3u; ++i)
        w_u16(0x80116858u + i * 2u, 127u);
    sub_800F60A4(127, 127);
    sub_800F5C64(0, 0, 1);
    sub_800F74F4(0, 127, 127);
    w_u16(SF_DRAFT_GP + 1936u, 0u);
    sub_800F9CF4();
    sub_800F9B34(0);
    sub_800F9AA4(0, 0);
    sub_800C5D34();
    sub_800F7824(3);
    sub_800F6324();
    sub_800C3A8C(1);
    return 1;
}

/* FUNCTION_MARKER: 800F74F4 */
sint32 sub_800F74F4(sint32 selector, sint16 left, sint16 right)
{
    SpuCommonAttr attributes;
    sint8 kind = (sint8)selector;
    if (kind != 0 && kind != 1)
    {
        fprintf(stderr, "SF: Unbound original volume selector %d\n", kind);
        abort();
    }
    memset(&attributes, 0, sizeof(attributes));
    if (left >= 128)
        left = 127;
    if (right >= 128)
        right = 127;
    if (kind == 0)
    {
        attributes.mask = 0xC0u;
        attributes.cd.volume.left = (sint16)(258 * (sint32)left);
        attributes.cd.volume.right = (sint16)(258 * (sint32)right);
    }
    else
    {
        attributes.mask = 0xC00u;
        attributes.ext.volume.left = (sint16)(258 * (sint32)left);
        attributes.ext.volume.right = (sint16)(258 * (sint32)right);
    }
    SpuSetCommonAttr(&attributes);
    /* The original common setter returns mask & 0x2000 on these paths */
    return 0;
}

/* FUNCTION_MARKER: 800F5C64 */
sint32 sub_800F5C64(sint32 selector, sint8 channel, sint8 enabled)
{
    SpuCommonAttr attributes;
    sint8 kind = (sint8)selector;
    if ((kind != 0 && kind != 1) || (channel != 0 && channel != 1))
    {
        fprintf(stderr, "SF: Unbound original common selector %d/%d\n", kind, channel);
        abort();
    }
    memset(&attributes, 0, sizeof(attributes));
    if (kind == 0)
    {
        if (channel == 0)
        {
            attributes.mask = 0x200u;
            attributes.cd.mix = enabled;
        }
        else
        {
            attributes.mask = 0x100u;
            attributes.cd.reverb = enabled;
        }
    }
    else if (channel == 0)
    {
        attributes.mask = 0x2000u;
        attributes.ext.mix = enabled;
    }
    else
    {
        attributes.mask = 0x1000u;
        attributes.ext.reverb = enabled;
    }
    SpuSetCommonAttr(&attributes);
    if (attributes.mask == 0x2000u)
    {
        /* The original returns SPUCNT after the external mix operation */
        fprintf(stderr, "SF: Native SPUCNT return readback is not bound\n");
        abort();
    }
    return 0;
}

/* FUNCTION_MARKER: 800F653C */
sint32 sub_800F653C(uint32 counter)
{
    return ResetRCnt(counter);
}

/* FUNCTION_MARKER: 800F6404 */
sint32 sub_800F6404(uint32 counter, uint16 target, uint32 mode)
{
    return SetRCnt(counter, target, mode);
}

static sint32 sf_audio_timer_event = -1;

/* FUNCTION_MARKER: 800E41B4 */
uint32 sub_800E41B4(sint32 irq, uint32 callback)
{
    uint32 slot;
    uint32 previous;
    uint16 mask;
    if (irq < 0 || irq > 10)
    {
        fprintf(stderr, "SF: Invalid native IRQ callback index %d\n", irq);
        abort();
    }
    slot = 0x8010E2B4u + (uint32)irq * 4u;
    previous = r_u32(slot);
    if (callback == previous || !r_u16(0x8010E2B0u))
        return previous;
    if (irq != 6)
    {
        fprintf(stderr, "SF: Native IRQ callback owner %d is not bound\n", irq);
        abort();
    }
    mask = r_u16(0x1F801074u);
    w_u16(0x1F801074u, (uint16)(mask & ~0x40u));
    if (sf_audio_timer_event != -1)
    {
        if (!DisableEventPSX((uint32)sf_audio_timer_event) ||
            !CloseEventPSX((uint32)sf_audio_timer_event))
            abort();
        sf_audio_timer_event = -1;
    }
    if (callback)
    {
        /* The native counter delivers BIOS events cooperatively */
        sf_audio_timer_event = OpenEventPSX(0xF2000002u, 2u, 0x1000u, callback);
        if (sf_audio_timer_event == -1 || !EnableEventPSX((uint32)sf_audio_timer_event))
            abort();
        w_u32(slot, callback);
        w_u16(0x8010E2E0u, (uint16)(r_u16(0x8010E2E0u) | 0x40u));
        w_u16(0x1F801074u, (uint16)(mask | 0x40u));
    }
    else
    {
        w_u32(slot, 0u);
        w_u16(0x8010E2E0u, (uint16)(r_u16(0x8010E2E0u) & ~0x40u));
        w_u16(0x1F801074u, (uint16)(mask & ~0x40u));
    }
    return previous;
}

/* FUNCTION_MARKER: 800F6574 */
sint32 sub_800F6574(void)
{
    sint32 sequence;
    sint32 result = (sint32)r_u32(0x8012F118u);
    if (result == 1)
        return result;
    w_u32(0x8012F118u, 1u);
    sub_800FA324();
    result = r_s16(0x8013C188u);
    if (result > 0)
    {
        sequence = 0;
        do
        {
            if (r_u32(0x80130F00u) & (1u << ((uint32)sequence & 31u)))
            {
                sint32 track = 0;
                uint32 slot = 0x8013B8C8u + (uint32)sequence * 4u;
                if (r_s16(0x8013C5AAu) > 0)
                {
                    do
                    {
                        uint32 offset = (uint32)track * 176u + 152u;
                        sint16 seq = (sint16)sequence;
                        sint16 index = (sint16)track;
                        if (r_u32(r_u32(slot) + offset) & 1u)
                        {
                            sub_800F6A94((uint32)(sint32)seq, (uint32)(sint32)index);
                            if (r_u32(r_u32(slot) + offset) & 0x10u)
                                sub_800F67E4(seq, index);
                            if (r_u32(r_u32(slot) + offset) & 0x20u)
                                sub_800F67E4(seq, index);
                            if (r_u32(r_u32(slot) + offset) & 0x40u)
                                sub_800F7BC4(seq, index);
                            if (r_u32(r_u32(slot) + offset) & 0x80u)
                                sub_800F7BC4(seq, index);
                        }
                        if (r_u32(r_u32(slot) + offset) & 2u)
                            sub_800F69F4(seq, index);
                        if (r_u32(r_u32(slot) + offset) & 8u)
                            sub_800F72B4(seq, index);
                        if (r_u32(r_u32(slot) + offset) & 4u)
                        {
                            sub_800F7314(seq, index);
                            w_u32(r_u32(slot) + offset, 0u);
                        }
                        ++track;
                    } while (track < r_s16(0x8013C5AAu));
                }
            }
            ++sequence;
            result = sequence < r_s16(0x8013C188u);
        } while (result);
    }
    w_u32(0x8012F118u, 0u);
    return result;
}

/* FUNCTION_MARKER: 800F72B4 */
sint32 sub_800F72B4(sint32 sequence, sint16 track)
{
    uint32 slot = 0x8013B8C8u + (uint32)((sint32)(sint16)sequence * 4);
    uint32 offset = (uint32)((sint32)track * 176);
    uint32 record = r_u32(slot) + offset;
    w_u8(record + 20u, 1u);
    record = r_u32(slot) + offset;
    w_u32(record + 152u, r_u32(record + 152u) & ~8u);
    return (sint32)record;
}

static uint32 sf_audio_clear_tempo_flags(uint32 slot, uint32 offset)
{
    uint32 record = r_u32(slot) + offset;
    uint32 result;
    w_u32(record + 152u, r_u32(record + 152u) & ~0x40u);
    record = r_u32(slot) + offset;
    result = r_u32(record + 152u) & ~0x80u;
    w_u32(record + 152u, result);
    return result;
}

/* FUNCTION_MARKER: 800F7BC4 */
uint32 sub_800F7BC4(sint32 sequence, sint16 track)
{
    uint32 slot = 0x8013B8C8u + (uint32)((sint32)(sint16)sequence * 4);
    uint32 offset = (uint32)((sint32)track * 176);
    uint32 record = r_u32(slot) + offset;
    uint32 remaining = r_u32(record + 168u) - 1u;
    sint32 interval;
    uint32 current;
    uint32 target;
    uint32 numerator;
    uint32 denominator;
    uint32 quotient;
    w_u32(record + 168u, remaining);
    if ((sint32)remaining < 0)
        return sf_audio_clear_tempo_flags(slot, offset);
    interval = r_s16(record + 78u);
    if (interval > 0)
    {
        uint32 remainder = remaining % (uint32)interval;
        if (remainder)
            return remainder;
        current = r_u32(record + 148u);
        target = r_u32(record + 172u);
        if (target < current)
            w_u32(record + 148u, current - 1u);
        else if (current < target)
            w_u32(record + 148u, current + 1u);
    }
    else
    {
        current = r_u32(record + 148u);
        target = r_u32(record + 172u);
        if (target < current)
        {
            current += (uint32)interval;
            w_u32(record + 148u, current);
            if (current < target)
                w_u32(record + 148u, target);
        }
        else if (current < target)
        {
            target = r_u32(record + 172u);
            current -= (uint32)interval;
            w_u32(record + 148u, current);
            if (target < current)
                w_u32(record + 148u, target);
        }
    }
    numerator = (uint32)(sint32)r_s16(record + 80u) * r_u32(record + 148u) * 10u;
    denominator = r_u32(0x8013770Cu) * 60u;
    if (!denominator)
    {
        fprintf(stderr, "SF: Original sequencer tempo division by zero\n");
        abort();
    }
    quotient = numerator / denominator;
    w_u16(record + 84u, (uint16)quotient);
    if ((sint16)quotient <= 0)
        w_u16(record + 84u, 1u);
    if (!r_u32(record + 168u))
        return sf_audio_clear_tempo_flags(slot, offset);
    target = r_u32(record + 172u);
    if (r_u32(record + 148u) == target)
        return sf_audio_clear_tempo_flags(slot, offset);
    return target;
}

uint32 sf_native_reset_callbacks(void);

/* FUNCTION_MARKER: 800E4184 */
uint32 sub_800E4184(void)
{
    return sf_native_reset_callbacks();
}

static uint16 sf_vab_read16(const uint8 *data)
{
    return (uint16)((uint16)data[0] | ((uint16)data[1] << 8));
}

static uint32 sf_vab_read32(const uint8 *data)
{
    return (uint32)data[0] | ((uint32)data[1] << 8) |
        ((uint32)data[2] << 16) | ((uint32)data[3] << 24);
}

static void sf_vab_write16(uint8 *data, uint16 value)
{
    data[0] = (uint8)value;
    data[1] = (uint8)(value >> 8);
}

static void sf_vab_write32(uint8 *data, uint32 value)
{
    data[0] = (uint8)value;
    data[1] = (uint8)(value >> 8);
    data[2] = (uint8)(value >> 16);
    data[3] = (uint8)(value >> 24);
}

/* FUNCTION_MARKER: 800FDFFC */
uint32 sub_800FDFFC(uint32 size, uint32 base)
{
    (void)size;
    return base;
}

/* FUNCTION_MARKER: 800FE004 */
sint32 sub_800FE004(uint32 header, sint32 requested_bank, uint32 allocator, uint32 argument)
{
    sint32 bank = 16;
    sint16 requested = (sint16)requested_bank;
    uint8 *data;
    uint8 *programs;
    uint32 program_count;
    uint32 tones_offset;
    uint32 lengths_offset;
    uint32 sample_count;
    uint32 sizes[256];
    uint32 total = 0u;
    uint32 running = 0u;
    uint32 base;
    uint32 i;
    uint32 arguments[4];
    if (sub_800FB08C() == 1u)
        return -1;
    sub_800FB064(1);
    if (requested >= 16)
        goto no_bank;
    if (requested == -1)
    {
        for (i = 0u; i < 16u; ++i)
            if (!r_u8(0x80130FF8u + i))
                break;
        if (i < 16u)
            bank = (sint32)i;
    }
    else
    {
        if (requested < 0)
        {
            fprintf(stderr, "SF: Invalid original VAB bank index %d\n", requested);
            abort();
        }
        if (!r_u8(0x80130FF8u + (uint32)requested))
            bank = requested;
    }
    if (bank >= 16)
        goto no_bank;
    w_u8(0x80130FF8u + (uint32)bank, 1u);
    w_u16(0x8013C6A8u, (uint16)(r_u16(0x8013C6A8u) + 1u));
    w_u32(0x8012CA08u + (uint32)bank * 4u, header);
    data = SF_DRAFT_PTR(uint8, header);
    if ((sf_vab_read32(data) >> 8) != 0x564142u)
        goto bad_header;
    program_count = 64u;
    if (data[0] == 112u && (sint32)sf_vab_read32(data + 4u) >= 5)
        program_count = 128u;
    w_u16(0x8012F948u, (uint16)program_count);
    if (sf_vab_read16(data + 18u) > program_count)
        goto bad_header;
    w_u32(0x8012C988u + (uint32)bank * 4u, header + 32u);
    programs = data + 32u;
    tones_offset = 32u + program_count * 16u;
    running = 0u;
    for (i = 0u; i < program_count; ++i)
    {
        uint8 *program = programs + i * 16u;
        uint8 active = program[0];
        sf_vab_write32(program + 8u, running);
        if (active)
            ++running;
    }
    w_u32(0x8012CA50u + (uint32)bank * 4u, header + tones_offset);
    sample_count = data[22u];
    lengths_offset = tones_offset + ((uint32)sf_vab_read16(data + 18u) << 9);
    for (i = 0u; i <= sample_count; ++i)
    {
        uint32 length = sf_vab_read16(data + lengths_offset + i * 2u);
        sizes[i] = length << ((sint32)sf_vab_read32(data + 4u) >= 5 ? 3 : 2);
        total += sizes[i];
    }
    arguments[0] = total;
    arguments[1] = argument;
    arguments[2] = (uint32)bank;
    arguments[3] = header + lengths_offset + 512u;
    base = sf_draft_call(allocator, 4u, arguments);
    if (base == 0xFFFFFFFFu)
        return -1;
    if (base + total > 0x80000u)
        goto bad_header;
    w_u32(0x8013C6D8u + (uint32)bank * 4u, base);
    running = 0u;
    for (i = 0u; i <= sample_count; ++i)
    {
        running += sizes[i];
        sf_vab_write16(programs + (i / 2u) * 16u + ((i & 1u) ? 14u : 12u),
            (uint16)((base + running) >> 3));
    }
    w_u32(0x8013C648u + (uint32)bank * 4u, running);
    w_u8(0x80130FF8u + (uint32)bank, 2u);
    return bank;
bad_header:
    w_u8(0x80130FF8u + (uint32)bank, 0u);
    sub_800FB064(0);
    w_u16(0x8013C6A8u, (uint16)(r_u16(0x8013C6A8u) - 1u));
    return -1;
no_bank:
    sub_800FB064(0);
    return -1;
}

/* FUNCTION_MARKER: 800FDF94 */
sint32 sub_800FDF94(uint32 header, sint16 bank, uint32 spu_base)
{
    return (sint16)sub_800FE004(header, bank, 0x800FDFFCu, spu_base);
}

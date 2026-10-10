#include "game_draft.h"

static sint32 sf_3C0B0_neg(sint32 value)
{
    return (sint32)(0u - (uint32)value);
}

static sint32 sf_3C0B0_abs(sint32 value)
{
    return value < 0 ? sf_3C0B0_neg(value) : value;
}

static uint32 sf_3C0B0_pack(sint32 x, sint32 y)
{
    return (uint32)(uint16)((uint32)x + 0xFF67u) | ((uint32)(uint16)((uint32)y + 0x50u) << 16);
}

static sint32 sf_3C0B0_scale(sint32 value)
{
    sint32 product = (sint32)(((uint32)value << 5) - (uint32)value);
    if (product < 0)
        return sf_3C0B0_neg(sf_3C0B0_neg(product) >> 12);
    return product >> 12;
}

void sub_8003C0B0(sint32 index, uint32 position)
{
    FUNCTION_MARKER(0x8003C0B0u, "SCUS_942.40");
    sint32 ticks = r_s32(0x8010C368u);
    sint32 horizontal, vertical;
    sint32 x = SF_DRAFT_PTR(sint32, position)[0];
    sint32 y = SF_DRAFT_PTR(sint32, position)[1];
    sint16 endpoints[2][2];
    sint16 selected[2];
    sint32 count = 4;
    uint32 offset36 = (uint32)index * 36u;
    uint32 offset48 = (uint32)index * 48u;
    sint32 angle;
    int q;

    if (ticks >= 12)
    {
        horizontal = 24;
        vertical = 20;
    }
    else
    {
        sint32 product = (sint32)(((uint32)ticks * 5u) << 2);
        long long multiplied = (long long)product * 0x2AAAAAABLL;
        sint32 high = (sint32)((unsigned long long)multiplied >> 32);
        horizontal = (sint32)((uint32)ticks << 1);
        vertical = (sint32)((uint32)(high >> 1) - (uint32)(product >> 31));
    }
    if (x > horizontal)
        x = horizontal;
    else if (x < sf_3C0B0_neg(horizontal))
        x = sf_3C0B0_neg(horizontal);
    if (y > vertical)
        y = vertical;
    else if (y < sf_3C0B0_neg(vertical))
        y = sf_3C0B0_neg(vertical);

    if (r_s16(r_u32(r_u32(0x80116B9Cu) + 20u)) == r_s16(0x8011BA00u + ((uint32)index << 1)) && r_u8(0x80116B7Cu) != 0)
        count = 8;

    /* Original eight-entry table at 80011CD8 selects these stores */
    for (q = 0; q < count; ++q)
    {
        sint32 radius = q < 4 ? 1 : 2;
        sint32 px, py;
        uint32 packed;
        if (q & 1)
        {
            px = (sint32)((uint32)x + (uint32)radius);
            if (px > horizontal)
                px = horizontal;
        }
        else
        {
            px = (sint32)((uint32)x - (uint32)radius);
            if (px < sf_3C0B0_neg(horizontal))
                px = sf_3C0B0_neg(horizontal);
        }
        if (q & 2)
        {
            py = (sint32)((uint32)y + (uint32)radius);
            if (py > vertical)
                py = vertical;
        }
        else
        {
            py = (sint32)((uint32)y - (uint32)radius);
            if (py < sf_3C0B0_neg(vertical))
                py = sf_3C0B0_neg(vertical);
        }
        packed = sf_3C0B0_pack(px, py);
        if (q < 4)
            w_u32(0x8011B914u + offset36 + (uint32)q * 4u, packed);
        else
            w_u32(0x8011B9ECu + (uint32)(q - 4) * 4u, packed);
    }

    if (r_s32(0x8011BB2Cu + ((uint32)index << 2)) < 0xE66)
        return;
    angle = sub_800EC124(y, x);
    w_u32(0x8011BA1Cu + offset48, 0x0050FF67u);
    for (q = 0; q < 2; ++q)
    {
        sint32 adjusted = (sint32)((uint32)angle + (q == 0 ? 170u : 0u - 170u));
        sint32 sine = sub_800EA3A4(adjusted);
        sint32 cosine = sub_800EA474(adjusted);
        if (sine == 0)
        {
            endpoints[q][1] = 0;
            endpoints[q][0] = cosine > 0 ? 24 : -24;
        }
        else if (cosine == 0)
        {
            endpoints[q][0] = 0;
            endpoints[q][1] = sine > 0 ? 20 : -20;
        }
        else
        {
            sint32 quotient_x = 98304 / cosine;
            sint32 quotient_y = 81920 / sine;
            /* Both divisors are nonzero and fixed positive numerators cannot overflow */
            if (sf_3C0B0_abs(quotient_x) < sf_3C0B0_abs(quotient_y))
            {
                endpoints[q][1] = (sint16)sf_3C0B0_scale(sine);
                endpoints[q][0] = cosine > 0 ? 24 : -24;
            }
            else
            {
                endpoints[q][0] = (sint16)sf_3C0B0_scale(cosine);
                endpoints[q][1] = sine > 0 ? 20 : -20;
            }
        }
    }
    if (endpoints[0][0] == endpoints[1][0] || endpoints[0][1] == endpoints[1][1])
    {
        selected[0] = (sint16)(((sint32)endpoints[0][0] + endpoints[1][0]) / 2);
        selected[1] = (sint16)(((sint32)endpoints[0][1] + endpoints[1][1]) / 2);
    }
    else
    {
        for (q = 0; q < 2; ++q)
            selected[q] = sf_3C0B0_abs(endpoints[0][q]) < sf_3C0B0_abs(endpoints[1][q]) ? endpoints[1][q] : endpoints[0][q];
    }
    w_u32(0x8011BA24u + offset48, sf_3C0B0_pack(endpoints[0][0], endpoints[0][1]));
    w_u32(0x8011BA2Cu + offset48, sf_3C0B0_pack(endpoints[1][0], endpoints[1][1]));
    w_u32(0x8011BA34u + offset48, sf_3C0B0_pack(selected[0], selected[1]));
}

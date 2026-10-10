#include "game_draft.h"
#include <stdio.h>
#include <stdlib.h>

static uint32 sf_draft_missing_stale_8001E8A4(uint32 local_offset)
{
    fprintf(stderr, "TODO 8001E8A4 original unwritten local +%X\n", local_offset);
    abort();
}

uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);

/* TODO Resolve external dependency signatures */
uint32 sub_80020224();
uint32 sub_80024284();
uint32 sub_8002A890();
uint32 sub_8002DE00();
uint32 sub_80050980();
uint32 sub_8006AAF0();
uint32 sub_8008BEA0();
uint32 sub_8008C358();
uint32 sub_8008C464();
uint32 sub_8008C928();
uint32 sub_8008CA44();
uint32 sub_80090CDC();
uint32 sub_800C7C6C();
uint32 sub_800CD68C();

static uint32 sf_1e8a4_snapshot(uint32 flag_offset, uint32 source_offset, uint32 *position)
{
    uint32 camera = r_u32(0x80115D84u);
    uint32 complete = r_u32(camera + flag_offset);
    position[0] = r_u32(camera + source_offset);
    if (complete)
    {
        position[1] = r_u32(camera + source_offset + 4u);
        position[2] = r_u32(camera + source_offset + 8u);
        position[3] = r_u32(camera + source_offset + 12u);
    }
    return complete;
}

static void sf_1e8a4_publish(uint32 *position, uint32 complete, uint32 local_offset)
{
    uint32 camera = r_u32(0x80115D84u);
    if (!complete)
    {
        /* TODO Inactive camera leaves three original payload words unwritten */
        position[1] = sf_draft_missing_stale_8001E8A4(local_offset + 4u);
        position[2] = sf_draft_missing_stale_8001E8A4(local_offset + 8u);
        position[3] = sf_draft_missing_stale_8001E8A4(local_offset + 12u);
    }
    w_u32(camera + 0xD1Cu, position[0]);
    w_u32(camera + 0xD20u, position[1]);
    w_u32(camera + 0xD24u, position[2]);
    w_u32(camera + 0xD28u, position[3]);
}

static void sf_1e8a4_orientation(void)
{
    uint32 camera = r_u32(0x80115D84u);
    // Native padding is zero; reviewed request consumers use only three flags
    w_u32(camera + 0xD30u, 1u);
    w_u32(camera + 0xD34u, 1u);
    w_u32(camera + 0xD38u, 1u);
    w_u32(camera + 0xD3Cu, 0u);
}

sint32 sub_8001E8A4(void)
{
    uint32 camera, complete, x;
    uint32 position[4], output_position[4];
    FUNCTION_MARKER(0x8001E8A4u, "SCUS_942.40");
    camera = r_u32(0x80115D84u);
    complete = r_u32(camera + 0x808u);
    x = r_u32(camera + 0x840u);
    if (complete)
    {
        (void)r_u32(camera + 0x844u);
        (void)r_u32(camera + 0x848u);
        (void)r_u32(camera + 0x84Cu);
    }
    camera = r_u32(0x80115D84u);
    w_u32(camera + 0xD1Cu, x);
    sub_80018994(camera, 1, 5, 0);

    complete = sf_1e8a4_snapshot(0xA90u, 0xAC8u, position);
    sf_1e8a4_publish(position, complete, 0x40u);
    sf_1e8a4_orientation();
    sub_80018994(r_u32(0x80115D84u), 1, 7, 0);
    sub_8001D9A4();

    complete = sf_1e8a4_snapshot(0x94Cu, 0x984u, position);
    sf_1e8a4_publish(position, complete, 0x30u);
    sf_1e8a4_orientation();
    sub_80018994(r_u32(0x80115D84u), 1, 6, 0);
    sub_8001E314();

    complete = sf_1e8a4_snapshot(0x2F8u, 0x330u, position);
    sf_1e8a4_publish(position, complete, 0x20u);
    sf_1e8a4_orientation();
    sub_80018994(r_u32(0x80115D84u), 1, 1, 0);
    sub_8001B51C();
    sub_8001E350();

    complete = sf_1e8a4_snapshot(0x1B4u, 0x1ECu, position);
    sf_1e8a4_publish(position, complete, 0x10u);
    sf_1e8a4_orientation();
    sub_80018994(r_u32(0x80115D84u), 1, 0, 0);
    /* Native padding is zero; E710 publishes it to the reviewed XYZ request */
    output_position[3] = 0u;
    sub_8001E710(sf_draft_guest_address(output_position));
    sf_1e8a4_publish(output_position, 1u, 0x50u);
    sf_1e8a4_orientation();
    camera = r_u32(0x80115D84u);
    w_u8(camera + 0xD40u, 0u);
    sub_80018994(r_u32(0x80115D84u), 1, 2, 1);

    sf_1e8a4_publish(output_position, 1u, 0x50u);
    sf_1e8a4_orientation();
    sub_80018994(r_u32(0x80115D84u), 1, 2, 0);
    sub_80020258();

    complete = sf_1e8a4_snapshot(0x580u, 0x5B8u, position);
    sf_1e8a4_publish(position, complete, 0x60u);
    sf_1e8a4_orientation();
    sub_80018994(r_u32(0x80115D84u), 1, 3, 0);

    camera = r_u32(0x80115D84u);
    complete = r_u32(camera + 0xBD4u);
    x = r_u32(camera + 0xC0Cu);
    if (complete)
    {
        (void)r_u32(camera + 0xC10u);
        (void)r_u32(camera + 0xC14u);
        (void)r_u32(camera + 0xC18u);
    }
    camera = r_u32(0x80115D84u);
    w_u32(camera + 0xD1Cu, x);
    return sub_80018994(camera, 1, 8, 0);
}

sint32 sub_800BF2A0(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800BF2A0u, "SCUS_942.40");
    /* TODO Unverified native translation */
    uint32 slot;
    uint32 index;
    uint32 count;
    uint32 bank;
    uint32 record;
    uint32 offset;
    uint32 parent;
    uint32 source_index;
    uint32 source_offset;
    uint32 source_record;
    uint32 value;
    uint32 kind;
    uint16 word;

    for (slot = 0x801311B0u; slot < 0x801311F0u; slot += 4u)
    {
        bank = r_u32(slot);
        if (!bank || (r_u32(bank + 12u) & 0x80000000u))
            continue;
        count = r_u32(bank + 12u) & 0xFFu;
        for (index = 0u; index < count; ++index)
        {
            offset = 24u * index;
            record = r_u32(r_u32(slot) + 4u) + offset;
            if ((r_u16(record) & 0x1Fu) == 2u)
            {
                parent = (uint32)sub_800C2FA8(r_u32(record + 20u));
                record = r_u32(r_u32(slot) + 4u) + offset;
                value = parent ? r_u16(parent + 12u) : 99u;
                w_u8(record + 3u, (uint8)value);
            }
        }
    }
    for (slot = 0x801311B0u; slot < 0x801311F0u; slot += 4u)
    {
        bank = r_u32(slot);
        if (!bank)
            continue;
        count = r_u8(bank + 12u);
        for (index = 0u; index < count; ++index)
        {
            offset = 24u * index;
            bank = r_u32(slot);
            record = r_u32(bank + 4u) + offset;
            word = r_u16(record);
            kind = word & 0x1Fu;
            if ((r_u32(bank + 12u) & 0x80000000u) && (word & 0xFFE0u))
            {
                kind = (word & 0x8000u) ? 10u : 9u;
                w_u32(record + 20u, ((uint32)word >> 11) & 0xFu);
                record = r_u32(r_u32(slot) + 4u) + offset;
                w_u8(record + 2u, (uint8)((r_u16(record) >> 5) & 0x3Fu));
            }
            if ((kind - 7u >= 2u) && (kind - 9u >= 2u))
            {
                bank = r_u32(slot);
                record = r_u32(bank + 4u) + offset;
                w_u8(record + 2u, (uint8)r_u32(bank + 8u));
            }
            else
            {
                record = r_u32(r_u32(slot) + 4u) + offset;
                source_index = r_u8(record + 2u);
                if (kind - 7u < 2u)
                    parent = (uint32)sub_800C2EE0(r_u32(record + 20u));
                else
                    parent = (uint32)sub_800C2F28(r_u32(record + 20u));
                if (parent)
                {
                    record = r_u32(r_u32(slot) + 4u) + offset;
                    w_u8(record + 2u, (uint8)r_u32(parent + 8u));
                    source_offset = 24u * source_index;
                    source_record = r_u32(parent + 4u) + source_offset;
                    record = r_u32(r_u32(slot) + 4u) + offset;
                    value = r_u8(source_record + 3u);
                    w_u8(record + 3u, (uint8)value);
                    source_record = r_u32(parent + 4u) + source_offset;
                    record = r_u32(r_u32(slot) + 4u) + offset;
                    value = r_u8(source_record + 4u);
                    w_u8(record + 4u, (uint8)value);
                    source_record = r_u32(parent + 4u) + source_offset;
                    record = r_u32(r_u32(slot) + 4u) + offset;
                    value = r_u8(source_record + 5u);
                    w_u8(record + 5u, (uint8)value);
                    source_record = r_u32(parent + 4u) + source_offset;
                    record = r_u32(r_u32(slot) + 4u) + offset;
                    value = r_u8(source_record + 6u);
                    w_u8(record + 6u, (uint8)value);
                    if (kind == 7u || kind == 9u)
                    {
                        source_record = r_u32(parent + 4u) + source_offset;
                        record = r_u32(r_u32(slot) + 4u) + offset;
                        value = r_u8(source_record + 7u);
                        w_u8(record + 7u, (uint8)value);
                        source_record = r_u32(parent + 4u) + source_offset;
                        record = r_u32(r_u32(slot) + 4u) + offset;
                        value = r_u8(source_record + 8u);
                        w_u8(record + 8u, (uint8)value);
                        source_record = r_u32(parent + 4u) + source_offset;
                        record = r_u32(r_u32(slot) + 4u) + offset;
                        value = r_u8(source_record + 9u);
                        w_u8(record + 9u, (uint8)value);
                        source_record = r_u32(parent + 4u) + source_offset;
                        record = r_u32(r_u32(slot) + 4u) + offset;
                        value = r_u16(source_record + 10u);
                        w_u16(record + 10u, (uint16)value);
                        source_record = r_u32(parent + 4u) + source_offset;
                        record = r_u32(r_u32(slot) + 4u) + offset;
                        value = r_u8(source_record + 12u);
                        w_u8(record + 12u, (uint8)value);
                        source_record = r_u32(parent + 4u) + source_offset;
                        record = r_u32(r_u32(slot) + 4u) + offset;
                        value = r_u16(source_record + 14u);
                        w_u16(record + 14u, (uint16)value);
                        source_record = r_u32(parent + 4u) + source_offset;
                        record = r_u32(r_u32(slot) + 4u) + offset;
                        value = r_u8(source_record + 18u);
                        w_u8(record + 18u, (uint8)value);
                    }
                    source_record = r_u32(parent + 4u) + source_offset;
                    record = r_u32(r_u32(slot) + 4u) + offset;
                    value = r_u16(source_record);
                    if (kind == 9u || kind == 10u)
                    {
                        value = (value & 0x1Fu) | (source_index << 5) | (r_u32(record + 20u) << 11);
                        if (kind == 10u)
                            value |= 0x8000u;
                    }
                    w_u16(record, (uint16)value);
                }
            }
            bank = r_u32(slot);
            record = r_u32(bank + 4u) + offset;
            if ((r_u16(record) & 0x1Fu) != 2u && !(r_u32(bank + 12u) & 0x80000000u))
                w_u8(record + 3u, r_u8(record + 7u));
        }
        bank = r_u32(slot);
        w_u32(bank + 12u, r_u32(bank + 12u) | 0x80000000u);
    }
    return sub_800C2C94((sint16)a1, (sint16)a2);
}

sint32 sub_8004C7B0(sint32 a1, sint32 a2)
{
    uint32 object = (uint32)a1;
    uint32 random, camera, camera_output, particle, mode, mask, base, value, shift;
    uint32 x, y, z, velocity_x, velocity_y, velocity_z;
    sint32 index, remaining = a2, result, numerator, divisor, angle;
    uint32 age_shift;

    FUNCTION_MARKER(0x8004C7B0u, "SCUS_942.40");
    random = sub_800EC8F4();
    age_shift = (random & 1u) + 2u;
    index = (sint16)r_u16(object + 30u);
    value = r_u32(SF_DRAFT_GP + 2664u);
    mask = r_u32(SF_DRAFT_GP + 3348u);
    w_u8(object + 34u, (uint8)((sint32)value >> 1));
    camera = r_u32(0x80115D84u);
    value = r_u32(SF_DRAFT_GP + 2672u);
    w_u32(object + 4u, mask);
    w_u32(object, value);
    result = sub_80018430(camera, sf_draft_guest_address(&camera_output));
    if (index < 0)
        return result;

    do
    {
        particle = 0x80137740u + 104u * (uint32)index;
        mode = r_u32(SF_DRAFT_GP + 2732u);
        if (mode == 1u)
        {
            random = sub_800EC8F4();
            mask = r_u32(0x8011CE68u);
            base = r_u32(0x8011CE48u);
            w_u32(particle, base + (mask & random));
            random = sub_800EC8F4();
            mask = r_u32(0x8011CE6Cu);
            base = r_u32(0x8011CE4Cu);
            w_u32(particle + 4u, base + (mask & random));
            random = sub_800EC8F4();
            mask = r_u32(0x8011CE70u);
            base = r_u32(0x8011CE50u);
            w_u32(particle + 8u, base + (mask & random));
        }
        else if (mode == 0u)
        {
            x = r_u32(0x8011CE48u);
            y = r_u32(0x8011CE4Cu);
            z = r_u32(0x8011CE50u);
            w_u32(particle, x);
            w_u32(particle + 4u, y);
            w_u32(particle + 8u, z);
            w_u32(particle + 12u, r_u32(0x8011CE54u));
        }
        else
        {
            random = sub_800EC8F4();
            mask = r_u32(0x8011CE68u);
            value = r_u32(0x8011CE58u);
            base = r_u32(0x8011CE48u);
            numerator = (sint32)((random & mask) * (value - base));
            divisor = (sint32)mask;
            if (!divisor)
                _break(7u, 0);
            if (divisor == -1 && numerator == (sint32)0x80000000u)
                _break(6u, 0);
            w_u32(particle, base + (uint32)(numerator / divisor));
            random = sub_800EC8F4();
            mask = r_u32(0x8011CE6Cu);
            base = r_u32(0x8011CE4Cu);
            x = r_u32(particle);
            w_u32(particle + 4u, base - (mask & random));
            base = r_u32(0x8011CE48u);
            value = r_u32(SF_DRAFT_GP + 2728u);
            value = (x - base) * value;
            base = r_u32(0x8011CE50u);
            w_u32(particle + 8u, base + (uint32)((sint32)value >> 8));
        }

        if (r_u32(SF_DRAFT_GP + 2748u))
        {
            random = sub_800EC8F4();
            mask = r_u32(SF_DRAFT_GP + 2748u);
            value = r_u32(0x8011CE78u) + ((mask & random) << 8);
            x = (uint32)((sint32)value < 0);
            random = sub_800EC8F4();
            mask = r_u32(SF_DRAFT_GP + 2748u);
            base = r_u32(0x8011CE78u);
            shift = (12u - r_u32(SF_DRAFT_GP + 2752u)) & 31u;
            value = base + ((mask & random) << 8);
            velocity_x = x ? 0u - (uint32)((sint32)(0u - value) >> shift) : (uint32)((sint32)value >> shift);
            w_u32(particle + 16u, velocity_x);
            random = sub_800EC8F4();
            mask = r_u32(SF_DRAFT_GP + 2748u);
            shift = r_u32(SF_DRAFT_GP + 2752u) & 31u;
            value = r_u32(0x8011CE7Cu) + ((mask & random) << 8);
            velocity_y = value << shift;
            w_u32(particle + 20u, velocity_y);
            random = sub_800EC8F4();
            mask = r_u32(SF_DRAFT_GP + 2748u);
            value = r_u32(0x8011CE80u) + ((mask & random) << 8);
            z = (uint32)((sint32)value < 0);
            random = sub_800EC8F4();
            mask = r_u32(SF_DRAFT_GP + 2748u);
            base = r_u32(0x8011CE80u);
            shift = (12u - r_u32(SF_DRAFT_GP + 2752u)) & 31u;
            value = base + ((mask & random) << 8);
            velocity_z = z ? 0u - (uint32)((sint32)(0u - value) >> shift) : (uint32)((sint32)value >> shift);
        }
        else
        {
            shift = r_u32(SF_DRAFT_GP + 2752u);
            velocity_x = (uint32)((sint32)r_u32(0x8011CE78u) >> ((12u - shift) & 31u));
            w_u32(particle + 16u, velocity_x);
            velocity_y = r_u32(0x8011CE7Cu) << (shift & 31u);
            w_u32(particle + 20u, velocity_y);
            velocity_z = (uint32)((sint32)r_u32(0x8011CE80u) >> ((12u - shift) & 31u));
        }
        w_u32(particle + 24u, velocity_z);
        x = r_u32(particle);
        velocity_x = r_u32(particle + 16u);
        velocity_y = r_u32(particle + 20u);
        velocity_z = r_u32(particle + 24u);
        w_u32(particle, x + velocity_x);
        y = r_u32(particle + 4u);
        z = r_u32(particle + 8u);
        w_u32(particle + 4u, y + (uint32)((sint32)velocity_y >> 12));
        w_u32(particle + 8u, z + velocity_z);
        value = r_u32(SF_DRAFT_GP + 2664u) + (uint32)(remaining >> age_shift);
        w_u16(particle + 36u, (uint16)value);
        mode = r_u32(object + 48u);
        remaining = (sint32)((uint32)remaining - 1u);
        if (mode < 2u)
        {
            w_u32(particle + 32u, r_u32(SF_DRAFT_GP + 2668u));
            random = sub_800EC8F4();
            w_u16(particle + 98u, (uint16)random);
            random = sub_800EC8F4();
            mask = r_u32(SF_DRAFT_GP + 2740u);
            base = r_u32(SF_DRAFT_GP + 2736u);
            value = (mask & random) - (uint32)((sint32)mask >> 1) + base;
            w_u16(particle + 86u, (uint16)value);
            angle = ((sint16)value >> 1) + 2048;
            w_u16(particle + 92u, (uint16)angle);
            random = sub_800EC8F4();
            mask = r_u32(SF_DRAFT_GP + 2744u);
            w_u16(particle + 100u, (uint16)((mask & random) - (uint32)((sint32)mask >> 1)));
            value = r_u32(object + 4u);
            base = r_u32(SF_DRAFT_GP + 2668u);
            if (value & 0x8000u)
                sub_800C7C6C(particle + 40u, base, 400, 0, 400, 0, 400, 0);
            else
                sub_800C7C40(particle + 40u, (sint32)base, 400, 400, 400);
        }
        else if (mode == 4u)
        {
            sub_800DE120((sint32)r_u32(0x8010C254u), (sint32)(particle + 40u), 128, 128, 0, 0);
            w_u32(particle + 32u, r_u32(SF_DRAFT_GP + 2668u));
        }
        else if (mode == 2u)
            sub_800C8148(particle + 40u, (sint32)r_u32(SF_DRAFT_GP + 2668u), 400, 400);
        else if (mode == 3u)
        {
            base = r_u32(SF_DRAFT_GP + 2668u);
            w_u32(particle + 32u, base);
            sub_800C811C(particle + 40u, 0, 400, 400, (sint32)base);
        }
        if (mode < 4u)
        {
            if (!camera)
            {
                /* TODO Original camera helper leaves local SP+20 unwritten for null camera */
                fprintf(stderr, "TODO sub_8004C7B0 unwritten camera output SP+20\n");
                abort();
            }
            sub_800C7BB0((sint32)camera_output, particle + 40u);
        }
        index = (sint16)r_u16(particle + 38u);
        result = index * 2;
    } while (index >= 0);
    return result;
}

sint32 sub_80055F60(uint32 entry_flag)
{
    FUNCTION_MARKER(0x80055F60u, "SCUS_942.40");
    uint32 base, index, object, type, transform, position[4] = {0};
    w_u32(0x801166F4u, 0);
    if (entry_flag && r_s16(r_u32(r_u32(0x80116B9Cu) + 24u) + 8u) > 0)
    {
        uint32 allowed = 1;
        if (r_u32(0x80115E80u))
        {
            uint32 mode = r_u32(0x80115FB8u);
            allowed = mode - 12u >= 2u && mode != 18u;
        }
        if (allowed)
        {
            uint32 actor = r_u32(0x80116AB0u);
            uint32 frame = r_u32(0x80116A88u);
            if (((frame + 4u * actor) & 31u) == 0)
            {
                uint32 callback = r_s16(0x80130C88u) == 9 ? 0x8014AC70u : 0x8014AB64u;
                sf_draft_call(callback, 0, NULL);
            }
        }
    }
    sub_80067294();
    sub_80055D90();
    if (r_s16(0x801166F0u) > 0)
    {
        base = r_u32(0x80116930u);
        index = 0;
        if (r_u8(base) != 255u)
        {
            do
            {
                uint32 id = r_u8(base + index);
                object = r_u32(0x80116920u) + 52u * id;
                if (r_s16(object + 30u) >= 0)
                {
                    if (r_u8(object + 39u))
                    {
                        if (r_u32(object + 44u) == 8u)
                            sub_80050980(object);
                    }
                    else if (r_s16(object + 22u))
                    {
                        type = r_u32(object + 44u);
                        if (type == 8u)
                        {
                            sint32 sound;
                            sint32 model;
                            position[0] = (uint32)(sint32)r_s16(object + 8u);
                            sound = r_s16(object + 24u);
                            position[1] = (uint32)(sint32)r_s16(object + 10u);
                            position[2] = (uint32)(sint32)r_s16(object + 12u);
                            model = r_s16(object + 30u);
                            sub_8004BEDC((sint32)object, (sint32)(0x80137740u + 104u * (uint32)model), 0, model);
                            type = r_u32(0x8011CDD8u);
                            --index;
                            if (type)
                                sub_800CD68C(0x8011CDD8u);
                            sub_8006AAF0(sound, sf_draft_guest_address(position), 1);
                        }
                        w_u16(object + 22u, 0);
                    }
                }
                base = r_u32(0x80116930u);
                ++index;
            } while (r_u8(base + index) != 255u);
        }
        if (r_s16(0x80116AE6u))
        {
            if (!r_u32(0x80115E80u))
                sub_800456D0((sint32)r_u32(0x80116B9Cu), 0x8011CE88u);
            else
            {
                uint32 actor = r_u32(0x80116B9Cu);
                uint32 x, y, z, other_x, other_y, other_z;
                transform = r_u32(r_u32(r_u32(actor + 8u) + 24u) + 44u);
                x = r_u32(transform + 20u);
                w_u32(0x8011CE88u, x);
                transform = r_u32(r_u32(r_u32(actor + 8u) + 24u) + 44u);
                y = r_u32(transform + 24u);
                w_u32(0x8011CE8Cu, y);
                transform = r_u32(r_u32(r_u32(actor + 8u) + 24u) + 44u);
                z = r_u32(transform + 28u);
                y = 0u - y;
                w_u32(0x8011CE8Cu, y);
                w_u32(0x8011CE90u, z);
                transform = r_u32(r_u32(r_u32(actor + 8u) + 24u) + 20u);
                other_x = r_u32(transform + 20u);
                transform = r_u32(r_u32(r_u32(actor + 8u) + 24u) + 20u);
                other_y = r_u32(transform + 24u);
                transform = r_u32(r_u32(r_u32(actor + 8u) + 24u) + 20u);
                other_z = r_u32(transform + 28u);
                other_y = 0u - other_y;
                w_u32(0x8011CE88u, x + (x - other_x));
                w_u32(0x8011CE90u, z + (z - other_z));
                w_u32(0x8011CE8Cu, y - 64u);
            }
            sub_800DC8AC(r_u32(0x8011CE04u), 0, 0x8011CE98u);
        }
        {
            uint32 actor = r_u32(0x80116AB0u);
            sint32 height = r_s32(r_u32(r_u32(r_u32(0x80115CCCu) + 76u * actor + 52u) + 12u) + 300u);
            if (height >= -31999)
                w_u16(0x80116B58u, (uint32)height);
        }
        object = r_u32(0x8013C730u);
        if (r_u16(object + 6u) & 1u)
            object = 0x8013C730u;
        else
            object = r_u32(0x80115D84u);
        sub_80018430(object, 0x801166F8u);
        index = 0;
        base = r_u32(0x80115D84u);
        position[0] = (uint32)(sint32)r_s16(r_u32(r_u32(base)) + 4u);
        position[1] = (uint32)(sint32)r_s16(r_u32(r_u32(base)) + 10u);
        position[1] = 0u - position[1];
        transform = r_u32(r_u32(base));
        object = r_u32(0x801166F8u);
        position[2] = (uint32)(sint32)r_s16(transform + 16u);
        w_u16(0x8011670Cu, (sint32)position[1] < 0 ? 0u - position[1] : position[1]);
        sub_800C8D98((sint32)object);
        base = r_u32(0x80116930u);
        if (r_u8(base) != 255u)
        {
            do
            {
                uint32 id;
                uint8 countdown;
                base = r_u32(0x80116930u);
                id = r_u8(base + index);
                object = r_u32(0x80116920u) + 52u * id;
                if (r_s16(object + 30u) >= 0)
                {
                    countdown = r_u8(object + 39u);
                    if (!countdown)
                        sub_80055D14(object);
                    else
                        w_u8(object + 39u, countdown - 1u);
                }
                base = r_u32(0x80116930u);
                if (id == r_u8(base + index))
                    ++index;
            } while (r_u8(base + index) != 255u);
        }
        object = r_u32(0x801166F4u);
        if (object)
            sub_8006BC98(2, 23, 0, (sint32)object);
    }
    return sub_80015364(16, 4, 65534, 65534, 0, 0, 0, 0);
}

sint32 sub_80078254(uint32 a1, uint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x80078254u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    int *a2_view = SF_DRAFT_PTR(int, a2);

    __int16 *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    sint32 v11;
    int v12;
    _DWORD *v13;
    char *v14;
    int v15;
    _DWORD *v16;
    char *v17;
    int v18;
    int v19;
    __int16 **v20;
    char *v21;
    int v22;
    __int16 **v23;
    char *v24;
    int v25;
    int v26;
    __int16 **v27;
    char *v28;
    int v29;
    __int16 **v31;
    char *v32;
    int v33;
    int v34;
    char *v35;
    int v36;
    char *v37;
    int v38;
    int v39;
    int v40;
    int v41;
    int v42;
    int v43;
    int v44;
    int v45;
    int v46;
    int v47;
    int v48;
    sint32 v49;
    bool v50; // dc
    int v51;
    int v52;
    int v53;
    int v54;
    int v55;
    int v56;
    int v57;
    int v58;
    int v59;
    int v60;
    char v61[64];
    int v62[2];
    int v63;
    int v64;
    int v65;
    int v66;
    int v67;

    v5 = (__int16 *)a2_view[2];
    v6 = *a2_view;
    v7 = v5[2];
    v8 = *v5;
    if (v8 < 0)
        v8 = -v8;
    v9 = v5[1];
    if (v7 < 0)
        v7 = -v7;
    v10 = v5[1];
    if (v9 < 0)
        v10 = -v9;
    if (v10 < v7)
    {
        v11 = v10 < v7;
        if (v8 >= v7)
        {
            v7 = v8;
            goto LABEL_14;
        }
    }
    else
    {
        v11 = v10 < v7;
        if (v8 >= v10)
        {
            v7 = v8;
            goto LABEL_14;
        }
    }
    if (!v11)
        v7 = v10;
LABEL_14:
    if (v7 == v8)
    {
        v12 = 0;
        if (*v5 < 0)
        {
            v59 = a1_view[1];
            v60 = a1_view[2];
            if (v6 > 0)
            {
                v16 = (_DWORD *)(a2_view + 5);
                v17 = SF_DRAFT_PTR(char, v61);
                do
                {
                    *(_DWORD *)v17 = (*(__int16 *)(*v16 + 2));
                    ++v12;
                    v18 = *(__int16 *)(*v16++ + 4);
                    *((_DWORD *)v17 + 2) = v18;
                    v17 += 16;
                } while (v12 < v6);
            }
        }
        else
        {
            v59 = a1_view[2];
            v60 = a1_view[1];
            if (v6 > 0)
            {
                v13 = (_DWORD *)(a2_view + 5);
                v14 = SF_DRAFT_PTR(char, v61);
                do
                {
                    *(_DWORD *)v14 = (*(__int16 *)(*v13 + 4));
                    ++v12;
                    v15 = *(__int16 *)(*v13++ + 2);
                    *((_DWORD *)v14 + 2) = v15;
                    v14 += 16;
                } while (v12 < v6);
            }
        }
    }
    else if (v7 == v10)
    {
        v19 = 0;
        if (v5[1] < 0)
        {
            v59 = a1_view[2];
            v60 = *a1_view;
            if (v6 > 0)
            {
                v23 = (__int16 **)(a2_view + 5);
                v24 = SF_DRAFT_PTR(char, v61);
                do
                {
                    *(_DWORD *)v24 = ((*v23)[2]);
                    ++v19;
                    v25 = **v23++;
                    *((_DWORD *)v24 + 2) = v25;
                    v24 += 16;
                } while (v19 < v6);
            }
        }
        else
        {
            v59 = *a1_view;
            v60 = a1_view[2];
            if (v6 > 0)
            {
                v20 = (__int16 **)(a2_view + 5);
                v21 = SF_DRAFT_PTR(char, v61);
                do
                {
                    *(_DWORD *)v21 = (**v20);
                    ++v19;
                    v22 = (*v20++)[2];
                    *((_DWORD *)v21 + 2) = v22;
                    v21 += 16;
                } while (v19 < v6);
            }
        }
    }
    else
    {
        v26 = 0;
        if (v5[2] < 0)
        {
            v59 = *a1_view;
            v60 = a1_view[1];
            if (v6 > 0)
            {
                v31 = (__int16 **)(a2_view + 5);
                v32 = SF_DRAFT_PTR(char, v61);
                do
                {
                    *(_DWORD *)v32 = (**v31);
                    ++v26;
                    v33 = (*v31++)[1];
                    *((_DWORD *)v32 + 2) = v33;
                    v32 += 16;
                } while (v26 < v6);
            }
        }
        else
        {
            v59 = a1_view[1];
            v60 = *a1_view;
            if (v6 > 0)
            {
                v27 = (__int16 **)(a2_view + 5);
                v28 = SF_DRAFT_PTR(char, v61);
                do
                {
                    *(_DWORD *)v28 = ((*v27)[1]);
                    ++v26;
                    v29 = **v27++;
                    *((_DWORD *)v28 + 2) = v29;
                    v28 += 16;
                } while (v26 < v6);
            }
        }
    }
    v34 = 0;
    if (v6 > 0)
    {
        v35 = SF_DRAFT_PTR(char, v61);
        do
        {
            v36 = 16 * (v34 + 1);
            if (v34 + 1 == v6)
                v36 = 0;
            v37 = &v61[v36];
            v38 = *((_DWORD *)v35 + 2);
            v39 = *((_DWORD *)v37 + 2);
            v62[1] = 0;
            v40 = v38 - v39;
            v62[0] = v38 - v39;
            v41 = *(uint8 *)(SF_DRAFT_GP + 1017);
            v42 = *(_DWORD *)v37 - *(_DWORD *)v35;
            v63 = v42;
            if (!v41)
            {
                sub_800D9580(sf_draft_guest_address(v62), sf_draft_guest_address(&v66));
                v51 = v66;
                if (v66 <= 0)
                    v51 = 1;
            LABEL_73:
                v66 = v51;
                goto LABEL_74;
            }
            v43 = v40;
            if (v40 < 0)
                v43 = -v40;
            if (v42 < 0)
                v42 = -v42;
            v44 = v43 + v42;
            v45 = v43 - v42;
            v46 = (v43 + v42) >> 1;
            v47 = (v43 + v42) >> 2;
            if (v43 - v42 < 0)
                v45 = v42 - v43;
            if (v45 >= v46)
            {
                v49 = v44 < 2;
                if (v46 + v47 < v45)
                    goto LABEL_59;
                v48 = v44 - (v44 >> 3);
            }
            else
            {
                v48 = v44 - v47;
            }
            v49 = v48 < 2;
        LABEL_59:
            v50 = v49;
            v51 = 1;
            if (v50)
                goto LABEL_73;
            v52 = v62[0];
            v53 = v63;
            if (v62[0] < 0)
                v52 = -v62[0];
            if (v63 < 0)
                v53 = -v63;
            v54 = v52 + v53;
            v55 = v52 - v53;
            v56 = (v52 + v53) >> 1;
            v57 = (v52 + v53) >> 2;
            if (v52 - v53 < 0)
                v55 = v53 - v52;
            if (v55 >= v56)
            {
                if (v56 + v57 >= v55)
                    v54 -= v54 >> 3;
            }
            else
            {
                v54 -= v57;
            }
            v66 = v54;
        LABEL_74:
            v58 = (v59 - *(_DWORD *)v35) * v62[0];
            v64 = v59 - *(_DWORD *)v35;
            v65 = v60 - *((_DWORD *)v35 + 2);
            v67 = v58 + v65 * v63;
            ++v34;
            if (a3 * v66 < v67)
                return 0;
            v35 += 16;
        } while (v34 < v6);
    }
    return 1;
}

uint32 sub_80078724(uint32 a1, sint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80078724u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    int *a3_view = SF_DRAFT_PTR(int, a3);
    int *a4_view = SF_DRAFT_PTR(int, a4);
    int v5;
    int v8;
    sint32 i;

    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    sint32 result;
    int v29[4];
    int v30[4];
    int v31;
    int v32;
    int v33;
    int v34;
    int v35;
    int v36;
    int v37;
    int v38;
    int v39;
    int v40;
    int v41;
    int v42;

    v5 = a2;
    v8 = 0;
    for (i = 0; v8 < (sint32)r_u32(v5); a2 += 4)
    {
        *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 20)) + 2)) = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 20)) + 2));
        ++v8;
    }
    v29[0] = **(__int16 **)(v5 + 28) - **(__int16 **)(v5 + 24);
    v29[1] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 28)) + 2)) - *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 24)) + 2));
    v29[2] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 28)) + 4)) - *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 24)) + 4));
    v30[0] = **(__int16 **)(v5 + 20) - **(__int16 **)(v5 + 24);
    v30[1] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 20)) + 2)) - *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 24)) + 2));
    v30[2] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 20)) + 4)) - *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 24)) + 4));
    sub_800EBAD0(sf_draft_guest_address(v29), sf_draft_guest_address(v30), a4);
    sub_80077A18(sf_draft_guest_address(a4_view), sf_draft_guest_address(a4_view));
    **(_WORD **)(v5 + 8) = *a4_view;
    *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 8)) + 2)) = a4_view[1];
    *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 8)) + 4)) = a4_view[2];
    v31 = a1_view[4] * *a4_view + a1_view[5] * a4_view[1] + a1_view[6] * a4_view[2];
    if (v31 < 0)
        v11 = -(-v31 >> 12);
    else
        v11 = v31 >> 12;
    v31 = v11;
    if (v11)
    {
        v32 = **(__int16 **)(v5 + 24);
        v33 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 24)) + 2));
        v34 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 24)) + 4));
        v35 = v32 - *a1_view;
        v36 = v33 - a1_view[1];
        v37 = v34 - a1_view[2];
        v41 = v35 * *a4_view + v36 * a4_view[1] + v37 * a4_view[2];
        if (v41 < 0)
            v12 = -(-v41 >> 12);
        else
            v12 = v41 >> 12;
        v13 = a1_view[4];
        v41 = v12;
        v14 = sub_800C6D90(v13, v31);
        v15 = a1_view[5];
        v38 = v14;
        v39 = sub_800C6D90(v15, v31);
        v40 = sub_800C6D90((a1_view[6]), v31);
        v38 = sub_800C6D4C(v38, v41);
        v39 = sub_800C6D4C(v39, v41);
        v40 = sub_800C6D4C(v40, v41);
        *a3_view = *a1_view + v38;
        a3_view[1] = a1_view[1] + v39;
        a3_view[2] = a1_view[2] + v40;
    }
    else
    {
        v16 = a1_view[1];
        v17 = a1_view[2];
        v18 = a1_view[3];
        *a3_view = *a1_view;
        a3_view[1] = v16;
        a3_view[2] = v17;
        a3_view[3] = v18;
        i = 1;
    }
    if (!i)
    {
        v19 = 4;
        if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 1018)))
        {
            sub_800C720C(sf_draft_guest_address(a1_view + 4), sf_draft_guest_address(&v32));
            v21 = sub_800C6D4C(v32, (*a4_view));
            v20 = sub_800C6D4C(v33, (a4_view[1]));
            v22 = v21 + v20 + sub_800C6D4C(v34, (a4_view[2]));
            if (v22 < 0)
                v22 = -v22;
            v42 = v22;
            if (v22 < 4097 && v22 <= 0)
            {
                v23 = 0;
            }
            else
            {
                v23 = 4096;
                if (v22 < 4097)
                    v23 = v22;
            }
            v42 = v23;
            v24 = 27 * (4096 - v23);
            if (v24 < 0)
                v25 = -(-v24 >> 12);
            else
                v25 = v24 >> 12;
            v19 = v25 + 4;
        }
        i = (uint8)sub_80078254(sf_draft_guest_address(a3_view), sf_draft_guest_address(SF_DRAFT_PTR(int, v5)), v19) != 1;
    }
    v26 = 0;
    if (*SF_DRAFT_PTR(int, v5) > 0)
    {
        v27 = v5;
        do
        {
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v27 + 20)) + 2)) = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v27 + 20)) + 2));
            ++v26;
            v27 += 4;
        } while (v26 < (sint32)r_u32(v5));
    }
    result = i;
    *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 8)) + 2)) = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 8)) + 2));
    return result;
}

static uint8 sf_door_has_resource(uint32 event_index, uint32 *record_root)
{
    uint32 row, model_index, descriptor;
    *record_root = r_u32(0x80115CCCu);
    row = *record_root + 76u * event_index;
    model_index = r_u32(row);
    descriptor = r_u32(0x80116B98u) + 20u * model_index;
    return r_u8(r_u32(descriptor + 4u));
}

static uint32 sf_90d88_event_read(uint32 address, uint32 width)
{
    XportMemoryRegion region;
    uint32 offset, value = 0u;
    const void *source = sf_draft_guest_ptr(address);
    if (!source || !xport_memory_readable(source, width))
    {
        fprintf(stderr, "Invalid 80090D88 event input %08X/%u\n", address, width);
        abort();
    }
    if (xport_memory_pointer_identity(source, width, &region, &offset))
        return xport_memory_read(address, width);
    memcpy(&value, source, width);
    return value;
}

static void sf_90d88_event_write(uint32 address, uint32 value)
{
    XportMemoryRegion region;
    uint32 offset;
    void *destination = sf_draft_guest_ptr(address);
    if (!destination || !xport_memory_readable(destination, sizeof(value)))
    {
        fprintf(stderr, "Invalid 80090D88 event output %08X\n", address);
        abort();
    }
    if (xport_memory_pointer_identity(destination, sizeof(value), &region, &offset))
        w_u32(address, value);
    else
        memcpy(destination, &value, sizeof(value));
}

void sub_80090D88(sint32 a1)
{
    uint32 event = (uint32)a1;
    uint32 index, root, row, record, object, matrix, value, destination;
    sint32 subject, owner;
    uint16 kind;
    volatile uint32 door_position[3], player_position[4];
    FUNCTION_MARKER(0x80090D88u, "SCUS_942.40");
    index = sf_90d88_event_read(event + 8u, 4u);
    kind = (uint16)sf_90d88_event_read(event, 2u);
    root = r_u32(0x80115CCCu);
    row = root + 76u * index;
    record = r_u32(row + 52u);
    switch (kind)
    {
        case 2:
            sf_draft_call(0x80150148u, 1u, (const uint32[]){record});
            break;
        case 5:
            if (sf_door_has_resource(sf_90d88_event_read(event + 8u, 4u), &root))
            {
                sub_80073DF8((sint32)record);
                sub_80073DD8((sint32)record);
            }
            break;
        case 6:
            if (sf_door_has_resource(sf_90d88_event_read(event + 8u, 4u), &root))
            {
                sub_80073CD8((sint32)record, 1, 0, 0);
                sub_80073D88((sint32)record, 1, 0, 1, 0);
            }
            break;
        case 0x12:
            if (!(r_u8(record) & 0x20u))
            {
                if (sf_door_has_resource(sf_90d88_event_read(event + 8u, 4u), &root))
                {
                    door_position[0] = r_u32(r_u32(r_u32(record + 8u) + 12u) + 20u);
                    door_position[1] = r_u32(r_u32(r_u32(record + 8u) + 12u) + 24u);
                    door_position[2] = r_u32(r_u32(r_u32(record + 8u) + 12u) + 28u);
                    door_position[1] = 0u - door_position[1];
                }
                else
                {
                    index = (uint32)(sint32)r_s16(record + 2u);
                    row = root + 76u * index;
                    door_position[0] = r_u32(row + 24u);
                    door_position[1] = r_u32(row + 28u);
                    door_position[2] = r_u32(row + 32u);
                }
                matrix = r_u32(r_u32(0x80116B9Cu) + 12u);
                player_position[0] = r_u32(matrix + 268u);
                player_position[1] = r_u32(matrix + 272u);
                player_position[2] = r_u32(matrix + 276u);
                player_position[3] = r_u32(matrix + 280u);
                value = player_position[1] + 105u;
                subject = r_s16(record + 2u);
                owner = (sint32)r_u32(0x80116AB0u);
                /* The original call supplies four zero payload arguments */
                sub_80015364((sint32)door_position[1] < (sint32)value ? 22u : 23u, 4u, subject, owner, 0, 0, 0, 0);
                sub_8008C928((sint32)record, r_u8(record + 1u));
            }
            break;
        case 0x13:
            if (!(r_u8(record) & 0x20u))
            {
                sub_8008C464(r_s16(record + 2u));
                subject = r_s16(record + 2u);
                owner = (sint32)r_u32(0x80116AB0u);
                sub_80015364(25u, 4u, subject, owner, 0, 0, 0, 0);
            }
            break;
        case 0x16:
        case 0x17:
        case 0x27:
            if (!(r_u8(record) & 0x20u))
            {
                uint32 subject = sf_90d88_event_read(event + 4u, 4u);
                if (subject == r_u32(0x80116AB0u) && (uint8)sub_8008CF8C(1))
                    sub_80090CDC(sf_90d88_event_read(event, 2u) == 23u ? 65 : 36);
            }
            break;
        case 0x29:
            destination = sf_90d88_event_read(event + 12u, 4u);
            value = r_u8(record);
            sf_90d88_event_write(destination, value);
            break;
        case 0x2A:
            destination = sf_90d88_event_read(event + 12u, 4u);
            value = sf_90d88_event_read(destination, 4u);
            w_u8(record, (uint8)value);
            if ((value & 0x20u) && sf_door_has_resource(sf_90d88_event_read(event + 8u, 4u), &root))
            {
                object = r_u32(record + 8u);
                if (r_u8(object + 10u) & 8u)
                    sub_800D8F60((sint32)object);
            }
            break;
        default:
            return;
    }
}

void sub_8008DE28(sint32 a1)
{
    FUNCTION_MARKER(0x8008DE28u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    uint8 *v2;
    int v3;
    int v4;
    int v5;
    int v6;
    uint8 v7;
    int v8;
    int v9;
    uint8 v10;
    int v11;
    int v12;
    uint32 v13;
    char v14;
    char v15;
    unsigned int v16;
    uint32 v17;
    uint32 v18;

    v2 = SF_DRAFT_PTR(uint8, r_u32(76u * *SF_DRAFT_PTR(uint32, (uint32)a1 + 8u) + r_u32(0x80115CCCu) + 52u));
    v3 = *((__int16 *)v2 + 1);
    if (v3 == 666)
        v4 = 666;
    else
        v4 = *SF_DRAFT_PTR(__int16, (20u * r_u32(76u * (uint32)v3 + r_u32(0x80115CCCu)) + r_u32(0x80116B98u)));
    switch (*SF_DRAFT_PTR(_WORD, a1))
    {
        case 2:
            sf_draft_call((uint32)(0x8014EE38u), 2u, (const uint32[]){sf_draft_guest_address(v2), (uint32)(v4)});
            return;
        case 5:
            v6 = sf_draft_guest_address(v2);
            *v2 &= ~0x40u;
            sub_80073DF8(v6);
            if ((*v2 & 1) == 0)
                sub_80073DD8(sf_draft_guest_address(v2));
            return;
        case 6:
            v5 = sf_draft_guest_address(v2);
            *v2 |= 0x40u;
            sub_80073CD8(v5, 1, 0, 0);
            if ((*v2 & 1) == 0)
                sub_80073D88(sf_draft_guest_address(v2), 1, 0, 1, 1);
            return;
        case 0xD:
            goto LABEL_16;
        case 0x12:
            if ((*(_DWORD *)v2 & 0xA0) != 0)
                return;
            sub_8008C358(*((sint16 *)v2 + 1), 1);
            v7 = 21;
            if ((*v2 & 8) != 0)
                return;
            v8 = *((__int16 *)v2 + 1);
            v9 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
            v10 = 4;
            goto LABEL_21;
        case 0x13:
            if ((*v2 & 0x20) != 0)
                return;
            goto LABEL_19;
        case 0x14:
        case 0x1B:
            if ((*v2 & 0x10) != 0)
                *v2 &= ~0x10u;
            return;
        case 0x15:
        case 0x27:
            v12 = *v2;
            if ((v12 & 0x10) != 0)
            {
                v17 = r_u32(0x8011638Cu);
                if (v17)
                {
                    v18 = sf_draft_call(v17, 2u, (const uint32[]){(uint32)(sint32) * ((sint16 *)v2 + 1), (uint32)v4});
                    if (v18)
                        sub_80085D04(v18, 0);
                }
            }
            else if ((v12 & 0x20) == 0 && ((v12 & 0x80) == 0 || (*SF_DRAFT_PTR(uint16, 0x80130C88u)) != 8))
            {
                *v2 = (v12 | 0x20);
                v13 = r_u32(0x80116398u);
                v14 = 1;
                if (v13)
                    v14 = (uint8)sf_draft_call(v13, 2u, (const uint32[]){(uint32)(sint32) * ((sint16 *)v2 + 1), (uint32)v4});
                v15 = sub_800EC8F4();
                v16 = 34;
                if ((v15 & 1) != 0)
                    v16 = 33;
                sub_8006BC98(2, v16, sf_draft_guest_address(v2), 0);
                if (v14 == 1)
                    sub_8002A890(*((__int16 *)v2 + 1), 0x15u, 3u);
                sub_8008CA44(*((sint16 *)v2 + 1));
            }
            return;
        case 0x29:
            *SF_DRAFT_PTR(uint32, *SF_DRAFT_PTR(uint32, (uint32)a1 + 12u)) = *v2;
            return;
        case 0x2A:
            *v2 = *SF_DRAFT_PTR(uint32, *SF_DRAFT_PTR(uint32, (uint32)a1 + 12u));
        LABEL_16:
            if (r_s16(*((uint32 *)v2 + 6) + 8u) > 0)
                return;
            if ((*v2 & 0x80) != 0)
            {
                v11 = *((_DWORD *)v2 + 2);
                if ((*SF_DRAFT_PTR(_BYTE, (v11 + 10)) & 8) != 0)
                    sub_800D8F60(v11);
            }
            else
            {
                *v2 |= 0x80u;
                sub_8002DE00(sf_draft_guest_address(v2));
                if ((uint8)sub_8008BEA0(*((sint16 *)v2 + 1)))
                {
                LABEL_19:
                    sub_8008C464(*((__int16 *)v2 + 1));
                    v7 = 25;
                    if ((*v2 & 8) == 0)
                    {
                        v8 = *((__int16 *)v2 + 1);
                        v9 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
                        v10 = 3;
                    LABEL_21:
                        sub_80015364(v7, v10, v8, v9, 0, 0, 0, 0);
                    }
                }
            }
            return;
        case 0x2D:
            if ((*SF_DRAFT_PTR(uint32, 0x80115E68u)) && (*v2 & 0x20) != 0)
                sf_draft_call((uint32)((*SF_DRAFT_PTR(uint32, 0x80115E68u))), 2u, (const uint32[]){(uint32)(*((__int16 *)v2 + 1)), (uint32)(v4)});
            return;
        default:
            return;
    }
}

sint32 sub_80021B68(uint32 a1, uint32 a2, sint32 a3)
{
    uint8 position_valid = 0;

    struct
    {
        int v23, v24, v25;
    } direction;

    struct
    {
        int v26, v27, v28;
    } position;

    struct
    {
        int v29, v30, v31;
    } delta;

    FUNCTION_MARKER(0x80021B68u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;
    int v6;
    int *v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v32;
    int v33;
    int v34;

    result = 76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    v6 = *SF_DRAFT_PTR(_DWORD, (result + 52));
    if (a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
        return result;
    sub_80016F90(1);
    v8 = SF_DRAFT_PTR(int, *(int **)(v6 + 12));
    v20 = *v8;
    v21 = v8[1];
    v22 = v8[2];
    direction.v23 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 4));
    direction.v24 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 10));
    v9 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 16));
    direction.v24 = -direction.v24;
    direction.v25 = v9;
    if (a2 == 17 && (sub_800EC8F4() & 1) != 0)
    {
        direction.v23 = -direction.v23;
        direction.v25 = -direction.v25;
    }
    v33 = 0;
    v32 = direction.v25 / 2;
    v34 = ((direction.v23 > 0) - direction.v23) >> 1;
    if ((sub_800EC8F4() & 1) != 0)
    {
        direction.v23 += v32;
        v10 = direction.v24 + v33;
        v11 = direction.v25 + v34;
    }
    else
    {
        direction.v23 -= v32;
        v10 = direction.v24 - v33;
        v11 = direction.v25 - v34;
    }
    direction.v24 = v10;
    direction.v25 = v11;
    sub_800C720C(sf_draft_guest_address(&direction.v23), sf_draft_guest_address(&direction.v23));
    if (a2 == 20)
    {
        sub_80024284(a1, 20, a3);
        v12 = (*SF_DRAFT_PTR(uint32, 0x801191ECu)) != 0xC ? 9 : 0;
        goto LABEL_29;
    }
    if (a2 >= 0x15)
    {
        if (a2 != 81)
        {
            if (a2 >= 0x52)
            {
                v12 = 0;
                if (a2 != 96)
                    goto LABEL_29;
            }
            else
            {
                v12 = 0;
                if (a2 != 77)
                    goto LABEL_29;
            }
        }
    }
    else
    {
        if (a2 < 0xF)
        {
            v12 = 0;
            goto LABEL_29;
        }
        v12 = 9;
        if (a2 >= 0x13)
            goto LABEL_29;
    }
    v12 = 2;
    if ((sub_800EC8F4() & 1) != 0)
    {
    LABEL_21:
        position_valid = 1;
        if (a2 == 96)
        {
            position.v26 = sub_800C6D4C(direction.v23, 0);
            v13 = sub_800C6D4C(direction.v24, 0);
            v14 = direction.v25;
            v15 = 0;
        }
        else
        {
            position.v26 = sub_800C6D4C(direction.v23, 320);
            v13 = sub_800C6D4C(direction.v24, 320);
            v14 = direction.v25;
            v15 = 320;
        }
        position.v27 = v13;
        v16 = sub_800C6D4C(v14, v15);
        v17 = position.v26 + v20;
        position.v26 += v20;
        position.v28 = v16 + v22;
        v18 = position.v27 + v21;
        position.v27 += v21;
        if (a2 == 96)
            position.v27 = v18 + 624;
        delta.v29 = v20 - v17;
        delta.v31 = -v16;
        delta.v30 = v21 - position.v27;
        goto LABEL_29;
    }
    v12 = 9;
    if (a2 == 96)
    {
        v12 = 2;
        goto LABEL_21;
    }
LABEL_29:
    v19 = 1;
    if (v12)
        sub_8001D494(1, v12, v6, 0, (sint32)sf_draft_guest_address(&position), (sint32)sf_draft_guest_address(&delta), (sint32)0x80118438u, position_valid);
    if (a2 == 96)
        sub_80020224(0);
    if ((uint8)sub_8006C180())
        return sub_8006C7CC();
    if ((*SF_DRAFT_PTR(uint32, 0x80116B4Cu)) != -1)
        return sub_8006C620(((*SF_DRAFT_PTR(uint32, 0x80116B4Cu))), 0, 1);
    if (a2 == 20)
        return sub_8006CB54(0x80103E7Cu);
    result = 19;
    if (a2 == 18)
        return sub_8006CB54(0x80103EC0u);
    if (a2 != 19)
        return sub_8006CB54(0x80103E38u);
    return result;
}

sint32 sub_80032C24(uint32 a1)
{
    FUNCTION_MARKER(0x80032C24u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int v1;
    int v2;
    int v3;
    int v4;
    int result;
    int v6;
    __int16 *v7;
    int v8;
    int v9;
    int *v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    __int16 v23;
    __int16 v24;
    __int16 v25;
    __int16 v26;
    __int16 v27;
    __int16 v28;
    __int16 v29;
    __int16 v30;
    __int16 v31;

    v1 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v2 = 76 * *SF_DRAFT_PTR(__int16, (v1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    v3 = *(uint8 *)(v2 + 36);
    v4 = 0;
    if (!*SF_DRAFT_PTR(_BYTE, (v2 + 36)) || (result = 18, v3 != 18) && (!v3 || v3 != 21 || (result = (*SF_DRAFT_PTR(uint32, 0x8012F9B8u))) != 0))
    {
        v6 = **(__int16 **)(v1 + 20);
        if ((v6 >= 0 && (v4 = *SF_DRAFT_PTR(_DWORD, (76 * v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)), (**(_DWORD **)(v1 + 16) & 0x200) == 0) && !(*SF_DRAFT_PTR(uint32, 0x8012F9B8u)) || (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) && (v7 = *(__int16 **)(v1 + 20), *v7 >= 0) && (*((_DWORD *)v7 + 1) & 8) != 0) && ((unsigned int)*(uint8 *)(v4 + 34) - 1 >= 2 || (v8 = *SF_DRAFT_PTR(_DWORD, (v4 + 8)), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v8 + 16)) + 40)) & 0x400000) != 0) && (*SF_DRAFT_PTR(_BYTE, (v8 + 8)) & 0x10) == 0 && *SF_DRAFT_PTR(_DWORD, (v4 + 12))) && *SF_DRAFT_PTR(_DWORD, (v4 + 20)) && (v9 = v1, *SF_DRAFT_PTR(_DWORD, (v4 + 12))))
        {
            v10 = 0;
            v11 = 0;
        }
        else
        {
            result = **(_DWORD **)(v1 + 16) & 0x300;
            if (result != 256)
                return result;
            if (*SF_DRAFT_PTR(__int16, (v1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x801169D4u)) && v1 == sub_80020714() && (sub_8001C960(0) || sub_8001C960(2)))
            {
                v23 = **(_WORD **)*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
                v24 = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 2));
                v25 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 4));
                v12 = -*(uint16 *)(*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 6);
                v26 = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 6));
                v27 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 8));
                v28 = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 10));
                v29 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 12));
                v30 = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 14));
                v31 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 16));
                v22 = v29;
                v20 = v23;
                v21 = (__int16)v12;
                v14 = -v29;
                v15 = 0;
                v16 = v23;
            }
            else
            {
                v14 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 12)) + 4));
                v15 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 12)) + 10));
                v13 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 12)) + 16));
                v15 = -v15;
                v16 = v13;
                if (v15)
                {
                    v15 = 0;
                    sub_800C720C(sf_draft_guest_address(&v14), sf_draft_guest_address(&v14));
                }
            }
            v17 = sub_800C6D4C(v14, 655360);
            v18 = sub_800C6D4C(v15, 655360);
            v19 = sub_800C6D4C(v16, 655360);
            v10 = &v17;
            v17 += **(_DWORD **)(v1 + 12);
            v9 = v1;
            v18 += *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 12)) + 4));
            v11 = 1;
            v19 += *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 12)) + 8));
        }
        return sub_8007E848(v9, sf_draft_guest_address(v10), v11, 0);
    }
    return result;
}

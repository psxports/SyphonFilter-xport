#include "game_draft.h"
void sf_callback_arity_error(uint32 target, uint32 expected, uint32 received);
void sf_callback_image_error(uint32 target, const char *image);
void sub_800F0764(void);
void sub_800F08D4(uint32 mode, uint32 start_frame, uint32 end_frame, uint32 complete_callback, uint32 limit_callback);
uint32 sub_800F0964(uint32 payload);
uint32 sub_800F0A54(uint32 *payload, uint32 *header);
void sub_800F0B14(sint32 a1, sint32 a2, sint32 a3);
sint32 sub_800F1624(sint32 mode);
uint32 sub_800F1FF8(uint32 a1, uint32 a2);
uint32 sub_800F2124(sint32 selector, uint32 address);
void sub_800F2314(sint32 mode);
sint32 sub_800F2474(uint32 event_class, uint32 specification, uint32 mode, uint32 guest_callback);
sint32 sub_800F2484(uint32 handle);
uint32 sub_800F2A94(void);
sint32 sub_800F2B84(void);
void sub_800F2BC4(void);
uint32 sub_800F2C64(sint32 sequence, sint32 track, uint32 callback);
uint32 sub_800F2C94(uint32 data, sint32 bank, sint32 tracks);
uint32 sub_800F4D74(sint32 sequence, sint32 track);
sint32 sub_800F4E24(sint32 sequence, sint32 track, sint32 bank, uint32 data);
uint32 sub_800F594C(sint16 sequence, sint16 track, sint8 mode, sint16 repeats);
uint32 sub_800F5B44(sint32 sequence, sint32 track, sint8 mode, sint8 repeats);
sint32 sub_800F5C64(sint32 a1, sint8 a2, sint8 a3);
void sub_800F5D24(uint32 attributes);
void sub_800F60A4(sint16 left, sint16 right);
void sub_800F60F4(sint32 a1);
void sub_800F6324(void);
sint32 sub_800F6404(uint32 counter, uint16 target, uint32 mode);
sint32 sub_800F653C(uint32 counter);
sint32 sub_800F6574(void);
sint32 sub_800F6A94(uint32 a1, uint32 a2);
sint32 sub_800F72B4(sint32 sequence, sint16 track);
sint32 sub_800F7314(sint32 a1, sint16 a2);
sint32 sub_800F74BC(sint16 a1, sint16 a2);
sint32 sub_800F74F4(sint32 a1, sint16 a2, sint16 a3);
void sub_800F7604(uint32 sequence_table, sint16 sequences, sint16 tracks);
void sub_800F7824(sint32 tick_mode);
uint32 sub_800F7AFC(sint32 sequence, sint16 track, uint16 left, uint16 right);
uint32 sub_800F7BC4(sint32 sequence, sint16 track);
void sub_800F7F94(uint32 attributes);
sint32 sub_800F9AA4(sint16 left, sint16 right);
sint32 sub_800F9B34(sint16 mode);
sint32 sub_800F9BE4(sint32 enabled);
sint32 sub_800F9CF4(void);
sint32 sub_800F9D14(void);
void sub_800FA304(void);
uint32 sub_800FA324(void);
void sub_800FACB4(sint32 voice_count);
uint32 sub_800FB004(sint32 count, uint32 table);
sint32 sub_800FB064(sint32 a1);
uint32 sub_800FB08C(void);
void sub_800FC2F4(void);
uint32 sub_800FCCF4(sint16 sequence_track, sint16 left, sint16 right);
sint32 sub_800FD36C(sint16 sequence_track);
sint32 sub_800FDAB4(uint16 bank, sint16 program);
void sub_800FDB84(void);
void sub_800FDC14(uint32 address);
sint32 sub_800FDF94(uint32 header, sint16 bank, uint32 spu_base);
uint32 sub_800FDFFC(uint32 size, uint32 base);
sint32 sub_800FE004(uint32 header, sint32 bank, uint32 allocator, uint32 arg);
sint32 sub_800FE3E4(uint32 source, uint16 bank);
uint32 sub_800FE4A4(uint32 a1, uint32 a2);
uint32 sub_800FE504(uint32 address);
sint32 sub_800FE564(sint32 mode);
sint32 sub_800FE594(uint32 source, uint32 bytes, sint16 bank);
uint32 sub_800FE724(uint32 source, uint32 bytes);
sint32 sub_800FE7B4(sint16 mode);
sint32 sub_800FE7E4(sint32 mode);
sint32 sub_800FE894(uint32 handle);
sint32 sub_800FF454(void);
sint32 sub_800FF4E0(uint32 context);
sint32 sub_800FF5A0(sint32 a1, sint32 a2, sint32 a3);
sint32 sub_800FFC10(void);
sint32 sub_80100F64(sint32 a1);
sint32 sub_80101554(sint32 a1, sint32 a2);
sint32 sub_8013D830(void);
sint32 sub_8013D8A0(void);
sint32 sub_8013D8E8(uint32 header, sint32 x, sint32 y, uint32 buffer, sint32 remaining, sint32 count, uint32 mode, uint32 rect, uint32 block_rect, uint32 buffers, uint32 block_bytes, uint32 extra_buffers, uint32 extra_bytes);
sint32 sub_8013DBD0(uint32 *first, uint32 *second);
sint32 sub_8013DDE0(uint32 payload, uint32 destination);
sint32 sub_8013DE64(uint32 payload, uint32 block_words, uint32 mode, uint32 index_address, uint32 buffers);
void sub_8013DF00(void);
sint32 sub_8013E01C(void);
sint32 sub_8013E154(void);
sint32 sub_8013E258(sint32 a1);
sint32 sub_8013E27C(sint32 a1);
sint32 sub_8013E28C(uint32 a1, sint32 a2, sint32 a3, sint32 a4, sint32 a9, uint32 a10, sint32 a11);
sint32 sub_8013E4E0(void);
sint32 sub_8013E578(void);
sint32 sub_8013E7BC(void);
sint32 sub_8013E83C(void);
sint32 sub_8013E8F4(void);
void sub_8013E9D0(sint32 value);
uint32 sub_8013EB28(uint32 payload);
void sub_8013EB34(uint32 payload, sint32 mode);
void sub_8013EBB0(uint32 output, sint32 words);
uint32 sub_8013EC6C(uint32 source);
void sub_8013EC90(uint32 mode);
sint32 sub_8013F060(uint32 destination);
sint32 sub_8013F180(uint32 payload, uint32 output, uint32 table);
uint32 sub_8013F4E0(uint32 mode);
void sub_8013F52C(void);
void sub_8013F57C(void);
uint32 sub_8013F5BC(uint32 value);
sint32 sub_8013F624(uint32 state);
sint32 sub_8013F7F8(uint32 argument);
sint32 sub_8013F860(uint32 state);
sint32 sub_801406FC(sint32 mode, uint32 event, uint32 value);
uint32 sub_80140D1C(sint32 status);
void sub_80140D70(void);
sint32 sub_80140E50(sint32 card);
void sub_80140ED0(void);
void sub_80140EE0(uint32 callback);
void sub_80140F5C(void);
uint32 sub_80140FC8(void);
uint32 sub_80140FF4(void);
uint32 sub_80141044(void);
void sub_801410B0(void);
void sub_801412AC(void);
void sub_80141360(void);
sint32 sub_80141468(void);
uint32 sub_80141618(void);
void sub_80147138(void);
void sub_801473A4(sint32 x, sint32 y, sint32 z, sint32 w);
void sub_801476D4(void);
sint32 sub_8014775C(uint32 value);
sint32 sub_80147924(void);
void sub_80147A70(void);
void sub_80147B0C(uint32 value);
sint32 sub_80147B90(void);
sint32 sub_80147C08(void);
sint32 sub_80147C34(uint32 message, sint32 mode, uint32 unused, uint32 callback);
uint32 sub_80147F8C(void);
sint32 sub_80148070(sint32 value);
sint32 sub_80148230(sint32 action);
sint32 sub_80148474(void);
void sub_801486A8(void);
uint32 sub_80148B1C(void);
void sub_80148CD4(sint32 selection);
sint32 sub_80148F78(void);
void sub_80149154(void);
void sub_80149328(void);
uint32 sub_80149558(void);
sint32 sub_80149880(void);
sint32 sub_80149CF4(void);
sint32 sub_8014C500(uint8 embedded);
uint32 sub_8014C94C(sint16 index, uint32 animation);
sint32 sub_8014CC70(void);
sint32 sub_8014D118(void);
sint32 sub_8014D270(uint32 path);
sint32 sub_8014D4F4(sint16 offset);
uint32 sub_8014D5A0(void);
uint32 sub_8014D744(uint32 end);
sint32 sub_8014D7AC(sint32 a1);
sint32 sub_8014E0CC(sint32 phase);
sint32 sub_8014E1B8(uint8 a1, sint32 a2);
void sub_8014E748(uint32 record, sint32 x, sint32 y, sint32 z);
void sub_8014E804(uint32 record, sint32 x, sint32 y, sint32 z);
void sub_8014E8C0(uint32 record, sint32 span);
sint32 sub_8014EB54(uint32 record);
sint32 sub_8014EE38(uint32 record, sint32 kind);
sint32 sub_8014FD78(uint32 record, sint32 kind);
sint32 sub_80150148(uint32 record);
uint32 sub_80150E9C(uint32 record, sint32 kind);
uint32 sub_80150FBC(void);
uint32 sub_80152D6C(void);
void sub_80152EEC(uint32 sectors_per_block, uint8 preload);
void sub_80153578(void);
sint32 sub_801537AC(void);
uint32 sub_8015389C(uint32 record, uint8 mode);
sint32 sub_801539A0(uint8 common);
sint32 sub_80153A50(uint32 record);
sint32 sub_80153D88(uint32 record, uint32 output);
void sub_8015421C(void);

sint32 sf_callbacks_page_5(uint32 target, uint32 argc, const uint32 *args, uint32 *result)
{
    switch (target)
    {
        case 0x800F0764u:
            sub_800F0764();
            *result = 0;
            return 1;
        case 0x800F08D4u:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            sub_800F08D4((uint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3], (uint32)args[4]);
            *result = 0;
            return 1;
        case 0x800F0964u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800F0964((uint32)args[0]);
            return 1;
        case 0x800F0A54u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800F0A54(SF_DRAFT_PTR(uint32, args[0]), SF_DRAFT_PTR(uint32, args[1]));
            return 1;
        case 0x800F0B14u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            sub_800F0B14((sint32)args[0], (sint32)args[1], (sint32)args[2]);
            *result = 0;
            return 1;
        case 0x800F1624u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800F1624((sint32)args[0]);
            return 1;
        case 0x800F1FF8u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800F1FF8((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800F2124u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800F2124((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800F2314u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800F2314((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x800F2474u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800F2474((uint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x800F2484u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800F2484((uint32)args[0]);
            return 1;
        case 0x800F2A94u:
            *result = (uint32)sub_800F2A94();
            return 1;
        case 0x800F2B84u:
            *result = (uint32)sub_800F2B84();
            return 1;
        case 0x800F2BC4u:
            sub_800F2BC4();
            *result = 0;
            return 1;
        case 0x800F2C64u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800F2C64((sint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800F2C94u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800F2C94((uint32)args[0], (sint32)args[1], (sint32)args[2]);
            return 1;
        case 0x800F4D74u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800F4D74((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800F4E24u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800F4E24((sint32)args[0], (sint32)args[1], (sint32)args[2], (uint32)args[3]);
            return 1;
        case 0x800F594Cu:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800F594C((sint16)args[0], (sint16)args[1], (sint8)args[2], (sint16)args[3]);
            return 1;
        case 0x800F5B44u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800F5B44((sint32)args[0], (sint32)args[1], (sint8)args[2], (sint8)args[3]);
            return 1;
        case 0x800F5C64u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800F5C64((sint32)args[0], (sint8)args[1], (sint8)args[2]);
            return 1;
        case 0x800F5D24u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800F5D24((uint32)args[0]);
            *result = 0;
            return 1;
        case 0x800F60A4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            sub_800F60A4((sint16)args[0], (sint16)args[1]);
            *result = 0;
            return 1;
        case 0x800F60F4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800F60F4((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x800F6324u:
            sub_800F6324();
            *result = 0;
            return 1;
        case 0x800F6404u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800F6404((uint32)args[0], (uint16)args[1], (uint32)args[2]);
            return 1;
        case 0x800F653Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800F653C((uint32)args[0]);
            return 1;
        case 0x800F6574u:
            *result = (uint32)sub_800F6574();
            return 1;
        case 0x800F6A94u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800F6A94((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800F72B4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800F72B4((sint32)args[0], (sint16)args[1]);
            return 1;
        case 0x800F7314u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800F7314((sint32)args[0], (sint16)args[1]);
            return 1;
        case 0x800F74BCu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800F74BC((sint16)args[0], (sint16)args[1]);
            return 1;
        case 0x800F74F4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800F74F4((sint32)args[0], (sint16)args[1], (sint16)args[2]);
            return 1;
        case 0x800F7604u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            sub_800F7604((uint32)args[0], (sint16)args[1], (sint16)args[2]);
            *result = 0;
            return 1;
        case 0x800F7824u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800F7824((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x800F7AFCu:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800F7AFC((sint32)args[0], (sint16)args[1], (uint16)args[2], (uint16)args[3]);
            return 1;
        case 0x800F7BC4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800F7BC4((sint32)args[0], (sint16)args[1]);
            return 1;
        case 0x800F7F94u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800F7F94((uint32)args[0]);
            *result = 0;
            return 1;
        case 0x800F9AA4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800F9AA4((sint16)args[0], (sint16)args[1]);
            return 1;
        case 0x800F9B34u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800F9B34((sint16)args[0]);
            return 1;
        case 0x800F9BE4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800F9BE4((sint32)args[0]);
            return 1;
        case 0x800F9CF4u:
            *result = (uint32)sub_800F9CF4();
            return 1;
        case 0x800F9D14u:
            *result = (uint32)sub_800F9D14();
            return 1;
        case 0x800FA304u:
            sub_800FA304();
            *result = 0;
            return 1;
        case 0x800FA324u:
            *result = (uint32)sub_800FA324();
            return 1;
        case 0x800FACB4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800FACB4((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x800FB004u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800FB004((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800FB064u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800FB064((sint32)args[0]);
            return 1;
        case 0x800FB08Cu:
            *result = (uint32)sub_800FB08C();
            return 1;
        case 0x800FC2F4u:
            sub_800FC2F4();
            *result = 0;
            return 1;
        case 0x800FCCF4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800FCCF4((sint16)args[0], (sint16)args[1], (sint16)args[2]);
            return 1;
        case 0x800FD36Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800FD36C((sint16)args[0]);
            return 1;
        case 0x800FDAB4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800FDAB4((uint16)args[0], (sint16)args[1]);
            return 1;
        case 0x800FDB84u:
            sub_800FDB84();
            *result = 0;
            return 1;
        case 0x800FDC14u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800FDC14((uint32)args[0]);
            *result = 0;
            return 1;
        case 0x800FDF94u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800FDF94((uint32)args[0], (sint16)args[1], (uint32)args[2]);
            return 1;
        case 0x800FDFFCu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800FDFFC((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800FE004u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800FE004((uint32)args[0], (sint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x800FE3E4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800FE3E4((uint32)args[0], (uint16)args[1]);
            return 1;
        case 0x800FE4A4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800FE4A4((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800FE504u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800FE504((uint32)args[0]);
            return 1;
        case 0x800FE564u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800FE564((sint32)args[0]);
            return 1;
        case 0x800FE594u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800FE594((uint32)args[0], (uint32)args[1], (sint16)args[2]);
            return 1;
        case 0x800FE724u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800FE724((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800FE7B4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800FE7B4((sint16)args[0]);
            return 1;
        case 0x800FE7E4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800FE7E4((sint32)args[0]);
            return 1;
        case 0x800FE894u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800FE894((uint32)args[0]);
            return 1;
        case 0x800FF454u:
            *result = (uint32)sub_800FF454();
            return 1;
        case 0x800FF4E0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800FF4E0((uint32)args[0]);
            return 1;
        case 0x800FF5A0u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800FF5A0((sint32)args[0], (sint32)args[1], (sint32)args[2]);
            return 1;
        case 0x800FFC10u:
            *result = (uint32)sub_800FFC10();
            return 1;
        case 0x80100F64u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80100F64((sint32)args[0]);
            return 1;
        case 0x80101554u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80101554((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x8013D830u:
            if (r_u32(0x8013D830u) != 0x3C048014u || r_u32(0x8013D834u) != 0x8C8419E0u || r_u32(0x8013D838u) != 0x27BDFFE8u)
                sf_callback_image_error(target, "MOVIE.DEP.OVL");
            *result = (uint32)sub_8013D830();
            return 1;
        case 0x8013D8A0u:
            if (r_u32(0x8013D8A0u) != 0x27BDFFE8u || r_u32(0x8013D8A4u) != 0x00002821u || r_u32(0x8013D8A8u) != 0x3C048014u)
                sf_callback_image_error(target, "MOVIE.DEP.OVL");
            *result = (uint32)sub_8013D8A0();
            return 1;
        case 0x8013D8E8u:
            if (argc < 13u)
                sf_callback_arity_error(target, 13u, argc);
            if (r_u32(0x8013D8E8u) != 0x27BDFFA0u || r_u32(0x8013D8ECu) != 0xAFB1003Cu || r_u32(0x8013D8F0u) != 0x8FB10070u || r_u32(0x8013D8F4u) != 0xAFB70054u || r_u32(0x8013D8F8u) != 0x8FB70078u || r_u32(0x8013D8FCu) != 0xAFB5004Cu || r_u32(0x8013D900u) != 0x8FB5007Cu || r_u32(0x8013D904u) != 0xAFB60050u || r_u32(0x8013D908u) != 0x8FB60080u || r_u32(0x8013D90Cu) != 0xAFB40048u || r_u32(0x8013D910u) != 0x0080A021u || r_u32(0x8013D914u) != 0xAFB20040u || r_u32(0x8013D918u) != 0x00A09021u || r_u32(0x8013D91Cu) != 0xAFB30044u || r_u32(0x8013D920u) != 0x00C09821u || r_u32(0x8013D924u) != 0xAFB00038u || r_u32(0x8013D928u) != 0x00E08021u || r_u32(0x8013D92Cu) != 0xAFBE0058u || r_u32(0x8013D930u) != 0x8FBE0088u || r_u32(0x8013D934u) != 0xAFBF005Cu || r_u32(0x8013D938u) != 0x0C0362CEu || r_u32(0x8013D93Cu) != 0x27A40018u || r_u32(0x8013D940u) != 0x8FA20018u || r_u32(0x8013D944u) != 0x00000000u || r_u32(0x8013D948u) != 0x88430003u || r_u32(0x8013D94Cu) != 0x98430000u ||
                r_u32(0x8013D950u) != 0x88440007u || r_u32(0x8013D954u) != 0x98440004u || r_u32(0x8013D958u) != 0xABA30013u || r_u32(0x8013D95Cu) != 0xBBA30010u || r_u32(0x8013D960u) != 0xABA40017u || r_u32(0x8013D964u) != 0xBBA40014u || r_u32(0x8013D968u) != 0x87A20014u || r_u32(0x8013D96Cu) != 0x00000000u || r_u32(0x8013D970u) != 0x00521823u || r_u32(0x8013D974u) != 0x96820010u || r_u32(0x8013D978u) != 0x04600006u || r_u32(0x8013D97Cu) != 0x00000000u || r_u32(0x8013D980u) != 0x0043102Au || r_u32(0x8013D984u) != 0x10400008u || r_u32(0x8013D988u) != 0x00000000u || r_u32(0x8013D98Cu) != 0x0804F667u || r_u32(0x8013D990u) != 0x00000000u || r_u32(0x8013D994u) != 0x04410004u || r_u32(0x8013D998u) != 0x00000000u || r_u32(0x8013D99Cu) != 0x96820010u || r_u32(0x8013D9A0u) != 0x0804F672u || r_u32(0x8013D9A4u) != 0xA6A20004u || r_u32(0x8013D9A8u) != 0x87A20014u || r_u32(0x8013D9ACu) != 0x00000000u || r_u32(0x8013D9B0u) != 0x00401821u || r_u32(0x8013D9B4u) != 0x00521023u ||
                r_u32(0x8013D9B8u) != 0x04410002u || r_u32(0x8013D9BCu) != 0x00721023u || r_u32(0x8013D9C0u) != 0x00001021u || r_u32(0x8013D9C4u) != 0xA6A20004u || r_u32(0x8013D9C8u) != 0x00021400u || r_u32(0x8013D9CCu) != 0x00021C03u || r_u32(0x8013D9D0u) != 0x24020001u || r_u32(0x8013D9D4u) != 0x16E20009u || r_u32(0x8013D9D8u) != 0x00031040u || r_u32(0x8013D9DCu) != 0x00431021u || r_u32(0x8013D9E0u) != 0x000210C0u || r_u32(0x8013D9E4u) != 0x04410002u || r_u32(0x8013D9E8u) != 0x00000000u || r_u32(0x8013D9ECu) != 0x2442000Fu || r_u32(0x8013D9F0u) != 0x00021103u || r_u32(0x8013D9F4u) != 0x0804F680u || r_u32(0x8013D9F8u) != 0xA6A20004u || r_u32(0x8013D9FCu) != 0xA6A30004u || r_u32(0x8013DA00u) != 0x87A20016u || r_u32(0x8013DA04u) != 0x00000000u || r_u32(0x8013DA08u) != 0x00531823u || r_u32(0x8013DA0Cu) != 0x96820012u || r_u32(0x8013DA10u) != 0x04600006u || r_u32(0x8013DA14u) != 0x00000000u || r_u32(0x8013DA18u) != 0x0043102Au || r_u32(0x8013DA1Cu) != 0x10400008u ||
                r_u32(0x8013DA20u) != 0x00000000u || r_u32(0x8013DA24u) != 0x0804F68Du || r_u32(0x8013DA28u) != 0x00000000u || r_u32(0x8013DA2Cu) != 0x04410004u || r_u32(0x8013DA30u) != 0x00000000u || r_u32(0x8013DA34u) != 0x96820012u || r_u32(0x8013DA38u) != 0x0804F698u || r_u32(0x8013DA3Cu) != 0x24030010u || r_u32(0x8013DA40u) != 0x87A20016u || r_u32(0x8013DA44u) != 0x00000000u || r_u32(0x8013DA48u) != 0x00401821u || r_u32(0x8013DA4Cu) != 0x00531023u || r_u32(0x8013DA50u) != 0x04410002u || r_u32(0x8013DA54u) != 0x00731023u || r_u32(0x8013DA58u) != 0x00001021u || r_u32(0x8013DA5Cu) != 0x24030010u || r_u32(0x8013DA60u) != 0xA6A20006u || r_u32(0x8013DA64u) != 0x24020001u || r_u32(0x8013DA68u) != 0x16E20003u || r_u32(0x8013DA6Cu) != 0xA6C30004u || r_u32(0x8013DA70u) != 0x24020018u || r_u32(0x8013DA74u) != 0xA6C20004u || r_u32(0x8013DA78u) != 0x86A20006u || r_u32(0x8013DA7Cu) != 0x00000000u || r_u32(0x8013DA80u) != 0x04410002u || r_u32(0x8013DA84u) != 0x00000000u ||
                r_u32(0x8013DA88u) != 0x2442000Fu || r_u32(0x8013DA8Cu) != 0x3042FFF0u || r_u32(0x8013DA90u) != 0xA6C20006u || r_u32(0x8013DA94u) != 0x24020001u || r_u32(0x8013DA98u) != 0x96830012u || r_u32(0x8013DA9Cu) != 0x16E20008u || r_u32(0x8013DAA0u) != 0x00031040u || r_u32(0x8013DAA4u) != 0x00431021u || r_u32(0x8013DAA8u) != 0x0804F6B1u || r_u32(0x8013DAACu) != 0x00021080u || r_u32(0x8013DAB0u) != 0x0C04FA3Du || r_u32(0x8013DAB4u) != 0x00000000u || r_u32(0x8013DAB8u) != 0x0804F6E7u || r_u32(0x8013DABCu) != 0x2402001Fu || r_u32(0x8013DAC0u) != 0x000310C0u || r_u32(0x8013DAC4u) != 0x16000007u || r_u32(0x8013DAC8u) != 0xAFC20000u || r_u32(0x8013DACCu) != 0x24040001u || r_u32(0x8013DAD0u) != 0x00002821u || r_u32(0x8013DAD4u) != 0x3C068014u || r_u32(0x8013DAD8u) != 0x24C6D634u || r_u32(0x8013DADCu) != 0x0C03770Du || r_u32(0x8013DAE0u) != 0x240700D6u || r_u32(0x8013DAE4u) != 0x00002021u || r_u32(0x8013DAE8u) != 0x8FA30084u || r_u32(0x8013DAECu) != 0x00000000u ||
                r_u32(0x8013DAF0u) != 0xAC700000u || r_u32(0x8013DAF4u) != 0x8FC20000u || r_u32(0x8013DAF8u) != 0x00000000u || r_u32(0x8013DAFCu) != 0x00021080u || r_u32(0x8013DB00u) != 0x02228823u || r_u32(0x8013DB04u) != 0x0620FFEAu || r_u32(0x8013DB08u) != 0x02028021u || r_u32(0x8013DB0Cu) != 0x24840001u || r_u32(0x8013DB10u) != 0x28820002u || r_u32(0x8013DB14u) != 0x1440FFF5u || r_u32(0x8013DB18u) != 0x24630004u || r_u32(0x8013DB1Cu) != 0x96820006u || r_u32(0x8013DB20u) != 0x00000000u || r_u32(0x8013DB24u) != 0x000218C0u || r_u32(0x8013DB28u) != 0x00621823u || r_u32(0x8013DB2Cu) != 0x000318C0u || r_u32(0x8013DB30u) != 0x00621821u || r_u32(0x8013DB34u) != 0x00031100u || r_u32(0x8013DB38u) != 0x00431023u || r_u32(0x8013DB3Cu) != 0x8FA80090u || r_u32(0x8013DB40u) != 0x00021040u || r_u32(0x8013DB44u) != 0xAD020000u || r_u32(0x8013DB48u) != 0x8FA80074u || r_u32(0x8013DB4Cu) != 0x00000000u || r_u32(0x8013DB50u) != 0x19000011u || r_u32(0x8013DB54u) != 0x00002021u ||
                r_u32(0x8013DB58u) != 0x8FA3008Cu || r_u32(0x8013DB5Cu) != 0x00000000u || r_u32(0x8013DB60u) != 0xAC700000u || r_u32(0x8013DB64u) != 0x8FA80090u || r_u32(0x8013DB68u) != 0x00000000u || r_u32(0x8013DB6Cu) != 0x8D020000u || r_u32(0x8013DB70u) != 0x00000000u || r_u32(0x8013DB74u) != 0x00021080u || r_u32(0x8013DB78u) != 0x02228823u || r_u32(0x8013DB7Cu) != 0x0620FFCCu || r_u32(0x8013DB80u) != 0x02028021u || r_u32(0x8013DB84u) != 0x8FA80074u || r_u32(0x8013DB88u) != 0x24840001u || r_u32(0x8013DB8Cu) != 0x0088102Au || r_u32(0x8013DB90u) != 0x1440FFF2u || r_u32(0x8013DB94u) != 0x24630004u || r_u32(0x8013DB98u) != 0x00001021u || r_u32(0x8013DB9Cu) != 0x8FBF005Cu || r_u32(0x8013DBA0u) != 0x8FBE0058u || r_u32(0x8013DBA4u) != 0x8FB70054u || r_u32(0x8013DBA8u) != 0x8FB60050u || r_u32(0x8013DBACu) != 0x8FB5004Cu || r_u32(0x8013DBB0u) != 0x8FB40048u || r_u32(0x8013DBB4u) != 0x8FB30044u || r_u32(0x8013DBB8u) != 0x8FB20040u || r_u32(0x8013DBBCu) != 0x8FB1003Cu ||
                r_u32(0x8013DBC0u) != 0x8FB00038u || r_u32(0x8013DBC4u) != 0x27BD0060u || r_u32(0x8013DBC8u) != 0x03E00008u || r_u32(0x8013DBCCu) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013D8E8((uint32)args[0], (sint32)args[1], (sint32)args[2], (uint32)args[3], (sint32)args[4], (sint32)args[5], (uint32)args[6], (uint32)args[7], (uint32)args[8], (uint32)args[9], (uint32)args[10], (uint32)args[11], (uint32)args[12]);
            return 1;
        case 0x8013DBD0u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8013DBD0u) != 0x27BDFFD8u || r_u32(0x8013DBD4u) != 0xAFB3001Cu || r_u32(0x8013DBD8u) != 0x00809821u || r_u32(0x8013DBDCu) != 0xAFB10014u || r_u32(0x8013DBE0u) != 0x00A08821u || r_u32(0x8013DBE4u) != 0xAFB40020u || r_u32(0x8013DBE8u) != 0x3C140004u || r_u32(0x8013DBECu) != 0x3C038014u || r_u32(0x8013DBF0u) != 0x8C631A38u || r_u32(0x8013DBF4u) != 0x3C028014u || r_u32(0x8013DBF8u) != 0x8C421A34u || r_u32(0x8013DBFCu) != 0x369493E0u || r_u32(0x8013DC00u) != 0xAFBF0024u || r_u32(0x8013DC04u) != 0xAFB20018u || r_u32(0x8013DC08u) != 0x14620008u || r_u32(0x8013DC0Cu) != 0xAFB00010u || r_u32(0x8013DC10u) != 0x3C028014u || r_u32(0x8013DC14u) != 0x90421A28u || r_u32(0x8013DC18u) != 0x00000000u || r_u32(0x8013DC1Cu) != 0x14400003u || r_u32(0x8013DC20u) != 0x24020001u || r_u32(0x8013DC24u) != 0x3C018014u || r_u32(0x8013DC28u) != 0xA0221A2Bu || r_u32(0x8013DC2Cu) != 0x3C028014u || r_u32(0x8013DC30u) != 0x90421A2Bu || r_u32(0x8013DC34u) != 0x00000000u ||
                r_u32(0x8013DC38u) != 0x1440005Bu || r_u32(0x8013DC3Cu) != 0x00001821u || r_u32(0x8013DC40u) != 0x24030001u || r_u32(0x8013DC44u) != 0x00008021u || r_u32(0x8013DC48u) != 0x24120001u || r_u32(0x8013DC4Cu) != 0x02001021u || r_u32(0x8013DC50u) != 0x0054102Bu || r_u32(0x8013DC54u) != 0x10400007u || r_u32(0x8013DC58u) != 0x26100001u || r_u32(0x8013DC5Cu) != 0x02602021u || r_u32(0x8013DC60u) != 0x0C03C295u || r_u32(0x8013DC64u) != 0x02202821u || r_u32(0x8013DC68u) != 0x00401821u || r_u32(0x8013DC6Cu) != 0x1072FFF8u || r_u32(0x8013DC70u) != 0x02001021u || r_u32(0x8013DC74u) != 0x24020001u || r_u32(0x8013DC78u) != 0x1062000Bu || r_u32(0x8013DC7Cu) != 0x34028001u || r_u32(0x8013DC80u) != 0x8E240000u || r_u32(0x8013DC84u) != 0x00000000u || r_u32(0x8013DC88u) != 0x94830002u || r_u32(0x8013DC8Cu) != 0x00000000u || r_u32(0x8013DC90u) != 0x14620006u || r_u32(0x8013DC94u) != 0x24020001u || r_u32(0x8013DC98u) != 0x94820004u || r_u32(0x8013DC9Cu) != 0x00000000u ||
                r_u32(0x8013DCA0u) != 0x10400004u || r_u32(0x8013DCA4u) != 0x00000000u || r_u32(0x8013DCA8u) != 0x24020001u || r_u32(0x8013DCACu) != 0x3C018014u || r_u32(0x8013DCB0u) != 0xA0221A2Bu || r_u32(0x8013DCB4u) != 0x3C028014u || r_u32(0x8013DCB8u) != 0x90421A2Bu || r_u32(0x8013DCBCu) != 0x00000000u || r_u32(0x8013DCC0u) != 0x14400039u || r_u32(0x8013DCC4u) != 0x00001821u || r_u32(0x8013DCC8u) != 0x3C028014u || r_u32(0x8013DCCCu) != 0x90421A28u || r_u32(0x8013DCD0u) != 0x00000000u || r_u32(0x8013DCD4u) != 0x14400014u || r_u32(0x8013DCD8u) != 0x00000000u || r_u32(0x8013DCDCu) != 0x8E220000u || r_u32(0x8013DCE0u) != 0x00000000u || r_u32(0x8013DCE4u) != 0x8C430008u || r_u32(0x8013DCE8u) != 0x3C028014u || r_u32(0x8013DCECu) != 0x8C421A34u || r_u32(0x8013DCF0u) != 0x00000000u || r_u32(0x8013DCF4u) != 0x0043102Bu || r_u32(0x8013DCF8u) != 0x14400007u || r_u32(0x8013DCFCu) != 0x24020001u || r_u32(0x8013DD00u) != 0x3C028014u || r_u32(0x8013DD04u) != 0x8C421A38u ||
                r_u32(0x8013DD08u) != 0x00000000u || r_u32(0x8013DD0Cu) != 0x0043102Bu || r_u32(0x8013DD10u) != 0x1440001Bu || r_u32(0x8013DD14u) != 0x24020001u || r_u32(0x8013DD18u) != 0x3C018014u || r_u32(0x8013DD1Cu) != 0xA0221A2Bu || r_u32(0x8013DD20u) != 0x0804F760u || r_u32(0x8013DD24u) != 0x00000000u || r_u32(0x8013DD28u) != 0x3C028014u || r_u32(0x8013DD2Cu) != 0x8C4219ECu || r_u32(0x8013DD30u) != 0x00000000u || r_u32(0x8013DD34u) != 0x18400005u || r_u32(0x8013DD38u) != 0x00000000u || r_u32(0x8013DD3Cu) != 0x3C018014u || r_u32(0x8013DD40u) != 0xAC221A34u || r_u32(0x8013DD44u) != 0x0804F760u || r_u32(0x8013DD48u) != 0x00000000u || r_u32(0x8013DD4Cu) != 0x8E220000u || r_u32(0x8013DD50u) != 0x3C038014u || r_u32(0x8013DD54u) != 0x8C6319E0u || r_u32(0x8013DD58u) != 0x94420006u || r_u32(0x8013DD5Cu) != 0x8C630004u || r_u32(0x8013DD60u) != 0x000212C0u || r_u32(0x8013DD64u) != 0x0062001Bu || r_u32(0x8013DD68u) != 0x14400002u || r_u32(0x8013DD6Cu) != 0x00000000u ||
                r_u32(0x8013DD70u) != 0x0007000Du || r_u32(0x8013DD74u) != 0x00001812u || r_u32(0x8013DD78u) != 0x3C018014u || r_u32(0x8013DD7Cu) != 0xAC231A34u || r_u32(0x8013DD80u) != 0x3C028014u || r_u32(0x8013DD84u) != 0x90421A2Bu || r_u32(0x8013DD88u) != 0x00000000u || r_u32(0x8013DD8Cu) != 0x14400006u || r_u32(0x8013DD90u) != 0x00001821u || r_u32(0x8013DD94u) != 0x8E220000u || r_u32(0x8013DD98u) != 0x00000000u || r_u32(0x8013DD9Cu) != 0x8C430008u || r_u32(0x8013DDA0u) != 0x0804F76Bu || r_u32(0x8013DDA4u) != 0x00001021u || r_u32(0x8013DDA8u) != 0x00001021u || r_u32(0x8013DDACu) != 0x3C018014u || r_u32(0x8013DDB0u) != 0xAC231A38u || r_u32(0x8013DDB4u) != 0x3C018014u || r_u32(0x8013DDB8u) != 0xAC231A24u || r_u32(0x8013DDBCu) != 0x8FBF0024u || r_u32(0x8013DDC0u) != 0x8FB40020u || r_u32(0x8013DDC4u) != 0x8FB3001Cu || r_u32(0x8013DDC8u) != 0x8FB20018u || r_u32(0x8013DDCCu) != 0x8FB10014u || r_u32(0x8013DDD0u) != 0x8FB00010u || r_u32(0x8013DDD4u) != 0x27BD0028u ||
                r_u32(0x8013DDD8u) != 0x03E00008u || r_u32(0x8013DDDCu) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013DBD0(SF_DRAFT_PTR(uint32, args[0]), SF_DRAFT_PTR(uint32, args[1]));
            return 1;
        case 0x8013DDE0u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8013DDE0u) != 0x27BDFFE0u || r_u32(0x8013DDE4u) != 0xAFB00010u || r_u32(0x8013DDE8u) != 0x00808021u || r_u32(0x8013DDECu) != 0xAFB10014u || r_u32(0x8013DDF0u) != 0xAFBF0018u || r_u32(0x8013DDF4u) != 0x0C04FACAu || r_u32(0x8013DDF8u) != 0x00A08821u || r_u32(0x8013DDFCu) != 0x3C038014u || r_u32(0x8013DE00u) != 0x8C632A0Cu || r_u32(0x8013DE04u) != 0x00000000u || r_u32(0x8013DE08u) != 0x0062182Bu || r_u32(0x8013DE0Cu) != 0x10600005u || r_u32(0x8013DE10u) != 0x02002021u || r_u32(0x8013DE14u) != 0x0C03C259u || r_u32(0x8013DE18u) != 0x02002021u || r_u32(0x8013DE1Cu) != 0x0804F793u || r_u32(0x8013DE20u) != 0x2402001Fu || r_u32(0x8013DE24u) != 0x3C068014u || r_u32(0x8013DE28u) != 0x8CC62B44u || r_u32(0x8013DE2Cu) != 0x0C04FC60u || r_u32(0x8013DE30u) != 0x02202821u || r_u32(0x8013DE34u) != 0x0C03C259u || r_u32(0x8013DE38u) != 0x02002021u || r_u32(0x8013DE3Cu) != 0x38420001u || r_u32(0x8013DE40u) != 0x2C420001u || r_u32(0x8013DE44u) != 0x00021023u ||
                r_u32(0x8013DE48u) != 0x30420026u || r_u32(0x8013DE4Cu) != 0x8FBF0018u || r_u32(0x8013DE50u) != 0x8FB10014u || r_u32(0x8013DE54u) != 0x8FB00010u || r_u32(0x8013DE58u) != 0x27BD0020u || r_u32(0x8013DE5Cu) != 0x03E00008u || r_u32(0x8013DE60u) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013DDE0((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x8013DE64u:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            if (r_u32(0x8013DE64u) != 0x27BDFFD8u || r_u32(0x8013DE68u) != 0xAFB20018u || r_u32(0x8013DE6Cu) != 0x00809021u || r_u32(0x8013DE70u) != 0xAFB40020u || r_u32(0x8013DE74u) != 0x00A0A021u || r_u32(0x8013DE78u) != 0xAFB00010u || r_u32(0x8013DE7Cu) != 0x00C08021u || r_u32(0x8013DE80u) != 0xAFB10014u || r_u32(0x8013DE84u) != 0x00E08821u || r_u32(0x8013DE88u) != 0xAFB3001Cu || r_u32(0x8013DE8Cu) != 0x8FB30038u || r_u32(0x8013DE90u) != 0xAFBF0024u || r_u32(0x8013DE94u) != 0x0C04FA74u || r_u32(0x8013DE98u) != 0x24040001u || r_u32(0x8013DE9Cu) != 0x02402021u || r_u32(0x8013DEA0u) != 0x3A100001u || r_u32(0x8013DEA4u) != 0x0C04FACDu || r_u32(0x8013DEA8u) != 0x2E050001u || r_u32(0x8013DEACu) != 0x8E220000u || r_u32(0x8013DEB0u) != 0x00000000u || r_u32(0x8013DEB4u) != 0x00021080u || r_u32(0x8013DEB8u) != 0x00531021u || r_u32(0x8013DEBCu) != 0x8C440000u || r_u32(0x8013DEC0u) != 0x0C04FAECu || r_u32(0x8013DEC4u) != 0x02802821u || r_u32(0x8013DEC8u) != 0x8E220000u ||
                r_u32(0x8013DECCu) != 0x00000000u || r_u32(0x8013DED0u) != 0x2C420001u || r_u32(0x8013DED4u) != 0xAE220000u || r_u32(0x8013DED8u) != 0x00001021u || r_u32(0x8013DEDCu) != 0x8FBF0024u || r_u32(0x8013DEE0u) != 0x8FB40020u || r_u32(0x8013DEE4u) != 0x8FB3001Cu || r_u32(0x8013DEE8u) != 0x8FB20018u || r_u32(0x8013DEECu) != 0x8FB10014u || r_u32(0x8013DEF0u) != 0x8FB00010u || r_u32(0x8013DEF4u) != 0x27BD0028u || r_u32(0x8013DEF8u) != 0x03E00008u || r_u32(0x8013DEFCu) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013DE64((uint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3], (uint32)args[4]);
            return 1;
        case 0x8013DF00u:
            if (r_u32(0x8013DF00u) != 0x27BDFFE8u || r_u32(0x8013DF04u) != 0x3C038014u || r_u32(0x8013DF08u) != 0x8C631A30u || r_u32(0x8013DF0Cu) != 0x24020001u || r_u32(0x8013DF10u) != 0xAFBF0014u || r_u32(0x8013DF14u) != 0x1462000Au || r_u32(0x8013DF18u) != 0xAFB00010u || r_u32(0x8013DF1Cu) != 0x3C028013u || r_u32(0x8013DF20u) != 0x8C42CA00u || r_u32(0x8013DF24u) != 0x00000000u || r_u32(0x8013DF28u) != 0x14430005u || r_u32(0x8013DF2Cu) != 0x00000000u || r_u32(0x8013DF30u) != 0x0C03C2CDu || r_u32(0x8013DF34u) != 0x00000000u || r_u32(0x8013DF38u) != 0x3C018013u || r_u32(0x8013DF3Cu) != 0xAC20CA00u || r_u32(0x8013DF40u) != 0x3C038014u || r_u32(0x8013DF44u) != 0x84632A20u || r_u32(0x8013DF48u) != 0x3C048014u || r_u32(0x8013DF4Cu) != 0x84842A1Cu || r_u32(0x8013DF50u) != 0x3C028014u || r_u32(0x8013DF54u) != 0x84422A14u || r_u32(0x8013DF58u) != 0x3C058014u || r_u32(0x8013DF5Cu) != 0x84A52A18u || r_u32(0x8013DF60u) != 0x00031840u || r_u32(0x8013DF64u) != 0x00832021u ||
                r_u32(0x8013DF68u) != 0x00451021u || r_u32(0x8013DF6Cu) != 0x0044102Au || r_u32(0x8013DF70u) != 0x1440000Du || r_u32(0x8013DF74u) != 0x00000000u || r_u32(0x8013DF78u) != 0x3C028014u || r_u32(0x8013DF7Cu) != 0x8C421A1Cu || r_u32(0x8013DF80u) != 0x3C058014u || r_u32(0x8013DF84u) != 0x8CA52A10u || r_u32(0x8013DF88u) != 0x00021080u || r_u32(0x8013DF8Cu) != 0x3C018014u || r_u32(0x8013DF90u) != 0x00220821u || r_u32(0x8013DF94u) != 0x8C241A0Cu || r_u32(0x8013DF98u) != 0x0C04FAECu || r_u32(0x8013DF9Cu) != 0x00000000u || r_u32(0x8013DFA0u) != 0x0804F7EFu || r_u32(0x8013DFA4u) != 0x00000000u || r_u32(0x8013DFA8u) != 0x0C039400u || r_u32(0x8013DFACu) != 0x00002021u || r_u32(0x8013DFB0u) != 0x24020001u || r_u32(0x8013DFB4u) != 0x3C018014u || r_u32(0x8013DFB8u) != 0xA0221A2Au || r_u32(0x8013DFBCu) != 0x3C038014u || r_u32(0x8013DFC0u) != 0x8C631A1Cu || r_u32(0x8013DFC4u) != 0x3C108014u || r_u32(0x8013DFC8u) != 0x26102A1Cu || r_u32(0x8013DFCCu) != 0x2C630001u ||
                r_u32(0x8013DFD0u) != 0x00031080u || r_u32(0x8013DFD4u) != 0x3C018014u || r_u32(0x8013DFD8u) != 0x00220821u || r_u32(0x8013DFDCu) != 0x8C251A0Cu || r_u32(0x8013DFE0u) != 0x3C018014u || r_u32(0x8013DFE4u) != 0xAC231A1Cu || r_u32(0x8013DFE8u) != 0x0C0394ABu || r_u32(0x8013DFECu) != 0x02002021u || r_u32(0x8013DFF0u) != 0x96020000u || r_u32(0x8013DFF4u) != 0x3C038014u || r_u32(0x8013DFF8u) != 0x94632A20u || r_u32(0x8013DFFCu) != 0x00000000u || r_u32(0x8013E000u) != 0x00431021u || r_u32(0x8013E004u) != 0xA6020000u || r_u32(0x8013E008u) != 0x8FBF0014u || r_u32(0x8013E00Cu) != 0x8FB00010u || r_u32(0x8013E010u) != 0x27BD0018u || r_u32(0x8013E014u) != 0x03E00008u || r_u32(0x8013E018u) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            sub_8013DF00();
            *result = 0;
            return 1;
        case 0x8013E01Cu:
            if (r_u32(0x8013E01Cu) != 0x27BDFFB8u || r_u32(0x8013E020u) != 0x27A40038u || r_u32(0x8013E024u) != 0x27A5003Cu)
                sf_callback_image_error(target, "MOVIE.DEP.OVL");
            *result = (uint32)sub_8013E01C();
            return 1;
        case 0x8013E154u:
            if (r_u32(0x8013E154u) != 0x27BDFFD0u || r_u32(0x8013E158u) != 0x27A40020u || r_u32(0x8013E15Cu) != 0xAFBF002Cu)
                sf_callback_image_error(target, "MOVIE.DEP.OVL");
            *result = (uint32)sub_8013E154();
            return 1;
        case 0x8013E258u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8013E258u) != 0x308400FFu || r_u32(0x8013E25Cu) != 0x24020001u || r_u32(0x8013E260u) != 0x14820002u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013E258((sint32)args[0]);
            return 1;
        case 0x8013E27Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8013E27Cu) != 0x3C018014u || r_u32(0x8013E280u) != 0xAC241A14u || r_u32(0x8013E284u) != 0x03E00008u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013E27C((sint32)args[0]);
            return 1;
        case 0x8013E28Cu:
            if (argc < 7u)
                sf_callback_arity_error(target, 7u, argc);
            if (r_u32(0x8013E28Cu) != 0x27BDFFC8u || r_u32(0x8013E290u) != 0xAFB60030u || r_u32(0x8013E294u) != 0x8FB60048u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013E28C((uint32)args[0], (sint32)args[1], (sint32)args[2], (sint32)args[3], (sint32)args[4], (uint32)args[5], (sint32)args[6]);
            return 1;
        case 0x8013E4E0u:
            if (r_u32(0x8013E4E0u) != 0x3C028014u || r_u32(0x8013E4E4u) != 0x90421A20u || r_u32(0x8013E4E8u) != 0x27BDFFE8u)
                sf_callback_image_error(target, "MOVIE.DEP.OVL");
            *result = (uint32)sub_8013E4E0();
            return 1;
        case 0x8013E578u:
            if (r_u32(0x8013E578u) != 0x3C028014u || r_u32(0x8013E57Cu) != 0x90421A20u || r_u32(0x8013E580u) != 0x27BDFFE0u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013E578();
            return 1;
        case 0x8013E7BCu:
            if (r_u32(0x8013E7BCu) != 0x3C028014u || r_u32(0x8013E7C0u) != 0x90421A20u || r_u32(0x8013E7C4u) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.DEP.OVL");
            *result = (uint32)sub_8013E7BC();
            return 1;
        case 0x8013E83Cu:
            if (r_u32(0x8013E83Cu) != 0x3C028014u || r_u32(0x8013E840u) != 0x90421A20u || r_u32(0x8013E844u) != 0x27BDFFE8u)
                sf_callback_image_error(target, "MOVIE.DEP.OVL");
            *result = (uint32)sub_8013E83C();
            return 1;
        case 0x8013E8F4u:
            if (r_u32(0x8013E8F4u) != 0x3C028014u || r_u32(0x8013E8F8u) != 0x90421A20u || r_u32(0x8013E8FCu) != 0x27BDFFE8u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013E8F4();
            return 1;
        case 0x8013E9D0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8013E9D0u) != 0x27BDFFE8u || r_u32(0x8013E9D4u) != 0xAFB00010u || r_u32(0x8013E9D8u) != 0x00808021u)
                sf_callback_image_error(target, "MOVIE.DEP.OVL");
            sub_8013E9D0((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x8013EB28u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8013EB28u) != 0x94820000u || r_u32(0x8013EB2Cu) != 0x03E00008u || r_u32(0x8013EB30u) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013EB28((uint32)args[0]);
            return 1;
        case 0x8013EB34u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8013EB34u) != 0x27BDFFE8u || r_u32(0x8013EB38u) != 0x30A20001u || r_u32(0x8013EB3Cu) != 0x10400006u || r_u32(0x8013EB40u) != 0xAFBF0010u || r_u32(0x8013EB44u) != 0x3C03F7FFu || r_u32(0x8013EB48u) != 0x8C820000u || r_u32(0x8013EB4Cu) != 0x3463FFFFu || r_u32(0x8013EB50u) != 0x0804FAD9u || r_u32(0x8013EB54u) != 0x00431024u || r_u32(0x8013EB58u) != 0x8C820000u || r_u32(0x8013EB5Cu) != 0x3C030800u || r_u32(0x8013EB60u) != 0x00431025u || r_u32(0x8013EB64u) != 0xAC820000u || r_u32(0x8013EB68u) != 0x30A20002u || r_u32(0x8013EB6Cu) != 0x10400004u || r_u32(0x8013EB70u) != 0x3C030200u || r_u32(0x8013EB74u) != 0x8C820000u || r_u32(0x8013EB78u) != 0x0804FAE4u || r_u32(0x8013EB7Cu) != 0x00431025u || r_u32(0x8013EB80u) != 0x3C03FDFFu || r_u32(0x8013EB84u) != 0x8C820000u || r_u32(0x8013EB88u) != 0x3463FFFFu || r_u32(0x8013EB8Cu) != 0x00431024u || r_u32(0x8013EB90u) != 0xAC820000u || r_u32(0x8013EB94u) != 0x94850000u || r_u32(0x8013EB98u) != 0x0C04FB60u ||
                r_u32(0x8013EB9Cu) != 0x00000000u || r_u32(0x8013EBA0u) != 0x8FBF0010u || r_u32(0x8013EBA4u) != 0x27BD0018u || r_u32(0x8013EBA8u) != 0x03E00008u || r_u32(0x8013EBACu) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            sub_8013EB34((uint32)args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x8013EBB0u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8013EBB0u) != 0x27BDFFE8u || r_u32(0x8013EBB4u) != 0xAFBF0010u || r_u32(0x8013EBB8u) != 0x0C04FB84u || r_u32(0x8013EBBCu) != 0x00000000u || r_u32(0x8013EBC0u) != 0x8FBF0010u || r_u32(0x8013EBC4u) != 0x27BD0018u || r_u32(0x8013EBC8u) != 0x03E00008u || r_u32(0x8013EBCCu) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            sub_8013EBB0((uint32)args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x8013EC6Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8013EC6Cu) != 0x27BDFFE8u || r_u32(0x8013EC70u) != 0xAFBF0010u || r_u32(0x8013EC74u) != 0x00802821u)
                sf_callback_image_error(target, "MOVIE.DEP.OVL");
            *result = (uint32)sub_8013EC6C((uint32)args[0]);
            return 1;
        case 0x8013EC90u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8013EC90u) != 0x27BDFFE8u || r_u32(0x8013EC94u) != 0x00802821u || r_u32(0x8013EC98u) != 0x10A00006u || r_u32(0x8013EC9Cu) != 0xAFBF0010u || r_u32(0x8013ECA0u) != 0x24020001u || r_u32(0x8013ECA4u) != 0x10A2001Bu || r_u32(0x8013ECA8u) != 0x3C028000u || r_u32(0x8013ECACu) != 0x0804FB59u || r_u32(0x8013ECB0u) != 0x00000000u || r_u32(0x8013ECB4u) != 0x3C038014u || r_u32(0x8013ECB8u) != 0x8C631B80u || r_u32(0x8013ECBCu) != 0x3C028000u || r_u32(0x8013ECC0u) != 0xAC620000u || r_u32(0x8013ECC4u) != 0x3C028014u || r_u32(0x8013ECC8u) != 0x8C421B54u || r_u32(0x8013ECCCu) != 0x3C048014u || r_u32(0x8013ECD0u) != 0x24841A3Cu || r_u32(0x8013ECD4u) != 0xAC400000u || r_u32(0x8013ECD8u) != 0x3C028014u || r_u32(0x8013ECDCu) != 0x8C421B60u || r_u32(0x8013ECE0u) != 0x24050020u || r_u32(0x8013ECE4u) != 0xAC400000u || r_u32(0x8013ECE8u) != 0x3C038014u || r_u32(0x8013ECECu) != 0x8C631B80u || r_u32(0x8013ECF0u) != 0x3C026000u || r_u32(0x8013ECF4u) != 0x0C04FB60u ||
                r_u32(0x8013ECF8u) != 0xAC620000u || r_u32(0x8013ECFCu) != 0x3C048014u || r_u32(0x8013ED00u) != 0x24841AC0u || r_u32(0x8013ED04u) != 0x0C04FB60u || r_u32(0x8013ED08u) != 0x24050020u || r_u32(0x8013ED0Cu) != 0x0804FB5Cu || r_u32(0x8013ED10u) != 0x00000000u || r_u32(0x8013ED14u) != 0x3C038014u || r_u32(0x8013ED18u) != 0x8C631B80u || r_u32(0x8013ED1Cu) != 0x00000000u || r_u32(0x8013ED20u) != 0xAC620000u || r_u32(0x8013ED24u) != 0x3C028014u || r_u32(0x8013ED28u) != 0x8C421B54u || r_u32(0x8013ED2Cu) != 0x00000000u || r_u32(0x8013ED30u) != 0xAC400000u || r_u32(0x8013ED34u) != 0x3C028014u || r_u32(0x8013ED38u) != 0x8C421B60u || r_u32(0x8013ED3Cu) != 0x00000000u || r_u32(0x8013ED40u) != 0xAC400000u || r_u32(0x8013ED44u) != 0x3C028014u || r_u32(0x8013ED48u) != 0x8C421B60u || r_u32(0x8013ED4Cu) != 0x3C038014u || r_u32(0x8013ED50u) != 0x8C631B80u || r_u32(0x8013ED54u) != 0x8C420000u || r_u32(0x8013ED58u) != 0x3C026000u || r_u32(0x8013ED5Cu) != 0x0804FB5Cu ||
                r_u32(0x8013ED60u) != 0xAC620000u || r_u32(0x8013ED64u) != 0x3C048014u || r_u32(0x8013ED68u) != 0x0C03B245u || r_u32(0x8013ED6Cu) != 0x2484D640u || r_u32(0x8013ED70u) != 0x8FBF0010u || r_u32(0x8013ED74u) != 0x27BD0018u || r_u32(0x8013ED78u) != 0x03E00008u || r_u32(0x8013ED7Cu) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            sub_8013EC90((uint32)args[0]);
            *result = 0;
            return 1;
        case 0x8013F060u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8013F060u) != 0x00001821u || r_u32(0x8013F064u) != 0x3C078014u || r_u32(0x8013F068u) != 0x24E71B8Cu)
                sf_callback_image_error(target, "MOVIE.DEP.OVL");
            *result = (uint32)sub_8013F060((uint32)args[0]);
            return 1;
        case 0x8013F180u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            if (r_u32(0x8013F180u) != 0x3C088014u || r_u32(0x8013F184u) != 0x2508299Cu || r_u32(0x8013F188u) != 0x20C60800u || r_u32(0x8013F18Cu) != 0x3C010001u || r_u32(0x8013F190u) != 0x00C13820u || r_u32(0x8013F194u) != 0x1480000Fu || r_u32(0x8013F198u) != 0x8D090000u || r_u32(0x8013F19Cu) != 0x3C088014u || r_u32(0x8013F1A0u) != 0x250829A0u || r_u32(0x8013F1A4u) != 0x8D040000u || r_u32(0x8013F1A8u) != 0x8D050004u || r_u32(0x8013F1ACu) != 0x8D020008u || r_u32(0x8013F1B0u) != 0x8D03000Cu || r_u32(0x8013F1B4u) != 0x8D0C0010u || r_u32(0x8013F1B8u) != 0x8D0D0014u || r_u32(0x8013F1BCu) != 0x8D0F0018u || r_u32(0x8013F1C0u) != 0x8D18001Cu || r_u32(0x8013F1C4u) != 0x8D190020u || r_u32(0x8013F1C8u) != 0x01294820u || r_u32(0x8013F1CCu) != 0x10000064u || r_u32(0x8013F1D0u) != 0x00A97020u || r_u32(0x8013F1D4u) != 0x00006820u || r_u32(0x8013F1D8u) != 0x00007820u || r_u32(0x8013F1DCu) != 0x0000C020u || r_u32(0x8013F1E0u) != 0x0000C820u || r_u32(0x8013F1E4u) != 0x01294820u ||
                r_u32(0x8013F1E8u) != 0x00A97020u || r_u32(0x8013F1ECu) != 0x8C890000u || r_u32(0x8013F1F0u) != 0x948C0004u || r_u32(0x8013F1F4u) != 0x948A0006u || r_u32(0x8013F1F8u) != 0x94820008u || r_u32(0x8013F1FCu) != 0x9483000Au || r_u32(0x8013F200u) != 0x214AFFFDu || r_u32(0x8013F204u) != 0x05400002u || r_u32(0x8013F208u) != 0x000C6280u || r_u32(0x8013F20Cu) != 0x200D0001u || r_u32(0x8013F210u) != 0x2084000Cu || r_u32(0x8013F214u) != 0x00021400u || r_u32(0x8013F218u) != 0x00431025u || r_u32(0x8013F21Cu) != 0x00001825u || r_u32(0x8013F220u) != 0xACA90000u || r_u32(0x8013F224u) != 0x3129FFFFu || r_u32(0x8013F228u) != 0x00094880u || r_u32(0x8013F22Cu) != 0x25290004u || r_u32(0x8013F230u) != 0x01254820u || r_u32(0x8013F234u) != 0x3C088014u || r_u32(0x8013F238u) != 0x250829C4u || r_u32(0x8013F23Cu) != 0xAD090000u || r_u32(0x8013F240u) != 0x20A50002u || r_u32(0x8013F244u) != 0x11A00035u || r_u32(0x8013F248u) != 0x00024582u || r_u32(0x8013F24Cu) != 0x390103FFu ||
                r_u32(0x8013F250u) != 0x10200085u || r_u32(0x8013F254u) != 0x20A50002u || r_u32(0x8013F258u) != 0x21A1FFFDu || r_u32(0x8013F25Cu) != 0x04200002u || r_u32(0x8013F260u) != 0x20C1FC00u || r_u32(0x8013F264u) != 0x2021FC00u || r_u32(0x8013F268u) != 0x00024602u || r_u32(0x8013F26Cu) != 0x00084080u || r_u32(0x8013F270u) != 0x01014020u || r_u32(0x8013F274u) != 0x95090000u || r_u32(0x8013F278u) != 0x950A0002u || r_u32(0x8013F27Cu) != 0x00004024u || r_u32(0x8013F280u) != 0x1140000Au || r_u32(0x8013F284u) != 0x01221004u || r_u32(0x8013F288u) != 0x20010020u || r_u32(0x8013F28Cu) != 0x002A0822u || r_u32(0x8013F290u) != 0x00224006u || r_u32(0x8013F294u) != 0x04400004u || r_u32(0x8013F298u) != 0x01421004u || r_u32(0x8013F29Cu) != 0x200BFFFFu || r_u32(0x8013F2A0u) != 0x002B5806u || r_u32(0x8013F2A4u) != 0x010B4022u || r_u32(0x8013F2A8u) != 0x006A1820u || r_u32(0x8013F2ACu) != 0x00691820u || r_u32(0x8013F2B0u) != 0x30610010u || r_u32(0x8013F2B4u) != 0x10200005u ||
                r_u32(0x8013F2B8u) != 0x3063000Fu || r_u32(0x8013F2BCu) != 0x94890000u || r_u32(0x8013F2C0u) != 0x20840002u || r_u32(0x8013F2C4u) != 0x00694804u || r_u32(0x8013F2C8u) != 0x00491025u || r_u32(0x8013F2CCu) != 0x21A1FFFEu || r_u32(0x8013F2D0u) != 0x1C200008u || r_u32(0x8013F2D4u) != 0x03284820u || r_u32(0x8013F2D8u) != 0x10200004u || r_u32(0x8013F2DCu) != 0x03084820u || r_u32(0x8013F2E0u) != 0x01E84820u || r_u32(0x8013F2E4u) != 0x10000004u || r_u32(0x8013F2E8u) != 0x01E87820u || r_u32(0x8013F2ECu) != 0x10000002u || r_u32(0x8013F2F0u) != 0x0308C020u || r_u32(0x8013F2F4u) != 0x0328C820u || r_u32(0x8013F2F8u) != 0x00094880u || r_u32(0x8013F2FCu) != 0x312903FFu || r_u32(0x8013F300u) != 0x01894825u || r_u32(0x8013F304u) != 0x21AD0001u || r_u32(0x8013F308u) != 0x21A1FFF9u || r_u32(0x8013F30Cu) != 0x14200011u || r_u32(0x8013F310u) != 0xA4A90000u || r_u32(0x8013F314u) != 0x1000000Fu || r_u32(0x8013F318u) != 0x21ADFFFAu || r_u32(0x8013F31Cu) != 0x390101FFu ||
                r_u32(0x8013F320u) != 0x10200051u || r_u32(0x8013F324u) != 0x20A50002u || r_u32(0x8013F328u) != 0x00021280u || r_u32(0x8013F32Cu) != 0x2063000Au || r_u32(0x8013F330u) != 0x30610010u || r_u32(0x8013F334u) != 0x10200005u || r_u32(0x8013F338u) != 0x3063000Fu || r_u32(0x8013F33Cu) != 0x94890000u || r_u32(0x8013F340u) != 0x20840002u || r_u32(0x8013F344u) != 0x00694804u || r_u32(0x8013F348u) != 0x00491025u || r_u32(0x8013F34Cu) != 0x01884025u || r_u32(0x8013F350u) != 0xA4A80000u || r_u32(0x8013F354u) != 0x00AE0823u || r_u32(0x8013F358u) != 0x04210054u || r_u32(0x8013F35Cu) != 0x20A50002u || r_u32(0x8013F360u) != 0x000244C2u || r_u32(0x8013F364u) != 0x000840C0u || r_u32(0x8013F368u) != 0x01064020u || r_u32(0x8013F36Cu) != 0x8D090000u || r_u32(0x8013F370u) != 0x00000000u || r_u32(0x8013F374u) != 0x15200011u || r_u32(0x8013F378u) != 0x312100FFu || r_u32(0x8013F37Cu) != 0x00021200u || r_u32(0x8013F380u) != 0x20630008u || r_u32(0x8013F384u) != 0x30610010u ||
                r_u32(0x8013F388u) != 0x10200005u || r_u32(0x8013F38Cu) != 0x3063000Fu || r_u32(0x8013F390u) != 0x94880000u || r_u32(0x8013F394u) != 0x20840002u || r_u32(0x8013F398u) != 0x00684004u || r_u32(0x8013F39Cu) != 0x00481025u || r_u32(0x8013F3A0u) != 0x000245C2u || r_u32(0x8013F3A4u) != 0x00084080u || r_u32(0x8013F3A8u) != 0x01074020u || r_u32(0x8013F3ACu) != 0x8D090000u || r_u32(0x8013F3B0u) != 0x00005820u || r_u32(0x8013F3B4u) != 0x10000002u || r_u32(0x8013F3B8u) != 0x312100FFu || r_u32(0x8013F3BCu) != 0x8D0B0004u || r_u32(0x8013F3C0u) != 0x00221004u || r_u32(0x8013F3C4u) != 0x00611820u || r_u32(0x8013F3C8u) != 0x30610010u || r_u32(0x8013F3CCu) != 0x10200005u || r_u32(0x8013F3D0u) != 0x3063000Fu || r_u32(0x8013F3D4u) != 0x94880000u || r_u32(0x8013F3D8u) != 0x20840002u || r_u32(0x8013F3DCu) != 0x00684004u || r_u32(0x8013F3E0u) != 0x00481025u || r_u32(0x8013F3E4u) != 0x00094C02u || r_u32(0x8013F3E8u) != 0x39217C1Fu || r_u32(0x8013F3ECu) != 0x10200015u ||
                r_u32(0x8013F3F0u) != 0x3921FE00u || r_u32(0x8013F3F4u) != 0x1020FF93u || r_u32(0x8013F3F8u) != 0xA4A90000u || r_u32(0x8013F3FCu) != 0x1160FFD8u || r_u32(0x8013F400u) != 0x20A50002u || r_u32(0x8013F404u) != 0x316AFFFFu || r_u32(0x8013F408u) != 0x39417C1Fu || r_u32(0x8013F40Cu) != 0x1020000Du || r_u32(0x8013F410u) != 0x3941FE00u || r_u32(0x8013F414u) != 0x1020FF8Bu || r_u32(0x8013F418u) != 0xA4AA0000u || r_u32(0x8013F41Cu) != 0x000B5402u || r_u32(0x8013F420u) != 0x1140FFCFu || r_u32(0x8013F424u) != 0x20A50002u || r_u32(0x8013F428u) != 0x39417C1Fu || r_u32(0x8013F42Cu) != 0x10200005u || r_u32(0x8013F430u) != 0x3941FE00u || r_u32(0x8013F434u) != 0x1020FF83u || r_u32(0x8013F438u) != 0xA4AA0000u || r_u32(0x8013F43Cu) != 0x1000FFC8u || r_u32(0x8013F440u) != 0x20A50002u || r_u32(0x8013F444u) != 0x00024402u || r_u32(0x8013F448u) != 0xA4A80000u || r_u32(0x8013F44Cu) != 0x20A50002u || r_u32(0x8013F450u) != 0x94880000u || r_u32(0x8013F454u) != 0x20840002u ||
                r_u32(0x8013F458u) != 0x00021400u || r_u32(0x8013F45Cu) != 0x00684004u || r_u32(0x8013F460u) != 0x1000FFBFu || r_u32(0x8013F464u) != 0x00481025u || r_u32(0x8013F468u) != 0x3C088014u || r_u32(0x8013F46Cu) != 0x250829C4u || r_u32(0x8013F470u) != 0x8D090000u || r_u32(0x8013F474u) != 0x3408FE00u || r_u32(0x8013F478u) != 0x00A90823u || r_u32(0x8013F47Cu) != 0x04210004u || r_u32(0x8013F480u) != 0x00000000u || r_u32(0x8013F484u) != 0xA4A80000u || r_u32(0x8013F488u) != 0x1000FFFBu || r_u32(0x8013F48Cu) != 0x20A50002u || r_u32(0x8013F490u) != 0x40096000u || r_u32(0x8013F494u) != 0x00000000u || r_u32(0x8013F498u) != 0x3C010002u || r_u32(0x8013F49Cu) != 0x01214825u || r_u32(0x8013F4A0u) != 0x40896000u || r_u32(0x8013F4A4u) != 0x03E00008u || r_u32(0x8013F4A8u) != 0x00001020u || r_u32(0x8013F4ACu) != 0x3C088014u || r_u32(0x8013F4B0u) != 0x250829A0u || r_u32(0x8013F4B4u) != 0xAD040000u || r_u32(0x8013F4B8u) != 0xAD050004u || r_u32(0x8013F4BCu) != 0xAD020008u ||
                r_u32(0x8013F4C0u) != 0xAD03000Cu || r_u32(0x8013F4C4u) != 0xAD0C0010u || r_u32(0x8013F4C8u) != 0xAD0D0014u || r_u32(0x8013F4CCu) != 0xAD0F0018u || r_u32(0x8013F4D0u) != 0xAD18001Cu || r_u32(0x8013F4D4u) != 0xAD190020u || r_u32(0x8013F4D8u) != 0x03E00008u || r_u32(0x8013F4DCu) != 0x20020001u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013F180((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x8013F4E0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8013F4E0u) != 0x27BDFFE8u || r_u32(0x8013F4E4u) != 0xAFBF0010u || r_u32(0x8013F4E8u) != 0x3C018014u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013F4E0((uint32)args[0]);
            return 1;
        case 0x8013F52Cu:
            if (r_u32(0x8013F52Cu) != 0x27BDFFE8u || r_u32(0x8013F530u) != 0xAFBF0010u || r_u32(0x8013F534u) != 0x0C0503B4u || r_u32(0x8013F538u) != 0x00000000u || r_u32(0x8013F53Cu) != 0x3C028014u || r_u32(0x8013F540u) != 0x24422A3Cu || r_u32(0x8013F544u) != 0x2403FFFFu || r_u32(0x8013F548u) != 0xAC400000u || r_u32(0x8013F54Cu) != 0xAC400004u || r_u32(0x8013F550u) != 0xAC400008u || r_u32(0x8013F554u) != 0x0C05042Cu || r_u32(0x8013F558u) != 0xAC430010u || r_u32(0x8013F55Cu) != 0x3C058014u || r_u32(0x8013F560u) != 0x24A50D70u || r_u32(0x8013F564u) != 0x0C039092u || r_u32(0x8013F568u) != 0x24040007u || r_u32(0x8013F56Cu) != 0x8FBF0010u || r_u32(0x8013F570u) != 0x27BD0018u || r_u32(0x8013F574u) != 0x03E00008u || r_u32(0x8013F578u) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            sub_8013F52C();
            *result = 0;
            return 1;
        case 0x8013F57Cu:
            if (r_u32(0x8013F57Cu) != 0x27BDFFE8u || r_u32(0x8013F580u) != 0x3C038014u || r_u32(0x8013F584u) != 0x24632A3Cu || r_u32(0x8013F588u) != 0xAFBF0010u || r_u32(0x8013F58Cu) != 0x8C620000u || r_u32(0x8013F590u) != 0x00000000u || r_u32(0x8013F594u) != 0x1440FFFDu || r_u32(0x8013F598u) != 0x24040007u || r_u32(0x8013F59Cu) != 0x0C039092u || r_u32(0x8013F5A0u) != 0x00002821u || r_u32(0x8013F5A4u) != 0x0C0504ABu || r_u32(0x8013F5A8u) != 0x00000000u || r_u32(0x8013F5ACu) != 0x8FBF0010u || r_u32(0x8013F5B0u) != 0x27BD0018u || r_u32(0x8013F5B4u) != 0x03E00008u || r_u32(0x8013F5B8u) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            sub_8013F57C();
            *result = 0;
            return 1;
        case 0x8013F5BCu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8013F5BCu) != 0x27BDFFE8u || r_u32(0x8013F5C0u) != 0x3C038014u || r_u32(0x8013F5C4u) != 0x24632A3Cu || r_u32(0x8013F5C8u) != 0xAFBF0010u || r_u32(0x8013F5CCu) != 0x8C620000u || r_u32(0x8013F5D0u) != 0x00000000u || r_u32(0x8013F5D4u) != 0x1C40000Bu || r_u32(0x8013F5D8u) != 0x00802821u || r_u32(0x8013F5DCu) != 0x3C048014u || r_u32(0x8013F5E0u) != 0x2484F624u || r_u32(0x8013F5E4u) != 0x24020001u || r_u32(0x8013F5E8u) != 0xAC620000u || r_u32(0x8013F5ECu) != 0xAC600004u || r_u32(0x8013F5F0u) != 0xAC600008u || r_u32(0x8013F5F4u) != 0x0C0503B8u || r_u32(0x8013F5F8u) != 0xAC65000Cu || r_u32(0x8013F5FCu) != 0x0804FD85u || r_u32(0x8013F600u) != 0x24020001u || r_u32(0x8013F604u) != 0x3C048014u || r_u32(0x8013F608u) != 0x0C03B245u || r_u32(0x8013F60Cu) != 0x2484D690u || r_u32(0x8013F610u) != 0x00001021u || r_u32(0x8013F614u) != 0x8FBF0010u || r_u32(0x8013F618u) != 0x27BD0018u || r_u32(0x8013F61Cu) != 0x03E00008u || r_u32(0x8013F620u) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013F5BC((uint32)args[0]);
            return 1;
        case 0x8013F624u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8013F624u) != 0x27BDFFE0u || r_u32(0x8013F628u) != 0xAFB00010u || r_u32(0x8013F62Cu) != 0x00808021u || r_u32(0x8013F630u) != 0xAFBF0018u || r_u32(0x8013F634u) != 0xAFB10014u || r_u32(0x8013F638u) != 0x8E030000u || r_u32(0x8013F63Cu) != 0x00000000u || r_u32(0x8013F640u) != 0x10600009u || r_u32(0x8013F644u) != 0x2402000Au || r_u32(0x8013F648u) != 0x04600065u || r_u32(0x8013F64Cu) != 0x2411000Au || r_u32(0x8013F650u) != 0x1071000Au || r_u32(0x8013F654u) != 0x2402000Bu || r_u32(0x8013F658u) != 0x10620013u || r_u32(0x8013F65Cu) != 0x00001021u || r_u32(0x8013F660u) != 0x0804FDF9u || r_u32(0x8013F664u) != 0x00000000u || r_u32(0x8013F668u) != 0x3C018014u || r_u32(0x8013F66Cu) != 0xAC202A28u || r_u32(0x8013F670u) != 0x3C018014u || r_u32(0x8013F674u) != 0xAC202A24u || r_u32(0x8013F678u) != 0xAE020000u || r_u32(0x8013F67Cu) != 0x0C0504D8u || r_u32(0x8013F680u) != 0x00000000u || r_u32(0x8013F684u) != 0x3C048014u || r_u32(0x8013F688u) != 0x8C842A48u ||
                r_u32(0x8013F68Cu) != 0x0C050394u || r_u32(0x8013F690u) != 0x00000000u || r_u32(0x8013F694u) != 0x8E020000u || r_u32(0x8013F698u) != 0x00000000u || r_u32(0x8013F69Cu) != 0x24420001u || r_u32(0x8013F6A0u) != 0x0804FDF8u || r_u32(0x8013F6A4u) != 0xAE020000u || r_u32(0x8013F6A8u) != 0x0C050586u || r_u32(0x8013F6ACu) != 0x00000000u || r_u32(0x8013F6B0u) != 0x1040004Cu || r_u32(0x8013F6B4u) != 0x00001021u || r_u32(0x8013F6B8u) != 0x0C05051Au || r_u32(0x8013F6BCu) != 0x00000000u || r_u32(0x8013F6C0u) != 0x00401821u || r_u32(0x8013F6C4u) != 0x3C018014u || r_u32(0x8013F6C8u) != 0xAC222A28u || r_u32(0x8013F6CCu) != 0x28620003u || r_u32(0x8013F6D0u) != 0x10400007u || r_u32(0x8013F6D4u) != 0x00000000u || r_u32(0x8013F6D8u) != 0x1C600023u || r_u32(0x8013F6DCu) != 0x00000000u || r_u32(0x8013F6E0u) != 0x1060000Du || r_u32(0x8013F6E4u) != 0x24020001u || r_u32(0x8013F6E8u) != 0x0804FDE5u || r_u32(0x8013F6ECu) != 0x00000000u || r_u32(0x8013F6F0u) != 0x24020004u ||
                r_u32(0x8013F6F4u) != 0x14620027u || r_u32(0x8013F6F8u) != 0x00000000u || r_u32(0x8013F6FCu) != 0x0C050347u || r_u32(0x8013F700u) != 0x24040004u || r_u32(0x8013F704u) != 0x3C038014u || r_u32(0x8013F708u) != 0x24632A3Cu || r_u32(0x8013F70Cu) != 0xAC620004u || r_u32(0x8013F710u) != 0x0804FDF9u || r_u32(0x8013F714u) != 0x24020001u || r_u32(0x8013F718u) != 0x3C108014u || r_u32(0x8013F71Cu) != 0x26102A48u || r_u32(0x8013F720u) != 0x8E040000u || r_u32(0x8013F724u) != 0x3C038014u || r_u32(0x8013F728u) != 0x8C632A38u || r_u32(0x8013F72Cu) != 0x00821004u || r_u32(0x8013F730u) != 0x00621824u || r_u32(0x8013F734u) != 0x14600003u || r_u32(0x8013F738u) != 0x24020004u || r_u32(0x8013F73Cu) != 0x3C018014u || r_u32(0x8013F740u) != 0xAC222A28u || r_u32(0x8013F744u) != 0x3C048014u || r_u32(0x8013F748u) != 0x8C842A28u || r_u32(0x8013F74Cu) != 0x0C050347u || r_u32(0x8013F750u) != 0x00000000u || r_u32(0x8013F754u) != 0x00402021u || r_u32(0x8013F758u) != 0x24020001u ||
                r_u32(0x8013F75Cu) != 0x2603FFF4u || r_u32(0x8013F760u) != 0x0804FDF9u || r_u32(0x8013F764u) != 0xAC640004u || r_u32(0x8013F768u) != 0x3C028014u || r_u32(0x8013F76Cu) != 0x8C422A24u || r_u32(0x8013F770u) != 0x00000000u || r_u32(0x8013F774u) != 0x24420001u || r_u32(0x8013F778u) != 0x3C018014u || r_u32(0x8013F77Cu) != 0xAC222A24u || r_u32(0x8013F780u) != 0x28420005u || r_u32(0x8013F784u) != 0x10400003u || r_u32(0x8013F788u) != 0x00000000u || r_u32(0x8013F78Cu) != 0x0804FDF8u || r_u32(0x8013F790u) != 0xAE110000u || r_u32(0x8013F794u) != 0x3C108014u || r_u32(0x8013F798u) != 0x26102A48u || r_u32(0x8013F79Cu) != 0x24020001u || r_u32(0x8013F7A0u) != 0x8E030000u || r_u32(0x8013F7A4u) != 0x3C048014u || r_u32(0x8013F7A8u) != 0x8C842A28u || r_u32(0x8013F7ACu) != 0x00621004u || r_u32(0x8013F7B0u) != 0x3C038014u || r_u32(0x8013F7B4u) != 0x8C632A38u || r_u32(0x8013F7B8u) != 0x00021027u || r_u32(0x8013F7BCu) != 0x00621824u || r_u32(0x8013F7C0u) != 0x3C018014u ||
                r_u32(0x8013F7C4u) != 0xAC232A38u || r_u32(0x8013F7C8u) != 0x0C050347u || r_u32(0x8013F7CCu) != 0x2610FFF4u || r_u32(0x8013F7D0u) != 0x00401821u || r_u32(0x8013F7D4u) != 0x24020001u || r_u32(0x8013F7D8u) != 0x0804FDF9u || r_u32(0x8013F7DCu) != 0xAE030004u || r_u32(0x8013F7E0u) != 0x00001021u || r_u32(0x8013F7E4u) != 0x8FBF0018u || r_u32(0x8013F7E8u) != 0x8FB10014u || r_u32(0x8013F7ECu) != 0x8FB00010u || r_u32(0x8013F7F0u) != 0x03E00008u || r_u32(0x8013F7F4u) != 0x27BD0020u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013F624((uint32)args[0]);
            return 1;
        case 0x8013F7F8u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8013F7F8u) != 0x27BDFFE8u || r_u32(0x8013F7FCu) != 0x3C038014u || r_u32(0x8013F800u) != 0x24632A3Cu || r_u32(0x8013F804u) != 0xAFBF0010u || r_u32(0x8013F808u) != 0x8C620000u || r_u32(0x8013F80Cu) != 0x00000000u || r_u32(0x8013F810u) != 0x1C40000Bu || r_u32(0x8013F814u) != 0x00802821u || r_u32(0x8013F818u) != 0x3C048014u || r_u32(0x8013F81Cu) != 0x2484F860u || r_u32(0x8013F820u) != 0x24020002u || r_u32(0x8013F824u) != 0xAC620000u || r_u32(0x8013F828u) != 0xAC600004u || r_u32(0x8013F82Cu) != 0xAC600008u || r_u32(0x8013F830u) != 0x0C0503B8u || r_u32(0x8013F834u) != 0xAC65000Cu || r_u32(0x8013F838u) != 0x0804FE14u || r_u32(0x8013F83Cu) != 0x24020001u || r_u32(0x8013F840u) != 0x3C048014u || r_u32(0x8013F844u) != 0x0C03B245u || r_u32(0x8013F848u) != 0x2484D690u || r_u32(0x8013F84Cu) != 0x00001021u || r_u32(0x8013F850u) != 0x8FBF0010u || r_u32(0x8013F854u) != 0x27BD0018u || r_u32(0x8013F858u) != 0x03E00008u || r_u32(0x8013F85Cu) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013F7F8((uint32)args[0]);
            return 1;
        case 0x8013F860u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8013F860u) != 0x27BDFFE0u || r_u32(0x8013F864u) != 0xAFB00010u || r_u32(0x8013F868u) != 0x00808021u || r_u32(0x8013F86Cu) != 0xAFBF0018u || r_u32(0x8013F870u) != 0xAFB10014u || r_u32(0x8013F874u) != 0x8E030000u || r_u32(0x8013F878u) != 0x00000000u || r_u32(0x8013F87Cu) != 0x2C620020u || r_u32(0x8013F880u) != 0x1040007Eu || r_u32(0x8013F884u) != 0x00031080u || r_u32(0x8013F888u) != 0x3C018014u || r_u32(0x8013F88Cu) != 0x00220821u || r_u32(0x8013F890u) != 0x8C22D6B8u || r_u32(0x8013F894u) != 0x00000000u || r_u32(0x8013F898u) != 0x00400008u || r_u32(0x8013F89Cu) != 0x00000000u || r_u32(0x8013F8A0u) != 0x3C048014u || r_u32(0x8013F8A4u) != 0x2484F624u || r_u32(0x8013F8A8u) != 0x3C018014u || r_u32(0x8013F8ACu) != 0xAC202A34u || r_u32(0x8013F8B0u) != 0x3C018014u || r_u32(0x8013F8B4u) != 0xAC202A30u || r_u32(0x8013F8B8u) != 0x3C018014u || r_u32(0x8013F8BCu) != 0x0C0503B8u || r_u32(0x8013F8C0u) != 0xAC202A2Cu || r_u32(0x8013F8C4u) != 0x2402000Au ||
                r_u32(0x8013F8C8u) != 0x0804FE9Fu || r_u32(0x8013F8CCu) != 0xAE020000u || r_u32(0x8013F8D0u) != 0x3C118014u || r_u32(0x8013F8D4u) != 0x26312A40u || r_u32(0x8013F8D8u) != 0x8E230000u || r_u32(0x8013F8DCu) != 0x00000000u || r_u32(0x8013F8E0u) != 0x10600052u || r_u32(0x8013F8E4u) != 0x24020003u || r_u32(0x8013F8E8u) != 0x14620065u || r_u32(0x8013F8ECu) != 0x24020001u || r_u32(0x8013F8F0u) != 0x8E240008u || r_u32(0x8013F8F4u) != 0x3C028014u || r_u32(0x8013F8F8u) != 0x8C422A38u || r_u32(0x8013F8FCu) != 0x24030001u || r_u32(0x8013F900u) != 0x3C018014u || r_u32(0x8013F904u) != 0xAC232A34u || r_u32(0x8013F908u) != 0x00831804u || r_u32(0x8013F90Cu) != 0x00431025u || r_u32(0x8013F910u) != 0x3C018014u || r_u32(0x8013F914u) != 0x0C0504D8u || r_u32(0x8013F918u) != 0xAC222A38u || r_u32(0x8013F91Cu) != 0x8E240008u || r_u32(0x8013F920u) != 0x0C0503A4u || r_u32(0x8013F924u) != 0x00000000u || r_u32(0x8013F928u) != 0x24020015u || r_u32(0x8013F92Cu) != 0x0804FE9Fu ||
                r_u32(0x8013F930u) != 0xAE020000u || r_u32(0x8013F934u) != 0x0C050595u || r_u32(0x8013F938u) != 0x00000000u || r_u32(0x8013F93Cu) != 0x10400050u || r_u32(0x8013F940u) != 0x00001021u || r_u32(0x8013F944u) != 0x0C050550u || r_u32(0x8013F948u) != 0x00000000u || r_u32(0x8013F94Cu) != 0x2402001Eu || r_u32(0x8013F950u) != 0xAE020000u || r_u32(0x8013F954u) != 0x0C0504D8u || r_u32(0x8013F958u) != 0x00000000u || r_u32(0x8013F95Cu) != 0x3C048014u || r_u32(0x8013F960u) != 0x8C842A48u || r_u32(0x8013F964u) != 0x0C050398u || r_u32(0x8013F968u) != 0x00000000u || r_u32(0x8013F96Cu) != 0x8E020000u || r_u32(0x8013F970u) != 0x00000000u || r_u32(0x8013F974u) != 0x24420001u || r_u32(0x8013F978u) != 0x0804FE9Fu || r_u32(0x8013F97Cu) != 0xAE020000u || r_u32(0x8013F980u) != 0x0C050586u || r_u32(0x8013F984u) != 0x00000000u || r_u32(0x8013F988u) != 0x1040003Du || r_u32(0x8013F98Cu) != 0x00001021u || r_u32(0x8013F990u) != 0x0C05051Au || r_u32(0x8013F994u) != 0x00000000u ||
                r_u32(0x8013F998u) != 0x00401821u || r_u32(0x8013F99Cu) != 0x3C018014u || r_u32(0x8013F9A0u) != 0xAC222A30u || r_u32(0x8013F9A4u) != 0x28620003u || r_u32(0x8013F9A8u) != 0x10400007u || r_u32(0x8013F9ACu) != 0x00000000u || r_u32(0x8013F9B0u) != 0x1C600015u || r_u32(0x8013F9B4u) != 0x00000000u || r_u32(0x8013F9B8u) != 0x10600008u || r_u32(0x8013F9BCu) != 0x00000000u || r_u32(0x8013F9C0u) != 0x0804FE8Eu || r_u32(0x8013F9C4u) != 0x00000000u || r_u32(0x8013F9C8u) != 0x24020004u || r_u32(0x8013F9CCu) != 0x1062000Eu || r_u32(0x8013F9D0u) != 0x00000000u || r_u32(0x8013F9D4u) != 0x0804FE8Eu || r_u32(0x8013F9D8u) != 0x00000000u || r_u32(0x8013F9DCu) != 0x3C028014u || r_u32(0x8013F9E0u) != 0x8C422A34u || r_u32(0x8013F9E4u) != 0x00000000u || r_u32(0x8013F9E8u) != 0x10400002u || r_u32(0x8013F9ECu) != 0x00001821u || r_u32(0x8013F9F0u) != 0x24030003u || r_u32(0x8013F9F4u) != 0x3C028014u || r_u32(0x8013F9F8u) != 0x24422A3Cu || r_u32(0x8013F9FCu) != 0xAC430004u ||
                r_u32(0x8013FA00u) != 0x0804FEA0u || r_u32(0x8013FA04u) != 0x24020001u || r_u32(0x8013FA08u) != 0x3C028014u || r_u32(0x8013FA0Cu) != 0x8C422A2Cu || r_u32(0x8013FA10u) != 0x00000000u || r_u32(0x8013FA14u) != 0x24420001u || r_u32(0x8013FA18u) != 0x3C018014u || r_u32(0x8013FA1Cu) != 0xAC222A2Cu || r_u32(0x8013FA20u) != 0x28420005u || r_u32(0x8013FA24u) != 0x10400004u || r_u32(0x8013FA28u) != 0x00000000u || r_u32(0x8013FA2Cu) != 0x2402001Eu || r_u32(0x8013FA30u) != 0x0804FE9Fu || r_u32(0x8013FA34u) != 0xAE020000u || r_u32(0x8013FA38u) != 0x3C048014u || r_u32(0x8013FA3Cu) != 0x8C842A30u || r_u32(0x8013FA40u) != 0x24020004u || r_u32(0x8013FA44u) != 0x14820006u || r_u32(0x8013FA48u) != 0x00000000u || r_u32(0x8013FA4Cu) != 0x3C028014u || r_u32(0x8013FA50u) != 0x24422A3Cu || r_u32(0x8013FA54u) != 0xAC440004u || r_u32(0x8013FA58u) != 0x0804FEA0u || r_u32(0x8013FA5Cu) != 0x24020001u || r_u32(0x8013FA60u) != 0x0C050347u || r_u32(0x8013FA64u) != 0x00000000u ||
                r_u32(0x8013FA68u) != 0x3C038014u || r_u32(0x8013FA6Cu) != 0x24632A3Cu || r_u32(0x8013FA70u) != 0xAC620004u || r_u32(0x8013FA74u) != 0x0804FEA0u || r_u32(0x8013FA78u) != 0x24020001u || r_u32(0x8013FA7Cu) != 0x00001021u || r_u32(0x8013FA80u) != 0x8FBF0018u || r_u32(0x8013FA84u) != 0x8FB10014u || r_u32(0x8013FA88u) != 0x8FB00010u || r_u32(0x8013FA8Cu) != 0x03E00008u || r_u32(0x8013FA90u) != 0x27BD0020u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_8013F860((uint32)args[0]);
            return 1;
        case 0x801406FCu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            if (r_u32(0x801406FCu) != 0x3C038014u || r_u32(0x80140700u) != 0x24632A3Cu || r_u32(0x80140704u) != 0x8C620000u)
                sf_callback_image_error(target, "MOVIE.EXTRA.OVL");
            *result = (uint32)sub_801406FC((sint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x80140D1Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x80140D1Cu) != 0x24020001u || r_u32(0x80140D20u) != 0x10820010u || r_u32(0x80140D24u) != 0x00001821u || r_u32(0x80140D28u) != 0x28820002u || r_u32(0x80140D2Cu) != 0x10400005u || r_u32(0x80140D30u) != 0x00000000u || r_u32(0x80140D34u) != 0x1080000Cu || r_u32(0x80140D38u) != 0x00000000u || r_u32(0x80140D3Cu) != 0x0805035Au || r_u32(0x80140D40u) != 0x34838000u || r_u32(0x80140D44u) != 0x24020002u || r_u32(0x80140D48u) != 0x10820007u || r_u32(0x80140D4Cu) != 0x24030001u || r_u32(0x80140D50u) != 0x24020004u || r_u32(0x80140D54u) != 0x14820004u || r_u32(0x80140D58u) != 0x34838000u || r_u32(0x80140D5Cu) != 0x0805035Au || r_u32(0x80140D60u) != 0x24030003u || r_u32(0x80140D64u) != 0x24030002u || r_u32(0x80140D68u) != 0x03E00008u || r_u32(0x80140D6Cu) != 0x00601021u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_80140D1C((sint32)args[0]);
            return 1;
        case 0x80140D70u:
            if (r_u32(0x80140D70u) != 0x27BDFFE8u || r_u32(0x80140D74u) != 0xAFBF0010u || r_u32(0x80140D78u) != 0x0C0503F2u || r_u32(0x80140D7Cu) != 0x00000000u || r_u32(0x80140D80u) != 0x14400018u || r_u32(0x80140D84u) != 0x00000000u || r_u32(0x80140D88u) != 0x0C0503D7u || r_u32(0x80140D8Cu) != 0x00000000u || r_u32(0x80140D90u) != 0x0C0503F2u || r_u32(0x80140D94u) != 0x00000000u || r_u32(0x80140D98u) != 0x10400012u || r_u32(0x80140D9Cu) != 0x24020001u || r_u32(0x80140DA0u) != 0x3C038014u || r_u32(0x80140DA4u) != 0x24632A3Cu || r_u32(0x80140DA8u) != 0xAC620008u || r_u32(0x80140DACu) != 0x8C620000u || r_u32(0x80140DB0u) != 0x3C058014u || r_u32(0x80140DB4u) != 0x24A52A84u || r_u32(0x80140DB8u) != 0xACA20000u || r_u32(0x80140DBCu) != 0x8C620004u || r_u32(0x80140DC0u) != 0x8C660040u || r_u32(0x80140DC4u) != 0xACA20004u || r_u32(0x80140DC8u) != 0xAC600000u || r_u32(0x80140DCCu) != 0x10C00005u || r_u32(0x80140DD0u) != 0xAC600004u || r_u32(0x80140DD4u) != 0x8CA40000u ||
                r_u32(0x80140DD8u) != 0x8CA50004u || r_u32(0x80140DDCu) != 0x00C0F809u || r_u32(0x80140DE0u) != 0x00000000u || r_u32(0x80140DE4u) != 0x8FBF0010u || r_u32(0x80140DE8u) != 0x27BD0018u || r_u32(0x80140DECu) != 0x03E00008u || r_u32(0x80140DF0u) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            sub_80140D70();
            *result = 0;
            return 1;
        case 0x80140E50u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x80140E50u) != 0x240A00A0u || r_u32(0x80140E54u) != 0x01400008u || r_u32(0x80140E58u) != 0x240900ABu || r_u32(0x80140E5Cu) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_80140E50((sint32)args[0]);
            return 1;
        case 0x80140ED0u:
            if (r_u32(0x80140ED0u) != 0x2402FFFFu || r_u32(0x80140ED4u) != 0x3C018014u || r_u32(0x80140ED8u) != 0x03E00008u || r_u32(0x80140EDCu) != 0xAC2229ECu)
                sf_callback_image_error(target, "MOVIE.OVL");
            sub_80140ED0();
            *result = 0;
            return 1;
        case 0x80140EE0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x80140EE0u) != 0x3C028014u || r_u32(0x80140EE4u) != 0x8C4229ECu || r_u32(0x80140EE8u) != 0x27BDFFE8u || r_u32(0x80140EECu) != 0x24460001u || r_u32(0x80140EF0u) != 0x28C20004u || r_u32(0x80140EF4u) != 0x14400006u || r_u32(0x80140EF8u) != 0xAFBF0010u || r_u32(0x80140EFCu) != 0x3C048014u || r_u32(0x80140F00u) != 0x0C03B245u || r_u32(0x80140F04u) != 0x2484D810u || r_u32(0x80140F08u) != 0x080503D3u || r_u32(0x80140F0Cu) != 0x00000000u || r_u32(0x80140F10u) != 0x24050003u || r_u32(0x80140F14u) != 0x00061100u || r_u32(0x80140F18u) != 0x3C038014u || r_u32(0x80140F1Cu) != 0x24632AA0u || r_u32(0x80140F20u) != 0x00431821u || r_u32(0x80140F24u) != 0x00061080u || r_u32(0x80140F28u) != 0x3C018014u || r_u32(0x80140F2Cu) != 0xAC2629ECu || r_u32(0x80140F30u) != 0x3C018014u || r_u32(0x80140F34u) != 0x00220821u || r_u32(0x80140F38u) != 0xAC242AD4u || r_u32(0x80140F3Cu) != 0xAC600000u || r_u32(0x80140F40u) != 0x24A5FFFFu || r_u32(0x80140F44u) != 0x04A1FFFDu ||
                r_u32(0x80140F48u) != 0x2463FFFCu || r_u32(0x80140F4Cu) != 0x8FBF0010u || r_u32(0x80140F50u) != 0x27BD0018u || r_u32(0x80140F54u) != 0x03E00008u || r_u32(0x80140F58u) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            sub_80140EE0((uint32)args[0]);
            *result = 0;
            return 1;
        case 0x80140F5Cu:
            if (r_u32(0x80140F5Cu) != 0x3C038014u || r_u32(0x80140F60u) != 0x8C6329ECu || r_u32(0x80140F64u) != 0x27BDFFE8u || r_u32(0x80140F68u) != 0x04600013u || r_u32(0x80140F6Cu) != 0xAFBF0010u || r_u32(0x80140F70u) != 0x00031080u || r_u32(0x80140F74u) != 0x00031900u || r_u32(0x80140F78u) != 0x3C048014u || r_u32(0x80140F7Cu) != 0x24842A94u || r_u32(0x80140F80u) != 0x3C018014u || r_u32(0x80140F84u) != 0x00220821u || r_u32(0x80140F88u) != 0x8C222AD4u || r_u32(0x80140F8Cu) != 0x00000000u || r_u32(0x80140F90u) != 0x0040F809u || r_u32(0x80140F94u) != 0x00642021u || r_u32(0x80140F98u) != 0x10400007u || r_u32(0x80140F9Cu) != 0x00000000u || r_u32(0x80140FA0u) != 0x3C028014u || r_u32(0x80140FA4u) != 0x8C4229ECu || r_u32(0x80140FA8u) != 0x00000000u || r_u32(0x80140FACu) != 0x2442FFFFu || r_u32(0x80140FB0u) != 0x3C018014u || r_u32(0x80140FB4u) != 0xAC2229ECu || r_u32(0x80140FB8u) != 0x8FBF0010u || r_u32(0x80140FBCu) != 0x27BD0018u || r_u32(0x80140FC0u) != 0x03E00008u ||
                r_u32(0x80140FC4u) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            sub_80140F5C();
            *result = 0;
            return 1;
        case 0x80140FC8u:
            if (r_u32(0x80140FC8u) != 0x3C028014u || r_u32(0x80140FCCu) != 0x8C4229ECu || r_u32(0x80140FD0u) != 0x03E00008u || r_u32(0x80140FD4u) != 0x000217C2u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_80140FC8();
            return 1;
        case 0x80140FF4u:
            if (r_u32(0x80140FF4u) != 0x24020001u || r_u32(0x80140FF8u) != 0x3C018014u || r_u32(0x80140FFCu) != 0xAC222B08u || r_u32(0x80141000u) != 0x03E00008u || r_u32(0x80141004u) != 0x00001021u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_80140FF4();
            return 1;
        case 0x80141044u:
            if (r_u32(0x80141044u) != 0x24020001u || r_u32(0x80141048u) != 0x3C018014u || r_u32(0x8014104Cu) != 0xAC222B18u || r_u32(0x80141050u) != 0x03E00008u || r_u32(0x80141054u) != 0x00001021u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_80141044();
            return 1;
        case 0x801410B0u:
            if (r_u32(0x801410B0u) != 0x27BDFFE8u || r_u32(0x801410B4u) != 0xAFBF0014u || r_u32(0x801410B8u) != 0x0C038FCDu || r_u32(0x801410BCu) != 0xAFB00010u || r_u32(0x801410C0u) != 0x3C04F400u || r_u32(0x801410C4u) != 0x34840001u || r_u32(0x801410C8u) != 0x24050004u || r_u32(0x801410CCu) != 0x24061000u || r_u32(0x801410D0u) != 0x3C078014u || r_u32(0x801410D4u) != 0x24E70FE0u || r_u32(0x801410D8u) != 0x0C03C91Du || r_u32(0x801410DCu) != 0x00408021u || r_u32(0x801410E0u) != 0x3C04F400u || r_u32(0x801410E4u) != 0x34840001u || r_u32(0x801410E8u) != 0x34058000u || r_u32(0x801410ECu) != 0x3C078014u || r_u32(0x801410F0u) != 0x24E70FF4u || r_u32(0x801410F4u) != 0x3C018014u || r_u32(0x801410F8u) != 0xAC222AE4u || r_u32(0x801410FCu) != 0x0C03C91Du || r_u32(0x80141100u) != 0x24061000u || r_u32(0x80141104u) != 0x3C04F400u || r_u32(0x80141108u) != 0x34840001u || r_u32(0x8014110Cu) != 0x24050100u || r_u32(0x80141110u) != 0x3C078014u || r_u32(0x80141114u) != 0x24E71008u ||
                r_u32(0x80141118u) != 0x3C018014u || r_u32(0x8014111Cu) != 0xAC222AE8u || r_u32(0x80141120u) != 0x0C03C91Du || r_u32(0x80141124u) != 0x24061000u || r_u32(0x80141128u) != 0x3C04F400u || r_u32(0x8014112Cu) != 0x34840001u || r_u32(0x80141130u) != 0x24052000u || r_u32(0x80141134u) != 0x3C078014u || r_u32(0x80141138u) != 0x24E7101Cu || r_u32(0x8014113Cu) != 0x3C018014u || r_u32(0x80141140u) != 0xAC222AECu || r_u32(0x80141144u) != 0x0C03C91Du || r_u32(0x80141148u) != 0x24061000u || r_u32(0x8014114Cu) != 0x3C04F000u || r_u32(0x80141150u) != 0x34840011u || r_u32(0x80141154u) != 0x24050004u || r_u32(0x80141158u) != 0x3C078014u || r_u32(0x8014115Cu) != 0x24E71030u || r_u32(0x80141160u) != 0x3C018014u || r_u32(0x80141164u) != 0xAC222AF0u || r_u32(0x80141168u) != 0x0C03C91Du || r_u32(0x8014116Cu) != 0x24061000u || r_u32(0x80141170u) != 0x3C04F000u || r_u32(0x80141174u) != 0x34840011u || r_u32(0x80141178u) != 0x34058000u || r_u32(0x8014117Cu) != 0x3C078014u ||
                r_u32(0x80141180u) != 0x24E71044u || r_u32(0x80141184u) != 0x3C018014u || r_u32(0x80141188u) != 0xAC222AF4u || r_u32(0x8014118Cu) != 0x0C03C91Du || r_u32(0x80141190u) != 0x24061000u || r_u32(0x80141194u) != 0x3C04F000u || r_u32(0x80141198u) != 0x34840011u || r_u32(0x8014119Cu) != 0x24050100u || r_u32(0x801411A0u) != 0x3C078014u || r_u32(0x801411A4u) != 0x24E71058u || r_u32(0x801411A8u) != 0x3C018014u || r_u32(0x801411ACu) != 0xAC222AF8u || r_u32(0x801411B0u) != 0x0C03C91Du || r_u32(0x801411B4u) != 0x24061000u || r_u32(0x801411B8u) != 0x3C04F000u || r_u32(0x801411BCu) != 0x34840011u || r_u32(0x801411C0u) != 0x24052000u || r_u32(0x801411C4u) != 0x3C078014u || r_u32(0x801411C8u) != 0x24E7106Cu || r_u32(0x801411CCu) != 0x3C018014u || r_u32(0x801411D0u) != 0xAC222AFCu || r_u32(0x801411D4u) != 0x0C03C91Du || r_u32(0x801411D8u) != 0x24061000u || r_u32(0x801411DCu) != 0x3C048014u || r_u32(0x801411E0u) != 0x8C842AE4u || r_u32(0x801411E4u) != 0x3C018014u ||
                r_u32(0x801411E8u) != 0x0C03C921u || r_u32(0x801411ECu) != 0xAC222B00u || r_u32(0x801411F0u) != 0x3C048014u || r_u32(0x801411F4u) != 0x8C842AE8u || r_u32(0x801411F8u) != 0x0C03C921u || r_u32(0x801411FCu) != 0x00000000u || r_u32(0x80141200u) != 0x3C048014u || r_u32(0x80141204u) != 0x8C842AECu || r_u32(0x80141208u) != 0x0C03C921u || r_u32(0x8014120Cu) != 0x00000000u || r_u32(0x80141210u) != 0x3C048014u || r_u32(0x80141214u) != 0x8C842AF0u || r_u32(0x80141218u) != 0x0C03C921u || r_u32(0x8014121Cu) != 0x00000000u || r_u32(0x80141220u) != 0x3C048014u || r_u32(0x80141224u) != 0x8C842AF4u || r_u32(0x80141228u) != 0x0C03C921u || r_u32(0x8014122Cu) != 0x00000000u || r_u32(0x80141230u) != 0x3C048014u || r_u32(0x80141234u) != 0x8C842AF8u || r_u32(0x80141238u) != 0x0C03C921u || r_u32(0x8014123Cu) != 0x00000000u || r_u32(0x80141240u) != 0x3C048014u || r_u32(0x80141244u) != 0x8C842AFCu || r_u32(0x80141248u) != 0x0C03C921u || r_u32(0x8014124Cu) != 0x00000000u ||
                r_u32(0x80141250u) != 0x3C048014u || r_u32(0x80141254u) != 0x8C842B00u || r_u32(0x80141258u) != 0x0C03C921u || r_u32(0x8014125Cu) != 0x00000000u || r_u32(0x80141260u) != 0x0C0504D8u || r_u32(0x80141264u) != 0x00000000u || r_u32(0x80141268u) != 0x24020001u || r_u32(0x8014126Cu) != 0x16020003u || r_u32(0x80141270u) != 0x00000000u || r_u32(0x80141274u) != 0x0C038FD1u || r_u32(0x80141278u) != 0x00000000u || r_u32(0x8014127Cu) != 0x8FBF0014u || r_u32(0x80141280u) != 0x8FB00010u || r_u32(0x80141284u) != 0x03E00008u || r_u32(0x80141288u) != 0x27BD0018u)
                sf_callback_image_error(target, "MOVIE.OVL");
            sub_801410B0();
            *result = 0;
            return 1;
        case 0x801412ACu:
            if (r_u32(0x801412ACu) != 0x27BDFFE8u || r_u32(0x801412B0u) != 0xAFBF0014u || r_u32(0x801412B4u) != 0x0C038FCDu || r_u32(0x801412B8u) != 0xAFB00010u || r_u32(0x801412BCu) != 0x3C048014u || r_u32(0x801412C0u) != 0x8C842AE4u || r_u32(0x801412C4u) != 0x0C03D68Du || r_u32(0x801412C8u) != 0x00408021u || r_u32(0x801412CCu) != 0x3C048014u || r_u32(0x801412D0u) != 0x8C842AE8u || r_u32(0x801412D4u) != 0x0C03D68Du || r_u32(0x801412D8u) != 0x00000000u || r_u32(0x801412DCu) != 0x3C048014u || r_u32(0x801412E0u) != 0x8C842AECu || r_u32(0x801412E4u) != 0x0C03D68Du || r_u32(0x801412E8u) != 0x00000000u || r_u32(0x801412ECu) != 0x3C048014u || r_u32(0x801412F0u) != 0x8C842AF0u || r_u32(0x801412F4u) != 0x0C03D68Du || r_u32(0x801412F8u) != 0x00000000u || r_u32(0x801412FCu) != 0x3C048014u || r_u32(0x80141300u) != 0x8C842AF4u || r_u32(0x80141304u) != 0x0C03D68Du || r_u32(0x80141308u) != 0x00000000u || r_u32(0x8014130Cu) != 0x3C048014u || r_u32(0x80141310u) != 0x8C842AF8u ||
                r_u32(0x80141314u) != 0x0C03D68Du || r_u32(0x80141318u) != 0x00000000u || r_u32(0x8014131Cu) != 0x3C048014u || r_u32(0x80141320u) != 0x8C842AFCu || r_u32(0x80141324u) != 0x0C03D68Du || r_u32(0x80141328u) != 0x00000000u || r_u32(0x8014132Cu) != 0x3C048014u || r_u32(0x80141330u) != 0x8C842B00u || r_u32(0x80141334u) != 0x0C03D68Du || r_u32(0x80141338u) != 0x00000000u || r_u32(0x8014133Cu) != 0x24020001u || r_u32(0x80141340u) != 0x16020003u || r_u32(0x80141344u) != 0x00000000u || r_u32(0x80141348u) != 0x0C038FD1u || r_u32(0x8014134Cu) != 0x00000000u || r_u32(0x80141350u) != 0x8FBF0014u || r_u32(0x80141354u) != 0x8FB00010u || r_u32(0x80141358u) != 0x03E00008u || r_u32(0x8014135Cu) != 0x27BD0018u)
                sf_callback_image_error(target, "MOVIE.OVL");
            sub_801412AC();
            *result = 0;
            return 1;
        case 0x80141360u:
            if (r_u32(0x80141360u) != 0x3C048014u || r_u32(0x80141364u) != 0x8C842AE4u || r_u32(0x80141368u) != 0x27BDFFE8u || r_u32(0x8014136Cu) != 0xAFBF0010u || r_u32(0x80141370u) != 0x0C03FA25u || r_u32(0x80141374u) != 0x00000000u || r_u32(0x80141378u) != 0x3C048014u || r_u32(0x8014137Cu) != 0x8C842AE8u || r_u32(0x80141380u) != 0x0C03FA25u || r_u32(0x80141384u) != 0x00000000u || r_u32(0x80141388u) != 0x3C048014u || r_u32(0x8014138Cu) != 0x8C842AECu || r_u32(0x80141390u) != 0x0C03FA25u || r_u32(0x80141394u) != 0x00000000u || r_u32(0x80141398u) != 0x3C048014u || r_u32(0x8014139Cu) != 0x8C842AF0u || r_u32(0x801413A0u) != 0x0C03FA25u || r_u32(0x801413A4u) != 0x00000000u || r_u32(0x801413A8u) != 0x3C048014u || r_u32(0x801413ACu) != 0x8C842AF4u || r_u32(0x801413B0u) != 0x0C03FA25u || r_u32(0x801413B4u) != 0x00000000u || r_u32(0x801413B8u) != 0x3C048014u || r_u32(0x801413BCu) != 0x8C842AF8u || r_u32(0x801413C0u) != 0x0C03FA25u || r_u32(0x801413C4u) != 0x00000000u ||
                r_u32(0x801413C8u) != 0x3C048014u || r_u32(0x801413CCu) != 0x8C842AFCu || r_u32(0x801413D0u) != 0x0C03FA25u || r_u32(0x801413D4u) != 0x00000000u || r_u32(0x801413D8u) != 0x3C048014u || r_u32(0x801413DCu) != 0x8C842B00u || r_u32(0x801413E0u) != 0x0C03FA25u || r_u32(0x801413E4u) != 0x00000000u || r_u32(0x801413E8u) != 0x3C018014u || r_u32(0x801413ECu) != 0xAC202B10u || r_u32(0x801413F0u) != 0x3C028014u || r_u32(0x801413F4u) != 0x8C422B10u || r_u32(0x801413F8u) != 0x3C018014u || r_u32(0x801413FCu) != 0xAC222B0Cu || r_u32(0x80141400u) != 0x3C028014u || r_u32(0x80141404u) != 0x8C422B0Cu || r_u32(0x80141408u) != 0x3C018014u || r_u32(0x8014140Cu) != 0xAC222B08u || r_u32(0x80141410u) != 0x3C028014u || r_u32(0x80141414u) != 0x8C422B08u || r_u32(0x80141418u) != 0x3C018014u || r_u32(0x8014141Cu) != 0xAC222B04u || r_u32(0x80141420u) != 0x3C018014u || r_u32(0x80141424u) != 0xAC202B20u || r_u32(0x80141428u) != 0x3C028014u || r_u32(0x8014142Cu) != 0x8C422B20u ||
                r_u32(0x80141430u) != 0x3C018014u || r_u32(0x80141434u) != 0xAC222B1Cu || r_u32(0x80141438u) != 0x3C028014u || r_u32(0x8014143Cu) != 0x8C422B1Cu || r_u32(0x80141440u) != 0x3C018014u || r_u32(0x80141444u) != 0xAC222B18u || r_u32(0x80141448u) != 0x3C028014u || r_u32(0x8014144Cu) != 0x8C422B18u || r_u32(0x80141450u) != 0x3C018014u || r_u32(0x80141454u) != 0xAC222B14u || r_u32(0x80141458u) != 0x8FBF0010u || r_u32(0x8014145Cu) != 0x27BD0018u || r_u32(0x80141460u) != 0x03E00008u || r_u32(0x80141464u) != 0x00000000u)
                sf_callback_image_error(target, "MOVIE.OVL");
            sub_80141360();
            *result = 0;
            return 1;
        case 0x80141468u:
            if (r_u32(0x80141468u) != 0x27BDFFE8u || r_u32(0x8014146Cu) != 0xAFBF0014u || r_u32(0x80141470u) != 0xAFB00010u || r_u32(0x80141474u) != 0x3C028014u || r_u32(0x80141478u) != 0x8C422B08u || r_u32(0x8014147Cu) != 0x3C048014u || r_u32(0x80141480u) != 0x8C842B04u || r_u32(0x80141484u) != 0x3C038014u || r_u32(0x80141488u) != 0x8C632B0Cu || r_u32(0x8014148Cu) != 0x00021040u || r_u32(0x80141490u) != 0x00822021u || r_u32(0x80141494u) != 0x00031880u || r_u32(0x80141498u) != 0x3C028014u || r_u32(0x8014149Cu) != 0x8C422B10u || r_u32(0x801414A0u) != 0x00832021u || r_u32(0x801414A4u) != 0x000210C0u || r_u32(0x801414A8u) != 0x00828021u || r_u32(0x801414ACu) != 0x1200FFF1u || r_u32(0x801414B0u) != 0x00000000u || r_u32(0x801414B4u) != 0x3C048014u || r_u32(0x801414B8u) != 0x8C842AF4u || r_u32(0x801414BCu) != 0x0C03FA25u || r_u32(0x801414C0u) != 0x00000000u || r_u32(0x801414C4u) != 0x3C048014u || r_u32(0x801414C8u) != 0x8C842AF8u || r_u32(0x801414CCu) != 0x0C03FA25u ||
                r_u32(0x801414D0u) != 0x00000000u || r_u32(0x801414D4u) != 0x3C048014u || r_u32(0x801414D8u) != 0x8C842AFCu || r_u32(0x801414DCu) != 0x0C03FA25u || r_u32(0x801414E0u) != 0x00000000u || r_u32(0x801414E4u) != 0x3C048014u || r_u32(0x801414E8u) != 0x8C842B00u || r_u32(0x801414ECu) != 0x0C03FA25u || r_u32(0x801414F0u) != 0x00000000u || r_u32(0x801414F4u) != 0x3C018014u || r_u32(0x801414F8u) != 0xAC202B10u || r_u32(0x801414FCu) != 0x3C028014u || r_u32(0x80141500u) != 0x8C422B10u || r_u32(0x80141504u) != 0x3C018014u || r_u32(0x80141508u) != 0xAC222B0Cu || r_u32(0x8014150Cu) != 0x3C028014u || r_u32(0x80141510u) != 0x8C422B0Cu || r_u32(0x80141514u) != 0x3C018014u || r_u32(0x80141518u) != 0xAC222B08u || r_u32(0x8014151Cu) != 0x3C038014u || r_u32(0x80141520u) != 0x8C632B08u || r_u32(0x80141524u) != 0x00101043u || r_u32(0x80141528u) != 0x3C018014u || r_u32(0x8014152Cu) != 0xAC232B04u || r_u32(0x80141530u) != 0x8FBF0014u || r_u32(0x80141534u) != 0x8FB00010u ||
                r_u32(0x80141538u) != 0x03E00008u || r_u32(0x8014153Cu) != 0x27BD0018u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_80141468();
            return 1;
        case 0x80141618u:
            if (r_u32(0x80141618u) != 0x3C028014u || r_u32(0x8014161Cu) != 0x8C422B08u || r_u32(0x80141620u) != 0x3C048014u || r_u32(0x80141624u) != 0x8C842B04u || r_u32(0x80141628u) != 0x3C038014u || r_u32(0x8014162Cu) != 0x8C632B0Cu || r_u32(0x80141630u) != 0x00021040u || r_u32(0x80141634u) != 0x00822021u || r_u32(0x80141638u) != 0x00031880u || r_u32(0x8014163Cu) != 0x3C028014u || r_u32(0x80141640u) != 0x8C422B10u || r_u32(0x80141644u) != 0x00832021u || r_u32(0x80141648u) != 0x000210C0u || r_u32(0x8014164Cu) != 0x03E00008u || r_u32(0x80141650u) != 0x00821021u)
                sf_callback_image_error(target, "MOVIE.OVL");
            *result = (uint32)sub_80141618();
            return 1;
        case 0x80147138u:
            if (r_u32(0x80147138u) != 0x27BDFFE8u || r_u32(0x8014713Cu) != 0xAFBF0010u || r_u32(0x80147140u) != 0x00002021u)
                sf_callback_image_error(target, "PARK.OVL");
            sub_80147138();
            *result = 0;
            return 1;
        case 0x801473A4u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            if (r_u32(0x801473A4u) != 0x3C028015u || r_u32(0x801473A8u) != 0x2442B248u || r_u32(0x801473ACu) != 0x00042180u || r_u32(0x801473B0u) != 0x3084FFFFu || r_u32(0x801473B4u) != 0x00052D80u || r_u32(0x801473B8u) != 0x00852025u || r_u32(0x801473BCu) != 0x00063180u || r_u32(0x801473C0u) != 0x30C6FFFFu || r_u32(0x801473C4u) != 0x00073D80u || r_u32(0x801473C8u) != 0xAC440000u || r_u32(0x801473CCu) != 0x84430000u || r_u32(0x801473D0u) != 0x3C028015u || r_u32(0x801473D4u) != 0x8442B240u || r_u32(0x801473D8u) != 0x00C73025u || r_u32(0x801473DCu) != 0x3C018015u || r_u32(0x801473E0u) != 0xAC26B24Cu || r_u32(0x801473E4u) != 0x00621023u || r_u32(0x801473E8u) != 0x04410002u || r_u32(0x801473ECu) != 0x00000000u || r_u32(0x801473F0u) != 0x24420007u || r_u32(0x801473F4u) != 0x3C048015u || r_u32(0x801473F8u) != 0x8484B24Au || r_u32(0x801473FCu) != 0x3C038015u || r_u32(0x80147400u) != 0x8463B242u || r_u32(0x80147404u) != 0x000210C3u || r_u32(0x80147408u) != 0x3C018015u ||
                r_u32(0x8014740Cu) != 0xA422B250u || r_u32(0x80147410u) != 0x00831023u || r_u32(0x80147414u) != 0x04410002u || r_u32(0x80147418u) != 0x00000000u || r_u32(0x8014741Cu) != 0x24420007u || r_u32(0x80147420u) != 0x3C048015u || r_u32(0x80147424u) != 0x8484B24Cu || r_u32(0x80147428u) != 0x3C038015u || r_u32(0x8014742Cu) != 0x8463B244u || r_u32(0x80147430u) != 0x000210C3u || r_u32(0x80147434u) != 0x3C018015u || r_u32(0x80147438u) != 0xA422B252u || r_u32(0x8014743Cu) != 0x00831023u || r_u32(0x80147440u) != 0x04410002u || r_u32(0x80147444u) != 0x00000000u || r_u32(0x80147448u) != 0x24420007u || r_u32(0x8014744Cu) != 0x3C048015u || r_u32(0x80147450u) != 0x8484B24Eu || r_u32(0x80147454u) != 0x3C038015u || r_u32(0x80147458u) != 0x8463B246u || r_u32(0x8014745Cu) != 0x000210C3u || r_u32(0x80147460u) != 0x3C018015u || r_u32(0x80147464u) != 0xA422B254u || r_u32(0x80147468u) != 0x00831023u || r_u32(0x8014746Cu) != 0x04410002u || r_u32(0x80147470u) != 0x00000000u ||
                r_u32(0x80147474u) != 0x24420007u || r_u32(0x80147478u) != 0x000210C3u || r_u32(0x8014747Cu) != 0x3C018015u || r_u32(0x80147480u) != 0xA422B256u || r_u32(0x80147484u) != 0x03E00008u || r_u32(0x80147488u) != 0x00000000u)
                sf_callback_image_error(target, "TITLE.OVL");
            sub_801473A4((sint32)args[0], (sint32)args[1], (sint32)args[2], (sint32)args[3]);
            *result = 0;
            return 1;
        case 0x8014F444u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8014F444u) != 0x27BDFFE0u || r_u32(0x8014F448u) != 0xAFB00010u || r_u32(0x8014F44Cu) != 0x00808021u)
                sf_callback_image_error(target, "INIT.OVL");
            sub_8014F444(args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x80150C64u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x80150C64u) != 0x27BDFFD8u || r_u32(0x80150C68u) != 0xAFB1001Cu || r_u32(0x80150C6Cu) != 0x00808821u)
                sf_callback_image_error(target, "INIT.OVL");
            sub_80150C64(args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x801469E8u:
            if (r_u32(0x801469E8u) != 0x3C028015u || r_u32(0x801469ECu) != 0x90429E04u || r_u32(0x801469F0u) != 0x3C058015u)
                sf_callback_image_error(target, "PARK.OVL");
            *result = (uint32)sub_801469E8();
            return 1;
        case 0x801476D4u:
            if (r_u32(0x801476D4u) != 0x27BDFFC8u || r_u32(0x801476D8u) != 0x3C048015u || r_u32(0x801476DCu) != 0x24849D48u)
                sf_callback_image_error(target, "PARK.OVL");
            sub_801476D4();
            *result = 0;
            return 1;
        case 0x8014775Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8014775Cu) != 0x3C028015u || r_u32(0x80147760u) != 0x8C42A8ECu || r_u32(0x80147764u) != 0x27BDFFE8u)
                sf_callback_image_error(target, "TITLE.DEP.OVL");
            *result = (uint32)sub_8014775C((uint32)args[0]);
            return 1;
        case 0x80147924u:
            if (r_u32(0x80147924u) != 0x27BDFFE0u || r_u32(0x80147928u) != 0xAFBF001Cu || r_u32(0x8014792Cu) != 0x0C00EC0Cu)
                sf_callback_image_error(target, "TITLE.DEP.OVL");
            *result = (uint32)sub_80147924();
            return 1;
        case 0x80147A70u:
            if (r_u32(0x80147A70u) != 0x27BDFFE8u || r_u32(0x80147A74u) != 0xAFBF0010u || r_u32(0x80147A78u) != 0x0C04FD5Fu || r_u32(0x80147A7Cu) != 0x00000000u || r_u32(0x80147A80u) != 0x3C058015u || r_u32(0x80147A84u) != 0x24A5B064u || r_u32(0x80147A88u) != 0x3C048011u || r_u32(0x80147A8Cu) != 0x8C846964u || r_u32(0x80147A90u) != 0x24020008u || r_u32(0x80147A94u) != 0x3C018015u || r_u32(0x80147A98u) != 0xAC22A818u || r_u32(0x80147A9Cu) != 0x0C031EFEu || r_u32(0x80147AA0u) != 0x00000000u || r_u32(0x80147AA4u) != 0x0C011212u || r_u32(0x80147AA8u) != 0x00002021u || r_u32(0x80147AACu) != 0x3C048015u || r_u32(0x80147AB0u) != 0x9084A810u || r_u32(0x80147AB4u) != 0x0C02130Cu || r_u32(0x80147AB8u) != 0x00000000u || r_u32(0x80147ABCu) != 0x3C048015u || r_u32(0x80147AC0u) != 0x9084A811u || r_u32(0x80147AC4u) != 0x0C02130Cu || r_u32(0x80147AC8u) != 0x00000000u || r_u32(0x80147ACCu) != 0x0C032C7Fu || r_u32(0x80147AD0u) != 0x00000000u || r_u32(0x80147AD4u) != 0x3C058015u ||
                r_u32(0x80147AD8u) != 0x24A5B5A8u || r_u32(0x80147ADCu) != 0x8CA20000u || r_u32(0x80147AE0u) != 0x00000000u || r_u32(0x80147AE4u) != 0x10400005u || r_u32(0x80147AE8u) != 0x00000000u || r_u32(0x80147AECu) != 0x3C048011u || r_u32(0x80147AF0u) != 0x8C846998u || r_u32(0x80147AF4u) != 0x0C031EFEu || r_u32(0x80147AF8u) != 0x00000000u || r_u32(0x80147AFCu) != 0x8FBF0010u || r_u32(0x80147B00u) != 0x27BD0018u || r_u32(0x80147B04u) != 0x03E00008u || r_u32(0x80147B08u) != 0x00000000u)
                sf_callback_image_error(target, "TITLE.OVL");
            sub_80147A70();
            *result = 0;
            return 1;
        case 0x80147B0Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x80147B0Cu) != 0x27BDFFE8u || r_u32(0x80147B10u) != 0x3C028015u || r_u32(0x80147B14u) != 0x9442A816u || r_u32(0x80147B18u) != 0xAFBF0010u || r_u32(0x80147B1Cu) != 0x24420001u || r_u32(0x80147B20u) != 0x3C018015u || r_u32(0x80147B24u) != 0xA422A816u || r_u32(0x80147B28u) != 0x00021400u || r_u32(0x80147B2Cu) != 0x00021403u || r_u32(0x80147B30u) != 0x2842000Au || r_u32(0x80147B34u) != 0x14400003u || r_u32(0x80147B38u) != 0x00802821u || r_u32(0x80147B3Cu) != 0x3C018015u || r_u32(0x80147B40u) != 0xA420A816u || r_u32(0x80147B44u) != 0x3C028015u || r_u32(0x80147B48u) != 0x8442A816u || r_u32(0x80147B4Cu) != 0x3C048015u || r_u32(0x80147B50u) != 0x8484A814u || r_u32(0x80147B54u) != 0x00021880u || r_u32(0x80147B58u) != 0x3C018015u || r_u32(0x80147B5Cu) != 0x00230821u || r_u32(0x80147B60u) != 0xAC25A928u || r_u32(0x80147B64u) != 0x14440006u || r_u32(0x80147B68u) != 0x24040001u || r_u32(0x80147B6Cu) != 0x00002821u || r_u32(0x80147B70u) != 0x3C068014u ||
                r_u32(0x80147B74u) != 0x24C66D04u || r_u32(0x80147B78u) != 0x0C03770Du || r_u32(0x80147B7Cu) != 0x24070450u || r_u32(0x80147B80u) != 0x8FBF0010u || r_u32(0x80147B84u) != 0x27BD0018u || r_u32(0x80147B88u) != 0x03E00008u || r_u32(0x80147B8Cu) != 0x00000000u)
                sf_callback_image_error(target, "TITLE.OVL");
            sub_80147B0C((uint32)args[0]);
            *result = 0;
            return 1;
        case 0x80147B90u:
            if (r_u32(0x80147B90u) != 0x27BDFFF8u || r_u32(0x80147B94u) != 0x3C038015u || r_u32(0x80147B98u) != 0x8463A814u)
                sf_callback_image_error(target, "TITLE.DEP.OVL");
            *result = (uint32)sub_80147B90();
            return 1;
        case 0x80147C08u:
            if (r_u32(0x80147C08u) != 0x2402FFFFu || r_u32(0x80147C0Cu) != 0x3C018015u || r_u32(0x80147C10u) != 0xA422A814u)
                sf_callback_image_error(target, "TITLE.DEP.OVL");
            *result = (uint32)sub_80147C08();
            return 1;
        case 0x80147C34u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            if (r_u32(0x80147C34u) != 0x3C028015u || r_u32(0x80147C38u) != 0x8C42A840u || r_u32(0x80147C3Cu) != 0x27BDFFD8u)
                sf_callback_image_error(target, "TITLE.DEP.OVL");
            *result = (uint32)sub_80147C34((uint32)args[0], (sint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x80147F8Cu:
            if (r_u32(0x80147F8Cu) != 0x27BDFFB8u || r_u32(0x80147F90u) != 0xAFBF0044u || r_u32(0x80147F94u) != 0xAFB00040u)
                sf_callback_image_error(target, "PARK.OVL");
            *result = (uint32)sub_80147F8C();
            return 1;
        case 0x80148070u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x80148070u) != 0x27BDFFE8u || r_u32(0x80148074u) != 0x14800015u || r_u32(0x80148078u) != 0xAFBF0010u || r_u32(0x8014807Cu) != 0x3C028015u || r_u32(0x80148080u) != 0x8442A814u || r_u32(0x80148084u) != 0x3C038015u || r_u32(0x80148088u) != 0x8463A816u || r_u32(0x8014808Cu) != 0x00000000u || r_u32(0x80148090u) != 0x0043102Au || r_u32(0x80148094u) != 0x14400062u || r_u32(0x80148098u) != 0x24020001u || r_u32(0x8014809Cu) != 0x3C028015u || r_u32(0x801480A0u) != 0x8C42A8F4u || r_u32(0x801480A4u) != 0x3C018015u || r_u32(0x801480A8u) != 0xAC20A8F8u || r_u32(0x801480ACu) != 0x10400005u || r_u32(0x801480B0u) != 0x00000000u || r_u32(0x801480B4u) != 0x3C018015u || r_u32(0x801480B8u) != 0xAC20A8F4u || r_u32(0x801480BCu) != 0x0040F809u || r_u32(0x801480C0u) != 0x00000000u || r_u32(0x801480C4u) != 0x08052088u || r_u32(0x801480C8u) != 0x24020001u || r_u32(0x801480CCu) != 0x2483FFFFu || r_u32(0x801480D0u) != 0x2C620007u || r_u32(0x801480D4u) != 0x10400011u ||
                r_u32(0x801480D8u) != 0x00031080u || r_u32(0x801480DCu) != 0x3C018014u || r_u32(0x801480E0u) != 0x00220821u || r_u32(0x801480E4u) != 0x8C226D24u || r_u32(0x801480E8u) != 0x00000000u || r_u32(0x801480ECu) != 0x00400008u || r_u32(0x801480F0u) != 0x00000000u || r_u32(0x801480F4u) != 0x08052048u || r_u32(0x801480F8u) != 0x24020007u || r_u32(0x801480FCu) != 0x08052048u || r_u32(0x80148100u) != 0x24020001u || r_u32(0x80148104u) != 0x08052048u || r_u32(0x80148108u) != 0x24020006u || r_u32(0x8014810Cu) != 0x08052048u || r_u32(0x80148110u) != 0x24020005u || r_u32(0x80148114u) != 0x08052048u || r_u32(0x80148118u) != 0x24020004u || r_u32(0x8014811Cu) != 0x24020002u || r_u32(0x80148120u) != 0x3C018015u || r_u32(0x80148124u) != 0xAC22A818u || r_u32(0x80148128u) != 0x3C028015u || r_u32(0x8014812Cu) != 0x8C42A8F8u || r_u32(0x80148130u) != 0x00000000u || r_u32(0x80148134u) != 0x10400007u || r_u32(0x80148138u) != 0x2483FFFFu || r_u32(0x8014813Cu) != 0x3C018015u ||
                r_u32(0x80148140u) != 0xAC20A8F8u || r_u32(0x80148144u) != 0x0040F809u || r_u32(0x80148148u) != 0x00000000u || r_u32(0x8014814Cu) != 0x08052088u || r_u32(0x80148150u) != 0x00001021u || r_u32(0x80148154u) != 0x2C620007u || r_u32(0x80148158u) != 0x1040002Du || r_u32(0x8014815Cu) != 0x00031080u || r_u32(0x80148160u) != 0x3C018014u || r_u32(0x80148164u) != 0x00220821u || r_u32(0x80148168u) != 0x8C226D44u || r_u32(0x8014816Cu) != 0x00000000u || r_u32(0x80148170u) != 0x00400008u || r_u32(0x80148174u) != 0x00000000u || r_u32(0x80148178u) != 0x0C05208Cu || r_u32(0x8014817Cu) != 0x24040001u || r_u32(0x80148180u) != 0x08052088u || r_u32(0x80148184u) != 0x00001021u || r_u32(0x80148188u) != 0x00041080u || r_u32(0x8014818Cu) != 0x3C018015u || r_u32(0x80148190u) != 0x00220821u || r_u32(0x80148194u) != 0x8C24A484u || r_u32(0x80148198u) != 0x24050001u || r_u32(0x8014819Cu) != 0x00003021u || r_u32(0x801481A0u) != 0x0C051F0Du || r_u32(0x801481A4u) != 0x00003821u ||
                r_u32(0x801481A8u) != 0x0C051F02u || r_u32(0x801481ACu) != 0x00000000u || r_u32(0x801481B0u) != 0x08052088u || r_u32(0x801481B4u) != 0x00001021u || r_u32(0x801481B8u) != 0x00041080u || r_u32(0x801481BCu) != 0x3C018015u || r_u32(0x801481C0u) != 0x00220821u || r_u32(0x801481C4u) != 0x8C24A484u || r_u32(0x801481C8u) != 0x24050002u || r_u32(0x801481CCu) != 0x3C078014u || r_u32(0x801481D0u) != 0x24E77E00u || r_u32(0x801481D4u) != 0x0C051F0Du || r_u32(0x801481D8u) != 0x00003021u || r_u32(0x801481DCu) != 0x08052088u || r_u32(0x801481E0u) != 0x00001021u || r_u32(0x801481E4u) != 0x00041080u || r_u32(0x801481E8u) != 0x3C018015u || r_u32(0x801481ECu) != 0x00220821u || r_u32(0x801481F0u) != 0x8C24A484u || r_u32(0x801481F4u) != 0x24050002u || r_u32(0x801481F8u) != 0x3C078014u || r_u32(0x801481FCu) != 0x24E77D78u || r_u32(0x80148200u) != 0x0C051F0Du || r_u32(0x80148204u) != 0x00003021u || r_u32(0x80148208u) != 0x08052088u || r_u32(0x8014820Cu) != 0x00001021u ||
                r_u32(0x80148210u) != 0x24020002u || r_u32(0x80148214u) != 0x3C018015u || r_u32(0x80148218u) != 0xAC22A818u || r_u32(0x8014821Cu) != 0x00001021u || r_u32(0x80148220u) != 0x8FBF0010u || r_u32(0x80148224u) != 0x27BD0018u || r_u32(0x80148228u) != 0x03E00008u || r_u32(0x8014822Cu) != 0x00000000u)
                sf_callback_image_error(target, "TITLE.DEP.OVL");
            *result = (uint32)sub_80148070((sint32)args[0]);
            return 1;
        case 0x80148230u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x80148230u) != 0x27BDFFD8u || r_u32(0x80148234u) != 0xAFB00020u || r_u32(0x80148238u) != 0x00808021u)
                sf_callback_image_error(target, "TITLE.DEP.OVL");
            *result = (uint32)sub_80148230((sint32)args[0]);
            return 1;
        case 0x80148474u:
            if (r_u32(0x80148474u) != 0x27BDFF80u || r_u32(0x80148478u) != 0xAFBF007Cu || r_u32(0x8014847Cu) != 0xAFB40078u)
                sf_callback_image_error(target, "TITLE.DEP.OVL");
            *result = (uint32)sub_80148474();
            return 1;
        case 0x801486A8u:
            if (r_u32(0x801486A8u) != 0x27BDFFE0u || r_u32(0x801486ACu) != 0xAFBF0018u || r_u32(0x801486B0u) != 0xAFB10014u || r_u32(0x801486B4u) != 0x0C0058A7u || r_u32(0x801486B8u) != 0xAFB00010u || r_u32(0x801486BCu) != 0x00008821u || r_u32(0x801486C0u) != 0x3C108015u || r_u32(0x801486C4u) != 0x2610B4F0u || r_u32(0x801486C8u) != 0x8E020028u || r_u32(0x801486CCu) != 0x00000000u || r_u32(0x801486D0u) != 0x10400005u || r_u32(0x801486D4u) != 0xAE000014u || r_u32(0x801486D8u) != 0x3C048011u || r_u32(0x801486DCu) != 0x8C846964u || r_u32(0x801486E0u) != 0x0C031EDAu || r_u32(0x801486E4u) != 0x02002821u || r_u32(0x801486E8u) != 0x26310001u || r_u32(0x801486ECu) != 0x2A220004u || r_u32(0x801486F0u) != 0x1440FFF5u || r_u32(0x801486F4u) != 0x2610002Cu || r_u32(0x801486F8u) != 0x8FBF0018u || r_u32(0x801486FCu) != 0x8FB10014u || r_u32(0x80148700u) != 0x8FB00010u || r_u32(0x80148704u) != 0x27BD0020u || r_u32(0x80148708u) != 0x03E00008u || r_u32(0x8014870Cu) != 0x00000000u)
                sf_callback_image_error(target, "TITLE.OVL");
            sub_801486A8();
            *result = 0;
            return 1;
        case 0x80148B1Cu:
            if (r_u32(0x80148B1Cu) != 0x3C028011u || r_u32(0x80148B20u) != 0x8C4269A4u || r_u32(0x80148B24u) != 0x3C038015u)
                sf_callback_image_error(target, "TITLE.DEP.OVL");
            *result = (uint32)sub_80148B1C();
            return 1;
        case 0x80148CD4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x80148CD4u) != 0x27BDFFE8u || r_u32(0x80148CD8u) != 0xAFB00010u || r_u32(0x80148CDCu) != 0x00808021u || r_u32(0x80148CE0u) != 0x24020001u || r_u32(0x80148CE4u) != 0x1602000Bu || r_u32(0x80148CE8u) != 0xAFBF0014u || r_u32(0x80148CECu) != 0x3C028015u || r_u32(0x80148CF0u) != 0x8C42A818u || r_u32(0x80148CF4u) != 0x00000000u || r_u32(0x80148CF8u) != 0x10400006u || r_u32(0x80148CFCu) != 0x00000000u || r_u32(0x80148D00u) != 0x3C028015u || r_u32(0x80148D04u) != 0x8C42A8F0u || r_u32(0x80148D08u) != 0x00000000u || r_u32(0x80148D0Cu) != 0x02021023u || r_u32(0x80148D10u) != 0x24500001u || r_u32(0x80148D14u) != 0x3C028015u || r_u32(0x80148D18u) != 0x8C42A8B0u || r_u32(0x80148D1Cu) != 0x00000000u || r_u32(0x80148D20u) != 0x00021080u || r_u32(0x80148D24u) != 0x3C018015u || r_u32(0x80148D28u) != 0x00220821u || r_u32(0x80148D2Cu) != 0x8C22A8B4u || r_u32(0x80148D30u) != 0x00000000u || r_u32(0x80148D34u) != 0x0202102Au || r_u32(0x80148D38u) != 0x1040000Eu ||
                r_u32(0x80148D3Cu) != 0x00000000u || r_u32(0x80148D40u) != 0x0600000Cu || r_u32(0x80148D44u) != 0x00000000u || r_u32(0x80148D48u) != 0x3C028015u || r_u32(0x80148D4Cu) != 0x8C42B468u || r_u32(0x80148D50u) != 0x00000000u || r_u32(0x80148D54u) != 0x14400005u || r_u32(0x80148D58u) != 0x24040005u || r_u32(0x80148D5Cu) != 0x24050002u || r_u32(0x80148D60u) != 0x00003021u || r_u32(0x80148D64u) != 0x0C01AF26u || r_u32(0x80148D68u) != 0x00003821u || r_u32(0x80148D6Cu) != 0x3C018015u || r_u32(0x80148D70u) != 0xAC30A8F0u || r_u32(0x80148D74u) != 0x8FBF0014u || r_u32(0x80148D78u) != 0x8FB00010u || r_u32(0x80148D7Cu) != 0x27BD0018u || r_u32(0x80148D80u) != 0x03E00008u || r_u32(0x80148D84u) != 0x00000000u)
                sf_callback_image_error(target, "TITLE.OVL");
            sub_80148CD4((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x80148F78u:
            if (r_u32(0x80148F78u) != 0x27BDFFE0u || r_u32(0x80148F7Cu) != 0x00002021u || r_u32(0x80148F80u) != 0xAFBF0018u || r_u32(0x80148F84u) != 0xAFB10014u || r_u32(0x80148F88u) != 0x0C011212u || r_u32(0x80148F8Cu) != 0xAFB00010u || r_u32(0x80148F90u) != 0x0C00EC0Cu || r_u32(0x80148F94u) != 0x00000000u || r_u32(0x80148F98u) != 0x0C00EC7Fu || r_u32(0x80148F9Cu) != 0x00000000u || r_u32(0x80148FA0u) != 0x3C028015u || r_u32(0x80148FA4u) != 0x2442B240u || r_u32(0x80148FA8u) != 0x3C018015u || r_u32(0x80148FACu) != 0xAC20B244u || r_u32(0x80148FB0u) != 0xAC400000u || r_u32(0x80148FB4u) != 0x3C048015u || r_u32(0x80148FB8u) != 0x8C84B518u || r_u32(0x80148FBCu) != 0x24030001u || r_u32(0x80148FC0u) != 0x1480000Du || r_u32(0x80148FC4u) != 0xA4430000u || r_u32(0x80148FC8u) != 0x00008821u || r_u32(0x80148FCCu) != 0x3C108015u || r_u32(0x80148FD0u) != 0x2610B4F0u || r_u32(0x80148FD4u) != 0x3C048011u || r_u32(0x80148FD8u) != 0x8C846964u || r_u32(0x80148FDCu) != 0x02002821u ||
                r_u32(0x80148FE0u) != 0x2610002Cu || r_u32(0x80148FE4u) != 0x0C031EC8u || r_u32(0x80148FE8u) != 0x26310001u || r_u32(0x80148FECu) != 0x2A220004u || r_u32(0x80148FF0u) != 0x1440FFF8u || r_u32(0x80148FF4u) != 0x00000000u || r_u32(0x80148FF8u) != 0x3C048015u || r_u32(0x80148FFCu) != 0x2484A6CCu || r_u32(0x80149000u) != 0x0C00595Au || r_u32(0x80149004u) != 0x00000000u || r_u32(0x80149008u) != 0x0C03369Du || r_u32(0x8014900Cu) != 0x24040001u || r_u32(0x80149010u) != 0x24040003u || r_u32(0x80149014u) != 0x00002821u || r_u32(0x80149018u) != 0x3C018011u || r_u32(0x8014901Cu) != 0xA02068D0u || r_u32(0x80149020u) != 0x3C018011u || r_u32(0x80149024u) != 0xA02068D1u || r_u32(0x80149028u) != 0x0C03616Fu || r_u32(0x8014902Cu) != 0x00003021u || r_u32(0x80149030u) != 0x8FBF0018u || r_u32(0x80149034u) != 0x8FB10014u || r_u32(0x80149038u) != 0x8FB00010u || r_u32(0x8014903Cu) != 0x27BD0020u || r_u32(0x80149040u) != 0x03E00008u || r_u32(0x80149044u) != 0x00000000u)
                sf_callback_image_error(target, "TITLE.OVL");
            *result = (uint32)sub_80148F78();
            return 1;
        case 0x80149154u:
            if (r_u32(0x80149154u) != 0x3C028015u || r_u32(0x80149158u) != 0x8C42A8F0u || r_u32(0x8014915Cu) != 0x27BDFFE8u || r_u32(0x80149160u) != 0x1440000Fu || r_u32(0x80149164u) != 0xAFBF0010u || r_u32(0x80149168u) != 0x0C020BB0u || r_u32(0x8014916Cu) != 0x00000000u || r_u32(0x80149170u) != 0x3C048015u || r_u32(0x80149174u) != 0x2484A4F8u || r_u32(0x80149178u) != 0x0C00595Au || r_u32(0x8014917Cu) != 0x00000000u || r_u32(0x80149180u) != 0x3C028011u || r_u32(0x80149184u) != 0x8C4269A4u || r_u32(0x80149188u) != 0x00000000u || r_u32(0x8014918Cu) != 0x24420028u || r_u32(0x80149190u) != 0x3C018015u || r_u32(0x80149194u) != 0xAC22A80Cu || r_u32(0x80149198u) != 0x0805246Au || r_u32(0x8014919Cu) != 0x00000000u || r_u32(0x801491A0u) != 0x0C0522C7u || r_u32(0x801491A4u) != 0x00000000u || r_u32(0x801491A8u) != 0x8FBF0010u || r_u32(0x801491ACu) != 0x27BD0018u || r_u32(0x801491B0u) != 0x03E00008u || r_u32(0x801491B4u) != 0x00000000u)
                sf_callback_image_error(target, "TITLE.OVL");
            sub_80149154();
            *result = 0;
            return 1;
        case 0x80149328u:
            if (r_u32(0x80149328u) != 0x27BDFFE0u || r_u32(0x8014932Cu) != 0x3C038015u || r_u32(0x80149330u) != 0x8C63A8F0u || r_u32(0x80149334u) != 0x24020001u || r_u32(0x80149338u) != 0x14620008u || r_u32(0x8014933Cu) != 0xAFBF0018u || r_u32(0x80149340u) != 0x3C028015u || r_u32(0x80149344u) != 0x8C42A818u || r_u32(0x80149348u) != 0x00000000u || r_u32(0x8014934Cu) != 0x10400003u || r_u32(0x80149350u) != 0x00000000u || r_u32(0x80149354u) != 0x3C018015u || r_u32(0x80149358u) != 0xAC20A8F0u || r_u32(0x8014935Cu) != 0x3C028014u || r_u32(0x80149360u) != 0x90421A20u || r_u32(0x80149364u) != 0x00000000u || r_u32(0x80149368u) != 0x10400057u || r_u32(0x8014936Cu) != 0x00003021u || r_u32(0x80149370u) != 0x240800C8u || r_u32(0x80149374u) != 0x24070046u || r_u32(0x80149378u) != 0x3C048015u || r_u32(0x8014937Cu) != 0x2484B4F0u || r_u32(0x80149380u) != 0x90850014u || r_u32(0x80149384u) != 0x00000000u || r_u32(0x80149388u) != 0xA3A50010u || r_u32(0x8014938Cu) != 0x90820015u ||
                r_u32(0x80149390u) != 0x00000000u || r_u32(0x80149394u) != 0xA3A20011u || r_u32(0x80149398u) != 0x90820016u || r_u32(0x8014939Cu) != 0x00000000u || r_u32(0x801493A0u) != 0xA3A20012u || r_u32(0x801493A4u) != 0x24020001u || r_u32(0x801493A8u) != 0x14C20006u || r_u32(0x801493ACu) != 0x24020003u || r_u32(0x801493B0u) != 0x3C028015u || r_u32(0x801493B4u) != 0x8C42A818u || r_u32(0x801493B8u) != 0x00000000u || r_u32(0x801493BCu) != 0x1440000Eu || r_u32(0x801493C0u) != 0x24020003u || r_u32(0x801493C4u) != 0x14C20006u || r_u32(0x801493C8u) != 0x24020007u || r_u32(0x801493CCu) != 0x3C038015u || r_u32(0x801493D0u) != 0x8C63A818u || r_u32(0x801493D4u) != 0x00000000u || r_u32(0x801493D8u) != 0x14620007u || r_u32(0x801493DCu) != 0x00000000u || r_u32(0x801493E0u) != 0x3C028014u || r_u32(0x801493E4u) != 0x8C421A24u || r_u32(0x801493E8u) != 0x00000000u || r_u32(0x801493ECu) != 0x2C420275u || r_u32(0x801493F0u) != 0x1440000Cu || r_u32(0x801493F4u) != 0x00000000u ||
                r_u32(0x801493F8u) != 0x93A30010u || r_u32(0x801493FCu) != 0x00000000u || r_u32(0x80149400u) != 0x306200FFu || r_u32(0x80149404u) != 0x1040002Au || r_u32(0x80149408u) != 0x2C42000Bu || r_u32(0x8014940Cu) != 0x14400003u || r_u32(0x80149410u) != 0x2462FFF6u || r_u32(0x80149414u) != 0x08052521u || r_u32(0x80149418u) != 0xA3A20010u || r_u32(0x8014941Cu) != 0x08052521u || r_u32(0x80149420u) != 0xA3A00010u || r_u32(0x80149424u) != 0x3C028015u || r_u32(0x80149428u) != 0x8C42A8F0u || r_u32(0x8014942Cu) != 0x00000000u || r_u32(0x80149430u) != 0x14C20008u || r_u32(0x80149434u) != 0x30A300FFu || r_u32(0x80149438u) != 0x30A200FFu || r_u32(0x8014943Cu) != 0x1048001Cu || r_u32(0x80149440u) != 0x2C4200BEu || r_u32(0x80149444u) != 0x1440000Cu || r_u32(0x80149448u) != 0x24A2000Au || r_u32(0x8014944Cu) != 0x08052521u || r_u32(0x80149450u) != 0xA3A80010u || r_u32(0x80149454u) != 0x10670016u || r_u32(0x80149458u) != 0x2C620051u || r_u32(0x8014945Cu) != 0x14400004u ||
                r_u32(0x80149460u) != 0x2C62003Cu || r_u32(0x80149464u) != 0x24A2FFF6u || r_u32(0x80149468u) != 0x08052521u || r_u32(0x8014946Cu) != 0xA3A20010u || r_u32(0x80149470u) != 0x10400003u || r_u32(0x80149474u) != 0x24A2000Au || r_u32(0x80149478u) != 0x08052521u || r_u32(0x8014947Cu) != 0xA3A20010u || r_u32(0x80149480u) != 0xA3A70010u || r_u32(0x80149484u) != 0x93A20010u || r_u32(0x80149488u) != 0x00000000u || r_u32(0x8014948Cu) != 0xA3A20012u || r_u32(0x80149490u) != 0xA3A20011u || r_u32(0x80149494u) != 0xA0820014u || r_u32(0x80149498u) != 0x93A20011u || r_u32(0x8014949Cu) != 0x00000000u || r_u32(0x801494A0u) != 0xA0820015u || r_u32(0x801494A4u) != 0x93A20012u || r_u32(0x801494A8u) != 0x00000000u || r_u32(0x801494ACu) != 0xA0820016u || r_u32(0x801494B0u) != 0x24C60001u || r_u32(0x801494B4u) != 0x28C20004u || r_u32(0x801494B8u) != 0x1440FFB1u || r_u32(0x801494BCu) != 0x2484002Cu || r_u32(0x801494C0u) != 0x08052547u || r_u32(0x801494C4u) != 0x00000000u ||
                r_u32(0x801494C8u) != 0x0C0521AAu || r_u32(0x801494CCu) != 0x00000000u || r_u32(0x801494D0u) != 0x0C051E9Cu || r_u32(0x801494D4u) != 0x00000000u || r_u32(0x801494D8u) != 0x2402000Bu || r_u32(0x801494DCu) != 0x3C018015u || r_u32(0x801494E0u) != 0xAC22A8B0u || r_u32(0x801494E4u) != 0x00003021u || r_u32(0x801494E8u) != 0x3C048011u || r_u32(0x801494ECu) != 0x2484BAF4u || r_u32(0x801494F0u) != 0x3C038015u || r_u32(0x801494F4u) != 0x2463A900u || r_u32(0x801494F8u) != 0x8C620000u || r_u32(0x801494FCu) != 0x24630004u || r_u32(0x80149500u) != 0x24C60001u || r_u32(0x80149504u) != 0xAC820000u || r_u32(0x80149508u) != 0x28C20009u || r_u32(0x8014950Cu) != 0x1440FFFAu || r_u32(0x80149510u) != 0x24840004u || r_u32(0x80149514u) != 0x0C00E5C2u || r_u32(0x80149518u) != 0x24040001u || r_u32(0x8014951Cu) != 0x8FBF0018u || r_u32(0x80149520u) != 0x27BD0020u || r_u32(0x80149524u) != 0x03E00008u || r_u32(0x80149528u) != 0x00000000u)
                sf_callback_image_error(target, "TITLE.OVL");
            sub_80149328();
            *result = 0;
            return 1;
        case 0x80149558u:
            if (r_u32(0x80149558u) != 0x27BDFFC8u || r_u32(0x8014955Cu) != 0xAFB20028u || r_u32(0x80149560u) != 0x00009021u)
                sf_callback_image_error(target, "TITLE.DEP.OVL");
            *result = (uint32)sub_80149558();
            return 1;
        case 0x80149880u:
            if (r_u32(0x80149880u) != 0x27BDFFD8u || r_u32(0x80149884u) != 0x27A40010u || r_u32(0x80149888u) != 0x00002821u)
                sf_callback_image_error(target, "TITLE.DEP.OVL");
            *result = (uint32)sub_80149880();
            return 1;
        case 0x80149CF4u:
            if (r_u32(0x80149CF4u) != 0x27BDFFD0u || r_u32(0x80149CF8u) != 0xAFBF002Cu || r_u32(0x80149CFCu) != 0xAFB20028u)
                sf_callback_image_error(target, "TITLE.OVL");
            *result = (uint32)sub_80149CF4();
            return 1;
        case 0x8014C500u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8014C500u) != 0x27BDFF90u || r_u32(0x8014C504u) != 0x308400FFu || r_u32(0x8014C508u) != 0xAFBF006Cu)
                sf_callback_image_error(target, "INIT.DEP.OVL");
            *result = (uint32)sub_8014C500((uint8)args[0]);
            return 1;
        case 0x8014C94Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8014C94Cu) != 0x27BDFF88u || r_u32(0x8014C950u) != 0xAFB60068u || r_u32(0x8014C954u) != 0x00A0B021u)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            *result = (uint32)sub_8014C94C((sint16)args[0], (uint32)args[1]);
            return 1;
        case 0x8014CC70u:
            if (r_u32(0x8014CC70u) != 0x27BDFFC0u || r_u32(0x8014CC74u) != 0x3C048013u || r_u32(0x8014CC78u) != 0x84840C88u)
                sf_callback_image_error(target, "INIT.DEP.OVL");
            *result = (uint32)sub_8014CC70();
            return 1;
        case 0x8014D118u:
            if (r_u32(0x8014D118u) != 0x3C028011u || r_u32(0x8014D11Cu) != 0x8C426A5Cu || r_u32(0x8014D120u) != 0x27BDFFD0u)
                sf_callback_image_error(target, "INIT.DEP.OVL");
            *result = (uint32)sub_8014D118();
            return 1;
        case 0x8014D270u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8014D270u) != 0x27BDFF78u || r_u32(0x8014D274u) != 0xAFB40080u || r_u32(0x8014D278u) != 0x0080A021u)
                sf_callback_image_error(target, "INIT.DEP.OVL");
            *result = (uint32)sub_8014D270((uint32)args[0]);
            return 1;
        case 0x8014D4F4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8014D4F4u) != 0x27BDFFD8u || r_u32(0x8014D4F8u) != 0x3C038011u || r_u32(0x8014D4FCu) != 0x8C636984u)
                sf_callback_image_error(target, "INIT.DEP.OVL");
            *result = (uint32)sub_8014D4F4((sint16)args[0]);
            return 1;
        case 0x8014D5A0u:
            if (r_u32(0x8014D5A0u) != 0x27BDFF78u || r_u32(0x8014D5A4u) != 0x24040006u || r_u32(0x8014D5A8u) != 0xAFBF0080u || r_u32(0x8014D5ACu) != 0xAFB3007Cu || r_u32(0x8014D5B0u) != 0xAFB20078u || r_u32(0x8014D5B4u) != 0xAFB10074u || r_u32(0x8014D5B8u) != 0x0C011212u || r_u32(0x8014D5BCu) != 0xAFB00070u || r_u32(0x8014D5C0u) != 0x2404FF65u || r_u32(0x8014D5C4u) != 0x2405FFA6u || r_u32(0x8014D5C8u) != 0x24060136u || r_u32(0x8014D5CCu) != 0x0C021266u || r_u32(0x8014D5D0u) != 0x240700AAu || r_u32(0x8014D5D4u) != 0x304400FFu || r_u32(0x8014D5D8u) != 0x2405006Eu || r_u32(0x8014D5DCu) != 0x24060082u || r_u32(0x8014D5E0u) != 0x3C018011u || r_u32(0x8014D5E4u) != 0xA0225F16u || r_u32(0x8014D5E8u) != 0x0C021374u || r_u32(0x8014D5ECu) != 0x240700C8u || r_u32(0x8014D5F0u) != 0x3C028011u || r_u32(0x8014D5F4u) != 0x8C4268D4u || r_u32(0x8014D5F8u) != 0x00000000u || r_u32(0x8014D5FCu) != 0x8C460000u || r_u32(0x8014D600u) != 0x8C470004u || r_u32(0x8014D604u) != 0x3C058015u ||
                r_u32(0x8014D608u) != 0x24A5C2B4u || r_u32(0x8014D60Cu) != 0x0C03B249u || r_u32(0x8014D610u) != 0x27A40010u || r_u32(0x8014D614u) != 0x27A50010u || r_u32(0x8014D618u) != 0x2406FFFFu || r_u32(0x8014D61Cu) != 0x3C048011u || r_u32(0x8014D620u) != 0x90845F16u || r_u32(0x8014D624u) != 0x0C02160Bu || r_u32(0x8014D628u) != 0x00003821u || r_u32(0x8014D62Cu) != 0x3C028011u || r_u32(0x8014D630u) != 0x8C4264B0u || r_u32(0x8014D634u) != 0x00000000u || r_u32(0x8014D638u) != 0x1040003Au || r_u32(0x8014D63Cu) != 0x00000000u || r_u32(0x8014D640u) != 0x3C028011u || r_u32(0x8014D644u) != 0x8C4268D4u || r_u32(0x8014D648u) != 0x00000000u || r_u32(0x8014D64Cu) != 0x8C53000Cu || r_u32(0x8014D650u) != 0x00000000u || r_u32(0x8014D654u) != 0x2A620003u || r_u32(0x8014D658u) != 0x14400002u || r_u32(0x8014D65Cu) != 0x00009021u || r_u32(0x8014D660u) != 0x24130002u || r_u32(0x8014D664u) != 0x1A60000Eu || r_u32(0x8014D668u) != 0x00008021u || r_u32(0x8014D66Cu) != 0x3C028011u ||
                r_u32(0x8014D670u) != 0x8C4268D4u || r_u32(0x8014D674u) != 0x00000000u || r_u32(0x8014D678u) != 0x8C430010u || r_u32(0x8014D67Cu) != 0x00101080u || r_u32(0x8014D680u) != 0x00431021u || r_u32(0x8014D684u) != 0x8C440000u || r_u32(0x8014D688u) != 0x0C03B229u || r_u32(0x8014D68Cu) != 0x26100001u || r_u32(0x8014D690u) != 0x02429021u || r_u32(0x8014D694u) != 0x0213102Au || r_u32(0x8014D698u) != 0x1440FFF4u || r_u32(0x8014D69Cu) != 0x00000000u || r_u32(0x8014D6A0u) != 0x3C118011u || r_u32(0x8014D6A4u) != 0x8E3164B0u || r_u32(0x8014D6A8u) != 0x02402821u || r_u32(0x8014D6ACu) != 0x00008021u || r_u32(0x8014D6B0u) != 0x0C021235u || r_u32(0x8014D6B4u) != 0x02202021u || r_u32(0x8014D6B8u) != 0x1A600018u || r_u32(0x8014D6BCu) != 0x00000000u || r_u32(0x8014D6C0u) != 0x2406FFFFu || r_u32(0x8014D6C4u) != 0x02203821u || r_u32(0x8014D6C8u) != 0x3C028011u || r_u32(0x8014D6CCu) != 0x8C4268D4u || r_u32(0x8014D6D0u) != 0x3C048011u || r_u32(0x8014D6D4u) != 0x90845F16u ||
                r_u32(0x8014D6D8u) != 0x8C430010u || r_u32(0x8014D6DCu) != 0x00101080u || r_u32(0x8014D6E0u) != 0x00431021u || r_u32(0x8014D6E4u) != 0x8C450000u || r_u32(0x8014D6E8u) != 0x0C02160Bu || r_u32(0x8014D6ECu) != 0x26100001u || r_u32(0x8014D6F0u) != 0x3044FFFFu || r_u32(0x8014D6F4u) != 0x0C0218B7u || r_u32(0x8014D6F8u) != 0x00002821u || r_u32(0x8014D6FCu) != 0x00021840u || r_u32(0x8014D700u) != 0x00621821u || r_u32(0x8014D704u) != 0x00031880u || r_u32(0x8014D708u) != 0x00621823u || r_u32(0x8014D70Cu) != 0x00031880u || r_u32(0x8014D710u) != 0x0213102Au || r_u32(0x8014D714u) != 0x1440FFEAu || r_u32(0x8014D718u) != 0x02238821u || r_u32(0x8014D71Cu) != 0x3C018011u || r_u32(0x8014D720u) != 0xAC3164B0u || r_u32(0x8014D724u) != 0x8FBF0080u || r_u32(0x8014D728u) != 0x8FB3007Cu || r_u32(0x8014D72Cu) != 0x8FB20078u || r_u32(0x8014D730u) != 0x8FB10074u || r_u32(0x8014D734u) != 0x8FB00070u || r_u32(0x8014D738u) != 0x27BD0088u || r_u32(0x8014D73Cu) != 0x03E00008u ||
                r_u32(0x8014D740u) != 0x00000000u)
                sf_callback_image_error(target, "INIT.DEP.OVL");
            *result = (uint32)sub_8014D5A0();
            return 1;
        case 0x8014D744u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8014D744u) != 0x27BDFFE0u || r_u32(0x8014D748u) != 0xAFB00018u || r_u32(0x8014D74Cu) != 0xAFBF001Cu || r_u32(0x8014D750u) != 0x0C0378FFu || r_u32(0x8014D754u) != 0x2490FFFCu || r_u32(0x8014D758u) != 0x00021083u || r_u32(0x8014D75Cu) != 0x2444FFFEu || r_u32(0x8014D760u) != 0x3C020001u || r_u32(0x8014D764u) != 0x24429038u || r_u32(0x8014D768u) != 0x00021082u || r_u32(0x8014D76Cu) != 0x00822023u || r_u32(0x8014D770u) != 0x3C02FFFEu || r_u32(0x8014D774u) != 0x34422B40u || r_u32(0x8014D778u) != 0x00822021u || r_u32(0x8014D77Cu) != 0x18800006u || r_u32(0x8014D780u) != 0x00001821u || r_u32(0x8014D784u) != 0xAE000000u || r_u32(0x8014D788u) != 0x24630001u || r_u32(0x8014D78Cu) != 0x0064102Au || r_u32(0x8014D790u) != 0x1440FFFCu || r_u32(0x8014D794u) != 0x2610FFFCu || r_u32(0x8014D798u) != 0x8FBF001Cu || r_u32(0x8014D79Cu) != 0x8FB00018u || r_u32(0x8014D7A0u) != 0x27BD0020u || r_u32(0x8014D7A4u) != 0x03E00008u || r_u32(0x8014D7A8u) != 0x00000000u)
                sf_callback_image_error(target, "INIT.DEP.OVL");
            *result = (uint32)sub_8014D744((uint32)args[0]);
            return 1;
        case 0x8014D7ACu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8014D7ACu) != 0x27BDFF08u || r_u32(0x8014D7B0u) != 0xAFB300ECu || r_u32(0x8014D7B4u) != 0x00809821u)
                sf_callback_image_error(target, "INIT.OVL");
            *result = (uint32)sub_8014D7AC((sint32)args[0]);
            return 1;
        case 0x8014E0CCu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8014E0CCu) != 0x27BDFFE8u || r_u32(0x8014E0D0u) != 0xAFB00010u || r_u32(0x8014E0D4u) != 0x00808021u)
                sf_callback_image_error(target, "INIT.DEP.OVL");
            *result = (uint32)sub_8014E0CC((sint32)args[0]);
            return 1;
        case 0x8014E1B8u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8014E1B8u) != 0x27BDFFA8u || r_u32(0x8014E1BCu) != 0xAFBE0050u || r_u32(0x8014E1C0u) != 0x00A0F021u)
                sf_callback_image_error(target, "INIT.OVL");
            *result = (uint32)sub_8014E1B8((uint8)args[0], (sint32)args[1]);
            return 1;
        case 0x8014E748u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            if (r_u32(0x8014E748u) != 0x8C820008u || r_u32(0x8014E74Cu) != 0x00000000u || r_u32(0x8014E750u) != 0x1040002Au)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            sub_8014E748((uint32)args[0], (sint32)args[1], (sint32)args[2], (sint32)args[3]);
            *result = 0;
            return 1;
        case 0x8014E804u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            if (r_u32(0x8014E804u) != 0x8C820008u || r_u32(0x8014E808u) != 0x00000000u || r_u32(0x8014E80Cu) != 0x1040002Au)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            sub_8014E804((uint32)args[0], (sint32)args[1], (sint32)args[2], (sint32)args[3]);
            *result = 0;
            return 1;
        case 0x8014E8C0u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8014E8C0u) != 0x27BDFFB0u || r_u32(0x8014E8C4u) != 0x00805821u || r_u32(0x8014E8C8u) != 0x8D630008u)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            sub_8014E8C0((uint32)args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x8014EB54u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8014EB54u) != 0x27BDFFE0u || r_u32(0x8014EB58u) != 0xAFB10014u || r_u32(0x8014EB5Cu) != 0x00808821u)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            *result = (uint32)sub_8014EB54((uint32)args[0]);
            return 1;
        case 0x8014EE38u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8014EE38u) != 0x27BDFFE0u || r_u32(0x8014EE3Cu) != 0xAFB10014u || r_u32(0x8014EE40u) != 0x00808821u)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            *result = (uint32)sub_8014EE38((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x8014FD78u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8014FD78u) != 0x27BDFFD8u || r_u32(0x8014FD7Cu) != 0xAFB00018u || r_u32(0x8014FD80u) != 0x00808021u)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            *result = (uint32)sub_8014FD78((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x80150148u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x80150148u) != 0x27BDFFE8u || r_u32(0x8015014Cu) != 0xAFB00010u || r_u32(0x80150150u) != 0x00808021u)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            *result = (uint32)sub_80150148((uint32)args[0]);
            return 1;
        case 0x80150E9Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x80150E9Cu) != 0x27BDFFE0u || r_u32(0x80150EA0u) != 0xAFB10014u || r_u32(0x80150EA4u) != 0x00808821u)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            *result = (uint32)sub_80150E9C((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x80150FBCu:
            if (r_u32(0x80150FBCu) != 0x27BDFFE8u || r_u32(0x80150FC0u) != 0xAFB00010u || r_u32(0x80150FC4u) != 0x3C108013u)
                sf_callback_image_error(target, "INIT.DEP.OVL");
            *result = (uint32)sub_80150FBC();
            return 1;
        case 0x80152D6Cu:
            if (r_u32(0x80152D6Cu) != 0x27BDFF78u || r_u32(0x80152D70u) != 0xAFBF0084u || r_u32(0x80152D74u) != 0xAFBE0080u)
                sf_callback_image_error(target, "INIT.DEP.OVL");
            *result = (uint32)sub_80152D6C();
            return 1;
        case 0x80152EECu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x80152EECu) != 0x27BDFF20u || r_u32(0x80152EF0u) != 0xAFB000B8u || r_u32(0x80152EF4u) != 0x3C108013u)
                sf_callback_image_error(target, "INIT.DEP.OVL");
            sub_80152EEC((uint32)args[0], (uint8)args[1]);
            *result = 0;
            return 1;
        case 0x80153578u:
            if (r_u32(0x80153578u) != 0x27BDFFC0u || r_u32(0x8015357Cu) != 0xAFB30034u || r_u32(0x80153580u) != 0x27B30020u)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            sub_80153578();
            *result = 0;
            return 1;
        case 0x801537ACu:
            if (r_u32(0x801537ACu) != 0x27BDFFD8u || r_u32(0x801537B0u) != 0xAFBF0020u || r_u32(0x801537B4u) != 0x0C00D296u)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            *result = (uint32)sub_801537AC();
            return 1;
        case 0x8015389Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8015389Cu) != 0x27BDFFD8u || r_u32(0x801538A0u) != 0xAFB00018u || r_u32(0x801538A4u) != 0x00808021u)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            *result = (uint32)sub_8015389C((uint32)args[0], (uint8)args[1]);
            return 1;
        case 0x801539A0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x801539A0u) != 0x27BDFFE8u || r_u32(0x801539A4u) != 0x308400FFu || r_u32(0x801539A8u) != 0x10800007u)
                sf_callback_image_error(target, "INIT.DEP.OVL");
            *result = (uint32)sub_801539A0((uint8)args[0]);
            return 1;
        case 0x80153A50u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x80153A50u) != 0x27BDFF80u || r_u32(0x80153A54u) != 0xAFBE0078u || r_u32(0x80153A58u) != 0x0080F021u)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            *result = (uint32)sub_80153A50((uint32)args[0]);
            return 1;
        case 0x80153D88u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x80153D88u) != 0x27BDFF88u || r_u32(0x80153D8Cu) != 0xAFB3006Cu || r_u32(0x80153D90u) != 0x00809821u)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            *result = (uint32)sub_80153D88((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x8015421Cu:
            if (r_u32(0x8015421Cu) != 0x27BDFFB8u || r_u32(0x80154220u) != 0x3C048015u || r_u32(0x80154224u) != 0x2484C4F4u)
                sf_callback_image_error(target, "INIT.DEP.OVL");
            sub_8015421C();
            *result = 0;
            return 1;
        case 0x80148770u:
            if (r_u32(0x80148770u) != 0x27BDFD78u || r_u32(0x80148774u) != 0x24040005u || r_u32(0x80148778u) != 0x24050001u)
                sf_callback_image_error(target, "TITLE.OVL");
            *result = sub_80148770();
            return 1;
        case 0x80148740u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x80148740u) != 0x27BDFFE8u || r_u32(0x80148744u) != 0x10800006u || r_u32(0x80148748u) != 0xAFBF0010u)
                sf_callback_image_error(target, "TITLE.OVL");
            sub_80148740(args[0]);
            *result = 0;
            return 1;
        case 0x8014F818u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8014F818u) != 0x27BDFFE0u || r_u32(0x8014F81Cu) != 0xAFB00010u || r_u32(0x8014F820u) != 0x00808021u)
                sf_callback_image_error(target, "INIT.OVL");
            sub_8014F818(args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x8014FA84u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8014FA84u) != 0x27BDFFE0u || r_u32(0x8014FA88u) != 0xAFB00010u || r_u32(0x8014FA8Cu) != 0x00808021u)
                sf_callback_image_error(target, "INIT.OVL");
            sub_8014FA84(args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x8014F5CCu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8014F5CCu) != 0x27BDFFE0u || r_u32(0x8014F5D0u) != 0xAFB00010u || r_u32(0x8014F5D4u) != 0x00808021u)
                sf_callback_image_error(target, "INIT.OVL");
            sub_8014F5CC(args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x8014F6D0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8014F6D0u) != 0x27BDFFE0u || r_u32(0x8014F6D4u) != 0xAFB10014u || r_u32(0x8014F6D8u) != 0x00808821u)
                sf_callback_image_error(target, "INIT.OVL");
            sub_8014F6D0(args[0]);
            *result = 0;
            return 1;
        case 0x8014F04Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8014F04Cu) != 0x27BDFFD8u || r_u32(0x8014F050u) != 0xAFB00018u || r_u32(0x8014F054u) != 0x00808021u)
                sf_callback_image_error(target, "INIT.OVL");
            sub_8014F04C(args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x8014EED8u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8014EED8u) != 0x00804021u || r_u32(0x8014EEDCu) != 0x3C058011u || r_u32(0x8014EEE0u) != 0x8CA55CCCu)
                sf_callback_image_error(target, "INIT.OVL");
            sub_8014EED8(args[0]);
            *result = 0;
            return 1;
        case 0x8015037Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8015037Cu) != 0x27BDFFE0u || r_u32(0x80150380u) != 0xAFB00010u || r_u32(0x80150384u) != 0x00808021u)
                sf_callback_image_error(target, "INIT.OVL");
            sub_8015037C(args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x8014F400u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8014F400u) != 0x27BDFFE8u || r_u32(0x8014F404u) != 0xAFB00010u || r_u32(0x8014F408u) != 0x00808021u)
                sf_callback_image_error(target, "INIT.OVL");
            sub_8014F400(args[0]);
            *result = 0;
            return 1;
        case 0x8014F344u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x8014F344u) != 0x27BDFFE0u || r_u32(0x8014F348u) != 0xAFB00010u || r_u32(0x8014F34Cu) != 0x00808021u)
                sf_callback_image_error(target, "INIT.OVL");
            sub_8014F344(args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x80147144u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x80147144u) != 0x27BDFF90u || r_u32(0x80147148u) != 0x00802821u || r_u32(0x8014714Cu) != 0xAFBF006Cu)
                sf_callback_image_error(target, "SUBWAY.OVL");
            sf_subway_80147144(args[0]);
            *result = 0;
            return 1;
        case 0x80148ED0u:
            if (r_u32(0x80148ED0u) != 0x27BDFFB8u || r_u32(0x80148ED4u) != 0xAFB7003Cu || r_u32(0x80148ED8u) != 0x0000B821u)
                sf_callback_image_error(target, "SUBWAY.OVL");
            *result = sf_subway_80148ED0();
            return 1;
        case 0x80146CF0u:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            if (r_u32(0x80146CF0u) != 0x27BDFFD0u || r_u32(0x80146CF4u) != 0xAFB40020u || r_u32(0x80146CF8u) != 0x0080A021u)
                sf_callback_image_error(target, "SUBWAY.OVL");
            *result = sf_subway_80146CF0(args[0], args[1], (sint32)args[2], (sint32)args[3], (sint32)args[4]);
            return 1;
        case 0x80147D88u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x80147D88u) != 0x2402FFFFu || r_u32(0x80147D8Cu) != 0x14820003u || r_u32(0x80147D90u) != 0x27BDFFF0u)
                sf_callback_image_error(target, "SUBWAY.OVL");
            *result = (uint32)sf_subway_80147D88(args[0]);
            return 1;
        case 0x8015050Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x8015050Cu) != 0x27BDFFA0u || r_u32(0x80150510u) != 0x00042400u || r_u32(0x80150514u) != 0x00042403u)
                sf_callback_image_error(target, "INIT.MAIN.OVL");
            sub_8015050C((sint16)(uint16)args[0]);
            *result = 0u;
            return 1;
        case 0x80146DA0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            if (r_u32(0x80146DA0u) != 0x27BDFFF8u || r_u32(0x80146DA4u) != 0x00804021u || r_u32(0x80146DA8u) != 0x00005021u)
                sf_callback_image_error(target, "SUBWAY.OVL");
            *result = sf_subway_80146DA0(args[0]);
            return 1;
        case 0x80148BACu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            if (r_u32(0x80148BACu) != 0x27BDFFE8u || r_u32(0x80148BB0u) != 0x00042400u || r_u32(0x80148BB4u) != 0x00042403u)
                sf_callback_image_error(target, "SUBWAY.OVL");
            *result = sf_subway_80148BAC((sint16)args[0]);
            return 1;
        case 0x80146C18u:
            if (r_u32(0x80146C18u) != 0x3C028015u || r_u32(0x80146C1Cu) != 0x904298F4u || r_u32(0x80146C20u) != 0x27BDFFE8u)
                sf_callback_image_error(target, "SUBWAY.OVL");
            *result = sf_subway_80146C18();
            return 1;
        case 0x80147C68u:
            if (r_u32(0x80147C68u) != 0x27BDFFD8u || r_u32(0x80147C6Cu) != 0xAFB00020u || r_u32(0x80147C70u) != 0x3C108015u)
                sf_callback_image_error(target, "SUBWAY.OVL");
            *result = sf_subway_80147C68();
            return 1;
        default:
            return 0;
    }
}

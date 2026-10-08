#include "game_draft.h"
void sf_callback_arity_error(uint32 target, uint32 expected, uint32 received);
void sf_callback_image_error(uint32 target, const char *image);
sint32 sub_800DBF98(sint32 a1, sint32 a2);
sint32 sub_800DBFD4(sint32 a1, sint32 a2, sint32 a3);
sint32 sub_800DC0B8(sint32 a1, uint32 a2, uint32 a3);
sint32 sub_800DC3D0(sint32 a1, sint32 a2);
sint32 sub_800DC40C(uint32 a1, uint32 a2, sint32 a3);
sint32 sub_800DC730(uint32 a1, uint32 a2, uint32 a3);
sint32 sub_800DC780(uint32 a1, uint32 a2, uint32 a3);
sint32 sub_800DC8AC(uint32 a1, sint32 a2, sint32 a3);
sint32 sub_800DCB1C(uint32 a1, uint32 a2, uint32 a3);
sint32 sub_800DCB6C(uint32 a1, uint32 a2, uint32 a3);
sint32 sub_800DCBBC(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a9);
sint32 sub_800DCEDC(sint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a9);
sint32 sub_800DD0DC(sint32 a1, uint32 a2, uint32 a3, sint32 a4);
sint32 sub_800DD8C0(sint32 a1, uint32 a2, uint32 a3, uint32 a4);
sint32 sub_800DD950(sint32 a1, uint32 a2, uint32 a3, sint32 a4);
uint32 sub_800DDB88(uint32 value);
sint32 sub_800DDD24(sint32 a1);
sint32 sub_800DDF84(sint32 a1);
sint32 sub_800DE120(sint32 a1, sint32 a2, sint16 a3, sint16 a4, sint32 a9, sint16 a10);
sint32 sub_800DE2DC(sint32 a1, uint32 a2);
sint32 sub_800DE31C(uint32 a1, sint32 a2);
uint32 sub_800DE388(uint32 address);
void sub_800DE3B4(sint32 a1);
uint32 sub_800DE3FC(void);
uint32 sub_800DE414(sint32 a1);
void sub_800DE4A4(sint32 a1);
void sub_800DE4EC(sint32 a1);
sint32 sub_800DE4F8(void);
uint32 sub_800DE504(void);
sint32 sub_800DE5A0(uint32 a1, uint32 a2, sint32 a3);
sint32 sub_800DE5E0(uint32 a1, sint32 a2);
sint32 sub_800DE644(uint32 a1, sint32 i, sint32 a3);
uint32 sub_800DE6E0(uint32 a1, uint32 a2);
sint32 sub_800DEB50(sint32 a1, sint32 a2);
sint32 sub_800DEC48(void);
sint32 sub_800DEC7C(sint32 a1);
uint32 sub_800DED2C(void);
sint32 sub_800DEDB4(sint32 a1);
sint32 sub_800DEEF4(sint32 a1, uint32 a2);
sint32 sub_800DF148(sint32 a1, uint32 a2);
sint32 sub_800DF198(sint32 a1, sint32 a2, uint32 a3, uint32 a4);
sint32 sub_800DF32C(uint32 a1);
sint32 sub_800DF3B0(sint32 a1);
uint32 sub_800DF43C(uint32 context);
sint32 sub_800DF464(void);
sint32 sub_800DF600(sint32 a1, sint8 a2, sint32 a3);
sint32 sub_800DF6EC(sint8 a1);
sint32 sub_800DF83C(sint32 handle, sint32 count, uint32 destination, sint32 mode, sint32 extra);
sint32 sub_800DF99C(sint32 a1, sint32 a2, uint32 a3);
sint32 sub_800DFB74(uint32 a1, sint32 a2, uint32 a3);
sint32 sub_800DFC64(uint32 a1);
sint32 sub_800DFCD0(uint32 a1);
sint32 sub_800DFCF4(uint32 a1, sint32 a2, uint32 a3);
sint32 sub_800DFD64(sint32 a1, sint32 a2, uint32 a3);
sint32 sub_800DFF9C(uint32 a1, sint32 a2, uint32 a3);
sint32 sub_800E0220(uint32 a1, uint32 a2, uint32 a3);
sint32 sub_800E0364(uint32 a1, uint32 a2, uint32 a3);
sint32 sub_800E098C(uint32 a1, sint32 a2, uint32 a3);
sint32 sub_800E0A8C(uint32 a1, sint32 a2, uint32 a3);
sint32 sub_800E0B8C(uint32 a1, uint32 a2);
sint32 sub_800E0C00(uint32 a1, uint32 a2);
sint32 sub_800E0D14(uint32 a1, uint32 a2);
sint32 sub_800E0E88(uint32 a1, uint32 a2);
sint32 sub_800E0FE8(sint32 a1, uint32 a2);
sint32 sub_800E1088(uint32 a1, sint32 a2, uint32 a3);
sint32 sub_800E1244(uint32 a1, sint32 a2, uint32 a3);
sint32 sub_800E1480(sint32 a1, sint32 a2, sint32 a3, uint32 a4, uint32 a9, uint32 a10);
sint32 sub_800E1E64(uint32 a1, uint32 a2, uint32 a3, uint32 a4);
sint32 sub_800E2004(uint32 a1, uint32 a2, uint32 a3, uint32 a4);
sint32 sub_800E22F0(sint32 a1, sint32 a2, uint32 a3);
uint32 sub_800E3F34(void);
void sub_800E3F44(void);
uint32 sub_800E3F54(sint32 mode);
uint32 sub_800E4184(void);
uint32 sub_800E41B4(sint32 irq_index, uint32 callback);
uint32 sub_800E4250(uint32 callback_table);
uint32 sub_800E4C54(uint32 value);
uint32 sub_800E4C68(void);
sint32 sub_800E4C84(sint32 mode);
void sub_800E4F68(sint32 mask);
sint32 sub_800E5000(sint32 a1);
sint32 sub_800E52AC(uint32 a1, sint32 a2);
uint32 sub_800E55F4(uint32 ordering_table);
uint32 sub_800E5664(uint32 draw_environment);
uint32 sub_800E5830(uint32 display_environment);
uint32 sub_800E5D28(uint32 destination);
sint32 sub_800E5ED4(sint32 a1, sint32 a2, sint32 a3, uint16 a4, sint32 a9);
uint32 sub_800E7CA4(void);
sint32 sub_800E7F14(sint8 a1, sint8 a2, sint16 a3, sint16 a4);
uint32 sub_800E7F54(uint32 ordering_tag, uint32 packet);
sint32 sub_800E7F94(sint32 a1, sint32 a2, sint32 a3, sint16 a4);
void sub_800E8024(uint32 primitive, uint32 ordering_table, uint16 depth);
void sub_800E81D4(uint32 box, uint32 ordering_table, uint16 depth);
void sub_800E82B4(sint32 a1, sint32 a2, uint16 a3);
void sub_800E87B4(sint32 a1, sint32 a2, uint16 a3);
uint32 sub_800E8D4C(uint8 red, uint8 green, uint8 blue, uint32 ordering_table);
void sub_800E8E94(void);
void sub_800E8FA4(void);
void sub_800E9024(void);
uint32 sub_800E90D4(uint32 parent, uint32 output);
sint32 sub_800E92F0(uint32 a1, uint32 a2);
void sub_800E95B4(sint32 screen);
sint32 sub_800E9C14(sint32 a1);
uint32 sub_800E9C44(uint16 a1, uint16 a2, uint32 a3);
uint32 sub_800E9DB4(uint32 data, uint32 descriptor);
void sub_800E9F74(sint32 a1);
sint32 sub_800E9F84(uint32 a1);
sint32 sub_800EA0E4(uint32 a1, uint32 a2);
sint32 sub_800EA3A4(sint32 angle);
sint32 sub_800EA474(sint32 a1);
uint32 sub_800EA904(sint32 value);
uint32 sub_800EADF4(uint32 a1, uint32 a2, uint32 a3);
uint32 sub_800EB5A4(uint32 a1, uint32 a2);
void sub_800EB714(uint32 matrix);
void sub_800EB7A4(uint32 matrix);
sint32 sub_800EB8D4(void);
void sub_800EB904(uint32 x, uint32 y);
void sub_800EBA78(uint32 left, uint32 right, uint32 output);
void sub_800EBAD0(uint32 left, uint32 right, uint32 output);
sint32 sub_800EBBC4(uint32 a1, sint32 a2);
uint32 sub_800EBE94(uint32 a1, uint32 a2);
sint32 sub_800EC124(sint32 a1, sint32 a2);
sint32 sub_800EC884(uint32 left, uint32 right);
uint32 sub_800EC894(uint32 destination, uint32 source);
sint32 sub_800EC8A4(uint32 string);
uint32 sub_800EC8B4(uint32 string, sint32 character);
uint32 sub_800EC8C4(uint32 string, sint32 character);
uint32 sub_800EC8D4(uint32 destination, uint32 source, uint32 size);
uint32 sub_800EC8E4(uint32 destination, uint32 value, uint32 size);
uint32 sub_800EC8F4(void);
void sub_800EC904(uint32 seed);
sint32 sub_800ED578(sint32 mode, uint32 result);
uint32 sub_800ED5AC(uint32 callback);
sint32 sub_800ED5C0(uint8 a1, sint32 a2, sint32 a3);
uint32 sub_800ED6FC(uint8 command, uint32 parameter);
sint32 sub_800ED99C(uint32 destination, uint32 words);
uint32 sub_800ED9DC(uint32 callback);
uint32 sub_800EDA20(sint32 sector, uint32 position);
sint32 sub_800EDB24(uint32 a1);
uint32 sub_800EDBA4(void);
uint32 sub_800EF304(uint32 destination, uint32 filename);
sint32 sub_800EFC84(void);
uint32 sub_800F0384(sint32 count, uint32 destination, sint32 mode);
sint32 sub_800F0520(sint32 mode, uint32 result);
void sub_800F0764(void);
void sub_800F0B14(sint32 a1, sint32 a2, sint32 a3);
sint32 sub_800F1624(sint32 mode);
uint32 sub_800F1FF8(uint32 a1, uint32 a2);
uint32 sub_800F2124(sint32 selector, uint32 address);
void sub_800F2314(sint32 mode);
uint32 sub_800F2A94(void);
sint32 sub_800F2B84(void);
void sub_800F2BC4(void);
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
sint32 sub_800F74BC(sint16 a1, sint16 a2);
sint32 sub_800F74F4(sint32 a1, sint16 a2, sint16 a3);
void sub_800F7604(uint32 sequence_table, sint16 sequences, sint16 tracks);
void sub_800F7824(sint32 tick_mode);
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
sint32 sub_800FE7E4(sint32 mode);
sint32 sub_800FF454(void);
sint32 sub_800FF4E0(uint32 context);
sint32 sub_800FFC10(void);
sint32 sub_80100F64(sint32 a1);
sint32 sub_80101554(sint32 a1, sint32 a2);
sint32 sub_8013E258(sint32 a1);
sint32 sub_8013E27C(sint32 a1);
sint32 sub_8013E28C(uint32 a1, sint32 a2, sint32 a3, sint32 a4, sint32 a9, uint32 a10, sint32 a11);
sint32 sub_8013E578(void);
sint32 sub_8013E8F4(void);
uint32 sub_8013F4E0(uint32 mode);
sint32 sub_801406FC(sint32 mode, uint32 event, uint32 value);
sint32 sub_80149CF4(void);
sint32 sub_8014D270(uint32 path);
sint32 sub_8014D4F4(sint16 offset);
sint32 sub_8014D7AC(sint32 a1);
sint32 sub_8014E1B8(uint8 a1, sint32 a2);
sint32 sub_801539A0(uint8 common);
sint32 sf_callbacks_page_4(uint32 target, uint32 argc, const uint32 *args, uint32 *result)
{
    switch (target) {
    case 0x800DBF98u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800DBF98((sint32)args[0], (sint32)args[1]);
        return 1;
    case 0x800DBFD4u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DBFD4((sint32)args[0], (sint32)args[1], (sint32)args[2]);
        return 1;
    case 0x800DC0B8u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DC0B8((sint32)args[0], (uint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800DC3D0u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800DC3D0((sint32)args[0], (sint32)args[1]);
        return 1;
    case 0x800DC40Cu:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DC40C((uint32)args[0], (uint32)args[1], (sint32)args[2]);
        return 1;
    case 0x800DC730u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DC730((uint32)args[0], (uint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800DC780u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DC780((uint32)args[0], (uint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800DC8ACu:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DC8AC((uint32)args[0], (sint32)args[1], (sint32)args[2]);
        return 1;
    case 0x800DCB1Cu:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DCB1C((uint32)args[0], (uint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800DCB6Cu:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DCB6C((uint32)args[0], (uint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800DCBBCu:
        if (argc < 5u) sf_callback_arity_error(target, 5u, argc);
        *result = (uint32)sub_800DCBBC((uint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3], (uint32)args[4]);
        return 1;
    case 0x800DCEDCu:
        if (argc < 5u) sf_callback_arity_error(target, 5u, argc);
        *result = (uint32)sub_800DCEDC((sint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3], (uint32)args[4]);
        return 1;
    case 0x800DD0DCu:
        if (argc < 4u) sf_callback_arity_error(target, 4u, argc);
        *result = (uint32)sub_800DD0DC((sint32)args[0], (uint32)args[1], (uint32)args[2], (sint32)args[3]);
        return 1;
    case 0x800DD8C0u:
        if (argc < 4u) sf_callback_arity_error(target, 4u, argc);
        *result = (uint32)sub_800DD8C0((sint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3]);
        return 1;
    case 0x800DD950u:
        if (argc < 4u) sf_callback_arity_error(target, 4u, argc);
        *result = (uint32)sub_800DD950((sint32)args[0], (uint32)args[1], (uint32)args[2], (sint32)args[3]);
        return 1;
    case 0x800DDB88u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800DDB88((uint32)args[0]);
        return 1;
    case 0x800DDD24u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800DDD24((sint32)args[0]);
        return 1;
    case 0x800DDF84u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800DDF84((sint32)args[0]);
        return 1;
    case 0x800DE120u:
        if (argc < 6u) sf_callback_arity_error(target, 6u, argc);
        *result = (uint32)sub_800DE120((sint32)args[0], (sint32)args[1], (sint16)args[2], (sint16)args[3], (sint32)args[4], (sint16)args[5]);
        return 1;
    case 0x800DE2DCu:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800DE2DC((sint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800DE31Cu:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800DE31C((uint32)args[0], (sint32)args[1]);
        return 1;
    case 0x800DE388u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800DE388((uint32)args[0]);
        return 1;
    case 0x800DE3B4u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800DE3B4((sint32)args[0]); *result = 0;
        return 1;
    case 0x800DE3FCu:
        *result = (uint32)sub_800DE3FC();
        return 1;
    case 0x800DE414u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800DE414((sint32)args[0]);
        return 1;
    case 0x800DE4A4u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800DE4A4((sint32)args[0]); *result = 0;
        return 1;
    case 0x800DE4ECu:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800DE4EC((sint32)args[0]); *result = 0;
        return 1;
    case 0x800DE4F8u:
        *result = (uint32)sub_800DE4F8();
        return 1;
    case 0x800DE504u:
        *result = (uint32)sub_800DE504();
        return 1;
    case 0x800DE5A0u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DE5A0((uint32)args[0], (uint32)args[1], (sint32)args[2]);
        return 1;
    case 0x800DE5E0u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800DE5E0((uint32)args[0], (sint32)args[1]);
        return 1;
    case 0x800DE644u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DE644((uint32)args[0], (sint32)args[1], (sint32)args[2]);
        return 1;
    case 0x800DE6E0u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800DE6E0((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800DEB50u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800DEB50((sint32)args[0], (sint32)args[1]);
        return 1;
    case 0x800DEC48u:
        *result = (uint32)sub_800DEC48();
        return 1;
    case 0x800DEC7Cu:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800DEC7C((sint32)args[0]);
        return 1;
    case 0x800DED2Cu:
        *result = (uint32)sub_800DED2C();
        return 1;
    case 0x800DEDB4u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800DEDB4((sint32)args[0]);
        return 1;
    case 0x800DEEF4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800DEEF4((sint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800DF148u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800DF148((sint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800DF198u:
        if (argc < 4u) sf_callback_arity_error(target, 4u, argc);
        *result = (uint32)sub_800DF198((sint32)args[0], (sint32)args[1], (uint32)args[2], (uint32)args[3]);
        return 1;
    case 0x800DF32Cu:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800DF32C((uint32)args[0]);
        return 1;
    case 0x800DF3B0u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800DF3B0((sint32)args[0]);
        return 1;
    case 0x800DF43Cu:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800DF43C((uint32)args[0]);
        return 1;
    case 0x800DF464u:
        *result = (uint32)sub_800DF464();
        return 1;
    case 0x800DF600u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DF600((sint32)args[0], (sint8)args[1], (sint32)args[2]);
        return 1;
    case 0x800DF6ECu:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800DF6EC((sint8)args[0]);
        return 1;
    case 0x800DF83Cu:
        if (argc < 5u) sf_callback_arity_error(target, 5u, argc);
        *result = (uint32)sub_800DF83C((sint32)args[0], (sint32)args[1], (uint32)args[2], (sint32)args[3], (sint32)args[4]);
        return 1;
    case 0x800DF99Cu:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DF99C((sint32)args[0], (sint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800DFB74u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DFB74((uint32)args[0], (sint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800DFC64u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800DFC64((uint32)args[0]);
        return 1;
    case 0x800DFCD0u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800DFCD0((uint32)args[0]);
        return 1;
    case 0x800DFCF4u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DFCF4((uint32)args[0], (sint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800DFD64u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DFD64((sint32)args[0], (sint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800DFF9Cu:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800DFF9C((uint32)args[0], (sint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800E0220u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800E0220((uint32)args[0], (uint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800E0364u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800E0364((uint32)args[0], (uint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800E098Cu:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800E098C((uint32)args[0], (sint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800E0A8Cu:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800E0A8C((uint32)args[0], (sint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800E0B8Cu:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800E0B8C((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800E0C00u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800E0C00((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800E0D14u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800E0D14((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800E0E88u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800E0E88((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800E0FE8u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800E0FE8((sint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800E1088u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800E1088((uint32)args[0], (sint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800E1244u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800E1244((uint32)args[0], (sint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800E1480u:
        if (argc < 6u) sf_callback_arity_error(target, 6u, argc);
        *result = (uint32)sub_800E1480((sint32)args[0], (sint32)args[1], (sint32)args[2], (uint32)args[3], (uint32)args[4], (uint32)args[5]);
        return 1;
    case 0x800E1E64u:
        if (argc < 4u) sf_callback_arity_error(target, 4u, argc);
        *result = (uint32)sub_800E1E64((uint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3]);
        return 1;
    case 0x800E2004u:
        if (argc < 4u) sf_callback_arity_error(target, 4u, argc);
        *result = (uint32)sub_800E2004((uint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3]);
        return 1;
    case 0x800E22F0u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800E22F0((sint32)args[0], (sint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800E3F34u:
        *result = (uint32)sub_800E3F34();
        return 1;
    case 0x800E3F44u:
        sub_800E3F44(); *result = 0;
        return 1;
    case 0x800E3F54u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800E3F54((sint32)args[0]);
        return 1;
    case 0x800E4184u:
        *result = (uint32)sub_800E4184();
        return 1;
    case 0x800E41B4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800E41B4((sint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800E4250u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800E4250((uint32)args[0]);
        return 1;
    case 0x800E4C54u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800E4C54((uint32)args[0]);
        return 1;
    case 0x800E4C68u:
        *result = (uint32)sub_800E4C68();
        return 1;
    case 0x800E4C84u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800E4C84((sint32)args[0]);
        return 1;
    case 0x800E4F68u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800E4F68((sint32)args[0]); *result = 0;
        return 1;
    case 0x800E5000u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800E5000((sint32)args[0]);
        return 1;
    case 0x800E52ACu:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800E52AC((uint32)args[0], (sint32)args[1]);
        return 1;
    case 0x800E55F4u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800E55F4((uint32)args[0]);
        return 1;
    case 0x800E5664u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800E5664((uint32)args[0]);
        return 1;
    case 0x800E5830u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800E5830((uint32)args[0]);
        return 1;
    case 0x800E5D28u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800E5D28((uint32)args[0]);
        return 1;
    case 0x800E5ED4u:
        if (argc < 5u) sf_callback_arity_error(target, 5u, argc);
        *result = (uint32)sub_800E5ED4((sint32)args[0], (sint32)args[1], (sint32)args[2], (uint16)args[3], (sint32)args[4]);
        return 1;
    case 0x800E7CA4u:
        *result = (uint32)sub_800E7CA4();
        return 1;
    case 0x800E7F14u:
        if (argc < 4u) sf_callback_arity_error(target, 4u, argc);
        *result = (uint32)sub_800E7F14((sint8)args[0], (sint8)args[1], (sint16)args[2], (sint16)args[3]);
        return 1;
    case 0x800E7F54u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800E7F54((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800E7F94u:
        if (argc < 4u) sf_callback_arity_error(target, 4u, argc);
        *result = (uint32)sub_800E7F94((sint32)args[0], (sint32)args[1], (sint32)args[2], (sint16)args[3]);
        return 1;
    case 0x800E8024u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        sub_800E8024((uint32)args[0], (uint32)args[1], (uint16)args[2]); *result = 0;
        return 1;
    case 0x800E81D4u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        sub_800E81D4((uint32)args[0], (uint32)args[1], (uint16)args[2]); *result = 0;
        return 1;
    case 0x800E82B4u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        sub_800E82B4((sint32)args[0], (sint32)args[1], (uint16)args[2]); *result = 0;
        return 1;
    case 0x800E87B4u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        sub_800E87B4((sint32)args[0], (sint32)args[1], (uint16)args[2]); *result = 0;
        return 1;
    case 0x800E8D4Cu:
        if (argc < 4u) sf_callback_arity_error(target, 4u, argc);
        *result = (uint32)sub_800E8D4C((uint8)args[0], (uint8)args[1], (uint8)args[2], (uint32)args[3]);
        return 1;
    case 0x800E8E94u:
        sub_800E8E94(); *result = 0;
        return 1;
    case 0x800E8FA4u:
        sub_800E8FA4(); *result = 0;
        return 1;
    case 0x800E9024u:
        sub_800E9024(); *result = 0;
        return 1;
    case 0x800E90D4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800E90D4((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800E92F0u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800E92F0((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800E95B4u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800E95B4((sint32)args[0]); *result = 0;
        return 1;
    case 0x800E9C14u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800E9C14((sint32)args[0]);
        return 1;
    case 0x800E9C44u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800E9C44((uint16)args[0], (uint16)args[1], (uint32)args[2]);
        return 1;
    case 0x800E9DB4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800E9DB4((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800E9F74u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800E9F74((sint32)args[0]); *result = 0;
        return 1;
    case 0x800E9F84u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800E9F84((uint32)args[0]);
        return 1;
    case 0x800EA0E4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800EA0E4((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800EA3A4u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800EA3A4((sint32)args[0]);
        return 1;
    case 0x800EA474u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800EA474((sint32)args[0]);
        return 1;
    case 0x800EA904u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800EA904((sint32)args[0]);
        return 1;
    case 0x800EADF4u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800EADF4((uint32)args[0], (uint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800EB5A4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800EB5A4((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800EB714u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800EB714((uint32)args[0]); *result = 0;
        return 1;
    case 0x800EB7A4u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800EB7A4((uint32)args[0]); *result = 0;
        return 1;
    case 0x800EB8D4u:
        *result = (uint32)sub_800EB8D4();
        return 1;
    case 0x800EB904u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        sub_800EB904((uint32)args[0], (uint32)args[1]); *result = 0;
        return 1;
    case 0x800EBA78u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        sub_800EBA78((uint32)args[0], (uint32)args[1], (uint32)args[2]); *result = 0;
        return 1;
    case 0x800EBAD0u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        sub_800EBAD0((uint32)args[0], (uint32)args[1], (uint32)args[2]); *result = 0;
        return 1;
    case 0x800EBBC4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800EBBC4((uint32)args[0], (sint32)args[1]);
        return 1;
    case 0x800EBE94u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800EBE94((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800EC124u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800EC124((sint32)args[0], (sint32)args[1]);
        return 1;
    case 0x800EC884u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800EC884((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800EC894u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800EC894((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800EC8A4u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800EC8A4((uint32)args[0]);
        return 1;
    case 0x800EC8B4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800EC8B4((uint32)args[0], (sint32)args[1]);
        return 1;
    case 0x800EC8C4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800EC8C4((uint32)args[0], (sint32)args[1]);
        return 1;
    case 0x800EC8D4u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800EC8D4((uint32)args[0], (uint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800EC8E4u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800EC8E4((uint32)args[0], (uint32)args[1], (uint32)args[2]);
        return 1;
    case 0x800EC8F4u:
        *result = (uint32)sub_800EC8F4();
        return 1;
    case 0x800EC904u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800EC904((uint32)args[0]); *result = 0;
        return 1;
    case 0x800ED578u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800ED578((sint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800ED5ACu:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800ED5AC((uint32)args[0]);
        return 1;
    case 0x800ED5C0u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800ED5C0((uint8)args[0], (sint32)args[1], (sint32)args[2]);
        return 1;
    case 0x800ED6FCu:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800ED6FC((uint8)args[0], (uint32)args[1]);
        return 1;
    case 0x800ED99Cu:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800ED99C((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800ED9DCu:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800ED9DC((uint32)args[0]);
        return 1;
    case 0x800EDA20u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800EDA20((sint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800EDB24u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800EDB24((uint32)args[0]);
        return 1;
    case 0x800EDBA4u:
        *result = (uint32)sub_800EDBA4();
        return 1;
    case 0x800EF304u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800EF304((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800EFC84u:
        *result = (uint32)sub_800EFC84();
        return 1;
    case 0x800F0384u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800F0384((sint32)args[0], (uint32)args[1], (sint32)args[2]);
        return 1;
    case 0x800F0520u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800F0520((sint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800F0764u:
        sub_800F0764(); *result = 0;
        return 1;
    case 0x800F0B14u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        sub_800F0B14((sint32)args[0], (sint32)args[1], (sint32)args[2]); *result = 0;
        return 1;
    case 0x800F1624u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800F1624((sint32)args[0]);
        return 1;
    case 0x800F1FF8u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800F1FF8((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800F2124u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800F2124((sint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800F2314u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800F2314((sint32)args[0]); *result = 0;
        return 1;
    case 0x800F2A94u:
        *result = (uint32)sub_800F2A94();
        return 1;
    case 0x800F2B84u:
        *result = (uint32)sub_800F2B84();
        return 1;
    case 0x800F2BC4u:
        sub_800F2BC4(); *result = 0;
        return 1;
    case 0x800F5C64u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800F5C64((sint32)args[0], (sint8)args[1], (sint8)args[2]);
        return 1;
    case 0x800F5D24u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800F5D24((uint32)args[0]); *result = 0;
        return 1;
    case 0x800F60A4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        sub_800F60A4((sint16)args[0], (sint16)args[1]); *result = 0;
        return 1;
    case 0x800F60F4u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800F60F4((sint32)args[0]); *result = 0;
        return 1;
    case 0x800F6324u:
        sub_800F6324(); *result = 0;
        return 1;
    case 0x800F6404u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800F6404((uint32)args[0], (uint16)args[1], (uint32)args[2]);
        return 1;
    case 0x800F653Cu:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800F653C((uint32)args[0]);
        return 1;
    case 0x800F6574u:
        *result = (uint32)sub_800F6574();
        return 1;
    case 0x800F6A94u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800F6A94((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800F72B4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800F72B4((sint32)args[0], (sint16)args[1]);
        return 1;
    case 0x800F74BCu:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800F74BC((sint16)args[0], (sint16)args[1]);
        return 1;
    case 0x800F74F4u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800F74F4((sint32)args[0], (sint16)args[1], (sint16)args[2]);
        return 1;
    case 0x800F7604u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        sub_800F7604((uint32)args[0], (sint16)args[1], (sint16)args[2]); *result = 0;
        return 1;
    case 0x800F7824u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800F7824((sint32)args[0]); *result = 0;
        return 1;
    case 0x800F7BC4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800F7BC4((sint32)args[0], (sint16)args[1]);
        return 1;
    case 0x800F7F94u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800F7F94((uint32)args[0]); *result = 0;
        return 1;
    case 0x800F9AA4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800F9AA4((sint16)args[0], (sint16)args[1]);
        return 1;
    case 0x800F9B34u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800F9B34((sint16)args[0]);
        return 1;
    case 0x800F9BE4u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800F9BE4((sint32)args[0]);
        return 1;
    case 0x800F9CF4u:
        *result = (uint32)sub_800F9CF4();
        return 1;
    case 0x800F9D14u:
        *result = (uint32)sub_800F9D14();
        return 1;
    case 0x800FA304u:
        sub_800FA304(); *result = 0;
        return 1;
    case 0x800FA324u:
        *result = (uint32)sub_800FA324();
        return 1;
    case 0x800FACB4u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800FACB4((sint32)args[0]); *result = 0;
        return 1;
    case 0x800FB004u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800FB004((sint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800FB064u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800FB064((sint32)args[0]);
        return 1;
    case 0x800FB08Cu:
        *result = (uint32)sub_800FB08C();
        return 1;
    case 0x800FC2F4u:
        sub_800FC2F4(); *result = 0;
        return 1;
    case 0x800FDB84u:
        sub_800FDB84(); *result = 0;
        return 1;
    case 0x800FDC14u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        sub_800FDC14((uint32)args[0]); *result = 0;
        return 1;
    case 0x800FDF94u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800FDF94((uint32)args[0], (sint16)args[1], (uint32)args[2]);
        return 1;
    case 0x800FDFFCu:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800FDFFC((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800FE004u:
        if (argc < 4u) sf_callback_arity_error(target, 4u, argc);
        *result = (uint32)sub_800FE004((uint32)args[0], (sint32)args[1], (uint32)args[2], (uint32)args[3]);
        return 1;
    case 0x800FE3E4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800FE3E4((uint32)args[0], (uint16)args[1]);
        return 1;
    case 0x800FE4A4u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800FE4A4((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800FE504u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800FE504((uint32)args[0]);
        return 1;
    case 0x800FE564u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800FE564((sint32)args[0]);
        return 1;
    case 0x800FE594u:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        *result = (uint32)sub_800FE594((uint32)args[0], (uint32)args[1], (sint16)args[2]);
        return 1;
    case 0x800FE724u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_800FE724((uint32)args[0], (uint32)args[1]);
        return 1;
    case 0x800FE7E4u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800FE7E4((sint32)args[0]);
        return 1;
    case 0x800FF454u:
        *result = (uint32)sub_800FF454();
        return 1;
    case 0x800FF4E0u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_800FF4E0((uint32)args[0]);
        return 1;
    case 0x800FFC10u:
        *result = (uint32)sub_800FFC10();
        return 1;
    case 0x80100F64u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        *result = (uint32)sub_80100F64((sint32)args[0]);
        return 1;
    case 0x80101554u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        *result = (uint32)sub_80101554((sint32)args[0], (sint32)args[1]);
        return 1;
    case 0x8013E258u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        if (r_u32(0x8013E258u) != 0x308400FFu || r_u32(0x8013E25Cu) != 0x24020001u || r_u32(0x8013E260u) != 0x14820002u) sf_callback_image_error(target, "MOVIE.OVL");
        *result = (uint32)sub_8013E258((sint32)args[0]);
        return 1;
    case 0x8013E27Cu:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        if (r_u32(0x8013E27Cu) != 0x3C018014u || r_u32(0x8013E280u) != 0xAC241A14u || r_u32(0x8013E284u) != 0x03E00008u) sf_callback_image_error(target, "MOVIE.OVL");
        *result = (uint32)sub_8013E27C((sint32)args[0]);
        return 1;
    case 0x8013E28Cu:
        if (argc < 7u) sf_callback_arity_error(target, 7u, argc);
        if (r_u32(0x8013E28Cu) != 0x27BDFFC8u || r_u32(0x8013E290u) != 0xAFB60030u || r_u32(0x8013E294u) != 0x8FB60048u) sf_callback_image_error(target, "MOVIE.OVL");
        *result = (uint32)sub_8013E28C((uint32)args[0], (sint32)args[1], (sint32)args[2], (sint32)args[3], (sint32)args[4], (uint32)args[5], (sint32)args[6]);
        return 1;
    case 0x8013E578u:
        if (r_u32(0x8013E578u) != 0x3C028014u || r_u32(0x8013E57Cu) != 0x90421A20u || r_u32(0x8013E580u) != 0x27BDFFE0u) sf_callback_image_error(target, "MOVIE.OVL");
        *result = (uint32)sub_8013E578();
        return 1;
    case 0x8013E8F4u:
        if (r_u32(0x8013E8F4u) != 0x3C028014u || r_u32(0x8013E8F8u) != 0x90421A20u || r_u32(0x8013E8FCu) != 0x27BDFFE8u) sf_callback_image_error(target, "MOVIE.OVL");
        *result = (uint32)sub_8013E8F4();
        return 1;
    case 0x8013F4E0u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        if (r_u32(0x8013F4E0u) != 0x27BDFFE8u || r_u32(0x8013F4E4u) != 0xAFBF0010u || r_u32(0x8013F4E8u) != 0x3C018014u) sf_callback_image_error(target, "MOVIE.OVL");
        *result = (uint32)sub_8013F4E0((uint32)args[0]);
        return 1;
    case 0x801406FCu:
        if (argc < 3u) sf_callback_arity_error(target, 3u, argc);
        if (r_u32(0x801406FCu) != 0x3C038014u || r_u32(0x80140700u) != 0x24632A3Cu || r_u32(0x80140704u) != 0x8C620000u) sf_callback_image_error(target, "MOVIE.EXTRA.OVL");
        *result = (uint32)sub_801406FC((sint32)args[0], (uint32)args[1], (uint32)args[2]);
        return 1;
    case 0x80149CF4u:
        if (r_u32(0x80149CF4u) != 0x27BDFFD0u || r_u32(0x80149CF8u) != 0xAFBF002Cu || r_u32(0x80149CFCu) != 0xAFB20028u) sf_callback_image_error(target, "TITLE.OVL");
        *result = (uint32)sub_80149CF4();
        return 1;
    case 0x8014D270u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        if (r_u32(0x8014D270u) != 0x27BDFF78u || r_u32(0x8014D274u) != 0xAFB40080u || r_u32(0x8014D278u) != 0x0080A021u) sf_callback_image_error(target, "INIT.DEP.OVL");
        *result = (uint32)sub_8014D270((uint32)args[0]);
        return 1;
    case 0x8014D4F4u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        if (r_u32(0x8014D4F4u) != 0x27BDFFD8u || r_u32(0x8014D4F8u) != 0x3C038011u || r_u32(0x8014D4FCu) != 0x8C636984u) sf_callback_image_error(target, "INIT.DEP.OVL");
        *result = (uint32)sub_8014D4F4((sint16)args[0]);
        return 1;
    case 0x8014D7ACu:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        if (r_u32(0x8014D7ACu) != 0x27BDFF08u || r_u32(0x8014D7B0u) != 0xAFB300ECu || r_u32(0x8014D7B4u) != 0x00809821u) sf_callback_image_error(target, "INIT.OVL");
        *result = (uint32)sub_8014D7AC((sint32)args[0]);
        return 1;
    case 0x8014E1B8u:
        if (argc < 2u) sf_callback_arity_error(target, 2u, argc);
        if (r_u32(0x8014E1B8u) != 0x27BDFFA8u || r_u32(0x8014E1BCu) != 0xAFBE0050u || r_u32(0x8014E1C0u) != 0x00A0F021u) sf_callback_image_error(target, "INIT.OVL");
        *result = (uint32)sub_8014E1B8((uint8)args[0], (sint32)args[1]);
        return 1;
    case 0x801539A0u:
        if (argc < 1u) sf_callback_arity_error(target, 1u, argc);
        if (r_u32(0x801539A0u) != 0x27BDFFE8u || r_u32(0x801539A4u) != 0x308400FFu || r_u32(0x801539A8u) != 0x10800007u) sf_callback_image_error(target, "INIT.DEP.OVL");
        *result = (uint32)sub_801539A0((uint8)args[0]);
        return 1;
    default: return 0;
    }
}

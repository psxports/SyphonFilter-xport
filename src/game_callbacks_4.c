#include "game_draft.h"
void sf_callback_arity_error(uint32 target, uint32 expected, uint32 received);
void sf_callback_image_error(uint32 target, const char *image);
void sub_800D69D8(sint32 _$A0, sint32 a2, sint32 a3, uint32 a4);
sint32 sub_800D6B04(sint32 a1);
sint32 sub_800D6C14(sint32 a1, sint32 a2, sint32 a3);
sint32 sub_800D6F50(uint32 a1, sint32 a2);
void sub_800D7110(uint32 polygon, uint32 *cursor, uint32 ordering_table, uint32 depth_flags);
uint32 sub_800D7614(void);
uint32 sub_800D769C(void);
uint32 sub_800D7758(uint32 value);
uint32 sub_800D77A0(uint32 width, uint32 height, uint32 mode);
sint32 sub_800D7854(sint32 a1, sint32 a2, uint32 a3);
uint32 sub_800D7930(uint32 color);
sint32 sub_800D79E8(uint32 a1);
sint32 sub_800D7A14(uint32 result);
sint32 sub_800D7A28(sint32 a1, sint32 a2);
uint32 sub_800D7A4C(uint16 *screen_x, uint16 *screen_y);
uint32 sub_800D7AAC(void);
sint32 sub_800D7AEC(sint32 a1, uint32 a2, sint32 a3);
uint32 sub_800D837C(void);
uint32 sub_800D84E8(uint32 *output, uint32 port);
sint32 sub_800D85BC(sint32 a1, uint32 a2, uint32 a3);
sint32 sub_800D87E0(void);
uint32 sub_800D88FC(void);
sint32 sub_800D8930(sint32 a1, sint32 a2, uint32 a3);
sint32 sub_800D89D8(sint32 a1);
sint32 sub_800D8B38(uint32 *descriptor_output);
uint32 sub_800D8B4C(void);
uint32 sub_800D8B9C(uint32 a1, sint32 a2, sint32 a3);
sint32 sub_800D8CDC(uint32 a1, sint32 a2, sint32 a3, sint32 a4);
uint32 sub_800D8DE8(uint32 a1, sint32 a2);
sint32 sub_800D8ED0(uint32 a1, uint32 a2);
sint32 sub_800D9054(void);
sint32 sub_800D9110(uint32 a1, sint32 a2, sint32 a3, uint32 a4, uint32 a9, sint32 a10);
sint32 sub_800D92F0(sint32 value, sint32 period, uint32 output);
sint32 sub_800D9464(sint32 a1, uint32 a2);
sint32 sub_800D94C8(uint32 a1, uint32 a2);
sint32 sub_800D9580(uint32 a1, uint32 a2);
sint32 sub_800D9738(uint32 a1, uint32 a2);
sint32 sub_800D97D4(uint32 a1, sint32 a2, uint32 a3);
sint32 sub_800DA080(sint32 a1, sint32 a2, uint32 a3);
sint32 sub_800DA15C(uint32 a1, uint32 a2);
sint32 sub_800DA474(uint32 a1, uint32 a2);
sint32 sub_800DA52C(uint32 a1, uint32 a2);
sint32 sub_800DB244(uint32 a1, uint32 a2);
sint32 sub_800DB41C(uint32 a1);
sint32 sub_800DB558(sint32 a1);
sint32 sub_800DB5EC(uint32 a1, sint32 a2);
sint32 sub_800DB648(sint32 a1, sint32 a2);
sint32 sub_800DB730(sint32 a1, sint32 a2);
sint32 sub_800DB8D4(sint32 a1);
sint32 sub_800DB9C0(uint32 a1);
sint32 sub_800DB9E0(uint32 a1, uint32 a2, sint32 a3);
sint32 sub_800DBBD4(uint32 a1, uint32 a2, sint32 a3);
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
uint32 sub_800E41E4(uint32 channel, uint32 callback);
uint32 sub_800E4248(uint32 slot, uint32 callback);
uint32 sub_800E4250(uint32 callback_table, uint32 slot, uint32 callback);
uint32 sub_800E4958(uint32 slot, uint32 callback);
uint32 sub_800E4C54(uint32 value);
uint32 sub_800E4C68(void);
sint32 sub_800E4C84(sint32 mode);
void sub_800E4F68(sint32 mask);
sint32 sub_800E5000(sint32 a1);
sint32 sub_800E5184(uint32 rectangle, uint8 red, uint8 green, uint8 blue);
sint32 sub_800E52AC(uint32 a1, sint32 a2);
uint32 sub_800E55F4(uint32 ordering_table);
uint32 sub_800E5664(uint32 draw_environment);
uint32 sub_800E5830(uint32 display_environment);
uint32 sub_800E5D28(uint32 destination);
uint32 sub_800E5DC4(uint32 packet, uint32 rectangle);
sint32 sub_800E5ED4(sint32 a1, sint32 a2, sint32 a3, uint16 a4, sint32 a9);
uint32 sub_800E63B0(sint16 x, sint16 y);
uint32 sub_800E6448(sint16 x, sint16 y);
uint32 sub_800E7CA4(void);
sint32 sub_800E7F14(sint8 a1, sint8 a2, sint16 a3, sint16 a4);
uint32 sub_800E7F54(uint32 ordering_tag, uint32 packet);
sint32 sub_800E7F94(sint32 a1, sint32 a2, sint32 a3, sint16 a4);
uint32 sub_800E7FC4(uint32 packet, uint32 rectangle, uint32 x, uint32 y);
void sub_800E8024(uint32 primitive, uint32 ordering_table, uint16 depth);
void sub_800E81D4(uint32 box, uint32 ordering_table, uint16 depth);
void sub_800E82B4(sint32 a1, sint32 a2, uint16 a3);
void sub_800E87B4(sint32 a1, sint32 a2, uint16 a3);
sint32 sub_800E8AC4(uint16 width, uint16 height, uint32 flags, uint8 dither, uint16 rgb24);
sint32 sub_800E8B2C(uint16 width, uint16 height);
uint32 sub_800E8D4C(uint8 red, uint8 green, uint8 blue, uint32 ordering_table);
void sub_800E8E94(void);
void sub_800E8FA4(void);
void sub_800E9024(void);
uint32 sub_800E90D4(uint32 parent, uint32 output);
sint32 sub_800E92F0(uint32 a1, uint32 a2);
void sub_800E9494(sint16 x0, sint16 y0, sint16 x1, sint16 y1);
void sub_800E95B4(sint32 screen);
sint32 sub_800E9B44(sint32 mode);
void sub_800E9BC4(uint32 descriptor);
sint32 sub_800E9C14(sint32 a1);
uint32 sub_800E9C44(uint16 a1, uint16 a2, uint32 a3);
uint32 sub_800E9DB4(uint32 data, uint32 descriptor);
void sub_800E9F74(sint32 a1);
sint32 sub_800E9F84(uint32 a1);
sint32 sub_800EA0E4(uint32 a1, uint32 a2);
sint32 sub_800EA3A4(sint32 angle);
sint32 sub_800EA474(sint32 a1);
uint32 sub_800EA904(sint32 value);
uint32 sub_800EAC44(sint32 input);
uint32 sub_800EADF4(uint32 a1, uint32 a2, uint32 a3);
uint32 sub_800EB5A4(uint32 a1, uint32 a2);
void sub_800EB714(uint32 matrix);
void sub_800EB7A4(uint32 matrix);
void sub_800EB8BC(sint32 dqa);
void sub_800EB8C8(uint32 dqb);
sint32 sub_800EB8D4(void);
void sub_800EB8E4(uint32 red, uint32 green, uint32 blue);
void sub_800EB904(uint32 x, uint32 y);
void sub_800EB924(sint32 _$A0);
void sub_800EBA78(uint32 left, uint32 right, uint32 output);
void sub_800EBAD0(uint32 left, uint32 right, uint32 output);
sint32 sub_800EBBC4(uint32 a1, sint32 a2);
uint32 sub_800EBE94(uint32 a1, uint32 a2);
sint32 sub_800EC124(sint32 a1, sint32 a2);
uint32 sub_800EC68C(uint32 matrix, uint32 input, uint32 output);
uint32 sub_800EC874(uint32 destination, uint32 source);
sint32 sub_800EC884(uint32 left, uint32 right);
uint32 sub_800EC894(uint32 destination, uint32 source);
sint32 sub_800EC8A4(uint32 string);
uint32 sub_800EC8B4(uint32 string, sint32 character);
uint32 sub_800EC8C4(uint32 string, sint32 character);
uint32 sub_800EC8D4(uint32 destination, uint32 source, uint32 size);
uint32 sub_800EC8E4(uint32 destination, uint32 value, uint32 size);
uint32 sub_800EC8F4(void);
void sub_800EC904(uint32 seed);
void sub_800ED284(uint32 source, uint32 sectors);
sint32 sub_800ED558(sint32 mode, uint32 result);
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
sint32 sub_800F0654(uint32 mode);
void sub_800F0704(void);

sint32 sf_callbacks_page_4(uint32 target, uint32 argc, const uint32 *args, uint32 *result)
{
    switch (target)
    {
        case 0x800F4C24u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = _SsNoteOn((sint16)args[0], (sint16)args[1], (uint8)args[2], (uint8)args[3]);
            return 1;
        case 0x800F4D04u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = _SsSetProgramChange((sint16)args[0], (sint16)args[1], (uint8)args[2]);
            return 1;
        case 0x800F3774u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = _SsContNrpn1((sint16)args[0], (sint16)args[1], (uint8)args[2]);
            return 1;
        case 0x800F3874u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = _SsContNrpn2((sint16)args[0], (sint16)args[1], (uint8)args[2]);
            return 1;
        case 0x800F4824u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = _SsSetControlChange((sint16)args[0], (sint16)args[1], (uint8)args[2]);
            return 1;
        case 0x800D69D8u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            sub_800D69D8((sint32)args[0], (sint32)args[1], (sint32)args[2], (uint32)args[3]);
            *result = 0;
            return 1;
        case 0x800D6B04u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800D6B04((sint32)args[0]);
            return 1;
        case 0x800D6C14u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800D6C14((sint32)args[0], (sint32)args[1], (sint32)args[2]);
            return 1;
        case 0x800D6F50u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800D6F50((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800D7110u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            sub_800D7110((uint32)args[0], SF_DRAFT_PTR(uint32, args[1]), (uint32)args[2], (uint32)args[3]);
            *result = 0;
            return 1;
        case 0x800D7614u:
            *result = (uint32)sub_800D7614();
            return 1;
        case 0x800D769Cu:
            *result = (uint32)sub_800D769C();
            return 1;
        case 0x800D7758u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800D7758((uint32)args[0]);
            return 1;
        case 0x800D77A0u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800D77A0((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800D7854u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800D7854((sint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800D7930u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800D7930((uint32)args[0]);
            return 1;
        case 0x800D79E8u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800D79E8((uint32)args[0]);
            return 1;
        case 0x800D7A14u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800D7A14((uint32)args[0]);
            return 1;
        case 0x800D7A28u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800D7A28((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800D7A4Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800D7A4C(SF_DRAFT_PTR(uint16, args[0]), SF_DRAFT_PTR(uint16, args[1]));
            return 1;
        case 0x800D7AACu:
            *result = (uint32)sub_800D7AAC();
            return 1;
        case 0x800D7AECu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800D7AEC((sint32)args[0], (uint32)args[1], (sint32)args[2]);
            return 1;
        case 0x800D837Cu:
            *result = (uint32)sub_800D837C();
            return 1;
        case 0x800D84E8u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800D84E8(SF_DRAFT_PTR(uint32, args[0]), (uint32)args[1]);
            return 1;
        case 0x800D85BCu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800D85BC((sint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800D87E0u:
            *result = (uint32)sub_800D87E0();
            return 1;
        case 0x800D88FCu:
            *result = (uint32)sub_800D88FC();
            return 1;
        case 0x800D8930u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800D8930((sint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800D89D8u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800D89D8((sint32)args[0]);
            return 1;
        case 0x800D8B38u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800D8B38(SF_DRAFT_PTR(uint32, args[0]));
            return 1;
        case 0x800D8B4Cu:
            *result = (uint32)sub_800D8B4C();
            return 1;
        case 0x800D8B9Cu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800D8B9C((uint32)args[0], (sint32)args[1], (sint32)args[2]);
            return 1;
        case 0x800D8CDCu:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800D8CDC((uint32)args[0], (sint32)args[1], (sint32)args[2], (sint32)args[3]);
            return 1;
        case 0x800D8DE8u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800D8DE8((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800D8ED0u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800D8ED0((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800D9054u:
            *result = (uint32)sub_800D9054();
            return 1;
        case 0x800D9110u:
            if (argc < 6u)
                sf_callback_arity_error(target, 6u, argc);
            *result = (uint32)sub_800D9110((uint32)args[0], (sint32)args[1], (sint32)args[2], (uint32)args[3], (uint32)args[4], (sint32)args[5]);
            return 1;
        case 0x800D92F0u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800D92F0((sint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800D9464u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800D9464((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800D94C8u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800D94C8((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800D9580u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800D9580((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800D9738u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800D9738((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800D97D4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800D97D4((uint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800DA080u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DA080((sint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800DA15Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DA15C((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800DA474u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DA474((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800DA52Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DA52C((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800DB244u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DB244((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800DB41Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DB41C((uint32)args[0]);
            return 1;
        case 0x800DB558u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DB558((sint32)args[0]);
            return 1;
        case 0x800DB5ECu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DB5EC((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800DB648u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DB648((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800DB730u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DB730((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800DB8D4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DB8D4((sint32)args[0]);
            return 1;
        case 0x800DB9C0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DB9C0((uint32)args[0]);
            return 1;
        case 0x800DB9E0u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DB9E0((uint32)args[0], (uint32)args[1], (sint32)args[2]);
            return 1;
        case 0x800DBBD4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DBBD4((uint32)args[0], (uint32)args[1], (sint32)args[2]);
            return 1;
        case 0x800DBF98u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DBF98((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800DBFD4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DBFD4((sint32)args[0], (sint32)args[1], (sint32)args[2]);
            return 1;
        case 0x800DC0B8u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DC0B8((sint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800DC3D0u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DC3D0((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800DC40Cu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DC40C((uint32)args[0], (uint32)args[1], (sint32)args[2]);
            return 1;
        case 0x800DC730u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DC730((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800DC780u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DC780((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800DC8ACu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DC8AC((uint32)args[0], (sint32)args[1], (sint32)args[2]);
            return 1;
        case 0x800DCB1Cu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DCB1C((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800DCB6Cu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DCB6C((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800DCBBCu:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            *result = (uint32)sub_800DCBBC((uint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3], (uint32)args[4]);
            return 1;
        case 0x800DCEDCu:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            *result = (uint32)sub_800DCEDC((sint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3], (uint32)args[4]);
            return 1;
        case 0x800DD0DCu:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800DD0DC((sint32)args[0], (uint32)args[1], (uint32)args[2], (sint32)args[3]);
            return 1;
        case 0x800DD8C0u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800DD8C0((sint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x800DD950u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800DD950((sint32)args[0], (uint32)args[1], (uint32)args[2], (sint32)args[3]);
            return 1;
        case 0x800DDB88u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DDB88((uint32)args[0]);
            return 1;
        case 0x800DDD24u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DDD24((sint32)args[0]);
            return 1;
        case 0x800DDF84u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DDF84((sint32)args[0]);
            return 1;
        case 0x800DE120u:
            if (argc < 6u)
                sf_callback_arity_error(target, 6u, argc);
            *result = (uint32)sub_800DE120((sint32)args[0], (sint32)args[1], (sint16)args[2], (sint16)args[3], (sint32)args[4], (sint16)args[5]);
            return 1;
        case 0x800DE2DCu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DE2DC((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800DE31Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DE31C((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800DE388u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DE388((uint32)args[0]);
            return 1;
        case 0x800DE3B4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800DE3B4((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x800DE3FCu:
            *result = (uint32)sub_800DE3FC();
            return 1;
        case 0x800DE414u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DE414((sint32)args[0]);
            return 1;
        case 0x800DE4A4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800DE4A4((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x800DE4ECu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800DE4EC((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x800DE4F8u:
            *result = (uint32)sub_800DE4F8();
            return 1;
        case 0x800DE504u:
            *result = (uint32)sub_800DE504();
            return 1;
        case 0x800DE5A0u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DE5A0((uint32)args[0], (uint32)args[1], (sint32)args[2]);
            return 1;
        case 0x800DE5E0u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DE5E0((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800DE644u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DE644((uint32)args[0], (sint32)args[1], (sint32)args[2]);
            return 1;
        case 0x800DE6E0u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DE6E0((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800DEB50u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DEB50((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800DEC48u:
            *result = (uint32)sub_800DEC48();
            return 1;
        case 0x800DEC7Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DEC7C((sint32)args[0]);
            return 1;
        case 0x800DED2Cu:
            *result = (uint32)sub_800DED2C();
            return 1;
        case 0x800DEDB4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DEDB4((sint32)args[0]);
            return 1;
        case 0x800DEEF4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DEEF4((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800DF148u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800DF148((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800DF198u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800DF198((sint32)args[0], (sint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x800DF32Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DF32C((uint32)args[0]);
            return 1;
        case 0x800DF3B0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DF3B0((sint32)args[0]);
            return 1;
        case 0x800DF43Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DF43C((uint32)args[0]);
            return 1;
        case 0x800DF464u:
            *result = (uint32)sub_800DF464();
            return 1;
        case 0x800DF600u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DF600((sint32)args[0], (sint8)args[1], (sint32)args[2]);
            return 1;
        case 0x800DF6ECu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DF6EC((sint8)args[0]);
            return 1;
        case 0x800DF83Cu:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            *result = (uint32)sub_800DF83C((sint32)args[0], (sint32)args[1], (uint32)args[2], (sint32)args[3], (sint32)args[4]);
            return 1;
        case 0x800DF99Cu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DF99C((sint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800DFB74u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DFB74((uint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800DFC64u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DFC64((uint32)args[0]);
            return 1;
        case 0x800DFCD0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800DFCD0((uint32)args[0]);
            return 1;
        case 0x800DFCF4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DFCF4((uint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800DFD64u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DFD64((sint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800DFF9Cu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800DFF9C((uint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800E0220u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800E0220((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800E0364u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800E0364((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800E098Cu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800E098C((uint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800E0A8Cu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800E0A8C((uint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800E0B8Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E0B8C((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800E0C00u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E0C00((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800E0D14u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E0D14((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800E0E88u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E0E88((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800E0FE8u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E0FE8((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800E1088u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800E1088((uint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800E1244u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800E1244((uint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800E1480u:
            if (argc < 6u)
                sf_callback_arity_error(target, 6u, argc);
            *result = (uint32)sub_800E1480((sint32)args[0], (sint32)args[1], (sint32)args[2], (uint32)args[3], (uint32)args[4], (uint32)args[5]);
            return 1;
        case 0x800E1E64u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800E1E64((uint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x800E2004u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800E2004((uint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x800E22F0u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800E22F0((sint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800E3F34u:
            *result = (uint32)sub_800E3F34();
            return 1;
        case 0x800E3F44u:
            sub_800E3F44();
            *result = 0;
            return 1;
        case 0x800E3F54u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800E3F54((sint32)args[0]);
            return 1;
        case 0x800E4184u:
            *result = (uint32)sub_800E4184();
            return 1;
        case 0x800E41B4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E41B4((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800E41E4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E41E4((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800E4248u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E4248((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800E4250u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800E4250((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800E4958u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E4958((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800E4C54u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800E4C54((uint32)args[0]);
            return 1;
        case 0x800E4C68u:
            *result = (uint32)sub_800E4C68();
            return 1;
        case 0x800E4C84u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800E4C84((sint32)args[0]);
            return 1;
        case 0x800E4F68u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800E4F68((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x800E5000u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800E5000((sint32)args[0]);
            return 1;
        case 0x800E5184u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800E5184((uint32)args[0], (uint8)args[1], (uint8)args[2], (uint8)args[3]);
            return 1;
        case 0x800E52ACu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E52AC((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800E55F4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800E55F4((uint32)args[0]);
            return 1;
        case 0x800E5664u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800E5664((uint32)args[0]);
            return 1;
        case 0x800E5830u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800E5830((uint32)args[0]);
            return 1;
        case 0x800E5D28u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800E5D28((uint32)args[0]);
            return 1;
        case 0x800E5DC4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E5DC4((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800E5ED4u:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            *result = (uint32)sub_800E5ED4((sint32)args[0], (sint32)args[1], (sint32)args[2], (uint16)args[3], (sint32)args[4]);
            return 1;
        case 0x800E63B0u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E63B0((sint16)args[0], (sint16)args[1]);
            return 1;
        case 0x800E6448u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E6448((sint16)args[0], (sint16)args[1]);
            return 1;
        case 0x800E7CA4u:
            *result = (uint32)sub_800E7CA4();
            return 1;
        case 0x800E7F14u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800E7F14((sint8)args[0], (sint8)args[1], (sint16)args[2], (sint16)args[3]);
            return 1;
        case 0x800E7F54u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E7F54((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800E7F94u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800E7F94((sint32)args[0], (sint32)args[1], (sint32)args[2], (sint16)args[3]);
            return 1;
        case 0x800E7FC4u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800E7FC4((uint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x800E8024u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            sub_800E8024((uint32)args[0], (uint32)args[1], (uint16)args[2]);
            *result = 0;
            return 1;
        case 0x800E81D4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            sub_800E81D4((uint32)args[0], (uint32)args[1], (uint16)args[2]);
            *result = 0;
            return 1;
        case 0x800E82B4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            sub_800E82B4((sint32)args[0], (sint32)args[1], (uint16)args[2]);
            *result = 0;
            return 1;
        case 0x800E87B4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            sub_800E87B4((sint32)args[0], (sint32)args[1], (uint16)args[2]);
            *result = 0;
            return 1;
        case 0x800E8AC4u:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            *result = (uint32)sub_800E8AC4((uint16)args[0], (uint16)args[1], (uint32)args[2], (uint8)args[3], (uint16)args[4]);
            return 1;
        case 0x800E8B2Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E8B2C((uint16)args[0], (uint16)args[1]);
            return 1;
        case 0x800E8D4Cu:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800E8D4C((uint8)args[0], (uint8)args[1], (uint8)args[2], (uint32)args[3]);
            return 1;
        case 0x800E8E94u:
            sub_800E8E94();
            *result = 0;
            return 1;
        case 0x800E8FA4u:
            sub_800E8FA4();
            *result = 0;
            return 1;
        case 0x800E9024u:
            sub_800E9024();
            *result = 0;
            return 1;
        case 0x800E90D4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E90D4((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800E92F0u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E92F0((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800E9494u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            sub_800E9494((sint16)args[0], (sint16)args[1], (sint16)args[2], (sint16)args[3]);
            *result = 0;
            return 1;
        case 0x800E95B4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800E95B4((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x800E9B44u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800E9B44((sint32)args[0]);
            return 1;
        case 0x800E9BC4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800E9BC4((uint32)args[0]);
            *result = 0;
            return 1;
        case 0x800E9C14u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800E9C14((sint32)args[0]);
            return 1;
        case 0x800E9C44u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800E9C44((uint16)args[0], (uint16)args[1], (uint32)args[2]);
            return 1;
        case 0x800E9DB4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800E9DB4((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800E9F74u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800E9F74((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x800E9F84u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800E9F84((uint32)args[0]);
            return 1;
        case 0x800EA0E4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800EA0E4((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800EA3A4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800EA3A4((sint32)args[0]);
            return 1;
        case 0x800EA474u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800EA474((sint32)args[0]);
            return 1;
        case 0x800EA904u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800EA904((sint32)args[0]);
            return 1;
        case 0x800EAC44u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800EAC44((sint32)args[0]);
            return 1;
        case 0x800EADF4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800EADF4((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800EB5A4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800EB5A4((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800EB714u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800EB714((uint32)args[0]);
            *result = 0;
            return 1;
        case 0x800EB7A4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800EB7A4((uint32)args[0]);
            *result = 0;
            return 1;
        case 0x800EB8BCu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800EB8BC((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x800EB8C8u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800EB8C8((uint32)args[0]);
            *result = 0;
            return 1;
        case 0x800EB8D4u:
            *result = (uint32)sub_800EB8D4();
            return 1;
        case 0x800EB8E4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            sub_800EB8E4((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            *result = 0;
            return 1;
        case 0x800EB904u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            sub_800EB904((uint32)args[0], (uint32)args[1]);
            *result = 0;
            return 1;
        case 0x800EB924u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800EB924((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x800EBA78u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            sub_800EBA78((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            *result = 0;
            return 1;
        case 0x800EBAD0u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            sub_800EBAD0((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            *result = 0;
            return 1;
        case 0x800EBBC4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800EBBC4((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800EBE94u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800EBE94((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800EC124u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800EC124((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800EC68Cu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800EC68C((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800EC874u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800EC874((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800EC884u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800EC884((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800EC894u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800EC894((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800EC8A4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800EC8A4((uint32)args[0]);
            return 1;
        case 0x800EC8B4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800EC8B4((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800EC8C4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800EC8C4((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800EC8D4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800EC8D4((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800EC8E4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800EC8E4((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800EC8F4u:
            *result = (uint32)sub_800EC8F4();
            return 1;
        case 0x800EC904u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800EC904((uint32)args[0]);
            *result = 0;
            return 1;
        case 0x800ED284u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            sub_800ED284((uint32)args[0], (uint32)args[1]);
            *result = 0;
            return 1;
        case 0x800ED558u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800ED558((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800ED578u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800ED578((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800ED5ACu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800ED5AC((uint32)args[0]);
            return 1;
        case 0x800ED5C0u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800ED5C0((uint8)args[0], (sint32)args[1], (sint32)args[2]);
            return 1;
        case 0x800ED6FCu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800ED6FC((uint8)args[0], (uint32)args[1]);
            return 1;
        case 0x800ED99Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800ED99C((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800ED9DCu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800ED9DC((uint32)args[0]);
            return 1;
        case 0x800EDA20u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800EDA20((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800EDB24u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800EDB24((uint32)args[0]);
            return 1;
        case 0x800EDBA4u:
            *result = (uint32)sub_800EDBA4();
            return 1;
        case 0x800EF304u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800EF304((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800EFC84u:
            *result = (uint32)sub_800EFC84();
            return 1;
        case 0x800F0384u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800F0384((sint32)args[0], (uint32)args[1], (sint32)args[2]);
            return 1;
        case 0x800F0520u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800F0520((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800F0654u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800F0654((uint32)args[0]);
            return 1;
        case 0x800F0704u:
            sub_800F0704();
            *result = 0;
            return 1;
        default:
            return 0;
    }
}

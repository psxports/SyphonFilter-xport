#include "game_draft.h"
void sf_callback_arity_error(uint32 target, uint32 expected, uint32 received);
void sf_callback_image_error(uint32 target, const char *image);
sint32 sub_80067448(uint32 a1, sint32 a2, uint32 a3);
sint32 sub_800674E4(sint32 a1, uint32 a2, uint32 a3, uint32 a4);
void sub_8006784C(sint32 a1, sint32 a2, sint32 a3, uint32 a4, uint32 a9);
uint32 sub_80068704(void);
void sub_80068770(sint32 a1, sint32 a2, uint32 a3, sint32 a4, sint32 a9, sint32 a10, uint32 a11, sint32 a12);
sint32 sub_80069224(sint32 a1);
sint32 sub_80069980(sint16 a1);
void sub_80069A40(sint32 a1, uint32 a2, sint32 a3, uint32 a4, sint32 a9);
sint32 sub_80069BF8(sint16 a1, sint32 a2, sint32 a3);
sint32 sub_80069CB0(sint16 a1, sint32 a2, sint32 a3, sint16 a4, unsigned __int16 a9);
sint32 sub_8006AF74(uint32 a1);
sint32 sub_8006AFD0(void);
void sub_8006AFD8(void);
void sub_8006B2D4(sint32 a1, sint32 a2);
void sub_8006B618(void);
sint32 sub_8006B824(sint32 a1, uint32 a2);
sint32 sub_8006B854(sint32 a1);
sint32 sub_8006B868(void);
sint32 sub_8006B90C(sint32 a1, uint32 a2, sint32 a3, uint32 a4, uint32 a9, uint32 a10);
sint32 sub_8006BC98(sint32 a1, uint32 a2, sint32 a3, uint32 a4);
sint32 sub_8006BE10(sint32 a1, sint32 a2);
uint32 sub_8006C0BC(sint32 mode, uint32 channel, sint32 entity, uint32 left_output, uint32 right_output);
sint32 sub_8006C0E8(sint32 a1, uint32 a2, uint32 a3, uint32 a4);
sint32 sub_8006C12C(unsigned __int8 a1);
sint32 sub_8006C180(void);
sint32 sub_8006C440(void);
sint32 sub_8006C620(uint32 a1, sint32 a2, sint32 a3);
sint32 sub_8006C7CC(void);
sint32 sub_8006C824(void);
sint32 sub_8006CA74(sint32 request, sint32 entity);
sint32 sub_8006CB54(uint32 data);
sint32 sub_8006CB74(uint32 data, sint32 parameter);
sint32 sub_8006CF48(unsigned __int8 a1);
sint32 sub_8006CF68(sint32 a1);
sint32 sub_8006CFBC(sint32 a1);
void sub_8006D37C(void);
sint32 sub_8006D388(void);
sint32 sub_8006D408(sint32 a1);
sint32 sub_8006D610(sint32 a1);
sint32 sub_8006D708(sint32 a1);
void sub_8006DA20(sint32 a1, sint32 a2);
sint32 sub_8006DAE0(sint32 a1);
sint32 sub_8006DDEC(sint32 a1, uint32 a2);
sint32 sub_8006E064(void);
sint32 sub_8006E084(sint32 a1, uint32 a2);
sint32 sub_8006E0B8(sint32 a1, uint32 a2);
sint32 sub_8006E0D8(sint32 a1, sint32 a2, sint32 a3, sint32 a4, sint32 a9, sint32 a10);
sint32 sub_8006E150(sint32 a1, uint32 a2);
sint32 sub_8006E28C(uint32 a1, uint32 a2, sint32 a3);
sint32 sub_8006E438(uint32 a1, uint32 a2, sint32 a3);
sint32 sub_8006E4FC(sint32 a1, sint32 a2);
sint32 sub_8006E54C(sint32 a1, sint32 a2, uint32 a3);
sint32 sub_8006F8A0(sint32 a1);
sint32 sub_8006F8C0(sint32 a1);
sint32 sub_8006FB70(sint32 a1, sint32 a2);
sint32 sub_8006FC48(sint32 a1);
sint32 sub_8006FED0(sint32 a1);
sint32 sub_80071384(uint32 a1);
sint32 sub_8007159C(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a9, uint32 a10);
sint32 sub_80072274(sint32 a1, sint32 a2, uint32 a3, uint32 a4);
sint32 sub_8007265C(sint32 a1, sint32 a2, uint32 a3, uint32 a4);
sint32 sub_80072F84(uint32 a1, sint32 a2, sint32 a3, uint32 a4, uint32 a9, uint32 a10);
sint32 sub_80073190(sint32 a1, uint32 a2);
sint32 sub_800731E4(uint32 a1, sint32 a2, uint32 a3);
sint32 sub_800732D8(sint32 a1, sint32 a2, sint32 a3, uint32 a4);
sint32 sub_800734E4(sint32 a1, sint32 a2, uint32 a3, sint32 a4, sint32 a9, uint32 a10);
sint32 sub_80073B28(sint32 a1, uint32 a2);
sint32 sub_80073B78(uint32 a1, uint32 a2);
sint32 sub_80073CD8(sint32 a1, sint8 a2, sint32 a3, sint8 a4);
sint32 sub_80073D30(sint32 a1, sint8 a2, sint32 a3, sint8 a4);
sint32 sub_80073D88(sint32 a1, sint32 a2, sint32 a3, sint8 a4, sint8 a9);
sint32 sub_80073DD8(sint32 a1);
sint32 sub_80073E48(void);
sint32 sub_80074D08(sint32 a1, sint32 a2, uint32 a3);
sint32 sub_80074D54(uint32 a1, uint32 a2, uint32 a3);
sint32 sub_80075B08(uint32 a1);
sint32 sub_80075F98(sint32 a1);
sint32 sub_80076380(void);
sint32 sub_80076630(sint32 a1, uint32 a2, sint32 a3, sint8 a4);
sint32 sub_80076990(uint32 a1);
sint32 sub_800769CC(sint32 a1, uint32 a2, uint32 a3);
sint32 sub_80076C58(uint32 a1, sint8 a2, unsigned __int8 a3);
sint32 sub_800770F8(uint32 output, uint32 source, uint32 index1, uint32 index2, uint32 index3);
sint32 sub_80077278(sint32 A0, sint32 a2, uint32 a3, sint32 a4);
sint32 sub_80077A18(uint32 a1, uint32 a2);
sint32 sub_80077B48(unsigned __int16 a1, sint32 a2, sint32 A2);
uint32 sub_80077B84(sint32 a1, sint32 a2);
void sub_80077BFC(uint32 _$A0);
sint32 sub_80077FA0(sint32 a1);
sint32 sub_80077FD8(sint32 a1, sint32 a2);
sint32 sub_80078254(uint32 a1, uint32 a2, sint32 a3);
uint32 sub_80078724(uint32 a1, sint32 a2, uint32 a3, uint32 a4);
sint32 sub_80078BD0(uint32 a1, uint32 a2);
sint32 sub_80078DF4(void);
sint32 sub_8007903C(sint32 a1);
sint32 sub_80079A70(uint32 a1, uint32 a2);
void sub_80079AFC(sint32 a1);
sint32 sub_8007A49C(sint32 a1);
sint32 sub_8007DFD4(sint32 a1);
sint32 sub_8007E314(unsigned __int8 a1);
sint32 sub_8007E6A8(void);
sint32 sub_8007E6CC(sint32 a1, uint32 a2);
sint32 sub_8007E848(sint32 a1, uint32 a2, uint32 a3, uint32 a4);
sint32 sub_8007EAA8(sint32 a1, uint8 flag);
sint32 sub_8007EB38(sint32 a1, uint32 a2, sint8 a3);
sint32 sub_8007EC08(sint32 a1, sint8 a2, sint8 a3);
sint32 sub_8007F650(uint32 a1);
sint32 sub_8007FEC8(sint32 a1);
sint32 sub_8007FFD0(uint32 a1, uint32 a2);
sint32 sub_8008005C(void);
sint32 sub_8008012C(sint32 a1, sint32 a2, uint32 a3);
void sub_8008040C(sint32 a1, sint32 a2);
sint32 sub_80080494(sint32 a1);
sint32 sub_80080674(sint32 a1);
sint32 sub_80080758(sint32 a1);
sint32 sub_800808C4(sint16 a1, uint32 a2, sint8 a3);
uint32 sub_80080930(uint8 a1);
sint32 sub_80081790(sint32 a1, sint8 a2);
sint32 sub_80081A30(sint32 a1, unsigned __int8 a2);
sint32 sub_80081CB4(sint32 a1);
sint32 sub_80081DBC(uint32 element);
sint32 sub_80081E20(uint32 a1);
uint32 sub_80082358(void);
uint32 sub_800823B0(sint32 a1, sint32 a2, sint32 a3, uint32 a4, sint32 a9, sint32 a10);
sint32 sub_800826C0(void);
uint32 sub_80082724(void);
sint32 sub_800828A4(uint32 a1);
uint32 sub_8008294C(unsigned __int8 a1);
uint32 sub_80082DE0(void);
void sub_80082EC0(void);
sint32 sub_80082ED4(sint32 a1);
uint32 sub_80082FD8(sint32 a1);
sint32 sub_800830AC(uint32 a1);
uint32 sub_800834D8(void);
uint32 sub_80083584(uint32 a1);
sint32 sub_800835C8(sint32 a1);
sint32 sub_80083750(sint32 a1, sint16 a2, sint16 a3);
sint32 sub_80084698(sint32 a1);
sint32 sub_800848D4(uint32 a1, sint32 a2);
sint32 sub_80084998(uint32 a1, uint32 a2, uint32 a3, uint32 a4);
uint32 sub_80084C30(unsigned __int8 a1);
uint32 sub_80084DD0(unsigned __int8 a1, sint8 a2, sint8 a3, sint8 a4);
sint32 sub_80085024(uint32 a1);
sint32 sub_8008507C(sint32 a1, uint32 a2, sint32 a3, sint32 a4, uint32 a9, uint32 a10);
sint32 sub_80085794(sint32 a1, uint32 a2, uint32 a3);
sint32 sub_8008582C(unsigned __int8 a1, uint32 a2, sint32 a3, sint32 a4);
sint32 sub_80085D04(uint32 a1, sint32 a2);
sint32 sub_80085E04(uint32 a1, sint32 a2, sint16 a3, sint16 a4);
uint32 sub_80086018(uint32 a1);
void sub_80086050(uint32 head);
sint32 sub_80086104(uint32 a1);
uint32 sub_80086208(uint32 a1, uint32 a2, uint32 a3);
uint32 sub_80086254(uint32 a1, sint32 a2);
sint32 sub_800862DC(unsigned __int16 a1, sint32 a2);
uint32 sub_8008634C(uint32 a1, sint32 a2);
sint32 sub_800865BC(uint32 a1);
uint32 sub_800865EC(uint32 a1);
uint32 sub_80086830(void);
uint32 sub_800869EC(sint32 a1);
uint32 sub_80086E44(unsigned __int16 a1, sint8 a2, sint8 a3, sint8 a4);
uint32 sub_80086EA0(uint32 a1, uint32 a2);
void sub_80087194(sint32 a1);
sint32 sub_80087208(uint32 a1);
sint32 sub_80087528(sint32 a1);
sint32 sub_80087660(sint32 a1);
sint32 sub_800876F0(unsigned __int8 a1, sint32 a2, sint8 a3);
sint32 sub_8008798C(uint32 a1, sint32 a2);
void sub_80087B10(void);
void sub_80087DA0(void);
void sub_80087E64(void);
sint32 sub_80087FE4(sint32 a1, sint8 a2);
sint32 sub_80088154(sint32 a1);
sint32 sub_80088244(sint32 a1);
sint32 sub_80088290(uint32 a1, uint32 a2, uint32 a3);
sint32 sub_8008836C(sint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a9);
void sub_80088770(sint32 a1);
sint32 sub_80088ACC(sint32 a1, unsigned __int8 a2);
void sub_80088FB4(sint32 a1);
sint32 sub_80089624(sint32 a0, sint32 a1, sint32 a2, sint32 a3, sint32 extra16);
sint32 sub_80089684(sint32 a1, uint32 a2, uint32 a3);
sint32 sub_8008A0AC(sint32 a1, sint32 a2, uint32 a3);
sint32 sub_8008A31C(sint32 a1, uint32 a2);
void sub_8008A3B4(void);
sint32 sub_8008A3DC(sint32 a1, uint32 a2);
sint32 sub_8008A41C(uint32 a1);
void sub_8008AD30(sint32 a1, sint32 a2);
sint32 sub_8008B164(sint32 a1, sint32 a2, sint8 a3);
sint32 sub_8008B378(sint32 a1);
sint32 sub_8008B3B4(sint32 a1);
sint32 sub_8008B3F0(sint32 a1);
sint32 sub_8008B410(uint32 a1);
void sub_8008B44C(sint32 a1);
sint32 sub_8008B4E0(uint32 a1);
sint32 sub_8008B564(void);
uint32 sub_8008B668(sint16 item, uint8 flag, uint8 flag2);
sint32 sub_8008B718(uint32 output, sint16 count, sint16 item, uint8 flag, uint8 flag2);
sint32 sub_8008B82C(sint32 a1, sint32 a2, sint32 a3);
sint32 sub_8008BAB8(uint32 output, uint32 format, uint32 unit, uint32 detail, uint32 completed, uint32 total);
sint32 sub_8008BB2C(void);
sint32 sub_8008BD14(void);
sint32 sub_8008BE80(sint32 a1);
sint32 sub_8008BE90(sint32 a1);
sint32 sub_8008BFEC(sint32 a1);
uint32 sub_8008C844(uint32 record);
sint32 sub_8008C900(uint32 a1, uint32 a2, uint32 a3);
sint32 sub_8008CC68(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a9);
sint32 sub_8008CD00(uint32 a1, sint32 a2);
sint32 sub_8008CF34(void);
sint32 sub_8008CF8C(sint8 a1);
sint32 sub_8008D624(sint32 a1);
sint32 sub_8008DE18(sint32 a1);
void sub_8008DE28(sint32 a1);
sint32 sub_80090614(sint32 a1);
void sub_80090D88(sint32 a1);
sint32 sub_80091220(sint32 a1);
sint32 sub_80091AEC(sint16 entity);
sint32 sub_80091AF0(sint16 entity, sint32 status);
sint32 sub_80091CF8(sint32 a1);
void sub_80091D08(sint32 a1);
void sub_800922B8(void);

sint32 sf_callbacks_page_2(uint32 target, uint32 argc, const uint32 *args, uint32 *result)
{
    switch (target)
    {
        case 0x80067448u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_80067448((uint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800674E4u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800674E4((sint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x8006784Cu:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            sub_8006784C((sint32)args[0], (sint32)args[1], (sint32)args[2], (uint32)args[3], (uint32)args[4]);
            *result = 0;
            return 1;
        case 0x80068704u:
            *result = (uint32)sub_80068704();
            return 1;
        case 0x80068770u:
            if (argc < 8u)
                sf_callback_arity_error(target, 8u, argc);
            sub_80068770((sint32)args[0], (sint32)args[1], (uint32)args[2], (sint32)args[3], (sint32)args[4], (sint32)args[5], (uint32)args[6], (sint32)args[7]);
            *result = 0;
            return 1;
        case 0x80069224u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80069224((sint32)args[0]);
            return 1;
        case 0x80069980u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80069980((sint16)args[0]);
            return 1;
        case 0x80069A40u:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            sub_80069A40((sint32)args[0], (uint32)args[1], (sint32)args[2], (uint32)args[3], (sint32)args[4]);
            *result = 0;
            return 1;
        case 0x80069BF8u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_80069BF8((sint16)args[0], (sint32)args[1], (sint32)args[2]);
            return 1;
        case 0x80069CB0u:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            *result = (uint32)sub_80069CB0((sint16)args[0], (sint32)args[1], (sint32)args[2], (sint16)args[3], (unsigned __int16)args[4]);
            return 1;
        case 0x8006AF74u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006AF74((uint32)args[0]);
            return 1;
        case 0x8006AFD0u:
            *result = (uint32)sub_8006AFD0();
            return 1;
        case 0x8006AFD8u:
            sub_8006AFD8();
            *result = 0;
            return 1;
        case 0x8006B2D4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            sub_8006B2D4((sint32)args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x8006B618u:
            sub_8006B618();
            *result = 0;
            return 1;
        case 0x8006B824u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8006B824((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x8006B854u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006B854((sint32)args[0]);
            return 1;
        case 0x8006B868u:
            *result = (uint32)sub_8006B868();
            return 1;
        case 0x8006B90Cu:
            if (argc < 6u)
                sf_callback_arity_error(target, 6u, argc);
            *result = (uint32)sub_8006B90C((sint32)args[0], (uint32)args[1], (sint32)args[2], (uint32)args[3], (uint32)args[4], (uint32)args[5]);
            return 1;
        case 0x8006BC98u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_8006BC98((sint32)args[0], (uint32)args[1], (sint32)args[2], (uint32)args[3]);
            return 1;
        case 0x8006BE10u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8006BE10((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x8006C0BCu:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            *result = (uint32)sub_8006C0BC((sint32)args[0], (uint32)args[1], (sint32)args[2], (uint32)args[3], (uint32)args[4]);
            return 1;
        case 0x8006C0E8u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_8006C0E8((sint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x8006C12Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006C12C((unsigned __int8)args[0]);
            return 1;
        case 0x8006C180u:
            *result = (uint32)sub_8006C180();
            return 1;
        case 0x8006C440u:
            *result = (uint32)sub_8006C440();
            return 1;
        case 0x8006C620u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_8006C620((uint32)args[0], (sint32)args[1], (sint32)args[2]);
            return 1;
        case 0x8006C7CCu:
            *result = (uint32)sub_8006C7CC();
            return 1;
        case 0x8006C824u:
            *result = (uint32)sub_8006C824();
            return 1;
        case 0x8006CA74u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8006CA74((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x8006CB54u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006CB54((uint32)args[0]);
            return 1;
        case 0x8006CB74u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8006CB74((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x8006CF48u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006CF48((unsigned __int8)args[0]);
            return 1;
        case 0x8006CF68u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006CF68((sint32)args[0]);
            return 1;
        case 0x8006CFBCu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006CFBC((sint32)args[0]);
            return 1;
        case 0x8006D37Cu:
            sub_8006D37C();
            *result = 0;
            return 1;
        case 0x8006D388u:
            *result = (uint32)sub_8006D388();
            return 1;
        case 0x8006D408u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006D408((sint32)args[0]);
            return 1;
        case 0x8006D610u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006D610((sint32)args[0]);
            return 1;
        case 0x8006D708u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006D708((sint32)args[0]);
            return 1;
        case 0x8006DA20u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            sub_8006DA20((sint32)args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x8006DAE0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006DAE0((sint32)args[0]);
            return 1;
        case 0x8006DDECu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8006DDEC((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x8006E064u:
            *result = (uint32)sub_8006E064();
            return 1;
        case 0x8006E084u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8006E084((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x8006E0B8u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8006E0B8((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x8006E0D8u:
            if (argc < 6u)
                sf_callback_arity_error(target, 6u, argc);
            *result = (uint32)sub_8006E0D8((sint32)args[0], (sint32)args[1], (sint32)args[2], (sint32)args[3], (sint32)args[4], (sint32)args[5]);
            return 1;
        case 0x8006E150u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8006E150((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x8006E28Cu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_8006E28C((uint32)args[0], (uint32)args[1], (sint32)args[2]);
            return 1;
        case 0x8006E438u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_8006E438((uint32)args[0], (uint32)args[1], (sint32)args[2]);
            return 1;
        case 0x8006E4FCu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8006E4FC((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x8006E54Cu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_8006E54C((sint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x8006F8A0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006F8A0((sint32)args[0]);
            return 1;
        case 0x8006F8C0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006F8C0((sint32)args[0]);
            return 1;
        case 0x8006FB70u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8006FB70((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x8006FC48u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006FC48((sint32)args[0]);
            return 1;
        case 0x8006FED0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8006FED0((sint32)args[0]);
            return 1;
        case 0x80071384u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80071384((uint32)args[0]);
            return 1;
        case 0x8007159Cu:
            if (argc < 6u)
                sf_callback_arity_error(target, 6u, argc);
            *result = (uint32)sub_8007159C((uint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3], (uint32)args[4], (uint32)args[5]);
            return 1;
        case 0x80072274u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_80072274((sint32)args[0], (sint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x8007265Cu:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_8007265C((sint32)args[0], (sint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x80072F84u:
            if (argc < 6u)
                sf_callback_arity_error(target, 6u, argc);
            *result = (uint32)sub_80072F84((uint32)args[0], (sint32)args[1], (sint32)args[2], (uint32)args[3], (uint32)args[4], (uint32)args[5]);
            return 1;
        case 0x80073190u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80073190((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x800731E4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800731E4((uint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x800732D8u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_800732D8((sint32)args[0], (sint32)args[1], (sint32)args[2], (uint32)args[3]);
            return 1;
        case 0x800734E4u:
            if (argc < 6u)
                sf_callback_arity_error(target, 6u, argc);
            *result = (uint32)sub_800734E4((sint32)args[0], (sint32)args[1], (uint32)args[2], (sint32)args[3], (sint32)args[4], (uint32)args[5]);
            return 1;
        case 0x80073B28u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80073B28((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x80073B78u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80073B78((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x80073CD8u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_80073CD8((sint32)args[0], (sint8)args[1], (sint32)args[2], (sint8)args[3]);
            return 1;
        case 0x80073D30u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_80073D30((sint32)args[0], (sint8)args[1], (sint32)args[2], (sint8)args[3]);
            return 1;
        case 0x80073D88u:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            *result = (uint32)sub_80073D88((sint32)args[0], (sint32)args[1], (sint32)args[2], (sint8)args[3], (sint8)args[4]);
            return 1;
        case 0x80073DD8u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80073DD8((sint32)args[0]);
            return 1;
        case 0x80073E48u:
            *result = (uint32)sub_80073E48();
            return 1;
        case 0x80074D08u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_80074D08((sint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x80074D54u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_80074D54((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x80075B08u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80075B08((uint32)args[0]);
            return 1;
        case 0x80075F98u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80075F98((sint32)args[0]);
            return 1;
        case 0x80076380u:
            *result = (uint32)sub_80076380();
            return 1;
        case 0x80076630u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_80076630((sint32)args[0], (uint32)args[1], (sint32)args[2], (sint8)args[3]);
            return 1;
        case 0x80076990u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80076990((uint32)args[0]);
            return 1;
        case 0x800769CCu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800769CC((sint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x80076C58u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_80076C58((uint32)args[0], (sint8)args[1], (unsigned __int8)args[2]);
            return 1;
        case 0x800770F8u:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            *result = (uint32)sub_800770F8((uint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3], (uint32)args[4]);
            return 1;
        case 0x80077278u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_80077278((sint32)args[0], (sint32)args[1], (uint32)args[2], (sint32)args[3]);
            return 1;
        case 0x80077A18u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80077A18((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x80077B48u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_80077B48((unsigned __int16)args[0], (sint32)args[1], (sint32)args[2]);
            return 1;
        case 0x80077B84u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80077B84((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x80077BFCu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_80077BFC((uint32)args[0]);
            *result = 0;
            return 1;
        case 0x80077FA0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80077FA0((sint32)args[0]);
            return 1;
        case 0x80077FD8u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80077FD8((sint32)args[0], (sint32)args[1]);
            return 1;
        case 0x80078254u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_80078254((uint32)args[0], (uint32)args[1], (sint32)args[2]);
            return 1;
        case 0x80078724u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_80078724((uint32)args[0], (sint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x80078BD0u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80078BD0((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x80078DF4u:
            *result = (uint32)sub_80078DF4();
            return 1;
        case 0x8007903Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8007903C((sint32)args[0]);
            return 1;
        case 0x80079A70u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80079A70((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x80079AFCu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_80079AFC((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x8007A49Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8007A49C((sint32)args[0]);
            return 1;
        case 0x8007DFD4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8007DFD4((sint32)args[0]);
            return 1;
        case 0x8007E314u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8007E314((unsigned __int8)args[0]);
            return 1;
        case 0x8007E6A8u:
            *result = (uint32)sub_8007E6A8();
            return 1;
        case 0x8007E6CCu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8007E6CC((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x8007E848u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_8007E848((sint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x8007EAA8u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8007EAA8((sint32)args[0], (uint8)args[1]);
            return 1;
        case 0x8007EB38u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_8007EB38((sint32)args[0], (uint32)args[1], (sint8)args[2]);
            return 1;
        case 0x8007EC08u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_8007EC08((sint32)args[0], (sint8)args[1], (sint8)args[2]);
            return 1;
        case 0x8007F650u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8007F650((uint32)args[0]);
            return 1;
        case 0x8007FEC8u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8007FEC8((sint32)args[0]);
            return 1;
        case 0x8007FFD0u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8007FFD0((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x8008005Cu:
            *result = (uint32)sub_8008005C();
            return 1;
        case 0x8008012Cu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_8008012C((sint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x8008040Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            sub_8008040C((sint32)args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x80080494u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80080494((sint32)args[0]);
            return 1;
        case 0x80080674u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80080674((sint32)args[0]);
            return 1;
        case 0x80080758u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80080758((sint32)args[0]);
            return 1;
        case 0x800808C4u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800808C4((sint16)args[0], (uint32)args[1], (sint8)args[2]);
            return 1;
        case 0x80080930u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80080930((uint8)args[0]);
            return 1;
        case 0x80081790u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80081790((sint32)args[0], (sint8)args[1]);
            return 1;
        case 0x80081A30u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80081A30((sint32)args[0], (unsigned __int8)args[1]);
            return 1;
        case 0x80081CB4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80081CB4((sint32)args[0]);
            return 1;
        case 0x80081DBCu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80081DBC((uint32)args[0]);
            return 1;
        case 0x80081E20u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80081E20((uint32)args[0]);
            return 1;
        case 0x80082358u:
            *result = (uint32)sub_80082358();
            return 1;
        case 0x800823B0u:
            if (argc < 6u)
                sf_callback_arity_error(target, 6u, argc);
            *result = (uint32)sub_800823B0((sint32)args[0], (sint32)args[1], (sint32)args[2], (uint32)args[3], (sint32)args[4], (sint32)args[5]);
            return 1;
        case 0x800826C0u:
            *result = (uint32)sub_800826C0();
            return 1;
        case 0x80082724u:
            *result = (uint32)sub_80082724();
            return 1;
        case 0x800828A4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800828A4((uint32)args[0]);
            return 1;
        case 0x8008294Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8008294C((unsigned __int8)args[0]);
            return 1;
        case 0x80082DE0u:
            *result = (uint32)sub_80082DE0();
            return 1;
        case 0x80082EC0u:
            sub_80082EC0();
            *result = 0;
            return 1;
        case 0x80082ED4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80082ED4((sint32)args[0]);
            return 1;
        case 0x80082FD8u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80082FD8((sint32)args[0]);
            return 1;
        case 0x800830ACu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800830AC((uint32)args[0]);
            return 1;
        case 0x800834D8u:
            *result = (uint32)sub_800834D8();
            return 1;
        case 0x80083584u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80083584((uint32)args[0]);
            return 1;
        case 0x800835C8u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800835C8((sint32)args[0]);
            return 1;
        case 0x80083750u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_80083750((sint32)args[0], (sint16)args[1], (sint16)args[2]);
            return 1;
        case 0x80084698u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80084698((sint32)args[0]);
            return 1;
        case 0x800848D4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800848D4((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x80084998u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_80084998((uint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3]);
            return 1;
        case 0x80084C30u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80084C30((unsigned __int8)args[0]);
            return 1;
        case 0x80084DD0u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_80084DD0((unsigned __int8)args[0], (sint8)args[1], (sint8)args[2], (sint8)args[3]);
            return 1;
        case 0x80085024u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80085024((uint32)args[0]);
            return 1;
        case 0x8008507Cu:
            if (argc < 6u)
                sf_callback_arity_error(target, 6u, argc);
            *result = (uint32)sub_8008507C((sint32)args[0], (uint32)args[1], (sint32)args[2], (sint32)args[3], (uint32)args[4], (uint32)args[5]);
            return 1;
        case 0x80085794u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_80085794((sint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x8008582Cu:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_8008582C((unsigned __int8)args[0], (uint32)args[1], (sint32)args[2], (sint32)args[3]);
            return 1;
        case 0x80085D04u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80085D04((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x80085E04u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_80085E04((uint32)args[0], (sint32)args[1], (sint16)args[2], (sint16)args[3]);
            return 1;
        case 0x80086018u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80086018((uint32)args[0]);
            return 1;
        case 0x80086050u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_80086050(args[0]);
            *result = 0;
            return 1;
        case 0x80086104u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80086104((uint32)args[0]);
            return 1;
        case 0x80086208u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_80086208((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x80086254u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80086254((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800862DCu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_800862DC((unsigned __int16)args[0], (sint32)args[1]);
            return 1;
        case 0x8008634Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8008634C((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x800865BCu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800865BC((uint32)args[0]);
            return 1;
        case 0x800865ECu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800865EC((uint32)args[0]);
            return 1;
        case 0x80086830u:
            *result = (uint32)sub_80086830();
            return 1;
        case 0x800869ECu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_800869EC((sint32)args[0]);
            return 1;
        case 0x80086E44u:
            if (argc < 4u)
                sf_callback_arity_error(target, 4u, argc);
            *result = (uint32)sub_80086E44((unsigned __int16)args[0], (sint8)args[1], (sint8)args[2], (sint8)args[3]);
            return 1;
        case 0x80086EA0u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80086EA0((uint32)args[0], (uint32)args[1]);
            return 1;
        case 0x80087194u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_80087194((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x80087208u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80087208((uint32)args[0]);
            return 1;
        case 0x80087528u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80087528((sint32)args[0]);
            return 1;
        case 0x80087660u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80087660((sint32)args[0]);
            return 1;
        case 0x800876F0u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_800876F0((unsigned __int8)args[0], (sint32)args[1], (sint8)args[2]);
            return 1;
        case 0x8008798Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8008798C((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x80087B10u:
            sub_80087B10();
            *result = 0;
            return 1;
        case 0x80087DA0u:
            sub_80087DA0();
            *result = 0;
            return 1;
        case 0x80087E64u:
            sub_80087E64();
            *result = 0;
            return 1;
        case 0x80087FE4u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80087FE4((sint32)args[0], (sint8)args[1]);
            return 1;
        case 0x80088154u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80088154((sint32)args[0]);
            return 1;
        case 0x80088244u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80088244((sint32)args[0]);
            return 1;
        case 0x80088290u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_80088290((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x8008836Cu:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            *result = (uint32)sub_8008836C((sint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3], (uint32)args[4]);
            return 1;
        case 0x80088770u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_80088770((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x80088ACCu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80088ACC((sint32)args[0], (unsigned __int8)args[1]);
            return 1;
        case 0x80088FB4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_80088FB4((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x80089624u:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            *result = (uint32)sub_80089624((sint32)args[0], (sint32)args[1], (sint32)args[2], (sint32)args[3], (sint32)args[4]);
            return 1;
        case 0x80089684u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_80089684((sint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x8008A0ACu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_8008A0AC((sint32)args[0], (sint32)args[1], (uint32)args[2]);
            return 1;
        case 0x8008A31Cu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8008A31C((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x8008A3B4u:
            sub_8008A3B4();
            *result = 0;
            return 1;
        case 0x8008A3DCu:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8008A3DC((sint32)args[0], (uint32)args[1]);
            return 1;
        case 0x8008A41Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8008A41C((uint32)args[0]);
            return 1;
        case 0x8008AD30u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            sub_8008AD30((sint32)args[0], (sint32)args[1]);
            *result = 0;
            return 1;
        case 0x8008B164u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_8008B164((sint32)args[0], (sint32)args[1], (sint8)args[2]);
            return 1;
        case 0x8008B378u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8008B378((sint32)args[0]);
            return 1;
        case 0x8008B3B4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8008B3B4((sint32)args[0]);
            return 1;
        case 0x8008B3F0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8008B3F0((sint32)args[0]);
            return 1;
        case 0x8008B410u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8008B410((uint32)args[0]);
            return 1;
        case 0x8008B44Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_8008B44C((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x8008B4E0u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8008B4E0((uint32)args[0]);
            return 1;
        case 0x8008B564u:
            *result = (uint32)sub_8008B564();
            return 1;
        case 0x8008B668u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_8008B668((sint16)args[0], (uint8)args[1], (uint8)args[2]);
            return 1;
        case 0x8008B718u:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            *result = (uint32)sub_8008B718((uint32)args[0], (sint16)args[1], (sint16)args[2], (uint8)args[3], (uint8)args[4]);
            return 1;
        case 0x8008B82Cu:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_8008B82C((sint32)args[0], (sint32)args[1], (sint32)args[2]);
            return 1;
        case 0x8008FD64u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_8008FD64(args[0]);
            *result = 0;
            return 1;
        case 0x8008BAB8u:
            if (argc < 6u)
                sf_callback_arity_error(target, 6u, argc);
            *result = (uint32)sub_8008BAB8(args[0], args[1], args[2], args[3], args[4], args[5]);
            return 1;
        case 0x8008BB2Cu:
            *result = (uint32)sub_8008BB2C();
            return 1;
        case 0x8008BD14u:
            *result = (uint32)sub_8008BD14();
            return 1;
        case 0x8008BE80u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8008BE80((sint32)args[0]);
            return 1;
        case 0x8008BE90u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8008BE90((sint32)args[0]);
            return 1;
        case 0x8008BFECu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8008BFEC((sint32)args[0]);
            return 1;
        case 0x8008C844u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8008C844((uint32)args[0]);
            return 1;
        case 0x8008C900u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = (uint32)sub_8008C900((uint32)args[0], (uint32)args[1], (uint32)args[2]);
            return 1;
        case 0x8008CC68u:
            if (argc < 5u)
                sf_callback_arity_error(target, 5u, argc);
            *result = (uint32)sub_8008CC68((uint32)args[0], (uint32)args[1], (uint32)args[2], (uint32)args[3], (uint32)args[4]);
            return 1;
        case 0x8008CD00u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_8008CD00((uint32)args[0], (sint32)args[1]);
            return 1;
        case 0x8008CF34u:
            *result = (uint32)sub_8008CF34();
            return 1;
        case 0x8008CF8Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8008CF8C((sint8)args[0]);
            return 1;
        case 0x8008D624u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8008D624((sint32)args[0]);
            return 1;
        case 0x8008DE18u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_8008DE18((sint32)args[0]);
            return 1;
        case 0x8008DE28u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_8008DE28((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x80090614u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80090614((sint32)args[0]);
            return 1;
        case 0x80090D88u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_80090D88((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x80091220u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80091220((sint32)args[0]);
            return 1;
        case 0x80091AECu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80091AEC((sint16)args[0]);
            return 1;
        case 0x80091AF0u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80091AF0((sint16)args[0], (sint32)args[1]);
            return 1;
        case 0x80091CF8u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = (uint32)sub_80091CF8((sint32)args[0]);
            return 1;
        case 0x80091D08u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_80091D08((sint32)args[0]);
            *result = 0;
            return 1;
        case 0x800922B8u:
            sub_800922B8();
            *result = 0;
            return 1;
        case 0x80082234u:
            if (argc < 2u)
                sf_callback_arity_error(target, 2u, argc);
            *result = (uint32)sub_80082234(args[0], args[1]);
            return 1;
        case 0x80090624u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_80090624(args[0]);
            *result = 0;
            return 1;
        case 0x8008EDECu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_8008EDEC(args[0]);
            *result = 0;
            return 1;
        case 0x8008E22Cu:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            *result = sub_8008E22C(args[0]);
            return 1;
        case 0x800912A4u:
            if (argc < 1u)
                sf_callback_arity_error(target, 1u, argc);
            sub_800912A4(args[0]);
            *result = 0;
            return 1;
        case 0x8006C9A0u:
            if (argc < 3u)
                sf_callback_arity_error(target, 3u, argc);
            *result = sub_8006C9A0(args[1], args[2]);
            return 1;
        default:
            return 0;
    }
}

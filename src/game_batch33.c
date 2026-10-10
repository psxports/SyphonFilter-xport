#include "game_draft.h"
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_80024190();

extern uint32 sub_8008D6E8();

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x800258B4u 0x800258b4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800258B4(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800258B4u, "SCUS_942.40");
    int v4;
    int v5;
    int v6;
    __int16 v7;
    int v8;
    int v9;
    int v10;
    int result;
    int v12;
    int v13;
    bool v14;
    int v15;
    int v16;
    unsigned int v17;
    int v18;
    int v19;
    int v20;

    v4 = (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    v5 = *SF_DRAFT_PTR(_DWORD, (76 * (__int16)a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v6 = *SF_DRAFT_PTR(__int16, (v5 + 2));
    v7 = a1;
    if (v6 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        if ((*SF_DRAFT_PTR(uint32, 0x80115FB8u)) != 14)
            goto LABEL_10;
        v9 = a1 << 16;
    }
    else
    {
        v8 = *SF_DRAFT_PTR(uint8, (76 * v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36));
        if (!v8)
            goto LABEL_10;
        v9 = a1 << 16;
        if (v8 != 14)
            goto LABEL_10;
    }
    if (v9 >> 16 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v10 = *SF_DRAFT_PTR(_DWORD, (76 * (__int16)a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        if ((*SF_DRAFT_PTR(uint16, 0x80116AE6u)))
            sub_80046A74(v10, 0);
    }
LABEL_10:
    result = 52;
    if (a2 == 37)
    {
        if (v7 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
        {
            sub_800405F4(0, 0);
            if ((*SF_DRAFT_PTR(uint32, 0x8012F9B8u)))
                sub_80024190(0);
        }
        sub_80045C04(v5);
        v12 = 76 * *SF_DRAFT_PTR(__int16, (v5 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        v13 = *SF_DRAFT_PTR(uint8, (v12 + 36));
        v14 = v13 != 0;
        v15 = 32 * v13;
        if (!v14)
        {
            v16 = *SF_DRAFT_PTR(_DWORD, (v12 + 36)) & 0x3000;
            if (v16 == 4096)
                v15 = 608;
            else
                v15 = v16 == 0x2000 ? 0x280 : 0;
        }
        v17 = (*SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(char, SF_DRAFT_PTR(uint32, 0x8010C390u)) + v15)) >> 3) & 7;
        result = v17 < 2;
        if (v17 == 1)
        {
            v20 = *SF_DRAFT_PTR(__int16, (v5 + 2));
            if (*SF_DRAFT_PTR(_BYTE, (76 * v20 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) && *SF_DRAFT_PTR(_BYTE, (76 * v20 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) == 21)
            {
                sub_80028F3C(v20, 43);
                sub_80024190(1u);
            }
            v18 = v7;
            v19 = 40;
        }
        else if (v17 >= 2)
        {
            result = 4;
            if (v17 == 2)
            {
                v18 = v7;
                v19 = 41;
            }
            else
            {
                if (v17 != 4)
                    return result;
                v18 = v7;
                v19 = 39;
            }
        }
        else
        {
            if (v17)
                return result;
            v18 = v7;
            v19 = 38;
        }
        return sub_80028F3C(v18, v19);
    }
    if (a2 == 52)
    {
        result = *SF_DRAFT_PTR(_DWORD, r_u32((v5 + 16))) & 0x200;
        if ((*SF_DRAFT_PTR(_DWORD, r_u32((v5 + 16))) & 0x1000200) != 16777728)
        {
            if (result)
                sub_8002FA48(0);
            (*SF_DRAFT_PTR(uint32, 0x80127DA0u)) = 0;
            return sub_800405F4(1, 0);
        }
    }
    return result;
}

// FUNCTION_MARKER 0x80076380u 0x80076380
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80076380(void)
{
    FUNCTION_MARKER(0x80076380u, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;
    int v1;
    int v2;
    __int16 v3;
    int v4;
    unsigned int v5;
    int v6;
    int *v7;
    _DWORD *v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int result;
    int v18;
    int v19;
    int v20;
    BOOL v21;
    int v22;

    v1 = -1;
    v2 = -1;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = *SF_DRAFT_PTR(__int16, (v0 + 3484)) - 16;
    if (*SF_DRAFT_PTR(_DWORD, (v0 + 3852)))
    {
        v7 = SF_DRAFT_PTR(int, 0x80130F10u);
        do
        {
            v8 = (_DWORD *)*v7;
            v9 = *SF_DRAFT_PTR(_DWORD, (*v7 + 4));
            if (v6 >= v9)
            {
                if (v9 < v6)
                {
                    if (v8[2] != 1 || ((v10 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(_WORD, (v8[18] + 20)) & 0x3FF) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)), v11 = *SF_DRAFT_PTR(__int16, (v10 + 2)), v11 == 666) ? (v12 = 666) : (v12 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v11 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))))), (v13 = *SF_DRAFT_PTR(uint8, (v10 + 34)), v12 == 44) || v12 == 98 || v12 == 56 || v12 == 30 || v12 == 108 || v12 == 32 || (v14 = 0, v13 == 9)))
                    {
                        v14 = 1;
                    }
                    if (v14)
                        v1 = v8[1];
                }
            }
            else if (v8[5] < 500)
            {
                v2 = *SF_DRAFT_PTR(_DWORD, (*v7 + 4));
                break;
            }
            ++v5;
            ++v7;
        } while (v5 < *SF_DRAFT_PTR(_DWORD, (v0 + 3852)));
    }
    if (v1 >= 0 && v6 - v1 < 500)
        v3 = v1;
    if (v2 < 0)
        goto LABEL_28;
    v15 = 0;
    if (v2 - v6 < 500)
    {
        v4 = v2;
    LABEL_28:
        v15 = v4 << 16;
    }
    if (v15 >> 16 && (v16 = (v15 >> 16) - v3, v3))
    {
        result = 0;
        if (v16 < 90)
            return result;
        if (v16 < 150)
        {
            v18 = 3;
        }
        else
        {
            v18 = 2;
            if (v16 >= 500)
                v18 = v16 < 800;
        }
        v19 = (__int16)v4 - v6;
        v20 = v6 - v3;
        if (v19 - v20 < 0)
        {
            result = 0;
            if (v20 - v19 < 10)
                return result;
        }
        else
        {
            result = 0;
            if (v19 - v20 < 10)
                return result;
        }
        v21 = v20 < v19;
        if (v18 == 3)
        {
            v22 = 2;
            if (!v21)
                return -3;
        }
        else
        {
            v22 = 16 >> v18;
            if (!v21)
                return -(16 >> v18);
        }
        return v22;
    }
    else
    {
        result = -16;
        if (v3 && v6 - v3 < 125)
            return 16;
    }
    return result;
}

// FUNCTION_MARKER 0x8006AFD8u 0x8006afd8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_8006AFD8(void)
{
    FUNCTION_MARKER(0x8006AFD8u, "SCUS_942.40");
    int v0;
    char *v1;
    char v2;
    int v3;
    char *v4;
    int v5;
    char *v6;
    int v7;
    char *v8;
    int v9;
    char *v10;
    int v11;
    char *v12;
    int v13;
    char *v14;
    int v15;
    char *v16;
    int v17;
    char *v18;
    int v19;
    char *v20;
    int v21;
    char *v22;

    switch ((*SF_DRAFT_PTR(uint16, 0x80130C88u)))
    {
        case 0:
        case 1:
        case 2:
        case 20:
            v0 = 25;
            v1 = SF_DRAFT_PTR(uint8, 0x8013C5A9u);
            do
            {
                *v1 = 43;
                --v0;
                --v1;
            } while (v0 >= 0);
            (*SF_DRAFT_PTR(uint8, 0x8013C59Eu)) = 40;
            v2 = 46;
            (*SF_DRAFT_PTR(uint8, 0x8013C592u)) = 46;
            goto LABEL_35;
        case 3:
            v3 = 25;
            v4 = SF_DRAFT_PTR(uint8, 0x8013C5A9u);
            do
            {
                *v4 = 52;
                --v3;
                --v4;
            } while (v3 >= 0);
            (*SF_DRAFT_PTR(uint8, 0x8013C59Cu)) = 52;
            (*SF_DRAFT_PTR(uint8, 0x8013C59Bu)) = 43;
            (*SF_DRAFT_PTR(uint8, 0x8013C59Eu)) = 43;
            return;
        case 4:
            v5 = 25;
            v6 = SF_DRAFT_PTR(uint8, 0x8013C5A9u);
            do
            {
                *v6 = 43;
                --v5;
                --v6;
            } while (v5 >= 0);
            return;
        case 5:
        case 6:
            v7 = 25;
            v8 = SF_DRAFT_PTR(uint8, 0x8013C5A9u);
            do
            {
                *v8 = 43;
                --v7;
                --v8;
            } while (v7 >= 0);
            (*SF_DRAFT_PTR(uint8, 0x8013C5A4u)) = 58;
            (*SF_DRAFT_PTR(uint8, 0x8013C59Du)) = 58;
            (*SF_DRAFT_PTR(uint8, 0x8013C592u)) = 61;
            (*SF_DRAFT_PTR(uint8, 0x8013C593u)) = 40;
            (*SF_DRAFT_PTR(uint8, 0x8013C5A3u)) = 40;
            (*SF_DRAFT_PTR(uint8, 0x8013C59Eu)) = 40;
            v2 = 46;
            goto LABEL_35;
        case 7:
        case 9:
        case 10:
            v9 = 25;
            v10 = SF_DRAFT_PTR(uint8, 0x8013C5A9u);
            do
            {
                *v10 = 55;
                --v9;
                --v10;
            } while (v9 >= 0);
            (*SF_DRAFT_PTR(uint8, 0x8013C59Bu)) = 43;
            v2 = 61;
            goto LABEL_35;
        case 8:
            v11 = 25;
            v12 = SF_DRAFT_PTR(uint8, 0x8013C5A9u);
            do
            {
                *v12 = 43;
                --v11;
                --v12;
            } while (v11 >= 0);
            return;
        case 11:
        case 12:
        case 13:
            v13 = 25;
            v14 = SF_DRAFT_PTR(uint8, 0x8013C5A9u);
            do
            {
                *v14 = 43;
                --v13;
                --v14;
            } while (v13 >= 0);
            (*SF_DRAFT_PTR(uint8, 0x8013C5A4u)) = 58;
            (*SF_DRAFT_PTR(uint8, 0x8013C59Du)) = 58;
            (*SF_DRAFT_PTR(uint8, 0x8013C59Cu)) = 40;
            return;
        case 14:
        case 15:
            v15 = 25;
            v16 = SF_DRAFT_PTR(uint8, 0x8013C5A9u);
            do
            {
                *v16 = 40;
                --v15;
                --v16;
            } while (v15 >= 0);
            (*SF_DRAFT_PTR(uint8, 0x8013C5A4u)) = 58;
            (*SF_DRAFT_PTR(uint8, 0x8013C59Du)) = 58;
            (*SF_DRAFT_PTR(uint8, 0x8013C592u)) = 61;
            return;
        case 16:
            v17 = 25;
            v18 = SF_DRAFT_PTR(uint8, 0x8013C5A9u);
            do
            {
                *v18 = 43;
                --v17;
                --v18;
            } while (v17 >= 0);
            (*SF_DRAFT_PTR(uint8, 0x8013C5A4u)) = 58;
            (*SF_DRAFT_PTR(uint8, 0x8013C59Du)) = 58;
            (*SF_DRAFT_PTR(uint8, 0x8013C592u)) = 61;
            v2 = 46;
            goto LABEL_35;
        case 17:
        case 18:
            v19 = 25;
            v20 = SF_DRAFT_PTR(uint8, 0x8013C5A9u);
            do
            {
                *v20 = 40;
                --v19;
                --v20;
            } while (v19 >= 0);
            (*SF_DRAFT_PTR(uint8, 0x8013C592u)) = 46;
            (*SF_DRAFT_PTR(uint8, 0x8013C59Fu)) = 46;
            (*SF_DRAFT_PTR(uint8, 0x8013C5A4u)) = 58;
            (*SF_DRAFT_PTR(uint8, 0x8013C59Du)) = 58;
            return;
        case 19:
            v21 = 25;
            v22 = SF_DRAFT_PTR(uint8, 0x8013C5A9u);
            do
            {
                *v22 = 43;
                --v21;
                --v22;
            } while (v21 >= 0);
            v2 = 46;
        LABEL_35:
            (*SF_DRAFT_PTR(uint8, 0x8013C59Fu)) = v2;
            break;
        default:
            return;
    }
}

// FUNCTION_MARKER 0x80055298u 0x80055298
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_80055298(sint32 a1)
{
    FUNCTION_MARKER(0x80055298u, "SCUS_942.40");
    int v2;
    int v3;
    int v4;
    int *v5;
    int v6;
    int *v7;
    int *v8;
    int v9;
    int v10;
    int v11;
    int v12;
    unsigned int v13;
    sint32 screen_point[3];

    v2 = *SF_DRAFT_PTR(__int16, (a1 + 30));
    v3 = 0;
    if (v2 >= 0)
    {
        v4 = 2 * v2;
        while (1)
        {
            v5 = SF_DRAFT_PTR(int, 0x80137740u + 104u * (uint32)v2);
            v6 = *((__int16 *)v5 + 19);
            v7 = v5;
            if ((*SF_DRAFT_PTR(_DWORD, (a1 + 4)) & 0x10000) != 0)
            {
                v8 = SF_DRAFT_PTR(int, r_u32((*SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a1 + 20)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 12)));
                *v5 += v8[4] >> 13;
                v5[1] += v8[5] >> 13;
                v5[2] += v8[6] >> 13;
                v7 = SF_DRAFT_PTR(int, 0x80137740u + 104u * (uint32)v2);
            }
            sub_800C6EAC(sf_draft_guest_address(v7), sf_draft_guest_address(&screen_point[0]));
            if (screen_point[2] <= 0)
                goto LABEL_11;
            v9 = sub_80054FBC(a1, sf_draft_guest_address(v5));
            v10 = a1;
            if (v9)
                break;
        LABEL_12:
            sub_8004BEDC(v10, sf_draft_guest_address(v5), v3, v2);
            v2 = v6;
        LABEL_25:
            v4 = 2 * v2;
            if (v2 < 0)
                return;
        }
        v5[16] = (sint32)((uint32)(uint16)screen_point[0] - ((uint32)screen_point[1] << 16));
        v11 = (screen_point[2] >> 2) - (screen_point[2] >> 4) + *SF_DRAFT_PTR(char, (a1 + 38)) - 16;
        if (v11 < 0)
            v5[11] = 0;
        else
            v5[11] = v11;
        sub_800C6EAC(sf_draft_guest_address(v5), sf_draft_guest_address(&screen_point[0]));
        if (screen_point[2] > 0)
        {
            v12 = v5[8];
            if ((*SF_DRAFT_PTR(_DWORD, (a1 + 4)) & 2) != 0 && (((_BYTE)(*SF_DRAFT_PTR(uint32, 0x801169A4u)) + (_BYTE)v2) & 0xF) == 0)
                v12 = 0xFFFFFF;
            v5[14] = (sint32)((uint32)(uint16)screen_point[0] - ((uint32)screen_point[1] << 16));
            if ((v12 & 0xFF000000) != 0)
                v5[13] = v12 & 0xFFFFFF | 0x50000000;
            else
                v5[13] = v12 | 0x50000000;
            if ((*SF_DRAFT_PTR(_DWORD, (a1 + 4)) & 0x400) != 0)
                v13 = (v5[8] & 0xFEFEFEu) >> 1;
            else
                v13 = v5[8];
            v5[15] = v13;
            v3 = v2;
            if ((*SF_DRAFT_PTR(_DWORD, (a1 + 4)) & 0x200) != 0)
                *((_BYTE *)v5 + 55) |= 2u;
            v2 = v6;
            goto LABEL_25;
        }
    LABEL_11:
        v10 = a1;
        goto LABEL_12;
    }
}

// FUNCTION_MARKER 0x800876F0u 0x800876f0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800876F0(unsigned __int8 a1, sint32 a2, sint8 a3)
{
    FUNCTION_MARKER(0x800876F0u, "SCUS_942.40");
    int *v3;
    __int16 v4;
    char v5;
    __int16 v6;

    if (a3)
    {
        switch (a1)
        {
            case '!':
                v3 = SF_DRAFT_PTR(uint32, 0x80116114u);
                v4 = 6;
                break;
            case '"':
                v3 = SF_DRAFT_PTR(uint32, 0x8011611Cu);
                v4 = 6;
                break;
            case '\'':
                v3 = SF_DRAFT_PTR(uint32, 0x80116118u);
                v4 = 6;
                break;
            case ',':
                v3 = SF_DRAFT_PTR(uint32, 0x80116120u);
                v4 = 6;
                break;
            case '-':
                v3 = SF_DRAFT_PTR(uint32, 0x80116124u);
                v4 = 6;
                break;
            case '.':
                v3 = SF_DRAFT_PTR(uint32, 0x8011610Cu);
                v4 = 6;
                break;
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                v3 = SF_DRAFT_PTR(int, 0x80012408u + 3u * (uint32)a1);
                goto LABEL_15;
            case ':':
                v3 = SF_DRAFT_PTR(uint32, 0x80116108u);
                v4 = 6;
                break;
            case '?':
                v3 = SF_DRAFT_PTR(uint32, 0x80116110u);
                v4 = 6;
                break;
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'H':
            case 'I':
            case 'J':
            case 'K':
            case 'L':
            case 'M':
            case 'N':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                v3 = SF_DRAFT_PTR(int, 0x80012385u + 3u * (uint32)a1);
                goto LABEL_15;
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'g':
            case 'h':
            case 'i':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'u':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
                v3 = SF_DRAFT_PTR(int, 0x80012325u + 3u * (uint32)a1);
                goto LABEL_15;
            default:
                v3 = 0;
            LABEL_15:
                v4 = 6;
                break;
        }
    }
    else
    {
        switch (a1)
        {
            case '!':
                v3 = SF_DRAFT_PTR(uint32, 0x801160ECu);
                v4 = 8;
                break;
            case '"':
                v3 = SF_DRAFT_PTR(uint32, 0x801160F4u);
                v4 = 8;
                break;
            case '\'':
                v3 = SF_DRAFT_PTR(uint32, 0x801160F0u);
                v4 = 8;
                break;
            case '(':
                v3 = SF_DRAFT_PTR(uint32, 0x80116100u);
                v4 = 8;
                break;
            case ')':
                v3 = SF_DRAFT_PTR(uint32, 0x80116104u);
                v4 = 8;
                break;
            case ',':
                v3 = SF_DRAFT_PTR(uint32, 0x801160F8u);
                v4 = 8;
                break;
            case '-':
                v3 = SF_DRAFT_PTR(uint32, 0x801160FCu);
                v4 = 8;
                break;
            case '.':
                v3 = SF_DRAFT_PTR(uint32, 0x801160E4u);
                v4 = 8;
                break;
            case '/':
                v3 = SF_DRAFT_PTR(uint32, 0x801160E0u);
                v4 = 8;
                break;
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                v3 = SF_DRAFT_PTR(int, 0x80012398u + 3u * (uint32)a1);
                goto LABEL_32;
            case ':':
                v3 = SF_DRAFT_PTR(uint32, 0x801160DCu);
                v4 = 8;
                break;
            case '?':
                v3 = SF_DRAFT_PTR(uint32, 0x801160E8u);
                v4 = 8;
                break;
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'H':
            case 'I':
            case 'J':
            case 'K':
            case 'L':
            case 'M':
            case 'N':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                v3 = SF_DRAFT_PTR(int, 0x800122C5u + 3u * (uint32)a1);
                goto LABEL_32;
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'g':
            case 'h':
            case 'i':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'u':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
                v3 = SF_DRAFT_PTR(int, 0x800122B5u + 3u * (uint32)a1);
                goto LABEL_32;
            default:
                v3 = 0;
            LABEL_32:
                v4 = 8;
                break;
        }
    }
    *SF_DRAFT_PTR(_WORD, (a2 + 10)) = v4;
    if (v3)
    {
        v5 = *((_BYTE *)v3 + 1);
        v6 = *((uint8 *)v3 + 2);
        *SF_DRAFT_PTR(_BYTE, (a2 + 14)) = *(_BYTE *)v3;
        *SF_DRAFT_PTR(_WORD, (a2 + 8)) = v6;
        *SF_DRAFT_PTR(_BYTE, (a2 + 15)) = v5;
        if (a3)
            return (uint8)(v6 + 1);
        else
            return (uint8)(v6 + 2);
    }
    else
    {
        *SF_DRAFT_PTR(_WORD, (a2 + 8)) = 0;
        return 0;
    }
}

// FUNCTION_MARKER 0x80062918u 0x80062918
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80062918(sint32 a1)
{
    FUNCTION_MARKER(0x80062918u, "SCUS_942.40");
    int v1 = SF_DRAFT_GP;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    BOOL v16;
    int result;

    v2 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v3 = *SF_DRAFT_PTR(__int16, (v2 + 2));
    v4 = 76 * v3 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    if (*SF_DRAFT_PTR(_BYTE, (v4 + 36)))
        goto LABEL_7;
    v5 = *SF_DRAFT_PTR(_DWORD, (v4 + 36));
    if ((v5 & 0x3000) == 4096 || (v5 & 0x3000) == 0x2000 || v3 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (v5 & 0x4000) != 0)
    {
        v6 = 76 * *SF_DRAFT_PTR(__int16, (v2 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        if (!*SF_DRAFT_PTR(_BYTE, (v6 + 36)))
        {
            v9 = *SF_DRAFT_PTR(_DWORD, (v6 + 36));
            v7 = 4096;
            v8 = v9 & 0x3000;
        LABEL_9:
            if (v8 != v7)
            {
                v10 = 76 * *SF_DRAFT_PTR(__int16, (v2 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                if (*SF_DRAFT_PTR(_BYTE, (v10 + 36)))
                {
                    v11 = v2;
                    if (*SF_DRAFT_PTR(_BYTE, (v10 + 36)) != 20)
                        goto LABEL_17;
                }
                else
                {
                    v12 = *SF_DRAFT_PTR(_DWORD, (v10 + 36)) & 0x3000;
                    if (v12 == 4096)
                    {
                    LABEL_16:
                        v11 = v2;
                        goto LABEL_17;
                    }
                    v11 = v2;
                    if (v12 != 0x2000)
                    {
                    LABEL_17:
                        sub_80045F84(v11, 1u);
                        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v2 + 28)) + 65)) = 0;
                        goto LABEL_18;
                    }
                }
            }
            v13 = (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
            v14 = 76 * *SF_DRAFT_PTR(__int16, (v2 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
            *SF_DRAFT_PTR(_DWORD, (v14 + 36)) &= 0xFFFFCFFF;
            *SF_DRAFT_PTR(_BYTE, (76 * *SF_DRAFT_PTR(__int16, (v2 + 2)) + v13 + 36)) = (uint8)*SF_DRAFT_PTR(_WORD, (v1 + 3262));
            sub_80045C04(v2);
            goto LABEL_16;
        }
    LABEL_7:
        v7 = *SF_DRAFT_PTR(uint8, (76 * *SF_DRAFT_PTR(__int16, (v2 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36));
        v8 = 19;
        goto LABEL_9;
    }
LABEL_18:
    v15 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (v2 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
    v16 = 0;
    if (v15 != -1 && v15 != 666)
        v16 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v15 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 0x1C;
    result = v16;
    if (v16)
        return sub_8008D6E8(v2);
    return result;
}

// FUNCTION_MARKER 0x80081A30u 0x80081a30
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80081A30(sint32 a1, unsigned __int8 a2)
{
    FUNCTION_MARKER(0x80081A30u, "SCUS_942.40");
    int v2 = SF_DRAFT_GP;
    int v3;
    int v4;
    int *v5;
    int v6;
    int v8;
    int result;
    int v10 = SF_DRAFT_GP;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15 = SF_DRAFT_GP;
    int **v16;
    int *v17;
    int *v18;
    int v19;
    char *v20;
    char *v21;
    _DWORD **v22;
    int v23;
    int v24;
    _DWORD *v25;
    _DWORD **v26;
    int v27;
    _DWORD *v28;
    int v29;
    void *v30;
    int v31;
    _DWORD v32[3];
    char v33[2];
    int v34;
    int v35;
    int v36;
    int v37;

    v3 = a1;
    v4 = 16 * a1;
    v5 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(_DWORD, (v2 + 3372)) + 60 * a1));
    v6 = *v5;
    if (*SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(_DWORD, (*v5 + 16)) + 35)) == -128)
        return sub_80080494(a1);
    v8 = (*SF_DRAFT_PTR(uint32, 0x80116BA4u)) + v4;
    result = sub_8008012C(*v5, (*SF_DRAFT_PTR(uint32, 0x80116BA4u)) + v4, sf_draft_guest_address(v32));
    v11 = result;
    if (!result)
        return result;
    v12 = result - 1;
    if (result < 0)
    {
        a1 = v3;
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 16)) + 32)) |= 0x80000000;
        return sub_80080494(a1);
    }
    LOWORD(v36) = *SF_DRAFT_PTR(_DWORD, (v10 + 3332));
    HIWORD(v36) = v36;
    LOWORD(v37) = v36;
    HIWORD(v37) = v36;
    v34 = v36;
    v35 = v37;
    v13 = 0;
    v14 = sub_800EDB24(v8 + 4);
    if (v11 > 0)
    {
        v16 = (int **)v32;
        v17 = v5;
        do
        {
            v18 = *v16++;
            ++v13;
            v17[1] = *v18;
            ++v17;
        } while (v13 < v11);
    }
    v19 = v11 - 1;
    result = sf_draft_guest_address(v33);
    if (v12 > 0)
    {
        v20 = &v33[2 * v12];
        v21 = (char *)v32 + 2 * v12;
        v22 = (_DWORD **)&v32[v12];
        v23 = *SF_DRAFT_PTR(_DWORD, (v15 + 3332)) << 11;
        do
        {
            result = **(v22 - 1) + v23;
            if (result == **v22)
            {
                result = *(uint16 *)v20 + *((uint16 *)v21 + 8);
                *(_WORD *)v20 = result;
                *((_WORD *)v21 + 8) = 0;
                if (v19 == v12)
                {
                    v12 = v19 - 1;
                    --v11;
                }
            }
            v20 -= 2;
            v21 -= 2;
            --v19;
            --v22;
        } while (v19 > 0);
    }
    v24 = 0;
    if (v11 > 0)
    {
        v25 = v32;
        v26 = (_DWORD **)v32;
        do
        {
            v27 = *((__int16 *)v25 + 8);
            if (*((_WORD *)v25 + 8))
            {
                v28 = *v26;
                if (v24 >= v12)
                    v30 = SF_DRAFT_PTR(void, 0x80080758u);
                else
                    v30 = SF_DRAFT_PTR(void, 0x80080748u);
                v31 = v3;
                sub_800823B0(*v28, v14, v27, a2, (sint32)sf_draft_guest_address(v30), v3);
            }
            ++v26;
            v25 = SF_DRAFT_PTR(_DWORD, ((char *)v25 + 2));
            ++v24;
            if ((*SF_DRAFT_PTR(uint8, 0x80115C88u)))
                v29 = *SF_DRAFT_PTR(_DWORD, (v15 + 3332)) << 11;
            else
                v29 = *SF_DRAFT_PTR(_DWORD, (v15 + 3332));
            v14 += v29;
            result = v24 < v11;
        } while (v24 < v11);
    }
    return result;
}

// FUNCTION_MARKER 0x80034450u 0x80034450
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80034450(sint32 a1, uint32 a2, uint32 a3, sint32 a4, sint32 a9, uint32 a10)
{
    _DWORD *native_a2 = SF_DRAFT_PTR(_DWORD, a2);
    _DWORD *native_a3 = SF_DRAFT_PTR(_DWORD, a3);
    _DWORD *native_a10 = SF_DRAFT_PTR(_DWORD, a10);
    FUNCTION_MARKER(0x80034450u, "SCUS_942.40");
    int v14;
    uint8 v15;
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
    BOOL v26;
    bool v27;
    int result;
    int v29;
    int v30[2];
    int v31;
    int v32;
    int v33;
    int v34;
    int v35;
    int v36;
    int v37;

    v14 = 0;
    sub_800E0364(sf_draft_guest_address(native_a2), sf_draft_guest_address(native_a10), sf_draft_guest_address(&v29));
    v15 = 1;
    if (v29 >= a4)
        goto LABEL_26;
    v16 = sub_800EC124(*native_a3, native_a3[2]);
    v30[0] = *native_a10 - *native_a2;
    v17 = native_a10[1];
    v18 = native_a2[1];
    v32 = v16;
    v30[1] = v17 - v18;
    v31 = native_a10[2] - native_a2[2];
    v33 = sub_800EC124(v30[0], v31);
    v19 = v33 - v32;
    v34 = v33 - v32;
    if (v33 - v32 >= 2049)
    {
        v20 = v19 - 4096;
    LABEL_5:
        v34 = v20;
        goto LABEL_6;
    }
    v20 = v19 + 4096;
    if (v19 < -2048)
        goto LABEL_5;
LABEL_6:
    if (a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (((unsigned int)SF_DRAFT_PTR(uint32, 0x8010C3B0u)[8 * (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) - 8] >> 3) & 7) != 2 || (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)))
        goto LABEL_17;
    sub_800E0B8C(sf_draft_guest_address(native_a3), sf_draft_guest_address(&v35));
    sub_800E0B8C(sf_draft_guest_address(v30), sf_draft_guest_address(&v36));
    v21 = v36 - v35;
    v37 = v36 - v35;
    if (v36 - v35 >= 2049)
    {
        v22 = v21 - 4096;
    LABEL_12:
        v37 = v22;
        goto LABEL_13;
    }
    v22 = v21 + 4096;
    if (v21 < -2048)
        goto LABEL_12;
LABEL_13:
    v23 = v37;
    if (v37 < 0)
        v23 = -v37;
    if (a9 >> 1 < v23)
        v15 = 0;
LABEL_17:
    v24 = v34;
    if (v34 < 0)
        v24 = -v34;
    if (a9 >> 1 < v24)
    {
        v25 = v15;
        if (a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            goto LABEL_27;
        v26 = v24 < 1025;
        if ((((unsigned int)SF_DRAFT_PTR(uint32, 0x8010C3B0u)[8 * (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) - 8] >> 3) & 7) == 1 || (v26 = v24 < 1025, v29 < 641))
        {
            v27 = !v26;
            v25 = v15;
            if (v27)
                goto LABEL_27;
            v14 = 2;
        }
    }
    else
    {
        v14 = 1;
    }
LABEL_26:
    v25 = v15;
LABEL_27:
    v27 = v25 != 0;
    result = v14;
    if (!v27)
        return 0;
    return result;
}

void sub_80087B10(void)
{
    uint32 group, face, side, row, base, p0, p1, p2, p3;
    FUNCTION_MARKER(0x80087B10u, "SCUS_942.40");
    for (group = 0u; group < 10u; ++group)
    {
        base = 0x8012CA90u + 64u * group;
        for (face = 0u; face < 3u; ++face)
        {
            for (side = 0u; side < 2u; ++side)
            {
                if (face == 0u)
                {
                    p0 = base + 32u * side;
                    p1 = p0 + 8u;
                    p2 = p0 + 24u;
                    p3 = p0 + 16u;
                }
                else if (face == 1u)
                {
                    p0 = base + 16u * side;
                    p1 = base + 32u + 16u * side;
                    p2 = p1 + 8u;
                    p3 = p0 + 8u;
                }
                else
                {
                    p0 = base + 8u * side;
                    p1 = base + 16u + 8u * side;
                    p2 = base + 48u + 8u * side;
                    p3 = base + 32u + 8u * side;
                }
                row = 0x80130238u + 264u * group + 88u * face + 44u * side;
                w_u32(row + 8u, 4u);
                w_u32(row + 28u, p0);
                w_u32(row + 32u, side ? p3 : p1);
                w_u32(row + 36u, p2);
                w_u32(row + 40u, side ? p1 : p3);
                w_u32(row + 12u, 0x8012D648u + 2u * face + 6u * group + side);
                w_u32(row + 16u, row + 20u);
            }
        }
    }
    sub_80087DA0();
}

// FUNCTION_MARKER 0x8004BBB0u 0x8004bbb0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_8004BBB0(void)
{
    FUNCTION_MARKER(0x8004BBB0u, "SCUS_942.40");
    int v0 = SF_DRAFT_GP;
    int v1;
    int v2;
    int v3;
    int v4 = SF_DRAFT_GP;
    int v5;
    int v6 = SF_DRAFT_GP;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int *v17;
    int *v18;
    int v19;

    v1 = (*SF_DRAFT_PTR(uint16, 0x80130C88u));
    *SF_DRAFT_PTR(_DWORD, (v0 + 2676)) = 40;
    if (v1 == 16)
    {
        v2 = 80;
    }
    else
    {
        v2 = 88;
        if (v1 != 1)
            goto LABEL_5;
    }
    *SF_DRAFT_PTR(_DWORD, (v0 + 2676)) = v2;
LABEL_5:
    v3 = sub_800DE414(52 * *SF_DRAFT_PTR(_DWORD, (v0 + 2676)));
    *SF_DRAFT_PTR(_DWORD, (v4 + 3256)) = v3;
    if (!v3)
        sub_800DDC34(1, 0, 0x80011F50u, 242);
    v5 = sub_800DE414(*SF_DRAFT_PTR(_DWORD, (v4 + 2676)) + 1);
    *SF_DRAFT_PTR(_DWORD, (v6 + 3272)) = v5;
    if (!v5)
        sub_800DDC34(1, 0, 0x80011F50u, 244);
    v7 = 0;
    if (*SF_DRAFT_PTR(int, (v6 + 2676)) > 0)
    {
        v8 = 0;
        do
        {
            v9 = v8 + *SF_DRAFT_PTR(_DWORD, (v6 + 3256));
            *SF_DRAFT_PTR(_BYTE, (v9 + 36)) = -1;
            v10 = *SF_DRAFT_PTR(_DWORD, (v6 + 3256));
            *SF_DRAFT_PTR(_WORD, (v9 + 30)) = -1;
            *SF_DRAFT_PTR(_BYTE, (v8 + v10 + 39)) = 0;
            *SF_DRAFT_PTR(_BYTE, (v8 + *SF_DRAFT_PTR(_DWORD, (v6 + 3256)) + 37)) = 0;
            *SF_DRAFT_PTR(_BYTE, (v8 + *SF_DRAFT_PTR(_DWORD, (v6 + 3256)) + 38)) = 0;
            v11 = v8 + *SF_DRAFT_PTR(_DWORD, (v6 + 3256));
            *SF_DRAFT_PTR(_BYTE, (v11 + 40)) = v7;
            v12 = *SF_DRAFT_PTR(_DWORD, (v6 + 3272));
            *SF_DRAFT_PTR(_WORD, (v11 + 32)) = -1;
            *SF_DRAFT_PTR(_WORD, (v11 + 22)) = 0;
            *SF_DRAFT_PTR(_BYTE, (v12 + v7++)) = -1;
            v8 += 52;
        } while (v7 < *SF_DRAFT_PTR(sint32, (v6 + 2676)));
    }
    v13 = -32768;
    v14 = 8268;
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v6 + 3272)) + *SF_DRAFT_PTR(_DWORD, (v6 + 2676)))) = -1;
    *SF_DRAFT_PTR(_WORD, (v6 + 2688)) = 0;
    *SF_DRAFT_PTR(_WORD, (v6 + 2692)) = 0;
    do
    {
        SF_DRAFT_PTR(uint16, 0x80137764u)[v14] = 0x8000;
        v14 -= 52;
        v15 = 0;
    } while (v14 >= 0);
    v16 = 0;
    v17 = SF_DRAFT_PTR(int, 0x8011CE04u);
    v18 = SF_DRAFT_PTR(uint32, 0x8011CDD8u);
    *SF_DRAFT_PTR(_WORD, (v6 + 2708)) = 0;
    *SF_DRAFT_PTR(_WORD, (v6 + 2696)) = 0;
    *SF_DRAFT_PTR(_WORD, (v6 + 3708)) = 0;
    *SF_DRAFT_PTR(_WORD, (v6 + 3824)) = 0;
    *SF_DRAFT_PTR(_WORD, (v6 + 3636)) = 0;
    *SF_DRAFT_PTR(_BYTE, (v6 + 3896)) = 0;
    *SF_DRAFT_PTR(_DWORD, (v6 + 2712)) = 0;
    *SF_DRAFT_PTR(_DWORD, (v6 + 2716)) = 0;
    *SF_DRAFT_PTR(_WORD, (v6 + 3710)) = 0;
    *SF_DRAFT_PTR(_DWORD, (v6 + 2684)) = 0;
    *SF_DRAFT_PTR(_DWORD, (v6 + 2680)) = 0;
    *SF_DRAFT_PTR(_DWORD, (v6 + 3864)) = 0;
    *SF_DRAFT_PTR(_BYTE, (v6 + 3686)) = 0;
    do
    {
        sub_800CD608(sf_draft_guest_address(v18));
        sub_800DB558(sf_draft_guest_address(v17));
        v19 = SF_DRAFT_PTR(uint32, 0x8011CE04u)[v15];
        v17 += 12;
        v15 += 12;
        ++v16;
        sub_800CD61C(sf_draft_guest_address(v18), v19);
        sub_800CD624(sf_draft_guest_address(v18), 100, 553648127);
        v18 += 12;
    } while (v16 < 2);
    sub_80015364(0x10u, 4u, 65534, 65534, 0, 0, 0, 0);
}

// FUNCTION_MARKER 0x800284C8u 0x800284c8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800284C8(sint32 a1, uint32 a2, uint32 a3, sint32 a4)
{
    _DWORD *native_a2 = SF_DRAFT_PTR(_DWORD, a2);
    _BYTE *native_a3 = SF_DRAFT_PTR(_BYTE, a3);
    FUNCTION_MARKER(0x800284C8u, "SCUS_942.40");
    int v7;
    uint8 v8;
    int v9;
    int v10;
    int v11;
    int v12;
    uint8 *v13;
    int v14;
    bool v15;
    int v16;
    _DWORD *v17;
    int v18;
    int v19;
    int v20;
    _DWORD *v21;
    int v22;
    int v23;
    int v24;
    _DWORD *v25;
    int v26;
    _DWORD *v27;
    _DWORD *v28;
    int v29;
    int v30;
    int v31;
    int v32;
    int v33;
    int v34;
    unsigned int result;
    unsigned int *v36;
    unsigned int v37;

    v7 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
    v8 = 0;
    v9 = *SF_DRAFT_PTR(_DWORD, (v7 + 12));
    v10 = v9 + 8;
    if (*SF_DRAFT_PTR(_DWORD, (v7 + 20)))
    {
        v11 = *SF_DRAFT_PTR(_DWORD, (v9 + 8));
        if (v11 != -1)
        {
            v12 = 0;
            if (*SF_DRAFT_PTR(_DWORD, (4 * v11 + v10 + 16)) != 2)
                goto LABEL_11;
            v13 = SF_DRAFT_PTR(uint8, sub_800282C4(sf_draft_guest_address(native_a2), (uint8)native_a3[1], a4));
            v14 = v13[6];
            v15 = v14 == 255;
            v16 = 32 * v14;
            if (!v15)
            {
                v17 = SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16)));
                v18 = v17[5] + v16;
                v8 = 1;
                *v17 |= *SF_DRAFT_PTR(_DWORD, (v18 + 4));
                *SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16))) &= ~*SF_DRAFT_PTR(_DWORD, (v18 + 8));
            }
            v19 = v13[7];
            v15 = v19 == 255;
            v20 = 32 * v19;
            if (!v15)
            {
                v21 = SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16)));
                v22 = v21[5] + v20;
                v8 = 1;
                *v21 |= *SF_DRAFT_PTR(_DWORD, (v22 + 4));
                *SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16))) &= ~*SF_DRAFT_PTR(_DWORD, (v22 + 8));
            }
            v23 = v13[8];
            v15 = v23 == 255;
            v24 = 32 * v23;
            if (!v15)
            {
                v25 = SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16)));
                v26 = v25[5] + v24;
                v8 = 1;
                *v25 |= *SF_DRAFT_PTR(_DWORD, (v26 + 4));
                *SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16))) &= ~*SF_DRAFT_PTR(_DWORD, (v26 + 8));
            }
        }
    }
    v12 = v8;
LABEL_11:
    if (!v12)
    {
        *SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16))) |= native_a2[4];
        *SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16))) &= ~native_a2[5];
    }
    v27 = SF_DRAFT_PTR(_DWORD, native_a2[9]);
    if (v27)
    {
        v28 = SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 16)));
        v29 = v27[1];
        v30 = v27[2];
        v31 = v27[3];
        *v28 = *v27;
        v28[1] = v29;
        v28[2] = v30;
        v28[3] = v31;
        v32 = v27[5];
        v33 = v27[6];
        v34 = v27[7];
        v28[4] = v27[4];
        v28[5] = v32;
        v28[6] = v33;
        v28[7] = v34;
    }
    result = 0x100000;
    if (*native_a3 == 1)
    {
        v36 = SF_DRAFT_PTR(unsigned int, r_u32((a1 + 16)));
        v37 = *v36;
        result = -1114112;
        if ((*v36 & 0x100000) != 0)
        {
            result = v37 & 0xFFEFFFFF;
            *v36 = v37 & 0xFFEFFFFF;
        }
    }
    return result;
}

// FUNCTION_MARKER 0x800D298Cu 0x800d298c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800D298C(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800D298Cu, "SCUS_942.40");
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    __int16 *v10;
    int v11;
    int v12;
    int v13;
    unsigned int v14;
    int v15;
    int v16;
    unsigned int v17;
    int v18;
    int v19;
    unsigned int v20;
    int v21;
    int v22;
    int v23;

    v2 = -4;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = *SF_DRAFT_PTR(__int16, (a2 + 16));
    v8 = *SF_DRAFT_PTR(__int16, (a2 + 20));
    while (1)
    {
        v2 += 4;
        v9 = *SF_DRAFT_PTR(_DWORD, (v2 + a1 + 4));
        if (v9 == -1)
            break;
        v10 = SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + a1 + 4)) + 36)) + *SF_DRAFT_PTR(_DWORD, (v2 + a1 + 4))));
        v11 = (*SF_DRAFT_PTR(__int16, (v9 + 6)) + 2) / 3;
        do
        {
            v12 = *v10 - v7;
            v13 = v10[2] - v8;
            if (v12 < 0)
                v12 = v7 - *v10;
            if (v12 - 350 <= 0)
            {
                if (v13 < 0)
                    v13 = v8 - v10[2];
                if (v13 - 350 <= 0)
                {
                    v14 = (uint16)v10[3];
                    ++v3;
                    v4 += (8 * v14) & 0xF8;
                    v5 += (v14 >> 2) & 0xF8;
                    v6 += (v14 >> 7) & 0xF8;
                }
            }
            v15 = v10[4] - v7;
            v16 = v10[6] - v8;
            if (v15 < 0)
                v15 = v7 - v10[4];
            if (v15 - 350 <= 0)
            {
                if (v16 < 0)
                    v16 = v8 - v10[6];
                if (v16 - 350 <= 0)
                {
                    v17 = (uint16)v10[7];
                    ++v3;
                    v4 += (8 * v17) & 0xF8;
                    v5 += (v17 >> 2) & 0xF8;
                    v6 += (v17 >> 7) & 0xF8;
                }
            }
            v18 = v10[8] - v7;
            v19 = v10[10] - v8;
            if (v18 < 0)
                v18 = v7 - v10[8];
            if (v18 - 350 <= 0)
            {
                if (v19 < 0)
                    v19 = v8 - v10[10];
                if (v19 - 350 <= 0)
                {
                    v20 = (uint16)v10[11];
                    ++v3;
                    v4 += (8 * v20) & 0xF8;
                    v5 += (v20 >> 2) & 0xF8;
                    v6 += (v20 >> 7) & 0xF8;
                }
            }
            --v11;
            v10 += 12;
        } while (v11);
    }
    v21 = *SF_DRAFT_PTR(_DWORD, (a2 + 28)) + v4;
    v22 = *SF_DRAFT_PTR(_DWORD, (a2 + 32)) + v5;
    v23 = *SF_DRAFT_PTR(_DWORD, (a2 + 36)) + v6;
    *SF_DRAFT_PTR(_DWORD, (a2 + 24)) += v3;
    *SF_DRAFT_PTR(_DWORD, (a2 + 28)) = v21;
    *SF_DRAFT_PTR(_DWORD, (a2 + 32)) = v22;
    *SF_DRAFT_PTR(_DWORD, (a2 + 36)) = v23;
    return 0;
}

// FUNCTION_MARKER 0x80048B0Cu 0x80048b0c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80048B0C(sint32 a1)
{
    FUNCTION_MARKER(0x80048B0Cu, "SCUS_942.40");
    int v2;
    int *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    _DWORD *v8;
    _DWORD *v9;
    int v11;
    int v12;
    int v13;
    int v14;

    if ((unsigned int)*SF_DRAFT_PTR(uint8, (a1 + 34)) - 1 >= 2 || (v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 8)), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 16)) + 40)) & 0x400000) == 0) || (*SF_DRAFT_PTR(_BYTE, (v2 + 8)) & 0x10) != 0)
    {
        v3 = SF_DRAFT_PTR(int, r_u32((a1 + 12)));
        goto LABEL_21;
    }
    v3 = SF_DRAFT_PTR(int, r_u32((a1 + 12)));
    v4 = 1;
    if (!v3)
    {
    LABEL_21:
        v11 = *v3;
        v12 = v3[1];
        v13 = v3[2];
        v14 = v3[3];
        v8 = SF_DRAFT_PTR(_DWORD, r_u32((a1 + 12)));
        v8[67] = v11;
        v8[68] = v12;
        v8[69] = v13;
        v8[70] = v14;
        v9 = SF_DRAFT_PTR(_DWORD, r_u32((a1 + 12)));
        v9[71] = v11;
        v9[72] = v12;
        v9[73] = v13;
        v9[74] = v14;
        return 1;
    }
    v5 = (0u - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((v2 + 24))) + 24)));
    v6 = v5;
    do
    {
        v7 = (0u - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * v4 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)))) + 24)));
        if (v7 >= v6)
        {
            if (v5 < v7 && v4 != 8 && v4 != 2 && v4 != 9 && v4 != 3 && v4 != 7 && v4 != 1 && v4 != 10 && v4 != 4)
                v5 = (0u - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * v4 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)))) + 24)));
        }
        else
        {
            v6 = (0u - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * v4 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)))) + 24)));
        }
        ++v4;
    } while (v4 < 15);
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 268)) = *SF_DRAFT_PTR(_DWORD, r_u32((a1 + 12)));
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 272)) = v6;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 276)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 8));
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 284)) = *SF_DRAFT_PTR(_DWORD, r_u32((a1 + 12)));
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 288)) = v5;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 292)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 8));
    return 1;
}

// FUNCTION_MARKER 0x80056740u 0x80056740
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80056740(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80056740u, "SCUS_942.40");
    uint32 actor = (uint32)a1;
    uint32 state = r_u32(actor + 28u);
    uint32 type;
    uint32 row;
    uint32 result = (uint32)sub_8006C180() & 255u;
    uint32 count;
    uint32 offset;
    uint32 adjustment = 0u;
    sint32 random_value;
    sint32 index;
    sint32 selected;

    if (result)
        return (sint32)result;
    result = r_u8(state + 80u);
    if (result && a2 >= 2)
        return 0;
    type = r_u8(state + 82u);
    if (type == 12u)
        return 12;
    row = 0x8010CBE8u + ((type + (type << 1u)) << 4u) + ((uint32)a2 << 3u);
    result = r_u32(row);
    if (!result)
        return 0;

    random_value = sub_800EC8F4();
    count = r_u8(row + 4u);
    type = r_u8(state + 82u);
    if (!count)
        _break(7u, 0);
    index = random_value % (sint32)count;
    result = a2 < 2;
    if (type == 10u)
    {
        uint32 owner = r_u32(0x80116B9Cu);
        uint32 flags = r_u32(owner + 16u);
        result = r_u32(flags) & 2u;
        if (!result)
            return 0;
        selected = (sint32)r_s16(state + 44u);
        result = a2 < 2;
        if (selected >= 257)
            return (sint32)result;
    }
    offset = (uint32)index << 1u;
    if (!result)
    {
        uint32 choices = r_u32(row);
        selected = (sint32)r_s16(choices + offset);
        result = r_u32(SF_DRAFT_GP + 908u);
        if (result == (uint32)selected)
            return (sint32)result;
        result = (uint32)((sint32)r_s16(row + 6u) >> ((uint32)index & 31u)) & 1u;
        if (result)
            return (sint32)result;
    }
    if (!type)
        adjustment = r_u16(actor + 2u) & 1u;
    else if (type == 2u)
    {
        uint32 owner = r_u32(0x80116B9Cu);
        uint32 flags = r_u32(owner + 16u);
        result = r_u32(flags) & 2u;
        if (!result)
            return 0;
        adjustment = r_u16(actor + 2u) & 3u;
    }
    selected = (sint32)r_s16(r_u32(row) + offset);
    sub_8006C620((uint32)selected + adjustment, a1, 0);
    selected = (sint32)r_s16(r_u32(row) + offset);
    w_u32(SF_DRAFT_GP + 908u, (uint32)selected);
    result = (uint32)sub_800EC8F4();
    type = r_u8(state + 82u);
    result |= 0xC0u;
    w_u8(state + 80u, (uint8)result);
    if (type < 2u)
        return (sint32)result;
    result = 1u << ((uint32)index & 31u);
    w_u16(row + 6u, (uint16)(r_u16(row + 6u) | result));
    type = r_u8(state + 82u);
    result = type < 3u;
    if (!result)
    {
        result = r_u8(state + 80u) >> 1u;
        w_u8(state + 80u, (uint8)result);
    }
    return (sint32)result;
}

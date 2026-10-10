#include "game_draft.h"
sint32 sub_800932DC(void);
sint32 sub_80147924(void);
sint32 sub_80148474(void);
sint32 sub_8014775C(uint32 value);
uint32 sub_80149558(void);
sint32 sub_80149880(void);
uint32 sub_80148B1C(void);
sint32 sub_80148230(sint32 value);
sint32 sub_80147B90(void);
sint32 sub_8014785C(void);
sint32 sub_80148070(sint32 value);
sint32 sub_800ED234(uint32 destination, uint32 source, sint32 size);
sint32 sub_80147C08(void);
sint32 sub_80147F28(sint32 value);
sint32 sub_80147C34(uint32 message, sint32 mode, uint32 unused, uint32 callback);
sint32 sub_80149BEC(void);
sint32 sub_8014748C(void);
sint32 sf_native_movie_input(sint32 mode, sint32 *event, sint32 *value);
sint32 sf_native_get_table(sint32 *address, sint32 *count, uint32 *flags);

sint32 sub_80149CF4(void)
{
    FUNCTION_MARKER(0x80149CF4u, "TITLE.OVL");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int result;
    int v1;
    char *v2;
    char *v3;
    int v4;
    int v5;
    uint32 v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;

    sint32 v13;
    int v14;
    int v15;
    int v16;

    sub_8003B1FC();
    if ((unsigned int)(*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) >= 8)
    {
        result = (*SF_DRAFT_PTR(uint32, 0x80116984u));
        v1 = 0;
        if (!(*SF_DRAFT_PTR(uint32, 0x80116984u)))
        {
            v2 = SF_DRAFT_PTR(char, 0x8014B4F0u);
            v3 = SF_DRAFT_PTR(char, 0x8014B518u);
            do
            {
                if (v3)
                    sub_800C7B68((*SF_DRAFT_PTR(uint32, 0x80116964u)), sf_draft_guest_address(v2));
                v2 += 44;
                ++v1;
                v3 += 44;
            } while (v1 < 4);
            sub_80016094();
            if ((*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) == 9)
            {
                return sub_800932DC();
            }
            else
            {
                result = 8;
                if ((sint32)(*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) >= 10)
                {
                    result = 11;
                    if ((*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) != 10 && (*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) == 11)
                    {
                        (*SF_DRAFT_PTR(uint8, 0x80116AF0u)) = 1;
                        sub_800D85BC(4, 0, 0);
                        v4 = *SF_DRAFT_PTR(_DWORD, (4 * (*SF_DRAFT_PTR(uint32, 0x80116B8Cu))++ - 2146345420));
                        sub_80014D24(v4);
                        result = 2;
                        if ((*SF_DRAFT_PTR(uint32, 0x80116B8Cu)) == 2)
                            (*SF_DRAFT_PTR(uint32, 0x80116B8Cu)) = 0;
                    }
                }
                else if ((*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) == 8)
                {
                    result = sub_80014D24(0);
                    (*SF_DRAFT_PTR(uint32, 0x801163B4u)) = 0;
                }
            }
        }
        return result;
    }
    if ((*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) == 7)
    {
        sub_80147924();
        sub_80148474();
        (*SF_DRAFT_PTR(uint32, 0x8014A840u)) = 1;
        v5 = 0;
        if ((*SF_DRAFT_PTR(uint32, 0x801169A4u)) < 0x28u)
            v5 = 3;
        sub_8014775C(v5);
    }
    if ((*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) != 3 && (unsigned int)(*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) >= 2 && (*SF_DRAFT_PTR(uint32, 0x8014A818u)) == 7)
        goto LABEL_31;
    if ((*SF_DRAFT_PTR(uint32, 0x8014B468u)))
    {
        sub_80149558();
        goto LABEL_31;
    }
    v6 = *SF_DRAFT_PTR(_DWORD, (0x80146C78u + 4u * (*SF_DRAFT_PTR(uint32, 0x8014A8B0u))));
    if (v6)
        sf_draft_call(v6, 0, NULL);
    result = (unsigned int)(*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) < 7;
    if ((unsigned int)(*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) < 7)
    {
        sub_80149880();
        result = (unsigned int)(*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) < 7;
        if ((unsigned int)(*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) < 7)
        {
        LABEL_31:
            if ((*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) == 3)
            {
                result = (*SF_DRAFT_PTR(uint8, 0x80141A20u));
                if (!(*SF_DRAFT_PTR(uint8, 0x80141A20u)))
                    return sub_80148B1C();
                return result;
            }
            v7 = sf_native_movie_input(1, &v13, &v14);
            if (!v7)
                goto LABEL_89;
            if (v7 <= 0)
            {
                if (v7 == -1)
                {
                    if ((*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) == 1 && (*SF_DRAFT_PTR(uint32, 0x8014A838u)) != 4 || (*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) == 4 || (*SF_DRAFT_PTR(sint16, 0x8014A814u)) >= (*SF_DRAFT_PTR(sint16, 0x8014A816u)))
                    {
                        sub_80148230(0);
                    }
                    else
                    {
                        v8 = sub_80147B90();
                        sub_80148230(v8);
                    }
                }
                goto LABEL_89;
            }
            if (v7 != 1)
                goto LABEL_89;
            if ((*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) == 1 && (*SF_DRAFT_PTR(uint32, 0x8014A838u)) == 4 && (*SF_DRAFT_PTR(sint16, 0x8014A814u)) >= (*SF_DRAFT_PTR(sint16, 0x8014A816u)))
                sub_8014785C();
            if (v13 != 2)
            {
                if (v13 >= 3)
                {
                    if (v13 == 3)
                    {
                        if ((*SF_DRAFT_PTR(uint32, 0x8014A818u)) == 7)
                            (*SF_DRAFT_PTR(uint32, 0x8014A8F8u)) = 0x80147C08u;
                        if (!sub_80148070(v14))
                            goto LABEL_89;
                        if ((*SF_DRAFT_PTR(sint16, 0x8014A814u)) < (*SF_DRAFT_PTR(sint16, 0x8014A816u)) && (SF_DRAFT_PTR(uint32, 0x8014A928u)[(*SF_DRAFT_PTR(sint16, 0x8014A814u))] == 8))
                        {
                            sf_native_get_table(&v15, &v16, NULL);
                            if (sub_800ED234(0x8014B258u, v15, v16))
                            {
                                sub_80147C08();
                                if (++(*SF_DRAFT_PTR(uint32, 0x8014A804u)) < 10)
                                {
                                    sub_80147F28(1);
                                    goto LABEL_89;
                                }
                                while ((*SF_DRAFT_PTR(uint32, 0x8014A8ECu)) >= 2)
                                    sub_8014785C();
                                sub_80147C34((*SF_DRAFT_PTR(uint32, 0x8014A48Cu)), 1, 0, 0);
                            }
                            (*SF_DRAFT_PTR(uint32, 0x8014A804u)) = 0;
                        }
                        else
                        {
                            sub_80149BEC();
                        }
                    LABEL_89:
                        if ((*SF_DRAFT_PTR(uint32, 0x8014B250u)) || (*SF_DRAFT_PTR(uint32, 0x8014B254u)))
                            sub_8014748C();
                        return sub_80086830();
                    }
                    if (v13 != 4)
                        goto LABEL_89;
                    v9 = v14;
                }
                else
                {
                    if (v13 != 1)
                        goto LABEL_89;
                    v9 = v14;
                    if (v14 == 3)
                    {
                        (*SF_DRAFT_PTR(uint32, 0x8014A818u)) = 7;
                        sub_80148230(1);
                        goto LABEL_89;
                    }
                    if (v14 == v13)
                    {
                        if ((*SF_DRAFT_PTR(uint32, 0x8014A818u)) != v14)
                        {
                            (*SF_DRAFT_PTR(uint32, 0x8014A818u)) = v14;
                            if ((*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) != 2 && (*SF_DRAFT_PTR(uint32, 0x8014A8B0u)))
                            {
                                v10 = (*SF_DRAFT_PTR(uint32, 0x8014A8B0u));
                                do
                                {
                                    if (v10 == 6)
                                        break;
                                    sub_8014785C();
                                    v10 = (*SF_DRAFT_PTR(uint32, 0x8014A8B0u));
                                    if ((*SF_DRAFT_PTR(uint32, 0x8014A8B0u)) == 2)
                                        break;
                                } while ((*SF_DRAFT_PTR(uint32, 0x8014A8B0u)));
                            }
                            sub_80147C08();
                        }
                        goto LABEL_89;
                    }
                    v11 = (*SF_DRAFT_PTR(uint32, 0x8014A818u));
                    if ((*SF_DRAFT_PTR(uint32, 0x8014A818u)))
                    {
                    LABEL_72:
                        if (v11 == 7)
                            sub_80148230(2);
                        goto LABEL_89;
                    }
                }
                sub_80148070(v9);
                goto LABEL_89;
            }
            if (!sub_80148070(v14))
                goto LABEL_89;
            v11 = (*SF_DRAFT_PTR(uint32, 0x8014A818u));
            goto LABEL_72;
        }
    }
    return result;
}

#include "game_draft.h"
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);

uint32 sub_80030FA4(sint32 a1)
{
    FUNCTION_MARKER(0x80030FA4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  __int16 *v2; 
  sint32 v3; 
  int v4; 
  int v5; 
  int v6; 
  unsigned int v7; 
  int v8; 
  __int16 v9; 
  __int16 v10; 
  __int16 v11; 
  int v12; 
  int v13; 
  unsigned int result; 
  int v15; 
  int v16; 
  v2 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a1 + 20)));
  v3 = 0;
  if ( *SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    if ( (*((_DWORD *)v2 + 1) & 2) != 0 )
      v3 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (76 * *v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 2)) == v2[45];
  }
  else if ( (*((_DWORD *)v2 + 1) & 2) != 0 && *v2 == v2[45] && (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 0x100) != 0 )
  {
    v3 = 1;
  }
  if ( v3 )
  {
    if ( *SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
    {
      result = 200;
      if ( (*SF_DRAFT_PTR(uint8, 0x801168D1u)) )
        v2[33] = 200;
    }
    else
    {
      v4 = *((_DWORD *)v2 + 42);
      if ( v4 < 0 )
      {
        v5 = v4 & 0x7FFFFFFF;
        v6 = (*SF_DRAFT_PTR(uint32, 0x80116A88u)) - *((_DWORD *)v2 + 41);
        if ( v6 >= 40 )
          *((_DWORD *)v2 + 41) = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
        else
          *((_DWORD *)v2 + 41) = (*SF_DRAFT_PTR(uint32, 0x80116A88u)) - 4 * v5 * (40 - v6) / 0x28u;
      }
      v7 = (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - *((_DWORD *)v2 + 41)) >> 2;
      if ( v7 >= 0x81 )
        v7 = 128;
      *((_DWORD *)v2 + 42) = v7;
      v8 = *SF_DRAFT_PTR(__int16, (a1 + 2));
      if ( v8 != 666 && *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v8 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 2
        || (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 0x20000000) != 0 )
      {
        v9 = 4;
        if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 82)) != 3 )
          v9 = 10;
      }
      else if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) || (v9 = 3, *v2 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u))) )
      {
        v9 = *SF_DRAFT_PTR(_WORD, ((*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 76));
      }
      v10 = v9 * v7;
      if ( (*SF_DRAFT_PTR(uint8, 0x801168D0u)) )
      {
        v11 = v9 + 6;
        if ( *v2 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
          v10 = v11 * v7;
      }
      v12 = *((_DWORD *)v2 + 12);
      v2[33] = v10;
      v13 = *SF_DRAFT_PTR(__int16, (v12 + 26));
      result = v13 < v10;
      if ( v13 < v10 )
        v2[33] = v13;
    }
  }
  else
  {
    v15 = *((_DWORD *)v2 + 42);
    result = *SF_DRAFT_PTR(uint16, (*((_DWORD *)v2 + 12) + 40));
    v2[33] = result;
    if ( v15 >= 0 )
    {
      v16 = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
      result = v15 | 0x80000000;
      *((_DWORD *)v2 + 42) = v15 | 0x80000000;
      *((_DWORD *)v2 + 41) = v16;
    }
  }
  return result;
}

sint32 sub_8006FC48(sint32 a1)
{
    FUNCTION_MARKER(0x8006FC48u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int v3; 
  _DWORD *v4; 
  int result; 
  int v6; 
  int v7; 
  bool v8; // dc
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  if ( (unsigned int)*SF_DRAFT_PTR(uint8, (a1 + 34)) - 1 >= 2 )
  {
    v4 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 12)));
    result = v4[101] & 4;
    if ( !result )
      return result;
    v11 = v4[56] + v4[60];
    v12 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 228)) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 244));
    v13 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 232)) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 248));
    v6 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 316));
    if ( v6 != 4096 )
    {
      if ( v6 )
      {
        v11 = sub_800C6D4C(v11, *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 316)));
        v12 = sub_800C6D4C(v12, v6);
        v13 = sub_800C6D4C(v13, v6);
      }
      else
      {
        v11 = 0;
        v12 = 0;
        v13 = 0;
      }
    }
    v7 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 312));
    if ( v7 )
    {
      v8 = v7 == 4096;
      v9 = v7 + 4096;
      if ( v8 )
      {
        v11 *= 2;
        v13 *= 2;
        v12 *= 2;
      }
      else
      {
        v11 = sub_800C6D4C(v11, v9);
        v12 = sub_800C6D4C(v12, v9);
        v13 = sub_800C6D4C(v13, v9);
      }
    }
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 240)) -= v11;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 244)) -= v12;
    v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    v3 = -v13;
  }
  else
  {
    v10 = (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 164))));
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 240)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 240));
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 244)) += v10;
    v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    v3 = 0;
  }
  result = *SF_DRAFT_PTR(_DWORD, (v2 + 248)) + v3;
  *SF_DRAFT_PTR(_DWORD, (v2 + 248)) = result;
  return result;
}

sint32 sub_80056994(sint32 a1)
{
    FUNCTION_MARKER(0x80056994u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  int result; 
  int v6; 
  int v7; 
  unsigned int v8; 
  int v9; 
  int v10; 
  int v11; 
  v1 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v2 = *SF_DRAFT_PTR(_DWORD, (v1 + 28));
  v3 = *SF_DRAFT_PTR(_DWORD, (v2 + 32));
  if ( (v3 & 0x80000) != 0 )
  {
    *SF_DRAFT_PTR(_DWORD, (v2 + 32)) = v3 & 0xFFFFFFEF;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 28)) + 32)) &= ~0x80000u;
    sub_80057BB4(5, *SF_DRAFT_PTR(_DWORD, (v1 + 12)), 32000, (*SF_DRAFT_PTR(__int16, (v1 + 2))));
  }
  else
  {
    *SF_DRAFT_PTR(_DWORD, (v2 + 32)) = v3 | 0x10;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 28)) + 32)) |= 0x80000u;
    *SF_DRAFT_PTR(_BYTE, (v1 + 33)) = 100;
  }
  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v1 + 28)) + 71)) = 99;
  *SF_DRAFT_PTR(_WORD, *SF_DRAFT_PTR(uint32, (v1 + 20))) = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (v1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
  while ( 1 )
  {
    v4 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (v1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
    result = 4 * v4;
    if ( v4 < 0 )
      break;
    result = 76 * v4 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    v1 = *SF_DRAFT_PTR(_DWORD, (result + 52));
    v6 = *SF_DRAFT_PTR(_DWORD, (v1 + 28));
    if ( !v6 )
      break;
    if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v1 + 24)) + 8)) > 0 )
    {
      v7 = *SF_DRAFT_PTR(_DWORD, (v6 + 32));
      if ( (v7 & 0x80000) != 0 )
        v8 = v7 & 0xFFF7FFFF;
      else
        v8 = v7 | 0x80000;
      *SF_DRAFT_PTR(_DWORD, (v6 + 32)) = v8;
      v9 = *SF_DRAFT_PTR(_DWORD, (v1 + 28));
      v10 = *SF_DRAFT_PTR(_DWORD, (v9 + 32));
      if ( (v10 & 0x80000) != 0 )
      {
        *SF_DRAFT_PTR(_DWORD, (v9 + 32)) = v10 | 0x400000;
        v11 = *SF_DRAFT_PTR(_DWORD, (v1 + 24));
        *SF_DRAFT_PTR(_BYTE, (v1 + 33)) = 1;
        *SF_DRAFT_PTR(_WORD, (v11 + 6)) = 50;
        *SF_DRAFT_PTR(_WORD, (v11 + 8)) = 50;
      }
      else
      {
        *SF_DRAFT_PTR(_DWORD, (v9 + 32)) = v10 & 0xFFBFFFFF;
        sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), 87);
        if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v1 + 28)) + 82)) == 4 )
          *SF_DRAFT_PTR(_BYTE, (v1 + 33)) = 80;
        else
          *SF_DRAFT_PTR(_BYTE, (v1 + 33)) = 0;
        *SF_DRAFT_PTR(_BYTE, (v1 + 35)) |= 8u;
      }
      *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v1 + 28)) + 71)) &= ~1u;
      *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v1 + 28)) + 72)) = 0;
      *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v1 + 28)) + 69)) = 0;
      *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 28)) + 32)) |= 8u;
      *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 28)) + 32)) |= 0x8000u;
    }
  }
  return result;
}

sint32 sub_800E2004(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x800E2004u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int *a2_view = SF_DRAFT_PTR(int, a2);
    char *a3_view = SF_DRAFT_PTR(char, a3);
    _DWORD *a4_view = SF_DRAFT_PTR(_DWORD, a4);
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  sint32 v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  char v14; 
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
  v16 = *a2_view;
  v17 = a2_view[1];
  v18 = a2_view[2];
  v5 = a2_view[6];
  v26 = a2_view[5];
  v27 = v5;
  v6 = v5;
  v7 = a2_view[4];
  v25 = v7;
  if ( v7 < 0 )
    v7 = -v7;
  if ( v5 < 0 )
    v6 = -v5;
  v8 = v26;
  if ( v26 < 0 )
    v8 = -v26;
  if ( v8 < v6 )
  {
    v9 = v8 < v6;
    if ( v7 >= v6 )
    {
      v6 = v7;
      goto LABEL_14;
    }
  }
  else
  {
    v9 = v8 < v6;
    if ( v7 >= v8 )
    {
      v6 = v7;
      goto LABEL_14;
    }
  }
  if ( !v9 )
    v6 = v8;
LABEL_14:
  if ( v6 == v7 )
  {
    v10 = v25;
    v21 = 0;
    v23 = 0;
    v19 = -v26;
    v20 = v25;
    v22 = -v27;
  }
  else
  {
    if ( v6 == v8 )
    {
      v19 = 0;
      v24 = 0;
      v20 = -v27;
      v21 = v26;
      v22 = v26;
      v23 = -v25;
      goto LABEL_20;
    }
    v20 = 0;
    v22 = 0;
    v10 = -v26;
    v19 = v27;
    v21 = -v25;
    v23 = v27;
  }
  v24 = v10;
LABEL_20:
  v11 = v22 * v21 - v24 * v19;
  if ( v22 * v21 == v24 * v19 )
  {
    v14 = 0;
  }
  else
  {
    v12 = ((a1_view[2] - v18) * v22 - (*a1_view - v16) * v24) * v20 + ((*a1_view - v16) * v21 - (a1_view[2] - v18) * v19) * v23;
    v13 = v12 / v11;
    if ( v11 == -1 && v12 == 0x80000000 )
      _break(6u, 0);
    v14 = 1;
    *a4_view = v17 + v13;
  }
  *a3_view = v14;
  return 0;
}

void sub_800CD35C(uint32 a1)
{
    FUNCTION_MARKER(0x800CD35Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    __int16 *a1_view = SF_DRAFT_PTR(__int16, a1);
  __int16 v2; 
  __int16 v3; 
  __int16 v4; 
  __int16 v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  __int16 v12; 
  __int16 v13; 
  __int16 v14; 
  __int16 v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  (*SF_DRAFT_PTR(uint32, 0x8013C5D8u)) = 0;
  v2 = a1_view[5];
  a1_view[2] = -a1_view[2];
  v3 = a1_view[8];
  a1_view[5] = -v2;
  v4 = *a1_view;
  a1_view[8] = -v3;
  v5 = a1_view[3];
  *a1_view = -v4;
  v6 = -(uint16)a1_view[6];
  a1_view[3] = -v5;
  a1_view[6] = v6;
  v7 = *((_DWORD *)a1_view + 1);
  v8 = *((_DWORD *)a1_view + 2);
  (*SF_DRAFT_PTR(uint32, 0x8013C5DCu)) = *(_DWORD *)a1_view;
  (*SF_DRAFT_PTR(uint32, 0x8013C5E0u)) = v7;
  (*SF_DRAFT_PTR(uint32, 0x8013C5E4u)) = v8;
  v9 = *((_DWORD *)a1_view + 4);
  v10 = *((_DWORD *)a1_view + 5);
  (*SF_DRAFT_PTR(uint32, 0x8013C5E8u)) = *((_DWORD *)a1_view + 3);
  (*SF_DRAFT_PTR(uint32, 0x8013C5ECu)) = v9;
  (*SF_DRAFT_PTR(uint32, 0x8013C5F0u)) = v10;
  v11 = *((_DWORD *)a1_view + 7);
  (*SF_DRAFT_PTR(uint32, 0x8013C5F4u)) = *((_DWORD *)a1_view + 6);
  (*SF_DRAFT_PTR(uint32, 0x8013C5F8u)) = v11;
  sub_800E9F84(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x801311F0u))));
  sub_800C6F44(sf_draft_guest_address((uint16 *)(&(*SF_DRAFT_PTR(uint32, 0x8010E1ECu)))));
  (*SF_DRAFT_PTR(uint32, 0x8012DB60u)) = (*SF_DRAFT_PTR(uint32, 0x80130CD8u));
  (*SF_DRAFT_PTR(uint32, 0x8012DB64u)) = (*SF_DRAFT_PTR(uint32, 0x80130CDCu));
  (*SF_DRAFT_PTR(uint32, 0x8012DB68u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE0u));
  (*SF_DRAFT_PTR(uint32, 0x8012DB6Cu)) = (*SF_DRAFT_PTR(uint32, 0x80130CE4u));
  (*SF_DRAFT_PTR(uint32, 0x8012DB70u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE8u));
  (*SF_DRAFT_PTR(uint32, 0x8012DB74u)) = (*SF_DRAFT_PTR(uint32, 0x80130CECu));
  (*SF_DRAFT_PTR(uint32, 0x8012DB78u)) = (*SF_DRAFT_PTR(uint32, 0x80130CF0u));
  (*SF_DRAFT_PTR(uint32, 0x8012DB7Cu)) = (*SF_DRAFT_PTR(uint32, 0x80130CF4u));
  v12 = a1_view[5];
  a1_view[2] = -a1_view[2];
  v13 = a1_view[8];
  a1_view[5] = -v12;
  v14 = *a1_view;
  a1_view[8] = -v13;
  v15 = a1_view[3];
  *a1_view = -v14;
  v16 = -(uint16)a1_view[6];
  a1_view[3] = -v15;
  a1_view[6] = v16;
  v17 = *((_DWORD *)a1_view + 1);
  v18 = *((_DWORD *)a1_view + 2);
  (*SF_DRAFT_PTR(uint32, 0x8013C5DCu)) = *(_DWORD *)a1_view;
  (*SF_DRAFT_PTR(uint32, 0x8013C5E0u)) = v17;
  (*SF_DRAFT_PTR(uint32, 0x8013C5E4u)) = v18;
  v19 = *((_DWORD *)a1_view + 4);
  v20 = *((_DWORD *)a1_view + 5);
  (*SF_DRAFT_PTR(uint32, 0x8013C5E8u)) = *((_DWORD *)a1_view + 3);
  (*SF_DRAFT_PTR(uint32, 0x8013C5ECu)) = v19;
  (*SF_DRAFT_PTR(uint32, 0x8013C5F0u)) = v20;
  v21 = *((_DWORD *)a1_view + 7);
  (*SF_DRAFT_PTR(uint32, 0x8013C5F4u)) = *((_DWORD *)a1_view + 6);
  (*SF_DRAFT_PTR(uint32, 0x8013C5F8u)) = v21;
  sub_800E9F84(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x801311F0u))));
  (*SF_DRAFT_PTR(uint32, 0x8012FD48u)) = (*SF_DRAFT_PTR(uint32, 0x80130CD8u));
  (*SF_DRAFT_PTR(uint32, 0x8012FD4Cu)) = (*SF_DRAFT_PTR(uint32, 0x80130CDCu));
  (*SF_DRAFT_PTR(uint32, 0x8012FD50u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE0u));
  (*SF_DRAFT_PTR(uint32, 0x8012FD54u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE4u));
  (*SF_DRAFT_PTR(uint32, 0x8012FD58u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE8u));
  (*SF_DRAFT_PTR(uint32, 0x8012FD5Cu)) = (*SF_DRAFT_PTR(uint32, 0x80130CECu));
  (*SF_DRAFT_PTR(uint32, 0x8012FD60u)) = (*SF_DRAFT_PTR(uint32, 0x80130CF0u));
  (*SF_DRAFT_PTR(uint32, 0x8012FD64u)) = (*SF_DRAFT_PTR(uint32, 0x80130CF4u));
  sub_800C6F44(sf_draft_guest_address((uint16 *)(&(*SF_DRAFT_PTR(uint32, 0x8010E1ECu)))));
}

sint32 sub_800C34C0(sint16 a1, sint16 a2, uint32 a3, uint32 a4, sint16 a9)
{
    FUNCTION_MARKER(0x800C34C0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    __int16 *a3_view = SF_DRAFT_PTR(__int16, a3);
    __int16 *a4_view = SF_DRAFT_PTR(__int16, a4);
  int v10; 
  int result; 
  __int16 v12; 
  int v13; 
  int v14; 
  __int16 v15; 
  __int16 v16; 
  int v17; 
  int v18; 
  bool v19; // dc
  sint32 v20; 
  v10 = a1 * SF_DRAFT_PTR(uint16, 0x80116858u)[a9] / 127;
  result = v10 << 16;
  v12 = a2;
  if ( !(v10 << 16) )
  {
    *a4_view = 0;
    *a3_view = 0;
    return result;
  }
  v13 = 0;
  if ( (uint16)(a2 - 91) < 0xB3u )
  {
    v14 = a2 - 180;
    if ( v14 < 0 )
      v14 = 180 - a2;
    v13 = 90 - v14;
    v15 = 180 - a2;
    v12 = v15;
    if ( (v15 & 0x8000) != 0 )
      v12 = v15 + 360;
  }
  if ( v12 >= 91 )
    v12 -= 360;
  v16 = (__int16)(127 * (v12 + 91)) / 180;
  if ( *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1880)) )
  {
    v18 = v16;
    v19 = v16 != 64;
    v20 = v16 < 64;
    if ( v19 )
    {
      if ( v20 )
      {
        *a3_view = v10;
        *a4_view = (__int16)v10 * v18 / 64;
        goto LABEL_20;
      }
      *a3_view = (__int16)v10 * (127 - v18) / 64;
    }
    else
    {
      *a3_view = v10;
    }
    *a4_view = v10;
LABEL_20:
    if ( v13 )
    {
      *a3_view -= *a3_view / 4 * v13 / 90;
      *a4_view -= (__int16)(*a4_view / 4 * v13) / 90;
    }
    goto LABEL_22;
  }
  if ( v13 )
  {
    v17 = 95 * (__int16)v10 / 100;
    *a4_view = v17;
    *a3_view = v17;
  }
  else
  {
    *a4_view = v10;
    *a3_view = v10;
  }
LABEL_22:
  if ( !*a3_view )
    *a3_view = 1;
  result = 1;
  if ( !*a4_view )
    *a4_view = 1;
  return result;
}

BOOL sub_800C3814(sint32 a1, sint16 a2)
{
    FUNCTION_MARKER(0x800C3814u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v3; 
  int v6; 
  __int16 *v8; 
  int v9; 
  int v10; 
  int *v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  sint32 result; 
  int v22; 
  v3 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1964));
  if ( v3 && v3 != 3 && a1 != 2 )
  {
    if ( v3 == 2 )
      sub_800C4AC4();
    v6 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3652));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1964)) = 0;
    sub_800C3814(0, v6);
    sub_800C3814(1, (*SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3296))));
  }
  v8 = &SF_DRAFT_PTR(uint16, 0x80116858u)[a1];
  *v8 = a2;
  if ( a2 >= 128 )
    *v8 = 127;
  v9 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1884));
  if ( v9 && a1 == *SF_DRAFT_PTR(uint8, (24 * *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 1892)) + v9 + 18)) )
    sub_800C0D4C();
  if ( a1 == 2 )
  {
    v10 = 60 * *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 1952)) / 100;
    if ( (__int16)v10 >= 128 )
      LOWORD(v10) = 127;
    sub_800C34C0(v10, *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1954)), sf_draft_guest_address((__int16 *)(&v22)), sf_draft_guest_address((__int16 *)(&v22) + 1), a1);
    sub_800F74F4(0, (__int16)v22, SHIWORD(v22));
  }
  v11 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x801311B0u)));
  do
  {
    v12 = *v11;
    if ( *v11 )
    {
      v13 = *SF_DRAFT_PTR(_DWORD, (v12 + 4));
      v14 = 0;
      if ( *SF_DRAFT_PTR(_BYTE, (v12 + 12)) )
      {
        v15 = *SF_DRAFT_PTR(uint8, (v12 + 12));
        v16 = 0;
        do
        {
          v17 = 24 * (v16 >> 16) + v13;
          v18 = *SF_DRAFT_PTR(_WORD, v17) & 0x1F;
          if ( (v18 == 1 || v18 == 3) && *SF_DRAFT_PTR(char, (v17 + 16)) != -1 || (v19 = v14 + 1, (*SF_DRAFT_PTR(_WORD, v17) & 0x1F) == 2) )
          {
            sub_800C12E4((*v11), v14, *SF_DRAFT_PTR(uint8, (24 * (__int16)v14 + v13 + 9)), 0, 2);
            v19 = v14 + 1;
          }
          v14 = v19;
          v16 = v19 << 16;
        }
        while ( (__int16)v19 < v15 );
      }
    }
    result = (int)++v11 < (int)&(*SF_DRAFT_PTR(uint32, 0x801311F0u));
  }
  while ( (int)v11 < (int)&(*SF_DRAFT_PTR(uint32, 0x801311F0u)) );
  return result;
}

uint32 sub_80028C7C(sint32 a1)
{
    FUNCTION_MARKER(0x80028C7Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int v3; 
  _DWORD *v4; 
  int *result; 
  int v6; 
  int v7; 
  int v9; 
  uint8 *v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v20; 
  v2 = 76 * a1;
  v3 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v4 = SF_DRAFT_PTR(_DWORD, sub_800CB720(*SF_DRAFT_PTR(_DWORD, (v3 + 8)), 0x4000));
  if ( v4 || (v4 = SF_DRAFT_PTR(_DWORD, sub_800CB720(*SF_DRAFT_PTR(_DWORD, (v3 + 8)), 0)), result = 0, v4) )
  {
    v6 = v4[5];
    v7 = sub_800CB764(sf_draft_guest_address(v4));
    if ( v7 )
    {
      if ( a1 != 666 && *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 60 )
        goto LABEL_18;
      v9 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 8)) + 16));
      if ( (*SF_DRAFT_PTR(_DWORD, (v9 + 40)) & 0x2000000) != 0 )
        v10 = SF_DRAFT_PTR(uint8, *SF_DRAFT_PTR(uint32, (v9 + 44)));
      else
        v10 = SF_DRAFT_PTR(uint8, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (v9 + 44)) + 348)));
      if ( *v10 == 234 )
        v10 += 256 * v10[2] + v10[1];
      if ( SF_DRAFT_PTR(uint8, v4[3]) == v10 )
      {
        v11 = 0;
        if ( *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 484)) )
        {
          do
          {
            v12 = v11 + 1;
            v13 = (v11 + 1) << 12;
            v14 = v13 >> 31;
            v15 = (uint64)(2454267027LL * v13) >> 32;
            v16 = 4 * v11;
            SF_DRAFT_PTR(uint8, 0x80119408u)[4 * v11] = sub_800EA474(v13 / 14) / 4096;
            v17 = sub_800EA474((v15 >> 2) - v14);
            v18 = v17 >> 11;
            if ( v17 < 0 )
              v18 = (v17 + 2047) >> 11;
            SF_DRAFT_PTR(uint8, 0x80119409u)[v16] = 98 - v18;
            SF_DRAFT_PTR(uint8, 0x8011940Au)[v16] = 25 - sub_800EA474((v15 >> 2) - v14) / 1024;
            ++v11;
          }
          while ( v12 < 14 );
          *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 484)) = 0;
        }
        return 0x80119404u + 4u * v6;
      }
      else
      {
LABEL_18:
        v20 = 4 * v6;
        if ( v6 != 1 )
          return (uint32)(v7 + v20 - 4);
        v20 = 4;
        if ( v4[11] )
          return (uint32)(v7 + v20 - 4);
        else
          return (uint32)(v7 + 4);
      }
    }
    else
    {
      return 0;
    }
  }
  return sf_draft_guest_address(result);
}

uint32 sub_80016568(uint32 a1)
{
    FUNCTION_MARKER(0x80016568u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    const char *a1_view = SF_DRAFT_PTR(const char, a1);
  int v2; 
  const char *v3; 
  int v4; 
  int *v6; 
  int *v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v15; 
  char v16[24]; 
  char v17[56]; 
  v2 = 5;
  sub_800CDA74(0);
  sub_800405F4(0, 0);
  if ( !(uint8)sub_800826C0() )
  {
    if ( (uint8)sub_8006C180() )
    {
      sub_8006C7CC();
    }
    else
    {
      sub_80082DE0();
      sub_80082EC0();
      sub_800826C0();
    }
  }
  sub_80015B68(SF_DRAFT_PTR(const char, sf_draft_guest_address(SF_DRAFT_PTR(const char, SF_DRAFT_PTR(char, 0x80010050u)))), 0);
  sub_8013E27C(25);
  if ( (*SF_DRAFT_PTR(uint8, 0x8013D558u)) )
  {
    sub_8001629C();
    (*SF_DRAFT_PTR(uint8, 0x8013D558u)) = 0;
  }
  v3 = (const char *)(&(*SF_DRAFT_PTR(uint32, 0x80115C70u)));
  v4 = *(uint8 *)a1_view;
  if ( v4 != 92 && v4 != 47 )
    v3 = SF_DRAFT_PTR(char, 0x800100B4u);
  sub_800EC924(sf_draft_guest_address(v17), 0x800100A8u, sf_draft_guest_address(v3), a1);
  v6 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8013D4C0u)));
  v7 = (int *)a1_view;
  do
  {
    v8 = v7[1];
    v9 = v7[2];
    v10 = v7[3];
    *v6 = *v7;
    v6[1] = v8;
    v6[2] = v9;
    v6[3] = v10;
    v7 += 4;
    v6 += 4;
  }
  while ( v7 != SF_DRAFT_PTR(int, (a1_view + 144)) );
  v11 = v7[1];
  v12 = v7[2];
  *v6 = *v7;
  v6[1] = v11;
  v6[2] = v12;
  if ( *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 32)) )
  {
    v2 = 5;
  }
  else if ( sub_800DEB50(sf_draft_guest_address(v16), sf_draft_guest_address(v17)) )
  {
    sub_8013E258(0);
    if ( a1_view[136] )
      sub_800D79E8(1);
    if ( *((_WORD *)a1_view + 67) )
      v13 = 135000;
    else
      v13 = 155000;
    (*SF_DRAFT_PTR(uint32, 0x8013D554u)) = v13;
    v2 = sub_8013E28C(sf_draft_guest_address(v17), *((__int16 *)a1_view + 66), *((__int16 *)a1_view + 67), -1, 0x8001629Cu, 0x8014C0A8u, (sint32)*SF_DRAFT_PTR(uint32, 0x8013D554u));
  }
  if ( v2 )
  {
    v15 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 16));
    (*SF_DRAFT_PTR(uint8, 0x8013D558u)) = 0;
    if ( v15 != 4 )
      sub_800CA718();
    if ( *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 16)) == 3 )
      sub_80016094();
    return sub_8001629C();
  }
  else
  {
    if ( *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 16)) != 4 )
      sub_800CA718();
    return sub_800164AC();
  }
}

sint32 sub_800CBCB8(sint32 a1, sint32 a2, sint32 a3, uint32 a4, sint8 a9)
{
    FUNCTION_MARKER(0x800CBCB8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a4_view = SF_DRAFT_PTR(_DWORD, a4);
  int v13; 
  int *v14; 
  int result; 
  int v17; 
  int i; 
  int v19; 
  int v20; 
  _DWORD *v21; 
  int v22; 
  int v23; 
  int v24; 
  unsigned int v25; 
  int v26; 
  int v27; 
  int v28; 
  unsigned int v29; 
  bool v30; // dc
  sint32 v31; 
  int v32; 
  v13 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 32));
  v14 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (v13 + 16)));
  if ( a1 == (*SF_DRAFT_PTR(uint32, 0x8012D734u)) )
  {
    if ( !*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2212)) || (*SF_DRAFT_PTR(uint32, 0x8013B94Cu)) != *SF_DRAFT_PTR(_DWORD, (a1 + 24)) )
      sub_800CBC7C();
    v14 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011650Cu)));
  }
  sub_800E95B4(300);
  result = 0;
  if ( v14 )
  {
    v17 = 0;
    if ( *v14 <= 0 )
      return 0;
    for ( i = 0; ; i += 60 )
    {
      v19 = v14[1] + i;
      v20 = *SF_DRAFT_PTR(_DWORD, (v19 + 4));
      if ( v20 == *SF_DRAFT_PTR(_DWORD, (a1 + 24)) )
        break;
      if ( ++v17 >= *v14 )
        return 0;
    }
    v21 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (4 * a2 + v20)));
    v22 = a9 ? sub_800D2DD4(a1, a2, a3, sf_draft_guest_address(a4_view)) : sub_800D2BF0(v13, a2, a3, a1);
    if ( !v22 )
      return 0;
    v23 = 0;
    v24 = *SF_DRAFT_PTR(_DWORD, (v19 + 12));
    v25 = v22;
    if ( !a9 )
    {
      sub_800EADF4(sf_draft_guest_address(v21), a3, sf_draft_guest_address(a4_view));
      *a4_view += v21[5];
      a4_view[1] += v21[6];
      v26 = (sint32)(0u - (a4_view[1]));
      a4_view[2] += v21[7];
      a4_view[1] = v26;
    }
    if ( v24 == 10 )
      return 0;
    v27 = v24;
    if ( v24 > 0 )
    {
      v28 = v19;
      while ( 1 )
      {
        v29 = *SF_DRAFT_PTR(_DWORD, (v28 + 16));
        v30 = v25 == v29;
        v31 = v25 < v29;
        if ( v30 )
          return 0;
        v27 = v24;
        if ( v31 )
          break;
        ++v23;
        v28 += 4;
        if ( v23 >= v24 )
        {
          v27 = v24;
          break;
        }
      }
    }
    if ( v23 < v27 )
    {
      v32 = 4 * v27 + v19;
      do
      {
        --v27;
        *SF_DRAFT_PTR(_DWORD, (v32 + 16)) = *SF_DRAFT_PTR(_DWORD, (v32 + 12));
        v32 -= 4;
      }
      while ( v23 < v27 );
    }
    *SF_DRAFT_PTR(_DWORD, (4 * v23 + v19 + 16)) = v25;
    result = 1;
    ++*SF_DRAFT_PTR(_DWORD, (v19 + 12));
  }
  return result;
}

sint32 sub_8004C0E8(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8004C0E8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  __int16 v11; 
  sint32 v12; 
  int v13; 
  int v14; 
  int result; 
  bool v16; // dc
  v3 = 0;
  v4 = 0;
  v5 = -1;
  v6 = 0;
  if ( a2 )
  {
    v3 = a2;
  }
  else
  {
    v7 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2676));
    if ( *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2696)) < v7 )
    {
      v8 = 0;
      if ( v7 > 0 )
      {
        v9 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2676));
        v10 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3256));
        while ( 1 )
        {
          v11 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2708)) + 1;
          *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2708)) = v11;
          if ( v11 >= v9 )
            *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2708)) = 0;
          ++v8;
          if ( *SF_DRAFT_PTR(__int16, (52 * *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2708)) + v10 + 30)) == -1 )
            break;
          if ( v8 >= v9 )
            goto LABEL_12;
        }
        v3 = 52 * *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2708)) + v10;
      }
    }
  }
LABEL_12:
  if ( !v3 )
    return v3;
  if ( (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3348)) & 0x100000) == 0 )
  {
    v12 = a1 < 4;
    if ( a1 >= 9 )
    {
      v12 = a1 < 4;
      if ( *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3708)) + a1 >= 129 )
      {
        a1 >>= 2;
        v12 = a1 < 4;
      }
    }
    if ( !v12 && *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3708)) + a1 >= 121 )
      a1 >>= 1;
  }
  v13 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2692));
  if ( v13 < 160 )
  {
    v14 = 52 * v13;
    do
    {
      if ( SF_DRAFT_PTR(uint16, 0x80137764u)[v14] == -32768 )
      {
        if ( v5 >= 0 )
          SF_DRAFT_PTR(uint16, 0x80137766u)[52 * v6] = v13;
        else
          v5 = v13;
        ++v4;
        ++*SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3708));
        v6 = v13;
        if ( v4 == a1 )
          break;
      }
      ++v13;
      v14 += 52;
    }
    while ( v13 < 160 );
  }
  result = 0;
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      SF_DRAFT_PTR(uint16, 0x80137766u)[52 * v6] = *SF_DRAFT_PTR(_WORD, (v3 + 30));
    }
    else
    {
      SF_DRAFT_PTR(uint16, 0x80137766u)[52 * v6] = -1;
      sub_8004BE10(v3);
    }
    v16 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2692)) >= v6;
    *SF_DRAFT_PTR(_WORD, (v3 + 30)) = v5;
    if ( !v16 )
    {
      *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2692)) = v6;
      return v3;
    }
    return v3;
  }
  return result;
}

uint32 sub_800C8EE8(sint32 a1)
{
    FUNCTION_MARKER(0x800C8EE8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  unsigned int *v3; 
  unsigned int *v4; 
  unsigned int *v5; 
  int v6; 
  int v7; 
  int v8; 
  int *v9; 
  int v10; 
  int *v11; 
  char v12; 
  uint16 v13; 
  int v14; 
  __int16 v15; 
  bool v16; // dc
  sint32 v17; 
  __int16 v18; 
  int v19; 
  unsigned int v20; 
  unsigned int result; 
  v2 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2038));
  v3 = SF_DRAFT_PTR(unsigned int, *SF_DRAFT_PTR(uint32, (a1 + 4)));
  v4 = (unsigned int *)(&SF_DRAFT_PTR(uint32, 0x801223C8u)[4 * v2]);
  v5 = (unsigned int *)(&SF_DRAFT_PTR(uint32, 0x801223E8u)[3 * v2]);
  v6 = (uint8)(*SF_DRAFT_PTR(uint32, 0x800D37F4u));
  if ( *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2181)) )
  {
    v7 = 0;
    v8 = 0;
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2181)) = 0;
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2162)) = v6;
    do
    {
      v9 = &SF_DRAFT_PTR(uint32, 0x801223E8u)[v8];
      v8 += 3;
      v10 = 4 * v7++;
      v11 = &SF_DRAFT_PTR(uint32, 0x801223C8u)[v10];
      *((_BYTE *)v11 + 3) = 3;
      *((_BYTE *)v11 + 7) = 96;
      v12 = *((_BYTE *)v11 + 7);
      *((_WORD *)v11 + 4) = -208;
      *((_WORD *)v11 + 5) = -136;
      *((_WORD *)v11 + 6) = 416;
      *((_WORD *)v11 + 7) = 272;
      *((_BYTE *)v11 + 7) = v12 | 2;
      v13 = sub_800E7F14(1, 2, 0, 0);
      sub_800E5ED4(sf_draft_guest_address(v9), 0, 1, v13, 0);
    }
    while ( v7 < 2 );
  }
  v14 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2162));
  if ( v14 == 255 && *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2160)) > 0 || v14 == v6 && *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2160)) < 0 )
  {
    sub_800CA6EC();
LABEL_15:
    v18 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2162));
    goto LABEL_16;
  }
  v15 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2162)) + *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2160));
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2162)) = v15;
  v16 = v15 < 256;
  v17 = v15 < v6;
  if ( v16 )
  {
    if ( v17 )
      *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2162)) = v6;
  }
  else
  {
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2162)) = 255;
  }
  LOBYTE(v18) = -1;
  if ( *SF_DRAFT_PTR(int, (SF_DRAFT_GP + 2016)) >= 8 )
  {
    LOBYTE(v18) = v6;
    if ( *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2160)) )
      goto LABEL_15;
  }
LABEL_16:
  v19 = *v4;
  *((_BYTE *)v4 + 4) = (uint8)(v18);
  *((_BYTE *)v4 + 5) = (uint8)(v18);
  *((_BYTE *)v4 + 6) = (uint8)(v18);
  *v4 = v19 & 0xFF000000 | *v3 & 0xFFFFFF;
  v20 = *v3 & 0xFF000000 | (unsigned int)v4 & 0xFFFFFF;
  *v3 = v20;
  *v5 = *v5 & 0xFF000000 | v20 & 0xFFFFFF;
  result = *v3 & 0xFF000000 | (unsigned int)v5 & 0xFFFFFF;
  *v3 = result;
  return result;
}

sint32 sub_800358DC(uint32 a1, sint8 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800358DCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  bool v16; // dc
  int v17; 
  unsigned int v18; 
  unsigned int v19; 
  int v21; 
  if ( !a2 )
  {
    a3_view[1] = 0;
    v15 = *a1_view;
    if ( !*a1_view )
      goto LABEL_28;
    if ( a1_view[2] )
    {
      v16 = v15 > 0;
      v17 = v15 >> 31;
      if ( v16 )
        v18 = 2896;
      else
        v18 = v17 & 0xFFFFF4B0;
      *a3_view = v18;
      v9 = a1_view[2];
      if ( (int)v9 > 0 )
      {
        HIDWORD(v9) = 2896;
      }
      else
      {
        LODWORD(v9) = -2896;
        HIDWORD(v9) &= 0xFFFFF4B0;
      }
      goto LABEL_33;
    }
    if ( v15 > 0 )
      v19 = 4096;
    else
LABEL_28:
      v19 = (*a1_view >> 31) & 0xFFFFF000;
    *a3_view = v19;
    v9 = a1_view[2];
    if ( (int)v9 > 0 )
    {
      HIDWORD(v9) = 4096;
    }
    else
    {
      LODWORD(v9) = -4096;
      HIDWORD(v9) &= 0xFFFFF000;
    }
LABEL_33:
    a3_view[2] = HIDWORD(v9);
    return (uint8)(v9);
  }
  v5 = a1_view[1];
  v6 = a1_view[2];
  v7 = a1_view[3];
  *a3_view = *a1_view;
  a3_view[1] = v5;
  a3_view[2] = v6;
  a3_view[3] = v7;
  a3_view[1] = 0;
  sub_800D9580(sf_draft_guest_address(a3_view), sf_draft_guest_address(&v21));
  v8 = v21;
  LODWORD(v9) = v21 < 127;
  if ( v21 >= 56 )
  {
    v10 = v21 - 55;
    if ( v21 < 127 )
    {
      *a3_view = (*a3_view << 12) * v10;
      HIDWORD(v9) = 72 * v8;
      if ( !(72 * v8) )
        _break(7u, 0);
      if ( HIDWORD(v9) == -1 && *a3_view == 0x80000000 )
        _break(6u, 0);
      v11 = *a3_view / (72 * v8);
      a3_view[1] = (a3_view[1] << 12) * v10;
      v12 = a3_view[1];
      if ( !HIDWORD(v9) )
        _break(7u, 0);
      if ( HIDWORD(v9) == -1 && v12 == 0x80000000 )
        _break(6u, 0);
      v13 = v12 / SHIDWORD(v9);
      a3_view[2] = (a3_view[2] << 12) * v10;
      LODWORD(v9) = a3_view[2];
      v14 = (int)v9 / SHIDWORD(v9);
      if ( v9 == 0xFFFFFFFF80000000LL )
        _break(6u, 0);
      LODWORD(v9) = (int)v9 / SHIDWORD(v9);
      *a3_view = v11;
      a3_view[1] = v13;
      a3_view[2] = v14;
    }
    else
    {
      LODWORD(v9) = sub_800C720C(sf_draft_guest_address(a3_view), sf_draft_guest_address(a3_view));
    }
  }
  else
  {
    *a3_view = 0;
    a3_view[1] = 0;
    a3_view[2] = 0;
  }
  return (uint8)(v9);
}

uint32 sub_800865EC(uint32 a1)
{
    FUNCTION_MARKER(0x800865ECu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint32 *a1_view = SF_DRAFT_PTR(uint32, a1);
  int **v1; 
  int *v2; 
  int *v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned int result; 
  __int16 v15; 
  uint16 v16; 
  __int16 v17; 
  __int16 v18; 
  __int16 v19; 
  __int16 v20; 
  v1 = (int **)a1_view;
  v2 = SF_DRAFT_PTR(int, sub_8008634C(*a1_view, 1));
  v15 = *(_WORD *)v2;
  v17 = *((_WORD *)v2 + 1);
  v19 = *((_WORD *)v2 + 2);
  v20 = *((_WORD *)v2 + 3);
  while ( 1 )
  {
    v1 = SF_DRAFT_PTR(int*, v1[2]);
    if ( !v1 )
      break;
    v4 = SF_DRAFT_PTR(int, sub_8008634C(sf_draft_guest_address(*v1), 1));
    v5 = *(__int16 *)v4;
    if ( v5 < v15 )
    {
      v19 += v15 - v5;
      v15 = *(_WORD *)v4;
    }
    v6 = *((__int16 *)v4 + 1);
    if ( v6 < v17 )
    {
      v20 += v17 - v6;
      v17 = *((_WORD *)v4 + 1);
    }
    v7 = *(__int16 *)v4;
    v8 = *((__int16 *)v4 + 2);
    if ( v15 + v19 < v7 + v8 )
      v19 = v7 + v8 - v15;
    v9 = *((__int16 *)v4 + 1);
    v10 = *((__int16 *)v4 + 3);
    if ( v17 + v20 < v9 + v10 )
      v20 = v9 + v10 - v17;
  }
  v16 = v15 - 3;
  v18 = v17 - 2;
  v11 = v18 << 16;
  v12 = (v18 + (__int16)(v20 + 4)) << 16;
  v13 = (uint16)(v16 + v19 + 7);
  (*SF_DRAFT_PTR(uint32, 0x80121084u)) = v16 | v11;
  (*SF_DRAFT_PTR(uint32, 0x80121088u)) = v16 | v12;
  (*SF_DRAFT_PTR(uint32, 0x8012108Cu)) = v13 | v11;
  (*SF_DRAFT_PTR(uint32, 0x80121090u)) = v13 | v12;
  if ( !(*SF_DRAFT_PTR(uint32, 0x80121074u)) )
    sub_800C7BB0(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3324)), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80121074u))));
  result = (((*SF_DRAFT_PTR(uint32, 0x801168E8u)) | 0x28000000u) >> 24) | 2;
  (*SF_DRAFT_PTR(uint32, 0x80121080u)) = (*SF_DRAFT_PTR(uint32, 0x801168E8u)) | 0x2A000000;
  return result;
}

sint32 sub_8004B57C(sint16 a1)
{
    FUNCTION_MARKER(0x8004B57Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v1; 
  int result; 
  int v3; 
  int *v4; 
  int v5; 
  int *v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int *v13; 
  v1 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  result = 0;
  if ( v1 )
  {
    v3 = *SF_DRAFT_PTR(_DWORD, (v1 + 12));
    if ( !v3 )
      return 0;
    v4 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (v3 + 408)));
    v5 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    if ( !v4 )
      return 0;
    v6 = v4;
    sub_8004B20C(v5, sf_draft_guest_address(&v13));
    if ( (unsigned int)(v6[16] - 6) < 2 && ((v7 = v6[15], v7 == 5) || (unsigned int)(v7 - 8) < 2) )
    {
      if ( (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v1 + 16))) & 0x100000) != 0 )
        sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), 57);
      result = 1;
      if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 16)) + 4)) & 0x30) != 0 )
      {
        sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), v6[15]);
        sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), 5);
        v8 = *SF_DRAFT_PTR(__int16, (v1 + 2));
        v9 = 100;
        goto LABEL_27;
      }
    }
    else
    {
      v10 = v6[16];
      if ( v10 != 5 && (unsigned int)(v10 - 8) >= 2 || (unsigned int)(v6[15] - 6) >= 2 )
      {
        v12 = v6[15];
        if ( v12 == 5 || (unsigned int)(v12 - 8) < 2 )
        {
          v8 = *SF_DRAFT_PTR(__int16, (v1 + 2));
          v9 = 5;
          if ( v8 != (*SF_DRAFT_PTR(uint32, 0x801169D4u)) )
            goto LABEL_27;
        }
        else
        {
          v8 = *SF_DRAFT_PTR(__int16, (v1 + 2));
        }
        v9 = v6[15];
LABEL_27:
        sub_80028F3C(v8, v9);
        return 1;
      }
      if ( (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v1 + 16))) & 0x100000) != 0 )
      {
        v11 = *SF_DRAFT_PTR(__int16, (v1 + 2));
        if ( v11 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || v6[4] >= 0 )
          sub_80028F3C(v11, 58);
      }
      result = 1;
      if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 16)) + 4)) & 0x30) != 0 )
      {
        sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), v6[15]);
        sub_80028F3C((*SF_DRAFT_PTR(__int16, (v1 + 2))), 7);
        v8 = *SF_DRAFT_PTR(__int16, (v1 + 2));
        v9 = 100;
        goto LABEL_27;
      }
    }
  }
  return result;
}

sint32 sub_80060500(sint32 a1)
{
    FUNCTION_MARKER(0x80060500u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v3; 
  int result; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  sub_80017140(a1, sf_draft_guest_address(&v9), sf_draft_guest_address(&v10));
  v3 = 1;
  if ( !v10 )
  {
    result = 0;
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 35)) |= 2u;
    return result;
  }
  result = 0;
  if ( !*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3764)) )
  {
    v5 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2876));
    if ( v5 < 0 || (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2880))) >= 0x14 )
    {
      if ( (*SF_DRAFT_PTR(uint8, 0x801169FCu)) && (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 7 )
      {
        v3 = 0;
        if ( a1 == (*SF_DRAFT_PTR(uint16, 0x80116AAEu)) )
        {
          if ( *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 3360)) >= *SF_DRAFT_PTR(__int16, ((*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 82)) )
          {
            if ( *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3604)) < 0 )
              sub_8005FD4C(0, a1);
          }
          else
          {
            v3 = 1;
          }
        }
        goto LABEL_27;
      }
      if ( *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 3360)) < *SF_DRAFT_PTR(__int16, ((*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 82)) )
      {
LABEL_27:
        result = v3;
        if ( v3 )
        {
          v8 = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
          ++*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3360));
          *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3172)) = v8;
          return v3;
        }
        return result;
      }
      if ( *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3604)) < 0 )
      {
        v6 = 0;
        if ( (unsigned int)(uint16)(*SF_DRAFT_PTR(uint16, 0x80130C88u)) - 11 < 2 || (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 13 )
        {
          v7 = a1 == 666 ? 666 : *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
          if ( v7 == 101 || v7 == 92 )
            v6 = 1;
        }
        sub_8005FD4C(v6, a1);
      }
    }
    else if ( v5 == a1 )
    {
      *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2876)) = -1;
      goto LABEL_27;
    }
    v3 = 0;
    goto LABEL_27;
  }
  return result;
}

sint32 sub_800732D8(sint32 a1, sint32 a2, sint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x800732D8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a4_view = SF_DRAFT_PTR(_DWORD, a4);
  int v5; 
  int v8; 
  int i; 
  int result; 
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
  int v23[6]; 
  v5 = a2;
  v16 = (*SF_DRAFT_PTR(uint32, 0x800122D4u));
  v17 = (*SF_DRAFT_PTR(uint32, 0x800122D8u));
  v18 = (*SF_DRAFT_PTR(uint32, 0x800122DCu));
  v19 = (*SF_DRAFT_PTR(uint32, 0x800122E0u));
  v8 = 0;
  for ( i = 0; i < a3; a2 += 4 )
  {
    if ( *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 72)) >= *SF_DRAFT_PTR(_DWORD, (a1 + 36)) )
    {
      v16 += *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 68));
      v17 += *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 72));
      ++v8;
      v18 += *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 76));
    }
    ++i;
  }
  result = v8 < 2;
  if ( v8 > 0 )
  {
    v11 = 52428;
    if ( v8 >= 2 )
    {
      sub_800D9580(sf_draft_guest_address(&v16), sf_draft_guest_address(v23));
      result = v23[0];
      if ( !v23[0] )
        _break(7u, 0);
      v11 = -214745088;
    }
    v12 = 0;
    if ( a3 > 0 )
    {
      v13 = -v11;
      do
      {
        if ( *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v5) + 72)) >= *SF_DRAFT_PTR(_DWORD, (a1 + 36)) )
        {
          v14 = sub_800C6D4C(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v5) + 68)), v13);
          v15 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v5) + 72));
          v20 = v14;
          v21 = sub_800C6D4C(v15, v13);
          v22 = sub_800C6D4C(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v5) + 76)), v13);
          *a4_view += v20;
          a4_view[1] += v21;
          a4_view[2] += v22;
        }
        result = ++v12 < a3;
        v5 += 4;
      }
      while ( v12 < a3 );
    }
  }
  return result;
}

sint32 sub_80022120(void)
{
    FUNCTION_MARKER(0x80022120u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  int result; 
  int v6; 
  int *v7; 
  int *v8; 
  int *v9; 
  int *v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  if ( (uint8)((*SF_DRAFT_PTR(uint8, 0x80119234u)) + 1) >= 2u )
  {
    v1 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284));
    v11 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v1)) + 20));
    v12 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v1)) + 24));
    v2 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v1)) + 28));
    v12 = -v12;
    v13 = v2;
    v3 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v1)) + 4));
    v14 = v3;
    v15 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v1)) + 10));
    v4 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v1)) + 16));
    v15 = -v15;
    v16 = v4;
    v14 = sub_800C6D4C(v3, 32);
    v15 = sub_800C6D4C(v15, 32);
    v16 = sub_800C6D4C(v16, 32);
    v11 += v14;
    v12 += v15;
    v13 += v16;
    sub_800DC8AC(*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x8011922Cu)) + 12)), 0, sf_draft_guest_address(&v11));
  }
  result = (*SF_DRAFT_PTR(uint32, 0x80119230u));
  if ( (*SF_DRAFT_PTR(uint32, 0x80119230u)) )
  {
    sub_80018430(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (SF_DRAFT_GP + 284)))), sf_draft_guest_address(&v17));
    result = (*SF_DRAFT_PTR(uint32, 0x80119230u));
    v6 = 0;
    if ( (*SF_DRAFT_PTR(uint32, 0x80119230u)) >= 0 )
    {
      if ( (*SF_DRAFT_PTR(uint32, 0x80119230u)) > 0 )
      {
        v9 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80130D38u)));
        do
        {
          v10 = v9;
          v9 += 8;
          ++v6;
          sub_800C7BF8(v17, sf_draft_guest_address(v10));
        }
        while ( v6 < 13 );
        result = (sint32)(0u - (*SF_DRAFT_PTR(uint32, 0x80119230u)));
        (*SF_DRAFT_PTR(uint32, 0x80119230u)) = (sint32)(0u - (*SF_DRAFT_PTR(uint32, 0x80119230u)));
      }
    }
    else
    {
      v7 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80130D38u)));
      do
      {
        v8 = v7;
        v7 += 8;
        ++v6;
        sub_800C7BB0(v17, sf_draft_guest_address(v8));
      }
      while ( v6 < 13 );
      result = (*SF_DRAFT_PTR(uint32, 0x80119230u));
      if ( (*SF_DRAFT_PTR(uint32, 0x80119230u)) < 0 )
        result = (sint32)(0u - (*SF_DRAFT_PTR(uint32, 0x80119230u)));
      (*SF_DRAFT_PTR(uint32, 0x80119230u)) = result;
    }
  }
  return result;
}

BOOL sub_80078DF4(void)
{
    FUNCTION_MARKER(0x80078DF4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  unsigned int v0; 
  int *v1; 
  bool v2; 
  unsigned int v3; 
  bool v4; // dc
  sint32 v5; 
  int v6; 
  unsigned int v7; 
  int v8; 
  sint32 result; 
  int v10; 
  unsigned int v11; 
  int v12; 
  int *v13; 
  int *v14; 
  unsigned int v15; 
  int v16; 
  (*SF_DRAFT_PTR(uint32, 0x80116B74u)) = 0;
  v0 = 0;
  sub_80077BFC(sf_draft_guest_address((uint16 *)(&(*SF_DRAFT_PTR(uint32, 0x8010E1ECu)))));
  if ( (*SF_DRAFT_PTR(uint32, 0x801169ACu)) )
  {
    v1 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, 0x8012C170u));
    while ( 1 )
    {
      v2 = v1[2] == 1;
      v3 = sub_80077B48(v1[8], v1[9], v1[10]);
      v4 = (*SF_DRAFT_PTR(uint8, 0x80116B88u)) == 0;
      v1[1] = v3;
      if ( v4 )
        break;
      v5 = v2;
      if ( v1[2] )
        goto LABEL_7;
      if ( v3 >= 0x50 )
        break;
LABEL_16:
      ++v0;
      v1 += 20;
      if ( v0 >= (*SF_DRAFT_PTR(uint32, 0x801169ACu)) )
        goto LABEL_17;
    }
    v5 = v2;
LABEL_7:
    if ( v5 )
    {
      v6 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(_WORD, (v1[18] + 20)) & 0x3FF) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
      if ( v6 )
      {
        if ( (unsigned int)*SF_DRAFT_PTR(uint8, (v6 + 34)) - 1 < 2 )
          v1[1] = sub_80077B48(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 20)), (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 24)))), *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 28)));
      }
    }
    v7 = v1[1];
    if ( v7 >= 0x21 && v2 )
      v1[1] = v7 - 32;
    if ( v1[1] )
    {
      v8 = (*SF_DRAFT_PTR(uint32, 0x80116B74u))++;
      SF_DRAFT_PTR(uint32, 0x80130F10u)[v8] = (int)v1;
    }
    goto LABEL_16;
  }
LABEL_17:
  result = (unsigned int)(*SF_DRAFT_PTR(uint32, 0x80116B74u)) < 2;
  if ( (unsigned int)(*SF_DRAFT_PTR(uint32, 0x80116B74u)) >= 2 )
  {
    v10 = (*SF_DRAFT_PTR(uint32, 0x80116B74u)) - 1;
    if ( (*SF_DRAFT_PTR(uint32, 0x80116B74u)) )
    {
      v11 = 0;
      do
      {
        v12 = 0;
        if ( v10 )
        {
          v13 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80130F14u)));
          v14 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80130F10u)));
          v15 = (*SF_DRAFT_PTR(uint32, 0x80116B74u)) - 1;
          do
          {
            v16 = *v14;
            if ( *SF_DRAFT_PTR(_DWORD, (*v13 + 4)) < *SF_DRAFT_PTR(_DWORD, (*v14 + 4)) )
            {
              ++v12;
              *v14 = *v13;
              *v13 = v16;
            }
            ++v13;
            result = ++v11 < v15;
            ++v14;
          }
          while ( v11 < v15 );
        }
        v11 = 0;
      }
      while ( v12 );
    }
  }
  return result;
}

sint32 sub_80071384(uint32 a1)
{
    FUNCTION_MARKER(0x80071384u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  int v2; 
  int result; 
  int v4; 
  int v5; 
  _DWORD *v6; 
  _DWORD *v7; 
  int v8; 
  int v9; 
  if ( !a1_view )
    return 0;
  v2 = a1_view[3];
  result = 0;
  if ( !v2 )
    return result;
  if ( !*SF_DRAFT_PTR(_DWORD, (v2 + 416)) )
    return 0;
  *SF_DRAFT_PTR(_DWORD, (v2 + 404)) &= ~0x100000u;
  *SF_DRAFT_PTR(_DWORD, (a1_view[3] + 404)) &= ~4u;
  *SF_DRAFT_PTR(_DWORD, (a1_view[3] + 404)) &= ~2u;
  v4 = *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1_view[3] + 416)));
  if ( v4 == 1 )
  {
    sub_8006ED44(sf_draft_guest_address(a1_view));
  }
  else
  {
    result = 0;
    if ( v4 != 3 )
      return result;
    sub_8006F8A0(sf_draft_guest_address(a1_view));
  }
  sub_8006F8C0(sf_draft_guest_address(a1_view));
  v5 = *SF_DRAFT_PTR(_DWORD, (a1_view[3] + 416));
  *SF_DRAFT_PTR(_DWORD, (v5 + 12)) = 0;
  *SF_DRAFT_PTR(_DWORD, (v5 + 16)) = 0;
  *SF_DRAFT_PTR(_DWORD, (v5 + 20)) = 0;
  *SF_DRAFT_PTR(_BYTE, (v5 + 28)) = 1;
  *SF_DRAFT_PTR(_BYTE, (v5 + 29)) = 1;
  *SF_DRAFT_PTR(_BYTE, (v5 + 30)) = 1;
  *SF_DRAFT_PTR(_BYTE, (v5 + 31)) = 1;
  v6 = SF_DRAFT_PTR(_DWORD, a1_view[3]);
  v7 = v6 + 97;
  if ( v6[97] || v6[98] || v6[99] )
  {
    v8 = v6[99];
    *v7 <<= 12;
    v9 = v7[1];
    v7[2] = v8 << 12;
    v7[1] = v9 << 12;
    *SF_DRAFT_PTR(_DWORD, (a1_view[3] + 80)) += *v7;
    *SF_DRAFT_PTR(_DWORD, (a1_view[3] + 84)) += v7[1];
    *SF_DRAFT_PTR(_DWORD, (a1_view[3] + 88)) += v7[2];
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
  }
  if ( (*SF_DRAFT_PTR(_BYTE, (a1_view[2] + 10)) & 2) != 0 || *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1_view[3] + 416))) == 1 )
    sub_80048F3C(sf_draft_guest_address(a1_view), 1, 0);
  sub_8006FC48(sf_draft_guest_address(a1_view));
  return 1;
}

sint32 sub_800243FC(sint16 a1, sint32 a2, sint32 a3, uint8 a4)
{
    FUNCTION_MARKER(0x800243FCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v5; 
  int *v7; 
  int v8; 
  int v9; 
  bool v10; // dc
  _BYTE *v11; 
  int v12; 
  int result; 
  int v14; 
  int v15; 
  int v16; 
  int *v17; 
  int v18; 
  int v19; 
  _DWORD *v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24[4];
  sint16 callback_left;
  sint16 callback_right; 
  v5 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  if ( a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    v14 = *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v5 + 16)));
    if ( (v14 & 0x100000) == 0 )
    {
      v15 = (uint8)SF_DRAFT_PTR(uint8, 0x8013C590u)[0] + (a4 != 0);
      if ( (v14 & 4) != 0 )
      {
        sub_8006C0BC(0, v15, v5, sf_draft_guest_address(&callback_left), sf_draft_guest_address(&callback_right));
        callback_left = (sint16)(callback_left >> 1);
        sub_8006C0E8(0, v15, (uint32)(sint32)callback_left, (uint32)(sint32)callback_right);
      }
      else
      {
        sub_8006BC98(0, (uint8)SF_DRAFT_PTR(uint8, 0x8013C590u)[0] + (a4 != 0), v5, 0);
      }
    }
    goto LABEL_13;
  }
  if ( (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v5 + 16))) & 0x100000) == 0 )
  {
    v7 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 12)) + 416)) + 60)));
    if ( v7 )
    {
      v8 = *v7;
      v9 = v7[1];
      v10 = v8 != 4;
      v11 = SF_DRAFT_PTR(_BYTE, (v9 - 13));
      if ( !v10 )
        v11 = SF_DRAFT_PTR(_BYTE, (v9 - 2));
      sub_8006BC98(0, (uint8)SF_DRAFT_PTR(uint8, 0x8013C590u)[*v11 & 0x1F] + (a4 != 0), v5, 0);
    }
  }
  v12 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3480));
  result = 2;
  if ( v12 == 1 )
  {
    sf_draft_call(0x80148804u, 1, (const uint32[]){a4});
LABEL_13:
    v12 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3480));
    result = 2;
  }
  if ( v12 == 2 )
  {
    v16 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 8)) + 24));
    if ( a4 )
      v17 = SF_DRAFT_PTR(int, (v16 + 28));
    else
      v17 = SF_DRAFT_PTR(int, (v16 + 4));
    v18 = *v17;
    v19 = sub_8003A02C(a4 == 0);
    v20 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v5 + 12)));
    v21 = v20[85];
    v22 = v20[86];
    v23 = v20[87];
    v24[0] = v20[84];
    v24[1] = v21;
    v24[2] = v22;
    v24[3] = v23;
    return sub_800CD15C(v18, v19, sf_draft_guest_address(v24));
  }
  return result;
}


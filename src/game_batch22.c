#include "game_draft.h"
#include <stdio.h>
#include <stdlib.h>
static uint32 sf_draft_missing_stale_local_80048D58(void)
{
    fprintf(stderr, "TODO 80048D58 observable stale fourth local word\n");
    abort();
}
uint32 sub_8006D3C8();


/* TODO Resolve external dependency signatures */
uint32 sub_800224AC();
uint32 sub_80070F74();
uint32 sub_800D8E60();
uint32 sub_800E29B0();
uint32 sub_800FEFE4();
uint32 sub_800FF284();

sint32 sub_800769CC(sint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800769CCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  unsigned int v5; 
  int v8; 
  int *v9; 
  int v10; 
  int v11; 
  int v12; 
  int *v13; 
  unsigned int v14; 

  v5 = 0;
  if ( *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3536)) )
  {
    v8 = 0;
    do
    {
      v9 = &SF_DRAFT_PTR(uint32, 0x8012FC08u)[v8];
      v10 = SF_DRAFT_PTR(uint32, 0x8012FC08u)[v8];
      v11 = 3;
      if ( *SF_DRAFT_PTR(int, v10) < 0 )
        v11 = 4;
      v12 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3396));
      (*SF_DRAFT_PTR(uint32, 0x80128E20u)) = v11;
      (*SF_DRAFT_PTR(uint32, 0x80128E28u)) = (int)(*SF_DRAFT_PTR(uint32, 0x80128E2Cu));
      v13 = &SF_DRAFT_PTR(uint32, 0x8012C170u)[20 * v12];
      (*SF_DRAFT_PTR(uint32, 0x80128E34u)) = v9[1] + 8 * *(uint8 *)(v10 + 7) / 3;
      (*SF_DRAFT_PTR(uint32, 0x80128E38u)) = v9[1] + 8 * *(uint8 *)(v10 + 10) / 3;
      if ( v11 == 3 )
      {
        (*SF_DRAFT_PTR(uint32, 0x80128E3Cu)) = v9[1] + 8 * *(uint8 *)(v10 + 11) / 3;
      }
      else
      {
        (*SF_DRAFT_PTR(uint32, 0x80128E3Cu)) = v9[1] + 8 * *(uint8 *)(v10 + 8) / 3;
        (*SF_DRAFT_PTR(uint32, 0x80128E40u)) = v9[1] + 8 * *(uint8 *)(v10 + 11) / 3;
      }
      if ( !sub_80078724(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8012C7B8u))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80128E20u))), sf_draft_guest_address(v13 + 8), sf_draft_guest_address(v13 + 4)) )
      {
        v14 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3396));
        v13[19] = v10;
        v13[2] = 0;
        v13[3] = 0;
        if ( v14 < 0x13 )
          *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3396)) = v14 + 1;
      }
      ++v5;
      v8 = 2 * v5;
    }
    while ( v5 < *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3536)) );
  }
  sub_80077FD8(a1, 1);
  if ( a2 )
    sub_80077FD8(a1, 2);
  return sub_8007903C(a1);
}

sint32 sub_800C31E8(sint32 a1, sint32 a2, sint32 a3, sint16 a4, sint16 a9, uint32 a10, uint32 a11)
{
    FUNCTION_MARKER(0x800C31E8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _WORD *a10_view = SF_DRAFT_PTR(_WORD, a10);
    _WORD *a11_view = SF_DRAFT_PTR(_WORD, a11);
  __int16 v12; 
  __int16 v13; 
  __int16 v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  unsigned int v20; 
  unsigned int v21; // kr00_4
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  int result; 

  v12 = a4;
  v13 = a9;
  if ( a9 >= a4 )
  {
    v15 = a9;
    if ( !a9 )
      v13 = 1;
    if ( !v13 )
      _break(7u, 0);
    if ( v13 == -1 && 63 * a4 == 0x80000000 )
      _break(6u, 0);
    v17 = 127 - 63 * a4 / v13;
  }
  else
  {
    v15 = a4;
    if ( !a4 )
      v12 = 1;
    v16 = a9 << 6;
    if ( !v12 )
      _break(7u, 0);
    if ( v12 == -1 && v16 == 0x80000000 )
      _break(6u, 0);
    LOWORD(v17) = v16 / v12;
  }
  v18 = (a2 << 16 >> 12) + a1 + 32;
  v19 = a1 + 32 + (*SF_DRAFT_PTR(_DWORD, (v18 + 8)) << 9) + 2048;
  v20 = *(uint8 *)(a1 + 25);
  v21 = 129
      * *(uint8 *)(a1 + 24)
      * (unsigned int)*(uint8 *)(v18 + 1)
      / 0x7F
      * *(uint8 *)((a3 << 16 >> 11) + v19 + 2)
      / 0x7F
      * v15;
  v22 = v21 / 0x7F;
  if ( v20 >= 0x41 )
  {
    v23 = (v22 * (127 - v20)) >> 6;
  }
  else
  {
    v23 = v21 / 0x7F;
    v22 = (v22 * v20) >> 6;
  }
  v24 = *(uint8 *)((a2 << 16 >> 12) + a1 + 32 + 4);
  if ( v24 >= 0x41 )
    v23 = (v23 * (127 - v24)) >> 6;
  else
    v22 = (v22 * v24) >> 6;
  v25 = *(uint8 *)((a3 << 16 >> 11) + v19 + 3);
  if ( v25 >= 0x41 )
    v23 = (v23 * (127 - v25)) >> 6;
  else
    v22 = (v22 * v25) >> 6;
  result = (__int16)v17 < 65;
  if ( (__int16)v17 >= 65 )
  {
    result = 127 - (__int16)v17;
    v23 = (v23 * result) >> 6;
  }
  else
  {
    v22 = (v22 * (__int16)v17) >> 6;
  }
  *a10_view = v23;
  *a11_view = v22;
  return result;
}

sint32 sub_80061F78(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80061F78u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int result; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  bool v13; // dc
  int v14; 
  int v15; 
  sint32 v16; 

  result = 4 * a1;
  if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 4 )
    return result;
  v4 = *(_DWORD *)(76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52);
  v5 = *SF_DRAFT_PTR(_DWORD, (v4 + 28));
  v6 = 1024;
  if ( (*SF_DRAFT_PTR(_DWORD, (v5 + 32)) & 0x10) != 0 )
  {
LABEL_16:
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2868)) = a1;
    goto LABEL_24;
  }
  v7 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2868));
  if ( v7 >= 0 )
    goto LABEL_18;
  if ( (**(_DWORD **)(v4 + 16) & 2) != 0 && *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3196)) != 1
    || *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v4 + 24)) + 8)) <= 0
    || *SF_DRAFT_PTR(_BYTE, (v5 + 72)) != 2 )
  {
    v7 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2868));
LABEL_18:
    if ( a1 == v7 )
    {
      if ( a2 < 819 && (**(_DWORD **)(v4 + 16) & 2) != 0 )
      {
        v6 = 0x2000;
        if ( *(uint8 *)(SF_DRAFT_GP + 3196) < 2u )
          goto LABEL_24;
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2868)) = -1;
      }
      v6 = 0x2000;
      goto LABEL_24;
    }
    goto LABEL_24;
  }
  v8 = *SF_DRAFT_PTR(__int16, (v4 + 2));
  if ( v8 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    v9 = 76 * v8 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    if ( !*SF_DRAFT_PTR(_BYTE, (v9 + 36)) )
    {
      v10 = *SF_DRAFT_PTR(_DWORD, (v9 + 36)) & 0x3000;
      if ( v10 != 4096 && v10 != 0x2000 )
        goto LABEL_24;
    }
LABEL_14:
    if ( a1 != 666 && *(_WORD *)(20 * *(_DWORD *)(76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))) == 76 )
      goto LABEL_24;
    goto LABEL_16;
  }
  if ( (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) )
    goto LABEL_14;
LABEL_24:
  v11 = 76 * *SF_DRAFT_PTR(__int16, (v4 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
  v12 = *(uint8 *)(v11 + 36);
  v13 = v12 != 0;
  v14 = 32 * v12;
  if ( !v13 )
  {
    v15 = *SF_DRAFT_PTR(_DWORD, (v11 + 36)) & 0x3000;
    if ( v15 == 4096 )
      v14 = 608;
    else
      v14 = v15 == 0x2000 ? 0x280 : 0;
  }
  v13 = ((*SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C390u))) + v14)) >> 3) & 7) != 2;
  v16 = v6 < a2;
  if ( !v13 )
    v16 = a2 > 819;
  if ( v16 )
    result = *SF_DRAFT_PTR(_DWORD, (v5 + 32)) & 0xFFFFDFFF;
  else
    result = *SF_DRAFT_PTR(_DWORD, (v5 + 32)) | 0x2000;
  *SF_DRAFT_PTR(_DWORD, (v5 + 32)) = result;
  return result;
}

void sub_80048628(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80048628u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);
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
  int v16; 
  int v17; 
  _DWORD v18[4]; 
  __int16 v19[16]; 

  if ( a1 )
  {
    v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    if ( v4 )
    {
      v5 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
      v6 = *a2_view;
      v7 = *SF_DRAFT_PTR(_DWORD, (v5 + 12));
      if ( *a2_view == 1 )
      {
        v9 = a2_view[1];
        if ( v9 )
          sub_800DC8AC((*SF_DRAFT_PTR(_DWORD, (v5 + 12))), 0, v9);
        if ( a2_view[2] )
          sub_800DC0B8(v7, 0, a2_view[2]);
      }
      else if ( v6 )
      {
        if ( v6 == 2 )
        {
          v10 = a2_view[1];
          if ( v10 )
            sub_800DC8AC(v7, 0, v10);
          v11 = a2_view[2];
          if ( v11 )
            sub_800DBFD4(v7, 0, v11);
        }
        else if ( v6 == 3 )
        {
          v12 = a2_view[1];
          if ( v12 )
            sub_800DC8AC(v7, 0, v12);
          v13 = a2_view[2];
          if ( v13 )
            sub_800DD0DC(v7, 0, v13, (a2_view[3]));
        }
      }
      else
      {
        v8 = a2_view[1];
        if ( v8 )
          sub_800DC40C(v7, 0, v8);
      }
      if ( *SF_DRAFT_PTR(_DWORD, (v7 + 32)) )
        sub_800C777C(v7);
      v15 = *SF_DRAFT_PTR(_DWORD, (v7 + 20));
      v16 = *SF_DRAFT_PTR(_DWORD, (v7 + 24));
      v14 = *SF_DRAFT_PTR(_DWORD, (v7 + 28));
      v16 = -v16;
      v17 = v14;
      sub_800482B8(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, v4)), sf_draft_guest_address(&v15));
      v19[0] = *SF_DRAFT_PTR(_WORD, v7);
      v19[1] = -*SF_DRAFT_PTR(_WORD, (v7 + 2));
      v19[2] = *SF_DRAFT_PTR(_WORD, (v7 + 4));
      v19[3] = -*SF_DRAFT_PTR(_WORD, (v7 + 6));
      v19[4] = *SF_DRAFT_PTR(_WORD, (v7 + 8));
      v19[5] = -*SF_DRAFT_PTR(_WORD, (v7 + 10));
      v19[6] = *SF_DRAFT_PTR(_WORD, (v7 + 12));
      v19[7] = -*SF_DRAFT_PTR(_WORD, (v7 + 14));
      v19[8] = *SF_DRAFT_PTR(_WORD, (v7 + 16));
      sub_800E0E88(sf_draft_guest_address(v19), sf_draft_guest_address(v18));
      sub_800482B8(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, (v4 + 128))), sf_draft_guest_address(v18));
      *SF_DRAFT_PTR(_BYTE, (v4 + 256)) = 0;
      sub_80048D58(a1);
      *SF_DRAFT_PTR(_BYTE, (v4 + 264)) = 0;
      *SF_DRAFT_PTR(_DWORD, (v4 + 404)) = 0;
      *SF_DRAFT_PTR(_DWORD, (v4 + 320)) = 0;
      *SF_DRAFT_PTR(_DWORD, (v4 + 324)) = 0;
      *SF_DRAFT_PTR(_DWORD, (v4 + 328)) = 0;
      *SF_DRAFT_PTR(_DWORD, (v4 + 336)) = 0;
      *SF_DRAFT_PTR(_DWORD, (v4 + 340)) = 4096;
      *SF_DRAFT_PTR(_DWORD, (v4 + 344)) = 0;
      *SF_DRAFT_PTR(_DWORD, (v4 + 300)) = -2147483647;
    }
  }
}

sint32 sub_80077FD8(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80077FD8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  _DWORD *v3; 
  int v4; 
  int result; 
  int *i; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  char v11; 
  uint8 v12; 
  int v13; 
  int v14; 
  unsigned int v15; 
  int v16; 

  v3 = (_DWORD *)SF_DRAFT_PTR(uint32, 0x80128E78u)[a2];
  v16 = *SF_DRAFT_PTR(_DWORD, (a1 + 160));
  v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 164));
  (*SF_DRAFT_PTR(uint32, 0x80128E20u)) = 3;
  (*SF_DRAFT_PTR(uint32, 0x80128E28u)) = (int)(*SF_DRAFT_PTR(uint32, 0x80128E2Cu));
  result = 80 * (*SF_DRAFT_PTR(uint32, 0x801169ACu));
  for ( i = &SF_DRAFT_PTR(uint32, 0x8012C170u)[20 * (*SF_DRAFT_PTR(uint32, 0x801169ACu))]; v3; v3 = (_DWORD *)v3[4] )
  {
    v7 = *v3;
    v8 = 666;
    v9 = *(__int16 *)(*v3 + 2);
    v10 = *(_DWORD *)(*(_DWORD *)(*v3 + 8) + 16);
    if ( v9 != 666 )
      v8 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v9 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
    v11 = 0;
    if ( v8 == 44 || v8 == 98 || v8 == 56 || v8 == 30 || v8 == 108 || v8 == 32 || *SF_DRAFT_PTR(_BYTE, (v7 + 34)) == 9 )
      v11 = 1;
    v12 = v11;
    if ( *SF_DRAFT_PTR(_DWORD, (v10 + 116)) == -1 )
      sub_80076990(r_u32(r_u32(*v3 + 8) + 16));
    result = v12;
    if ( v12 )
      *SF_DRAFT_PTR(_DWORD, (v10 + 48)) = 0;
    else
      *SF_DRAFT_PTR(_DWORD, (v10 + 48)) = -1;
    if ( v7 != v4 && v7 != v16 )
    {
      sub_80077BFC(r_u32(r_u32(v7 + 8) + 12));
      if ( sub_80077B84(6000, 150) || (result = v12) != 0 )
      {
        v13 = (*SF_DRAFT_PTR(uint16, 0x80116A04u));
        v14 = *SF_DRAFT_PTR(_DWORD, (v7 + 8));
        ++(*SF_DRAFT_PTR(uint16, 0x80116B38u));
        i[18] = v14;
        result = sub_80077278(v10 + 48, v13, sf_draft_guest_address(i), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8012C7B8u))));
        if ( result )
        {
          v15 = (*SF_DRAFT_PTR(uint32, 0x801169ACu));
          i[19] = (int)v3;
          i[2] = a2;
          i[3] = v10 + 48;
          if ( v15 < 0x13 )
            (*SF_DRAFT_PTR(uint32, 0x801169ACu)) = v15 + 1;
          result = (int)(*SF_DRAFT_PTR(uint32, 0x8012C170u));
          i = &SF_DRAFT_PTR(uint32, 0x8012C170u)[20 * (*SF_DRAFT_PTR(uint32, 0x801169ACu))];
        }
      }
    }
  }
  return result;
}

sint32 sub_800C04A4(sint32 a1, sint16 a2, sint16 a3, sint16 a4, sint16 a9, sint32 a10, sint32 a11)
{
    FUNCTION_MARKER(0x800C04A4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  __int16 v14; 
  int v15; 

  int v17; 

  int v19; 
  __int16 v20; 

  int v25; 
  int result; 
  __int16 v27; 
  __int16 v28[11]; 

  v14 = a2 % 15;
  if ( a2 / 15 )
    v15 = *SF_DRAFT_PTR(_DWORD, (a1 + 132)) + *SF_DRAFT_PTR(_DWORD, (a1 + 4 * (a2 / 15) + 136));
  else
    v15 = *SF_DRAFT_PTR(_DWORD, (a1 + 132));
  if ( !*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1948)) || !sub_8006AFD0() )
    return 0;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1952)) = a3;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1954)) = a4;
  v17 = 60 * a3 / 100;
  if ( v17 >= 128 )
    LOWORD(v17) = 127;
  sub_800C34C0((__int16)v17, a4, sf_draft_guest_address(&v27), sf_draft_guest_address(v28), 2);
  if ( a11 )
  {
    v19 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1964));
    if ( v19 != 1 )
    {
      if ( v19 != 2 )
      {
        v20 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3058));
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3652)) = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3056));
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3296)) = v20;
      }
      sub_800C3814(0, ((__int16)(*SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3652)) - *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3652)) / 4)));
      sub_800C3814(1, ((__int16)(*SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3296)) - *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3296)) / 4)));
      *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1964)) = a11;
    }
  }
  sub_800F5C64(0, 1, 1);
  sub_800F74F4(0, v27, v28[0]);
  sub_800C5E64();
  sub_800C5F18(v15, v14, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1960))), a10);
  v25 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 1944));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1960)) = a9;
  result = 1;
  if ( v25 )
  {
    sub_800C2C38();
    return 1;
  }
  return result;
}

uint32 sub_800D1608(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800D1608u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    __int16 *a1_view = SF_DRAFT_PTR(__int16, a1);
    _WORD *a2_view = SF_DRAFT_PTR(_WORD, a2);
  int v2; 
  _WORD *result; 
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
  int v16; 

  v2 = *a1_view;
  result = (_WORD *)(a2_view);
  if ( v2 >= 0 )
  {
    v4 = SF_DRAFT_PTR(uint32, 0x801103F8u)[v2 & 0xFFF];
    v6 = (__int16)v4;
    v5 = -(__int16)v4;
  }
  else
  {
    v4 = SF_DRAFT_PTR(uint32, 0x801103F8u)[-v2 & 0xFFF];
    LOWORD(v5) = v4;
    v6 = -(__int16)v4;
  }
  v7 = v4 >> 16;
  v8 = a1_view[1];
  if ( v8 >= 0 )
  {
    v9 = SF_DRAFT_PTR(uint32, 0x801103F8u)[v8 & 0xFFF];
    v10 = (__int16)v9;
  }
  else
  {
    v9 = SF_DRAFT_PTR(uint32, 0x801103F8u)[-v8 & 0xFFF];
    v10 = -(__int16)v9;
  }
  v11 = v9 >> 16;
  v12 = a1_view[2];
  a2_view[5] = v5;
  a2_view[2] = (v10 * v7) >> 12;
  a2_view[8] = ((v9 >> 16) * v7) >> 12;
  if ( v12 >= 0 )
  {
    v13 = SF_DRAFT_PTR(uint32, 0x801103F8u)[v12 & 0xFFF];
    v14 = (__int16)v13;
  }
  else
  {
    v13 = SF_DRAFT_PTR(uint32, 0x801103F8u)[-v12 & 0xFFF];
    v14 = -(__int16)v13;
  }
  a2_view[3] = (v14 * v7) >> 12;
  a2_view[4] = ((v13 >> 16) * v7) >> 12;
  v15 = (v10 * v6) >> 12;
  *a2_view = ((v11 * (v13 >> 16)) >> 12) + ((v15 * v14) >> 12);
  a2_view[1] = ((v15 * (v13 >> 16)) >> 12) - ((v11 * v14) >> 12);
  v16 = (v11 * v6) >> 12;
  a2_view[7] = ((v10 * v14) >> 12) + ((v16 * (v13 >> 16)) >> 12);
  a2_view[6] = ((v16 * v14) >> 12) - ((v10 * (v13 >> 16)) >> 12);
  return sf_draft_guest_address(result);
}

sint32 sub_8007E848(sint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x8007E848u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);
  int v7; 
  int result; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  __int16 *v14; 
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
  int v28; 
  int v29; 
  int v30; 
  char v31[8]; 

  v31[0] = a4;
  v7 = sub_8007E6CC(a1, sf_draft_guest_address(v31));
  result = 2 * v7;
  if ( v7 >= 0 )
  {
    v9 = 24 * v7;
    SF_DRAFT_PTR(uint32, 0x8011F364u)[v9] = 1;
    SF_DRAFT_PTR(uint8, 0x8011F368u)[v9 * 4] = a3;
    SF_DRAFT_PTR(uint32, 0x8011F36Cu)[v9] = 2;
    if ( a2_view )
    {
      v10 = a2_view[1];
      v11 = a2_view[2];
      v12 = a2_view[3];
      v21 = *a2_view;
      v22 = v10;
      v23 = v11;
      v24 = v12;
      v13 = 2 * v7;
    }
    else
    {
      v14 = SF_DRAFT_PTR(__int16, *(__int16 **)(a1 + 20));
      if ( v14 && (v15 = *v14, v15 >= 0) )
      {
        sub_8003A2A8((*SF_DRAFT_PTR(_DWORD, (76 * v15 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52))), sf_draft_guest_address(&v21));
        v13 = 2 * v7;
      }
      else
      {
        v25 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 20));
        v26 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 24));
        v16 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 28));
        v26 = -v26;
        v27 = v16;
        v17 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 4));
        v28 = v17;
        v29 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 10));
        v30 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 16));
        v21 = v25 + sub_800C6D4C(v17, 1600);
        v22 = v26 + sub_800C6D4C(-v29, 1600);
        v23 = v27 + sub_800C6D4C(v30, 1600);
        v13 = 2 * v7;
      }
    }
    result = 32 * (v13 + v7);
    v18 = v22;
    v19 = v23;
    v20 = v24;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8011F370u))) + result)) = v21;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011F374u))) + result)) = v18;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011F378u))) + result)) = v19;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011F37Cu))) + result)) = v20;
  }
  return result;
}

sint32 sub_800CC214(sint32 a1)
{
    FUNCTION_MARKER(0x800CC214u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  _DWORD *v1 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP); 
  _DWORD *v2; 
  int v3; 
  int v4; 
  int v5; 
  int *v6; 
  int v7; 
  int v8; 
  _WORD *v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  _DWORD *v16; 
  int *v17; 
  int *v18; 
  int v19; 
  int *v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int result; 

  v2 = SF_DRAFT_PTR(_DWORD, v1[516]);
  v3 = 0;
  if ( (int)v1[535] > 0 )
  {
    v4 = (uint8)(*SF_DRAFT_PTR(uint8, 0x80116A14u));
    v5 = v1[535];
    v6 = SF_DRAFT_PTR(int, 0x8012FA38u);
    do
    {
      v7 = v6[10];
      if ( v7 )
      {
        v8 = v6[6];
        v9 = SF_DRAFT_PTR(_WORD, r_u32((uint32)v7 + 28u));
        if ( v8 )
        {
          if ( v3 || v4 )
          {
            v10 = v6[7];
            if ( v8 == -1 && v10 == 0x80000000 )
              _break(6u, 0);
            v9[2] = 8 * (v10 / v8) + 500;
            v11 = v6[8];
            if ( v8 == -1 && v11 == 0x80000000 )
              _break(6u, 0);
            v9[3] = 8 * (v11 / v8) + 500;
            v12 = v6[9];
            if ( v8 == -1 && v12 == 0x80000000 )
              _break(6u, 0);
            v9[4] = 8 * (v12 / v8) + 500;
          }
        }
      }
      ++v3;
      v6 += 11;
    }
    while ( v3 < v5 );
  }
  (*SF_DRAFT_PTR(uint32, 0x8012FA40u)) = a1;
  v13 = SF_DRAFT_PTR(uint32, 0x8012D698u)[0];
  v1[535] = 2;
  (*SF_DRAFT_PTR(uint32, 0x8012FA60u)) = a1;
  (*SF_DRAFT_PTR(uint32, 0x8012FA6Cu)) = 0x80128DC0u;
  (*SF_DRAFT_PTR(uint32, 0x8012FA8Cu)) = 0;
  (*SF_DRAFT_PTR(uint16, 0x80128DD4u)) = 0;
  for ( (*SF_DRAFT_PTR(uint32, 0x80128DCCu)) = v13; v2; v2 = SF_DRAFT_PTR(_DWORD, v2[2]) )
  {
    v14 = v1[535];
    if ( v14 + 1 >= 10 )
      break;
    v15 = *v2;
    v16 = SF_DRAFT_PTR(_DWORD, r_u32(*v2 + 4u));
    if ( v16 )
    {
      v17 = &SF_DRAFT_PTR(uint32, 0x8012FA38u)[11 * v14];
      *SF_DRAFT_PTR(_WORD, (v15 + 16)) = v16[5];
      v18 = SF_DRAFT_PTR(int, v15);
      *SF_DRAFT_PTR(_WORD, (v15 + 18)) = v16[6];
      v19 = v16[7];
      v20 = SF_DRAFT_PTR(int, (v15 + 32));
      v1[535] = v14 + 1;
      *SF_DRAFT_PTR(_DWORD, (v15 + 8)) = 0;
      *SF_DRAFT_PTR(_DWORD, (v15 + 40)) = 0;
      *SF_DRAFT_PTR(_WORD, (v15 + 20)) = v19;
      do
      {
        v21 = v18[1];
        v22 = v18[2];
        v23 = v18[3];
        *v17 = (*v18);
        v17[1] = v21;
        v17[2] = v22;
        v17[3] = v23;
        v18 += 4;
        v17 += 4;
      }
      while ( v18 != v20 );
      v24 = v18[1];
      v25 = v18[2];
      *v17 = (*v18);
      v17[1] = v24;
      v17[2] = v25;
    }
  }
  result = v1[535];
  v1[960] = result;
  return result;
}

sint32 sub_8003FE58(void)
{
    FUNCTION_MARKER(0x8003FE58u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v1; 
  int v2; 
  int v3; 
  __int64 v4; // kr00_8
  char v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 

  int result; 
  int v13; 
  int v14; 
  int v15; 
  char v16[16]; 

  v1 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2600));
  if ( v1 <= 0 )
  {
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 776)) = 0;
    v2 = 0;
    v6 = 0;
    v5 = 0;
  }
  else
  {
    v2 = v1 / 1200;
    v3 = v1 % 1200 % 20;
    v4 = 1431655766LL * v3;
    v3 >>= 31;
    v5 = ((uint8)((uint64)v4 >> 32)) - v3;
    v6 = v1 % 1200 / 20;
    if ( HIDWORD(v4) != v3 || v6 )
    {
      v7 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 776));
      *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 776)) = v7 - 7;
      if ( v7 - 7 < 0 )
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 776)) = v7 + 3;
    }
    else
    {
      *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 776)) = 0;
    }
  }
  v8 = *(uint16 *)(SF_DRAFT_GP + 698);
  v9 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 776));
  v16[2] = 58;
  v16[5] = 58;
  v16[6] = v5 + 48;
  v16[8] = 0;
  v16[7] = v9 + 48;
  v16[0] = v2 / 10 + 48;
  v16[1] = v2 % 10 + 48;
  v16[3] = v6 / 10 + 48;
  v16[4] = v6 % 10 + 48;
  LOWORD(v10) = sub_80086EA0(v8, sf_draft_guest_address(v16));
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 698)) = v10;
  if ( v2 <= 0 )
  {
    result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 700));
    v10 = (uint16)v10;
    if ( result == 1 )
      return result;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 700)) = 1;
    v13 = 192;
    v14 = 80;
    v15 = 96;
  }
  else
  {
    result = 1;
    if ( *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 700)) == 2 )
      return result;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 700)) = 2;
    if ( *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724)) == 1 )
    {
      v10 = (uint16)v10;
      v13 = (uint8)(*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 672)) + 20);
      v14 = (uint8)(*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 673)) + 30);
      v15 = (uint8)(*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 674)) + 40);
    }
    else
    {
      v13 = *(uint8 *)(SF_DRAFT_GP + 728);
      v14 = *(uint8 *)(SF_DRAFT_GP + 729);
      v15 = *(uint8 *)(SF_DRAFT_GP + 730);
      v10 = (uint16)v10;
    }
  }
  return sub_80086E44(v10, v13, v14, v15);
}

sint32 sub_80078BD0(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80078BD0u, "SCUS_942.40");
    sint32 point[3];
    uint32 token = sf_draft_guest_address(point);
    uint32 offset;
    for (offset = 20; offset <= 28; offset += 4)
    {
        point[0] = r_s16(r_u32(a1 + offset));
        point[1] = r_s16(r_u32(a1 + offset) + 2u);
        point[2] = r_s16(r_u32(a1 + offset) + 4u);
        sub_800EADF4(a2, token, token);
        point[0] = (sint32)((uint32)point[0] + r_u32(a2 + 20u));
        point[1] = (sint32)((uint32)point[1] + r_u32(a2 + 24u));
        point[2] = (sint32)((uint32)point[2] + r_u32(a2 + 28u));
        w_u16(r_u32(a1 + offset), (uint16)point[0]);
        w_u16(r_u32(a1 + offset) + 2u, (uint16)point[1]);
        w_u16(r_u32(a1 + offset) + 4u, (uint16)point[2]);
    }
    return point[2];
}

sint32 sub_80084698(sint32 a1)
{
    FUNCTION_MARKER(0x80084698u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int *v2; 
  int *v3; 
  int v4; 
  char *v5; 
  int v6; 
  int *v7; 
  int v8; 
  int v9; 
  int *v10; 
  int v11; 
  int result; 
  int v13[4]; 

  v13[0] = (*SF_DRAFT_PTR(uint32, 0x800124DCu));
  v13[1] = (*SF_DRAFT_PTR(uint32, 0x800124E0u));
  v13[2] = (*SF_DRAFT_PTR(uint32, 0x800124E4u));
  v13[3] = (*SF_DRAFT_PTR(uint32, 0x800124E8u));
  v2 = &(*SF_DRAFT_PTR(uint32, 0x80120EF8u));
  v3 = SF_DRAFT_PTR(int, 0x80120A98u);
  if ( a1 )
  {
    sub_800CB250(0, sf_draft_guest_address(v13), 1, 0x80116128u, 4, 2, 0, 0x80116964u);
    *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3324)) + 6)) |= 1u;
  }
  v4 = 0;
  v5 = &(*SF_DRAFT_PTR(uint8, 0x80120EFFu));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1128)) = 0;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1132)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3008)) = -1;
  do
  {
    ++v4;
    *(_WORD *)(v5 + 3) = 0;
    *(_WORD *)(v5 + 1) = 0;
    *(_WORD *)(v5 + 7) = 0;
    *(_WORD *)(v5 + 5) = 0;
    *(_DWORD *)(v5 + 9) = 0;
    *v2 = 0;
    *(v5 - 1) = 0x80;
    *(v5 - 2) = 0x80;
    *(v5 - 3) = 0x80;
    *v5 = 0;
    v5 += 20;
    v2 += 5;
  }
  while ( v4 < 6 );
  v6 = 0;
  v7 = &SF_DRAFT_PTR(uint32, 0x80120A98u)[5];
  v8 = *v2;
  *((_WORD *)v2 + 4) = -122;
  *((_WORD *)v2 + 5) = 90;
  *((_WORD *)v2 + 6) = 210;
  *((_WORD *)v2 + 7) = 60;
  v2[4] = 0;
  *((_BYTE *)v2 + 6) = 0x80;
  *((_BYTE *)v2 + 5) = 0x80;
  *((_BYTE *)v2 + 4) = 0x80;
  *((_BYTE *)v2 + 7) = 0;
  v2[9] = 0;
  *v2 = (v8 | 4);
  do
  {
    ++v6;
    *((_WORD *)v7 - 4) = 0;
    *(v7 - 3) = 0;
    *(v7 - 4) = 0;
    *v3 = 0;
    v7[1] = 0;
    *(_BYTE *)v7 = 0;
    v7 += 7;
    v3 += 7;
  }
  while ( v6 < 40 );
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1136)) = 0;
  sub_800848D4(0x8011F5F8u, 120);
  v9 = 0;
  v10 = SF_DRAFT_PTR(int, 0x80120F84u);
  v11 = 0;
  do
  {
    sub_800C8148(sf_draft_guest_address(v10), 0, 67109888, 67109888);
    SF_DRAFT_PTR(uint32, 0x80120F84u)[v11] = 0;
    v10 += 6;
    ++v9;
    v11 += 6;
  }
  while ( v9 < 10 );
  sub_800C7CEC(0x80121074u, 5255208, 67109888, 67109888, 67109888, 67109888);
  result = 3;
  (*SF_DRAFT_PTR(uint32, 0x80121074u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x80121078u)) = 3;
  return result;
}

sint32 sub_80038098(uint32 a1)
{
    FUNCTION_MARKER(0x80038098u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  unsigned int v2; 
  int v3; 
  int result; 
  int v5; 
  sint32 v6; 
  int v7; 
  __int64 v8; 
  bool v9; // dc
  int v10; 
  int v11; 
  int v12; 

  v2 = a1_view[87];
  v3 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x801169D4u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v10 = a1_view[74];
  v11 = a1_view[75];
  v12 = a1_view[76];
  if ( v2 >= 2 )
  {
    result = 5;
    if ( a1_view[90] == 3 )
    {
      v5 = 4;
      if ( v2 == 5 )
        v5 = 5;
      goto LABEL_24;
    }
  }
  result = (unsigned int)*(uint8 *)(*SF_DRAFT_PTR(_DWORD, (v3 + 16)) + 8) - 1 < 2;
  v5 = 0;
  if ( (unsigned int)*(uint8 *)(*SF_DRAFT_PTR(_DWORD, (v3 + 16)) + 8) - 1 >= 2 )
    goto LABEL_24;
  result = sub_8001C960(0);
  v5 = 0;
  if ( !result )
    goto LABEL_24;
  result = a1_view[89];
  if ( result )
    goto LABEL_24;
  v6 = v2 < 2;
  if ( v10 || (v6 = v2 < 2, v11) || (v6 = v2 < 2, v12) )
  {
    if ( v6 )
    {
      result = 1;
      if ( v12 >= -2633 )
      {
        v5 = 0;
        goto LABEL_24;
      }
    }
    else
    {
      result = v12 > 2633;
      v5 = 0;
      if ( v12 > 2633 )
        goto LABEL_24;
    }
    if ( v2 == 1 )
    {
      result = -1;
LABEL_19:
      a1_view[83] = result;
      v5 = 2;
      goto LABEL_24;
    }
    result = 4;
    if ( v2 == 2 )
    {
      v7 = a1_view[83];
      v8 = sub_800FEFE4(v7);
      v9 = sub_800FF284(v8, HIDWORD(v8), 0, -1073217536) <= 0;
      result = v7 - 1;
      if ( !v9 )
        goto LABEL_19;
    }
    else
    {
      v5 = 5;
      if ( v2 != 4 )
        goto LABEL_24;
    }
    v5 = 4;
    goto LABEL_24;
  }
  result = 2;
  v5 = 1;
  if ( v2 == 2 )
    v5 = 3;
LABEL_24:
  a1_view[86] = v2;
  a1_view[87] = v5;
  return result;
}

sint32 sub_80072F84(uint32 a1, sint32 a2, sint32 a3, uint32 a4, uint32 a9, uint32 a10)
{
    FUNCTION_MARKER(0x80072F84u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a4_view = SF_DRAFT_PTR(_DWORD, a4);
    _DWORD *a9_view = SF_DRAFT_PTR(_DWORD, a9);
    int *a10_view = SF_DRAFT_PTR(int, a10);
  int v13; 
  int v14; 
  int result; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 

  if ( a3 == 1 )
  {
    v13 = sub_800C6D4C((*a1_view), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 68))));
    v14 = sub_800C6D4C((a1_view[1]), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 72))));
    v21 = v13 + v14 + sub_800C6D4C((a1_view[2]), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 76))));
    v18 = sub_800C6D4C((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 68))), v21);
    v19 = sub_800C6D4C((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 72))), v21);
    v20 = sub_800C6D4C((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a2) + 76))), v21);
    *a9_view = *a1_view - v18;
    a9_view[1] = a1_view[1] - v19;
    result = a1_view[2] - v20;
    a9_view[2] = result;
    if ( a10_view )
      return sub_800D9580(sf_draft_guest_address(a9_view), sf_draft_guest_address(a10_view));
  }
  else
  {
    result = 3;
    if ( a3 == 2 )
    {
      v16 = sub_800C6D4C((*a1_view), (*a4_view));
      v17 = sub_800C6D4C((a1_view[1]), (a4_view[1]));
      v22 = v16 + v17 + sub_800C6D4C((a1_view[2]), (a4_view[2]));
      *a9_view = sub_800C6D4C((*a4_view), v22);
      a9_view[1] = sub_800C6D4C((a4_view[1]), v22);
      result = sub_800C6D4C((a4_view[2]), v22);
      a9_view[2] = result;
      if ( a10_view )
      {
        result = v22;
        if ( v22 < 0 )
          result = -v22;
        *a10_view = result;
      }
    }
    else if ( a3 == 3 )
    {
      *a9_view = 0;
      a9_view[1] = 0;
      a9_view[2] = 0;
      if ( a10_view )
        *a10_view = 0;
    }
  }
  return result;
}

sint32 sub_800DC40C(uint32 a1, uint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800DC40Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  int result; 
  __int16 v6; 
  __int16 v7; 
  int v8; 
  __int16 v9; 
  _DWORD *v10; 
  _DWORD *v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  _DWORD *v18; 
  char *v19; 
  bool v20; // dc
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  __int16 v27; 
  __int16 v28; 
  int v29; 
  __int16 v30; 
  _DWORD v31[8]; 
  char v32[32]; 

  if ( !a1_view )
    return 24;
  v6 = *SF_DRAFT_PTR(_WORD, (a3 + 10));
  *SF_DRAFT_PTR(_WORD, (a3 + 2)) = -*SF_DRAFT_PTR(_WORD, (a3 + 2));
  v7 = *SF_DRAFT_PTR(_WORD, (a3 + 6));
  *SF_DRAFT_PTR(_WORD, (a3 + 10)) = -v6;
  v8 = *SF_DRAFT_PTR(_DWORD, (a3 + 24));
  *SF_DRAFT_PTR(_WORD, (a3 + 6)) = -v7;
  v9 = *SF_DRAFT_PTR(_WORD, (a3 + 14));
  *SF_DRAFT_PTR(_DWORD, (a3 + 24)) = -v8;
  *SF_DRAFT_PTR(_WORD, (a3 + 14)) = -v9;
  v10 = (_DWORD *)a1_view[8];
  if ( v10 )
  {
    v11 = (_DWORD *)v10[8];
    if ( a2_view == v11 )
    {
      v12 = *SF_DRAFT_PTR(_DWORD, (a3 + 4));
      v13 = *SF_DRAFT_PTR(_DWORD, (a3 + 8));
      v14 = *SF_DRAFT_PTR(_DWORD, (a3 + 12));
      *v10 = (*SF_DRAFT_PTR(_DWORD, a3));
      v10[1] = v12;
      v10[2] = v13;
      v10[3] = v14;
      v15 = *SF_DRAFT_PTR(_DWORD, (a3 + 20));
      v16 = *SF_DRAFT_PTR(_DWORD, (a3 + 24));
      v17 = *SF_DRAFT_PTR(_DWORD, (a3 + 28));
      v10[4] = *SF_DRAFT_PTR(_DWORD, (a3 + 16));
      v10[5] = v15;
      v10[6] = v16;
      v10[7] = v17;
LABEL_14:
      *(_BYTE *)(a1_view[8] + 44) = 1;
LABEL_18:
      result = 0;
      goto LABEL_19;
    }
    if ( a2_view )
    {
      v20 = v11 != 0;
      v18 = (_DWORD *)(a2_view);
      if ( !v20 )
      {
        v19 = SF_DRAFT_PTR(char, a3);
        goto LABEL_13;
      }
    }
    else
    {
      if ( v11 )
      {
        sub_800DA474(sf_draft_guest_address(v11), sf_draft_guest_address(v31));
        v18 = SF_DRAFT_PTR(_DWORD, v31);
        v10 = (_DWORD *)a1_view[8];
        v19 = SF_DRAFT_PTR(char, a3);
LABEL_13:
        sub_800EB0D4(sf_draft_guest_address(v18), sf_draft_guest_address(v19), sf_draft_guest_address(v10));
        goto LABEL_14;
      }
      v18 = 0;
    }
    sub_800EB0D4(sf_draft_guest_address(v18), a3, sf_draft_guest_address(v32));
    sub_800DA474(r_u32(a1_view[8] + 32), sf_draft_guest_address(v31));
    v18 = SF_DRAFT_PTR(_DWORD, v31);
    v10 = (_DWORD *)a1_view[8];
    v19 = SF_DRAFT_PTR(char, v32);
    goto LABEL_13;
  }
  if ( !a2_view )
  {
    v21 = *SF_DRAFT_PTR(_DWORD, (a3 + 4));
    v22 = *SF_DRAFT_PTR(_DWORD, (a3 + 8));
    v23 = *SF_DRAFT_PTR(_DWORD, (a3 + 12));
    *a1_view = *SF_DRAFT_PTR(_DWORD, a3);
    a1_view[1] = v21;
    a1_view[2] = v22;
    a1_view[3] = v23;
    v24 = *SF_DRAFT_PTR(_DWORD, (a3 + 20));
    v25 = *SF_DRAFT_PTR(_DWORD, (a3 + 24));
    v26 = *SF_DRAFT_PTR(_DWORD, (a3 + 28));
    a1_view[4] = *SF_DRAFT_PTR(_DWORD, (a3 + 16));
    a1_view[5] = v24;
    a1_view[6] = v25;
    a1_view[7] = v26;
    goto LABEL_18;
  }
  sub_800EB0D4(a2, a3, a1);
  result = 0;
LABEL_19:
  v27 = *SF_DRAFT_PTR(_WORD, (a3 + 10));
  *SF_DRAFT_PTR(_WORD, (a3 + 2)) = -*SF_DRAFT_PTR(_WORD, (a3 + 2));
  v28 = *SF_DRAFT_PTR(_WORD, (a3 + 6));
  *SF_DRAFT_PTR(_WORD, (a3 + 10)) = -v27;
  v29 = *SF_DRAFT_PTR(_DWORD, (a3 + 24));
  *SF_DRAFT_PTR(_WORD, (a3 + 6)) = -v28;
  v30 = *SF_DRAFT_PTR(_WORD, (a3 + 14));
  *SF_DRAFT_PTR(_DWORD, (a3 + 24)) = -v29;
  *SF_DRAFT_PTR(_WORD, (a3 + 14)) = -v30;
  return result;
}

sint32 sub_80057BB4(sint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x80057BB4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v9; 
  int *v10; 
  int v11; 
  int result; 
  int v13; 
  int v14; 
  int *v15; 
  int v16; 
  int v17; 
  int v18; 
  int *v19; 
  int v20; 

  v9 = 0;
  v10 = SF_DRAFT_PTR(int, 0x8012F120u);
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3238)) = 0;
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 >= 0 )
      break;
    ++v9;
    ++v10;
    if ( v9 >= 6 )
    {
      result = a3 < 3200;
      goto LABEL_5;
    }
  }
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3238)) = v9 + 1;
  result = a3 < 3200;
LABEL_5:
  if ( result && a1 )
  {
    while ( v11 >= 0 )
    {
      if ( v11 != a4 )
      {
        v16 = *SF_DRAFT_PTR(_DWORD, (76 * v11 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        v17 = *SF_DRAFT_PTR(_DWORD, (v16 + 28));
        if ( !*SF_DRAFT_PTR(_WORD, (v17 + 54)) )
        {
          if ( v17 )
          {
            sub_800E0364(a2, (*SF_DRAFT_PTR(_DWORD, (v16 + 12))), sf_draft_guest_address(&v20));
            if ( v20 < a3 )
            {
              *SF_DRAFT_PTR(_WORD, (v17 + 54)) = a3;
              *SF_DRAFT_PTR(_BYTE, (v17 + 64)) = a1;
            }
          }
        }
      }
      v18 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3238));
      result = v18 < 6;
      v11 = -1;
      if ( v18 < 6 )
      {
        v19 = &SF_DRAFT_PTR(uint32, 0x8012F120u)[v18];
        while ( 1 )
        {
          v11 = *v19;
          result = v18 + 1;
          if ( *v19 >= 0 )
            break;
          result = ++v18 < 6;
          ++v19;
          if ( v18 >= 6 )
            goto LABEL_29;
        }
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3238)) = result;
      }
LABEL_29:
      ;
    }
  }
  else
  {
    while ( v11 >= 0 )
    {
      if ( v11 != a4 )
      {
        v13 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * v11 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 28));
        *SF_DRAFT_PTR(_WORD, (v13 + 54)) = a3;
        *SF_DRAFT_PTR(_BYTE, (v13 + 64)) = a1;
      }
      v14 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3238));
      result = v14 < 6;
      v11 = -1;
      if ( v14 < 6 )
      {
        v15 = &SF_DRAFT_PTR(uint32, 0x8012F120u)[v14];
        while ( 1 )
        {
          v11 = *v15;
          result = v14 + 1;
          if ( *v15 >= 0 )
            break;
          result = ++v14 < 6;
          ++v15;
          if ( v14 >= 6 )
            goto LABEL_15;
        }
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3238)) = result;
      }
LABEL_15:
      ;
    }
  }
  return result;
}

sint32 sub_800191F0(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800191F0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int result; 

  if ( *SF_DRAFT_PTR(_DWORD, (a2 + 28)) == 1 )
  {
    v4 = *SF_DRAFT_PTR(_DWORD, (a2 + 8));
    v5 = a1_view[39];
    if ( v4 >= v5 )
    {
      v5 = a1_view[43];
      if ( v5 >= v4 )
        v5 = *SF_DRAFT_PTR(_DWORD, (a2 + 8));
    }
    *SF_DRAFT_PTR(_DWORD, (a2 + 8)) = v5;
    if ( v5 != a1_view[15] )
    {
      sub_80019630(v5, sf_draft_guest_address(a1_view + 15));
      sub_80019630((a1_view[3]), sf_draft_guest_address(a1_view + 3));
      sub_800196AC((a1_view[3]), (a1_view[15]), sf_draft_guest_address(a1_view + 3));
    }
    a1_view[35] = 1;
  }
  if ( *SF_DRAFT_PTR(_DWORD, (a2 + 32)) == 1 )
  {
    v6 = *SF_DRAFT_PTR(_DWORD, (a2 + 12));
    v7 = a1_view[40];
    if ( v6 >= v7 )
    {
      v7 = a1_view[44];
      if ( v7 >= v6 )
        v7 = *SF_DRAFT_PTR(_DWORD, (a2 + 12));
    }
    *SF_DRAFT_PTR(_DWORD, (a2 + 12)) = v7;
    if ( v7 != a1_view[16] )
    {
      sub_80019630(v7, sf_draft_guest_address(a1_view + 16));
      sub_80019630((a1_view[4]), sf_draft_guest_address(a1_view + 4));
      sub_800196AC((a1_view[4]), (a1_view[16]), sf_draft_guest_address(a1_view + 4));
    }
    a1_view[36] = 1;
  }
  if ( *SF_DRAFT_PTR(_DWORD, (a2 + 36)) == 1 )
  {
    v8 = *SF_DRAFT_PTR(_DWORD, (a2 + 16));
    v9 = a1_view[41];
    if ( v8 >= v9 )
    {
      v9 = a1_view[45];
      if ( v9 >= v8 )
        v9 = *SF_DRAFT_PTR(_DWORD, (a2 + 16));
    }
    *SF_DRAFT_PTR(_DWORD, (a2 + 16)) = v9;
    if ( v9 != a1_view[17] )
    {
      sub_80019630(v9, sf_draft_guest_address(a1_view + 17));
      sub_80019630((a1_view[5]), sf_draft_guest_address(a1_view + 5));
      sub_800196AC((a1_view[5]), (a1_view[17]), sf_draft_guest_address(a1_view + 5));
    }
    a1_view[37] = 1;
  }
  result = 1;
  if ( *SF_DRAFT_PTR(_BYTE, (a2 + 44)) == 1 )
    return (uint8)sub_800196E4(sf_draft_guest_address(a1_view), a2 + 28);
  return result;
}

sint32 sub_800950C4(uint32 a1)
{
    FUNCTION_MARKER(0x800950C4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  int v2; 
  int v3; 
  __int16 *v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int result; 
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
  int v28; 

  v2 = a1_view[16];
  v3 = a1_view[15];
  v4 = (__int16 *)(*(__int16 **)(a1_view[9] + 8));
  v5 = a1_view[4] << 12;
  if ( (sint32)a1_view[13] < v2 )
  {
    v26 = sub_800C6D90((a1_view[5]), v2);
    v27 = sub_800C6D90((a1_view[6]), v2);
    v16 = v3 - v5;
    v28 = sub_800C6D90((a1_view[7]), v2);
    v24 = sub_800C6D4C(v26, v16);
    v25 = sub_800C6D4C(v27, v16);
    v17 = sub_800C6D4C(v28, v16);
    a1_view[21] = v24 - a1_view[5];
    a1_view[22] = v25 - a1_view[6];
    a1_view[23] = v17 - a1_view[7];
    result = a1_view[21];
    v18 = a1_view[22];
    v19 = a1_view[23];
    v20 = a1_view[24];
    a1_view[25] = result;
    a1_view[26] = v18;
    a1_view[27] = v19;
    a1_view[28] = v20;
    a1_view[29] = 0;
    a1_view[30] = 0;
    a1_view[31] = 0;
  }
  else
  {
    v21 = *v4;
    v6 = v2 - v3 + (a1_view[4] << 12);
    v22 = v4[1];
    v23 = v4[2];
    a1_view[21] = sub_800C6D4C(v21, v6);
    a1_view[22] = sub_800C6D4C(v22, v6);
    a1_view[23] = sub_800C6D4C(v23, v6);
    a1_view[25] = sub_800C6D4C(v21, v2);
    a1_view[26] = sub_800C6D4C(v22, v2);
    v7 = sub_800C6D4C(v23, v2);
    v8 = a1_view[21];
    v9 = a1_view[25];
    a1_view[27] = v7;
    v10 = a1_view[22];
    v11 = a1_view[27];
    v12 = v8 - v9;
    v13 = a1_view[26];
    a1_view[29] = v12;
    result = v10 - v13;
    v15 = a1_view[23] - v11;
    a1_view[30] = result;
    a1_view[31] = v15;
  }
  return result;
}

sint32 sub_800938CC(sint32 a1, sint32 a2, uint32 a3, sint32 a4, uint32 a5)
{
    FUNCTION_MARKER(0x800938CCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
  uint32 texture[8];
  uint32 packedColor;
  int result; 
  int v7; 
  sint32 v8; 
  int v9; 
  bool v10; // dc
  _DWORD *v11; 

  result = 4;
  if ( a4 != 4 )
    return result;
  v7 = 0;
  if ( (int)a3_view[2] <= 0 )
    goto LABEL_11;
  v8 = 1;
  if ( (int)a3_view[6] > 0 )
  {
    v8 = 1;
    if ( (int)a3_view[10] > 0 )
    {
      if ( (int)a3_view[14] > 0 )
      {
        texture[3] = 2;
        texture[4] = 0x00A00300u;
        texture[5] = 0x00200010u;
        texture[7] = 0x01E30300u;
        packedColor = ((uint32)(r_u8(a5 + 2u) >> 2) << 16) + ((uint32)(r_u8(a5 + 1u) >> 2) << 8) + (r_u8(a5) >> 2);
        sub_800C7D8C(a1, *a3_view - (a3_view[1] << 16), a3_view[4] - (a3_view[5] << 16), a3_view[12] - (a3_view[13] << 16), a3_view[8] - (a3_view[9] << 16), packedColor, sf_draft_guest_address(texture), 2);
        *SF_DRAFT_PTR(_BYTE, (a1 + 15)) |= 2u;
        v9 = 3 * (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) - 128) / 16;
        if ( v9 < 0 )
          v9 = 0;
        v10 = *SF_DRAFT_PTR(_DWORD, a1) != 0;
        *SF_DRAFT_PTR(_DWORD, (a1 + 4)) = v9;
        if ( !v10 )
          sub_800C7BB0((*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))), a1);
        v7 = 1;
      }
LABEL_11:
      v8 = v7 < 4;
    }
  }
  v10 = !v8;
  result = 2 * v7;
  if ( !v10 )
  {
    v11 = (_DWORD *)(48 * v7 + a1);
    do
    {
      if ( *v11 )
        sub_800C7BF8((*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))), sf_draft_guest_address(v11));
      result = ++v7 < 4;
      v11 += 12;
    }
    while ( v7 < 4 );
  }
  return result;
}

sint32 sub_80048D58(sint32 a1)
{
    FUNCTION_MARKER(0x80048D58u, "SCUS_942.40");
    uint32 entity = r_u32((uint32)a1 + 12u);
    union { uint8 bytes[32]; uint16 halves[16]; uint32 words[8]; } matrix;
    sint32 bounds[6];
    sint16 points[8][4];
    sint32 best[3];
    sint32 result = 3;
    uint32 source;
    unsigned i;
    if ((uint32)r_u8((uint32)a1 + 34u) - 1u < 2u) return sub_80048B0C(a1);
    if (r_u8(entity + 265u) != 3u) return result;
    source = r_u32(r_u32((uint32)a1 + 8u) + 12u);
    for (i = 0; i < 9; ++i) {
        uint16 value = r_u16(source + 2u * i);
        matrix.halves[i] = (uint16)((i & 1u) ? 0u - value : value);
    }
    matrix.words[5] = r_u32(source + 20u);
    matrix.words[6] = 0u - r_u32(source + 24u);
    matrix.words[7] = r_u32(source + 28u);
    sub_800D8E60(r_u32((uint32)a1 + 8u), 0, sf_draft_guest_address(bounds));
    {
        sint32 old = bounds[1];
        bounds[1] = (sint32)(0u - (uint32)bounds[5]);
        bounds[5] = (sint32)(0u - (uint32)old);
    }
    sub_800E29B0(sf_draft_guest_address(bounds), sf_draft_guest_address(points), sf_draft_guest_address(&matrix));
    best[0] = points[0][0]; best[1] = points[0][1]; best[2] = points[0][2];
    for (i = 1; i < 8; ++i) {
        if (points[i][1] < best[1]) {
            best[0] = points[i][0]; best[1] = points[i][1]; best[2] = points[i][2];
        }
    }
    w_u32(entity + 268u, (uint32)best[0]);
    w_u32(entity + 272u, (uint32)best[1]);
    w_u32(entity + 276u, (uint32)best[2]);
    /* TODO Resolve observable original stale fourth local word */
    w_u32(entity + 280u, sf_draft_missing_stale_local_80048D58());
    return best[0];
}

sint32 sub_8006D408(sint32 a1)
{
    FUNCTION_MARKER(0x8006D408u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v2; 

  int v4; 
  int v5; 
  int v6; 
  int v7; 


  int v10; 

  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int result; 

  if ( *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2992)) )
  {
    v2 = sub_800EC8F4();
    v4 = 3 * (v2 / 360);
    v5 = 45 * (v2 / 360);
  }
  else
  {
    v2 = sub_800EC8F4();
    v4 = (int)((uint64)(1717986919LL * v2) >> 32) >> 4;
    v5 = 5 * (v2 / 40);
  }
  v6 = v2 - 8 * v5;
  v7 = v6 + 180;
  if ( !*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2992)) )
    v7 = v6 + 60;
  if ( *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2992)) == 1 )
  {
    sub_8006BE10((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2984))), (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2988))));
  }
  else
  {
    if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 3 && (unsigned int)(*SF_DRAFT_PTR(uint32, 0x80116A88u)) >= 0x97 )
    {
      (*SF_DRAFT_PTR(uint8, 0x8011645Cu)) = 1;
      sub_800EC8F4();
      v10 = sub_800EC8F4();
      sub_800C8A9C(0x8006D3C8u, v10 % 40 + 2, 0);
    }
    else
    {
      sub_8006BC98((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2984))), (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2988))), 0, 0);
    }
    v12 = sub_800EC8F4();
    if ( v12 % 10 >= 6 )
    {
      v13 = sub_800EC8F4();
      *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2992)) = 1;
      v7 = v13 % 20 + 5;
    }
  }
  v14 = (*SF_DRAFT_PTR(uint32, 0x801169A4u));
  v15 = *(uint8 *)(SF_DRAFT_GP + 2992);
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2980)) = v7;
  result = v15 ^ 1;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2976)) = v14;
  *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2992)) = result;
  return result;
}

void sub_80049B24(void)
{
    FUNCTION_MARKER(0x80049B24u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int i; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 

  for ( i = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 876)); i; i = *SF_DRAFT_PTR(_DWORD, (v3 + 420)) )
  {
    v2 = *SF_DRAFT_PTR(_DWORD, (i + 8));
    v3 = *SF_DRAFT_PTR(_DWORD, (i + 12));
    v4 = 0;
    if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 16)) + 40)) & 0x400000) != 0 && ((*SF_DRAFT_PTR(_BYTE, (v2 + 8)) & 0x10) != 0 || !v3)
      || (v5 = 0, *SF_DRAFT_PTR(_BYTE, (v3 + 256))) )
    {
      v4 = 1;
      v5 = 1;
    }
    if ( v5 )
    {
      sub_800482B8(r_u32(i + 12), 0);
      *SF_DRAFT_PTR(_DWORD, (v3 + 404)) = 0;
      *SF_DRAFT_PTR(_BYTE, (v3 + 264)) = 0;
    }
    else
    {
      if ( *SF_DRAFT_PTR(_BYTE, (v3 + 265)) )
      {
        if ( *SF_DRAFT_PTR(_DWORD, (v3 + 416)) )
        {
          sub_80071384(i);
        }
        else if ( (unsigned int)*(uint8 *)(i + 34) - 1 >= 2 )
        {
          sub_80070F74(i, v4);
        }
        else
        {
          sub_8006FED0(i);
        }
      }
      else
      {
        sub_80048F3C(i, 1, 0);
        sub_800493F0(i, 1, 0);
        sub_80049690(i, 1, 0);
      }
      *SF_DRAFT_PTR(_BYTE, (v3 + 264)) = 1;
    }
    if ( *SF_DRAFT_PTR(_DWORD, (v3 + 412)) )
    {
      sub_800224AC(i);
    }
    else if ( *SF_DRAFT_PTR(_BYTE, (v3 + 257)) && (!*SF_DRAFT_PTR(_DWORD, (v3 + 416)) || (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (i + 8)) + 10)) & 2) != 0) )
    {
      *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (i + 12)) + 112)) += (*SF_DRAFT_PTR(uint32, 0x80103F04u));
      *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (i + 12)) + 116)) += (*SF_DRAFT_PTR(uint32, 0x80103F08u));
      *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (i + 12)) + 120)) += (*SF_DRAFT_PTR(uint32, 0x80103F0Cu));
    }
  }
}

sint32 sub_800E1088(uint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800E1088u, "SCUS_942.40");
    sint32 forward[4], side[3], up[3];
    sint16 angles[4];
    uint8 rotation[32];
    uint32 forward_address, side_address, up_address, rotation_address;
    if (a1 && (r_u32(a1) || r_u32(a1 + 4u) || r_u32(a1 + 8u)))
    {
        forward[0] = (sint32)r_u32(a1);
        forward[1] = (sint32)r_u32(a1 + 4u);
        forward[2] = (sint32)r_u32(a1 + 8u);
        forward[3] = (sint32)r_u32(a1 + 12u);
        side[0] = forward[2];
        side[1] = 0;
        side[2] = (sint32)(0u - (uint32)forward[0]);
        if (!forward[2] && !forward[0])
            side[2] = 4096;
        forward_address = sf_draft_guest_address(forward);
        side_address = sf_draft_guest_address(side);
        up_address = sf_draft_guest_address(up);
        sub_800C720C(side_address, side_address);
        sub_800EBA78(forward_address, side_address, up_address);
        w_u16(a3, (uint16)side[0]);
        w_u16(a3 + 6u, (uint16)side[1]);
        w_u16(a3 + 12u, (uint16)side[2]);
        w_u16(a3 + 2u, (uint16)up[0]);
        w_u16(a3 + 8u, (uint16)up[1]);
        w_u16(a3 + 14u, (uint16)up[2]);
        w_u16(a3 + 4u, (uint16)forward[0]);
        w_u16(a3 + 10u, (uint16)forward[1]);
        w_u16(a3 + 16u, (uint16)forward[2]);
        if (a2)
        {
            angles[0] = 0;
            angles[1] = 0;
            angles[2] = (sint16)(0u - (uint32)a2);
            rotation_address = sf_draft_guest_address(rotation);
            sub_800EBE94(sf_draft_guest_address(angles), rotation_address);
            w_u16(rotation_address + 2u, (uint16)(0u - r_u16(rotation_address + 2u)));
            w_u16(rotation_address + 6u, (uint16)(0u - r_u16(rotation_address + 6u)));
            w_u16(rotation_address + 10u, (uint16)(0u - r_u16(rotation_address + 10u)));
            w_u16(rotation_address + 14u, (uint16)(0u - r_u16(rotation_address + 14u)));
            sub_800EACE4(a3, rotation_address, a3);
        }
    }
    return 1;
}

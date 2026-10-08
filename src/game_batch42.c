#include "game_draft.h"
__declspec(noreturn) void sf_draft_df6ec_unbound_stack_location(uint32 handle);
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_800459F8();



/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x80087FE4u 0x80087fe4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80087FE4(sint32 a1, sint8 a2)
{
  FUNCTION_MARKER(0x80087FE4u, "SCUS_942.40");
  int v2 = SF_DRAFT_GP;
  _DWORD *v3; 
  int result; 
  int v5; 
  int v6; 
  int *v7; 
  int v8; 
  int v9; 
  int v10; 
  _DWORD *v11; 
  int v12; 
  int v13; 
  int v14; 
  int *v15; 
  int v16; 
  int v17; 

  v3 = SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 40)));
  result = 1;
  if ( a2 == 1 )
  {
    v5 = *SF_DRAFT_PTR(_DWORD, (v2 + 1236));
    v6 = 0;
    if ( v5 > 0 )
    {
      v7 = SF_DRAFT_PTR(int, 0x80121098u);
      do
      {
        ++v6;
        *SF_DRAFT_PTR(_WORD, (*v7 + 2)) = -*SF_DRAFT_PTR(_WORD, (*v7 + 2));
        result = v6 < v5;
        ++v7;
      }
      while ( v6 < v5 );
    }
    for ( *SF_DRAFT_PTR(_DWORD, (v2 + 1236)) = 0; v3; v3 = SF_DRAFT_PTR(_DWORD, v3[1]) )
    {
      v8 = v3[4];
      result = -*SF_DRAFT_PTR(uint16, (v8 + 2));
      *SF_DRAFT_PTR(_WORD, (v8 + 2)) = result;
    }
  }
  else
  {
    for ( ; v3; v3 = SF_DRAFT_PTR(_DWORD, v3[1]) )
    {
      v9 = v3[2];
      v10 = 0;
      if ( v9 > 0 )
      {
        v11 = v3;
        do
        {
          v12 = *SF_DRAFT_PTR(_DWORD, (v2 + 1236));
          v13 = v11[7];
          v14 = 0;
          if ( v12 <= 0 )
            goto LABEL_16;
          v15 = SF_DRAFT_PTR(int, 0x80121098u);
          do
          {
            if ( *v15 == v13 )
              break;
            ++v14;
            ++v15;
          }
          while ( v14 < v12 );
          if ( v14 >= *SF_DRAFT_PTR(sint32, (v2 + 1236)) )
          {
LABEL_16:
            v16 = *SF_DRAFT_PTR(_DWORD, (v2 + 1236));
            result = v16 + 1;
            if ( v16 >= 400 )
              return result;
            *SF_DRAFT_PTR(_DWORD, (v2 + 1236)) = result;
            *SF_DRAFT_PTR(_WORD, (v13 + 2)) = -*SF_DRAFT_PTR(_WORD, (v13 + 2));
            SF_DRAFT_PTR(uint32, 0x80121098u)[v16] = v13;
          }
          ++v10;
          ++v11;
        }
        while ( v10 < v9 );
      }
      v17 = v3[4];
      result = -*SF_DRAFT_PTR(uint16, (v17 + 2));
      *SF_DRAFT_PTR(_WORD, (v17 + 2)) = result;
    }
  }
  return result;
}

// FUNCTION_MARKER 0x800DF6ECu 0x800df6ec
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DF6EC(sint8 a1)
{
  FUNCTION_MARKER(0x800DF6ECu, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  void (*v9)(void); 
  int v10; 
  int v11; 
  char *v12; 
  char v16; 

  v3 = 0;
  v4 = *SF_DRAFT_PTR(uint8, (v1 + 2460));
  v16 = 0x80;
  if ( !v4 )
    return 0;
  v5 = *SF_DRAFT_PTR(_DWORD, (v1 + 2472));
  if ( v5 )
    sub_800D89D8(v5);
  v6 = *SF_DRAFT_PTR(_DWORD, (v1 + 2468));
  *SF_DRAFT_PTR(_DWORD, (v1 + 2472)) = 0;
  if ( v6 )
    sub_800D89D8(v6);
  v7 = *SF_DRAFT_PTR(uint8, (v1 + 2460));
  *SF_DRAFT_PTR(_DWORD, (v1 + 2468)) = 0;
  if ( !v7 )
    return 0;
  v9 = *(void (**)(void))(v1 + 2464);
  *SF_DRAFT_PTR(_BYTE, (v1 + 2460)) = 0;
  if ( v9 )
    v9();
  *SF_DRAFT_PTR(_DWORD, (v1 + 2464)) = 0;
  v10 = 1;
  do
  {
    if ( v10 >= 11 )
      break;
    v11 = 14;
    if ( a1 == 1 )
    {
      v11 = 9;
      v12 = 0;
    }
    else
    {
      v12 = &v16;
    }
    v3 = sub_800ED5C0(v11, sf_draft_guest_address(v12),  0);
    ++v10;
  }
  while ( !v3 );
  if ( v3 )
  {
    sf_draft_df6ec_unbound_stack_location(r_u32(v1 + 2456u));
    *SF_DRAFT_PTR(_DWORD, (v1 + 2456)) = 0;
    return 0;
  }
  else
  {
    sub_800DF43C(37u);
    return 37;
  }
}

// FUNCTION_MARKER 0x80034A58u 0x80034a58
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_80034A58(void)
{
  FUNCTION_MARKER(0x80034A58u, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int v1; 
  int *v2; 
  int v3; 
  int *v4; 
  int *result; 

  if ( !(*SF_DRAFT_PTR(uint8, 0x8010BB3Cu)) )
    (*SF_DRAFT_PTR(uint8, 0x8010BCBCu)) = 1;
  (*SF_DRAFT_PTR(uint8, 0x8010BB3Cu)) = 1;
  *SF_DRAFT_PTR(_DWORD, (v0 + 588)) = -1;
  sub_8003477C();
  sub_80034810();
  sub_80034870();
  sub_800348D0();
  sub_80034964();
  sub_800349F8();
  sub_8003545C(0);
  v1 = 0;
  v2 = SF_DRAFT_PTR(int, 0x8010BAF4u);
  (*SF_DRAFT_PTR(uint32, 0x8010BB48u)) = (int)(*SF_DRAFT_PTR(uint32, 0x80128E90u));
  do
    SF_DRAFT_PTR(uint32, 0x8010BB58u)[*v2++] = v1++;
  while ( v1 < 9 );
  v3 = 0;
  v4 = SF_DRAFT_PTR(int, 0x8010BBCCu);
  (*SF_DRAFT_PTR(uint8, 0x8010BB50u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8010BB98u)) = 4055;
  (*SF_DRAFT_PTR(uint8, 0x8010BB51u)) = 0;
  (*SF_DRAFT_PTR(uint8, 0x8010BB52u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8010BB54u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8010BB9Cu)) = (int)(*SF_DRAFT_PTR(uint32, 0x8010BF48u));
  do
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    ++v3;
    v4 += 15;
  }
  while ( v3 < 4 );
  result = SF_DRAFT_PTR(int, 0x8010BFB8u);
  (*SF_DRAFT_PTR(uint32, 0x8010BC90u)) = (int)(*SF_DRAFT_PTR(uint32, 0x8010BFB8u));
  (*SF_DRAFT_PTR(uint32, 0x8010BC94u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8010BC98u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8010BC9Cu)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8010BCA0u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8010BCA4u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8010BCA8u)) = 0;
  (*SF_DRAFT_PTR(uint8, 0x8010BCACu)) = 0;
  (*SF_DRAFT_PTR(uint8, 0x8010BB4Cu)) = 0;
  (*SF_DRAFT_PTR(uint8, 0x8010BB4Du)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8010BCB0u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8010BCB4u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8010BCB8u)) = 0;
  (*SF_DRAFT_PTR(uint16, 0x8010BB4Eu)) = 0;
  return sf_draft_guest_address(result);
}

// FUNCTION_MARKER 0x80045E24u 0x80045e24
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80045E24(sint32 a1, sint32 a2, sint32 a3)
{
  FUNCTION_MARKER(0x80045E24u, "SCUS_942.40");
  int v3 = SF_DRAFT_GP;
  int v5; 
  int v7; 
  int v8 = SF_DRAFT_GP;
  int v9; 
  int i; 
  int v11; 
  int result; 

  v5 = a2;
  if ( a1 != (*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) )
    goto LABEL_17;
  if ( a2 == 28 )
  {
    v5 = sub_800459F8(*SF_DRAFT_PTR(_DWORD, (v3 + 848)));
  }
  else if ( a2 == 27 )
  {
    v7 = sub_80045A84(*SF_DRAFT_PTR(_DWORD, (v3 + 848)));
    v9 = v7;
    if ( !a3 )
    {
      for ( i = 32 * v7; ; i = 32 * v9 )
      {
        v11 = 2 * v9;
        if ( SF_DRAFT_PTR(uint8, 0x8010C38Du)[i] )
        {
          if ( SF_DRAFT_PTR(uint16, 0x8012F0B2u)[v11] || SF_DRAFT_PTR(uint16, 0x8012F0B0u)[v11] )
            break;
        }
        v9 = sub_80045A84(v9);
      }
    }
    *SF_DRAFT_PTR(_DWORD, (v8 + 848)) = v9;
    v5 = v9;
    goto LABEL_13;
  }
  *SF_DRAFT_PTR(_DWORD, (v3 + 848)) = v5;
LABEL_13:
  if ( !a3 )
  {
    sub_80040294();
    sub_800463D0(v5);
    sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 37);
  }
  if ( (*SF_DRAFT_PTR(uint32, 0x8012B8A0u)) == -1 )
    (*SF_DRAFT_PTR(uint32, 0x8012B8A0u)) = a1;
LABEL_17:
  result = (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
  *SF_DRAFT_PTR(_BYTE, (76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) = v5;
  return result;
}


#include "game_draft.h"
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_800E5184();
extern uint32 sub_800E9DB4(uint32 data, uint32 descriptor);




extern uint32 sub_800ED830();
extern uint32 sub_800FE7B4();

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x8004532Cu 0x8004532c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8004532C(sint32 a1, sint32 a2)
{
  FUNCTION_MARKER(0x8004532Cu, "SCUS_942.40");
  int *v3; 
  int v4; 
  int *v5; 
  int result; 

  v3 = SF_DRAFT_PTR(uint32, 0x80115FBCu);
  v4 = a1;
  if ( ((unsigned int)SF_DRAFT_PTR(uint32, 0x80115FBCu) & 3) != 0 )
  {
    v4 = a1 + 8 * ((unsigned int)SF_DRAFT_PTR(uint32, 0x80115FBCu) & 3);
    v3 = SF_DRAFT_PTR(int, ((unsigned int)SF_DRAFT_PTR(uint32, 0x80115FBCu) & 0xFFFFFFFC));
  }
  v5 = &v3[v4 >> 5];
  result = *v5 | (1 << (v4 & 0x1F));
  *v5 = result;
  if ( a2 )
    return sub_80045554(a1, a2);
  return result;
}

// FUNCTION_MARKER 0x8002C378u 0x8002c378
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8002C378(sint32 a1)
{
  FUNCTION_MARKER(0x8002C378u, "SCUS_942.40");
  int result; 
  bool v4; 

  result = sub_8002BF74(a1, 111);
  if ( result )
  {
    v4 = 0;
    if ( (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) & 0xA000000) == 0 )
      v4 = (*SF_DRAFT_PTR(_BYTE, a1) & 0x20) != 0;
    return sub_8002C2E8(result, a1, v4);
  }
  return result;
}

// FUNCTION_MARKER 0x800C5E64u 0x800c5e64
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C5E64(void)
{
  FUNCTION_MARKER(0x800C5E64u, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int result; 
  uint32 v2; 
  int v3 = SF_DRAFT_GP;
  _DWORD * v4 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
  char v5[8]; 

  result = *SF_DRAFT_PTR(_DWORD, (v0 + 1984));
  if ( !result )
  {
    v2 = sub_800ED5AC(0x800C6298u);
    if ( v2 != 0x800C6298u )
      *SF_DRAFT_PTR(_DWORD, (v3 + 2008)) = v2;
    v5[0] = -56;
    sub_800ED830(14, sf_draft_guest_address(v5),  0);
    sub_800C6264();
    result = 1;
    v4[497] = 0;
    v4[498] = 0;
    v4[496] = 1;
  }
  return result;
}

// FUNCTION_MARKER 0x80087194u 0x80087194
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_80087194(sint32 a1)
{
  FUNCTION_MARKER(0x80087194u, "SCUS_942.40");
  int i; 
  int v2; 
  _BYTE *v3; 
  unsigned int v4; 
  unsigned int v5; 

  for ( i = a1; i; i = *SF_DRAFT_PTR(_DWORD, (i + 24)) )
  {
    v2 = *SF_DRAFT_PTR(uint16, (i + 12));
    if ( *SF_DRAFT_PTR(_WORD, (i + 12)) )
    {
      v3 = SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, i) + 22));
      do
      {
        --v2;
        v4 = (uint8)*(v3 - 1);
        *(v3 - 2) -= *(v3 - 2) >> 2;
        v5 = (uint8)*v3;
        *(v3 - 1) = v4 - (v4 >> 2);
        *v3 = v5 - (v5 >> 2);
        v3 += 44;
      }
      while ( v2 > 0 );
    }
  }
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077B84_stage1(sint32 input1, sint32 input2, sint32 *output3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077B84_stage2(sint32 *output1);
// FUNCTION_MARKER 0x80077B84u 0x80077b84
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_80077B84(sint32 a1, sint32 a2)
{
  FUNCTION_MARKER(0x80077B84u, "SCUS_942.40");
  sint32 temporary_t1; /* TODO Geometry value type */
  int v3; 
  unsigned int result; 
  int v6; 

  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077B84_stage1(0, 0, &temporary_t1);
  v3 = temporary_t1;
  result = 0;
  if ( temporary_t1 > 0 )
  {
    result = 0;
    if ( temporary_t1 - a1 <= 0 )
    {
      /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077B84_stage2(&temporary_t1);
      v6 = (__int16)temporary_t1;
      if ( (temporary_t1 & 0x8000u) != 0 )
        v6 = -(__int16)temporary_t1;
      result = 0;
      if ( v6 - a2 < 0 )
        return (unsigned int)(3 * v3) >> 2;
    }
  }
  return result;
}

// FUNCTION_MARKER 0x80032BA8u 0x80032ba8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80032BA8(sint16 a1, sint32 a2)
{
  FUNCTION_MARKER(0x80032BA8u, "SCUS_942.40");
  int v2 = SF_DRAFT_GP;
  int v3; 

  v3 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  if ( a2 != 66 )
    return sub_8003320C(v3, 2);
  *SF_DRAFT_PTR(_BYTE, (v2 + 580)) = 1;
  return sub_800C8A9C(0x800329E8u,  5, sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x80115EACu)));
}

// FUNCTION_MARKER 0x8008BAB8u 0x8008bab8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8008BAB8(sint32 a1, uint32 a2)
{
  const char * native_a2 = SF_DRAFT_PTR(const char, a2);
  FUNCTION_MARKER(0x8008BAB8u, "SCUS_942.40");
  return sub_800EC924(a1, sf_draft_guest_address(native_a2));
}

// FUNCTION_MARKER 0x800282C4u 0x800282c4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800282C4(sint32 a1, sint32 a2, sint32 a3)
{
  FUNCTION_MARKER(0x800282C4u, "SCUS_942.40");
  int v3; 
  int v4; 
  int *result; 
  int v6; 

  v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
  v4 = 0;
  if ( !v3 )
    return (*SF_DRAFT_PTR(uint32, 0x8010B67Cu));
  while ( 1 )
  {
    result = SF_DRAFT_PTR(int, (v3 + 24 * v4));
    v6 = *SF_DRAFT_PTR(__int16, result);
    if ( v6 < 0 || !*SF_DRAFT_PTR(_WORD, result) || v6 == a2 && (!*(SF_DRAFT_PTR(_WORD, result) + 1) || *(SF_DRAFT_PTR(__int16, result) + 1) == a3) )
      break;
    ++v4;
  }
  return sf_draft_guest_address(result);
}

// FUNCTION_MARKER 0x8003545Cu 0x8003545c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8003545C(sint32 a1)
{
  FUNCTION_MARKER(0x8003545Cu, "SCUS_942.40");
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 

  v1 = 0;
  v2 = (*SF_DRAFT_PTR(uint32, 0x8010BB40u));
  v3 = 0;
  (*SF_DRAFT_PTR(uint32, 0x8010BB40u)) = a1;
  (*SF_DRAFT_PTR(uint32, 0x8010BB48u)) = (int)SF_DRAFT_PTR(uint32, 0x80128E90u)[96 * a1];
  v4 = 96 * v2;
  do
  {
    v5 = SF_DRAFT_PTR(uint32, 0x80128EA0u)[v4];
    v4 += 6;
    ++v1;
    *SF_DRAFT_PTR(_DWORD, (v3 + (*SF_DRAFT_PTR(uint32, 0x8010BB48u)) + 16)) = v5;
    v3 += 24;
  }
  while ( v1 < 16 );
  return v2;
}

// FUNCTION_MARKER 0x8001B51Cu 0x8001b51c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001B51C(void)
{
  FUNCTION_MARKER(0x8001B51Cu, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  _DWORD *v1; 
  int v2; 
  int v3; 
  int v4; 
  int v6[4]; 

  v1 = SF_DRAFT_PTR(_DWORD, r_u32((v0 + 284)));
  if ( v1[190] )
  {
    v2 = v1[193];
    v3 = v1[194];
    v4 = v1[195];
    v6[0] = v1[192];
    v6[1] = v2;
    v6[2] = v3;
    v6[3] = v4;
  }
  else
  {
    v6[0] = v1[192];
  }
  return sub_8001B224(sf_draft_guest_address(v6), sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011921Cu)));
}

// FUNCTION_MARKER 0x800BF09Cu 0x800bf09c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800BF09C(sint32 a1)
{
  FUNCTION_MARKER(0x800BF09Cu, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int v3; 

  if ( !*SF_DRAFT_PTR(_DWORD, (v1 + 1948)) )
    return 0;
  v3 = (__int16)sub_800C3074();
  if ( v3 == -1 )
    return 0;
  SF_DRAFT_PTR(uint32, 0x8012FBF0u)[v3] = a1;
  *SF_DRAFT_PTR(_DWORD, (a1 + 132)) = sub_8006AF74(sf_draft_guest_address(SF_DRAFT_PTR(const char, (a1 + 4))));
  return a1;
}

// FUNCTION_MARKER 0x800808C4u 0x800808c4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800808C4(sint16 a1, uint32 a2, sint8 a3)
{
  uint8 * native_a2 = SF_DRAFT_PTR(uint8, a2);
  FUNCTION_MARKER(0x800808C4u, "SCUS_942.40");
  int i; 
  int v4; 

  for ( i = 0; ; ++i )
  {
    v4 = *native_a2;
    if ( v4 == 255 || i == 14 || !a3 && v4 == 254 )
      return 0;
    ++native_a2;
    if ( v4 == a1 )
      break;
  }
  return 1;
}

// FUNCTION_MARKER 0x800DDD24u 0x800ddd24
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DDD24(sint32 a1)
{
  FUNCTION_MARKER(0x800DDD24u, "SCUS_942.40");
  _DWORD *v2; 
  int result; 

  v2 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (uint32)a1));
  if ( !v2 || *v2 != 16 )
    return 19;
  sub_800E9DB4(sf_draft_guest_address(v2 + 1), (uint32)a1 + 12u);
  result = 0;
  *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = 0;
  *SF_DRAFT_PTR(_BYTE, (a1 + 9)) = 0;
  *SF_DRAFT_PTR(_BYTE, (a1 + 8)) = 0;
  return result;
}

// FUNCTION_MARKER 0x800447E4u 0x800447e4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800447E4(unsigned __int8 a1)
{
  FUNCTION_MARKER(0x800447E4u, "SCUS_942.40");
  int v1; 

  v1 = a1;
  if ( (uint8)sub_80040B50(a1, sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8010C380u))) )
    return (uint8)sf_draft_call((uint32)(0x80146DE8u), 2u, (const uint32[]){v1, (*SF_DRAFT_PTR(uint32, 0x8010C380u))});
  else
    return 0;
}

// FUNCTION_MARKER 0x800C6E48u 0x800c6e48
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C6E48(uint32 a1, uint32 a2, sint32 a3)
{
  int * native_a1 = SF_DRAFT_PTR(int, a1);
  int * native_a2 = SF_DRAFT_PTR(int, a2);
  FUNCTION_MARKER(0x800C6E48u, "SCUS_942.40");
  int v3; 
  int v4; 
  int v5; 
  int v7; 
  int v8; 

  while ( 1 )
  {
    a3 -= 4;
    if ( a3 < 0 )
      break;
    v3 = native_a2[1];
    v4 = native_a2[2];
    v5 = native_a2[3];
    *native_a1 = *native_a2;
    native_a1[1] = v3;
    native_a1[2] = v4;
    native_a1[3] = v5;
    native_a1 += 4;
    native_a2 += 4;
    if ( !a3 )
      return 0;
  }
  v7 = a3 + 4;
  do
  {
    v8 = *native_a2++;
    *native_a1 = v8;
    --v7;
    ++native_a1;
  }
  while ( v7 );
  return 0;
}

// FUNCTION_MARKER 0x800C4978u 0x800c4978
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C4978(sint32 a1)
{
  FUNCTION_MARKER(0x800C4978u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int result; 
  int v3; 

  result = 0;
  if ( a1 )
  {
    v3 = *SF_DRAFT_PTR(_DWORD, (v1 + 1928));
    if ( v3 == a1 )
    {
      result = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
      *SF_DRAFT_PTR(_WORD, (a1 + 2)) = -1;
      *SF_DRAFT_PTR(_DWORD, (v1 + 1928)) = result;
    }
    else
    {
      while ( *SF_DRAFT_PTR(_DWORD, (v3 + 24)) != a1 )
        v3 = *SF_DRAFT_PTR(_DWORD, (v3 + 24));
      *SF_DRAFT_PTR(_DWORD, (v3 + 24)) = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
      *SF_DRAFT_PTR(_WORD, (a1 + 2)) = -1;
      return *SF_DRAFT_PTR(_DWORD, (v3 + 24));
    }
  }
  return result;
}

// FUNCTION_MARKER 0x80086E44u 0x80086e44
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_80086E44(unsigned __int16 a1, sint8 a2, sint8 a3, sint8 a4)
{
  FUNCTION_MARKER(0x80086E44u, "SCUS_942.40");
  int *result; 


  result = SF_DRAFT_PTR(int, sub_80083584(a1));
  if ( result )
  {
    *((uint8 *)result + 16) = a2;
    *((uint8 *)result + 17) = a3;
    *((uint8 *)result + 18) = a4;
    return sub_800834D8();
  }
  return sf_draft_guest_address(result);
}

// FUNCTION_MARKER 0x80019D60u 0x80019d60
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_80019D60(uint32 a1)
{
  FUNCTION_MARKER(0x80019D60u, "SCUS_942.40");
  int v2; 
  int v3; 
  int v5[4]; 

  v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 152));
  v3 = a1 + 268;
  if ( v2 )
  {
    sub_80019B94(v3,  v2, sf_draft_guest_address(v5));
    sub_80019A3C(sf_draft_guest_address(SF_DRAFT_PTR(int, (a1 + 156))), sf_draft_guest_address(v5),  1);
    sub_800DC730(*SF_DRAFT_PTR(_DWORD, (a1 + 152)), 0, a1 + 252);
  }

}

// FUNCTION_MARKER 0x80034870u 0x80034870
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80034870(void)
{
  FUNCTION_MARKER(0x80034870u, "SCUS_942.40");
  int v0; 
  int *v1; 
  int *v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  BOOL result; 

  v0 = 0;
  v1 = SF_DRAFT_PTR(int, 0x80129310u);
  v2 = SF_DRAFT_PTR(int, 0x80128E90u);
  do
  {
    v3 = v2[1];
    v4 = v2[2];
    v5 = v2[3];
    *v1 = *v2;
    v1[1] = v3;
    v1[2] = v4;
    v1[3] = v5;
    v6 = v2[5];
    v1[4] = v2[4];
    v1[5] = v6;
    v1 += 6;
    result = ++v0 < 16;
    v2 += 6;
  }
  while ( v0 < 16 );
  return result;
}

// FUNCTION_MARKER 0x80020578u 0x80020578
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_80020578(sint32 a1, uint32 a2)
{
  _DWORD * native_a2 = SF_DRAFT_PTR(_DWORD, a2);
  FUNCTION_MARKER(0x80020578u, "SCUS_942.40");
  _DWORD *result; 
  int v3; 
  int v4; 
  int v5; 

  result = SF_DRAFT_PTR(_DWORD, (168 * *SF_DRAFT_PTR(_DWORD, (60 * a1 + (*SF_DRAFT_PTR(uint32, 0x80119208u)))) + (*SF_DRAFT_PTR(uint32, 0x80119204u))));
  v3 = result[5];
  v4 = result[6];
  v5 = result[7];
  *native_a2 = result[4];
  native_a2[1] = v3;
  native_a2[2] = v4;
  native_a2[3] = v5;
  return sf_draft_guest_address(result);
}

// FUNCTION_MARKER 0x80049854u 0x80049854
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80049854(void)
{
  FUNCTION_MARKER(0x80049854u, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int i; 
  int v2; 
  int result; 
  int v4; 

  for ( i = *SF_DRAFT_PTR(_DWORD, (v0 + 876)); i; i = *SF_DRAFT_PTR(_DWORD, (v4 + 420)) )
  {
    v2 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (i + 8)) + 12));
    result = *SF_DRAFT_PTR(_DWORD, (v2 + 32));
    v4 = *SF_DRAFT_PTR(_DWORD, (i + 12));
    if ( result )
      result = sub_800C777C(v2);
  }
  return result;
}

// FUNCTION_MARKER 0x800DB5ECu 0x800db5ec
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DB5EC(uint32 a1, sint32 a2)
{
  _DWORD * native_a1 = SF_DRAFT_PTR(_DWORD, a1);
  FUNCTION_MARKER(0x800DB5ECu, "SCUS_942.40");
  int result; 

  result = sub_800DB558(sf_draft_guest_address(native_a1));
  if ( !result )
  {
    result = sub_800DB648(*native_a1, a2);
    if ( !result )
      return 0;
  }
  return result;
}

// FUNCTION_MARKER 0x80016B98u 0x80016b98
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_80016B98(void)
{
  FUNCTION_MARKER(0x80016B98u, "SCUS_942.40");
  /* TODO Scratchpad switching omitted; retain semantic call order */
  sub_80080930(0);
  sub_8008294C(0);
  return sub_80015364(17, 0, 65534, 65534, 0, 0, 0, 0);
}

// FUNCTION_MARKER 0x800CF98Cu 0x800cf98c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800CF98C(sint32 a1)
{
  FUNCTION_MARKER(0x800CF98Cu, "SCUS_942.40");
  int v1; 
  int v3; 
  int v4; 
  int v5; 

  v3 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 20));
  v4 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 24));
  v1 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 28));
  v4 = -v4;
  v5 = v1;
  return sub_800CCCD4(sf_draft_guest_address(&v3));
}

// FUNCTION_MARKER 0x800DD950u 0x800dd950
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DD950(sint32 a1, uint32 a2, uint32 a3, sint32 a4)
{
  _WORD * native_a2 = SF_DRAFT_PTR(_WORD, a2);
  _DWORD * native_a3 = SF_DRAFT_PTR(_DWORD, a3);
  FUNCTION_MARKER(0x800DD950u, "SCUS_942.40");
  int v5; 
  int v7; 
  int v8; 
  char v10[32]; 

  v5 = sub_800DB9E0(sf_draft_guest_address(native_a2), sf_draft_guest_address(native_a3),  sf_draft_guest_address(v10));
  v7 = a4;
  v8 = v5;
  sub_800EADF4(sf_draft_guest_address(v10),  a1,  v7);
  return v8;
}

// FUNCTION_MARKER 0x800C777Cu 0x800c777c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C777C(uint32 a1)
{
  unsigned int * native_a1 = SF_DRAFT_PTR(unsigned int, a1);
  FUNCTION_MARKER(0x800C777Cu, "SCUS_942.40");
  unsigned int *v1; 
  unsigned int v2; 
  int result; 

  v1 = native_a1;
  if ( !native_a1 )
    return 0;
  while ( 1 )
  {
    v2 = v1[8];
    result = 43;
    if ( !v2 )
      break;
    if ( !*SF_DRAFT_PTR(_DWORD, (v2 + 32)) )
      return sub_800C7628(sf_draft_guest_address(v1),  0);
    v1 = SF_DRAFT_PTR(unsigned int, r_u32((v2 + 32)));
  }
  return result;
}

// FUNCTION_MARKER 0x800C82B8u 0x800c82b8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C82B8(void)
{
  FUNCTION_MARKER(0x800C82B8u, "SCUS_942.40");
  __int16 v1[4]; 
  __int16 v2; 
  __int16 v3[3]; 

  sub_800D7A4C(&v2, v3);
  v1[1] = 0;
  v1[0] = 0;
  v1[2] = v2;
  v1[3] = 2 * v3[0];
  return sub_800E5184(sf_draft_guest_address(v1),  0,  0,  0);
}

// FUNCTION_MARKER 0x800CC678u 0x800cc678
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800CC678(sint32 a1, sint16 a2)
{
  FUNCTION_MARKER(0x800CC678u, "SCUS_942.40");
  int v2; 
  int v3; 
  int v4; 

  v2 = 0;
  if ( a2 > 0 )
  {
    v3 = a1;
    v4 = 44;
    do
    {
      if ( v2 >= a2 - 1 )
        *SF_DRAFT_PTR(_DWORD, (v3 + 4)) = 0;
      else
        *SF_DRAFT_PTR(_DWORD, (v3 + 4)) = a1 + v4;
      v3 += 44;
      ++v2;
      v4 += 44;
    }
    while ( v2 < a2 );
  }
}

// FUNCTION_MARKER 0x800E0C00u 0x800e0c00
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800E0C00(uint32 a1, uint32 a2)
{
  int * native_a1 = SF_DRAFT_PTR(int, a1);
  int * native_a2 = SF_DRAFT_PTR(int, a2);
  FUNCTION_MARKER(0x800E0C00u, "SCUS_942.40");
  int v4; 
  int result; 
  int v6; 

  sub_800DA15C(sf_draft_guest_address(native_a1), sf_draft_guest_address(&v6));
  v4 = -sub_800EC124(native_a1[1], v6);
  result = 0;
  *native_a2 = v4;
  return result;
}

// FUNCTION_MARKER 0x800BF02Cu 0x800bf02c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800BF02C(void)
{
  FUNCTION_MARKER(0x800BF02Cu, "SCUS_942.40");
  int v0; 
  int v1 = SF_DRAFT_GP;
  int v2; 
  int v3; 

  v0 = sub_800FE7B4(0);
  v2 = v0 << 16;
  if ( v0 << 16 )
  {
    v3 = *SF_DRAFT_PTR(_DWORD, (v1 + 1920));
    if ( v3 != -1 )
    {
      *SF_DRAFT_PTR(_DWORD, (v1 + 1920)) = -1;
      SF_DRAFT_PTR(uint32, 0x801311B0u)[v3] = *SF_DRAFT_PTR(_DWORD, (v1 + 1924));
    }
    v2 = v0 << 16;
  }
  return v2 >> 16;
}


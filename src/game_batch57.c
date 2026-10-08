#include "game_draft.h"
/* TODO Resolve exact missing SDK declarations and adapters */


extern uint32 sub_800ED598();
extern uint32 sub_800ED6FC();
extern uint32 sub_800FDB74();

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x8006C12Cu 0x8006c12c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8006C12C(unsigned __int8 a1)
{
  FUNCTION_MARKER(0x8006C12Cu, "SCUS_942.40");
  _DWORD * v1 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);

  if ( v1[745] != -1 )
    sub_8006BE10(v1[746], v1[747]);
  sub_800C0A78(a1);
  return sub_800C1B54(a1);
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800C6EAC_stage1(sint32 input1, uint32 memory2, sint32 *output3, sint32 *output4);
// FUNCTION_MARKER 0x800C6EACu 0x800c6eac
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800C6EAC(uint32 A0, uint32 a2)
{
  _DWORD *native_A0 = SF_DRAFT_PTR(_DWORD, A0);
  _DWORD * native_a2 = SF_DRAFT_PTR(_DWORD, a2);
  FUNCTION_MARKER(0x800C6EACu, "SCUS_942.40");
  sint32 temporary_a3; /* TODO Geometry value type */
  sint32 temporary_a2; /* TODO Geometry value type */
  temporary_a3 = (uint16)*native_A0 | (-65536 * native_A0[1]);
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800C6EAC_stage1(temporary_a3, (sf_draft_guest_address(native_A0) + 8), &temporary_a3, &temporary_a2);
  native_a2[2] = temporary_a2;
  native_a2[1] = -(temporary_a3 >> 16);
  *native_a2 = (__int16)temporary_a3;
}

// FUNCTION_MARKER 0x800C64C0u 0x800c64c0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C64C0(unsigned __int8 a1, sint32 a2)
{
  FUNCTION_MARKER(0x800C64C0u, "SCUS_942.40");
  int v3 = SF_DRAFT_GP;
  int result; 
  int v5 = SF_DRAFT_GP;
  char v6[8]; 

  sub_800C618C(a2, sf_draft_guest_address(v6));
  *SF_DRAFT_PTR(_DWORD, (v3 + 1980)) = 0;
  *SF_DRAFT_PTR(_WORD, (v3 + 2000)) = 0;
  sub_800ED6FC(a1, sf_draft_guest_address(v6));
  result = 1;
  *SF_DRAFT_PTR(_DWORD, (v5 + 1992)) = 0;
  *SF_DRAFT_PTR(_DWORD, (v5 + 1988)) = 1;
  return result;
}

// FUNCTION_MARKER 0x800CB1FCu 0x800cb1fc
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800CB1FC(void)
{
  FUNCTION_MARKER(0x800CB1FCu, "SCUS_942.40");
  _DWORD * v0 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 

  v1 = v0[529];
  if ( v1 )
  {
    v2 = v0[527];
    v3 = v0[528];
    v4 = v0[788];
    v0[529] = 0;
    v5 = v2 + v1;
    (*SF_DRAFT_PTR(uint32, 0x801168BCu)) = v4 + v5;
    v0[527] = v5;
    v0[528] = v3 + v1;
    sub_800E5000(0);
  }

}

// FUNCTION_MARKER 0x800DCB1Cu 0x800dcb1c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DCB1C(uint32 a1, uint32 a2, uint32 a3)
{
  _WORD * native_a1 = SF_DRAFT_PTR(_WORD, a1);
  _DWORD * native_a2 = SF_DRAFT_PTR(_DWORD, a2);
  _DWORD * native_a3 = SF_DRAFT_PTR(_DWORD, a3);
  FUNCTION_MARKER(0x800DCB1Cu, "SCUS_942.40");
  int result; 
  uint32 matrix[8]; 
  sub_800DB9E0(sf_draft_guest_address(native_a1), sf_draft_guest_address(native_a2),  sf_draft_guest_address(matrix));
  *native_a3 = (sint32)((sint16 *)matrix)[1];
  native_a3[1] = (sint32)((sint16 *)matrix)[4];
  result = 0;
  native_a3[2] = (sint32)((sint16 *)matrix)[7];
  return result;
}

// FUNCTION_MARKER 0x80049DCCu 0x80049dcc
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80049DCC(void)
{
  FUNCTION_MARKER(0x80049DCCu, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int i; 
  int result; 
  int v3; 

  for ( i = *SF_DRAFT_PTR(_DWORD, (v0 + 876)); i; i = *SF_DRAFT_PTR(_DWORD, (v3 + 420)) )
  {
    result = *SF_DRAFT_PTR(_DWORD, (i + 16));
    v3 = *SF_DRAFT_PTR(_DWORD, (i + 12));
    if ( result )
      result = sub_8004A55C(i, *SF_DRAFT_PTR(_DWORD, (i + 12)));
  }
  return result;
}

// FUNCTION_MARKER 0x800E1244u 0x800e1244
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800E1244(uint32 a1, sint32 a2, uint32 a3)
{
  int * native_a1 = SF_DRAFT_PTR(int, a1);
  _WORD * native_a3 = SF_DRAFT_PTR(_WORD, a3);
  FUNCTION_MARKER(0x800E1244u, "SCUS_942.40");
  int v6[4]; 

  sub_800C720C(sf_draft_guest_address(native_a1), sf_draft_guest_address(v6));
  sub_800E1088(sf_draft_guest_address(v6),  a2, sf_draft_guest_address(native_a3));
  return 1;
}

// FUNCTION_MARKER 0x8008B564u 0x8008b564
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8008B564(void)
{
  FUNCTION_MARKER(0x8008B564u, "SCUS_942.40");
  int result; 
  char v1[8]; 
  int *v2; 

  if ( (*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) )
    sub_8008B3B4((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)));
  result = (unsigned int)(*SF_DRAFT_PTR(uint32, 0x80128DE8u)) > 0x80000000;
  if ( (unsigned int)(*SF_DRAFT_PTR(uint32, 0x80128DE8u)) > 0x80000000 )
  {
    v2 = SF_DRAFT_PTR(int, 0x80128DC0u);
    return sub_8008B3B4(sf_draft_guest_address(v1));
  }
  return result;
}

// FUNCTION_MARKER 0x80063B10u 0x80063b10
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80063B10(sint32 a1)
{
  FUNCTION_MARKER(0x80063B10u, "SCUS_942.40");
  __int16 v2; 
  __int16 v3; 

  v2 = sub_80076380();
  v3 = v2;
  if ( (*SF_DRAFT_PTR(_BYTE, (a1 + 11)) & 0x20) != 0 )
    return (__int16)(2 * v2);
  return v3;
}

// FUNCTION_MARKER 0x800173A0u 0x800173a0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800173A0(uint32 flag_address, uint32 context_slot)
{
  FUNCTION_MARKER(0x800173A0u, "SCUS_942.40");
  uint32 flag = r_u8(flag_address);
  uint32 context = r_u32(context_slot);
  if (flag) {
    sub_800CB570(context);
    sub_800CB580(context, r_u32(0x80116A60u) + 4u);
  }
}

// FUNCTION_MARKER 0x80073D88u 0x80073d88
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80073D88(sint32 a1, sint32 a2, sint32 a3, sint8 a4, sint8 a9)
{
  FUNCTION_MARKER(0x80073D88u, "SCUS_942.40");
  if ( a4 )
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 11)) |= 2u;
  if ( a9 )
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 11)) |= 4u;
  return 1;
}

// FUNCTION_MARKER 0x800C7B20u 0x800c7b20
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C7B20(sint32 a1, sint32 a2)
{
  FUNCTION_MARKER(0x800C7B20u, "SCUS_942.40");
  if ( *SF_DRAFT_PTR(int, (a1 + 20)) > 0 )
    *SF_DRAFT_PTR(_DWORD, (a2 + 40)) = 0;
  else
    *SF_DRAFT_PTR(_DWORD, (a2 + 40)) = sub_800DE5E0(a1 + 144, a2);
  return 0;
}

// FUNCTION_MARKER 0x8006C7CCu 0x8006c7cc
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8006C7CC(void)
{
  FUNCTION_MARKER(0x8006C7CCu, "SCUS_942.40");
  int result; 

  sub_800C6058();
  sub_800C5ED4();
  sub_80082EC0();
  (*SF_DRAFT_PTR(uint32, 0x80128DA0u)) = -1;
  result = -1;
  (*SF_DRAFT_PTR(uint16, 0x80128DA8u)) = -1;
  (*SF_DRAFT_PTR(uint16, 0x80128DA4u)) = -1;
  (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) = -1;
  return result;
}

// FUNCTION_MARKER 0x800CCC8Cu 0x800ccc8c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800CCC8C(sint32 a1, sint32 a2, sint32 a3)
{
  FUNCTION_MARKER(0x800CCC8Cu, "SCUS_942.40");
  int result; 

  sub_800CCC08(a1, a2);
  result = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
  *SF_DRAFT_PTR(_DWORD, (result + 28)) = a3 & 0xFFFFFF;
  return result;
}

// FUNCTION_MARKER 0x80040154u 0x80040154
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_80040154(sint16 a1, sint16 a2, sint32 a3)
{
  FUNCTION_MARKER(0x80040154u, "SCUS_942.40");
  _DWORD * v3 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);

  v3[653] = a1;
  v3[654] = a2;
  v3[655] = a3;
  sub_80016834((int)0x800212E4u, 20, (int)0x80040128u);
}

// FUNCTION_MARKER 0x80034734u 0x80034734
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80034734(sint32 a1)
{
  FUNCTION_MARKER(0x80034734u, "SCUS_942.40");
  unsigned int v1; 
  int v2; 
  int *v3; 
  int *v4; 
  BOOL result; 

  v1 = 9;
  v2 = 96 * a1;
  v3 = SF_DRAFT_PTR(int, 0x80128F68u);
  do
  {
    v4 = &v3[v2];
    ++v1;
    *v4 = 0;
    v4[1] = 0;
    *((_BYTE *)v4 + 8) = 0;
    v4[3] = 0;
    *((_WORD *)v4 + 10) = 0;
    result = v1 < 0x10;
    v3 += 6;
  }
  while ( v1 < 0x10 );
  return result;
}

// FUNCTION_MARKER 0x80084DD0u 0x80084dd0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_80084DD0(unsigned __int8 a1, sint8 a2, sint8 a3, sint8 a4)
{
  FUNCTION_MARKER(0x80084DD0u, "SCUS_942.40");
  int *result; 

  if ( a1 < 7u )
    result = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x80120EF8u)[5 * a1]);
  else
    result = 0;
  if ( result )
  {
    *(SF_DRAFT_PTR(_BYTE, result) + 4) = a2;
    *(SF_DRAFT_PTR(_BYTE, result) + 5) = a3;
    *(SF_DRAFT_PTR(_BYTE, result) + 6) = a4;
  }
  return sf_draft_guest_address(result);
}

// FUNCTION_MARKER 0x800CB6DCu 0x800cb6dc
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800CB6DC(sint32 a1, sint32 a2)
{
  FUNCTION_MARKER(0x800CB6DCu, "SCUS_942.40");
  _DWORD *v2; 
  int result; 

  v2 = SF_DRAFT_PTR(_DWORD, r_u32((a1 + 32)));
  for ( result = 0; v2; result = 0 )
  {
    result = *v2;
    if ( a2 < 0 )
      break;
    result = *v2;
    if ( *SF_DRAFT_PTR(__int16, (*v2 + 4)) == a2 )
      break;
    v2 = SF_DRAFT_PTR(_DWORD, v2[2]);
  }
  return result;
}

// FUNCTION_MARKER 0x800C3A8Cu 0x800c3a8c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C3A8C(sint16 a1)
{
  FUNCTION_MARKER(0x800C3A8Cu, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;

  *SF_DRAFT_PTR(_WORD, (v1 + 1880)) = a1;
  if ( a1 == 1 )
    sub_800FDB84();
  else
    sub_800FDB74();
  return 1;
}

// FUNCTION_MARKER 0x800C2EE0u 0x800c2ee0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800C2EE0(sint32 a1)
{
  FUNCTION_MARKER(0x800C2EE0u, "SCUS_942.40");
  int v1; 
  int *i; 
  _DWORD *result; 

  v1 = 0;
  for ( i = SF_DRAFT_PTR(int, 0x801311B0u); ; ++i )
  {
    if ( *i )
    {
      result = (_DWORD *)*i;
      if ( *(_DWORD *)*i == a1 )
        break;
    }
    if ( ++v1 >= 16 )
      return 0;
  }
  return sf_draft_guest_address(result);
}

// FUNCTION_MARKER 0x800E0D14u 0x800e0d14
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800E0D14(uint32 a1, uint32 a2)
{
  _DWORD * native_a1 = SF_DRAFT_PTR(_DWORD, a1);
  _DWORD * native_a2 = SF_DRAFT_PTR(_DWORD, a2);
  FUNCTION_MARKER(0x800E0D14u, "SCUS_942.40");
  *native_a2 = sub_800EC124(*native_a1, native_a1[2]);
  return 0;
}

// FUNCTION_MARKER 0x8004C70Cu 0x8004c70c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8004C70C(uint32 a1, sint32 a2, sint32 a3)
{
  _DWORD * native_a1 = SF_DRAFT_PTR(_DWORD, a1);
  FUNCTION_MARKER(0x8004C70Cu, "SCUS_942.40");
  int v3 = SF_DRAFT_GP;
  int v4; 
  int result; 

  (*SF_DRAFT_PTR(uint32, 0x8011CE78u)) = *native_a1 - (a2 >> 1);
  (*SF_DRAFT_PTR(uint32, 0x8011CE7Cu)) = native_a1[1] - (a2 >> 1);
  v4 = native_a1[2];
  *SF_DRAFT_PTR(_DWORD, (v3 + 2748)) = a2 >> 8;
  *SF_DRAFT_PTR(_DWORD, (v3 + 2752)) = a3;
  result = v4 - (a2 >> 1);
  (*SF_DRAFT_PTR(uint32, 0x8011CE80u)) = result;
  return result;
}

// FUNCTION_MARKER 0x80016A14u 0x80016a14
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80016A14(sint32 a1)
{
  FUNCTION_MARKER(0x80016A14u, "SCUS_942.40");
  int v1; 
  int v2; 

  v1 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v2 = 0;
  if ( v1 )
    return *SF_DRAFT_PTR(_DWORD, (v1 + 12)) != 0;
  return v2;
}

// FUNCTION_MARKER 0x800DE5A0u 0x800de5a0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DE5A0(uint32 a1, uint32 a2, sint32 a3)
{
  uint32 *native_a1 = SF_DRAFT_PTR(uint32, a1);
  _DWORD * native_a2 = SF_DRAFT_PTR(_DWORD, a2);
  FUNCTION_MARKER(0x800DE5A0u, "SCUS_942.40");
  _DWORD *v3; 
  int result; 

  v3 = SF_DRAFT_PTR(uint32, *native_a1);
  for ( result = 0; v3; result = 0 )
  {
    result = 1;
    if ( v3 == native_a2 )
      break;
    result = 1;
    if ( *v3 == a3 )
      break;
    v3 = SF_DRAFT_PTR(_DWORD, v3[2]);
  }
  return result;
}

// FUNCTION_MARKER 0x800CDA34u 0x800cda34
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800CDA34(uint32 arg0)
{
  FUNCTION_MARKER(0x800CDA34u, "SCUS_942.40");
  sub_800C8A9C((int)0x800CD824u, 0, (int)arg0);
  return sub_800CD90C(arg0);
}

// FUNCTION_MARKER 0x8004C354u 0x8004c354
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8004C354(uint32 a1)
{
  int * native_a1 = SF_DRAFT_PTR(int, a1);
  FUNCTION_MARKER(0x8004C354u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int v2; 
  int v3; 
  int result; 

  *SF_DRAFT_PTR(_DWORD, (v1 + 2732)) = 0;
  v2 = native_a1[1];
  v3 = native_a1[2];
  (*SF_DRAFT_PTR(uint32, 0x8011CE48u)) = *native_a1;
  (*SF_DRAFT_PTR(uint32, 0x8011CE4Cu)) = v2;
  (*SF_DRAFT_PTR(uint32, 0x8011CE50u)) = v3;
  result = native_a1[3];
  (*SF_DRAFT_PTR(uint32, 0x8011CE54u)) = result;
  return result;
}

// FUNCTION_MARKER 0x800DC3D0u 0x800dc3d0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DC3D0(sint32 a1, sint32 a2)
{
  FUNCTION_MARKER(0x800DC3D0u, "SCUS_942.40");
  int v2; 
  int v4; 

  v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 32));
  if ( v2 )
    v4 = *SF_DRAFT_PTR(_DWORD, (v2 + 32));
  else
    v4 = 0;
  return sub_800DC40C(a1, v4, a2);
}

// FUNCTION_MARKER 0x800EFC84u 0x800efc84
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800EFC84(void)
{
  FUNCTION_MARKER(0x800EFC84u, "SCUS_942.40");
  int result; 

  result = sub_800ED598((*SF_DRAFT_PTR(uint32, 0x80115010u)));
  (*SF_DRAFT_PTR(uint32, 0x8011500Cu)) = 0;
  return result;
}

// FUNCTION_MARKER 0x80028F04u 0x80028f04
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80028F04(uint32 a1, sint32 a2)
{
  uint8 * native_a1 = SF_DRAFT_PTR(uint8, a1);
  FUNCTION_MARKER(0x80028F04u, "SCUS_942.40");
  unsigned int v2; 
  int v3; 

  v2 = *native_a1;
  if ( v2 < native_a1[1] )
  {
    v3 = *((_DWORD *)native_a1 + 1);
    ++*native_a1;
    *SF_DRAFT_PTR(_DWORD, (4 * v2 + v3)) = a2;
  }
  return 1;
}

// FUNCTION_MARKER 0x800223E0u 0x800223e0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800223E0(sint32 a1, sint32 a2, sint8 a3)
{
  FUNCTION_MARKER(0x800223E0u, "SCUS_942.40");
  int result; 
  int v4; 

  result = 0;
  if ( a1 )
  {
    v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    if ( v4 )
    {
      *SF_DRAFT_PTR(_DWORD, (v4 + 260)) = a2;
      result = 1;
      *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 257)) = a3;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


#include "game_draft.h"
void sf_gte_write_data(uint32 index, uint32 value);
uint32 sf_gte_read_data(uint32 index);
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);

void sf_draft_missing_gte_800D1898_1(sint32 *output1);
void sf_draft_missing_gte_800D1898_2(sint32 *output1);
void sf_draft_missing_gte_800D3CB4_1(sint32 input1, sint32 *output2);
/* TODO Resolve external dependency signatures */
uint32 sub_80016DA0();
uint32 sub_80018EF4();
uint32 sub_8004024C();
uint32 sub_8004027C();
uint32 sub_800E4174();
sint32 sub_800EA3A4(sint32 angle);
uint32 sub_800EA904(sint32 value);
uint32 sub_800EAC44();
uint32 sub_801005E4();
uint32 sub_801005F4();

void sub_80087DA0(void)
{
    FUNCTION_MARKER(0x80087DA0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v0; 
  int *v1; 
  int v2; 
  int v3; 
  int *v4; 
  int *v5; 
  int *v6; 
  int *v7; 

  v0 = 0;
  v1 = SF_DRAFT_PTR(int, 0x8012CD3Cu);
  do
  {
    v1[2] = 0;
    v2 = 0;
    v3 = 8 * v0;
    v4 = SF_DRAFT_PTR(int, 0x8012D264u);
    v5 = v1;
    do
    {
      v6 = &SF_DRAFT_PTR(uint32, 0x8012D264u)[v3];
      v3 += 2;
      v7 = &v4[8 * v0];
      v4 += 2;
      v5[7] = (int)sf_draft_guest_address(v7);
      ++v5;
      ++v2;
      *(_WORD *)v6 = 0;
      *((_WORD *)v6 + 1) = 0;
      *((_WORD *)v6 + 2) = 0;
    }
    while ( v2 < 4 );
    v1[4] = (int)sf_draft_guest_address(v1 + 5);
    *((_WORD *)v1 + 10) = 0;
    *((_WORD *)v1 + 11) = 0;
    *((_WORD *)v1 + 12) = 0;
    v1[3] = 0x8012D624u + v0;
    SF_DRAFT_PTR(uint8, 0x8012D624u)[v0] = 0;
    *v1 = 0;
    v1[1] = 0;
    ++v0;
    v1 += 11;
  }
  while ( v0 < 30 );
  sub_80087E64();
}

void sub_80092308(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80092308u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  (*SF_DRAFT_PTR(uint32, 0x8011699Cu)) = (int)a1_view;
  if ( a1_view )
  {
    a1_view[4] = (*SF_DRAFT_PTR(uint32, 0x80121930u));
    a1_view[5] = (*SF_DRAFT_PTR(uint32, 0x80121934u));
    a1_view[6] = (*SF_DRAFT_PTR(uint32, 0x80121938u));
    a1_view[7] = (*SF_DRAFT_PTR(uint32, 0x8012193Cu));
    a1_view[8] = (*SF_DRAFT_PTR(uint32, 0x80121940u));
    a1_view[9] = (*SF_DRAFT_PTR(uint32, 0x80121944u));
  }
  if ( (*SF_DRAFT_PTR(uint32, 0x80121948u)) )
  {
    if ( (*SF_DRAFT_PTR(uint32, 0x80121948u)) != 0x7FFFFFFF )
      sub_8004027C((*SF_DRAFT_PTR(uint32, 0x80121948u)));
  }
  else
  {
    sub_8004024C();
  }
  if ( a2_view )
    *a2_view = (*SF_DRAFT_PTR(uint32, 0x8012194Cu));
}

void sub_8006DA20(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8006DA20u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v2; 
  int v3; 
  _DWORD *v4; 
  int i; 
  int v6; 
  int v7; 

  if ( a1 )
  {
    v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    if ( v2 )
    {
      v3 = *SF_DRAFT_PTR(_DWORD, (v2 + 416));
      if ( v3 )
      {
        if ( a2 >= 0 )
        {
          v6 = 1;
          if ( a2 )
          {
            v7 = *SF_DRAFT_PTR(_DWORD, (v3 + 56));
            if ( a2 != 1 )
            {
              do
              {
                if ( !v7 )
                  break;
                ++v6;
                v7 = *SF_DRAFT_PTR(_DWORD, (v7 + 372));
              }
              while ( v6 != a2 );
            }
            *SF_DRAFT_PTR(_DWORD, (v3 + 40)) = v7;
          }
          else
          {
            *SF_DRAFT_PTR(_DWORD, (v3 + 40)) = 0;
          }
        }
        else
        {
          v4 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(v3 + 56));
          for ( i = 0x7FFFFFFF; v4; v4 = (_DWORD *)v4[93] )
          {
            if ( (sint32)(v4[16] - v4[5]) < i )
            {
              i = v4[16] - v4[5];
              *SF_DRAFT_PTR(_DWORD, (v3 + 40)) = sf_draft_guest_address(v4);
            }
          }
        }
      }
    }
  }
}

sint32 sub_800232E0(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800232E0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int result; 
  int v3; 
  int v4; 

  result = 4 * a1;
  if ( a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    result = 76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    v3 = *SF_DRAFT_PTR(_DWORD, (result + 52));
    switch ( a2 )
    {
      case 10:
      case 11:
      case 46:
      case 47:
      case 48:
      case 62:
      case 72:
      case 76:
      case 85:
        v4 = *SF_DRAFT_PTR(_DWORD, (v3 + 28));
        if ( v4 )
        {
          result = *SF_DRAFT_PTR(_DWORD, (v4 + 60));
          if ( result == a2 )
            *SF_DRAFT_PTR(_DWORD, (v4 + 60)) = 0;
        }
        break;
      case 51:
        result = *SF_DRAFT_PTR(_DWORD, (v3 + 28));
        *SF_DRAFT_PTR(_DWORD, (result + 60)) = 0;
        break;
      default:
        return result;
    }
  }
  return result;
}

sint32 sub_800FFC10(void)
{
    FUNCTION_MARKER(0x800FFC10u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v0; 
  int result; 

  (*SF_DRAFT_PTR(uint32, 0x80115BE8u)) = 0;
  sub_800E3F34();
  sub_801005F4(2, &(*SF_DRAFT_PTR(uint32, 0x801279A8u)));
  sub_801005E4(2, &(*SF_DRAFT_PTR(uint32, 0x801279A8u)));
  v0 = (*SF_DRAFT_PTR(uint32, 0x80115C10u));
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x80115C10u))) = -2;
  *SF_DRAFT_PTR(_DWORD, (v0 + 4)) |= 1u;
  sub_800E4174();
  sub_800E3F44();
  sf_draft_call((uint32)((*SF_DRAFT_PTR(uint32, 0x80115BB4u))), 1u, (const uint32[]){(uint32)((*SF_DRAFT_PTR(uint32, 0x80115BE4u)))});
  sf_draft_call((uint32)((*SF_DRAFT_PTR(uint32, 0x80115BB4u))), 1u, (const uint32[]){(uint32)((*SF_DRAFT_PTR(uint32, 0x80115BE4u)) + 240)});
  (*SF_DRAFT_PTR(uint32, 0x801279BCu)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x801279B8u)) = 0;
  result = 1;
  (*SF_DRAFT_PTR(uint32, 0x80115BE8u)) = 1;
  return result;
}

sint32 sub_80016EDC(void)
{
    FUNCTION_MARKER(0x80016EDCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int result; 
  int v2; 
  _DWORD *v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 

  v4 = (*SF_DRAFT_PTR(uint32, 0x80010108u));
  v5 = (*SF_DRAFT_PTR(uint32, 0x8001010Cu));
  v6 = (*SF_DRAFT_PTR(uint32, 0x80010110u));
  v7 = (*SF_DRAFT_PTR(uint32, 0x80010114u));
  result = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 74));
  v2 = 0;
  if ( result > 0 )
  {
    result = 0;
    do
    {
      ++v2;
      v3 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(*SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80118330u))) + (result >> 14))) + 12));
      v3[97] = v4;
      v3[98] = v5;
      v3[99] = v6;
      v3[100] = v7;
      result = v2 << 16;
    }
    while ( (__int16)v2 < *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 74)) );
  }
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 74)) = 0;
  return result;
}

sint32 sub_800C964C(void)
{
    FUNCTION_MARKER(0x800C964Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v1; 
  char v2; 
  int *v3; 
  int *v4; 

  int result; 

  v1 = (*SF_DRAFT_PTR(uint32, 0x8012C8A0u));
  v2 = (*SF_DRAFT_PTR(uint16, 0x8012D97Au)) & 1;
  if ( ((*SF_DRAFT_PTR(uint16, 0x8012D97Au)) & 1) != 0 )
  {
    v3 = SF_DRAFT_PTR(int, 0x8013D630u);
    v4 = SF_DRAFT_PTR(int, 0x80141D60u);
    if ( !*SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2038)) )
    {
      v3 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80141E30u)));
      v4 = SF_DRAFT_PTR(int, 0x80146560u);
    }
    (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)) = (int)v3;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2104)) = sf_draft_guest_address(v4);
  }
  sub_800C956C(1);
  if ( v2 )
    (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)) = v1;
  else
    sub_800C956C(0);
  result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2100));
  if ( result )
    return sub_800EC924(0x80116A28u, 0x801164F0u);
  return result;
}

sint32 sub_8004A18C(sint32 a1, uint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x8004A18Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  int v4; 
  int result; 
  _DWORD *v6; 
  _DWORD *v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 

  if ( !a1 )
    return 0;
  v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  result = 0;
  if ( !v4 )
    return result;
  v6 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(v4 + 408));
  if ( !v6 )
    return 0;
  v7 = v6;
  if ( a2_view )
  {
    v8 = a2_view[1];
    v9 = a2_view[2];
    v10 = a2_view[3];
    v7[6] = *a2_view;
    v7[7] = v8;
    v7[8] = v9;
    v7[9] = v10;
  }
  else
  {
    v6[6] = 0;
    v6[7] = 0;
    v6[8] = 0;
  }
  if ( !v7[6] && !v7[7] && !v7[8] )
    a3 = 5;
  v11 = v7[15];
  result = 1;
  v7[15] = a3;
  v7[16] = v11;
  return result;
}

sint32 sub_80029CC4(uint32 a1)
{
    FUNCTION_MARKER(0x80029CC4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint8 *a1_view = SF_DRAFT_PTR(uint8, a1);
  int result; 
  int v2; 
  int v3; 
  char *v4; 

  (*SF_DRAFT_PTR(uint8, 0x8010B5D0u)) = *a1_view;
  result = *a1_view;
  v2 = 0;
  if ( *a1_view )
  {
    v3 = 0;
    do
    {
      v4 = &SF_DRAFT_PTR(uint8, 0x80119440u)[*(_DWORD *)(v3 + *((_DWORD *)a1_view + 1))];
      if ( *v4 )
      {
        *SF_DRAFT_PTR(_DWORD, (v3 + (*SF_DRAFT_PTR(uint32, 0x8010B5D4u)))) = 0;
      }
      else
      {
        *v4 = (1);
        *SF_DRAFT_PTR(_DWORD, (v3 + (*SF_DRAFT_PTR(uint32, 0x8010B5D4u)))) = *(_DWORD *)(v3 + *((_DWORD *)a1_view + 1));
      }
      ++v2;
      *(_DWORD *)(v3 + *((_DWORD *)a1_view + 1)) = 0;
      result = v2 < *a1_view;
      v3 += 4;
    }
    while ( v2 < *a1_view );
  }
  *a1_view = 0;
  return result;
}

sint32 sub_800DEC7C(sint32 a1)
{
    FUNCTION_MARKER(0x800DEC7Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  bool v2; // dc

  int result; 

  int v6; 
  int v7; 

  int v9[512]; 
  int v10; 

  sub_800DEC48();
  v2 = sub_800DEEF4(a1, ((*SF_DRAFT_PTR(uint32, 0x80116618u)))) != 0;
  result = 0;
  if ( !v2 )
  {
    sub_800DF198((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2480))), sf_draft_guest_address(v9), 2048, sf_draft_guest_address(&v10));
    if ( v10 != 2048 )
      sub_800DDC34(1, 0, 0x800139D4u, 132);
    sub_800C6E48(((*SF_DRAFT_PTR(uint32, 0x80135BE8u))), sf_draft_guest_address(v9), 100);
    v6 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2480));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2484)) = (*SF_DRAFT_PTR(uint32, 0x80135BE8u));
    v7 = sub_800EDB24(v6);
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2484)) + 8)) = v7;
    return 1;
  }
  return result;
}

sint32 sub_800E0FE8(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800E0FE8u, "SCUS_942.40");
    sint16 angles[4];
    uint8 matrix[32];
    uint32 token = sf_draft_guest_address(matrix);
    angles[0] = (sint16)(0u - r_u32(a1));
    angles[1] = (sint16)r_u32(a1 + 4u);
    angles[2] = (sint16)(0u - r_u32(a1 + 8u));
    sub_800EBE94(sf_draft_guest_address(angles), token);
    w_u32(a2, (uint32)r_s16(token + 4u));
    w_u32(a2 + 4u, (uint32)(sint32)(sint16)(0u - (uint32)r_s16(token + 10u)));
    w_u32(a2 + 8u, (uint32)r_s16(token + 16u));
    return 0;
}

sint32 sub_80030EEC(sint32 a1)
{
    FUNCTION_MARKER(0x80030EECu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  __int16 *v1; 
  int v2; 
  int result; 
  int v4; 

  v1 = SF_DRAFT_PTR(__int16, *(__int16 **)(a1 + 20));
  v2 = *(_DWORD *)(76 * *v1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52);
  if ( *SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    if ( (**(_DWORD **)(a1 + 16) & 0x100002) == 1048578 )
      v1[36] = *(_WORD *)(*((_DWORD *)v1 + 12) + 44);
  }
  else
  {
    v1[36] = 0;
  }
  result = *SF_DRAFT_PTR(_DWORD, (v2 + 16));
  if ( result )
  {
    v4 = *(uint8 *)(result + 8);
    result = 2;
    if ( v4 == 2 )
    {
      result = *(uint16 *)(*((_DWORD *)v1 + 12) + 44);
      v1[36] = result;
    }
  }
  return result;
}

uint32 sub_80086050(sint32 a1)
{
    FUNCTION_MARKER(0x80086050u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v1; 
  int v2; 
  sint32 result; 

  for ( ; a1; a1 = *SF_DRAFT_PTR(_DWORD, (a1 + 24)) )
  {
    v1 = 1;
    if ( *(uint16 *)(a1 + 12) > 1u )
    {
      v2 = 44;
      do
      {
        *SF_DRAFT_PTR(_BYTE, (v2 + *SF_DRAFT_PTR(_DWORD, a1) + 20)) = *SF_DRAFT_PTR(_BYTE, (v2 + *SF_DRAFT_PTR(_DWORD, a1) - 24));
        *SF_DRAFT_PTR(_BYTE, (v2 + *SF_DRAFT_PTR(_DWORD, a1) + 21)) = *SF_DRAFT_PTR(_BYTE, (v2 + *SF_DRAFT_PTR(_DWORD, a1) - 23));
        ++v1;
        *SF_DRAFT_PTR(_BYTE, (v2 + *SF_DRAFT_PTR(_DWORD, a1) + 22)) = *SF_DRAFT_PTR(_BYTE, (v2 + *SF_DRAFT_PTR(_DWORD, a1) - 22));
        v2 += 44;
      }
      while ( v1 < *(uint16 *)(a1 + 12) );
    }
    result = (unsigned int)(*SF_DRAFT_PTR(uint32, 0x801169A4u)) < *SF_DRAFT_PTR(_DWORD, (a1 + 8));
    if ( (unsigned int)(*SF_DRAFT_PTR(uint32, 0x801169A4u)) < *SF_DRAFT_PTR(_DWORD, (a1 + 8)) )
      *SF_DRAFT_PTR(_DWORD, (a1 + 8)) = (*SF_DRAFT_PTR(uint32, 0x801169A4u));
  }
  return result;
}

sint32 sub_800482B8(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800482B8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int result; 

  if ( a2_view )
  {
    v4 = a2_view[1];
    v5 = a2_view[2];
    v6 = a2_view[3];
    *a1_view = *a2_view;
    a1_view[1] = v4;
    a1_view[2] = v5;
    a1_view[3] = v6;
    v7 = a2_view[1];
    v8 = a2_view[2];
    v9 = a2_view[3];
    a1_view[16] = *a2_view;
    a1_view[17] = v7;
    a1_view[18] = v8;
    a1_view[19] = v9;
  }
  result = 1;
  a1_view[4] = 0;
  a1_view[5] = 0;
  a1_view[6] = 0;
  a1_view[8] = 0;
  a1_view[9] = 0;
  a1_view[10] = 0;
  a1_view[12] = 0;
  a1_view[13] = 0;
  a1_view[14] = 0;
  a1_view[20] = 0;
  a1_view[21] = 0;
  a1_view[22] = 0;
  a1_view[24] = 0;
  a1_view[25] = 0;
  a1_view[26] = 0;
  a1_view[28] = 0;
  a1_view[29] = 0;
  a1_view[30] = 0;
  return result;
}

sint32 sub_800C8218(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800C8218u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  int result; 
  _DWORD *v5; 
  int v6; 

  if ( !*SF_DRAFT_PTR(_DWORD, (a1 + 20)) )
  {
    result = 1;
    if ( !a2_view )
      return result;
    if ( *a2_view )
    {
      v5 = (_DWORD *)(a2_view);
      if ( (*(_DWORD *)(a2_view[4] + 40) & 0x400000) != 0 )
      {
        while ( 1 )
        {
          v6 = sub_800CB6DC(sf_draft_guest_address(v5), -1);
          if ( !v6 )
            break;
          sub_800CB994(sf_draft_guest_address(a2_view), (*SF_DRAFT_PTR(__int16, (v6 + 4))));
          v5 = (_DWORD *)(a2_view);
        }
      }
      sub_800DE6E0(a1 + 140, *a2_view);
      *a2_view = 0;
    }
  }
  return 0;
}

uint32 sub_8002833C(sint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x8002833Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  _DWORD *v5; 
  sint32 result; 
  int *v7; 
  int v8; 

  v5 = SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 12)) + 8));
  if ( *v5 != -1 && v5[*v5 + 4] == 2 )
    return 0;
  v7 = SF_DRAFT_PTR(int, sub_800282C4(a2, *(uint8 *)(a3 + 1), a4));
  v8 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 4));
  result = 1;
  if ( ((uint8)v8 & (_BYTE)v7[1]) != 0 )
    return (uint8)(v8 & *((_BYTE *)v7 + 5)) == 0;
  return result;
}

sint32 sub_800171A8(uint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800171A8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);

  int v6; 
  int result; 
  int v8; 
  int *v9; 
  int v10; 

  if ( a3 )
    v6 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3688));
  else
    v6 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3240));
  result = *a1_view;
  v8 = 0;
  if ( *a1_view )
  {
    v9 = (int *)(a1_view);
    do
    {
      v10 = *v9++;
      sub_800DFD64(v6, v10, a2 + 4 * (a3 + v8));
      result = *v9;
      ++v8;
    }
    while ( *v9 );
  }
  return result;
}

sint32 sub_80048210(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80048210u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  _DWORD *v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 

  if ( !a1 )
    return 0;
  v4 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(a1 + 12));
  if ( v4 )
  {
    v6 = v4[1];
    v7 = v4[2];
    v8 = v4[3];
    *a2_view = *v4;
    a2_view[1] = v6;
    a2_view[2] = v7;
    a2_view[3] = v8;
  }
  else
  {
    *a2_view = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 20));
    a2_view[1] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 24));
    v5 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 28));
    a2_view[1] = (0u - a2_view[1]);
    a2_view[2] = v5;
  }
  return 1;
}

sint32 sub_800D9738(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800D9738u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int result; 
  int v7; 
  int v8; 
  int v9; 

  v2 = *a1_view;
  if ( *a1_view < 0 )
    v2 = -v2;
  v7 = v2;
  v3 = a1_view[2];
  v4 = a1_view[1];
  if ( v4 < 0 )
    v4 = -v4;
  if ( v3 < 0 )
    v3 = -v3;
  v8 = v4;
  v9 = v3;
  if ( v2 < v4 )
  {
    v7 = v4;
    v8 = v2;
  }
  v5 = v7;
  if ( v7 < v3 )
  {
    v7 = v3;
    v9 = v5;
  }
  result = 1;
  *a2_view = v7 + ((v8 + v9) >> 2);
  return result;
}

uint32 sub_800CCB40()
{
    FUNCTION_MARKER(0x800CCB40u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v1; 

  v1 = 33;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2020)) = 0;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3290)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2148)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2068)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2044)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2048)) = 0;
  *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2052)) = 1;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2056)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2064)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2164)) = 0;
  *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2053)) = 0;
  *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2054)) = 0;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2160)) = 0;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2162)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2168)) = 0;
  do
  {
    SF_DRAFT_PTR(uint32, 0x80130078u)[v1] = 0;
    v1 -= 3;
  }
  while ( v1 >= 0 );
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2140)) = 0;
  (*SF_DRAFT_PTR(uint16, 0x80128DD4u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x80128DE8u)) = 0;
  (*SF_DRAFT_PTR(uint16, 0x801165CAu)) = -1;
  sub_800CBC7C();
  sub_800D0000();
  return sub_800CCDA8();
}

sint32 sub_800D89D8(sint32 a1)
{
    FUNCTION_MARKER(0x800D89D8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int result; 
  int v3; 
  char v4; 
  int v5; 

  if ( !a1 )
    return 1;
  v3 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3128));
  v4 = *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3132));
  *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3132)) = 1;
  v5 = 0;
  if ( !v3 )
    goto LABEL_7;
  do
  {
    if ( v3 == a1 )
      break;
    v5 = v3;
    v3 = *SF_DRAFT_PTR(_DWORD, (v3 + 12));
  }
  while ( v3 );
  if ( v3 )
  {
    if ( v5 )
      *SF_DRAFT_PTR(_DWORD, (v5 + 12)) = *SF_DRAFT_PTR(_DWORD, (v3 + 12));
    else
      *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3128)) = *SF_DRAFT_PTR(_DWORD, (v3 + 12));
    result = 0;
    *SF_DRAFT_PTR(_DWORD, (v3 + 4)) = -892679478;
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3132)) = v4;
  }
  else
  {
LABEL_7:
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3132)) = v4;
    return 1;
  }
  return result;
}

sint32 sub_80067448(uint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80067448u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
  int result; 
  int v4; 
  int v5; 

  v4 = (0u - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 12)) + 24)));
  v5 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 12)) + 28));
  *a3_view = *a1_view - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + 12)) + 20));
  a3_view[1] = a1_view[1] - v4;
  result = a1_view[2] - v5;
  a3_view[2] = result;
  return result;
}

uint32 sub_800D3CB4(uint32 packed_color, uint32 increment, uint32 channel_mask)
{
    uint32 color, overflow;
    FUNCTION_MARKER(0x800D3CB4u, "SCUS_942.40");
    /* TODO Native draft requires runtime validation */
    sf_gte_write_data(25u, packed_color & 0xFF000000u);
    color = (packed_color & channel_mask) + (increment & channel_mask);
    overflow = color & 0x01010100u;
    if (overflow & 0x100u) color = (color & ~0x1FFu) | 0xFFu;
    if (overflow & 0x10000u) color = (color & ~0x1FF00u) | 0xFF00u;
    if (overflow & 0x1000000u) color = (color & ~0x1FF0000u) | 0xFF0000u;
    return color | sf_gte_read_data(25u);
}

sint32 sub_80039920(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80039920u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int result; 
  int v5; 
  int v6; 
  int v7; 

  result = *SF_DRAFT_PTR(_DWORD, (a2 + 4));
  v5 = 0;
  if ( result > 0 )
  {
    v6 = 0;
    do
    {
      ++v5;
      v7 = *SF_DRAFT_PTR(_DWORD, (a2 + 8)) + v6;
      *SF_DRAFT_PTR(_DWORD, (v7 + 40)) = sub_800DE5E0(a1 + 144, v7);
      result = v5 < (sint32)r_u32(a2 + 4);
      v6 += 44;
    }
    while ( v5 < (sint32)r_u32(a2 + 4) );
  }
  return result;
}

void sub_80018804(uint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80018804u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
  int v4; 
  int v5; 
  int v6; 

  if ( a1_view )
  {
    a1_view[38] = a2;
    if ( a3_view )
    {
      v4 = a3_view[1];
      v5 = a3_view[2];
      v6 = a3_view[3];
      a1_view[67] = *a3_view;
      a1_view[68] = v4;
      a1_view[69] = v5;
      a1_view[70] = v6;
    }
    sub_80019D60(sf_draft_guest_address(a1_view));
    a1_view[43] = 0;
    a1_view[44] = 0;
    a1_view[45] = 0;
    a1_view[47] = 0;
    a1_view[48] = 0;
    a1_view[49] = 0;
    a1_view[55] = 0;
    a1_view[56] = 0;
    a1_view[57] = 0;
    a1_view[59] = 0;
    a1_view[60] = 0;
    a1_view[61] = 0;
  }
  return;
}

sint32 sub_80018C6C(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x80018C6Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int result; 

  if ( a1 == 1 )
  {
    LOBYTE(result) = sub_80018E78(a2, a3);
  }
  else if ( a1 )
  {
    if ( a1 == 2 )
    {
      LOBYTE(result) = sub_80018EF4(a2, a3);
    }
    else if ( a1 == 3 )
    {
      LOBYTE(result) = sub_80018F3C(a2, a3);
    }
    else
    {
      LOBYTE(result) = 0;
    }
  }
  else
  {
    LOBYTE(result) = sub_80018CFC(a2 + 60, 0, *SF_DRAFT_PTR(_DWORD, (a2 + 4)), a3);
  }
  return (uint8)result;
}

sint32 sub_800463D0(sint32 a1)
{
    FUNCTION_MARKER(0x800463D0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  __int16 *v1; 
  int v2; 
  int v3; 
  int v4; 
  __int16 v5; 

  v1 = &SF_DRAFT_PTR(uint16, 0x8012F0B0u)[2 * a1];
  v2 = (uint16)*v1;
  if ( !*v1 )
    return 0;
  v3 = (uint16)v1[1];
  v4 = (uint8)SF_DRAFT_PTR(uint8, 0x8010C38Du)[32 * a1] - v3;
  if ( v4 <= 0 )
    return 0;
  if ( v4 >= v2 )
  {
    v1[1] = v3 + v2;
    *v1 = 0;
  }
  else
  {
    v5 = v1[1];
    *v1 -= v4;
    v1[1] = v5 + v4;
  }
  sub_8003FDD0();
  return 1;
}

sint32 sub_8001704C(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8001704Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);

  int result; 
  _DWORD *v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 

  if ( a1 >= (sint32)r_u32(SF_DRAFT_GP + 3572) )
    return 0;
  result = 1;
  if ( a1 < 0 )
    return 0;
  v5 = SF_DRAFT_PTR(_DWORD, (76 * a1 + *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 100))));
  v6 = v5[2];
  v7 = v5[3];
  v8 = v5[4];
  *a2_view = v5[1];
  a2_view[1] = v6;
  a2_view[2] = v7;
  a2_view[3] = v8;
  v9 = v5[6];
  v10 = v5[7];
  v11 = v5[8];
  a2_view[4] = v5[5];
  a2_view[5] = v9;
  a2_view[6] = v10;
  a2_view[7] = v11;
  return result;
}

sint32 sub_800DA080(sint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800DA080u, "SCUS_942.40");
    union { uint8 bytes[32]; uint32 words[8]; } matrix;
    uint32 z;
    sub_800DA474(a2, sf_draft_guest_address(&matrix));
    sub_800EADF4(sf_draft_guest_address(&matrix), a1, a3);
    w_u32(a3, r_u32(a3) + matrix.words[5]);
    z = r_u32(a3 + 8u);
    w_u32(a3 + 4u, r_u32(a3 + 4u) + matrix.words[6]);
    w_u32(a3 + 8u, z + matrix.words[7]);
    return 0;
}

uint32 sub_8004BE50(sint32 a1)
{
    FUNCTION_MARKER(0x8004BE50u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  __int16 v2; 
  __int16 v3; 
  _BYTE *result; 

  v2 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2696)) - 1;
  v3 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2688)) - 1;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2688)) = v3;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2696)) = v2;
  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3272)) + *(uint8 *)(a1 + 41))) = *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3272)) + v3));
  *SF_DRAFT_PTR(_BYTE, (52 * *(uint8 *)(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3272)) + *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2688))) + *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3256)) + 41)) = *SF_DRAFT_PTR(_BYTE, (a1 + 41));
  result = SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3272)) + *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2688))));
  *result = (-1);
  return sf_draft_guest_address(result);
}

sint32 sub_800C818C(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800C818Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int result; 

  if ( *SF_DRAFT_PTR(_DWORD, (a1 + 20)) )
    return 0;
  result = 1;
  if ( a2 )
  {
    result = 0;
    if ( !*SF_DRAFT_PTR(_DWORD, a2) )
    {
      if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 16)) + 40)) & 0x2400000) == 0x400000 )
        *SF_DRAFT_PTR(_BYTE, (a2 + 8)) |= 0x10u;
      *SF_DRAFT_PTR(_DWORD, a2) = sub_800DE5E0(a1 + 140, a2);
      return 0;
    }
  }
  return result;
}

uint32 sub_80034964(void)
{
    FUNCTION_MARKER(0x80034964u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v0; 
  int *v1; 
  int *v2; 
  int v3; 
  int *v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 

  v0 = 0;
  v1 = SF_DRAFT_PTR(int, 0x80129790u);
  v2 = SF_DRAFT_PTR(int, 0x8010BAF4u);
  do
  {
    v3 = *v2++;
    ++v0;
    v4 = &SF_DRAFT_PTR(uint32, 0x8010BE70u)[6 * v3];
    v5 = v4[1];
    v6 = v4[2];
    v7 = v4[3];
    *v1 = (*v4);
    v1[1] = v5;
    v1[2] = v6;
    v1[3] = v7;
    v8 = v4[5];
    v1[4] = v4[4];
    v1[5] = v8;
    v1 += 6;
  }
  while ( v0 < 9 );
  return sub_80034734(6);
}

sint32 sub_800C6D90(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800C6D90u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v2; 
  int result; 
  unsigned int v4; 

  v2 = a1 ^ a2;
  if ( a2 )
  {
    if ( a1 < 0 )
      a1 = -a1;
    v4 = a1 << 12;
    if ( (a2 & 0x80000000) != 0 )
      a2 = (0u - a2);
    if ( !a2 )
      _break(7u, 0);
    result = v4 / a2;
    if ( (unsigned int)a1 >> 20 )
      result = v4 / a2 + 2 * ((unsigned int)a1 >> 20) * (0x80000000 / a2);
  }
  else
  {
    result = 0x7FFFFFFF;
  }
  if ( v2 < 0 )
    return -result;
  return result;
}

uint32 sub_80086254(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80086254u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int *result; 
  int v4; 
  char v5; 

  result = SF_DRAFT_PTR(int, sub_80083584(a1));
  v4 = (int)result;
  if ( result )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
        v5 = result[5] & 0xB7 | 0x40;
      else
        v5 = result[5] & 0xB7;
    }
    else
    {
      v5 = result[5] & 0xB7 | 8;
    }
    *SF_DRAFT_PTR(_BYTE, (v4 + 20)) = v5;
    return sub_800835C8(v4);
  }
  return sf_draft_guest_address(result);
}

void sub_8008040C(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8008040Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v2; 

  v2 = sub_800EDB24(sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x8012DBB8u)[132 * a2 + 1 + 4 * a1]));
  sub_800823B0(r_u32(SF_DRAFT_GP + 3644u), v2, 16, 0, 0x8007FEC8u, a1 + (a2 << 5));
  sub_80015B68(0, 0);
}

sint32 sub_800399AC(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800399ACu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int result; 
  int v5; 
  int v6; 

  result = *SF_DRAFT_PTR(_DWORD, (a2 + 4));
  v5 = 0;
  if ( result > 0 )
  {
    v6 = 0;
    do
    {
      ++v5;
      sub_800C7B68(a1, (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) + v6));
      result = v5 < (sint32)r_u32(a2 + 4);
      v6 += 44;
    }
    while ( v5 < (sint32)r_u32(a2 + 4) );
  }
  return result;
}

sint32 sub_80040294(void)
{
    FUNCTION_MARKER(0x80040294u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v1; 

  sub_800399AC((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x8011B38Cu)[3 * (uint8)SF_DRAFT_PTR(uint8, 0x8010C38Cu)[32 * *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2592))]]));
  v1 = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2592)) = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
  sub_80039920((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x8011B38Cu)[3 * (uint8)SF_DRAFT_PTR(uint8, 0x8010C3ACu)[32 * v1 - 32]]));
  return sub_8003FDD0();
}

sint32 sub_80059F4C(uint32 a1)
{
    FUNCTION_MARKER(0x80059F4Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  int v1; 
  int result; 
  int v3; 
  int v4; 

  v1 = a1_view[7];
  result = 1;
  if ( *(__int16 *)(a1_view[6] + 8) > 0 && (*SF_DRAFT_PTR(_BYTE, (v1 + 72)) != 1 || (result = *(_DWORD *)(a1_view[5] + 4) & 2) != 0) )
  {
    v3 = (*SF_DRAFT_PTR(uint32, 0x8011E654u));
    v4 = (*SF_DRAFT_PTR(uint32, 0x8011E658u));
    *SF_DRAFT_PTR(_DWORD, (v1 + 16)) = (*SF_DRAFT_PTR(uint32, 0x8011E650u));
    *SF_DRAFT_PTR(_DWORD, (v1 + 20)) = v3;
    *SF_DRAFT_PTR(_DWORD, (v1 + 24)) = v4;
    *SF_DRAFT_PTR(_DWORD, (v1 + 28)) = (*SF_DRAFT_PTR(uint32, 0x8011E65Cu));
    result = 100;
    *SF_DRAFT_PTR(_WORD, (v1 + 52)) = 100;
  }
  return result;
}

sint32 sub_800CA780(uint32 a1, uint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800CA780u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  __int16 v5; 
  uint32 v7; 
  __int16 v8; 
  int result; 

  v5 = a2;
  if ( !a2 || a2 >= 0x100 )
    v5 = 0;
  v7 = r_u32(SF_DRAFT_GP + 0x878u);
  v8 = a1 * v5;
  if ( v7 )
  {
    sf_draft_call(v7, 0u, NULL);
    v8 = a1 * v5;
  }
  result = 1;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2168)) = a3;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2160)) = v8;
  return result;
}

sint32 sub_8007EAA8(sint32 a1, uint8 a2)
{
    FUNCTION_MARKER(0x8007EAA8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int result; 
  int v3; 
  char v4[8]; 

  v4[0] = a2;
  result = sub_8007E6CC(a1, sf_draft_guest_address(v4));
  v3 = result;
  if ( result >= 0 )
  {
    if ( v4[0] )
      SF_DRAFT_PTR(uint32, 0x8011F39Cu)[24 * result] = 10;
    else
      SF_DRAFT_PTR(uint32, 0x8011F39Cu)[24 * result] = 0;
    result *= 96;
    SF_DRAFT_PTR(uint8, 0x8011F398u)[96 * v3] = 1;
  }
  return result;
}

sint32 sub_800EDB24(uint32 a1)
{
    FUNCTION_MARKER(0x800EDB24u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint8 *a1_view = SF_DRAFT_PTR(uint8, a1);
  return 75 * (60 * (10 * (*a1_view >> 4) + (*a1_view & 0xF)) + 10 * (a1_view[1] >> 4) + (a1_view[1] & 0xF))
       + 10 * (a1_view[2] >> 4)
       + (a1_view[2] & 0xF)
       - 150;
}

sint32 sub_8004C38C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8004C38Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int *a2_view = SF_DRAFT_PTR(int, a2);

  int v3; 
  int v4; 
  int v5; 
  int result; 

  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2732)) = 1;
  v3 = a2_view[1];
  v4 = a2_view[2];
  v5 = a2_view[3];
  (*SF_DRAFT_PTR(uint32, 0x8011CE68u)) = *a2_view;
  (*SF_DRAFT_PTR(uint32, 0x8011CE6Cu)) = v3;
  (*SF_DRAFT_PTR(uint32, 0x8011CE70u)) = v4;
  (*SF_DRAFT_PTR(uint32, 0x8011CE74u)) = v5;
  (*SF_DRAFT_PTR(uint32, 0x8011CE48u)) = *a1_view - ((*SF_DRAFT_PTR(uint32, 0x8011CE68u)) >> 1);
  (*SF_DRAFT_PTR(uint32, 0x8011CE4Cu)) = a1_view[1] - (v3 >> 1);
  result = v4 >> 1;
  (*SF_DRAFT_PTR(uint32, 0x8011CE50u)) = a1_view[2] - (v4 >> 1);
  return result;
}

sint32 sub_800D9054(void)
{
    FUNCTION_MARKER(0x800D9054u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v1; 

  int v3; 
  int result; 

  int v6; 
  int v7; 
  int v8; 

  v1 = sub_800DE414((4 * *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2400))));
  v3 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2400));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3136)) = v1;
  result = sub_800DE414(4 * v3);
  v6 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2400));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3140)) = result;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2402)) = 0;
  v7 = 0;
  if ( v6 > 0 )
  {
    v8 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3136));
    result = 0;
    do
    {
      *SF_DRAFT_PTR(_DWORD, ((result >> 14) + v8)) = 0;
      result = ++v7 << 16;
    }
    while ( (__int16)v7 < v6 );
  }
  return result;
}

sint32 sub_80045A84(sint32 a1)
{
    FUNCTION_MARKER(0x80045A84u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int i; 
  int *v3; 
  int v4; 

  for ( i = (uint8)SF_DRAFT_PTR(uint8, 0x8010C6C4u)[a1]; i != *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 848)); i = (uint8)SF_DRAFT_PTR(uint8, 0x8010C6C4u)[i] )
  {
    v3 = &(*SF_DRAFT_PTR(uint32, 0x80115FBCu));
    v4 = i;
    if ( ((unsigned int)&(*SF_DRAFT_PTR(uint32, 0x80115FBCu)) & 3) != 0 )
    {
      v4 = i + 8 * ((unsigned int)&(*SF_DRAFT_PTR(uint32, 0x80115FBCu)) & 3);
      v3 = SF_DRAFT_PTR(int, ((unsigned int)&(*SF_DRAFT_PTR(uint32, 0x80115FBCu)) & 0xFFFFFFFC));
    }
    if ( (v3[v4 >> 5] & (1 << (v4 & 0x1F))) != 0 )
      break;
  }
  return i;
}

uint32 sub_800D7614(void)
{
    FUNCTION_MARKER(0x800D7614u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v1; 
  int i; 
  int *v3; 
  int *v4; 
  int *result; 

  v1 = 0;
  if ( !*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2344)) )
  {
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2344)) = 1;
    for ( i = 16; i >= 0; i -= 4 )
    {
      SF_DRAFT_PTR(uint32, 0x801341E4u)[i] = -892679478;
      v1 = 0;
    }
  }
  v3 = &(*SF_DRAFT_PTR(uint32, 0x801341E0u));
  v4 = SF_DRAFT_PTR(int, 0x801341E4u);
  do
  {
    result = v3;
    if ( *v4 == -892679478 )
    {
      *v4 = 0;
      return sf_draft_guest_address(result);
    }
    v3 += 4;
    ++v1;
    v4 += 4;
  }
  while ( v1 < 5 );
  return 0;
}

sint32 sub_800189FC(sint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x800189FCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v6; 
  int result; 

  *SF_DRAFT_PTR(_DWORD, (a1 + 3348)) = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  if ( a3 == 1 )
  {
    v6 = a1 + 152;
    goto LABEL_8;
  }
  if ( a3 >= 2 )
  {
    v6 = a1 + 292;
    if ( a3 != 2 )
    {
      LOBYTE(result) = 0;
      return (uint8)result;
    }
LABEL_8:
    LOBYTE(result) = sub_80019768(a2, v6, a4, a1 + 3348);
    return (uint8)result;
  }
  v6 = a1 + 12;
  if ( !a3 )
    goto LABEL_8;
  LOBYTE(result) = 0;
  return (uint8)result;
}

sint32 sub_8008B4E0(uint32 a1)
{
    FUNCTION_MARKER(0x8008B4E0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int result; 
  char v3[8]; 
  int *v4; 

  if ( (*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) )
  {
    sub_8008B378(((*SF_DRAFT_PTR(uint32, 0x80116B9Cu))));
    if ( a1 )
      sub_8008B3F0(((*SF_DRAFT_PTR(uint32, 0x80116B9Cu))));
  }
  result = (unsigned int)(*SF_DRAFT_PTR(uint32, 0x80128DE8u)) > 0x80000000;
  if ( (unsigned int)(*SF_DRAFT_PTR(uint32, 0x80128DE8u)) > 0x80000000 )
  {
    v4 = SF_DRAFT_PTR(int, 0x80128DC0u);
    return sub_8008B378(sf_draft_guest_address(v3));
  }
  return result;
}

sint32 sub_800E0B8C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800E0B8Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int *a2_view = SF_DRAFT_PTR(int, a2);
  int v4; 
  int result; 
  int v6; 

  v6 = sub_800EA904(*a1_view * *a1_view + a1_view[2] * a1_view[2]);
  v4 = -sub_800EC124(a1_view[1], v6);
  result = 0;
  *a2_view = v4;
  return result;
}

sint32 sub_80016E68(void)
{
    FUNCTION_MARKER(0x80016E68u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int result; 
  int v2; 

  result = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 74));
  v2 = 0;
  if ( result > 0 )
  {
    result = 0;
    do
    {
      sub_80016DA0(*SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80118330u))) + (result >> 14))));
      result = ++v2 << 16;
    }
    while ( (__int16)v2 < *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 74)) );
  }
  return result;
}

sint32 sub_8008CC68(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a9)
{
    FUNCTION_MARKER(0x8008CC68u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int result; 
  int v11; 
  bool v12; // dc
  int v13; 
  int v14; 
  int v15; 
  int v16; 

  result = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 24)) + 8));
  if ( result > 0 )
  {
    v11 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3032));
    result = v11 < 4;
    v12 = v11 >= 4;
    v13 = 4 * v11;
    if ( !v12 )
    {
      SF_DRAFT_PTR(uint8, 0x8012173Au)[v13 * 2] = a2;
      v14 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3032));
      SF_DRAFT_PTR(uint16, 0x80121738u)[v13] = a1;
      SF_DRAFT_PTR(uint8, 0x8012173Bu)[8 * v14] = a3;
      v15 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3032));
      v16 = 4 * v15;
      result = v15 + 1;
      SF_DRAFT_PTR(uint16, 0x8012173Cu)[v16] = a4;
      SF_DRAFT_PTR(uint16, 0x8012173Eu)[v16] = a9;
      *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3032)) = result;
    }
  }
  return result;
}

sint32 sub_8006E438(uint32 a1, uint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x8006E438u, "SCUS_942.40");
    uint32 object;
    if (!a1)
        return 0;
    object = sub_800DE414(376);
    w_u32(a1, object);
    if (!object)
        return 0;
    sub_8006E28C(object, a2, a3);
    return 1;
}

uint32 sub_800D1898(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800D1898u, "SCUS_942.40");
    /* TODO Infer geometry values at missing GTE boundary */
    sint32 geometry_value_0;
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v3; 
  unsigned int result; 
  int v6; 

  sf_draft_missing_gte_800D1898_1(&geometry_value_0);
  v3 = geometry_value_0;
  result = 0;
  if ( geometry_value_0 > 0 )
  {
    result = 0;
    if ( geometry_value_0 - a1 <= 0 )
    {
      sf_draft_missing_gte_800D1898_2(&geometry_value_0);
      v6 = (__int16)geometry_value_0;
      if ( (geometry_value_0 & 0x8000u) != 0 )
        v6 = -(__int16)geometry_value_0;
      result = 0;
      if ( v6 - a2 < 0 )
        return (unsigned int)(3 * v3) >> 2;
    }
  }
  return result;
}

sint32 sub_800469B8(sint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800469B8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    int *a3_view = SF_DRAFT_PTR(int, a3);
  int result; 

  result = 14;
  if ( a1 == 14 )
  {
    if ( a2_view )
    {
      result = 1;
      if ( (*SF_DRAFT_PTR(uint16, 0x80116AE6u)) )
        *a2_view = 0;
      else
        *a2_view = 1;
    }
    if ( a3_view )
      *a3_view = 0;
  }
  else
  {
    if ( a2_view )
      *a2_view = (uint16)SF_DRAFT_PTR(uint16, 0x8012F0B2u)[2 * a1];
    result = 4 * a1;
    if ( a3_view )
    {
      result = *(uint16 *)(SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint16, 0x8012F0B0u))) + result);
      *a3_view = result;
    }
  }
  return result;
}

sint32 sub_8003CD50(void)
{
    FUNCTION_MARKER(0x8003CD50u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v1; 
  int result; 

  sub_800C7CEC(0x80135DF8u, 0, 67109888, 67109888, 67109888, 67109888);
  v1 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376));
  (*SF_DRAFT_PTR(uint32, 0x80135DF8u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x80135DFCu)) = 2;
  sub_800C7BB0(v1, sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80135DF8u))));
  result = 1;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 692)) = 1;
  return result;
}

sint32 sub_800DFCF4(uint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800DFCF4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
  int result; 
  _DWORD *v4; 

  result = 1;
  if ( a1_view )
  {
    v4 = SF_DRAFT_PTR(_DWORD, *a1_view);
    if ( *a1_view )
    {
      if ( a3_view )
      {
        result = 14;
        if ( a2 >= 0 )
        {
          result = 0;
          if ( a2 < (sint32)v4[1] )
            *a3_view = sf_draft_guest_address((char *)v4 + v4[4] + *(_DWORD *)((char *)&v4[a2] + v4[2]));
          else
            return 14;
        }
      }
    }
  }
  return result;
}

uint32 sub_80055D14(uint32 a1)
{
    FUNCTION_MARKER(0x80055D14u, "SCUS_942.40");
    uint32 selector = r_u32(a1 + 44u);
    uint32 result;
    if (selector != 9u)
        sf_draft_call(r_u32(0x8010C83Cu + 4u * selector), 0u, NULL);
    selector = r_u32(a1 + 48u);
    result = 4u * selector;
    if (selector != 5u)
    {
        result = r_u32(0x8010C860u + result);
        if (result)
        {
            const uint32 arguments[1] = { a1 };
            return sf_draft_call(result, 1u, arguments);
        }
    }
    return result;
}

sint32 sub_800DA15C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800DA15Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  int v5; 
  int v6; 

  v5 = sub_800C6D4C((*a1_view), (*a1_view));
  v6 = sub_800C6D4C((a1_view[2]), (a1_view[2]));
  *a2_view = sub_800EAC44(v5 + v6);
  return 0;
}

sint32 sub_80018994(sint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x80018994u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  _BYTE *v6; 
  int result; 

  v6 = SF_DRAFT_PTR(_BYTE, (a1 + 324 * a3 + 432));
  if ( v6 )
  {
    LOBYTE(result) = 0;
    if ( *v6 == 1 )
      LOBYTE(result) = sub_80018A70(a2, sf_draft_guest_address(v6), a4, a1 + 3348);
  }
  else
  {
    LOBYTE(result) = 0;
  }
  return (uint8)result;
}

uint32 sub_80094820(uint32 a1)
{
    FUNCTION_MARKER(0x80094820u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  int v1; 
  sint32 result; 

  v1 = 0;
  do
  {
    if ( *a1_view )
      sub_800C7BF8((*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))), sf_draft_guest_address(a1_view));
    result = ++v1 < 4;
    a1_view += 12;
  }
  while ( v1 < 4 );
  return result;
}

sint32 sub_800D9464(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800D9464u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);
  int v3; 
  int v5; 
  unsigned int v6; 
  int v7; 

  v3 = sub_800EA3A4(a1);
  v5 = a1;
  v7 = v3;
  v6 = sub_800EA474(v5);
  if ( v6 )
  {
    *a2_view = sub_800C6D90(v7, v6);
    return 0;
  }
  else
  {
    *a2_view = 0;
    return 7;
  }
}

sint32 sub_80017140(sint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80017140u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);

  int result; 

  if ( a1 >= (sint32)r_u32(SF_DRAFT_GP + 3572) || a1 < 0 )
    return 0;
  *a3_view = *SF_DRAFT_PTR(_DWORD, (76 * a1 + *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 100)) + 44));
  result = 1;
  *a2_view = *SF_DRAFT_PTR(_DWORD, (76 * a1 + *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 100)) + 40));
  return result;
}

sint32 sub_80057FEC(uint32 a1)
{
    FUNCTION_MARKER(0x80057FECu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int result; 

  result = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
  if ( a1 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    result = (*SF_DRAFT_PTR(uint32, 0x80116A88u)) & 7;
    if ( ((*SF_DRAFT_PTR(uint32, 0x80116A88u)) & 7) == 0 )
    {
      result = 2;
      if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 16)) + 8)) != 2 )
        return sub_80057DD4(2, 480);
    }
  }
  return result;
}

sint32 sub_80086104(uint32 a1)
{
    FUNCTION_MARKER(0x80086104u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int *v1; 
  int v2; 
  unsigned int v3; 
  int v4; 

  if ( a1 == 0xFFFF )
    return 0;
  v1 = &SF_DRAFT_PTR(uint32, 0x80120A98u)[7 * (uint8)a1];
  v2 = *((uint8 *)v1 + 21) ^ HIBYTE(a1);
  v3 = v1[2];
  v4 = v2 == 0;
  if ( v3 != -1 )
  {
    v4 &= 1u;
    if ( (*SF_DRAFT_PTR(uint32, 0x801169A4u)) >= v3 )
      return 0;
  }
  return v4;
}

void sub_80019DBC(sint32 a1)
{
    FUNCTION_MARKER(0x80019DBCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v2; 
  int v3; 
  int v5[4]; 

  v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 292));
  v3 = a1 + 408;
  if ( v2 )
  {
    sub_80019B94(v3, v2, sf_draft_guest_address(v5));
    sub_80019A3C(sf_draft_guest_address(SF_DRAFT_PTR(int, (a1 + 296))), sf_draft_guest_address(v5), 1);
    sub_800DC730(r_u32((uint32)a1 + 292u), 0, (uint32)a1 + 392u);
  }
  return;
}

sint32 sub_800DE5E0(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800DE5E0u, "SCUS_942.40");
    uint32 node = r_u32(SF_DRAFT_GP + 0x990u);
    uint32 next;
    uint32 previous_head;
    uint32 *head;

    if (node == 0)
        return 0;
    next = r_u32(node + 8u);
    w_u32(SF_DRAFT_GP + 0x990u, next);
    /* The original also clears guest RAM address 4 when next is zero */
    w_u32(next + 4u, 0);
    w_u32(node, (uint32)a2);
    head = SF_DRAFT_PTR(uint32, a1);
    previous_head = *head;
    w_u32(node + 4u, 0);
    w_u32(node + 8u, previous_head);
    previous_head = *head;
    if (previous_head != 0)
        w_u32(previous_head + 4u, node);
    *head = node;
    w_u16(SF_DRAFT_GP + 0x994u,
          (uint16)(r_u16(SF_DRAFT_GP + 0x994u) + 1u));
    return (sint32)*head;
}

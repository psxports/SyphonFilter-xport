#include "game_draft.h"

BOOL sub_80039718(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x80039718u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  sint32 result; 
  result = sub_800DFD64(a1, a2, a3) == 0;
  if ( result )
    return sub_800DDD24(a3) == 0;
  return result;
}

sint32 sub_80096A30(sint32 a1)
{
    FUNCTION_MARKER(0x80096A30u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  sub_80096708(a1);
  result = *SF_DRAFT_PTR(uint8, (a1 + 56));
  if ( *SF_DRAFT_PTR(_BYTE, (a1 + 56)) )
  {
    LOBYTE(result) = sub_80095464(sf_draft_guest_address(SF_DRAFT_PTR(int, (a1 + 68))), *(int **)(a1 + 36), sf_draft_guest_address(*SF_DRAFT_PTR(_DWORD, (a1 + 48))));
    *SF_DRAFT_PTR(_BYTE, (a1 + 56)) = result;
    result = (uint8)result;
    if ( (_BYTE)result )
      return sub_800950C4(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, a1)));
  }
  return result;
}

sint32 sub_80018C0C(sint32 a1, sint32 a2, sint32 a3, sint32 a4, sint32 a5, sint32 a6, sint32 a7, sint32 a8, sint32 a9)
{
    FUNCTION_MARKER(0x80018C0Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  if ( a1 )
  {
    if ( a1 == 1 )
      LOBYTE(result) = sub_80018D68(a2, a3, a4, a9);
    else
      LOBYTE(result) = 0;
  }
  else
  {
    LOBYTE(result) = sub_80018CFC(a2, a3, a4, a9);
  }
  return (uint8)result;
}

sint32 sub_8006590C(sint32 a1)
{
    FUNCTION_MARKER(0x8006590Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v1; 
  int v2; 
  int *v3; 
  v1 = -1;
  v2 = 0;
  v3 = (*SF_DRAFT_PTR(uint32, 0x8012F120u));
  while ( *v3 >= 0 )
  {
    ++v2;
    ++v3;
    if ( v2 >= 6 )
      goto LABEL_5;
  }
  v1 = v2;
LABEL_5:
  SF_DRAFT_PTR(uint32, 0x8012F120u)[v1] = *SF_DRAFT_PTR(__int16, (a1 + 2));
  return sub_800654F4(a1, v1);
}

sint32 sub_80081DBC(void)
{
    FUNCTION_MARKER(0x80081DBCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v0; 
  int result; 
  v0 = (*SF_DRAFT_PTR(uint32, 0x8013C730u));
  sub_800C818C(sf_draft_guest_address(*(*SF_DRAFT_PTR(uint32, 0x80115D84u))));
  result = 2;
  if ( (*SF_DRAFT_PTR(uint32, 0x80115E80u)) == 2 )
    return sub_800C818C(v0);
  return result;
}

BOOL sub_800349F8(void)
{
    FUNCTION_MARKER(0x800349F8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v0; 
  int *v1; 
  int *v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  sint32 result; 
  v0 = 0;
  v1 = (*SF_DRAFT_PTR(uint32, 0x80129910u));
  v2 = (*SF_DRAFT_PTR(uint32, 0x80128E90u));
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

sint32 sub_8006AF74(uint32 a1)
{
    FUNCTION_MARKER(0x8006AF74u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    const char *a1_view = SF_DRAFT_PTR(const char, a1);
  char v3[24]; 
  if ( sub_800DEB50(sf_draft_guest_address(v3), sf_draft_guest_address(a1_view)) )
    return sub_800C610C(sf_draft_guest_address(v3));
  sub_800EC914("WhereIsThisFilePlease: Error finding file ->%s\n", a1_view);
  return 0;
}

sint32 sub_800826C0(void)
{
    FUNCTION_MARKER(0x800826C0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v1; 
  bool v2; // dc
  int result; 
  if ( *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 1080)) )
    return 0;
  if ( (*SF_DRAFT_PTR(uint32, 0x80115C78u)) )
    v1 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3796));
  else
    v1 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3488));
  v2 = v1 != 0;
  result = 0;
  if ( !v2 )
  {
    sub_80082DE0();
    return 1;
  }
  return result;
}

sint32 sub_80073CD8(sint32 a1, sint8 a2, sint32 a3, sint8 a4)
{
    FUNCTION_MARKER(0x80073CD8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v5; 
  char v6; 
  char v7; 
  char v8; 
  char v9; 
  char v10; 
  int v11; 
  int v12; 
  v5 = a1;
  v7 = a2;
  v6 = 2;
  v8 = 2 * (a4 != 0);
  v9 = 0;
  v11 = a3;
  v10 = 0;
  v12 = 0;
  sub_80073B78(sf_draft_guest_address(&v5), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80128E7Cu))));
  return 1;
}

sint32 sub_80073D30(sint32 a1, sint8 a2, sint32 a3, sint8 a4)
{
    FUNCTION_MARKER(0x80073D30u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v5; 
  char v6; 
  char v7; 
  char v8; 
  char v9; 
  char v10; 
  int v11; 
  int v12; 
  v5 = a1;
  v7 = a2;
  v6 = 2;
  v8 = 2 * (a4 != 0);
  v9 = 0;
  v11 = a3;
  v10 = 0;
  v12 = 0;
  sub_80073B78(sf_draft_guest_address(&v5), sf_draft_guest_address((*SF_DRAFT_PTR(uint32, 0x80128E80u))));
  return 1;
}

BOOL sub_8003566C(sint32 a1)
{
    FUNCTION_MARKER(0x8003566Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  sint32 result; 
  result = 0;
  if ( *SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x801169D4u)) )
  {
    result = 0;
    if ( *SF_DRAFT_PTR(_BYTE, (*(_DWORD *))(a1 + 16) + 8) == 1 )
      return sub_80035638(a1);
  }
  return result;
}

uint32 sub_800D84E8(uint32 *output, uint32 port)
{
    FUNCTION_MARKER(0x800D84E8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  if ( port < 8 )
  {
    *output = &SF_DRAFT_PTR(uint8, 0x80122478u)[60 * port];
    return 0;
  }
  else
  {
    sub_800DDC34(1, 0, aSEgsdevC, 692);
    return 1;
  }
}

sint32 sub_8006E54C(sint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8006E54Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a3_view = SF_DRAFT_PTR(int, a3);
  int v3; 
  int v4; 
  int i; 
  v3 = 0;
  v4 = *a3_view;
  for ( i = 0; v4; ++i )
  {
    if ( i >= a2 && a2 >= 0 )
      break;
    v3 = v4;
    v4 = *SF_DRAFT_PTR(_DWORD, (v4 + 372));
  }
  if ( v3 )
    *SF_DRAFT_PTR(_DWORD, (v3 + 372)) = a1;
  else
    *a3_view = a1;
  *SF_DRAFT_PTR(_DWORD, (a1 + 372)) = v4;
  return 1;
}

sint32 sub_80073190(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80073190u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  int v5; 
  sub_800D9580(a1 + 104, sf_draft_guest_address(&v5));
  *a2_view = sub_800C6D4C(sf_draft_guest_address(*SF_DRAFT_PTR(_DWORD, (a1 + 132))), v5);
  return 1;
}

sint32 sub_800195D8(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800195D8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  a2_view[2] += a1_view[15];
  a2_view[3] += a1_view[16];
  a2_view[4] += a1_view[17];
  return (uint8)sub_800191F0(sf_draft_guest_address(a1_view), sf_draft_guest_address((int)a2_view));
}

sint32 sub_80085024(uint32 a1)
{
    FUNCTION_MARKER(0x80085024u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _BYTE *a1_view = SF_DRAFT_PTR(_BYTE, a1);
  int v1; 
  int v2; 
  int v3; 
  unsigned int v4; 
  v1 = (uint8)*a1_view;
  v2 = 0;
  if ( *a1_view )
  {
    v3 = (uint8)*a1_view;
    do
    {
      v4 = v1 - 9;
      if ( v3 != 32 && v4 >= 2 && v3 != 13 )
        ++v2;
      v1 = (uint8)*++a1_view;
      v3 = v1;
    }
    while ( *a1_view );
  }
  return v2;
}

sint32 sub_8006CF68(sint32 a1)
{
    FUNCTION_MARKER(0x8006CF68u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  sint32 v3; 
  v2 = (uint8)sub_800C5D28();
  v3 = v2 < a1;
  if ( a1 < v2 )
  {
    v2 -= 5;
    v3 = v2 < a1;
  }
  if ( v3 )
    LOBYTE(v2) = a1;
  return sub_800C5D04((uint8)v2);
}

sint32 sub_80022940(sint32 a1)
{
    FUNCTION_MARKER(0x80022940u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v1; 
  int v3; 
  int v4; 
  v1 = *SF_DRAFT_PTR(__int16, (a1 + 2));
  v4 = 0;
  if ( (uint8)sub_80017140(v1, sf_draft_guest_address(&v3), sf_draft_guest_address(&v4)) != 1 )
    sub_800DDC34(1, 0, aSPathC, 284);
  return v3;
}

sint32 sub_800828A4(uint32 a1)
{
    FUNCTION_MARKER(0x800828A4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
  int v2; 
  int v3; 
  int result; 
  v2 = *a1_view;
  if ( *a1_view )
  {
    do
    {
      v3 = *SF_DRAFT_PTR(_DWORD, (v2 + 8));
      result = sub_800DE6E0(sf_draft_guest_address(a1_view));
      v2 = v3;
    }
    while ( v3 );
  }
  return result;
}

BOOL sub_80039FDC(sint32 a1)
{
    FUNCTION_MARKER(0x80039FDCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  sub_80039718(a1, sf_draft_guest_address(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 652))), sf_draft_guest_address((int)(*SF_DRAFT_PTR(uint32, 0x8011AAD0u))));
  return sub_80039718(a1, sf_draft_guest_address(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 656))), sf_draft_guest_address((int)(*SF_DRAFT_PTR(uint32, 0x8011AAFCu))));
}

sint32 sub_8001987C(sint32 a1, uint32 a2, sint8 a3, uint32 a4)
{
    FUNCTION_MARKER(0x8001987Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);
    int *a4_view = SF_DRAFT_PTR(int, a4);
  int v4; 
  int v5; 
  v4 = 1;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( a3 == 1 )
        *a2_view = *a4_view;
      else
        return 0;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v5 = *a2_view;
    a4_view[1] = (int)a2_view;
    *a4_view = v5;
  }
  return v4;
}

uint32 sub_800FE4A4(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800FE4A4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    __int16 *a1_view = SF_DRAFT_PTR(__int16, a1);
  unsigned int v3; 
  unsigned int result; 
  v3 = a2;
  if ( a2 > 0x7EFF0 )
    v3 = 520176;
  sub_800F1FF8(a1_view, v3, a3);
  result = v3;
  if ( !(*SF_DRAFT_PTR(uint32, 0x80115130u)) )
    (*SF_DRAFT_PTR(uint32, 0x8011512Cu)) = 0;
  return result;
}

sint32 sub_8007EC08(sint32 a1, sint8 a2, sint8 a3)
{
    FUNCTION_MARKER(0x8007EC08u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v4; 
  int result; 
  char v6[8]; 
  v6[0] = a3;
  v4 = sub_8007E6CC(a1, sf_draft_guest_address(v6));
  result = 2 * v4;
  if ( v4 >= 0 )
  {
    result = 96 * v4;
    SF_DRAFT_PTR(uint8, 0x8011F359u)[96 * v4] = a2;
  }
  return result;
}

uint32 sub_800CB764(sint32 a1)
{
    FUNCTION_MARKER(0x800CB764u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v1; 
  uint8 *result; 
  uint8 *v3; 
  v1 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  result = 0;
  if ( (uint16)*SF_DRAFT_PTR(_DWORD, (v1 - 4)) == 61423 )
  {
    v3 = SF_DRAFT_PTR(uint8, (v1 - (((*(int *))(v1 - 4) >> 8) & 0xFF00) + HIBYTE(*SF_DRAFT_PTR(_DWORD, (v1 - 4)))));
    result = 0;
    if ( *v3 == 234 )
      return v3 + 4;
  }
  return sf_draft_guest_address(result);
}

sint32 sub_800DF148(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800DF148u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    unsigned int *a2_view = SF_DRAFT_PTR(unsigned int, a2);
  int result; 
  unsigned int v3; 
  result = 1;
  if ( a1 && a2_view )
  {
    if ( *SF_DRAFT_PTR(int, (a1 + 8)) >= 0 )
      v3 = (unsigned int)(*SF_DRAFT_PTR(_DWORD, (a1 + 4)) + 2047) >> 11 << 11;
    else
      v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 4));
    *a2_view = v3;
    return 0;
  }
  return result;
}

sint32 sub_8004C758(uint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x8004C758u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  int v4; 
  int result; 
  (*SF_DRAFT_PTR(uint32, 0x8011CE78u)) = -*a1_view - (a2 >> 1);
  (*SF_DRAFT_PTR(uint32, 0x8011CE7Cu)) = -a1_view[1] - (a2 >> 1);
  v4 = a1_view[2];
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2748)) = a2 >> 8;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2752)) = a3;
  result = -v4 - (a2 >> 1);
  (*SF_DRAFT_PTR(uint32, 0x8011CE80u)) = result;
  return result;
}

sint32 sub_800C7B68(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800C7B68u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  if ( a2 )
  {
    result = 0;
    if ( !*SF_DRAFT_PTR(_DWORD, (a2 + 40)) )
      return result;
    sub_800DE6E0(a1 + 144);
    *SF_DRAFT_PTR(_DWORD, (a2 + 40)) = 0;
  }
  return 0;
}

sint32 sub_800C7BB0(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800C7BB0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  if ( *SF_DRAFT_PTR(int, (a1 + 20)) > 0 )
    *a2_view = 0;
  else
    *a2_view = sub_800DE5E0(a1 + 152);
  return 0;
}

uint32 sub_800C2FA8(sint32 a1)
{
    FUNCTION_MARKER(0x800C2FA8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int *v1; 
  _DWORD *result; 
  v1 = (*SF_DRAFT_PTR(uint32, 0x8012FF98u));
  for ( result = 0; *v1; result = 0 )
  {
    result = (_DWORD *)*v1;
    if ( *(_DWORD *)*v1 == a1 )
      break;
    ++v1;
  }
  return sf_draft_guest_address(result);
}

sint32 sub_800CAD98(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800CAD98u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  int v4; 
  result = sub_800CACF0(a2, sf_draft_guest_address(&v4));
  if ( !result )
  {
    result = 0;
    *SF_DRAFT_PTR(_WORD, (a1 + 4)) = v4;
  }
  return result;
}

sint32 sub_80074D08(sint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80074D08u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    bool *a3_view = SF_DRAFT_PTR(bool, a3);
  int v3; 
  v3 = *SF_DRAFT_PTR(_DWORD, (*(_DWORD *))(*SF_DRAFT_PTR(_DWORD, a1) + 16) + 32);
  *a3_view = v3 != -1 && SF_DRAFT_PTR(uint8, 0x8012C7D8u)[*SF_DRAFT_PTR(__int16, (v3 + 2))] != 0;
  return 1;
}

sint32 sub_800C5ED4(void)
{
    FUNCTION_MARKER(0x800C5ED4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1984));
  if ( result )
  {
    if ( *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1988)) )
      sub_800C6058();
    result = sub_800ED5AC(0);
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1984)) = 0;
  }
  return result;
}

BOOL sub_8003559C(sint32 a1)
{
    FUNCTION_MARKER(0x8003559Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  sint32 result; 
  result = 0;
  if ( *SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x801169D4u)) )
    return (*SF_DRAFT_PTR(uint32, 0x8010BB40u)) != 5 && (unsigned int)((*SF_DRAFT_PTR(uint32, 0x8010BCA0u)) - 2) < 2;
  return result;
}

sint32 sub_800C2F28(sint32 a1)
{
    FUNCTION_MARKER(0x800C2F28u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v1; 
  int *i; 
  int result; 
  v1 = 0;
  for ( i = (*SF_DRAFT_PTR(uint32, 0x801311B0u)); ; ++i )
  {
    if ( *i )
    {
      result = *i;
      if ( *(_DWORD *)(*i + 8) == a1 )
        break;
    }
    if ( ++v1 >= 16 )
      return 0;
  }
  return result;
}

sint32 sub_800CDAB0(void)
{
    FUNCTION_MARKER(0x800CDAB0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  unsigned int v1; 
  unsigned int v2; 
  v1 = (uint16)*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2032));
  if ( v1 >= 0x1000 )
    return 15000;
  v2 = v1 + ((4096 - v1) >> (HIWORD(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2032))) - 1));
  return v2 + (v2 >> 3);
}

sint32 sub_8004BE10(sint32 a1)
{
    FUNCTION_MARKER(0x8004BE10u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  __int16 v3; 
  *SF_DRAFT_PTR(_BYTE, (*(_DWORD *))(SF_DRAFT_GP + 3272) + *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2688))) = *SF_DRAFT_PTR(_BYTE, (a1 + 40));
  *SF_DRAFT_PTR(_BYTE, (a1 + 41)) = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2688));
  result = *SF_DRAFT_PTR(uint16, (SF_DRAFT_GP + 2688)) + 1;
  v3 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2696)) + 1;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2688)) = result;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2696)) = v3;
  return result;
}

uint32 sub_800D7AAC()
{
    FUNCTION_MARKER(0x800D7AACu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  ((void ( *)(_DWORD))loc_8013F4E0)(0);
  sub_80101554(&(*SF_DRAFT_PTR(uint8, 0x80122658u)), &(*SF_DRAFT_PTR(uint16, 0x8012267Au)));
  sub_800FF454();
  *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3108)) = 1;
  return 0;
}

uint32 sub_800CB61C(void)
{
    FUNCTION_MARKER(0x800CB61Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v0; 
  int *v1; 
  int i; 
  int *result; 
  v0 = 0;
  v1 = (*SF_DRAFT_PTR(uint32, 0x8012AE50u));
  for ( i = 0; ; i += 43 )
  {
    result = v1;
    if ( !SF_DRAFT_PTR(uint32, 0x8012AE50u)[i] )
      break;
    v1 += 43;
    if ( ++v0 >= 14 )
      return 0;
  }
  return sf_draft_guest_address(result);
}

sint32 sub_800628C8(uint32 a1)
{
    FUNCTION_MARKER(0x800628C8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
  int v1; 
  int result; 
  if ( a1_view )
  {
    (*SF_DRAFT_PTR(uint32, 0x8012F138u)) = *a1_view;
    (*SF_DRAFT_PTR(uint32, 0x8012F13Cu)) = a1_view[1];
    v1 = a1_view[2];
    result = 1;
    (*SF_DRAFT_PTR(uint32, 0x8012F144u)) = 1;
    (*SF_DRAFT_PTR(uint32, 0x8012F140u)) = v1;
  }
  else
  {
    (*SF_DRAFT_PTR(uint32, 0x8012F144u)) = 0;
  }
  return result;
}

sint32 sub_800DBF98(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800DBF98u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int v4; 
  v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 32));
  if ( v2 )
    v4 = *SF_DRAFT_PTR(_DWORD, (v2 + 32));
  else
    v4 = 0;
  return sub_800DBFD4(a1, v4, a2);
}

sint32 sub_800CDA74(sint8 a1)
{
    FUNCTION_MARKER(0x800CDA74u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  if ( a1 )
    result = (uint16)(*SF_DRAFT_PTR(uint16, 0x8012D792u)) | 4;
  else
    result = (*SF_DRAFT_PTR(uint16, 0x8012D792u)) & 0xFFFB;
  (*SF_DRAFT_PTR(uint16, 0x8012D792u)) = result;
  return result;
}

sint32 sub_80077FA0(sint32 a1)
{
    FUNCTION_MARKER(0x80077FA0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  sub_80077FD8(a1, 2, 0);
  return sub_8007903C(a1);
}

BOOL sub_800CF9E8(sint32 a1)
{
    FUNCTION_MARKER(0x800CF9E8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  _DWORD *v1; 
  sint32 result; 
  v1 = SF_DRAFT_PTR(_DWORD, sub_800CF98C)(a1);
  result = 0;
  if ( v1 )
    return *v1 != 0;
  return result;
}

sint32 sub_800CB580(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800CB580u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _BYTE *a1_view = SF_DRAFT_PTR(_BYTE, a1);
    char *a2_view = SF_DRAFT_PTR(char, a2);
  char v2; 
  char v3; 
  char v4; 
  v2 = *a2_view;
  a1_view[16] = *a2_view;
  a1_view[236] = v2;
  v3 = a2_view[1];
  a1_view[17] = v3;
  a1_view[237] = v3;
  v4 = a2_view[2];
  a1_view[18] = v4;
  a1_view[238] = v4;
  return 0;
}

sint32 sub_8006C824(void)
{
    FUNCTION_MARKER(0x8006C824u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  result = -1;
  (*SF_DRAFT_PTR(uint32, 0x80128DA0u)) = -1;
  (*SF_DRAFT_PTR(uint16, 0x80128DA8u)) = -1;
  (*SF_DRAFT_PTR(uint16, 0x80128DA4u)) = -1;
  (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) = -1;
  (*SF_DRAFT_PTR(uint32, 0x80128DACu)) = -1;
  (*SF_DRAFT_PTR(uint16, 0x80128DB4u)) = -1;
  (*SF_DRAFT_PTR(uint16, 0x80128DB0u)) = -1;
  (*SF_DRAFT_PTR(uint16, 0x80128DB2u)) = -1;
  return result;
}

sint32 sub_800D94C8(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800D94C8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  *a2_view = *a1_view << 12;
  a2_view[1] = a1_view[1] << 12;
  a2_view[2] = a1_view[2] << 12;
  return 0;
}

sint32 sub_800C2FF4(void)
{
    FUNCTION_MARKER(0x800C2FF4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v0; 
  int *i; 
  int result; 
  v0 = 0;
  for ( i = (*SF_DRAFT_PTR(uint32, 0x8012FF98u)); ; ++i )
  {
    result = v0;
    if ( !*i )
      break;
    if ( ++v0 >= 6 )
      return -1;
  }
  return result;
}

sint32 sub_8002F568(void)
{
    FUNCTION_MARKER(0x8002F568u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2532)) = -1;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 560)) = -1;
  result = 1;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2528)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2536)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2540)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 536)) = 0;
  *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3261)) = 1;
  return result;
}

sint32 sub_800DEC48(void)
{
    FUNCTION_MARKER(0x800DEC48u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2484));
  if ( result )
  {
    result = sub_800DF3B0(sf_draft_guest_address((*SF_DRAFT_PTR(uint32, 0x80116618u))));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2484)) = 0;
  }
  return result;
}

sint32 sub_8008B378(sint32 a1)
{
    FUNCTION_MARKER(0x8008B378u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  MEMORY[0x1F800000] = &v2;
  return sub_80087FE4(a1, 0);
}

sint32 sub_8008B410(uint32 a1)
{
    FUNCTION_MARKER(0x8008B410u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  int v2; 
  MEMORY[0x1F800000] = &v2;
  return sub_8008A41C(sf_draft_guest_address(a1_view));
}

sint32 sub_800C811C(uint32 a1, sint32 a2, sint32 a3, sint32 a4, sint32 a5, sint32 a6, sint32 a7, sint32 a8, sint32 a9)
{
    FUNCTION_MARKER(0x800C811Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  int result; 
  a1_view[2] = 0x4000000;
  result = 1342177280;
  a1_view[1] = 0;
  a1_view[3] = a2 | 0x50000000;
  a1_view[4] = a3;
  a1_view[6] = a4;
  a1_view[5] = a9;
  return result;
}

sint32 sub_80017244(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80017244u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  return sub_800DFD64(sf_draft_guest_address(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3424))), a1, a2);
}

sint32 sub_800F74BC(sint16 a1, sint16 a2)
{
    FUNCTION_MARKER(0x800F74BCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  return sub_800F7314(a1, a2);
}

BOOL sub_80035638(sint32 a1)
{
    FUNCTION_MARKER(0x80035638u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  sint32 result; 
  result = 0;
  if ( *SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x801169D4u)) )
    return (unsigned int)(*SF_DRAFT_PTR(uint32, 0x8010BC98u)) >= 2;
  return result;
}

void sub_800CC700(void)
{
    FUNCTION_MARKER(0x800CC700u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2152)) = (*SF_DRAFT_PTR(uint32, 0x80131218u));
  sub_800CC678(sf_draft_guest_address((int)(*SF_DRAFT_PTR(uint32, 0x80131218u))), 150);
}

sint32 sub_80094DC0(void)
{
    FUNCTION_MARKER(0x80094DC0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  return sub_800DE5E0(sf_draft_guest_address((*SF_DRAFT_PTR(uint32, 0x80116AE8u))));
}

sint32 sub_80024604(sint16 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x80024604u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  return sub_800243FC(a1, a2, a3, 1u);
}

sint32 sub_800C5D04(unsigned __int8 a1)
{
    FUNCTION_MARKER(0x800C5D04u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  result = a1;
  if ( a1 >= 0x80u )
    result = 127;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1968)) = result;
  return result;
}

uint32 sub_800EB5A4(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800EB5A4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  int v2; 
  int v3; 
  v2 = a2_view[1];
  v3 = a2_view[2];
  a1_view[5] = *a2_view;
  a1_view[6] = v2;
  a1_view[7] = v3;
  return sf_draft_guest_address(a1_view);
}

uint32 sub_80027E2C()
{
    FUNCTION_MARKER(0x80027E2Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  result = -1;
  (*SF_DRAFT_PTR(uint32, 0x8010B5D4u)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 472)) = 0;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2504)) = -1;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2508)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2512)) = 0;
  return result;
}

sint32 sub_8008A3DC(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8008A3DCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  return sub_80089684(a1, sf_draft_guest_address(a2_view), sf_draft_guest_address(a2_view + 81));
}

sint32 sub_8006C180(void)
{
    FUNCTION_MARKER(0x8006C180u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  return (uint8)sub_800C60B4();
}

sint32 sub_8006F8A0(sint32 a1)
{
    FUNCTION_MARKER(0x8006F8A0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  sub_8006D708(a1);
  return 1;
}

sint32 sub_8008B3F0(sint32 a1)
{
    FUNCTION_MARKER(0x8008B3F0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  return sub_80088244(a1);
}

sint32 sub_8006E0B8(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8006E0B8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  **(_DWORD **)(*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 416) = *a2_view;
  return 1;
}

sint32 sub_800456AC(sint32 a1)
{
    FUNCTION_MARKER(0x800456ACu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  result = 0;
  if ( a1 == (*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) )
    return (*SF_DRAFT_PTR(uint32, 0x80127D60u));
  return result;
}

sint32 sub_8013E258(sint32 a1)
{
    FUNCTION_MARKER(0x8013E258u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  return sub_8013E27C(a1);
}

void sub_800F0B14(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800F0B14u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  (*SF_DRAFT_PTR(uint32, 0x8013C63Cu)) = a1;
  (*SF_DRAFT_PTR(uint32, 0x8012EE50u)) = a2;
  (*SF_DRAFT_PTR(uint32, 0x8013C5D0u)) = a3;
}

void sub_800CD710(sint32 a1, sint32 a2, sint8 a3)
{
    FUNCTION_MARKER(0x800CD710u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  *SF_DRAFT_PTR(_DWORD, (a1 + 4)) = a3 != 0;
  *SF_DRAFT_PTR(_DWORD, (a1 + 8)) = a2;
}

BOOL sub_8001C9D8(sint32 a1)
{
    FUNCTION_MARKER(0x8001C9D8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  return (*SF_DRAFT_PTR(uint32, 0x801191FCu)) == a1;
}

void sub_800CD724(uint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x800CD724u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  a1_view[3] = a2;
  a1_view[4] = a3;
  a1_view[5] = a4;
}

uint32 sub_80016AFC()
{
    FUNCTION_MARKER(0x80016AFCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int *result; 
  result = (*SF_DRAFT_PTR(uint32, 0x80102AF4u));
  (*SF_DRAFT_PTR(uint32, 0x80130C8Cu)) = (int)(*SF_DRAFT_PTR(uint32, 0x80102AF4u));
  return sf_draft_guest_address(result);
}

sint32 sub_800CB570(sint32 a1)
{
    FUNCTION_MARKER(0x800CB570u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  *SF_DRAFT_PTR(_BYTE, (a1 + 240)) = 1;
  return 0;
}

sint32 sub_80066F50(sint32 a1)
{
    FUNCTION_MARKER(0x80066F50u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 892));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 892)) = a1;
  return result;
}

sint32 sub_80066F80(sint32 a1)
{
    FUNCTION_MARKER(0x80066F80u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2848));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2848)) = a1;
  return result;
}

sint32 sub_8008D624(sint32 a1)
{
    FUNCTION_MARKER(0x8008D624u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1836));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1836)) = a1;
  return result;
}

sint32 sub_80090614(sint32 a1)
{
    FUNCTION_MARKER(0x80090614u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1860));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1860)) = a1;
  return result;
}

sint32 sub_8002D2C8(sint32 a1)
{
    FUNCTION_MARKER(0x8002D2C8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 492));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 492)) = a1;
  return result;
}

sint32 sub_8002D56C(sint32 a1)
{
    FUNCTION_MARKER(0x8002D56Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 504));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 504)) = a1;
  return result;
}

void sub_800E9F74(sint32 a1)
{
    FUNCTION_MARKER(0x800E9F74u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)) = a1;
}

sint32 sub_8013E27C(sint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x8013E27Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  return sub_8013E28C(a1, a2, a3, a4);
}

void sub_80039708(sint8 a1)
{
    FUNCTION_MARKER(0x80039708u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  (*SF_DRAFT_PTR(uint8, 0x8010BCBCu)) = a1;
}

void sub_8006D37C(void)
{
    FUNCTION_MARKER(0x8006D37Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2964)) = 0;
}

void sub_800DE4EC(sint32 a1)
{
    FUNCTION_MARKER(0x800DE4ECu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2436)) = a1;
}

sint32 sub_800C5D28(void)
{
    FUNCTION_MARKER(0x800C5D28u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  return *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 1968));
}


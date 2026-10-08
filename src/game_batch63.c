#include "game_draft.h"
/* TODO Resolve exact missing SDK declarations and adapters */

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x800CB5F8u 0x800cb5f8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800CB5F8(void)
{
  FUNCTION_MARKER(0x800CB5F8u, "SCUS_942.40");
  int result; 

  for ( result = 559; result >= 0; result -= 43 )
    SF_DRAFT_PTR(uint32, 0x8012AE50u)[result] = 0;
  return result * 4;
}

// FUNCTION_MARKER 0x800658F4u 0x800658f4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800658F4(uint32 a1)
{
  _DWORD * native_a1 = SF_DRAFT_PTR(_DWORD, a1);
  FUNCTION_MARKER(0x800658F4u, "SCUS_942.40");
  int result; 

  result = -1;
  *SF_DRAFT_PTR(_BYTE, (native_a1[7] + 77)) = -1;
  native_a1[5] = 0;
  native_a1[3] = 0;
  return result;
}

// FUNCTION_MARKER 0x80016AE0u 0x80016ae0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80016AE0(sint32 a1, uint32 a2)
{
  FUNCTION_MARKER(0x80016AE0u, "SCUS_942.40");
  return (*SF_DRAFT_PTR(uint32, 0x80116A88u)) - a1 >= a2;
}

// FUNCTION_MARKER 0x8004C5C8u 0x8004c5c8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_8004C5C8(sint32 a1, sint32 a2, sint32 a3)
{
  FUNCTION_MARKER(0x8004C5C8u, "SCUS_942.40");
  _DWORD * v3 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);

  v3[684] = a1;
  v3[685] = a2;
  v3[686] = a3;
}

// FUNCTION_MARKER 0x8001C960u 0x8001c960
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001C960(sint32 a1)
{
  FUNCTION_MARKER(0x8001C960u, "SCUS_942.40");
  return (*SF_DRAFT_PTR(uint32, 0x801191ECu)) == a1;
}

// FUNCTION_MARKER 0x800DE3FCu 0x800de3fc
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800DE3FC(void)
{
  FUNCTION_MARKER(0x800DE3FCu, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;

  return *SF_DRAFT_PTR(_DWORD, (v0 + 2436)) - *SF_DRAFT_PTR(_DWORD, (v0 + 2432));
}

// FUNCTION_MARKER 0x80046A3Cu 0x80046a3c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80046A3C(sint32 a1)
{
  FUNCTION_MARKER(0x80046A3Cu, "SCUS_942.40");
  return SF_DRAFT_PTR(uint16, 0x8010C396u)[16 * a1];
}

// FUNCTION_MARKER 0x8003B020u 0x8003b020
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8003B020(sint32 a1)
{
  FUNCTION_MARKER(0x8003B020u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int result; 

  result = *SF_DRAFT_PTR(_DWORD, (v1 + 748));
  *SF_DRAFT_PTR(_DWORD, (v1 + 748)) = a1;
  return result;
}

// FUNCTION_MARKER 0x80066F40u 0x80066f40
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80066F40(sint32 a1)
{
  FUNCTION_MARKER(0x80066F40u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int result; 

  result = *SF_DRAFT_PTR(_DWORD, (v1 + 888));
  *SF_DRAFT_PTR(_DWORD, (v1 + 888)) = a1;
  return result;
}

// FUNCTION_MARKER 0x80066F70u 0x80066f70
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80066F70(sint32 a1)
{
  FUNCTION_MARKER(0x80066F70u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int result; 

  result = *SF_DRAFT_PTR(_DWORD, (v1 + 2844));
  *SF_DRAFT_PTR(_DWORD, (v1 + 2844)) = a1;
  return result;
}

// FUNCTION_MARKER 0x8008BE90u 0x8008be90
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8008BE90(sint32 a1)
{
  FUNCTION_MARKER(0x8008BE90u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int result; 

  result = *SF_DRAFT_PTR(_DWORD, (v1 + 1832));
  *SF_DRAFT_PTR(_DWORD, (v1 + 1832)) = a1;
  return result;
}

// FUNCTION_MARKER 0x8008DE18u 0x8008de18
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8008DE18(sint32 a1)
{
  FUNCTION_MARKER(0x8008DE18u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int result; 

  result = *SF_DRAFT_PTR(_DWORD, (v1 + 1840));
  *SF_DRAFT_PTR(_DWORD, (v1 + 1840)) = a1;
  return result;
}

// FUNCTION_MARKER 0x8002A3F4u 0x8002a3f4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8002A3F4(sint32 a1)
{
  FUNCTION_MARKER(0x8002A3F4u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int result; 

  result = *SF_DRAFT_PTR(_DWORD, (v1 + 512));
  *SF_DRAFT_PTR(_DWORD, (v1 + 512)) = a1;
  return result;
}

// FUNCTION_MARKER 0x8002D2E8u 0x8002d2e8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8002D2E8(sint32 a1)
{
  FUNCTION_MARKER(0x8002D2E8u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int result; 

  result = *SF_DRAFT_PTR(_DWORD, (v1 + 500));
  *SF_DRAFT_PTR(_DWORD, (v1 + 500)) = a1;
  return result;
}

// FUNCTION_MARKER 0x800201DCu 0x800201dc
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800201DC(void)
{
  FUNCTION_MARKER(0x800201DCu, "SCUS_942.40");
  int result; 

  result = 1;
  (*SF_DRAFT_PTR(uint8, 0x8011921Au)) = 1;
  return result;
}

// FUNCTION_MARKER 0x800CD624u 0x800cd624
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800CD624(sint32 a1, sint16 a2, sint32 a3)
{
  FUNCTION_MARKER(0x800CD624u, "SCUS_942.40");
  *SF_DRAFT_PTR(_WORD, (a1 + 22)) = a2;
  *SF_DRAFT_PTR(_DWORD, (a1 + 12)) = a3;
}

// FUNCTION_MARKER 0x80087E64u 0x80087e64
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_80087E64(void)
{
  FUNCTION_MARKER(0x80087E64u, "SCUS_942.40");
  (*SF_DRAFT_PTR(uint32, 0x8012CD38u)) = 0;
}

// FUNCTION_MARKER 0x8001C978u 0x8001c978
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001C978(void)
{
  FUNCTION_MARKER(0x8001C978u, "SCUS_942.40");
  return (*SF_DRAFT_PTR(uint32, 0x801191F0u));
}

// FUNCTION_MARKER 0x800354D8u 0x800354d8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800354D8(void)
{
  FUNCTION_MARKER(0x800354D8u, "SCUS_942.40");
  return (*SF_DRAFT_PTR(uint32, 0x8010BB40u));
}

// FUNCTION_MARKER 0x800489ECu 0x800489ec
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800489EC(void)
{
  FUNCTION_MARKER(0x800489ECu, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;

  *SF_DRAFT_PTR(_DWORD, (v0 + 876)) = 0;
}

// FUNCTION_MARKER 0x800DE4F8u 0x800de4f8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DE4F8(void)
{
  FUNCTION_MARKER(0x800DE4F8u, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;

  return *SF_DRAFT_PTR(_DWORD, (v0 + 2436));
}

// FUNCTION_MARKER 0x800C831Cu 0x800c831c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800C831C(sint32 a1)
{
  FUNCTION_MARKER(0x800C831Cu, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;

  *SF_DRAFT_PTR(_DWORD, (v1 + 2088)) = a1;
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800EB8D4_stage1(sint32 *output1);
// FUNCTION_MARKER 0x800EB8D4u 0x800eb8d4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800EB8D4(void)
{
  FUNCTION_MARKER(0x800EB8D4u, "SCUS_942.40");
  int result; 

  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800EB8D4_stage1(&result);
  return result;
}

// FUNCTION_MARKER 0x800CD61Cu 0x800cd61c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800CD61C(sint32 a1, sint32 a2)
{
  FUNCTION_MARKER(0x800CD61Cu, "SCUS_942.40");
  *SF_DRAFT_PTR(_DWORD, (a1 + 4)) = a2;
}

// FUNCTION_MARKER 0x8005ABC0u 0x8005abc0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8005ABC0(void)
{
  FUNCTION_MARKER(0x8005ABC0u, "SCUS_942.40");
  return 0;
}

// FUNCTION_MARKER nullsub_10 0x8008ad28
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void nullsub_10(void)
{
  FUNCTION_MARKER(0x8008AD28u, "SCUS_942.40");
  ;
}

// FUNCTION_MARKER nullsub_11 0x80016f88
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void nullsub_11(void)
{
  FUNCTION_MARKER(0x80016F88u, "SCUS_942.40");
  ;
}


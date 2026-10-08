#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);
#include "game_draft.h"
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_80017FF0();
extern uint32 sub_8002062C();
extern uint32 sub_80024190();
extern uint32 sub_80030684();

extern uint32 sub_8008D634();
extern uint32 sub_80090490();




/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x8003B320u 0x8003b320
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8003B320(void)
{
  FUNCTION_MARKER(0x8003B320u, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int v1; 
  int v2 = SF_DRAFT_GP;
  int v3; 
  int v4; 
  int *v5; 
  int v6; 
  int v7; 
  int *v8; 
  int *v9; 
  int *v10; 
  int *v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18 = SF_DRAFT_GP;
  int v19; 
  int *v20; 
  int *v21; 
  int v22; 
  int *v23; 
  int *v24; 
  int v25; 
  int v26; 
  int *v27; 
  int *v28; 
  int v29; 
  int v30 = SF_DRAFT_GP;
  int v31; 
  int *v32; 
  int *v33; 
  int v34; 
  int v35; 
  int *v36; 
  int *v37; 
  int v38; 
  __int16 *v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44 = SF_DRAFT_GP;
  _DWORD * v45 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
  uint16 v46; 
  int v47 = SF_DRAFT_GP;
  uint16 v48; 
  int v49 = SF_DRAFT_GP;
  int v50 = SF_DRAFT_GP;
  int *v51; 
  int *v52; 
  _WORD * v53 = SF_DRAFT_PTR(_WORD, SF_DRAFT_GP);
  int v54 = SF_DRAFT_GP;
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60 = SF_DRAFT_GP;
  int v61; 
  int v62; 
  int *v63; 
  int *v64; 
  int v65; 
  int v66; 
  int *v67; 
  int v68; 
  int v69; 
  int *v70; 
  int v71; 
  int v72; 
  int *v73; 
  int *v74; 
  int v75 = SF_DRAFT_GP;
  int *v76; 
  int v77 = SF_DRAFT_GP;
  int v78; 
  int *v79; 
  int v80 = SF_DRAFT_GP;
  int v81 = SF_DRAFT_GP;

  sint32 object_bounds[4];
  uint16 v88[1]; 
  uint16 v89[3]; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 

  object_bounds[0] = SF_DRAFT_PTR(uint32, 0x80011BB0u)[62];
  object_bounds[1] = SF_DRAFT_PTR(uint32, 0x80011BB0u)[63];
  object_bounds[2] = SF_DRAFT_PTR(uint32, 0x80011BB0u)[64];
  object_bounds[3] = SF_DRAFT_PTR(uint32, 0x80011BB0u)[65];
  *SF_DRAFT_PTR(_DWORD, (v0 + 692)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8011B308u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8011B30Cu)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8011B310u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x80130D28u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x80130D2Cu)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x80130D30u)) = 0;
  sub_800D7A4C(v88, v89);
  sub_800CB250(0, sf_draft_guest_address(object_bounds), 1, 0x80115F58u, 3, 3, 300, 0x80116998u);
  v1 = 1;
  v3 = 3;
  v4 = 2;
  *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 3376)) + 6)) |= 1u;
  do
  {
    v5 = SF_DRAFT_PTR(int, sub_80039F60(*(SF_DRAFT_PTR(uint8, 0x80011B38u) + v4)));
    v6 = *(SF_DRAFT_PTR(uint8, 0x80011B38u) + v4 + 1);
    sub_80039B44(sf_draft_guest_address(v5),  v6,  400,  400);
    sub_80039778(0x8011B38Cu + 4u * (uint32)v3, v6, sf_draft_guest_address(v5));
    v7 = 0;
    if ( v6 )
    {
      v8 = v5;
      do
      {
        v8[9] = 0;
        v8[10] = 0;
        ++v7;
        v8 += 11;
      }
      while ( v7 < v6 );
    }
    v3 += 3;
    ++v1;
    v4 += 2;
  }
  while ( v1 < 23 );
  v9 = SF_DRAFT_PTR(int, sub_80039F60(0));
  v10 = SF_DRAFT_PTR(int, 0x8011B360u);
  v11 = v9;
  do
  {
    v12 = v11[1];
    v13 = v11[2];
    v14 = v11[3];
    *v10 = *v11;
    v10[1] = v12;
    v10[2] = v13;
    v10[3] = v14;
    v11 += 4;
    v10 += 4;
  }
  while ( v11 != v9 + 8 );
  v15 = v11[1];
  v16 = v11[2];
  *v10 = *v11;
  v10[1] = v15;
  v10[2] = v16;
  SF_DRAFT_PTR(uint32, 0x8011B360u)[9] = 7;
  sub_800DE31C(0x8011B360u, 1);
  v17 = 0;
  v19 = 0;
  sub_800C7B20(*SF_DRAFT_PTR(_DWORD, (v18 + 3376)), 0x8011B360u);
  v20 = SF_DRAFT_PTR(uint32, 0x8011BB4Cu);
  v21 = SF_DRAFT_PTR(int, 0x8011BB44u);
  SF_DRAFT_PTR(uint32, 0x8011B360u)[2] = 65537;
  do
  {
    sub_800C7CEC(sf_draft_guest_address(v21),  5255208,  67109888,  67109888, 67109888, 67109888);
    v21[1] = 3;
    v21 += 9;
    ++v17;
    *((_BYTE *)v20 + 7) |= 2u;
    v20 += 9;
    SF_DRAFT_PTR(uint32, 0x8011BB44u)[v19] = 0;
    v19 += 9;
  }
  while ( v17 < 2 );
  sub_800C7CB0(0x8011BBD4u, 0, 5308263, 67109888, 67109888, 5255208, 5255208);
  v22 = 0;
  v23 = SF_DRAFT_PTR(uint32, 0x8011BC00u);
  v24 = SF_DRAFT_PTR(int, 0x8011BBF8u);
  v25 = 0;
  (*SF_DRAFT_PTR(uint32, 0x8011BBD8u)) = 4;
  (*SF_DRAFT_PTR(uint32, 0x8011BBD4u)) = 0;
  HIBYTE((*SF_DRAFT_PTR(uint32, 0x8011BBE0u))) |= 2u;
  do
  {
    sub_800C8148(sf_draft_guest_address(v24),  15171179,  67109888,  67109888);
    v24[1] = 2;
    v24 += 6;
    ++v22;
    *((_BYTE *)v23 + 7) |= 2u;
    v23 += 6;
    SF_DRAFT_PTR(uint32, 0x8011BBF8u)[v25] = 0;
    v25 += 6;
  }
  while ( v22 < 5 );
  v26 = 0;
  v27 = SF_DRAFT_PTR(uint32, 0x8011BB94u);
  v28 = SF_DRAFT_PTR(int, 0x8011BB8Cu);
  v29 = 0;
  do
  {
    sub_800C7CEC(sf_draft_guest_address(v28),  15171179,  67109888,  67109888, 67109888, 67109888);
    v28 += 9;
    SF_DRAFT_PTR(uint32, 0x8011BB8Cu)[v29] = 0;
    v29 += 9;
    ++v26;
    *((_BYTE *)v27 + 7) |= 2u;
    v27 += 9;
  }
  while ( v26 < 2 );
  v31 = 0;
  v32 = SF_DRAFT_PTR(uint32, 0x8011BC78u);
  v33 = SF_DRAFT_PTR(int, 0x8011BC70u);
  v34 = 0;
  *SF_DRAFT_PTR(_DWORD, (v30 + 3248)) = 15171179;
  *SF_DRAFT_PTR(_DWORD, (v30 + 3200)) = 5255208;
  do
  {
    sub_800C8148(sf_draft_guest_address(v33),  15171179,  67109888,  67109888);
    v33[1] = 2;
    v33 += 6;
    ++v31;
    *((_BYTE *)v32 + 7) |= 2u;
    v32 += 6;
    SF_DRAFT_PTR(uint32, 0x8011BC70u)[v34] = 0;
    v34 += 6;
  }
  while ( v31 < 4 );
  v35 = 0;
  v36 = SF_DRAFT_PTR(int, 0x8011BA14u);
  v37 = SF_DRAFT_PTR(int, 0x8011BA0Cu);
  v38 = 0;
  v39 = SF_DRAFT_PTR(uint16, 0x8011BA00u);
  v40 = 0;
  do
  {
    sub_800C7CEC(0x8011B904u + 4u * (uint32)v40,  0,  67109888,  67109888, 67109888, 67109888);
    SF_DRAFT_PTR(uint32, 0x8011B904u)[v40] = 0;
    *v39 = -1;
    sub_800C7EE0(sf_draft_guest_address(v37), 4194368, 0, 0, 0, 0, 255, 255, 255);
    v37[1] = 3;
    v37 += 12;
    ++v39;
    v40 += 9;
    v41 = v35++;
    *((_BYTE *)v36 + 7) |= 2u;
    v36 += 12;
    SF_DRAFT_PTR(uint32, 0x8011BA0Cu)[v38] = 0;
    SF_DRAFT_PTR(uint32, 0x8011BB2Cu)[v41] = 0;
    v38 += 12;
  }
  while ( v35 < 6 );
  sub_800C7CEC(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011B9DCu)),  0xFFFFFF,  67109888,  67109888, 67109888, 67109888);
  v42 = 0;
  v90 = 5308263;
  v91 = 5308263;
  v43 = 0;
  v92 = 0;
  v93 = -2;
  (*SF_DRAFT_PTR(uint32, 0x8011B9E0u)) = 1;
  (*SF_DRAFT_PTR(uint32, 0x8011B9DCu)) = 0;
  sub_800C7CB0(0x8011B318u, 16696516, 5308263, 0, 0, 7690302, 7690302);
  (*SF_DRAFT_PTR(uint32, 0x8011B318u)) = 0;
  sub_800C7CB0(0x8011B33Cu, 16696516, 0, 0, 0, 7690302, 7690302);
  (*SF_DRAFT_PTR(uint32, 0x8011B33Cu)) = 0;
  *SF_DRAFT_PTR(_DWORD, (v44 + 2572)) = 0;
  sub_8002F568();
  sub_8003A050();
  v45[650] = 0x7FFFFFFF;
  v45[651] = 0x7FFFFFFF;
  v45[648] = 0;
  sub_800848D4(0x8011BED0u, 6);
  v46 = sub_80085E04( sf_draft_guest_address(SF_DRAFT_PTR(char, 0x80115F60u)), 0x8011BED0u, 400, 400);
  *SF_DRAFT_PTR(_WORD, (v47 + 696)) = v46;
  v48 = sub_80086EA0(v46, sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x80115F04u)));
  *SF_DRAFT_PTR(_WORD, (v49 + 696)) = v48;
  sub_80086E44(v48, 208, 208, 208);
  *SF_DRAFT_PTR(_WORD, (v50 + 698)) = -1;
  sub_800848D4(0x8011BFD8u, 8);
  sub_800848D4(0x8011B530u, 19);
  v51 = SF_DRAFT_PTR(int, 0x8011B4A8u);
  v52 = SF_DRAFT_PTR(int, 0x8011B4A0u);
  v53[340] = -1;
  v53[341] = -1;
  v53[342] = -1;
  do
  {
    sub_800C7CEC(sf_draft_guest_address(v52), SF_DRAFT_PTR(uint32, 0x80011B38u)[v42 + 12], 
      (uint16)SF_DRAFT_PTR(uint16, 0x80011B78u)[2 * v42] | (SF_DRAFT_PTR(uint16, 0x80011B78u)[2 * v42 + 1] << 16), 
      (uint16)SF_DRAFT_PTR(uint16, 0x80011B78u)[2 * v42] | (SF_DRAFT_PTR(uint16, 0x80011B78u)[2 * v42 + 1] << 16), (uint32)SF_DRAFT_PTR(uint16, 0x80011B78u)[2 * v42] | ((uint32)(SF_DRAFT_PTR(uint16, 0x80011B78u)[2 * v42 + 1] + 4u) << 16), (uint32)SF_DRAFT_PTR(uint16, 0x80011B78u)[2 * v42] | ((uint32)(SF_DRAFT_PTR(uint16, 0x80011B78u)[2 * v42 + 1] + 4u) << 16));
    *((_BYTE *)v51 + 7) |= 2u;
    v55 = *SF_DRAFT_PTR(_DWORD, (v54 + 3376));
    v52[1] = 1;
    SF_DRAFT_PTR(uint32, 0x8011B4A0u)[v43] = 0;
    sub_800C7BB0(v55, sf_draft_guest_address(v52));
    if ( v42 > 0 )
    {
      v56 = 0;
      v57 = v93;
      v58 = v92;
      do
      {
        v59 = 6 * (v57 + v56);
        sub_800C8148(0x8011B874u + 4u * (uint32)v59,  15171179,  67109888,  67109888);
        v61 = *SF_DRAFT_PTR(_DWORD, (v60 + 3376));
        *SF_DRAFT_PTR(uint32, 0x8011B874u + (uint32)v58) = 0;
        sub_800C7BB0(v61, 0x8011B874u + 4u * (uint32)v59);
        ++v56;
        HIBYTE(SF_DRAFT_PTR(uint32, 0x8011B87Cu)[v59 + 1]) |= 2u;
        SF_DRAFT_PTR(uint32, 0x8011B874u)[v59 + 1] = 0;
      }
      while ( v56 < 2 );
    }
    v51 += 9;
    v52 += 9;
    v43 += 9;
    ++v42;
    v92 += 24;
    v93 += 2;
  }
  while ( v42 < 4 );
  v62 = 0;
  v63 = SF_DRAFT_PTR(uint32, 0x8011C140u);
  v64 = SF_DRAFT_PTR(int, 0x8011C138u);
  v65 = 0;
  do
  {
    sub_800C8148(sf_draft_guest_address(v64),  1073168,  67109888,  67109888);
    v64 += 6;
    ++v62;
    *((_BYTE *)v63 + 7) |= 2u;
    v63 += 6;
    SF_DRAFT_PTR(uint32, 0x8011C138u)[v65] = 0;
    v65 += 6;
  }
  while ( v62 < 36 );
  v66 = 0;
  v67 = SF_DRAFT_PTR(int, 0x8011C498u);
  v68 = 0;
  do
  {
    sub_800C7CEC(sf_draft_guest_address(v67), 4259648, 0, 0, 0, 0);
    v67 += 9;
    SF_DRAFT_PTR(uint32, 0x8011C498u)[v68] = 0;
    ++v66;
    v68 += 9;
  }
  while ( v66 < 26 );
  v69 = 0;
  v70 = SF_DRAFT_PTR(int, 0x8011C840u);
  v71 = 0;
  do
  {
    sub_800C7C40(sf_draft_guest_address(v70), 1073168, 0, 0, 0);
    v70 += 7;
    SF_DRAFT_PTR(uint32, 0x8011C840u)[v71] = 0;
    ++v69;
    v71 += 7;
  }
  while ( v69 < 2 );
  v72 = 45;
  do
  {
    v74 = SF_DRAFT_PTR(int, sub_80039F60(v72));
    v73 = SF_DRAFT_PTR(int, sub_80039F60(v72));
    sub_800DE31C(sf_draft_guest_address(v73),  1);
    ++v72;
    *((_BYTE *)v74 + 22) = 64;
    *((_BYTE *)v74 + 21) = 64;
    *((_BYTE *)v74 + 20) = 64;
    v74[10] = 0;
  }
  while ( v72 < 59 );
  *SF_DRAFT_PTR(_DWORD, (v75 + 736)) = 0;
  v76 = SF_DRAFT_PTR(int, sub_80039F60(51));
  *SF_DRAFT_PTR(_DWORD, (v77 + 740)) = sf_draft_guest_address(v76);
  sub_80044848(0);
  v78 = 7;
  v79 = SF_DRAFT_PTR(uint32, 0x8010C380u);
  *SF_DRAFT_PTR(_BYTE, (v80 + 2624)) = 1;
  do
  {
    *v79 = -1;
    --v78;
    --v79;
  }
  while ( v78 >= 0 );
  sub_8003CA74(5255208, 15171179, 13684944);
  *SF_DRAFT_PTR(_DWORD, (v81 + 744)) = -5;
  sub_8003B020(0);
  sub_8003B2A4(60);
  sub_80015364(0xEu, 4u, 65534, 65534, 0, 0, 0, 0);
  return sub_800E52AC(0x80116680u, (sint32)0x8011BCD0u);
}

// FUNCTION_MARKER 0x800382B0u 0x800382b0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800382B0(uint32 a1)
{
  _DWORD * native_a1 = SF_DRAFT_PTR(_DWORD, a1);
  FUNCTION_MARKER(0x800382B0u, "SCUS_942.40");
  _DWORD *v2; 
  int *v3; 
  int v4; 
  _DWORD *v5; 
  int v6; 
  _DWORD *v7; 
  _DWORD *v8; 
  bool v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  _DWORD *v14; 
  int *v15; 
  int v16; 
  BOOL v17; 
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
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int *v37; 
  int *v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
int v44; 
  int v45; 
uint32 rotation_matrix[8]; 
  __int16 v54[4]; 
  int v55; 

  v2 = native_a1 + 25;
  v3 = native_a1 + 40;
  v4 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x801169D4u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v5 = native_a1 + 55;
  if ( !v4 )
    return;
  v6 = *SF_DRAFT_PTR(_DWORD, (v4 + 12));
  if ( !v6 )
    return;
  v7 = SF_DRAFT_PTR(_DWORD, r_u32((v6 + 408)));
  if ( !v7 )
    return;
  v8 = v7;
  v9 = sub_8001C960(0);
  v10 = sub_8001C9A0();
  if ( *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, SF_DRAFT_PTR(uint32, 0x80118D98u)) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668)) )
    v39 = *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, SF_DRAFT_PTR(uint32, 0x80118DD4u)) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668));
  v54[0] = 0;
  v54[2] = 0;
  v54[1] = v39;
  sub_800EBE94(sf_draft_guest_address(v54), sf_draft_guest_address(rotation_matrix));
  ((sint16 *)rotation_matrix)[1] = -((sint16 *)rotation_matrix)[1];
  v11 = -((sint16 *)rotation_matrix)[5];
  ((sint16 *)rotation_matrix)[5] = -((sint16 *)rotation_matrix)[5];
  ((sint16 *)rotation_matrix)[3] = -((sint16 *)rotation_matrix)[3];
  v40 = ((sint16 *)rotation_matrix)[2];
  ((sint16 *)rotation_matrix)[7] = -((sint16 *)rotation_matrix)[7];
  v41 = (__int16)v11;
  v45 = -((sint16 *)rotation_matrix)[2];
  v42 = ((sint16 *)rotation_matrix)[8];
  v44 = ((sint16 *)rotation_matrix)[8];
  if ( (v10 == 7 || v10 == 5) && (v2[4] || v2[5] || v2[6] || v3[4] || v3[5] || v3[6] || v5[4] || v5[5] || v5[6]) )
    v10 = 0;
  v12 = *SF_DRAFT_PTR(_DWORD, (v4 + 16));
  if ( *SF_DRAFT_PTR(_BYTE, (v12 + 8)) != 4 && (*SF_DRAFT_PTR(_DWORD, v12) & 0x1000) == 0 )
  {
    v13 = *SF_DRAFT_PTR(_DWORD, (v4 + 12));
    if ( !v13 || (v14 = SF_DRAFT_PTR(_DWORD, r_u32((v13 + 416)))) == 0 || *v14 != 1 )
    {
      if ( v10 == 5 )
        goto LABEL_88;
      if ( v10 != 7 )
      {
        v15 = SF_DRAFT_PTR(int, r_u32((v4 + 16)));
        v16 = *((uint8 *)v15 + 8);
        v17 = v9;
        if ( (unsigned int)(v16 - 1) < 2 || (v17 = v9, *((_BYTE *)v15 + 8) == 9) )
        {
          if ( v17 )
          {
            if ( v8[15] == 5 )
            {
              v18 = *v15;
              if ( (v18 & 2) != 0 && (uint8)v16 != 9 && (v18 & 0x400) == 0 && *v3 )
              {
                v19 = 8;
                if ( *v3 > 0 )
                  v19 = 9;
                v8[15] = v19;
              }
            }
          }
          if ( native_a1[87] >= 2u && sub_8001C960(2) )
          {
            v20 = v8[8];
            v8[11] = 0u - v8[6];
            v21 = v8[7];
            v8[13] = -v20;
            v8[12] = -v21;
            goto LABEL_89;
          }
          if ( sub_8001C960(6) || sub_8001C960(7) || sub_8001C960(8) || sub_8001C960(9) )
          {
            v22 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 12)) + 408)) + 60));
            if ( v22 == 5 || (v23 = 0, (unsigned int)(v22 - 8) < 2) )
              v23 = 1;
            if ( v23 || (v24 = 0, ((*SF_DRAFT_PTR(_DWORD, r_u32((v4 + 16))) >> 1) & 1) != 0) )
              v24 = 1;
            if ( v24 && !*v2 && !v2[1] && !v2[2] )
              goto LABEL_87;
          }
          if ( sub_8001C9D8(1) || sub_80020714() != *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x801169D4u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) )
          {
            if ( !v8[6] && !v8[7] && !v8[8] )
              goto LABEL_89;
            goto LABEL_72;
          }
          if ( v9 && native_a1[90] != 3 )
          {
            v25 = native_a1[89];
            if ( v25 )
            {
              v26 = *SF_DRAFT_PTR(_DWORD, (v4 + 16));
              if ( *SF_DRAFT_PTR(_BYTE, (v26 + 8)) == 9 || (*SF_DRAFT_PTR(_DWORD, v26) & 0x400) != 0 )
              {
                if ( v25 == 2 )
                {
                  v8[11] = -v44;
                  v8[12] = 0;
                  v8[13] = -v45;
                  goto LABEL_89;
                }
                if ( v25 == 3 )
                {
                  v8[11] = v44;
                  v8[12] = 0;
                  v8[13] = v45;
                  v8[14] = (sf_draft_unbound_stack_field(0x800382B0u, 0x3Cu), 0u);
                  goto LABEL_89;
                }
LABEL_72:
                v29 = v8[7];
                v30 = v8[8];
                v31 = v8[9];
                v8[11] = v8[6];
                v8[12] = v29;
                v8[13] = v30;
                v8[14] = v31;
                goto LABEL_89;
              }
              v27 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 12)) + 408)) + 60));
              if ( v27 == 5 || (v28 = 0, (unsigned int)(v27 - 8) < 2) )
                v28 = 1;
              if ( !v28 )
                goto LABEL_72;
            }
            else
            {
              v32 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 12)) + 408)) + 60));
              if ( v32 == 5 || (v33 = 0, (unsigned int)(v32 - 8) < 2) )
                v33 = 1;
              if ( v33 || (v34 = 0, ((*SF_DRAFT_PTR(_DWORD, r_u32((v4 + 16))) >> 1) & 1) != 0) )
                v34 = 1;
              if ( !v34 || (v35 = *SF_DRAFT_PTR(_DWORD, (v4 + 16)), *SF_DRAFT_PTR(_BYTE, (v35 + 8)) == 9) || (*SF_DRAFT_PTR(_DWORD, v35) & 0x400) != 0 )
              {
                if ( !*v5 && !v5[1] && !v5[2] )
                  goto LABEL_89;
              }
            }
LABEL_87:
            v8[11] = v40;
            v8[12] = v41;
            v8[13] = v42;
            v8[14] = (sf_draft_unbound_stack_field(0x800382B0u, 0x2Cu), 0u);
            goto LABEL_89;
          }
        }
        else if ( v9 )
        {
          goto LABEL_87;
        }
LABEL_88:
        v8[11] = 0;
        v8[12] = 0;
        v8[13] = 0;
      }
    }
  }
LABEL_89:
  if ( native_a1[87] == 3 )
  {
    v10 = 7;
    v8[11] = v40;
    v8[12] = v41;
    v8[13] = v42;
    v8[14] = (sf_draft_unbound_stack_field(0x800382B0u, 0x2Cu), 0u);
  }
  if ( native_a1[87] >= 2u && (v9 || sub_8001C960(2)) )
  {
    sub_8002062C(sf_draft_guest_address(&v55));
    v36 = v55 >> 1;
    if ( v55 < 0 )
      v36 = -(-v55 >> 1);
    v37 = SF_DRAFT_PTR(int, 0x80115D84u);
    v55 = v36;
    SF_DRAFT_PTR(uint8, 0x8011918Cu)[(_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668] = 0;
    v38 = SF_DRAFT_PTR(int, 0x80115D84u);
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, SF_DRAFT_PTR(uint32, 0x80119168u)) + (_DWORD)v37 + 2146335668)) = v36;
    sub_80018994(sf_draft_guest_address(v38), 1, 5, 1);
  }
  sub_8001C9C8(v10);
}

// FUNCTION_MARKER 0x8005805Cu 0x8005805c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8005805C(sint32 a1)
{
  FUNCTION_MARKER(0x8005805Cu, "SCUS_942.40");
  int v2; 
  int v3 = SF_DRAFT_GP;
  int v4; 
  char v5; 
  int v6; 
  int v7; 
  bool v8; 
  int v9; 
  int v10; 
  int v11; 
  __int16 v12; 
  int v13; 
  __int16 v14; 
  int v15; 
  int v16; 
  int v17 = SF_DRAFT_GP;
  __int16 *v18; 
  int v19; 
  int v20; 
  int v21 = SF_DRAFT_GP;
  int v22; 
  int v23; 
  _DWORD *v24; 
  char v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  unsigned int v37; 
  int v38; 
  int v39; 
  int v40; 
  int result; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 

  v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
  *SF_DRAFT_PTR(_BYTE, (a1 + 34)) = 2;
  *SF_DRAFT_PTR(_BYTE, (v2 + 67)) = -1;
  *SF_DRAFT_PTR(_BYTE, (v2 + 73)) = -1;
  *SF_DRAFT_PTR(_BYTE, (v2 + 76)) = 20;
  *SF_DRAFT_PTR(_WORD, (v2 + 44)) = 2400;
  *SF_DRAFT_PTR(_DWORD, (v2 + 32)) = 0;
  *SF_DRAFT_PTR(_BYTE, (v2 + 68)) = 0;
  *SF_DRAFT_PTR(_DWORD, (v2 + 8)) = 0;
  *SF_DRAFT_PTR(_DWORD, (v2 + 4)) = 0;
  *SF_DRAFT_PTR(_DWORD, v2) = 0;
  *SF_DRAFT_PTR(_BYTE, (v2 + 70)) = 5;
  sub_80017140(*SF_DRAFT_PTR(__int16, (a1 + 2)), sf_draft_guest_address(&v46),  (*SF_DRAFT_PTR(uint32, 0x80116798u)));
  v4 = 99;
  if ( *SF_DRAFT_PTR(_DWORD, (v3 + 2864)) )
  {
    if ( v46 >= 0 )
    {
      v4 = 98;
      if ( v46 < 99 )
        goto LABEL_6;
    }
    else
    {
      v4 = 2;
    }
  }
  v46 = v4;
LABEL_6:
  v5 = v46;
  *SF_DRAFT_PTR(_BYTE, (v2 + 72)) = 0;
  *SF_DRAFT_PTR(_WORD, (v2 + 52)) = 100;
  *SF_DRAFT_PTR(_WORD, (v2 + 54)) = 0;
  *SF_DRAFT_PTR(_BYTE, (v2 + 74)) = 0;
  *SF_DRAFT_PTR(_BYTE, (v2 + 83)) = 0;
  *SF_DRAFT_PTR(_BYTE, (v2 + 84)) = 0;
  *SF_DRAFT_PTR(_BYTE, (v2 + 71)) = v5;
  *SF_DRAFT_PTR(_BYTE, (v2 + 82)) = (*SF_DRAFT_PTR(uint16, 0x80130C88u)) >= 7;
  v6 = 76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
  v7 = *SF_DRAFT_PTR(uint8, (v6 + 36));
  v8 = v7 != 0;
  v9 = 32 * v7;
  if ( !v8 )
  {
    v10 = *SF_DRAFT_PTR(_DWORD, (v6 + 36)) & 0x3000;
    if ( v10 == 4096 )
      v11 = 19;
    else
      v11 = v10 == 0x2000 ? 0x14 : 0;
    v9 = 32 * v11;
  }
  v12 = (uint8)SF_DRAFT_PTR(uint8, 0x8010C38Du)[v9];
  *SF_DRAFT_PTR(_BYTE, (v2 + 65)) = 0;
  *SF_DRAFT_PTR(_DWORD, (v2 + 36)) = 0;
  *SF_DRAFT_PTR(_WORD, (v2 + 56)) = v12;
  v13 = *SF_DRAFT_PTR(__int16, (a1 + 2));
  if ( v13 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (*SF_DRAFT_PTR(_DWORD, (76 * v13 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) & 0x4000) != 0 )
  {
    if ( v13 != 666 && (v14 = 2400, *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v13 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 2) )
    {
      v15 = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
    }
    else
    {
      v15 = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
      v14 = 600;
    }
    *SF_DRAFT_PTR(_WORD, (v15 + 6)) = v14;
  }
  v16 = *SF_DRAFT_PTR(_DWORD, (v2 + 32));
  *SF_DRAFT_PTR(_BYTE, (v2 + 69)) = 0;
  *SF_DRAFT_PTR(_WORD, (v2 + 48)) = 0;
  *SF_DRAFT_PTR(_BYTE, (v2 + 66)) = 0;
  *SF_DRAFT_PTR(_DWORD, (v2 + 32)) = v16 | 0x800;
  sub_800658F4(a1);
  v18 = SF_DRAFT_PTR(__int16, r_u32((v17 + 2864)));
  v43 = *v18;
  v44 = v18[1];
  v45 = v18[2];
  v19 = (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
  *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 24)) = v43;
  *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + v19 + 28)) = -v44;
  *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + v19 + 32)) = v45;
  v20 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12));
  if ( *SF_DRAFT_PTR(_DWORD, (v20 + 32)) )
  {
    sub_800DC8AC(v20,  0, sf_draft_guest_address(&v43));
  }
  else
  {
    *SF_DRAFT_PTR(_DWORD, (v20 + 20)) = v43;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 24)) = -v44;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 28)) = v45;
  }
  sub_800C777C(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)));
  v22 = *SF_DRAFT_PTR(_DWORD, (v21 + 2864));
  *SF_DRAFT_PTR(_WORD, (v2 + 50)) = v44;
  *SF_DRAFT_PTR(_BYTE, (v2 + 75)) = *SF_DRAFT_PTR(_BYTE, (v22 + 6)) >> 4;
  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 11)) &= ~0x20u;
  v23 = *SF_DRAFT_PTR(__int16, (a1 + 2));
  v24 = SF_DRAFT_PTR(_DWORD, (76 * v23 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
  if ( (v24[9] & 0x8000) != 0 && (v23 == 666 || *SF_DRAFT_PTR(_WORD, (20 * *v24 + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 92) )
    v25 = *SF_DRAFT_PTR(_BYTE, (a1 + 35)) | 2;
  else
    v25 = *SF_DRAFT_PTR(_BYTE, (a1 + 35)) & 0xFD;
  *SF_DRAFT_PTR(_BYTE, (a1 + 35)) = v25;
  *SF_DRAFT_PTR(_BYTE, (v2 + 80)) = sub_800EC8F4() | 0xC0;
  v26 = *SF_DRAFT_PTR(__int16, (a1 + 2));
  if ( v26 == 666 || *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v26 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 60 )
  {
    v27 = 76 * v26 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    v28 = *SF_DRAFT_PTR(uint8, (v27 + 36));
    v8 = v28 != 0;
    v29 = 32 * v28;
    if ( !v8 )
    {
      v30 = *SF_DRAFT_PTR(_DWORD, (v27 + 36)) & 0x3000;
      if ( v30 == 4096 )
        v29 = 608;
      else
        v29 = v30 == 0x2000 ? 0x280 : 0;
    }
    sub_80023214(a1, (*SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C390u))) + v29)) >> 3) & 7);
  }
  *SF_DRAFT_PTR(_DWORD, (v2 + 60)) = 0;
  v31 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
  if ( v31 >= 0 )
  {
    v32 = *SF_DRAFT_PTR(_DWORD, (76 * v31 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    if ( v32 )
    {
      v33 = *SF_DRAFT_PTR(__int16, (v32 + 2));
      if ( v33 == 666 )
        v34 = 666;
      else
        v34 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v33 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
      if ( v34 == 46 )
      {
        v35 = *SF_DRAFT_PTR(_DWORD, (v2 + 32));
        *SF_DRAFT_PTR(_BYTE, (v2 + 71)) = 0;
        *SF_DRAFT_PTR(_BYTE, (v2 + 82)) = 12;
        v36 = v35 | 8;
LABEL_49:
        *SF_DRAFT_PTR(_DWORD, (v2 + 32)) = v36;
        goto LABEL_50;
      }
      if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 71)) != 2 && (v34 == 55 || v34 == 44 || v34 == 61 || v34 == 33) )
      {
        v36 = *SF_DRAFT_PTR(_DWORD, (v2 + 32)) | 0x1000000;
        goto LABEL_49;
      }
    }
  }
LABEL_50:
  v37 = *SF_DRAFT_PTR(uint8, (v2 + 71));
  if ( v37 >= 2 )
  {
    if ( v37 == 3 )
    {
      *SF_DRAFT_PTR(_BYTE, (v2 + 71)) = 90;
      sub_80017FE4(*SF_DRAFT_PTR(_WORD, (a1 + 2)));
    }
    if ( *SF_DRAFT_PTR(_BYTE, (v2 + 71)) == 4 )
    {
      *SF_DRAFT_PTR(_BYTE, (v2 + 71)) = 91;
      sub_80017FF0(*SF_DRAFT_PTR(_WORD, (a1 + 2)));
    }
    v39 = (*SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) & 0x300) >> 8;
    if ( v39 >= 2 )
      sub_80059FCC(a1, v39 - 1, 1, 0);
  }
  else
  {
    v38 = *SF_DRAFT_PTR(_DWORD, (v2 + 32));
    *SF_DRAFT_PTR(_BYTE, (v2 + 71)) += 98;
    *SF_DRAFT_PTR(_DWORD, (v2 + 32)) = v38 | 1;
    sub_80059FCC(a1, 2, 1, 0);
    if ( (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 71)) & 1) == 0 && !(*SF_DRAFT_PTR(uint16, 0x80130C88u)) && (*SF_DRAFT_PTR(_DWORD, (v2 + 32)) & 8) == 0 )
      *SF_DRAFT_PTR(_BYTE, (v2 + 82)) = 2;
  }
  if ( (unsigned int)(uint16)(*SF_DRAFT_PTR(uint16, 0x80130C88u)) - 11 < 2 )
  {
    v40 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    result = 4 * v40;
    if ( v40 == 666 )
      return result;
    if ( *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v40 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 92 )
      *SF_DRAFT_PTR(_BYTE, (v2 + 82)) = 10;
  }
  v42 = *SF_DRAFT_PTR(__int16, (a1 + 2));
  result = 4 * v42;
  if ( v42 != 666 )
  {
    result = 11;
    if ( *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v42 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 101 )
    {
      *SF_DRAFT_PTR(_BYTE, (v2 + 82)) = 11;
      result = 13;
      if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) != 13 )
      {
        result = *SF_DRAFT_PTR(_DWORD, (v2 + 32)) | 0x28000000;
        *SF_DRAFT_PTR(_DWORD, (v2 + 32)) = result;
      }
    }
  }
  return result;
}

// FUNCTION_MARKER 0x800362C4u 0x800362c4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800362C4(uint32 a1)
{
  _DWORD * native_a1 = SF_DRAFT_PTR(_DWORD, a1);
  FUNCTION_MARKER(0x800362C4u, "SCUS_942.40");
  int v2; 
  int v3; 
  _DWORD *v4; 
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
  bool v17; 
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
  int v31; 
  bool v32; 
  BOOL v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  uint32 rotation_matrix[8]; 
  int v66; 

  v42 = SF_DRAFT_PTR(uint32, 0x80011440u)[4];
  v43 = SF_DRAFT_PTR(uint32, 0x80011440u)[5];
  v44 = SF_DRAFT_PTR(uint32, 0x80011440u)[6];
  v45 = SF_DRAFT_PTR(uint32, 0x80011440u)[7];
  v2 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x801169D4u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  if ( !v2 )
    return 0;
  v3 = *SF_DRAFT_PTR(_DWORD, (v2 + 12));
  if ( !v3 )
    return 0;
  v4 = SF_DRAFT_PTR(_DWORD, r_u32((v3 + 408)));
  if ( !v4 )
    return 0;
  v6 = *SF_DRAFT_PTR(_DWORD, (v3 + 208));
  v7 = v4[15];
  if ( v6 < 0 )
    v8 = -(-v6 >> 12);
  else
    v8 = v6 >> 12;
  v56 = v8;
  v9 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 212));
  if ( v9 < 0 )
    v10 = -(-v9 >> 12);
  else
    v10 = v9 >> 12;
  v57 = v10;
  v11 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 216));
  if ( v11 < 0 )
    v12 = -(-v11 >> 12);
  else
    v12 = v11 >> 12;
  v58 = v12;
  v53 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 192)) + v56;
  if ( v53 < 2049 )
  {
    v13 = v53 + 4096;
    if ( v53 >= -2048 )
      goto LABEL_18;
  }
  else
  {
    v13 = v53 - 4096;
  }
  v53 = v13;
LABEL_18:
  v54 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 196)) + v57;
  if ( v54 < 2049 )
  {
    v14 = v54 + 4096;
    if ( v54 >= -2048 )
      goto LABEL_22;
  }
  else
  {
    v14 = v54 - 4096;
  }
  v54 = v14;
LABEL_22:
  v55 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 200)) + v58;
  if ( v55 >= 2049 )
  {
    v15 = v55 - 4096;
LABEL_25:
    v55 = v15;
    goto LABEL_26;
  }
  v15 = v55 + 4096;
  if ( v55 < -2048 )
    goto LABEL_25;
LABEL_26:
  LOWORD(v56) = -(__int16)v53;
  HIWORD(v56) = v54;
  LOWORD(v57) = -(__int16)v55;
  sub_800EBE94(sf_draft_guest_address(&v56), sf_draft_guest_address(rotation_matrix));
  ((sint16 *)rotation_matrix)[1] = -((sint16 *)rotation_matrix)[1];
  v16 = -((sint16 *)rotation_matrix)[5];
  ((sint16 *)rotation_matrix)[5] = -((sint16 *)rotation_matrix)[5];
  ((sint16 *)rotation_matrix)[3] = -((sint16 *)rotation_matrix)[3];
  ((sint16 *)rotation_matrix)[7] = -((sint16 *)rotation_matrix)[7];
  v46 = ((sint16 *)rotation_matrix)[2];
  v47 = (__int16)v16;
  v48 = ((sint16 *)rotation_matrix)[8];
  v17 = sub_8001C960(0);
  if ( (uint8)sub_80035524() )
  {
    v42 = 0;
    v43 = 0;
    v44 = 0;
    sub_8004A18C(v2, sf_draft_guest_address(&v42),  5);
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v18 = (sf_draft_unbound_stack_field(0x800362C4u, 0x3Cu), 0u);
    v4[2] = 0;
    v4[3] = 0;
    v4[4] = 0;
    v4[5] = v18;
    sub_80028F3C(*SF_DRAFT_PTR(__int16, (v2 + 2)), 4);
    return 1;
  }
  v19 = native_a1[30];
  v20 = native_a1[31];
  v21 = native_a1[32];
  v49 = native_a1[29];
  v50 = v19;
  v51 = v20;
  v52 = v21;
  if ( native_a1[29] || native_a1[30] || (v22 = 0, native_a1[31]) )
  {
    sub_80035F4C( sf_draft_guest_address(native_a1 + 29), sf_draft_guest_address(&v42),  1u);
    v22 = native_a1[33];
  }
  else
  {
    v42 = 0;
    v43 = 0;
    v44 = 0;
  }
  v23 = native_a1[90];
  if ( v23 == 3 || v23 == 4 && !v49 && !v50 && !v51 )
  {
    if ( v7 == 5 || (v22 = 4096, (unsigned int)(v7 - 8) < 2) )
    {
      v22 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
    }
    else
    {
      v42 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 4));
      v43 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 10));
      v24 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 16));
      v43 = -v43;
      v44 = v24;
      sub_80035F4C(sf_draft_guest_address(&v49), sf_draft_guest_address(&v42),  0);
    }
    v25 = v7;
    goto LABEL_74;
  }
  v25 = 5;
  if ( !sub_8001C960(8) && (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 416))) != 1 || *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v2 + 16)) + 8)) == 8) )
  {
    v26 = *SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (v2 + 16)) + 8));
    if ( v26 == 4 || v26 == 10 || v26 == 12 || !v42 && !v43 && !v44 )
      goto LABEL_73;
    v27 = *SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (v2 + 16)) + 8));
    if ( v27 == 8 )
    {
      v28 = v51;
      if ( v51 < 0 )
        v28 = -v51;
      v25 = 5;
      if ( v28 < 3850 )
        v25 = 6;
      goto LABEL_74;
    }
    if ( (unsigned int)*SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (v2 + 16)) + 8)) - 1 < 2 || (v25 = 5, v27 == 9) )
    {
      v29 = sub_800C6D4C(v46, v42);
      v30 = sub_800C6D4C(v47, v43);
      v31 = v29 + v30 + sub_800C6D4C(v48, v44);
      v32 = native_a1[87] < 2u;
      v66 = v31;
      if ( !v32 )
        v66 = -v31;
      if ( v7 != 5 && (unsigned int)(v7 - 8) >= 2 )
        goto LABEL_67;
      v33 = v66 < 3548;
      if ( v17 )
      {
        if ( native_a1[89] )
        {
LABEL_67:
          if ( native_a1[86] >= 2u )
          {
            if ( native_a1[87] < 2u )
            {
              v25 = 5;
              goto LABEL_74;
            }
LABEL_71:
            v25 = 7;
            if ( native_a1[87] >= 2u )
              v25 = 6;
            goto LABEL_74;
          }
          if ( native_a1[87] < 2u )
            goto LABEL_71;
LABEL_73:
          v25 = 5;
          goto LABEL_74;
        }
        v33 = (unsigned int)(v51 + 2633) < 0x1493;
      }
      v25 = 5;
      if ( !v33 )
        goto LABEL_67;
    }
  }
LABEL_74:
  if ( v25 == 6 && native_a1[87] < 2u
    || (v34 = v2, v25 == 7)
    && ((v35 = *SF_DRAFT_PTR(_DWORD, (v2 + 16)), *SF_DRAFT_PTR(_BYTE, (v35 + 8)) == 2) || (v36 = *SF_DRAFT_PTR(_DWORD, v35) & 0x100000, v34 = v2, v36)) )
  {
    v34 = v2;
    if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 404)) & 8) != 0 )
      v25 = 5;
  }
  sub_8004A18C(v34, sf_draft_guest_address(&v42),  v25);
  sub_80028F3C(*SF_DRAFT_PTR(__int16, (v2 + 2)), 4);
  v4[10] = v22;
  v37 = v50;
  v38 = v51;
  v39 = v52;
  v4[2] = v49;
  v4[3] = v37;
  v4[4] = v38;
  v4[5] = v39;
  if ( v25 == 7 )
  {
    native_a1[95] = 10;
  }
  else
  {
    v40 = native_a1[95];
    v32 = v40 <= 0;
    v41 = v40 - 1;
    if ( v32 )
      native_a1[95] = 0;
    else
      native_a1[95] = v41;
  }
  return 1;
}

// FUNCTION_MARKER 0x80025DFCu 0x80025dfc
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_80025DFC(sint32 a1, sint32 a2, sint32 a3)
{
  FUNCTION_MARKER(0x80025DFCu, "SCUS_942.40");
  int v4; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12 = SF_DRAFT_GP;
  unsigned int v13; 
  int v14; 
  int v15; 
  int v16 = SF_DRAFT_GP;
  int v17; 
  int v18; 
  unsigned int v19; 
  int v20; 
  int v21; 
  int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  bool v26; 
  int v27 = SF_DRAFT_GP;
  int v28; 
  int v29; 
  int *v30; 
  int v31; 
  unsigned int v32; 
  int v33 = SF_DRAFT_GP;
  uint8 v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 

  v4 = *SF_DRAFT_PTR(__int16, (a1 + 2));
  if ( v4 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    v7 = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
  }
  else
  {
    v6 = 76 * v4 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    v7 = *SF_DRAFT_PTR(uint8, (v6 + 36));
    if ( !*SF_DRAFT_PTR(_BYTE, (v6 + 36)) )
    {
      v8 = *SF_DRAFT_PTR(_DWORD, (v6 + 36)) & 0x3000;
      if ( v8 == 4096 )
        v7 = 19;
      else
        v7 = v8 == 0x2000 ? 0x14 : 0;
    }
  }
  v9 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
  v10 = v7;
  if ( (*SF_DRAFT_PTR(_DWORD, (v9 + 4)) & 0x10) == 0 )
  {
    if ( (*SF_DRAFT_PTR(_DWORD, v9) & 0x1080000) != 0 )
      goto LABEL_12;
    if ( *SF_DRAFT_PTR(_BYTE, (v9 + 8)) == 8 )
    {
      if ( (*SF_DRAFT_PTR(_DWORD, v9) & 0x200000) == 0 || (v10 = v7, (unsigned int)(v7 - 19) < 2) )
      {
LABEL_12:
        v11 = a1;
        if ( a2 != 8 )
          return;
        goto LABEL_87;
      }
    }
    else
    {
      v10 = v7;
    }
  }
  sub_800469B8(v10, sf_draft_guest_address(&v38), sf_draft_guest_address(&v39));
  if ( a2 != 7 )
  {
    if ( a2 != 8 )
      return;
    (*SF_DRAFT_PTR(uint8, 0x80127D98u)) = 1;
    if ( v7 == 21 )
    {
      if ( (*SF_DRAFT_PTR(uint32, 0x8012F9B8u)) )
      {
        sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 44);
        v34 = 0;
      }
      else
      {
        sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 43);
        v34 = 1;
      }
      sub_80024190(v34);
    }
    if ( v7 == 14 )
    {
      v11 = a1;
LABEL_87:
      sub_80046A74(v11, 0);
      return;
    }
    if ( v7 == 18 )
    {
      sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 13);
      return;
    }
    v35 = *SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16)));
    if ( (v35 & 0x1001400) != 0 )
      goto LABEL_102;
    v36 = 8 * v7;
    if ( (unsigned int)(v7 - 19) < 2 )
    {
      v37 = *SF_DRAFT_PTR(_DWORD, (v12 + 3440));
      v36 = 8 * v7;
      if ( *SF_DRAFT_PTR(_BYTE, v37) )
      {
        if ( v38 )
        {
          v36 = 8 * v7;
          if ( (v35 & 0x800) == 0 )
          {
            *SF_DRAFT_PTR(_DWORD, (v37 + 4)) = v7;
            sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 59);
            sub_80046584(a1);
            return;
          }
        }
        else
        {
          v36 = 8 * v7;
        }
      }
    }
    if ( (((unsigned int)SF_DRAFT_PTR(uint32, 0x8010C390u)[v36] >> 8) & 7) != 1 || !v38 || (*SF_DRAFT_PTR(uint32, 0x80127D9Cu)) >= 3 )
    {
LABEL_102:
      (*SF_DRAFT_PTR(uint32, 0x80127D9Cu)) = 0;
      return;
    }
    (*SF_DRAFT_PTR(uint32, 0x80127D9Cu)) += 100;
LABEL_101:
    sub_80015364(7u, 4u, *SF_DRAFT_PTR(__int16, (a1 + 2)), *SF_DRAFT_PTR(__int16, (a1 + 2)), 0, 0, 0, 0);
    return;
  }
  if ( (unsigned int)(v7 - 19) < 2 )
  {
    if ( v38 && (*SF_DRAFT_PTR(uint8, 0x80127D98u)) && *SF_DRAFT_PTR(_BYTE, r_u32((v12 + 3440))) )
    {
      (*SF_DRAFT_PTR(uint8, 0x80127D98u)) = 0;
      (*SF_DRAFT_PTR(uint32, 0x80127DA0u)) = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
    }
    if ( *SF_DRAFT_PTR(_DWORD, (v12 + 3280)) )
      *SF_DRAFT_PTR(_DWORD, (v12 + 3280)) = 0;
    return;
  }
  if ( v7 == 21 )
    return;
  v13 = v7 - 24;
  if ( v7 == 18 )
  {
    v13 = -6;
    if ( (*SF_DRAFT_PTR(uint32, 0x80115E80u)) != 4 )
    {
      sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 61);
      return;
    }
  }
  if ( v13 < 2 )
  {
    sub_80090490();
    return;
  }
  if ( v7 == 23 )
  {
    sub_8008D634();
    return;
  }
  if ( !(*SF_DRAFT_PTR(uint32, 0x80115E80u)) )
  {
    v14 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
    if ( (*SF_DRAFT_PTR(_DWORD, v14) & 0x100) == 0 )
    {
      sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 43);
      v15 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
      *SF_DRAFT_PTR(_BYTE, (v16 + 3628)) = 1;
      v17 = *SF_DRAFT_PTR(uint8, (v15 + 8));
      goto LABEL_37;
    }
    if ( (*SF_DRAFT_PTR(_DWORD, v14) & 0x120) == 256 && (*SF_DRAFT_PTR(_DWORD, (v14 + 4)) & 0x10) == 0 )
    {
      v17 = *SF_DRAFT_PTR(uint8, (v14 + 8));
LABEL_37:
      if ( v17 == 8 )
        sub_80025D04(*SF_DRAFT_PTR(_WORD, (a1 + 2)));
      return;
    }
  }
  v18 = 8 * v7;
  if ( v7 == 14 )
  {
    if ( (*SF_DRAFT_PTR(uint16, 0x80116AE6u)) != 3 )
    {
      sub_80046A74(a1, 1);
      return;
    }
    v18 = 112;
  }
  v19 = SF_DRAFT_PTR(uint32, 0x8010C390u)[v18];
  if ( ((v19 >> 8) & 7) - 1 >= 2 )
    goto LABEL_49;
  if ( ((v19 >> 3) & 7) == 1 )
  {
    v20 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    v21 = 59;
LABEL_48:
    sub_80028F3C(v20, v21);
LABEL_49:
    v22 = 8 * v7;
    goto LABEL_50;
  }
  v22 = 8 * v7;
  if ( ((v19 >> 3) & 7) == 2 )
  {
    v20 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    v21 = 60;
    goto LABEL_48;
  }
LABEL_50:
  if ( sub_80016AE0((*SF_DRAFT_PTR(uint32, 0x80127DA0u)), ((unsigned int)SF_DRAFT_PTR(uint32, 0x8010C398u)[v22] >> 26) & 0x1F) )
  {
    if ( (v23 = ((unsigned int)SF_DRAFT_PTR(uint32, 0x8010C390u)[v22] >> 8) & 7, v24 = v23 - 1, !v23) && (v24 = -1, (*SF_DRAFT_PTR(uint8, 0x80127D98u)))
      || v24 < 2 )
    {
      (*SF_DRAFT_PTR(uint8, 0x80127D98u)) = 0;
      (*SF_DRAFT_PTR(uint32, 0x80127DA0u)) = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
      if ( v38 )
      {
        ++(*SF_DRAFT_PTR(uint32, 0x80127D9Cu));
        sub_80046584(a1);
        sub_800CCC8C(*SF_DRAFT_PTR(_DWORD, (a1 + 8)),  3, SF_DRAFT_PTR(uint32, 0x8010C3C0u)[8 * (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) - 8]);
        if ( (*SF_DRAFT_PTR(uint32, 0x80115E80u)) )
        {
          sub_80030684();
          v25 = v7 - 19;
        }
        else
        {
          v26 = sub_8003352C(a1, 1) == 0;
          v25 = v7 - 19;
          if ( v26 )
          {
            *SF_DRAFT_PTR(_DWORD, (v27 + 3280)) = 0;
          }
          else
          {
            v28 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, r_u32((a1 + 20))) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
            if ( (*SF_DRAFT_PTR(uint32, 0x80116B0Cu)) )
              sf_draft_call(r_u32(0x80116B0Cu), 2u, (const uint32[]){(uint32)(sint32)r_s16(v28 + 2u), 0u});
            v29 = *SF_DRAFT_PTR(_DWORD, (v28 + 28));
            v30 = &v40;
            if ( v29 )
            {
              v43 = *SF_DRAFT_PTR(__int16, (v29 + 44));
            }
            else
            {
              v40 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v28 + 8)) + 12)) + 20));
              v41 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v28 + 8)) + 12)) + 24));
              v31 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v28 + 8)) + 12)) + 28));
              v41 = -v41;
              v42 = v31;
              sub_800E0364(*SF_DRAFT_PTR(_DWORD, (a1 + 12)), sf_draft_guest_address(&v40), sf_draft_guest_address(&v43));
            }
            v31 = (sint16)sub_80046A3C(v7);
            if ( v43 >= 961 )
              LOWORD(v32) = HIWORD(SF_DRAFT_PTR(uint32, 0x8010C398u)[8 * v7]);
            else
              v32 = (unsigned int)SF_DRAFT_PTR(uint32, 0x8010C398u)[8 * v7] >> 6;
            sub_80069CB0(*SF_DRAFT_PTR(sint16, a1 + 2), *SF_DRAFT_PTR(sint16, a1 + 2), *SF_DRAFT_PTR(sint16, v28 + 2), (sint16)(v32 & 0x3FF), (uint16)v31);
            ++*SF_DRAFT_PTR(_DWORD, (v33 + 3280));
            v25 = v7 - 19;
          }
        }
        if ( v25 >= 2 )
          sub_80046550((*SF_DRAFT_PTR(uint32, 0x80116AB0u)), v7);
      }
      else if ( (*SF_DRAFT_PTR(uint32, 0x80127D9Cu)) < 101 )
      {
        if ( !v39 || *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 8)) == 8 )
          sub_8006BC98(1, 18, 0, 0);
        else
          sub_80046584(a1);
      }
      else
      {
        (*SF_DRAFT_PTR(uint32, 0x80127D9Cu)) = 0;
      }
    }
  }
  if ( (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80127D9Cu)) - 101) < 2 )
    goto LABEL_101;
  if ( (*SF_DRAFT_PTR(uint32, 0x80127D9Cu)) >= 103 )
    (*SF_DRAFT_PTR(uint32, 0x80127D9Cu)) = 0;
}

// FUNCTION_MARKER 0x8014D7ACu 0x8014d7ac
sint32 sub_8014D7AC(sint32 a1)
{
  FUNCTION_MARKER(0x8014D7ACu, "INIT.OVL");
  int v2; 
  int v3; 
  int v4; 
  unsigned int *v5; 
  unsigned int v6; 
  int v7; 
  unsigned int *v8; 
  int v9; 
  unsigned int v10; 
  __int16 v11; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  char v19[32]; 
  char v20[32]; 
  char v21[80]; 
  int v22; 
  uint32 v23; 
  int v24[2]; 
  int v25[8]; 

  v22 = 0;
  sf_draft_call(0x8001FCC4u, 0u, NULL);
  sf_draft_call(0x80084698u, 1u, (const uint32[]){(uint32)(1)});
  sf_draft_call(0x8003B320u, 0u, NULL);
  sf_draft_call(0x800CAED0u, 2u, (const uint32[]){(uint32)(-2146248820), (uint32)(400)});
  sf_draft_call(0x80016020u, 1u, (const uint32[]){(uint32)(1)});
  sf_draft_call(0x800CA750u, 0u, NULL);
  v2 = (*SF_DRAFT_PTR(sint16, 0x80130C88u));
  v3 = SF_DRAFT_PTR(uint32, 0x80154648u)[v2];
  (*SF_DRAFT_PTR(uint32, 0x80115C80u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x801168D4u)) = v3;
  if ( a1 == 1 )
  {
    sf_draft_call(0x8014D270u, 1u, (const uint32[]){(uint32)(0x8014C290u)});
    sf_draft_call(0x8014D270u, 1u, (const uint32[]){(uint32)(0x8014C2A4u)});
    (*SF_DRAFT_PTR(uint32, 0x80116900u)) = -2146860292;
    (*SF_DRAFT_PTR(uint32, 0x80116910u)) = -2146342656;
    sf_draft_call(0x801539A0u, 1u, (const uint32[]){(uint32)(1)});
    sf_draft_call(0x800BEB64u, 1u, (const uint32[]){(uint32)(1)});
    sf_draft_call(0x8006B618u, 0u, NULL);
    (*SF_DRAFT_PTR(uint32, 0x80115CD0u)) = sf_draft_call(0x800DE4F8u, 0u, NULL);
  }
  else if ( a1 == 3 )
  {
    if ( !(*SF_DRAFT_PTR(uint32, 0x80115CD4u)) )
      sf_draft_call(0x800DDC34u, 4u, (const uint32[]){(uint32)(1), (uint32)(0), (uint32)(0x8014C284u), (uint32)(1133)});
    sf_draft_call(0x8014C834u, 0u, NULL);
    sf_draft_call(0x8006BC98u, 4u, (const uint32[]){(uint32)(3), (uint32)(0), (uint32)(0), (uint32)(0)});
    sf_draft_call(0x800DE4ECu, 1u, (const uint32[]){(uint32)((*SF_DRAFT_PTR(uint32, 0x80115CD4u)))});
    sf_draft_call(0x80082358u, 0u, NULL);
    (*SF_DRAFT_PTR(uint8, 0x80116962u)) = 1;
  }
  else
  {
    sub_800EC924(sf_draft_guest_address(v21), sf_draft_guest_address("\\FOG\\%s.FOG;1"), r_u32(0x80102D1Cu + (uint32)v2 * 4u));
    sf_draft_call(0x800DEC7Cu, 1u, (const uint32[]){(uint32)(sf_draft_guest_address(v21))});
    sub_800EC924(sf_draft_guest_address(v21), sf_draft_guest_address("%s.OVL"), SF_DRAFT_PTR(uint32, 0x801545F4u)[(*SF_DRAFT_PTR(sint16, 0x80130C88u))]);
    sf_draft_call(0x80015A00u, 3u, (const uint32[]){(uint32)(sf_draft_guest_address(v21)), (uint32)(-2146146768), (uint32)(1)});
    sf_draft_call(0x8014D5A0u, 0u, NULL);
    sf_draft_call(0x800DE4ECu, 1u, (const uint32[]){(uint32)((*SF_DRAFT_PTR(uint32, 0x80115CD0u)))});
    sf_draft_call(0x8014D744u, 1u, (const uint32[]){(uint32)((*SF_DRAFT_PTR(uint32, 0x80115CD0u)))});
    sub_800EC924(sf_draft_guest_address(v19), sf_draft_guest_address("\\%s\\SLF.RFF;1"), r_u32(0x80102D1Cu + (uint32)(*SF_DRAFT_PTR(sint16, 0x80130C88u)) * 4u));
    sf_draft_call(0x8006B2D4u, 4u, (const uint32[]){(uint32)(sf_draft_guest_address(v19)), (uint32)(0), (uint32)(sf_draft_guest_address(v20)), (uint32)(0)});
    sf_draft_call(0x8006BC98u, 4u, (const uint32[]){(uint32)(3), (uint32)(0), (uint32)(0), (uint32)(0)});
    sf_draft_call(0x800D8930u, 3u, (const uint32[]){(uint32)(0x8014D3A8u), (uint32)(3), (uint32)(sf_draft_guest_address(&v22))});
    sf_draft_call(0x80152D6Cu, 0u, NULL);
    sub_800EC924(sf_draft_guest_address(v19), sf_draft_guest_address("\\%s\\VLF.RFF;1"), r_u32(0x80102D1Cu + (uint32)(*SF_DRAFT_PTR(sint16, 0x80130C88u)) * 4u));
    if ( sf_draft_call(0x800DFB74u, 3u, (const uint32[]){(uint32)(sf_draft_guest_address(v19)), (uint32)(0), (uint32)(sf_draft_guest_address(&v23))}) )
      sf_draft_call(0x800DDC34u, 4u, (const uint32[]){(uint32)(1), (uint32)(0), (uint32)(0x8014C284u), (uint32)(1224)});
    v4 = 0;
    v5 = SF_DRAFT_PTR(uint32, r_u32(v23));
    v6 = r_u32(r_u32(v23));
    do
    {
      v24[0] = r_u32(0x8014C2F0u);
      v24[1] = r_u32(0x8014C2F4u);
      if ( (v6 & 1) != 0 )
      {
        v7 = v4;
        if ( (v4 & 0xFu) < 6 )
          v7 = v4 + 6;
        LOWORD(v24[0]) = (v7 & 0xF) << 6;
        if ( v7 < 16 )
          HIWORD(v24[0]) = 0;
        else
          HIWORD(v24[0]) = 256;
        sf_draft_call(0x800E52ACu, 2u, (const uint32[]){(uint32)(sf_draft_guest_address(v24)), (uint32)(sf_draft_guest_address(v5))});
        sf_draft_call(0x800E5000u, 1u, (const uint32[]){(uint32)(0)});
        v5 += 0x2000;
        (*SF_DRAFT_PTR(uint8, v4 - 2146272088)) = 1;
      }
      ++v4;
      v6 >>= 1;
    }
    while ( v4 < 32 );
    v25[0] = r_u32(0x8014C2F8u);
    v25[1] = r_u32(0x8014C2FCu);
    sf_draft_call(0x800E52ACu, 2u, (const uint32[]){(uint32)(sf_draft_guest_address(v25)), (uint32)(sf_draft_guest_address(v5))});
    sf_draft_call(0x800E5000u, 1u, (const uint32[]){(uint32)(0)});
    sf_draft_call(0x800DFC64u, 1u, (const uint32[]){(uint32)(sf_draft_guest_address(&v23))});
    sub_800EC924(sf_draft_guest_address(v19), sf_draft_guest_address("\\%s\\DLF.RFF;1"), r_u32(0x80102D1Cu + (uint32)(*SF_DRAFT_PTR(sint16, 0x80130C88u)) * 4u));
    if ( sf_draft_call(0x800DFB74u, 3u, (const uint32[]){(uint32)(sf_draft_guest_address(v19)), (uint32)(0), (uint32)(sf_draft_guest_address(&v23))}) )
      sf_draft_call(0x800DDC34u, 4u, (const uint32[]){(uint32)(1), (uint32)(0), (uint32)(0x8014C284u), (uint32)(1269)});
    v8 = SF_DRAFT_PTR(uint32, r_u32(v23));
    (*SF_DRAFT_PTR(uint32, 0x80116B94u)) = sf_draft_guest_address(v8) + v8[11];
    sf_draft_call(0x800C6E48u, 3u, (const uint32[]){(uint32)((*SF_DRAFT_PTR(uint32, 0x80116B94u))), (uint32)(sf_draft_guest_address(v8)), (uint32)(46)});
    v9 = (*SF_DRAFT_PTR(uint32, 0x80116B94u));
    (*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80116B94u)) + 48)) = sf_draft_guest_address(v8);
    v10 = v8[4];
    (*SF_DRAFT_PTR(uint32, 0x80116AF4u)) = sf_draft_guest_address(v8) + (*SF_DRAFT_PTR(uint32, v9 + 104));
    sf_draft_call(0x800C6E48u, 3u, (const uint32[]){(uint32)(-2146242232), (uint32)(sf_draft_guest_address(v8) + v10), (uint32)(512)});
    (*SF_DRAFT_PTR(uint32, 0x80116A60u)) = -2146242232;
    sf_draft_call(0x800CD808u, 2u, (const uint32[]){(uint32)((*SF_DRAFT_PTR(sint16, 0x8012F196u))), (uint32)((*SF_DRAFT_PTR(sint16, 0x8012F198u)))});
    v11 = 392;
    if ( (*SF_DRAFT_PTR(sint16, 0x80130C88u)) == 6 || (unsigned __int16)((*SF_DRAFT_PTR(sint16, 0x80130C88u)) - 11) < 2u || (*SF_DRAFT_PTR(sint16, 0x80130C88u)) == 13 )
      v11 = 456;
    sf_draft_call(0x800CD818u, 1u, (const uint32[]){(uint32)(v11)});
    (*SF_DRAFT_PTR(uint32, 0x80116958u)) = sf_draft_guest_address(v8) + *v8;
    v12 = v8[1];
    v13 = v8[2];
    (*SF_DRAFT_PTR(uint32, 0x801169C8u)) = -2146342568;
    if ( v12 != v13 )
    {
      (*SF_DRAFT_PTR(uint32, 0x80116A68u)) = sf_draft_guest_address(v8) + v12;
      (*SF_DRAFT_PTR(uint32, 0x80116AD0u)) = -2146342296;
      sf_draft_call(0x801539A0u, 1u, (const uint32[]){(uint32)(0)});
    }
    (*SF_DRAFT_PTR(uint32, 0x80115CD4u)) = (*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80116B94u)) + 48)) + r_u32((*SF_DRAFT_PTR(uint32, 0x80116B94u)));
    sf_draft_call(0x800DE4A4u, 0u, NULL);
  }
  v14 = 2047;
  if ( (*SF_DRAFT_PTR(uint16, (*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 2)) )
    v14 = (*SF_DRAFT_PTR(sint16, (*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 2));
  sf_draft_call(0x800CB5B8u, 2u, (const uint32[]){(uint32)(v14), (uint32)((*SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 1)))});
  if ( a1 != 1 )
  {
    if ( a1 == 3 )
      sf_draft_call(0x8014D744u, 1u, (const uint32[]){(uint32)((*SF_DRAFT_PTR(uint32, 0x80115CD4u)))});
    sf_draft_call(0x8014C500u, 1u, (const uint32[]){(uint32)(a1 != 3)});
    sf_draft_call(0x800DE4A4u, 1u, (const uint32[]){(uint32)((*SF_DRAFT_PTR(uint32, 0x80116B18u)))});
    sf_draft_call(0x8014D744u, 1u, (const uint32[]){(uint32)((*SF_DRAFT_PTR(uint32, 0x80116B18u)))});
    sf_draft_call(0x8004BBB0u, 0u, NULL);
    sf_draft_call(0x80150FBCu, 0u, NULL);
    sf_draft_call(0x80056588u, 0u, NULL);
    sf_draft_call(0x80032730u, 0u, NULL);
    sf_draft_call(0x80152EECu, 2u, (const uint32[]){(uint32)((*SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 11))), (uint32)(a1 != 3)});
    sf_draft_call(0x8015421Cu, 0u, NULL);
    sf_draft_call(0x80068704u, 0u, NULL);
    sf_draft_call(0x80056548u, 0u, NULL);
    sf_draft_call(0x8008BD14u, 0u, NULL);
    if ( a1 == 3 )
      sf_draft_call(0x80080580u, 0u, NULL);
    (*SF_DRAFT_PTR(uint16, 0x80116946u)) = (*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 140));
    sf_draft_call(0x80073E48u, 1u, (const uint32[]){(uint32)(0)});
    (*SF_DRAFT_PTR(uint32, 0x80116A88u)) = 0;
    sf_draft_call(0x800167ECu, 0u, NULL);
    sf_draft_call(0x8014D118u, 0u, NULL);
    sf_draft_call(0x8014CC70u, 0u, NULL);
    sf_draft_call(0x80017390u, 0u, NULL);
    sf_draft_call(0x8006E064u, 0u, NULL);
    (*SF_DRAFT_PTR(uint8, 0x80116B25u)) = 0;
    (*SF_DRAFT_PTR(uint8, 0x801168D8u)) = 0;
    sf_draft_call(0x8007E6A8u, 0u, NULL);
    sf_draft_call(0x8008BB2Cu, 0u, NULL);
    sf_draft_call(0x800201A8u, 2u, (const uint32[]){(uint32)(1), (uint32)((*SF_DRAFT_PTR(uint32, 76 * (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)))});
    sf_draft_call(0x800201F0u, 0u, NULL);
    (*SF_DRAFT_PTR(uint8, 0x80116A95u)) = 0;
    (*SF_DRAFT_PTR(uint8, 0x80116B24u)) = 0;
    (*SF_DRAFT_PTR(uint32, 0x80116B4Cu)) = -1;
    sf_draft_call(0x80015364u, 8u, (const uint32[]){(uint32)(1), (uint32)(5), (uint32)(65534), (uint32)(65534), (uint32)(0), (uint32)(0), (uint32)(0), (uint32)(0)});
  }
  if ( v22 )
  {
    sf_draft_call(0x8014D4F4u, 1u, (const uint32[]){(uint32)(100)});
    sf_draft_call(0x800D89D8u, 1u, (const uint32[]){(uint32)(v22)});
    v22 = 0;
  }
  sf_draft_call(0x80016094u, 0u, NULL);
  if ( a1 == 1 )
    goto LABEL_46;
  sf_draft_call(0x8014E0CCu, 1u, (const uint32[]){(uint32)(a1)});
  sf_draft_call(0x80016F90u, 1u, (const uint32[]){(uint32)(3)});
  if ( a1 != 3 )
  {
    if ( !(*SF_DRAFT_PTR(uint8, 0x80116AF0u)) )
    {
      sf_draft_call(0x800C8A9Cu, 3u, (const uint32[]){(uint32)(-2147388436), (uint32)(2), (uint32)(0)});
      goto LABEL_44;
    }
    goto LABEL_42;
  }
  if ( (*SF_DRAFT_PTR(uint8, 0x80116AF0u)) )
LABEL_42:
    (*SF_DRAFT_PTR(uint8, 0x80116962u)) = 1;
  sf_draft_call(0x800CA718u, 0u, NULL);
  sf_draft_call(0x800CA780u, 3u, (const uint32[]){(uint32)(-1), (uint32)(15), (uint32)(0)});
LABEL_44:
  if ( a1 == 3 )
  {
LABEL_46:
    v17 = sf_draft_call(0x800DE3FCu, 0u, NULL);
    sf_draft_call(0x800CB000u, 1u, (const uint32[]){(uint32)(v17)});
    (*SF_DRAFT_PTR(sint16, 0x8015469Cu)) = -1;
    goto LABEL_47;
  }
  v15 = (*SF_DRAFT_PTR(uint32, 0x801164B0u));
  v16 = sf_draft_call(0x800EC8A4u, 1u, (const uint32[]){(uint32)((*SF_DRAFT_PTR(uint32, 0x80116350u)))});
  sf_draft_call(0x800848D4u, 2u, (const uint32[]){(uint32)(v15), (uint32)(v16)});
  (*SF_DRAFT_PTR(sint16, 0x8015469Cu)) = sf_draft_call(0x80085E04u, 4u, (const uint32[]){(uint32)((*SF_DRAFT_PTR(uint32, 0x80116350u))), (uint32)(v15), (uint32)(170), (uint32)(98)});
  sf_draft_call(0x80086254u, 2u, (const uint32[]){(uint32)((unsigned __int16)(*SF_DRAFT_PTR(sint16, 0x8015469Cu))), (uint32)(1)});
  (*SF_DRAFT_PTR(uint32, 0x801164B0u)) = v15 + 44 * sf_draft_call(0x800862DCu, 2u, (const uint32[]){(uint32)((unsigned __int16)(*SF_DRAFT_PTR(sint16, 0x8015469Cu))), (uint32)(1)});
  sf_draft_call(0x80086E44u, 4u, (const uint32[]){(uint32)((unsigned __int16)(*SF_DRAFT_PTR(sint16, 0x8015469Cu))), (uint32)(0), (uint32)(0), (uint32)(0)});
  sf_draft_call(0x80016020u, 1u, (const uint32[]){(uint32)(8)});
LABEL_47:
  sf_draft_call(0x80044848u, 1u, (const uint32[]){(uint32)(a1 == 3)});
  return sf_draft_call(0x800C7940u, 1u, (const uint32[]){(uint32)((*SF_DRAFT_PTR(sint16, 0x80130C88u)))});
}


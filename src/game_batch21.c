#include "game_draft.h"
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_80040328();
extern uint32 sub_800404D0();
extern uint32 sub_80040548();
extern uint32 sub_800454C4();
extern sint32 sub_8008B718(uint32 output, sint16 count, sint16 item, uint8 flag, uint8 flag2);
extern uint32 sub_8008B7C8();
extern uint32 sub_8008B8B0();
extern uint32 sub_8008CB5C();


/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x8008CF8Cu 0x8008cf8c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8008CF8C(sint8 a1)
{
  FUNCTION_MARKER(0x8008CF8Cu, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int v2; 
  int v3; 
  int v5; 
  __int16 *v6; 
  int v7; 
  int v8; 
  int v9; 
  char v10; 
  int v11; 
  int v12; 
  uint8 v13; 
  int v14; 
  int v15; 
  int *v16; 
  int v17; 
  int v18; 
  __int16 v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
int v29[16]; 
  char v30[64]; 
  char v31; 
  char v32; 
  uint8 v33; 
  char v34; 

  v31 = a1;
  v2 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 24));
  v33 = 0;
  v3 = *SF_DRAFT_PTR(__int16, (v2 + 8));
  v34 = 0;
  if ( v3 <= 0 )
    return 0;
  v5 = *SF_DRAFT_PTR(_DWORD, (v1 + 3032)) - 1;
  if ( v5 >= 0 )
  {
    v6 = SF_DRAFT_PTR(short, SF_DRAFT_PTR(uint16, 0x80121738u)[4 * v5]);
    v7 = 4 * v5;
    while ( v31 )
    {
      v9 = *v6;
      if ( v9 != -1 )
      {
        v8 = *SF_DRAFT_PTR(_BYTE, r_u32((76 * v9 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52))) & 0x20;
LABEL_9:
        if ( v8 )
          goto LABEL_59;
      }
      v10 = 0;
      v11 = *v6;
      v32 = 0;
      if ( v11 == -1 )
      {
        v12 = -1;
      }
      else if ( v11 == 666 )
      {
        v12 = 666;
      }
      else
      {
        v12 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v11 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
      }
      v13 = 0;
      if ( v12 == -1 || *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (76 * *v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 34)) == 2 || v12 == 99 )
        v13 = 1;
      v14 = (uint8)SF_DRAFT_PTR(uint8, 0x8012173Bu)[v7 * 2];
      v15 = 1;
      if ( v14 != 2 )
        v15 = (uint8)SF_DRAFT_PTR(uint8, 0x8012173Bu)[v7 * 2];
      if ( v15 )
      {
        v16 = SF_DRAFT_PTR(uint32, 0x80115FBCu);
        v17 = v15;
        if ( ((unsigned int)SF_DRAFT_PTR(uint32, 0x80115FBCu) & 3) != 0 )
        {
          v17 = v15 + 8 * ((unsigned int)SF_DRAFT_PTR(uint32, 0x80115FBCu) & 3);
          v16 = SF_DRAFT_PTR(int, ((unsigned int)SF_DRAFT_PTR(uint32, 0x80115FBCu) & 0xFFFFFFFC));
        }
        if ( (v16[v17 >> 5] & (1 << (v17 & 0x1F))) != 0 )
        {
          if ( sub_800454C4(v15) )
          {
            sub_8008B7C8(sf_draft_guest_address(v30), SF_DRAFT_PTR(uint16, 0x8010C39Cu)[16 * v14],  (unsigned int)(v15 - 19) >= 2,  (unsigned int)(v15 - 6) >= 2);
          }
          else
          {
            v18 = SF_DRAFT_PTR(uint16, 0x8012173Cu)[v7];
            v32 = 1;
            v19 = sub_80045554(v15, v18);
            sub_8008B718(
              sf_draft_guest_address(v30), 
              (sint16)v19, (sint16)SF_DRAFT_PTR(uint16, 0x8010C39Cu)[16 * v14], 
              (uint8)((unsigned int)(v15 - 19) >= 2), 
              (uint8)((unsigned int)(v15 - 6) >= 2));
          }
        }
        else
        {
          v32 = 1;
          sub_8004532C(v15, SF_DRAFT_PTR(uint16, 0x8012173Cu)[v7]);
          sub_8008B82C(sf_draft_guest_address(v30), SF_DRAFT_PTR(uint16, 0x8012173Cu)[v7], SF_DRAFT_PTR(uint16, 0x8010C39Cu)[16 * v14]);
          if ( v15 == 18 )
            sub_8006C620(130, 0, 1);
        }
        sub_8008CD00(sf_draft_guest_address(v30),  v14);
      }
      v20 = (uint8)SF_DRAFT_PTR(uint8, 0x8012173Au)[v7 * 2];
      if ( SF_DRAFT_PTR(uint8, 0x8012173Au)[v7 * 2] )
      {
        if ( v20 == 1 )
        {
          if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 24)) + 6)) >= 600 )
          {
            sub_8008B8B0(sf_draft_guest_address(v29));
          }
          else
          {
            v10 = 1;
            sub_8008B82C(sf_draft_guest_address(v29), 1, 24);
            if ( v13 )
            {
              v21 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 24));
              v22 = *SF_DRAFT_PTR(__int16, (v21 + 6)) + 250;
              if ( v22 >= 601 )
                LOWORD(v22) = 600;
              *SF_DRAFT_PTR(_WORD, (v21 + 6)) = v22;
            }
            else
            {
              *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 24)) + 6)) = 600;
            }
          }
          sub_8008CD00( sf_draft_guest_address((char *)v29), 26);
        }
        else if ( v20 == 2 )
        {
          if ( SF_DRAFT_PTR(uint16, 0x80121738u)[v7] == -1 )
            sub_800DDC34(1, 0, 0x80012D48u, 883);
          v23 = *SF_DRAFT_PTR(__int16, (76 * *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (76 * SF_DRAFT_PTR(uint16, 0x80121738u)[v7] + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 2))
                           + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))
                           + 48));
          v10 = 1;
          if ( v23 == -1 )
          {
            sub_800DDC34(1, 0, 0x80012D48u, 886);
            v10 = 1;
          }
          sub_8008B82C(sf_draft_guest_address(v29), 1, 25);
          sub_8004532C(23, 0);
          if ( v23 != -1 )
            sub_80015364(0x1Bu, 5u, SF_DRAFT_PTR(uint16, 0x80121738u)[v7], v23, 0, 0, 0, 0);
          sub_80085D04(sf_draft_guest_address(v29),  0);
        }
      }
      if ( v32 || (v24 = v13, v10) )
      {
        if ( v31 )
        {
          v25 = *v6;
          if ( v25 != -1 )
            sub_8008CB5C(v25);
        }
        v33 = 1;
        if ( !v13 )
          goto LABEL_59;
        v34 = 1;
        v24 = v13;
      }
      if ( v24 )
        sub_8008BFEC(v5);
LABEL_59:
      v6 -= 4;
      --v5;
      v7 -= 4;
      if ( v5 < 0 )
        goto LABEL_60;
    }
    v8 = SF_DRAFT_PTR(uint16, 0x8012173Eu)[v7];
    goto LABEL_9;
  }
LABEL_60:
  if ( v34 )
    sub_8008CF34();
  return v33;
}

// FUNCTION_MARKER 0x800D7110u 0x800d7110
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800D7110(uint32 polygon, uint32 *cursor, uint32 ordering_table, uint32 depth_flags)
{
  FUNCTION_MARKER(0x800D7110u, "SCUS_942.40");
  int v26;
  uint32 v4 = *cursor; 
  uint32 v5 = ordering_table; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
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
  int v23; 
  int v24; 
  int v25; 
int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  int v31; 
  unsigned int v32; 
  int v33; 
  unsigned int v34; 
  int v35; 
  unsigned int v36; 
  unsigned int v38; 
  int v42[4]; 
  unsigned int v43; 
  uint32 v48; 

  memset(v42, 0, sizeof(v42));
  v43 = 0;
  v48 = depth_flags - 1u;
  if ( (*SF_DRAFT_PTR(_BYTE, (polygon + 7)) & 8) != 0 )
  {
    *SF_DRAFT_PTR(_BYTE, (polygon + 3)) = 0;
    v7 = *SF_DRAFT_PTR(uint16, (polygon + 24));
    v8 = *SF_DRAFT_PTR(uint16, (polygon + 36));
    v9 = *SF_DRAFT_PTR(uint16, (polygon + 48));
    v10 = ((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 36))
         - (((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 36)) - (uint8)*SF_DRAFT_PTR(_WORD, (polygon + 12))) >> 1)) | (((v8 >> 8) - ((int)((v8 >> 8) - HIBYTE(*SF_DRAFT_PTR(uint16, (polygon + 12)))) >> 1)) << 8);
    v11 = ((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 24))
         - (((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 24)) - (uint8)*SF_DRAFT_PTR(_WORD, (polygon + 48))) >> 1)) | (((v7 >> 8) - ((int)((v7 >> 8) - (v9 >> 8)) >> 1)) << 8);
    v12 = *SF_DRAFT_PTR(_DWORD, (polygon + 12));
    v13 = *SF_DRAFT_PTR(_DWORD, (polygon + 24));
    *SF_DRAFT_PTR(_DWORD, (v4 + 12)) = *SF_DRAFT_PTR(uint16, (polygon + 12));
    *SF_DRAFT_PTR(_DWORD, (v4 + 24)) = v7;
    *SF_DRAFT_PTR(_DWORD, (v4 + 36)) = v10;
    *SF_DRAFT_PTR(_DWORD, (v4 + 48)) = v11;
    *SF_DRAFT_PTR(_DWORD, (v4 + 64)) = v12 & 0xFFFF0000 | v10;
    *SF_DRAFT_PTR(_DWORD, (v4 + 76)) = v13 & 0xFFFF0000 | v11;
    *SF_DRAFT_PTR(_DWORD, (v4 + 88)) = v8;
    *SF_DRAFT_PTR(_DWORD, (v4 + 100)) = v9;
    v14 = *SF_DRAFT_PTR(_DWORD, (polygon + 8));
    v15 = *SF_DRAFT_PTR(_DWORD, (polygon + 20));
    v16 = *SF_DRAFT_PTR(_DWORD, (polygon + 32));
    v17 = *SF_DRAFT_PTR(_DWORD, (polygon + 44));
    v18 = (__int16)v16 + (((__int16)v14 - (__int16)v16) >> 1);
    if ( v14 >> 16 != v16 >> 16 )
    {
      if ( (v14 >> 16) - (v16 >> 16) > 0 )
        LOWORD(v18) = v18 + 1;
      else
        LOWORD(v18) = v18 - 1;
    }
    v19 = (v16 >> 16) + (((v14 >> 16) - (v16 >> 16)) >> 1);
    if ( (__int16)v14 != (__int16)v16 )
    {
      if ( (__int16)v14 - (__int16)v16 > 0 )
        --v19;
      else
        ++v19;
    }
    v20 = (uint16)v18 | (v19 << 16);
    v21 = (__int16)v15 + (((__int16)v17 - (__int16)v15) >> 1);
    if ( v17 >> 16 != v15 >> 16 )
    {
      if ( (v17 >> 16) - (v15 >> 16) > 0 )
        LOWORD(v21) = v21 + 1;
      else
        LOWORD(v21) = v21 - 1;
    }
    v22 = (v15 >> 16) + (((v17 >> 16) - (v15 >> 16)) >> 1);
    if ( (__int16)v17 != (__int16)v15 )
    {
      if ( (__int16)v17 - (__int16)v15 > 0 )
        --v22;
      else
        ++v22;
    }
    v23 = (uint16)v21 | (v22 << 16);
    v24 = *SF_DRAFT_PTR(_DWORD, (polygon + 4));
    v25 = *SF_DRAFT_PTR(_DWORD, (polygon + 16));
    v26 = *SF_DRAFT_PTR(_DWORD, (polygon + 28));
    v27 = *SF_DRAFT_PTR(_DWORD, (polygon + 40));
    v28 = (((v24 & 0xFF0000) + (v26 & 0xFF0000u)) >> 1) & 0xFF0000 | v24 & 0xFF000000 | (((v24 & 0xFF00)
                                                                                        + (v26 & 0xFF00u)) >> 1) & 0xFF00 | (uint8)(((uint8)v24 + (unsigned int)(uint8)v26) >> 1);
    v29 = (((v25 & 0xFF0000) + (v27 & 0xFF0000u)) >> 1) & 0xFF0000 | v25 & 0xFF000000 | (((v25 & 0xFF00)
                                                                                        + (v27 & 0xFF00u)) >> 1) & 0xFF00 | (uint8)(((uint8)v25 + (unsigned int)(uint8)v27) >> 1);
    v30 = v24 & 0xF7FFFFFF | 0x8000000;
    *SF_DRAFT_PTR(_DWORD, (v4 + 4)) = v30;
    *SF_DRAFT_PTR(_DWORD, (v4 + 8)) = v14;
    *SF_DRAFT_PTR(_DWORD, (v4 + 16)) = v25;
    *SF_DRAFT_PTR(_DWORD, (v4 + 20)) = v15;
    *SF_DRAFT_PTR(_DWORD, (v4 + 28)) = v28;
    *SF_DRAFT_PTR(_DWORD, (v4 + 32)) = v20;
    *SF_DRAFT_PTR(_DWORD, (v4 + 40)) = v29;
    *SF_DRAFT_PTR(_DWORD, (v4 + 44)) = v23;
    v31 = ((*SF_DRAFT_PTR(uint32, 0x1F800010)) & 0xFFFC) + v5;
    *SF_DRAFT_PTR(_DWORD, v4) = *SF_DRAFT_PTR(_DWORD, v31);
    *SF_DRAFT_PTR(_BYTE, (v4 + 3)) = 12;
    *SF_DRAFT_PTR(_DWORD, v31) = v4;
    *SF_DRAFT_PTR(_BYTE, (v31 + 3)) = 0;
    v32 = v43;
    v42[v43 >> 2] = v4;
    v43 = v32 + 4;
    if ( (v30 & 0x8000000) != 0 )
    {
      v33 = v4 + 52;
    }
    else
    {
      *SF_DRAFT_PTR(_BYTE, (v4 + 3)) = 9;
      v33 = v4 + 40;
    }
    v34 = v28 & 0xF7FFFFFF | 0x8000000;
    *SF_DRAFT_PTR(_DWORD, (v33 + 4)) = v34;
    *SF_DRAFT_PTR(_DWORD, (v33 + 8)) = v20;
    *SF_DRAFT_PTR(_DWORD, (v33 + 16)) = v29;
    *SF_DRAFT_PTR(_DWORD, (v33 + 20)) = v23;
    *SF_DRAFT_PTR(_DWORD, (v33 + 28)) = v26;
    *SF_DRAFT_PTR(_DWORD, (v33 + 32)) = v16;
    *SF_DRAFT_PTR(_DWORD, (v33 + 40)) = v27;
    *SF_DRAFT_PTR(_DWORD, (v33 + 44)) = v17;
    v35 = ((*SF_DRAFT_PTR(uint32, 0x1F800014)) & 0xFFFC) + v5;
    *SF_DRAFT_PTR(_DWORD, v33) = *SF_DRAFT_PTR(_DWORD, v35);
    *SF_DRAFT_PTR(_BYTE, (v33 + 3)) = 12;
    *SF_DRAFT_PTR(_DWORD, v35) = v33;
    *SF_DRAFT_PTR(_BYTE, (v35 + 3)) = 0;
    v36 = v43;
    v42[v43 >> 2] = v33;
    v43 = v36 + 4;
    if ( (v34 & 0x8000000) == 0 )
      *SF_DRAFT_PTR(_BYTE, (v33 + 3)) = 9;
    *cursor = v33 + ((v34 & 0x08000000u) != 0u ? 52u : 40u);
    v38 = v43 >> 2;
    if ((uint8)v48)
    {
      uint32 child;
      for (child = 0; child < v38; ++child)
        sub_800D7110((uint32)v42[child], cursor, ordering_table, v48);
    }
  }
}

// FUNCTION_MARKER 0x80048F3Cu 0x80048f3c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80048F3C(sint32 a1, sint8 a2, sint8 a3)
{
  FUNCTION_MARKER(0x80048F3Cu, "SCUS_942.40");
  int v28;
  int v26;
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
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int result; 
  int v23; 
  int v24; 
  int v25; 
int v27; 
int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
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
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 

  v4 = SF_DRAFT_PTR(_DWORD, r_u32((a1 + 12)));
  v63 = (*SF_DRAFT_PTR(uint32, 0x80011F30u));
  v64 = (*SF_DRAFT_PTR(uint32, 0x80011F34u));
  v65 = (*SF_DRAFT_PTR(uint32, 0x80011F38u));
  v66 = (*SF_DRAFT_PTR(uint32, 0x80011F3Cu));
  if ( !a2 )
    goto LABEL_20;
  v6 = v4[17];
  v7 = v4[18];
  v8 = v4[19];
  v59 = v4[16];
  v60 = v6;
  v61 = v7;
  v62 = v8;
  v48 = v4[20];
  v52 = v4[21];
  v55 = v4[22];
  v57 = v4[23];
  v4[4] = v48;
  v4[5] = v52;
  v4[6] = v55;
  v4[7] = v57;
  v9 = v48;
  if ( v48 )
    goto LABEL_6;
  if ( v52 || v55 )
  {
    v9 = 0;
LABEL_6:
    v10 = v9 >> 12;
    if ( v9 < 0 )
      v10 = -(-v9 >> 12);
    v49 = v10;
    if ( v52 < 0 )
      v11 = -(-v52 >> 12);
    else
      v11 = v52 >> 12;
    if ( v55 < 0 )
      v12 = -(-v55 >> 12);
    else
      v12 = v55 >> 12;
    v59 += v49;
    v60 += v11;
    v61 += v12;
    v13 = v60;
    v14 = v61;
    v15 = v62;
    v4[16] = v59;
    v4[17] = v13;
    v4[18] = v14;
    v4[19] = v15;
  }
  if ( v59 != *v4 || v60 != v4[1] || v61 != v4[2] )
  {
    sub_800DC8AC(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)),  0, sf_draft_guest_address(&v59));
    v16 = v60;
    v17 = v61;
    v18 = v62;
    *v4 = v59;
    v4[1] = v16;
    v4[2] = v17;
    v4[3] = v18;
  }
  v19 = v64;
  v20 = v65;
  v21 = v66;
  v4[20] = v63;
  v4[21] = v19;
  v4[22] = v20;
  v4[23] = v21;
LABEL_20:
  result = 1;
  if ( !a3 )
    return result;
  v23 = v4[49];
  v24 = v4[50];
  v25 = v4[51];
  v59 = v4[48];
  v60 = v23;
  v61 = v24;
  v62 = v25;
  v50 = v4[52];
  v53 = v4[53];
  v56 = v4[54];
  v58 = v4[55];
  v4[36] = v50;
  v4[37] = v53;
  v4[38] = v56;
  v4[39] = v58;
  v26 = v50;
  if ( !v50 )
  {
    if ( !v53 && !v56 )
      goto LABEL_46;
    v26 = 0;
  }
  v27 = v26 >> 12;
  if ( v26 < 0 )
    v27 = -(-v26 >> 12);
  v51 = v27;
  if ( v53 < 0 )
    v28 = -(-v53 >> 12);
  else
    v28 = v53 >> 12;
  v54 = v28;
  if ( v56 < 0 )
    v29 = -(-v56 >> 12);
  else
    v29 = v56 >> 12;
  v30 = v59 + v51;
  v59 += v51;
  if ( v59 < 2049 )
  {
    v31 = v30 + 4096;
    if ( v30 >= -2048 )
      goto LABEL_37;
  }
  else
  {
    v31 = v30 - 4096;
  }
  v59 = v31;
LABEL_37:
  v32 = v60 + v54;
  v60 += v54;
  if ( v60 < 2049 )
  {
    v33 = v32 + 4096;
    if ( v32 >= -2048 )
      goto LABEL_41;
  }
  else
  {
    v33 = v32 - 4096;
  }
  v60 = v33;
LABEL_41:
  v34 = v61 + v29;
  v61 += v29;
  if ( v61 >= 2049 )
  {
    v35 = v34 - 4096;
LABEL_44:
    v61 = v35;
    goto LABEL_45;
  }
  v35 = v34 + 4096;
  if ( v34 < -2048 )
    goto LABEL_44;
LABEL_45:
  v36 = v60;
  v37 = v61;
  v38 = v62;
  v4[48] = v59;
  v4[49] = v36;
  v4[50] = v37;
  v4[51] = v38;
LABEL_46:
  v39 = v4[49];
  v40 = v4[50];
  v41 = v4[51];
  v59 = v4[48];
  v60 = v39;
  v61 = v40;
  v62 = v41;
  if ( v59 != v4[32] || v60 != v4[33] || v61 != v4[34] )
  {
    sub_800DBFD4(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)),  0, sf_draft_guest_address(&v59));
    v42 = v60;
    v43 = v61;
    v44 = v62;
    v4[32] = v59;
    v4[33] = v42;
    v4[34] = v43;
    v4[35] = v44;
  }
  v45 = v64;
  v46 = v65;
  v47 = v66;
  v4[52] = v63;
  v4[53] = v45;
  v4[54] = v46;
  v4[55] = v47;
  return 1;
}

// FUNCTION_MARKER 0x800405F4u 0x800405f4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800405F4(unsigned __int8 a1, sint32 a2)
{
  FUNCTION_MARKER(0x800405F4u, "SCUS_942.40");
  int v26;
  int v2 = SF_DRAFT_GP;
  int v5; 
  int v6; 
  int v7 = SF_DRAFT_GP;
  int v8; 
  int result; 
  int v10 = SF_DRAFT_GP;
  int v11 = SF_DRAFT_GP;
  int v12; 
  int v13; 
  bool v14; 
  int v15; 
  int v16 = SF_DRAFT_GP;
  int v17; 
  int v18 = SF_DRAFT_GP;
  int v19 = SF_DRAFT_GP;
  int v20 = SF_DRAFT_GP;
  int v21; 
  int v22 = SF_DRAFT_GP;
  int v23 = SF_DRAFT_GP;
  __int16 v24; 
  int v25; 
int v27; 
  __int16 *v28; 
  int v29; 
  __int16 *v30; 
  __int16 v31; 
  int i; 
  int v33; 
  int v34; 
  int v35 = SF_DRAFT_GP;
  int v36 = SF_DRAFT_GP;
  int v37 = SF_DRAFT_GP;
  int v38 = SF_DRAFT_GP;
  int v39 = SF_DRAFT_GP;
  int v40; 
  int v41; 
  int v42 = SF_DRAFT_GP;
  int v43 = SF_DRAFT_GP;

  if ( a1 )
  {
    if ( *SF_DRAFT_PTR(_DWORD, (v2 + 744)) == -5 )
    {
      v5 = sub_8003545C(6);
      *SF_DRAFT_PTR(_DWORD, (v2 + 784)) = v5;
    }
    else if ( sub_800354D8() != 6 )
    {
      v6 = sub_800354D8();
      *SF_DRAFT_PTR(_DWORD, (v7 + 784)) = v6;
      sub_8003545C(6);
    }
  }
  v8 = a1;
  if ( *SF_DRAFT_PTR(_DWORD, (v2 + 724)) != 1 || (v8 = a1, *SF_DRAFT_PTR(_DWORD, (v2 + 3356)) != 1) )
  {
    if ( !v8 )
    {
      result = *SF_DRAFT_PTR(_DWORD, (v2 + 744)) < -4;
      if ( *SF_DRAFT_PTR(int, (v2 + 744)) < -4 )
        return result;
      sub_80045E24((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)), 27, 0);
      *SF_DRAFT_PTR(_DWORD, (v10 + 2592)) = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
      sub_8003FDD0();
      v12 = *SF_DRAFT_PTR(_DWORD, (v11 + 784));
      *SF_DRAFT_PTR(_DWORD, (v11 + 744)) = -5;
      result = 6;
      goto LABEL_48;
    }
    v13 = *SF_DRAFT_PTR(_DWORD, (v2 + 744));
    v14 = v13 >= 0;
    result = v13 + 1;
    if ( v14 )
      return result;
LABEL_40:
    *SF_DRAFT_PTR(_DWORD, (v2 + 744)) = result;
    return result;
  }
  if ( a2 && !*SF_DRAFT_PTR(_BYTE, (v2 + 780)) )
  {
    if ( *SF_DRAFT_PTR(int, (v2 + 744)) < 0 )
    {
LABEL_37:
      i = a1;
      goto LABEL_38;
    }
    *SF_DRAFT_PTR(_BYTE, (v2 + 780)) = 1;
  }
  v15 = *SF_DRAFT_PTR(_DWORD, (v2 + 744));
  if ( v15 < 0 )
    goto LABEL_37;
  if ( !a1 )
  {
    i = 0;
    if ( v15 <= 0 )
      goto LABEL_38;
    v34 = (uint8)SF_DRAFT_PTR(uint8, 0x8010C3ACu)[32 * (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) - 32];
    sub_800404D0();
    sub_800C7BF8(*SF_DRAFT_PTR(_DWORD, (v35 + 3376)), (*SF_DRAFT_PTR(uint32, 0x8011C878u)));
    sub_800C7BF8(*SF_DRAFT_PTR(_DWORD, (v36 + 3376)), (*SF_DRAFT_PTR(uint32, 0x8011C89Cu)));
    sub_800C7BF8(*SF_DRAFT_PTR(_DWORD, (v37 + 3376)), (*SF_DRAFT_PTR(uint32, 0x8011C8C0u)));
    sub_800C7BF8(*SF_DRAFT_PTR(_DWORD, (v38 + 3376)), (*SF_DRAFT_PTR(uint32, 0x8011C8D8u)));
    sub_80039920(*SF_DRAFT_PTR(_DWORD, (v39 + 3376)), (int)SF_DRAFT_PTR(uint32, 0x8011B38Cu)[3 * v34]);
    goto LABEL_37;
  }
  if ( !v15 )
  {
    sub_800C8148((*SF_DRAFT_PTR(uint32, 0x8011C8C0u)), 8421504, -5963976, -6029112);
    sub_800C8148((*SF_DRAFT_PTR(uint32, 0x8011C8D8u)), 8421504, -4391112, -4456248);
    sub_800C7CEC(0x8011C878u, 5255208, -5832904, -5898040, (sint32)0xFFBBFF38u, (sint32)0xFFBB00C8u);
    sub_800C7CEC(0x8011C89Cu, 5255208, -6029361, -6094799, (sint32)0xFFBEFFCFu, (sint32)0xFFBE0031u);
    v17 = *SF_DRAFT_PTR(_DWORD, (v16 + 3376));
    (*SF_DRAFT_PTR(uint8, 0x8011C887u)) |= 2u;
    (*SF_DRAFT_PTR(uint8, 0x8011C8ABu)) |= 2u;
    sub_800C7BB0(v17, (*SF_DRAFT_PTR(uint32, 0x8011C878u)));
    sub_800C7BB0(*SF_DRAFT_PTR(_DWORD, (v18 + 3376)), (*SF_DRAFT_PTR(uint32, 0x8011C89Cu)));
    sub_800C7BB0(*SF_DRAFT_PTR(_DWORD, (v19 + 3376)), (*SF_DRAFT_PTR(uint32, 0x8011C8C0u)));
    sub_800C7BB0(*SF_DRAFT_PTR(_DWORD, (v20 + 3376)), (*SF_DRAFT_PTR(uint32, 0x8011C8D8u)));
    v21 = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
    sub_800399AC(*SF_DRAFT_PTR(_DWORD, (v22 + 3376)), (int)SF_DRAFT_PTR(uint32, 0x8011B38Cu)[3 * (uint8)SF_DRAFT_PTR(uint8, 0x8010C38Cu)[32 * (*SF_DRAFT_PTR(uint32, 0x80115FB8u))]]);
    sub_80040328(v21);
    v24 = sub_80086EA0(*SF_DRAFT_PTR(uint16, (v23 + 696)), (*SF_DRAFT_PTR(uint8, 0x80115F7Cu)));
    *SF_DRAFT_PTR(_WORD, (v2 + 696)) = v24;
  }
  v25 = (uint16)(*SF_DRAFT_PTR(uint16, 0x8011C914u)) << 16;
  if ( (*SF_DRAFT_PTR(uint16, 0x8011C914u)) )
  {
    v26 = v25 >> 17;
    if ( (unsigned int)((*SF_DRAFT_PTR(uint16, 0x8011C914u)) + 32) >= 0x41 )
      v26 = v25 >> 18;
    v27 = 0;
    if ( !v26 )
    {
      LOWORD(v26) = -1;
      if ( (*SF_DRAFT_PTR(uint16, 0x8011C914u)) > 0 )
      {
        LOWORD(v26) = 1;
        v27 = 0;
      }
    }
    v28 = SF_DRAFT_PTR(__int16, 0x8011C8F0u);
    v29 = 0;
    v30 = SF_DRAFT_PTR(__int16, 0x8011C8F0u);
    do
    {
      v28 += 6;
      v31 = SF_DRAFT_PTR(uint16, 0x8011C8F0u)[v29];
      v29 += 6;
      ++v27;
      sub_800398A8(sf_draft_guest_address(v30), v31 - v26, -80);
      v30 = v28;
    }
    while ( v27 < 7 );
  }
  i = a1;
  if ( a2 )
  {
    v33 = a2;
    sub_80040548((*SF_DRAFT_PTR(uint32, 0x80115FB8u)), a2);
    if ( a2 > 0 )
    {
      do
      {
        --v33;
        sub_80045E24((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)), 27, 1);
      }
      while ( v33 > 0 );
    }
    for ( i = a1; v33 < 0; i = a1 )
    {
      ++v33;
      sub_80045E24((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)), 28, 1);
    }
  }
LABEL_38:
  if ( i )
  {
    result = *SF_DRAFT_PTR(_DWORD, (v2 + 744)) + 1;
    goto LABEL_40;
  }
  v40 = *SF_DRAFT_PTR(_DWORD, (v2 + 744));
  result = v40 < 2;
  if ( v40 < -4 )
    return result;
  if ( v40 >= 2 )
  {
    if ( !*SF_DRAFT_PTR(_BYTE, (v2 + 780)) )
      goto LABEL_47;
LABEL_46:
    sub_800463D0((*SF_DRAFT_PTR(uint32, 0x80115FB8u)));
    sub_80028F3C((*SF_DRAFT_PTR(uint32, 0x80116AB0u)), 37);
    goto LABEL_47;
  }
  if ( *SF_DRAFT_PTR(_BYTE, (v2 + 780)) )
    goto LABEL_46;
  sub_80045E24((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)), 27, 0);
LABEL_47:
  v41 = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
  *SF_DRAFT_PTR(_DWORD, (v2 + 744)) = -5;
  *SF_DRAFT_PTR(_BYTE, (v2 + 780)) = 0;
  *SF_DRAFT_PTR(_DWORD, (v2 + 2592)) = v41;
  sub_8003FDD0();
  v12 = *SF_DRAFT_PTR(_DWORD, (v42 + 784));
  result = 6;
LABEL_48:
  if ( v12 != 6 )
  {
    result = sub_8003545C(v12);
    *SF_DRAFT_PTR(_DWORD, (v43 + 784)) = result;
  }
  return result;
}


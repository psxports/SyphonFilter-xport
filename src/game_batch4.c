#include "game_draft.h"
#include <stdio.h>
#include <stdlib.h>
static uint32 sf_draft_missing_padding_80093AC0(void)
{
    fprintf(stderr, "TODO 80093AC0 original unwritten padding +124\n");
    abort();
}



/* TODO Resolve external dependency signatures */
uint32 sub_80040BA8();
uint32 sub_80040E7C();
uint32 sub_80040F04();
uint32 sub_80068720();
uint32 sub_80077DB0();
uint32 sub_80079228();
uint32 sub_8007EFD0();
uint32 sub_80084D70();
uint32 sub_800EAF54();

uint32 sub_80041830(uint32 a1)
{
    FUNCTION_MARKER(0x80041830u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v2; 
  sint32 result; 

  int v5; 
  int v6; 

  int v9; 
  int *v10; 
  int *v11; 
  int *v12; 

  int *v14; 

  int v16; 
  int *v17; 
  int v18; 
  int *v19; 
  int *v20; 
  uint8 v21; 

  int *v28; 
  int v29; 

  int v31; 
  int *v32; 

  char v34; 
  int *v35; 
  int v36; 
  int *v37; 
  int *v38; 
  int *v39; 
  __int16 *v40 = SF_DRAFT_PTR(__int16, SF_DRAFT_GP); 
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
  __int16 v58; 
  __int16 v59; 
  int v60; 
  int v61; 
  int v62; 
  int *v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  sint32 v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  int v103; 
  __int16 v104; 
  int v105; 
  int *v106; 
  int v107; 
  int v108; 
  int v109; 
  __int64 v110; // kr00_8
  int v111; 
  int *v112; 
  int v113; 
  int v114; 
  int v115; 
  __int16 v116; 
  int v117; 
  int v118; 
  int v119; 
  _WORD *v120 = SF_DRAFT_PTR(_WORD, SF_DRAFT_GP); 
  int v121; 
  int v122; 
  int v123; 
  __int16 v124; 
  __int16 v125; 
  __int16 v126; 

  if ( (*SF_DRAFT_PTR(uint32, 0x8010C36Cu)) >= 0 )
  {
    v2 = a1;
  }
  else
  {
    if ( *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 732)) )
      return *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724)) == 2;
    v2 = a1;
    if ( SF_DRAFT_PTR(uint32, 0x8011C138u)[0] )
      return *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724)) == 2;
  }
  if ( !(uint8)sub_80040B50(v2, sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8010C36Cu)))) )
    return 0;
  v5 = (*SF_DRAFT_PTR(uint32, 0x8010C36Cu));
  if ( v2 )
  {
    if ( *(uint8 *)(SF_DRAFT_GP + 686) == 255 )
    {
      v21 = sub_80084998(((__int16)(*SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 708)) + *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 712)) + 11)), -2, 100, 100);
      *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 686)) = v21;
      sub_80084D70(v21, 1);
      sub_80084DD0(*(uint8 *)(SF_DRAFT_GP + 686), 16, 96, 16);
      sub_8008582C(*(uint8 *)(SF_DRAFT_GP + 686), (SF_DRAFT_PTR(uint32, 0x8010DEA0u)[0]), 30, 0);
      sub_8008582C(*(uint8 *)(SF_DRAFT_GP + 686), (SF_DRAFT_PTR(uint32, 0x8010DEA4u)[0]), 20, 0);
      sub_8008582C(*(uint8 *)(SF_DRAFT_GP + 686), (SF_DRAFT_PTR(uint32, 0x8010DEA8u)[0]), 20, 0);
      sub_8008582C(*(uint8 *)(SF_DRAFT_GP + 686), (SF_DRAFT_PTR(uint32, 0x8010DEACu)[0]), 25, 0);
    }
    if ( !v5 )
    {
      v28 = SF_DRAFT_PTR(int, sub_80039F60(45));
      v29 = 0;
      v31 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376));
      v32 = &(*SF_DRAFT_PTR(uint32, 0x8011C4A0u));
      *((_WORD *)v28 + 3) = 0;
      *((_WORD *)v28 + 2) = 0;
      v28[10] = sub_800DE5E0(v31 + 144, sf_draft_guest_address(v28));
      sub_80040FDC(((*SF_DRAFT_PTR(uint32, 0x8011C138u))), 26, 4259648, 1);
      do
      {
        SF_DRAFT_PTR(uint32, 0x8011C4A4u)[v29] = 675348288;
        if ( v29 < 72 )
          v34 = *((_BYTE *)v32 + 7) & 0xFD;
        else
          v34 = *((_BYTE *)v32 + 7) | 2;
        *((_BYTE *)v32 + 7) = v34;
        v35 = &SF_DRAFT_PTR(uint32, 0x8011C498u)[v29];
        v29 += 9;
        v32 += 9;
        sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v35));
      }
      while ( v29 < 126 );
      v36 = 0;
      v37 = SF_DRAFT_PTR(int, 0x8011C840u);
      do
      {
        v38 = v37;
        v37 += 7;
        ++v36;
        sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v38));
      }
      while ( v36 < 2 );
      sub_80040BA8(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724)));
    }
  }
  else
  {
    v6 = *(uint8 *)(SF_DRAFT_GP + 686);
    if ( v6 != 255 )
    {
      sub_80084C30(v6);
      *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 686)) = -1;
    }
    if ( v5 < 0 )
    {
      v9 = 0;
      sub_80040E7C();
      v10 = SF_DRAFT_PTR(int, 0x8011C840u);
      do
      {
        v11 = v10;
        v10 += 7;
        ++v9;
        sub_800C7BF8((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v11));
      }
      while ( v9 < 2 );
      v12 = SF_DRAFT_PTR(int, sub_80039F60(45));
      v14 = SF_DRAFT_PTR(int, 0x8011C138u);
      v16 = 0;
      sub_800C7B68((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v12));
      do
      {
        v17 = v14;
        v14 += 6;
        ++v16;
        sub_800C7BF8((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v17));
      }
      while ( v16 < 26 );
      v18 = 0;
      v19 = SF_DRAFT_PTR(int, 0x8011C498u);
      do
      {
        v20 = v19;
        v19 += 9;
        ++v18;
        sub_800C7BF8((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v20));
      }
      while ( v18 < 14 );
      return 0;
    }
  }
  v39 = SF_DRAFT_PTR(int, sub_80039F60(45));
  v41 = v40[354] * v5;
  v42 = v40[355] * v5;
  v43 = v40[356] * v5;
  v44 = (uint64)(715827883LL * v43) >> 32;
  v45 = v40[357] * v5;
  *((_WORD *)v39 + 14) = (__int16)((_WORD)v5 << 12) / 12;
  v46 = v41 / 12;
  (*SF_DRAFT_PTR(uint16, 0x80115E84u)) = (*SF_DRAFT_PTR(uint16, 0x8012C7B0u)) + v41 / 12;
  v47 = v42 / 12;
  v43 >>= 31;
  (*SF_DRAFT_PTR(uint16, 0x80115E86u)) = (*SF_DRAFT_PTR(uint16, 0x8012C7B2u)) + v42 / 12;
  v48 = (v44 >> 1) - v43;
  v49 = v45 / 12;
  if ( v44 >> 1 == v43 && (v50 = 0, !v49) )
  {
    (*SF_DRAFT_PTR(uint16, 0x80115E88u)) = 0;
    (*SF_DRAFT_PTR(uint16, 0x80115E8Au)) = 0;
  }
  else
  {
    (*SF_DRAFT_PTR(uint16, 0x80115E88u)) = v48 + 1;
    (*SF_DRAFT_PTR(uint16, 0x80115E8Au)) = v49 + 1;
    v50 = 0;
  }
  v51 = 0;
  do
  {
    v52 = v46;
    if ( (v50 & 1) == 0 )
      v52 = v46 + v48 + 1;
    v53 = v47;
    if ( (v50 & 2) == 0 )
      v53 = v47 + v49 + 1;
    v54 = v52 + 20;
    if ( (v50 & 1) == 0 )
      v54 = v52 - 20;
    v55 = v53 + 15;
    if ( (v50 & 2) == 0 )
      v55 = v53 - 15;
    v56 = v52 + 3;
    if ( (v50 & 1) == 0 )
      v56 = v52 - 3;
    v57 = v53 + 2;
    if ( (v50 & 2) == 0 )
      v57 = v53 - 2;
    if ( (v50 & 1) != 0 )
    {
      v58 = v54;
      if ( v54 > 0 )
        v58 = 0;
      LOWORD(v54) = v58;
      v59 = v56;
      if ( v56 > 0 )
        v59 = 0;
      LOWORD(v56) = v59;
      goto LABEL_56;
    }
    if ( v54 < 0 )
      LOWORD(v54) = 0;
    v60 = v50 & 2;
    if ( v56 < 0 )
    {
      LOWORD(v56) = 0;
LABEL_56:
      v60 = v50 & 2;
    }
    if ( v60 )
    {
      v61 = v55;
      if ( v55 > 0 )
        v61 = 0;
      v55 = v61;
      v62 = v57;
      if ( v57 > 0 )
        v62 = 0;
      v57 = v62;
    }
    else
    {
      if ( v55 < 0 )
        v55 = 0;
      if ( v57 < 0 )
        v57 = 0;
    }
    v63 = &SF_DRAFT_PTR(uint32, 0x8011C498u)[v51];
    v51 += 18;
    ++v50;
    v64 = v53 << 16;
    v65 = v57 << 16;
    v63[13] = (uint16)v52 | v64;
    v63[4] = (uint16)v52 | v64;
    v63[15] = (uint16)v56 | v65;
    v63[5] = (uint16)v56 | v65;
    v63[16] = (uint16)v54 | v65;
    v63[6] = (uint16)v52 | (v55 << 16);
    v63[7] = (uint16)v56 | (v55 << 16);
    v63[14] = (uint16)v54 | v64;
  }
  while ( v50 < 4 );
  v66 = (uint16)(v46 + v48 + 1);
  v67 = v47 << 16;
  v68 = v40[355] + v40[357];
  v69 = (v68 + 15) << 16;
  v70 = v66 | v69;
  v71 = (v68 + 16) << 16;
  v72 = (uint16)v46 | v71;
  v73 = (v68 + 9) << 16;
  (*SF_DRAFT_PTR(uint32, 0x8011C5D4u)) = v66 | v71;
  (*SF_DRAFT_PTR(uint32, 0x8011C5ECu)) = (uint16)v46 | v73;
  v74 = (uint16)(v46 + 2);
  (*SF_DRAFT_PTR(uint32, 0x8011C5D0u)) = v72;
  (*SF_DRAFT_PTR(uint32, 0x8011C5F0u)) = v74 | v73;
  v75 = (uint16)(v46 + v48 - 1);
  (*SF_DRAFT_PTR(uint32, 0x8011C5F8u)) = v74 | v69;
  v76 = v75 | v73;
  v77 = v75 | v69;
  (*SF_DRAFT_PTR(uint32, 0x8011C5C8u)) = (uint16)v46 | v69;
  (*SF_DRAFT_PTR(uint32, 0x8011C5F4u)) = (uint16)v46 | v69;
  v78 = (v47 + v49 + 1) << 16;
  (*SF_DRAFT_PTR(uint32, 0x8011C614u)) = v66 | v73;
  LOWORD(v66) = v40[354];
  v79 = (v47 + v49) << 16;
  (*SF_DRAFT_PTR(uint32, 0x8011C5CCu)) = v70;
  (*SF_DRAFT_PTR(uint32, 0x8011C610u)) = v76;
  (*SF_DRAFT_PTR(uint32, 0x8011C618u)) = v77;
  (*SF_DRAFT_PTR(uint32, 0x8011C61Cu)) = v70;
  v80 = (uint16)(v66 - 19);
  v81 = (uint16)(v66 - 17);
  (*SF_DRAFT_PTR(uint32, 0x8011C634u)) = v80 | (v47 << 16);
  v82 = (uint16)(v66 - 10);
  (*SF_DRAFT_PTR(uint32, 0x8011C638u)) = v81 | (v47 << 16);
  (*SF_DRAFT_PTR(uint32, 0x8011C658u)) = v81 | (v47 << 16);
  (*SF_DRAFT_PTR(uint32, 0x8011C65Cu)) = v82 | (v47 << 16);
  v83 = (v47 + 1) << 16;
  (*SF_DRAFT_PTR(uint32, 0x8011C63Cu)) = v80 | v78;
  (*SF_DRAFT_PTR(uint32, 0x8011C664u)) = v82 | v83;
  (*SF_DRAFT_PTR(uint32, 0x8011C680u)) = v82 | v79;
  (*SF_DRAFT_PTR(uint32, 0x8011C640u)) = v81 | v78;
  (*SF_DRAFT_PTR(uint32, 0x8011C660u)) = v81 | v83;
  (*SF_DRAFT_PTR(uint32, 0x8011C67Cu)) = v81 | v79;
  (*SF_DRAFT_PTR(uint32, 0x8011C684u)) = v81 | v78;
  (*SF_DRAFT_PTR(uint32, 0x8011C688u)) = v82 | v78;
  if ( v48 < 101 )
  {
    v88 = v49 + 1;
    v87 = sub_800EC8F4();
    if ( v49 == -1 )
      _break(7u, 0);
    if ( v49 == -2 && v87 == 0x80000000 )
      _break(6u, 0);
    v89 = (uint16)(v46 + v48);
    v90 = (v87 % v88 - v49 / 2) << 16;
    (*SF_DRAFT_PTR(uint32, 0x8011C148u)) = (uint16)v46 | v90;
    (*SF_DRAFT_PTR(uint32, 0x8011C14Cu)) = v89 | v90;
    v91 = sub_800EC8F4();
    if ( v49 == -2 && v91 == 0x80000000 )
      _break(6u, 0);
    v92 = (v91 % v88 - v49 / 2) << 16;
    (*SF_DRAFT_PTR(uint32, 0x8011C160u)) = (uint16)v46 | v92;
    (*SF_DRAFT_PTR(uint32, 0x8011C164u)) = v89 | v92;
    v86 = v49 < 71;
  }
  else
  {
    v84 = (uint16)(v46 + 40);
    (*SF_DRAFT_PTR(uint32, 0x8011C148u)) = v84 | v67;
    v85 = (uint16)(v46 + v48 - 40);
    (*SF_DRAFT_PTR(uint32, 0x8011C14Cu)) = v85 | v67;
    (*SF_DRAFT_PTR(uint32, 0x8011C160u)) = v84 | v79;
    (*SF_DRAFT_PTR(uint32, 0x8011C164u)) = v85 | v79;
    v86 = v49 < 71;
  }
  if ( v86 )
  {
    v97 = v49 + 1;
    v96 = sub_800EC8F4();
    if ( v49 == -1 )
      _break(7u, 0);
    if ( v49 == -2 && v96 == 0x80000000 )
      _break(6u, 0);
    v98 = (uint16)(v46 + v48);
    v99 = (v96 % v97 - v49 / 2) << 16;
    (*SF_DRAFT_PTR(uint32, 0x8011C178u)) = (uint16)v46 | v99;
    (*SF_DRAFT_PTR(uint32, 0x8011C17Cu)) = v98 | v99;
    v100 = sub_800EC8F4();
    if ( v49 == -2 && v100 == 0x80000000 )
      _break(6u, 0);
    v101 = (v100 % v97 - v49 / 2) << 16;
    (*SF_DRAFT_PTR(uint32, 0x8011C190u)) = (uint16)v46 | v101;
    (*SF_DRAFT_PTR(uint32, 0x8011C194u)) = v98 | v101;
  }
  else
  {
    v93 = (v47 + 30) << 16;
    v94 = (v47 + v49 - 30) << 16;
    (*SF_DRAFT_PTR(uint32, 0x8011C178u)) = (uint16)v46 | v93;
    v95 = (uint16)(v46 + v48);
    (*SF_DRAFT_PTR(uint32, 0x8011C17Cu)) = (uint16)v46 | v94;
    (*SF_DRAFT_PTR(uint32, 0x8011C190u)) = v95 | v93;
    (*SF_DRAFT_PTR(uint32, 0x8011C194u)) = v95 | v94;
  }
  v102 = 0;
  v103 = -4;
  v104 = v40[354];
  v105 = 0;
  do
  {
    v106 = &SF_DRAFT_PTR(uint32, 0x8011C198u)[v105];
    v107 = (v103 * v49 / 10) << 16;
    v108 = (uint16)(v104 - 18 + (__int16)(5 * v5) / 12) | v107;
    if ( (v102 & 1) == 0 )
      v108 = (uint16)(v104 - 18 + 7 * v5 / 12) | v107;
    v106[4] = v108;
    v109 = v103 * v49;
    v110 = 1717986919LL * v103 * v49;
    ++v103;
    v105 += 6;
    ++v102;
    v106[5] = (uint16)(v104 - (v5 / 3 + 18)) | (((SHIDWORD(v110) >> 2) - (v109 >> 31)) << 16);
  }
  while ( v102 < 9 );
  v111 = 0;
  v112 = SF_DRAFT_PTR(int, 0x8011C270u);
  v113 = v40[355] + v40[357];
  do
  {
    v114 = (uint16)((v111 - 4) * v48 / 10);
    v112[4] = v114 | ((v113 + v5 / 4 + 15) << 16);
    v115 = v114 | ((v113 + 15 - v5 / 3) << 16);
    if ( (v111 & 1) == 0 )
      v115 = v114 | ((v113 + 15 - v5 / 2) << 16);
    v112[5] = v115;
    ++v111;
    v112 += 6;
  }
  while ( v111 < 9 );
  v116 = v40[354];
  v117 = v40[355] + v40[357];
  (*SF_DRAFT_PTR(uint32, 0x8011C850u)) = (uint16)(v116 - 17);
  (*SF_DRAFT_PTR(uint32, 0x8011C86Cu)) = (v117 + 15) << 16;
  v118 = (uint16)(v116 + (__int16)(9 * v5) / 12 - 17);
  (*SF_DRAFT_PTR(uint32, 0x8011C854u)) = v118 | 0x30000;
  (*SF_DRAFT_PTR(uint32, 0x8011C858u)) = v118 | 0xFFFD0000;
  v119 = (v117 - (7 * v5 / 12 - 15)) << 16;
  (*SF_DRAFT_PTR(uint32, 0x8011C870u)) = v119 | 4;
  (*SF_DRAFT_PTR(uint32, 0x8011C874u)) = v119 | 0xFFFC;
  sub_80040F04(v5);
  switch ( v5 )
  {
    case 0:
      (*SF_DRAFT_PTR(uint32, 0x8011C358u)) = 0;
      v121 = v47 - 1;
      goto LABEL_110;
    case 1:
    case 2:
      goto LABEL_101;
    case 3:
      (*SF_DRAFT_PTR(uint32, 0x8011C374u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C370u)) = 67109888;
LABEL_101:
      (*SF_DRAFT_PTR(uint32, 0x8011C35Cu)) = (((__int16)v120[355] - 20) * v5 / 4) << 16;
      v121 = v47 - 1;
      goto LABEL_110;
    case 4:
      (*SF_DRAFT_PTR(uint32, 0x8011C35Cu)) = ((__int16)v120[355] - 20) << 16;
      (*SF_DRAFT_PTR(uint32, 0x8011C374u)) = (*SF_DRAFT_PTR(uint32, 0x8011C35Cu)) | 1;
      (*SF_DRAFT_PTR(uint32, 0x8011C370u)) = (*SF_DRAFT_PTR(uint32, 0x8011C35Cu)) | 1;
      v121 = v47 - 1;
      goto LABEL_110;
    case 5:
      goto LABEL_104;
    case 6:
      (*SF_DRAFT_PTR(uint32, 0x8011C38Cu)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C388u)) = 67109888;
LABEL_104:
      (*SF_DRAFT_PTR(uint32, 0x8011C374u)) = (uint16)(25 * (v5 - 4)) | (((__int16)v120[355] - 20) << 16);
      v121 = v47 - 1;
      goto LABEL_110;
    case 7:
      v122 = (__int16)v120[355];
      v123 = (uint16)(v120[354] + v120[356] + 16);
      (*SF_DRAFT_PTR(uint32, 0x8011C374u)) = v123 | ((v122 - 20) << 16);
      (*SF_DRAFT_PTR(uint32, 0x8011C38Cu)) = v123 | ((v122 - 19) << 16);
      (*SF_DRAFT_PTR(uint32, 0x8011C388u)) = v123 | ((v122 - 19) << 16);
      v121 = v47 - 1;
      goto LABEL_110;
    case 8:
      v124 = v120[354];
      v125 = v120[356];
      (*SF_DRAFT_PTR(uint32, 0x8011C3A4u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C3A0u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C38Cu)) = (uint16)(v124 + v125 + 16) | ((((__int16)v120[355] - 20) / 2) << 16);
      v121 = v47 - 1;
      goto LABEL_110;
    case 9:
      (*SF_DRAFT_PTR(uint32, 0x8011C3A4u)) = (uint16)(v120[354] + v120[356] + 16) | 0xFFFA0000;
      (*SF_DRAFT_PTR(uint32, 0x8011C3A0u)) = (*SF_DRAFT_PTR(uint32, 0x8011C3A4u));
      (*SF_DRAFT_PTR(uint32, 0x8011C38Cu)) = (*SF_DRAFT_PTR(uint32, 0x8011C3A4u));
      v121 = v47 - 1;
      goto LABEL_110;
    case 10:
      v126 = v120[354] + v120[356];
      (*SF_DRAFT_PTR(uint32, 0x8011C3A0u)) = (uint16)(v126 + 11) | 0xFFFB0000;
      (*SF_DRAFT_PTR(uint32, 0x8011C3A4u)) = (uint16)(v126 + 41) | 0xFFFB0000;
      goto LABEL_109;
    default:
LABEL_109:
      v121 = v47 - 1;
LABEL_110:
      (*SF_DRAFT_PTR(uint32, 0x8011C358u)) = v121 << 16;
      result = 1;
      break;
  }
  return result;
}

sint32 sub_80093AC0(sint32 a1, uint32 a2, uint32 a3, sint32 a4)
{
  union { sint32 words[54]; sint16 halves[108]; uint8 bytes[216]; } workspace;
    FUNCTION_MARKER(0x80093AC0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
  int v8; 
  int result; 
  int *v10; 
  int *v11; 
  int v12; 
  int v13; 
  int v14; 
  int *v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int *v21; 
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
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  _DWORD *v80; 
  int v120; 
  int v121; 
  int v122; 
  int v123; 
  int v124; 
  int v125; 
  int v126; 
  int v127; 
  int v128; 
  int v129; 
  int v130; 
  int v131; 
  int v132; 
  int v134; 
  int v135; 
  int v136; 

  if ( (unsigned int)*(uint8 *)(a1 + 34) - 1 >= 2 )
    return 0;
  v8 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
  result = 0;
  if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v8 + 16)) + 40)) & 0x400000) == 0 )
    return result;
  result = 0;
  if ( (*SF_DRAFT_PTR(_BYTE, (v8 + 8)) & 0x10) != 0 )
    return result;
  v10 = &workspace.words[22];
  if ( !*SF_DRAFT_PTR(_DWORD, (a1 + 12)) )
    return 0;
  (workspace.words + 0)[0] = (*SF_DRAFT_PTR(uint32, 0x800134B0u));
  (workspace.words + 0)[1] = (*SF_DRAFT_PTR(uint32, 0x800134B4u));
  workspace.words[2] = (*SF_DRAFT_PTR(uint32, 0x800134B8u));
  workspace.words[3] = (*SF_DRAFT_PTR(uint32, 0x800134BCu));
  workspace.words[4] = (*SF_DRAFT_PTR(uint32, 0x800134C0u));
  workspace.words[5] = (*SF_DRAFT_PTR(uint32, 0x800134C4u));
  workspace.words[6] = (*SF_DRAFT_PTR(uint32, 0x800134C8u));
  workspace.words[7] = (*SF_DRAFT_PTR(uint32, 0x800134CCu));
  workspace.words[16] = (*SF_DRAFT_PTR(uint32, 0x800134D0u));
  workspace.words[17] = (*SF_DRAFT_PTR(uint32, 0x800134D4u));
  workspace.words[18] = (*SF_DRAFT_PTR(uint32, 0x800134D8u));
  workspace.words[19] = (*SF_DRAFT_PTR(uint32, 0x800134DCu));
  workspace.words[20] = (*SF_DRAFT_PTR(uint32, 0x800134E0u));
  v11 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint8, 0x800134E4u)));
  do
  {
    v12 = v11[1];
    v13 = v11[2];
    v14 = v11[3];
    *v10 = (*v11);
    v10[1] = v12;
    v10[2] = v13;
    v10[3] = v14;
    v11 += 4;
    v10 += 4;
  }
  while ( v11 != &(*SF_DRAFT_PTR(uint32, 0x80013534u)) );
  (workspace.words + 46)[0] = (*SF_DRAFT_PTR(uint32, 0x80013534u));
  (workspace.words + 46)[1] = (*SF_DRAFT_PTR(uint32, 0x80013538u));
  (workspace.words + 46)[2] = (*SF_DRAFT_PTR(uint32, 0x8001353Cu));
  (workspace.words + 46)[3] = (*SF_DRAFT_PTR(uint32, 0x80013540u));
  (workspace.words + 46)[4] = (*SF_DRAFT_PTR(uint32, 0x80013544u));
  workspace.words[51] = (*SF_DRAFT_PTR(uint32, 0x80013548u));
  workspace.words[52] = (*SF_DRAFT_PTR(uint32, 0x8001354Cu));
  workspace.words[53] = (*SF_DRAFT_PTR(uint32, 0x80013550u));
  v15 = SF_DRAFT_PTR(int, *(int **)(a1 + 12));
  v16 = v15[1];
  v17 = v15[2];
  v18 = v15[3];
  workspace.words[42] = *v15;
  workspace.words[43] = v16;
  workspace.words[44] = v17;
  workspace.words[45] = v18;
  v126 = (*SF_DRAFT_PTR(uint32, 0x80013554u));
  v127 = (*SF_DRAFT_PTR(uint32, 0x80013558u));
  v128 = (*SF_DRAFT_PTR(uint32, 0x8001355Cu));
  v129 = (*SF_DRAFT_PTR(uint32, 0x80013560u));
  v120 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 4));
  v121 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 10));
  v19 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 16));
  v121 = -v121;
  v122 = v19;
  if ( v121 )
  {
    v121 = 0;
    sub_800C720C(sf_draft_guest_address(&v120), sf_draft_guest_address(&v120));
  }
  v20 = 0;
  v21 = SF_DRAFT_PTR(int, (workspace.words + 0));
  v124 = 0;
  workspace.halves[19] = 0;
  v123 = v122;
  v125 = -v120;
  (workspace.halves + 16)[0] = v122;
  workspace.halves[22] = -(__int16)v120;
  (workspace.halves + 16)[1] = v126;
  workspace.halves[20] = v127;
  workspace.halves[23] = v128;
  workspace.halves[18] = v120;
  workspace.halves[21] = v121;
  workspace.halves[24] = v122;
  sub_800EBBC4(sf_draft_guest_address(workspace.bytes + 32), (sint32)sf_draft_guest_address(workspace.bytes + 184));
  workspace.words[51] = workspace.words[13];
  workspace.words[52] = workspace.words[14];
  workspace.words[53] = workspace.words[15];
  sub_800EB714(sf_draft_guest_address(workspace.words + 46));
  sub_800EB7A4(sf_draft_guest_address(workspace.words + 46));
  do
  {
    v22 = 4 * (workspace.words + 0)[v20 + 16];
    v123 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v22 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)))) + 20));
    v124 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v22 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)))) + 24));
    v23 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v22 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)))) + 28));
    v123 -= workspace.words[42];
    LOWORD(v126) = v123;
    v125 = v23 - workspace.words[44];
    LOWORD(v127) = v23 - workspace.words[44];
    v124 = -v124 - workspace.words[43];
    HIWORD(v126) = v124;
    sub_800EAF54(&v126, &v123);
    v24 = v21[22];
    v25 = v21[24];
    v134 = v123 + v24;
    v136 = v125 + v25;
    v130 = v123 - v24;
    v132 = v125 - v25;
    if ( workspace.words[4] < v123 + v24 )
      workspace.words[4] = v123 + v24;
    if ( v123 - v24 < (workspace.words + 0)[0] )
      (workspace.words + 0)[0] = v123 - v24;
    if ( workspace.words[6] < v125 + v25 )
      workspace.words[6] = v125 + v25;
    if ( v125 - v25 < workspace.words[2] )
      workspace.words[2] = v125 - v25;
    ++v20;
    v21 += 4;
  }
  while ( v20 < 5 );
  v26 = (workspace.words[4] - (workspace.words + 0)[0]) / 2;
  v27 = (workspace.halves + 16)[0] * v26;
  v123 = (workspace.halves + 16)[0];
  v124 = workspace.halves[19];
  v127 = workspace.halves[21];
  v128 = workspace.halves[24];
  v131 = workspace.halves[19];
  v125 = workspace.halves[22];
  v130 = v27;
  v126 = workspace.halves[18];
  v132 = workspace.halves[22] * v26;
  if ( v27 < 0 )
    v28 = -(-v27 >> 12);
  else
    v28 = v27 >> 12;
  v130 = v28;
  if ( v131 < 0 )
    v29 = -(-v131 >> 12);
  else
    v29 = v131 >> 12;
  v131 = v29;
  if ( v132 < 0 )
    v30 = -(-v132 >> 12);
  else
    v30 = v132 >> 12;
  v31 = (workspace.words[6] - workspace.words[2]) / 2;
  v32 = v126 * v31;
  v132 = v30;
  v134 = v126 * v31;
  v135 = v127;
  v136 = v128 * v31;
  if ( v126 * v31 < 0 )
    v33 = -(-v32 >> 12);
  else
    v33 = v32 >> 12;
  v134 = v33;
  if ( v135 < 0 )
    v34 = -(-v135 >> 12);
  else
    v34 = v135 >> 12;
  v135 = v34;
  if ( v136 < 0 )
    v35 = -(-v136 >> 12);
  else
    v35 = v136 >> 12;
  v36 = (workspace.words[4] + (workspace.words + 0)[0]) / 2;
  v37 = v123 * v36;
  v136 = v35;
  workspace.words[24] = v123 * v36;
  workspace.words[25] = v124;
  workspace.words[26] = v125 * v36;
  if ( v123 * v36 < 0 )
    v38 = -(-v37 >> 12);
  else
    v38 = v37 >> 12;
  workspace.words[24] = v38;
  if ( workspace.words[25] < 0 )
    v39 = -(-workspace.words[25] >> 12);
  else
    v39 = workspace.words[25] >> 12;
  workspace.words[25] = v39;
  if ( workspace.words[26] < 0 )
    v40 = -(-workspace.words[26] >> 12);
  else
    v40 = workspace.words[26] >> 12;
  v41 = (workspace.words[6] + workspace.words[2]) / 2;
  v42 = v126 * v41;
  workspace.words[26] = v40;
  workspace.words[28] = v126 * v41;
  workspace.words[29] = v127;
  workspace.words[30] = v128 * v41;
  if ( v126 * v41 < 0 )
    v43 = -(-v42 >> 12);
  else
    v43 = v42 >> 12;
  workspace.words[28] = v43;
  if ( workspace.words[29] < 0 )
    v44 = -(-workspace.words[29] >> 12);
  else
    v44 = workspace.words[29] >> 12;
  workspace.words[29] = v44;
  if ( workspace.words[30] < 0 )
    v45 = -(-workspace.words[30] >> 12);
  else
    v45 = workspace.words[30] >> 12;
  workspace.words[30] = v45;
  *a2_view = workspace.words[24] + workspace.words[28];
  a2_view[1] = workspace.words[25] + workspace.words[29];
  a2_view[2] = workspace.words[26] + workspace.words[30];
  v46 = v130 >> 1;
  if ( v130 < 0 )
    v46 = -(-v130 >> 1);
  workspace.words[16] = v46;
  workspace.words[17] = v131;
  if ( v132 < 0 )
    v47 = -(-v132 >> 1);
  else
    v47 = v132 >> 1;
  workspace.words[18] = v47;
  if ( v134 < 0 )
    v48 = -(-v134 >> 1);
  else
    v48 = v134 >> 1;
  workspace.words[20] = v48;
  workspace.words[21] = v135;
  if ( v136 < 0 )
    v49 = -(-v136 >> 1);
  else
    v49 = v136 >> 1;
  workspace.words[22] = v49;
  if ( a4 == 6 )
  {
    *a3_view = v134 - workspace.words[16];
    a3_view[1] = v135 - workspace.words[17];
    a3_view[2] = v136 - workspace.words[18];
    a3_view[4] = v134 + workspace.words[16];
    a3_view[5] = v135 + workspace.words[17];
    a3_view[6] = v136 + workspace.words[18];
    v58 = v131;
    v59 = v132;
    a3_view[8] = v130;
    a3_view[9] = v58;
    a3_view[10] = v59;
    a3_view[11] = sf_draft_missing_padding_80093AC0();
    v61 = a3_view[1];
    v62 = a3_view[2];
    a3_view[12] = (0u - *a3_view);
    v63 = a3_view[4];
    a3_view[14] = -v62;
    v64 = a3_view[5];
    a3_view[16] = -v63;
    v65 = a3_view[6];
    a3_view[13] = v61;
    a3_view[17] = v64;
    v66 = (0u - a3_view[8]);
    a3_view[18] = -v65;
    a3_view[20] = v66;
    v67 = (0u - a3_view[10]);
    a3_view[21] = a3_view[9];
    a3_view[22] = v67;
  }
  else if ( a4 >= 7 )
  {
    result = 0;
    if ( a4 != 8 )
      return result;
    *a3_view = v134 - workspace.words[16];
    a3_view[1] = v135 - workspace.words[17];
    a3_view[2] = v136 - workspace.words[18];
    a3_view[4] = v134 + workspace.words[16];
    a3_view[5] = v135 + workspace.words[17];
    a3_view[6] = v136 + workspace.words[18];
    a3_view[8] = v130 + workspace.words[20];
    a3_view[9] = v131 + workspace.words[21];
    a3_view[10] = v132 + workspace.words[22];
    a3_view[12] = v130 - workspace.words[20];
    a3_view[13] = v131 - workspace.words[21];
    a3_view[14] = v132 - workspace.words[22];
    v68 = a3_view[1];
    v69 = a3_view[2];
    a3_view[16] = (0u - *a3_view);
    v70 = a3_view[4];
    a3_view[17] = v68;
    v71 = a3_view[5];
    a3_view[18] = -v69;
    v72 = a3_view[6];
    a3_view[20] = -v70;
    v73 = a3_view[8];
    a3_view[21] = v71;
    v74 = a3_view[9];
    a3_view[22] = -v72;
    v75 = a3_view[10];
    a3_view[24] = -v73;
    v76 = a3_view[12];
    a3_view[25] = v74;
    v77 = a3_view[13];
    a3_view[26] = -v75;
    v78 = (0u - a3_view[14]);
    a3_view[28] = -v76;
    a3_view[29] = v77;
    a3_view[30] = v78;
  }
  else
  {
    result = 0;
    if ( a4 != 4 )
      return result;
    *a3_view = v134 - v130;
    a3_view[1] = v135 - v131;
    a3_view[2] = v136 - v132;
    a3_view[4] = v134 + v130;
    v50 = a3_view[1];
    a3_view[5] = v135 + v131;
    v51 = v136;
    v52 = v132;
    v53 = *a3_view;
    v54 = a3_view[2];
    a3_view[9] = v50;
    a3_view[8] = -v53;
    v55 = a3_view[4];
    a3_view[6] = v51 + v52;
    v56 = a3_view[5];
    a3_view[10] = -v54;
    v57 = (0u - a3_view[6]);
    a3_view[12] = -v55;
    a3_view[13] = v56;
    a3_view[14] = v57;
  }
  v79 = 0;
  v80 = (_DWORD *)(a3_view);
  do
  {
    *v80 += *a2_view;
    v80[1] += a2_view[1];
    ++v79;
    v80[2] += a2_view[2];
    v80 += 4;
  }
  while ( v79 < a4 );
  return 1;
}

void sub_80068770(sint32 a1, sint32 a2, uint32 a3, sint32 a4, sint32 a9, sint32 a10, uint32 a11, sint32 a12)
{
    FUNCTION_MARKER(0x80068770u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a11_view = SF_DRAFT_PTR(int, a11);

  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  bool v22; // dc
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  unsigned int v31; 
  int v32; 
  __int16 v33; 
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
  int v44; 
  int v45; 
  int v46; 

  void ( *v48)(_DWORD, _DWORD); 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 



  int direction[4];
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  __int16 v69; 
  char v70; 

  v17 = *SF_DRAFT_PTR(_DWORD, (76 * (__int16)a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v70 = 1;
  v18 = *SF_DRAFT_PTR(_DWORD, (v17 + 24));
  v19 = *SF_DRAFT_PTR(__int16, (v18 + 14));
  v69 = a3;
  if ( (__int16)a2 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    v20 = a2 << 16;
    if ( *SF_DRAFT_PTR(_BYTE, (v17 + 34)) != 2 )
      goto LABEL_5;
    sub_80066D74((__int16)a1);
  }
  v20 = a2 << 16;
LABEL_5:
  v21 = v20 >> 16;
  v22 = v20 >> 16 < 0;
  v23 = 4 * (v20 >> 16);
  if ( v22 )
  {
    v26 = 0;
  }
  else
  {
    v24 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (4 * (4 * (v23 + v21) - v21) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 2));
    if ( v24 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
    {
      v26 = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
    }
    else
    {
      v25 = 76 * v24 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
      v26 = *(uint8 *)(v25 + 36);
      if ( !*SF_DRAFT_PTR(_BYTE, (v25 + 36)) )
      {
        v27 = *SF_DRAFT_PTR(_DWORD, (v25 + 36)) & 0x3000;
        if ( v27 == 4096 )
          v26 = 19;
        else
          v26 = v27 == 0x2000 ? 0x14 : 0;
      }
    }
  }
  if ( a10 && v26 != 16 )
    sub_80069BF8((__int16)a1, sf_draft_guest_address(a11_view), a12);
  if ( *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 8)) == 0x7FFF && *SF_DRAFT_PTR(_BYTE, (v17 + 34)) == 2 && v19 != 18 )
    goto LABEL_33;
  if ( !*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 6)) )
    goto LABEL_34;
  v28 = *SF_DRAFT_PTR(__int16, (v17 + 2));
  if ( v28 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
    goto LABEL_23;
  v29 = a2 << 16;
  if ( (*SF_DRAFT_PTR(_DWORD, (76 * v28 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) & 0x4000) == 0 )
  {
    if ( (__int16)a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
      goto LABEL_34;
LABEL_23:
    v29 = a2 << 16;
  }
  v22 = v29 >> 16 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
  v30 = a2 << 16;
  if ( !v22 )
  {
    if ( (*SF_DRAFT_PTR(uint32, 0x80115E80u)) && a4 >= 0 )
      goto LABEL_34;
    v30 = a2 << 16;
  }
  v22 = v30 >> 16 != -1;
  v31 = v26 - 16;
  if ( v22 || (v31 = v26 - 16, v19 == 77) )
  {
    if ( v31 >= 2 && v26 != 19 && a4 != 0x7FFF )
    {
LABEL_33:
      a9 = 23;
      goto LABEL_39;
    }
  }
LABEL_34:
  if ( *SF_DRAFT_PTR(_BYTE, (v17 + 34)) == 2 )
  {
    v32 = *SF_DRAFT_PTR(__int16, (v17 + 2));
    if ( (v32 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (*SF_DRAFT_PTR(_DWORD, (76 * v32 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) & 0x4000) != 0) && v19 == 17 )
      *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 6)) = 0;
  }
LABEL_39:
  if ( v19 != 77 && v19 != 18 && v19 != 82 )
    sub_8006784C((__int16)a2, v17, a9, sf_draft_guest_address(a11_view), (uint32)a12);
  v33 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 8));
  if ( (uint16)(v33 + 1) >= 2u )
  {
    v34 = 0;
    if ( v33 == 0x7FFF )
    {
      v35 = 0;
      if ( v19 != 18 )
        goto LABEL_50;
      v36 = *SF_DRAFT_PTR(_DWORD, (v17 + 28));
      if ( !v36 )
        goto LABEL_49;
      v37 = *(uint8 *)(v36 + 82);
      v35 = 0;
      if ( v37 != 9 )
        goto LABEL_50;
    }
    v34 = 1;
LABEL_49:
    v35 = v34;
LABEL_50:
    if ( !v35 )
      goto LABEL_119;
    if ( a4 < 0 )
      a4 = -a4;
    if ( a9 == 23 )
    {
      v38 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 6));
      if ( (__int16)a2 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (sub_80068720(a1), (__int16)a2 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u))) || !(*SF_DRAFT_PTR(uint8, 0x801168D1u)) )
      {
        v70 = 0;
        v38 -= a4;
      }
      if ( v38 <= 0 )
      {
        LOWORD(v38) = 0;
        if ( *SF_DRAFT_PTR(_BYTE, (v17 + 34)) == 2 )
        {
          v39 = 76 * *SF_DRAFT_PTR(__int16, (v17 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
          *SF_DRAFT_PTR(_DWORD, (v39 + 36)) &= ~0x4000u;
        }
      }
      *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 6)) = v38;
    }
    if ( v70 )
    {
      v40 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 8));
      if ( a4 >= v40 || v40 == 0x7FFF )
      {
        if ( sub_8005A688() && (__int16)a1 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
          *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 8)) = 150;
        else
          *SF_DRAFT_PTR(_WORD, (v18 + 8)) = 0;
      }
      else
      {
        *SF_DRAFT_PTR(_WORD, (v18 + 8)) -= a4;
      }
    }
    if ( !*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 8)) )
    {
      if ( !*SF_DRAFT_PTR(_DWORD, (v17 + 16)) )
      {
        sub_80069980((__int16)a1);
LABEL_96:
        v48 = *(void ( **)(_DWORD, _DWORD))(SF_DRAFT_GP + 936);
        goto LABEL_116;
      }
      v41 = 0;
      if ( (__int16)a1 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
      {
        sub_80028F3C((__int16)a1, 13);
        (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) = 0;
      }
      else
      {
        v42 = sub_8006090C((__int16)a1, (__int16)a2, sf_draft_guest_address(direction));
        if ( v42 )
        {
          v19 = v42;
          v41 = 1;
        }
      }
      v43 = a1 << 16;
      if ( (__int16)a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
      {
        v43 = (__int16)a1;
        if ( v41 )
        {
LABEL_85:
          v46 = v19;
LABEL_86:
          sub_80028F3C(v43, v46);
          if ( (v41 || v19 == 17) && (unsigned int)*(uint8 *)(v17 + 34) - 1 < 2 )
          {
            if ( v41 )
            {
              v61 = direction[0];
              v62 = direction[1];
              v63 = direction[2];
              v64 = direction[3];
              *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 12)) + 96)) = 0;
              *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 12)) + 100)) = 0;
              *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 12)) + 104)) = 0;
            }
            else if ( (__int16)a2 == -1 )
            {
              sub_80067448(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80135D78u))), v17, sf_draft_guest_address(direction));
              direction[1] = 0;
              sub_800C720C(sf_draft_guest_address(direction), sf_draft_guest_address(direction));
              v61 = sub_800C6D4C(direction[0], -98304);
              v62 = sub_800C6D4C(direction[1], -98304);
              v63 = sub_800C6D4C(direction[2], -98304);
              v62 += 0x20000;
            }
            else
            {
              sub_80067448(sf_draft_guest_address(a11_view), (*SF_DRAFT_PTR(_DWORD, (76 * (__int16)a2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52))), sf_draft_guest_address(direction));
              direction[0] = -direction[0];
              direction[2] = -direction[2];
              direction[1] = 0;
              sub_800C720C(sf_draft_guest_address(direction), sf_draft_guest_address(direction));
              v61 = sub_800C6D4C(direction[0], -98304);
              v62 = sub_800C6D4C(direction[1], -98304);
              v63 = sub_800C6D4C(direction[2], -98304);
              v62 += 114688;
            }
            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 12)) + 112)) += v61;
            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 12)) + 116)) += v62;
            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 12)) + 120)) += v63;
          }
          goto LABEL_96;
        }
        if ( (**(_DWORD **)(v17 + 16) & 2) != 0 )
        {
          if ( (unsigned int)(v19 - 15) < 2 || (v43 = a1 << 16, v19 == 18) )
          {
            v44 = sub_800EC8F4();
            v43 = a1 << 16;
            if ( v44 % 100 >= 41 )
            {
              v45 = sub_800EC8F4();
              v43 = (__int16)a1;
              v46 = v45 % 6 + 101;
              goto LABEL_86;
            }
          }
        }
        else
        {
          v43 = a1 << 16;
        }
      }
      v43 >>= 16;
      goto LABEL_85;
    }
    if ( (unsigned int)*(uint8 *)(v17 + 34) - 1 < 2 )
    {
      v49 = (*SF_DRAFT_PTR(uint32, 0x800120ACu));
      v65 = (*SF_DRAFT_PTR(uint32, 0x800120A4u));
      v66 = (*SF_DRAFT_PTR(uint32, 0x800120A8u));
      v67 = (*SF_DRAFT_PTR(uint32, 0x800120ACu));
      v68 = (*SF_DRAFT_PTR(uint32, 0x800120B0u));
      if ( (__int16)a2 != -1 )
        sub_80067448(sf_draft_guest_address(a11_view), (*SF_DRAFT_PTR(_DWORD, (76 * (__int16)a2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52))), sf_draft_guest_address(&v65));
      v50 = *SF_DRAFT_PTR(__int16, (v17 + 2));
      if ( v50 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
        goto LABEL_110;
      if ( !(*SF_DRAFT_PTR(uint8, 0x801169C0u)) )
      {
        v51 = sub_800EC8F4();
        sub_8006BC98(1, v51 % 5 + 53, v17, 0);
        v50 = *SF_DRAFT_PTR(__int16, (v17 + 2));
      }
      if ( v50 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
      {
LABEL_110:
        v52 = v17;
        if ( !v65 && !v66 && !v67 )
          goto LABEL_115;
        v53 = 1;
        goto LABEL_114;
      }
      if ( !(*SF_DRAFT_PTR(uint8, 0x801169C0u)) )
      {
        v52 = v17;
        if ( v65 || v66 || v67 )
        {
          v53 = 0;
LABEL_114:
          sub_8007EB38(v52, sf_draft_guest_address(&v65), v53);
          goto LABEL_115;
        }
        sub_8007EFD0(v17);
      }
    }
LABEL_115:
    v48 = *(void ( **)(_DWORD, _DWORD))(SF_DRAFT_GP + 932);
LABEL_116:
    if ( v48 )
      v48((__int16)a1, v69);
    if ( v34 )
    {
LABEL_120:
      sub_80015364(0xDu, 4u, v69, (__int16)a1, 0, 0, 0, 0);
      return;
    }
LABEL_119:
    if ( *SF_DRAFT_PTR(_BYTE, (v17 + 34)) != 14 )
      return;
    goto LABEL_120;
  }
}

void sub_80079AFC(sint32 a1)
{
    FUNCTION_MARKER(0x80079AFCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int *v1; 
  int v2; 
  _DWORD *v3; 
  int v4; 
  int v5; 
  int v6; 
  int *v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  char v16; 
  int v17; 
  int v18; 
  bool v19; 
  bool v20; 
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
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  sint32 v41; 
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
  _DWORD *v52; 
  int v53; 
  int v54; 
  int v55; 
  _DWORD *v56; 
  int v57[11]; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  char v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  char *v91; 

  v1 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8012D724u)));
  v87 = a1;
  v88 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
  sub_800E95B4(50);
  v63 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v87 + 8)) + 12)) + 20));
  v64 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v87 + 8)) + 12)) + 24));
  v2 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v87 + 8)) + 12)) + 28));
  v64 = -v64;
  v65 = v2;
  v3 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(v87 + 12));
  v89 = 0;
  v4 = v3[68];
  v5 = v3[69];
  v6 = v3[70];
  v63 = v3[67];
  v64 = v4;
  v65 = v5;
  v66 = v6;
  v7 = SF_DRAFT_PTR(int, *(int **)(v88 + 12));
  v8 = v7[1];
  v9 = v7[2];
  v10 = v7[3];
  (*SF_DRAFT_PTR(uint32, 0x80130C98u)) = *v7;
  (*SF_DRAFT_PTR(uint32, 0x80130C9Cu)) = v8;
  (*SF_DRAFT_PTR(uint32, 0x80130CA0u)) = v9;
  (*SF_DRAFT_PTR(uint32, 0x80130CA4u)) = v10;
  v11 = v7[5];
  v12 = v7[7];
  (*SF_DRAFT_PTR(uint32, 0x80130CA8u)) = v7[4];
  (*SF_DRAFT_PTR(uint32, 0x80130CACu)) = v11;
  (*SF_DRAFT_PTR(uint32, 0x80130CB4u)) = v12;
  (*SF_DRAFT_PTR(uint32, 0x80130CB0u)) = -17 - v4;
  sub_800CD35C(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80130C98u))));
  (*SF_DRAFT_PTR(uint32, 0x80128E20u)) = 3;
  (*SF_DRAFT_PTR(uint32, 0x80128E28u)) = (int)(*SF_DRAFT_PTR(uint32, 0x80128E2Cu));
  (*SF_DRAFT_PTR(uint32, 0x8012C7B8u)) = (*SF_DRAFT_PTR(uint32, 0x80130CACu));
  (*SF_DRAFT_PTR(uint32, 0x8012C7C0u)) = (*SF_DRAFT_PTR(uint32, 0x80130CB4u));
  (*SF_DRAFT_PTR(uint32, 0x80116A34u)) = (int)(*SF_DRAFT_PTR(uint32, 0x8012FCE0u));
  (*SF_DRAFT_PTR(uint32, 0x8012C7BCu)) = (0u - (*SF_DRAFT_PTR(uint32, 0x80130CB0u)));
  (*SF_DRAFT_PTR(uint32, 0x8012C7C8u)) = (__int16)(*SF_DRAFT_PTR(uint32, 0x80130C9Cu));
  (*SF_DRAFT_PTR(uint32, 0x8012C7D0u)) = (__int16)(*SF_DRAFT_PTR(uint32, 0x80130CA8u));
  (*SF_DRAFT_PTR(uint32, 0x8012C7CCu)) = -SHIWORD((*SF_DRAFT_PTR(uint32, 0x80130CA0u)));
  if ( v1 )
  {
    v91 = &v70;
    while ( 1 )
    {
      v13 = *v1;
      v14 = *(_DWORD *)(*v1 + 16);
      v90 = *(uint8 *)(*v1 + 11);
      if ( v13 == v88 || (v90 & 6) == 0 )
        goto LABEL_53;
      if ( *SF_DRAFT_PTR(_DWORD, (v14 + 116)) == -1 )
        sub_80076990(sf_draft_guest_address(SF_DRAFT_PTR(int, v14)));
      v67 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 12)) + 20));
      v68 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 12)) + 24));
      v15 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 12)) + 28));
      v68 = -v68;
      v69 = v15;
      if ( *SF_DRAFT_PTR(__int16, (v14 + 58)) < sub_80079A70(sf_draft_guest_address(&v63), sf_draft_guest_address(&v67)) )
        goto LABEL_53;
      v16 = v90;
      if ( (v90 & 2) != 0 )
        break;
LABEL_29:
      if ( (v16 & 4) != 0 )
      {
        v48 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(_WORD, (v13 + 20)) & 0x3FF) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        v49 = *SF_DRAFT_PTR(__int16, (v48 + 2));
        if ( v49 == 666 )
          v50 = 666;
        else
          v50 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v49 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
        if ( v50 == 32 )
        {
          v51 = -120;
        }
        else if ( v50 == 48 || v50 == 37 || v50 == 39 || (v51 = -50, v50 == 90) )
        {
          v51 = 1;
        }
        sub_80077DB0(*(uint16 **)(v13 + 12), (*SF_DRAFT_PTR(uint32, 0x8012FCE0u)));
        v61 = v13;
        sub_80076630(sf_draft_guest_address(v91), sf_draft_guest_address(SF_DRAFT_PTR(int, v14)), v51, ((*SF_DRAFT_PTR(_BYTE, (v13 + 11)) & 8) != 0));
        if ( sub_80077278(sf_draft_guest_address(v91), -666, sf_draft_guest_address(v57), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8012C7B8u)))) )
        {
          sub_80077BFC(sf_draft_guest_address((uint16 *)&(*SF_DRAFT_PTR(uint32, 0x8010E1ECu))));
          if ( sub_80077B48(v57[8], v57[9], v57[10]) )
          {
            v71 = (*SF_DRAFT_PTR(uint32, 0x8012DB60u));
            v72 = (*SF_DRAFT_PTR(uint32, 0x8012DB64u));
            v73 = (*SF_DRAFT_PTR(uint32, 0x8012DB68u));
            v74 = (*SF_DRAFT_PTR(uint32, 0x8012DB6Cu));
            v75 = (*SF_DRAFT_PTR(uint32, 0x8012DB70u));
            v76 = (*SF_DRAFT_PTR(uint32, 0x8012DB74u));
            v77 = (*SF_DRAFT_PTR(uint32, 0x8012DB78u));
            v78 = (*SF_DRAFT_PTR(uint32, 0x8012DB7Cu));
            (*SF_DRAFT_PTR(uint32, 0x8012DB60u)) = (*SF_DRAFT_PTR(uint32, 0x80130CD8u));
            (*SF_DRAFT_PTR(uint32, 0x8012DB64u)) = (*SF_DRAFT_PTR(uint32, 0x80130CDCu));
            (*SF_DRAFT_PTR(uint32, 0x8012DB68u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE0u));
            (*SF_DRAFT_PTR(uint32, 0x8012DB6Cu)) = (*SF_DRAFT_PTR(uint32, 0x80130CE4u));
            (*SF_DRAFT_PTR(uint32, 0x8012DB70u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE8u));
            (*SF_DRAFT_PTR(uint32, 0x8012DB74u)) = (*SF_DRAFT_PTR(uint32, 0x80130CECu));
            (*SF_DRAFT_PTR(uint32, 0x8012DB78u)) = (*SF_DRAFT_PTR(uint32, 0x80130CF0u));
            (*SF_DRAFT_PTR(uint32, 0x8012DB7Cu)) = (*SF_DRAFT_PTR(uint32, 0x80130CF4u));
            (*SF_DRAFT_PTR(uint32, 0x80130CD8u)) = v71;
            (*SF_DRAFT_PTR(uint32, 0x80130CDCu)) = v72;
            (*SF_DRAFT_PTR(uint32, 0x80130CE0u)) = v73;
            (*SF_DRAFT_PTR(uint32, 0x80130CE4u)) = v74;
            (*SF_DRAFT_PTR(uint32, 0x80130CE8u)) = v75;
            (*SF_DRAFT_PTR(uint32, 0x80130CECu)) = v76;
            (*SF_DRAFT_PTR(uint32, 0x80130CF0u)) = v77;
            (*SF_DRAFT_PTR(uint32, 0x80130CF4u)) = v78;
            sub_80077DB0(*(uint16 **)(v13 + 12), (*SF_DRAFT_PTR(uint32, 0x8012FCE0u)));
            v62 = v13;
            if ( sub_80077278(sf_draft_guest_address(v91), -666, sf_draft_guest_address(v57), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8012C7B8u)))) )
            {
              sub_80077BFC(sf_draft_guest_address((uint16 *)&(*SF_DRAFT_PTR(uint32, 0x8010E1ECu))));
              if ( sub_80077B48(v57[8], v57[9], v57[10]) )
              {
                v79 = (*SF_DRAFT_PTR(uint32, 0x80012310u));
                v80 = (*SF_DRAFT_PTR(uint32, 0x80012314u));
                v81 = (*SF_DRAFT_PTR(uint32, 0x80012318u));
                v82 = (*SF_DRAFT_PTR(uint32, 0x8001231Cu));
                if ( v48 )
                {
                  v52 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(v48 + 12));
                  if ( v52 )
                  {
                    v53 = v52[98];
                    v54 = v52[99];
                    v55 = v52[100];
                    v79 = v52[97];
                    v80 = v53;
                    v81 = v54;
                    v82 = v55;
                  }
                }
                if ( (v90 & 2) != 0 && (v79 || v80 || v81) )
                {
                  v56 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(v87 + 12));
                  v56[97] += v79;
                  v56[98] += v80;
                  v56[99] += v81;
                }
                sub_80015364(0x1Au, 1u, (*SF_DRAFT_PTR(__int16, (v87 + 2))), (*SF_DRAFT_PTR(__int16, (v48 + 2))), (v57[0]), (v57[1]), (v57[2]), (v57[3]));
              }
            }
          }
        }
      }
LABEL_53:
      v1 = (int *)v1[2];
      if ( !v1 )
        return;
    }
    v17 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(_WORD, (v13 + 20)) & 0x3FF) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v18 = *(uint8 *)(v17 + 34);
    v19 = (unsigned int)(v18 - 1) < 2;
    v20 = v18 == 0xE;
    if ( v89 >= 10 )
      sub_800DDC34(1, 0, 0x800122E4u, 683);
    if ( v20 )
    {
      v21 = *SF_DRAFT_PTR(_DWORD, (v14 + 24));
      *SF_DRAFT_PTR(_DWORD, (v14 + 16)) += 16;
      v22 = *SF_DRAFT_PTR(_DWORD, v14);
      *SF_DRAFT_PTR(_DWORD, (v14 + 24)) = v21 + 16;
      v23 = *SF_DRAFT_PTR(_DWORD, (v14 + 8)) - 16;
      *SF_DRAFT_PTR(_DWORD, v14) = v22 - 16;
      *SF_DRAFT_PTR(_DWORD, (v14 + 8)) = v23;
    }
    else
    {
      v24 = v17;
      if ( !v19 )
        goto LABEL_21;
      v25 = SF_DRAFT_PTR(uint32, 0x8010C388u)[8 * *(uint8 *)(76 * *SF_DRAFT_PTR(__int16, (v17 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)];
      v79 = (*SF_DRAFT_PTR(uint32, 0x800122F0u));
      v80 = (*SF_DRAFT_PTR(uint32, 0x800122F4u));
      v81 = (*SF_DRAFT_PTR(uint32, 0x800122F8u));
      v82 = (*SF_DRAFT_PTR(uint32, 0x800122FCu));
      v83 = (*SF_DRAFT_PTR(uint32, 0x80012300u));
      v84 = (*SF_DRAFT_PTR(uint32, 0x80012304u));
      v85 = (*SF_DRAFT_PTR(uint32, 0x80012308u));
      v86 = (*SF_DRAFT_PTR(uint32, 0x8001230Cu));
      v26 = *SF_DRAFT_PTR(_DWORD, (v14 + 4));
      v27 = *SF_DRAFT_PTR(_DWORD, (v14 + 8));
      v28 = *SF_DRAFT_PTR(_DWORD, (v14 + 12));
      v71 = *SF_DRAFT_PTR(_DWORD, v14);
      v72 = v26;
      v73 = v27;
      v74 = v28;
      v29 = *SF_DRAFT_PTR(_DWORD, (v14 + 20));
      v30 = *SF_DRAFT_PTR(_DWORD, (v14 + 24));
      v31 = *SF_DRAFT_PTR(_DWORD, (v14 + 28));
      v75 = *SF_DRAFT_PTR(_DWORD, (v14 + 16));
      v76 = v29;
      v77 = v30;
      v78 = v31;
      v32 = (*SF_DRAFT_PTR(uint32, 0x800122F4u));
      v33 = (*SF_DRAFT_PTR(uint32, 0x800122F8u));
      v34 = (*SF_DRAFT_PTR(uint32, 0x800122FCu));
      *SF_DRAFT_PTR(_DWORD, v14) = (*SF_DRAFT_PTR(uint32, 0x800122F0u));
      *SF_DRAFT_PTR(_DWORD, (v14 + 4)) = v32;
      *SF_DRAFT_PTR(_DWORD, (v14 + 8)) = v33;
      *SF_DRAFT_PTR(_DWORD, (v14 + 12)) = v34;
      v35 = v84;
      v36 = v85;
      v37 = v86;
      *SF_DRAFT_PTR(_DWORD, (v14 + 16)) = v83;
      *SF_DRAFT_PTR(_DWORD, (v14 + 20)) = v35;
      *SF_DRAFT_PTR(_DWORD, (v14 + 24)) = v36;
      *SF_DRAFT_PTR(_DWORD, (v14 + 28)) = v37;
      v24 = v17;
      if ( !v25 || (**(_DWORD **)(v17 + 16) & 0x100) == 0 && (*SF_DRAFT_PTR(uint16, 0x80130C88u)) != 4 )
      {
LABEL_21:
        sub_80079228(v24, v87, v89++, v90 & 4);
        if ( v20 )
        {
          v38 = *SF_DRAFT_PTR(_DWORD, (v14 + 24));
          *SF_DRAFT_PTR(_DWORD, (v14 + 16)) -= 16;
          v39 = *SF_DRAFT_PTR(_DWORD, v14);
          *SF_DRAFT_PTR(_DWORD, (v14 + 24)) = v38 - 16;
          v40 = *SF_DRAFT_PTR(_DWORD, (v14 + 8)) + 16;
          *SF_DRAFT_PTR(_DWORD, v14) = v39 + 16;
          *SF_DRAFT_PTR(_DWORD, (v14 + 8)) = v40;
        }
        else
        {
          v41 = v20;
          if ( !v19 )
          {
LABEL_26:
            if ( v41 )
              *SF_DRAFT_PTR(_WORD, (v13 + 22)) = 1;
            v16 = v90;
            goto LABEL_29;
          }
          v42 = v72;
          v43 = v73;
          v44 = v74;
          *SF_DRAFT_PTR(_DWORD, v14) = v71;
          *SF_DRAFT_PTR(_DWORD, (v14 + 4)) = v42;
          *SF_DRAFT_PTR(_DWORD, (v14 + 8)) = v43;
          *SF_DRAFT_PTR(_DWORD, (v14 + 12)) = v44;
          v45 = v76;
          v46 = v77;
          v47 = v78;
          *SF_DRAFT_PTR(_DWORD, (v14 + 16)) = v75;
          *SF_DRAFT_PTR(_DWORD, (v14 + 20)) = v45;
          *SF_DRAFT_PTR(_DWORD, (v14 + 24)) = v46;
          *SF_DRAFT_PTR(_DWORD, (v14 + 28)) = v47;
        }
        v41 = v20;
        goto LABEL_26;
      }
      if ( (*SF_DRAFT_PTR(_DWORD, (v25 + 40)) & 0x4000000) == 0 )
        sub_800DDC34(1, 0, 0x800122E4u, 711);
      *SF_DRAFT_PTR(_DWORD, (v14 + 24)) = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v25 + 32)) + 18)) + 16;
    }
    v24 = v17;
    goto LABEL_21;
  }
}

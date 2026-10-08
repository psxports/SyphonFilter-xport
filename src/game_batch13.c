#include "game_draft.h"
#include <stdio.h>
#include <stdlib.h>
static uint32 sf_draft_missing_stale_8001E8A4(uint32 local_offset)
{
    fprintf(stderr, "TODO 8001E8A4 original unwritten local +%X\n", local_offset);
    abort();
}

uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);


/* TODO Resolve external dependency signatures */
uint32 sub_80020224();
uint32 sub_80024284();
uint32 sub_8002A890();
uint32 sub_8002DE00();
uint32 sub_80050980();
uint32 sub_8006AAF0();
uint32 sub_8008BEA0();
uint32 sub_8008C358();
uint32 sub_8008C464();
uint32 sub_8008C928();
uint32 sub_8008CA44();
uint32 sub_80090CDC();
uint32 sub_800C7C6C();
uint32 sub_800CD68C();

sint32 sub_8001E8A4(void)
{
    FUNCTION_MARKER(0x8001E8A4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  _DWORD *v1; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 

  _DWORD *v7; 
  int v8; 
  int v9; 
  int v10; 
  _DWORD *v11; 
  int v12; 
  int v13; 
  int v14; 
  _DWORD *v15; 
  int v16; 
  int v17; 
  int v18; 

  _DWORD *v20; 
  int v21; 
  int v22; 
  int v23; 
  _DWORD *v24; 
  int v25; 
  int v26; 
  int v27; 
  _DWORD *v28; 
  int v29; 
  int v30; 
  int v31; 

  _DWORD *v33; 
  int v34; 
  int v35; 
  int v36; 
  _DWORD *v37; 
  int v38; 
  int v39; 
  int v40; 
  _DWORD *v41; 
  int v42; 
  int v43; 
  int v44; 

  _DWORD *v46; 
  int v47; 
  int v48; 
  int v49; 
  _DWORD *v50; 
  int v51; 
  int v52; 
  int v53; 
  _DWORD *v54; 
  int v55; 
  int v56; 
  int v57; 

  _DWORD *v59; 
  int v60; 
  int v61; 
  int v62; 
  _DWORD *v63; 
  int v64; 
  int v65; 
  int v66; 

  _DWORD *v68; 
  int v69; 
  int v70; 
  int v71; 
  _DWORD *v72; 
  int v73; 
  int v74; 
  int v75; 

  _DWORD *v77; 
  int v78; 
  int v79; 
  int v80; 
  _DWORD *v81; 
  int v82; 
  int v83; 
  int v84; 
  _DWORD *v85; 
  int v86; 
  int v87; 
  int v88; 

  _DWORD *v90; 
  int v91; 
  int v92; 
  int v93; 
  int v95; 
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  int output_position[4];
  int v116; 
  int v117; 
  int v118; 
  int v119; 
  int v120; 
  int v121; 
  int v122; 
  int v124; 
  int v125; 
  int vars0; 
  int vars4; 

  v1 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  if ( v1[514] )
  {
    v2 = v1[529];
    v3 = v1[530];
    v4 = v1[531];
    v124 = v1[528];
    v125 = v2;
    vars0 = v3;
    vars4 = v4;
  }
  else
  {
    v124 = v1[528];
  }
  v5 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284));
  *SF_DRAFT_PTR(_DWORD, (v5 + 3356)) = v124;
  sub_80018994(v5, 1, 5, 0);
  v7 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v120 = 1;
  v121 = 1;
  v122 = 1;
  if ( v7[676] )
  {
    v8 = v7[691];
    v9 = v7[692];
    v10 = v7[693];
    v108 = v7[690];
    v109 = v8;
    v110 = v9;
    v111 = v10;
  }
  else
  {
    v108 = v7[690];
    v109 = sf_draft_missing_stale_8001E8A4(0x44u);
    v110 = sf_draft_missing_stale_8001E8A4(0x48u);
    v111 = sf_draft_missing_stale_8001E8A4(0x4Cu);
  }
  v11 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v12 = v109;
  v13 = v110;
  v14 = v111;
  v11[839] = v108;
  v11[840] = v12;
  v11[841] = v13;
  v11[842] = v14;
  v15 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v16 = v121;
  v17 = v122;
  v18 = sf_draft_missing_stale_8001E8A4(0x7Cu);
  v15[844] = v120;
  v15[845] = v16;
  v15[846] = v17;
  v15[847] = v18;
  sub_80018994((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 1, 7, 0);
  sub_8001D9A4();
  v20 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  if ( v20[595] )
  {
    v21 = v20[610];
    v22 = v20[611];
    v23 = v20[612];
    v104 = v20[609];
    v105 = v21;
    v106 = v22;
    v107 = v23;
  }
  else
  {
    v104 = v20[609];
    v105 = sf_draft_missing_stale_8001E8A4(0x34u);
    v106 = sf_draft_missing_stale_8001E8A4(0x38u);
    v107 = sf_draft_missing_stale_8001E8A4(0x3Cu);
  }
  v24 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v120 = 1;
  v121 = 1;
  v122 = 1;
  v25 = v105;
  v26 = v106;
  v27 = v107;
  v24[839] = v104;
  v24[840] = v25;
  v24[841] = v26;
  v24[842] = v27;
  v28 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v29 = v121;
  v30 = v122;
  v31 = sf_draft_missing_stale_8001E8A4(0x7Cu);
  v28[844] = v120;
  v28[845] = v29;
  v28[846] = v30;
  v28[847] = v31;
  sub_80018994((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 1, 6, 0);
  sub_8001E314();
  v33 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  if ( v33[190] )
  {
    v34 = v33[205];
    v35 = v33[206];
    v36 = v33[207];
    v100 = v33[204];
    v101 = v34;
    v102 = v35;
    v103 = v36;
  }
  else
  {
    v100 = v33[204];
    v101 = sf_draft_missing_stale_8001E8A4(0x24u);
    v102 = sf_draft_missing_stale_8001E8A4(0x28u);
    v103 = sf_draft_missing_stale_8001E8A4(0x2Cu);
  }
  v37 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v120 = 1;
  v121 = 1;
  v122 = 1;
  v38 = v101;
  v39 = v102;
  v40 = v103;
  v37[839] = v100;
  v37[840] = v38;
  v37[841] = v39;
  v37[842] = v40;
  v41 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v42 = v121;
  v43 = v122;
  v44 = sf_draft_missing_stale_8001E8A4(0x7Cu);
  v41[844] = v120;
  v41[845] = v42;
  v41[846] = v43;
  v41[847] = v44;
  sub_80018994((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 1, 1, 0);
  sub_8001B51C();
  sub_8001E350();
  v46 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  if ( v46[109] )
  {
    v47 = v46[124];
    v48 = v46[125];
    v49 = v46[126];
    v96 = v46[123];
    v97 = v47;
    v98 = v48;
    v99 = v49;
  }
  else
  {
    v96 = v46[123];
    v97 = sf_draft_missing_stale_8001E8A4(0x14u);
    v98 = sf_draft_missing_stale_8001E8A4(0x18u);
    v99 = sf_draft_missing_stale_8001E8A4(0x1Cu);
  }
  v50 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v120 = 1;
  v121 = 1;
  v122 = 1;
  v51 = v97;
  v52 = v98;
  v53 = v99;
  v50[839] = v96;
  v50[840] = v51;
  v50[841] = v52;
  v50[842] = v53;
  v54 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v55 = v121;
  v56 = v122;
  v57 = sf_draft_missing_stale_8001E8A4(0x7Cu);
  v54[844] = v120;
  v54[845] = v55;
  v54[846] = v56;
  v54[847] = v57;
  sub_80018994((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 1, 0, 0);
  sub_8001E710(sf_draft_guest_address(output_position));
  v59 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v120 = 1;
  v121 = 1;
  v122 = 1;
  v60 = output_position[1];
  v61 = output_position[2];
  v62 = output_position[3];
  v59[839] = output_position[0];
  v59[840] = v60;
  v59[841] = v61;
  v59[842] = v62;
  v63 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v64 = v121;
  v65 = v122;
  v66 = sf_draft_missing_stale_8001E8A4(0x7Cu);
  v63[844] = v120;
  v63[845] = v64;
  v63[846] = v65;
  v63[847] = v66;
  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284)) + 3392)) = 0;
  sub_80018994((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 1, 2, 1);
  v68 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v69 = output_position[1];
  v70 = output_position[2];
  v71 = output_position[3];
  v68[839] = output_position[0];
  v68[840] = v69;
  v68[841] = v70;
  v68[842] = v71;
  v72 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v73 = v121;
  v74 = v122;
  v75 = sf_draft_missing_stale_8001E8A4(0x7Cu);
  v72[844] = v120;
  v72[845] = v73;
  v72[846] = v74;
  v72[847] = v75;
  sub_80018994((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 1, 2, 0);
  (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(&v95);
  sub_80020258();
  v77 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  if ( v77[352] )
  {
    v78 = v77[367];
    v79 = v77[368];
    v80 = v77[369];
    v116 = v77[366];
    v117 = v78;
    v118 = v79;
    v119 = v80;
  }
  else
  {
    v116 = v77[366];
    v117 = sf_draft_missing_stale_8001E8A4(0x64u);
    v118 = sf_draft_missing_stale_8001E8A4(0x68u);
    v119 = sf_draft_missing_stale_8001E8A4(0x6Cu);
  }
  v81 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v120 = 1;
  v121 = 1;
  v122 = 1;
  v82 = v117;
  v83 = v118;
  v84 = v119;
  v81[839] = v116;
  v81[840] = v82;
  v81[841] = v83;
  v81[842] = v84;
  v85 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v86 = v121;
  v87 = v122;
  v88 = sf_draft_missing_stale_8001E8A4(0x7Cu);
  v85[844] = v120;
  v85[845] = v86;
  v85[846] = v87;
  v85[847] = v88;
  sub_80018994((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 1, 3, 0);
  v90 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  if ( v90[757] )
  {
    v91 = v90[772];
    v92 = v90[773];
    v125 = v90[771];
    vars0 = v91;
    vars4 = v92;
  }
  else
  {
    v125 = v90[771];
  }
  v93 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284));
  *SF_DRAFT_PTR(_DWORD, (v93 + 3356)) = v125;
  return sub_80018994(v93, 1, 8, 0);
}

sint32 sub_800BF2A0(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800BF2A0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int *v4; 
  int v5; 
  signed int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  __int16 v13; 
  bool v14; // dc
  int *v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  uint16 *v20; 
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

  v4 = SF_DRAFT_PTR(int, 0x801311B0u);
  do
  {
    if ( *v4 )
    {
      v5 = *v4;
      if ( *(int *)(*v4 + 12) >= 0 )
      {
        v6 = (uint8)*SF_DRAFT_PTR(_DWORD, (v5 + 12));
        v7 = 0;
        if ( (int)(*SF_DRAFT_PTR(_DWORD, (v5 + 12)) & 0x80000000) < v6 )
        {
          v8 = 0;
          do
          {
            v9 = 24 * (v8 >> 16);
            v10 = v9 + *(_DWORD *)(*v4 + 4);
            v11 = v7 + 1;
            if ( (*SF_DRAFT_PTR(_WORD, v10) & 0x1F) == 2 )
            {
              v12 = sub_800C2FA8((*SF_DRAFT_PTR(_DWORD, (v10 + 20))));
              if ( v12 )
                v13 = *SF_DRAFT_PTR(_WORD, (v12 + 12));
              else
                LOBYTE(v13) = 99;
              *(_BYTE *)(v9 + *(_DWORD *)(*v4 + 4) + 3) = (uint8)v13;
              v11 = v7 + 1;
            }
            v7 = v11;
            v14 = (__int16)v11 < v6;
            v8 = v11 << 16;
          }
          while ( v14 );
        }
      }
    }
    ++v4;
  }
  while ( (int)v4 < (int)&(*SF_DRAFT_PTR(uint32, 0x801311F0u)) );
  v15 = SF_DRAFT_PTR(int, 0x801311B0u);
  do
  {
    v16 = *v15;
    if ( !*v15 )
      goto LABEL_42;
    v17 = *(uint8 *)(v16 + 12);
    v18 = 0;
    if ( !*SF_DRAFT_PTR(_BYTE, (v16 + 12)) )
      goto LABEL_41;
    v19 = 0;
    do
    {
      v20 = (uint16 *)(24 * (v19 >> 16) + *(_DWORD *)(*v15 + 4));
      v21 = *v20;
      v22 = v21 & 0x1F;
      if ( *(int *)(*v15 + 12) < 0 )
      {
        v23 = v21 << 16;
        if ( v23 >> 21 )
        {
          v22 = 9;
          if ( ((v23 >> 16) & 0x8000) != 0 )
            v22 = 10;
          *((_DWORD *)v20 + 5) = (v23 >> 27) & 0xF;
          *(_BYTE *)(24 * (v19 >> 16) + *(_DWORD *)(*v15 + 4) + 2) = (*(uint16 *)(24 * (v19 >> 16)
                                                                                          + *(_DWORD *)(*v15 + 4)) >> 5) & 0x3F;
        }
      }
      if ( (unsigned int)(v22 - 7) >= 2 && (unsigned int)(v22 - 9) >= 2 )
      {
        *(_BYTE *)(24 * (__int16)v18 + *(_DWORD *)(*v15 + 4) + 2) = *(_DWORD *)(*v15 + 8);
        goto LABEL_36;
      }
      v24 = 24 * (__int16)v18 + *(_DWORD *)(*v15 + 4);
      v25 = *(uint8 *)(v24 + 2);
      if ( (unsigned int)(v22 - 7) >= 2 )
        v26 = sub_800C2F28((*SF_DRAFT_PTR(_DWORD, (v24 + 20))));
      else
        v26 = sub_800C2EE0((*SF_DRAFT_PTR(_DWORD, (v24 + 20))));
      if ( !v26 )
        goto LABEL_36;
      v27 = 24 * (__int16)v18;
      *(_BYTE *)(v27 + *(_DWORD *)(*v15 + 4) + 2) = *SF_DRAFT_PTR(_DWORD, (v26 + 8));
      v28 = 24 * v25;
      *(_BYTE *)(v27 + *(_DWORD *)(*v15 + 4) + 3) = *(_BYTE *)(24 * v25 + *SF_DRAFT_PTR(_DWORD, (v26 + 4)) + 3);
      *(_BYTE *)(v27 + *(_DWORD *)(*v15 + 4) + 4) = *(_BYTE *)(24 * v25 + *SF_DRAFT_PTR(_DWORD, (v26 + 4)) + 4);
      *(_BYTE *)(v27 + *(_DWORD *)(*v15 + 4) + 5) = *(_BYTE *)(24 * v25 + *SF_DRAFT_PTR(_DWORD, (v26 + 4)) + 5);
      *(_BYTE *)(v27 + *(_DWORD *)(*v15 + 4) + 6) = *(_BYTE *)(24 * v25 + *SF_DRAFT_PTR(_DWORD, (v26 + 4)) + 6);
      if ( v22 == 7 || v22 == 9 )
      {
        *(_BYTE *)(v27 + *(_DWORD *)(*v15 + 4) + 7) = *SF_DRAFT_PTR(_BYTE, (v28 + *SF_DRAFT_PTR(_DWORD, (v26 + 4)) + 7));
        *(_BYTE *)(v27 + *(_DWORD *)(*v15 + 4) + 8) = *SF_DRAFT_PTR(_BYTE, (v28 + *SF_DRAFT_PTR(_DWORD, (v26 + 4)) + 8));
        *(_BYTE *)(v27 + *(_DWORD *)(*v15 + 4) + 9) = *SF_DRAFT_PTR(_BYTE, (v28 + *SF_DRAFT_PTR(_DWORD, (v26 + 4)) + 9));
        *(_WORD *)(v27 + *(_DWORD *)(*v15 + 4) + 10) = *SF_DRAFT_PTR(_WORD, (v28 + *SF_DRAFT_PTR(_DWORD, (v26 + 4)) + 10));
        *(_BYTE *)(v27 + *(_DWORD *)(*v15 + 4) + 12) = *SF_DRAFT_PTR(_BYTE, (v28 + *SF_DRAFT_PTR(_DWORD, (v26 + 4)) + 12));
        *(_WORD *)(v27 + *(_DWORD *)(*v15 + 4) + 14) = *SF_DRAFT_PTR(_WORD, (v28 + *SF_DRAFT_PTR(_DWORD, (v26 + 4)) + 14));
        *(_BYTE *)(v27 + *(_DWORD *)(*v15 + 4) + 18) = *SF_DRAFT_PTR(_BYTE, (v28 + *SF_DRAFT_PTR(_DWORD, (v26 + 4)) + 18));
        if ( v22 != 9 )
          goto LABEL_34;
        *(_WORD *)(v27 + *(_DWORD *)(*v15 + 4)) = *SF_DRAFT_PTR(_WORD, (v28 + *SF_DRAFT_PTR(_DWORD, (v26 + 4)))) & 0x1F | (32 * v25) | (*(_WORD *)(v27 + *(_DWORD *)(*v15 + 4) + 20) << 11);
      }
      else
      {
        if ( v22 != 10 )
        {
LABEL_34:
          *(_WORD *)(v27 + *(_DWORD *)(*v15 + 4)) = *SF_DRAFT_PTR(_WORD, (v28 + *SF_DRAFT_PTR(_DWORD, (v26 + 4))));
          goto LABEL_36;
        }
        *(_WORD *)(v27 + *(_DWORD *)(*v15 + 4)) = *SF_DRAFT_PTR(_WORD, (v28 + *SF_DRAFT_PTR(_DWORD, (v26 + 4)))) & 0x1F | (32 * v25) | (*(_WORD *)(v27 + *(_DWORD *)(*v15 + 4) + 20) << 11) | 0x8000;
      }
LABEL_36:
      v29 = 24 * (__int16)v18 + *(_DWORD *)(*v15 + 4);
      v30 = v18 + 1;
      if ( (*SF_DRAFT_PTR(_WORD, v29) & 0x1F) != 2 )
      {
        v30 = v18 + 1;
        if ( *(int *)(*v15 + 12) >= 0 )
        {
          *SF_DRAFT_PTR(_BYTE, (v29 + 3)) = *SF_DRAFT_PTR(_BYTE, (v29 + 7));
          v30 = v18 + 1;
        }
      }
      v18 = v30;
      v14 = (__int16)v30 < v17;
      v19 = v30 << 16;
    }
    while ( v14 );
    v16 = *v15;
LABEL_41:
    *SF_DRAFT_PTR(_DWORD, (v16 + 12)) |= 0x80000000;
LABEL_42:
    ++v15;
  }
  while ( (int)v15 < (int)&(*SF_DRAFT_PTR(uint32, 0x801311F0u)) );
  return sub_800C2C94(a1, a2);
}

sint32 sub_8004C7B0(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8004C7B0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  char v4; 
  int v5; 
  int v6; 
  int *v7 = SF_DRAFT_PTR(int, SF_DRAFT_GP); 
  int v8; 
  int *v9; 
  int v10; 
  int result; 

  int *v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 

  int v22; 

  int v24; 
  int v25; 

  int v27; 

  int v29; 

  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  unsigned int v38; 
  int v39; 

  int v41; 
  __int16 v42; 

  int *v44; 
  int v45; 
  int v46; 

  v4 = sub_800EC8F4();
  v5 = a2;
  v6 = *SF_DRAFT_PTR(__int16, (a1 + 30));
  v8 = v7[837];
  *SF_DRAFT_PTR(_BYTE, (a1 + 34)) = v7[666] >> 1;
  v9 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
  v10 = v7[668];
  *SF_DRAFT_PTR(_DWORD, (a1 + 4)) = v8;
  *SF_DRAFT_PTR(_DWORD, a1) = v10;
  v46 = (v4 & 1) + 2;
  result = sub_80018430(sf_draft_guest_address(v9), sf_draft_guest_address(&v45));
  if ( v6 >= 0 )
  {
    result = 2 * v6;
    do
    {
      v13 = &SF_DRAFT_PTR(uint32, 0x80137740u)[8 * result + 8 * v6 + 2 * v6];
      v14 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2732));
      if ( v14 == 1 )
      {
        *v13 = ((*SF_DRAFT_PTR(uint32, 0x8011CE48u)) + ((*SF_DRAFT_PTR(uint32, 0x8011CE68u)) & sub_800EC8F4()));
        v13[1] = (*SF_DRAFT_PTR(uint32, 0x8011CE4Cu)) + ((*SF_DRAFT_PTR(uint32, 0x8011CE6Cu)) & sub_800EC8F4());
        v13[2] = (*SF_DRAFT_PTR(uint32, 0x8011CE50u)) + ((*SF_DRAFT_PTR(uint32, 0x8011CE70u)) & sub_800EC8F4());
      }
      else if ( v14 )
      {
        v17 = (sub_800EC8F4() & (*SF_DRAFT_PTR(uint32, 0x8011CE68u))) * ((*SF_DRAFT_PTR(uint32, 0x8011CE58u)) - (*SF_DRAFT_PTR(uint32, 0x8011CE48u)));
        if ( !(*SF_DRAFT_PTR(uint32, 0x8011CE68u)) )
          _break(7u, 0);
        if ( (*SF_DRAFT_PTR(uint32, 0x8011CE68u)) == -1 && v17 == 0x80000000 )
          _break(6u, 0);
        *v13 = ((*SF_DRAFT_PTR(uint32, 0x8011CE48u)) + v17 / (*SF_DRAFT_PTR(uint32, 0x8011CE68u)));
        v18 = (*SF_DRAFT_PTR(uint32, 0x8011CE6Cu)) & sub_800EC8F4();
        v19 = *v13;
        v13[1] = (*SF_DRAFT_PTR(uint32, 0x8011CE4Cu)) - v18;
        v13[2] = (*SF_DRAFT_PTR(uint32, 0x8011CE50u)) + (((v19 - (*SF_DRAFT_PTR(uint32, 0x8011CE48u))) * *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2728))) >> 8);
      }
      else
      {
        v15 = (*SF_DRAFT_PTR(uint32, 0x8011CE4Cu));
        v16 = (*SF_DRAFT_PTR(uint32, 0x8011CE50u));
        *v13 = (0x8011CE48u);
        v13[1] = v15;
        v13[2] = v16;
        v13[3] = (*SF_DRAFT_PTR(uint32, 0x8011CE54u));
      }
      if ( *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2748)) )
      {
        v20 = sub_800EC8F4();
        if ( (*SF_DRAFT_PTR(uint32, 0x8011CE78u)) + ((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2748)) & v20) << 8) < 0 )
        {
          v25 = sub_800EC8F4();
          v24 = (0u - ((0u - ((*SF_DRAFT_PTR(uint32, 0x8011CE78u)) + ((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2748)) & v25) << 8))) >> (12 - *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2752)))));
        }
        else
        {
          v22 = sub_800EC8F4();
          v24 = ((*SF_DRAFT_PTR(uint32, 0x8011CE78u)) + ((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2748)) & v22) << 8)) >> (12 - *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2752)));
        }
        v13[4] = v24;
        v27 = sub_800EC8F4();
        v13[5] = ((*SF_DRAFT_PTR(uint32, 0x8011CE7Cu)) + ((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2748)) & v27) << 8)) << *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2752));
        v29 = sub_800EC8F4();
        if ( (*SF_DRAFT_PTR(uint32, 0x8011CE80u)) + ((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2748)) & v29) << 8) < 0 )
        {
          v33 = sub_800EC8F4();
          v32 = (0u - ((0u - ((*SF_DRAFT_PTR(uint32, 0x8011CE80u)) + ((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2748)) & v33) << 8))) >> (12 - *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2752)))));
        }
        else
        {
          v31 = sub_800EC8F4();
          v32 = ((*SF_DRAFT_PTR(uint32, 0x8011CE80u)) + ((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2748)) & v31) << 8)) >> (12 - *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2752)));
        }
      }
      else
      {
        v34 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2752));
        v13[4] = (*SF_DRAFT_PTR(uint32, 0x8011CE78u)) >> (12 - v34);
        v13[5] = (*SF_DRAFT_PTR(uint32, 0x8011CE7Cu)) << v34;
        v32 = (*SF_DRAFT_PTR(uint32, 0x8011CE80u)) >> (12 - v34);
      }
      v13[6] = v32;
      v35 = v13[6];
      v36 = v13[5] >> 12;
      *v13 += v13[4];
      v37 = v13[2] + v35;
      v13[1] += v36;
      v13[2] = v37;
      *((_WORD *)v13 + 18) = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2664)) + (v5 >> v46);
      v38 = *SF_DRAFT_PTR(_DWORD, (a1 + 48));
      --v5;
      if ( v38 < 2 )
      {
        v13[8] = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2668));
        *((_WORD *)v13 + 49) = sub_800EC8F4();
        v39 = sub_800EC8F4();
        v41 = (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2740)) & v39) - (*SF_DRAFT_PTR(int, (SF_DRAFT_GP + 2740)) >> 1) + *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2736));
        *((_WORD *)v13 + 43) = v41;
        *((_WORD *)v13 + 46) = ((__int16)v41 >> 1) + 2048;
        v42 = sub_800EC8F4();
        *((_WORD *)v13 + 50) = (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2744)) & v42) - (*SF_DRAFT_PTR(int, (SF_DRAFT_GP + 2744)) >> 1);
        v44 = v13 + 10;
        if ( (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) & 0x8000) != 0 )
          sub_800C7C6C(v13 + 10, *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2668)), 400, 0);
        else
          sub_800C7C40(sf_draft_guest_address(v13 + 10), (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2668))), 400, 400, 400);
        goto LABEL_31;
      }
      if ( v38 == 4 )
      {
        sub_800DE120(r_u32(0x8010C254u), sf_draft_guest_address(v13 + 10), 128, 128, 0, 0);
        v13[8] = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2668));
      }
      else
      {
        if ( v38 == 2 )
        {
          v44 = v13 + 10;
          sub_800C8148(sf_draft_guest_address(v13 + 10), (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2668))), 400, 400);
LABEL_31:
          sub_800C7BB0(v45, sf_draft_guest_address(v44));
          goto LABEL_32;
        }
        v44 = v13 + 10;
        if ( v38 == 3 )
        {
          v13[8] = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2668));
          sub_800C811C(sf_draft_guest_address(v13 + 10), 0, 400, 400, r_u32(SF_DRAFT_GP + 2668u));
          goto LABEL_31;
        }
      }
LABEL_32:
      v6 = *((__int16 *)v13 + 19);
      result = 2 * v6;
    }
    while ( v6 >= 0 );
  }
  return result;
}

sint32 sub_80055F60(uint32 entry_flag)
{
    FUNCTION_MARKER(0x80055F60u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v3; 
  uint8 *v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int *v10; 

  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  _DWORD *v17 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP); 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  bool v22; // dc
  char v23; 
  int v24; 
  uint8 *v25; 
  int v26; 
  int v27;
  int v28, v29, v30; 
  int v32; 
  int v33; 
  int v34; 

  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2700)) = 0;
  if ( entry_flag
    && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 24)) + 8)) > 0
    && (!(*SF_DRAFT_PTR(uint32, 0x80115E80u)) || (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80115FB8u)) - 12) >= 2 && (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) != 18)
    && (((_BYTE)(*SF_DRAFT_PTR(uint32, 0x80116A88u)) + 4 * (_BYTE)(*SF_DRAFT_PTR(uint32, 0x80116AB0u))) & 0x1F) == 0 )
  {
    if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 9 )
      sf_draft_call((uint32)(0x8014AC70u), 0u, NULL);
    else
      sf_draft_call((uint32)(0x8014AB64u), 0u, NULL);
  }
  sub_80067294();
  sub_80055D90();
  if ( *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2696)) > 0 )
  {
    v3 = 0;
    if ( **(uint8 **)(SF_DRAFT_GP + 3272) != 255 )
    {
      v4 = SF_DRAFT_PTR(uint8, *(uint8 **)(SF_DRAFT_GP + 3272));
      do
      {
        v5 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3256)) + 52 * *v4;
        if ( *SF_DRAFT_PTR(__int16, (v5 + 30)) >= 0 )
        {
          if ( *SF_DRAFT_PTR(_BYTE, (v5 + 39)) )
          {
            if ( *SF_DRAFT_PTR(_DWORD, (v5 + 44)) == 8 )
              sub_80050980(v5);
          }
          else if ( *SF_DRAFT_PTR(_WORD, (v5 + 22)) )
          {
            if ( *SF_DRAFT_PTR(_DWORD, (v5 + 44)) == 8 )
            {
              v6 = *SF_DRAFT_PTR(__int16, (v5 + 24));
              v28 = *SF_DRAFT_PTR(__int16, (v5 + 8));
              v29 = *SF_DRAFT_PTR(__int16, (v5 + 10));
              v30 = *SF_DRAFT_PTR(__int16, (v5 + 12));
              sub_8004BEDC(v5, sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x80137740u)[26 * *SF_DRAFT_PTR(__int16, (v5 + 30))]), 0, (*SF_DRAFT_PTR(__int16, (v5 + 30))));
              --v3;
              if ( (*SF_DRAFT_PTR(uint32, 0x8011CDD8u)) )
                sub_800CD68C(&(*SF_DRAFT_PTR(uint32, 0x8011CDD8u)));
              sub_8006AAF0(v6, &v28, 1);
            }
            *SF_DRAFT_PTR(_WORD, (v5 + 22)) = 0;
          }
        }
        ++v3;
        v4 = (uint8 *)(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3272)) + v3);
      }
      while ( *v4 != 255 );
    }
    if ( *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3710)) )
    {
      if ( (*SF_DRAFT_PTR(uint32, 0x80115E80u)) )
      {
        (*SF_DRAFT_PTR(uint32, 0x8011CE88u)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 8)) + 24)) + 44)) + 20));
        (*SF_DRAFT_PTR(uint32, 0x8011CE8Cu)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 8)) + 24)) + 44)) + 24));
        v7 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 8)) + 24)) + 44)) + 28));
        (*SF_DRAFT_PTR(uint32, 0x8011CE8Cu)) = (0u - (*SF_DRAFT_PTR(uint32, 0x8011CE8Cu)));
        (*SF_DRAFT_PTR(uint32, 0x8011CE90u)) = v7;
        v32 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 8)) + 24)) + 20)) + 20));
        v33 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 8)) + 24)) + 20)) + 24));
        v8 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 8)) + 24)) + 20)) + 28));
        v33 = -v33;
        v34 = v8;
        (*SF_DRAFT_PTR(uint32, 0x8011CE88u)) += (*SF_DRAFT_PTR(uint32, 0x8011CE88u)) - v32;
        (*SF_DRAFT_PTR(uint32, 0x8011CE90u)) = v7 + v7 - v8;
        (*SF_DRAFT_PTR(uint32, 0x8011CE8Cu)) -= 64;
      }
      else
      {
        sub_800456D0(((*SF_DRAFT_PTR(uint32, 0x80116B9Cu))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011CE88u))));
      }
      sub_800DC8AC((SF_DRAFT_PTR(uint32, 0x8011CE04u)[0]), 0, sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011CE98u))));
    }
    v9 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 12)) + 300));
    if ( v9 >= -31999 )
      *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3824)) = v9;
    if ( (*SF_DRAFT_PTR(_WORD, ((*SF_DRAFT_PTR(uint32, 0x8013C730u)) + 6)) & 1) != 0 )
      v10 = &(*SF_DRAFT_PTR(uint32, 0x8013C730u));
    else
      v10 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
    v12 = 0;
    sub_80018430(sf_draft_guest_address(v10), 0x801166F8u);
    v32 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 4));
    v33 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 10));
    v13 = -v33;
    v14 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2704));
    v15 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 16));
    v16 = -v33;
    if ( v33 > 0 )
      LOWORD(v16) = v33;
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2724)) = v16;
    v33 = v13;
    v34 = v15;
    sub_800C8D98(v14);
    if ( r_u8(v17[818]) != 255 )
    {
      do
      {
        v18 = *(uint8 *)(v17[818] + v12);
        v19 = v17[814];
        v20 = v19 + 52 * v18;
        if ( *SF_DRAFT_PTR(__int16, (v20 + 30)) >= 0 )
        {
          v21 = *(uint8 *)(v20 + 39);
          v22 = v21 == 0;
          v23 = v21 - 1;
          if ( v22 )
          {
            (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(&v27);
            sub_80055D14((v19 + 52 * v18));
          }
          else
          {
            *SF_DRAFT_PTR(_BYTE, (v20 + 39)) = v23;
          }
        }
        v24 = v17[818];
        v25 = (uint8 *)(v24 + v12);
        if ( v18 == *(uint8 *)(v24 + v12) )
        {
          ++v12;
          v25 = (uint8 *)(v24 + v12);
        }
      }
      while ( *v25 != 255 );
    }
    v26 = v17[675];
    if ( v26 )
      sub_8006BC98(2, 23, 0, v26);
  }
  return sub_80015364(0x10u, 4u, 65534, 65534, 0, 0, 0, 0);
}

sint32 sub_80078254(uint32 a1, uint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x80078254u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    int *a2_view = SF_DRAFT_PTR(int, a2);

  __int16 *v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  sint32 v11; 
  int v12; 
  _DWORD *v13; 
  char *v14; 
  int v15; 
  _DWORD *v16; 
  char *v17; 
  int v18; 
  int v19; 
  __int16 **v20; 
  char *v21; 
  int v22; 
  __int16 **v23; 
  char *v24; 
  int v25; 
  int v26; 
  __int16 **v27; 
  char *v28; 
  int v29; 
  __int16 **v31; 
  char *v32; 
  int v33; 
  int v34; 
  char *v35; 
  int v36; 
  char *v37; 
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
  sint32 v49; 
  bool v50; // dc
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
  char v61[64]; 
  int v62[2]; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 

  v5 = (__int16 *)a2_view[2];
  v6 = *a2_view;
  v7 = v5[2];
  v8 = *v5;
  if ( v8 < 0 )
    v8 = -v8;
  v9 = v5[1];
  if ( v7 < 0 )
    v7 = -v7;
  v10 = v5[1];
  if ( v9 < 0 )
    v10 = -v9;
  if ( v10 < v7 )
  {
    v11 = v10 < v7;
    if ( v8 >= v7 )
    {
      v7 = v8;
      goto LABEL_14;
    }
  }
  else
  {
    v11 = v10 < v7;
    if ( v8 >= v10 )
    {
      v7 = v8;
      goto LABEL_14;
    }
  }
  if ( !v11 )
    v7 = v10;
LABEL_14:
  if ( v7 == v8 )
  {
    v12 = 0;
    if ( *v5 < 0 )
    {
      v59 = a1_view[1];
      v60 = a1_view[2];
      if ( v6 > 0 )
      {
        v16 = (_DWORD *)(a2_view + 5);
        v17 = SF_DRAFT_PTR(char, v61);
        do
        {
          *(_DWORD *)v17 = (*(__int16 *)(*v16 + 2));
          ++v12;
          v18 = *(__int16 *)(*v16++ + 4);
          *((_DWORD *)v17 + 2) = v18;
          v17 += 16;
        }
        while ( v12 < v6 );
      }
    }
    else
    {
      v59 = a1_view[2];
      v60 = a1_view[1];
      if ( v6 > 0 )
      {
        v13 = (_DWORD *)(a2_view + 5);
        v14 = SF_DRAFT_PTR(char, v61);
        do
        {
          *(_DWORD *)v14 = (*(__int16 *)(*v13 + 4));
          ++v12;
          v15 = *(__int16 *)(*v13++ + 2);
          *((_DWORD *)v14 + 2) = v15;
          v14 += 16;
        }
        while ( v12 < v6 );
      }
    }
  }
  else if ( v7 == v10 )
  {
    v19 = 0;
    if ( v5[1] < 0 )
    {
      v59 = a1_view[2];
      v60 = *a1_view;
      if ( v6 > 0 )
      {
        v23 = (__int16 **)(a2_view + 5);
        v24 = SF_DRAFT_PTR(char, v61);
        do
        {
          *(_DWORD *)v24 = ((*v23)[2]);
          ++v19;
          v25 = **v23++;
          *((_DWORD *)v24 + 2) = v25;
          v24 += 16;
        }
        while ( v19 < v6 );
      }
    }
    else
    {
      v59 = *a1_view;
      v60 = a1_view[2];
      if ( v6 > 0 )
      {
        v20 = (__int16 **)(a2_view + 5);
        v21 = SF_DRAFT_PTR(char, v61);
        do
        {
          *(_DWORD *)v21 = (**v20);
          ++v19;
          v22 = (*v20++)[2];
          *((_DWORD *)v21 + 2) = v22;
          v21 += 16;
        }
        while ( v19 < v6 );
      }
    }
  }
  else
  {
    v26 = 0;
    if ( v5[2] < 0 )
    {
      v59 = *a1_view;
      v60 = a1_view[1];
      if ( v6 > 0 )
      {
        v31 = (__int16 **)(a2_view + 5);
        v32 = SF_DRAFT_PTR(char, v61);
        do
        {
          *(_DWORD *)v32 = (**v31);
          ++v26;
          v33 = (*v31++)[1];
          *((_DWORD *)v32 + 2) = v33;
          v32 += 16;
        }
        while ( v26 < v6 );
      }
    }
    else
    {
      v59 = a1_view[1];
      v60 = *a1_view;
      if ( v6 > 0 )
      {
        v27 = (__int16 **)(a2_view + 5);
        v28 = SF_DRAFT_PTR(char, v61);
        do
        {
          *(_DWORD *)v28 = ((*v27)[1]);
          ++v26;
          v29 = **v27++;
          *((_DWORD *)v28 + 2) = v29;
          v28 += 16;
        }
        while ( v26 < v6 );
      }
    }
  }
  v34 = 0;
  if ( v6 > 0 )
  {
    v35 = SF_DRAFT_PTR(char, v61);
    do
    {
      v36 = 16 * (v34 + 1);
      if ( v34 + 1 == v6 )
        v36 = 0;
      v37 = &v61[v36];
      v38 = *((_DWORD *)v35 + 2);
      v39 = *((_DWORD *)v37 + 2);
      v62[1] = 0;
      v40 = v38 - v39;
      v62[0] = v38 - v39;
      v41 = *(uint8 *)(SF_DRAFT_GP + 1017);
      v42 = *(_DWORD *)v37 - *(_DWORD *)v35;
      v63 = v42;
      if ( !v41 )
      {
        sub_800D9580(sf_draft_guest_address(v62), sf_draft_guest_address(&v66));
        v51 = v66;
        if ( v66 <= 0 )
          v51 = 1;
LABEL_73:
        v66 = v51;
        goto LABEL_74;
      }
      v43 = v40;
      if ( v40 < 0 )
        v43 = -v40;
      if ( v42 < 0 )
        v42 = -v42;
      v44 = v43 + v42;
      v45 = v43 - v42;
      v46 = (v43 + v42) >> 1;
      v47 = (v43 + v42) >> 2;
      if ( v43 - v42 < 0 )
        v45 = v42 - v43;
      if ( v45 >= v46 )
      {
        v49 = v44 < 2;
        if ( v46 + v47 < v45 )
          goto LABEL_59;
        v48 = v44 - (v44 >> 3);
      }
      else
      {
        v48 = v44 - v47;
      }
      v49 = v48 < 2;
LABEL_59:
      v50 = v49;
      v51 = 1;
      if ( v50 )
        goto LABEL_73;
      v52 = v62[0];
      v53 = v63;
      if ( v62[0] < 0 )
        v52 = -v62[0];
      if ( v63 < 0 )
        v53 = -v63;
      v54 = v52 + v53;
      v55 = v52 - v53;
      v56 = (v52 + v53) >> 1;
      v57 = (v52 + v53) >> 2;
      if ( v52 - v53 < 0 )
        v55 = v53 - v52;
      if ( v55 >= v56 )
      {
        if ( v56 + v57 >= v55 )
          v54 -= v54 >> 3;
      }
      else
      {
        v54 -= v57;
      }
      v66 = v54;
LABEL_74:
      v58 = (v59 - *(_DWORD *)v35) * v62[0];
      v64 = v59 - *(_DWORD *)v35;
      v65 = v60 - *((_DWORD *)v35 + 2);
      v67 = v58 + v65 * v63;
      ++v34;
      if ( a3 * v66 < v67 )
        return 0;
      v35 += 16;
    }
    while ( v34 < v6 );
  }
  return 1;
}

uint32 sub_80078724(uint32 a1, sint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80078724u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    int *a3_view = SF_DRAFT_PTR(int, a3);
    int *a4_view = SF_DRAFT_PTR(int, a4);
  int v5; 
  int v8; 
  sint32 i; 

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
  int v26; 
  int v27; 
  sint32 result; 
  int v29[4]; 
  int v30[4]; 
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

  v5 = a2;
  v8 = 0;
  for ( i = 0; v8 < (sint32)r_u32(v5); a2 += 4 )
  {
    *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 20)) + 2)) = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 20)) + 2));
    ++v8;
  }
  v29[0] = **(__int16 **)(v5 + 28) - **(__int16 **)(v5 + 24);
  v29[1] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 28)) + 2)) - *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 24)) + 2));
  v29[2] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 28)) + 4)) - *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 24)) + 4));
  v30[0] = **(__int16 **)(v5 + 20) - **(__int16 **)(v5 + 24);
  v30[1] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 20)) + 2)) - *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 24)) + 2));
  v30[2] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 20)) + 4)) - *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 24)) + 4));
  sub_800EBAD0(sf_draft_guest_address(v29), sf_draft_guest_address(v30), a4);
  sub_80077A18(sf_draft_guest_address(a4_view), sf_draft_guest_address(a4_view));
  **(_WORD **)(v5 + 8) = *a4_view;
  *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 8)) + 2)) = a4_view[1];
  *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 8)) + 4)) = a4_view[2];
  v31 = a1_view[4] * *a4_view + a1_view[5] * a4_view[1] + a1_view[6] * a4_view[2];
  if ( v31 < 0 )
    v11 = -(-v31 >> 12);
  else
    v11 = v31 >> 12;
  v31 = v11;
  if ( v11 )
  {
    v32 = **(__int16 **)(v5 + 24);
    v33 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 24)) + 2));
    v34 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v5 + 24)) + 4));
    v35 = v32 - *a1_view;
    v36 = v33 - a1_view[1];
    v37 = v34 - a1_view[2];
    v41 = v35 * *a4_view + v36 * a4_view[1] + v37 * a4_view[2];
    if ( v41 < 0 )
      v12 = -(-v41 >> 12);
    else
      v12 = v41 >> 12;
    v13 = a1_view[4];
    v41 = v12;
    v14 = sub_800C6D90(v13, v31);
    v15 = a1_view[5];
    v38 = v14;
    v39 = sub_800C6D90(v15, v31);
    v40 = sub_800C6D90((a1_view[6]), v31);
    v38 = sub_800C6D4C(v38, v41);
    v39 = sub_800C6D4C(v39, v41);
    v40 = sub_800C6D4C(v40, v41);
    *a3_view = *a1_view + v38;
    a3_view[1] = a1_view[1] + v39;
    a3_view[2] = a1_view[2] + v40;
  }
  else
  {
    v16 = a1_view[1];
    v17 = a1_view[2];
    v18 = a1_view[3];
    *a3_view = *a1_view;
    a3_view[1] = v16;
    a3_view[2] = v17;
    a3_view[3] = v18;
    i = 1;
  }
  if ( !i )
  {
    v19 = 4;
    if ( *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 1018)) )
    {
      sub_800C720C(sf_draft_guest_address(a1_view + 4), sf_draft_guest_address(&v32));
      v21 = sub_800C6D4C(v32, (*a4_view));
      v20 = sub_800C6D4C(v33, (a4_view[1]));
      v22 = v21 + v20 + sub_800C6D4C(v34, (a4_view[2]));
      if ( v22 < 0 )
        v22 = -v22;
      v42 = v22;
      if ( v22 < 4097 && v22 <= 0 )
      {
        v23 = 0;
      }
      else
      {
        v23 = 4096;
        if ( v22 < 4097 )
          v23 = v22;
      }
      v42 = v23;
      v24 = 27 * (4096 - v23);
      if ( v24 < 0 )
        v25 = -(-v24 >> 12);
      else
        v25 = v24 >> 12;
      v19 = v25 + 4;
    }
    i = (uint8)sub_80078254(sf_draft_guest_address(a3_view), sf_draft_guest_address(SF_DRAFT_PTR(int, v5)), v19) != 1;
  }
  v26 = 0;
  if ( *SF_DRAFT_PTR(int, v5) > 0 )
  {
    v27 = v5;
    do
    {
      *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v27 + 20)) + 2)) = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v27 + 20)) + 2));
      ++v26;
      v27 += 4;
    }
    while ( v26 < (sint32)r_u32(v5) );
  }
  result = i;
  *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 8)) + 2)) = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 8)) + 2));
  return result;
}

void sub_80090D88(sint32 a1)
{
    FUNCTION_MARKER(0x80090D88u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v2; 
  uint8 *v3; 
  int v4; 
  _DWORD *v5; 
  uint8 v6; 
  int v7; 
  int v8; 
  int v9; 



  int v14; 
  int v16; 

  v2 = 76 * *SF_DRAFT_PTR(_DWORD, (a1 + 8)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
  v3 = SF_DRAFT_PTR(uint8, *(uint8 **)(v2 + 52));
  switch ( *SF_DRAFT_PTR(_WORD, a1) )
  {
    case 2:
      sf_draft_call((uint32)(0x80150148u), 1u, (const uint32[]){(uint32)(*SF_DRAFT_PTR(_DWORD, (v2 + 52)))});
      break;
    case 5:
      if ( **(_BYTE **)(20 * *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(_DWORD, (a1 + 8)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)) + 4) )
      {
        sub_80073DF8((int)v3);
        sub_80073DD8(sf_draft_guest_address(v3));
      }
      break;
    case 6:
      if ( **(_BYTE **)(20 * *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(_DWORD, (a1 + 8)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)) + 4) )
      {
        sub_80073CD8(sf_draft_guest_address(v3), 1, 0, 0);
        sub_80073D88(sf_draft_guest_address(v3), 1, 0, 1, 0);
      }
      break;
    case 0x12:
      if ( (*v3 & 0x20) == 0 )
      {
        if ( **(_BYTE **)(20 * *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(_DWORD, (a1 + 8)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)) + 4) )
        {
          v14 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v3 + 2) + 12) + 20);
          v4 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v3 + 2) + 12) + 28);
          v16 = (0u - *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v3 + 2) + 12) + 24));
        }
        else
        {
          v5 = (_DWORD *)(76 * *((__int16 *)v3 + 1) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)));
          v14 = v5[6];
          v16 = v5[7];
          v4 = v5[8];
        }
        v6 = 23;
        if ( v16 < (sint32)(r_u32(r_u32(r_u32(0x80116B9Cu) + 12u) + 272u) + 105u) )
          v6 = 22;
        sub_80015364(v6, 4u, (*((__int16 *)v3 + 1)), ((*SF_DRAFT_PTR(uint32, 0x80116AB0u))), 0, 0, 0, 0);
        sub_8008C928((int)v3, v3[1]);
      }
      break;
    case 0x13:
      if ( (*v3 & 0x20) == 0 )
      {
        sub_8008C464(*((__int16 *)v3 + 1));
        sub_80015364(0x19u, 4u, (*((__int16 *)v3 + 1)), ((*SF_DRAFT_PTR(uint32, 0x80116AB0u))), 0, 0, 0, 0);
      }
      break;
    case 0x16:
    case 0x17:
    case 0x27:
      if ( (*v3 & 0x20) == 0 && *SF_DRAFT_PTR(_DWORD, (a1 + 4)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) && (uint8)sub_8008CF8C(1) )
      {
        v7 = 65;
        if ( *SF_DRAFT_PTR(_WORD, a1) != 23 )
          v7 = 36;
        sub_80090CDC(v7);
      }
      break;
    case 0x29:
      **(_DWORD **)(a1 + 12) = *v3;
      break;
    case 0x2A:
      v8 = **(_DWORD **)(a1 + 12);
      *v3 = (v8);
      if ( (v8 & 0x20) != 0 )
      {
        if ( **(_BYTE **)(20 * *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(_DWORD, (a1 + 8)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)) + 4) )
        {
          v9 = *((_DWORD *)v3 + 2);
          if ( (*SF_DRAFT_PTR(_BYTE, (v9 + 10)) & 8) != 0 )
            sub_800D8F60(v9);
        }
      }
      break;
    default:
      return;
  }
}

void sub_8008DE28(sint32 a1)
{
    FUNCTION_MARKER(0x8008DE28u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  uint8 *v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  uint8 v7; 
  int v8; 
  int v9; 
  uint8 v10; 
  int v11; 
  int v12; 
  int ( *v13)(_DWORD, int); 
  char v14; 
  char v15; 
  unsigned int v16; 
  int ( *v17)(_DWORD, int); 
  _BYTE *v18; 




  v2 = SF_DRAFT_PTR(uint8, *(uint8 **)(76 * *SF_DRAFT_PTR(_DWORD, (a1 + 8)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v3 = *((__int16 *)v2 + 1);
  if ( v3 == 666 )
    v4 = 666;
  else
    v4 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v3 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
  switch ( *SF_DRAFT_PTR(_WORD, a1) )
  {
    case 2:
      sf_draft_call((uint32)(0x8014EE38u), 2u, (const uint32[]){(uint32)(*SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(_DWORD, (a1 + 8)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52))), (uint32)(v4)});
      return;
    case 5:
      v6 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(_DWORD, (a1 + 8)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
      *v2 &= ~0x40u;
      sub_80073DF8(v6);
      if ( (*v2 & 1) == 0 )
        sub_80073DD8(sf_draft_guest_address(v2));
      return;
    case 6:
      v5 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(_DWORD, (a1 + 8)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
      *v2 |= 0x40u;
      sub_80073CD8(v5, 1, 0, 0);
      if ( (*v2 & 1) == 0 )
        sub_80073D88(sf_draft_guest_address(v2), 1, 0, 1, 1);
      return;
    case 0xD:
      goto LABEL_16;
    case 0x12:
      if ( (*(_DWORD *)v2 & 0xA0) != 0 )
        return;
      sub_8008C358(*((_WORD *)v2 + 1), 1);
      v7 = 21;
      if ( (*v2 & 8) != 0 )
        return;
      v8 = *((__int16 *)v2 + 1);
      v9 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
      v10 = 4;
      goto LABEL_21;
    case 0x13:
      if ( (*v2 & 0x20) != 0 )
        return;
      goto LABEL_19;
    case 0x14:
    case 0x1B:
      if ( (*v2 & 0x10) != 0 )
        *v2 &= ~0x10u;
      return;
    case 0x15:
    case 0x27:
      v12 = *v2;
      if ( (v12 & 0x10) != 0 )
      {
        v17 = *(int ( **)(_DWORD, int))(SF_DRAFT_GP + 1828);
        if ( v17 )
        {
          v18 = (_BYTE *)v17(*((__int16 *)v2 + 1), v4);
          if ( v18 )
            sub_80085D04(sf_draft_guest_address(v18), 0);
        }
      }
      else if ( (v12 & 0x20) == 0 && ((v12 & 0x80) == 0 || (*SF_DRAFT_PTR(uint16, 0x80130C88u)) != 8) )
      {
        *v2 = (v12 | 0x20);
        v13 = *(int ( **)(_DWORD, int))(SF_DRAFT_GP + 1840);
        v14 = 1;
        if ( v13 )
          v14 = v13(*((__int16 *)v2 + 1), v4);
        v15 = sub_800EC8F4();
        v16 = 34;
        if ( (v15 & 1) != 0 )
          v16 = 33;
        sub_8006BC98(2, v16, sf_draft_guest_address(v2), 0);
        if ( v14 == 1 )
          sub_8002A890(*((__int16 *)v2 + 1), 0x15u, 3u);
        sub_8008CA44(*((_WORD *)v2 + 1));
      }
      return;
    case 0x29:
      **(_DWORD **)(a1 + 12) = *v2;
      return;
    case 0x2A:
      *v2 = (**(_DWORD **)(a1 + 12));
LABEL_16:
      if ( *(__int16 *)(*((_DWORD *)v2 + 6) + 8) > 0 )
        return;
      if ( (*v2 & 0x80) != 0 )
      {
        v11 = *((_DWORD *)v2 + 2);
        if ( (*SF_DRAFT_PTR(_BYTE, (v11 + 10)) & 8) != 0 )
          sub_800D8F60(v11);
      }
      else
      {
        *v2 |= 0x80u;
        sub_8002DE00((int)v2);
        if ( (uint8)sub_8008BEA0(*((_WORD *)v2 + 1)) )
        {
LABEL_19:
          sub_8008C464(*((__int16 *)v2 + 1));
          v7 = 25;
          if ( (*v2 & 8) == 0 )
          {
            v8 = *((__int16 *)v2 + 1);
            v9 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
            v10 = 3;
LABEL_21:
            sub_80015364(v7, v10, v8, v9, 0, 0, 0, 0);
          }
        }
      }
      return;
    case 0x2D:
      if ( (*SF_DRAFT_PTR(uint32, 0x80115E68u)) && (*v2 & 0x20) != 0 )
        sf_draft_call((uint32)((*SF_DRAFT_PTR(uint32, 0x80115E68u))), 2u, (const uint32[]){(uint32)(*((__int16 *)v2 + 1)), (uint32)(v4)});
      return;
    default:
      return;
  }
}

sint32 sub_80021B68(uint32 a1, uint32 a2, sint32 a3)
{
  uint8 position_valid = 0;
  struct { int v23, v24, v25; } direction;
  struct { int v26, v27, v28; } position;
  struct { int v29, v30, v31; } delta;
    FUNCTION_MARKER(0x80021B68u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int result; 
  int v6; 
  int *v8; 
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
  int v22; 
  int v32; 
  int v33; 
  int v34; 

  result = 76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
  v6 = *SF_DRAFT_PTR(_DWORD, (result + 52));
  if ( a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
    return result;
  sub_80016F90(1);
  v8 = SF_DRAFT_PTR(int, *(int **)(v6 + 12));
  v20 = *v8;
  v21 = v8[1];
  v22 = v8[2];
  direction.v23 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 4));
  direction.v24 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 10));
  v9 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 8)) + 12)) + 16));
  direction.v24 = -direction.v24;
  direction.v25 = v9;
  if ( a2 == 17 && (sub_800EC8F4() & 1) != 0 )
  {
    direction.v23 = -direction.v23;
    direction.v25 = -direction.v25;
  }
  v33 = 0;
  v32 = direction.v25 / 2;
  v34 = ((direction.v23 > 0) - direction.v23) >> 1;
  if ( (sub_800EC8F4() & 1) != 0 )
  {
    direction.v23 += v32;
    v10 = direction.v24 + v33;
    v11 = direction.v25 + v34;
  }
  else
  {
    direction.v23 -= v32;
    v10 = direction.v24 - v33;
    v11 = direction.v25 - v34;
  }
  direction.v24 = v10;
  direction.v25 = v11;
  sub_800C720C(sf_draft_guest_address(&direction.v23), sf_draft_guest_address(&direction.v23));
  if ( a2 == 20 )
  {
    sub_80024284(a1, 20, a3);
    v12 = (*SF_DRAFT_PTR(uint32, 0x801191ECu)) != 0xC ? 9 : 0;
    goto LABEL_29;
  }
  if ( a2 >= 0x15 )
  {
    if ( a2 != 81 )
    {
      if ( a2 >= 0x52 )
      {
        v12 = 0;
        if ( a2 != 96 )
          goto LABEL_29;
      }
      else
      {
        v12 = 0;
        if ( a2 != 77 )
          goto LABEL_29;
      }
    }
  }
  else
  {
    if ( a2 < 0xF )
    {
      v12 = 0;
      goto LABEL_29;
    }
    v12 = 9;
    if ( a2 >= 0x13 )
      goto LABEL_29;
  }
  v12 = 2;
  if ( (sub_800EC8F4() & 1) != 0 )
  {
LABEL_21:
    position_valid = 1;
    if ( a2 == 96 )
    {
      position.v26 = sub_800C6D4C(direction.v23, 0);
      v13 = sub_800C6D4C(direction.v24, 0);
      v14 = direction.v25;
      v15 = 0;
    }
    else
    {
      position.v26 = sub_800C6D4C(direction.v23, 320);
      v13 = sub_800C6D4C(direction.v24, 320);
      v14 = direction.v25;
      v15 = 320;
    }
    position.v27 = v13;
    v16 = sub_800C6D4C(v14, v15);
    v17 = position.v26 + v20;
    position.v26 += v20;
    position.v28 = v16 + v22;
    v18 = position.v27 + v21;
    position.v27 += v21;
    if ( a2 == 96 )
      position.v27 = v18 + 624;
    delta.v29 = v20 - v17;
    delta.v31 = -v16;
    delta.v30 = v21 - position.v27;
    goto LABEL_29;
  }
  v12 = 9;
  if ( a2 == 96 )
  {
    v12 = 2;
    goto LABEL_21;
  }
LABEL_29:
  v19 = 1;
  if ( v12 )
    sub_8001D494(1, v12, v6, 0, (sint32)sf_draft_guest_address(&position), (sint32)sf_draft_guest_address(&delta), (sint32)0x80118438u, position_valid);
  if ( a2 == 96 )
    sub_80020224(0);
  if ( (uint8)sub_8006C180() )
    return sub_8006C7CC();
  if ( (*SF_DRAFT_PTR(uint32, 0x80116B4Cu)) != -1 )
    return sub_8006C620(((*SF_DRAFT_PTR(uint32, 0x80116B4Cu))), 0, 1);
  if ( a2 == 20 )
    return sub_8006CB54(0x80103E7Cu);
  result = 19;
  if ( a2 == 18 )
    return sub_8006CB54(0x80103EC0u);
  if ( a2 != 19 )
    return sub_8006CB54(0x80103E38u);
  return result;
}

sint32 sub_80032C24(uint32 a1)
{
    FUNCTION_MARKER(0x80032C24u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v1; 
  int v2; 
  int v3; 
  int v4; 
  int result; 
  int v6; 
  __int16 *v7; 
  int v8; 
  int v9; 
  int *v10; 
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
  __int16 v23; 
  __int16 v24; 
  __int16 v25; 
  __int16 v26; 
  __int16 v27; 
  __int16 v28; 
  __int16 v29; 
  __int16 v30; 
  __int16 v31; 

  v1 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v2 = 76 * *SF_DRAFT_PTR(__int16, (v1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
  v3 = *(uint8 *)(v2 + 36);
  v4 = 0;
  if ( !*SF_DRAFT_PTR(_BYTE, (v2 + 36)) || (result = 18, v3 != 18) && (!v3 || v3 != 21 || (result = (*SF_DRAFT_PTR(uint32, 0x8012F9B8u))) != 0) )
  {
    v6 = **(__int16 **)(v1 + 20);
    if ( (v6 >= 0
       && (v4 = *SF_DRAFT_PTR(_DWORD, (76 * v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)), (**(_DWORD **)(v1 + 16) & 0x200) == 0)
       && !(*SF_DRAFT_PTR(uint32, 0x8012F9B8u))
       || (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) && (v7 = *(__int16 **)(v1 + 20), *v7 >= 0) && (*((_DWORD *)v7 + 1) & 8) != 0)
      && ((unsigned int)*(uint8 *)(v4 + 34) - 1 >= 2
       || (v8 = *SF_DRAFT_PTR(_DWORD, (v4 + 8)), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v8 + 16)) + 40)) & 0x400000) != 0)
       && (*SF_DRAFT_PTR(_BYTE, (v8 + 8)) & 0x10) == 0
       && *SF_DRAFT_PTR(_DWORD, (v4 + 12)))
      && *SF_DRAFT_PTR(_DWORD, (v4 + 20))
      && (v9 = v1, *SF_DRAFT_PTR(_DWORD, (v4 + 12))) )
    {
      v10 = 0;
      v11 = 0;
    }
    else
    {
      result = **(_DWORD **)(v1 + 16) & 0x300;
      if ( result != 256 )
        return result;
      if ( *SF_DRAFT_PTR(__int16, (v1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x801169D4u)) && v1 == sub_80020714() && (sub_8001C960(0) || sub_8001C960(2)) )
      {
        v23 = **(_WORD **)*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
        v24 = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 2));
        v25 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 4));
        v12 = -*(uint16 *)(*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 6);
        v26 = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 6));
        v27 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 8));
        v28 = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 10));
        v29 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 12));
        v30 = -*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 14));
        v31 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 16));
        v22 = v29;
        v20 = v23;
        v21 = (__int16)v12;
        v14 = -v29;
        v15 = 0;
        v16 = v23;
      }
      else
      {
        v14 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 12)) + 4));
        v15 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 12)) + 10));
        v13 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 8)) + 12)) + 16));
        v15 = -v15;
        v16 = v13;
        if ( v15 )
        {
          v15 = 0;
          sub_800C720C(sf_draft_guest_address(&v14), sf_draft_guest_address(&v14));
        }
      }
      v17 = sub_800C6D4C(v14, 655360);
      v18 = sub_800C6D4C(v15, 655360);
      v19 = sub_800C6D4C(v16, 655360);
      v10 = &v17;
      v17 += **(_DWORD **)(v1 + 12);
      v9 = v1;
      v18 += *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 12)) + 4));
      v11 = 1;
      v19 += *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v1 + 12)) + 8));
    }
    return sub_8007E848(v9, sf_draft_guest_address(v10), v11, 0);
  }
  return result;
}

#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);
#include "game_draft.h"
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_8006E6A8(uint32 object, sint32 count, sint32 stride, uint32 data, uint32 first, uint32 second, uint32 flag1, uint32 flag2, uint32 optional);
extern sint32 sub_80089624(sint32, sint32, sint32, sint32, sint32);
extern uint32 sub_800DB3C4();
extern uint32 sub_800EA904(sint32 value);




/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x8007159Cu 0x8007159c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8007159C(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a9, uint32 a10)
{
  _DWORD * native_a1 = SF_DRAFT_PTR(_DWORD, a1);
  _DWORD * native_a2 = SF_DRAFT_PTR(_DWORD, a2);
  _DWORD * native_a3 = SF_DRAFT_PTR(_DWORD, a3);
  int * native_a4 = SF_DRAFT_PTR(int, a4);
  _DWORD * native_a9 = SF_DRAFT_PTR(_DWORD, a9);
  int * native_a10 = SF_DRAFT_PTR(int, a10);
  FUNCTION_MARKER(0x8007159Cu, "SCUS_942.40");
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  _DWORD *v19; 
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
  int *v33; 
  _DWORD *v34; 
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
  int *v46; 
  _DWORD *v47; 
  int v48; 
  _DWORD *v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int result; 
  _DWORD *v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  _DWORD *v62; 
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
  _DWORD *v76; 
  int v77; 
  int v78; 
  _DWORD *v79; 
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
int v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  sint32 normalized_direction[3]; 
  int v113[8]; 
  int v114; 
  int v115; 
  int v116; 
  int v117; 
  _DWORD *v118; 
  int *v119; 
  _DWORD *v120; 

  v12 = 0;
  v118 = native_a2;
  v119 = native_a4;
  v120 = native_a9;
  do
  {
    if ( v12 == 1 || v12 >= 2 )
    {
      v102 = v98;
      v103 = v99;
      v104 = v100;
      v105 = (sf_draft_unbound_stack_field(0x8007159Cu, 0x2Cu), 0u);
      v13 = -1;
    }
    else
    {
      v13 = -1;
      if ( !v12 )
      {
        v14 = native_a1[1];
        v15 = native_a1[2];
        v16 = native_a1[3];
        v102 = *native_a1;
        v103 = v14;
        v104 = v15;
        v105 = v16;
      }
    }
    v17 = 0x7FFFFFFF;
    v18 = v12;
    if ( v12 < *native_a10 )
    {
      v19 = &native_a9[v12];
      do
      {
        v20 = *SF_DRAFT_PTR(_DWORD, (*v19 + 72));
        v21 = *SF_DRAFT_PTR(_DWORD, (*v19 + 76));
        v22 = *SF_DRAFT_PTR(_DWORD, (*v19 + 80));
        v106 = *SF_DRAFT_PTR(_DWORD, (*v19 + 68));
        v107 = v20;
        v108 = v21;
        v109 = v22;
        v23 = sub_800C6D4C(v102, v106);
        v24 = sub_800C6D4C(v103, v107);
        v25 = v23 + v24 + sub_800C6D4C(v104, v108);
        v114 = v25;
        if ( (!v12 && v25 < 0 || v25 < -13088) && v114 < v17 )
        {
          if ( v12 == 1 )
          {
            v27 = sub_800C6D4C(normalized_direction[0], v106);
            v26 = sub_800C6D4C(normalized_direction[1], v107);
            v28 = normalized_direction[2];
LABEL_26:
            v32 = v27 + v26 + sub_800C6D4C(v28, v108);
            v115 = v32;
            if ( v32 < 0 )
              v32 = -v32;
            if ( v32 < 3851 )
            {
              v13 = v18;
              v17 = v114;
            }
            goto LABEL_30;
          }
          if ( v12 >= 2 )
          {
            v29 = sub_800C6D4C(normalized_direction[0], v106);
            v30 = sub_800C6D4C(normalized_direction[1], v107);
            v31 = v29 + v30 + sub_800C6D4C(normalized_direction[2], v108);
            v115 = v31;
            if ( v31 < 0 )
              v31 = -v31;
            if ( v31 >= 3851 )
              goto LABEL_30;
            v27 = sub_800C6D4C(v113[0], v106);
            v26 = sub_800C6D4C(v113[1], v107);
            v28 = v113[2];
            goto LABEL_26;
          }
          if ( !v12 )
          {
            v13 = v18;
            v17 = v114;
          }
        }
LABEL_30:
        ++v18;
        ++v19;
      }
      while ( v18 < *native_a10 );
    }
    if ( v13 >= 0 )
    {
      v33 = &v94 + 4 * v12;
      v34 = SF_DRAFT_PTR(_DWORD, native_a9[v13]);
      v35 = v34[18];
      v36 = v34[19];
      v37 = v34[20];
      v33[16] = v34[17];
      v33[17] = v35;
      v33[18] = v36;
      v33[19] = v37;
      if ( v12 == 1 )
      {
        sub_800EBA78(sf_draft_guest_address(v113), sf_draft_guest_address(&normalized_direction[0]), sf_draft_guest_address(native_a3));
        sub_800C720C(sf_draft_guest_address(native_a3), sf_draft_guest_address(native_a3));
        v38 = sub_800C6D4C(*native_a1, *native_a3);
        v39 = sub_800C6D4C(native_a1[1], native_a3[1]);
        v40 = v38 + v39 + sub_800C6D4C(native_a1[2], native_a3[2]);
        *v119 = v40;
        v41 = sub_800C6D4C(*native_a3, v40);
        v42 = native_a3[1];
        v98 = v41;
        v99 = sub_800C6D4C(v42, *v119);
        v100 = sub_800C6D4C(native_a3[2], *v119);
        v94 = *native_a1 - v98;
        v95 = native_a1[1] - v99;
        v96 = native_a1[2] - v100;
      }
      else if ( v12 >= 2 )
      {
        v43 = native_a1[1];
        v44 = native_a1[2];
        v45 = native_a1[3];
        v94 = *native_a1;
        v95 = v43;
        v96 = v44;
        v97 = v45;
        v98 = 0;
        v99 = 0;
        v100 = 0;
      }
      else if ( !v12 )
      {
        v94 = sub_800C6D4C(normalized_direction[0], v17);
        v95 = sub_800C6D4C(normalized_direction[1], v17);
        v96 = sub_800C6D4C(normalized_direction[2], v17);
        v98 = *native_a1 - v94;
        v99 = native_a1[1] - v95;
        v100 = native_a1[2] - v96;
      }
      v46 = &native_a9[v13];
      v47 = v120;
      v48 = *v46;
      ++v12;
      *v46 = *v120;
      *v47 = v48;
      v120 = v47 + 1;
    }
  }
  while ( v12 < 3 && v13 >= 0 );
  if ( v12 == 2 )
    goto LABEL_52;
  if ( v12 < 3 )
  {
    if ( v12 != 1 )
      goto LABEL_52;
    sub_800D9580(sf_draft_guest_address(&v98), sf_draft_guest_address(v119));
    if ( *v119 )
    {
      *native_a3 = sub_800C6D90(v98, *v119);
      native_a3[1] = sub_800C6D90(v99, *v119);
      native_a3[2] = sub_800C6D90(v100, *v119);
      goto LABEL_52;
    }
LABEL_51:
    *native_a3 = 0;
    native_a3[1] = 0;
    native_a3[2] = 0;
    goto LABEL_52;
  }
  if ( v12 == 3 )
  {
    *v119 = 0;
    goto LABEL_51;
  }
LABEL_52:
  *native_a10 = v12;
  v49 = v118;
  v50 = v99;
  v51 = v100;
  v52 = (sf_draft_unbound_stack_field(0x8007159Cu, 0x2Cu), 0u);
  *v118 = v98;
  v49[1] = v50;
  v49[2] = v51;
  v49[3] = v52;
  v53 = *native_a10;
  if ( *native_a10 == 2 )
  {
    v59 = *SF_DRAFT_PTR(_DWORD, (*native_a9 + 72));
    v60 = *SF_DRAFT_PTR(_DWORD, (*native_a9 + 76));
    v61 = *SF_DRAFT_PTR(_DWORD, (*native_a9 + 80));
    (*SF_DRAFT_PTR(uint32, 0x8011E940u)) = *SF_DRAFT_PTR(_DWORD, (*native_a9 + 68));
    (*SF_DRAFT_PTR(uint32, 0x8011E944u)) = v59;
    (*SF_DRAFT_PTR(uint32, 0x8011E948u)) = v60;
    (*SF_DRAFT_PTR(uint32, 0x8011E94Cu)) = v61;
    v62 = SF_DRAFT_PTR(_DWORD, native_a9[1]);
    v63 = v62[18];
    v64 = v62[19];
    (*SF_DRAFT_PTR(uint32, 0x8011E950u)) = v62[17];
    (*SF_DRAFT_PTR(uint32, 0x8011E954u)) = v63;
    (*SF_DRAFT_PTR(uint32, 0x8011E958u)) = v64;
    (*SF_DRAFT_PTR(uint32, 0x8011E95Cu)) = v62[20];
    sub_800D9580(sf_draft_guest_address(&v94), sf_draft_guest_address(&v116));
    (*SF_DRAFT_PTR(uint32, 0x8011E960u)) = sub_800C6D90(v94, v116);
    (*SF_DRAFT_PTR(uint32, 0x8011E964u)) = sub_800C6D90(v95, v116);
    (*SF_DRAFT_PTR(uint32, 0x8011E968u)) = sub_800C6D90(v96, v116);
    sub_800DB244(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011E940u)), sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011E980u)));
    v65 = sub_800C6D90((*SF_DRAFT_PTR(uint32, 0x8011E984u)), (*SF_DRAFT_PTR(uint32, 0x8011E980u)));
    v66 = v116;
    v117 = v65;
    *SF_DRAFT_PTR(_DWORD, (*native_a9 + 120)) = v65;
    (*SF_DRAFT_PTR(uint32, 0x8011E940u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E940u)), v66);
    (*SF_DRAFT_PTR(uint32, 0x8011E944u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E944u)), v116);
    (*SF_DRAFT_PTR(uint32, 0x8011E948u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E948u)), v116);
    *SF_DRAFT_PTR(_DWORD, (*native_a9 + 104)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E940u)), v117);
    v67 = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E944u)), v117);
    v68 = v117;
    *SF_DRAFT_PTR(_DWORD, (*native_a9 + 108)) = v67;
    *SF_DRAFT_PTR(_DWORD, (*native_a9 + 112)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E948u)), v68);
    v69 = sub_800C6D90((*SF_DRAFT_PTR(uint32, 0x8011E98Cu)), (*SF_DRAFT_PTR(uint32, 0x8011E988u)));
    v70 = v116;
    *SF_DRAFT_PTR(_DWORD, (native_a9[1] + 120)) = v69;
    v117 = v69;
    (*SF_DRAFT_PTR(uint32, 0x8011E950u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E950u)), v70);
    (*SF_DRAFT_PTR(uint32, 0x8011E954u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E954u)), v116);
    (*SF_DRAFT_PTR(uint32, 0x8011E958u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E958u)), v116);
    *SF_DRAFT_PTR(_DWORD, (native_a9[1] + 104)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E950u)), v117);
    v71 = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E954u)), v117);
    v72 = v117;
    *SF_DRAFT_PTR(_DWORD, (native_a9[1] + 108)) = v71;
    *SF_DRAFT_PTR(_DWORD, (native_a9[1] + 112)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E958u)), v72);
    return 1;
  }
  result = 1;
  if ( *native_a10 < 3 )
  {
    if ( v53 != 1 )
      return result;
    v55 = (_DWORD *)*native_a9;
    v56 = v95;
    v57 = v96;
    v58 = v97;
    v55[26] = v94;
    v55[27] = v56;
    v55[28] = v57;
    v55[29] = v58;
    *SF_DRAFT_PTR(_DWORD, (*native_a9 + 120)) = 4096;
    return 1;
  }
  result = 1;
  if ( v53 == 3 )
  {
    v73 = *SF_DRAFT_PTR(_DWORD, (*native_a9 + 72));
    v74 = *SF_DRAFT_PTR(_DWORD, (*native_a9 + 76));
    v75 = *SF_DRAFT_PTR(_DWORD, (*native_a9 + 80));
    (*SF_DRAFT_PTR(uint32, 0x8011E940u)) = *SF_DRAFT_PTR(_DWORD, (*native_a9 + 68));
    (*SF_DRAFT_PTR(uint32, 0x8011E944u)) = v73;
    (*SF_DRAFT_PTR(uint32, 0x8011E948u)) = v74;
    (*SF_DRAFT_PTR(uint32, 0x8011E94Cu)) = v75;
    v76 = SF_DRAFT_PTR(_DWORD, native_a9[1]);
    v77 = v76[18];
    v78 = v76[19];
    (*SF_DRAFT_PTR(uint32, 0x8011E950u)) = v76[17];
    (*SF_DRAFT_PTR(uint32, 0x8011E954u)) = v77;
    (*SF_DRAFT_PTR(uint32, 0x8011E958u)) = v78;
    (*SF_DRAFT_PTR(uint32, 0x8011E95Cu)) = v76[20];
    v79 = SF_DRAFT_PTR(_DWORD, native_a9[2]);
    v80 = v79[18];
    v81 = v79[19];
    (*SF_DRAFT_PTR(uint32, 0x8011E960u)) = v79[17];
    (*SF_DRAFT_PTR(uint32, 0x8011E964u)) = v80;
    (*SF_DRAFT_PTR(uint32, 0x8011E968u)) = v81;
    (*SF_DRAFT_PTR(uint32, 0x8011E96Cu)) = v79[20];
    sub_800D9580(sf_draft_guest_address(&v94), sf_draft_guest_address(&v116));
    (*SF_DRAFT_PTR(uint32, 0x8011E970u)) = sub_800C6D90(v94, v116);
    (*SF_DRAFT_PTR(uint32, 0x8011E974u)) = sub_800C6D90(v95, v116);
    (*SF_DRAFT_PTR(uint32, 0x8011E978u)) = sub_800C6D90(v96, v116);
    sub_800DB3C4(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011E940u)), sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011E980u)));
    v82 = sub_800C6D90((*SF_DRAFT_PTR(uint32, 0x8011E984u)), (*SF_DRAFT_PTR(uint32, 0x8011E980u)));
    v83 = v116;
    v117 = v82;
    *SF_DRAFT_PTR(_DWORD, (*native_a9 + 120)) = v82;
    (*SF_DRAFT_PTR(uint32, 0x8011E940u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E940u)), v83);
    (*SF_DRAFT_PTR(uint32, 0x8011E944u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E944u)), v116);
    (*SF_DRAFT_PTR(uint32, 0x8011E948u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E948u)), v116);
    *SF_DRAFT_PTR(_DWORD, (*native_a9 + 104)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E940u)), v117);
    v84 = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E944u)), v117);
    v85 = v117;
    *SF_DRAFT_PTR(_DWORD, (*native_a9 + 108)) = v84;
    *SF_DRAFT_PTR(_DWORD, (*native_a9 + 112)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E948u)), v85);
    v86 = sub_800C6D90((*SF_DRAFT_PTR(uint32, 0x8011E98Cu)), (*SF_DRAFT_PTR(uint32, 0x8011E988u)));
    v87 = v116;
    *SF_DRAFT_PTR(_DWORD, (native_a9[1] + 120)) = v86;
    v117 = v86;
    (*SF_DRAFT_PTR(uint32, 0x8011E950u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E950u)), v87);
    (*SF_DRAFT_PTR(uint32, 0x8011E954u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E954u)), v116);
    (*SF_DRAFT_PTR(uint32, 0x8011E958u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E958u)), v116);
    *SF_DRAFT_PTR(_DWORD, (native_a9[1] + 104)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E950u)), v117);
    v88 = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E954u)), v117);
    v89 = v117;
    *SF_DRAFT_PTR(_DWORD, (native_a9[1] + 108)) = v88;
    *SF_DRAFT_PTR(_DWORD, (native_a9[1] + 112)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E958u)), v89);
    v90 = sub_800C6D90((*SF_DRAFT_PTR(uint32, 0x8011E994u)), (*SF_DRAFT_PTR(uint32, 0x8011E990u)));
    v91 = v116;
    *SF_DRAFT_PTR(_DWORD, (native_a9[2] + 120)) = v90;
    v117 = v90;
    (*SF_DRAFT_PTR(uint32, 0x8011E960u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E960u)), v91);
    (*SF_DRAFT_PTR(uint32, 0x8011E964u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E964u)), v116);
    (*SF_DRAFT_PTR(uint32, 0x8011E968u)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E968u)), v116);
    *SF_DRAFT_PTR(_DWORD, (native_a9[2] + 104)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E960u)), v117);
    v92 = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E964u)), v117);
    v93 = v117;
    *SF_DRAFT_PTR(_DWORD, (native_a9[2] + 108)) = v92;
    *SF_DRAFT_PTR(_DWORD, (native_a9[2] + 112)) = sub_800C6D4C((*SF_DRAFT_PTR(uint32, 0x8011E968u)), v93);
    return 1;
  }
  return result;
}

// FUNCTION_MARKER 0x80089684u 0x80089684
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80089684(sint32 a1, uint32 a2, uint32 a3)
{
  _DWORD * native_a2 = SF_DRAFT_PTR(_DWORD, a2);
  _DWORD * native_a3 = SF_DRAFT_PTR(_DWORD, a3);
  FUNCTION_MARKER(0x80089684u, "SCUS_942.40");
  int v6; 
  int v7; 
  _DWORD *v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  unsigned int v16; 
  int i; 
  int v18; 
  int v19; 
  int v20; 
  bool v21; 
  bool v22; 
  int v23; 
  int v24; 
  bool v25; 
  bool v26; 
  int v27; 
  int v28; 
  int v29; 
  int result; 
  int v31; 
  int v32; 
  int *v33; 
  BOOL v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  uint8 *v70; 
  uint8 *v71; 
  _DWORD *v72; 
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
  int v91; 
  int v92; 
  int v93; 
  int v94; 
  bool v95; 
  bool v96; 
  int v97; 
  int v98; 
  char v99; 
  char v100[23]; 

  v6 = 0;
  v7 = 0;
  if ( native_a3[9] > 0 )
  {
    v8 = native_a3;
    do
    {
      v9 = v8[10];
      v10 = native_a2[140] * *SF_DRAFT_PTR(_DWORD, (v9 + 48)) + native_a2[141] * *SF_DRAFT_PTR(_DWORD, (v9 + 52)) + native_a2[142] * *SF_DRAFT_PTR(_DWORD, (v9 + 56));
      if ( v10 < 0 )
        v11 = -(-v10 >> 12);
      else
        v11 = v10 >> 12;
      if ( v11 < (sint32)native_a3[3] )
        goto LABEL_10;
      if ( (sint32)native_a3[4] < v11 )
        goto LABEL_10;
      *SF_DRAFT_PTR(_DWORD, (v9 + 68)) = v11;
      v70 = *(uint8 **)v9;
      v71 = *(uint8 **)(v9 + 4);
      v72 = SF_DRAFT_PTR(_DWORD, r_u32((v9 + 8)));
      v74 = *SF_DRAFT_PTR(_DWORD, (v9 + 52));
      v75 = *SF_DRAFT_PTR(_DWORD, (v9 + 56));
      v79 = native_a2[137] - (_DWORD)v71;
      v80 = native_a2[138] - (_DWORD)v72;
      v12 = sub_800C6D4C(native_a2[136] - *SF_DRAFT_PTR(_DWORD, v9), *SF_DRAFT_PTR(_DWORD, (v9 + 48)));
      v13 = sub_800C6D4C(v79, v74);
      v14 = v12 + v13 + sub_800C6D4C(v80, v75);
      if ( v14 < (sint32)native_a3[5] )
        goto LABEL_10;
      if ( (sint32)native_a3[6] >= v14 )
      {
        ++v8;
        ++v6;
      }
      else
      {
LABEL_10:
        v15 = v8[10];
        v8[10] = native_a3[native_a3[9] + 9];
        native_a3[native_a3[9]-- + 9] = v15;
      }
    }
    while ( v6 < (sint32)native_a3[9] );
  }
  v16 = 0;
  do
  {
    if ( v16 >= 2 )
      break;
    for ( i = 0; i < (sint32)native_a3[9]; ++i )
    {
      v18 = native_a3[i + 10];
      v70 = *(uint8 **)v18;
      v71 = *(uint8 **)(v18 + 4);
      v72 = SF_DRAFT_PTR(_DWORD, r_u32((v18 + 8)));
      v73 = *SF_DRAFT_PTR(_DWORD, (v18 + 32));
      v76 = *SF_DRAFT_PTR(_DWORD, (v18 + 40));
      if ( !v16 )
      {
        v86 = native_a2[139];
        v87 = *SF_DRAFT_PTR(_DWORD, (v18 + 48));
        v91 = *SF_DRAFT_PTR(_DWORD, (v18 + 56));
        v94 = *SF_DRAFT_PTR(_DWORD, (v18 + 60));
        v19 = -v87 * v76 - -v91 * v73;
        v20 = (native_a2[138] - (_DWORD)v72) * -v87 - (native_a2[136] - (_DWORD)v70) * -v91;
        if ( v19 > 0 )
        {
          v21 = 0;
          if ( v20 >= 0 )
          {
            v22 = v19 < v20;
            goto LABEL_39;
          }
          goto LABEL_40;
        }
        if ( v19 < 0 )
        {
          v21 = 0;
          if ( v20 <= 0 )
          {
            v22 = v20 < v19;
            goto LABEL_39;
          }
          goto LABEL_40;
        }
        goto LABEL_41;
      }
      v81 = (0u - *SF_DRAFT_PTR(_DWORD, (v18 + 48)));
      v77 = sub_800C6D4C(*SF_DRAFT_PTR(_DWORD, (v18 + 56)), 40);
      sub_800C6D4C(0, 40);
      v82 = sub_800C6D4C(v81, 40);
      v88 = *SF_DRAFT_PTR(_DWORD, (v18 + 48));
      v92 = *SF_DRAFT_PTR(_DWORD, (v18 + 56));
      v94 = *SF_DRAFT_PTR(_DWORD, (v18 + 60));
      v23 = -v88 * v76 - -v92 * v73;
      v24 = (native_a2[138] - v82 - (_DWORD)v72) * -v88 - (native_a2[136] - v77 - (_DWORD)v70) * -v92;
      if ( v23 <= 0 )
      {
        if ( v23 >= 0 )
        {
          v95 = 0;
          goto LABEL_32;
        }
        v25 = 0;
        if ( v24 <= 0 )
        {
          v26 = v24 < v23;
          goto LABEL_29;
        }
      }
      else
      {
        v25 = 0;
        if ( v24 >= 0 )
        {
          v26 = v23 < v24;
LABEL_29:
          v25 = !v26;
        }
      }
      v95 = v25;
LABEL_32:
      if ( v95 )
        goto LABEL_43;
      v27 = -v88 * v76 - -v92 * v73;
      v28 = (native_a2[138] + v82 - (_DWORD)v72) * -v88 - (native_a2[136] + v77 - (_DWORD)v70) * -v92;
      if ( v27 > 0 )
      {
        v21 = 0;
        if ( v28 >= 0 )
        {
          v22 = v27 < v28;
          goto LABEL_39;
        }
        goto LABEL_40;
      }
      if ( v27 < 0 )
      {
        v21 = 0;
        if ( v28 <= 0 )
        {
          v22 = v28 < v27;
LABEL_39:
          v21 = !v22;
        }
LABEL_40:
        v96 = v21;
        goto LABEL_42;
      }
LABEL_41:
      v96 = 0;
LABEL_42:
      if ( v96 )
      {
LABEL_43:
        if ( !v7 || *SF_DRAFT_PTR(_DWORD, (v18 + 68)) != 0x7FFFFFFF )
          v7 = v18;
      }
    }
    ++v16;
  }
  while ( !v7 );
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) &= ~(1 << *native_a3);
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) &= ~(1 << native_a3[1]);
  v29 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  result = *SF_DRAFT_PTR(_DWORD, (v29 + 404)) & ~(1 << native_a3[2]);
  *SF_DRAFT_PTR(_DWORD, (v29 + 404)) = result;
  native_a3[26] = v7;
  if ( v7 )
  {
    v31 = *SF_DRAFT_PTR(_DWORD, (v7 + 32));
    if ( v31 < 0 )
      v31 = -v31;
    v78 = v31;
    v32 = *SF_DRAFT_PTR(_DWORD, (v7 + 40));
    if ( v32 < 0 )
      v32 = -v32;
    v33 = SF_DRAFT_PTR(int, r_u32((v7 + 80)));
    v97 = 0x7FFFFFFF;
    v98 = -2147483647;
    if ( v33 )
    {
      v34 = v32 < v31;
      do
      {
        if ( v34 )
        {
          v35 = *v33;
          v36 = v33[4];
        }
        else
        {
          v35 = v33[2];
          v36 = v33[6];
        }
        if ( v35 < v97 )
          v97 = v35;
        if ( v36 < v97 )
          v97 = v36;
        if ( v98 < v35 )
          v98 = v35;
        if ( v98 < v36 )
          v98 = v36;
        v33 = SF_DRAFT_PTR(int, v33[21]);
      }
      while ( v33 );
    }
    if ( v32 >= v78 )
    {
      if ( *SF_DRAFT_PTR(int, (v7 + 40)) < 0 )
      {
        v38 = v97;
        v97 = v98;
        v98 = v38;
      }
      v83 = sub_80089624(*SF_DRAFT_PTR(_DWORD, (v7 + 8)), *SF_DRAFT_PTR(_DWORD, v7), *SF_DRAFT_PTR(_DWORD, (v7 + 40)), *SF_DRAFT_PTR(_DWORD, (v7 + 32)), v97);
      v84 = sub_80089624(*SF_DRAFT_PTR(_DWORD, (v7 + 8)), *SF_DRAFT_PTR(_DWORD, (v7 + 4)), *SF_DRAFT_PTR(_DWORD, (v7 + 40)), *SF_DRAFT_PTR(_DWORD, (v7 + 36)), v97);
      v85 = v97;
      v89 = sub_80089624(*SF_DRAFT_PTR(_DWORD, (v7 + 8)), *SF_DRAFT_PTR(_DWORD, v7), *SF_DRAFT_PTR(_DWORD, (v7 + 40)), *SF_DRAFT_PTR(_DWORD, (v7 + 32)), v98);
      v90 = sub_80089624(*SF_DRAFT_PTR(_DWORD, (v7 + 8)), *SF_DRAFT_PTR(_DWORD, (v7 + 4)), *SF_DRAFT_PTR(_DWORD, (v7 + 40)), *SF_DRAFT_PTR(_DWORD, (v7 + 36)), v98);
      v93 = v98;
    }
    else
    {
      if ( *SF_DRAFT_PTR(int, (v7 + 32)) < 0 )
      {
        v37 = v97;
        v97 = v98;
        v98 = v37;
      }
      v83 = v97;
      v84 = sub_80089624(*SF_DRAFT_PTR(_DWORD, v7), *SF_DRAFT_PTR(_DWORD, (v7 + 4)), *SF_DRAFT_PTR(_DWORD, (v7 + 32)), *SF_DRAFT_PTR(_DWORD, (v7 + 36)), v97);
      v85 = sub_80089624(*SF_DRAFT_PTR(_DWORD, v7), *SF_DRAFT_PTR(_DWORD, (v7 + 8)), *SF_DRAFT_PTR(_DWORD, (v7 + 32)), *SF_DRAFT_PTR(_DWORD, (v7 + 40)), v97);
      v89 = v98;
      v90 = sub_80089624(*SF_DRAFT_PTR(_DWORD, v7), *SF_DRAFT_PTR(_DWORD, (v7 + 4)), *SF_DRAFT_PTR(_DWORD, (v7 + 32)), *SF_DRAFT_PTR(_DWORD, (v7 + 36)), v98);
      v93 = sub_80089624(*SF_DRAFT_PTR(_DWORD, v7), *SF_DRAFT_PTR(_DWORD, (v7 + 8)), *SF_DRAFT_PTR(_DWORD, (v7 + 32)), *SF_DRAFT_PTR(_DWORD, (v7 + 40)), v98);
    }
    *SF_DRAFT_PTR(_DWORD, v7) = v83;
    *SF_DRAFT_PTR(_DWORD, (v7 + 4)) = v84;
    *SF_DRAFT_PTR(_DWORD, (v7 + 8)) = v85;
    *SF_DRAFT_PTR(_DWORD, (v7 + 12)) = v86;
    *SF_DRAFT_PTR(_DWORD, (v7 + 16)) = v89;
    *SF_DRAFT_PTR(_DWORD, (v7 + 20)) = v90;
    *SF_DRAFT_PTR(_DWORD, (v7 + 24)) = v93;
    *SF_DRAFT_PTR(_DWORD, (v7 + 28)) = v94;
    *SF_DRAFT_PTR(_DWORD, (v7 + 32)) = v89 - v83;
    *SF_DRAFT_PTR(_DWORD, (v7 + 36)) = v90 - v84;
    *SF_DRAFT_PTR(_DWORD, (v7 + 40)) = v93 - v85;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) |= 1 << *native_a3;
    v39 = 12;
    if ( (*SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16))) & 2) != 0 )
      v39 = 24;
    sub_8006E6A8((uint32)a1, (sint32)native_a3[7], v39, 0x8010DDBCu, (uint32)v7, (uint32)v7 + 32u, sf_draft_guest_address(&v99), sf_draft_guest_address(v100), 0u);
    if ( v99 )
    {
      *SF_DRAFT_PTR(_BYTE, (v7 + 72)) = 0;
    }
    else
    {
      *SF_DRAFT_PTR(_BYTE, (v7 + 72)) = 1;
      *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) |= 1 << native_a3[1];
    }
    result = 1;
    if ( v100[0] )
    {
      *SF_DRAFT_PTR(_BYTE, (v7 + 73)) = 0;
    }
    else
    {
      *SF_DRAFT_PTR(_BYTE, (v7 + 73)) = 1;
      v40 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
      result = *SF_DRAFT_PTR(_DWORD, (v40 + 404)) | (1 << native_a3[2]);
      *SF_DRAFT_PTR(_DWORD, (v40 + 404)) = result;
    }
  }
  return result;
}

// FUNCTION_MARKER 0x8001D9A4u 0x8001d9a4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001D9A4(void)
{
  FUNCTION_MARKER(0x8001D9A4u, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int v1 = SF_DRAFT_GP;
  int v2; 
  int v3 = SF_DRAFT_GP;
  _DWORD *v4; 
  int v5 = SF_DRAFT_GP;
  _DWORD *v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10 = SF_DRAFT_GP;
  _DWORD *v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15 = SF_DRAFT_GP;
  _DWORD *v16; 
  int v17; 
  int v18; 
  int v19; 
  _DWORD *v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24 = SF_DRAFT_GP;
  _DWORD *v25; 
  int v26; 
  int v27; 
  int v28; 
  _DWORD *v29; 
  int v30; 
  int v31; 
  int v32; 
  _DWORD *v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  _DWORD *v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  BOOL v48; 
  __int16 *v49; 
  BOOL v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  _DWORD *v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  _DWORD *v62; 
  int v63; 
  int v64; 
  int v65; 
  int result; 
  int v67; 
  int v68; 
  int v69; 
  _DWORD *v70; 
  int v71; 
  int v72; 
  int v73; 
  _DWORD *v74; 
  int v75; 
  int v76; 
  int v77; 
  _DWORD *v78; 
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
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  int v113; 
  int v114; 
  int v115; 
  int v116; 
  int v117; 
  int v118; 
  int v119; 
  int vars0; 
  int vars4; 

  v86 = (*SF_DRAFT_PTR(uint32, 0x800101D0u));
  v87 = (*SF_DRAFT_PTR(uint32, 0x800101D4u));
  v88 = (*SF_DRAFT_PTR(uint32, 0x800101D8u));
  v89 = (*SF_DRAFT_PTR(uint32, 0x800101DCu));
  v90 = (*SF_DRAFT_PTR(uint32, 0x800101D0u));
  v91 = (*SF_DRAFT_PTR(uint32, 0x800101D4u));
  v92 = (*SF_DRAFT_PTR(uint32, 0x800101D8u));
  v93 = (*SF_DRAFT_PTR(uint32, 0x800101DCu));
  sub_800189FC(*SF_DRAFT_PTR(_DWORD, (v0 + 284)), 0, 1, 0);
  v2 = *SF_DRAFT_PTR(_DWORD, (v1 + 284));
  v94 = *SF_DRAFT_PTR(_DWORD, (v2 + 3348));
  sub_800189FC(v2, 0, 2, 0);
  v4 = SF_DRAFT_PTR(_DWORD, r_u32((v3 + 284)));
  v95 = v4[837];
  if ( v95 )
  {
    if ( sub_8001C960(0) && (*SF_DRAFT_PTR(uint32, 0x801191F4u)) == 5 )
      goto LABEL_12;
    if ( !(*SF_DRAFT_PTR(uint32, 0x801191ECu)) || (*SF_DRAFT_PTR(uint32, 0x801191F0u)) == 3 || (*SF_DRAFT_PTR(uint32, 0x801191F0u)) == 1 )
    {
      v6 = SF_DRAFT_PTR(_DWORD, r_u32((v5 + 284)));
      if ( v6[595] )
      {
        v7 = v6[610];
        v8 = v6[611];
        v9 = v6[612];
        v86 = v6[609];
        v87 = v7;
        v88 = v8;
        v89 = v9;
      }
      else
      {
        v86 = v6[609];
      }
      v90 = 1;
      v91 = 1;
      goto LABEL_13;
    }
    if ( v94 == v95 )
    {
LABEL_12:
      sub_800189FC(*SF_DRAFT_PTR(_DWORD, (v5 + 284)), 0, 1, 7);
      v11 = SF_DRAFT_PTR(_DWORD, r_u32((v10 + 284)));
      v12 = v11[840];
      v13 = v11[841];
      v14 = v11[842];
      v82 = v11[839];
      v83 = v12;
      v84 = v13;
      v85 = v14;
      v87 = sub_800EC124(v82, v13);
      sub_800E0B8C(sf_draft_guest_address(&v82), sf_draft_guest_address(&v86));
      v88 = 0;
      v90 = 1;
      v91 = 1;
LABEL_13:
      v92 = 0;
      sub_8001D924(sf_draft_guest_address(&v86));
LABEL_78:
      v55 = SF_DRAFT_PTR(_DWORD, r_u32((v3 + 284)));
      v56 = v87;
      v57 = v88;
      v58 = v89;
      v55[839] = v86;
      v55[840] = v56;
      v55[841] = v57;
      v55[842] = v58;
      goto LABEL_92;
    }
    sub_800189FC(*SF_DRAFT_PTR(_DWORD, (v5 + 284)), 0, 2, 1);
    v16 = SF_DRAFT_PTR(_DWORD, r_u32((v15 + 284)));
    v17 = v16[840];
    v18 = v16[841];
    v19 = v16[842];
    v96 = v16[839];
    v97 = v17;
    v98 = v18;
    v99 = v19;
    if ( (*SF_DRAFT_PTR(uint8, 0x8011921Au)) )
    {
      sub_800189FC(*SF_DRAFT_PTR(_DWORD, (v15 + 284)), 0, 1, 1);
      v25 = SF_DRAFT_PTR(_DWORD, r_u32((v24 + 284)));
      v26 = v25[840];
      v27 = v25[841];
      v28 = v25[842];
      v100 = v25[839];
      v101 = v26;
      v102 = v27;
      v103 = v28;
    }
    else
    {
      v20 = SF_DRAFT_PTR(_DWORD, r_u32((v15 + 284)));
      if ( v20[352] )
      {
        v21 = v20[367];
        v22 = v20[368];
        v23 = v20[369];
        v100 = v20[366];
        v101 = v21;
        v102 = v22;
        v103 = v23;
      }
      else
      {
        v100 = v20[366];
      }
    }
    v82 = v96 - v100;
    v84 = v98 - v102;
    v83 = v97 - v101;
    v87 = sub_800EC124(v96 - v100, v98 - v102);
    sub_800E0B8C(sf_draft_guest_address(&v82), sf_draft_guest_address(&v86));
    v29 = SF_DRAFT_PTR(_DWORD, r_u32((v3 + 284)));
    v88 = 0;
    if ( v29[595] )
    {
      v30 = v29[610];
      v31 = v29[611];
      v32 = v29[612];
      v104 = v29[609];
      v105 = v30;
      v106 = v31;
      v107 = v32;
    }
    else
    {
      v104 = v29[609];
    }
    v33 = SF_DRAFT_PTR(_DWORD, r_u32((v3 + 284)));
    if ( v33[595] )
    {
      v34 = v33[598];
      v35 = v33[599];
      v36 = v33[600];
      v111 = v33[597];
      v112 = v34;
      v113 = v35;
      v114 = v36;
    }
    else
    {
      v111 = v33[597];
    }
    v115 = (v104 - v111) / 256;
    v116 = (v105 - v112) / 256;
    v105 = v112 + v116;
    v117 = (v106 - v113) / 256;
    v104 = v111 + v115;
    v106 = v113 + v117;
    v37 = v86 - (v111 + v115);
    v108 = v37;
    if ( v37 < 2049 )
    {
      v38 = v37 + 4096;
      if ( v37 >= -2048 )
        goto LABEL_29;
    }
    else
    {
      v38 = v37 - 4096;
    }
    v108 = v38;
LABEL_29:
    v39 = v87 - v105;
    v109 = v87 - v105;
    if ( v87 - v105 < 2049 )
    {
      v40 = v39 + 4096;
      if ( v39 >= -2048 )
        goto LABEL_33;
    }
    else
    {
      v40 = v39 - 4096;
    }
    v109 = v40;
LABEL_33:
    v41 = v88 - v106;
    v110 = v88 - v106;
    if ( v88 - v106 < 2049 )
    {
      v42 = v41 + 4096;
      if ( v41 >= -2048 )
      {
LABEL_37:
        v43 = SF_DRAFT_PTR(_DWORD, r_u32((v3 + 284)));
        if ( v43[757] )
        {
          v44 = v43[772];
          v45 = v43[773];
          v46 = v43[774];
          v118 = v43[771];
          v119 = v44;
          vars0 = v45;
          vars4 = v46;
        }
        else
        {
          v118 = v43[771];
        }
        if ( (*SF_DRAFT_PTR(uint32, 0x801191ECu)) == 4 || (*SF_DRAFT_PTR(uint32, 0x801191ECu)) == 11 )
          goto LABEL_57;
        if ( (*SF_DRAFT_PTR(uint32, 0x801191ECu)) == 12 )
        {
          v47 = 7 * v118 / 50;
LABEL_58:
          if ( v109 < v47 )
          {
            if ( -v47 < v109 )
              v51 = v105;
            else
              v51 = v105 + v109 + v47;
          }
          else
          {
            v51 = v105 + v109 - v47;
          }
          v87 = v51;
          v52 = 0;
          if ( (unsigned int)((*SF_DRAFT_PTR(uint32, 0x801191ECu)) - 11) >= 2 )
          {
            if ( (*SF_DRAFT_PTR(uint32, 0x801191ECu)) == 5 )
            {
              v52 = v118 / 4;
              v53 = -v118 >> 2;
              if ( v118 > 0 )
                v53 = (3 - v118) >> 2;
            }
            else
            {
              v52 = (-3 * v118) >> 6;
              if ( -3 * v118 < 0 )
                v52 = (-3 * v118 + 63) >> 6;
              v53 = -v118 >> 3;
              if ( v118 > 0 )
                v53 = (7 - v118) >> 3;
            }
          }
          else
          {
            v53 = 0;
          }
          if ( v108 < v52 )
          {
            if ( v53 < v108 )
              v54 = v104;
            else
              v54 = v104 + v108 - v53;
          }
          else
          {
            v54 = v104 + v108 - v52;
          }
          v86 = v54;
          v90 = 1;
          v91 = 1;
          v92 = 0;
          goto LABEL_78;
        }
        if ( (*SF_DRAFT_PTR(uint32, 0x801191ECu)) != 2 && (*SF_DRAFT_PTR(uint32, 0x801191ECu)) != 5 )
        {
LABEL_57:
          v47 = 0;
          goto LABEL_58;
        }
        v48 = 0;
        if ( !(*SF_DRAFT_PTR(uint32, 0x80119194u)) )
          goto LABEL_53;
        v49 = SF_DRAFT_PTR(__int16, r_u32(((*SF_DRAFT_PTR(uint32, 0x80119194u)) + 20)));
        v50 = 0;
        if ( v49 )
        {
          v50 = 0;
          if ( *v49 >= 0 )
          {
            if ( (*((_DWORD *)v49 + 1) & 2) == 0 )
            {
LABEL_53:
              v50 = v48;
              goto LABEL_54;
            }
            v50 = 0;
            if ( (*SF_DRAFT_PTR(uint32, 0x80119198u)) )
            {
              v50 = 0;
              if ( *SF_DRAFT_PTR(_BYTE, ((*SF_DRAFT_PTR(uint32, 0x80119198u)) + 34)) == 2 )
              {
                v48 = (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80119198u)) + 20)) + 4)) & 0x20) == 0;
                goto LABEL_53;
              }
            }
          }
        }
LABEL_54:
        v47 = 0;
        if ( !v50 )
        {
          v47 = (3 * v118) >> 3;
          if ( 3 * v118 < 0 )
            v47 = (3 * v118 + 7) >> 3;
        }
        goto LABEL_58;
      }
    }
    else
    {
      v42 = v41 - 4096;
    }
    v110 = v42;
    goto LABEL_37;
  }
  if ( (*SF_DRAFT_PTR(uint32, 0x801191F0u)) == 3 )
  {
    if ( v4[595] )
    {
      v59 = v4[610];
      v60 = v4[611];
      v61 = v4[612];
      v86 = v4[609];
      v87 = v59;
      v88 = v60;
      v89 = v61;
    }
    else
    {
      v86 = v4[609];
    }
    v62 = SF_DRAFT_PTR(_DWORD, r_u32((v3 + 284)));
    v90 = 1;
    v91 = 1;
    v92 = 0;
    v63 = v87;
    v64 = v88;
    v65 = v89;
    v62[839] = v86;
    v62[840] = v63;
    v62[841] = v64;
    v62[842] = v65;
  }
  else
  {
    result = 1;
    if ( (*SF_DRAFT_PTR(uint32, 0x801191F0u)) != 9 )
      return result;
    if ( v4[595] )
    {
      v67 = v4[610];
      v68 = v4[611];
      v69 = v4[612];
      v86 = v4[609];
      v87 = v67;
      v88 = v68;
      v89 = v69;
    }
    else
    {
      v86 = v4[609];
    }
    v70 = SF_DRAFT_PTR(_DWORD, r_u32((v3 + 284)));
    v87 += 34;
    if ( v70[676] )
    {
      v71 = v70[679];
      v72 = v70[680];
      v73 = v70[681];
      v104 = v70[678];
      v105 = v71;
      v106 = v72;
      v107 = v73;
    }
    else
    {
      v104 = v70[678];
    }
    v74 = SF_DRAFT_PTR(_DWORD, r_u32((v3 + 284)));
    v90 = 1;
    v91 = 1;
    v92 = 0;
    v86 = v104;
    v75 = v87;
    v76 = v88;
    v77 = v89;
    v74[839] = v104;
    v74[840] = v75;
    v74[841] = v76;
    v74[842] = v77;
  }
LABEL_92:
  v78 = SF_DRAFT_PTR(_DWORD, r_u32((v3 + 284)));
  v79 = v91;
  v80 = v92;
  v81 = v93;
  v78[844] = v90;
  v78[845] = v79;
  v78[846] = v80;
  v78[847] = v81;
  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v3 + 284)) + 3392)) = 0;
  sub_80018994(*SF_DRAFT_PTR(_DWORD, (v3 + 284)), 1, 6, 1);
  return 1;
}

// FUNCTION_MARKER 0x8001F1B8u 0x8001f1b8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001F1B8(void)
{
  FUNCTION_MARKER(0x8001F1B8u, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int v1; 
  char v2; 
  _DWORD *v3; 
  int v4; 
  int v5; 
  _DWORD *v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  _WORD ***v11; 
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
  bool v38; 
  int v39; 
  int **v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int result; 
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
  int v67; 
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
  __int16 v79; 
  __int16 v80; 
  __int16 v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 

  v1 = *SF_DRAFT_PTR(_DWORD, (v0 + 284));
  v49 = (*SF_DRAFT_PTR(uint32, 0x800101D0u));
  v50 = (*SF_DRAFT_PTR(uint32, 0x800101D4u));
  v51 = (*SF_DRAFT_PTR(uint32, 0x800101D8u));
  v52 = (*SF_DRAFT_PTR(uint32, 0x800101DCu));
  v46 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32(v1)) + 20));
  v2 = 0;
  v47 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32(v1)) + 24));
  v3 = SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x80119238u)));
  v4 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32(v1)) + 28));
  v47 = -v47;
  v48 = v4;
  if ( (*SF_DRAFT_PTR(uint32, 0x80119238u)) )
  {
    v2 = 1;
    do
    {
      v5 = *v3;
      v6 = SF_DRAFT_PTR(_DWORD, v3[2]);
      if ( !*SF_DRAFT_PTR(_DWORD, (*v3 + 4)) )
      {
        v7 = sub_800C6D4C(*SF_DRAFT_PTR(_DWORD, (v5 + 12)), 3481);
        v8 = *SF_DRAFT_PTR(_DWORD, (v5 + 16));
        *SF_DRAFT_PTR(_DWORD, (v5 + 12)) = v7;
        v9 = sub_800C6D4C(v8, 3481);
        v10 = *SF_DRAFT_PTR(_DWORD, (v5 + 20));
        *SF_DRAFT_PTR(_DWORD, (v5 + 16)) = v9;
        *SF_DRAFT_PTR(_DWORD, (v5 + 20)) = sub_800C6D4C(v10, 3481);
      }
      v11 = *(_WORD ****)(v0 + 284);
      LOWORD(v76) = ***v11;
      HIWORD(v76) = -(**v11)[1];
      LOWORD(v77) = (**v11)[2];
      v12 = -(uint16)(**v11)[3];
      HIWORD(v77) = -(**v11)[3];
      LOWORD(v78) = (**v11)[4];
      HIWORD(v78) = -(**v11)[5];
      v79 = (**v11)[6];
      v80 = -(**v11)[7];
      v81 = (**v11)[8];
      v55 = v79;
      v53 = (__int16)v76;
      v54 = (__int16)v12;
      v56 = -v79;
      v57 = 0;
      v58 = (__int16)v76;
      v65 = (*SF_DRAFT_PTR(uint8, 0x80119390u)) * *SF_DRAFT_PTR(_DWORD, (v5 + 12)) * (sub_800EC8F4() % 4096) / 4096;
      v66 = (*SF_DRAFT_PTR(uint8, 0x80119391u)) * *SF_DRAFT_PTR(_DWORD, (v5 + 16));
      v67 = (*SF_DRAFT_PTR(uint8, 0x80119392u)) * *SF_DRAFT_PTR(_DWORD, (v5 + 20)) * (sub_800EC8F4() % 4096) / 4096;
      v69 = v65;
      v70 = v66;
      v71 = v67;
      v72 = (sf_draft_unbound_stack_field(0x8001F1B8u, 0x7Cu), 0u);
      v13 = *SF_DRAFT_PTR(_DWORD, (v5 + 28));
      if ( v13 )
      {
        v76 = *SF_DRAFT_PTR(_DWORD, (v13 + 20));
        v14 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 28)) + 24));
        v15 = v76 - v46;
        if ( v76 - v46 < 0 )
          v15 = v46 - v76;
        v85 = v15;
        v77 = v14;
        v16 = -v14;
        v17 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 28)) + 28));
        v18 = v16 - v47;
        if ( v16 - v47 < 0 )
          v18 = v47 - v16;
        v86 = v18;
        v77 = v16;
        v82 = v76 - v46;
        v83 = v16 - v47;
        v78 = v17;
        v19 = v17 - v48;
        v20 = v19;
        if ( v19 < 0 )
          v20 = -v19;
        v84 = v19;
        v87 = v20;
        if ( v15 < v18 )
        {
          v85 = v18;
          v86 = v15;
        }
        v21 = v85;
        if ( v85 < v20 )
        {
          v85 = v20;
          v87 = v21;
        }
        v22 = v85 + ((v86 + v87) >> 2);
        if ( v22 + 256 >= 4097 )
          v23 = 0;
        else
          v23 = 3840 - v22;
        v65 = sub_800C6D4C(v65, v23);
        if ( v22 + 256 >= 4097 )
          v24 = 0;
        else
          v24 = 3840 - v22;
        v66 = sub_800C6D4C(v66, v24);
        if ( v22 + 256 >= 4097 )
          v25 = 0;
        else
          v25 = 3840 - v22;
        v67 = sub_800C6D4C(v67, v25);
      }
      v59 = sub_800C6D4C(v53, v65);
      v60 = sub_800C6D4C(v54, v65);
      v61 = sub_800C6D4C(v55, v65);
      if ( v59 < 0 )
        v26 = -(-v59 >> 1);
      else
        v26 = v59 >> 1;
      v59 = v26;
      if ( v60 < 0 )
        v27 = -(-v60 >> 1);
      else
        v27 = v60 >> 1;
      v60 = v27;
      if ( v61 < 0 )
        v28 = -(-v61 >> 1);
      else
        v28 = v61 >> 1;
      v61 = v28;
      if ( !v59 && v69 > 0 )
      {
        v29 = (v53 * v69) >> 31;
        if ( v53 * v69 > 0 )
          v29 = 1;
        v59 = v29;
      }
      if ( !v61 && v69 < 0 )
      {
        v30 = (v55 * v69) >> 31;
        if ( v55 * v69 > 0 )
          v30 = 1;
        v61 = v30;
      }
      v62 = sub_800C6D4C(v56, v67);
      v63 = sub_800C6D4C(v57, v67);
      v64 = sub_800C6D4C(v58, v67);
      if ( v62 < 0 )
        v31 = -(-v62 >> 1);
      else
        v31 = v62 >> 1;
      v62 = v31;
      if ( v63 < 0 )
        v32 = -(-v63 >> 1);
      else
        v32 = v63 >> 1;
      v63 = v32;
      if ( v64 < 0 )
        v33 = -(-v64 >> 1);
      else
        v33 = v64 >> 1;
      v64 = v33;
      if ( !v62 && v71 < 0 )
      {
        v34 = (v53 * v71) >> 31;
        if ( v53 * v71 > 0 )
          v34 = 1;
        v62 = v34;
      }
      if ( !v64 && v71 > 0 )
      {
        v35 = (v55 * v71) >> 31;
        if ( v55 * v71 > 0 )
          v35 = 1;
        v64 = v35;
      }
      v73 = v59 + v62;
      v74 = v60 + v63;
      v75 = v61 + v64;
      if ( v66 < 0 )
        v36 = -(-v66 >> 1);
      else
        v36 = v66 >> 1;
      v74 = v36;
      if ( !v36 )
        v74 = v70 > 0;
      v49 += v73;
      v50 += v74;
      v51 += v75;
      v37 = *SF_DRAFT_PTR(_DWORD, (v5 + 4));
      v38 = v37 <= 0;
      v39 = v37 - 1;
      if ( !v38 )
        *SF_DRAFT_PTR(_DWORD, (v5 + 4)) = v39;
      if ( !*SF_DRAFT_PTR(_DWORD, (v5 + 4)) && !*SF_DRAFT_PTR(_DWORD, (v5 + 12)) && !*SF_DRAFT_PTR(_DWORD, (v5 + 16)) && !*SF_DRAFT_PTR(_DWORD, (v5 + 20)) )
      {
        *SF_DRAFT_PTR(_BYTE, v5) = 0;
        sub_800DE6E0(0x80119238u, sf_draft_guest_address(v3));
      }
      v3 = v6;
    }
    while ( v6 );
  }
  v40 = *(int ***)(v0 + 284);
  v41 = v46 + v49;
  v47 += v50;
  v46 += v49;
  v48 += v51;
  v42 = **v40;
  if ( *SF_DRAFT_PTR(_DWORD, (v42 + 32)) )
  {
    sub_800DC8AC(v42,  0, sf_draft_guest_address(&v46));
  }
  else
  {
    *SF_DRAFT_PTR(_DWORD, (v42 + 20)) = v41;
    *SF_DRAFT_PTR(_DWORD, (**v40 + 24)) = -v47;
    *SF_DRAFT_PTR(_DWORD, (**v40 + 28)) = v48;
  }
  if ( v2 )
  {
    v49 *= 2816;
    v50 *= 2816;
    v51 *= 2816;
    sub_800D9580(sf_draft_guest_address(&v49), sf_draft_guest_address(&v88));
    v43 = sub_800EA904(v88);
    v88 = v43;
    if ( v43 < 256 && v43 < 57 )
    {
      v44 = 56;
    }
    else
    {
      v44 = 255;
      if ( v43 < 256 )
        v44 = v43;
    }
    v88 = v44;
    sub_800D85BC(1, (uint8)v44, 2);
  }
  (*SF_DRAFT_PTR(uint8, 0x80119390u)) = (0u - (*SF_DRAFT_PTR(uint8, 0x80119390u)));
  result = -(uint8)(*SF_DRAFT_PTR(uint8, 0x80119391u));
  (*SF_DRAFT_PTR(uint8, 0x80119391u)) = (0u - (*SF_DRAFT_PTR(uint8, 0x80119391u)));
  (*SF_DRAFT_PTR(uint8, 0x80119392u)) = (0u - (*SF_DRAFT_PTR(uint8, 0x80119392u)));
  return result;
}


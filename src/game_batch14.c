#include "game_draft.h"

sint32 sub_8001A0A4(sint32 a1)
{
    FUNCTION_MARKER(0x8001A0A4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int v3; 
  int v4; 
  int v5; 
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
  int v22; 
  int v23; 
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
  v2 = 1;
  if ( *SF_DRAFT_PTR(_BYTE, a1) == 1 )
  {
    if ( *SF_DRAFT_PTR(_DWORD, (a1 + 4)) )
    {
      v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
      if ( v3 == 1 )
      {
        v25 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
        v26 = *SF_DRAFT_PTR(_DWORD, (a1 + 20));
        v27 = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
        (*SF_DRAFT_PTR(uint32, 0x801183CCu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
        (*SF_DRAFT_PTR(uint32, 0x801183D0u)) = v25;
        (*SF_DRAFT_PTR(uint32, 0x801183D4u)) = v26;
        (*SF_DRAFT_PTR(uint32, 0x801183D8u)) = v27;
        v28 = *SF_DRAFT_PTR(_DWORD, (a1 + 32));
        v29 = *SF_DRAFT_PTR(_DWORD, (a1 + 36));
        (*SF_DRAFT_PTR(uint32, 0x801183DCu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
        (*SF_DRAFT_PTR(uint32, 0x801183E0u)) = v28;
        (*SF_DRAFT_PTR(uint32, 0x801183E4u)) = v29;
        (*SF_DRAFT_PTR(uint32, 0x801183E8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 40));
        v30 = *SF_DRAFT_PTR(_DWORD, (a1 + 48));
        v31 = *SF_DRAFT_PTR(_DWORD, (a1 + 52));
        (*SF_DRAFT_PTR(uint32, 0x801183ECu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 44));
        (*SF_DRAFT_PTR(uint32, 0x801183F0u)) = v30;
        (*SF_DRAFT_PTR(uint32, 0x801183F4u)) = v31;
        (*SF_DRAFT_PTR(uint32, 0x801183F8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 56));
        v32 = *SF_DRAFT_PTR(_DWORD, (a1 + 96));
        v33 = *SF_DRAFT_PTR(_DWORD, (a1 + 100));
        (*SF_DRAFT_PTR(uint32, 0x801183FCu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 92));
        (*SF_DRAFT_PTR(uint32, 0x80118400u)) = v32;
        (*SF_DRAFT_PTR(uint32, 0x80118404u)) = v33;
        (*SF_DRAFT_PTR(uint32, 0x80118408u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 104));
        v34 = *SF_DRAFT_PTR(_DWORD, (a1 + 112));
        v35 = *SF_DRAFT_PTR(_DWORD, (a1 + 116));
        (*SF_DRAFT_PTR(uint32, 0x8011840Cu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 108));
        (*SF_DRAFT_PTR(uint32, 0x80118410u)) = v34;
        (*SF_DRAFT_PTR(uint32, 0x80118414u)) = v35;
        (*SF_DRAFT_PTR(uint32, 0x80118418u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 120));
        v36 = *SF_DRAFT_PTR(_DWORD, (a1 + 128));
        v37 = *SF_DRAFT_PTR(_DWORD, (a1 + 132));
        (*SF_DRAFT_PTR(uint32, 0x8011841Cu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 124));
        (*SF_DRAFT_PTR(uint32, 0x80118420u)) = v36;
        (*SF_DRAFT_PTR(uint32, 0x80118424u)) = v37;
        (*SF_DRAFT_PTR(uint32, 0x80118428u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 136));
        (*SF_DRAFT_PTR(uint32, 0x8011842Cu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 220));
        (*SF_DRAFT_PTR(uint32, 0x80118430u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 236));
        (*SF_DRAFT_PTR(uint32, 0x80118434u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 252));
        sub_8001A924(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x801183CCu))));
        v38 = (*SF_DRAFT_PTR(uint32, 0x801183D0u));
        v39 = (*SF_DRAFT_PTR(uint32, 0x801183D4u));
        v40 = (*SF_DRAFT_PTR(uint32, 0x801183D8u));
        *SF_DRAFT_PTR(_DWORD, (a1 + 12)) = (*SF_DRAFT_PTR(uint32, 0x801183CCu));
        *SF_DRAFT_PTR(_DWORD, (a1 + 16)) = v38;
        *SF_DRAFT_PTR(_DWORD, (a1 + 20)) = v39;
        *SF_DRAFT_PTR(_DWORD, (a1 + 24)) = v40;
        v41 = (*SF_DRAFT_PTR(uint32, 0x801183E0u));
        v42 = (*SF_DRAFT_PTR(uint32, 0x801183E4u));
        *SF_DRAFT_PTR(_DWORD, (a1 + 28)) = (*SF_DRAFT_PTR(uint32, 0x801183DCu));
        *SF_DRAFT_PTR(_DWORD, (a1 + 32)) = v41;
        *SF_DRAFT_PTR(_DWORD, (a1 + 36)) = v42;
        *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = (*SF_DRAFT_PTR(uint32, 0x801183E8u));
        v43 = (*SF_DRAFT_PTR(uint32, 0x801183F0u));
        v44 = (*SF_DRAFT_PTR(uint32, 0x801183F4u));
        *SF_DRAFT_PTR(_DWORD, (a1 + 44)) = (*SF_DRAFT_PTR(uint32, 0x801183ECu));
        *SF_DRAFT_PTR(_DWORD, (a1 + 48)) = v43;
        *SF_DRAFT_PTR(_DWORD, (a1 + 52)) = v44;
        *SF_DRAFT_PTR(_DWORD, (a1 + 56)) = (*SF_DRAFT_PTR(uint32, 0x801183F8u));
        (*SF_DRAFT_PTR(uint32, 0x801183A8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
        (*SF_DRAFT_PTR(uint32, 0x801183ACu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 32));
        (*SF_DRAFT_PTR(uint32, 0x801183B0u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 48));
        (*SF_DRAFT_PTR(uint32, 0x801183B4u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 96));
        (*SF_DRAFT_PTR(uint32, 0x801183B8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 112));
        (*SF_DRAFT_PTR(uint32, 0x801183BCu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 128));
        (*SF_DRAFT_PTR(uint32, 0x801183C0u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 224));
        (*SF_DRAFT_PTR(uint32, 0x801183C4u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 240));
        (*SF_DRAFT_PTR(uint32, 0x801183C8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 256));
        sub_8001A7AC(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x801183A8u))));
        *SF_DRAFT_PTR(_DWORD, (a1 + 16)) = (*SF_DRAFT_PTR(uint32, 0x801183A8u));
        *SF_DRAFT_PTR(_DWORD, (a1 + 32)) = (*SF_DRAFT_PTR(uint32, 0x801183ACu));
        *SF_DRAFT_PTR(_DWORD, (a1 + 48)) = (*SF_DRAFT_PTR(uint32, 0x801183B0u));
      }
      else if ( v3 >= 2 )
      {
        if ( v3 == 2 )
        {
          (*SF_DRAFT_PTR(uint32, 0x801183A8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
          (*SF_DRAFT_PTR(uint32, 0x801183ACu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
          (*SF_DRAFT_PTR(uint32, 0x801183B0u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 44));
          (*SF_DRAFT_PTR(uint32, 0x801183B4u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 92));
          (*SF_DRAFT_PTR(uint32, 0x801183B8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 108));
          (*SF_DRAFT_PTR(uint32, 0x801183BCu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 124));
          (*SF_DRAFT_PTR(uint32, 0x801183C0u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 220));
          (*SF_DRAFT_PTR(uint32, 0x801183C4u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 236));
          (*SF_DRAFT_PTR(uint32, 0x801183C8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 252));
          sub_8001A7AC(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x801183A8u))));
          v45 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
          *SF_DRAFT_PTR(_DWORD, (a1 + 12)) = (*SF_DRAFT_PTR(uint32, 0x801183A8u));
          *SF_DRAFT_PTR(_DWORD, (a1 + 28)) = (*SF_DRAFT_PTR(uint32, 0x801183ACu));
          *SF_DRAFT_PTR(_DWORD, (a1 + 44)) = (*SF_DRAFT_PTR(uint32, 0x801183B0u));
          (*SF_DRAFT_PTR(uint32, 0x801183A8u)) = v45;
          (*SF_DRAFT_PTR(uint32, 0x801183ACu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 32));
          (*SF_DRAFT_PTR(uint32, 0x801183B0u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 48));
          (*SF_DRAFT_PTR(uint32, 0x801183B4u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 96));
          (*SF_DRAFT_PTR(uint32, 0x801183B8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 112));
          (*SF_DRAFT_PTR(uint32, 0x801183BCu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 128));
          (*SF_DRAFT_PTR(uint32, 0x801183C0u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 224));
          (*SF_DRAFT_PTR(uint32, 0x801183C4u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 240));
          (*SF_DRAFT_PTR(uint32, 0x801183C8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 256));
          sub_8001A7AC(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x801183A8u))));
          v46 = *SF_DRAFT_PTR(_DWORD, (a1 + 20));
          *SF_DRAFT_PTR(_DWORD, (a1 + 16)) = (*SF_DRAFT_PTR(uint32, 0x801183A8u));
          *SF_DRAFT_PTR(_DWORD, (a1 + 32)) = (*SF_DRAFT_PTR(uint32, 0x801183ACu));
          *SF_DRAFT_PTR(_DWORD, (a1 + 48)) = (*SF_DRAFT_PTR(uint32, 0x801183B0u));
          (*SF_DRAFT_PTR(uint32, 0x801183A8u)) = v46;
          (*SF_DRAFT_PTR(uint32, 0x801183ACu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 36));
          (*SF_DRAFT_PTR(uint32, 0x801183B0u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 52));
          (*SF_DRAFT_PTR(uint32, 0x801183B4u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 100));
          (*SF_DRAFT_PTR(uint32, 0x801183B8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 116));
          (*SF_DRAFT_PTR(uint32, 0x801183BCu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 132));
          (*SF_DRAFT_PTR(uint32, 0x801183C0u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 228));
          (*SF_DRAFT_PTR(uint32, 0x801183C4u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 244));
          (*SF_DRAFT_PTR(uint32, 0x801183C8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 260));
          sub_8001A7AC(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x801183A8u))));
          *SF_DRAFT_PTR(_DWORD, (a1 + 20)) = (*SF_DRAFT_PTR(uint32, 0x801183A8u));
          *SF_DRAFT_PTR(_DWORD, (a1 + 36)) = (*SF_DRAFT_PTR(uint32, 0x801183ACu));
          *SF_DRAFT_PTR(_DWORD, (a1 + 52)) = (*SF_DRAFT_PTR(uint32, 0x801183B0u));
        }
        else
        {
          return 0;
        }
      }
      else
      {
        if ( !v3 )
        {
          v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
          v5 = *SF_DRAFT_PTR(_DWORD, (a1 + 20));
          v6 = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
          (*SF_DRAFT_PTR(uint32, 0x801183CCu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
          (*SF_DRAFT_PTR(uint32, 0x801183D0u)) = v4;
          (*SF_DRAFT_PTR(uint32, 0x801183D4u)) = v5;
          (*SF_DRAFT_PTR(uint32, 0x801183D8u)) = v6;
          v7 = *SF_DRAFT_PTR(_DWORD, (a1 + 32));
          v8 = *SF_DRAFT_PTR(_DWORD, (a1 + 36));
          (*SF_DRAFT_PTR(uint32, 0x801183DCu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
          (*SF_DRAFT_PTR(uint32, 0x801183E0u)) = v7;
          (*SF_DRAFT_PTR(uint32, 0x801183E4u)) = v8;
          (*SF_DRAFT_PTR(uint32, 0x801183E8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 40));
          v9 = *SF_DRAFT_PTR(_DWORD, (a1 + 48));
          v10 = *SF_DRAFT_PTR(_DWORD, (a1 + 52));
          (*SF_DRAFT_PTR(uint32, 0x801183ECu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 44));
          (*SF_DRAFT_PTR(uint32, 0x801183F0u)) = v9;
          (*SF_DRAFT_PTR(uint32, 0x801183F4u)) = v10;
          (*SF_DRAFT_PTR(uint32, 0x801183F8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 56));
          v11 = *SF_DRAFT_PTR(_DWORD, (a1 + 96));
          v12 = *SF_DRAFT_PTR(_DWORD, (a1 + 100));
          (*SF_DRAFT_PTR(uint32, 0x801183FCu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 92));
          (*SF_DRAFT_PTR(uint32, 0x80118400u)) = v11;
          (*SF_DRAFT_PTR(uint32, 0x80118404u)) = v12;
          (*SF_DRAFT_PTR(uint32, 0x80118408u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 104));
          v13 = *SF_DRAFT_PTR(_DWORD, (a1 + 112));
          v14 = *SF_DRAFT_PTR(_DWORD, (a1 + 116));
          (*SF_DRAFT_PTR(uint32, 0x8011840Cu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 108));
          (*SF_DRAFT_PTR(uint32, 0x80118410u)) = v13;
          (*SF_DRAFT_PTR(uint32, 0x80118414u)) = v14;
          (*SF_DRAFT_PTR(uint32, 0x80118418u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 120));
          v15 = *SF_DRAFT_PTR(_DWORD, (a1 + 128));
          v16 = *SF_DRAFT_PTR(_DWORD, (a1 + 132));
          (*SF_DRAFT_PTR(uint32, 0x8011841Cu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 124));
          (*SF_DRAFT_PTR(uint32, 0x80118420u)) = v15;
          (*SF_DRAFT_PTR(uint32, 0x80118424u)) = v16;
          (*SF_DRAFT_PTR(uint32, 0x80118428u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 136));
          (*SF_DRAFT_PTR(uint32, 0x8011842Cu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 220));
          (*SF_DRAFT_PTR(uint32, 0x80118430u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 236));
          (*SF_DRAFT_PTR(uint32, 0x80118434u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 252));
          sub_8001ABE4(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x801183CCu))));
          v17 = (*SF_DRAFT_PTR(uint32, 0x801183D0u));
          v18 = (*SF_DRAFT_PTR(uint32, 0x801183D4u));
          v19 = (*SF_DRAFT_PTR(uint32, 0x801183D8u));
          *SF_DRAFT_PTR(_DWORD, (a1 + 12)) = (*SF_DRAFT_PTR(uint32, 0x801183CCu));
          *SF_DRAFT_PTR(_DWORD, (a1 + 16)) = v17;
          *SF_DRAFT_PTR(_DWORD, (a1 + 20)) = v18;
          *SF_DRAFT_PTR(_DWORD, (a1 + 24)) = v19;
          v20 = (*SF_DRAFT_PTR(uint32, 0x801183E0u));
          v21 = (*SF_DRAFT_PTR(uint32, 0x801183E4u));
          *SF_DRAFT_PTR(_DWORD, (a1 + 28)) = (*SF_DRAFT_PTR(uint32, 0x801183DCu));
          *SF_DRAFT_PTR(_DWORD, (a1 + 32)) = v20;
          *SF_DRAFT_PTR(_DWORD, (a1 + 36)) = v21;
          *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = (*SF_DRAFT_PTR(uint32, 0x801183E8u));
          v22 = (*SF_DRAFT_PTR(uint32, 0x801183F0u));
          v23 = (*SF_DRAFT_PTR(uint32, 0x801183F4u));
          *SF_DRAFT_PTR(_DWORD, (a1 + 44)) = (*SF_DRAFT_PTR(uint32, 0x801183ECu));
          *SF_DRAFT_PTR(_DWORD, (a1 + 48)) = v22;
          *SF_DRAFT_PTR(_DWORD, (a1 + 52)) = v23;
          *SF_DRAFT_PTR(_DWORD, (a1 + 56)) = (*SF_DRAFT_PTR(uint32, 0x801183F8u));
          return 1;
        }
        return 0;
      }
    }
    else
    {
      (*SF_DRAFT_PTR(uint32, 0x801183A8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
      (*SF_DRAFT_PTR(uint32, 0x801183ACu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
      (*SF_DRAFT_PTR(uint32, 0x801183B0u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 44));
      (*SF_DRAFT_PTR(uint32, 0x801183B4u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 92));
      (*SF_DRAFT_PTR(uint32, 0x801183B8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 108));
      (*SF_DRAFT_PTR(uint32, 0x801183BCu)) = *SF_DRAFT_PTR(_DWORD, (a1 + 124));
      (*SF_DRAFT_PTR(uint32, 0x801183C0u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 220));
      (*SF_DRAFT_PTR(uint32, 0x801183C4u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 236));
      (*SF_DRAFT_PTR(uint32, 0x801183C8u)) = *SF_DRAFT_PTR(_DWORD, (a1 + 252));
      sub_8001A7AC(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x801183A8u))));
      *SF_DRAFT_PTR(_DWORD, (a1 + 12)) = (*SF_DRAFT_PTR(uint32, 0x801183A8u));
      *SF_DRAFT_PTR(_DWORD, (a1 + 28)) = (*SF_DRAFT_PTR(uint32, 0x801183ACu));
      *SF_DRAFT_PTR(_DWORD, (a1 + 44)) = (*SF_DRAFT_PTR(uint32, 0x801183B0u));
    }
  }
  return v2;
}

sint32 sub_8005C9E4(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x8005C9E4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v5; 
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
  _DWORD *v16; 
  int v17; 
  __int16 *v18; 
  char v19; 
  char v20; 
  __int16 v21; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  char v29; 
  int v30; 
  int result; 
  int v32; 
  int v33; 
  __int16 v34; 
  int v35; 
  __int16 v36; 
  int v37; 
  unsigned int v38; 
  v5 = *SF_DRAFT_PTR(_DWORD, (a2 + 28));
  v6 = *SF_DRAFT_PTR(_DWORD, (v5 + 32));
  v7 = *SF_DRAFT_PTR(uint8, (v5 + 67));
  *SF_DRAFT_PTR(_DWORD, (v5 + 32)) = v6 | 0x800;
  v8 = *SF_DRAFT_PTR(_WORD, (12 * v7 + a1 + 6)) & 0xF;
  if ( !v8 && (v8 = a3) == 0
    || (v9 = (*SF_DRAFT_PTR(uint32, 0x80115CCCu)),
        v10 = v6 | 0xC00,
        *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 24)) + 8)) <= 0) )
  {
LABEL_54:
    v12 = *SF_DRAFT_PTR(_DWORD, (v5 + 32));
    v10 = -1025;
    goto LABEL_55;
  }
  v11 = *SF_DRAFT_PTR(uint8, (v5 + 72));
  *SF_DRAFT_PTR(_DWORD, (v5 + 32)) = v10;
  if ( v11 && v8 != a3 )
  {
    switch ( v8 )
    {
      case 1:
        v15 = *SF_DRAFT_PTR(__int16, (a2 + 2));
        if ( v15 != 666 )
        {
          v16 = SF_DRAFT_PTR(_DWORD, (76 * v15 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
          if ( *SF_DRAFT_PTR(_WORD, (20 * *v16 + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 101 && !*((_BYTE *)v16 + 36) )
          {
            v17 = v16[9] & 0x3000;
            if ( v17 != 4096 && v17 != 0x2000 )
            {
              v18 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 20)));
              if ( *v18 == v15 && v18[44] >= 51 )
              {
                sub_800588A8(a2);
                goto LABEL_47;
              }
            }
          }
        }
        *SF_DRAFT_PTR(_DWORD, (v5 + 40)) = (*SF_DRAFT_PTR(uint32, 0x8010C9C0u));
        goto LABEL_56;
      case 2:
        if ( !*SF_DRAFT_PTR(_BYTE, (v5 + 72)) || (*SF_DRAFT_PTR(_DWORD, (v5 + 32)) & 0x100) != 0 )
          goto LABEL_47;
        v19 = *SF_DRAFT_PTR(_BYTE, (v5 + 67));
        *SF_DRAFT_PTR(_DWORD, (v5 + 40)) = (*SF_DRAFT_PTR(uint32, 0x8010C9F4u));
        *SF_DRAFT_PTR(_BYTE, (v5 + 73)) = v19;
        goto LABEL_56;
      case 3:
        if ( *SF_DRAFT_PTR(_BYTE, (v5 + 72)) != 2 || !*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(uint32, 0x801169DCu))) || sub_8005BA6C(a2) < 0 )
          goto LABEL_47;
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3738)) = *SF_DRAFT_PTR(_WORD, (a2 + 2));
        *SF_DRAFT_PTR(_BYTE, (v5 + 65)) = 0;
        v24 = 76 * *SF_DRAFT_PTR(__int16, (a2 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        if ( *SF_DRAFT_PTR(_BYTE, (v24 + 36)) )
        {
          if ( *SF_DRAFT_PTR(_BYTE, (v24 + 36)) == 19 )
            goto LABEL_46;
        }
        else if ( (*SF_DRAFT_PTR(_DWORD, (v24 + 36)) & 0x3000) == 4096 )
        {
          goto LABEL_46;
        }
        v25 = 76 * *SF_DRAFT_PTR(__int16, (a2 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        if ( *SF_DRAFT_PTR(_BYTE, (v25 + 36)) )
        {
          if ( *SF_DRAFT_PTR(_BYTE, (v25 + 36)) == 20 )
            goto LABEL_46;
        }
        else
        {
          v26 = *SF_DRAFT_PTR(_DWORD, (v25 + 36)) & 0x3000;
          if ( v26 != 4096 && v26 == 0x2000 )
            goto LABEL_46;
        }
        v27 = 76 * *SF_DRAFT_PTR(__int16, (a2 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        v28 = *SF_DRAFT_PTR(_DWORD, (v27 + 36)) & 0x3000;
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3262)) = *SF_DRAFT_PTR(uint8, (v27 + 36));
        v29 = 20;
        if ( v28 != 0x2000 )
          v29 = 19;
        *SF_DRAFT_PTR(_BYTE, (v27 + 36)) = v29;
LABEL_46:
        *SF_DRAFT_PTR(_DWORD, (v5 + 40)) = (*SF_DRAFT_PTR(uint32, 0x8010CAF4u));
        break;
      case 4:
        if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) != 13 )
          goto LABEL_52;
        v30 = *SF_DRAFT_PTR(__int16, (a2 + 2));
        if ( v30 == 666 || *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v30 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 101 )
          goto LABEL_52;
        *SF_DRAFT_PTR(_DWORD, (v5 + 32)) &= ~0x400u;
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 28)) + 32)) |= 0x80000u;
        goto LABEL_56;
      case 5:
        *SF_DRAFT_PTR(_DWORD, (v5 + 40)) = (*SF_DRAFT_PTR(uint32, 0x8010CA8Cu));
        goto LABEL_56;
      case 7:
        if ( !*SF_DRAFT_PTR(_BYTE, (v5 + 72)) || (*SF_DRAFT_PTR(_DWORD, (v5 + 32)) & 0x100) != 0 || *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2872)) >= 0 )
          goto LABEL_47;
        v20 = *SF_DRAFT_PTR(_BYTE, (v5 + 67));
        *SF_DRAFT_PTR(_DWORD, (v5 + 40)) = (*SF_DRAFT_PTR(uint32, 0x8010CA44u));
        *SF_DRAFT_PTR(_BYTE, (v5 + 73)) = v20;
        sub_80059108(a2);
        v21 = *SF_DRAFT_PTR(_WORD, (a2 + 2));
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2868)) = v21;
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2872)) = v21;
        goto LABEL_56;
      default:
        goto LABEL_54;
    }
    goto LABEL_56;
  }
  if ( v8 == 4 )
  {
    if ( (v6 & 8) != 0 )
    {
      v13 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a2 + 2)) + v9 + 48));
      v14 = *SF_DRAFT_PTR(_DWORD, (76 * v13 + v9 + 52));
      if ( !v14 || (*SF_DRAFT_PTR(_BYTE, (v14 + 1)) & 0x80) != 0 )
      {
LABEL_47:
        *SF_DRAFT_PTR(_DWORD, (v5 + 32)) &= ~0x400u;
      }
      else
      {
        *SF_DRAFT_PTR(_DWORD, (v5 + 40)) = (*SF_DRAFT_PTR(uint32, 0x8010CAD4u));
        sub_80015364(0x14u, 3u, (*SF_DRAFT_PTR(__int16, (a2 + 2))), v13, 0, 0, 0, 0);
        *SF_DRAFT_PTR(_BYTE, (a2 + 35)) &= ~1u;
        *SF_DRAFT_PTR(_DWORD, (v5 + 32)) &= ~8u;
        sub_8006C620(((*SF_DRAFT_PTR(_WORD, (a2 + 2)) & 3) + 378), a2, 0);
        if ( (*SF_DRAFT_PTR(_DWORD, (v5 + 32)) & 0x20000) == 0 )
        {
          sub_80073D88(a2, 1, 0, 1, 1);
          *SF_DRAFT_PTR(_DWORD, (v5 + 32)) |= 0x20000u;
        }
      }
    }
    else
    {
LABEL_52:
      *SF_DRAFT_PTR(_DWORD, (v5 + 40)) = (*SF_DRAFT_PTR(uint32, 0x8010CAB4u));
    }
    goto LABEL_56;
  }
  v12 = -1025;
  if ( v8 != 6 )
  {
LABEL_55:
    result = v12 & v10;
    *SF_DRAFT_PTR(_DWORD, (v5 + 32)) = result;
    return result;
  }
  *SF_DRAFT_PTR(_DWORD, (v5 + 40)) = (*SF_DRAFT_PTR(uint32, 0x8010CA78u));
LABEL_56:
  v32 = *SF_DRAFT_PTR(_DWORD, (v5 + 32));
  result = -2049;
  if ( (v32 & 0x400) != 0 )
  {
    v33 = *SF_DRAFT_PTR(_DWORD, (v5 + 40));
    *SF_DRAFT_PTR(_DWORD, (v5 + 32)) = v32 & 0xFFFFF7FF;
    *SF_DRAFT_PTR(_BYTE, (v5 + 66)) = 0;
    v34 = *SF_DRAFT_PTR(_WORD, (v33 + 2));
    v35 = *SF_DRAFT_PTR(_DWORD, (v5 + 40));
    *SF_DRAFT_PTR(_WORD, (v5 + 48)) = v34;
    v36 = *SF_DRAFT_PTR(_WORD, (v35 + 6));
    v37 = *SF_DRAFT_PTR(_DWORD, (v5 + 40));
    *SF_DRAFT_PTR(_BYTE, (v5 + 70)) = (uint8)(v36);
    if ( *SF_DRAFT_PTR(_WORD, (v37 + 8)) )
      v38 = *SF_DRAFT_PTR(_DWORD, (v5 + 32)) | 0x8000;
    else
      v38 = *SF_DRAFT_PTR(_DWORD, (v5 + 32)) & 0xFFFF7FFF;
    *SF_DRAFT_PTR(_DWORD, (v5 + 32)) = v38;
    return (sint32)sub_8005C96C(a2, *SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (v5 + 40))));
  }
  return result;
}

sint32 sub_800D3100(uint32 a1, uint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800D3100u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v14; 
  _DWORD *v15; 
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
  _DWORD *v27; 
  unsigned int v28; 
  __int16 v29; 
  int *v30; 
  bool v31; 
  unsigned int v32; 
  bool v33; // dc
  sint32 v34; 
  int v35; 
  bool v36; 
  int v37; 
  int v38; 
  sint32 v39; 
  int result; 
  int v41; 
  int *v42; 
  int v43; 
  char v44[104]; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  char v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  v48 = a3;
  v49 = 1;
  v5 = (uint16)(*SF_DRAFT_PTR(uint32, 0x80116458u));
  if ( *((_BYTE *)a1_view + 9) )
    v5 = (uint16)(*SF_DRAFT_PTR(uint32, 0x80116458u)) + ((int)(uint16)(*SF_DRAFT_PTR(uint32, 0x80116458u)) >> 3);
  v6 = ((*SF_DRAFT_PTR(uint32, 0x80116458u)) >> 16) - 1;
  v7 = 0;
  v50 = v5 + ((4096 - v5) >> (BYTE2((*SF_DRAFT_PTR(uint32, 0x80116458u))) - 1));
  v8 = *a1_view;
  v52 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116070u)) + 16)) + 40)) & 0x20000;
  v9 = *SF_DRAFT_PTR(_DWORD, (v8 + 28));
  v10 = *SF_DRAFT_PTR(_DWORD, (v8 + 20));
  v51 = SF_DRAFT_PTR(uint32, 0x8013D564u)[5 * v48];
  (*SF_DRAFT_PTR(uint32, 0x1F8003FC)) = v10 + (v9 << 16);
  v45 = v10;
  v46 = *SF_DRAFT_PTR(_DWORD, (*a1_view + 24));
  v11 = *SF_DRAFT_PTR(_DWORD, (*a1_view + 28));
  v46 = -v46;
  v47 = v11;
  v12 = sub_800CCCD4(sf_draft_guest_address(&v45));
  v14 = 666;
  if ( v12 )
    v14 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v12 + 16)) + 40)) & 0x20000;
  *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3500)) = !*((_BYTE *)a1_view + 9)
                        && ((v15 = SF_DRAFT_PTR(_DWORD, a1_view[39])) == 0 || *v15)
                        && (*((_WORD *)a1_view + 3) & 0x10) == 0
                        && ((*SF_DRAFT_PTR(uint16, 0x8012D97Au)) & 1) == 0;
  if ( (*SF_DRAFT_PTR(uint32, 0x80116450u)) )
    v16 = v5 + ((4096 - v5) >> v6);
  else
    v16 = 0x2000;
  v45 = *SF_DRAFT_PTR(__int16, (*a1_view + 4));
  v17 = *a1_view;
  (*SF_DRAFT_PTR(uint32, 0x80116454u)) = v16;
  v46 = *SF_DRAFT_PTR(__int16, (v17 + 10));
  v18 = *a1_view;
  v50 += v50 >> 1;
  v19 = *SF_DRAFT_PTR(__int16, (v18 + 16));
  v20 = -v46;
  v46 = v20;
  v47 = v19;
  v21 = v20;
  if ( v20 < 0 )
    v21 = -v20;
  if ( v21 >= 2501 )
  {
    v22 = 2048;
    goto LABEL_21;
  }
  v53 = 256;
  if ( v21 >= 1801 )
  {
    v22 = 768;
LABEL_21:
    v53 = v22;
  }
  if ( !*((_BYTE *)a1_view + 9) )
  {
    v23 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2296));
    v24 = (*SF_DRAFT_PTR(uint32, 0x80116470u));
    (*SF_DRAFT_PTR(uint32, 0x80116AE0u)) = 0;
    (*SF_DRAFT_PTR(uint32, 0x80116928u)) = 0;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2296)) = v23 + 1;
    if ( v24 > 0 )
      (*SF_DRAFT_PTR(uint32, 0x80116470u)) = v24 - 1;
  }
  if ( a2_view )
  {
    v25 = 5 * v48;
    do
    {
      v26 = *a2_view;
      v27 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*a2_view + 16)));
      if ( (v27[10] & 0x1000000) == 0 || (*SF_DRAFT_PTR(_BYTE, (v26 + 8)) & 8) != 0 )
        goto LABEL_73;
      v28 = v53;
      v29 = *((_WORD *)a1_view + 81);
      v30 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (v26 + 12)));
      *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2293)) = 0;
      *((_WORD *)a1_view + 81) = v29 + 1;
      v31 = v30 == &(*SF_DRAFT_PTR(uint32, 0x8010E1ECu));
      if ( v30 == &(*SF_DRAFT_PTR(uint32, 0x8010E1ECu)) && !(*SF_DRAFT_PTR(uint32, 0x80116464u)) )
      {
        if ( v49 )
          goto LABEL_34;
        if ( (*SF_DRAFT_PTR(uint32, 0x80116470u)) <= 0 )
          goto LABEL_39;
      }
      if ( v49 )
      {
LABEL_34:
        sub_800C6F44(sf_draft_guest_address((uint16 *)(&(*SF_DRAFT_PTR(uint32, 0x8010E1ECu)))));
        sub_800D3050((v48));
        v49 = 0;
      }
      sub_800D39D8(*SF_DRAFT_PTR(_DWORD, (v26 + 12)));
      if ( (*SF_DRAFT_PTR(uint32, 0x80116464u)) )
        v28 |= 0x80000000;
      if ( (*SF_DRAFT_PTR(uint32, 0x80116470u)) > 0 )
        v28 |= 0x40000000u;
LABEL_39:
      if ( (*((_WORD *)a1_view + 3) & 0x10) != 0 )
        v28 = 536871112;
      if ( (v27[10] & 0x200000) != 0 )
      {
        (*SF_DRAFT_PTR(uint32, 0x80116450u)) = 0x3FFF;
        (*SF_DRAFT_PTR(uint32, 0x80116454u)) = 0x2000;
      }
      if ( (*((_WORD *)a1_view + 3) & 0x80) != 0 )
      {
        if ( *SF_DRAFT_PTR(_WORD, (v27[8] + 2)) == 240 )
          goto LABEL_73;
        v28 |= 0x10000000u;
        (*SF_DRAFT_PTR(uint32, 0x80116450u)) = 329728;
        (*SF_DRAFT_PTR(uint32, 0x80116454u)) = 1000;
      }
      if ( !*((_BYTE *)a1_view + 9) && ((*SF_DRAFT_PTR(uint16, 0x8012D97Au)) & 1) != 0 )
      {
        v28 |= 0x10000000u;
        (*SF_DRAFT_PTR(uint32, 0x80116450u)) = 262400;
        (*SF_DRAFT_PTR(uint32, 0x80116454u)) = 730;
      }
      sub_800D39D8(*SF_DRAFT_PTR(_DWORD, (v26 + 12)));
      if ( v31 )
      {
        v34 = v7 < 24;
        if ( v14 == v52 )
        {
          if ( v14 == 666 )
            goto LABEL_59;
          v34 = v7 < 24;
          if ( v14 != (v27[10] & 0x20000) )
          {
            SF_DRAFT_PTR(uint32, 0x8013D564u)[v25] = v51 + 72;
            *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2293)) = 18;
LABEL_59:
            v34 = v7 < 24;
          }
        }
LABEL_60:
        v33 = !v34;
        v35 = 4 * v7;
        if ( !v33 )
        {
          ++v7;
          *(_DWORD *)(&v44[v35]) = v27[8];
        }
        v36 = 0;
        if ( (*SF_DRAFT_PTR(uint32, 0x80116448u)) >= 9 )
          v36 = sub_800D6B04(sf_draft_guest_address(v27)) != 0;
        if ( (*SF_DRAFT_PTR(_BYTE, (v26 + 10)) & 4) != 0 )
          v37 = v27[9];
        else
          v37 = v27[8];
        v38 = 0;
        if ( v36 )
          v38 = SF_DRAFT_PTR(uint32, 0x8013D564u)[v25];
        sub_800D40A4(v37, v28, v38, v26);
        SF_DRAFT_PTR(uint32, 0x8013D564u)[v25] = v51;
        v39 = v31;
        if ( (v27[10] & 0x200000) != 0 )
        {
          (*SF_DRAFT_PTR(uint32, 0x80116454u)) = v50;
          (*SF_DRAFT_PTR(uint32, 0x80116450u)) = (*SF_DRAFT_PTR(uint32, 0x80116458u));
          v39 = v31;
        }
        if ( !v39 )
          sub_800D39D8(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8010E1ECu))));
        goto LABEL_73;
      }
      v28 = v28 & 0xFFFF0000 | (2 * (uint16)v28);
      if ( (*SF_DRAFT_PTR(_BYTE, (v26 + 10)) & 0x20) != 0 )
        v32 = 1;
      else
        v32 = sub_800D1898(8000, 200);
      v33 = v32 != 0;
      v34 = v7 < 24;
      if ( v33 )
        goto LABEL_60;
LABEL_73:
      a2_view = SF_DRAFT_PTR(_DWORD, a2_view[2]);
    }
    while ( a2_view );
  }
  result = *((uint8 *)a1_view + 9);
  if ( !*((_BYTE *)a1_view + 9) )
  {
    result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2296)) & 1;
    if ( result )
    {
      v41 = 0;
      if ( v7 > 0 )
      {
        v42 = (int *)v44;
        do
        {
          v43 = *v42++;
          ++v41;
          sub_800C6510(v43);
          result = v41 < v7;
        }
        while ( v41 < v7 );
      }
    }
  }
  return result;
}

void sub_800C12E4(sint32 a1, sint16 a2, sint32 a3, sint16 a4, sint32 a9)
{
    FUNCTION_MARKER(0x800C12E4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  sint32 v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  _WORD *v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  __int16 v32; 
  __int16 v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  __int16 v41; 
  __int16 v42[3]; 
  __int16 v43; 
  __int16 v44; 
  int v45; 
  __int16 v46; 
  sint32 v47; 
  LOWORD(v11) = a3;
  v43 = a2;
  v12 = a2;
  v44 = a4;
  v45 = a9;
  if ( a2 == -1 || *SF_DRAFT_PTR(uint8, (a1 + 12)) - 1 < a2 )
    return;
  v13 = *SF_DRAFT_PTR(_DWORD, (a1 + 4));
  v14 = a3 << 16;
  if ( (__int16)a3 == -1 )
  {
    v11 = *SF_DRAFT_PTR(uint8, (24 * a2 + v13 + 12));
    v14 = v11 << 16;
  }
  v15 = v14 >> 16 == 0xFFFFFFFD;
  v47 = v14 >> 16 == 0xFFFFFFFD;
  if ( v14 >> 16 == 0xFFFFFFFD )
    LOWORD(v11) = 0;
  v16 = 24 * a2 + v13;
  v17 = *SF_DRAFT_PTR(_WORD, v16) & 0x1F;
  if ( v17 == 11 )
  {
    v18 = 0;
    if ( *SF_DRAFT_PTR(_BYTE, (v16 + 5)) )
    {
      v19 = 0;
      do
      {
        v20 = v18 + 1;
        if ( *SF_DRAFT_PTR(char, (24 * ((v19 >> 16) + v12) + v13 + 40)) == -1 )
        {
          sub_800C12E4(a1, (__int16)(v43 + v18 + 1), (__int16)v11, 0, 2);
          v20 = v18 + 1;
        }
        v18 = v20;
        v19 = v20 << 16;
      }
      while ( (__int16)v20 < (int)*SF_DRAFT_PTR(uint8, (v16 + 5)) );
    }
    return;
  }
  if ( v17 == 1 )
  {
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1904)) = 0;
    if ( *SF_DRAFT_PTR(char, (v16 + 16)) == -1 )
    {
      *SF_DRAFT_PTR(_BYTE, (v16 + 9)) = v11;
      return;
    }
    v21 = a4;
    if ( !a4 )
    {
      v22 = sub_800C484C(4, a1, a2);
      sub_800C4978(v22);
      v23 = *SF_DRAFT_PTR(__int16, (v16 + 10));
      *SF_DRAFT_PTR(_BYTE, (v16 + 9)) = v11;
      sub_800C34C0((uint8)v11, v23, sf_draft_guest_address(&v41), sf_draft_guest_address(v42), *SF_DRAFT_PTR(uint8, v16 + 18));
      sub_800C30EC(24 * v12 + v13, v41, v42[0]);
      goto LABEL_30;
    }
    v46 = v11 - *SF_DRAFT_PTR(uint8, (v16 + 9));
    if ( !v46 )
      return;
    v24 = SF_DRAFT_PTR(_WORD, sub_800C484C(4, a1, a2));
    if ( (__int16)v45 == 3 )
    {
      if ( !v24 )
      {
LABEL_42:
        v24 = SF_DRAFT_PTR(_WORD, sub_800C46F0(4, a1, v43));
LABEL_43:
        v29 = v46;
        if ( v46 < 0 )
          v29 = -v46;
        if ( v29 >= v44 )
        {
          if ( !v44 )
            _break(7u, 0);
          if ( v44 == -1 && v46 == 0x80000000 )
            _break(6u, 0);
          v33 = v46 / v44;
          v24[7] = 0;
        }
        else
        {
          v30 = v44 / v46;
          if ( v46 == -1 && v44 == 0x80000000 )
            _break(6u, 0);
          LOWORD(v31) = v44 / v46;
          if ( v30 < 0 )
            v31 = -v30;
          v24[4] = v31;
          v32 = v24[4];
          v24[7] = 1;
          v24[6] = v32;
          v33 = -1;
          if ( (__int16)v11 >= (int)*SF_DRAFT_PTR(uint8, (24 * v43 + v13 + 9)) )
          {
            v24[5] = 1;
            goto LABEL_60;
          }
        }
        v24[5] = v33;
LABEL_60:
        v24[8] = v11;
        v24[10] = v47;
        return;
      }
      v25 = (__int16)(v11 - v24[8]);
      if ( (_WORD)v11 == v24[8] )
      {
        v26 = *SF_DRAFT_PTR(__int16, (v16 + 10));
        *SF_DRAFT_PTR(_BYTE, (v16 + 9)) = v11;
        sub_800C34C0((uint8)v11, v26, sf_draft_guest_address(&v41), sf_draft_guest_address(v42), *SF_DRAFT_PTR(uint8, v16 + 18));
        sub_800C30EC(24 * v12 + v13, v41, v42[0]);
        sub_800C4978(sf_draft_guest_address(v24));
LABEL_30:
        if ( v15 )
          sub_800C2900(a1, v12);
        return;
      }
      v27 = v46 * v21 / v25;
      if ( (_WORD)v11 == v24[8] )
        _break(7u, 0);
      if ( v25 == -1 && v46 * v21 == 0x80000000 )
        _break(6u, 0);
      v28 = v46 * v21 / v25;
      if ( v27 < 0 )
        v28 = -v27;
      v44 = v28;
      if ( v28 << 16 <= 0 )
        v44 = 1;
    }
    if ( v24 )
      goto LABEL_43;
    goto LABEL_42;
  }
  if ( (*SF_DRAFT_PTR(_WORD, v16) & 0x1Fu) < 2 )
  {
    if ( v17 )
      return;
LABEL_20:
    *SF_DRAFT_PTR(_BYTE, (24 * v43 + v13 + 9)) = v11;
    return;
  }
  if ( v17 != 2 )
  {
    if ( v17 != 14 )
      return;
    goto LABEL_20;
  }
  if ( *SF_DRAFT_PTR(_BYTE, (v16 + 3)) != 99 )
  {
    v34 = SF_DRAFT_PTR(uint16, 0x80116858u)[*SF_DRAFT_PTR(uint8, (v16 + 18))];
    v35 = (__int16)v11 * v34 / 127;
    v36 = *SF_DRAFT_PTR(uint8, (v16 + 9)) * v34 / 127;
    if ( v35 != v36 )
    {
      v37 = *SF_DRAFT_PTR(char, (v16 + 4));
      v38 = *SF_DRAFT_PTR(uint8, (v16 + 3));
      if ( v37 == -1 )
        sub_800F28C4(v38, (__int16)(v35 - v36), a4);
      else
        sub_800F2940(v38, v37, (__int16)(v35 - v36), a4);
      v39 = v43;
      *SF_DRAFT_PTR(_BYTE, (24 * v43 + v13 + 9)) = v11;
      if ( v47 )
      {
        v40 = sub_800C46F0(9, a1, v39);
        *SF_DRAFT_PTR(_WORD, (v40 + 14)) = 1;
        *SF_DRAFT_PTR(_WORD, (v40 + 12)) = v44;
      }
    }
  }
}

sint32 sub_800659B8(sint32 a1)
{
    FUNCTION_MARKER(0x800659B8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int v3; 
  int v4; 
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
  v2 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v3 = *SF_DRAFT_PTR(_DWORD, (v2 + 28));
  if ( (*SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x200) != 0 || !v3 )
    return sub_8005F090();
  if ( *SF_DRAFT_PTR(uint8, (v3 + 67)) == 255 )
    *SF_DRAFT_PTR(_BYTE, (v3 + 67)) = 0;
  sub_800CBA34(*SF_DRAFT_PTR(_DWORD, (v2 + 8)), 1);
  sub_8006590C(v2);
  *SF_DRAFT_PTR(_DWORD, (v3 + 32)) |= 0x200u;
  sub_800489F8(v2);
  sub_80073CD8(v2, 1, 0, 0);
  sub_80045C04(v2);
  if ( (*SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 2) != 0 )
  {
    *SF_DRAFT_PTR(_BYTE, (v3 + 72)) = 2;
    sub_8005898C(a1);
    sub_8006C620(469, v2, 0);
    *SF_DRAFT_PTR(_BYTE, (v3 + 82)) = 12;
  }
  if ( (*SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x20008) == 0 )
  {
    sub_80073D88(v2, 1, 0, 1, 1);
    *SF_DRAFT_PTR(_DWORD, (v3 + 32)) |= 0x20000u;
  }
  v4 = v2;
  if ( (*SF_DRAFT_PTR(uint8, 0x801169FCu)) && (*SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (v2 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) & 0x300) == 0 )
  {
    sub_80059FCC(v2, 1, 0, 0);
    v4 = v2;
  }
  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 11)) &= ~0x40u;
  sub_8005AD04(v4, 0);
  v6 = (*SF_DRAFT_PTR(uint32, 0x8011E654u));
  v7 = (*SF_DRAFT_PTR(uint32, 0x8011E658u));
  *SF_DRAFT_PTR(_DWORD, (v3 + 16)) = (*SF_DRAFT_PTR(uint32, 0x8011E650u));
  *SF_DRAFT_PTR(_DWORD, (v3 + 20)) = v6;
  *SF_DRAFT_PTR(_DWORD, (v3 + 24)) = v7;
  *SF_DRAFT_PTR(_DWORD, (v3 + 28)) = (*SF_DRAFT_PTR(uint32, 0x8011E65Cu));
  v8 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
  *SF_DRAFT_PTR(_BYTE, (v3 + 79)) = 0;
  *SF_DRAFT_PTR(_BYTE, (v3 + 78)) = 0;
  *SF_DRAFT_PTR(_WORD, (v3 + 54)) = 0;
  if ( (v8 & 0x400000) != 0 )
  {
    v9 = *SF_DRAFT_PTR(__int16, (v2 + 2));
    if ( v9 != 666 && *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v9 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 101 )
    {
      sub_80028F3C(a1, 87);
      *SF_DRAFT_PTR(_DWORD, (v3 + 32)) &= ~0x400000u;
      goto LABEL_29;
    }
    v10 = a1;
    v11 = 86;
  }
  else
  {
    v10 = *SF_DRAFT_PTR(__int16, (v2 + 2));
    if ( v10 == 666
      || *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v10 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 92
      || (unsigned int)(uint16)(*SF_DRAFT_PTR(uint16, 0x80130C88u)) - 11 >= 2
      || (v11 = 10, (*SF_DRAFT_PTR(_BYTE, v2) & 0x20) == 0) )
    {
      v12 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (v2 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
      v13 = *SF_DRAFT_PTR(_DWORD, (76 * v12 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
      if ( v12 >= 0 && v13 && *SF_DRAFT_PTR(_DWORD, (v13 + 28)) )
      {
        sub_80056C3C(v2, 1);
        v11 = 43;
        if ( (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v2 + 16))) & 0x100) != 0 )
          goto LABEL_29;
        v10 = *SF_DRAFT_PTR(__int16, (v2 + 2));
      }
      else
      {
        v10 = a1;
        if ( (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v2 + 16))) & 0x100) == 0 )
          goto LABEL_29;
        v11 = 45;
      }
    }
  }
  sub_80028F3C(v10, v11);
LABEL_29:
  if ( a1 != (*SF_DRAFT_PTR(uint16, 0x80116AAEu)) )
  {
    if ( a1 == (*SF_DRAFT_PTR(uint16, 0x80116B00u)) )
    {
      *SF_DRAFT_PTR(_BYTE, (v3 + 80)) = 0;
      switch ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) )
      {
        case 5:
          *SF_DRAFT_PTR(_BYTE, (v3 + 82)) = 6;
          *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 6)) = 2400;
          v14 = *SF_DRAFT_PTR(_DWORD, (v3 + 32)) | 0x8000000;
          v15 = 0x20000000;
          goto LABEL_49;
        case 6:
          *SF_DRAFT_PTR(_BYTE, (v3 + 82)) = 8;
          break;
        case 19:
          *SF_DRAFT_PTR(_BYTE, (v3 + 82)) = 9;
          *SF_DRAFT_PTR(_BYTE, (v3 + 71)) = 99;
          break;
        default:
          *SF_DRAFT_PTR(_BYTE, (v3 + 82)) = 5;
          break;
      }
    }
    else
    {
      v16 = *SF_DRAFT_PTR(__int16, (v2 + 2));
      if ( v16 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (*SF_DRAFT_PTR(_DWORD, (76 * v16 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) & 0x4000) != 0 )
      {
        v14 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
        v15 = 0x2000000;
        goto LABEL_49;
      }
    }
LABEL_50:
    if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 13 && *SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (v2 + 28)) + 82)) >= 3u )
      sub_8005AD04(v2, 1);
    goto LABEL_53;
  }
  *SF_DRAFT_PTR(_BYTE, (v3 + 80)) = 0;
  switch ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) )
  {
    case 0:
      *SF_DRAFT_PTR(_BYTE, (v3 + 82)) = 3;
      *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3514)) = 1228;
      v14 = *SF_DRAFT_PTR(_DWORD, (v3 + 32)) | 0x8000000;
      v15 = 0x20000000;
LABEL_49:
      *SF_DRAFT_PTR(_DWORD, (v3 + 32)) = v14 | v15;
      goto LABEL_50;
    case 3:
      *SF_DRAFT_PTR(_BYTE, (v3 + 82)) = 7;
      v14 = *SF_DRAFT_PTR(_DWORD, (v3 + 32)) | 0x8000000;
      v15 = 0x20000000;
      goto LABEL_49;
    case 2:
      *SF_DRAFT_PTR(_BYTE, (v3 + 82)) = 8;
      v14 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
      v15 = 0x8000000;
      goto LABEL_49;
  }
  *SF_DRAFT_PTR(_BYTE, (v3 + 82)) = 4;
  if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 13 )
  {
    *SF_DRAFT_PTR(_BYTE, (v2 + 33)) = 2 * sub_800CDAB0();
    goto LABEL_50;
  }
LABEL_53:
  v17 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 896));
  *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 22)) = 0;
  if ( v17 )
    sub_8003D000(a1);
  return sub_8005F090();
}

sint32 sub_8004A55C(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8004A55Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v3; 
  int v4; 
  int v5; 
  int v7; 
  int v8; 
  int v9; 
  char v10; 
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
  _DWORD *v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int result; 
  int v30; 
  int v31; 
  int v32; 
  int v33;
  int direction_output; 
  v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  v4 = *SF_DRAFT_PTR(_DWORD, (v3 + 404));
  v5 = *SF_DRAFT_PTR(_DWORD, (v3 + 408));
  if ( (v4 & 0x400) != 0 )
  {
    sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), 20);
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) &= ~0x400u;
    goto LABEL_46;
  }
  v7 = 19;
  if ( (v4 & 0x200) != 0 )
  {
    v8 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    goto LABEL_45;
  }
  if ( (v4 & 0x100) == 0 )
  {
    v9 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
    if ( (*SF_DRAFT_PTR(_DWORD, v9) & 0x800000) != 0 || (*SF_DRAFT_PTR(_DWORD, v9) & 0x1000) != 0 )
      goto LABEL_10;
    if ( *SF_DRAFT_PTR(_BYTE, (v9 + 8)) != 4 )
      goto LABEL_19;
  }
  v9 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
LABEL_10:
  if ( ((*SF_DRAFT_PTR(_DWORD, v9) & 0x10000) == 0 || *SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 36)) <= -73626)
    && *SF_DRAFT_PTR(_BYTE, (v9 + 8)) != 8
    && sub_800354D8() != 6
    && (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) & 0x40000) == 0 )
  {
    if ( (uint8)sub_8008B164(a1, 6, 0) )
    {
      if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) & 0xC000) == 49152 )
      {
        v10 = sub_8008B164(a1, 6, 1);
        v7 = 28;
        if ( v10 )
        {
          v8 = *SF_DRAFT_PTR(__int16, (a1 + 2));
          goto LABEL_45;
        }
      }
    }
  }
LABEL_19:
  v11 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  if ( *SF_DRAFT_PTR(int, (v11 + 36)) > 0 )
    goto LABEL_38;
  v12 = *SF_DRAFT_PTR(_DWORD, (v11 + 404));
  if ( (v12 & 0x100) == 0 && (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 16))) & 0x800000) == 0 && (v12 & 0x80000) == 0 )
    goto LABEL_38;
  v13 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
  if ( (*SF_DRAFT_PTR(_DWORD, v13) & 0x1000) == 0 )
  {
    if ( *SF_DRAFT_PTR(_BYTE, (v13 + 8)) == 8 )
    {
LABEL_38:
      v13 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
      goto LABEL_39;
    }
    v14 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    v15 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    if ( v15 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) && *SF_DRAFT_PTR(_DWORD, (v14 + 300)) >= *SF_DRAFT_PTR(_DWORD, (v14 + 272)) - 192 )
    {
      v16 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
      if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v16 + 16)) + 40)) & 0x400000) != 0 && ((*SF_DRAFT_PTR(_BYTE, (v16 + 8)) & 0x10) != 0 || !v14)
        || (v17 = 0, *SF_DRAFT_PTR(_BYTE, (a2 + 256))) )
      {
        v17 = 1;
      }
      if ( !v17 )
      {
        v18 = 107;
        if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) & 0x80000) == 0 )
        {
          v15 = *SF_DRAFT_PTR(__int16, (a1 + 2));
LABEL_37:
          sub_80028F3C(v15, v18);
          goto LABEL_38;
        }
      }
      v15 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    }
    v18 = 51;
    goto LABEL_37;
  }
LABEL_39:
  if ( (*SF_DRAFT_PTR(_DWORD, v13) & 0x8000) != 0 && *SF_DRAFT_PTR(_BYTE, (v13 + 8)) != 12 )
  {
    v19 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404));
    v7 = 33;
    if ( (v19 & 0x800) != 0 )
    {
      v8 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    }
    else
    {
      v7 = 63;
      if ( (v19 & 0x100000) == 0 )
        goto LABEL_46;
      v8 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    }
LABEL_45:
    sub_80028F3C(v8, v7);
  }
LABEL_46:
  if ( *SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x801169D4u)) )
  {
    v20 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
    if ( *SF_DRAFT_PTR(_BYTE, (v20 + 8)) == 2
      && (*SF_DRAFT_PTR(_DWORD, v20) & 0xC) != 0
      && sub_800354D8() != 6
      && (uint8)sub_8008B164(a1, 3, 1) )
    {
      sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), 94);
    }
  }
  sub_8004AE84(a1);
  if ( *SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x801169D4u)) )
  {
    v21 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
    if ( (*SF_DRAFT_PTR(_DWORD, v21) & 0x1000) != 0
      || *SF_DRAFT_PTR(_BYTE, (v21 + 8)) == 4
      || a1 && (v22 = *SF_DRAFT_PTR(_DWORD, (a1 + 12))) != 0 && (v23 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v22 + 416)))) != 0 && *v23 == 1 )
    {
      if ( a1 )
      {
        v24 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
        if ( v24 )
        {
          if ( *SF_DRAFT_PTR(_DWORD, (v24 + 408)) )
          {
            v25 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
            if ( (*SF_DRAFT_PTR(_DWORD, v25) & 0x1000) != 0 || *SF_DRAFT_PTR(_BYTE, (v25 + 8)) == 4 )
            {
              v26 = *SF_DRAFT_PTR(_DWORD, (v5 + 164));
              *SF_DRAFT_PTR(_DWORD, (v5 + 44)) = (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (v5 + 156))));
              v27 = *SF_DRAFT_PTR(_DWORD, (v5 + 160));
              *SF_DRAFT_PTR(_DWORD, (v5 + 52)) = -v26;
              *SF_DRAFT_PTR(_DWORD, (v5 + 48)) = -v27;
            }
            v30 = *SF_DRAFT_PTR(_DWORD, (v5 + 44));
            v31 = *SF_DRAFT_PTR(_DWORD, (v5 + 52));
            if ( v30 || *SF_DRAFT_PTR(_DWORD, (v5 + 48)) || v31 )
            {
              v28 = 113;
              if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 8)) == 8 )
                v28 = 284;
              v32 = sub_800EC124(v30, v31);
              sub_800E1480(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 132)), v32, v28, 0, sf_draft_guest_address(&v33), sf_draft_guest_address(&direction_output));
              *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 212)) = v33 << 12;
            }
          }
        }
      }
    }
  }
  result = 1;
  if ( *SF_DRAFT_PTR(_BYTE, (v5 + 308)) )
  {
    sub_80094DC0(a1);
    return 1;
  }
  return result;
}

sint32 sub_800C84F4(sint32 a1, sint8 a2)
{
    FUNCTION_MARKER(0x800C84F4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int *v4; 
  _DWORD *v5; 
  _DWORD *v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v16; 
  int v17; 
  int v19; 
  int *v20; 
  _DWORD *v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v27; 
  uint16 v28; 
  unsigned int *v29; 
  int v32; 
  char v33; 
  unsigned int v34; 
  char v35; 
  unsigned int v36; 
  v4 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (a1 + 144)));
  v5 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 152)));
  v6 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 148)));
  v7 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2040));
  *SF_DRAFT_PTR(_WORD, (a1 + 160)) = 0;
  *SF_DRAFT_PTR(_WORD, (a1 + 162)) = 0;
  v8 = SF_DRAFT_PTR(uint32, 0x801168B8u)[v7] + *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2108));
  v36 = 1 << *SF_DRAFT_PTR(_BYTE, (a1 + 10));
  v9 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2016));
  v35 = 0;
  v33 = a2;
  v34 = v8;
  v10 = *SF_DRAFT_PTR(_DWORD, (a1 + 140));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3592)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3472)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2104)) = v8;
  if ( v9 < 2 || !*SF_DRAFT_PTR(_BYTE, (a1 + 9)) && ((*SF_DRAFT_PTR(uint16, 0x8012D97Au)) & 1) != 0 )
    v35 = 1;
  if ( v4 && !v35 )
  {
    while ( 1 )
    {
      v11 = (*SF_DRAFT_PTR(uint32, 0x8012C8A0u));
      v12 = *v4;
      if ( v34 < (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)) + 64 )
        break;
      if ( *SF_DRAFT_PTR(_DWORD, (v12 + 36)) >= v36 )
        *SF_DRAFT_PTR(_DWORD, (v12 + 36)) = v36 - 1;
      if ( *SF_DRAFT_PTR(uint16, (v12 + 12)) < 0x20u )
      {
        if ( *SF_DRAFT_PTR(_BYTE, (a1 + 9)) == 1 )
        {
          sub_800E87B4(v12, sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x8013D560u)[5 * *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2042))]), *SF_DRAFT_PTR(uint16, (v12 + 36)));
        }
        else
        {
          *SF_DRAFT_PTR(_BYTE, (v11 + 3)) = 1;
          v13 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2042));
          *SF_DRAFT_PTR(_DWORD, (v11 + 4)) = -520093184;
          sub_800C84B4(sf_draft_guest_address((SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(uint32, 0x8013D564u)[5 * v13] + 4 * *SF_DRAFT_PTR(_DWORD, (v12 + 36)))))), sf_draft_guest_address(SF_DRAFT_PTR(unsigned int, v11)));
          v14 = *SF_DRAFT_PTR(uint16, (v12 + 36));
          v16 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2042));
          (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)) = v11 + 8;
          sub_800E82B4(v12, sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x8013D560u)[5 * v16]), v14);
        }
      }
      v4 = SF_DRAFT_PTR(int, v4[2]);
      if ( !v4 || v35 )
        goto LABEL_17;
    }
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2100)) = 1;
  }
LABEL_17:
  if ( (*SF_DRAFT_PTR(_WORD, (a1 + 6)) & 2) == 0 && v10 )
  {
    if ( !*SF_DRAFT_PTR(_BYTE, (a1 + 9)) )
      sub_800CC214(*SF_DRAFT_PTR(_DWORD, (a1 + 156)));
    if ( v33 )
      sub_800D0058(a1, v10, (*SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2042))));
    v17 = a1;
    if ( !*SF_DRAFT_PTR(_BYTE, (a1 + 9)) )
    {
      sub_800CC47C();
      v17 = a1;
    }
    sub_800D3100(v17, v10, (*SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2042))));
    v19 = *SF_DRAFT_PTR(uint16, (SF_DRAFT_GP + 2042));
    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(&v32);
    sub_800CDE88(a1, v10, v19);
  }
  *SF_DRAFT_PTR(_WORD, (a1 + 160)) += *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3472));
  if ( v6 )
  {
    while ( v34 >= (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)) + 32 )
    {
      sub_800E8024(*v6, sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x8013D560u)[5 * *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2042))]), 1);
      v6 = SF_DRAFT_PTR(_DWORD, v6[2]);
      if ( !v6 )
        goto LABEL_30;
    }
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2100)) = 1;
  }
LABEL_30:
  v20 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)));
  if ( v5 && !v35 )
  {
    while ( 1 )
    {
      v21 = SF_DRAFT_PTR(_DWORD, *v5);
      v22 = *SF_DRAFT_PTR(uint8, (*v5 + 11));
      v23 = *SF_DRAFT_PTR(_DWORD, (*v5 + 12));
      v24 = (v23 >> 24) & 0xFD;
      v25 = v22 + 1;
      if ( v34 < (unsigned int)(v20 + 10) )
        break;
      if ( (v22 != 2 || v24 == 104)
        && (v22 != 3 || v24 == 64)
        && (v22 != 6 || v24 == 48)
        && (v22 != 4 || v24 == 32 || v24 == 80)
        && v24
        && *SF_DRAFT_PTR(_BYTE, (*v5 + 11))
        && ((v23 >> 24) & 0x80) == 0 )
      {
        sub_800C6E48(sf_draft_guest_address(v20), sf_draft_guest_address(v21 + 2), v22 + 1);
        if ( v21[1] >= v36 )
          v21[1] = v36 - 1;
        sub_800C84B4(sf_draft_guest_address((SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(uint32, 0x8013D564u)[5 * *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2042))] + 4 * v21[1])))), sf_draft_guest_address((unsigned int *)v20));
        v20 += v25;
        if ( (v23 & 0x6000000) == 0x2000000 )
        {
          if ( v24 != 40 || (v27 = v21[8], v27 == 4) )
          {
            if ( v24 != 56 || (v27 = v21[11], v27 == 4) )
              v27 = 0;
          }
          v28 = sub_800E7F14(2, v27, 0, 0);
          sub_800E7F94(sf_draft_guest_address(v20), 0, 1, v28);
          v29 = (unsigned int *)v20;
          v20 += 2;
          sub_800C84B4(sf_draft_guest_address((SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(uint32, 0x8013D564u)[5 * *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2042))] + 4 * v21[1])))), sf_draft_guest_address(v29));
        }
      }
      else
      {
        memcpy(SF_DRAFT_PTR(void, 0x80116A28u), "GPU ERR", 8);
      }
      v5 = SF_DRAFT_PTR(_DWORD, v5[2]);
      if ( !v5 || v35 )
        goto LABEL_59;
    }
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2100)) = 1;
  }
LABEL_59:
  (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)) = (int)v20;
  return 0;
}

sint32 sub_80062BC0(sint32 a1)
{
    FUNCTION_MARKER(0x80062BC0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int *v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v8; 
  int v9; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int *v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  unsigned int v21; 
  _DWORD *v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int result; 
  int v32; 
  bool v33; // dc
  int v34[4]; 
  int v35; 
  int v36; 
  _WORD v37[4]; 
  int v38; 
  int v39; 
  int v40; 
  int v41[4]; 
  int v42; 
  v2 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 12)));
  v3 = v2[1];
  v4 = v2[2];
  v5 = v2[3];
  (*SF_DRAFT_PTR(uint32, 0x8011E650u)) = *v2;
  (*SF_DRAFT_PTR(uint32, 0x8011E654u)) = v3;
  (*SF_DRAFT_PTR(uint32, 0x8011E658u)) = v4;
  (*SF_DRAFT_PTR(uint32, 0x8011E65Cu)) = v5;
  if ( a1 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    v6 = sub_800CDAB0();
    v8 = (*SF_DRAFT_PTR(uint16, 0x80130C88u));
    (*SF_DRAFT_PTR(uint32, 0x80116B54u)) = v6;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3432)) = v6;
    if ( v8 == 3 )
    {
      *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3432)) = 2560;
      v9 = v6 + 960;
    }
    else
    {
      if ( v8 != 7 && v8 != 10 )
        goto LABEL_8;
      *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3432)) = 2560;
      v9 = v6 + 256;
    }
    (*SF_DRAFT_PTR(uint32, 0x80116B54u)) = v9;
LABEL_8:
    sub_8005F090();
    if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) != 9 )
      sub_8005F834();
    v11 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2868));
    if ( v11 >= 0 )
    {
      v12 = *SF_DRAFT_PTR(_DWORD, (76 * v11 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
      if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v12 + 24)) + 8)) <= 0
        || (v13 = *SF_DRAFT_PTR(_DWORD, (v12 + 28)), *SF_DRAFT_PTR(_BYTE, (v13 + 72)) != 2) && (*SF_DRAFT_PTR(_DWORD, (v13 + 32)) & 0x10) == 0 )
      {
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2868)) = -1;
      }
    }
    goto LABEL_27;
  }
  v14 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v15 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (v14 + 12)));
  v16 = *SF_DRAFT_PTR(_DWORD, (v14 + 28));
  v17 = v15[1];
  v18 = v15[2];
  v19 = v15[3];
  (*SF_DRAFT_PTR(uint32, 0x8011E660u)) = *v15;
  (*SF_DRAFT_PTR(uint32, 0x8011E664u)) = v17;
  (*SF_DRAFT_PTR(uint32, 0x8011E668u)) = v18;
  (*SF_DRAFT_PTR(uint32, 0x8011E66Cu)) = v19;
  if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v14 + 24)) + 8)) <= 0 )
  {
    sub_80058E58(v14);
    v22 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 12)));
    v23 = v22[68];
    v24 = v22[69];
    v25 = v22[70];
    v41[0] = v22[67];
    v41[1] = v23;
    v41[2] = v24;
    v41[3] = v25;
    v38 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 8)) + 12)) + 20));
    v39 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 8)) + 12)) + 24));
    v26 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 8)) + 12)) + 28));
    v39 = -v39;
    v40 = v26;
    sub_800E0364(sf_draft_guest_address(&v38), sf_draft_guest_address(v41), sf_draft_guest_address(&v42));
    v27 = v42;
    *SF_DRAFT_PTR(_WORD, (v16 + 44)) = v42;
    v28 = v27 < 160;
    if ( *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 24)) + 8)) )
      v28 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 404)) & 0x100000;
    if ( v28 )
    {
      sub_80062918((*SF_DRAFT_PTR(__int16, (v14 + 2))));
      if ( *SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(_DWORD, (v14 + 28)) + 32)) < 0 )
      {
        sub_8006C328(*SF_DRAFT_PTR(uint8, (v16 + 82)));
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 28)) + 32)) &= ~0x80000000;
      }
    }
  }
  else
  {
    sub_80017140((*SF_DRAFT_PTR(__int16, (v14 + 2))), sf_draft_guest_address(&v35), sf_draft_guest_address(&v36));
    v34[0] = *SF_DRAFT_PTR(__int16, (12 * *SF_DRAFT_PTR(uint8, (v16 + 67)) + v36));
    v34[1] = *SF_DRAFT_PTR(__int16, (12 * *SF_DRAFT_PTR(uint8, (v16 + 67)) + v36 + 2));
    v34[2] = *SF_DRAFT_PTR(__int16, (12 * *SF_DRAFT_PTR(uint8, (v16 + 67)) + v36 + 4));
    sub_800E0364(sf_draft_guest_address(v34), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E650u))), sf_draft_guest_address(v37));
    *SF_DRAFT_PTR(_WORD, (v16 + 46)) = v37[0];
    sub_800E0364(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E660u))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E650u))), sf_draft_guest_address(v37));
    *SF_DRAFT_PTR(_WORD, (v16 + 44)) = v37[0];
    if ( sub_8005A2B0(v14) )
      v21 = *SF_DRAFT_PTR(_DWORD, (v16 + 32)) | 0x100;
    else
      v21 = *SF_DRAFT_PTR(_DWORD, (v16 + 32)) & 0xFFFFFEFF;
    *SF_DRAFT_PTR(_DWORD, (v16 + 32)) = v21;
    if ( *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 904)) )
      *SF_DRAFT_PTR(_DWORD, (v16 + 32)) &= ~0x100u;
    sub_8005D5B0(v14);
  }
LABEL_27:
  sub_8003194C(a1);
  if ( a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    v29 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v29 + 28)) + 32)) & 0x8010) == 16 )
      *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v29 + 20)) + 88)) = 200;
  }
  sub_80031D00(a1);
  result = (uint8)(*SF_DRAFT_PTR(uint8, 0x801169FCu));
  if ( (*SF_DRAFT_PTR(uint8, 0x801169FCu)) )
  {
    v32 = *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 3880));
    v33 = v32 == 0;
    result = v32 - 1;
    if ( !v33 )
      *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3880)) = result;
  }
  return result;
}

sint32 sub_8005D088(sint32 a1)
{
    FUNCTION_MARKER(0x8005D088u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int v3; 
  int result; 
  uint8 v5; 
  int v6; 
  int v7; 
  int v8; 
  __int16 *v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned int v14; 
  sint32 v15; 
  int v16; 
  __int16 *v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  bool v23; // dc
  int v24; 
  int v25; 
  char v26; 
  int v27; 
  v2 = *SF_DRAFT_PTR(__int16, (a1 + 2));
  v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
  if ( v2 == 666 || (result = 92, *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 92) )
  {
    result = (uint8)sub_800CF9E8(*SF_DRAFT_PTR(_DWORD, (a1 + 8)));
    if ( result )
    {
      result = 13;
      if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 4)) & 8) != 0
        && ((*SF_DRAFT_PTR(uint16, 0x80130C88u)) != 13 || (result = *SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 82)) < 3u) != 0) )
      {
        v5 = *SF_DRAFT_PTR(_BYTE, (v3 + 74)) + 1;
        *SF_DRAFT_PTR(_BYTE, (v3 + 74)) = v5;
        result = v5 < 0x15u;
        if ( !result )
        {
          v6 = *SF_DRAFT_PTR(__int16, (a1 + 2));
          if ( v6 != 666 )
          {
            v7 = 76 * v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
            if ( *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, v7) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 101 )
            {
              result = *SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x100;
              if ( !result )
                return result;
              result = *SF_DRAFT_PTR(uint8, (v7 + 36));
              if ( *SF_DRAFT_PTR(_BYTE, (v7 + 36)) )
                return result;
              v8 = *SF_DRAFT_PTR(_DWORD, (v7 + 36)) & 0x3000;
              result = 0x2000;
              if ( v8 == 4096 )
                return result;
              if ( v8 == 0x2000 )
                return result;
              v9 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 20)));
              result = *v9;
              if ( result != v6 )
                return result;
              result = v9[44] < 51;
              if ( v9[44] < 51 )
                return result;
              return sub_800588A8(a1);
            }
          }
          v10 = 76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
          if ( !*SF_DRAFT_PTR(_BYTE, (v10 + 36)) )
          {
            v11 = *SF_DRAFT_PTR(_DWORD, (v10 + 36)) & 0x3000;
            if ( v11 != 4096 && v11 != 0x2000 && *SF_DRAFT_PTR(uint8, (v3 + 71)) < 2u )
            {
              v12 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
              v13 = *SF_DRAFT_PTR(_DWORD, (v12 + 32));
              result = v13 | 0x80000;
              if ( (v13 & 0x80000) != 0 )
                return result;
              *SF_DRAFT_PTR(_DWORD, (v12 + 32)) = result;
              return sub_800588A8(a1);
            }
          }
          result = *SF_DRAFT_PTR(uint8, (v3 + 74)) < 0x3Du;
          if ( *SF_DRAFT_PTR(uint8, (v3 + 74)) >= 0x3Du )
          {
            result = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 0x80000;
            if ( !result )
            {
              result = *SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x400;
              if ( !result )
              {
                result = *SF_DRAFT_PTR(uint8, (v3 + 65));
                if ( !*SF_DRAFT_PTR(_BYTE, (v3 + 65)) )
                {
                  v14 = sub_800EC8F4() & 7;
                  v15 = v14 < 6;
                  if ( v14 < 4 )
                  {
                    if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 8)) == 2 )
                      sub_80059108(a1);
                    else
                      sub_80058FC0(a1);
                    v15 = (int)v14 < 6;
                  }
                  if ( v15 )
                  {
                    v16 = a1;
                    if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 14 )
                    {
                      v17 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a1 + 20)));
                      if ( *v17 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u))
                        && v17[44] <= 0
                        && (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 16))) & 0x200000) == 0 )
                      {
                        *v17 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
                        *SF_DRAFT_PTR(_DWORD, (v3 + 32)) |= 0x100000u;
                      }
                      v16 = a1;
                    }
                    result = sub_80056740(v16, 5);
                    *SF_DRAFT_PTR(_BYTE, (v3 + 74)) = 0;
                  }
                  else
                  {
                    v18 = 76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                    if ( *SF_DRAFT_PTR(_BYTE, (v18 + 36))
                      || (v19 = *SF_DRAFT_PTR(_DWORD, (v18 + 36)) & 0x3000, result = 0x2000, v19 == 4096)
                      || v19 == 0x2000 )
                    {
                      result = 1;
                      if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 4)) & 8) != 0 && *SF_DRAFT_PTR(_BYTE, (v3 + 75)) != 1 )
                      {
                        result = *SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x2001;
                        if ( result == 0x2000 )
                        {
                          v20 = *SF_DRAFT_PTR(__int16, (a1 + 2));
                          if ( v20 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
                          {
                            v24 = 32 * (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
                          }
                          else
                          {
                            v21 = 76 * v20 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                            v22 = *SF_DRAFT_PTR(uint8, (v21 + 36));
                            v23 = v22 != 0;
                            v24 = 32 * v22;
                            if ( !v23 )
                            {
                              v25 = *SF_DRAFT_PTR(_DWORD, (v21 + 36)) & 0x3000;
                              if ( v25 == 4096 )
                                v24 = 608;
                              else
                                v24 = v25 == 0x2000 ? 0x280 : 0;
                            }
                          }
                          v26 = 3;
                          if ( ((*SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C390u))) + v24)) >> 8) & 7) == 0 )
                            v26 = 1;
                          v27 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
                          *SF_DRAFT_PTR(_BYTE, (v3 + 65)) = v26;
                          *SF_DRAFT_PTR(_BYTE, (v3 + 76)) = 0;
                          result = v27 | 0x10000000;
                          *SF_DRAFT_PTR(_DWORD, (v3 + 32)) = result;
                        }
                      }
                    }
                    *SF_DRAFT_PTR(_BYTE, (v3 + 74)) = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


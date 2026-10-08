#include "game_draft.h"


/* TODO Resolve external dependency signatures */


uint32 sub_80034810(void)
{
    FUNCTION_MARKER(0x80034810u, "SCUS_942.40");
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
  v1 = SF_DRAFT_PTR(int, 0x80129010u);
  v2 = SF_DRAFT_PTR(int, 0x80128E90u);
  do
  {
    v3 = v2[1];
    v4 = v2[2];
    v5 = v2[3];
    *v1 = (*v2);
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

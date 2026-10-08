#include "game_draft.h"


/* TODO Resolve external dependency signatures */


sint32 sub_800CCCD4(uint32 a1)
{
    FUNCTION_MARKER(0x800CCCD4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  _DWORD *v1; 
  int result; 
  _DWORD *v3; 
  int v4; 
  int v5; 

  v1 = SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x8012D724u)));
  result = 0;
  if ( (*SF_DRAFT_PTR(uint32, 0x8012D724u)) )
  {
    do
    {
      v3 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(*v1 + 16));
      if ( (v3[10] & 0x1000000) != 0 )
      {
        v4 = *(__int16 *)(v3[8] + 2);
        if ( v4 != -1 && v4 != 240 && *v3 < *a1_view && *a1_view < v3[4] )
        {
          v5 = a1_view[2];
          if ( (sint32)v3[2] < v5 )
          {
            result = *v1;
            if ( v5 < (sint32)v3[6] )
              break;
          }
        }
      }
      v1 = (_DWORD *)v1[2];
      result = 0;
    }
    while ( v1 );
  }
  return result;
}

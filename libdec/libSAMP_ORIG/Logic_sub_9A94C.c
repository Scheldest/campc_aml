// ADDR: 0x9ac0c
// SYMBOL: sub_9AC0C
int __fastcall sub_9AC0C(_DWORD *a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r1
  int result; // r0

  if ( (int)a1[3] >= 1 )
  {
    v2 = 0;
    do
    {
      v3 = *(_DWORD *)(a1[5] + 8 * v2 + 4);
      if ( v3 != -1 )
      {
        v4 = a1[2] + 116 * v3;
        v5 = *(_DWORD *)(v4 + 112);
        if ( v5 )
        {
          if ( dword_1ACF68 )
            --*(_DWORD *)(dword_1ACF68 + 880);
          off_11724C(v5, dword_1ACF70);
        }
        v6 = *(_DWORD *)(v4 + 8);
        if ( v6 )
        {
          if ( dword_1ACF68 )
            --*(_DWORD *)(dword_1ACF68 + 880);
          off_11724C(v6, dword_1ACF70);
        }
      }
      ++v2;
    }
    while ( v2 < a1[3] );
  }
  v7 = a1[5];
  if ( v7 )
  {
    v8 = dword_1ACF68;
    a1[3] = 0;
    a1[4] = 0;
    if ( v8 )
      --*(_DWORD *)(v8 + 880);
    off_11724C(v7, dword_1ACF70);
    a1[5] = 0;
  }
  v9 = a1[2];
  if ( v9 )
  {
    v10 = dword_1ACF68;
    *a1 = 0;
    a1[1] = 0;
    if ( v10 )
      --*(_DWORD *)(v10 + 880);
    off_11724C(v9, dword_1ACF70);
    a1[2] = 0;
  }
  result = 0;
  a1[6] = 0;
  return result;
}


// ======================================================================

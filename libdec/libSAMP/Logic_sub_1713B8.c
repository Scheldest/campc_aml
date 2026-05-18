// ADDR: 0x17165c
// SYMBOL: sub_17165C
int __fastcall sub_17165C(_DWORD *a1)
{
  _DWORD *v2; // r9
  int v3; // r6
  int v4; // r0
  int v5; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r1
  int result; // r0

  v2 = a1 + 3;
  if ( (int)a1[3] >= 1 )
  {
    v3 = 0;
    do
    {
      v4 = *(_DWORD *)(a1[5] + 8 * v3 + 4);
      if ( v4 != -1 )
      {
        v5 = a1[2] + 116 * v4;
        v6 = *(_DWORD *)(v5 + 112);
        if ( v6 )
        {
          if ( dword_381B58 )
            --*(_DWORD *)(dword_381B58 + 880);
          off_2390B0(v6, dword_381B60);
        }
        v7 = *(_DWORD *)(v5 + 8);
        if ( v7 )
        {
          if ( dword_381B58 )
            --*(_DWORD *)(dword_381B58 + 880);
          off_2390B0(v7, dword_381B60);
        }
      }
      ++v3;
    }
    while ( v3 < *v2 );
  }
  sub_16DC40(v2);
  v8 = a1[2];
  if ( v8 )
  {
    v9 = dword_381B58;
    *a1 = 0;
    a1[1] = 0;
    if ( v9 )
      --*(_DWORD *)(v9 + 880);
    off_2390B0(v8, dword_381B60);
    a1[2] = 0;
  }
  result = 0;
  a1[6] = 0;
  return result;
}


// ======================================================================

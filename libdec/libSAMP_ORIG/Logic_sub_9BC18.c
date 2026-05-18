// ADDR: 0x9bc90
// SYMBOL: sub_9BC90
int __fastcall sub_9BC90(_DWORD *a1)
{
  int v2; // r6
  int v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r4
  int v7; // r0
  _DWORD *v8; // r4
  int v9; // r0
  int result; // r0

  if ( (int)a1[2] >= 1 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      if ( v3 == *a1 )
      {
        v4 = a1[4] + v2;
        *(_DWORD *)(v4 + 20) = 0;
        *(_QWORD *)v4 = 0LL;
        *(_QWORD *)(v4 + 8) = 0LL;
        *(_DWORD *)(v4 + 16) = 0;
      }
      v5 = a1[4];
      v6 = v5 + v2;
      v7 = *(_DWORD *)(v5 + v2 + 8);
      if ( v7 )
      {
        *(_DWORD *)(v5 + v2) = 0;
        *(_DWORD *)(v6 + 4) = 0;
        sub_88614(v7);
        v5 = a1[4];
        *(_DWORD *)(v6 + 8) = 0;
      }
      v8 = (_DWORD *)(v5 + v2);
      v9 = *(_DWORD *)(v5 + v2 + 20);
      if ( v9 )
      {
        v8[3] = 0;
        v8[4] = 0;
        sub_88614(v9);
        v8[5] = 0;
      }
      ++v3;
      v2 += 24;
    }
    while ( v3 < a1[2] );
  }
  result = a1[4];
  *a1 = 0;
  a1[1] = 1;
  if ( result )
  {
    a1[2] = 0;
    a1[3] = 0;
    result = sub_88614(result);
    a1[4] = 0;
  }
  return result;
}


// ======================================================================

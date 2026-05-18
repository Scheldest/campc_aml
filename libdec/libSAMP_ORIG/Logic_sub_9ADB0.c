// ADDR: 0x9ae60
// SYMBOL: sub_9AE60
int __fastcall sub_9AE60(int *a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r6
  int v6; // r2
  int v7; // r5
  int v8; // r9
  int v9; // r0
  _DWORD *v10; // r0
  const void *v11; // r1
  int v12; // r1
  int v13; // r0
  bool v14; // zf
  int v15; // r1

  v5 = (_DWORD *)a1[2];
  v6 = *a1;
  v7 = (a2 - (int)v5) >> 2;
  if ( *a1 == a1[1] )
  {
    v8 = v6 + 1;
    if ( v6 )
      v9 = v6 + v6 / 2;
    else
      v9 = 8;
    if ( v9 > v8 )
      v8 = v9;
    if ( v6 < v8 )
    {
      if ( dword_1ACF68 )
        ++*(_DWORD *)(dword_1ACF68 + 880);
      v10 = (_DWORD *)off_117248(4 * v8, dword_1ACF70);
      v11 = (const void *)a1[2];
      v5 = v10;
      if ( v11 )
      {
        j_memcpy(v10, v11, 4 * *a1);
        v13 = a1[2];
        v14 = v13 == 0;
        if ( v13 )
        {
          v12 = dword_1ACF68;
          v14 = dword_1ACF68 == 0;
        }
        if ( !v14 )
          --*(_DWORD *)(v12 + 880);
        off_11724C(v13, dword_1ACF70);
      }
      v6 = *a1;
      a1[1] = v8;
      a1[2] = (int)v5;
    }
  }
  if ( v6 > v7 )
  {
    j_memmove(&v5[v7 + 1], &v5[v7], 4 * (v6 - v7));
    v5 = (_DWORD *)a1[2];
  }
  v5[v7] = *a3;
  v15 = a1[2];
  ++*a1;
  return v15 + 4 * v7;
}


// ======================================================================

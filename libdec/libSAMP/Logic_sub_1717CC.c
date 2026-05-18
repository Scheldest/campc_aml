// ADDR: 0x171874
// SYMBOL: sub_171874
int __fastcall sub_171874(int *a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r6
  int v6; // r2
  int v7; // r5
  int v8; // r9
  int v9; // r0
  _DWORD *v10; // r0
  const void *v11; // r1
  int v12; // r0
  int v13; // r1

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
      if ( dword_381B58 )
        ++*(_DWORD *)(dword_381B58 + 880);
      v10 = (_DWORD *)off_2390AC(4 * v8, dword_381B60);
      v11 = (const void *)a1[2];
      v5 = v10;
      if ( v11 )
      {
        j_memcpy(v10, v11, 4 * *a1);
        v12 = a1[2];
        if ( v12 && dword_381B58 )
          --*(_DWORD *)(dword_381B58 + 880);
        off_2390B0(v12, dword_381B60);
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
  v13 = a1[2];
  ++*a1;
  return v13 + 4 * v7;
}


// ======================================================================

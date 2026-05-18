// ADDR: 0x170e70
// SYMBOL: sub_170E70
void *__fastcall sub_170E70(size_t *a1)
{
  _DWORD *v2; // r10
  int v3; // r0
  size_t *v4; // r5
  _BYTE *v5; // r4
  size_t v6; // r0
  int (__fastcall *v7)(_DWORD, int); // r3
  int v8; // r1
  void *v9; // r0
  const void *v10; // r1
  void *v11; // r4
  int v12; // r0
  _BYTE *v13; // r0
  const void *v14; // r1
  int v15; // r0
  int v16; // r4
  int v17; // r6
  size_t v18; // r0
  void *result; // r0

  v2 = (_DWORD *)dword_381B58;
  v3 = *(_DWORD *)(dword_381B58 + 11520);
  *(_DWORD *)(dword_381B58 + 11512) = 0;
  v4 = v2 + 2879;
  if ( v3 <= -1 )
  {
    v7 = off_2390AC;
    v8 = dword_381B60;
    ++v2[220];
    v9 = (void *)v7(0, v8);
    v10 = (const void *)v2[2881];
    v11 = v9;
    if ( v10 )
    {
      j_memcpy(v9, v10, *v4);
      v12 = v2[2881];
      if ( v12 && dword_381B58 )
        --*(_DWORD *)(dword_381B58 + 880);
      off_2390B0(v12, dword_381B60);
    }
    *v4 = 0;
    v2[2880] = 0;
    v2[2881] = v11;
  }
  else
  {
    *v4 = 0;
    if ( v3 )
    {
      v5 = (_BYTE *)v2[2881];
      v6 = 0;
      goto LABEL_18;
    }
  }
  if ( dword_381B58 )
    ++*(_DWORD *)(dword_381B58 + 880);
  v13 = (_BYTE *)off_2390AC(8, dword_381B60);
  v14 = (const void *)v2[2881];
  v5 = v13;
  if ( v14 )
  {
    j_memcpy(v13, v14, *v4);
    v15 = v2[2881];
    if ( v15 && dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v15, dword_381B60);
  }
  v6 = *v4;
  v2[2880] = 8;
  v2[2881] = v5;
LABEL_18:
  v5[v6] = 0;
  ++*v4;
  if ( (int)v2[2882] >= 1 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      (*(void (__fastcall **)(_DWORD *))(v2[2884] + v16 + 16))(v2);
      ++v17;
      v16 += 24;
    }
    while ( v17 < v2[2882] );
  }
  if ( a1 )
  {
    v18 = *v4;
    if ( *v4 )
      --v18;
    *a1 = v18;
  }
  result = &unk_381B5C;
  if ( v2[2881] )
    return (void *)v2[2881];
  return result;
}


// ======================================================================

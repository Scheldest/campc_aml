// ADDR: 0x86ff0
// SYMBOL: sub_86FF0
int __fastcall sub_86FF0(int *a1, _BYTE *a2, int a3, int a4)
{
  char v4; // lr
  int v5; // r12
  char v6; // r3
  int v7; // r2
  int v8; // r4
  int v9; // r5
  int v11; // r3
  int v12; // r2
  int v13; // r4
  int v14; // r4
  int v15; // r2
  __int64 v16; // r2
  int v17; // r4
  char v18; // r3
  bool v19; // cf
  int v20; // r2
  int v22; // r6
  __int64 v23; // r2
  int v24; // r6
  bool v25; // zf
  char v26; // r3
  int v27; // r2

  v4 = -16;
  v5 = (a3 >> 3) - 1;
  if ( a4 )
    v4 = 0;
  if ( a3 >= 16 )
  {
    v6 = a4 - 1;
    v7 = 8 * (a3 >> 3);
    do
    {
      v8 = a1[2];
      if ( v8 >= *a1 )
        return 0;
      v9 = *(unsigned __int8 *)(a1[3] + (v8 >> 3));
      a1[2] = v8 + 1;
      if ( ((v9 << (v8 & 7)) & 0x80) == 0 )
        return sub_86E30(a1, a2, v7, 1);
      a2[v5] = v6;
      v7 -= 8;
    }
    while ( v5-- > 1 );
  }
  v11 = *a1;
  v12 = a1[2];
  if ( v12 >= *a1 )
    return 0;
  v13 = *(unsigned __int8 *)(a1[3] + (v12 >> 3));
  a1[2] = v12 + 1;
  if ( ((v13 << (v12 & 7)) & 0x80) == 0 )
  {
    v22 = v12 + 9;
    v15 = 0;
    if ( v22 > v11 )
      return v15;
    a2[v5] = 0;
    v23 = *((_QWORD *)a1 + 1);
    v24 = *(unsigned __int8 *)(HIDWORD(v23) + ((int)v23 >> 3));
    v26 = v23 & 7;
    v25 = (v23 & 7) == 0;
    v27 = v24 << (v23 & 7);
    a2[v5] = v27;
    if ( !v25 )
      a2[v5] = v27 | (*(unsigned __int8 *)(a1[3] + (a1[2] >> 3) + 1) >> (8 - v26));
    a1[2] += 8;
    return 1;
  }
  v14 = v12 + 5;
  v15 = 0;
  if ( v14 <= v11 )
  {
    a2[v5] = 0;
    v16 = *((_QWORD *)a1 + 1);
    v17 = *(unsigned __int8 *)(HIDWORD(v16) + ((int)v16 >> 3));
    v18 = v16 & 7;
    v19 = ((unsigned __int8)v16 & 7u) >= 5;
    v20 = v17 << (v16 & 7);
    a2[v5] = v20;
    if ( v19 )
    {
      v20 |= *(unsigned __int8 *)(a1[3] + (a1[2] >> 3) + 1) >> (8 - v18);
      a2[v5] = v20;
    }
    a2[v5] = (unsigned __int8)v20 >> 4;
    a1[2] += 4;
    a2[v5] |= v4;
    return 1;
  }
  return v15;
}


// ======================================================================
// ADDR: 0x87618
// SYMBOL: sub_87618
unsigned int __fastcall sub_87618(int *a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r4
  int v7; // r5
  unsigned int v10; // r11
  int v11; // r0
  int v12; // r0
  bool v13; // zf

  if ( !a3 )
    return 0;
  v6 = *a1;
  v7 = a3;
  v10 = 0;
  do
  {
    v13 = sub_86FD6(a2) == 0;
    v11 = 8;
    if ( !v13 )
      v11 = 12;
    v6 = *(_DWORD *)(v6 + v11);
    v12 = *(_DWORD *)(v6 + 8);
    v13 = v12 == 0;
    if ( !v12 )
      v13 = *(_DWORD *)(v6 + 12) == 0;
    if ( v13 )
    {
      if ( v10 < a4 )
        *(_BYTE *)(a5 + v10) = *(_BYTE *)v6;
      v6 = *a1;
      ++v10;
    }
    --v7;
  }
  while ( v7 );
  return v10;
}


// ======================================================================

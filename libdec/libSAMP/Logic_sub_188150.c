// ADDR: 0x17d8b8
// SYMBOL: sub_17D8B8
int __fastcall sub_17D8B8(_DWORD *a1, void *dest, signed int a3)
{
  int v4; // r0
  int v5; // r12
  int v7; // r5

  if ( a3 < 1 )
    return 0;
  v4 = a1[2];
  if ( v4 )
  {
    v5 = (-v4 & 7) + v4;
    a1[2] = v5;
  }
  else
  {
    v5 = 0;
  }
  if ( v5 + 8 * a3 > *a1 )
    return 0;
  v7 = 8 * a3;
  j_memcpy(dest, (const void *)(a1[3] + (v5 >> 3)), a3);
  a1[2] += v7;
  return 1;
}


// ======================================================================
// ADDR: 0x1889fc
// SYMBOL: sub_1889FC
int __fastcall sub_1889FC(int *a1)
{
  int v1; // r1
  unsigned int v2; // r2
  unsigned int v3; // r3
  int v4; // r12
  bool v5; // cf
  unsigned int v6; // r3
  unsigned int v8; // r2
  int v9; // r1
  unsigned int v10; // r3

  v1 = 0;
  v2 = a1[1];
  v3 = a1[2];
  v4 = a1[3];
  v5 = v3 >= v2;
  v6 = v3 - v2;
  if ( !v5 )
    v1 = -v4;
  if ( v6 == v1 )
    return operator new[](0x40u);
  v8 = v2 + 1;
  v9 = *a1;
  v10 = v8 - v4;
  if ( v8 != v4 )
    v10 = v8;
  a1[1] = v10;
  if ( !v10 )
    v10 = v4;
  return *(_DWORD *)(v9 + 4 * v10 - 4);
}


// ======================================================================

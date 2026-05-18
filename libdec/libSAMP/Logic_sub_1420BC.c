// ADDR: 0x17d4f2
// SYMBOL: sub_17D4F2
int __fastcall sub_17D4F2(int a1, void *src, size_t size, int a4)
{
  void *v7; // r0

  *(_BYTE *)(a1 + 16) = a4;
  *(_DWORD *)a1 = 8 * size;
  *(_DWORD *)(a1 + 4) = 8 * size;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a4 )
  {
    if ( size )
    {
      if ( size > 0xFF )
      {
        v7 = malloc(size);
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 2048;
        v7 = (void *)(a1 + 17);
      }
      *(_DWORD *)(a1 + 12) = v7;
      j_memcpy(v7, src, size);
    }
    else
    {
      *(_DWORD *)(a1 + 12) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 12) = src;
  }
  return a1;
}


// ======================================================================
// ADDR: 0x17da96
// SYMBOL: sub_17DA96
int __fastcall sub_17DA96(int result, int a2)
{
  *(_DWORD *)(result + 8) += a2;
  return result;
}


// ======================================================================
// ADDR: 0x18e6c8
// SYMBOL: sub_18E6C8
int __fastcall sub_18E6C8(int result, const char *a2)
{
  int v2; // r8
  int i; // r1
  char v4; // r2
  int j; // r3
  char v6; // r6
  int k; // r1
  char v8; // r2
  int m; // r3
  char v10; // r6
  int n; // r1
  char v12; // r2
  int ii; // r3
  char v14; // r6
  int jj; // r1
  char v16; // r3
  int kk; // r6
  char v18; // r4
  int mm; // r0
  int nn; // r0
  unsigned int v21; // r1
  char v22; // r2
  unsigned int v23; // r1
  char v24; // r2
  char v25; // r1
  int v26; // r2
  int v27[5]; // [sp+0h] [bp-130h] BYREF
  _BYTE v28[276]; // [sp+14h] [bp-11Ch] BYREF

  if ( a2 )
  {
    v2 = result;
    sub_18E69E((int)v28, 260, "%s", a2);
    sub_18E49E(v28, v27);
    for ( i = 0; i != 5; ++i )
    {
      v4 = *((_BYTE *)v27 + i);
      for ( j = 0; j != 100; ++j )
      {
        v6 = byte_BEB55[j];
        v4 ^= v6 ^ 0x2F;
      }
      *((_BYTE *)v27 + i) = v4;
    }
    for ( k = 5; k != 10; ++k )
    {
      v8 = *((_BYTE *)v27 + k);
      for ( m = 0; m != 100; ++m )
      {
        v10 = byte_BEB55[m];
        v8 ^= v10 ^ 0x45;
      }
      *((_BYTE *)v27 + k) = v8;
    }
    for ( n = 10; n != 15; ++n )
    {
      v12 = *((_BYTE *)v27 + n);
      for ( ii = 0; ii != 100; ++ii )
      {
        v14 = byte_BEB55[ii];
        v12 ^= v14 ^ 0x6F;
      }
      *((_BYTE *)v27 + n) = v12;
    }
    for ( jj = 15; jj != 20; ++jj )
    {
      v16 = *((_BYTE *)v27 + jj);
      for ( kk = 0; kk != 100; ++kk )
      {
        v18 = byte_BEB55[kk];
        v16 ^= v18 ^ 0xDB;
      }
      *((_BYTE *)v27 + jj) = v16;
    }
    for ( mm = 0; mm != 20; ++mm )
      *((_BYTE *)v27 + mm) ^= byte_BEBB9[mm];
    for ( nn = 0; nn != 20; ++nn )
    {
      v21 = *((unsigned __int8 *)v27 + nn);
      v22 = 48;
      if ( v21 > 0x9F )
        v22 = 55;
      *(_BYTE *)(v2 + 2 * nn) = v22 + (*((_BYTE *)v27 + nn) >> 4);
      v23 = v21 & 0xF;
      v24 = 48;
      if ( v23 > 9 )
        v24 = 55;
      v25 = v23 + v24;
      v26 = v2 + 2 * nn;
      *(_BYTE *)(v26 + 1) = v25;
    }
    result = 0;
    *(_BYTE *)(v2 + 40) = 0;
  }
  return result;
}


// ======================================================================

// ADDR: 0x18dd38
// SYMBOL: sub_18DD38
int __fastcall sub_18DD38(int a1, unsigned int a2, size_t n, char *src)
{
  int result; // r0
  char *v8; // r0
  int v9; // r1
  char v10; // r3
  int v11; // r5
  _BYTE *v12; // r4
  unsigned __int8 *v13; // r4
  int v14; // r6
  _BYTE v15[56]; // [sp+0h] [bp-38h] BYREF

  if ( !a1 )
    return -3;
  if ( a2 > 1 )
    return -1;
  *(_BYTE *)a1 = a2;
  result = -2;
  if ( n - 16 <= 0x10 && ((1 << (n - 16)) & 0x10101) != 0 )
  {
    *(_DWORD *)(a1 + 4) = 8 * n;
    if ( src )
    {
      v8 = strncpy((char *)(a1 + 8), src, n);
      dword_382770 = (n >> 2) + 6;
      v9 = 0;
      do
      {
        v10 = v8[v9];
        v11 = v9 & 3;
        v12 = &v15[v9++ & 0xFFFFFFFC];
        v12[v11] = v10;
      }
      while ( n != v9 );
      sub_18D45C(v15, v9, a1 + 48);
      result = 1;
      if ( a2 == 1 && dword_382770 >= 2 )
      {
        v13 = (unsigned __int8 *)(a1 + 64);
        v14 = 1;
        do
        {
          sub_18D3F0(v13, 4);
          ++v14;
          v13 += 16;
        }
        while ( v14 < dword_382770 );
        return 1;
      }
    }
    else
    {
      return -2;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x18de00
// SYMBOL: sub_18DE00
int __fastcall sub_18DE00(_BYTE *a1, int a2, int a3)
{
  _BYTE *v3; // r0
  int i; // r1
  _BYTE *v6; // r4
  int j; // r5

  if ( (unsigned int)(a2 - 1) > 2 )
    return -4;
  *a1 = a2;
  if ( a3 )
  {
    v3 = a1 + 1;
    for ( i = 0; i != 16; ++i )
      v3[i] = *(_BYTE *)(a3 + i);
  }
  else
  {
    v6 = a1 + 1;
    for ( j = 0; j != 16; ++j )
      v6[j] = sub_187150();
  }
  return 1;
}


// ======================================================================

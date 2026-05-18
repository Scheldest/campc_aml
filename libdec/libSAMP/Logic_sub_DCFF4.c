// ADDR: 0xdd0cc
// SYMBOL: sub_DD0CC
_DWORD *__fastcall sub_DD0CC(_DWORD *a1, int a2, unsigned __int64 a3, int a4)
{
  unsigned int v4; // r5
  unsigned int v5; // r6
  int v6; // r4
  bool v7; // cf
  unsigned __int64 v8; // r0
  int v9; // r4
  _DWORD *result; // r0
  int v11; // [sp+4h] [bp-24h]

  v4 = HIDWORD(a3);
  v5 = a3;
  v6 = a2 + a4;
  v11 = a2 + a4;
  if ( a3 >= 0x64 )
  {
    do
    {
      v8 = sub_2217B4(v5, v4, 100, 0);
      *(_WORD *)(v6 - 2) = *(_WORD *)&a00010203040506[2 * (v5 - 100 * v8)];
      v6 -= 2;
      v7 = __PAIR64__(v4, v5) <= 0x270F;
      v4 = HIDWORD(v8);
      v5 = v8;
    }
    while ( !v7 );
  }
  else
  {
    v8 = a3;
  }
  if ( v8 <= 9 )
  {
    *(_BYTE *)(v6 - 1) = v8 + 48;
    v9 = v6 - 1;
  }
  else
  {
    *(_WORD *)(v6 - 2) = *(_WORD *)&a00010203040506[2 * v8];
    v9 = v6 - 2;
  }
  result = a1;
  *a1 = v9;
  a1[1] = v11;
  return result;
}


// ======================================================================

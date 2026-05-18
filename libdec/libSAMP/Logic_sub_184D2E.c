// ADDR: 0x1850d2
// SYMBOL: sub_1850D2
int __fastcall sub_1850D2(int result, unsigned int a2)
{
  int v2; // r6
  int v3; // r4
  unsigned int v4; // r12
  _DWORD *v5; // r2
  int v6; // r3
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r3

  v2 = a2 & 0x1F;
  v3 = result;
  v4 = a2 >> 5;
  if ( a2 >> 5 )
  {
    if ( a2 <= 0xFF )
    {
      v5 = (_DWORD *)(result + 28);
      v6 = 8 - v4;
      do
      {
        --v6;
        *v5 = v5[-v4];
        --v5;
      }
      while ( v6 > 0 );
    }
    result = sub_22178C(result, 4 * v4);
  }
  if ( v2 )
  {
    result = 32 - v2;
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *(_DWORD *)(v3 + 4 * v7);
      *(_DWORD *)(v3 + 4 * v7++) = v8 | (v9 << v2);
      v8 = v9 >> result;
    }
    while ( v7 != 8 );
  }
  return result;
}


// ======================================================================
// ADDR: 0x185136
// SYMBOL: sub_185136
int __fastcall sub_185136(int result, int a2)
{
  unsigned int v2; // r12
  int i; // r2
  unsigned int v4; // lr
  unsigned int v5; // r3

  v2 = 0;
  for ( i = 0; i != 8; ++i )
  {
    v4 = *(_DWORD *)(result + 4 * i);
    v5 = *(_DWORD *)(a2 + 4 * i);
    *(_DWORD *)(result + 4 * i) = v4 + v2 + v5;
    v2 = ((v5 >> 31) + (v4 >> 31) + (((v5 & 0x7FFFFFFF) + v2 + (v4 & 0x7FFFFFFF)) >> 31)) >> 1;
  }
  return result;
}


// ======================================================================

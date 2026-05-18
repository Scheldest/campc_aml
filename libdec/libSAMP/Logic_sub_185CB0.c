// ADDR: 0x185f02
// SYMBOL: sub_185F02
int __fastcall sub_185F02(int result, int a2)
{
  unsigned int v2; // lr
  int i; // r3
  int v4; // r2
  unsigned int v5; // r4

  v2 = 0;
  for ( i = 0; i != 16; ++i )
  {
    v4 = *(_DWORD *)(result + 4 * i);
    v5 = *(_DWORD *)(a2 + 4 * i);
    *(_DWORD *)(result + 4 * i) = v4 + v2 - v5;
    v2 = -(((v4 >> 31) + (v5 >> 31) + ((v2 + (v4 & 0x7FFFFFFF) - (v5 & 0x7FFFFFFF)) >> 31) + 1) >> 1);
  }
  return result;
}


// ======================================================================

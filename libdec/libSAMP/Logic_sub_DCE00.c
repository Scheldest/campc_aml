// ADDR: 0xdceb4
// SYMBOL: sub_DCEB4
_DWORD *__fastcall sub_DCEB4(_DWORD *result, int a2, unsigned int a3, int a4)
{
  int v4; // r12
  int v5; // r3
  bool v6; // cc
  unsigned int v7; // r1
  unsigned int v8; // r5
  int v9; // r3

  v4 = a2 + a4;
  if ( a3 < 0x64 )
  {
    v7 = a3;
    v5 = v4;
  }
  else
  {
    v5 = a2 + a4;
    do
    {
      v6 = a3 > 0x270F;
      v7 = a3 / 0x64;
      v8 = a3 - 100 * v7;
      a3 = v7;
      *(_WORD *)(v5 - 2) = *(_WORD *)&a00010203040506[2 * v8];
      v5 -= 2;
    }
    while ( v6 );
  }
  if ( v7 > 9 )
  {
    *(_WORD *)(v5 - 2) = *(_WORD *)&a00010203040506[2 * v7];
    v9 = v5 - 2;
  }
  else
  {
    *(_BYTE *)(v5 - 1) = v7 + 48;
    v9 = v5 - 1;
  }
  *result = v9;
  result[1] = v4;
  return result;
}


// ======================================================================
// ADDR: 0xdcf1c
// SYMBOL: sub_DCF1C
int __fastcall sub_DCF1C(int a1, int a2, int a3)
{
  sub_DCF30(a3, a1, a2);
  return a3;
}


// ======================================================================

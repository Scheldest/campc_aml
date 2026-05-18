// ADDR: 0x150e00
// SYMBOL: sub_150E00
int __fastcall sub_150E00(int a1)
{
  int v2; // r1

  v2 = *(unsigned __int8 *)(a1 + 56);
  *(_DWORD *)a1 = &off_22F1D8;
  if ( v2 << 31 )
    operator delete(*(void **)(a1 + 64));
  sub_150E66(a1 + 36);
  sub_150EA8(a1 + 16);
  sub_150EF2(a1 + 4);
  return a1;
}


// ======================================================================

// ADDR: 0x139be2
// SYMBOL: sub_139BE2
int __fastcall sub_139BE2(int a1, int a2)
{
  unsigned int v2; // r2
  int result; // r0
  int v5; // r1

  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 >> 2 > 0x54 || (result = 0, !a2) && v2 >= 0xAA )
  {
    operator delete(**(void ***)(a1 + 4));
    v5 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 4) += 4;
    *(_DWORD *)(a1 + 16) = v5 - 170;
    return 1;
  }
  return result;
}


// ======================================================================

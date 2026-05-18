// ADDR: 0xfa50c
// SYMBOL: sub_FA50C
int __fastcall sub_FA50C(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_FAAD0();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

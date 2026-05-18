// ADDR: 0xf2404
// SYMBOL: sub_F2404
int __fastcall sub_F2404(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_F2778();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

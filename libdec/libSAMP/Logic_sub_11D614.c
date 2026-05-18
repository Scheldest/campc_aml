// ADDR: 0x11d3a0
// SYMBOL: sub_11D3A0
int __fastcall sub_11D3A0(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_11D53C();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

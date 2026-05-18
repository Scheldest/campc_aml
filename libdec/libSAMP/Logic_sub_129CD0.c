// ADDR: 0x129b48
// SYMBOL: sub_129B48
int __fastcall sub_129B48(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_129BEC();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

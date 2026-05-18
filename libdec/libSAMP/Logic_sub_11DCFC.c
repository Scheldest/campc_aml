// ADDR: 0x11daa0
// SYMBOL: sub_11DAA0
int __fastcall sub_11DAA0(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_11DC38();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

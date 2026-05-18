// ADDR: 0x110e10
// SYMBOL: sub_110E10
int __fastcall sub_110E10(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_1111A8();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

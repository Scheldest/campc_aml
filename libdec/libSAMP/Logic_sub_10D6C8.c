// ADDR: 0x10d40c
// SYMBOL: sub_10D40C
int __fastcall sub_10D40C(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_10D4F4();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

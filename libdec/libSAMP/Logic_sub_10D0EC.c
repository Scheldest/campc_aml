// ADDR: 0x10cea8
// SYMBOL: sub_10CEA8
int __fastcall sub_10CEA8(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_10D028();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

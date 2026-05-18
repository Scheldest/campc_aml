// ADDR: 0xf559c
// SYMBOL: sub_F559C
int __fastcall sub_F559C(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_F582C();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

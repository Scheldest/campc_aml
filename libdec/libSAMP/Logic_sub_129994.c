// ADDR: 0x129638
// SYMBOL: sub_129638
int __fastcall sub_129638(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_129848();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

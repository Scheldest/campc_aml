// ADDR: 0x162004
// SYMBOL: sub_162004
int __fastcall sub_162004(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_1622A8();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

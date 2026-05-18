// ADDR: 0x123e80
// SYMBOL: sub_123E80
int __fastcall sub_123E80(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_1240F4();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

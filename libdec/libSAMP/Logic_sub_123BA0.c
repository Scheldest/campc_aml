// ADDR: 0x1238b8
// SYMBOL: sub_1238B8
int __fastcall sub_1238B8(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_123AA4();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

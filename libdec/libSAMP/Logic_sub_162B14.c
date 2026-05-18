// ADDR: 0x162940
// SYMBOL: sub_162940
int __fastcall sub_162940(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_162A2C();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

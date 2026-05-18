// ADDR: 0xf4380
// SYMBOL: sub_F4380
int __fastcall sub_F4380(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_F4A5C();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

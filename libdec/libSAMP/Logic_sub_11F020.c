// ADDR: 0x11e89c
// SYMBOL: sub_11E89C
int __fastcall sub_11E89C(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_11EE60();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

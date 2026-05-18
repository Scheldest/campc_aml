// ADDR: 0x1108d4
// SYMBOL: sub_1108D4
int __fastcall sub_1108D4(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_110A50();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

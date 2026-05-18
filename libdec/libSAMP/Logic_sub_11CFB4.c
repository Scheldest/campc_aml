// ADDR: 0x11cd1c
// SYMBOL: sub_11CD1C
int __fastcall sub_11CD1C(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_11CEF0();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

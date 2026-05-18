// ADDR: 0x16198c
// SYMBOL: sub_16198C
int __fastcall sub_16198C(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_161A78();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

// ADDR: 0x11fac8
// SYMBOL: sub_11FAC8
int __fastcall sub_11FAC8(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_11FD18();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================

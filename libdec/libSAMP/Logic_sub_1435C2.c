// ADDR: 0x13e73a
// SYMBOL: sub_13E73A
int __fastcall sub_13E73A(int a1)
{
  int i; // r6
  void *v3; // r0

  for ( i = 0; i != 1024; ++i )
  {
    v3 = *(void **)(a1 + 4 * i);
    if ( v3 )
    {
      operator delete(v3);
      *(_DWORD *)(a1 + 4 * i) = 0;
    }
  }
  return a1;
}


// ======================================================================

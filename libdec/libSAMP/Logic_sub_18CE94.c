// ADDR: 0x18d042
// SYMBOL: sub_18D042
int __fastcall sub_18D042(int a1)
{
  unsigned int v1; // r1
  unsigned int i; // r5
  int v4; // r0
  void *v5; // r0

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
  {
    for ( i = 0; i < v1; ++i )
    {
      v4 = *(_DWORD *)(*(_DWORD *)a1 + 8 * i + 4);
      if ( v4 )
      {
        v5 = (void *)sub_17DADE(v4);
        operator delete(v5);
        v1 = *(_DWORD *)(a1 + 4);
      }
    }
  }
  *(_BYTE *)(a1 + 20) = 0;
  sub_18D110(a1, 0);
  return sub_18D0F4(a1);
}


// ======================================================================

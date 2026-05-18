// ADDR: 0x18d2da
// SYMBOL: sub_18D2DA
int __fastcall sub_18D2DA(_DWORD *a1)
{
  unsigned int v1; // r1
  unsigned int i; // r5
  void *v4; // r0

  v1 = a1[1];
  if ( v1 )
  {
    for ( i = 0; i < v1; ++i )
    {
      if ( *(_BYTE *)(*a1 + 8 * i + 4) )
      {
        v4 = *(void **)(*a1 + 8 * i);
        if ( v4 )
        {
          operator delete[](v4);
          v1 = a1[1];
        }
      }
    }
  }
  return sub_18D30C(a1);
}


// ======================================================================

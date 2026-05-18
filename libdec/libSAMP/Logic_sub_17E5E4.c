// ADDR: 0x17e5fe
// SYMBOL: sub_17E5FE
int __fastcall sub_17E5FE(_DWORD *a1)
{
  unsigned int v1; // r1
  unsigned int i; // r5
  void *v4; // r0

  v1 = a1[1];
  if ( v1 )
  {
    for ( i = 0; i < v1; ++i )
    {
      v4 = *(void **)(*a1 + 4 * i);
      if ( v4 )
      {
        operator delete(v4);
        v1 = a1[1];
      }
    }
  }
  return sub_17E62A(a1, 0);
}


// ======================================================================

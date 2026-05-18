// ADDR: 0x15f2ba
// SYMBOL: sub_15F2BA
int __fastcall sub_15F2BA(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r5
  int v5; // r1
  int i; // r2

  result = a1[3];
  if ( result )
  {
    v3 = (_DWORD *)a1[2];
    if ( v3 )
    {
      do
      {
        v4 = (_DWORD *)*v3;
        operator delete(v3);
        v3 = v4;
      }
      while ( v4 );
    }
    v5 = a1[1];
    result = 0;
    a1[2] = 0;
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
        *(_DWORD *)(*a1 + 4 * i) = 0;
    }
    a1[3] = 0;
  }
  return result;
}


// ======================================================================

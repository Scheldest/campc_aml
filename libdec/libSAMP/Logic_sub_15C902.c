// ADDR: 0x15c91e
// SYMBOL: sub_15C91E
void __fastcall sub_15C91E(int a1, void **a2)
{
  void **v2; // r4
  void **v3; // r5

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = (void **)*v2;
      if ( *((unsigned __int8 *)v2 + 12) << 31 )
        operator delete(v2[5]);
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}


// ======================================================================

// ADDR: 0x13ae68
// SYMBOL: sub_13AE68
void __fastcall sub_13AE68(int a1, void **a2)
{
  void **v2; // r4
  void **v3; // r5

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = (void **)*v2;
      if ( *((unsigned __int8 *)v2 + 16) << 31 )
        operator delete(v2[6]);
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}


// ======================================================================

// ADDR: 0x1f307e
// SYMBOL: sub_1F307E
int __fastcall sub_1F307E(int a1, unsigned int a2, int a3, unsigned int a4)
{
  int v4; // r0
  int v5; // r3

  if ( a2 )
  {
    if ( a4 < a2 )
      a2 = a4 + 1;
    v4 = a1 - 1;
    while ( a2 )
    {
      v5 = *(unsigned __int8 *)(v4 + a2--);
      if ( v5 == a3 )
        return a2;
    }
  }
  return -1;
}


// ======================================================================

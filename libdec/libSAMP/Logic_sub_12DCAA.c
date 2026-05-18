// ADDR: 0x12dfe0
// SYMBOL: sub_12DFE0
unsigned int **__fastcall sub_12DFE0(unsigned int **a1)
{
  unsigned int *v2; // r0
  unsigned int v3; // r1
  unsigned int *v4; // r5

  v2 = *a1;
  if ( v2 )
  {
    __dmb(0xBu);
    do
      v3 = __ldrex(v2);
    while ( __strex(v3 - 1, v2) );
    __dmb(0xBu);
    if ( v3 == 1 )
    {
      v4 = *a1;
      if ( *a1 )
      {
        sub_12E1C0(v4 + 1);
        operator delete(v4);
      }
    }
  }
  return a1;
}


// ======================================================================

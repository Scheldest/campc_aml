// ADDR: 0x109114
// SYMBOL: sub_109114
void __fastcall sub_109114(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r12
  unsigned int v4; // r3

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      *a3 = 0;
    }
    else if ( a1 < a2 )
    {
      *a3 = a1;
    }
    else
    {
      v3 = __clz(a1);
      v4 = __clz(a2);
      ((int (*)())((char *)sub_1092BC - 4 * (v4 - v3) + -8 * (v4 - v3)))();
    }
  }
  else
  {
    nullsub_1();
  }
}


// ======================================================================

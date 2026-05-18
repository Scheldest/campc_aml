// ADDR: 0x2166cc
// SYMBOL: sub_2166CC
int __fastcall sub_2166CC(__int64 *a1, int a2, int a3)
{
  __int64 v3; // kr00_8

  v3 = *a1;
  if ( a3 - a2 <= (unsigned int)(HIDWORD(v3) - v3) )
    return sub_2166EE(a2, a3, v3);
  else
    return 0;
}


// ======================================================================

// ADDR: 0x17e348
// SYMBOL: sub_17E348
__int64 sub_17E348()
{
  if ( !byte_381BF8 )
  {
    gettimeofday(&stru_381BFC, 0);
    byte_381BF8 = 1;
  }
  gettimeofday(&stru_381C04, 0);
  return (stru_381C04.tv_sec - stru_381BFC.tv_sec) * (__int64)(int)&loc_F4240
       + stru_381C04.tv_usec
       - stru_381BFC.tv_usec;
}


// ======================================================================

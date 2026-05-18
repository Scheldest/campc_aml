// ADDR: 0x17e2e4
// SYMBOL: sub_17E2E4
int sub_17E2E4()
{
  if ( !byte_381BF8 )
  {
    gettimeofday(&stru_381BFC, 0);
    byte_381BF8 = 1;
  }
  gettimeofday(&stru_381C04, 0);
  return (stru_381C04.tv_usec - stru_381BFC.tv_usec) / 1000 + 1000 * (stru_381C04.tv_sec - stru_381BFC.tv_sec);
}


// ======================================================================

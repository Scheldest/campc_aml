// ADDR: 0xf9a54
// SYMBOL: sub_F9A54
int sub_F9A54()
{
  int8x16_t v0; // q8
  int i; // r0
  int8x16_t *v2; // r2
  unsigned __int64 v3; // d16

  v0 = 0uLL;
  for ( i = 2; i != 210; i += 16 )
  {
    v2 = (int8x16_t *)((char *)&byte_247288 + i);
    v0 = vaddq_s8(*v2, v0);
  }
  v3 = vadd_s8((int8x8_t)v0.n128_u64[0], *(int8x8_t *)&v0.n128_i8[8]).n64_u64[0];
  return (unsigned __int8)(BYTE4(v3) + v3 + BYTE1(v3) + BYTE2(v3) + BYTE3(v3) + BYTE5(v3) + BYTE6(v3) + HIBYTE(v3));
}


// ======================================================================

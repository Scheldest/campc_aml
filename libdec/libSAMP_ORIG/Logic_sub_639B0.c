// ADDR: 0x67814
// SYMBOL: sub_67814
int64x2_t *__fastcall sub_67814(int64x2_t *result)
{
  unsigned __int8 *v1; // r3
  int64x2_t v2; // q9
  int64x2_t v3; // q8
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // r2
  unsigned __int8 v6; // lr
  unsigned __int8 v7; // r1
  unsigned __int8 v8; // r4
  unsigned __int8 v9; // r1

  if ( result[1].n128_u8[7] )
  {
    v1 = &result[1].n128_u8[1];
    v2.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v2.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    v3 = veorq_s64(*result, v2);
    v4 = result[1].n128_u8[3];
    v5 = result[1].n128_u8[2] ^ 0x5A;
    v6 = result[1].n128_u8[4];
    result[1].n128_u8[7] ^= 0x5Au;
    v7 = result[1].n128_u8[6];
    result[1].n128_u8[2] = v5;
    v8 = result[1].n128_u8[5];
    result[1].n128_u8[3] = v4 ^ 0x5A;
    result[1].n128_u8[4] = v6 ^ 0x5A;
    result[1].n128_u8[5] = v8 ^ 0x5A;
    result[1].n128_u8[6] = v7 ^ 0x5A;
    *result++ = v3;
    v9 = result->n128_u8[0];
    *v1 ^= 0x5Au;
    result->n128_u8[0] = v9 ^ 0x5A;
  }
  return result;
}


// ======================================================================

// ADDR: 0x6abd4
// SYMBOL: sub_6ABD4
_BYTE *__fastcall sub_6ABD4(_BYTE *result, _BYTE *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[8] = a2[8];
  result[9] = a2[9];
  result[10] = a2[10];
  result[11] = a2[11];
  result[12] = a2[12];
  result[13] = a2[13];
  result[14] = a2[14];
  result[15] = a2[15];
  result[16] = a2[16];
  result[17] = a2[17];
  result[18] = a2[18];
  result[19] = a2[19];
  return result;
}


// ======================================================================
// ADDR: 0x6ac26
// SYMBOL: sub_6AC26
_BYTE *__fastcall sub_6AC26(_BYTE *result, _BYTE *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[8] = a2[8];
  result[9] = a2[9];
  result[10] = a2[10];
  result[11] = a2[11];
  result[12] = a2[12];
  result[13] = a2[13];
  result[14] = a2[14];
  result[15] = a2[15];
  result[16] = a2[16];
  result[17] = a2[17];
  result[18] = a2[18];
  result[19] = a2[19];
  result[20] = a2[20];
  return result;
}


// ======================================================================
// ADDR: 0x6ac92
// SYMBOL: sub_6AC92
_BYTE *__fastcall sub_6AC92(_BYTE *result, _BYTE *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[8] = a2[8];
  result[9] = a2[9];
  result[10] = a2[10];
  result[11] = a2[11];
  result[12] = a2[12];
  result[13] = a2[13];
  result[14] = a2[14];
  result[15] = a2[15];
  result[16] = a2[16];
  result[17] = a2[17];
  result[18] = a2[18];
  return result;
}


// ======================================================================
// ADDR: 0x6ae46
// SYMBOL: sub_6AE46
int64x2_t *__fastcall sub_6AE46(int64x2_t *result)
{
  int64x2_t v1; // q9
  unsigned __int8 *v2; // r3
  int64x2_t v3; // q8
  unsigned __int8 v4; // r2
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // r2

  if ( result[1].n128_u8[4] )
  {
    v1.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v1.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    v2 = &result[1].n128_u8[1];
    v3 = veorq_s64(*result, v1);
    v4 = result[1].n128_u8[2];
    v5 = result[1].n128_u8[3];
    result[1].n128_u8[4] ^= 0x5Au;
    result[1].n128_u8[2] = v4 ^ 0x5A;
    result[1].n128_u8[3] = v5 ^ 0x5A;
    *result++ = v3;
    v6 = result->n128_u8[0];
    *v2 ^= 0x5Au;
    result->n128_u8[0] = v6 ^ 0x5A;
  }
  return result;
}


// ======================================================================
// ADDR: 0x6ae8c
// SYMBOL: sub_6AE8C
int64x2_t *__fastcall sub_6AE8C(int64x2_t *result)
{
  int64x2_t v1; // q8
  unsigned __int8 *v2; // r3
  int64x2_t v3; // q8
  unsigned __int8 v4; // r2
  unsigned __int8 v5; // r1

  if ( result[1].n128_u8[2] )
  {
    v1.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v1.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    v2 = &result[1].n128_u8[1];
    v3 = veorq_s64(*result, v1);
    result[1].n128_u8[2] ^= 0x5Au;
    v4 = result[1].n128_u8[1];
    *result++ = v3;
    v5 = result->n128_u8[0];
    *v2 = v4 ^ 0x5A;
    result->n128_u8[0] = v5 ^ 0x5A;
  }
  return result;
}


// ======================================================================

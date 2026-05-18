// ADDR: 0x7c44c
// SYMBOL: sub_7C44C
float *__fastcall sub_7C44C(float *result, float *a2)
{
  float v2; // s10
  float v3; // s8

  v2 = a2[1];
  v3 = *a2;
  if ( v2 < result[10] )
    v2 = result[10];
  if ( *a2 < result[9] )
    v3 = result[9];
  if ( v2 > result[8] )
    v2 = result[8];
  if ( v3 > result[7] )
    v3 = result[7];
  result[5] = v3;
  result[6] = v2;
  return result;
}


// ======================================================================

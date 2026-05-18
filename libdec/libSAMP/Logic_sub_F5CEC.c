// ADDR: 0x108fb2
// SYMBOL: sub_108FB2
float *__fastcall sub_108FB2(float *a1, float *a2, float *a3)
{
  float v3; // s12
  float v4; // s14
  float v5; // s3
  float v6; // s8
  float v7; // s2
  float v8; // s4
  float v9; // s6
  float v10; // s0

  v3 = a3[1];
  v4 = a3[2];
  v5 = a2[9];
  v6 = v3 * a2[5];
  v7 = a2[1];
  v8 = a2[2];
  v9 = a2[6];
  *a1 = (float)((float)((float)(a2[4] * v3) + (float)(a2[8] * v4)) + (float)(*a2 * *a3)) + a2[12];
  v10 = *a3;
  a1[1] = (float)((float)(v6 + (float)(v5 * v4)) + (float)(v7 * *a3)) + a2[13];
  a1[2] = a2[14] + (float)((float)((float)(v9 * a3[1]) + (float)(a2[10] * v4)) + (float)(v8 * v10));
  return a2;
}


// ======================================================================

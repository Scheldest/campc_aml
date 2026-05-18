// ADDR: 0x108938
// SYMBOL: sub_108938
float __fastcall sub_108938(float *a1, float *a2)
{
  float v2; // s4

  v2 = a1[2] - a2[2];
  return sqrtf(
           (float)((float)((float)(a1[1] - a2[1]) * (float)(a1[1] - a2[1])) + (float)(v2 * v2))
         + (float)((float)(*a1 - *a2) * (float)(*a1 - *a2)));
}


// ======================================================================

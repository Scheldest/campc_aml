// ADDR: 0x16779c
// SYMBOL: sub_16779C
float *__fastcall sub_16779C(float *result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  float v4; // s0
  float v5; // s2
  int v6; // r2

  v1 = *(_DWORD *)(dword_381B58 + 6572);
  *(_QWORD *)result = *(_QWORD *)(v1 + 552);
  v2 = *(_DWORD *)(v1 + 448);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 12);
    v4 = *(float *)(v2 + 20);
    v5 = *(float *)(v2 + 24);
    v6 = *(_DWORD *)(v2 + 68);
    if ( v3 > -2 )
      ++v3;
    *result = (float)(*(float *)(v1 + 12) + (float)(v4 + (float)((float)(v5 - v4) * *(float *)(v6 + 28 * v3))))
            - *(float *)(v1 + 60);
  }
  return result;
}


// ======================================================================

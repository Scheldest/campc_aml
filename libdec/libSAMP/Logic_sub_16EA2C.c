// ADDR: 0x16e9b0
// SYMBOL: sub_16E9B0
int __fastcall sub_16E9B0(int a1, float a2, float a3)
{
  float v3; // s0
  int result; // r0
  int v5; // s2

  if ( a1 < 0 )
    return 0;
  v3 = *(float *)(dword_381B58 + 4 * a1 + 1112);
  if ( v3 == 0.0 )
    return 1;
  result = 0;
  if ( a3 > 0.0 )
  {
    v5 = (int)(float)((float)((float)(v3 - *(float *)(dword_381B58 + 24)) - a2) / a3);
    return ((int)(float)((float)(v3 - a2) / a3) - v5) & ~(((int)(float)((float)(v3 - a2) / a3) - v5) >> 31);
  }
  return result;
}


// ======================================================================

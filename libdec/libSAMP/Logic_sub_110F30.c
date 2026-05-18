// ADDR: 0x163e1c
// SYMBOL: sub_163E1C
float *__fastcall sub_163E1C(float *result, float *a2, float a3, float a4, float a5)
{
  float v5; // s2
  float v6; // s4

  v5 = a2[13] + (float)((float)((float)(a2[5] * a4) + (float)(a2[9] * a5)) + (float)(a2[1] * a3));
  v6 = a2[14] + (float)((float)((float)(a2[6] * a4) + (float)(a2[10] * a5)) + (float)(a2[2] * a3));
  *result = a2[12] + (float)((float)((float)(a2[4] * a4) + (float)(a2[8] * a5)) + (float)(*a2 * a3));
  result[1] = v5;
  result[2] = v6;
  return result;
}


// ======================================================================
// ADDR: 0x163ee4
// SYMBOL: sub_163EE4
float __fastcall sub_163EE4(int a1)
{
  int v1; // r1

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 )
    return atan2f(COERCE_FLOAT(*(_DWORD *)(v1 + 16) ^ 0x80000000), *(float *)(v1 + 20));
  else
    return *(float *)(a1 + 16);
}


// ======================================================================
// ADDR: 0x163f08
// SYMBOL: sub_163F08
int __fastcall sub_163F08(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 20);
  if ( result )
    return ((int (*)(void))(dword_23DF24 + 4517993))();
  *(_DWORD *)(a1 + 16) = a2;
  return result;
}


// ======================================================================

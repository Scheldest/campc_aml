// ADDR: 0x108894
// SYMBOL: sub_108894
unsigned __int16 *__fastcall sub_108894(unsigned __int16 *result, float a2, float a3, float a4)
{
  int v4; // r12
  float v5; // s6
  float v6; // s14
  float v7; // s1
  float v8; // s12
  float v9; // s14

  v4 = *(_DWORD *)(dword_23DF24 + 10770320);
  if ( v4 )
  {
    v5 = *(float *)&result;
    result = (unsigned __int16 *)(dword_23DF24 + 10752320);
    do
    {
      v6 = (float)((float)result[1] * 0.25) - a2;
      v7 = (float)((float)result[2] * 0.25) - a3;
      v8 = v6 * v6;
      v9 = (float)((float)*result * 0.25) - v5;
      if ( sqrtf((float)(v8 + (float)(v7 * v7)) + (float)(v9 * v9)) < a4 )
      {
        *((_DWORD *)result + 1) = 0;
        *(_DWORD *)result = 0;
        *((_DWORD *)result + 2) = 0;
      }
      result += 9;
      --v4;
    }
    while ( v4 );
  }
  return result;
}


// ======================================================================

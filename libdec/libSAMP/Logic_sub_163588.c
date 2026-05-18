// ADDR: 0x163444
// SYMBOL: sub_163444
int **__fastcall sub_163444(
        int **result,
        float a2,
        float a3,
        float a4,
        float a5,
        int a6,
        int a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14)
{
  float v15; // s2
  int v16; // r3
  float v17[6]; // [sp+20h] [bp-18h] BYREF

  v15 = a5;
  if ( *result )
  {
    v16 = **result;
    if ( v16 )
    {
      if ( a4 == 0.0 )
        a4 = (float)*(int *)(v16 + 12);
      if ( a5 == 0.0 )
        v15 = (float)*(int *)(v16 + 16);
    }
  }
  if ( a4 != 0.0 )
  {
    v17[1] = a3;
    v17[0] = a2;
    v17[3] = v15 + a3;
    v17[2] = a4 + a2;
    return (int **)sub_163504((int)result, (int)v17, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  }
  return result;
}


// ======================================================================

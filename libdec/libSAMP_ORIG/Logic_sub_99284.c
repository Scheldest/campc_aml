// ADDR: 0x99114
// SYMBOL: sub_99114
float __fastcall sub_99114(int a1, int a2)
{
  int v2; // r0
  float v3; // s2
  float v4; // s0
  float result; // r0
  float v6; // s0
  float v7; // s6
  float v8; // s4
  float v9; // s6
  int v10; // r0

  if ( !a2 )
    return *(float *)(dword_1ACF68 + 4 * a1 + 764);
  v2 = dword_1ACF68 + 4 * a1;
  v3 = *(float *)(v2 + 5208);
  if ( a2 == 2 && v3 < 0.0 )
  {
    v4 = 0.0;
    if ( *(float *)(v2 + 5296) >= 0.0 )
      return 1.0;
    return v4;
  }
  else if ( v3 >= 0.0 )
  {
    switch ( a2 )
    {
      case 1:
        v6 = 0.0;
        if ( v3 == 0.0 )
          return 1.0;
        return v6;
      case 3:
        if ( v3 == 0.0 )
          return 1.0;
        v7 = 0.8;
        v8 = *(float *)(dword_1ACF68 + 136) * 0.8;
        if ( v3 <= v8 )
          return 0.0;
        goto LABEL_24;
      case 4:
        if ( v3 == 0.0 )
          return 1.0;
        v8 = *(float *)(dword_1ACF68 + 136);
        if ( v3 <= v8 )
          return 0.0;
        v9 = *(float *)(dword_1ACF68 + 140) + *(float *)(dword_1ACF68 + 140);
        goto LABEL_25;
      case 5:
        if ( v3 == 0.0 )
          return 1.0;
        v8 = *(float *)(dword_1ACF68 + 136) * 0.8;
        if ( v3 <= v8 )
          return 0.0;
        v7 = 0.3;
LABEL_24:
        v9 = *(float *)(dword_1ACF68 + 140) * v7;
LABEL_25:
        if ( v9 <= 0.0 )
          return 0.0;
        v10 = (int)(float)((float)(v3 - v8) / v9)
            - (int)(float)((float)((float)(v3 - *(float *)(dword_1ACF68 + 24)) - v8) / v9);
        result = (float)(v10 & ~(v10 >> 31));
        break;
      default:
        return 0.0;
    }
  }
  else
  {
    return 0.0;
  }
  return result;
}


// ======================================================================

// ADDR: 0xc2d30
// SYMBOL: sub_C2D30
int __fastcall sub_C2D30(int result, signed int a2, signed int a3)
{
  int v3; // r8
  bool v4; // zf
  unsigned int v5; // r3
  unsigned int v6; // r5
  int v7; // r4
  int v8; // r6
  int v9; // r1
  int v10; // r5
  int v11; // r0
  int v12; // r0
  int v13; // r1

  v3 = result;
  LOWORD(result) = 0;
  if ( v3 )
  {
    v4 = a2 == 0;
    if ( a2 )
      v4 = a3 == 0;
    if ( !v4 )
    {
      v5 = __clz(a2);
      v6 = __clz(a3);
      v7 = a2 << (v5 - 17);
      if ( (int)(31 - v5) > 14 )
        v7 = a2 >> (17 - v5);
      v8 = a3 << (v6 - 17);
      if ( (int)(31 - v6) > 14 )
        v8 = a3 >> (17 - v6);
      v9 = (__int16)v8 * (__int16)v7;
      v10 = 34 - (v6 + v5);
      v11 = v9 >> 14;
      if ( (v10 & 1) != 0 )
      {
        if ( v11 >= 0x8000 )
        {
          ++v10;
          v11 = v9 >> 15;
        }
        else
        {
          --v10;
          v11 *= 2;
        }
      }
      v12 = j_celt_rsqrt_norm(v11);
      v13 = 2 * SHIWORD(v3) * (__int16)v12 + (((unsigned __int16)v3 * v12) >> 15);
      result = v13 << (1 - (v10 >> 1));
      if ( v10 >> 1 > 1 )
        result = v13 >> ((v10 >> 1) - 1);
      if ( result >= 0x7FFF )
        LOWORD(result) = 0x7FFF;
    }
  }
  return (__int16)result;
}


// ======================================================================

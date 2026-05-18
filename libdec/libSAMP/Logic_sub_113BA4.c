// ADDR: 0x113e38
// SYMBOL: sub_113E38
int sub_113E38(int a1, int a2, int a3, const char *a4, ...)
{
  va_list va; // [sp+18h] [bp+0h] BYREF

  va_start(va, a4);
  return _vsnprintf_chk(a1, a3, 0, a2, a4, va);
}


// ======================================================================
// ADDR: 0x163228
// SYMBOL: sub_163228
int *__fastcall sub_163228(int *a1, float a2, float a3, float a4, float a5, float a6, int a7)
{
  int *result; // r0
  float v9; // s2
  float v10; // s0
  float v11; // s10
  int v14; // s2
  int v15; // s0
  int v16; // r4
  double v17; // d11
  double v18; // d9
  double v19; // d10
  double *v20; // r0
  float v21; // s0
  float v22; // s2
  float v23; // s4
  float v24; // s8
  float v25; // s0
  float v26; // s2
  float v27; // s6
  float v28; // s10
  int v29; // s12
  int v30; // s14
  float v31; // s2
  float v32; // s10
  double v33; // [sp+18h] [bp-90h] BYREF
  double v34[2]; // [sp+20h] [bp-88h] BYREF
  float v35; // [sp+30h] [bp-78h]
  float v36; // [sp+34h] [bp-74h]
  float v37; // [sp+38h] [bp-70h]
  float v38; // [sp+3Ch] [bp-6Ch]
  float v39; // [sp+40h] [bp-68h]
  float v40; // [sp+44h] [bp-64h]
  int v41; // [sp+48h] [bp-60h]
  int v42; // [sp+4Ch] [bp-5Ch]

  result = (int *)*a1;
  v9 = a5;
  v10 = a4;
  if ( result )
  {
    result = (int *)*result;
    if ( result )
    {
      if ( a4 == 0.0 )
        v10 = (float)result[3];
      if ( a5 == 0.0 )
        v9 = (float)result[4];
    }
  }
  if ( v10 != 0.0 )
  {
    v11 = 1.0;
    if ( a6 != 0.0 )
      v11 = 0.71;
    v14 = (int)(float)(v11 * v9);
    v15 = (int)(float)(v11 * v10);
    if ( a6 == 0.0 )
    {
      v31 = (float)v14 * 0.5;
      v32 = (float)v15 * 0.5;
      v27 = v31 + a3;
      v26 = a3 - v31;
      v25 = v32 + a2;
      v23 = a2 - v32;
      v29 = LODWORD(v27);
      v24 = v26;
      v28 = v32 + a2;
      v30 = LODWORD(v23);
    }
    else
    {
      v16 = 0;
      v17 = 0.0;
      v18 = (double)v14;
      v19 = (double)v15;
      do
      {
        sincos(
          COERCE_UNSIGNED_INT64(a6 + -0.785398163 + v17 * 1.57079633),
          HIDWORD(COERCE_UNSIGNED_INT64(a6 + -0.785398163 + v17 * 1.57079633)),
          v34,
          &v33);
        v20 = &v34[++v16];
        v17 = v17 + 1.0;
        v21 = a3 - v33 * v18;
        v22 = a2 + v34[0] * v19;
        *((float *)v20 + 2) = v22;
        *((float *)v20 + 3) = v21;
      }
      while ( v16 != 4 );
      v23 = v35;
      v24 = v36;
      v25 = v37;
      v26 = v38;
      v27 = v40;
      v28 = v39;
      v29 = v42;
      v30 = v41;
    }
    return (int *)sub_1633DC((int)a1, v30, v29, SLODWORD(v28), v27, v23, v24, v25, v26, a7);
  }
  return result;
}


// ======================================================================

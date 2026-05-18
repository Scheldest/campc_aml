
// Address: 0x197ee4
// Original: j__ZN7CCurves14CalcCurvePointERK7CVectorS2_S2_S2_fiRS0_S3_
// Demangled: CCurves::CalcCurvePoint(CVector const&,CVector const&,CVector const&,CVector const&,float,int,CVector&,CVector&)
// attributes: thunk
int __fastcall CCurves::CalcCurvePoint(
        CCurves *this,
        const CVector *a2,
        const CVector *a3,
        const CVector *a4,
        const CVector *a5,
        float a6,
        int a7,
        CVector *a8,
        CVector *a9)
{
  return _ZN7CCurves14CalcCurvePointERK7CVectorS2_S2_S2_fiRS0_S3_(this, a2, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================

// Address: 0x19c60c
// Original: j__ZN7CCurves20CalcSpeedScaleFactorERK7CVectorS2_ffff
// Demangled: CCurves::CalcSpeedScaleFactor(CVector const&,CVector const&,float,float,float,float)
// attributes: thunk
int __fastcall CCurves::CalcSpeedScaleFactor(
        CCurves *this,
        const CVector *a2,
        const CVector *a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  return _ZN7CCurves20CalcSpeedScaleFactorERK7CVectorS2_ffff(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x302e48
// Original: _ZN7CCurves10TestCurvesEv
// Demangled: CCurves::TestCurves(void)
void __fastcall CCurves::TestCurves(CCurves *this)
{
  ;
}


// ============================================================

// Address: 0x302e4a
// Original: _ZN7CCurves27DistForLineToCrossOtherLineEffffffff
// Demangled: CCurves::DistForLineToCrossOtherLine(float,float,float,float,float,float,float,float)
float __fastcall CCurves::DistForLineToCrossOtherLine(
        CCurves *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9)
{
  float v9; // s4

  v9 = (float)(a3 * a8) - (float)(a4 * a7);
  if ( v9 == 0.0 )
    return -1.0;
  else
    return (float)-(float)((float)((float)(*(float *)&this - a5) * a8) - (float)((float)(a2 - a6) * a7)) / v9;
}


// ============================================================

// Address: 0x302eac
// Original: _ZN7CCurves24CalcSpeedVariationInBendERK7CVectorS2_ffff
// Demangled: CCurves::CalcSpeedVariationInBend(CVector const&,CVector const&,float,float,float,float)
int __fastcall CCurves::CalcSpeedVariationInBend(
        CCurves *this,
        const CVector *a2,
        const CVector *a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  float v7; // s4
  float v8; // s0
  float v9; // s0
  float v11; // [sp+8h] [bp-8h]

  v7 = (float)(*(float *)&a3 * a5) + (float)(a4 * a6);
  if ( v7 <= 0.0 )
  {
    v9 = 0.33333;
  }
  else
  {
    if ( v7 <= 0.7 )
      v8 = (float)(v7 / -0.7) + 1.0;
    else
      v8 = COERCE_FLOAT(
             CCollision::DistToMathematicalLine2D(
               *(CCollision **)a2,
               *((float *)a2 + 1),
               a5,
               a6,
               *(float *)this,
               *((float *)this + 1),
               v11))
         / sqrtf(
             (float)((float)(*(float *)this - *(float *)a2) * (float)(*(float *)this - *(float *)a2))
           + (float)((float)(*((float *)this + 1) - *((float *)a2 + 1))
                   * (float)(*((float *)this + 1) - *((float *)a2 + 1))));
    v9 = v8 * 0.33333;
  }
  return LODWORD(v9);
}


// ============================================================

// Address: 0x302f70
// Original: _ZN7CCurves20CalcSpeedScaleFactorERK7CVectorS2_ffff
// Demangled: CCurves::CalcSpeedScaleFactor(CVector const&,CVector const&,float,float,float,float)
float __fastcall CCurves::CalcSpeedScaleFactor(
        CCurves *this,
        const CVector *a2,
        const CVector *a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  float32x2_t v7; // d5
  float32x2_t v8; // d6
  float v13; // s0
  float v14; // s0
  float v15; // s0
  float v16; // s12
  float v17; // s2
  float v18; // s4
  float v19; // s6
  float v20; // s8
  float v21; // s0
  float v22; // s2
  float v23; // s4
  float32x2_t v24; // d0
  float v25; // s0
  float v27; // [sp+8h] [bp-28h]

  v13 = (float)(*(float *)&a3 * a5) + (float)(a4 * a6);
  if ( v13 <= 0.0 )
  {
    v15 = 0.33333;
  }
  else
  {
    if ( v13 <= 0.7 )
      v14 = (float)(v13 / -0.7) + 1.0;
    else
      v14 = COERCE_FLOAT(
              CCollision::DistToMathematicalLine2D(
                *(CCollision **)a2,
                *((float *)a2 + 1),
                a5,
                a6,
                *(float *)this,
                *((float *)this + 1),
                v27))
          / sqrtf(
              (float)((float)(*(float *)this - *(float *)a2) * (float)(*(float *)this - *(float *)a2))
            + (float)((float)(*((float *)this + 1) - *((float *)a2 + 1))
                    * (float)(*((float *)this + 1) - *((float *)a2 + 1))));
    v15 = v14 * 0.33333;
  }
  v16 = (float)(*(float *)&a3 * a6) - (float)(a4 * a5);
  if ( v16 == 0.0 )
  {
    v17 = *(float *)a2;
    v18 = *((float *)a2 + 1);
    v19 = *(float *)this;
    v20 = *((float *)this + 1);
  }
  else
  {
    v17 = *(float *)a2;
    v19 = *(float *)this;
    v18 = *((float *)a2 + 1);
    v20 = *((float *)this + 1);
    v7.n64_f32[0] = (float)-(float)((float)((float)(*(float *)this - *(float *)a2) * a6)
                                  - (float)((float)(v20 - v18) * a5))
                  / v16;
    if ( v7.n64_f32[0] > 0.0 )
    {
      v24.n64_f32[1] = (float)(v17 - v19) * a4;
      v8.n64_f32[0] = (float)-(float)(v24.n64_f32[1] - (float)((float)(v18 - v20) * *(float *)&a3)) / v16;
      if ( v8.n64_f32[0] > 0.0 )
      {
        v24.n64_u32[0] = 5.0;
        v25 = vmin_f32(vmin_f32(v7, v8), v24).n64_f32[0];
        v22 = v8.n64_f32[0] - v25;
        v23 = v7.n64_f32[0] - v25;
        v21 = v25 + v25;
        return v21 + (float)(v22 + v23);
      }
    }
  }
  v21 = sqrtf((float)((float)(v19 - v17) * (float)(v19 - v17)) + (float)((float)(v20 - v18) * (float)(v20 - v18)))
      / (float)(1.0 - v15);
  v22 = 0.0;
  v23 = 0.0;
  return v21 + (float)(v22 + v23);
}


// ============================================================

// Address: 0x303110
// Original: _ZN7CCurves14CalcCurvePointERK7CVectorS2_S2_S2_fiRS0_S3_
// Demangled: CCurves::CalcCurvePoint(CVector const&,CVector const&,CVector const&,CVector const&,float,int,CVector&,CVector&)
int __fastcall CCurves::CalcCurvePoint(
        CCurves *this,
        const CVector *a2,
        const CVector *a3,
        const CVector *a4,
        const CVector *a5,
        float a6,
        float *a7,
        CVector *a8,
        CVector *a9)
{
  float32x2_t v9; // d0
  float32x2_t v10; // d1
  float32x2_t v11; // d2
  float32x2_t v12; // d3
  float32x2_t v13; // d9
  float32x2_t v14; // d10
  float v17; // s22
  float v18; // s26
  float v20; // s24
  float v22; // s28
  float v23; // s0
  float v24; // s16
  float v25; // r0
  float v26; // s0
  float v27; // s0
  float v28; // r0
  float v29; // s2
  float v30; // s23
  float v31; // s25
  float v32; // s27
  float v33; // s29
  float v34; // s30
  float v35; // s31
  float v36; // s0
  float v37; // s2
  float v38; // s18
  float v39; // r0
  float v40; // s4
  float v41; // s20
  float v42; // s16
  float v43; // r4
  float v44; // s0
  float v45; // s4
  float v46; // s2
  float v47; // s6
  float v48; // s10
  float v49; // s14
  float v50; // s8
  float v51; // s12
  float v52; // s0
  float v53; // s2
  float v54; // s4
  float v55; // s6
  float v56; // s0
  int v57; // s6
  int result; // r0
  float v59; // s0
  float v60; // s4
  float v61; // s6
  float v62; // s2
  float v63; // s2
  float v64; // s8
  float v65; // s6
  float v66; // s4
  float v67; // s8
  float v68; // s10
  float v69; // s4
  float v70; // s12
  float v71; // s14
  float v72; // s6
  float v73; // s1
  float v74; // s2
  float v75; // s4
  float v76; // s6
  float v77; // s8
  float v78; // [sp+8h] [bp-60h]

  v17 = *(float *)a4;
  v14.n64_u32[0] = 1.0;
  v18 = *(float *)a3;
  v20 = *((float *)a4 + 1);
  v22 = *((float *)a3 + 1);
  v13.n64_u32[0] = 0;
  v23 = (float)(*(float *)a3 * *(float *)a4) + (float)(v22 * v20);
  v10.n64_u32[0] = (unsigned __int32)a5;
  LODWORD(v24) = vmin_f32(vmax_f32(v10, v13), v14).n64_u32[0];
  if ( v23 <= 0.0 )
  {
    v27 = 0.33333;
  }
  else
  {
    if ( v23 <= 0.7 )
    {
      v26 = (float)(v23 / -0.7) + 1.0;
    }
    else
    {
      v25 = COERCE_FLOAT(
              CCollision::DistToMathematicalLine2D(
                *(CCollision **)a2,
                *((float *)a2 + 1),
                *(float *)a4,
                *((float *)a4 + 1),
                *(float *)this,
                *((float *)this + 1),
                v78));
      v17 = *(float *)a4;
      v20 = *((float *)a4 + 1);
      v18 = *(float *)a3;
      v22 = *((float *)a3 + 1);
      v26 = v25
          / sqrtf(
              (float)((float)(*(float *)this - *(float *)a2) * (float)(*(float *)this - *(float *)a2))
            + (float)((float)(*((float *)this + 1) - *((float *)a2 + 1))
                    * (float)(*((float *)this + 1) - *((float *)a2 + 1))));
    }
    v27 = v26 * 0.33333;
  }
  v28 = a6;
  v29 = (float)(v18 * v20) - (float)(v22 * v17);
  if ( v29 == 0.0 )
  {
    v30 = *(float *)a2;
    v31 = *((float *)a2 + 1);
    v32 = *(float *)this;
    v33 = *((float *)this + 1);
  }
  else
  {
    v30 = *(float *)a2;
    v32 = *(float *)this;
    v31 = *((float *)a2 + 1);
    v33 = *((float *)this + 1);
    v11.n64_f32[0] = (float)-(float)((float)(v20 * (float)(*(float *)this - *(float *)a2))
                                   - (float)(v17 * (float)(v33 - v31)))
                   / v29;
    if ( v11.n64_f32[0] > 0.0 )
    {
      v12.n64_f32[0] = (float)-(float)((float)(v22 * (float)(v30 - v32)) - (float)(v18 * (float)(v31 - v33))) / v29;
      if ( v12.n64_f32[0] > 0.0 )
      {
        v9.n64_u32[0] = 5.0;
        v63 = vmin_f32(vmin_f32(v11, v12), v9).n64_f32[0];
        v56 = v11.n64_f32[0] - v63;
        v34 = v63 + v63;
        v13.n64_f32[0] = v12.n64_f32[0] - v63;
        v64 = (float)(v11.n64_f32[0] - v63) + (float)(v63 + v63);
        v65 = (float)(v12.n64_f32[0] - v63) + v64;
        v66 = v24 * v65;
        if ( (float)(v24 * v65) >= v56 )
        {
          if ( v66 >= v64 )
          {
            v74 = v66 - v65;
            v75 = (float)(v66 - v65) * *((float *)a4 + 2);
            v76 = v74 * v20;
            v77 = v74 * v17;
            v53 = v75 + *((float *)a2 + 2);
            v54 = v76 + v31;
            v55 = v77 + v30;
          }
          else
          {
            v69 = (float)(v66 - v56) / v34;
            v70 = (float)(1.0 - v69) * (float)((float)(v63 * (float)(v69 * v22)) + (float)((float)(v56 * v22) + v33));
            v71 = v69
                * (float)((float)(v31 - (float)(v13.n64_f32[0] * v20)) - (float)(v63 * (float)((float)(1.0 - v69) * v20)));
            v72 = (float)(1.0 - v69) * (float)((float)(v63 * (float)(v69 * v18)) + (float)((float)(v56 * v18) + v32));
            v73 = v69
                * (float)((float)(v30 - (float)(v13.n64_f32[0] * v17)) - (float)(v63 * (float)((float)(1.0 - v69) * v17)));
            v53 = (float)((float)(1.0 - v69)
                        * (float)((float)(v63 * (float)(v69 * *((float *)a3 + 2)))
                                + (float)((float)(v56 * *((float *)a3 + 2)) + *((float *)this + 2))))
                + (float)(v69
                        * (float)((float)(*((float *)a2 + 2) - (float)(v13.n64_f32[0] * *((float *)a4 + 2)))
                                - (float)(v63 * (float)((float)(1.0 - v69) * *((float *)a4 + 2)))));
            v54 = v70 + v71;
            v55 = v72 + v73;
          }
        }
        else
        {
          v67 = v66 * v18;
          v68 = v66 * *((float *)a3 + 2);
          v54 = (float)(v66 * v22) + v33;
          v55 = v67 + v32;
          v53 = v68 + *((float *)this + 2);
        }
        goto LABEL_13;
      }
    }
  }
  v34 = sqrtf((float)((float)(v32 - v30) * (float)(v32 - v30)) + (float)((float)(v33 - v31) * (float)(v33 - v31)));
  v35 = v34 / (float)(1.0 - v27);
  if ( v35 >= 0.00001 )
  {
    v38 = v24 * v35;
    v39 = (float)((float)(v24 * v35) * 6.2832) / v35;
    v40 = (float)((float)(v27 * -2.0) + 1.0) + 1.0;
    v41 = v24;
    v42 = v27 * (float)(v35 / 6.2832);
    v43 = sinf(v39);
    v44 = cosf((float)(v38 / v35) * 3.1416);
    v28 = a6;
    v45 = (float)(v40 * 0.5) * v38;
    v46 = v42 * v43;
    v24 = v41;
    v14.n64_u32[0] = 1.0;
    v36 = 0.5 - (float)(v44 * 0.5);
    v13.n64_u32[0] = 0;
    v37 = v45 + v46;
  }
  else
  {
    v36 = 0.5;
    v37 = 0.0;
  }
  v47 = (float)(v14.n64_f32[0] - v36) * (float)((float)(v37 * *((float *)a3 + 2)) + *((float *)this + 2));
  v48 = (float)(v14.n64_f32[0] - v36) * (float)((float)(v37 * v22) + v33);
  v49 = (float)(v14.n64_f32[0] - v36) * (float)((float)(v37 * v18) + v32);
  v50 = v36 * (float)((float)((float)(v37 - v34) * *((float *)a4 + 2)) + *((float *)a2 + 2));
  v51 = v36 * (float)((float)((float)(v37 - v34) * v20) + v31);
  v52 = v36 * (float)((float)((float)(v37 - v34) * v17) + v30);
  v53 = v47 + v50;
  v54 = v48 + v51;
  v55 = v49 + v52;
  v56 = 0.0;
LABEL_13:
  *a7 = v55;
  a7[1] = v54;
  a7[2] = v53;
  v57 = LODWORD(v28);
  result = 0;
  v59 = v13.n64_f32[0] + (float)(v34 + v56);
  v60 = (float)v57 * 0.001;
  *(float *)a8 = (float)(v59
                       * (float)((float)((float)(v14.n64_f32[0] - v24) * *(float *)a3) + (float)(v24 * *(float *)a4)))
               / v60;
  v61 = *((float *)a3 + 1);
  v62 = v24 * *((float *)a4 + 1);
  *((_DWORD *)a8 + 2) = 0;
  *((float *)a8 + 1) = (float)(v59 * (float)((float)((float)(v14.n64_f32[0] - v24) * v61) + v62)) / v60;
  return result;
}


// ============================================================

// Address: 0x30357c
// Original: _ZN7CCurves17CalcCorrectedDistEfffPf
// Demangled: CCurves::CalcCorrectedDist(float,float,float,float *)
float __fastcall CCurves::CalcCorrectedDist(CCurves *this, float a2, float a3, float *a4, float *a5)
{
  float v7; // s2
  float v8; // s0
  float v10; // s22
  float v11; // s24
  float v12; // r5
  float result; // r0

  if ( a2 >= 0.00001 )
  {
    v10 = (float)(a2 / 6.2832) * a3;
    v11 = (float)((float)((float)(a3 * -2.0) + 1.0) + 1.0) * 0.5;
    v12 = sinf((float)(*(float *)&this * 6.2832) / a2);
    v8 = 0.5 - (float)(cosf((float)(*(float *)&this / a2) * 3.1416) * 0.5);
    v7 = (float)(v11 * *(float *)&this) + (float)(v10 * v12);
  }
  else
  {
    v7 = 0.0;
    v8 = 0.5;
  }
  result = v7;
  *a4 = v8;
  return result;
}


// ============================================================

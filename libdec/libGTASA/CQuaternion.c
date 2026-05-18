
// Address: 0x18c620
// Original: j__ZNK11CQuaternion3GetEP11RwMatrixTag
// Demangled: CQuaternion::Get(RwMatrixTag *)
// attributes: thunk
int CQuaternion::Get()
{
  return _ZNK11CQuaternion3GetEP11RwMatrixTag();
}


// ============================================================

// Address: 0x19462c
// Original: j__ZN11CQuaternion5SlerpERKS_S1_fff
// Demangled: CQuaternion::Slerp(CQuaternion const&,CQuaternion const&,float,float,float)
// attributes: thunk
int __fastcall CQuaternion::Slerp(
        CQuaternion *this,
        const CQuaternion *a2,
        const CQuaternion *a3,
        float a4,
        float a5,
        float a6)
{
  return _ZN11CQuaternion5SlerpERKS_S1_fff(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19d064
// Original: j__ZN11CQuaternion3SetERK11RwMatrixTag
// Demangled: CQuaternion::Set(RwMatrixTag const&)
// attributes: thunk
int CQuaternion::Set()
{
  return _ZN11CQuaternion3SetERK11RwMatrixTag();
}


// ============================================================

// Address: 0x19e560
// Original: j__ZN11CQuaternion3SetEP5RwV3df
// Demangled: CQuaternion::Set(RwV3d *,float)
// attributes: thunk
int CQuaternion::Set()
{
  return _ZN11CQuaternion3SetEP5RwV3df();
}


// ============================================================

// Address: 0x44ffb0
// Original: _ZN11CQuaternion3SetERK11RwMatrixTag
// Demangled: CQuaternion::Set(RwMatrixTag const&)
float *__fastcall CQuaternion::Set(float *result, float *a2)
{
  float v2; // s2
  float v3; // s4
  float v4; // s0
  float v5; // s6
  float v6; // s6
  float v7; // s6
  float v8; // s0
  float v9; // s0
  float v10; // s4
  float v11; // s0
  float v12; // s0
  float v13; // s0

  v2 = *a2;
  v3 = a2[5];
  v4 = a2[10];
  v5 = (float)(*a2 + v3) + v4;
  if ( v5 >= 0.0 )
  {
    v9 = sqrtf(v5 + 1.0);
    v10 = 0.5 / v9;
    result[3] = v9 * 0.5;
    *result = (float)(0.5 / v9) * (float)(a2[6] - a2[9]);
    result[1] = (float)(0.5 / v9) * (float)(a2[8] - a2[2]);
    v11 = a2[1] - a2[4];
  }
  else
  {
    v6 = (float)(v2 - v3) - v4;
    if ( v6 >= 0.0 )
    {
      v12 = sqrtf(v6 + 1.0);
      *result = v12 * 0.5;
      result[1] = (float)(0.5 / v12) * (float)(a2[4] + a2[1]);
      result[2] = (float)(0.5 / v12) * (float)(a2[8] + a2[2]);
      result[3] = (float)(0.5 / v12) * (float)(a2[6] - a2[9]);
      return result;
    }
    v7 = (float)(v3 - v2) - v4;
    if ( v7 < 0.0 )
    {
      v8 = sqrtf((float)((float)((float)-v2 - v3) + v4) + 1.0);
      result[2] = v8 * 0.5;
      result[3] = (float)(0.5 / v8) * (float)(a2[1] - a2[4]);
      *result = (float)(0.5 / v8) * (float)(a2[8] + a2[2]);
      result[1] = (float)(0.5 / v8) * (float)(a2[9] + a2[6]);
      return result;
    }
    v13 = sqrtf(v7 + 1.0);
    v10 = 0.5 / v13;
    result[1] = v13 * 0.5;
    result[3] = (float)(0.5 / v13) * (float)(a2[8] - a2[2]);
    *result = (float)(0.5 / v13) * (float)(a2[4] - a2[1]);
    v11 = a2[9] + a2[6];
  }
  result[2] = v10 * v11;
  return result;
}


// ============================================================

// Address: 0x450160
// Original: _ZN11CQuaternion3SetEfff
// Demangled: CQuaternion::Set(float,float,float)
float __fastcall CQuaternion::Set(CQuaternion *this, float a2, float a3, float a4)
{
  float v7; // r5
  float v8; // r9
  float v9; // r6
  float v10; // r10
  float v11; // r5
  float v12; // s16
  float v13; // s24
  float v14; // s28
  float v15; // s16
  float result; // r0

  v7 = a2 * 0.5;
  v8 = cosf(a2 * 0.5);
  v9 = a3 * 0.5;
  v10 = cosf(v9);
  v11 = sinf(v7);
  v12 = sinf(v9);
  v13 = v11 * v12;
  v14 = cosf(a4 * 0.5);
  v15 = v8 * v12;
  result = sinf(a4 * 0.5);
  *(float *)this = (float)((float)(v8 * v10) * result) - (float)(v14 * v13);
  *((float *)this + 1) = (float)(v14 * (float)(v10 * v11)) + (float)(result * v15);
  *((float *)this + 2) = (float)(v14 * v15) - (float)((float)(v10 * v11) * result);
  *((float *)this + 3) = (float)(v14 * (float)(v8 * v10)) + (float)(result * v13);
  return result;
}


// ============================================================

// Address: 0x450236
// Original: _ZN11CQuaternion3SetEP5RwV3df
// Demangled: CQuaternion::Set(RwV3d *,float)
float __fastcall CQuaternion::Set(float *a1, float *a2, float a3)
{
  float v5; // r6
  float v6; // s16
  float result; // r0
  float v8; // s0

  v5 = a3 * 0.5;
  v6 = sinf(a3 * 0.5);
  *a1 = v6 * *a2;
  a1[1] = v6 * a2[1];
  result = cosf(v5);
  v8 = a2[2];
  a1[3] = result;
  a1[2] = v6 * v8;
  return result;
}


// ============================================================

// Address: 0x450296
// Original: _ZNK11CQuaternion3GetEP11RwMatrixTag
// Demangled: CQuaternion::Get(RwMatrixTag *)
float *__fastcall CQuaternion::Get(float *result, float *a2)
{
  float v2; // s0
  float v3; // s2
  float v4; // s4
  float v5; // s6
  float v6; // s8
  float v7; // s5
  float v8; // s14
  float v9; // s4
  float v10; // s3
  float v11; // s1
  float v12; // s10
  float v13; // s6
  float v14; // s0
  float v15; // s2

  v2 = *result;
  v3 = result[1];
  v4 = result[2];
  v5 = result[3];
  v6 = v4 + v4;
  v7 = v2 * (float)(v2 + v2);
  v8 = v3 * (float)(v3 + v3);
  v9 = v4 * (float)(v4 + v4);
  v10 = *result * (float)(v3 + v3);
  v11 = v5 * v6;
  v12 = (float)(v3 + v3) * v5;
  v13 = (float)(v2 + v2) * v5;
  v14 = *result * v6;
  v15 = v3 * v6;
  *a2 = 1.0 - (float)(v8 + v9);
  a2[1] = v10 + v11;
  a2[2] = v14 - v12;
  a2[4] = v10 - v11;
  a2[5] = 1.0 - (float)(v7 + v9);
  a2[6] = v15 + v13;
  a2[8] = v14 + v12;
  a2[9] = v15 - v13;
  a2[10] = 1.0 - (float)(v7 + v8);
  return result;
}


// ============================================================

// Address: 0x450330
// Original: _ZNK11CQuaternion3GetEPfS0_S0_
// Demangled: CQuaternion::Get(float *,float *,float *)
float __fastcall CQuaternion::Get(CQuaternion *this, float *a2, float *a3, float *a4)
{
  float v4; // s18
  float v5; // s0
  float v7; // s20
  float v8; // s24
  float v9; // s22
  float v12; // s30
  float v13; // s17
  float v14; // s19
  float v15; // r0
  float v16; // s27
  float v17; // r5
  float v18; // s29
  float v19; // s26
  float v20; // s0
  float result; // r0
  float v22; // s0

  v4 = *(float *)this;
  v5 = *((float *)this + 2);
  v7 = *((float *)this + 1);
  v8 = v5 + v5;
  v9 = *((float *)this + 3);
  v12 = v5 * (float)(v5 + v5);
  v13 = v9 * (float)(v5 + v5);
  v14 = *(float *)this * (float)(v7 + v7);
  v15 = atan2f(v14 + v13, 1.0 - (float)((float)(v4 * (float)(v4 + v4)) + v12));
  v16 = v15;
  if ( v15 < 0.0 )
    v16 = v15 + 6.2832;
  v17 = sinf(v16);
  v18 = cosf(v16);
  *a4 = v16;
  v19 = (float)(v4 + v4) * v9;
  v20 = atan2f(
          -(float)((float)(v7 * v8) - v19),
          (float)((float)(v14 + (float)(v9 * (float)(v5 + v5))) * v17)
        + (float)((float)(1.0 - (float)((float)(v4 * (float)(v4 + v4)) + v12)) * v18));
  if ( v20 < 0.0 )
    v20 = v20 + 6.2832;
  *a2 = v20;
  result = atan2f(
             -(float)((float)((float)((float)(v4 * v8) - (float)((float)(v7 + v7) * v9)) * v18)
                    - (float)((float)((float)(v7 * v8) + v19) * v17)),
             (float)((float)(1.0 - (float)((float)(v7 * (float)(v7 + v7)) + v12)) * v18)
           - (float)((float)(v14 - v13) * v17));
  v22 = result;
  if ( result < 0.0 )
    v22 = result + 6.2832;
  *a3 = v22;
  return result;
}


// ============================================================

// Address: 0x450478
// Original: _ZNK11CQuaternion3GetEP5RwV3dPf
// Demangled: CQuaternion::Get(RwV3d *,float *)
float __fastcall CQuaternion::Get(float *a1, float *a2, float *a3)
{
  float v6; // r4
  float result; // r0

  v6 = acosf(a1[3] + a1[3]);
  result = sinf(v6);
  *a3 = v6;
  *a2 = *a1 * (float)(1.0 / result);
  a2[1] = (float)(1.0 / result) * a1[1];
  a2[2] = (float)(1.0 / result) * a1[2];
  return result;
}


// ============================================================

// Address: 0x4504d6
// Original: _ZN11CQuaternion8MultiplyERKS_S1_
// Demangled: CQuaternion::Multiply(CQuaternion const&,CQuaternion const&)
float *__fastcall CQuaternion::Multiply(float *this, const CQuaternion *a2, const CQuaternion *a3)
{
  float v3; // s0
  float v4; // s2
  float v5; // s4

  v3 = (float)(*((float *)a2 + 1) * *((float *)a3 + 2)) - (float)(*((float *)a3 + 1) * *((float *)a2 + 2));
  *this = v3;
  v4 = (float)(*((float *)a2 + 2) * *(float *)a3) - (float)(*((float *)a3 + 2) * *(float *)a2);
  this[1] = v4;
  v5 = (float)(*(float *)a2 * *((float *)a3 + 1)) - (float)(*(float *)a3 * *((float *)a2 + 1));
  this[2] = v5;
  *this = v3 + (float)((float)(*(float *)a2 * *((float *)a3 + 3)) + (float)(*(float *)a3 * *((float *)a2 + 3)));
  this[1] = v4
          + (float)((float)(*((float *)a2 + 1) * *((float *)a3 + 3)) + (float)(*((float *)a3 + 1) * *((float *)a2 + 3)));
  this[2] = v5
          + (float)((float)(*((float *)a2 + 2) * *((float *)a3 + 3)) + (float)(*((float *)a3 + 2) * *((float *)a2 + 3)));
  this[3] = (float)(*((float *)a2 + 3) * *((float *)a3 + 3))
          - (float)((float)((float)(*(float *)a2 * *(float *)a3) + (float)(*((float *)a2 + 1) * *((float *)a3 + 1)))
                  + (float)(*((float *)a2 + 2) * *((float *)a3 + 2)));
  return this;
}


// ============================================================

// Address: 0x4505e4
// Original: _ZN11CQuaternion5SlerpERKS_S1_fff
// Demangled: CQuaternion::Slerp(CQuaternion const&,CQuaternion const&,float,float,float)
float __fastcall CQuaternion::Slerp(
        CQuaternion *this,
        const CQuaternion *a2,
        const CQuaternion *a3,
        float a4,
        float a5,
        float a6)
{
  float result; // r0
  float v11; // s20
  float v12; // r8

  if ( a4 == 0.0 )
  {
    *(_DWORD *)this = *(_DWORD *)a3;
    *((_DWORD *)this + 1) = *((_DWORD *)a3 + 1);
    *((_DWORD *)this + 2) = *((_DWORD *)a3 + 2);
    result = *((float *)a3 + 3);
    *((float *)this + 3) = result;
  }
  else
  {
    if ( a4 <= 1.5708 )
    {
      v12 = sinf((float)(1.0 - a6) * a4);
      result = sinf(a4 * a6);
    }
    else
    {
      v11 = 3.1416 - a4;
      v12 = sinf((float)(3.1416 - a4) * (float)(1.0 - a6));
      LODWORD(result) = COERCE_UNSIGNED_INT(sinf(v11 * a6)) ^ 0x80000000;
    }
    *(float *)this = (float)((float)(v12 * a5) * *(float *)a2) + (float)((float)(result * a5) * *(float *)a3);
    *((float *)this + 1) = (float)((float)(v12 * a5) * *((float *)a2 + 1))
                         + (float)((float)(result * a5) * *((float *)a3 + 1));
    *((float *)this + 2) = (float)((float)(v12 * a5) * *((float *)a2 + 2))
                         + (float)((float)(result * a5) * *((float *)a3 + 2));
    *((float *)this + 3) = (float)((float)(v12 * a5) * *((float *)a2 + 3))
                         + (float)((float)(result * a5) * *((float *)a3 + 3));
  }
  return result;
}


// ============================================================

// Address: 0x4506fc
// Original: _ZN11CQuaternion5SlerpERKS_S1_f
// Demangled: CQuaternion::Slerp(CQuaternion const&,CQuaternion const&,float)
float __fastcall CQuaternion::Slerp(CQuaternion *this, const CQuaternion *a2, const CQuaternion *a3, float a4)
{
  float32x2_t v4; // d0
  float32x2_t v5; // d11
  float v8; // s16
  float v11; // s18
  float v12; // r0
  float v13; // s24
  float v14; // s20
  float result; // r0
  float v16; // s26
  float v17; // s24
  float v18; // r8

  v8 = *(float *)a3;
  v5.n64_u32[0] = 1.0;
  v11 = *(float *)a2;
  v4.n64_f32[0] = (float)((float)((float)(*(float *)a2 * *(float *)a3) + (float)(*((float *)a2 + 1) * *((float *)a3 + 1)))
                        + (float)(*((float *)a2 + 2) * *((float *)a3 + 2)))
                + (float)(*((float *)a2 + 3) * *((float *)a3 + 3));
  v12 = acosf(vmin_f32(v4, v5).n64_f32[0]);
  v13 = v12;
  if ( v12 == 0.0 )
    v14 = 0.0;
  else
    v14 = 1.0 / sinf(v12);
  if ( v13 == 0.0 )
  {
    *(float *)this = v8;
    *((_DWORD *)this + 1) = *((_DWORD *)a3 + 1);
    *((_DWORD *)this + 2) = *((_DWORD *)a3 + 2);
    result = *((float *)a3 + 3);
    *((float *)this + 3) = result;
  }
  else
  {
    v16 = a4;
    if ( v13 <= 1.5708 )
    {
      v18 = sinf((float)(1.0 - a4) * v13);
      result = sinf(v13 * v16);
    }
    else
    {
      v17 = 3.1416 - v13;
      v18 = sinf((float)(1.0 - a4) * v17);
      LODWORD(result) = COERCE_UNSIGNED_INT(sinf(v17 * v16)) ^ 0x80000000;
    }
    *(float *)this = (float)((float)(v14 * v18) * v11) + (float)((float)(v14 * result) * v8);
    *((float *)this + 1) = (float)((float)(v14 * v18) * *((float *)a2 + 1))
                         + (float)((float)(v14 * result) * *((float *)a3 + 1));
    *((float *)this + 2) = (float)((float)(v14 * v18) * *((float *)a2 + 2))
                         + (float)((float)(v14 * result) * *((float *)a3 + 2));
    *((float *)this + 3) = (float)((float)(v14 * v18) * *((float *)a2 + 3))
                         + (float)((float)(v14 * result) * *((float *)a3 + 3));
  }
  return result;
}


// ============================================================

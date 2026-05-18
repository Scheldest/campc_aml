
// Address: 0x1919bc
// Original: j__ZNK10CColSphere13IntersectEdgeERK7CVectorS2_RS0_S3_
// Demangled: CColSphere::IntersectEdge(CVector const&,CVector const&,CVector&,CVector&)
// attributes: thunk
int __fastcall CColSphere::IntersectEdge(
        CColSphere *this,
        const CVector *a2,
        const CVector *a3,
        CVector *a4,
        CVector *a5)
{
  return _ZNK10CColSphere13IntersectEdgeERK7CVectorS2_RS0_S3_(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19510c
// Original: j__ZNK10CColSphere12IntersectRayERK7CVectorS2_RS0_S3_
// Demangled: CColSphere::IntersectRay(CVector const&,CVector const&,CVector&,CVector&)
// attributes: thunk
int __fastcall CColSphere::IntersectRay(
        CColSphere *this,
        const CVector *a2,
        const CVector *a3,
        CVector *a4,
        CVector *a5)
{
  return _ZNK10CColSphere12IntersectRayERK7CVectorS2_RS0_S3_(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19b23c
// Original: j__ZNK10CColSphere15IntersectSphereERKS_
// Demangled: CColSphere::IntersectSphere(CColSphere const&)
// attributes: thunk
int __fastcall CColSphere::IntersectSphere(CColSphere *a1, const CColSphere *a2)
{
  return _ZNK10CColSphere15IntersectSphereERKS_(a1, a2);
}


// ============================================================

// Address: 0x19b5f8
// Original: j__ZN10CColSphere3SetEfRK7CVectorhhh
// Demangled: CColSphere::Set(float,CVector const&,uchar,uchar,uchar)
// attributes: thunk
int __fastcall CColSphere::Set(
        CColSphere *this,
        float a2,
        const CVector *a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  return _ZN10CColSphere3SetEfRK7CVectorhhh(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19dab4
// Original: j__ZNK10CColSphere14IntersectPointERK7CVector
// Demangled: CColSphere::IntersectPoint(CVector const&)
// attributes: thunk
int __fastcall CColSphere::IntersectPoint(CColSphere *this, const CVector *a2)
{
  return _ZNK10CColSphere14IntersectPointERK7CVector(this, a2);
}


// ============================================================

// Address: 0x2e1c54
// Original: _ZN10CColSphere3SetEfRK7CVectorhhh
// Demangled: CColSphere::Set(float,CVector const&,uchar,uchar,uchar)
int __fastcall CColSphere::Set(int result, int a2, __int64 *a3, char a4, char a5, char a6)
{
  __int64 v6; // d16

  *(_DWORD *)(result + 12) = a2;
  v6 = *a3;
  *(_DWORD *)(result + 8) = *((_DWORD *)a3 + 2);
  *(_BYTE *)(result + 16) = a4;
  *(_BYTE *)(result + 17) = a5;
  *(_BYTE *)(result + 18) = a6;
  *(_QWORD *)result = v6;
  return result;
}


// ============================================================

// Address: 0x2e1c70
// Original: _ZNK10CColSphere12IntersectRayERK7CVectorS2_RS0_S3_
// Demangled: CColSphere::IntersectRay(CVector const&,CVector const&,CVector&,CVector&)
int __fastcall CColSphere::IntersectRay(
        CColSphere *this,
        const CVector *a2,
        const CVector *a3,
        CVector *a4,
        CVector *a5)
{
  float v8; // s0
  float v9; // s2
  float v10; // s4
  float v11; // s4
  float v12; // s0
  float v13; // s2
  float v14; // s4
  float *v16; // [sp+4h] [bp-1Ch]
  float v17; // [sp+8h] [bp-18h] BYREF
  float v18[5]; // [sp+Ch] [bp-14h] BYREF

  v8 = *(float *)a2 - *(float *)this;
  v9 = *((float *)a2 + 1) - *((float *)this + 1);
  v10 = *((float *)a2 + 2) - *((float *)this + 2);
  if ( CGeneral::SolveQuadratic(
         (CGeneral *)0x3F800000,
         (float)((float)((float)(v8 * *(float *)a3) + (float)(v9 * *((float *)a3 + 1)))
               + (float)(v10 * *((float *)a3 + 2)))
       + (float)((float)((float)(v8 * *(float *)a3) + (float)(v9 * *((float *)a3 + 1)))
               + (float)(v10 * *((float *)a3 + 2))),
         (float)((float)((float)(v8 * v8) + (float)(v9 * v9)) + (float)(v10 * v10))
       - (float)(*((float *)this + 3) * *((float *)this + 3)),
         COERCE_FLOAT(v18),
         &v17,
         v16) != 1 )
    return 0;
  v11 = (float)(v18[0] * *((float *)a3 + 1)) + *((float *)a2 + 1);
  v12 = (float)(v18[0] * *((float *)a3 + 2)) + *((float *)a2 + 2);
  *(float *)a4 = (float)(v18[0] * *(float *)a3) + *(float *)a2;
  *((float *)a4 + 1) = v11;
  *((float *)a4 + 2) = v12;
  v13 = (float)(v17 * *((float *)a3 + 1)) + *((float *)a2 + 1);
  v14 = (float)(v17 * *((float *)a3 + 2)) + *((float *)a2 + 2);
  *(float *)a5 = (float)(v17 * *(float *)a3) + *(float *)a2;
  *((float *)a5 + 1) = v13;
  *((float *)a5 + 2) = v14;
  return 1;
}


// ============================================================

// Address: 0x2e1d92
// Original: _ZNK10CColSphere13IntersectEdgeERK7CVectorS2_RS0_S3_
// Demangled: CColSphere::IntersectEdge(CVector const&,CVector const&,CVector&,CVector&)
int __fastcall CColSphere::IntersectEdge(
        CColSphere *this,
        const CVector *a2,
        const CVector *a3,
        CVector *a4,
        CVector *a5)
{
  float v7; // s30
  float v9; // s17
  float v10; // s16
  float v11; // s19
  float v12; // s18
  float v13; // s22
  float v14; // s20
  float v15; // s24
  float v16; // s26
  float v17; // s28
  float v18; // s0
  float v19; // s2
  float v20; // s0
  int result; // r0
  float v22; // s6
  float v23; // s4
  float v24; // s0
  float v25; // s2
  __int64 v26; // d16
  double v27; // d16
  float v28; // s4
  float v29; // s4
  float v30; // s6
  float v31; // s2
  __int64 v32; // d16
  double v33; // d16
  float v34; // s2
  float v35; // s2
  float v36; // s4
  float v37; // s0
  double v38; // [sp+0h] [bp-60h] BYREF
  float v39; // [sp+8h] [bp-58h]

  v7 = *(float *)a2;
  v9 = *((float *)a2 + 1);
  v10 = *(float *)a3 - *(float *)a2;
  v11 = *((float *)a2 + 2);
  v12 = *((float *)a3 + 1) - v9;
  v13 = *(float *)this;
  v14 = *((float *)a3 + 2) - v11;
  v15 = *((float *)this + 1);
  v16 = *((float *)this + 2);
  v17 = *((float *)this + 3);
  *(float *)&v38 = v10;
  *((float *)&v38 + 1) = v12;
  v39 = v14;
  CVector::Normalise((CVector *)&v38);
  v18 = (float)((float)((float)(v7 - v13) * *(float *)&v38) + (float)((float)(v9 - v15) * *((float *)&v38 + 1)))
      + (float)((float)(v11 - v16) * v39);
  v19 = v18 + v18;
  v20 = (float)(v19 * v19)
      + (float)((float)((float)((float)((float)((float)(v7 - v13) * (float)(v7 - v13))
                                      + (float)((float)(v9 - v15) * (float)(v9 - v15)))
                              + (float)((float)(v11 - v16) * (float)(v11 - v16)))
                      - (float)(v17 * v17))
              * -4.0);
  if ( v20 < 0.0 )
    return 0;
  result = 0;
  v22 = sqrtf(v20);
  v23 = sqrtf((float)(v14 * v14) + (float)((float)(v10 * v10) + (float)(v12 * v12)));
  v24 = (float)((float)-v19 - v22) * 0.5;
  if ( v24 <= v23 )
  {
    v25 = (float)(v22 - v19) * 0.5;
    if ( v25 >= 0.0 )
    {
      v26 = *(_QWORD *)a3;
      *((_DWORD *)a5 + 2) = *((_DWORD *)a3 + 2);
      *(_QWORD *)a5 = v26;
      if ( v25 < v23 )
      {
        v27 = v38;
        *((float *)a5 + 2) = v39;
        v28 = *((float *)a5 + 2);
        *(double *)a5 = v27;
        v29 = v25 * v28;
        v30 = v25 * *(float *)a5;
        v31 = v25 * *((float *)a5 + 1);
        *(float *)a5 = v30;
        *((float *)a5 + 1) = v31;
        *((float *)a5 + 2) = v29;
        *(float *)a5 = *(float *)a2 + v30;
        *((float *)a5 + 1) = *((float *)a2 + 1) + v31;
        *((float *)a5 + 2) = *((float *)a2 + 2) + v29;
      }
      v32 = *(_QWORD *)a2;
      *((_DWORD *)a4 + 2) = *((_DWORD *)a2 + 2);
      *(_QWORD *)a4 = v32;
      if ( v24 > 0.0 )
      {
        v33 = v38;
        *((float *)a4 + 2) = v39;
        v34 = *((float *)a4 + 2);
        *(double *)a4 = v33;
        v35 = v24 * v34;
        v36 = v24 * *(float *)a4;
        v37 = v24 * *((float *)a4 + 1);
        *(float *)a4 = v36;
        *((float *)a4 + 1) = v37;
        *((float *)a4 + 2) = v35;
        *(float *)a4 = *(float *)a2 + v36;
        *((float *)a4 + 1) = *((float *)a2 + 1) + v37;
        *((float *)a4 + 2) = *((float *)a2 + 2) + v35;
      }
      return 1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x2e1f84
// Original: _ZNK10CColSphere14IntersectPointERK7CVector
// Demangled: CColSphere::IntersectPoint(CVector const&)
bool __fastcall CColSphere::IntersectPoint(int a1, int a2)
{
  float32x2_t v2; // d16
  unsigned __int64 v3; // d1

  v2.n64_u64[0] = vsub_f32(*(float32x2_t *)(a1 + 4), *(float32x2_t *)(a2 + 4)).n64_u64[0];
  v3 = vmul_f32(v2, v2).n64_u64[0];
  return (float)((float)((float)((float)(*(float *)a1 - *(float *)a2) * (float)(*(float *)a1 - *(float *)a2))
                       + *(float *)&v3)
               + *((float *)&v3 + 1)) < (float)(*(float *)(a1 + 12) * *(float *)(a1 + 12));
}


// ============================================================

// Address: 0x2e1fc4
// Original: _ZNK10CColSphere15IntersectSphereERKS_
// Demangled: CColSphere::IntersectSphere(CColSphere const&)
bool __fastcall CColSphere::IntersectSphere(int a1, int a2)
{
  float32x2_t v2; // d16
  float v3; // s2
  unsigned __int64 v4; // d2

  v2.n64_u64[0] = vsub_f32(*(float32x2_t *)(a1 + 4), *(float32x2_t *)(a2 + 4)).n64_u64[0];
  v3 = *(float *)(a1 + 12) + *(float *)(a2 + 12);
  v4 = vmul_f32(v2, v2).n64_u64[0];
  return (float)((float)((float)((float)(*(float *)a1 - *(float *)a2) * (float)(*(float *)a1 - *(float *)a2))
                       + *(float *)&v4)
               + *((float *)&v4 + 1)) < (float)(v3 * v3);
}


// ============================================================

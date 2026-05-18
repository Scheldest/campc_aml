
// Address: 0x194d5c
// Original: j__ZN17CColTrianglePlane3SetEPK7CVectorR12CColTriangle
// Demangled: CColTrianglePlane::Set(CVector const*,CColTriangle &)
// attributes: thunk
int CColTrianglePlane::Set()
{
  return _ZN17CColTrianglePlane3SetEPK7CVectorR12CColTriangle();
}


// ============================================================

// Address: 0x2e3268
// Original: _ZN17CColTrianglePlane3SetEPK7CVectorR12CColTriangle
// Demangled: CColTrianglePlane::Set(CVector const*,CColTriangle &)
int __fastcall CColTrianglePlane::Set(int a1, int a2, _DWORD *a3)
{
  float *v4; // r0
  float *v5; // r2
  float v6; // s16
  float v7; // s18
  float v8; // s20
  float v9; // s0
  float v10; // s4
  double v11; // d16
  double v12; // kr00_8
  float v13; // s2
  float v14; // s8
  float v15; // s4
  int result; // r0
  float v17; // s8
  float v18[3]; // [sp+Ch] [bp-4Ch] BYREF
  double v19; // [sp+18h] [bp-40h] BYREF
  float v20; // [sp+20h] [bp-38h]
  double v21; // [sp+28h] [bp-30h] BYREF
  float v22; // [sp+30h] [bp-28h]

  v4 = (float *)(a2 + 12 * *a3);
  v5 = (float *)(a2 + 12 * a3[2]);
  v6 = *v4;
  v7 = v4[1];
  v8 = v4[2];
  v9 = *v5 - *v4;
  v10 = v5[2] - v8;
  v18[1] = v5[1] - v7;
  v18[0] = v9;
  v18[2] = v10;
  CrossProduct((const CVector *)&v19, (const CVector *)v18);
  v22 = v20;
  v21 = v19;
  CVector::Normalise((CVector *)&v21);
  v11 = v21;
  *(float *)(a1 + 8) = v22;
  *(double *)a1 = v11;
  v12 = v21;
  v13 = v22;
  v14 = fabsf(*(float *)&v21);
  v15 = fabsf(*((float *)&v21 + 1));
  *(float *)(a1 + 12) = (float)((float)(v6 * *(float *)&v21) + (float)(v7 * *((float *)&v21 + 1))) + (float)(v8 * v22);
  if ( v14 <= v15 || v14 <= fabsf(v13) )
  {
    v17 = v13;
    if ( v13 < 0.0 )
      v17 = -v13;
    if ( v15 <= v17 )
    {
      result = 5;
      if ( v13 > 0.0 )
        result = 4;
    }
    else
    {
      result = 3;
      if ( *((float *)&v12 + 1) > 0.0 )
        result = 2;
    }
  }
  else
  {
    result = *(float *)&v12 <= 0.0;
  }
  *(_BYTE *)(a1 + 16) = result;
  return result;
}


// ============================================================

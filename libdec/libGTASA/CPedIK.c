
// Address: 0x18d0b8
// Original: j__ZN6CPedIKC2EP4CPed
// Demangled: CPedIK::CPedIK(CPed *)
// attributes: thunk
void __fastcall CPedIK::CPedIK(CPedIK *this, CPed *a2)
{
  _ZN6CPedIKC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x194220
// Original: j__ZN6CPedIK19PointGunInDirectionEffbf
// Demangled: CPedIK::PointGunInDirection(float,float,bool,float)
// attributes: thunk
int __fastcall CPedIK::PointGunInDirection(CPedIK *this, float a2, float a3, bool a4, float a5)
{
  return _ZN6CPedIK19PointGunInDirectionEffbf(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19752c
// Original: j__ZN6CPedIK13PitchForSlopeEv
// Demangled: CPedIK::PitchForSlope(void)
// attributes: thunk
int __fastcall CPedIK::PitchForSlope(CPedIK *this)
{
  return _ZN6CPedIK13PitchForSlopeEv(this);
}


// ============================================================

// Address: 0x19bb70
// Original: j__ZN6CPedIK11RotateTorsoEP18AnimBlendFrameDataR15LimbOrientationb
// Demangled: CPedIK::RotateTorso(AnimBlendFrameData *,LimbOrientation &,bool)
// attributes: thunk
int CPedIK::RotateTorso()
{
  return _ZN6CPedIK11RotateTorsoEP18AnimBlendFrameDataR15LimbOrientationb();
}


// ============================================================

// Address: 0x19bd68
// Original: j__ZN6CPedIK18PointGunAtPositionERK7CVectorf
// Demangled: CPedIK::PointGunAtPosition(CVector const&,float)
// attributes: thunk
int __fastcall CPedIK::PointGunAtPosition(CPedIK *this, const CVector *a2, float a3)
{
  return _ZN6CPedIK18PointGunAtPositionERK7CVectorf(this, a2, a3);
}


// ============================================================

// Address: 0x19c8ac
// Original: j__ZN6CPedIK17RotateTorsoForArmERK7CVector
// Demangled: CPedIK::RotateTorsoForArm(CVector const&)
// attributes: thunk
int __fastcall CPedIK::RotateTorsoForArm(CPedIK *this, const CVector *a2)
{
  return _ZN6CPedIK17RotateTorsoForArmERK7CVector(this, a2);
}


// ============================================================

// Address: 0x4b8d94
// Original: _ZN6CPedIKC2EP4CPed
// Demangled: CPedIK::CPedIK(CPed *)
void __fastcall CPedIK::CPedIK(CPedIK *this, CPed *a2)
{
  *(_DWORD *)this = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
}


// ============================================================

// Address: 0x4b8daa
// Original: _ZN6CPedIK14GetWorldMatrixEP7RwFrameP11RwMatrixTag
// Demangled: CPedIK::GetWorldMatrix(RwFrame *,RwMatrixTag *)
_QWORD *__fastcall CPedIK::GetWorldMatrix(int a1, _QWORD *a2)
{
  __int64 v3; // d16
  __int64 v4; // d17
  __int64 v5; // d18
  __int64 v6; // d19
  __int64 v7; // d20
  __int64 v8; // d21
  __int64 v9; // d23
  _QWORD *v10; // r1
  int i; // r5

  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(a1 + 72);
  v10 = a2 + 6;
  *v10 = *(_QWORD *)(a1 + 64);
  v10[1] = v9;
  a2[4] = v3;
  a2[5] = v4;
  *a2 = v5;
  a2[1] = v6;
  a2[2] = v7;
  a2[3] = v8;
  for ( i = *(_DWORD *)(a1 + 4); i; i = *(_DWORD *)(i + 4) )
    RwMatrixTransform();
  return a2;
}


// ============================================================

// Address: 0x4b8e04
// Original: _ZN6CPedIK23ExtractYawAndPitchWorldEP11RwMatrixTagRfS2_
// Demangled: CPedIK::ExtractYawAndPitchWorld(RwMatrixTag *,float &,float &)
float __fastcall CPedIK::ExtractYawAndPitchWorld(int a1, float *a2, float *a3, float *a4)
{
  float v7; // s0
  float v8; // s2
  float v9; // r0
  float v10; // s0
  float v11; // s2
  float result; // r0

  v7 = -1.0;
  v8 = (float)((float)(a2[4] * 0.0) + a2[5]) + (float)(a2[6] * 0.0);
  if ( v8 >= -1.0 )
  {
    v7 = (float)((float)(a2[4] * 0.0) + a2[5]) + (float)(a2[6] * 0.0);
    if ( v8 > 1.0 )
      v7 = 1.0;
  }
  v9 = acosf(v7);
  *a3 = v9;
  if ( a2[4] > 0.0 )
    *a3 = -v9;
  v10 = -1.0;
  v11 = a2[2] + (float)((float)(*a2 * 0.0) + (float)(a2[1] * 0.0));
  if ( v11 >= -1.0 )
  {
    v10 = a2[2] + (float)((float)(*a2 * 0.0) + (float)(a2[1] * 0.0));
    if ( v11 > 1.0 )
      v10 = 1.0;
  }
  result = acosf(v10);
  *a4 = result;
  if ( a2[6] > 0.0 )
    *a4 = -result;
  return result;
}


// ============================================================

// Address: 0x4b8ef0
// Original: _ZN6CPedIK8MoveLimbER15LimbOrientationffR16LimbMovementInfo
// Demangled: CPedIK::MoveLimb(LimbOrientation &,float,float,LimbMovementInfo &)
int __fastcall CPedIK::MoveLimb(int a1, float *a2, float a3, float a4, float *a5)
{
  float v5; // s2
  float v6; // s0
  float v7; // s4
  int result; // r0
  float v9; // s4
  float v10; // s0
  float v11; // s2
  float v12; // s4
  float v13; // s2

  v5 = a3;
  v6 = *a2;
  v7 = a5[2];
  if ( fabsf(*a2 - a3) >= v7 )
  {
    if ( v6 >= a3 )
    {
      if ( v6 <= a3 )
      {
        result = 1;
        v5 = *a2;
        goto LABEL_9;
      }
      v5 = v6 - v7;
    }
    else
    {
      v5 = v6 + v7;
    }
    result = 1;
  }
  else
  {
    result = 2;
  }
  *a2 = v5;
LABEL_9:
  v9 = *a5;
  v10 = a4;
  if ( v5 > *a5 || (v9 = a5[1], v5 < v9) )
  {
    result = 0;
    *a2 = v9;
  }
  v11 = a2[1];
  v12 = a5[5];
  if ( fabsf(v11 - a4) >= v12 )
  {
    if ( v11 >= a4 )
    {
      if ( v11 <= a4 )
      {
        v10 = a2[1];
        goto LABEL_19;
      }
      v10 = v11 - v12;
    }
    else
    {
      v10 = v11 + v12;
    }
    result = 1;
  }
  a2[1] = v10;
LABEL_19:
  v13 = a5[3];
  if ( v10 > v13 || (v13 = a5[4], v10 < v13) )
  {
    result = 0;
    a2[1] = v13;
  }
  return result;
}


// ============================================================

// Address: 0x4b8fc8
// Original: _ZN6CPedIK8MoveLimbER15LimbOrientationffR16LimbMovementInfof
// Demangled: CPedIK::MoveLimb(LimbOrientation &,float,float,LimbMovementInfo &,float)
int __fastcall CPedIK::MoveLimb(int a1, float *a2, float a3, float a4, float *a5, float a6)
{
  float v6; // s2
  float v7; // s4
  int v8; // r2
  float v9; // s4
  int result; // r0

  v6 = a4 * a6;
  *a2 = a3 * a6;
  a2[1] = a4 * a6;
  v7 = *a5;
  if ( (float)(a3 * a6) <= *a5 && (v7 = a5[1], (float)(a3 * a6) >= v7) )
  {
    v8 = 1;
  }
  else
  {
    v8 = 0;
    *a2 = v7;
  }
  v9 = a5[3];
  if ( v6 > v9 || (v9 = a5[4], v6 < v9) )
  {
    v8 = 0;
    a2[1] = v9;
  }
  result = v8;
  if ( v8 )
    result = 2;
  if ( a6 <= 0.9 )
    return v8;
  return result;
}


// ============================================================

// Address: 0x4b904c
// Original: _ZN6CPedIK18PointGunAtPositionERK7CVectorf
// Demangled: CPedIK::PointGunAtPosition(CVector const&,float)
int __fastcall CPedIK::PointGunAtPosition(CPed **this, const CVector *a2, float a3)
{
  int WeaponInfo; // r0
  float32x2_t *v7; // r4
  int v8; // r3
  float32x2_t *v9; // r5
  float *v10; // r0
  bool v11; // zf
  int v12; // r1
  float *v13; // r2
  float *v14; // r3
  float v15; // s16
  float v16; // s18
  float v17; // s22
  float v18; // s24
  float v19; // s26
  float32x2_t v20; // d10
  int RadianAngleBetweenPoints; // r0
  float32x2_t v22; // d16
  float v23; // r4
  unsigned __int64 v24; // d0
  int v25; // r0
  float v27; // [sp+0h] [bp-50h]
  float v28; // [sp+0h] [bp-50h]

  CPed::GetWeaponSkill(*this);
  WeaponInfo = CWeaponInfo::GetWeaponInfo();
  v7 = (float32x2_t *)*((_DWORD *)*this + 5);
  v8 = *((_DWORD *)*this + 289);
  v9 = v7 + 6;
  v10 = (float *)((char *)&CWeaponInfo::ms_aWeaponAimOffsets + 24 * *(__int16 *)(WeaponInfo + 108));
  if ( !v7 )
    v9 = (float32x2_t *)((char *)*this + 4);
  v12 = v8 & 0x4000000;
  v11 = (v8 & 0x4000000) == 0;
  v13 = v10;
  v14 = v10 + 1;
  if ( !v11 )
    v13 = v10 + 2;
  v15 = *v13;
  if ( v12 )
    v14 = v10 + 3;
  v16 = *v14;
  v17 = v7[5].n64_f32[0];
  v18 = v7[1].n64_f32[0];
  v19 = v9[1].n64_f32[0];
  v20.n64_u64[0] = vadd_f32(
                     vadd_f32((float32x2_t)v9->n64_u64[0], vmul_n_f32((float32x2_t)v7->n64_u64[0], v15)),
                     vmul_n_f32(v7[4], *v14)).n64_u64[0];
  RadianAngleBetweenPoints = CGeneral::GetRadianAngleBetweenPoints(
                               *(CGeneral **)a2,
                               *((float *)a2 + 1),
                               v20.n64_f32[0],
                               v20.n64_f32[1],
                               v27);
  v22.n64_u64[0] = vsub_f32(v20, *(float32x2_t *)a2).n64_u64[0];
  v23 = *(float *)&RadianAngleBetweenPoints;
  v24 = vmul_f32(v22, v22).n64_u64[0];
  v25 = CGeneral::GetRadianAngleBetweenPoints(
          *((CGeneral **)a2 + 2),
          sqrtf(*(float *)&v24 + *((float *)&v24 + 1)),
          (float)(v19 + (float)(v15 * v18)) + (float)(v16 * v17),
          0.0,
          v28);
  return CPedIK::PointGunInDirection((CPedIK *)this, v23, *(float *)&v25, 0, a3);
}


// ============================================================

// Address: 0x4b9158
// Original: _ZN6CPedIK19PointGunInDirectionEffbf
// Demangled: CPedIK::PointGunInDirection(float,float,bool,float)
int __fastcall CPedIK::PointGunInDirection(CPedIK *this, float a2, float a3, int a4, float a5)
{
  float v8; // r10
  int v9; // r5
  _QWORD *v10; // r4
  __int64 *v11; // r0
  __int64 *v12; // r2
  __int64 *v13; // r1
  __int64 v14; // d23
  __int64 v15; // d16
  __int64 v16; // d17
  __int64 v17; // d18
  __int64 v18; // d19
  __int64 v19; // d20
  __int64 v20; // d21
  float v21; // s0
  float v22; // s4
  float v23; // s2
  int v24; // r0
  float v25; // s0
  float v26; // s6
  int v27; // r1
  float v28; // s4
  int v29; // r6
  float v30; // s2
  float v31; // s2
  float v32; // s2
  int MatrixArray; // r0
  float v34; // r0
  float v35; // r5
  float v36; // r4
  float v37; // s0
  unsigned int v38; // s2
  float v39; // r4
  int v40; // r4
  _DWORD *v41; // r0
  int v42; // r3
  int v43; // r2
  int v44; // r5
  _DWORD v46[15]; // [sp+4h] [bp-3Ch] BYREF

  v8 = COERCE_FLOAT(CGeneral::LimitRadianAngle(COERCE_CGENERAL_(a2 - *(float *)(*(_DWORD *)this + 1372)), a2));
  *((_DWORD *)this + 7) = *((_DWORD *)this + 7) & 0xFFFFFFFC | 2;
  GetAnimHierarchyFromSkinClump();
  v9 = RpHAnimIDGetIndex();
  v10 = (_QWORD *)RwMatrixCreate();
  v11 = (__int64 *)(RpHAnimHierarchyGetMatrixArray() + (v9 << 6));
  v12 = v11 + 4;
  v13 = v11;
  v11 += 6;
  v14 = v11[1];
  v15 = *v13;
  v16 = v13[1];
  v13 += 2;
  v17 = *v12;
  v18 = v12[1];
  v19 = *v13;
  v20 = v13[1];
  v10[6] = *v11;
  v10[7] = v14;
  v10[4] = v17;
  v10[5] = v18;
  *v10 = v15;
  v10[1] = v16;
  v10[2] = v19;
  v10[3] = v20;
  RwMatrixDestroy(v10);
  v21 = a3;
  v22 = v8;
  if ( a5 >= 0.0 )
  {
    v25 = a3 * a5;
    *((float *)this + 1) = v8 * a5;
    *((float *)this + 2) = a3 * a5;
    v26 = CPedIK::ms_torsoInfo[0];
    if ( (float)(v8 * a5) <= CPedIK::ms_torsoInfo[0]
      && (v26 = CPedIK::ms_torsoInfo[1], (float)(v8 * a5) >= CPedIK::ms_torsoInfo[1]) )
    {
      v27 = 1;
    }
    else
    {
      v27 = 0;
      *((float *)this + 1) = v26;
    }
    v28 = CPedIK::ms_torsoInfo[3];
    if ( v25 > CPedIK::ms_torsoInfo[3] || (v28 = CPedIK::ms_torsoInfo[4], v25 < CPedIK::ms_torsoInfo[4]) )
    {
      v27 = 0;
      *((float *)this + 2) = v28;
    }
    v24 = v27;
    if ( v27 )
      v24 = 2;
    if ( a5 <= 0.9 )
      v24 = v27;
    goto LABEL_17;
  }
  v23 = *((float *)this + 1);
  if ( fabsf(v23 - v8) >= CPedIK::ms_torsoInfo[2] )
  {
    if ( v23 >= v8 )
    {
      if ( v23 <= v8 )
      {
        v24 = 1;
        v22 = *((float *)this + 1);
        goto LABEL_25;
      }
      v22 = v23 - CPedIK::ms_torsoInfo[2];
    }
    else
    {
      v22 = v23 + CPedIK::ms_torsoInfo[2];
    }
    v24 = 1;
  }
  else
  {
    v24 = 2;
  }
  *((float *)this + 1) = v22;
LABEL_25:
  v30 = CPedIK::ms_torsoInfo[0];
  if ( v22 > CPedIK::ms_torsoInfo[0] || (v30 = CPedIK::ms_torsoInfo[1], v22 < CPedIK::ms_torsoInfo[1]) )
  {
    v24 = 0;
    *((float *)this + 1) = v30;
  }
  v31 = *((float *)this + 2);
  if ( fabsf(v31 - a3) >= CPedIK::ms_torsoInfo[5] )
  {
    if ( v31 >= a3 )
    {
      if ( v31 <= a3 )
      {
        v21 = *((float *)this + 2);
        goto LABEL_35;
      }
      v21 = v31 - CPedIK::ms_torsoInfo[5];
    }
    else
    {
      v21 = v31 + CPedIK::ms_torsoInfo[5];
    }
    v24 = 1;
  }
  *((float *)this + 2) = v21;
LABEL_35:
  v32 = CPedIK::ms_torsoInfo[3];
  if ( v21 > CPedIK::ms_torsoInfo[3] || (v32 = CPedIK::ms_torsoInfo[4], v21 < CPedIK::ms_torsoInfo[4]) )
  {
    *((float *)this + 2) = v32;
    goto LABEL_38;
  }
LABEL_17:
  if ( !v24 )
  {
LABEL_38:
    v29 = 0;
    goto LABEL_39;
  }
  v29 = 1;
  if ( v24 == 2 )
    *((_DWORD *)this + 7) |= 1u;
LABEL_39:
  GetAnimHierarchyFromSkinClump();
  MatrixArray = RpHAnimHierarchyGetMatrixArray();
  v34 = atan2f(
          COERCE_FLOAT(*(_DWORD *)(MatrixArray + 164) ^ 0x80000000),
          COERCE_FLOAT(*(_DWORD *)(MatrixArray + 160) ^ 0x80000000));
  v35 = COERCE_FLOAT(CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v34 - *(float *)(*(_DWORD *)this + 1372)), *(float *)this));
  v46[0] = 0;
  if ( a4 == 1 )
  {
    v36 = cosf(v35);
    v37 = sinf(-v35);
    v38 = LODWORD(v36);
  }
  else
  {
    v39 = sinf(-v35);
    v37 = cosf(v35);
    v38 = LODWORD(v39) ^ 0x80000000;
  }
  *(float *)&v46[2] = v37;
  v46[1] = v38;
  v40 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 1176) + 16);
  RtQuatRotate(v40, v46, (float)(*((float *)this + 2) * 180.0) / 3.1416, 2);
  RtQuatRotate(v40, &CPedIK::XaxisIK, (float)(*((float *)this + 1) * 180.0) / 3.1416, 2);
  v41 = *(_DWORD **)this;
  v42 = *(_DWORD *)(*(_DWORD *)this + 1164);
  v43 = *(_DWORD *)(*(_DWORD *)this + 1160) | 0x4000;
  v44 = *(_DWORD *)(*(_DWORD *)this + 1168);
  v41[289] = *(_DWORD *)(*(_DWORD *)this + 1156);
  v41[290] = v43;
  v41[291] = v42;
  v41[292] = v44;
  return v29;
}


// ============================================================

// Address: 0x4b94f0
// Original: _ZN6CPedIK11RotateTorsoEP18AnimBlendFrameDataR15LimbOrientationb
// Demangled: CPedIK::RotateTorso(AnimBlendFrameData *,LimbOrientation &,bool)
_DWORD *__fastcall CPedIK::RotateTorso(int a1, int a2, float *a3, int a4)
{
  int v6; // r5
  _DWORD *result; // r0
  int v8; // r3
  int v9; // r2
  int v10; // r6

  v6 = *(_DWORD *)(a2 + 16);
  RtQuatRotate(v6, &CPedIK::XaxisIK, (float)(*a3 * 180.0) / 3.1416, a4 == 1);
  RtQuatRotate(v6, &CPedIK::ZaxisIK, (float)(a3[1] * 180.0) / 3.1416, 1);
  result = *(_DWORD **)a1;
  v8 = *(_DWORD *)(*(_DWORD *)a1 + 1164);
  v9 = *(_DWORD *)(*(_DWORD *)a1 + 1160) | 0x4000;
  v10 = *(_DWORD *)(*(_DWORD *)a1 + 1168);
  result[289] = *(_DWORD *)(*(_DWORD *)a1 + 1156);
  result[290] = v9;
  result[291] = v8;
  result[292] = v10;
  return result;
}


// ============================================================

// Address: 0x4b9598
// Original: _ZN6CPedIK17RotateTorsoForArmERK7CVector
// Demangled: CPedIK::RotateTorsoForArm(CVector const&)
float __fastcall CPedIK::RotateTorsoForArm(CPedIK *this, const CVector *a2)
{
  float v2; // s0
  int v3; // r6
  float v4; // s2
  int v5; // r0
  float *v6; // r1
  float result; // r0
  float v8; // s4
  float v9; // s2
  float v10; // s6
  float v11; // s4
  float v12; // s2
  float v13; // s4

  v2 = *(float *)a2;
  v3 = *(_DWORD *)this;
  v4 = *((float *)a2 + 1);
  v5 = *(_DWORD *)(*(_DWORD *)this + 20);
  v6 = (float *)(v5 + 48);
  if ( !v5 )
    v6 = (float *)(v3 + 4);
  result = atan2f(-(float)(v2 - *v6), v4 - v6[1]);
  v8 = result;
  v9 = *(float *)(v3 + 1372);
  if ( result <= (float)(v9 + 3.1416) )
  {
    if ( result >= (float)(v9 + -3.1416) )
      goto LABEL_8;
    v10 = 6.2832;
  }
  else
  {
    v10 = -6.2832;
  }
  v8 = result + v10;
LABEL_8:
  v11 = v8 - v9;
  v12 = 0.7854;
  if ( v11 <= 0.7854 )
  {
    if ( v11 >= -1.0472 )
      return result;
    v13 = v11 + 1.0472;
    v12 = -0.34907;
    if ( v13 < -0.34907 )
      goto LABEL_14;
LABEL_13:
    v12 = v13;
    if ( v13 == 0.0 )
      return result;
    goto LABEL_14;
  }
  v13 = v11 + -0.7854;
  if ( v13 <= 0.7854 )
    goto LABEL_13;
LABEL_14:
  RtQuatRotate(
    *(_DWORD *)(*(_DWORD *)(v3 + 1240) + 16),
    &CPedIK::XaxisIK,
    (float)((float)(v12 * 0.5) * 180.0) / 3.1416,
    2);
  return COERCE_FLOAT(sub_18DD5C());
}


// ============================================================

// Address: 0x4b96e8
// Original: _ZN6CPedIK13PitchForSlopeEv
// Demangled: CPedIK::PitchForSlope(void)
unsigned int __fastcall CPedIK::PitchForSlope(CPedIK *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d11
  float32x2_t v3; // d14
  int v5; // r10
  int v6; // r0
  int v7; // r6
  int v8; // r3
  unsigned int v9; // r2
  int v10; // r1
  float v11; // s0
  int *v12; // r3
  float v13; // s2
  float v14; // s4
  float v15; // s2
  int v16; // r2
  float v17; // s2
  int v18; // r2
  int v19; // r5
  int ActiveTask; // r0
  _DWORD *v21; // r0
  int v22; // r3
  int v23; // r2
  int v24; // r6
  _DWORD *v25; // r0
  int v26; // r3
  int v27; // r2
  int v28; // r5
  int MatrixArray; // r5
  int v30; // r0
  float v31; // r0
  float v32; // s2
  int v33; // r5
  int v34; // r0
  int v35; // r5
  int v36; // r0
  float32x2_t v37; // d0
  float v38; // s2
  int v39; // r5
  int v40; // r0
  int v41; // r5
  int v42; // r0
  float v43; // s2
  int v44; // r5
  int v45; // r0
  int v46; // r5
  int v47; // r0
  float v48; // s2
  int v49; // r5
  int v50; // r0
  float v51; // r6
  float v52; // r5
  float v53; // s24
  float *v54; // r0
  float v55; // s2
  float v56; // s4
  float v57; // s0
  int v58; // r6
  int v59; // r5
  int v60; // r0
  float v61; // r0
  int v62; // r6
  int v63; // r6
  int v64; // r5
  int v65; // r0
  float v66; // r0
  int v67; // r6
  _DWORD *v68; // r0
  int v69; // r3
  int v70; // r2
  int v71; // r6
  unsigned int result; // r0
  _BYTE v73[64]; // [sp+0h] [bp-138h] BYREF
  int v74; // [sp+40h] [bp-F8h]
  int v75; // [sp+44h] [bp-F4h]
  _BYTE v76[48]; // [sp+48h] [bp-F0h] BYREF
  float v77; // [sp+78h] [bp-C0h]
  float v78; // [sp+7Ch] [bp-BCh]
  float v79; // [sp+80h] [bp-B8h]
  int v80; // [sp+90h] [bp-A8h] BYREF
  float v81; // [sp+94h] [bp-A4h]
  float v82; // [sp+98h] [bp-A0h]

  v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 24) + ClumpOffset);
  GetAnimHierarchyFromSkinClump();
  v6 = *(_DWORD *)this;
  v7 = 0;
  v8 = 0;
  v9 = *(_DWORD *)(*(_DWORD *)this + 1100) & 0xFFFFFFFE;
  if ( v9 == 54 )
    v10 = 1;
  else
    v10 = (*(unsigned __int8 *)(v6 + 1166) >> 4) & 1;
  v11 = *((float *)this + 3);
  if ( v11 <= 0.01 )
    v7 = 1;
  if ( v11 >= -0.01 )
    v8 = 1;
  if ( (v8 & v7) == 0 && v9 != 54 )
  {
    v12 = dword_4B9DC8;
    if ( *(_DWORD *)(v6 + 1104) == 4 )
      v12 = &dword_4B9DC8[1];
    v13 = (float)(*((float *)this + 4) * 0.9) + *(float *)v12;
    v14 = 0.5236;
    *((float *)this + 4) = v13;
    if ( v11 > (float)(v13 * 0.5236) || (v14 = -0.61087, v11 < (float)(v13 * -0.61087)) )
    {
      v11 = v14 * v13;
      *((float *)this + 3) = v14 * v13;
    }
  }
  v15 = *((float *)this + 5);
  if ( (v15 > 0.01 || v15 < -0.01) && (*(_DWORD *)(v6 + 1100) & 0xFFFFFFFE) != 0x36 )
  {
    if ( v15 > 0.7854 )
    {
      v16 = 1061752795;
LABEL_22:
      *((_DWORD *)this + 5) = v16;
      goto LABEL_23;
    }
    if ( v15 < -0.7854 )
    {
      v16 = -1085730853;
      goto LABEL_22;
    }
  }
LABEL_23:
  v17 = *((float *)this + 6);
  if ( v17 > 0.01 || v17 < -0.01 )
  {
    if ( v17 <= 0.5236 )
    {
      if ( v17 >= -0.5236 )
        goto LABEL_30;
      v18 = -1090123118;
    }
    else
    {
      v18 = 1057360530;
    }
    *((_DWORD *)this + 6) = v18;
  }
LABEL_30:
  if ( v10 == 1 )
  {
    CMatrix::CMatrix();
    v74 = 0;
    v75 = 0;
    CMatrix::SetTranslate((CMatrix *)v73, 0.0, 0.0, 1.0);
    CMatrix::RotateX((CMatrix *)v73, COERCE_FLOAT(*((_DWORD *)this + 3) ^ 0x80000000));
    CMatrix::RotateY((CMatrix *)v73, *((float *)this + 5));
    operator*();
    CMatrix::operator=();
    CMatrix::~CMatrix((CMatrix *)&v80);
    v77 = v77 + 0.0;
    v78 = v78 + 0.0;
    v79 = v79 + -1.0;
    CMatrix::UpdateRW((CMatrix *)v76);
    CEntity::UpdateRwFrame(*(CEntity **)this);
    CMatrix::~CMatrix((CMatrix *)v73);
    CMatrix::~CMatrix((CMatrix *)v76);
  }
  else
  {
    if ( v11 > 0.01 || v11 < -0.01 )
    {
      v19 = *(_DWORD *)(*(_DWORD *)(v5 + 16) + 24 * RpHAnimIDGetIndex() + 16);
      if ( CTaskManager::GetActiveTask((CTaskManager *)(*(_DWORD *)(*(_DWORD *)this + 1088) + 4))
        && (ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*(_DWORD *)(*(_DWORD *)this + 1088) + 4)),
            (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) == 1027) )
      {
        RtQuatRotate(v19, &CPedIK::ZaxisIK, (float)(*((float *)this + 3) * 180.0) / 3.1416, 1);
        v21 = *(_DWORD **)this;
        v22 = *(_DWORD *)(*(_DWORD *)this + 1164);
        v23 = *(_DWORD *)(*(_DWORD *)this + 1160) | 0x4000;
        v24 = *(_DWORD *)(*(_DWORD *)this + 1168);
        v21[289] = *(_DWORD *)(*(_DWORD *)this + 1156);
        v21[290] = v23;
        v21[291] = v22;
        v21[292] = v24;
      }
      else
      {
        RtQuatRotate(v19, &CPedIK::ZaxisIK, (float)((float)(*((float *)this + 3) * -180.0) / 3.1416) * 0.75, 1);
        v25 = *(_DWORD **)this;
        v26 = *(_DWORD *)(*(_DWORD *)this + 1164);
        v27 = *(_DWORD *)(*(_DWORD *)this + 1160) | 0x4000;
        v28 = *(_DWORD *)(*(_DWORD *)this + 1168);
        v25[289] = *(_DWORD *)(*(_DWORD *)this + 1156);
        v25[290] = v27;
        v25[291] = v26;
        v25[292] = v28;
        MatrixArray = RpHAnimHierarchyGetMatrixArray();
        v30 = RpHAnimIDGetIndex();
        v31 = asinf(*(float *)(MatrixArray + (v30 << 6) + 24));
        v32 = *((float *)this + 3);
        v3.n64_f32[0] = v31;
        v33 = *(_DWORD *)(v5 + 16);
        v34 = RpHAnimIDGetIndex();
        RtQuatRotate(*(_DWORD *)(v33 + 24 * v34 + 16), &CPedIK::ZaxisIK, (float)(v3.n64_f32[0] * 30.0) * v32, 2);
        v2.n64_u32[0] = 0;
        v1.n64_f32[0] = -(float)(v3.n64_f32[0] * *((float *)this + 3));
        v35 = *(_DWORD *)(v5 + 16);
        v36 = RpHAnimIDGetIndex();
        RtQuatRotate(*(_DWORD *)(v35 + 24 * v36 + 16), &CPedIK::ZaxisIK, vmax_f32(v1, v2).n64_f32[0] * -30.0, 2);
        v37.n64_u64[0] = vmax_f32(v3, v2).n64_u64[0];
        v38 = *((float *)this + 3);
        v39 = *(_DWORD *)(v5 + 16);
        v40 = RpHAnimIDGetIndex();
        RtQuatRotate(*(_DWORD *)(v39 + 24 * v40 + 16), &CPedIK::ZaxisIK, (float)(v37.n64_f32[0] * -30.0) * v38, 2);
        v41 = RpHAnimHierarchyGetMatrixArray();
        v42 = RpHAnimIDGetIndex();
        v3.n64_u32[0] = asinf(*(float *)(v41 + (v42 << 6) + 24));
        v43 = *((float *)this + 3);
        v44 = *(_DWORD *)(v5 + 16);
        v45 = RpHAnimIDGetIndex();
        RtQuatRotate(*(_DWORD *)(v44 + 24 * v45 + 16), &CPedIK::ZaxisIK, (float)(v3.n64_f32[0] * 30.0) * v43, 2);
        v46 = *(_DWORD *)(v5 + 16);
        v37.n64_f32[0] = -(float)(v3.n64_f32[0] * *((float *)this + 3));
        v47 = RpHAnimIDGetIndex();
        RtQuatRotate(*(_DWORD *)(v46 + 24 * v47 + 16), &CPedIK::ZaxisIK, vmax_f32(v37, v2).n64_f32[0] * -30.0, 2);
        v48 = *((float *)this + 3);
        v49 = *(_DWORD *)(v5 + 16);
        v50 = RpHAnimIDGetIndex();
        RtQuatRotate(
          *(_DWORD *)(v49 + 24 * v50 + 16),
          &CPedIK::ZaxisIK,
          (float)(vmax_f32(v3, v2).n64_f32[0] * -30.0) * v48,
          2);
        CMatrix::CMatrix();
        v74 = 0;
        v75 = 0;
        CMatrix::SetTranslate((CMatrix *)v73, 0.0, 0.0, 0.0);
        CMatrix::RotateX((CMatrix *)v73, *((float *)this + 3) * -0.5);
        operator*();
        CMatrix::operator=();
        CMatrix::~CMatrix((CMatrix *)&v80);
        v51 = *(float *)this;
        v52 = *((float *)this + 3);
        v53 = 0.3 / cosf(*((float *)this + 5));
        v37.n64_u32[0] = sinf(v52);
        v54 = *(float **)(LODWORD(v51) + 20);
        v37.n64_f32[0] = v37.n64_f32[0] * 0.75;
        v55 = v37.n64_f32[0] * v54[4];
        v56 = v37.n64_f32[0] * v54[5];
        v37.n64_f32[0] = v37.n64_f32[0] * v54[6];
        v77 = (float)(v55 + v77) + 0.0;
        v78 = (float)(v56 + v78) + 0.0;
        v79 = (float)(v53 + -0.3) + (float)(v37.n64_f32[0] + v79);
        CMatrix::UpdateRW((CMatrix *)v76);
        CEntity::UpdateRwFrame(*(CEntity **)this);
        CMatrix::~CMatrix((CMatrix *)v73);
        CMatrix::~CMatrix((CMatrix *)v76);
      }
    }
    else
    {
      *((_DWORD *)this + 3) = 0;
    }
    v57 = *((float *)this + 5);
    if ( v57 > 0.01 || v57 < -0.01 )
    {
      v58 = RpHAnimIDGetIndex();
      v59 = *(_DWORD *)(*(_DWORD *)(v5 + 16) + 24 * v58 + 16);
      v60 = RpHAnimHierarchyGetMatrixArray();
      v61 = atan2f(*(float *)(v60 + (v58 << 6) + 36), *(float *)(v60 + (v58 << 6) + 32));
      v62 = CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v61 - *(float *)(*(_DWORD *)this + 1372)), *(float *)this);
      v81 = cosf(*(float *)&v62);
      v80 = 0;
      v82 = sinf(*(float *)&v62);
      RtQuatRotate(v59, &v80, (float)(*((float *)this + 5) * 180.0) / 3.1416, 1);
      v63 = RpHAnimIDGetIndex();
      v64 = *(_DWORD *)(*(_DWORD *)(v5 + 16) + 24 * v63 + 16);
      v65 = RpHAnimHierarchyGetMatrixArray();
      v66 = atan2f(*(float *)(v65 + (v63 << 6) + 36), *(float *)(v65 + (v63 << 6) + 32));
      v67 = CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v66 - *(float *)(*(_DWORD *)this + 1372)), *(float *)this);
      v81 = cosf(*(float *)&v67);
      v82 = sinf(*(float *)&v67);
      RtQuatRotate(v64, &v80, (float)(*((float *)this + 5) * 180.0) / 3.1416, 1);
      v68 = *(_DWORD **)this;
      v69 = *(_DWORD *)(*(_DWORD *)this + 1164);
      v70 = *(_DWORD *)(*(_DWORD *)this + 1160) | 0x4000;
      v71 = *(_DWORD *)(*(_DWORD *)this + 1168);
      v68[289] = *(_DWORD *)(*(_DWORD *)this + 1156);
      v68[290] = v70;
      v68[291] = v69;
      v68[292] = v71;
    }
    else
    {
      *((_DWORD *)this + 5) = 0;
    }
  }
  result = *((_DWORD *)this + 7) & 0xFFFFFFF7;
  *((_DWORD *)this + 7) = result;
  return result;
}


// ============================================================

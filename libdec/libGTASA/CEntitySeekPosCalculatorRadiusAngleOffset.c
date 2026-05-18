
// Address: 0x19cd28
// Original: j__ZNK41CEntitySeekPosCalculatorRadiusAngleOffset20ComputeEntitySeekPosERK4CPedRK7CEntityR7CVector
// Demangled: CEntitySeekPosCalculatorRadiusAngleOffset::ComputeEntitySeekPos(CPed const&,CEntity const&,CVector &)
// attributes: thunk
int __fastcall CEntitySeekPosCalculatorRadiusAngleOffset::ComputeEntitySeekPos(
        CEntitySeekPosCalculatorRadiusAngleOffset *this,
        const CPed *a2,
        const CEntity *a3,
        CVector *a4)
{
  return _ZNK41CEntitySeekPosCalculatorRadiusAngleOffset20ComputeEntitySeekPosERK4CPedRK7CEntityR7CVector(
           this,
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x544498
// Original: _ZNK41CEntitySeekPosCalculatorRadiusAngleOffset20ComputeEntitySeekPosERK4CPedRK7CEntityR7CVector
// Demangled: CEntitySeekPosCalculatorRadiusAngleOffset::ComputeEntitySeekPos(CPed const&,CEntity const&,CVector &)
int __fastcall CEntitySeekPosCalculatorRadiusAngleOffset::ComputeEntitySeekPos(
        CEntitySeekPosCalculatorRadiusAngleOffset *this,
        const CPed *a2,
        const CEntity *a3,
        CVector *a4)
{
  int v6; // r0
  CGeneral *v9; // s2
  float v10; // s0
  float v11; // r5
  float v12; // r10
  CGeneral *RadianAngleBetweenPoints; // r0
  float v14; // r1
  float v15; // r0
  float v16; // r1
  int v17; // r5
  float v18; // s0
  float v19; // s16
  int v20; // r0
  float v21; // s0
  float *v22; // r4
  float v23; // s18
  float v24; // r0
  float v25; // s4
  CVector *v26; // r3
  float v28; // [sp+0h] [bp-38h]
  float v29[13]; // [sp+4h] [bp-34h] BYREF

  v6 = *((_DWORD *)a3 + 5);
  if ( v6 )
  {
    v9 = *(CGeneral **)(v6 + 16);
    v10 = *(float *)(v6 + 20);
  }
  else
  {
    v11 = *((float *)a3 + 4);
    v12 = sinf(v11);
    v10 = cosf(v11);
    v9 = (CGeneral *)(LODWORD(v12) ^ 0x80000000);
  }
  RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(v9, v10, 0.0, 0.0, v28);
  v15 = COERCE_FLOAT(CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v14));
  v17 = CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v15 + *((float *)this + 2)), v16);
  v18 = sinf(*(float *)&v17);
  v19 = *((float *)this + 1);
  v20 = *((_DWORD *)a3 + 5);
  v21 = v18 * v19;
  v22 = (float *)(v20 + 48);
  if ( !v20 )
    v22 = (float *)((char *)a3 + 4);
  v23 = *v22 - v21;
  v24 = cosf(*(float *)&v17);
  v29[0] = v23;
  v25 = v22[2];
  v29[1] = (float)(v24 * v19) + v22[1];
  v29[2] = (float)(v19 * 0.0) + v25;
  return CPedGeometryAnalyser::ComputeClearTarget(a2, (const CPed *)v29, a4, v26);
}


// ============================================================

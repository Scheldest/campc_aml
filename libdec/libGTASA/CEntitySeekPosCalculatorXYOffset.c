
// Address: 0x194c7c
// Original: j__ZNK32CEntitySeekPosCalculatorXYOffset20ComputeEntitySeekPosERK4CPedRK7CEntityR7CVector
// Demangled: CEntitySeekPosCalculatorXYOffset::ComputeEntitySeekPos(CPed const&,CEntity const&,CVector &)
// attributes: thunk
int __fastcall CEntitySeekPosCalculatorXYOffset::ComputeEntitySeekPos(
        CEntitySeekPosCalculatorXYOffset *this,
        const CPed *a2,
        const CEntity *a3,
        CVector *a4)
{
  return _ZNK32CEntitySeekPosCalculatorXYOffset20ComputeEntitySeekPosERK4CPedRK7CEntityR7CVector(this, a2, a3, a4);
}


// ============================================================

// Address: 0x544440
// Original: _ZNK32CEntitySeekPosCalculatorXYOffset20ComputeEntitySeekPosERK4CPedRK7CEntityR7CVector
// Demangled: CEntitySeekPosCalculatorXYOffset::ComputeEntitySeekPos(CPed const&,CEntity const&,CVector &)
int __fastcall CEntitySeekPosCalculatorXYOffset::ComputeEntitySeekPos(
        CEntitySeekPosCalculatorXYOffset *this,
        const CPed *a2,
        const CEntity *a3,
        CVector *a4)
{
  int v4; // r12
  float v5; // s0
  float v6; // s2
  float v7; // s4
  float *v8; // r0
  float v9; // s8
  float v10; // s10
  float v12[5]; // [sp+4h] [bp-14h] BYREF

  v4 = *((_DWORD *)a3 + 5);
  v5 = *((float *)this + 1);
  v6 = *((float *)this + 2);
  v7 = *((float *)this + 3);
  v8 = (float *)(v4 + 48);
  if ( !v4 )
    v8 = (float *)((char *)a3 + 4);
  v9 = v8[1];
  v10 = v8[2];
  v12[0] = *v8 + v5;
  v12[1] = v9 + v6;
  v12[2] = v10 + v7;
  return CPedGeometryAnalyser::ComputeClearTarget(a2, (const CPed *)v12, a4, a4);
}


// ============================================================

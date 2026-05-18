
// Address: 0x19bebc
// Original: j__ZNK31CEntitySeekPosCalculatorDriving20ComputeEntitySeekPosERK4CPedRK7CEntityR7CVector
// Demangled: CEntitySeekPosCalculatorDriving::ComputeEntitySeekPos(CPed const&,CEntity const&,CVector &)
// attributes: thunk
int __fastcall CEntitySeekPosCalculatorDriving::ComputeEntitySeekPos(
        CEntitySeekPosCalculatorDriving *this,
        const CPed *a2,
        const CEntity *a3,
        CVector *a4)
{
  return _ZNK31CEntitySeekPosCalculatorDriving20ComputeEntitySeekPosERK4CPedRK7CEntityR7CVector(this, a2, a3, a4);
}


// ============================================================

// Address: 0x544574
// Original: _ZNK31CEntitySeekPosCalculatorDriving20ComputeEntitySeekPosERK4CPedRK7CEntityR7CVector
// Demangled: CEntitySeekPosCalculatorDriving::ComputeEntitySeekPos(CPed const&,CEntity const&,CVector &)
int __fastcall CEntitySeekPosCalculatorDriving::ComputeEntitySeekPos(
        CEntitySeekPosCalculatorDriving *this,
        const CPed *a2,
        const CEntity *a3,
        CVector *a4)
{
  int v4; // r0
  const CPed *v5; // r12

  v4 = *((_DWORD *)a3 + 5);
  v5 = (const CPed *)(v4 + 48);
  if ( !v4 )
    v5 = (const CEntity *)((char *)a3 + 4);
  return sub_19DD74(a2, v5, a4, a4);
}


// ============================================================

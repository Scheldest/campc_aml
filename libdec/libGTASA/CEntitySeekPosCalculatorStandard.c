
// Address: 0x3349e0
// Original: _ZNK32CEntitySeekPosCalculatorStandard20ComputeEntitySeekPosERK4CPedRK7CEntityR7CVector
// Demangled: CEntitySeekPosCalculatorStandard::ComputeEntitySeekPos(CPed const&,CEntity const&,CVector &)
int __fastcall CEntitySeekPosCalculatorStandard::ComputeEntitySeekPos(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  __int64 *v5; // r1
  __int64 v6; // d16
  int result; // r0

  v4 = *(_DWORD *)(a3 + 20);
  v5 = (__int64 *)(v4 + 48);
  if ( !v4 )
    v5 = (__int64 *)(a3 + 4);
  v6 = *v5;
  result = *((_DWORD *)v5 + 2);
  *(_DWORD *)(a4 + 8) = result;
  *(_QWORD *)a4 = v6;
  return result;
}


// ============================================================


// Address: 0x192018
// Original: j__ZNK11CPedScanner20GetClosestPedInRangeEv
// Demangled: CPedScanner::GetClosestPedInRange(void)
// attributes: thunk
int __fastcall CPedScanner::GetClosestPedInRange(CPedScanner *this)
{
  return _ZNK11CPedScanner20GetClosestPedInRangeEv(this);
}


// ============================================================

// Address: 0x4bae50
// Original: _ZN11CPedScanner18ScanForPedsInRangeERK4CPed
// Demangled: CPedScanner::ScanForPedsInRange(CPed const&)
int __fastcall CPedScanner::ScanForPedsInRange(CEntity **this, const CPed *a2)
{
  int result; // r0

  result = CPed::IsAlive(a2);
  if ( result == 1 )
    return CEntityScanner::ScanForEntitiesInRange(this, 1, a2);
  return result;
}


// ============================================================

// Address: 0x4bae70
// Original: _ZNK11CPedScanner20GetClosestPedInRangeEv
// Demangled: CPedScanner::GetClosestPedInRange(void)
int __fastcall CPedScanner::GetClosestPedInRange(CPedScanner *this)
{
  return *((_DWORD *)this + 19);
}


// ============================================================

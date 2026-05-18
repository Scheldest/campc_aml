
// Address: 0x4bae74
// Original: _ZN14CObjectScanner21ScanForObjectsInRangeERK4CPed
// Demangled: CObjectScanner::ScanForObjectsInRange(CPed const&)
int __fastcall CObjectScanner::ScanForObjectsInRange(CEntity **this, const CPed *a2)
{
  int result; // r0
  bool v5; // zf

  result = *((_DWORD *)a2 + 356);
  v5 = result == 0;
  if ( result )
  {
    result = *((unsigned __int8 *)a2 + 1157) << 31;
    v5 = result == 0;
  }
  if ( v5 )
  {
    result = CPed::IsAlive(a2);
    if ( result == 1 )
      return CEntityScanner::ScanForEntitiesInRange(this, 2, a2);
  }
  return result;
}


// ============================================================

// Address: 0x4baea8
// Original: _ZNK14CObjectScanner23GetClosestObjectInRangeEv
// Demangled: CObjectScanner::GetClosestObjectInRange(void)
int __fastcall CObjectScanner::GetClosestObjectInRange(CObjectScanner *this)
{
  return *((_DWORD *)this + 19);
}


// ============================================================

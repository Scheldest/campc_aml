
// Address: 0x18b424
// Original: j__ZN15CVehicleScanner22ScanForVehiclesInRangeERK4CPed
// Demangled: CVehicleScanner::ScanForVehiclesInRange(CPed const&)
// attributes: thunk
int __fastcall CVehicleScanner::ScanForVehiclesInRange(CVehicleScanner *this, const CPed *a2)
{
  return _ZN15CVehicleScanner22ScanForVehiclesInRangeERK4CPed(this, a2);
}


// ============================================================

// Address: 0x19d260
// Original: j__ZNK15CVehicleScanner24GetClosestVehicleInRangeEv
// Demangled: CVehicleScanner::GetClosestVehicleInRange(void)
// attributes: thunk
int __fastcall CVehicleScanner::GetClosestVehicleInRange(CVehicleScanner *this)
{
  return _ZNK15CVehicleScanner24GetClosestVehicleInRangeEv(this);
}


// ============================================================

// Address: 0x4bade4
// Original: _ZN15CVehicleScanner22ScanForVehiclesInRangeERK4CPed
// Demangled: CVehicleScanner::ScanForVehiclesInRange(CPed const&)
CEntity *__fastcall CVehicleScanner::ScanForVehiclesInRange(CEntity **this, CEntity **a2)
{
  CEntity *result; // r0
  CEntity *v5; // r0
  bool v6; // zf
  CEntity *v7; // r0
  CEntity **v8; // r4
  CEntity *v9; // t1

  result = (CEntity *)CPed::IsAlive((CPed *)a2);
  if ( result == (CEntity *)((char *)&stderr + 1) )
  {
    v5 = a2[356];
    v6 = v5 == 0;
    if ( v5 )
      v6 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
    if ( v6 )
    {
      return (CEntity *)CEntityScanner::ScanForEntitiesInRange(this, 0, (const CPed *)a2);
    }
    else
    {
      if ( *((_BYTE *)a2 + 1096) == 2 )
        CEntityScanner::ScanForEntitiesInRange(this, 0, (const CPed *)a2);
      v9 = this[19];
      v8 = this + 19;
      v7 = v9;
      if ( v9 )
        CEntity::CleanUpOldReference(v7, v8);
      result = a2[356];
      *v8 = result;
      if ( result )
        return (CEntity *)j_CEntity::RegisterReference(result, v8);
    }
  }
  return result;
}


// ============================================================

// Address: 0x4bae4c
// Original: _ZNK15CVehicleScanner24GetClosestVehicleInRangeEv
// Demangled: CVehicleScanner::GetClosestVehicleInRange(void)
int __fastcall CVehicleScanner::GetClosestVehicleInRange(CVehicleScanner *this)
{
  return *((_DWORD *)this + 19);
}


// ============================================================

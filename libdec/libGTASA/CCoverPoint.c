
// Address: 0x192290
// Original: j__ZN11CCoverPoint23ReleaseCoverPointForPedEP4CPed
// Demangled: CCoverPoint::ReleaseCoverPointForPed(CPed *)
// attributes: thunk
int __fastcall CCoverPoint::ReleaseCoverPointForPed(CEntity **this, CPed *a2)
{
  return _ZN11CCoverPoint23ReleaseCoverPointForPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x4d6110
// Original: _ZN11CCoverPoint23CanAccomodateAnotherPedEv
// Demangled: CCoverPoint::CanAccomodateAnotherPed(void)
int __fastcall CCoverPoint::CanAccomodateAnotherPed(CCoverPoint *this)
{
  if ( !*(_BYTE *)this )
    return 0;
  if ( *(_BYTE *)this != 2 )
    return *((_DWORD *)this + 5) == 0;
  if ( *((_DWORD *)this + 5) )
    return *((_DWORD *)this + 6) != 0;
  return 1;
}


// ============================================================

// Address: 0x4d6178
// Original: _ZN11CCoverPoint23ReserveCoverPointForPedEP4CPed
// Demangled: CCoverPoint::ReserveCoverPointForPed(CPed *)
int __fastcall CCoverPoint::ReserveCoverPointForPed(int this, CPed *a2)
{
  CEntity **v2; // r2
  CPed *v3; // r3
  CPed *v4; // r2
  CPed *v5; // t1
  bool v6; // zf

  v2 = (CEntity **)(this + 20);
  v3 = *(CPed **)(this + 20);
  if ( v3 != a2 )
  {
    if ( !v3 || (v5 = *(CPed **)(this + 24), this += 24, v4 = v5, v5 != a2) && (v6 = v4 == 0, v2 = (CEntity **)this, v6) )
    {
      *v2 = a2;
      return j_CEntity::RegisterReference(a2, v2);
    }
  }
  return this;
}


// ============================================================

// Address: 0x4d6460
// Original: _ZN11CCoverPoint23ReleaseCoverPointForPedEP4CPed
// Demangled: CCoverPoint::ReleaseCoverPointForPed(CPed *)
CPed *__fastcall CCoverPoint::ReleaseCoverPointForPed(CEntity **this, CPed *a2)
{
  CEntity **v4; // r6
  CPed *result; // r0
  CEntity **v6; // r4
  CPed *v7; // t1

  v4 = this + 5;
  if ( this[5] == a2 )
  {
    if ( a2 )
      CEntity::CleanUpOldReference(a2, v4);
    *v4 = 0;
  }
  v7 = this[6];
  v6 = this + 6;
  result = v7;
  if ( v7 == a2 )
  {
    if ( a2 )
      CEntity::CleanUpOldReference(a2, v6);
    result = 0;
    *v6 = 0;
  }
  return result;
}


// ============================================================

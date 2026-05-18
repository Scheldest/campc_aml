
// Address: 0x18ab58
// Original: j__ZN13CLocalisation10KillFrenzyEv
// Demangled: CLocalisation::KillFrenzy(void)
// attributes: thunk
int __fastcall CLocalisation::KillFrenzy(CLocalisation *this)
{
  return _ZN13CLocalisation10KillFrenzyEv(this);
}


// ============================================================

// Address: 0x18bec0
// Original: j__ZN13CLocalisation5BloodEv
// Demangled: CLocalisation::Blood(void)
// attributes: thunk
int __fastcall CLocalisation::Blood(CLocalisation *this)
{
  return _ZN13CLocalisation5BloodEv(this);
}


// ============================================================

// Address: 0x18cb14
// Original: j__ZN13CLocalisation13SetNormalGameEv
// Demangled: CLocalisation::SetNormalGame(void)
// attributes: thunk
int __fastcall CLocalisation::SetNormalGame(CLocalisation *this)
{
  return _ZN13CLocalisation13SetNormalGameEv(this);
}


// ============================================================

// Address: 0x18ea04
// Original: j__ZN13CLocalisation10InitialiseEv
// Demangled: CLocalisation::Initialise(void)
// attributes: thunk
int __fastcall CLocalisation::Initialise(CLocalisation *this)
{
  return _ZN13CLocalisation10InitialiseEv(this);
}


// ============================================================

// Address: 0x18f468
// Original: j__ZN13CLocalisation10ShootLimbsEv
// Demangled: CLocalisation::ShootLimbs(void)
// attributes: thunk
int __fastcall CLocalisation::ShootLimbs(CLocalisation *this)
{
  return _ZN13CLocalisation10ShootLimbsEv(this);
}


// ============================================================

// Address: 0x1921a8
// Original: j__ZN13CLocalisation15KickingWhenDownEv
// Demangled: CLocalisation::KickingWhenDown(void)
// attributes: thunk
int __fastcall CLocalisation::KickingWhenDown(CLocalisation *this)
{
  return _ZN13CLocalisation15KickingWhenDownEv(this);
}


// ============================================================

// Address: 0x193230
// Original: j__ZN13CLocalisation16StealFromDeadPedEv
// Demangled: CLocalisation::StealFromDeadPed(void)
// attributes: thunk
int __fastcall CLocalisation::StealFromDeadPed(CLocalisation *this)
{
  return _ZN13CLocalisation16StealFromDeadPedEv(this);
}


// ============================================================

// Address: 0x19813c
// Original: j__ZN13CLocalisation8KillPedsEv
// Demangled: CLocalisation::KillPeds(void)
// attributes: thunk
int __fastcall CLocalisation::KillPeds(CLocalisation *this)
{
  return _ZN13CLocalisation8KillPedsEv(this);
}


// ============================================================

// Address: 0x19a7ac
// Original: j__ZN13CLocalisation6MetricEv
// Demangled: CLocalisation::Metric(void)
// attributes: thunk
int __fastcall CLocalisation::Metric(CLocalisation *this)
{
  return _ZN13CLocalisation6MetricEv(this);
}


// ============================================================

// Address: 0x19ad64
// Original: j__ZN13CLocalisation10GermanGameEv
// Demangled: CLocalisation::GermanGame(void)
// attributes: thunk
int __fastcall CLocalisation::GermanGame(CLocalisation *this)
{
  return _ZN13CLocalisation10GermanGameEv(this);
}


// ============================================================

// Address: 0x19b1f8
// Original: j__ZN13CLocalisation10PedsOnFireEv
// Demangled: CLocalisation::PedsOnFire(void)
// attributes: thunk
int __fastcall CLocalisation::PedsOnFire(CLocalisation *this)
{
  return _ZN13CLocalisation10PedsOnFireEv(this);
}


// ============================================================

// Address: 0x19fe50
// Original: j__ZN13CLocalisation13KnockDownPedsEv
// Demangled: CLocalisation::KnockDownPeds(void)
// attributes: thunk
int __fastcall CLocalisation::KnockDownPeds(CLocalisation *this)
{
  return _ZN13CLocalisation13KnockDownPedsEv(this);
}


// ============================================================

// Address: 0x19ff74
// Original: j__ZN13CLocalisation13SetFrenchGameEv
// Demangled: CLocalisation::SetFrenchGame(void)
// attributes: thunk
int __fastcall CLocalisation::SetFrenchGame(CLocalisation *this)
{
  return _ZN13CLocalisation13SetFrenchGameEv(this);
}


// ============================================================

// Address: 0x3f5310
// Original: _ZN13CLocalisation10InitialiseEv
// Demangled: CLocalisation::Initialise(void)
int __fastcall CLocalisation::Initialise(CLocalisation *this)
{
  int result; // r0

  CLocalisation::germanGame = 0;
  result = 1;
  CLocalisation::nastyGame = 1;
  CLocalisation::frenchGame = 0;
  return result;
}


// ============================================================

// Address: 0x3f533c
// Original: _ZN13CLocalisation13SetNormalGameEv
// Demangled: CLocalisation::SetNormalGame(void)
int __fastcall CLocalisation::SetNormalGame(CLocalisation *this)
{
  int result; // r0

  CLocalisation::frenchGame = 0;
  result = 1;
  CLocalisation::nastyGame = 1;
  CLocalisation::germanGame = 0;
  return result;
}


// ============================================================

// Address: 0x3f5368
// Original: _ZN13CLocalisation13SetFrenchGameEv
// Demangled: CLocalisation::SetFrenchGame(void)
int __fastcall CLocalisation::SetFrenchGame(CLocalisation *this)
{
  int result; // r0

  CLocalisation::germanGame = 0;
  result = 1;
  CLocalisation::frenchGame = 1;
  CLocalisation::nastyGame = 1;
  return result;
}


// ============================================================

// Address: 0x3f5394
// Original: _ZN13CLocalisation13SetGermanGameEv
// Demangled: CLocalisation::SetGermanGame(void)
int __fastcall CLocalisation::SetGermanGame(CLocalisation *this)
{
  int result; // r0

  CLocalisation::frenchGame = 0;
  result = 1;
  CLocalisation::germanGame = 1;
  CLocalisation::nastyGame = 0;
  return result;
}


// ============================================================

// Address: 0x3f53c0
// Original: _ZN13CLocalisation10GermanGameEv
// Demangled: CLocalisation::GermanGame(void)
int __fastcall CLocalisation::GermanGame(CLocalisation *this)
{
  int result; // r0

  result = (unsigned __int8)CLocalisation::germanGame;
  if ( CLocalisation::germanGame )
    return 1;
  return result;
}


// ============================================================

// Address: 0x3f53d4
// Original: _ZN13CLocalisation10FrenchGameEv
// Demangled: CLocalisation::FrenchGame(void)
int __fastcall CLocalisation::FrenchGame(CLocalisation *this)
{
  int result; // r0

  result = (unsigned __int8)CLocalisation::frenchGame;
  if ( CLocalisation::frenchGame )
    return 1;
  return result;
}


// ============================================================

// Address: 0x3f53e8
// Original: _ZN13CLocalisation6MetricEv
// Demangled: CLocalisation::Metric(void)
int __fastcall CLocalisation::Metric(CLocalisation *this)
{
  int result; // r0

  result = (unsigned __int8)byte_98F140;
  if ( byte_98F140 )
    return 1;
  return result;
}


// ============================================================

// Address: 0x3f5400
// Original: _ZN13CLocalisation5BloodEv
// Demangled: CLocalisation::Blood(void)
int __fastcall CLocalisation::Blood(CLocalisation *this)
{
  return 1;
}


// ============================================================

// Address: 0x3f5404
// Original: _ZN13CLocalisation4PornEv
// Demangled: CLocalisation::Porn(void)
int __fastcall CLocalisation::Porn(CLocalisation *this)
{
  return 1;
}


// ============================================================

// Address: 0x3f5408
// Original: _ZN13CLocalisation16ScreamsFromKillsEv
// Demangled: CLocalisation::ScreamsFromKills(void)
bool __fastcall CLocalisation::ScreamsFromKills(CLocalisation *this)
{
  return CLocalisation::germanGame == 0;
}


// ============================================================

// Address: 0x3f5420
// Original: _ZN13CLocalisation11ProstitutesEv
// Demangled: CLocalisation::Prostitutes(void)
int __fastcall CLocalisation::Prostitutes(CLocalisation *this)
{
  return 1;
}


// ============================================================

// Address: 0x3f5424
// Original: _ZN13CLocalisation15KickingWhenDownEv
// Demangled: CLocalisation::KickingWhenDown(void)
int __fastcall CLocalisation::KickingWhenDown(CLocalisation *this)
{
  int result; // r0

  result = (unsigned __int8)CLocalisation::nastyGame;
  if ( CLocalisation::nastyGame )
    return 1;
  return result;
}


// ============================================================

// Address: 0x3f5438
// Original: _ZN13CLocalisation10ShootLimbsEv
// Demangled: CLocalisation::ShootLimbs(void)
int __fastcall CLocalisation::ShootLimbs(CLocalisation *this)
{
  int result; // r0

  result = (unsigned __int8)CLocalisation::nastyGame;
  if ( CLocalisation::nastyGame )
    return 1;
  return result;
}


// ============================================================

// Address: 0x3f544c
// Original: _ZN13CLocalisation13KnockDownPedsEv
// Demangled: CLocalisation::KnockDownPeds(void)
int __fastcall CLocalisation::KnockDownPeds(CLocalisation *this)
{
  int result; // r0

  result = (unsigned __int8)CLocalisation::nastyGame;
  if ( CLocalisation::nastyGame )
    return 1;
  return result;
}


// ============================================================

// Address: 0x3f5460
// Original: _ZN13CLocalisation10KillFrenzyEv
// Demangled: CLocalisation::KillFrenzy(void)
int __fastcall CLocalisation::KillFrenzy(CLocalisation *this)
{
  int result; // r0

  result = (unsigned __int8)CLocalisation::nastyGame;
  if ( CLocalisation::nastyGame )
    return 1;
  return result;
}


// ============================================================

// Address: 0x3f5474
// Original: _ZN13CLocalisation16StealFromDeadPedEv
// Demangled: CLocalisation::StealFromDeadPed(void)
int __fastcall CLocalisation::StealFromDeadPed(CLocalisation *this)
{
  int result; // r0

  result = (unsigned __int8)CLocalisation::nastyGame;
  if ( CLocalisation::nastyGame )
    return 1;
  return result;
}


// ============================================================

// Address: 0x3f5488
// Original: _ZN13CLocalisation8KillPedsEv
// Demangled: CLocalisation::KillPeds(void)
int __fastcall CLocalisation::KillPeds(CLocalisation *this)
{
  int result; // r0

  result = (unsigned __int8)CLocalisation::nastyGame;
  if ( CLocalisation::nastyGame )
    return 1;
  return result;
}


// ============================================================

// Address: 0x3f549c
// Original: _ZN13CLocalisation10PedsOnFireEv
// Demangled: CLocalisation::PedsOnFire(void)
int __fastcall CLocalisation::PedsOnFire(CLocalisation *this)
{
  int result; // r0

  result = (unsigned __int8)CLocalisation::nastyGame;
  if ( CLocalisation::nastyGame )
    return 1;
  return result;
}


// ============================================================

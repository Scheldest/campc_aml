
// Address: 0x197a90
// Original: j__ZN19CEventVehicleDamageC2EP8CVehicleP7CEntity11eWeaponType
// Demangled: CEventVehicleDamage::CEventVehicleDamage(CVehicle *,CEntity *,eWeaponType)
// attributes: thunk
int __fastcall CEventVehicleDamage::CEventVehicleDamage(int a1, CEntity *this, CEntity *a3)
{
  return _ZN19CEventVehicleDamageC2EP8CVehicleP7CEntity11eWeaponType(a1, this, a3);
}


// ============================================================

// Address: 0x199a70
// Original: j__ZN19CEventVehicleDamageD2Ev
// Demangled: CEventVehicleDamage::~CEventVehicleDamage()
// attributes: thunk
void __fastcall CEventVehicleDamage::~CEventVehicleDamage(CEventVehicleDamage *this)
{
  _ZN19CEventVehicleDamageD2Ev(this);
}


// ============================================================

// Address: 0x37700c
// Original: _ZN19CEventVehicleDamageC2EP8CVehicleP7CEntity11eWeaponType
// Demangled: CEventVehicleDamage::CEventVehicleDamage(CVehicle *,CEntity *,eWeaponType)
int __fastcall CEventVehicleDamage::CEventVehicleDamage(int a1, CEntity *this, CEntity *a3, int a4)
{
  CEntity **v5; // r5

  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 13107456;
  *(_WORD *)(a1 + 12) = -1;
  *(_DWORD *)(a1 + 24) = a4;
  *(_DWORD *)a1 = &off_666910;
  *(_DWORD *)(a1 + 20) = a3;
  v5 = (CEntity **)(a1 + 20);
  *(_DWORD *)(a1 + 16) = this;
  if ( this )
  {
    CEntity::RegisterReference(this, (CEntity **)(a1 + 16));
    a3 = *v5;
  }
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)(a1 + 20));
  return a1;
}


// ============================================================

// Address: 0x377064
// Original: _ZN19CEventVehicleDamageD2Ev
// Demangled: CEventVehicleDamage::~CEventVehicleDamage()
void __fastcall CEventVehicleDamage::~CEventVehicleDamage(CEventVehicleDamage *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_666910;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 5);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 5);
}


// ============================================================

// Address: 0x377098
// Original: _ZN19CEventVehicleDamageD0Ev
// Demangled: CEventVehicleDamage::~CEventVehicleDamage()
void __fastcall __noreturn CEventVehicleDamage::~CEventVehicleDamage(CEventVehicleDamage *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x37709a
// Original: _ZNK19CEventVehicleDamage10AffectsPedEP4CPed
// Demangled: CEventVehicleDamage::AffectsPed(CPed *)
bool __fastcall CEventVehicleDamage::AffectsPed(CEventVehicleDamage *this, CVehicle **a2)
{
  bool v4; // zf
  CVehicle *v5; // r0
  _BOOL4 result; // r0
  CVehicle *v7; // r1

  if ( CPed::IsAlive((CPed *)a2) != 1 || !*((_DWORD *)this + 5) )
    return 0;
  v5 = (CVehicle *)(*((unsigned __int8 *)a2 + 1157) << 31);
  v4 = v5 == 0;
  if ( v5 )
  {
    v5 = a2[356];
    v4 = v5 == 0;
  }
  if ( !v4 && CVehicle::IsPassenger(v5, (const CPed *)a2) == 1 && *((_DWORD *)a2[356] + 281) )
    return 0;
  v7 = (CVehicle *)*((_DWORD *)this + 4);
  result = 0;
  if ( v7 )
    return a2[356] == v7;
  return result;
}


// ============================================================

// Address: 0x3770ee
// Original: _ZNK19CEventVehicleDamage15GetSourceEntityEv
// Demangled: CEventVehicleDamage::GetSourceEntity(void)
int __fastcall CEventVehicleDamage::GetSourceEntity(CEventVehicleDamage *this)
{
  int result; // r0
  int v2; // r1

  result = *((_DWORD *)this + 5);
  if ( !result )
    return 0;
  if ( (*(_BYTE *)(result + 58) & 7) == 2 )
  {
    v2 = *(_DWORD *)(result + 1124);
    if ( !v2 )
      return result;
    return v2;
  }
  return result;
}


// ============================================================

// Address: 0x377114
// Original: _ZNK19CEventVehicleDamage15IsCriminalEventEv
// Demangled: CEventVehicleDamage::IsCriminalEvent(void)
bool __fastcall CEventVehicleDamage::IsCriminalEvent(CEventVehicleDamage *this)
{
  int v2; // r0
  char v3; // r1
  int v4; // r4

  v2 = *((_DWORD *)this + 5);
  if ( !v2 )
    return 0;
  v3 = *(_BYTE *)(v2 + 58);
  if ( (v3 & 7) == 3 )
  {
    if ( CPed::IsPlayer((CPed *)v2) )
      return 1;
    v2 = *((_DWORD *)this + 5);
    v3 = *(_BYTE *)(v2 + 58);
  }
  if ( (v3 & 7) != 2 )
    return 0;
  v4 = *(_DWORD *)(v2 + 1124);
  return v4 == FindPlayerPed(-1);
}


// ============================================================

// Address: 0x377156
// Original: _ZNK19CEventVehicleDamage19ReportCriminalEventEP4CPed
// Demangled: CEventVehicleDamage::ReportCriminalEvent(CPed *)
int __fastcall CEventVehicleDamage::ReportCriminalEvent(CEventVehicleDamage *this, CPedType **a2)
{
  int result; // r0
  int v5; // r1

  result = (*(int (__fastcall **)(CEventVehicleDamage *))(*(_DWORD *)this + 32))(this);
  if ( result == 1 )
  {
    result = *((_DWORD *)this + 5);
    if ( result )
    {
      CPedType::PoliceDontCareAboutCrimesAgainstPedType(a2[359], v5);
      result = (int)a2[359];
      if ( result == 6 )
      {
        FindPlayerWanted(-1);
        return CWanted::RegisterCrime();
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x37ab40
// Original: _ZNK19CEventVehicleDamage16GetEventPriorityEv
// Demangled: CEventVehicleDamage::GetEventPriority(void)
int __fastcall CEventVehicleDamage::GetEventPriority(CEventVehicleDamage *this)
{
  return 49;
}


// ============================================================

// Address: 0x37ab44
// Original: _ZNK19CEventVehicleDamage11GetLifeTimeEv
// Demangled: CEventVehicleDamage::GetLifeTime(void)
int __fastcall CEventVehicleDamage::GetLifeTime(CEventVehicleDamage *this)
{
  return 0;
}


// ============================================================

// Address: 0x37ab48
// Original: _ZNK19CEventVehicleDamage18GetLocalSoundLevelEv
// Demangled: CEventVehicleDamage::GetLocalSoundLevel(void)
int __fastcall CEventVehicleDamage::GetLocalSoundLevel(CEventVehicleDamage *this)
{
  return 1113325568;
}


// ============================================================

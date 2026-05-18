
// Address: 0x18cf14
// Original: j__ZN20CEventVehicleToStealC2EP8CVehicle
// Demangled: CEventVehicleToSteal::CEventVehicleToSteal(CVehicle *)
// attributes: thunk
void __fastcall CEventVehicleToSteal::CEventVehicleToSteal(CEventVehicleToSteal *this, CVehicle *a2)
{
  _ZN20CEventVehicleToStealC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x19fcf0
// Original: j__ZN20CEventVehicleToStealD2Ev
// Demangled: CEventVehicleToSteal::~CEventVehicleToSteal()
// attributes: thunk
void __fastcall CEventVehicleToSteal::~CEventVehicleToSteal(CEventVehicleToSteal *this)
{
  _ZN20CEventVehicleToStealD2Ev(this);
}


// ============================================================

// Address: 0x374f1c
// Original: _ZN20CEventVehicleToStealC2EP8CVehicle
// Demangled: CEventVehicleToSteal::CEventVehicleToSteal(CVehicle *)
void __fastcall CEventVehicleToSteal::CEventVehicleToSteal(CEventVehicleToSteal *this, CVehicle *a2)
{
  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_666520;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x374f50
// Original: _ZN20CEventVehicleToStealD2Ev
// Demangled: CEventVehicleToSteal::~CEventVehicleToSteal()
void __fastcall CEventVehicleToSteal::~CEventVehicleToSteal(CEventVehicleToSteal *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666520;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x374f78
// Original: _ZN20CEventVehicleToStealD0Ev
// Demangled: CEventVehicleToSteal::~CEventVehicleToSteal()
void __fastcall CEventVehicleToSteal::~CEventVehicleToSteal(CEventVehicleToSteal *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666520;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = CPools::ms_pEventPool;
  v5 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v5) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v5 < *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v5;
}


// ============================================================

// Address: 0x374fcc
// Original: _ZNK20CEventVehicleToSteal10AffectsPedEP4CPed
// Demangled: CEventVehicleToSteal::AffectsPed(CPed *)
bool __fastcall CEventVehicleToSteal::AffectsPed(CEventVehicleToSteal *this, CPed *a2)
{
  int PlayerPed; // r0
  int TaskByType; // r0
  bool v6; // zf
  int v7; // r6
  CTheScripts *v9; // r6
  CTheScripts *v10; // r0
  int v11; // r0
  int v12; // r1

  if ( CPed::IsAlive(a2) != 1 || !*((_DWORD *)this + 3) )
    return 0;
  PlayerPed = FindPlayerPed(-1);
  TaskByType = CTaskManager::FindTaskByType((CTaskManager *)(*(_DWORD *)(PlayerPed + 1088) + 4), 3, 701);
  v6 = TaskByType == 0;
  if ( TaskByType )
    v6 = *(_DWORD *)(TaskByType + 12) == 0;
  if ( !v6 )
    return 0;
  v9 = (CTheScripts *)*((_DWORD *)this + 3);
  v10 = *(CTheScripts **)(FindPlayerPed(-1) + 1424);
  if ( v9 == v10 )
  {
    v7 = 0;
    if ( CTheScripts::IsPlayerOnAMission(v10) || (*(_BYTE *)(CPad::GetPad(0, v12) + 272) & 0x20) != 0 )
      return v7;
  }
  v11 = *((_DWORD *)a2 + 359);
  v7 = 0;
  if ( v11 == 6 )
    return *((_DWORD *)this + 3) == *((_DWORD *)a2 + 356);
  if ( v11 != 20 )
    return v7;
  return *((_DWORD *)a2 + 356) != *((_DWORD *)this + 3);
}


// ============================================================

// Address: 0x37a418
// Original: _ZNK20CEventVehicleToSteal12GetEventTypeEv
// Demangled: CEventVehicleToSteal::GetEventType(void)
int __fastcall CEventVehicleToSteal::GetEventType(CEventVehicleToSteal *this)
{
  return 28;
}


// ============================================================

// Address: 0x37a41c
// Original: _ZNK20CEventVehicleToSteal16GetEventPriorityEv
// Demangled: CEventVehicleToSteal::GetEventPriority(void)
int __fastcall CEventVehicleToSteal::GetEventPriority(CEventVehicleToSteal *this)
{
  return 7;
}


// ============================================================

// Address: 0x37a420
// Original: _ZNK20CEventVehicleToSteal11GetLifeTimeEv
// Demangled: CEventVehicleToSteal::GetLifeTime(void)
int __fastcall CEventVehicleToSteal::GetLifeTime(CEventVehicleToSteal *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a424
// Original: _ZNK20CEventVehicleToSteal5CloneEv
// Demangled: CEventVehicleToSteal::Clone(void)
int __fastcall CEventVehicleToSteal::Clone(CEventVehicleToSteal *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  CEntity *v7; // r0

  v1 = 0;
  v2 = (_DWORD *)CPools::ms_pEventPool;
  v3 = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v4 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    v2[3] = ++v3;
    if ( v3 == v4 )
    {
      v3 = 0;
      v2[3] = 0;
      if ( v1 << 31 )
        goto LABEL_7;
      v1 = 1;
    }
    v5 = v2[1];
    v6 = *(char *)(v5 + v3);
  }
  while ( v6 > -1 );
  *(_BYTE *)(v5 + v3) = v6 & 0x7F;
  *(_BYTE *)(v2[1] + v2[3]) = (*(_BYTE *)(v2[1] + v2[3]) + 1) & 0x7F | *(_BYTE *)(v2[1] + v2[3]) & 0x80;
  v3 = *v2 + 68 * v2[3];
LABEL_7:
  v7 = (CEntity *)*((_DWORD *)this + 3);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)v3 = &off_666520;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 12) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

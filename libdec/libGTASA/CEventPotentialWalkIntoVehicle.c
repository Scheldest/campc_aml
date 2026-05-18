
// Address: 0x1928b4
// Original: j__ZN30CEventPotentialWalkIntoVehicleD2Ev
// Demangled: CEventPotentialWalkIntoVehicle::~CEventPotentialWalkIntoVehicle()
// attributes: thunk
void __fastcall CEventPotentialWalkIntoVehicle::~CEventPotentialWalkIntoVehicle(CEventPotentialWalkIntoVehicle *this)
{
  _ZN30CEventPotentialWalkIntoVehicleD2Ev(this);
}


// ============================================================

// Address: 0x19d318
// Original: j__ZN30CEventPotentialWalkIntoVehicleC2EP8CVehiclei
// Demangled: CEventPotentialWalkIntoVehicle::CEventPotentialWalkIntoVehicle(CVehicle *,int)
// attributes: thunk
void __fastcall CEventPotentialWalkIntoVehicle::CEventPotentialWalkIntoVehicle(
        CEventPotentialWalkIntoVehicle *this,
        CVehicle *a2,
        int a3)
{
  _ZN30CEventPotentialWalkIntoVehicleC2EP8CVehiclei(this, a2, a3);
}


// ============================================================

// Address: 0x373efc
// Original: _ZN30CEventPotentialWalkIntoVehicleC2EP8CVehiclei
// Demangled: CEventPotentialWalkIntoVehicle::CEventPotentialWalkIntoVehicle(CVehicle *,int)
void __fastcall CEventPotentialWalkIntoVehicle::CEventPotentialWalkIntoVehicle(
        CEventPotentialWalkIntoVehicle *this,
        CVehicle *a2,
        int a3)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *((_DWORD *)this + 5) = a3;
  *(_DWORD *)this = &off_666178;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x373f40
// Original: _ZN30CEventPotentialWalkIntoVehicleD2Ev
// Demangled: CEventPotentialWalkIntoVehicle::~CEventPotentialWalkIntoVehicle()
void __fastcall CEventPotentialWalkIntoVehicle::~CEventPotentialWalkIntoVehicle(CEventPotentialWalkIntoVehicle *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_666178;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x373f68
// Original: _ZN30CEventPotentialWalkIntoVehicleD0Ev
// Demangled: CEventPotentialWalkIntoVehicle::~CEventPotentialWalkIntoVehicle()
void __fastcall CEventPotentialWalkIntoVehicle::~CEventPotentialWalkIntoVehicle(CEventPotentialWalkIntoVehicle *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_666178;
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

// Address: 0x373fbc
// Original: _ZNK30CEventPotentialWalkIntoVehicle10AffectsPedEP4CPed
// Demangled: CEventPotentialWalkIntoVehicle::AffectsPed(CPed *)
bool __fastcall CEventPotentialWalkIntoVehicle::AffectsPed(CEventPotentialWalkIntoVehicle *this, CPed *a2)
{
  int ActiveTaskByType; // r6
  int SimplestActiveTask; // r4
  int IsPlayer; // r0
  const CTask *v7; // r1
  int v8; // r0
  int v9; // r3
  CVehicle *v10; // r1
  CVehicle *v11; // r2
  CVehicle *v12; // r0
  CVehicle *v13; // r6
  _BOOL4 result; // r0
  int v15; // r0
  unsigned int v16; // r0
  CVector *v17; // r3
  double v18; // d16
  int v19; // r0
  int v20; // r0
  int v21; // r1
  bool v22; // zf
  CEntity *v23; // r2
  int v24; // r4
  CEntity *v25; // r2
  double v26; // [sp+0h] [bp-30h] BYREF
  int v27; // [sp+8h] [bp-28h]
  double v28; // [sp+10h] [bp-20h] BYREF
  int v29; // [sp+18h] [bp-18h]

  ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 701);
  SimplestActiveTask = CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
  IsPlayer = CPed::IsPlayer(a2);
  if ( !ActiveTaskByType && IsPlayer && !CTask::IsGoToTask((CTask *)SimplestActiveTask, v7)
    || CPed::IsAlive(a2) != 1
    || *((unsigned __int8 *)a2 + 1157) << 31
    || *((_DWORD *)this + 5) == 1 )
  {
    return 0;
  }
  v8 = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 508);
  v9 = v8;
  if ( !v8 )
  {
    if ( *((_DWORD *)a2 + 64) )
      return 0;
    v15 = *((_DWORD *)this + 4);
    if ( !v15 )
      return 0;
    v16 = *(_DWORD *)(v15 + 1444) + 1;
    if ( v16 <= 9 && ((1 << v16) & 0x301) != 0 )
      return 0;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)SimplestActiveTask + 20))(SimplestActiveTask) == 900 )
    {
      v18 = *(double *)(SimplestActiveTask + 12);
      v29 = *(_DWORD *)(SimplestActiveTask + 20);
      v19 = 1;
      v28 = v18;
      if ( ActiveTaskByType )
      {
LABEL_22:
        v20 = *((_DWORD *)this + 4);
        v21 = *(_DWORD *)(ActiveTaskByType + 12);
        v22 = v20 == v21;
        if ( v20 == v21 )
          v22 = *(_DWORD *)(v20 + 1444) == 4;
        if ( v22 )
          return 0;
        CTaskComplexEnterCar::GetTargetPos((CTaskComplexEnterCar *)&v26);
        v29 = v27;
        v28 = v26;
LABEL_28:
        CPedGeometryAnalyser::ComputeClosestSurfacePoint(a2, *((const CPed **)this + 4), (CEntity *)&v26, v17);
        v24 = CPedGeometryAnalyser::ComputeEntityHitSide(
                (CPedGeometryAnalyser *)&v26,
                *((const CVector **)this + 4),
                v23);
        return v24 != CPedGeometryAnalyser::ComputeEntityHitSide(
                        (CPedGeometryAnalyser *)&v28,
                        *((const CVector **)this + 4),
                        v25);
      }
    }
    else
    {
      v19 = 0;
      if ( ActiveTaskByType )
        goto LABEL_22;
    }
    if ( v19 != 1 )
      return 1;
    goto LABEL_28;
  }
  v10 = (CVehicle *)*((_DWORD *)this + 4);
  v11 = *(CVehicle **)(v8 + 28);
  if ( v11 == v10 )
    return 0;
  v12 = (CVehicle *)*((_DWORD *)v10 + 309);
  if ( v12 && v12 == v11 || (v13 = (CVehicle *)*((_DWORD *)v10 + 308), result = 0, v13) && v13 == v11 )
  {
    CTaskComplexWalkRoundCar::SetNewVehicle((CEntity **)v9, v10, (char)(4 * *(_BYTE *)(v9 + 13)) >> 4);
    return 0;
  }
  return result;
}


// ============================================================

// Address: 0x374100
// Original: _ZNK30CEventPotentialWalkIntoVehicle17TakesPriorityOverERK6CEvent
// Demangled: CEventPotentialWalkIntoVehicle::TakesPriorityOver(CEvent const&)
int __fastcall CEventPotentialWalkIntoVehicle::TakesPriorityOver(
        CEventPotentialWalkIntoVehicle *this,
        const CEvent *a2)
{
  return 1;
}


// ============================================================

// Address: 0x379bf0
// Original: _ZNK30CEventPotentialWalkIntoVehicle12GetEventTypeEv
// Demangled: CEventPotentialWalkIntoVehicle::GetEventType(void)
int __fastcall CEventPotentialWalkIntoVehicle::GetEventType(CEventPotentialWalkIntoVehicle *this)
{
  return 56;
}


// ============================================================

// Address: 0x379bf4
// Original: _ZNK30CEventPotentialWalkIntoVehicle16GetEventPriorityEv
// Demangled: CEventPotentialWalkIntoVehicle::GetEventPriority(void)
int __fastcall CEventPotentialWalkIntoVehicle::GetEventPriority(CEventPotentialWalkIntoVehicle *this)
{
  return 29;
}


// ============================================================

// Address: 0x379bf8
// Original: _ZNK30CEventPotentialWalkIntoVehicle11GetLifeTimeEv
// Demangled: CEventPotentialWalkIntoVehicle::GetLifeTime(void)
int __fastcall CEventPotentialWalkIntoVehicle::GetLifeTime(CEventPotentialWalkIntoVehicle *this)
{
  return 0;
}


// ============================================================

// Address: 0x379bfc
// Original: _ZNK30CEventPotentialWalkIntoVehicle13CloneEditableEv
// Demangled: CEventPotentialWalkIntoVehicle::CloneEditable(void)
int __fastcall CEventPotentialWalkIntoVehicle::CloneEditable(CEventPotentialWalkIntoVehicle *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  __int64 v7; // kr08_8

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
  v7 = *((_QWORD *)this + 2);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_DWORD *)(v3 + 20) = HIDWORD(v7);
  *(_DWORD *)v3 = &off_666178;
  *(_DWORD *)(v3 + 16) = v7;
  if ( (_DWORD)v7 )
    CEntity::RegisterReference((CEntity *)v7, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

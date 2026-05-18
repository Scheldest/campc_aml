
// Address: 0x18ab08
// Original: j__ZN16CEventGunAimedAtD2Ev
// Demangled: CEventGunAimedAt::~CEventGunAimedAt()
// attributes: thunk
void __fastcall CEventGunAimedAt::~CEventGunAimedAt(CEventGunAimedAt *this)
{
  _ZN16CEventGunAimedAtD2Ev(this);
}


// ============================================================

// Address: 0x1974bc
// Original: j__ZN16CEventGunAimedAtC2EP4CPed
// Demangled: CEventGunAimedAt::CEventGunAimedAt(CPed *)
// attributes: thunk
void __fastcall CEventGunAimedAt::CEventGunAimedAt(CEventGunAimedAt *this, CPed *a2)
{
  _ZN16CEventGunAimedAtC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x3760fc
// Original: _ZN16CEventGunAimedAtC2EP4CPed
// Demangled: CEventGunAimedAt::CEventGunAimedAt(CPed *)
void __fastcall CEventGunAimedAt::CEventGunAimedAt(CEventGunAimedAt *this, CPed *a2)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *(_DWORD *)this = &off_666658;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x37613c
// Original: _ZN16CEventGunAimedAtD2Ev
// Demangled: CEventGunAimedAt::~CEventGunAimedAt()
void __fastcall CEventGunAimedAt::~CEventGunAimedAt(CEventGunAimedAt *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_666658;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x376164
// Original: _ZN16CEventGunAimedAtD0Ev
// Demangled: CEventGunAimedAt::~CEventGunAimedAt()
void __fastcall CEventGunAimedAt::~CEventGunAimedAt(CEventGunAimedAt *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_666658;
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

// Address: 0x3761b8
// Original: _ZNK16CEventGunAimedAt17TakesPriorityOverERK6CEvent
// Demangled: CEventGunAimedAt::TakesPriorityOver(CEvent const&)
bool __fastcall CEventGunAimedAt::TakesPriorityOver(CEventGunAimedAt *this, const CEvent *a2)
{
  CPed *v4; // r0
  int v5; // r0
  char v6; // r1
  _BOOL4 result; // r0
  int v8; // r5

  v4 = (CPed *)*((_DWORD *)this + 4);
  if ( !v4
    || CPed::IsPlayer(v4) != 1
    || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 44))(a2) == *((_DWORD *)this + 4)
    || (v5 = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2), v6 = v5 - 9, (unsigned int)(v5 - 9) > 0x1E)
    || (result = 1, ((1 << v6) & 0x48000001) == 0) )
  {
    v8 = (*(int (__fastcall **)(CEventGunAimedAt *))(*(_DWORD *)this + 12))(this);
    return v8 >= (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 12))(a2);
  }
  return result;
}


// ============================================================

// Address: 0x37621a
// Original: _ZNK16CEventGunAimedAt10AffectsPedEP4CPed
// Demangled: CEventGunAimedAt::AffectsPed(CPed *)
int __fastcall CEventGunAimedAt::AffectsPed(CEventGunAimedAt *this, CPedIntelligence **a2)
{
  int ActiveTask; // r0
  int v5; // r2
  int v6; // r3
  const CVector *v7; // r1
  const CPed *v8; // r2
  bool v10; // zf
  CVehicle *v11; // r0

  if ( CPed::IsPlayer((CPed *)a2) )
    return 0;
  if ( CTaskManager::GetActiveTask((CPedIntelligence *)((char *)a2[272] + 4)) )
  {
    ActiveTask = CTaskManager::GetActiveTask((CPedIntelligence *)((char *)a2[272] + 4));
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) == 601 )
      return 0;
  }
  v5 = *((_DWORD *)this + 4);
  if ( !v5 )
    return 0;
  v6 = *(_DWORD *)(v5 + 20);
  v7 = (const CVector *)(v6 + 48);
  if ( !v6 )
    v7 = (const CVector *)(v5 + 4);
  if ( CPedIntelligence::IsInSeeingRange(a2[272], v7) != 1
    || CPed::IsAlive((CPed *)a2) != 1
    || CPedGroups::AreInSameGroup((CPedGroups *)a2, *((const CPed **)this + 4), v8) )
  {
    return 0;
  }
  v11 = (CVehicle *)(*((unsigned __int8 *)a2 + 1157) << 31);
  v10 = v11 == 0;
  if ( v11 )
  {
    v11 = a2[356];
    v10 = v11 == 0;
  }
  if ( !v10 && CVehicle::IsPassenger(v11, (const CPed *)a2) == 1 && *((_DWORD *)a2[356] + 281) )
    return 0;
  if ( a2[359] == (CPedIntelligence *)byte_6 )
  {
    FindPlayerPed(-1);
    CCrime::ReportCrime();
  }
  return 1;
}


// ============================================================

// Address: 0x3762c8
// Original: _ZN16CEventGunAimedAt36AddGunAimedAtEventToVehicleOccupantsERK8CVehicleP4CPed
// Demangled: CEventGunAimedAt::AddGunAimedAtEventToVehicleOccupants(CVehicle const&,CPed *)
CEntity *__fastcall CEventGunAimedAt::AddGunAimedAtEventToVehicleOccupants(
        CEventGunAimedAt *this,
        const CVehicle *a2,
        CPed *a3)
{
  int v5; // r0
  char *v6; // r4
  int v7; // r9
  int v8; // r1
  CEntity *result; // r0
  _UNKNOWN **v10; // [sp+0h] [bp-30h] BYREF
  int v11; // [sp+4h] [bp-2Ch]
  int v12; // [sp+8h] [bp-28h]
  __int16 v13; // [sp+Ch] [bp-24h]
  CEntity *v14[8]; // [sp+10h] [bp-20h] BYREF

  v5 = *((unsigned __int8 *)this + 1164);
  if ( v5 )
  {
    v6 = (char *)this + 1128;
    v7 = 0;
    do
    {
      v8 = *(_DWORD *)&v6[4 * v7];
      if ( v8 )
      {
        v11 = 0;
        v12 = 13107456;
        v13 = -1;
        v14[0] = a2;
        v10 = &off_666658;
        if ( a2 )
        {
          CEntity::RegisterReference(a2, v14);
          v8 = *(_DWORD *)&v6[4 * v7];
        }
        CEventGroup::Add((CEventGroup *)(*(_DWORD *)(v8 + 1088) + 104), (CEvent *)&v10, 0);
        v10 = &off_666658;
        if ( v14[0] )
          CEntity::CleanUpOldReference(v14[0], v14);
        LOBYTE(v5) = *((_BYTE *)this + 1164);
      }
      ++v7;
    }
    while ( v7 < (unsigned __int8)v5 );
  }
  result = (CEntity *)*((_DWORD *)this + 281);
  if ( result )
  {
    v11 = 0;
    v12 = 13107456;
    v13 = -1;
    v14[0] = a2;
    v10 = &off_666658;
    if ( a2 )
    {
      CEntity::RegisterReference(a2, v14);
      result = (CEntity *)*((_DWORD *)this + 281);
    }
    CEventGroup::Add((CEventGroup *)(*((_DWORD *)result + 272) + 104), (CEvent *)&v10, 0);
    result = v14[0];
    v10 = &off_666658;
    if ( v14[0] )
      return (CEntity *)CEntity::CleanUpOldReference(v14[0], v14);
  }
  return result;
}


// ============================================================

// Address: 0x3763dc
// Original: _ZNK16CEventGunAimedAt15IsCriminalEventEv
// Demangled: CEventGunAimedAt::IsCriminalEvent(void)
bool __fastcall CEventGunAimedAt::IsCriminalEvent(CEventGunAimedAt *this)
{
  CPed *v1; // r0

  v1 = (CPed *)*((_DWORD *)this + 4);
  return v1 && CPed::IsPlayer(v1);
}


// ============================================================

// Address: 0x3763f8
// Original: _ZNK16CEventGunAimedAt19ReportCriminalEventEP4CPed
// Demangled: CEventGunAimedAt::ReportCriminalEvent(CPed *)
int __fastcall CEventGunAimedAt::ReportCriminalEvent(CEventGunAimedAt *this, CPedType **a2)
{
  int result; // r0
  int v4; // r1

  result = (*(int (__fastcall **)(CEventGunAimedAt *))(*(_DWORD *)this + 32))(this);
  if ( result == 1 )
    return CPedType::PoliceDontCareAboutCrimesAgainstPedType(a2[359], v4);
  return result;
}


// ============================================================

// Address: 0x37a660
// Original: _ZNK16CEventGunAimedAt12GetEventTypeEv
// Demangled: CEventGunAimedAt::GetEventType(void)
int __fastcall CEventGunAimedAt::GetEventType(CEventGunAimedAt *this)
{
  return 31;
}


// ============================================================

// Address: 0x37a664
// Original: _ZNK16CEventGunAimedAt16GetEventPriorityEv
// Demangled: CEventGunAimedAt::GetEventPriority(void)
int __fastcall CEventGunAimedAt::GetEventPriority(CEventGunAimedAt *this)
{
  return 50;
}


// ============================================================

// Address: 0x37a668
// Original: _ZNK16CEventGunAimedAt11GetLifeTimeEv
// Demangled: CEventGunAimedAt::GetLifeTime(void)
int __fastcall CEventGunAimedAt::GetLifeTime(CEventGunAimedAt *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a66c
// Original: _ZNK16CEventGunAimedAt15GetSourceEntityEv
// Demangled: CEventGunAimedAt::GetSourceEntity(void)
int __fastcall CEventGunAimedAt::GetSourceEntity(CEventGunAimedAt *this)
{
  return *((_DWORD *)this + 4);
}


// ============================================================

// Address: 0x37a670
// Original: _ZNK16CEventGunAimedAt13CloneEditableEv
// Demangled: CEventGunAimedAt::CloneEditable(void)
int __fastcall CEventGunAimedAt::CloneEditable(CEventGunAimedAt *this)
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
  v7 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_DWORD *)v3 = &off_666658;
  *(_DWORD *)(v3 + 16) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================


// Address: 0x198928
// Original: j__ZN19CEventDraggedOutCarC2EPK8CVehiclePK4CPedb
// Demangled: CEventDraggedOutCar::CEventDraggedOutCar(CVehicle const*,CPed const*,bool)
// attributes: thunk
void __fastcall CEventDraggedOutCar::CEventDraggedOutCar(
        CEventDraggedOutCar *this,
        const CVehicle *a2,
        const CPed *a3,
        bool a4)
{
  _ZN19CEventDraggedOutCarC2EPK8CVehiclePK4CPedb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19e070
// Original: j__ZN19CEventDraggedOutCarD2Ev
// Demangled: CEventDraggedOutCar::~CEventDraggedOutCar()
// attributes: thunk
void __fastcall CEventDraggedOutCar::~CEventDraggedOutCar(CEventDraggedOutCar *this)
{
  _ZN19CEventDraggedOutCarD2Ev(this);
}


// ============================================================

// Address: 0x3719a8
// Original: _ZN19CEventDraggedOutCarC2EPK8CVehiclePK4CPedb
// Demangled: CEventDraggedOutCar::CEventDraggedOutCar(CVehicle const*,CPed const*,bool)
void __fastcall CEventDraggedOutCar::CEventDraggedOutCar(
        CEventDraggedOutCar *this,
        const CVehicle *a2,
        const CPed *a3,
        bool a4)
{
  const CPed **v5; // r5

  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *((_BYTE *)this + 24) = a4;
  *(_DWORD *)this = &off_665FA0;
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 4) = a3;
  v5 = (const CPed **)((char *)this + 16);
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 5);
    a3 = *v5;
  }
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x371a00
// Original: _ZN19CEventDraggedOutCarD2Ev
// Demangled: CEventDraggedOutCar::~CEventDraggedOutCar()
void __fastcall CEventDraggedOutCar::~CEventDraggedOutCar(CEventDraggedOutCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_665FA0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x371a34
// Original: _ZN19CEventDraggedOutCarD0Ev
// Demangled: CEventDraggedOutCar::~CEventDraggedOutCar()
void __fastcall CEventDraggedOutCar::~CEventDraggedOutCar(CEventDraggedOutCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  int v5; // r0
  int v6; // r1

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_665FA0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 4);
  v5 = CPools::ms_pEventPool;
  v6 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v6) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v6 < *(_DWORD *)(v5 + 12) )
    *(_DWORD *)(v5 + 12) = v6;
}


// ============================================================

// Address: 0x371a94
// Original: _ZNK19CEventDraggedOutCar10AffectsPedEP4CPed
// Demangled: CEventDraggedOutCar::AffectsPed(CPed *)
bool __fastcall CEventDraggedOutCar::AffectsPed(CEventDraggedOutCar *this, CPed *a2)
{
  return CPed::IsAlive(a2) == 1 && *((_DWORD *)this + 4) != 0;
}


// ============================================================

// Address: 0x371ab2
// Original: _ZNK19CEventDraggedOutCar15AffectsPedGroupEP9CPedGroup
// Demangled: CEventDraggedOutCar::AffectsPedGroup(CPedGroup *)
bool __fastcall CEventDraggedOutCar::AffectsPedGroup(CEventDraggedOutCar *this, CPedGroup *a2)
{
  int Leader; // r4

  Leader = CPedGroupMembership::GetLeader((CPedGroup *)((char *)a2 + 8));
  return Leader == FindPlayerPed(-1);
}


// ============================================================

// Address: 0x379860
// Original: _ZNK19CEventDraggedOutCar12GetEventTypeEv
// Demangled: CEventDraggedOutCar::GetEventType(void)
int __fastcall CEventDraggedOutCar::GetEventType(CEventDraggedOutCar *this)
{
  return 7;
}


// ============================================================

// Address: 0x379864
// Original: _ZNK19CEventDraggedOutCar16GetEventPriorityEv
// Demangled: CEventDraggedOutCar::GetEventPriority(void)
int __fastcall CEventDraggedOutCar::GetEventPriority(CEventDraggedOutCar *this)
{
  return 40;
}


// ============================================================

// Address: 0x379868
// Original: _ZNK19CEventDraggedOutCar11GetLifeTimeEv
// Demangled: CEventDraggedOutCar::GetLifeTime(void)
int __fastcall CEventDraggedOutCar::GetLifeTime(CEventDraggedOutCar *this)
{
  return 0;
}


// ============================================================

// Address: 0x37986c
// Original: _ZNK19CEventDraggedOutCar15GetSourceEntityEv
// Demangled: CEventDraggedOutCar::GetSourceEntity(void)
int __fastcall CEventDraggedOutCar::GetSourceEntity(CEventDraggedOutCar *this)
{
  return *((_DWORD *)this + 4);
}


// ============================================================

// Address: 0x379870
// Original: _ZNK19CEventDraggedOutCar18GetLocalSoundLevelEv
// Demangled: CEventDraggedOutCar::GetLocalSoundLevel(void)
int __fastcall CEventDraggedOutCar::GetLocalSoundLevel(CEventDraggedOutCar *this)
{
  return 1120403456;
}


// ============================================================

// Address: 0x379878
// Original: _ZNK19CEventDraggedOutCar13CloneEditableEv
// Demangled: CEventDraggedOutCar::CloneEditable(void)
int __fastcall CEventDraggedOutCar::CloneEditable(CEventDraggedOutCar *this)
{
  int v1; // r3
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r5
  int v6; // r2
  CEntity *v7; // r2
  CEntity *v8; // r3
  char v9; // r0

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
  v7 = (CEntity *)*((_DWORD *)this + 5);
  v8 = (CEntity *)*((_DWORD *)this + 4);
  v9 = *((_BYTE *)this + 24);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_BYTE *)(v3 + 24) = v9;
  *(_DWORD *)v3 = &off_665FA0;
  *(_QWORD *)(v3 + 16) = __PAIR64__((unsigned int)v7, (unsigned int)v8);
  if ( v7 )
  {
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 20));
    v8 = *(CEntity **)(v3 + 16);
  }
  if ( v8 )
    CEntity::RegisterReference(v8, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

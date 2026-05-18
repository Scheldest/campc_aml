
// Address: 0x19337c
// Original: j__ZN25CEventPedEnteredMyVehicleC2EPK4CPedPK8CVehiclei
// Demangled: CEventPedEnteredMyVehicle::CEventPedEnteredMyVehicle(CPed const*,CVehicle const*,int)
// attributes: thunk
void __fastcall CEventPedEnteredMyVehicle::CEventPedEnteredMyVehicle(
        CEventPedEnteredMyVehicle *this,
        const CPed *a2,
        const CVehicle *a3,
        int a4)
{
  _ZN25CEventPedEnteredMyVehicleC2EPK4CPedPK8CVehiclei(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19f4e8
// Original: j__ZN25CEventPedEnteredMyVehicleD2Ev
// Demangled: CEventPedEnteredMyVehicle::~CEventPedEnteredMyVehicle()
// attributes: thunk
void __fastcall CEventPedEnteredMyVehicle::~CEventPedEnteredMyVehicle(CEventPedEnteredMyVehicle *this)
{
  _ZN25CEventPedEnteredMyVehicleD2Ev(this);
}


// ============================================================

// Address: 0x374580
// Original: _ZN25CEventPedEnteredMyVehicleC2EPK4CPedPK8CVehiclei
// Demangled: CEventPedEnteredMyVehicle::CEventPedEnteredMyVehicle(CPed const*,CVehicle const*,int)
void __fastcall CEventPedEnteredMyVehicle::CEventPedEnteredMyVehicle(
        CEventPedEnteredMyVehicle *this,
        const CPed *a2,
        const CVehicle *a3,
        int a4)
{
  CEntity **v5; // r5

  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *((_DWORD *)this + 6) = a4;
  *(_DWORD *)this = &off_6662B4;
  *((_DWORD *)this + 5) = a3;
  v5 = (CEntity **)((char *)this + 20);
  *((_DWORD *)this + 4) = a2;
  CEntity::RegisterReference(a2, (CEntity **)this + 4);
  CEntity::RegisterReference(*v5, (CEntity **)this + 5);
}


// ============================================================

// Address: 0x3745cc
// Original: _ZN25CEventPedEnteredMyVehicleD2Ev
// Demangled: CEventPedEnteredMyVehicle::~CEventPedEnteredMyVehicle()
void __fastcall CEventPedEnteredMyVehicle::~CEventPedEnteredMyVehicle(CEventPedEnteredMyVehicle *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_6662B4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 5);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 5);
}


// ============================================================

// Address: 0x374600
// Original: _ZN25CEventPedEnteredMyVehicleD0Ev
// Demangled: CEventPedEnteredMyVehicle::~CEventPedEnteredMyVehicle()
void __fastcall CEventPedEnteredMyVehicle::~CEventPedEnteredMyVehicle(CEventPedEnteredMyVehicle *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  int v5; // r0
  int v6; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_6662B4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 5);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 5);
  v5 = CPools::ms_pEventPool;
  v6 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v6) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v6 < *(_DWORD *)(v5 + 12) )
    *(_DWORD *)(v5 + 12) = v6;
}


// ============================================================

// Address: 0x374660
// Original: _ZNK25CEventPedEnteredMyVehicle10AffectsPedEP4CPed
// Demangled: CEventPedEnteredMyVehicle::AffectsPed(CPed *)
bool __fastcall CEventPedEnteredMyVehicle::AffectsPed(CEventPedEnteredMyVehicle *this, CPed *a2)
{
  int v4; // r0
  bool v5; // zf

  if ( CPed::IsAlive(a2) != 1 )
    return 0;
  v4 = *((_DWORD *)a2 + 356);
  v5 = v4 == 0;
  if ( v4 )
    v5 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
  return !v5 && v4 == *((_DWORD *)this + 5) && *((_DWORD *)this + 4) != 0;
}


// ============================================================

// Address: 0x379f16
// Original: _ZNK25CEventPedEnteredMyVehicle12GetEventTypeEv
// Demangled: CEventPedEnteredMyVehicle::GetEventType(void)
int __fastcall CEventPedEnteredMyVehicle::GetEventType(CEventPedEnteredMyVehicle *this)
{
  return 17;
}


// ============================================================

// Address: 0x379f1a
// Original: _ZNK25CEventPedEnteredMyVehicle16GetEventPriorityEv
// Demangled: CEventPedEnteredMyVehicle::GetEventPriority(void)
int __fastcall CEventPedEnteredMyVehicle::GetEventPriority(CEventPedEnteredMyVehicle *this)
{
  return 39;
}


// ============================================================

// Address: 0x379f1e
// Original: _ZNK25CEventPedEnteredMyVehicle11GetLifeTimeEv
// Demangled: CEventPedEnteredMyVehicle::GetLifeTime(void)
int __fastcall CEventPedEnteredMyVehicle::GetLifeTime(CEventPedEnteredMyVehicle *this)
{
  return 0;
}


// ============================================================

// Address: 0x379f22
// Original: _ZNK25CEventPedEnteredMyVehicle15GetSourceEntityEv
// Demangled: CEventPedEnteredMyVehicle::GetSourceEntity(void)
int __fastcall CEventPedEnteredMyVehicle::GetSourceEntity(CEventPedEnteredMyVehicle *this)
{
  return *((_DWORD *)this + 4);
}


// ============================================================

// Address: 0x379f26
// Original: _ZNK25CEventPedEnteredMyVehicle18GetLocalSoundLevelEv
// Demangled: CEventPedEnteredMyVehicle::GetLocalSoundLevel(void)
int __fastcall CEventPedEnteredMyVehicle::GetLocalSoundLevel(CEventPedEnteredMyVehicle *this)
{
  return 1114636288;
}


// ============================================================

// Address: 0x379f30
// Original: _ZNK25CEventPedEnteredMyVehicle13CloneEditableEv
// Demangled: CEventPedEnteredMyVehicle::CloneEditable(void)
int __fastcall CEventPedEnteredMyVehicle::CloneEditable(CEventPedEnteredMyVehicle *this)
{
  int v1; // r3
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r5
  int v6; // r2
  __int64 v7; // r2
  int v8; // r0

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
  v8 = *((_DWORD *)this + 6);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_DWORD *)(v3 + 24) = v8;
  *(_DWORD *)v3 = &off_6662B4;
  *(_QWORD *)(v3 + 16) = v7;
  CEntity::RegisterReference((CEntity *)v7, (CEntity **)(v3 + 16));
  CEntity::RegisterReference(*(CEntity **)(v3 + 20), (CEntity **)(v3 + 20));
  return v3;
}


// ============================================================


// Address: 0x1965c4
// Original: j__ZN19CEventVehicleOnFireC2EP8CVehicle
// Demangled: CEventVehicleOnFire::CEventVehicleOnFire(CVehicle *)
// attributes: thunk
void __fastcall CEventVehicleOnFire::CEventVehicleOnFire(CEventVehicleOnFire *this, CVehicle *a2)
{
  _ZN19CEventVehicleOnFireC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x198624
// Original: j__ZN19CEventVehicleOnFireD2Ev
// Demangled: CEventVehicleOnFire::~CEventVehicleOnFire()
// attributes: thunk
void __fastcall CEventVehicleOnFire::~CEventVehicleOnFire(CEventVehicleOnFire *this)
{
  _ZN19CEventVehicleOnFireD2Ev(this);
}


// ============================================================

// Address: 0x376980
// Original: _ZN19CEventVehicleOnFireC2EP8CVehicle
// Demangled: CEventVehicleOnFire::CEventVehicleOnFire(CVehicle *)
void __fastcall CEventVehicleOnFire::CEventVehicleOnFire(CEventVehicleOnFire *this, CVehicle *a2)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *(_DWORD *)this = &off_666790;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x3769c0
// Original: _ZN19CEventVehicleOnFireD2Ev
// Demangled: CEventVehicleOnFire::~CEventVehicleOnFire()
void __fastcall CEventVehicleOnFire::~CEventVehicleOnFire(CEventVehicleOnFire *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_666790;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x3769e8
// Original: _ZN19CEventVehicleOnFireD0Ev
// Demangled: CEventVehicleOnFire::~CEventVehicleOnFire()
void __fastcall CEventVehicleOnFire::~CEventVehicleOnFire(CEventVehicleOnFire *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_666790;
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

// Address: 0x376a3c
// Original: _ZNK19CEventVehicleOnFire10AffectsPedEP4CPed
// Demangled: CEventVehicleOnFire::AffectsPed(CPed *)
bool __fastcall CEventVehicleOnFire::AffectsPed(CEventVehicleOnFire *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  bool v6; // zf
  const CPed *v7; // r1
  int PedsGroup; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r2
  char *v12; // r3
  int v13; // r1
  float32x2_t v14; // d16
  unsigned __int64 v15; // d1

  v4 = *((_DWORD *)this + 4);
  if ( !v4 )
    return 0;
  v5 = *((_DWORD *)a2 + 356);
  v6 = v5 == 0;
  if ( v5 )
    v6 = v5 == v4;
  if ( !v6 && (*((_DWORD *)a2 + 289) & 0x100) != 0 )
    return 0;
  if ( CPed::IsPlayer(a2) )
    return 0;
  if ( CPed::IsAlive(a2) != 1 )
    return 0;
  PedsGroup = CPedGroups::GetPedsGroup(a2, v7);
  if ( PedsGroup )
  {
    if ( !CPedGroupMembership::IsLeader((CPedGroupMembership *)(PedsGroup + 8), a2)
      && *((unsigned __int8 *)a2 + 1157) << 31 )
    {
      return 0;
    }
  }
  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    return 1;
  v9 = *((_DWORD *)this + 4);
  v10 = *((_DWORD *)a2 + 5);
  v11 = *(_DWORD *)(v9 + 20);
  v12 = (char *)(v10 + 48);
  if ( !v10 )
    v12 = (char *)a2 + 4;
  v13 = v11 + 48;
  if ( !v11 )
    v13 = v9 + 4;
  v14.n64_u64[0] = vsub_f32(*(float32x2_t *)(v12 + 4), *(float32x2_t *)(v13 + 4)).n64_u64[0];
  v15 = vmul_f32(v14, v14).n64_u64[0];
  return (float)((float)((float)((float)(*(float *)v12 - *(float *)v13) * (float)(*(float *)v12 - *(float *)v13))
                       + *(float *)&v15)
               + *((float *)&v15 + 1)) <= 100.0;
}


// ============================================================

// Address: 0x37a828
// Original: _ZNK19CEventVehicleOnFire12GetEventTypeEv
// Demangled: CEventVehicleOnFire::GetEventType(void)
int __fastcall CEventVehicleOnFire::GetEventType(CEventVehicleOnFire *this)
{
  return 79;
}


// ============================================================

// Address: 0x37a82c
// Original: _ZNK19CEventVehicleOnFire16GetEventPriorityEv
// Demangled: CEventVehicleOnFire::GetEventPriority(void)
int __fastcall CEventVehicleOnFire::GetEventPriority(CEventVehicleOnFire *this)
{
  return 54;
}


// ============================================================

// Address: 0x37a830
// Original: _ZNK19CEventVehicleOnFire11GetLifeTimeEv
// Demangled: CEventVehicleOnFire::GetLifeTime(void)
int __fastcall CEventVehicleOnFire::GetLifeTime(CEventVehicleOnFire *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a834
// Original: _ZNK19CEventVehicleOnFire18GetLocalSoundLevelEv
// Demangled: CEventVehicleOnFire::GetLocalSoundLevel(void)
int __fastcall CEventVehicleOnFire::GetLocalSoundLevel(CEventVehicleOnFire *this)
{
  return 1114636288;
}


// ============================================================

// Address: 0x37a83c
// Original: _ZNK19CEventVehicleOnFire13CloneEditableEv
// Demangled: CEventVehicleOnFire::CloneEditable(void)
int __fastcall CEventVehicleOnFire::CloneEditable(CEventVehicleOnFire *this)
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
  *(_DWORD *)v3 = &off_666790;
  *(_DWORD *)(v3 + 16) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

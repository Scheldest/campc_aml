
// Address: 0x18a198
// Original: j__ZN17CEventSexyVehicleC2EP8CVehicle
// Demangled: CEventSexyVehicle::CEventSexyVehicle(CVehicle *)
// attributes: thunk
void __fastcall CEventSexyVehicle::CEventSexyVehicle(CEventSexyVehicle *this, CVehicle *a2)
{
  _ZN17CEventSexyVehicleC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x19b524
// Original: j__ZN17CEventSexyVehicleD2Ev
// Demangled: CEventSexyVehicle::~CEventSexyVehicle()
// attributes: thunk
void __fastcall CEventSexyVehicle::~CEventSexyVehicle(CEventSexyVehicle *this)
{
  _ZN17CEventSexyVehicleD2Ev(this);
}


// ============================================================

// Address: 0x37496c
// Original: _ZN17CEventSexyVehicleC2EP8CVehicle
// Demangled: CEventSexyVehicle::CEventSexyVehicle(CVehicle *)
void __fastcall CEventSexyVehicle::CEventSexyVehicle(CEventSexyVehicle *this, CVehicle *a2)
{
  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_6663EC;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x3749a0
// Original: _ZN17CEventSexyVehicleD2Ev
// Demangled: CEventSexyVehicle::~CEventSexyVehicle()
void __fastcall CEventSexyVehicle::~CEventSexyVehicle(CEventSexyVehicle *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6663EC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x3749c8
// Original: _ZN17CEventSexyVehicleD0Ev
// Demangled: CEventSexyVehicle::~CEventSexyVehicle()
void __fastcall CEventSexyVehicle::~CEventSexyVehicle(CEventSexyVehicle *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6663EC;
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

// Address: 0x374a1c
// Original: _ZNK17CEventSexyVehicle10AffectsPedEP4CPed
// Demangled: CEventSexyVehicle::AffectsPed(CPed *)
bool __fastcall CEventSexyVehicle::AffectsPed(CEventSexyVehicle *this, CPed *a2)
{
  return CPed::IsAlive(a2) == 1 && *((_DWORD *)this + 3) != 0;
}


// ============================================================

// Address: 0x37a19c
// Original: _ZNK17CEventSexyVehicle12GetEventTypeEv
// Demangled: CEventSexyVehicle::GetEventType(void)
int __fastcall CEventSexyVehicle::GetEventType(CEventSexyVehicle *this)
{
  return 21;
}


// ============================================================

// Address: 0x37a1a0
// Original: _ZNK17CEventSexyVehicle16GetEventPriorityEv
// Demangled: CEventSexyVehicle::GetEventPriority(void)
int __fastcall CEventSexyVehicle::GetEventPriority(CEventSexyVehicle *this)
{
  return 3;
}


// ============================================================

// Address: 0x37a1a4
// Original: _ZNK17CEventSexyVehicle11GetLifeTimeEv
// Demangled: CEventSexyVehicle::GetLifeTime(void)
int __fastcall CEventSexyVehicle::GetLifeTime(CEventSexyVehicle *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a1a8
// Original: _ZNK17CEventSexyVehicle5CloneEv
// Demangled: CEventSexyVehicle::Clone(void)
int __fastcall CEventSexyVehicle::Clone(CEventSexyVehicle *this)
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
  *(_DWORD *)v3 = &off_6663EC;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 12) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

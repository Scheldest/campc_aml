
// Address: 0x18c310
// Original: j__ZN17CEventVehicleDiedC2EP8CVehicle
// Demangled: CEventVehicleDied::CEventVehicleDied(CVehicle *)
// attributes: thunk
void __fastcall CEventVehicleDied::CEventVehicleDied(CEventVehicleDied *this, CVehicle *a2)
{
  _ZN17CEventVehicleDiedC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x19f14c
// Original: j__ZN17CEventVehicleDiedD2Ev
// Demangled: CEventVehicleDied::~CEventVehicleDied()
// attributes: thunk
void __fastcall CEventVehicleDied::~CEventVehicleDied(CEventVehicleDied *this)
{
  _ZN17CEventVehicleDiedD2Ev(this);
}


// ============================================================

// Address: 0x376720
// Original: _ZN17CEventVehicleDiedC2EP8CVehicle
// Demangled: CEventVehicleDied::CEventVehicleDied(CVehicle *)
void __fastcall CEventVehicleDied::CEventVehicleDied(CEventVehicleDied *this, CVehicle *a2)
{
  *((_BYTE *)this + 8) = 0;
  *((_BYTE *)this + 16) = 0;
  *(_DWORD *)this = &off_666744;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = a2;
  CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x376750
// Original: _ZN17CEventVehicleDiedD2Ev
// Demangled: CEventVehicleDied::~CEventVehicleDied()
void __fastcall CEventVehicleDied::~CEventVehicleDied(CEventVehicleDied *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666744;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x376778
// Original: _ZN17CEventVehicleDiedD0Ev
// Demangled: CEventVehicleDied::~CEventVehicleDied()
void __fastcall CEventVehicleDied::~CEventVehicleDied(CEventVehicleDied *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666744;
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

// Address: 0x3767cc
// Original: _ZNK17CEventVehicleDied10AffectsPedEP4CPed
// Demangled: CEventVehicleDied::AffectsPed(CPed *)
bool __fastcall CEventVehicleDied::AffectsPed(CEventVehicleDied *this, CPed *a2)
{
  int ActiveTaskByType; // r0
  int v5; // r1
  _BOOL4 result; // r0

  if ( CPed::IsAlive(a2) != 1 )
    return 0;
  if ( !*((_BYTE *)this + 16) )
  {
    ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 704);
    *((_BYTE *)this + 16) = ActiveTaskByType != 0;
    if ( !ActiveTaskByType && !(*((unsigned __int8 *)a2 + 1157) << 31) )
      return 0;
  }
  v5 = *((_DWORD *)this + 3);
  result = 0;
  if ( v5 )
    return *((_DWORD *)a2 + 356) == v5;
  return result;
}


// ============================================================

// Address: 0x37a794
// Original: _ZNK17CEventVehicleDied12GetEventTypeEv
// Demangled: CEventVehicleDied::GetEventType(void)
int __fastcall CEventVehicleDied::GetEventType(CEventVehicleDied *this)
{
  return 35;
}


// ============================================================

// Address: 0x37a798
// Original: _ZNK17CEventVehicleDied16GetEventPriorityEv
// Demangled: CEventVehicleDied::GetEventPriority(void)
int __fastcall CEventVehicleDied::GetEventPriority(CEventVehicleDied *this)
{
  return 72;
}


// ============================================================

// Address: 0x37a79c
// Original: _ZNK17CEventVehicleDied11GetLifeTimeEv
// Demangled: CEventVehicleDied::GetLifeTime(void)
int __fastcall CEventVehicleDied::GetLifeTime(CEventVehicleDied *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a7a0
// Original: _ZNK17CEventVehicleDied5CloneEv
// Demangled: CEventVehicleDied::Clone(void)
int __fastcall CEventVehicleDied::Clone(CEventVehicleDied *this)
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
  *(_BYTE *)(v3 + 16) = 0;
  *(_DWORD *)v3 = &off_666744;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 12) = v7;
  CEntity::RegisterReference(v7, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

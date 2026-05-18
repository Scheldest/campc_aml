
// Address: 0x376e8e
// Original: _ZNK19CEventLeanOnVehicle7IsValidEP4CPed
// Demangled: CEventLeanOnVehicle::IsValid(CPed *)
int __fastcall CEventLeanOnVehicle::IsValid(CEventLeanOnVehicle *this, CPed *a2)
{
  __int64 v3; // kr00_8

  if ( a2 )
    return sub_196874(a2);
  if ( *((_BYTE *)this + 8) )
    return 1;
  v3 = *(_QWORD *)this;
  return SHIDWORD(v3) <= (*(int (__fastcall **)(CEventLeanOnVehicle *))(*(_DWORD *)this + 16))(this);
}


// ============================================================

// Address: 0x378cc4
// Original: _ZN19CEventLeanOnVehicleD2Ev
// Demangled: CEventLeanOnVehicle::~CEventLeanOnVehicle()
void __fastcall CEventLeanOnVehicle::~CEventLeanOnVehicle(CEventLeanOnVehicle *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_667074;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x378cec
// Original: _ZN19CEventLeanOnVehicleD0Ev
// Demangled: CEventLeanOnVehicle::~CEventLeanOnVehicle()
void __fastcall CEventLeanOnVehicle::~CEventLeanOnVehicle(CEventLeanOnVehicle *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_667074;
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

// Address: 0x378d40
// Original: _ZNK19CEventLeanOnVehicle12GetEventTypeEv
// Demangled: CEventLeanOnVehicle::GetEventType(void)
int __fastcall CEventLeanOnVehicle::GetEventType(CEventLeanOnVehicle *this)
{
  return 92;
}


// ============================================================

// Address: 0x378d44
// Original: _ZNK19CEventLeanOnVehicle16GetEventPriorityEv
// Demangled: CEventLeanOnVehicle::GetEventPriority(void)
int __fastcall CEventLeanOnVehicle::GetEventPriority(CEventLeanOnVehicle *this)
{
  return 12;
}


// ============================================================

// Address: 0x378d48
// Original: _ZNK19CEventLeanOnVehicle11GetLifeTimeEv
// Demangled: CEventLeanOnVehicle::GetLifeTime(void)
int __fastcall CEventLeanOnVehicle::GetLifeTime(CEventLeanOnVehicle *this)
{
  return 0;
}


// ============================================================

// Address: 0x378d4c
// Original: _ZNK19CEventLeanOnVehicle5CloneEv
// Demangled: CEventLeanOnVehicle::Clone(void)
int __fastcall CEventLeanOnVehicle::Clone(CEventLeanOnVehicle *this)
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
  v7 = *(_QWORD *)((char *)this + 12);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 16) = HIDWORD(v7);
  *(_DWORD *)v3 = &off_667074;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 12) = v7;
  if ( (_DWORD)v7 )
    CEntity::RegisterReference((CEntity *)v7, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x378ddc
// Original: _ZNK19CEventLeanOnVehicle10AffectsPedEP4CPed
// Demangled: CEventLeanOnVehicle::AffectsPed(CPed *)
int __fastcall CEventLeanOnVehicle::AffectsPed(CEventLeanOnVehicle *this, CPed *a2)
{
  return 1;
}


// ============================================================

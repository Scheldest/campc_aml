
// Address: 0x18e200
// Original: j__ZN16CEventStuckInAirD2Ev
// Demangled: CEventStuckInAir::~CEventStuckInAir()
// attributes: thunk
void __fastcall CEventStuckInAir::~CEventStuckInAir(CEventStuckInAir *this)
{
  _ZN16CEventStuckInAirD2Ev(this);
}


// ============================================================

// Address: 0x18ead8
// Original: j__ZN16CEventStuckInAirC2EP4CPed
// Demangled: CEventStuckInAir::CEventStuckInAir(CPed *)
// attributes: thunk
void __fastcall CEventStuckInAir::CEventStuckInAir(CEventStuckInAir *this, CPed *a2)
{
  _ZN16CEventStuckInAirC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x376cfc
// Original: _ZN16CEventStuckInAirC2EP4CPed
// Demangled: CEventStuckInAir::CEventStuckInAir(CPed *)
void __fastcall CEventStuckInAir::CEventStuckInAir(CEventStuckInAir *this, CPed *a2)
{
  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_666878;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x376d30
// Original: _ZN16CEventStuckInAirD2Ev
// Demangled: CEventStuckInAir::~CEventStuckInAir()
void __fastcall CEventStuckInAir::~CEventStuckInAir(CEventStuckInAir *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666878;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x376d58
// Original: _ZN16CEventStuckInAirD0Ev
// Demangled: CEventStuckInAir::~CEventStuckInAir()
void __fastcall CEventStuckInAir::~CEventStuckInAir(CEventStuckInAir *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666878;
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

// Address: 0x376dac
// Original: _ZNK16CEventStuckInAir10AffectsPedEP4CPed
// Demangled: CEventStuckInAir::AffectsPed(CPed *)
int __fastcall CEventStuckInAir::AffectsPed(CEventStuckInAir *this, CPed *a2)
{
  int result; // r0

  if ( *((unsigned __int8 *)a2 + 1156) << 31 )
    return 0;
  result = *(unsigned __int16 *)(*((_DWORD *)a2 + 272) + 630);
  if ( *(_WORD *)(*((_DWORD *)a2 + 272) + 630) )
    return 1;
  return result;
}


// ============================================================

// Address: 0x376dc8
// Original: _ZNK16CEventStuckInAir17TakesPriorityOverERK6CEvent
// Demangled: CEventStuckInAir::TakesPriorityOver(CEvent const&)
bool __fastcall CEventStuckInAir::TakesPriorityOver(CEventStuckInAir *this, const CEvent *a2)
{
  int v5; // r5

  if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 12))(a2) <= 73
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2) != 93 )
  {
    return 1;
  }
  v5 = (*(int (__fastcall **)(CEventStuckInAir *))(*(_DWORD *)this + 12))(this);
  return v5 >= (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 12))(a2);
}


// ============================================================

// Address: 0x376e0a
// Original: _ZNK16CEventStuckInAir16GetEventPriorityEv
// Demangled: CEventStuckInAir::GetEventPriority(void)
int __fastcall CEventStuckInAir::GetEventPriority(CEventStuckInAir *this)
{
  int v2; // r0

  v2 = *((_DWORD *)this + 3);
  if ( !v2
    || CEventHandler::GetCurrentEventType((CEventHandler *)(*(_DWORD *)(v2 + 1088) + 52)) == 93
    || *(int *)(*(_DWORD *)(*((_DWORD *)this + 3) + 1088) + 112) <= 1 )
  {
    return 63;
  }
  else
  {
    return 75;
  }
}


// ============================================================

// Address: 0x37aa04
// Original: _ZNK16CEventStuckInAir12GetEventTypeEv
// Demangled: CEventStuckInAir::GetEventType(void)
int __fastcall CEventStuckInAir::GetEventType(CEventStuckInAir *this)
{
  return 93;
}


// ============================================================

// Address: 0x37aa08
// Original: _ZNK16CEventStuckInAir11GetLifeTimeEv
// Demangled: CEventStuckInAir::GetLifeTime(void)
int __fastcall CEventStuckInAir::GetLifeTime(CEventStuckInAir *this)
{
  return 0;
}


// ============================================================

// Address: 0x37aa0c
// Original: _ZNK16CEventStuckInAir5CloneEv
// Demangled: CEventStuckInAir::Clone(void)
int __fastcall CEventStuckInAir::Clone(CEventStuckInAir *this)
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
  *(_DWORD *)v3 = &off_666878;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 12) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x37aa98
// Original: _ZNK16CEventStuckInAir27CanBeInterruptedBySameEventEv
// Demangled: CEventStuckInAir::CanBeInterruptedBySameEvent(void)
int __fastcall CEventStuckInAir::CanBeInterruptedBySameEvent(CEventStuckInAir *this)
{
  return 1;
}


// ============================================================

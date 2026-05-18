
// Address: 0x1971c0
// Original: j__ZN21CEventSeenPanickedPedC2EP4CPed
// Demangled: CEventSeenPanickedPed::CEventSeenPanickedPed(CPed *)
// attributes: thunk
void __fastcall CEventSeenPanickedPed::CEventSeenPanickedPed(CEventSeenPanickedPed *this, CPed *a2)
{
  _ZN21CEventSeenPanickedPedC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x19dd90
// Original: j__ZN21CEventSeenPanickedPedD2Ev
// Demangled: CEventSeenPanickedPed::~CEventSeenPanickedPed()
// attributes: thunk
void __fastcall CEventSeenPanickedPed::~CEventSeenPanickedPed(CEventSeenPanickedPed *this)
{
  _ZN21CEventSeenPanickedPedD2Ev(this);
}


// ============================================================

// Address: 0x377924
// Original: _ZN21CEventSeenPanickedPedC2EP4CPed
// Demangled: CEventSeenPanickedPed::CEventSeenPanickedPed(CPed *)
void __fastcall CEventSeenPanickedPed::CEventSeenPanickedPed(CEventSeenPanickedPed *this, CPed *a2)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *(_DWORD *)this = &off_666B3C;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x377964
// Original: _ZN21CEventSeenPanickedPedD2Ev
// Demangled: CEventSeenPanickedPed::~CEventSeenPanickedPed()
void __fastcall CEventSeenPanickedPed::~CEventSeenPanickedPed(CEventSeenPanickedPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_666B3C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x37798c
// Original: _ZN21CEventSeenPanickedPedD0Ev
// Demangled: CEventSeenPanickedPed::~CEventSeenPanickedPed()
void __fastcall CEventSeenPanickedPed::~CEventSeenPanickedPed(CEventSeenPanickedPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_666B3C;
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

// Address: 0x3779e0
// Original: _ZNK21CEventSeenPanickedPed10AffectsPedEP4CPed
// Demangled: CEventSeenPanickedPed::AffectsPed(CPed *)
int __fastcall CEventSeenPanickedPed::AffectsPed(CEventSeenPanickedPed *this, CPed *a2)
{
  CPed *v4; // r1
  int result; // r0
  bool v6; // zf
  int CurrentEvent; // r0
  int v8; // r1
  int v9; // r1
  int v10; // r2
  int v11; // r3
  char *v12; // r5
  int v13; // r2
  float32x2_t v14; // d16
  unsigned __int64 v15; // d1

  if ( CPed::IsPlayer(a2) )
    return 0;
  v4 = (CPed *)*((_DWORD *)this + 4);
  result = 0;
  v6 = v4 == 0;
  if ( v4 )
    v6 = v4 == a2;
  if ( !v6 )
  {
    CurrentEvent = CEventHandlerHistory::GetCurrentEvent((CEventHandlerHistory *)(*((_DWORD *)v4 + 272) + 56));
    if ( CurrentEvent )
    {
      v8 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentEvent + 44))(CurrentEvent);
      result = 0;
      if ( v8 )
      {
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
        if ( (float)((float)((float)((float)(*(float *)v12 - *(float *)v13) * (float)(*(float *)v12 - *(float *)v13))
                           + *(float *)&v15)
                   + *((float *)&v15 + 1)) < 100.0 )
          return 1;
      }
      return result;
    }
    return 0;
  }
  return result;
}


// ============================================================

// Address: 0x37af90
// Original: _ZNK21CEventSeenPanickedPed12GetEventTypeEv
// Demangled: CEventSeenPanickedPed::GetEventType(void)
int __fastcall CEventSeenPanickedPed::GetEventType(CEventSeenPanickedPed *this)
{
  return 65;
}


// ============================================================

// Address: 0x37af94
// Original: _ZNK21CEventSeenPanickedPed16GetEventPriorityEv
// Demangled: CEventSeenPanickedPed::GetEventPriority(void)
int __fastcall CEventSeenPanickedPed::GetEventPriority(CEventSeenPanickedPed *this)
{
  return 13;
}


// ============================================================

// Address: 0x37af98
// Original: _ZNK21CEventSeenPanickedPed11GetLifeTimeEv
// Demangled: CEventSeenPanickedPed::GetLifeTime(void)
int __fastcall CEventSeenPanickedPed::GetLifeTime(CEventSeenPanickedPed *this)
{
  return 0;
}


// ============================================================

// Address: 0x37af9c
// Original: _ZNK21CEventSeenPanickedPed15GetSourceEntityEv
// Demangled: CEventSeenPanickedPed::GetSourceEntity(void)
int __fastcall CEventSeenPanickedPed::GetSourceEntity(CEventSeenPanickedPed *this)
{
  return *((_DWORD *)this + 4);
}


// ============================================================

// Address: 0x37afa0
// Original: _ZNK21CEventSeenPanickedPed13CloneEditableEv
// Demangled: CEventSeenPanickedPed::CloneEditable(void)
int __fastcall CEventSeenPanickedPed::CloneEditable(CEventSeenPanickedPed *this)
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
  *(_DWORD *)v3 = &off_666B3C;
  *(_DWORD *)(v3 + 16) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

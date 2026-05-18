
// Address: 0x3778c0
// Original: _ZNK15CEventSoundLoud10AffectsPedEP4CPed
// Demangled: CEventSoundLoud::AffectsPed(CPed *)
int __fastcall CEventSoundLoud::AffectsPed(CEventSoundLoud *this, CPed *a2)
{
  int v4; // r4
  int v5; // r0
  const CVector *v6; // r2

  if ( CPed::IsPlayer(a2) || CPed::IsAlive(a2) != 1 )
    return 0;
  v4 = 0;
  if ( (*(int (__fastcall **)(CEventSoundLoud *))(*(_DWORD *)this + 44))(this) )
  {
    v5 = *((_DWORD *)a2 + 5);
    v6 = (const CVector *)(v5 + 48);
    if ( !v5 )
      v6 = (CPed *)((char *)a2 + 4);
    if ( COERCE_FLOAT(CEvent::GetSoundLevel(this, 0, v6)) >= 70.0 )
      return 1;
  }
  return v4;
}


// ============================================================

// Address: 0x378ef4
// Original: _ZN15CEventSoundLoudD2Ev
// Demangled: CEventSoundLoud::~CEventSoundLoud()
void __fastcall CEventSoundLoud::~CEventSoundLoud(CEventSoundLoud *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66710C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x378f1c
// Original: _ZN15CEventSoundLoudD0Ev
// Demangled: CEventSoundLoud::~CEventSoundLoud()
void __fastcall CEventSoundLoud::~CEventSoundLoud(CEventSoundLoud *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66710C;
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

// Address: 0x378f70
// Original: _ZNK15CEventSoundLoud12GetEventTypeEv
// Demangled: CEventSoundLoud::GetEventType(void)
int __fastcall CEventSoundLoud::GetEventType(CEventSoundLoud *this)
{
  return 61;
}


// ============================================================

// Address: 0x378f74
// Original: _ZNK15CEventSoundLoud16GetEventPriorityEv
// Demangled: CEventSoundLoud::GetEventPriority(void)
int __fastcall CEventSoundLoud::GetEventPriority(CEventSoundLoud *this)
{
  return 16;
}


// ============================================================

// Address: 0x378f78
// Original: _ZNK15CEventSoundLoud11GetLifeTimeEv
// Demangled: CEventSoundLoud::GetLifeTime(void)
int __fastcall CEventSoundLoud::GetLifeTime(CEventSoundLoud *this)
{
  return 0;
}


// ============================================================

// Address: 0x378f7c
// Original: _ZNK15CEventSoundLoud15GetSourceEntityEv
// Demangled: CEventSoundLoud::GetSourceEntity(void)
int __fastcall CEventSoundLoud::GetSourceEntity(CEventSoundLoud *this)
{
  return *((_DWORD *)this + 4);
}


// ============================================================

// Address: 0x378f80
// Original: _ZNK15CEventSoundLoud18GetLocalSoundLevelEv
// Demangled: CEventSoundLoud::GetLocalSoundLevel(void)
int __fastcall CEventSoundLoud::GetLocalSoundLevel(CEventSoundLoud *this)
{
  return *((_DWORD *)this + 5);
}


// ============================================================

// Address: 0x378f84
// Original: _ZNK15CEventSoundLoud13CloneEditableEv
// Demangled: CEventSoundLoud::CloneEditable(void)
int __fastcall CEventSoundLoud::CloneEditable(CEventSoundLoud *this)
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
  *(_DWORD *)v3 = &off_66710C;
  *(_DWORD *)(v3 + 16) = v7;
  CEntity::RegisterReference((CEntity *)v7, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

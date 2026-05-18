
// Address: 0x18a6e8
// Original: j__ZNK16CEventGroupEvent35BaseEventTakesPriorityOverBaseEventERKS_
// Demangled: CEventGroupEvent::BaseEventTakesPriorityOverBaseEvent(CEventGroupEvent const&)
// attributes: thunk
int __fastcall CEventGroupEvent::BaseEventTakesPriorityOverBaseEvent(
        CEventGroupEvent *this,
        const CEventGroupEvent *a2)
{
  return _ZNK16CEventGroupEvent35BaseEventTakesPriorityOverBaseEventERKS_(this, a2);
}


// ============================================================

// Address: 0x199788
// Original: j__ZN16CEventGroupEventC2EP4CPedP6CEvent
// Demangled: CEventGroupEvent::CEventGroupEvent(CPed *,CEvent *)
// attributes: thunk
void __fastcall CEventGroupEvent::CEventGroupEvent(CEventGroupEvent *this, CPed *a2, CEvent *a3)
{
  _ZN16CEventGroupEventC2EP4CPedP6CEvent(this, a2, a3);
}


// ============================================================

// Address: 0x19d130
// Original: j__ZN16CEventGroupEventD2Ev
// Demangled: CEventGroupEvent::~CEventGroupEvent()
// attributes: thunk
void __fastcall CEventGroupEvent::~CEventGroupEvent(CEventGroupEvent *this)
{
  _ZN16CEventGroupEventD2Ev(this);
}


// ============================================================

// Address: 0x373cb0
// Original: _ZN16CEventGroupEventC2EP4CPedP6CEvent
// Demangled: CEventGroupEvent::CEventGroupEvent(CPed *,CEvent *)
void __fastcall CEventGroupEvent::CEventGroupEvent(CEventGroupEvent *this, CPed *a2, CEvent *a3)
{
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = a3;
  *(_DWORD *)this = &off_6660DC;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x373ce4
// Original: _ZN16CEventGroupEventD2Ev
// Demangled: CEventGroupEvent::~CEventGroupEvent()
void __fastcall CEventGroupEvent::~CEventGroupEvent(CEventGroupEvent *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6660DC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
}


// ============================================================

// Address: 0x373d18
// Original: _ZN16CEventGroupEventD0Ev
// Demangled: CEventGroupEvent::~CEventGroupEvent()
void __fastcall CEventGroupEvent::~CEventGroupEvent(CEventGroupEvent *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r0
  int v6; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6660DC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v5 = CPools::ms_pEventPool;
  v6 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v6) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v6 < *(_DWORD *)(v5 + 12) )
    *(_DWORD *)(v5 + 12) = v6;
}


// ============================================================

// Address: 0x373d78
// Original: _ZNK16CEventGroupEvent10AffectsPedEP4CPed
// Demangled: CEventGroupEvent::AffectsPed(CPed *)
int __fastcall CEventGroupEvent::AffectsPed(CEventGroupEvent *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x373d7c
// Original: _ZNK16CEventGroupEvent15AffectsPedGroupEP9CPedGroup
// Demangled: CEventGroupEvent::AffectsPedGroup(CPedGroup *)
int __fastcall CEventGroupEvent::AffectsPedGroup(const CPed **this, CPedGroup *a2)
{
  return sub_18E0BC((CPedGroup *)((char *)a2 + 8), this[3]);
}


// ============================================================

// Address: 0x373d88
// Original: _ZNK16CEventGroupEvent35BaseEventTakesPriorityOverBaseEventERKS_
// Demangled: CEventGroupEvent::BaseEventTakesPriorityOverBaseEvent(CEventGroupEvent const&)
int __fastcall CEventGroupEvent::BaseEventTakesPriorityOverBaseEvent(
        CEventGroupEvent *this,
        const CEventGroupEvent *a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r0

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 4) + 8))(*((_DWORD *)this + 4));
  v5 = 1;
  if ( ((unsigned int)(v4 - 54) > 0x17 || ((1 << (v4 - 54)) & 0xC2000B) == 0) && v4 != 7 )
    v5 = 0;
  v6 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)a2 + 4) + 8))(*((_DWORD *)a2 + 4));
  if ( (unsigned int)(v6 - 54) <= 0x17 && ((1 << (v6 - 54)) & 0xC2000B) != 0 || v6 == 7 )
    return v5;
  if ( v5 )
    return 1;
  return (*(int (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 4) + 48))(
           *((_DWORD *)this + 4),
           *((_DWORD *)a2 + 4));
}


// ============================================================

// Address: 0x379a90
// Original: _ZNK16CEventGroupEvent12GetEventTypeEv
// Demangled: CEventGroupEvent::GetEventType(void)
int __fastcall CEventGroupEvent::GetEventType(CEventGroupEvent *this)
{
  return 47;
}


// ============================================================

// Address: 0x379a94
// Original: _ZNK16CEventGroupEvent16GetEventPriorityEv
// Demangled: CEventGroupEvent::GetEventPriority(void)
int __fastcall CEventGroupEvent::GetEventPriority(CEventGroupEvent *this)
{
  return 41;
}


// ============================================================

// Address: 0x379a98
// Original: _ZNK16CEventGroupEvent11GetLifeTimeEv
// Demangled: CEventGroupEvent::GetLifeTime(void)
int __fastcall CEventGroupEvent::GetLifeTime(CEventGroupEvent *this)
{
  return 0;
}


// ============================================================

// Address: 0x379a9c
// Original: _ZNK16CEventGroupEvent5CloneEv
// Demangled: CEventGroupEvent::Clone(void)
int __fastcall CEventGroupEvent::Clone(CEventGroupEvent *this)
{
  int v1; // r3
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r5
  int v6; // r2
  __int64 v7; // kr08_8
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
  v7 = *(_QWORD *)((char *)this + 12);
  v8 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 20))(HIDWORD(v7));
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)v3 = &off_6660DC;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 16) = v8;
  *(_DWORD *)(v3 + 12) = v7;
  if ( (_DWORD)v7 )
    CEntity::RegisterReference((CEntity *)v7, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x379b2c
// Original: _ZNK16CEventGroupEvent18GetLocalSoundLevelEv
// Demangled: CEventGroupEvent::GetLocalSoundLevel(void)
int __fastcall CEventGroupEvent::GetLocalSoundLevel(CEventGroupEvent *this)
{
  return 1120403456;
}


// ============================================================

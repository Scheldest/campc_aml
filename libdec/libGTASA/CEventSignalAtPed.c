
// Address: 0x376e62
// Original: _ZNK17CEventSignalAtPed7IsValidEP4CPed
// Demangled: CEventSignalAtPed::IsValid(CPed *)
int __fastcall CEventSignalAtPed::IsValid(CEventSignalAtPed *this, CPed *a2)
{
  __int64 v3; // kr00_8

  if ( a2 )
    return sub_196874(a2);
  if ( *((_BYTE *)this + 8) )
    return 1;
  v3 = *(_QWORD *)this;
  return SHIDWORD(v3) <= (*(int (__fastcall **)(CEventSignalAtPed *))(*(_DWORD *)this + 16))(this);
}


// ============================================================

// Address: 0x378ba4
// Original: _ZN17CEventSignalAtPedD2Ev
// Demangled: CEventSignalAtPed::~CEventSignalAtPed()
void __fastcall CEventSignalAtPed::~CEventSignalAtPed(CEventSignalAtPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_667028;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x378bcc
// Original: _ZN17CEventSignalAtPedD0Ev
// Demangled: CEventSignalAtPed::~CEventSignalAtPed()
void __fastcall CEventSignalAtPed::~CEventSignalAtPed(CEventSignalAtPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_667028;
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

// Address: 0x378c20
// Original: _ZNK17CEventSignalAtPed12GetEventTypeEv
// Demangled: CEventSignalAtPed::GetEventType(void)
int __fastcall CEventSignalAtPed::GetEventType(CEventSignalAtPed *this)
{
  return 88;
}


// ============================================================

// Address: 0x378c24
// Original: _ZNK17CEventSignalAtPed16GetEventPriorityEv
// Demangled: CEventSignalAtPed::GetEventPriority(void)
int __fastcall CEventSignalAtPed::GetEventPriority(CEventSignalAtPed *this)
{
  return 10;
}


// ============================================================

// Address: 0x378c28
// Original: _ZNK17CEventSignalAtPed11GetLifeTimeEv
// Demangled: CEventSignalAtPed::GetLifeTime(void)
int __fastcall CEventSignalAtPed::GetLifeTime(CEventSignalAtPed *this)
{
  return 0;
}


// ============================================================

// Address: 0x378c2c
// Original: _ZNK17CEventSignalAtPed5CloneEv
// Demangled: CEventSignalAtPed::Clone(void)
int __fastcall CEventSignalAtPed::Clone(CEventSignalAtPed *this)
{
  int v1; // r3
  _DWORD *v2; // r1
  int v3; // r2
  int v4; // r4
  int v5; // r6
  int v6; // r5
  __int64 v7; // kr08_8
  char v8; // r6
  int result; // r0

  v1 = 0;
  v2 = (_DWORD *)CPools::ms_pEventPool;
  v4 = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v3 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    v2[3] = ++v4;
    if ( v4 == v3 )
    {
      v4 = 0;
      v2[3] = 0;
      if ( v1 << 31 )
        goto LABEL_7;
      v1 = 1;
    }
    v5 = v2[1];
    v6 = *(char *)(v5 + v4);
  }
  while ( v6 > -1 );
  *(_BYTE *)(v5 + v4) = v6 & 0x7F;
  *(_BYTE *)(v2[1] + v2[3]) = (*(_BYTE *)(v2[1] + v2[3]) + 1) & 0x7F | *(_BYTE *)(v2[1] + v2[3]) & 0x80;
  v4 = *v2 + 68 * v2[3];
LABEL_7:
  v7 = *(_QWORD *)((char *)this + 12);
  v8 = *((_BYTE *)this + 20);
  *(_BYTE *)(v4 + 8) = 0;
  *(_DWORD *)v4 = &off_667028;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 12) = v7;
  if ( (_DWORD)v7 )
    CEntity::RegisterReference((CEntity *)v7, (CEntity **)(v4 + 12));
  *(_BYTE *)(v4 + 20) = v8;
  result = v4;
  *(_DWORD *)(v4 + 16) = HIDWORD(v7);
  return result;
}


// ============================================================

// Address: 0x378cc0
// Original: _ZNK17CEventSignalAtPed10AffectsPedEP4CPed
// Demangled: CEventSignalAtPed::AffectsPed(CPed *)
int __fastcall CEventSignalAtPed::AffectsPed(CEventSignalAtPed *this, CPed *a2)
{
  return 1;
}


// ============================================================

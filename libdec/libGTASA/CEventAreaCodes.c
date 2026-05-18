
// Address: 0x18a49c
// Original: j__ZN15CEventAreaCodesC2EP4CPed
// Demangled: CEventAreaCodes::CEventAreaCodes(CPed *)
// attributes: thunk
void __fastcall CEventAreaCodes::CEventAreaCodes(CEventAreaCodes *this, CPed *a2)
{
  _ZN15CEventAreaCodesC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x191a64
// Original: j__ZN15CEventAreaCodesD2Ev
// Demangled: CEventAreaCodes::~CEventAreaCodes()
// attributes: thunk
void __fastcall CEventAreaCodes::~CEventAreaCodes(CEventAreaCodes *this)
{
  _ZN15CEventAreaCodesD2Ev(this);
}


// ============================================================

// Address: 0x196850
// Original: j__ZN15CEventAreaCodesC2EP4CPed_0
// Demangled: CEventAreaCodes::CEventAreaCodes(CPed *)
// attributes: thunk
void __fastcall CEventAreaCodes::CEventAreaCodes(CEventAreaCodes *this, CPed *a2)
{
  _ZN15CEventAreaCodesC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x377a74
// Original: _ZN15CEventAreaCodesC2EP4CPed
// Demangled: CEventAreaCodes::CEventAreaCodes(CPed *)
void __fastcall CEventAreaCodes::CEventAreaCodes(CEventAreaCodes *this, CPed *a2)
{
  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_666B8C;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x377aa8
// Original: _ZN15CEventAreaCodesD0Ev
// Demangled: CEventAreaCodes::~CEventAreaCodes()
void __fastcall CEventAreaCodes::~CEventAreaCodes(CEventAreaCodes *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666B8C;
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

// Address: 0x377afc
// Original: _ZNK15CEventAreaCodes10AffectsPedEP4CPed
// Demangled: CEventAreaCodes::AffectsPed(CPed *)
bool __fastcall CEventAreaCodes::AffectsPed(CEventAreaCodes *this, CPed *a2)
{
  int ActiveTaskByType; // r0
  int v5; // r6
  int v6; // r0
  int v8; // r2
  int v9; // r1
  CPed *v10; // r0
  bool v11; // zf
  int v12; // r0
  int v13; // r0

  if ( !*((_DWORD *)this + 3) )
    return 0;
  ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 1000);
  if ( ActiveTaskByType )
  {
    v5 = *(_DWORD *)(ActiveTaskByType + 16);
    if ( v5 != *((_DWORD *)this + 3) )
    {
      v6 = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 1101);
      if ( v6 )
        v5 = *(_DWORD *)(v6 + 16);
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v5 != *((_DWORD *)this + 3) )
    return 0;
  if ( CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(v5 + 1088), 932) )
    return 1;
  v9 = *((_DWORD *)a2 + 354);
  v10 = (CPed *)*((_DWORD *)this + 3);
  v11 = v9 == 0;
  if ( v9 )
  {
    v8 = *((_DWORD *)v10 + 354);
    v11 = v8 == 0;
  }
  return (v11 || *(unsigned __int8 *)(v9 + 51) != *(unsigned __int8 *)(v8 + 51))
      && CPed::IsAlive(v10) == 1
      && CPed::IsAlive(a2) == 1
      && ((v12 = *((_DWORD *)a2 + 354)) == 0 || *(_BYTE *)(v12 + 51) != 13)
      && ((v13 = *(_DWORD *)(*((_DWORD *)this + 3) + 1416)) == 0 || *(_BYTE *)(v13 + 51) != 13);
}


// ============================================================

// Address: 0x377bb2
// Original: _ZNK15CEventAreaCodes17TakesPriorityOverERK6CEvent
// Demangled: CEventAreaCodes::TakesPriorityOver(CEvent const&)
bool __fastcall CEventAreaCodes::TakesPriorityOver(CEventAreaCodes *this, const CEvent *a2)
{
  int v5; // r5

  if ( CEventHandler::IsTemporaryEvent(a2, a2) )
    return 1;
  v5 = (*(int (__fastcall **)(CEventAreaCodes *))(*(_DWORD *)this + 12))(this);
  return v5 >= (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 12))(a2);
}


// ============================================================

// Address: 0x378078
// Original: _ZN15CEventAreaCodesD2Ev
// Demangled: CEventAreaCodes::~CEventAreaCodes()
void __fastcall CEventAreaCodes::~CEventAreaCodes(CEventAreaCodes *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666B8C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x3791f4
// Original: _ZNK15CEventAreaCodes16GetEventPriorityEv
// Demangled: CEventAreaCodes::GetEventPriority(void)
int __fastcall CEventAreaCodes::GetEventPriority(CEventAreaCodes *this)
{
  return 55;
}


// ============================================================

// Address: 0x37b038
// Original: _ZNK15CEventAreaCodes12GetEventTypeEv
// Demangled: CEventAreaCodes::GetEventType(void)
int __fastcall CEventAreaCodes::GetEventType(CEventAreaCodes *this)
{
  return 67;
}


// ============================================================

// Address: 0x37b03c
// Original: _ZNK15CEventAreaCodes11GetLifeTimeEv
// Demangled: CEventAreaCodes::GetLifeTime(void)
int __fastcall CEventAreaCodes::GetLifeTime(CEventAreaCodes *this)
{
  return 0;
}


// ============================================================

// Address: 0x37b040
// Original: _ZNK15CEventAreaCodes5CloneEv
// Demangled: CEventAreaCodes::Clone(void)
int __fastcall CEventAreaCodes::Clone(CEventAreaCodes *this)
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
  *(_DWORD *)v3 = &off_666B8C;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 12) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================


// Address: 0x18a994
// Original: j__ZN19CEventScriptCommandC2EiP5CTaskb
// Demangled: CEventScriptCommand::CEventScriptCommand(int,CTask *,bool)
// attributes: thunk
void __fastcall CEventScriptCommand::CEventScriptCommand(CEventScriptCommand *this, int a2, CTask *a3, bool a4)
{
  _ZN19CEventScriptCommandC2EiP5CTaskb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19bc40
// Original: j__ZN19CEventScriptCommandD2Ev
// Demangled: CEventScriptCommand::~CEventScriptCommand()
// attributes: thunk
void __fastcall CEventScriptCommand::~CEventScriptCommand(CEventScriptCommand *this)
{
  _ZN19CEventScriptCommandD2Ev(this);
}


// ============================================================

// Address: 0x376414
// Original: _ZN19CEventScriptCommandC2EiP5CTaskb
// Demangled: CEventScriptCommand::CEventScriptCommand(int,CTask *,bool)
void __fastcall CEventScriptCommand::CEventScriptCommand(CEventScriptCommand *this, int a2, CTask *a3, bool a4)
{
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = a3;
  *((_BYTE *)this + 20) = a4;
  *(_DWORD *)this = &off_6666A8;
}


// ============================================================

// Address: 0x376440
// Original: _ZN19CEventScriptCommandD2Ev
// Demangled: CEventScriptCommand::~CEventScriptCommand()
void __fastcall CEventScriptCommand::~CEventScriptCommand(CEventScriptCommand *this)
{
  int v2; // r0

  v2 = *((_DWORD *)this + 4);
  *(_DWORD *)this = &off_6666A8;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
}


// ============================================================

// Address: 0x376464
// Original: _ZN19CEventScriptCommandD0Ev
// Demangled: CEventScriptCommand::~CEventScriptCommand()
void __fastcall CEventScriptCommand::~CEventScriptCommand(CEventScriptCommand *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1

  v2 = *((_DWORD *)this + 4);
  *(_DWORD *)this = &off_6666A8;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = CPools::ms_pEventPool;
  v4 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v4) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v4 < *(_DWORD *)(v3 + 12) )
    *(_DWORD *)(v3 + 12) = v4;
}


// ============================================================

// Address: 0x3764b4
// Original: _ZNK19CEventScriptCommand5CloneEv
// Demangled: CEventScriptCommand::Clone(void)
int __fastcall CEventScriptCommand::Clone(CEventScriptCommand *this)
{
  int v2; // r0
  int v3; // r4
  _DWORD *v4; // r2
  int v5; // r1
  int v6; // r3
  int v7; // r5
  int v8; // r6
  int v9; // r5
  char v10; // r3

  v2 = (*(int (__fastcall **)(CEventScriptCommand *))(*(_DWORD *)this + 68))(this);
  v3 = 0;
  v4 = (_DWORD *)CPools::ms_pEventPool;
  v5 = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v6 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    v4[3] = ++v5;
    if ( v5 == v6 )
    {
      v5 = 0;
      v4[3] = 0;
      if ( v3 << 31 )
        goto LABEL_7;
      v3 = 1;
    }
    v7 = v4[1];
    v8 = *(char *)(v7 + v5);
  }
  while ( v8 > -1 );
  *(_BYTE *)(v7 + v5) = v8 & 0x7F;
  *(_BYTE *)(v4[1] + v4[3]) = (*(_BYTE *)(v4[1] + v4[3]) + 1) & 0x7F | *(_BYTE *)(v4[1] + v4[3]) & 0x80;
  v5 = *v4 + 68 * v4[3];
LABEL_7:
  v9 = *((_DWORD *)this + 3);
  v10 = *((_BYTE *)this + 20);
  *(_BYTE *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 12) = v9;
  *(_DWORD *)(v5 + 16) = v2;
  *(_BYTE *)(v5 + 20) = v10;
  *(_DWORD *)v5 = &off_6666A8;
  return v5;
}


// ============================================================

// Address: 0x376548
// Original: _ZNK19CEventScriptCommand15CloneScriptTaskEv
// Demangled: CEventScriptCommand::CloneScriptTask(void)
int __fastcall CEventScriptCommand::CloneScriptTask(CEventScriptCommand *this)
{
  int v1; // r0

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
  else
    return 0;
}


// ============================================================

// Address: 0x376558
// Original: _ZNK19CEventScriptCommand7IsValidEP4CPed
// Demangled: CEventScriptCommand::IsValid(CPed *)
int __fastcall CEventScriptCommand::IsValid(CEventScriptCommand *this, CPed *a2)
{
  __int64 v3; // kr00_8

  if ( a2 )
    return sub_196874(a2);
  if ( *((_BYTE *)this + 8) )
    return 1;
  v3 = *(_QWORD *)this;
  return SHIDWORD(v3) <= (*(int (__fastcall **)(CEventScriptCommand *))(*(_DWORD *)this + 16))(this);
}


// ============================================================

// Address: 0x376584
// Original: _ZNK19CEventScriptCommand10AffectsPedEP4CPed
// Demangled: CEventScriptCommand::AffectsPed(CPed *)
int __fastcall CEventScriptCommand::AffectsPed(CEventScriptCommand *this, CPed *a2)
{
  int result; // r0

  if ( CPed::IsAlive(a2) )
    return 1;
  result = *((unsigned __int8 *)this + 20);
  if ( *((_BYTE *)this + 20) )
    return 1;
  return result;
}


// ============================================================

// Address: 0x3765a2
// Original: _ZNK19CEventScriptCommand16GetEventPriorityEv
// Demangled: CEventScriptCommand::GetEventPriority(void)
int __fastcall CEventScriptCommand::GetEventPriority(CEventScriptCommand *this)
{
  int v3; // r0
  _BYTE *v4; // r0

  if ( *((_BYTE *)this + 20) )
    return 75;
  v3 = *((_DWORD *)this + 4);
  if ( !v3 )
    return 53;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 20))(v3) == 401 )
  {
    v4 = (_BYTE *)*((_DWORD *)this + 4);
    if ( (v4[12] & 2) != 0 )
      return 71;
  }
  else
  {
    v4 = (_BYTE *)*((_DWORD *)this + 4);
  }
  if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v4 + 20))(v4) == 212 )
    return 71;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 4) + 20))(*((_DWORD *)this + 4)) == 1304
    || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 4) + 20))(*((_DWORD *)this + 4)) == 1600
    || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 4) + 20))(*((_DWORD *)this + 4)) == 217 )
  {
    return 71;
  }
  else
  {
    return 53;
  }
}


// ============================================================

// Address: 0x376612
// Original: _ZNK19CEventScriptCommand17TakesPriorityOverERK6CEvent
// Demangled: CEventScriptCommand::TakesPriorityOver(CEvent const&)
bool __fastcall CEventScriptCommand::TakesPriorityOver(CEventScriptCommand *this, const CEvent *a2)
{
  int v5; // r5

  if ( *((_BYTE *)this + 20)
    && ((*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2) == 10
     || *((_BYTE *)this + 20) && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2) == 9) )
  {
    return 1;
  }
  v5 = (*(int (__fastcall **)(CEventScriptCommand *))(*(_DWORD *)this + 12))(this);
  return v5 >= (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 12))(a2);
}


// ============================================================

// Address: 0x37a708
// Original: _ZNK19CEventScriptCommand12GetEventTypeEv
// Demangled: CEventScriptCommand::GetEventType(void)
int __fastcall CEventScriptCommand::GetEventType(CEventScriptCommand *this)
{
  return 32;
}


// ============================================================

// Address: 0x37a70c
// Original: _ZNK19CEventScriptCommand11GetLifeTimeEv
// Demangled: CEventScriptCommand::GetLifeTime(void)
int __fastcall CEventScriptCommand::GetLifeTime(CEventScriptCommand *this)
{
  return 0;
}


// ============================================================

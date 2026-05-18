
// Address: 0x1967a4
// Original: j__ZN28CTaskSimpleCarWaitToSlowDownC2EP8CVehiclei
// Demangled: CTaskSimpleCarWaitToSlowDown::CTaskSimpleCarWaitToSlowDown(CVehicle *,int)
// attributes: thunk
void __fastcall CTaskSimpleCarWaitToSlowDown::CTaskSimpleCarWaitToSlowDown(
        CTaskSimpleCarWaitToSlowDown *this,
        CVehicle *a2,
        int a3)
{
  _ZN28CTaskSimpleCarWaitToSlowDownC2EP8CVehiclei(this, a2, a3);
}


// ============================================================

// Address: 0x502140
// Original: _ZN28CTaskSimpleCarWaitToSlowDownC2EP8CVehiclei
// Demangled: CTaskSimpleCarWaitToSlowDown::CTaskSimpleCarWaitToSlowDown(CVehicle *,int)
void __fastcall CTaskSimpleCarWaitToSlowDown::CTaskSimpleCarWaitToSlowDown(
        CTaskSimpleCarWaitToSlowDown *this,
        CVehicle *a2,
        int a3)
{
  CTaskSimple::CTaskSimple(this);
  *((_DWORD *)this + 4) = a3;
  *(_DWORD *)this = &off_66B1A8;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
}


// ============================================================

// Address: 0x50217c
// Original: _ZN28CTaskSimpleCarWaitToSlowDownD2Ev
// Demangled: CTaskSimpleCarWaitToSlowDown::~CTaskSimpleCarWaitToSlowDown()
void __fastcall CTaskSimpleCarWaitToSlowDown::~CTaskSimpleCarWaitToSlowDown(CTaskSimpleCarWaitToSlowDown *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B1A8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x5021a8
// Original: _ZN28CTaskSimpleCarWaitToSlowDownD0Ev
// Demangled: CTaskSimpleCarWaitToSlowDown::~CTaskSimpleCarWaitToSlowDown()
void __fastcall CTaskSimpleCarWaitToSlowDown::~CTaskSimpleCarWaitToSlowDown(CTaskSimpleCarWaitToSlowDown *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B1A8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x5021d8
// Original: _ZN28CTaskSimpleCarWaitToSlowDown13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarWaitToSlowDown::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarWaitToSlowDown::MakeAbortable(
        CTaskSimpleCarWaitToSlowDown *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  bool v7; // zf

  if ( a3 == 2 )
    return 1;
  if ( a3 == 1 && a4 && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 9 )
  {
    v7 = *((_BYTE *)a4 + 60) == 0;
    if ( *((_BYTE *)a4 + 60) )
      v7 = *((_BYTE *)a4 + 9) == 0;
    if ( !v7 )
      return 1;
  }
  *((_DWORD *)this + 4) = 2;
  return 0;
}


// ============================================================

// Address: 0x502210
// Original: _ZN28CTaskSimpleCarWaitToSlowDown14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarWaitToSlowDown::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarWaitToSlowDown::SetPedPosition(CTaskSimpleCarWaitToSlowDown *this, CPed *a2)
{
  if ( *((_DWORD *)this + 2) )
    CPed::SetPedPositionInCar(a2);
  return 1;
}


// ============================================================

// Address: 0x502226
// Original: _ZN28CTaskSimpleCarWaitToSlowDown10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarWaitToSlowDown::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarWaitToSlowDown::ProcessPed(CTaskSimpleCarWaitToSlowDown *this, CPed *a2)
{
  int v4; // r0
  bool v5; // zf
  CPed *v6; // r0
  int v7; // r0
  int v8; // r0

  v4 = *((_DWORD *)this + 2);
  v5 = v4 == 0;
  if ( v4 )
    v5 = *((_DWORD *)this + 4) == 2;
  if ( v5 )
    return 1;
  v6 = *(CPed **)(v4 + 1124);
  if ( v6 && !CPed::IsPlayer(v6) )
  {
    v7 = *((_DWORD *)this + 2);
    if ( *(CPed **)(v7 + 1124) == a2 )
    {
      *(_BYTE *)(v7 + 980) = 0;
      *(_BYTE *)(*((_DWORD *)this + 2) + 958) = 0;
    }
  }
  v8 = *((_DWORD *)this + 4);
  if ( v8 == 1 )
    return (*(int (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 2) + 232))(*((_DWORD *)this + 2), 0);
  if ( v8 )
    return 0;
  if ( (*(int (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 2) + 232))(*((_DWORD *)this + 2), 0) )
    return 1;
  return (*(int (__fastcall **)(_DWORD, CPed *))(**((_DWORD **)this + 2) + 236))(*((_DWORD *)this + 2), a2);
}


// ============================================================

// Address: 0x506d88
// Original: _ZNK28CTaskSimpleCarWaitToSlowDown5CloneEv
// Demangled: CTaskSimpleCarWaitToSlowDown::Clone(void)
CTaskSimple *__fastcall CTaskSimpleCarWaitToSlowDown::Clone(CTaskSimpleCarWaitToSlowDown *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  CEntity *v4; // r5
  CTaskSimple *v5; // r4
  int v6; // r6

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_14, a2);
  v4 = (CEntity *)*((_DWORD *)this + 2);
  v5 = v3;
  v6 = *((_DWORD *)this + 4);
  CTaskSimple::CTaskSimple(v3);
  *((_DWORD *)v5 + 4) = v6;
  *(_DWORD *)v5 = &off_66B1A8;
  *((_DWORD *)v5 + 2) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)v5 + 2);
  return v5;
}


// ============================================================

// Address: 0x506dcc
// Original: _ZNK28CTaskSimpleCarWaitToSlowDown11GetTaskTypeEv
// Demangled: CTaskSimpleCarWaitToSlowDown::GetTaskType(void)
int __fastcall CTaskSimpleCarWaitToSlowDown::GetTaskType(CTaskSimpleCarWaitToSlowDown *this)
{
  return 809;
}


// ============================================================

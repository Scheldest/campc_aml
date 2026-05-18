
// Address: 0x193b64
// Original: j__ZN25CTaskComplexGetOnBoatSeatC2EP8CVehicle
// Demangled: CTaskComplexGetOnBoatSeat::CTaskComplexGetOnBoatSeat(CVehicle *)
// attributes: thunk
void __fastcall CTaskComplexGetOnBoatSeat::CTaskComplexGetOnBoatSeat(CTaskComplexGetOnBoatSeat *this, CVehicle *a2)
{
  _ZN25CTaskComplexGetOnBoatSeatC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x506208
// Original: _ZN25CTaskComplexGetOnBoatSeatC2EP8CVehicle
// Demangled: CTaskComplexGetOnBoatSeat::CTaskComplexGetOnBoatSeat(CVehicle *)
void __fastcall CTaskComplexGetOnBoatSeat::CTaskComplexGetOnBoatSeat(CTaskComplexGetOnBoatSeat *this, CVehicle *a2)
{
  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)this = &off_66B568;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x506238
// Original: _ZN25CTaskComplexGetOnBoatSeatD2Ev
// Demangled: CTaskComplexGetOnBoatSeat::~CTaskComplexGetOnBoatSeat()
void __fastcall CTaskComplexGetOnBoatSeat::~CTaskComplexGetOnBoatSeat(CTaskComplexGetOnBoatSeat *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B568;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x506264
// Original: _ZN25CTaskComplexGetOnBoatSeatD0Ev
// Demangled: CTaskComplexGetOnBoatSeat::~CTaskComplexGetOnBoatSeat()
void __fastcall CTaskComplexGetOnBoatSeat::~CTaskComplexGetOnBoatSeat(CTaskComplexGetOnBoatSeat *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B568;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x506294
// Original: _ZN25CTaskComplexGetOnBoatSeat13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexGetOnBoatSeat::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexGetOnBoatSeat::MakeAbortable(
        CTaskComplexGetOnBoatSeat *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( a3 == 2 )
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             2,
             a4);
  else
    return 0;
}


// ============================================================

// Address: 0x5062a8
// Original: _ZN25CTaskComplexGetOnBoatSeat17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexGetOnBoatSeat::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexGetOnBoatSeat::CreateNextSubTask(CTaskComplexGetOnBoatSeat *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x5062ac
// Original: _ZN25CTaskComplexGetOnBoatSeat18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGetOnBoatSeat::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexGetOnBoatSeat::CreateFirstSubTask(CTaskComplexGetOnBoatSeat *this, CPed *a2)
{
  int v2; // r4
  int v3; // r0
  int v4; // r2

  v2 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 904) + 204);
  v3 = CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
  if ( (v2 & 0x400) != 0 )
    v4 = 60;
  else
    v4 = 81;
  return CTaskSimpleRunAnim::CTaskSimpleRunAnim(v3, 0, v4, 1065353216, 0);
}


// ============================================================

// Address: 0x5062de
// Original: _ZN25CTaskComplexGetOnBoatSeat14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGetOnBoatSeat::ControlSubTask(CPed *)
int __fastcall CTaskComplexGetOnBoatSeat::ControlSubTask(CTaskComplexGetOnBoatSeat *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x5073c4
// Original: _ZNK25CTaskComplexGetOnBoatSeat5CloneEv
// Demangled: CTaskComplexGetOnBoatSeat::Clone(void)
CEntity **__fastcall CTaskComplexGetOnBoatSeat::Clone(CTaskComplexGetOnBoatSeat *this, unsigned int a2)
{
  CEntity **v3; // r4
  CEntity *v4; // r5

  v3 = (CEntity **)CTask::operator new((CTask *)&word_10, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *v3 = (CEntity *)&off_66B568;
  v3[3] = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, v3 + 3);
  return v3;
}


// ============================================================

// Address: 0x5073fc
// Original: _ZNK25CTaskComplexGetOnBoatSeat11GetTaskTypeEv
// Demangled: CTaskComplexGetOnBoatSeat::GetTaskType(void)
int __fastcall CTaskComplexGetOnBoatSeat::GetTaskType(CTaskComplexGetOnBoatSeat *this)
{
  return 831;
}


// ============================================================

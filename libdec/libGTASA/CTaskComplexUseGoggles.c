
// Address: 0x18f620
// Original: j__ZN22CTaskComplexUseGogglesC2Ev
// Demangled: CTaskComplexUseGoggles::CTaskComplexUseGoggles(void)
// attributes: thunk
void __fastcall CTaskComplexUseGoggles::CTaskComplexUseGoggles(CTaskComplexUseGoggles *this)
{
  _ZN22CTaskComplexUseGogglesC2Ev(this);
}


// ============================================================

// Address: 0x4f1210
// Original: _ZN22CTaskComplexUseGogglesC2Ev
// Demangled: CTaskComplexUseGoggles::CTaskComplexUseGoggles(void)
void __fastcall CTaskComplexUseGoggles::CTaskComplexUseGoggles(CTaskComplexUseGoggles *this)
{
  _DWORD *v1; // r0

  CTaskComplex::CTaskComplex(this);
  *v1 = &off_66A628;
}


// ============================================================

// Address: 0x4f1228
// Original: _ZN22CTaskComplexUseGogglesD2Ev
// Demangled: CTaskComplexUseGoggles::~CTaskComplexUseGoggles()
// attributes: thunk
void __fastcall CTaskComplexUseGoggles::~CTaskComplexUseGoggles(CTaskComplexUseGoggles *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f122c
// Original: _ZN22CTaskComplexUseGogglesD0Ev
// Demangled: CTaskComplexUseGoggles::~CTaskComplexUseGoggles()
void __fastcall CTaskComplexUseGoggles::~CTaskComplexUseGoggles(CTaskComplexUseGoggles *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4f123c
// Original: _ZN22CTaskComplexUseGoggles13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexUseGoggles::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexUseGoggles::MakeAbortable(CTaskComplexUseGoggles *this, CPed *a2, int a3, const CEvent *a4)
{
  return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x4f1248
// Original: _ZN22CTaskComplexUseGoggles17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexUseGoggles::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexUseGoggles::CreateNextSubTask(CTaskComplexUseGoggles *this, CPed *a2)
{
  int v3; // r0

  v3 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v3 == 1606 )
  {
    CPed::TakeOffGoggles(a2);
  }
  else if ( v3 == 1605 )
  {
    CPed::PutOnGoggles(a2);
    CAEPedWeaponAudioEntity::AddAudioEvent((CPed *)((char *)a2 + 920), 145);
    return 0;
  }
  return 0;
}


// ============================================================

// Address: 0x4f1284
// Original: _ZN22CTaskComplexUseGoggles18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexUseGoggles::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexUseGoggles::CreateFirstSubTask(CTaskComplexUseGoggles *this, CPed *a2)
{
  int v2; // r4
  int v3; // r0
  const char *v4; // r2
  int v5; // r3

  *(_BYTE *)(*((_DWORD *)a2 + 273) + 133) = 1;
  v2 = *((_DWORD *)a2 + 322);
  v3 = CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
  if ( v2 )
  {
    v4 = "GogglesOff";
    v5 = 1606;
  }
  else
  {
    v4 = "GogglesOn";
    v5 = 1605;
  }
  return CTaskSimpleRunAnim::CTaskSimpleRunAnim(v3, 32, 224, 1082130432, v5, (int)v4, 0);
}


// ============================================================

// Address: 0x4f12e0
// Original: _ZN22CTaskComplexUseGoggles14ControlSubTaskEP4CPed
// Demangled: CTaskComplexUseGoggles::ControlSubTask(CPed *)
int __fastcall CTaskComplexUseGoggles::ControlSubTask(CTaskComplexUseGoggles *this, CPed *a2)
{
  int v3; // r4
  int v4; // r1
  int v5; // r0
  CTaskSimplePlayerOnFoot *TaskByType; // r0

  v3 = *((_DWORD *)this + 2);
  *(_BYTE *)(*((_DWORD *)a2 + 273) + 133) = 1;
  v4 = *((_DWORD *)a2 + 273);
  if ( v4 )
  {
    *(_BYTE *)(v4 + 132) = 1;
    v5 = *((_DWORD *)a2 + 273);
    if ( *(float *)(v5 + 24) < 0.0 )
      *(_DWORD *)(v5 + 24) = 0;
    TaskByType = (CTaskSimplePlayerOnFoot *)CPedIntelligence::FindTaskByType(*((CPedIntelligence **)a2 + 272), 0);
    if ( TaskByType )
      CTaskSimplePlayerOnFoot::PlayerControlZelda(TaskByType, a2, 1);
    *(_BYTE *)(*((_DWORD *)a2 + 273) + 132) = 0;
  }
  return v3;
}


// ============================================================

// Address: 0x4f4080
// Original: _ZNK22CTaskComplexUseGoggles5CloneEv
// Demangled: CTaskComplexUseGoggles::Clone(void)
_DWORD *__fastcall CTaskComplexUseGoggles::Clone(CTaskComplexUseGoggles *this, unsigned int a2)
{
  CTaskComplex *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], a2);
  CTaskComplex::CTaskComplex(v2);
  *result = &off_66A628;
  return result;
}


// ============================================================

// Address: 0x4f40a0
// Original: _ZNK22CTaskComplexUseGoggles11GetTaskTypeEv
// Demangled: CTaskComplexUseGoggles::GetTaskType(void)
int __fastcall CTaskComplexUseGoggles::GetTaskType(CTaskComplexUseGoggles *this)
{
  return 1604;
}


// ============================================================

// Address: 0x4f40a8
// Original: _ZN22CTaskComplexUseGoggles9SerializeEv
// Demangled: CTaskComplexUseGoggles::Serialize(void)
int __fastcall CTaskComplexUseGoggles::Serialize(CTaskComplexUseGoggles *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexUseGoggles *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexUseGoggles *))(*(_DWORD *)this + 20))(this);
  if ( result != 1604 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexUseGoggles *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(1604, v6);
  }
  return result;
}


// ============================================================

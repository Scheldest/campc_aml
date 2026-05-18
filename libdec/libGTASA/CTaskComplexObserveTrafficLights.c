
// Address: 0x194a44
// Original: j__ZN32CTaskComplexObserveTrafficLightsC2Ev
// Demangled: CTaskComplexObserveTrafficLights::CTaskComplexObserveTrafficLights(void)
// attributes: thunk
void __fastcall CTaskComplexObserveTrafficLights::CTaskComplexObserveTrafficLights(
        CTaskComplexObserveTrafficLights *this)
{
  _ZN32CTaskComplexObserveTrafficLightsC2Ev(this);
}


// ============================================================

// Address: 0x4eca80
// Original: _ZN32CTaskComplexObserveTrafficLightsC2Ev
// Demangled: CTaskComplexObserveTrafficLights::CTaskComplexObserveTrafficLights(void)
void __fastcall CTaskComplexObserveTrafficLights::CTaskComplexObserveTrafficLights(
        CTaskComplexObserveTrafficLights *this)
{
  int v1; // r0

  CTaskComplex::CTaskComplex(this);
  *(_WORD *)(v1 + 20) = 0;
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)v1 = &off_669F64;
}


// ============================================================

// Address: 0x4ecaa0
// Original: _ZN32CTaskComplexObserveTrafficLightsD2Ev
// Demangled: CTaskComplexObserveTrafficLights::~CTaskComplexObserveTrafficLights()
// attributes: thunk
void __fastcall CTaskComplexObserveTrafficLights::~CTaskComplexObserveTrafficLights(
        CTaskComplexObserveTrafficLights *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4ecaa4
// Original: _ZN32CTaskComplexObserveTrafficLightsD0Ev
// Demangled: CTaskComplexObserveTrafficLights::~CTaskComplexObserveTrafficLights()
void __fastcall CTaskComplexObserveTrafficLights::~CTaskComplexObserveTrafficLights(
        CTaskComplexObserveTrafficLights *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ecab4
// Original: _ZN32CTaskComplexObserveTrafficLights13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexObserveTrafficLights::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexObserveTrafficLights::MakeAbortable(
        CTaskComplexObserveTrafficLights *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 1;
}


// ============================================================

// Address: 0x4ecab8
// Original: _ZN32CTaskComplexObserveTrafficLights17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexObserveTrafficLights::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexObserveTrafficLights::CreateNextSubTask(CTaskComplexObserveTrafficLights *this, CPed *a2)
{
  int v4; // r0
  int v5; // r4
  int v7; // r0
  unsigned __int16 v8; // r5
  unsigned int v9; // r1
  CTaskSimple *v10; // r0
  int v11; // r0

  v4 = *((_DWORD *)this + 2);
  if ( v4 && (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) != 203 )
  {
    v7 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
    v5 = 0;
    if ( v7 == 400 )
    {
      v8 = rand();
      v10 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, v9);
      CTaskSimple::CTaskSimple(v10);
      *(_DWORD *)v11 = &off_669C0C;
      *(_WORD *)(v11 + 20) = 0;
      *(_DWORD *)(v11 + 28) = 1090519040;
      *(_WORD *)(v11 + 24) = 0;
      *(_DWORD *)(v11 + 8) = (int)(float)((float)((float)v8 * 0.000015259) * 2000.0) + 3000;
      *(_DWORD *)(v11 + 12) = 0;
      *(_DWORD *)(v11 + 16) = 0;
      return v11;
    }
  }
  else
  {
    v5 = CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
    CTaskSimpleRunAnim::CTaskSimpleRunAnim(v5, *((_DWORD *)a2 + 312), 4, 1082130432, 0);
  }
  return v5;
}


// ============================================================

// Address: 0x4ecb64
// Original: _ZN32CTaskComplexObserveTrafficLights18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexObserveTrafficLights::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexObserveTrafficLights::CreateFirstSubTask(CTaskComplexObserveTrafficLights *this, CPed *a2)
{
  return (*(int (__fastcall **)(CTaskComplexObserveTrafficLights *, CPed *))(*(_DWORD *)this + 40))(this, a2);
}


// ============================================================

// Address: 0x4ecb6a
// Original: _ZN32CTaskComplexObserveTrafficLights14ControlSubTaskEP4CPed
// Demangled: CTaskComplexObserveTrafficLights::ControlSubTask(CPed *)
int __fastcall CTaskComplexObserveTrafficLights::ControlSubTask(CTaskComplexObserveTrafficLights *this, CPed *a2)
{
  int v4; // r5

  if ( CTrafficLights::LightForPeds(this) )
    return *((_DWORD *)this + 2);
  v4 = 0;
  if ( !(*(int (__fastcall **)(_DWORD, CPed *, _DWORD, _DWORD))(**((_DWORD **)this + 2) + 28))(
          *((_DWORD *)this + 2),
          a2,
          0,
          0) )
    return *((_DWORD *)this + 2);
  return v4;
}


// ============================================================

// Address: 0x4f3098
// Original: _ZNK32CTaskComplexObserveTrafficLights5CloneEv
// Demangled: CTaskComplexObserveTrafficLights::Clone(void)
int __fastcall CTaskComplexObserveTrafficLights::Clone(CTaskComplexObserveTrafficLights *this, unsigned int a2)
{
  CTaskComplex *v2; // r0
  int result; // r0

  v2 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, a2);
  CTaskComplex::CTaskComplex(v2);
  *(_WORD *)(result + 20) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)result = &off_669F64;
  return result;
}


// ============================================================

// Address: 0x4f30c0
// Original: _ZNK32CTaskComplexObserveTrafficLights11GetTaskTypeEv
// Demangled: CTaskComplexObserveTrafficLights::GetTaskType(void)
int __fastcall CTaskComplexObserveTrafficLights::GetTaskType(CTaskComplexObserveTrafficLights *this)
{
  return 224;
}


// ============================================================

// Address: 0x4f30c4
// Original: _ZN32CTaskComplexObserveTrafficLights9SerializeEv
// Demangled: CTaskComplexObserveTrafficLights::Serialize(void)
int __fastcall CTaskComplexObserveTrafficLights::Serialize(CTaskComplexObserveTrafficLights *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexObserveTrafficLights *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexObserveTrafficLights *))(*(_DWORD *)this + 20))(this);
  if ( result != 224 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexObserveTrafficLights *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(224, v6);
  }
  return result;
}


// ============================================================

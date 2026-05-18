
// Address: 0x1a17b8
// Original: j__ZN29CTaskComplexWaitForDryWeatherC2Ev
// Demangled: CTaskComplexWaitForDryWeather::CTaskComplexWaitForDryWeather(void)
// attributes: thunk
void __fastcall CTaskComplexWaitForDryWeather::CTaskComplexWaitForDryWeather(CTaskComplexWaitForDryWeather *this)
{
  _ZN29CTaskComplexWaitForDryWeatherC2Ev(this);
}


// ============================================================

// Address: 0x4ee430
// Original: _ZN29CTaskComplexWaitForDryWeatherC2Ev
// Demangled: CTaskComplexWaitForDryWeather::CTaskComplexWaitForDryWeather(void)
void __fastcall CTaskComplexWaitForDryWeather::CTaskComplexWaitForDryWeather(CTaskComplexWaitForDryWeather *this)
{
  _DWORD *v1; // r0

  CTaskComplex::CTaskComplex(this);
  *v1 = &off_66A1B4;
}


// ============================================================

// Address: 0x4ee448
// Original: _ZN29CTaskComplexWaitForDryWeatherD2Ev
// Demangled: CTaskComplexWaitForDryWeather::~CTaskComplexWaitForDryWeather()
// attributes: thunk
void __fastcall CTaskComplexWaitForDryWeather::~CTaskComplexWaitForDryWeather(CTaskComplexWaitForDryWeather *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4ee44c
// Original: _ZN29CTaskComplexWaitForDryWeatherD0Ev
// Demangled: CTaskComplexWaitForDryWeather::~CTaskComplexWaitForDryWeather()
void __fastcall CTaskComplexWaitForDryWeather::~CTaskComplexWaitForDryWeather(CTaskComplexWaitForDryWeather *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ee45c
// Original: _ZN29CTaskComplexWaitForDryWeather17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexWaitForDryWeather::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexWaitForDryWeather::CreateNextSubTask(CTaskComplexWaitForDryWeather *this, CPed *a2)
{
  if ( *(float *)&CWeather::Rain >= 0.2 )
    return (*(int (__fastcall **)(CTaskComplexWaitForDryWeather *, CPed *))(*(_DWORD *)this + 44))(this, a2);
  else
    return 0;
}


// ============================================================

// Address: 0x4ee488
// Original: _ZN29CTaskComplexWaitForDryWeather18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexWaitForDryWeather::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexWaitForDryWeather::CreateFirstSubTask(CTaskComplexWaitForDryWeather *this, CPed *a2)
{
  CTaskSimple *v2; // r0
  int result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
  CTaskSimple::CTaskSimple(v2);
  *(_DWORD *)(result + 8) = 1000;
  *(_WORD *)(result + 20) = 0;
  *(_DWORD *)(result + 28) = 1090519040;
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)result = &off_669C0C;
  return result;
}


// ============================================================

// Address: 0x4ee4bc
// Original: _ZN29CTaskComplexWaitForDryWeather14ControlSubTaskEP4CPed
// Demangled: CTaskComplexWaitForDryWeather::ControlSubTask(CPed *)
int __fastcall CTaskComplexWaitForDryWeather::ControlSubTask(CTaskComplexWaitForDryWeather *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f3648
// Original: _ZNK29CTaskComplexWaitForDryWeather5CloneEv
// Demangled: CTaskComplexWaitForDryWeather::Clone(void)
_DWORD *__fastcall CTaskComplexWaitForDryWeather::Clone(CTaskComplexWaitForDryWeather *this, unsigned int a2)
{
  CTaskComplex *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], a2);
  CTaskComplex::CTaskComplex(v2);
  *result = &off_66A1B4;
  return result;
}


// ============================================================

// Address: 0x4f3668
// Original: _ZNK29CTaskComplexWaitForDryWeather11GetTaskTypeEv
// Demangled: CTaskComplexWaitForDryWeather::GetTaskType(void)
int __fastcall CTaskComplexWaitForDryWeather::GetTaskType(CTaskComplexWaitForDryWeather *this)
{
  return 236;
}


// ============================================================

// Address: 0x4f366c
// Original: _ZN29CTaskComplexWaitForDryWeather9SerializeEv
// Demangled: CTaskComplexWaitForDryWeather::Serialize(void)
int __fastcall CTaskComplexWaitForDryWeather::Serialize(CTaskComplexWaitForDryWeather *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexWaitForDryWeather *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexWaitForDryWeather *))(*(_DWORD *)this + 20))(this);
  if ( result != 236 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexWaitForDryWeather *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(236, v6);
  }
  return result;
}


// ============================================================

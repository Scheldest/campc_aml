
// Address: 0x1975bc
// Original: j__ZN23CTaskSimpleWaitForPizzaC2Ev
// Demangled: CTaskSimpleWaitForPizza::CTaskSimpleWaitForPizza(void)
// attributes: thunk
void __fastcall CTaskSimpleWaitForPizza::CTaskSimpleWaitForPizza(CTaskSimpleWaitForPizza *this)
{
  _ZN23CTaskSimpleWaitForPizzaC2Ev(this);
}


// ============================================================

// Address: 0x4ee634
// Original: _ZN23CTaskSimpleWaitForPizzaC2Ev
// Demangled: CTaskSimpleWaitForPizza::CTaskSimpleWaitForPizza(void)
void __fastcall CTaskSimpleWaitForPizza::CTaskSimpleWaitForPizza(CTaskSimpleWaitForPizza *this)
{
  int v1; // r0

  CTaskSimple::CTaskSimple(this);
  *(_WORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)v1 = &off_66A260;
}


// ============================================================

// Address: 0x4ee654
// Original: _ZN23CTaskSimpleWaitForPizzaD2Ev
// Demangled: CTaskSimpleWaitForPizza::~CTaskSimpleWaitForPizza()
// attributes: thunk
void __fastcall CTaskSimpleWaitForPizza::~CTaskSimpleWaitForPizza(CTaskSimpleWaitForPizza *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4ee658
// Original: _ZN23CTaskSimpleWaitForPizzaD0Ev
// Demangled: CTaskSimpleWaitForPizza::~CTaskSimpleWaitForPizza()
void __fastcall CTaskSimpleWaitForPizza::~CTaskSimpleWaitForPizza(CTaskSimpleWaitForPizza *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ee668
// Original: _ZN23CTaskSimpleWaitForPizza10ProcessPedEP4CPed
// Demangled: CTaskSimpleWaitForPizza::ProcessPed(CPed *)
bool __fastcall CTaskSimpleWaitForPizza::ProcessPed(CTaskSimpleWaitForPizza *this, CPed *a2)
{
  unsigned int v2; // r1
  unsigned int v3; // r2

  if ( !*((_BYTE *)this + 16) )
  {
    *((_DWORD *)this + 2) = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 3) = 2000;
    *((_BYTE *)this + 16) = 1;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v2 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 17) = 0;
    *((_DWORD *)this + 2) = v2;
    v3 = v2;
  }
  else
  {
    v3 = *((_DWORD *)this + 2);
    v2 = CTimer::m_snTimeInMilliseconds;
  }
  return v3 + *((_DWORD *)this + 3) <= v2;
}


// ============================================================

// Address: 0x4f37f8
// Original: _ZNK23CTaskSimpleWaitForPizza5CloneEv
// Demangled: CTaskSimpleWaitForPizza::Clone(void)
int __fastcall CTaskSimpleWaitForPizza::Clone(CTaskSimpleWaitForPizza *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  int result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&dword_14, a2);
  CTaskSimple::CTaskSimple(v2);
  *(_WORD *)(result + 16) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_66A260;
  return result;
}


// ============================================================

// Address: 0x4f3820
// Original: _ZNK23CTaskSimpleWaitForPizza11GetTaskTypeEv
// Demangled: CTaskSimpleWaitForPizza::GetTaskType(void)
int __fastcall CTaskSimpleWaitForPizza::GetTaskType(CTaskSimpleWaitForPizza *this)
{
  return 239;
}


// ============================================================

// Address: 0x4f3824
// Original: _ZN23CTaskSimpleWaitForPizza13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleWaitForPizza::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleWaitForPizza::MakeAbortable(
        CTaskSimpleWaitForPizza *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 1;
}


// ============================================================

// Address: 0x4f3828
// Original: _ZN23CTaskSimpleWaitForPizza9SerializeEv
// Demangled: CTaskSimpleWaitForPizza::Serialize(void)
int __fastcall CTaskSimpleWaitForPizza::Serialize(CTaskSimpleWaitForPizza *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleWaitForPizza *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleWaitForPizza *))(*(_DWORD *)this + 20))(this);
  if ( result != 239 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleWaitForPizza *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(239, v6);
  }
  return result;
}


// ============================================================

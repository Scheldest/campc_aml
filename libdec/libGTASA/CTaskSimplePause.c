
// Address: 0x357370
// Original: _ZN16CTaskSimplePauseD0Ev
// Demangled: CTaskSimplePause::~CTaskSimplePause()
void __fastcall CTaskSimplePause::~CTaskSimplePause(CTaskSimplePause *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x357380
// Original: _ZNK16CTaskSimplePause5CloneEv
// Demangled: CTaskSimplePause::Clone(void)
int __fastcall CTaskSimplePause::Clone(CTaskSimplePause *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int v4; // r4
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, a2);
  v4 = *((_DWORD *)this + 5);
  CTaskSimple::CTaskSimple(v3);
  *(_WORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = v4;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_665760;
  return result;
}


// ============================================================

// Address: 0x3573ac
// Original: _ZNK16CTaskSimplePause11GetTaskTypeEv
// Demangled: CTaskSimplePause::GetTaskType(void)
int __fastcall CTaskSimplePause::GetTaskType(CTaskSimplePause *this)
{
  return 202;
}


// ============================================================

// Address: 0x3573b0
// Original: _ZN16CTaskSimplePause13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimplePause::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimplePause::MakeAbortable(CTaskSimplePause *this, CPed *a2, int a3, const CEvent *a4)
{
  int v4; // r1

  v4 = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)this + 16) = 1;
  *((_DWORD *)this + 2) = v4;
  *((_DWORD *)this + 3) = -1;
  return 1;
}


// ============================================================

// Address: 0x3573cc
// Original: _ZN16CTaskSimplePause9SerializeEv
// Demangled: CTaskSimplePause::Serialize(void)
void __fastcall CTaskSimplePause::Serialize(CTaskSimplePause *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskSimplePause *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, &byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimplePause *))(*(_DWORD *)this + 20))(this) == 202 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 5);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, &byte_4, v6);
    j_free(v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskSimplePause *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(202, v7);
  }
}


// ============================================================

// Address: 0x357464
// Original: _ZN16CTaskSimplePause10ProcessPedEP4CPed
// Demangled: CTaskSimplePause::ProcessPed(CPed *)
bool __fastcall CTaskSimplePause::ProcessPed(CTaskSimplePause *this, CPed *a2)
{
  int v2; // r2
  unsigned int v3; // r1
  unsigned int v4; // r2

  if ( !*((_BYTE *)this + 16) )
  {
    v2 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 2) = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 3) = v2;
    *((_BYTE *)this + 16) = 1;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v3 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 17) = 0;
    *((_DWORD *)this + 2) = v3;
    v4 = v3;
  }
  else
  {
    v4 = *((_DWORD *)this + 2);
    v3 = CTimer::m_snTimeInMilliseconds;
  }
  return v4 + *((_DWORD *)this + 3) <= v3;
}


// ============================================================

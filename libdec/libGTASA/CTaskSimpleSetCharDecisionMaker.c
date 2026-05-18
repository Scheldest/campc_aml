
// Address: 0x4f150c
// Original: _ZN31CTaskSimpleSetCharDecisionMaker10ProcessPedEP4CPed
// Demangled: CTaskSimpleSetCharDecisionMaker::ProcessPed(CPed *)
int __fastcall CTaskSimpleSetCharDecisionMaker::ProcessPed(
        CTaskSimpleSetCharDecisionMaker *this,
        CPedIntelligence **a2)
{
  CPedIntelligence::SetPedDecisionMakerType(a2[272], *((_DWORD *)this + 2));
  return 1;
}


// ============================================================

// Address: 0x4f2086
// Original: _ZN31CTaskSimpleSetCharDecisionMakerD0Ev
// Demangled: CTaskSimpleSetCharDecisionMaker::~CTaskSimpleSetCharDecisionMaker()
void __fastcall CTaskSimpleSetCharDecisionMaker::~CTaskSimpleSetCharDecisionMaker(
        CTaskSimpleSetCharDecisionMaker *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4f2098
// Original: _ZNK31CTaskSimpleSetCharDecisionMaker5CloneEv
// Demangled: CTaskSimpleSetCharDecisionMaker::Clone(void)
_DWORD *__fastcall CTaskSimpleSetCharDecisionMaker::Clone(CTaskSimpleSetCharDecisionMaker *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int v4; // r4
  _DWORD *result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&byte_9[3], a2);
  v4 = *((_DWORD *)this + 2);
  CTaskSimple::CTaskSimple(v3);
  result[2] = v4;
  *result = &off_66A824;
  return result;
}


// ============================================================

// Address: 0x4f20bc
// Original: _ZNK31CTaskSimpleSetCharDecisionMaker11GetTaskTypeEv
// Demangled: CTaskSimpleSetCharDecisionMaker::GetTaskType(void)
int __fastcall CTaskSimpleSetCharDecisionMaker::GetTaskType(CTaskSimpleSetCharDecisionMaker *this)
{
  return 271;
}


// ============================================================

// Address: 0x4f20c2
// Original: _ZN31CTaskSimpleSetCharDecisionMaker13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleSetCharDecisionMaker::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleSetCharDecisionMaker::MakeAbortable(
        CTaskSimpleSetCharDecisionMaker *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 0;
}


// ============================================================

// Address: 0x4f20c8
// Original: _ZN31CTaskSimpleSetCharDecisionMaker9SerializeEv
// Demangled: CTaskSimpleSetCharDecisionMaker::Serialize(void)
void __fastcall CTaskSimpleSetCharDecisionMaker::Serialize(CTaskSimpleSetCharDecisionMaker *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleSetCharDecisionMaker *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleSetCharDecisionMaker *))(*(_DWORD *)this + 20))(this) == 271 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 2);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    j_free(v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskSimpleSetCharDecisionMaker *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(271, v7);
  }
}


// ============================================================

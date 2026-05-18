
// Address: 0x384624
// Original: _ZN49CTaskComplexUseClosestFreeScriptedAttractorSprintD0Ev
// Demangled: CTaskComplexUseClosestFreeScriptedAttractorSprint::~CTaskComplexUseClosestFreeScriptedAttractorSprint()
void __fastcall CTaskComplexUseClosestFreeScriptedAttractorSprint::~CTaskComplexUseClosestFreeScriptedAttractorSprint(
        CTaskComplexUseClosestFreeScriptedAttractorSprint *this)
{
  void *v1; // r0

  CTaskComplexUseClosestFreeScriptedAttractor::~CTaskComplexUseClosestFreeScriptedAttractor(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x384634
// Original: _ZNK49CTaskComplexUseClosestFreeScriptedAttractorSprint5CloneEv
// Demangled: CTaskComplexUseClosestFreeScriptedAttractorSprint::Clone(void)
_DWORD *__fastcall CTaskComplexUseClosestFreeScriptedAttractorSprint::Clone(
        CTaskComplexUseClosestFreeScriptedAttractorSprint *this,
        unsigned int a2)
{
  CTaskComplexUseClosestFreeScriptedAttractor *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, a2);
  CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v2, 0);
  result[3] = 7;
  *result = &off_667318;
  return result;
}


// ============================================================

// Address: 0x384658
// Original: _ZNK49CTaskComplexUseClosestFreeScriptedAttractorSprint11GetTaskTypeEv
// Demangled: CTaskComplexUseClosestFreeScriptedAttractorSprint::GetTaskType(void)
int __fastcall CTaskComplexUseClosestFreeScriptedAttractorSprint::GetTaskType(
        CTaskComplexUseClosestFreeScriptedAttractorSprint *this)
{
  return 262;
}


// ============================================================

// Address: 0x384660
// Original: _ZN49CTaskComplexUseClosestFreeScriptedAttractorSprint9SerializeEv
// Demangled: CTaskComplexUseClosestFreeScriptedAttractorSprint::Serialize(void)
int __fastcall CTaskComplexUseClosestFreeScriptedAttractorSprint::Serialize(
        CTaskComplexUseClosestFreeScriptedAttractorSprint *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexUseClosestFreeScriptedAttractorSprint *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, &byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexUseClosestFreeScriptedAttractorSprint *))(*(_DWORD *)this + 20))(this);
  if ( result != 262 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexUseClosestFreeScriptedAttractorSprint *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(262, v6);
  }
  return result;
}


// ============================================================

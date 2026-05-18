
// Address: 0x384578
// Original: _ZN46CTaskComplexUseClosestFreeScriptedAttractorRunD0Ev
// Demangled: CTaskComplexUseClosestFreeScriptedAttractorRun::~CTaskComplexUseClosestFreeScriptedAttractorRun()
void __fastcall CTaskComplexUseClosestFreeScriptedAttractorRun::~CTaskComplexUseClosestFreeScriptedAttractorRun(
        CTaskComplexUseClosestFreeScriptedAttractorRun *this)
{
  void *v1; // r0

  CTaskComplexUseClosestFreeScriptedAttractor::~CTaskComplexUseClosestFreeScriptedAttractor(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x384588
// Original: _ZNK46CTaskComplexUseClosestFreeScriptedAttractorRun5CloneEv
// Demangled: CTaskComplexUseClosestFreeScriptedAttractorRun::Clone(void)
_DWORD *__fastcall CTaskComplexUseClosestFreeScriptedAttractorRun::Clone(
        CTaskComplexUseClosestFreeScriptedAttractorRun *this,
        unsigned int a2)
{
  CTaskComplexUseClosestFreeScriptedAttractor *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, a2);
  CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v2, 0);
  result[3] = 6;
  *result = &off_6672DC;
  return result;
}


// ============================================================

// Address: 0x3845ac
// Original: _ZNK46CTaskComplexUseClosestFreeScriptedAttractorRun11GetTaskTypeEv
// Demangled: CTaskComplexUseClosestFreeScriptedAttractorRun::GetTaskType(void)
int __fastcall CTaskComplexUseClosestFreeScriptedAttractorRun::GetTaskType(
        CTaskComplexUseClosestFreeScriptedAttractorRun *this)
{
  return 261;
}


// ============================================================

// Address: 0x3845b4
// Original: _ZN46CTaskComplexUseClosestFreeScriptedAttractorRun9SerializeEv
// Demangled: CTaskComplexUseClosestFreeScriptedAttractorRun::Serialize(void)
int __fastcall CTaskComplexUseClosestFreeScriptedAttractorRun::Serialize(
        CTaskComplexUseClosestFreeScriptedAttractorRun *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexUseClosestFreeScriptedAttractorRun *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, &byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexUseClosestFreeScriptedAttractorRun *))(*(_DWORD *)this + 20))(this);
  if ( result != 261 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexUseClosestFreeScriptedAttractorRun *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(261, v6);
  }
  return result;
}


// ============================================================

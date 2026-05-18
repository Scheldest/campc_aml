
// Address: 0x195cf4
// Original: j__ZN21CTaskSimpleWaitForBusC2Ev
// Demangled: CTaskSimpleWaitForBus::CTaskSimpleWaitForBus(void)
// attributes: thunk
void __fastcall CTaskSimpleWaitForBus::CTaskSimpleWaitForBus(CTaskSimpleWaitForBus *this)
{
  _ZN21CTaskSimpleWaitForBusC2Ev(this);
}


// ============================================================

// Address: 0x4ee594
// Original: _ZN21CTaskSimpleWaitForBusC2Ev
// Demangled: CTaskSimpleWaitForBus::CTaskSimpleWaitForBus(void)
void __fastcall CTaskSimpleWaitForBus::CTaskSimpleWaitForBus(CTaskSimpleWaitForBus *this)
{
  _DWORD *v1; // r0

  CTaskSimple::CTaskSimple(this);
  v1[2] = 0;
  *v1 = &off_66A22C;
}


// ============================================================

// Address: 0x4ee5b0
// Original: _ZN21CTaskSimpleWaitForBusD2Ev
// Demangled: CTaskSimpleWaitForBus::~CTaskSimpleWaitForBus()
// attributes: thunk
void __fastcall CTaskSimpleWaitForBus::~CTaskSimpleWaitForBus(CTaskSimpleWaitForBus *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4ee5b4
// Original: _ZN21CTaskSimpleWaitForBusD0Ev
// Demangled: CTaskSimpleWaitForBus::~CTaskSimpleWaitForBus()
void __fastcall CTaskSimpleWaitForBus::~CTaskSimpleWaitForBus(CTaskSimpleWaitForBus *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ee5c4
// Original: _ZN21CTaskSimpleWaitForBus10ProcessPedEP4CPed
// Demangled: CTaskSimpleWaitForBus::ProcessPed(CPed *)
int __fastcall CTaskSimpleWaitForBus::ProcessPed(CTaskSimpleWaitForBus *this, CPed *a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r3

  v2 = 56;
  while ( 1 )
  {
    v3 = v2;
    v4 = *(_DWORD *)(*((_DWORD *)a2 + 272) + 4 * v2);
    if ( v4 )
    {
      if ( (*(_BYTE *)(v4 + 1069) & 2) != 0
        && (float)((float)((float)(*(float *)(v4 + 72) * *(float *)(v4 + 72))
                         + (float)(*(float *)(v4 + 76) * *(float *)(v4 + 76)))
                 + (float)(*(float *)(v4 + 80) * *(float *)(v4 + 80))) < 0.000025
        && *(unsigned __int8 *)(v4 + 1164) - 1 > *(unsigned __int8 *)(v4 + 1160) )
      {
        break;
      }
    }
    v2 = v3 + 1;
    if ( v3 - 56 >= 15 )
      return 0;
  }
  *((_DWORD *)this + 2) = v4;
  return 1;
}


// ============================================================

// Address: 0x4f3764
// Original: _ZNK21CTaskSimpleWaitForBus5CloneEv
// Demangled: CTaskSimpleWaitForBus::Clone(void)
_DWORD *__fastcall CTaskSimpleWaitForBus::Clone(CTaskSimpleWaitForBus *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&byte_9[3], a2);
  CTaskSimple::CTaskSimple(v2);
  result[2] = 0;
  *result = &off_66A22C;
  return result;
}


// ============================================================

// Address: 0x4f3788
// Original: _ZNK21CTaskSimpleWaitForBus11GetTaskTypeEv
// Demangled: CTaskSimpleWaitForBus::GetTaskType(void)
int __fastcall CTaskSimpleWaitForBus::GetTaskType(CTaskSimpleWaitForBus *this)
{
  return 238;
}


// ============================================================

// Address: 0x4f378c
// Original: _ZN21CTaskSimpleWaitForBus13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleWaitForBus::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleWaitForBus::MakeAbortable(CTaskSimpleWaitForBus *this, CPed *a2, int a3, const CEvent *a4)
{
  return 1;
}


// ============================================================

// Address: 0x4f3790
// Original: _ZN21CTaskSimpleWaitForBus9SerializeEv
// Demangled: CTaskSimpleWaitForBus::Serialize(void)
int __fastcall CTaskSimpleWaitForBus::Serialize(CTaskSimpleWaitForBus *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleWaitForBus *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleWaitForBus *))(*(_DWORD *)this + 20))(this);
  if ( result != 238 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleWaitForBus *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(238, v6);
  }
  return result;
}


// ============================================================

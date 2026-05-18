
// Address: 0x18e664
// Original: j__ZN34CTaskSimpleSetKindaStayInSamePlaceC2Eb
// Demangled: CTaskSimpleSetKindaStayInSamePlace::CTaskSimpleSetKindaStayInSamePlace(bool)
// attributes: thunk
void __fastcall CTaskSimpleSetKindaStayInSamePlace::CTaskSimpleSetKindaStayInSamePlace(
        CTaskSimpleSetKindaStayInSamePlace *this,
        bool a2)
{
  _ZN34CTaskSimpleSetKindaStayInSamePlaceC2Eb(this, a2);
}


// ============================================================

// Address: 0x1905c4
// Original: j__ZN34CTaskSimpleSetKindaStayInSamePlaceD2Ev
// Demangled: CTaskSimpleSetKindaStayInSamePlace::~CTaskSimpleSetKindaStayInSamePlace()
// attributes: thunk
void __fastcall CTaskSimpleSetKindaStayInSamePlace::~CTaskSimpleSetKindaStayInSamePlace(
        CTaskSimpleSetKindaStayInSamePlace *this)
{
  _ZN34CTaskSimpleSetKindaStayInSamePlaceD2Ev(this);
}


// ============================================================

// Address: 0x19c6a4
// Original: j__ZN34CTaskSimpleSetKindaStayInSamePlace10ProcessPedEP4CPed
// Demangled: CTaskSimpleSetKindaStayInSamePlace::ProcessPed(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleSetKindaStayInSamePlace::ProcessPed(CTaskSimpleSetKindaStayInSamePlace *this, CPed *a2)
{
  return _ZN34CTaskSimpleSetKindaStayInSamePlace10ProcessPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x4ea9f4
// Original: _ZN34CTaskSimpleSetKindaStayInSamePlaceC2Eb
// Demangled: CTaskSimpleSetKindaStayInSamePlace::CTaskSimpleSetKindaStayInSamePlace(bool)
void __fastcall CTaskSimpleSetKindaStayInSamePlace::CTaskSimpleSetKindaStayInSamePlace(
        CTaskSimpleSetKindaStayInSamePlace *this,
        bool a2)
{
  int v3; // r0

  CTaskSimple::CTaskSimple(this);
  *(_BYTE *)(v3 + 8) = a2;
  *(_DWORD *)v3 = &off_669C74;
}


// ============================================================

// Address: 0x4eaa10
// Original: _ZN34CTaskSimpleSetKindaStayInSamePlaceD2Ev
// Demangled: CTaskSimpleSetKindaStayInSamePlace::~CTaskSimpleSetKindaStayInSamePlace()
// attributes: thunk
void __fastcall CTaskSimpleSetKindaStayInSamePlace::~CTaskSimpleSetKindaStayInSamePlace(
        CTaskSimpleSetKindaStayInSamePlace *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4eaa14
// Original: _ZN34CTaskSimpleSetKindaStayInSamePlaceD0Ev
// Demangled: CTaskSimpleSetKindaStayInSamePlace::~CTaskSimpleSetKindaStayInSamePlace()
void __fastcall CTaskSimpleSetKindaStayInSamePlace::~CTaskSimpleSetKindaStayInSamePlace(
        CTaskSimpleSetKindaStayInSamePlace *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4eaa24
// Original: _ZN34CTaskSimpleSetKindaStayInSamePlace10ProcessPedEP4CPed
// Demangled: CTaskSimpleSetKindaStayInSamePlace::ProcessPed(CPed *)
int __fastcall CTaskSimpleSetKindaStayInSamePlace::ProcessPed(CTaskSimpleSetKindaStayInSamePlace *this, CPed *a2)
{
  int v2; // r3
  int v3; // r12
  int v4; // lr
  int result; // r0

  v2 = *((_DWORD *)a2 + 290);
  v3 = *((_DWORD *)a2 + 291);
  v4 = *((_DWORD *)a2 + 292);
  *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289) & 0xFFBFFFFF | (*((unsigned __int8 *)this + 8) << 22);
  result = 1;
  *((_DWORD *)a2 + 290) = v2;
  *((_DWORD *)a2 + 291) = v3;
  *((_DWORD *)a2 + 292) = v4;
  return result;
}


// ============================================================

// Address: 0x4f243c
// Original: _ZNK34CTaskSimpleSetKindaStayInSamePlace5CloneEv
// Demangled: CTaskSimpleSetKindaStayInSamePlace::Clone(void)
int __fastcall CTaskSimpleSetKindaStayInSamePlace::Clone(CTaskSimpleSetKindaStayInSamePlace *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&byte_9[3], a2);
  LOBYTE(this) = *((_BYTE *)this + 8);
  CTaskSimple::CTaskSimple(v3);
  *(_BYTE *)(result + 8) = (_BYTE)this;
  *(_DWORD *)result = &off_669C74;
  return result;
}


// ============================================================

// Address: 0x4f2460
// Original: _ZNK34CTaskSimpleSetKindaStayInSamePlace11GetTaskTypeEv
// Demangled: CTaskSimpleSetKindaStayInSamePlace::GetTaskType(void)
int __fastcall CTaskSimpleSetKindaStayInSamePlace::GetTaskType(CTaskSimpleSetKindaStayInSamePlace *this)
{
  return 276;
}


// ============================================================

// Address: 0x4f2466
// Original: _ZN34CTaskSimpleSetKindaStayInSamePlace13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleSetKindaStayInSamePlace::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleSetKindaStayInSamePlace::MakeAbortable(
        CTaskSimpleSetKindaStayInSamePlace *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 1;
}


// ============================================================

// Address: 0x4f246c
// Original: _ZN34CTaskSimpleSetKindaStayInSamePlace9SerializeEv
// Demangled: CTaskSimpleSetKindaStayInSamePlace::Serialize(void)
int __fastcall CTaskSimpleSetKindaStayInSamePlace::Serialize(CTaskSimpleSetKindaStayInSamePlace *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleSetKindaStayInSamePlace *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleSetKindaStayInSamePlace *))(*(_DWORD *)this + 20))(this) == 276 )
  {
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskSimpleSetKindaStayInSamePlace *)((char *)this + 8), (char *)&stderr + 1, v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskSimpleSetKindaStayInSamePlace *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(276, v7);
  }
}


// ============================================================

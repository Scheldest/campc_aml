
// Address: 0x18a3f0
// Original: j__ZN29CTaskSimpleSetStayInSamePlaceC2Eb
// Demangled: CTaskSimpleSetStayInSamePlace::CTaskSimpleSetStayInSamePlace(bool)
// attributes: thunk
void __fastcall CTaskSimpleSetStayInSamePlace::CTaskSimpleSetStayInSamePlace(
        CTaskSimpleSetStayInSamePlace *this,
        bool a2)
{
  _ZN29CTaskSimpleSetStayInSamePlaceC2Eb(this, a2);
}


// ============================================================

// Address: 0x196080
// Original: j__ZN29CTaskSimpleSetStayInSamePlace10ProcessPedEP4CPed
// Demangled: CTaskSimpleSetStayInSamePlace::ProcessPed(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleSetStayInSamePlace::ProcessPed(CTaskSimpleSetStayInSamePlace *this, CPed *a2)
{
  return _ZN29CTaskSimpleSetStayInSamePlace10ProcessPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19ec64
// Original: j__ZN29CTaskSimpleSetStayInSamePlaceD2Ev
// Demangled: CTaskSimpleSetStayInSamePlace::~CTaskSimpleSetStayInSamePlace()
// attributes: thunk
void __fastcall CTaskSimpleSetStayInSamePlace::~CTaskSimpleSetStayInSamePlace(CTaskSimpleSetStayInSamePlace *this)
{
  _ZN29CTaskSimpleSetStayInSamePlaceD2Ev(this);
}


// ============================================================

// Address: 0x4ea990
// Original: _ZN29CTaskSimpleSetStayInSamePlaceC2Eb
// Demangled: CTaskSimpleSetStayInSamePlace::CTaskSimpleSetStayInSamePlace(bool)
void __fastcall CTaskSimpleSetStayInSamePlace::CTaskSimpleSetStayInSamePlace(
        CTaskSimpleSetStayInSamePlace *this,
        bool a2)
{
  int v3; // r0

  CTaskSimple::CTaskSimple(this);
  *(_BYTE *)(v3 + 8) = a2;
  *(_DWORD *)v3 = &off_669C40;
}


// ============================================================

// Address: 0x4ea9ac
// Original: _ZN29CTaskSimpleSetStayInSamePlaceD2Ev
// Demangled: CTaskSimpleSetStayInSamePlace::~CTaskSimpleSetStayInSamePlace()
// attributes: thunk
void __fastcall CTaskSimpleSetStayInSamePlace::~CTaskSimpleSetStayInSamePlace(CTaskSimpleSetStayInSamePlace *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4ea9b0
// Original: _ZN29CTaskSimpleSetStayInSamePlaceD0Ev
// Demangled: CTaskSimpleSetStayInSamePlace::~CTaskSimpleSetStayInSamePlace()
void __fastcall CTaskSimpleSetStayInSamePlace::~CTaskSimpleSetStayInSamePlace(CTaskSimpleSetStayInSamePlace *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ea9c0
// Original: _ZN29CTaskSimpleSetStayInSamePlace10ProcessPedEP4CPed
// Demangled: CTaskSimpleSetStayInSamePlace::ProcessPed(CPed *)
int __fastcall CTaskSimpleSetStayInSamePlace::ProcessPed(CTaskSimpleSetStayInSamePlace *this, CPed *a2)
{
  int v2; // r3
  int v3; // r12
  int v4; // lr
  int result; // r0

  v2 = *((_DWORD *)a2 + 290);
  v3 = *((_DWORD *)a2 + 291);
  v4 = *((_DWORD *)a2 + 292);
  *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289) & 0xFFDFFFFF | (*((unsigned __int8 *)this + 8) << 21);
  result = 1;
  *((_DWORD *)a2 + 290) = v2;
  *((_DWORD *)a2 + 291) = v3;
  *((_DWORD *)a2 + 292) = v4;
  return result;
}


// ============================================================

// Address: 0x4f2388
// Original: _ZNK29CTaskSimpleSetStayInSamePlace5CloneEv
// Demangled: CTaskSimpleSetStayInSamePlace::Clone(void)
int __fastcall CTaskSimpleSetStayInSamePlace::Clone(CTaskSimpleSetStayInSamePlace *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&byte_9[3], a2);
  LOBYTE(this) = *((_BYTE *)this + 8);
  CTaskSimple::CTaskSimple(v3);
  *(_BYTE *)(result + 8) = (_BYTE)this;
  *(_DWORD *)result = &off_669C40;
  return result;
}


// ============================================================

// Address: 0x4f23ac
// Original: _ZNK29CTaskSimpleSetStayInSamePlace11GetTaskTypeEv
// Demangled: CTaskSimpleSetStayInSamePlace::GetTaskType(void)
int __fastcall CTaskSimpleSetStayInSamePlace::GetTaskType(CTaskSimpleSetStayInSamePlace *this)
{
  return 204;
}


// ============================================================

// Address: 0x4f23b0
// Original: _ZN29CTaskSimpleSetStayInSamePlace13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleSetStayInSamePlace::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleSetStayInSamePlace::MakeAbortable(
        CTaskSimpleSetStayInSamePlace *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 1;
}


// ============================================================

// Address: 0x4f23b4
// Original: _ZN29CTaskSimpleSetStayInSamePlace9SerializeEv
// Demangled: CTaskSimpleSetStayInSamePlace::Serialize(void)
int __fastcall CTaskSimpleSetStayInSamePlace::Serialize(CTaskSimpleSetStayInSamePlace *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleSetStayInSamePlace *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleSetStayInSamePlace *))(*(_DWORD *)this + 20))(this) == 204 )
  {
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskSimpleSetStayInSamePlace *)((char *)this + 8), (char *)&stderr + 1, v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskSimpleSetStayInSamePlace *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(204, v7);
  }
}


// ============================================================

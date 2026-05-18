
// Address: 0x4e8cb0
// Original: _ZN39CTaskSimpleSetCharIgnoreWeaponRangeFlag10ProcessPedEP4CPed
// Demangled: CTaskSimpleSetCharIgnoreWeaponRangeFlag::ProcessPed(CPed *)
int __fastcall CTaskSimpleSetCharIgnoreWeaponRangeFlag::ProcessPed(
        CTaskSimpleSetCharIgnoreWeaponRangeFlag *this,
        CPed *a2)
{
  int v2; // r3
  int v3; // r12
  unsigned int v4; // r0

  v2 = *((_DWORD *)a2 + 290);
  v3 = *((_DWORD *)a2 + 291);
  v4 = *((_DWORD *)a2 + 292) & 0xFFFFFDFF | ((*((_BYTE *)this + 8) & 1) << 9);
  *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289);
  *((_DWORD *)a2 + 290) = v2;
  *((_DWORD *)a2 + 291) = v3;
  *((_DWORD *)a2 + 292) = v4;
  return 1;
}


// ============================================================

// Address: 0x4e9390
// Original: _ZN39CTaskSimpleSetCharIgnoreWeaponRangeFlagD0Ev
// Demangled: CTaskSimpleSetCharIgnoreWeaponRangeFlag::~CTaskSimpleSetCharIgnoreWeaponRangeFlag()
void __fastcall CTaskSimpleSetCharIgnoreWeaponRangeFlag::~CTaskSimpleSetCharIgnoreWeaponRangeFlag(
        CTaskSimpleSetCharIgnoreWeaponRangeFlag *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4e93a0
// Original: _ZNK39CTaskSimpleSetCharIgnoreWeaponRangeFlag5CloneEv
// Demangled: CTaskSimpleSetCharIgnoreWeaponRangeFlag::Clone(void)
int __fastcall CTaskSimpleSetCharIgnoreWeaponRangeFlag::Clone(
        CTaskSimpleSetCharIgnoreWeaponRangeFlag *this,
        unsigned int a2)
{
  CTaskSimple *v3; // r0
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&byte_9[3], a2);
  LOBYTE(this) = *((_BYTE *)this + 8);
  CTaskSimple::CTaskSimple(v3);
  *(_BYTE *)(result + 8) = (_BYTE)this;
  *(_DWORD *)result = &off_669B88;
  return result;
}


// ============================================================

// Address: 0x4e93c4
// Original: _ZNK39CTaskSimpleSetCharIgnoreWeaponRangeFlag11GetTaskTypeEv
// Demangled: CTaskSimpleSetCharIgnoreWeaponRangeFlag::GetTaskType(void)
int __fastcall CTaskSimpleSetCharIgnoreWeaponRangeFlag::GetTaskType(CTaskSimpleSetCharIgnoreWeaponRangeFlag *this)
{
  return 1033;
}


// ============================================================

// Address: 0x4e93ca
// Original: _ZN39CTaskSimpleSetCharIgnoreWeaponRangeFlag13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleSetCharIgnoreWeaponRangeFlag::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleSetCharIgnoreWeaponRangeFlag::MakeAbortable(
        CTaskSimpleSetCharIgnoreWeaponRangeFlag *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 0;
}


// ============================================================

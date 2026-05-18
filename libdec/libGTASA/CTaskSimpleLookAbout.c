
// Address: 0x357994
// Original: _ZN20CTaskSimpleLookAboutD0Ev
// Demangled: CTaskSimpleLookAbout::~CTaskSimpleLookAbout()
void __fastcall CTaskSimpleLookAbout::~CTaskSimpleLookAbout(CTaskSimpleLookAbout *this)
{
  void *v1; // r0

  CTaskSimpleAnim::~CTaskSimpleAnim(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x3579a4
// Original: _ZNK20CTaskSimpleLookAbout5CloneEv
// Demangled: CTaskSimpleLookAbout::Clone(void)
_DWORD *__fastcall CTaskSimpleLookAbout::Clone(CTaskSimpleLookAbout *this, unsigned int a2)
{
  int v3; // r0
  _DWORD *result; // r0

  v3 = CTask::operator new((CTask *)&dword_34, a2);
  result = (_DWORD *)CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
                       v3,
                       0,
                       9,
                       1082130432,
                       -4.0,
                       *((_DWORD *)this + 8),
                       422,
                       (int)"LookAbout",
                       0);
  *result = &off_6658A8;
  return result;
}


// ============================================================

// Address: 0x3579f4
// Original: _ZN20CTaskSimpleLookAbout9SerializeEv
// Demangled: CTaskSimpleLookAbout::Serialize(void)
void __fastcall CTaskSimpleLookAbout::Serialize(CTaskSimpleLookAbout *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleLookAbout *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, &byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleLookAbout *))(*(_DWORD *)this + 20))(this) == 422 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 8);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, &byte_4, v6);
    j_free(v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskSimpleLookAbout *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(422, v7);
  }
}


// ============================================================

// Address: 0x357a90
// Original: _ZNK20CTaskSimpleLookAbout15IsInterruptableEPK4CPed
// Demangled: CTaskSimpleLookAbout::IsInterruptable(CPed const*)
int __fastcall CTaskSimpleLookAbout::IsInterruptable(CTaskSimpleLookAbout *this, const CPed *a2)
{
  return 0;
}


// ============================================================

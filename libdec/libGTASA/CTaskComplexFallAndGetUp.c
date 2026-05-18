
// Address: 0x196e38
// Original: j__ZN24CTaskComplexFallAndGetUp10CreateTaskEv
// Demangled: CTaskComplexFallAndGetUp::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexFallAndGetUp::CreateTask(CTaskComplexFallAndGetUp *this)
{
  return _ZN24CTaskComplexFallAndGetUp10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19a2d8
// Original: j__ZN24CTaskComplexFallAndGetUpC2E11AnimationId12AssocGroupIdi
// Demangled: CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp(AnimationId,AssocGroupId,int)
// attributes: thunk
int CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp()
{
  return _ZN24CTaskComplexFallAndGetUpC2E11AnimationId12AssocGroupIdi();
}


// ============================================================

// Address: 0x19b0d4
// Original: j__ZNK24CTaskComplexFallAndGetUp9IsFallingEv
// Demangled: CTaskComplexFallAndGetUp::IsFalling(void)
// attributes: thunk
int __fastcall CTaskComplexFallAndGetUp::IsFalling(CTaskComplexFallAndGetUp *this)
{
  return _ZNK24CTaskComplexFallAndGetUp9IsFallingEv(this);
}


// ============================================================

// Address: 0x19d5fc
// Original: j__ZN24CTaskComplexFallAndGetUpC2Eii
// Demangled: CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp(int,int)
// attributes: thunk
void __fastcall CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp(CTaskComplexFallAndGetUp *this, int a2, int a3)
{
  _ZN24CTaskComplexFallAndGetUpC2Eii(this, a2, a3);
}


// ============================================================

// Address: 0x19e9f0
// Original: j__ZN24CTaskComplexFallAndGetUp11SetDownTimeEi
// Demangled: CTaskComplexFallAndGetUp::SetDownTime(int)
// attributes: thunk
int __fastcall CTaskComplexFallAndGetUp::SetDownTime(CTaskComplexFallAndGetUp *this, int a2)
{
  return _ZN24CTaskComplexFallAndGetUp11SetDownTimeEi(this, a2);
}


// ============================================================

// Address: 0x490f30
// Original: _ZN24CTaskComplexFallAndGetUp10CreateTaskEv
// Demangled: CTaskComplexFallAndGetUp::CreateTask(void)
int __fastcall CTaskComplexFallAndGetUp::CreateTask(CTaskComplexFallAndGetUp *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  unsigned int v8; // r1
  int v10; // [sp+4h] [bp-14h] BYREF
  int v11; // [sp+8h] [bp-10h] BYREF
  _DWORD v12[3]; // [sp+Ch] [bp-Ch] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, byte_4, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, byte_4, v6);
  CTask::operator new((CTask *)&off_18, v8);
  return CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp();
}


// ============================================================

// Address: 0x52ba54
// Original: _ZN24CTaskComplexFallAndGetUpC2E11AnimationId12AssocGroupIdi
// Demangled: CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp(AnimationId,AssocGroupId,int)
_DWORD *__fastcall CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp(CTaskComplex *a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0

  CTaskComplex::CTaskComplex(a1);
  result[3] = a2;
  result[4] = a3;
  result[5] = a4;
  *result = &off_66CA3C;
  return result;
}


// ============================================================

// Address: 0x52ba80
// Original: _ZN24CTaskComplexFallAndGetUpC2Eii
// Demangled: CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp(int,int)
void __fastcall CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp(
        CTaskComplexFallAndGetUp *this,
        unsigned int a2,
        int a3)
{
  _DWORD *v5; // r0

  CTaskComplex::CTaskComplex(this);
  v5[5] = a3;
  *v5 = &off_66CA3C;
  if ( a2 <= 3 )
    v5[3] = a2 + 24;
  v5[4] = 0;
}


// ============================================================

// Address: 0x52bab0
// Original: _ZN24CTaskComplexFallAndGetUpD2Ev
// Demangled: CTaskComplexFallAndGetUp::~CTaskComplexFallAndGetUp()
// attributes: thunk
void __fastcall CTaskComplexFallAndGetUp::~CTaskComplexFallAndGetUp(CTaskComplexFallAndGetUp *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x52bab4
// Original: _ZN24CTaskComplexFallAndGetUpD0Ev
// Demangled: CTaskComplexFallAndGetUp::~CTaskComplexFallAndGetUp()
void __fastcall CTaskComplexFallAndGetUp::~CTaskComplexFallAndGetUp(CTaskComplexFallAndGetUp *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x52bac4
// Original: _ZN24CTaskComplexFallAndGetUp11SetDownTimeEi
// Demangled: CTaskComplexFallAndGetUp::SetDownTime(int)
int __fastcall CTaskComplexFallAndGetUp::SetDownTime(CTaskComplexFallAndGetUp *this, int a2)
{
  int v3; // r0
  int result; // r0
  int v5; // r1

  v3 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 5) = a2;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 20))(v3);
  if ( result == 207 )
  {
    result = *((_DWORD *)this + 2);
    v5 = *((_DWORD *)this + 5);
    *(_DWORD *)(result + 24) = v5;
    *(_DWORD *)(result + 28) = v5;
  }
  return result;
}


// ============================================================

// Address: 0x52bae2
// Original: _ZNK24CTaskComplexFallAndGetUp9IsFallingEv
// Demangled: CTaskComplexFallAndGetUp::IsFalling(void)
bool __fastcall CTaskComplexFallAndGetUp::IsFalling(CTaskComplexFallAndGetUp *this)
{
  int v1; // r0
  int v2; // r4

  v1 = *((_DWORD *)this + 2);
  v2 = 0;
  if ( v1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 20))(v1) == 207;
  return v2;
}


// ============================================================

// Address: 0x52bafc
// Original: _ZN24CTaskComplexFallAndGetUp13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexFallAndGetUp::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexFallAndGetUp::MakeAbortable(
        CTaskComplexFallAndGetUp *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int *v8; // r0
  int v9; // r2
  int v10; // r1
  int v12; // r0

  if ( a3 == 2 )
  {
    v8 = (int *)*((_DWORD *)this + 2);
    v9 = 2;
    v10 = *v8;
    return (*(int (__fastcall **)(int *, CPed *, int, const CEvent *))(v10 + 28))(v8, a2, v9, a4);
  }
  if ( *((_DWORD *)a2 + 275) != 63 && (*((_BYTE *)a2 + 1164) & 0x40) == 0 )
  {
    v8 = (int *)*((_DWORD *)this + 2);
    if ( a3 == 1 )
    {
      v10 = *v8;
      v9 = 1;
      return (*(int (__fastcall **)(int *, CPed *, int, const CEvent *))(v10 + 28))(v8, a2, v9, a4);
    }
    if ( (*(int (__fastcall **)(int *))(*v8 + 20))(v8) != 207 )
    {
      v12 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 5) = 0;
      (*(void (__fastcall **)(int, CPed *, int, const CEvent *))(*(_DWORD *)v12 + 28))(v12, a2, a3, a4);
    }
  }
  return 0;
}


// ============================================================

// Address: 0x52bb68
// Original: _ZN24CTaskComplexFallAndGetUp17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFallAndGetUp::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexFallAndGetUp::CreateNextSubTask(CTaskComplexFallAndGetUp *this, CPed *a2)
{
  unsigned int v2; // r1
  int v3; // r4
  CTaskSimple *v4; // r0
  int v5; // r0

  v3 = 0;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 207 )
  {
    v4 = (CTaskSimple *)CTask::operator new((CTask *)&word_10, v2);
    CTaskSimple::CTaskSimple(v4);
    *(_WORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 12) = 0;
    v3 = v5;
    *(_DWORD *)v5 = &off_66C998;
  }
  return v3;
}


// ============================================================

// Address: 0x52bb9c
// Original: _ZN24CTaskComplexFallAndGetUp13CreateSubTaskEi
// Demangled: CTaskComplexFallAndGetUp::CreateSubTask(int)
CTaskSimple *__fastcall CTaskComplexFallAndGetUp::CreateSubTask(CTaskComplexFallAndGetUp *this, int a2)
{
  CTaskSimple *v3; // r4
  CTaskSimple *v4; // r0
  __int64 v5; // kr00_8
  int v6; // r5
  CTaskSimple *v7; // r0
  int v8; // r0

  v3 = 0;
  if ( a2 == 205 )
  {
    v7 = (CTaskSimple *)CTask::operator new((CTask *)&word_10, 0xCDu);
    CTaskSimple::CTaskSimple(v7);
    *(_WORD *)(v8 + 8) = 0;
    *(_DWORD *)(v8 + 12) = 0;
    v3 = (CTaskSimple *)v8;
    *(_DWORD *)v8 = &off_66C998;
  }
  else if ( a2 == 207 )
  {
    v4 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, 0xCFu);
    v5 = *(_QWORD *)((char *)this + 12);
    v3 = v4;
    v6 = *((_DWORD *)this + 5);
    CTaskSimple::CTaskSimple(v4);
    *((_BYTE *)v3 + 8) = 0;
    *(_QWORD *)((char *)v3 + 12) = v5;
    *((_DWORD *)v3 + 5) = 0;
    *((_DWORD *)v3 + 6) = v6;
    *((_DWORD *)v3 + 7) = v6;
    *(_DWORD *)v3 = &off_66CA08;
  }
  return v3;
}


// ============================================================

// Address: 0x52bc08
// Original: _ZN24CTaskComplexFallAndGetUp18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFallAndGetUp::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexFallAndGetUp::CreateFirstSubTask(CTaskComplexFallAndGetUp *this, CPed *a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  int v5; // r4
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = *((_DWORD *)this + 5);
  CTaskSimple::CTaskSimple(v3);
  *(_BYTE *)(result + 8) = 0;
  *(_QWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = v5;
  *(_DWORD *)(result + 28) = v5;
  *(_DWORD *)result = &off_66CA08;
  return result;
}


// ============================================================

// Address: 0x52bc44
// Original: _ZN24CTaskComplexFallAndGetUp14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFallAndGetUp::ControlSubTask(CPed *)
int __fastcall CTaskComplexFallAndGetUp::ControlSubTask(CTaskComplexFallAndGetUp *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x532a50
// Original: _ZNK24CTaskComplexFallAndGetUp5CloneEv
// Demangled: CTaskComplexFallAndGetUp::Clone(void)
int __fastcall CTaskComplexFallAndGetUp::Clone(CTaskComplexFallAndGetUp *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  int v5; // r4
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = *((_DWORD *)this + 5);
  CTaskComplex::CTaskComplex(v3);
  *(_QWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 20) = v5;
  *(_DWORD *)result = &off_66CA3C;
  return result;
}


// ============================================================

// Address: 0x532a84
// Original: _ZNK24CTaskComplexFallAndGetUp11GetTaskTypeEv
// Demangled: CTaskComplexFallAndGetUp::GetTaskType(void)
int __fastcall CTaskComplexFallAndGetUp::GetTaskType(CTaskComplexFallAndGetUp *this)
{
  return 208;
}


// ============================================================

// Address: 0x532a88
// Original: _ZN24CTaskComplexFallAndGetUp9SerializeEv
// Demangled: CTaskComplexFallAndGetUp::Serialize(void)
void __fastcall CTaskComplexFallAndGetUp::Serialize(CTaskComplexFallAndGetUp *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CGenericGameStorage *v9; // r5
  int v10; // r2
  int v11; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexFallAndGetUp *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexFallAndGetUp *))(*(_DWORD *)this + 20))(this) == 208 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v7 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v7 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
    free(v7);
    if ( UseDataFence )
      AddDataFence();
    v9 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v9 = *((_DWORD *)this + 5);
    CGenericGameStorage::_SaveDataToWorkBuffer(v9, byte_4, v10);
    j_free(v9);
  }
  else
  {
    v11 = (*(int (__fastcall **)(CTaskComplexFallAndGetUp *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(208, v11);
  }
}


// ============================================================

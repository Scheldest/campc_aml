
// Address: 0x18f510
// Original: j__ZN38CTaskComplexSitDownThenIdleThenStandUp10CreateTaskEv
// Demangled: CTaskComplexSitDownThenIdleThenStandUp::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexSitDownThenIdleThenStandUp::CreateTask(CTaskComplexSitDownThenIdleThenStandUp *this)
{
  return _ZN38CTaskComplexSitDownThenIdleThenStandUp10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1a155c
// Original: j__ZN38CTaskComplexSitDownThenIdleThenStandUpC2Eihh
// Demangled: CTaskComplexSitDownThenIdleThenStandUp::CTaskComplexSitDownThenIdleThenStandUp(int,uchar,uchar)
// attributes: thunk
void __fastcall CTaskComplexSitDownThenIdleThenStandUp::CTaskComplexSitDownThenIdleThenStandUp(
        CTaskComplexSitDownThenIdleThenStandUp *this,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  _ZN38CTaskComplexSitDownThenIdleThenStandUpC2Eihh(this, a2, a3, a4);
}


// ============================================================

// Address: 0x491308
// Original: _ZN38CTaskComplexSitDownThenIdleThenStandUp10CreateTaskEv
// Demangled: CTaskComplexSitDownThenIdleThenStandUp::CreateTask(void)
void __fastcall CTaskComplexSitDownThenIdleThenStandUp::CreateTask(
        CTaskComplexSitDownThenIdleThenStandUp *this,
        int a2,
        int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  unsigned int v8; // r1
  CTaskComplexSitDownThenIdleThenStandUp *v9; // r0
  unsigned __int8 v10; // [sp+2h] [bp-16h] BYREF
  unsigned __int8 v11; // [sp+3h] [bp-15h] BYREF
  int v12; // [sp+4h] [bp-14h] BYREF
  _BYTE v13[2]; // [sp+Ah] [bp-Eh] BYREF
  _BYTE v14[2]; // [sp+Ch] [bp-Ch] BYREF
  _BYTE v15[10]; // [sp+Eh] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, (char *)&stderr + 1, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, (char *)&stderr + 1, v6);
  v9 = (CTaskComplexSitDownThenIdleThenStandUp *)CTask::operator new((CTask *)&dword_14, v8);
  CTaskComplexSitDownThenIdleThenStandUp::CTaskComplexSitDownThenIdleThenStandUp(v9, v12, v11, v10);
}


// ============================================================

// Address: 0x4ec78c
// Original: _ZN38CTaskComplexSitDownThenIdleThenStandUpC2Eihh
// Demangled: CTaskComplexSitDownThenIdleThenStandUp::CTaskComplexSitDownThenIdleThenStandUp(int,uchar,uchar)
void __fastcall CTaskComplexSitDownThenIdleThenStandUp::CTaskComplexSitDownThenIdleThenStandUp(
        CTaskComplexSitDownThenIdleThenStandUp *this,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  int v7; // r0

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v7 + 12) = a2;
  *(_BYTE *)(v7 + 16) = a3;
  *(_BYTE *)(v7 + 17) = a4;
  *(_BYTE *)(v7 + 18) = 0;
  *(_DWORD *)v7 = &off_669F28;
}


// ============================================================

// Address: 0x4ec7bc
// Original: _ZN38CTaskComplexSitDownThenIdleThenStandUpD2Ev
// Demangled: CTaskComplexSitDownThenIdleThenStandUp::~CTaskComplexSitDownThenIdleThenStandUp()
void __fastcall CTaskComplexSitDownThenIdleThenStandUp::~CTaskComplexSitDownThenIdleThenStandUp(
        CTaskComplexSitDownThenIdleThenStandUp *this)
{
  const char *v2; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v4; // r1

  v2 = (const char *)*((unsigned __int8 *)this + 18);
  *(_DWORD *)this = &off_669F28;
  if ( v2 )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"attractors", v2);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v4);
    *((_BYTE *)this + 18) = 0;
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4ec7f8
// Original: _ZN38CTaskComplexSitDownThenIdleThenStandUpD0Ev
// Demangled: CTaskComplexSitDownThenIdleThenStandUp::~CTaskComplexSitDownThenIdleThenStandUp()
void __fastcall CTaskComplexSitDownThenIdleThenStandUp::~CTaskComplexSitDownThenIdleThenStandUp(
        CTaskComplexSitDownThenIdleThenStandUp *this)
{
  const char *v2; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v4; // r1
  void *v5; // r0

  v2 = (const char *)*((unsigned __int8 *)this + 18);
  *(_DWORD *)this = &off_669F28;
  if ( v2 )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"attractors", v2);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v4);
    *((_BYTE *)this + 18) = 0;
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x4ec838
// Original: _ZN38CTaskComplexSitDownThenIdleThenStandUp13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexSitDownThenIdleThenStandUp::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexSitDownThenIdleThenStandUp::MakeAbortable(
        CTaskComplexSitDownThenIdleThenStandUp *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v5; // r12

  if ( a3 == 2 )
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             2,
             a4);
  v5 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 3) = 0;
  (*(void (__fastcall **)(int, CPed *, _DWORD, const CEvent *))(*(_DWORD *)v5 + 28))(v5, a2, 0, a4);
  return 0;
}


// ============================================================

// Address: 0x4ec868
// Original: _ZN38CTaskComplexSitDownThenIdleThenStandUp17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexSitDownThenIdleThenStandUp::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexSitDownThenIdleThenStandUp::CreateNextSubTask(
        CTaskComplexSitDownThenIdleThenStandUp *this,
        CPed *a2)
{
  int v3; // r2
  int v4; // r1
  CTaskSimple *v5; // r0
  int v6; // r5
  char v7; // r4
  int v8; // r0
  char *v9; // r1
  CTaskSimple *v10; // r0
  CTaskSimple *v11; // r0
  char v12; // r4

  v3 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) - 203;
  v4 = 222;
  switch ( v3 )
  {
    case 0:
      if ( *((_BYTE *)this + 16) )
      {
        if ( !*((_BYTE *)this + 18) )
        {
          v10 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, 0xDEu);
          CTaskSimple::CTaskSimple(v10);
          *(_DWORD *)(v8 + 8) = 100;
          *(_WORD *)(v8 + 20) = 0;
          *(_DWORD *)(v8 + 28) = 1090519040;
          *(_WORD *)(v8 + 24) = 0;
          v9 = (char *)&`vtable for'CTaskSimpleStandStill;
          *(_DWORD *)(v8 + 16) = 0;
          goto LABEL_13;
        }
        if ( *((_BYTE *)this + 17) )
          goto LABEL_10;
      }
      else if ( *((_BYTE *)this + 17) )
      {
LABEL_10:
        v5 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, 0xDEu);
        v6 = *((_DWORD *)this + 3);
        v7 = *((_BYTE *)this + 16);
        CTaskSimple::CTaskSimple(v5);
        *(_BYTE *)(v8 + 8) = v7;
        *(_DWORD *)(v8 + 12) = v6;
        *(_DWORD *)(v8 + 26) = 0;
        *(_DWORD *)(v8 + 22) = 0;
        *(_DWORD *)(v8 + 20) = 0;
        v9 = (char *)&`vtable for'CTaskSimpleSitIdle;
        *(_DWORD *)(v8 + 16) = 0;
        goto LABEL_14;
      }
      v11 = (CTaskSimple *)CTask::operator new((CTask *)&word_10, 0xDEu);
      v12 = *((_BYTE *)this + 16);
      CTaskSimple::CTaskSimple(v11);
      v9 = (char *)&`vtable for'CTaskSimpleSitDown;
      *(_BYTE *)(v8 + 8) = v12;
      *(_BYTE *)(v8 + 9) = 0;
LABEL_13:
      *(_DWORD *)(v8 + 12) = 0;
LABEL_14:
      *(_DWORD *)v8 = v9 + 8;
      return;
    case 17:
      v4 = 221;
      goto LABEL_8;
    case 18:
      goto LABEL_8;
    case 19:
      v4 = 1302;
LABEL_8:
      CTaskComplexSitDownThenIdleThenStandUp::CreateSubTask(this, v4);
      return;
    default:
      return;
  }
}


// ============================================================

// Address: 0x4ec964
// Original: _ZN38CTaskComplexSitDownThenIdleThenStandUp13CreateSubTaskEi
// Demangled: CTaskComplexSitDownThenIdleThenStandUp::CreateSubTask(int)
int __fastcall CTaskComplexSitDownThenIdleThenStandUp::CreateSubTask(
        CTaskComplexSitDownThenIdleThenStandUp *this,
        int a2)
{
  int v3; // r4
  char v4; // r5
  char *v5; // r0
  CTaskSimple *v6; // r0
  char v7; // r5
  int v8; // r0
  CTaskSimple *v9; // r0
  int v10; // r6
  char v11; // r5

  v3 = 0;
  switch ( a2 )
  {
    case 222:
      v6 = (CTaskSimple *)CTask::operator new((CTask *)&word_10, 0xDEu);
      v7 = *((_BYTE *)this + 16);
      CTaskSimple::CTaskSimple(v6);
      *(_BYTE *)(v8 + 8) = v7;
      *(_BYTE *)(v8 + 9) = 0;
      *(_DWORD *)(v8 + 12) = 0;
      v3 = v8;
      *(_DWORD *)v8 = &off_669EF4;
      break;
    case 221:
      v9 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, 0xDDu);
      v10 = *((_DWORD *)this + 3);
      v3 = (int)v9;
      v11 = *((_BYTE *)this + 16);
      CTaskSimple::CTaskSimple(v9);
      *(_BYTE *)(v3 + 8) = v11;
      *(_DWORD *)(v3 + 12) = v10;
      *(_DWORD *)(v3 + 26) = 0;
      *(_DWORD *)(v3 + 22) = 0;
      v5 = (char *)&`vtable for'CTaskSimpleSitIdle;
      *(_DWORD *)(v3 + 16) = 0;
      *(_DWORD *)(v3 + 20) = 0;
      goto LABEL_7;
    case 220:
      v3 = CTask::operator new((CTask *)&word_10, 0xDCu);
      v4 = *((_BYTE *)this + 16);
      CTaskSimple::CTaskSimple((CTaskSimple *)v3);
      *(_BYTE *)(v3 + 8) = v4;
      *(_BYTE *)(v3 + 9) = 0;
      *(_DWORD *)(v3 + 12) = 0;
      v5 = (char *)&`vtable for'CTaskSimpleSitDown;
LABEL_7:
      *(_DWORD *)v3 = v5 + 8;
      break;
  }
  return v3;
}


// ============================================================

// Address: 0x4ec9fc
// Original: _ZN38CTaskComplexSitDownThenIdleThenStandUp18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexSitDownThenIdleThenStandUp::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexSitDownThenIdleThenStandUp::CreateFirstSubTask(
        CTaskComplexSitDownThenIdleThenStandUp *this,
        CPed *a2)
{
  CTaskSimple *v2; // r0
  int result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
  CTaskSimple::CTaskSimple(v2);
  *(_DWORD *)(result + 8) = 100;
  *(_WORD *)(result + 20) = 0;
  *(_DWORD *)(result + 28) = 1090519040;
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)result = &off_669C0C;
  return result;
}


// ============================================================

// Address: 0x4eca30
// Original: _ZN38CTaskComplexSitDownThenIdleThenStandUp14ControlSubTaskEP4CPed
// Demangled: CTaskComplexSitDownThenIdleThenStandUp::ControlSubTask(CPed *)
int __fastcall CTaskComplexSitDownThenIdleThenStandUp::ControlSubTask(
        CTaskComplexSitDownThenIdleThenStandUp *this,
        CPed *a2)
{
  int AnimationBlockIndex; // r0
  int v5; // r2

  if ( *((_BYTE *)this + 18) || !*((_BYTE *)this + 16) )
    return *((_DWORD *)this + 2);
  AnimationBlockIndex = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"attractors", (const char *)a2);
  if ( CAnimManager::ms_aAnimBlocks[32 * AnimationBlockIndex + 16] == 1 )
  {
    CAnimManager::AddAnimBlockRef((CAnimManager *)AnimationBlockIndex, 1);
    *((_BYTE *)this + 18) = 1;
  }
  else
  {
    CStreaming::RequestModel((CStreaming *)(AnimationBlockIndex + 25575), 8, v5);
  }
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f2f94
// Original: _ZNK38CTaskComplexSitDownThenIdleThenStandUp5CloneEv
// Demangled: CTaskComplexSitDownThenIdleThenStandUp::Clone(void)
int __fastcall CTaskComplexSitDownThenIdleThenStandUp::Clone(
        CTaskComplexSitDownThenIdleThenStandUp *this,
        unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int16 v4; // r5
  int v5; // r4
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, a2);
  v4 = *((_WORD *)this + 8);
  v5 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = v5;
  *(_WORD *)(result + 16) = v4;
  *(_BYTE *)(result + 18) = 0;
  *(_DWORD *)result = &off_669F28;
  return result;
}


// ============================================================

// Address: 0x4f2fc0
// Original: _ZNK38CTaskComplexSitDownThenIdleThenStandUp11GetTaskTypeEv
// Demangled: CTaskComplexSitDownThenIdleThenStandUp::GetTaskType(void)
int __fastcall CTaskComplexSitDownThenIdleThenStandUp::GetTaskType(CTaskComplexSitDownThenIdleThenStandUp *this)
{
  return 223;
}


// ============================================================

// Address: 0x4f2fc4
// Original: _ZN38CTaskComplexSitDownThenIdleThenStandUp9SerializeEv
// Demangled: CTaskComplexSitDownThenIdleThenStandUp::Serialize(void)
int __fastcall CTaskComplexSitDownThenIdleThenStandUp::Serialize(CTaskComplexSitDownThenIdleThenStandUp *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r2
  int v8; // r2
  int v10; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexSitDownThenIdleThenStandUp *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexSitDownThenIdleThenStandUp *))(*(_DWORD *)this + 20))(this) == 223 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer(
      (CTaskComplexSitDownThenIdleThenStandUp *)((char *)this + 16),
      (char *)&stderr + 1,
      v7);
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskComplexSitDownThenIdleThenStandUp *)((char *)this + 17), (char *)&stderr + 1, v8);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexSitDownThenIdleThenStandUp *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(223, v10);
  }
}


// ============================================================

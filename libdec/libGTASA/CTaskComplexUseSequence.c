
// Address: 0x18c360
// Original: j__ZN23CTaskComplexUseSequenceC2Ei
// Demangled: CTaskComplexUseSequence::CTaskComplexUseSequence(int)
// attributes: thunk
void __fastcall CTaskComplexUseSequence::CTaskComplexUseSequence(CTaskComplexUseSequence *this, int a2)
{
  _ZN23CTaskComplexUseSequenceC2Ei(this, a2);
}


// ============================================================

// Address: 0x19d590
// Original: j__ZN23CTaskComplexUseSequence10CreateTaskEv
// Demangled: CTaskComplexUseSequence::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexUseSequence::CreateTask(CTaskComplexUseSequence *this)
{
  return _ZN23CTaskComplexUseSequence10CreateTaskEv(this);
}


// ============================================================

// Address: 0x491b4c
// Original: _ZN23CTaskComplexUseSequence10CreateTaskEv
// Demangled: CTaskComplexUseSequence::CreateTask(void)
int __fastcall CTaskComplexUseSequence::CreateTask(CTaskComplexUseSequence *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  unsigned int v8; // r1
  CTaskComplexUseSequence *v9; // r0
  int result; // r0
  int v11; // r2
  int v12; // [sp+4h] [bp-14h] BYREF
  int v13; // [sp+8h] [bp-10h] BYREF
  int v14[3]; // [sp+Ch] [bp-Ch] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, byte_4, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, v6);
  v9 = (CTaskComplexUseSequence *)CTask::operator new((CTask *)&dword_1C, v8);
  CTaskComplexUseSequence::CTaskComplexUseSequence(v9, v14[0]);
  v11 = v12;
  *(_DWORD *)(result + 16) = v13;
  *(_DWORD *)(result + 20) = v11;
  return result;
}


// ============================================================

// Address: 0x4f1520
// Original: _ZN23CTaskComplexUseSequenceC2Ei
// Demangled: CTaskComplexUseSequence::CTaskComplexUseSequence(int)
void __fastcall CTaskComplexUseSequence::CTaskComplexUseSequence(CTaskComplexUseSequence *this, int a2)
{
  _DWORD *v3; // r0

  CTaskComplex::CTaskComplex(this);
  v3[3] = a2;
  v3[4] = 0;
  v3[5] = -1;
  v3[6] = 0;
  *v3 = &off_66A6A0;
  ++*((_DWORD *)&CTaskSequences::ms_taskSequence + 16 * a2 + 15);
}


// ============================================================

// Address: 0x4f1560
// Original: _ZN23CTaskComplexUseSequenceD2Ev
// Demangled: CTaskComplexUseSequence::~CTaskComplexUseSequence()
void __fastcall CTaskComplexUseSequence::~CTaskComplexUseSequence(CTaskComplexUseSequence *this)
{
  int v2; // r1
  CTaskComplexSequence *v3; // r0
  int v4; // r2
  char *v5; // r1
  _BYTE *v6; // r1
  int v7; // t1

  v2 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66A6A0;
  if ( v2 != -1 )
  {
    v3 = (CTaskComplexSequence *)((char *)&CTaskSequences::ms_taskSequence + 64 * v2);
    v4 = *((_DWORD *)v3 + 15) - 1;
    *((_DWORD *)v3 + 15) = v4;
    if ( !v4 )
    {
      v5 = (char *)&CTaskSequences::ms_taskSequence + 64 * v2;
      v7 = (unsigned __int8)v5[56];
      v6 = v5 + 56;
      if ( v7 )
      {
        *v6 = 0;
        CTaskComplexSequence::Flush(v3);
      }
    }
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f15b8
// Original: _ZN23CTaskComplexUseSequenceD0Ev
// Demangled: CTaskComplexUseSequence::~CTaskComplexUseSequence()
void __fastcall CTaskComplexUseSequence::~CTaskComplexUseSequence(CTaskComplexUseSequence *this)
{
  int v2; // r1
  CTaskComplexSequence *v3; // r0
  int v4; // r2
  char *v5; // r1
  _BYTE *v6; // r1
  int v7; // t1
  void *v8; // r0

  v2 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66A6A0;
  if ( v2 != -1 )
  {
    v3 = (CTaskComplexSequence *)((char *)&CTaskSequences::ms_taskSequence + 64 * v2);
    v4 = *((_DWORD *)v3 + 15) - 1;
    *((_DWORD *)v3 + 15) = v4;
    if ( !v4 )
    {
      v5 = (char *)&CTaskSequences::ms_taskSequence + 64 * v2;
      v7 = (unsigned __int8)v5[56];
      v6 = v5 + 56;
      if ( v7 )
      {
        *v6 = 0;
        CTaskComplexSequence::Flush(v3);
      }
    }
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v8);
}


// ============================================================

// Address: 0x4f1614
// Original: _ZN23CTaskComplexUseSequence13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexUseSequence::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexUseSequence::MakeAbortable(
        CTaskComplexUseSequence *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v6; // r0
  int v7; // r5
  bool v8; // zf
  int v9; // r1
  CTaskComplexSequence *v10; // r0
  int v11; // r2
  char *v12; // r1
  _BYTE *v13; // r1
  int v14; // t1

  v6 = (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         a3,
         a4);
  v7 = v6;
  if ( a4 && v6 == 1 && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 9 )
  {
    v8 = *((_BYTE *)a4 + 60) == 0;
    if ( *((_BYTE *)a4 + 60) )
      v8 = *((_BYTE *)a4 + 9) == 0;
    if ( !v8 )
    {
      v9 = *((_DWORD *)this + 3);
      v10 = (CTaskComplexSequence *)((char *)&CTaskSequences::ms_taskSequence + 64 * v9);
      v11 = *((_DWORD *)v10 + 15) - 1;
      *((_DWORD *)v10 + 15) = v11;
      if ( !v11 )
      {
        v12 = (char *)&CTaskSequences::ms_taskSequence + 64 * v9;
        v14 = (unsigned __int8)v12[56];
        v13 = v12 + 56;
        if ( v14 )
        {
          *v13 = 0;
          CTaskComplexSequence::Flush(v10);
        }
      }
      *((_DWORD *)this + 3) = -1;
    }
  }
  return v7;
}


// ============================================================

// Address: 0x4f1690
// Original: _ZN23CTaskComplexUseSequence17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexUseSequence::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexUseSequence::CreateNextSubTask(CTaskComplexUseSequence *this, CPed *a2)
{
  int v2; // r12
  int v3; // r2
  int v4; // lr
  char *v5; // r1
  int *v6; // r1
  int v7; // r3
  int v8; // t1
  int v9; // r2
  int v10; // r0

  v2 = *((_DWORD *)this + 3);
  if ( v2 != -1 )
  {
    v3 = *((_DWORD *)this + 4);
    v4 = v3 + 1;
    *((_DWORD *)this + 4) = v3 + 1;
    v5 = (char *)&CTaskSequences::ms_taskSequence + 64 * v2;
    v8 = *((_DWORD *)v5 + 12);
    v6 = (int *)(v5 + 48);
    v7 = v8;
    if ( v8 )
    {
      if ( v3 == 7 || !*((_DWORD *)&CTaskSequences::ms_taskSequence + 16 * v2 + v4 + 4) )
      {
        v9 = *((_DWORD *)this + 6);
        v4 = 0;
        *((_DWORD *)this + 4) = 0;
        *((_DWORD *)this + 6) = v9 + 1;
        v7 = *v6;
        if ( *v6 == 1 )
          goto LABEL_9;
      }
      else if ( v7 == 1 )
      {
        goto LABEL_9;
      }
      if ( *((_DWORD *)this + 6) != v7 )
      {
LABEL_9:
        v10 = *((_DWORD *)&CTaskSequences::ms_taskSequence + 16 * v2 + v4 + 4);
        return (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      }
    }
    else if ( v3 != 7 )
    {
      v10 = *((_DWORD *)&CTaskSequences::ms_taskSequence + 16 * v2 + v4 + 4);
      if ( v10 )
        return (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
    }
  }
  return 0;
}


// ============================================================

// Address: 0x4f1740
// Original: _ZN23CTaskComplexUseSequence18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexUseSequence::CreateFirstSubTask(CPed *)
_DWORD *__fastcall CTaskComplexUseSequence::CreateFirstSubTask(CTaskComplexUseSequence *this, CPed *a2)
{
  int v3; // r0
  int v4; // r0
  _DWORD *v5; // r4
  bool v6; // zf

  v3 = *((_DWORD *)this + 3);
  if ( v3 == -1 )
    return 0;
  v4 = *((_DWORD *)&CTaskSequences::ms_taskSequence + 16 * v3 + *((_DWORD *)this + 4) + 4);
  if ( !v4 )
    return 0;
  v5 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
  v6 = v5 == 0;
  if ( v5 )
    v6 = *((_DWORD *)this + 5) == -1;
  if ( !v6 && (*(int (__fastcall **)(_DWORD *))(*v5 + 20))(v5) == 275 )
  {
    v5[4] = *((_DWORD *)this + 5);
    v5[5] = -1;
  }
  return v5;
}


// ============================================================

// Address: 0x4f179c
// Original: _ZN23CTaskComplexUseSequence14ControlSubTaskEP4CPed
// Demangled: CTaskComplexUseSequence::ControlSubTask(CPed *)
int __fastcall CTaskComplexUseSequence::ControlSubTask(CTaskComplexUseSequence *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f41ac
// Original: _ZNK23CTaskComplexUseSequence5CloneEv
// Demangled: CTaskComplexUseSequence::Clone(void)
_DWORD *__fastcall CTaskComplexUseSequence::Clone(CTaskComplexUseSequence *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r5
  _DWORD *result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_1C, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  result[3] = v4;
  result[4] = 0;
  result[5] = -1;
  result[6] = 0;
  *result = &off_66A6A0;
  ++*((_DWORD *)&CTaskSequences::ms_taskSequence + 16 * v4 + 15);
  result[4] = *((_DWORD *)this + 4);
  result[5] = *((_DWORD *)this + 5);
  return result;
}


// ============================================================

// Address: 0x4f41f8
// Original: _ZNK23CTaskComplexUseSequence11GetTaskTypeEv
// Demangled: CTaskComplexUseSequence::GetTaskType(void)
int __fastcall CTaskComplexUseSequence::GetTaskType(CTaskComplexUseSequence *this)
{
  return 275;
}


// ============================================================

// Address: 0x4f4200
// Original: _ZN23CTaskComplexUseSequence9SerializeEv
// Demangled: CTaskComplexUseSequence::Serialize(void)
void __fastcall CTaskComplexUseSequence::Serialize(CTaskComplexUseSequence *this)
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

  v2 = (*(int (__fastcall **)(CTaskComplexUseSequence *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexUseSequence *))(*(_DWORD *)this + 20))(this) == 275 )
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
    v11 = (*(int (__fastcall **)(CTaskComplexUseSequence *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(275, v11);
  }
}


// ============================================================

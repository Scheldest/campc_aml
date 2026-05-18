
// Address: 0x18ad78
// Original: j__ZN20CTaskComplexSequence7AddTaskEP5CTask
// Demangled: CTaskComplexSequence::AddTask(CTask *)
// attributes: thunk
int __fastcall CTaskComplexSequence::AddTask(CTaskComplexSequence *this, CTask *a2)
{
  return _ZN20CTaskComplexSequence7AddTaskEP5CTask(this, a2);
}


// ============================================================

// Address: 0x197950
// Original: j__ZN20CTaskComplexSequenceD2Ev
// Demangled: CTaskComplexSequence::~CTaskComplexSequence()
// attributes: thunk
void __fastcall CTaskComplexSequence::~CTaskComplexSequence(CTaskComplexSequence *this)
{
  _ZN20CTaskComplexSequenceD2Ev(this);
}


// ============================================================

// Address: 0x19ed14
// Original: j__ZN20CTaskComplexSequenceC2Ev
// Demangled: CTaskComplexSequence::CTaskComplexSequence(void)
// attributes: thunk
void __fastcall CTaskComplexSequence::CTaskComplexSequence(CTaskComplexSequence *this)
{
  _ZN20CTaskComplexSequenceC2Ev(this);
}


// ============================================================

// Address: 0x19f920
// Original: j__ZN20CTaskComplexSequence8ContainsEi
// Demangled: CTaskComplexSequence::Contains(int)
// attributes: thunk
int __fastcall CTaskComplexSequence::Contains(CTaskComplexSequence *this, int a2)
{
  return _ZN20CTaskComplexSequence8ContainsEi(this, a2);
}


// ============================================================

// Address: 0x1a14b8
// Original: j__ZN20CTaskComplexSequence5FlushEv
// Demangled: CTaskComplexSequence::Flush(void)
// attributes: thunk
int __fastcall CTaskComplexSequence::Flush(CTaskComplexSequence *this)
{
  return _ZN20CTaskComplexSequence5FlushEv(this);
}


// ============================================================

// Address: 0x2e7290
// Original: _ZN20CTaskComplexSequence8ContainsEi
// Demangled: CTaskComplexSequence::Contains(int)
bool __fastcall CTaskComplexSequence::Contains(CTaskComplexSequence *this, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  _BOOL4 result; // r0

  v4 = *((_DWORD *)this + 4);
  result = 1;
  if ( !v4 || (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) != a2 )
  {
    v5 = *((_DWORD *)this + 5);
    if ( !v5 || (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5) != a2 )
    {
      v6 = *((_DWORD *)this + 6);
      if ( !v6 || (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6) != a2 )
      {
        v7 = *((_DWORD *)this + 7);
        if ( !v7 || (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) != a2 )
        {
          v8 = *((_DWORD *)this + 8);
          if ( !v8 || (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8) != a2 )
          {
            v9 = *((_DWORD *)this + 9);
            if ( !v9 || (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 20))(v9) != a2 )
            {
              v10 = *((_DWORD *)this + 10);
              if ( !v10 || (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 20))(v10) != a2 )
              {
                v11 = *((_DWORD *)this + 11);
                if ( !v11 || (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 20))(v11) != a2 )
                  return 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x4ee6bc
// Original: _ZN20CTaskComplexSequenceC2Ev
// Demangled: CTaskComplexSequence::CTaskComplexSequence(void)
void __fastcall CTaskComplexSequence::CTaskComplexSequence(CTaskComplexSequence *this)
{
  int v1; // r0

  CTaskComplex::CTaskComplex(this);
  *(_QWORD *)(v1 + 41) = 0LL;
  *(_QWORD *)(v1 + 49) = 0LL;
  *(_QWORD *)(v1 + 28) = 0LL;
  *(_QWORD *)(v1 + 36) = 0LL;
  *(_QWORD *)(v1 + 12) = 0LL;
  *(_QWORD *)(v1 + 20) = 0LL;
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)v1 = &off_66A294;
}


// ============================================================

// Address: 0x4ee6f4
// Original: _ZN20CTaskComplexSequenceD2Ev
// Demangled: CTaskComplexSequence::~CTaskComplexSequence()
void __fastcall CTaskComplexSequence::~CTaskComplexSequence(CTaskComplexSequence *this)
{
  *(_DWORD *)this = &off_66A294;
  CTaskComplexSequence::Flush(this);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4ee718
// Original: _ZN20CTaskComplexSequence5FlushEv
// Demangled: CTaskComplexSequence::Flush(void)
int __fastcall CTaskComplexSequence::Flush(CTaskComplexSequence *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int result; // r0

  v2 = *((_DWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 5);
  *((_DWORD *)this + 4) = 0;
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 5) = 0;
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v5 = *((_DWORD *)this + 7);
  *((_DWORD *)this + 6) = 0;
  if ( v5 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  v6 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 7) = 0;
  if ( v6 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  v7 = *((_DWORD *)this + 9);
  *((_DWORD *)this + 8) = 0;
  if ( v7 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
  v8 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 9) = 0;
  if ( v8 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
  result = *((_DWORD *)this + 11);
  *((_DWORD *)this + 10) = 0;
  if ( result )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  return result;
}


// ============================================================

// Address: 0x4ee7a0
// Original: _ZN20CTaskComplexSequenceD0Ev
// Demangled: CTaskComplexSequence::~CTaskComplexSequence()
void __fastcall CTaskComplexSequence::~CTaskComplexSequence(CTaskComplexSequence *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_66A294;
  CTaskComplexSequence::Flush(this);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v2);
}


// ============================================================

// Address: 0x4ee7c8
// Original: _ZNK20CTaskComplexSequence11GetTaskTypeEv
// Demangled: CTaskComplexSequence::GetTaskType(void)
int __fastcall CTaskComplexSequence::GetTaskType(CTaskComplexSequence *this)
{
  return 244;
}


// ============================================================

// Address: 0x4ee7cc
// Original: _ZN20CTaskComplexSequence17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexSequence::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexSequence::CreateNextSubTask(CTaskComplexSequence *this, CPed *a2)
{
  int v2; // r2
  int v3; // r1
  int v4; // r3
  int v6; // r0

  v2 = *((_DWORD *)this + 12);
  v3 = *((_DWORD *)this + 3) + 1;
  *((_DWORD *)this + 3) = v3;
  if ( v2 )
  {
    if ( v3 == 8 || !*((_DWORD *)this + v3 + 4) )
    {
      v4 = *((_DWORD *)this + 13);
      v3 = 0;
      *((_DWORD *)this + 3) = 0;
      *((_DWORD *)this + 13) = v4 + 1;
      if ( v2 == 1 )
        return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + v3 + 4) + 8))(*((_DWORD *)this + v3 + 4));
    }
    else if ( v2 == 1 )
    {
      return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + v3 + 4) + 8))(*((_DWORD *)this + v3 + 4));
    }
    if ( *((_DWORD *)this + 13) != v2 )
      return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + v3 + 4) + 8))(*((_DWORD *)this + v3 + 4));
  }
  else if ( v3 != 8 )
  {
    v6 = *((_DWORD *)this + v3 + 4);
    if ( v6 )
      return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
  }
  return 0;
}


// ============================================================

// Address: 0x4ee81a
// Original: _ZN20CTaskComplexSequence17CreateNextSubTaskEP4CPedRiS2_
// Demangled: CTaskComplexSequence::CreateNextSubTask(CPed *,int &,int &)
int __fastcall CTaskComplexSequence::CreateNextSubTask(CTaskComplexSequence *this, CPed *a2, int *a3, int *a4)
{
  int v4; // r1
  int v5; // r12
  int v6; // r0
  int v8; // r0

  v4 = *a3 + 1;
  *a3 = v4;
  v5 = *((_DWORD *)this + 12);
  if ( v5 )
  {
    if ( v4 == 8 || !*((_DWORD *)this + v4 + 4) )
    {
      *a3 = 0;
      ++*a4;
      v5 = *((_DWORD *)this + 12);
      if ( v5 == 1 )
      {
LABEL_8:
        v6 = *((_DWORD *)this + *a3 + 4);
        return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      }
    }
    else if ( v5 == 1 )
    {
      goto LABEL_8;
    }
    if ( *a4 != v5 )
      goto LABEL_8;
  }
  else if ( v4 != 8 )
  {
    v8 = *((_DWORD *)this + v4 + 4);
    if ( v8 )
      return (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
  }
  return 0;
}


// ============================================================

// Address: 0x4ee878
// Original: _ZN20CTaskComplexSequence18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexSequence::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexSequence::CreateFirstSubTask(CTaskComplexSequence *this, CPed *a2)
{
  int v2; // r0

  v2 = *((_DWORD *)this + *((_DWORD *)this + 3) + 4);
  if ( v2 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
  else
    return 0;
}


// ============================================================

// Address: 0x4ee88e
// Original: _ZN20CTaskComplexSequence18CreateFirstSubTaskEP4CPedRiS2_
// Demangled: CTaskComplexSequence::CreateFirstSubTask(CPed *,int &,int &)
int __fastcall CTaskComplexSequence::CreateFirstSubTask(CTaskComplexSequence *this, CPed *a2, int *a3, int *a4)
{
  int v4; // r0

  v4 = *((_DWORD *)this + *a3 + 4);
  if ( v4 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
  else
    return 0;
}


// ============================================================

// Address: 0x4ee8a4
// Original: _ZN20CTaskComplexSequence14ControlSubTaskEP4CPed
// Demangled: CTaskComplexSequence::ControlSubTask(CPed *)
int __fastcall CTaskComplexSequence::ControlSubTask(CTaskComplexSequence *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4ee8a8
// Original: _ZN20CTaskComplexSequence7AddTaskEP5CTask
// Demangled: CTaskComplexSequence::AddTask(CTask *)
int __fastcall CTaskComplexSequence::AddTask(CTaskComplexSequence *this, CTask *a2)
{
  char *v2; // r2
  int v3; // r3
  bool v4; // zf
  int result; // r0
  int v6; // r3
  bool v7; // zf
  int v8; // r3
  bool v9; // zf

  v2 = (char *)this + 16;
  v3 = *((_DWORD *)this + 4);
  v4 = v3 == 0;
  if ( v3 )
  {
    v2 = (char *)this + 20;
    v4 = *((_DWORD *)this + 5) == 0;
  }
  if ( v4 )
    goto LABEL_5;
  v2 = (char *)this + 24;
  if ( !*((_DWORD *)this + 6) )
    goto LABEL_5;
  v2 = (char *)this + 28;
  v6 = *((_DWORD *)this + 7);
  v7 = v6 == 0;
  if ( v6 )
  {
    v2 = (char *)this + 32;
    v7 = *((_DWORD *)this + 8) == 0;
  }
  if ( v7 )
    goto LABEL_5;
  v2 = (char *)this + 36;
  v8 = *((_DWORD *)this + 9);
  v9 = v8 == 0;
  if ( v8 )
  {
    v2 = (char *)this + 40;
    v9 = *((_DWORD *)this + 10) == 0;
  }
  if ( v9 || (v2 = (char *)this + 44, !*((_DWORD *)this + 11)) )
  {
LABEL_5:
    result = 1;
    *(_DWORD *)v2 = a2;
  }
  else
  {
    if ( a2 )
      (*(void (__fastcall **)(CTask *))(*(_DWORD *)a2 + 4))(a2);
    return 0;
  }
  return result;
}


// ============================================================

// Address: 0x4ee916
// Original: _ZN20CTaskComplexSequence7AddTaskEiP5CTask
// Demangled: CTaskComplexSequence::AddTask(int,CTask *)
int __fastcall CTaskComplexSequence::AddTask(int this, int a2, CTask *a3)
{
  int v4; // r5
  _DWORD *v5; // r5
  int v6; // t1

  if ( a2 > 7 )
  {
    if ( a3 )
      return (*(int (__fastcall **)(CTask *))(*(_DWORD *)a3 + 4))(a3);
  }
  else
  {
    v4 = this + 4 * a2;
    v6 = *(_DWORD *)(v4 + 16);
    v5 = (_DWORD *)(v4 + 16);
    this = v6;
    if ( v6 )
      this = (*(int (__fastcall **)(int))(*(_DWORD *)this + 4))(this);
    *v5 = a3;
  }
  return this;
}


// ============================================================

// Address: 0x4f3890
// Original: _ZNK20CTaskComplexSequence5CloneEv
// Demangled: CTaskComplexSequence::Clone(void)
int __fastcall CTaskComplexSequence::Clone(CTaskComplexSequence *this, unsigned int a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0

  v3 = CTask::operator new((CTask *)&dword_40, a2);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 41) = 0LL;
  *(_QWORD *)(v3 + 49) = 0LL;
  *(_QWORD *)(v3 + 28) = 0LL;
  *(_QWORD *)(v3 + 36) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *(_QWORD *)(v3 + 20) = 0LL;
  v4 = 0;
  *(_DWORD *)(v3 + 60) = 0;
  *(_DWORD *)v3 = &off_66A294;
  v5 = *((_DWORD *)this + 4);
  if ( v5 )
    v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 8))(*((_DWORD *)this + 4));
  *(_DWORD *)(v3 + 16) = v4;
  v6 = *((_DWORD *)this + 5);
  if ( v6 )
    v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
  else
    v7 = 0;
  *(_DWORD *)(v3 + 20) = v7;
  v8 = *((_DWORD *)this + 6);
  if ( v8 )
    v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
  else
    v9 = 0;
  *(_DWORD *)(v3 + 24) = v9;
  v10 = *((_DWORD *)this + 7);
  if ( v10 )
    v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
  else
    v11 = 0;
  *(_DWORD *)(v3 + 28) = v11;
  v12 = *((_DWORD *)this + 8);
  if ( v12 )
    v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
  else
    v13 = 0;
  *(_DWORD *)(v3 + 32) = v13;
  v14 = *((_DWORD *)this + 9);
  if ( v14 )
    v15 = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
  else
    v15 = 0;
  *(_DWORD *)(v3 + 36) = v15;
  v16 = *((_DWORD *)this + 10);
  if ( v16 )
    v17 = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
  else
    v17 = 0;
  *(_DWORD *)(v3 + 40) = v17;
  v18 = *((_DWORD *)this + 11);
  if ( v18 )
    v19 = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
  else
    v19 = 0;
  *(_DWORD *)(v3 + 44) = v19;
  *(_DWORD *)(v3 + 48) = *((_DWORD *)this + 12);
  *(_DWORD *)(v3 + 12) = *((_DWORD *)this + 3);
  return v3;
}


// ============================================================

// Address: 0x4f395c
// Original: _ZN20CTaskComplexSequence13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexSequence::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexSequence::MakeAbortable(CTaskComplexSequence *this, CPed *a2, int a3, const CEvent *a4)
{
  return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           a3,
           a4);
}


// ============================================================

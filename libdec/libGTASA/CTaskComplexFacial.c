
// Address: 0x18da40
// Original: j__ZN18CTaskComplexFacialC2Ev
// Demangled: CTaskComplexFacial::CTaskComplexFacial(void)
// attributes: thunk
void __fastcall CTaskComplexFacial::CTaskComplexFacial(CTaskComplexFacial *this)
{
  _ZN18CTaskComplexFacialC2Ev(this);
}


// ============================================================

// Address: 0x190db4
// Original: j__ZN18CTaskComplexFacial7StopAllEv
// Demangled: CTaskComplexFacial::StopAll(void)
// attributes: thunk
int __fastcall CTaskComplexFacial::StopAll(CTaskComplexFacial *this)
{
  return _ZN18CTaskComplexFacial7StopAllEv(this);
}


// ============================================================

// Address: 0x1a0d14
// Original: j__ZN18CTaskComplexFacial10SetRequestEiiii
// Demangled: CTaskComplexFacial::SetRequest(int,int,int,int)
// attributes: thunk
int __fastcall CTaskComplexFacial::SetRequest(CTaskComplexFacial *this, int a2, int a3, int a4, int a5)
{
  return _ZN18CTaskComplexFacial10SetRequestEiiii(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x540e64
// Original: _ZN18CTaskComplexFacialC2Ev
// Demangled: CTaskComplexFacial::CTaskComplexFacial(void)
void __fastcall CTaskComplexFacial::CTaskComplexFacial(CTaskComplexFacial *this)
{
  unsigned __int16 v2; // r0

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 6) = -1;
  *(_DWORD *)this = &off_66D12C;
  v2 = rand();
  *(_WORD *)((char *)this + 13) = 0;
  *((_BYTE *)this + 12) = (int)(float)((float)((float)v2 * 0.000015259) * 100.0) > 70;
}


// ============================================================

// Address: 0x540ec4
// Original: _ZN18CTaskComplexFacialD2Ev
// Demangled: CTaskComplexFacial::~CTaskComplexFacial()
// attributes: thunk
void __fastcall CTaskComplexFacial::~CTaskComplexFacial(CTaskComplexFacial *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x540ec8
// Original: _ZN18CTaskComplexFacialD0Ev
// Demangled: CTaskComplexFacial::~CTaskComplexFacial()
void __fastcall CTaskComplexFacial::~CTaskComplexFacial(CTaskComplexFacial *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x540ed8
// Original: _ZN18CTaskComplexFacial13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexFacial::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexFacial::MakeAbortable(CTaskComplexFacial *this, CPed *a2, int a3, const CEvent *a4)
{
  if ( a3 == 2 )
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             2,
             a4);
  else
    return 0;
}


// ============================================================

// Address: 0x540eec
// Original: _ZN18CTaskComplexFacial17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFacial::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexFacial::CreateNextSubTask(CTaskComplexFacial *this, CPed *a2)
{
  unsigned int v4; // r1
  CTaskSimple *v5; // r0
  int result; // r0
  char *v7; // r1
  int v8; // r5
  CTaskSimple *v9; // r0
  int v10; // r4
  CTaskSimple *v11; // r0
  CTaskSimple *v12; // r0

  if ( !CPed::IsAlive(a2)
    && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         2,
         0) == 1 )
  {
    v5 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, v4);
    CTaskSimple::CTaskSimple(v5);
    *(_WORD *)(result + 16) = 0;
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 12) = 0;
    v7 = (char *)&`vtable for'CTaskSimplePause;
    goto LABEL_10;
  }
  v8 = *((_DWORD *)this + 6);
  if ( v8 == -1 )
  {
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 303
      && *((_BYTE *)this + 12) )
    {
      v11 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, 0x12Fu);
      CTaskSimple::CTaskSimple(v11);
      *(_WORD *)(result + 16) = 0;
      *(_DWORD *)(result + 24) = 5000;
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 12) = 0;
      v8 = 8;
      v7 = (char *)&`vtable for'CTaskSimpleFacial;
LABEL_11:
      *(_DWORD *)result = v7 + 8;
      goto LABEL_12;
    }
    v12 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, 0x12Fu);
    CTaskSimple::CTaskSimple(v12);
    v7 = (char *)&`vtable for'CTaskSimplePause;
    *(_WORD *)(result + 16) = 0;
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 12) = 0;
LABEL_10:
    v8 = 5000;
    goto LABEL_11;
  }
  *((_DWORD *)this + 6) = -1;
  v9 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v4);
  v10 = *((_DWORD *)this + 7);
  CTaskSimple::CTaskSimple(v9);
  *(_WORD *)(result + 16) = 0;
  *(_DWORD *)result = &off_66D0F8;
  *(_DWORD *)(result + 24) = v10;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
LABEL_12:
  *(_DWORD *)(result + 20) = v8;
  return result;
}


// ============================================================

// Address: 0x540fe0
// Original: _ZN18CTaskComplexFacial18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFacial::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexFacial::CreateFirstSubTask(CTaskComplexFacial *this, CPed *a2)
{
  unsigned int v3; // r1
  CTaskSimple *v4; // r0
  int result; // r0

  if ( CPed::IsPlayer(a2) == 1 )
    *((_BYTE *)this + 12) = 0;
  v4 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, v3);
  CTaskSimple::CTaskSimple(v4);
  *(_WORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 5000;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_665760;
  return result;
}


// ============================================================

// Address: 0x54101c
// Original: _ZN18CTaskComplexFacial14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFacial::ControlSubTask(CPed *)
void __fastcall CTaskComplexFacial::ControlSubTask(CTaskComplexFacial *this, CPed *a2)
{
  unsigned int v4; // r1
  CTaskSimple *v5; // r0
  int v6; // r0
  char *v7; // r1
  unsigned int v8; // r1
  CTaskSimple *v9; // r0
  int v10; // r0
  int Association; // r0
  CTaskSimple *v12; // r0
  unsigned int v13; // r1
  CTaskSimple *v14; // r0
  int v15; // r0
  unsigned int v16; // r1
  int v17; // r0
  int v18; // r5
  int v19; // r2
  int v20; // r1
  CTaskSimple *v21; // r0
  int v22; // r4
  int v23; // r0

  if ( !CPed::IsAlive(a2)
    && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         2,
         0) == 1 )
  {
    v5 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, v4);
    CTaskSimple::CTaskSimple(v5);
    *(_WORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 20) = 5000;
    *(_DWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 12) = 0;
    v7 = (char *)&`vtable for'CTaskSimplePause;
LABEL_10:
    *(_DWORD *)v6 = v7 + 8;
    return;
  }
  if ( *((_BYTE *)this + 14)
    && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         1,
         0) == 1 )
  {
    *(_WORD *)((char *)this + 13) = 0;
    v9 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, v8);
    CTaskSimple::CTaskSimple(v9);
LABEL_14:
    *(_WORD *)(v10 + 16) = 0;
    *(_DWORD *)v10 = &off_665760;
    *(_DWORD *)(v10 + 20) = 5000;
    *(_DWORD *)(v10 + 8) = 0;
    *(_DWORD *)(v10 + 12) = 0;
    return;
  }
  if ( RpAnimBlendClumpGetAssociation() )
  {
    Association = RpAnimBlendClumpGetAssociation();
    *((_DWORD *)this + 6) = -1;
    *((_BYTE *)this + 13) = 1;
    if ( !Association )
    {
      v12 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, 1u);
      CTaskSimple::CTaskSimple(v12);
      *(_WORD *)(v6 + 16) = 0;
      *(_DWORD *)(v6 + 24) = 0;
      *(_DWORD *)(v6 + 20) = 7;
      v7 = (char *)&`vtable for'CTaskSimpleFacial;
      *(_DWORD *)(v6 + 8) = 0;
      *(_DWORD *)(v6 + 12) = 0;
      goto LABEL_10;
    }
  }
  else
  {
    if ( *((_BYTE *)this + 13)
      && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) == 1 )
    {
      *((_BYTE *)this + 13) = 0;
      v14 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, v13);
      CTaskSimple::CTaskSimple(v14);
      goto LABEL_14;
    }
    if ( *((_DWORD *)this + 4) != -1 )
    {
      v15 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
      v16 = 303;
      if ( v15 == 303 )
      {
        v17 = *((_DWORD *)this + 2);
        v18 = *((_DWORD *)this + 4);
        v16 = *(_DWORD *)(v17 + 20);
        if ( v16 == v18 )
        {
          v19 = *((_DWORD *)this + 5);
          v20 = CTimer::m_snTimeInMilliseconds;
          *(_BYTE *)(v17 + 16) = 1;
          *(_DWORD *)(v17 + 8) = v20;
          *(_DWORD *)(v17 + 12) = v19;
          *((_DWORD *)this + 4) = -1;
          return;
        }
      }
      else
      {
        v18 = *((_DWORD *)this + 4);
      }
      *((_DWORD *)this + 4) = -1;
      v21 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v16);
      v22 = *((_DWORD *)this + 5);
      CTaskSimple::CTaskSimple(v21);
      *(_WORD *)(v23 + 16) = 0;
      *(_DWORD *)v23 = &off_66D0F8;
      *(_DWORD *)(v23 + 20) = v18;
      *(_DWORD *)(v23 + 24) = v22;
      *(_DWORD *)(v23 + 8) = 0;
      *(_DWORD *)(v23 + 12) = 0;
    }
  }
}


// ============================================================

// Address: 0x5411b0
// Original: _ZN18CTaskComplexFacial10SetRequestEiiii
// Demangled: CTaskComplexFacial::SetRequest(int,int,int,int)
_DWORD *__fastcall CTaskComplexFacial::SetRequest(CTaskComplexFacial *this, int a2, int a3, int a4, int a5)
{
  _DWORD *result; // r0

  result = (_DWORD *)((char *)this + 16);
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  result[3] = a5;
  return result;
}


// ============================================================

// Address: 0x5411bc
// Original: _ZN18CTaskComplexFacial7StopAllEv
// Demangled: CTaskComplexFacial::StopAll(void)
int __fastcall CTaskComplexFacial::StopAll(CTaskComplexFacial *this)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( result == 303 )
  {
    result = 1;
    *((_BYTE *)this + 14) = 1;
  }
  return result;
}


// ============================================================

// Address: 0x543ab4
// Original: _ZNK18CTaskComplexFacial5CloneEv
// Demangled: CTaskComplexFacial::Clone(void)
int __fastcall CTaskComplexFacial::Clone(CTaskComplexFacial *this, unsigned int a2)
{
  int v2; // r4
  unsigned __int16 v3; // r0

  v2 = CTask::operator new((CTask *)&dword_20, a2);
  CTaskComplex::CTaskComplex((CTaskComplex *)v2);
  *(_DWORD *)(v2 + 16) = -1;
  *(_DWORD *)(v2 + 24) = -1;
  *(_DWORD *)v2 = &off_66D12C;
  v3 = rand();
  *(_WORD *)(v2 + 13) = 0;
  *(_BYTE *)(v2 + 12) = (int)(float)((float)((float)v3 * 0.000015259) * 100.0) > 70;
  return v2;
}


// ============================================================

// Address: 0x543b1c
// Original: _ZNK18CTaskComplexFacial11GetTaskTypeEv
// Demangled: CTaskComplexFacial::GetTaskType(void)
int __fastcall CTaskComplexFacial::GetTaskType(CTaskComplexFacial *this)
{
  return 305;
}


// ============================================================

// Address: 0x543b24
// Original: _ZN18CTaskComplexFacial9SerializeEv
// Demangled: CTaskComplexFacial::Serialize(void)
int __fastcall CTaskComplexFacial::Serialize(CTaskComplexFacial *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexFacial *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexFacial *))(*(_DWORD *)this + 20))(this);
  if ( result != 305 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexFacial *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(305, v6);
  }
  return result;
}


// ============================================================


// Address: 0x19b664
// Original: j__ZN25CTaskComplexGoToAttractorC2EP13CPedAttractorRK7CVectorffii
// Demangled: CTaskComplexGoToAttractor::CTaskComplexGoToAttractor(CPedAttractor *,CVector const&,float,float,int,int)
// attributes: thunk
void __fastcall CTaskComplexGoToAttractor::CTaskComplexGoToAttractor(
        CTaskComplexGoToAttractor *this,
        CPedAttractor *a2,
        const CVector *a3,
        float a4,
        float a5,
        int a6,
        int a7)
{
  _ZN25CTaskComplexGoToAttractorC2EP13CPedAttractorRK7CVectorffii(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x524544
// Original: _ZN25CTaskComplexGoToAttractorC2EP13CPedAttractorRK7CVectorffii
// Demangled: CTaskComplexGoToAttractor::CTaskComplexGoToAttractor(CPedAttractor *,CVector const&,float,float,int,int)
// local variable allocation has failed, the output may be wrong!
void __fastcall CTaskComplexGoToAttractor::CTaskComplexGoToAttractor(
        CTaskComplexGoToAttractor *this,
        CPedAttractor *a2,
        const CVector *a3,
        float a4,
        float a5,
        int a6,
        int a7)
{
  int v10; // r0
  __int64 v11; // d16

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v10 + 12) = a2;
  *(_DWORD *)v10 = &off_66C3C4;
  v11 = *(_QWORD *)a3;
  *(_DWORD *)(v10 + 24) = *((_DWORD *)a3 + 2);
  *(float *)(v10 + 28) = a4;
  *(float *)(v10 + 32) = a5;
  *(_QWORD *)(v10 + 36) = *(_QWORD *)&a6;
  *(_QWORD *)(v10 + 16) = v11;
}


// ============================================================

// Address: 0x52458c
// Original: _ZN25CTaskComplexGoToAttractorD2Ev
// Demangled: CTaskComplexGoToAttractor::~CTaskComplexGoToAttractor()
// attributes: thunk
void __fastcall CTaskComplexGoToAttractor::~CTaskComplexGoToAttractor(CTaskComplexGoToAttractor *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x524590
// Original: _ZN25CTaskComplexGoToAttractorD0Ev
// Demangled: CTaskComplexGoToAttractor::~CTaskComplexGoToAttractor()
void __fastcall CTaskComplexGoToAttractor::~CTaskComplexGoToAttractor(CTaskComplexGoToAttractor *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x5245a0
// Original: _ZN25CTaskComplexGoToAttractor13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexGoToAttractor::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexGoToAttractor::MakeAbortable(
        CTaskComplexGoToAttractor *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x5245ac
// Original: _ZN25CTaskComplexGoToAttractor17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexGoToAttractor::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexGoToAttractor::CreateNextSubTask(CPedAttractor **this, CPed *a2)
{
  CPedAttractorManager *PedAttractorManager; // r0

  PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
  CPedAttractorManager::BroadcastArrival(PedAttractorManager, a2, this[3]);
  if ( (*((_BYTE *)a2 + 1166) & 0x20) != 0 && (CPed *)CPedAttractor::GetHeadOfQueue(this[3]) != a2 )
    *((_DWORD *)a2 + 291) &= ~0x200000u;
  return 0;
}


// ============================================================

// Address: 0x5245e4
// Original: _ZN25CTaskComplexGoToAttractor18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGoToAttractor::CreateFirstSubTask(CPed *)
CTaskSimpleStandStill *__fastcall CTaskComplexGoToAttractor::CreateFirstSubTask(
        CTaskComplexGoToAttractor *this,
        CPed *a2)
{
  int v4; // r9
  CVector *v5; // r1
  int v6; // r8
  CTaskSimpleStandStill *v7; // r5
  unsigned int v8; // r1
  int v9; // r6
  __int64 *v10; // r8
  float v11; // s0
  char v12; // r0
  __int64 v13; // d16
  unsigned int v14; // r1
  CTaskSimpleAnim *v15; // r0
  int v16; // r9
  CTaskSimpleAnim *v17; // r6
  char v18; // r1
  __int64 v19; // d16
  __int64 v20; // kr00_8
  int v21; // r3
  int v22; // r0
  _DWORD *v23; // r1

  v4 = *((_DWORD *)this + 10);
  v6 = (***((int (__fastcall ****)(_DWORD))this + 3))(*((_DWORD *)this + 3));
  if ( (*((_BYTE *)a2 + 1166) & 0x20) != 0 )
  {
    CPedPlacement::FindZCoorForPed((CTaskComplexGoToAttractor *)((char *)this + 16), v5);
    v20 = *((_QWORD *)this + 2);
    v21 = *((_DWORD *)a2 + 5);
    v22 = *((_DWORD *)this + 6);
    if ( v21 )
    {
      *(_DWORD *)(v21 + 48) = v20;
      *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = HIDWORD(v20);
      v23 = (_DWORD *)(*((_DWORD *)a2 + 5) + 56);
    }
    else
    {
      *(_QWORD *)((char *)a2 + 4) = v20;
      v23 = (_DWORD *)((char *)a2 + 12);
    }
    *v23 = v22;
    *((_DWORD *)a2 + 344) = *((_DWORD *)this + 7);
    *((_DWORD *)a2 + 343) = *((_DWORD *)this + 7);
    v7 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)v23);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v7, 0, 0, 0, 8.0);
  }
  else
  {
    v7 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_40, (unsigned int)v5);
    CTaskComplexSequence::CTaskComplexSequence(v7);
    v9 = CTask::operator new((CTask *)&word_28, v8);
    CTaskComplex::CTaskComplex((CTaskComplex *)v9);
    if ( v6 == 4 )
      v4 = 6;
    v10 = (__int64 *)((char *)this + 16);
    *(_DWORD *)(v9 + 12) = v4;
    *(_DWORD *)v9 = &off_66C14C;
    v11 = *(float *)(v9 + 16);
    v12 = *(_BYTE *)(v9 + 36) & 0xE4;
    *(_BYTE *)(v9 + 36) = v12;
    if ( v11 != *((float *)this + 4)
      || *(float *)(v9 + 20) != *((float *)this + 5)
      || *(float *)(v9 + 24) != *((float *)this + 6)
      || *(float *)(v9 + 32) != 2.0 )
    {
      v13 = *v10;
      *(_DWORD *)(v9 + 24) = *((_DWORD *)this + 6);
      *(_QWORD *)(v9 + 16) = v13;
      *(_DWORD *)(v9 + 28) = 1056964608;
      *(_DWORD *)(v9 + 32) = 0x40000000;
      *(_BYTE *)(v9 + 36) = v12 | 4;
    }
    CTaskComplexSequence::AddTask(v7, (CTask *)v9);
    v15 = (CTaskSimpleAnim *)CTask::operator new((CTask *)&dword_80, v14);
    v16 = *((_DWORD *)this + 7);
    v17 = v15;
    CTaskSimpleAnim::CTaskSimpleAnim(v15, 0);
    *(_DWORD *)v17 = &off_66C4F0;
    *((_WORD *)v17 + 38) = 0;
    *((_DWORD *)v17 + 17) = 0;
    *((_DWORD *)v17 + 18) = 0;
    v18 = *((_BYTE *)v17 + 120);
    v19 = *v10;
    *((_DWORD *)v17 + 27) = *((_DWORD *)this + 6);
    *((_DWORD *)v17 + 28) = v16;
    *((_DWORD *)v17 + 29) = 1056964608;
    *(_QWORD *)((char *)v17 + 100) = v19;
    *((_BYTE *)v17 + 120) = v18 & 0xFC | 1;
    CTaskComplexSequence::AddTask(v7, v17);
  }
  return v7;
}


// ============================================================

// Address: 0x524778
// Original: _ZN25CTaskComplexGoToAttractor14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGoToAttractor::ControlSubTask(CPed *)
int __fastcall CTaskComplexGoToAttractor::ControlSubTask(CTaskComplexGoToAttractor *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x528134
// Original: _ZNK25CTaskComplexGoToAttractor5CloneEv
// Demangled: CTaskComplexGoToAttractor::Clone(void)
int __fastcall CTaskComplexGoToAttractor::Clone(CTaskComplexGoToAttractor *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r5
  __int64 v5; // d8
  __int64 v6; // d9
  int result; // r0
  __int64 v8; // d16
  int v9; // r1

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_2C, a2);
  v4 = *((_DWORD *)this + 3);
  v5 = *(_QWORD *)((char *)this + 28);
  v6 = *(_QWORD *)((char *)this + 36);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = v4;
  *(_DWORD *)result = &off_66C3C4;
  v8 = *((_QWORD *)this + 2);
  v9 = *((_DWORD *)this + 6);
  *(_QWORD *)(result + 28) = v5;
  *(_QWORD *)(result + 36) = v6;
  *(_DWORD *)(result + 24) = v9;
  *(_QWORD *)(result + 16) = v8;
  return result;
}


// ============================================================

// Address: 0x52817c
// Original: _ZNK25CTaskComplexGoToAttractor11GetTaskTypeEv
// Demangled: CTaskComplexGoToAttractor::GetTaskType(void)
int __fastcall CTaskComplexGoToAttractor::GetTaskType(CTaskComplexGoToAttractor *this)
{
  return 915;
}


// ============================================================

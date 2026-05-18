
// Address: 0x190fec
// Original: j__ZN32CTaskComplexFollowLeaderAnyMeansC2EP9CPedGroupP4CPedRK7CVector
// Demangled: CTaskComplexFollowLeaderAnyMeans::CTaskComplexFollowLeaderAnyMeans(CPedGroup *,CPed *,CVector const&)
// attributes: thunk
void __fastcall CTaskComplexFollowLeaderAnyMeans::CTaskComplexFollowLeaderAnyMeans(
        CTaskComplexFollowLeaderAnyMeans *this,
        CPedGroup *a2,
        CPed *a3,
        const CVector *a4)
{
  _ZN32CTaskComplexFollowLeaderAnyMeansC2EP9CPedGroupP4CPedRK7CVector(this, a2, a3, a4);
}


// ============================================================

// Address: 0x545260
// Original: _ZN32CTaskComplexFollowLeaderAnyMeansC2EP9CPedGroupP4CPedRK7CVector
// Demangled: CTaskComplexFollowLeaderAnyMeans::CTaskComplexFollowLeaderAnyMeans(CPedGroup *,CPed *,CVector const&)
void __fastcall CTaskComplexFollowLeaderAnyMeans::CTaskComplexFollowLeaderAnyMeans(
        CTaskComplexFollowLeaderAnyMeans *this,
        CPedGroup *a2,
        CPed *a3,
        const CVector *a4)
{
  __int64 v8; // d16

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 3) = a2;
  *(_DWORD *)this = &off_66D318;
  *((_DWORD *)this + 4) = a3;
  v8 = *(_QWORD *)a4;
  *((_DWORD *)this + 7) = *((_DWORD *)a4 + 2);
  *(_QWORD *)((char *)this + 20) = v8;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x5452ac
// Original: _ZN32CTaskComplexFollowLeaderAnyMeansD2Ev
// Demangled: CTaskComplexFollowLeaderAnyMeans::~CTaskComplexFollowLeaderAnyMeans()
void __fastcall CTaskComplexFollowLeaderAnyMeans::~CTaskComplexFollowLeaderAnyMeans(
        CTaskComplexFollowLeaderAnyMeans *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66D318;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5452d8
// Original: _ZN32CTaskComplexFollowLeaderAnyMeansD0Ev
// Demangled: CTaskComplexFollowLeaderAnyMeans::~CTaskComplexFollowLeaderAnyMeans()
void __fastcall CTaskComplexFollowLeaderAnyMeans::~CTaskComplexFollowLeaderAnyMeans(
        CTaskComplexFollowLeaderAnyMeans *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66D318;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x545308
// Original: _ZN32CTaskComplexFollowLeaderAnyMeans17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFollowLeaderAnyMeans::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexFollowLeaderAnyMeans::CreateNextSubTask(CTaskComplexFollowLeaderAnyMeans *this, CPed *a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r1

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 > 912 )
  {
    if ( v4 == 913 )
    {
      v6 = 1302;
    }
    else
    {
      if ( v4 != 922 )
        return 0;
      v6 = 719;
      if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
        v6 = 203;
    }
  }
  else
  {
    v5 = v4 == 203;
    if ( v4 != 203 )
      v5 = v4 == 719;
    if ( !v5 )
      return 0;
    v6 = 922;
    if ( !(*(unsigned __int8 *)(*((_DWORD *)this + 4) + 1157) << 31) )
      v6 = 913;
  }
  return CTaskComplexFollowLeaderAnyMeans::CreateSubTask(this, v6, a2);
}


// ============================================================

// Address: 0x545370
// Original: _ZNK32CTaskComplexFollowLeaderAnyMeans13CreateSubTaskEiPK4CPed
// Demangled: CTaskComplexFollowLeaderAnyMeans::CreateSubTask(int,CPed const*)
int __fastcall CTaskComplexFollowLeaderAnyMeans::CreateSubTask(
        CTaskComplexFollowLeaderAnyMeans *this,
        int a2,
        CVehicle **a3)
{
  int v5; // r4
  CEntity *v6; // r8
  __int64 v7; // d16
  __int64 v8; // kr00_8
  __int64 v9; // d16

  v5 = 0;
  if ( a2 > 912 )
  {
    if ( a2 == 913 )
    {
      v5 = CTask::operator new((CTask *)&word_28, 0x391u);
      v8 = *(_QWORD *)((char *)this + 12);
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      *(_DWORD *)(v5 + 12) = v8;
      *(_DWORD *)v5 = &off_66D2DC;
      *(_DWORD *)(v5 + 16) = HIDWORD(v8);
      v9 = *(_QWORD *)((char *)this + 20);
      *(_DWORD *)(v5 + 28) = *((_DWORD *)this + 7);
      *(_DWORD *)(v5 + 32) = 4;
      *(_DWORD *)(v5 + 36) = -1082130432;
      *(_QWORD *)(v5 + 20) = v9;
      if ( HIDWORD(v8) )
        CEntity::RegisterReference((CEntity *)HIDWORD(v8), (CEntity **)(v5 + 16));
    }
    else if ( a2 == 922 )
    {
      v5 = CTask::operator new((CTask *)&dword_34, 0x39Au);
      v6 = (CEntity *)*((_DWORD *)this + 4);
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      *(_DWORD *)(v5 + 16) = 1000;
      *(_DWORD *)(v5 + 20) = 1090519040;
      *(_WORD *)(v5 + 32) = 0;
      *(_DWORD *)(v5 + 44) = 0;
      *(_DWORD *)(v5 + 48) = 0;
      *(_DWORD *)(v5 + 24) = 0;
      *(_DWORD *)(v5 + 28) = 0;
      *(_DWORD *)v5 = &off_66D418;
      *(_DWORD *)(v5 + 36) = &off_66D3DC;
      *(_DWORD *)(v5 + 40) = 0;
      *(_DWORD *)(v5 + 12) = v6;
      if ( v6 )
        CEntity::RegisterReference(v6, (CEntity **)(v5 + 12));
      v7 = *(_QWORD *)((char *)this + 20);
      *(_DWORD *)(v5 + 48) = *((_DWORD *)this + 7);
      *(_QWORD *)(v5 + 40) = v7;
      *(_DWORD *)(v5 + 80) = 7;
    }
  }
  else if ( a2 == 203 )
  {
    v5 = CTask::operator new((CTask *)&dword_20, 0xCBu);
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v5, 2000, 0, 0, 8.0);
  }
  else if ( a2 == 719 )
  {
    v5 = CTask::operator new((CTask *)&dword_70, 0x2CFu);
    CTaskSimpleCarDrive::CTaskSimpleCarDrive((CTaskSimpleCarDrive *)v5, a3[356], 0, 0);
    *(_DWORD *)(v5 + 96) = 2000;
    *(_WORD *)(v5 + 108) = 0;
    *(_DWORD *)(v5 + 100) = 0;
    *(_DWORD *)(v5 + 104) = 0;
    *(_DWORD *)v5 = &off_66572C;
  }
  return v5;
}


// ============================================================

// Address: 0x5454c4
// Original: _ZN32CTaskComplexFollowLeaderAnyMeans18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFollowLeaderAnyMeans::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexFollowLeaderAnyMeans::CreateFirstSubTask(CTaskComplexFollowLeaderAnyMeans *this, CPed *a2)
{
  int v3; // r4
  __int64 v4; // kr00_8
  __int64 v5; // d16

  v3 = CTask::operator new((CTask *)&word_28, (unsigned int)a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 12) = v4;
  *(_DWORD *)v3 = &off_66D2DC;
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  v5 = *(_QWORD *)((char *)this + 20);
  *(_DWORD *)(v3 + 28) = *((_DWORD *)this + 7);
  *(_DWORD *)(v3 + 32) = 4;
  *(_DWORD *)(v3 + 36) = -1082130432;
  *(_QWORD *)(v3 + 20) = v5;
  if ( HIDWORD(v4) )
    CEntity::RegisterReference((CEntity *)HIDWORD(v4), (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

// Address: 0x545524
// Original: _ZN32CTaskComplexFollowLeaderAnyMeans14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFollowLeaderAnyMeans::ControlSubTask(CPed *)
int __fastcall CTaskComplexFollowLeaderAnyMeans::ControlSubTask(CTaskComplexFollowLeaderAnyMeans *this, CPed *a2)
{
  int v3; // r4
  CEntity *v4; // r8
  __int64 v5; // d16

  if ( !*((_DWORD *)this + 4) )
    return 0;
  v3 = *((_DWORD *)this + 2);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 20))(v3) == 913
    && *(unsigned __int8 *)(*((_DWORD *)this + 4) + 1157) << 31 )
  {
    v3 = CTask::operator new((CTask *)&dword_34, 0x391u);
    v4 = (CEntity *)*((_DWORD *)this + 4);
    CTaskComplex::CTaskComplex((CTaskComplex *)v3);
    *(_DWORD *)(v3 + 16) = 1000;
    *(_DWORD *)(v3 + 20) = 1090519040;
    *(_WORD *)(v3 + 32) = 0;
    *(_DWORD *)(v3 + 44) = 0;
    *(_DWORD *)(v3 + 48) = 0;
    *(_DWORD *)(v3 + 24) = 0;
    *(_DWORD *)(v3 + 28) = 0;
    *(_DWORD *)v3 = &off_66D418;
    *(_DWORD *)(v3 + 36) = &off_66D3DC;
    *(_DWORD *)(v3 + 40) = 0;
    *(_DWORD *)(v3 + 12) = v4;
    if ( v4 )
      CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
    v5 = *(_QWORD *)((char *)this + 20);
    *(_DWORD *)(v3 + 48) = *((_DWORD *)this + 7);
    *(_QWORD *)(v3 + 40) = v5;
    *(_DWORD *)(v3 + 80) = 7;
  }
  return v3;
}


// ============================================================

// Address: 0x546224
// Original: _ZNK32CTaskComplexFollowLeaderAnyMeans5CloneEv
// Demangled: CTaskComplexFollowLeaderAnyMeans::Clone(void)
int __fastcall CTaskComplexFollowLeaderAnyMeans::Clone(CTaskComplexFollowLeaderAnyMeans *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8
  __int64 v5; // d16

  v3 = CTask::operator new((CTask *)&dword_24, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 12) = v4;
  *(_DWORD *)v3 = &off_66D318;
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  v5 = *(_QWORD *)((char *)this + 20);
  *(_DWORD *)(v3 + 28) = *((_DWORD *)this + 7);
  *(_QWORD *)(v3 + 20) = v5;
  if ( HIDWORD(v4) )
    CEntity::RegisterReference((CEntity *)HIDWORD(v4), (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

// Address: 0x546278
// Original: _ZNK32CTaskComplexFollowLeaderAnyMeans11GetTaskTypeEv
// Demangled: CTaskComplexFollowLeaderAnyMeans::GetTaskType(void)
int __fastcall CTaskComplexFollowLeaderAnyMeans::GetTaskType(CTaskComplexFollowLeaderAnyMeans *this)
{
  return 923;
}


// ============================================================

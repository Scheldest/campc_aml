
// Address: 0x18f898
// Original: j__ZN51CTaskComplexGoToPointAndStandStillAndAchieveHeading10CreateTaskEv
// Demangled: CTaskComplexGoToPointAndStandStillAndAchieveHeading::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexGoToPointAndStandStillAndAchieveHeading::CreateTask(
        CTaskComplexGoToPointAndStandStillAndAchieveHeading *this)
{
  return _ZN51CTaskComplexGoToPointAndStandStillAndAchieveHeading10CreateTaskEv(this);
}


// ============================================================

// Address: 0x195e04
// Original: j__ZN51CTaskComplexGoToPointAndStandStillAndAchieveHeadingC2EiRK7CVectorffff
// Demangled: CTaskComplexGoToPointAndStandStillAndAchieveHeading::CTaskComplexGoToPointAndStandStillAndAchieveHeading(int,CVector const&,float,float,float,float)
// attributes: thunk
void __fastcall CTaskComplexGoToPointAndStandStillAndAchieveHeading::CTaskComplexGoToPointAndStandStillAndAchieveHeading(
        CTaskComplexGoToPointAndStandStillAndAchieveHeading *this,
        int a2,
        const CVector *a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  _ZN51CTaskComplexGoToPointAndStandStillAndAchieveHeadingC2EiRK7CVectorffff(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x494718
// Original: _ZN51CTaskComplexGoToPointAndStandStillAndAchieveHeading10CreateTaskEv
// Demangled: CTaskComplexGoToPointAndStandStillAndAchieveHeading::CreateTask(void)
void __fastcall CTaskComplexGoToPointAndStandStillAndAchieveHeading::CreateTask(
        CTaskComplexGoToPointAndStandStillAndAchieveHeading *this,
        int a2,
        int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  unsigned int v8; // r1
  CTaskComplexGoToPointAndStandStillAndAchieveHeading *v9; // r0
  float v10; // [sp+Ch] [bp-1Ch] BYREF
  _BYTE v11[12]; // [sp+10h] [bp-18h] BYREF
  int v12[3]; // [sp+1Ch] [bp-Ch] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, &byte_9[3], v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, byte_4, v6);
  v9 = (CTaskComplexGoToPointAndStandStillAndAchieveHeading *)CTask::operator new((CTask *)&word_30, v8);
  CTaskComplexGoToPointAndStandStillAndAchieveHeading::CTaskComplexGoToPointAndStandStillAndAchieveHeading(
    v9,
    v12[0],
    (const CVector *)v11,
    v10,
    0.5,
    0.5,
    0.2);
}


// ============================================================

// Address: 0x51e0d0
// Original: _ZN51CTaskComplexGoToPointAndStandStillAndAchieveHeadingC2EiRK7CVectorffff
// Demangled: CTaskComplexGoToPointAndStandStillAndAchieveHeading::CTaskComplexGoToPointAndStandStillAndAchieveHeading(int,CVector const&,float,float,float,float)
void __fastcall CTaskComplexGoToPointAndStandStillAndAchieveHeading::CTaskComplexGoToPointAndStandStillAndAchieveHeading(
        CTaskComplexGoToPointAndStandStillAndAchieveHeading *this,
        int a2,
        const CVector *a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  int v10; // r0
  __int64 v11; // d16
  char v12; // r2

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v10 + 12) = a2;
  *(_DWORD *)v10 = &off_66C200;
  v11 = *(_QWORD *)a3;
  v12 = *(_BYTE *)(v10 + 44);
  *(_DWORD *)(v10 + 24) = *((_DWORD *)a3 + 2);
  *(float *)(v10 + 28) = a5;
  *(float *)(v10 + 32) = a4;
  *(float *)(v10 + 36) = a6;
  *(float *)(v10 + 40) = a7;
  *(_BYTE *)(v10 + 44) = v12 | 1;
  *(_QWORD *)(v10 + 16) = v11;
}


// ============================================================

// Address: 0x51e12c
// Original: _ZN51CTaskComplexGoToPointAndStandStillAndAchieveHeadingD2Ev
// Demangled: CTaskComplexGoToPointAndStandStillAndAchieveHeading::~CTaskComplexGoToPointAndStandStillAndAchieveHeading()
// attributes: thunk
void __fastcall CTaskComplexGoToPointAndStandStillAndAchieveHeading::~CTaskComplexGoToPointAndStandStillAndAchieveHeading(
        CTaskComplexGoToPointAndStandStillAndAchieveHeading *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x51e130
// Original: _ZN51CTaskComplexGoToPointAndStandStillAndAchieveHeadingD0Ev
// Demangled: CTaskComplexGoToPointAndStandStillAndAchieveHeading::~CTaskComplexGoToPointAndStandStillAndAchieveHeading()
void __fastcall CTaskComplexGoToPointAndStandStillAndAchieveHeading::~CTaskComplexGoToPointAndStandStillAndAchieveHeading(
        CTaskComplexGoToPointAndStandStillAndAchieveHeading *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x51e140
// Original: _ZN51CTaskComplexGoToPointAndStandStillAndAchieveHeading17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexGoToPointAndStandStillAndAchieveHeading::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexGoToPointAndStandStillAndAchieveHeading::CreateNextSubTask(
        CTaskComplexGoToPointAndStandStillAndAchieveHeading *this,
        CPed *a2)
{
  int v3; // r0
  int v4; // r1

  v3 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v4 = 902;
  if ( v3 != 203 )
  {
    if ( v3 == 902 )
    {
      v4 = 1302;
    }
    else
    {
      if ( v3 != 900 )
        return 0;
      v4 = 203;
    }
  }
  return CTaskComplexGoToPointAndStandStillAndAchieveHeading::CreateSubTask(this, v4);
}


// ============================================================

// Address: 0x51e174
// Original: _ZN51CTaskComplexGoToPointAndStandStillAndAchieveHeading13CreateSubTaskEi
// Demangled: CTaskComplexGoToPointAndStandStillAndAchieveHeading::CreateSubTask(int)
void __fastcall CTaskComplexGoToPointAndStandStillAndAchieveHeading::CreateSubTask(
        CTaskComplexGoToPointAndStandStillAndAchieveHeading *this,
        int a2)
{
  CTaskSimple *v3; // r0
  int v4; // r5
  int v5; // r6
  int v6; // r0
  __int64 v7; // d16
  char v8; // r3
  CTaskSimpleStandStill *v9; // r0
  CTaskSimple *v10; // r0
  __int64 v11; // kr00_8
  int v12; // r4
  int v13; // r0
  char v14; // r2

  switch ( a2 )
  {
    case 203:
      v9 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, 0xCBu);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v9, 0, 0, 0, 8.0);
      break;
    case 902:
      v10 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, 0x386u);
      v11 = *((_QWORD *)this + 4);
      v12 = *((_DWORD *)this + 10);
      CTaskSimple::CTaskSimple(v10);
      *(_QWORD *)(v13 + 8) = v11;
      *(_DWORD *)(v13 + 16) = v12;
      v14 = *(_BYTE *)(v13 + 20);
      *(_DWORD *)v13 = &off_66C118;
      *(_BYTE *)(v13 + 20) = v14 & 0xFE;
      break;
    case 900:
      v3 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, 0x384u);
      v4 = *((_DWORD *)this + 3);
      v5 = *((_DWORD *)this + 7);
      CTaskSimple::CTaskSimple(v3);
      *(_DWORD *)(v6 + 8) = v4;
      *(_DWORD *)v6 = &off_66C0B0;
      LOBYTE(v4) = *(_BYTE *)(v6 + 29);
      v7 = *((_QWORD *)this + 2);
      v8 = *(_BYTE *)(v6 + 28);
      *(_DWORD *)(v6 + 20) = *((_DWORD *)this + 6);
      *(_DWORD *)v6 = &off_66C0E4;
      *(_DWORD *)(v6 + 24) = v5;
      *(_BYTE *)(v6 + 29) = v4 & 0xE0;
      *(_BYTE *)(v6 + 28) = v8 & 0xC0;
      *(_QWORD *)(v6 + 12) = v7;
      break;
  }
}


// ============================================================

// Address: 0x51e230
// Original: _ZN51CTaskComplexGoToPointAndStandStillAndAchieveHeading18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGoToPointAndStandStillAndAchieveHeading::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexGoToPointAndStandStillAndAchieveHeading::CreateFirstSubTask(
        CTaskComplexGoToPointAndStandStillAndAchieveHeading *this,
        CPed *a2)
{
  CTaskSimple *v3; // r0
  int v4; // r5
  int v5; // r6
  int result; // r0
  __int64 v7; // d16
  char v8; // r3

  *((_BYTE *)this + 44) &= ~1u;
  v3 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, (unsigned int)a2);
  v4 = *((_DWORD *)this + 3);
  v5 = *((_DWORD *)this + 7);
  CTaskSimple::CTaskSimple(v3);
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)result = &off_66C0B0;
  LOBYTE(v4) = *(_BYTE *)(result + 29);
  v7 = *((_QWORD *)this + 2);
  v8 = *(_BYTE *)(result + 28);
  *(_DWORD *)(result + 20) = *((_DWORD *)this + 6);
  *(_DWORD *)result = &off_66C0E4;
  *(_DWORD *)(result + 24) = v5;
  *(_BYTE *)(result + 29) = v4 & 0xE0;
  *(_BYTE *)(result + 28) = v8 & 0xC0;
  *(_QWORD *)(result + 12) = v7;
  return result;
}


// ============================================================

// Address: 0x51e298
// Original: _ZN51CTaskComplexGoToPointAndStandStillAndAchieveHeading14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGoToPointAndStandStillAndAchieveHeading::ControlSubTask(CPed *)
int __fastcall CTaskComplexGoToPointAndStandStillAndAchieveHeading::ControlSubTask(
        CTaskComplexGoToPointAndStandStillAndAchieveHeading *this,
        CPed *a2)
{
  if ( *((unsigned __int8 *)this + 44) << 31 )
    return (*(int (__fastcall **)(CTaskComplexGoToPointAndStandStillAndAchieveHeading *, CPed *))(*(_DWORD *)this + 44))(
             this,
             a2);
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 900 )
    *(_DWORD *)(*((_DWORD *)this + 2) + 8) = *((_DWORD *)this + 3);
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x527a04
// Original: _ZNK51CTaskComplexGoToPointAndStandStillAndAchieveHeading5CloneEv
// Demangled: CTaskComplexGoToPointAndStandStillAndAchieveHeading::Clone(void)
int __fastcall CTaskComplexGoToPointAndStandStillAndAchieveHeading::Clone(
        CTaskComplexGoToPointAndStandStillAndAchieveHeading *this,
        unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r5
  __int64 v5; // d8
  __int64 v6; // d9
  int result; // r0
  char v8; // r2
  __int64 v9; // d16
  int v10; // r1

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_30, a2);
  v4 = *((_DWORD *)this + 3);
  v5 = *(_QWORD *)((char *)this + 28);
  v6 = *(_QWORD *)((char *)this + 36);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = v4;
  v8 = *(_BYTE *)(result + 44);
  *(_DWORD *)result = &off_66C200;
  v9 = *((_QWORD *)this + 2);
  v10 = *((_DWORD *)this + 6);
  *(_QWORD *)(result + 28) = v5;
  *(_QWORD *)(result + 36) = v6;
  *(_DWORD *)(result + 24) = v10;
  *(_BYTE *)(result + 44) = v8 | 1;
  *(_QWORD *)(result + 16) = v9;
  return result;
}


// ============================================================

// Address: 0x527a58
// Original: _ZNK51CTaskComplexGoToPointAndStandStillAndAchieveHeading11GetTaskTypeEv
// Demangled: CTaskComplexGoToPointAndStandStillAndAchieveHeading::GetTaskType(void)
int __fastcall CTaskComplexGoToPointAndStandStillAndAchieveHeading::GetTaskType(
        CTaskComplexGoToPointAndStandStillAndAchieveHeading *this)
{
  return 904;
}


// ============================================================

// Address: 0x527a60
// Original: _ZN51CTaskComplexGoToPointAndStandStillAndAchieveHeading9SerializeEv
// Demangled: CTaskComplexGoToPointAndStandStillAndAchieveHeading::Serialize(void)
void __fastcall CTaskComplexGoToPointAndStandStillAndAchieveHeading::Serialize(
        CTaskComplexGoToPointAndStandStillAndAchieveHeading *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  __int64 v8; // d16
  int v9; // r2
  CGenericGameStorage *v10; // r5
  int v11; // r2
  int v12; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexGoToPointAndStandStillAndAchieveHeading *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexGoToPointAndStandStillAndAchieveHeading *))(*(_DWORD *)this + 20))(this) == 904 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v7 = (CGenericGameStorage *)malloc(0xCu);
    v8 = *((_QWORD *)this + 2);
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *(_QWORD *)v7 = v8;
    CGenericGameStorage::_SaveDataToWorkBuffer(v7, &byte_9[3], v9);
    free(v7);
    if ( UseDataFence )
      AddDataFence();
    v10 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v10 = *((_DWORD *)this + 8);
    CGenericGameStorage::_SaveDataToWorkBuffer(v10, byte_4, v11);
    j_free(v10);
  }
  else
  {
    v12 = (*(int (__fastcall **)(CTaskComplexGoToPointAndStandStillAndAchieveHeading *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(904, v12);
  }
}


// ============================================================

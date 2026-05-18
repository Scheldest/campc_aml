
// Address: 0x18af7c
// Original: j__ZN31CTaskComplexEvasiveDiveAndGetUpC2EP8CVehicleiRK7CVectorb
// Demangled: CTaskComplexEvasiveDiveAndGetUp::CTaskComplexEvasiveDiveAndGetUp(CVehicle *,int,CVector const&,bool)
// attributes: thunk
void __fastcall CTaskComplexEvasiveDiveAndGetUp::CTaskComplexEvasiveDiveAndGetUp(
        CTaskComplexEvasiveDiveAndGetUp *this,
        CVehicle *a2,
        int a3,
        const CVector *a4,
        bool a5)
{
  _ZN31CTaskComplexEvasiveDiveAndGetUpC2EP8CVehicleiRK7CVectorb(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x18c95c
// Original: j__ZNK31CTaskComplexEvasiveDiveAndGetUp13CreateSubTaskEi
// Demangled: CTaskComplexEvasiveDiveAndGetUp::CreateSubTask(int)
// attributes: thunk
int __fastcall CTaskComplexEvasiveDiveAndGetUp::CreateSubTask(CTaskComplexEvasiveDiveAndGetUp *this, int a2)
{
  return _ZNK31CTaskComplexEvasiveDiveAndGetUp13CreateSubTaskEi(this, a2);
}


// ============================================================

// Address: 0x1956ec
// Original: j__ZN31CTaskComplexEvasiveDiveAndGetUp10CreateTaskEv
// Demangled: CTaskComplexEvasiveDiveAndGetUp::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexEvasiveDiveAndGetUp::CreateTask(CTaskComplexEvasiveDiveAndGetUp *this)
{
  return _ZN31CTaskComplexEvasiveDiveAndGetUp10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1987a0
// Original: j__ZN31CTaskComplexEvasiveDiveAndGetUpC2EP8CVehicleiRK7CVectorb_0
// Demangled: CTaskComplexEvasiveDiveAndGetUp::CTaskComplexEvasiveDiveAndGetUp(CVehicle *,int,CVector const&,bool)
// attributes: thunk
void __fastcall CTaskComplexEvasiveDiveAndGetUp::CTaskComplexEvasiveDiveAndGetUp(
        CTaskComplexEvasiveDiveAndGetUp *this,
        CVehicle *a2,
        int a3,
        const CVector *a4,
        bool a5)
{
  _ZN31CTaskComplexEvasiveDiveAndGetUpC2EP8CVehicleiRK7CVectorb(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x492548
// Original: _ZN31CTaskComplexEvasiveDiveAndGetUp10CreateTaskEv
// Demangled: CTaskComplexEvasiveDiveAndGetUp::CreateTask(void)
void __fastcall CTaskComplexEvasiveDiveAndGetUp::CreateTask(CTaskComplexEvasiveDiveAndGetUp *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  int v7; // r2
  char v8; // r5
  int v9; // r2
  char v10; // r5
  unsigned int v11; // r1
  CTaskComplexEvasiveDiveAndGetUp *v12; // r0
  _BYTE v13[12]; // [sp+8h] [bp-28h] BYREF
  int v14; // [sp+14h] [bp-1Ch] BYREF
  CPools *v15; // [sp+18h] [bp-18h] BYREF
  bool v16[18]; // [sp+1Eh] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, byte_4, a3);
  if ( v15 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v15, (int)v15 + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, byte_4, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, &byte_9[3], v7);
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, (char *)&stderr + 2, v9);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, (char *)&stderr + 1, v9);
  v12 = (CTaskComplexEvasiveDiveAndGetUp *)CTask::operator new((CTask *)&dword_24, v11);
  CTaskComplexEvasiveDiveAndGetUp::CTaskComplexEvasiveDiveAndGetUp(v12, Vehicle, v14, (const CVector *)v13, v16[0]);
}


// ============================================================

// Address: 0x50b288
// Original: _ZN31CTaskComplexEvasiveDiveAndGetUpC2EP8CVehicleiRK7CVectorb
// Demangled: CTaskComplexEvasiveDiveAndGetUp::CTaskComplexEvasiveDiveAndGetUp(CVehicle *,int,CVector const&,bool)
void __fastcall CTaskComplexEvasiveDiveAndGetUp::CTaskComplexEvasiveDiveAndGetUp(
        CTaskComplexEvasiveDiveAndGetUp *this,
        CVehicle *a2,
        int a3,
        const CVector *a4,
        bool a5)
{
  __int64 v9; // d16

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = a3;
  *(_DWORD *)this = &off_66B718;
  *((_DWORD *)this + 3) = a2;
  v9 = *(_QWORD *)a4;
  *((_DWORD *)this + 7) = *((_DWORD *)a4 + 2);
  *((_BYTE *)this + 32) = a5;
  *(_QWORD *)((char *)this + 20) = v9;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x50b2dc
// Original: _ZN31CTaskComplexEvasiveDiveAndGetUpD0Ev
// Demangled: CTaskComplexEvasiveDiveAndGetUp::~CTaskComplexEvasiveDiveAndGetUp()
void __fastcall CTaskComplexEvasiveDiveAndGetUp::~CTaskComplexEvasiveDiveAndGetUp(
        CTaskComplexEvasiveDiveAndGetUp *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B718;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x50b30c
// Original: _ZN31CTaskComplexEvasiveDiveAndGetUp13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexEvasiveDiveAndGetUp::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexEvasiveDiveAndGetUp::MakeAbortable(
        CTaskComplexEvasiveDiveAndGetUp *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v5; // r0
  bool v6; // zf
  int v7; // r4
  int Association; // r0

  v5 = (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         a3,
         a4);
  v6 = a3 == 2;
  v7 = v5;
  if ( a3 == 2 )
    v6 = v5 == 1;
  if ( v6 )
  {
    Association = RpAnimBlendClumpGetAssociation();
    if ( Association )
      *(_DWORD *)(Association + 28) = -998637568;
  }
  return v7;
}


// ============================================================

// Address: 0x50b348
// Original: _ZNK31CTaskComplexEvasiveDiveAndGetUp20ComputeTargetHeadingEv
// Demangled: CTaskComplexEvasiveDiveAndGetUp::ComputeTargetHeading(void)
int __fastcall CTaskComplexEvasiveDiveAndGetUp::ComputeTargetHeading(
        CTaskComplexEvasiveDiveAndGetUp *this,
        int a2,
        int a3,
        int a4,
        float a5)
{
  return sub_1991A8(*((CGeneral **)this + 5), *((float *)this + 6), 0.0, 0.0, a5);
}


// ============================================================

// Address: 0x50b358
// Original: _ZN31CTaskComplexEvasiveDiveAndGetUp17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexEvasiveDiveAndGetUp::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexEvasiveDiveAndGetUp::CreateNextSubTask(CTaskComplexEvasiveDiveAndGetUp *this, CGeneral **a2)
{
  int v4; // r0
  float v5; // r1
  int v6; // r1
  float v8; // r0

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 > 502 )
  {
    if ( v4 == 503 )
    {
      v6 = 202;
      return CTaskComplexEvasiveDiveAndGetUp::CreateSubTask(this, v6);
    }
    if ( v4 == 902 )
    {
      v6 = 503;
      return CTaskComplexEvasiveDiveAndGetUp::CreateSubTask(this, v6);
    }
    return 0;
  }
  if ( v4 == 202 )
  {
    v8 = COERCE_FLOAT(CGeneral::LimitRadianAngle(a2[343], v5));
    v6 = 205;
    *((float *)a2 + 343) = v8 + -1.5708;
    *((float *)a2 + 344) = v8 + -1.5708;
    return CTaskComplexEvasiveDiveAndGetUp::CreateSubTask(this, v6);
  }
  if ( v4 != 205 )
    return 0;
  v6 = 1302;
  return CTaskComplexEvasiveDiveAndGetUp::CreateSubTask(this, v6);
}


// ============================================================

// Address: 0x50b3cc
// Original: _ZNK31CTaskComplexEvasiveDiveAndGetUp13CreateSubTaskEi
// Demangled: CTaskComplexEvasiveDiveAndGetUp::CreateSubTask(int)
void __fastcall CTaskComplexEvasiveDiveAndGetUp::CreateSubTask(CTaskComplexEvasiveDiveAndGetUp *this, int a2)
{
  CTaskSimpleGetUp *v3; // r0
  CTaskSimpleAchieveHeading *v4; // r4
  int RadianAngleBetweenPoints; // r0
  int v6; // r4
  int v7; // r5
  int v8; // r4
  CEntity *v9; // r5
  float v10; // [sp+0h] [bp-8h]

  if ( a2 > 502 )
  {
    if ( a2 == 503 )
    {
      v8 = CTask::operator new((CTask *)&dword_14, 0x1F7u);
      v9 = (CEntity *)*((_DWORD *)this + 3);
      CTaskSimple::CTaskSimple((CTaskSimple *)v8);
      *(_BYTE *)(v8 + 12) = 0;
      *(_DWORD *)(v8 + 16) = 0;
      *(_DWORD *)v8 = &off_66B6E4;
      *(_DWORD *)(v8 + 8) = v9;
      if ( v9 )
        CEntity::RegisterReference(v9, (CEntity **)(v8 + 8));
    }
    else if ( a2 == 902 )
    {
      v4 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, 0x386u);
      RadianAngleBetweenPoints = CGeneral::GetRadianAngleBetweenPoints(
                                   *((CGeneral **)this + 5),
                                   *((float *)this + 6),
                                   0.0,
                                   0.0,
                                   v10);
      CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v4, *(float *)&RadianAngleBetweenPoints, 2.0, 0.2);
    }
  }
  else if ( a2 == 202 )
  {
    v6 = CTask::operator new((CTask *)&off_18, 0xCAu);
    v7 = *((_DWORD *)this + 4);
    CTaskSimple::CTaskSimple((CTaskSimple *)v6);
    *(_WORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 20) = v7;
    *(_DWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 12) = 0;
    *(_DWORD *)v6 = &off_665760;
  }
  else if ( a2 == 205 )
  {
    v3 = (CTaskSimpleGetUp *)CTask::operator new((CTask *)&word_10, 0xCDu);
    CTaskSimpleGetUp::CTaskSimpleGetUp(v3);
  }
}


// ============================================================

// Address: 0x50b494
// Original: _ZN31CTaskComplexEvasiveDiveAndGetUp18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexEvasiveDiveAndGetUp::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexEvasiveDiveAndGetUp::CreateFirstSubTask(CTaskComplexEvasiveDiveAndGetUp *this, CPed *a2)
{
  int v2; // r1

  v2 = 902;
  if ( !*((_BYTE *)this + 32) )
    v2 = 503;
  CTaskComplexEvasiveDiveAndGetUp::CreateSubTask(this, v2);
}


// ============================================================

// Address: 0x50b4a6
// Original: _ZN31CTaskComplexEvasiveDiveAndGetUp14ControlSubTaskEP4CPed
// Demangled: CTaskComplexEvasiveDiveAndGetUp::ControlSubTask(CPed *)
int __fastcall CTaskComplexEvasiveDiveAndGetUp::ControlSubTask(CTaskComplexEvasiveDiveAndGetUp *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x50ebf8
// Original: _ZN31CTaskComplexEvasiveDiveAndGetUpD2Ev
// Demangled: CTaskComplexEvasiveDiveAndGetUp::~CTaskComplexEvasiveDiveAndGetUp()
void __fastcall CTaskComplexEvasiveDiveAndGetUp::~CTaskComplexEvasiveDiveAndGetUp(
        CTaskComplexEvasiveDiveAndGetUp *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B718;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x50f230
// Original: _ZNK31CTaskComplexEvasiveDiveAndGetUp5CloneEv
// Demangled: CTaskComplexEvasiveDiveAndGetUp::Clone(void)
CTaskComplex *__fastcall CTaskComplexEvasiveDiveAndGetUp::Clone(CTaskComplexEvasiveDiveAndGetUp *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  CTaskComplex *v5; // r4
  char v6; // r9
  __int64 v7; // d16

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_24, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = v3;
  v6 = *((_BYTE *)this + 32);
  CTaskComplex::CTaskComplex(v3);
  *((_DWORD *)v5 + 4) = HIDWORD(v4);
  *(_DWORD *)v5 = &off_66B718;
  *((_DWORD *)v5 + 3) = v4;
  v7 = *(_QWORD *)((char *)this + 20);
  *((_DWORD *)v5 + 7) = *((_DWORD *)this + 7);
  *((_BYTE *)v5 + 32) = v6;
  *(_QWORD *)((char *)v5 + 20) = v7;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 3);
  return v5;
}


// ============================================================

// Address: 0x50f28c
// Original: _ZNK31CTaskComplexEvasiveDiveAndGetUp11GetTaskTypeEv
// Demangled: CTaskComplexEvasiveDiveAndGetUp::GetTaskType(void)
int __fastcall CTaskComplexEvasiveDiveAndGetUp::GetTaskType(CTaskComplexEvasiveDiveAndGetUp *this)
{
  return 504;
}


// ============================================================

// Address: 0x50f294
// Original: _ZN31CTaskComplexEvasiveDiveAndGetUp9SerializeEv
// Demangled: CTaskComplexEvasiveDiveAndGetUp::Serialize(void)
int __fastcall CTaskComplexEvasiveDiveAndGetUp::Serialize(CTaskComplexEvasiveDiveAndGetUp *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CVehicle *v5; // r0
  int v6; // r5
  CGenericGameStorage *v7; // r6
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v12; // r5
  int v13; // r2
  CGenericGameStorage *v14; // r5
  int v15; // r2
  CGenericGameStorage *v16; // r5
  __int64 v17; // d16
  int v18; // r2
  int v19; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexEvasiveDiveAndGetUp *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexEvasiveDiveAndGetUp *))(*(_DWORD *)this + 20))(this) == 504 )
  {
    v5 = (CVehicle *)*((_DWORD *)this + 3);
    if ( v5 )
    {
      v6 = GettPoolVehicleRef(v5);
      if ( UseDataFence )
        AddDataFence();
      v7 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v7 = v6;
      CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
      v9 = v7;
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v12 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v12 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v12, byte_4, v13);
      v9 = v12;
    }
    free(v9);
    if ( UseDataFence )
      AddDataFence();
    v14 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v14 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v14, byte_4, v15);
    free(v14);
    if ( UseDataFence )
      AddDataFence();
    v16 = (CGenericGameStorage *)malloc(0xCu);
    v17 = *(_QWORD *)((char *)this + 20);
    *((_DWORD *)v16 + 2) = *((_DWORD *)this + 7);
    *(_QWORD *)v16 = v17;
    CGenericGameStorage::_SaveDataToWorkBuffer(v16, &byte_9[3], v18);
    free(v16);
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskComplexEvasiveDiveAndGetUp *)((char *)this + 32), (char *)&stderr + 1, v19);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexEvasiveDiveAndGetUp *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(504, v10);
  }
}


// ============================================================

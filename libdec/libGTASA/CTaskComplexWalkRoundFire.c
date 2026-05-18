
// Address: 0x18e704
// Original: j__ZN25CTaskComplexWalkRoundFireC2EiRK7CVectorfS2_
// Demangled: CTaskComplexWalkRoundFire::CTaskComplexWalkRoundFire(int,CVector const&,float,CVector const&)
// attributes: thunk
void __fastcall CTaskComplexWalkRoundFire::CTaskComplexWalkRoundFire(
        CTaskComplexWalkRoundFire *this,
        int a2,
        const CVector *a3,
        float a4,
        const CVector *a5)
{
  _ZN25CTaskComplexWalkRoundFireC2EiRK7CVectorfS2_(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19fef0
// Original: j__ZN25CTaskComplexWalkRoundFire10CreateTaskEv
// Demangled: CTaskComplexWalkRoundFire::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexWalkRoundFire::CreateTask(CTaskComplexWalkRoundFire *this)
{
  return _ZN25CTaskComplexWalkRoundFire10CreateTaskEv(this);
}


// ============================================================

// Address: 0x492d40
// Original: _ZN25CTaskComplexWalkRoundFire10CreateTaskEv
// Demangled: CTaskComplexWalkRoundFire::CreateTask(void)
void __fastcall CTaskComplexWalkRoundFire::CreateTask(CTaskComplexWalkRoundFire *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  int v8; // r2
  char v9; // r4
  unsigned int v10; // r1
  CTaskComplexWalkRoundFire *v11; // r0
  _BYTE v12[12]; // [sp+8h] [bp-28h] BYREF
  float v13; // [sp+14h] [bp-1Ch] BYREF
  _BYTE v14[12]; // [sp+18h] [bp-18h] BYREF
  int v15[3]; // [sp+24h] [bp-Ch] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, &byte_9[3], v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, byte_4, v6);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, v8);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, &byte_9[3], v8);
  v11 = (CTaskComplexWalkRoundFire *)CTask::operator new((CTask *)&dword_38, v10);
  CTaskComplexWalkRoundFire::CTaskComplexWalkRoundFire(v11, v15[0], (const CVector *)v14, v13, (const CVector *)v12);
}


// ============================================================

// Address: 0x50ea1c
// Original: _ZN25CTaskComplexWalkRoundFireC2EiRK7CVectorfS2_
// Demangled: CTaskComplexWalkRoundFire::CTaskComplexWalkRoundFire(int,CVector const&,float,CVector const&)
void __fastcall CTaskComplexWalkRoundFire::CTaskComplexWalkRoundFire(
        CTaskComplexWalkRoundFire *this,
        int a2,
        const CVector *a3,
        float a4,
        const CVector *a5)
{
  int v8; // r0
  __int64 v9; // d16
  __int64 v10; // d16

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v8 + 12) = a2;
  *(_DWORD *)v8 = &off_66B924;
  v9 = *(_QWORD *)a3;
  *(_DWORD *)(v8 + 24) = *((_DWORD *)a3 + 2);
  *(float *)(v8 + 28) = a4;
  *(_QWORD *)(v8 + 16) = v9;
  v10 = *(_QWORD *)a5;
  *(_DWORD *)(v8 + 40) = *((_DWORD *)a5 + 2);
  *(_QWORD *)(v8 + 32) = v10;
}


// ============================================================

// Address: 0x50ea60
// Original: _ZN25CTaskComplexWalkRoundFireD2Ev
// Demangled: CTaskComplexWalkRoundFire::~CTaskComplexWalkRoundFire()
// attributes: thunk
void __fastcall CTaskComplexWalkRoundFire::~CTaskComplexWalkRoundFire(CTaskComplexWalkRoundFire *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x50ea64
// Original: _ZN25CTaskComplexWalkRoundFireD0Ev
// Demangled: CTaskComplexWalkRoundFire::~CTaskComplexWalkRoundFire()
void __fastcall CTaskComplexWalkRoundFire::~CTaskComplexWalkRoundFire(CTaskComplexWalkRoundFire *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x50ea74
// Original: _ZN25CTaskComplexWalkRoundFire17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexWalkRoundFire::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexWalkRoundFire::CreateNextSubTask(CTaskComplexWalkRoundFire *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x50ea78
// Original: _ZN25CTaskComplexWalkRoundFire18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexWalkRoundFire::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexWalkRoundFire::CreateFirstSubTask(CTaskComplexWalkRoundFire *this, CPed *a2)
{
  int v4; // r0
  char *v5; // r1
  __int64 v6; // d16
  unsigned int v7; // r1
  CTaskSimpleGoToPoint *v8; // r0
  CVector *v9; // [sp+8h] [bp-48h]
  _BYTE v10[12]; // [sp+Ch] [bp-44h] BYREF
  _BYTE v11[12]; // [sp+18h] [bp-38h] BYREF
  _BYTE v12[44]; // [sp+24h] [bp-2Ch] BYREF

  v4 = *((_DWORD *)a2 + 5);
  v5 = (char *)(v4 + 48);
  if ( !v4 )
    v5 = (char *)a2 + 4;
  v6 = *(_QWORD *)v5;
  *((_DWORD *)this + 13) = *((_DWORD *)v5 + 2);
  *(_QWORD *)((char *)this + 44) = v6;
  CColSphere::Set(
    (CColSphere *)v12,
    *((float *)this + 7),
    (CTaskComplexWalkRoundFire *)((char *)this + 16),
    0,
    0,
    0xFFu);
  CPedGeometryAnalyser::ComputeRouteRoundSphere(
    a2,
    (const CPed *)v12,
    (CTaskComplexWalkRoundFire *)((char *)this + 44),
    (CTaskComplexWalkRoundFire *)((char *)this + 32),
    (const CVector *)v11,
    (CVector *)v10,
    v9);
  v8 = (CTaskSimpleGoToPoint *)CTask::operator new((CTask *)&word_2C, v7);
  CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(v8, *((_DWORD *)this + 3), (const CVector *)v10, 0.5, 0, 0);
}


// ============================================================

// Address: 0x50eaf8
// Original: _ZN25CTaskComplexWalkRoundFire19ComputeDetourTargetERK4CPedR7CVector
// Demangled: CTaskComplexWalkRoundFire::ComputeDetourTarget(CPed const&,CVector &)
int __fastcall CTaskComplexWalkRoundFire::ComputeDetourTarget(
        CTaskComplexWalkRoundFire *this,
        const CPed *a2,
        CVector *a3)
{
  CVector *v7; // [sp+8h] [bp-30h] BYREF
  _BYTE v8[36]; // [sp+14h] [bp-24h] BYREF

  CColSphere::Set((CColSphere *)v8, *((float *)this + 7), (CTaskComplexWalkRoundFire *)((char *)this + 16), 0, 0, 0xFFu);
  return CPedGeometryAnalyser::ComputeRouteRoundSphere(
           a2,
           (const CPed *)v8,
           (CTaskComplexWalkRoundFire *)((char *)this + 44),
           (CTaskComplexWalkRoundFire *)((char *)this + 32),
           (const CVector *)&v7,
           a3,
           v7);
}


// ============================================================

// Address: 0x50eb40
// Original: _ZN25CTaskComplexWalkRoundFire14ControlSubTaskEP4CPed
// Demangled: CTaskComplexWalkRoundFire::ControlSubTask(CPed *)
int __fastcall CTaskComplexWalkRoundFire::ControlSubTask(CTaskComplexWalkRoundFire *this, CPed *a2)
{
  int result; // r0
  char v5; // r2
  double v6; // d16
  double v7; // [sp+8h] [bp-40h] BYREF
  float v8; // [sp+10h] [bp-38h]
  _BYTE v9[12]; // [sp+18h] [bp-30h] BYREF
  _BYTE v10[36]; // [sp+24h] [bp-24h] BYREF

  CColSphere::Set(
    (CColSphere *)v10,
    *((float *)this + 7),
    (CTaskComplexWalkRoundFire *)((char *)this + 16),
    0,
    0,
    0xFFu);
  CPedGeometryAnalyser::ComputeRouteRoundSphere(
    a2,
    (const CPed *)v10,
    (CTaskComplexWalkRoundFire *)((char *)this + 44),
    (CTaskComplexWalkRoundFire *)((char *)this + 32),
    (const CVector *)v9,
    (CVector *)&v7,
    (CVector *)LODWORD(v7));
  result = *((_DWORD *)this + 2);
  if ( *(float *)(result + 12) != *(float *)&v7
    || *(float *)(result + 16) != *((float *)&v7 + 1)
    || *(float *)(result + 20) != v8
    || *(float *)(result + 24) != 0.5 )
  {
    v5 = *(_BYTE *)(result + 28);
    v6 = v7;
    *(float *)(result + 20) = v8;
    *(_DWORD *)(result + 24) = 1056964608;
    *(double *)(result + 12) = v6;
    *(_BYTE *)(result + 28) = v5 & 0xD0 | 0x20;
    return *((_DWORD *)this + 2);
  }
  return result;
}


// ============================================================

// Address: 0x5100a0
// Original: _ZNK25CTaskComplexWalkRoundFire5CloneEv
// Demangled: CTaskComplexWalkRoundFire::Clone(void)
int __fastcall CTaskComplexWalkRoundFire::Clone(CTaskComplexWalkRoundFire *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r5
  int v5; // r6
  int result; // r0
  __int64 v7; // d16
  __int64 v8; // d16

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_38, a2);
  v4 = *((_DWORD *)this + 3);
  v5 = *((_DWORD *)this + 7);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = v4;
  *(_DWORD *)result = &off_66B924;
  v7 = *((_QWORD *)this + 2);
  *(_DWORD *)(result + 24) = *((_DWORD *)this + 6);
  *(_DWORD *)(result + 28) = v5;
  *(_QWORD *)(result + 16) = v7;
  v8 = *((_QWORD *)this + 4);
  *(_DWORD *)(result + 40) = *((_DWORD *)this + 10);
  *(_QWORD *)(result + 32) = v8;
  return result;
}


// ============================================================

// Address: 0x5100e8
// Original: _ZNK25CTaskComplexWalkRoundFire11GetTaskTypeEv
// Demangled: CTaskComplexWalkRoundFire::GetTaskType(void)
int __fastcall CTaskComplexWalkRoundFire::GetTaskType(CTaskComplexWalkRoundFire *this)
{
  return 514;
}


// ============================================================

// Address: 0x5100f0
// Original: _ZN25CTaskComplexWalkRoundFire9SerializeEv
// Demangled: CTaskComplexWalkRoundFire::Serialize(void)
void __fastcall CTaskComplexWalkRoundFire::Serialize(CTaskComplexWalkRoundFire *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r6
  CGenericGameStorage *v6; // r5
  int v7; // r2
  CGenericGameStorage *v8; // r5
  __int64 v9; // d16
  int v10; // r2
  CGenericGameStorage *v11; // r5
  int v12; // r2
  CGenericGameStorage *v13; // r5
  __int64 v14; // d16
  int v15; // r2
  int v16; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexWalkRoundFire *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexWalkRoundFire *))(*(_DWORD *)this + 20))(this) == 514 )
  {
    v5 = *((_DWORD *)this + 3);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    free(v6);
    if ( UseDataFence )
      AddDataFence();
    v8 = (CGenericGameStorage *)malloc(0xCu);
    v9 = *((_QWORD *)this + 2);
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
    *(_QWORD *)v8 = v9;
    CGenericGameStorage::_SaveDataToWorkBuffer(v8, &byte_9[3], v10);
    free(v8);
    if ( UseDataFence )
      AddDataFence();
    v11 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v11 = *((_DWORD *)this + 7);
    CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
    free(v11);
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(0xCu);
    v14 = *((_QWORD *)this + 4);
    *((_DWORD *)v13 + 2) = *((_DWORD *)this + 10);
    *(_QWORD *)v13 = v14;
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, &byte_9[3], v15);
    j_free(v13);
  }
  else
  {
    v16 = (*(int (__fastcall **)(CTaskComplexWalkRoundFire *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(514, v16);
  }
}


// ============================================================

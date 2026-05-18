
// Address: 0x19c9fc
// Original: j__ZN35CTaskComplexTurnToFaceEntityOrCoordC2EP7CEntityff
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(CEntity *,float,float)
// attributes: thunk
void __fastcall CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(
        CTaskComplexTurnToFaceEntityOrCoord *this,
        CEntity *a2,
        float a3,
        float a4)
{
  _ZN35CTaskComplexTurnToFaceEntityOrCoordC2EP7CEntityff(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1a039c
// Original: j__ZN35CTaskComplexTurnToFaceEntityOrCoord10CreateTaskEv
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexTurnToFaceEntityOrCoord::CreateTask(CTaskComplexTurnToFaceEntityOrCoord *this)
{
  return _ZN35CTaskComplexTurnToFaceEntityOrCoord10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1a0f34
// Original: j__ZN35CTaskComplexTurnToFaceEntityOrCoordC2ERK7CVectorff
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(CVector const&,float,float)
// attributes: thunk
void __fastcall CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(
        CTaskComplexTurnToFaceEntityOrCoord *this,
        const CVector *a2,
        float a3,
        float a4)
{
  _ZN35CTaskComplexTurnToFaceEntityOrCoordC2ERK7CVectorff(this, a2, a3, a4);
}


// ============================================================

// Address: 0x495b68
// Original: _ZN35CTaskComplexTurnToFaceEntityOrCoord10CreateTaskEv
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::CreateTask(void)
void __fastcall CTaskComplexTurnToFaceEntityOrCoord::CreateTask(
        CTaskComplexTurnToFaceEntityOrCoord *this,
        int a2,
        int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int Vehicle; // r0
  char v7; // r4
  CEntity *v8; // r4
  char v9; // r5
  int v10; // r2
  char v11; // r5
  unsigned int v12; // r1
  CTaskComplexTurnToFaceEntityOrCoord *v13; // r0
  CPools *v14[3]; // [sp+4h] [bp-24h] BYREF
  char v15; // [sp+13h] [bp-15h] BYREF
  _DWORD v16[5]; // [sp+14h] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, byte_4, a3);
  if ( v16[0] == 2 )
  {
    v7 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, v4);
      UseDataFence = v7;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, byte_4, v4);
    if ( v14[0] != (CPools *)-1 )
    {
      Vehicle = CPools::GetVehicle(v14[0], (int)v14[0] + 1);
      goto LABEL_13;
    }
  }
  else if ( v16[0] == 3 )
  {
    v5 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, v4);
      UseDataFence = v5;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, byte_4, v4);
    if ( v14[0] != (CPools *)-1 )
    {
      Vehicle = CPools::GetPed(v14[0], (int)v14[0] + 1);
LABEL_13:
      v8 = (CEntity *)Vehicle;
      goto LABEL_15;
    }
  }
  v8 = 0;
LABEL_15:
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, v4);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 1, v4);
  v11 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, v10);
    UseDataFence = v11;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, &byte_9[3], v10);
  v13 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v12);
  if ( v8 )
    CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v13, v8, 0.5, 0.2);
  else
    CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v13, (const CVector *)v14, 0.5, 0.2);
}


// ============================================================

// Address: 0x524ca4
// Original: _ZN35CTaskComplexTurnToFaceEntityOrCoordC2EP7CEntityff
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(CEntity *,float,float)
void __fastcall CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(
        CTaskComplexTurnToFaceEntityOrCoord *this,
        CEntity *a2,
        float a3,
        float a4)
{
  CTaskComplex::CTaskComplex(this);
  *((_BYTE *)this + 16) = 1;
  *(_DWORD *)this = &off_66C43C;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
  *((float *)this + 8) = a3;
  *((float *)this + 9) = a4;
}


// ============================================================

// Address: 0x524cfc
// Original: _ZN35CTaskComplexTurnToFaceEntityOrCoordC2ERK7CVectorff
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(CVector const&,float,float)
void __fastcall CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(
        CTaskComplexTurnToFaceEntityOrCoord *this,
        const CVector *a2,
        float a3,
        float a4)
{
  int v7; // r0
  __int64 v8; // d16

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v7 + 12) = 0;
  *(_BYTE *)(v7 + 16) = 0;
  *(_DWORD *)v7 = &off_66C43C;
  v8 = *(_QWORD *)a2;
  *(_DWORD *)(v7 + 28) = *((_DWORD *)a2 + 2);
  *(float *)(v7 + 32) = a3;
  *(float *)(v7 + 36) = a4;
  *(_QWORD *)(v7 + 20) = v8;
}


// ============================================================

// Address: 0x524d38
// Original: _ZN35CTaskComplexTurnToFaceEntityOrCoordD2Ev
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::~CTaskComplexTurnToFaceEntityOrCoord()
void __fastcall CTaskComplexTurnToFaceEntityOrCoord::~CTaskComplexTurnToFaceEntityOrCoord(
        CTaskComplexTurnToFaceEntityOrCoord *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66C43C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x524d64
// Original: _ZN35CTaskComplexTurnToFaceEntityOrCoordD0Ev
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::~CTaskComplexTurnToFaceEntityOrCoord()
void __fastcall CTaskComplexTurnToFaceEntityOrCoord::~CTaskComplexTurnToFaceEntityOrCoord(
        CTaskComplexTurnToFaceEntityOrCoord *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66C43C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x524d94
// Original: _ZN35CTaskComplexTurnToFaceEntityOrCoord17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexTurnToFaceEntityOrCoord::CreateNextSubTask(
        CTaskComplexTurnToFaceEntityOrCoord *this,
        CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x524d98
// Original: _ZN35CTaskComplexTurnToFaceEntityOrCoord18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexTurnToFaceEntityOrCoord::CreateFirstSubTask(
        CTaskComplexTurnToFaceEntityOrCoord *this,
        CPed *a2)
{
  int v3; // r2
  int v4; // r3
  float *v5; // r0
  float *v6; // r2
  float *v7; // r3
  float v8; // s4
  int v9; // r0
  float v10; // s0
  float *v11; // r2
  float v12; // s2
  float v13; // s0
  int RadianAngleBetweenPoints; // r5
  unsigned int v15; // r1
  CTaskSimple *v16; // r0
  __int64 v17; // kr00_8
  int v18; // r0
  char v19; // r2
  float v20; // [sp+0h] [bp-20h]
  float v21; // [sp+4h] [bp-1Ch] BYREF
  float v22; // [sp+8h] [bp-18h]
  float v23; // [sp+Ch] [bp-14h]

  if ( *((_BYTE *)this + 16) )
  {
    v3 = *((_DWORD *)this + 3);
    if ( !v3 )
      return;
    v4 = *(_DWORD *)(v3 + 20);
    v5 = (float *)(v4 + 48);
    if ( !v4 )
      v5 = (float *)(v3 + 4);
    v6 = v5 + 2;
    v7 = v5 + 1;
  }
  else
  {
    v6 = (float *)((char *)this + 28);
    v7 = (float *)((char *)this + 24);
    v5 = (float *)((char *)this + 20);
  }
  v8 = *v5;
  v9 = *((_DWORD *)a2 + 5);
  v10 = *v6;
  v11 = (float *)(v9 + 48);
  if ( !v9 )
    v11 = (float *)((char *)a2 + 4);
  v12 = *v7 - v11[1];
  v13 = v10 - v11[2];
  v21 = v8 - *v11;
  v22 = v12;
  v23 = v13;
  CVector::Normalise((CVector *)&v21);
  RadianAngleBetweenPoints = CGeneral::GetRadianAngleBetweenPoints((CGeneral *)LODWORD(v21), v22, 0.0, 0.0, v20);
  v16 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, v15);
  v17 = *((_QWORD *)this + 4);
  CTaskSimple::CTaskSimple(v16);
  v19 = *(_BYTE *)(v18 + 20);
  *(_DWORD *)v18 = &off_66C118;
  *(_DWORD *)(v18 + 8) = RadianAngleBetweenPoints;
  *(_QWORD *)(v18 + 12) = v17;
  *(_BYTE *)(v18 + 20) = v19 & 0xFE;
}


// ============================================================

// Address: 0x524e54
// Original: _ZNK35CTaskComplexTurnToFaceEntityOrCoord20ComputeTargetHeadingEP4CPed
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::ComputeTargetHeading(CPed *)
int __fastcall CTaskComplexTurnToFaceEntityOrCoord::ComputeTargetHeading(
        CTaskComplexTurnToFaceEntityOrCoord *this,
        CPed *a2)
{
  int v2; // r2
  int v3; // r3
  float *v4; // r0
  float *v5; // r2
  float *v6; // r3
  float v7; // s4
  int v8; // r0
  float v9; // s0
  float *v10; // r2
  float v11; // s2
  float v12; // s0
  float v14; // [sp+0h] [bp-18h]
  float v15; // [sp+4h] [bp-14h] BYREF
  float v16; // [sp+8h] [bp-10h]
  float v17; // [sp+Ch] [bp-Ch]

  if ( *((_BYTE *)this + 16) )
  {
    v2 = *((_DWORD *)this + 3);
    v3 = *(_DWORD *)(v2 + 20);
    v4 = (float *)(v3 + 48);
    if ( !v3 )
      v4 = (float *)(v2 + 4);
    v5 = v4 + 2;
    v6 = v4 + 1;
  }
  else
  {
    v5 = (float *)((char *)this + 28);
    v6 = (float *)((char *)this + 24);
    v4 = (float *)((char *)this + 20);
  }
  v7 = *v4;
  v8 = *((_DWORD *)a2 + 5);
  v9 = *v5;
  v10 = (float *)(v8 + 48);
  if ( !v8 )
    v10 = (float *)((char *)a2 + 4);
  v11 = *v6 - v10[1];
  v12 = v9 - v10[2];
  v15 = v7 - *v10;
  v16 = v11;
  v17 = v12;
  CVector::Normalise((CVector *)&v15);
  return CGeneral::GetRadianAngleBetweenPoints((CGeneral *)LODWORD(v15), v16, 0.0, 0.0, v14);
}


// ============================================================

// Address: 0x524ed0
// Original: _ZN35CTaskComplexTurnToFaceEntityOrCoord14ControlSubTaskEP4CPed
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::ControlSubTask(CPed *)
int __fastcall CTaskComplexTurnToFaceEntityOrCoord::ControlSubTask(CTaskComplexTurnToFaceEntityOrCoord *this, CPed *a2)
{
  int v3; // r0
  int v4; // r2
  float *v5; // r3
  int v6; // r0
  float *v7; // r2
  float v8; // s2
  float v9; // s4
  float v10; // s8
  float v11; // s10
  float v12; // r0
  float *v13; // r1
  float *v14; // r4
  float *v15; // t1
  float v16; // s0
  float v17; // s2
  int v18; // r0
  int v19; // t1
  _DWORD *v20; // r1
  float v21; // s0
  float v22; // s2
  float v24; // [sp+0h] [bp-18h]
  float v25; // [sp+4h] [bp-14h] BYREF
  float v26; // [sp+8h] [bp-10h]
  float v27; // [sp+Ch] [bp-Ch]

  if ( *((_BYTE *)this + 16) )
  {
    v3 = *((_DWORD *)this + 3);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 20);
      v5 = (float *)(v4 + 48);
      if ( !v4 )
        v5 = (float *)(v3 + 4);
      v6 = *((_DWORD *)a2 + 5);
      v7 = (float *)(v6 + 48);
      v8 = v5[1];
      v9 = v5[2];
      if ( !v6 )
        v7 = (float *)((char *)a2 + 4);
      v10 = v7[1];
      v11 = v7[2];
      v25 = *v5 - *v7;
      v26 = v8 - v10;
      v27 = v9 - v11;
      CVector::Normalise((CVector *)&v25);
      v12 = COERCE_FLOAT(CGeneral::GetRadianAngleBetweenPoints((CGeneral *)LODWORD(v25), v26, 0.0, 0.0, v24));
      v15 = (float *)*((_DWORD *)this + 2);
      v14 = (float *)((char *)this + 8);
      v13 = v15;
      v16 = v14[6];
      v17 = v14[7];
      if ( v15[2] != v12 || v13[3] != v16 || v13[4] != v17 )
      {
        v13[2] = v12;
        v13[3] = v16;
        v13[4] = v17;
      }
    }
    else
    {
      v19 = *((_DWORD *)this + 2);
      v14 = (float *)((char *)this + 8);
      v18 = v19;
      v20 = (_DWORD *)((char *)a2 + 1372);
      v21 = v14[6];
      v22 = v14[7];
      if ( *(float *)(v19 + 8) != *(float *)v20 || *(float *)(v18 + 12) != v21 || *(float *)(v18 + 16) != v22 )
      {
        *(_DWORD *)(v18 + 8) = *v20;
        *(float *)(v18 + 12) = v21;
        *(float *)(v18 + 16) = v22;
      }
    }
  }
  else
  {
    v14 = (float *)((char *)this + 8);
  }
  return *(_DWORD *)v14;
}


// ============================================================

// Address: 0x528358
// Original: _ZNK35CTaskComplexTurnToFaceEntityOrCoord5CloneEv
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::Clone(void)
CTaskComplex *__fastcall CTaskComplexTurnToFaceEntityOrCoord::Clone(
        CTaskComplexTurnToFaceEntityOrCoord *this,
        unsigned int a2)
{
  int v3; // r6
  CTaskComplex *v4; // r0
  CTaskComplex *v5; // r4
  int v6; // s16
  int v7; // s18
  CEntity *v8; // r5
  __int64 v9; // d16
  CTaskComplex *result; // r0

  v3 = *((unsigned __int8 *)this + 16);
  v4 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, a2);
  v5 = v4;
  if ( v3 )
  {
    v6 = *((_DWORD *)this + 8);
    v7 = *((_DWORD *)this + 9);
    v8 = (CEntity *)*((_DWORD *)this + 3);
    CTaskComplex::CTaskComplex(v4);
    *((_BYTE *)v5 + 16) = 1;
    *(_DWORD *)v5 = &off_66C43C;
    *((_DWORD *)v5 + 3) = v8;
    if ( v8 )
      CEntity::RegisterReference(v8, (CEntity **)v5 + 3);
  }
  else
  {
    v6 = *((_DWORD *)this + 8);
    v7 = *((_DWORD *)this + 9);
    CTaskComplex::CTaskComplex(v4);
    *((_DWORD *)v5 + 3) = 0;
    *((_BYTE *)v5 + 16) = 0;
    *(_DWORD *)v5 = &off_66C43C;
    v9 = *(_QWORD *)((char *)this + 20);
    *((_DWORD *)v5 + 7) = *((_DWORD *)this + 7);
    *(_QWORD *)((char *)v5 + 20) = v9;
  }
  *((_DWORD *)v5 + 8) = v6;
  result = v5;
  *((_DWORD *)v5 + 9) = v7;
  return result;
}


// ============================================================

// Address: 0x5283ec
// Original: _ZNK35CTaskComplexTurnToFaceEntityOrCoord11GetTaskTypeEv
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::GetTaskType(void)
int __fastcall CTaskComplexTurnToFaceEntityOrCoord::GetTaskType(CTaskComplexTurnToFaceEntityOrCoord *this)
{
  return 920;
}


// ============================================================

// Address: 0x5283f4
// Original: _ZN35CTaskComplexTurnToFaceEntityOrCoord9SerializeEv
// Demangled: CTaskComplexTurnToFaceEntityOrCoord::Serialize(void)
void __fastcall CTaskComplexTurnToFaceEntityOrCoord::Serialize(CTaskComplexTurnToFaceEntityOrCoord *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r0
  int v6; // r6
  CGenericGameStorage *v7; // r5
  int v8; // r2
  int v9; // r2
  CVehicle *v10; // r0
  int v11; // r1
  int v12; // r5
  int v13; // r0
  CGenericGameStorage *v14; // r5
  int v15; // r2
  CGenericGameStorage *v16; // r0
  CGenericGameStorage *v17; // r6
  int v18; // r2
  CGenericGameStorage *v19; // r5
  __int64 v20; // d16
  int v21; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexTurnToFaceEntityOrCoord *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexTurnToFaceEntityOrCoord *))(*(_DWORD *)this + 20))(this) != 920 )
  {
    v13 = (*(int (__fastcall **)(CTaskComplexTurnToFaceEntityOrCoord *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(920, v13);
    return;
  }
  v5 = *((_DWORD *)this + 3);
  if ( !v5 )
  {
    if ( UseDataFence )
      AddDataFence();
    v14 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v14 = 0;
    CGenericGameStorage::_SaveDataToWorkBuffer(v14, byte_4, v15);
    v16 = v14;
    goto LABEL_18;
  }
  v6 = *(_BYTE *)(v5 + 58) & 7;
  if ( UseDataFence )
    AddDataFence();
  v7 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v7 = v6;
  CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
  free(v7);
  v10 = (CVehicle *)*((_DWORD *)this + 3);
  v11 = *((_BYTE *)v10 + 58) & 7;
  if ( v11 == 2 )
  {
    v12 = GettPoolVehicleRef(v10);
    goto LABEL_15;
  }
  if ( v11 == 3 )
  {
    v12 = GettPoolPedRef(v10);
LABEL_15:
    if ( UseDataFence )
      AddDataFence();
    v17 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v17 = v12;
    CGenericGameStorage::_SaveDataToWorkBuffer(v17, byte_4, v18);
    v16 = v17;
LABEL_18:
    free(v16);
  }
  if ( UseDataFence )
    AddDataFence();
  CGenericGameStorage::_SaveDataToWorkBuffer(
    (CTaskComplexTurnToFaceEntityOrCoord *)((char *)this + 16),
    (char *)&stderr + 1,
    v9);
  if ( UseDataFence )
    AddDataFence();
  v19 = (CGenericGameStorage *)malloc(0xCu);
  v20 = *(_QWORD *)((char *)this + 20);
  *((_DWORD *)v19 + 2) = *((_DWORD *)this + 7);
  *(_QWORD *)v19 = v20;
  CGenericGameStorage::_SaveDataToWorkBuffer(v19, &byte_9[3], v21);
  j_free(v19);
}


// ============================================================

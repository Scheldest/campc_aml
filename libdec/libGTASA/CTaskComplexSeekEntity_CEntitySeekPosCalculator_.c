
// Address: 0x18eaf0
// Original: j__ZN22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorE10CreateTaskEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculator>::CreateTask(void)
// attributes: thunk
int CTaskComplexSeekEntity<CEntitySeekPosCalculator>::CreateTask()
{
  return _ZN22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorE10CreateTaskEv();
}


// ============================================================

// Address: 0x19d27c
// Original: j__ZNK22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorE13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculator>::CreateSubTask(int,CPed *)
// attributes: thunk
int CTaskComplexSeekEntity<CEntitySeekPosCalculator>::CreateSubTask(void)
{
  return _ZNK22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorE13CreateSubTaskEiP4CPed();
}


// ============================================================

// Address: 0x494b70
// Original: _ZN22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorE10CreateTaskEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculator>::CreateTask(void)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculator>::CreateTask(int a1, int a2, int a3)
{
  char v3; // r4
  char *v4; // r1
  int v5; // r2
  char v6; // r4
  int Vehicle; // r0
  char v8; // r4
  char v9; // r4
  CEntity *v10; // r4
  int v11; // r5
  char v12; // r2
  CPools *v14; // [sp+0h] [bp-10h] BYREF
  _DWORD v15[3]; // [sp+4h] [bp-Ch] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, byte_4, a3);
  switch ( v15[0] )
  {
    case 2:
      v8 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, (char *)&stderr + 2, v5);
        UseDataFence = v8;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, byte_4, v5);
      v4 = (char *)v14 + 1;
      if ( v14 != (CPools *)-1 )
      {
        Vehicle = CPools::GetVehicle(v14, (int)v4);
        goto LABEL_18;
      }
      break;
    case 4:
      v9 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, (char *)&stderr + 2, v5);
        UseDataFence = v9;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, byte_4, v5);
      v4 = (char *)v14 + 1;
      if ( v14 != (CPools *)-1 )
      {
        Vehicle = CPools::GetObject(v14, (int)v4);
        goto LABEL_18;
      }
      break;
    case 3:
      v6 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, (char *)&stderr + 2, v5);
        UseDataFence = v6;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, byte_4, v5);
      v4 = (char *)v14 + 1;
      if ( v14 != (CPools *)-1 )
      {
        Vehicle = CPools::GetPed(v14, (int)v4);
LABEL_18:
        v10 = (CEntity *)Vehicle;
        goto LABEL_20;
      }
      break;
  }
  v10 = 0;
LABEL_20:
  v11 = CTask::operator new((CTask *)&dword_4C, (unsigned int)v4);
  CTaskComplex::CTaskComplex((CTaskComplex *)v11);
  *(_QWORD *)(v11 + 24) = 0x400000003F800000LL;
  *(_QWORD *)(v11 + 32) = 0x4000000000000000LL;
  *(_QWORD *)(v11 + 16) = 0x3E80000C350LL;
  *(_WORD *)(v11 + 48) = 0;
  *(_WORD *)(v11 + 60) = 0;
  *(_DWORD *)(v11 + 40) = 0;
  *(_DWORD *)(v11 + 44) = 0;
  *(_DWORD *)(v11 + 52) = 0;
  *(_DWORD *)(v11 + 56) = 0;
  *(_DWORD *)(v11 + 68) = 6;
  v12 = *(_BYTE *)(v11 + 72);
  *(_DWORD *)v11 = &off_668930;
  *(_DWORD *)(v11 + 64) = &off_66896C;
  *(_BYTE *)(v11 + 72) = v12 & 0xF0 | 3;
  *(_DWORD *)(v11 + 12) = v10;
  if ( v10 )
    CEntity::RegisterReference(v10, (CEntity **)(v11 + 12));
  return v11;
}


// ============================================================

// Address: 0x4983a0
// Original: _ZN22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorED2Ev
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculator>::~CTaskComplexSeekEntity()
void __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculator>::~CTaskComplexSeekEntity(CEntity **a1)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = a1 + 3;
  v2 = a1[3];
  *a1 = (CEntity *)&off_668930;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8((CTaskComplex *)a1);
}


// ============================================================

// Address: 0x4983cc
// Original: _ZN22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorED0Ev
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculator>::~CTaskComplexSeekEntity()
void __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculator>::~CTaskComplexSeekEntity(CEntity **a1)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = a1 + 3;
  v2 = a1[3];
  *a1 = (CEntity *)&off_668930;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex((CTaskComplex *)a1);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4983fc
// Original: _ZNK22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorE5CloneEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculator>::Clone(void)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculator>::Clone(int a1, unsigned int a2)
{
  int v3; // r5
  __int64 v4; // d8
  __int64 v5; // d9
  CEntity *v6; // r6
  int v7; // r8
  char v8; // r9
  char v9; // r3
  char v10; // r0

  v3 = CTask::operator new((CTask *)&dword_4C, a2);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(CEntity **)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 36);
  v8 = *(_BYTE *)(a1 + 72);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 16) = v4;
  *(_QWORD *)(v3 + 24) = v5;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = v7;
  *(_WORD *)(v3 + 48) = 0;
  *(_WORD *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  v9 = *(_BYTE *)(v3 + 72);
  *(_DWORD *)v3 = &off_668930;
  *(_DWORD *)(v3 + 64) = &off_66896C;
  *(_DWORD *)(v3 + 68) = 6;
  v10 = v8 & 1 | v9 & 0xF0 | 2;
  *(_BYTE *)(v3 + 72) = v10;
  *(_DWORD *)(v3 + 12) = v6;
  if ( v6 )
  {
    CEntity::RegisterReference(v6, (CEntity **)(v3 + 12));
    v10 = *(_BYTE *)(v3 + 72);
  }
  *(_DWORD *)(v3 + 68) = *(_DWORD *)(a1 + 68);
  *(_BYTE *)(v3 + 72) = v10 & 0xF7 | *(_BYTE *)(a1 + 72) & 8;
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v3 + 68) = *(_DWORD *)(a1 + 68);
  return v3;
}


// ============================================================

// Address: 0x4984c4
// Original: _ZNK22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorE11GetTaskTypeEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculator>::GetTaskType(void)
int CTaskComplexSeekEntity<CEntitySeekPosCalculator>::GetTaskType()
{
  return 907;
}


// ============================================================

// Address: 0x4984cc
// Original: _ZN22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorE13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculator>::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculator>::MakeAbortable(int a1, int a2, int a3)
{
  int v4; // lr
  int result; // r0
  int v6; // r1

  if ( !a3 )
  {
    *(_DWORD *)(a1 + 16) = -1;
    v4 = CTimer::m_snTimeInMilliseconds;
    *(_BYTE *)(a1 + 60) = 1;
    *(_DWORD *)(a1 + 52) = v4;
    *(_DWORD *)(a1 + 56) = -1;
  }
  result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 28))(*(_DWORD *)(a1 + 8));
  if ( result == 1 )
  {
    v6 = CTimer::m_snTimeInMilliseconds;
    *(_BYTE *)(a1 + 48) = 1;
    *(_DWORD *)(a1 + 40) = v6;
    *(_DWORD *)(a1 + 44) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x49851c
// Original: _ZN22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorE9SerializeEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculator>::Serialize(void)
void __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculator>::Serialize(_DWORD *a1)
{
  char v2; // r6
  __int16 v3; // r2
  __int16 v4; // r4
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  int v8; // r2
  int v9; // r8
  char v10; // r5
  __int16 v11; // r2
  __int16 v12; // r4
  CGenericGameStorage *v13; // r6
  int v14; // r2
  CGenericGameStorage *v15; // r6
  int v16; // r2
  int v17; // r0
  int v18; // r8
  char v19; // r6
  __int16 v20; // r2
  __int16 v21; // r4
  CGenericGameStorage *v22; // r5
  int v23; // r2
  CGenericGameStorage *v24; // r5
  int v25; // r2
  CPools *v26; // r0
  int v27; // r1
  int VehicleRef; // r8
  int v29; // r0
  char v30; // r5
  __int16 v31; // r2
  __int16 v32; // r6
  CGenericGameStorage *v33; // r4
  int v34; // r2
  CGenericGameStorage *v35; // r4
  int v36; // r2
  char v37; // r6
  __int16 v38; // r2
  __int16 v39; // r4
  CGenericGameStorage *v40; // r5
  int v41; // r2
  char v42; // r6
  __int16 v43; // r2
  __int16 v44; // r4
  CGenericGameStorage *v45; // r5
  int v46; // r2
  char v47; // r6
  __int16 v48; // r2
  __int16 v49; // r4
  CGenericGameStorage *v50; // r5
  int v51; // r2
  CGenericGameStorage *v52; // r5
  int v53; // r2
  _BYTE v54[128]; // [sp+4h] [bp-9Ch] BYREF

  v2 = UseDataFence;
  if ( UseDataFence )
  {
    v3 = currentSaveFenceCount;
    UseDataFence = 0;
    ++currentSaveFenceCount;
    v4 = v3 + DataFence;
    v5 = (CGenericGameStorage *)malloc(2u);
    *(_WORD *)v5 = v4;
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, (char *)&stderr + 2, v6);
    free(v5);
    UseDataFence = v2;
  }
  v7 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v7 = 0;
  CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
  free(v7);
  v9 = (*(int (__fastcall **)(_DWORD *))(*a1 + 20))(a1);
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    v11 = currentSaveFenceCount;
    UseDataFence = 0;
    ++currentSaveFenceCount;
    v12 = v11 + DataFence;
    v13 = (CGenericGameStorage *)malloc(2u);
    *(_WORD *)v13 = v12;
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, (char *)&stderr + 2, v14);
    free(v13);
    UseDataFence = v10;
  }
  v15 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v15 = v9;
  CGenericGameStorage::_SaveDataToWorkBuffer(v15, byte_4, v16);
  free(v15);
  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 20))(a1) == 907 )
  {
    v17 = a1[3];
    if ( v17 )
    {
      v18 = *(_BYTE *)(v17 + 58) & 7;
      v19 = UseDataFence;
      if ( UseDataFence )
      {
        v20 = currentSaveFenceCount;
        UseDataFence = 0;
        ++currentSaveFenceCount;
        v21 = v20 + DataFence;
        v22 = (CGenericGameStorage *)malloc(2u);
        *(_WORD *)v22 = v21;
        CGenericGameStorage::_SaveDataToWorkBuffer(v22, (char *)&stderr + 2, v23);
        free(v22);
        UseDataFence = v19;
      }
      v24 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v24 = v18;
      CGenericGameStorage::_SaveDataToWorkBuffer(v24, byte_4, v25);
      free(v24);
      v26 = (CPools *)a1[3];
      v27 = *((_BYTE *)v26 + 58) & 7;
      switch ( v27 )
      {
        case 2:
          if ( v26 )
            VehicleRef = CPools::GetVehicleRef(v26, (CVehicle *)((char *)&stderr + 2));
          else
            VehicleRef = -1;
          v37 = UseDataFence;
          if ( UseDataFence )
          {
            v38 = currentSaveFenceCount;
            UseDataFence = 0;
            ++currentSaveFenceCount;
            v39 = v38 + DataFence;
            v40 = (CGenericGameStorage *)malloc(2u);
            *(_WORD *)v40 = v39;
            CGenericGameStorage::_SaveDataToWorkBuffer(v40, (char *)&stderr + 2, v41);
            free(v40);
            UseDataFence = v37;
          }
          goto LABEL_34;
        case 4:
          if ( v26 )
            VehicleRef = CPools::GetObjectRef(v26, (CObject *)byte_4);
          else
            VehicleRef = -1;
          v42 = UseDataFence;
          if ( UseDataFence )
          {
            v43 = currentSaveFenceCount;
            UseDataFence = 0;
            ++currentSaveFenceCount;
            v44 = v43 + DataFence;
            v45 = (CGenericGameStorage *)malloc(2u);
            *(_WORD *)v45 = v44;
            CGenericGameStorage::_SaveDataToWorkBuffer(v45, (char *)&stderr + 2, v46);
            free(v45);
            UseDataFence = v42;
          }
          goto LABEL_34;
        case 3:
          if ( v26 )
            VehicleRef = CPools::GetPedRef(v26, (CPed *)((char *)&stderr + 3));
          else
            VehicleRef = -1;
          v47 = UseDataFence;
          if ( UseDataFence )
          {
            v48 = currentSaveFenceCount;
            UseDataFence = 0;
            ++currentSaveFenceCount;
            v49 = v48 + DataFence;
            v50 = (CGenericGameStorage *)malloc(2u);
            *(_WORD *)v50 = v49;
            CGenericGameStorage::_SaveDataToWorkBuffer(v50, (char *)&stderr + 2, v51);
            free(v50);
            UseDataFence = v47;
          }
LABEL_34:
          v52 = (CGenericGameStorage *)malloc(4u);
          *(_DWORD *)v52 = VehicleRef;
          CGenericGameStorage::_SaveDataToWorkBuffer(v52, byte_4, v53);
          j_free(v52);
          break;
      }
    }
    else
    {
      v30 = UseDataFence;
      if ( UseDataFence )
      {
        v31 = currentSaveFenceCount;
        UseDataFence = 0;
        ++currentSaveFenceCount;
        v32 = v31 + DataFence;
        v33 = (CGenericGameStorage *)malloc(2u);
        *(_WORD *)v33 = v32;
        CGenericGameStorage::_SaveDataToWorkBuffer(v33, (char *)&stderr + 2, v34);
        free(v33);
        UseDataFence = v30;
      }
      v35 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v35 = 0;
      CGenericGameStorage::_SaveDataToWorkBuffer(v35, byte_4, v36);
      j_free(v35);
    }
  }
  else
  {
    v29 = (*(int (__fastcall **)(_DWORD *))(*a1 + 20))(a1);
    sub_5E6BC0(v54, "ERROR - class %d is not type %d serialize is not this class expected", v29, 907);
  }
}


// ============================================================

// Address: 0x498930
// Original: _ZN22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorE17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculator>::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculator>::CreateNextSubTask(int a1, int a2)
{
  int v4; // r0
  CTaskSimpleStandStill *v5; // r6
  CTaskSimpleCarDrive *v6; // r0
  int v7; // r0
  bool v9; // zf
  float32x2_t *v10; // r0
  float32x2_t *v11; // r1
  float32x2_t v12; // d16
  unsigned __int64 v13; // d0
  CTaskSimpleStandStill *v14; // r0
  _BYTE v15[48]; // [sp+8h] [bp-30h] BYREF

  if ( !*(_DWORD *)(a1 + 12) )
    return 0;
  v4 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8));
  v5 = 0;
  if ( v4 <= 718 )
  {
    if ( v4 != 203 )
    {
      if ( v4 == 219 )
      {
        v5 = 0;
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v15, -1, 0, 0, 8.0);
        CTaskSimpleStandStill::ProcessPed(v14, (CPed *)a2);
        CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v15);
      }
      else if ( v4 == 704 )
      {
        v5 = 0;
        if ( !(*(unsigned __int8 *)(a2 + 1157) << 31) )
        {
          v6 = (CTaskSimpleCarDrive *)CTask::operator new((CTask *)&dword_70, 0x2CEu);
          CTaskSimpleCarDrive::CTaskSimpleCarDrive(v6, *(CVehicle **)(a2 + 1424), 0, 0);
          *(_DWORD *)(v7 + 96) = 2000;
          *(_WORD *)(v7 + 108) = 0;
          *(_DWORD *)(v7 + 100) = 0;
          *(_DWORD *)(v7 + 104) = 0;
          v5 = (CTaskSimpleStandStill *)v7;
          *(_DWORD *)v7 = &off_66572C;
        }
      }
      return (int)v5;
    }
    if ( *(_DWORD *)(a2 + 256) )
    {
      v5 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, 0x2CEu);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v5, 2000, 0, 0, 8.0);
      return (int)v5;
    }
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 44))(a1, a2);
  }
  if ( v4 == 719 )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 44))(a1, a2);
  v9 = v4 == 903;
  if ( v4 != 903 )
    v9 = v4 == 906;
  if ( !v9 )
    return (int)v5;
  v10 = *(float32x2_t **)(a2 + 20);
  v11 = v10 + 6;
  if ( !v10 )
    v11 = (float32x2_t *)(a2 + 4);
  v12.n64_u64[0] = vsub_f32((float32x2_t)v11->n64_u64[0], (float32x2_t)v11->n64_u64[0]).n64_u64[0];
  v13 = vmul_f32(v12, v12).n64_u64[0];
  if ( (float)((float)(*(float *)&v13 + *((float *)&v13 + 1)) + 0.0) <= (float)(*(float *)(a1 + 24) * *(float *)(a1 + 24)) )
    *(_BYTE *)(a1 + 72) |= 4u;
  return sub_19D278();
}


// ============================================================

// Address: 0x498ab4
// Original: _ZN22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorE18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculator>::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculator>::CreateFirstSubTask(int a1, int a2)
{
  __int64 v4; // kr00_8
  unsigned int v5; // r1
  bool v6; // zf
  float32x2_t *v7; // r0
  float32x2_t *v8; // r1
  float32x2_t v9; // d16
  unsigned __int64 v10; // d0
  CTaskSimpleTired *v11; // r0
  CTaskComplexLeaveCar *v12; // r0

  v4 = *(_QWORD *)(a1 + 16);
  v5 = CTimer::m_snTimeInMilliseconds;
  *(_BYTE *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 40) = v5;
  *(_DWORD *)(a1 + 44) = HIDWORD(v4);
  if ( (_DWORD)v4 != -1 )
  {
    *(_BYTE *)(a1 + 60) = 1;
    *(_DWORD *)(a1 + 52) = v5;
    *(_DWORD *)(a1 + 56) = v4;
  }
  if ( *(_DWORD *)(a1 + 12) )
  {
    v6 = *(unsigned __int8 *)(a2 + 1157) << 31 == 0;
    if ( *(unsigned __int8 *)(a2 + 1157) << 31 )
      v6 = *(_DWORD *)(a2 + 1424) == 0;
    if ( v6 )
    {
      v7 = *(float32x2_t **)(a2 + 20);
      v8 = v7 + 6;
      if ( !v7 )
        v8 = (float32x2_t *)(a2 + 4);
      v9.n64_u64[0] = vsub_f32((float32x2_t)v8->n64_u64[0], (float32x2_t)v8->n64_u64[0]).n64_u64[0];
      v10 = vmul_f32(v9, v9).n64_u64[0];
      if ( (float)((float)(*(float *)&v10 + *((float *)&v10 + 1)) + 0.0) < (float)(*(float *)(a1 + 24)
                                                                                 * *(float *)(a1 + 24)) )
      {
        *(_BYTE *)(a1 + 72) |= 4u;
        CPed::SetMoveState(a2, 1);
      }
      sub_19D278();
    }
    else
    {
      v12 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v5);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar(v12, *(CVehicle **)(a2 + 1424), 0, 0, 1, 0);
    }
  }
  else
  {
    v11 = (CTaskSimpleTired *)CTask::operator new((CTask *)&dword_1C, v5);
    CTaskSimpleTired::CTaskSimpleTired(v11, 1000);
  }
}


// ============================================================

// Address: 0x498bb4
// Original: _ZN22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorE14ControlSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculator>::ControlSubTask(CPed *)
CTaskSimpleStandStill *__fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculator>::ControlSubTask(
        int a1,
        CPedGroups *this,
        const CPed *a3)
{
  int v5; // r4
  CTaskSimpleStandStill *v6; // r6
  int v7; // r8
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  bool v11; // zf
  int v12; // r0
  unsigned int v13; // r0
  unsigned int v14; // r1
  __int64 v15; // r0
  unsigned int v16; // r1
  int v17; // r0
  float *v18; // r4
  int v19; // r1
  float *v20; // r2
  float *v21; // r0
  float v22; // s2
  float v23; // s4
  float v24; // s16
  float v25; // s18
  float v26; // s20
  float *v27; // r1
  float v28; // s4
  float v29; // s6
  int v30; // r0
  float v31; // s18
  float v32; // s20
  float v33; // s16
  int v34; // r0
  CGeneral *RadianAngleBetweenPoints; // r0
  float v36; // r1
  float v37; // r0
  unsigned int v38; // r1
  int v39; // r0
  float *v40; // r1
  float v41; // s16
  float v42; // s0
  unsigned int v43; // r1
  int v44; // r0
  char v45; // r1
  float v46; // s0
  unsigned int v47; // r1
  double v48; // d16
  __int64 v49; // kr10_8
  CPed *v50; // r0
  int PlayerPed; // r0
  float v53; // [sp+0h] [bp-C8h]
  int v54[3]; // [sp+14h] [bp-B4h] BYREF
  _BYTE v55[64]; // [sp+20h] [bp-A8h] BYREF
  int v56; // [sp+60h] [bp-68h]
  int v57; // [sp+64h] [bp-64h]
  double v58; // [sp+68h] [bp-60h] BYREF
  float v59; // [sp+70h] [bp-58h]
  double v60; // [sp+78h] [bp-50h] BYREF
  float v61; // [sp+80h] [bp-48h]
  double v62; // [sp+88h] [bp-40h] BYREF
  float v63; // [sp+90h] [bp-38h]

  v5 = *(_DWORD *)(a1 + 12);
  v6 = *(CTaskSimpleStandStill **)(a1 + 8);
  if ( v5 && (*(_BYTE *)(v5 + 58) & 7) == 3 && CPedGroups::AreInSameGroup(this, (const CPed *)v5, a3) == 1 )
  {
    if ( *(unsigned __int8 *)(v5 + 69) << 31 )
      goto LABEL_15;
    v7 = *(_DWORD *)(v5 + 1388);
    if ( v7 && (*(_BYTE *)(v7 + 58) & 7) == 2 )
    {
      v8 = *((_DWORD *)this + 347);
      v9 = v8 == v7;
      if ( v8 != v7 )
        v9 = *((_DWORD *)this + 354) == v7;
      if ( v9 )
        goto LABEL_67;
    }
    v7 = *(_DWORD *)(v5 + 1416);
    if ( !v7 || (*(_BYTE *)(v7 + 58) & 7) != 2 )
      goto LABEL_15;
    v10 = *((_DWORD *)this + 347);
    v11 = v10 == v7;
    if ( v10 != v7 )
      v11 = *((_DWORD *)this + 354) == v7;
    if ( v11 )
    {
LABEL_67:
      if ( *(_DWORD *)(v7 + 1440) != 5 )
        v7 = 0;
    }
    else
    {
LABEL_15:
      v7 = 0;
    }
    v12 = *((_DWORD *)this + 64);
    if ( v7 || !v12 )
    {
      if ( v7
        && !v12
        && (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8)) != 203
        && (*(int (__fastcall **)(_DWORD, CPedGroups *, int, _DWORD))(**(_DWORD **)(a1 + 8) + 28))(
             *(_DWORD *)(a1 + 8),
             this,
             1,
             0) == 1 )
      {
        v17 = *((_DWORD *)this + 5);
        v18 = (float *)(v7 + 4);
        v19 = *(int *)((char *)&dword_14 + v7);
        v20 = (float *)(v17 + 48);
        if ( !v17 )
          v20 = (float *)((char *)this + 4);
        v21 = (float *)(v7 + 4);
        v22 = v20[1];
        v23 = v20[2];
        if ( v19 )
          v21 = (float *)(v19 + 48);
        *(float *)&v62 = *v21 - *v20;
        v24 = *(float *)&v62;
        *((float *)&v62 + 1) = v21[1] - v22;
        v25 = *((float *)&v62 + 1);
        v26 = v21[2] - v23;
        v63 = v26;
        v61 = v26;
        v60 = v62;
        CVector::Normalise((CVector *)&v60);
        v27 = (float *)(v7 + 4);
        v28 = v25 - (float)(*((float *)&v60 + 1) * 0.25);
        v29 = v26 - (float)(v61 * 0.25);
        *((float *)&v62 + 1) = v28;
        v63 = v29;
        v30 = *(int *)((char *)&dword_14 + v7);
        if ( v30 )
          v27 = (float *)(v30 + 48);
        v31 = *v27 - (float)(v24 - (float)(*(float *)&v60 * 0.25));
        *(float *)&v62 = v31;
        v32 = v27[1] - v28;
        *((float *)&v62 + 1) = v32;
        v33 = v27[2] - v29;
        v63 = v33;
        v59 = v33;
        v58 = v62;
        if ( CPedPlacement::FindZCoorForPed((CPedPlacement *)&v58, (CVector *)v27) == 1 )
        {
          v63 = v59;
          v33 = v59;
          v62 = v58;
          v32 = *((float *)&v58 + 1);
          v31 = *(float *)&v58;
        }
        v34 = *(int *)((char *)&dword_14 + v7);
        if ( v34 )
          v18 = (float *)(v34 + 48);
        *(float *)&v62 = v31 - *v18;
        *((float *)&v62 + 1) = v32 - v18[1];
        v63 = v33 - v18[2];
        v56 = 0;
        v57 = 0;
        Invert(*(const CMatrix **)((char *)&dword_14 + v7), (CMatrix *)v55);
        CVector::FromMultiply3X3((CVector *)v54, (const CMatrix *)v55, (const CVector *)&v62);
        RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                                 (CGeneral *)LODWORD(v60),
                                                 *((float *)&v60 + 1),
                                                 0.0,
                                                 0.0,
                                                 v53);
        v37 = COERCE_FLOAT(CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v36));
        CPed::AttachPedToEntity(
          (int)this,
          (CEntity *)v7,
          v54[0],
          v54[1],
          v54[2],
          (unsigned int)v37,
          0.2,
          *((_DWORD *)this + 7 * *((char *)this + 1820) + 361));
        v6 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v38);
        CTaskSimpleStandStill::CTaskSimpleStandStill(v6, 2000, 0, 0, 8.0);
        CMatrix::~CMatrix((CMatrix *)v55);
        return v6;
      }
    }
    else
    {
      CPed::DettachPedFromEntity(this);
    }
  }
  if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8)) == 906
    || (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8)) == 903 )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      if ( *(_BYTE *)(a1 + 60)
        && (!*(_BYTE *)(a1 + 61)
          ? (v14 = *(_DWORD *)(a1 + 52), v13 = CTimer::m_snTimeInMilliseconds)
          : (v13 = CTimer::m_snTimeInMilliseconds, *(_BYTE *)(a1 + 61) = 0, *(_DWORD *)(a1 + 52) = v13, v14 = v13),
            v14 + *(_DWORD *)(a1 + 56) <= v13) )
      {
        if ( (*(int (__fastcall **)(_DWORD, CPedGroups *, int, _DWORD))(**(_DWORD **)(a1 + 8) + 28))(
               *(_DWORD *)(a1 + 8),
               this,
               1,
               0) == 1 )
        {
          if ( *(unsigned __int8 *)(a1 + 72) << 31 )
          {
            v6 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_1C, v16);
            CTaskSimpleTired::CTaskSimpleTired(v6, 1000);
          }
          else
          {
            v6 = 0;
          }
        }
      }
      else if ( *(_BYTE *)(a1 + 48) )
      {
        if ( *(_BYTE *)(a1 + 49) )
        {
          LODWORD(v15) = CTimer::m_snTimeInMilliseconds;
          *(_BYTE *)(a1 + 49) = 0;
          *(_DWORD *)(a1 + 40) = v15;
          HIDWORD(v15) = v15;
        }
        else
        {
          HIDWORD(v15) = *(_DWORD *)(a1 + 40);
          LODWORD(v15) = CTimer::m_snTimeInMilliseconds;
        }
        if ( HIDWORD(v15) + *(_DWORD *)(a1 + 44) <= (unsigned int)v15 )
        {
          HIDWORD(v15) = *(_DWORD *)(a1 + 20);
          *(_BYTE *)(a1 + 48) = 1;
          *(_QWORD *)(a1 + 40) = v15;
          v39 = *((_DWORD *)this + 5);
          v40 = (float *)(v39 + 48);
          if ( !v39 )
            v40 = (float *)((char *)this + 4);
          v41 = (float)((float)((float)(*v40 - *v40) * (float)(*v40 - *v40))
                      + (float)((float)(v40[1] - *v40) * (float)(v40[1] - *v40)))
              + 0.0;
          if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8)) == 906 )
          {
            v42 = *(float *)(a1 + 32);
            if ( v42 == 0.0 || v41 >= (float)((float)(v42 + -1.0) * (float)(v42 + -1.0)) )
            {
              CTaskComplexFollowNodeRoute::SetTarget(
                *(CTaskComplexFollowNodeRoute **)(a1 + 8),
                this,
                (const CVector *)&v62,
                *(float *)(a1 + 24),
                *(float *)(a1 + 28),
                *(float *)(a1 + 36),
                0);
            }
            else if ( (*(int (__fastcall **)(_DWORD, CPedGroups *, int, _DWORD))(**(_DWORD **)(a1 + 8) + 28))(
                        *(_DWORD *)(a1 + 8),
                        this,
                        1,
                        0) == 1 )
            {
              v6 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&word_28, v43);
              CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
                v6,
                *(_DWORD *)(a1 + 68),
                (const CVector *)v55,
                *(float *)(a1 + 24),
                *(float *)(a1 + 28),
                0,
                0);
              *((_BYTE *)v6 + 36) = *(_BYTE *)(a1 + 72) & 8 | *((_BYTE *)v6 + 36) & 0xF7;
              return v6;
            }
          }
          else
          {
            v44 = *(_DWORD *)(a1 + 8);
            v45 = *(_BYTE *)(v44 + 36);
            if ( (v45 & 0x10) == 0 )
            {
              v46 = *(float *)(a1 + 32);
              if ( v46 == 0.0 || v41 <= (float)((float)(v46 + 1.0) * (float)(v46 + 1.0)) )
              {
                v48 = v62;
                v49 = *(_QWORD *)(a1 + 24);
                *(float *)(v44 + 24) = v63;
                *(_QWORD *)(v44 + 28) = v49;
                *(_BYTE *)(v44 + 36) = v45 | 4;
                *(double *)(v44 + 16) = v48;
              }
              else if ( (*(int (__fastcall **)(int, CPedGroups *, int, _DWORD))(*(_DWORD *)v44 + 28))(v44, this, 1, 0) == 1 )
              {
                v6 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_60, v47);
                CTaskComplexFollowNodeRoute::CTaskComplexFollowNodeRoute(
                  v6,
                  *(_DWORD *)(a1 + 68),
                  (const CVector *)v55,
                  *(float *)(a1 + 24),
                  *(float *)(a1 + 28),
                  *(float *)(a1 + 36),
                  0,
                  -1,
                  1);
                return v6;
              }
            }
          }
          v6 = *(CTaskSimpleStandStill **)(a1 + 8);
        }
      }
    }
    else if ( (*(int (__fastcall **)(_DWORD, CPedGroups *, int, _DWORD))(**(_DWORD **)(a1 + 8) + 28))(
                *(_DWORD *)(a1 + 8),
                this,
                1,
                0) )
    {
      v6 = 0;
    }
  }
  v50 = *(CPed **)(a1 + 12);
  if ( v50 )
  {
    if ( (*((_BYTE *)v50 + 58) & 7) == 3 && CPed::IsPlayer(v50) == 1 )
    {
      PlayerPed = FindPlayerPed(-1);
      if ( CPedGroupMembership::IsMember(
             (CPedGroupMembership *)&CPedGroups::ms_groups[181 * *(_DWORD *)(*(_DWORD *)(PlayerPed + 1092) + 56) + 2],
             this) == 1
        && (unsigned int)(*((_DWORD *)this + 276) - 5) <= 2
        && !((CTimer::m_FrameCounter + *((unsigned __int16 *)this + 18)) << 18) )
      {
        CPed::Say(this, 0x5Bu, 0, 1.0, 0, 0, 0);
      }
    }
  }
  return v6;
}


// ============================================================

// Address: 0x49913c
// Original: _ZNK22CTaskComplexSeekEntityI24CEntitySeekPosCalculatorE13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculator>::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculator>::CreateSubTask(int a1, int a2, int a3)
{
  int v5; // r4
  unsigned int v6; // r1
  CTaskComplexTurnToFaceEntityOrCoord *v7; // r6
  CTaskSimpleStandStill *v8; // r5
  _BYTE v10[28]; // [sp+14h] [bp-1Ch] BYREF

  v5 = 0;
  if ( a2 > 718 )
  {
    if ( a2 > 905 )
    {
      if ( a2 == 906 )
      {
        v5 = CTask::operator new((CTask *)&dword_60, 0x38Au);
        CTaskComplexFollowNodeRoute::CTaskComplexFollowNodeRoute(
          (CTaskComplexFollowNodeRoute *)v5,
          *(_DWORD *)(a1 + 68),
          (const CVector *)v10,
          *(float *)(a1 + 24),
          *(float *)(a1 + 28),
          *(float *)(a1 + 36),
          0,
          -1,
          1);
      }
      else if ( a2 == 920 )
      {
        v5 = CTask::operator new((CTask *)&word_28, 0x398u);
        CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(
          (CTaskComplexTurnToFaceEntityOrCoord *)v5,
          *(CEntity **)(a1 + 12),
          0.5,
          0.2);
      }
    }
    else if ( a2 == 719 )
    {
      v5 = CTask::operator new((CTask *)&dword_70, 0x2CFu);
      CTaskSimpleCarDrive::CTaskSimpleCarDrive((CTaskSimpleCarDrive *)v5, *(CVehicle **)(a3 + 1424), 0, 0);
      *(_DWORD *)(v5 + 96) = 2000;
      *(_WORD *)(v5 + 108) = 0;
      *(_DWORD *)(v5 + 100) = 0;
      *(_DWORD *)(v5 + 104) = 0;
      *(_DWORD *)v5 = &off_66572C;
    }
    else if ( a2 == 903 )
    {
      v5 = CTask::operator new((CTask *)&word_28, 0x387u);
      CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
        (CTaskComplexGoToPointAndStandStill *)v5,
        *(_DWORD *)(a1 + 68),
        (const CVector *)v10,
        *(float *)(a1 + 24),
        *(float *)(a1 + 28),
        0,
        0);
      *(_BYTE *)(v5 + 36) = *(_BYTE *)(a1 + 72) & 8 | *(_BYTE *)(v5 + 36) & 0xF7;
    }
  }
  else if ( a2 > 243 )
  {
    if ( a2 == 244 )
    {
      v5 = CTask::operator new((CTask *)&dword_40, 0xF4u);
      CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v5);
      if ( (*(_BYTE *)(a1 + 72) & 2) != 0 )
      {
        v7 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v6);
        CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v7, *(CEntity **)(a1 + 12), 0.5, 0.2);
        CTaskComplexSequence::AddTask((CTaskComplexSequence *)v5, v7);
      }
      v8 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v6);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v8, 100, 0, 0, 8.0);
      CTaskComplexSequence::AddTask((CTaskComplexSequence *)v5, v8);
    }
    else if ( a2 == 704 )
    {
      v5 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, *(CVehicle **)(a3 + 1424), 0, 0, 1, 0);
    }
  }
  else if ( a2 == 203 )
  {
    v5 = CTask::operator new((CTask *)&dword_20, 0xCBu);
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v5, 2000, 0, 0, 8.0);
  }
  else if ( a2 == 219 )
  {
    v5 = CTask::operator new((CTask *)&dword_1C, 0xDBu);
    CTaskSimpleTired::CTaskSimpleTired((CTaskSimpleTired *)v5, 1000);
  }
  return v5;
}


// ============================================================

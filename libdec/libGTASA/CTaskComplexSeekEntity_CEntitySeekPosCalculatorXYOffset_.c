
// Address: 0x19bb64
// Original: j__ZNK22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetE13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateSubTask(int,CPed *)
// attributes: thunk
int CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateSubTask()
{
  return _ZNK22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetE13CreateSubTaskEiP4CPed();
}


// ============================================================

// Address: 0x19cf74
// Original: j__ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetE10CreateTaskEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateTask(void)
// attributes: thunk
int CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateTask()
{
  return _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetE10CreateTaskEv();
}


// ============================================================

// Address: 0x495030
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetE10CreateTaskEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateTask(void)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateTask(int a1, int a2, int a3)
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
  v11 = CTask::operator new((CTask *)&dword_58, (unsigned int)v4);
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
  *(_DWORD *)(v11 + 68) = 0;
  *(_DWORD *)(v11 + 72) = 0;
  *(_DWORD *)(v11 + 76) = 0;
  *(_DWORD *)(v11 + 80) = 6;
  v12 = *(_BYTE *)(v11 + 84);
  *(_DWORD *)v11 = &off_668978;
  *(_DWORD *)(v11 + 64) = &off_66D3DC;
  *(_BYTE *)(v11 + 84) = v12 & 0xF0 | 3;
  *(_DWORD *)(v11 + 12) = v10;
  if ( v10 )
    CEntity::RegisterReference(v10, (CEntity **)(v11 + 12));
  return v11;
}


// ============================================================

// Address: 0x499324
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetED2Ev
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::~CTaskComplexSeekEntity()
void __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::~CTaskComplexSeekEntity(CEntity **a1)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = a1 + 3;
  v2 = a1[3];
  *a1 = (CEntity *)&off_668978;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8((CTaskComplex *)a1);
}


// ============================================================

// Address: 0x499350
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetED0Ev
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::~CTaskComplexSeekEntity()
void __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::~CTaskComplexSeekEntity(CEntity **a1)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = a1 + 3;
  v2 = a1[3];
  *a1 = (CEntity *)&off_668978;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex((CTaskComplex *)a1);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x499380
// Original: _ZNK22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetE5CloneEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::Clone(void)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::Clone(int a1, unsigned int a2)
{
  int v3; // r5
  __int64 v4; // d8
  __int64 v5; // d9
  CEntity *v6; // r9
  int v7; // r6
  char v8; // r8
  char v9; // r2
  char v10; // r0
  __int64 v11; // d16

  v3 = CTask::operator new((CTask *)&dword_58, a2);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(CEntity **)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 36);
  v8 = *(_BYTE *)(a1 + 84);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 16) = v4;
  *(_QWORD *)(v3 + 24) = v5;
  *(_DWORD *)(v3 + 80) = 6;
  v9 = *(_BYTE *)(v3 + 84);
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = v7;
  *(_WORD *)(v3 + 48) = 0;
  *(_WORD *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_DWORD *)v3 = &off_668978;
  *(_DWORD *)(v3 + 64) = &off_66D3DC;
  v10 = v8 & 1 | v9 & 0xF0 | 2;
  *(_BYTE *)(v3 + 84) = v10;
  *(_DWORD *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 12) = v6;
  if ( v6 )
  {
    CEntity::RegisterReference(v6, (CEntity **)(v3 + 12));
    v10 = *(_BYTE *)(v3 + 84);
  }
  v11 = *(_QWORD *)(a1 + 68);
  *(_DWORD *)(v3 + 76) = *(_DWORD *)(a1 + 76);
  *(_QWORD *)(v3 + 68) = v11;
  *(_DWORD *)(v3 + 80) = *(_DWORD *)(a1 + 80);
  *(_BYTE *)(v3 + 84) = v10 & 0xF7 | *(_BYTE *)(a1 + 84) & 8;
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v3 + 80) = *(_DWORD *)(a1 + 80);
  return v3;
}


// ============================================================

// Address: 0x49945c
// Original: _ZNK22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetE11GetTaskTypeEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::GetTaskType(void)
int CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::GetTaskType()
{
  return 907;
}


// ============================================================

// Address: 0x499464
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetE13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::MakeAbortable(int a1, int a2, int a3)
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

// Address: 0x4994b4
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetE9SerializeEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::Serialize(void)
void __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::Serialize(_DWORD *a1)
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
  *(_DWORD *)v7 = 3;
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

// Address: 0x4998d0
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetE17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateNextSubTask(int a1, int a2)
{
  int v4; // r0
  CTaskSimpleStandStill *v5; // r6
  CTaskSimpleCarDrive *v6; // r0
  int v7; // r0
  bool v8; // zf
  float32x2_t *v9; // r6
  float32x2_t *v10; // r0
  float32x2_t v11; // d16
  unsigned __int64 v12; // d0
  CTaskSimpleStandStill *v14; // r0
  float32x2_t v15[6]; // [sp+8h] [bp-30h] BYREF

  if ( *(_DWORD *)(a1 + 12) )
  {
    v4 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8));
    v5 = 0;
    if ( v4 > 718 )
    {
      if ( v4 != 719 )
      {
        v8 = v4 == 903;
        if ( v4 != 903 )
          v8 = v4 == 906;
        if ( v8 )
        {
          v9 = *(float32x2_t **)(a2 + 20);
          CEntitySeekPosCalculatorXYOffset::ComputeEntitySeekPos(
            (CEntitySeekPosCalculatorXYOffset *)(a1 + 64),
            (const CPed *)a2,
            *(const CEntity **)(a1 + 12),
            (CVector *)v15);
          v10 = v9 + 6;
          if ( !v9 )
            v10 = (float32x2_t *)(a2 + 4);
          v11.n64_u64[0] = vsub_f32((float32x2_t)v10->n64_u64[0], v15[0]).n64_u64[0];
          v12 = vmul_f32(v11, v11).n64_u64[0];
          if ( (float)((float)(*(float *)&v12 + *((float *)&v12 + 1)) + 0.0) <= (float)(*(float *)(a1 + 24)
                                                                                      * *(float *)(a1 + 24)) )
            *(_BYTE *)(a1 + 84) |= 4u;
          return CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateSubTask();
        }
        return (int)v5;
      }
    }
    else
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
    }
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 44))(a1, a2);
  }
  return 0;
}


// ============================================================

// Address: 0x499a68
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetE18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateFirstSubTask(int a1, CPed *a2)
{
  __int64 v4; // kr00_8
  unsigned int v5; // r1
  const CEntity *v6; // r2
  bool v7; // zf
  float32x2_t *v8; // r0
  float32x2_t *v9; // r1
  float32x2_t v10; // d16
  unsigned __int64 v11; // d0
  CTaskSimpleTired *v12; // r0
  CTaskComplexLeaveCar *v13; // r0
  float32x2_t v14[3]; // [sp+8h] [bp-18h] BYREF

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
  v6 = *(const CEntity **)(a1 + 12);
  if ( v6 )
  {
    v7 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
    if ( *((unsigned __int8 *)a2 + 1157) << 31 )
      v7 = *((_DWORD *)a2 + 356) == 0;
    if ( v7 )
    {
      CEntitySeekPosCalculatorXYOffset::ComputeEntitySeekPos(
        (CEntitySeekPosCalculatorXYOffset *)(a1 + 64),
        a2,
        v6,
        (CVector *)v14);
      v8 = (float32x2_t *)*((_DWORD *)a2 + 5);
      v9 = v8 + 6;
      if ( !v8 )
        v9 = (float32x2_t *)((char *)a2 + 4);
      v10.n64_u64[0] = vsub_f32((float32x2_t)v9->n64_u64[0], v14[0]).n64_u64[0];
      v11 = vmul_f32(v10, v10).n64_u64[0];
      if ( (float)((float)(*(float *)&v11 + *((float *)&v11 + 1)) + 0.0) < (float)(*(float *)(a1 + 24)
                                                                                 * *(float *)(a1 + 24)) )
      {
        *(_BYTE *)(a1 + 84) |= 4u;
        CPed::SetMoveState(a2, 1);
      }
      CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateSubTask();
    }
    else
    {
      v13 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v5);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar(v13, *((CVehicle **)a2 + 356), 0, 0, 1, 0);
    }
  }
  else
  {
    v12 = (CTaskSimpleTired *)CTask::operator new((CTask *)&dword_1C, v5);
    CTaskSimpleTired::CTaskSimpleTired(v12, 1000);
  }
}


// ============================================================

// Address: 0x499b74
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetE14ControlSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::ControlSubTask(CPed *)
CTaskSimpleStandStill *__fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::ControlSubTask(
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
  int v13; // r0
  float *v14; // r4
  int v15; // r1
  float *v16; // r2
  float *v17; // r0
  float v18; // s2
  float v19; // s4
  float v20; // s16
  float v21; // s18
  float v22; // s20
  float *v23; // r1
  float v24; // s4
  float v25; // s6
  int v26; // r0
  float v27; // s18
  float v28; // s20
  float v29; // s16
  int v30; // r0
  CGeneral *RadianAngleBetweenPoints; // r0
  float v32; // r1
  float v33; // r0
  unsigned int v34; // r1
  const CEntity *v35; // r2
  unsigned int v36; // r0
  unsigned int v37; // r1
  __int64 v38; // r0
  unsigned int v39; // r1
  int v40; // r0
  float *v41; // r1
  float v42; // s16
  float v43; // s0
  unsigned int v44; // r1
  int v45; // r4
  int v46; // r0
  char v47; // r1
  float v48; // s0
  unsigned int v49; // r1
  int v50; // r4
  int v51; // r2
  float v52; // s0
  double v53; // d16
  CPed *v54; // r0
  int PlayerPed; // r0
  float v57; // [sp+0h] [bp-D0h]
  int v58[3]; // [sp+14h] [bp-BCh] BYREF
  _BYTE v59[64]; // [sp+20h] [bp-B0h] BYREF
  int v60; // [sp+60h] [bp-70h]
  int v61; // [sp+64h] [bp-6Ch]
  double v62; // [sp+68h] [bp-68h] BYREF
  float v63; // [sp+70h] [bp-60h]
  double v64; // [sp+78h] [bp-58h] BYREF
  float v65; // [sp+80h] [bp-50h]
  double v66; // [sp+88h] [bp-48h] BYREF
  float v67; // [sp+90h] [bp-40h]

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
        v13 = *((_DWORD *)this + 5);
        v14 = (float *)(v7 + 4);
        v15 = *(int *)((char *)&dword_14 + v7);
        v16 = (float *)(v13 + 48);
        if ( !v13 )
          v16 = (float *)((char *)this + 4);
        v17 = (float *)(v7 + 4);
        v18 = v16[1];
        v19 = v16[2];
        if ( v15 )
          v17 = (float *)(v15 + 48);
        *(float *)&v66 = *v17 - *v16;
        v20 = *(float *)&v66;
        *((float *)&v66 + 1) = v17[1] - v18;
        v21 = *((float *)&v66 + 1);
        v22 = v17[2] - v19;
        v67 = v22;
        v65 = v22;
        v64 = v66;
        CVector::Normalise((CVector *)&v64);
        v23 = (float *)(v7 + 4);
        v24 = v21 - (float)(*((float *)&v64 + 1) * 0.25);
        v25 = v22 - (float)(v65 * 0.25);
        *((float *)&v66 + 1) = v24;
        v67 = v25;
        v26 = *(int *)((char *)&dword_14 + v7);
        if ( v26 )
          v23 = (float *)(v26 + 48);
        v27 = *v23 - (float)(v20 - (float)(*(float *)&v64 * 0.25));
        *(float *)&v66 = v27;
        v28 = v23[1] - v24;
        *((float *)&v66 + 1) = v28;
        v29 = v23[2] - v25;
        v67 = v29;
        v63 = v29;
        v62 = v66;
        if ( CPedPlacement::FindZCoorForPed((CPedPlacement *)&v62, (CVector *)v23) == 1 )
        {
          v67 = v63;
          v29 = v63;
          v66 = v62;
          v28 = *((float *)&v62 + 1);
          v27 = *(float *)&v62;
        }
        v30 = *(int *)((char *)&dword_14 + v7);
        if ( v30 )
          v14 = (float *)(v30 + 48);
        *(float *)&v66 = v27 - *v14;
        *((float *)&v66 + 1) = v28 - v14[1];
        v67 = v29 - v14[2];
        v60 = 0;
        v61 = 0;
        Invert(*(const CMatrix **)((char *)&dword_14 + v7), (CMatrix *)v59);
        CVector::FromMultiply3X3((CVector *)v58, (const CMatrix *)v59, (const CVector *)&v66);
        RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                                 (CGeneral *)LODWORD(v64),
                                                 *((float *)&v64 + 1),
                                                 0.0,
                                                 0.0,
                                                 v57);
        v33 = COERCE_FLOAT(CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v32));
        CPed::AttachPedToEntity(
          (int)this,
          (CEntity *)v7,
          v58[0],
          v58[1],
          v58[2],
          (unsigned int)v33,
          0.2,
          *((_DWORD *)this + 7 * *((char *)this + 1820) + 361));
        v6 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v34);
        CTaskSimpleStandStill::CTaskSimpleStandStill(v6, 2000, 0, 0, 8.0);
        CMatrix::~CMatrix((CMatrix *)v59);
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
    v35 = *(const CEntity **)(a1 + 12);
    if ( v35 )
    {
      if ( *(_BYTE *)(a1 + 60)
        && (!*(_BYTE *)(a1 + 61)
          ? (v37 = *(_DWORD *)(a1 + 52), v36 = CTimer::m_snTimeInMilliseconds)
          : (v36 = CTimer::m_snTimeInMilliseconds, *(_BYTE *)(a1 + 61) = 0, *(_DWORD *)(a1 + 52) = v36, v37 = v36),
            v37 + *(_DWORD *)(a1 + 56) <= v36) )
      {
        if ( (*(int (__fastcall **)(_DWORD, CPedGroups *, int, _DWORD))(**(_DWORD **)(a1 + 8) + 28))(
               *(_DWORD *)(a1 + 8),
               this,
               1,
               0) == 1 )
        {
          if ( *(unsigned __int8 *)(a1 + 84) << 31 )
          {
            v6 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_1C, v39);
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
          LODWORD(v38) = CTimer::m_snTimeInMilliseconds;
          *(_BYTE *)(a1 + 49) = 0;
          *(_DWORD *)(a1 + 40) = v38;
          HIDWORD(v38) = v38;
        }
        else
        {
          HIDWORD(v38) = *(_DWORD *)(a1 + 40);
          LODWORD(v38) = CTimer::m_snTimeInMilliseconds;
        }
        if ( HIDWORD(v38) + *(_DWORD *)(a1 + 44) <= (unsigned int)v38 )
        {
          HIDWORD(v38) = *(_DWORD *)(a1 + 20);
          *(_BYTE *)(a1 + 48) = 1;
          *(_QWORD *)(a1 + 40) = v38;
          CEntitySeekPosCalculatorXYOffset::ComputeEntitySeekPos(
            (CEntitySeekPosCalculatorXYOffset *)(a1 + 64),
            this,
            v35,
            (CVector *)&v66);
          v40 = *((_DWORD *)this + 5);
          v41 = (float *)(v40 + 48);
          if ( !v40 )
            v41 = (float *)((char *)this + 4);
          v42 = (float)((float)((float)(*v41 - *(float *)&v66) * (float)(*v41 - *(float *)&v66))
                      + (float)((float)(v41[1] - *((float *)&v66 + 1)) * (float)(v41[1] - *((float *)&v66 + 1))))
              + 0.0;
          if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8)) == 906 )
          {
            v43 = *(float *)(a1 + 32);
            if ( v43 == 0.0 || v42 >= (float)((float)(v43 + -1.0) * (float)(v43 + -1.0)) )
            {
              CTaskComplexFollowNodeRoute::SetTarget(
                *(CTaskComplexFollowNodeRoute **)(a1 + 8),
                this,
                (const CVector *)&v66,
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
              v6 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&word_28, v44);
              v45 = *(_DWORD *)(a1 + 80);
              CEntitySeekPosCalculatorXYOffset::ComputeEntitySeekPos(
                (CEntitySeekPosCalculatorXYOffset *)(a1 + 64),
                this,
                *(const CEntity **)(a1 + 12),
                (CVector *)v59);
              CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
                v6,
                v45,
                (const CVector *)v59,
                *(float *)(a1 + 24),
                *(float *)(a1 + 28),
                0,
                0);
              *((_BYTE *)v6 + 36) = *(_BYTE *)(a1 + 84) & 8 | *((_BYTE *)v6 + 36) & 0xF7;
              return v6;
            }
          }
          else
          {
            v46 = *(_DWORD *)(a1 + 8);
            v47 = *(_BYTE *)(v46 + 36);
            if ( (v47 & 0x10) == 0 )
            {
              v48 = *(float *)(a1 + 32);
              if ( v48 == 0.0 || v42 <= (float)((float)(v48 + 1.0) * (float)(v48 + 1.0)) )
              {
                v51 = *(_DWORD *)(a1 + 24);
                v52 = *(float *)(a1 + 28);
                if ( *(float *)(v46 + 16) != *(float *)&v66
                  || *(float *)(v46 + 20) != *((float *)&v66 + 1)
                  || *(float *)(v46 + 24) != v67
                  || *(float *)(v46 + 32) != v52 )
                {
                  v53 = v66;
                  *(float *)(v46 + 24) = v67;
                  *(_DWORD *)(v46 + 28) = v51;
                  *(float *)(v46 + 32) = v52;
                  *(_BYTE *)(v46 + 36) = v47 | 4;
                  *(double *)(v46 + 16) = v53;
                }
              }
              else if ( (*(int (__fastcall **)(int, CPedGroups *, int, _DWORD))(*(_DWORD *)v46 + 28))(v46, this, 1, 0) == 1 )
              {
                v6 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_60, v49);
                v50 = *(_DWORD *)(a1 + 80);
                CEntitySeekPosCalculatorXYOffset::ComputeEntitySeekPos(
                  (CEntitySeekPosCalculatorXYOffset *)(a1 + 64),
                  this,
                  *(const CEntity **)(a1 + 12),
                  (CVector *)v59);
                CTaskComplexFollowNodeRoute::CTaskComplexFollowNodeRoute(
                  v6,
                  v50,
                  (const CVector *)v59,
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
  v54 = *(CPed **)(a1 + 12);
  if ( v54 )
  {
    if ( (*((_BYTE *)v54 + 58) & 7) == 3 && CPed::IsPlayer(v54) == 1 )
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

// Address: 0x49a184
// Original: _ZNK22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorXYOffsetE13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateSubTask(int a1, int a2, CVehicle **a3)
{
  int v5; // r4
  int v6; // r8
  unsigned int v7; // r1
  CTaskComplexTurnToFaceEntityOrCoord *v8; // r6
  CTaskSimpleStandStill *v9; // r5
  int v10; // r8
  _BYTE v12[36]; // [sp+14h] [bp-24h] BYREF

  v5 = 0;
  if ( a2 > 718 )
  {
    if ( a2 > 905 )
    {
      if ( a2 == 906 )
      {
        v5 = CTask::operator new((CTask *)&dword_60, 0x38Au);
        v10 = *(_DWORD *)(a1 + 80);
        CEntitySeekPosCalculatorXYOffset::ComputeEntitySeekPos(
          (CEntitySeekPosCalculatorXYOffset *)(a1 + 64),
          (const CPed *)a3,
          *(const CEntity **)(a1 + 12),
          (CVector *)v12);
        CTaskComplexFollowNodeRoute::CTaskComplexFollowNodeRoute(
          (CTaskComplexFollowNodeRoute *)v5,
          v10,
          (const CVector *)v12,
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
      CTaskSimpleCarDrive::CTaskSimpleCarDrive((CTaskSimpleCarDrive *)v5, a3[356], 0, 0);
      *(_DWORD *)(v5 + 96) = 2000;
      *(_WORD *)(v5 + 108) = 0;
      *(_DWORD *)(v5 + 100) = 0;
      *(_DWORD *)(v5 + 104) = 0;
      *(_DWORD *)v5 = &off_66572C;
    }
    else if ( a2 == 903 )
    {
      v5 = CTask::operator new((CTask *)&word_28, 0x387u);
      v6 = *(_DWORD *)(a1 + 80);
      CEntitySeekPosCalculatorXYOffset::ComputeEntitySeekPos(
        (CEntitySeekPosCalculatorXYOffset *)(a1 + 64),
        (const CPed *)a3,
        *(const CEntity **)(a1 + 12),
        (CVector *)v12);
      CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
        (CTaskComplexGoToPointAndStandStill *)v5,
        v6,
        (const CVector *)v12,
        *(float *)(a1 + 24),
        *(float *)(a1 + 28),
        0,
        0);
      *(_BYTE *)(v5 + 36) = *(_BYTE *)(a1 + 84) & 8 | *(_BYTE *)(v5 + 36) & 0xF7;
    }
  }
  else if ( a2 > 243 )
  {
    if ( a2 == 244 )
    {
      v5 = CTask::operator new((CTask *)&dword_40, 0xF4u);
      CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v5);
      if ( (*(_BYTE *)(a1 + 84) & 2) != 0 )
      {
        v8 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v7);
        CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v8, *(CEntity **)(a1 + 12), 0.5, 0.2);
        CTaskComplexSequence::AddTask((CTaskComplexSequence *)v5, v8);
      }
      v9 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v7);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v9, 100, 0, 0, 8.0);
      CTaskComplexSequence::AddTask((CTaskComplexSequence *)v5, v9);
    }
    else if ( a2 == 704 )
    {
      v5 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, a3[356], 0, 0, 1, 0);
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

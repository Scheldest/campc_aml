
// Address: 0x1922e8
// Original: j__ZNK22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardE13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateSubTask(int,CPed *)
// attributes: thunk
int CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateSubTask(void)
{
  return _ZNK22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardE13CreateSubTaskEiP4CPed();
}


// ============================================================

// Address: 0x197804
// Original: j__ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardE10CreateTaskEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateTask(void)
// attributes: thunk
int CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateTask()
{
  return _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardE10CreateTaskEv();
}


// ============================================================

// Address: 0x333e34
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardED2Ev
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::~CTaskComplexSeekEntity()
void __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::~CTaskComplexSeekEntity(CEntity **a1)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = a1 + 3;
  v2 = a1[3];
  *a1 = (CEntity *)&off_6656E4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8((CTaskComplex *)a1);
}


// ============================================================

// Address: 0x333e60
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardED0Ev
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::~CTaskComplexSeekEntity()
void __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::~CTaskComplexSeekEntity(CEntity **a1)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = a1 + 3;
  v2 = a1[3];
  *a1 = (CEntity *)&off_6656E4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex((CTaskComplex *)a1);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x333e90
// Original: _ZNK22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardE5CloneEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::Clone(void)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::Clone(int a1, unsigned int a2)
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
  *(_DWORD *)v3 = &off_6656E4;
  *(_DWORD *)(v3 + 64) = &off_665720;
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

// Address: 0x333f58
// Original: _ZNK22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardE11GetTaskTypeEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::GetTaskType(void)
int CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::GetTaskType()
{
  return 907;
}


// ============================================================

// Address: 0x333f60
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardE13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::MakeAbortable(int a1, int a2, int a3)
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

// Address: 0x333fb0
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardE9SerializeEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::Serialize(void)
void __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::Serialize(_DWORD *a1)
{
  CGenericGameStorage *v2; // r5
  int v3; // r2
  int v4; // r5
  CGenericGameStorage *v5; // r6
  int v6; // r2
  int v7; // r0
  int v8; // r6
  CGenericGameStorage *v9; // r5
  int v10; // r2
  CVehicle *v11; // r0
  int v12; // r1
  int v13; // r4
  int v14; // r0
  CGenericGameStorage *v15; // r4
  int v16; // r2
  CGenericGameStorage *v17; // r5
  int v18; // r2

  if ( UseDataFence )
    AddDataFence();
  v2 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v2 = 1;
  CGenericGameStorage::_SaveDataToWorkBuffer(v2, &byte_4, v3);
  free(v2);
  v4 = (*(int (__fastcall **)(_DWORD *))(*a1 + 20))(a1);
  if ( UseDataFence )
    AddDataFence();
  v5 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v5 = v4;
  CGenericGameStorage::_SaveDataToWorkBuffer(v5, &byte_4, v6);
  free(v5);
  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 20))(a1) == 907 )
  {
    v7 = a1[3];
    if ( v7 )
    {
      v8 = *(_BYTE *)(v7 + 58) & 7;
      if ( UseDataFence )
        AddDataFence();
      v9 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v9 = v8;
      CGenericGameStorage::_SaveDataToWorkBuffer(v9, &byte_4, v10);
      free(v9);
      v11 = (CVehicle *)a1[3];
      v12 = *((_BYTE *)v11 + 58) & 7;
      switch ( v12 )
      {
        case 2:
          v13 = GettPoolVehicleRef(v11);
          break;
        case 4:
          v13 = GettPoolObjRef(v11);
          break;
        case 3:
          v13 = GettPoolPedRef(v11);
          break;
        default:
          return;
      }
      if ( UseDataFence )
        AddDataFence();
      v17 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v17 = v13;
      CGenericGameStorage::_SaveDataToWorkBuffer(v17, &byte_4, v18);
      j_free(v17);
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v15 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v15 = 0;
      CGenericGameStorage::_SaveDataToWorkBuffer(v15, &byte_4, v16);
      j_free(v15);
    }
  }
  else
  {
    v14 = (*(int (__fastcall **)(_DWORD *))(*a1 + 20))(a1);
    sub_1941D4(907, v14);
  }
}


// ============================================================

// Address: 0x33411c
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardE17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateNextSubTask(int a1, int a2)
{
  int v4; // r0
  CTaskSimpleStandStill *v5; // r6
  CTaskSimpleCarDrive *v6; // r0
  int v7; // r0
  bool v9; // zf
  int v10; // r0
  float32x2_t *v11; // r1
  float32x2_t *v12; // r2
  float32x2_t *v13; // r3
  float32x2_t *v14; // r1
  float32x2_t v15; // d16
  unsigned __int64 v16; // d0
  CTaskSimpleStandStill *v17; // r0
  _BYTE v18[48]; // [sp+8h] [bp-30h] BYREF

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
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v18, -1, 0, 0, 8.0);
        CTaskSimpleStandStill::ProcessPed(v17, (CPed *)a2);
        CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v18);
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
  v10 = *(_DWORD *)(a1 + 12);
  v11 = *(float32x2_t **)(a2 + 20);
  v12 = *(float32x2_t **)(v10 + 20);
  v13 = v11 + 6;
  if ( !v11 )
    v13 = (float32x2_t *)(a2 + 4);
  v14 = v12 + 6;
  if ( !v12 )
    v14 = (float32x2_t *)(v10 + 4);
  v15.n64_u64[0] = vsub_f32((float32x2_t)v13->n64_u64[0], (float32x2_t)v14->n64_u64[0]).n64_u64[0];
  v16 = vmul_f32(v15, v15).n64_u64[0];
  if ( (float)((float)(*(float *)&v16 + *((float *)&v16 + 1)) + 0.0) <= (float)(*(float *)(a1 + 24) * *(float *)(a1 + 24)) )
    *(_BYTE *)(a1 + 72) |= 4u;
  return j_CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateSubTask();
}


// ============================================================

// Address: 0x3342b4
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardE18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateFirstSubTask(int a1, int a2)
{
  __int64 v4; // kr00_8
  unsigned int v5; // r1
  int v6; // r0
  bool v7; // zf
  unsigned int v8; // r1
  float32x2_t *v9; // r1
  float32x2_t *v10; // r2
  float32x2_t *v11; // r3
  float32x2_t *v12; // r0
  float32x2_t v13; // d16
  unsigned __int64 v14; // d0
  CTaskSimpleTired *v15; // r0
  CTaskComplexLeaveCar *v16; // r0

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
  v6 = *(_DWORD *)(a1 + 12);
  if ( v6 )
  {
    v8 = *(unsigned __int8 *)(a2 + 1157) << 31;
    v7 = v8 == 0;
    if ( v8 )
    {
      v8 = *(_DWORD *)(a2 + 1424);
      v7 = v8 == 0;
    }
    if ( v7 )
    {
      v9 = *(float32x2_t **)(v6 + 20);
      v10 = *(float32x2_t **)(a2 + 20);
      v11 = v9 + 6;
      if ( !v9 )
        v11 = (float32x2_t *)(v6 + 4);
      v12 = v10 + 6;
      if ( !v10 )
        v12 = (float32x2_t *)(a2 + 4);
      v13.n64_u64[0] = vsub_f32((float32x2_t)v12->n64_u64[0], (float32x2_t)v11->n64_u64[0]).n64_u64[0];
      v14 = vmul_f32(v13, v13).n64_u64[0];
      if ( (float)((float)(*(float *)&v14 + *((float *)&v14 + 1)) + 0.0) < (float)(*(float *)(a1 + 24)
                                                                                 * *(float *)(a1 + 24)) )
      {
        *(_BYTE *)(a1 + 72) |= 4u;
        CPed::SetMoveState(a2, 1);
      }
      j_CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateSubTask();
    }
    else
    {
      v16 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v8);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar(v16, *(CVehicle **)(a2 + 1424), 0, 0, 1, 0);
    }
  }
  else
  {
    v15 = (CTaskSimpleTired *)CTask::operator new((CTask *)&dword_1C, v5);
    CTaskSimpleTired::CTaskSimpleTired(v15, 1000);
  }
}


// ============================================================

// Address: 0x3343c4
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardE14ControlSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::ControlSubTask(CPed *)
CTaskSimpleTired *__fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::ControlSubTask(
        int a1,
        CPedGroups *this,
        const CPed *a3)
{
  int v5; // r4
  CTaskSimpleTired *v6; // r6
  int v7; // r8
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  bool v11; // zf
  int v12; // r0
  int v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r2
  unsigned int v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r1
  int v19; // r0
  float *v20; // r4
  int v21; // r1
  float *v22; // r2
  float *v23; // r0
  float v24; // s2
  float v25; // s4
  float v26; // s16
  float v27; // s18
  float v28; // s20
  float *v29; // r1
  float v30; // s4
  float v31; // s6
  int v32; // r0
  float v33; // s18
  float v34; // s20
  float v35; // s16
  int v36; // r0
  CGeneral *RadianAngleBetweenPoints; // r0
  float v38; // r1
  float v39; // r0
  unsigned int v40; // r1
  int v41; // r2
  int v42; // r1
  int v43; // r2
  double v44; // d16
  int v45; // r0
  float *v46; // r1
  float v47; // s20
  float v48; // s0
  unsigned int v49; // r1
  int v50; // r0
  int v51; // r1
  int v52; // r2
  int v53; // r3
  double v54; // d16
  int v55; // r0
  char v56; // r1
  float v57; // s0
  unsigned int v58; // r1
  int v59; // r0
  int v60; // r1
  int v61; // r2
  int v62; // r3
  double v63; // d16
  float v64; // s0
  int v65; // r2
  double v66; // d16
  CPed *v67; // r0
  int PlayerPed; // r0
  float v70; // [sp+0h] [bp-C8h]
  int v71[3]; // [sp+14h] [bp-B4h] BYREF
  double v72; // [sp+20h] [bp-A8h] BYREF
  int v73; // [sp+28h] [bp-A0h]
  int v74; // [sp+60h] [bp-68h]
  int v75; // [sp+64h] [bp-64h]
  double v76; // [sp+68h] [bp-60h] BYREF
  float v77; // [sp+70h] [bp-58h]
  double v78; // [sp+78h] [bp-50h] BYREF
  float v79; // [sp+80h] [bp-48h]
  double v80; // [sp+88h] [bp-40h] BYREF
  float v81; // [sp+90h] [bp-38h]

  v5 = *(_DWORD *)(a1 + 12);
  v6 = *(CTaskSimpleTired **)(a1 + 8);
  if ( !v5 || (*(_BYTE *)(v5 + 58) & 7) != 3 || CPedGroups::AreInSameGroup(this, (const CPed *)v5, a3) != 1 )
    goto LABEL_19;
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
      goto LABEL_73;
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
LABEL_73:
    if ( *(_DWORD *)(v7 + 1440) != 5 )
      v7 = 0;
  }
  else
  {
LABEL_15:
    v7 = 0;
  }
  v12 = *((_DWORD *)this + 64);
  if ( !v7 && v12 )
  {
    CPed::DettachPedFromEntity(this);
LABEL_19:
    if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8)) != 906
      && (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8)) != 903 )
    {
      goto LABEL_81;
    }
    v13 = *(_DWORD *)(a1 + 12);
    if ( !v13 )
    {
      if ( (*(int (__fastcall **)(_DWORD, CPedGroups *, int, _DWORD))(**(_DWORD **)(a1 + 8) + 28))(
             *(_DWORD *)(a1 + 8),
             this,
             1,
             0) )
      {
        v6 = 0;
      }
      goto LABEL_81;
    }
    if ( *(_BYTE *)(a1 + 60) )
    {
      if ( *(_BYTE *)(a1 + 61) )
      {
        v14 = CTimer::m_snTimeInMilliseconds;
        *(_BYTE *)(a1 + 61) = 0;
        *(_DWORD *)(a1 + 52) = v14;
        v15 = v14;
      }
      else
      {
        v15 = *(_DWORD *)(a1 + 52);
        v14 = CTimer::m_snTimeInMilliseconds;
      }
      if ( v15 + *(_DWORD *)(a1 + 56) <= v14 )
      {
        if ( (*(int (__fastcall **)(_DWORD, CPedGroups *, int, _DWORD))(**(_DWORD **)(a1 + 8) + 28))(
               *(_DWORD *)(a1 + 8),
               this,
               1,
               0) == 1 )
        {
          if ( *(unsigned __int8 *)(a1 + 72) << 31 )
          {
            v6 = (CTaskSimpleTired *)CTask::operator new((CTask *)&dword_1C, v18);
            CTaskSimpleTired::CTaskSimpleTired(v6, 1000);
          }
          else
          {
            v6 = 0;
          }
        }
        goto LABEL_81;
      }
    }
    if ( !*(_BYTE *)(a1 + 48)
      || (!*(_BYTE *)(a1 + 49)
        ? (v17 = *(_DWORD *)(a1 + 40), v16 = CTimer::m_snTimeInMilliseconds)
        : (v16 = CTimer::m_snTimeInMilliseconds, *(_BYTE *)(a1 + 49) = 0, *(_DWORD *)(a1 + 40) = v16, v17 = v16),
          v17 + *(_DWORD *)(a1 + 44) > v16) )
    {
LABEL_81:
      v67 = *(CPed **)(a1 + 12);
      if ( v67 )
      {
        if ( (*((_BYTE *)v67 + 58) & 7) == 3 && CPed::IsPlayer(v67) == 1 )
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
    v41 = *(_DWORD *)(a1 + 20);
    *(_BYTE *)(a1 + 48) = 1;
    *(_DWORD *)(a1 + 40) = v16;
    *(_DWORD *)(a1 + 44) = v41;
    v42 = *(_DWORD *)(v13 + 20);
    v43 = v42 + 48;
    if ( !v42 )
      v43 = v13 + 4;
    v44 = *(double *)v43;
    v81 = *(float *)(v43 + 8);
    v80 = v44;
    v45 = *((_DWORD *)this + 5);
    v46 = (float *)(v45 + 48);
    if ( !v45 )
      v46 = (float *)((char *)this + 4);
    v47 = (float)((float)((float)(*v46 - *(float *)&v44) * (float)(*v46 - *(float *)&v44))
                + (float)((float)(v46[1] - *((float *)&v44 + 1)) * (float)(v46[1] - *((float *)&v44 + 1))))
        + 0.0;
    if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8)) == 906 )
    {
      v48 = *(float *)(a1 + 32);
      if ( v48 == 0.0 || v47 >= (float)((float)(v48 + -1.0) * (float)(v48 + -1.0)) )
      {
        CTaskComplexFollowNodeRoute::SetTarget(
          *(CTaskComplexFollowNodeRoute **)(a1 + 8),
          this,
          (const CVector *)&v80,
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
        v6 = (CTaskSimpleTired *)CTask::operator new((CTask *)&word_28, v49);
        v50 = *(_DWORD *)(a1 + 12);
        v51 = *(_DWORD *)(a1 + 68);
        v52 = *(_DWORD *)(v50 + 20);
        v53 = v52 + 48;
        if ( !v52 )
          v53 = v50 + 4;
        v54 = *(double *)v53;
        v73 = *(_DWORD *)(v53 + 8);
        v72 = v54;
        CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
          v6,
          v51,
          (const CVector *)&v72,
          *(float *)(a1 + 24),
          *(float *)(a1 + 28),
          0,
          0);
        *((_BYTE *)v6 + 36) = *(_BYTE *)(a1 + 72) & 8 | *((_BYTE *)v6 + 36) & 0xF7;
        return v6;
      }
      goto LABEL_80;
    }
    v55 = *(_DWORD *)(a1 + 8);
    v56 = *(_BYTE *)(v55 + 36);
    if ( (v56 & 0x10) == 0 )
    {
      v57 = *(float *)(a1 + 32);
      if ( v57 == 0.0 || v47 <= (float)((float)(v57 + 1.0) * (float)(v57 + 1.0)) )
      {
        v64 = *(float *)(a1 + 28);
        v65 = *(_DWORD *)(a1 + 24);
        if ( *(float *)(v55 + 16) != *(float *)&v44 || *(float *)(v55 + 24) != v81 || *(float *)(v55 + 32) != v64 )
        {
          v66 = v80;
          *(float *)(v55 + 24) = v81;
          *(_DWORD *)(v55 + 28) = v65;
          *(float *)(v55 + 32) = v64;
          *(_BYTE *)(v55 + 36) = v56 | 4;
          *(double *)(v55 + 16) = v66;
        }
      }
      else if ( (*(int (__fastcall **)(int, CPedGroups *, int, _DWORD))(*(_DWORD *)v55 + 28))(v55, this, 1, 0) == 1 )
      {
        v6 = (CTaskSimpleTired *)CTask::operator new((CTask *)&dword_60, v58);
        v59 = *(_DWORD *)(a1 + 12);
        v60 = *(_DWORD *)(a1 + 68);
        v61 = *(_DWORD *)(v59 + 20);
        v62 = v61 + 48;
        if ( !v61 )
          v62 = v59 + 4;
        v63 = *(double *)v62;
        v73 = *(_DWORD *)(v62 + 8);
        v72 = v63;
        CTaskComplexFollowNodeRoute::CTaskComplexFollowNodeRoute(
          v6,
          v60,
          (const CVector *)&v72,
          *(float *)(a1 + 24),
          *(float *)(a1 + 28),
          *(float *)(a1 + 36),
          0,
          -1,
          1);
        return v6;
      }
    }
LABEL_80:
    v6 = *(CTaskSimpleTired **)(a1 + 8);
    goto LABEL_81;
  }
  if ( !v7
    || v12
    || (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8)) == 203
    || (*(int (__fastcall **)(_DWORD, CPedGroups *, int, _DWORD))(**(_DWORD **)(a1 + 8) + 28))(
         *(_DWORD *)(a1 + 8),
         this,
         1,
         0) != 1 )
  {
    goto LABEL_19;
  }
  v19 = *((_DWORD *)this + 5);
  v20 = (float *)(v7 + 4);
  v21 = *(int *)((char *)&dword_14 + v7);
  v22 = (float *)(v19 + 48);
  if ( !v19 )
    v22 = (float *)((char *)this + 4);
  v23 = (float *)(v7 + 4);
  v24 = v22[1];
  v25 = v22[2];
  if ( v21 )
    v23 = (float *)(v21 + 48);
  *(float *)&v80 = *v23 - *v22;
  v26 = *(float *)&v80;
  *((float *)&v80 + 1) = v23[1] - v24;
  v27 = *((float *)&v80 + 1);
  v28 = v23[2] - v25;
  v81 = v28;
  v79 = v28;
  v78 = v80;
  CVector::Normalise((CVector *)&v78);
  v29 = (float *)(v7 + 4);
  v30 = v27 - (float)(*((float *)&v78 + 1) * 0.25);
  v31 = v28 - (float)(v79 * 0.25);
  *((float *)&v80 + 1) = v30;
  v81 = v31;
  v32 = *(int *)((char *)&dword_14 + v7);
  if ( v32 )
    v29 = (float *)(v32 + 48);
  v33 = *v29 - (float)(v26 - (float)(*(float *)&v78 * 0.25));
  *(float *)&v80 = v33;
  v34 = v29[1] - v30;
  *((float *)&v80 + 1) = v34;
  v35 = v29[2] - v31;
  v81 = v35;
  v77 = v35;
  v76 = v80;
  if ( CPedPlacement::FindZCoorForPed((CPedPlacement *)&v76, (CVector *)v29) == 1 )
  {
    v81 = v77;
    v35 = v77;
    v80 = v76;
    v34 = *((float *)&v76 + 1);
    v33 = *(float *)&v76;
  }
  v36 = *(int *)((char *)&dword_14 + v7);
  if ( v36 )
    v20 = (float *)(v36 + 48);
  *(float *)&v80 = v33 - *v20;
  *((float *)&v80 + 1) = v34 - v20[1];
  v81 = v35 - v20[2];
  v74 = 0;
  v75 = 0;
  Invert(*(const CMatrix **)((char *)&dword_14 + v7), (CMatrix *)&v72);
  CVector::FromMultiply3X3((CVector *)v71, (const CMatrix *)&v72, (const CVector *)&v80);
  RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                           (CGeneral *)LODWORD(v78),
                                           *((float *)&v78 + 1),
                                           0.0,
                                           0.0,
                                           v70);
  v39 = COERCE_FLOAT(CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v38));
  CPed::AttachPedToEntity(
    (int)this,
    (CEntity *)v7,
    v71[0],
    v71[1],
    v71[2],
    (unsigned int)v39,
    0.2,
    *((_DWORD *)this + 7 * *((char *)this + 1820) + 361));
  v6 = (CTaskSimpleTired *)CTask::operator new((CTask *)&dword_20, v40);
  CTaskSimpleStandStill::CTaskSimpleStandStill(v6, 2000, 0, 0, 8.0);
  CMatrix::~CMatrix((CMatrix *)&v72);
  return v6;
}


// ============================================================

// Address: 0x3349fc
// Original: _ZNK22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardE13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateSubTask(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  double v10; // d16
  unsigned int v11; // r1
  CTaskComplexTurnToFaceEntityOrCoord *v12; // r6
  CTaskSimpleStandStill *v13; // r5
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  double v18; // d16
  double v20; // [sp+18h] [bp-20h] BYREF
  int v21; // [sp+20h] [bp-18h]

  v5 = 0;
  if ( a2 > 718 )
  {
    if ( a2 > 905 )
    {
      if ( a2 == 906 )
      {
        v5 = CTask::operator new((CTask *)&dword_60, 0x38Au);
        v14 = *(_DWORD *)(a1 + 12);
        v15 = *(_DWORD *)(a1 + 68);
        v16 = *(_DWORD *)(v14 + 20);
        v17 = v16 + 48;
        if ( !v16 )
          v17 = v14 + 4;
        v18 = *(double *)v17;
        v21 = *(_DWORD *)(v17 + 8);
        v20 = v18;
        CTaskComplexFollowNodeRoute::CTaskComplexFollowNodeRoute(
          (CTaskComplexFollowNodeRoute *)v5,
          v15,
          (const CVector *)&v20,
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
      v6 = *(_DWORD *)(a1 + 12);
      v7 = *(_DWORD *)(a1 + 68);
      v8 = *(_DWORD *)(v6 + 20);
      v9 = v8 + 48;
      if ( !v8 )
        v9 = v6 + 4;
      v10 = *(double *)v9;
      v21 = *(_DWORD *)(v9 + 8);
      v20 = v10;
      CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
        (CTaskComplexGoToPointAndStandStill *)v5,
        v7,
        (const CVector *)&v20,
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
        v12 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v11);
        CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v12, *(CEntity **)(a1 + 12), 0.5, 0.2);
        CTaskComplexSequence::AddTask((CTaskComplexSequence *)v5, v12);
      }
      v13 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v11);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v13, 100, 0, 0, 8.0);
      CTaskComplexSequence::AddTask((CTaskComplexSequence *)v5, v13);
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

// Address: 0x494d00
// Original: _ZN22CTaskComplexSeekEntityI32CEntitySeekPosCalculatorStandardE10CreateTaskEv
// Demangled: CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateTask(void)
int __fastcall CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateTask(int a1, int a2, int a3)
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
  *(_DWORD *)v11 = &off_6656E4;
  *(_DWORD *)(v11 + 64) = &off_665720;
  *(_BYTE *)(v11 + 72) = v12 & 0xF0 | 3;
  *(_DWORD *)(v11 + 12) = v10;
  if ( v10 )
    CEntity::RegisterReference(v10, (CEntity **)(v11 + 12));
  return v11;
}


// ============================================================

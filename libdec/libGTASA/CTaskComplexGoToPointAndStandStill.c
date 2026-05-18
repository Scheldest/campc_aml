
// Address: 0x18a894
// Original: j__ZN34CTaskComplexGoToPointAndStandStillC2EiRK7CVectorffbb
// Demangled: CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(int,CVector const&,float,float,bool,bool)
// attributes: thunk
void __fastcall CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
        CTaskComplexGoToPointAndStandStill *this,
        int a2,
        const CVector *a3,
        float a4,
        float a5,
        bool a6,
        bool a7)
{
  _ZN34CTaskComplexGoToPointAndStandStillC2EiRK7CVectorffbb(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x1970b0
// Original: j__ZN34CTaskComplexGoToPointAndStandStill10CreateTaskEv
// Demangled: CTaskComplexGoToPointAndStandStill::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexGoToPointAndStandStill::CreateTask(CTaskComplexGoToPointAndStandStill *this)
{
  return _ZN34CTaskComplexGoToPointAndStandStill10CreateTaskEv(this);
}


// ============================================================

// Address: 0x494638
// Original: _ZN34CTaskComplexGoToPointAndStandStill10CreateTaskEv
// Demangled: CTaskComplexGoToPointAndStandStill::CreateTask(void)
void __fastcall CTaskComplexGoToPointAndStandStill::CreateTask(
        CTaskComplexGoToPointAndStandStill *this,
        int a2,
        int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  int v8; // r2
  char v9; // r4
  unsigned int v10; // r1
  CTaskComplexGoToPointAndStandStill *v11; // r0
  float v12; // [sp+10h] [bp-20h] BYREF
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
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, byte_4, v6);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 2, v8);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, v8);
  v11 = (CTaskComplexGoToPointAndStandStill *)CTask::operator new((CTask *)&word_28, v10);
  CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
    v11,
    v15[0],
    (const CVector *)v14,
    v13,
    v12,
    0,
    0);
}


// ============================================================

// Address: 0x51d2e4
// Original: _ZN34CTaskComplexGoToPointAndStandStillC2EiRK7CVectorffbb
// Demangled: CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(int,CVector const&,float,float,bool,bool)
void __fastcall CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
        CTaskComplexGoToPointAndStandStill *this,
        int a2,
        const CVector *a3,
        float a4,
        float a5,
        bool a6,
        bool a7)
{
  int v10; // r0
  float v11; // s2
  char v12; // r1
  __int64 v13; // d16
  float v14; // s0
  float v15; // s2

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v10 + 12) = a2;
  v11 = *(float *)(v10 + 16);
  v12 = *(_BYTE *)(v10 + 36) & 0xE4 | a6 | (2 * a7);
  *(_BYTE *)(v10 + 36) = v12;
  *(_DWORD *)v10 = &off_66C14C;
  if ( v11 != *(float *)a3
    || *(float *)(v10 + 20) != *((float *)a3 + 1)
    || *(float *)(v10 + 24) != *((float *)a3 + 2)
    || *(float *)(v10 + 32) != a5 )
  {
    v12 |= 4u;
    v13 = *(_QWORD *)a3;
    *(_DWORD *)(v10 + 24) = *((_DWORD *)a3 + 2);
    *(float *)(v10 + 28) = a4;
    *(float *)(v10 + 32) = a5;
    *(_BYTE *)(v10 + 36) = v12;
    *(_QWORD *)(v10 + 16) = v13;
  }
  if ( (v12 & 2) != 0 )
  {
    v14 = *(float *)(v10 + 28);
    *(_BYTE *)(v10 + 36) = v12 & 0xFE;
    if ( a2 >= 5 )
      v15 = 1.0;
    else
      v15 = 0.5;
    if ( v14 >= v15 )
      v15 = v14;
    *(_DWORD *)(v10 + 32) = 0;
    *(float *)(v10 + 28) = v15;
  }
}


// ============================================================

// Address: 0x51d3c4
// Original: _ZN34CTaskComplexGoToPointAndStandStillD0Ev
// Demangled: CTaskComplexGoToPointAndStandStill::~CTaskComplexGoToPointAndStandStill()
void __fastcall CTaskComplexGoToPointAndStandStill::~CTaskComplexGoToPointAndStandStill(
        CTaskComplexGoToPointAndStandStill *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x51d3d4
// Original: _ZN34CTaskComplexGoToPointAndStandStill17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexGoToPointAndStandStill::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexGoToPointAndStandStill::CreateNextSubTask(
        CTaskComplexGoToPointAndStandStill *this,
        CPed *a2)
{
  int v4; // r0
  int v6; // r1

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  switch ( v4 )
  {
    case 203:
      v6 = 1302;
      break;
    case 900:
      v6 = 203;
      *((_BYTE *)this + 36) = (4 * *(_BYTE *)(*((_DWORD *)this + 2) + 29)) & 0x10 | *((_BYTE *)this + 36) & 0xEF;
      break;
    case 704:
      v6 = 1302;
      if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
        v6 = 900;
      break;
    default:
      return 0;
  }
  return CTaskComplexGoToPointAndStandStill::CreateSubTask(this, v6, a2);
}


// ============================================================

// Address: 0x51d434
// Original: _ZNK34CTaskComplexGoToPointAndStandStill13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexGoToPointAndStandStill::CreateSubTask(int,CPed *)
void __fastcall CTaskComplexGoToPointAndStandStill::CreateSubTask(
        CTaskComplexGoToPointAndStandStill *this,
        int a2,
        CPed *a3)
{
  int v5; // r0
  float *v6; // r0
  float *v7; // r2
  float *v8; // r1
  float v9; // s16
  CTaskComplexLeaveCar *v10; // r0
  CTaskSimple *v11; // r0
  int v12; // r0
  CTaskSimple *v13; // r0
  int v14; // r6
  int v15; // r8
  char v16; // r9
  int v17; // r0
  char v18; // r3
  __int64 v19; // d16
  int v20; // r2
  char v21; // r2
  unsigned __int64 *v22; // r1
  int v23; // r2
  float32x2_t *v24; // r2
  float32x2_t v25; // d16
  float32x2_t *v26; // r1
  float32x2_t v27; // d16
  float v28; // s4
  CTaskSimpleStandStill *v29; // r0
  float32x2_t *v30; // r2
  float32x2_t v31; // d16
  float32x2_t *v32; // r1
  unsigned __int64 v33; // d0
  float v34; // s0
  int v35; // r1
  float v36; // s4
  CTaskSimpleStandStill *v37; // r0

  if ( a2 >= 704 )
  {
    if ( a2 == 900 )
    {
      v13 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, 0x384u);
      v14 = *((_DWORD *)this + 3);
      v15 = *((_DWORD *)this + 7);
      v16 = *((_BYTE *)this + 36);
      CTaskSimple::CTaskSimple(v13);
      *(_DWORD *)(v17 + 8) = v14;
      LOBYTE(v14) = *(_BYTE *)(v17 + 29);
      v18 = *(_BYTE *)(v17 + 28) & 0xC0;
      *(_DWORD *)v17 = &off_66C0B0;
      v19 = *((_QWORD *)this + 2);
      v20 = *((_DWORD *)this + 6);
      *(_DWORD *)(v17 + 24) = v15;
      *(_BYTE *)(v17 + 28) = v18;
      *(_DWORD *)v17 = &off_66C0E4;
      *(_DWORD *)(v17 + 20) = v20;
      v21 = v14 & 0xE0 | (8 * v16) & 8;
      *(_BYTE *)(v17 + 29) = v21;
      *(_QWORD *)(v17 + 12) = v19;
      v22 = (unsigned __int64 *)(v17 + 12);
      if ( (*((_BYTE *)this + 36) & 8) != 0 )
        *(_BYTE *)(v17 + 29) = v21 | 0x10;
      v23 = *((_DWORD *)this + 3);
      if ( v23 == 7 )
      {
        v30 = (float32x2_t *)*((_DWORD *)a3 + 5);
        v31.n64_u64[0] = *v22;
        v32 = v30 + 6;
        if ( !v30 )
          v32 = (float32x2_t *)((char *)a3 + 4);
        v27.n64_u64[0] = vsub_f32((float32x2_t)v32->n64_u64[0], v31).n64_u64[0];
        v28 = 100.0;
      }
      else
      {
        if ( v23 != 6 )
          return;
        v24 = (float32x2_t *)*((_DWORD *)a3 + 5);
        v25.n64_u64[0] = *v22;
        v26 = v24 + 6;
        if ( !v24 )
          v26 = (float32x2_t *)((char *)a3 + 4);
        v27.n64_u64[0] = vsub_f32((float32x2_t)v26->n64_u64[0], v25).n64_u64[0];
        v28 = 1.0e16;
      }
      v33 = vmul_f32(v27, v27).n64_u64[0];
      v34 = (float)(*(float *)&v33 + *((float *)&v33 + 1)) + 0.0;
      v35 = 7;
      if ( v34 < v28 )
        v35 = 6;
      if ( v34 < (float)(*((float *)this + 8) * *((float *)this + 8)) )
        v35 = 4;
      *(_DWORD *)(v17 + 8) = v35;
    }
    else if ( a2 == 704 )
    {
      v10 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, 0x2C0u);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar(v10, *((CVehicle **)a3 + 356), 0, 0, 1, 0);
    }
  }
  else if ( a2 == 202 )
  {
    v11 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, 0xCAu);
    CTaskSimple::CTaskSimple(v11);
    *(_WORD *)(v12 + 16) = 0;
    *(_DWORD *)(v12 + 20) = 1;
    *(_DWORD *)(v12 + 8) = 0;
    *(_DWORD *)(v12 + 12) = 0;
    *(_DWORD *)v12 = &off_665760;
  }
  else if ( a2 == 203 )
  {
    if ( (*((_BYTE *)this + 36) & 2) != 0
      && (v5 = *((_DWORD *)this + 2)) != 0
      && (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5) == 900 )
    {
      v6 = (float *)*((_DWORD *)a3 + 5);
      v7 = (float *)((char *)a3 + 1256);
      v8 = v6 + 12;
      if ( !v6 )
        v8 = (float *)((char *)a3 + 4);
      if ( *v7 >= 0.01 )
      {
        v36 = (float)((float)((float)(*((float *)this + 4) - *v8) * v6[4])
                    + (float)((float)(*((float *)this + 5) - v8[1]) * v6[5]))
            + (float)((float)(*((float *)this + 6) - v8[2]) * v6[6]);
        if ( v36 <= 0.01 )
        {
          v9 = 16.0;
        }
        else
        {
          v9 = 50.0 / (float)((float)((float)(v36 / (float)(*v7 * 0.5)) + -1.0) * *(float *)&CTimer::ms_fTimeStep);
          if ( v9 > 16.0 )
            v9 = 16.0;
        }
      }
      else
      {
        v9 = 8.0;
      }
      v37 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)v8);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v37, 2000, 0, 1, v9);
    }
    else
    {
      v29 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, a2);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v29, 1, 0, 0, 8.0);
    }
  }
}


// ============================================================

// Address: 0x51d6c0
// Original: _ZNK34CTaskComplexGoToPointAndStandStill15SelectMoveStateEP20CTaskSimpleGoToPointP4CPedff
// Demangled: CTaskComplexGoToPointAndStandStill::SelectMoveState(CTaskSimpleGoToPoint *,CPed *,float,float)
int __fastcall CTaskComplexGoToPointAndStandStill::SelectMoveState(
        CTaskComplexGoToPointAndStandStill *this,
        CTaskSimpleGoToPoint *a2,
        CPed *a3,
        float a4,
        float a5)
{
  float32x2_t *v5; // r12
  float32x2_t *v6; // r0
  float32x2_t v7; // d16
  unsigned __int64 v8; // d0
  float v9; // s0
  int result; // r0

  v5 = (float32x2_t *)*((_DWORD *)a3 + 5);
  v6 = v5 + 6;
  if ( !v5 )
    v6 = (float32x2_t *)((char *)a3 + 4);
  v7.n64_u64[0] = vsub_f32((float32x2_t)v6->n64_u64[0], *(float32x2_t *)((char *)a2 + 12)).n64_u64[0];
  v8 = vmul_f32(v7, v7).n64_u64[0];
  v9 = (float)(*(float *)&v8 + *((float *)&v8 + 1)) + 0.0;
  if ( v9 >= (float)(a4 * a4) )
  {
    result = 7;
    if ( v9 < (float)(a5 * a5) )
      result = 6;
    *((_DWORD *)a2 + 2) = result;
  }
  else
  {
    result = 4;
    *((_DWORD *)a2 + 2) = 4;
  }
  return result;
}


// ============================================================

// Address: 0x51d724
// Original: _ZN34CTaskComplexGoToPointAndStandStill18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGoToPointAndStandStill::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexGoToPointAndStandStill::CreateFirstSubTask(
        CTaskComplexGoToPointAndStandStill *this,
        CPed *a2)
{
  int v3; // r3
  int v4; // r1

  *((_BYTE *)this + 36) &= ~4u;
  v3 = *((_DWORD *)a2 + 289);
  v4 = 704;
  if ( (v3 & 0x100) == 0 )
    v4 = 900;
  CTaskComplexGoToPointAndStandStill::CreateSubTask(this, v4, a2);
}


// ============================================================

// Address: 0x51d748
// Original: _ZN34CTaskComplexGoToPointAndStandStill14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGoToPointAndStandStill::ControlSubTask(CPed *)
int __fastcall CTaskComplexGoToPointAndStandStill::ControlSubTask(CTaskComplexGoToPointAndStandStill *this, CPed *a2)
{
  char v4; // r1
  int v5; // r0
  __int64 v6; // r0
  float32x2_t *v7; // r1
  float32x2_t *v8; // r2
  float32x2_t v9; // d16
  float v10; // s4
  float32x2_t *v12; // r1
  float32x2_t *v13; // r2
  unsigned __int64 v14; // d0
  float v15; // s0

  v4 = *((_BYTE *)this + 36);
  v5 = *((_DWORD *)this + 2);
  if ( (v4 & 4) != 0 )
  {
    if ( (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v5 + 28))(v5, a2, 1, 0) == 1 )
      return (*(int (__fastcall **)(CTaskComplexGoToPointAndStandStill *, CPed *))(*(_DWORD *)this + 44))(this, a2);
  }
  else if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5) == 900 )
  {
    v6 = *((_QWORD *)this + 1);
    if ( HIDWORD(v6) == 7 )
    {
      v12 = (float32x2_t *)*((_DWORD *)a2 + 5);
      v13 = v12 + 6;
      if ( !v12 )
        v13 = (float32x2_t *)((char *)a2 + 4);
      v9.n64_u64[0] = vsub_f32((float32x2_t)v13->n64_u64[0], *(float32x2_t *)(v6 + 12)).n64_u64[0];
      v10 = 100.0;
      goto LABEL_13;
    }
    if ( HIDWORD(v6) == 6 )
    {
      v7 = (float32x2_t *)*((_DWORD *)a2 + 5);
      v8 = v7 + 6;
      if ( !v7 )
        v8 = (float32x2_t *)((char *)a2 + 4);
      v9.n64_u64[0] = vsub_f32((float32x2_t)v8->n64_u64[0], *(float32x2_t *)(v6 + 12)).n64_u64[0];
      v10 = 1.0e16;
LABEL_13:
      v14 = vmul_f32(v9, v9).n64_u64[0];
      v15 = (float)(*(float *)&v14 + *((float *)&v14 + 1)) + 0.0;
      HIDWORD(v6) = 7;
      if ( v15 < v10 )
        HIDWORD(v6) = 6;
      if ( v15 < (float)(*((float *)this + 8) * *((float *)this + 8)) )
        HIDWORD(v6) = 4;
      *(_DWORD *)(v6 + 8) = HIDWORD(v6);
    }
  }
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x526ca4
// Original: _ZNK34CTaskComplexGoToPointAndStandStill11GetTaskTypeEv
// Demangled: CTaskComplexGoToPointAndStandStill::GetTaskType(void)
int __fastcall CTaskComplexGoToPointAndStandStill::GetTaskType(CTaskComplexGoToPointAndStandStill *this)
{
  return 903;
}


// ============================================================

// Address: 0x526cac
// Original: _ZN34CTaskComplexGoToPointAndStandStill9SerializeEv
// Demangled: CTaskComplexGoToPointAndStandStill::Serialize(void)
void __fastcall CTaskComplexGoToPointAndStandStill::Serialize(CTaskComplexGoToPointAndStandStill *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  __int64 v8; // d16
  int v9; // r2
  int v10; // r6
  CGenericGameStorage *v11; // r5
  int v12; // r2
  int v13; // r5
  CGenericGameStorage *v14; // r4
  int v15; // r2
  int v16; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexGoToPointAndStandStill *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexGoToPointAndStandStill *))(*(_DWORD *)this + 20))(this) == 903 )
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
    v10 = *((_DWORD *)this + 7);
    if ( UseDataFence )
      AddDataFence();
    v11 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v11 = v10;
    CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
    free(v11);
    v13 = *((_DWORD *)this + 8);
    if ( UseDataFence )
      AddDataFence();
    v14 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v14 = v13;
    CGenericGameStorage::_SaveDataToWorkBuffer(v14, byte_4, v15);
    j_free(v14);
  }
  else
  {
    v16 = (*(int (__fastcall **)(CTaskComplexGoToPointAndStandStill *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(903, v16);
  }
}


// ============================================================

// Address: 0x527584
// Original: _ZNK34CTaskComplexGoToPointAndStandStill5CloneEv
// Demangled: CTaskComplexGoToPointAndStandStill::Clone(void)
int __fastcall CTaskComplexGoToPointAndStandStill::Clone(CTaskComplexGoToPointAndStandStill *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  float v4; // s16
  int v5; // r8
  char v6; // r6
  int v7; // r5
  int result; // r0
  float v9; // s0
  char v10; // r2
  char v11; // r1
  __int64 v12; // d16
  float v13; // s0
  float v14; // s2

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, a2);
  v4 = *((float *)this + 8);
  v5 = *((_DWORD *)this + 7);
  v6 = *((_BYTE *)this + 36);
  v7 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  v9 = *(float *)(result + 16);
  *(_DWORD *)(result + 12) = v7;
  v10 = *(_BYTE *)(result + 36) & 0xE4;
  *(_DWORD *)result = &off_66C14C;
  v11 = v6 & 3 | v10;
  *(_BYTE *)(result + 36) = v11;
  if ( v9 != *((float *)this + 4)
    || *(float *)(result + 20) != *((float *)this + 5)
    || *(float *)(result + 24) != *((float *)this + 6)
    || *(float *)(result + 32) != v4 )
  {
    v11 |= 4u;
    v12 = *((_QWORD *)this + 2);
    *(_DWORD *)(result + 24) = *((_DWORD *)this + 6);
    *(_QWORD *)(result + 16) = v12;
    *(float *)(result + 32) = v4;
    *(_DWORD *)(result + 28) = v5;
    *(_BYTE *)(result + 36) = v11;
  }
  if ( (v11 & 2) != 0 )
  {
    v13 = *(float *)(result + 28);
    *(_BYTE *)(result + 36) = v11 & 0xFE;
    if ( v7 >= 5 )
      v14 = 1.0;
    else
      v14 = 0.5;
    if ( v13 >= v14 )
      v14 = v13;
    *(_DWORD *)(result + 32) = 0;
    *(float *)(result + 28) = v14;
  }
  return result;
}


// ============================================================

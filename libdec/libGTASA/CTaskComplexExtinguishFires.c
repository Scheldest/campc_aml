
// Address: 0x19d3c4
// Original: j__ZN27CTaskComplexExtinguishFiresC2Ev
// Demangled: CTaskComplexExtinguishFires::CTaskComplexExtinguishFires(void)
// attributes: thunk
void __fastcall CTaskComplexExtinguishFires::CTaskComplexExtinguishFires(CTaskComplexExtinguishFires *this)
{
  _ZN27CTaskComplexExtinguishFiresC2Ev(this);
}


// ============================================================

// Address: 0x547808
// Original: _ZN27CTaskComplexExtinguishFiresC2Ev
// Demangled: CTaskComplexExtinguishFires::CTaskComplexExtinguishFires(void)
void __fastcall CTaskComplexExtinguishFires::CTaskComplexExtinguishFires(CTaskComplexExtinguishFires *this)
{
  _DWORD *v1; // r0

  CTaskComplex::CTaskComplex(this);
  v1[3] = 0;
  *v1 = &off_66D508;
}


// ============================================================

// Address: 0x547824
// Original: _ZN27CTaskComplexExtinguishFiresD2Ev
// Demangled: CTaskComplexExtinguishFires::~CTaskComplexExtinguishFires()
// attributes: thunk
void __fastcall CTaskComplexExtinguishFires::~CTaskComplexExtinguishFires(CTaskComplexExtinguishFires *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x547828
// Original: _ZN27CTaskComplexExtinguishFiresD0Ev
// Demangled: CTaskComplexExtinguishFires::~CTaskComplexExtinguishFires()
void __fastcall CTaskComplexExtinguishFires::~CTaskComplexExtinguishFires(CTaskComplexExtinguishFires *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x547838
// Original: _ZN27CTaskComplexExtinguishFires17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexExtinguishFires::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexExtinguishFires::CreateNextSubTask(CTaskComplexExtinguishFires *this, CPed *a2)
{
  int v4; // r0
  bool v5; // zf
  char *v6; // r4
  int v7; // r2
  const CVector *v8; // r1
  float32x2_t *v9; // r6
  float32x2_t *v10; // r0
  void *v11; // r1
  int v12; // r1
  float32x2_t v13; // d16
  unsigned __int64 v14; // d1
  CTaskSimpleGunControl *v15; // r0
  char *v16; // r4
  int v17; // r2
  const CVector *v18; // r1
  CFire *v19; // r6
  float32x2_t *NearestFire; // r0
  int v21; // r1
  float32x2_t v22; // d16
  unsigned __int64 v23; // d1
  CTaskSimpleStandStill *v24; // r0

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v5 = v4 == 203;
  if ( v4 != 203 )
    v5 = v4 == 1020;
  if ( v5 )
  {
    v16 = (char *)a2 + 4;
    v17 = *((_DWORD *)a2 + 5);
    v18 = (CPed *)((char *)a2 + 4);
    v19 = 0;
    if ( v17 )
      v18 = (const CVector *)(v17 + 48);
    NearestFire = (float32x2_t *)CFireManager::FindNearestFire((CFireManager *)gFireManager, v18, 0, 0);
    if ( NearestFire )
    {
      v21 = *((_DWORD *)a2 + 5);
      if ( v21 )
        v16 = (char *)(v21 + 48);
      v22.n64_u64[0] = vsub_f32(*(float32x2_t *)(v16 + 4), NearestFire[1]).n64_u64[0];
      v23 = vmul_f32(v22, v22).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v16 - NearestFire->n64_f32[1])
                                 * (float)(*(float *)v16 - NearestFire->n64_f32[1]))
                         + *(float *)&v23)
                 + *((float *)&v23 + 1)) > (float)(20.0 * 20.0) )
        NearestFire = 0;
      v19 = (CFire *)NearestFire;
    }
    if ( v19 == *((CFire **)this + 3) )
    {
      CFire::Extinguish(v19);
      *((_DWORD *)this + 3) = 0;
    }
    goto LABEL_26;
  }
  if ( v4 != 903 )
    return;
  v6 = (char *)a2 + 4;
  v7 = *((_DWORD *)a2 + 5);
  v8 = (CPed *)((char *)a2 + 4);
  v9 = 0;
  if ( v7 )
    v8 = (const CVector *)(v7 + 48);
  v10 = (float32x2_t *)CFireManager::FindNearestFire((CFireManager *)gFireManager, v8, 0, 0);
  if ( v10 )
  {
    v12 = *((_DWORD *)a2 + 5);
    if ( v12 )
      v6 = (char *)(v12 + 48);
    v13.n64_u64[0] = vsub_f32(*(float32x2_t *)(v6 + 4), v10[1]).n64_u64[0];
    v11 = &CNearbyFireScanner::ms_fNearbyFireRange;
    v14 = vmul_f32(v13, v13).n64_u64[0];
    if ( (float)((float)((float)((float)(*(float *)v6 - v10->n64_f32[1]) * (float)(*(float *)v6 - v10->n64_f32[1]))
                       + *(float *)&v14)
               + *((float *)&v14 + 1)) > (float)(20.0 * 20.0) )
      v10 = 0;
    v9 = v10;
  }
  if ( *((float32x2_t **)this + 3) != v9 )
  {
LABEL_26:
    (*(void (__fastcall **)(CTaskComplexExtinguishFires *, CPed *))(*(_DWORD *)this + 44))(this, a2);
    return;
  }
  if ( *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 361) == 42 )
  {
    v15 = (CTaskSimpleGunControl *)CTask::operator new((CTask *)&off_3C, (unsigned int)v11);
    CTaskSimpleGunControl::CTaskSimpleGunControl(v15, 0, (const CVector *)&v9->n64_u8[4], 0, 5, 1, -1);
  }
  else
  {
    v24 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)v11);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v24, 2000, 0, 0, 8.0);
  }
}


// ============================================================

// Address: 0x5479e0
// Original: _ZNK27CTaskComplexExtinguishFires14GetNearestFireEP4CPed
// Demangled: CTaskComplexExtinguishFires::GetNearestFire(CPed *)
float32x2_t *__fastcall CTaskComplexExtinguishFires::GetNearestFire(CTaskComplexExtinguishFires *this, CPed *a2)
{
  int v3; // r2
  char *v4; // r6
  const CVector *v5; // r1
  int v6; // r5
  float32x2_t *NearestFire; // r0
  int v8; // r1
  float32x2_t v9; // d16
  unsigned __int64 v10; // d1

  v3 = *((_DWORD *)a2 + 5);
  v4 = (char *)a2 + 4;
  v5 = (CPed *)((char *)a2 + 4);
  if ( v3 )
    v5 = (const CVector *)(v3 + 48);
  v6 = 0;
  NearestFire = (float32x2_t *)CFireManager::FindNearestFire((CFireManager *)gFireManager, v5, 0, 0);
  if ( NearestFire )
  {
    v8 = *((_DWORD *)a2 + 5);
    if ( v8 )
      v4 = (char *)(v8 + 48);
    v9.n64_u64[0] = vsub_f32(*(float32x2_t *)(v4 + 4), NearestFire[1]).n64_u64[0];
    v10 = vmul_f32(v9, v9).n64_u64[0];
    if ( (float)((float)((float)((float)(*(float *)v4 - NearestFire->n64_f32[1])
                               * (float)(*(float *)v4 - NearestFire->n64_f32[1]))
                       + *(float *)&v10)
               + *((float *)&v10 + 1)) > (float)(20.0 * 20.0) )
      return 0;
    return NearestFire;
  }
  return (float32x2_t *)v6;
}


// ============================================================

// Address: 0x547a68
// Original: _ZN27CTaskComplexExtinguishFires18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexExtinguishFires::CreateFirstSubTask(CPed *)
CTaskComplexGoToPointAndStandStill *__fastcall CTaskComplexExtinguishFires::CreateFirstSubTask(
        CTaskComplexExtinguishFires *this,
        CPed *a2)
{
  char *v4; // r4
  int v5; // r2
  const CVector *v6; // r1
  CTaskComplexGoToPointAndStandStill *v7; // r9
  unsigned int v8; // r1
  float32x2_t *NearestFire; // r6
  int v10; // r0
  float32x2_t v11; // d16
  unsigned __int64 v12; // d1

  v4 = (char *)a2 + 4;
  v5 = *((_DWORD *)a2 + 5);
  v6 = (CPed *)((char *)a2 + 4);
  if ( v5 )
    v6 = (const CVector *)(v5 + 48);
  v7 = 0;
  NearestFire = (float32x2_t *)CFireManager::FindNearestFire((CFireManager *)gFireManager, v6, 0, 0);
  if ( !NearestFire )
    goto LABEL_7;
  v10 = *((_DWORD *)a2 + 5);
  if ( v10 )
    v4 = (char *)(v10 + 48);
  v11.n64_u64[0] = vsub_f32(*(float32x2_t *)(v4 + 4), NearestFire[1]).n64_u64[0];
  v12 = vmul_f32(v11, v11).n64_u64[0];
  if ( (float)((float)((float)((float)(*(float *)v4 - NearestFire->n64_f32[1])
                             * (float)(*(float *)v4 - NearestFire->n64_f32[1]))
                     + *(float *)&v12)
             + *((float *)&v12 + 1)) <= (float)(20.0 * 20.0) )
  {
    *((_DWORD *)this + 3) = NearestFire;
    v7 = (CTaskComplexGoToPointAndStandStill *)CTask::operator new((CTask *)&word_28, v8);
    CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
      v7,
      6,
      (const CVector *)&NearestFire->n64_u8[4],
      1.5,
      2.0,
      0,
      0);
  }
  else
  {
LABEL_7:
    *((_DWORD *)this + 3) = 0;
  }
  return v7;
}


// ============================================================

// Address: 0x547b30
// Original: _ZN27CTaskComplexExtinguishFires14ControlSubTaskEP4CPed
// Demangled: CTaskComplexExtinguishFires::ControlSubTask(CPed *)
int __fastcall CTaskComplexExtinguishFires::ControlSubTask(CTaskComplexExtinguishFires *this, CPed *a2)
{
  char *v4; // r4
  int v5; // r2
  const CVector *v6; // r1
  float32x2_t *v7; // r5
  float32x2_t *NearestFire; // r0
  int v9; // r1
  float32x2_t v10; // d16
  unsigned __int64 v11; // d1
  int v12; // r6
  char *v14; // r4
  int v15; // r2
  const CVector *v16; // r1
  float32x2_t *v17; // r0
  int v18; // r1
  float32x2_t v19; // d16
  unsigned __int64 v20; // d1
  int v21; // r1
  unsigned __int32 *v22; // r0
  char v23; // r2
  __int64 v24; // d16

  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 1020 )
  {
    v4 = (char *)a2 + 4;
    v5 = *((_DWORD *)a2 + 5);
    v6 = (CPed *)((char *)a2 + 4);
    v7 = 0;
    if ( v5 )
      v6 = (const CVector *)(v5 + 48);
    NearestFire = (float32x2_t *)CFireManager::FindNearestFire((CFireManager *)gFireManager, v6, 0, 0);
    if ( NearestFire )
    {
      v9 = *((_DWORD *)a2 + 5);
      if ( v9 )
        v4 = (char *)(v9 + 48);
      v10.n64_u64[0] = vsub_f32(*(float32x2_t *)(v4 + 4), NearestFire[1]).n64_u64[0];
      v11 = vmul_f32(v10, v10).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v4 - NearestFire->n64_f32[1])
                                 * (float)(*(float *)v4 - NearestFire->n64_f32[1]))
                         + *(float *)&v11)
                 + *((float *)&v11 + 1)) > (float)(20.0 * 20.0) )
        NearestFire = 0;
      v7 = NearestFire;
    }
    v12 = *((_DWORD *)this + 2);
    if ( v7 == *((float32x2_t **)this + 3) )
      return v12;
    if ( (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v12 + 28))(v12, a2, 1, 0) == 1 )
      return (*(int (__fastcall **)(CTaskComplexExtinguishFires *, CPed *))(*(_DWORD *)this + 44))(this, a2);
    return *((_DWORD *)this + 2);
  }
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 903 )
    return *((_DWORD *)this + 2);
  v14 = (char *)a2 + 4;
  v15 = *((_DWORD *)a2 + 5);
  v16 = (CPed *)((char *)a2 + 4);
  v12 = 0;
  if ( v15 )
    v16 = (const CVector *)(v15 + 48);
  v17 = (float32x2_t *)CFireManager::FindNearestFire((CFireManager *)gFireManager, v16, 0, 0);
  if ( !v17 )
    return v12;
  v18 = *((_DWORD *)a2 + 5);
  if ( v18 )
    v14 = (char *)(v18 + 48);
  v19.n64_u64[0] = vsub_f32(*(float32x2_t *)(v14 + 4), v17[1]).n64_u64[0];
  v20 = vmul_f32(v19, v19).n64_u64[0];
  if ( (float)((float)((float)((float)(*(float *)v14 - v17->n64_f32[1]) * (float)(*(float *)v14 - v17->n64_f32[1]))
                     + *(float *)&v20)
             + *((float *)&v20 + 1)) <= (float)(20.0 * 20.0) )
  {
    if ( *((float32x2_t **)this + 3) != v17 )
    {
      v21 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 3) = v17;
      if ( *(float *)(v21 + 16) != v17->n64_f32[1]
        || *(float *)(v21 + 20) != v17[1].n64_f32[0]
        || *(float *)(v21 + 24) != v17[1].n64_f32[1]
        || *(float *)(v21 + 32) != 2.0 )
      {
        v22 = &v17->n64_u32[1];
        v23 = *(_BYTE *)(v21 + 36);
        v24 = *(_QWORD *)v22;
        *(_DWORD *)(v21 + 24) = v22[2];
        *(_DWORD *)(v21 + 28) = 1069547520;
        *(_DWORD *)(v21 + 32) = 0x40000000;
        *(_BYTE *)(v21 + 36) = v23 | 4;
        *(_QWORD *)(v21 + 16) = v24;
      }
    }
    return *((_DWORD *)this + 2);
  }
  return 0;
}


// ============================================================

// Address: 0x54813c
// Original: _ZNK27CTaskComplexExtinguishFires5CloneEv
// Demangled: CTaskComplexExtinguishFires::Clone(void)
_DWORD *__fastcall CTaskComplexExtinguishFires::Clone(CTaskComplexExtinguishFires *this, unsigned int a2)
{
  CTaskComplex *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, a2);
  CTaskComplex::CTaskComplex(v2);
  result[3] = 0;
  *result = &off_66D508;
  return result;
}


// ============================================================

// Address: 0x548160
// Original: _ZNK27CTaskComplexExtinguishFires11GetTaskTypeEv
// Demangled: CTaskComplexExtinguishFires::GetTaskType(void)
int __fastcall CTaskComplexExtinguishFires::GetTaskType(CTaskComplexExtinguishFires *this)
{
  return 604;
}


// ============================================================

// Address: 0x548168
// Original: _ZN27CTaskComplexExtinguishFires9SerializeEv
// Demangled: CTaskComplexExtinguishFires::Serialize(void)
int __fastcall CTaskComplexExtinguishFires::Serialize(CTaskComplexExtinguishFires *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexExtinguishFires *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexExtinguishFires *))(*(_DWORD *)this + 20))(this);
  if ( result != 604 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexExtinguishFires *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(604, v6);
  }
  return result;
}


// ============================================================

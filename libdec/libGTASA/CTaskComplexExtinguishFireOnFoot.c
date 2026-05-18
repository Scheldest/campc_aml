
// Address: 0x1963fc
// Original: j__ZN32CTaskComplexExtinguishFireOnFootC2ERK7CVector
// Demangled: CTaskComplexExtinguishFireOnFoot::CTaskComplexExtinguishFireOnFoot(CVector const&)
// attributes: thunk
void __fastcall CTaskComplexExtinguishFireOnFoot::CTaskComplexExtinguishFireOnFoot(
        CTaskComplexExtinguishFireOnFoot *this,
        const CVector *a2)
{
  _ZN32CTaskComplexExtinguishFireOnFootC2ERK7CVector(this, a2);
}


// ============================================================

// Address: 0x512074
// Original: _ZN32CTaskComplexExtinguishFireOnFootC2ERK7CVector
// Demangled: CTaskComplexExtinguishFireOnFoot::CTaskComplexExtinguishFireOnFoot(CVector const&)
void __fastcall CTaskComplexExtinguishFireOnFoot::CTaskComplexExtinguishFireOnFoot(
        CTaskComplexExtinguishFireOnFoot *this,
        const CVector *a2)
{
  int v3; // r0
  __int64 v4; // d16

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)v3 = &off_66BB40;
  v4 = *(_QWORD *)a2;
  *(_DWORD *)(v3 + 20) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(v3 + 12) = v4;
}


// ============================================================

// Address: 0x51209c
// Original: _ZN32CTaskComplexExtinguishFireOnFootD2Ev
// Demangled: CTaskComplexExtinguishFireOnFoot::~CTaskComplexExtinguishFireOnFoot()
// attributes: thunk
void __fastcall CTaskComplexExtinguishFireOnFoot::~CTaskComplexExtinguishFireOnFoot(
        CTaskComplexExtinguishFireOnFoot *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5120a0
// Original: _ZN32CTaskComplexExtinguishFireOnFootD0Ev
// Demangled: CTaskComplexExtinguishFireOnFoot::~CTaskComplexExtinguishFireOnFoot()
void __fastcall CTaskComplexExtinguishFireOnFoot::~CTaskComplexExtinguishFireOnFoot(
        CTaskComplexExtinguishFireOnFoot *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x5120b0
// Original: _ZN32CTaskComplexExtinguishFireOnFoot17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexExtinguishFireOnFoot::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexExtinguishFireOnFoot::CreateNextSubTask(CTaskComplexExtinguishFireOnFoot *this, CPed *a2)
{
  int v4; // r0
  CTaskSimpleGunControl *v5; // r0

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 == 1020 )
  {
    (*(void (__fastcall **)(CTaskComplexExtinguishFireOnFoot *, CPed *))(*(_DWORD *)this + 44))(this, a2);
  }
  else if ( v4 == 903 )
  {
    v5 = (CTaskSimpleGunControl *)CTask::operator new((CTask *)&off_3C, 0x387u);
    CTaskSimpleGunControl::CTaskSimpleGunControl(
      v5,
      0,
      (CTaskComplexExtinguishFireOnFoot *)((char *)this + 12),
      0,
      4,
      1,
      -1);
  }
}


// ============================================================

// Address: 0x51210c
// Original: _ZN32CTaskComplexExtinguishFireOnFoot18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexExtinguishFireOnFoot::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexExtinguishFireOnFoot::CreateFirstSubTask(CTaskComplexExtinguishFireOnFoot *this, CPed *a2)
{
  char *v4; // r6
  int v5; // r2
  const CVector *v6; // r1
  int v7; // r9
  unsigned int v8; // r1
  float32x2_t *NearestFire; // r5
  int v10; // r0
  float32x2_t v11; // d16
  unsigned __int64 v12; // d1
  __int64 v13; // d16
  CTaskComplexGoToPointAndStandStill *v14; // r0
  int v15; // r0

  v4 = (char *)a2 + 4;
  v5 = *((_DWORD *)a2 + 5);
  v6 = (CPed *)((char *)a2 + 4);
  if ( v5 )
    v6 = (const CVector *)(v5 + 48);
  v7 = 0;
  NearestFire = (float32x2_t *)CFireManager::FindNearestFire((CFireManager *)gFireManager, v6, 0, 1);
  if ( NearestFire )
  {
    v10 = *((_DWORD *)a2 + 5);
    v7 = 0;
    if ( v10 )
      v4 = (char *)(v10 + 48);
    v11.n64_u64[0] = vsub_f32(*(float32x2_t *)(v4 + 4), NearestFire[1]).n64_u64[0];
    v12 = vmul_f32(v11, v11).n64_u64[0];
    if ( (float)((float)((float)((float)(*(float *)v4 - NearestFire->n64_f32[1])
                               * (float)(*(float *)v4 - NearestFire->n64_f32[1]))
                       + *(float *)&v12)
               + *((float *)&v12 + 1)) < 100.0 )
    {
      v13 = *(__int64 *)((char *)NearestFire->n64_i64 + 4);
      *((_DWORD *)this + 5) = NearestFire[1].n64_u32[1];
      *(_QWORD *)((char *)this + 12) = v13;
      v14 = (CTaskComplexGoToPointAndStandStill *)CTask::operator new((CTask *)&word_28, v8);
      CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
        v14,
        6,
        (const CVector *)&NearestFire->n64_u8[4],
        2.0,
        2.0,
        0,
        0);
      return v15;
    }
  }
  return v7;
}


// ============================================================

// Address: 0x5121cc
// Original: _ZN32CTaskComplexExtinguishFireOnFoot15FindNearestFireEP4CPed
// Demangled: CTaskComplexExtinguishFireOnFoot::FindNearestFire(CPed *)
float32x2_t *__fastcall CTaskComplexExtinguishFireOnFoot::FindNearestFire(
        CTaskComplexExtinguishFireOnFoot *this,
        CPed *a2)
{
  int v3; // r2
  char *v4; // r6
  const CVector *v5; // r1
  int v6; // r4
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
  NearestFire = (float32x2_t *)CFireManager::FindNearestFire((CFireManager *)gFireManager, v5, 0, 1);
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
               + *((float *)&v10 + 1)) < 100.0 )
      return NearestFire;
  }
  return (float32x2_t *)v6;
}


// ============================================================

// Address: 0x512248
// Original: _ZN32CTaskComplexExtinguishFireOnFoot14ControlSubTaskEP4CPed
// Demangled: CTaskComplexExtinguishFireOnFoot::ControlSubTask(CPed *)
int __fastcall CTaskComplexExtinguishFireOnFoot::ControlSubTask(CTaskComplexExtinguishFireOnFoot *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x512754
// Original: _ZNK32CTaskComplexExtinguishFireOnFoot5CloneEv
// Demangled: CTaskComplexExtinguishFireOnFoot::Clone(void)
int __fastcall CTaskComplexExtinguishFireOnFoot::Clone(CTaskComplexExtinguishFireOnFoot *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int result; // r0
  __int64 v5; // d16

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, a2);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)result = &off_66BB40;
  v5 = *(_QWORD *)((char *)this + 12);
  *(_DWORD *)(result + 20) = *((_DWORD *)this + 5);
  *(_QWORD *)(result + 12) = v5;
  return result;
}


// ============================================================

// Address: 0x512780
// Original: _ZNK32CTaskComplexExtinguishFireOnFoot11GetTaskTypeEv
// Demangled: CTaskComplexExtinguishFireOnFoot::GetTaskType(void)
int __fastcall CTaskComplexExtinguishFireOnFoot::GetTaskType(CTaskComplexExtinguishFireOnFoot *this)
{
  return 110;
}


// ============================================================

// Address: 0x512784
// Original: _ZN32CTaskComplexExtinguishFireOnFoot9SerializeEv
// Demangled: CTaskComplexExtinguishFireOnFoot::Serialize(void)
void __fastcall CTaskComplexExtinguishFireOnFoot::Serialize(CTaskComplexExtinguishFireOnFoot *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  __int64 v6; // d16
  int v7; // r2
  int v8; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexExtinguishFireOnFoot *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexExtinguishFireOnFoot *))(*(_DWORD *)this + 20))(this) == 110 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(0xCu);
    v6 = *(_QWORD *)((char *)this + 12);
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 5);
    *(_QWORD *)v5 = v6;
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, &byte_9[3], v7);
    j_free(v5);
  }
  else
  {
    v8 = (*(int (__fastcall **)(CTaskComplexExtinguishFireOnFoot *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(110, v8);
  }
}


// ============================================================

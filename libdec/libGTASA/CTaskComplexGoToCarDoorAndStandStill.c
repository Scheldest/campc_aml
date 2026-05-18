
// Address: 0x19647c
// Original: j__ZN36CTaskComplexGoToCarDoorAndStandStill18ComputeRouteToDoorERK4CPed
// Demangled: CTaskComplexGoToCarDoorAndStandStill::ComputeRouteToDoor(CPed const&)
// attributes: thunk
int __fastcall CTaskComplexGoToCarDoorAndStandStill::ComputeRouteToDoor(
        CTaskComplexGoToCarDoorAndStandStill *this,
        const CPed *a2)
{
  return _ZN36CTaskComplexGoToCarDoorAndStandStill18ComputeRouteToDoorERK4CPed(this, a2);
}


// ============================================================

// Address: 0x198874
// Original: j__ZN36CTaskComplexGoToCarDoorAndStandStillC2EP8CVehicleibifffi
// Demangled: CTaskComplexGoToCarDoorAndStandStill::CTaskComplexGoToCarDoorAndStandStill(CVehicle *,int,bool,int,float,float,float,int)
// attributes: thunk
void __fastcall CTaskComplexGoToCarDoorAndStandStill::CTaskComplexGoToCarDoorAndStandStill(
        CTaskComplexGoToCarDoorAndStandStill *this,
        CVehicle *a2,
        int a3,
        bool a4,
        int a5,
        float a6,
        float a7,
        float a8,
        int a9)
{
  _ZN36CTaskComplexGoToCarDoorAndStandStillC2EP8CVehicleibifffi(this, a2, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================

// Address: 0x19d41c
// Original: j__ZNK36CTaskComplexGoToCarDoorAndStandStill13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexGoToCarDoorAndStandStill::CreateSubTask(int,CPed *)
// attributes: thunk
int __fastcall CTaskComplexGoToCarDoorAndStandStill::CreateSubTask(
        CTaskComplexGoToCarDoorAndStandStill *this,
        int a2,
        CPed *a3)
{
  return _ZNK36CTaskComplexGoToCarDoorAndStandStill13CreateSubTaskEiP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x1a1470
// Original: j__ZN36CTaskComplexGoToCarDoorAndStandStill10CreateTaskEv
// Demangled: CTaskComplexGoToCarDoorAndStandStill::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexGoToCarDoorAndStandStill::CreateTask(CTaskComplexGoToCarDoorAndStandStill *this)
{
  return _ZN36CTaskComplexGoToCarDoorAndStandStill10CreateTaskEv(this);
}


// ============================================================

// Address: 0x4941dc
// Original: _ZN36CTaskComplexGoToCarDoorAndStandStill10CreateTaskEv
// Demangled: CTaskComplexGoToCarDoorAndStandStill::CreateTask(void)
void __fastcall CTaskComplexGoToCarDoorAndStandStill::CreateTask(
        CTaskComplexGoToCarDoorAndStandStill *this,
        int a2,
        int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  int v7; // r2
  char v8; // r5
  int v9; // r2
  char v10; // r5
  int v11; // r2
  char v12; // r5
  int v13; // r2
  char v14; // r5
  int v15; // r2
  char v16; // r5
  unsigned int v17; // r1
  CTaskComplexGoToCarDoorAndStandStill *v18; // r0
  int v19; // [sp+14h] [bp-2Ch] BYREF
  float v20; // [sp+18h] [bp-28h] BYREF
  float v21; // [sp+1Ch] [bp-24h] BYREF
  int v22; // [sp+20h] [bp-20h] BYREF
  bool v23; // [sp+27h] [bp-19h] BYREF
  int v24; // [sp+28h] [bp-18h] BYREF
  CPools *v25[5]; // [sp+2Ch] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v25, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v25, byte_4, a3);
  if ( v25[0] == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v25[0], (int)v25[0] + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v24, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v24, byte_4, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v23, (char *)&stderr + 1, v7);
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, (char *)&stderr + 2, v9);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, byte_4, v9);
  v12 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, (char *)&stderr + 2, v11);
    UseDataFence = v12;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, byte_4, v11);
  v14 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 2, v13);
    UseDataFence = v14;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, byte_4, v13);
  v16 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v19, (char *)&stderr + 2, v15);
    UseDataFence = v16;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v19, byte_4, v15);
  v18 = (CTaskComplexGoToCarDoorAndStandStill *)CTask::operator new((CTask *)&dword_50, v17);
  CTaskComplexGoToCarDoorAndStandStill::CTaskComplexGoToCarDoorAndStandStill(
    v18,
    Vehicle,
    v24,
    v23,
    v22,
    v21,
    v20,
    (float)v19,
    30000);
}


// ============================================================

// Address: 0x4ff9f0
// Original: _ZN36CTaskComplexGoToCarDoorAndStandStillC2EP8CVehicleibifffi
// Demangled: CTaskComplexGoToCarDoorAndStandStill::CTaskComplexGoToCarDoorAndStandStill(CVehicle *,int,bool,int,float,float,float,int)
void __fastcall CTaskComplexGoToCarDoorAndStandStill::CTaskComplexGoToCarDoorAndStandStill(
        CTaskComplexGoToCarDoorAndStandStill *this,
        CVehicle *a2,
        int a3,
        bool a4,
        int a5,
        float a6,
        float a7,
        float a8,
        int a9)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = a3;
  *((_BYTE *)this + 20) = a4;
  *((float *)this + 6) = a6;
  *((float *)this + 7) = a7;
  *((float *)this + 8) = a8;
  *((_DWORD *)this + 9) = a9;
  *((_WORD *)this + 24) = 0;
  *((_DWORD *)this + 17) = a5;
  *((_WORD *)this + 36) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 11) = 0;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 60) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_DWORD *)this = &off_66AFCC;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4ffa70
// Original: _ZN36CTaskComplexGoToCarDoorAndStandStillD2Ev
// Demangled: CTaskComplexGoToCarDoorAndStandStill::~CTaskComplexGoToCarDoorAndStandStill()
void __fastcall CTaskComplexGoToCarDoorAndStandStill::~CTaskComplexGoToCarDoorAndStandStill(
        CTaskComplexGoToCarDoorAndStandStill *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AFCC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (void *)*((_DWORD *)this + 19);
  if ( v4 )
    CPointRoute::operator delete(v4);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4ffaa8
// Original: _ZN36CTaskComplexGoToCarDoorAndStandStillD0Ev
// Demangled: CTaskComplexGoToCarDoorAndStandStill::~CTaskComplexGoToCarDoorAndStandStill()
void __fastcall CTaskComplexGoToCarDoorAndStandStill::~CTaskComplexGoToCarDoorAndStandStill(
        CTaskComplexGoToCarDoorAndStandStill *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AFCC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (void *)*((_DWORD *)this + 19);
  if ( v4 )
    CPointRoute::operator delete(v4);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x4ffae4
// Original: _ZN36CTaskComplexGoToCarDoorAndStandStill17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexGoToCarDoorAndStandStill::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexGoToCarDoorAndStandStill::CreateNextSubTask(
        CTaskComplexGoToCarDoorAndStandStill *this,
        CPed *a2)
{
  int v4; // r0
  unsigned int v5; // r1
  int v6; // r5
  double v7; // d16
  unsigned int v8; // r1
  CTaskSimple *v10; // r0
  CEntity *v11; // r6
  int v12; // r4
  int v13; // r1
  int v14; // r0
  float *v15; // r2
  float32x2_t *v16; // r0
  float32x2_t *v17; // r1
  float32x2_t v18; // d16
  unsigned __int64 v19; // d0
  double v20; // [sp+8h] [bp-20h] BYREF
  int v21; // [sp+10h] [bp-18h]

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v6 = 0;
  if ( v4 >= 828 )
  {
    if ( v4 == 828 )
    {
      v10 = (CTaskSimple *)CTask::operator new((CTask *)&dword_14, v5);
      v11 = (CEntity *)*((_DWORD *)this + 3);
      v6 = (int)v10;
      v12 = *((_DWORD *)this + 13);
      CTaskSimple::CTaskSimple(v10);
      *(_DWORD *)(v6 + 12) = v12;
      *(_DWORD *)(v6 + 16) = 0;
      *(_DWORD *)v6 = &off_66B1DC;
      *(_DWORD *)(v6 + 8) = v11;
      if ( v11 )
        CEntity::RegisterReference(v11, (CEntity **)(v6 + 8));
      return v6;
    }
    if ( v4 != 900 )
    {
      if ( v4 == 905 )
      {
        CCarEnterExit::GetPositionToOpenCarDoor(
          (CCarEnterExit *)&v20,
          *((const CVehicle **)this + 3),
          *((_DWORD *)this + 13));
        v7 = v20;
        *((_DWORD *)this + 16) = v21;
        *((double *)this + 7) = v7;
        *((_DWORD *)a2 + 291) |= 8u;
        v6 = CTask::operator new((CTask *)&word_2C, v8);
        CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(
          (CTaskSimpleGoToPoint *)v6,
          *((_DWORD *)this + 4),
          (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 56),
          *((float *)this + 6),
          1,
          0);
      }
      return v6;
    }
    v13 = *((_DWORD *)a2 + 5);
    v6 = 0;
    v14 = *((_DWORD *)this + 2);
    v15 = (float *)(v13 + 48);
    if ( !v13 )
      v15 = (float *)((char *)a2 + 4);
    if ( fabsf(*(float *)(v14 + 20) - v15[2]) >= 3.0 || (*(_BYTE *)(v14 + 29) & 4) == 0 )
      return v6;
LABEL_20:
    *((_BYTE *)this + 73) = 1;
    return 0;
  }
  if ( v4 == 202 )
  {
    if ( !*((_BYTE *)this + 72) )
      return 0;
    v16 = (float32x2_t *)*((_DWORD *)a2 + 5);
    v17 = v16 + 6;
    if ( !v16 )
      v17 = (float32x2_t *)((char *)a2 + 4);
    v18.n64_u64[0] = vsub_f32(*((float32x2_t *)this + 7), (float32x2_t)v17->n64_u64[0]).n64_u64[0];
    v19 = vmul_f32(v18, v18).n64_u64[0];
    if ( sqrtf(*(float *)&v19 + *((float *)&v19 + 1)) >= 0.5 )
      return 0;
    goto LABEL_20;
  }
  if ( v4 == 810 )
    return (*(int (__fastcall **)(CTaskComplexGoToCarDoorAndStandStill *, CPed *))(*(_DWORD *)this + 44))(this, a2);
  return v6;
}


// ============================================================

// Address: 0x4ffc30
// Original: _ZNK36CTaskComplexGoToCarDoorAndStandStill13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexGoToCarDoorAndStandStill::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexGoToCarDoorAndStandStill::CreateSubTask(
        CTaskComplexGoToCarDoorAndStandStill *this,
        int a2,
        CPed *a3)
{
  int v4; // r4
  CTaskSimple *v5; // r0
  CEntity *v6; // r6
  int v7; // r5
  unsigned int v8; // r1
  unsigned int v9; // r1

  v4 = 0;
  if ( a2 >= 828 )
  {
    switch ( a2 )
    {
      case 828:
        v9 = *((_DWORD *)a3 + 291);
        *((_DWORD *)a3 + 291) = v9 | 8;
        v4 = CTask::operator new((CTask *)&word_10, v9);
        CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse(
          (CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse *)v4,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 13),
          (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 56),
          *((_DWORD *)this + 4));
        break;
      case 905:
        v4 = CTask::operator new((CTask *)&off_3C, 0x389u);
        CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
          (CTaskComplexFollowPointRoute *)v4,
          *((_DWORD *)this + 4),
          *((const CPointRoute **)this + 19),
          0,
          0.5,
          5.0,
          0,
          0,
          0);
        break;
      case 900:
        v8 = *((_DWORD *)a3 + 291);
        *((_DWORD *)a3 + 291) = v8 | 8;
        v4 = CTask::operator new((CTask *)&word_2C, v8);
        CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(
          (CTaskSimpleGoToPoint *)v4,
          *((_DWORD *)this + 4),
          (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 56),
          *((float *)this + 6),
          1,
          0);
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 202:
        v4 = CTask::operator new((CTask *)&off_18, 0xCAu);
        CTaskSimple::CTaskSimple((CTaskSimple *)v4);
        *(_WORD *)(v4 + 16) = 0;
        *(_DWORD *)(v4 + 20) = 1;
        *(_DWORD *)(v4 + 8) = 0;
        *(_DWORD *)(v4 + 12) = 0;
        *(_DWORD *)v4 = &off_665760;
        break;
      case 203:
        v4 = CTask::operator new((CTask *)&dword_20, 0xCBu);
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v4, 1, 0, 0, 8.0);
        break;
      case 810:
        v5 = (CTaskSimple *)CTask::operator new((CTask *)&dword_14, 0x32Au);
        v6 = (CEntity *)*((_DWORD *)this + 3);
        v4 = (int)v5;
        v7 = *((_DWORD *)this + 13);
        CTaskSimple::CTaskSimple(v5);
        *(_DWORD *)(v4 + 12) = v7;
        *(_DWORD *)(v4 + 16) = 0;
        *(_DWORD *)v4 = &off_66B1DC;
        *(_DWORD *)(v4 + 8) = v6;
        if ( v6 )
          CEntity::RegisterReference(v6, (CEntity **)(v4 + 8));
        break;
    }
  }
  return v4;
}


// ============================================================

// Address: 0x4ffd80
// Original: _ZN36CTaskComplexGoToCarDoorAndStandStill13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexGoToCarDoorAndStandStill::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexGoToCarDoorAndStandStill::MakeAbortable(
        CTaskComplexGoToCarDoorAndStandStill *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v6; // r0
  bool v9; // zf
  int v10; // r0

  v6 = *((unsigned __int8 *)this + 72);
  v9 = v6 == 0;
  if ( v6 )
  {
    v6 = *((_DWORD *)this + 2);
    v9 = v6 == 0;
  }
  if ( !v9
    && (v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6), a4)
    && v10 == 202
    && ((*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 66
     || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 33) )
  {
    return 0;
  }
  else
  {
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             a3,
             a4);
  }
}


// ============================================================

// Address: 0x4ffde2
// Original: _ZNK36CTaskComplexGoToCarDoorAndStandStill16IsVehicleInRangeERK4CPed
// Demangled: CTaskComplexGoToCarDoorAndStandStill::IsVehicleInRange(CPed const&)
bool __fastcall CTaskComplexGoToCarDoorAndStandStill::IsVehicleInRange(
        CTaskComplexGoToCarDoorAndStandStill *this,
        const CPed *a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // lr
  char *v5; // r2
  int v6; // r1
  float32x2_t v7; // d16
  unsigned __int64 v8; // d1

  v2 = *((_DWORD *)this + 3);
  v3 = *((_DWORD *)a2 + 5);
  v4 = *(_DWORD *)(v2 + 20);
  v5 = (char *)(v3 + 48);
  if ( !v3 )
    v5 = (char *)a2 + 4;
  v6 = v4 + 48;
  if ( !v4 )
    v6 = v2 + 4;
  v7.n64_u64[0] = vsub_f32(*(float32x2_t *)(v6 + 4), *(float32x2_t *)(v5 + 4)).n64_u64[0];
  v8 = vmul_f32(v7, v7).n64_u64[0];
  return (float)((float)((float)((float)(*(float *)v6 - *(float *)v5) * (float)(*(float *)v6 - *(float *)v5))
                       + *(float *)&v8)
               + *((float *)&v8 + 1)) < (float)(*((float *)this + 8) * *((float *)this + 8));
}


// ============================================================

// Address: 0x4ffe48
// Original: _ZN36CTaskComplexGoToCarDoorAndStandStill18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGoToCarDoorAndStandStill::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexGoToCarDoorAndStandStill::CreateFirstSubTask(
        CTaskComplexGoToCarDoorAndStandStill *this,
        CPed *a2)
{
  CCarEnterExit *v4; // r1
  int v5; // r0
  int v6; // r2
  char *v7; // r3
  _DWORD *v8; // r0
  float32x2_t v9; // d16
  unsigned __int64 v10; // d1
  CTaskSimple *v11; // r0
  int v12; // r0
  int v13; // r2
  const CVector *v14; // r3
  double v15; // d16
  CVehicle *v16; // r2
  CCarEnterExit *v17; // r0
  const CPed *v18; // r1
  int v19; // r0
  int v20; // r0
  int v21; // r2
  double v22; // d16
  int v23; // r2
  int v24; // r0
  int v25; // r1
  const CVector *v26; // r3
  int v27; // r2
  const CPed *v28; // r1
  int v29; // r0
  unsigned int v30; // r1
  unsigned int v31; // r1
  CTaskComplexFollowPointRoute *v32; // r0
  CTaskSimpleStandStill *v33; // r0
  const CVector *v34; // r3
  int v35; // r2
  const CPed *v36; // r1
  int v37; // r0
  int v38; // r1
  const CVector *v39; // r3
  CTaskSimpleGoToPoint *v40; // r0
  int *v41; // [sp+0h] [bp-40h]
  bool v42; // [sp+Ch] [bp-34h]
  bool v43; // [sp+Ch] [bp-34h]
  double v44; // [sp+18h] [bp-28h] BYREF
  int v45; // [sp+20h] [bp-20h]

  v4 = (CCarEnterExit *)*((_DWORD *)this + 3);
  v5 = *((_DWORD *)a2 + 5);
  v6 = *((_DWORD *)v4 + 5);
  v7 = (char *)(v5 + 48);
  if ( !v5 )
    v7 = (char *)a2 + 4;
  v8 = (_DWORD *)(v6 + 48);
  if ( !v6 )
    v8 = (_DWORD *)((char *)v4 + 4);
  v9.n64_u64[0] = vsub_f32(*(float32x2_t *)(v8 + 1), *(float32x2_t *)(v7 + 4)).n64_u64[0];
  v10 = vmul_f32(v9, v9).n64_u64[0];
  if ( (float)((float)((float)((float)(*(float *)v8 - *(float *)v7) * (float)(*(float *)v8 - *(float *)v7))
                     + *(float *)&v10)
             + *((float *)&v10 + 1)) >= (float)(*((float *)this + 8) * *((float *)this + 8)) )
    goto LABEL_22;
  if ( *((_BYTE *)this + 72) )
  {
    v11 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, (unsigned int)v4);
    CTaskSimple::CTaskSimple(v11);
    *(_WORD *)(v12 + 16) = 0;
    *(_DWORD *)(v12 + 20) = 1;
    *(_DWORD *)(v12 + 8) = 0;
    *(_DWORD *)(v12 + 12) = 0;
    *(_DWORD *)v12 = &off_665760;
    return;
  }
  v13 = *((_DWORD *)this + 17);
  if ( !*((_BYTE *)this + 20) )
  {
    if ( v13 )
    {
      v19 = CCarEnterExit::ComputePassengerIndexFromCarDoor(v4, *((const CVehicle **)this + 17), v13);
      v4 = (CCarEnterExit *)*((_DWORD *)this + 3);
      v20 = *((_DWORD *)v4 + v19 + 282);
      if ( !v20 || (*(_BYTE *)(v20 + 1159) & 0x20) == 0 )
      {
        v21 = *((_DWORD *)this + 17);
        *((_DWORD *)this + 13) = v21;
        CCarEnterExit::GetPositionToOpenCarDoor((CCarEnterExit *)&v44, v4, v21);
        v14 = (const CVector *)((char *)&stderr + 1);
        v22 = v44;
        *((_DWORD *)this + 16) = v45;
        *((double *)this + 7) = v22;
        v23 = *((_DWORD *)this + 9);
        v18 = (const CPed *)*((_DWORD *)this + 3);
        v24 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 48) = (unsigned __int8)&stderr + 1;
        *((_DWORD *)this + 10) = v24;
        *((_DWORD *)this + 11) = v23;
        v16 = (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 56);
        v17 = a2;
        goto LABEL_15;
      }
LABEL_22:
      v33 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)v4);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v33, 1, 0, 0, 8.0);
      return;
    }
    if ( CCarEnterExit::GetNearestCarPassengerDoor(
           a2,
           v4,
           (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 56),
           (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 52),
           (int *)((char *)&stderr + 1),
           (bool)&stderr + 1,
           (bool)&stderr + 1,
           v42) == 1 )
    {
      v35 = *((_DWORD *)this + 9);
      v36 = (const CPed *)*((_DWORD *)this + 3);
      v37 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 48) = (unsigned __int8)&stderr + 1;
      *((_DWORD *)this + 10) = v37;
      *((_DWORD *)this + 11) = v35;
      if ( CCarEnterExit::IsPathToDoorBlockedByVehicleCollisionModel(
             a2,
             v36,
             (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 56),
             v34) != 1 )
      {
        v38 = 900;
LABEL_32:
        CTaskComplexGoToCarDoorAndStandStill::CreateSubTask(this, v38, a2);
        return;
      }
    }
    else
    {
      if ( CCarEnterExit::GetNearestCarPassengerDoor(
             a2,
             *((const CPed **)this + 3),
             (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 56),
             (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 52),
             (int *)((char *)&stderr + 1),
             0,
             (bool)&stderr + 1,
             v43) != 1 )
      {
        v38 = 203;
        goto LABEL_32;
      }
      if ( CCarEnterExit::IsPathToDoorBlockedByVehicleCollisionModel(
             a2,
             *((const CPed **)this + 3),
             (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 56),
             v39) != 1 )
      {
        v38 = 828;
        goto LABEL_32;
      }
    }
    CTaskComplexGoToCarDoorAndStandStill::ComputeRouteToDoor(this, a2);
    v38 = 905;
    goto LABEL_32;
  }
  if ( !v13 )
  {
    if ( CCarEnterExit::GetNearestCarDoor(
           a2,
           v4,
           (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 56),
           (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 52),
           v41) == 1 )
    {
      v27 = *((_DWORD *)this + 9);
      v28 = (const CPed *)*((_DWORD *)this + 3);
      v29 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 48) = 1;
      *((_DWORD *)this + 10) = v29;
      *((_DWORD *)this + 11) = v27;
      if ( CCarEnterExit::IsPathToDoorBlockedByVehicleCollisionModel(
             a2,
             v28,
             (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 56),
             v26) == 1 )
      {
        CTaskComplexGoToCarDoorAndStandStill::ComputeRouteToDoor(this, a2);
        v32 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, v31);
        CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
          v32,
          *((_DWORD *)this + 4),
          *((const CPointRoute **)this + 19),
          0,
          0.5,
          5.0,
          0,
          0,
          0);
      }
      else
      {
        *((_DWORD *)a2 + 291) |= 8u;
        v40 = (CTaskSimpleGoToPoint *)CTask::operator new((CTask *)&word_2C, v30);
        CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(
          v40,
          *((_DWORD *)this + 4),
          (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 56),
          *((float *)this + 6),
          1,
          0);
      }
      return;
    }
    goto LABEL_22;
  }
  *((_DWORD *)this + 13) = v13;
  CCarEnterExit::GetPositionToOpenCarDoor((CCarEnterExit *)&v44, v4, v13);
  v15 = v44;
  v16 = (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 56);
  *((_DWORD *)this + 16) = v45;
  v17 = a2;
  *((double *)this + 7) = v15;
  v18 = (const CPed *)*((_DWORD *)this + 3);
LABEL_15:
  if ( CCarEnterExit::IsPathToDoorBlockedByVehicleCollisionModel(v17, v18, v16, v14) == 1 )
  {
    CTaskComplexGoToCarDoorAndStandStill::ComputeRouteToDoor(this, a2);
    v25 = 905;
  }
  else
  {
    v25 = 900;
  }
  CTaskComplexGoToCarDoorAndStandStill::CreateSubTask(this, v25, a2);
}


// ============================================================

// Address: 0x5000dc
// Original: _ZN36CTaskComplexGoToCarDoorAndStandStill18ComputeRouteToDoorERK4CPed
// Demangled: CTaskComplexGoToCarDoorAndStandStill::ComputeRouteToDoor(CPed const&)
int *__fastcall CTaskComplexGoToCarDoorAndStandStill::ComputeRouteToDoor(
        CTaskComplexGoToCarDoorAndStandStill *this,
        const CPed *a2)
{
  _DWORD *v4; // r0
  int v5; // r5
  float *v6; // r8
  CEntity *v7; // r2
  CPedGeometryAnalyser *v8; // r0
  int v9; // r6
  CEntity *v10; // r2
  int v11; // r9
  int v12; // r0
  CPedGeometryAnalyser **v13; // r1
  float *v14; // r0
  float v15; // s0
  float v16; // s2
  float v17; // s4
  int v18; // r0
  float v19; // s6
  float v20; // s8
  float v21; // s10
  float *v22; // r0
  float v23; // s12
  float v24; // s0
  float v25; // s6
  float v26; // s2
  float v27; // s8
  float v28; // s14
  float v29; // s4
  float v30; // s10
  float v31; // s12
  int *result; // r0
  int v33; // r1
  double v34; // d16
  int *v35; // r1
  int v36; // r6
  int *v37; // r2
  int v38; // r3
  __int64 v39; // d16
  int *v40; // r1
  double v41; // d16
  int *v42; // r1
  float *v43; // [sp+0h] [bp-E8h]
  int v44; // [sp+8h] [bp-E0h]
  int v45; // [sp+Ch] [bp-DCh] BYREF
  int v46; // [sp+10h] [bp-D8h] BYREF
  double v47; // [sp+70h] [bp-78h] BYREF
  float v48; // [sp+78h] [bp-70h]
  double v49; // [sp+80h] [bp-68h] BYREF
  float v50; // [sp+88h] [bp-60h]
  float v51[4]; // [sp+8Ch] [bp-5Ch] BYREF
  _DWORD v52[19]; // [sp+9Ch] [bp-4Ch] BYREF

  v4 = (_DWORD *)*((_DWORD *)this + 19);
  if ( !v4 )
  {
    v4 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, (unsigned int)a2);
    *v4 = 0;
    *((_DWORD *)this + 19) = v4;
  }
  v5 = 0;
  v6 = (float *)((char *)a2 + 4);
  *v4 = 0;
  v7 = (CEntity *)*((_DWORD *)a2 + 5);
  v8 = (const CPed *)((char *)a2 + 4);
  if ( v7 )
    v8 = (CEntity *)((char *)v7 + 48);
  v9 = CPedGeometryAnalyser::ComputeEntityHitSide(v8, *((const CVector **)this + 3), v7);
  v11 = CPedGeometryAnalyser::ComputeEntityHitSide(
          (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 56),
          *((const CVector **)this + 3),
          v10);
  v12 = *((_DWORD *)a2 + 5);
  v13 = (CPedGeometryAnalyser **)((char *)a2 + 4);
  if ( v12 )
    v13 = (CPedGeometryAnalyser **)(v12 + 48);
  CPedGeometryAnalyser::ComputeEntityBoundingBoxPlanes(
    v13[2],
    *((float *)this + 3),
    (CEntity *)v52,
    (CVector *)v51,
    v43);
  v14 = (float *)&v52[3 * v9];
  v15 = *v14;
  v16 = v14[1];
  v17 = v14[2];
  v18 = *((_DWORD *)a2 + 5);
  if ( v18 )
    v6 = (float *)(v18 + 48);
  v19 = *v6;
  v20 = v6[1];
  v21 = v6[2];
  v22 = (float *)&v52[3 * v11];
  v23 = v51[v9] + (float)((float)((float)(v15 * *v6) + (float)(v16 * v20)) + (float)(v17 * v21));
  *((float *)&v49 + 1) = v20 - (float)(v16 * v23);
  *(float *)&v49 = v19 - (float)(v15 * v23);
  v50 = v21 - (float)(v17 * v23);
  v24 = *v22;
  v25 = *((float *)this + 14);
  v26 = v22[1];
  v27 = *((float *)this + 15);
  v28 = *v22 * v25;
  v29 = v22[2];
  v30 = *((float *)this + 16);
  v45 = 0;
  v31 = v51[v11] + (float)((float)(v28 + (float)(v26 * v27)) + (float)(v29 * v30));
  *((float *)&v47 + 1) = v27 - (float)(v26 * v31);
  *(float *)&v47 = v25 - (float)(v24 * v31);
  v48 = v30 - (float)(v29 * v31);
  CPedGeometryAnalyser::ComputeRouteRoundEntityBoundingBox(
    a2,
    (const CPed *)&v49,
    *((const CVector **)this + 3),
    (CEntity *)&v47,
    (const CVector *)&v45,
    0,
    v44);
  result = (int *)*((_DWORD *)this + 19);
  v33 = *result;
  if ( *result <= 7 )
  {
    v34 = v49;
    v35 = &result[3 * v33];
    *((float *)v35 + 3) = v50;
    *(double *)(v35 + 1) = v34;
    ++*result;
    result = (int *)*((_DWORD *)this + 19);
    v33 = *result;
  }
  v36 = v45;
  if ( v33 < 8 )
    v5 = 1;
  if ( v45 >= 1 )
  {
    v37 = &v46;
    v38 = 0;
    do
    {
      if ( v5 << 31 )
      {
        v39 = *(_QWORD *)v37;
        v40 = &result[3 * v33];
        v40[3] = v37[2];
        *(_QWORD *)(v40 + 1) = v39;
        ++*result;
        result = (int *)*((_DWORD *)this + 19);
        v36 = v45;
      }
      v33 = *result;
      v37 += 3;
      ++v38;
      v5 = *result < 8;
    }
    while ( v38 < v36 );
  }
  if ( v5 == 1 )
  {
    v41 = v47;
    v42 = &result[3 * v33];
    *((float *)v42 + 3) = v48;
    *(double *)(v42 + 1) = v41;
    ++*result;
  }
  return result;
}


// ============================================================

// Address: 0x5002c0
// Original: _ZN36CTaskComplexGoToCarDoorAndStandStill14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGoToCarDoorAndStandStill::ControlSubTask(CPed *)
void __fastcall CTaskComplexGoToCarDoorAndStandStill::ControlSubTask(
        CTaskComplexGoToCarDoorAndStandStill *this,
        CPed *a2)
{
  CPed *v4; // r0
  int v5; // r1
  bool v6; // zf
  const CPed *v7; // r1
  int v8; // r1
  int v9; // r0
  int v10; // r2
  char *v11; // r3
  _DWORD *v12; // r0
  float32x2_t v13; // d16
  unsigned __int64 v14; // d1
  const CVector *v15; // r6
  float32x2_t v16; // d16
  unsigned __int64 v17; // d1
  __int64 v18; // d16
  int v19; // r2
  __int64 v20; // d16
  const CVehicle *v21; // r1
  int v22; // r0
  int v23; // r2
  char *v24; // r3
  _DWORD *v25; // r0
  float32x2_t v26; // d16
  unsigned __int64 v27; // d1
  double v28; // d16
  int v29; // r0
  float v30; // s0
  char v31; // r2
  __int64 v32; // d16
  __int64 v33; // d16
  CTaskSimpleStandStill *v34; // r0
  __int64 v35; // d16
  CTaskSimpleStandStill *v36; // r0
  __int64 v37; // d16
  unsigned int v38; // r1
  int v39; // r2
  int v40; // r3
  CTaskSimpleGoToPoint *v41; // r0
  __int64 *v42; // r6
  __int64 v43; // d16
  int v44; // r0
  float v45; // s0
  float v46; // s2
  __int64 v47; // d16
  char v48; // r1
  __int64 v49; // d16
  int v50; // r1
  __int64 v51; // d16
  int *v52; // [sp+0h] [bp-40h]
  bool v53; // [sp+Ch] [bp-34h]
  double v54; // [sp+10h] [bp-30h] BYREF
  int v55; // [sp+18h] [bp-28h]
  _BYTE v56[24]; // [sp+20h] [bp-20h] BYREF

  v4 = (CPed *)*((_DWORD *)this + 3);
  if ( !v4 )
    return;
  v5 = *((_DWORD *)a2 + 359);
  v6 = v5 == 6;
  if ( v5 != 6 )
  {
    v4 = (CPed *)*((_DWORD *)v4 + 281);
    v6 = v4 == 0;
  }
  if ( !v6 && CPed::IsPlayer(v4) == 1 && *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 1124) + 1100) == 63 )
  {
LABEL_38:
    v34 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)v7);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v34, 1, 0, 0, 8.0);
    return;
  }
  v8 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v8 < 828 )
  {
    if ( (unsigned int)(v8 - 202) >= 2 && v8 != 810 )
      return;
LABEL_23:
    v19 = *((_DWORD *)this + 13);
    if ( v19 )
    {
      CCarEnterExit::GetPositionToOpenCarDoor((CCarEnterExit *)v56, *((const CVehicle **)this + 3), v19);
      v20 = *(_QWORD *)v56;
      *((_DWORD *)this + 16) = *(_DWORD *)&v56[8];
      *((_QWORD *)this + 7) = v20;
    }
    return;
  }
  if ( v8 == 828 )
    goto LABEL_23;
  if ( v8 == 900 )
  {
    CCarEnterExit::GetPositionToOpenCarDoor(
      (CCarEnterExit *)&v54,
      *((const CVehicle **)this + 3),
      *((_DWORD *)this + 13));
    *(_DWORD *)&v56[8] = v55;
    *(double *)v56 = v54;
    v21 = (const CVehicle *)*((_DWORD *)this + 3);
    v22 = *((_DWORD *)a2 + 5);
    v23 = *((_DWORD *)v21 + 5);
    v24 = (char *)(v22 + 48);
    if ( !v22 )
      v24 = (char *)a2 + 4;
    v25 = (_DWORD *)(v23 + 48);
    if ( !v23 )
      v25 = (_DWORD *)((char *)v21 + 4);
    v26.n64_u64[0] = vsub_f32(*(float32x2_t *)(v25 + 1), *(float32x2_t *)(v24 + 4)).n64_u64[0];
    v27 = vmul_f32(v26, v26).n64_u64[0];
    if ( (float)((float)((float)((float)(*(float *)v25 - *(float *)v24) * (float)(*(float *)v25 - *(float *)v24))
                       + *(float *)&v27)
               + *((float *)&v27 + 1)) >= (float)(*((float *)this + 8) * *((float *)this + 8)) )
    {
      v35 = *(_QWORD *)v56;
      *((_DWORD *)this + 16) = *(_DWORD *)&v56[8];
      *((_QWORD *)this + 7) = v35;
    }
    else
    {
      if ( *((_DWORD *)this + 17) )
      {
        CCarEnterExit::GetPositionToOpenCarDoor((CCarEnterExit *)&v54, v21, *((_DWORD *)this + 13));
        *(_DWORD *)&v56[8] = v55;
        *(double *)v56 = v54;
        v28 = v54;
        v29 = *((_DWORD *)this + 2);
        v30 = *((float *)this + 6);
        *((_DWORD *)this + 16) = v55;
        *((double *)this + 7) = v28;
        if ( *(float *)(v29 + 12) != *((float *)this + 14)
          || *(float *)(v29 + 16) != *((float *)this + 15)
          || *(float *)(v29 + 20) != *((float *)this + 16)
          || *(float *)(v29 + 24) != v30 )
        {
          v31 = *(_BYTE *)(v29 + 28);
          v32 = *((_QWORD *)this + 7);
          *(_DWORD *)(v29 + 20) = *((_DWORD *)this + 16);
          *(float *)(v29 + 24) = v30;
          *(_QWORD *)(v29 + 12) = v32;
          *(_BYTE *)(v29 + 28) = v31 & 0xD0 | 0x20;
        }
        goto LABEL_41;
      }
      v42 = (__int64 *)((char *)this + 56);
      LODWORD(v54) = 0;
      if ( *((_BYTE *)this + 20) )
      {
        if ( CCarEnterExit::GetNearestCarDoor(a2, v21, (const CVehicle *)v56, (CVector *)&v54, v52) )
        {
LABEL_46:
          v43 = *(_QWORD *)v56;
          v44 = *((_DWORD *)this + 2);
          *((_DWORD *)this + 16) = *(_DWORD *)&v56[8];
          *v42 = v43;
          v45 = *((float *)this + 6);
          v46 = *((float *)this + 14);
          *((_DWORD *)this + 13) = LODWORD(v54);
          if ( *(float *)(v44 + 12) != v46
            || *(float *)(v44 + 16) != *((float *)this + 15)
            || *(float *)(v44 + 20) != *((float *)this + 16)
            || *(float *)(v44 + 24) != v45 )
          {
            v47 = *v42;
            *(_DWORD *)(v44 + 20) = *((_DWORD *)this + 16);
            *(_QWORD *)(v44 + 12) = v47;
            v48 = *(_BYTE *)(v44 + 28);
            *(float *)(v44 + 24) = v45;
            *(_BYTE *)(v44 + 28) = v48 & 0xD0 | 0x20;
          }
          goto LABEL_41;
        }
      }
      else if ( CCarEnterExit::GetNearestCarPassengerDoor(
                  a2,
                  v21,
                  (const CVehicle *)v56,
                  (CVector *)&v54,
                  (int *)((char *)&stderr + 1),
                  (bool)&stderr + 1,
                  (bool)&stderr + 1,
                  v53) == 1 )
      {
        goto LABEL_46;
      }
      if ( !*((_BYTE *)this + 20) )
      {
        if ( CCarEnterExit::GetNearestCarPassengerDoor(
               a2,
               *((const CPed **)this + 3),
               (const CVehicle *)v56,
               (CVector *)&v54,
               (int *)((char *)&stderr + 1),
               0,
               (bool)&stderr + 1,
               v53) == 1 )
        {
          v50 = 828;
          *((_DWORD *)this + 13) = LODWORD(v54);
          v51 = *(_QWORD *)v56;
        }
        else
        {
          v51 = *(_QWORD *)v56;
          v50 = 203;
        }
        *((_DWORD *)this + 16) = *(_DWORD *)&v56[8];
        *v42 = v51;
        CTaskComplexGoToCarDoorAndStandStill::CreateSubTask(this, v50, a2);
        goto LABEL_41;
      }
      v49 = *(_QWORD *)v56;
      *((_DWORD *)this + 16) = *(_DWORD *)&v56[8];
      *v42 = v49;
    }
    v36 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)v21);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v36, 1, 0, 0, 8.0);
LABEL_41:
    *((_DWORD *)a2 + 291) |= 0x80000000;
    return;
  }
  if ( v8 != 905 )
    return;
  CCarEnterExit::GetPositionToOpenCarDoor((CCarEnterExit *)&v54, *((const CVehicle **)this + 3), *((_DWORD *)this + 13));
  *(_DWORD *)&v56[8] = v55;
  *(double *)v56 = v54;
  v7 = (const CPed *)*((_DWORD *)this + 3);
  v9 = *((_DWORD *)a2 + 5);
  v10 = *((_DWORD *)v7 + 5);
  v11 = (char *)(v9 + 48);
  if ( !v9 )
    v11 = (char *)a2 + 4;
  v12 = (_DWORD *)(v10 + 48);
  if ( !v10 )
    v12 = (_DWORD *)((char *)v7 + 4);
  v13.n64_u64[0] = vsub_f32(*(float32x2_t *)(v12 + 1), *(float32x2_t *)(v11 + 4)).n64_u64[0];
  v14 = vmul_f32(v13, v13).n64_u64[0];
  if ( (float)((float)((float)((float)(*(float *)v12 - *(float *)v11) * (float)(*(float *)v12 - *(float *)v11))
                     + *(float *)&v14)
             + *((float *)&v14 + 1)) >= (float)(*((float *)this + 8) * *((float *)this + 8)) )
  {
    v33 = *(_QWORD *)v56;
    *((_DWORD *)this + 16) = *(_DWORD *)&v56[8];
    *((_QWORD *)this + 7) = v33;
    goto LABEL_38;
  }
  v15 = (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 56);
  if ( CCarEnterExit::IsPathToDoorBlockedByVehicleCollisionModel(a2, v7, (CVehicle *)v56, (const CVector *)v11) )
  {
    v16.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)this + 60), *(float32x2_t *)&v56[4]).n64_u64[0];
    v17 = vmul_f32(v16, v16).n64_u64[0];
    if ( (float)((float)((float)((float)(*((float *)this + 14) - *(float *)v56)
                               * (float)(*((float *)this + 14) - *(float *)v56))
                       + *(float *)&v17)
               + *((float *)&v17 + 1)) > 0.01 )
    {
      v18 = *(_QWORD *)v56;
      *((_DWORD *)this + 16) = *(_DWORD *)&v56[8];
      *(_QWORD *)v15 = v18;
      (*(void (__fastcall **)(CTaskComplexGoToCarDoorAndStandStill *, CPed *))(*(_DWORD *)this + 44))(this, a2);
    }
  }
  else
  {
    v37 = *(_QWORD *)v56;
    *((_DWORD *)this + 16) = *(_DWORD *)&v56[8];
    *(_QWORD *)v15 = v37;
    v38 = *((_DWORD *)a2 + 290);
    v39 = *((_DWORD *)a2 + 291) | 8;
    v40 = *((_DWORD *)a2 + 292);
    *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289);
    *((_DWORD *)a2 + 290) = v38;
    *((_DWORD *)a2 + 291) = v39;
    *((_DWORD *)a2 + 292) = v40;
    v41 = (CTaskSimpleGoToPoint *)CTask::operator new((CTask *)&word_2C, v38);
    CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(v41, *((_DWORD *)this + 4), v15, *((float *)this + 6), 1, 0);
  }
}


// ============================================================

// Address: 0x50684c
// Original: _ZNK36CTaskComplexGoToCarDoorAndStandStill5CloneEv
// Demangled: CTaskComplexGoToCarDoorAndStandStill::Clone(void)
int __fastcall CTaskComplexGoToCarDoorAndStandStill::Clone(CTaskComplexGoToCarDoorAndStandStill *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8
  __int64 v5; // d8
  __int64 v6; // d9
  int v7; // r9

  v3 = CTask::operator new((CTask *)&dword_50, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = *((_QWORD *)this + 3);
  v6 = *((_QWORD *)this + 4);
  v7 = *((_DWORD *)this + 17);
  LOBYTE(this) = *((_BYTE *)this + 20);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 24) = v5;
  *(_QWORD *)(v3 + 32) = v6;
  *(_QWORD *)(v3 + 52) = 0LL;
  *(_QWORD *)(v3 + 60) = 0LL;
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  *(_BYTE *)(v3 + 20) = (_BYTE)this;
  *(_WORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 68) = v7;
  *(_WORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)v3 = &off_66AFCC;
  *(_DWORD *)(v3 + 12) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x5068d4
// Original: _ZNK36CTaskComplexGoToCarDoorAndStandStill11GetTaskTypeEv
// Demangled: CTaskComplexGoToCarDoorAndStandStill::GetTaskType(void)
int __fastcall CTaskComplexGoToCarDoorAndStandStill::GetTaskType(CTaskComplexGoToCarDoorAndStandStill *this)
{
  return 800;
}


// ============================================================

// Address: 0x5068dc
// Original: _ZN36CTaskComplexGoToCarDoorAndStandStill9SerializeEv
// Demangled: CTaskComplexGoToCarDoorAndStandStill::Serialize(void)
void __fastcall CTaskComplexGoToCarDoorAndStandStill::Serialize(CTaskComplexGoToCarDoorAndStandStill *this)
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
  CGenericGameStorage *v11; // r5
  int v12; // r2
  CGenericGameStorage *v13; // r5
  int v14; // r2
  int v15; // r2
  CGenericGameStorage *v16; // r5
  int v17; // r2
  CGenericGameStorage *v18; // r5
  int v19; // r2
  CGenericGameStorage *v20; // r5
  int v21; // r2
  CGenericGameStorage *v22; // r5
  int v23; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexGoToCarDoorAndStandStill *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexGoToCarDoorAndStandStill *))(*(_DWORD *)this + 20))(this) == 800 )
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
      v11 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v11 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
      v9 = v11;
    }
    free(v9);
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v13 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
    free(v13);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer(
      (CTaskComplexGoToCarDoorAndStandStill *)((char *)this + 20),
      (char *)&stderr + 1,
      v15);
    if ( UseDataFence )
      AddDataFence();
    v16 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v16 = *((_DWORD *)this + 17);
    CGenericGameStorage::_SaveDataToWorkBuffer(v16, byte_4, v17);
    free(v16);
    if ( UseDataFence )
      AddDataFence();
    v18 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v18 = *((_DWORD *)this + 6);
    CGenericGameStorage::_SaveDataToWorkBuffer(v18, byte_4, v19);
    free(v18);
    if ( UseDataFence )
      AddDataFence();
    v20 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v20 = *((_DWORD *)this + 7);
    CGenericGameStorage::_SaveDataToWorkBuffer(v20, byte_4, v21);
    free(v20);
    if ( UseDataFence )
      AddDataFence();
    v22 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v22 = *((_DWORD *)this + 9);
    CGenericGameStorage::_SaveDataToWorkBuffer(v22, byte_4, v23);
    j_free(v22);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexGoToCarDoorAndStandStill *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(800, v10);
  }
}


// ============================================================


// Address: 0x18e298
// Original: j__ZN25CTaskComplexWaitForBackupC2EP4CPedS1_f
// Demangled: CTaskComplexWaitForBackup::CTaskComplexWaitForBackup(CPed *,CPed *,float)
// attributes: thunk
void __fastcall CTaskComplexWaitForBackup::CTaskComplexWaitForBackup(
        CTaskComplexWaitForBackup *this,
        CPed *a2,
        CPed *a3,
        float a4)
{
  _ZN25CTaskComplexWaitForBackupC2EP4CPedS1_f(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1a0bec
// Original: j__ZN25CTaskComplexWaitForBackup10CreateTaskEv
// Demangled: CTaskComplexWaitForBackup::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexWaitForBackup::CreateTask(CTaskComplexWaitForBackup *this)
{
  return _ZN25CTaskComplexWaitForBackup10CreateTaskEv(this);
}


// ============================================================

// Address: 0x492e18
// Original: _ZN25CTaskComplexWaitForBackup10CreateTaskEv
// Demangled: CTaskComplexWaitForBackup::CreateTask(void)
void __fastcall CTaskComplexWaitForBackup::CreateTask(CTaskComplexWaitForBackup *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CPed *Ped; // r8
  char v6; // r5
  int v7; // r2
  CPed *v8; // r5
  char v9; // r6
  unsigned int v10; // r1
  CTaskComplexWaitForBackup *v11; // r0
  CPools *v12[5]; // [sp+4h] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, byte_4, a3);
  if ( v12[0] == (CPools *)-1 )
    Ped = 0;
  else
    Ped = (CPed *)CPools::GetPed(v12[0], (int)v12[0] + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, byte_4, v4);
  if ( v12[0] == (CPools *)-1 )
    v8 = 0;
  else
    v8 = (CPed *)CPools::GetPed(v12[0], (int)v12[0] + 1);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, v7);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, byte_4, v7);
  v11 = (CTaskComplexWaitForBackup *)CTask::operator new((CTask *)&dword_24, v10);
  CTaskComplexWaitForBackup::CTaskComplexWaitForBackup(v11, Ped, v8, *(float *)v12);
}


// ============================================================

// Address: 0x547320
// Original: _ZN25CTaskComplexWaitForBackupC2EP4CPedS1_f
// Demangled: CTaskComplexWaitForBackup::CTaskComplexWaitForBackup(CPed *,CPed *,float)
void __fastcall CTaskComplexWaitForBackup::CTaskComplexWaitForBackup(
        CTaskComplexWaitForBackup *this,
        CPed *a2,
        CPed *a3,
        float a4)
{
  CTaskComplex::CTaskComplex(this);
  *((float *)this + 3) = a4;
  *((_WORD *)this + 16) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *(_DWORD *)this = &off_66D4CC;
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
    a3 = (CPed *)*((_DWORD *)this + 5);
  }
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 5);
}


// ============================================================

// Address: 0x54737c
// Original: _ZN25CTaskComplexWaitForBackupD2Ev
// Demangled: CTaskComplexWaitForBackup::~CTaskComplexWaitForBackup()
void __fastcall CTaskComplexWaitForBackup::~CTaskComplexWaitForBackup(CTaskComplexWaitForBackup *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66D4CC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 5);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 5);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5473b8
// Original: _ZN25CTaskComplexWaitForBackupD0Ev
// Demangled: CTaskComplexWaitForBackup::~CTaskComplexWaitForBackup()
void __fastcall CTaskComplexWaitForBackup::~CTaskComplexWaitForBackup(CTaskComplexWaitForBackup *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66D4CC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 5);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 5);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x5473f8
// Original: _ZN25CTaskComplexWaitForBackup17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexWaitForBackup::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexWaitForBackup::CreateNextSubTask(CTaskComplexWaitForBackup *this, CPed *a2)
{
  int v4; // r1
  int v5; // r0
  int v6; // r1
  int v7; // r2
  float *v8; // r3
  float *v9; // r1
  float v10; // s0
  float v11; // s2
  CPed *v12; // r0
  unsigned int v13; // r0
  unsigned int v14; // r1
  int v15; // r0
  bool v16; // zf
  int v17; // r0
  int v18; // r1
  int v19; // r2
  float *v20; // r3
  CGeneral *RadianAngleBetweenPoints; // r0
  float v22; // r1
  int v23; // r5
  unsigned int v24; // r1
  CTaskSimpleAchieveHeading *v25; // r0
  unsigned int v26; // r1
  CTaskSimpleGunControl *v27; // r0
  CTaskComplexLeaveCar *v28; // r0
  int v29; // r0
  float32x2_t *v30; // r1
  int v31; // r2
  float32x2_t *v32; // r3
  unsigned __int64 *v33; // r1
  float32x2_t v34; // d17
  int v35; // r1
  float32x2_t v36; // d16
  unsigned __int64 v37; // d0
  float v38; // [sp+0h] [bp-18h]

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 > 901 )
  {
    if ( v4 == 902 )
    {
      if ( *(_DWORD *)CWeaponInfo::GetWeaponInfo() == 1 )
      {
        v27 = (CTaskSimpleGunControl *)CTask::operator new((CTask *)&off_3C, v26);
        CTaskSimpleGunControl::CTaskSimpleGunControl(v27, *((CEntity **)this + 4), 0, 0, 1, 100, 2000);
      }
    }
    else if ( v4 == 1020 )
    {
      v12 = (CPed *)*((_DWORD *)this + 5);
      if ( v12 )
      {
        if ( CPed::IsAlive(v12) == 1 )
        {
          if ( !*((_BYTE *)this + 32)
            || (!*((_BYTE *)this + 33)
              ? (v14 = *((_DWORD *)this + 6), v13 = CTimer::m_snTimeInMilliseconds)
              : (v13 = CTimer::m_snTimeInMilliseconds, *((_BYTE *)this + 33) = 0, *((_DWORD *)this + 6) = v13, v14 = v13),
                v14 + *((_DWORD *)this + 7) > v13) )
          {
            v29 = *((_DWORD *)this + 5);
            v30 = (float32x2_t *)*((_DWORD *)a2 + 5);
            v31 = *(_DWORD *)(v29 + 20);
            v32 = v30 + 6;
            if ( !v30 )
              v32 = (float32x2_t *)((char *)a2 + 4);
            v33 = (unsigned __int64 *)(v31 + 48);
            if ( !v31 )
              v33 = (unsigned __int64 *)(v29 + 4);
            v34.n64_u64[0] = *v33;
            v35 = 902;
            v36.n64_u64[0] = vsub_f32((float32x2_t)v32->n64_u64[0], v34).n64_u64[0];
            v37 = vmul_f32(v36, v36).n64_u64[0];
            if ( (float)((float)(*(float *)&v37 + *((float *)&v37 + 1)) + 0.0) < (float)(*((float *)this + 3)
                                                                                       * *((float *)this + 3)) )
              v35 = 1302;
            CTaskComplexWaitForBackup::CreateSubTask(this, v35, a2);
          }
        }
      }
    }
  }
  else
  {
    if ( v4 == 202 )
    {
      v15 = *((_DWORD *)a2 + 356);
      v16 = v15 == 0;
      if ( v15 )
        v16 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
      if ( !v16 )
      {
        v28 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, 0xCAu);
        CTaskComplexLeaveCar::CTaskComplexLeaveCar(v28, *((CVehicle **)a2 + 356), 0, 0, 1, 0);
        return;
      }
      v17 = *((_DWORD *)this + 4);
      v18 = *((_DWORD *)a2 + 5);
      v19 = *(_DWORD *)(v17 + 20);
      v20 = (float *)(v18 + 48);
      if ( !v18 )
        v20 = (float *)((char *)a2 + 4);
      v9 = (float *)(v19 + 48);
      v10 = *v20;
      v11 = v20[1];
      if ( !v19 )
        v9 = (float *)(v17 + 4);
      goto LABEL_24;
    }
    if ( v4 == 704 )
    {
      v5 = *((_DWORD *)this + 4);
      v6 = *((_DWORD *)a2 + 5);
      v7 = *(_DWORD *)(v5 + 20);
      v8 = (float *)(v6 + 48);
      if ( !v6 )
        v8 = (float *)((char *)a2 + 4);
      v9 = (float *)(v7 + 48);
      v10 = *v8;
      v11 = v8[1];
      if ( !v7 )
        v9 = (float *)(v5 + 4);
LABEL_24:
      RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                               COERCE_CGENERAL_(*v9 - v10),
                                               v9[1] - v11,
                                               0.0,
                                               0.0,
                                               v38);
      v23 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v22);
      *((_DWORD *)a2 + 344) = v23;
      v25 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, v24);
      CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v25, *(float *)&v23, 0.5, 0.2);
    }
  }
}


// ============================================================

// Address: 0x547630
// Original: _ZN25CTaskComplexWaitForBackup13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexWaitForBackup::CreateSubTask(int,CPed *)
void __fastcall CTaskComplexWaitForBackup::CreateSubTask(CTaskComplexWaitForBackup *this, int a2, CPed *a3)
{
  CTaskComplexLeaveCar *v5; // r0
  CTaskSimpleGunControl *v6; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r1
  int v10; // r2
  float *v11; // r3
  float *v12; // r1
  CGeneral *RadianAngleBetweenPoints; // r0
  float v14; // r1
  int v15; // r5
  unsigned int v16; // r1
  CTaskSimpleAchieveHeading *v17; // r0
  CTaskSimple *v18; // r0
  int v19; // r0
  float v20; // [sp+0h] [bp-18h]

  if ( a2 > 901 )
  {
    if ( a2 == 902 )
    {
      v8 = *((_DWORD *)this + 4);
      v9 = *((_DWORD *)a3 + 5);
      v10 = *(_DWORD *)(v8 + 20);
      v11 = (float *)(v9 + 48);
      if ( !v9 )
        v11 = (float *)((char *)a3 + 4);
      v12 = (float *)(v10 + 48);
      if ( !v10 )
        v12 = (float *)(v8 + 4);
      RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                               COERCE_CGENERAL_(*v12 - *v11),
                                               v12[1] - v11[1],
                                               0.0,
                                               0.0,
                                               v20);
      v15 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v14);
      *((_DWORD *)a3 + 344) = v15;
      v17 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, v16);
      CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v17, *(float *)&v15, 0.5, 0.2);
    }
    else if ( a2 == 1020 )
    {
      v6 = (CTaskSimpleGunControl *)CTask::operator new((CTask *)&off_3C, 0x3FCu);
      CTaskSimpleGunControl::CTaskSimpleGunControl(v6, *((CEntity **)this + 4), 0, 0, 1, 100, 2000);
    }
  }
  else if ( a2 == 202 )
  {
    if ( *((_DWORD *)a3 + 356) && *((unsigned __int8 *)a3 + 1157) << 31 )
      v7 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0) + 1000;
    else
      v7 = 0;
    v18 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, a2);
    CTaskSimple::CTaskSimple(v18);
    *(_WORD *)(v19 + 16) = 0;
    *(_DWORD *)(v19 + 20) = v7;
    *(_DWORD *)(v19 + 8) = 0;
    *(_DWORD *)(v19 + 12) = 0;
    *(_DWORD *)v19 = &off_665760;
  }
  else if ( a2 == 704 )
  {
    v5 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, 0x2C0u);
    CTaskComplexLeaveCar::CTaskComplexLeaveCar(v5, *((CVehicle **)a3 + 356), 0, 0, 1, 0);
  }
}


// ============================================================

// Address: 0x54777c
// Original: _ZN25CTaskComplexWaitForBackup18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexWaitForBackup::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexWaitForBackup::CreateFirstSubTask(CTaskComplexWaitForBackup *this, CPed *a2)
{
  __int64 v2; // r2
  int v3; // r5
  CTaskSimple *v4; // r0
  int result; // r0

  v2 = (unsigned int)CTimer::m_snTimeInMilliseconds | 0x4E2000000000LL;
  *((_BYTE *)this + 32) = 1;
  *((_QWORD *)this + 3) = v2;
  if ( *((_DWORD *)a2 + 356) && *((unsigned __int8 *)a2 + 1157) << 31 )
    v3 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0) + 1000;
  else
    v3 = 0;
  v4 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, (unsigned int)a2);
  CTaskSimple::CTaskSimple(v4);
  *(_WORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = v3;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_665760;
  return result;
}


// ============================================================

// Address: 0x547804
// Original: _ZN25CTaskComplexWaitForBackup14ControlSubTaskEP4CPed
// Demangled: CTaskComplexWaitForBackup::ControlSubTask(CPed *)
int __fastcall CTaskComplexWaitForBackup::ControlSubTask(CTaskComplexWaitForBackup *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x547f70
// Original: _ZNK25CTaskComplexWaitForBackup5CloneEv
// Demangled: CTaskComplexWaitForBackup::Clone(void)
CTaskComplex *__fastcall CTaskComplexWaitForBackup::Clone(CTaskComplexWaitForBackup *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  CTaskComplex *v5; // r4
  CEntity *v6; // r5

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_24, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = v3;
  v6 = (CEntity *)*((_DWORD *)this + 5);
  CTaskComplex::CTaskComplex(v3);
  *((_DWORD *)v5 + 3) = v4;
  *((_WORD *)v5 + 16) = 0;
  *((_DWORD *)v5 + 6) = 0;
  *((_DWORD *)v5 + 7) = 0;
  *(_DWORD *)v5 = &off_66D4CC;
  *((_DWORD *)v5 + 5) = v6;
  *((_DWORD *)v5 + 4) = HIDWORD(v4);
  if ( HIDWORD(v4) )
  {
    CEntity::RegisterReference((CEntity *)HIDWORD(v4), (CEntity **)v5 + 4);
    v6 = (CEntity *)*((_DWORD *)v5 + 5);
  }
  if ( v6 )
    CEntity::RegisterReference(v6, (CEntity **)v5 + 5);
  return v5;
}


// ============================================================

// Address: 0x547fd4
// Original: _ZNK25CTaskComplexWaitForBackup11GetTaskTypeEv
// Demangled: CTaskComplexWaitForBackup::GetTaskType(void)
int __fastcall CTaskComplexWaitForBackup::GetTaskType(CTaskComplexWaitForBackup *this)
{
  return 602;
}


// ============================================================

// Address: 0x547fdc
// Original: _ZN25CTaskComplexWaitForBackup9SerializeEv
// Demangled: CTaskComplexWaitForBackup::Serialize(void)
void __fastcall CTaskComplexWaitForBackup::Serialize(CTaskComplexWaitForBackup *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CPed *v5; // r0
  int v6; // r5
  CGenericGameStorage *v7; // r6
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r5
  int v12; // r2
  CPed *v13; // r0
  int v14; // r5
  CGenericGameStorage *v15; // r6
  int v16; // r2
  CGenericGameStorage *v17; // r0
  CGenericGameStorage *v18; // r5
  int v19; // r2
  int v20; // r5
  CGenericGameStorage *v21; // r4
  int v22; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexWaitForBackup *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexWaitForBackup *))(*(_DWORD *)this + 20))(this) == 602 )
  {
    v5 = (CPed *)*((_DWORD *)this + 4);
    if ( v5 )
    {
      v6 = GettPoolPedRef(v5);
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
    v13 = (CPed *)*((_DWORD *)this + 5);
    if ( v13 )
    {
      v14 = GettPoolPedRef(v13);
      if ( UseDataFence )
        AddDataFence();
      v15 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v15 = v14;
      CGenericGameStorage::_SaveDataToWorkBuffer(v15, byte_4, v16);
      v17 = v15;
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v18 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v18 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v18, byte_4, v19);
      v17 = v18;
    }
    free(v17);
    v20 = *((_DWORD *)this + 3);
    if ( UseDataFence )
      AddDataFence();
    v21 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v21 = v20;
    CGenericGameStorage::_SaveDataToWorkBuffer(v21, byte_4, v22);
    j_free(v21);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexWaitForBackup *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(602, v10);
  }
}


// ============================================================

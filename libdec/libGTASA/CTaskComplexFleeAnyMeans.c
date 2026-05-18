
// Address: 0x18b398
// Original: j__ZN24CTaskComplexFleeAnyMeansC2EP7CEntitybfiiifif
// Demangled: CTaskComplexFleeAnyMeans::CTaskComplexFleeAnyMeans(CEntity *,bool,float,int,int,int,float,int,float)
// attributes: thunk
void __fastcall CTaskComplexFleeAnyMeans::CTaskComplexFleeAnyMeans(
        CTaskComplexFleeAnyMeans *this,
        CEntity *a2,
        bool a3,
        float a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9,
        float a10)
{
  _ZN24CTaskComplexFleeAnyMeansC2EP7CEntitybfiiifif(this, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


// ============================================================

// Address: 0x19c4a4
// Original: j__ZNK24CTaskComplexFleeAnyMeans13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexFleeAnyMeans::CreateSubTask(int,CPed *)
// attributes: thunk
int __fastcall CTaskComplexFleeAnyMeans::CreateSubTask(CTaskComplexFleeAnyMeans *this, int a2, CPed *a3)
{
  return _ZNK24CTaskComplexFleeAnyMeans13CreateSubTaskEiP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x1a06a0
// Original: j__ZN24CTaskComplexFleeAnyMeans10CreateTaskEv
// Demangled: CTaskComplexFleeAnyMeans::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexFleeAnyMeans::CreateTask(CTaskComplexFleeAnyMeans *this)
{
  return _ZN24CTaskComplexFleeAnyMeans10CreateTaskEv(this);
}


// ============================================================

// Address: 0x495e94
// Original: _ZN24CTaskComplexFleeAnyMeans10CreateTaskEv
// Demangled: CTaskComplexFleeAnyMeans::CreateTask(void)
void __fastcall CTaskComplexFleeAnyMeans::CreateTask(CTaskComplexFleeAnyMeans *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int Vehicle; // r0
  char v7; // r4
  char v8; // r4
  CEntity *v9; // r4
  char v10; // r5
  int v11; // r2
  char v12; // r5
  int v13; // r2
  char v14; // r5
  int v15; // r2
  char v16; // r5
  int v17; // r2
  char v18; // r5
  int v19; // r2
  char v20; // r5
  int v21; // r2
  char v22; // r5
  int v23; // r2
  char v24; // r5
  unsigned int v25; // r1
  CTaskComplexFleeAnyMeans *v26; // r0
  float v27; // [sp+1Ch] [bp-34h] BYREF
  int v28; // [sp+20h] [bp-30h] BYREF
  float v29; // [sp+24h] [bp-2Ch] BYREF
  int v30; // [sp+28h] [bp-28h] BYREF
  int v31; // [sp+2Ch] [bp-24h] BYREF
  float v32; // [sp+30h] [bp-20h] BYREF
  char v33; // [sp+37h] [bp-19h] BYREF
  CPools *v34; // [sp+38h] [bp-18h] BYREF
  _DWORD v35[5]; // [sp+3Ch] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v35, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v35, byte_4, a3);
  switch ( v35[0] )
  {
    case 2:
      v7 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v34, (char *)&stderr + 2, v4);
        UseDataFence = v7;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v34, byte_4, v4);
      if ( *(float *)&v34 != NAN )
      {
        Vehicle = CPools::GetVehicle(v34, (int)v34 + 1);
        goto LABEL_18;
      }
      break;
    case 4:
      v8 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v34, (char *)&stderr + 2, v4);
        UseDataFence = v8;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v34, byte_4, v4);
      if ( *(float *)&v34 != NAN )
      {
        Vehicle = CPools::GetObject(v34, (int)v34 + 1);
        goto LABEL_18;
      }
      break;
    case 3:
      v5 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v34, (char *)&stderr + 2, v4);
        UseDataFence = v5;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v34, byte_4, v4);
      if ( *(float *)&v34 != NAN )
      {
        Vehicle = CPools::GetPed(v34, (int)v34 + 1);
LABEL_18:
        v9 = (CEntity *)Vehicle;
        goto LABEL_20;
      }
      break;
  }
  v9 = 0;
LABEL_20:
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v34, (char *)&stderr + 2, v4);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v33, (char *)&stderr + 1, v4);
  v12 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v34, (char *)&stderr + 2, v11);
    UseDataFence = v12;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v34, byte_4, v11);
  v14 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v32, (char *)&stderr + 2, v13);
    UseDataFence = v14;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v32, byte_4, v13);
  v16 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v31, (char *)&stderr + 2, v15);
    UseDataFence = v16;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v31, byte_4, v15);
  v18 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v30, (char *)&stderr + 2, v17);
    UseDataFence = v18;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v30, byte_4, v17);
  v20 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v29, (char *)&stderr + 2, v19);
    UseDataFence = v20;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v29, byte_4, v19);
  v22 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v28, (char *)&stderr + 2, v21);
    UseDataFence = v22;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v28, byte_4, v21);
  v24 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v27, (char *)&stderr + 2, v23);
    UseDataFence = v24;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v27, byte_4, v23);
  v26 = (CTaskComplexFleeAnyMeans *)CTask::operator new((CTask *)&dword_54, v25);
  CTaskComplexFleeAnyMeans::CTaskComplexFleeAnyMeans(
    v26,
    v9,
    *(float *)&v34 != 0.0,
    (float)v32,
    v31,
    v30,
    (int)v29,
    (float)v28,
    (int)v27,
    1.0);
}


// ============================================================

// Address: 0x514440
// Original: _ZN24CTaskComplexFleeAnyMeansC2EP7CEntitybfiiifif
// Demangled: CTaskComplexFleeAnyMeans::CTaskComplexFleeAnyMeans(CEntity *,bool,float,int,int,int,float,int,float)
void __fastcall CTaskComplexFleeAnyMeans::CTaskComplexFleeAnyMeans(
        CTaskComplexFleeAnyMeans *this,
        CEntity *a2,
        bool a3,
        float a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9,
        float a10)
{
  CEntity *v14; // r0

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 7) = a5;
  *((float *)this + 8) = a4;
  *((_BYTE *)this + 36) = 0;
  *((_DWORD *)this + 10) = a9;
  *((float *)this + 11) = a10;
  *((_DWORD *)this + 12) = 7;
  *((_WORD *)this + 30) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *(_DWORD *)this = &off_66BCC8;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
    v14 = (CEntity *)*((_DWORD *)this + 3);
  }
  else
  {
    v14 = 0;
  }
  *((_BYTE *)this + 64) = a3;
  *((_DWORD *)this + 17) = a6;
  *((_DWORD *)this + 18) = a7;
  *((float *)this + 19) = a8;
  *((_DWORD *)this + 20) = 0;
  *(_DWORD *)this = &off_66BD40;
  if ( v14 )
    CEntity::RegisterReference(v14, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x5144ec
// Original: _ZN24CTaskComplexFleeAnyMeansD2Ev
// Demangled: CTaskComplexFleeAnyMeans::~CTaskComplexFleeAnyMeans()
void __fastcall CTaskComplexFleeAnyMeans::~CTaskComplexFleeAnyMeans(CEntity **this)
{
  CEntity *v2; // r0
  CEntity **v3; // r5
  CEntity *v4; // r0

  v3 = this + 3;
  v2 = this[3];
  *this = (CEntity *)&off_66BD40;
  if ( v2 )
  {
    CEntity::CleanUpOldReference(v2, v3);
    v4 = this[3];
    *this = (CEntity *)&off_66BCC8;
    if ( v4 )
      CEntity::CleanUpOldReference(v4, v3);
  }
  else
  {
    *this = (CEntity *)&off_66BCC8;
  }
  sub_18EDE8((CTaskComplex *)this);
}


// ============================================================

// Address: 0x514544
// Original: _ZN24CTaskComplexFleeAnyMeansD0Ev
// Demangled: CTaskComplexFleeAnyMeans::~CTaskComplexFleeAnyMeans()
void __fastcall CTaskComplexFleeAnyMeans::~CTaskComplexFleeAnyMeans(CEntity **this)
{
  CEntity *v2; // r0
  CEntity **v3; // r5
  CEntity *v4; // r0
  void *v5; // r0

  v3 = this + 3;
  v2 = this[3];
  *this = (CEntity *)&off_66BD40;
  if ( v2 )
  {
    CEntity::CleanUpOldReference(v2, v3);
    v4 = this[3];
    *this = (CEntity *)&off_66BCC8;
    if ( v4 )
      CEntity::CleanUpOldReference(v4, v3);
  }
  else
  {
    *this = (CEntity *)&off_66BCC8;
  }
  CTaskComplex::~CTaskComplex((CTaskComplex *)this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x5145a0
// Original: _ZNK24CTaskComplexFleeAnyMeans13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexFleeAnyMeans::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexFleeAnyMeans::CreateSubTask(CTaskComplexFleeAnyMeans *this, int a2, CVehicle **a3)
{
  int v5; // r4
  CTaskComplex *v6; // r0
  CEntity *v7; // r10
  __int64 v8; // kr00_8
  __int64 v9; // r8
  char v10; // r5
  CEntity *v11; // r0
  unsigned __int16 v12; // r0
  int v14; // [sp+14h] [bp-24h]
  int v15; // [sp+18h] [bp-20h]

  v5 = 0;
  if ( a2 <= 900 )
  {
    if ( a2 == 702 )
    {
      v5 = CTask::operator new((CTask *)&dword_20, 0x2BEu);
      CTaskComplexStealCar::CTaskComplexStealCar((CTaskComplexStealCar *)v5, *((CVehicle **)this + 20));
    }
    else if ( a2 == 724 )
    {
      v5 = CTask::operator new((CTask *)&word_2C, 0x2D4u);
      CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(
        (CTaskComplexCarDriveMission *)v5,
        a3[356],
        0,
        1,
        3,
        40.0);
    }
  }
  else
  {
    switch ( a2 )
    {
      case 901:
        v5 = CTask::operator new((CTask *)&dword_38, 0x385u);
        CTaskComplexGoToPointShooting::CTaskComplexGoToPointShooting();
        break;
      case 912:
        v5 = CTask::operator new((CTask *)&word_28, 0x390u);
        v12 = rand();
        CTaskComplexWander::CTaskComplexWander(
          (CTaskComplexWander *)v5,
          7,
          (int)(float)((float)((float)v12 * 0.000015259) * 8.0),
          0,
          0.5);
        *(_DWORD *)v5 = &off_66BBC8;
        break;
      case 928:
        v6 = (CTaskComplex *)CTask::operator new((CTask *)&dword_54, 0x3A0u);
        v7 = (CEntity *)*((_DWORD *)this + 3);
        v5 = (int)v6;
        v8 = *(_QWORD *)((char *)this + 28);
        v15 = *((_DWORD *)this + 17);
        v14 = *((_DWORD *)this + 18);
        v9 = *((_QWORD *)this + 5);
        v10 = *((_BYTE *)this + 36);
        CTaskComplex::CTaskComplex(v6);
        *(_BYTE *)(v5 + 36) = v10;
        *(_DWORD *)(v5 + 40) = v9;
        *(_QWORD *)(v5 + 28) = v8;
        *(_DWORD *)(v5 + 44) = HIDWORD(v9);
        *(_DWORD *)(v5 + 48) = 7;
        *(_WORD *)(v5 + 60) = 0;
        *(_DWORD *)(v5 + 52) = 0;
        *(_DWORD *)(v5 + 56) = 0;
        *(_DWORD *)v5 = &off_66BCC8;
        *(_DWORD *)(v5 + 12) = v7;
        if ( v7 )
        {
          CEntity::RegisterReference(v7, (CEntity **)(v5 + 12));
          v11 = *(CEntity **)(v5 + 12);
        }
        else
        {
          v11 = 0;
        }
        *(_DWORD *)(v5 + 64) = v15;
        *(_DWORD *)(v5 + 68) = v14;
        *(_WORD *)(v5 + 80) = 0;
        *(_DWORD *)(v5 + 72) = 0;
        *(_DWORD *)(v5 + 76) = 0;
        *(_DWORD *)v5 = &off_66BD04;
        if ( v11 )
          CEntity::RegisterReference(v11, (CEntity **)(v5 + 12));
        break;
    }
  }
  return v5;
}


// ============================================================

// Address: 0x514774
// Original: _ZN24CTaskComplexFleeAnyMeans17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFleeAnyMeans::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexFleeAnyMeans::CreateNextSubTask(CTaskComplexFleeAnyMeans *this, CPed *a2)
{
  int v4; // r0
  bool v5; // zf
  CTaskComplexStealCar *v6; // r0
  bool v7; // zf
  _DWORD *v8; // r0
  CTaskComplexCarDriveMission *v9; // r0
  CTaskComplexCarDriveMission *v10; // r0

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  switch ( v4 )
  {
    case 901:
      if ( *((_DWORD *)this + 20) )
      {
        v6 = (CTaskComplexStealCar *)CTask::operator new((CTask *)&dword_20, 0x385u);
        CTaskComplexStealCar::CTaskComplexStealCar(v6, *((CVehicle **)this + 20));
        return;
      }
      v8 = *(_DWORD **)this;
      *((_DWORD *)this + 20) = 0;
LABEL_19:
      ((void (__fastcall *)(CTaskComplexFleeAnyMeans *, CPed *))v8[11])(this, a2);
      return;
    case 724:
      v7 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
      if ( *((unsigned __int8 *)a2 + 1157) << 31 )
        v7 = *((_DWORD *)a2 + 356) == 0;
      if ( !v7 )
      {
        v10 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, 0x385u);
        CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(v10, *((CVehicle **)a2 + 356), 0, 1, 3, 40.0);
        return;
      }
      v8 = *(_DWORD **)this;
      goto LABEL_19;
    case 702:
      v5 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
      if ( *((unsigned __int8 *)a2 + 1157) << 31 )
        v5 = *((_DWORD *)a2 + 356) == 0;
      if ( v5 )
      {
        (*(void (__fastcall **)(CTaskComplexFleeAnyMeans *, CPed *))(*(_DWORD *)this + 44))(this, a2);
      }
      else
      {
        v9 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, 0x2BEu);
        CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(v9, *((CVehicle **)a2 + 356), 0, 1, 3, 40.0);
      }
      *((_DWORD *)this + 20) = 0;
      break;
  }
}


// ============================================================

// Address: 0x514842
// Original: _ZN24CTaskComplexFleeAnyMeans18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFleeAnyMeans::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexFleeAnyMeans::CreateFirstSubTask(CTaskComplexFleeAnyMeans *this, CPed *a2)
{
  int v3; // r1
  bool v4; // zf
  int v6; // r1

  v3 = *((_DWORD *)a2 + 356);
  v4 = v3 == 0;
  if ( v3 )
    v4 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
  if ( v4 )
  {
    v6 = 928;
    if ( !*((_BYTE *)this + 64) )
      v6 = 912;
  }
  else
  {
    v6 = 724;
  }
  return CTaskComplexFleeAnyMeans::CreateSubTask(this, v6, (CVehicle **)a2);
}


// ============================================================

// Address: 0x514870
// Original: _ZN24CTaskComplexFleeAnyMeans14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFleeAnyMeans::ControlSubTask(CPed *)
int __fastcall CTaskComplexFleeAnyMeans::ControlSubTask(CTaskComplexFleeAnyMeans *this, CPed *a2)
{
  _DWORD *v4; // r9
  float *ClosestVehicleInRange; // r6
  int v6; // r1
  int v7; // r2
  int v8; // r3
  float *v9; // r0
  float *v10; // r2
  float v11; // s2
  float v12; // s4
  float v13; // s0
  float v14; // s6
  int v15; // r1
  float *v16; // r2
  const CPed *v17; // r2
  CEntity *v18; // r0
  CEntity **v19; // r8
  CPed *v20; // r0
  CEntity *v21; // r0
  int v22; // r1
  int v23; // r10
  CPed *v24; // r0
  int v25; // r6
  char *v26; // r4
  int v27; // r6
  _DWORD v29[2]; // [sp+4h] [bp-44h] BYREF
  __int16 v30; // [sp+Eh] [bp-3Ah]
  float v31; // [sp+20h] [bp-28h] BYREF
  float v32; // [sp+24h] [bp-24h]
  float v33; // [sp+28h] [bp-20h]

  if ( *((_DWORD *)this + 3) )
  {
    v4 = (_DWORD *)((char *)this + 8);
    ClosestVehicleInRange = (float *)CVehicleScanner::GetClosestVehicleInRange((CVehicleScanner *)(*((_DWORD *)a2 + 272)
                                                                                                 + 212));
    if ( !ClosestVehicleInRange
      || (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v4 + 20))(*v4) != 928
      && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v4 + 20))(*v4) != 912 )
    {
      return *v4;
    }
    v6 = *((_DWORD *)this + 3);
    v7 = *((_DWORD *)a2 + 5);
    v8 = *(_DWORD *)(v6 + 20);
    v9 = (float *)(v7 + 48);
    if ( !v7 )
      v9 = (float *)((char *)a2 + 4);
    v10 = (float *)(v8 + 48);
    v11 = *v9;
    v12 = v9[1];
    v13 = v9[2];
    if ( !v8 )
      v10 = (float *)(v6 + 4);
    v31 = v11 - *v10;
    v32 = v12 - v10[1];
    v14 = (float)(v13 - v10[2]) * (float)(v13 - v10[2]);
    v33 = v13 - v10[2];
    if ( (float)(v14 + (float)((float)(v31 * v31) + (float)(v32 * v32))) <= (float)(*((float *)this + 19)
                                                                                  * *((float *)this + 19)) )
      return *v4;
    v15 = *((_DWORD *)ClosestVehicleInRange + 5);
    v16 = (float *)(v15 + 48);
    if ( !v15 )
      v16 = ClosestVehicleInRange + 1;
    v31 = *v16 - v11;
    v32 = v16[1] - v9[1];
    v33 = v16[2] - v13;
    CVector::Normalise((CVector *)&v31);
    if ( (float)((float)((float)(v31 * *(float *)(*((_DWORD *)a2 + 5) + 16))
                       + (float)(v32 * *(float *)(*((_DWORD *)a2 + 5) + 20)))
               + (float)(v33 * *(float *)(*((_DWORD *)a2 + 5) + 24))) <= 0.0
      || CCarEnterExit::IsVehicleStealable((CCarEnterExit *)ClosestVehicleInRange, a2, v17) != 1 )
    {
      return *v4;
    }
    v19 = (CEntity **)((char *)this + 80);
    v18 = (CEntity *)*((_DWORD *)this + 20);
    if ( v18 )
      CEntity::CleanUpOldReference(v18, (CEntity **)this + 20);
    *((_DWORD *)this + 20) = ClosestVehicleInRange;
    CEntity::RegisterReference((CEntity *)ClosestVehicleInRange, (CEntity **)this + 20);
    if ( *((_BYTE *)this + 64) )
    {
      v20 = (CPed *)*((_DWORD *)*v19 + 281);
      if ( v20 && !CPed::IsPlayer(v20) )
      {
        CEventVehicleDamage::CEventVehicleDamage((int)v29, *v19, a2);
        v30 = 706;
        v29[0] = &off_669BBC;
        CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*((_DWORD *)*v19 + 281) + 1088) + 104), (CEvent *)v29, 0);
        CEventVehicleDamage::~CEventVehicleDamage((CEventVehicleDamage *)v29);
      }
      v21 = *v19;
      if ( *((_BYTE *)*v19 + 1164) )
      {
        v22 = 282;
        do
        {
          v23 = v22;
          v24 = (CPed *)*((_DWORD *)v21 + v22);
          if ( v24 && !CPed::IsPlayer(v24) )
          {
            CEventVehicleDamage::CEventVehicleDamage((int)v29, *v19, a2);
            v30 = 706;
            v29[0] = &off_669BBC;
            CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*((_DWORD *)*v19 + v23) + 1088) + 104), (CEvent *)v29, 0);
            CEventVehicleDamage::~CEventVehicleDamage((CEventVehicleDamage *)v29);
          }
          v21 = *v19;
          v22 = v23 + 1;
        }
        while ( v23 - 281 < *((unsigned __int8 *)*v19 + 1164) );
      }
      v25 = 901;
    }
    else
    {
      if ( !(*(int (__fastcall **)(float *, _DWORD))(*(_DWORD *)ClosestVehicleInRange + 232))(ClosestVehicleInRange, 0) )
        return *v4;
      v25 = 702;
    }
    if ( (*(int (__fastcall **)(_DWORD, CPed *, _DWORD, _DWORD))(*(_DWORD *)*v4 + 28))(*v4, a2, 0, 0) == 1 )
      return CTaskComplexFleeAnyMeans::CreateSubTask(this, v25, a2);
    return *v4;
  }
  v27 = 0;
  v26 = (char *)this + 8;
  if ( !(*(int (__fastcall **)(_DWORD, CPed *, _DWORD, _DWORD))(**((_DWORD **)this + 2) + 28))(
          *((_DWORD *)this + 2),
          a2,
          0,
          0) )
    return *(_DWORD *)v26;
  return v27;
}


// ============================================================

// Address: 0x514f20
// Original: _ZNK24CTaskComplexFleeAnyMeans5CloneEv
// Demangled: CTaskComplexFleeAnyMeans::Clone(void)
int __fastcall CTaskComplexFleeAnyMeans::Clone(CTaskComplexFleeAnyMeans *this, unsigned int a2)
{
  int v3; // r4
  int v4; // r11
  __int64 v5; // r8
  CEntity *v6; // r6
  __int64 v7; // kr00_8
  CEntity *v8; // r0
  int v10; // [sp+0h] [bp-28h]
  int v11; // [sp+4h] [bp-24h]
  char v12; // [sp+8h] [bp-20h]

  v3 = CTask::operator new((CTask *)&dword_54, a2);
  v12 = *((_BYTE *)this + 64);
  v11 = *((_DWORD *)this + 17);
  v10 = *((_DWORD *)this + 18);
  v4 = *((_DWORD *)this + 19);
  v5 = *((_QWORD *)this + 5);
  v6 = (CEntity *)*((_DWORD *)this + 3);
  v7 = *(_QWORD *)((char *)this + 28);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 28) = v7;
  *(_QWORD *)(v3 + 40) = v5;
  *(_DWORD *)(v3 + 48) = 7;
  *(_DWORD *)v3 = &off_66BCC8;
  *(_DWORD *)(v3 + 12) = v6;
  *(_BYTE *)(v3 + 36) = 0;
  *(_WORD *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  if ( v6 )
  {
    CEntity::RegisterReference(v6, (CEntity **)(v3 + 12));
    v8 = *(CEntity **)(v3 + 12);
  }
  else
  {
    v8 = 0;
  }
  *(_BYTE *)(v3 + 64) = v12;
  *(_DWORD *)(v3 + 68) = v11;
  *(_DWORD *)(v3 + 72) = v10;
  *(_DWORD *)(v3 + 76) = v4;
  *(_DWORD *)(v3 + 80) = 0;
  *(_DWORD *)v3 = &off_66BD40;
  if ( v8 )
    CEntity::RegisterReference(v8, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x514fd4
// Original: _ZNK24CTaskComplexFleeAnyMeans11GetTaskTypeEv
// Demangled: CTaskComplexFleeAnyMeans::GetTaskType(void)
int __fastcall CTaskComplexFleeAnyMeans::GetTaskType(CTaskComplexFleeAnyMeans *this)
{
  return 927;
}


// ============================================================

// Address: 0x514fdc
// Original: _ZN24CTaskComplexFleeAnyMeans9SerializeEv
// Demangled: CTaskComplexFleeAnyMeans::Serialize(void)
void __fastcall CTaskComplexFleeAnyMeans::Serialize(CTaskComplexFleeAnyMeans *this)
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
  int v20; // r2
  CGenericGameStorage *v21; // r5
  int v22; // r2
  CGenericGameStorage *v23; // r5
  int v24; // r2
  CGenericGameStorage *v25; // r5
  int v26; // r2
  CGenericGameStorage *v27; // r5
  int v28; // r2
  CGenericGameStorage *v29; // r5
  int v30; // r2
  CGenericGameStorage *v31; // r5
  int v32; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexFleeAnyMeans *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexFleeAnyMeans *))(*(_DWORD *)this + 20))(this) != 927 )
  {
    v13 = (*(int (__fastcall **)(CTaskComplexFleeAnyMeans *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(927, v13);
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
    goto LABEL_20;
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
  switch ( v11 )
  {
    case 2:
      v12 = GettPoolVehicleRef(v10);
      goto LABEL_17;
    case 4:
      v12 = GettPoolObjRef(v10);
      goto LABEL_17;
    case 3:
      v12 = GettPoolPedRef(v10);
LABEL_17:
      if ( UseDataFence )
        AddDataFence();
      v17 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v17 = v12;
      CGenericGameStorage::_SaveDataToWorkBuffer(v17, byte_4, v18);
      v16 = v17;
LABEL_20:
      free(v16);
      break;
  }
  if ( UseDataFence )
    AddDataFence();
  CGenericGameStorage::_SaveDataToWorkBuffer((CTaskComplexFleeAnyMeans *)((char *)this + 64), (char *)&stderr + 1, v9);
  if ( UseDataFence )
    AddDataFence();
  v19 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v19 = *((_DWORD *)this + 8);
  CGenericGameStorage::_SaveDataToWorkBuffer(v19, byte_4, v20);
  free(v19);
  if ( UseDataFence )
    AddDataFence();
  v21 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v21 = *((_DWORD *)this + 7);
  CGenericGameStorage::_SaveDataToWorkBuffer(v21, byte_4, v22);
  free(v21);
  if ( UseDataFence )
    AddDataFence();
  v23 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v23 = *((_DWORD *)this + 17);
  CGenericGameStorage::_SaveDataToWorkBuffer(v23, byte_4, v24);
  free(v23);
  if ( UseDataFence )
    AddDataFence();
  v25 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v25 = *((_DWORD *)this + 18);
  CGenericGameStorage::_SaveDataToWorkBuffer(v25, byte_4, v26);
  free(v25);
  if ( UseDataFence )
    AddDataFence();
  v27 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v27 = *((_DWORD *)this + 19);
  CGenericGameStorage::_SaveDataToWorkBuffer(v27, byte_4, v28);
  free(v27);
  if ( UseDataFence )
    AddDataFence();
  v29 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v29 = *((_DWORD *)this + 10);
  CGenericGameStorage::_SaveDataToWorkBuffer(v29, byte_4, v30);
  free(v29);
  if ( UseDataFence )
    AddDataFence();
  v31 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v31 = *((_DWORD *)this + 11);
  CGenericGameStorage::_SaveDataToWorkBuffer(v31, byte_4, v32);
  j_free(v31);
}


// ============================================================

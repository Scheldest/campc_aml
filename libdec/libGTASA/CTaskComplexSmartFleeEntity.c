
// Address: 0x19a320
// Original: j__ZN27CTaskComplexSmartFleeEntity10CreateTaskEv
// Demangled: CTaskComplexSmartFleeEntity::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexSmartFleeEntity::CreateTask(CTaskComplexSmartFleeEntity *this)
{
  return _ZN27CTaskComplexSmartFleeEntity10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19b728
// Original: j__ZN27CTaskComplexSmartFleeEntityD2Ev
// Demangled: CTaskComplexSmartFleeEntity::~CTaskComplexSmartFleeEntity()
// attributes: thunk
void __fastcall CTaskComplexSmartFleeEntity::~CTaskComplexSmartFleeEntity(CTaskComplexSmartFleeEntity *this)
{
  _ZN27CTaskComplexSmartFleeEntityD2Ev(this);
}


// ============================================================

// Address: 0x1a0474
// Original: j__ZN27CTaskComplexSmartFleeEntityC2EP7CEntitybfiif
// Demangled: CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(CEntity *,bool,float,int,int,float)
// attributes: thunk
void __fastcall CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(
        CTaskComplexSmartFleeEntity *this,
        CEntity *a2,
        bool a3,
        float a4,
        int a5,
        int a6,
        float a7)
{
  _ZN27CTaskComplexSmartFleeEntityC2EP7CEntitybfiif(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x495828
// Original: _ZN27CTaskComplexSmartFleeEntity10CreateTaskEv
// Demangled: CTaskComplexSmartFleeEntity::CreateTask(void)
void __fastcall CTaskComplexSmartFleeEntity::CreateTask(CTaskComplexSmartFleeEntity *this, int a2, int a3)
{
  char v3; // r4
  char *v4; // r1
  int v5; // r2
  char v6; // r4
  int Vehicle; // r0
  char v8; // r4
  char v9; // r4
  CEntity *v10; // r6
  CTaskComplexSmartFleeEntity *v11; // r0
  CPools *v12; // [sp+10h] [bp-18h] BYREF
  _DWORD v13[5]; // [sp+14h] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, byte_4, a3);
  if ( v13[0] == 2 )
  {
    v8 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 2, v5);
      UseDataFence = v8;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, v5);
    v4 = (char *)v12 + 1;
    if ( v12 != (CPools *)-1 )
    {
      Vehicle = CPools::GetVehicle(v12, (int)v4);
      goto LABEL_18;
    }
LABEL_19:
    v10 = 0;
    goto LABEL_20;
  }
  if ( v13[0] == 4 )
  {
    v9 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 2, v5);
      UseDataFence = v9;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, v5);
    v4 = (char *)v12 + 1;
    if ( v12 != (CPools *)-1 )
    {
      Vehicle = CPools::GetObject(v12, (int)v4);
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  if ( v13[0] != 3 )
    goto LABEL_19;
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 2, v5);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, v5);
  v4 = (char *)v12 + 1;
  if ( v12 == (CPools *)-1 )
    goto LABEL_19;
  Vehicle = CPools::GetPed(v12, (int)v4);
LABEL_18:
  v10 = (CEntity *)Vehicle;
LABEL_20:
  v11 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, (unsigned int)v4);
  CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v11, v10, 0, 60.0, 1000000, 1000, 1.0);
}


// ============================================================

// Address: 0x513c0c
// Original: _ZN27CTaskComplexSmartFleeEntityC2EP7CEntitybfiif
// Demangled: CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(CEntity *,bool,float,int,int,float)
void __fastcall CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(
        CTaskComplexSmartFleeEntity *this,
        CEntity *a2,
        bool a3,
        float a4,
        int a5,
        int a6,
        float a7)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 7) = a5;
  *((float *)this + 8) = a4;
  *((_BYTE *)this + 36) = a3;
  *((_DWORD *)this + 10) = a6;
  *((float *)this + 11) = a7;
  *((_DWORD *)this + 12) = 7;
  *((_WORD *)this + 30) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *(_DWORD *)this = &off_66BCC8;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x513c70
// Original: _ZN27CTaskComplexSmartFleeEntityD2Ev
// Demangled: CTaskComplexSmartFleeEntity::~CTaskComplexSmartFleeEntity()
void __fastcall CTaskComplexSmartFleeEntity::~CTaskComplexSmartFleeEntity(CTaskComplexSmartFleeEntity *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66BCC8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x513c9c
// Original: _ZN27CTaskComplexSmartFleeEntityD0Ev
// Demangled: CTaskComplexSmartFleeEntity::~CTaskComplexSmartFleeEntity()
void __fastcall CTaskComplexSmartFleeEntity::~CTaskComplexSmartFleeEntity(CTaskComplexSmartFleeEntity *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66BCC8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x513ccc
// Original: _ZN27CTaskComplexSmartFleeEntity13CreateSubTaskEi
// Demangled: CTaskComplexSmartFleeEntity::CreateSubTask(int)
CTaskSimpleStandStill *__fastcall CTaskComplexSmartFleeEntity::CreateSubTask(CTaskComplexSmartFleeEntity *this, int a2)
{
  CTaskSimpleStandStill *v3; // r4
  unsigned __int16 v4; // r0
  int v5; // r2
  unsigned int v6; // r1
  int v7; // r0
  int v8; // r0
  unsigned int v9; // r2
  __int64 v10; // d16
  CTaskComplex *v11; // r0
  __int64 v12; // kr00_8
  char v13; // r10
  int v14; // r0
  __int64 v15; // d16

  v3 = 0;
  if ( a2 == 910 )
  {
    v5 = *((_DWORD *)this + 10);
    v6 = *((_DWORD *)this + 3);
    v7 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 60) = 1;
    *((_DWORD *)this + 13) = v7;
    *((_DWORD *)this + 14) = v5;
    v8 = *(_DWORD *)(v6 + 20);
    v9 = v8 + 48;
    if ( !v8 )
      v9 = v6 + 4;
    v10 = *(_QWORD *)v9;
    *((_DWORD *)this + 6) = *(_DWORD *)(v9 + 8);
    *((_QWORD *)this + 2) = v10;
    v11 = (CTaskComplex *)CTask::operator new((CTask *)&dword_44, v6);
    v12 = *(_QWORD *)((char *)this + 28);
    v13 = *((_BYTE *)this + 36);
    CTaskComplex::CTaskComplex(v11);
    *(_DWORD *)v14 = &off_66BC8C;
    v15 = *((_QWORD *)this + 2);
    *(_DWORD *)(v14 + 32) = *((_DWORD *)this + 6);
    *(_QWORD *)(v14 + 40) = v12;
    *(_DWORD *)(v14 + 48) = 7;
    *(_DWORD *)(v14 + 52) = 0;
    *(_DWORD *)(v14 + 56) = 0;
    *(_BYTE *)(v14 + 36) = v13;
    *(_WORD *)(v14 + 60) = 0;
    *(_WORD *)(v14 + 64) = 0;
    *(_QWORD *)(v14 + 24) = v15;
    if ( (_DWORD)v12 != -1 )
    {
      *(_DWORD *)(v14 + 52) = CTimer::m_snTimeInMilliseconds;
      *(_DWORD *)(v14 + 56) = v12;
      *(_BYTE *)(v14 + 60) = 1;
    }
    return (CTaskSimpleStandStill *)v14;
  }
  else if ( a2 == 203 )
  {
    v3 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, 0xCBu);
    v4 = rand();
    CTaskSimpleStandStill::CTaskSimpleStandStill(v3, (int)(float)((float)((float)v4 * 0.000015259) * 50.0), 0, 0, 8.0);
  }
  return v3;
}


// ============================================================

// Address: 0x513dc8
// Original: _ZN27CTaskComplexSmartFleeEntity17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexSmartFleeEntity::CreateNextSubTask(CPed *)
CTaskSimpleStandStill *__fastcall CTaskComplexSmartFleeEntity::CreateNextSubTask(
        CTaskComplexSmartFleeEntity *this,
        CPed *a2)
{
  __int64 v3; // kr00_8
  int v4; // r0
  int v5; // r1

  v3 = *((_QWORD *)this + 1);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 20))(v3);
  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( !HIDWORD(v3) )
    return 0;
  if ( v4 == 910 )
  {
    v5 = 1302;
    return CTaskComplexSmartFleeEntity::CreateSubTask(this, v5);
  }
  if ( v4 != 203 )
    return 0;
  v5 = 910;
  return CTaskComplexSmartFleeEntity::CreateSubTask(this, v5);
}


// ============================================================

// Address: 0x513e04
// Original: _ZN27CTaskComplexSmartFleeEntity18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexSmartFleeEntity::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexSmartFleeEntity::CreateFirstSubTask(CTaskComplexSmartFleeEntity *this, CPed *a2)
{
  int v4; // r3
  int v5; // r6
  int v6; // r2
  unsigned int v7; // r1
  int v8; // r0
  int v9; // r0
  unsigned int v10; // r2
  __int64 v11; // d16
  CTaskComplex *v12; // r0
  __int64 v13; // kr00_8
  char v14; // r9
  int v15; // r0
  __int64 v16; // d16

  if ( *((_DWORD *)this + 3) )
  {
    CInterestingEvents::Add();
    if ( !(*((unsigned __int8 *)a2 + 1157) << 31) && !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
    {
      v4 = *((_DWORD *)this + 3);
      if ( (*(_BYTE *)(v4 + 58) & 7) == 3 )
        v5 = 5;
      else
        v5 = -1;
      IKChainManager_c::LookAt((int)&g_ikChainMan, (int)"TaskSmartFleeEntity", a2, v4, 3000, v5, 0, 1, 0.25, 500, 3, 0);
    }
    v6 = *((_DWORD *)this + 10);
    v7 = *((_DWORD *)this + 3);
    v8 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 60) = 1;
    *((_DWORD *)this + 13) = v8;
    *((_DWORD *)this + 14) = v6;
    v9 = *(_DWORD *)(v7 + 20);
    v10 = v9 + 48;
    if ( !v9 )
      v10 = v7 + 4;
    v11 = *(_QWORD *)v10;
    *((_DWORD *)this + 6) = *(_DWORD *)(v10 + 8);
    *((_QWORD *)this + 2) = v11;
    v12 = (CTaskComplex *)CTask::operator new((CTask *)&dword_44, v7);
    v13 = *(_QWORD *)((char *)this + 28);
    v14 = *((_BYTE *)this + 36);
    CTaskComplex::CTaskComplex(v12);
    *(_DWORD *)v15 = &off_66BC8C;
    v16 = *((_QWORD *)this + 2);
    *(_DWORD *)(v15 + 32) = *((_DWORD *)this + 6);
    *(_QWORD *)(v15 + 40) = v13;
    *(_DWORD *)(v15 + 48) = 7;
    *(_DWORD *)(v15 + 52) = 0;
    *(_DWORD *)(v15 + 56) = 0;
    *(_BYTE *)(v15 + 36) = v14;
    *(_WORD *)(v15 + 60) = 0;
    *(_WORD *)(v15 + 64) = 0;
    *(_QWORD *)(v15 + 24) = v16;
    if ( (_DWORD)v13 != -1 )
    {
      *(_DWORD *)(v15 + 52) = CTimer::m_snTimeInMilliseconds;
      *(_DWORD *)(v15 + 56) = v13;
      *(_BYTE *)(v15 + 60) = 1;
    }
  }
}


// ============================================================

// Address: 0x513f5c
// Original: _ZN27CTaskComplexSmartFleeEntity14ControlSubTaskEP4CPed
// Demangled: CTaskComplexSmartFleeEntity::ControlSubTask(CPed *)
int __fastcall CTaskComplexSmartFleeEntity::ControlSubTask(CTaskComplexSmartFleeEntity *this, CPed *a2)
{
  __int64 v4; // r0
  int v5; // r0
  unsigned int v6; // r3
  unsigned int v7; // r1
  int v8; // lr
  __int64 *v9; // r2
  int v10; // r1
  int v11; // r6
  float32x2_t v12; // d16
  unsigned __int64 v13; // d1
  int v14; // r6
  __int64 *v15; // r1
  int v16; // r3
  __int64 v17; // d16
  char v18; // r3
  float v19; // s0
  __int64 v20; // d16
  CEventGroup *EventGlobalGroup; // r0
  _BYTE v23[36]; // [sp+4h] [bp-24h] BYREF

  v4 = *((_QWORD *)this + 1);
  if ( HIDWORD(v4) )
  {
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 20))(v4) == 910 )
    {
      v5 = *((_DWORD *)this + 2);
      *(_DWORD *)(v5 + 48) = *((_DWORD *)this + 12);
      if ( *((_BYTE *)this + 60) )
      {
        if ( *((_BYTE *)this + 61) )
        {
          v6 = CTimer::m_snTimeInMilliseconds;
          *((_BYTE *)this + 61) = 0;
          *((_DWORD *)this + 13) = v6;
          v7 = v6;
        }
        else
        {
          v7 = *((_DWORD *)this + 13);
          v6 = CTimer::m_snTimeInMilliseconds;
        }
        if ( v7 + *((_DWORD *)this + 14) <= v6 )
        {
          v8 = *((_DWORD *)this + 3);
          v9 = (__int64 *)(v8 + 4);
          v10 = *(_DWORD *)(v8 + 20);
          v11 = v8 + 4;
          if ( v10 )
            v11 = v10 + 48;
          v12.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)this + 20), *(float32x2_t *)(v11 + 4)).n64_u64[0];
          v13 = vmul_f32(v12, v12).n64_u64[0];
          if ( (float)((float)((float)((float)(*((float *)this + 4) - *(float *)v11)
                                     * (float)(*((float *)this + 4) - *(float *)v11))
                             + *(float *)&v13)
                     + *((float *)&v13 + 1)) > (float)(*((float *)this + 11) * *((float *)this + 11)) )
          {
            v14 = *((_DWORD *)this + 10);
            *((_BYTE *)this + 60) = 1;
            v15 = (__int64 *)((char *)this + 16);
            *((_DWORD *)this + 13) = v6;
            *((_DWORD *)this + 14) = v14;
            v16 = *(_DWORD *)(v8 + 20);
            if ( v16 )
              v9 = (__int64 *)(v16 + 48);
            v17 = *v9;
            *((_DWORD *)this + 6) = *((_DWORD *)v9 + 2);
            *v15 = v17;
            v18 = *((_BYTE *)this + 36);
            v19 = *((float *)this + 8);
            if ( *(float *)(v5 + 24) != *((float *)this + 4)
              || *(float *)(v5 + 28) != *((float *)this + 5)
              || *(float *)(v5 + 32) != *((float *)this + 6)
              || *(float *)(v5 + 44) != v19 )
            {
              v20 = *v15;
              *(_DWORD *)(v5 + 32) = *((_DWORD *)this + 6);
              *(_QWORD *)(v5 + 24) = v20;
              *(_BYTE *)(v5 + 65) = 1;
              *(float *)(v5 + 44) = v19;
            }
            *(_BYTE *)(v5 + 36) = v18;
            if ( *((int *)this + 12) >= 5 )
            {
              CEventSeenPanickedPed::CEventSeenPanickedPed((CEventSeenPanickedPed *)v23, a2);
              EventGlobalGroup = (CEventGroup *)GetEventGlobalGroup();
              CEventGroup::Add(EventGlobalGroup, (CEvent *)v23, 0);
              CEventSeenPanickedPed::~CEventSeenPanickedPed((CEventSeenPanickedPed *)v23);
            }
          }
        }
      }
    }
  }
  else
  {
    (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, _DWORD))(*(_DWORD *)v4 + 28))(v4, a2, 0, 0);
  }
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x514cac
// Original: _ZNK27CTaskComplexSmartFleeEntity5CloneEv
// Demangled: CTaskComplexSmartFleeEntity::Clone(void)
CTaskComplex *__fastcall CTaskComplexSmartFleeEntity::Clone(CTaskComplexSmartFleeEntity *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  CEntity *v4; // r6
  CTaskComplex *v5; // r5
  __int64 v6; // r8
  int v7; // r11
  char v8; // r10
  int v10; // [sp+0h] [bp-20h]

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_40, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = v3;
  v6 = *(_QWORD *)((char *)this + 28);
  v10 = *((_DWORD *)this + 10);
  v7 = *((_DWORD *)this + 11);
  v8 = *((_BYTE *)this + 36);
  CTaskComplex::CTaskComplex(v3);
  *(_QWORD *)((char *)v5 + 28) = v6;
  *((_BYTE *)v5 + 36) = v8;
  *((_DWORD *)v5 + 10) = v10;
  *((_DWORD *)v5 + 11) = v7;
  *((_DWORD *)v5 + 12) = 7;
  *((_WORD *)v5 + 30) = 0;
  *((_DWORD *)v5 + 13) = 0;
  *((_DWORD *)v5 + 14) = 0;
  *(_DWORD *)v5 = &off_66BCC8;
  *((_DWORD *)v5 + 3) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)v5 + 3);
  *((_DWORD *)v5 + 12) = *((_DWORD *)this + 12);
  return v5;
}


// ============================================================

// Address: 0x514d24
// Original: _ZNK27CTaskComplexSmartFleeEntity11GetTaskTypeEv
// Demangled: CTaskComplexSmartFleeEntity::GetTaskType(void)
int __fastcall CTaskComplexSmartFleeEntity::GetTaskType(CTaskComplexSmartFleeEntity *this)
{
  return 911;
}


// ============================================================

// Address: 0x514d2c
// Original: _ZN27CTaskComplexSmartFleeEntity9SerializeEv
// Demangled: CTaskComplexSmartFleeEntity::Serialize(void)
void __fastcall CTaskComplexSmartFleeEntity::Serialize(CTaskComplexSmartFleeEntity *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r0
  int v6; // r6
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CVehicle *v9; // r0
  int v10; // r1
  int v11; // r4
  int v12; // r0
  CGenericGameStorage *v13; // r4
  int v14; // r2
  CGenericGameStorage *v15; // r5
  int v16; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexSmartFleeEntity *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexSmartFleeEntity *))(*(_DWORD *)this + 20))(this) == 911 )
  {
    v5 = *((_DWORD *)this + 3);
    if ( v5 )
    {
      v6 = *(_BYTE *)(v5 + 58) & 7;
      if ( UseDataFence )
        AddDataFence();
      v7 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v7 = v6;
      CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
      free(v7);
      v9 = (CVehicle *)*((_DWORD *)this + 3);
      v10 = *((_BYTE *)v9 + 58) & 7;
      switch ( v10 )
      {
        case 2:
          v11 = GettPoolVehicleRef(v9);
          break;
        case 4:
          v11 = GettPoolObjRef(v9);
          break;
        case 3:
          v11 = GettPoolPedRef(v9);
          break;
        default:
          return;
      }
      if ( UseDataFence )
        AddDataFence();
      v15 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v15 = v11;
      CGenericGameStorage::_SaveDataToWorkBuffer(v15, byte_4, v16);
      j_free(v15);
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v13 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v13 = 0;
      CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
      j_free(v13);
    }
  }
  else
  {
    v12 = (*(int (__fastcall **)(CTaskComplexSmartFleeEntity *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(911, v12);
  }
}


// ============================================================

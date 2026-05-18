
// Address: 0x192f38
// Original: j__ZN22CTaskComplexFleeEntityC2EP7CEntitybfiif
// Demangled: CTaskComplexFleeEntity::CTaskComplexFleeEntity(CEntity *,bool,float,int,int,float)
// attributes: thunk
void __fastcall CTaskComplexFleeEntity::CTaskComplexFleeEntity(
        CTaskComplexFleeEntity *this,
        CEntity *a2,
        bool a3,
        float a4,
        int a5,
        int a6,
        float a7)
{
  _ZN22CTaskComplexFleeEntityC2EP7CEntitybfiif(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x5131f8
// Original: _ZN22CTaskComplexFleeEntityC2EP7CEntitybfiif
// Demangled: CTaskComplexFleeEntity::CTaskComplexFleeEntity(CEntity *,bool,float,int,int,float)
void __fastcall CTaskComplexFleeEntity::CTaskComplexFleeEntity(
        CTaskComplexFleeEntity *this,
        CEntity *a2,
        bool a3,
        float a4,
        int a5,
        int a6,
        float a7)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 7) = a5;
  *((_WORD *)this + 20) = 0;
  *((float *)this + 11) = a4;
  *((_DWORD *)this + 13) = a6;
  *((float *)this + 14) = a7;
  *((_BYTE *)this + 48) = a3;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *(_DWORD *)this = &off_66BC50;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x513254
// Original: _ZN22CTaskComplexFleeEntityD2Ev
// Demangled: CTaskComplexFleeEntity::~CTaskComplexFleeEntity()
void __fastcall CTaskComplexFleeEntity::~CTaskComplexFleeEntity(CTaskComplexFleeEntity *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66BC50;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x513280
// Original: _ZN22CTaskComplexFleeEntityD0Ev
// Demangled: CTaskComplexFleeEntity::~CTaskComplexFleeEntity()
void __fastcall CTaskComplexFleeEntity::~CTaskComplexFleeEntity(CTaskComplexFleeEntity *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66BC50;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x5132b0
// Original: _ZN22CTaskComplexFleeEntity13CreateSubTaskEi
// Demangled: CTaskComplexFleeEntity::CreateSubTask(int)
void __fastcall CTaskComplexFleeEntity::CreateSubTask(CTaskComplexFleeEntity *this, int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r6
  int v5; // r8
  char v6; // r9
  int v7; // r0
  __int64 v8; // d16

  if ( a2 == 908 )
  {
    v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_3C, 0x38Cu);
    v4 = *((_DWORD *)this + 7);
    v5 = *((_DWORD *)this + 11);
    v6 = *((_BYTE *)this + 48);
    CTaskComplex::CTaskComplex(v3);
    *(_DWORD *)v7 = &off_66BC14;
    v8 = *((_QWORD *)this + 2);
    *(_DWORD *)(v7 + 20) = *((_DWORD *)this + 6);
    *(_DWORD *)(v7 + 36) = v4;
    *(_DWORD *)(v7 + 40) = 0;
    *(_DWORD *)(v7 + 44) = 0;
    *(_WORD *)(v7 + 48) = 0;
    *(_DWORD *)(v7 + 52) = v5;
    *(_BYTE *)(v7 + 56) = v6;
    *(_BYTE *)(v7 + 57) = 0;
    *(_QWORD *)(v7 + 12) = v8;
    if ( v4 != -1 )
    {
      *(_DWORD *)(v7 + 40) = CTimer::m_snTimeInMilliseconds;
      *(_DWORD *)(v7 + 44) = v4;
      *(_BYTE *)(v7 + 48) = 1;
    }
  }
}


// ============================================================

// Address: 0x513328
// Original: _ZN22CTaskComplexFleeEntity17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFleeEntity::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexFleeEntity::CreateNextSubTask(CTaskComplexFleeEntity *this, CPed *a2)
{
  if ( *((_DWORD *)this + 3) )
    (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  return 0;
}


// ============================================================

// Address: 0x513340
// Original: _ZN22CTaskComplexFleeEntity18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFleeEntity::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexFleeEntity::CreateFirstSubTask(CTaskComplexFleeEntity *this, CPed *a2)
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
  int v13; // r6
  int v14; // r5
  char v15; // r9
  int result; // r0
  __int64 v17; // d16

  CInterestingEvents::Add();
  if ( !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
  {
    v4 = *((_DWORD *)this + 3);
    if ( (*(_BYTE *)(v4 + 58) & 7) == 3 )
      v5 = 5;
    else
      v5 = -1;
    IKChainManager_c::LookAt((int)&g_ikChainMan, (int)"TaskFleeEntity", a2, v4, 3000, v5, 0, 1, 0.25, 500, 3, 0);
  }
  v6 = *((_DWORD *)this + 13);
  v7 = *((_DWORD *)this + 3);
  v8 = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)this + 40) = 1;
  *((_DWORD *)this + 8) = v8;
  *((_DWORD *)this + 9) = v6;
  v9 = *(_DWORD *)(v7 + 20);
  v10 = v9 + 48;
  if ( !v9 )
    v10 = v7 + 4;
  v11 = *(_QWORD *)v10;
  *((_DWORD *)this + 6) = *(_DWORD *)(v10 + 8);
  *((_QWORD *)this + 2) = v11;
  v12 = (CTaskComplex *)CTask::operator new((CTask *)&off_3C, v7);
  v13 = *((_DWORD *)this + 7);
  v14 = *((_DWORD *)this + 11);
  v15 = *((_BYTE *)this + 48);
  CTaskComplex::CTaskComplex(v12);
  *(_DWORD *)result = &off_66BC14;
  v17 = *((_QWORD *)this + 2);
  *(_DWORD *)(result + 20) = *((_DWORD *)this + 6);
  *(_DWORD *)(result + 36) = v13;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_WORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = v14;
  *(_BYTE *)(result + 56) = v15;
  *(_BYTE *)(result + 57) = 0;
  *(_QWORD *)(result + 12) = v17;
  if ( v13 != -1 )
  {
    *(_DWORD *)(result + 40) = CTimer::m_snTimeInMilliseconds;
    *(_DWORD *)(result + 44) = v13;
    *(_BYTE *)(result + 48) = 1;
  }
  return result;
}


// ============================================================

// Address: 0x513480
// Original: _ZN22CTaskComplexFleeEntity14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFleeEntity::ControlSubTask(CPed *)
int __fastcall CTaskComplexFleeEntity::ControlSubTask(CTaskComplexFleeEntity *this, CPed *a2)
{
  __int64 v4; // r0
  unsigned int v5; // r2
  unsigned int v6; // r0
  int v7; // r6
  __int64 *v8; // r3
  int v9; // r0
  int v10; // r1
  float32x2_t v11; // d16
  unsigned __int64 v12; // d1
  int v13; // r1
  __int64 *v14; // r0
  int v15; // r1
  __int64 v16; // d16
  int v17; // r2
  char v18; // r3
  float v19; // s0
  __int64 v20; // d16
  CEventGroup *EventGlobalGroup; // r0
  _BYTE v23[36]; // [sp+4h] [bp-24h] BYREF

  v4 = *((_QWORD *)this + 1);
  if ( HIDWORD(v4) )
  {
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 20))(v4) == 908 && *((_BYTE *)this + 40) )
    {
      if ( *((_BYTE *)this + 41) )
      {
        v5 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 41) = 0;
        *((_DWORD *)this + 8) = v5;
        v6 = v5;
      }
      else
      {
        v6 = *((_DWORD *)this + 8);
        v5 = CTimer::m_snTimeInMilliseconds;
      }
      if ( v6 + *((_DWORD *)this + 9) <= v5 )
      {
        v7 = *((_DWORD *)this + 3);
        v8 = (__int64 *)(v7 + 4);
        v9 = *(_DWORD *)(v7 + 20);
        v10 = v7 + 4;
        if ( v9 )
          v10 = v9 + 48;
        v11.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)this + 20), *(float32x2_t *)(v10 + 4)).n64_u64[0];
        v12 = vmul_f32(v11, v11).n64_u64[0];
        if ( (float)((float)((float)((float)(*((float *)this + 4) - *(float *)v10)
                                   * (float)(*((float *)this + 4) - *(float *)v10))
                           + *(float *)&v12)
                   + *((float *)&v12 + 1)) > (float)(*((float *)this + 14) * *((float *)this + 14)) )
        {
          v13 = *((_DWORD *)this + 13);
          *((_BYTE *)this + 40) = 1;
          v14 = (__int64 *)((char *)this + 16);
          *((_DWORD *)this + 8) = v5;
          *((_DWORD *)this + 9) = v13;
          v15 = *(_DWORD *)(v7 + 20);
          if ( v15 )
            v8 = (__int64 *)(v15 + 48);
          v16 = *v8;
          *((_DWORD *)this + 6) = *((_DWORD *)v8 + 2);
          *v14 = v16;
          v17 = *((_DWORD *)this + 2);
          v18 = *((_BYTE *)this + 48);
          v19 = *((float *)this + 11);
          if ( *(float *)(v17 + 12) != *((float *)this + 4)
            || *(float *)(v17 + 16) != *((float *)this + 5)
            || *(float *)(v17 + 20) != *((float *)this + 6)
            || *(float *)(v17 + 52) != v19 )
          {
            v20 = *v14;
            *(_DWORD *)(v17 + 20) = *((_DWORD *)this + 6);
            *(_QWORD *)(v17 + 12) = v20;
            *(_BYTE *)(v17 + 57) = 1;
            *(float *)(v17 + 52) = v19;
          }
          *(_BYTE *)(v17 + 56) = v18;
          CEventSeenPanickedPed::CEventSeenPanickedPed((CEventSeenPanickedPed *)v23, a2);
          EventGlobalGroup = (CEventGroup *)GetEventGlobalGroup();
          CEventGroup::Add(EventGlobalGroup, (CEvent *)v23, 0);
          CEventSeenPanickedPed::~CEventSeenPanickedPed((CEventSeenPanickedPed *)v23);
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

// Address: 0x514bc0
// Original: _ZNK22CTaskComplexFleeEntity5CloneEv
// Demangled: CTaskComplexFleeEntity::Clone(void)
int __fastcall CTaskComplexFleeEntity::Clone(CTaskComplexFleeEntity *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  int v5; // r8
  int v6; // r9
  char v7; // r10
  __int64 v8; // kr00_8

  v3 = CTask::operator new((CTask *)&off_3C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = *((_DWORD *)this + 7);
  v6 = *((_DWORD *)this + 11);
  v7 = *((_BYTE *)this + 48);
  v8 = *(_QWORD *)((char *)this + 52);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 28) = v5;
  *(_WORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 44) = v6;
  *(_QWORD *)(v3 + 52) = v8;
  *(_BYTE *)(v3 + 48) = v7;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)v3 = &off_66BC50;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x514c2c
// Original: _ZNK22CTaskComplexFleeEntity11GetTaskTypeEv
// Demangled: CTaskComplexFleeEntity::GetTaskType(void)
int __fastcall CTaskComplexFleeEntity::GetTaskType(CTaskComplexFleeEntity *this)
{
  return 909;
}


// ============================================================

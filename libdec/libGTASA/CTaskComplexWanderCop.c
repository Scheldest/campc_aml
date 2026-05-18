
// Address: 0x1952d4
// Original: j__ZN21CTaskComplexWanderCop16LookForCriminalsEP4CPed
// Demangled: CTaskComplexWanderCop::LookForCriminals(CPed *)
// attributes: thunk
int __fastcall CTaskComplexWanderCop::LookForCriminals(CTaskComplexWanderCop *this, CPed *a2)
{
  return _ZN21CTaskComplexWanderCop16LookForCriminalsEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19c1cc
// Original: j__ZN21CTaskComplexWanderCop16LookForCarAlarmsEP4CPed
// Demangled: CTaskComplexWanderCop::LookForCarAlarms(CPed *)
// attributes: thunk
int __fastcall CTaskComplexWanderCop::LookForCarAlarms(CTaskComplexWanderCop *this, CPed *a2)
{
  return _ZN21CTaskComplexWanderCop16LookForCarAlarmsEP4CPed(this, a2);
}


// ============================================================

// Address: 0x35f518
// Original: _ZN21CTaskComplexWanderCopD2Ev
// Demangled: CTaskComplexWanderCop::~CTaskComplexWanderCop()
void __fastcall CTaskComplexWanderCop::~CTaskComplexWanderCop(CTaskComplexWanderCop *this)
{
  int v2; // r0

  v2 = *((_DWORD *)this + 10);
  *(_DWORD *)this = &off_66C5E8;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  j_CTaskComplexWander::~CTaskComplexWander(this);
}


// ============================================================

// Address: 0x35f5fa
// Original: _ZNK21CTaskComplexWanderCop13GetWanderTypeEv
// Demangled: CTaskComplexWanderCop::GetWanderType(void)
int __fastcall CTaskComplexWanderCop::GetWanderType(CTaskComplexWanderCop *this)
{
  return 1;
}


// ============================================================

// Address: 0x52399c
// Original: _ZNK21CTaskComplexWanderCop18ShouldPursuePlayerEP4CPed
// Demangled: CTaskComplexWanderCop::ShouldPursuePlayer(CPed *)
int __fastcall CTaskComplexWanderCop::ShouldPursuePlayer(CTaskComplexWanderCop *this, CPed *a2)
{
  int v4; // r0
  CWanted *PlayerWanted; // r0

  if ( *(int *)(FindPlayerWanted(-1) + 44) < 1 )
    return 0;
  v4 = *((_DWORD *)this + 2);
  if ( v4 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) == 1103 )
      return 0;
  }
  PlayerWanted = (CWanted *)FindPlayerWanted(-1);
  return sub_19286C(PlayerWanted, a2);
}


// ============================================================

// Address: 0x5239da
// Original: _ZN21CTaskComplexWanderCop18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexWanderCop::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexWanderCop::CreateFirstSubTask(CTaskComplexWanderCop *this, CPed *a2)
{
  CTaskSimpleStandStill *v4; // r0
  int v5; // r0
  CWanted *PlayerWanted; // r0
  unsigned int v7; // r1
  CTaskComplexPolicePursuit *v8; // r0
  int v9; // r0
  int v10; // r2

  if ( *((_DWORD *)a2 + 359) != 6 )
    goto LABEL_17;
  if ( *((_BYTE *)a2 + 1956) )
  {
    v4 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v4, 100000, 1, 0, 8.0);
    return;
  }
  if ( *(int *)(FindPlayerWanted(-1) + 44) >= 1 )
  {
    v5 = *((_DWORD *)this + 2);
    if ( !v5 || (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5) != 1103 )
    {
      PlayerWanted = (CWanted *)FindPlayerWanted(-1);
      if ( CWanted::CanCopJoinPursuit(PlayerWanted, a2) == 1 )
      {
        v8 = (CTaskComplexPolicePursuit *)CTask::operator new((CTask *)&off_18, v7);
        CTaskComplexPolicePursuit::CTaskComplexPolicePursuit(v8);
        return;
      }
    }
  }
  v9 = *((_DWORD *)this + 10);
  if ( v9 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
  }
  else
  {
LABEL_17:
    if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    {
      v10 = 704;
    }
    else
    {
      (*(void (__fastcall **)(CTaskComplexWanderCop *, CPed *))(*(_DWORD *)this + 60))(this, a2);
      (*(void (__fastcall **)(CTaskComplexWanderCop *, CPed *, _DWORD, char *, char *, char *))(*(_DWORD *)this + 64))(
        this,
        a2,
        *((unsigned __int8 *)this + 16),
        (char *)this + 24,
        (char *)this + 28,
        (char *)this + 16);
      v10 = 900;
    }
    CTaskComplexWander::CreateSubTask(this, (CVehicle **)a2, v10);
  }
}


// ============================================================

// Address: 0x523abc
// Original: _ZN21CTaskComplexWanderCop17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexWanderCop::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexWanderCop::CreateNextSubTask(CTaskComplexWanderCop *this, CPed *a2)
{
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r6

  if ( *((_DWORD *)a2 + 359) != 6 )
    return CTaskComplexWander::CreateNextSubTask(this, a2);
  if ( *((_BYTE *)a2 + 1956) )
    return 0;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 1103 )
  {
    if ( *((_DWORD *)this + 10) )
    {
      v8 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
      if ( v8 == (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 10) + 20))(*((_DWORD *)this + 10)) )
        return 0;
      v5 = *((_DWORD *)this + 10);
      if ( v5 )
        return (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
    }
    return CTaskComplexWander::CreateNextSubTask(this, a2);
  }
  v5 = *((_DWORD *)this + 10);
  v6 = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)this + 76) = 1;
  *((_DWORD *)this + 17) = v6;
  *((_DWORD *)this + 18) = 3000;
  if ( v5 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
  {
    v7 = 704;
  }
  else
  {
    (*(void (__fastcall **)(CTaskComplexWanderCop *, CPed *))(*(_DWORD *)this + 60))(this, a2);
    (*(void (__fastcall **)(CTaskComplexWanderCop *, CPed *, _DWORD, char *, char *, char *))(*(_DWORD *)this + 64))(
      this,
      a2,
      *((unsigned __int8 *)this + 16),
      (char *)this + 24,
      (char *)this + 28,
      (char *)this + 16);
    v7 = 900;
  }
  return CTaskComplexWander::CreateSubTask(this, (CVehicle **)a2, v7);
}


// ============================================================

// Address: 0x523ba0
// Original: _ZN21CTaskComplexWanderCop14ControlSubTaskEP4CPed
// Demangled: CTaskComplexWanderCop::ControlSubTask(CPed *)
int __fastcall CTaskComplexWanderCop::ControlSubTask(CTaskComplexPolicePursuit **this, CPed *a2)
{
  CTaskComplexPolicePursuit *v4; // r4
  CTaskComplexPolicePursuit *v5; // r0
  CWanted *PlayerWanted; // r0
  unsigned int v7; // r0
  unsigned int v8; // r1
  unsigned int v10; // r1

  if ( *((_DWORD *)a2 + 359) != 6 )
    return CTaskComplexWander::ControlSubTask((CTaskComplexWander *)this, a2);
  v4 = this[2];
  if ( *(int *)(FindPlayerWanted(-1) + 44) >= 1 )
  {
    v5 = this[2];
    if ( !v5 || (*(int (__fastcall **)(CTaskComplexPolicePursuit *))(*(_DWORD *)v5 + 20))(v5) != 1103 )
    {
      PlayerWanted = (CWanted *)FindPlayerWanted(-1);
      if ( CWanted::CanCopJoinPursuit(PlayerWanted, a2) == 1 )
      {
        if ( !*((_BYTE *)this + 76)
          || (!*((_BYTE *)this + 77)
            ? (v8 = (unsigned int)this[17], v7 = CTimer::m_snTimeInMilliseconds)
            : (v7 = CTimer::m_snTimeInMilliseconds,
               *((_BYTE *)this + 77) = 0,
               this[17] = (CTaskComplexPolicePursuit *)v7,
               v8 = v7),
              (unsigned int)this[18] + v8 <= v7) )
        {
          if ( (*(int (__fastcall **)(CTaskComplexPolicePursuit *, CPed *, int, _DWORD))(*(_DWORD *)this[2] + 28))(
                 this[2],
                 a2,
                 1,
                 0) == 1 )
          {
            v4 = (CTaskComplexPolicePursuit *)CTask::operator new((CTask *)&off_18, v10);
            CTaskComplexPolicePursuit::CTaskComplexPolicePursuit(v4);
          }
        }
        return (int)v4;
      }
    }
  }
  if ( (*(int (__fastcall **)(CTaskComplexPolicePursuit *))(*(_DWORD *)this[2] + 20))(this[2]) != 1103 )
  {
    if ( this[10] )
      return (int)v4;
    return CTaskComplexWander::ControlSubTask((CTaskComplexWander *)this, a2);
  }
  return (int)this[2];
}


// ============================================================

// Address: 0x523c70
// Original: _ZN21CTaskComplexWanderCop12ScanForStuffEP4CPed
// Demangled: CTaskComplexWanderCop::ScanForStuff(CPed *)
int __fastcall CTaskComplexWanderCop::ScanForStuff(CTaskComplexWanderCop *this, CPed *a2)
{
  __int64 v4; // r0
  bool v5; // zf
  CPlayerPed *PlayerPed; // r0

  if ( !*((_BYTE *)this + 52) )
  {
    *(_QWORD *)((char *)this + 44) = (unsigned int)CTimer::m_snTimeInMilliseconds | 0x3200000000LL;
    *((_BYTE *)this + 52) = 1;
  }
  LODWORD(v4) = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v5 = (_DWORD)v4 == 1103;
  if ( (_DWORD)v4 != 1103 )
  {
    LODWORD(v4) = *((unsigned __int8 *)this + 52);
    v5 = (_DWORD)v4 == 0;
  }
  if ( !v5 )
  {
    if ( *((_BYTE *)this + 53) )
    {
      LODWORD(v4) = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 53) = 0;
      *((_DWORD *)this + 11) = v4;
      HIDWORD(v4) = v4;
    }
    else
    {
      HIDWORD(v4) = *((_DWORD *)this + 11);
      LODWORD(v4) = CTimer::m_snTimeInMilliseconds;
    }
    if ( HIDWORD(v4) + *((_DWORD *)this + 12) <= (unsigned int)v4 )
    {
      HIDWORD(v4) = 50;
      *(_QWORD *)((char *)this + 44) = v4;
      HIDWORD(v4) = *((_DWORD *)this + 15);
      *((_BYTE *)this + 52) = 1;
      if ( (unsigned int)v4 >= HIDWORD(v4) )
      {
        CTaskComplexWanderCop::LookForCarAlarms((CTaskComplexWanderCop *)v4, a2);
        if ( !*(_DWORD *)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44)
          && *(_DWORD *)(FindPlayerPed(-1) + 1424)
          && *(unsigned __int8 *)(*(_DWORD *)(FindPlayerPed(-1) + 1424) + 1068) << 31 )
        {
          PlayerPed = (CPlayerPed *)FindPlayerPed(-1);
          CPlayerPed::SetWantedLevelNoDrop(PlayerPed, 1);
        }
      }
      LODWORD(v4) = CTimer::m_snTimeInMilliseconds;
      if ( (unsigned int)CTimer::m_snTimeInMilliseconds >= *((_DWORD *)this + 14) )
        LODWORD(v4) = CTaskComplexWanderCop::LookForCriminals(this, a2);
    }
  }
  return v4;
}


// ============================================================

// Address: 0x523d60
// Original: _ZN21CTaskComplexWanderCop16LookForCarAlarmsEP4CPed
// Demangled: CTaskComplexWanderCop::LookForCarAlarms(CPed *)
char *__fastcall CTaskComplexWanderCop::LookForCarAlarms(CTaskComplexWanderCop *this, CPed *a2)
{
  char *result; // r0
  int v4; // r1
  bool v5; // zf
  int PlayerVehicle; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  float32x2_t v10; // d16
  unsigned __int64 v11; // d1
  CPlayerPed *PlayerPed; // r0

  result = (char *)FindPlayerVehicle(-1, 0);
  if ( result )
  {
    result = *(char **)(FindPlayerVehicle(-1, 0) + 1440);
    if ( !result )
    {
      result = (char *)FindPlayerVehicle(-1, 0);
      v4 = *((unsigned __int16 *)result + 560);
      v5 = v4 == 0;
      if ( *((_WORD *)result + 560) )
        v5 = v4 == 0xFFFF;
      if ( !v5 )
      {
        result = (char *)(result[58] & 0xF8);
        if ( result != (char *)&word_28 )
        {
          PlayerVehicle = FindPlayerVehicle(-1, 0);
          v7 = *(_DWORD *)(PlayerVehicle + 20);
          v8 = *((_DWORD *)a2 + 5);
          v9 = v7 + 48;
          if ( !v7 )
            v9 = PlayerVehicle + 4;
          result = (char *)(v8 + 48);
          if ( !v8 )
            result = (char *)a2 + 4;
          v10.n64_u64[0] = vsub_f32(*(float32x2_t *)(v9 + 4), *(float32x2_t *)(result + 4)).n64_u64[0];
          v11 = vmul_f32(v10, v10).n64_u64[0];
          if ( (float)((float)((float)((float)(*(float *)v9 - *(float *)result)
                                     * (float)(*(float *)v9 - *(float *)result))
                             + *(float *)&v11)
                     + *((float *)&v11 + 1)) < 400.0 )
          {
            PlayerPed = (CPlayerPed *)FindPlayerPed(-1);
            return (char *)sub_190E38(PlayerPed, 1);
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x523e20
// Original: _ZN21CTaskComplexWanderCop20LookForStolenCopCarsEP4CPed
// Demangled: CTaskComplexWanderCop::LookForStolenCopCars(CPed *)
int __fastcall CTaskComplexWanderCop::LookForStolenCopCars(CTaskComplexWanderCop *this, CPed *a2)
{
  int result; // r0
  CPlayerPed *PlayerPed; // r0

  result = *(_DWORD *)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44);
  if ( !result )
  {
    result = *(_DWORD *)(FindPlayerPed(-1) + 1424);
    if ( result )
    {
      result = *(unsigned __int8 *)(*(_DWORD *)(FindPlayerPed(-1) + 1424) + 1068) << 31;
      if ( result )
      {
        PlayerPed = (CPlayerPed *)FindPlayerPed(-1);
        return sub_190E38(PlayerPed, 1);
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x523e70
// Original: _ZN21CTaskComplexWanderCop16LookForCriminalsEP4CPed
// Demangled: CTaskComplexWanderCop::LookForCriminals(CPed *)
int __fastcall CTaskComplexWanderCop::LookForCriminals(float **this, CPed *a2)
{
  int v4; // r0
  int v5; // r4
  float *v6; // r9
  int v7; // r0
  int v8; // r11
  float *v9; // r6
  unsigned int v10; // r0
  bool v11; // cc
  int ActiveTask; // r0
  int v13; // r5
  int v14; // r0
  float *v15; // r1
  float v16; // s0
  float v17; // s2
  float v18; // s4
  int v20; // r0
  bool v21; // [sp+14h] [bp-4Ch]
  _BYTE v22[16]; // [sp+18h] [bp-48h] BYREF
  _BYTE v23[56]; // [sp+28h] [bp-38h] BYREF

  v4 = *((_DWORD *)a2 + 5);
  v5 = *((_DWORD *)a2 + 272);
  v6 = (float *)(v4 + 48);
  if ( !v4 )
    v6 = (float *)((char *)a2 + 4);
  v7 = 76;
  while ( 1 )
  {
    v8 = v7;
    v9 = *(float **)(v5 + 4 * v7);
    if ( v9 )
    {
      v10 = *((_DWORD *)v9 + 359);
      v11 = v10 > 0x14;
      if ( v10 != 20 )
        v11 = v10 - 7 > 9;
      if ( !v11 && this[16] != v9 )
      {
        if ( CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)v9 + 272) + 4)) )
        {
          ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)v9 + 272) + 4));
          v13 = (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask);
          if ( v13 == (*((int (__fastcall **)(float **))*this + 5))(this) )
          {
            v14 = *((_DWORD *)v9 + 5);
            v15 = (float *)(v14 + 48);
            if ( !v14 )
              v15 = v9 + 1;
            v16 = *v15 - *v6;
            v17 = v15[1] - v6[1];
            v18 = v15[2] - v6[2];
            if ( (float)((float)((float)(v16 * v16) + (float)(v17 * v17)) + (float)(v18 * v18)) < 100.0
              && (float)((float)((float)(v16 * *(float *)(*((_DWORD *)a2 + 5) + 16))
                               + (float)(v17 * *(float *)(*((_DWORD *)a2 + 5) + 20)))
                       + (float)(v18 * *(float *)(*((_DWORD *)a2 + 5) + 24))) > 0.0
              && CWorld::GetIsLineOfSightClear(
                   (CWorld *)v6,
                   (const CVector *)v15,
                   (const CVector *)((char *)&stderr + 1),
                   0,
                   0,
                   1,
                   0,
                   0,
                   0,
                   v21) == 1 )
            {
              break;
            }
          }
        }
      }
    }
    v7 = v8 + 1;
    if ( v8 - 76 >= 15 )
      return 0;
  }
  CEventPedToChase::CEventPedToChase((CEventPedToChase *)v23, (CPed *)v9);
  CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v23, 0);
  CEventPedToFlee::CEventPedToFlee((CEventPedToFlee *)v22, a2);
  CEventGroup::Add((CEventGroup *)(*((_DWORD *)v9 + 272) + 104), (CEvent *)v22, 0);
  v20 = CTimer::m_snTimeInMilliseconds;
  this[16] = v9;
  this[14] = (float *)(v20 + 30000);
  CEventPedToFlee::~CEventPedToFlee((CEventPedToFlee *)v22);
  CEventPedToChase::~CEventPedToChase((CEventPedToChase *)v23);
  return 1;
}


// ============================================================

// Address: 0x526e50
// Original: _ZN21CTaskComplexWanderCopD0Ev
// Demangled: CTaskComplexWanderCop::~CTaskComplexWanderCop()
void __fastcall CTaskComplexWanderCop::~CTaskComplexWanderCop(CTaskComplexWanderCop *this)
{
  int v2; // r0
  void *v3; // r0

  v2 = *((_DWORD *)this + 10);
  *(_DWORD *)this = &off_66C5E8;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x526e80
// Original: _ZNK21CTaskComplexWanderCop5CloneEv
// Demangled: CTaskComplexWanderCop::Clone(void)
int __fastcall CTaskComplexWanderCop::Clone(CTaskComplexWanderCop *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r5
  int result; // r0
  char v6; // r3

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_50, a2);
  v4 = *((_DWORD *)this + 3);
  LOBYTE(this) = *((_BYTE *)this + 16);
  CTaskComplex::CTaskComplex(v3);
  *(_QWORD *)(result + 56) = 0LL;
  *(_QWORD *)(result + 64) = 0LL;
  *(_BYTE *)(result + 16) = (_BYTE)this;
  *(_DWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 20) = 1056964608;
  *(_WORD *)(result + 24) = -1;
  *(_WORD *)(result + 28) = -1;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 50) = 0;
  *(_DWORD *)(result + 46) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 74) = 0;
  v6 = *(_BYTE *)(result + 36);
  *(_DWORD *)(result + 70) = 0;
  *(_DWORD *)result = &off_66C5E8;
  *(_BYTE *)(result + 36) = v6 & 0xF0 | 1;
  return result;
}


// ============================================================

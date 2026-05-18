
// Address: 0x5268a0
// Original: _ZN35CTaskComplexFollowNodeRouteShooting17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFollowNodeRouteShooting::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexFollowNodeRouteShooting::CreateNextSubTask(
        CTaskComplexFollowNodeRouteShooting *this,
        CPed *a2)
{
  int NextSubTask; // r5
  int TaskSecondary; // r0
  int v6; // r6

  NextSubTask = CTaskComplexFollowNodeRoute::CreateNextSubTask(this, a2);
  if ( !NextSubTask )
  {
    TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
    v6 = TaskSecondary;
    if ( TaskSecondary )
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)TaskSecondary + 20))(TaskSecondary) == 1017 )
        (*(void (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v6 + 28))(v6, a2, 1, 0);
    }
  }
  return NextSubTask;
}


// ============================================================

// Address: 0x5268f0
// Original: _ZN35CTaskComplexFollowNodeRouteShooting18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFollowNodeRouteShooting::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexFollowNodeRouteShooting::CreateFirstSubTask(CTaskComplexFollowNodeRoute *this, CPed *a2)
{
  unsigned __int64 v2; // r2

  v2 = (unsigned int)CTimer::m_snTimeInMilliseconds | 0xFFFFFFFF00000000LL;
  *((_BYTE *)this + 108) = 1;
  *(_QWORD *)((char *)this + 100) = v2;
  return CTaskComplexFollowNodeRoute::CreateFirstSubTask(this, a2);
}


// ============================================================

// Address: 0x526910
// Original: _ZN35CTaskComplexFollowNodeRouteShooting14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFollowNodeRouteShooting::ControlSubTask(CPed *)
int __fastcall CTaskComplexFollowNodeRouteShooting::ControlSubTask(CTaskComplexFollowNodeRouteShooting *this, CPed *a2)
{
  int TaskSecondary; // r0
  int v5; // r6
  __int64 v6; // r0
  unsigned int v7; // r0
  unsigned int v8; // r1
  unsigned int v9; // r1
  int v10; // r8
  CTask *v11; // r6
  CEntity *v12; // r2
  CEntity **v13; // r0
  CPed *v14; // r1
  signed __int8 v15; // r3

  if ( *((_DWORD *)this + 24) )
  {
    TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
    v5 = TaskSecondary;
    if ( TaskSecondary )
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)TaskSecondary + 20))(TaskSecondary) == 1017 )
      {
        if ( *((_BYTE *)this + 108)
          && (!*((_BYTE *)this + 109)
            ? (HIDWORD(v6) = *((_DWORD *)this + 25), LODWORD(v6) = CTimer::m_snTimeInMilliseconds)
            : (LODWORD(v6) = CTimer::m_snTimeInMilliseconds,
               *((_BYTE *)this + 109) = 0,
               *((_DWORD *)this + 25) = v6,
               HIDWORD(v6) = v6),
              HIDWORD(v6) + *((_DWORD *)this + 26) <= (unsigned int)v6) )
        {
          if ( *(_BYTE *)(v5 + 16) != 3 )
            return CTaskComplexFollowNodeRoute::ControlSubTask(this, a2);
          v15 = 6;
          v12 = (CEntity *)*((_DWORD *)this + 24);
          HIDWORD(v6) = CTaskComplexFollowNodeRouteShooting::ms_iShootRecoverTime;
          *(_QWORD *)((char *)this + 100) = v6;
          *((_BYTE *)this + 108) = 1;
          v13 = (CEntity **)v5;
          v14 = a2;
        }
        else
        {
          v12 = (CEntity *)*((_DWORD *)this + 24);
          v13 = (CEntity **)v5;
          v14 = a2;
          v15 = 3;
        }
        CTaskSimpleUseGun::ControlGun(v13, v14, v12, v15);
      }
    }
    else if ( *((_BYTE *)this + 108) )
    {
      if ( *((_BYTE *)this + 109) )
      {
        v7 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 109) = 0;
        *((_DWORD *)this + 25) = v7;
        v8 = v7;
      }
      else
      {
        v8 = *((_DWORD *)this + 25);
        v7 = CTimer::m_snTimeInMilliseconds;
      }
      if ( v8 + *((_DWORD *)this + 26) <= v7 )
      {
        CPed::GetWeaponSkill(a2);
        if ( (*(_BYTE *)(CWeaponInfo::GetWeaponInfo() + 24) & 2) != 0 )
        {
          v9 = CTaskComplexFollowNodeRouteShooting::ms_iShootTime;
          *(_QWORD *)((char *)this + 100) = __PAIR64__(
                                              CTaskComplexFollowNodeRouteShooting::ms_iShootTime,
                                              CTimer::m_snTimeInMilliseconds);
          *((_BYTE *)this + 108) = 1;
          v10 = *((_DWORD *)a2 + 272);
          v11 = (CTask *)CTask::operator new((CTask *)&off_3C, v9);
          CTaskSimpleUseGun::CTaskSimpleUseGun();
          CTaskManager::SetTaskSecondary((CTaskManager *)(v10 + 4), v11, 0);
        }
      }
    }
  }
  return CTaskComplexFollowNodeRoute::ControlSubTask(this, a2);
}


// ============================================================

// Address: 0x527020
// Original: _ZN35CTaskComplexFollowNodeRouteShootingD2Ev
// Demangled: CTaskComplexFollowNodeRouteShooting::~CTaskComplexFollowNodeRouteShooting()
void __fastcall CTaskComplexFollowNodeRouteShooting::~CTaskComplexFollowNodeRouteShooting(
        CTaskComplexFollowNodeRouteShooting *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 96);
  v2 = (CEntity *)*((_DWORD *)this + 24);
  *(_DWORD *)this = &off_66C6BC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (void *)*((_DWORD *)this + 12);
  *(_DWORD *)this = &off_66C278;
  if ( v4 )
    CPointRoute::operator delete(v4);
  v5 = (void *)*((_DWORD *)this + 11);
  if ( v5 )
    CNodeRoute::operator delete(v5);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x527070
// Original: _ZN35CTaskComplexFollowNodeRouteShootingD0Ev
// Demangled: CTaskComplexFollowNodeRouteShooting::~CTaskComplexFollowNodeRouteShooting()
void __fastcall CTaskComplexFollowNodeRouteShooting::~CTaskComplexFollowNodeRouteShooting(
        CTaskComplexFollowNodeRouteShooting *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0

  v3 = (CEntity **)((char *)this + 96);
  v2 = (CEntity *)*((_DWORD *)this + 24);
  *(_DWORD *)this = &off_66C6BC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (void *)*((_DWORD *)this + 12);
  *(_DWORD *)this = &off_66C278;
  if ( v4 )
    CPointRoute::operator delete(v4);
  v5 = (void *)*((_DWORD *)this + 11);
  if ( v5 )
    CNodeRoute::operator delete(v5);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x5270c4
// Original: _ZNK35CTaskComplexFollowNodeRouteShooting5CloneEv
// Demangled: CTaskComplexFollowNodeRouteShooting::Clone(void)
int __fastcall CTaskComplexFollowNodeRouteShooting::Clone(CTaskComplexFollowNodeRouteShooting *this, unsigned int a2)
{
  int v3; // r5
  __int64 v4; // d8
  __int64 v5; // d9
  CEntity *v6; // r9
  char v7; // r11
  int v8; // r4
  int *v9; // r8
  int v10; // r0
  __int64 v11; // d18
  unsigned int v12; // r1
  _DWORD *v13; // r0
  unsigned int v14; // r1
  int v15; // r0
  int v16; // r0

  v3 = CTask::operator new((CTask *)&dword_70, a2);
  v4 = *((_QWORD *)this + 3);
  v5 = *((_QWORD *)this + 4);
  v6 = (CEntity *)*((_DWORD *)this + 24);
  v7 = *((_BYTE *)this + 76);
  v8 = *((_DWORD *)this + 15);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  v9 = (int *)(v3 + 24);
  *(_DWORD *)v3 = &off_66C278;
  v10 = *((_DWORD *)this + 5);
  v11 = *(_QWORD *)((char *)this + 12);
  v12 = *(_BYTE *)(v3 + 76) & 0x96;
  *(_QWORD *)(v3 + 24) = v4;
  *(_QWORD *)(v3 + 32) = v5;
  *(_QWORD *)(v3 + 80) = 0LL;
  *(_QWORD *)(v3 + 88) = 0LL;
  *(_DWORD *)(v3 + 20) = v10;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 60) = v8;
  *(_WORD *)(v3 + 40) = -1;
  *(_WORD *)(v3 + 52) = -1;
  *(_WORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 68) = 0;
  *(_QWORD *)(v3 + 12) = v11;
  *(_BYTE *)(v3 + 76) = v7 & 1 | v12 | 8;
  v13 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, v12);
  *v13 = 0;
  *(_DWORD *)(v3 + 48) = v13;
  v15 = CNodeRoute::operator new((CNodeRoute *)&dword_24, v14);
  *(_DWORD *)v15 = 0;
  *(_WORD *)(v15 + 4) = -1;
  *(_WORD *)(v15 + 8) = -1;
  *(_WORD *)(v15 + 12) = -1;
  *(_WORD *)(v15 + 16) = -1;
  *(_WORD *)(v15 + 20) = -1;
  *(_WORD *)(v15 + 24) = -1;
  *(_WORD *)(v15 + 28) = -1;
  *(_WORD *)(v15 + 32) = -1;
  *(_WORD *)(v3 + 52) = -1;
  *(_DWORD *)(v3 + 44) = v15;
  v16 = EmptyNodeAddress;
  *(_DWORD *)v3 = &off_66C6BC;
  *(_DWORD *)(v3 + 40) = v16;
  *(_WORD *)(v3 + 108) = 0;
  *(_DWORD *)(v3 + 100) = 0;
  *(_DWORD *)(v3 + 104) = 0;
  *(_DWORD *)(v3 + 96) = v6;
  if ( v6 )
    CEntity::RegisterReference(v6, (CEntity **)(v3 + 96));
  if ( *v9 >= 7 )
    *v9 = 6;
  *(_DWORD *)(v3 + 40) = *((_DWORD *)this + 10);
  return v3;
}


// ============================================================

// Address: 0x5271d4
// Original: _ZNK35CTaskComplexFollowNodeRouteShooting11GetTaskTypeEv
// Demangled: CTaskComplexFollowNodeRouteShooting::GetTaskType(void)
int __fastcall CTaskComplexFollowNodeRouteShooting::GetTaskType(CTaskComplexFollowNodeRouteShooting *this)
{
  return 937;
}


// ============================================================


// Address: 0x5140e8
// Original: _ZN24CTaskComplexFleeShootingC2EP7CEntitybfiiiif
// Demangled: CTaskComplexFleeShooting::CTaskComplexFleeShooting(CEntity *,bool,float,int,int,int,int,float)
void __fastcall CTaskComplexFleeShooting::CTaskComplexFleeShooting(
        CTaskComplexFleeShooting *this,
        CEntity *a2,
        bool a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9)
{
  CEntity *v13; // r0

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 7) = a5;
  *((float *)this + 8) = a4;
  *((_BYTE *)this + 36) = a3;
  *((_DWORD *)this + 10) = a8;
  *((float *)this + 11) = a9;
  *((_DWORD *)this + 12) = 7;
  *((_WORD *)this + 30) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *(_DWORD *)this = &off_66BCC8;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
    v13 = (CEntity *)*((_DWORD *)this + 3);
  }
  else
  {
    v13 = 0;
  }
  *((_DWORD *)this + 16) = a6;
  *((_DWORD *)this + 17) = a7;
  *((_WORD *)this + 40) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *(_DWORD *)this = &off_66BD04;
  if ( v13 )
    CEntity::RegisterReference(v13, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x514180
// Original: _ZN24CTaskComplexFleeShootingD2Ev
// Demangled: CTaskComplexFleeShooting::~CTaskComplexFleeShooting()
void __fastcall CTaskComplexFleeShooting::~CTaskComplexFleeShooting(CEntity **this)
{
  CEntity *v2; // r0
  CEntity **v3; // r5
  CEntity *v4; // r0

  v3 = this + 3;
  v2 = this[3];
  *this = (CEntity *)&off_66BD04;
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

// Address: 0x5141d8
// Original: _ZN24CTaskComplexFleeShootingD0Ev
// Demangled: CTaskComplexFleeShooting::~CTaskComplexFleeShooting()
void __fastcall CTaskComplexFleeShooting::~CTaskComplexFleeShooting(CEntity **this)
{
  CEntity *v2; // r0
  CEntity **v3; // r5
  CEntity *v4; // r0
  void *v5; // r0

  v3 = this + 3;
  v2 = this[3];
  *this = (CEntity *)&off_66BD04;
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

// Address: 0x514234
// Original: _ZN24CTaskComplexFleeShooting13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexFleeShooting::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexFleeShooting::MakeAbortable(
        CTaskComplexFleeShooting *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int TaskSecondary; // r0
  int v9; // r4

  TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
  v9 = TaskSecondary;
  if ( TaskSecondary && (*(int (__fastcall **)(int))(*(_DWORD *)TaskSecondary + 20))(TaskSecondary) == 1017 )
    (*(void (__fastcall **)(int, CPed *, int, const CEvent *))(*(_DWORD *)v9 + 28))(v9, a2, a3, a4);
  return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x51428e
// Original: _ZN24CTaskComplexFleeShooting17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFleeShooting::CreateNextSubTask(CPed *)
CTaskSimpleStandStill *__fastcall CTaskComplexFleeShooting::CreateNextSubTask(CTaskComplexFleeShooting *this, CPed *a2)
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

// Address: 0x5142cc
// Original: _ZN24CTaskComplexFleeShooting18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFleeShooting::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexFleeShooting::CreateFirstSubTask(CTaskComplexSmartFleeEntity *this, CPed *a2)
{
  unsigned __int64 v2; // r2

  v2 = (unsigned int)CTimer::m_snTimeInMilliseconds | 0xFFFFFFFF00000000LL;
  *((_BYTE *)this + 80) = 1;
  *((_QWORD *)this + 9) = v2;
  CTaskComplexSmartFleeEntity::CreateFirstSubTask(this, a2);
}


// ============================================================

// Address: 0x5142e8
// Original: _ZN24CTaskComplexFleeShooting14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFleeShooting::ControlSubTask(CPed *)
int __fastcall CTaskComplexFleeShooting::ControlSubTask(CTaskComplexFleeShooting *this, CPed *a2)
{
  int TaskSecondary; // r0
  int v5; // r6
  __int64 v6; // r0
  int v7; // r0
  unsigned int v8; // r0
  unsigned int v9; // r1
  __int64 v10; // r0
  int v11; // r8
  CTask *v12; // r6
  CEntity *v13; // r2
  CEntity **v14; // r0
  CPed *v15; // r1
  signed __int8 v16; // r3

  TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
  v5 = TaskSecondary;
  if ( TaskSecondary )
  {
    *((_DWORD *)this + 12) = 6;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)TaskSecondary + 20))(TaskSecondary) == 1017 )
    {
      if ( *((_BYTE *)this + 80)
        && (!*((_BYTE *)this + 81)
          ? (HIDWORD(v6) = *((_DWORD *)this + 18), LODWORD(v6) = CTimer::m_snTimeInMilliseconds)
          : (LODWORD(v6) = CTimer::m_snTimeInMilliseconds,
             *((_BYTE *)this + 81) = 0,
             *((_DWORD *)this + 18) = v6,
             HIDWORD(v6) = v6),
            HIDWORD(v6) + *((_DWORD *)this + 19) <= (unsigned int)v6) )
      {
        if ( *(_BYTE *)(v5 + 16) != 3 )
          return CTaskComplexSmartFleeEntity::ControlSubTask(this, a2);
        HIDWORD(v6) = *((_DWORD *)this + 17);
        v13 = (CEntity *)*((_DWORD *)this + 3);
        *((_BYTE *)this + 80) = 1;
        v16 = 6;
        *((_QWORD *)this + 9) = v6;
        v14 = (CEntity **)v5;
        v15 = a2;
      }
      else
      {
        v13 = (CEntity *)*((_DWORD *)this + 3);
        v14 = (CEntity **)v5;
        v15 = a2;
        v16 = 3;
      }
      CTaskSimpleUseGun::ControlGun(v14, v15, v13, v16);
    }
  }
  else
  {
    v7 = *((unsigned __int8 *)this + 80);
    *((_DWORD *)this + 12) = 7;
    if ( v7 )
    {
      if ( *((_BYTE *)this + 81) )
      {
        v8 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 81) = 0;
        *((_DWORD *)this + 18) = v8;
        v9 = v8;
      }
      else
      {
        v9 = *((_DWORD *)this + 18);
        v8 = CTimer::m_snTimeInMilliseconds;
      }
      if ( v9 + *((_DWORD *)this + 19) <= v8 )
      {
        CPed::GetWeaponSkill(a2);
        if ( (*(_BYTE *)(CWeaponInfo::GetWeaponInfo() + 24) & 2) != 0 )
        {
          HIDWORD(v10) = *((_DWORD *)this + 16);
          LODWORD(v10) = CTimer::m_snTimeInMilliseconds;
          *((_QWORD *)this + 9) = v10;
          *((_BYTE *)this + 80) = 1;
          v11 = *((_DWORD *)a2 + 272);
          v12 = (CTask *)CTask::operator new((CTask *)&off_3C, HIDWORD(v10));
          CTaskSimpleUseGun::CTaskSimpleUseGun();
          CTaskManager::SetTaskSecondary((CTaskManager *)(v11 + 4), v12, 0);
        }
      }
    }
  }
  return CTaskComplexSmartFleeEntity::ControlSubTask(this, a2);
}


// ============================================================

// Address: 0x514e6c
// Original: _ZNK24CTaskComplexFleeShooting5CloneEv
// Demangled: CTaskComplexFleeShooting::Clone(void)
CTaskComplex *__fastcall CTaskComplexFleeShooting::Clone(CTaskComplexFleeShooting *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  CEntity *v4; // r10
  CTaskComplex *v5; // r4
  __int64 v6; // kr00_8
  __int64 v7; // r8
  CEntity *v8; // r0
  int v10; // [sp+4h] [bp-24h]
  int v11; // [sp+8h] [bp-20h]

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_54, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = v3;
  v6 = *(_QWORD *)((char *)this + 28);
  v11 = *((_DWORD *)this + 16);
  v10 = *((_DWORD *)this + 17);
  v7 = *((_QWORD *)this + 5);
  LOBYTE(this) = *((_BYTE *)this + 36);
  CTaskComplex::CTaskComplex(v3);
  *((_BYTE *)v5 + 36) = (_BYTE)this;
  *((_DWORD *)v5 + 10) = v7;
  *(_QWORD *)((char *)v5 + 28) = v6;
  *((_DWORD *)v5 + 11) = HIDWORD(v7);
  *((_DWORD *)v5 + 12) = 7;
  *((_WORD *)v5 + 30) = 0;
  *((_DWORD *)v5 + 13) = 0;
  *((_DWORD *)v5 + 14) = 0;
  *(_DWORD *)v5 = &off_66BCC8;
  *((_DWORD *)v5 + 3) = v4;
  if ( v4 )
  {
    CEntity::RegisterReference(v4, (CEntity **)v5 + 3);
    v8 = (CEntity *)*((_DWORD *)v5 + 3);
  }
  else
  {
    v8 = 0;
  }
  *((_DWORD *)v5 + 16) = v11;
  *((_DWORD *)v5 + 17) = v10;
  *((_WORD *)v5 + 40) = 0;
  *((_DWORD *)v5 + 18) = 0;
  *((_DWORD *)v5 + 19) = 0;
  *(_DWORD *)v5 = &off_66BD04;
  if ( v8 )
    CEntity::RegisterReference(v8, (CEntity **)v5 + 3);
  return v5;
}


// ============================================================

// Address: 0x514f18
// Original: _ZNK24CTaskComplexFleeShooting11GetTaskTypeEv
// Demangled: CTaskComplexFleeShooting::GetTaskType(void)
int __fastcall CTaskComplexFleeShooting::GetTaskType(CTaskComplexFleeShooting *this)
{
  return 928;
}


// ============================================================

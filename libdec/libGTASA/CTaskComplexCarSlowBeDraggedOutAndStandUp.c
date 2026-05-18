
// Address: 0x19509c
// Original: j__ZN41CTaskComplexCarSlowBeDraggedOutAndStandUpC2EP8CVehiclei
// Demangled: CTaskComplexCarSlowBeDraggedOutAndStandUp::CTaskComplexCarSlowBeDraggedOutAndStandUp(CVehicle *,int)
// attributes: thunk
void __fastcall CTaskComplexCarSlowBeDraggedOutAndStandUp::CTaskComplexCarSlowBeDraggedOutAndStandUp(
        CTaskComplexCarSlowBeDraggedOutAndStandUp *this,
        CVehicle *a2,
        int a3)
{
  _ZN41CTaskComplexCarSlowBeDraggedOutAndStandUpC2EP8CVehiclei(this, a2, a3);
}


// ============================================================

// Address: 0x505250
// Original: _ZN41CTaskComplexCarSlowBeDraggedOutAndStandUpC2EP8CVehiclei
// Demangled: CTaskComplexCarSlowBeDraggedOutAndStandUp::CTaskComplexCarSlowBeDraggedOutAndStandUp(CVehicle *,int)
void __fastcall CTaskComplexCarSlowBeDraggedOutAndStandUp::CTaskComplexCarSlowBeDraggedOutAndStandUp(
        CTaskComplexCarSlowBeDraggedOutAndStandUp *this,
        CVehicle *a2,
        int a3)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = a3;
  *(_DWORD *)this = &off_66B454;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x50528c
// Original: _ZN41CTaskComplexCarSlowBeDraggedOutAndStandUpD2Ev
// Demangled: CTaskComplexCarSlowBeDraggedOutAndStandUp::~CTaskComplexCarSlowBeDraggedOutAndStandUp()
void __fastcall CTaskComplexCarSlowBeDraggedOutAndStandUp::~CTaskComplexCarSlowBeDraggedOutAndStandUp(
        CTaskComplexCarSlowBeDraggedOutAndStandUp *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B454;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5052b8
// Original: _ZN41CTaskComplexCarSlowBeDraggedOutAndStandUpD0Ev
// Demangled: CTaskComplexCarSlowBeDraggedOutAndStandUp::~CTaskComplexCarSlowBeDraggedOutAndStandUp()
void __fastcall CTaskComplexCarSlowBeDraggedOutAndStandUp::~CTaskComplexCarSlowBeDraggedOutAndStandUp(
        CTaskComplexCarSlowBeDraggedOutAndStandUp *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B454;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x5052e8
// Original: _ZN41CTaskComplexCarSlowBeDraggedOutAndStandUp13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexCarSlowBeDraggedOutAndStandUp::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexCarSlowBeDraggedOutAndStandUp::MakeAbortable(
        CTaskComplexCarSlowBeDraggedOutAndStandUp *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( a3 == 2 )
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             2,
             a4);
  else
    return 0;
}


// ============================================================

// Address: 0x5052fc
// Original: _ZN41CTaskComplexCarSlowBeDraggedOutAndStandUp13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexCarSlowBeDraggedOutAndStandUp::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexCarSlowBeDraggedOutAndStandUp::CreateSubTask(
        CTaskComplexCarSlowBeDraggedOutAndStandUp *this,
        int a2,
        CPed *a3)
{
  int v5; // r4
  int v6; // r0
  CEntity *v7; // r5
  int v8; // r6
  __int64 v9; // kr00_8
  CEntity **v10; // r1
  int v11; // r6

  v5 = 0;
  if ( a2 >= 816 )
  {
    if ( a2 == 816 )
    {
      v5 = CTask::operator new((CTask *)&off_18, 0x330u);
      v7 = (CEntity *)*((_DWORD *)a3 + 356);
      v11 = *((_DWORD *)this + 4);
      CTaskSimple::CTaskSimple((CTaskSimple *)v5);
      *(_DWORD *)(v5 + 12) = v11;
      *(_BYTE *)(v5 + 16) = 1;
      *(_BYTE *)(v5 + 21) = 0;
      *(_DWORD *)(v5 + 17) = 0;
      *(_DWORD *)v5 = &off_66B348;
      *(_DWORD *)(v5 + 8) = v7;
      v10 = (CEntity **)(v5 + 8);
    }
    else
    {
      if ( a2 != 823 )
        return v5;
      v5 = CTask::operator new((CTask *)&dword_1C, 0x337u);
      v9 = *(_QWORD *)((char *)this + 12);
      v8 = *((_DWORD *)this + 4);
      v7 = (CEntity *)v9;
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      *(_DWORD *)(v5 + 16) = v8;
      *(_BYTE *)(v5 + 20) = 0;
      *(_DWORD *)(v5 + 24) = 0;
      *(_DWORD *)v5 = &off_66B418;
      *(_DWORD *)(v5 + 12) = v9;
      v10 = (CEntity **)(v5 + 12);
    }
    if ( v7 )
      CEntity::RegisterReference(v7, v10);
  }
  else if ( a2 == 206 )
  {
    v5 = CTask::operator new((CTask *)&byte_9[3], 0xCEu);
    CTaskComplexGetUpAndStandStill::CTaskComplexGetUpAndStandStill((CTaskComplexGetUpAndStandStill *)v5);
  }
  else if ( a2 == 704 )
  {
    v6 = *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 3) + 904) + 222);
    if ( v6 == 24 )
    {
      v5 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, *((CVehicle **)a3 + 356), 10, 0, 0, 1);
    }
    else if ( v6 == 15 || (v5 = 0, v6 == 16) && *((_DWORD *)this + 4) == 8 )
    {
      v5 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, *((CVehicle **)a3 + 356), 8, 0, 0, 1);
    }
  }
  return v5;
}


// ============================================================

// Address: 0x505404
// Original: _ZN41CTaskComplexCarSlowBeDraggedOutAndStandUp17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexCarSlowBeDraggedOutAndStandUp::CreateNextSubTask(CPed *)
CTaskComplexGetUpAndStandStill *__fastcall CTaskComplexCarSlowBeDraggedOutAndStandUp::CreateNextSubTask(
        CTaskComplexCarSlowBeDraggedOutAndStandUp *this,
        CPed *a2)
{
  int v3; // r0
  unsigned int v4; // r1
  CTaskComplexGetUpAndStandStill *v5; // r5
  _BYTE v7[32]; // [sp+0h] [bp-20h] BYREF

  v3 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v3 == 206 )
  {
    CPed::IsPlayer(a2);
    return 0;
  }
  if ( v3 != 823 )
    return 0;
  if ( CPed::IsAlive(a2) == 1 && *((float *)a2 + 337) > 0.0 )
  {
    v5 = (CTaskComplexGetUpAndStandStill *)CTask::operator new((CTask *)&byte_9[3], v4);
    CTaskComplexGetUpAndStandStill::CTaskComplexGetUpAndStandStill(v5);
  }
  else
  {
    v5 = 0;
    CEventDeath::CEventDeath((CEventDeath *)v7, 0);
    CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v7, 0);
    CEvent::~CEvent((CEvent *)v7);
  }
  return v5;
}


// ============================================================

// Address: 0x505482
// Original: _ZN41CTaskComplexCarSlowBeDraggedOutAndStandUp18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexCarSlowBeDraggedOutAndStandUp::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexCarSlowBeDraggedOutAndStandUp::CreateFirstSubTask(
        CTaskComplexCarSlowBeDraggedOutAndStandUp *this,
        CPed *a2)
{
  CPed *PlayerPed; // r0
  int v5; // r2
  __int64 v6; // r0
  bool v7; // zf
  int v8; // r0
  int v9; // r1

  PlayerPed = (CPed *)FindPlayerPed(0);
  v5 = *((_DWORD *)a2 + 356);
  if ( PlayerPed == a2 )
  {
    CAEVehicleAudioEntity::PlayerAboutToExitVehicleAsDriver((CAEVehicleAudioEntity *)(v5 + 316));
  }
  else
  {
    if ( *(CPed **)(v5 + 1124) != a2 )
      goto LABEL_6;
    CPed::SetRadioStation(a2);
  }
  v5 = *((_DWORD *)a2 + 356);
LABEL_6:
  HIDWORD(v6) = 704;
  LODWORD(v6) = *(unsigned __int8 *)(*(_DWORD *)(v5 + 904) + 222);
  v7 = (_DWORD)v6 == 15;
  if ( (_DWORD)v6 != 15 )
    v7 = (_DWORD)v6 == 24;
  if ( !v7 )
  {
    HIDWORD(v6) = *((_DWORD *)this + 4);
    if ( v6 == 0x800000010LL )
    {
      HIDWORD(v6) = 704;
      return CTaskComplexCarSlowBeDraggedOutAndStandUp::CreateSubTask(this, SHIDWORD(v6), a2);
    }
    HIDWORD(v6) = 823;
    LODWORD(v6) = *(unsigned __int8 *)(*(_DWORD *)(v5 + 904) + 222);
    if ( (unsigned int)v6 > 0x1C )
      return CTaskComplexCarSlowBeDraggedOutAndStandUp::CreateSubTask(this, SHIDWORD(v6), a2);
    if ( ((1 << v6) & 0x10CC6001) != 0 )
    {
      v8 = *((_DWORD *)this + 4);
      if ( v8 == 8 )
      {
        v9 = 70;
      }
      else
      {
        if ( v8 != 10 )
        {
LABEL_22:
          HIDWORD(v6) = 823;
          return CTaskComplexCarSlowBeDraggedOutAndStandUp::CreateSubTask(this, SHIDWORD(v6), a2);
        }
        v9 = 69;
      }
    }
    else if ( (_DWORD)v6 == 1 )
    {
      v9 = 71;
    }
    else
    {
      if ( (_DWORD)v6 != 17 )
        return CTaskComplexCarSlowBeDraggedOutAndStandUp::CreateSubTask(this, SHIDWORD(v6), a2);
      v9 = 73;
    }
    CAEPedAudioEntity::AddAudioEvent((CPed *)((char *)a2 + 316), v9, 0.0, 1.0, 0, 0, 0, 0);
    goto LABEL_22;
  }
  return CTaskComplexCarSlowBeDraggedOutAndStandUp::CreateSubTask(this, SHIDWORD(v6), a2);
}


// ============================================================

// Address: 0x505548
// Original: _ZN41CTaskComplexCarSlowBeDraggedOutAndStandUp14ControlSubTaskEP4CPed
// Demangled: CTaskComplexCarSlowBeDraggedOutAndStandUp::ControlSubTask(CPed *)
int __fastcall CTaskComplexCarSlowBeDraggedOutAndStandUp::ControlSubTask(
        CTaskComplexCarSlowBeDraggedOutAndStandUp *this,
        CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x507214
// Original: _ZNK41CTaskComplexCarSlowBeDraggedOutAndStandUp5CloneEv
// Demangled: CTaskComplexCarSlowBeDraggedOutAndStandUp::Clone(void)
int __fastcall CTaskComplexCarSlowBeDraggedOutAndStandUp::Clone(
        CTaskComplexCarSlowBeDraggedOutAndStandUp *this,
        unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&dword_14, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  *(_DWORD *)v3 = &off_66B454;
  *(_DWORD *)(v3 + 12) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x507258
// Original: _ZNK41CTaskComplexCarSlowBeDraggedOutAndStandUp11GetTaskTypeEv
// Demangled: CTaskComplexCarSlowBeDraggedOutAndStandUp::GetTaskType(void)
int __fastcall CTaskComplexCarSlowBeDraggedOutAndStandUp::GetTaskType(CTaskComplexCarSlowBeDraggedOutAndStandUp *this)
{
  return 824;
}


// ============================================================

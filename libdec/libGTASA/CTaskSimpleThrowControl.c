
// Address: 0x18f338
// Original: j__ZN23CTaskSimpleThrowControlC2EP7CEntityPK7CVector
// Demangled: CTaskSimpleThrowControl::CTaskSimpleThrowControl(CEntity *,CVector const*)
// attributes: thunk
void __fastcall CTaskSimpleThrowControl::CTaskSimpleThrowControl(
        CTaskSimpleThrowControl *this,
        CEntity *a2,
        const CVector *a3)
{
  _ZN23CTaskSimpleThrowControlC2EP7CEntityPK7CVector(this, a2, a3);
}


// ============================================================

// Address: 0x4dee24
// Original: _ZN23CTaskSimpleThrowControlC2EP7CEntityPK7CVector
// Demangled: CTaskSimpleThrowControl::CTaskSimpleThrowControl(CEntity *,CVector const*)
void __fastcall CTaskSimpleThrowControl::CTaskSimpleThrowControl(
        CTaskSimpleThrowControl *this,
        CEntity *a2,
        const CVector *a3)
{
  __int64 v6; // d16

  CTaskSimple::CTaskSimple(this);
  *((_WORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *(_DWORD *)this = &off_669710;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
  if ( a3 )
  {
    v6 = *(_QWORD *)a3;
    *((_DWORD *)this + 6) = *((_DWORD *)a3 + 2);
    *((_QWORD *)this + 2) = v6;
  }
}


// ============================================================

// Address: 0x4dee80
// Original: _ZN23CTaskSimpleThrowControlD2Ev
// Demangled: CTaskSimpleThrowControl::~CTaskSimpleThrowControl()
void __fastcall CTaskSimpleThrowControl::~CTaskSimpleThrowControl(CTaskSimpleThrowControl *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669710;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4deeac
// Original: _ZN23CTaskSimpleThrowControlD0Ev
// Demangled: CTaskSimpleThrowControl::~CTaskSimpleThrowControl()
void __fastcall CTaskSimpleThrowControl::~CTaskSimpleThrowControl(CTaskSimpleThrowControl *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669710;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4deedc
// Original: _ZN23CTaskSimpleThrowControl13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleThrowControl::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleThrowControl::MakeAbortable(
        CTaskSimpleThrowControl *this,
        CPedIntelligence **a2,
        int a3,
        const CEvent *a4)
{
  int TaskSecondary; // r0

  if ( !CPedIntelligence::GetTaskThrow(a2[272]) )
    return 1;
  TaskSecondary = CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)a2[272] + 4), 0);
  return (*(int (__fastcall **)(int, CPedIntelligence **, int, const CEvent *))(*(_DWORD *)TaskSecondary + 28))(
           TaskSecondary,
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x4def20
// Original: _ZN23CTaskSimpleThrowControl10ProcessPedEP4CPed
// Demangled: CTaskSimpleThrowControl::ProcessPed(CPed *)
int __fastcall CTaskSimpleThrowControl::ProcessPed(CTaskSimpleThrowControl *this, CPedIntelligence **a2)
{
  int v4; // r5
  unsigned int v6; // r1
  int TaskSecondary; // r0
  char *v8; // r9
  int v9; // r6
  CEntity *v10; // r8
  __int64 v11; // r10
  int TaskThrow; // r0
  float v13; // s0
  int v14; // r6
  int *v15; // r0
  int v16; // r1
  int v17; // r0
  CPedIntelligence *v18; // r2
  int v19; // r3
  float *v20; // r1
  float *v21; // r2
  float *v22; // r0
  float v23; // s0
  int v24; // r0
  CPedIntelligence *v25; // r2
  __int64 v26; // d16
  int v27; // [sp+4h] [bp-24h]
  CPedIntelligence *v28; // [sp+8h] [bp-20h]

  if ( *((_BYTE *)this + 8) )
    return 1;
  CPed::SetMoveState(a2, 1);
  if ( CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)a2[272] + 4), 0) )
  {
    TaskSecondary = CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)a2[272] + 4), 0);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)TaskSecondary + 20))(TaskSecondary) != 1018 )
    {
      v4 = 0;
      v24 = CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)a2[272] + 4), 0);
      (*(void (__fastcall **)(int, CPedIntelligence **, int, _DWORD))(*(_DWORD *)v24 + 28))(v24, a2, 1, 0);
      return v4;
    }
    v8 = (char *)this + 16;
  }
  else
  {
    if ( *((_BYTE *)this + 9) )
      return 1;
    v28 = a2[272];
    v9 = CTask::operator new((CTask *)&dword_24, v6);
    v8 = (char *)this + 16;
    v27 = *((_DWORD *)this + 4);
    v10 = (CEntity *)*((_DWORD *)this + 3);
    v11 = *(_QWORD *)((char *)this + 20);
    CTaskSimple::CTaskSimple((CTaskSimple *)v9);
    *(_DWORD *)v9 = &off_6696DC;
    *(_WORD *)(v9 + 8) = 0;
    *(_BYTE *)(v9 + 10) = 0;
    *(_DWORD *)(v9 + 12) = 0;
    *(_DWORD *)(v9 + 20) = v27;
    *(_QWORD *)(v9 + 24) = v11;
    *(_DWORD *)(v9 + 16) = v10;
    if ( v10 )
      CEntity::RegisterReference(v10, (CEntity **)(v9 + 16));
    *(_DWORD *)(v9 + 32) = CTimer::m_snTimeInMilliseconds;
    CTaskManager::SetTaskSecondary((CPedIntelligence *)((char *)v28 + 4), (CTask *)v9, 0);
    *((_BYTE *)this + 9) = 1;
  }
  TaskThrow = CPedIntelligence::GetTaskThrow(a2[272]);
  v13 = *((float *)this + 4);
  v14 = TaskThrow;
  if ( v13 != 0.0 )
  {
    v15 = (int *)((char *)this + 12);
    v16 = *((_DWORD *)this + 3);
LABEL_13:
    if ( v16 )
    {
      v17 = *v15;
      v18 = a2[5];
      v19 = *(_DWORD *)(v17 + 20);
      v20 = (float *)((char *)v18 + 48);
      if ( !v18 )
        v20 = (float *)(a2 + 1);
      v21 = (float *)(v19 + 48);
      if ( !v19 )
        v21 = (float *)(v17 + 4);
      v22 = v21 + 1;
      v23 = *v21 - *v20;
    }
    else
    {
      v25 = a2[5];
      v22 = (float *)((char *)this + 20);
      v20 = (float *)((char *)v25 + 48);
      if ( !v25 )
        v20 = (float *)(a2 + 1);
      v23 = v13 - *v20;
    }
    *((float *)a2 + 344) = atan2f(COERCE_FLOAT(LODWORD(v23) ^ 0x80000000), *v22 - v20[1]);
    goto LABEL_29;
  }
  v15 = (int *)((char *)this + 12);
  v16 = *((_DWORD *)this + 3);
  if ( *((float *)this + 6) != 0.0 )
    goto LABEL_13;
  v8 = 0;
  if ( v16 )
    goto LABEL_13;
LABEL_29:
  if ( !*((_BYTE *)this + 9) )
    return 0;
  if ( !*(_BYTE *)(v14 + 8) )
  {
    if ( v8 )
    {
      v26 = *(_QWORD *)v8;
      *(_DWORD *)(v14 + 28) = *((_DWORD *)v8 + 2);
      *(_QWORD *)(v14 + 20) = v26;
    }
    return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x4e9a28
// Original: _ZNK23CTaskSimpleThrowControl5CloneEv
// Demangled: CTaskSimpleThrowControl::Clone(void)
int __fastcall CTaskSimpleThrowControl::Clone(CTaskSimpleThrowControl *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r9
  __int64 v5; // d16
  int result; // r0

  v3 = CTask::operator new((CTask *)&dword_1C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_WORD *)(v3 + 8) = 0;
  *(_DWORD *)v3 = &off_669710;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  v5 = *((_QWORD *)this + 2);
  *(_DWORD *)(v3 + 24) = *((_DWORD *)this + 6);
  result = v3;
  *(_QWORD *)(v3 + 16) = v5;
  return result;
}


// ============================================================

// Address: 0x4e9a8c
// Original: _ZNK23CTaskSimpleThrowControl11GetTaskTypeEv
// Demangled: CTaskSimpleThrowControl::GetTaskType(void)
int __fastcall CTaskSimpleThrowControl::GetTaskType(CTaskSimpleThrowControl *this)
{
  return 1021;
}


// ============================================================

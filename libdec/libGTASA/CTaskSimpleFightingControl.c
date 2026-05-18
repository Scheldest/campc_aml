
// Address: 0x19e0e8
// Original: j__ZN26CTaskSimpleFightingControl15CalcMoveCommandEP4CPed
// Demangled: CTaskSimpleFightingControl::CalcMoveCommand(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleFightingControl::CalcMoveCommand(CTaskSimpleFightingControl *this, CPed *a2)
{
  return _ZN26CTaskSimpleFightingControl15CalcMoveCommandEP4CPed(this, a2);
}


// ============================================================

// Address: 0x4db488
// Original: _ZN26CTaskSimpleFightingControlC2EP7CEntityff
// Demangled: CTaskSimpleFightingControl::CTaskSimpleFightingControl(CEntity *,float,float)
void __fastcall CTaskSimpleFightingControl::CTaskSimpleFightingControl(
        CTaskSimpleFightingControl *this,
        CEntity *a2,
        float a3,
        float a4)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_WORD *)this + 5) = 0;
  *(_DWORD *)this = &off_669640;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
  *((float *)this + 4) = a3;
  *((float *)this + 5) = a4;
  *((_DWORD *)this + 6) = 1065353216;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
}


// ============================================================

// Address: 0x4db4f4
// Original: _ZN26CTaskSimpleFightingControlD2Ev
// Demangled: CTaskSimpleFightingControl::~CTaskSimpleFightingControl()
void __fastcall CTaskSimpleFightingControl::~CTaskSimpleFightingControl(CTaskSimpleFightingControl *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669640;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4db520
// Original: _ZN26CTaskSimpleFightingControlD0Ev
// Demangled: CTaskSimpleFightingControl::~CTaskSimpleFightingControl()
void __fastcall CTaskSimpleFightingControl::~CTaskSimpleFightingControl(CTaskSimpleFightingControl *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669640;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4db550
// Original: _ZN26CTaskSimpleFightingControl13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleFightingControl::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleFightingControl::MakeAbortable(
        CTaskSimpleFightingControl *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v9; // r0
  int v10; // r1
  int v11; // r2
  float *v12; // r3
  float *v13; // r1
  float v14; // s2
  float v15; // s4
  int TaskSecondary; // r0
  float v17; // [sp+4h] [bp-1Ch] BYREF
  float v18; // [sp+8h] [bp-18h]
  float v19; // [sp+Ch] [bp-14h]

  if ( !a3 )
    return 0;
  if ( a3 == 2 )
    return 1;
  if ( a3 == 1 && a4 )
  {
    if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 12))(a4) < 22
      || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 2
      || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 3
      || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 4 )
    {
      return 0;
    }
    if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 1
      || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 5
      || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 6 )
    {
      v9 = *((_DWORD *)this + 3);
      if ( !v9 )
        return 1;
      v10 = *((_DWORD *)a2 + 5);
      v11 = *(_DWORD *)(v9 + 20);
      v12 = (float *)(v10 + 48);
      if ( !v10 )
        v12 = (float *)((char *)a2 + 4);
      v13 = (float *)(v11 + 48);
      v14 = v12[1];
      v15 = v12[2];
      if ( !v11 )
        v13 = (float *)(v9 + 4);
      v17 = *v13 - *v12;
      v18 = v13[1] - v14;
      v19 = v13[2] - v15;
      CVector::Normalise((CVector *)&v17);
      if ( (float)((float)((float)(*((float *)a4 + 6) * v17) + (float)(*((float *)a4 + 7) * v18))
                 + (float)(*((float *)a4 + 8) * v19)) > -0.707 )
        return 0;
    }
  }
  if ( !CPedIntelligence::GetTaskFighting(*((CPedIntelligence **)a2 + 272)) )
    return 1;
  TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
  return (*(int (__fastcall **)(int, CPed *, int, const CEvent *))(*(_DWORD *)TaskSecondary + 28))(
           TaskSecondary,
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x4db698
// Original: _ZN26CTaskSimpleFightingControl10ProcessPedEP4CPed
// Demangled: CTaskSimpleFightingControl::ProcessPed(CPed *)
int __fastcall CTaskSimpleFightingControl::ProcessPed(CTaskSimpleFightingControl *this, CPed *a2)
{
  int v4; // r5
  float v6; // s16
  int TaskSecondary; // r0
  unsigned int v8; // r1
  int v9; // r9
  int v10; // r0
  _DWORD *v11; // r8
  unsigned int v12; // r0
  int v13; // r9
  int v14; // r6
  int v15; // r0
  int v16; // r6
  CEntity *v17; // r8
  float v18; // s18
  unsigned int v19; // r0
  CTaskManager *v20; // r0
  char v21; // r9
  int v22; // r0
  unsigned int v23; // r1
  bool v24; // cc
  int v25; // r6
  int v26; // r1
  int v27; // r1
  int v28; // r0
  CEntity *v29; // r5
  CEntity *v30; // r0

  if ( !*((_DWORD *)this + 3) || *((_BYTE *)this + 8) )
    return 1;
  v6 = (float)*((unsigned __int8 *)a2 + 1821);
  if ( *((_BYTE *)a2 + 1096) != 2 && *((_BYTE *)a2 + 1821) == 40 && *((_DWORD *)a2 + 359) != 6 )
    v6 = (float)*(unsigned __int16 *)(*((_DWORD *)a2 + 360) + 48);
  CPed::GiveWeaponAtStartOfFight(a2);
  TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
  v9 = *((_DWORD *)a2 + 272);
  if ( !TaskSecondary )
  {
    v16 = CTask::operator new((CTask *)&word_28, v8);
    v17 = (CEntity *)*((_DWORD *)this + 3);
    v18 = FIGHT_CONTROL_TIME_TO_IDLE;
    CTaskSimple::CTaskSimple((CTaskSimple *)v16);
    *(_DWORD *)v16 = &off_66960C;
    *(_WORD *)(v16 + 8) = 256;
    *(_BYTE *)(v16 + 10) = 0;
    *(_DWORD *)(v16 + 12) = 33;
    *(_DWORD *)(v16 + 18) = 0;
    *(_DWORD *)(v16 + 28) = 0;
    *(_DWORD *)(v16 + 32) = 0;
    *(_BYTE *)(v16 + 36) = -1;
    *(_BYTE *)(v16 + 37) = -1;
    *(_BYTE *)(v16 + 38) = 0;
    *(_BYTE *)(v16 + 39) = 0;
    *(_DWORD *)(v16 + 24) = v17;
    if ( v17 )
      CEntity::RegisterReference(v17, (CEntity **)(v16 + 24));
    LOWORD(v19) = -5536;
    if ( (unsigned int)v18 < 0xEA60 )
      v19 = (unsigned int)v18;
    *(_WORD *)(v16 + 16) = v19;
    v20 = (CTaskManager *)(v9 + 4);
    v21 = 0;
    CTaskManager::SetTaskSecondary(v20, (CTask *)v16, 0);
    *((_DWORD *)this + 7) = 0;
    v11 = (_DWORD *)((char *)this + 28);
    goto LABEL_31;
  }
  v10 = CTaskManager::GetTaskSecondary((CTaskManager *)(v9 + 4), 0);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 20))(v10) != 1016 )
  {
    v4 = 0;
    v22 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
    (*(void (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v22 + 28))(v22, a2, 1, 0);
    return v4;
  }
  v11 = (_DWORD *)((char *)this + 28);
  if ( *((_DWORD *)this + 7) <= (unsigned int)CTimer::m_snTimeInMilliseconds )
  {
    v21 = 11;
    *v11 = 0;
    if ( *((_BYTE *)a2 + 1845) != 4 && !*((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 361) )
      v21 = 12;
    goto LABEL_31;
  }
  if ( (*(_BYTE *)(*((_DWORD *)this + 3) + 58) & 7) != 3 )
    goto LABEL_26;
  v12 = *((_DWORD *)this + 8);
  if ( v12 )
  {
LABEL_27:
    v23 = (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
    v24 = v12 > v23;
    v15 = v12 - v23;
    if ( !v24 )
      v15 = 0;
    goto LABEL_29;
  }
  if ( (float)((float)((float)((float)rand() * 4.6566e-10) * 100.0) + 0.0) >= (float)((float)(v6
                                                                                            * FIGHT_CONTROL_BLOCK_CHANCE)
                                                                                    / 40.0) )
  {
LABEL_26:
    v12 = *((_DWORD *)this + 8);
    if ( !v12 )
    {
      v21 = 0;
      goto LABEL_31;
    }
    goto LABEL_27;
  }
  v13 = FIGHT_CONTROL_BLOCK_MAXTIME;
  v14 = FIGHT_CONTROL_BLOCK_MINTIME;
  v15 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * (float)(v13 - v14)) + v14;
LABEL_29:
  v21 = 2;
  *((_DWORD *)this + 8) = v15;
LABEL_31:
  v25 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
  v26 = *(char *)(v25 + 36);
  v24 = v26 < 4;
  v27 = v26 - 4;
  if ( v24 )
    v27 = 0;
  *((_DWORD *)this + 5) = dword_9FD464[34 * v27];
  if ( !*v11 )
    *v11 = CTimer::m_snTimeInMilliseconds
         + (unsigned int)(float)((float)((float)((float)((float)rand() * 4.6566e-10) + 0.25)
                                       / (float)((float)((float)((float)(v6 * *((float *)this + 6)) / 40.0) * 0.7) + 0.3))
                               * (float)CTaskSimpleFightingControl::DEFAULT_FIGHT_ATTACK_PERIOD);
  if ( v25 )
  {
    if ( *(char *)(v25 + 36) <= 1 )
    {
      v28 = CTaskSimpleFightingControl::CalcMoveCommand(this, a2);
      if ( v28 > -1 )
        v21 = v28;
    }
    v29 = (CEntity *)*((_DWORD *)this + 3);
    v30 = *(CEntity **)(v25 + 24);
    *(_BYTE *)(v25 + 9) = 1;
    if ( v30 != v29 )
    {
      if ( v30 )
        CEntity::CleanUpOldReference(v30, (CEntity **)(v25 + 24));
      *(_DWORD *)(v25 + 24) = v29;
      if ( v29 )
        CEntity::RegisterReference(v29, (CEntity **)(v25 + 24));
    }
    if ( *(char *)(v25 + 38) < v21 )
      *(_BYTE *)(v25 + 38) = v21;
  }
  return 0;
}


// ============================================================

// Address: 0x4dba28
// Original: _ZN26CTaskSimpleFightingControl15CalcMoveCommandEP4CPed
// Demangled: CTaskSimpleFightingControl::CalcMoveCommand(CPed *)
int __fastcall CTaskSimpleFightingControl::CalcMoveCommand(CTaskSimpleFightingControl *this, CPed *a2)
{
  float v4; // r6
  __int16 v5; // r10
  int v6; // r0
  float *v7; // r11
  int v8; // r1
  float *v9; // r2
  float *v10; // r0
  float v11; // s16
  float v12; // s22
  float v13; // s18
  float v14; // s20
  float v15; // s0
  float v16; // s2
  int v17; // r0
  float v18; // s16
  char v19; // r0
  float v20; // s0
  CEntity *v21; // r2
  CPedGeometryAnalyser *v22; // r0
  int v23; // r0
  int v24; // r2
  int v25; // r1
  float *v26; // r0
  float *v27; // r2
  float v28; // s0
  float v29; // s2
  int v31; // r0
  float *v32[4]; // [sp+0h] [bp-80h] BYREF
  _DWORD v33[28]; // [sp+10h] [bp-70h] BYREF

  v4 = *((float *)this + 3);
  v5 = -1;
  if ( v4 == 0.0 )
    return v5;
  v6 = *((_DWORD *)a2 + 5);
  v7 = (float *)((char *)a2 + 4);
  v8 = *(_DWORD *)(LODWORD(v4) + 20);
  v9 = (float *)((char *)a2 + 4);
  if ( v6 )
    v9 = (float *)(v6 + 48);
  v10 = (float *)(v8 + 48);
  v11 = v9[2];
  if ( !v8 )
    v10 = (float *)(LODWORD(v4) + 4);
  v12 = *v10 - *v9;
  v13 = v10[2];
  v14 = v10[1] - v9[1];
  v15 = atan2f(-v12, v14) - *((float *)a2 + 343);
  if ( v15 <= 3.1416 )
  {
    if ( v15 >= -3.1416 )
      goto LABEL_11;
    v16 = 6.2832;
  }
  else
  {
    v16 = -6.2832;
  }
  v15 = v15 + v16;
LABEL_11:
  if ( fabsf(v15) > FIGHTING_MAX_HEADING_DIFF )
  {
    v5 = 0;
    *((_DWORD *)this + 7) += (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
    return v5;
  }
  v17 = *(_BYTE *)(LODWORD(v4) + 58) & 7;
  if ( v17 == 2 )
  {
    CPedGeometryAnalyser::ComputeEntityBoundingBoxPlanes(
      (CPedGeometryAnalyser *)LODWORD(v13),
      v4,
      (CEntity *)v33,
      (CVector *)v32,
      v32[0]);
    v21 = (CEntity *)*((_DWORD *)a2 + 5);
    v22 = (CPed *)((char *)a2 + 4);
    if ( v21 )
      v22 = (CEntity *)((char *)v21 + 48);
    v23 = CPedGeometryAnalyser::ComputeEntityHitSide(v22, *((const CVector **)this + 3), v21);
    v24 = 3 * v23;
    v25 = *((_DWORD *)a2 + 5);
    v26 = (float *)&v32[v23];
    v27 = (float *)&v33[v24];
    if ( v25 )
      v7 = (float *)(v25 + 48);
    v28 = *v26 + (float)((float)((float)(*v7 * *v27) + (float)(v7[1] * v27[1])) + (float)(v7[2] * v27[2]));
    v29 = 0.7;
  }
  else
  {
    v18 = sqrtf((float)((float)(v12 * v12) + (float)(v14 * v14)) + (float)((float)(v13 - v11) * (float)(v13 - v11)));
    if ( v17 == 3 )
    {
      v19 = rand();
      v20 = v18 - *((float *)this + 5);
      if ( v20 <= 0.1 )
      {
        v31 = v19 & 0xF;
        if ( v20 <= -0.1 )
        {
          if ( v18 >= 0.8 )
          {
            if ( (rand() & 0x3F) != 0 )
            {
              if ( (rand() & 0x3F) == 0 )
                return 10;
            }
            else
            {
              return 8;
            }
          }
          else if ( !v31 )
          {
            return 9;
          }
        }
        else if ( !v31 )
        {
          return 7;
        }
      }
      else
      {
        return 3;
      }
      return v5;
    }
    v29 = 0.3;
    v28 = v18 - *((float *)this + 5);
  }
  if ( v28 > v29 )
    return 3;
  return v5;
}


// ============================================================

// Address: 0x4e9458
// Original: _ZNK26CTaskSimpleFightingControl5CloneEv
// Demangled: CTaskSimpleFightingControl::Clone(void)
int __fastcall CTaskSimpleFightingControl::Clone(CTaskSimpleFightingControl *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  __int64 v5; // r8
  int result; // r0

  v3 = CTask::operator new((CTask *)&dword_24, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = *((_QWORD *)this + 2);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_BYTE *)(v3 + 8) = 0;
  *(_WORD *)(v3 + 10) = 0;
  *(_DWORD *)v3 = &off_669640;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  *(_QWORD *)(v3 + 16) = v5;
  *(_DWORD *)(v3 + 24) = 1065353216;
  *(_DWORD *)(v3 + 28) = 0;
  result = v3;
  *(_DWORD *)(v3 + 32) = 0;
  return result;
}


// ============================================================

// Address: 0x4e94b4
// Original: _ZNK26CTaskSimpleFightingControl11GetTaskTypeEv
// Demangled: CTaskSimpleFightingControl::GetTaskType(void)
int __fastcall CTaskSimpleFightingControl::GetTaskType(CTaskSimpleFightingControl *this)
{
  return 1019;
}


// ============================================================

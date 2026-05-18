
// Address: 0x18d4b0
// Original: j__ZN22CTaskComplexBeInCoupleC2EP4CPedhhhf
// Demangled: CTaskComplexBeInCouple::CTaskComplexBeInCouple(CPed *,uchar,uchar,uchar,float)
// attributes: thunk
void __fastcall CTaskComplexBeInCouple::CTaskComplexBeInCouple(
        CTaskComplexBeInCouple *this,
        CPed *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        float a6)
{
  _ZN22CTaskComplexBeInCoupleC2EP4CPedhhhf(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x536564
// Original: _ZN22CTaskComplexBeInCoupleC2EP4CPedhhhf
// Demangled: CTaskComplexBeInCouple::CTaskComplexBeInCouple(CPed *,uchar,uchar,uchar,float)
void __fastcall CTaskComplexBeInCouple::CTaskComplexBeInCouple(
        CTaskComplexBeInCouple *this,
        CPed *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        float a6)
{
  CTaskComplex::CTaskComplex(this);
  *((_BYTE *)this + 20) = a3;
  *((_BYTE *)this + 21) = a4;
  *((_BYTE *)this + 22) = a5;
  *((float *)this + 6) = a6;
  *((_BYTE *)this + 28) = 0;
  *(_DWORD *)this = &off_66CEFC;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x5365b8
// Original: _ZN22CTaskComplexBeInCoupleD2Ev
// Demangled: CTaskComplexBeInCouple::~CTaskComplexBeInCouple()
void __fastcall CTaskComplexBeInCouple::~CTaskComplexBeInCouple(CTaskComplexBeInCouple *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66CEFC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5365e4
// Original: _ZN22CTaskComplexBeInCoupleD0Ev
// Demangled: CTaskComplexBeInCouple::~CTaskComplexBeInCouple()
void __fastcall CTaskComplexBeInCouple::~CTaskComplexBeInCouple(CTaskComplexBeInCouple *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66CEFC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x536614
// Original: _ZN22CTaskComplexBeInCouple13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexBeInCouple::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexBeInCouple::MakeAbortable(CTaskComplexBeInCouple *this, CPed *a2, int a3, const CEvent *a4)
{
  bool v6; // zf
  int v8; // r0
  char v9; // r8

  v6 = a4 == 0;
  if ( a4 )
    v6 = *((_DWORD *)this + 4) == 0;
  if ( !v6 && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 40))(a4) == 1 )
  {
    v8 = *(_DWORD *)a4;
    v9 = *((_BYTE *)a4 + 9);
    *((_BYTE *)a4 + 9) = 0;
    if ( (*(int (__fastcall **)(const CEvent *))(v8 + 8))(a4) == 9
      || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 31
      || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 15 )
    {
      CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 104), a4, 0);
    }
    *((_BYTE *)a4 + 9) = v9;
  }
  if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, a2) )
    IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 0, a2, 250);
  if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 1, a2) )
    IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 1, a2, 250);
  return 1;
}


// ============================================================

// Address: 0x5366d0
// Original: _ZN22CTaskComplexBeInCouple10AbortArmIKEP4CPed
// Demangled: CTaskComplexBeInCouple::AbortArmIK(CPed *)
int __fastcall CTaskComplexBeInCouple::AbortArmIK(CTaskComplexBeInCouple *this, CPed *a2)
{
  int result; // r0

  if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, a2) )
    IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 0, a2, 250);
  result = IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 1, a2);
  if ( result )
    return sub_19A210((IKChainManager_c *)&g_ikChainMan, 1, a2, 250);
  return result;
}


// ============================================================

// Address: 0x536730
// Original: _ZN22CTaskComplexBeInCouple17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexBeInCouple::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexBeInCouple::CreateNextSubTask(CTaskComplexBeInCouple *this, CPed *a2)
{
  int v4; // r6
  unsigned int v5; // r1
  int v6; // r4
  unsigned __int16 v7; // r0
  CTaskComplex *v8; // r0
  CEntity *v9; // r6
  int v10; // r5

  if ( *((_DWORD *)this + 4) )
  {
    v4 = *((unsigned __int8 *)this + 20);
    if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, a2) )
      IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 0, a2, 250);
    if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 1, a2) )
      IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 1, a2, 250);
    if ( v4 )
    {
      v6 = CTask::operator new((CTask *)&dword_38, v5);
      v7 = rand();
      CTaskComplexWander::CTaskComplexWander(
        (CTaskComplexWander *)v6,
        4,
        (int)(float)((float)((float)v7 * 0.000015259) * 8.0),
        1,
        0.5);
      *(_WORD *)(v6 + 48) = 0;
      *(_DWORD *)v6 = &off_66C59C;
      *(_DWORD *)(v6 + 52) = 0;
      *(_DWORD *)(v6 + 40) = 0;
      *(_DWORD *)(v6 + 44) = 0;
    }
    else
    {
      v8 = (CTaskComplex *)CTask::operator new((CTask *)&dword_20, v5);
      v9 = (CEntity *)*((_DWORD *)this + 4);
      v6 = (int)v8;
      v10 = *((_DWORD *)this + 6);
      CTaskComplex::CTaskComplex(v8);
      *(_DWORD *)(v6 + 16) = v10;
      *(_DWORD *)(v6 + 20) = 0;
      *(_DWORD *)(v6 + 24) = 0;
      *(_DWORD *)(v6 + 28) = 0;
      *(_DWORD *)v6 = &off_66CE84;
      *(_DWORD *)(v6 + 12) = v9;
      CEntity::RegisterReference(v9, (CEntity **)(v6 + 12));
      *(_DWORD *)(v6 + 16) = v10;
    }
  }
  else
  {
    if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, a2) )
      IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 0, a2, 250);
    if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 1, a2) )
      IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 1, a2, 250);
    return 0;
  }
  return v6;
}


// ============================================================

// Address: 0x536898
// Original: _ZN22CTaskComplexBeInCouple18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexBeInCouple::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexBeInCouple::CreateFirstSubTask(CTaskComplexBeInCouple *this, CPed *a2)
{
  return (*(int (__fastcall **)(CTaskComplexBeInCouple *, CPed *))(*(_DWORD *)this + 40))(this, a2);
}


// ============================================================

// Address: 0x5368a0
// Original: _ZN22CTaskComplexBeInCouple14ControlSubTaskEP4CPed
// Demangled: CTaskComplexBeInCouple::ControlSubTask(CPed *)
int __fastcall CTaskComplexBeInCouple::ControlSubTask(CTaskComplexBeInCouple *this, CPedIntelligence **a2)
{
  CPed *v4; // r0
  int v5; // r6
  int TaskByType; // r0
  bool v7; // zf
  int v8; // r4
  int ActiveTaskByType; // r8
  int v11; // r9
  int v12; // r0
  CPedIntelligence *v13; // r1
  float *v14; // r6
  int v15; // r10
  float *v16; // r2
  float *v17; // r3
  float *v18; // r1
  float v19; // s16
  _DWORD *v20; // r0
  int v21; // r1
  int v22; // r2
  float *v23; // r0
  CPedIntelligence *v24; // r1
  int v25; // r3
  float *v26; // r1
  bool v27; // zf
  float v28; // s22
  float v29; // s24
  float v30; // s18
  unsigned int v31; // r1
  CPedIntelligence *v32; // r0
  float v33; // s2
  float v34; // s0
  unsigned __int16 v35; // r0
  unsigned __int16 v36; // r0
  CEntity *v37; // r5
  float v38[19]; // [sp+24h] [bp-4Ch] BYREF

  v4 = (CPed *)*((_DWORD *)this + 4);
  if ( !v4 || !CPed::IsAlive(v4) )
  {
    if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, (CPed *)a2) )
      IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 0, (CPed *)a2, 250);
    if ( !IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 1, (CPed *)a2) )
      return 0;
LABEL_18:
    IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 1, (CPed *)a2, 250);
    return 0;
  }
  v5 = *((unsigned __int8 *)this + 20);
  TaskByType = CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(*((_DWORD *)this + 4) + 1088), 1215);
  if ( v5 )
  {
    if ( TaskByType && !*(_BYTE *)(TaskByType + 20) )
      goto LABEL_14;
LABEL_15:
    if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, (CPed *)a2) )
      IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 0, (CPed *)a2, 250);
    if ( !IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 1, (CPed *)a2) )
      return 0;
    goto LABEL_18;
  }
  v7 = TaskByType == 0;
  if ( TaskByType )
    v7 = *(_BYTE *)(TaskByType + 20) == 0;
  if ( v7 )
    goto LABEL_15;
LABEL_14:
  if ( *(CPedIntelligence ***)(TaskByType + 16) != a2 )
    goto LABEL_15;
  ActiveTaskByType = CTaskManager::FindActiveTaskByType((CPedIntelligence *)((char *)a2[272] + 4), 1215);
  v11 = CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4), 1215);
  v12 = *((_DWORD *)this + 4);
  v13 = a2[5];
  v14 = (float *)(a2 + 1);
  v15 = 1;
  v16 = *(float **)(v12 + 20);
  v17 = (float *)(a2 + 1);
  if ( v13 )
    v17 = (float *)((char *)v13 + 48);
  v18 = v16 + 12;
  if ( !v16 )
    v18 = (float *)(v12 + 4);
  v19 = (float)((float)((float)(*v16 * *v17) + (float)(v16[1] * v17[1])) + (float)(v16[2] * v17[2]))
      - (float)((float)((float)(*v16 * *v18) + (float)(v16[1] * v18[1])) + (float)(v16[2] * v18[2]));
  if ( v19 < 0.0 )
    v15 = 2;
  if ( !*((_BYTE *)this + 20) )
  {
    v20 = (_DWORD *)CPedIntelligence::FindTaskByType(a2[272], 1208);
    if ( v20 )
    {
      v21 = 1065772646;
      if ( v19 < 0.0 )
        v21 = -1081711002;
      v20[5] = v21;
      v20[6] = 0;
      v20[7] = 0;
    }
  }
  v22 = *((_DWORD *)this + 4);
  v23 = (float *)(a2 + 1);
  v24 = a2[5];
  v25 = *(_DWORD *)(v22 + 20);
  if ( v24 )
    v23 = (float *)((char *)v24 + 48);
  v26 = (float *)(v25 + 48);
  if ( !v25 )
    v26 = (float *)(v22 + 4);
  v27 = v11 == 0;
  if ( v11 )
    v27 = ActiveTaskByType == 0;
  if ( v27
    || (v28 = *v26 - *v23,
        v29 = v26[1] - v23[1],
        v30 = (float)((float)(v28 * v28) + (float)(v29 * v29)) + 0.0,
        v30 > (float)(*((float *)this + 6) * *((float *)this + 6))) )
  {
    if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, (CPed *)a2) )
      IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 0, (CPed *)a2, 250);
    if ( !IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 1, (CPed *)a2) )
      return 0;
    goto LABEL_18;
  }
  if ( v30 <= 4.0 || !*((_BYTE *)this + 20) )
    goto LABEL_78;
  if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, (CPed *)a2) )
    IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 0, (CPed *)a2, 250);
  if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 1, (CPed *)a2) )
    IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 1, (CPed *)a2, 250);
  if ( !CPedIntelligence::FindTaskByType(a2[272], 1213) )
  {
    v8 = CTask::operator new((CTask *)&word_2C, v31);
    v37 = (CEntity *)*((_DWORD *)this + 4);
    CTaskComplex::CTaskComplex((CTaskComplex *)v8);
    *(_WORD *)(v8 + 36) = 0;
    *(_QWORD *)(v8 + 16) = 0x4E203F400000LL;
    *(_BYTE *)(v8 + 24) = 0;
    *(_DWORD *)(v8 + 28) = 0;
    *(_DWORD *)(v8 + 32) = 0;
    *(_DWORD *)v8 = &off_66CEC0;
    *(_DWORD *)(v8 + 12) = v37;
    CEntity::RegisterReference(v37, (CEntity **)(v8 + 12));
  }
  else
  {
LABEL_78:
    if ( *((_BYTE *)this + 21) )
    {
      v32 = a2[5];
      if ( v32 )
        v14 = (float *)((char *)v32 + 48);
      v33 = (float)(v29 * 0.5) + v14[1];
      v34 = (float)(v28 * 0.5) + *v14;
      v38[2] = v14[2] + 0.0;
      v38[1] = v33;
      v38[0] = v34;
      if ( v30 >= 2.25 )
      {
        if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, (CPed *)a2) )
          IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 0, (CPed *)a2, 250);
        if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 1, (CPed *)a2) )
          IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 1, (CPed *)a2, 250);
      }
      else
      {
        if ( v15 != *((unsigned __int8 *)this + 28) )
        {
          if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, (CPed *)a2) )
            IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 0, (CPed *)a2, 250);
          if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 1, (CPed *)a2) )
            IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 1, (CPed *)a2, 250);
        }
        if ( v19 >= 0.0 )
        {
          IKChainManager_c::PointArm(
            (int)&g_ikChainMan,
            (int)"CTaskComplexBeInCouple",
            1,
            (CPed *)a2,
            0,
            -1,
            (int)v38,
            0.5,
            250,
            30.0);
          *((_BYTE *)this + 28) = 1;
        }
        else
        {
          IKChainManager_c::PointArm(
            (int)&g_ikChainMan,
            (int)"CTaskComplexBeInCouple",
            0,
            (CPed *)a2,
            0,
            -1,
            (int)v38,
            0.5,
            250,
            30.0);
          *((_BYTE *)this + 28) = 2;
        }
      }
    }
    if ( *((_BYTE *)this + 22) )
    {
      if ( !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, (CPed *)a2)
        && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) >= 81 )
      {
        v35 = rand();
        IKChainManager_c::LookAt(
          (int)&g_ikChainMan,
          (int)"TaskBeInCouple",
          (CPed *)a2,
          *((_DWORD *)this + 4),
          (int)(float)((float)((float)v35 * 0.000015259) * 2000.0) + 2000,
          5,
          0,
          0,
          0.25,
          500,
          3,
          0);
      }
      if ( !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, *((CPed **)this + 4))
        && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) >= 81 )
      {
        v36 = rand();
        IKChainManager_c::LookAt(
          (int)&g_ikChainMan,
          (int)"TaskBeInCouple",
          *((CPed **)this + 4),
          (int)a2,
          (int)(float)((float)((float)v36 * 0.000015259) * 2000.0) + 2000,
          5,
          0,
          0,
          0.25,
          500,
          3,
          0);
      }
    }
    return *((_DWORD *)this + 2);
  }
  return v8;
}


// ============================================================

// Address: 0x536ec0
// Original: _ZN22CTaskComplexBeInCouple14GetPartnerSideEP4CPed
// Demangled: CTaskComplexBeInCouple::GetPartnerSide(CPed *)
int __fastcall CTaskComplexBeInCouple::GetPartnerSide(CTaskComplexBeInCouple *this, CPed *a2)
{
  int v2; // r12
  int v3; // r2
  float *v4; // r0
  float *v5; // r3
  float *v6; // r1
  bool v7; // zf
  float v8; // s6
  float v9; // s8
  float v10; // s0
  float v11; // s10
  int result; // r0

  v2 = *((_DWORD *)this + 4);
  v3 = *((_DWORD *)a2 + 5);
  v4 = *(float **)(v2 + 20);
  v5 = (float *)(v3 + 48);
  if ( !v3 )
    v5 = (float *)((char *)a2 + 4);
  v6 = v4 + 12;
  v7 = v4 == 0;
  v8 = *v4;
  v9 = v4[1];
  v10 = *v4 * *v5;
  v11 = v4[2];
  result = 1;
  if ( v7 )
    v6 = (float *)(v2 + 4);
  if ( (float)((float)((float)(v10 + (float)(v9 * v5[1])) + (float)(v11 * v5[2]))
             - (float)((float)((float)(v8 * *v6) + (float)(v9 * v6[1])) + (float)(v11 * v6[2]))) < 0.0 )
    return 2;
  return result;
}


// ============================================================

// Address: 0x537474
// Original: _ZNK22CTaskComplexBeInCouple5CloneEv
// Demangled: CTaskComplexBeInCouple::Clone(void)
int __fastcall CTaskComplexBeInCouple::Clone(CTaskComplexBeInCouple *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  int v5; // r8
  char v6; // r9

  v3 = CTask::operator new((CTask *)&dword_20, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  v5 = *((_DWORD *)this + 6);
  v6 = *((_BYTE *)this + 22);
  LOWORD(this) = *((_WORD *)this + 10);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_WORD *)(v3 + 20) = (_WORD)this;
  *(_BYTE *)(v3 + 22) = v6;
  *(_DWORD *)(v3 + 24) = v5;
  *(_BYTE *)(v3 + 28) = 0;
  *(_DWORD *)v3 = &off_66CEFC;
  *(_DWORD *)(v3 + 16) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

// Address: 0x5374cc
// Original: _ZNK22CTaskComplexBeInCouple11GetTaskTypeEv
// Demangled: CTaskComplexBeInCouple::GetTaskType(void)
int __fastcall CTaskComplexBeInCouple::GetTaskType(CTaskComplexBeInCouple *this)
{
  return 1215;
}


// ============================================================


// Address: 0x198ddc
// Original: j__ZN19CTaskComplexInWaterC2Ev
// Demangled: CTaskComplexInWater::CTaskComplexInWater(void)
// attributes: thunk
void __fastcall CTaskComplexInWater::CTaskComplexInWater(CTaskComplexInWater *this)
{
  _ZN19CTaskComplexInWaterC2Ev(this);
}


// ============================================================

// Address: 0x4f1340
// Original: _ZN19CTaskComplexInWaterC2Ev
// Demangled: CTaskComplexInWater::CTaskComplexInWater(void)
void __fastcall CTaskComplexInWater::CTaskComplexInWater(CTaskComplexInWater *this)
{
  _DWORD *v1; // r0

  CTaskComplex::CTaskComplex(this);
  *v1 = &off_66A664;
}


// ============================================================

// Address: 0x4f1358
// Original: _ZN19CTaskComplexInWaterD2Ev
// Demangled: CTaskComplexInWater::~CTaskComplexInWater()
// attributes: thunk
void __fastcall CTaskComplexInWater::~CTaskComplexInWater(CTaskComplexInWater *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f135c
// Original: _ZN19CTaskComplexInWaterD0Ev
// Demangled: CTaskComplexInWater::~CTaskComplexInWater()
void __fastcall CTaskComplexInWater::~CTaskComplexInWater(CTaskComplexInWater *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4f136c
// Original: _ZN19CTaskComplexInWater17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexInWater::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexInWater::CreateNextSubTask(CTaskComplexInWater *this, CPed *a2)
{
  int v4; // r6
  int v5; // r4
  int v6; // r2
  float *v7; // r0
  float v8; // s16
  float v9; // s18
  CTaskSimpleClimb *v10; // r0
  signed __int8 v11; // r5
  int v12; // r0

  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 1304 )
    return 0;
  v4 = *((_DWORD *)this + 2);
  v5 = 0;
  if ( *(_DWORD *)(v4 + 60) )
  {
    v6 = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 289) |= 0x200u;
    v7 = (float *)(v6 + 48);
    if ( !v6 )
      v7 = (float *)((char *)a2 + 4);
    v8 = CTaskSimpleClimb::ms_fMinForStretchGrab;
    v9 = *(float *)(v4 + 72) - v7[2];
    v10 = (CTaskSimpleClimb *)CTask::operator new(
                                (CTask *)&word_30,
                                (unsigned int)&CTaskSimpleClimb::ms_fMinForStretchGrab);
    v11 = 1;
    if ( v9 < v8 )
      v11 = 2;
    CTaskSimpleClimb::CTaskSimpleClimb(
      v10,
      *(CEntity **)(v4 + 60),
      (const CVector *)(v4 + 64),
      *(float *)(v4 + 76),
      *(_BYTE *)(v4 + 80),
      v11,
      0);
    return v12;
  }
  return v5;
}


// ============================================================

// Address: 0x4f1404
// Original: _ZN19CTaskComplexInWater18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexInWater::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexInWater::CreateFirstSubTask(CTaskComplexInWater *this, CPed *a2)
{
  const CPed *v3; // r1
  CTaskSimpleSwim *v4; // r0
  int v5; // r4
  const CVector *v6; // r1
  CPed *Leader; // r2
  int PedsGroup; // r0
  unsigned int v10; // r1
  CPedGroupMembership *v11; // r5
  char v12; // r1
  int TaskByType; // r0
  double v14; // d16
  unsigned int v15; // r1
  double v16; // [sp+8h] [bp-18h] BYREF
  int v17; // [sp+10h] [bp-10h]

  if ( CPed::IsPlayer(a2) || CPopulation::IsSunbather((CPopulation *)*((__int16 *)a2 + 19), (int)v3) == 1 )
  {
    v4 = (CTaskSimpleSwim *)CTask::operator new((CTask *)&dword_68, (unsigned int)v3);
    v5 = (int)v4;
    v6 = 0;
  }
  else
  {
    if ( (*((_BYTE *)a2 + 1162) & 0x10) != 0 )
    {
      v5 = CTask::operator new((CTask *)&word_28, (unsigned int)v3);
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      *(_DWORD *)(v5 + 12) = 53;
      *(_DWORD *)(v5 + 16) = 0;
      *(_DWORD *)(v5 + 20) = 140;
      *(_DWORD *)(v5 + 24) = 1082130432;
      *(_DWORD *)(v5 + 28) = 0;
      *(_DWORD *)(v5 + 36) = 0;
      v12 = *(_BYTE *)(v5 + 32);
      *(_DWORD *)v5 = &off_669DE8;
      *(_BYTE *)(v5 + 32) = v12 & 0xF8;
      return v5;
    }
    PedsGroup = CPedGroups::GetPedsGroup(a2, v3);
    if ( PedsGroup )
    {
      v11 = (CPedGroupMembership *)(PedsGroup + 8);
      if ( CPedGroupMembership::GetLeader((CPedGroupMembership *)(PedsGroup + 8)) )
      {
        if ( *(_DWORD *)(CPedGroupMembership::GetLeader(v11) + 1092) )
        {
          v5 = CTask::operator new((CTask *)&dword_68, v10);
          Leader = (CPed *)CPedGroupMembership::GetLeader(v11);
          v4 = (CTaskSimpleSwim *)v5;
          v6 = 0;
          goto LABEL_5;
        }
      }
    }
    if ( *((_BYTE *)a2 + 1096) != 2 || !CPedIntelligence::FindTaskByType(*((CPedIntelligence **)a2 + 272), 900) )
    {
      v5 = CTask::operator new((CTask *)&dword_20, v10);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v5, 0, 14, 1090519040, 0);
      return v5;
    }
    TaskByType = CPedIntelligence::FindTaskByType(*((CPedIntelligence **)a2 + 272), 900);
    v14 = *(double *)(TaskByType + 12);
    v17 = *(_DWORD *)(TaskByType + 20);
    v16 = v14;
    v4 = (CTaskSimpleSwim *)CTask::operator new((CTask *)&dword_68, v15);
    v5 = (int)v4;
    v6 = (const CVector *)&v16;
  }
  Leader = 0;
LABEL_5:
  CTaskSimpleSwim::CTaskSimpleSwim(v4, v6, Leader);
  return v5;
}


// ============================================================

// Address: 0x4f1508
// Original: _ZN19CTaskComplexInWater14ControlSubTaskEP4CPed
// Demangled: CTaskComplexInWater::ControlSubTask(CPed *)
int __fastcall CTaskComplexInWater::ControlSubTask(CTaskComplexInWater *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f4118
// Original: _ZNK19CTaskComplexInWater5CloneEv
// Demangled: CTaskComplexInWater::Clone(void)
_DWORD *__fastcall CTaskComplexInWater::Clone(CTaskComplexInWater *this, unsigned int a2)
{
  CTaskComplex *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], a2);
  CTaskComplex::CTaskComplex(v2);
  *result = &off_66A664;
  return result;
}


// ============================================================

// Address: 0x4f4138
// Original: _ZNK19CTaskComplexInWater11GetTaskTypeEv
// Demangled: CTaskComplexInWater::GetTaskType(void)
int __fastcall CTaskComplexInWater::GetTaskType(CTaskComplexInWater *this)
{
  return 268;
}


// ============================================================

// Address: 0x4f4140
// Original: _ZN19CTaskComplexInWater9SerializeEv
// Demangled: CTaskComplexInWater::Serialize(void)
int __fastcall CTaskComplexInWater::Serialize(CTaskComplexInWater *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexInWater *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexInWater *))(*(_DWORD *)this + 20))(this);
  if ( result != 268 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexInWater *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(268, v6);
  }
  return result;
}


// ============================================================

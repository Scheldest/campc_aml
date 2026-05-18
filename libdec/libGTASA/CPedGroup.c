
// Address: 0x18acf4
// Original: j__ZN9CPedGroup18GetClosestGroupPedEP4CPedPf
// Demangled: CPedGroup::GetClosestGroupPed(CPed *,float *)
// attributes: thunk
int __fastcall CPedGroup::GetClosestGroupPed(CPedGroup *this, CPed *a2, float *a3)
{
  return _ZN9CPedGroup18GetClosestGroupPedEP4CPedPf(this, a2, a3);
}


// ============================================================

// Address: 0x18ae10
// Original: j__ZN9CPedGroup7ProcessEv
// Demangled: CPedGroup::Process(void)
// attributes: thunk
int __fastcall CPedGroup::Process(CPedGroup *this)
{
  return _ZN9CPedGroup7ProcessEv(this);
}


// ============================================================

// Address: 0x19067c
// Original: j__ZN9CPedGroup28FindDistanceToFurthestMemberEv
// Demangled: CPedGroup::FindDistanceToFurthestMember(void)
// attributes: thunk
int __fastcall CPedGroup::FindDistanceToFurthestMember(CPedGroup *this)
{
  return _ZN9CPedGroup28FindDistanceToFurthestMemberEv(this);
}


// ============================================================

// Address: 0x1932dc
// Original: j__ZN9CPedGroup24PlayerGaveCommand_AttackEP4CPedS1_
// Demangled: CPedGroup::PlayerGaveCommand_Attack(CPed *,CPed *)
// attributes: thunk
int __fastcall CPedGroup::PlayerGaveCommand_Attack(CPedGroup *this, CPed *a2, CPed *a3)
{
  return _ZN9CPedGroup24PlayerGaveCommand_AttackEP4CPedS1_(this, a2, a3);
}


// ============================================================

// Address: 0x195fb0
// Original: j__ZN9CPedGroup27FindDistanceToNearestMemberEPP4CPed
// Demangled: CPedGroup::FindDistanceToNearestMember(CPed **)
// attributes: thunk
int __fastcall CPedGroup::FindDistanceToNearestMember(CPedGroup *this, CPed **a2)
{
  return _ZN9CPedGroup27FindDistanceToNearestMemberEPP4CPed(this, a2);
}


// ============================================================

// Address: 0x19d2dc
// Original: j__ZN9CPedGroup8TeleportERK7CVector
// Demangled: CPedGroup::Teleport(CVector const&)
// attributes: thunk
int __fastcall CPedGroup::Teleport(CPedGroup *this, const CVector *a2)
{
  return _ZN9CPedGroup8TeleportERK7CVector(this, a2);
}


// ============================================================

// Address: 0x19f034
// Original: j__ZNK9CPedGroup16IsAnyoneUsingCarERK8CVehicle
// Demangled: CPedGroup::IsAnyoneUsingCar(CVehicle const&)
// attributes: thunk
int __fastcall CPedGroup::IsAnyoneUsingCar(CPedGroup *this, const CVehicle *a2)
{
  return _ZNK9CPedGroup16IsAnyoneUsingCarERK8CVehicle(this, a2);
}


// ============================================================

// Address: 0x4b6cc4
// Original: _ZN9CPedGroupC2Ev
// Demangled: CPedGroup::CPedGroup(void)
void __fastcall CPedGroup::CPedGroup(CPedGroup *this)
{
  _QWORD *v2; // r0

  *((_DWORD *)this + 11) = 1114636288;
  v2 = (_QWORD *)((char *)this + 28);
  *v2 = 0LL;
  v2[1] = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *(_QWORD *)((char *)this + 20) = 0LL;
  CPedGroupIntelligence::CPedGroupIntelligence((CPedGroup *)((char *)this + 48));
  *((_BYTE *)this + 720) = 0;
  *(_DWORD *)this = 0;
  *((_BYTE *)this + 4) = 1;
  *((_DWORD *)this + 2) = this;
  *((_DWORD *)this + 12) = this;
}


// ============================================================

// Address: 0x4b6d02
// Original: _ZN9CPedGroupD2Ev
// Demangled: CPedGroup::~CPedGroup()
void __fastcall CPedGroup::~CPedGroup(CPedGroup *this)
{
  CPedGroupIntelligence::Flush((CPedGroup *)((char *)this + 48));
  CPedGroupMembership::Flush((CPedGroup *)((char *)this + 8));
}


// ============================================================

// Address: 0x4b6d1c
// Original: _ZN9CPedGroup7ProcessEv
// Demangled: CPedGroup::Process(void)
int __fastcall CPedGroup::Process(CGroupEventHandler **this)
{
  CPedGroupMembership::Process((CPedGroupMembership *)(this + 2));
  return CPedGroupIntelligence::Process(this + 12);
}


// ============================================================

// Address: 0x4b6d36
// Original: _ZN9CPedGroup5FlushEv
// Demangled: CPedGroup::Flush(void)
int __fastcall CPedGroup::Flush(CPedGroup *this)
{
  int result; // r0

  CPedGroupMembership::Flush((CPedGroup *)((char *)this + 8));
  CPedGroupIntelligence::Flush((CPedGroup *)((char *)this + 48));
  result = 0;
  *((_BYTE *)this + 720) = 0;
  return result;
}


// ============================================================

// Address: 0x4b6d54
// Original: _ZN9CPedGroup18RemoveAllFollowersEv
// Demangled: CPedGroup::RemoveAllFollowers(void)
int __fastcall CPedGroup::RemoveAllFollowers(CPedGroup *this)
{
  return CPedGroupMembership::RemoveAllFollowers((CPedGroup *)((char *)this + 8), 0);
}


// ============================================================

// Address: 0x4b6d5c
// Original: _ZN9CPedGroup8TeleportERK7CVector
// Demangled: CPedGroup::Teleport(CVector const&)
int *__fastcall CPedGroup::Teleport(CPedGroup *this, const CVector *a2)
{
  unsigned __int8 *v4; // r6
  int v5; // r0
  int *result; // r0
  int i; // r5
  const CPed *v8; // r2
  CCarEnterExit *v9; // r11
  int v10; // r0
  int v11; // r6
  bool v12; // zf
  char *v13; // r9
  int v14; // r6
  float *v15; // r4
  CPed *v16; // r5
  _DWORD *v17; // r1
  int v18; // r0
  bool v19; // zf
  _BYTE v20[64]; // [sp+8h] [bp-40h] BYREF

  v4 = (unsigned __int8 *)*((_DWORD *)this + 10);
  if ( v4 && CPed::IsAlive(*((CPed **)this + 10)) == 1 )
    (*(void (__fastcall **)(unsigned __int8 *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 60))(
      v4,
      *(_DWORD *)a2,
      *((_DWORD *)a2 + 1),
      *((_DWORD *)a2 + 2),
      0);
  v5 = *((_DWORD *)this + 13);
  if ( !v5
    || (result = (int *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v5 + 16) + 8))(*(_DWORD *)(v5 + 16)),
        result != (int *)((char *)&dword_4C + 1)) )
  {
    if ( v4 && !(v4[1157] << 31) )
    {
      for ( i = 0; i != 7; ++i )
      {
        v11 = *((_DWORD *)this + i + 3);
        if ( v11 )
        {
          v12 = *(unsigned __int8 *)(v11 + 1157) << 31 == 0;
          if ( *(unsigned __int8 *)(v11 + 1157) << 31 )
            v12 = *(_BYTE *)(v11 + 1096) == 2;
          if ( !v12 && CPed::IsAlive(*((CPed **)this + i + 3)) == 1 )
          {
            v9 = *(CCarEnterExit **)(v11 + 1424);
            v10 = CCarEnterExit::ComputeTargetDoorToExit(v9, (const CVehicle *)v11, v8);
            CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut((CTaskSimpleCarSetPedOut *)v20, v9, v10, 0);
            v20[17] = 1;
            CTaskSimpleCarSetPedOut::ProcessPed((CTaskSimpleCarSetPedOut *)v20, (CPed *)v11);
            CTaskSimpleCarSetPedOut::~CTaskSimpleCarSetPedOut((CTaskSimpleCarSetPedOut *)v20);
          }
        }
      }
    }
    v13 = (char *)this + 12;
    v14 = 0;
    result = CTaskComplexFollowLeaderInFormation::ms_offsets;
    v15 = (float *)&dword_9FF894;
    do
    {
      v16 = *(CPed **)&v13[4 * v14];
      if ( v16 )
      {
        result = (int *)CPed::IsAlive(*(CPed **)&v13[4 * v14]);
        if ( result == (int *)((char *)&stderr + 1) )
        {
          (*(void (__fastcall **)(CPed *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v16 + 60))(
            v16,
            *(v15 - 1) + *(float *)a2,
            *v15 + *((float *)a2 + 1),
            *((float *)a2 + 2) + 0.0,
            0);
          CPed::PositionAnyPedOutOfCollision(v16);
          v17 = (_DWORD *)*((_DWORD *)v16 + 272);
          v18 = v17[1];
          if ( !v18 )
          {
            result = (int *)v17[2];
            v19 = result == 0;
            if ( !result )
            {
              result = (int *)v17[3];
              v19 = result == 0;
            }
            if ( v19 )
              goto LABEL_27;
            v18 = v17[2];
            if ( !v18 )
              v18 = v17[3];
          }
          result = (int *)(*(int (__fastcall **)(int, CPed *, _DWORD, _DWORD))(*(_DWORD *)v18 + 28))(v18, v16, 0, 0);
        }
      }
LABEL_27:
      ++v14;
      v15 += 2;
    }
    while ( v14 != 7 );
  }
  return result;
}


// ============================================================

// Address: 0x4b6ebc
// Original: _ZN9CPedGroup24PlayerGaveCommand_AttackEP4CPedS1_
// Demangled: CPedGroup::PlayerGaveCommand_Attack(CPed *,CPed *)
void __fastcall CPedGroup::PlayerGaveCommand_Attack(CPedGroup *this, CPed *a2, CPed *a3)
{
  CEventPlayerCommandToGroup *v6; // r4
  int v7; // r0
  int v8; // r0
  unsigned __int16 v9; // r1
  _BYTE v10[44]; // [sp+Ch] [bp-2Ch] BYREF

  v6 = (CEventPlayerCommandToGroup *)CEvent::operator new((CEvent *)&off_18, (unsigned int)a2);
  CEventPlayerCommandToGroup::CEventPlayerCommandToGroup(v6, 0, a3);
  *(_DWORD *)v6 = &off_6671F8;
  CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)v10, a2, v6);
  v7 = CPedGroupIntelligence::AddEvent((CPedGroup *)((char *)this + 48), (CEvent *)v10);
  if ( a3 )
  {
    if ( v7 == 1 )
    {
      v8 = *((_DWORD *)a3 + 359);
      if ( v8 != 8 )
      {
        if ( (unsigned int)(v8 - 7) <= 9 )
          v9 = 147;
        else
          v9 = 148;
        CPed::Say(a2, v9, 0, 1.0, 0, 0, 0);
      }
    }
  }
  CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)v10);
}


// ============================================================

// Address: 0x4b6f3c
// Original: _ZN9CPedGroup24PlayerGaveCommand_GatherEP4CPed
// Demangled: CPedGroup::PlayerGaveCommand_Gather(CPed *)
int __fastcall CPedGroup::PlayerGaveCommand_Gather(CPedGroup *this, CPedIntelligence **a2)
{
  int v4; // r0
  CPedList *v5; // r1
  CPed *v6; // r2
  bool v7; // zf
  CPedList *v8; // r1
  CVector *v9; // r2
  int result; // r0
  int v11; // r8
  CPed *v12; // r4
  CPedTaskPair *v13; // [sp+Ch] [bp-DCh]
  _DWORD v14[2]; // [sp+10h] [bp-D8h] BYREF
  _BYTE v15[44]; // [sp+18h] [bp-D0h] BYREF
  _DWORD v16[31]; // [sp+44h] [bp-A4h] BYREF
  _BYTE v17[40]; // [sp+C0h] [bp-28h] BYREF

  CPedList::Empty((CPedList *)v16);
  CPedList::BuildListFromGroup_NotInCar_NoLeader((CPedList *)v16, (CPedGroup *)((char *)this + 8));
  v4 = CPedIntelligence::IsInACarOrEnteringOne(a2[272]);
  v7 = v4 == 0;
  if ( v4 )
  {
    v5 = a2[356];
    v7 = v5 == 0;
  }
  if ( v7 )
    CFormation::GenerateGatherDestinations((CFormation *)v16, (CPedList *)a2, v6);
  else
    CFormation::GenerateGatherDestinations_AroundCar((CFormation *)v16, v5, v6);
  CFormation::DistributeDestinations((CFormation *)v16, v8);
  result = v16[0];
  if ( v16[0] >= 1 )
  {
    v13 = (CPedGroup *)((char *)this + 60);
    v11 = 0;
    do
    {
      v12 = (CPed *)v16[v11 + 1];
      if ( CFormation::ReturnDestinationForPed(v12, (CPed *)v17, v9) == 1 )
      {
        CTaskSimpleGoToPoint::CTaskSimpleGoToPoint((CTaskSimpleGoToPoint *)v15, 7, (const CVector *)v17, 2.0, 1, 0);
        CTaskSimple::CTaskSimple((CTaskSimple *)v14);
        v14[0] = &off_669000;
        CPedGroupIntelligence::SetTask((CPedGroupIntelligence *)0xFFFFFFFF, v12, (const CTask *)v15, v13, -1, 0);
        CTask::~CTask((CTask *)v14);
        CTaskSimpleGoToPoint::~CTaskSimpleGoToPoint((CTaskSimpleGoToPoint *)v15);
      }
      result = v16[0];
      ++v11;
    }
    while ( v11 < v16[0] );
  }
  return result;
}


// ============================================================

// Address: 0x4b7014
// Original: _ZN9CPedGroup18GetClosestGroupPedEP4CPedPf
// Demangled: CPedGroup::GetClosestGroupPed(CPed *,float *)
int __fastcall CPedGroup::GetClosestGroupPed(CPedGroup *this, CPed *a2, float *a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d1
  char *v5; // r12
  int result; // r0
  int i; // r3
  CPed *v8; // lr
  bool v9; // zf
  int v10; // r4
  int v11; // r5
  char *v12; // r6
  char *v13; // r4
  float32x2_t v14; // d16
  unsigned __int64 v15; // d2
  bool v16; // nf

  v5 = (char *)this + 12;
  v3.n64_u32[0] = 1287568416;
  result = 0;
  for ( i = 0; i != 8; ++i )
  {
    v8 = *(CPed **)&v5[4 * i];
    v9 = v8 == 0;
    if ( v8 )
      v9 = v8 == a2;
    if ( !v9 )
    {
      v10 = *((_DWORD *)v8 + 5);
      v11 = *((_DWORD *)a2 + 5);
      v12 = (char *)(v10 + 48);
      if ( !v10 )
        v12 = (char *)v8 + 4;
      v13 = (char *)(v11 + 48);
      if ( !v11 )
        v13 = (char *)a2 + 4;
      v14.n64_u64[0] = vsub_f32(*(float32x2_t *)(v13 + 4), *(float32x2_t *)(v12 + 4)).n64_u64[0];
      v15 = vmul_f32(v14, v14).n64_u64[0];
      v4.n64_f32[0] = (float)((float)((float)(*(float *)v13 - *(float *)v12) * (float)(*(float *)v13 - *(float *)v12))
                            + *(float *)&v15)
                    + *((float *)&v15 + 1);
      v16 = v4.n64_f32[0] < v3.n64_f32[0];
      v3.n64_u64[0] = vmin_f32(v4, v3).n64_u64[0];
      if ( v16 )
        result = *(_DWORD *)&v5[4 * i];
    }
  }
  if ( a3 )
    *a3 = v3.n64_f32[0];
  return result;
}


// ============================================================

// Address: 0x4b70a8
// Original: _ZNK9CPedGroup16IsAnyoneUsingCarERK8CVehicle
// Demangled: CPedGroup::IsAnyoneUsingCar(CVehicle const&)
int __fastcall CPedGroup::IsAnyoneUsingCar(CPedGroup *this, const CVehicle *a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r5
  const CVehicle *v7; // r0
  int TaskByType; // r0
  int v9; // r0

  v4 = 3;
  while ( 1 )
  {
    v5 = v4;
    v6 = *((_DWORD *)this + v4);
    if ( v6 )
    {
      v7 = *(const CVehicle **)(v6 + 1424);
      if ( v7 )
      {
        if ( v7 == a2 && (*(_DWORD *)(v6 + 1156) & 0x100) != 0 )
          break;
      }
      TaskByType = CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(v6 + 1088), 701);
      if ( TaskByType )
      {
        if ( *(const CVehicle **)(TaskByType + 12) == a2 )
          break;
      }
      v9 = CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(v6 + 1088), 700);
      if ( v9 )
      {
        if ( *(const CVehicle **)(v9 + 12) == a2 )
          break;
      }
    }
    v4 = v5 + 1;
    if ( v5 - 3 >= 7 )
      return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x4b7114
// Original: _ZN9CPedGroup28FindDistanceToFurthestMemberEv
// Demangled: CPedGroup::FindDistanceToFurthestMember(void)
unsigned __int32 __fastcall CPedGroup::FindDistanceToFurthestMember(CPedGroup *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  int v3; // lr
  char *v4; // r12
  int i; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r4
  int v10; // r0
  float32x2_t v11; // d16
  unsigned __int64 v12; // d2

  v3 = *((_DWORD *)this + 10);
  v1.n64_u32[0] = 0;
  if ( v3 )
  {
    v4 = (char *)this + 12;
    for ( i = 0; i != 7; ++i )
    {
      v6 = *(_DWORD *)&v4[4 * i];
      if ( v6 )
      {
        v7 = *(_DWORD *)(v3 + 20);
        v8 = *(_DWORD *)(v6 + 20);
        v9 = v7 + 48;
        if ( !v7 )
          v9 = v3 + 4;
        v10 = v8 + 48;
        if ( !v8 )
          v10 = v6 + 4;
        v11.n64_u64[0] = vsub_f32(*(float32x2_t *)(v10 + 4), *(float32x2_t *)(v9 + 4)).n64_u64[0];
        v12 = vmul_f32(v11, v11).n64_u64[0];
        v2.n64_f32[0] = sqrtf(
                          (float)((float)((float)(*(float *)v10 - *(float *)v9) * (float)(*(float *)v10 - *(float *)v9))
                                + *(float *)&v12)
                        + *((float *)&v12 + 1));
        v1.n64_u64[0] = vmax_f32(v1, v2).n64_u64[0];
      }
    }
  }
  return v1.n64_u32[0];
}


// ============================================================

// Address: 0x4b7190
// Original: _ZN9CPedGroup27FindDistanceToNearestMemberEPP4CPed
// Demangled: CPedGroup::FindDistanceToNearestMember(CPed **)
unsigned __int32 __fastcall CPedGroup::FindDistanceToNearestMember(CPedGroup *this, CPed **a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  int v4; // lr
  char *v5; // r12
  int i; // r3
  CPed *v7; // r0
  int v8; // r2
  int v9; // r4
  int v10; // r5
  _DWORD *v11; // r2
  float32x2_t v12; // d16
  float v13; // s4
  float32x2_t v14; // d17
  float32x2_t v15; // d16
  unsigned __int64 v16; // d2

  v4 = *((_DWORD *)this + 10);
  v2.n64_u32[0] = 1343554297;
  if ( v4 )
  {
    v5 = (char *)this + 12;
    for ( i = 0; i != 7; ++i )
    {
      v7 = *(CPed **)&v5[4 * i];
      if ( v7 )
      {
        v8 = *(_DWORD *)(v4 + 20);
        v9 = *((_DWORD *)v7 + 5);
        v10 = v8 + 48;
        if ( !v8 )
          v10 = v4 + 4;
        v11 = (_DWORD *)(v9 + 48);
        v3.n64_u32[0] = *(_DWORD *)v10;
        if ( !v9 )
          v11 = (_DWORD *)((char *)v7 + 4);
        v12.n64_u64[0] = *(unsigned __int64 *)(v10 + 4);
        v13 = *(float *)v11;
        v14.n64_u64[0] = *(unsigned __int64 *)(v11 + 1);
        if ( a2 )
          *a2 = v7;
        v3.n64_f32[0] = v13 - v3.n64_f32[0];
        v15.n64_u64[0] = vsub_f32(v14, v12).n64_u64[0];
        v16 = vmul_f32(v15, v15).n64_u64[0];
        v3.n64_f32[0] = sqrtf((float)((float)(v3.n64_f32[0] * v3.n64_f32[0]) + *(float *)&v16) + *((float *)&v16 + 1));
        v2.n64_u64[0] = vmin_f32(v2, v3).n64_u64[0];
      }
    }
  }
  return v2.n64_u32[0];
}


// ============================================================

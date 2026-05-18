
// Address: 0x18aca0
// Original: j__ZN26CTaskComplexWanderStandard15LookForSexyCarsEP4CPed
// Demangled: CTaskComplexWanderStandard::LookForSexyCars(CPed *)
// attributes: thunk
int __fastcall CTaskComplexWanderStandard::LookForSexyCars(CTaskComplexWanderStandard *this, CPed *a2)
{
  return _ZN26CTaskComplexWanderStandard15LookForSexyCarsEP4CPed(this, a2);
}


// ============================================================

// Address: 0x199ec0
// Original: j__ZN26CTaskComplexWanderStandard19LookForChatPartnersEP4CPed
// Demangled: CTaskComplexWanderStandard::LookForChatPartners(CPed *)
// attributes: thunk
int __fastcall CTaskComplexWanderStandard::LookForChatPartners(CTaskComplexWanderStandard *this, CPed *a2)
{
  return _ZN26CTaskComplexWanderStandard19LookForChatPartnersEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19a844
// Original: j__ZN26CTaskComplexWanderStandard15SetNextScanTimeEi
// Demangled: CTaskComplexWanderStandard::SetNextScanTime(int)
// attributes: thunk
int __fastcall CTaskComplexWanderStandard::SetNextScanTime(CTaskComplexWanderStandard *this, int a2)
{
  return _ZN26CTaskComplexWanderStandard15SetNextScanTimeEi(this, a2);
}


// ============================================================

// Address: 0x19deb4
// Original: j__ZN26CTaskComplexWanderStandard18LookForGangMembersEP4CPed
// Demangled: CTaskComplexWanderStandard::LookForGangMembers(CPed *)
// attributes: thunk
int __fastcall CTaskComplexWanderStandard::LookForGangMembers(CTaskComplexWanderStandard *this, CPed *a2)
{
  return _ZN26CTaskComplexWanderStandard18LookForGangMembersEP4CPed(this, a2);
}


// ============================================================

// Address: 0x523174
// Original: _ZN26CTaskComplexWanderStandard12ScanForStuffEP4CPed
// Demangled: CTaskComplexWanderStandard::ScanForStuff(CPed *)
int __fastcall CTaskComplexWanderStandard::ScanForStuff(__int64 this)
{
  __int64 v1; // kr00_8

  v1 = this;
  LODWORD(this) = CTimer::m_snTimeInMilliseconds;
  if ( !*(_BYTE *)(v1 + 48) )
  {
    HIDWORD(this) = 50;
    *(_QWORD *)(v1 + 40) = this;
    *(_BYTE *)(v1 + 48) = 1;
  }
  if ( (unsigned int)this >= *(_DWORD *)(v1 + 52) )
  {
    if ( *(_BYTE *)(v1 + 49) )
    {
      *(_BYTE *)(v1 + 49) = 0;
      HIDWORD(this) = this;
      *(_DWORD *)(v1 + 40) = this;
    }
    else
    {
      HIDWORD(this) = *(_DWORD *)(v1 + 40);
    }
    if ( HIDWORD(this) + *(_DWORD *)(v1 + 44) <= (unsigned int)this )
    {
      HIDWORD(this) = 50;
      *(_QWORD *)(v1 + 40) = this;
      *(_BYTE *)(v1 + 48) = 1;
      LODWORD(this) = CTaskComplexWanderStandard::LookForGangMembers(
                        (CTaskComplexWanderStandard *)v1,
                        (CPed *)HIDWORD(v1));
      if ( !(_DWORD)this )
      {
        LODWORD(this) = CTaskComplexWanderStandard::LookForChatPartners(
                          (CTaskComplexWanderStandard *)v1,
                          (CPed *)HIDWORD(v1));
        if ( !(_DWORD)this )
          LODWORD(this) = CTaskComplexWanderStandard::LookForSexyCars(
                            (CTaskComplexWanderStandard *)v1,
                            (CPed *)HIDWORD(v1));
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x5231ec
// Original: _ZN26CTaskComplexWanderStandard18LookForGangMembersEP4CPed
// Demangled: CTaskComplexWanderStandard::LookForGangMembers(CPed *)
int __fastcall CTaskComplexWanderStandard::LookForGangMembers(CTaskComplexWanderStandard *this, float32x2_t **a2)
{
  float32x2_t *v4; // r0
  float32x2_t *v5; // r5
  float32x2_t *v6; // r8
  int v7; // r0
  float v8; // s18
  int v9; // r4
  _DWORD *v10; // r6
  const CPed *v11; // r1
  float32x2_t v12; // d16
  float32x2_t *v13; // r0
  float32x2_t v14; // d1
  float v15; // s0
  unsigned __int64 v16; // d2
  int PedsGroup; // r0
  int ActiveTask; // r0
  int v20; // r6
  int v21; // r8
  int v22; // r6
  float32x2_t v23; // [sp+0h] [bp-48h] BYREF
  float v24; // [sp+8h] [bp-40h]

  if ( CPedGroups::GetPedsGroup((CPedGroups *)a2, (const CPed *)a2) )
    return 0;
  CPathFind::TakeWidthIntoAccountForWandering();
  v4 = a2[5];
  v5 = a2[272];
  v6 = v4 + 6;
  if ( !v4 )
    v6 = (float32x2_t *)(a2 + 1);
  v7 = 76;
  v8 = v24 + 1.0;
  while ( 1 )
  {
    v9 = v7;
    v10 = (_DWORD *)v5->n64_u32[v7];
    if ( v10 )
    {
      v11 = (const CPed *)v10[5];
      v12.n64_u64[0] = vsub_f32((float32x2_t)v6->n64_u64[0], v23).n64_u64[0];
      v13 = (float32x2_t *)((char *)v11 + 48);
      if ( !v11 )
        v13 = (float32x2_t *)(v10 + 1);
      v14.n64_u64[0] = vsub_f32((float32x2_t)v13->n64_u64[0], v23).n64_u64[0];
      v15 = v13[1].n64_f32[0] - v8;
      v16 = vmul_f32(v12, v14).n64_u64[0];
      if ( (float)((float)(*(float *)&v16 + *((float *)&v16 + 1)) + (float)((float)(v6[1].n64_f32[0] - v8) * v15)) > 0.0
        && (float)((float)((float)(v14.n64_f32[0] * v14.n64_f32[0]) + (float)(v14.n64_f32[1] * v14.n64_f32[1]))
                 + (float)(v15 * v15)) < 25.0 )
      {
        PedsGroup = CPedGroups::GetPedsGroup((CPedGroups *)v10, v11);
        if ( PedsGroup )
        {
          if ( CPedGroupMembership::CountMembersExcludingLeader((CPedGroupMembership *)(PedsGroup + 8)) >= 1 )
            break;
        }
      }
    }
    v7 = v9 + 1;
    if ( v9 - 76 >= 15 )
      return 0;
  }
  CEventAcquaintancePed::CEventAcquaintancePed((CEventAcquaintancePed *)&v23, (CPed *)v10);
  HIWORD(v24) = 940;
  v23.n64_u32[0] = (unsigned __int32)&off_669188;
  CEventGroup::Add((CEventGroup *)&a2[272][13], (CEvent *)&v23, 0);
  ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)&a2[272]->n64_u8[4]);
  v20 = ActiveTask;
  if ( ActiveTask )
  {
    v21 = (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask);
    if ( v21 == (*(int (__fastcall **)(CTaskComplexWanderStandard *))(*(_DWORD *)this + 20))(this) )
    {
      v22 = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 52))(v20);
      if ( v22 == (*(int (__fastcall **)(CTaskComplexWanderStandard *))(*(_DWORD *)this + 52))(this) )
        *(_DWORD *)(CTaskManager::GetActiveTask((CTaskManager *)&a2[272]->n64_u8[4]) + 52) = CTimer::m_snTimeInMilliseconds
                                                                                           + 100000;
    }
  }
  CEventAcquaintancePed::~CEventAcquaintancePed((CEventAcquaintancePed *)&v23);
  return 1;
}


// ============================================================

// Address: 0x52337c
// Original: _ZN26CTaskComplexWanderStandard19LookForChatPartnersEP4CPed
// Demangled: CTaskComplexWanderStandard::LookForChatPartners(CPed *)
int __fastcall CTaskComplexWanderStandard::LookForChatPartners(CTaskComplexWanderStandard *this, CPed *a2)
{
  int v4; // r1
  float *v5; // r0
  bool v6; // zf
  int v7; // r4
  int v8; // r0
  int v9; // r9
  float *v10; // r1
  int v11; // r0
  int v12; // r10
  int v13; // r6
  int ActiveTask; // r0
  int v15; // r5
  int v16; // r0
  bool v17; // zf
  int v18; // r0
  bool v19; // zf
  const CPed *v20; // r2
  float *v21; // r0
  float *v22; // r1
  float v23; // s0
  float v24; // s2
  float v25; // s4
  int v27; // r0
  int v28; // r4
  int v29; // r5
  int v30; // r4
  int v31; // r0
  int v32; // r4
  int v33; // r5
  int v34; // r4
  bool v35; // [sp+14h] [bp-54h]
  float *v36; // [sp+18h] [bp-50h]
  CTaskComplexWanderStandard *v37; // [sp+1Ch] [bp-4Ch]
  _BYTE v38[16]; // [sp+20h] [bp-48h] BYREF
  _BYTE v39[56]; // [sp+30h] [bp-38h] BYREF

  if ( !SurfaceInfos_c::IsPavement((SurfaceInfos_c *)&g_surfaceInfos, *((unsigned __int8 *)a2 + 190))
    || *((int *)this + 3) > 4 )
  {
    return 0;
  }
  v4 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  v5 = *(float **)(v4 + 1424);
  v6 = v5 == 0;
  if ( v5 )
    v6 = (*(_DWORD *)(v4 + 1156) & 0x100) == 0;
  if ( !v6 && (float)((float)((float)(v5[18] * v5[18]) + (float)(v5[19] * v5[19])) + (float)(v5[20] * v5[20])) > 0.04 )
    return 0;
  v7 = 0;
  if ( !CStreaming::IsVeryBusy((CStreaming *)v5) && !CGameLogic::LaRiotsActiveHere(0) )
  {
    v37 = this;
    v8 = *((_DWORD *)a2 + 5);
    v9 = *((_DWORD *)a2 + 272);
    v10 = (float *)(v8 + 48);
    if ( !v8 )
      v10 = (float *)((char *)a2 + 4);
    v36 = v10;
    v11 = 76;
    while ( 1 )
    {
      v12 = v11;
      v13 = *(_DWORD *)(v9 + 4 * v11);
      if ( v13 )
      {
        if ( SurfaceInfos_c::IsPavement((SurfaceInfos_c *)&g_surfaceInfos, *(unsigned __int8 *)(v13 + 190)) )
        {
          if ( CTaskManager::GetActiveTask((CTaskManager *)(*(_DWORD *)(v13 + 1088) + 4)) )
          {
            ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*(_DWORD *)(v13 + 1088) + 4));
            v15 = (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask);
            if ( v15 == (*(int (__fastcall **)(CTaskComplexWanderStandard *))(*(_DWORD *)v37 + 20))(v37)
              && !CPedIntelligence::FindTaskByType(*((CPedIntelligence **)a2 + 272), 1204)
              && !CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(v13 + 1088), 1204)
              && !CEventGroup::GetEventOfType((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), 19)
              && !CEventGroup::GetEventOfType((CEventGroup *)(*(_DWORD *)(v13 + 1088) + 104), 19)
              && !CPedIntelligence::FindTaskByType(*((CPedIntelligence **)a2 + 272), 1215)
              && !CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(v13 + 1088), 1215) )
            {
              v16 = *((_DWORD *)a2 + 359);
              v17 = v16 == 20;
              if ( v16 != 20 )
                v17 = v16 == 6;
              if ( !v17 )
              {
                v18 = *(_DWORD *)(v13 + 1436);
                v19 = v18 == 6;
                if ( v18 != 6 )
                  v19 = v18 == 20;
                if ( !v19
                  && !CPed::IsPlayer(a2)
                  && !CPed::IsPlayer((CPed *)v13)
                  && (unsigned int)(*((_DWORD *)a2 + 359) - 7) >= 0xA
                  && (unsigned int)(*(_DWORD *)(v13 + 1436) - 7) >= 0xA
                  && CPedIntelligence::AreFriends(a2, (const CPed *)v13, v20) == 1 )
                {
                  v21 = *(float **)(v13 + 20);
                  v22 = v21 + 12;
                  if ( !v21 )
                    v22 = (float *)(v13 + 4);
                  v23 = *v22 - *v36;
                  v24 = v22[1] - v36[1];
                  v25 = v22[2] - v36[2];
                  if ( (float)((float)((float)(v23 * v23) + (float)(v24 * v24)) + (float)(v25 * v25)) < 100.0
                    && (float)((float)((float)(v23 * *(float *)(*((_DWORD *)a2 + 5) + 16))
                                     + (float)(v24 * *(float *)(*((_DWORD *)a2 + 5) + 20)))
                             + (float)(v25 * *(float *)(*((_DWORD *)a2 + 5) + 24))) > 0.0
                    && (float)((float)((float)(v23 * v21[4]) + (float)(v24 * v21[5])) + (float)(v25 * v21[6])) < 0.0
                    && CWorld::GetIsLineOfSightClear(
                         (CWorld *)v36,
                         (const CVector *)v22,
                         (const CVector *)((char *)&stderr + 1),
                         0,
                         0,
                         1,
                         0,
                         0,
                         0,
                         v35) == 1 )
                  {
                    break;
                  }
                }
              }
            }
          }
        }
      }
      v11 = v12 + 1;
      if ( v12 - 76 >= 15 )
        return 0;
    }
    CEventChatPartner::CEventChatPartner((CEventChatPartner *)v39, 1, (CPed *)v13);
    CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v39, 0);
    CEventChatPartner::CEventChatPartner((CEventChatPartner *)v38, 0, a2);
    CEventGroup::Add((CEventGroup *)(*(_DWORD *)(v13 + 1088) + 104), (CEvent *)v38, 0);
    v27 = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
    v28 = v27;
    if ( v27 )
    {
      v29 = (*(int (__fastcall **)(int))(*(_DWORD *)v27 + 20))(v27);
      if ( v29 == (*(int (__fastcall **)(CTaskComplexWanderStandard *))(*(_DWORD *)v37 + 20))(v37) )
      {
        v30 = (*(int (__fastcall **)(int))(*(_DWORD *)v28 + 52))(v28);
        if ( v30 == (*(int (__fastcall **)(CTaskComplexWanderStandard *))(*(_DWORD *)v37 + 52))(v37) )
          *(_DWORD *)(CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4)) + 52) = (char *)&elf_hash_chain[8526] + CTimer::m_snTimeInMilliseconds;
      }
    }
    v31 = CTaskManager::GetActiveTask((CTaskManager *)(*(_DWORD *)(v13 + 1088) + 4));
    v32 = v31;
    if ( v31 )
    {
      v33 = (*(int (__fastcall **)(int))(*(_DWORD *)v31 + 20))(v31);
      if ( v33 == (*(int (__fastcall **)(CTaskComplexWanderStandard *))(*(_DWORD *)v37 + 20))(v37) )
      {
        v34 = (*(int (__fastcall **)(int))(*(_DWORD *)v32 + 52))(v32);
        if ( v34 == (*(int (__fastcall **)(CTaskComplexWanderStandard *))(*(_DWORD *)v37 + 52))(v37) )
          *(_DWORD *)(CTaskManager::GetActiveTask((CTaskManager *)(*(_DWORD *)(v13 + 1088) + 4)) + 52) = (char *)&elf_hash_chain[8526] + CTimer::m_snTimeInMilliseconds;
      }
    }
    CEventChatPartner::~CEventChatPartner((CEventChatPartner *)v38);
    CEventChatPartner::~CEventChatPartner((CEventChatPartner *)v39);
    return 1;
  }
  return v7;
}


// ============================================================

// Address: 0x523738
// Original: _ZN26CTaskComplexWanderStandard15LookForSexyCarsEP4CPed
// Demangled: CTaskComplexWanderStandard::LookForSexyCars(CPed *)
int __fastcall CTaskComplexWanderStandard::LookForSexyCars(CTaskComplexWanderStandard *this, CPed *a2)
{
  int v3; // r0
  int v4; // r6
  float *v5; // r9
  int v6; // r0
  int v7; // r8
  int v8; // r5
  bool v9; // zf
  int v10; // r0
  float *v11; // r1
  float v12; // s0
  float v13; // s2
  float v14; // s4
  int ActiveTask; // r0
  int v17; // r5
  int v18; // r6
  int v19; // r5
  bool v20[4]; // [sp+14h] [bp-44h]
  _BYTE v21[64]; // [sp+18h] [bp-40h] BYREF

  v20[0] = (char)this;
  v3 = *((_DWORD *)a2 + 5);
  v4 = *((_DWORD *)a2 + 272);
  v5 = (float *)(v3 + 48);
  if ( !v3 )
    v5 = (float *)((char *)a2 + 4);
  v6 = 56;
  while ( 1 )
  {
    v7 = v6;
    v8 = *(_DWORD *)(v4 + 4 * v6);
    v9 = v8 == 0;
    if ( v8 )
      v9 = *((_DWORD *)a2 + 356) == v8;
    if ( !v9 && *(_DWORD *)(*(_DWORD *)(v8 + 904) + 216) >= 0x9C41u && *(float *)(v8 + 1228) > 500.0 )
    {
      v10 = *(_DWORD *)(v8 + 20);
      v11 = (float *)(v10 + 48);
      if ( !v10 )
        v11 = (float *)(v8 + 4);
      v12 = *v11 - *v5;
      v13 = v11[1] - v5[1];
      v14 = v11[2] - v5[2];
      if ( (float)((float)((float)(v12 * v12) + (float)(v13 * v13)) + (float)(v14 * v14)) < 25.0
        && (float)((float)((float)(v12 * *(float *)(*((_DWORD *)a2 + 5) + 16))
                         + (float)(v13 * *(float *)(*((_DWORD *)a2 + 5) + 20)))
                 + (float)(v14 * *(float *)(*((_DWORD *)a2 + 5) + 24))) > 0.0
        && CWorld::GetIsLineOfSightClear(
             (CWorld *)v5,
             (const CVector *)v11,
             (const CVector *)((char *)&stderr + 1),
             0,
             0,
             1,
             0,
             0,
             0,
             v20[0]) == 1 )
      {
        break;
      }
    }
    v6 = v7 + 1;
    if ( v7 - 56 >= 15 )
      return 0;
  }
  CEventSexyVehicle::CEventSexyVehicle((CEventSexyVehicle *)v21, (CVehicle *)v8);
  CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v21, 0);
  ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
  v17 = ActiveTask;
  if ( ActiveTask )
  {
    v18 = (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask);
    if ( v18 == (*(int (__fastcall **)(bool *))(**(_DWORD **)v20 + 20))(*(bool **)v20) )
    {
      v19 = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 52))(v17);
      if ( v19 == (*(int (__fastcall **)(bool *))(**(_DWORD **)v20 + 52))(*(bool **)v20) )
        *(_DWORD *)(CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4)) + 52) = CTimer::m_snTimeInMilliseconds + 100000;
    }
  }
  CEventSexyVehicle::~CEventSexyVehicle((CEventSexyVehicle *)v21);
  return 1;
}


// ============================================================

// Address: 0x5238d4
// Original: _ZN26CTaskComplexWanderStandard14ScanForEffectsEP4CPed
// Demangled: CTaskComplexWanderStandard::ScanForEffects(CPed *)
void __fastcall CTaskComplexWanderStandard::ScanForEffects(CTaskComplexWanderStandard *this, CPed *a2)
{
  ;
}


// ============================================================

// Address: 0x5238d6
// Original: _ZNK26CTaskComplexWanderStandard8WillChatERK4CPedS2_
// Demangled: CTaskComplexWanderStandard::WillChat(CPed const&,CPed const&)
int __fastcall CTaskComplexWanderStandard::WillChat(CTaskComplexWanderStandard *this, const CPed *a2, const CPed *a3)
{
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  const CPed *v9; // r2

  v5 = *((_DWORD *)a2 + 359);
  v6 = v5 == 20;
  if ( v5 != 20 )
    v6 = v5 == 6;
  if ( v6 )
    return 0;
  v7 = *((_DWORD *)a3 + 359);
  v8 = v7 == 6;
  if ( v7 != 6 )
    v8 = v7 == 20;
  if ( v8
    || CPed::IsPlayer(a2)
    || CPed::IsPlayer(a3)
    || (unsigned int)(*((_DWORD *)a2 + 359) - 7) < 0xA
    || (unsigned int)(*((_DWORD *)a3 + 359) - 7) < 0xA )
  {
    return 0;
  }
  else
  {
    return sub_19BC08(a2, a3, v9);
  }
}


// ============================================================

// Address: 0x52392c
// Original: _ZN26CTaskComplexWanderStandard18SetNextMinScanTimeEP4CPed
// Demangled: CTaskComplexWanderStandard::SetNextMinScanTime(CPed *)
_DWORD *__fastcall CTaskComplexWanderStandard::SetNextMinScanTime(CTaskComplexWanderStandard *this, CPed *a2)
{
  _DWORD *result; // r0
  _DWORD *v5; // r6
  int v6; // r4
  int v7; // r4

  result = (_DWORD *)CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
  v5 = result;
  if ( result )
  {
    v6 = (*(int (__fastcall **)(_DWORD *))(*result + 20))(result);
    result = (_DWORD *)(*(int (__fastcall **)(CTaskComplexWanderStandard *))(*(_DWORD *)this + 20))(this);
    if ( (_DWORD *)v6 == result )
    {
      v7 = (*(int (__fastcall **)(_DWORD *))(*v5 + 52))(v5);
      result = (_DWORD *)(*(int (__fastcall **)(CTaskComplexWanderStandard *))(*(_DWORD *)this + 52))(this);
      if ( (_DWORD *)v7 == result )
      {
        result = (_DWORD *)CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
        result[13] = CTimer::m_snTimeInMilliseconds + 100000;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x523998
// Original: _ZN26CTaskComplexWanderStandard15SetNextScanTimeEi
// Demangled: CTaskComplexWanderStandard::SetNextScanTime(int)
int __fastcall CTaskComplexWanderStandard::SetNextScanTime(int this, int a2)
{
  *(_DWORD *)(this + 52) = a2;
  return this;
}


// ============================================================

// Address: 0x526ddc
// Original: _ZN26CTaskComplexWanderStandardD0Ev
// Demangled: CTaskComplexWanderStandard::~CTaskComplexWanderStandard()
void __fastcall CTaskComplexWanderStandard::~CTaskComplexWanderStandard(CTaskComplexWanderStandard *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x526dec
// Original: _ZNK26CTaskComplexWanderStandard5CloneEv
// Demangled: CTaskComplexWanderStandard::Clone(void)
int __fastcall CTaskComplexWanderStandard::Clone(CTaskComplexWanderStandard *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  char v4; // r5
  int v5; // r6
  int result; // r0
  char v7; // r2

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_38, a2);
  v4 = *((_BYTE *)this + 36);
  v5 = *((_DWORD *)this + 3);
  LOBYTE(this) = *((_BYTE *)this + 16);
  CTaskComplex::CTaskComplex(v3);
  *(_BYTE *)(result + 16) = (_BYTE)this;
  *(_DWORD *)(result + 12) = v5;
  *(_DWORD *)(result + 20) = 1056964608;
  *(_WORD *)(result + 24) = -1;
  *(_WORD *)(result + 28) = -1;
  *(_DWORD *)(result + 32) = 0;
  *(_WORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  v7 = *(_BYTE *)(result + 36);
  *(_DWORD *)result = &off_66C59C;
  *(_BYTE *)(result + 36) = v4 & 1 | v7 & 0xF0;
  return result;
}


// ============================================================

// Address: 0x526e4c
// Original: _ZNK26CTaskComplexWanderStandard13GetWanderTypeEv
// Demangled: CTaskComplexWanderStandard::GetWanderType(void)
int __fastcall CTaskComplexWanderStandard::GetWanderType(CTaskComplexWanderStandard *this)
{
  return 0;
}


// ============================================================

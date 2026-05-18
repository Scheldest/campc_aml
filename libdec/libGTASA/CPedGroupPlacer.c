
// Address: 0x197264
// Original: j__ZNK15CPedGroupPlacer14PlaceChatGroupE8ePedTypeiRK7CVectori
// Demangled: CPedGroupPlacer::PlaceChatGroup(ePedType,int,CVector const&,int)
// attributes: thunk
int CPedGroupPlacer::PlaceChatGroup()
{
  return _ZNK15CPedGroupPlacer14PlaceChatGroupE8ePedTypeiRK7CVectori();
}


// ============================================================

// Address: 0x1977d0
// Original: j__ZNK15CPedGroupPlacer16PlaceRandomGroupE8ePedTypeiRK7CVectori
// Demangled: CPedGroupPlacer::PlaceRandomGroup(ePedType,int,CVector const&,int)
// attributes: thunk
int CPedGroupPlacer::PlaceRandomGroup()
{
  return _ZNK15CPedGroupPlacer16PlaceRandomGroupE8ePedTypeiRK7CVectori();
}


// ============================================================

// Address: 0x199de0
// Original: j__ZNK15CPedGroupPlacer10PlaceGroupE8ePedTypeiRK7CVectori
// Demangled: CPedGroupPlacer::PlaceGroup(ePedType,int,CVector const&,int)
// attributes: thunk
int CPedGroupPlacer::PlaceGroup()
{
  return _ZNK15CPedGroupPlacer10PlaceGroupE8ePedTypeiRK7CVectori();
}


// ============================================================

// Address: 0x1a0360
// Original: j__ZNK15CPedGroupPlacer19PlaceFormationGroupE8ePedTypeiRK7CVectori
// Demangled: CPedGroupPlacer::PlaceFormationGroup(ePedType,int,CVector const&,int)
// attributes: thunk
int CPedGroupPlacer::PlaceFormationGroup()
{
  return _ZNK15CPedGroupPlacer19PlaceFormationGroupE8ePedTypeiRK7CVectori();
}


// ============================================================

// Address: 0x4b7bec
// Original: _ZNK15CPedGroupPlacer10PlaceGroupE8ePedTypeiRK7CVectori
// Demangled: CPedGroupPlacer::PlaceGroup(ePedType,int,CVector const&,int)
int __fastcall CPedGroupPlacer::PlaceGroup(int a1, int a2, int a3, int a4, unsigned int a5)
{
  if ( a5 < 2 )
    return CPedGroupPlacer::PlaceFormationGroup();
  if ( a5 - 2 < 2 )
    return CPedGroupPlacer::PlaceChatGroup();
  if ( a5 == 5 )
    return CPedGroupPlacer::PlaceRandomGroup();
  return 0;
}


// ============================================================

// Address: 0x4b7c28
// Original: _ZNK15CPedGroupPlacer19PlaceFormationGroupE8ePedTypeiRK7CVectori
// Demangled: CPedGroupPlacer::PlaceFormationGroup(ePedType,int,CVector const&,int)
int __fastcall CPedGroupPlacer::PlaceFormationGroup(int a1, int a2, int a3, float32x2_t *a4)
{
  float32x2_t v4; // d0
  float32x2_t v5; // d9
  float32x2_t v6; // d13
  char *v9; // r0
  int v10; // r10
  int *v11; // r5
  CPedGroupMembership *v12; // r8
  _DWORD *PlayerPed; // r0
  float32x2_t *v14; // r1
  float32x2_t *v15; // r2
  float32x2_t v16; // d16
  int v17; // r6
  int v18; // r1
  float v19; // r5
  float v20; // s18
  int v21; // r0
  int v22; // r6
  int v23; // r1
  float *v24; // r5
  int v25; // r9
  _DWORD *v26; // r0
  int v27; // r9
  float *v28; // r1
  int v29; // r0
  float v30; // s4
  float v31; // s0
  int v32; // r0
  float v33; // s2
  float *v34; // r0
  int v35; // r0
  int v36; // r1
  CWorld *v37; // s24
  float v38; // s22
  int v39; // r0
  CPed *v40; // r1
  float v41; // s0
  int v42; // r0
  int v43; // r0
  int *v44; // r4
  void (__fastcall ***v45)(_DWORD, _DWORD, _DWORD); // r0
  unsigned __int32 v46; // r4
  int v47; // r5
  unsigned int v48; // r1
  CTaskComplexBeInGroup *v49; // r4
  int v50; // r5
  unsigned __int32 *v51; // r6
  CPed *v52; // t1
  int v53; // r9
  unsigned int v54; // r1
  CTaskComplexBeInGroup *v55; // r4
  CEntity **v57; // [sp+4h] [bp-B4h]
  CEntity **v58; // [sp+4h] [bp-B4h]
  unsigned __int8 v59; // [sp+Ch] [bp-ACh]
  bool v60; // [sp+14h] [bp-A4h]
  int v61; // [sp+18h] [bp-A0h]
  int v62; // [sp+20h] [bp-98h]
  float *v63; // [sp+24h] [bp-94h]
  CPedGroupIntelligence *v64; // [sp+28h] [bp-90h]
  _BYTE v66[9]; // [sp+37h] [bp-81h] BYREF
  float v67; // [sp+40h] [bp-78h]
  float32x2_t v68; // [sp+44h] [bp-74h] BYREF
  float v69; // [sp+4Ch] [bp-6Ch]
  _BYTE v70[81]; // [sp+67h] [bp-51h] BYREF

  v9 = CPedGroups::ms_activeGroups;
  if ( CPedGroups::ms_activeGroups[0] )
  {
    v9 = &byte_9EF9B1;
    if ( byte_9EF9B1 )
    {
      v9 = &byte_9EF9B2;
      if ( byte_9EF9B2 )
      {
        v9 = &byte_9EF9B3;
        if ( byte_9EF9B3 )
        {
          v9 = &byte_9EF9B4;
          if ( byte_9EF9B4 )
          {
            v9 = &byte_9EF9B5;
            if ( byte_9EF9B5 )
            {
              v9 = &byte_9EF9B6;
              if ( byte_9EF9B6 )
              {
                v9 = &byte_9EF9B7;
                if ( byte_9EF9B7 )
                  return 0;
                v10 = 7;
              }
              else
              {
                v10 = 6;
              }
            }
            else
            {
              v10 = 5;
            }
          }
          else
          {
            v10 = 4;
          }
        }
        else
        {
          v10 = 3;
        }
      }
      else
      {
        v10 = 2;
      }
    }
    else
    {
      v10 = 1;
    }
  }
  else
  {
    v10 = 0;
  }
  *v9 = 1;
  v11 = &CPedGroups::ms_groups[181 * (__int16)v10];
  v12 = (CPedGroupMembership *)(v11 + 2);
  CPedGroupMembership::Flush((CPedGroupMembership *)(v11 + 2));
  v64 = (CPedGroupIntelligence *)(v11 + 12);
  CPedGroupIntelligence::Flush((CPedGroupIntelligence *)(v11 + 12));
  *((_BYTE *)v11 + 720) = 0;
  if ( CCamera::IsSphereVisible((CCamera *)&TheCamera, (const CVector *)a4, 3.0) == 1 )
  {
    PlayerPed = (_DWORD *)FindPlayerPed(-1);
    v14 = (float32x2_t *)PlayerPed[5];
    v15 = v14 + 6;
    if ( !v14 )
      v15 = (float32x2_t *)(PlayerPed + 1);
    v16.n64_u64[0] = vsub_f32((float32x2_t)a4->n64_u64[0], (float32x2_t)v15->n64_u64[0]).n64_u64[0];
    v4.n64_u64[0] = vmul_f32(v16, v16).n64_u64[0];
    if ( sqrtf(v4.n64_f32[0] + v4.n64_f32[1]) < (float)(COERCE_FLOAT(CPopulation::PedCreationDistMultiplier((CPopulation *)PlayerPed))
                                                      * 42.5) )
      return 0;
  }
  v17 = 0;
  if ( CPedPlacement::IsPositionClearForPed(
         (CPedPlacement *)a4,
         (const CVector *)0x40400000,
         NAN,
         0,
         (CEntity **)((char *)&stderr + 1),
         1u,
         1u,
         v59) != 1 )
    return v17;
  v19 = COERCE_FLOAT(
          CWorld::FindGroundZFor3DCoord(
            (CWorld *)a4->n64_u32[0],
            a4->n64_f32[1],
            a4[1].n64_f32[0] + 1.0,
            COERCE_FLOAT(v70),
            0,
            v57));
  if ( !v70[0] )
    return v17;
  v5.n64_u32[0] = a4[1].n64_u32[0];
  if ( !*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[CPopulation::ChooseGangOccupation((CPopulation *)(a2 - 7), v18)])
                  + 52) )
    return 0;
  v68.n64_u64[0] = a4->n64_u64[0];
  v4.n64_f32[0] = v19 + 1.0;
  v17 = 0;
  LODWORD(v20) = vmax_f32(v5, v4).n64_u32[0];
  v69 = v20;
  v21 = CPopulation::AddPed();
  if ( !v21 )
    return v17;
  v68.n64_u32[0] = v21;
  if ( a3 >= 2 )
  {
    v22 = a3 - 1;
    v62 = v21;
    v63 = (float *)(v21 + 4);
    v61 = 1;
    v23 = (int)CTaskComplexFollowLeaderInFormation::ms_offsets;
    v24 = (float *)algn_9FF898;
    do
    {
      v23 = CPopulation::ChooseGangOccupation((CPopulation *)(a2 - 7), v23);
      if ( *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v23]) + 52) )
      {
        *(float32x2_t *)&v66[1] = (float32x2_t)a4->n64_u64[0];
        v67 = v20;
        v27 = CPopulation::AddPed();
        if ( v27 )
        {
          v28 = v63;
          v29 = *(_DWORD *)(v62 + 20);
          if ( v29 )
            v28 = (float *)(v29 + 48);
          v30 = *v24 + *v28;
          v31 = v28[2] + 0.0;
          v32 = *(_DWORD *)(v27 + 20);
          v33 = v24[1] + v28[1];
          if ( v32 )
          {
            *(float *)(v32 + 48) = v30;
            *(float *)(*(_DWORD *)(v27 + 20) + 52) = v33;
            v34 = (float *)(*(_DWORD *)(v27 + 20) + 56);
          }
          else
          {
            v34 = (float *)(v27 + 12);
            *(float *)(v27 + 4) = v30;
            *(float *)(v27 + 8) = v33;
          }
          *v34 = v31;
          v35 = *(_DWORD *)(v27 + 20);
          v36 = v35 + 48;
          if ( !v35 )
            v36 = v27 + 4;
          v6.n64_u32[0] = *(_DWORD *)(v36 + 8);
          v37 = *(CWorld **)v36;
          v38 = *(float *)(v36 + 4);
          *(float *)&v39 = COERCE_FLOAT(
                             CWorld::FindGroundZFor3DCoord(
                               *(CWorld **)v36,
                               v38,
                               v6.n64_f32[0] + 1.0,
                               COERCE_FLOAT(v66),
                               0,
                               v58));
          v40 = (CPed *)v66[0];
          if ( !v66[0] )
            goto LABEL_46;
          v41 = *(float *)&v39;
          v42 = *(_DWORD *)(v62 + 20);
          v40 = (CPed *)v63;
          v4.n64_f32[0] = v41 + 1.0;
          if ( v42 )
            v40 = (CPed *)(v42 + 48);
          v6.n64_u64[0] = vmax_f32(v6, v4).n64_u64[0];
          if ( fabsf(v6.n64_f32[0] - *((float *)v40 + 2)) <= 1.0
            && (*(float *)&v66[5] = v38,
                *(_DWORD *)&v66[1] = v37,
                v67 = v6.n64_f32[0],
                CWorld::GetIsLineOfSightClear(
                  (CWorld *)&v66[1],
                  v40,
                  (const CVector *)((char *)&stderr + 1),
                  0,
                  0,
                  0,
                  0,
                  0,
                  0,
                  v60)) )
          {
            v43 = *(_DWORD *)(v27 + 20);
            if ( v43 )
            {
              *(_DWORD *)(v43 + 48) = v37;
              *(float *)(*(_DWORD *)(v27 + 20) + 52) = v38;
              v26 = (_DWORD *)(*(_DWORD *)(v27 + 20) + 56);
            }
            else
            {
              v26 = (_DWORD *)(v27 + 12);
              *(_DWORD *)(v27 + 4) = v37;
              *(float *)(v27 + 8) = v38;
            }
            *v26 = v6.n64_u32[0];
            v68.n64_u32[v61] = v27;
            CVisibilityPlugins::SetClumpAlpha(*(_DWORD *)(v27 + 24), 0);
            ++v61;
          }
          else
          {
LABEL_46:
            CPopulation::RemovePed((CPopulation *)v27, v40);
          }
        }
      }
      v24 += 2;
      --v22;
    }
    while ( v22 );
    v25 = v61;
    if ( v61 >= 1 )
      goto LABEL_49;
    return 0;
  }
  v25 = 1;
LABEL_49:
  v44 = &CPedGroups::ms_groups[181 * (__int16)v10];
  v44[175] = (int)&CPedGroupDefaultTaskAllocators::ms_followAnyMeansAllocator;
  CPedGroupIntelligence::FlushTasks(
    (CPedGroupIntelligence *)&CPedGroupDefaultTaskAllocators::ms_followAnyMeansAllocator,
    (CPedTaskPair *)(v44 + 135),
    0);
  v45 = (void (__fastcall ***)(_DWORD, _DWORD, _DWORD))v44[175];
  if ( v45 )
    (**v45)(v45, *(_DWORD *)v64, 0);
  v46 = v68.n64_u32[0];
  CPedGroupMembership::SetLeader(v12, (CPed *)v68.n64_u32[0]);
  CPedGroupMembership::Process(v12);
  CPedGroupIntelligence::Process(v64);
  v47 = *(_DWORD *)(v46 + 1088);
  v49 = (CTaskComplexBeInGroup *)CTask::operator new((CTask *)&word_28, v48);
  v17 = 1;
  CTaskComplexBeInGroup::CTaskComplexBeInGroup(v49, v10, 1);
  CTaskManager::SetTask((CTaskManager *)(v47 + 4), v49, 3, 0);
  if ( v25 >= 2 )
  {
    v50 = v25 - 1;
    v51 = &v68.n64_u32[1];
    do
    {
      v52 = (CPed *)*v51++;
      CPedGroupMembership::AddFollower(v12, v52);
      CPedGroupMembership::Process(v12);
      CPedGroupIntelligence::Process(v64);
      v53 = *((_DWORD *)v52 + 272);
      v55 = (CTaskComplexBeInGroup *)CTask::operator new((CTask *)&word_28, v54);
      CTaskComplexBeInGroup::CTaskComplexBeInGroup(v55, v10, 0);
      CTaskManager::SetTask((CTaskManager *)(v53 + 4), v55, 3, 0);
      --v50;
    }
    while ( v50 );
    return 1;
  }
  return v17;
}


// ============================================================

// Address: 0x4b80d8
// Original: _ZNK15CPedGroupPlacer14PlaceChatGroupE8ePedTypeiRK7CVectori
// Demangled: CPedGroupPlacer::PlaceChatGroup(ePedType,int,CVector const&,int)
int __fastcall CPedGroupPlacer::PlaceChatGroup(int a1, int a2, int a3, float32x2_t *a4)
{
  float32x2_t v4; // d0
  float32x2_t v5; // d3
  int v7; // r11
  char *v8; // r0
  int v9; // r3
  int *v10; // r5
  float v11; // r0
  float v12; // s20
  _DWORD *PlayerPed; // r0
  float32x2_t *v14; // r1
  float32x2_t *v15; // r2
  float32x2_t v16; // d16
  int v17; // r8
  int v18; // r9
  float v19; // r6
  float v20; // r5
  float v21; // r6
  float v22; // s0
  float v23; // s17
  float v24; // s19
  float v25; // r0
  unsigned int v26; // s4
  unsigned int v27; // s2
  float v28; // r0
  int v29; // r1
  int v30; // r1
  int v31; // r1
  int v32; // r1
  int v33; // r1
  int v34; // r6
  int v35; // r1
  int v36; // r1
  int v37; // r1
  int IsLineOfSightClear; // r0
  _BOOL4 v39; // r1
  int v40; // r1
  CPed *v41; // r0
  CPed *v42; // r1
  CPed *v43; // r6
  int RadianAngleBetweenPoints; // r0
  int v45; // r1
  int *v46; // r4
  void (__fastcall ***v47)(_DWORD, _DWORD, _DWORD); // r0
  CPed *v48; // r4
  int v49; // r5
  unsigned int v50; // r1
  CTaskComplexBeInGroup *v51; // r4
  CPed **v52; // r6
  int v53; // r5
  CPed *v54; // t1
  int v55; // r8
  unsigned int v56; // r1
  CTaskComplexBeInGroup *v57; // r4
  CEntity **v59; // [sp+0h] [bp-F8h]
  CEntity **v60; // [sp+4h] [bp-F4h]
  unsigned __int8 v61; // [sp+Ch] [bp-ECh]
  unsigned __int8 v62; // [sp+Ch] [bp-ECh]
  CPedGroupMembership *v63; // [sp+14h] [bp-E4h]
  CPedGroupIntelligence *v64; // [sp+18h] [bp-E0h]
  int v65; // [sp+1Ch] [bp-DCh]
  __int64 v68; // [sp+30h] [bp-C8h] BYREF
  __int64 v69; // [sp+38h] [bp-C0h]
  __int64 v70; // [sp+40h] [bp-B8h]
  __int64 v71; // [sp+48h] [bp-B0h]
  CPed *v72; // [sp+50h] [bp-A8h]
  double v73; // [sp+58h] [bp-A0h] BYREF
  float v74; // [sp+60h] [bp-98h]
  _BYTE v75[9]; // [sp+67h] [bp-91h] BYREF
  float v76; // [sp+70h] [bp-88h]
  CPed *v77; // [sp+78h] [bp-80h]
  int v78; // [sp+7Ch] [bp-7Ch] BYREF

  if ( a3 < 2 )
    return 0;
  v8 = CPedGroups::ms_activeGroups;
  if ( CPedGroups::ms_activeGroups[0] )
  {
    v8 = &byte_9EF9B1;
    if ( byte_9EF9B1 )
    {
      v8 = &byte_9EF9B2;
      if ( byte_9EF9B2 )
      {
        v8 = &byte_9EF9B3;
        if ( byte_9EF9B3 )
        {
          v8 = &byte_9EF9B4;
          if ( byte_9EF9B4 )
          {
            v8 = &byte_9EF9B5;
            if ( byte_9EF9B5 )
            {
              v8 = &byte_9EF9B6;
              if ( byte_9EF9B6 )
              {
                v8 = &byte_9EF9B7;
                if ( byte_9EF9B7 )
                  return 0;
                v9 = 7;
              }
              else
              {
                v9 = 6;
              }
            }
            else
            {
              v9 = 5;
            }
          }
          else
          {
            v9 = 4;
          }
        }
        else
        {
          v9 = 3;
        }
      }
      else
      {
        v9 = 2;
      }
    }
    else
    {
      v9 = 1;
    }
  }
  else
  {
    v9 = 0;
  }
  v65 = v9;
  *v8 = 1;
  v10 = &CPedGroups::ms_groups[181 * (__int16)v9];
  CPedGroupMembership::Flush((CPedGroupMembership *)(v10 + 2));
  CPedGroupIntelligence::Flush((CPedGroupIntelligence *)(v10 + 12));
  v11 = cosf(6.2832 / (float)a3);
  *((_BYTE *)v10 + 720) = 0;
  v12 = sqrtf(0.5 / (float)(1.0 - v11));
  if ( CCamera::IsSphereVisible((CCamera *)&TheCamera, (const CVector *)a4, v12) == 1 )
  {
    PlayerPed = (_DWORD *)FindPlayerPed(-1);
    v14 = (float32x2_t *)PlayerPed[5];
    v15 = v14 + 6;
    if ( !v14 )
      v15 = (float32x2_t *)(PlayerPed + 1);
    v16.n64_u64[0] = vsub_f32((float32x2_t)a4->n64_u64[0], (float32x2_t)v15->n64_u64[0]).n64_u64[0];
    v4.n64_u64[0] = vmul_f32(v16, v16).n64_u64[0];
    if ( sqrtf(v4.n64_f32[0] + v4.n64_f32[1]) < (float)(COERCE_FLOAT(CPopulation::PedCreationDistMultiplier((CPopulation *)PlayerPed))
                                                      * 42.5) )
      return 0;
  }
  v64 = (CPedGroupIntelligence *)(v10 + 12);
  v7 = 0;
  if ( CPedPlacement::IsPositionClearForPed(
         (CPedPlacement *)a4,
         (const CVector *)LODWORD(v12),
         NAN,
         0,
         (CEntity **)((char *)&stderr + 1),
         1u,
         1u,
         v61) != 1 )
    return v7;
  v63 = (CPedGroupMembership *)(v10 + 2);
  v17 = 0;
  v18 = 0;
  do
  {
    v19 = (float)((float)(6.2832 / (float)a3) * (float)v18)
        + (float)((float)(6.2832 / (float)a3) * (float)((float)((float)((float)rand() * 4.6566e-10) * 0.4) + -0.2));
    v20 = cosf(v19);
    v21 = sinf(v19);
    v22 = v12 + (float)(v12 * (float)((float)((float)((float)rand() * 4.6566e-10) * 0.4) + -0.2));
    v23 = v20 * v22;
    v24 = v21 * v22;
    v25 = COERCE_FLOAT(
            CWorld::FindGroundZFor3DCoord(
              COERCE_CWORLD_(a4->n64_f32[0] + (float)(v20 * v22)),
              a4->n64_f32[1] + (float)(v21 * v22),
              a4[1].n64_f32[0] + 1.0,
              COERCE_FLOAT(v75),
              0,
              v60));
    if ( v75[0] )
    {
      v4.n64_f32[0] = v25 + 1.0;
      v5.n64_u32[0] = a4[1].n64_u32[0];
      *(float *)&v26 = v24 + a4->n64_f32[1];
      *(float *)&v27 = v23 + a4->n64_f32[0];
      v4.n64_u64[0] = vmax_f32(v5, v4).n64_u64[0];
      v74 = v4.n64_f32[0];
      *(_QWORD *)&v73 = __PAIR64__(v26, v27);
      if ( !v18 )
      {
        v76 = v74;
        *(double *)&v75[1] = v73;
      }
      v28 = CModelInfo::ms_modelInfoPtrs[CPopulation::ChooseGangOccupation((CPopulation *)(a2 - 7), v75[0])];
      if ( *(_DWORD *)(LODWORD(v28) + 52) )
      {
        v68 = 0LL;
        v69 = 0LL;
        v70 = 0LL;
        v71 = 0LL;
        v72 = 0;
        CPedPlacement::IsPositionClearForPed(
          (CPedPlacement *)&v73,
          *(const CVector **)(*(_DWORD *)(LODWORD(v28) + 44) + 36),
          COERCE_FLOAT(9),
          (int)&v68,
          (CEntity **)((char *)&stderr + 1),
          (unsigned __int8)&stderr + 1,
          (unsigned __int8)&stderr + 1,
          v62);
        if ( (_DWORD)v68 )
        {
          if ( v17 < 1 )
            goto LABEL_77;
          v29 = 0;
          while ( (CPed *)v68 != *(&v77 + v29) )
          {
            if ( ++v29 >= v17 )
              goto LABEL_77;
          }
        }
        if ( HIDWORD(v68) )
        {
          if ( v17 < 1 )
            goto LABEL_77;
          v30 = 0;
          while ( (CPed *)HIDWORD(v68) != *(&v77 + v30) )
          {
            if ( ++v30 >= v17 )
              goto LABEL_77;
          }
        }
        if ( (_DWORD)v69 )
        {
          if ( v17 < 1 )
            goto LABEL_77;
          v31 = 0;
          while ( (CPed *)v69 != *(&v77 + v31) )
          {
            if ( ++v31 >= v17 )
              goto LABEL_77;
          }
        }
        if ( HIDWORD(v69) )
        {
          if ( v17 < 1 )
            goto LABEL_77;
          v32 = 0;
          while ( (CPed *)HIDWORD(v69) != *(&v77 + v32) )
          {
            if ( ++v32 >= v17 )
              goto LABEL_77;
          }
        }
        if ( (_DWORD)v70 )
        {
          if ( v17 < 1 )
            goto LABEL_77;
          v33 = 0;
          while ( (CPed *)v70 != *(&v77 + v33) )
          {
            ++v33;
            v34 = 1;
            if ( v33 >= v17 )
              goto LABEL_78;
          }
        }
        if ( HIDWORD(v70) )
        {
          if ( v17 < 1 )
            goto LABEL_77;
          v35 = 0;
          while ( (CPed *)HIDWORD(v70) != *(&v77 + v35) )
          {
            ++v35;
            v34 = 1;
            if ( v35 >= v17 )
              goto LABEL_78;
          }
        }
        if ( (_DWORD)v71 )
        {
          if ( v17 < 1 )
            goto LABEL_77;
          v36 = 0;
          while ( (CPed *)v71 != *(&v77 + v36) )
          {
            ++v36;
            v34 = 1;
            if ( v36 >= v17 )
              goto LABEL_78;
          }
        }
        if ( !HIDWORD(v71) )
          goto LABEL_80;
        if ( v17 >= 1 )
        {
          v37 = 0;
          while ( (CPed *)HIDWORD(v71) != *(&v77 + v37) )
          {
            ++v37;
            v34 = 1;
            if ( v37 >= v17 )
              goto LABEL_78;
          }
LABEL_80:
          v34 = (int)v72;
          if ( v72 )
          {
            v34 = 1;
            if ( v17 >= 1 )
            {
              v40 = 0;
              while ( v72 != *(&v77 + v40) )
              {
                ++v40;
                v34 = 1;
                if ( v40 >= v17 )
                  goto LABEL_78;
              }
              v34 = 0;
              if ( !v18 )
                goto LABEL_89;
              goto LABEL_79;
            }
          }
LABEL_78:
          if ( !v18 )
          {
LABEL_89:
            IsLineOfSightClear = 1;
            v39 = 1;
            goto LABEL_90;
          }
LABEL_79:
          IsLineOfSightClear = CWorld::GetIsLineOfSightClear(
                                 (CWorld *)&v73,
                                 (const CVector *)&v75[1],
                                 (const CVector *)((char *)&stderr + 1),
                                 0,
                                 0,
                                 0,
                                 0,
                                 0,
                                 0,
                                 (bool)v63);
          v39 = fabsf(v74 - v76) < 1.0;
LABEL_90:
          if ( !(IsLineOfSightClear ^ 1 | v34) && v39 )
          {
            v41 = (CPed *)CPopulation::AddPed();
            v43 = v41;
            if ( v41 )
            {
              *(&v77 + v17) = v41;
              RadianAngleBetweenPoints = CGeneral::GetRadianAngleBetweenPoints(
                                           (CGeneral *)a4->n64_u32[0],
                                           a4->n64_f32[1],
                                           *(float *)&v73,
                                           *((float *)&v73 + 1),
                                           *(float *)&v59);
              v45 = *((_DWORD *)v43 + 6);
              *((_DWORD *)v43 + 343) = RadianAngleBetweenPoints;
              *((_DWORD *)v43 + 344) = RadianAngleBetweenPoints;
              CVisibilityPlugins::SetClumpAlpha(v45, 0);
              ++v17;
            }
            else
            {
              CPopulation::RemovePed(0, v42);
            }
          }
          goto LABEL_95;
        }
LABEL_77:
        v34 = 1;
        goto LABEL_78;
      }
    }
LABEL_95:
    ++v18;
  }
  while ( v18 != a3 );
  if ( v17 < 1 )
    return 0;
  v46 = &CPedGroups::ms_groups[181 * (__int16)v65];
  v46[175] = (int)&CPedGroupDefaultTaskAllocators::ms_standStillAllocator;
  CPedGroupIntelligence::FlushTasks(
    (CPedGroupIntelligence *)&CPedGroupDefaultTaskAllocators::ms_standStillAllocator,
    (CPedTaskPair *)(v46 + 135),
    0);
  v47 = (void (__fastcall ***)(_DWORD, _DWORD, _DWORD))v46[175];
  if ( v47 )
    (**v47)(v47, *(_DWORD *)v64, 0);
  v48 = v77;
  CPedGroupMembership::SetLeader(v63, v77);
  CPedGroupMembership::Process(v63);
  CPedGroupIntelligence::Process(v64);
  v49 = *((_DWORD *)v48 + 272);
  v51 = (CTaskComplexBeInGroup *)CTask::operator new((CTask *)&word_28, v50);
  v7 = 1;
  CTaskComplexBeInGroup::CTaskComplexBeInGroup(v51, v65, 1);
  CTaskManager::SetTask((CTaskManager *)(v49 + 4), v51, 3, 0);
  if ( v17 >= 2 )
  {
    v52 = (CPed **)&v78;
    v53 = v17 - 1;
    do
    {
      v54 = *v52++;
      CPedGroupMembership::AddFollower(v63, v54);
      CPedGroupMembership::Process(v63);
      CPedGroupIntelligence::Process(v64);
      v55 = *((_DWORD *)v54 + 272);
      v57 = (CTaskComplexBeInGroup *)CTask::operator new((CTask *)&word_28, v56);
      CTaskComplexBeInGroup::CTaskComplexBeInGroup(v57, v65, 0);
      CTaskManager::SetTask((CTaskManager *)(v55 + 4), v57, 3, 0);
      --v53;
    }
    while ( v53 );
    return 1;
  }
  return v7;
}


// ============================================================

// Address: 0x4b869c
// Original: _ZNK15CPedGroupPlacer16PlaceRandomGroupE8ePedTypeiRK7CVectori
// Demangled: CPedGroupPlacer::PlaceRandomGroup(ePedType,int,CVector const&,int)
int __fastcall CPedGroupPlacer::PlaceRandomGroup(int a1, int a2, int a3, float32x2_t *a4)
{
  float32x2_t v4; // d0
  float32x2_t v5; // d3
  int v7; // r11
  char *v8; // r0
  int v9; // r3
  int *v10; // r4
  float v11; // r0
  float v12; // s20
  _DWORD *PlayerPed; // r0
  float32x2_t *v14; // r1
  float32x2_t *v15; // r2
  float32x2_t v16; // d16
  int v17; // r9
  int v18; // r8
  float v19; // r6
  float v20; // r4
  float v21; // r6
  float v22; // s0
  float v23; // s17
  float v24; // s19
  float v25; // r0
  unsigned int v26; // s4
  unsigned int v27; // s2
  float v28; // r0
  int v29; // r1
  int v30; // r1
  int v31; // r1
  int v32; // r1
  int v33; // r1
  int v34; // r6
  int v35; // r1
  int v36; // r1
  int v37; // r1
  int IsLineOfSightClear; // r0
  _BOOL4 v39; // r1
  int v40; // r1
  int v41; // r0
  CPed *v42; // r1
  _DWORD *v43; // r6
  int RadianAngleBetweenPoints; // r0
  int v45; // r1
  int *v46; // r4
  void (__fastcall ***v47)(_DWORD, _DWORD, _DWORD); // r0
  int v48; // r5
  CPed *v49; // r4
  int v50; // r8
  unsigned int v51; // r1
  CTaskComplexWanderGang *v52; // r6
  unsigned __int16 v53; // r0
  int v54; // r6
  unsigned int v55; // r1
  CTaskComplexBeInGroup *v56; // r4
  CEntity **v58; // [sp+0h] [bp-F8h]
  CEntity **v59; // [sp+4h] [bp-F4h]
  unsigned __int8 v60; // [sp+Ch] [bp-ECh]
  unsigned __int8 v61; // [sp+Ch] [bp-ECh]
  int v62; // [sp+14h] [bp-E4h]
  CPedGroupMembership *v65; // [sp+28h] [bp-D0h]
  CPedGroupIntelligence *v66; // [sp+2Ch] [bp-CCh]
  __int64 v67; // [sp+30h] [bp-C8h] BYREF
  __int64 v68; // [sp+38h] [bp-C0h]
  __int64 v69; // [sp+40h] [bp-B8h]
  __int64 v70; // [sp+48h] [bp-B0h]
  int v71; // [sp+50h] [bp-A8h]
  double v72; // [sp+58h] [bp-A0h] BYREF
  float v73; // [sp+60h] [bp-98h]
  _BYTE v74[9]; // [sp+67h] [bp-91h] BYREF
  float v75; // [sp+70h] [bp-88h]
  _DWORD v76[32]; // [sp+78h] [bp-80h]

  if ( a3 < 2 )
    return 0;
  v8 = CPedGroups::ms_activeGroups;
  if ( CPedGroups::ms_activeGroups[0] )
  {
    v8 = &byte_9EF9B1;
    if ( byte_9EF9B1 )
    {
      v8 = &byte_9EF9B2;
      if ( byte_9EF9B2 )
      {
        v8 = &byte_9EF9B3;
        if ( byte_9EF9B3 )
        {
          v8 = &byte_9EF9B4;
          if ( byte_9EF9B4 )
          {
            v8 = &byte_9EF9B5;
            if ( byte_9EF9B5 )
            {
              v8 = &byte_9EF9B6;
              if ( byte_9EF9B6 )
              {
                v8 = &byte_9EF9B7;
                if ( byte_9EF9B7 )
                  return 0;
                v9 = 7;
              }
              else
              {
                v9 = 6;
              }
            }
            else
            {
              v9 = 5;
            }
          }
          else
          {
            v9 = 4;
          }
        }
        else
        {
          v9 = 3;
        }
      }
      else
      {
        v9 = 2;
      }
    }
    else
    {
      v9 = 1;
    }
  }
  else
  {
    v9 = 0;
  }
  v62 = v9;
  *v8 = 1;
  v10 = &CPedGroups::ms_groups[181 * (__int16)v9];
  CPedGroupMembership::Flush((CPedGroupMembership *)(v10 + 2));
  v66 = (CPedGroupIntelligence *)(v10 + 12);
  CPedGroupIntelligence::Flush((CPedGroupIntelligence *)(v10 + 12));
  v11 = cosf(6.2832 / (float)a3);
  *((_BYTE *)v10 + 720) = 0;
  v12 = sqrtf(0.5 / (float)(1.0 - v11));
  if ( CCamera::IsSphereVisible((CCamera *)&TheCamera, (const CVector *)a4, v12) == 1 )
  {
    PlayerPed = (_DWORD *)FindPlayerPed(-1);
    v14 = (float32x2_t *)PlayerPed[5];
    v15 = v14 + 6;
    if ( !v14 )
      v15 = (float32x2_t *)(PlayerPed + 1);
    v16.n64_u64[0] = vsub_f32((float32x2_t)a4->n64_u64[0], (float32x2_t)v15->n64_u64[0]).n64_u64[0];
    v4.n64_u64[0] = vmul_f32(v16, v16).n64_u64[0];
    if ( sqrtf(v4.n64_f32[0] + v4.n64_f32[1]) < (float)(COERCE_FLOAT(CPopulation::PedCreationDistMultiplier((CPopulation *)PlayerPed))
                                                      * 42.5) )
      return 0;
  }
  v65 = (CPedGroupMembership *)(v10 + 2);
  v7 = 0;
  if ( CPedPlacement::IsPositionClearForPed(
         (CPedPlacement *)a4,
         (const CVector *)LODWORD(v12),
         NAN,
         0,
         (CEntity **)((char *)&stderr + 1),
         1u,
         1u,
         v60) != 1 )
    return v7;
  v17 = 0;
  v18 = 0;
  do
  {
    v19 = (float)((float)(6.2832 / (float)a3) * (float)v18)
        + (float)((float)(6.2832 / (float)a3) * (float)((float)((float)((float)rand() * 4.6566e-10) * 0.4) + -0.2));
    v20 = cosf(v19);
    v21 = sinf(v19);
    v22 = v12 + (float)(v12 * (float)((float)((float)((float)rand() * 4.6566e-10) * 0.4) + -0.2));
    v23 = v20 * v22;
    v24 = v21 * v22;
    v25 = COERCE_FLOAT(
            CWorld::FindGroundZFor3DCoord(
              COERCE_CWORLD_(a4->n64_f32[0] + (float)(v20 * v22)),
              a4->n64_f32[1] + (float)(v21 * v22),
              a4[1].n64_f32[0] + 1.0,
              COERCE_FLOAT(v74),
              0,
              v59));
    if ( v74[0] )
    {
      v4.n64_f32[0] = v25 + 1.0;
      v5.n64_u32[0] = a4[1].n64_u32[0];
      *(float *)&v26 = v24 + a4->n64_f32[1];
      *(float *)&v27 = v23 + a4->n64_f32[0];
      v4.n64_u64[0] = vmax_f32(v5, v4).n64_u64[0];
      v73 = v4.n64_f32[0];
      *(_QWORD *)&v72 = __PAIR64__(v26, v27);
      if ( !v18 )
      {
        v75 = v73;
        *(double *)&v74[1] = v72;
      }
      v28 = CModelInfo::ms_modelInfoPtrs[CPopulation::ChooseGangOccupation((CPopulation *)(a2 - 7), v74[0])];
      if ( *(_DWORD *)(LODWORD(v28) + 52) )
      {
        v67 = 0LL;
        v68 = 0LL;
        v69 = 0LL;
        v70 = 0LL;
        v71 = 0;
        CPedPlacement::IsPositionClearForPed(
          (CPedPlacement *)&v72,
          *(const CVector **)(*(_DWORD *)(LODWORD(v28) + 44) + 36),
          COERCE_FLOAT(9),
          (int)&v67,
          (CEntity **)((char *)&stderr + 1),
          (unsigned __int8)&stderr + 1,
          (unsigned __int8)&stderr + 1,
          v61);
        if ( (_DWORD)v67 )
        {
          if ( v17 < 1 )
            goto LABEL_77;
          v29 = 0;
          while ( (_DWORD)v67 != v76[v29] )
          {
            if ( ++v29 >= v17 )
              goto LABEL_77;
          }
        }
        if ( HIDWORD(v67) )
        {
          if ( v17 < 1 )
            goto LABEL_77;
          v30 = 0;
          while ( HIDWORD(v67) != v76[v30] )
          {
            if ( ++v30 >= v17 )
              goto LABEL_77;
          }
        }
        if ( (_DWORD)v68 )
        {
          if ( v17 < 1 )
            goto LABEL_77;
          v31 = 0;
          while ( (_DWORD)v68 != v76[v31] )
          {
            if ( ++v31 >= v17 )
              goto LABEL_77;
          }
        }
        if ( HIDWORD(v68) )
        {
          if ( v17 < 1 )
            goto LABEL_77;
          v32 = 0;
          while ( HIDWORD(v68) != v76[v32] )
          {
            if ( ++v32 >= v17 )
              goto LABEL_77;
          }
        }
        if ( (_DWORD)v69 )
        {
          if ( v17 < 1 )
            goto LABEL_77;
          v33 = 0;
          while ( (_DWORD)v69 != v76[v33] )
          {
            ++v33;
            v34 = 1;
            if ( v33 >= v17 )
              goto LABEL_78;
          }
        }
        if ( HIDWORD(v69) )
        {
          if ( v17 < 1 )
            goto LABEL_77;
          v35 = 0;
          while ( HIDWORD(v69) != v76[v35] )
          {
            ++v35;
            v34 = 1;
            if ( v35 >= v17 )
              goto LABEL_78;
          }
        }
        if ( (_DWORD)v70 )
        {
          if ( v17 < 1 )
            goto LABEL_77;
          v36 = 0;
          while ( (_DWORD)v70 != v76[v36] )
          {
            ++v36;
            v34 = 1;
            if ( v36 >= v17 )
              goto LABEL_78;
          }
        }
        if ( !HIDWORD(v70) )
          goto LABEL_80;
        if ( v17 >= 1 )
        {
          v37 = 0;
          while ( HIDWORD(v70) != v76[v37] )
          {
            ++v37;
            v34 = 1;
            if ( v37 >= v17 )
              goto LABEL_78;
          }
LABEL_80:
          v34 = v71;
          if ( v71 )
          {
            v34 = 1;
            if ( v17 >= 1 )
            {
              v40 = 0;
              while ( v71 != v76[v40] )
              {
                ++v40;
                v34 = 1;
                if ( v40 >= v17 )
                  goto LABEL_78;
              }
              v34 = 0;
              if ( !v18 )
                goto LABEL_89;
              goto LABEL_79;
            }
          }
LABEL_78:
          if ( !v18 )
          {
LABEL_89:
            IsLineOfSightClear = 1;
            v39 = 1;
            goto LABEL_90;
          }
LABEL_79:
          IsLineOfSightClear = CWorld::GetIsLineOfSightClear(
                                 (CWorld *)&v72,
                                 (const CVector *)&v74[1],
                                 (const CVector *)((char *)&stderr + 1),
                                 0,
                                 0,
                                 0,
                                 0,
                                 0,
                                 0,
                                 v62);
          v39 = fabsf(v73 - v75) < 1.0;
LABEL_90:
          if ( !(IsLineOfSightClear ^ 1 | v34) && v39 )
          {
            v41 = CPopulation::AddPed();
            v43 = (_DWORD *)v41;
            if ( v41 )
            {
              v76[v17] = v41;
              RadianAngleBetweenPoints = CGeneral::GetRadianAngleBetweenPoints(
                                           (CGeneral *)a4->n64_u32[0],
                                           a4->n64_f32[1],
                                           *(float *)&v72,
                                           *((float *)&v72 + 1),
                                           *(float *)&v58);
              v45 = v43[6];
              v43[343] = RadianAngleBetweenPoints;
              v43[344] = RadianAngleBetweenPoints;
              CVisibilityPlugins::SetClumpAlpha(v45, 0);
              ++v17;
            }
            else
            {
              CPopulation::RemovePed(0, v42);
            }
          }
          goto LABEL_95;
        }
LABEL_77:
        v34 = 1;
        goto LABEL_78;
      }
    }
LABEL_95:
    ++v18;
  }
  while ( v18 != a3 );
  if ( v17 < 1 )
    return 0;
  v46 = &CPedGroups::ms_groups[181 * (__int16)v62];
  v46[175] = (int)&CPedGroupDefaultTaskAllocators::ms_randomAllocator;
  CPedGroupIntelligence::FlushTasks(
    (CPedGroupIntelligence *)&CPedGroupDefaultTaskAllocators::ms_randomAllocator,
    (CPedTaskPair *)(v46 + 135),
    0);
  v47 = (void (__fastcall ***)(_DWORD, _DWORD, _DWORD))v46[175];
  if ( v47 )
    (**v47)(v47, *(_DWORD *)v66, 0);
  v48 = 0;
  v7 = 1;
  do
  {
    v49 = (CPed *)v76[v48];
    if ( v48 )
      CPedGroupMembership::AddFollower(v65, (CPed *)v76[v48]);
    else
      CPedGroupMembership::SetLeader(v65, v49);
    CPedGroupMembership::Process(v65);
    CPedGroupIntelligence::Process(v66);
    v50 = *((_DWORD *)v49 + 272);
    v52 = (CTaskComplexWanderGang *)CTask::operator new((CTask *)&dword_38, v51);
    v53 = rand();
    CTaskComplexWanderGang::CTaskComplexWanderGang(
      v52,
      4,
      (int)(float)((float)((float)v53 * 0.000015259) * 8.0),
      5000,
      1,
      0.5);
    CTaskManager::SetTask((CTaskManager *)(v50 + 4), v52, 4, 0);
    v54 = *((_DWORD *)v49 + 272);
    v56 = (CTaskComplexBeInGroup *)CTask::operator new((CTask *)&word_28, v55);
    CTaskComplexBeInGroup::CTaskComplexBeInGroup(v56, v62, 0);
    CTaskManager::SetTask((CTaskManager *)(v54 + 4), v56, 3, 0);
    ++v48;
  }
  while ( v17 != v48 );
  return v7;
}


// ============================================================

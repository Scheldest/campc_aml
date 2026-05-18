
// Address: 0x19032c
// Original: j__ZN6CCover25FindCoordinatesCoverPointEP11CCoverPointP4CPedR7CVectorS5_
// Demangled: CCover::FindCoordinatesCoverPoint(CCoverPoint *,CPed *,CVector &,CVector &)
// attributes: thunk
int __fastcall CCover::FindCoordinatesCoverPoint(CCover *this, CCoverPoint *a2, CPed *a3, CVector *a4, CVector *a5)
{
  return _ZN6CCover25FindCoordinatesCoverPointEP11CCoverPointP4CPedR7CVectorS5_(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x190d14
// Original: j__ZN6CCover24FindAndReserveCoverPointEP4CPedR7CVectorb
// Demangled: CCover::FindAndReserveCoverPoint(CPed *,CVector &,bool)
// attributes: thunk
int __fastcall CCover::FindAndReserveCoverPoint(CCover *this, CPed *a2, CVector *a3, bool a4)
{
  return _ZN6CCover24FindAndReserveCoverPointEP4CPedR7CVectorb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x193958
// Original: j__ZN6CCover6UpdateEv
// Demangled: CCover::Update(void)
// attributes: thunk
int __fastcall CCover::Update(CCover *this)
{
  return _ZN6CCover6UpdateEv(this);
}


// ============================================================

// Address: 0x1939e4
// Original: j__ZN6CCover13AddCoverPointEiP7CEntityP7CVectorah
// Demangled: CCover::AddCoverPoint(int,CEntity *,CVector *,signed char,uchar)
// attributes: thunk
int __fastcall CCover::AddCoverPoint(
        CCover *this,
        CEntity *a2,
        CEntity *a3,
        CVector *a4,
        signed __int8 a5,
        unsigned __int8 a6)
{
  return _ZN6CCover13AddCoverPointEiP7CEntityP7CVectorah(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x194690
// Original: j__ZN6CCover4InitEv
// Demangled: CCover::Init(void)
// attributes: thunk
int __fastcall CCover::Init(CCover *this)
{
  return _ZN6CCover4InitEv(this);
}


// ============================================================

// Address: 0x197864
// Original: j__ZN6CCover30FindCoverPointsForThisBuildingEP9CBuilding
// Demangled: CCover::FindCoverPointsForThisBuilding(CBuilding *)
// attributes: thunk
int __fastcall CCover::FindCoverPointsForThisBuilding(CCover *this, CBuilding *a2)
{
  return _ZN6CCover30FindCoverPointsForThisBuildingEP9CBuilding(this, a2);
}


// ============================================================

// Address: 0x199050
// Original: j__ZN6CCover31DoesCoverPointStillProvideCoverEP11CCoverPoint7CVector
// Demangled: CCover::DoesCoverPointStillProvideCover(CCoverPoint *,CVector)
// attributes: thunk
int CCover::DoesCoverPointStillProvideCover()
{
  return _ZN6CCover31DoesCoverPointStillProvideCoverEP11CCoverPoint7CVector();
}


// ============================================================

// Address: 0x4d4e58
// Original: _ZN6CCover4InitEv
// Demangled: CCover::Init(void)
char *__fastcall CCover::Init(CCover *this)
{
  int v1; // r1
  char *result; // r0

  CCover::m_NumPoints = 0;
  CPtrListDoubleLink::Flush((CPtrListDoubleLink *)&CCover::m_ListOfProcessedBuildings);
  v1 = 0;
  result = CCover::m_aPoints;
  do
  {
    CCover::m_aPoints[v1] = 0;
    v1 += 28;
  }
  while ( v1 != 2800 );
  return result;
}


// ============================================================

// Address: 0x4d4e90
// Original: _ZN6CCover6UpdateEv
// Demangled: CCover::Update(void)
int __fastcall CCover::Update(CCover *this)
{
  int v1; // r11
  char *v2; // r10
  char *v3; // r1
  char *v4; // r3
  int v5; // r0
  float *v6; // r0
  int v7; // r4
  int v8; // r0
  CPlaceable *v9; // r0
  char *v10; // r9
  char *v11; // r8
  char *v12; // r10
  int v13; // r0
  int v14; // r0
  _DWORD *v15; // r9
  int result; // r0
  int v17; // r6
  int v18; // r4
  _DWORD *v19; // r5
  float32x2_t *v20; // r0
  float32x2_t *v21; // r1
  float32x2_t v22; // d16
  unsigned __int64 v23; // d0
  int *v24; // r5
  int v25; // r4
  int v26; // r6
  int v27; // r11
  int v28; // r8
  float32x2_t *v29; // r0
  float32x2_t *v30; // r1
  float32x2_t v31; // d16
  unsigned __int64 v32; // d0
  _DWORD *v33; // r5
  __int64 v34; // kr00_8
  float32x2_t v35; // d16
  unsigned __int64 v36; // d1
  int i; // r8
  int v38; // r0
  int v39; // r0
  int v40; // r0
  float v41; // s16
  float v42; // s18
  float v43; // s20
  float v44; // s26
  float v45; // r0
  int *v46; // r8
  float v47; // r1
  int v48; // s18
  float v49; // r4
  float v50; // s20
  float v51; // r0
  int v52; // r6
  int v53; // r4
  int v54; // s18
  int v55; // s20
  float v56; // s0
  int v57; // r5
  int v58; // r0
  int v59; // s0
  int v60; // r0
  int v61; // r5
  int v62; // r0
  __int16 **v63; // r6
  __int16 *v64; // r4
  float32x2_t v65; // d16
  unsigned __int64 v66; // d1
  CBuilding *v67; // r1
  unsigned int v69; // r1
  int v70; // r1
  unsigned __int8 v71; // [sp+4h] [bp-94h]
  int v72; // [sp+10h] [bp-88h]
  int v73; // [sp+14h] [bp-84h]
  int v74; // [sp+18h] [bp-80h]
  int v75; // [sp+20h] [bp-78h]
  _DWORD *v76; // [sp+24h] [bp-74h]
  int v77; // [sp+24h] [bp-74h]
  float v78; // [sp+2Ch] [bp-6Ch] BYREF
  float32x2_t v79; // [sp+30h] [bp-68h]
  _BYTE v80[96]; // [sp+38h] [bp-60h] BYREF

  v1 = 0;
  v2 = CCover::m_aPoints;
  v3 = CCover::m_aPoints;
  v4 = CCover::m_aPoints;
  do
  {
    v5 = CCover::m_aPoints[v1];
    switch ( v5 )
    {
      case 1:
        v7 = *(_DWORD *)&v2[v1 + 16];
        if ( v7 )
        {
          v8 = *(_DWORD *)(v7 + 20);
          if ( !v8 )
          {
            v9 = *(CPlaceable **)&v2[v1 + 16];
            v10 = v2;
            v11 = v4;
            v12 = v3;
            CPlaceable::AllocateMatrix(v9);
            CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v7 + 4), *(CMatrix **)(v7 + 20));
            v3 = v12;
            v2 = v10;
            v4 = v11;
            v8 = *(_DWORD *)(v7 + 20);
          }
          if ( *(float *)(v8 + 40) < 0.9 )
          {
            CCover::m_aPoints[v1] = 0;
            --CCover::m_NumPoints;
          }
        }
        else
        {
          v14 = CCover::m_NumPoints;
          CCover::m_aPoints[v1] = 0;
          CCover::m_NumPoints = v14 - 1;
        }
        break;
      case 3:
        if ( !*(_DWORD *)&v3[v1 + 16] )
        {
          v13 = CCover::m_NumPoints;
          CCover::m_aPoints[v1] = 0;
          CCover::m_NumPoints = v13 - 1;
        }
        break;
      case 2:
        v6 = *(float **)&v4[v1 + 16];
        if ( !v6
          || sqrtf((float)((float)(v6[18] * v6[18]) + (float)(v6[19] * v6[19])) + (float)(v6[20] * v6[20])) > 0.01 )
        {
          CCover::m_aPoints[v1] = 0;
          --CCover::m_NumPoints;
        }
        break;
    }
    v1 += 28;
  }
  while ( v1 != 2800 );
  if ( (CTimer::m_FrameCounter & 0x1F) == 0x1A )
  {
    v24 = (int *)CPools::ms_pVehiclePool;
    result = *(_DWORD *)(CPools::ms_pVehiclePool + 8);
    if ( result )
    {
      v25 = 2604 * result;
      v26 = result - 1;
      do
      {
        if ( *(char *)(v24[1] + v26) >= 0 )
        {
          v27 = *v24;
          v28 = *v24 + v25;
          if ( v28 != 2604
            && !*(_DWORD *)(v28 - 1164)
            && sqrtf(
                 (float)((float)(*(float *)(v28 - 2532) * *(float *)(v28 - 2532))
                       + (float)(*(float *)(v28 - 2528) * *(float *)(v28 - 2528)))
               + (float)(*(float *)(v28 - 2524) * *(float *)(v28 - 2524))) < 0.005
            && (*(_BYTE *)(v28 - 1530) & 4) != 0 )
          {
            FindPlayerCoors((int)v80);
            v29 = (float32x2_t *)(v27 - 2600 + v25);
            v30 = (float32x2_t *)v29[2].n64_u32[0];
            if ( v30 )
              v29 = v30 + 6;
            v31.n64_u64[0] = vsub_f32(*(float32x2_t *)v80, (float32x2_t)v29->n64_u64[0]).n64_u64[0];
            v32 = vmul_f32(v31, v31).n64_u64[0];
            if ( sqrtf(*(float *)&v32 + *((float *)&v32 + 1)) < 25.0 )
              CCover::AddCoverPoint((CCover *)((char *)&stderr + 2), (CEntity *)(v28 - 2604), 0, 0, 255, v71);
          }
        }
        --v26;
        v25 -= 2604;
        result = v26 + 1;
      }
      while ( v26 != -1 );
    }
  }
  else if ( (CTimer::m_FrameCounter & 0x1F) == 0x1C )
  {
    v15 = (_DWORD *)CPools::ms_pObjectPool;
    result = *(_DWORD *)(CPools::ms_pObjectPool + 8);
    if ( result )
    {
      v17 = result - 1;
      v18 = 420 * result - 420;
      do
      {
        if ( *(char *)(v15[1] + v17) >= 0 )
        {
          v19 = (_DWORD *)(*v15 + v18);
          if ( v19 )
          {
            if ( *(float *)(v19[5] + 40) > 0.95 && CObject::CanBeUsedToTakeCoverBehind((CObject *)(*v15 + v18)) )
            {
              FindPlayerCoors((int)v80);
              v20 = (float32x2_t *)v19[5];
              v21 = v20 + 6;
              if ( !v20 )
                v21 = (float32x2_t *)(v19 + 1);
              v22.n64_u64[0] = vsub_f32(*(float32x2_t *)v80, (float32x2_t)v21->n64_u64[0]).n64_u64[0];
              v23 = vmul_f32(v22, v22).n64_u64[0];
              if ( sqrtf(*(float *)&v23 + *((float *)&v23 + 1)) < 25.0 )
                CCover::AddCoverPoint((CCover *)((char *)&stderr + 1), (CEntity *)v19, 0, 0, 255, v71);
            }
          }
        }
        --v17;
        v18 -= 420;
        result = v17 + 1;
      }
      while ( v17 != -1 );
    }
  }
  else
  {
    result = CTimer::m_FrameCounter & 7;
    if ( result == 5 )
    {
      v33 = (_DWORD *)CCover::m_ListOfProcessedBuildings;
      if ( CCover::m_ListOfProcessedBuildings )
      {
        do
        {
          v34 = *(_QWORD *)v33;
          v76 = (_DWORD *)v33[1];
          CEntity::GetBoundCentre((CEntity *)v80);
          FindPlayerCoors((int)&v78);
          v35.n64_u64[0] = vsub_f32(*(float32x2_t *)&v80[4], v79).n64_u64[0];
          v36 = vmul_f32(v35, v35).n64_u64[0];
          if ( sqrtf(
                 (float)((float)((float)(*(float *)v80 - v78) * (float)(*(float *)v80 - v78)) + *(float *)&v36)
               + *((float *)&v36 + 1)) >= (float)(*(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v34 + 38)])
                                                                       + 44)
                                                           + 36)
                                                + 30.0) )
          {
            for ( i = 0; i != 2800; i += 28 )
            {
              if ( CCover::m_aPoints[i] && *(_DWORD *)&CCover::m_aPoints[i + 16] == (_DWORD)v34 )
              {
                if ( (_DWORD)v34 )
                  CEntity::CleanUpOldReference((CEntity *)v34, (CEntity **)&CCover::m_aPoints[i + 16]);
                CCover::m_aPoints[i] = 0;
                v38 = CCover::m_NumPoints;
                *(_DWORD *)&CCover::m_aPoints[i + 16] = 0;
                CCover::m_NumPoints = v38 - 1;
              }
            }
            if ( (_DWORD *)CCover::m_ListOfProcessedBuildings == v33 )
              CCover::m_ListOfProcessedBuildings = v33[1];
            v39 = v33[2];
            if ( v39 )
              *(_DWORD *)(v39 + 4) = v33[1];
            v40 = v33[1];
            if ( v40 )
              *(_DWORD *)(v40 + 8) = v33[2];
            CPtrNodeDoubleLink::operator delete(v33);
          }
          v33 = v76;
        }
        while ( v76 );
      }
      result = FindPlayerVehicle(-1, 0);
      if ( !result )
      {
        FindPlayerCoors((int)v80);
        v41 = *(float *)v80;
        FindPlayerCoors((int)v80);
        v42 = *(float *)&v80[4];
        FindPlayerCoors((int)v80);
        v43 = *(float *)v80;
        FindPlayerCoors((int)v80);
        v44 = *(float *)&v80[4] + 30.0;
        v45 = floorf((float)((float)(v41 + -30.0) / 50.0) + 60.0);
        v46 = (int *)(unsigned __int16)CWorld::ms_nCurrentScanCode;
        v47 = (float)((float)(v42 + -30.0) / 50.0) + 60.0;
        v48 = (int)v45;
        v49 = (float)((float)(v43 + 30.0) / 50.0) + 60.0;
        v50 = floorf(v47);
        v51 = v49;
        v52 = v48;
        v53 = 0;
        v54 = (int)v50;
        v55 = (int)floorf(v51);
        v56 = floorf((float)(v44 / 50.0) + 60.0);
        if ( v52 <= 0 )
          v52 = 0;
        v74 = v52;
        v57 = 119;
        if ( v54 > 0 )
          v53 = v54;
        v58 = v55;
        v59 = (int)v56;
        if ( v55 >= 119 )
          v58 = 119;
        v77 = v58;
        if ( v59 < 119 )
          v57 = v59;
        if ( v46 == (int *)((char *)&elf_hash_bucket[16320] + 3) )
        {
          CWorld::ClearScanCodes((CWorld *)((char *)&elf_hash_bucket[16320] + 3));
          result = 1;
        }
        else
        {
          result = (int)v46 + 1;
        }
        CWorld::ms_nCurrentScanCode = result;
        if ( v53 <= v57 )
        {
          v72 = v57;
          while ( 1 )
          {
            v73 = v53;
            if ( v74 <= v77 )
              break;
LABEL_90:
            result = v73 + 1;
            v53 = v73 + 1;
            if ( v73 >= v72 )
              return result;
          }
          v60 = 119;
          if ( v53 < 119 )
            v60 = v53;
          v61 = v74;
          v75 = 120 * v60;
          while ( 1 )
          {
            v62 = 119;
            if ( v61 < 119 )
              v62 = v61;
            v63 = (__int16 **)CWorld::ms_aSectors[2 * v62 + 2 * v75];
            if ( v63 )
              break;
LABEL_87:
            if ( v61++ >= v77 )
              goto LABEL_90;
          }
          while ( 1 )
          {
            v64 = *v63;
            if ( (*v63)[24] != CWorld::ms_nCurrentScanCode )
            {
              v64[24] = CWorld::ms_nCurrentScanCode;
              CEntity::GetBoundCentre((CEntity *)v80);
              FindPlayerCoors((int)&v78);
              v65.n64_u64[0] = vsub_f32(*(float32x2_t *)&v80[4], v79).n64_u64[0];
              v66 = vmul_f32(v65, v65).n64_u64[0];
              if ( sqrtf(
                     (float)((float)((float)(*(float *)v80 - v78) * (float)(*(float *)v80 - v78)) + *(float *)&v66)
                   + *((float *)&v66 + 1)) < (float)(*(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v64[19]])
                                                                          + 44)
                                                              + 36)
                                                   + 30.0)
                && !CPtrList::IsMemberOfList((CPtrList *)&CCover::m_ListOfProcessedBuildings, v64) )
              {
                break;
              }
            }
            v63 = (__int16 **)v63[1];
            if ( !v63 )
              goto LABEL_87;
          }
          CCover::FindCoverPointsForThisBuilding((CCover *)v64, v67);
          result = CPtrNodeDoubleLink::operator new((CPtrNodeDoubleLink *)&byte_9[3], v69);
          *(_DWORD *)result = v64;
          *(_DWORD *)(result + 8) = 0;
          v70 = CCover::m_ListOfProcessedBuildings;
          *(_DWORD *)(result + 4) = CCover::m_ListOfProcessedBuildings;
          if ( v70 )
            *(_DWORD *)(v70 + 8) = result;
          CCover::m_ListOfProcessedBuildings = result;
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x4d5614
// Original: _ZN6CCover13AddCoverPointEiP7CEntityP7CVectorah
// Demangled: CCover::AddCoverPoint(int,CEntity *,CVector *,signed char,uchar)
int __fastcall CCover::AddCoverPoint(
        int this,
        CEntity *a2,
        CEntity *a3,
        CVector *a4,
        signed __int8 a5,
        unsigned __int8 a6)
{
  float v6; // s4
  float32x2_t v7; // d16
  int v9; // lr
  CEntity **v10; // r5
  int v11; // r2
  int v12; // r6
  bool v13; // zf
  CEntity *v14; // r6
  int v15; // r4
  float32x2_t v16; // d17
  unsigned __int64 v17; // d4
  float v18; // s6
  int *v19; // r5
  int v20; // r2
  bool v21; // zf
  __int64 v22; // d16

  v9 = CCover::m_NumPoints;
  if ( CCover::m_NumPoints > 99 )
    return this;
  v10 = (CEntity **)&dword_9FC958;
  v11 = -1;
  do
  {
    v12 = *((char *)v10 - 16);
    if ( v12 == this )
    {
      if ( this == 3 )
      {
        if ( *(float *)a3 == *((float *)v10 - 3)
          && *((float *)a3 + 1) == *((float *)v10 - 2)
          && *((float *)a3 + 2) == *((float *)v10 - 1) )
        {
          return this;
        }
      }
      else
      {
        v13 = this == 2;
        if ( this != 2 )
          v13 = this == 1;
        if ( v13 && *v10 == a2 )
          return this;
      }
    }
    if ( (_BYTE)v12 )
    {
      v14 = a3;
      if ( !a3 )
      {
        if ( !a2 )
        {
LABEL_16:
          v16.n64_u64[0] = vsub_f32(*((float32x2_t *)v10 - 1), v7).n64_u64[0];
          v17 = vmul_f32(v16, v16).n64_u64[0];
          v18 = sqrtf(
                  (float)((float)((float)(*((float *)v10 - 3) - v6) * (float)(*((float *)v10 - 3) - v6)) + *(float *)&v17)
                + *((float *)&v17 + 1));
          if ( v18 < 0.8 || v18 < 2.0 && (unsigned int)(unsigned __int8)(*((_BYTE *)v10 - 14) - a5) - 32 > 0xBF )
            return this;
          goto LABEL_19;
        }
        v15 = *((_DWORD *)a2 + 5);
        v14 = (CEntity *)(v15 + 48);
        if ( !v15 )
          v14 = (CEntity *)((char *)a2 + 4);
      }
      v7.n64_u64[0] = *(unsigned __int64 *)((char *)v14 + 4);
      v6 = *(float *)v14;
      goto LABEL_16;
    }
LABEL_19:
    ++v11;
    v10 += 7;
  }
  while ( v11 < 99 );
  v19 = &dword_9FC93C;
  do
  {
    v20 = *((unsigned __int8 *)v19 + 12);
    v19 += 7;
  }
  while ( v20 );
  *((_BYTE *)v19 - 15) = (_BYTE)a4;
  *((_BYTE *)v19 - 14) = a5;
  *((_BYTE *)v19 - 16) = this;
  CCover::m_NumPoints = v9 + 1;
  this = 0;
  *v19 = (int)a2;
  v19[1] = 0;
  v19[2] = 0;
  if ( a2 )
  {
    this = *((_BYTE *)a2 + 58) & 7;
    v21 = this == 1;
    if ( this == 1 )
    {
      this = *((unsigned __int16 *)a2 + 28);
      v21 = this == 0;
    }
    if ( !v21 )
      this = CEntity::RegisterReference(a2, (CEntity **)v19);
  }
  if ( a3 )
  {
    v22 = *(_QWORD *)a3;
    this = *((_DWORD *)a3 + 2);
    *(v19 - 1) = this;
    *(_QWORD *)(v19 - 3) = v22;
  }
  return this;
}


// ============================================================

// Address: 0x4d579c
// Original: _ZN6CCover43ShouldThisBuildingHaveItsCoverPointsCreatedEP9CBuilding
// Demangled: CCover::ShouldThisBuildingHaveItsCoverPointsCreated(CBuilding *)
bool __fastcall CCover::ShouldThisBuildingHaveItsCoverPointsCreated(CCover *this, CBuilding *a2)
{
  float32x2_t v3; // d16
  unsigned __int64 v4; // d1
  float v6; // [sp+0h] [bp-20h] BYREF
  float32x2_t v7; // [sp+4h] [bp-1Ch]
  float v8; // [sp+Ch] [bp-14h] BYREF
  float32x2_t v9; // [sp+10h] [bp-10h]

  CEntity::GetBoundCentre((CEntity *)&v8);
  FindPlayerCoors((int)&v6);
  v3.n64_u64[0] = vsub_f32(v9, v7).n64_u64[0];
  v4 = vmul_f32(v3, v3).n64_u64[0];
  return sqrtf((float)((float)((float)(v8 - v6) * (float)(v8 - v6)) + *(float *)&v4) + *((float *)&v4 + 1)) < (float)(*(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]) + 44) + 36) + 30.0);
}


// ============================================================

// Address: 0x4d5814
// Original: _ZN6CCover30RemoveCoverPointsForThisEntityEP7CEntity
// Demangled: CCover::RemoveCoverPointsForThisEntity(CEntity *)
CCover *__fastcall CCover::RemoveCoverPointsForThisEntity(CCover *this, CEntity *a2)
{
  int i; // r8
  CCover *result; // r0

  for ( i = 0; i != 2800; i += 28 )
  {
    result = (CCover *)(unsigned __int8)CCover::m_aPoints[i];
    if ( CCover::m_aPoints[i] )
    {
      result = *(CCover **)&CCover::m_aPoints[i + 16];
      if ( result == this )
      {
        if ( this )
          CEntity::CleanUpOldReference(this, (CEntity **)&CCover::m_aPoints[i + 16]);
        CCover::m_aPoints[i] = 0;
        *(_DWORD *)&CCover::m_aPoints[i + 16] = 0;
        result = (CCover *)--CCover::m_NumPoints;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x4d5894
// Original: _ZN6CCover30FindCoverPointsForThisBuildingEP9CBuilding
// Demangled: CCover::FindCoverPointsForThisBuilding(CBuilding *)
int __fastcall CCover::FindCoverPointsForThisBuilding(CCover *this, CBuilding *a2)
{
  int v3; // r1
  int result; // r0
  CBaseModelInfo *v5; // r5
  int v6; // r9
  int v7; // r6
  int v8; // r8
  const CVector *v9; // r1
  float v10; // r0
  float v11; // s2
  unsigned __int8 v12; // [sp+4h] [bp-5Ch]
  CSimpleTransform *v13; // [sp+8h] [bp-58h]
  _BYTE v14[12]; // [sp+Ch] [bp-54h] BYREF
  _DWORD v15[3]; // [sp+18h] [bp-48h] BYREF
  __int64 v16; // [sp+24h] [bp-3Ch]
  int v17; // [sp+2Ch] [bp-34h]

  v3 = *((__int16 *)this + 19);
  result = (int)CModelInfo::ms_modelInfoPtrs;
  v5 = (CBaseModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[v3]);
  v6 = *((unsigned __int8 *)v5 + 35);
  if ( *((_BYTE *)v5 + 35) )
  {
    v7 = 0;
    v13 = (CCover *)((char *)this + 4);
    do
    {
      v8 = CBaseModelInfo::Get2dEffect(v5, v7);
      result = *(unsigned __int8 *)(v8 + 12);
      if ( result == 9 )
      {
        v16 = *(_QWORD *)(v8 + 16);
        v17 = 0;
        v9 = (const CVector *)*((_DWORD *)this + 5);
        if ( !v9 )
        {
          CPlaceable::AllocateMatrix(this);
          CSimpleTransform::UpdateMatrix(v13, *((CMatrix **)this + 5));
          v9 = (const CVector *)*((_DWORD *)this + 5);
        }
        Multiply3x3((const CMatrix *)v15, v9);
        v10 = atan2f(COERCE_FLOAT(v15[0] ^ 0x80000000), *(float *)&v15[1]);
        v11 = v10 + 6.2832;
        if ( v10 > 0.0 )
          v11 = v10;
        if ( !*((_DWORD *)this + 5) )
        {
          CPlaceable::AllocateMatrix(this);
          CSimpleTransform::UpdateMatrix(v13, *((CMatrix **)this + 5));
        }
        operator*();
        result = CCover::AddCoverPoint(
                   (CCover *)((char *)&stderr + 3),
                   this,
                   (CEntity *)v14,
                   (CVector *)*(char *)(v8 + 24),
                   (unsigned int)(float)((float)(v11 * 255.0) / 6.2832),
                   v12);
      }
      ++v7;
    }
    while ( v6 != v7 );
  }
  return result;
}


// ============================================================

// Address: 0x4d598c
// Original: _ZN6CCover17FindDirFromVectorE7CVector
// Demangled: CCover::FindDirFromVector(CVector)
unsigned int __fastcall CCover::FindDirFromVector(int a1, float a2)
{
  float v2; // r0
  float v3; // s4

  v2 = atan2f(COERCE_FLOAT(a1 ^ 0x80000000), a2);
  v3 = v2 + 6.2832;
  if ( v2 > 0.0 )
    v3 = v2;
  return (unsigned int)(float)((float)(v3 * 255.0) / 6.2832);
}


// ============================================================

// Address: 0x4d59d0
// Original: _ZN6CCover34FindVectorFromFirstToMissingVertexEP12CColTrianglePiP7CVector
// Demangled: CCover::FindVectorFromFirstToMissingVertex(CColTriangle *,int *,CVector *)
float *__fastcall CCover::FindVectorFromFirstToMissingVertex(float *result, int *a2, int *a3, int a4)
{
  int v4; // r12
  int v5; // lr
  bool v6; // zf
  bool v7; // zf
  float *v8; // r1
  float v9; // s0
  float v10; // s2
  float v11; // s4
  float *v12; // r1
  float v13; // s2
  float v14; // s4

  v4 = *a3;
  v5 = *a2;
  v6 = *a2 == *a3;
  if ( *a2 != *a3 )
    v6 = v5 == a3[1];
  if ( v6 )
  {
    v5 = a2[1];
    v7 = v5 == v4;
    if ( v5 != v4 )
      v7 = v5 == a3[1];
    if ( v7 )
      v5 = a2[2];
  }
  v8 = (float *)(a4 + 12 * v4);
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = (float *)(a4 + 12 * v5);
  v13 = v12[1] - v10;
  v14 = v12[2] - v11;
  *result = *v12 - v9;
  result[1] = v13;
  result[2] = v14;
  return result;
}


// ============================================================

// Address: 0x4d5a3a
// Original: _ZN6CCover23CalculateHorizontalSizeEP12CColTriangleP7CVector
// Demangled: CCover::CalculateHorizontalSize(CColTriangle *,CVector *)
float __fastcall CCover::CalculateHorizontalSize(_DWORD *a1, int a2)
{
  float32x2_t v2; // d17
  float32x2_t v3; // d16
  unsigned __int64 v4; // d0

  v2.n64_u64[0] = *(unsigned __int64 *)(a2 + 12 * a1[2]);
  v3.n64_u64[0] = vsub_f32(
                    vmax_f32(vmax_f32(*(float32x2_t *)(a2 + 12 * *a1), *(float32x2_t *)(a2 + 12 * a1[1])), v2),
                    vmin_f32(vmin_f32(*(float32x2_t *)(a2 + 12 * *a1), *(float32x2_t *)(a2 + 12 * a1[1])), v2)).n64_u64[0];
  v4 = vmul_f32(v3, v3).n64_u64[0];
  return sqrtf(*(float *)&v4 + *((float *)&v4 + 1));
}


// ============================================================

// Address: 0x4d5a8a
// Original: _ZN6CCover18Find2HighestPointsEP12CColTriangleP7CVectorRiS4_
// Demangled: CCover::Find2HighestPoints(CColTriangle *,CVector *,int &,int &)
int __fastcall CCover::Find2HighestPoints(int *a1, int a2, _DWORD *a3, int *a4)
{
  int v4; // lr
  int v5; // r4
  int *v6; // r12
  float v7; // s0
  float v8; // s2
  int *v9; // r5
  int *v10; // r0
  int v11; // t1
  int result; // r0

  v4 = *a1;
  v6 = a1 + 1;
  v5 = a1[1];
  v7 = *(float *)(a2 + 12 * v5 + 8);
  v8 = *(float *)(a2 + 12 * *a1 + 8);
  if ( v8 >= v7 || (v9 = a1 + 2, v8 >= *(float *)(a2 + 12 * a1[2] + 8)) )
  {
    if ( v7 >= v8 || (v11 = a1[2], v10 = a1 + 2, v7 >= *(float *)(a2 + 12 * v11 + 8)) )
    {
      v5 = v4;
      v9 = v6;
    }
    else
    {
      v5 = v4;
      v9 = v10;
    }
  }
  *a3 = v5;
  result = *v9;
  *a4 = *v9;
  return result;
}


// ============================================================

// Address: 0x4d5b14
// Original: _ZN6CCover23DoLineCheckWithinObjectEP12CColTriangleiP7CVectorS3_S2_S2_
// Demangled: CCover::DoLineCheckWithinObject(CColTriangle *,int,CVector *,CVector *,CVector,CVector)
int __fastcall CCover::DoLineCheckWithinObject(
        int a1,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10)
{
  float *v12; // r6
  _DWORD *v13; // r5
  int v14; // r8
  float v15; // s14
  float v16; // s3
  float *v17; // r0
  float v18; // s0
  float v19; // s4
  float v20; // s2
  float v21; // s8
  float v22; // s6
  float v23; // s6
  float v24; // s6
  float v25; // s17
  float v26; // s30
  float v27; // s19
  float v28; // s27
  float v29; // s29
  float v30; // s31
  float v31; // s21
  float *v32; // r0
  float v33; // s23
  float v34; // s25
  float v35; // s4
  float v36; // s8
  float v37; // s21
  float *v38; // r0
  float v39; // s4
  float v40; // s8
  float v42; // [sp+10h] [bp-78h] BYREF
  float v43; // [sp+14h] [bp-74h]
  float v44; // [sp+18h] [bp-70h]
  float v45; // [sp+1Ch] [bp-6Ch] BYREF
  float v46; // [sp+20h] [bp-68h]
  float v47; // [sp+24h] [bp-64h]

  if ( a2 < 1 )
    return 0;
  v12 = (float *)(a4 + 4);
  v13 = (_DWORD *)(a1 + 4);
  v14 = 0;
  while ( 1 )
  {
    v15 = *(v12 - 1);
    v16 = v12[1];
    v17 = (float *)(a3 + 12 * *(v13 - 1));
    v18 = *v17;
    v19 = v17[1];
    v20 = v17[2];
    v21 = (float)((float)((float)(a8 - *v17) * v15) + (float)((float)(a9 - v19) * *v12))
        + (float)((float)(a10 - v20) * v16);
    v22 = (float)((float)((float)(a5 - *v17) * v15) + (float)((float)(a6 - v19) * *v12))
        + (float)((float)(a7 - v20) * v16);
    if ( (float)(v22 * v21) < 0.0 )
    {
      v23 = fabsf(v22);
      v24 = v23 / (float)(v23 + fabsf(v21));
      v25 = (float)(v24 * a9) + (float)((float)(1.0 - v24) * a6);
      v26 = (float)(v24 * a8) + (float)((float)(1.0 - v24) * a5);
      v27 = (float)(v24 * a10) + (float)((float)(1.0 - v24) * a7);
      v43 = v25 - v19;
      v42 = v26 - v18;
      v44 = v27 - v20;
      CrossProduct((const CVector *)&v45, (const CVector *)&v42);
      v28 = *(v12 - 1);
      v29 = *v12;
      v30 = v12[1];
      v31 = v45;
      v32 = (float *)(a3 + 12 * *v13);
      v33 = v46;
      v34 = v47;
      v35 = v32[2];
      v36 = v26 - *v32;
      v43 = v25 - v32[1];
      v42 = v36;
      v44 = v27 - v35;
      CrossProduct((const CVector *)&v45, (const CVector *)&v42);
      v37 = (float)((float)(v31 * v28) + (float)(v33 * v29)) + (float)(v34 * v30);
      if ( (float)(v37 * (float)((float)((float)(v45 * *(v12 - 1)) + (float)(v46 * *v12)) + (float)(v47 * v12[1]))) > 0.0 )
      {
        v38 = (float *)(a3 + 12 * v13[1]);
        v39 = v38[2];
        v40 = v26 - *v38;
        v43 = v25 - v38[1];
        v42 = v40;
        v44 = v27 - v39;
        CrossProduct((const CVector *)&v45, (const CVector *)&v42);
        if ( (float)(v37 * (float)((float)((float)(v45 * *(v12 - 1)) + (float)(v46 * *v12)) + (float)(v47 * v12[1]))) > 0.0 )
          break;
      }
    }
    ++v14;
    v12 += 3;
    v13 += 4;
    if ( v14 >= a2 )
      return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x4d5e00
// Original: _ZN6CCover24FindAndReserveCoverPointEP4CPedR7CVectorb
// Demangled: CCover::FindAndReserveCoverPoint(CPed *,CVector &,bool)
char *__fastcall CCover::FindAndReserveCoverPoint(CCover *this, CPed *a2, CVector *a3, bool a4)
{
  float v4; // s26
  float v5; // s28
  float v6; // s30
  float v8; // s16
  int v9; // r4
  int v10; // r9
  int v11; // r1
  int v12; // r0
  int v13; // r2
  int v14; // r3
  float *v15; // r1
  float v16; // r5
  float v17; // s25
  float v18; // s2
  float v19; // s6
  float v20; // s21
  float v21; // s17
  float v22; // s19
  int v23; // r1
  float *v24; // r0
  float v25; // s4
  float v26; // s0
  bool v27; // r1
  bool v28; // zf
  int v29; // r0
  char *v30; // r5
  CEntity **v31; // r1
  CCover *v32; // r2
  char *v33; // r1
  CCover *v34; // r0
  CCover *v35; // t1
  int v38; // [sp+Ch] [bp-84h]

  v38 = -1;
  v8 = 100000.0;
  v9 = 0;
  v10 = 0;
  do
  {
    v11 = CCover::m_aPoints[v9];
    v12 = (unsigned __int8)v11;
    if ( (unsigned int)(v11 - 1) <= 2 && !*(_DWORD *)&CCover::m_aPoints[v9 + 16] )
    {
      v12 = 0;
      CCover::m_aPoints[v9] = 0;
      --CCover::m_NumPoints;
    }
    if ( v12 )
    {
      if ( (char)v12 == 2 )
      {
        if ( *(_DWORD *)&CCover::m_aPoints[v9 + 20] && !*(_DWORD *)&CCover::m_aPoints[v9 + 24] )
          goto LABEL_31;
      }
      else
      {
        if ( *(_DWORD *)&CCover::m_aPoints[v9 + 20] )
          goto LABEL_31;
        if ( (unsigned int)((char)v12 - 1) >= 2 )
        {
          if ( (char)v12 != 3 )
            goto LABEL_15;
          v15 = (float *)&CCover::m_aPoints[v9 + 4];
LABEL_14:
          v4 = *v15;
          v5 = v15[1];
          v6 = v15[2];
LABEL_15:
          if ( v12 != 3
            || (v16 = (float)(unsigned __int8)CCover::m_aPoints[v9 + 2] * 0.024544,
                v17 = sinf(v16),
                v18 = *((float *)a2 + 1),
                v19 = *(float *)&CCover::m_aPoints[v9 + 8],
                v20 = *(float *)a2 - *(float *)&CCover::m_aPoints[v9 + 4],
                v21 = *((float *)a2 + 2),
                v22 = *(float *)&CCover::m_aPoints[v9 + 12],
                (float)((float)((float)(cosf(v16) * (float)(v18 - v19)) - (float)(v17 * v20))
                      + (float)((float)(v21 - v22) * 0.0)) > 0.0) )
          {
            v23 = *((_DWORD *)this + 5);
            v24 = (float *)(v23 + 48);
            if ( !v23 )
              v24 = (float *)((char *)this + 4);
            if ( fabsf(v24[2] - v6) < 4.0 )
            {
              v25 = v24[1];
              v26 = sqrtf((float)((float)(*v24 - v4) * (float)(*v24 - v4)) + (float)((float)(v25 - v5)
                                                                                   * (float)(v25 - v5)));
              if ( v26 < 15.0 )
              {
                if ( a3 )
                {
                  v27 = sqrtf(
                          (float)((float)(v4 - *(float *)a2) * (float)(v4 - *(float *)a2))
                        + (float)((float)(v5 - *((float *)a2 + 1)) * (float)(v5 - *((float *)a2 + 1)))) < (float)(sqrtf((float)((float)(*v24 - *(float *)a2) * (float)(*v24 - *(float *)a2)) + (float)((float)(v25 - *((float *)a2 + 1)) * (float)(v25 - *((float *)a2 + 1)))) + 4.0);
                  v28 = v26 >= v8 || !v27;
                  if ( v26 < v8 && v27 )
                    v8 = v26;
                  v29 = v38;
                  if ( !v28 )
                    v29 = v10;
                  v38 = v29;
                }
                else if ( v26 < v8 )
                {
                  v8 = v26;
                  v38 = v10;
                }
              }
            }
          }
          goto LABEL_31;
        }
      }
      v13 = *(_DWORD *)&CCover::m_aPoints[v9 + 16];
      v14 = *(_DWORD *)(v13 + 20);
      v15 = (float *)(v14 + 48);
      if ( !v14 )
        v15 = (float *)(v13 + 4);
      goto LABEL_14;
    }
LABEL_31:
    v9 += 28;
    ++v10;
  }
  while ( v9 != 2800 );
  if ( v38 <= -1 )
    return 0;
  v30 = &CCover::m_aPoints[28 * v38];
  v31 = (CEntity **)(v30 + 20);
  v32 = (CCover *)*((_DWORD *)v30 + 5);
  if ( v32 != this )
  {
    if ( !v32
      || (v33 = &CCover::m_aPoints[28 * v38],
          v35 = (CCover *)*((_DWORD *)v33 + 6),
          v31 = (CEntity **)(v33 + 24),
          v34 = v35,
          v35 != this)
      && !v34 )
    {
      *v31 = this;
      CEntity::RegisterReference(this, v31);
    }
  }
  return v30;
}


// ============================================================

// Address: 0x4d60e8
// Original: _ZN6CCover28RemoveCoverPointIfEntityLostEP11CCoverPoint
// Demangled: CCover::RemoveCoverPointIfEntityLost(CCoverPoint *)
char *__fastcall CCover::RemoveCoverPointIfEntityLost(char *result)
{
  if ( (unsigned int)(*result - 1) <= 2 && !*((_DWORD *)result + 4) )
  {
    *result = 0;
    return (char *)--CCover::m_NumPoints;
  }
  return result;
}


// ============================================================

// Address: 0x4d6140
// Original: _ZN6CCover17FindVectorFromDirEh
// Demangled: CCover::FindVectorFromDir(uchar)
float __fastcall CCover::FindVectorFromDir(CCover *this, unsigned int a2)
{
  float v3; // r5
  float result; // r0

  *((_DWORD *)this + 2) = 0;
  v3 = (float)a2 * 0.024544;
  *(_DWORD *)this = COERCE_UNSIGNED_INT(sinf(v3)) ^ 0x80000000;
  result = cosf(v3);
  *((float *)this + 1) = result;
  return result;
}


// ============================================================

// Address: 0x4d61a0
// Original: _ZN6CCover25FindCoordinatesCoverPointEP11CCoverPointP4CPedR7CVectorS5_
// Demangled: CCover::FindCoordinatesCoverPoint(CCoverPoint *,CPed *,CVector &,CVector &)
int __fastcall CCover::FindCoordinatesCoverPoint(CCover *this, CCoverPoint *a2, CPed *a3, CVector *a4, CVector *a5)
{
  float32x2_t v5; // d8
  float32x2_t v6; // d9
  CCoverPoint *v9; // r1
  bool v10; // zf
  int result; // r0
  int v12; // r1
  int v13; // r5
  float v14; // s0
  float v15; // s2
  float *v16; // r6
  float *v17; // r2
  int v18; // r1
  int v19; // r1
  float v20; // s6
  float v21; // s0
  int v22; // r0
  float v23; // s0
  float v24; // s4
  float v25; // s2
  __int64 v26; // d16
  int v27; // r0
  int v28; // r0
  float *v29; // r1
  float *v30; // r0
  float v31; // [sp+18h] [bp-168h] BYREF
  float v32; // [sp+1Ch] [bp-164h] BYREF
  float v33; // [sp+20h] [bp-160h]
  float v34; // [sp+28h] [bp-158h] BYREF
  float v35; // [sp+2Ch] [bp-154h]

  v9 = (CCoverPoint *)*((_DWORD *)this + 5);
  v10 = v9 == a2;
  if ( v9 != a2 )
    v10 = *((_DWORD *)this + 6) == (_DWORD)a2;
  if ( !v10 )
    return 0;
  v12 = *(char *)this;
  if ( v12 == 3 )
  {
    v26 = *(_QWORD *)((char *)this + 4);
    v27 = *((_DWORD *)this + 3);
    goto LABEL_24;
  }
  if ( v12 == 2 )
  {
    if ( !*((_DWORD *)this + 4) )
      return 0;
    CPointList::Empty((CPointList *)&v31);
    CFormation::FindCoverPointsBehindBox();
    if ( LODWORD(v31) != 2 )
      return 0;
    v28 = *((_DWORD *)a2 + 5);
    v29 = (float *)(v28 + 48);
    if ( !v28 )
      v29 = (float *)((char *)a2 + 4);
    if ( sqrtf((float)((float)(v32 - *v29) * (float)(v32 - *v29)) + (float)((float)(v33 - v29[1]) * (float)(v33 - v29[1]))) < sqrtf((float)((float)(v34 - *v29) * (float)(v34 - *v29)) + (float)((float)(v35 - v29[1]) * (float)(v35 - v29[1]))) )
      v30 = &v32;
    else
      v30 = &v34;
    v26 = *(_QWORD *)v30;
    v27 = *((_DWORD *)v30 + 2);
LABEL_24:
    *((_DWORD *)a4 + 2) = v27;
    *(_QWORD *)a4 = v26;
    return 1;
  }
  if ( v12 != 1 )
    return 0;
  v13 = *((_DWORD *)this + 4);
  result = 0;
  if ( v13 )
  {
    v14 = *(float *)a3;
    v15 = *((float *)a3 + 1);
    v16 = (float *)(v13 + 4);
    v17 = (float *)(v13 + 4);
    v18 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v13 + 38)]) + 44);
    v5.n64_u32[0] = *(_DWORD *)(v18 + 12);
    v6.n64_u32[0] = *(_DWORD *)(v18 + 16);
    v19 = *(_DWORD *)(v13 + 20);
    if ( v19 )
      v17 = (float *)(v19 + 48);
    v20 = v17[1];
    v21 = v14 - *v17;
    v33 = 0.0;
    v32 = v15 - v20;
    v31 = v21;
    CVector::Normalise((CVector *)&v31);
    v22 = *(_DWORD *)(v13 + 20);
    v23 = vmax_f32(v5, v6).n64_f32[0] + 0.4;
    if ( v22 )
      v16 = (float *)(v22 + 48);
    v24 = v16[1] - (float)(v23 * v32);
    v25 = v16[2] - (float)(v23 * v33);
    *(float *)a4 = *v16 - (float)(v23 * v31);
    *((float *)a4 + 1) = v24;
    *((float *)a4 + 2) = v25;
    return 1;
  }
  return result;
}


// ============================================================

// Address: 0x4d638c
// Original: _ZN6CCover31DoesCoverPointStillProvideCoverEP11CCoverPoint7CVector
// Demangled: CCover::DoesCoverPointStillProvideCover(CCoverPoint *,CVector)
bool __fastcall CCover::DoesCoverPointStillProvideCover(char *a1, float a2, float a3, float a4)
{
  int v8; // r1
  int v9; // r0
  float v10; // r5
  float v11; // r0
  float v12; // s2
  float v13; // s16
  float v14; // s18

  if ( !a1 )
    return 0;
  v8 = *a1;
  v9 = (unsigned __int8)v8;
  if ( (unsigned int)(v8 - 1) > 2 || *((_DWORD *)a1 + 4) )
  {
    if ( !(_BYTE)v8 )
      return 0;
  }
  else
  {
    *a1 = 0;
    --CCover::m_NumPoints;
    v9 = (unsigned __int8)*a1;
    if ( !*a1 )
      return 0;
  }
  if ( v9 != 3 )
    return 1;
  v10 = (float)(unsigned __int8)a1[2] * 0.024544;
  v11 = sinf(v10);
  v12 = *((float *)a1 + 2);
  v13 = *((float *)a1 + 3);
  v14 = a2 - *((float *)a1 + 1);
  return (float)((float)((float)(cosf(v10) * (float)(a3 - v12)) - (float)(v11 * v14)) + (float)((float)(a4 - v13) * 0.0)) > 0.0;
}


// ============================================================

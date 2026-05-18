
// Address: 0x1933ac
// Original: j__ZN35CTaskComplexFollowLeaderInFormationC2EP9CPedGroupP4CPedRK7CVectorf
// Demangled: CTaskComplexFollowLeaderInFormation::CTaskComplexFollowLeaderInFormation(CPedGroup *,CPed *,CVector const&,float)
// attributes: thunk
void __fastcall CTaskComplexFollowLeaderInFormation::CTaskComplexFollowLeaderInFormation(
        CTaskComplexFollowLeaderInFormation *this,
        CPedGroup *a2,
        CPed *a3,
        const CVector *a4,
        float a5)
{
  _ZN35CTaskComplexFollowLeaderInFormationC2EP9CPedGroupP4CPedRK7CVectorf(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x5447a0
// Original: _ZN35CTaskComplexFollowLeaderInFormationC2EP9CPedGroupP4CPediif
// Demangled: CTaskComplexFollowLeaderInFormation::CTaskComplexFollowLeaderInFormation(CPedGroup *,CPed *,int,int,float)
void __fastcall CTaskComplexFollowLeaderInFormation::CTaskComplexFollowLeaderInFormation(
        CTaskComplexFollowLeaderInFormation *this,
        CPedGroup *a2,
        CPed *a3,
        int a4,
        int a5,
        float a6)
{
  int v10; // r0
  int *v11; // r2
  int v12; // r0

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 8) = 4;
  *((float *)this + 9) = a6;
  *(_DWORD *)this = &off_66D2DC;
  *((_DWORD *)this + 4) = a3;
  if ( a4 == 1 )
  {
    v10 = a5 + 1;
    if ( (unsigned int)(a5 + 1) < 3 )
    {
      v11 = dword_54483C;
      goto LABEL_8;
    }
    goto LABEL_9;
  }
  if ( a4 )
  {
    if ( a4 == -1 )
    {
      v10 = a5 + 1;
      if ( (unsigned int)(a5 + 1) < 3 )
      {
        v11 = dword_544848;
LABEL_8:
        v12 = v11[v10];
        goto LABEL_14;
      }
    }
LABEL_9:
    v12 = 0;
    goto LABEL_14;
  }
  v12 = a5;
  if ( a5 != 1 )
    v12 = 0;
  if ( a5 == -1 )
    v12 = 6;
LABEL_14:
  *((_DWORD *)this + 5) = CTaskComplexFollowLeaderInFormation::ms_offsets[2 * v12];
  *((_DWORD *)this + 6) = CTaskComplexFollowLeaderInFormation::ms_offsets[2 * v12 + 1];
  *((_DWORD *)this + 7) = 0;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x544858
// Original: _ZN35CTaskComplexFollowLeaderInFormationC2EP9CPedGroupP4CPedRK7CVectorf
// Demangled: CTaskComplexFollowLeaderInFormation::CTaskComplexFollowLeaderInFormation(CPedGroup *,CPed *,CVector const&,float)
void __fastcall CTaskComplexFollowLeaderInFormation::CTaskComplexFollowLeaderInFormation(
        CTaskComplexFollowLeaderInFormation *this,
        CPedGroup *a2,
        CPed *a3,
        const CVector *a4,
        float a5)
{
  __int64 v9; // d16

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 3) = a2;
  *(_DWORD *)this = &off_66D2DC;
  *((_DWORD *)this + 4) = a3;
  v9 = *(_QWORD *)a4;
  *((_DWORD *)this + 7) = *((_DWORD *)a4 + 2);
  *((_DWORD *)this + 8) = 4;
  *((float *)this + 9) = a5;
  *(_QWORD *)((char *)this + 20) = v9;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x5448b0
// Original: _ZN35CTaskComplexFollowLeaderInFormationD2Ev
// Demangled: CTaskComplexFollowLeaderInFormation::~CTaskComplexFollowLeaderInFormation()
void __fastcall CTaskComplexFollowLeaderInFormation::~CTaskComplexFollowLeaderInFormation(
        CTaskComplexFollowLeaderInFormation *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66D2DC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5448dc
// Original: _ZN35CTaskComplexFollowLeaderInFormationD0Ev
// Demangled: CTaskComplexFollowLeaderInFormation::~CTaskComplexFollowLeaderInFormation()
void __fastcall CTaskComplexFollowLeaderInFormation::~CTaskComplexFollowLeaderInFormation(
        CTaskComplexFollowLeaderInFormation *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66D2DC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x544910
// Original: _ZN35CTaskComplexFollowLeaderInFormation17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFollowLeaderInFormation::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexFollowLeaderInFormation::CreateNextSubTask(
        CTaskComplexFollowLeaderInFormation *this,
        CPed *a2)
{
  unsigned int v4; // r5
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r4
  CEntity *v9; // r6
  char v10; // r3
  __int64 v11; // d16

  v4 = *(_DWORD *)(*((_DWORD *)this + 4) + 1104);
  v5 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v7 = 0;
  if ( v5 >= 704 )
  {
    if ( v5 != 704 )
    {
      v6 = 709;
      if ( v5 != 709 )
      {
        v6 = 907;
        if ( v5 != 907 )
          return v7;
        if ( v4 <= 1 )
        {
          v7 = CTask::operator new((CTask *)&dword_20, 0x38Bu);
          CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v7, 500, 0, 0, 8.0);
          return v7;
        }
      }
    }
LABEL_12:
    v7 = CTask::operator new((CTask *)&dword_58, v6);
    v9 = (CEntity *)*((_DWORD *)this + 4);
    CTaskComplex::CTaskComplex((CTaskComplex *)v7);
    *(_QWORD *)(v7 + 24) = 0x400000003F800000LL;
    *(_QWORD *)(v7 + 32) = 0x4000000000000000LL;
    *(_DWORD *)(v7 + 16) = 50000;
    *(_DWORD *)(v7 + 20) = 1000;
    *(_WORD *)(v7 + 48) = 0;
    *(_WORD *)(v7 + 60) = 0;
    *(_DWORD *)(v7 + 40) = 0;
    *(_DWORD *)(v7 + 44) = 0;
    *(_DWORD *)(v7 + 52) = 0;
    *(_DWORD *)(v7 + 56) = 0;
    *(_DWORD *)(v7 + 72) = 0;
    *(_DWORD *)(v7 + 76) = 0;
    *(_DWORD *)(v7 + 80) = 6;
    v10 = *(_BYTE *)(v7 + 84);
    *(_DWORD *)v7 = &off_668978;
    *(_DWORD *)(v7 + 64) = &off_66D3DC;
    *(_BYTE *)(v7 + 84) = v10 & 0xF0 | 2;
    *(_DWORD *)(v7 + 68) = 0;
    *(_DWORD *)(v7 + 12) = v9;
    if ( v9 )
      CEntity::RegisterReference(v9, (CEntity **)(v7 + 12));
    v11 = *(_QWORD *)((char *)this + 20);
    *(_DWORD *)(v7 + 76) = *((_DWORD *)this + 7);
    *(_QWORD *)(v7 + 68) = v11;
    *(_DWORD *)(v7 + 80) = 7;
    return v7;
  }
  switch ( v5 )
  {
    case 202:
      v7 = CTask::operator new((CTask *)&off_18, v6);
      CTaskSimple::CTaskSimple((CTaskSimple *)v7);
      *(_WORD *)(v7 + 16) = 0;
      *(_DWORD *)(v7 + 20) = 2000;
      *(_DWORD *)(v7 + 8) = 0;
      *(_DWORD *)(v7 + 12) = 0;
      *(_DWORD *)v7 = &off_665760;
      return v7;
    case 203:
      goto LABEL_12;
    case 700:
      return (*(int (__fastcall **)(CTaskComplexFollowLeaderInFormation *, CPed *))(*(_DWORD *)this + 44))(this, a2);
  }
  return v7;
}


// ============================================================

// Address: 0x544af0
// Original: _ZN35CTaskComplexFollowLeaderInFormation13CreateSubTaskEiPK4CPed
// Demangled: CTaskComplexFollowLeaderInFormation::CreateSubTask(int,CPed const*)
int __fastcall CTaskComplexFollowLeaderInFormation::CreateSubTask(
        CTaskComplexFollowLeaderInFormation *this,
        int a2,
        const CPed *a3)
{
  int v5; // r4
  CEntity *v6; // r8
  char v7; // r3
  __int64 v8; // d16
  int v9; // r4
  unsigned __int16 v10; // r0
  unsigned int v11; // r1
  const CPed *Member; // r4
  int v13; // r0
  float *v14; // r1
  int v15; // r0
  float v16; // s0
  float v17; // s2
  float v18; // s4
  float *v19; // r1
  float v20; // s0
  float v21; // s4
  CGeneral *RadianAngleBetweenPoints; // r5
  unsigned int v23; // r1
  float v24; // r1
  int v25; // r1
  float v27; // [sp+0h] [bp-30h]
  float v28; // [sp+Ch] [bp-24h] BYREF
  float v29; // [sp+10h] [bp-20h]
  float v30; // [sp+14h] [bp-1Ch]

  v5 = 0;
  if ( a2 < 704 )
  {
    switch ( a2 )
    {
      case 202:
        v5 = CTask::operator new((CTask *)&off_18, 0xCAu);
        CTaskSimple::CTaskSimple((CTaskSimple *)v5);
        *(_WORD *)(v5 + 16) = 0;
        *(_DWORD *)(v5 + 20) = 2000;
        *(_DWORD *)(v5 + 8) = 0;
        *(_DWORD *)(v5 + 12) = 0;
        *(_DWORD *)v5 = &off_665760;
        break;
      case 203:
        v5 = CTask::operator new((CTask *)&dword_20, 0xCBu);
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v5, 500, 0, 0, 8.0);
        break;
      case 700:
        v5 = CTask::operator new((CTask *)&dword_50, 0x2BCu);
        CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(
          (CTaskComplexEnterCarAsPassenger *)v5,
          *(CVehicle **)(*((_DWORD *)this + 4) + 1424),
          0,
          0);
        break;
    }
  }
  else if ( a2 > 901 )
  {
    if ( a2 == 902 )
    {
      v9 = CPedGroupMembership::CountMembers((CPedGroupMembership *)(*((_DWORD *)this + 3) + 8));
      v10 = rand();
      Member = (const CPed *)CPedGroupMembership::GetMember(
                               (CPedGroupMembership *)(*((_DWORD *)this + 3) + 8),
                               (int)(float)((float)((float)v10 * 0.000015259) * (float)v9));
      if ( Member == a3 )
        Member = (const CPed *)CPedGroupMembership::GetLeader((CPedGroupMembership *)(*((_DWORD *)this + 3) + 8));
      if ( Member && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 50.0) == 20 )
      {
        v13 = *((_DWORD *)Member + 5);
        v14 = (float *)(v13 + 48);
        if ( !v13 )
          v14 = (float *)((char *)Member + 4);
        v15 = *((_DWORD *)a3 + 5);
        v16 = *v14;
        v17 = v14[1];
        v18 = v14[2];
        v19 = (float *)(v15 + 48);
        if ( !v15 )
          v19 = (float *)((char *)a3 + 4);
        v20 = v16 - *v19;
        v21 = v18 - v19[2];
        v29 = v17 - v19[1];
        v28 = v20;
        v30 = v21;
        CVector::Normalise((CVector *)&v28);
        RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                                 (CGeneral *)LODWORD(v28),
                                                 v29,
                                                 0.0,
                                                 0.0,
                                                 v27);
        v5 = CTask::operator new((CTask *)&off_18, v23);
        v25 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v24);
      }
      else
      {
        v5 = CTask::operator new((CTask *)&off_18, v11);
        v25 = *((_DWORD *)a3 + 343);
      }
      CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading((CTaskSimpleAchieveHeading *)v5, *(float *)&v25, 0.5, 0.2);
    }
    else if ( a2 == 907 )
    {
      v5 = CTask::operator new((CTask *)&dword_58, 0x38Bu);
      v6 = (CEntity *)*((_DWORD *)this + 4);
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      *(_QWORD *)(v5 + 24) = 0x400000003F800000LL;
      *(_QWORD *)(v5 + 32) = 0x4000000000000000LL;
      *(_QWORD *)(v5 + 16) = 0x3E80000C350LL;
      *(_WORD *)(v5 + 48) = 0;
      *(_WORD *)(v5 + 60) = 0;
      *(_DWORD *)(v5 + 40) = 0;
      *(_DWORD *)(v5 + 44) = 0;
      *(_DWORD *)(v5 + 52) = 0;
      *(_DWORD *)(v5 + 56) = 0;
      *(_DWORD *)(v5 + 72) = 0;
      *(_DWORD *)(v5 + 76) = 0;
      *(_DWORD *)(v5 + 80) = 6;
      v7 = *(_BYTE *)(v5 + 84);
      *(_DWORD *)v5 = &off_668978;
      *(_DWORD *)(v5 + 64) = &off_66D3DC;
      *(_BYTE *)(v5 + 84) = v7 & 0xF0 | 2;
      *(_DWORD *)(v5 + 68) = 0;
      *(_DWORD *)(v5 + 12) = v6;
      if ( v6 )
        CEntity::RegisterReference(v6, (CEntity **)(v5 + 12));
      v8 = *(_QWORD *)((char *)this + 20);
      *(_DWORD *)(v5 + 76) = *((_DWORD *)this + 7);
      *(_QWORD *)(v5 + 68) = v8;
      *(_DWORD *)(v5 + 80) = 7;
    }
  }
  else if ( a2 == 704 )
  {
    v5 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
    CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, *((CVehicle **)a3 + 356), 0, 0, 1, 0);
  }
  else if ( a2 == 709 )
  {
    v5 = CTask::operator new((CTask *)&dword_60, 0x2C5u);
    CTaskSimpleCarDrive::CTaskSimpleCarDrive((CTaskSimpleCarDrive *)v5, *((CVehicle **)a3 + 356), 0, 0);
  }
  return v5;
}


// ============================================================

// Address: 0x544dd4
// Original: _ZN35CTaskComplexFollowLeaderInFormation18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFollowLeaderInFormation::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexFollowLeaderInFormation::CreateFirstSubTask(
        CTaskComplexFollowLeaderInFormation *this,
        CPed *a2)
{
  int v2; // lr
  bool v4; // zf
  int v5; // r1
  int v6; // r1
  int v7; // r12

  v5 = *((unsigned __int8 *)a2 + 1157) << 31;
  v4 = v5 == 0;
  if ( v5 )
  {
    v2 = *((_DWORD *)a2 + 356);
    v4 = v2 == 0;
  }
  if ( v4 )
  {
    v6 = 907;
  }
  else
  {
    v7 = *((_DWORD *)this + 4);
    v6 = 704;
    if ( *(unsigned __int8 *)(v7 + 1157) << 31 && *(_DWORD *)(v7 + 1424) == v2 )
      v6 = 709;
  }
  return CTaskComplexFollowLeaderInFormation::CreateSubTask(this, v6, a2);
}


// ============================================================

// Address: 0x544e20
// Original: _ZN35CTaskComplexFollowLeaderInFormation14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFollowLeaderInFormation::ControlSubTask(CPed *)
int __fastcall CTaskComplexFollowLeaderInFormation::ControlSubTask(CTaskComplexFollowLeaderInFormation *this, CPed *a2)
{
  int v4; // r4
  int v5; // r0
  bool v6; // zf
  int v7; // r1
  int v8; // r0
  int v10; // r0
  float v11; // s0
  int v12; // r1
  float v13; // s0
  int v14; // r0
  float v15; // s0
  int v16; // r1
  int v17; // r2
  char *v18; // r3
  int v19; // r1
  float32x2_t v20; // d16
  unsigned __int64 v21; // d2
  CTaskSimpleStandStill *v22; // r0
  unsigned int v23; // r1
  int v24; // r0
  int v25; // r1
  int v26; // r2
  char *v27; // r3
  unsigned int v28; // r1
  float32x2_t v29; // d16
  unsigned __int64 v30; // d1
  CEntity *v31; // r8
  char v32; // r3
  int v33; // r6
  CEntity **v34; // r1
  CEntity *v35; // r0
  __int64 v36; // d16
  const CPed *v37; // r1
  int v38; // r0
  int v39; // r1
  int v40; // r2
  char *v41; // r3
  int v42; // r1
  float v43; // s0
  float32x2_t v44; // d16
  int v45; // r0
  unsigned __int64 v46; // d1
  int v47; // r1
  float v48; // s0
  unsigned int v49; // r1
  unsigned int v50; // r1
  CEntity *v51; // r9
  char v52; // r2
  _BYTE v53[56]; // [sp+8h] [bp-38h] BYREF

  if ( !*((_DWORD *)this + 4) )
    return 0;
  v4 = *((_DWORD *)this + 2);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) != 709 )
  {
    v5 = *((_DWORD *)this + 4);
    v6 = *(unsigned __int8 *)(v5 + 1157) << 31 == 0;
    if ( *(unsigned __int8 *)(v5 + 1157) << 31 )
      v6 = *(_DWORD *)(v5 + 1424) == 0;
    if ( v6 )
    {
      v7 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
      v8 = *((_DWORD *)this + 2);
      if ( v7 != 700 )
      {
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8) != 202
          && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 203 )
        {
          return v4;
        }
        v24 = *((_DWORD *)this + 4);
        v25 = *((_DWORD *)a2 + 5);
        v26 = *(_DWORD *)(v24 + 20);
        v27 = (char *)(v25 + 48);
        if ( !v25 )
          v27 = (char *)a2 + 4;
        v28 = v26 + 48;
        if ( !v26 )
          v28 = v24 + 4;
        v29.n64_u64[0] = vsub_f32(*(float32x2_t *)(v27 + 4), *(float32x2_t *)(v28 + 4)).n64_u64[0];
        v30 = vmul_f32(v29, v29).n64_u64[0];
        if ( (float)((float)((float)((float)(*(float *)v27 - *(float *)v28) * (float)(*(float *)v27 - *(float *)v28))
                           + *(float *)&v30)
                   + *((float *)&v30 + 1)) >= (float)(*((float *)this + 9) * *((float *)this + 9)) )
          return v4;
        v4 = CTask::operator new((CTask *)&dword_58, v28);
        v31 = (CEntity *)*((_DWORD *)this + 4);
        CTaskComplex::CTaskComplex((CTaskComplex *)v4);
        *(_QWORD *)(v4 + 24) = 0x400000003F800000LL;
        *(_QWORD *)(v4 + 32) = 0x4000000000000000LL;
        *(_QWORD *)(v4 + 16) = 0x3E80000C350LL;
        *(_WORD *)(v4 + 48) = 0;
        *(_WORD *)(v4 + 60) = 0;
        *(_DWORD *)(v4 + 40) = 0;
        *(_DWORD *)(v4 + 44) = 0;
        *(_DWORD *)(v4 + 52) = 0;
        *(_DWORD *)(v4 + 56) = 0;
        *(_DWORD *)(v4 + 72) = 0;
        *(_DWORD *)(v4 + 76) = 0;
        *(_DWORD *)(v4 + 80) = 6;
        v32 = *(_BYTE *)(v4 + 84);
        *(_DWORD *)v4 = &off_668978;
        *(_DWORD *)(v4 + 64) = &off_66D3DC;
        *(_BYTE *)(v4 + 84) = v32 & 0xF0 | 2;
        *(_DWORD *)(v4 + 68) = 0;
        v33 = v4 + 68;
        *(_DWORD *)(v4 + 12) = v31;
        v34 = (CEntity **)(v4 + 12);
        if ( !v31 )
          goto LABEL_33;
        v35 = v31;
        goto LABEL_32;
      }
      if ( (*(int (__fastcall **)(int, CPed *, _DWORD, _DWORD))(*(_DWORD *)v8 + 28))(v8, a2, 0, 0) == 1 )
        return (*(int (__fastcall **)(CTaskComplexFollowLeaderInFormation *, CPed *))(*(_DWORD *)this + 44))(this, a2);
    }
    else
    {
      if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 907 )
      {
        v10 = *((_DWORD *)this + 2);
        v11 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(*(_DWORD *)(*((_DWORD *)this + 4)
                                                                                                 + 1424)
                                                                                     + 38)])
                                   + 44)
                       + 36);
        if ( *(float *)(v10 + 24) != v11 )
        {
          *(float *)(v10 + 24) = v11;
          v12 = CTimer::m_snTimeInMilliseconds;
          *(_BYTE *)(v10 + 48) = 1;
          *(_DWORD *)(v10 + 40) = v12;
          *(_DWORD *)(v10 + 44) = 0;
        }
        v13 = *((float *)this + 9);
        if ( v13 > 0.0 )
        {
          v14 = *((_DWORD *)this + 4);
          v15 = v13 * v13;
          v16 = *((_DWORD *)a2 + 5);
          v17 = *(_DWORD *)(v14 + 20);
          v18 = (char *)(v16 + 48);
          if ( !v16 )
            v18 = (char *)a2 + 4;
          v19 = v17 + 48;
          if ( !v17 )
            v19 = v14 + 4;
          v20.n64_u64[0] = vsub_f32(*(float32x2_t *)(v18 + 4), *(float32x2_t *)(v19 + 4)).n64_u64[0];
          v21 = vmul_f32(v20, v20).n64_u64[0];
          if ( (float)((float)((float)((float)(*(float *)v18 - *(float *)v19) * (float)(*(float *)v18 - *(float *)v19))
                             + *(float *)&v21)
                     + *((float *)&v21 + 1)) > v15
            && (*(int (__fastcall **)(_DWORD, CPed *, _DWORD, _DWORD))(**((_DWORD **)this + 2) + 28))(
                 *((_DWORD *)this + 2),
                 a2,
                 0,
                 0) == 1 )
          {
            CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v53, 0, 0, 0, 8.0);
            CTaskSimpleStandStill::ProcessPed(v22, a2);
            v4 = CTask::operator new((CTask *)&off_18, v23);
            CTaskSimple::CTaskSimple((CTaskSimple *)v4);
            *(_WORD *)(v4 + 16) = 0;
            *(_DWORD *)(v4 + 20) = 2000;
            *(_DWORD *)(v4 + 8) = 0;
            *(_DWORD *)(v4 + 12) = 0;
            *(_DWORD *)v4 = &off_665760;
            CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v53);
          }
        }
        return v4;
      }
      if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 203
        && !CPedGroups::GetPedsGroup(a2, v37) )
      {
        v38 = *((_DWORD *)this + 4);
        v39 = *((_DWORD *)a2 + 5);
        v40 = *(_DWORD *)(v38 + 20);
        v41 = (char *)(v39 + 48);
        if ( !v39 )
          v41 = (char *)a2 + 4;
        v42 = v40 + 48;
        if ( !v40 )
          v42 = v38 + 4;
        v43 = *(float *)v41 - *(float *)v42;
        v44.n64_u64[0] = vsub_f32(*(float32x2_t *)(v41 + 4), *(float32x2_t *)(v42 + 4)).n64_u64[0];
        v45 = *(_DWORD *)(v38 + 1424);
        v46 = vmul_f32(v44, v44).n64_u64[0];
        v47 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v45 + 38)]) + 44);
        v48 = (float)((float)(v43 * v43) + *(float *)&v46) + *((float *)&v46 + 1);
        if ( v48 < (float)(*(float *)(v47 + 36) * *(float *)(v47 + 36)) )
        {
          if ( *(unsigned __int8 *)(v45 + 1160) < (unsigned int)*(unsigned __int8 *)(v45 + 1164)
            && (*(int (__fastcall **)(_DWORD, CPed *, _DWORD, _DWORD))(**((_DWORD **)this + 2) + 28))(
                 *((_DWORD *)this + 2),
                 a2,
                 0,
                 0) == 1 )
          {
            v4 = CTask::operator new((CTask *)&dword_50, v49);
            CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(
              (CTaskComplexEnterCarAsPassenger *)v4,
              *(CVehicle **)(*((_DWORD *)this + 4) + 1424),
              0,
              0);
          }
          return v4;
        }
        if ( v48 < (float)(*((float *)this + 9) * *((float *)this + 9))
          && (*(int (__fastcall **)(_DWORD, CPed *, _DWORD, _DWORD))(**((_DWORD **)this + 2) + 28))(
               *((_DWORD *)this + 2),
               a2,
               0,
               0) == 1 )
        {
          v4 = CTask::operator new((CTask *)&dword_58, v50);
          v51 = (CEntity *)*((_DWORD *)this + 4);
          CTaskComplex::CTaskComplex((CTaskComplex *)v4);
          *(_QWORD *)(v4 + 24) = 0x400000003F800000LL;
          *(_QWORD *)(v4 + 32) = 0x4000000000000000LL;
          *(_QWORD *)(v4 + 16) = 0x3E80000C350LL;
          *(_WORD *)(v4 + 48) = 0;
          *(_WORD *)(v4 + 60) = 0;
          *(_DWORD *)(v4 + 40) = 0;
          *(_DWORD *)(v4 + 44) = 0;
          *(_DWORD *)(v4 + 52) = 0;
          *(_DWORD *)(v4 + 56) = 0;
          *(_DWORD *)(v4 + 72) = 0;
          *(_DWORD *)(v4 + 76) = 0;
          *(_DWORD *)(v4 + 80) = 6;
          v52 = *(_BYTE *)(v4 + 84);
          *(_DWORD *)v4 = &off_668978;
          *(_DWORD *)(v4 + 64) = &off_66D3DC;
          *(_BYTE *)(v4 + 84) = v52 & 0xF0 | 2;
          *(_DWORD *)(v4 + 68) = 0;
          v33 = v4 + 68;
          *(_DWORD *)(v4 + 12) = v51;
          v34 = (CEntity **)(v4 + 12);
          if ( !v51 )
            goto LABEL_33;
          v35 = v51;
LABEL_32:
          CEntity::RegisterReference(v35, v34);
LABEL_33:
          v36 = *(_QWORD *)((char *)this + 20);
          *(_DWORD *)(v33 + 8) = *((_DWORD *)this + 7);
          *(_QWORD *)v33 = v36;
          *(_DWORD *)(v4 + 80) = 7;
        }
      }
    }
  }
  return v4;
}


// ============================================================

// Address: 0x5461bc
// Original: _ZNK35CTaskComplexFollowLeaderInFormation5CloneEv
// Demangled: CTaskComplexFollowLeaderInFormation::Clone(void)
CTaskComplex *__fastcall CTaskComplexFollowLeaderInFormation::Clone(
        CTaskComplexFollowLeaderInFormation *this,
        unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  CTaskComplex *v5; // r4
  int v6; // r9
  __int64 v7; // d16

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = v3;
  v6 = *((_DWORD *)this + 9);
  CTaskComplex::CTaskComplex(v3);
  *((_DWORD *)v5 + 3) = v4;
  *(_DWORD *)v5 = &off_66D2DC;
  *((_DWORD *)v5 + 4) = HIDWORD(v4);
  v7 = *(_QWORD *)((char *)this + 20);
  *((_DWORD *)v5 + 7) = *((_DWORD *)this + 7);
  *((_DWORD *)v5 + 8) = 4;
  *((_DWORD *)v5 + 9) = v6;
  *(_QWORD *)((char *)v5 + 20) = v7;
  if ( HIDWORD(v4) )
    CEntity::RegisterReference((CEntity *)HIDWORD(v4), (CEntity **)v5 + 4);
  return v5;
}


// ============================================================

// Address: 0x54621c
// Original: _ZNK35CTaskComplexFollowLeaderInFormation11GetTaskTypeEv
// Demangled: CTaskComplexFollowLeaderInFormation::GetTaskType(void)
int __fastcall CTaskComplexFollowLeaderInFormation::GetTaskType(CTaskComplexFollowLeaderInFormation *this)
{
  return 913;
}


// ============================================================

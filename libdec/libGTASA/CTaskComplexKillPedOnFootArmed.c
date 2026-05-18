
// Address: 0x18d74c
// Original: j__ZNK30CTaskComplexKillPedOnFootArmed23IsPedInLeaderFiringLineEP4CPed
// Demangled: CTaskComplexKillPedOnFootArmed::IsPedInLeaderFiringLine(CPed *)
// attributes: thunk
int __fastcall CTaskComplexKillPedOnFootArmed::IsPedInLeaderFiringLine(CTaskComplexKillPedOnFootArmed *this, CPed *a2)
{
  return _ZNK30CTaskComplexKillPedOnFootArmed23IsPedInLeaderFiringLineEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1996f8
// Original: j__ZN30CTaskComplexKillPedOnFootArmed25LineOfSightClearForAttackEP4CPed
// Demangled: CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(CPed *)
// attributes: thunk
int __fastcall CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(
        CTaskComplexKillPedOnFootArmed *this,
        CPed *a2)
{
  return _ZN30CTaskComplexKillPedOnFootArmed25LineOfSightClearForAttackEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19c5bc
// Original: j__ZN30CTaskComplexKillPedOnFootArmed13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexKillPedOnFootArmed::CreateSubTask(int,CPed *)
// attributes: thunk
int __fastcall CTaskComplexKillPedOnFootArmed::CreateSubTask(CTaskComplexKillPedOnFootArmed *this, int a2, CPed *a3)
{
  return _ZN30CTaskComplexKillPedOnFootArmed13CreateSubTaskEiP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x4e2520
// Original: _ZN30CTaskComplexKillPedOnFootArmedC2EP4CPedjjji
// Demangled: CTaskComplexKillPedOnFootArmed::CTaskComplexKillPedOnFootArmed(CPed *,uint,uint,uint,int)
void __fastcall CTaskComplexKillPedOnFootArmed::CTaskComplexKillPedOnFootArmed(
        CTaskComplexKillPedOnFootArmed *this,
        CPed *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        char a6)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = a3;
  *((_DWORD *)this + 8) = a4;
  *(_QWORD *)((char *)this + 36) = a5;
  *((_DWORD *)this + 11) = 0;
  *((_BYTE *)this + 48) = a6;
  *(_DWORD *)((char *)this + 50) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 3323739136LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 19) = -971228160;
  *(_DWORD *)this = &off_669904;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4e25b4
// Original: _ZN30CTaskComplexKillPedOnFootArmedD2Ev
// Demangled: CTaskComplexKillPedOnFootArmed::~CTaskComplexKillPedOnFootArmed()
void __fastcall CTaskComplexKillPedOnFootArmed::~CTaskComplexKillPedOnFootArmed(CTaskComplexKillPedOnFootArmed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669904;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4e25e0
// Original: _ZN30CTaskComplexKillPedOnFootArmedD0Ev
// Demangled: CTaskComplexKillPedOnFootArmed::~CTaskComplexKillPedOnFootArmed()
void __fastcall CTaskComplexKillPedOnFootArmed::~CTaskComplexKillPedOnFootArmed(CTaskComplexKillPedOnFootArmed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669904;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4e2610
// Original: _ZN30CTaskComplexKillPedOnFootArmed13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexKillPedOnFootArmed::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexKillPedOnFootArmed::MakeAbortable(
        CTaskComplexKillPedOnFootArmed *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( a3 == 1 && a4 )
  {
    if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 31
      || *((_DWORD *)a4 + 4) != *((_DWORD *)this + 3) )
    {
      return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
               *((_DWORD *)this + 2),
               a2,
               a3,
               a4);
    }
  }
  else if ( (unsigned int)(a3 - 1) <= 1 )
  {
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             a3,
             a4);
  }
  return 0;
}


// ============================================================

// Address: 0x4e2660
// Original: _ZN30CTaskComplexKillPedOnFootArmed18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexKillPedOnFootArmed::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexKillPedOnFootArmed::CreateFirstSubTask(
        CTaskComplexKillPedOnFootArmed *this,
        CPedIntelligence **a2)
{
  CTaskSimpleGoToPoint *v3; // r6
  int WeaponInfo; // r8
  int v6; // r0
  CPedIntelligence *v7; // r1
  const CVector *v8; // r9
  int v9; // r2
  float *v10; // r3
  float *v11; // r1
  float v12; // s16
  int IsTypeMelee; // r6
  float v14; // s0
  bool v15; // r3
  int v16; // r0
  int v17; // r2
  CPed *v18; // r1
  CCover *v19; // r0
  int v20; // r1
  int v21; // r3
  CPed *v22; // r2
  int CoordinatesCoverPoint; // r0
  CPedIntelligence *v24; // r0
  unsigned int v25; // r1
  int v26; // r0
  bool v27; // zf
  int v28; // r1
  CVector *v30; // [sp+0h] [bp-48h]
  bool v31[8]; // [sp+14h] [bp-34h] BYREF
  float v32; // [sp+1Ch] [bp-2Ch]

  v3 = 0;
  *((_BYTE *)this + 52) = 0;
  CPed::GetWeaponSkill((CPed *)a2);
  WeaponInfo = CWeaponInfo::GetWeaponInfo();
  v6 = *((_DWORD *)this + 3);
  if ( v6 )
  {
    v7 = a2[5];
    v8 = (const CVector *)(a2 + 1);
    v9 = *(_DWORD *)(v6 + 20);
    v10 = (float *)(a2 + 1);
    if ( v7 )
      v10 = (float *)((char *)v7 + 48);
    v11 = (float *)(v9 + 48);
    if ( !v9 )
      v11 = (float *)(v6 + 4);
    v12 = (float)((float)((float)(*v11 - *v10) * (float)(*v11 - *v10))
                + (float)((float)(v11[1] - v10[1]) * (float)(v11[1] - v10[1])))
        + (float)((float)(v11[2] - v10[2]) * (float)(v11[2] - v10[2]));
    IsTypeMelee = CWeapon::IsTypeMelee((CWeapon *)(v6 + 28 * *(char *)(v6 + 1820) + 1444));
    if ( (*((_BYTE *)a2 + 1158) & 0x20) != 0 )
      goto LABEL_23;
    if ( (rand() & 1) == 0 )
      goto LABEL_23;
    if ( *((char *)this + 48) < 1 )
      goto LABEL_23;
    v14 = sqrtf(v12);
    if ( v14 <= 30.0 )
    {
      if ( (v14 <= 6.0) | IsTypeMelee )
        goto LABEL_23;
    }
    CPed::ReleaseCoverPoint((CPed *)a2);
    v16 = *((_DWORD *)this + 3);
    v17 = *(_DWORD *)(v16 + 20);
    v18 = (CPed *)(v17 + 48);
    if ( !v17 )
      v18 = (CPed *)(v16 + 4);
    v19 = (CCover *)CCover::FindAndReserveCoverPoint((CCover *)a2, v18, 0, v15);
    a2[484] = v19;
    if ( !v19 )
      goto LABEL_23;
    v20 = *((_DWORD *)this + 3);
    v21 = *(_DWORD *)(v20 + 20);
    v22 = (CPed *)(v21 + 48);
    if ( !v21 )
      v22 = (CPed *)(v20 + 4);
    CoordinatesCoverPoint = CCover::FindCoordinatesCoverPoint(v19, (CCoverPoint *)a2, v22, (CVector *)v31, v30);
    v32 = v32 + 1.0;
    if ( CoordinatesCoverPoint != 1 )
      goto LABEL_22;
    v24 = a2[5];
    if ( v24 )
      v8 = (CPedIntelligence *)((char *)v24 + 48);
    if ( !CWorld::GetIsLineOfSightClear(
            (CWorld *)v31,
            v8,
            (const CVector *)((char *)&stderr + 1),
            1,
            0,
            0,
            0,
            0,
            0,
            v31[0]) )
    {
LABEL_22:
      CPed::ReleaseCoverPoint((CPed *)a2);
      goto LABEL_23;
    }
    CPedIntelligence::SetTaskDuckSecondary(a2[272], 0x1770u);
    v3 = (CTaskSimpleGoToPoint *)CTask::operator new((CTask *)&word_2C, v25);
    CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(v3, 6, (const CVector *)v31, 0.5, 1, 0);
    if ( !v3 )
    {
LABEL_23:
      if ( v12 <= (float)(*(float *)(WeaponInfo + 4) * (float)(*(float *)(WeaponInfo + 4) * 0.25))
        && CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(this, (CPed *)a2) )
      {
        goto LABEL_30;
      }
      if ( (*((_BYTE *)a2 + 1158) & 0x60) == 0 )
      {
        v28 = 907;
        return CTaskComplexKillPedOnFootArmed::CreateSubTask(this, v28, (CPed *)a2);
      }
      v26 = CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(this, (CPed *)a2);
      v27 = v26 == 0;
      if ( !v26 )
        v27 = *(unsigned __int8 *)(WeaponInfo + 25) << 31 == 0;
      if ( v27 )
LABEL_30:
        v28 = 1020;
      else
        v28 = 202;
      return CTaskComplexKillPedOnFootArmed::CreateSubTask(this, v28, (CPed *)a2);
    }
  }
  return (int)v3;
}


// ============================================================

// Address: 0x4e2868
// Original: _ZN30CTaskComplexKillPedOnFootArmed25LineOfSightClearForAttackEP4CPed
// Demangled: CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(CPed *)
int __fastcall CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(
        CTaskComplexKillPedOnFootArmed *this,
        CPed *a2)
{
  float v4; // s16
  unsigned int v5; // r0
  CPed *v6; // r0
  int result; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r2
  float32x2_t v11; // d16
  unsigned __int64 v12; // d1
  int v13; // r0
  char *v14; // r1
  float32x2_t v15; // d16
  unsigned __int64 v16; // d1
  int v17; // r0
  float *v18; // r1
  float v19; // s0
  float v20; // s2
  int v21; // r0
  bool v22; // zf
  int v23; // r10
  int v24; // r8
  int v25; // r0
  int v26; // r2
  int v27; // r1
  __int64 *v28; // r3
  __int64 v29; // d16
  int v30; // r1
  char *v31; // r2
  __int64 v32; // d16
  int v33; // r1
  __int64 v34; // r2
  int v35; // r0
  bool v36; // [sp+14h] [bp-3Ch]
  _DWORD v37[3]; // [sp+18h] [bp-38h] BYREF
  float v38; // [sp+24h] [bp-2Ch] BYREF
  float v39; // [sp+28h] [bp-28h]
  float v40; // [sp+2Ch] [bp-24h]

  CPed::GetWeaponSkill(a2);
  CWeaponInfo::GetWeaponInfo();
  if ( *((_BYTE *)a2 + 51)
    || (v4 = 9.0, (v6 = (CPed *)*((_DWORD *)this + 3)) != 0)
    && CPed::IsPlayer(v6) == 1
    && (CGame::currArea || *((_BYTE *)a2 + 1096) == 2) )
  {
    v4 = 9.0;
    v5 = 5000;
    if ( dword_959600 < 2 )
      v4 = 4.0;
  }
  else
  {
    v5 = 10000;
  }
  if ( CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 21) < v5 )
    return 1;
  if ( CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 20) <= v5 )
  {
    v8 = *((_DWORD *)this + 3);
    if ( !v8 )
      goto LABEL_17;
    v9 = *(_DWORD *)(v8 + 20);
    v10 = v9 + 48;
    if ( !v9 )
      v10 = v8 + 4;
    v11.n64_u64[0] = vsub_f32(*(float32x2_t *)(v10 + 4), *((float32x2_t *)this + 9)).n64_u64[0];
    v12 = vmul_f32(v11, v11).n64_u64[0];
    if ( (float)((float)((float)((float)(*(float *)v10 - *((float *)this + 17))
                               * (float)(*(float *)v10 - *((float *)this + 17)))
                       + *(float *)&v12)
               + *((float *)&v12 + 1)) <= v4 )
    {
LABEL_17:
      v13 = *((_DWORD *)a2 + 5);
      v14 = (char *)(v13 + 48);
      if ( !v13 )
        v14 = (char *)a2 + 4;
      v15.n64_u64[0] = vsub_f32(*(float32x2_t *)(v14 + 4), *(float32x2_t *)((char *)this + 60)).n64_u64[0];
      v16 = vmul_f32(v15, v15).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v14 - *((float *)this + 14))
                                 * (float)(*(float *)v14 - *((float *)this + 14)))
                         + *(float *)&v16)
                 + *((float *)&v16 + 1)) <= v4 )
        return 0;
    }
  }
  v39 = 0.0;
  v38 = 0.1;
  v40 = 0.0;
  if ( (*((_BYTE *)a2 + 1159) & 4) != 0 )
  {
    v17 = *((_DWORD *)a2 + 5);
    v18 = (float *)(v17 + 48);
    if ( !v17 )
      v18 = (float *)((char *)a2 + 4);
    v19 = v18[2] + 0.25;
    v20 = *v18 + 0.0;
    v39 = v18[1] + 0.0;
    v38 = v20;
    v40 = v19;
  }
  else
  {
    CPed::GetTransformedBonePosition(a2);
  }
  v37[0] = 1036831949;
  v37[1] = 0;
  v37[2] = 0;
  CPed::GetTransformedBonePosition(*((CEntity **)this + 3));
  v21 = *((_DWORD *)this + 3);
  v22 = v21 == 0;
  if ( v21 )
    v22 = *(unsigned __int8 *)(v21 + 1157) << 31 == 0;
  if ( v22 || (v35 = *(_DWORD *)(v21 + 1424)) == 0 )
  {
    v23 = 0;
    v24 = 0;
  }
  else
  {
    v23 = 1;
    v24 = *(_DWORD *)(v35 + 28) & 1;
    *(_DWORD *)(v35 + 28) &= ~1u;
  }
  if ( CWorld::GetIsLineOfSightClear(
         (CWorld *)&v38,
         (const CVector *)v37,
         (const CVector *)((char *)&stderr + 1),
         1,
         0,
         1,
         0,
         (CColLine *)((char *)&stderr + 1),
         0,
         v36) == 1 )
  {
    v25 = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 20) = 0;
    *((_DWORD *)this + 21) = v25;
    result = 1;
    if ( v23 != 1 )
      return result;
LABEL_38:
    v33 = *(_DWORD *)(*((_DWORD *)this + 3) + 1424);
    v34 = *(_QWORD *)(v33 + 28);
    LODWORD(v34) = v34 & 0xFFFFFFFE | v24;
    *(_QWORD *)(v33 + 28) = v34;
    return result;
  }
  v26 = *((_DWORD *)this + 3);
  result = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 20) = CTimer::m_snTimeInMilliseconds;
  v27 = *(_DWORD *)(v26 + 20);
  v28 = (__int64 *)(v27 + 48);
  if ( !v27 )
    v28 = (__int64 *)(v26 + 4);
  v29 = *v28;
  *((_DWORD *)this + 19) = *((_DWORD *)v28 + 2);
  *(_QWORD *)((char *)this + 68) = v29;
  v30 = *((_DWORD *)a2 + 5);
  v31 = (char *)(v30 + 48);
  if ( !v30 )
    v31 = (char *)a2 + 4;
  v32 = *(_QWORD *)v31;
  *((_DWORD *)this + 16) = *((_DWORD *)v31 + 2);
  *((_QWORD *)this + 7) = v32;
  if ( v23 == 1 )
    goto LABEL_38;
  return result;
}


// ============================================================

// Address: 0x4e2af0
// Original: _ZN30CTaskComplexKillPedOnFootArmed13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexKillPedOnFootArmed::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexKillPedOnFootArmed::CreateSubTask(CTaskComplexKillPedOnFootArmed *this, int a2, CPed *a3)
{
  int WeaponInfo; // r0
  unsigned int v7; // r1
  int v8; // r5
  unsigned int v9; // r1
  int v10; // r8
  unsigned int v11; // r1
  CEntity *v12; // r4
  char v13; // r1
  int v14; // r4
  const CPed *v15; // r1
  int v16; // r0
  CPed **v17; // r4
  unsigned int v18; // r0
  float v19; // s16
  int v20; // r1
  int v21; // r2
  float *v22; // r3
  float *v23; // r1
  float v24; // s2
  float v25; // s6
  int v26; // r2
  float *v27; // r0
  float v28; // s0
  float v29; // s4
  float v30; // s8
  unsigned int v31; // r1
  CTaskSimpleStandStill *v32; // r0
  unsigned int v33; // r1
  CEntity *v34; // r4
  int v35; // r0
  CEntity *v36; // r6
  int *v37; // r2
  __int64 v38; // d17
  char v39; // r3
  const CPed *v40; // r1
  unsigned __int16 v41; // r1
  char v42; // r3
  int v44; // r2
  CWorld *v45; // r0
  unsigned int v46; // r1
  bool v47; // [sp+14h] [bp-5Ch]
  bool v48; // [sp+14h] [bp-5Ch]
  float v49[3]; // [sp+18h] [bp-58h] BYREF
  float v50[3]; // [sp+24h] [bp-4Ch] BYREF
  float v51; // [sp+30h] [bp-40h] BYREF
  float v52; // [sp+34h] [bp-3Ch]
  int v53; // [sp+38h] [bp-38h]

  CPed::GetWeaponSkill(a3);
  WeaponInfo = CWeaponInfo::GetWeaponInfo();
  v8 = 0;
  if ( a2 > 414 )
  {
    if ( a2 == 415 )
    {
      v8 = CTask::operator new((CTask *)&word_28, 0x19Fu);
      CTaskSimpleDuck::CTaskSimpleDuck((CTaskSimpleDuck *)v8, 0, *((_WORD *)this + 16), -1);
      return v8;
    }
    v9 = 907;
    if ( a2 != 907 )
    {
      if ( a2 == 1020 )
      {
        if ( *(unsigned __int8 *)(WeaponInfo + 25) << 31 )
        {
          v8 = CTask::operator new((CTask *)&dword_1C, 0x38Bu);
          v34 = (CEntity *)*((_DWORD *)this + 3);
          CTaskSimple::CTaskSimple((CTaskSimple *)v8);
          *(_DWORD *)(v8 + 16) = 0;
          *(_DWORD *)(v8 + 20) = 0;
          *(_DWORD *)(v8 + 24) = 0;
          *(_WORD *)(v8 + 8) = 0;
          *(_DWORD *)v8 = &off_669710;
          *(_DWORD *)(v8 + 12) = v34;
          if ( v34 )
            CEntity::RegisterReference(v34, (CEntity **)(v8 + 12));
        }
        else
        {
          v10 = CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(this, a3);
          v8 = CTask::operator new((CTask *)&off_3C, v11);
          v12 = (CEntity *)*((_DWORD *)this + 3);
          CTaskSimple::CTaskSimple((CTaskSimple *)v8);
          *(_QWORD *)(v8 + 16) = 0LL;
          *(_QWORD *)(v8 + 24) = 0LL;
          *(_BYTE *)(v8 + 8) = 0;
          *(_DWORD *)v8 = &off_6696A8;
          *(_DWORD *)(v8 + 32) = 0;
          *(_DWORD *)(v8 + 36) = 0;
          *(_DWORD *)(v8 + 12) = v12;
          if ( v10 )
            LOBYTE(v10) = 3;
          if ( v12 )
            CEntity::RegisterReference(v12, (CEntity **)(v8 + 12));
          *(_WORD *)(v8 + 44) = 5;
          *(_BYTE *)(v8 + 46) = v10;
          *(_DWORD *)(v8 + 48) = 1065353216;
          *(_DWORD *)(v8 + 52) = 0;
          *(_DWORD *)(v8 + 40) = -1;
          *(_WORD *)(v8 + 56) = 1;
          v13 = *((_BYTE *)this + 53);
          *(_BYTE *)(v8 + 58) = v13 != 0;
          *((_BYTE *)this + 53) = 0;
          v14 = CTimer::m_snTimeInMilliseconds;
          *((_DWORD *)this + 4) = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 4000.0)
                                + v14
                                + 4000;
          if ( CPedGroups::GetPedsGroup(a3, v15) )
            CPed::Say(a3, 0xCFu, 0, 1.0, 0, 0, 0);
        }
        v35 = CTimer::m_snTimeInMilliseconds;
        *((_DWORD *)this + 20) = 0;
        *((_DWORD *)this + 5) = v35;
      }
      return v8;
    }
    v16 = *((_DWORD *)this + 22);
    if ( v16 )
    {
      v17 = (CPed **)((char *)this + 12);
      v18 = CTimer::m_snTimeInMilliseconds - v16;
      v9 = 2999;
      v19 = (float)v18;
      if ( v18 > 0xBB7 )
      {
        if ( v18 <= 0x1F40 )
        {
          v8 = CTask::operator new((CTask *)&dword_4C, 0xBB7u);
          v36 = *v17;
          CTaskComplex::CTaskComplex((CTaskComplex *)v8);
          *(_QWORD *)(v8 + 16) = 0x3E80000C350LL;
          *(_DWORD *)(v8 + 28) = 0x40000000;
          *(_DWORD *)(v8 + 32) = 0;
          *(_DWORD *)(v8 + 36) = 0x40000000;
          *(_WORD *)(v8 + 48) = 0;
          *(_WORD *)(v8 + 60) = 0;
          *(_DWORD *)(v8 + 40) = 0;
          *(_DWORD *)(v8 + 44) = 0;
          *(_DWORD *)(v8 + 52) = 0;
          *(_DWORD *)(v8 + 56) = 0;
          v42 = *(_BYTE *)(v8 + 72);
          *(_DWORD *)v8 = &off_6656E4;
          *(_DWORD *)(v8 + 64) = &off_665720;
          *(_DWORD *)(v8 + 68) = 6;
          *(_BYTE *)(v8 + 72) = v42 & 0xF0 | 3;
          *(float *)(v8 + 24) = (float)((float)((float)(v19 + -3000.0) * -5.0) / 5000.0) + 6.0;
LABEL_34:
          *(_DWORD *)(v8 + 12) = v36;
          if ( v36 )
            CEntity::RegisterReference(v36, (CEntity **)(v8 + 12));
          goto LABEL_36;
        }
        v20 = *((_DWORD *)a3 + 5);
        v21 = *((_DWORD *)*v17 + 5);
        v22 = (float *)(v20 + 48);
        if ( !v20 )
          v22 = (float *)((char *)a3 + 4);
        v23 = (float *)(v21 + 48);
        v24 = v22[1];
        if ( !v21 )
          v23 = (float *)((char *)*v17 + 4);
        v25 = v23[1];
        v51 = *v23 - *v22;
        v53 = 0;
        v52 = v25 - v24;
        CVector::Normalise((CVector *)&v51);
        v26 = *((_DWORD *)*v17 + 5);
        v27 = (float *)(v26 + 48);
        v28 = v52 * -1.5;
        if ( !v26 )
          v27 = (float *)((char *)*v17 + 4);
        v50[0] = v28 + *v27;
        v50[1] = (float)(v51 * 1.5) + v27[1];
        v29 = v27[2];
        v50[2] = v29 + 0.0;
        v30 = v27[1];
        v49[0] = *v27 - v28;
        v49[2] = v29;
        v49[1] = v30 - (float)(v51 * 1.5);
        if ( CWorld::GetIsLineOfSightClear(
               (CWorld *)v27,
               (const CVector *)v50,
               (const CVector *)((char *)&stderr + 1),
               1,
               0,
               0,
               1,
               0,
               0,
               v47) == 1 )
        {
          v8 = CTask::operator new((CTask *)&word_28, v31);
          CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
            (CTaskComplexGoToPointAndStandStill *)v8,
            6,
            (const CVector *)v50,
            0.5,
            2.0,
            0,
            0);
LABEL_36:
          if ( *v17 && CPed::IsPlayer(*v17) == 1 )
          {
            if ( *((_DWORD *)a3 + 359) == 6 )
            {
              if ( *(unsigned __int8 *)(FindPlayerWanted(-1) + 24) < 2u )
                v41 = 199;
              else
                v41 = 43;
              if ( CPed::Say(a3, v41, 0, 1.0, 0, 0, 0) > -1 )
                CPed::Say(*v17, 0x2Cu, 0xDACu, 1.0, 0, 0, 0);
            }
            else if ( CPedGroups::GetPedsGroup(a3, v40) )
            {
              CPed::Say(a3, 0x2Bu, 0, 1.0, 0, 0, 0);
            }
          }
          return v8;
        }
        v44 = *((_DWORD *)*v17 + 5);
        v45 = (CWorld *)(v44 + 48);
        if ( !v44 )
          v45 = (CPed *)((char *)*v17 + 4);
        if ( CWorld::GetIsLineOfSightClear(
               v45,
               (const CVector *)v49,
               (const CVector *)((char *)&stderr + 1),
               1,
               0,
               0,
               1,
               0,
               0,
               v48) == 1 )
        {
          v8 = CTask::operator new((CTask *)&word_28, v46);
          CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
            (CTaskComplexGoToPointAndStandStill *)v8,
            6,
            (const CVector *)v49,
            0.5,
            2.0,
            0,
            0);
          goto LABEL_36;
        }
        v8 = CTask::operator new((CTask *)&dword_4C, v46);
        v36 = *v17;
        CTaskComplex::CTaskComplex((CTaskComplex *)v8);
        v37 = dword_4E3010;
LABEL_33:
        v38 = *((_QWORD *)v37 + 1);
        *(_QWORD *)(v8 + 24) = *(_QWORD *)v37;
        *(_QWORD *)(v8 + 32) = v38;
        *(_DWORD *)(v8 + 16) = 50000;
        *(_DWORD *)(v8 + 20) = 1000;
        *(_WORD *)(v8 + 48) = 0;
        *(_WORD *)(v8 + 60) = 0;
        *(_DWORD *)(v8 + 40) = 0;
        *(_DWORD *)(v8 + 44) = 0;
        *(_DWORD *)(v8 + 52) = 0;
        *(_DWORD *)(v8 + 56) = 0;
        v39 = *(_BYTE *)(v8 + 72);
        *(_DWORD *)v8 = &off_6656E4;
        *(_DWORD *)(v8 + 64) = &off_665720;
        *(_DWORD *)(v8 + 68) = 6;
        *(_BYTE *)(v8 + 72) = v39 & 0xF0 | 3;
        goto LABEL_34;
      }
    }
    else
    {
      v17 = (CPed **)((char *)this + 12);
    }
    v8 = CTask::operator new((CTask *)&dword_4C, v9);
    v36 = *v17;
    CTaskComplex::CTaskComplex((CTaskComplex *)v8);
    v37 = dword_4E3020;
    goto LABEL_33;
  }
  if ( a2 == 202 )
  {
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)&v51, 0, 0, 0, 8.0);
    CTaskSimpleStandStill::ProcessPed(v32, a3);
    CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)&v51);
    v8 = CTask::operator new((CTask *)&off_18, v33);
    CTaskSimple::CTaskSimple((CTaskSimple *)v8);
    *(_WORD *)(v8 + 16) = 0;
    *(_DWORD *)v8 = &off_665760;
    *(_DWORD *)(v8 + 20) = 100;
    *(_DWORD *)(v8 + 8) = 0;
    *(_DWORD *)(v8 + 12) = 0;
  }
  else if ( a2 == 203 )
  {
    v8 = CTask::operator new((CTask *)&dword_20, v7);
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v8, 20000, 0, 0, 8.0);
  }
  return v8;
}


// ============================================================

// Address: 0x4e3080
// Original: _ZN30CTaskComplexKillPedOnFootArmed17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexKillPedOnFootArmed::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexKillPedOnFootArmed::CreateNextSubTask(
        CTaskComplexKillPedOnFootArmed *this,
        CPedIntelligence **a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  int v6; // r0
  int IsTypeMelee; // r8
  int WeaponInfo; // r4
  __int64 v9; // r0
  CPedIntelligence *v10; // r2
  char *v11; // r11
  int v12; // r3
  float *v13; // r6
  float *v14; // r2
  float v15; // s16
  float v16; // s22
  float v17; // s20
  float v18; // s24
  float v19; // s28
  float v20; // s26
  float v21; // s18
  int v22; // r0
  int SubTask; // r6
  unsigned int v24; // r1
  CTaskSimpleStandStill *v25; // r0
  unsigned int v26; // r1
  int v27; // r0
  int v28; // r1
  int v29; // r4
  CPedIntelligence *v30; // r2
  int v31; // r3
  int v32; // r2
  float32x2_t v33; // d16
  unsigned __int64 v34; // d1
  CTaskComplexKillPedOnFootArmed *v35; // r0
  int v36; // r1
  unsigned int v37; // r0
  float v38; // s16
  int v39; // r0
  int v40; // r1
  int *v41; // r9
  int v42; // t1
  int v43; // r0
  float32x2_t v44; // d0
  CEntity *v45; // r4
  char v46; // r3
  CTaskSimpleStandStill *v47; // r0
  unsigned int v48; // r1
  int v49; // r1
  int v50; // r3
  CPed *v51; // r2
  float32x2_t *v52; // r0
  float32x2_t *v53; // r1
  float32x2_t v54; // d16
  unsigned __int64 v55; // d0
  char v56; // r0
  unsigned int v57; // r1
  bool v58; // zf
  CEntity *v59; // r4
  char v60; // r1
  int v61; // r0
  unsigned int v62; // r1
  char v63; // r1
  unsigned int v64; // r1
  int v65; // r0
  int v66; // r3
  int v67; // r2
  CPed *v68; // r1
  CVector *v69; // r2
  CCover *v70; // r0
  int v71; // r1
  int v72; // r3
  CPed *v73; // r2
  int CoordinatesCoverPoint; // r0
  int v75; // r0
  float32x2_t *v76; // r1
  float32x2_t *v77; // r2
  float32x2_t v78; // d16
  unsigned __int64 v79; // d0
  CPedIntelligence *v80; // r0
  const CVector *v81; // r1
  const CPed *v82; // r1
  unsigned int v83; // r1
  int v84; // r0
  unsigned int v85; // r1
  int v86; // r4
  CEntity *v87; // r8
  char v88; // r1
  int v89; // r0
  int v90; // r0
  float *v91; // r1
  unsigned __int64 v92; // d16
  float v93; // s4
  float v94; // s2
  float v95; // s0
  char v96; // r4
  int IsLineOfSightClear; // r0
  int v98; // r0
  int v99; // r0
  CTaskSimpleStandStill *v100; // r0
  unsigned int v101; // r1
  CPedIntelligence *v102; // r0
  CVector *v104; // [sp+0h] [bp-A0h]
  bool v105; // [sp+14h] [bp-8Ch]
  CEntity *v106; // [sp+18h] [bp-88h]
  float v107; // [sp+1Ch] [bp-84h] BYREF
  float v108; // [sp+20h] [bp-80h]
  float v109; // [sp+24h] [bp-7Ch]
  float32x2_t v110; // [sp+28h] [bp-78h] BYREF
  float v111; // [sp+30h] [bp-70h]

  v6 = *((_DWORD *)this + 3);
  if ( !v6 )
    return 0;
  IsTypeMelee = CWeapon::IsTypeMelee((CWeapon *)(v6 + 28 * *(char *)(v6 + 1820) + 1444));
  CPed::GetWeaponSkill((CPed *)a2);
  WeaponInfo = CWeaponInfo::GetWeaponInfo();
  v9 = *((_QWORD *)this + 1);
  v10 = a2[5];
  v11 = (char *)(a2 + 1);
  v12 = *(_DWORD *)(HIDWORD(v9) + 20);
  v13 = (float *)(a2 + 1);
  if ( v10 )
    v13 = (float *)((char *)v10 + 48);
  v14 = (float *)(v12 + 48);
  v15 = *v13;
  v16 = v13[1];
  v17 = v13[2];
  if ( !v12 )
    v14 = (float *)(HIDWORD(v9) + 4);
  v18 = *v14;
  v19 = v14[1];
  v20 = v14[2];
  v21 = *(float *)(WeaponInfo + 4);
  v22 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v9 + 20))(v9);
  SubTask = 0;
  if ( v22 >= 900 )
  {
    v24 = v22 - 900;
    switch ( v22 )
    {
      case 900:
        if ( CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(this, (CPed *)a2) == 1 )
          goto LABEL_32;
        CPed::GetWeaponSkill((CPed *)a2);
        CWeaponInfo::GetWeaponInfo();
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)&v110, 0, 0, 0, 8.0);
        CTaskSimpleStandStill::ProcessPed(v47, (CPed *)a2);
        CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)&v110);
        SubTask = CTask::operator new((CTask *)&off_18, v48);
        CTaskSimple::CTaskSimple((CTaskSimple *)SubTask);
        *(_WORD *)(SubTask + 16) = 0;
        *(_DWORD *)SubTask = &off_665760;
        *(_DWORD *)(SubTask + 20) = 100;
        *(_DWORD *)(SubTask + 8) = 0;
        *(_DWORD *)(SubTask + 12) = 0;
        goto LABEL_133;
      case 901:
        goto LABEL_22;
      case 902:
      case 904:
      case 905:
      case 906:
        goto LABEL_133;
      case 903:
      case 907:
        if ( CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(this, (CPed *)a2) != 1 )
        {
          CPed::GetWeaponSkill((CPed *)a2);
          CWeaponInfo::GetWeaponInfo();
          CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)&v110, 0, 0, 0, 8.0);
          CTaskSimpleStandStill::ProcessPed(v25, (CPed *)a2);
          CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)&v110);
          SubTask = CTask::operator new((CTask *)&off_18, v26);
          CTaskSimple::CTaskSimple((CTaskSimple *)SubTask);
          *(_WORD *)(SubTask + 16) = 0;
          *(_DWORD *)SubTask = &off_665760;
          *(_DWORD *)(SubTask + 20) = 100;
          *(_DWORD *)(SubTask + 8) = 0;
          *(_DWORD *)(SubTask + 12) = 0;
          goto LABEL_35;
        }
LABEL_32:
        v35 = this;
        v36 = 1020;
        goto LABEL_33;
      default:
        if ( (unsigned int)(v22 - 1020) >= 2 )
          goto LABEL_133;
LABEL_22:
        v37 = (unsigned int)a2[289];
        if ( (v37 & 0x200000) != 0 )
          goto LABEL_126;
        v38 = sqrtf(
                (float)((float)((float)(v18 - v15) * (float)(v18 - v15))
                      + (float)((float)(v19 - v16) * (float)(v19 - v16)))
              + (float)((float)(v20 - v17) * (float)(v20 - v17)));
        if ( v38 < 3.0 )
          goto LABEL_24;
        v3.n64_u32[0] = 23.0;
        v2.n64_f32[0] = v21 * 0.8;
        v44.n64_u64[0] = vmin_f32(v2, v3).n64_u64[0];
        if ( v38 > v44.n64_f32[0] )
        {
          if ( (v37 & 0x400000) == 0 )
          {
            SubTask = CTask::operator new((CTask *)&dword_4C, v24);
            v45 = (CEntity *)*((_DWORD *)this + 3);
            CTaskComplex::CTaskComplex((CTaskComplex *)SubTask);
            v3.n64_u32[0] = 20.0;
            v44.n64_f32[0] = v21 * 0.6;
            *(_QWORD *)(SubTask + 16) = 0x3E80000C350LL;
            *(_DWORD *)(SubTask + 24) = vmin_f32(v44, v3).n64_u32[0];
            *(_DWORD *)(SubTask + 28) = 0x40000000;
            *(_DWORD *)(SubTask + 32) = 0;
            *(_DWORD *)(SubTask + 36) = 0x40000000;
            *(_WORD *)(SubTask + 48) = 0;
            *(_WORD *)(SubTask + 60) = 0;
            *(_DWORD *)(SubTask + 40) = 0;
            *(_DWORD *)(SubTask + 44) = 0;
            *(_DWORD *)(SubTask + 52) = 0;
            *(_DWORD *)(SubTask + 56) = 0;
            v46 = *(_BYTE *)(SubTask + 72);
            *(_DWORD *)SubTask = &off_6656E4;
            *(_DWORD *)(SubTask + 64) = &off_665720;
            *(_DWORD *)(SubTask + 68) = 6;
            *(_BYTE *)(SubTask + 72) = v46 & 0xF0 | 3;
            *(_DWORD *)(SubTask + 12) = v45;
            if ( v45 )
              CEntity::RegisterReference(v45, (CEntity **)(SubTask + 12));
LABEL_25:
            if ( SubTask )
              goto LABEL_127;
            goto LABEL_126;
          }
          goto LABEL_126;
        }
        if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 1020
          && *(_BYTE *)(*((_DWORD *)this + 2) + 57)
          && (*((_BYTE *)a2 + 1158) & 0x60) == 0 )
        {
          CPed::Say((CPed *)a2, 0x90u, 0, 1.0, 0, 0, 0);
          SubTask = CTask::operator new((CTask *)&dword_4C, v62);
          v106 = (CEntity *)*((_DWORD *)this + 3);
          CTaskComplex::CTaskComplex((CTaskComplex *)SubTask);
          *(_QWORD *)(SubTask + 24) = 0x4000000040000000LL;
          *(_QWORD *)(SubTask + 32) = 0x4000000000000000LL;
          *(_DWORD *)SubTask = &off_6656E4;
          *(_DWORD *)(SubTask + 16) = 50000;
          *(_DWORD *)(SubTask + 20) = 1000;
          *(_WORD *)(SubTask + 48) = 0;
          *(_WORD *)(SubTask + 60) = 0;
          *(_DWORD *)(SubTask + 40) = 0;
          *(_DWORD *)(SubTask + 44) = 0;
          *(_DWORD *)(SubTask + 52) = 0;
          *(_DWORD *)(SubTask + 56) = 0;
          v63 = *(_BYTE *)(SubTask + 72);
          *(_DWORD *)(SubTask + 64) = &off_665720;
          *(_DWORD *)(SubTask + 68) = 6;
          *(_BYTE *)(SubTask + 72) = v63 & 0xF0 | 3;
          *(_DWORD *)(SubTask + 12) = v106;
          if ( v106 )
          {
            CEntity::RegisterReference(v106, (CEntity **)(SubTask + 12));
            if ( SubTask )
              goto LABEL_127;
            goto LABEL_76;
          }
          goto LABEL_75;
        }
        if ( IsTypeMelee )
          goto LABEL_97;
        if ( !a2[484] || CCover::DoesCoverPointStillProvideCover() != 1 )
          goto LABEL_76;
        v49 = *((_DWORD *)this + 3);
        v50 = *(_DWORD *)(v49 + 20);
        v51 = (CPed *)(v50 + 48);
        if ( !v50 )
          v51 = (CPed *)(v49 + 4);
        if ( CCover::FindCoordinatesCoverPoint(a2[484], (CCoverPoint *)a2, v51, (CVector *)&v110, v104) != 1 )
          goto LABEL_74;
        v52 = (float32x2_t *)a2[5];
        v53 = (float32x2_t *)(a2 + 1);
        if ( v52 )
          v53 = v52 + 6;
        v54.n64_u64[0] = vsub_f32((float32x2_t)v53->n64_u64[0], v110).n64_u64[0];
        v55 = vmul_f32(v54, v54).n64_u64[0];
        if ( sqrtf(*(float *)&v55 + *((float *)&v55 + 1)) >= 0.75 )
          goto LABEL_73;
        if ( !*((_BYTE *)a2[484] + 1) )
        {
          if ( v38 < 12.0
            && !(*((unsigned __int8 *)a2 + 1159) << 31)
            && (rand() & 3) == 0
            && !CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)a2[272] + 4), 1) )
          {
            CPed::Say((CPed *)a2, 0x55u, 0, 1.0, 0, 0, 0);
            SubTask = CTask::operator new((CTask *)&word_28, v64);
            CTaskSimpleDuck::CTaskSimpleDuck((CTaskSimpleDuck *)SubTask, 0, 0x9C4u, -1);
            if ( SubTask )
              goto LABEL_75;
          }
          goto LABEL_73;
        }
        v56 = rand();
        v58 = (v56 & 1) == 0;
        if ( (v56 & 1) == 0 )
          v58 = *(unsigned __int8 *)(WeaponInfo + 25) << 31 == 0;
        if ( !v58 )
        {
LABEL_73:
          CPed::ReleaseCoverPoint((CPed *)a2);
LABEL_74:
          SubTask = 0;
LABEL_75:
          if ( SubTask )
            goto LABEL_127;
          goto LABEL_76;
        }
        SubTask = CTask::operator new((CTask *)&off_3C, v57);
        v59 = (CEntity *)*((_DWORD *)this + 3);
        CTaskSimple::CTaskSimple((CTaskSimple *)SubTask);
        *(_QWORD *)(SubTask + 16) = 0LL;
        *(_QWORD *)(SubTask + 24) = 0LL;
        *(_BYTE *)(SubTask + 8) = 0;
        *(_DWORD *)(SubTask + 32) = 0;
        *(_DWORD *)(SubTask + 36) = 0;
        *(_DWORD *)SubTask = &off_6696A8;
        *(_DWORD *)(SubTask + 12) = v59;
        if ( v59 )
          CEntity::RegisterReference(v59, (CEntity **)(SubTask + 12));
        *(_WORD *)(SubTask + 44) = 5;
        *(_BYTE *)(SubTask + 46) = 3;
        *(_DWORD *)(SubTask + 48) = 1065353216;
        *(_DWORD *)(SubTask + 52) = 0;
        *(_DWORD *)(SubTask + 40) = -1;
        *(_BYTE *)(SubTask + 56) = 1;
        *(_BYTE *)(SubTask + 57) = 0;
        v60 = *((_BYTE *)this + 53);
        *(_BYTE *)(SubTask + 58) = v60 != 0;
        *((_BYTE *)this + 53) = 0;
        v61 = CTimer::m_snTimeInMilliseconds;
        *(_WORD *)((char *)this + 49) = 257;
        *((_DWORD *)this + 4) = v61 + 5000;
        *((_DWORD *)this + 5) = v61;
        *((_DWORD *)this + 11) = v61 + 2500;
        if ( *((_BYTE *)a2[484] + 1) == 1 )
          *((_BYTE *)this + 49) = 0;
        CPedIntelligence::ClearTaskDuckSecondary(a2[272]);
        if ( SubTask )
          goto LABEL_127;
LABEL_76:
        if ( !((v38 <= 6.0 || *((char *)this + 48) < 1) | IsTypeMelee) && (rand() & 1) != 0 )
        {
          CPed::ReleaseCoverPoint((CPed *)a2);
          v65 = *((_DWORD *)this + 3);
          v66 = *((unsigned __int8 *)this + 48);
          v67 = *(_DWORD *)(v65 + 20);
          v68 = (CPed *)(v67 + 48);
          if ( !v67 )
            v68 = (CPed *)(v65 + 4);
          v69 = 0;
          if ( v66 == 2 )
            v69 = (CVector *)((char *)&stderr + 1);
          v70 = (CCover *)CCover::FindAndReserveCoverPoint((CCover *)a2, v68, v69, v66);
          a2[484] = v70;
          if ( v70 )
          {
            v71 = *((_DWORD *)this + 3);
            v72 = *(_DWORD *)(v71 + 20);
            v73 = (CPed *)(v72 + 48);
            if ( !v72 )
              v73 = (CPed *)(v71 + 4);
            CoordinatesCoverPoint = CCover::FindCoordinatesCoverPoint(
                                      v70,
                                      (CCoverPoint *)a2,
                                      v73,
                                      (CVector *)&v110,
                                      v104);
            v111 = v111 + 1.0;
            if ( CoordinatesCoverPoint != 1 )
              goto LABEL_96;
            v75 = *((_DWORD *)this + 3);
            v76 = *(float32x2_t **)(v75 + 20);
            v77 = v76 + 6;
            if ( !v76 )
              v77 = (float32x2_t *)(v75 + 4);
            v78.n64_u64[0] = vsub_f32(v110, (float32x2_t)v77->n64_u64[0]).n64_u64[0];
            v79 = vmul_f32(v78, v78).n64_u64[0];
            if ( sqrtf(*(float *)&v79 + *((float *)&v79 + 1)) >= (float)(v21 * 0.75) )
              goto LABEL_96;
            v80 = a2[5];
            v81 = (const CVector *)(a2 + 1);
            if ( v80 )
              v81 = (CPedIntelligence *)((char *)v80 + 48);
            if ( CWorld::GetIsLineOfSightClear(
                   (CWorld *)&v110,
                   v81,
                   (const CVector *)((char *)&stderr + 1),
                   1,
                   0,
                   0,
                   0,
                   0,
                   0,
                   v105) == 1 )
            {
              if ( CPedGroups::GetPedsGroup((CPedGroups *)a2, v82) )
                CPed::Say((CPed *)a2, 0x41u, 0, 1.0, 0, 0, 0);
              CPedIntelligence::SetTaskDuckSecondary(a2[272], 0x1770u);
              SubTask = CTask::operator new((CTask *)&word_2C, v83);
              CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(
                (CTaskSimpleGoToPoint *)SubTask,
                6,
                (const CVector *)&v110,
                0.5,
                1,
                0);
              if ( SubTask )
                goto LABEL_127;
            }
            else
            {
LABEL_96:
              CPed::ReleaseCoverPoint((CPed *)a2);
            }
          }
        }
LABEL_97:
        if ( v38 <= 10.0 )
          goto LABEL_104;
        v84 = rand() & 3;
        if ( v84 == 1 )
        {
          SubTask = 0;
          if ( (*((_BYTE *)a2 + 1158) & 0x40) == 0 )
          {
            *((_BYTE *)this + 49) = 2;
            v90 = CTimer::m_snTimeInMilliseconds;
            *((_BYTE *)this + 50) = 0;
            *((_DWORD *)this + 11) = v90 + 2000;
          }
        }
        else if ( v84 )
        {
LABEL_104:
          SubTask = 0;
        }
        else
        {
          SubTask = 0;
          if ( (*((_BYTE *)a2 + 1158) & 0x40) == 0 )
          {
            CPed::Say((CPed *)a2, 0x90u, 0, 1.0, 0, 0, 0);
            v86 = CTask::operator new((CTask *)&dword_4C, v85);
            v87 = (CEntity *)*((_DWORD *)this + 3);
            CTaskComplex::CTaskComplex((CTaskComplex *)v86);
            *(_DWORD *)v86 = &off_6656E4;
            *(_DWORD *)(v86 + 16) = 50000;
            *(_DWORD *)(v86 + 20) = 1000;
            *(_DWORD *)(v86 + 28) = 0x40000000;
            *(_DWORD *)(v86 + 32) = 0;
            *(_DWORD *)(v86 + 36) = 0x40000000;
            *(_WORD *)(v86 + 48) = 0;
            *(_WORD *)(v86 + 60) = 0;
            *(_DWORD *)(v86 + 40) = 0;
            *(_DWORD *)(v86 + 44) = 0;
            *(_DWORD *)(v86 + 52) = 0;
            *(_DWORD *)(v86 + 56) = 0;
            v88 = *(_BYTE *)(v86 + 72);
            *(_DWORD *)(v86 + 64) = &off_665720;
            *(_DWORD *)(v86 + 68) = 6;
            *(_BYTE *)(v86 + 72) = v88 & 0xF0 | 3;
            *(float *)(v86 + 24) = v38 + -4.0;
            *(_DWORD *)(v86 + 12) = v87;
            if ( v87 )
              CEntity::RegisterReference(v87, (CEntity **)(v86 + 12));
            SubTask = v86;
          }
        }
        if ( v38 > 5.0 && (rand() & 3) == 0 )
        {
          *((_BYTE *)this + 49) = 0;
          if ( (rand() & 1) != 0 )
          {
            v89 = 1;
            *((_BYTE *)this + 49) = 1;
          }
          else
          {
            v89 = *((unsigned __int8 *)this + 49);
            if ( v89 != 1 )
              v89 = 0;
          }
          v91 = (float *)a2[5];
          if ( v91 )
            v11 = (char *)(v91 + 12);
          v92 = *(_QWORD *)v11;
          v111 = *((float *)v11 + 2);
          v110.n64_u64[0] = v92;
          v93 = *v91 * 2.5;
          v94 = v91[1] * 2.5;
          v95 = v91[2] * 2.5;
          v107 = v93;
          v108 = v94;
          v109 = v95;
          if ( v89 )
          {
            v96 = 0;
            v107 = *(float *)&v92 + v93;
            v108 = v110.n64_f32[1] + v94;
            v109 = v95 + v111;
            IsLineOfSightClear = CWorld::GetIsLineOfSightClear(
                                   (CWorld *)&v110,
                                   (const CVector *)&v107,
                                   (const CVector *)((char *)&stderr + 1),
                                   1,
                                   0,
                                   1,
                                   0,
                                   0,
                                   0,
                                   v105);
          }
          else
          {
            v96 = 1;
            v107 = *(float *)&v92 - v93;
            v108 = v110.n64_f32[1] - v94;
            v109 = v111 - v95;
            IsLineOfSightClear = CWorld::GetIsLineOfSightClear(
                                   (CWorld *)&v110,
                                   (const CVector *)&v107,
                                   (const CVector *)((char *)&stderr + 1),
                                   1,
                                   0,
                                   1,
                                   0,
                                   0,
                                   0,
                                   v105);
          }
          if ( !IsLineOfSightClear )
            *((_BYTE *)this + 49) = v96;
          v98 = CTimer::m_snTimeInMilliseconds;
          *((_BYTE *)this + 50) = 0;
          *((_DWORD *)this + 11) = v98 + 2000;
        }
        if ( !SubTask )
        {
          if ( CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(this, (CPed *)a2) == 1 )
          {
LABEL_24:
            SubTask = CTaskComplexKillPedOnFootArmed::CreateSubTask(this, 1020, (CPed *)a2);
            goto LABEL_25;
          }
          if ( (rand() & 3) == 0 )
          {
            *((_BYTE *)this + 49) = rand() & 1;
            v99 = CTimer::m_snTimeInMilliseconds;
            *((_BYTE *)this + 50) = 0;
            *((_DWORD *)this + 11) = v99 + 2000;
          }
LABEL_126:
          CPed::GetWeaponSkill((CPed *)a2);
          CWeaponInfo::GetWeaponInfo();
          CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)&v110, 0, 0, 0, 8.0);
          CTaskSimpleStandStill::ProcessPed(v100, (CPed *)a2);
          CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)&v110);
          SubTask = CTask::operator new((CTask *)&off_18, v101);
          CTaskSimple::CTaskSimple((CTaskSimple *)SubTask);
          *(_WORD *)(SubTask + 16) = 0;
          *(_DWORD *)(SubTask + 20) = 100;
          *(_DWORD *)(SubTask + 8) = 0;
          *(_DWORD *)(SubTask + 12) = 0;
          *(_DWORD *)SubTask = &off_665760;
          *((_DWORD *)this + 5) = CTimer::m_snTimeInMilliseconds;
        }
LABEL_127:
        if ( (rand() & 1) != 0 && *((char *)this + 48) >= 1 && !(*((unsigned __int8 *)a2 + 1159) << 31) )
        {
          v102 = a2[484];
          if ( !v102 || (unsigned __int8)(*((_BYTE *)v102 + 1) - 1) >= 2u )
            CPedIntelligence::SetTaskDuckSecondary(a2[272], 0x1770u);
        }
        break;
    }
    goto LABEL_133;
  }
  if ( (unsigned int)(v22 - 202) >= 2 )
  {
    if ( v22 == 415 )
    {
      v39 = CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(this, (CPed *)a2);
      v40 = 202;
      if ( v39 )
        v40 = 1020;
      SubTask = CTaskComplexKillPedOnFootArmed::CreateSubTask(this, v40, (CPed *)a2);
      a2[289] = (CPedIntelligence *)((unsigned int)a2[289] & 0xFBFFFFFF);
    }
    goto LABEL_133;
  }
  if ( (*((_BYTE *)a2 + 1158) & 0x60) != 0 )
  {
    CPed::GetWeaponSkill((CPed *)a2);
    v27 = CWeaponInfo::GetWeaponInfo();
    v28 = *((_DWORD *)this + 3);
    v29 = 202;
    v30 = a2[5];
    v31 = *(_DWORD *)(v28 + 20);
    if ( v30 )
      v11 = (char *)v30 + 48;
    v32 = v31 + 48;
    if ( !v31 )
      v32 = v28 + 4;
    v33.n64_u64[0] = vsub_f32(*(float32x2_t *)(v32 + 4), *(float32x2_t *)(v11 + 4)).n64_u64[0];
    v34 = vmul_f32(v33, v33).n64_u64[0];
    if ( (float)((float)((float)((float)(*(float *)v32 - *(float *)v11) * (float)(*(float *)v32 - *(float *)v11))
                       + *(float *)&v34)
               + *((float *)&v34 + 1)) < (float)(*(float *)(v27 + 4) * *(float *)(v27 + 4))
      && CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(this, (CPed *)a2) )
    {
      v29 = 1020;
    }
    v35 = this;
    v36 = v29;
LABEL_33:
    SubTask = CTaskComplexKillPedOnFootArmed::CreateSubTask(v35, v36, (CPed *)a2);
LABEL_133:
    v41 = (int *)((char *)this + 88);
    v43 = 0;
    goto LABEL_134;
  }
  CPed::Say((CPed *)a2, 0x90u, 0, 1.0, 0, 0, 0);
  SubTask = CTaskComplexKillPedOnFootArmed::CreateSubTask(this, 907, (CPed *)a2);
LABEL_35:
  v42 = *((_DWORD *)this + 22);
  v41 = (int *)((char *)this + 88);
  if ( !v42 )
  {
    v43 = CTimer::m_snTimeInMilliseconds;
LABEL_134:
    *v41 = v43;
  }
  return SubTask;
}


// ============================================================

// Address: 0x4e3b80
// Original: _ZNK30CTaskComplexKillPedOnFootArmed23IsPedInLeaderFiringLineEP4CPed
// Demangled: CTaskComplexKillPedOnFootArmed::IsPedInLeaderFiringLine(CPed *)
int __fastcall CTaskComplexKillPedOnFootArmed::IsPedInLeaderFiringLine(CTaskComplexKillPedOnFootArmed *this, CPed *a2)
{
  int PedsGroup; // r0
  CPed *Leader; // r0
  CPed *v5; // r4
  int v6; // r5
  int v7; // r1
  float *v8; // r8
  int v9; // r0
  float *v10; // r9
  int v11; // r2
  float *v12; // r0
  float v13; // s2
  float v14; // s6
  int v15; // r1
  float v16; // s8
  float *v17; // r0
  float v18; // s10
  float v19; // s4
  float v20; // s0
  float v21; // s12
  float v22; // s1
  float v23; // s2
  float v24; // s7
  float v25; // s14
  int v26; // r1
  float v27; // s8
  int v28; // r2
  float *v29; // r0
  int v30; // r0
  float v32; // [sp+4h] [bp-24h] BYREF
  float v33; // [sp+8h] [bp-20h]
  float v34; // [sp+Ch] [bp-1Ch]

  PedsGroup = CPedGroups::GetPedsGroup(a2, a2);
  if ( !PedsGroup )
    return 0;
  Leader = (CPed *)CPedGroupMembership::GetLeader((CPedGroupMembership *)(PedsGroup + 8));
  v5 = Leader;
  if ( !Leader || CPed::IsPlayer(Leader) != 1 || !*((_DWORD *)v5 + 456) )
    return 0;
  v6 = 0;
  if ( !CWeapon::IsTypeMelee((CPed *)((char *)v5 + 28 * *((char *)v5 + 1820) + 1444)) )
  {
    v7 = *((_DWORD *)v5 + 456);
    v8 = (float *)((char *)v5 + 4);
    v9 = *((_DWORD *)v5 + 5);
    v10 = (float *)((char *)v5 + 4);
    v11 = *(_DWORD *)(v7 + 20);
    if ( v9 )
      v10 = (float *)(v9 + 48);
    v12 = (float *)(v11 + 48);
    v13 = v10[1];
    if ( !v11 )
      v12 = (float *)(v7 + 4);
    v14 = v12[1];
    v32 = *v12 - *v10;
    v34 = 0.0;
    v33 = v14 - v13;
    CVector::Normalise((CVector *)&v32);
    v15 = *((_DWORD *)a2 + 5);
    v16 = *v10;
    v17 = (float *)(v15 + 48);
    v18 = v10[1];
    v19 = v10[2];
    if ( !v15 )
      v17 = (float *)((char *)a2 + 4);
    v20 = *v17;
    v21 = v17[1];
    v22 = *v17 - v16;
    v23 = v17[2];
    v24 = v34;
    v34 = 0.0;
    v25 = (float)((float)(v22 * v32) + (float)((float)(v21 - v18) * v33)) + (float)((float)(v23 - v19) * v24);
    v32 = (float)(v16 + (float)(v32 * v25)) - v20;
    v33 = (float)(v18 + (float)(v33 * v25)) - v21;
    if ( (float)((float)((float)(v32 * v32) + (float)(v33 * v33)) + 0.0) < 4.0 )
    {
      v26 = *((_DWORD *)v5 + 456);
      v27 = v17[1];
      v28 = *(_DWORD *)(v26 + 20);
      v29 = (float *)(v28 + 48);
      if ( !v28 )
        v29 = (float *)(v26 + 4);
      if ( (float)((float)((float)((float)(*v29 - *v10) * (float)(v20 - *v10))
                         + (float)((float)(v29[1] - v10[1]) * (float)(v27 - v10[1])))
                 + (float)((float)(v29[2] - v19) * (float)(v23 - v19))) > 0.0 )
      {
        v30 = *((_DWORD *)v5 + 5);
        if ( v30 )
          v8 = (float *)(v30 + 48);
        if ( (float)((float)((float)((float)(v20 - *v8) * (float)(v20 - *v8))
                           + (float)((float)(v27 - v8[1]) * (float)(v27 - v8[1])))
                   + (float)((float)(v23 - v8[2]) * (float)(v23 - v8[2]))) < 100.0 )
          return 1;
      }
    }
    return 0;
  }
  return v6;
}


// ============================================================

// Address: 0x4e3d6c
// Original: _ZN30CTaskComplexKillPedOnFootArmed14ControlSubTaskEP4CPed
// Demangled: CTaskComplexKillPedOnFootArmed::ControlSubTask(CPed *)
int __fastcall CTaskComplexKillPedOnFootArmed::ControlSubTask(
        CTaskComplexKillPedOnFootArmed *this,
        CPedIntelligence **a2)
{
  int v4; // r9
  int WeaponInfo; // r11
  int v7; // r0
  int v8; // r1
  CPedIntelligence *v9; // r1
  int v10; // r2
  char *v11; // r3
  int v12; // r1
  float32x2_t v13; // d16
  unsigned __int64 v14; // d1
  bool v15; // zf
  int TaskDuck; // r1
  CPedIntelligence *v17; // r0
  CTaskSimpleDuck *v18; // r0
  int v19; // r0
  int v20; // r8
  int v21; // r0
  unsigned int v22; // r0
  float *v23; // r1
  int v24; // r2
  char *v25; // r3
  unsigned int v26; // r4
  float32x2_t v27; // d16
  unsigned __int64 v28; // d1
  _BOOL4 v29; // r4
  int v30; // r0
  CPedIntelligence *v31; // r1
  int v32; // r2
  char *v33; // r3
  int v34; // r1
  float32x2_t v35; // d16
  unsigned __int64 v36; // d1
  float v37; // s16
  float v38; // s0
  int v39; // r0
  const CPed *v40; // r1
  int TaskUseGun; // r4
  float v42; // s0
  int v43; // r0
  unsigned int v44; // r0
  float v45; // s2
  const CPed *v46; // r1
  float v47; // s6
  float v48; // s4
  unsigned int v49; // r1
  float v50; // s6

  v4 = *((_DWORD *)this + 2);
  CPed::GetWeaponSkill((CPed *)a2);
  WeaponInfo = CWeaponInfo::GetWeaponInfo();
  if ( *((_BYTE *)this + 52) )
    return (*(int (__fastcall **)(CTaskComplexKillPedOnFootArmed *, CPedIntelligence **))(*(_DWORD *)this + 44))(
             this,
             a2);
  v7 = *((_DWORD *)this + 3);
  if ( !v7 || *(float *)(v7 + 1348) <= 0.0 )
    return 0;
  v8 = *((_DWORD *)this + 7);
  if ( (v8 & 4) == 0
    || CTimer::m_snTimeInMilliseconds <= (unsigned int)(*((_DWORD *)this + 8) + *((_DWORD *)this + 10) + 2000)
    || (*((_BYTE *)a2 + 1159) & 4) != 0 )
  {
    v15 = v8 << 31 == 0;
    if ( v8 << 31 )
      v15 = *((_BYTE *)this + 51) == 0;
    if ( !v15
      && *((_DWORD *)this + 9) > (unsigned int)(int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259)
                                                          * 100.0) )
    {
      TaskDuck = CPedIntelligence::GetTaskDuck(a2[272], 1);
      v17 = a2[272];
      if ( TaskDuck )
      {
        v18 = (CTaskSimpleDuck *)CPedIntelligence::GetTaskDuck(v17, 1);
        CTaskSimpleDuck::SetDuckTimer(v18, *((_WORD *)this + 16));
      }
      else
      {
        CPedIntelligence::SetTaskDuckSecondary(v17, *((_WORD *)this + 16));
      }
    }
  }
  else
  {
    v9 = a2[5];
    v10 = *(_DWORD *)(v7 + 20);
    v11 = (char *)v9 + 48;
    if ( !v9 )
      v11 = (char *)(a2 + 1);
    v12 = v10 + 48;
    if ( !v10 )
      v12 = v7 + 4;
    v13.n64_u64[0] = vsub_f32(*(float32x2_t *)(v12 + 4), *(float32x2_t *)(v11 + 4)).n64_u64[0];
    v14 = vmul_f32(v13, v13).n64_u64[0];
    if ( (float)((float)((float)((float)(*(float *)v12 - *(float *)v11) * (float)(*(float *)v12 - *(float *)v11))
                       + *(float *)&v14)
               + *((float *)&v14 + 1)) < 400.0
      && *((_DWORD *)this + 9) > (unsigned int)(int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259)
                                                          * 100.0) )
    {
      CPedIntelligence::SetTaskDuckSecondary(a2[272], *((_WORD *)this + 16));
    }
    *((_DWORD *)this + 10) = CTimer::m_snTimeInMilliseconds;
  }
  v19 = CPedIntelligence::GetTaskDuck(a2[272], 1);
  v20 = v19;
  if ( v19 )
    *(_BYTE *)(v19 + 27) = 1;
  if ( v4 != *((_DWORD *)this + 2) )
    return v4;
  v21 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4);
  if ( v21 == 1020 )
  {
    v30 = *((_DWORD *)this + 3);
    v31 = a2[5];
    v32 = *(_DWORD *)(v30 + 20);
    v33 = (char *)v31 + 48;
    if ( !v31 )
      v33 = (char *)(a2 + 1);
    v34 = v32 + 48;
    if ( !v32 )
      v34 = v30 + 4;
    v35.n64_u64[0] = vsub_f32(*(float32x2_t *)(v34 + 4), *(float32x2_t *)(v33 + 4)).n64_u64[0];
    v36 = vmul_f32(v35, v35).n64_u64[0];
    v37 = sqrtf(
            (float)((float)((float)(*(float *)v34 - *(float *)v33) * (float)(*(float *)v34 - *(float *)v33))
                  + *(float *)&v36)
          + *((float *)&v36 + 1));
    v38 = *(float *)(WeaponInfo + 4);
    if ( v37 > v38
      || v37 > (float)(v38 * 0.5)
      && (*((_BYTE *)a2 + 1158) & 0x20) == 0
      && CTimer::m_snTimeInMilliseconds > (unsigned int)(*((_DWORD *)this + 5) + 2500)
      || v37 > 4.0
      && (*((_BYTE *)a2 + 1158) & 0x20) == 0
      && (unsigned int)CTimer::m_snTimeInMilliseconds > *((_DWORD *)this + 4)
      || !CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(this, (CPed *)a2) )
    {
      v39 = *((_DWORD *)this + 2);
      if ( *(_BYTE *)(v39 + 46) != 6 )
      {
        *(_DWORD *)(v39 + 52) = 0;
        *(_BYTE *)(v39 + 46) = 6;
      }
    }
    TaskUseGun = CPedIntelligence::GetTaskUseGun(a2[272]);
    if ( !TaskUseGun )
      return v4;
    if ( CPedGroups::GetPedsGroup((CPedGroups *)a2, v40) )
      CPed::Say((CPed *)a2, 0xCFu, 0, 1.0, 0, 0, 0);
    v42 = 0.0;
    if ( !(*(unsigned __int8 *)(*((_DWORD *)this + 3) + 69) << 31) )
    {
      v43 = CTimer::m_snTimeInMilliseconds;
      if ( (unsigned int)CTimer::m_snTimeInMilliseconds >= *((_DWORD *)this + 11) || (*((_BYTE *)a2 + 1158) & 0x20) != 0 )
      {
        if ( v37 < 4.0 && (*((_BYTE *)a2 + 1158) & 0x20) == 0 )
        {
          v45 = 1.0;
          if ( v20 )
            goto LABEL_81;
LABEL_74:
          v47 = *(float *)(TaskUseGun + 24);
          v48 = *(float *)&CTimer::ms_fTimeStep * 0.07;
          if ( (float)(v45 - v47) <= (float)(*(float *)&CTimer::ms_fTimeStep * 0.07) )
          {
            if ( (float)(v45 - v47) < (float)-v48 )
              v45 = v47 - v48;
          }
          else
          {
            v45 = v48 + v47;
          }
          v50 = *(float *)(TaskUseGun + 20);
          *(float *)(TaskUseGun + 24) = v45;
          if ( (float)(v42 - v50) <= v48 )
          {
            if ( (float)(v42 - v50) < (float)-v48 )
              v42 = v50 - v48;
          }
          else
          {
            v42 = v48 + v50;
          }
          *(_BYTE *)(TaskUseGun + 10) = 1;
          *(float *)(TaskUseGun + 20) = v42;
          return v4;
        }
        if ( *((_BYTE *)this + 50) )
        {
          v49 = *((unsigned __int8 *)this + 49);
          if ( v49 <= 3 )
            *((_BYTE *)this + 49) = 0x2030001u >> (8 * v49);
          *((_DWORD *)this + 11) = v43 + 2500;
          *((_BYTE *)this + 50) = 0;
        }
      }
      else
      {
        v44 = *((char *)this + 49);
        if ( v44 < 4 )
        {
          v45 = *(float *)&dword_4E431C[v44];
          v42 = *(float *)&dword_4E432C[v44];
          if ( !v20 )
            goto LABEL_74;
LABEL_81:
          if ( *((unsigned __int8 *)this + 49) > 1u
            || CTimer::m_snTimeInMilliseconds <= (unsigned int)(*((_DWORD *)this + 6) + 3000) )
          {
            CTaskSimpleDuck::ControlDuckMove();
          }
          else
          {
            CTaskSimpleDuck::ControlDuckMove();
            *((_DWORD *)this + 6) = CTimer::m_snTimeInMilliseconds;
          }
          return v4;
        }
      }
    }
    v45 = 0.0;
    if ( v20 )
      goto LABEL_81;
    goto LABEL_74;
  }
  if ( v21 != 907 )
    return v4;
  v22 = *((unsigned __int8 *)a2 + 1158) << 26;
  if ( (*((_BYTE *)a2 + 1158) & 0x20) != 0 )
    goto LABEL_61;
  v22 = *((_DWORD *)this + 3);
  v23 = (float *)a2[5];
  v24 = *(_DWORD *)(v22 + 20);
  v25 = (char *)(v23 + 12);
  if ( !v23 )
    v25 = (char *)(a2 + 1);
  v26 = v24 + 48;
  if ( !v24 )
    v26 = v22 + 4;
  v27.n64_u64[0] = vsub_f32(*(float32x2_t *)(v26 + 4), *(float32x2_t *)(v25 + 4)).n64_u64[0];
  v28 = vmul_f32(v27, v27).n64_u64[0];
  if ( sqrtf(
         (float)((float)((float)(*(float *)v26 - *(float *)v25) * (float)(*(float *)v26 - *(float *)v25))
               + *(float *)&v28)
       + *((float *)&v28 + 1)) >= (float)(*(float *)(WeaponInfo + 4) * 0.5) )
  {
LABEL_61:
    v29 = 0;
  }
  else if ( (float)((float)((float)(*(float *)(v22 + 72) * v23[4]) + (float)(*(float *)(v22 + 76) * v23[5]))
                  + (float)(*(float *)(v22 + 80) * v23[6])) >= 0.0 )
  {
    v22 = CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 5);
    v29 = v22 > 0x7D0;
  }
  else
  {
    v29 = 1;
  }
  if ( CTaskComplexKillPedOnFootArmed::IsPedInLeaderFiringLine((CTaskComplexKillPedOnFootArmed *)v22, (CPed *)a2) != 1
    && (!v29 && (*((_BYTE *)a2 + 1158) & 0x20) == 0
     || CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(this, (CPed *)a2) != 1)
    && (!(*(unsigned __int8 *)(*((_DWORD *)this + 3) + 69) << 31)
     || CTaskComplexKillPedOnFootArmed::LineOfSightClearForAttack(this, (CPed *)a2) != 1) )
  {
    if ( CPedGroups::GetPedsGroup((CPedGroups *)a2, v46) )
      CPed::Say((CPed *)a2, 0x41u, 0, 1.0, 0, 0, 0);
    return v4;
  }
  return CTaskComplexKillPedOnFootArmed::CreateSubTask(this, 1020, (CPed *)a2);
}


// ============================================================

// Address: 0x4e9fd0
// Original: _ZNK30CTaskComplexKillPedOnFootArmed5CloneEv
// Demangled: CTaskComplexKillPedOnFootArmed::Clone(void)
CTaskComplex *__fastcall CTaskComplexKillPedOnFootArmed::Clone(CTaskComplexKillPedOnFootArmed *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  CEntity *v4; // r6
  CTaskComplex *v5; // r5
  int v6; // r8
  int v7; // r9
  int v8; // r10
  char v9; // r11

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_5C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = v3;
  v6 = *((_DWORD *)this + 7);
  v7 = *((_DWORD *)this + 8);
  v8 = *((_DWORD *)this + 9);
  v9 = *((_BYTE *)this + 48);
  CTaskComplex::CTaskComplex(v3);
  *((_QWORD *)v5 + 7) = 0LL;
  *((_QWORD *)v5 + 8) = 3323739136LL;
  *((_DWORD *)v5 + 4) = 0;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 6) = 0;
  *((_DWORD *)v5 + 7) = v6;
  *((_DWORD *)v5 + 8) = v7;
  *((_DWORD *)v5 + 9) = v8;
  *((_DWORD *)v5 + 10) = 0;
  *((_DWORD *)v5 + 11) = 0;
  *((_BYTE *)v5 + 48) = v9;
  *(_DWORD *)((char *)v5 + 50) = 0;
  *((_DWORD *)v5 + 18) = 0;
  *((_DWORD *)v5 + 19) = -971228160;
  *((_DWORD *)v5 + 20) = 0;
  *((_DWORD *)v5 + 21) = 0;
  *((_DWORD *)v5 + 22) = 0;
  *(_DWORD *)v5 = &off_669904;
  *((_DWORD *)v5 + 3) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)v5 + 3);
  *((_BYTE *)v5 + 53) = *((_BYTE *)this + 53);
  return v5;
}


// ============================================================

// Address: 0x4ea074
// Original: _ZNK30CTaskComplexKillPedOnFootArmed11GetTaskTypeEv
// Demangled: CTaskComplexKillPedOnFootArmed::GetTaskType(void)
int __fastcall CTaskComplexKillPedOnFootArmed::GetTaskType(CTaskComplexKillPedOnFootArmed *this)
{
  return 1002;
}


// ============================================================

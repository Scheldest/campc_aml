
// Address: 0x18b4a0
// Original: j__ZN24CTaskComplexGangFollowerC2EP9CPedGroupP4CPedh7CVectorf
// Demangled: CTaskComplexGangFollower::CTaskComplexGangFollower(CPedGroup *,CPed *,uchar,CVector,float)
// attributes: thunk
int CTaskComplexGangFollower::CTaskComplexGangFollower()
{
  return _ZN24CTaskComplexGangFollowerC2EP9CPedGroupP4CPedh7CVectorf();
}


// ============================================================

// Address: 0x195d94
// Original: j__ZN24CTaskComplexGangFollower23CalculateOffsetPositionER7CVector
// Demangled: CTaskComplexGangFollower::CalculateOffsetPosition(CVector &)
// attributes: thunk
int __fastcall CTaskComplexGangFollower::CalculateOffsetPosition(CTaskComplexGangFollower *this, CVector *a2)
{
  return _ZN24CTaskComplexGangFollower23CalculateOffsetPositionER7CVector(this, a2);
}


// ============================================================

// Address: 0x196dd4
// Original: j__ZN24CTaskComplexGangFollower15SetFollowLeaderEh
// Demangled: CTaskComplexGangFollower::SetFollowLeader(uchar)
// attributes: thunk
int __fastcall CTaskComplexGangFollower::SetFollowLeader(CTaskComplexGangFollower *this, unsigned __int8 a2)
{
  return _ZN24CTaskComplexGangFollower15SetFollowLeaderEh(this, a2);
}


// ============================================================

// Address: 0x5163e8
// Original: _ZN24CTaskComplexGangFollowerC2EP9CPedGroupP4CPedh7CVectorf
// Demangled: CTaskComplexGangFollower::CTaskComplexGangFollower(CPedGroup *,CPed *,uchar,CVector,float)
int __fastcall CTaskComplexGangFollower::CTaskComplexGangFollower(
        int a1,
        int a2,
        CEntity *a3,
        char a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        int a8)
{
  int v12; // r6
  char v13; // r1
  char v14; // r0
  int v15; // r0
  __int64 *v16; // r1
  __int64 v17; // d16
  int PlayerPed; // r0
  char v19; // r1
  bool v20; // zf
  int result; // r0
  char v22; // r2

  CTaskComplex::CTaskComplex((CTaskComplex *)a1);
  v12 = 0;
  *(_WORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 12) = a2;
  v13 = *(_BYTE *)(a1 + 61);
  *(_BYTE *)(a1 + 60) = a4;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 32) = a5;
  *(_DWORD *)(a1 + 36) = a6;
  *(_QWORD *)(a1 + 40) = __PAIR64__(a5, a7);
  *(_DWORD *)(a1 + 48) = a6;
  *(_DWORD *)(a1 + 52) = a7;
  v14 = v13 | 0x14;
  *(_DWORD *)(a1 + 56) = a8;
  *(_BYTE *)(a1 + 61) = v13 | 0x14;
  *(_DWORD *)a1 = &off_66BDBC;
  *(_DWORD *)(a1 + 16) = a3;
  if ( a3 )
  {
    CEntity::RegisterReference(a3, (CEntity **)(a1 + 16));
    v12 = *(_DWORD *)(a1 + 16);
    v15 = *(_DWORD *)(v12 + 20);
    v16 = (__int64 *)(v15 + 48);
    if ( !v15 )
      v16 = (__int64 *)(v12 + 4);
    v14 = *(_BYTE *)(a1 + 61);
    v17 = *v16;
    *(_DWORD *)(a1 + 28) = *((_DWORD *)v16 + 2);
    *(_QWORD *)(a1 + 20) = v17;
  }
  *(_BYTE *)(a1 + 61) = v14 & 0xFC;
  PlayerPed = FindPlayerPed(0);
  v19 = *(_BYTE *)(a1 + 61);
  v20 = v12 == PlayerPed;
  result = a1;
  v22 = v19 & 0xF7;
  if ( v20 )
    v22 = v19 | 8;
  *(_BYTE *)(a1 + 61) = v22;
  return result;
}


// ============================================================

// Address: 0x5164a0
// Original: _ZN24CTaskComplexGangFollowerD2Ev
// Demangled: CTaskComplexGangFollower::~CTaskComplexGangFollower()
void __fastcall CTaskComplexGangFollower::~CTaskComplexGangFollower(CTaskComplexGangFollower *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66BDBC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  if ( *((unsigned __int8 *)this + 61) << 31 )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex(
                                            (CAnimManager *)"gangs",
                                            (const char *)v3);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v5);
    *((_BYTE *)this + 61) &= ~1u;
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5164f0
// Original: _ZN24CTaskComplexGangFollowerD0Ev
// Demangled: CTaskComplexGangFollower::~CTaskComplexGangFollower()
void __fastcall CTaskComplexGangFollower::~CTaskComplexGangFollower(CTaskComplexGangFollower *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v5; // r1
  void *v6; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66BDBC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  if ( *((unsigned __int8 *)this + 61) << 31 )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex(
                                            (CAnimManager *)"gangs",
                                            (const char *)v3);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v5);
    *((_BYTE *)this + 61) &= ~1u;
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x516544
// Original: _ZN24CTaskComplexGangFollower13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexGangFollower::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexGangFollower::MakeAbortable(
        CTaskComplexGangFollower *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v4; // r0
  int result; // r0
  int v7; // r1

  v4 = *((_DWORD *)this + 2);
  if ( v4 && (*(int (__fastcall **)(int, CPed *, int, const CEvent *))(*(_DWORD *)v4 + 28))(v4, a2, a3, a4) != 1 )
    return 0;
  v7 = *((_DWORD *)a2 + 292);
  *((_DWORD *)a2 + 291) &= ~0x400000u;
  result = 1;
  *((_DWORD *)a2 + 292) = v7 & 0xFFFEFFFF;
  return result;
}


// ============================================================

// Address: 0x51657c
// Original: _ZNK24CTaskComplexGangFollower5CloneEv
// Demangled: CTaskComplexGangFollower::Clone(void)
int __fastcall CTaskComplexGangFollower::Clone(CTaskComplexGangFollower *this, unsigned int a2)
{
  int v3; // r5
  unsigned int v4; // r6
  unsigned int v5; // r11
  int v6; // r9
  __int64 v7; // kr08_8
  int v8; // r6
  char v9; // r1
  char v10; // r0
  int v11; // r0
  __int64 *v12; // r1
  __int64 v13; // d16
  int PlayerPed; // r0
  char v15; // r1
  char v16; // r2
  int v18; // [sp+4h] [bp-24h]
  char v19; // [sp+8h] [bp-20h]

  v3 = CTask::operator new((CTask *)&dword_4C, a2);
  v19 = *((_BYTE *)this + 60);
  v18 = *((_DWORD *)this + 14);
  v5 = *((_DWORD *)this + 9);
  v4 = *((_DWORD *)this + 8);
  v6 = *((_DWORD *)this + 10);
  v7 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 12) = v7;
  *(_QWORD *)(v3 + 44) = __PAIR64__(v5, v4);
  *(_QWORD *)(v3 + 32) = __PAIR64__(v5, v4);
  v8 = 0;
  *(_DWORD *)(v3 + 52) = v6;
  *(_DWORD *)(v3 + 40) = v6;
  *(_WORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 56) = v18;
  *(_BYTE *)(v3 + 60) = v19;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 68) = 0;
  v9 = *(_BYTE *)(v3 + 61);
  *(_DWORD *)v3 = &off_66BDBC;
  v10 = v9 | 0x14;
  *(_BYTE *)(v3 + 61) = v9 | 0x14;
  *(_DWORD *)(v3 + 16) = HIDWORD(v7);
  if ( HIDWORD(v7) )
  {
    CEntity::RegisterReference((CEntity *)HIDWORD(v7), (CEntity **)(v3 + 16));
    v8 = *(_DWORD *)(v3 + 16);
    v11 = *(_DWORD *)(v8 + 20);
    v12 = (__int64 *)(v11 + 48);
    if ( !v11 )
      v12 = (__int64 *)(v8 + 4);
    v10 = *(_BYTE *)(v3 + 61);
    v13 = *v12;
    *(_DWORD *)(v3 + 28) = *((_DWORD *)v12 + 2);
    *(_QWORD *)(v3 + 20) = v13;
  }
  *(_BYTE *)(v3 + 61) = v10 & 0xFC;
  PlayerPed = FindPlayerPed(0);
  v15 = *(_BYTE *)(v3 + 61);
  v16 = v15 & 0xF7;
  if ( v8 == PlayerPed )
    v16 = v15 | 8;
  *(_BYTE *)(v3 + 61) = v16;
  *(_BYTE *)(v3 + 61) = *((_BYTE *)this + 61) & 4 | v16 & 0xFB;
  return v3;
}


// ============================================================

// Address: 0x516660
// Original: _ZN24CTaskComplexGangFollower17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexGangFollower::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexGangFollower::CreateNextSubTask(CTaskComplexGangFollower *this, CPed *a2)
{
  signed int v4; // r1
  int v5; // r6
  int v6; // r0
  int v7; // r6
  unsigned int v8; // r1
  CTaskComplexWanderGang *v9; // r5
  unsigned __int16 v10; // r0
  CTaskManager *v11; // r0
  int v12; // r6
  int v13; // r0
  CPed *v14; // r0
  int v15; // r2
  int v16; // r3
  int v17; // r1
  unsigned int v19; // r1
  unsigned int v20; // r1
  int v21; // r6
  unsigned __int16 v22; // r0
  CPed *Member; // r8
  CEntity *v24; // r4
  int v25; // r0
  CEntity *v26; // r8
  char v27; // r3
  char v28; // r0
  __int64 v29; // d16

  if ( !*((_DWORD *)this + 4) )
  {
    v13 = *((_DWORD *)a2 + 289);
    v12 = 0;
    goto LABEL_9;
  }
  v4 = *((unsigned __int8 *)this + 61);
  v5 = *(_DWORD *)(*((_DWORD *)a2 + 272) + 632);
  if ( (v4 & 2) != 0 )
  {
    v6 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
    v4 = 1210;
    if ( v6 == 1210 )
    {
      CPedGroupMembership::RemoveMember((CPedGroupMembership *)(*((_DWORD *)this + 3) + 8), a2);
      v7 = *((_DWORD *)a2 + 272);
      v9 = (CTaskComplexWanderGang *)CTask::operator new((CTask *)&dword_38, v8);
      v10 = rand();
      CTaskComplexWanderGang::CTaskComplexWanderGang(
        v9,
        4,
        (int)(float)((float)((float)v10 * 0.000015259) * 8.0),
        30000,
        1,
        0.5);
      v11 = (CTaskManager *)(v7 + 4);
      v12 = 0;
      CTaskManager::SetTask(v11, v9, 4, 0);
      v13 = *((_DWORD *)a2 + 289);
LABEL_9:
      v15 = *((_DWORD *)a2 + 291);
      v16 = *((_DWORD *)a2 + 292);
      v17 = *((_DWORD *)a2 + 290);
      *((_DWORD *)a2 + 289) = v13;
      *((_DWORD *)a2 + 290) = v17;
      *((_DWORD *)a2 + 291) = v15;
      *((_DWORD *)a2 + 292) = v16 & 0xFFFEFFFF;
      return v12;
    }
  }
  if ( v5 > 30 )
  {
    v14 = (CPed *)*((_DWORD *)this + 4);
    if ( !v14 )
      goto LABEL_15;
    goto LABEL_13;
  }
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 907 )
  {
    v14 = (CPed *)*((_DWORD *)this + 4);
    v4 = *((_DWORD *)v14 + 276);
    if ( v4 < 4 )
    {
      if ( !v14 )
      {
LABEL_15:
        v12 = CTask::operator new((CTask *)&dword_20, v4);
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v12, 500, 0, 0, 8.0);
        return v12;
      }
LABEL_13:
      if ( CPed::IsPlayer(v14) == 1 )
        CPed::Say(a2, 0x5Au, 0, 0.3, 0, 0, 0);
      goto LABEL_15;
    }
  }
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 203
    || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 426 )
  {
    if ( (*((_BYTE *)this + 61) & 2) != 0 )
    {
      v12 = CTask::operator new((CTask *)&off_18, v19);
      v24 = (CEntity *)*((_DWORD *)this + 4);
      CTaskComplex::CTaskComplex((CTaskComplex *)v12);
      *(_DWORD *)(v12 + 16) = 0;
      *(_WORD *)(v12 + 20) = 0;
      *(_DWORD *)v12 = &off_66BF50;
      *(_DWORD *)(v12 + 12) = v24;
      if ( v24 )
        CEntity::RegisterReference(v24, (CEntity **)(v12 + 12));
    }
    else
    {
      if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 30.0) != 20 )
        goto LABEL_27;
      v21 = CPedGroupMembership::CountMembers((CPedGroupMembership *)(*((_DWORD *)this + 3) + 8));
      v22 = rand();
      Member = (CPed *)CPedGroupMembership::GetMember(
                         (CPedGroupMembership *)(*((_DWORD *)this + 3) + 8),
                         (int)(float)((float)((float)v22 * 0.000015259) * (float)v21));
      if ( Member == a2 )
        Member = (CPed *)CPedGroupMembership::GetLeader((CPedGroupMembership *)(*((_DWORD *)this + 3) + 8));
      if ( Member )
      {
        v12 = CTask::operator new((CTask *)&word_28, v20);
        CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(
          (CTaskComplexTurnToFaceEntityOrCoord *)v12,
          Member,
          0.5,
          0.2);
      }
      else
      {
LABEL_27:
        v12 = CTask::operator new((CTask *)&off_18, v20);
        CTaskSimple::CTaskSimple((CTaskSimple *)v12);
        *(_WORD *)(v12 + 16) = 0;
        *(_DWORD *)(v12 + 20) = 50;
        *(_DWORD *)(v12 + 8) = 0;
        *(_DWORD *)(v12 + 12) = 0;
        *(_DWORD *)v12 = &off_665760;
      }
    }
    return v12;
  }
  v25 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v4 = 709;
  if ( v25 != 709 )
  {
    if ( (*((_BYTE *)this + 61) & 4) != 0 )
    {
      v12 = CTask::operator new((CTask *)&dword_58, 0x2C5u);
      v26 = (CEntity *)*((_DWORD *)this + 4);
      CTaskComplex::CTaskComplex((CTaskComplex *)v12);
      *(_QWORD *)(v12 + 24) = 0x40A000003F000000LL;
      *(_QWORD *)(v12 + 32) = 0x4000000000000000LL;
      *(_QWORD *)(v12 + 16) = 0x3E80000C350LL;
      *(_WORD *)(v12 + 48) = 0;
      *(_WORD *)(v12 + 60) = 0;
      *(_DWORD *)(v12 + 40) = 0;
      *(_DWORD *)(v12 + 44) = 0;
      *(_DWORD *)(v12 + 52) = 0;
      *(_DWORD *)(v12 + 56) = 0;
      *(_DWORD *)(v12 + 72) = 0;
      *(_DWORD *)(v12 + 76) = 0;
      *(_DWORD *)(v12 + 80) = 6;
      v27 = *(_BYTE *)(v12 + 84);
      *(_DWORD *)v12 = &off_668978;
      *(_DWORD *)(v12 + 64) = &off_66D3DC;
      v28 = v27 & 0xF0;
      *(_BYTE *)(v12 + 84) = v27 & 0xF0;
      *(_DWORD *)(v12 + 68) = 0;
      *(_DWORD *)(v12 + 12) = v26;
      if ( v26 )
      {
        CEntity::RegisterReference(v26, (CEntity **)(v12 + 12));
        v28 = *(_BYTE *)(v12 + 84);
      }
      v29 = *((_QWORD *)this + 4);
      *(_DWORD *)(v12 + 76) = *((_DWORD *)this + 10);
      *(_QWORD *)(v12 + 68) = v29;
      *(_DWORD *)(v12 + 80) = 7;
      *(_BYTE *)(v12 + 84) = v28 | 8;
      return v12;
    }
    goto LABEL_15;
  }
  return (*(int (__fastcall **)(CTaskComplexGangFollower *, CPed *))(*(_DWORD *)this + 44))(this, a2);
}


// ============================================================

// Address: 0x5169f0
// Original: _ZN24CTaskComplexGangFollower18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGangFollower::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexGangFollower::CreateFirstSubTask(CTaskComplexGangFollower *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  signed int v6; // r1
  int v7; // r4
  CEntity *v8; // r8
  char v9; // r0
  char v10; // r0
  __int64 v11; // d16
  int *v12; // r3
  char *v13; // r6
  int v14; // r0
  __int64 v15; // r2

  v4 = *((_DWORD *)this + 4);
  v5 = *((_DWORD *)a2 + 289);
  if ( v4 )
  {
    v6 = v5 << 23;
    if ( v6 >= 0 )
      goto LABEL_18;
    v6 = *((_DWORD *)a2 + 356);
    if ( v6 && *(_DWORD *)(v4 + 1424) == v6 )
    {
      v7 = CTask::operator new((CTask *)&dword_60, v6);
      CTaskSimpleCarDrive::CTaskSimpleCarDrive((CTaskSimpleCarDrive *)v7, *((CVehicle **)a2 + 356), 0, 0);
      return v7;
    }
    if ( *((_DWORD *)a2 + 356) )
    {
      v7 = CTask::operator new((CTask *)&dword_34, v6);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v7, *((CVehicle **)a2 + 356), 0, 0, 1, 0);
    }
    else
    {
LABEL_18:
      if ( (*((_BYTE *)this + 61) & 4) != 0 && (v6 = *(_DWORD *)(*((_DWORD *)a2 + 272) + 632), v6 <= 30) )
      {
        v7 = CTask::operator new((CTask *)&dword_58, v6);
        v8 = (CEntity *)*((_DWORD *)this + 4);
        CTaskComplex::CTaskComplex((CTaskComplex *)v7);
        *(_QWORD *)(v7 + 24) = 0x40A000003F000000LL;
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
        v9 = *(_BYTE *)(v7 + 84);
        *(_DWORD *)v7 = &off_668978;
        *(_DWORD *)(v7 + 64) = &off_66D3DC;
        v10 = v9 & 0xF0 | 2;
        *(_BYTE *)(v7 + 84) = v10;
        *(_DWORD *)(v7 + 68) = 0;
        *(_DWORD *)(v7 + 12) = v8;
        if ( v8 )
        {
          CEntity::RegisterReference(v8, (CEntity **)(v7 + 12));
          v10 = *(_BYTE *)(v7 + 84);
        }
        v11 = *((_QWORD *)this + 4);
        *(_DWORD *)(v7 + 76) = *((_DWORD *)this + 10);
        *(_QWORD *)(v7 + 68) = v11;
        *(_DWORD *)(v7 + 80) = 7;
        *(_BYTE *)(v7 + 84) = v10 | 8;
      }
      else
      {
        v7 = CTask::operator new((CTask *)&dword_20, v6);
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v7, 500, 0, 0, 8.0);
      }
    }
  }
  else
  {
    v12 = (int *)((char *)a2 + 1160);
    v13 = (char *)a2 + 1156;
    v7 = 0;
    v14 = *v12;
    LODWORD(v15) = v12[1];
    HIDWORD(v15) = v12[2] & 0xFFFEFFFF;
    *(_DWORD *)v13 = v5;
    *((_DWORD *)v13 + 1) = v14;
    *((_QWORD *)v13 + 1) = v15;
  }
  return v7;
}


// ============================================================

// Address: 0x516b7c
// Original: _ZN24CTaskComplexGangFollower23CalculateOffsetPositionER7CVector
// Demangled: CTaskComplexGangFollower::CalculateOffsetPosition(CVector &)
int __fastcall CTaskComplexGangFollower::CalculateOffsetPosition(CTaskComplexGangFollower *this, CVector *a2)
{
  int v4; // r1
  unsigned int v5; // r0
  unsigned int v6; // r2
  int v7; // r3
  __int64 *v8; // r0
  const CMatrix *v9; // r1
  char v10; // r0
  float32x2_t v11; // d16
  char v12; // r1
  unsigned __int64 v13; // d1
  __int64 v14; // d16
  int v15; // r0
  int v16; // r3
  int v17; // r0
  __int64 v18; // d16
  int result; // r0
  __int64 v20; // [sp+4h] [bp-14h] BYREF
  int v21; // [sp+Ch] [bp-Ch]

  v4 = *((_DWORD *)this + 4);
  v5 = *(_DWORD *)(v4 + 1104) - 4;
  if ( v5 > 3 )
    v6 = 0;
  else
    v6 = (0xDu >> (v5 & 0xF)) & 1;
  v7 = *(_DWORD *)(v4 + 20);
  v8 = (__int64 *)(v7 + 48);
  if ( !v7 )
    v8 = (__int64 *)(v4 + 4);
  if ( v6 )
  {
    v9 = *(const CMatrix **)(v4 + 20);
    v20 = *(_QWORD *)&CTaskComplexFollowLeaderInFormation::ms_offsets[2 * *((unsigned __int8 *)this + 60) + 16];
    v21 = 0;
    CVector::FromMultiply3X3((CTaskComplexGangFollower *)((char *)this + 32), v9, (const CVector *)&v20);
    v10 = *((_BYTE *)this + 61) & 0xEF;
LABEL_11:
    *((_BYTE *)this + 61) = v10;
    goto LABEL_12;
  }
  v11.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)v8 + 4), *((float32x2_t *)this + 3)).n64_u64[0];
  v12 = *((_BYTE *)this + 61);
  v13 = vmul_f32(v11, v11).n64_u64[0];
  if ( (float)((float)((float)((float)(*(float *)v8 - *((float *)this + 5))
                             * (float)(*(float *)v8 - *((float *)this + 5)))
                     + *(float *)&v13)
             + *((float *)&v13 + 1)) > 9.0
    || (*((_BYTE *)this + 61) & 0x10) == 0 )
  {
    v14 = *v8;
    *((_DWORD *)this + 7) = *((_DWORD *)v8 + 2);
    *(_QWORD *)((char *)this + 20) = v14;
    v15 = *((unsigned __int8 *)this + 60);
    v16 = CTaskComplexFollowLeaderInFormation::ms_offsets[2 * v15];
    v17 = CTaskComplexFollowLeaderInFormation::ms_offsets[2 * v15 + 1];
    *((_DWORD *)this + 8) = v16;
    *((_DWORD *)this + 9) = v17;
    v10 = v12 | 0x10;
    *((_DWORD *)this + 10) = 0;
    goto LABEL_11;
  }
LABEL_12:
  v18 = *((_QWORD *)this + 4);
  result = *((_DWORD *)this + 10);
  *((_DWORD *)a2 + 2) = result;
  *(_QWORD *)a2 = v18;
  return result;
}


// ============================================================

// Address: 0x516c70
// Original: _ZN24CTaskComplexGangFollower14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGangFollower::ControlSubTask(CPed *)
int __fastcall CTaskComplexGangFollower::ControlSubTask(CTaskComplexGangFollower *this, CPed *a2)
{
  _DWORD *v4; // r8
  int v5; // r1
  int v6; // r0
  int Association; // r9
  unsigned int MoveStateFromGoToTask; // r5
  int v9; // r1
  float *v10; // r10
  int v11; // r2
  float *v12; // r6
  int v13; // r3
  float *v14; // r2
  float v15; // s18
  float v16; // s16
  float v17; // s20
  float v18; // s22
  int v19; // r9
  _BYTE *v20; // r10
  int v21; // r9
  int v22; // r4
  int v23; // r2
  int v24; // r1
  unsigned int v25; // r3
  int v26; // r3
  int v27; // r1
  int v28; // r0
  int v29; // r6
  int v30; // r1
  float *v31; // r0
  bool v32; // zf
  int v33; // r0
  int v34; // r0
  int v35; // r2
  char v36; // r0
  CAnimManager *AnimationBlockIndex; // r0
  int v38; // r1
  float v39; // s16
  float v40; // s18
  _DWORD *v41; // r0
  int v42; // r1
  int v43; // r2
  int v44; // r3
  int ActiveTaskByType; // r6
  int v46; // r0
  int v47; // r0
  int v48; // r1
  float *v49; // r2
  float v50; // s24
  float v51; // s22
  int v52; // r1
  float v53; // s26
  int v54; // r0
  float v55; // s8
  float v56; // s2
  float32x2_t v57; // d0
  float32x2_t v58; // d2
  float v59; // s28
  float v60; // s0
  float v61; // s0
  int v62; // r0
  unsigned int v63; // r0
  unsigned int v64; // r1
  int v65; // r0
  int v66; // r0
  FxSystem_c *FxSystem; // r0
  FxSystem_c *v68; // r6
  unsigned __int16 v69; // r6
  unsigned __int16 v70; // r0
  CPed *Member; // r3
  int IsHolding; // r0
  int v73; // r6
  int v74; // r4
  int v75; // r6
  int v76; // r10
  int v77; // r9
  int ClosestGroupPed; // r8
  int v79; // r0
  unsigned __int16 v80; // r1
  int v81; // r0
  int v82; // r4
  CTask *v83; // r6
  unsigned __int16 v84; // r0
  char v85; // r0
  unsigned int v86; // r1
  CEntity *v87; // r2
  bool v88; // zf
  int v89; // r4
  CTask *v90; // r6
  unsigned __int16 v91; // r1
  unsigned __int16 v93; // r1
  unsigned int v94; // r1
  float *v95; // [sp+24h] [bp-7Ch]
  int v96; // [sp+28h] [bp-78h]
  __int16 *v97; // [sp+2Ch] [bp-74h]
  CPed *v98; // [sp+30h] [bp-70h]
  float v99[3]; // [sp+34h] [bp-6Ch] BYREF
  CEntity *v100; // [sp+40h] [bp-60h] BYREF
  char v101; // [sp+44h] [bp-5Ch]

  v4 = (_DWORD *)((char *)a2 + 1156);
  *((_DWORD *)a2 + 291) &= ~0x400000u;
  v5 = *((_DWORD *)this + 4);
  v6 = *((_DWORD *)this + 2);
  if ( !v5 )
  {
    if ( (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v6 + 28))(v6, a2, 1, 0) == 1 )
    {
      v22 = 0;
      v23 = v4[2];
      v24 = v4[1];
      v25 = v4[3] & 0xFFFEFFFF;
      *v4 = *v4;
      v4[1] = v24;
      v4[2] = v23;
      v4[3] = v25;
      return v22;
    }
    return *((_DWORD *)this + 2);
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6) == 709 )
    return *((_DWORD *)this + 2);
  Association = RpAnimBlendClumpGetAssociation();
  MoveStateFromGoToTask = CPedIntelligence::GetMoveStateFromGoToTask(*(CPedIntelligence **)(*((_DWORD *)this + 4) + 1088));
  CTaskComplexGangFollower::CalculateOffsetPosition(this, (CTaskComplexGangFollower *)((char *)this + 32));
  v9 = *((_DWORD *)this + 4);
  v10 = (float *)((char *)a2 + 4);
  v11 = *((_DWORD *)a2 + 5);
  v12 = (float *)((char *)a2 + 4);
  v13 = *(_DWORD *)(v9 + 20);
  if ( v11 )
    v12 = (float *)(v11 + 48);
  v14 = (float *)(v13 + 48);
  v15 = *v12;
  v16 = v12[1];
  if ( !v13 )
    v14 = (float *)(v9 + 4);
  v17 = *v14;
  v18 = v14[1];
  v98 = a2;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 907 )
  {
    if ( (*((_BYTE *)this + 61) & 4) == 0 )
    {
      v19 = 0;
      goto LABEL_10;
    }
    v39 = v18 - v16;
    v95 = (float *)Association;
    v40 = v17 - v15;
    v96 = *(_DWORD *)(*((_DWORD *)a2 + 272) + 632);
    v41 = (_DWORD *)*((_DWORD *)this + 2);
    v42 = *((_DWORD *)this + 8);
    v43 = *((_DWORD *)this + 9);
    v44 = *((_DWORD *)this + 10);
    v41[8] = 0x40000000;
    v41 += 17;
    *v41 = v42;
    v41[1] = v43;
    v41[2] = v44;
    ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 900);
    v46 = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 906);
    v19 = 0;
    if ( !ActiveTaskByType || v46 )
    {
LABEL_107:
      if ( (float)((float)((float)(v40 * v40) + (float)(v39 * v39)) + 0.0) < 64.0 )
      {
        v20 = (char *)this + 61;
        if ( v96 >= 9
          && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
               *((_DWORD *)this + 2),
               a2,
               1,
               0) )
        {
          *((float *)this + 8) = v40;
          *((float *)this + 9) = v39;
          *((_DWORD *)this + 10) = 0;
          v22 = CTask::operator new((CTask *)&dword_20, v86);
          CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v22, 500, 0, 0, 8.0);
          return v22;
        }
        goto LABEL_11;
      }
LABEL_10:
      v20 = (char *)this + 61;
LABEL_11:
      v21 = v19 != 0;
      goto LABEL_15;
    }
    v47 = *((_DWORD *)this + 4);
    v19 = 0;
    v48 = *(_DWORD *)(v47 + 20);
    v49 = (float *)(v48 + 48);
    if ( !v48 )
      v49 = (float *)(v47 + 4);
    v50 = *v49 + *((float *)this + 8);
    v51 = v49[1] + *((float *)this + 9);
    v52 = *((_DWORD *)a2 + 5);
    v53 = v49[2] + *((float *)this + 10);
    if ( v52 )
      v10 = (float *)(v52 + 48);
    if ( MoveStateFromGoToTask > 7 || ((1 << MoveStateFromGoToTask) & 0xD0) == 0 )
    {
LABEL_103:
      if ( *(float *)(ActiveTaskByType + 12) != v50
        || *(float *)(ActiveTaskByType + 16) != v51
        || *(float *)(ActiveTaskByType + 24) != 0.5 )
      {
        v85 = *(_BYTE *)(ActiveTaskByType + 28);
        *(float *)(ActiveTaskByType + 12) = v50;
        *(float *)(ActiveTaskByType + 16) = v51;
        *(float *)(ActiveTaskByType + 20) = v53;
        *(_DWORD *)(ActiveTaskByType + 24) = 1056964608;
        *(_BYTE *)(ActiveTaskByType + 28) = v85 & 0xD0 | 0x20;
      }
      goto LABEL_107;
    }
    v54 = *(_DWORD *)(v47 + 20);
    v55 = v10[1];
    v57.n64_u32[0] = *(_DWORD *)(v54 + 16);
    v56 = *(float *)(v54 + 20);
    v58.n64_u32[0] = *(_DWORD *)(v54 + 24);
    v57.n64_f32[1] = *v10 * v57.n64_f32[0];
    v58.n64_f32[1] = v53 * v58.n64_f32[0];
    if ( (float)((float)((float)(v57.n64_f32[1] + (float)(v55 * v56)) + (float)(v10[2] * v58.n64_f32[0]))
               - (float)((float)((float)(v50 * v57.n64_f32[0]) + (float)(v51 * v56)) + (float)(v53 * v58.n64_f32[0]))) < 0.0 )
    {
      if ( (float)((float)((float)((float)(v50 - *v10) * (float)(v50 - *v10))
                         + (float)((float)(v51 - v55) * (float)(v51 - v55)))
                 + 0.0) <= (float)((float)(*(float *)(ActiveTaskByType + 24) + 1.0)
                                 * (float)(*(float *)(ActiveTaskByType + 24) + 1.0)) )
      {
        v53 = v53 + (float)(v58.n64_f32[0] + v58.n64_f32[0]);
        v51 = v51 + (float)(v56 + v56);
        v50 = v50 + (float)(v57.n64_f32[0] + v57.n64_f32[0]);
        if ( v95 )
        {
          v58.n64_u32[0] = 1062836634;
          v57.n64_f32[0] = v95[9] + -0.0125;
          *((_DWORD *)v95 + 9) = vmax_f32(v57, v58).n64_u32[0];
LABEL_101:
          v19 = 1;
          goto LABEL_103;
        }
      }
      else if ( v95 )
      {
        v59 = v95[9];
        CPed::SetMoveAnimSpeed(a2, (CAnimBlendAssociation *)v95);
        v60 = v95[9];
        if ( fabsf(v59 - v60) >= 0.013 )
        {
          if ( v59 > v60 )
            v61 = -0.0125;
          else
            v61 = 0.0125;
          v59 = v59 + v61;
        }
        v95[9] = v59;
        goto LABEL_101;
      }
    }
    v19 = 0;
    goto LABEL_103;
  }
  v20 = (char *)this + 61;
  v21 = 0;
LABEL_15:
  v26 = v4[3];
  v27 = v4[1];
  v28 = *v4;
  v4[2] = v4[2];
  v4[1] = v27;
  *v4 = v28;
  v4[3] = v26 & 0xFFFEFFFF | (v21 << 16);
  v29 = *v20 & 1;
  v30 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  v31 = *(float **)(v30 + 1424);
  v32 = v31 == 0;
  if ( v31 )
  {
    v30 = *(_DWORD *)(v30 + 1156) & 0x100;
    v32 = v30 == 0;
  }
  if ( v32
    || (float)((float)((float)(v31[18] * v31[18]) + (float)(v31[19] * v31[19])) + (float)(v31[20] * v31[20])) <= 0.04 )
  {
    v33 = CStreaming::IsVeryBusy((CStreaming *)v31) ^ 1;
  }
  else
  {
    v33 = 0;
  }
  if ( v29 )
  {
    if ( v33 )
      goto LABEL_46;
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex(
                                            (CAnimManager *)"gangs",
                                            (const char *)v30);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v38);
    v36 = *v20 & 0xFE;
    goto LABEL_27;
  }
  if ( !v33 )
    goto LABEL_46;
  v34 = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", (const char *)v30);
  if ( CAnimManager::ms_aAnimBlocks[32 * v34 + 16] == 1 )
  {
    CAnimManager::AddAnimBlockRef((CAnimManager *)v34, 1);
    v36 = *v20 | 1;
LABEL_27:
    *v20 = v36;
    goto LABEL_46;
  }
  CStreaming::RequestModel((CStreaming *)(v34 + 25575), 8, v35);
LABEL_46:
  v62 = *((_DWORD *)this + 3);
  if ( !*(_BYTE *)(v62 + 720)
    && (*v20 & 8) == 0
    && CPedGroupMembership::CountMembers((CPedGroupMembership *)(v62 + 8)) >= 4
    && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 2000.0) == 500 )
  {
    *v20 |= 2u;
  }
  if ( *((_BYTE *)this + 72) )
  {
    if ( *((_BYTE *)this + 73) )
    {
      v63 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 73) = 0;
      *((_DWORD *)this + 16) = v63;
      v64 = v63;
    }
    else
    {
      v64 = *((_DWORD *)this + 16);
      v63 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v64 + *((_DWORD *)this + 17) <= v63 )
    {
      v65 = *((_DWORD *)a2 + 6);
      if ( v65 )
      {
        v66 = *(_DWORD *)(v65 + 4);
        v99[1] = 0.1;
        v99[0] = 0.0;
        v99[2] = 0.0;
        FxSystem = (FxSystem_c *)FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"exhale", (int)v99, v66 + 16, 0);
        v68 = FxSystem;
        if ( FxSystem )
        {
          FxSystem_c::AttachToBone(FxSystem, a2, 5);
          FxSystem_c::PlayAndKill(v68);
        }
        *((_BYTE *)this + 72) = 0;
      }
    }
  }
  if ( CEntity::IsVisible(a2) != 1 )
    return *((_DWORD *)this + 2);
  if ( !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2)
    && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) >= 96 )
  {
    v69 = rand();
    v70 = rand();
    Member = (CPed *)CPedGroupMembership::GetMember(
                       (CPedGroupMembership *)(*((_DWORD *)this + 3) + 8),
                       (int)(float)(int)(float)((float)((float)v70 * 0.000015259) * 8.0));
    if ( Member == a2 )
      Member = (CPed *)*((_DWORD *)this + 4);
    if ( Member )
      IKChainManager_c::LookAt(
        (int)&g_ikChainMan,
        (int)"TaskGangFollower",
        a2,
        (int)Member,
        (int)(float)((int)(float)((float)((float)v69 * 0.000015259) * 2000.0) + 3000),
        5,
        0,
        1,
        0.15,
        500,
        3,
        0);
  }
  if ( !((unsigned __int8)*v20 << 31) || *((int *)a2 + 276) > 5 )
    return *((_DWORD *)this + 2);
  IsHolding = CPed::GetEntityThatThisPedIsHolding(a2);
  if ( !IsHolding )
  {
    if ( !CPed::IsPlayingHandSignal(a2)
      && !CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 4) )
    {
      v81 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 500.0);
      if ( (unsigned int)(v81 - 51) > 4 )
      {
        v88 = v81 == 100;
        if ( v81 == 100 )
          v88 = *((_DWORD *)a2 + 276) == 1;
        if ( v88 )
        {
          v89 = *((_DWORD *)a2 + 272);
          v90 = (CTask *)CTask::operator new((CTask *)&off_18, (unsigned int)v98);
          CTaskComplexPlayHandSignalAnim::CTaskComplexPlayHandSignalAnim();
          CTaskManager::SetTaskSecondary((CTaskManager *)(v89 + 4), v90, 4);
          switch ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 10.0) )
          {
            case 0:
            case 1:
            case 2:
LABEL_120:
              v91 = 45;
              goto LABEL_123;
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
LABEL_119:
              v91 = 166;
              goto LABEL_123;
            case 8:
LABEL_121:
              v91 = 24;
              goto LABEL_123;
            case 9:
LABEL_122:
              v91 = 201;
LABEL_123:
              CPed::Say(v98, v91, 0, 1.0, 0, 0, 0);
              break;
            default:
              return *((_DWORD *)this + 2);
          }
        }
      }
      else
      {
        v82 = *((_DWORD *)a2 + 272);
        v83 = (CTask *)CTask::operator new((CTask *)&dword_20, v81 - 51);
        v84 = rand();
        CTaskSimpleRunAnim::CTaskSimpleRunAnim(
          (int)v83,
          52,
          (int)(float)((float)((float)v84 * 0.000015259) * 8.0) + 279,
          1082130432,
          0);
        CTaskManager::SetTaskSecondary((CTaskManager *)(v82 + 4), v83, 4);
        if ( *((_DWORD *)v98 + 276) == 1 )
        {
          switch ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 10.0) )
          {
            case 0:
            case 1:
            case 2:
              goto LABEL_120;
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
              goto LABEL_119;
            case 8:
              goto LABEL_121;
            case 9:
              goto LABEL_122;
            default:
              return *((_DWORD *)this + 2);
          }
        }
      }
    }
    return *((_DWORD *)this + 2);
  }
  v97 = (__int16 *)IsHolding;
  v73 = RpAnimBlendClumpGetAssociation();
  v74 = RpAnimBlendClumpGetAssociation();
  v75 = v73 | v74 | RpAnimBlendClumpGetAssociation();
  v76 = RpAnimBlendClumpGetAssociation();
  v77 = v75 | v76;
  if ( v75 | v76 )
  {
    v77 = 1;
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, v98) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, v98, 250);
    v4[2] |= 0x400000u;
  }
  if ( v74 | v76 && (v74 && *(float *)(v74 + 32) < 0.5 || v76 && *(float *)(v76 + 32) < 0.5) && !*((_BYTE *)this + 72) )
  {
    *((_QWORD *)this + 8) = (unsigned int)CTimer::m_snTimeInMilliseconds | 0xA8C00000000LL;
    *((_BYTE *)this + 72) = 1;
  }
  if ( CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)v98 + 272) + 4), 1211) )
    return *((_DWORD *)this + 2);
  if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 500.0) != 200 )
  {
    if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) == 50
      && CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)v98 + 272) + 4), 307) )
    {
      CTaskComplexGangLeader::GetRandomGangAmbientAnim(v98, (CPed *)v97, v87);
      CTaskSimpleHoldEntity::PlayAnim();
    }
    return *((_DWORD *)this + 2);
  }
  if ( v77 )
    return *((_DWORD *)this + 2);
  ClosestGroupPed = CPedGroup::GetClosestGroupPed(*((CPedGroup **)this + 3), v98, v99);
  if ( !ClosestGroupPed
    || v99[0] >= 4.0
    || CPed::IsPlayer(v98) == 1
    || CPed::GetEntityThatThisPedIsHolding((CPed *)ClosestGroupPed)
    || *(_DWORD *)(ClosestGroupPed + 28 * *(char *)(ClosestGroupPed + 1820) + 1444) )
  {
    return *((_DWORD *)this + 2);
  }
  v79 = v97[19];
  if ( v79 == (unsigned __int16)MI_GANG_DRINK )
  {
    if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 500.0) <= 249 )
    {
      v80 = 24;
LABEL_129:
      CPed::Say((CPed *)ClosestGroupPed, v80, 0, 1.0, 0, 0, 0);
      goto LABEL_133;
    }
    v93 = 23;
    goto LABEL_132;
  }
  if ( v79 == (unsigned __int16)MI_GANG_SMOKE )
  {
    if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 500.0) <= 249 )
    {
      v80 = 201;
      goto LABEL_129;
    }
    v93 = 200;
LABEL_132:
    CPed::Say(v98, v93, 0x5DCu, 1.0, 0, 0, 0);
  }
LABEL_133:
  CEvent::CEvent((CEvent *)v99);
  v100 = v98;
  LODWORD(v99[0]) = &off_6670C0;
  CEntity::RegisterReference(v98, &v100);
  v101 = 0;
  CEventGroup::Add((CEventGroup *)(*(_DWORD *)(ClosestGroupPed + 1088) + 104), (CEvent *)v99, 0);
  v22 = CTask::operator new((CTask *)&word_30, v94);
  CTaskComplex::CTaskComplex((CTaskComplex *)v22);
  *(_WORD *)(v22 + 40) = 0;
  *(_BYTE *)(v22 + 16) = 1;
  *(_DWORD *)(v22 + 32) = 0;
  *(_DWORD *)(v22 + 36) = 0;
  *(_DWORD *)v22 = &off_66BFFC;
  *(_DWORD *)(v22 + 12) = ClosestGroupPed;
  CEntity::RegisterReference((CEntity *)ClosestGroupPed, (CEntity **)(v22 + 12));
  LODWORD(v99[0]) = &off_6670C0;
  if ( v100 )
    CEntity::CleanUpOldReference(v100, &v100);
  CEvent::~CEvent((CEvent *)v99);
  return v22;
}


// ============================================================

// Address: 0x5177d8
// Original: _ZN24CTaskComplexGangFollower15SetFollowLeaderEh
// Demangled: CTaskComplexGangFollower::SetFollowLeader(uchar)
int __fastcall CTaskComplexGangFollower::SetFollowLeader(int this, unsigned __int8 a2)
{
  *(_BYTE *)(this + 61) = (4 * a2) & 4 | *(_BYTE *)(this + 61) & 0xFB;
  return this;
}


// ============================================================

// Address: 0x51c3f2
// Original: _ZNK24CTaskComplexGangFollower11GetTaskTypeEv
// Demangled: CTaskComplexGangFollower::GetTaskType(void)
int __fastcall CTaskComplexGangFollower::GetTaskType(CTaskComplexGangFollower *this)
{
  return 1207;
}


// ============================================================

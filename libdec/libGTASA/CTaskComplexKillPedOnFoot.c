
// Address: 0x19276c
// Original: j__ZN25CTaskComplexKillPedOnFoot10CreateTaskEv
// Demangled: CTaskComplexKillPedOnFoot::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexKillPedOnFoot::CreateTask(CTaskComplexKillPedOnFoot *this)
{
  return _ZN25CTaskComplexKillPedOnFoot10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1973ac
// Original: j__ZN25CTaskComplexKillPedOnFoot18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexKillPedOnFoot::CreateFirstSubTask(CPed *)
// attributes: thunk
int __fastcall CTaskComplexKillPedOnFoot::CreateFirstSubTask(CTaskComplexKillPedOnFoot *this, CPed *a2)
{
  return _ZN25CTaskComplexKillPedOnFoot18CreateFirstSubTaskEP4CPed(this, a2);
}


// ============================================================

// Address: 0x198424
// Original: j__ZN25CTaskComplexKillPedOnFoot13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexKillPedOnFoot::CreateSubTask(int,CPed *)
// attributes: thunk
int __fastcall CTaskComplexKillPedOnFoot::CreateSubTask(CTaskComplexKillPedOnFoot *this, int a2, CPed *a3)
{
  return _ZN25CTaskComplexKillPedOnFoot13CreateSubTaskEiP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x1984e0
// Original: j__ZN25CTaskComplexKillPedOnFootC2EP4CPedijjji
// Demangled: CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(CPed *,int,uint,uint,uint,int)
// attributes: thunk
void __fastcall CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(
        CTaskComplexKillPedOnFoot *this,
        CPed *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  _ZN25CTaskComplexKillPedOnFootC2EP4CPedijjji(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x496440
// Original: _ZN25CTaskComplexKillPedOnFoot10CreateTaskEv
// Demangled: CTaskComplexKillPedOnFoot::CreateTask(void)
void __fastcall CTaskComplexKillPedOnFoot::CreateTask(CTaskComplexKillPedOnFoot *this, int a2, int a3)
{
  char v3; // r4
  char *v4; // r1
  CPed *Ped; // r4
  CTaskComplexKillPedOnFoot *v6; // r0
  CPools *v7; // [sp+10h] [bp-10h] BYREF
  _BYTE v8[10]; // [sp+16h] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v8, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v7, byte_4, a3);
  v4 = (char *)v7 + 1;
  if ( v7 == (CPools *)-1 )
    Ped = 0;
  else
    Ped = (CPed *)CPools::GetPed(v7, (int)v4);
  v6 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, (unsigned int)v4);
  CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v6, Ped, -1, 0, 0, 0, 1);
}


// ============================================================

// Address: 0x4e01b0
// Original: _ZN25CTaskComplexKillPedOnFootC2EP4CPedijjji
// Demangled: CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(CPed *,int,uint,uint,uint,int)
void __fastcall CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(
        CTaskComplexKillPedOnFoot *this,
        CPed *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  char v11; // r0
  char v12; // r0
  int v13; // r1

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 5) = a4;
  *((_DWORD *)this + 6) = a5;
  *((_DWORD *)this + 7) = a6;
  *((_BYTE *)this + 32) = a7;
  *((_DWORD *)this + 10) = a3;
  v11 = *((_BYTE *)this + 12);
  *((_WORD *)this + 26) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  v12 = v11 & 0x8B | 4;
  *((_BYTE *)this + 12) = v12;
  *(_DWORD *)this = &off_669850;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
    v12 = *((_BYTE *)this + 12);
  }
  v13 = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)this + 12) = v12 & 0xF7;
  *((_DWORD *)this + 9) = v13;
}


// ============================================================

// Address: 0x4e0258
// Original: _ZN25CTaskComplexKillPedOnFootD0Ev
// Demangled: CTaskComplexKillPedOnFoot::~CTaskComplexKillPedOnFoot()
void __fastcall CTaskComplexKillPedOnFoot::~CTaskComplexKillPedOnFoot(CTaskComplexKillPedOnFoot *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_669850;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4e0288
// Original: _ZN25CTaskComplexKillPedOnFoot13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexKillPedOnFoot::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexKillPedOnFoot::MakeAbortable(
        CTaskComplexKillPedOnFoot *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v4; // r0

  *((_DWORD *)a2 + 291) &= ~0x400000u;
  v4 = *((_DWORD *)this + 2);
  if ( v4 )
    return (*(int (__fastcall **)(int, CPed *, int, const CEvent *))(*(_DWORD *)v4 + 28))(v4, a2, a3, a4);
  else
    return 1;
}


// ============================================================

// Address: 0x4e02a8
// Original: _ZN25CTaskComplexKillPedOnFoot7AbortIKEP4CPed
// Demangled: CTaskComplexKillPedOnFoot::AbortIK(CPed *)
unsigned int __fastcall CTaskComplexKillPedOnFoot::AbortIK(CTaskComplexKillPedOnFoot *this, CPed *a2)
{
  unsigned int result; // r0

  result = *((_DWORD *)a2 + 291) & 0xFFBFFFFF;
  *((_DWORD *)a2 + 291) = result;
  return result;
}


// ============================================================

// Address: 0x4e02b8
// Original: _ZN25CTaskComplexKillPedOnFoot17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexKillPedOnFoot::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexKillPedOnFoot::CreateNextSubTask(CTaskComplexKillPedOnFoot *this, CVehicle **a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r5
  int v7; // r2
  CVehicle *v8; // r1
  int v9; // r3
  float *v10; // r0
  float *v11; // r1
  float v12; // s16
  float v13; // s20
  float v14; // s18
  float v15; // s22
  float v16; // s26
  float v17; // s24
  CTaskComplexKillPedOnFoot *v18; // r0
  int v19; // r1
  int IsTypeMelee; // r0
  int v21; // r0
  unsigned int v23; // r2
  CVehicle *v24; // r3
  CVehicle *v25; // r1
  CVehicle *v26; // r0
  bool v27; // zf
  unsigned int v28; // r0
  bool v29; // cc
  CTaskSimpleStandStill *v30; // r0
  char v31; // r4
  unsigned int v32; // r1
  int v33; // r2
  _BYTE v34[104]; // [sp+8h] [bp-68h] BYREF

  if ( !*((_DWORD *)this + 4) )
    goto LABEL_36;
  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v5 = 0;
  if ( v4 > 718 )
  {
    if ( (unsigned int)(v4 - 1001) >= 2 && v4 != 1003 )
    {
      if ( v4 == 719 )
      {
        v5 = CTask::operator new((CTask *)&dword_34, 0x2CFu);
        CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, a2[356], 0, 0, 1, 1);
      }
      return v5;
    }
    goto LABEL_36;
  }
  if ( v4 > 202 )
  {
    if ( v4 != 203 )
    {
      if ( v4 == 703 )
      {
        if ( (*(_BYTE *)(*((_DWORD *)this + 2) + 16) & 4) == 0 )
          goto LABEL_30;
        v19 = 1003;
        goto LABEL_40;
      }
      if ( v4 == 704 )
      {
        if ( CPed::IsPlayer(*((CPed **)this + 4)) == 1 )
          v6 = *((_DWORD *)this + 4);
        else
          v6 = 0;
        if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
        {
          v7 = *((_DWORD *)this + 4);
          v8 = a2[5];
          v9 = *(_DWORD *)(v7 + 20);
          v10 = (float *)((char *)v8 + 48);
          if ( !v8 )
            v10 = (float *)(a2 + 1);
          v11 = (float *)(v9 + 48);
          if ( !v9 )
            v11 = (float *)(v7 + 4);
          if ( !v7 )
            goto LABEL_30;
          v12 = *v10;
          v13 = v10[1];
          v14 = v10[2];
          v15 = *v11;
          v16 = v11[1];
          v17 = v11[2];
          if ( CCullZones::NoPolice((CCullZones *)v10) )
          {
            if ( !v6 )
            {
LABEL_30:
              IsTypeMelee = CWeapon::IsTypeMelee((CWeapon *)&a2[7 * *((char *)a2 + 1820) + 361]);
              v19 = 1002;
              if ( IsTypeMelee )
                v19 = 1001;
              goto LABEL_40;
            }
          }
          else
          {
            v26 = *(CVehicle **)(*((_DWORD *)this + 4) + 1388);
            v27 = v26 == 0;
            if ( v26 )
              v27 = v6 == 0;
            if ( v27
              || sqrtf(
                   (float)((float)((float)(v15 - v12) * (float)(v15 - v12))
                         + (float)((float)(v16 - v13) * (float)(v16 - v13)))
                 + (float)((float)(v17 - v14) * (float)(v17 - v14))) >= 5.0
              || v26 == a2[347] )
            {
              goto LABEL_30;
            }
          }
          if ( *((unsigned __int8 *)&dword_34 + *(int *)((char *)&elf_hash_bucket[210] + v6)) << 31 )
          {
            v28 = (unsigned int)a2[359];
            v29 = v28 > 6;
            if ( v28 != 6 )
              v29 = v28 - 7 > 9;
            if ( !v29 && *((_BYTE *)a2 + 1096) != 2 )
            {
              CPed::GiveWeapon(a2, 22, 1000, 1);
              CPed::SetCurrentWeapon(a2, 22);
              CPed::SetMoveState(a2, 1);
            }
          }
          goto LABEL_30;
        }
        v19 = 719;
LABEL_40:
        v18 = this;
        return CTaskComplexKillPedOnFoot::CreateSubTask(v18, v19, (CPed *)a2);
      }
      return v5;
    }
LABEL_36:
    v5 = 0;
    v23 = (unsigned int)a2[291];
    v24 = a2[292];
    v25 = a2[290];
    a2[289] = a2[289];
    a2[290] = v25;
    a2[291] = (CVehicle *)(v23 & 0xFFBFFFFF);
    a2[292] = v24;
    return v5;
  }
  if ( v4 == 200 )
    goto LABEL_36;
  if ( v4 != 202 )
    return v5;
  if ( a2[359] != (CVehicle *)byte_6 || !*((_BYTE *)a2 + 1956) )
  {
    if ( (*((_BYTE *)this + 12) & 0x60) == 0x60 && (*(_BYTE *)(FindPlayerWanted(-1) + 30) & 4) == 0 )
    {
      v21 = *(_DWORD *)this;
      *((_BYTE *)this + 12) &= ~0x40u;
      return (*(int (__fastcall **)(CTaskComplexKillPedOnFoot *, CVehicle **))(v21 + 44))(this, a2);
    }
    goto LABEL_36;
  }
  if ( !*(_WORD *)(FindPlayerWanted(-1) + 28) )
  {
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v34, 0, 0, 0, 8.0);
    CTaskSimpleStandStill::ProcessPed(v30, (CPed *)a2);
    v31 = *((_BYTE *)this + 12);
    v5 = CTask::operator new((CTask *)&off_18, v32);
    CTaskSimple::CTaskSimple((CTaskSimple *)v5);
    v33 = 10000;
    *(_WORD *)(v5 + 16) = 0;
    if ( (v31 & 0x60) != 0x60 )
      v33 = 2000;
    *(_DWORD *)(v5 + 20) = v33;
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 12) = 0;
    *(_DWORD *)v5 = &off_665760;
    CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v34);
    return v5;
  }
  v18 = this;
  v19 = 1002;
  return CTaskComplexKillPedOnFoot::CreateSubTask(v18, v19, (CPed *)a2);
}


// ============================================================

// Address: 0x4e0590
// Original: _ZN25CTaskComplexKillPedOnFoot13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexKillPedOnFoot::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexKillPedOnFoot::CreateSubTask(CTaskComplexKillPedOnFoot *this, int a2, CVehicle **a3)
{
  int v5; // r4
  CEntity *v6; // r6
  int v7; // r8
  int v8; // r9
  int v9; // r10
  char v10; // r11
  CTaskSimpleStandStill *v11; // r0
  char v12; // r5
  unsigned int v13; // r1
  int v14; // r2
  _DWORD *v15; // r0
  CEntity *v16; // r6
  int v17; // r0
  CEntity *v18; // r5
  int v19; // r4
  const CPed *v20; // r1
  const CPed *v21; // r1
  int PedsGroup; // r0
  int Leader; // r4
  float v24; // s16
  unsigned int v25; // r1
  _BYTE v27[72]; // [sp+10h] [bp-48h] BYREF

  v5 = 0;
  if ( a2 > 718 )
  {
    if ( a2 > 1002 )
    {
      switch ( a2 )
      {
        case 1003:
          v5 = CTask::operator new((CTask *)&dword_20, 0x3EBu);
          v18 = *(CEntity **)(*((_DWORD *)this + 4) + 1424);
          CTaskComplex::CTaskComplex((CTaskComplex *)v5);
          *(_DWORD *)v5 = &off_669974;
          *(_DWORD *)(v5 + 20) = 0;
          *(_DWORD *)(v5 + 24) = 0;
          *(_DWORD *)(v5 + 28) = 0;
          *(_DWORD *)(v5 + 16) = v18;
          if ( v18 )
            CEntity::RegisterReference(v18, (CEntity **)(v5 + 16));
          break;
        case 1210:
          v19 = *((_DWORD *)this + 4);
          if ( v19 == FindPlayerPed(0) )
          {
            CPed::Say((CPed *)a3, 0x103u, 0, 1.0, 0, 0, 0);
          }
          else if ( !CPedGroups::GetPedsGroup(*((CPedGroups **)this + 4), v20)
                 || (PedsGroup = CPedGroups::GetPedsGroup(*((CPedGroups **)this + 4), v21),
                     Leader = CPedGroupMembership::GetLeader((CPedGroupMembership *)(PedsGroup + 8)),
                     Leader != FindPlayerPed(0)) )
          {
            CPed::Say((CPed *)a3, 0x102u, 0, 1.0, 0, 0, 0);
          }
          v24 = (float)((float)(unsigned __int16)rand() * 0.000015259) * 1500.0;
          v5 = CTask::operator new((CTask *)&off_18, v25);
          CTaskComplexSignalAtPed::CTaskComplexSignalAtPed(
            (CTaskComplexSignalAtPed *)v5,
            *((CPed **)this + 4),
            (int)v24,
            1u);
          break;
        case 1302:
          a3[291] = (CVehicle *)((unsigned int)a3[291] & 0xFFBFFFFF);
          return 0;
      }
      return v5;
    }
    if ( a2 != 719 )
    {
      if ( a2 == 1001 )
      {
        v5 = CTask::operator new((CTask *)&dword_38, 0x3E9u);
        v16 = (CEntity *)*((_DWORD *)this + 4);
        CTaskComplex::CTaskComplex((CTaskComplex *)v5);
        *(_QWORD *)(v5 + 16) = 0LL;
        *(_QWORD *)(v5 + 24) = 0LL;
        *(_DWORD *)(v5 + 32) = 0;
        *(_DWORD *)(v5 + 36) = 0;
        *(_DWORD *)(v5 + 40) = -1;
        *(_DWORD *)(v5 + 44) = 0;
        *(_DWORD *)(v5 + 52) = -1;
        *(_WORD *)(v5 + 48) = 0;
        *(_DWORD *)v5 = &off_6698C8;
        *(_DWORD *)(v5 + 12) = v16;
        if ( v16 )
          CEntity::RegisterReference(v16, (CEntity **)(v5 + 12));
        goto LABEL_30;
      }
      if ( a2 == 1002 )
      {
        v5 = CTask::operator new((CTask *)&dword_5C, 0x3EAu);
        v6 = (CEntity *)*((_DWORD *)this + 4);
        v7 = *((_DWORD *)this + 5);
        v8 = *((_DWORD *)this + 6);
        v9 = *((_DWORD *)this + 7);
        v10 = *((_BYTE *)this + 32);
        CTaskComplex::CTaskComplex((CTaskComplex *)v5);
        *(_QWORD *)(v5 + 56) = 0LL;
        *(_QWORD *)(v5 + 64) = 3323739136LL;
        *(_DWORD *)(v5 + 16) = 0;
        *(_DWORD *)(v5 + 20) = 0;
        *(_DWORD *)(v5 + 24) = 0;
        *(_DWORD *)(v5 + 28) = v7;
        *(_DWORD *)(v5 + 32) = v8;
        *(_DWORD *)(v5 + 36) = v9;
        *(_DWORD *)(v5 + 40) = 0;
        *(_DWORD *)(v5 + 44) = 0;
        *(_BYTE *)(v5 + 48) = v10;
        *(_DWORD *)(v5 + 50) = 0;
        *(_DWORD *)(v5 + 72) = 0;
        *(_DWORD *)(v5 + 76) = -971228160;
        *(_DWORD *)(v5 + 80) = 0;
        *(_DWORD *)(v5 + 84) = 0;
        *(_DWORD *)(v5 + 88) = 0;
        *(_DWORD *)v5 = &off_669904;
        *(_DWORD *)(v5 + 12) = v6;
        if ( v6 )
          CEntity::RegisterReference(v6, (CEntity **)(v5 + 12));
        *(_BYTE *)(v5 + 53) = (*((_BYTE *)this + 12) & 0x10) != 0;
        *((_BYTE *)this + 12) &= ~0x10u;
        goto LABEL_30;
      }
      return v5;
    }
    v5 = CTask::operator new((CTask *)&dword_70, 0x2CFu);
    CTaskSimpleCarDrive::CTaskSimpleCarDrive((CTaskSimpleCarDrive *)v5, a3[356], 0, 0);
    *(_DWORD *)(v5 + 96) = 2000;
    v15 = &`vtable for'CTaskSimpleCarDriveTimed;
    *(_WORD *)(v5 + 108) = 0;
    *(_DWORD *)(v5 + 100) = 0;
    *(_DWORD *)(v5 + 104) = 0;
LABEL_38:
    *(_DWORD *)v5 = *v15 + 8;
    return v5;
  }
  if ( a2 <= 202 )
  {
    if ( a2 != 200 )
    {
      if ( a2 == 202 )
      {
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v27, 0, 0, 0, 8.0);
        CTaskSimpleStandStill::ProcessPed(v11, (CPed *)a3);
        v12 = *((_BYTE *)this + 12);
        v5 = CTask::operator new((CTask *)&off_18, v13);
        CTaskSimple::CTaskSimple((CTaskSimple *)v5);
        v14 = 10000;
        *(_WORD *)(v5 + 16) = 0;
        if ( (v12 & 0x60) != 0x60 )
          v14 = 2000;
        *(_DWORD *)(v5 + 20) = v14;
        *(_DWORD *)(v5 + 8) = 0;
        *(_DWORD *)(v5 + 12) = 0;
        *(_DWORD *)v5 = &off_665760;
        CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v27);
      }
      return v5;
    }
    v5 = CTask::operator new((CTask *)byte_8, 0xC8u);
    CTaskSimple::CTaskSimple((CTaskSimple *)v5);
    v15 = &`vtable for'CTaskSimpleNone;
    goto LABEL_38;
  }
  switch ( a2 )
  {
    case 203:
      v5 = CTask::operator new((CTask *)&dword_20, 0xCBu);
      CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v5, 0, 0, 0, 8.0);
      break;
    case 703:
      v5 = CTask::operator new((CTask *)&dword_54, 0x2BFu);
      CTaskComplexDragPedFromCar::CTaskComplexDragPedFromCar((CTaskComplexDragPedFromCar *)v5, *((CPed **)this + 4), 0);
LABEL_30:
      v17 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 52) = 1;
      *((_DWORD *)this + 11) = v17;
      *((_DWORD *)this + 12) = 2000;
      return v5;
    case 704:
      v5 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, a3[356], 0, 0, 1, 1);
      break;
  }
  return v5;
}


// ============================================================

// Address: 0x4e091c
// Original: _ZN25CTaskComplexKillPedOnFoot18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexKillPedOnFoot::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexKillPedOnFoot::CreateFirstSubTask(CTaskComplexKillPedOnFoot *this, CPed *a2)
{
  char v4; // r1
  int v5; // r0
  char v6; // r1
  int v7; // r1
  int v8; // r2
  float *v9; // r3
  float *v10; // r1
  float v11; // s16
  float v12; // s20
  float v13; // s18
  float v14; // s22
  float v15; // s26
  float v16; // s24
  unsigned int v17; // r1
  int v18; // r6
  CCullZones *v19; // r0
  bool v20; // zf
  int v21; // r0
  unsigned int v22; // r0
  bool v23; // cc
  int v24; // r1
  bool v25; // zf
  CVehicle *v26; // r0
  unsigned int v27; // r1
  CEntity *v28; // r8
  __int64 v29; // r0
  int SubTask; // r6
  int v31; // r0
  int v32; // r1
  float v33; // s0
  float v34; // s2
  CVehicle *v35; // r0
  const CPed *v36; // r2
  const CVehicle *v37; // r1
  CCarEnterExit *v38; // r6
  int v39; // r0
  int v40; // r1
  CTaskComplexKillPedOnFoot *v41; // r0
  const CVehicle *v43; // r0
  CVector *v44; // r3
  int IsRoomForPedToLeaveCar; // r0

  v4 = *((_BYTE *)this + 12);
  v5 = *((_DWORD *)this + 4);
  v6 = v4 & 0xF9;
  *((_BYTE *)this + 12) = v6 | 4;
  if ( v5 )
  {
    if ( *(float *)(v5 + 1348) <= 0.0 )
      *((_BYTE *)this + 12) = v6 | 0xC;
    v7 = *((_DWORD *)a2 + 5);
    v8 = *(_DWORD *)(v5 + 20);
    v9 = (float *)(v7 + 48);
    if ( !v7 )
      v9 = (float *)((char *)a2 + 4);
    v10 = (float *)(v8 + 48);
    v11 = *v9;
    v12 = v9[1];
    v13 = v9[2];
    if ( !v8 )
      v10 = (float *)(v5 + 4);
    v14 = *v10;
    v15 = v10[1];
    v16 = v10[2];
    if ( CPed::IsPlayer((CPed *)v5) == 1 )
      v18 = *((_DWORD *)this + 4);
    else
      v18 = 0;
    v19 = (CCullZones *)*((_DWORD *)a2 + 356);
    v20 = v19 == 0;
    if ( v19 )
    {
      v19 = (CCullZones *)(*((unsigned __int8 *)a2 + 1157) << 31);
      v20 = v19 == 0;
    }
    if ( !v20 )
    {
      SubTask = CTask::operator new((CTask *)&dword_34, v17);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)SubTask, *((CVehicle **)a2 + 356), 0, 0, 1, 1);
LABEL_48:
      CPed::DropEntityThatThisPedIsHolding(a2, 1u);
      return SubTask;
    }
    if ( v18 )
    {
      if ( CCullZones::NoPolice(v19)
        || (v21 = *(_DWORD *)(*((_DWORD *)this + 4) + 1388)) != 0
        && sqrtf(
             (float)((float)((float)(v14 - v11) * (float)(v14 - v11)) + (float)((float)(v15 - v12) * (float)(v15 - v12)))
           + (float)((float)(v16 - v13) * (float)(v16 - v13))) < 5.0
        && v21 != *((_DWORD *)a2 + 347) )
      {
        if ( *((unsigned __int8 *)&dword_34 + *(int *)((char *)&elf_hash_bucket[210] + v18)) << 31 )
        {
          v22 = *((_DWORD *)a2 + 359);
          v23 = v22 > 6;
          if ( v22 != 6 )
            v23 = v22 - 7 > 9;
          if ( !v23 && *((_BYTE *)a2 + 1096) != 2 )
          {
            CPed::GiveWeapon(a2, 22, 1000, 1);
            CPed::SetCurrentWeapon(a2, 22);
            CPed::SetMoveState(a2, 1);
          }
        }
      }
    }
    v24 = *((_DWORD *)this + 4);
    v26 = (CVehicle *)(*(unsigned __int8 *)(v24 + 1157) << 31);
    v25 = v26 == 0;
    if ( v26 )
    {
      v26 = *(CVehicle **)(v24 + 1424);
      v25 = v26 == 0;
    }
    if ( v25
      || !CVehicle::IsDriver(v26, (const CPed *)v24)
      && CVehicle::IsPassenger(*(CVehicle **)(*((_DWORD *)this + 4) + 1424), *((const CPed **)this + 4)) != 1 )
    {
      if ( CWeapon::IsTypeMelee((CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444)) == 1 )
      {
        SubTask = CTask::operator new((CTask *)&dword_38, v27);
        v28 = (CEntity *)*((_DWORD *)this + 4);
        CTaskComplex::CTaskComplex((CTaskComplex *)SubTask);
        *(_QWORD *)(SubTask + 16) = 0LL;
        *(_QWORD *)(SubTask + 24) = 0LL;
        *(_DWORD *)(SubTask + 32) = 0;
        *(_DWORD *)(SubTask + 36) = 0;
        *(_DWORD *)(SubTask + 40) = -1;
        *(_DWORD *)(SubTask + 44) = 0;
        *(_DWORD *)(SubTask + 52) = -1;
        *(_WORD *)(SubTask + 48) = 0;
        *(_DWORD *)SubTask = &off_6698C8;
        *(_DWORD *)(SubTask + 12) = v28;
        if ( v28 )
          CEntity::RegisterReference(v28, (CEntity **)(SubTask + 12));
        v29 = (unsigned int)CTimer::m_snTimeInMilliseconds | 0x7D000000000LL;
        *((_BYTE *)this + 52) = 1;
        *(_QWORD *)((char *)this + 44) = v29;
        goto LABEL_48;
      }
      v41 = this;
      v40 = 1002;
      goto LABEL_47;
    }
    v31 = *((_DWORD *)this + 4);
    v32 = *(_DWORD *)(v31 + 1424);
    v33 = *(float *)(v32 + 72);
    v34 = *(float *)(v32 + 76);
    *((_BYTE *)this + 12) |= 4u;
    v35 = *(CVehicle **)(v31 + 1424);
    if ( (unsigned int)(*((_DWORD *)v35 + 361) - 3) < 2
      || (*((_BYTE *)a2 + 1158) & 0x20) != 0
      || sqrtf((float)(v33 * v33) + (float)(v34 * v34)) > 0.1
      || !CVehicle::CanPedOpenLocks(v35, a2) )
    {
      goto LABEL_45;
    }
    v37 = (const CVehicle *)*((_DWORD *)this + 4);
    v38 = (CCarEnterExit *)*((_DWORD *)v37 + 356);
    v39 = *((_DWORD *)v38 + 360);
    if ( v39 == 9 )
    {
      if ( CWeapon::IsTypeMelee((CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444)) != 1 )
        goto LABEL_45;
      v37 = (const CVehicle *)*((_DWORD *)this + 4);
      v38 = (CCarEnterExit *)*((_DWORD *)v37 + 356);
      v39 = *((_DWORD *)v38 + 360);
    }
    if ( v39 != 5 )
    {
      v43 = (const CVehicle *)CCarEnterExit::ComputeTargetDoorToExit(v38, v37, v36);
      IsRoomForPedToLeaveCar = CCarEnterExit::IsRoomForPedToLeaveCar(v38, v43, 0, v44);
      *((_BYTE *)this + 12) = *((_BYTE *)this + 12) & 0xFB | (4 * IsRoomForPedToLeaveCar);
      v40 = 1003;
      if ( IsRoomForPedToLeaveCar == 1 && (*(_BYTE *)(*((_DWORD *)this + 4) + 1159) & 0x20) == 0 )
        v40 = 703;
      v41 = this;
      goto LABEL_47;
    }
LABEL_45:
    v40 = 1003;
    v41 = this;
LABEL_47:
    SubTask = CTaskComplexKillPedOnFoot::CreateSubTask(v41, v40, a2);
    goto LABEL_48;
  }
  SubTask = 0;
  *((_DWORD *)a2 + 291) &= ~0x400000u;
  return SubTask;
}


// ============================================================

// Address: 0x4e0c00
// Original: _ZN25CTaskComplexKillPedOnFoot14ControlSubTaskEP4CPed
// Demangled: CTaskComplexKillPedOnFoot::ControlSubTask(CPed *)
void __fastcall CTaskComplexKillPedOnFoot::ControlSubTask(CTaskComplexKillPedOnFoot *this, CPed *a2)
{
  int v4; // r9
  int v5; // r0
  int v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r2
  CTaskSimpleStandStill *v9; // r0
  float *v10; // r0
  int v11; // r0
  int v12; // r0
  unsigned int v13; // r1
  CTaskSimple *v14; // r0
  _DWORD *v15; // r0
  int v16; // r0
  int v17; // r0
  CVehicle *v18; // r0
  const CVehicle *v19; // r1
  int v20; // r1
  CVehicle *v21; // r0
  const CPed *v22; // r1
  unsigned int v23; // r0
  unsigned int v24; // r2
  CCarEnterExit *v25; // r0
  int v26; // r0
  int v27; // r1
  bool v28; // zf
  unsigned int v29; // r0
  unsigned int v30; // r1
  int v31; // r1
  CVehicle *v32; // r0
  const CVehicle *v33; // r1
  CCarEnterExit *v34; // r6
  const CVehicle *v35; // r0
  CVector *v36; // r3
  int IsRoomForPedToLeaveCar; // r0
  const CVehicle *v38; // r1
  CCarEnterExit *v39; // r8
  const CVehicle *v40; // r0
  CVector *v41; // r3
  int v42; // r0
  int v43; // r1
  bool v44; // zf
  CVehicle *v45; // r0
  int v46; // r0
  CPed *v47; // r1
  bool v48; // zf
  bool v49; // zf
  CPed *v50; // r1
  int v51; // r1
  bool v52; // zf
  const CVehicle *v53; // r1
  CCarEnterExit *v54; // r6
  const CVehicle *v55; // r0
  CVector *v56; // r3
  _BYTE v57[40]; // [sp+10h] [bp-28h] BYREF

  *((_DWORD *)a2 + 291) |= 0x400000u;
  if ( !*((_DWORD *)this + 4) )
  {
    v4 = 1302;
    goto LABEL_141;
  }
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 202 )
  {
    if ( (*((_BYTE *)this + 12) & 0x60) == 0x60 && (*(_BYTE *)(FindPlayerWanted(-1) + 30) & 4) == 0 )
      (*(void (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
        *((_DWORD *)this + 2),
        a2,
        1,
        0);
    return;
  }
  v5 = *((_DWORD *)this + 10);
  if ( v5 >= 1 && CTimer::m_snTimeInMilliseconds > (unsigned int)(v5 + *((_DWORD *)this + 9)) )
  {
    v6 = (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0);
    if ( v6 == 1 )
    {
      v9 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v7);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v9, 0, 0, 0, 8.0);
      return;
    }
LABEL_24:
    v4 = 200;
    goto LABEL_133;
  }
  if ( (*((_BYTE *)this + 12) & 2) != 0 )
  {
    v6 = (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0);
    if ( v6 == 1 )
    {
      (*(void (__fastcall **)(CTaskComplexKillPedOnFoot *, CPed *))(*(_DWORD *)this + 44))(this, a2);
      return;
    }
    goto LABEL_24;
  }
  if ( (*((_BYTE *)this + 12) & 8) != 0 )
    goto LABEL_32;
  v10 = (float *)*((_DWORD *)this + 4);
  if ( v10[337] > 0.0 )
  {
    if ( CPed::IsPlayer((CPed *)v10) == 1
      && ((*(_BYTE *)(**(_DWORD **)(*((_DWORD *)this + 4) + 1092) + 30) & 4) != 0
       || *((_DWORD *)a2 + 359) == 6 && *((_BYTE *)a2 + 1956) && !*(_WORD *)(FindPlayerWanted(-1) + 28))
      && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 202 )
    {
      if ( (*((_BYTE *)this + 12) & 0x20) != 0 )
      {
        v4 = 202;
        if ( (*(_BYTE *)(**(_DWORD **)(*((_DWORD *)this + 4) + 1092) + 30) & 4) != 0 )
          *((_BYTE *)this + 12) |= 0x40u;
      }
      else
      {
        v4 = 202;
      }
      goto LABEL_132;
    }
LABEL_32:
    v16 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
    v4 = 200;
    if ( v16 <= 1001 )
    {
      if ( v16 == 703 )
      {
        v20 = *((_DWORD *)this + 4);
        if ( !(*(unsigned __int8 *)(v20 + 1157) << 31) )
          goto LABEL_95;
        v21 = *(CVehicle **)(v20 + 1424);
        if ( !v21
          || !CVehicle::IsDriver(v21, (const CPed *)v20)
          && CVehicle::IsPassenger(*(CVehicle **)(*((_DWORD *)this + 4) + 1424), *((const CPed **)this + 4)) != 1 )
        {
          goto LABEL_95;
        }
        v22 = (const CPed *)*((_DWORD *)this + 4);
        if ( sqrtf(
               (float)(*(float *)(*((_DWORD *)v22 + 356) + 72) * *(float *)(*((_DWORD *)v22 + 356) + 72))
             + (float)(*(float *)(*((_DWORD *)v22 + 356) + 76) * *(float *)(*((_DWORD *)v22 + 356) + 76))) <= 0.1 )
        {
          if ( *((_BYTE *)this + 52) )
          {
            if ( *((_BYTE *)this + 53) )
            {
              v23 = CTimer::m_snTimeInMilliseconds;
              *((_BYTE *)this + 53) = 0;
              *((_DWORD *)this + 11) = v23;
              v24 = v23;
            }
            else
            {
              v24 = *((_DWORD *)this + 11);
              v23 = CTimer::m_snTimeInMilliseconds;
            }
            v8 = v24 + *((_DWORD *)this + 12);
            if ( v8 <= v23 )
            {
              v32 = (CVehicle *)*((_DWORD *)v22 + 356);
              if ( v32 )
              {
                if ( CVehicle::IsPassenger(v32, v22)
                  || CVehicle::IsDriver(*(CVehicle **)(*((_DWORD *)this + 4) + 1424), *((const CPed **)this + 4)) == 1 )
                {
                  v33 = (const CVehicle *)*((_DWORD *)this + 4);
                  v34 = (CCarEnterExit *)*((_DWORD *)v33 + 356);
                  v35 = (const CVehicle *)CCarEnterExit::ComputeTargetDoorToExit(v34, v33, (const CPed *)v8);
                  IsRoomForPedToLeaveCar = CCarEnterExit::IsRoomForPedToLeaveCar(v34, v35, 0, v36);
                  v4 = 1003;
                  *((_BYTE *)this + 12) = *((_BYTE *)this + 12) & 0xFB | (4 * IsRoomForPedToLeaveCar);
                  v8 = 2000;
                  *((_DWORD *)this + 11) = CTimer::m_snTimeInMilliseconds;
                  *((_DWORD *)this + 12) = 2000;
                  *((_BYTE *)this + 52) = 1;
                  if ( IsRoomForPedToLeaveCar )
                    v4 = 200;
                  goto LABEL_132;
                }
              }
            }
          }
          goto LABEL_95;
        }
        goto LABEL_131;
      }
      if ( v16 == 1001 )
      {
        *(_BYTE *)(*((_DWORD *)this + 2) + 48) = *((_BYTE *)this + 12) & 1;
        if ( CWeapon::IsTypeMelee((CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444)) == 1 )
        {
          v17 = *((_DWORD *)this + 4);
          if ( !(*(unsigned __int8 *)(v17 + 1157) << 31) )
          {
LABEL_95:
            v4 = 200;
            goto LABEL_132;
          }
          if ( (unsigned int)(*(_DWORD *)(*(_DWORD *)(v17 + 1424) + 1444) - 3) >= 2 )
          {
            v18 = *(CVehicle **)(v17 + 1424);
            if ( !v18
              || *((_DWORD *)v18 + 360) == 5
              || (*((_BYTE *)a2 + 1158) & 0x20) != 0
              || !CVehicle::CanPedOpenLocks(v18, a2) )
            {
              goto LABEL_95;
            }
            goto LABEL_152;
          }
          goto LABEL_131;
        }
        v4 = 1002;
      }
      goto LABEL_132;
    }
    if ( v16 != 1002 )
    {
      if ( v16 == 1003 )
      {
        v19 = (const CVehicle *)*((_DWORD *)this + 4);
        v8 = *((_DWORD *)v19 + 289);
        if ( (v8 & 0x100) == 0 )
        {
          v4 = 1002;
          if ( CWeapon::IsTypeMelee((CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444)) )
            v4 = 1001;
          goto LABEL_132;
        }
        v25 = (CCarEnterExit *)*((_DWORD *)v19 + 356);
        if ( v25 )
        {
          if ( CCarEnterExit::IsVehicleHealthy(v25, v19) != 1 )
          {
            v4 = 1210;
            goto LABEL_132;
          }
          v19 = (const CVehicle *)*((_DWORD *)this + 4);
          v8 = *((_DWORD *)v19 + 289);
        }
        if ( (v8 & 0x20000000) != 0 )
          goto LABEL_95;
        v26 = *((_DWORD *)v19 + 356);
        if ( (unsigned int)(*(_DWORD *)(v26 + 1444) - 3) < 2 )
          goto LABEL_95;
        v27 = *(_DWORD *)(v26 + 1440);
        v4 = 200;
        v28 = v27 == 5;
        if ( v27 != 5 )
          v28 = v27 == 9;
        if ( v28 )
          goto LABEL_132;
        if ( (*((_BYTE *)a2 + 1158) & 0x20) != 0
          || sqrtf(
               (float)(*(float *)(v26 + 72) * *(float *)(v26 + 72))
             + (float)(*(float *)(v26 + 76) * *(float *)(v26 + 76))) > 0.1
          || !CVehicle::CanPedOpenLocks((CVehicle *)v26, a2) )
        {
          goto LABEL_95;
        }
        if ( (*((_BYTE *)this + 12) & 4) != 0 )
        {
          v4 = 703;
          goto LABEL_132;
        }
        if ( !*((_BYTE *)this + 52) )
          goto LABEL_95;
        if ( *((_BYTE *)this + 53) )
        {
          v29 = CTimer::m_snTimeInMilliseconds;
          *((_BYTE *)this + 53) = 0;
          *((_DWORD *)this + 11) = v29;
          v30 = v29;
        }
        else
        {
          v30 = *((_DWORD *)this + 11);
          v29 = CTimer::m_snTimeInMilliseconds;
        }
        v8 = *((_DWORD *)this + 12);
        v4 = 200;
        if ( v30 + v8 > v29 )
          goto LABEL_132;
        v38 = (const CVehicle *)*((_DWORD *)this + 4);
        v39 = (CCarEnterExit *)*((_DWORD *)v38 + 356);
        v40 = (const CVehicle *)CCarEnterExit::ComputeTargetDoorToExit(v39, v38, (const CPed *)v8);
        v42 = CCarEnterExit::IsRoomForPedToLeaveCar(v39, v40, 0, v41);
        *((_BYTE *)this + 12) = *((_BYTE *)this + 12) & 0xFB | (4 * v42);
        v8 = 2000;
        *((_DWORD *)this + 11) = CTimer::m_snTimeInMilliseconds;
        *((_DWORD *)this + 12) = 2000;
        *((_BYTE *)this + 52) = 1;
LABEL_153:
        if ( v42 )
          v4 = 703;
      }
LABEL_132:
      v6 = *((_BYTE *)this + 12) & 0xFE;
      *((_BYTE *)this + 12) = v6;
LABEL_133:
      v47 = (CPed *)*((_DWORD *)this + 4);
      v48 = v47 == 0;
      if ( v47 )
      {
        v6 = *((_DWORD *)v47 + 354);
        v48 = v6 == 0;
      }
      if ( !v48 )
      {
        v8 = *((_DWORD *)a2 + 354);
        v49 = v8 == 0;
        if ( v8 )
        {
          v8 = *(unsigned __int8 *)(v8 + 51);
          v49 = *(unsigned __int8 *)(v6 + 51) == v8;
        }
        if ( !v49 )
        {
          CEventAreaCodes::CEventAreaCodes((CEventAreaCodes *)v57, v47);
          CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v57, 0);
          CEventAreaCodes::~CEventAreaCodes((CEventAreaCodes *)v57);
        }
      }
      if ( v4 == 200 )
      {
LABEL_143:
        v50 = (CPed *)*((_DWORD *)this + 4);
        if ( v50 )
          CTaskComplexGangLeader::DoGangAttackSpeech(a2, v50, (CPed *)v8);
        return;
      }
LABEL_141:
      if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             1,
             0) == 1 )
      {
        CTaskComplexKillPedOnFoot::CreateSubTask(this, v4, a2);
        return;
      }
      goto LABEL_143;
    }
    *(_BYTE *)(*((_DWORD *)this + 2) + 51) = *((_BYTE *)this + 12) & 1;
    if ( CWeapon::IsTypeMelee((CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444)) != 1 || CPed::IsPlayer(a2) == 1 )
    {
      if ( *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 364) || CPed::IsPlayer(a2) )
      {
        v4 = 200;
        goto LABEL_125;
      }
      if ( *((int *)a2 + 364) >= 1 )
      {
        v31 = 0;
LABEL_122:
        CPed::SetCurrentWeapon(a2, v31);
        v4 = 200;
        goto LABEL_125;
      }
      if ( *((int *)a2 + 371) > 0 )
      {
        v31 = 1;
        goto LABEL_122;
      }
      if ( *((int *)a2 + 378) > 0 )
      {
        v31 = 2;
        goto LABEL_122;
      }
      if ( *((int *)a2 + 385) > 0 )
      {
        v31 = 3;
        goto LABEL_122;
      }
      if ( *((int *)a2 + 392) > 0 )
      {
        v31 = 4;
        goto LABEL_122;
      }
      if ( *((int *)a2 + 399) > 0 )
      {
        v31 = 5;
        goto LABEL_122;
      }
      if ( *((int *)a2 + 406) > 0 )
      {
        v31 = 6;
        goto LABEL_122;
      }
      if ( *((int *)a2 + 413) > 0 )
      {
        v31 = 7;
        goto LABEL_122;
      }
      if ( *((int *)a2 + 420) > 0 )
      {
        v31 = 8;
        goto LABEL_122;
      }
      if ( *((int *)a2 + 427) > 0 )
      {
        v31 = 9;
        goto LABEL_122;
      }
      if ( *((int *)a2 + 434) > 0 )
      {
        v31 = 10;
        goto LABEL_122;
      }
      if ( *((int *)a2 + 441) > 0 )
      {
        v31 = 11;
        goto LABEL_122;
      }
      if ( *((int *)a2 + 448) > 0 )
      {
        v31 = 12;
        goto LABEL_122;
      }
      CPed::SetCurrentWeapon(a2, 0);
    }
    v4 = 1001;
LABEL_125:
    v43 = *((_DWORD *)this + 4);
    v45 = (CVehicle *)(*(unsigned __int8 *)(v43 + 1157) << 31);
    v44 = v45 == 0;
    if ( v45 )
    {
      v45 = *(CVehicle **)(v43 + 1424);
      v44 = v45 == 0;
    }
    if ( v44
      || !CVehicle::IsDriver(v45, (const CPed *)v43)
      && CVehicle::IsPassenger(*(CVehicle **)(*((_DWORD *)this + 4) + 1424), *((const CPed **)this + 4)) != 1 )
    {
      goto LABEL_132;
    }
    v46 = *(_DWORD *)(*((_DWORD *)this + 4) + 1424);
    if ( (unsigned int)(*(_DWORD *)(v46 + 1444) - 3) >= 2 )
    {
      v51 = *(_DWORD *)(v46 + 1440);
      v52 = v51 == 5;
      if ( v51 != 5 )
        v52 = v51 == 9;
      if ( v52
        || (*((_BYTE *)a2 + 1158) & 0x20) != 0
        || sqrtf((float)(*(float *)(v46 + 72) * *(float *)(v46 + 72)) + (float)(*(float *)(v46 + 76)
                                                                              * *(float *)(v46 + 76))) > 0.1
        || !CVehicle::CanPedOpenLocks((CVehicle *)v46, a2) )
      {
        goto LABEL_132;
      }
LABEL_152:
      v53 = (const CVehicle *)*((_DWORD *)this + 4);
      v54 = (CCarEnterExit *)*((_DWORD *)v53 + 356);
      v55 = (const CVehicle *)CCarEnterExit::ComputeTargetDoorToExit(v54, v53, (const CPed *)v8);
      v42 = CCarEnterExit::IsRoomForPedToLeaveCar(v54, v55, 0, v56);
      v4 = 1003;
      *((_BYTE *)this + 12) = *((_BYTE *)this + 12) & 0xFB | (4 * v42);
      goto LABEL_153;
    }
LABEL_131:
    v4 = 1003;
    goto LABEL_132;
  }
  if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         1,
         0) != 1 )
    goto LABEL_32;
  v11 = *((_DWORD *)this + 2);
  *((_BYTE *)this + 12) |= 8u;
  v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 20))(v11);
  v13 = 1210;
  if ( v12 != 1210 )
  {
    if ( *((_DWORD *)a2 + 359) == 6 && !CPed::IsPlayer(*((CPed **)this + 4)) )
      CPed::Say(a2, 0xEu, 0, 1.0, 0, 0, 0);
    if ( (*((_BYTE *)a2 + 1169) & 0x10) != 0 )
    {
      CTaskComplexKillPedOnFoot::CreateSubTask(this, 1210, (CVehicle **)a2);
    }
    else
    {
      v14 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, v13);
      CTaskSimple::CTaskSimple(v14);
      *v15 = &off_669000;
    }
  }
}


// ============================================================

// Address: 0x4e9d4c
// Original: _ZNK25CTaskComplexKillPedOnFoot5CloneEv
// Demangled: CTaskComplexKillPedOnFoot::Clone(void)
int __fastcall CTaskComplexKillPedOnFoot::Clone(CTaskComplexKillPedOnFoot *this, unsigned int a2)
{
  int v3; // r5
  CEntity *v4; // r6
  int v5; // r8
  int v6; // r9
  int v7; // r10
  char v8; // r11
  char v9; // r2
  char v10; // r0
  int v11; // r1
  char v12; // r0
  int v14; // [sp+0h] [bp-20h]

  v3 = CTask::operator new((CTask *)&dword_38, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  v5 = *((_DWORD *)this + 5);
  v6 = *((_DWORD *)this + 6);
  v7 = *((_DWORD *)this + 7);
  v14 = *((_DWORD *)this + 10);
  v8 = *((_BYTE *)this + 32);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 20) = v5;
  *(_DWORD *)(v3 + 24) = v6;
  *(_DWORD *)(v3 + 28) = v7;
  *(_BYTE *)(v3 + 32) = v8;
  *(_DWORD *)(v3 + 40) = v14;
  *(_WORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  v9 = *(_BYTE *)(v3 + 12);
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)v3 = &off_669850;
  v10 = v9 & 0x8B | 4;
  *(_BYTE *)(v3 + 12) = v10;
  *(_DWORD *)(v3 + 16) = v4;
  if ( v4 )
  {
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 16));
    v10 = *(_BYTE *)(v3 + 12);
  }
  v11 = CTimer::m_snTimeInMilliseconds;
  *(_BYTE *)(v3 + 12) = v10 & 0xF7;
  *(_DWORD *)(v3 + 36) = v11;
  v12 = v10 & 0xE7 | *((_BYTE *)this + 12) & 0x10;
  *(_BYTE *)(v3 + 12) = v12;
  *(_BYTE *)(v3 + 12) = v12 & 0xD7 | *((_BYTE *)this + 12) & 0x20;
  return v3;
}


// ============================================================

// Address: 0x4e9df8
// Original: _ZNK25CTaskComplexKillPedOnFoot11GetTaskTypeEv
// Demangled: CTaskComplexKillPedOnFoot::GetTaskType(void)
int __fastcall CTaskComplexKillPedOnFoot::GetTaskType(CTaskComplexKillPedOnFoot *this)
{
  return 1000;
}


// ============================================================

// Address: 0x4e9e00
// Original: _ZN25CTaskComplexKillPedOnFoot9SerializeEv
// Demangled: CTaskComplexKillPedOnFoot::Serialize(void)
void __fastcall CTaskComplexKillPedOnFoot::Serialize(CPed **this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r4
  CGenericGameStorage *v6; // r5
  int v7; // r2
  int v8; // r0

  v2 = (*((int (__fastcall **)(CPed **))*this + 5))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*((int (__fastcall **)(CPed **))*this + 5))(this) == 1000 )
  {
    v5 = GettPoolPedRef(this[4]);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    j_free(v6);
  }
  else
  {
    v8 = (*((int (__fastcall **)(CPed **))*this + 5))(this);
    sub_1941D4(1000, v8);
  }
}


// ============================================================

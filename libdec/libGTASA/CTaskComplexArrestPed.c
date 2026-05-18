
// Address: 0x19ecd4
// Original: j__ZN21CTaskComplexArrestPedC2EP4CPed
// Demangled: CTaskComplexArrestPed::CTaskComplexArrestPed(CPed *)
// attributes: thunk
void __fastcall CTaskComplexArrestPed::CTaskComplexArrestPed(CTaskComplexArrestPed *this, CPed *a2)
{
  _ZN21CTaskComplexArrestPedC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x53cbe0
// Original: _ZN21CTaskComplexArrestPedC2EP4CPed
// Demangled: CTaskComplexArrestPed::CTaskComplexArrestPed(CPed *)
void __fastcall CTaskComplexArrestPed::CTaskComplexArrestPed(CTaskComplexArrestPed *this, CPed *a2)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 8) = 0;
  *(_DWORD *)this = &off_66CFD4;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x53cc14
// Original: _ZN21CTaskComplexArrestPedD2Ev
// Demangled: CTaskComplexArrestPed::~CTaskComplexArrestPed()
void __fastcall CTaskComplexArrestPed::~CTaskComplexArrestPed(CTaskComplexArrestPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66CFD4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x53cc40
// Original: _ZN21CTaskComplexArrestPedD0Ev
// Demangled: CTaskComplexArrestPed::~CTaskComplexArrestPed()
void __fastcall CTaskComplexArrestPed::~CTaskComplexArrestPed(CTaskComplexArrestPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66CFD4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x53cc70
// Original: _ZN21CTaskComplexArrestPed13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexArrestPed::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexArrestPed::MakeAbortable(CTaskComplexArrestPed *this, CPed *a2, int a3, const CEvent *a4)
{
  return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x53cc7c
// Original: _ZN21CTaskComplexArrestPed17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexArrestPed::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexArrestPed::CreateNextSubTask(CTaskComplexArrestPed *this, CPed *a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r6
  bool v7; // zf
  CVehicle *v8; // r0
  int v9; // r0
  unsigned int v10; // r1
  int v11; // r0
  CTaskComplexFallAndGetUp *v12; // r0
  CTaskComplexFallAndGetUp *v13; // r6
  int v14; // r0
  int v15; // r1
  int v16; // r2
  _QWORD *v17; // r3
  int v18; // r1
  float *v19; // r3
  float32x2_t v20; // d16
  float32x2_t v21; // d17
  float v22; // s2
  int v23; // r1
  CTaskComplexArrestPed *v24; // r0
  int v26; // r5
  CEntity *v27; // r4
  float v28; // s0
  char v29; // r1
  CTaskComplexFallAndGetUp *ActiveTaskByType; // r0
  CTaskComplexFallAndGetUp *v31; // r0
  int v32; // r0
  int v33; // r1
  int v34; // r2
  _QWORD *v35; // r3
  int v36; // r1
  float32x2_t v37; // d16
  unsigned __int64 v38; // d0

  v4 = *((_DWORD *)this + 4);
  if ( !v4 )
    return 0;
  if ( (*(_BYTE *)(v4 + 1164) & 0x40) != 0
    && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 1100 )
  {
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 907
      || (*(_BYTE *)(*((_DWORD *)this + 2) + 72) & 4) == 0 )
    {
      v26 = *(_DWORD *)(*((_DWORD *)this + 4) + 1164);
      v6 = CTask::operator new((CTask *)&dword_4C, 0x38Bu);
      v27 = (CEntity *)*((_DWORD *)this + 4);
      CTaskComplex::CTaskComplex((CTaskComplex *)v6);
      v28 = 4.0;
      if ( (v26 & 0x40) == 0 )
        v28 = 3.0;
      *(_DWORD *)v6 = &off_6656E4;
      *(_DWORD *)(v6 + 16) = 50000;
      *(_DWORD *)(v6 + 20) = 1000;
      *(_DWORD *)(v6 + 28) = 0x40000000;
      *(_DWORD *)(v6 + 32) = 0;
      *(_DWORD *)(v6 + 36) = 0x40000000;
      *(_WORD *)(v6 + 48) = 0;
      *(_WORD *)(v6 + 60) = 0;
      *(_DWORD *)(v6 + 44) = 0;
      *(_DWORD *)(v6 + 40) = 0;
      *(_DWORD *)(v6 + 52) = 0;
      *(_DWORD *)(v6 + 56) = 0;
      v29 = *(_BYTE *)(v6 + 72);
      *(_DWORD *)(v6 + 64) = &off_665720;
      *(_DWORD *)(v6 + 68) = 6;
      *(_BYTE *)(v6 + 72) = v29 & 0xF0 | 3;
      *(float *)(v6 + 24) = v28;
      *(_DWORD *)(v6 + 12) = v27;
      if ( v27 )
        CEntity::RegisterReference(v27, (CEntity **)(v6 + 12));
      return v6;
    }
    goto LABEL_32;
  }
  v5 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v6 = 0;
  if ( v5 <= 828 )
  {
    if ( v5 != 703 )
    {
      v7 = v5 == 722;
      if ( v5 != 722 )
        v7 = v5 == 728;
      if ( !v7 )
        return v6;
      if ( (*(_BYTE *)(*((_DWORD *)this + 2) + 16) & 2) != 0 )
      {
        v8 = *(CVehicle **)(*((_DWORD *)this + 4) + 1424);
        if ( v8 )
        {
          if ( !CVehicle::CanPedOpenLocks(v8, a2) )
            *((_DWORD *)this + 8) = *(_DWORD *)(*((_DWORD *)this + 4) + 1424);
        }
      }
      if ( !CPed::IsAlive(*((CPed **)this + 4)) )
        goto LABEL_32;
      v9 = *((_DWORD *)this + 4);
      v10 = *(unsigned __int8 *)(v9 + 1157) << 31;
      if ( v10 )
      {
        v10 = *(unsigned __int8 *)(*((_DWORD *)this + 2) + 16) << 30;
        if ( (*(_BYTE *)(*((_DWORD *)this + 2) + 16) & 2) == 0
          && !CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(v9 + 1088) + 4), 704) )
        {
          goto LABEL_32;
        }
      }
      goto LABEL_58;
    }
    ActiveTaskByType = (CTaskComplexFallAndGetUp *)CTaskManager::FindActiveTaskByType(
                                                     (CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4),
                                                     208);
    v13 = ActiveTaskByType;
    if ( !ActiveTaskByType
      || CTaskComplexFallAndGetUp::IsFalling(ActiveTaskByType) != 1
      || (*(_BYTE *)(*((_DWORD *)this + 2) + 16) & 4) != 0 )
    {
LABEL_58:
      v6 = CTask::operator new((CTask *)&dword_38, v10);
      CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(
        (CTaskComplexKillPedOnFoot *)v6,
        *((CPed **)this + 4),
        -1,
        0,
        0,
        0,
        1);
      return v6;
    }
    goto LABEL_45;
  }
  v10 = 829;
  switch ( v5 )
  {
    case 829:
      goto LABEL_58;
    case 907:
      v31 = (CTaskComplexFallAndGetUp *)CTaskManager::FindActiveTaskByType(
                                          (CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4),
                                          208);
      v13 = v31;
      if ( !v31 || CTaskComplexFallAndGetUp::IsFalling(v31) != 1 || (*(_BYTE *)(*((_DWORD *)this + 2) + 72) & 4) == 0 )
        goto LABEL_58;
LABEL_45:
      v32 = *((_DWORD *)this + 4);
      v33 = *((_DWORD *)a2 + 5);
      v34 = *(_DWORD *)(v32 + 20);
      v35 = (_QWORD *)(v33 + 48);
      if ( !v33 )
        v35 = (_QWORD *)((char *)a2 + 4);
      v36 = v34 + 48;
      v20.n64_u64[0] = *v35;
      v19 = (float *)(v35 + 1);
      if ( !v34 )
        v36 = v32 + 4;
      v21.n64_u64[0] = *(unsigned __int64 *)v36;
      v22 = *(float *)(v36 + 8);
      v23 = 1000;
LABEL_50:
      if ( fabsf(v22 - *v19) <= 2.0 )
      {
        v37.n64_u64[0] = vsub_f32(v21, v20).n64_u64[0];
        v38 = vmul_f32(v37, v37).n64_u64[0];
        if ( (float)((float)(*(float *)&v38 + *((float *)&v38 + 1)) + 0.0) <= 9.0 )
        {
          CTaskComplexFallAndGetUp::SetDownTime(v13, (int)&elf_hash_chain[8526]);
          v23 = 1100;
        }
      }
      v24 = this;
      return CTaskComplexArrestPed::CreateSubTask(v24, v23, a2);
    case 1000:
      v11 = *((_DWORD *)this + 4);
      if ( *(float *)(v11 + 1348) > 0.0 )
      {
        v12 = (CTaskComplexFallAndGetUp *)CTaskManager::FindActiveTaskByType(
                                            (CTaskManager *)(*(_DWORD *)(v11 + 1088) + 4),
                                            208);
        v13 = v12;
        if ( v12 && CTaskComplexFallAndGetUp::IsFalling(v12) == 1 )
        {
          v14 = *((_DWORD *)this + 4);
          v15 = *((_DWORD *)a2 + 5);
          v16 = *(_DWORD *)(v14 + 20);
          v17 = (_QWORD *)(v15 + 48);
          if ( !v15 )
            v17 = (_QWORD *)((char *)a2 + 4);
          v18 = v16 + 48;
          v20.n64_u64[0] = *v17;
          v19 = (float *)(v17 + 1);
          if ( !v16 )
            v18 = v14 + 4;
          v21.n64_u64[0] = *(unsigned __int64 *)v18;
          v22 = *(float *)(v18 + 8);
          v23 = 907;
          goto LABEL_50;
        }
        if ( *((_DWORD *)a2 + 359) == 6
          || CPed::IsPlayer(*((CPed **)this + 4)) != 1
          || !*(_BYTE *)(**(_DWORD **)(*((_DWORD *)this + 4) + 1092) + 24) )
        {
          goto LABEL_58;
        }
        return 0;
      }
LABEL_32:
      v24 = this;
      v23 = 1100;
      return CTaskComplexArrestPed::CreateSubTask(v24, v23, a2);
  }
  return v6;
}


// ============================================================

// Address: 0x53cfc0
// Original: _ZN21CTaskComplexArrestPed13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexArrestPed::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexArrestPed::CreateSubTask(CTaskComplexArrestPed *this, int a2, CPed *a3)
{
  int v4; // r4
  int v5; // r0
  int v6; // r1
  int v7; // r3
  float *v8; // r6
  float *v9; // r1
  float v10; // s0
  float v11; // s4
  const CPed *v12; // r1
  CVehicle *v13; // r0
  int v14; // r0
  int v15; // r2
  int v16; // r0
  CEntity *v17; // r5
  CEntity **v18; // r1
  int v19; // r6
  float v20; // s0
  char v21; // r1
  float v23[7]; // [sp+Ch] [bp-1Ch] BYREF

  v4 = 0;
  if ( a2 <= 906 )
  {
    if ( a2 >= 728 )
    {
      if ( a2 == 728 )
      {
        v4 = CTask::operator new((CTask *)&dword_50, 0x2D8u);
        CTaskComplexOpenPassengerDoor::CTaskComplexOpenPassengerDoor(
          (CTaskComplexOpenPassengerDoor *)v4,
          *(CVehicle **)(*((_DWORD *)this + 4) + 1424),
          8);
      }
      else if ( a2 == 829 )
      {
        v5 = *((_DWORD *)this + 4);
        v6 = *((_DWORD *)a3 + 5);
        v7 = *(_DWORD *)(v5 + 20);
        v8 = (float *)(v6 + 48);
        if ( !v6 )
          v8 = (float *)((char *)a3 + 4);
        v9 = (float *)(v7 + 48);
        if ( !v7 )
          v9 = (float *)(v5 + 4);
        v10 = *v9 - *v8;
        v11 = v9[2] - v8[2];
        v23[1] = v9[1] - v8[1];
        v23[0] = v10;
        v23[2] = v11;
        v4 = CTask::operator new((CTask *)&dword_1C, (unsigned int)v9);
        CTaskSimpleWaitUntilPedIsOutCar::CTaskSimpleWaitUntilPedIsOutCar(
          (CTaskSimpleWaitUntilPedIsOutCar *)v4,
          *((CPed **)this + 4),
          (const CVector *)v23);
      }
    }
    else if ( a2 == 703 )
    {
      v4 = CTask::operator new((CTask *)&dword_54, 0x2BFu);
      CTaskComplexDragPedFromCar::CTaskComplexDragPedFromCar(
        (CTaskComplexDragPedFromCar *)v4,
        *((CPed **)this + 4),
        100000);
    }
    else if ( a2 == 722 )
    {
      v4 = CTask::operator new((CTask *)&dword_50, 0x2D2u);
      CTaskComplexOpenDriverDoor::CTaskComplexOpenDriverDoor(
        (CTaskComplexOpenDriverDoor *)v4,
        *(CVehicle **)(*((_DWORD *)this + 4) + 1424));
    }
    return v4;
  }
  if ( a2 > 1002 )
  {
    if ( a2 == 1003 )
    {
      v4 = CTask::operator new((CTask *)&dword_20, 0x3EBu);
      CTaskComplexDestroyCar::CTaskComplexDestroyCar(
        (CTaskComplexDestroyCar *)v4,
        *(CVehicle **)(*((_DWORD *)this + 4) + 1424),
        0,
        0,
        0);
      return v4;
    }
    if ( a2 == 1100 )
    {
      v12 = (const CPed *)*((_DWORD *)this + 4);
      v13 = (CVehicle *)*((_DWORD *)v12 + 356);
      if ( v13 && CVehicle::IsDriver(v13, v12) == 1 )
      {
        v14 = *(_DWORD *)(*((_DWORD *)this + 4) + 1424);
        v15 = *(_DWORD *)(v14 + 1072);
        *(_DWORD *)(v14 + 1068) |= 0x20u;
        *(_DWORD *)(v14 + 1072) = v15;
        v16 = *(_DWORD *)(*((_DWORD *)this + 4) + 1424);
        v12 = (const CPed *)(*(_BYTE *)(v16 + 58) & 7 | 0x48);
        *(_BYTE *)(v16 + 58) = (_BYTE)v12;
      }
      v4 = CTask::operator new((CTask *)&dword_14, (unsigned int)v12);
      v17 = (CEntity *)*((_DWORD *)this + 4);
      CTaskSimple::CTaskSimple((CTaskSimple *)v4);
      *(_BYTE *)(v4 + 12) = 0;
      *(_DWORD *)(v4 + 16) = 0;
      *(_DWORD *)v4 = &off_66CFA0;
      *(_DWORD *)(v4 + 8) = v17;
      v18 = (CEntity **)(v4 + 8);
      if ( v17 )
        goto LABEL_28;
    }
  }
  else
  {
    if ( a2 != 907 )
    {
      if ( a2 == 1000 )
      {
        v4 = CTask::operator new((CTask *)&dword_38, 0x3E8u);
        CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(
          (CTaskComplexKillPedOnFoot *)v4,
          *((CPed **)this + 4),
          -1,
          0,
          0,
          0,
          1);
      }
      return v4;
    }
    v19 = *(_DWORD *)(*((_DWORD *)this + 4) + 1164);
    v4 = CTask::operator new((CTask *)&dword_4C, 0x38Bu);
    v17 = (CEntity *)*((_DWORD *)this + 4);
    CTaskComplex::CTaskComplex((CTaskComplex *)v4);
    v20 = 4.0;
    if ( (v19 & 0x40) == 0 )
      v20 = 3.0;
    *(_DWORD *)v4 = &off_6656E4;
    *(_DWORD *)(v4 + 16) = 50000;
    *(_DWORD *)(v4 + 20) = 1000;
    *(_DWORD *)(v4 + 28) = 0x40000000;
    *(_DWORD *)(v4 + 32) = 0;
    *(_DWORD *)(v4 + 36) = 0x40000000;
    *(_WORD *)(v4 + 48) = 0;
    *(_WORD *)(v4 + 60) = 0;
    *(_DWORD *)(v4 + 40) = 0;
    *(_DWORD *)(v4 + 44) = 0;
    *(_DWORD *)(v4 + 52) = 0;
    *(_DWORD *)(v4 + 56) = 0;
    v21 = *(_BYTE *)(v4 + 72);
    *(_DWORD *)(v4 + 64) = &off_665720;
    *(_DWORD *)(v4 + 68) = 6;
    *(_BYTE *)(v4 + 72) = v21 & 0xF0 | 3;
    *(float *)(v4 + 24) = v20;
    *(_DWORD *)(v4 + 12) = v17;
    v18 = (CEntity **)(v4 + 12);
    if ( v17 )
LABEL_28:
      CEntity::RegisterReference(v17, v18);
  }
  return v4;
}


// ============================================================

// Address: 0x53d214
// Original: _ZN21CTaskComplexArrestPed18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexArrestPed::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexArrestPed::CreateFirstSubTask(CTaskComplexArrestPed *this, CPed *a2)
{
  int v4; // r0
  int v5; // r6
  CVehicle *v7; // r0
  int v8; // r1
  CPed *v9; // r0
  int v10; // r1

  v4 = *((_DWORD *)this + 4);
  if ( !v4 )
    return 0;
  *((_BYTE *)this + 12) = 0;
  if ( *(unsigned __int8 *)(v4 + 1157) << 31 )
  {
    v7 = *(CVehicle **)(v4 + 1424);
    if ( *((_DWORD *)v7 + 360) == 9 || (v8 = *((_DWORD *)v7 + 361), v8 == 2) )
    {
      v5 = 703;
    }
    else if ( v8 == 5 )
    {
      if ( CWeapon::IsTypeMelee((CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444)) == 1 )
      {
        if ( CPed::DoWeHaveWeaponAvailable() == 1 )
        {
          v9 = a2;
          v10 = 25;
        }
        else
        {
          if ( !CPed::DoWeHaveWeaponAvailable() )
            CPed::GiveWeapon(a2, 22, 10, 0);
          v9 = a2;
          v10 = 22;
        }
        CPed::SetCurrentWeapon(v9, v10);
      }
      v5 = 1003;
    }
    else
    {
      v5 = 1003;
      if ( !CVehicle::IsUpsideDown(v7) && !CVehicle::IsOnItsSide(*(CVehicle **)(*((_DWORD *)this + 4) + 1424)) )
        v5 = 722;
    }
  }
  else
  {
    v5 = 1000;
  }
  return CTaskComplexArrestPed::CreateSubTask(this, v5, a2);
}


// ============================================================

// Address: 0x53d2d8
// Original: _ZN21CTaskComplexArrestPed14ControlSubTaskEP4CPed
// Demangled: CTaskComplexArrestPed::ControlSubTask(CPed *)
int __fastcall CTaskComplexArrestPed::ControlSubTask(CTaskComplexArrestPed *this, CPed *a2)
{
  int v4; // r0
  int v5; // r10
  int v6; // r4
  int v7; // r0
  int v8; // r0
  CTaskComplexFallAndGetUp *v9; // r0
  CTaskComplexFallAndGetUp *v10; // r9
  int v11; // r0
  int v12; // r1
  float32x2_t *v13; // r2
  _QWORD *v14; // r3
  float32x2_t *v15; // r1
  float *v16; // r3
  float32x2_t v17; // d16
  float32x2_t v18; // d16
  unsigned __int64 v19; // d0
  int ActiveTaskByType; // r0
  int v21; // r1
  int v22; // r3
  int v23; // r4
  char *v24; // r2
  int v25; // r3
  int v26; // r0
  float32x2_t v27; // d16
  unsigned __int64 v28; // d1
  int v29; // r0
  int v30; // r1
  int v31; // r3
  int v32; // r4
  char *v33; // r2
  int v34; // r3
  int v35; // r0
  float32x2_t v36; // d16
  unsigned __int64 v37; // d1
  int v38; // r0
  int v39; // r0
  CWanted *PlayerWanted; // r0
  CPed *v41; // r0
  CVehicle *v42; // r0
  CVector *v43; // r3
  CVector *v44; // r3
  int v46; // r1

  v4 = *((_DWORD *)this + 4);
  v5 = *((_DWORD *)this + 2);
  if ( !v4 )
  {
    v6 = 1302;
    v7 = *((_DWORD *)this + 2);
    goto LABEL_75;
  }
  if ( *(float *)(v4 + 1348) <= 0.0 )
  {
    v6 = 1302;
    goto LABEL_67;
  }
  if ( *((_BYTE *)this + 12) )
  {
    if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(*(_DWORD *)v5 + 28))(*((_DWORD *)this + 2), a2, 1, 0) == 1 )
    {
      v5 = (*(int (__fastcall **)(CTaskComplexArrestPed *, CPed *))(*(_DWORD *)this + 44))(this, a2);
      v6 = 200;
      goto LABEL_67;
    }
    goto LABEL_66;
  }
  if ( (*(_BYTE *)(v4 + 1164) & 0x40) != 0
    && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 20))(*((_DWORD *)this + 2)) != 1100 )
  {
    v6 = 907;
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 907 )
      goto LABEL_67;
  }
  v8 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v6 = 200;
  if ( v8 < 728 )
  {
    if ( v8 == 703 )
    {
LABEL_34:
      v6 = 200;
      if ( !(*(unsigned __int8 *)(*((_DWORD *)this + 4) + 1157) << 31) )
        v6 = 1000;
      goto LABEL_67;
    }
    if ( v8 != 722 )
      goto LABEL_67;
    ActiveTaskByType = CTaskManager::FindActiveTaskByType(
                         (CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4),
                         704);
    v21 = *((_DWORD *)this + 4);
    v22 = *((_DWORD *)a2 + 5);
    v23 = *(_DWORD *)(v21 + 20);
    v24 = (char *)(v22 + 48);
    if ( !v22 )
      v24 = (char *)a2 + 4;
    v25 = v23 + 48;
    if ( !v23 )
      v25 = v21 + 4;
    if ( ActiveTaskByType )
    {
      v26 = v21 + 1156;
      v27.n64_u64[0] = vsub_f32(*(float32x2_t *)(v25 + 4), *(float32x2_t *)(v24 + 4)).n64_u64[0];
      v28 = vmul_f32(v27, v27).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v25 - *(float *)v24) * (float)(*(float *)v25 - *(float *)v24))
                         + *(float *)&v28)
                 + *((float *)&v28 + 1)) < 25.0
        && (*(_DWORD *)(v21 + 1156) & 0x100) != 0 )
      {
        goto LABEL_44;
      }
    }
    else
    {
      v26 = v21 + 1156;
    }
    if ( !(*(unsigned __int8 *)(v26 + 1) << 31) )
      goto LABEL_64;
    v6 = 200;
    if ( !CCarEnterExit::IsRoomForPedToLeaveCar(
            *(CCarEnterExit **)(v21 + 1424),
            (const CVehicle *)&byte_9[1],
            0,
            (CVector *)v25)
      && CCarEnterExit::IsRoomForPedToLeaveCar(
           *(CCarEnterExit **)(*((_DWORD *)this + 4) + 1424),
           (const CVehicle *)byte_8,
           0,
           v43) )
    {
      v6 = 728;
    }
LABEL_67:
    v41 = (CPed *)*((_DWORD *)this + 4);
    if ( !v41 )
      goto LABEL_73;
    goto LABEL_68;
  }
  if ( v8 == 728 )
  {
    v29 = CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4), 704);
    v30 = *((_DWORD *)this + 4);
    v31 = *((_DWORD *)a2 + 5);
    v32 = *(_DWORD *)(v30 + 20);
    v33 = (char *)(v31 + 48);
    if ( !v31 )
      v33 = (char *)a2 + 4;
    v34 = v32 + 48;
    if ( !v32 )
      v34 = v30 + 4;
    if ( v29 )
    {
      v35 = v30 + 1156;
      v36.n64_u64[0] = vsub_f32(*(float32x2_t *)(v34 + 4), *(float32x2_t *)(v33 + 4)).n64_u64[0];
      v37 = vmul_f32(v36, v36).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v34 - *(float *)v33) * (float)(*(float *)v34 - *(float *)v33))
                         + *(float *)&v37)
                 + *((float *)&v37 + 1)) < 25.0
        && (*(_DWORD *)(v30 + 1156) & 0x100) != 0 )
      {
LABEL_44:
        v6 = 829;
        goto LABEL_67;
      }
    }
    else
    {
      v35 = v30 + 1156;
    }
    if ( *(unsigned __int8 *)(v35 + 1) << 31 )
    {
      if ( CCarEnterExit::IsRoomForPedToLeaveCar(
             *(CCarEnterExit **)(v30 + 1424),
             (const CVehicle *)byte_8,
             0,
             (CVector *)v34) )
      {
        goto LABEL_66;
      }
      if ( CCarEnterExit::IsRoomForPedToLeaveCar(
             *(CCarEnterExit **)(*((_DWORD *)this + 4) + 1424),
             (const CVehicle *)&byte_9[1],
             0,
             v44) )
      {
        v6 = 722;
        goto LABEL_67;
      }
LABEL_80:
      if ( CWeapon::IsTypeMelee((CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444)) == 1 )
      {
        if ( CPed::DoWeHaveWeaponAvailable() == 1 )
          v46 = 25;
        else
          v46 = 22;
        CPed::SetCurrentWeapon(a2, v46);
        v6 = 1003;
        goto LABEL_67;
      }
LABEL_85:
      v6 = 1003;
      goto LABEL_67;
    }
LABEL_64:
    v6 = 1000;
    goto LABEL_67;
  }
  if ( v8 == 1003 )
    goto LABEL_34;
  if ( v8 != 1000 )
    goto LABEL_67;
  v9 = (CTaskComplexFallAndGetUp *)CTaskManager::FindActiveTaskByType(
                                     (CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4),
                                     208);
  v10 = v9;
  if ( v9 && CTaskComplexFallAndGetUp::IsFalling(v9) == 1 )
  {
    v11 = *((_DWORD *)this + 4);
    v6 = 907;
    v12 = *((_DWORD *)a2 + 5);
    v13 = *(float32x2_t **)(v11 + 20);
    v14 = (_QWORD *)(v12 + 48);
    if ( !v12 )
      v14 = (_QWORD *)((char *)a2 + 4);
    v15 = v13 + 6;
    v17.n64_u64[0] = *v14;
    v16 = (float *)(v14 + 1);
    if ( !v13 )
      v15 = (float32x2_t *)(v11 + 4);
    if ( fabsf(*v16 - v15[1].n64_f32[0]) <= 2.0 )
    {
      v18.n64_u64[0] = vsub_f32(v17, (float32x2_t)v15->n64_u64[0]).n64_u64[0];
      v19 = vmul_f32(v18, v18).n64_u64[0];
      if ( (float)((float)(*(float *)&v19 + *((float *)&v19 + 1)) + 0.0) <= 9.0 )
      {
        CTaskComplexFallAndGetUp::SetDownTime(v10, (int)&elf_hash_chain[8526]);
        v6 = 1100;
      }
    }
    goto LABEL_67;
  }
  v38 = *((_DWORD *)this + 4);
  if ( !(*(unsigned __int8 *)(v38 + 1157) << 31) )
    goto LABEL_66;
  v39 = *(_DWORD *)(v38 + 1424);
  if ( !v39 )
    goto LABEL_66;
  if ( *(_DWORD *)(v39 + 1440) == 5 || (unsigned int)(*(_DWORD *)(v39 + 1444) - 3) <= 1 )
    goto LABEL_80;
  if ( !CWeapon::IsTypeMelee((CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444)) )
  {
    PlayerWanted = (CWanted *)FindPlayerWanted(-1);
    if ( CWanted::IsClosestCop(PlayerWanted, a2, 2) != 1 )
      goto LABEL_85;
  }
  v41 = (CPed *)*((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 8) != *((_DWORD *)v41 + 356) )
  {
    if ( !CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)v41 + 272) + 4), 704) )
    {
      v42 = *(CVehicle **)(*((_DWORD *)this + 4) + 1424);
      if ( *((_DWORD *)v42 + 360) == 9 || *((_DWORD *)v42 + 361) == 2 )
      {
        v6 = 703;
      }
      else
      {
        v6 = 1003;
        if ( !CVehicle::IsUpsideDown(v42) && !CVehicle::IsOnItsSide(*(CVehicle **)(*((_DWORD *)this + 4) + 1424)) )
          v6 = 722;
      }
      goto LABEL_67;
    }
LABEL_66:
    v6 = 200;
    goto LABEL_67;
  }
  v6 = 200;
  if ( !v41 )
  {
LABEL_73:
    if ( v6 == 200 )
      return v5;
    goto LABEL_74;
  }
LABEL_68:
  if ( CPed::IsPlayer(v41) != 1 )
    goto LABEL_73;
  if ( *(_BYTE *)(FindPlayerWanted(-1) + 24) != 1 )
  {
    FindPlayerWanted(-1);
    goto LABEL_73;
  }
  CPed::Say(a2, 0xC7u, 0, 1.0, 0, 0, 0);
  if ( v6 == 200 )
    return v5;
LABEL_74:
  v7 = *((_DWORD *)this + 2);
LABEL_75:
  if ( (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v7 + 28))(v7, a2, 1, 0) == 1 )
    return CTaskComplexArrestPed::CreateSubTask(this, v6, a2);
  return v5;
}


// ============================================================

// Address: 0x540958
// Original: _ZNK21CTaskComplexArrestPed5CloneEv
// Demangled: CTaskComplexArrestPed::Clone(void)
int __fastcall CTaskComplexArrestPed::Clone(CTaskComplexArrestPed *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5

  v3 = CTask::operator new((CTask *)&dword_24, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)v3 = &off_66CFD4;
  *(_DWORD *)(v3 + 16) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

// Address: 0x540994
// Original: _ZNK21CTaskComplexArrestPed11GetTaskTypeEv
// Demangled: CTaskComplexArrestPed::GetTaskType(void)
int __fastcall CTaskComplexArrestPed::GetTaskType(CTaskComplexArrestPed *this)
{
  return 1101;
}


// ============================================================

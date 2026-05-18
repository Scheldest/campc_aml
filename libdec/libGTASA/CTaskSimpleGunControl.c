
// Address: 0x1961a0
// Original: j__ZN21CTaskSimpleGunControlC2EP7CEntityPK7CVectorS4_asi
// Demangled: CTaskSimpleGunControl::CTaskSimpleGunControl(CEntity *,CVector const*,CVector const*,signed char,short,int)
// attributes: thunk
void __fastcall CTaskSimpleGunControl::CTaskSimpleGunControl(
        CTaskSimpleGunControl *this,
        CEntity *a2,
        const CVector *a3,
        const CVector *a4,
        signed __int8 a5,
        __int16 a6,
        int a7)
{
  _ZN21CTaskSimpleGunControlC2EP7CEntityPK7CVectorS4_asi(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x19dea8
// Original: j__ZN21CTaskSimpleGunControl10CreateTaskEv
// Demangled: CTaskSimpleGunControl::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleGunControl::CreateTask(CTaskSimpleGunControl *this)
{
  return _ZN21CTaskSimpleGunControl10CreateTaskEv(this);
}


// ============================================================

// Address: 0x496784
// Original: _ZN21CTaskSimpleGunControl10CreateTaskEv
// Demangled: CTaskSimpleGunControl::CreateTask(void)
void __fastcall CTaskSimpleGunControl::CreateTask(CTaskSimpleGunControl *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int Vehicle; // r0
  char v7; // r4
  CEntity *v8; // r4
  char v9; // r5
  int v10; // r2
  char v11; // r5
  unsigned int v12; // r1
  CTaskSimpleGunControl *v13; // r0
  _BYTE v14[12]; // [sp+Ch] [bp-2Ch] BYREF
  CPools *v15[3]; // [sp+18h] [bp-20h] BYREF
  _DWORD v16[5]; // [sp+24h] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, byte_4, a3);
  if ( v16[0] == 2 )
  {
    v7 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, (char *)&stderr + 2, v4);
      UseDataFence = v7;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, byte_4, v4);
    if ( v15[0] != (CPools *)-1 )
    {
      Vehicle = CPools::GetVehicle(v15[0], (int)v15[0] + 1);
      goto LABEL_13;
    }
  }
  else if ( v16[0] == 3 )
  {
    v5 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, (char *)&stderr + 2, v4);
      UseDataFence = v5;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, byte_4, v4);
    if ( v15[0] != (CPools *)-1 )
    {
      Vehicle = CPools::GetPed(v15[0], (int)v15[0] + 1);
LABEL_13:
      v8 = (CEntity *)Vehicle;
      goto LABEL_15;
    }
  }
  v8 = 0;
LABEL_15:
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, (char *)&stderr + 2, v4);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, &byte_9[3], v4);
  v11 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, v10);
    UseDataFence = v11;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, &byte_9[3], v10);
  v13 = (CTaskSimpleGunControl *)CTask::operator new((CTask *)&off_3C, v12);
  CTaskSimpleGunControl::CTaskSimpleGunControl(v13, v8, (const CVector *)v15, (const CVector *)v14, 1, 1, -1);
}


// ============================================================

// Address: 0x4ddf64
// Original: _ZN21CTaskSimpleGunControlC2EP7CEntityPK7CVectorS4_asi
// Demangled: CTaskSimpleGunControl::CTaskSimpleGunControl(CEntity *,CVector const*,CVector const*,signed char,short,int)
void __fastcall CTaskSimpleGunControl::CTaskSimpleGunControl(
        CTaskSimpleGunControl *this,
        CEntity *a2,
        const CVector *a3,
        const CVector *a4,
        signed __int8 a5,
        __int16 a6,
        int a7)
{
  __int64 v11; // d16
  __int64 v12; // d16

  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_DWORD *)this = &off_6696A8;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
  if ( a3 )
  {
    v11 = *(_QWORD *)a3;
    *((_DWORD *)this + 6) = *((_DWORD *)a3 + 2);
    *((_QWORD *)this + 2) = v11;
  }
  if ( a4 )
  {
    v12 = *(_QWORD *)a4;
    *((_DWORD *)this + 9) = *((_DWORD *)a4 + 2);
    *(_QWORD *)((char *)this + 28) = v12;
  }
  *((_WORD *)this + 22) = a6;
  *((_BYTE *)this + 46) = a5;
  *((_DWORD *)this + 12) = 1065353216;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 10) = a7;
  *((_WORD *)this + 28) = 1;
}


// ============================================================

// Address: 0x4de000
// Original: _ZN21CTaskSimpleGunControlD2Ev
// Demangled: CTaskSimpleGunControl::~CTaskSimpleGunControl()
void __fastcall CTaskSimpleGunControl::~CTaskSimpleGunControl(CTaskSimpleGunControl *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6696A8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4de02c
// Original: _ZN21CTaskSimpleGunControlD0Ev
// Demangled: CTaskSimpleGunControl::~CTaskSimpleGunControl()
void __fastcall CTaskSimpleGunControl::~CTaskSimpleGunControl(CTaskSimpleGunControl *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6696A8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4de05c
// Original: _ZN21CTaskSimpleGunControl13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleGunControl::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleGunControl::MakeAbortable(CTaskSimpleGunControl *this, CPed *a2, int a3, const CEvent *a4)
{
  int v7; // r5
  char v8; // r6
  int TaskSecondary; // r0
  CTaskSimpleDuck *TaskDuck; // r0

  if ( a3 == 1
    && a4
    && ((*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 12))(a4) < 22
     || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) >= 1
     && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) < 7) )
  {
    return 0;
  }
  if ( CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272)) )
  {
    v8 = 10;
    if ( a3 == 1 )
      v8 = 2;
    TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
    *(_BYTE *)(TaskSecondary + 56) = v8;
    *(_BYTE *)(TaskSecondary + 11) = 0;
  }
  if ( (*((_BYTE *)a2 + 1159) & 4) == 0 )
    return 1;
  v7 = 1;
  if ( CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 1) )
  {
    v7 = 1;
    TaskDuck = (CTaskSimpleDuck *)CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 1);
    CTaskSimpleDuck::ForceStopMove(TaskDuck);
  }
  return v7;
}


// ============================================================

// Address: 0x4de0f8
// Original: _ZN21CTaskSimpleGunControl10ProcessPedEP4CPed
// Demangled: CTaskSimpleGunControl::ProcessPed(CPed *)
int __fastcall CTaskSimpleGunControl::ProcessPed(CTaskSimpleGunControl *this, CPed *a2)
{
  int TaskUseGun; // r0
  unsigned int v5; // r2
  int TaskSecondary; // r0
  unsigned int v7; // r1
  int v8; // r10
  int v9; // r0
  int v10; // r6
  __int16 v11; // r0
  __int64 v12; // kr00_8
  __int64 v13; // r2
  CEntity *v14; // r0
  int v15; // r6
  CEntity *v16; // t1
  int v17; // r6
  __int64 v18; // kr08_8
  int v19; // r6
  int v20; // r0
  int Association; // r0
  int v22; // r9
  bool v23; // zf
  int *v24; // r0
  int WeaponInfo; // r8
  unsigned __int8 v26; // r0
  int v27; // r1
  int v28; // r5
  int v29; // r0
  int v30; // r6
  int v31; // r0
  int v32; // r1
  bool v33; // zf
  unsigned int v34; // r0
  _BOOL4 v35; // r1
  int v36; // r0
  unsigned int v37; // r1
  signed int v38; // r5
  unsigned __int16 v39; // r0
  __int16 v40; // r5
  int v41; // r1
  signed int v42; // r2
  bool v43; // cc
  _BOOL4 v44; // r2
  bool v45; // zf
  CEntity *v46; // r0
  CEntity *v47; // r10
  int v48; // r10
  int v49; // r9
  int v50; // r5
  unsigned int v51; // s4
  int v52; // r0
  int v53; // r0
  int v54; // r1
  bool v55; // zf
  int v56; // r10
  int v57; // r9
  CEntity *v58; // r0
  CEntity **v59; // r6
  CEntity *v60; // t1
  CEntity *v61; // r5
  int v62; // r1
  int v63; // r2
  float *v64; // r0
  int v65; // r1
  float v66; // s0
  float v67; // s2
  float v68; // s16
  float *v69; // r0
  float v70; // s6
  float v71; // s20
  float v72; // s18
  float v73; // s0
  float v74; // s2
  float v75; // s4
  float v76; // s0
  CTaskSimpleDuck *TaskDuck; // r0
  float v78; // s6
  float v79; // s4
  int v81; // [sp+4h] [bp-54h]
  int v82; // [sp+8h] [bp-50h]
  int v83; // [sp+Ch] [bp-4Ch]
  __int16 v84; // [sp+10h] [bp-48h]
  char v85; // [sp+14h] [bp-44h]
  int v86; // [sp+14h] [bp-44h]

  if ( *((_BYTE *)this + 8) )
  {
    TaskUseGun = CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272));
    if ( TaskUseGun )
    {
      v5 = *(unsigned __int8 *)(TaskUseGun + 56);
      *(_BYTE *)(TaskUseGun + 11) = 0;
      if ( v5 >= 4 )
        LOBYTE(v5) = 4;
      *(_BYTE *)(TaskUseGun + 56) = v5;
    }
    goto LABEL_143;
  }
  CPed::SetMoveState(a2, 1);
  if ( *((char *)this + 46) <= 5 )
  {
    TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
    v8 = *((_DWORD *)a2 + 272);
    if ( TaskSecondary )
    {
      v9 = CTaskManager::GetTaskSecondary((CTaskManager *)(v8 + 4), 0);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 20))(v9) != 1017 )
      {
        v30 = 0;
        v31 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
        (*(void (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v31 + 28))(v31, a2, 1, 0);
        return v30;
      }
      if ( *((_BYTE *)this + 56) )
      {
        *((_BYTE *)this + 56) = 0;
        *((_DWORD *)this + 13) = 0;
        v10 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
        v11 = *((_WORD *)this + 22);
        v12 = *(_QWORD *)((char *)this + 12);
        v13 = *(_QWORD *)((char *)this + 20);
        *(_DWORD *)(v10 + 32) = HIDWORD(v12);
        *(_QWORD *)(v10 + 36) = v13;
        *(_WORD *)(v10 + 52) = v11;
        *(_BYTE *)(v10 + 56) = -1;
        *(_WORD *)(v10 + 54) = 0;
        *(_BYTE *)(v10 + 12) = 0;
        CTaskSimpleUseGun::AbortIK((CTaskSimpleUseGun *)v10, a2);
        v16 = *(CEntity **)(v10 + 28);
        v15 = v10 + 28;
        v14 = v16;
        *(_WORD *)(v15 + 29) = 0;
        if ( v16 != (CEntity *)v12 )
        {
          if ( v14 )
            CEntity::CleanUpOldReference(v14, (CEntity **)v15);
          *(_DWORD *)v15 = v12;
          if ( (_DWORD)v12 )
            CEntity::RegisterReference((CEntity *)v12, (CEntity **)v15);
        }
      }
    }
    else
    {
      v17 = CTask::operator new((CTask *)&off_3C, v7);
      v18 = *(_QWORD *)((char *)this + 12);
      v83 = *((_DWORD *)this + 4);
      v82 = *((_DWORD *)this + 5);
      v81 = *((_DWORD *)this + 6);
      v84 = *((_WORD *)this + 22);
      v85 = *((_BYTE *)this + 58);
      CTaskSimple::CTaskSimple((CTaskSimple *)v17);
      *(_WORD *)(v17 + 8) = 256;
      *(_BYTE *)(v17 + 14) = 0;
      *(_DWORD *)(v17 + 20) = 0;
      *(_DWORD *)(v17 + 24) = 0;
      *(_DWORD *)(v17 + 10) = 0;
      *(_WORD *)(v17 + 15) = -255;
      *(_DWORD *)v17 = &off_669674;
      *(_DWORD *)(v17 + 28) = v18;
      if ( (_DWORD)v18 )
        CEntity::RegisterReference((CEntity *)v18, (CEntity **)(v17 + 28));
      *(_DWORD *)(v17 + 32) = v83;
      *(_DWORD *)(v17 + 36) = v82;
      *(_DWORD *)(v17 + 40) = v81;
      *(_DWORD *)(v17 + 44) = 0;
      *(_DWORD *)(v17 + 48) = 0;
      *(_WORD *)(v17 + 52) = v84;
      *(_DWORD *)(v17 + 54) = 16711680;
      *(_BYTE *)(v17 + 58) = 0;
      *(_BYTE *)(v17 + 59) = v85;
      CTaskManager::SetTaskSecondary((CTaskManager *)(v8 + 4), (CTask *)v17, 0);
      *((_BYTE *)this + 56) = 0;
      *((_DWORD *)this + 13) = 0;
      *((_BYTE *)this + 58) = 0;
    }
  }
  v19 = CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272));
  v20 = *((_DWORD *)a2 + 359);
  if ( v20 >= 7 )
  {
    if ( v20 >= 16 )
      goto LABEL_29;
    goto LABEL_21;
  }
  v23 = v20 == 6;
  if ( v20 == 6 )
    v23 = *((_DWORD *)a2 + 276) == 1;
  if ( !v23 || !v19 || *((_DWORD *)a2 + 335) != 1 )
    goto LABEL_29;
  v24 = (int *)(v19 + 48);
  v32 = *(_DWORD *)(v19 + 48);
  if ( v32 && (*(_BYTE *)(v32 + 24) & 2) != 0 )
  {
LABEL_21:
    Association = RpAnimBlendClumpGetAssociation();
    if ( !Association || *(float *)(Association + 24) < 1.0 && *(float *)(Association + 28) <= 0.0 )
    {
      CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0xBEu);
      if ( !v19 )
      {
LABEL_25:
        v22 = 0;
LABEL_32:
        CPed::GetWeaponSkill(a2);
        WeaponInfo = CWeaponInfo::GetWeaponInfo();
        goto LABEL_33;
      }
      goto LABEL_30;
    }
LABEL_29:
    if ( !v19 )
      goto LABEL_25;
LABEL_30:
    v24 = (int *)(v19 + 48);
  }
  v22 = 1;
  *((_BYTE *)this + 57) = *(_BYTE *)(v19 + 12);
  WeaponInfo = *v24;
  if ( !*v24 )
    goto LABEL_32;
LABEL_33:
  if ( *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 362) == 2 && (*(_BYTE *)(WeaponInfo + 25) & 0x10) != 0 )
  {
    v28 = 4;
  }
  else
  {
    v26 = *((_BYTE *)this + 46);
    switch ( v26 )
    {
      case 0u:
        v28 = 1;
        break;
      case 1u:
      case 2u:
        v27 = *((_DWORD *)this + 13);
        v28 = 1;
        if ( !v27 )
          v28 = 3;
        if ( v26 != 1 )
          v26 = 0;
        v29 = v26 & (v27 != 0);
        goto LABEL_74;
      case 3u:
        v34 = *((_DWORD *)this + 13);
        if ( CTimer::m_snTimeInMilliseconds < v34 )
        {
          v35 = v34 == -1;
          v29 = 0;
          if ( (v35 & v22) == 1 )
          {
            v29 = 0;
            v28 = 1;
            if ( *(_BYTE *)(v19 + 16) != 3 )
              *((_DWORD *)this + 13) = 0;
          }
          else
          {
            v28 = 1;
          }
          goto LABEL_74;
        }
        *((_DWORD *)this + 13) = -1;
        v36 = *(__int16 *)(WeaponInfo + 32);
        *((_WORD *)this + 22) = v36;
        if ( v36 >= 2 )
        {
          v37 = *((unsigned __int8 *)a2 + 1821);
          if ( v37 <= 0x63 )
          {
            v38 = 4 * v37 / 0x1E;
            if ( v38 > v36 )
              v38 = v36;
            *((_WORD *)this + 22) = v38;
            v39 = rand();
            if ( v38 <= (int)(float)((float)((float)v39 * 0.000015259) + (float)((float)v39 * 0.000015259)) )
            {
              LOWORD(v36) = 1;
            }
            else
            {
              v40 = *((_WORD *)this + 22);
              LOWORD(v36) = rand();
              LOWORD(v36) = v40
                          - (int)(float)((float)((float)(unsigned __int16)v36 * 0.000015259)
                                       + (float)((float)(unsigned __int16)v36 * 0.000015259));
            }
            *((_WORD *)this + 22) = v36;
          }
        }
        if ( v22 == 1 )
          *(_WORD *)(v19 + 52) = v36;
LABEL_72:
        v28 = 3;
        break;
      case 4u:
        v33 = v22 == 1;
        if ( v22 == 1 )
          v33 = *(_BYTE *)(v19 + 16) == 4;
        if ( !v33 )
          goto LABEL_72;
        v28 = 6;
        v29 = 0;
        *((_BYTE *)this + 46) = 6;
        goto LABEL_74;
      case 5u:
        goto LABEL_72;
      case 6u:
        v28 = 6;
        v29 = 1;
        goto LABEL_74;
      default:
        v29 = 0;
        v28 = 0;
        goto LABEL_74;
    }
  }
  v29 = 0;
LABEL_74:
  v41 = *((_DWORD *)this + 10);
  if ( v41 >= 0 )
  {
    v42 = (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
    v43 = v41 < v42;
    v41 -= v42;
    if ( v43 )
      v41 = 0;
    *((_DWORD *)this + 10) = v41;
  }
  v44 = v41 == 0;
  if ( v29 | v44 )
  {
    if ( !v19 || *((_BYTE *)this + 46) == 6 && *(_BYTE *)(v19 + 8) )
      goto LABEL_142;
    v45 = *(_BYTE *)(v19 + 11) == 0;
    if ( *(_BYTE *)(v19 + 11) )
      v45 = (*(_BYTE *)(v19 + 16) & 0xFE) == 2;
    if ( !v45 )
    {
      *(_BYTE *)(v19 + 11) = 0;
      *(_BYTE *)(v19 + 56) = 2;
LABEL_142:
      *((_BYTE *)this + 8) = 1;
LABEL_143:
      if ( (*((_BYTE *)a2 + 1159) & 4) == 0 )
        return 1;
      v30 = 1;
      if ( CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 1) )
      {
        v30 = 1;
        TaskDuck = (CTaskSimpleDuck *)CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 1);
        CTaskSimpleDuck::ForceStopMove(TaskDuck);
      }
      return v30;
    }
    if ( *((_BYTE *)this + 8) )
      goto LABEL_143;
    if ( ((v41 == 0) & (unsigned __int8)v22) == 1 )
    {
      *((_BYTE *)this + 46) = 6;
      v46 = *(CEntity **)(v19 + 28);
      v47 = (CEntity *)*((_DWORD *)this + 3);
      *(_BYTE *)(v19 + 9) = 1;
      if ( v46 != v47 )
      {
        if ( v46 )
          CEntity::CleanUpOldReference(v46, (CEntity **)(v19 + 28));
        *(_DWORD *)(v19 + 28) = v47;
        if ( v47 )
          CEntity::RegisterReference(v47, (CEntity **)(v19 + 28));
        CTaskSimpleUseGun::AbortIK((CTaskSimpleUseGun *)v19, a2);
        *(_WORD *)(v19 + 57) = 0;
      }
      if ( *(char *)(v19 + 15) <= 5 )
        *(_BYTE *)(v19 + 15) = 6;
    }
  }
  if ( *((_DWORD *)this + 13) )
  {
    if ( v28 != 3 )
      goto LABEL_104;
  }
  else
  {
    v48 = v22;
    v49 = v28;
    v50 = CTaskSimpleGunControl::DEFAULT_GUN_ATTACK_PERIOD;
    *((_DWORD *)this + 13) = CTaskSimpleGunControl::DEFAULT_GUN_ATTACK_PERIOD;
    if ( *(_DWORD *)WeaponInfo == 2 )
    {
      v50 *= 2;
      *((_DWORD *)this + 13) = v50;
    }
    v51 = v50;
    v28 = v49;
    v22 = v48;
    *((_DWORD *)this + 13) = CTimer::m_snTimeInMilliseconds
                           + (unsigned int)(float)((float)((float)((float)((float)((float)rand() * 4.6566e-10) * 0.5)
                                                                 + 0.75)
                                                         * (float)v51)
                                                 / (float)((float)(*((float *)this + 12)
                                                                 * (float)*((unsigned __int8 *)a2 + 1821))
                                                         / 25.0));
    if ( v28 != 3 )
      goto LABEL_104;
  }
  if ( CTaskSimpleUseGun::RequirePistolWhip(a2, *((CPed **)this + 3), (CEntity *)v44) )
  {
    v52 = 0;
    v28 = 5;
    goto LABEL_109;
  }
LABEL_104:
  v53 = *((_DWORD *)a2 + 289);
  v54 = *((_DWORD *)a2 + 291);
  v55 = (~v54 & 0x40000 | ~v53 & 0x4000000) == 0;
  if ( ~v54 & 0x40000 | ~v53 & 0x4000000 )
    v55 = (v53 & 0x4000000 | ~v54 & 0x10000) == 0;
  if ( v55 )
  {
    v28 = 1;
    v52 = 1;
  }
  else
  {
    v52 = 0;
  }
LABEL_109:
  v86 = v52;
  if ( v22 == 1 )
  {
    v56 = v28;
    v57 = v19;
    v60 = *(CEntity **)(v19 + 28);
    v59 = (CEntity **)(v19 + 28);
    v58 = v60;
    v61 = (CEntity *)*((_DWORD *)this + 3);
    *((_BYTE *)v59 - 19) = 1;
    if ( v60 != v61 )
    {
      if ( v58 )
        CEntity::CleanUpOldReference(v58, v59);
      *v59 = v61;
      if ( v61 )
        CEntity::RegisterReference(v61, v59);
      CTaskSimpleUseGun::AbortIK((CTaskSimpleUseGun *)v57, a2);
      *(_WORD *)(v57 + 57) = 0;
    }
    v19 = v57;
    if ( *(char *)(v57 + 15) < v56 )
      *(_BYTE *)(v57 + 15) = v56;
    v22 = 1;
  }
  v62 = *((_DWORD *)this + 3);
  if ( v62 )
  {
    v63 = *(_DWORD *)(v62 + 20);
    v64 = (float *)(v63 + 48);
    if ( !v63 )
      v64 = (float *)(v62 + 4);
  }
  else
  {
    if ( *((float *)this + 4) == 0.0 && *((float *)this + 5) == 0.0 )
      return 0;
    v64 = (float *)((char *)this + 16);
  }
  v65 = *((_DWORD *)a2 + 5);
  v66 = *v64;
  v67 = v64[1];
  v68 = v64[2];
  v69 = (float *)(v65 + 48);
  if ( !v65 )
    v69 = (float *)((char *)a2 + 4);
  v70 = v69[1];
  v71 = v66 - *v69;
  v72 = v69[2];
  *((float *)a2 + 344) = atan2f(-v71, v67 - v70);
  v73 = (float)((float)(v71 * v71) + (float)((float)(v67 - v70) * (float)(v67 - v70)))
      + (float)((float)(v68 - v72) * (float)(v68 - v72));
  if ( v22 != 1 )
    goto LABEL_137;
  if ( v73 >= 6.0 )
  {
    if ( v86 != 1 )
      goto LABEL_137;
  }
  else if ( *(_BYTE *)(v19 + 16) == 3 && !(v86 | ((unsigned __int8)(*(_BYTE *)(WeaponInfo + 24) & 0x20) >> 5)) )
  {
    goto LABEL_137;
  }
  if ( (*((_BYTE *)a2 + 1158) & 0x20) == 0 )
  {
    v74 = 1.0;
    v75 = *(float *)(v19 + 24);
    v76 = *(float *)&CTimer::ms_fTimeStep * 0.07;
    if ( (float)(1.0 - v75) <= (float)(*(float *)&CTimer::ms_fTimeStep * 0.07) )
    {
      if ( (float)(1.0 - v75) < (float)-v76 )
        v74 = v75 - v76;
    }
    else
    {
      v74 = v76 + v75;
    }
    v78 = *(float *)(v19 + 20);
    v79 = 0.0;
    *(float *)(v19 + 24) = v74;
    if ( (float)(0.0 - v78) <= v76 )
    {
      if ( (float)(0.0 - v78) < (float)-v76 )
        v79 = v78 - v76;
    }
    else
    {
      v79 = v76 + v78;
    }
    *(_BYTE *)(v19 + 10) = 1;
    *(float *)(v19 + 20) = v79;
    return 0;
  }
LABEL_137:
  if ( !*((_DWORD *)this + 3) || (*((_BYTE *)a2 + 1169) & 2) != 0 )
    return 0;
  v30 = 0;
  if ( v73 > (float)(*(float *)(WeaponInfo + 8) * *(float *)(WeaponInfo + 8)) )
    *((_DWORD *)this + 10) = 0;
  return v30;
}


// ============================================================

// Address: 0x4de8b4
// Original: _ZN21CTaskSimpleGunControl16ChangeFiringTaskEaP7CEntityP7CVectorS3_
// Demangled: CTaskSimpleGunControl::ChangeFiringTask(signed char,CEntity *,CVector *,CVector *)
CEntity *__fastcall CTaskSimpleGunControl::ChangeFiringTask(
        CEntity **this,
        unsigned __int8 a2,
        CEntity *a3,
        CVector *a4,
        CEntity **a5)
{
  CEntity *v8; // r0
  CEntity *result; // r0
  __int64 v10; // d16
  __int64 v11; // d16

  if ( *((unsigned __int8 *)this + 46) != a2 )
  {
    this[13] = 0;
    *((_BYTE *)this + 46) = a2;
  }
  if ( a3 )
  {
    v8 = this[3];
    if ( v8 && v8 != a3 )
      CEntity::CleanUpOldReference(v8, this + 3);
    this[3] = a3;
    CEntity::RegisterReference(a3, this + 3);
  }
  result = (CEntity *)a5;
  if ( a4 )
  {
    v10 = *(_QWORD *)a4;
    this[6] = (CEntity *)*((_DWORD *)a4 + 2);
    *((_QWORD *)this + 2) = v10;
  }
  if ( a5 )
  {
    v11 = *(_QWORD *)a5;
    result = a5[2];
    this[9] = result;
    *(_QWORD *)(this + 7) = v11;
  }
  return result;
}


// ============================================================

// Address: 0x4e9764
// Original: _ZNK21CTaskSimpleGunControl5CloneEv
// Demangled: CTaskSimpleGunControl::Clone(void)
int __fastcall CTaskSimpleGunControl::Clone(CTaskSimpleGunControl *this, unsigned int a2)
{
  int v3; // r5
  CEntity *v4; // r6
  __int64 v5; // d16
  __int64 v6; // d16
  char v8; // [sp+0h] [bp-28h]
  __int16 v9; // [sp+4h] [bp-24h]
  int v10; // [sp+8h] [bp-20h]

  v3 = CTask::operator new((CTask *)&off_3C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v10 = *((_DWORD *)this + 10);
  v8 = *((_BYTE *)this + 46);
  v9 = *((_WORD *)this + 22);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)v3 = &off_6696A8;
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  v5 = *((_QWORD *)this + 2);
  *(_DWORD *)(v3 + 24) = *((_DWORD *)this + 6);
  *(_QWORD *)(v3 + 16) = v5;
  v6 = *(_QWORD *)((char *)this + 28);
  *(_DWORD *)(v3 + 36) = *((_DWORD *)this + 9);
  *(_QWORD *)(v3 + 28) = v6;
  *(_BYTE *)(v3 + 46) = v8;
  *(_WORD *)(v3 + 56) = 1;
  *(_WORD *)(v3 + 44) = v9;
  *(_DWORD *)(v3 + 48) = 1065353216;
  *(_DWORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 40) = v10;
  *(_BYTE *)(v3 + 58) = *((_BYTE *)this + 58);
  return v3;
}


// ============================================================

// Address: 0x4e981c
// Original: _ZNK21CTaskSimpleGunControl11GetTaskTypeEv
// Demangled: CTaskSimpleGunControl::GetTaskType(void)
int __fastcall CTaskSimpleGunControl::GetTaskType(CTaskSimpleGunControl *this)
{
  return 1020;
}


// ============================================================

// Address: 0x4e9824
// Original: _ZN21CTaskSimpleGunControl9SerializeEv
// Demangled: CTaskSimpleGunControl::Serialize(void)
void __fastcall CTaskSimpleGunControl::Serialize(CTaskSimpleGunControl *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r0
  int v6; // r6
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CVehicle *v9; // r0
  int v10; // r1
  int v11; // r5
  int v12; // r0
  CGenericGameStorage *v13; // r5
  int v14; // r2
  CGenericGameStorage *v15; // r0
  CGenericGameStorage *v16; // r6
  int v17; // r2
  CGenericGameStorage *v18; // r5
  __int64 v19; // d16
  int v20; // r2
  CGenericGameStorage *v21; // r5
  __int64 v22; // d16
  int v23; // r2

  v2 = (*(int (__fastcall **)(CTaskSimpleGunControl *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleGunControl *))(*(_DWORD *)this + 20))(this) != 1020 )
  {
    v12 = (*(int (__fastcall **)(CTaskSimpleGunControl *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(1020, v12);
    return;
  }
  v5 = *((_DWORD *)this + 3);
  if ( !v5 )
  {
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v13 = 0;
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
    v15 = v13;
    goto LABEL_18;
  }
  v6 = *(_BYTE *)(v5 + 58) & 7;
  if ( UseDataFence )
    AddDataFence();
  v7 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v7 = v6;
  CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
  free(v7);
  v9 = (CVehicle *)*((_DWORD *)this + 3);
  v10 = *((_BYTE *)v9 + 58) & 7;
  if ( v10 == 2 )
  {
    v11 = GettPoolVehicleRef(v9);
    goto LABEL_15;
  }
  if ( v10 == 3 )
  {
    v11 = GettPoolPedRef(v9);
LABEL_15:
    if ( UseDataFence )
      AddDataFence();
    v16 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v16 = v11;
    CGenericGameStorage::_SaveDataToWorkBuffer(v16, byte_4, v17);
    v15 = v16;
LABEL_18:
    free(v15);
  }
  if ( UseDataFence )
    AddDataFence();
  v18 = (CGenericGameStorage *)malloc(0xCu);
  v19 = *((_QWORD *)this + 2);
  *((_DWORD *)v18 + 2) = *((_DWORD *)this + 6);
  *(_QWORD *)v18 = v19;
  CGenericGameStorage::_SaveDataToWorkBuffer(v18, &byte_9[3], v20);
  free(v18);
  if ( UseDataFence )
    AddDataFence();
  v21 = (CGenericGameStorage *)malloc(0xCu);
  v22 = *(_QWORD *)((char *)this + 28);
  *((_DWORD *)v21 + 2) = *((_DWORD *)this + 9);
  *(_QWORD *)v21 = v22;
  CGenericGameStorage::_SaveDataToWorkBuffer(v21, &byte_9[3], v23);
  j_free(v21);
}


// ============================================================

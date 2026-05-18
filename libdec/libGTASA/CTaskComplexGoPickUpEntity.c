
// Address: 0x18cc78
// Original: j__ZN26CTaskComplexGoPickUpEntity10CreateTaskEv
// Demangled: CTaskComplexGoPickUpEntity::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexGoPickUpEntity::CreateTask(CTaskComplexGoPickUpEntity *this)
{
  return _ZN26CTaskComplexGoPickUpEntity10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19f2c4
// Original: j__ZN26CTaskComplexGoPickUpEntityC2EP7CEntity12AssocGroupId
// Demangled: CTaskComplexGoPickUpEntity::CTaskComplexGoPickUpEntity(CEntity *,AssocGroupId)
// attributes: thunk
int CTaskComplexGoPickUpEntity::CTaskComplexGoPickUpEntity()
{
  return _ZN26CTaskComplexGoPickUpEntityC2EP7CEntity12AssocGroupId();
}


// ============================================================

// Address: 0x491e60
// Original: _ZN26CTaskComplexGoPickUpEntity10CreateTaskEv
// Demangled: CTaskComplexGoPickUpEntity::CreateTask(void)
int __fastcall CTaskComplexGoPickUpEntity::CreateTask(CTaskComplexGoPickUpEntity *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  char v6; // r4
  char v7; // r4
  char v8; // r5
  unsigned int v9; // r1
  CPools *v11; // [sp+0h] [bp-18h] BYREF
  _DWORD v12[5]; // [sp+4h] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, byte_4, a3);
  switch ( v12[0] )
  {
    case 2:
      v6 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, (char *)&stderr + 2, v4);
        UseDataFence = v6;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, byte_4, v4);
      if ( v11 != (CPools *)-1 )
        CPools::GetVehicle(v11, (int)v11 + 1);
      break;
    case 4:
      v7 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, (char *)&stderr + 2, v4);
        UseDataFence = v7;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, byte_4, v4);
      if ( v11 != (CPools *)-1 )
        CPools::GetObject(v11, (int)v11 + 1);
      break;
    case 3:
      v5 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, (char *)&stderr + 2, v4);
        UseDataFence = v5;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, byte_4, v4);
      if ( v11 != (CPools *)-1 )
        CPools::GetPed(v11, (int)v11 + 1);
      break;
  }
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, (char *)&stderr + 2, v4);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, byte_4, v4);
  CTask::operator new((CTask *)&dword_34, v9);
  return CTaskComplexGoPickUpEntity::CTaskComplexGoPickUpEntity();
}


// ============================================================

// Address: 0x542510
// Original: _ZN26CTaskComplexGoPickUpEntityC2EP7CEntity12AssocGroupId
// Demangled: CTaskComplexGoPickUpEntity::CTaskComplexGoPickUpEntity(CEntity *,AssocGroupId)
int __fastcall CTaskComplexGoPickUpEntity::CTaskComplexGoPickUpEntity(int a1, CEntity *a2, int a3)
{
  int result; // r0

  CTaskComplex::CTaskComplex((CTaskComplex *)a1);
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 44) = a3;
  *(_QWORD *)(a1 + 16) = 3296313344LL;
  *(_QWORD *)(a1 + 24) = 0xC479C00000000000LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)a1 = &off_66D1D0;
  *(_DWORD *)(a1 + 12) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)(a1 + 12));
  *(_BYTE *)(a1 + 48) = 0;
  result = a1;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}


// ============================================================

// Address: 0x542584
// Original: _ZN26CTaskComplexGoPickUpEntityD2Ev
// Demangled: CTaskComplexGoPickUpEntity::~CTaskComplexGoPickUpEntity()
void __fastcall CTaskComplexGoPickUpEntity::~CTaskComplexGoPickUpEntity(CTaskComplexGoPickUpEntity *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D1D0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  if ( *((_BYTE *)this + 48) )
  {
    CAnimManager::RemoveAnimBlockRef(
      (CAnimManager *)((*(_DWORD *)(CAnimManager::ms_aAnimAssocGroups + 20 * *((_DWORD *)this + 11))
                      - (int)CAnimManager::ms_aAnimBlocks) >> 5),
      (int)CAnimManager::ms_aAnimBlocks);
    *((_BYTE *)this + 48) = 0;
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5425e4
// Original: _ZN26CTaskComplexGoPickUpEntityD0Ev
// Demangled: CTaskComplexGoPickUpEntity::~CTaskComplexGoPickUpEntity()
void __fastcall CTaskComplexGoPickUpEntity::~CTaskComplexGoPickUpEntity(CTaskComplexGoPickUpEntity *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D1D0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  if ( *((_BYTE *)this + 48) )
  {
    CAnimManager::RemoveAnimBlockRef(
      (CAnimManager *)((*(_DWORD *)(CAnimManager::ms_aAnimAssocGroups + 20 * *((_DWORD *)this + 11))
                      - (int)CAnimManager::ms_aAnimBlocks) >> 5),
      (int)CAnimManager::ms_aAnimBlocks);
    *((_BYTE *)this + 48) = 0;
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x542648
// Original: _ZN26CTaskComplexGoPickUpEntity18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGoPickUpEntity::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexGoPickUpEntity::CreateFirstSubTask(CTaskComplexGoPickUpEntity *this, CPed *a2)
{
  int v3; // r5
  float *v4; // r3
  int v5; // r0
  int v6; // r2
  float *v7; // r0
  float v8; // s16
  float v9; // s18
  float v10; // s20
  float *v11; // r8
  float v12; // s2
  float v13; // s0
  float v14; // r1
  CMatrix *v15; // r0
  float v16; // s0
  float v17; // s2
  int v18; // r0
  int v19; // r5
  int v20; // r2
  _DWORD *v21; // r1
  int v22; // r6
  float *v23; // r0
  CMatrix **v24; // r5
  float *v25; // r1
  float v26; // s22
  float v27; // s0
  float v28; // s2
  float v29; // s0
  float v30; // s2
  float v31; // s2
  float v32; // s0
  float v33; // s0
  float v34; // s2
  CMatrix **v35; // r5
  unsigned int v36; // r1
  CTaskComplexGoToPointAndStandStill *v37; // r0
  double v38; // [sp+10h] [bp-50h]
  float v39; // [sp+18h] [bp-48h]
  double v40; // [sp+20h] [bp-40h] BYREF
  float v41; // [sp+28h] [bp-38h]

  v3 = *((_DWORD *)this + 3);
  if ( !v3 )
    return;
  v4 = (float *)(v3 + 4);
  *((_DWORD *)this + 10) = CTimer::m_snTimeInMilliseconds;
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *((_DWORD *)a2 + 5);
  if ( v5 )
    v4 = (float *)(v5 + 48);
  v7 = (float *)(v6 + 48);
  if ( !v6 )
    v7 = (float *)((char *)a2 + 4);
  v8 = *v7 - *v4;
  v9 = v7[1] - v4[1];
  v10 = v7[2] - v4[2];
  *((float *)&v40 + 1) = v9;
  *(float *)&v40 = v8;
  v41 = v10;
  v11 = *(float **)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v3 + 38)]) + 44);
  *((_DWORD *)this + 4) = -1102263091;
  *((float *)this + 5) = -0.2 - v11[1];
  *((float *)this + 6) = -v11[2];
  v12 = v11[4];
  v13 = v11[3];
  if ( v13 > (float)(v12 + v12) )
  {
    v14 = atan2f(COERCE_FLOAT(LODWORD(v8) ^ 0x80000000), v9);
    v15 = *(CMatrix **)(v3 + 20);
    v16 = v14;
    if ( !v15 )
      goto LABEL_13;
    goto LABEL_19;
  }
  if ( v12 > (float)(v13 + v13) )
  {
    v17 = atan2f(COERCE_FLOAT(LODWORD(v8) ^ 0x80000000), v9);
    v15 = *(CMatrix **)(v3 + 20);
    v16 = v17 + -1.5708;
    if ( !v15 )
    {
LABEL_13:
      *(float *)(v3 + 16) = v16;
      goto LABEL_20;
    }
    v14 = v17 + -1.5708;
    goto LABEL_19;
  }
  v18 = *(_DWORD *)(v3 + 20);
  if ( !v18 )
  {
    CPlaceable::AllocateMatrix((CPlaceable *)v3);
    CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v3 + 4), *(CMatrix **)(v3 + 20));
    v18 = *(_DWORD *)(v3 + 20);
  }
  if ( *(float *)(v18 + 40) < 0.9 )
  {
    v19 = *(_DWORD *)(*((_DWORD *)this + 3) + 20);
    if ( v19 )
    {
      v14 = atan2f(COERCE_FLOAT(*(_DWORD *)(v19 + 16) ^ 0x80000000), *(float *)(v19 + 20));
      v15 = (CMatrix *)v19;
LABEL_19:
      CMatrix::SetRotateZOnly(v15, v14);
    }
  }
LABEL_20:
  v20 = *((_DWORD *)this + 3);
  if ( (*(_BYTE *)(v20 + 58) & 7) == 4 )
  {
    *(_DWORD *)(v20 + 72) = 0;
    *(_DWORD *)(v20 + 76) = 0;
    *(_DWORD *)(v20 + 80) = 0;
    v21 = (_DWORD *)*((_DWORD *)this + 3);
    v21[21] = 0;
    v21[22] = 0;
    v21[23] = 0;
    (*(void (__fastcall **)(_DWORD, int))(**((_DWORD **)this + 3) + 20))(*((_DWORD *)this + 3), 1);
    v20 = *((_DWORD *)this + 3);
  }
  if ( *(_DWORD *)(v20 + 24) )
  {
    if ( *(_DWORD *)(v20 + 20) )
      CMatrix::UpdateRwMatrix();
    else
      CSimpleTransform::UpdateRwMatrix();
  }
  v22 = *((_DWORD *)this + 3);
  v23 = *(float **)(v22 + 20);
  if ( v23 )
  {
    v24 = (CMatrix **)*((_DWORD *)this + 3);
    v25 = *(float **)(v22 + 20);
  }
  else
  {
    CPlaceable::AllocateMatrix(*((CPlaceable **)this + 3));
    CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v22 + 4), *(CMatrix **)(v22 + 20));
    v24 = (CMatrix **)*((_DWORD *)this + 3);
    v25 = *(float **)(v22 + 20);
    v23 = (float *)v24[5];
  }
  v26 = (float)((float)(v8 * *v25) + (float)(v9 * v25[1])) + (float)(v10 * v25[2]);
  if ( !v23 )
  {
    CPlaceable::AllocateMatrix((CPlaceable *)v24);
    CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v24 + 1), v24[5]);
    v23 = (float *)v24[5];
  }
  v27 = (float)((float)(v8 * v23[4]) + (float)(v9 * v23[5])) + (float)(v10 * v23[6]);
  v28 = fabsf(v27);
  if ( v26 <= v28 )
  {
    if ( v26 >= (float)-v28 )
    {
      *((_DWORD *)this + 7) = 0;
      if ( v27 <= 0.0 )
      {
        v33 = -0.4;
        v34 = v11[1];
      }
      else
      {
        v33 = 0.4;
        v34 = v11[4];
      }
      v32 = v34 + v33;
      goto LABEL_40;
    }
    v29 = -0.4;
    v30 = *v11;
  }
  else
  {
    v29 = 0.4;
    v30 = v11[3];
  }
  v31 = v30 + v29;
  v32 = 0.0;
  *((float *)this + 7) = v31;
LABEL_40:
  *((float *)this + 8) = v32;
  *((float *)this + 9) = v11[2] + 1.0;
  v35 = (CMatrix **)*((_DWORD *)this + 3);
  if ( !v35[5] )
  {
    CPlaceable::AllocateMatrix((CPlaceable *)v35);
    CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v35 + 1), v35[5]);
  }
  operator*();
  v41 = v39;
  v40 = v38;
  v37 = (CTaskComplexGoToPointAndStandStill *)CTask::operator new((CTask *)&word_28, v36);
  CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(v37, 4, (const CVector *)&v40, 0.2, 0.0, 0, 1);
}


// ============================================================

// Address: 0x54293c
// Original: _ZN26CTaskComplexGoPickUpEntity17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexGoPickUpEntity::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexGoPickUpEntity::CreateNextSubTask(CTaskComplexGoPickUpEntity *this, CPed *a2)
{
  int v4; // r0
  float *v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r2
  float *v9; // r3
  float *v10; // r1
  float v11; // s0
  float v12; // r4
  int v13; // r5
  float v14; // r0
  unsigned int v15; // r1
  int v16; // r8
  int v17; // r6
  int v18; // r9
  __int64 v19; // d16
  int v20; // s16
  CEntity *v21; // r0
  int v22; // r1
  float *v23; // r2
  float v24; // s18
  float v25; // s0
  int v26; // r0
  float v27; // s0
  float v28; // s2
  int v29; // r0
  int v30; // r8
  int v31; // r9
  __int64 v32; // d16
  int v33; // r1
  int v34; // r2

  if ( !*((_DWORD *)this + 3) )
    return 0;
  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 == 308 )
  {
    *((_DWORD *)this + 10) = CTimer::m_snTimeInMilliseconds;
    v13 = 0;
    if ( CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 4) )
      return v13;
    v16 = *((_DWORD *)a2 + 272);
    v17 = CTask::operator new((CTask *)&off_3C, v15);
    v18 = *((_DWORD *)this + 3);
    CTaskSimple::CTaskSimple((CTaskSimple *)v17);
    *(_DWORD *)v17 = &off_66D19C;
    *(_DWORD *)(v17 + 12) = 0;
    *(_DWORD *)(v17 + 16) = 0;
    *(_DWORD *)(v17 + 20) = 0;
    *(_WORD *)(v17 + 24) = 262;
    *(_QWORD *)(v17 + 32) = 0x510000013ELL;
    *(_DWORD *)(v17 + 44) = 0;
    *(_DWORD *)(v17 + 48) = 0;
    *(_WORD *)(v17 + 52) = 256;
    *(_BYTE *)(v17 + 54) = 0;
    *(_DWORD *)(v17 + 56) = 0;
    *(_DWORD *)(v17 + 8) = v18;
    v19 = *((_QWORD *)this + 2);
    *(_DWORD *)(v17 + 20) = *((_DWORD *)this + 6);
    *(_QWORD *)(v17 + 12) = v19;
    if ( v18 )
    {
      *(_DWORD *)(v18 + 28) |= 0x400u;
      CEntity::RegisterReference(*(CEntity **)(v17 + 8), (CEntity **)(v17 + 8));
    }
    CTaskManager::SetTaskSecondary((CTaskManager *)(v16 + 4), (CTask *)v17, 4);
    return 0;
  }
  v5 = (float *)(elf_hash_bucket + 650);
  if ( v4 != 902 )
  {
    if ( v4 == 903 )
    {
      v6 = *((_DWORD *)this + 3);
      v7 = *((_DWORD *)a2 + 5);
      v8 = *(_DWORD *)(v6 + 20);
      v9 = (float *)(v7 + 48);
      if ( !v7 )
        v9 = (float *)((char *)a2 + 4);
      v10 = (float *)(v8 + 48);
      if ( !v8 )
        v10 = (float *)(v6 + 4);
      v11 = *v10 - *v9;
      v12 = v10[1] - v9[1];
      v13 = CTask::operator new((CTask *)&off_18, (unsigned int)v10);
      v14 = atan2f(COERCE_FLOAT(LODWORD(v11) ^ 0x80000000), v12);
      CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading((CTaskSimpleAchieveHeading *)v13, v14, 1.0, 0.001);
      return v13;
    }
    return 0;
  }
  v20 = 1058642330;
  if ( *((_DWORD *)this + 11) == 81 )
  {
    v21 = (CEntity *)*((_DWORD *)this + 3);
    v22 = *((_DWORD *)v21 + 5);
    v23 = (float *)(v22 + 48);
    if ( !v22 )
      v23 = (float *)((char *)v21 + 4);
    v24 = v23[2];
    v25 = *(float *)(CEntity::GetColModel(v21) + 8);
    v26 = *((_DWORD *)a2 + 5);
    v27 = v24 + v25;
    v5 = (float *)(v26 + 48);
    if ( !v26 )
      v5 = (float *)((char *)a2 + 4);
    v28 = v5[2];
    if ( v28 < v27 )
    {
      v20 = 1045220557;
      v29 = 83;
LABEL_24:
      *((_DWORD *)this + 11) = v29;
      goto LABEL_25;
    }
    if ( v28 < (float)(v27 + 0.55) )
    {
      v20 = 1049135241;
      v29 = 82;
      goto LABEL_24;
    }
  }
LABEL_25:
  v13 = CTask::operator new((CTask *)&dword_4C, (unsigned int)v5);
  v30 = *((_DWORD *)this + 3);
  v31 = *((_DWORD *)this + 11);
  CTaskSimple::CTaskSimple((CTaskSimple *)v13);
  *(_DWORD *)(v13 + 12) = 0;
  *(_DWORD *)(v13 + 16) = 0;
  *(_DWORD *)(v13 + 20) = 0;
  *(_WORD *)(v13 + 24) = 262;
  *(_DWORD *)(v13 + 32) = 317;
  *(_DWORD *)(v13 + 36) = v31;
  *(_DWORD *)(v13 + 44) = 0;
  *(_DWORD *)(v13 + 48) = 0;
  *(_WORD *)(v13 + 52) = 256;
  *(_BYTE *)(v13 + 54) = 0;
  *(_DWORD *)(v13 + 56) = 0;
  *(_DWORD *)v13 = &off_66D19C;
  *(_DWORD *)(v13 + 8) = v30;
  v32 = *((_QWORD *)this + 2);
  *(_DWORD *)(v13 + 20) = *((_DWORD *)this + 6);
  *(_QWORD *)(v13 + 12) = v32;
  if ( v30 )
  {
    *(_DWORD *)(v30 + 28) |= 0x400u;
    CEntity::RegisterReference(*(CEntity **)(v13 + 8), (CEntity **)(v13 + 8));
  }
  *(_DWORD *)(v13 + 60) = v20;
  *(_DWORD *)(v13 + 64) = 0;
  *(_DWORD *)(v13 + 68) = 0;
  *(_DWORD *)(v13 + 72) = 0;
  *(_DWORD *)v13 = &off_66D274;
  v33 = *((_DWORD *)this + 8);
  v34 = *((_DWORD *)this + 9);
  *(_DWORD *)(v13 + 64) = *((_DWORD *)this + 7);
  *(_DWORD *)(v13 + 68) = v33;
  *(_DWORD *)(v13 + 72) = v34;
  return v13;
}


// ============================================================

// Address: 0x542b98
// Original: _ZN26CTaskComplexGoPickUpEntity14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGoPickUpEntity::ControlSubTask(CPed *)
int __fastcall CTaskComplexGoPickUpEntity::ControlSubTask(CTaskComplexGoPickUpEntity *this, CPed *a2)
{
  int v4; // r0
  int AnimationBlock; // r1
  CAnimManager *AnimBlockName; // r0
  const char *v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r5
  int v13; // r1
  bool v14; // zf
  int v16; // r6
  CPad *PadFromPlayer; // r0
  CPad *v18; // r10
  int PedWalkLeftRight; // r8
  int PedWalkUpDown; // r9
  int v21; // r0
  float *v22; // r1
  float v23; // s16
  float v24; // s22
  float v25; // s0
  float v26; // [sp+0h] [bp-38h]

  v4 = *((_DWORD *)this + 11);
  if ( v4 && !*((_BYTE *)this + 48) )
  {
    AnimationBlock = *(_DWORD *)(CAnimManager::ms_aAnimAssocGroups + 20 * v4);
    if ( !AnimationBlock )
    {
      AnimBlockName = (CAnimManager *)CAnimManager::GetAnimBlockName();
      AnimationBlock = CAnimManager::GetAnimationBlock(AnimBlockName, v7);
    }
    v8 = (AnimationBlock - (int)CAnimManager::ms_aAnimBlocks) >> 5;
    if ( *(_BYTE *)(AnimationBlock + 16) )
    {
      CAnimManager::AddAnimBlockRef((CAnimManager *)v8, AnimationBlock);
      *((_BYTE *)this + 48) = 1;
    }
    else
    {
      CStreaming::RequestModel((CStreaming *)(v8 + 25575), 8, *(unsigned __int8 *)(AnimationBlock + 16));
    }
  }
  v9 = *((_DWORD *)this + 2);
  if ( !v9 )
    return *((_DWORD *)this + 2);
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 20))(v9);
  if ( v10 == 308 )
  {
    v11 = *((_DWORD *)this + 2);
    v13 = *(_DWORD *)(v11 + 56);
    v14 = v13 == 0;
    if ( !v13 )
      v14 = *(_BYTE *)(v11 + 52) == 0;
    if ( v14
      && CTimer::m_snTimeInMilliseconds > (unsigned int)(CTaskComplexGoPickUpEntity::MAX_PICKUP_TIME
                                                       + *((_DWORD *)this + 10)) )
    {
      goto LABEL_13;
    }
    return *((_DWORD *)this + 2);
  }
  if ( v10 != 903 )
    return *((_DWORD *)this + 2);
  if ( CTimer::m_snTimeInMilliseconds <= (unsigned int)(CTaskComplexGoPickUpEntity::MAX_GOTO_TIME
                                                      + *((_DWORD *)this + 10)) )
  {
    if ( !*((_DWORD *)a2 + 273) )
      return *((_DWORD *)this + 2);
    v16 = *((_DWORD *)this + 2);
    PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(a2);
    v18 = PadFromPlayer;
    if ( !PadFromPlayer )
      return *((_DWORD *)this + 2);
    PedWalkLeftRight = CPad::GetPedWalkLeftRight(PadFromPlayer);
    PedWalkUpDown = CPad::GetPedWalkUpDown(v18);
    v21 = *((_DWORD *)a2 + 5);
    v22 = (float *)(v21 + 48);
    if ( !v21 )
      v22 = (float *)((char *)a2 + 4);
    v23 = atan2f(-(float)(*(float *)(v16 + 16) - *v22), *(float *)(v16 + 20) - v22[1]);
    v24 = COERCE_FLOAT(CGeneral::GetRadianAngleBetweenPoints(0, 0.0, -(float)PedWalkLeftRight, (float)PedWalkUpDown, v26))
        - unk_9520F4;
    if ( v24 <= (float)(v23 + 3.1416) )
    {
      if ( v24 >= (float)(v23 + -3.1416) )
      {
LABEL_30:
        if ( CPad::JumpJustDown(v18)
          || CPad::SprintJustDown(v18)
          || (float)(sqrtf(
                       (float)((float)PedWalkLeftRight * (float)PedWalkLeftRight)
                     + (float)((float)PedWalkUpDown * (float)PedWalkUpDown))
                   * 0.0078125) > 0.75
          && fabsf(v24 - v23) > 0.7854 )
        {
          goto LABEL_12;
        }
        return *((_DWORD *)this + 2);
      }
      v25 = 6.2832;
    }
    else
    {
      v25 = -6.2832;
    }
    v24 = v24 + v25;
    goto LABEL_30;
  }
LABEL_12:
  v11 = *((_DWORD *)this + 2);
LABEL_13:
  v12 = 0;
  (*(void (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v11 + 28))(v11, a2, 1, 0);
  return v12;
}


// ============================================================

// Address: 0x543d20
// Original: _ZNK26CTaskComplexGoPickUpEntity5CloneEv
// Demangled: CTaskComplexGoPickUpEntity::Clone(void)
int __fastcall CTaskComplexGoPickUpEntity::Clone(CTaskComplexGoPickUpEntity *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  int v5; // r8
  int result; // r0

  v3 = CTask::operator new((CTask *)&dword_34, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = *((_DWORD *)this + 11);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 16) = 3296313344LL;
  *(_QWORD *)(v3 + 24) = 0xC479C00000000000LL;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 44) = v5;
  *(_DWORD *)v3 = &off_66D1D0;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  *(_BYTE *)(v3 + 48) = 0;
  result = v3;
  *(_DWORD *)(v3 + 40) = 0;
  return result;
}


// ============================================================

// Address: 0x543d94
// Original: _ZNK26CTaskComplexGoPickUpEntity11GetTaskTypeEv
// Demangled: CTaskComplexGoPickUpEntity::GetTaskType(void)
int __fastcall CTaskComplexGoPickUpEntity::GetTaskType(CTaskComplexGoPickUpEntity *this)
{
  return 310;
}


// ============================================================

// Address: 0x543d9c
// Original: _ZN26CTaskComplexGoPickUpEntity9SerializeEv
// Demangled: CTaskComplexGoPickUpEntity::Serialize(void)
void __fastcall CTaskComplexGoPickUpEntity::Serialize(CTaskComplexGoPickUpEntity *this)
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
  int v19; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexGoPickUpEntity *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexGoPickUpEntity *))(*(_DWORD *)this + 20))(this) != 310 )
  {
    v12 = (*(int (__fastcall **)(CTaskComplexGoPickUpEntity *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(310, v12);
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
    goto LABEL_20;
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
  switch ( v10 )
  {
    case 2:
      v11 = GettPoolVehicleRef(v9);
      goto LABEL_17;
    case 4:
      v11 = GettPoolObjRef(v9);
      goto LABEL_17;
    case 3:
      v11 = GettPoolPedRef(v9);
LABEL_17:
      if ( UseDataFence )
        AddDataFence();
      v16 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v16 = v11;
      CGenericGameStorage::_SaveDataToWorkBuffer(v16, byte_4, v17);
      v15 = v16;
LABEL_20:
      free(v15);
      break;
  }
  if ( UseDataFence )
    AddDataFence();
  v18 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v18 = *((_DWORD *)this + 11);
  CGenericGameStorage::_SaveDataToWorkBuffer(v18, byte_4, v19);
  j_free(v18);
}


// ============================================================

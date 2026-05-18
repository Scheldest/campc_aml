
// Address: 0x18d130
// Original: j__ZN23CTaskGoToVehicleAndLean13CalcTargetPosEP4CPed
// Demangled: CTaskGoToVehicleAndLean::CalcTargetPos(CPed *)
// attributes: thunk
int __fastcall CTaskGoToVehicleAndLean::CalcTargetPos(CTaskGoToVehicleAndLean *this, CPed *a2)
{
  return _ZN23CTaskGoToVehicleAndLean13CalcTargetPosEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1976e0
// Original: j__ZN23CTaskGoToVehicleAndLeanC2EP8CVehiclei
// Demangled: CTaskGoToVehicleAndLean::CTaskGoToVehicleAndLean(CVehicle *,int)
// attributes: thunk
void __fastcall CTaskGoToVehicleAndLean::CTaskGoToVehicleAndLean(CTaskGoToVehicleAndLean *this, CVehicle *a2, int a3)
{
  _ZN23CTaskGoToVehicleAndLeanC2EP8CVehiclei(this, a2, a3);
}


// ============================================================

// Address: 0x198088
// Original: j__ZN23CTaskGoToVehicleAndLeanD2Ev
// Demangled: CTaskGoToVehicleAndLean::~CTaskGoToVehicleAndLean()
// attributes: thunk
void __fastcall CTaskGoToVehicleAndLean::~CTaskGoToVehicleAndLean(CTaskGoToVehicleAndLean *this)
{
  _ZN23CTaskGoToVehicleAndLeanD2Ev(this);
}


// ============================================================

// Address: 0x51a274
// Original: _ZN23CTaskGoToVehicleAndLeanC2EP8CVehiclei
// Demangled: CTaskGoToVehicleAndLean::CTaskGoToVehicleAndLean(CVehicle *,int)
void __fastcall CTaskGoToVehicleAndLean::CTaskGoToVehicleAndLean(CTaskGoToVehicleAndLean *this, CVehicle *a2, int a3)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = a3;
  *((_BYTE *)this + 20) = 0;
  *(_DWORD *)this = &off_66BF8C;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x51a2b4
// Original: _ZN23CTaskGoToVehicleAndLeanD2Ev
// Demangled: CTaskGoToVehicleAndLean::~CTaskGoToVehicleAndLean()
void __fastcall CTaskGoToVehicleAndLean::~CTaskGoToVehicleAndLean(CTaskGoToVehicleAndLean *this)
{
  const char *v2; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v4; // r1
  CEntity *v5; // r0

  v2 = (const char *)*((unsigned __int8 *)this + 20);
  *(_DWORD *)this = &off_66BF8C;
  if ( v2 )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", v2);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v4);
    *((_BYTE *)this + 20) = 0;
  }
  v5 = (CEntity *)*((_DWORD *)this + 3);
  if ( v5 )
    CEntity::CleanUpOldReference(v5, (CEntity **)this + 3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x51a2fc
// Original: _ZN23CTaskGoToVehicleAndLeanD0Ev
// Demangled: CTaskGoToVehicleAndLean::~CTaskGoToVehicleAndLean()
void __fastcall CTaskGoToVehicleAndLean::~CTaskGoToVehicleAndLean(CTaskGoToVehicleAndLean *this)
{
  const char *v2; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v4; // r1
  CEntity *v5; // r0
  void *v6; // r0

  v2 = (const char *)*((unsigned __int8 *)this + 20);
  *(_DWORD *)this = &off_66BF8C;
  if ( v2 )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", v2);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v4);
    *((_BYTE *)this + 20) = 0;
  }
  v5 = (CEntity *)*((_DWORD *)this + 3);
  if ( v5 )
    CEntity::CleanUpOldReference(v5, (CEntity **)this + 3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x51a348
// Original: _ZN23CTaskGoToVehicleAndLean13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskGoToVehicleAndLean::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskGoToVehicleAndLean::MakeAbortable(
        CTaskGoToVehicleAndLean *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  int v10; // r0

  v7 = (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         a3,
         a4);
  v8 = a3 == 2;
  if ( a3 != 2 )
    v8 = v7 == 1;
  if ( !v8 )
    return 0;
  v9 = *((_DWORD *)this + 3);
  if ( v9 )
    *(_DWORD *)(v9 + 1072) &= ~0x10000u;
  v10 = *((_DWORD *)this + 2);
  if ( v10 )
    (*(void (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v10 + 28))(v10, a2, 2, 0);
  return 1;
}


// ============================================================

// Address: 0x51a39a
// Original: _ZN23CTaskGoToVehicleAndLean8DoTidyUpEP4CPed
// Demangled: CTaskGoToVehicleAndLean::DoTidyUp(CPed *)
int __fastcall CTaskGoToVehicleAndLean::DoTidyUp(CTaskGoToVehicleAndLean *this, CPed *a2)
{
  int v2; // r2
  int result; // r0

  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    *(_DWORD *)(v2 + 1072) &= ~0x10000u;
  result = *((_DWORD *)this + 2);
  if ( result )
    return (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)result + 28))(result, a2, 2, 0);
  return result;
}


// ============================================================

// Address: 0x51a3cc
// Original: _ZN23CTaskGoToVehicleAndLean17CreateNextSubTaskEP4CPed
// Demangled: CTaskGoToVehicleAndLean::CreateNextSubTask(CPed *)
int __fastcall CTaskGoToVehicleAndLean::CreateNextSubTask(CTaskGoToVehicleAndLean *this, CPed *a2)
{
  __int64 v4; // r0
  float *v5; // r0
  float v6; // s2
  float v7; // s0
  CGeneral *RadianAngleBetweenPoints; // r5
  float v9; // r1
  unsigned int v10; // r1
  int v11; // r4
  int v12; // r0
  unsigned int v13; // r1
  __int64 v14; // kr00_8
  int v15; // r0
  float v17; // [sp+0h] [bp-18h]

  v4 = *((_QWORD *)this + 1);
  if ( !HIDWORD(v4) )
  {
    if ( !(_DWORD)v4 )
      return 0;
LABEL_7:
    v11 = 0;
    (*(void (__fastcall **)(_DWORD, CPed *, int, _DWORD))(*(_DWORD *)v4 + 28))(v4, a2, 2, 0);
    return v11;
  }
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 20))(v4) == 903 )
  {
    v5 = *(float **)(*((_DWORD *)this + 3) + 20);
    v6 = v5[1];
    v7 = *v5;
    if ( !*((_BYTE *)this + 21) )
    {
      v7 = -v7;
      v6 = -v6;
    }
    RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                             (CGeneral *)LODWORD(v7),
                                             v6,
                                             0.0,
                                             0.0,
                                             v17);
    CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v9);
    v11 = CTask::operator new((CTask *)&off_18, v10);
    CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(
      (CTaskSimpleAchieveHeading *)v11,
      *(float *)&RadianAngleBetweenPoints,
      0.5,
      0.2);
    return v11;
  }
  v12 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v13 = 902;
  if ( v12 != 902 && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 203 )
  {
    v15 = *((_DWORD *)this + 3);
    if ( v15 )
      *(_DWORD *)(v15 + 1072) &= ~0x10000u;
    LODWORD(v4) = *((_DWORD *)this + 2);
    if ( !(_DWORD)v4 )
      return 0;
    goto LABEL_7;
  }
  if ( *((_BYTE *)this + 20) )
  {
    v11 = CTask::operator new((CTask *)&word_2C, v13);
    v14 = *(_QWORD *)((char *)this + 12);
    CTaskSimple::CTaskSimple((CTaskSimple *)v11);
    *(_WORD *)(v11 + 36) = 0;
    *(_DWORD *)(v11 + 12) = HIDWORD(v14);
    *(_BYTE *)(v11 + 16) = 0;
    *(_BYTE *)(v11 + 40) = 0;
    *(_BYTE *)(v11 + 41) = 0;
    *(_BYTE *)(v11 + 42) = 0;
    *(_DWORD *)(v11 + 20) = 0;
    *(_DWORD *)(v11 + 24) = -1;
    *(_DWORD *)(v11 + 28) = 0;
    *(_DWORD *)(v11 + 32) = 0;
    *(_DWORD *)v11 = &off_66BFC8;
    *(_DWORD *)(v11 + 8) = v14;
    if ( (_DWORD)v14 )
      CEntity::RegisterReference((CEntity *)v14, (CEntity **)(v11 + 8));
  }
  else
  {
    v11 = CTask::operator new((CTask *)&dword_20, v13);
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v11, 500, 0, 0, 8.0);
  }
  return v11;
}


// ============================================================

// Address: 0x51a518
// Original: _ZN23CTaskGoToVehicleAndLean18CreateFirstSubTaskEP4CPed
// Demangled: CTaskGoToVehicleAndLean::CreateFirstSubTask(CPed *)
int __fastcall CTaskGoToVehicleAndLean::CreateFirstSubTask(CTaskGoToVehicleAndLean *this, CPed *a2)
{
  int v4; // r0
  int v5; // r2
  int v6; // r1
  _DWORD *v7; // r0
  double v8; // d16
  int v9; // r6
  int v10; // r0
  char *v11; // r1
  float32x2_t v12; // d16
  unsigned __int64 v13; // d1
  CTaskComplexGoToPointAndStandStill *v14; // r0
  int v15; // r0
  int v16; // r0
  double v18; // [sp+10h] [bp-20h] BYREF
  int v19; // [sp+18h] [bp-18h]

  v4 = *((_DWORD *)this + 3);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 1072);
    v6 = *(_DWORD *)(v4 + 1068);
    v7 = (_DWORD *)(v4 + 1068);
    if ( (v5 & 0x10000) == 0 )
    {
      *v7 = v6;
      v7[1] = v5 | 0x10000;
      CTaskGoToVehicleAndLean::CalcTargetPos((CTaskGoToVehicleAndLean *)&v18, this);
      v8 = v18;
      v9 = 0;
      *((_DWORD *)this + 8) = v19;
      *((double *)this + 3) = v8;
      v10 = *((_DWORD *)a2 + 5);
      v11 = (char *)(v10 + 48);
      if ( !v10 )
        v11 = (char *)a2 + 4;
      v12.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)this + 28), *(float32x2_t *)(v11 + 4)).n64_u64[0];
      v13 = vmul_f32(v12, v12).n64_u64[0];
      if ( (float)((float)((float)((float)(*((float *)this + 6) - *(float *)v11)
                                 * (float)(*((float *)this + 6) - *(float *)v11))
                         + *(float *)&v13)
                 + *((float *)&v13 + 1)) >= 1.0 )
      {
        v14 = (CTaskComplexGoToPointAndStandStill *)CTask::operator new((CTask *)&word_28, (unsigned int)v11);
        CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
          v14,
          4,
          (CTaskGoToVehicleAndLean *)((char *)this + 24),
          0.05,
          2.0,
          0,
          1);
        return v15;
      }
      return v9;
    }
    *v7 = v6;
    v7[1] = v5 & 0xFFFEFFFF;
  }
  v16 = *((_DWORD *)this + 2);
  v9 = 0;
  if ( v16 )
    (*(void (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v16 + 28))(v16, a2, 2, 0);
  return v9;
}


// ============================================================

// Address: 0x51a5f0
// Original: _ZN23CTaskGoToVehicleAndLean13CalcTargetPosEP4CPed
// Demangled: CTaskGoToVehicleAndLean::CalcTargetPos(CPed *)
int __fastcall CTaskGoToVehicleAndLean::CalcTargetPos(CTaskGoToVehicleAndLean *this, CPed *a2, int a3)
{
  int v4; // r4
  float *v5; // r0
  int v6; // r1
  float *v7; // r3
  float *v8; // r6
  float v9; // s24
  float v10; // s22
  float v11; // s20
  float v12; // s4
  float v13; // s2
  float v14; // s0
  float v15; // r6
  float v16; // r9

  v4 = *((_DWORD *)a2 + 3);
  v5 = *(float **)(v4 + 20);
  v6 = *(_DWORD *)(a3 + 20);
  v7 = v5 + 12;
  if ( !v5 )
    v7 = (float *)(v4 + 4);
  v8 = (float *)(v6 + 48);
  if ( !v6 )
    v8 = (float *)(a3 + 4);
  v9 = *v8 - *v7;
  v10 = v8[1] - v7[1];
  v11 = v8[2] - v7[2];
  if ( v5 )
  {
    v12 = *v5;
    v13 = v5[1];
    v14 = v5[2];
  }
  else
  {
    v15 = *(float *)(v4 + 16);
    v16 = cosf(v15);
    v13 = sinf(v15);
    v14 = 0.0;
    v12 = v16;
  }
  *((_BYTE *)a2 + 21) = (float)((float)(v11 * v14) + (float)((float)(v10 * v13) + (float)(v9 * v12))) > 0.0;
  return operator*();
}


// ============================================================

// Address: 0x51a6ec
// Original: _ZN23CTaskGoToVehicleAndLean14ControlSubTaskEP4CPed
// Demangled: CTaskGoToVehicleAndLean::ControlSubTask(CPed *)
int __fastcall CTaskGoToVehicleAndLean::ControlSubTask(CTaskGoToVehicleAndLean *this, CPed *a2)
{
  int v4; // r1
  int v5; // r0
  int v6; // r2
  int v7; // r3
  float *v8; // r0
  float32x2_t v9; // d16
  unsigned __int64 v10; // d1
  int v11; // r0
  int v12; // r0
  int v13; // r4
  int v14; // r5
  int v15; // r1
  float *v16; // r0
  bool v17; // zf
  int v18; // r0
  int AnimationBlockIndex; // r0
  int v20; // r2
  char v21; // r0
  CAnimManager *v22; // r0
  int v23; // r1
  float v25; // [sp+0h] [bp-18h]
  float v26; // [sp+4h] [bp-14h] BYREF
  float32x2_t v27; // [sp+8h] [bp-10h]

  v4 = *((_DWORD *)this + 3);
  if ( v4 )
  {
    if ( *(int *)(*((_DWORD *)a2 + 272) + 632) > 30 )
    {
      *(_DWORD *)(v4 + 1072) &= ~0x10000u;
      goto LABEL_15;
    }
    v5 = *(_DWORD *)(v4 + 20);
    v6 = *((_DWORD *)a2 + 5);
    v7 = v5 + 48;
    if ( !v5 )
      v7 = v4 + 4;
    v8 = (float *)(v6 + 48);
    if ( !v6 )
      v8 = (float *)((char *)a2 + 4);
    v25 = v8[2] - *(float *)(v7 + 8);
    CPhysical::GetSpeed();
    if ( (*(_DWORD *)(*((_DWORD *)this + 3) + 1124)
       || sqrtf(
            (float)((float)(v26 * v26) + (float)(v27.n64_f32[0] * v27.n64_f32[0]))
          + (float)(v27.n64_f32[1] * v27.n64_f32[1])) > 0.01)
      && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD, float))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0,
           COERCE_FLOAT(LODWORD(v25))) == 1
      || (CTaskGoToVehicleAndLean::CalcTargetPos((CTaskGoToVehicleAndLean *)&v26, this),
          v9.n64_u64[0] = vsub_f32(v27, *(float32x2_t *)((char *)this + 28)).n64_u64[0],
          v10 = vmul_f32(v9, v9).n64_u64[0],
          (float)((float)((float)((float)(v26 - *((float *)this + 6)) * (float)(v26 - *((float *)this + 6)))
                        + *(float *)&v10)
                + *((float *)&v10 + 1)) > 0.01)
      && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) == 1 )
    {
      v11 = *((_DWORD *)this + 3);
      if ( v11 )
        *(_DWORD *)(v11 + 1072) &= ~0x10000u;
      goto LABEL_15;
    }
    v14 = *((unsigned __int8 *)this + 20);
    v15 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
    v16 = *(float **)(v15 + 1424);
    v17 = v16 == 0;
    if ( v16 )
    {
      v15 = *(_DWORD *)(v15 + 1156) & 0x100;
      v17 = v15 == 0;
    }
    if ( v17
      || (float)((float)((float)(v16[18] * v16[18]) + (float)(v16[19] * v16[19])) + (float)(v16[20] * v16[20])) <= 0.04 )
    {
      v18 = CStreaming::IsVeryBusy((CStreaming *)v16) ^ 1;
      if ( !v14 )
      {
LABEL_23:
        if ( v18 == 1 )
        {
          AnimationBlockIndex = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", (const char *)v15);
          if ( CAnimManager::ms_aAnimBlocks[32 * AnimationBlockIndex + 16] != 1 )
          {
            CStreaming::RequestModel((CStreaming *)(AnimationBlockIndex + 25575), 8, v20);
            return *((_DWORD *)this + 2);
          }
          CAnimManager::AddAnimBlockRef((CAnimManager *)AnimationBlockIndex, 1);
          v21 = 1;
          goto LABEL_29;
        }
        return *((_DWORD *)this + 2);
      }
    }
    else
    {
      v18 = 0;
      if ( !*((_BYTE *)this + 20) )
        goto LABEL_23;
    }
    if ( !v18 )
    {
      v22 = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", (const char *)v15);
      CAnimManager::RemoveAnimBlockRef(v22, v23);
      v21 = 0;
LABEL_29:
      *((_BYTE *)this + 20) = v21;
    }
    return *((_DWORD *)this + 2);
  }
LABEL_15:
  v12 = *((_DWORD *)this + 2);
  v13 = 0;
  if ( v12 )
    (*(void (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v12 + 28))(v12, a2, 2, 0);
  return v13;
}


// ============================================================

// Address: 0x51c508
// Original: _ZNK23CTaskGoToVehicleAndLean5CloneEv
// Demangled: CTaskGoToVehicleAndLean::Clone(void)
int __fastcall CTaskGoToVehicleAndLean::Clone(CTaskGoToVehicleAndLean *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&dword_24, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  *(_BYTE *)(v3 + 20) = 0;
  *(_DWORD *)v3 = &off_66BF8C;
  *(_DWORD *)(v3 + 12) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x51c550
// Original: _ZNK23CTaskGoToVehicleAndLean11GetTaskTypeEv
// Demangled: CTaskGoToVehicleAndLean::GetTaskType(void)
int __fastcall CTaskGoToVehicleAndLean::GetTaskType(CTaskGoToVehicleAndLean *this)
{
  return 1216;
}


// ============================================================

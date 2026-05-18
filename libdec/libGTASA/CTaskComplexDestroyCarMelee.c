
// Address: 0x4e6210
// Original: _ZN27CTaskComplexDestroyCarMeleeC2EP8CVehicle
// Demangled: CTaskComplexDestroyCarMelee::CTaskComplexDestroyCarMelee(CVehicle *)
void __fastcall CTaskComplexDestroyCarMelee::CTaskComplexDestroyCarMelee(
        CTaskComplexDestroyCarMelee *this,
        CVehicle *a2)
{
  CTaskComplex::CTaskComplex(this);
  *((_WORD *)this + 6) = 0;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = -1;
  *(_DWORD *)this = &off_6699B0;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x4e625c
// Original: _ZN27CTaskComplexDestroyCarMeleeD2Ev
// Demangled: CTaskComplexDestroyCarMelee::~CTaskComplexDestroyCarMelee()
void __fastcall CTaskComplexDestroyCarMelee::~CTaskComplexDestroyCarMelee(CTaskComplexDestroyCarMelee *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_6699B0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4e6288
// Original: _ZN27CTaskComplexDestroyCarMeleeD0Ev
// Demangled: CTaskComplexDestroyCarMelee::~CTaskComplexDestroyCarMelee()
void __fastcall CTaskComplexDestroyCarMelee::~CTaskComplexDestroyCarMelee(CTaskComplexDestroyCarMelee *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_6699B0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4e62b8
// Original: _ZN27CTaskComplexDestroyCarMelee13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexDestroyCarMelee::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexDestroyCarMelee::MakeAbortable(
        CTaskComplexDestroyCarMelee *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v8; // r0
  int v9; // r0
  float v10; // s0
  int v11; // r0
  int v12; // r1
  int v13; // r2
  char *v14; // r3
  int v15; // r1
  unsigned __int64 v16; // d1
  _BYTE v17[12]; // [sp+0h] [bp-20h] BYREF

  if ( a3 == 1 )
  {
    if ( !a4 )
      return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
               *((_DWORD *)this + 2),
               a2,
               1,
               a4);
    if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 1 )
      goto LABEL_10;
    v8 = *((_DWORD *)this + 4);
    if ( !v8 || *((_DWORD *)a4 + 5) != v8 )
      goto LABEL_10;
    *(_QWORD *)v17 = *(_QWORD *)(v8 + 72);
    *(_DWORD *)&v17[8] = *(_DWORD *)(v8 + 80);
    v10 = (float)((float)(*(float *)v17 * *(float *)v17) + (float)(*(float *)&v17[4] * *(float *)&v17[4]))
        + (float)(*(float *)&v17[8] * *(float *)&v17[8]);
    if ( v10 != 0.0 )
    {
      if ( v10 >= 0.0225 )
        goto LABEL_10;
      CVector::Normalise((CVector *)v17);
      v11 = *((_DWORD *)this + 4);
      v12 = *((_DWORD *)a2 + 5);
      v13 = *(_DWORD *)(v11 + 20);
      v14 = (char *)(v12 + 48);
      if ( !v12 )
        v14 = (char *)a2 + 4;
      v15 = v13 + 48;
      if ( !v13 )
        v15 = v11 + 4;
      v16 = vmul_f32(vsub_f32(*(float32x2_t *)(v14 + 4), *(float32x2_t *)(v15 + 4)), *(float32x2_t *)&v17[4]).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v14 - *(float *)v15) * *(float *)v17) + *(float *)&v16)
                 + *((float *)&v16 + 1)) <= 0.0 )
      {
LABEL_10:
        if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 56 )
          return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
                   *((_DWORD *)this + 2),
                   a2,
                   1,
                   a4);
        v9 = *((_DWORD *)this + 4);
        if ( !v9 || *((_DWORD *)a4 + 4) != v9 )
          return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
                   *((_DWORD *)this + 2),
                   a2,
                   1,
                   a4);
      }
    }
  }
  else
  {
    if ( a3 == 2 )
      return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
               *((_DWORD *)this + 2),
               a2,
               2,
               a4);
    *((_BYTE *)this + 12) = 1;
  }
  return 0;
}


// ============================================================

// Address: 0x4e63e0
// Original: _ZN27CTaskComplexDestroyCarMelee18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexDestroyCarMelee::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexDestroyCarMelee::CreateFirstSubTask(CTaskComplexDestroyCarMelee *this, CPed *a2)
{
  int v4; // r9
  float *v5; // r4
  float *v6; // r6
  float *v7; // r2
  int v8; // r0
  __int64 *v9; // r1
  __int64 v10; // d16
  int v11; // r0
  float v12; // s16
  float v13; // s18
  float v14; // r1
  float v15; // r0
  float v16; // s20
  int v17; // r0
  int v18; // r1
  int v19; // r1
  int RadianAngleBetweenPoints; // r0
  float v22; // [sp+0h] [bp-30h]

  *((_BYTE *)this + 13) = 0;
  CWeaponInfo::GetWeaponInfo();
  v4 = *((_DWORD *)this + 4);
  v5 = (float *)((char *)a2 + 4);
  v6 = (float *)(v4 + 4);
  v7 = (float *)((char *)a2 + 4);
  v8 = *(_DWORD *)(v4 + 20);
  v9 = (__int64 *)(v4 + 4);
  if ( v8 )
    v9 = (__int64 *)(v8 + 48);
  v10 = *v9;
  *((_DWORD *)this + 7) = *((_DWORD *)v9 + 2);
  *(_QWORD *)((char *)this + 20) = v10;
  v11 = *((_DWORD *)a2 + 5);
  v12 = *((float *)this + 5);
  v13 = *((float *)this + 6);
  if ( v11 )
    v7 = (float *)(v11 + 48);
  v14 = v7[1] - v13;
  v15 = *v7 - v12;
  v16 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v4 + 38)]) + 44) + 36) + 0.35;
  *((float *)this + 8) = v16;
  *((float *)this + 10) = v16;
  *((float *)this + 9) = atan2f(v15, COERCE_FLOAT(LODWORD(v14) ^ 0x80000000));
  v17 = *((_DWORD *)a2 + 5);
  v18 = *(_DWORD *)(v4 + 20);
  if ( v17 )
    v5 = (float *)(v17 + 48);
  if ( v18 )
    v6 = (float *)(v18 + 48);
  if ( (float)((float)((float)((float)(*v6 - *v5) * (float)(*v6 - *v5))
                     + (float)((float)(v6[1] - v5[1]) * (float)(v6[1] - v5[1])))
             + (float)((float)(v6[2] - v5[2]) * (float)(v6[2] - v5[2]))) <= (float)(v16 * v16) )
  {
    RadianAngleBetweenPoints = CGeneral::GetRadianAngleBetweenPoints((CGeneral *)LODWORD(v12), v13, *v5, v5[1], v22);
    v19 = 1019;
    *((_DWORD *)a2 + 344) = RadianAngleBetweenPoints;
  }
  else
  {
    v19 = 202;
    if ( (*((_BYTE *)a2 + 1158) & 0x20) == 0 )
      v19 = 907;
  }
  return CTaskComplexDestroyCarMelee::CreateSubTask(this, v19, a2);
}


// ============================================================

// Address: 0x4e6530
// Original: _ZN27CTaskComplexDestroyCarMelee32CalculateSearchPositionAndRangesEP4CPed
// Demangled: CTaskComplexDestroyCarMelee::CalculateSearchPositionAndRanges(CPed *)
float __fastcall CTaskComplexDestroyCarMelee::CalculateSearchPositionAndRanges(
        CTaskComplexDestroyCarMelee *this,
        CPed *a2)
{
  int v3; // r0
  int v4; // r2
  __int64 *v5; // r3
  __int64 v6; // d16
  int v7; // r2
  float *v8; // r3
  float v9; // r2
  float v10; // r1
  float v11; // r0
  float v12; // s0
  float result; // r0

  v3 = *((_DWORD *)this + 4);
  v4 = *(_DWORD *)(v3 + 20);
  v5 = (__int64 *)(v4 + 48);
  if ( !v4 )
    v5 = (__int64 *)(v3 + 4);
  v6 = *v5;
  *((_DWORD *)this + 7) = *((_DWORD *)v5 + 2);
  *(_QWORD *)((char *)this + 20) = v6;
  v7 = *((_DWORD *)a2 + 5);
  v8 = (float *)(v7 + 48);
  if ( !v7 )
    v8 = (float *)((char *)a2 + 4);
  v9 = v8[1] - *((float *)this + 6);
  v10 = CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v3 + 38)];
  v11 = *v8 - *((float *)this + 5);
  v12 = *(float *)(*(_DWORD *)(LODWORD(v10) + 44) + 36) + 0.35;
  *((float *)this + 8) = v12;
  *((float *)this + 10) = v12;
  result = atan2f(v11, COERCE_FLOAT(LODWORD(v9) ^ 0x80000000));
  *((float *)this + 9) = result;
  return result;
}


// ============================================================

// Address: 0x4e65c0
// Original: _ZN27CTaskComplexDestroyCarMelee13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexDestroyCarMelee::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexDestroyCarMelee::CreateSubTask(CTaskComplexDestroyCarMelee *this, int a2, CPed *a3)
{
  int v5; // r4
  CTaskSimple *v6; // r0
  CEntity *v7; // r6
  __int64 v8; // r8
  CEntity *v9; // r5
  char v10; // r1
  CTaskSimpleStandStill *v11; // r0
  unsigned int v12; // r1
  _BYTE v14[56]; // [sp+10h] [bp-38h] BYREF

  v5 = 0;
  if ( a2 <= 906 )
  {
    if ( a2 == 202 )
    {
      CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v14, 0, 0, 0, 8.0);
      CTaskSimpleStandStill::ProcessPed(v11, a3);
      CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v14);
      if ( *((_DWORD *)this + 12) == -1 )
        *((_DWORD *)this + 12) = CTimer::m_snTimeInMilliseconds;
      v5 = CTask::operator new((CTask *)&off_18, v12);
      CTaskSimple::CTaskSimple((CTaskSimple *)v5);
      *(_WORD *)(v5 + 16) = 0;
      *(_DWORD *)(v5 + 20) = 100;
      *(_DWORD *)(v5 + 8) = 0;
      *(_DWORD *)(v5 + 12) = 0;
      *(_DWORD *)v5 = &off_665760;
    }
    else if ( a2 == 903 )
    {
      *((_DWORD *)this + 12) = -1;
      v5 = CTask::operator new((CTask *)&word_28, 0x387u);
      CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
        (CTaskComplexGoToPointAndStandStill *)v5,
        6,
        (CTaskComplexDestroyCarMelee *)((char *)this + 20),
        0.25,
        0.5,
        0,
        0);
    }
  }
  else
  {
    switch ( a2 )
    {
      case 907:
        *((_DWORD *)this + 12) = -1;
        v5 = CTask::operator new((CTask *)&dword_4C, 0x38Bu);
        v9 = (CEntity *)*((_DWORD *)this + 4);
        CTaskComplex::CTaskComplex((CTaskComplex *)v5);
        *(_QWORD *)(v5 + 24) = 0x400000003F800000LL;
        *(_QWORD *)(v5 + 32) = 0x4000000000000000LL;
        *(_DWORD *)v5 = &off_6656E4;
        *(_DWORD *)(v5 + 16) = 50000;
        *(_DWORD *)(v5 + 20) = 1000;
        *(_WORD *)(v5 + 48) = 0;
        *(_WORD *)(v5 + 60) = 0;
        *(_DWORD *)(v5 + 40) = 0;
        *(_DWORD *)(v5 + 44) = 0;
        *(_DWORD *)(v5 + 52) = 0;
        *(_DWORD *)(v5 + 56) = 0;
        v10 = *(_BYTE *)(v5 + 72);
        *(_DWORD *)(v5 + 64) = &off_665720;
        *(_DWORD *)(v5 + 68) = 6;
        *(_BYTE *)(v5 + 72) = v10 & 0xF0 | 3;
        *(_DWORD *)(v5 + 12) = v9;
        if ( v9 )
          CEntity::RegisterReference(v9, (CEntity **)(v5 + 12));
        break;
      case 1302:
        v5 = 0;
        *((_DWORD *)this + 12) = -1;
        break;
      case 1019:
        *((_DWORD *)this + 12) = -1;
        v6 = (CTaskSimple *)CTask::operator new((CTask *)&dword_24, 0x3FBu);
        v7 = (CEntity *)*((_DWORD *)this + 4);
        v5 = (int)v6;
        v8 = *((_QWORD *)this + 4);
        CTaskSimple::CTaskSimple(v6);
        *(_BYTE *)(v5 + 8) = 0;
        *(_DWORD *)v5 = &off_669640;
        *(_WORD *)(v5 + 10) = 0;
        *(_DWORD *)(v5 + 12) = v7;
        if ( v7 )
          CEntity::RegisterReference(v7, (CEntity **)(v5 + 12));
        *(_DWORD *)(v5 + 16) = HIDWORD(v8);
        *(_DWORD *)(v5 + 20) = v8;
        *(_DWORD *)(v5 + 24) = 1065353216;
        *(_DWORD *)(v5 + 28) = 0;
        *(_DWORD *)(v5 + 32) = 0;
        break;
    }
  }
  return v5;
}


// ============================================================

// Address: 0x4e6790
// Original: _ZN27CTaskComplexDestroyCarMelee17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexDestroyCarMelee::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexDestroyCarMelee::CreateNextSubTask(CTaskComplexDestroyCarMelee *this, CPed *a2)
{
  int v4; // r5
  int v6; // r0
  int v7; // r8
  char *v8; // r5
  unsigned int v9; // r9
  float *v10; // r2
  int v11; // r0
  __int64 *v12; // r1
  __int64 v13; // d16
  int v14; // r0
  float v15; // r1
  float v16; // r0
  float v17; // s2
  float v18; // s4
  int v19; // r0
  unsigned int v20; // r1
  float32x2_t v21; // d16
  unsigned __int64 v22; // d1
  int v23; // r0
  int v24; // r1
  __int64 *v25; // r2
  __int64 v26; // d16
  int v27; // r1
  float *v28; // r2
  float v29; // s0
  float v30; // r2
  float v31; // r1
  float v32; // r0
  float v33; // s0
  unsigned int v34; // r1
  CEntity *v35; // r4
  char v36; // r1
  CTaskSimple *v37; // r0
  CEntity *v38; // r6
  __int64 v39; // r8
  int v40; // r0
  CTaskSimpleStandStill *v41; // r0
  unsigned int v42; // r1
  CTaskSimpleStandStill *v43; // r0
  _BYTE v44[64]; // [sp+8h] [bp-40h] BYREF

  if ( *((_BYTE *)this + 12) )
    return 0;
  v6 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v4 = 0;
  if ( v6 > 906 )
  {
    v20 = 907;
    if ( v6 == 907 )
    {
LABEL_27:
      *((_DWORD *)this + 12) = -1;
      v37 = (CTaskSimple *)CTask::operator new((CTask *)&dword_24, v20);
      v38 = (CEntity *)*((_DWORD *)this + 4);
      v4 = (int)v37;
      v39 = *((_QWORD *)this + 4);
      CTaskSimple::CTaskSimple(v37);
      *(_BYTE *)(v4 + 8) = 0;
      *(_DWORD *)v4 = &off_669640;
      *(_WORD *)(v4 + 10) = 0;
      *(_DWORD *)(v4 + 12) = v38;
      if ( v38 )
        CEntity::RegisterReference(v38, (CEntity **)(v4 + 12));
      *(_DWORD *)(v4 + 16) = HIDWORD(v39);
      *(_DWORD *)(v4 + 20) = v39;
      *(_DWORD *)(v4 + 24) = 1065353216;
      *(_DWORD *)(v4 + 28) = 0;
      *(_DWORD *)(v4 + 32) = 0;
      return v4;
    }
    if ( v6 != 1019 )
      return v4;
    goto LABEL_19;
  }
  if ( v6 == 202 )
  {
LABEL_19:
    if ( (*((_BYTE *)a2 + 1158) & 0x20) == 0 )
    {
      v23 = *((_DWORD *)this + 4);
      v24 = *(_DWORD *)(v23 + 20);
      v25 = (__int64 *)(v24 + 48);
      if ( !v24 )
        v25 = (__int64 *)(v23 + 4);
      v26 = *v25;
      *((_DWORD *)this + 7) = *((_DWORD *)v25 + 2);
      *(_QWORD *)((char *)this + 20) = v26;
      v27 = *((_DWORD *)a2 + 5);
      v28 = (float *)(v27 + 48);
      if ( !v27 )
        v28 = (float *)((char *)a2 + 4);
      v29 = *v28 - *((float *)this + 5);
      v30 = v28[1] - *((float *)this + 6);
      v31 = CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v23 + 38)];
      v32 = v29;
      v33 = *(float *)(*(_DWORD *)(LODWORD(v31) + 44) + 36) + 0.35;
      *((float *)this + 8) = v33;
      *((float *)this + 10) = v33;
      *((float *)this + 9) = atan2f(v32, COERCE_FLOAT(LODWORD(v30) ^ 0x80000000));
      *((_DWORD *)this + 12) = -1;
      v4 = CTask::operator new((CTask *)&dword_4C, v34);
      v35 = (CEntity *)*((_DWORD *)this + 4);
      CTaskComplex::CTaskComplex((CTaskComplex *)v4);
      goto LABEL_25;
    }
    v40 = *((_DWORD *)this + 12);
    if ( v40 != -1 && (unsigned int)(CTimer::m_snTimeInMilliseconds - v40) >= 0xBB9 )
    {
      v4 = 0;
      *((_DWORD *)this + 12) = -1;
      return v4;
    }
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v44, 0, 0, 0, 8.0);
    CTaskSimpleStandStill::ProcessPed(v41, a2);
    CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v44);
    if ( *((_DWORD *)this + 12) == -1 )
      *((_DWORD *)this + 12) = CTimer::m_snTimeInMilliseconds;
LABEL_40:
    v4 = CTask::operator new((CTask *)&off_18, v42);
    CTaskSimple::CTaskSimple((CTaskSimple *)v4);
    *(_WORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 20) = 100;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)v4 = &off_665760;
    return v4;
  }
  if ( v6 != 903 )
    return v4;
  v7 = *((_DWORD *)this + 4);
  v8 = (char *)a2 + 4;
  v9 = v7 + 4;
  v10 = (float *)((char *)a2 + 4);
  v11 = *(_DWORD *)(v7 + 20);
  v12 = (__int64 *)(v7 + 4);
  if ( v11 )
    v12 = (__int64 *)(v11 + 48);
  v13 = *v12;
  *((_DWORD *)this + 7) = *((_DWORD *)v12 + 2);
  *(_QWORD *)((char *)this + 20) = v13;
  v14 = *((_DWORD *)a2 + 5);
  if ( v14 )
    v10 = (float *)(v14 + 48);
  v15 = v10[1] - *((float *)this + 6);
  v16 = *v10 - *((float *)this + 5);
  v17 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v7 + 38)]) + 44) + 36);
  *((float *)this + 8) = v17 + 0.35;
  *((float *)this + 10) = v17 + 0.35;
  *((float *)this + 9) = atan2f(v16, COERCE_FLOAT(LODWORD(v15) ^ 0x80000000));
  v18 = (float)(v17 + 0.35) * (float)(v17 + 0.35);
  v19 = *((_DWORD *)a2 + 5);
  v20 = *(_DWORD *)(v7 + 20);
  if ( v19 )
    v8 = (char *)(v19 + 48);
  if ( v20 )
    v9 = v20 + 48;
  v21.n64_u64[0] = vsub_f32(*(float32x2_t *)(v9 + 4), *(float32x2_t *)(v8 + 4)).n64_u64[0];
  v22 = vmul_f32(v21, v21).n64_u64[0];
  if ( (float)((float)((float)((float)(*(float *)v9 - *(float *)v8) * (float)(*(float *)v9 - *(float *)v8))
                     + *(float *)&v22)
             + *((float *)&v22 + 1)) < v18 )
    goto LABEL_27;
  if ( (*((_BYTE *)a2 + 1158) & 0x20) != 0 )
  {
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v44, 0, 0, 0, 8.0);
    CTaskSimpleStandStill::ProcessPed(v43, a2);
    CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v44);
    if ( *((_DWORD *)this + 12) == -1 )
      *((_DWORD *)this + 12) = CTimer::m_snTimeInMilliseconds;
    goto LABEL_40;
  }
  *((_DWORD *)this + 12) = -1;
  v4 = CTask::operator new((CTask *)&dword_4C, v20);
  v35 = (CEntity *)*((_DWORD *)this + 4);
  CTaskComplex::CTaskComplex((CTaskComplex *)v4);
LABEL_25:
  *(_QWORD *)(v4 + 24) = 0x400000003F800000LL;
  *(_QWORD *)(v4 + 32) = 0x4000000000000000LL;
  *(_DWORD *)v4 = &off_6656E4;
  *(_DWORD *)(v4 + 16) = 50000;
  *(_DWORD *)(v4 + 20) = 1000;
  *(_WORD *)(v4 + 48) = 0;
  *(_WORD *)(v4 + 60) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_DWORD *)(v4 + 44) = 0;
  *(_DWORD *)(v4 + 52) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  v36 = *(_BYTE *)(v4 + 72);
  *(_DWORD *)(v4 + 64) = &off_665720;
  *(_DWORD *)(v4 + 68) = 6;
  *(_BYTE *)(v4 + 72) = v36 & 0xF0 | 3;
  *(_DWORD *)(v4 + 12) = v35;
  if ( v35 )
    CEntity::RegisterReference(v35, (CEntity **)(v4 + 12));
  return v4;
}


// ============================================================

// Address: 0x4e6b60
// Original: _ZN27CTaskComplexDestroyCarMelee14ControlSubTaskEP4CPed
// Demangled: CTaskComplexDestroyCarMelee::ControlSubTask(CPed *)
int __fastcall CTaskComplexDestroyCarMelee::ControlSubTask(CTaskComplexDestroyCarMelee *this, CPed *a2)
{
  int v5; // r8
  int v6; // r0
  bool v7; // zf
  int v8; // r9
  char *v9; // r4
  int v10; // r10
  float *v11; // r2
  int v12; // r0
  __int64 *v13; // r1
  __int64 v14; // d16
  int v15; // r0
  float v16; // r1
  float v17; // r0
  float v18; // s16
  float v19; // r0
  unsigned int v20; // r1
  int v21; // r2
  float32x2_t v22; // d16
  unsigned __int64 v23; // d1
  CEntity *v24; // r5
  char v25; // r1
  int v26; // r9
  char *v27; // r4
  unsigned int v28; // r10
  float *v29; // r2
  int v30; // r0
  __int64 *v31; // r1
  __int64 v32; // d16
  int v33; // r0
  float v34; // r1
  float v35; // r0
  float v36; // s2
  float v37; // s4
  int v38; // r0
  unsigned int v39; // r1
  float32x2_t v40; // d16
  unsigned __int64 v41; // d1
  CTaskSimple *v42; // r0
  CEntity *v43; // r6
  __int64 v44; // kr00_8
  float v45; // s0
  int v46; // r0

  if ( *((_BYTE *)this + 13) )
    return (*(int (__fastcall **)(CTaskComplexDestroyCarMelee *, CPed *))(*(_DWORD *)this + 44))(this, a2);
  if ( *(float *)(*((_DWORD *)this + 4) + 1228) <= 0.0 )
    return 0;
  v5 = *((_DWORD *)this + 2);
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5);
  v7 = v6 == 903;
  if ( v6 != 903 )
    v7 = v6 == 907;
  if ( v7 )
  {
    v26 = *((_DWORD *)this + 4);
    v27 = (char *)a2 + 4;
    v28 = v26 + 4;
    v29 = (float *)((char *)a2 + 4);
    v30 = *(_DWORD *)(v26 + 20);
    v31 = (__int64 *)(v26 + 4);
    if ( v30 )
      v31 = (__int64 *)(v30 + 48);
    v32 = *v31;
    *((_DWORD *)this + 7) = *((_DWORD *)v31 + 2);
    *(_QWORD *)((char *)this + 20) = v32;
    v33 = *((_DWORD *)a2 + 5);
    if ( v33 )
      v29 = (float *)(v33 + 48);
    v34 = v29[1] - *((float *)this + 6);
    v35 = *v29 - *((float *)this + 5);
    v36 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v26 + 38)]) + 44) + 36);
    *((float *)this + 8) = v36 + 0.35;
    *((float *)this + 10) = v36 + 0.35;
    *((float *)this + 9) = atan2f(v35, COERCE_FLOAT(LODWORD(v34) ^ 0x80000000));
    v37 = (float)(v36 + 0.35) * (float)(v36 + 0.35);
    v38 = *((_DWORD *)a2 + 5);
    v39 = *(_DWORD *)(v26 + 20);
    if ( v38 )
      v27 = (char *)(v38 + 48);
    if ( v39 )
      v28 = v39 + 48;
    v40.n64_u64[0] = vsub_f32(*(float32x2_t *)(v28 + 4), *(float32x2_t *)(v27 + 4)).n64_u64[0];
    v41 = vmul_f32(v40, v40).n64_u64[0];
    if ( (float)((float)((float)((float)(*(float *)v28 - *(float *)v27) * (float)(*(float *)v28 - *(float *)v27))
                       + *(float *)&v41)
               + *((float *)&v41 + 1)) < v37 )
    {
      *((_DWORD *)this + 12) = -1;
      v42 = (CTaskSimple *)CTask::operator new((CTask *)&dword_24, v39);
      v43 = (CEntity *)*((_DWORD *)this + 4);
      v5 = (int)v42;
      v44 = *((_QWORD *)this + 4);
      CTaskSimple::CTaskSimple(v42);
      *(_BYTE *)(v5 + 8) = 0;
      *(_DWORD *)v5 = &off_669640;
      *(_WORD *)(v5 + 10) = 0;
      *(_DWORD *)(v5 + 12) = v43;
      if ( v43 )
        CEntity::RegisterReference(v43, (CEntity **)(v5 + 12));
      *(_DWORD *)(v5 + 16) = HIDWORD(v44);
      *(_DWORD *)(v5 + 20) = v44;
      *(_DWORD *)(v5 + 24) = 1065353216;
      *(_DWORD *)(v5 + 28) = 0;
      *(_DWORD *)(v5 + 32) = 0;
    }
  }
  else if ( v6 == 1019 )
  {
    v8 = *((_DWORD *)this + 4);
    v9 = (char *)a2 + 4;
    v10 = v8 + 4;
    v11 = (float *)((char *)a2 + 4);
    v12 = *(_DWORD *)(v8 + 20);
    v13 = (__int64 *)(v8 + 4);
    if ( v12 )
      v13 = (__int64 *)(v12 + 48);
    v14 = *v13;
    *((_DWORD *)this + 7) = *((_DWORD *)v13 + 2);
    *(_QWORD *)((char *)this + 20) = v14;
    v15 = *((_DWORD *)a2 + 5);
    if ( v15 )
      v11 = (float *)(v15 + 48);
    v16 = v11[1] - *((float *)this + 6);
    v17 = *v11 - *((float *)this + 5);
    v18 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v8 + 38)]) + 44) + 36) + 0.35;
    *((float *)this + 8) = v18;
    *((float *)this + 10) = v18;
    v19 = atan2f(v17, COERCE_FLOAT(LODWORD(v16) ^ 0x80000000));
    *((float *)this + 9) = v19;
    v20 = *((_DWORD *)a2 + 5);
    v21 = *(_DWORD *)(v8 + 20);
    if ( v20 )
      v9 = (char *)(v20 + 48);
    if ( v21 )
      v10 = v21 + 48;
    v22.n64_u64[0] = vsub_f32(*(float32x2_t *)(v10 + 4), *(float32x2_t *)(v9 + 4)).n64_u64[0];
    v23 = vmul_f32(v22, v22).n64_u64[0];
    if ( sqrtf(
           (float)((float)((float)(*(float *)v10 - *(float *)v9) * (float)(*(float *)v10 - *(float *)v9))
                 + *(float *)&v23)
         + *((float *)&v23 + 1)) <= (float)(v18 + 0.6) )
    {
      v45 = v19;
      v46 = *((_DWORD *)this + 2);
      *(float *)(v46 + 16) = v45;
      *(float *)(v46 + 20) = v18;
    }
    else
    {
      *((_DWORD *)this + 12) = -1;
      v5 = CTask::operator new((CTask *)&dword_4C, v20);
      v24 = (CEntity *)*((_DWORD *)this + 4);
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      *(_QWORD *)(v5 + 24) = 0x400000003F800000LL;
      *(_QWORD *)(v5 + 32) = 0x4000000000000000LL;
      *(_DWORD *)v5 = &off_6656E4;
      *(_DWORD *)(v5 + 16) = 50000;
      *(_DWORD *)(v5 + 20) = 1000;
      *(_WORD *)(v5 + 48) = 0;
      *(_WORD *)(v5 + 60) = 0;
      *(_DWORD *)(v5 + 40) = 0;
      *(_DWORD *)(v5 + 44) = 0;
      *(_DWORD *)(v5 + 52) = 0;
      *(_DWORD *)(v5 + 56) = 0;
      v25 = *(_BYTE *)(v5 + 72);
      *(_DWORD *)(v5 + 64) = &off_665720;
      *(_DWORD *)(v5 + 68) = 6;
      *(_BYTE *)(v5 + 72) = v25 & 0xF0 | 3;
      *(_DWORD *)(v5 + 12) = v24;
      if ( v24 )
        CEntity::RegisterReference(v24, (CEntity **)(v5 + 12));
    }
  }
  return v5;
}


// ============================================================

// Address: 0x4ea4c8
// Original: _ZNK27CTaskComplexDestroyCarMelee5CloneEv
// Demangled: CTaskComplexDestroyCarMelee::Clone(void)
int __fastcall CTaskComplexDestroyCarMelee::Clone(CTaskComplexDestroyCarMelee *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5

  v3 = CTask::operator new((CTask *)&dword_34, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 20) = 0LL;
  *(_QWORD *)(v3 + 28) = 0LL;
  *(_WORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 48) = -1;
  *(_DWORD *)v3 = &off_6699B0;
  *(_DWORD *)(v3 + 16) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

// Address: 0x4ea51c
// Original: _ZNK27CTaskComplexDestroyCarMelee11GetTaskTypeEv
// Demangled: CTaskComplexDestroyCarMelee::GetTaskType(void)
int __fastcall CTaskComplexDestroyCarMelee::GetTaskType(CTaskComplexDestroyCarMelee *this)
{
  return 1004;
}


// ============================================================

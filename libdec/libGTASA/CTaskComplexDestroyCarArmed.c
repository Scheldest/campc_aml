
// Address: 0x4e6e8c
// Original: _ZN27CTaskComplexDestroyCarArmedC2EP8CVehiclejjj
// Demangled: CTaskComplexDestroyCarArmed::CTaskComplexDestroyCarArmed(CVehicle *,uint,uint,uint)
void __fastcall CTaskComplexDestroyCarArmed::CTaskComplexDestroyCarArmed(
        CTaskComplexDestroyCarArmed *this,
        CVehicle *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  CTaskComplex::CTaskComplex(this);
  *(_QWORD *)((char *)this + 65) = 0LL;
  *(_QWORD *)((char *)this + 73) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 60) = 0LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_DWORD *)this + 21) = -1;
  *((_DWORD *)this + 22) = a3;
  *((_DWORD *)this + 23) = a4;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 24) = a5;
  *(_DWORD *)this = &off_6699EC;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x4e6efc
// Original: _ZN27CTaskComplexDestroyCarArmedD2Ev
// Demangled: CTaskComplexDestroyCarArmed::~CTaskComplexDestroyCarArmed()
void __fastcall CTaskComplexDestroyCarArmed::~CTaskComplexDestroyCarArmed(CTaskComplexDestroyCarArmed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_6699EC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4e6f28
// Original: _ZN27CTaskComplexDestroyCarArmedD0Ev
// Demangled: CTaskComplexDestroyCarArmed::~CTaskComplexDestroyCarArmed()
void __fastcall CTaskComplexDestroyCarArmed::~CTaskComplexDestroyCarArmed(CTaskComplexDestroyCarArmed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_6699EC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4e6f58
// Original: _ZN27CTaskComplexDestroyCarArmed13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexDestroyCarArmed::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexDestroyCarArmed::MakeAbortable(
        CTaskComplexDestroyCarArmed *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( (unsigned int)(a3 - 1) <= 1 )
    return (*(int (__fastcall **)(_DWORD, CPed *))(**((_DWORD **)this + 2) + 28))(*((_DWORD *)this + 2), a2);
  else
    return 0;
}


// ============================================================

// Address: 0x4e6f80
// Original: _ZN27CTaskComplexDestroyCarArmed17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexDestroyCarArmed::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexDestroyCarArmed::CreateNextSubTask(CTaskComplexDestroyCarArmed *this, CPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d3
  int v6; // r0
  unsigned int v7; // r1
  int v8; // r6
  bool v9; // zf
  CTaskComplexDestroyCarArmed *v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r1
  char *v14; // r2
  __int64 v15; // d16
  int v16; // r0
  int v17; // r2
  int v18; // r0
  int v19; // r1
  char *v20; // r2
  __int64 v21; // d16
  int v22; // r0
  float v23; // s2
  float v24; // s2
  float v25; // s4
  float v26; // s4
  float v27; // s2
  unsigned int v28; // r1
  CEntity *v29; // r4
  char v30; // r1
  int WeaponInfo; // r0
  int v33; // r1
  int v34; // r2
  int v35; // r3
  char *v36; // r6
  int v37; // r2
  float v38; // s4
  float32x2_t v39; // d16
  unsigned __int64 v40; // d1

  if ( !*((_DWORD *)this + 4) )
    return 0;
  v6 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v8 = 0;
  if ( v6 >= 1020 )
  {
    if ( (unsigned int)(v6 - 1020) <= 1 )
    {
      if ( (*((_BYTE *)a2 + 1158) & 0x20) == 0 )
      {
        v12 = *((_DWORD *)a2 + 5);
        v13 = *((_DWORD *)this + 4);
        v14 = (char *)(v12 + 48);
        if ( !v12 )
          v14 = (char *)a2 + 4;
        v15 = *(_QWORD *)v14;
        *((_DWORD *)this + 7) = *((_DWORD *)v14 + 2);
        *(_QWORD *)((char *)this + 20) = v15;
        v16 = *(_DWORD *)(v13 + 20);
        v17 = v16 + 48;
        if ( !v16 )
          v17 = v13 + 4;
        goto LABEL_22;
      }
      v8 = CTask::operator new((CTask *)&off_18, v7);
      CTaskSimple::CTaskSimple((CTaskSimple *)v8);
      *(_WORD *)(v8 + 16) = 0;
      *(_DWORD *)(v8 + 20) = 100;
      *(_DWORD *)(v8 + 8) = 0;
      *(_DWORD *)(v8 + 12) = 0;
      *(_DWORD *)v8 = &off_665760;
    }
    return v8;
  }
  if ( v6 == 202 )
  {
    if ( (*((_BYTE *)a2 + 1158) & 0x20) != 0 )
    {
      CPed::GetWeaponSkill(a2);
      WeaponInfo = CWeaponInfo::GetWeaponInfo();
      v33 = *((_DWORD *)this + 4);
      v34 = *((_DWORD *)a2 + 5);
      v35 = *(_DWORD *)(v33 + 20);
      v36 = (char *)(v34 + 48);
      if ( !v34 )
        v36 = (char *)a2 + 4;
      v37 = v35 + 48;
      if ( !v35 )
        v37 = v33 + 4;
      v11 = 202;
      v38 = *(float *)(WeaponInfo + 4);
      v39.n64_u64[0] = vsub_f32(*(float32x2_t *)(v37 + 4), *(float32x2_t *)(v36 + 4)).n64_u64[0];
      v10 = this;
      v40 = vmul_f32(v39, v39).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v37 - *(float *)v36) * (float)(*(float *)v37 - *(float *)v36))
                         + *(float *)&v40)
                 + *((float *)&v40 + 1)) < (float)(v38 * v38) )
        v11 = 1020;
      return CTaskComplexDestroyCarArmed::CreateSubTask(v10, v11, a2);
    }
    v18 = *((_DWORD *)a2 + 5);
    v19 = *((_DWORD *)this + 4);
    v20 = (char *)(v18 + 48);
    if ( !v18 )
      v20 = (char *)a2 + 4;
    v21 = *(_QWORD *)v20;
    *((_DWORD *)this + 7) = *((_DWORD *)v20 + 2);
    *(_QWORD *)((char *)this + 20) = v21;
    v22 = *(_DWORD *)(v19 + 20);
    v17 = v22 + 48;
    if ( !v22 )
      v17 = v19 + 4;
LABEL_22:
    v2.n64_u32[0] = *((_DWORD *)this + 5);
    v23 = *((float *)this + 6);
    *((_QWORD *)this + 4) = *(_QWORD *)v17;
    v2.n64_f32[0] = *((float *)this + 8) - v2.n64_f32[0];
    v24 = *((float *)this + 9) - v23;
    v25 = *((float *)this + 7);
    *((_DWORD *)this + 10) = *(_DWORD *)(v17 + 8);
    v26 = *((float *)this + 10) - v25;
    *((_DWORD *)this + 11) = v2.n64_u32[0];
    *((float *)this + 12) = v24;
    *((float *)this + 13) = v26;
    *((float *)this + 18) = sqrtf((float)((float)(v2.n64_f32[0] * v2.n64_f32[0]) + (float)(v24 * v24)) + (float)(v26 * v26));
    CPed::GetWeaponSkill(a2);
    v27 = *(float *)(CWeaponInfo::GetWeaponInfo() + 8);
    v3.n64_u32[0] = 1061997773;
    v2.n64_f32[0] = (float)(v27 * 0.5) * 0.9;
    *((_DWORD *)this + 16) = vmax_f32(v2, v3).n64_u32[0];
    *((float *)this + 14) = (float)(v27 * 0.5) * 1.1;
    v8 = CTask::operator new((CTask *)&dword_4C, v28);
    v29 = (CEntity *)*((_DWORD *)this + 4);
    CTaskComplex::CTaskComplex((CTaskComplex *)v8);
    *(_QWORD *)(v8 + 24) = 0x400000003F800000LL;
    *(_QWORD *)(v8 + 32) = 0x4000000000000000LL;
    *(_DWORD *)v8 = &off_6656E4;
    *(_DWORD *)(v8 + 16) = 50000;
    *(_DWORD *)(v8 + 20) = 1000;
    *(_WORD *)(v8 + 48) = 0;
    *(_WORD *)(v8 + 60) = 0;
    *(_DWORD *)(v8 + 40) = 0;
    *(_DWORD *)(v8 + 44) = 0;
    *(_DWORD *)(v8 + 52) = 0;
    *(_DWORD *)(v8 + 56) = 0;
    v30 = *(_BYTE *)(v8 + 72);
    *(_DWORD *)(v8 + 64) = &off_665720;
    *(_DWORD *)(v8 + 68) = 6;
    *(_BYTE *)(v8 + 72) = v30 & 0xF0 | 3;
    *(_DWORD *)(v8 + 12) = v29;
    if ( v29 )
      CEntity::RegisterReference(v29, (CEntity **)(v8 + 12));
    return v8;
  }
  v9 = v6 == 903;
  if ( v6 != 903 )
    v9 = v6 == 907;
  if ( !v9 )
    return v8;
  v10 = this;
  v11 = 1020;
  return CTaskComplexDestroyCarArmed::CreateSubTask(v10, v11, a2);
}


// ============================================================

// Address: 0x4e72e0
// Original: _ZN27CTaskComplexDestroyCarArmed32CalculateSearchPositionAndRangesEP4CPed
// Demangled: CTaskComplexDestroyCarArmed::CalculateSearchPositionAndRanges(CPed *)
int __fastcall CTaskComplexDestroyCarArmed::CalculateSearchPositionAndRanges(
        CTaskComplexDestroyCarArmed *this,
        CPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d3
  int v5; // r0
  int v6; // r2
  char *v7; // r3
  __int64 v8; // d16
  int v9; // r0
  int v10; // r3
  float v11; // s2
  float v12; // s2
  float v13; // s4
  float v14; // s4
  int result; // r0
  float v16; // s2

  v5 = *((_DWORD *)a2 + 5);
  v6 = *((_DWORD *)this + 4);
  v7 = (char *)(v5 + 48);
  if ( !v5 )
    v7 = (char *)a2 + 4;
  v8 = *(_QWORD *)v7;
  *((_DWORD *)this + 7) = *((_DWORD *)v7 + 2);
  *(_QWORD *)((char *)this + 20) = v8;
  v9 = *(_DWORD *)(v6 + 20);
  v10 = v9 + 48;
  if ( !v9 )
    v10 = v6 + 4;
  v2.n64_u32[0] = *((_DWORD *)this + 5);
  v11 = *((float *)this + 6);
  *((_QWORD *)this + 4) = *(_QWORD *)v10;
  v2.n64_f32[0] = *((float *)this + 8) - v2.n64_f32[0];
  v12 = *((float *)this + 9) - v11;
  v13 = *((float *)this + 7);
  *((_DWORD *)this + 10) = *(_DWORD *)(v10 + 8);
  v14 = *((float *)this + 10) - v13;
  *((_DWORD *)this + 11) = v2.n64_u32[0];
  *((float *)this + 12) = v12;
  *((float *)this + 13) = v14;
  *((float *)this + 18) = sqrtf((float)((float)(v2.n64_f32[0] * v2.n64_f32[0]) + (float)(v12 * v12)) + (float)(v14 * v14));
  CPed::GetWeaponSkill(a2);
  result = CWeaponInfo::GetWeaponInfo();
  v3.n64_u32[0] = 1061997773;
  v2.n64_f32[0] = *(float *)(result + 8) * 0.5;
  v16 = v2.n64_f32[0] * 1.1;
  v2.n64_f32[0] = v2.n64_f32[0] * 0.9;
  *((_DWORD *)this + 16) = vmax_f32(v2, v3).n64_u32[0];
  *((float *)this + 14) = v16;
  return result;
}


// ============================================================

// Address: 0x4e73c0
// Original: _ZN27CTaskComplexDestroyCarArmed13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexDestroyCarArmed::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexDestroyCarArmed::CreateSubTask(CTaskComplexDestroyCarArmed *this, int a2, CPed *a3)
{
  int v4; // r4
  unsigned int v5; // r1
  CEntity *v6; // r5
  CEntity *v7; // r5
  char v8; // r3

  v4 = 0;
  if ( a2 <= 906 )
  {
    if ( a2 == 202 )
    {
      v4 = CTask::operator new((CTask *)&off_18, 0xCAu);
      CTaskSimple::CTaskSimple((CTaskSimple *)v4);
      *(_WORD *)(v4 + 16) = 0;
      *(_DWORD *)(v4 + 20) = 100;
      *(_DWORD *)(v4 + 8) = 0;
      *(_DWORD *)(v4 + 12) = 0;
      *(_DWORD *)v4 = &off_665760;
    }
    else if ( a2 == 903 )
    {
      v4 = CTask::operator new((CTask *)&word_28, 0x387u);
      CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
        (CTaskComplexGoToPointAndStandStill *)v4,
        6,
        (CTaskComplexDestroyCarArmed *)((char *)this + 32),
        0.5,
        2.0,
        0,
        0);
    }
    return v4;
  }
  if ( a2 == 907 )
  {
    v4 = CTask::operator new((CTask *)&dword_4C, 0x38Bu);
    v7 = (CEntity *)*((_DWORD *)this + 4);
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
    v8 = *(_BYTE *)(v4 + 72);
    *(_DWORD *)v4 = &off_6656E4;
    *(_DWORD *)(v4 + 64) = &off_665720;
    *(_DWORD *)(v4 + 68) = 6;
    *(_BYTE *)(v4 + 72) = v8 & 0xF0 | 3;
  }
  else
  {
    if ( a2 != 1020 )
      return v4;
    CPed::GetWeaponSkill(a3);
    if ( !(*(unsigned __int8 *)(CWeaponInfo::GetWeaponInfo() + 25) << 31) )
    {
      v4 = CTask::operator new((CTask *)&off_3C, v5);
      v6 = (CEntity *)*((_DWORD *)this + 4);
      CTaskSimple::CTaskSimple((CTaskSimple *)v4);
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 24) = 0LL;
      *(_BYTE *)(v4 + 8) = 0;
      *(_DWORD *)(v4 + 32) = 0;
      *(_DWORD *)(v4 + 36) = 0;
      *(_DWORD *)v4 = &off_6696A8;
      *(_DWORD *)(v4 + 12) = v6;
      if ( v6 )
        CEntity::RegisterReference(v6, (CEntity **)(v4 + 12));
      *(_WORD *)(v4 + 44) = 5;
      *(_BYTE *)(v4 + 46) = 3;
      *(_DWORD *)(v4 + 48) = 1065353216;
      *(_DWORD *)(v4 + 52) = 0;
      *(_DWORD *)(v4 + 40) = 5000;
      *(_BYTE *)(v4 + 56) = 1;
      *(_BYTE *)(v4 + 57) = 0;
      return v4;
    }
    v4 = CTask::operator new((CTask *)&dword_1C, v5);
    v7 = (CEntity *)*((_DWORD *)this + 4);
    CTaskSimple::CTaskSimple((CTaskSimple *)v4);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 20) = 0;
    *(_DWORD *)(v4 + 24) = 0;
    *(_WORD *)(v4 + 8) = 0;
    *(_DWORD *)v4 = &off_669710;
  }
  *(_DWORD *)(v4 + 12) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v4 + 12));
  return v4;
}


// ============================================================

// Address: 0x4e759c
// Original: _ZN27CTaskComplexDestroyCarArmed18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexDestroyCarArmed::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexDestroyCarArmed::CreateFirstSubTask(CTaskComplexDestroyCarArmed *this, CPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d3
  int v6; // r0
  int v7; // r1
  char *v8; // r2
  __int64 v9; // d16
  int v10; // r0
  int v11; // r2
  int v12; // r0
  float v13; // s2
  float v14; // s4
  float v15; // s2
  float v16; // s4
  float v17; // s2
  float v18; // s4
  float v19; // s0
  int v20; // r1
  int RadianAngleBetweenPoints; // r0
  float v23; // [sp+0h] [bp-10h]

  if ( !*((_DWORD *)this + 4) )
    return 0;
  *((_BYTE *)this + 12) = 0;
  CPed::GetWeaponSkill(a2);
  CWeaponInfo::GetWeaponInfo();
  v6 = *((_DWORD *)a2 + 5);
  v7 = *((_DWORD *)this + 4);
  v8 = (char *)(v6 + 48);
  if ( !v6 )
    v8 = (char *)a2 + 4;
  v9 = *(_QWORD *)v8;
  *((_DWORD *)this + 7) = *((_DWORD *)v8 + 2);
  *(_QWORD *)((char *)this + 20) = v9;
  v10 = *(_DWORD *)(v7 + 20);
  v11 = v10 + 48;
  if ( !v10 )
    v11 = v7 + 4;
  v2.n64_u32[0] = *((_DWORD *)this + 5);
  v12 = *(_DWORD *)(v11 + 8);
  v13 = *((float *)this + 6);
  *((_QWORD *)this + 4) = *(_QWORD *)v11;
  v14 = *((float *)this + 9);
  *((_DWORD *)this + 10) = v12;
  v15 = v14 - v13;
  v2.n64_f32[0] = *((float *)this + 8) - v2.n64_f32[0];
  v16 = *((float *)this + 10) - *((float *)this + 7);
  *((_DWORD *)this + 11) = v2.n64_u32[0];
  *((float *)this + 12) = v15;
  *((float *)this + 13) = v16;
  *((float *)this + 18) = sqrtf((float)((float)(v2.n64_f32[0] * v2.n64_f32[0]) + (float)(v15 * v15)) + (float)(v16 * v16));
  CPed::GetWeaponSkill(a2);
  v3.n64_u32[0] = 1061997773;
  v2.n64_f32[0] = *(float *)(CWeaponInfo::GetWeaponInfo() + 8) * 0.5;
  v17 = v2.n64_f32[0] * 1.1;
  v2.n64_f32[0] = v2.n64_f32[0] * 0.9;
  v18 = *((float *)this + 18);
  v19 = vmax_f32(v2, v3).n64_f32[0];
  *((float *)this + 16) = v19;
  *((float *)this + 14) = v17;
  if ( v18 <= v19 )
  {
    RadianAngleBetweenPoints = CGeneral::GetRadianAngleBetweenPoints(
                                 *((CGeneral **)this + 8),
                                 *((float *)this + 9),
                                 *((float *)this + 5),
                                 *((float *)this + 6),
                                 v23);
    v20 = 1020;
    *((_DWORD *)a2 + 344) = RadianAngleBetweenPoints;
  }
  else if ( (*((_BYTE *)a2 + 1158) & 0x20) != 0 )
  {
    v20 = 202;
  }
  else
  {
    v20 = 903;
    if ( !*((_BYTE *)this + 80) )
      v20 = 907;
  }
  return CTaskComplexDestroyCarArmed::CreateSubTask(this, v20, a2);
}


// ============================================================

// Address: 0x4e76f8
// Original: _ZN27CTaskComplexDestroyCarArmed14ControlSubTaskEP4CPed
// Demangled: CTaskComplexDestroyCarArmed::ControlSubTask(CPed *)
int __fastcall CTaskComplexDestroyCarArmed::ControlSubTask(CTaskComplexDestroyCarArmed *this, CPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d3
  int v6; // r0
  int v8; // r6
  int v9; // r0
  int v10; // r0
  int v11; // r1
  char *v12; // r2
  __int64 v13; // d16
  int v14; // r0
  int v15; // r2
  float v16; // s2
  float v17; // s2
  float v18; // s4
  float v19; // s4
  float v20; // s4
  float v21; // s2
  unsigned __int32 v22; // s6
  float v23; // s0
  int v24; // r0
  int v25; // r1
  char *v26; // r2
  __int64 v27; // d16
  int v28; // r0
  int v29; // r2
  float v30; // s2
  float v31; // s2
  float v32; // s4
  float v33; // s4
  float v34; // s2
  float v35; // s4

  v6 = *((_DWORD *)this + 4);
  if ( !v6 )
    return 0;
  if ( *((_BYTE *)this + 12) )
    return (*(int (__fastcall **)(CTaskComplexDestroyCarArmed *, CPed *))(*(_DWORD *)this + 44))(this, a2);
  if ( *(float *)(v6 + 1228) <= 0.0 )
    return 0;
  v8 = *((_DWORD *)this + 2);
  v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8);
  if ( v9 == 907 )
  {
    v24 = *((_DWORD *)a2 + 5);
    v25 = *((_DWORD *)this + 4);
    v26 = (char *)(v24 + 48);
    if ( !v24 )
      v26 = (char *)a2 + 4;
    v27 = *(_QWORD *)v26;
    *((_DWORD *)this + 7) = *((_DWORD *)v26 + 2);
    *(_QWORD *)((char *)this + 20) = v27;
    v28 = *(_DWORD *)(v25 + 20);
    v29 = v28 + 48;
    if ( !v28 )
      v29 = v25 + 4;
    v2.n64_u32[0] = *((_DWORD *)this + 5);
    v30 = *((float *)this + 6);
    *((_QWORD *)this + 4) = *(_QWORD *)v29;
    v2.n64_f32[0] = *((float *)this + 8) - v2.n64_f32[0];
    v31 = *((float *)this + 9) - v30;
    v32 = *((float *)this + 7);
    *((_DWORD *)this + 10) = *(_DWORD *)(v29 + 8);
    v33 = *((float *)this + 10) - v32;
    *((_DWORD *)this + 11) = v2.n64_u32[0];
    *((float *)this + 12) = v31;
    *((float *)this + 13) = v33;
    *((float *)this + 18) = sqrtf((float)((float)(v2.n64_f32[0] * v2.n64_f32[0]) + (float)(v31 * v31)) + (float)(v33 * v33));
    CPed::GetWeaponSkill(a2);
    v3.n64_u32[0] = 1061997773;
    v2.n64_f32[0] = *(float *)(CWeaponInfo::GetWeaponInfo() + 8) * 0.5;
    v34 = v2.n64_f32[0] * 1.1;
    v2.n64_f32[0] = v2.n64_f32[0] * 0.9;
    v35 = *((float *)this + 18);
    *((_DWORD *)this + 16) = vmax_f32(v2, v3).n64_u32[0];
    *((float *)this + 14) = v34;
    if ( v35 < v34 )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( v9 != 903 )
    return v8;
  v10 = *((_DWORD *)a2 + 5);
  v11 = *((_DWORD *)this + 4);
  v12 = (char *)(v10 + 48);
  if ( !v10 )
    v12 = (char *)a2 + 4;
  v13 = *(_QWORD *)v12;
  *((_DWORD *)this + 7) = *((_DWORD *)v12 + 2);
  *(_QWORD *)((char *)this + 20) = v13;
  v14 = *(_DWORD *)(v11 + 20);
  v15 = v14 + 48;
  if ( !v14 )
    v15 = v11 + 4;
  v2.n64_u32[0] = *((_DWORD *)this + 5);
  v16 = *((float *)this + 6);
  *((_QWORD *)this + 4) = *(_QWORD *)v15;
  v2.n64_f32[0] = *((float *)this + 8) - v2.n64_f32[0];
  v17 = *((float *)this + 9) - v16;
  v18 = *((float *)this + 7);
  *((_DWORD *)this + 10) = *(_DWORD *)(v15 + 8);
  v19 = *((float *)this + 10) - v18;
  *((_DWORD *)this + 11) = v2.n64_u32[0];
  *((float *)this + 12) = v17;
  *((float *)this + 13) = v19;
  *((float *)this + 18) = sqrtf((float)((float)(v2.n64_f32[0] * v2.n64_f32[0]) + (float)(v17 * v17)) + (float)(v19 * v19));
  CPed::GetWeaponSkill(a2);
  v3.n64_u32[0] = 1061997773;
  v2.n64_f32[0] = *(float *)(CWeaponInfo::GetWeaponInfo() + 8) * 0.5;
  v20 = v2.n64_f32[0] * 1.1;
  v2.n64_f32[0] = v2.n64_f32[0] * 0.9;
  v21 = *((float *)this + 19);
  v22 = vmax_f32(v2, v3).n64_u32[0];
  v23 = *((float *)this + 18);
  *((_DWORD *)this + 16) = v22;
  *((float *)this + 14) = v20;
  if ( v23 < v20 || v23 < v21 )
    goto LABEL_22;
LABEL_21:
  if ( (*((_BYTE *)a2 + 1158) & 0x20) == 0 )
    return v8;
LABEL_22:
  CPed::SetMoveState(a2, 1);
  return CTaskComplexDestroyCarArmed::CreateSubTask(this, 1020, a2);
}


// ============================================================

// Address: 0x4ea524
// Original: _ZNK27CTaskComplexDestroyCarArmed5CloneEv
// Demangled: CTaskComplexDestroyCarArmed::Clone(void)
CTaskComplex *__fastcall CTaskComplexDestroyCarArmed::Clone(CTaskComplexDestroyCarArmed *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  CEntity *v4; // r5
  CTaskComplex *v5; // r4
  __int64 v6; // r8
  int v7; // r6

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_64, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  v5 = v3;
  v6 = *((_QWORD *)this + 11);
  v7 = *((_DWORD *)this + 24);
  CTaskComplex::CTaskComplex(v3);
  *(_QWORD *)((char *)v5 + 65) = 0LL;
  *(_QWORD *)((char *)v5 + 73) = 0LL;
  *(_QWORD *)((char *)v5 + 52) = 0LL;
  *(_QWORD *)((char *)v5 + 60) = 0LL;
  *(_QWORD *)((char *)v5 + 36) = 0LL;
  *(_QWORD *)((char *)v5 + 44) = 0LL;
  *(_QWORD *)((char *)v5 + 20) = 0LL;
  *(_QWORD *)((char *)v5 + 28) = 0LL;
  *((_DWORD *)v5 + 21) = -1;
  *((_QWORD *)v5 + 11) = v6;
  *((_DWORD *)v5 + 24) = v7;
  *(_DWORD *)v5 = &off_6699EC;
  *((_DWORD *)v5 + 4) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)v5 + 4);
  return v5;
}


// ============================================================

// Address: 0x4ea59c
// Original: _ZNK27CTaskComplexDestroyCarArmed11GetTaskTypeEv
// Demangled: CTaskComplexDestroyCarArmed::GetTaskType(void)
int __fastcall CTaskComplexDestroyCarArmed::GetTaskType(CTaskComplexDestroyCarArmed *this)
{
  return 1005;
}


// ============================================================

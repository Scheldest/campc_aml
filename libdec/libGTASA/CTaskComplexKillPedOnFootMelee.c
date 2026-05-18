
// Address: 0x4e17cc
// Original: _ZN30CTaskComplexKillPedOnFootMeleeC2EP4CPed
// Demangled: CTaskComplexKillPedOnFootMelee::CTaskComplexKillPedOnFootMelee(CPed *)
void __fastcall CTaskComplexKillPedOnFootMelee::CTaskComplexKillPedOnFootMelee(
        CTaskComplexKillPedOnFootMelee *this,
        CPed *a2)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = -1;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = -1;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 24) = 0;
  *(_DWORD *)this = &off_6698C8;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4e181c
// Original: _ZN30CTaskComplexKillPedOnFootMeleeD2Ev
// Demangled: CTaskComplexKillPedOnFootMelee::~CTaskComplexKillPedOnFootMelee()
void __fastcall CTaskComplexKillPedOnFootMelee::~CTaskComplexKillPedOnFootMelee(CTaskComplexKillPedOnFootMelee *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6698C8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4e1848
// Original: _ZN30CTaskComplexKillPedOnFootMeleeD0Ev
// Demangled: CTaskComplexKillPedOnFootMelee::~CTaskComplexKillPedOnFootMelee()
void __fastcall CTaskComplexKillPedOnFootMelee::~CTaskComplexKillPedOnFootMelee(CTaskComplexKillPedOnFootMelee *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6698C8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4e1878
// Original: _ZN30CTaskComplexKillPedOnFootMelee13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexKillPedOnFootMelee::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexKillPedOnFootMelee::MakeAbortable(
        CTaskComplexKillPedOnFootMelee *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x4e1890
// Original: _ZN30CTaskComplexKillPedOnFootMelee17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexKillPedOnFootMelee::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexKillPedOnFootMelee::CreateNextSubTask(
        CTaskComplexKillPedOnFootMelee *this,
        CPedIntelligence **a2)
{
  int v4; // r0
  unsigned int v5; // r1
  int v6; // r6
  char *v7; // r1
  int v8; // r0
  bool v9; // cc
  int v10; // r0
  int *v11; // r0
  int v13; // r0
  int v14; // r0
  int *v15; // r0
  CTaskSimpleStandStill *v16; // r0
  unsigned int v17; // r1
  float v18; // r1
  int v19; // r0
  float v20; // s0
  int v21; // r1
  __int64 *v22; // r2
  __int64 v23; // d16
  CPedIntelligence *v24; // r0
  float v25; // s0
  float32x2_t v26; // d16
  unsigned __int64 v27; // d2
  CTaskSimple *v28; // r0
  CEntity *v29; // r5
  __int64 v30; // r8
  int v31; // r0
  float v32; // r1
  int v33; // r0
  float v34; // s0
  int v35; // r1
  __int64 *v36; // r2
  __int64 v37; // d16
  CPedIntelligence *v38; // r0
  float v39; // s0
  float32x2_t v40; // d16
  unsigned __int64 v41; // d2
  CEntity *v42; // r4
  char v43; // r1
  CTaskSimpleStandStill *v44; // r0
  CTaskSimpleStandStill *v45; // r0
  _BYTE v46[56]; // [sp+8h] [bp-38h] BYREF

  if ( !*((_DWORD *)this + 3) )
    return 0;
  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v6 = 0;
  if ( v4 > 243 )
  {
    if ( v4 != 244 )
    {
      v7 = (_BYTE *)(elf_hash_bucket + 655);
      if ( v4 != 907 )
      {
        if ( v4 == 1019 )
        {
          if ( (*((_BYTE *)a2 + 1158) & 0x20) != 0 )
          {
            CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v46, 0, 0, 0, 8.0);
            CTaskSimpleStandStill::ProcessPed(v16, (CPed *)a2);
            CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v46);
            if ( *((_DWORD *)this + 13) == -1 )
              *((_DWORD *)this + 13) = CTimer::m_snTimeInMilliseconds;
          }
          else
          {
            *((_DWORD *)this + 8) = 1090519040;
            if ( CPedIntelligence::GetTaskFighting(a2[272]) )
            {
              v8 = *(char *)(CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)a2[272] + 4), 0) + 36);
              v9 = v8 < 4;
              v10 = v8 - 4;
              if ( v9 )
                v10 = 0;
              v11 = &CTaskSimpleFight::m_aComboData[34 * v10];
            }
            else
            {
              v11 = CTaskSimpleFight::m_aComboData;
            }
            v32 = *(float *)&byte_4[(_DWORD)v11];
            v33 = *((_DWORD *)this + 3);
            *((float *)this + 7) = v32;
            v34 = v32;
            if ( v33 )
            {
              v35 = *(_DWORD *)(v33 + 20);
              v36 = (__int64 *)(v35 + 48);
              if ( !v35 )
                v36 = (__int64 *)(v33 + 4);
              v37 = *v36;
              *((_DWORD *)this + 6) = *((_DWORD *)v36 + 2);
              *((_QWORD *)this + 2) = v37;
            }
            v38 = a2[5];
            v39 = v34 * v34;
            v7 = (char *)v38 + 48;
            if ( !v38 )
              v7 = (char *)(a2 + 1);
            v40.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)this + 20), *(float32x2_t *)(v7 + 4)).n64_u64[0];
            v41 = vmul_f32(v40, v40).n64_u64[0];
            if ( (float)((float)((float)((float)(*((float *)this + 4) - *(float *)v7)
                                       * (float)(*((float *)this + 4) - *(float *)v7))
                               + *(float *)&v41)
                       + *((float *)&v41 + 1)) > v39 )
              goto LABEL_49;
            CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v46, 0, 0, 0, 8.0);
            CTaskSimpleStandStill::ProcessPed(v44, (CPed *)a2);
            CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v46);
            if ( *((_DWORD *)this + 13) == -1 )
              *((_DWORD *)this + 13) = CTimer::m_snTimeInMilliseconds;
          }
          goto LABEL_56;
        }
        return v6;
      }
LABEL_35:
      *((_DWORD *)this + 13) = -1;
      v28 = (CTaskSimple *)CTask::operator new((CTask *)&dword_24, (unsigned int)v7);
      v29 = (CEntity *)*((_DWORD *)this + 3);
      v6 = (int)v28;
      v30 = *((_QWORD *)this + 4);
      CTaskSimple::CTaskSimple(v28);
      *(_BYTE *)(v6 + 8) = 0;
      *(_DWORD *)v6 = &off_669640;
      *(_WORD *)(v6 + 10) = 0;
      *(_DWORD *)(v6 + 12) = v29;
      if ( v29 )
        CEntity::RegisterReference(v29, (CEntity **)(v6 + 12));
      *(_DWORD *)(v6 + 16) = HIDWORD(v30);
      *(_DWORD *)(v6 + 20) = v30;
      *(_DWORD *)(v6 + 24) = 1065353216;
      *(_DWORD *)(v6 + 28) = 0;
      *(_DWORD *)(v6 + 32) = 0;
      return v6;
    }
LABEL_14:
    if ( !(*(unsigned __int8 *)(*((_DWORD *)this + 3) + 69) << 31) )
      return (*(int (__fastcall **)(CTaskComplexKillPedOnFootMelee *, CPedIntelligence **))(*(_DWORD *)this + 44))(
               this,
               a2);
    *((_DWORD *)this + 13) = -1;
    v6 = CTask::operator new((CTask *)&dword_20, v5);
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v6, 2000, 0, 0, 8.0);
    return v6;
  }
  if ( v4 != 202 )
  {
    if ( v4 != 203 )
      return v6;
    goto LABEL_14;
  }
  *((_DWORD *)this + 8) = 1090519040;
  if ( CPedIntelligence::GetTaskFighting(a2[272]) )
  {
    v13 = *(char *)(CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)a2[272] + 4), 0) + 36);
    v9 = v13 < 4;
    v14 = v13 - 4;
    if ( v9 )
      v14 = 0;
    v15 = &CTaskSimpleFight::m_aComboData[34 * v14];
  }
  else
  {
    v15 = CTaskSimpleFight::m_aComboData;
  }
  v18 = *(float *)&byte_4[(_DWORD)v15];
  v19 = *((_DWORD *)this + 3);
  *((float *)this + 7) = v18;
  v20 = v18;
  if ( v19 )
  {
    v21 = *(_DWORD *)(v19 + 20);
    v22 = (__int64 *)(v21 + 48);
    if ( !v21 )
      v22 = (__int64 *)(v19 + 4);
    v23 = *v22;
    *((_DWORD *)this + 6) = *((_DWORD *)v22 + 2);
    *((_QWORD *)this + 2) = v23;
  }
  v24 = a2[5];
  v25 = v20 * v20;
  v7 = (char *)v24 + 48;
  if ( !v24 )
    v7 = (char *)(a2 + 1);
  v26.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)this + 20), *(float32x2_t *)(v7 + 4)).n64_u64[0];
  v27 = vmul_f32(v26, v26).n64_u64[0];
  if ( (float)((float)((float)((float)(*((float *)this + 4) - *(float *)v7)
                             * (float)(*((float *)this + 4) - *(float *)v7))
                     + *(float *)&v27)
             + *((float *)&v27 + 1)) <= v25 )
    goto LABEL_35;
  if ( (*((_BYTE *)a2 + 1158) & 0x20) == 0 )
  {
LABEL_49:
    *((_DWORD *)this + 13) = -1;
    v6 = CTask::operator new((CTask *)&dword_4C, (unsigned int)v7);
    v42 = (CEntity *)*((_DWORD *)this + 3);
    CTaskComplex::CTaskComplex((CTaskComplex *)v6);
    *(_QWORD *)(v6 + 24) = 0x400000003F800000LL;
    *(_QWORD *)(v6 + 32) = 0x4000000000000000LL;
    *(_DWORD *)v6 = &off_6656E4;
    *(_DWORD *)(v6 + 16) = 50000;
    *(_DWORD *)(v6 + 20) = 1000;
    *(_WORD *)(v6 + 48) = 0;
    *(_WORD *)(v6 + 60) = 0;
    *(_DWORD *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 44) = 0;
    *(_DWORD *)(v6 + 52) = 0;
    *(_DWORD *)(v6 + 56) = 0;
    v43 = *(_BYTE *)(v6 + 72);
    *(_DWORD *)(v6 + 64) = &off_665720;
    *(_DWORD *)(v6 + 68) = 6;
    *(_BYTE *)(v6 + 72) = v43 & 0xF0 | 3;
    *(_DWORD *)(v6 + 12) = v42;
    if ( v42 )
      CEntity::RegisterReference(v42, (CEntity **)(v6 + 12));
    return v6;
  }
  v31 = *((_DWORD *)this + 13);
  if ( v31 == -1 || (unsigned int)(CTimer::m_snTimeInMilliseconds - v31) < 0xBB9 )
  {
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v46, 0, 0, 0, 8.0);
    CTaskSimpleStandStill::ProcessPed(v45, (CPed *)a2);
    CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v46);
    if ( *((_DWORD *)this + 13) == -1 )
      *((_DWORD *)this + 13) = CTimer::m_snTimeInMilliseconds;
LABEL_56:
    v6 = CTask::operator new((CTask *)&off_18, v17);
    CTaskSimple::CTaskSimple((CTaskSimple *)v6);
    *(_WORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 20) = 100;
    *(_DWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 12) = 0;
    *(_DWORD *)v6 = &off_665760;
    return v6;
  }
  v6 = 0;
  *((_DWORD *)this + 13) = -1;
  return v6;
}


// ============================================================

// Address: 0x4e1ce4
// Original: _ZN30CTaskComplexKillPedOnFootMelee32CalculateSearchPositionAndRangesEP4CPed
// Demangled: CTaskComplexKillPedOnFootMelee::CalculateSearchPositionAndRanges(CPed *)
int __fastcall CTaskComplexKillPedOnFootMelee::CalculateSearchPositionAndRanges(
        CTaskComplexKillPedOnFootMelee *this,
        CPed *a2)
{
  int v4; // r0
  bool v5; // cc
  int v6; // r0
  int *v7; // r0
  _DWORD *v8; // r1
  int result; // r0
  int v10; // r1
  __int64 *v11; // r2
  __int64 v12; // d16

  *((_DWORD *)this + 8) = 1090519040;
  if ( CPedIntelligence::GetTaskFighting(*((CPedIntelligence **)a2 + 272)) )
  {
    v4 = *(char *)(CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0) + 36);
    v5 = v4 < 4;
    v6 = v4 - 4;
    if ( v5 )
      v6 = 0;
    v7 = &CTaskSimpleFight::m_aComboData[34 * v6];
  }
  else
  {
    v7 = CTaskSimpleFight::m_aComboData;
  }
  v8 = v7 + 1;
  result = *((_DWORD *)this + 3);
  *((_DWORD *)this + 7) = *v8;
  if ( result )
  {
    v10 = *(_DWORD *)(result + 20);
    v11 = (__int64 *)(v10 + 48);
    if ( !v10 )
      v11 = (__int64 *)(result + 4);
    v12 = *v11;
    result = *((_DWORD *)v11 + 2);
    *((_DWORD *)this + 6) = result;
    *((_QWORD *)this + 2) = v12;
  }
  return result;
}


// ============================================================

// Address: 0x4e1d60
// Original: _ZN30CTaskComplexKillPedOnFootMelee13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexKillPedOnFootMelee::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexKillPedOnFootMelee::CreateSubTask(CTaskComplexKillPedOnFootMelee *this, int a2, CPed *a3)
{
  int v5; // r4
  unsigned int v6; // r1
  CTaskComplexTurnToFaceEntityOrCoord *v7; // r6
  unsigned int v8; // r1
  CTaskSimpleShakeFist *v9; // r5
  CTaskSimple *v10; // r0
  CEntity *v11; // r6
  __int64 v12; // r8
  CTaskSimpleStandStill *v13; // r0
  unsigned int v14; // r1
  CEntity *v15; // r5
  char v16; // r1
  _BYTE v18[56]; // [sp+8h] [bp-38h] BYREF

  v5 = 0;
  if ( a2 > 906 )
  {
    switch ( a2 )
    {
      case 907:
        *((_DWORD *)this + 13) = -1;
        v5 = CTask::operator new((CTask *)&dword_4C, 0x38Bu);
        v15 = (CEntity *)*((_DWORD *)this + 3);
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
        v16 = *(_BYTE *)(v5 + 72);
        *(_DWORD *)(v5 + 64) = &off_665720;
        *(_DWORD *)(v5 + 68) = 6;
        *(_BYTE *)(v5 + 72) = v16 & 0xF0 | 3;
        *(_DWORD *)(v5 + 12) = v15;
        if ( v15 )
          CEntity::RegisterReference(v15, (CEntity **)(v5 + 12));
        break;
      case 1302:
        v5 = 0;
        *((_DWORD *)this + 13) = -1;
        break;
      case 1019:
        *((_DWORD *)this + 13) = -1;
        v10 = (CTaskSimple *)CTask::operator new((CTask *)&dword_24, 0x3FBu);
        v11 = (CEntity *)*((_DWORD *)this + 3);
        v5 = (int)v10;
        v12 = *((_QWORD *)this + 4);
        CTaskSimple::CTaskSimple(v10);
        *(_BYTE *)(v5 + 8) = 0;
        *(_DWORD *)v5 = &off_669640;
        *(_WORD *)(v5 + 10) = 0;
        *(_DWORD *)(v5 + 12) = v11;
        if ( v11 )
          CEntity::RegisterReference(v11, (CEntity **)(v5 + 12));
        *(_DWORD *)(v5 + 16) = HIDWORD(v12);
        *(_DWORD *)(v5 + 20) = v12;
        *(_DWORD *)(v5 + 24) = 1065353216;
        *(_DWORD *)(v5 + 28) = 0;
        *(_DWORD *)(v5 + 32) = 0;
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 202:
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v18, 0, 0, 0, 8.0);
        CTaskSimpleStandStill::ProcessPed(v13, a3);
        CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v18);
        if ( *((_DWORD *)this + 13) == -1 )
          *((_DWORD *)this + 13) = CTimer::m_snTimeInMilliseconds;
        v5 = CTask::operator new((CTask *)&off_18, v14);
        CTaskSimple::CTaskSimple((CTaskSimple *)v5);
        *(_WORD *)(v5 + 16) = 0;
        *(_DWORD *)(v5 + 20) = 100;
        *(_DWORD *)(v5 + 8) = 0;
        *(_DWORD *)(v5 + 12) = 0;
        *(_DWORD *)v5 = &off_665760;
        break;
      case 203:
        *((_DWORD *)this + 13) = -1;
        v5 = CTask::operator new((CTask *)&dword_20, 0xCBu);
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v5, 2000, 0, 0, 8.0);
        break;
      case 244:
        *((_DWORD *)this + 13) = -1;
        v5 = CTask::operator new((CTask *)&dword_40, 0xF4u);
        CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v5);
        v7 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v6);
        CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v7, *((CEntity **)this + 3), 0.5, 0.2);
        CTaskComplexSequence::AddTask((CTaskComplexSequence *)v5, v7);
        v9 = (CTaskSimpleShakeFist *)CTask::operator new((CTask *)&word_10, v8);
        CTaskSimpleShakeFist::CTaskSimpleShakeFist(v9);
        CTaskComplexSequence::AddTask((CTaskComplexSequence *)v5, v9);
        break;
    }
  }
  return v5;
}


// ============================================================

// Address: 0x4e1f7c
// Original: _ZN30CTaskComplexKillPedOnFootMelee18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexKillPedOnFootMelee::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexKillPedOnFootMelee::CreateFirstSubTask(CTaskComplexKillPedOnFootMelee *this, CPed *a2)
{
  int v4; // r0
  bool v5; // cc
  int v6; // r0
  int *v7; // r0
  float v9; // r1
  int v10; // r0
  float v11; // s0
  int v12; // r1
  __int64 *v13; // r2
  __int64 v14; // d16
  int v15; // r0
  float v16; // s0
  char *v17; // r1
  float32x2_t v18; // d16
  unsigned __int64 v19; // d2
  int v20; // r1

  CInterestingEvents::Add();
  *((_BYTE *)this + 49) = 0;
  CWeaponInfo::GetWeaponInfo();
  if ( !*((_DWORD *)this + 3) )
    return 0;
  *((_DWORD *)this + 8) = 1090519040;
  if ( CPedIntelligence::GetTaskFighting(*((CPedIntelligence **)a2 + 272)) )
  {
    v4 = *(char *)(CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0) + 36);
    v5 = v4 < 4;
    v6 = v4 - 4;
    if ( v5 )
      v6 = 0;
    v7 = &CTaskSimpleFight::m_aComboData[34 * v6];
  }
  else
  {
    v7 = CTaskSimpleFight::m_aComboData;
  }
  v9 = *(float *)&byte_4[(_DWORD)v7];
  v10 = *((_DWORD *)this + 3);
  *((float *)this + 7) = v9;
  v11 = v9;
  if ( v10 )
  {
    v12 = *(_DWORD *)(v10 + 20);
    v13 = (__int64 *)(v12 + 48);
    if ( !v12 )
      v13 = (__int64 *)(v10 + 4);
    v14 = *v13;
    *((_DWORD *)this + 6) = *((_DWORD *)v13 + 2);
    *((_QWORD *)this + 2) = v14;
  }
  v15 = *((_DWORD *)a2 + 5);
  v16 = v11 * v11;
  v17 = (char *)(v15 + 48);
  if ( !v15 )
    v17 = (char *)a2 + 4;
  v18.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)this + 20), *(float32x2_t *)(v17 + 4)).n64_u64[0];
  v19 = vmul_f32(v18, v18).n64_u64[0];
  if ( (float)((float)((float)((float)(*((float *)this + 4) - *(float *)v17)
                             * (float)(*((float *)this + 4) - *(float *)v17))
                     + *(float *)&v19)
             + *((float *)&v19 + 1)) <= v16 )
  {
    v20 = 1019;
  }
  else
  {
    v20 = 202;
    if ( (*((_BYTE *)a2 + 1158) & 0x20) == 0 )
      v20 = 907;
  }
  return CTaskComplexKillPedOnFootMelee::CreateSubTask(this, v20, a2);
}


// ============================================================

// Address: 0x4e2090
// Original: _ZN30CTaskComplexKillPedOnFootMelee14ControlSubTaskEP4CPed
// Demangled: CTaskComplexKillPedOnFootMelee::ControlSubTask(CPed *)
int __fastcall CTaskComplexKillPedOnFootMelee::ControlSubTask(
        CTaskComplexKillPedOnFootMelee *this,
        CPedIntelligence **a2)
{
  int v4; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r0
  bool v9; // cc
  int v10; // r0
  int *v11; // r0
  unsigned int v12; // r1
  int v13; // r0
  int v14; // r0
  int *v15; // r0
  unsigned int v16; // r1
  unsigned int v17; // r1
  CTaskComplexTurnToFaceEntityOrCoord *v18; // r6
  unsigned int v19; // r1
  CTaskSimpleShakeFist *v20; // r5
  float v21; // r1
  int v22; // r0
  float v23; // s0
  int v24; // r1
  __int64 *v25; // r2
  __int64 v26; // d16
  CPedIntelligence *v27; // r0
  float v28; // s0
  char *v29; // r1
  float32x2_t v30; // d16
  unsigned __int64 v31; // d2
  CTaskSimple *v32; // r0
  CEntity *v33; // r6
  __int64 v34; // kr00_8
  _DWORD *v35; // r1
  int v36; // r0
  int v37; // r1
  __int64 *v38; // r2
  __int64 v39; // d16
  CPedIntelligence *v40; // r0
  char *v41; // r1
  float32x2_t v42; // d16
  unsigned __int64 v43; // d1
  unsigned int v44; // r1
  CEntity *v45; // r5
  char v46; // r1
  CTaskSimpleStandStill *v47; // r0
  unsigned int v48; // r1
  _BYTE v49[56]; // [sp+10h] [bp-38h] BYREF

  v4 = *((_DWORD *)this + 2);
  CPed::Say((CPed *)a2, 0x59u, 0, 1.0, 0, 0, 0);
  if ( *((_BYTE *)this + 49) )
    return (*(int (__fastcall **)(CTaskComplexKillPedOnFootMelee *, CPedIntelligence **))(*(_DWORD *)this + 44))(
             this,
             a2);
  v6 = *((_DWORD *)this + 3);
  if ( !v6 || *(float *)(v6 + 1348) <= 0.0 )
    return 0;
  v7 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v7 <= 243 )
  {
    if ( v7 == 202 )
      goto LABEL_21;
    if ( v7 != 203 )
      return v4;
LABEL_18:
    if ( *(unsigned __int8 *)(*((_DWORD *)this + 3) + 69) << 31
      || (*(int (__fastcall **)(_DWORD, CPedIntelligence **, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) != 1 )
    {
      return v4;
    }
LABEL_39:
    *((_DWORD *)this + 13) = -1;
    v32 = (CTaskSimple *)CTask::operator new((CTask *)&dword_24, v12);
    v33 = (CEntity *)*((_DWORD *)this + 3);
    v4 = (int)v32;
    v34 = *((_QWORD *)this + 4);
    CTaskSimple::CTaskSimple(v32);
    *(_BYTE *)(v4 + 8) = 0;
    *(_DWORD *)v4 = &off_669640;
    *(_WORD *)(v4 + 10) = 0;
    *(_DWORD *)(v4 + 12) = v33;
    if ( v33 )
      CEntity::RegisterReference(v33, (CEntity **)(v4 + 12));
    *(_DWORD *)(v4 + 16) = HIDWORD(v34);
    *(_DWORD *)(v4 + 20) = v34;
    *(_DWORD *)(v4 + 24) = 1065353216;
    *(_DWORD *)(v4 + 28) = 0;
    *(_DWORD *)(v4 + 32) = 0;
    return v4;
  }
  if ( v7 == 244 )
    goto LABEL_18;
  if ( v7 != 907 )
  {
    if ( v7 == 1019 )
    {
      if ( !(*(unsigned __int8 *)(*((_DWORD *)this + 3) + 69) << 31) )
      {
        *((_DWORD *)this + 8) = 1090519040;
        if ( CPedIntelligence::GetTaskFighting(a2[272]) )
        {
          v8 = *(char *)(CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)a2[272] + 4), 0) + 36);
          v9 = v8 < 4;
          v10 = v8 - 4;
          if ( v9 )
            v10 = 0;
          v11 = &CTaskSimpleFight::m_aComboData[34 * v10];
        }
        else
        {
          v11 = CTaskSimpleFight::m_aComboData;
        }
        v35 = v11 + 1;
        v36 = *((_DWORD *)this + 3);
        *((_DWORD *)this + 7) = *v35;
        if ( v36 )
        {
          v37 = *(_DWORD *)(v36 + 20);
          v38 = (__int64 *)(v37 + 48);
          if ( !v37 )
            v38 = (__int64 *)(v36 + 4);
          v39 = *v38;
          *((_DWORD *)this + 6) = *((_DWORD *)v38 + 2);
          *((_QWORD *)this + 2) = v39;
        }
        v40 = a2[5];
        v41 = (char *)v40 + 48;
        if ( !v40 )
          v41 = (char *)(a2 + 1);
        v42.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)this + 20), *(float32x2_t *)(v41 + 4)).n64_u64[0];
        v43 = vmul_f32(v42, v42).n64_u64[0];
        if ( (float)((float)((float)((float)(*((float *)this + 4) - *(float *)v41)
                                   * (float)(*((float *)this + 4) - *(float *)v41))
                           + *(float *)&v43)
                   + *((float *)&v43 + 1)) > (float)(*((float *)this + 8) * *((float *)this + 8))
          && (*(int (__fastcall **)(_DWORD, CPedIntelligence **, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
               *((_DWORD *)this + 2),
               a2,
               1,
               0) == 1 )
        {
          if ( (*((_BYTE *)a2 + 1158) & 0x20) != 0 )
          {
            CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v49, 0, 0, 0, 8.0);
            CTaskSimpleStandStill::ProcessPed(v47, (CPed *)a2);
            CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v49);
            if ( *((_DWORD *)this + 13) == -1 )
              *((_DWORD *)this + 13) = CTimer::m_snTimeInMilliseconds;
            v4 = CTask::operator new((CTask *)&off_18, v48);
            CTaskSimple::CTaskSimple((CTaskSimple *)v4);
            *(_WORD *)(v4 + 16) = 0;
            *(_DWORD *)(v4 + 20) = 100;
            *(_DWORD *)(v4 + 8) = 0;
            *(_DWORD *)(v4 + 12) = 0;
            *(_DWORD *)v4 = &off_665760;
          }
          else
          {
            *((_DWORD *)this + 13) = -1;
            v4 = CTask::operator new((CTask *)&dword_4C, v44);
            v45 = (CEntity *)*((_DWORD *)this + 3);
            CTaskComplex::CTaskComplex((CTaskComplex *)v4);
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
            v46 = *(_BYTE *)(v4 + 72);
            *(_DWORD *)(v4 + 64) = &off_665720;
            *(_DWORD *)(v4 + 68) = 6;
            *(_BYTE *)(v4 + 72) = v46 & 0xF0 | 3;
            *(_DWORD *)(v4 + 12) = v45;
            if ( v45 )
              CEntity::RegisterReference(v45, (CEntity **)(v4 + 12));
          }
        }
        return v4;
      }
      if ( (*(int (__fastcall **)(_DWORD, CPedIntelligence **, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             1,
             0) == 1 )
        goto LABEL_29;
    }
    return v4;
  }
LABEL_21:
  if ( !(*(unsigned __int8 *)(*((_DWORD *)this + 3) + 69) << 31) )
  {
    *((_DWORD *)this + 8) = 1090519040;
    if ( CPedIntelligence::GetTaskFighting(a2[272]) )
    {
      v13 = *(char *)(CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)a2[272] + 4), 0) + 36);
      v9 = v13 < 4;
      v14 = v13 - 4;
      if ( v9 )
        v14 = 0;
      v15 = &CTaskSimpleFight::m_aComboData[34 * v14];
    }
    else
    {
      v15 = CTaskSimpleFight::m_aComboData;
    }
    v21 = *(float *)&byte_4[(_DWORD)v15];
    v22 = *((_DWORD *)this + 3);
    *((float *)this + 7) = v21;
    v23 = v21;
    if ( v22 )
    {
      v24 = *(_DWORD *)(v22 + 20);
      v25 = (__int64 *)(v24 + 48);
      if ( !v24 )
        v25 = (__int64 *)(v22 + 4);
      v26 = *v25;
      *((_DWORD *)this + 6) = *((_DWORD *)v25 + 2);
      *((_QWORD *)this + 2) = v26;
    }
    v27 = a2[5];
    v28 = v23 * v23;
    v29 = (char *)v27 + 48;
    if ( !v27 )
      v29 = (char *)(a2 + 1);
    v30.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)this + 20), *(float32x2_t *)(v29 + 4)).n64_u64[0];
    v31 = vmul_f32(v30, v30).n64_u64[0];
    if ( (float)((float)((float)((float)(*((float *)this + 4) - *(float *)v29)
                               * (float)(*((float *)this + 4) - *(float *)v29))
                       + *(float *)&v31)
               + *((float *)&v31 + 1)) >= v28
      || (*(int (__fastcall **)(_DWORD, CPedIntelligence **, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) != 1 )
    {
      return v4;
    }
    goto LABEL_39;
  }
  if ( (*(int (__fastcall **)(_DWORD, CPedIntelligence **, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         1,
         0) == 1 )
  {
LABEL_29:
    *((_DWORD *)this + 13) = -1;
    v4 = CTask::operator new((CTask *)&dword_40, v16);
    CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v4);
    v18 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v17);
    CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v18, *((CEntity **)this + 3), 0.5, 0.2);
    CTaskComplexSequence::AddTask((CTaskComplexSequence *)v4, v18);
    v20 = (CTaskSimpleShakeFist *)CTask::operator new((CTask *)&word_10, v19);
    CTaskSimpleShakeFist::CTaskSimpleShakeFist(v20);
    CTaskComplexSequence::AddTask((CTaskComplexSequence *)v4, v20);
  }
  return v4;
}


// ============================================================

// Address: 0x4e9f68
// Original: _ZNK30CTaskComplexKillPedOnFootMelee5CloneEv
// Demangled: CTaskComplexKillPedOnFootMelee::Clone(void)
int __fastcall CTaskComplexKillPedOnFootMelee::Clone(CTaskComplexKillPedOnFootMelee *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5

  v3 = CTask::operator new((CTask *)&dword_38, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 40) = -1;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 52) = -1;
  *(_WORD *)(v3 + 48) = 0;
  *(_DWORD *)v3 = &off_6698C8;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x4e9fc0
// Original: _ZNK30CTaskComplexKillPedOnFootMelee11GetTaskTypeEv
// Demangled: CTaskComplexKillPedOnFootMelee::GetTaskType(void)
int __fastcall CTaskComplexKillPedOnFootMelee::GetTaskType(CTaskComplexKillPedOnFootMelee *this)
{
  return 1001;
}


// ============================================================

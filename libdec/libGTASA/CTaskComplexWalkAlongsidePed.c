
// Address: 0x18f6c4
// Original: j__ZN28CTaskComplexWalkAlongsidePedC2EP4CPedf
// Demangled: CTaskComplexWalkAlongsidePed::CTaskComplexWalkAlongsidePed(CPed *,float)
// attributes: thunk
void __fastcall CTaskComplexWalkAlongsidePed::CTaskComplexWalkAlongsidePed(
        CTaskComplexWalkAlongsidePed *this,
        CPed *a2,
        float a3)
{
  _ZN28CTaskComplexWalkAlongsidePedC2EP4CPedf(this, a2, a3);
}


// ============================================================

// Address: 0x196fe0
// Original: j__ZN28CTaskComplexWalkAlongsidePedD2Ev
// Demangled: CTaskComplexWalkAlongsidePed::~CTaskComplexWalkAlongsidePed()
// attributes: thunk
void __fastcall CTaskComplexWalkAlongsidePed::~CTaskComplexWalkAlongsidePed(CTaskComplexWalkAlongsidePed *this)
{
  _ZN28CTaskComplexWalkAlongsidePedD2Ev(this);
}


// ============================================================

// Address: 0x535bd4
// Original: _ZN28CTaskComplexWalkAlongsidePedC2EP4CPedf
// Demangled: CTaskComplexWalkAlongsidePed::CTaskComplexWalkAlongsidePed(CPed *,float)
void __fastcall CTaskComplexWalkAlongsidePed::CTaskComplexWalkAlongsidePed(
        CTaskComplexWalkAlongsidePed *this,
        CPed *a2,
        float a3)
{
  CTaskComplex::CTaskComplex(this);
  *((float *)this + 4) = a3;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *(_DWORD *)this = &off_66CE84;
  *((_DWORD *)this + 3) = a2;
  CEntity::RegisterReference(a2, (CEntity **)this + 3);
  *((float *)this + 4) = a3;
}


// ============================================================

// Address: 0x535c14
// Original: _ZN28CTaskComplexWalkAlongsidePedD2Ev
// Demangled: CTaskComplexWalkAlongsidePed::~CTaskComplexWalkAlongsidePed()
void __fastcall CTaskComplexWalkAlongsidePed::~CTaskComplexWalkAlongsidePed(CTaskComplexWalkAlongsidePed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66CE84;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x535c40
// Original: _ZN28CTaskComplexWalkAlongsidePedD0Ev
// Demangled: CTaskComplexWalkAlongsidePed::~CTaskComplexWalkAlongsidePed()
void __fastcall CTaskComplexWalkAlongsidePed::~CTaskComplexWalkAlongsidePed(CTaskComplexWalkAlongsidePed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66CE84;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x535c70
// Original: _ZN28CTaskComplexWalkAlongsidePed13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexWalkAlongsidePed::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexWalkAlongsidePed::MakeAbortable(
        CTaskComplexWalkAlongsidePed *this,
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

// Address: 0x535c7c
// Original: _ZN28CTaskComplexWalkAlongsidePed18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexWalkAlongsidePed::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexWalkAlongsidePed::CreateFirstSubTask(CTaskComplexWalkAlongsidePed *this, CPed *a2)
{
  int v4; // r1

  if ( !*((_DWORD *)this + 3) )
    return 0;
  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
  {
    v4 = 704;
    if ( !*((_DWORD *)a2 + 356) )
      v4 = 907;
  }
  else
  {
    v4 = 907;
  }
  return CTaskComplexWalkAlongsidePed::CreateSubTask(this, v4, a2);
}


// ============================================================

// Address: 0x535cb0
// Original: _ZNK28CTaskComplexWalkAlongsidePed13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexWalkAlongsidePed::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexWalkAlongsidePed::CreateSubTask(CTaskComplexWalkAlongsidePed *this, int a2, CVehicle **a3)
{
  int v5; // r4
  CEntity *v6; // r8
  char v7; // r3
  char v8; // r0
  __int64 v9; // d16

  switch ( a2 )
  {
    case 203:
      v5 = CTask::operator new((CTask *)&dword_20, 0xCBu);
      CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v5, 10, 0, 0, 8.0);
      break;
    case 907:
      v5 = CTask::operator new((CTask *)&dword_58, 0x38Bu);
      v6 = (CEntity *)*((_DWORD *)this + 3);
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      *(_QWORD *)(v5 + 24) = 0x40A000003F000000LL;
      *(_QWORD *)(v5 + 32) = 0x4000000000000000LL;
      *(_QWORD *)(v5 + 16) = 0x3E80000C350LL;
      *(_WORD *)(v5 + 48) = 0;
      *(_WORD *)(v5 + 60) = 0;
      *(_DWORD *)(v5 + 40) = 0;
      *(_DWORD *)(v5 + 44) = 0;
      *(_DWORD *)(v5 + 52) = 0;
      *(_DWORD *)(v5 + 56) = 0;
      *(_DWORD *)(v5 + 72) = 0;
      *(_DWORD *)(v5 + 76) = 0;
      *(_DWORD *)(v5 + 80) = 6;
      v7 = *(_BYTE *)(v5 + 84);
      *(_DWORD *)v5 = &off_668978;
      *(_DWORD *)(v5 + 64) = &off_66D3DC;
      v8 = v7 & 0xF0;
      *(_BYTE *)(v5 + 84) = v7 & 0xF0;
      *(_DWORD *)(v5 + 68) = 0;
      *(_DWORD *)(v5 + 12) = v6;
      if ( v6 )
      {
        CEntity::RegisterReference(v6, (CEntity **)(v5 + 12));
        v8 = *(_BYTE *)(v5 + 84);
      }
      v9 = *(_QWORD *)((char *)this + 20);
      *(_DWORD *)(v5 + 76) = *((_DWORD *)this + 7);
      *(_QWORD *)(v5 + 68) = v9;
      *(_DWORD *)(v5 + 80) = 7;
      *(_BYTE *)(v5 + 84) = v8 | 8;
      break;
    case 704:
      v5 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, a3[356], 0, 0, 1, 0);
      break;
    default:
      return 0;
  }
  return v5;
}


// ============================================================

// Address: 0x535dd8
// Original: _ZN28CTaskComplexWalkAlongsidePed17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexWalkAlongsidePed::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexWalkAlongsidePed::CreateNextSubTask(CTaskComplexWalkAlongsidePed *this, CVehicle **a2)
{
  int v4; // r0
  int v5; // r1

  if ( !*((_DWORD *)this + 3) )
    return 0;
  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 != 203 )
  {
    if ( v4 == 907 )
    {
      v5 = 203;
      return CTaskComplexWalkAlongsidePed::CreateSubTask(this, v5, a2);
    }
    if ( v4 != 704 )
      return 0;
  }
  v5 = 907;
  return CTaskComplexWalkAlongsidePed::CreateSubTask(this, v5, a2);
}


// ============================================================

// Address: 0x535e14
// Original: _ZN28CTaskComplexWalkAlongsidePed14ControlSubTaskEP4CPed
// Demangled: CTaskComplexWalkAlongsidePed::ControlSubTask(CPed *)
CTaskSimpleStandStill *__fastcall CTaskComplexWalkAlongsidePed::ControlSubTask(
        CTaskComplexWalkAlongsidePed *this,
        CPed *a2)
{
  CTaskSimpleStandStill *v4; // r6
  int Association; // r8
  int v6; // r5
  unsigned int MoveStateFromGoToTask; // r11
  int v8; // r0
  float *v9; // r10
  float *v10; // r1
  int v11; // r0
  float v12; // s0
  float v13; // s2
  int v14; // r1
  float *v15; // r2
  float v16; // s18
  float v17; // s16
  float v18; // s20
  int v19; // r2
  __int64 v20; // kr00_8
  int ActiveTaskByType; // r8
  int v22; // r0
  int v23; // r5
  int v24; // lr
  int v25; // r8
  int v26; // r0
  float *v27; // r0
  float v28; // s14
  float v29; // s6
  float v30; // s10
  float v31; // s8
  float32x2_t v32; // d2
  float32x2_t v33; // d0
  float v34; // s4
  float32x2_t v35; // d0
  float32x2_t v36; // d0
  float v37; // s24
  float v38; // s0
  float v39; // s0
  float v40; // s24
  float v41; // s0
  float v42; // s0
  char v43; // r0
  unsigned int v44; // r1
  unsigned int v45; // r5
  int v46; // r6
  int v47; // r3
  _DWORD *v48; // r2
  unsigned int v49; // r0
  int v50; // r5
  int v51; // r6
  float *v53; // [sp+4h] [bp-64h]
  float *v54; // [sp+8h] [bp-60h]
  int v55; // [sp+Ch] [bp-5Ch]
  __int64 v56; // [sp+10h] [bp-58h]
  float v57; // [sp+18h] [bp-50h]

  if ( *((_DWORD *)this + 3) )
  {
    v4 = 0;
    Association = RpAnimBlendClumpGetAssociation();
    v6 = RpAnimBlendClumpGetAssociation();
    MoveStateFromGoToTask = CPedIntelligence::GetMoveStateFromGoToTask(*(CPedIntelligence **)(*((_DWORD *)this + 3)
                                                                                            + 1088));
    v8 = *((_DWORD *)a2 + 5);
    v9 = (float *)((char *)a2 + 4);
    v10 = (float *)((char *)a2 + 4);
    if ( v8 )
      v10 = (float *)(v8 + 48);
    v11 = *((_DWORD *)this + 3);
    v12 = *v10;
    v13 = v10[1];
    v14 = *(_DWORD *)(v11 + 20);
    v15 = (float *)(v14 + 48);
    if ( !v14 )
      v15 = (float *)(v11 + 4);
    v16 = *v15 - v12;
    v17 = v15[1] - v13;
    v18 = (float)((float)(v16 * v16) + (float)(v17 * v17)) + 0.0;
    if ( v18 <= (float)(*((float *)this + 4) * *((float *)this + 4)) )
    {
      if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 907 )
      {
        v24 = 0;
        v25 = 0;
        goto LABEL_57;
      }
      v53 = (float *)Association;
      v54 = (float *)v6;
      v19 = *((_DWORD *)this + 2);
      v20 = *((_QWORD *)this + 3);
      v55 = *(_DWORD *)(*((_DWORD *)a2 + 272) + 632);
      *(_DWORD *)(v19 + 68) = *((_DWORD *)this + 5);
      *(_QWORD *)(v19 + 72) = v20;
      *(_DWORD *)(v19 + 32) = 1077936128;
      ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 906);
      v22 = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 900);
      v23 = v22;
      v24 = 0;
      if ( ActiveTaskByType )
      {
        v25 = 0;
        goto LABEL_53;
      }
      v25 = 0;
      if ( !v22 )
      {
LABEL_53:
        if ( v18 < 4.0
          && v55 >= 9
          && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
               *((_DWORD *)this + 2),
               a2,
               1,
               0) == 1 )
        {
          *((float *)this + 5) = v16;
          *((float *)this + 6) = v17;
          *((_DWORD *)this + 7) = 0;
          v4 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v44);
          CTaskSimpleStandStill::CTaskSimpleStandStill(v4, 10, 0, 0, 8.0);
          return v4;
        }
LABEL_57:
        v45 = *((_DWORD *)a2 + 292) & 0xFFFEFFFF;
        v46 = *((_DWORD *)a2 + 291);
        v47 = *((_DWORD *)a2 + 290);
        *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289);
        *((_DWORD *)a2 + 290) = v47;
        *((_DWORD *)a2 + 291) = v46;
        *((_DWORD *)a2 + 292) = v45 | (v25 << 16);
        v48 = (_DWORD *)*((_DWORD *)this + 3);
        v49 = v48[292] & 0xFFFEFFFF;
        v50 = v48[291];
        v51 = v48[290];
        v48[289] = v48[289];
        v48[290] = v51;
        v48[291] = v50;
        v48[292] = v49 | (v24 << 16);
        return (CTaskSimpleStandStill *)*((_DWORD *)this + 2);
      }
      operator*();
      v26 = *((_DWORD *)a2 + 5);
      v24 = 0;
      if ( v26 )
        v9 = (float *)(v26 + 48);
      if ( MoveStateFromGoToTask > 7 )
      {
        v25 = 0;
      }
      else
      {
        v25 = 0;
        if ( ((1 << MoveStateFromGoToTask) & 0xD0) != 0 )
        {
          v27 = *(float **)(*((_DWORD *)this + 3) + 20);
          v28 = v9[1];
          v29 = v27[4];
          v30 = v27[5];
          v31 = v27[6];
          v32.n64_f32[1] = (float)(*v9 * v29) + (float)(v28 * v30);
          v33.n64_f32[1] = (float)(v32.n64_f32[1] + (float)(v9[2] * v31))
                         - (float)((float)((float)(*(float *)&v56 * v29) + (float)(*((float *)&v56 + 1) * v30))
                                 + (float)(v57 * v31));
          if ( v33.n64_f32[1] < 0.0 )
          {
            v34 = (float)((float)((float)(*(float *)&v56 - *v9) * (float)(*(float *)&v56 - *v9))
                        + (float)((float)(*((float *)&v56 + 1) - v28) * (float)(*((float *)&v56 + 1) - v28)))
                + 0.0;
            if ( v53 && v34 < 2.0 )
            {
              *((float *)&v56 + 1) = (float)(v30 + v30) + *((float *)&v56 + 1);
              *(float *)&v56 = *(float *)&v56 + (float)(v29 + v29);
              v57 = (float)(v31 + v31) + v57;
            }
            if ( v53 && v34 < 0.0625 )
            {
              v32.n64_u32[0] = 1062836634;
              v33.n64_f32[0] = v53[9] + -0.0125;
              v35.n64_u64[0] = vmax_f32(v33, v32).n64_u64[0];
              v53[9] = v35.n64_f32[0];
              if ( v54 )
              {
                v32.n64_u32[0] = 1.25;
                v35.n64_f32[0] = v54[9] + 0.0125;
                *((_DWORD *)v54 + 9) = vmin_f32(v35, v32).n64_u32[0];
LABEL_45:
                v24 = 1;
                v25 = 1;
                goto LABEL_48;
              }
              goto LABEL_47;
            }
            if ( v53 && v34 > 0.0625 )
            {
              v32.n64_u32[0] = 1.25;
              v33.n64_f32[0] = v53[9] + 0.0125;
              v36.n64_u64[0] = vmin_f32(v33, v32).n64_u64[0];
              v53[9] = v36.n64_f32[0];
              if ( v54 )
              {
                v32.n64_u32[0] = 1062836634;
                v36.n64_f32[0] = v54[9] + -0.0125;
                *((_DWORD *)v54 + 9) = vmax_f32(v36, v32).n64_u32[0];
                goto LABEL_45;
              }
LABEL_47:
              v25 = 1;
              v24 = 0;
              goto LABEL_48;
            }
            if ( v53 )
            {
              v37 = v53[9];
              CPed::SetMoveAnimSpeed(a2, (CAnimBlendAssociation *)v53);
              v38 = v53[9];
              if ( fabsf(v37 - v38) >= 0.013 )
              {
                if ( v37 > v38 )
                  v39 = -0.0125;
                else
                  v39 = 0.0125;
                v37 = v37 + v39;
              }
              v53[9] = v37;
              if ( v54 )
              {
                v40 = v54[9];
                CPed::SetMoveAnimSpeed(*((CPed **)this + 3), (CAnimBlendAssociation *)v54);
                v41 = v54[9];
                if ( fabsf(v40 - v41) >= 0.013 )
                {
                  if ( v40 > v41 )
                    v42 = -0.0125;
                  else
                    v42 = 0.0125;
                  v40 = v40 + v42;
                }
                v54[9] = v40;
                goto LABEL_45;
              }
              goto LABEL_47;
            }
          }
          v24 = 0;
          v25 = 0;
        }
      }
LABEL_48:
      if ( *(float *)(v23 + 12) != *(float *)&v56
        || *(float *)(v23 + 16) != *((float *)&v56 + 1)
        || *(float *)(v23 + 20) != v57
        || *(float *)(v23 + 24) != 0.5 )
      {
        *(float *)(v23 + 20) = v57;
        *(_QWORD *)(v23 + 12) = v56;
        v43 = *(_BYTE *)(v23 + 28);
        *(_DWORD *)(v23 + 24) = 1056964608;
        *(_BYTE *)(v23 + 28) = v43 & 0xD0 | 0x20;
      }
      goto LABEL_53;
    }
  }
  else
  {
    v4 = 0;
    if ( !(*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
            *((_DWORD *)this + 2),
            a2,
            1,
            0) )
      return (CTaskSimpleStandStill *)*((_DWORD *)this + 2);
  }
  return v4;
}


// ============================================================

// Address: 0x5373cc
// Original: _ZNK28CTaskComplexWalkAlongsidePed5CloneEv
// Demangled: CTaskComplexWalkAlongsidePed::Clone(void)
int __fastcall CTaskComplexWalkAlongsidePed::Clone(CTaskComplexWalkAlongsidePed *this, unsigned int a2)
{
  int v3; // r5
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&dword_20, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)v3 = &off_66CE84;
  *(_DWORD *)(v3 + 12) = v4;
  CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 12));
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  return v3;
}


// ============================================================

// Address: 0x537414
// Original: _ZNK28CTaskComplexWalkAlongsidePed11GetTaskTypeEv
// Demangled: CTaskComplexWalkAlongsidePed::GetTaskType(void)
int __fastcall CTaskComplexWalkAlongsidePed::GetTaskType(CTaskComplexWalkAlongsidePed *this)
{
  return 1208;
}


// ============================================================

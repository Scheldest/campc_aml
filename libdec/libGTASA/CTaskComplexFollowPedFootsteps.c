
// Address: 0x1938ec
// Original: j__ZN30CTaskComplexFollowPedFootstepsC2EP4CPed
// Demangled: CTaskComplexFollowPedFootsteps::CTaskComplexFollowPedFootsteps(CPed *)
// attributes: thunk
void __fastcall CTaskComplexFollowPedFootsteps::CTaskComplexFollowPedFootsteps(
        CTaskComplexFollowPedFootsteps *this,
        CPed *a2)
{
  _ZN30CTaskComplexFollowPedFootstepsC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x545928
// Original: _ZN30CTaskComplexFollowPedFootstepsC2EP4CPed
// Demangled: CTaskComplexFollowPedFootsteps::CTaskComplexFollowPedFootsteps(CPed *)
void __fastcall CTaskComplexFollowPedFootsteps::CTaskComplexFollowPedFootsteps(
        CTaskComplexFollowPedFootsteps *this,
        CPed *a2)
{
  char v4; // r2
  CEntity **v5; // r1
  _DWORD *v6; // r0

  CTaskComplex::CTaskComplex(this);
  v4 = *((_BYTE *)this + 30);
  *(_DWORD *)this = &off_66D390;
  *((_DWORD *)this + 3) = a2;
  v5 = (CEntity **)((char *)this + 12);
  *((_DWORD *)this + 4) = CTimer::m_snTimeInMilliseconds;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_WORD *)this + 14) = 4;
  *((_BYTE *)this + 30) = v4 & 0xFE;
  if ( a2 )
    CEntity::RegisterReference(a2, v5);
  v6 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, (unsigned int)v5);
  *v6 = 0;
  *((_DWORD *)this + 6) = v6;
  if ( v6 )
    *v6 = 0;
}


// ============================================================

// Address: 0x545994
// Original: _ZN30CTaskComplexFollowPedFootstepsD2Ev
// Demangled: CTaskComplexFollowPedFootsteps::~CTaskComplexFollowPedFootsteps()
void __fastcall CTaskComplexFollowPedFootsteps::~CTaskComplexFollowPedFootsteps(CTaskComplexFollowPedFootsteps *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D390;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (void *)*((_DWORD *)this + 6);
  if ( v4 )
  {
    CPointRoute::operator delete(v4);
    *((_DWORD *)this + 6) = 0;
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5459cc
// Original: _ZN30CTaskComplexFollowPedFootstepsD0Ev
// Demangled: CTaskComplexFollowPedFootsteps::~CTaskComplexFollowPedFootsteps()
void __fastcall CTaskComplexFollowPedFootsteps::~CTaskComplexFollowPedFootsteps(CTaskComplexFollowPedFootsteps *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D390;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (void *)*((_DWORD *)this + 6);
  if ( v4 )
  {
    CPointRoute::operator delete(v4);
    *((_DWORD *)this + 6) = 0;
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x545a08
// Original: _ZN30CTaskComplexFollowPedFootsteps13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexFollowPedFootsteps::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexFollowPedFootsteps::MakeAbortable(
        CTaskComplexFollowPedFootsteps *this,
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

// Address: 0x545a14
// Original: _ZN30CTaskComplexFollowPedFootsteps13CreateSubTaskEiPK4CPed
// Demangled: CTaskComplexFollowPedFootsteps::CreateSubTask(int,CPed const*)
int __fastcall CTaskComplexFollowPedFootsteps::CreateSubTask(
        CTaskComplexFollowPedFootsteps *this,
        int a2,
        const CPed *a3)
{
  int v4; // r2
  int v5; // r0
  int v6; // r4
  int v8; // r6
  CEntity *v9; // r5
  float v10; // s0
  char v11; // r1
  double v12; // d16
  unsigned int v13; // r1
  int v14; // r2
  __int64 v15; // d16
  int v16; // r3
  double v17; // [sp+8h] [bp-20h] BYREF
  int v18; // [sp+10h] [bp-18h]

  v4 = *((_DWORD *)this + 3);
  if ( !v4 )
    return 0;
  v5 = *((_DWORD *)this + 6);
  v6 = 0;
  if ( v5 )
  {
    if ( a2 >= 900 )
    {
      if ( a2 == 900 )
      {
        v12 = *(double *)(v5 + 4);
        v18 = *(_DWORD *)(v5 + 12);
        v17 = v12;
        v13 = *(_DWORD *)v5;
        if ( *(int *)v5 < 2 )
        {
          v16 = v13 - 1;
        }
        else
        {
          v13 = v5 + 16;
          v14 = 0;
          do
          {
            v15 = *(_QWORD *)v13;
            ++v14;
            *(_DWORD *)(v13 - 4) = *(_DWORD *)(v13 + 8);
            *(_QWORD *)(v13 - 12) = v15;
            v13 += 12;
            v16 = *(_DWORD *)v5 - 1;
          }
          while ( v14 < v16 );
        }
        *(_DWORD *)v5 = v16;
        v6 = CTask::operator new((CTask *)&word_2C, v13);
        CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(
          (CTaskSimpleGoToPoint *)v6,
          *((__int16 *)this + 14),
          (const CVector *)&v17,
          0.01,
          0,
          0);
      }
      else if ( a2 == 907 )
      {
        v8 = *(_DWORD *)(v4 + 1156);
        v6 = CTask::operator new((CTask *)&dword_4C, 0x38Bu);
        v9 = (CEntity *)*((_DWORD *)this + 3);
        CTaskComplex::CTaskComplex((CTaskComplex *)v6);
        v10 = 1.0;
        if ( (v8 & 0x100) != 0 )
          v10 = 4.0;
        *(_DWORD *)v6 = &off_6656E4;
        *(_DWORD *)(v6 + 16) = 50000;
        *(_DWORD *)(v6 + 20) = 1000;
        *(_DWORD *)(v6 + 28) = 0x40000000;
        *(_DWORD *)(v6 + 32) = 0;
        *(_DWORD *)(v6 + 36) = 0x40000000;
        *(_WORD *)(v6 + 48) = 0;
        *(_WORD *)(v6 + 60) = 0;
        *(_DWORD *)(v6 + 40) = 0;
        *(_DWORD *)(v6 + 44) = 0;
        *(_DWORD *)(v6 + 52) = 0;
        *(_DWORD *)(v6 + 56) = 0;
        v11 = *(_BYTE *)(v6 + 72);
        *(_DWORD *)(v6 + 64) = &off_665720;
        *(_DWORD *)(v6 + 68) = 6;
        *(_BYTE *)(v6 + 72) = v11 & 0xF0 | 3;
        *(float *)(v6 + 24) = v10;
        *(_DWORD *)(v6 + 12) = v9;
        if ( v9 )
          CEntity::RegisterReference(v9, (CEntity **)(v6 + 12));
      }
    }
    else if ( a2 == 203 )
    {
      v6 = CTask::operator new((CTask *)&dword_20, 0xCBu);
      CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v6, 10000, 0, 0, 8.0);
    }
    else if ( a2 == 500 )
    {
      v6 = CTask::operator new((CTask *)&word_10, 0x1F4u);
      CTaskSimpleHitHead::CTaskSimpleHitHead((CTaskSimpleHitHead *)v6);
    }
  }
  return v6;
}


// ============================================================

// Address: 0x545b70
// Original: _ZN30CTaskComplexFollowPedFootsteps17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFollowPedFootsteps::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexFollowPedFootsteps::CreateNextSubTask(CTaskComplexFollowPedFootsteps *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  char *v8; // r0
  int v9; // r2
  int (__fastcall *v10)(CTaskComplexFollowPedFootsteps *, int, CPed *); // r3
  float32x2_t v11; // d16
  unsigned __int64 v12; // d1
  CTaskComplexFollowPedFootsteps *v13; // r0
  int v14; // r1
  _DWORD *v15; // r0
  bool v16; // zf
  int v17; // r0
  int v18; // r1

  if ( !*((_DWORD *)this + 3) )
    goto LABEL_17;
  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 < 500 )
  {
    if ( v4 != 203 )
      goto LABEL_17;
    goto LABEL_13;
  }
  if ( v4 == 500 )
    goto LABEL_19;
  if ( v4 == 900 )
  {
LABEL_13:
    v15 = (_DWORD *)*((_DWORD *)this + 6);
    v16 = v15 == 0;
    if ( v15 )
      v16 = *v15 == 0;
    if ( !v16 )
    {
      v17 = *(_DWORD *)this;
      v18 = 900;
      return (*(int (__fastcall **)(CTaskComplexFollowPedFootsteps *, int, CPed *))(v17 + 52))(this, v18, a2);
    }
LABEL_19:
    v10 = *(int (__fastcall **)(CTaskComplexFollowPedFootsteps *, int, CPed *))(*(_DWORD *)this + 52);
LABEL_20:
    v13 = this;
    v14 = 203;
    return v10(v13, v14, a2);
  }
  if ( v4 != 907 )
  {
LABEL_17:
    v17 = *(_DWORD *)this;
    v18 = 1302;
    return (*(int (__fastcall **)(CTaskComplexFollowPedFootsteps *, int, CPed *))(v17 + 52))(this, v18, a2);
  }
  v5 = *((_DWORD *)this + 3);
  v6 = *((_DWORD *)a2 + 5);
  v7 = *(_DWORD *)(v5 + 20);
  v8 = (char *)(v6 + 48);
  if ( !v6 )
    v8 = (char *)a2 + 4;
  v9 = v7 + 48;
  if ( !v7 )
    v9 = v5 + 4;
  v10 = *(int (__fastcall **)(CTaskComplexFollowPedFootsteps *, int, CPed *))(*(_DWORD *)this + 52);
  v11.n64_u64[0] = vsub_f32(*(float32x2_t *)(v9 + 4), *(float32x2_t *)(v8 + 4)).n64_u64[0];
  v12 = vmul_f32(v11, v11).n64_u64[0];
  if ( (float)((float)((float)((float)(*(float *)v9 - *(float *)v8) * (float)(*(float *)v9 - *(float *)v8))
                     + *(float *)&v12)
             + *((float *)&v12 + 1)) <= 1.4 )
    goto LABEL_20;
  v13 = this;
  v14 = 907;
  return v10(v13, v14, a2);
}


// ============================================================

// Address: 0x545c38
// Original: _ZN30CTaskComplexFollowPedFootsteps18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFollowPedFootsteps::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexFollowPedFootsteps::CreateFirstSubTask(CTaskComplexFollowPedFootsteps *this, CPed *a2)
{
  int v3; // r1
  int v4; // r3
  int v5; // lr
  char *v6; // r2
  int v7; // r3
  int v8; // r1
  float32x2_t v9; // d16
  unsigned __int64 v10; // d1

  v3 = *((_DWORD *)this + 3);
  if ( !v3 )
    return (*(int (__fastcall **)(CTaskComplexFollowPedFootsteps *, int, CPed *))(*(_DWORD *)this + 52))(this, 1302, a2);
  v4 = *((_DWORD *)a2 + 5);
  v5 = *(_DWORD *)(v3 + 20);
  v6 = (char *)(v4 + 48);
  if ( !v4 )
    v6 = (char *)a2 + 4;
  v7 = v5 + 48;
  if ( !v5 )
    v7 = v3 + 4;
  v8 = 203;
  v9.n64_u64[0] = vsub_f32(*(float32x2_t *)(v7 + 4), *(float32x2_t *)(v6 + 4)).n64_u64[0];
  v10 = vmul_f32(v9, v9).n64_u64[0];
  if ( (float)((float)((float)((float)(*(float *)v7 - *(float *)v6) * (float)(*(float *)v7 - *(float *)v6))
                     + *(float *)&v10)
             + *((float *)&v10 + 1)) > 1.4 )
    v8 = 907;
  return (*(int (__fastcall **)(CTaskComplexFollowPedFootsteps *, int, CPed *))(*(_DWORD *)this + 52))(this, v8, a2);
}


// ============================================================

// Address: 0x545cbc
// Original: _ZN30CTaskComplexFollowPedFootsteps14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFollowPedFootsteps::ControlSubTask(CPed *)
int __fastcall CTaskComplexFollowPedFootsteps::ControlSubTask(CTaskComplexFollowPedFootsteps *this, CPed *a2)
{
  CPed *v4; // r0
  int v5; // r8
  __int64 v6; // kr00_8
  int v7; // r4
  int v9; // r2
  int v10; // r1
  _DWORD *v11; // r11
  char *v12; // r9
  int v13; // r3
  CWorld *v14; // r0
  const CVector *v15; // r1
  char IsLineOfSightClear; // r0
  float *v17; // r3
  int v18; // r1
  float *v19; // r0
  float v20; // s20
  float v21; // s18
  float v22; // s0
  float v23; // s16
  float v24; // s22
  float v25; // s6
  float v26; // s24
  float v27; // s26
  _DWORD *v28; // r4
  int *v29; // r0
  int v30; // r2
  int *v31; // r1
  int v32; // r3
  __int64 *v33; // r4
  __int64 v34; // d16
  CTask *SimplestActiveTask; // r0
  const CTask *v36; // r1
  int v37; // r0
  int v38; // r2
  int v39; // r3
  __int64 *v40; // r1
  __int64 v41; // d16
  char v42; // r1
  int v43; // r0
  float *v44; // r1
  float v45; // s0
  float v46; // s4
  float v47; // s2
  float v48; // s10
  int v49; // r0
  float v50; // s10
  float v51; // s0
  float *v52; // r1
  int v53; // r1
  int v54; // r0
  float v55; // s2
  float *v56; // r1
  float v57; // s4
  int v58; // r2
  float v59; // s6
  float v60; // s0
  float v61; // s8
  float v62; // s12
  float v63; // s10
  __int64 v64; // r0
  int v65; // r3
  int v66; // r2
  float32x2_t v67; // d16
  unsigned __int64 v68; // d2
  bool v69; // [sp+14h] [bp-6Ch]
  float v70; // [sp+18h] [bp-68h] BYREF
  float v71; // [sp+1Ch] [bp-64h]
  float v72; // [sp+20h] [bp-60h]
  float v73; // [sp+24h] [bp-5Ch] BYREF
  float v74; // [sp+28h] [bp-58h]
  float v75; // [sp+2Ch] [bp-54h]

  v6 = *((_QWORD *)this + 1);
  v4 = (CPed *)*((_DWORD *)this + 3);
  v5 = v6;
  if ( !v4 || !*((_DWORD *)this + 6) || CPed::IsAlive(v4) != 1 )
  {
    v7 = 1302;
    goto LABEL_7;
  }
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 907 )
    return *((_DWORD *)this + 2);
  v9 = *((_DWORD *)this + 3);
  if ( !(*(unsigned __int8 *)(v9 + 1157) << 31) )
  {
    if ( *(int *)(*((_DWORD *)a2 + 272) + 632) > 30 )
    {
      v7 = 500;
      goto LABEL_7;
    }
    if ( (unsigned int)(CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 5)) <= 0x1F4 )
    {
      v12 = (char *)a2 + 4;
      v11 = (_DWORD *)((char *)a2 + 20);
    }
    else
    {
      *((_DWORD *)this + 5) = CTimer::m_snTimeInMilliseconds;
      v11 = (_DWORD *)((char *)a2 + 20);
      v10 = *((_DWORD *)a2 + 5);
      v12 = (char *)a2 + 4;
      v13 = *(_DWORD *)(v9 + 20);
      v14 = (CPed *)((char *)a2 + 4);
      if ( v10 )
        v14 = (CWorld *)(v10 + 48);
      v15 = (const CVector *)(v13 + 48);
      if ( !v13 )
        v15 = (const CVector *)(v9 + 4);
      IsLineOfSightClear = CWorld::GetIsLineOfSightClear(
                             v14,
                             v15,
                             (const CVector *)((char *)&stderr + 1),
                             0,
                             0,
                             1,
                             0,
                             0,
                             0,
                             v69);
      v9 = *((_DWORD *)this + 3);
      *((_BYTE *)this + 30) = IsLineOfSightClear | *((_BYTE *)this + 30) & 0xFE;
    }
    v17 = (float *)v12;
    v18 = *(_DWORD *)(v9 + 20);
    if ( *v11 )
      v17 = (float *)(*v11 + 48);
    v19 = (float *)(v18 + 48);
    if ( !v18 )
      v19 = (float *)(v9 + 4);
    v20 = *v19;
    v21 = v19[1];
    v22 = *v19 - *v17;
    v23 = v19[2];
    v24 = v23 - v17[2];
    v25 = (float)(v21 - v17[1]) * (float)(v21 - v17[1]);
    v74 = v21 - v17[1];
    v73 = v22;
    v75 = v24;
    v26 = (float)(v22 * v22) + v25;
    v27 = v26 + (float)(v24 * v24);
    if ( v27 < 1.96 && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 203 )
    {
      if ( !(*((unsigned __int8 *)this + 30) << 31) )
        return v5;
      v7 = 203;
      **((_DWORD **)this + 6) = 0;
      goto LABEL_7;
    }
    if ( v27 <= 64.0 && (sqrtf(v26) >= 1.0 || fabsf(v24) <= 2.0) )
    {
      if ( *((unsigned __int8 *)this + 30) << 31 )
      {
        **((_DWORD **)this + 6) = 0;
        v29 = (int *)*((_DWORD *)this + 6);
        if ( *v29 <= 7 )
        {
          v30 = *((_DWORD *)this + 3);
          v31 = &v29[3 * *v29];
          v32 = *(_DWORD *)(v30 + 20);
          v33 = (__int64 *)(v32 + 48);
          if ( !v32 )
            v33 = (__int64 *)(v30 + 4);
          v34 = *v33;
          v31[3] = *((_DWORD *)v33 + 2);
          *(_QWORD *)(v31 + 1) = v34;
          ++*v29;
        }
        *((_DWORD *)this + 4) = CTimer::m_snTimeInMilliseconds - 332;
        v28 = (_DWORD *)((char *)this + 16);
        SimplestActiveTask = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
        if ( CTask::IsGoToTask(SimplestActiveTask, v36) )
        {
          v37 = CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
          v38 = *((_DWORD *)this + 3);
          v39 = *(_DWORD *)(v38 + 20);
          v40 = (__int64 *)(v39 + 48);
          if ( !v39 )
            v40 = (__int64 *)(v38 + 4);
          if ( *(float *)(v37 + 12) != *(float *)v40
            || *(float *)(v37 + 16) != *((float *)v40 + 1)
            || *(float *)(v37 + 20) != *((float *)v40 + 2)
            || *(float *)(v37 + 24) != 0.5 )
          {
            v41 = *v40;
            *(_DWORD *)(v37 + 20) = *((_DWORD *)v40 + 2);
            *(_QWORD *)(v37 + 12) = v41;
            v42 = *(_BYTE *)(v37 + 28);
            *(_DWORD *)(v37 + 24) = 1056964608;
            *(_BYTE *)(v37 + 28) = v42 & 0xD0 | 0x20;
          }
        }
      }
      else
      {
        v28 = (_DWORD *)((char *)this + 16);
      }
      if ( (unsigned int)(CTimer::m_snTimeInMilliseconds - *v28) < 0xA6
        || (v43 = *((_DWORD *)this + 6), *(int *)v43 > 7) )
      {
        if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 203
          || **((int **)this + 6) <= 1 )
        {
          return v5;
        }
        v7 = 900;
        goto LABEL_7;
      }
      *v28 = CTimer::m_snTimeInMilliseconds;
      if ( *(_DWORD *)v43 )
      {
        v44 = (float *)(v43 + 12 * *(_DWORD *)v43);
        v45 = *(v44 - 2);
        v46 = *(v44 - 1);
        v47 = *v44;
        v48 = v23 - *v44;
        v74 = v21 - v46;
        v73 = v20 - v45;
        v75 = v48;
        if ( (float)((float)((float)((float)(v20 - v45) * (float)(v20 - v45))
                           + (float)((float)(v21 - v46) * (float)(v21 - v46)))
                   + (float)(v48 * v48)) <= 0.1225 )
          goto LABEL_59;
        if ( *(int *)v43 >= 2 )
        {
          v49 = v43 + 12 * *(_DWORD *)v43;
          v50 = *(float *)(v49 - 12);
          v51 = v45 - *(float *)(v49 - 20);
          v71 = v46 - *(float *)(v49 - 16);
          v70 = v51;
          v72 = v47 - v50;
          CVector::Normalise((CVector *)&v70);
          CVector::Normalise((CVector *)&v73);
          if ( (float)((float)((float)(v70 * v73) + (float)(v71 * v74)) + (float)(v72 * v75)) >= 0.95 )
            --**((_DWORD **)this + 6);
        }
        v43 = *((_DWORD *)this + 6);
        if ( *(int *)v43 > 7 )
          goto LABEL_59;
        v52 = (float *)(v43 + 12 * *(_DWORD *)v43);
        v52[1] = v20;
        v52[2] = v21;
        v52[3] = v23;
        v53 = *(_DWORD *)v43 + 1;
      }
      else
      {
        v53 = 1;
        *(float *)(v43 + 4) = v20;
        *(float *)(v43 + 8) = v21;
        *(float *)(v43 + 12) = v23;
      }
      *(_DWORD *)v43 = v53;
LABEL_59:
      v54 = *((_DWORD *)this + 6);
      if ( *(int *)v54 < 2 )
      {
        v60 = 0.0;
      }
      else
      {
        v55 = *(float *)(v54 + 4);
        v56 = (float *)(v54 + 16);
        v57 = *(float *)(v54 + 8);
        v58 = 1;
        v59 = *(float *)(v54 + 12);
        v60 = 0.0;
        do
        {
          ++v58;
          v61 = *v56 - v55;
          v62 = v56[2];
          v63 = v56[1] - v57;
          v56 += 3;
          v74 = v63;
          v73 = v61;
          v75 = v62 - v59;
          v60 = v60 + (float)((float)((float)(v61 * v61) + (float)(v63 * v63)) + (float)(v75 * v75));
        }
        while ( v58 < *(_DWORD *)v54 );
      }
      v64 = *((_QWORD *)this + 1);
      v65 = *(_DWORD *)(HIDWORD(v64) + 20);
      if ( *v11 )
        v12 = (char *)(*v11 + 48);
      v66 = v65 + 48;
      if ( !v65 )
        v66 = HIDWORD(v64) + 4;
      WORD2(v64) = 4;
      v67.n64_u64[0] = vsub_f32(*(float32x2_t *)(v12 + 4), *(float32x2_t *)(v66 + 4)).n64_u64[0];
      v68 = vmul_f32(v67, v67).n64_u64[0];
      if ( (float)(v60
                 + (float)((float)((float)((float)(*(float *)v12 - *(float *)v66)
                                         * (float)(*(float *)v12 - *(float *)v66))
                                 + *(float *)&v68)
                         + *((float *)&v68 + 1))) > 12.25 )
        WORD2(v64) = 6;
      *((_WORD *)this + 14) = WORD2(v64);
      if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v64 + 20))(v64) == 900 )
        *(_DWORD *)(*((_DWORD *)this + 2) + 8) = *((__int16 *)this + 14);
      return v5;
    }
  }
  v7 = 907;
LABEL_7:
  if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         1,
         0) == 1 )
    return (*(int (__fastcall **)(CTaskComplexFollowPedFootsteps *, int, CPed *))(*(_DWORD *)this + 52))(this, v7, a2);
  return v5;
}


// ============================================================

// Address: 0x546464
// Original: _ZNK30CTaskComplexFollowPedFootsteps5CloneEv
// Demangled: CTaskComplexFollowPedFootsteps::Clone(void)
int __fastcall CTaskComplexFollowPedFootsteps::Clone(CTaskComplexFollowPedFootsteps *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  char v5; // r3
  CEntity **v6; // r1
  _DWORD *v7; // r0

  v3 = CTask::operator new((CTask *)&dword_20, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  v5 = *(_BYTE *)(v3 + 30);
  *(_DWORD *)v3 = &off_66D390;
  *(_DWORD *)(v3 + 12) = v4;
  v6 = (CEntity **)(v3 + 12);
  *(_DWORD *)(v3 + 16) = CTimer::m_snTimeInMilliseconds;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_WORD *)(v3 + 28) = 4;
  *(_BYTE *)(v3 + 30) = v5 & 0xFE;
  if ( v4 )
    CEntity::RegisterReference(v4, v6);
  v7 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, (unsigned int)v6);
  *v7 = 0;
  *(_DWORD *)(v3 + 24) = v7;
  if ( v7 )
    *v7 = 0;
  return v3;
}


// ============================================================

// Address: 0x5464d8
// Original: _ZNK30CTaskComplexFollowPedFootsteps11GetTaskTypeEv
// Demangled: CTaskComplexFollowPedFootsteps::GetTaskType(void)
int __fastcall CTaskComplexFollowPedFootsteps::GetTaskType(CTaskComplexFollowPedFootsteps *this)
{
  return 936;
}


// ============================================================

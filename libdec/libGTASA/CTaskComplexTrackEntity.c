
// Address: 0x199cf8
// Original: j__ZN23CTaskComplexTrackEntity13CalcTargetPosEP4CPed
// Demangled: CTaskComplexTrackEntity::CalcTargetPos(CPed *)
// attributes: thunk
int __fastcall CTaskComplexTrackEntity::CalcTargetPos(CTaskComplexTrackEntity *this, CPed *a2)
{
  return _ZN23CTaskComplexTrackEntity13CalcTargetPosEP4CPed(this, a2);
}


// ============================================================

// Address: 0x517d00
// Original: _ZN23CTaskComplexTrackEntityC2EP7CEntity7CVectorhiffh
// Demangled: CTaskComplexTrackEntity::CTaskComplexTrackEntity(CEntity *,CVector,uchar,int,float,float,uchar)
int __fastcall CTaskComplexTrackEntity::CTaskComplexTrackEntity(
        int a1,
        CEntity *a2,
        int a3,
        int a4,
        int a5,
        char a6,
        int a7,
        int a8,
        int a9,
        char a10)
{
  CTaskComplex::CTaskComplex((CTaskComplex *)a1);
  *(_WORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 24) = a5;
  *(_DWORD *)(a1 + 20) = a4;
  *(_DWORD *)(a1 + 32) = a7;
  *(_DWORD *)(a1 + 36) = a8;
  *(_DWORD *)(a1 + 40) = a9;
  *(_BYTE *)(a1 + 28) = a6;
  *(_BYTE *)(a1 + 44) = a10;
  *(_DWORD *)a1 = &off_66BE2C;
  *(_DWORD *)(a1 + 12) = a2;
  CEntity::RegisterReference(a2, (CEntity **)(a1 + 12));
  *(_DWORD *)(a1 + 60) = -1082130432;
  return a1;
}


// ============================================================

// Address: 0x517d74
// Original: _ZN23CTaskComplexTrackEntityD2Ev
// Demangled: CTaskComplexTrackEntity::~CTaskComplexTrackEntity()
void __fastcall CTaskComplexTrackEntity::~CTaskComplexTrackEntity(CTaskComplexTrackEntity *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66BE2C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x517da0
// Original: _ZN23CTaskComplexTrackEntityD0Ev
// Demangled: CTaskComplexTrackEntity::~CTaskComplexTrackEntity()
void __fastcall CTaskComplexTrackEntity::~CTaskComplexTrackEntity(CTaskComplexTrackEntity *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66BE2C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x517dd0
// Original: _ZN23CTaskComplexTrackEntity13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexTrackEntity::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexTrackEntity::MakeAbortable(
        CTaskComplexTrackEntity *this,
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

// Address: 0x517ddc
// Original: _ZNK23CTaskComplexTrackEntity5CloneEv
// Demangled: CTaskComplexTrackEntity::Clone(void)
CTaskComplex *__fastcall CTaskComplexTrackEntity::Clone(CTaskComplexTrackEntity *this, unsigned int a2)
{
  unsigned int v3; // r0
  CTaskComplex *v4; // r0
  __int64 v5; // kr00_8
  CTaskComplex *v6; // r5
  __int64 v7; // r10
  int v8; // r8
  int v10; // [sp+4h] [bp-2Ch]
  char v11; // [sp+8h] [bp-28h]
  char v12; // [sp+Ch] [bp-24h]
  unsigned int v13; // [sp+10h] [bp-20h]

  if ( *((_BYTE *)this + 56) )
  {
    a2 = *((_DWORD *)this + 12) + *((_DWORD *)this + 13);
    v3 = a2 - CTimer::m_snTimeInMilliseconds;
  }
  else
  {
    v3 = *((_DWORD *)this + 8);
  }
  v13 = v3;
  v4 = (CTaskComplex *)CTask::operator new((CTask *)&dword_58, a2);
  v5 = *(_QWORD *)((char *)this + 12);
  v6 = v4;
  v7 = *(_QWORD *)((char *)this + 20);
  v12 = *((_BYTE *)this + 44);
  v11 = *((_BYTE *)this + 28);
  v8 = *((_DWORD *)this + 9);
  v10 = *((_DWORD *)this + 10);
  CTaskComplex::CTaskComplex(v4);
  *((_DWORD *)v6 + 4) = HIDWORD(v5);
  *(_QWORD *)((char *)v6 + 20) = v7;
  *((_DWORD *)v6 + 8) = v13;
  *((_DWORD *)v6 + 9) = v8;
  *((_DWORD *)v6 + 10) = v10;
  *((_WORD *)v6 + 28) = 0;
  *((_BYTE *)v6 + 28) = v11;
  *((_BYTE *)v6 + 44) = v12;
  *((_DWORD *)v6 + 12) = 0;
  *((_DWORD *)v6 + 13) = 0;
  *(_DWORD *)v6 = &off_66BE2C;
  *((_DWORD *)v6 + 3) = v5;
  CEntity::RegisterReference((CEntity *)v5, (CEntity **)v6 + 3);
  *((_DWORD *)v6 + 15) = -1082130432;
  *((_DWORD *)v6 + 15) = *((_DWORD *)this + 15);
  return v6;
}


// ============================================================

// Address: 0x517e84
// Original: _ZN23CTaskComplexTrackEntity17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexTrackEntity::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexTrackEntity::CreateNextSubTask(CTaskComplexTrackEntity *this, CPed *a2)
{
  int v3; // r0
  CTaskSimpleGoTo *v4; // r0
  int v5; // r5
  int v6; // r2
  int v7; // r3
  _DWORD *v8; // r0
  CTaskSimpleStandStill *v9; // r0
  CTaskComplexFollowNodeRoute *v10; // r0
  int v11; // r3
  int v12; // r5
  const CVector *v13; // r2
  _DWORD v14[5]; // [sp+14h] [bp-14h] BYREF

  if ( *((_DWORD *)this + 3) )
  {
    v3 = *((_DWORD *)this + 2);
    if ( v3 && (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 20))(v3) == 203 )
    {
      if ( *((float *)this + 20) >= (float)(*((float *)this + 9) * *((float *)this + 9)) )
      {
        v10 = (CTaskComplexFollowNodeRoute *)CTask::operator new((CTask *)&dword_60, (unsigned int)a2);
        v11 = *((_DWORD *)this + 3);
        v12 = *(_DWORD *)(v11 + 20);
        v13 = (const CVector *)(v12 + 48);
        if ( !v12 )
          v13 = (const CVector *)(v11 + 4);
        CTaskComplexFollowNodeRoute::CTaskComplexFollowNodeRoute(v10, 6, v13, 0.5, 0.2, 2.0, 0, -1, 1);
      }
      else
      {
        v4 = (CTaskSimpleGoTo *)CTask::operator new((CTask *)&dword_24, (unsigned int)a2);
        v5 = *((_DWORD *)this + 15);
        v6 = *((_DWORD *)this + 18);
        v7 = *((_DWORD *)this + 19);
        v14[0] = *((_DWORD *)this + 17);
        v14[1] = v6;
        v14[2] = v7;
        CTaskSimpleGoTo::CTaskSimpleGoTo(v4, 4, (const CVector *)v14, 0.25);
        v8[8] = v5;
        *v8 = &off_66BDF8;
      }
    }
    else
    {
      v9 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v9, 50, 0, 0, 8.0);
    }
  }
}


// ============================================================

// Address: 0x517f58
// Original: _ZN23CTaskComplexTrackEntity18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexTrackEntity::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexTrackEntity::CreateFirstSubTask(CTaskComplexTrackEntity *this, CPed *a2)
{
  int v2; // r2
  float v3; // s0

  if ( *((float *)this + 15) < 0.0 )
  {
    v2 = *((_DWORD *)a2 + 276);
    if ( v2 == 1 )
    {
      v3 = 0.0;
    }
    else if ( v2 == 4 )
    {
      v3 = 1.0;
    }
    else
    {
      v3 = 3.0;
      if ( v2 == 6 )
        v3 = 2.0;
    }
    *((float *)this + 15) = v3;
  }
  return (*(int (__fastcall **)(CTaskComplexTrackEntity *))(*(_DWORD *)this + 40))(this);
}


// ============================================================

// Address: 0x517f9c
// Original: _ZN23CTaskComplexTrackEntity14ControlSubTaskEP4CPed
// Demangled: CTaskComplexTrackEntity::ControlSubTask(CPed *)
int __fastcall CTaskComplexTrackEntity::ControlSubTask(CTaskComplexTrackEntity *this, CPed *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  float v6; // s0
  int v7; // r6
  float v8; // s0
  float v9; // s0
  float v11; // s2
  float v12; // s6
  float v13; // s0
  float v14; // s0
  float v15; // s2
  float v16; // s8
  float v17; // s0
  float v18; // r1
  float v19; // r2
  float v20; // r3
  int v21; // r0
  char v22; // r6
  float v23; // r1

  if ( !*((_DWORD *)this + 3)
    || *((_BYTE *)this + 56)
    && (!*((_BYTE *)this + 57)
      ? (v5 = *((_DWORD *)this + 12), v4 = CTimer::m_snTimeInMilliseconds)
      : (v4 = CTimer::m_snTimeInMilliseconds, *((_BYTE *)this + 57) = 0, *((_DWORD *)this + 12) = v4, v5 = v4),
        v5 + *((_DWORD *)this + 13) <= v4) )
  {
    v7 = 0;
    if ( !(*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
            *((_DWORD *)this + 2),
            a2,
            1,
            0) )
      return *((_DWORD *)this + 2);
    return v7;
  }
  CTaskComplexTrackEntity::CalcTargetPos(this, a2);
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 906 )
  {
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 926 )
    {
      v8 = *((float *)this + 20);
      if ( v8 >= (float)(*((float *)this + 9) * *((float *)this + 9)) )
      {
        if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
               *((_DWORD *)this + 2),
               a2,
               1,
               0) == 1 )
          return (*(int (__fastcall **)(CTaskComplexTrackEntity *, CPed *))(*(_DWORD *)this + 40))(this, a2);
        v8 = *((float *)this + 20);
      }
      if ( v8 >= 0.04 )
      {
        if ( v8 <= 25.0 )
        {
          v11 = sqrtf(v8);
          if ( v8 >= 1.0 )
            v9 = (float)((float)((float)(v11 + -1.0) * 0.25) * 0.5) + 0.5;
          else
            v9 = (float)((float)(v11 + -0.2) * 1.25) * 0.5;
        }
        else
        {
          v9 = 1.0;
        }
      }
      else
      {
        v9 = 0.0;
      }
      v12 = sqrtf(v9) * 3.0;
      v13 = v12;
      if ( v12 > 2.0 )
        v13 = 2.0;
      if ( !*((_BYTE *)this + 28) )
        v12 = v13;
      v14 = *((float *)this + 15);
      v15 = v12 - v14;
      v16 = v14 + 0.2;
      v17 = v12;
      if ( v15 > 0.2 )
        v17 = v16;
      v18 = *((float *)this + 17);
      v19 = *((float *)this + 18);
      v20 = *((float *)this + 19);
      v21 = *((_DWORD *)this + 2);
      *((float *)this + 15) = v17;
      *((float *)this + 16) = v12;
      if ( *(float *)(v21 + 12) == v18
        && *(float *)(v21 + 16) == v19
        && *(float *)(v21 + 20) == v20
        && *(float *)(v21 + 24) == 0.5 )
      {
        v23 = v17;
      }
      else
      {
        *(_DWORD *)(v21 + 24) = 1056964608;
        v22 = *(_BYTE *)(v21 + 28);
        *(float *)(v21 + 12) = v18;
        *(float *)(v21 + 16) = v19;
        *(float *)(v21 + 20) = v20;
        *(_BYTE *)(v21 + 28) = v22 & 0xD0 | 0x20;
        v23 = *((float *)this + 15);
      }
      *(float *)(v21 + 32) = v23;
    }
    return *((_DWORD *)this + 2);
  }
  v6 = *((float *)this + 20);
  if ( v6 <= (float)(*((float *)this + 10) * *((float *)this + 10)) )
  {
    if ( v6 < (float)(*((float *)this + 9) * *((float *)this + 9))
      && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) == 1 )
    {
      return (*(int (__fastcall **)(CTaskComplexTrackEntity *, CPed *))(*(_DWORD *)this + 40))(this, a2);
    }
    return *((_DWORD *)this + 2);
  }
  return 0;
}


// ============================================================

// Address: 0x518204
// Original: _ZN23CTaskComplexTrackEntity13CalcTargetPosEP4CPed
// Demangled: CTaskComplexTrackEntity::CalcTargetPos(CPed *)
int __fastcall CTaskComplexTrackEntity::CalcTargetPos(CTaskComplexTrackEntity *this, CPed *a2)
{
  CMatrix **v4; // r5
  CMatrix *v5; // r0
  CMatrix **v6; // r1
  __int64 v7; // d16
  CMatrix *v8; // r0
  int v9; // r1
  float *v10; // r0
  CMatrix **v11; // r6
  float *v12; // r1
  float *v13; // r0
  float v14; // s2
  float v15; // s0
  float v16; // s4
  float v17; // s18
  float v18; // s20
  float v19; // s16
  float v20; // s0
  float v21; // s4
  float v22; // s12
  float v23; // s14
  float v24; // s1
  float v25; // s3
  float v26; // s6
  float v27; // s2
  float v28; // s4
  int result; // r0
  float *v30; // r1

  v4 = (CMatrix **)*((_DWORD *)this + 3);
  v5 = v4[5];
  v6 = v4 + 1;
  if ( v5 )
    v6 = (CMatrix **)((char *)v5 + 48);
  v7 = *(_QWORD *)v6;
  v8 = v6[2];
  v9 = *((unsigned __int8 *)this + 44);
  *((_DWORD *)this + 19) = v8;
  *(_QWORD *)((char *)this + 68) = v7;
  if ( v9 )
  {
    v10 = (float *)v4[5];
    if ( v10 )
    {
      v11 = v4;
      v12 = (float *)v4[5];
    }
    else
    {
      CPlaceable::AllocateMatrix((CPlaceable *)v4);
      CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v4 + 1), v4[5]);
      v11 = (CMatrix **)*((_DWORD *)this + 3);
      v12 = (float *)v4[5];
      v10 = (float *)v11[5];
    }
    v17 = *v12;
    v18 = v12[1];
    v19 = v12[2];
    if ( !v10 )
    {
      CPlaceable::AllocateMatrix((CPlaceable *)v11);
      CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v11 + 1), v11[5]);
      v10 = (float *)v11[5];
      v11 = (CMatrix **)*((_DWORD *)this + 3);
    }
    v20 = *((float *)this + 4);
    v21 = *((float *)this + 5);
    v22 = v18 * v20;
    v23 = v10[4] * v21;
    v24 = v10[5] * v21;
    v25 = v10[6];
    v13 = (float *)((char *)this + 76);
    v14 = (float)(v19 * v20) + *((float *)this + 19);
    v16 = v25 * v21;
    v15 = v23 + (float)((float)(v17 * v20) + *((float *)this + 17));
    v26 = v24 + (float)(v22 + *((float *)this + 18));
    *((float *)this + 17) = v15;
    *((float *)this + 18) = v26;
    *((float *)this + 19) = v14;
  }
  else
  {
    v13 = (float *)((char *)this + 72);
    v11 = v4;
    v14 = *((float *)this + 5);
    v15 = *((float *)this + 4) + *((float *)this + 17);
    v16 = *((float *)this + 18);
    *((float *)this + 17) = v15;
  }
  *v13 = v16 + v14;
  if ( (*((_BYTE *)v11 + 58) & 6) == 2 )
  {
    v15 = (float)(*(float *)&CTimer::ms_fTimeStep * *((float *)v11 + 18)) + v15;
    v27 = (float)(*(float *)&CTimer::ms_fTimeStep * *((float *)v11 + 19)) + *((float *)this + 18);
    v28 = (float)(*(float *)&CTimer::ms_fTimeStep * *((float *)v11 + 20)) + *((float *)this + 19);
    *((float *)this + 17) = v15;
    *((float *)this + 18) = v27;
    *((float *)this + 19) = v28;
  }
  else
  {
    v27 = *((float *)this + 18);
  }
  result = *((_DWORD *)a2 + 5);
  v30 = (float *)(result + 48);
  if ( !result )
    v30 = (float *)((char *)a2 + 4);
  *((float *)this + 20) = (float)((float)((float)(v15 - *v30) * (float)(v15 - *v30))
                                + (float)((float)(v27 - v30[1]) * (float)(v27 - v30[1])))
                        + 0.0;
  return result;
}


// ============================================================

// Address: 0x51839c
// Original: _ZN23CTaskComplexTrackEntity13CalcMoveRatioEP4CPed
// Demangled: CTaskComplexTrackEntity::CalcMoveRatio(CPed *)
int __fastcall CTaskComplexTrackEntity::CalcMoveRatio(int this, CPed *a2)
{
  float v2; // s2
  float v3; // s0
  float v4; // s0
  float v5; // s0
  float v6; // s2
  float v7; // s2
  float v8; // s4
  float v9; // s2
  bool v10; // cc
  float v11; // s4

  v2 = *(float *)(this + 80);
  if ( v2 >= 0.04 )
  {
    if ( v2 <= 25.0 )
    {
      v4 = sqrtf(v2);
      if ( v2 >= 1.0 )
        v3 = (float)((float)((float)(v4 + -1.0) * 0.25) * 0.5) + 0.5;
      else
        v3 = (float)((float)(v4 + -0.2) * 1.25) * 0.5;
    }
    else
    {
      v3 = 1.0;
    }
  }
  else
  {
    v3 = 0.0;
  }
  v5 = sqrtf(v3) * 3.0;
  v6 = v5;
  if ( v5 > 2.0 )
    v6 = 2.0;
  if ( !*(_BYTE *)(this + 28) )
    v5 = v6;
  v7 = *(float *)(this + 60);
  v8 = v5 - v7;
  v9 = v7 + 0.2;
  v10 = v8 <= 0.2;
  v11 = v5;
  if ( !v10 )
    v11 = v9;
  *(float *)(this + 60) = v11;
  *(float *)(this + 64) = v5;
  return this;
}


// ============================================================

// Address: 0x518478
// Original: _ZN23CTaskComplexTrackEntity12SetOffsetPosE7CVector
// Demangled: CTaskComplexTrackEntity::SetOffsetPos(CVector)
_DWORD *__fastcall CTaskComplexTrackEntity::SetOffsetPos(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)(a1 + 16);
  *v4 = a2;
  v4[1] = a3;
  v4[2] = a4;
  return v4 + 3;
}


// ============================================================

// Address: 0x51847e
// Original: _ZN23CTaskComplexTrackEntity17GetDistToTargetSqEv
// Demangled: CTaskComplexTrackEntity::GetDistToTargetSq(void)
int __fastcall CTaskComplexTrackEntity::GetDistToTargetSq(CTaskComplexTrackEntity *this)
{
  return *((_DWORD *)this + 20);
}


// ============================================================

// Address: 0x51c43a
// Original: _ZNK23CTaskComplexTrackEntity11GetTaskTypeEv
// Demangled: CTaskComplexTrackEntity::GetTaskType(void)
int __fastcall CTaskComplexTrackEntity::GetTaskType(CTaskComplexTrackEntity *this)
{
  return 925;
}


// ============================================================


// Address: 0x5294a8
// Original: _ZN21CTaskInteriorGoToInfoC2EP14InteriorInfo_tP10Interior_ch
// Demangled: CTaskInteriorGoToInfo::CTaskInteriorGoToInfo(InteriorInfo_t *,Interior_c *,uchar)
int __fastcall CTaskInteriorGoToInfo::CTaskInteriorGoToInfo(CTaskComplex *a1, int a2, int a3, char a4)
{
  int result; // r0

  CTaskComplex::CTaskComplex(a1);
  *(_DWORD *)(result + 12) = a2;
  *(_DWORD *)(result + 16) = a3;
  *(_BYTE *)(result + 20) = a4;
  *(_DWORD *)result = &off_66C880;
  return result;
}


// ============================================================

// Address: 0x5294d4
// Original: _ZN21CTaskInteriorGoToInfoD2Ev
// Demangled: CTaskInteriorGoToInfo::~CTaskInteriorGoToInfo()
// attributes: thunk
void __fastcall CTaskInteriorGoToInfo::~CTaskInteriorGoToInfo(CTaskInteriorGoToInfo *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5294d8
// Original: _ZN21CTaskInteriorGoToInfoD0Ev
// Demangled: CTaskInteriorGoToInfo::~CTaskInteriorGoToInfo()
void __fastcall CTaskInteriorGoToInfo::~CTaskInteriorGoToInfo(CTaskInteriorGoToInfo *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x5294e8
// Original: _ZNK21CTaskInteriorGoToInfo5CloneEv
// Demangled: CTaskInteriorGoToInfo::Clone(void)
int __fastcall CTaskInteriorGoToInfo::Clone(CTaskInteriorGoToInfo *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  LOBYTE(this) = *((_BYTE *)this + 20);
  CTaskComplex::CTaskComplex(v3);
  *(_QWORD *)(result + 12) = v4;
  *(_BYTE *)(result + 20) = (_BYTE)this;
  *(_DWORD *)result = &off_66C880;
  return result;
}


// ============================================================

// Address: 0x52951c
// Original: _ZN21CTaskInteriorGoToInfo17CreateNextSubTaskEP4CPed
// Demangled: CTaskInteriorGoToInfo::CreateNextSubTask(CPed *)
void __fastcall CTaskInteriorGoToInfo::CreateNextSubTask(CTaskInteriorGoToInfo *this, CPed *a2)
{
  float32x2_t *v4; // r0
  unsigned int v5; // r1
  float32x2_t *v6; // r2
  float32x2_t v7; // d16
  unsigned __int64 v8; // d0
  CTaskComplexFollowNodeRoute *v9; // r0
  int v10; // r3
  double v11; // d16
  CGeneral *RadianAngleBetweenPoints; // r0
  float v13; // r1
  int v14; // r4
  unsigned int v15; // r1
  CTaskSimpleAchieveHeading *v16; // r0
  float v17; // [sp+0h] [bp-30h]
  double v18; // [sp+18h] [bp-18h] BYREF
  int v19; // [sp+20h] [bp-10h]

  if ( *((_DWORD *)this + 3)
    && ((*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 906
     || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 900) )
  {
    v4 = (float32x2_t *)*((_DWORD *)a2 + 5);
    v5 = *((_DWORD *)this + 3);
    v6 = v4 + 6;
    if ( !v4 )
      v6 = (float32x2_t *)((char *)a2 + 4);
    v7.n64_u64[0] = vsub_f32((float32x2_t)v6->n64_u64[0], *(float32x2_t *)(v5 + 4)).n64_u64[0];
    v8 = vmul_f32(v7, v7).n64_u64[0];
    if ( (float)((float)(*(float *)&v8 + *((float *)&v8 + 1)) + 0.0) <= 0.04 )
    {
      RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                               *(CGeneral **)(v5 + 16),
                                               *(float *)(v5 + 20),
                                               0.0,
                                               0.0,
                                               v17);
      v14 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v13);
      v16 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, v15);
      CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v16, *(float *)&v14, 0.5, 0.2);
    }
    else
    {
      v9 = (CTaskComplexFollowNodeRoute *)CTask::operator new((CTask *)&dword_60, v5);
      v10 = *((_DWORD *)this + 3);
      v11 = *(double *)(v10 + 4);
      v19 = *(_DWORD *)(v10 + 12);
      v18 = v11;
      CTaskComplexFollowNodeRoute::CTaskComplexFollowNodeRoute(v9, 4, (const CVector *)&v18, 0.2, 3.0, 2.0, 0, -1, 1);
    }
  }
}


// ============================================================

// Address: 0x529624
// Original: _ZN21CTaskInteriorGoToInfo18CreateFirstSubTaskEP4CPed
// Demangled: CTaskInteriorGoToInfo::CreateFirstSubTask(CPed *)
void __fastcall CTaskInteriorGoToInfo::CreateFirstSubTask(CTaskInteriorGoToInfo *this, CPed *a2)
{
  int v4; // r0
  int v5; // r5
  CGeneral *v6; // s0
  float v7; // s2
  __int64 v8; // kr00_8
  int v9; // r2
  _DWORD *v10; // r3
  unsigned int v11; // r1
  int PedsInterior; // r4
  int v13; // r0
  __int16 *v14; // r0
  signed int v15; // r1
  int v16; // s6
  CTaskComplexFollowNodeRoute *v17; // r0
  int v18; // r0
  CGeneral *RadianAngleBetweenPoints; // r0
  float v20; // r1
  int v21; // r1
  CMatrix *v22; // r0
  CTaskSimpleGoToPoint *v23; // r0
  int v24; // r1
  double v25; // d16
  float v26; // [sp+0h] [bp-30h]
  double v27; // [sp+18h] [bp-18h] BYREF
  float v28; // [sp+20h] [bp-10h]

  v4 = *((_DWORD *)this + 3);
  if ( v4 )
  {
    if ( *((_BYTE *)this + 20) )
    {
      v5 = *((_DWORD *)a2 + 5);
      v6 = *(CGeneral **)(v4 + 16);
      v7 = *(float *)(v4 + 20);
      v8 = *(_QWORD *)(v4 + 4);
      v9 = *(_DWORD *)(v4 + 12);
      if ( v5 )
      {
        *(_DWORD *)(v5 + 48) = v8;
        *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = HIDWORD(v8);
        v10 = (_DWORD *)(*((_DWORD *)a2 + 5) + 56);
      }
      else
      {
        *(_QWORD *)((char *)a2 + 4) = v8;
        v10 = (_DWORD *)((char *)a2 + 12);
      }
      *v10 = v9;
      RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(v6, v7, 0.0, 0.0, v26);
      v21 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v20);
      v22 = (CMatrix *)*((_DWORD *)a2 + 5);
      *((_DWORD *)a2 + 343) = v21;
      *((_DWORD *)a2 + 344) = v21;
      if ( v22 )
        CMatrix::SetRotateZOnly(v22, *(float *)&v21);
      else
        *((_DWORD *)a2 + 4) = v21;
    }
    else
    {
      PedsInterior = InteriorManager_c::GetPedsInterior((InteriorManager_c *)&g_interiorMan, a2);
      v13 = *((_DWORD *)this + 4);
      if ( PedsInterior == v13 )
      {
        v23 = (CTaskSimpleGoToPoint *)CTask::operator new((CTask *)&word_2C, v11);
        v24 = *((_DWORD *)this + 3);
        v25 = *(double *)(v24 + 4);
        v28 = *(float *)(v24 + 12);
        v27 = v25;
        CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(v23, 4, (const CVector *)&v27, 0.2, 0, 0);
      }
      else
      {
        v14 = (__int16 *)(ThePaths[(unsigned __int16)*(_DWORD *)(v13 + 1008) + 513]
                        + 28 * HIWORD(*(_DWORD *)(v13 + 1008)));
        v15 = v14[4];
        v16 = v14[6];
        *((float *)&v27 + 1) = (float)v14[5] * 0.125;
        *(float *)&v27 = (float)v15 * 0.125;
        v28 = (float)v16 * 0.125;
        v17 = (CTaskComplexFollowNodeRoute *)CTask::operator new((CTask *)&dword_60, v15);
        CTaskComplexFollowNodeRoute::CTaskComplexFollowNodeRoute(v17, 4, (const CVector *)&v27, 0.2, 3.0, 2.0, 0, -1, 1);
        *(_DWORD *)(v18 + 40) = *(_DWORD *)(PedsInterior + 1008);
      }
    }
  }
}


// ============================================================

// Address: 0x52979c
// Original: _ZN21CTaskInteriorGoToInfo14ControlSubTaskEP4CPed
// Demangled: CTaskInteriorGoToInfo::ControlSubTask(CPed *)
int __fastcall CTaskInteriorGoToInfo::ControlSubTask(CTaskInteriorGoToInfo *this, CPed *a2)
{
  if ( *((_DWORD *)this + 3) )
    return *((_DWORD *)this + 2);
  else
    return 0;
}


// ============================================================

// Address: 0x52afc8
// Original: _ZNK21CTaskInteriorGoToInfo11GetTaskTypeEv
// Demangled: CTaskInteriorGoToInfo::GetTaskType(void)
int __fastcall CTaskInteriorGoToInfo::GetTaskType(CTaskInteriorGoToInfo *this)
{
  return 1401;
}


// ============================================================

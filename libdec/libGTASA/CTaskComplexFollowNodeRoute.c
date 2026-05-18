
// Address: 0x18c784
// Original: j__ZN27CTaskComplexFollowNodeRoute16CalcGoToTaskTypeEP4CPedi
// Demangled: CTaskComplexFollowNodeRoute::CalcGoToTaskType(CPed *,int)
// attributes: thunk
int __fastcall CTaskComplexFollowNodeRoute::CalcGoToTaskType(CTaskComplexFollowNodeRoute *this, CPed *a2, int a3)
{
  return _ZN27CTaskComplexFollowNodeRoute16CalcGoToTaskTypeEP4CPedi(this, a2, a3);
}


// ============================================================

// Address: 0x18d6dc
// Original: j__ZN27CTaskComplexFollowNodeRoute16ComputePathNodesEPK4CPed
// Demangled: CTaskComplexFollowNodeRoute::ComputePathNodes(CPed const*)
// attributes: thunk
int __fastcall CTaskComplexFollowNodeRoute::ComputePathNodes(CTaskComplexFollowNodeRoute *this, const CPed *a2)
{
  return _ZN27CTaskComplexFollowNodeRoute16ComputePathNodesEPK4CPed(this, a2);
}


// ============================================================

// Address: 0x18e510
// Original: j__ZN27CTaskComplexFollowNodeRoute10CreateTaskEv
// Demangled: CTaskComplexFollowNodeRoute::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexFollowNodeRoute::CreateTask(CTaskComplexFollowNodeRoute *this)
{
  return _ZN27CTaskComplexFollowNodeRoute10CreateTaskEv(this);
}


// ============================================================

// Address: 0x18e880
// Original: j__ZN27CTaskComplexFollowNodeRoute17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFollowNodeRoute::CreateNextSubTask(CPed *)
// attributes: thunk
int __fastcall CTaskComplexFollowNodeRoute::CreateNextSubTask(CTaskComplexFollowNodeRoute *this, CPed *a2)
{
  return _ZN27CTaskComplexFollowNodeRoute17CreateNextSubTaskEP4CPed(this, a2);
}


// ============================================================

// Address: 0x18fb44
// Original: j__ZN27CTaskComplexFollowNodeRoute14CalcBlendRatioEP4CPedb
// Demangled: CTaskComplexFollowNodeRoute::CalcBlendRatio(CPed *,bool)
// attributes: thunk
int __fastcall CTaskComplexFollowNodeRoute::CalcBlendRatio(CTaskComplexFollowNodeRoute *this, CPed *a2, bool a3)
{
  return _ZN27CTaskComplexFollowNodeRoute14CalcBlendRatioEP4CPedb(this, a2, a3);
}


// ============================================================

// Address: 0x19130c
// Original: j__ZN27CTaskComplexFollowNodeRouteC2EiRK7CVectorfffbib
// Demangled: CTaskComplexFollowNodeRoute::CTaskComplexFollowNodeRoute(int,CVector const&,float,float,float,bool,int,bool)
// attributes: thunk
void __fastcall CTaskComplexFollowNodeRoute::CTaskComplexFollowNodeRoute(
        CTaskComplexFollowNodeRoute *this,
        int a2,
        const CVector *a3,
        float a4,
        float a5,
        float a6,
        bool a7,
        int a8,
        bool a9)
{
  _ZN27CTaskComplexFollowNodeRouteC2EiRK7CVectorfffbib(this, a2, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================

// Address: 0x1970f8
// Original: j__ZN27CTaskComplexFollowNodeRoute12ComputeRouteEv
// Demangled: CTaskComplexFollowNodeRoute::ComputeRoute(void)
// attributes: thunk
int __fastcall CTaskComplexFollowNodeRoute::ComputeRoute(CTaskComplexFollowNodeRoute *this)
{
  return _ZN27CTaskComplexFollowNodeRoute12ComputeRouteEv(this);
}


// ============================================================

// Address: 0x199db0
// Original: j__ZN27CTaskComplexFollowNodeRoute9SetTargetEPK4CPedRK7CVectorfffb
// Demangled: CTaskComplexFollowNodeRoute::SetTarget(CPed const*,CVector const&,float,float,float,bool)
// attributes: thunk
int __fastcall CTaskComplexFollowNodeRoute::SetTarget(
        CTaskComplexFollowNodeRoute *this,
        const CPed *a2,
        const CVector *a3,
        float a4,
        float a5,
        float a6,
        bool a7)
{
  return _ZN27CTaskComplexFollowNodeRoute9SetTargetEPK4CPedRK7CVectorfffb(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x4949b8
// Original: _ZN27CTaskComplexFollowNodeRoute10CreateTaskEv
// Demangled: CTaskComplexFollowNodeRoute::CreateTask(void)
void __fastcall CTaskComplexFollowNodeRoute::CreateTask(CTaskComplexFollowNodeRoute *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  int v8; // r2
  char v9; // r4
  int v10; // r2
  char v11; // r4
  int v12; // r2
  char v13; // r4
  int v14; // r2
  char v15; // r4
  int v16; // r2
  char v17; // r4
  unsigned int v18; // r1
  CTaskComplexFollowNodeRoute *v19; // r0
  bool v20; // r4
  _BOOL4 v21; // [sp+18h] [bp-30h] BYREF
  int v22; // [sp+1Ch] [bp-2Ch] BYREF
  int v23; // [sp+20h] [bp-28h] BYREF
  float v24; // [sp+24h] [bp-24h] BYREF
  float v25; // [sp+28h] [bp-20h] BYREF
  float v26; // [sp+2Ch] [bp-1Ch] BYREF
  _BYTE v27[12]; // [sp+30h] [bp-18h] BYREF
  int v28[3]; // [sp+3Ch] [bp-Ch] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v27, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v28, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v27, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v27, &byte_9[3], v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v26, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v26, byte_4, v6);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v25, (char *)&stderr + 2, v8);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v25, byte_4, v8);
  v11 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v24, (char *)&stderr + 2, v10);
    UseDataFence = v11;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v24, byte_4, v10);
  v13 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v23, (char *)&stderr + 2, v12);
    UseDataFence = v13;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v23, byte_4, v12);
  v15 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, (char *)&stderr + 2, v14);
    UseDataFence = v15;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, byte_4, v14);
  v17 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, (char *)&stderr + 2, v16);
    UseDataFence = v17;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, byte_4, v16);
  v19 = (CTaskComplexFollowNodeRoute *)CTask::operator new((CTask *)&dword_60, v18);
  v20 = v21;
  if ( v21 )
    v20 = 1;
  CTaskComplexFollowNodeRoute::CTaskComplexFollowNodeRoute(
    v19,
    v28[0],
    (const CVector *)v27,
    v26,
    v25,
    v24,
    v23 != 0,
    v22,
    v20);
}


// ============================================================

// Address: 0x51f354
// Original: _ZN27CTaskComplexFollowNodeRouteC2EiRK7CVectorfffbib
// Demangled: CTaskComplexFollowNodeRoute::CTaskComplexFollowNodeRoute(int,CVector const&,float,float,float,bool,int,bool)
void __fastcall CTaskComplexFollowNodeRoute::CTaskComplexFollowNodeRoute(
        CTaskComplexFollowNodeRoute *this,
        int a2,
        const CVector *a3,
        float a4,
        float a5,
        float a6,
        char a7,
        int a8,
        int a9)
{
  __int64 v13; // d16
  int v14; // r3
  _DWORD *v15; // r0
  unsigned int v16; // r1
  int v17; // r0

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)this = &off_66C278;
  v13 = *(_QWORD *)a3;
  v14 = *((unsigned __int8 *)this + 76);
  *((_DWORD *)this + 5) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 6) = a2;
  *((float *)this + 7) = a4;
  *((float *)this + 8) = a5;
  *((float *)this + 9) = a6;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = a8;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_WORD *)this + 20) = -1;
  *((_WORD *)this + 26) = -1;
  *((_WORD *)this + 36) = 0;
  *((_BYTE *)this + 76) = a7 | (8 * a9) | v14 & 0xF6;
  *(_QWORD *)((char *)this + 12) = v13;
  if ( a9 )
  {
    *((_BYTE *)this + 76) = (a7 | (8 * a9)) & 0x9F | v14 & 0x96;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  v15 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, v14 & 0xFFFFFFF6);
  *v15 = 0;
  *((_DWORD *)this + 12) = v15;
  v17 = CNodeRoute::operator new((CNodeRoute *)&dword_24, v16);
  *(_DWORD *)v17 = 0;
  *(_WORD *)(v17 + 4) = -1;
  *(_WORD *)(v17 + 8) = -1;
  *(_WORD *)(v17 + 12) = -1;
  *(_WORD *)(v17 + 16) = -1;
  *(_WORD *)(v17 + 20) = -1;
  *(_WORD *)(v17 + 24) = -1;
  *(_WORD *)(v17 + 28) = -1;
  *(_WORD *)(v17 + 32) = -1;
  *((_WORD *)this + 26) = -1;
  *((_DWORD *)this + 11) = v17;
  *((_DWORD *)this + 10) = EmptyNodeAddress;
}


// ============================================================

// Address: 0x51f420
// Original: _ZN27CTaskComplexFollowNodeRouteD2Ev
// Demangled: CTaskComplexFollowNodeRoute::~CTaskComplexFollowNodeRoute()
void __fastcall CTaskComplexFollowNodeRoute::~CTaskComplexFollowNodeRoute(CTaskComplexFollowNodeRoute *this)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)*((_DWORD *)this + 12);
  *(_DWORD *)this = &off_66C278;
  if ( v2 )
    CPointRoute::operator delete(v2);
  v3 = (void *)*((_DWORD *)this + 11);
  if ( v3 )
    CNodeRoute::operator delete(v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x51f454
// Original: _ZN27CTaskComplexFollowNodeRouteD0Ev
// Demangled: CTaskComplexFollowNodeRoute::~CTaskComplexFollowNodeRoute()
void __fastcall CTaskComplexFollowNodeRoute::~CTaskComplexFollowNodeRoute(CTaskComplexFollowNodeRoute *this)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0

  v2 = (void *)*((_DWORD *)this + 12);
  *(_DWORD *)this = &off_66C278;
  if ( v2 )
    CPointRoute::operator delete(v2);
  v3 = (void *)*((_DWORD *)this + 11);
  if ( v3 )
    CNodeRoute::operator delete(v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x51f48c
// Original: _ZN27CTaskComplexFollowNodeRoute9StopTimerEPK6CEvent
// Demangled: CTaskComplexFollowNodeRoute::StopTimer(CEvent const*)
int __fastcall CTaskComplexFollowNodeRoute::StopTimer(CTaskComplexFollowNodeRoute *this, const CEvent *a2)
{
  int result; // r0
  __int64 v4; // kr00_8

  result = CEventHandler::IsTemporaryEvent(a2, a2);
  if ( !result )
  {
    result = *((unsigned __int8 *)this + 72);
    if ( *((_BYTE *)this + 72) )
    {
      v4 = *((_QWORD *)this + 8);
      *((_BYTE *)this + 73) = 1;
      result = HIDWORD(v4) - CTimer::m_snTimeInMilliseconds + v4;
      *((_DWORD *)this + 17) = result;
    }
  }
  return result;
}


// ============================================================

// Address: 0x51f4c4
// Original: _ZN27CTaskComplexFollowNodeRoute13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexFollowNodeRoute::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexFollowNodeRoute::MakeAbortable(
        CTaskComplexFollowNodeRoute *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v4; // r10
  int v9; // r0
  char *v10; // r0
  int v11; // r9
  int v12; // r0
  float v13; // r3
  bool v14; // zf
  bool v15; // zf
  int v16; // r0
  int v17; // r1
  float *v18; // r2
  float *v19; // r0

  if ( !a4 || *((_DWORD *)this + 14) + 1 == **((_DWORD **)this + 12) )
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             a3,
             a4);
  v9 = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4);
  if ( v9 == 1 )
  {
    v10 = (char *)a4 + 20;
  }
  else
  {
    if ( v9 != 56 )
    {
      v11 = 0;
      goto LABEL_9;
    }
    v10 = (char *)a4 + 16;
  }
  v11 = *(_DWORD *)v10;
LABEL_9:
  v12 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v14 = v12 == 926;
  if ( v12 != 926 )
    v14 = v12 == 900;
  if ( v14 )
  {
    v15 = v11 == 0;
    if ( v11 )
    {
      v4 = *((_DWORD *)this + 2);
      v15 = v4 == 0;
    }
    if ( !v15
      && (float)((float)((float)(*(float *)(v11 + 72) * *(float *)(v11 + 72))
                       + (float)(*(float *)(v11 + 76) * *(float *)(v11 + 76)))
               + (float)(*(float *)(v11 + 80) * *(float *)(v11 + 80))) < 0.015625
      && CPedGeometryAnalyser::IsEntityBlockingTarget(
           (CPedGeometryAnalyser *)v11,
           (CEntity *)(v4 + 12),
           *(const CVector **)(v4 + 24),
           v13) == 1 )
    {
      v16 = *(_DWORD *)(v11 + 20);
      v17 = *((_DWORD *)a2 + 5);
      v18 = (float *)(v16 + 48);
      if ( !v16 )
        v18 = (float *)(v11 + 4);
      v19 = (float *)(v17 + 48);
      if ( !v17 )
        v19 = (float *)((char *)a2 + 4);
      *(float *)(v4 + 24) = sqrtf(
                              (float)((float)(*v19 - *v18) * (float)(*v19 - *v18))
                            + (float)((float)(v19[1] - v18[1]) * (float)(v19[1] - v18[1])));
    }
  }
  return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x51f5d4
// Original: _ZN27CTaskComplexFollowNodeRoute9SetTargetEPK4CPedRK7CVectorfffb
// Demangled: CTaskComplexFollowNodeRoute::SetTarget(CPed const*,CVector const&,float,float,float,bool)
int __fastcall CTaskComplexFollowNodeRoute::SetTarget(
        CTaskComplexFollowNodeRoute *this,
        const CPed *a2,
        const CVector *a3,
        float a4,
        float a5,
        float a6,
        int a7)
{
  int result; // r0
  char v9; // r0
  __int64 v10; // d16

  result = a7;
  if ( a7
    || *((float *)this + 3) != *(float *)a3
    || *((float *)this + 4) != *((float *)a3 + 1)
    || *((float *)this + 5) != *((float *)a3 + 2)
    || *((float *)this + 7) != a4
    || *((float *)this + 8) != a5
    || *((float *)this + 9) != a6 )
  {
    v9 = *((_BYTE *)this + 76);
    v10 = *(_QWORD *)a3;
    *((_DWORD *)this + 5) = *((_DWORD *)a3 + 2);
    *((float *)this + 7) = a4;
    *((float *)this + 8) = a5;
    *((float *)this + 9) = a6;
    *(_QWORD *)((char *)this + 12) = v10;
    if ( (v9 & 8) != 0 )
    {
      *((_BYTE *)this + 76) = v9 & 0x9F | 0x40;
      *((_QWORD *)this + 10) = 0LL;
      *((_QWORD *)this + 11) = 0LL;
    }
    CTaskComplexFollowNodeRoute::ComputePathNodes(this, a2);
    CTaskComplexFollowNodeRoute::ComputeRoute(this);
    result = *((unsigned __int8 *)this + 76) | 4;
    *((_BYTE *)this + 76) = result;
  }
  return result;
}


// ============================================================

// Address: 0x51f6a0
// Original: _ZN27CTaskComplexFollowNodeRoute16ComputePathNodesEPK4CPed
// Demangled: CTaskComplexFollowNodeRoute::ComputePathNodes(CPed const*)
int *__fastcall CTaskComplexFollowNodeRoute::ComputePathNodes(CTaskComplexFollowNodeRoute *this, const CPed *a2)
{
  float32x2_t *v4; // r5
  float v5; // r0
  float v6; // s0
  float32x2_t *v7; // r1
  char *v8; // r8
  float32x2_t *v9; // r0
  int16x4_t v10; // d16
  unsigned __int64 v11; // d1
  float32x2_t *v12; // r2
  int v13; // r0
  float *v14; // r1
  int *v15; // r0
  int v16; // r2
  float v17; // s0
  unsigned int v18; // r3
  int v19; // r2
  float32x2_t v20; // d16
  unsigned __int64 v21; // d2
  float v22; // s0
  float v23; // s2
  float v24; // s4
  unsigned int v25; // r3
  int v26; // r2
  float32x2_t v27; // d16
  unsigned __int64 v28; // d2
  int PedsInteriorGroup; // r0
  int v30; // r9
  int v31; // r1
  bool v32; // zf
  int PedsInterior; // r5
  __int16 *v34; // r0
  int v35; // s6
  int v36; // s2
  int VectorsInterior; // r0
  bool v38; // zf
  int v39; // r10
  int v40; // r2
  int v41; // r10
  unsigned int v42; // r0
  int v43; // r1
  __int16 *v44; // r0
  float v45; // s2
  bool v46; // cc
  int v47; // r2
  int *v48; // r0
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // r6
  int v53; // r3
  int v54; // r1
  int *result; // r0
  int v56; // r2
  int *v57; // r6
  bool *v58; // [sp+0h] [bp-50h]
  CEntity **v59; // [sp+4h] [bp-4Ch]
  CVector *v60; // [sp+Ch] [bp-44h]
  float v61; // [sp+10h] [bp-40h] BYREF
  float v62; // [sp+14h] [bp-3Ch]
  float v63; // [sp+18h] [bp-38h]
  char v64[49]; // [sp+1Fh] [bp-31h] BYREF

  **((_DWORD **)this + 11) = 0;
  v64[0] = 0;
  v4 = (float32x2_t *)((char *)this + 12);
  v5 = COERCE_FLOAT(
         CWorld::FindGroundZFor3DCoord(
           *((CWorld **)this + 3),
           *((float *)this + 4),
           *((float *)this + 5) + 1.0,
           COERCE_FLOAT(v64),
           0,
           v59));
  if ( v64[0] )
  {
    v6 = v5 + 1.0;
    *((float *)this + 5) = v5 + 1.0;
  }
  else
  {
    v6 = *((float *)this + 5);
  }
  v7 = (float32x2_t *)*((_DWORD *)a2 + 5);
  v8 = (char *)a2 + 4;
  v9 = (float32x2_t *)((char *)a2 + 4);
  if ( v7 )
    v9 = v7 + 6;
  v10.n64_u64[0] = vsub_f32((float32x2_t)v9->n64_u64[0], (float32x2_t)v4->n64_u64[0]).n64_u64[0];
  v11 = vmul_f32(v10, v10).n64_u64[0];
  if ( sqrtf(
         (float)(*(float *)&v11 + *((float *)&v11 + 1))
       + (float)((float)(v9[1].n64_f32[0] - v6) * (float)(v9[1].n64_f32[0] - v6))) <= *(float *)(*((_DWORD *)a2 + 272)
                                                                                               + 204) )
  {
    if ( (*((_DWORD *)a2 + 292) & 0x8000) != 0
      || CPedGeometryAnalyser::IsWanderPathClear(
           (CPedGeometryAnalyser *)v9,
           (const CVector *)v4,
           *((const CVector **)this + 9),
           COERCE_FLOAT(4),
           (int)v58) == 4 )
    {
      goto LABEL_12;
    }
    v7 = (float32x2_t *)*((_DWORD *)a2 + 5);
  }
  v12 = (float32x2_t *)((char *)a2 + 4);
  if ( v7 )
    v12 = v7 + 6;
  CPathFind::ComputeRoute((int)ThePaths, 1, (int)v12, (int)v4, (int)this + 40, *((_DWORD *)this + 11));
  *((_DWORD *)this + 10) = EmptyNodeAddress;
LABEL_12:
  v13 = *((_DWORD *)a2 + 5);
  v14 = (float *)((char *)a2 + 4);
  if ( v13 )
    v14 = (float *)(v13 + 48);
  v15 = (int *)*((_DWORD *)this + 11);
  v16 = *v15;
  v17 = fabsf(v14[2] - *((float *)this + 5));
  if ( v17 >= *((float *)this + 9) )
  {
    if ( v16 < 1 )
      goto LABEL_27;
  }
  else
  {
    if ( v16 < 1 )
      goto LABEL_27;
    if ( !(*((unsigned __int8 *)this + 76) << 31) )
    {
      if ( *((unsigned __int16 *)v15 + 2) != 0xFFFF )
      {
        v18 = v15[1];
        v19 = ThePaths[(unsigned __int16)v18 + 513];
        if ( v19 )
        {
          v10.n64_u32[0] = *(_DWORD *)(v19 + 28 * HIWORD(v18) + 8);
          v20.n64_u64[0] = vsub_f32(
                             (float32x2_t)v4->n64_u64[0],
                             vmul_f32(
                               vcvt_f32_s32((int32x2_t)vmovl_s16(v10).n128_u64[0]),
                               (float32x2_t)0x3E0000003E000000LL)).n64_u64[0];
          v21 = vmul_f32(v20, v20).n64_u64[0];
          v22 = sqrtf(
                  (float)((float)((float)(v4->n64_f32[0] - *v14) * (float)(v4->n64_f32[0] - *v14))
                        + (float)((float)(v4->n64_f32[1] - v14[1]) * (float)(v4->n64_f32[1] - v14[1])))
                + 0.0);
          v23 = (float)(*(float *)&v21 + *((float *)&v21 + 1)) + 0.0;
          v24 = 3.0;
          goto LABEL_25;
        }
      }
      goto LABEL_27;
    }
  }
  if ( !(*((unsigned __int8 *)this + 76) << 31) && *((unsigned __int16 *)v15 + 2) != 0xFFFF )
  {
    v25 = v15[1];
    v26 = ThePaths[(unsigned __int16)v25 + 513];
    if ( v26 )
    {
      v10.n64_u32[0] = *(_DWORD *)(v26 + 28 * HIWORD(v25) + 8);
      v27.n64_u64[0] = vsub_f32(
                         (float32x2_t)v4->n64_u64[0],
                         vmul_f32(
                           vcvt_f32_s32((int32x2_t)vmovl_s16(v10).n128_u64[0]),
                           (float32x2_t)0x3E0000003E000000LL)).n64_u64[0];
      v28 = vmul_f32(v27, v27).n64_u64[0];
      v22 = sqrtf(
              (float)((float)((float)(v4->n64_f32[0] - *v14) * (float)(v4->n64_f32[0] - *v14))
                    + (float)((float)(v4->n64_f32[1] - v14[1]) * (float)(v4->n64_f32[1] - v14[1])))
            + 0.0);
      v23 = (float)(*(float *)&v28 + *((float *)&v28 + 1)) + 0.0;
      v24 = 50.0;
LABEL_25:
      v17 = v22 + v24;
      if ( sqrtf(v23) > v17 )
        *v15 = 0;
    }
  }
LABEL_27:
  v60 = (CVector *)v4;
  PedsInteriorGroup = InteriorManager_c::GetPedsInteriorGroup((InteriorManager_c *)&g_interiorMan, a2);
  v30 = *((_DWORD *)this + 11);
  v31 = *(_DWORD *)v30;
  if ( PedsInteriorGroup )
  {
    v32 = v31 == 0;
    if ( v31 )
      v32 = *(unsigned __int16 *)(v30 + 4) == 0xFFFF;
    if ( !v32 && ThePaths[*(unsigned __int16 *)(v30 + 4) + 513] )
    {
      PedsInterior = InteriorManager_c::GetPedsInterior((InteriorManager_c *)&g_interiorMan, a2);
      v34 = (__int16 *)(ThePaths[(unsigned __int16)*(_DWORD *)(v30 + 4) + 513] + 28 * HIWORD(*(_DWORD *)(v30 + 4)));
      v35 = v34[4];
      v36 = v34[6];
      v62 = (float)v34[5] * 0.125;
      v61 = (float)v35 * 0.125;
      v63 = (float)((float)v36 * 0.125) + 1.0;
      VectorsInterior = InteriorManager_c::GetVectorsInterior((InteriorManager_c *)&g_interiorMan, (CVector *)&v61);
      v38 = PedsInterior == 0;
      v39 = VectorsInterior;
      if ( PedsInterior )
        v38 = PedsInterior == VectorsInterior;
      if ( v38 )
      {
        if ( !PedsInterior && VectorsInterior && !CPathFind::These2NodesAreAdjacent() )
        {
          **((_DWORD **)this + 11) = 0;
          v47 = *((_DWORD *)a2 + 5);
          if ( v47 )
            v8 = (char *)(v47 + 48);
          CPathFind::ComputeRoute((int)ThePaths, 1, (int)v60, (int)v8, v39 + 1008, *((_DWORD *)this + 11));
          v48 = (int *)*((_DWORD *)this + 11);
          v49 = *v48;
          if ( *v48 >= 2 )
          {
            v50 = 1;
            do
            {
              v51 = v48[v50];
              v48[v50] = v48[v49];
              v52 = v49 - 2;
              v48[v49--] = v51;
              v46 = v50++ < v52;
            }
            while ( v46 );
          }
        }
      }
      else if ( !CPathFind::These2NodesAreAdjacent() )
      {
        **((_DWORD **)this + 11) = 0;
        v40 = *((_DWORD *)a2 + 5);
        if ( v40 )
          v8 = (char *)(v40 + 48);
        CPathFind::ComputeRoute((int)ThePaths, 1, (int)v8, (int)v60, PedsInterior + 1008, *((_DWORD *)this + 11));
      }
    }
    goto LABEL_62;
  }
  if ( v31 < 1 )
    goto LABEL_62;
  v41 = 1;
  while ( 1 )
  {
    v42 = *(_DWORD *)(v30 + 4 * v41);
    if ( (unsigned __int16)v42 != 0xFFFF )
    {
      v43 = ThePaths[(unsigned __int16)v42 + 513];
      if ( v43 )
      {
        v44 = (__int16 *)(v43 + 28 * HIWORD(v42));
        v17 = (float)v44[4] * 0.125;
        v45 = (float)v44[6] * 0.125;
        v62 = (float)v44[5] * 0.125;
        v61 = v17;
        v63 = v45;
      }
    }
    v63 = v63 + 1.0;
    v17 = sqrtf(
            (float)((float)((float)(v17 - *((float *)this + 3)) * (float)(v17 - *((float *)this + 3)))
                  + (float)((float)(v62 - *((float *)this + 4)) * (float)(v62 - *((float *)this + 4))))
          + (float)((float)(v63 - *((float *)this + 5)) * (float)(v63 - *((float *)this + 5))));
    if ( v17 > *(float *)(*((_DWORD *)a2 + 272) + 204) )
      goto LABEL_48;
    if ( (*((_DWORD *)a2 + 292) & 0x8000) != 0
      || CPedGeometryAnalyser::IsWanderPathClear(
           (CPedGeometryAnalyser *)&v61,
           (const CVector *)v4,
           *((const CVector **)this + 9),
           COERCE_FLOAT(4),
           (int)v58) == 4 )
    {
      break;
    }
    v30 = *((_DWORD *)this + 11);
LABEL_48:
    v46 = v41++ < *(_DWORD *)v30;
    if ( !v46 )
      goto LABEL_62;
  }
  if ( v41 - 1 <= 7 )
    **((_DWORD **)this + 11) = v41;
LABEL_62:
  v53 = *((unsigned __int16 *)this + 26);
  v54 = 0;
  result = (int *)*((_DWORD *)this + 11);
  *((_DWORD *)this + 14) = 0;
  if ( v53 == 0xFFFF )
  {
LABEL_63:
    *((_DWORD *)this + 14) = v54;
    v56 = *result;
LABEL_70:
    if ( v56 >= 1 )
    {
      result = (int *)result[v54 + 1];
      *((_DWORD *)this + 13) = result;
    }
  }
  else
  {
    v56 = *result;
    if ( *result >= 1 )
    {
      v54 = 0;
      while ( 1 )
      {
        v57 = &result[v54];
        if ( v53 == *((unsigned __int16 *)v57 + 2) && *((unsigned __int16 *)this + 27) == *((unsigned __int16 *)v57 + 3) )
          goto LABEL_63;
        if ( ++v54 >= v56 )
        {
          v54 = 0;
          goto LABEL_70;
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x51fc20
// Original: _ZN27CTaskComplexFollowNodeRoute12ComputeRouteEv
// Demangled: CTaskComplexFollowNodeRoute::ComputeRoute(void)
int __fastcall CTaskComplexFollowNodeRoute::ComputeRoute(int this)
{
  int *v1; // r1
  int v2; // r12
  int i; // r2
  unsigned int v4; // r4
  int v5; // r5
  int *v6; // r1
  float *v7; // r3
  __int16 *v8; // r4
  int v9; // r6
  float v10; // s6
  int *v11; // r1
  __int64 v12; // d16
  int *v13; // r2
  char v14; // r1

  **(_DWORD **)(this + 48) = 0;
  v1 = *(int **)(this + 44);
  v2 = *v1;
  if ( *v1 >= 1 )
  {
    for ( i = 1; ; ++i )
    {
      v4 = v1[i];
      v5 = ThePaths[(unsigned __int16)v4 + 513];
      if ( v5 )
      {
        v6 = *(int **)(this + 48);
        if ( *v6 <= 7 )
        {
          v7 = (float *)&v6[3 * *v6];
          v8 = (__int16 *)(v5 + 28 * HIWORD(v4));
          v9 = v8[5];
          v10 = (float)v8[6] * 0.125;
          v7[1] = (float)v8[4] * 0.125;
          v7[2] = (float)v9 * 0.125;
          v7[3] = v10;
          ++*v6;
        }
      }
      if ( v2 == i )
        break;
      v1 = *(int **)(this + 44);
    }
  }
  v11 = *(int **)(this + 48);
  if ( *v11 > 7 )
  {
    v14 = 0;
  }
  else
  {
    v12 = *(_QWORD *)(this + 12);
    v13 = &v11[3 * *v11];
    v13[3] = *(_DWORD *)(this + 20);
    *(_QWORD *)(v13 + 1) = v12;
    ++*v11;
    v14 = 2;
  }
  *(_BYTE *)(this + 76) = v14 | *(_BYTE *)(this + 76) & 0xFD;
  return this;
}


// ============================================================

// Address: 0x51fd00
// Original: _ZN27CTaskComplexFollowNodeRoute12GetRouteSizeEv
// Demangled: CTaskComplexFollowNodeRoute::GetRouteSize(void)
int __fastcall CTaskComplexFollowNodeRoute::GetRouteSize(CTaskComplexFollowNodeRoute *this)
{
  int v1; // r0

  v1 = *((_DWORD *)this + 12);
  if ( v1 )
    return *(_DWORD *)v1;
  else
    return 0;
}


// ============================================================

// Address: 0x51fd0c
// Original: _ZN27CTaskComplexFollowNodeRoute16CalcGoToTaskTypeEP4CPedi
// Demangled: CTaskComplexFollowNodeRoute::CalcGoToTaskType(CPed *,int)
int __fastcall CTaskComplexFollowNodeRoute::CalcGoToTaskType(CTaskComplexFollowNodeRoute *this, CPed *a2, int a3)
{
  int v4; // r2
  char v5; // r0
  int *v6; // r0
  int v7; // r3
  int v8; // r6
  int v9; // r2
  float *v10; // r1
  float *v11; // r3
  int *v12; // r3
  int v13; // r6
  int v14; // r6
  float v15; // s0
  float *v16; // r0
  float v17; // s4
  float v18; // s2
  _DWORD *v19; // r0
  int v20; // r1
  int v21; // r3
  _DWORD *v22; // r0
  float *v23; // r2
  float *v24; // r0
  float v25; // s6
  float v26; // s2
  float v27; // s0
  float v28; // s0
  float v29; // s0
  int v30; // r0
  float v31; // s2
  float v32; // s4
  float v33; // s0
  char v34; // r0
  float v36; // [sp+0h] [bp-28h] BYREF
  float v37; // [sp+4h] [bp-24h]
  float v38; // [sp+8h] [bp-20h]
  float v39; // [sp+Ch] [bp-1Ch] BYREF
  float v40; // [sp+10h] [bp-18h]
  float v41; // [sp+14h] [bp-14h]

  if ( a3 == 900 )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = *((_BYTE *)this + 76) & 0xEF;
    *((_DWORD *)this + 23) = *((_DWORD *)this + 22);
    *((_BYTE *)this + 76) = v5;
    if ( v4 >= 5 )
    {
      v6 = (int *)*((_DWORD *)this + 12);
      v7 = *((_DWORD *)this + 14);
      v8 = *v6;
      v9 = v7;
      if ( v7 >= *v6 )
        v9 = v8 - 1;
      if ( v9 < 0 )
        return 900;
      if ( v8 == 1 )
      {
        v10 = (float *)(v6 + 2);
        v11 = (float *)(v6 + 1);
      }
      else if ( v7 )
      {
        v12 = &v6[3 * v7];
        v10 = (float *)(v12 - 1);
        v11 = (float *)(v12 - 2);
      }
      else
      {
        v13 = *((_DWORD *)a2 + 5);
        v11 = (float *)(v13 + 48);
        if ( !v13 )
          v11 = (float *)((char *)a2 + 4);
        v10 = v11 + 1;
      }
      v14 = 3 * v9;
      v15 = *v10;
      v16 = (float *)&v6[3 * v9];
      v17 = v16[2];
      v18 = v16[1] - *v11;
      v41 = 0.0;
      v40 = v17 - v15;
      v39 = v18;
      CVector::Normalise((CVector *)&v39);
      v19 = (_DWORD *)*((_DWORD *)this + 12);
      v20 = 0;
      if ( *v19 != 1 )
      {
        v21 = *((_DWORD *)this + 14);
        v20 = v21 + 1;
        if ( v21 + 1 >= *v19 )
          v20 = v21 - 1;
      }
      v22 = v19 + 1;
      v23 = (float *)&v22[v14];
      v24 = (float *)&v22[3 * v20];
      v25 = v24[1];
      v26 = v23[1];
      v27 = *v24 - *v23;
      v38 = 0.0;
      v37 = v25 - v26;
      v36 = v27;
      CVector::Normalise((CVector *)&v36);
      v28 = (float)((float)(v39 * v36) + (float)(v40 * v37)) + (float)(v41 * v38);
      if ( v28 >= 0.707 )
      {
        v5 = *((_BYTE *)this + 76) & 0xEF;
      }
      else
      {
        v29 = (float)((float)(v28 + 1.0) / -1.707) + 1.0;
        if ( v29 >= 0.0 )
        {
          if ( v29 > 1.0 )
            v29 = 1.0;
        }
        else
        {
          v29 = 0.0;
        }
        v30 = *((_DWORD *)this + 6);
        v31 = 1.5;
        v32 = 4.0;
        if ( v30 == 7 )
          v31 = 3.0;
        v33 = v29 * v31;
        if ( v30 == 7 )
          v32 = 5.0;
        v34 = *((_BYTE *)this + 76);
        *((float *)this + 20) = v32;
        *((float *)this + 21) = v32;
        v5 = v34 | 0x10;
        *((float *)this + 22) = v33;
      }
      *((_BYTE *)this + 76) = v5;
    }
    a3 = 926;
    *((_BYTE *)this + 76) = v5 & 0x9F | (2 * (v5 & 0x20));
    if ( (v5 & 0x20) == 0 )
      return 900;
  }
  return a3;
}


// ============================================================

// Address: 0x51fed8
// Original: _ZN27CTaskComplexFollowNodeRoute15GetLastWaypointEP4CPed
// Demangled: CTaskComplexFollowNodeRoute::GetLastWaypoint(CPed *)
int __fastcall CTaskComplexFollowNodeRoute::GetLastWaypoint(int this, CPed *a2, int a3)
{
  int v3; // r12
  int v4; // r1
  __int64 v5; // d16
  int v6; // r1
  int v7; // r1
  __int64 v8; // d16
  int v9; // r1
  __int64 *v10; // r3

  v3 = *((_DWORD *)a2 + 12);
  if ( *(_DWORD *)v3 == 1 )
  {
    v4 = *(_DWORD *)(v3 + 12);
    v5 = *(_QWORD *)(v3 + 4);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 14);
    if ( v6 )
    {
      v7 = 3 * v6;
      v8 = *(_QWORD *)(v3 + 4 * v7 - 8);
      *(_DWORD *)(this + 8) = *(_DWORD *)(v3 + 4 * v7);
      *(_QWORD *)this = v8;
      return this;
    }
    v9 = *(_DWORD *)(a3 + 20);
    v10 = (__int64 *)(v9 + 48);
    if ( !v9 )
      v10 = (__int64 *)(a3 + 4);
    v5 = *v10;
    v4 = *((_DWORD *)v10 + 2);
  }
  *(_DWORD *)(this + 8) = v4;
  *(_QWORD *)this = v5;
  return this;
}


// ============================================================

// Address: 0x51ff24
// Original: _ZN27CTaskComplexFollowNodeRoute15GetNextWaypointEP4CPed
// Demangled: CTaskComplexFollowNodeRoute::GetNextWaypoint(CPed *)
int __fastcall CTaskComplexFollowNodeRoute::GetNextWaypoint(int this, CPed *a2)
{
  int v2; // r2
  int v3; // r1
  __int64 v4; // d16
  int v5; // r12
  int v6; // r1
  __int64 v7; // d16

  v2 = *((_DWORD *)a2 + 12);
  if ( *(_DWORD *)v2 == 1 )
  {
    v3 = *(_DWORD *)(v2 + 12);
    v4 = *(_QWORD *)(v2 + 4);
LABEL_5:
    *(_DWORD *)(this + 8) = v3;
    *(_QWORD *)this = v4;
    return this;
  }
  v5 = *((_DWORD *)a2 + 14);
  if ( v5 + 1 < *(_DWORD *)v2 )
  {
    v6 = v2 + 12 * (v5 + 1);
    v4 = *(_QWORD *)(v6 + 4);
    v3 = *(_DWORD *)(v6 + 12);
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v2 + 12 * v5 - 8);
  *(_DWORD *)(this + 8) = *(_DWORD *)(v2 + 12 * v5);
  *(_QWORD *)this = v7;
  return this;
}


// ============================================================

// Address: 0x51ff6e
// Original: _ZN27CTaskComplexFollowNodeRoute14GetSubTaskTypeEibRK11CPointRoute
// Demangled: CTaskComplexFollowNodeRoute::GetSubTaskType(int,bool,CPointRoute const&)
int __fastcall CTaskComplexFollowNodeRoute::GetSubTaskType(
        CTaskComplexFollowNodeRoute *this,
        int a2,
        CTaskComplexFollowNodeRoute **a3,
        const CPointRoute *a4)
{
  int result; // r0
  CTaskComplexFollowNodeRoute *v5; // r1
  CTaskComplexFollowNodeRoute *v6; // r2

  if ( a2 != 1 )
    return 900;
  v5 = *a3;
  if ( *a3 == this )
    return 1302;
  v6 = (CTaskComplexFollowNodeRoute *)((char *)this + 1);
  result = 900;
  if ( v6 == v5 )
    return 903;
  return result;
}


// ============================================================

// Address: 0x51ff94
// Original: _ZNK27CTaskComplexFollowNodeRoute13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexFollowNodeRoute::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexFollowNodeRoute::CreateSubTask(CTaskComplexFollowNodeRoute *this, int a2, CVehicle **a3)
{
  int v5; // r4
  int v6; // r6
  int v7; // r8
  int v8; // r5
  char v9; // r2
  char v10; // r3
  int v11; // r0
  __int64 v12; // d16
  CTaskComplex *v13; // r0
  float v14; // s16
  __int64 v15; // kr00_8
  int v16; // r9
  int v17; // r5
  char v18; // r1
  float v19; // s0
  char v20; // r0
  float *v21; // r1
  float *v22; // r1
  __int64 v23; // d16

  v5 = 0;
  if ( a2 < 900 )
  {
    if ( a2 == 203 )
    {
      v5 = CTask::operator new((CTask *)&dword_20, 0xCBu);
      CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v5, 0, 0, 0, 8.0);
      (*((void (__fastcall **)(CVehicle **, _DWORD, _DWORD, _DWORD, _DWORD))*a3 + 15))(
        a3,
        *((_DWORD *)this + 3),
        *((_DWORD *)this + 4),
        *((_DWORD *)this + 5),
        0);
    }
    else if ( a2 == 704 )
    {
      v5 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, a3[356], 0, 0, 1, 0);
    }
  }
  else
  {
    switch ( a2 )
    {
      case 926:
        v5 = CTask::operator new((CTask *)&dword_24, 0x39Eu);
        CTaskSimpleGoToPointFine::BaseRatio();
        CTaskSimpleGoToPointFine::CTaskSimpleGoToPointFine();
        break;
      case 903:
        v13 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, 0x387u);
        v14 = *((float *)this + 8);
        v5 = (int)v13;
        v15 = *((_QWORD *)this + 3);
        v16 = *((_DWORD *)this + 12);
        v17 = *((_DWORD *)this + 14);
        CTaskComplex::CTaskComplex(v13);
        *(_DWORD *)(v5 + 12) = v15;
        v18 = *(_BYTE *)(v5 + 36);
        v19 = *(float *)(v5 + 16);
        *(_DWORD *)v5 = &off_66C14C;
        v20 = v18 & 0xE4;
        *(_BYTE *)(v5 + 36) = v18 & 0xE4;
        v21 = (float *)(v16 + 12 * v17);
        if ( v19 != v21[1]
          || *(float *)(v5 + 20) != v21[2]
          || *(float *)(v5 + 24) != v21[3]
          || *(float *)(v5 + 32) != v14 )
        {
          v22 = v21 + 1;
          v23 = *(_QWORD *)v22;
          *(float *)(v5 + 24) = v22[2];
          *(_QWORD *)(v5 + 16) = v23;
          *(float *)(v5 + 32) = v14;
          *(_DWORD *)(v5 + 28) = HIDWORD(v15);
          *(_BYTE *)(v5 + 36) = v20 | 4;
        }
        break;
      case 900:
        v5 = CTask::operator new((CTask *)&word_2C, 0x384u);
        v6 = *((_DWORD *)this + 6);
        v7 = *((_DWORD *)this + 12);
        v8 = *((_DWORD *)this + 14);
        CTaskSimple::CTaskSimple((CTaskSimple *)v5);
        *(_DWORD *)(v5 + 8) = v6;
        *(_DWORD *)v5 = &off_66C0B0;
        v9 = *(_BYTE *)(v5 + 28);
        v10 = *(_BYTE *)(v5 + 29);
        v11 = v7 + 12 * v8;
        v12 = *(_QWORD *)(v11 + 4);
        *(_DWORD *)(v5 + 20) = *(_DWORD *)(v11 + 12);
        *(_DWORD *)v5 = &off_66C0E4;
        *(_DWORD *)(v5 + 24) = 1056964608;
        *(_BYTE *)(v5 + 29) = v10 & 0xE0;
        *(_BYTE *)(v5 + 28) = v9 & 0xC0;
        *(_QWORD *)(v5 + 12) = v12;
        break;
    }
  }
  return v5;
}


// ============================================================

// Address: 0x52016c
// Original: _ZN27CTaskComplexFollowNodeRoute18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFollowNodeRoute::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexFollowNodeRoute::CreateFirstSubTask(CTaskComplexFollowNodeRoute *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  char v6; // r0
  char v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3

  v4 = *((_DWORD *)this + 15);
  if ( v4 >= 0 )
  {
    v5 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 72) = 1;
    *((_DWORD *)this + 16) = v5;
    *((_DWORD *)this + 17) = v4;
  }
  v6 = *((_BYTE *)this + 76);
  if ( (v6 & 8) != 0 )
  {
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
  {
    v9 = 704;
  }
  else
  {
    if ( (v6 & 8) != 0 )
    {
      *((_BYTE *)this + 76) = v6 & 0x9F | 0x40;
      *((_QWORD *)this + 10) = 0LL;
      *((_QWORD *)this + 11) = 0LL;
    }
    CTaskComplexFollowNodeRoute::ComputePathNodes(this, a2);
    CTaskComplexFollowNodeRoute::ComputeRoute(this);
    v7 = *((_BYTE *)this + 76);
    v8 = *((_DWORD *)this + 14);
    *((_BYTE *)this + 76) = v7 & 0xFB;
    if ( (v7 & 2) == 0 )
    {
      v9 = 900;
      if ( (v7 & 8) == 0 )
        return CTaskComplexFollowNodeRoute::CreateSubTask(this, v9, (CVehicle **)a2);
      goto LABEL_18;
    }
    v10 = **((_DWORD **)this + 12);
    if ( v10 == v8 )
    {
      v9 = 1302;
      if ( (v7 & 8) == 0 )
        return CTaskComplexFollowNodeRoute::CreateSubTask(this, v9, (CVehicle **)a2);
      goto LABEL_18;
    }
    v9 = 900;
    if ( v8 + 1 == v10 )
      v9 = 903;
    if ( (v7 & 8) != 0 )
LABEL_18:
      v9 = CTaskComplexFollowNodeRoute::CalcGoToTaskType(this, a2, v9);
  }
  return CTaskComplexFollowNodeRoute::CreateSubTask(this, v9, (CVehicle **)a2);
}


// ============================================================

// Address: 0x520234
// Original: _ZN27CTaskComplexFollowNodeRoute17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFollowNodeRoute::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexFollowNodeRoute::CreateNextSubTask(CTaskComplexFollowNodeRoute *this, CVehicle **a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  int v6; // r0
  char v7; // r0
  int v8; // r1
  int v10; // r0
  int v11; // r1
  _DWORD *v12; // r0
  int v13; // r2
  char v14; // r0
  int v15; // r2
  CTaskComplexFollowNodeRoute *v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3

  if ( *((_BYTE *)this + 72) )
  {
    if ( *((_BYTE *)this + 73) )
    {
      v4 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 73) = 0;
      *((_DWORD *)this + 16) = v4;
      v5 = v4;
    }
    else
    {
      v5 = *((_DWORD *)this + 16);
      v4 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v5 + *((_DWORD *)this + 17) <= v4
      && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 203 )
    {
      (*((void (__fastcall **)(CVehicle **, _DWORD, _DWORD, _DWORD, _DWORD))*a2 + 15))(
        a2,
        *((_DWORD *)this + 3),
        *((_DWORD *)this + 4),
        *((_DWORD *)this + 5),
        0);
      return 0;
    }
  }
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 704 )
  {
    if ( *((unsigned __int8 *)a2 + 1157) << 31 )
      return 0;
    v6 = *(_DWORD *)this;
    return (*(int (__fastcall **)(CTaskComplexFollowNodeRoute *, CVehicle **))(v6 + 44))(this, a2);
  }
  v7 = *((_BYTE *)this + 76);
  if ( (v7 & 2) != 0 )
  {
    v10 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
    if ( v10 != 926 )
    {
      if ( v10 == 903 )
      {
        v11 = *((_DWORD *)this + 14);
        v14 = *((_BYTE *)this + 76);
        v13 = v11 + 1;
        *((_DWORD *)this + 14) = v11 + 1;
        if ( (v14 & 2) == 0 )
          goto LABEL_23;
        goto LABEL_30;
      }
      if ( v10 != 900 )
        return 0;
    }
    v11 = *((_DWORD *)this + 14);
    v12 = (_DWORD *)*((_DWORD *)this + 11);
    v13 = v11 + 1;
    *((_DWORD *)this + 14) = v11 + 1;
    if ( v11 + 1 < *v12 )
      *((_DWORD *)this + 13) = v12[v13 + 1];
    v14 = *((_BYTE *)this + 76);
    if ( (v14 & 2) == 0 )
    {
LABEL_23:
      v15 = 900;
      if ( (v14 & 8) == 0 )
      {
LABEL_25:
        v16 = this;
        v17 = v15;
        return CTaskComplexFollowNodeRoute::CreateSubTask(v16, v17, a2);
      }
LABEL_24:
      v15 = CTaskComplexFollowNodeRoute::CalcGoToTaskType(this, (CPed *)a2, v15);
      goto LABEL_25;
    }
LABEL_30:
    v19 = **((_DWORD **)this + 12);
    if ( v19 == v13 )
    {
      v15 = 1302;
      if ( (v14 & 8) == 0 )
        goto LABEL_25;
    }
    else
    {
      v15 = 900;
      if ( v11 + 2 == v19 )
        v15 = 903;
      if ( (v14 & 8) == 0 )
        goto LABEL_25;
    }
    goto LABEL_24;
  }
  v8 = *((_DWORD *)this + 14) + 1;
  if ( v8 == **((_DWORD **)this + 12) )
  {
    if ( (*((_BYTE *)this + 76) & 8) != 0 )
    {
      *((_BYTE *)this + 76) = v7 & 0x9F | 0x40;
      *((_QWORD *)this + 10) = 0LL;
      *((_QWORD *)this + 11) = 0LL;
    }
    CTaskComplexFollowNodeRoute::ComputePathNodes(this, (const CPed *)a2);
    CTaskComplexFollowNodeRoute::ComputeRoute(this);
    v6 = *(_DWORD *)this;
    *((_BYTE *)this + 76) |= 4u;
    return (*(int (__fastcall **)(CTaskComplexFollowNodeRoute *, CVehicle **))(v6 + 44))(this, a2);
  }
  v18 = *((_DWORD *)this + 11);
  *((_DWORD *)this + 14) = v8;
  *((_DWORD *)this + 13) = *(_DWORD *)(v18 + 4 * v8 + 4);
  if ( (v7 & 8) != 0 )
    v17 = CTaskComplexFollowNodeRoute::CalcGoToTaskType(this, (CPed *)a2, 900);
  else
    v17 = 900;
  v16 = this;
  return CTaskComplexFollowNodeRoute::CreateSubTask(v16, v17, a2);
}


// ============================================================

// Address: 0x5203d0
// Original: _ZN27CTaskComplexFollowNodeRoute14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFollowNodeRoute::ControlSubTask(CPed *)
int __fastcall CTaskComplexFollowNodeRoute::ControlSubTask(CTaskComplexFollowNodeRoute *this, CPed *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  char v7; // r0
  float v8; // r1
  unsigned int v9; // r1
  int v10; // r6
  CTaskSimpleGoToPointFine *v11; // r5
  int v12; // r0
  unsigned int v13; // r1
  int v14; // r5
  int v15; // r8
  int v16; // r4
  char v17; // r2
  char v18; // r3
  int v19; // r0
  __int64 v20; // d16
  float v21; // r5
  int v22; // r0
  CTaskSimpleGoToPointFine *v23; // r0

  if ( (*((_BYTE *)this + 76) & 4) != 0
    && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 704 )
  {
    return (*(int (__fastcall **)(CTaskComplexFollowNodeRoute *, CPed *))(*(_DWORD *)this + 44))(this, a2);
  }
  if ( *((_BYTE *)this + 72) )
  {
    if ( *((_BYTE *)this + 73) )
    {
      v4 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 73) = 0;
      *((_DWORD *)this + 16) = v4;
      v5 = v4;
    }
    else
    {
      v5 = *((_DWORD *)this + 16);
      v4 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v5 + *((_DWORD *)this + 17) <= v4
      && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 203 )
    {
      if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             1,
             0) == 1 )
      {
        v10 = CTask::operator new((CTask *)&dword_20, v9);
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v10, 0, 0, 0, 8.0);
        (*(void (__fastcall **)(CPed *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a2 + 60))(
          a2,
          *((_DWORD *)this + 3),
          *((_DWORD *)this + 4),
          *((_DWORD *)this + 5),
          0);
        return v10;
      }
      return *((_DWORD *)this + 2);
    }
  }
  v7 = *((_BYTE *)this + 76);
  if ( (v7 & 8) == 0 )
    return *((_DWORD *)this + 2);
  if ( (*((_BYTE *)this + 76) & 0x20) != 0 )
  {
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 926 )
    {
      v8 = COERCE_FLOAT(CTaskComplexFollowNodeRoute::CalcBlendRatio(this, a2, 1));
      if ( v8 < 0.0 )
        v8 = COERCE_FLOAT(CTaskSimpleGoToPointFine::BaseRatio());
      goto LABEL_22;
    }
    v7 = *((_BYTE *)this + 76);
  }
  if ( (v7 & 0x40) == 0 || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 926 )
  {
LABEL_23:
    if ( (*((_BYTE *)this + 76) & 0x30) == 0x10
      && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 903 )
    {
      v21 = COERCE_FLOAT(CTaskComplexFollowNodeRoute::CalcBlendRatio(this, a2, 1));
      if ( v21 >= 0.0 )
      {
        v22 = *((_DWORD *)this + 2);
        *((_BYTE *)this + 76) = *((_BYTE *)this + 76) & 0x8F | 0x20;
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 20))(v22) != 926 )
        {
          v10 = CTask::operator new((CTask *)&dword_24, 0x39Eu);
          CTaskSimpleGoToPointFine::BaseRatio();
          v23 = (CTaskSimpleGoToPointFine *)CTaskSimpleGoToPointFine::CTaskSimpleGoToPointFine();
          CTaskSimpleGoToPointFine::SetMoveRatio(v23, v21);
          return v10;
        }
        CTaskSimpleGoToPointFine::SetMoveRatio(*((CTaskSimpleGoToPointFine **)this + 2), v21);
      }
    }
    return *((_DWORD *)this + 2);
  }
  v8 = COERCE_FLOAT(CTaskComplexFollowNodeRoute::CalcBlendRatio(this, a2, 0));
  if ( v8 >= 0.0 )
  {
LABEL_22:
    CTaskSimpleGoToPointFine::SetMoveRatio(*((CTaskSimpleGoToPointFine **)this + 2), v8);
    goto LABEL_23;
  }
  v11 = (CTaskSimpleGoToPointFine *)*((_DWORD *)this + 2);
  *((_BYTE *)this + 76) &= ~0x40u;
  v12 = CTaskSimpleGoToPointFine::BaseRatio();
  CTaskSimpleGoToPointFine::SetMoveRatio(v11, *(float *)&v12);
  v10 = CTask::operator new((CTask *)&word_2C, v13);
  v14 = *((_DWORD *)this + 6);
  v15 = *((_DWORD *)this + 12);
  v16 = *((_DWORD *)this + 14);
  CTaskSimple::CTaskSimple((CTaskSimple *)v10);
  *(_DWORD *)(v10 + 8) = v14;
  *(_DWORD *)v10 = &off_66C0B0;
  v17 = *(_BYTE *)(v10 + 28);
  v18 = *(_BYTE *)(v10 + 29);
  v19 = v15 + 12 * v16;
  v20 = *(_QWORD *)(v19 + 4);
  *(_DWORD *)(v10 + 20) = *(_DWORD *)(v19 + 12);
  *(_DWORD *)v10 = &off_66C0E4;
  *(_DWORD *)(v10 + 24) = 1056964608;
  *(_BYTE *)(v10 + 29) = v18 & 0xE0;
  *(_BYTE *)(v10 + 28) = v17 & 0xC0;
  *(_QWORD *)(v10 + 12) = v20;
  return v10;
}


// ============================================================

// Address: 0x520634
// Original: _ZN27CTaskComplexFollowNodeRoute14CalcBlendRatioEP4CPedb
// Demangled: CTaskComplexFollowNodeRoute::CalcBlendRatio(CPed *,bool)
unsigned __int32 __fastcall CTaskComplexFollowNodeRoute::CalcBlendRatio(
        CTaskComplexFollowNodeRoute *this,
        CPed *a2,
        int a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d1
  int v7; // r2
  int v8; // r0
  float *v9; // r5
  float *v10; // r0
  float v11; // s4
  float v12; // s2
  float v13; // s0
  float *v14; // r3
  int v15; // r2
  float *v16; // r0
  float *v17; // r1
  float *v18; // r2
  float *v19; // r3
  int v20; // r1
  float v21; // s0
  float v22; // s2
  float v23; // s0
  float *v24; // r0
  float v25; // s18
  float v26; // r4

  if ( a3 == 1 )
  {
    v7 = *((_DWORD *)this + 14);
    v8 = *((_DWORD *)a2 + 5);
    v9 = (float *)(v8 + 48);
    if ( !v8 )
      v9 = (float *)((char *)a2 + 4);
    v10 = (float *)(*((_DWORD *)this + 12) + 12 * v7);
    v11 = (float)(v10[3] - v9[2]) * (float)(v10[3] - v9[2]);
    v12 = (float)((float)(v10[1] - *v9) * (float)(v10[1] - *v9))
        + (float)((float)(v10[2] - v9[1]) * (float)(v10[2] - v9[1]));
    v13 = *((float *)this + 20);
  }
  else
  {
    v14 = (float *)*((_DWORD *)this + 12);
    v15 = *((_DWORD *)a2 + 5);
    v16 = (float *)(v15 + 48);
    if ( !v15 )
      v16 = (float *)((char *)a2 + 4);
    if ( *(_DWORD *)v14 == 1 )
    {
      v17 = v14 + 3;
      v18 = v14 + 2;
      v19 = v14 + 1;
    }
    else
    {
      v20 = *((_DWORD *)this + 14);
      if ( v20 )
      {
        v17 = &v14[3 * v20];
        v18 = v17 - 1;
        v19 = v17 - 2;
      }
      else
      {
        v17 = v16 + 2;
        v18 = v16 + 1;
        v19 = v16;
      }
    }
    v11 = (float)(v16[2] - *v17) * (float)(v16[2] - *v17);
    v12 = (float)((float)(*v16 - *v19) * (float)(*v16 - *v19))
        + (float)((float)(v16[1] - *v18) * (float)(v16[1] - *v18));
    v13 = *((float *)this + 21);
  }
  v21 = v13 * v13;
  v22 = v12 + v11;
  if ( v22 >= v21 )
    return -1.0;
  v23 = v22 / v21;
  if ( v23 >= 0.0 )
  {
    if ( v23 > 1.0 )
      v23 = 1.0;
  }
  else
  {
    v23 = 0.0;
  }
  v4.n64_u32[0] = cosf(v23 * 3.1416);
  v24 = (float *)((char *)this + 92);
  if ( a3 )
    v24 = (float *)((char *)this + 88);
  v25 = *v24 * (float)((float)(v4.n64_f32[0] * 0.5) + 0.5);
  v26 = COERCE_FLOAT(CTaskSimpleGoToPointFine::BaseRatio());
  v3.n64_f32[0] = COERCE_FLOAT(CTaskSimpleGoToPointFine::BaseRatio()) + 0.75;
  v4.n64_f32[0] = v26 - v25;
  v3.n64_u32[0] = vmax_f32(v3, v4).n64_u32[0];
  return v3.n64_u32[0];
}


// ============================================================

// Address: 0x5207bc
// Original: _ZNK27CTaskComplexFollowNodeRoute18CanGoStraightThereERK4CPedRK7CVectorS5_f
// Demangled: CTaskComplexFollowNodeRoute::CanGoStraightThere(CPed const&,CVector const&,CVector const&,float)
bool __fastcall CTaskComplexFollowNodeRoute::CanGoStraightThere(
        const CVector **this,
        const CPed *a2,
        const CVector *a3,
        const CVector *a4,
        float a5)
{
  int v5; // r12
  float32x2_t v6; // d16
  unsigned __int64 v7; // d1
  int v9; // [sp+0h] [bp-8h]

  v5 = 0;
  v6.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)a3 + 4), *(float32x2_t *)((char *)a4 + 4)).n64_u64[0];
  v7 = vmul_f32(v6, v6).n64_u64[0];
  if ( sqrtf(
         (float)((float)((float)(*(float *)a3 - *(float *)a4) * (float)(*(float *)a3 - *(float *)a4)) + *(float *)&v7)
       + *((float *)&v7 + 1)) <= a5 )
  {
    if ( *((unsigned __int8 *)a2 + 1169) >> 7 )
      return 1;
    return CPedGeometryAnalyser::IsWanderPathClear(a3, a4, this[9], COERCE_FLOAT(4), v9) == 4;
  }
  return v5;
}


// ============================================================

// Address: 0x5271dc
// Original: _ZN27CTaskComplexFollowNodeRoute9SerializeEv
// Demangled: CTaskComplexFollowNodeRoute::Serialize(void)
void __fastcall CTaskComplexFollowNodeRoute::Serialize(CTaskComplexFollowNodeRoute *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  __int64 v8; // d16
  int v9; // r2
  CGenericGameStorage *v10; // r5
  int v11; // r2
  CGenericGameStorage *v12; // r5
  int v13; // r2
  CGenericGameStorage *v14; // r5
  int v15; // r2
  int v16; // r6
  CGenericGameStorage *v17; // r5
  int v18; // r2
  CGenericGameStorage *v19; // r5
  int v20; // r2
  int v21; // r5
  CGenericGameStorage *v22; // r4
  int v23; // r2
  int v24; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexFollowNodeRoute *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexFollowNodeRoute *))(*(_DWORD *)this + 20))(this) == 906 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 6);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v7 = (CGenericGameStorage *)malloc(0xCu);
    v8 = *(_QWORD *)((char *)this + 12);
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 5);
    *(_QWORD *)v7 = v8;
    CGenericGameStorage::_SaveDataToWorkBuffer(v7, &byte_9[3], v9);
    free(v7);
    if ( UseDataFence )
      AddDataFence();
    v10 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v10 = *((_DWORD *)this + 7);
    CGenericGameStorage::_SaveDataToWorkBuffer(v10, byte_4, v11);
    free(v10);
    if ( UseDataFence )
      AddDataFence();
    v12 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v12 = *((_DWORD *)this + 8);
    CGenericGameStorage::_SaveDataToWorkBuffer(v12, byte_4, v13);
    free(v12);
    if ( UseDataFence )
      AddDataFence();
    v14 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v14 = *((_DWORD *)this + 9);
    CGenericGameStorage::_SaveDataToWorkBuffer(v14, byte_4, v15);
    free(v14);
    v16 = *((_BYTE *)this + 76) & 1;
    if ( UseDataFence )
      AddDataFence();
    v17 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v17 = v16;
    CGenericGameStorage::_SaveDataToWorkBuffer(v17, byte_4, v18);
    free(v17);
    if ( UseDataFence )
      AddDataFence();
    v19 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v19 = *((_DWORD *)this + 15);
    CGenericGameStorage::_SaveDataToWorkBuffer(v19, byte_4, v20);
    free(v19);
    v21 = (*((unsigned __int8 *)this + 76) >> 3) & 1;
    if ( UseDataFence )
      AddDataFence();
    v22 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v22 = v21;
    CGenericGameStorage::_SaveDataToWorkBuffer(v22, byte_4, v23);
    j_free(v22);
  }
  else
  {
    v24 = (*(int (__fastcall **)(CTaskComplexFollowNodeRoute *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(906, v24);
  }
}


// ============================================================

// Address: 0x527e28
// Original: _ZNK27CTaskComplexFollowNodeRoute5CloneEv
// Demangled: CTaskComplexFollowNodeRoute::Clone(void)
int __fastcall CTaskComplexFollowNodeRoute::Clone(CTaskComplexFollowNodeRoute *this, unsigned int a2)
{
  int v3; // r5
  __int64 v4; // d8
  __int64 v5; // d9
  char v6; // r9
  int v7; // r6
  unsigned int v8; // r1
  int v9; // r0
  __int64 v10; // d16
  _DWORD *v11; // r0
  unsigned int v12; // r1
  int v13; // r0

  v3 = CTask::operator new((CTask *)&dword_60, a2);
  v4 = *((_QWORD *)this + 3);
  v5 = *((_QWORD *)this + 4);
  v6 = *((_BYTE *)this + 76);
  v7 = *((_DWORD *)this + 15);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  v8 = *(_BYTE *)(v3 + 76) & 0xF6;
  *(_DWORD *)v3 = &off_66C278;
  v9 = *((_DWORD *)this + 5);
  v10 = *(_QWORD *)((char *)this + 12);
  *(_QWORD *)(v3 + 24) = v4;
  *(_QWORD *)(v3 + 32) = v5;
  *(_DWORD *)(v3 + 20) = v9;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 60) = v7;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 68) = 0;
  *(_WORD *)(v3 + 40) = -1;
  *(_WORD *)(v3 + 52) = -1;
  *(_WORD *)(v3 + 72) = 0;
  *(_BYTE *)(v3 + 76) = v6 & 9 | v8;
  *(_QWORD *)(v3 + 12) = v10;
  if ( (v6 & 8) != 0 )
  {
    *(_BYTE *)(v3 + 76) = v6 & 9 | v8 & 0x9F;
    *(_QWORD *)(v3 + 80) = 0LL;
    *(_QWORD *)(v3 + 88) = 0LL;
  }
  v11 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, v8);
  *v11 = 0;
  *(_DWORD *)(v3 + 48) = v11;
  v13 = CNodeRoute::operator new((CNodeRoute *)&dword_24, v12);
  *(_DWORD *)v13 = 0;
  *(_WORD *)(v13 + 4) = -1;
  *(_WORD *)(v13 + 8) = -1;
  *(_WORD *)(v13 + 12) = -1;
  *(_WORD *)(v13 + 16) = -1;
  *(_WORD *)(v13 + 20) = -1;
  *(_WORD *)(v13 + 24) = -1;
  *(_WORD *)(v13 + 28) = -1;
  *(_WORD *)(v13 + 32) = -1;
  *(_WORD *)(v3 + 52) = -1;
  *(_DWORD *)(v3 + 44) = v13;
  *(_DWORD *)(v3 + 40) = EmptyNodeAddress;
  *(_DWORD *)(v3 + 40) = *((_DWORD *)this + 10);
  return v3;
}


// ============================================================

// Address: 0x527f04
// Original: _ZNK27CTaskComplexFollowNodeRoute11GetTaskTypeEv
// Demangled: CTaskComplexFollowNodeRoute::GetTaskType(void)
int __fastcall CTaskComplexFollowNodeRoute::GetTaskType(CTaskComplexFollowNodeRoute *this)
{
  return 906;
}


// ============================================================

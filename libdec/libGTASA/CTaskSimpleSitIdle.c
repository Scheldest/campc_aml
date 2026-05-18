
// Address: 0x18d9d4
// Original: j__ZN18CTaskSimpleSitIdleC2Eih
// Demangled: CTaskSimpleSitIdle::CTaskSimpleSitIdle(int,uchar)
// attributes: thunk
void __fastcall CTaskSimpleSitIdle::CTaskSimpleSitIdle(CTaskSimpleSitIdle *this, int a2, unsigned __int8 a3)
{
  _ZN18CTaskSimpleSitIdleC2Eih(this, a2, a3);
}


// ============================================================

// Address: 0x1a0fc4
// Original: j__ZN18CTaskSimpleSitIdle10CreateTaskEv
// Demangled: CTaskSimpleSitIdle::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleSitIdle::CreateTask(CTaskSimpleSitIdle *this)
{
  return _ZN18CTaskSimpleSitIdle10CreateTaskEv(this);
}


// ============================================================

// Address: 0x49128c
// Original: _ZN18CTaskSimpleSitIdle10CreateTaskEv
// Demangled: CTaskSimpleSitIdle::CreateTask(void)
void __fastcall CTaskSimpleSitIdle::CreateTask(CTaskSimpleSitIdle *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  unsigned int v6; // r1
  CTaskSimpleSitIdle *v7; // r0
  unsigned __int8 v8; // [sp+7h] [bp-11h] BYREF
  int v9; // [sp+8h] [bp-10h] BYREF
  _BYTE v10[2]; // [sp+Ch] [bp-Ch] BYREF
  _BYTE v11[10]; // [sp+Eh] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v10, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v9, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v8, (char *)&stderr + 1, v4);
  v7 = (CTaskSimpleSitIdle *)CTask::operator new((CTask *)&dword_20, v6);
  CTaskSimpleSitIdle::CTaskSimpleSitIdle(v7, v9, v8);
}


// ============================================================

// Address: 0x4ec0d0
// Original: _ZN18CTaskSimpleSitIdleC2Eih
// Demangled: CTaskSimpleSitIdle::CTaskSimpleSitIdle(int,uchar)
void __fastcall CTaskSimpleSitIdle::CTaskSimpleSitIdle(CTaskSimpleSitIdle *this, int a2, unsigned __int8 a3)
{
  int v5; // r0

  CTaskSimple::CTaskSimple(this);
  *(_BYTE *)(v5 + 8) = a3;
  *(_DWORD *)(v5 + 12) = a2;
  *(_DWORD *)(v5 + 26) = 0;
  *(_DWORD *)(v5 + 22) = 0;
  *(_DWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 20) = 0;
  *(_DWORD *)v5 = &off_669EC0;
}


// ============================================================

// Address: 0x4ec100
// Original: _ZN18CTaskSimpleSitIdleD2Ev
// Demangled: CTaskSimpleSitIdle::~CTaskSimpleSitIdle()
// attributes: thunk
void __fastcall CTaskSimpleSitIdle::~CTaskSimpleSitIdle(CTaskSimpleSitIdle *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4ec104
// Original: _ZN18CTaskSimpleSitIdleD0Ev
// Demangled: CTaskSimpleSitIdle::~CTaskSimpleSitIdle()
void __fastcall CTaskSimpleSitIdle::~CTaskSimpleSitIdle(CTaskSimpleSitIdle *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ec114
// Original: _ZN18CTaskSimpleSitIdle8SetTimerEi
// Demangled: CTaskSimpleSitIdle::SetTimer(int)
int __fastcall CTaskSimpleSitIdle::SetTimer(int this, int a2)
{
  int v2; // r2

  *(_DWORD *)(this + 12) = a2;
  v2 = CTimer::m_snTimeInMilliseconds;
  *(_BYTE *)(this + 28) = 1;
  *(_DWORD *)(this + 20) = v2;
  *(_DWORD *)(this + 24) = a2;
  return this;
}


// ============================================================

// Address: 0x4ec12c
// Original: _ZN18CTaskSimpleSitIdle13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleSitIdle::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleSitIdle::MakeAbortable(CTaskSimpleSitIdle *this, CPed *a2, int a3, const CEvent *a4)
{
  int v6; // r0
  unsigned __int64 v8; // r0

  if ( a3 == 2 )
  {
    v6 = *((_DWORD *)this + 4);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 28) = -998637568;
      CAnimBlendAssociation::SetFinishCallback(
        *((CAnimBlendAssociation **)this + 4),
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      *((_DWORD *)this + 4) = 0;
    }
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 750);
    return 1;
  }
  else
  {
    *((_DWORD *)this + 3) = -1;
    v8 = (unsigned int)CTimer::m_snTimeInMilliseconds | 0xFFFFFFFF00000000LL;
    *((_BYTE *)this + 28) = 1;
    *(_QWORD *)((char *)this + 20) = v8;
    return 0;
  }
}


// ============================================================

// Address: 0x4ec1b0
// Original: _ZN18CTaskSimpleSitIdle10ProcessPedEP4CPed
// Demangled: CTaskSimpleSitIdle::ProcessPed(CPed *)
int __fastcall CTaskSimpleSitIdle::ProcessPed(CTaskSimpleSitIdle *this, CPed *a2)
{
  int v4; // r2
  int v5; // r1
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r2
  int v9; // r6
  int ClosestPedInRange; // r11
  float v11; // s16
  int v12; // r1
  float *v13; // r0
  float **v14; // r10
  float *v15; // r6
  float *v16; // r3
  float *v17; // r2
  float v18; // s24
  float v19; // s26
  float v20; // s22
  float v21; // s2
  float v22; // s4
  float v23; // s0
  float v24; // r8
  float v25; // r9
  float *v26; // r0
  double v27; // d16
  float v28; // s24
  float v29; // s22
  float v30; // s20
  float v31; // r6
  float v32; // r8
  float v33; // s0
  float v34; // s4
  float v35; // s22
  float v36; // s24
  float v37; // s20
  float *v38; // r0
  float v39; // s30
  float v40; // s26
  float v41; // s28
  float v42; // r6
  float v43; // r8
  float v44; // s0
  unsigned int v45; // r0
  unsigned int v46; // r1
  double v48; // [sp+20h] [bp-70h] BYREF
  float v49; // [sp+28h] [bp-68h]

  if ( !*((_DWORD *)this + 4) )
  {
    v4 = *((_DWORD *)this + 3);
    v5 = *((unsigned __int8 *)this + 8);
    v6 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 28) = 1;
    *((_DWORD *)this + 5) = v6;
    *((_DWORD *)this + 6) = v4;
    if ( v5 )
    {
      v7 = 53;
      v8 = 310;
    }
    else
    {
      v7 = 0;
      v8 = 150;
    }
    v9 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), v7, v8);
    *((_DWORD *)this + 4) = v9;
    if ( v9 )
      *(float *)(v9 + 36) = (float)((float)((float)rand() * 4.6566e-10) * 0.6) + 0.9;
  }
  if ( !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2)
    && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) <= 4 )
  {
    ClosestPedInRange = CPedScanner::GetClosestPedInRange((CPedScanner *)(*((_DWORD *)a2 + 272) + 292));
    v11 = (float)((int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 5000.0) + 3000);
    if ( ClosestPedInRange )
    {
      v12 = *(_DWORD *)(ClosestPedInRange + 20);
      v14 = (float **)((char *)a2 + 20);
      v13 = (float *)*((_DWORD *)a2 + 5);
      v15 = (float *)((char *)a2 + 4);
      v16 = (float *)(v12 + 48);
      v17 = (float *)((char *)a2 + 4);
      if ( v13 )
        v17 = v13 + 12;
      if ( !v12 )
        v16 = (float *)(ClosestPedInRange + 4);
      v18 = *v16 - *v17;
      v19 = v16[1] - v17[1];
      v20 = v16[2] - v17[2];
      if ( v13 )
      {
        v21 = v13[4];
        v22 = v13[5];
        v23 = v13[6];
      }
      else
      {
        v24 = *((float *)a2 + 4);
        v25 = sinf(v24);
        v22 = cosf(v24);
        v23 = 0.0;
        LODWORD(v21) = LODWORD(v25) ^ 0x80000000;
      }
      if ( (float)((float)((float)(v18 * v21) + (float)(v19 * v22)) + (float)(v20 * v23)) > 0.2
        && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) <= 24 )
      {
        IKChainManager_c::LookAt(
          (int)&g_ikChainMan,
          (int)"TaskSitIdle",
          a2,
          ClosestPedInRange,
          (int)v11,
          5,
          0,
          0,
          0.25,
          750,
          3,
          0);
        goto LABEL_30;
      }
    }
    else
    {
      v15 = (float *)((char *)a2 + 4);
      v14 = (float **)((char *)a2 + 20);
    }
    v26 = *v14;
    if ( *v14 )
      v15 = v26 + 12;
    v27 = *(double *)v15;
    v49 = v15[2];
    v48 = v27;
    if ( v26 )
    {
      v28 = v26[4];
      v29 = v26[5];
      v30 = v26[6];
    }
    else
    {
      v31 = *((float *)a2 + 4);
      v32 = sinf(v31);
      v29 = cosf(v31);
      v30 = 0.0;
      LODWORD(v28) = LODWORD(v32) ^ 0x80000000;
    }
    v33 = (float)((float)((float)rand() * 4.6566e-10) * 4.0) + 1.0;
    v34 = v29 * v33;
    v35 = *(float *)&v48 + (float)(v28 * v33);
    v36 = *((float *)&v48 + 1) + v34;
    v37 = (float)(v30 * v33) + v49;
    *(float *)&v48 = v35;
    *((float *)&v48 + 1) = *((float *)&v48 + 1) + v34;
    v49 = v37;
    v38 = *v14;
    if ( *v14 )
    {
      v39 = *v38;
      v40 = v38[1];
      v41 = v38[2];
    }
    else
    {
      v42 = *((float *)a2 + 4);
      v43 = cosf(v42);
      v40 = sinf(v42);
      v41 = 0.0;
      v39 = v43;
    }
    v44 = (float)((float)((float)rand() * 4.6566e-10) * 8.0) + -4.0;
    *(float *)&v48 = v35 + (float)(v39 * v44);
    *((float *)&v48 + 1) = v36 + (float)(v40 * v44);
    v49 = (float)(v41 * v44) + v37;
    IKChainManager_c::LookAt((int)&g_ikChainMan, (int)"TaskSitIdle", a2, 0, (int)v11, -1, (int)&v48, 0, 0.25, 750, 3, 0);
  }
LABEL_30:
  if ( !*((_BYTE *)this + 28) )
    return 0;
  if ( *((_BYTE *)this + 29) )
  {
    v45 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 29) = 0;
    *((_DWORD *)this + 5) = v45;
    v46 = v45;
  }
  else
  {
    v46 = *((_DWORD *)this + 5);
    v45 = CTimer::m_snTimeInMilliseconds;
  }
  if ( v46 + *((_DWORD *)this + 6) > v45 )
    return 0;
  if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
    IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 750);
  return 1;
}


// ============================================================

// Address: 0x4ec598
// Original: _ZN18CTaskSimpleSitIdle9StartAnimEP4CPed
// Demangled: CTaskSimpleSitIdle::StartAnim(CPed *)
int __fastcall CTaskSimpleSitIdle::StartAnim(CTaskSimpleSitIdle *this, CPed *a2)
{
  int v3; // r3
  int v4; // r2
  int v5; // r0
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r2
  int result; // r0
  int v10; // r5

  v3 = *((_DWORD *)this + 3);
  v4 = *((unsigned __int8 *)this + 8);
  v5 = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)this + 28) = 1;
  *((_DWORD *)this + 5) = v5;
  *((_DWORD *)this + 6) = v3;
  v6 = *((_DWORD *)a2 + 6);
  if ( v4 )
  {
    v7 = 53;
    v8 = 310;
  }
  else
  {
    v7 = 0;
    v8 = 150;
  }
  result = CAnimManager::BlendAnimation(v6, v7, v8);
  v10 = result;
  *((_DWORD *)this + 4) = result;
  if ( result )
  {
    result = rand();
    *(float *)(v10 + 36) = (float)((float)((float)result * 4.6566e-10) * 0.6) + 0.9;
  }
  return result;
}


// ============================================================

// Address: 0x4f2de8
// Original: _ZNK18CTaskSimpleSitIdle5CloneEv
// Demangled: CTaskSimpleSitIdle::Clone(void)
int __fastcall CTaskSimpleSitIdle::Clone(CTaskSimpleSitIdle *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int v4; // r5
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, a2);
  v4 = *((_DWORD *)this + 3);
  LOBYTE(this) = *((_BYTE *)this + 8);
  CTaskSimple::CTaskSimple(v3);
  *(_BYTE *)(result + 8) = (_BYTE)this;
  *(_DWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 26) = 0;
  *(_DWORD *)(result + 22) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)result = &off_669EC0;
  return result;
}


// ============================================================

// Address: 0x4f2e20
// Original: _ZNK18CTaskSimpleSitIdle11GetTaskTypeEv
// Demangled: CTaskSimpleSitIdle::GetTaskType(void)
int __fastcall CTaskSimpleSitIdle::GetTaskType(CTaskSimpleSitIdle *this)
{
  return 221;
}


// ============================================================

// Address: 0x4f2e24
// Original: _ZN18CTaskSimpleSitIdle9SerializeEv
// Demangled: CTaskSimpleSitIdle::Serialize(void)
int __fastcall CTaskSimpleSitIdle::Serialize(CTaskSimpleSitIdle *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r2
  int v9; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleSitIdle *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleSitIdle *))(*(_DWORD *)this + 20))(this) == 221 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskSimpleSitIdle *)((char *)this + 8), (char *)&stderr + 1, v7);
  }
  else
  {
    v9 = (*(int (__fastcall **)(CTaskSimpleSitIdle *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(221, v9);
  }
}


// ============================================================

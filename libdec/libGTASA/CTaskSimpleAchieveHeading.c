
// Address: 0x18a514
// Original: j__ZN25CTaskSimpleAchieveHeading7SetUpIKEP4CPed
// Demangled: CTaskSimpleAchieveHeading::SetUpIK(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleAchieveHeading::SetUpIK(CTaskSimpleAchieveHeading *this, CPed *a2)
{
  return _ZN25CTaskSimpleAchieveHeading7SetUpIKEP4CPed(this, a2);
}


// ============================================================

// Address: 0x194654
// Original: j__ZN25CTaskSimpleAchieveHeading10CreateTaskEv
// Demangled: CTaskSimpleAchieveHeading::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleAchieveHeading::CreateTask(CTaskSimpleAchieveHeading *this)
{
  return _ZN25CTaskSimpleAchieveHeading10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19de90
// Original: j__ZN25CTaskSimpleAchieveHeadingC2Efff
// Demangled: CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(float,float,float)
// attributes: thunk
void __fastcall CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(
        CTaskSimpleAchieveHeading *this,
        float a2,
        float a3,
        float a4)
{
  _ZN25CTaskSimpleAchieveHeadingC2Efff(this, a2, a3, a4);
}


// ============================================================

// Address: 0x494594
// Original: _ZN25CTaskSimpleAchieveHeading10CreateTaskEv
// Demangled: CTaskSimpleAchieveHeading::CreateTask(void)
void __fastcall CTaskSimpleAchieveHeading::CreateTask(CTaskSimpleAchieveHeading *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  unsigned int v8; // r1
  CTaskSimpleAchieveHeading *v9; // r0
  float v10; // [sp+4h] [bp-14h] BYREF
  float v11; // [sp+8h] [bp-10h] BYREF
  float v12[3]; // [sp+Ch] [bp-Ch] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, byte_4, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, byte_4, v6);
  v9 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, v8);
  CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v9, v12[0], v11, v10);
}


// ============================================================

// Address: 0x51cffc
// Original: _ZN25CTaskSimpleAchieveHeadingC2Efff
// Demangled: CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(float,float,float)
void __fastcall CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(
        CTaskSimpleAchieveHeading *this,
        float a2,
        float a3,
        float a4)
{
  int v7; // r0
  char v8; // r2

  CTaskSimple::CTaskSimple(this);
  v8 = *(_BYTE *)(v7 + 20);
  *(float *)(v7 + 8) = a2;
  *(float *)(v7 + 12) = a3;
  *(float *)(v7 + 16) = a4;
  *(_BYTE *)(v7 + 20) = v8 & 0xFE;
  *(_DWORD *)v7 = &off_66C118;
}


// ============================================================

// Address: 0x51d030
// Original: _ZN25CTaskSimpleAchieveHeadingD2Ev
// Demangled: CTaskSimpleAchieveHeading::~CTaskSimpleAchieveHeading()
// attributes: thunk
void __fastcall CTaskSimpleAchieveHeading::~CTaskSimpleAchieveHeading(CTaskSimpleAchieveHeading *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x51d034
// Original: _ZN25CTaskSimpleAchieveHeadingD0Ev
// Demangled: CTaskSimpleAchieveHeading::~CTaskSimpleAchieveHeading()
void __fastcall CTaskSimpleAchieveHeading::~CTaskSimpleAchieveHeading(CTaskSimpleAchieveHeading *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x51d044
// Original: _ZN25CTaskSimpleAchieveHeading6QuitIKEP4CPed
// Demangled: CTaskSimpleAchieveHeading::QuitIK(CPed *)
int __fastcall CTaskSimpleAchieveHeading::QuitIK(CTaskSimpleAchieveHeading *this, CPed *a2)
{
  int result; // r0

  result = *((unsigned __int8 *)this + 20) << 31;
  if ( result )
  {
    result = IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2);
    if ( result )
      return sub_1A0F0C((IKChainManager_c *)&g_ikChainMan, a2, 250);
  }
  return result;
}


// ============================================================

// Address: 0x51d07c
// Original: _ZN25CTaskSimpleAchieveHeading13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleAchieveHeading::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleAchieveHeading::MakeAbortable(
        CTaskSimpleAchieveHeading *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( *((unsigned __int8 *)this + 20) << 31 && IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
    IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
  if ( a3 == 2 )
  {
    *((_DWORD *)a2 + 344) = *((_DWORD *)a2 + 343);
    CPed::RestoreHeadingRate(a2);
    return 1;
  }
  else
  {
    *((_DWORD *)this + 4) = 1086918619;
    *((_DWORD *)a2 + 344) = *((_DWORD *)a2 + 343);
    return 0;
  }
}


// ============================================================

// Address: 0x51d0e8
// Original: _ZN25CTaskSimpleAchieveHeading7SetUpIKEP4CPed
// Demangled: CTaskSimpleAchieveHeading::SetUpIK(CPed *)
int __fastcall CTaskSimpleAchieveHeading::SetUpIK(CTaskSimpleAchieveHeading *this, CPed *a2)
{
  int Pad; // r6
  int result; // r0
  bool v6; // zf
  bool v7; // zf
  int v8; // r0
  float v9; // r6
  int v10; // r9
  float v11; // r8
  float v12; // s0
  float *v13; // r0
  float v14; // s0
  float v15; // s0
  float v16; // s4
  float v17[9]; // [sp+24h] [bp-24h] BYREF

  Pad = CPad::GetPad(0, (int)a2);
  result = FindPlayerPed(-1);
  v6 = result == (_DWORD)a2;
  if ( (CPed *)result == a2 )
  {
    result = *(unsigned __int16 *)(Pad + 272);
    v6 = result == 0;
  }
  if ( !v6 )
  {
    result = CEntity::GetIsOnScreen(a2);
    v7 = result == 1;
    if ( result == 1 )
    {
      result = *((unsigned __int8 *)this + 20) << 31;
      v7 = result == 0;
    }
    if ( v7 )
    {
      result = IKChainManager_c::GetLookAtEntity((IKChainManager_c *)&g_ikChainMan, a2);
      if ( !result )
      {
        result = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 5);
        if ( !result )
        {
          v8 = *((_DWORD *)this + 1);
          if ( !v8
            || (result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8), result != 917)
            && (result = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 20))(*((_DWORD *)this + 1)),
                result != 939) )
          {
            v9 = *((float *)this + 2);
            v10 = *((_DWORD *)a2 + 5);
            v11 = sinf(v9);
            v12 = cosf(v9);
            v13 = (float *)(v10 + 48);
            v14 = v12 + v12;
            if ( !v10 )
              v13 = (float *)((char *)a2 + 4);
            v15 = v13[1] + v14;
            v16 = *v13 + (float)(v11 + v11);
            v17[2] = v13[2] + 0.61;
            v17[1] = v15;
            v17[0] = v16;
            IKChainManager_c::LookAt(
              (int)&g_ikChainMan,
              (int)"TaskAchvHeading",
              a2,
              0,
              5000,
              -1,
              (int)v17,
              0,
              0.25,
              500,
              3,
              0);
            result = *((unsigned __int8 *)this + 20) | 1;
            *((_BYTE *)this + 20) = result;
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x51d224
// Original: _ZN25CTaskSimpleAchieveHeading10ProcessPedEP4CPed
// Demangled: CTaskSimpleAchieveHeading::ProcessPed(CPed *)
int __fastcall CTaskSimpleAchieveHeading::ProcessPed(CTaskSimpleAchieveHeading *this, CPed *a2)
{
  float v4; // s0

  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    return 1;
  CPed::RestoreHeadingRate(a2);
  *((float *)a2 + 345) = *((float *)a2 + 345) * *((float *)this + 3);
  CPed::SetMoveState(a2, 1);
  (*(void (__fastcall **)(CPed *))(*(_DWORD *)a2 + 96))(a2);
  v4 = *((float *)a2 + 343);
  *((_DWORD *)a2 + 344) = *((_DWORD *)this + 2);
  if ( COERCE_FLOAT(CGeneral::LimitRadianAngle(
                      COERCE_CGENERAL_(fabs(*((float *)this + 2) - v4)),
                      COERCE_FLOAT((CPed *)((char *)a2 + 1372))) & 0x7FFFFFFF) < *((float *)this + 4) )
  {
    *((_DWORD *)a2 + 344) = *((_DWORD *)a2 + 343);
    CPed::RestoreHeadingRate(a2);
    if ( *((unsigned __int8 *)this + 20) << 31 && IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
    {
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
      return 1;
    }
    return 1;
  }
  CTaskSimpleAchieveHeading::SetUpIK(this, a2);
  return 0;
}


// ============================================================

// Address: 0x527444
// Original: _ZNK25CTaskSimpleAchieveHeading5CloneEv
// Demangled: CTaskSimpleAchieveHeading::Clone(void)
int __fastcall CTaskSimpleAchieveHeading::Clone(CTaskSimpleAchieveHeading *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  int v5; // r4
  int result; // r0
  char v7; // r2

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, a2);
  v4 = *((_QWORD *)this + 1);
  v5 = *((_DWORD *)this + 4);
  CTaskSimple::CTaskSimple(v3);
  *(_QWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 16) = v5;
  v7 = *(_BYTE *)(result + 20);
  *(_DWORD *)result = &off_66C118;
  *(_BYTE *)(result + 20) = v7 & 0xFE;
  return result;
}


// ============================================================

// Address: 0x527480
// Original: _ZNK25CTaskSimpleAchieveHeading11GetTaskTypeEv
// Demangled: CTaskSimpleAchieveHeading::GetTaskType(void)
int __fastcall CTaskSimpleAchieveHeading::GetTaskType(CTaskSimpleAchieveHeading *this)
{
  return 902;
}


// ============================================================

// Address: 0x527488
// Original: _ZN25CTaskSimpleAchieveHeading9SerializeEv
// Demangled: CTaskSimpleAchieveHeading::Serialize(void)
void __fastcall CTaskSimpleAchieveHeading::Serialize(CTaskSimpleAchieveHeading *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CGenericGameStorage *v9; // r5
  int v10; // r2
  int v11; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleAchieveHeading *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleAchieveHeading *))(*(_DWORD *)this + 20))(this) == 902 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 2);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v7 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v7 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
    free(v7);
    if ( UseDataFence )
      AddDataFence();
    v9 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v9 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v9, byte_4, v10);
    j_free(v9);
  }
  else
  {
    v11 = (*(int (__fastcall **)(CTaskSimpleAchieveHeading *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(902, v11);
  }
}


// ============================================================

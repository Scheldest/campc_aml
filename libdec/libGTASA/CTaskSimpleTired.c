
// Address: 0x195618
// Original: j__ZN16CTaskSimpleTiredC2Ei
// Demangled: CTaskSimpleTired::CTaskSimpleTired(int)
// attributes: thunk
void __fastcall CTaskSimpleTired::CTaskSimpleTired(CTaskSimpleTired *this, int a2)
{
  _ZN16CTaskSimpleTiredC2Ei(this, a2);
}


// ============================================================

// Address: 0x4ebde0
// Original: _ZN16CTaskSimpleTiredC2Ei
// Demangled: CTaskSimpleTired::CTaskSimpleTired(int)
void __fastcall CTaskSimpleTired::CTaskSimpleTired(CTaskSimpleTired *this, int a2)
{
  int v3; // r0

  CTaskSimple::CTaskSimple(this);
  *(_DWORD *)(v3 + 8) = a2;
  *(_WORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)v3 = &off_669E58;
}


// ============================================================

// Address: 0x4ebe08
// Original: _ZN16CTaskSimpleTiredD2Ev
// Demangled: CTaskSimpleTired::~CTaskSimpleTired()
// attributes: thunk
void __fastcall CTaskSimpleTired::~CTaskSimpleTired(CTaskSimpleTired *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4ebe0c
// Original: _ZN16CTaskSimpleTiredD0Ev
// Demangled: CTaskSimpleTired::~CTaskSimpleTired()
void __fastcall CTaskSimpleTired::~CTaskSimpleTired(CTaskSimpleTired *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ebe1c
// Original: _ZN16CTaskSimpleTired10ProcessPedEP4CPed
// Demangled: CTaskSimpleTired::ProcessPed(CPed *)
int __fastcall CTaskSimpleTired::ProcessPed(CTaskSimpleTired *this, CPed *a2)
{
  __int64 v4; // r0
  CPed *PlayerPed; // r0
  int v6; // r1
  unsigned int v7; // r0
  unsigned int v8; // r1

  if ( !*((_DWORD *)this + 6) )
  {
    CPed::SetMoveState(a2, 1);
    (*(void (__fastcall **)(CPed *))(*(_DWORD *)a2 + 96))(a2);
    HIDWORD(v4) = *((_DWORD *)this + 2);
    LODWORD(v4) = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 20) = 1;
    *(_QWORD *)((char *)this + 12) = v4;
    PlayerPed = (CPed *)FindPlayerPed(-1);
    if ( PlayerPed == a2 && CClothes::GetDefaultPlayerMotionGroup(PlayerPed) == 55 )
      v6 = 76;
    else
      v6 = 0;
    *((_DWORD *)this + 6) = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), v6, 0xAu);
  }
  if ( !*((_BYTE *)this + 20) )
    return 0;
  if ( *((_BYTE *)this + 21) )
  {
    v7 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 21) = 0;
    *((_DWORD *)this + 3) = v7;
    v8 = v7;
  }
  else
  {
    v8 = *((_DWORD *)this + 3);
    v7 = CTimer::m_snTimeInMilliseconds;
  }
  if ( v8 + *((_DWORD *)this + 4) > v7 )
    return 0;
  (*(void (__fastcall **)(CTaskSimpleTired *, CPed *, _DWORD, _DWORD))(*(_DWORD *)this + 28))(this, a2, 0, 0);
  return 1;
}


// ============================================================

// Address: 0x4ebecc
// Original: _ZN16CTaskSimpleTired9StartAnimEP4CPed
// Demangled: CTaskSimpleTired::StartAnim(CPed *)
int __fastcall CTaskSimpleTired::StartAnim(CTaskSimpleTired *this, CPed *a2)
{
  __int64 v4; // r0
  CPed *PlayerPed; // r0
  int v6; // r1
  int result; // r0

  CPed::SetMoveState(a2, 1);
  (*(void (__fastcall **)(CPed *))(*(_DWORD *)a2 + 96))(a2);
  HIDWORD(v4) = *((_DWORD *)this + 2);
  LODWORD(v4) = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)this + 20) = 1;
  *(_QWORD *)((char *)this + 12) = v4;
  PlayerPed = (CPed *)FindPlayerPed(-1);
  if ( PlayerPed == a2 && CClothes::GetDefaultPlayerMotionGroup(PlayerPed) == 55 )
    v6 = 76;
  else
    v6 = 0;
  result = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), v6, 0xAu);
  *((_DWORD *)this + 6) = result;
  return result;
}


// ============================================================

// Address: 0x4ebf2c
// Original: _ZN16CTaskSimpleTired13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleTired::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleTired::MakeAbortable(CTaskSimpleTired *this, CPed *a2, int a3, const CEvent *a4)
{
  int v5; // r5

  v5 = *((_DWORD *)this + 6);
  if ( !v5 || v5 != RpAnimBlendClumpGetAssociation() )
    return 1;
  *(_DWORD *)(*((_DWORD *)this + 6) + 28) = -1065353216;
  return 1;
}


// ============================================================

// Address: 0x4f2c64
// Original: _ZNK16CTaskSimpleTired5CloneEv
// Demangled: CTaskSimpleTired::Clone(void)
int __fastcall CTaskSimpleTired::Clone(CTaskSimpleTired *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int v4; // r4
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, a2);
  v4 = *((_DWORD *)this + 2);
  CTaskSimple::CTaskSimple(v3);
  *(_DWORD *)(result + 8) = v4;
  *(_WORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)result = &off_669E58;
  return result;
}


// ============================================================

// Address: 0x4f2c94
// Original: _ZNK16CTaskSimpleTired11GetTaskTypeEv
// Demangled: CTaskSimpleTired::GetTaskType(void)
int __fastcall CTaskSimpleTired::GetTaskType(CTaskSimpleTired *this)
{
  return 219;
}


// ============================================================

// Address: 0x4f2c98
// Original: _ZN16CTaskSimpleTired9SerializeEv
// Demangled: CTaskSimpleTired::Serialize(void)
void __fastcall CTaskSimpleTired::Serialize(CTaskSimpleTired *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleTired *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleTired *))(*(_DWORD *)this + 20))(this) == 219 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 2);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    j_free(v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskSimpleTired *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(219, v7);
  }
}


// ============================================================

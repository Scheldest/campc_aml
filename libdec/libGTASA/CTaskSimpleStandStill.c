
// Address: 0x18dca4
// Original: j__ZN21CTaskSimpleStandStillD2Ev
// Demangled: CTaskSimpleStandStill::~CTaskSimpleStandStill()
// attributes: thunk
void __fastcall CTaskSimpleStandStill::~CTaskSimpleStandStill(CTaskSimpleStandStill *this)
{
  _ZN21CTaskSimpleStandStillD2Ev(this);
}


// ============================================================

// Address: 0x192a80
// Original: j__ZN21CTaskSimpleStandStillC2Eibbf
// Demangled: CTaskSimpleStandStill::CTaskSimpleStandStill(int,bool,bool,float)
// attributes: thunk
void __fastcall CTaskSimpleStandStill::CTaskSimpleStandStill(
        CTaskSimpleStandStill *this,
        int a2,
        bool a3,
        bool a4,
        float a5)
{
  _ZN21CTaskSimpleStandStillC2Eibbf(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19e9a8
// Original: j__ZN21CTaskSimpleStandStill10ProcessPedEP4CPed
// Demangled: CTaskSimpleStandStill::ProcessPed(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleStandStill::ProcessPed(CTaskSimpleStandStill *this, CPed *a2)
{
  return _ZN21CTaskSimpleStandStill10ProcessPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1a0330
// Original: j__ZN21CTaskSimpleStandStillC2Eibbf_0
// Demangled: CTaskSimpleStandStill::CTaskSimpleStandStill(int,bool,bool,float)
// attributes: thunk
void __fastcall CTaskSimpleStandStill::CTaskSimpleStandStill(
        CTaskSimpleStandStill *this,
        int a2,
        bool a3,
        bool a4,
        float a5)
{
  _ZN21CTaskSimpleStandStillC2Eibbf(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x4ea7c0
// Original: _ZN21CTaskSimpleStandStillC2Eibbf
// Demangled: CTaskSimpleStandStill::CTaskSimpleStandStill(int,bool,bool,float)
void __fastcall CTaskSimpleStandStill::CTaskSimpleStandStill(
        CTaskSimpleStandStill *this,
        int a2,
        bool a3,
        bool a4,
        float a5)
{
  int v8; // r0

  CTaskSimple::CTaskSimple(this);
  *(_DWORD *)(v8 + 8) = a2;
  *(_WORD *)(v8 + 20) = 0;
  *(float *)(v8 + 28) = a5;
  *(_BYTE *)(v8 + 24) = a3;
  *(_BYTE *)(v8 + 25) = a4;
  *(_DWORD *)(v8 + 12) = 0;
  *(_DWORD *)(v8 + 16) = 0;
  *(_DWORD *)v8 = &off_669C0C;
}


// ============================================================

// Address: 0x4ea7fc
// Original: _ZN21CTaskSimpleStandStillD0Ev
// Demangled: CTaskSimpleStandStill::~CTaskSimpleStandStill()
void __fastcall CTaskSimpleStandStill::~CTaskSimpleStandStill(CTaskSimpleStandStill *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ea80c
// Original: _ZN21CTaskSimpleStandStill10ProcessPedEP4CPed
// Demangled: CTaskSimpleStandStill::ProcessPed(CPed *)
bool __fastcall CTaskSimpleStandStill::ProcessPed(CTaskSimpleStandStill *this, CPed *a2)
{
  int Association; // r0
  int v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r0
  int v9; // r0

  if ( !*((_BYTE *)this + 20) )
  {
    v6 = *((_DWORD *)this + 2);
    if ( v6 >= 0 )
    {
      *((_DWORD *)this + 3) = CTimer::m_snTimeInMilliseconds;
      *((_DWORD *)this + 4) = v6;
      *((_BYTE *)this + 20) = 1;
      if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
      {
        CPed::SetMoveState(a2, 1);
        *((_DWORD *)a2 + 335) = 1;
        if ( (*((_BYTE *)a2 + 1159) & 4) != 0 && CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 0) )
        {
          CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 0);
          CTaskSimpleDuck::ControlDuckMove();
        }
        else
        {
          CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 3u);
        }
        v9 = *((_DWORD *)a2 + 273);
        if ( v9 )
          *(_DWORD *)(v9 + 20) = 0;
      }
    }
  }
  if ( (*((_BYTE *)a2 + 1159) & 4) != 0 && CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 0) )
  {
    CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 0);
    CTaskSimpleDuck::ControlDuckMove();
  }
  else
  {
    CPed::SetMoveState(a2, 1);
  }
  if ( *((_BYTE *)this + 25) )
  {
    Association = RpAnimBlendClumpGetAssociation();
    if ( Association )
    {
      if ( *(float *)(Association + 24) > 0.99 )
        return 1;
    }
  }
  if ( *((_BYTE *)this + 24) || !*((_BYTE *)this + 20) )
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
  return *((_DWORD *)this + 4) + v8 <= v7;
}


// ============================================================

// Address: 0x4f1cd8
// Original: _ZN21CTaskSimpleStandStillD2Ev
// Demangled: CTaskSimpleStandStill::~CTaskSimpleStandStill()
// attributes: thunk
void __fastcall CTaskSimpleStandStill::~CTaskSimpleStandStill(CTaskSimpleStandStill *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4f1da0
// Original: _ZN21CTaskSimpleStandStill13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleStandStill::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleStandStill::MakeAbortable(CTaskSimpleStandStill *this, CPed *a2, int a3, const CEvent *a4)
{
  int v5; // r1

  if ( !a3 )
  {
    v5 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 20) = 1;
    *((_DWORD *)this + 3) = v5;
    *((_DWORD *)this + 4) = -1;
  }
  return 1;
}


// ============================================================

// Address: 0x4f22e0
// Original: _ZNK21CTaskSimpleStandStill5CloneEv
// Demangled: CTaskSimpleStandStill::Clone(void)
int __fastcall CTaskSimpleStandStill::Clone(CTaskSimpleStandStill *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int v4; // r5
  int v5; // r6
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, a2);
  v4 = *((_DWORD *)this + 2);
  v5 = *((_DWORD *)this + 7);
  LOWORD(this) = *((_WORD *)this + 12);
  CTaskSimple::CTaskSimple(v3);
  *(_DWORD *)(result + 8) = v4;
  *(_WORD *)(result + 20) = 0;
  *(_DWORD *)(result + 28) = v5;
  *(_WORD *)(result + 24) = (_WORD)this;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)result = &off_669C0C;
  return result;
}


// ============================================================

// Address: 0x4f231c
// Original: _ZNK21CTaskSimpleStandStill11GetTaskTypeEv
// Demangled: CTaskSimpleStandStill::GetTaskType(void)
int __fastcall CTaskSimpleStandStill::GetTaskType(CTaskSimpleStandStill *this)
{
  return 203;
}


// ============================================================

// Address: 0x4f2320
// Original: _ZN21CTaskSimpleStandStill9SerializeEv
// Demangled: CTaskSimpleStandStill::Serialize(void)
int __fastcall CTaskSimpleStandStill::Serialize(CTaskSimpleStandStill *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleStandStill *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleStandStill *))(*(_DWORD *)this + 20))(this);
  if ( result != 203 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleStandStill *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(203, v6);
  }
  return result;
}


// ============================================================

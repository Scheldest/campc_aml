
// Address: 0x189eb0
// Original: j__ZN20CTaskSimpleIKManagerC2Ev
// Demangled: CTaskSimpleIKManager::CTaskSimpleIKManager(void)
// attributes: thunk
void __fastcall CTaskSimpleIKManager::CTaskSimpleIKManager(CTaskSimpleIKManager *this)
{
  _ZN20CTaskSimpleIKManagerC2Ev(this);
}


// ============================================================

// Address: 0x189f34
// Original: j__ZN20CTaskSimpleIKManager14AddIKChainTaskEP18CTaskSimpleIKChaini
// Demangled: CTaskSimpleIKManager::AddIKChainTask(CTaskSimpleIKChain *,int)
// attributes: thunk
int __fastcall CTaskSimpleIKManager::AddIKChainTask(CTaskSimpleIKManager *this, CTaskSimpleIKChain *a2, int a3)
{
  return _ZN20CTaskSimpleIKManager14AddIKChainTaskEP18CTaskSimpleIKChaini(this, a2, a3);
}


// ============================================================

// Address: 0x191624
// Original: j__ZN20CTaskSimpleIKManager13GetTaskAtSlotEi
// Demangled: CTaskSimpleIKManager::GetTaskAtSlot(int)
// attributes: thunk
int __fastcall CTaskSimpleIKManager::GetTaskAtSlot(CTaskSimpleIKManager *this, int a2)
{
  return _ZN20CTaskSimpleIKManager13GetTaskAtSlotEi(this, a2);
}


// ============================================================

// Address: 0x4efab8
// Original: _ZN20CTaskSimpleIKManagerC2Ev
// Demangled: CTaskSimpleIKManager::CTaskSimpleIKManager(void)
void __fastcall CTaskSimpleIKManager::CTaskSimpleIKManager(CTaskSimpleIKManager *this)
{
  int v1; // r0

  CTaskSimple::CTaskSimple(this);
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_BYTE *)(v1 + 24) = 0;
  *(_DWORD *)v1 = &off_66A46C;
}


// ============================================================

// Address: 0x4efae0
// Original: _ZN20CTaskSimpleIKManagerD2Ev
// Demangled: CTaskSimpleIKManager::~CTaskSimpleIKManager()
void __fastcall CTaskSimpleIKManager::~CTaskSimpleIKManager(CTaskSimpleIKManager *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  v2 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66A46C;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v5 = *((_DWORD *)this + 5);
  if ( v5 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4efb30
// Original: _ZN20CTaskSimpleIKManagerD0Ev
// Demangled: CTaskSimpleIKManager::~CTaskSimpleIKManager()
void __fastcall CTaskSimpleIKManager::~CTaskSimpleIKManager(CTaskSimpleIKManager *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  void *v6; // r0

  v2 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66A46C;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v5 = *((_DWORD *)this + 5);
  if ( v5 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  CTask::~CTask(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x4efb84
// Original: _ZNK20CTaskSimpleIKManager5CloneEv
// Demangled: CTaskSimpleIKManager::Clone(void)
int __fastcall CTaskSimpleIKManager::Clone(CTaskSimpleIKManager *this, unsigned int a2)
{
  int v3; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  v3 = CTask::operator new((CTask *)&dword_1C, a2);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_BYTE *)(v3 + 24) = 0;
  *(_DWORD *)v3 = &off_66A46C;
  v4 = *((_DWORD *)this + 2);
  if ( v4 )
    *(_DWORD *)(v3 + 8) = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
  v5 = *((_DWORD *)this + 3);
  if ( v5 )
    *(_DWORD *)(v3 + 12) = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
  v6 = *((_DWORD *)this + 4);
  if ( v6 )
    *(_DWORD *)(v3 + 16) = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
  v7 = *((_DWORD *)this + 5);
  if ( v7 )
    *(_DWORD *)(v3 + 20) = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
  return v3;
}


// ============================================================

// Address: 0x4efbe8
// Original: _ZN20CTaskSimpleIKManager14AddIKChainTaskEP18CTaskSimpleIKChaini
// Demangled: CTaskSimpleIKManager::AddIKChainTask(CTaskSimpleIKChain *,int)
int __fastcall CTaskSimpleIKManager::AddIKChainTask(CTaskSimpleIKManager *this, CTaskSimpleIKChain *a2, int a3)
{
  int result; // r0
  _DWORD *v5; // r3

  if ( a3 <= -1 )
  {
    if ( *((_DWORD *)this + 2) )
    {
      if ( *((_DWORD *)this + 3) )
      {
        if ( *((_DWORD *)this + 4) )
        {
          v5 = (_DWORD *)((char *)this + 20);
          if ( *((_DWORD *)this + 5) )
          {
            return 0;
          }
          else
          {
            result = 3;
            *v5 = a2;
          }
        }
        else
        {
          result = 2;
          *((_DWORD *)this + 4) = a2;
        }
      }
      else
      {
        result = 1;
        *((_DWORD *)this + 3) = a2;
      }
    }
    else
    {
      result = 0;
      *((_DWORD *)this + 2) = a2;
    }
  }
  else
  {
    *((_DWORD *)this + a3 + 2) = a2;
    return a3;
  }
  return result;
}


// ============================================================

// Address: 0x4efc3c
// Original: _ZN20CTaskSimpleIKManager13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleIKManager::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleIKManager::MakeAbortable(CTaskSimpleIKManager *this, CPed *a2, int a3, const CEvent *a4)
{
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

  if ( a3 == 2 )
  {
    v5 = *((_DWORD *)this + 2);
    if ( v5 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
      *((_DWORD *)this + 2) = 0;
    }
    v6 = *((_DWORD *)this + 3);
    if ( v6 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
      *((_DWORD *)this + 3) = 0;
    }
    v7 = *((_DWORD *)this + 4);
    if ( v7 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
      *((_DWORD *)this + 4) = 0;
    }
    v8 = *((_DWORD *)this + 5);
    if ( v8 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
      *((_DWORD *)this + 5) = 0;
    }
    return 1;
  }
  else
  {
    *((_BYTE *)this + 24) = 1;
    return 0;
  }
}


// ============================================================

// Address: 0x4efc8e
// Original: _ZN20CTaskSimpleIKManager10ProcessPedEP4CPed
// Demangled: CTaskSimpleIKManager::ProcessPed(CPed *)
bool __fastcall CTaskSimpleIKManager::ProcessPed(CTaskSimpleIKManager *this, CPed *a2)
{
  int v5; // r0
  int v6; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0

  if ( *((_BYTE *)this + 24) )
    return 1;
  v5 = *((_DWORD *)this + 2);
  if ( v5 )
  {
    if ( (*(int (__fastcall **)(int, CPed *))(*(_DWORD *)v5 + 36))(v5, a2) != 1 )
    {
      v7 = 0;
      goto LABEL_10;
    }
    v6 = *((_DWORD *)this + 2);
    if ( v6 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
    *((_DWORD *)this + 2) = 0;
  }
  v7 = 1;
LABEL_10:
  v8 = *((_DWORD *)this + 3);
  if ( v8 )
  {
    if ( (*(int (__fastcall **)(int, CPed *))(*(_DWORD *)v8 + 36))(v8, a2) == 1 )
    {
      v9 = *((_DWORD *)this + 3);
      if ( v9 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
      *((_DWORD *)this + 3) = 0;
    }
    else
    {
      v7 = 0;
    }
  }
  v10 = *((_DWORD *)this + 4);
  if ( v10 )
  {
    if ( (*(int (__fastcall **)(int, CPed *))(*(_DWORD *)v10 + 36))(v10, a2) == 1 )
    {
      v11 = *((_DWORD *)this + 4);
      if ( v11 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 4))(v11);
      *((_DWORD *)this + 4) = 0;
    }
    else
    {
      v7 = 0;
    }
  }
  v12 = *((_DWORD *)this + 5);
  if ( v12 )
  {
    if ( (*(int (__fastcall **)(int, CPed *))(*(_DWORD *)v12 + 36))(v12, a2) == 1 )
    {
      v13 = *((_DWORD *)this + 5);
      if ( v13 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
      *((_DWORD *)this + 5) = 0;
    }
    else
    {
      v7 = 0;
    }
  }
  return v7 != 0;
}


// ============================================================

// Address: 0x4efd42
// Original: _ZN20CTaskSimpleIKManager17RemoveIKChainTaskEi
// Demangled: CTaskSimpleIKManager::RemoveIKChainTask(int)
int __fastcall CTaskSimpleIKManager::RemoveIKChainTask(CTaskSimpleIKManager *this, int a2)
{
  char *v2; // r4
  int v3; // r0
  _DWORD *v4; // r4
  int v5; // t1
  int result; // r0

  v2 = (char *)this + 4 * a2;
  v5 = *((_DWORD *)v2 + 2);
  v4 = v2 + 8;
  v3 = v5;
  if ( v5 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  result = 0;
  *v4 = 0;
  return result;
}


// ============================================================

// Address: 0x4efd60
// Original: _ZN20CTaskSimpleIKManager8BlendOutEii
// Demangled: CTaskSimpleIKManager::BlendOut(int,int)
_DWORD *__fastcall CTaskSimpleIKManager::BlendOut(CTaskSimpleIKManager *this, int a2, int a3)
{
  _DWORD *result; // r0
  int v4; // r1

  result = (_DWORD *)*((_DWORD *)this + a2 + 2);
  if ( !result[21] )
  {
    if ( result[2] == -1 )
      result[2] = 0;
    v4 = CTimer::m_snTimeInMilliseconds;
    result[21] = 1;
    result[18] = v4 + a3;
  }
  return result;
}


// ============================================================

// Address: 0x4efdb8
// Original: _ZN20CTaskSimpleIKManager11IsSlotEmptyEi
// Demangled: CTaskSimpleIKManager::IsSlotEmpty(int)
bool __fastcall CTaskSimpleIKManager::IsSlotEmpty(CTaskSimpleIKManager *this, int a2)
{
  return *((_DWORD *)this + a2 + 2) == 0;
}


// ============================================================

// Address: 0x4efdc8
// Original: _ZN20CTaskSimpleIKManager13GetTaskAtSlotEi
// Demangled: CTaskSimpleIKManager::GetTaskAtSlot(int)
int __fastcall CTaskSimpleIKManager::GetTaskAtSlot(CTaskSimpleIKManager *this, int a2)
{
  return *((_DWORD *)this + a2 + 2);
}


// ============================================================

// Address: 0x4f3c68
// Original: _ZNK20CTaskSimpleIKManager11GetTaskTypeEv
// Demangled: CTaskSimpleIKManager::GetTaskType(void)
int __fastcall CTaskSimpleIKManager::GetTaskType(CTaskSimpleIKManager *this)
{
  return 265;
}


// ============================================================

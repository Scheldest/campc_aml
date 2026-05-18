
// Address: 0x18f9f4
// Original: j__ZN17CTaskSimpleFacial10CreateTaskEv
// Demangled: CTaskSimpleFacial::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleFacial::CreateTask(CTaskSimpleFacial *this)
{
  return _ZN17CTaskSimpleFacial10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1a089c
// Original: j__ZN17CTaskSimpleFacialC2Eii
// Demangled: CTaskSimpleFacial::CTaskSimpleFacial(int,int)
// attributes: thunk
void __fastcall CTaskSimpleFacial::CTaskSimpleFacial(CTaskSimpleFacial *this, int a2, int a3)
{
  _ZN17CTaskSimpleFacialC2Eii(this, a2, a3);
}


// ============================================================

// Address: 0x491de8
// Original: _ZN17CTaskSimpleFacial10CreateTaskEv
// Demangled: CTaskSimpleFacial::CreateTask(void)
void __fastcall CTaskSimpleFacial::CreateTask(CTaskSimpleFacial *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  unsigned int v6; // r1
  CTaskSimpleFacial *v7; // r0
  int v8; // [sp+4h] [bp-14h] BYREF
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
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v8, byte_4, v4);
  v7 = (CTaskSimpleFacial *)CTask::operator new((CTask *)&dword_1C, v6);
  CTaskSimpleFacial::CTaskSimpleFacial(v7, v9, v8);
}


// ============================================================

// Address: 0x540c88
// Original: _ZN17CTaskSimpleFacialC2Eii
// Demangled: CTaskSimpleFacial::CTaskSimpleFacial(int,int)
void __fastcall CTaskSimpleFacial::CTaskSimpleFacial(CTaskSimpleFacial *this, int a2, int a3)
{
  int v5; // r0

  CTaskSimple::CTaskSimple(this);
  *(_WORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 24) = a3;
  *(_DWORD *)(v5 + 20) = a2;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 12) = 0;
  *(_DWORD *)v5 = &off_66D0F8;
}


// ============================================================

// Address: 0x540cb0
// Original: _ZN17CTaskSimpleFacialD2Ev
// Demangled: CTaskSimpleFacial::~CTaskSimpleFacial()
// attributes: thunk
void __fastcall CTaskSimpleFacial::~CTaskSimpleFacial(CTaskSimpleFacial *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x540cb4
// Original: _ZN17CTaskSimpleFacialD0Ev
// Demangled: CTaskSimpleFacial::~CTaskSimpleFacial()
void __fastcall CTaskSimpleFacial::~CTaskSimpleFacial(CTaskSimpleFacial *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x540cc4
// Original: _ZN17CTaskSimpleFacial13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleFacial::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleFacial::MakeAbortable(CTaskSimpleFacial *this, CPed *a2, int a3, const CEvent *a4)
{
  int Association; // r0

  Association = RpAnimBlendClumpGetAssociation();
  if ( Association )
    *(_DWORD *)(Association + 28) = -1065353216;
  return 1;
}


// ============================================================

// Address: 0x540cfc
// Original: _ZN17CTaskSimpleFacial9GetAnimIdEi
// Demangled: CTaskSimpleFacial::GetAnimId(int)
int __fastcall CTaskSimpleFacial::GetAnimId(unsigned int this, int a2)
{
  if ( this <= 8 )
    return dword_61E9B0[this];
  else
    return -1;
}


// ============================================================

// Address: 0x540d14
// Original: _ZN17CTaskSimpleFacial10ProcessPedEP4CPed
// Demangled: CTaskSimpleFacial::ProcessPed(CPed *)
int __fastcall CTaskSimpleFacial::ProcessPed(CTaskSimpleFacial *this, CPed *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r5
  int Association; // r8
  int v7; // r6
  unsigned int v8; // r0
  unsigned int v9; // r1
  __int16 v10; // r0
  __int64 v11; // r0

  v4 = *((_DWORD *)this + 5);
  if ( v4 > 8 )
    v5 = -1;
  else
    v5 = dword_61E9B0[v4];
  Association = RpAnimBlendClumpGetAssociation();
  if ( RpAnimBlendClumpGetAssociation() )
  {
    if ( v5 == 160 )
    {
      if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) <= 39 )
      {
        v7 = 0;
        *(float *)(Association + 36) = (float)((float)((float)rand() * 4.6566e-10) * 2.5) + 0.5;
        return v7;
      }
      return 0;
    }
    if ( Association )
    {
      v10 = *(_WORD *)(Association + 46);
      *(_DWORD *)(Association + 28) = -1065353216;
      *(_WORD *)(Association + 46) = v10 | 4;
    }
    return 1;
  }
  if ( *((_BYTE *)this + 16) )
  {
    if ( Association )
    {
      if ( *((_BYTE *)this + 17) )
      {
        v8 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 17) = 0;
        *((_DWORD *)this + 2) = v8;
        v9 = v8;
      }
      else
      {
        v9 = *((_DWORD *)this + 2);
        v8 = CTimer::m_snTimeInMilliseconds;
      }
      if ( v9 + *((_DWORD *)this + 3) > v8 )
        return 0;
      *(_DWORD *)(Association + 28) = -1065353216;
    }
    return 1;
  }
  v7 = 1;
  if ( !Association )
  {
    CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, v5);
    HIDWORD(v11) = *((_DWORD *)this + 6);
    LODWORD(v11) = CTimer::m_snTimeInMilliseconds;
    *((_QWORD *)this + 1) = v11;
    *((_BYTE *)this + 16) = 1;
    return 0;
  }
  return v7;
}


// ============================================================

// Address: 0x5439b4
// Original: _ZNK17CTaskSimpleFacial5CloneEv
// Demangled: CTaskSimpleFacial::Clone(void)
int __fastcall CTaskSimpleFacial::Clone(CTaskSimpleFacial *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, a2);
  v4 = *(_QWORD *)((char *)this + 20);
  CTaskSimple::CTaskSimple(v3);
  *(_WORD *)(result + 16) = 0;
  *(_QWORD *)(result + 20) = v4;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_66D0F8;
  return result;
}


// ============================================================

// Address: 0x5439e4
// Original: _ZNK17CTaskSimpleFacial11GetTaskTypeEv
// Demangled: CTaskSimpleFacial::GetTaskType(void)
int __fastcall CTaskSimpleFacial::GetTaskType(CTaskSimpleFacial *this)
{
  return 303;
}


// ============================================================

// Address: 0x5439ec
// Original: _ZN17CTaskSimpleFacial9SerializeEv
// Demangled: CTaskSimpleFacial::Serialize(void)
void __fastcall CTaskSimpleFacial::Serialize(CTaskSimpleFacial *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  int v8; // r2
  int v9; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleFacial *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleFacial *))(*(_DWORD *)this + 20))(this) == 202 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 5);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v7 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v7 = *((_DWORD *)this + 6);
    CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
    j_free(v7);
  }
  else
  {
    v9 = (*(int (__fastcall **)(CTaskSimpleFacial *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(202, v9);
  }
}


// ============================================================

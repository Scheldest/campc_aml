
// Address: 0x194b70
// Original: j__ZN28CTaskComplexUseScriptedBrainC2EPKc
// Demangled: CTaskComplexUseScriptedBrain::CTaskComplexUseScriptedBrain(char const*)
// attributes: thunk
void __fastcall CTaskComplexUseScriptedBrain::CTaskComplexUseScriptedBrain(
        CTaskComplexUseScriptedBrain *this,
        const char *a2)
{
  _ZN28CTaskComplexUseScriptedBrainC2EPKc(this, a2);
}


// ============================================================

// Address: 0x4f19f8
// Original: _ZN28CTaskComplexUseScriptedBrainC2EPKc
// Demangled: CTaskComplexUseScriptedBrain::CTaskComplexUseScriptedBrain(char const*)
void __fastcall CTaskComplexUseScriptedBrain::CTaskComplexUseScriptedBrain(
        CTaskComplexUseScriptedBrain *this,
        const char *a2)
{
  CTaskComplex::CTaskComplex(this);
  *((_BYTE *)this + 12) = 0;
  *((_DWORD *)this + 6) = 0;
  *(_DWORD *)this = &off_66A710;
  strcpy((char *)this + 13, a2);
}


// ============================================================

// Address: 0x4f1a28
// Original: _ZN28CTaskComplexUseScriptedBrainD2Ev
// Demangled: CTaskComplexUseScriptedBrain::~CTaskComplexUseScriptedBrain()
void __fastcall CTaskComplexUseScriptedBrain::~CTaskComplexUseScriptedBrain(CTaskComplexUseScriptedBrain *this)
{
  int v2; // r0
  int *v3; // r5
  int v4; // r1
  CEntity *v5; // r0

  v2 = *((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66A710;
  if ( v2 )
  {
    v3 = CScriptedBrainTaskStore::ms_entries;
    v4 = -1;
    while ( v3[3] != v2 )
    {
      ++v4;
      v3 += 4;
      if ( v4 >= 47 )
        goto LABEL_8;
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
    v5 = (CEntity *)*v3;
    v3[3] = 0;
    if ( v5 )
    {
      CEntity::CleanUpOldReference(v5, (CEntity **)v3);
      *v3 = 0;
    }
LABEL_8:
    *((_DWORD *)this + 6) = 0;
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f1a8c
// Original: _ZN28CTaskComplexUseScriptedBrainD0Ev
// Demangled: CTaskComplexUseScriptedBrain::~CTaskComplexUseScriptedBrain()
void __fastcall CTaskComplexUseScriptedBrain::~CTaskComplexUseScriptedBrain(CTaskComplexUseScriptedBrain *this)
{
  int v2; // r0
  int *v3; // r5
  int v4; // r1
  CEntity *v5; // r0
  void *v6; // r0

  v2 = *((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66A710;
  if ( v2 )
  {
    v3 = CScriptedBrainTaskStore::ms_entries;
    v4 = -1;
    while ( v3[3] != v2 )
    {
      ++v4;
      v3 += 4;
      if ( v4 >= 47 )
        goto LABEL_8;
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
    v5 = (CEntity *)*v3;
    v3[3] = 0;
    if ( v5 )
    {
      CEntity::CleanUpOldReference(v5, (CEntity **)v3);
      *v3 = 0;
    }
LABEL_8:
    *((_DWORD *)this + 6) = 0;
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x4f1af4
// Original: _ZN28CTaskComplexUseScriptedBrain13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexUseScriptedBrain::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexUseScriptedBrain::MakeAbortable(
        CTaskComplexUseScriptedBrain *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v8; // r0

  if ( !a4 )
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             a3,
             a4);
  if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 32 )
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             a3,
             a4);
  v8 = *((_DWORD *)a4 + 4);
  if ( !v8 || (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8) != 233 )
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             a3,
             a4);
  *((_BYTE *)this + 12) = 1;
  return 0;
}


// ============================================================

// Address: 0x4f1b44
// Original: _ZN28CTaskComplexUseScriptedBrain17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexUseScriptedBrain::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexUseScriptedBrain::CreateNextSubTask(CTaskComplexUseScriptedBrain *this, CPed *a2)
{
  int v4; // r0
  int *v5; // r6
  int v6; // r1
  CEntity *v7; // r0
  signed int v8; // r1
  int *v9; // r0
  int v10; // r0
  CTaskSimple *v11; // r0
  int v12; // r0

  v4 = *((_DWORD *)this + 6);
  if ( v4 )
  {
    v5 = CScriptedBrainTaskStore::ms_entries;
    v6 = -1;
    while ( v5[3] != v4 )
    {
      ++v6;
      v5 += 4;
      if ( v6 >= 47 )
        goto LABEL_8;
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    v7 = (CEntity *)*v5;
    v5[3] = 0;
    if ( v7 )
    {
      CEntity::CleanUpOldReference(v7, (CEntity **)v5);
      *v5 = 0;
    }
LABEL_8:
    *((_DWORD *)this + 6) = 0;
  }
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 1801 )
  {
    v8 = -1;
    v9 = &dword_9FEC60;
    while ( (CPed *)*(v9 - 3) != a2 )
    {
      ++v8;
      v9 += 4;
      if ( v8 >= 47 )
      {
        *((_DWORD *)this + 6) = 0;
        goto LABEL_16;
      }
    }
    v10 = *v9;
    *((_DWORD *)this + 6) = v10;
    if ( v10 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      return;
    }
LABEL_16:
    v11 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, v8);
    CTaskSimple::CTaskSimple(v11);
    *(_WORD *)(v12 + 16) = 0;
    *(_DWORD *)(v12 + 20) = 2000;
    *(_DWORD *)(v12 + 8) = 0;
    *(_DWORD *)(v12 + 12) = 0;
    *(_DWORD *)v12 = &off_665760;
  }
}


// ============================================================

// Address: 0x4f1c10
// Original: _ZN28CTaskComplexUseScriptedBrain18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexUseScriptedBrain::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexUseScriptedBrain::CreateFirstSubTask(CTaskComplexUseScriptedBrain *this, CPed *a2)
{
  int v2; // r3
  unsigned int *v3; // r12
  unsigned int v4; // r1
  CTaskSimple *v5; // r0
  int v6; // r0

  v2 = -1;
  v3 = (unsigned int *)&dword_9FEC60;
  while ( (CPed *)*(v3 - 3) != a2 )
  {
    ++v2;
    v3 += 4;
    if ( v2 >= 47 )
    {
      v4 = 0;
      *((_DWORD *)this + 6) = 0;
      goto LABEL_7;
    }
  }
  v4 = *v3;
  *((_DWORD *)this + 6) = *v3;
  if ( v4 )
  {
    (*(void (__fastcall **)(unsigned int))(*(_DWORD *)v4 + 8))(v4);
    return;
  }
LABEL_7:
  v5 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, v4);
  CTaskSimple::CTaskSimple(v5);
  *(_WORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 20) = 2000;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)v6 = &off_665760;
}


// ============================================================

// Address: 0x4f1c78
// Original: _ZN28CTaskComplexUseScriptedBrain14ControlSubTaskEP4CPed
// Demangled: CTaskComplexUseScriptedBrain::ControlSubTask(CPed *)
int __fastcall CTaskComplexUseScriptedBrain::ControlSubTask(CTaskComplexUseScriptedBrain *this, CPed *a2)
{
  int v3; // r2
  int *v4; // r0
  int v5; // r5
  int result; // r0

  v3 = -1;
  v4 = &dword_9FEC60;
  while ( (CPed *)*(v4 - 3) != a2 )
  {
    ++v3;
    v4 += 4;
    if ( v3 >= 47 )
    {
      v5 = 0;
      goto LABEL_6;
    }
  }
  v5 = *v4;
LABEL_6:
  result = *((_DWORD *)this + 2);
  if ( v5 != *((_DWORD *)this + 6) )
  {
    if ( (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)result + 28))(result, a2, 1, 0) == 1 )
    {
      *((_DWORD *)this + 6) = v5;
      if ( v5 )
        return (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      else
        return 0;
    }
    else
    {
      return *((_DWORD *)this + 2);
    }
  }
  return result;
}


// ============================================================

// Address: 0x4f4430
// Original: _ZNK28CTaskComplexUseScriptedBrain5CloneEv
// Demangled: CTaskComplexUseScriptedBrain::Clone(void)
int __fastcall CTaskComplexUseScriptedBrain::Clone(CTaskComplexUseScriptedBrain *this, unsigned int a2)
{
  int v3; // r5

  v3 = CTask::operator new((CTask *)&dword_1C, a2);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_BYTE *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)v3 = &off_66A710;
  strcpy((char *)(v3 + 13), (const char *)this + 13);
  return v3;
}


// ============================================================

// Address: 0x4f4468
// Original: _ZNK28CTaskComplexUseScriptedBrain11GetTaskTypeEv
// Demangled: CTaskComplexUseScriptedBrain::GetTaskType(void)
int __fastcall CTaskComplexUseScriptedBrain::GetTaskType(CTaskComplexUseScriptedBrain *this)
{
  return 1800;
}


// ============================================================

// Address: 0x4f4470
// Original: _ZN28CTaskComplexUseScriptedBrain9SerializeEv
// Demangled: CTaskComplexUseScriptedBrain::Serialize(void)
int __fastcall CTaskComplexUseScriptedBrain::Serialize(CTaskComplexUseScriptedBrain *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexUseScriptedBrain *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexUseScriptedBrain *))(*(_DWORD *)this + 20))(this) == 1800 )
  {
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskComplexUseScriptedBrain *)((char *)this + 13), byte_8, v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskComplexUseScriptedBrain *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(1800, v7);
  }
}


// ============================================================

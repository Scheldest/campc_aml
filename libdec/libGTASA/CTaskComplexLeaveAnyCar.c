
// Address: 0x18f360
// Original: j__ZN23CTaskComplexLeaveAnyCar10CreateTaskEv
// Demangled: CTaskComplexLeaveAnyCar::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexLeaveAnyCar::CreateTask(CTaskComplexLeaveAnyCar *this)
{
  return _ZN23CTaskComplexLeaveAnyCar10CreateTaskEv(this);
}


// ============================================================

// Address: 0x4937a0
// Original: _ZN23CTaskComplexLeaveAnyCar10CreateTaskEv
// Demangled: CTaskComplexLeaveAnyCar::CreateTask(void)
int __fastcall CTaskComplexLeaveAnyCar::CreateTask(CTaskComplexLeaveAnyCar *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  unsigned int v8; // r1
  CTaskComplex *v9; // r0
  char v10; // r4
  char v11; // r5
  int v12; // r6
  int result; // r0
  char v14; // [sp+2h] [bp-1Eh] BYREF
  char v15; // [sp+3h] [bp-1Dh] BYREF
  int v16; // [sp+4h] [bp-1Ch] BYREF
  _BYTE v17[2]; // [sp+Ah] [bp-16h] BYREF
  _BYTE v18[2]; // [sp+Ch] [bp-14h] BYREF
  _BYTE v19[18]; // [sp+Eh] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v18, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 1, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v19, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, (char *)&stderr + 1, v6);
  v9 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, v8);
  v10 = v14;
  v11 = v15;
  v12 = v16;
  CTaskComplex::CTaskComplex(v9);
  *(_DWORD *)(result + 12) = v12;
  *(_DWORD *)result = &off_66AF90;
  *(_BYTE *)(result + 16) = v11;
  *(_BYTE *)(result + 17) = v10;
  return result;
}


// ============================================================

// Address: 0x4f95fa
// Original: _ZN23CTaskComplexLeaveAnyCar17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexLeaveAnyCar::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexLeaveAnyCar::CreateNextSubTask(CTaskComplexLeaveAnyCar *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x4f9600
// Original: _ZN23CTaskComplexLeaveAnyCar18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexLeaveAnyCar::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexLeaveAnyCar::CreateFirstSubTask(CTaskComplexLeaveAnyCar *this, CPed *a2)
{
  int v4; // r0
  bool v5; // zf
  CTaskComplex *v6; // r0
  __int16 v7; // r8
  int v8; // r4
  CEntity *v9; // r5
  int v10; // r6

  v4 = *((_DWORD *)a2 + 356);
  v5 = v4 == 0;
  if ( v4 )
    v5 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
  if ( v5 )
  {
    v8 = CTask::operator new((CTask *)byte_8, (unsigned int)a2);
    CTaskSimple::CTaskSimple((CTaskSimple *)v8);
    *(_DWORD *)v8 = &off_669000;
  }
  else
  {
    v6 = (CTaskComplex *)CTask::operator new((CTask *)&dword_34, (unsigned int)a2);
    v7 = *((_WORD *)this + 8);
    v8 = (int)v6;
    v9 = (CEntity *)*((_DWORD *)a2 + 356);
    v10 = *((_DWORD *)this + 3);
    CTaskComplex::CTaskComplex(v6);
    *(_DWORD *)(v8 + 16) = 0;
    *(_DWORD *)(v8 + 20) = v10;
    *(_WORD *)(v8 + 24) = v7;
    *(_BYTE *)(v8 + 26) = 0;
    *(_DWORD *)(v8 + 28) = 0;
    *(_BYTE *)(v8 + 32) = 0;
    *(_BYTE *)(v8 + 33) = 0;
    *(_DWORD *)(v8 + 36) = 15;
    *(_DWORD *)(v8 + 40) = 1082130432;
    *(_DWORD *)(v8 + 44) = 1065353216;
    *(_BYTE *)(v8 + 48) = 0;
    *(_DWORD *)v8 = &off_66ABEC;
    *(_DWORD *)(v8 + 12) = v9;
    if ( v9 )
      CEntity::RegisterReference(v9, (CEntity **)(v8 + 12));
  }
  return v8;
}


// ============================================================

// Address: 0x4f96a4
// Original: _ZN23CTaskComplexLeaveAnyCar14ControlSubTaskEP4CPed
// Demangled: CTaskComplexLeaveAnyCar::ControlSubTask(CPed *)
int __fastcall CTaskComplexLeaveAnyCar::ControlSubTask(CTaskComplexLeaveAnyCar *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4fd30c
// Original: _ZN23CTaskComplexLeaveAnyCarD0Ev
// Demangled: CTaskComplexLeaveAnyCar::~CTaskComplexLeaveAnyCar()
void __fastcall CTaskComplexLeaveAnyCar::~CTaskComplexLeaveAnyCar(CTaskComplexLeaveAnyCar *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4fd31c
// Original: _ZNK23CTaskComplexLeaveAnyCar5CloneEv
// Demangled: CTaskComplexLeaveAnyCar::Clone(void)
int __fastcall CTaskComplexLeaveAnyCar::Clone(CTaskComplexLeaveAnyCar *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int16 v4; // r5
  int v5; // r4
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, a2);
  v4 = *((_WORD *)this + 8);
  v5 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = v5;
  *(_WORD *)(result + 16) = v4;
  *(_DWORD *)result = &off_66AF90;
  return result;
}


// ============================================================

// Address: 0x4fd344
// Original: _ZNK23CTaskComplexLeaveAnyCar11GetTaskTypeEv
// Demangled: CTaskComplexLeaveAnyCar::GetTaskType(void)
int __fastcall CTaskComplexLeaveAnyCar::GetTaskType(CTaskComplexLeaveAnyCar *this)
{
  return 714;
}


// ============================================================

// Address: 0x4fd34c
// Original: _ZN23CTaskComplexLeaveAnyCar9SerializeEv
// Demangled: CTaskComplexLeaveAnyCar::Serialize(void)
int __fastcall CTaskComplexLeaveAnyCar::Serialize(CTaskComplexLeaveAnyCar *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r2
  int v8; // r2
  int v10; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexLeaveAnyCar *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexLeaveAnyCar *))(*(_DWORD *)this + 20))(this) == 714 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CTaskComplexLeaveAnyCar *)((char *)this + 16), (char *)&stderr + 1, v7);
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskComplexLeaveAnyCar *)((char *)this + 17), (char *)&stderr + 1, v8);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexLeaveAnyCar *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(714, v10);
  }
}


// ============================================================

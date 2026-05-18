
// Address: 0x18af64
// Original: j__ZN22CTaskInteriorBeInHouse18GetInfoForPedToUseEP4CPedPi
// Demangled: CTaskInteriorBeInHouse::GetInfoForPedToUse(CPed *,int *)
// attributes: thunk
int __fastcall CTaskInteriorBeInHouse::GetInfoForPedToUse(CTaskInteriorBeInHouse *this, CPed *a2, int *a3)
{
  return _ZN22CTaskInteriorBeInHouse18GetInfoForPedToUseEP4CPedPi(this, a2, a3);
}


// ============================================================

// Address: 0x1939d8
// Original: j__ZN22CTaskInteriorBeInHouseC2EP15InteriorGroup_c
// Demangled: CTaskInteriorBeInHouse::CTaskInteriorBeInHouse(InteriorGroup_c *)
// attributes: thunk
void __fastcall CTaskInteriorBeInHouse::CTaskInteriorBeInHouse(CTaskInteriorBeInHouse *this, InteriorGroup_c *a2)
{
  _ZN22CTaskInteriorBeInHouseC2EP15InteriorGroup_c(this, a2);
}


// ============================================================

// Address: 0x528c28
// Original: _ZN22CTaskInteriorBeInHouseC2EP15InteriorGroup_c
// Demangled: CTaskInteriorBeInHouse::CTaskInteriorBeInHouse(InteriorGroup_c *)
void __fastcall CTaskInteriorBeInHouse::CTaskInteriorBeInHouse(CTaskInteriorBeInHouse *this, InteriorGroup_c *a2)
{
  _DWORD *v3; // r0

  CTaskComplex::CTaskComplex(this);
  v3[3] = a2;
  v3[4] = 0;
  v3[5] = 0;
  *v3 = &off_66C780;
}


// ============================================================

// Address: 0x528c4c
// Original: _ZN22CTaskInteriorBeInHouseD2Ev
// Demangled: CTaskInteriorBeInHouse::~CTaskInteriorBeInHouse()
// attributes: thunk
void __fastcall CTaskInteriorBeInHouse::~CTaskInteriorBeInHouse(CTaskInteriorBeInHouse *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x528c50
// Original: _ZN22CTaskInteriorBeInHouseD0Ev
// Demangled: CTaskInteriorBeInHouse::~CTaskInteriorBeInHouse()
void __fastcall CTaskInteriorBeInHouse::~CTaskInteriorBeInHouse(CTaskInteriorBeInHouse *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x528c60
// Original: _ZNK22CTaskInteriorBeInHouse5CloneEv
// Demangled: CTaskInteriorBeInHouse::Clone(void)
_DWORD *__fastcall CTaskInteriorBeInHouse::Clone(CTaskInteriorBeInHouse *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r4
  _DWORD *result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  result[3] = v4;
  result[4] = 0;
  result[5] = 0;
  *result = &off_66C780;
  return result;
}


// ============================================================

// Address: 0x528c8c
// Original: _ZN22CTaskInteriorBeInHouse17CreateNextSubTaskEP4CPed
// Demangled: CTaskInteriorBeInHouse::CreateNextSubTask(CPed *)
int __fastcall CTaskInteriorBeInHouse::CreateNextSubTask(CTaskInteriorBeInHouse *this, CPed *a2)
{
  unsigned int v3; // r1
  CTaskComplex *v4; // r0
  __int64 v5; // kr00_8
  int v6; // r6
  int result; // r0
  int v8[5]; // [sp+4h] [bp-14h] BYREF

  *((_DWORD *)a2 + 291) |= 0x80u;
  CTaskInteriorBeInHouse::GetInfoForPedToUse(this, a2, v8);
  v4 = (CTaskComplex *)CTask::operator new((CTask *)&dword_1C, v3);
  v5 = *((_QWORD *)this + 2);
  v6 = v8[0];
  CTaskComplex::CTaskComplex(v4);
  *(_DWORD *)result = &off_66C8BC;
  *(_DWORD *)(result + 12) = HIDWORD(v5);
  *(_DWORD *)(result + 16) = v5;
  *(_DWORD *)(result + 20) = v6;
  *(_BYTE *)(result + 24) = 0;
  return result;
}


// ============================================================

// Address: 0x528cdc
// Original: _ZN22CTaskInteriorBeInHouse18GetInfoForPedToUseEP4CPedPi
// Demangled: CTaskInteriorBeInHouse::GetInfoForPedToUse(CPed *,int *)
int __fastcall CTaskInteriorBeInHouse::GetInfoForPedToUse(CTaskInteriorBeInHouse *this, CPed *a2, int *a3)
{
  int v4; // r4
  int *v6; // r5
  unsigned __int16 v7; // r0
  int v8; // r1
  int v9; // s0
  int result; // r0

  v4 = *((_DWORD *)a2 + 359);
  *((_DWORD *)this + 5) = 0;
  v6 = (int *)((char *)this + 20);
  v7 = rand();
  v8 = 90;
  v9 = (int)(float)((float)((float)v7 * 0.000015259) * 100.0);
  if ( (unsigned int)(v4 - 7) < 0xA )
    v8 = 0;
  if ( v8 > v9 )
  {
    if ( (rand() & 1) != 0 )
    {
      if ( !InteriorGroup_c::FindInteriorInfo() )
LABEL_8:
        InteriorGroup_c::FindInteriorInfo();
    }
    else if ( !InteriorGroup_c::FindInteriorInfo() )
    {
      goto LABEL_8;
    }
    *a3 = -1;
  }
  result = *v6;
  if ( v9 <= 99 && !result )
  {
    InteriorGroup_c::FindInteriorInfo();
    *a3 = -1;
    result = *((_DWORD *)this + 5);
  }
  if ( v9 <= 99 && !result )
  {
    InteriorGroup_c::FindInteriorInfo();
    *a3 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 25000.0) + 5000;
    result = *((_DWORD *)this + 5);
  }
  if ( !result )
  {
    InteriorGroup_c::FindInteriorInfo();
    *a3 = -1;
    result = *((_DWORD *)this + 5);
    if ( !result )
    {
      result = InteriorGroup_c::FindInteriorInfo();
      *a3 = -1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x528e18
// Original: _ZN22CTaskInteriorBeInHouse18CreateFirstSubTaskEP4CPed
// Demangled: CTaskInteriorBeInHouse::CreateFirstSubTask(CPed *)
int __fastcall CTaskInteriorBeInHouse::CreateFirstSubTask(CTaskInteriorBeInHouse *this, CPed *a2)
{
  unsigned int v3; // r1
  CTaskComplex *v4; // r0
  __int64 v5; // kr00_8
  int v6; // r6
  int result; // r0
  int v8[5]; // [sp+4h] [bp-14h] BYREF

  CTaskInteriorBeInHouse::GetInfoForPedToUse(this, a2, v8);
  v4 = (CTaskComplex *)CTask::operator new((CTask *)&dword_1C, v3);
  v5 = *((_QWORD *)this + 2);
  v6 = v8[0];
  CTaskComplex::CTaskComplex(v4);
  *(_DWORD *)result = &off_66C8BC;
  *(_DWORD *)(result + 12) = HIDWORD(v5);
  *(_DWORD *)(result + 16) = v5;
  *(_DWORD *)(result + 20) = v6;
  *(_BYTE *)(result + 24) = 1;
  return result;
}


// ============================================================

// Address: 0x528e5c
// Original: _ZN22CTaskInteriorBeInHouse14ControlSubTaskEP4CPed
// Demangled: CTaskInteriorBeInHouse::ControlSubTask(CPed *)
int __fastcall CTaskInteriorBeInHouse::ControlSubTask(CTaskInteriorBeInHouse *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x52afac
// Original: _ZNK22CTaskInteriorBeInHouse11GetTaskTypeEv
// Demangled: CTaskInteriorBeInHouse::GetTaskType(void)
int __fastcall CTaskInteriorBeInHouse::GetTaskType(CTaskInteriorBeInHouse *this)
{
  return 1402;
}


// ============================================================

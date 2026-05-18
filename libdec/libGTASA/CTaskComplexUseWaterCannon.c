
// Address: 0x511f78
// Original: _ZN26CTaskComplexUseWaterCannonC2EP5CFire
// Demangled: CTaskComplexUseWaterCannon::CTaskComplexUseWaterCannon(CFire *)
void __fastcall CTaskComplexUseWaterCannon::CTaskComplexUseWaterCannon(CTaskComplexUseWaterCannon *this, CFire *a2)
{
  _DWORD *v3; // r0

  CTaskComplex::CTaskComplex(this);
  v3[3] = a2;
  *v3 = &off_66BB04;
}


// ============================================================

// Address: 0x511f94
// Original: _ZN26CTaskComplexUseWaterCannonD2Ev
// Demangled: CTaskComplexUseWaterCannon::~CTaskComplexUseWaterCannon()
// attributes: thunk
void __fastcall CTaskComplexUseWaterCannon::~CTaskComplexUseWaterCannon(CTaskComplexUseWaterCannon *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x511f98
// Original: _ZN26CTaskComplexUseWaterCannonD0Ev
// Demangled: CTaskComplexUseWaterCannon::~CTaskComplexUseWaterCannon()
void __fastcall CTaskComplexUseWaterCannon::~CTaskComplexUseWaterCannon(CTaskComplexUseWaterCannon *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x511fa8
// Original: _ZN26CTaskComplexUseWaterCannon17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexUseWaterCannon::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexUseWaterCannon::CreateNextSubTask(CTaskComplexUseWaterCannon *this, CPed *a2)
{
  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  return 0;
}


// ============================================================

// Address: 0x511fb8
// Original: _ZN26CTaskComplexUseWaterCannon18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexUseWaterCannon::CreateFirstSubTask(CPed *)
CTaskSimpleCarDrive *__fastcall CTaskComplexUseWaterCannon::CreateFirstSubTask(
        CTaskComplexUseWaterCannon *this,
        CVehicle **a2)
{
  CTaskSimpleCarDrive *v3; // r0

  v3 = (CTaskSimpleCarDrive *)CTask::operator new((CTask *)&dword_60, (unsigned int)a2);
  return j_CTaskSimpleCarDrive::CTaskSimpleCarDrive(v3, a2[356], 0, 0);
}


// ============================================================

// Address: 0x511fd4
// Original: _ZN26CTaskComplexUseWaterCannon14ControlSubTaskEP4CPed
// Demangled: CTaskComplexUseWaterCannon::ControlSubTask(CPed *)
_DWORD *__fastcall CTaskComplexUseWaterCannon::ControlSubTask(CTaskComplexUseWaterCannon *this, CPed *a2)
{
  _DWORD *v4; // r4
  CAutomobile *v5; // r0
  CFire *v6; // r1

  v4 = (_DWORD *)*((_DWORD *)this + 2);
  if ( (*(int (__fastcall **)(_DWORD *))(*v4 + 20))(v4) == 709 )
  {
    v5 = (CAutomobile *)*((_DWORD *)a2 + 356);
    v6 = (CFire *)(*((_BYTE *)v5 + 58) & 0xF8);
    if ( v6 == (CFire *)&off_18 && (v6 = (CFire *)*((_DWORD *)this + 3), *(unsigned __int8 *)v6 << 31) )
    {
      CAutomobile::FireTruckControl(v5, v6);
    }
    else
    {
      v4 = (_DWORD *)CTask::operator new((CTask *)&dword_70, (unsigned int)v6);
      CTaskSimpleCarDrive::CTaskSimpleCarDrive((CTaskSimpleCarDrive *)v4, *((CVehicle **)a2 + 356), 0, 0);
      *(_DWORD *)((char *)v4 + 106) = 0;
      *(_DWORD *)((char *)v4 + 102) = 0;
      v4[24] = 0;
      v4[25] = 0;
      *v4 = &off_66572C;
    }
  }
  return v4;
}


// ============================================================

// Address: 0x512048
// Original: _ZN26CTaskComplexUseWaterCannon14ExtinguishFireEP4CPed
// Demangled: CTaskComplexUseWaterCannon::ExtinguishFire(CPed *)
int __fastcall CTaskComplexUseWaterCannon::ExtinguishFire(CTaskComplexUseWaterCannon *this, CPed *a2)
{
  CAutomobile *v3; // r0
  CFire *v4; // r1

  v3 = (CAutomobile *)*((_DWORD *)a2 + 356);
  if ( (*((_BYTE *)v3 + 58) & 0xF8) != 0x18 )
    return 1;
  v4 = (CFire *)*((_DWORD *)this + 3);
  if ( !(*(unsigned __int8 *)v4 << 31) )
    return 1;
  CAutomobile::FireTruckControl(v3, v4);
  return 0;
}


// ============================================================

// Address: 0x51272c
// Original: _ZNK26CTaskComplexUseWaterCannon5CloneEv
// Demangled: CTaskComplexUseWaterCannon::Clone(void)
_DWORD *__fastcall CTaskComplexUseWaterCannon::Clone(CTaskComplexUseWaterCannon *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r4
  _DWORD *result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  result[3] = v4;
  *result = &off_66BB04;
  return result;
}


// ============================================================

// Address: 0x512750
// Original: _ZNK26CTaskComplexUseWaterCannon11GetTaskTypeEv
// Demangled: CTaskComplexUseWaterCannon::GetTaskType(void)
int __fastcall CTaskComplexUseWaterCannon::GetTaskType(CTaskComplexUseWaterCannon *this)
{
  return 109;
}


// ============================================================

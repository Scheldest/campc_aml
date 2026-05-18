
// Address: 0x19be04
// Original: j__ZN18CTaskComplexOnFireC2Ev
// Demangled: CTaskComplexOnFire::CTaskComplexOnFire(void)
// attributes: thunk
void __fastcall CTaskComplexOnFire::CTaskComplexOnFire(CTaskComplexOnFire *this)
{
  _ZN18CTaskComplexOnFireC2Ev(this);
}


// ============================================================

// Address: 0x4ef58c
// Original: _ZN18CTaskComplexOnFireC2Ev
// Demangled: CTaskComplexOnFire::CTaskComplexOnFire(void)
void __fastcall CTaskComplexOnFire::CTaskComplexOnFire(CTaskComplexOnFire *this)
{
  _DWORD *v1; // r0

  CTaskComplex::CTaskComplex(this);
  *v1 = &off_66A3FC;
}


// ============================================================

// Address: 0x4ef5a4
// Original: _ZN18CTaskComplexOnFireD2Ev
// Demangled: CTaskComplexOnFire::~CTaskComplexOnFire()
// attributes: thunk
void __fastcall CTaskComplexOnFire::~CTaskComplexOnFire(CTaskComplexOnFire *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4ef5a8
// Original: _ZN18CTaskComplexOnFireD0Ev
// Demangled: CTaskComplexOnFire::~CTaskComplexOnFire()
void __fastcall CTaskComplexOnFire::~CTaskComplexOnFire(CTaskComplexOnFire *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ef5b8
// Original: _ZN18CTaskComplexOnFire17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexOnFire::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexOnFire::CreateNextSubTask(CTaskComplexOnFire *this, CPed *a2)
{
  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  return 0;
}


// ============================================================

// Address: 0x4ef5c8
// Original: _ZNK18CTaskComplexOnFire13CreateSubTaskEi
// Demangled: CTaskComplexOnFire::CreateSubTask(int)
CTaskComplexSmartFleeEntity *__fastcall CTaskComplexOnFire::CreateSubTask(CTaskComplexOnFire *this, int a2)
{
  CTaskComplexSmartFleeEntity *v2; // r4
  CEntity *PlayerPed; // r0
  CTaskComplex *v4; // r0
  int v5; // r0
  char v6; // r2

  v2 = 0;
  if ( a2 == 217 )
  {
    v4 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, 0xD9u);
    CTaskComplex::CTaskComplex(v4);
    *(_DWORD *)(v5 + 12) = 0;
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 20) = 15;
    *(_DWORD *)(v5 + 24) = 1082130432;
    *(_DWORD *)(v5 + 28) = 0;
    *(_DWORD *)(v5 + 36) = 0;
    v2 = (CTaskComplexSmartFleeEntity *)v5;
    v6 = *(_BYTE *)(v5 + 32);
    *(_DWORD *)v5 = &off_669DE8;
    *(_BYTE *)(v5 + 32) = v6 & 0xF8;
  }
  else if ( a2 == 911 )
  {
    v2 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, 0x38Fu);
    PlayerPed = (CEntity *)FindPlayerPed(-1);
    CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v2, PlayerPed, 0, 1000.0, 100000, 1000, 1.0);
  }
  return v2;
}


// ============================================================

// Address: 0x4ef668
// Original: _ZN18CTaskComplexOnFire18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexOnFire::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexOnFire::CreateFirstSubTask(CTaskComplexOnFire *this, CPed *a2)
{
  CTaskComplexSmartFleeEntity *v2; // r4
  CEntity *PlayerPed; // r0

  v2 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, (unsigned int)a2);
  PlayerPed = (CEntity *)FindPlayerPed(-1);
  CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v2, PlayerPed, 0, 1000.0, 100000, 1000, 1.0);
}


// ============================================================

// Address: 0x4ef6bc
// Original: _ZN18CTaskComplexOnFire14ControlSubTaskEP4CPed
// Demangled: CTaskComplexOnFire::ControlSubTask(CPed *)
int __fastcall CTaskComplexOnFire::ControlSubTask(CTaskComplexOnFire *this, CFire **a2)
{
  int v4; // r4
  int v5; // r0
  CLocalisation *v6; // r0
  CFire *v7; // r1
  int v8; // r1
  int v9; // r0
  _BYTE v11[36]; // [sp+1Ch] [bp-24h] BYREF

  v4 = *((_DWORD *)this + 2);
  v5 = v4;
  if ( *((unsigned __int8 *)a2 + 69) << 31 )
  {
    v5 = *((_DWORD *)this + 2);
    if ( a2[462] )
    {
      CFire::Extinguish(a2[462]);
      v5 = *((_DWORD *)this + 2);
    }
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5) == 911 )
  {
    v6 = a2[462];
    if ( v6 )
    {
      if ( CLocalisation::PedsOnFire(v6) )
        CPed::Say((CPed *)a2, 0x15Au, 0, 0.1, 0, 0, 0);
      if ( (*((_BYTE *)a2 + 70) & 8) == 0 )
      {
        v7 = a2[462];
        if ( v7 )
          v8 = *((_DWORD *)v7 + 5);
        else
          v8 = 0;
        v9 = CPedDamageResponseCalculator::CPedDamageResponseCalculator(
               (int)v11,
               v8,
               COERCE_INT((float)((float)(*((float *)a2 + 463) * 500.0) * *(float *)&CTimer::ms_fTimeStep) / 1000.0),
               37,
               3,
               0);
        CPedDamageResponseCalculator::ComputeDamageResponse(v9, (CPed *)a2);
        CPedDamageResponseCalculator::~CPedDamageResponseCalculator((CPedDamageResponseCalculator *)v11);
      }
    }
    else if ( (*(int (__fastcall **)(_DWORD, CFire **, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
                *((_DWORD *)this + 2),
                a2,
                1,
                0) )
    {
      return 0;
    }
  }
  return v4;
}


// ============================================================

// Address: 0x4ef81c
// Original: _ZN18CTaskComplexOnFire17ComputeFireDamageEP4CPedR18CPedDamageResponse
// Demangled: CTaskComplexOnFire::ComputeFireDamage(CPed *,CPedDamageResponse &)
void __fastcall CTaskComplexOnFire::ComputeFireDamage(int a1)
{
  int v2; // r1
  int v3; // r1
  int v4; // r0
  _BYTE v5[36]; // [sp+Ch] [bp-24h] BYREF

  if ( (*(_BYTE *)(a1 + 70) & 8) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 1848);
    if ( v2 )
      v3 = *(_DWORD *)(v2 + 20);
    else
      v3 = 0;
    v4 = CPedDamageResponseCalculator::CPedDamageResponseCalculator(
           (int)v5,
           v3,
           COERCE_INT((float)((float)(*(float *)(a1 + 1852) * 500.0) * *(float *)&CTimer::ms_fTimeStep) / 1000.0),
           37,
           3,
           0);
    CPedDamageResponseCalculator::ComputeDamageResponse(v4, (CPed *)a1);
    CPedDamageResponseCalculator::~CPedDamageResponseCalculator((CPedDamageResponseCalculator *)v5);
  }
}


// ============================================================

// Address: 0x4f3b44
// Original: _ZNK18CTaskComplexOnFire5CloneEv
// Demangled: CTaskComplexOnFire::Clone(void)
_DWORD *__fastcall CTaskComplexOnFire::Clone(CTaskComplexOnFire *this, unsigned int a2)
{
  CTaskComplex *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], a2);
  CTaskComplex::CTaskComplex(v2);
  *result = &off_66A3FC;
  return result;
}


// ============================================================

// Address: 0x4f3b64
// Original: _ZNK18CTaskComplexOnFire11GetTaskTypeEv
// Demangled: CTaskComplexOnFire::GetTaskType(void)
int __fastcall CTaskComplexOnFire::GetTaskType(CTaskComplexOnFire *this)
{
  return 250;
}


// ============================================================

// Address: 0x4f3b68
// Original: _ZN18CTaskComplexOnFire9SerializeEv
// Demangled: CTaskComplexOnFire::Serialize(void)
int __fastcall CTaskComplexOnFire::Serialize(CTaskComplexOnFire *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexOnFire *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexOnFire *))(*(_DWORD *)this + 20))(this);
  if ( result != 250 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexOnFire *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(250, v6);
  }
  return result;
}


// ============================================================

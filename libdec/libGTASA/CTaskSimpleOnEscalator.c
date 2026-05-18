
// Address: 0x4ea93c
// Original: _ZN22CTaskSimpleOnEscalator10ProcessPedEP4CPed
// Demangled: CTaskSimpleOnEscalator::ProcessPed(CPed *)
int __fastcall CTaskSimpleOnEscalator::ProcessPed(CTaskSimpleOnEscalator *this, CPed *a2)
{
  int v3; // r1
  int v4; // r0
  CGeneral *RadianAngleBetweenPoints; // r0
  float v6; // r1
  float v8; // [sp+0h] [bp-8h]

  CTaskSimpleStandStill::ProcessPed(this, a2);
  v3 = *((_DWORD *)a2 + 354);
  if ( !v3 )
    return 1;
  v4 = *(__int16 *)(v3 + 38);
  if ( v4 != (unsigned __int16)MI_ESCALATORSTEP && v4 != (unsigned __int16)MI_ESCALATORSTEP8 )
    return 1;
  RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                           *(CGeneral **)(v3 + 72),
                                           *(float *)(v3 + 76),
                                           0.0,
                                           0.0,
                                           v8);
  *((_DWORD *)a2 + 344) = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v6);
  return 0;
}


// ============================================================

// Address: 0x4f1d50
// Original: _ZN22CTaskSimpleOnEscalatorD0Ev
// Demangled: CTaskSimpleOnEscalator::~CTaskSimpleOnEscalator()
void __fastcall CTaskSimpleOnEscalator::~CTaskSimpleOnEscalator(CTaskSimpleOnEscalator *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4f1d60
// Original: _ZNK22CTaskSimpleOnEscalator5CloneEv
// Demangled: CTaskSimpleOnEscalator::Clone(void)
int __fastcall CTaskSimpleOnEscalator::Clone(CTaskSimpleOnEscalator *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  int result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, a2);
  CTaskSimple::CTaskSimple(v2);
  *(_DWORD *)(result + 18) = 0;
  *(_DWORD *)(result + 14) = 0;
  *(_DWORD *)(result + 28) = 1090519040;
  *(_WORD *)(result + 24) = 1;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_66A74C;
  return result;
}


// ============================================================

// Address: 0x4f1d98
// Original: _ZNK22CTaskSimpleOnEscalator11GetTaskTypeEv
// Demangled: CTaskSimpleOnEscalator::GetTaskType(void)
int __fastcall CTaskSimpleOnEscalator::GetTaskType(CTaskSimpleOnEscalator *this)
{
  return 1308;
}


// ============================================================

// Address: 0x4f1dc4
// Original: _ZN22CTaskSimpleOnEscalator9SerializeEv
// Demangled: CTaskSimpleOnEscalator::Serialize(void)
int __fastcall CTaskSimpleOnEscalator::Serialize(CTaskSimpleOnEscalator *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleOnEscalator *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleOnEscalator *))(*(_DWORD *)this + 20))(this);
  if ( result != 1308 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleOnEscalator *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(1308, v6);
  }
  return result;
}


// ============================================================

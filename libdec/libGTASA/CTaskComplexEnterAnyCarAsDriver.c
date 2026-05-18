
// Address: 0x190754
// Original: j__ZN31CTaskComplexEnterAnyCarAsDriverC2Ev
// Demangled: CTaskComplexEnterAnyCarAsDriver::CTaskComplexEnterAnyCarAsDriver(void)
// attributes: thunk
void __fastcall CTaskComplexEnterAnyCarAsDriver::CTaskComplexEnterAnyCarAsDriver(CTaskComplexEnterAnyCarAsDriver *this)
{
  _ZN31CTaskComplexEnterAnyCarAsDriverC2Ev(this);
}


// ============================================================

// Address: 0x4fc954
// Original: _ZN31CTaskComplexEnterAnyCarAsDriverC2Ev
// Demangled: CTaskComplexEnterAnyCarAsDriver::CTaskComplexEnterAnyCarAsDriver(void)
void __fastcall CTaskComplexEnterAnyCarAsDriver::CTaskComplexEnterAnyCarAsDriver(CTaskComplexEnterAnyCarAsDriver *this)
{
  _DWORD *v1; // r0

  CTaskComplex::CTaskComplex(this);
  *v1 = &off_66AEA8;
}


// ============================================================

// Address: 0x4fc96c
// Original: _ZN31CTaskComplexEnterAnyCarAsDriverD2Ev
// Demangled: CTaskComplexEnterAnyCarAsDriver::~CTaskComplexEnterAnyCarAsDriver()
// attributes: thunk
void __fastcall CTaskComplexEnterAnyCarAsDriver::~CTaskComplexEnterAnyCarAsDriver(
        CTaskComplexEnterAnyCarAsDriver *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4fc970
// Original: _ZN31CTaskComplexEnterAnyCarAsDriverD0Ev
// Demangled: CTaskComplexEnterAnyCarAsDriver::~CTaskComplexEnterAnyCarAsDriver()
void __fastcall CTaskComplexEnterAnyCarAsDriver::~CTaskComplexEnterAnyCarAsDriver(
        CTaskComplexEnterAnyCarAsDriver *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4fc980
// Original: _ZN31CTaskComplexEnterAnyCarAsDriver17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexEnterAnyCarAsDriver::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexEnterAnyCarAsDriver::CreateNextSubTask(CTaskComplexEnterAnyCarAsDriver *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x4fc984
// Original: _ZN31CTaskComplexEnterAnyCarAsDriver18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexEnterAnyCarAsDriver::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexEnterAnyCarAsDriver::CreateFirstSubTask(CTaskComplexEnterAnyCarAsDriver *this, CPed *a2)
{
  CCarEnterExit *ClosestVehicleInRange; // r0
  unsigned int v4; // r1
  const CPed *v5; // r2
  CEntity *v6; // r4
  int v7; // r5
  char v8; // r2
  _DWORD *v9; // r0
  CEntity *v10; // r8
  float v11; // s16
  int v12; // r4
  int v13; // r9
  CEntity *v14; // r6
  int v15; // r0
  _DWORD *v16; // r2
  char *v17; // r0
  float32x2_t v18; // d16
  unsigned __int64 v19; // d1
  float v20; // s18
  char v21; // r2

  ClosestVehicleInRange = (CCarEnterExit *)CVehicleScanner::GetClosestVehicleInRange((CVehicleScanner *)(*((_DWORD *)a2 + 272) + 212));
  v6 = ClosestVehicleInRange;
  if ( ClosestVehicleInRange && CCarEnterExit::IsVehicleStealable(ClosestVehicleInRange, a2, v5) == 1 )
  {
    v7 = CTask::operator new((CTask *)&dword_50, v4);
    CTaskComplex::CTaskComplex((CTaskComplex *)v7);
    *(_QWORD *)(v7 + 20) = 0LL;
    *(_QWORD *)(v7 + 28) = 0LL;
    *(_DWORD *)(v7 + 36) = 6;
    *(_WORD *)(v7 + 40) = 0;
    *(_DWORD *)(v7 + 56) = 0;
    *(_BYTE *)(v7 + 60) = 0;
    *(_DWORD *)(v7 + 64) = 0;
    *(_BYTE *)(v7 + 68) = 0;
    v8 = *(_BYTE *)(v7 + 16);
    *(_DWORD *)(v7 + 72) = -1082130432;
    *(_DWORD *)v7 = &off_66A904;
    *(_BYTE *)(v7 + 16) = v8 & 0xF0 | 1;
    *(_DWORD *)(v7 + 12) = v6;
    CEntity::RegisterReference(v6, (CEntity **)(v7 + 12));
    v9 = &`vtable for'CTaskComplexEnterCarAsDriver;
  }
  else
  {
    v10 = 0;
    v11 = 3.4028e38;
    v12 = 0;
    v13 = *((_DWORD *)a2 + 272) + 224;
    do
    {
      v14 = *(CEntity **)(v13 + 4 * v12);
      if ( v14 )
      {
        v15 = *((_DWORD *)v14 + 5);
        v4 = *((_DWORD *)a2 + 5);
        v16 = (_DWORD *)(v15 + 48);
        if ( !v15 )
          v16 = (_DWORD *)((char *)v14 + 4);
        v17 = (char *)(v4 + 48);
        if ( !v4 )
          v17 = (char *)a2 + 4;
        v18.n64_u64[0] = vsub_f32(*(float32x2_t *)(v17 + 4), *(float32x2_t *)(v16 + 1)).n64_u64[0];
        v19 = vmul_f32(v18, v18).n64_u64[0];
        v20 = (float)((float)((float)(*(float *)v17 - *(float *)v16) * (float)(*(float *)v17 - *(float *)v16))
                    + *(float *)&v19)
            + *((float *)&v19 + 1);
        if ( v20 < v11 && CCarEnterExit::IsVehicleStealable(*(CCarEnterExit **)(v13 + 4 * v12), a2, (const CPed *)v16) )
        {
          v11 = v20;
          v10 = v14;
        }
      }
      ++v12;
    }
    while ( v12 != 16 );
    if ( v10 )
    {
      v7 = CTask::operator new((CTask *)&dword_50, v4);
      CTaskComplex::CTaskComplex((CTaskComplex *)v7);
      *(_QWORD *)(v7 + 20) = 0LL;
      *(_QWORD *)(v7 + 28) = 0LL;
      *(_DWORD *)(v7 + 36) = 6;
      *(_WORD *)(v7 + 40) = 0;
      *(_DWORD *)(v7 + 56) = 0;
      *(_BYTE *)(v7 + 60) = 0;
      *(_DWORD *)(v7 + 64) = 0;
      *(_BYTE *)(v7 + 68) = 0;
      v21 = *(_BYTE *)(v7 + 16);
      *(_DWORD *)(v7 + 72) = -1082130432;
      *(_DWORD *)v7 = &off_66A904;
      *(_BYTE *)(v7 + 16) = v21 & 0xF0 | 1;
      *(_DWORD *)(v7 + 12) = v10;
      CEntity::RegisterReference(v10, (CEntity **)(v7 + 12));
      v9 = &`vtable for'CTaskComplexEnterCarAsDriver;
    }
    else
    {
      v7 = CTask::operator new((CTask *)byte_8, v4);
      CTaskSimple::CTaskSimple((CTaskSimple *)v7);
      v9 = &`vtable for'CTaskSimpleNone;
    }
  }
  *(_DWORD *)v7 = *v9 + 8;
  return v7;
}


// ============================================================

// Address: 0x4fcb20
// Original: _ZN31CTaskComplexEnterAnyCarAsDriver14ControlSubTaskEP4CPed
// Demangled: CTaskComplexEnterAnyCarAsDriver::ControlSubTask(CPed *)
int __fastcall CTaskComplexEnterAnyCarAsDriver::ControlSubTask(CTaskComplexEnterAnyCarAsDriver *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4ff694
// Original: _ZNK31CTaskComplexEnterAnyCarAsDriver5CloneEv
// Demangled: CTaskComplexEnterAnyCarAsDriver::Clone(void)
_DWORD *__fastcall CTaskComplexEnterAnyCarAsDriver::Clone(CTaskComplexEnterAnyCarAsDriver *this, unsigned int a2)
{
  CTaskComplex *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], a2);
  CTaskComplex::CTaskComplex(v2);
  *result = &off_66AEA8;
  return result;
}


// ============================================================

// Address: 0x4ff6b4
// Original: _ZNK31CTaskComplexEnterAnyCarAsDriver11GetTaskTypeEv
// Demangled: CTaskComplexEnterAnyCarAsDriver::GetTaskType(void)
int __fastcall CTaskComplexEnterAnyCarAsDriver::GetTaskType(CTaskComplexEnterAnyCarAsDriver *this)
{
  return 717;
}


// ============================================================

// Address: 0x4ff6bc
// Original: _ZN31CTaskComplexEnterAnyCarAsDriver9SerializeEv
// Demangled: CTaskComplexEnterAnyCarAsDriver::Serialize(void)
int __fastcall CTaskComplexEnterAnyCarAsDriver::Serialize(CTaskComplexEnterAnyCarAsDriver *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexEnterAnyCarAsDriver *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexEnterAnyCarAsDriver *))(*(_DWORD *)this + 20))(this);
  if ( result != 717 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexEnterAnyCarAsDriver *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(717, v6);
  }
  return result;
}


// ============================================================

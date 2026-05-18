
// Address: 0x18c424
// Original: j__ZN25CTaskSimpleHurtPedWithCar10CreateTaskEv
// Demangled: CTaskSimpleHurtPedWithCar::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleHurtPedWithCar::CreateTask(CTaskSimpleHurtPedWithCar *this)
{
  return _ZN25CTaskSimpleHurtPedWithCar10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1a103c
// Original: j__ZN25CTaskSimpleHurtPedWithCarC2EP8CVehiclef
// Demangled: CTaskSimpleHurtPedWithCar::CTaskSimpleHurtPedWithCar(CVehicle *,float)
// attributes: thunk
void __fastcall CTaskSimpleHurtPedWithCar::CTaskSimpleHurtPedWithCar(
        CTaskSimpleHurtPedWithCar *this,
        CVehicle *a2,
        float a3)
{
  _ZN25CTaskSimpleHurtPedWithCarC2EP8CVehiclef(this, a2, a3);
}


// ============================================================

// Address: 0x49275c
// Original: _ZN25CTaskSimpleHurtPedWithCar10CreateTaskEv
// Demangled: CTaskSimpleHurtPedWithCar::CreateTask(void)
void __fastcall CTaskSimpleHurtPedWithCar::CreateTask(CTaskSimpleHurtPedWithCar *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  unsigned int v7; // r1
  CTaskSimpleHurtPedWithCar *v8; // r0
  float v9; // [sp+4h] [bp-1Ch] BYREF
  CPools *v10; // [sp+8h] [bp-18h] BYREF
  _BYTE v11[2]; // [sp+Ch] [bp-14h] BYREF
  _BYTE v12[18]; // [sp+Eh] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, byte_4, a3);
  if ( v10 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v10, (int)v10 + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v9, byte_4, v4);
  v8 = (CTaskSimpleHurtPedWithCar *)CTask::operator new((CTask *)&dword_14, v7);
  CTaskSimpleHurtPedWithCar::CTaskSimpleHurtPedWithCar(v8, Vehicle, v9);
}


// ============================================================

// Address: 0x50c02c
// Original: _ZN25CTaskSimpleHurtPedWithCarC2EP8CVehiclef
// Demangled: CTaskSimpleHurtPedWithCar::CTaskSimpleHurtPedWithCar(CVehicle *,float)
void __fastcall CTaskSimpleHurtPedWithCar::CTaskSimpleHurtPedWithCar(
        CTaskSimpleHurtPedWithCar *this,
        CVehicle *a2,
        float a3)
{
  CTaskSimple::CTaskSimple(this);
  *((float *)this + 3) = a3;
  *((_BYTE *)this + 16) = 0;
  *(_DWORD *)this = &off_66B7C4;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
}


// ============================================================

// Address: 0x50c06c
// Original: _ZN25CTaskSimpleHurtPedWithCarD2Ev
// Demangled: CTaskSimpleHurtPedWithCar::~CTaskSimpleHurtPedWithCar()
void __fastcall CTaskSimpleHurtPedWithCar::~CTaskSimpleHurtPedWithCar(CTaskSimpleHurtPedWithCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B7C4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x50c098
// Original: _ZN25CTaskSimpleHurtPedWithCarD0Ev
// Demangled: CTaskSimpleHurtPedWithCar::~CTaskSimpleHurtPedWithCar()
void __fastcall CTaskSimpleHurtPedWithCar::~CTaskSimpleHurtPedWithCar(CTaskSimpleHurtPedWithCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B7C4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x50c0c8
// Original: _ZN25CTaskSimpleHurtPedWithCar10ProcessPedEP4CPed
// Demangled: CTaskSimpleHurtPedWithCar::ProcessPed(CPed *)
int __fastcall CTaskSimpleHurtPedWithCar::ProcessPed(const CPed **this, CPed *a2, const CPhysical *a3)
{
  unsigned __int8 v5; // r6
  CEventDamage *v6; // r0
  unsigned __int64 *v7; // r6
  int v8; // r0
  unsigned __int64 v9; // r0
  float v10; // s2
  float v11; // s4
  const CPed *v12; // r0
  int v13; // r2
  float *v14; // r3
  float *v15; // r1
  float v16; // s2
  float v17; // s4
  const CPed *v18; // r0
  float v19; // s0
  float v20; // s6
  float v22; // [sp+10h] [bp-78h] BYREF
  float v23; // [sp+14h] [bp-74h]
  float v24; // [sp+18h] [bp-70h]
  _BYTE v25[60]; // [sp+1Ch] [bp-6Ch] BYREF
  unsigned __int8 v26; // [sp+58h] [bp-30h]
  _BYTE v27[44]; // [sp+5Ch] [bp-2Ch] BYREF

  v5 = CPedGeometryAnalyser::ComputePedHitSide(a2, this[2], a3);
  CPedDamageResponseCalculator::CPedDamageResponseCalculator((int)v27, (int)this[2], 1106247680, 49, 3, 0);
  v6 = (CEventDamage *)CEventDamage::CEventDamage(
                         (int)v25,
                         this[2],
                         CTimer::m_snTimeInMilliseconds,
                         49,
                         3,
                         v5,
                         0,
                         (*((_DWORD *)a2 + 289) >> 8) & 1);
  v7 = (unsigned __int64 *)((char *)a2 + 1156);
  if ( CEventDamage::AffectsPed(v6, a2) == 1 )
    CPedDamageResponseCalculator::ComputeDamageResponse((int)v27, a2);
  v8 = v26;
  *((_BYTE *)this + 16) = v26;
  if ( v8 )
    CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v25, 0);
  v9 = *v7 & 0xFFFFFFEFFFFFFFFFLL;
  LODWORD(v9) = *(_DWORD *)v7 & 0xFFFFFFFE;
  *v7 = v9;
  LODWORD(v9) = this[2];
  v10 = *(float *)(v9 + 72);
  v11 = *(float *)(v9 + 76) * 0.75;
  *((_DWORD *)a2 + 20) = 0;
  *((float *)a2 + 18) = v10 * 0.75;
  *((float *)a2 + 19) = v11;
  v12 = this[2];
  HIDWORD(v9) = *((_DWORD *)a2 + 5);
  v13 = *((_DWORD *)v12 + 5);
  v14 = (float *)(HIDWORD(v9) + 48);
  if ( !HIDWORD(v9) )
    v14 = (float *)((char *)a2 + 4);
  v15 = (float *)(v13 + 48);
  v16 = v14[1];
  v17 = v14[2];
  if ( !v13 )
    v15 = (float *)((char *)v12 + 4);
  v22 = *v14 - *v15;
  v23 = v16 - v15[1];
  v24 = v17 - v15[2];
  CVector::Normalise((CVector *)&v22);
  v18 = this[2];
  v19 = *((float *)v18 + 36) / 1400.0;
  v20 = v19 * -60.0;
  if ( v19 > 1.0 )
    v20 = -60.0;
  v22 = v22 * v20;
  v23 = v23 * v20;
  v24 = v20 * v24;
  CPhysical::ApplyMoveForce(v18, LODWORD(v22), LODWORD(v23), LODWORD(v24));
  CEventDamage::~CEventDamage((CEventDamage *)v25);
  CPedDamageResponseCalculator::~CPedDamageResponseCalculator((CPedDamageResponseCalculator *)v27);
  return 1;
}


// ============================================================

// Address: 0x50f690
// Original: _ZNK25CTaskSimpleHurtPedWithCar5CloneEv
// Demangled: CTaskSimpleHurtPedWithCar::Clone(void)
int __fastcall CTaskSimpleHurtPedWithCar::Clone(CTaskSimpleHurtPedWithCar *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&dword_14, a2);
  v4 = *((_QWORD *)this + 1);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_DWORD *)(v3 + 12) = HIDWORD(v4);
  *(_BYTE *)(v3 + 16) = 0;
  *(_DWORD *)v3 = &off_66B7C4;
  *(_DWORD *)(v3 + 8) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 8));
  return v3;
}


// ============================================================

// Address: 0x50f6d8
// Original: _ZNK25CTaskSimpleHurtPedWithCar11GetTaskTypeEv
// Demangled: CTaskSimpleHurtPedWithCar::GetTaskType(void)
int __fastcall CTaskSimpleHurtPedWithCar::GetTaskType(CTaskSimpleHurtPedWithCar *this)
{
  return 507;
}


// ============================================================

// Address: 0x50f6de
// Original: _ZN25CTaskSimpleHurtPedWithCar13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleHurtPedWithCar::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleHurtPedWithCar::MakeAbortable(
        CTaskSimpleHurtPedWithCar *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 0;
}


// ============================================================

// Address: 0x50f6e4
// Original: _ZN25CTaskSimpleHurtPedWithCar9SerializeEv
// Demangled: CTaskSimpleHurtPedWithCar::Serialize(void)
void __fastcall CTaskSimpleHurtPedWithCar::Serialize(CTaskSimpleHurtPedWithCar *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CVehicle *v5; // r0
  int v6; // r5
  CGenericGameStorage *v7; // r6
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r5
  int v12; // r2
  CGenericGameStorage *v13; // r5
  int v14; // r2

  v2 = (*(int (__fastcall **)(CTaskSimpleHurtPedWithCar *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleHurtPedWithCar *))(*(_DWORD *)this + 20))(this) == 507 )
  {
    v5 = (CVehicle *)*((_DWORD *)this + 2);
    if ( v5 )
    {
      v6 = GettPoolVehicleRef(v5);
      if ( UseDataFence )
        AddDataFence();
      v7 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v7 = v6;
      CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
      v9 = v7;
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v11 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v11 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
      v9 = v11;
    }
    free(v9);
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v13 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
    j_free(v13);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskSimpleHurtPedWithCar *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(507, v10);
  }
}


// ============================================================

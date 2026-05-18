
// Address: 0x19f9b0
// Original: j__ZN29CTaskComplexEnterBoatAsDriverC2EP8CVehicle
// Demangled: CTaskComplexEnterBoatAsDriver::CTaskComplexEnterBoatAsDriver(CVehicle *)
// attributes: thunk
void __fastcall CTaskComplexEnterBoatAsDriver::CTaskComplexEnterBoatAsDriver(
        CTaskComplexEnterBoatAsDriver *this,
        CVehicle *a2)
{
  _ZN29CTaskComplexEnterBoatAsDriverC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x4f8368
// Original: _ZN29CTaskComplexEnterBoatAsDriverC2EP8CVehicle
// Demangled: CTaskComplexEnterBoatAsDriver::CTaskComplexEnterBoatAsDriver(CVehicle *)
void __fastcall CTaskComplexEnterBoatAsDriver::CTaskComplexEnterBoatAsDriver(
        CTaskComplexEnterBoatAsDriver *this,
        CVehicle *a2)
{
  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)this = &off_66AB74;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4f8398
// Original: _ZN29CTaskComplexEnterBoatAsDriverD2Ev
// Demangled: CTaskComplexEnterBoatAsDriver::~CTaskComplexEnterBoatAsDriver()
void __fastcall CTaskComplexEnterBoatAsDriver::~CTaskComplexEnterBoatAsDriver(CTaskComplexEnterBoatAsDriver *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AB74;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f83c4
// Original: _ZN29CTaskComplexEnterBoatAsDriverD0Ev
// Demangled: CTaskComplexEnterBoatAsDriver::~CTaskComplexEnterBoatAsDriver()
void __fastcall CTaskComplexEnterBoatAsDriver::~CTaskComplexEnterBoatAsDriver(CTaskComplexEnterBoatAsDriver *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AB74;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4f83f4
// Original: _ZN29CTaskComplexEnterBoatAsDriver17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexEnterBoatAsDriver::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexEnterBoatAsDriver::CreateNextSubTask(CTaskComplexEnterBoatAsDriver *this, CPed *a2)
{
  int v3; // r0
  int v5; // r1

  v3 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  switch ( v3 )
  {
    case 831:
      v5 = 812;
      break;
    case 830:
      v5 = 1302;
      if ( *(_BYTE *)(*((_DWORD *)this + 2) + 28) )
        v5 = 831;
      break;
    case 812:
      v5 = 1302;
      break;
    default:
      return 0;
  }
  return CTaskComplexEnterBoatAsDriver::CreateSubTask(this, v5);
}


// ============================================================

// Address: 0x4f8440
// Original: _ZNK29CTaskComplexEnterBoatAsDriver13CreateSubTaskEi
// Demangled: CTaskComplexEnterBoatAsDriver::CreateSubTask(int)
void __fastcall CTaskComplexEnterBoatAsDriver::CreateSubTask(CVehicle **this, int a2)
{
  CTaskSimpleCarSetPedInAsDriver *v3; // r0
  CTaskComplexGetOnBoatSeat *v4; // r0
  CTaskComplexGoToBoatSteeringWheel *v5; // r0

  switch ( a2 )
  {
    case 831:
      v4 = (CTaskComplexGetOnBoatSeat *)CTask::operator new((CTask *)&word_10, 0x33Fu);
      CTaskComplexGetOnBoatSeat::CTaskComplexGetOnBoatSeat(v4, this[3]);
      break;
    case 830:
      v5 = (CTaskComplexGoToBoatSteeringWheel *)CTask::operator new((CTask *)&dword_24, 0x33Eu);
      CTaskComplexGoToBoatSteeringWheel::CTaskComplexGoToBoatSteeringWheel(v5, this[3]);
      break;
    case 812:
      v3 = (CTaskSimpleCarSetPedInAsDriver *)CTask::operator new((CTask *)&dword_1C, 0x32Cu);
      CTaskSimpleCarSetPedInAsDriver::CTaskSimpleCarSetPedInAsDriver(v3, this[3], 0);
      break;
  }
}


// ============================================================

// Address: 0x4f848c
// Original: _ZN29CTaskComplexEnterBoatAsDriver18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexEnterBoatAsDriver::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexEnterBoatAsDriver::CreateFirstSubTask(CTaskComplexEnterBoatAsDriver *this, CPed *a2)
{
  int v2; // r2
  int v3; // r1
  int v4; // r3

  v2 = *((_DWORD *)this + 3);
  if ( *((_DWORD *)a2 + 354) == v2 )
  {
    v3 = 830;
  }
  else
  {
    v4 = *((_DWORD *)a2 + 347);
    v3 = 1302;
    if ( v4 == v2 )
      v3 = 830;
  }
  CTaskComplexEnterBoatAsDriver::CreateSubTask((CVehicle **)this, v3);
}


// ============================================================

// Address: 0x4f84ae
// Original: _ZN29CTaskComplexEnterBoatAsDriver14ControlSubTaskEP4CPed
// Demangled: CTaskComplexEnterBoatAsDriver::ControlSubTask(CPed *)
int __fastcall CTaskComplexEnterBoatAsDriver::ControlSubTask(CTaskComplexEnterBoatAsDriver *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4fe108
// Original: _ZNK29CTaskComplexEnterBoatAsDriver5CloneEv
// Demangled: CTaskComplexEnterBoatAsDriver::Clone(void)
CEntity **__fastcall CTaskComplexEnterBoatAsDriver::Clone(CTaskComplexEnterBoatAsDriver *this, unsigned int a2)
{
  CEntity **v3; // r4
  CEntity *v4; // r5

  v3 = (CEntity **)CTask::operator new((CTask *)&word_10, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *v3 = (CEntity *)&off_66AB74;
  v3[3] = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, v3 + 3);
  return v3;
}


// ============================================================

// Address: 0x4fe140
// Original: _ZNK29CTaskComplexEnterBoatAsDriver11GetTaskTypeEv
// Demangled: CTaskComplexEnterBoatAsDriver::GetTaskType(void)
int __fastcall CTaskComplexEnterBoatAsDriver::GetTaskType(CTaskComplexEnterBoatAsDriver *this)
{
  return 715;
}


// ============================================================

// Address: 0x4fe148
// Original: _ZN29CTaskComplexEnterBoatAsDriver9SerializeEv
// Demangled: CTaskComplexEnterBoatAsDriver::Serialize(void)
void __fastcall CTaskComplexEnterBoatAsDriver::Serialize(CTaskComplexEnterBoatAsDriver *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CVehicle *v5; // r0
  int v6; // r4
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r4
  int v12; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexEnterBoatAsDriver *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexEnterBoatAsDriver *))(*(_DWORD *)this + 20))(this) == 715 )
  {
    v5 = (CVehicle *)*((_DWORD *)this + 3);
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
    j_free(v9);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexEnterBoatAsDriver *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(715, v10);
  }
}


// ============================================================

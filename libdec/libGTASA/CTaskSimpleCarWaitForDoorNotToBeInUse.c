
// Address: 0x18ce2c
// Original: j__ZN37CTaskSimpleCarWaitForDoorNotToBeInUse20CheckDoorsFreeOfPedsERK8CVehicleiRbS3_
// Demangled: CTaskSimpleCarWaitForDoorNotToBeInUse::CheckDoorsFreeOfPeds(CVehicle const&,int,bool &,bool &)
// attributes: thunk
int __fastcall CTaskSimpleCarWaitForDoorNotToBeInUse::CheckDoorsFreeOfPeds(
        CTaskSimpleCarWaitForDoorNotToBeInUse *this,
        const CVehicle *a2,
        int a3,
        bool *a4,
        bool *a5)
{
  return _ZN37CTaskSimpleCarWaitForDoorNotToBeInUse20CheckDoorsFreeOfPedsERK8CVehicleiRbS3_(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x1938b8
// Original: j__ZN37CTaskSimpleCarWaitForDoorNotToBeInUseC2EP8CVehicleii
// Demangled: CTaskSimpleCarWaitForDoorNotToBeInUse::CTaskSimpleCarWaitForDoorNotToBeInUse(CVehicle *,int,int)
// attributes: thunk
void __fastcall CTaskSimpleCarWaitForDoorNotToBeInUse::CTaskSimpleCarWaitForDoorNotToBeInUse(
        CTaskSimpleCarWaitForDoorNotToBeInUse *this,
        CVehicle *a2,
        int a3,
        int a4)
{
  _ZN37CTaskSimpleCarWaitForDoorNotToBeInUseC2EP8CVehicleii(this, a2, a3, a4);
}


// ============================================================

// Address: 0x50229c
// Original: _ZN37CTaskSimpleCarWaitForDoorNotToBeInUseC2EP8CVehicleii
// Demangled: CTaskSimpleCarWaitForDoorNotToBeInUse::CTaskSimpleCarWaitForDoorNotToBeInUse(CVehicle *,int,int)
void __fastcall CTaskSimpleCarWaitForDoorNotToBeInUse::CTaskSimpleCarWaitForDoorNotToBeInUse(
        CTaskSimpleCarWaitForDoorNotToBeInUse *this,
        CVehicle *a2,
        int a3,
        int a4)
{
  CTaskSimple::CTaskSimple(this);
  *((_DWORD *)this + 3) = a3;
  *((_DWORD *)this + 4) = a4;
  *(_DWORD *)this = &off_66B1DC;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
}


// ============================================================

// Address: 0x5022e0
// Original: _ZN37CTaskSimpleCarWaitForDoorNotToBeInUseD2Ev
// Demangled: CTaskSimpleCarWaitForDoorNotToBeInUse::~CTaskSimpleCarWaitForDoorNotToBeInUse()
void __fastcall CTaskSimpleCarWaitForDoorNotToBeInUse::~CTaskSimpleCarWaitForDoorNotToBeInUse(
        CTaskSimpleCarWaitForDoorNotToBeInUse *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B1DC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x50230c
// Original: _ZN37CTaskSimpleCarWaitForDoorNotToBeInUseD0Ev
// Demangled: CTaskSimpleCarWaitForDoorNotToBeInUse::~CTaskSimpleCarWaitForDoorNotToBeInUse()
void __fastcall CTaskSimpleCarWaitForDoorNotToBeInUse::~CTaskSimpleCarWaitForDoorNotToBeInUse(
        CTaskSimpleCarWaitForDoorNotToBeInUse *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B1DC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x50233c
// Original: _ZN37CTaskSimpleCarWaitForDoorNotToBeInUse17IsValidTargetDoorEi
// Demangled: CTaskSimpleCarWaitForDoorNotToBeInUse::IsValidTargetDoor(int)
unsigned int __fastcall CTaskSimpleCarWaitForDoorNotToBeInUse::IsValidTargetDoor(
        CTaskSimpleCarWaitForDoorNotToBeInUse *this,
        int a2)
{
  unsigned int v2; // r0

  v2 = (unsigned int)this - 8;
  if ( v2 <= 0xA )
    return (0x40Fu >> v2) & 1;
  else
    return 0;
}


// ============================================================

// Address: 0x502358
// Original: _ZN37CTaskSimpleCarWaitForDoorNotToBeInUse10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarWaitForDoorNotToBeInUse::ProcessPed(CPed *)
char *__fastcall CTaskSimpleCarWaitForDoorNotToBeInUse::ProcessPed(
        CTaskSimpleCarWaitForDoorNotToBeInUse *this,
        CPed *a2,
        int a3,
        int a4)
{
  CCarEnterExit *v5; // r0

  v5 = (CCarEnterExit *)*((_DWORD *)this + 2);
  if ( v5 )
    return (char *)(CCarEnterExit::IsCarDoorInUse(v5, *((const CVehicle **)this + 3), *((_DWORD *)this + 4), a4) ^ 1);
  else
    return (char *)&stderr + 1;
}


// ============================================================

// Address: 0x502376
// Original: _ZN37CTaskSimpleCarWaitForDoorNotToBeInUse14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarWaitForDoorNotToBeInUse::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarWaitForDoorNotToBeInUse::SetPedPosition(
        CTaskSimpleCarWaitForDoorNotToBeInUse *this,
        CPed *a2)
{
  int v2; // r0

  v2 = *((_DWORD *)this + 2);
  if ( v2 && v2 == *((_DWORD *)a2 + 356) && *((unsigned __int8 *)a2 + 1157) << 31 )
    CPed::SetPedPositionInCar(a2);
  return 1;
}


// ============================================================

// Address: 0x50239c
// Original: _ZN37CTaskSimpleCarWaitForDoorNotToBeInUse20CheckDoorsFreeOfPedsERK8CVehicleiRbS3_
// Demangled: CTaskSimpleCarWaitForDoorNotToBeInUse::CheckDoorsFreeOfPeds(CVehicle const&,int,bool &,bool &)
int __fastcall CTaskSimpleCarWaitForDoorNotToBeInUse::CheckDoorsFreeOfPeds(
        int this,
        const CVehicle *a2,
        _BYTE *a3,
        bool *a4,
        bool *a5)
{
  switch ( (unsigned int)a2 )
  {
    case 8u:
      if ( (*(_BYTE *)(this + 1162) & 4) != 0 )
        *a3 = 1;
      this = *(unsigned __int8 *)(this + 1163) << 29;
      if ( this < 0 )
        goto LABEL_17;
      break;
    case 9u:
      if ( (*(_BYTE *)(this + 1162) & 8) != 0 )
        *a3 = 1;
      this = *(unsigned __int8 *)(this + 1163) << 28;
      if ( this < 0 )
        goto LABEL_17;
      break;
    case 0xAu:
      if ( *(unsigned __int8 *)(this + 1162) << 31 )
        *a3 = 1;
      this = *(unsigned __int8 *)(this + 1163) << 31;
      if ( this )
        goto LABEL_17;
      break;
    case 0xBu:
      if ( (*(_BYTE *)(this + 1162) & 2) != 0 )
        *a3 = 1;
      this = *(unsigned __int8 *)(this + 1163) << 30;
      if ( this < 0 )
      {
LABEL_17:
        this = 1;
        *a4 = 1;
      }
      break;
    default:
      return this;
  }
  return this;
}


// ============================================================

// Address: 0x506dd4
// Original: _ZNK37CTaskSimpleCarWaitForDoorNotToBeInUse5CloneEv
// Demangled: CTaskSimpleCarWaitForDoorNotToBeInUse::Clone(void)
CTaskSimple *__fastcall CTaskSimpleCarWaitForDoorNotToBeInUse::Clone(
        CTaskSimpleCarWaitForDoorNotToBeInUse *this,
        unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  CTaskSimple *v5; // r4
  int v6; // r6

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_14, a2);
  v4 = *((_QWORD *)this + 1);
  v5 = v3;
  v6 = *((_DWORD *)this + 4);
  CTaskSimple::CTaskSimple(v3);
  *((_DWORD *)v5 + 3) = HIDWORD(v4);
  *((_DWORD *)v5 + 4) = v6;
  *(_DWORD *)v5 = &off_66B1DC;
  *((_DWORD *)v5 + 2) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 2);
  return v5;
}


// ============================================================

// Address: 0x506e1c
// Original: _ZNK37CTaskSimpleCarWaitForDoorNotToBeInUse11GetTaskTypeEv
// Demangled: CTaskSimpleCarWaitForDoorNotToBeInUse::GetTaskType(void)
int __fastcall CTaskSimpleCarWaitForDoorNotToBeInUse::GetTaskType(CTaskSimpleCarWaitForDoorNotToBeInUse *this)
{
  return 810;
}


// ============================================================

// Address: 0x506e22
// Original: _ZN37CTaskSimpleCarWaitForDoorNotToBeInUse13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarWaitForDoorNotToBeInUse::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarWaitForDoorNotToBeInUse::MakeAbortable(
        CTaskSimpleCarWaitForDoorNotToBeInUse *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 1;
}


// ============================================================


// Address: 0x19374c
// Original: j__ZN29CTaskSimpleSetPedAsAutoDriverC2EP8CVehicle
// Demangled: CTaskSimpleSetPedAsAutoDriver::CTaskSimpleSetPedAsAutoDriver(CVehicle *)
// attributes: thunk
void __fastcall CTaskSimpleSetPedAsAutoDriver::CTaskSimpleSetPedAsAutoDriver(
        CTaskSimpleSetPedAsAutoDriver *this,
        CVehicle *a2)
{
  _ZN29CTaskSimpleSetPedAsAutoDriverC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x505c60
// Original: _ZN29CTaskSimpleSetPedAsAutoDriverC2EP8CVehicle
// Demangled: CTaskSimpleSetPedAsAutoDriver::CTaskSimpleSetPedAsAutoDriver(CVehicle *)
void __fastcall CTaskSimpleSetPedAsAutoDriver::CTaskSimpleSetPedAsAutoDriver(
        CTaskSimpleSetPedAsAutoDriver *this,
        CVehicle *a2)
{
  CTaskSimple::CTaskSimple(this);
  *(_DWORD *)this = &off_66B4F8;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
}


// ============================================================

// Address: 0x505c90
// Original: _ZN29CTaskSimpleSetPedAsAutoDriverD2Ev
// Demangled: CTaskSimpleSetPedAsAutoDriver::~CTaskSimpleSetPedAsAutoDriver()
void __fastcall CTaskSimpleSetPedAsAutoDriver::~CTaskSimpleSetPedAsAutoDriver(CTaskSimpleSetPedAsAutoDriver *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B4F8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x505cbc
// Original: _ZN29CTaskSimpleSetPedAsAutoDriverD0Ev
// Demangled: CTaskSimpleSetPedAsAutoDriver::~CTaskSimpleSetPedAsAutoDriver()
void __fastcall CTaskSimpleSetPedAsAutoDriver::~CTaskSimpleSetPedAsAutoDriver(CTaskSimpleSetPedAsAutoDriver *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B4F8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x505cec
// Original: _ZN29CTaskSimpleSetPedAsAutoDriver10ProcessPedEP4CPed
// Demangled: CTaskSimpleSetPedAsAutoDriver::ProcessPed(CPed *)
int __fastcall CTaskSimpleSetPedAsAutoDriver::ProcessPed(CCarCtrl **this, CPed *a2)
{
  CCarCtrl *v3; // r0
  int v4; // r1
  int v5; // r2
  unsigned int v6; // r3

  CCarCtrl::JoinCarWithRoadSystem(this[2], a2);
  *((_BYTE *)this[2] + 58) = *((_BYTE *)this[2] + 58) & 7 | 0x18;
  *((_BYTE *)this[2] + 958) = 1;
  *((_BYTE *)this[2] + 980) = 10;
  v3 = this[2];
  v4 = *((_DWORD *)v3 + 267);
  v5 = *((_DWORD *)v3 + 268);
  v6 = v4 & 0xFFFFFFEF;
  if ( (v5 & 0x200) == 0 )
    v6 = v4 | 0x10;
  *((_DWORD *)v3 + 267) = v6;
  *((_DWORD *)v3 + 268) = v5;
  return 1;
}


// ============================================================

// Address: 0x507338
// Original: _ZNK29CTaskSimpleSetPedAsAutoDriver5CloneEv
// Demangled: CTaskSimpleSetPedAsAutoDriver::Clone(void)
CEntity **__fastcall CTaskSimpleSetPedAsAutoDriver::Clone(CTaskSimpleSetPedAsAutoDriver *this, unsigned int a2)
{
  CEntity **v3; // r4
  CEntity *v4; // r5

  v3 = (CEntity **)CTask::operator new((CTask *)&byte_9[3], a2);
  v4 = (CEntity *)*((_DWORD *)this + 2);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *v3 = (CEntity *)&off_66B4F8;
  v3[2] = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, v3 + 2);
  return v3;
}


// ============================================================

// Address: 0x507370
// Original: _ZNK29CTaskSimpleSetPedAsAutoDriver11GetTaskTypeEv
// Demangled: CTaskSimpleSetPedAsAutoDriver::GetTaskType(void)
int __fastcall CTaskSimpleSetPedAsAutoDriver::GetTaskType(CTaskSimpleSetPedAsAutoDriver *this)
{
  return 827;
}


// ============================================================

// Address: 0x507376
// Original: _ZN29CTaskSimpleSetPedAsAutoDriver13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleSetPedAsAutoDriver::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleSetPedAsAutoDriver::MakeAbortable(
        CTaskSimpleSetPedAsAutoDriver *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 0;
}


// ============================================================

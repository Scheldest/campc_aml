
// Address: 0x1a01c0
// Original: j__ZN25CTaskSimpleCarForcePedOutC2EP8CVehiclei
// Demangled: CTaskSimpleCarForcePedOut::CTaskSimpleCarForcePedOut(CVehicle *,int)
// attributes: thunk
void __fastcall CTaskSimpleCarForcePedOut::CTaskSimpleCarForcePedOut(
        CTaskSimpleCarForcePedOut *this,
        CVehicle *a2,
        int a3)
{
  _ZN25CTaskSimpleCarForcePedOutC2EP8CVehiclei(this, a2, a3);
}


// ============================================================

// Address: 0x503b68
// Original: _ZN25CTaskSimpleCarForcePedOutC2EP8CVehiclei
// Demangled: CTaskSimpleCarForcePedOut::CTaskSimpleCarForcePedOut(CVehicle *,int)
void __fastcall CTaskSimpleCarForcePedOut::CTaskSimpleCarForcePedOut(
        CTaskSimpleCarForcePedOut *this,
        CVehicle *a2,
        int a3)
{
  CTaskSimple::CTaskSimple(this);
  *((_DWORD *)this + 3) = a3;
  *(_DWORD *)this = &off_66B314;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
}


// ============================================================

// Address: 0x503ba4
// Original: _ZN25CTaskSimpleCarForcePedOutD2Ev
// Demangled: CTaskSimpleCarForcePedOut::~CTaskSimpleCarForcePedOut()
void __fastcall CTaskSimpleCarForcePedOut::~CTaskSimpleCarForcePedOut(CTaskSimpleCarForcePedOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B314;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x503bd0
// Original: _ZN25CTaskSimpleCarForcePedOutD0Ev
// Demangled: CTaskSimpleCarForcePedOut::~CTaskSimpleCarForcePedOut()
void __fastcall CTaskSimpleCarForcePedOut::~CTaskSimpleCarForcePedOut(CTaskSimpleCarForcePedOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B314;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x503c00
// Original: _ZN25CTaskSimpleCarForcePedOut10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarForcePedOut::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarForcePedOut::ProcessPed(CTaskSimpleCarForcePedOut *this, CPed *a2)
{
  CVehicle *v4; // r0
  bool v5; // r3
  int v6; // r2
  unsigned __int8 v8; // r0
  int v9; // r0
  int v10; // r1

  v4 = (CVehicle *)*((_DWORD *)this + 2);
  if ( !v4 )
    return 1;
  if ( CVehicle::IsDriver(v4, a2) == 1 )
  {
    v6 = *((_DWORD *)this + 2);
  }
  else
  {
    v8 = CCarEnterExit::ComputeOppositeDoorFlag(*((CCarEnterExit **)this + 2), *((const CVehicle **)this + 3), 0, v5);
    v6 = *((_DWORD *)this + 2);
    if ( (v8 & *(_BYTE *)(v6 + 1163)) != 0 )
    {
      if ( !*(_DWORD *)(v6 + 1124) )
      {
        v9 = CCarEnterExit::ComputePassengerIndexFromCarDoor(
               *((CCarEnterExit **)this + 2),
               *((const CVehicle **)this + 3),
               v6);
        v6 = *((_DWORD *)this + 2);
        if ( v9 < 1 )
          goto LABEL_12;
        v10 = 0;
        while ( !*(_DWORD *)(v6 + 4 * v10 + 1128) )
        {
          if ( ++v10 >= v9 )
            goto LABEL_12;
        }
      }
      return 0;
    }
  }
LABEL_12:
  CPed::PositionPedOutOfCollision(a2, *((_DWORD *)this + 3), (CVehicle *)v6, 1);
  return 1;
}


// ============================================================

// Address: 0x506fec
// Original: _ZNK25CTaskSimpleCarForcePedOut5CloneEv
// Demangled: CTaskSimpleCarForcePedOut::Clone(void)
int __fastcall CTaskSimpleCarForcePedOut::Clone(CTaskSimpleCarForcePedOut *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&word_10, a2);
  v4 = *((_QWORD *)this + 1);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_DWORD *)(v3 + 12) = HIDWORD(v4);
  *(_DWORD *)v3 = &off_66B314;
  *(_DWORD *)(v3 + 8) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 8));
  return v3;
}


// ============================================================

// Address: 0x507030
// Original: _ZNK25CTaskSimpleCarForcePedOut11GetTaskTypeEv
// Demangled: CTaskSimpleCarForcePedOut::GetTaskType(void)
int __fastcall CTaskSimpleCarForcePedOut::GetTaskType(CTaskSimpleCarForcePedOut *this)
{
  return 815;
}


// ============================================================

// Address: 0x507036
// Original: _ZN25CTaskSimpleCarForcePedOut13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarForcePedOut::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarForcePedOut::MakeAbortable(
        CTaskSimpleCarForcePedOut *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 0;
}


// ============================================================

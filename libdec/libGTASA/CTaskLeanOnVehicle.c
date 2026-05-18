
// Address: 0x51a918
// Original: _ZN18CTaskLeanOnVehicleC2EP7CEntityih
// Demangled: CTaskLeanOnVehicle::CTaskLeanOnVehicle(CEntity *,int,uchar)
void __fastcall CTaskLeanOnVehicle::CTaskLeanOnVehicle(
        CTaskLeanOnVehicle *this,
        CEntity *a2,
        int a3,
        unsigned __int8 a4)
{
  CTaskSimple::CTaskSimple(this);
  *((_WORD *)this + 18) = 0;
  *((_DWORD *)this + 3) = a3;
  *((_BYTE *)this + 16) = a4;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = -1;
  *((_WORD *)this + 20) = 0;
  *((_BYTE *)this + 42) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *(_DWORD *)this = &off_66BFC8;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
}


// ============================================================

// Address: 0x51a970
// Original: _ZN18CTaskLeanOnVehicleD2Ev
// Demangled: CTaskLeanOnVehicle::~CTaskLeanOnVehicle()
void __fastcall CTaskLeanOnVehicle::~CTaskLeanOnVehicle(CTaskLeanOnVehicle *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66BFC8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
  if ( v4 )
    CAnimBlendAssociation::SetDeleteCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x51a9b0
// Original: _ZN18CTaskLeanOnVehicleD0Ev
// Demangled: CTaskLeanOnVehicle::~CTaskLeanOnVehicle()
void __fastcall CTaskLeanOnVehicle::~CTaskLeanOnVehicle(CTaskLeanOnVehicle *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66BFC8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
  if ( v4 )
    CAnimBlendAssociation::SetDeleteCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x51a9f4
// Original: _ZNK18CTaskLeanOnVehicle5CloneEv
// Demangled: CTaskLeanOnVehicle::Clone(void)
CTaskSimple *__fastcall CTaskLeanOnVehicle::Clone(CTaskLeanOnVehicle *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  CTaskSimple *v5; // r4

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, a2);
  v4 = *((_QWORD *)this + 1);
  v5 = v3;
  LOBYTE(this) = *((_BYTE *)this + 16);
  CTaskSimple::CTaskSimple(v3);
  *((_WORD *)v5 + 18) = 0;
  *((_DWORD *)v5 + 3) = HIDWORD(v4);
  *((_BYTE *)v5 + 16) = (_BYTE)this;
  *((_WORD *)v5 + 20) = 0;
  *((_BYTE *)v5 + 42) = 0;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 6) = -1;
  *((_DWORD *)v5 + 7) = 0;
  *((_DWORD *)v5 + 8) = 0;
  *(_DWORD *)v5 = &off_66BFC8;
  *((_DWORD *)v5 + 2) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 2);
  return v5;
}


// ============================================================

// Address: 0x51aa54
// Original: _ZN18CTaskLeanOnVehicle13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskLeanOnVehicle::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskLeanOnVehicle::MakeAbortable(CTaskLeanOnVehicle *this, CPed *a2, int a3, const CEvent *a4)
{
  int v6; // r0
  int result; // r0

  if ( a3 == 2 )
  {
    v6 = *((_DWORD *)this + 5);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 28) = -998637568;
      CAnimBlendAssociation::SetDeleteCallback(
        *((CAnimBlendAssociation **)this + 5),
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      *((_DWORD *)this + 5) = 0;
    }
    result = 1;
    *((_BYTE *)this + 42) = 1;
    *((_DWORD *)a2 + 75) = 0;
  }
  else
  {
    *((_BYTE *)this + 41) = 1;
    return 0;
  }
  return result;
}


// ============================================================

// Address: 0x51aaa8
// Original: _ZN18CTaskLeanOnVehicle10ProcessPedEP4CPed
// Demangled: CTaskLeanOnVehicle::ProcessPed(CPed *)
int __fastcall CTaskLeanOnVehicle::ProcessPed(CTaskLeanOnVehicle *this, CPed *a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r6
  CAnimBlendAssociation *v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r2
  int v12; // r0
  int v13; // r0
  int v14; // r1
  CAnimBlendAssociation *v15; // r0
  CAnimBlendAssociation *v16; // r0
  int v17; // r0
  int v18; // r1

  v4 = *((_DWORD *)this + 2);
  if ( !v4 )
    *((_BYTE *)this + 42) = 1;
  *((_DWORD *)a2 + 75) = v4;
  v5 = *((_DWORD *)this + 5);
  if ( v5 )
    v6 = *(__int16 *)(v5 + 44);
  else
    v6 = -1;
  if ( !*((_BYTE *)this + 42) )
  {
    CPed::SetMoveState(a2, 1);
    if ( !*((_BYTE *)this + 40) || RpAnimBlendClumpGetAssociation() )
    {
      if ( *((_BYTE *)this + 41) )
      {
        switch ( v6 )
        {
          case 305:
            *(_DWORD *)(*((_DWORD *)this + 5) + 36) = 1077936128;
            break;
          case 304:
            v7 = 0;
            CAnimBlendAssociation::SetDeleteCallback(
              *((CAnimBlendAssociation **)this + 5),
              (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
              0);
            v16 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 52, 0x131u);
            goto LABEL_37;
          case 303:
            *(_DWORD *)(*((_DWORD *)this + 5) + 28) = -1056964608;
            break;
        }
      }
      v9 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
      if ( v9 )
      {
        if ( !*((_BYTE *)this + 36) )
          return 0;
        if ( *((_BYTE *)this + 37) )
        {
          v10 = CTimer::m_snTimeInMilliseconds;
          *((_BYTE *)this + 37) = 0;
          *((_DWORD *)this + 7) = v10;
          v11 = v10;
        }
        else
        {
          v11 = *((_DWORD *)this + 7);
          v10 = CTimer::m_snTimeInMilliseconds;
        }
        if ( v11 + *((_DWORD *)this + 8) > v10 || *((_WORD *)v9 + 22) == 305 )
          return 0;
        v7 = 0;
        CAnimBlendAssociation::SetDeleteCallback(
          v9,
          (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
          0);
        v16 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 52, 0x131u);
LABEL_37:
        *((_DWORD *)this + 5) = v16;
        CAnimBlendAssociation::SetFinishCallback(
          v16,
          (void (*)(CAnimBlendAssociation *, void *))CTaskLeanOnVehicle::FinishAnimCB,
          this);
        return v7;
      }
      v12 = *((_DWORD *)this + 6);
      if ( v12 == 303 )
      {
        v17 = *((_DWORD *)this + 3);
        if ( v17 >= 0 )
        {
          v18 = CTimer::m_snTimeInMilliseconds;
          *((_BYTE *)this + 36) = 1;
          *((_DWORD *)this + 7) = v18;
          *((_DWORD *)this + 8) = v17;
        }
      }
      else
      {
        if ( v12 != -1 )
          return 0;
        if ( !*((_BYTE *)this + 16) )
        {
          v15 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 52, 0x12Fu);
          goto LABEL_39;
        }
        v13 = *((_DWORD *)this + 3);
        if ( v13 >= 0 )
        {
          v14 = CTimer::m_snTimeInMilliseconds;
          *((_BYTE *)this + 36) = 1;
          *((_DWORD *)this + 7) = v14;
          *((_DWORD *)this + 8) = v13;
        }
      }
      v15 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 52, 0x130u);
LABEL_39:
      *((_DWORD *)this + 5) = v15;
      CAnimBlendAssociation::SetFinishCallback(
        v15,
        (void (*)(CAnimBlendAssociation *, void *))CTaskLeanOnVehicle::FinishAnimCB,
        this);
      return 0;
    }
  }
  v7 = 1;
  *((_DWORD *)a2 + 75) = 0;
  return v7;
}


// ============================================================

// Address: 0x51ac98
// Original: _ZN18CTaskLeanOnVehicle12FinishAnimCBEP21CAnimBlendAssociationPv
// Demangled: CTaskLeanOnVehicle::FinishAnimCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskLeanOnVehicle::FinishAnimCB(CTaskLeanOnVehicle *this, CAnimBlendAssociation *a2, void *a3)
{
  int v3; // r2
  int result; // r0

  v3 = *((__int16 *)this + 22);
  *((_DWORD *)a2 + 6) = v3;
  if ( v3 == 305 )
  {
    *((_DWORD *)this + 7) = -998637568;
    *((_BYTE *)a2 + 40) = 1;
  }
  if ( *((_BYTE *)a2 + 41) && *((_DWORD *)a2 + 6) == 303 )
  {
    *((_DWORD *)this + 7) = -998637568;
    *((_BYTE *)a2 + 40) = 1;
  }
  result = 0;
  *((_DWORD *)a2 + 5) = 0;
  return result;
}


// ============================================================

// Address: 0x51c556
// Original: _ZNK18CTaskLeanOnVehicle11GetTaskTypeEv
// Demangled: CTaskLeanOnVehicle::GetTaskType(void)
int __fastcall CTaskLeanOnVehicle::GetTaskType(CTaskLeanOnVehicle *this)
{
  return 1217;
}


// ============================================================

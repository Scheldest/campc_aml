
// Address: 0x18a590
// Original: j__ZN20CTaskComplexStealCarC2EP8CVehicle
// Demangled: CTaskComplexStealCar::CTaskComplexStealCar(CVehicle *)
// attributes: thunk
void __fastcall CTaskComplexStealCar::CTaskComplexStealCar(CTaskComplexStealCar *this, CVehicle *a2)
{
  _ZN20CTaskComplexStealCarC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x4f84b4
// Original: _ZN20CTaskComplexStealCarC2EP8CVehicle
// Demangled: CTaskComplexStealCar::CTaskComplexStealCar(CVehicle *)
void __fastcall CTaskComplexStealCar::CTaskComplexStealCar(CTaskComplexStealCar *this, CVehicle *a2)
{
  CTaskComplex::CTaskComplex(this);
  *((_WORD *)this + 12) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *(_DWORD *)this = &off_66ABB0;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4f84f0
// Original: _ZN20CTaskComplexStealCarD2Ev
// Demangled: CTaskComplexStealCar::~CTaskComplexStealCar()
void __fastcall CTaskComplexStealCar::~CTaskComplexStealCar(CTaskComplexStealCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66ABB0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 7);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 7);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f852c
// Original: _ZN20CTaskComplexStealCarD0Ev
// Demangled: CTaskComplexStealCar::~CTaskComplexStealCar()
void __fastcall CTaskComplexStealCar::~CTaskComplexStealCar(CTaskComplexStealCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66ABB0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 7);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 7);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x4f856c
// Original: _ZN20CTaskComplexStealCar17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexStealCar::CreateNextSubTask(CPed *)
CTaskSimpleSetPedAsAutoDriver *__fastcall CTaskComplexStealCar::CreateNextSubTask(CTaskComplexStealCar *this, CPed *a2)
{
  int v4; // r0
  CTaskSimpleSetPedAsAutoDriver *v5; // r4
  int v6; // r0
  bool v7; // zf
  CPed *v8; // r0
  CTaskComplex *v9; // r0
  CEntity *v10; // r6
  int v11; // r0

  if ( !*((_DWORD *)this + 3) )
    return 0;
  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v5 = 0;
  if ( v4 != 827 )
  {
    if ( v4 == 726 )
    {
      if ( *((unsigned __int8 *)a2 + 1157) << 31 )
      {
        *(_BYTE *)(*((_DWORD *)a2 + 356) + 958) = 1;
        *(_BYTE *)(*((_DWORD *)a2 + 356) + 980) = 10;
      }
    }
    else
    {
      if ( v4 != 701 )
        return v5;
      v6 = *((_DWORD *)a2 + 356);
      v7 = v6 == 0;
      if ( v6 )
        v7 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
      if ( !v7 )
      {
        v5 = (CTaskSimpleSetPedAsAutoDriver *)CTask::operator new((CTask *)&byte_9[3], 0x2BDu);
        CTaskSimpleSetPedAsAutoDriver::CTaskSimpleSetPedAsAutoDriver(v5, *((CVehicle **)this + 3));
        if ( *((_DWORD *)a2 + 359) == 20 )
          CPed::Say(a2, 0x92u, 0, 1.0, 0, 0, 0);
        v8 = (CPed *)*((_DWORD *)this + 7);
        if ( v8 && !CPed::IsPlayer(v8) )
          CPed::Say(*((CPed **)this + 7), 0x91u, 0, 1.0, 0, 0, 0);
        return v5;
      }
    }
    return 0;
  }
  v9 = (CTaskComplex *)CTask::operator new((CTask *)&word_2C, 0x33Bu);
  v10 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v9);
  *(_DWORD *)(v11 + 16) = 1109393408;
  *(_DWORD *)(v11 + 20) = -1;
  *(_DWORD *)(v11 + 24) = 2;
  *(_BYTE *)(v11 + 28) = 1;
  *(_BYTE *)(v11 + 32) = 0;
  v5 = (CTaskSimpleSetPedAsAutoDriver *)v11;
  *(_DWORD *)v11 = &off_66AD4C;
  *(_DWORD *)(v11 + 12) = v10;
  if ( v10 )
    CEntity::RegisterReference(v10, (CEntity **)(v11 + 12));
  *((_DWORD *)v5 + 10) = 1;
  *((_DWORD *)v5 + 9) = 0;
  *(_DWORD *)v5 = &off_667294;
  if ( *((_DWORD *)a2 + 359) == 20 )
  {
    *(_DWORD *)(*((_DWORD *)a2 + 356) + 1072) |= 0x80000u;
    *((_DWORD *)a2 + 292) |= 0x800u;
  }
  return v5;
}


// ============================================================

// Address: 0x4f86bc
// Original: _ZN20CTaskComplexStealCar13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexStealCar::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexStealCar::CreateSubTask(CEntity **this, int a2, CPed *a3)
{
  int v4; // r4
  CEntity *v5; // r0
  CEntity **v6; // r4
  CEntity *v7; // r0
  CEntity *v8; // r0
  CEntity *v9; // r5
  char v10; // r2
  _DWORD *v11; // r0
  CEntity *v12; // r5

  v4 = 0;
  if ( a2 <= 725 )
  {
    if ( a2 == 202 )
    {
      v4 = CTask::operator new((CTask *)&off_18, 0xCAu);
      CTaskSimple::CTaskSimple((CTaskSimple *)v4);
      *(_WORD *)(v4 + 16) = 0;
      v11 = &`vtable for'CTaskSimplePause;
      *(_DWORD *)(v4 + 20) = 0;
      *(_DWORD *)(v4 + 8) = 0;
      *(_DWORD *)(v4 + 12) = 0;
    }
    else
    {
      if ( a2 != 701 )
        return v4;
      v6 = this + 7;
      v5 = this[7];
      if ( v5 )
        CEntity::CleanUpOldReference(v5, this + 7);
      v7 = this[3];
      if ( v7 )
      {
        v8 = (CEntity *)*((_DWORD *)v7 + 281);
        if ( v8 )
        {
          *v6 = v8;
          CEntity::RegisterReference(v8, this + 7);
        }
      }
      v4 = CTask::operator new((CTask *)&dword_50, a2);
      v9 = this[3];
      CTaskComplex::CTaskComplex((CTaskComplex *)v4);
      *(_QWORD *)(v4 + 20) = 0LL;
      *(_QWORD *)(v4 + 28) = 0LL;
      *(_DWORD *)(v4 + 36) = 6;
      *(_WORD *)(v4 + 40) = 0;
      *(_DWORD *)(v4 + 56) = 0;
      *(_BYTE *)(v4 + 60) = 0;
      *(_DWORD *)(v4 + 64) = 0;
      *(_BYTE *)(v4 + 68) = 0;
      v10 = *(_BYTE *)(v4 + 16);
      *(_DWORD *)(v4 + 72) = -1082130432;
      *(_DWORD *)v4 = &off_66A904;
      *(_BYTE *)(v4 + 16) = v10 & 0xF0 | 1;
      *(_DWORD *)(v4 + 12) = v9;
      if ( v9 )
        CEntity::RegisterReference(v9, (CEntity **)(v4 + 12));
      v11 = &`vtable for'CTaskComplexEnterCarAsDriver;
    }
LABEL_24:
    *(_DWORD *)v4 = *v11 + 8;
    return v4;
  }
  switch ( a2 )
  {
    case 726:
      v4 = CTask::operator new((CTask *)&word_2C, 0x2D6u);
      v12 = this[3];
      CTaskComplex::CTaskComplex((CTaskComplex *)v4);
      *(_DWORD *)(v4 + 16) = 1109393408;
      *(_DWORD *)(v4 + 20) = -1;
      *(_DWORD *)(v4 + 24) = 2;
      *(_BYTE *)(v4 + 28) = 1;
      *(_BYTE *)(v4 + 32) = 0;
      *(_DWORD *)v4 = &off_66AD4C;
      *(_DWORD *)(v4 + 12) = v12;
      if ( v12 )
        CEntity::RegisterReference(v12, (CEntity **)(v4 + 12));
      *(_DWORD *)(v4 + 40) = 1;
      v11 = &`vtable for'CTaskComplexCarDriveMissionFleeScene;
      *(_DWORD *)(v4 + 36) = 0;
      goto LABEL_24;
    case 827:
      v4 = CTask::operator new((CTask *)&byte_9[3], 0x33Bu);
      CTaskSimpleSetPedAsAutoDriver::CTaskSimpleSetPedAsAutoDriver((CTaskSimpleSetPedAsAutoDriver *)v4, this[3]);
      break;
    case 1302:
      if ( a3 && !(*((unsigned __int8 *)a3 + 1157) << 31) )
        *((_DWORD *)a3 + 7) |= 1u;
      return 0;
  }
  return v4;
}


// ============================================================

// Address: 0x4f8840
// Original: _ZN20CTaskComplexStealCar18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexStealCar::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexStealCar::CreateFirstSubTask(CTaskComplexStealCar *this, CPed *a2)
{
  int v2; // r1
  int v3; // r1

  if ( *((_DWORD *)this + 3) )
  {
    v2 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 24) = 1;
    *((_DWORD *)this + 4) = v2;
    *((_DWORD *)this + 5) = 10000;
    v3 = 701;
  }
  else
  {
    v3 = 202;
  }
  return CTaskComplexStealCar::CreateSubTask((CEntity **)this, v3, 0);
}


// ============================================================

// Address: 0x4f886c
// Original: _ZN20CTaskComplexStealCar14ControlSubTaskEP4CPed
// Demangled: CTaskComplexStealCar::ControlSubTask(CPed *)
int __fastcall CTaskComplexStealCar::ControlSubTask(CTaskComplexStealCar *this, CPed *a2)
{
  int v4; // r4
  unsigned int v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r1

  v4 = *((_DWORD *)this + 2);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) == 701 && *((_BYTE *)this + 24) )
  {
    if ( *((_BYTE *)this + 25) )
    {
      v5 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 25) = 0;
      *((_DWORD *)this + 4) = v5;
      v6 = v5;
    }
    else
    {
      v6 = *((_DWORD *)this + 4);
      v5 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v6 + *((_DWORD *)this + 5) <= v5
      && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) == 1 )
    {
      v4 = CTask::operator new((CTask *)&off_18, v7);
      CTaskSimple::CTaskSimple((CTaskSimple *)v4);
      *(_WORD *)(v4 + 16) = 0;
      *(_DWORD *)(v4 + 20) = 0;
      *(_DWORD *)(v4 + 8) = 0;
      *(_DWORD *)(v4 + 12) = 0;
      *(_DWORD *)v4 = &off_665760;
    }
  }
  return v4;
}


// ============================================================

// Address: 0x4fe21c
// Original: _ZNK20CTaskComplexStealCar5CloneEv
// Demangled: CTaskComplexStealCar::Clone(void)
int __fastcall CTaskComplexStealCar::Clone(CTaskComplexStealCar *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5

  v3 = CTask::operator new((CTask *)&dword_20, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_WORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)v3 = &off_66ABB0;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x4fe260
// Original: _ZNK20CTaskComplexStealCar11GetTaskTypeEv
// Demangled: CTaskComplexStealCar::GetTaskType(void)
int __fastcall CTaskComplexStealCar::GetTaskType(CTaskComplexStealCar *this)
{
  return 702;
}


// ============================================================

// Address: 0x4fe268
// Original: _ZN20CTaskComplexStealCar9SerializeEv
// Demangled: CTaskComplexStealCar::Serialize(void)
void __fastcall CTaskComplexStealCar::Serialize(CTaskComplexStealCar *this)
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

  v2 = (*(int (__fastcall **)(CTaskComplexStealCar *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexStealCar *))(*(_DWORD *)this + 20))(this) == 702 )
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
    v10 = (*(int (__fastcall **)(CTaskComplexStealCar *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(702, v10);
  }
}


// ============================================================

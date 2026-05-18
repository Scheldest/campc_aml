
// Address: 0x18fd98
// Original: j__ZN20CTaskComplexDieInCarC2E11eWeaponType
// Demangled: CTaskComplexDieInCar::CTaskComplexDieInCar(eWeaponType)
// attributes: thunk
int CTaskComplexDieInCar::CTaskComplexDieInCar()
{
  return _ZN20CTaskComplexDieInCarC2E11eWeaponType();
}


// ============================================================

// Address: 0x4eb024
// Original: _ZN20CTaskComplexDieInCarC2E11eWeaponType
// Demangled: CTaskComplexDieInCar::CTaskComplexDieInCar(eWeaponType)
int __fastcall CTaskComplexDieInCar::CTaskComplexDieInCar(CTaskComplex *a1, int a2)
{
  int result; // r0

  CTaskComplex::CTaskComplex(a1);
  *(_DWORD *)(result + 12) = a2;
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)result = &off_669D44;
  return result;
}


// ============================================================

// Address: 0x4eb048
// Original: _ZN20CTaskComplexDieInCarD2Ev
// Demangled: CTaskComplexDieInCar::~CTaskComplexDieInCar()
// attributes: thunk
void __fastcall CTaskComplexDieInCar::~CTaskComplexDieInCar(CTaskComplexDieInCar *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4eb04c
// Original: _ZN20CTaskComplexDieInCarD0Ev
// Demangled: CTaskComplexDieInCar::~CTaskComplexDieInCar()
void __fastcall CTaskComplexDieInCar::~CTaskComplexDieInCar(CTaskComplexDieInCar *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4eb05c
// Original: _ZNK20CTaskComplexDieInCar28PreparePedVehicleForPedDeathEP8CVehicle
// Demangled: CTaskComplexDieInCar::PreparePedVehicleForPedDeath(CVehicle *)
int __fastcall CTaskComplexDieInCar::PreparePedVehicleForPedDeath(CTaskComplexDieInCar *this, CVehicle *a2)
{
  int result; // r0

  if ( (*((_BYTE *)a2 + 58) & 0xF8) == 0x10 )
    CCarCtrl::SwitchVehicleToRealPhysics(a2, a2);
  *((_BYTE *)a2 + 980) = 0;
  *((_WORD *)a2 + 479) = 1536;
  result = CTimer::m_snTimeInMilliseconds + 2000;
  *((_DWORD *)a2 + 240) = CTimer::m_snTimeInMilliseconds + 2000;
  return result;
}


// ============================================================

// Address: 0x4eb098
// Original: _ZN20CTaskComplexDieInCar18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexDieInCar::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexDieInCar::CreateFirstSubTask(CTaskComplexDieInCar *this, CVehicle **a2)
{
  int CurrentEvent; // r0
  int v5; // r11
  CVehicle *v6; // r0
  CVehicle **v7; // r4
  bool v8; // zf
  CEvent *v9; // r5
  int v10; // r4
  CVehicle **v11; // r6
  bool v12; // zf
  CEvent *v13; // r5
  __int64 v14; // r0
  CVehicle *v16; // r6

  CPed::SetPedState((CPed *)a2);
  CurrentEvent = CEventHandlerHistory::GetCurrentEvent((CVehicle *)((char *)a2[272] + 56));
  v5 = CurrentEvent;
  if ( CurrentEvent && (*(int (__fastcall **)(int))(*(_DWORD *)CurrentEvent + 8))(CurrentEvent) == 9 )
  {
    v6 = a2[356];
    v7 = (CVehicle **)*((_DWORD *)v6 + 281);
    v8 = v7 == 0;
    if ( v7 )
      v8 = v7 == a2;
    if ( !v8 )
    {
      v9 = (CEvent *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5);
      *((_BYTE *)v9 + 9) = 0;
      CEventGroup::Add((CVehicle *)((char *)v7[272] + 104), v9, 0);
      (*(void (__fastcall **)(CEvent *))(*(_DWORD *)v9 + 4))(v9);
      v6 = a2[356];
    }
    if ( *((_BYTE *)v6 + 1164) )
    {
      v10 = 0;
      do
      {
        v11 = (CVehicle **)*((_DWORD *)v6 + v10 + 282);
        v12 = v11 == 0;
        if ( v11 )
          v12 = v11 == a2;
        if ( !v12 )
        {
          v13 = (CEvent *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5);
          *((_BYTE *)v13 + 9) = 0;
          CEventGroup::Add((CVehicle *)((char *)v11[272] + 104), v13, 0);
          (*(void (__fastcall **)(CEvent *))(*(_DWORD *)v13 + 4))(v13);
          v6 = a2[356];
        }
        ++v10;
      }
      while ( v10 < *((unsigned __int8 *)v6 + 1164) );
    }
  }
  LODWORD(v14) = *((unsigned __int8 *)a2 + 1168);
  if ( (unsigned int)v14 >> 7 )
    goto LABEL_17;
  LODWORD(v14) = *((_DWORD *)this + 3);
  if ( (_DWORD)v14 == 51 )
    goto LABEL_17;
  LODWORD(v14) = a2[356];
  if ( (unsigned int)(*(_DWORD *)(v14 + 1444) - 3) < 2 )
    goto LABEL_17;
  LODWORD(v14) = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v14 + 232))(v14, 0);
  if ( (_DWORD)v14 )
  {
    HIDWORD(v14) = 705;
    return CTaskComplexDieInCar::CreateSubTask((CTaskComplexDieInCar *)v14, SHIDWORD(v14), (CPed *)a2);
  }
  LODWORD(v14) = CVehicle::GetVehicleAppearance(a2[356]);
  if ( (_DWORD)v14 != 1 || (v16 = a2[356], LODWORD(v14) = *((_DWORD *)v16 + 281), (CVehicle **)v14 != a2) )
  {
LABEL_17:
    HIDWORD(v14) = 214;
  }
  else
  {
    if ( (*((_BYTE *)v16 + 58) & 0xF8) == 0x10 )
      CCarCtrl::SwitchVehicleToRealPhysics(a2[356], (CVehicle *)HIDWORD(v14));
    *((_BYTE *)v16 + 980) = 0;
    *((_WORD *)v16 + 479) = 1536;
    v14 = (unsigned int)CTimer::m_snTimeInMilliseconds | 0x7D000000000LL;
    *((_DWORD *)v16 + 240) = CTimer::m_snTimeInMilliseconds + 2000;
    *((_BYTE *)this + 24) = 1;
    *((_QWORD *)this + 2) = v14;
    HIDWORD(v14) = 709;
  }
  return CTaskComplexDieInCar::CreateSubTask((CTaskComplexDieInCar *)v14, SHIDWORD(v14), (CPed *)a2);
}


// ============================================================

// Address: 0x4eb1fc
// Original: _ZNK20CTaskComplexDieInCar13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexDieInCar::CreateSubTask(int,CPed *)
CTaskComplexLeaveCar *__fastcall CTaskComplexDieInCar::CreateSubTask(CTaskComplexDieInCar *this, int a2, CVehicle **a3)
{
  CTaskComplexLeaveCar *v4; // r4
  int IsDriver; // r5
  unsigned int v6; // r1
  CTaskSimple *v7; // r0
  int v8; // r0
  int v9; // r3
  char v10; // r5

  v4 = 0;
  switch ( a2 )
  {
    case 214:
      IsDriver = CVehicle::IsDriver(a3[356], (const CPed *)a3);
      v7 = (CTaskSimple *)CTask::operator new((CTask *)&word_28, v6);
      CTaskSimple::CTaskSimple(v7);
      *(_DWORD *)(v8 + 8) = 0;
      if ( IsDriver == 1 )
        v9 = 187;
      else
        v9 = 188;
      v10 = *(_BYTE *)(v8 + 32);
      *(_DWORD *)(v8 + 12) = v9;
      *(_DWORD *)(v8 + 16) = 0;
      *(_DWORD *)(v8 + 20) = 0;
      *(_DWORD *)(v8 + 24) = 1082130432;
      v4 = (CTaskComplexLeaveCar *)v8;
      *(_DWORD *)(v8 + 28) = 0;
      *(_DWORD *)(v8 + 36) = 0;
      *(_BYTE *)(v8 + 32) = v10 & 0xFC;
      *(_DWORD *)v8 = &off_669D10;
      break;
    case 705:
      v4 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, 0x2C1u);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar(v4, a3[356], 0, 0, 0, 1);
      *((_BYTE *)v4 + 26) = 1;
      *(_DWORD *)v4 = &off_66AF54;
      break;
    case 709:
      v4 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_60, 0x2C5u);
      CTaskSimpleCarDrive::CTaskSimpleCarDrive(v4, a3[356], 0, 0);
      break;
  }
  return v4;
}


// ============================================================

// Address: 0x4eb2c0
// Original: _ZN20CTaskComplexDieInCar14ControlSubTaskEP4CPed
// Demangled: CTaskComplexDieInCar::ControlSubTask(CPed *)
int __fastcall CTaskComplexDieInCar::ControlSubTask(CTaskComplexDieInCar *this, CVehicle **a2)
{
  int v4; // r4
  unsigned int v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r1
  char *v8; // r0
  int IsDriver; // r5
  unsigned int v10; // r1
  int v11; // r2
  char v12; // r3

  v4 = *((_DWORD *)this + 2);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) == 709 && *((_BYTE *)this + 24) )
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
    v7 = v6 + *((_DWORD *)this + 5);
    if ( v7 <= v5 )
    {
      if ( *((_BYTE *)a2 + 1096) == 2
        || (*(int (__fastcall **)(CVehicle *, _DWORD))(*(_DWORD *)a2[356] + 232))(a2[356], 0) == 1 )
      {
        v4 = CTask::operator new((CTask *)&dword_34, v7);
        CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v4, a2[356], 0, 0, 0, 1);
        *(_BYTE *)(v4 + 26) = 1;
        v8 = (char *)&`vtable for'CTaskComplexLeaveCarAndDie;
      }
      else
      {
        IsDriver = CVehicle::IsDriver(a2[356], (const CPed *)a2);
        v4 = CTask::operator new((CTask *)&word_28, v10);
        CTaskSimple::CTaskSimple((CTaskSimple *)v4);
        *(_DWORD *)(v4 + 8) = 0;
        if ( IsDriver == 1 )
          v11 = 187;
        else
          v11 = 188;
        v8 = (char *)&`vtable for'CTaskSimpleDieInCar;
        v12 = *(_BYTE *)(v4 + 32);
        *(_DWORD *)(v4 + 12) = v11;
        *(_DWORD *)(v4 + 16) = 0;
        *(_DWORD *)(v4 + 20) = 0;
        *(_DWORD *)(v4 + 24) = 1082130432;
        *(_DWORD *)(v4 + 28) = 0;
        *(_DWORD *)(v4 + 36) = 0;
        *(_BYTE *)(v4 + 32) = v12 & 0xFC;
      }
      *(_DWORD *)v4 = v8 + 8;
    }
  }
  return v4;
}


// ============================================================

// Address: 0x4eb3c4
// Original: _ZN20CTaskComplexDieInCar17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexDieInCar::CreateNextSubTask(CPed *)
CTaskComplexLeaveCar *__fastcall CTaskComplexDieInCar::CreateNextSubTask(CTaskComplexDieInCar *this, CPed *a2)
{
  CTaskComplexDieInCar *v3; // r0
  int v5; // r1

  v3 = (CTaskComplexDieInCar *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v3 == (CTaskComplexDieInCar *)((char *)&dword_D4 + 2) )
    goto LABEL_8;
  if ( v3 != (CTaskComplexDieInCar *)((char *)&elf_hash_bucket[113] + 1) )
    return 0;
  v3 = (CTaskComplexDieInCar *)*((_DWORD *)a2 + 356);
  if ( !v3 )
  {
LABEL_8:
    v5 = 1302;
  }
  else
  {
    v5 = 214;
    v3 = (CTaskComplexDieInCar *)(*((unsigned __int8 *)a2 + 1157) << 31);
    if ( !v3 )
      v5 = 1302;
  }
  return CTaskComplexDieInCar::CreateSubTask(v3, v5, (CVehicle **)a2);
}


// ============================================================

// Address: 0x4f2754
// Original: _ZNK20CTaskComplexDieInCar5CloneEv
// Demangled: CTaskComplexDieInCar::Clone(void)
int __fastcall CTaskComplexDieInCar::Clone(CTaskComplexDieInCar *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r4
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_1C, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = v4;
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)result = &off_669D44;
  return result;
}


// ============================================================

// Address: 0x4f2780
// Original: _ZNK20CTaskComplexDieInCar11GetTaskTypeEv
// Demangled: CTaskComplexDieInCar::GetTaskType(void)
int __fastcall CTaskComplexDieInCar::GetTaskType(CTaskComplexDieInCar *this)
{
  return 215;
}


// ============================================================

// Address: 0x4f2784
// Original: _ZN20CTaskComplexDieInCar13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexDieInCar::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexDieInCar::MakeAbortable(CTaskComplexDieInCar *this, CPed *a2, int a3, const CEvent *a4)
{
  if ( (unsigned int)(a3 - 1) <= 1 )
    return (*(int (__fastcall **)(_DWORD, CPed *))(**((_DWORD **)this + 2) + 28))(*((_DWORD *)this + 2), a2);
  else
    return 0;
}


// ============================================================

// Address: 0x4f27a0
// Original: _ZN20CTaskComplexDieInCar9SerializeEv
// Demangled: CTaskComplexDieInCar::Serialize(void)
void __fastcall CTaskComplexDieInCar::Serialize(CTaskComplexDieInCar *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexDieInCar *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexDieInCar *))(*(_DWORD *)this + 20))(this) == 215 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    j_free(v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskComplexDieInCar *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(215, v7);
  }
}


// ============================================================

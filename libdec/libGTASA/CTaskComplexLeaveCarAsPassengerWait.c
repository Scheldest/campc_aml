
// Address: 0x19b578
// Original: j__ZN35CTaskComplexLeaveCarAsPassengerWaitD2Ev
// Demangled: CTaskComplexLeaveCarAsPassengerWait::~CTaskComplexLeaveCarAsPassengerWait()
// attributes: thunk
void __fastcall CTaskComplexLeaveCarAsPassengerWait::~CTaskComplexLeaveCarAsPassengerWait(
        CTaskComplexLeaveCarAsPassengerWait *this)
{
  _ZN35CTaskComplexLeaveCarAsPassengerWaitD2Ev(this);
}


// ============================================================

// Address: 0x19e4a0
// Original: j__ZN35CTaskComplexLeaveCarAsPassengerWaitC2EP8CVehicle
// Demangled: CTaskComplexLeaveCarAsPassengerWait::CTaskComplexLeaveCarAsPassengerWait(CVehicle *)
// attributes: thunk
void __fastcall CTaskComplexLeaveCarAsPassengerWait::CTaskComplexLeaveCarAsPassengerWait(
        CTaskComplexLeaveCarAsPassengerWait *this,
        CVehicle *a2)
{
  _ZN35CTaskComplexLeaveCarAsPassengerWaitC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x4f7f18
// Original: _ZN35CTaskComplexLeaveCarAsPassengerWaitC2EP8CVehicle
// Demangled: CTaskComplexLeaveCarAsPassengerWait::CTaskComplexLeaveCarAsPassengerWait(CVehicle *)
void __fastcall CTaskComplexLeaveCarAsPassengerWait::CTaskComplexLeaveCarAsPassengerWait(
        CTaskComplexLeaveCarAsPassengerWait *this,
        CVehicle *a2)
{
  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)this = &off_66AB38;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4f7f48
// Original: _ZN35CTaskComplexLeaveCarAsPassengerWaitD2Ev
// Demangled: CTaskComplexLeaveCarAsPassengerWait::~CTaskComplexLeaveCarAsPassengerWait()
void __fastcall CTaskComplexLeaveCarAsPassengerWait::~CTaskComplexLeaveCarAsPassengerWait(
        CTaskComplexLeaveCarAsPassengerWait *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AB38;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f7f74
// Original: _ZN35CTaskComplexLeaveCarAsPassengerWaitD0Ev
// Demangled: CTaskComplexLeaveCarAsPassengerWait::~CTaskComplexLeaveCarAsPassengerWait()
void __fastcall CTaskComplexLeaveCarAsPassengerWait::~CTaskComplexLeaveCarAsPassengerWait(
        CTaskComplexLeaveCarAsPassengerWait *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AB38;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4f7fa4
// Original: _ZN35CTaskComplexLeaveCarAsPassengerWait17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexLeaveCarAsPassengerWait::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexLeaveCarAsPassengerWait::CreateNextSubTask(
        CTaskComplexLeaveCarAsPassengerWait *this,
        CPed *a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r1

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v5 = v4 == 900;
  v6 = 1302;
  if ( v4 != 900 )
    v5 = v4 == 709;
  if ( !v5 )
  {
    if ( v4 != 704 )
      return 0;
    v6 = 900;
    if ( !*((_DWORD *)this + 3) )
      v6 = 1302;
  }
  return CTaskComplexLeaveCarAsPassengerWait::CreateSubTask(this, v6, a2);
}


// ============================================================

// Address: 0x4f7fe8
// Original: _ZNK35CTaskComplexLeaveCarAsPassengerWait13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexLeaveCarAsPassengerWait::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexLeaveCarAsPassengerWait::CreateSubTask(
        CTaskComplexLeaveCarAsPassengerWait *this,
        int a2,
        CPed *a3)
{
  int v5; // r4
  CTaskSimpleCarSetPedOut *v6; // r0
  CTaskSimpleCarSetPedInAsPassenger *v7; // r0
  unsigned int v8; // r1
  CEntity *v9; // r5
  float *v10; // r0
  float v11; // s16
  float v12; // s18
  float v13; // s20
  float v14; // s22
  float v15; // s24
  float v16; // s26
  int v17; // r6
  float v18; // s17
  float v19; // s10
  float v20; // s4
  float v21; // s0
  float v22; // s8
  float v23; // s2
  float v24; // s4
  float v25; // s6
  int v26; // r0
  float v27; // s0
  float *v28; // r1
  float v29; // s10
  float v30; // s12
  CTaskSimpleGoToPoint *v31; // r0
  int v32; // r0
  CEntity *v33; // r5
  char v34; // r0
  char v35; // r0
  float v37[2]; // [sp+8h] [bp-90h] BYREF
  float v38; // [sp+10h] [bp-88h]
  char v39; // [sp+24h] [bp-74h]
  _BYTE v40[112]; // [sp+28h] [bp-70h] BYREF

  v5 = 0;
  switch ( a2 )
  {
    case 900:
      v10 = *(float **)(*((_DWORD *)this + 3) + 20);
      v11 = *v10;
      v12 = v10[1];
      v13 = v10[2];
      v14 = v10[4];
      v15 = v10[5];
      v16 = v10[6];
      v17 = rand();
      v18 = (float)rand() * 4.6566e-10;
      v19 = -1.0;
      v20 = (float)((float)v17 * 4.6566e-10) + 1.0;
      v21 = (float)((float)rand() * 4.6566e-10) + 1.0;
      if ( (float)(v18 + 0.0) > 0.5 )
        v19 = 1.0;
      v22 = v14 * (float)(v20 * v19);
      v23 = v15 * (float)(v20 * v19);
      v24 = (float)(v13 * v21) + (float)(v16 * (float)(v20 * v19));
      v38 = v24;
      v25 = (float)(v11 * v21) + v22;
      v26 = *((_DWORD *)a3 + 5);
      v27 = (float)(v12 * v21) + v23;
      v28 = (float *)(v26 + 48);
      if ( !v26 )
        v28 = (float *)((char *)a3 + 4);
      v29 = v28[1];
      v30 = v28[2];
      v37[0] = *v28 + v25;
      v37[1] = v29 + v27;
      v38 = v30 + v24;
      v31 = (CTaskSimpleGoToPoint *)CTask::operator new((CTask *)&word_2C, (unsigned int)v28);
      CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(v31, 4, (const CVector *)v37, 1.5, 0, 0);
      return v32;
    case 709:
      v5 = CTask::operator new((CTask *)&dword_60, 0x2C5u);
      v33 = (CEntity *)*((_DWORD *)this + 3);
      CTaskSimple::CTaskSimple((CTaskSimple *)v5);
      *(_QWORD *)(v5 + 12) = 0LL;
      *(_QWORD *)(v5 + 20) = 0LL;
      *(_WORD *)(v5 + 28) = 0;
      *(_DWORD *)(v5 + 86) = 0;
      *(_DWORD *)(v5 + 82) = 0;
      *(_DWORD *)(v5 + 76) = 0;
      *(_DWORD *)(v5 + 80) = 0;
      v34 = *(_BYTE *)(v5 + 92);
      *(_DWORD *)v5 = &off_66AD18;
      v35 = v34 & 0xC3 | 8;
      *(_BYTE *)(v5 + 92) = v35;
      *(_DWORD *)(v5 + 8) = v33;
      if ( v33 )
      {
        CEntity::RegisterReference(v33, (CEntity **)(v5 + 8));
        v35 = *(_BYTE *)(v5 + 92);
      }
      *(_DWORD *)(v5 + 32) = -1;
      *(_BYTE *)(v5 + 92) = v35 & 0xFC;
      *(_DWORD *)(v5 + 60) = 0;
      *(_DWORD *)(v5 + 64) = 0;
      *(_DWORD *)(v5 + 68) = 0;
      break;
    case 704:
      CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut((CTaskSimpleCarSetPedOut *)v40, *((CVehicle **)this + 3), 8, 1);
      v40[17] = 1;
      CTaskSimpleCarSetPedOut::ProcessPed(v6, a3);
      CTaskSimpleCarSetPedInAsPassenger::CTaskSimpleCarSetPedInAsPassenger(
        (CTaskSimpleCarSetPedInAsPassenger *)v37,
        *((CVehicle **)this + 3),
        8,
        0);
      v39 = 1;
      CTaskSimpleCarSetPedInAsPassenger::ProcessPed(v7, a3);
      CTaskSimpleCarSetPedInAsPassenger::~CTaskSimpleCarSetPedInAsPassenger((CTaskSimpleCarSetPedInAsPassenger *)v37);
      CTaskSimpleCarSetPedOut::~CTaskSimpleCarSetPedOut((CTaskSimpleCarSetPedOut *)v40);
      v5 = CTask::operator new((CTask *)&dword_34, v8);
      v9 = (CEntity *)*((_DWORD *)this + 3);
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      *(_DWORD *)v5 = &off_66ABEC;
      *(_DWORD *)(v5 + 16) = 0;
      *(_DWORD *)(v5 + 20) = 0;
      *(_WORD *)(v5 + 24) = 1;
      *(_BYTE *)(v5 + 26) = 0;
      *(_DWORD *)(v5 + 28) = 0;
      *(_BYTE *)(v5 + 32) = 0;
      *(_BYTE *)(v5 + 33) = 0;
      *(_DWORD *)(v5 + 36) = 15;
      *(_DWORD *)(v5 + 40) = 1082130432;
      *(_DWORD *)(v5 + 44) = 1065353216;
      *(_BYTE *)(v5 + 48) = 0;
      *(_DWORD *)(v5 + 12) = v9;
      if ( v9 )
        CEntity::RegisterReference(v9, (CEntity **)(v5 + 12));
      break;
  }
  return v5;
}


// ============================================================

// Address: 0x4f8234
// Original: _ZN35CTaskComplexLeaveCarAsPassengerWait18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexLeaveCarAsPassengerWait::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexLeaveCarAsPassengerWait::CreateFirstSubTask(
        CTaskComplexLeaveCarAsPassengerWait *this,
        CPed *a2)
{
  int v2; // r2
  int v5; // r1
  int v6; // lr
  int v7; // r2
  CPed *v8; // r3
  int v9; // r1

  v2 = *((_DWORD *)this + 3);
  if ( !v2 )
    return 0;
  v5 = *(unsigned __int8 *)(v2 + 1164);
  if ( *(_BYTE *)(v2 + 1164) )
  {
    v6 = v2 + 1128;
    v7 = 0;
    while ( 1 )
    {
      v8 = *(CPed **)(v6 + 4 * v7);
      if ( v8 )
        break;
      if ( ++v7 >= v5 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v8 = 0;
  }
  v9 = 709;
  if ( v8 == a2 )
    v9 = 704;
  return CTaskComplexLeaveCarAsPassengerWait::CreateSubTask(this, v9, a2);
}


// ============================================================

// Address: 0x4f8272
// Original: _ZNK35CTaskComplexLeaveCarAsPassengerWait23GetNextPassengerToLeaveEv
// Demangled: CTaskComplexLeaveCarAsPassengerWait::GetNextPassengerToLeave(void)
int __fastcall CTaskComplexLeaveCarAsPassengerWait::GetNextPassengerToLeave(CTaskComplexLeaveCarAsPassengerWait *this)
{
  int v1; // r0
  int v2; // r1
  int result; // r0
  int v4; // r2
  int v5; // r3

  v1 = *((_DWORD *)this + 3);
  v2 = *(unsigned __int8 *)(v1 + 1164);
  if ( !*(_BYTE *)(v1 + 1164) )
    return 0;
  v4 = v1 + 1128;
  v5 = 0;
  while ( 1 )
  {
    result = *(_DWORD *)(v4 + 4 * v5);
    if ( result )
      break;
    if ( ++v5 >= v2 )
      return 0;
  }
  return result;
}


// ============================================================

// Address: 0x4f829c
// Original: _ZN35CTaskComplexLeaveCarAsPassengerWait14ControlSubTaskEP4CPed
// Demangled: CTaskComplexLeaveCarAsPassengerWait::ControlSubTask(CPed *)
int __fastcall CTaskComplexLeaveCarAsPassengerWait::ControlSubTask(CTaskComplexLeaveCarAsPassengerWait *this, CPed *a2)
{
  int v4; // r6
  int v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r2
  CPed *v9; // r3

  v4 = *((_DWORD *)this + 2);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) != 709 )
    return v4;
  v5 = *((_DWORD *)this + 3);
  v6 = *(unsigned __int8 *)(v5 + 1164);
  if ( *(_BYTE *)(v5 + 1164) )
  {
    v7 = v5 + 1128;
    v8 = 0;
    while ( 1 )
    {
      v9 = *(CPed **)(v7 + 4 * v8);
      if ( v9 )
        break;
      if ( ++v8 >= v6 )
      {
        v9 = 0;
        break;
      }
    }
    if ( v9 != a2 )
      return v4;
  }
  else if ( a2 )
  {
    return v4;
  }
  if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         1,
         0) == 1 )
    return CTaskComplexLeaveCarAsPassengerWait::CreateSubTask(this, 704, a2);
  return v4;
}


// ============================================================

// Address: 0x4f8310
// Original: _ZNK35CTaskComplexLeaveCarAsPassengerWait27SetPedInZerothPassengerSeatEP4CPed
// Demangled: CTaskComplexLeaveCarAsPassengerWait::SetPedInZerothPassengerSeat(CPed *)
void __fastcall CTaskComplexLeaveCarAsPassengerWait::SetPedInZerothPassengerSeat(CVehicle **this, CPed *a2)
{
  CTaskSimpleCarSetPedOut *v4; // r0
  CTaskSimpleCarSetPedInAsPassenger *v5; // r0
  _BYTE v6[32]; // [sp+0h] [bp-48h] BYREF
  _BYTE v7[40]; // [sp+20h] [bp-28h] BYREF

  CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut((CTaskSimpleCarSetPedOut *)v7, this[3], 8, 1);
  v7[17] = 1;
  CTaskSimpleCarSetPedOut::ProcessPed(v4, a2);
  CTaskSimpleCarSetPedInAsPassenger::CTaskSimpleCarSetPedInAsPassenger(
    (CTaskSimpleCarSetPedInAsPassenger *)v6,
    this[3],
    8,
    0);
  v6[28] = 1;
  CTaskSimpleCarSetPedInAsPassenger::ProcessPed(v5, a2);
  CTaskSimpleCarSetPedInAsPassenger::~CTaskSimpleCarSetPedInAsPassenger((CTaskSimpleCarSetPedInAsPassenger *)v6);
  CTaskSimpleCarSetPedOut::~CTaskSimpleCarSetPedOut((CTaskSimpleCarSetPedOut *)v7);
}


// ============================================================

// Address: 0x4fdff4
// Original: _ZNK35CTaskComplexLeaveCarAsPassengerWait5CloneEv
// Demangled: CTaskComplexLeaveCarAsPassengerWait::Clone(void)
CEntity **__fastcall CTaskComplexLeaveCarAsPassengerWait::Clone(
        CTaskComplexLeaveCarAsPassengerWait *this,
        unsigned int a2)
{
  CEntity **v3; // r4
  CEntity *v4; // r5

  v3 = (CEntity **)CTask::operator new((CTask *)&word_10, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *v3 = (CEntity *)&off_66AB38;
  v3[3] = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, v3 + 3);
  return v3;
}


// ============================================================

// Address: 0x4fe02c
// Original: _ZNK35CTaskComplexLeaveCarAsPassengerWait11GetTaskTypeEv
// Demangled: CTaskComplexLeaveCarAsPassengerWait::GetTaskType(void)
int __fastcall CTaskComplexLeaveCarAsPassengerWait::GetTaskType(CTaskComplexLeaveCarAsPassengerWait *this)
{
  return 730;
}


// ============================================================

// Address: 0x4fe034
// Original: _ZN35CTaskComplexLeaveCarAsPassengerWait9SerializeEv
// Demangled: CTaskComplexLeaveCarAsPassengerWait::Serialize(void)
void __fastcall CTaskComplexLeaveCarAsPassengerWait::Serialize(CTaskComplexLeaveCarAsPassengerWait *this)
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

  v2 = (*(int (__fastcall **)(CTaskComplexLeaveCarAsPassengerWait *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexLeaveCarAsPassengerWait *))(*(_DWORD *)this + 20))(this) == 730 )
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
    v10 = (*(int (__fastcall **)(CTaskComplexLeaveCarAsPassengerWait *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(730, v10);
  }
}


// ============================================================

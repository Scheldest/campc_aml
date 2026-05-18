
// Address: 0x19fcb8
// Original: j__ZN31CTaskComplexCarSlowBeDraggedOutC2EP8CVehicleib
// Demangled: CTaskComplexCarSlowBeDraggedOut::CTaskComplexCarSlowBeDraggedOut(CVehicle *,int,bool)
// attributes: thunk
void __fastcall CTaskComplexCarSlowBeDraggedOut::CTaskComplexCarSlowBeDraggedOut(
        CTaskComplexCarSlowBeDraggedOut *this,
        CVehicle *a2,
        int a3,
        bool a4)
{
  _ZN31CTaskComplexCarSlowBeDraggedOutC2EP8CVehicleib(this, a2, a3, a4);
}


// ============================================================

// Address: 0x504d38
// Original: _ZN31CTaskComplexCarSlowBeDraggedOutC2EP8CVehicleib
// Demangled: CTaskComplexCarSlowBeDraggedOut::CTaskComplexCarSlowBeDraggedOut(CVehicle *,int,bool)
void __fastcall CTaskComplexCarSlowBeDraggedOut::CTaskComplexCarSlowBeDraggedOut(
        CTaskComplexCarSlowBeDraggedOut *this,
        CVehicle *a2,
        int a3,
        bool a4)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = a3;
  *((_BYTE *)this + 20) = a4;
  *((_DWORD *)this + 6) = 0;
  *(_DWORD *)this = &off_66B418;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x504d80
// Original: _ZN31CTaskComplexCarSlowBeDraggedOutD2Ev
// Demangled: CTaskComplexCarSlowBeDraggedOut::~CTaskComplexCarSlowBeDraggedOut()
void __fastcall CTaskComplexCarSlowBeDraggedOut::~CTaskComplexCarSlowBeDraggedOut(
        CTaskComplexCarSlowBeDraggedOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CTaskUtilityLineUpPedWithCar *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B418;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CTaskUtilityLineUpPedWithCar *)*((_DWORD *)this + 6);
  if ( v4 )
  {
    CTaskUtilityLineUpPedWithCar::~CTaskUtilityLineUpPedWithCar(v4);
    operator delete(v5);
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x504db8
// Original: _ZN31CTaskComplexCarSlowBeDraggedOutD0Ev
// Demangled: CTaskComplexCarSlowBeDraggedOut::~CTaskComplexCarSlowBeDraggedOut()
void __fastcall CTaskComplexCarSlowBeDraggedOut::~CTaskComplexCarSlowBeDraggedOut(
        CTaskComplexCarSlowBeDraggedOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CTaskUtilityLineUpPedWithCar *v4; // r0
  void *v5; // r0
  void *v6; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B418;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CTaskUtilityLineUpPedWithCar *)*((_DWORD *)this + 6);
  if ( v4 )
  {
    CTaskUtilityLineUpPedWithCar::~CTaskUtilityLineUpPedWithCar(v4);
    operator delete(v5);
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x504df4
// Original: _ZN31CTaskComplexCarSlowBeDraggedOut13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexCarSlowBeDraggedOut::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexCarSlowBeDraggedOut::MakeAbortable(
        CTaskComplexCarSlowBeDraggedOut *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  __int64 v6; // kr00_8
  int v7; // r0
  CEntity **v8; // r5
  _DWORD v10[2]; // [sp+0h] [bp-20h] BYREF
  __int64 v11; // [sp+8h] [bp-18h]

  if ( a3 != 2 )
    return 0;
  (*(void (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
    *((_DWORD *)this + 2),
    a2,
    2,
    a4);
  v6 = *(_QWORD *)((char *)this + 12);
  CTaskSimple::CTaskSimple((CTaskSimple *)v10);
  v11 = v6;
  v10[0] = &off_66B3E4;
  v8 = (CEntity **)(v7 + 8);
  if ( (_DWORD)v6 )
    CEntity::RegisterReference((CEntity *)v6, v8);
  CTaskSimpleCarSetPedSlowDraggedOut::ProcessPed((CTaskSimpleCarSetPedSlowDraggedOut *)v10, a2);
  v10[0] = &off_66B3E4;
  if ( (_DWORD)v11 )
    CEntity::CleanUpOldReference((CEntity *)v11, v8);
  CTask::~CTask((CTask *)v10);
  return 1;
}


// ============================================================

// Address: 0x504e78
// Original: _ZN31CTaskComplexCarSlowBeDraggedOut13CreateSubTaskEi
// Demangled: CTaskComplexCarSlowBeDraggedOut::CreateSubTask(int)
int __fastcall CTaskComplexCarSlowBeDraggedOut::CreateSubTask(CTaskComplexCarSlowBeDraggedOut *this, unsigned int a2)
{
  int v3; // r4
  CTaskSimple *v4; // r0
  CEntity *v5; // r6
  int v6; // r8
  char v7; // r5
  char *v8; // r0
  CTaskSimple *v9; // r0
  int v10; // r8
  int v11; // r9
  char v12; // r5
  char *v13; // r0
  int v14; // r5
  __int64 v15; // kr10_8
  CEntity **v16; // r1
  CTaskSimple *v17; // r0
  int v18; // r8
  int v19; // r5

  v3 = 0;
  switch ( a2 )
  {
    case 0x330u:
      v4 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, a2);
      v6 = *((_DWORD *)this + 4);
      v5 = (CEntity *)*((_DWORD *)this + 3);
      v3 = (int)v4;
      v7 = *((_BYTE *)this + 20);
      CTaskSimple::CTaskSimple(v4);
      *(_DWORD *)(v3 + 12) = v6;
      *(_BYTE *)(v3 + 16) = v7 ^ 1;
      v8 = (char *)&`vtable for'CTaskSimpleCarSetPedOut;
      *(_BYTE *)(v3 + 21) = 0;
      *(_DWORD *)(v3 + 17) = 0;
      goto LABEL_5;
    case 0x335u:
      v9 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, a2);
      v10 = *((_DWORD *)this + 4);
      v5 = (CEntity *)*((_DWORD *)this + 3);
      v3 = (int)v9;
      v11 = *((_DWORD *)this + 6);
      v12 = *((_BYTE *)this + 20);
      CTaskSimple::CTaskSimple(v9);
      *(_BYTE *)(v3 + 8) = 0;
      *(_DWORD *)(v3 + 12) = 0;
      *(_DWORD *)(v3 + 20) = v10;
      *(_BYTE *)(v3 + 24) = v12;
      *(_BYTE *)(v3 + 25) = 0;
      v13 = (char *)&`vtable for'CTaskSimpleCarSlowBeDraggedOut;
      *(_DWORD *)(v3 + 28) = v11;
      goto LABEL_7;
    case 0x336u:
      v3 = CTask::operator new((CTask *)&word_10, a2);
      v15 = *(_QWORD *)((char *)this + 12);
      v14 = *((_DWORD *)this + 4);
      v5 = (CEntity *)v15;
      CTaskSimple::CTaskSimple((CTaskSimple *)v3);
      *(_DWORD *)(v3 + 12) = v14;
      v8 = (char *)&`vtable for'CTaskSimpleCarSetPedSlowDraggedOut;
LABEL_5:
      *(_DWORD *)v3 = v8 + 8;
      *(_DWORD *)(v3 + 8) = v5;
      v16 = (CEntity **)(v3 + 8);
      goto LABEL_8;
    case 0x342u:
      v17 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, a2);
      v18 = *((_DWORD *)this + 4);
      v5 = (CEntity *)*((_DWORD *)this + 3);
      v3 = (int)v17;
      v19 = *((_DWORD *)this + 6);
      CTaskSimple::CTaskSimple(v17);
      *(_BYTE *)(v3 + 8) = 0;
      *(_DWORD *)(v3 + 12) = 0;
      *(_DWORD *)(v3 + 20) = v18;
      *(_DWORD *)(v3 + 24) = v19;
      v13 = (char *)&`vtable for'CTaskSimpleCarFallOut;
LABEL_7:
      *(_DWORD *)v3 = v13 + 8;
      *(_DWORD *)(v3 + 16) = v5;
      v16 = (CEntity **)(v3 + 16);
LABEL_8:
      if ( v5 )
        CEntity::RegisterReference(v5, v16);
      break;
    default:
      return v3;
  }
  return v3;
}


// ============================================================

// Address: 0x504f74
// Original: _ZN31CTaskComplexCarSlowBeDraggedOut17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexCarSlowBeDraggedOut::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexCarSlowBeDraggedOut::CreateNextSubTask(CTaskComplexCarSlowBeDraggedOut *this, CPed *a2)
{
  int v3; // r0
  int v4; // r4
  __int64 v5; // kr00_8
  CTaskSimple *v7; // r0
  __int64 v8; // r8
  CTaskSimple *v9; // r6
  char v10; // r5

  if ( !(*((unsigned __int8 *)a2 + 1157) << 31) || !*((_DWORD *)a2 + 356) )
    return 0;
  v3 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v4 = 0;
  if ( v3 == 834 )
  {
    v7 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, 0x342u);
    v8 = *(_QWORD *)((char *)this + 12);
    v9 = v7;
    v10 = *((_BYTE *)this + 20);
    CTaskSimple::CTaskSimple(v7);
    *((_DWORD *)v9 + 3) = HIDWORD(v8);
    *((_BYTE *)v9 + 16) = v10 ^ 1;
    *((_BYTE *)v9 + 21) = 0;
    *(_DWORD *)((char *)v9 + 17) = 0;
    *(_DWORD *)v9 = &off_66B348;
    *((_DWORD *)v9 + 2) = v8;
    if ( (_DWORD)v8 )
      CEntity::RegisterReference((CEntity *)v8, (CEntity **)v9 + 2);
    return (int)v9;
  }
  else if ( v3 == 821 )
  {
    v4 = CTask::operator new((CTask *)&word_10, 0x335u);
    v5 = *(_QWORD *)((char *)this + 12);
    CTaskSimple::CTaskSimple((CTaskSimple *)v4);
    *(_DWORD *)(v4 + 12) = HIDWORD(v5);
    *(_DWORD *)v4 = &off_66B3E4;
    *(_DWORD *)(v4 + 8) = v5;
    if ( (_DWORD)v5 )
      CEntity::RegisterReference((CEntity *)v5, (CEntity **)(v4 + 8));
  }
  return v4;
}


// ============================================================

// Address: 0x50502c
// Original: _ZN31CTaskComplexCarSlowBeDraggedOut18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexCarSlowBeDraggedOut::CreateFirstSubTask(CPed *)
CTaskSimple *__fastcall CTaskComplexCarSlowBeDraggedOut::CreateFirstSubTask(
        CTaskComplexCarSlowBeDraggedOut *this,
        CPed *a2)
{
  int v4; // r1
  CPed *v5; // r0
  int IsPlayer; // r0
  char v7; // r2
  CTaskSimple *v8; // r5
  float *v9; // r0
  float v10; // s16
  float v11; // s18
  float v12; // s20
  float *v13; // r0
  float v14; // s2
  float v15; // s4
  CTaskUtilityLineUpPedWithCar *v16; // r0
  unsigned int v17; // r1
  int v18; // r0
  CTaskSimple *v19; // r0
  CEntity *v20; // r6
  int v21; // r9
  int v22; // r4
  char *v23; // r0
  CTaskSimple *v24; // r0
  int v25; // r9
  int v26; // r10
  char v27; // r4
  _DWORD v29[15]; // [sp+4h] [bp-3Ch] BYREF

  if ( !(*((unsigned __int8 *)a2 + 1157) << 31) || !*((_DWORD *)a2 + 356) )
    return 0;
  if ( *((_DWORD *)this + 4) == 10 )
  {
    v4 = *((_DWORD *)this + 3);
    v5 = *(CPed **)(v4 + 1124);
    if ( v5 )
    {
      IsPlayer = CPed::IsPlayer(v5);
      v4 = *((_DWORD *)this + 3);
      v7 = 32;
      if ( IsPlayer )
        v7 = 72;
    }
    else
    {
      v7 = 32;
    }
    *(_BYTE *)(v4 + 58) = *(_BYTE *)(v4 + 58) & 7 | v7;
  }
  v9 = (float *)*((_DWORD *)a2 + 5);
  if ( v9 )
  {
    v10 = v9[12];
    v11 = v9[13];
    v12 = v9[14];
    CMatrix::SetRotate((CMatrix *)v9, 0.0, 0.0, *((float *)a2 + 343));
    v13 = (float *)*((_DWORD *)a2 + 5);
    v14 = v11 + v13[13];
    v15 = v12 + v13[14];
    v13[12] = v10 + v13[12];
    v13[13] = v14;
    v13[14] = v15;
  }
  else
  {
    *((_DWORD *)a2 + 4) = *((_DWORD *)a2 + 343);
  }
  CPed::SetPedState(a2);
  memset(v29, 0, 12);
  v16 = (CTaskUtilityLineUpPedWithCar *)operator new(0x1Cu);
  CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(v16, (const CVector *)v29, 0, 0, *((_DWORD *)this + 4));
  *((_DWORD *)this + 6) = v18;
  if ( *((_BYTE *)this + 20) )
  {
    v19 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v17);
    v21 = *((_DWORD *)this + 4);
    v20 = (CEntity *)*((_DWORD *)this + 3);
    v8 = v19;
    v22 = *((_DWORD *)this + 6);
    CTaskSimple::CTaskSimple(v19);
    *((_BYTE *)v8 + 8) = 0;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 5) = v21;
    *((_DWORD *)v8 + 6) = v22;
    v23 = (char *)&`vtable for'CTaskSimpleCarFallOut;
  }
  else
  {
    v24 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, v17);
    v25 = *((_DWORD *)this + 4);
    v20 = (CEntity *)*((_DWORD *)this + 3);
    v8 = v24;
    v26 = *((_DWORD *)this + 6);
    v27 = *((_BYTE *)this + 20);
    CTaskSimple::CTaskSimple(v24);
    *((_BYTE *)v8 + 8) = 0;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 5) = v25;
    v23 = (char *)&`vtable for'CTaskSimpleCarSlowBeDraggedOut;
    *((_BYTE *)v8 + 24) = v27;
    *((_BYTE *)v8 + 25) = 0;
    *((_DWORD *)v8 + 7) = v26;
  }
  *(_DWORD *)v8 = v23 + 8;
  *((_DWORD *)v8 + 4) = v20;
  if ( v20 )
    CEntity::RegisterReference(v20, (CEntity **)v8 + 4);
  return v8;
}


// ============================================================

// Address: 0x505180
// Original: _ZN31CTaskComplexCarSlowBeDraggedOut24PrepareVehicleForPedExitEP4CPed
// Demangled: CTaskComplexCarSlowBeDraggedOut::PrepareVehicleForPedExit(CPed *)
int __fastcall CTaskComplexCarSlowBeDraggedOut::PrepareVehicleForPedExit(
        CTaskComplexCarSlowBeDraggedOut *this,
        CPed *a2)
{
  int result; // r0
  int v4; // r1
  CPed *v5; // r0
  int IsPlayer; // r0
  int v7; // r2

  result = *((_DWORD *)this + 4);
  if ( result == 10 )
  {
    v4 = *((_DWORD *)this + 3);
    v5 = *(CPed **)(v4 + 1124);
    if ( v5 )
    {
      IsPlayer = CPed::IsPlayer(v5);
      v4 = *((_DWORD *)this + 3);
      v7 = 32;
      if ( IsPlayer )
        v7 = 72;
    }
    else
    {
      v7 = 32;
    }
    result = *(_BYTE *)(v4 + 58) & 7 | v7;
    *(_BYTE *)(v4 + 58) = result;
  }
  return result;
}


// ============================================================

// Address: 0x5051b8
// Original: _ZN31CTaskComplexCarSlowBeDraggedOut24PreparePedForVehicleExitEP4CPed
// Demangled: CTaskComplexCarSlowBeDraggedOut::PreparePedForVehicleExit(CPed *)
int __fastcall CTaskComplexCarSlowBeDraggedOut::PreparePedForVehicleExit(
        CTaskComplexCarSlowBeDraggedOut *this,
        CPed *a2)
{
  float *v3; // r0
  float v4; // s16
  float v5; // s18
  float v6; // s20
  float *v7; // r0
  float v8; // s2
  float v9; // s4

  v3 = (float *)*((_DWORD *)a2 + 5);
  if ( v3 )
  {
    v4 = v3[12];
    v5 = v3[13];
    v6 = v3[14];
    CMatrix::SetRotate((CMatrix *)v3, 0.0, 0.0, *((float *)a2 + 343));
    v7 = (float *)*((_DWORD *)a2 + 5);
    v8 = v5 + v7[13];
    v9 = v6 + v7[14];
    v7[12] = v4 + v7[12];
    v7[13] = v8;
    v7[14] = v9;
  }
  else
  {
    *((_DWORD *)a2 + 4) = *((_DWORD *)a2 + 343);
  }
  return sub_18D928(a2);
}


// ============================================================

// Address: 0x505222
// Original: _ZN31CTaskComplexCarSlowBeDraggedOut33CreateTaskUtilityLineUpPedWithCarEP4CPed
// Demangled: CTaskComplexCarSlowBeDraggedOut::CreateTaskUtilityLineUpPedWithCar(CPed *)
void __fastcall CTaskComplexCarSlowBeDraggedOut::CreateTaskUtilityLineUpPedWithCar(
        CTaskComplexCarSlowBeDraggedOut *this,
        CPed *a2)
{
  CTaskUtilityLineUpPedWithCar *v3; // r0
  int v4; // r0
  _DWORD v5[5]; // [sp+4h] [bp-14h] BYREF

  memset(v5, 0, 12);
  v3 = (CTaskUtilityLineUpPedWithCar *)operator new(0x1Cu);
  CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(v3, (const CVector *)v5, 0, 0, *((_DWORD *)this + 4));
  *((_DWORD *)this + 6) = v4;
}


// ============================================================

// Address: 0x50524c
// Original: _ZN31CTaskComplexCarSlowBeDraggedOut14ControlSubTaskEP4CPed
// Demangled: CTaskComplexCarSlowBeDraggedOut::ControlSubTask(CPed *)
int __fastcall CTaskComplexCarSlowBeDraggedOut::ControlSubTask(CTaskComplexCarSlowBeDraggedOut *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x5071bc
// Original: _ZNK31CTaskComplexCarSlowBeDraggedOut5CloneEv
// Demangled: CTaskComplexCarSlowBeDraggedOut::Clone(void)
CTaskComplex *__fastcall CTaskComplexCarSlowBeDraggedOut::Clone(CTaskComplexCarSlowBeDraggedOut *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  CTaskComplex *v5; // r4

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_1C, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = v3;
  LOBYTE(this) = *((_BYTE *)this + 20);
  CTaskComplex::CTaskComplex(v3);
  *((_DWORD *)v5 + 4) = HIDWORD(v4);
  *((_BYTE *)v5 + 20) = (_BYTE)this;
  *((_DWORD *)v5 + 6) = 0;
  *(_DWORD *)v5 = &off_66B418;
  *((_DWORD *)v5 + 3) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 3);
  return v5;
}


// ============================================================

// Address: 0x50720c
// Original: _ZNK31CTaskComplexCarSlowBeDraggedOut11GetTaskTypeEv
// Demangled: CTaskComplexCarSlowBeDraggedOut::GetTaskType(void)
int __fastcall CTaskComplexCarSlowBeDraggedOut::GetTaskType(CTaskComplexCarSlowBeDraggedOut *this)
{
  return 823;
}


// ============================================================

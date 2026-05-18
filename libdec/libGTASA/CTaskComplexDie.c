
// Address: 0x18ed08
// Original: j__ZN15CTaskComplexDieC2E11eWeaponType12AssocGroupId11AnimationIdffbbib
// Demangled: CTaskComplexDie::CTaskComplexDie(eWeaponType,AssocGroupId,AnimationId,float,float,bool,bool,int,bool)
// attributes: thunk
int __fastcall CTaskComplexDie::CTaskComplexDie(
        int a1,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return _ZN15CTaskComplexDieC2E11eWeaponType12AssocGroupId11AnimationIdffbbib(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


// ============================================================

// Address: 0x18f0dc
// Original: j__ZN15CTaskComplexDie10CreateTaskEv
// Demangled: CTaskComplexDie::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexDie::CreateTask(CTaskComplexDie *this)
{
  return _ZN15CTaskComplexDie10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19a584
// Original: j__ZNK15CTaskComplexDie14SayDeathSampleEP4CPed
// Demangled: CTaskComplexDie::SayDeathSample(CPed *)
// attributes: thunk
int __fastcall CTaskComplexDie::SayDeathSample(CTaskComplexDie *this, CPed *a2)
{
  return _ZNK15CTaskComplexDie14SayDeathSampleEP4CPed(this, a2);
}


// ============================================================

// Address: 0x4910c4
// Original: _ZN15CTaskComplexDie10CreateTaskEv
// Demangled: CTaskComplexDie::CreateTask(void)
int __fastcall CTaskComplexDie::CreateTask(CTaskComplexDie *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  int v8; // r2
  char v9; // r4
  int v10; // r2
  char v11; // r4
  int v12; // r2
  char v13; // r4
  unsigned int v14; // r1
  int v15; // r0
  _BYTE v17[4]; // [sp+18h] [bp-20h] BYREF
  float v18; // [sp+1Ch] [bp-1Ch] BYREF
  float v19; // [sp+20h] [bp-18h] BYREF
  int v20; // [sp+24h] [bp-14h] BYREF
  int v21; // [sp+28h] [bp-10h] BYREF
  int v22[3]; // [sp+2Ch] [bp-Ch] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v22, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v22, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, byte_4, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, byte_4, v6);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v19, (char *)&stderr + 2, v8);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v19, byte_4, v8);
  v11 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v18, (char *)&stderr + 2, v10);
    UseDataFence = v11;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v18, byte_4, v10);
  v13 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, (char *)&stderr + 2, v12);
    UseDataFence = v13;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, byte_4, v12);
  v15 = CTask::operator new((CTask *)&word_28, v14);
  return CTaskComplexDie::CTaskComplexDie(v15, v22[0], v21, v20, v19, v18, 0, 0, 0, 0);
}


// ============================================================

// Address: 0x4eb570
// Original: _ZN15CTaskComplexDieC2E11eWeaponType12AssocGroupId11AnimationIdffbbib
// Demangled: CTaskComplexDie::CTaskComplexDie(eWeaponType,AssocGroupId,AnimationId,float,float,bool,bool,int,bool)
int __fastcall CTaskComplexDie::CTaskComplexDie(
        CTaskComplex *a1,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        char a7,
        char a8,
        int a9,
        char a10)
{
  int result; // r0

  CTaskComplex::CTaskComplex(a1);
  *(_DWORD *)(result + 12) = a2;
  *(_DWORD *)(result + 16) = a3;
  *(_DWORD *)(result + 20) = a4;
  *(float *)(result + 24) = a5;
  *(float *)(result + 28) = a6;
  *(_DWORD *)(result + 36) = a9;
  *(_BYTE *)(result + 32) = *(_BYTE *)(result + 32) & 0xF8 | a7 | (2 * a8) | (4 * a10);
  *(_DWORD *)result = &off_669DE8;
  return result;
}


// ============================================================

// Address: 0x4eb5d4
// Original: _ZN15CTaskComplexDieD2Ev
// Demangled: CTaskComplexDie::~CTaskComplexDie()
// attributes: thunk
void __fastcall CTaskComplexDie::~CTaskComplexDie(CTaskComplexDie *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4eb5d8
// Original: _ZN15CTaskComplexDieD0Ev
// Demangled: CTaskComplexDie::~CTaskComplexDie()
void __fastcall CTaskComplexDie::~CTaskComplexDie(CTaskComplexDie *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4eb5e8
// Original: _ZN15CTaskComplexDie13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexDie::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexDie::MakeAbortable(CTaskComplexDie *this, CPed *a2, int a3, const CEvent *a4)
{
  if ( (unsigned int)(a3 - 1) <= 1 )
    return (*(int (__fastcall **)(_DWORD, CPed *))(**((_DWORD **)this + 2) + 28))(*((_DWORD *)this + 2), a2);
  else
    return 0;
}


// ============================================================

// Address: 0x4eb604
// Original: _ZNK15CTaskComplexDie14SayDeathSampleEP4CPed
// Demangled: CTaskComplexDie::SayDeathSample(CPed *)
int __fastcall CTaskComplexDie::SayDeathSample(CTaskComplexDie *this, CPed *a2)
{
  int result; // r0
  unsigned __int16 v4; // r1
  CLocalisation *v5; // r0

  result = *((_DWORD *)this + 3) - 49;
  switch ( result )
  {
    case 0:
    case 1:
      v4 = 342;
      return CPed::Say(a2, v4, 0, 1.0, 0, 0, 0);
    case 2:
      return result;
    case 4:
      v4 = 341;
      return CPed::Say(a2, v4, 0, 1.0, 0, 0, 0);
    case 5:
      v5 = (CLocalisation *)CPed::Say(a2, 0x156u, 0, 1.0, 0, 0, 0);
      result = CLocalisation::Blood(v5);
      if ( result )
        return CAEPedAudioEntity::AddAudioEvent((CPed *)((char *)a2 + 316), 119, 0.0, 1.0, a2, 0, 0, 0);
      return result;
    default:
      v4 = 343;
      return CPed::Say(a2, v4, 0, 1.0, 0, 0, 0);
  }
}


// ============================================================

// Address: 0x4eb688
// Original: _ZN15CTaskComplexDie17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexDie::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexDie::CreateNextSubTask(CTaskComplexDie *this, CPed *a2)
{
  int v4; // r0
  CTaskSimple *v5; // r0
  _DWORD *v6; // r0

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( (unsigned int)(v4 - 212) > 4 || v4 == 214 )
  {
    if ( v4 == 704 )
    {
      if ( *((unsigned __int8 *)a2 + 1157) << 31 )
      {
        v5 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, v4 - 212);
        CTaskSimple::CTaskSimple(v5);
        *v6 = &off_669DB4;
      }
      else
      {
        (*(void (__fastcall **)(CTaskComplexDie *, CPed *))(*(_DWORD *)this + 44))(this, a2);
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 291) |= 0x100u;
  }
}


// ============================================================

// Address: 0x4eb6f0
// Original: _ZN15CTaskComplexDie18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexDie::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexDie::CreateFirstSubTask(CTaskComplexDie *this, CPedIntelligence **a2)
{
  unsigned int v4; // r1
  CPedIntelligence *v5; // r0
  unsigned int v6; // r1
  CTaskSimple *v7; // r0
  int v8; // r0
  char v9; // r2
  char *v10; // r1
  CTaskComplex *v11; // r0
  int v12; // r4
  CTaskSimple *v13; // r0
  int v14; // r5
  int v15; // r6
  int v16; // r8
  int v17; // r4
  int v18; // r0
  char v19; // r2
  CTaskComplexLeaveCar *v20; // r0
  unsigned int v21; // r1
  CPedIntelligence *v22; // r0
  double v23; // d16
  float v24; // r0
  float v25; // s0
  float v26; // s2
  float v27; // s4
  CTaskComplexFallToDeath *v28; // r0
  double v29; // [sp+8h] [bp-20h] BYREF
  float v30; // [sp+10h] [bp-18h]

  CTaskComplexDie::SayDeathSample(this, (CPed *)a2);
  if ( *((_DWORD *)this + 3) != 53
    || (v4 = (unsigned int)a2[292] & 0x80, ~(unsigned int)a2[289] & 0x100 | v4)
    || (v5 = a2[356]) != 0 && (unsigned int)(*((_DWORD *)v5 + 361) - 3) < 2 )
  {
    CPed::SetPedState((CPed *)a2);
    CPedIntelligence::ClearTasks(a2[272], 0, 1);
    if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    {
      v11 = (CTaskComplex *)CTask::operator new((CTask *)&dword_1C, v6);
      v12 = *((_DWORD *)this + 3);
      CTaskComplex::CTaskComplex(v11);
      *(_DWORD *)(v8 + 12) = v12;
      *(_WORD *)(v8 + 24) = 0;
      *(_DWORD *)(v8 + 16) = 0;
      *(_DWORD *)(v8 + 20) = 0;
      v10 = (char *)&`vtable for'CTaskComplexDieInCar;
      goto LABEL_9;
    }
    if ( *((_DWORD *)this + 3) == 53 )
    {
      v7 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, v6);
      CTaskSimple::CTaskSimple(v7);
      *(_DWORD *)(v8 + 8) = 0;
      *(_DWORD *)(v8 + 12) = 140;
      *(_DWORD *)(v8 + 16) = 0;
      *(_DWORD *)(v8 + 20) = 0;
      *(_DWORD *)(v8 + 24) = 1082130432;
      *(_DWORD *)(v8 + 28) = 0;
      *(_DWORD *)(v8 + 36) = 0;
      v9 = *(_BYTE *)(v8 + 32);
      *(_BYTE *)(v8 + 40) = 1;
      v10 = (char *)&`vtable for'CTaskSimpleDrown;
      *(_BYTE *)(v8 + 32) = v9 & 0xFC;
LABEL_9:
      *(_DWORD *)v8 = v10 + 8;
      return;
    }
    if ( (*((_BYTE *)this + 32) & 2) != 0 )
    {
      v21 = *((_DWORD *)this + 9);
      v22 = a2[5];
      switch ( v21 )
      {
        case 0u:
          v23 = *((double *)v22 + 2);
          v24 = *((float *)v22 + 6);
          goto LABEL_19;
        case 1u:
          v25 = *(float *)v22;
          v26 = *((float *)v22 + 1);
          v27 = *((float *)v22 + 2);
          goto LABEL_17;
        case 2u:
          v25 = *((float *)v22 + 4);
          v26 = *((float *)v22 + 5);
          v27 = *((float *)v22 + 6);
LABEL_17:
          *((float *)&v29 + 1) = -v26;
          *(float *)&v29 = -v25;
          v30 = -v27;
          break;
        case 3u:
          v23 = *(double *)v22;
          v24 = *((float *)v22 + 2);
LABEL_19:
          v30 = v24;
          v29 = v23;
          break;
        default:
          break;
      }
      v28 = (CTaskComplexFallToDeath *)CTask::operator new((CTask *)&dword_24, v21);
      CTaskComplexFallToDeath::CTaskComplexFallToDeath(
        v28,
        *((_DWORD *)this + 9),
        (const CVector *)&v29,
        (*((_BYTE *)this + 32) & 4) != 0,
        0);
    }
    else
    {
      v13 = (CTaskSimple *)CTask::operator new((CTask *)&word_28, v6);
      v14 = *((_DWORD *)this + 4);
      v15 = *((_DWORD *)this + 5);
      v16 = *((_DWORD *)this + 6);
      v17 = *((_DWORD *)this + 7);
      CTaskSimple::CTaskSimple(v13);
      *(_DWORD *)(v18 + 8) = v14;
      *(_DWORD *)(v18 + 12) = v15;
      *(_DWORD *)(v18 + 16) = 0;
      *(_DWORD *)(v18 + 20) = 0;
      *(_DWORD *)(v18 + 24) = v16;
      *(_DWORD *)(v18 + 28) = v17;
      *(_DWORD *)(v18 + 36) = 0;
      v19 = *(_BYTE *)(v18 + 32);
      *(_DWORD *)v18 = &off_669CDC;
      *(_BYTE *)(v18 + 32) = v19 & 0xFC;
    }
  }
  else
  {
    v20 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v4);
    CTaskComplexLeaveCar::CTaskComplexLeaveCar(v20, a2[356], 0, 0, 0, 1);
  }
}


// ============================================================

// Address: 0x4eb898
// Original: _ZN15CTaskComplexDie14ControlSubTaskEP4CPed
// Demangled: CTaskComplexDie::ControlSubTask(CPed *)
int __fastcall CTaskComplexDie::ControlSubTask(CTaskComplexDie *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f2980
// Original: _ZNK15CTaskComplexDie5CloneEv
// Demangled: CTaskComplexDie::Clone(void)
int __fastcall CTaskComplexDie::Clone(CTaskComplexDie *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  char v4; // r5
  __int64 v5; // d8
  __int64 v6; // d9
  int v7; // r6
  int v8; // r4
  int result; // r0
  char v10; // r2

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, a2);
  v4 = *((_BYTE *)this + 32);
  v5 = *(_QWORD *)((char *)this + 12);
  v6 = *(_QWORD *)((char *)this + 20);
  v7 = *((_DWORD *)this + 9);
  v8 = *((_DWORD *)this + 7);
  CTaskComplex::CTaskComplex(v3);
  *(_QWORD *)(result + 12) = v5;
  *(_QWORD *)(result + 20) = v6;
  *(_DWORD *)(result + 28) = v8;
  *(_DWORD *)(result + 36) = v7;
  v10 = *(_BYTE *)(result + 32);
  *(_DWORD *)result = &off_669DE8;
  *(_BYTE *)(result + 32) = v4 & 7 | v10 & 0xF8;
  return result;
}


// ============================================================

// Address: 0x4f29e0
// Original: _ZNK15CTaskComplexDie11GetTaskTypeEv
// Demangled: CTaskComplexDie::GetTaskType(void)
int __fastcall CTaskComplexDie::GetTaskType(CTaskComplexDie *this)
{
  return 217;
}


// ============================================================

// Address: 0x4f29e4
// Original: _ZN15CTaskComplexDie9SerializeEv
// Demangled: CTaskComplexDie::Serialize(void)
void __fastcall CTaskComplexDie::Serialize(CTaskComplexDie *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CGenericGameStorage *v9; // r5
  int v10; // r2
  int v11; // r6
  CGenericGameStorage *v12; // r5
  int v13; // r2
  int v14; // r6
  CGenericGameStorage *v15; // r5
  int v16; // r2
  CGenericGameStorage *v17; // r5
  int v18; // r2
  int v19; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexDie *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexDie *))(*(_DWORD *)this + 20))(this) == 217 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v7 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v7 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
    free(v7);
    if ( UseDataFence )
      AddDataFence();
    v9 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v9 = *((_DWORD *)this + 5);
    CGenericGameStorage::_SaveDataToWorkBuffer(v9, byte_4, v10);
    free(v9);
    v11 = *((_DWORD *)this + 6);
    if ( UseDataFence )
      AddDataFence();
    v12 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v12 = v11;
    CGenericGameStorage::_SaveDataToWorkBuffer(v12, byte_4, v13);
    free(v12);
    v14 = *((_DWORD *)this + 7);
    if ( UseDataFence )
      AddDataFence();
    v15 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v15 = v14;
    CGenericGameStorage::_SaveDataToWorkBuffer(v15, byte_4, v16);
    free(v15);
    if ( UseDataFence )
      AddDataFence();
    v17 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v17 = *((_DWORD *)this + 9);
    CGenericGameStorage::_SaveDataToWorkBuffer(v17, byte_4, v18);
    j_free(v17);
  }
  else
  {
    v19 = (*(int (__fastcall **)(CTaskComplexDie *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(217, v19);
  }
}


// ============================================================

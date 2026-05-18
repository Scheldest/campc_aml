
// Address: 0x195040
// Original: j__ZN25CTaskComplexTreatAccident10CreateTaskEv
// Demangled: CTaskComplexTreatAccident::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexTreatAccident::CreateTask(CTaskComplexTreatAccident *this)
{
  return _ZN25CTaskComplexTreatAccident10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19c4b0
// Original: j__ZN25CTaskComplexTreatAccidentC2EP9CAccident
// Demangled: CTaskComplexTreatAccident::CTaskComplexTreatAccident(CAccident *)
// attributes: thunk
void __fastcall CTaskComplexTreatAccident::CTaskComplexTreatAccident(CTaskComplexTreatAccident *this, CAccident *a2)
{
  _ZN25CTaskComplexTreatAccidentC2EP9CAccident(this, a2);
}


// ============================================================

// Address: 0x490e50
// Original: _ZN25CTaskComplexTreatAccident10CreateTaskEv
// Demangled: CTaskComplexTreatAccident::CreateTask(void)
void __fastcall CTaskComplexTreatAccident::CreateTask(CTaskComplexTreatAccident *this, int a2, int a3)
{
  char v3; // r4
  char *v4; // r1
  int Ped; // r4
  CTaskComplexTreatAccident *v6; // r5
  CAccident *v7; // r0
  CPools *v8; // [sp+0h] [bp-18h] BYREF
  _BYTE v9[18]; // [sp+6h] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v9, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v8, byte_4, a3);
  v4 = (char *)v8 + 1;
  if ( v8 == (CPools *)-1 )
    Ped = 0;
  else
    Ped = CPools::GetPed(v8, (int)v4);
  v6 = (CTaskComplexTreatAccident *)CTask::operator new((CTask *)&word_10, (unsigned int)v4);
  v7 = (CAccident *)operator new(8u);
  *(_DWORD *)v7 = Ped;
  *((_WORD *)v7 + 2) = 0;
  CTaskComplexTreatAccident::CTaskComplexTreatAccident(v6, v7);
}


// ============================================================

// Address: 0x5104cc
// Original: _ZN25CTaskComplexTreatAccidentC2EP9CAccident
// Demangled: CTaskComplexTreatAccident::CTaskComplexTreatAccident(CAccident *)
void __fastcall CTaskComplexTreatAccident::CTaskComplexTreatAccident(CTaskComplexTreatAccident *this, CAccident *a2)
{
  _DWORD *v3; // r0

  CTaskComplex::CTaskComplex(this);
  v3[3] = a2;
  *v3 = &off_66B9D0;
}


// ============================================================

// Address: 0x5104e8
// Original: _ZN25CTaskComplexTreatAccidentD2Ev
// Demangled: CTaskComplexTreatAccident::~CTaskComplexTreatAccident()
// attributes: thunk
void __fastcall CTaskComplexTreatAccident::~CTaskComplexTreatAccident(CTaskComplexTreatAccident *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5104ec
// Original: _ZN25CTaskComplexTreatAccidentD0Ev
// Demangled: CTaskComplexTreatAccident::~CTaskComplexTreatAccident()
void __fastcall CTaskComplexTreatAccident::~CTaskComplexTreatAccident(CTaskComplexTreatAccident *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x5104fc
// Original: _ZN25CTaskComplexTreatAccident17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexTreatAccident::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexTreatAccident::CreateNextSubTask(CTaskComplexTreatAccident *this, CPed *a2)
{
  int v4; // r0
  int v5; // r4
  unsigned int v6; // r1
  int v7; // r5
  int v8; // r9
  char v9; // r0
  int v10; // r2
  float *v11; // r3
  CGeneral *RadianAngleBetweenPoints; // r0
  float v13; // r1
  int v14; // r0
  float v16; // [sp+0h] [bp-30h]
  float v17; // [sp+4h] [bp-2Ch]
  float v18; // [sp+Ch] [bp-24h]
  float v19; // [sp+10h] [bp-20h]

  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 902 )
    return 0;
  v4 = **((_DWORD **)this + 3);
  if ( !v4 )
    return 0;
  v5 = 0;
  if ( (*(_BYTE *)(v4 + 1160) & 8) == 0 )
  {
    v6 = CTimer::m_snTimeInMilliseconds;
    *(_DWORD *)(v4 + 1880) = CTimer::m_snTimeInMilliseconds;
    v7 = CTask::operator new((CTask *)&off_18, v6);
    v8 = *((_DWORD *)this + 3);
    CTaskSimple::CTaskSimple((CTaskSimple *)v7);
    *(_DWORD *)v7 = &off_66B99C;
    v9 = *(_BYTE *)(v7 + 8);
    *(_DWORD *)(v7 + 12) = v8;
    *(_DWORD *)(v7 + 16) = 0;
    *(_BYTE *)(v7 + 8) = v9 & 0xFC | 1;
    CPed::GetBonePosition(**((CEntity ***)this + 3));
    CPed::GetBonePosition(**((CEntity ***)this + 3));
    v10 = *((_DWORD *)a2 + 5);
    v11 = (float *)(v10 + 48);
    if ( !v10 )
      v11 = (float *)((char *)a2 + 4);
    RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                             COERCE_CGENERAL_((float)(v18 + v16) * 0.5),
                                             (float)(v19 + v17) * 0.5,
                                             *v11,
                                             v11[1],
                                             v16);
    v14 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v13);
    v5 = v7;
    *((_DWORD *)a2 + 343) = v14;
    *((_DWORD *)a2 + 344) = v14;
  }
  return v5;
}


// ============================================================

// Address: 0x5105e8
// Original: _ZN25CTaskComplexTreatAccident13CreateSubTaskEiPK4CPed
// Demangled: CTaskComplexTreatAccident::CreateSubTask(int,CPed const*)
CTaskSimple *__fastcall CTaskComplexTreatAccident::CreateSubTask(
        CTaskComplexTreatAccident *this,
        int a2,
        const CPed *a3)
{
  CTaskSimple *v5; // r4
  int v6; // r2
  float *v7; // r3
  CGeneral *RadianAngleBetweenPoints; // r0
  float v9; // r1
  int v10; // r5
  unsigned int v11; // r1
  CTaskSimple *v12; // r0
  int v13; // r5
  int v14; // r0
  char v15; // r2
  float v17; // [sp+0h] [bp-28h]
  float v18; // [sp+4h] [bp-24h]
  float v19; // [sp+Ch] [bp-1Ch]
  float v20; // [sp+10h] [bp-18h]

  v5 = 0;
  switch ( a2 )
  {
    case 102:
      v12 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, 0x66u);
      v13 = *((_DWORD *)this + 3);
      CTaskSimple::CTaskSimple(v12);
      v15 = *(_BYTE *)(v14 + 8);
      *(_DWORD *)(v14 + 12) = v13;
      *(_DWORD *)(v14 + 16) = 0;
      v5 = (CTaskSimple *)v14;
      *(_DWORD *)v14 = &off_66B99C;
      *(_BYTE *)(v14 + 8) = v15 & 0xFC | 1;
      break;
    case 200:
      v5 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, 0xC8u);
      CTaskSimple::CTaskSimple(v5);
      *(_DWORD *)v5 = &off_669000;
      break;
    case 902:
      CPed::GetBonePosition(**((CEntity ***)this + 3));
      CPed::GetBonePosition(**((CEntity ***)this + 3));
      v6 = *((_DWORD *)a3 + 5);
      v7 = (float *)(v6 + 48);
      if ( !v6 )
        v7 = (float *)((char *)a3 + 4);
      RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                               COERCE_CGENERAL_((float)(v19 + v17) * 0.5),
                                               (float)(v20 + v18) * 0.5,
                                               *v7,
                                               v7[1],
                                               v17);
      v10 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v9);
      v5 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, v11);
      CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v5, *(float *)&v10, 0.5, 0.2);
      break;
  }
  return v5;
}


// ============================================================

// Address: 0x5106e8
// Original: _ZNK25CTaskComplexTreatAccident14ComputeHeadingERK4CPed
// Demangled: CTaskComplexTreatAccident::ComputeHeading(CPed const&)
int __fastcall CTaskComplexTreatAccident::ComputeHeading(CEntity ***this, const CPed *a2)
{
  int v4; // r2
  float *v5; // r3
  CGeneral *RadianAngleBetweenPoints; // r0
  float v7; // r1
  float v9; // [sp+0h] [bp-20h]
  float v10; // [sp+4h] [bp-1Ch]
  float v11; // [sp+Ch] [bp-14h]
  float v12; // [sp+10h] [bp-10h]

  CPed::GetBonePosition(*this[3]);
  CPed::GetBonePosition(*this[3]);
  v4 = *((_DWORD *)a2 + 5);
  v5 = (float *)(v4 + 48);
  if ( !v4 )
    v5 = (float *)((char *)a2 + 4);
  RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                           COERCE_CGENERAL_((float)(v11 + v9) * 0.5),
                                           (float)(v12 + v10) * 0.5,
                                           *v5,
                                           v5[1],
                                           v9);
  return CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v7);
}


// ============================================================

// Address: 0x510758
// Original: _ZN25CTaskComplexTreatAccident18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexTreatAccident::CreateFirstSubTask(CPed *)
CTaskSimple *__fastcall CTaskComplexTreatAccident::CreateFirstSubTask(CTaskComplexTreatAccident *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1

  v4 = **((_DWORD **)this + 3);
  if ( !v4 || (*(_BYTE *)(v4 + 1160) & 8) != 0 )
  {
    v5 = 200;
  }
  else
  {
    *(_DWORD *)(v4 + 1880) = CTimer::m_snTimeInMilliseconds;
    CPed::Say(a2, 0xE8u, 0, 1.0, 0, 0, 0);
    IKChainManager_c::LookAt(
      (int)&g_ikChainMan,
      (int)"TaskTreatAccident",
      a2,
      **((_DWORD **)this + 3),
      5000,
      5,
      0,
      1,
      0.25,
      500,
      3,
      0);
    v5 = 902;
  }
  return CTaskComplexTreatAccident::CreateSubTask(this, v5, a2);
}


// ============================================================

// Address: 0x510804
// Original: _ZN25CTaskComplexTreatAccident14ControlSubTaskEP4CPed
// Demangled: CTaskComplexTreatAccident::ControlSubTask(CPed *)
int __fastcall CTaskComplexTreatAccident::ControlSubTask(CTaskComplexTreatAccident *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x512354
// Original: _ZNK25CTaskComplexTreatAccident5CloneEv
// Demangled: CTaskComplexTreatAccident::Clone(void)
_DWORD *__fastcall CTaskComplexTreatAccident::Clone(CTaskComplexTreatAccident *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r4
  _DWORD *result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  result[3] = v4;
  *result = &off_66B9D0;
  return result;
}


// ============================================================

// Address: 0x512378
// Original: _ZNK25CTaskComplexTreatAccident11GetTaskTypeEv
// Demangled: CTaskComplexTreatAccident::GetTaskType(void)
int __fastcall CTaskComplexTreatAccident::GetTaskType(CTaskComplexTreatAccident *this)
{
  return 101;
}


// ============================================================

// Address: 0x51237c
// Original: _ZN25CTaskComplexTreatAccident9SerializeEv
// Demangled: CTaskComplexTreatAccident::Serialize(void)
void __fastcall CTaskComplexTreatAccident::Serialize(CTaskComplexTreatAccident *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CPed *v5; // r0
  int v6; // r4
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r4
  int v12; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexTreatAccident *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexTreatAccident *))(*(_DWORD *)this + 20))(this) == 101 )
  {
    v5 = (CPed *)**((_DWORD **)this + 3);
    if ( v5 )
    {
      v6 = GettPoolPedRef(v5);
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
    v10 = (*(int (__fastcall **)(CTaskComplexTreatAccident *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(101, v10);
  }
}


// ============================================================

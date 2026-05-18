
// Address: 0x196298
// Original: j__ZN33CTaskComplexGoToBoatSteeringWheelC2EP8CVehicle
// Demangled: CTaskComplexGoToBoatSteeringWheel::CTaskComplexGoToBoatSteeringWheel(CVehicle *)
// attributes: thunk
void __fastcall CTaskComplexGoToBoatSteeringWheel::CTaskComplexGoToBoatSteeringWheel(
        CTaskComplexGoToBoatSteeringWheel *this,
        CVehicle *a2)
{
  _ZN33CTaskComplexGoToBoatSteeringWheelC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x505d3c
// Original: _ZN33CTaskComplexGoToBoatSteeringWheelC2EP8CVehicle
// Demangled: CTaskComplexGoToBoatSteeringWheel::CTaskComplexGoToBoatSteeringWheel(CVehicle *)
void __fastcall CTaskComplexGoToBoatSteeringWheel::CTaskComplexGoToBoatSteeringWheel(
        CTaskComplexGoToBoatSteeringWheel *this,
        CVehicle *a2)
{
  CTaskComplex::CTaskComplex(this);
  *((_BYTE *)this + 28) = 0;
  *((_DWORD *)this + 8) = 0;
  *(_DWORD *)this = &off_66B52C;
  *((_DWORD *)this + 6) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 6);
}


// ============================================================

// Address: 0x505d74
// Original: _ZN33CTaskComplexGoToBoatSteeringWheelD2Ev
// Demangled: CTaskComplexGoToBoatSteeringWheel::~CTaskComplexGoToBoatSteeringWheel()
void __fastcall CTaskComplexGoToBoatSteeringWheel::~CTaskComplexGoToBoatSteeringWheel(
        CTaskComplexGoToBoatSteeringWheel *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 24);
  v2 = (CEntity *)*((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66B52C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x505da0
// Original: _ZN33CTaskComplexGoToBoatSteeringWheelD0Ev
// Demangled: CTaskComplexGoToBoatSteeringWheel::~CTaskComplexGoToBoatSteeringWheel()
void __fastcall CTaskComplexGoToBoatSteeringWheel::~CTaskComplexGoToBoatSteeringWheel(
        CTaskComplexGoToBoatSteeringWheel *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 24);
  v2 = (CEntity *)*((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66B52C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x505dd0
// Original: _ZN33CTaskComplexGoToBoatSteeringWheel17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexGoToBoatSteeringWheel::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexGoToBoatSteeringWheel::CreateNextSubTask(CTaskComplexGoToBoatSteeringWheel *this, CPed *a2)
{
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 903 )
    *((_BYTE *)this + 28) = 1;
  return 0;
}


// ============================================================

// Address: 0x505df0
// Original: _ZN33CTaskComplexGoToBoatSteeringWheel13CreateSubTaskEi
// Demangled: CTaskComplexGoToBoatSteeringWheel::CreateSubTask(int)
CTaskSimpleStandStill *__fastcall CTaskComplexGoToBoatSteeringWheel::CreateSubTask(
        CTaskComplexGoToBoatSteeringWheel *this,
        int a2)
{
  CTaskSimpleStandStill *v3; // r4
  int v4; // r1
  float v5; // r0
  int v6; // r2
  int v7; // r0
  double v8; // d16
  int v9; // r0
  unsigned int v10; // r1
  float *v11; // r2
  float v12; // r0
  CTaskComplexGoToPointAndStandStill *v13; // r0
  int v14; // r0
  double v16; // [sp+10h] [bp-28h] BYREF
  float v17; // [sp+18h] [bp-20h]
  double v18; // [sp+20h] [bp-18h]
  float v19; // [sp+28h] [bp-10h]

  v3 = 0;
  if ( a2 == 903 )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v4 + 38)];
    v6 = *(_DWORD *)(LODWORD(v5) + 84);
    v7 = *(_DWORD *)(LODWORD(v5) + 116);
    if ( v6 != 5 )
      v7 += 48;
    v8 = *(double *)v7;
    v19 = *(float *)(v7 + 8);
    v18 = v8;
    Multiply3x3((const CMatrix *)&v16, *(const CVector **)(v4 + 20));
    v19 = v17;
    v18 = v16;
    v9 = *((_DWORD *)this + 6);
    v10 = *(_DWORD *)(v9 + 20);
    v11 = (float *)(v10 + 48);
    if ( !v10 )
      v11 = (float *)(v9 + 4);
    *(float *)&v18 = *v11 + *(float *)&v16;
    *((float *)&v18 + 1) = v11[1] + *((float *)&v16 + 1);
    v19 = v11[2] + v17;
    v12 = v19;
    *(double *)((char *)this + 12) = v18;
    *((float *)this + 5) = v12;
    v13 = (CTaskComplexGoToPointAndStandStill *)CTask::operator new((CTask *)&word_28, v10);
    CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
      v13,
      4,
      (CTaskComplexGoToBoatSteeringWheel *)((char *)this + 12),
      0.5,
      2.0,
      0,
      0);
    return (CTaskSimpleStandStill *)v14;
  }
  else if ( a2 == 203 )
  {
    v3 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, 0xCBu);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v3, -1, 0, 0, 8.0);
  }
  return v3;
}


// ============================================================

// Address: 0x505ee8
// Original: _ZN33CTaskComplexGoToBoatSteeringWheel18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGoToBoatSteeringWheel::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexGoToBoatSteeringWheel::CreateFirstSubTask(
        CTaskComplexGoToBoatSteeringWheel *this,
        CPed *a2)
{
  int v3; // r2
  float v4; // r0
  int v5; // r1
  int v6; // r0
  double v7; // d16
  int v8; // r0
  unsigned int v9; // r1
  float *v10; // r2
  float v11; // r0
  CTaskComplexGoToPointAndStandStill *v12; // r0
  double v13; // [sp+10h] [bp-28h] BYREF
  float v14; // [sp+18h] [bp-20h]
  double v15; // [sp+20h] [bp-18h]
  float v16; // [sp+28h] [bp-10h]

  v3 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 8) = CTimer::m_snTimeInMilliseconds;
  v4 = CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v3 + 38)];
  v5 = *(_DWORD *)(LODWORD(v4) + 84);
  v6 = *(_DWORD *)(LODWORD(v4) + 116);
  if ( v5 != 5 )
    v6 += 48;
  v7 = *(double *)v6;
  v16 = *(float *)(v6 + 8);
  v15 = v7;
  Multiply3x3((const CMatrix *)&v13, *(const CVector **)(v3 + 20));
  v16 = v14;
  v15 = v13;
  v8 = *((_DWORD *)this + 6);
  v9 = *(_DWORD *)(v8 + 20);
  v10 = (float *)(v9 + 48);
  if ( !v9 )
    v10 = (float *)(v8 + 4);
  *(float *)&v15 = *v10 + *(float *)&v13;
  *((float *)&v15 + 1) = v10[1] + *((float *)&v13 + 1);
  v16 = v10[2] + v14;
  v11 = v16;
  *(double *)((char *)this + 12) = v15;
  *((float *)this + 5) = v11;
  v12 = (CTaskComplexGoToPointAndStandStill *)CTask::operator new((CTask *)&word_28, v9);
  CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
    v12,
    4,
    (CTaskComplexGoToBoatSteeringWheel *)((char *)this + 12),
    0.5,
    2.0,
    0,
    0);
}


// ============================================================

// Address: 0x505fc4
// Original: _ZN33CTaskComplexGoToBoatSteeringWheel14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGoToBoatSteeringWheel::ControlSubTask(CPed *)
void __fastcall CTaskComplexGoToBoatSteeringWheel::ControlSubTask(CTaskComplexGoToBoatSteeringWheel *this, CPed *a2)
{
  const CPed *v4; // r1
  unsigned int v5; // r1
  CTaskSimpleStandStill *v6; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r1
  float v10; // r0
  int v11; // r2
  int v12; // r0
  double v13; // d16
  int v14; // r0
  int v15; // r1
  float *v16; // r2
  float v17; // r0
  float v18; // s4
  float v19; // s8
  float v20; // s10
  float v21; // s12
  __int64 v22; // d16
  char v23; // r0
  CTask *v24; // [sp+0h] [bp-30h]
  double v25; // [sp+8h] [bp-28h] BYREF
  float v26; // [sp+10h] [bp-20h]
  double v27; // [sp+18h] [bp-18h]
  float v28; // [sp+20h] [bp-10h]

  if ( CPed::IsPlayer(a2) == 1
    && (v4 = (const CPed *)*((_DWORD *)this + 6)) != 0
    && CCarEnterExit::IsPlayerToQuitCarEnter(a2, v4, *((const CVehicle **)this + 8), *((_DWORD *)this + 2), v24) == 1 )
  {
    v6 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v5);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v6, -1, 0, 0, 8.0);
  }
  else
  {
    v7 = *((_DWORD *)this + 2);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7) )
    {
      v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8) != 203 )
      {
        v9 = *((_DWORD *)this + 6);
        v10 = CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v9 + 38)];
        v11 = *(_DWORD *)(LODWORD(v10) + 84);
        v12 = *(_DWORD *)(LODWORD(v10) + 116);
        if ( v11 != 5 )
          v12 += 48;
        v13 = *(double *)v12;
        v28 = *(float *)(v12 + 8);
        v27 = v13;
        Multiply3x3((const CMatrix *)&v25, *(const CVector **)(v9 + 20));
        v28 = v26;
        v27 = v25;
        v14 = *((_DWORD *)this + 6);
        v15 = *(_DWORD *)(v14 + 20);
        v16 = (float *)(v15 + 48);
        if ( !v15 )
          v16 = (float *)(v14 + 4);
        *(float *)&v27 = *v16 + *(float *)&v25;
        *((float *)&v27 + 1) = v16[1] + *((float *)&v25 + 1);
        v28 = v16[2] + v26;
        v17 = v28;
        *(double *)((char *)this + 12) = v27;
        *((float *)this + 5) = v17;
        v18 = *((float *)this + 3);
        v19 = *(float *)(v7 + 16);
        v20 = *((float *)this + 4);
        v21 = *(float *)(v7 + 20);
        if ( (float)((float)((float)((float)(v19 - v18) * (float)(v19 - v18))
                           + (float)((float)(v21 - v20) * (float)(v21 - v20)))
                   + (float)((float)(*(float *)(v7 + 24) - *((float *)this + 5))
                           * (float)(*(float *)(v7 + 24) - *((float *)this + 5)))) > 0.04
          && (v21 != v20 || v19 != v18 || *(float *)(v7 + 32) != 2.0) )
        {
          v22 = *(_QWORD *)((char *)this + 12);
          *(_DWORD *)(v7 + 24) = *((_DWORD *)this + 5);
          *(_QWORD *)(v7 + 16) = v22;
          *(_DWORD *)(v7 + 32) = 0x40000000;
          v23 = *(_BYTE *)(v7 + 36);
          *(_DWORD *)(v7 + 28) = 1056964608;
          *(_BYTE *)(v7 + 36) = v23 | 4;
        }
      }
    }
  }
}


// ============================================================

// Address: 0x506170
// Original: _ZN33CTaskComplexGoToBoatSteeringWheel16ComputeTargetPosEv
// Demangled: CTaskComplexGoToBoatSteeringWheel::ComputeTargetPos(void)
float __fastcall CTaskComplexGoToBoatSteeringWheel::ComputeTargetPos(CTaskComplexGoToBoatSteeringWheel *this)
{
  int v2; // r1
  float v3; // r0
  int v4; // r2
  int v5; // r0
  double v6; // d16
  int v7; // r0
  int v8; // r1
  float *v9; // r2
  float result; // r0
  double v11; // [sp+0h] [bp-28h] BYREF
  float v12; // [sp+8h] [bp-20h]
  double v13; // [sp+10h] [bp-18h]
  float v14; // [sp+18h] [bp-10h]

  v2 = *((_DWORD *)this + 6);
  v3 = CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v2 + 38)];
  v4 = *(_DWORD *)(LODWORD(v3) + 84);
  v5 = *(_DWORD *)(LODWORD(v3) + 116);
  if ( v4 != 5 )
    v5 += 48;
  v6 = *(double *)v5;
  v14 = *(float *)(v5 + 8);
  v13 = v6;
  Multiply3x3((const CMatrix *)&v11, *(const CVector **)(v2 + 20));
  v14 = v12;
  v13 = v11;
  v7 = *((_DWORD *)this + 6);
  v8 = *(_DWORD *)(v7 + 20);
  v9 = (float *)(v8 + 48);
  if ( !v8 )
    v9 = (float *)(v7 + 4);
  *(float *)&v13 = *v9 + *(float *)&v11;
  *((float *)&v13 + 1) = v9[1] + *((float *)&v11 + 1);
  v14 = v9[2] + v12;
  result = v14;
  *(double *)((char *)this + 12) = v13;
  *((float *)this + 5) = result;
  return result;
}


// ============================================================

// Address: 0x50737c
// Original: _ZNK33CTaskComplexGoToBoatSteeringWheel5CloneEv
// Demangled: CTaskComplexGoToBoatSteeringWheel::Clone(void)
int __fastcall CTaskComplexGoToBoatSteeringWheel::Clone(CTaskComplexGoToBoatSteeringWheel *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5

  v3 = CTask::operator new((CTask *)&dword_24, a2);
  v4 = (CEntity *)*((_DWORD *)this + 6);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_BYTE *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)v3 = &off_66B52C;
  *(_DWORD *)(v3 + 24) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 24));
  return v3;
}


// ============================================================

// Address: 0x5073bc
// Original: _ZNK33CTaskComplexGoToBoatSteeringWheel11GetTaskTypeEv
// Demangled: CTaskComplexGoToBoatSteeringWheel::GetTaskType(void)
int __fastcall CTaskComplexGoToBoatSteeringWheel::GetTaskType(CTaskComplexGoToBoatSteeringWheel *this)
{
  return 830;
}


// ============================================================

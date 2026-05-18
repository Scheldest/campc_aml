
// Address: 0x18fe70
// Original: j__ZN19CTaskSimpleCarAlignC2EP8CVehicleRK7CVectoriP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarAlign::CTaskSimpleCarAlign(CVehicle *,CVector const&,int,CTaskUtilityLineUpPedWithCar *)
// attributes: thunk
void __fastcall CTaskSimpleCarAlign::CTaskSimpleCarAlign(
        CTaskSimpleCarAlign *this,
        CVehicle *a2,
        const CVector *a3,
        int a4,
        CTaskUtilityLineUpPedWithCar *a5)
{
  _ZN19CTaskSimpleCarAlignC2EP8CVehicleRK7CVectoriP28CTaskUtilityLineUpPedWithCar(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x1a0a94
// Original: j__ZN19CTaskSimpleCarAlign10FixHeadingEP4CPed
// Demangled: CTaskSimpleCarAlign::FixHeading(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleCarAlign::FixHeading(CTaskSimpleCarAlign *this, CPed *a2)
{
  return _ZN19CTaskSimpleCarAlign10FixHeadingEP4CPed(this, a2);
}


// ============================================================

// Address: 0x5006c4
// Original: _ZN19CTaskSimpleCarAlignC2EP8CVehicleRK7CVectoriP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarAlign::CTaskSimpleCarAlign(CVehicle *,CVector const&,int,CTaskUtilityLineUpPedWithCar *)
void __fastcall CTaskSimpleCarAlign::CTaskSimpleCarAlign(
        CTaskSimpleCarAlign *this,
        CVehicle *a2,
        const CVector *a3,
        int a4,
        CTaskUtilityLineUpPedWithCar *a5)
{
  __int64 v9; // d16

  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_66B008;
  *((_DWORD *)this + 4) = a2;
  v9 = *(_QWORD *)a3;
  *((_DWORD *)this + 7) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 8) = a4;
  *((_DWORD *)this + 9) = a5;
  *(_QWORD *)((char *)this + 20) = v9;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x500718
// Original: _ZN19CTaskSimpleCarAlignD2Ev
// Demangled: CTaskSimpleCarAlign::~CTaskSimpleCarAlign()
void __fastcall CTaskSimpleCarAlign::~CTaskSimpleCarAlign(CTaskSimpleCarAlign *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B008;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  if ( v4 )
    CAnimBlendAssociation::SetFinishCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x500758
// Original: _ZN19CTaskSimpleCarAlignD0Ev
// Demangled: CTaskSimpleCarAlign::~CTaskSimpleCarAlign()
void __fastcall CTaskSimpleCarAlign::~CTaskSimpleCarAlign(CTaskSimpleCarAlign *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B008;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  if ( v4 )
    CAnimBlendAssociation::SetFinishCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x50079c
// Original: _ZN19CTaskSimpleCarAlign13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarAlign::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarAlign::MakeAbortable(CTaskSimpleCarAlign *this, CPed *a2, int a3, const CEvent *a4)
{
  int v5; // r0

  if ( a3 != 2 )
    return 0;
  v5 = *((_DWORD *)this + 3);
  if ( v5 )
    *(_DWORD *)(v5 + 28) = -998637568;
  return 1;
}


// ============================================================

// Address: 0x5007b8
// Original: _ZN19CTaskSimpleCarAlign10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarAlign::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarAlign::ProcessPed(CTaskSimpleCarAlign *this, CPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d3
  int v7; // r2
  float *v8; // r6
  bool v9; // zf
  int v10; // r2
  int v11; // r6
  int Group; // r0
  CAnimBlendAssociation *v13; // r0
  _BYTE v14[8]; // [sp+4h] [bp-1Ch] BYREF
  float v15; // [sp+Ch] [bp-14h]

  if ( *((_BYTE *)this + 8) || !*((_DWORD *)this + 4) )
    return 1;
  if ( !*((_DWORD *)this + 3) )
  {
    CTaskSimpleCarAlign::FixHeading(this, a2);
    CCarEnterExit::GetPositionToOpenCarDoor((CCarEnterExit *)v14, *((const CVehicle **)this + 4), *((_DWORD *)this + 8));
    v7 = *((_DWORD *)a2 + 5);
    v8 = (float *)(v7 + 48);
    v9 = v7 == 0;
    v10 = 351;
    if ( v9 )
      v8 = (float *)((char *)a2 + 4);
    v3.n64_u32[0] = 0;
    v2.n64_f32[0] = v15 - v8[2];
    v11 = 352;
    if ( vmax_f32(v2, v3).n64_f32[0] > 4.4 )
    {
      v10 = 353;
      v11 = 354;
    }
    if ( (*((_DWORD *)this + 8) & 0xFFFFFFFE) == 0xA )
      v11 = v10;
    Group = CVehicleAnimGroup::GetGroup(
              (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                             * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904)
                                                                                                  + 222)],
              v11);
    v13 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v11);
    *((_DWORD *)this + 3) = v13;
    CAnimBlendAssociation::SetFinishCallback(
      v13,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarAlign::FinishAnimCarAlignCB,
      this);
  }
  return 0;
}


// ============================================================

// Address: 0x50088c
// Original: _ZN19CTaskSimpleCarAlign10FixHeadingEP4CPed
// Demangled: CTaskSimpleCarAlign::FixHeading(CPed *)
unsigned int __fastcall CTaskSimpleCarAlign::FixHeading(unsigned int this, CPed *a2)
{
  int v3; // r1
  float *v4; // r1
  float v5; // s16
  float v6; // s18
  float v7; // s20
  float *v8; // r6
  float v9; // s2
  float v10; // s4
  float v11; // s0
  float v12; // r5
  float v13; // r8
  float v14; // s0
  float v15; // s4
  float v16; // s2
  float v17; // s0
  float v18; // r5
  float v19; // r8
  float v20; // s0
  float v21; // s18
  float v22; // s16
  float v23; // s2
  float v24; // s0
  float v25; // r5
  float v26; // r6
  CGeneral *RadianAngleBetweenPoints; // r0
  float v28; // r1
  float v29; // [sp+0h] [bp-28h]

  v3 = *(_DWORD *)(this + 16);
  if ( v3 && !*(_DWORD *)(v3 + 1440) )
  {
    v4 = *(float **)(v3 + 20);
    v5 = *v4;
    this = *(_DWORD *)(this + 32) & 0xFFFFFFFE;
    v6 = v4[1];
    v7 = v4[2];
    if ( this == 10 )
    {
      v7 = -v7;
      v6 = -v6;
      v5 = -v5;
    }
    v8 = (float *)*((_DWORD *)a2 + 5);
    if ( v8 )
    {
      v9 = v8[4];
      v10 = v8[5];
      v11 = v8[6];
    }
    else
    {
      v12 = *((float *)a2 + 4);
      v13 = sinf(v12);
      v10 = cosf(v12);
      this = LODWORD(v13) ^ 0x80000000;
      v11 = 0.0;
      LODWORD(v9) = LODWORD(v13) ^ 0x80000000;
    }
    v14 = (float)((float)(v5 * v9) + (float)(v6 * v10)) + (float)(v7 * v11);
    if ( v14 > 0.0 && v14 < 0.1 )
    {
      if ( v8 )
      {
        v15 = v8[4];
        v16 = v8[5];
        v17 = v8[6];
      }
      else
      {
        v18 = *((float *)a2 + 4);
        v19 = sinf(v18);
        v16 = cosf(v18);
        v17 = 0.0;
        LODWORD(v15) = LODWORD(v19) ^ 0x80000000;
      }
      v20 = (float)(v7 * v17) + (float)((float)(v6 * v16) + (float)(v5 * v15));
      v21 = v6 * v20;
      v22 = v5 * v20;
      if ( v8 )
      {
        v23 = v8[4];
        v24 = v8[5];
      }
      else
      {
        v25 = *((float *)a2 + 4);
        v26 = sinf(v25);
        v24 = cosf(v25);
        LODWORD(v23) = LODWORD(v26) ^ 0x80000000;
      }
      RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                               COERCE_CGENERAL_((float)(v23 - v22) - v22),
                                               (float)(v24 - v21) - v21,
                                               0.0,
                                               0.0,
                                               v29);
      this = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v28);
      *((_DWORD *)a2 + 343) = this;
      *((_DWORD *)a2 + 344) = this;
    }
  }
  return this;
}


// ============================================================

// Address: 0x5009e4
// Original: _ZN19CTaskSimpleCarAlign9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarAlign::StartAnim(CPed const*)
int __fastcall CTaskSimpleCarAlign::StartAnim(CTaskSimpleCarAlign *this, const CPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d3
  int v6; // r2
  float *v7; // r6
  bool v8; // zf
  int v9; // r2
  int v10; // r6
  int Group; // r0
  CAnimBlendAssociation *v12; // r0
  _BYTE v14[8]; // [sp+4h] [bp-1Ch] BYREF
  float v15; // [sp+Ch] [bp-14h]

  CCarEnterExit::GetPositionToOpenCarDoor((CCarEnterExit *)v14, *((const CVehicle **)this + 4), *((_DWORD *)this + 8));
  v6 = *((_DWORD *)a2 + 5);
  v7 = (float *)(v6 + 48);
  v8 = v6 == 0;
  v9 = 351;
  if ( v8 )
    v7 = (float *)((char *)a2 + 4);
  v3.n64_u32[0] = 0;
  v2.n64_f32[0] = v15 - v7[2];
  v10 = 352;
  if ( vmax_f32(v2, v3).n64_f32[0] > 4.4 )
  {
    v9 = 353;
    v10 = 354;
  }
  if ( (*((_DWORD *)this + 8) & 0xFFFFFFFE) == 0xA )
    v10 = v9;
  Group = CVehicleAnimGroup::GetGroup(
            (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                           * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904)
                                                                                                + 222)],
            v10);
  v12 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v10);
  *((_DWORD *)this + 3) = v12;
  return CAnimBlendAssociation::SetFinishCallback(
           v12,
           (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarAlign::FinishAnimCarAlignCB,
           this);
}


// ============================================================

// Address: 0x500a98
// Original: _ZN19CTaskSimpleCarAlign14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarAlign::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarAlign::SetPedPosition(CTaskSimpleCarAlign *this, CPed *a2)
{
  _BYTE v5[20]; // [sp+4h] [bp-14h] BYREF

  CCarEnterExit::GetPositionToOpenCarDoor((CCarEnterExit *)v5, *((const CVehicle **)this + 4), *((_DWORD *)this + 8));
  CTaskUtilityLineUpPedWithCar::ProcessPed(
    *((CTaskUtilityLineUpPedWithCar **)this + 9),
    a2,
    *((CVehicle **)this + 4),
    *((CAnimBlendAssociation **)this + 3));
  return 1;
}


// ============================================================

// Address: 0x500abe
// Original: _ZN19CTaskSimpleCarAlign20FinishAnimCarAlignCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleCarAlign::FinishAnimCarAlignCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleCarAlign::FinishAnimCarAlignCB(
        CTaskSimpleCarAlign *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int result; // r0

  *((_BYTE *)a2 + 8) = 1;
  result = 0;
  *((_DWORD *)a2 + 3) = 0;
  return result;
}


// ============================================================

// Address: 0x506ab0
// Original: _ZNK19CTaskSimpleCarAlign5CloneEv
// Demangled: CTaskSimpleCarAlign::Clone(void)
CTaskSimple *__fastcall CTaskSimpleCarAlign::Clone(CTaskSimpleCarAlign *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  CEntity *v4; // r5
  CTaskSimple *v5; // r4
  __int64 v6; // r8
  __int64 v7; // d16

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&word_28, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  v5 = v3;
  v6 = *((_QWORD *)this + 4);
  CTaskSimple::CTaskSimple(v3);
  *((_BYTE *)v5 + 8) = 0;
  *((_DWORD *)v5 + 3) = 0;
  *(_DWORD *)v5 = &off_66B008;
  *((_DWORD *)v5 + 4) = v4;
  v7 = *(_QWORD *)((char *)this + 20);
  *((_DWORD *)v5 + 7) = *((_DWORD *)this + 7);
  *((_QWORD *)v5 + 4) = v6;
  *(_QWORD *)((char *)v5 + 20) = v7;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)v5 + 4);
  return v5;
}


// ============================================================

// Address: 0x506b0c
// Original: _ZNK19CTaskSimpleCarAlign11GetTaskTypeEv
// Demangled: CTaskSimpleCarAlign::GetTaskType(void)
int __fastcall CTaskSimpleCarAlign::GetTaskType(CTaskSimpleCarAlign *this)
{
  return 801;
}


// ============================================================

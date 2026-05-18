
// Address: 0x18a460
// Original: j__ZN25CTaskSimpleKillPedWithCar10CreateTaskEv
// Demangled: CTaskSimpleKillPedWithCar::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleKillPedWithCar::CreateTask(CTaskSimpleKillPedWithCar *this)
{
  return _ZN25CTaskSimpleKillPedWithCar10CreateTaskEv(this);
}


// ============================================================

// Address: 0x190500
// Original: j__ZNK25CTaskSimpleKillPedWithCar15DamageCarBonnetEPK4CPed
// Demangled: CTaskSimpleKillPedWithCar::DamageCarBonnet(CPed const*)
// attributes: thunk
int __fastcall CTaskSimpleKillPedWithCar::DamageCarBonnet(CTaskSimpleKillPedWithCar *this, const CPed *a2)
{
  return _ZNK25CTaskSimpleKillPedWithCar15DamageCarBonnetEPK4CPed(this, a2);
}


// ============================================================

// Address: 0x198458
// Original: j__ZN25CTaskSimpleKillPedWithCarC2EP8CVehiclef
// Demangled: CTaskSimpleKillPedWithCar::CTaskSimpleKillPedWithCar(CVehicle *,float)
// attributes: thunk
void __fastcall CTaskSimpleKillPedWithCar::CTaskSimpleKillPedWithCar(
        CTaskSimpleKillPedWithCar *this,
        CVehicle *a2,
        float a3)
{
  _ZN25CTaskSimpleKillPedWithCarC2EP8CVehiclef(this, a2, a3);
}


// ============================================================

// Address: 0x19f444
// Original: j__ZNK25CTaskSimpleKillPedWithCar16SetPlayerPadJoltEv
// Demangled: CTaskSimpleKillPedWithCar::SetPlayerPadJolt(void)
// attributes: thunk
int __fastcall CTaskSimpleKillPedWithCar::SetPlayerPadJolt(CTaskSimpleKillPedWithCar *this)
{
  return _ZNK25CTaskSimpleKillPedWithCar16SetPlayerPadJoltEv(this);
}


// ============================================================

// Address: 0x4926cc
// Original: _ZN25CTaskSimpleKillPedWithCar10CreateTaskEv
// Demangled: CTaskSimpleKillPedWithCar::CreateTask(void)
void __fastcall CTaskSimpleKillPedWithCar::CreateTask(CTaskSimpleKillPedWithCar *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  unsigned int v7; // r1
  CTaskSimpleKillPedWithCar *v8; // r0
  float v9; // [sp+4h] [bp-1Ch] BYREF
  CPools *v10; // [sp+8h] [bp-18h] BYREF
  _BYTE v11[2]; // [sp+Ch] [bp-14h] BYREF
  _BYTE v12[18]; // [sp+Eh] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, byte_4, a3);
  if ( v10 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v10, (int)v10 + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v9, byte_4, v4);
  v8 = (CTaskSimpleKillPedWithCar *)CTask::operator new((CTask *)&word_10, v7);
  CTaskSimpleKillPedWithCar::CTaskSimpleKillPedWithCar(v8, Vehicle, v9);
}


// ============================================================

// Address: 0x50b8ec
// Original: _ZN25CTaskSimpleKillPedWithCarC2EP8CVehiclef
// Demangled: CTaskSimpleKillPedWithCar::CTaskSimpleKillPedWithCar(CVehicle *,float)
void __fastcall CTaskSimpleKillPedWithCar::CTaskSimpleKillPedWithCar(
        CTaskSimpleKillPedWithCar *this,
        CVehicle *a2,
        float a3)
{
  CTaskSimple::CTaskSimple(this);
  *((float *)this + 3) = a3;
  *(_DWORD *)this = &off_66B790;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
}


// ============================================================

// Address: 0x50b928
// Original: _ZN25CTaskSimpleKillPedWithCarD2Ev
// Demangled: CTaskSimpleKillPedWithCar::~CTaskSimpleKillPedWithCar()
void __fastcall CTaskSimpleKillPedWithCar::~CTaskSimpleKillPedWithCar(CTaskSimpleKillPedWithCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B790;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x50b954
// Original: _ZN25CTaskSimpleKillPedWithCarD0Ev
// Demangled: CTaskSimpleKillPedWithCar::~CTaskSimpleKillPedWithCar()
void __fastcall CTaskSimpleKillPedWithCar::~CTaskSimpleKillPedWithCar(CTaskSimpleKillPedWithCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B790;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x50b984
// Original: _ZNK25CTaskSimpleKillPedWithCar16SetPlayerPadJoltEv
// Demangled: CTaskSimpleKillPedWithCar::SetPlayerPadJolt(void)
float *__fastcall CTaskSimpleKillPedWithCar::SetPlayerPadJolt(CTaskSimpleKillPedWithCar *this)
{
  float *result; // r0
  float *v3; // r1
  float v4; // s4
  unsigned int v5; // r4
  int v6; // r1
  CPad *Pad; // r0

  result = (float *)FindPlayerVehicle(-1, 0);
  v3 = (float *)*((_DWORD *)this + 2);
  if ( result == v3 )
  {
    v4 = v3[36];
    if ( (float)((float)((float)((float)(sqrtf(
                                           (float)((float)(result[18] * result[18]) + (float)(result[19] * result[19]))
                                         + (float)(result[20] * result[20]))
                                       * 100.0)
                               * 2000.0)
                       / v4)
               + 80.0) <= 250.0 )
      v5 = (unsigned int)(float)((float)((float)((float)(sqrtf(
                                                           (float)((float)(v3[18] * v3[18]) + (float)(v3[19] * v3[19]))
                                                         + (float)(v3[20] * v3[20]))
                                                       * 100.0)
                                               * 2000.0)
                                       / v4)
                               + 80.0);
    else
      v5 = 250;
    Pad = (CPad *)CPad::GetPad(0, v6);
    return (float *)sub_18F134(Pad, 0x9C40 / v5, v5, 0);
  }
  return result;
}


// ============================================================

// Address: 0x50ba60
// Original: _ZN25CTaskSimpleKillPedWithCar10ProcessPedEP4CPed
// Demangled: CTaskSimpleKillPedWithCar::ProcessPed(CPed *)
int __fastcall CTaskSimpleKillPedWithCar::ProcessPed(CTaskSimpleKillPedWithCar *this, CPed *a2)
{
  int v4; // r1
  float *v5; // r4
  int v6; // r2
  float *v7; // r3
  float *v8; // r0
  float *v9; // r6
  float v10; // s16
  float v11; // s18
  float v12; // s20
  float v13; // s30
  float v14; // s19
  float v15; // s21
  float v16; // s23
  float v17; // s27
  float *v18; // r2
  float v19; // s25
  float v20; // s24
  float v21; // s22
  float v22; // s28
  float v23; // s17
  float v24; // s29
  float v25; // s26
  int v26; // r8
  int v27; // r10
  float v28; // s0
  float v29; // s2
  int v30; // r0
  float v31; // s4
  float v32; // s2
  int v33; // r0
  int v34; // r1
  float v35; // s2
  float v36; // s4
  float v37; // s0
  float v38; // s2
  float v39; // s24
  float v40; // s2
  float v41; // s4
  CLocalisation *v42; // r0
  int v43; // r6
  int v44; // r1
  float v45; // s26
  float v46; // s28
  float v47; // s30
  unsigned __int64 v48; // d16
  float v49; // s17
  float v50; // s0
  unsigned int v51; // s4
  unsigned int v52; // s2
  CEventGroup *EventGlobalGroup; // r0
  int v54; // r0
  _DWORD *v55; // r4
  __int64 v56; // r0
  int v57; // r0
  float v58; // s0
  float v59; // s6
  float v61; // [sp+14h] [bp-D4h] BYREF
  float v62; // [sp+18h] [bp-D0h]
  float v63; // [sp+1Ch] [bp-CCh]
  unsigned __int64 v64; // [sp+20h] [bp-C8h] BYREF
  float v65; // [sp+28h] [bp-C0h]
  int v66; // [sp+3Ch] [bp-ACh]
  char v67; // [sp+5Eh] [bp-8Ah]
  _BYTE v68[20]; // [sp+60h] [bp-88h] BYREF
  _BYTE v69[116]; // [sp+74h] [bp-74h] BYREF

  v4 = *((_DWORD *)this + 2);
  v5 = (float *)((char *)a2 + 4);
  v6 = *((_DWORD *)a2 + 5);
  v7 = (float *)((char *)a2 + 4);
  v8 = *(float **)(v4 + 20);
  if ( v6 )
    v7 = (float *)(v6 + 48);
  v9 = v8 + 12;
  if ( !v8 )
    v9 = (float *)(v4 + 4);
  v10 = *v7 - *v9;
  v11 = v7[1] - v9[1];
  v12 = v7[2] - v9[2];
  v13 = v8[4];
  v14 = v8[5];
  v15 = v8[6];
  v16 = v8[8];
  v17 = v8[9];
  v18 = *(float **)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v4 + 38)]) + 44);
  v19 = v8[10];
  v20 = v18[1];
  v21 = v18[4];
  v22 = v18[5];
  v23 = (float)((float)(v10 * *v8) + (float)(v11 * v8[1])) + (float)(v12 * v8[2]);
  v24 = v18[3] * 0.99;
  v25 = (float)((float)(v13 * *(float *)(v4 + 72)) + (float)(v14 * *(float *)(v4 + 76)))
      + (float)(v15 * *(float *)(v4 + 80));
  v26 = CPedGeometryAnalyser::ComputePedHitSide(a2, (const CPed *)v4, (const CPhysical *)v18);
  if ( fabsf(v23) <= v24 )
  {
    v33 = *((_DWORD *)this + 2);
    if ( (float)((float)((float)(v10 * v16) + (float)(v11 * v17)) + (float)(v12 * v19)) <= 0.1 )
    {
      v40 = *(float *)(v33 + 72);
      v41 = *(float *)(v33 + 76) * 0.9;
      *((_DWORD *)a2 + 20) = 0;
      v42 = (CLocalisation *)(v26 | 2);
      *((float *)a2 + 18) = v40 * 0.9;
      *((float *)a2 + 19) = v41;
      if ( (v26 | 2) == 3 )
        LOBYTE(v26) = 0;
      if ( CLocalisation::KnockDownPeds(v42) )
        CAEVehicleAudioEntity::AddAudioEvent((CAEVehicleAudioEntity *)(*((_DWORD *)this + 2) + 316), 119, 0.0);
      v27 = 5;
      goto LABEL_26;
    }
    v34 = *(_DWORD *)(v33 + 20);
    v35 = *(float *)(v34 + 24);
    if ( v35 >= -0.2 )
    {
      if ( v35 <= 0.1 )
      {
        v39 = -v20;
        v37 = v22 * *(float *)(v34 + 40);
      }
      else
      {
        v39 = v21 - v20;
        v37 = (float)(v21 * v35) + (float)(v22 * *(float *)(v34 + 40));
      }
      v38 = v9[2];
      if ( v25 > 0.0 )
        v39 = v21;
    }
    else
    {
      v36 = -0.0;
      v37 = (float)(v20 * v35) + (float)(v22 * *(float *)(v34 + 40));
      if ( v25 > 0.0 )
        v36 = v21;
      v38 = v9[2];
      v39 = v36 - v20;
    }
    v44 = *((_DWORD *)a2 + 5);
    v45 = *(float *)(v33 + 72);
    v46 = *(float *)(v33 + 76);
    v47 = *(float *)(v33 + 80);
    if ( v44 )
      v5 = (float *)(v44 + 48);
    v48 = *(_QWORD *)(v33 + 72);
    v49 = v5[2];
    v65 = *(float *)(v33 + 80);
    v64 = v48;
    CVector::Normalise((CVector *)&v64);
    v50 = (float)((float)(v38 + v37) - v49)
        / (float)(v39 / sqrtf((float)((float)(v45 * v45) + (float)(v46 * v46)) + (float)(v47 * v47)));
    *(float *)&v51 = v50 * *((float *)&v64 + 1);
    *(float *)&v52 = v50 * *(float *)&v64;
    v64 = __PAIR64__(v50 * *((float *)&v64 + 1), v50 * *(float *)&v64);
    v65 = v50 * v65;
    *((float *)a2 + 20) = v65;
    *((_QWORD *)a2 + 9) = __PAIR64__(v51, v52);
    CTaskSimpleKillPedWithCar::DamageCarBonnet(this, a2);
    v27 = 4;
  }
  else
  {
    v27 = 1;
    if ( v25 > 0.0 )
      v20 = v21;
    v28 = fabsf((float)((float)(v10 * v13) + (float)(v11 * v14)) + (float)(v12 * v15));
    v29 = fabsf(v20 * 0.85);
    if ( v23 > 0.0 )
      v27 = 3;
    if ( v28 < v29 )
    {
      v30 = *((_DWORD *)this + 2);
      v31 = *(float *)(v30 + 76);
      v32 = *(float *)(v30 + 72);
      *((_DWORD *)a2 + 20) = 0;
      *((float *)a2 + 18) = v32 * 0.9;
      *((float *)a2 + 19) = v31 * 0.9;
      if ( CLocalisation::KnockDownPeds(0) )
        CAEVehicleAudioEntity::AddAudioEvent((CAEVehicleAudioEntity *)(*((_DWORD *)this + 2) + 316), 119, 0.0);
      if ( (v26 | 2) == 3 )
        LOBYTE(v26) = 0;
LABEL_26:
      v43 = 50;
      goto LABEL_36;
    }
  }
  v43 = 49;
LABEL_36:
  CEventVehicleHitAndRun::CEventVehicleHitAndRun((CEventVehicleHitAndRun *)v69, a2, *((CVehicle **)this + 2));
  EventGlobalGroup = (CEventGroup *)GetEventGlobalGroup();
  CEventGroup::Add(EventGlobalGroup, (CEvent *)v69, 0);
  CPedDamageResponseCalculator::CPedDamageResponseCalculator((int)v68, *((_DWORD *)this + 2), 1148846080, v43, 9, 0);
  CEventDamage::CEventDamage(
    (int)&v64,
    *((CEntity **)this + 2),
    CTimer::m_snTimeInMilliseconds,
    v43,
    9,
    (unsigned __int8)v26,
    0,
    (*((_DWORD *)a2 + 289) >> 8) & 1);
  v54 = ((unsigned __int8)v27 ^ 4) & 7;
  v55 = (_DWORD *)((char *)a2 + 1156);
  if ( 0xA3u >> v54 << 31 )
    v66 = dword_50BEE8[v54];
  if ( CEventDamage::AffectsPed((CEventDamage *)&v64, a2) == 1 )
    CPedDamageResponseCalculator::ComputeDamageResponse((int)v68, a2);
  else
    v67 = 1;
  CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)&v64, 0);
  CTaskSimpleKillPedWithCar::SetPlayerPadJolt(this);
  HIDWORD(v56) = *((_DWORD *)a2 + 290) & 0xFFFFFFEF;
  if ( v27 == 4 )
    HIDWORD(v56) |= 0x10u;
  LODWORD(v56) = *v55 & 0xFFFFFFFE;
  *(_QWORD *)v55 = v56;
  v62 = v11;
  v61 = v10;
  v63 = v12;
  CVector::Normalise((CVector *)&v61);
  v57 = *((_DWORD *)this + 2);
  v58 = *(float *)(v57 + 144) / 1400.0;
  v59 = v58 * -100.0;
  if ( v58 > 1.0 )
    v59 = -100.0;
  v61 = v61 * v59;
  v62 = v62 * v59;
  v63 = v59 * v63;
  CPhysical::ApplyMoveForce(v57, LODWORD(v61), LODWORD(v62), LODWORD(v63));
  CEventDamage::~CEventDamage((CEventDamage *)&v64);
  CPedDamageResponseCalculator::~CPedDamageResponseCalculator((CPedDamageResponseCalculator *)v68);
  CEventVehicleHitAndRun::~CEventVehicleHitAndRun((CEventVehicleHitAndRun *)v69);
  return 1;
}


// ============================================================

// Address: 0x50bf10
// Original: _ZNK25CTaskSimpleKillPedWithCar15DamageCarBonnetEPK4CPed
// Demangled: CTaskSimpleKillPedWithCar::DamageCarBonnet(CPed const*)
CAutomobile *__fastcall CTaskSimpleKillPedWithCar::DamageCarBonnet(CTaskSimpleKillPedWithCar *this, const CPed *a2)
{
  CAutomobile *result; // r0
  float *v5; // r4
  float v6; // s0
  float *v7; // r0
  float v8; // s6
  float v9; // s4
  float v10; // s2
  float v11; // s8
  float v12; // s2
  float v13; // s6
  float v14; // s4
  float v15; // s10
  float v16; // s12

  result = (CAutomobile *)*((_DWORD *)this + 2);
  if ( !*((_DWORD *)result + 361) )
  {
    result = (CAutomobile *)CAutomobile::RemoveBonnetInPedCollision(result);
    v5 = (float *)result;
    if ( result )
    {
      v6 = (float)rand();
      v7 = *(float **)(*((_DWORD *)this + 2) + 20);
      v8 = v7[1] * 0.1;
      v9 = v7[2] * 0.1;
      v10 = *v7 * 0.1;
      v11 = *((float *)a2 + 18);
      if ( (float)((float)(v6 * 4.6566e-10) + 0.0) <= 0.5 )
      {
        v12 = v11 - v10;
        v13 = *((float *)a2 + 19) - v8;
        v14 = *((float *)a2 + 20) - v9;
      }
      else
      {
        v12 = v10 + v11;
        v13 = v8 + *((float *)a2 + 19);
        v14 = v9 + *((float *)a2 + 20);
      }
      v15 = v7[9] * 0.5;
      v16 = v7[10] * 0.5;
      v5[18] = v12 + (float)(v7[8] * 0.5);
      v5[19] = v13 + v15;
      v5[20] = v14 + v16;
      return (CAutomobile *)CPhysical::ApplyTurnForce();
    }
  }
  return result;
}


// ============================================================

// Address: 0x50f540
// Original: _ZNK25CTaskSimpleKillPedWithCar5CloneEv
// Demangled: CTaskSimpleKillPedWithCar::Clone(void)
int __fastcall CTaskSimpleKillPedWithCar::Clone(CTaskSimpleKillPedWithCar *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&word_10, a2);
  v4 = *((_QWORD *)this + 1);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_DWORD *)(v3 + 12) = HIDWORD(v4);
  *(_DWORD *)v3 = &off_66B790;
  *(_DWORD *)(v3 + 8) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 8));
  return v3;
}


// ============================================================

// Address: 0x50f584
// Original: _ZNK25CTaskSimpleKillPedWithCar11GetTaskTypeEv
// Demangled: CTaskSimpleKillPedWithCar::GetTaskType(void)
int __fastcall CTaskSimpleKillPedWithCar::GetTaskType(CTaskSimpleKillPedWithCar *this)
{
  return 506;
}


// ============================================================

// Address: 0x50f58a
// Original: _ZN25CTaskSimpleKillPedWithCar13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleKillPedWithCar::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleKillPedWithCar::MakeAbortable(
        CTaskSimpleKillPedWithCar *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 0;
}


// ============================================================

// Address: 0x50f590
// Original: _ZN25CTaskSimpleKillPedWithCar9SerializeEv
// Demangled: CTaskSimpleKillPedWithCar::Serialize(void)
void __fastcall CTaskSimpleKillPedWithCar::Serialize(CTaskSimpleKillPedWithCar *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CVehicle *v5; // r0
  int v6; // r5
  CGenericGameStorage *v7; // r6
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r5
  int v12; // r2
  CGenericGameStorage *v13; // r5
  int v14; // r2

  v2 = (*(int (__fastcall **)(CTaskSimpleKillPedWithCar *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleKillPedWithCar *))(*(_DWORD *)this + 20))(this) == 506 )
  {
    v5 = (CVehicle *)*((_DWORD *)this + 2);
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
    free(v9);
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v13 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
    j_free(v13);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskSimpleKillPedWithCar *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(506, v10);
  }
}


// ============================================================

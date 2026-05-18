
// Address: 0x1916b8
// Original: j__ZN22CTaskGangHassleVehicleC2EP8CVehicleihff
// Demangled: CTaskGangHassleVehicle::CTaskGangHassleVehicle(CVehicle *,int,uchar,float,float)
// attributes: thunk
void __fastcall CTaskGangHassleVehicle::CTaskGangHassleVehicle(
        CTaskGangHassleVehicle *this,
        CVehicle *a2,
        int a3,
        unsigned __int8 a4,
        float a5,
        float a6)
{
  _ZN22CTaskGangHassleVehicleC2EP8CVehicleihff(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x1975c8
// Original: j__ZN22CTaskGangHassleVehicleD2Ev
// Demangled: CTaskGangHassleVehicle::~CTaskGangHassleVehicle()
// attributes: thunk
void __fastcall CTaskGangHassleVehicle::~CTaskGangHassleVehicle(CEntity **this)
{
  _ZN22CTaskGangHassleVehicleD2Ev(this);
}


// ============================================================

// Address: 0x19e508
// Original: j__ZN22CTaskGangHassleVehicleD2Ev_0
// Demangled: CTaskGangHassleVehicle::~CTaskGangHassleVehicle()
// attributes: thunk
void __fastcall CTaskGangHassleVehicle::~CTaskGangHassleVehicle(CEntity **this)
{
  _ZN22CTaskGangHassleVehicleD2Ev(this);
}


// ============================================================

// Address: 0x518484
// Original: _ZN22CTaskGangHassleVehicleC2EP8CVehicleihff
// Demangled: CTaskGangHassleVehicle::CTaskGangHassleVehicle(CVehicle *,int,uchar,float,float)
void __fastcall CTaskGangHassleVehicle::CTaskGangHassleVehicle(
        CTaskGangHassleVehicle *this,
        CVehicle *a2,
        int a3,
        unsigned __int8 a4,
        float a5,
        float a6)
{
  CTaskComplex::CTaskComplex(this);
  *((_WORD *)this + 32) = 0;
  *((_DWORD *)this + 5) = -1;
  *((_BYTE *)this + 24) = a4;
  *((float *)this + 7) = a5;
  *((float *)this + 8) = a6;
  *((_BYTE *)this + 48) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *(_DWORD *)this = &off_66BE68;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x5184e8
// Original: _ZN22CTaskGangHassleVehicleD2Ev
// Demangled: CTaskGangHassleVehicle::~CTaskGangHassleVehicle()
void __fastcall CTaskGangHassleVehicle::~CTaskGangHassleVehicle(CEntity **this)
{
  CEntity *v2; // r0
  CEntity **v3; // r5
  CEntity *v4; // r1
  CEntity *v5; // r0
  CEntity **v6; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v8; // r1

  v3 = this + 4;
  v2 = this[4];
  *this = (CEntity *)&off_66BE68;
  if ( v2 )
  {
    v4 = this[5];
    if ( (int)v4 < 0 || (CVehicle::SetHasslePosId(v2, (int)v4, 0), (v2 = *v3) != 0) )
      CEntity::CleanUpOldReference(v2, v3);
  }
  v6 = this + 13;
  v5 = this[13];
  if ( v5 )
    CEntity::CleanUpOldReference(v5, v6);
  if ( *((_BYTE *)this + 48) )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex(
                                            (CAnimManager *)"gangs",
                                            (const char *)v6);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v8);
    *((_BYTE *)this + 48) = 0;
  }
  sub_18EDE8((CTaskComplex *)this);
}


// ============================================================

// Address: 0x518550
// Original: _ZN22CTaskGangHassleVehicleD0Ev
// Demangled: CTaskGangHassleVehicle::~CTaskGangHassleVehicle()
void __fastcall CTaskGangHassleVehicle::~CTaskGangHassleVehicle(CEntity **this)
{
  void *v1; // r0

  CTaskGangHassleVehicle::~CTaskGangHassleVehicle(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x518560
// Original: _ZNK22CTaskGangHassleVehicle5CloneEv
// Demangled: CTaskGangHassleVehicle::Clone(void)
int __fastcall CTaskGangHassleVehicle::Clone(CTaskGangHassleVehicle *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  char v5; // r8
  __int64 v6; // kr00_8

  v3 = CTask::operator new((CTask *)&dword_44, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  v5 = *((_BYTE *)this + 24);
  v6 = *(_QWORD *)((char *)this + 28);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_WORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 20) = -1;
  *(_QWORD *)(v3 + 28) = v6;
  *(_BYTE *)(v3 + 24) = v5;
  *(_BYTE *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 60) = 0;
  *(_DWORD *)v3 = &off_66BE68;
  *(_DWORD *)(v3 + 16) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

// Address: 0x5185c8
// Original: _ZN22CTaskGangHassleVehicle17CreateNextSubTaskEP4CPed
// Demangled: CTaskGangHassleVehicle::CreateNextSubTask(CPed *)
int __fastcall CTaskGangHassleVehicle::CreateNextSubTask(CTaskGangHassleVehicle *this, CPed *a2)
{
  unsigned int v3; // r1
  int v4; // r0
  int v5; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  CTaskComplex *v11; // r0
  CEntity *v12; // r8
  __int64 v13; // kr00_8
  int v14; // r4

  v3 = *((_DWORD *)this + 4);
  if ( !v3 )
    return 0;
  v4 = *((_DWORD *)this + 2);
  if ( !v4 )
    goto LABEL_5;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) == 911 )
    return 0;
  v3 = *((_DWORD *)this + 4);
LABEL_5:
  if ( *(float *)(v3 + 1228) >= 250.0 )
  {
    v6 = *((_DWORD *)this + 2);
    if ( !v6
      || (v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6), v3 = 1212, v7 != 1212)
      && ((v8 = *((_DWORD *)this + 2)) == 0
       || (v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8), v3 = 925, v9 != 925)) )
    {
      v11 = (CTaskComplex *)CTask::operator new((CTask *)&dword_58, v3);
      v12 = (CEntity *)*((_DWORD *)this + 4);
      v5 = (int)v11;
      v13 = *(_QWORD *)((char *)this + 36);
      v14 = *((_DWORD *)this + 11);
      CTaskComplex::CTaskComplex(v11);
      *(_WORD *)(v5 + 56) = 0;
      *(_QWORD *)(v5 + 16) = v13;
      *(_DWORD *)(v5 + 24) = v14;
      *(_DWORD *)(v5 + 32) = -1;
      *(_DWORD *)(v5 + 36) = 1092616192;
      *(_DWORD *)(v5 + 40) = 1109393408;
      *(_BYTE *)(v5 + 28) = 1;
      *(_BYTE *)(v5 + 44) = 1;
      *(_DWORD *)(v5 + 48) = 0;
      *(_DWORD *)(v5 + 52) = 0;
      *(_DWORD *)v5 = &off_66BE2C;
      *(_DWORD *)(v5 + 12) = v12;
      CEntity::RegisterReference(v12, (CEntity **)(v5 + 12));
      *(_DWORD *)(v5 + 60) = -1082130432;
      return v5;
    }
    return 0;
  }
  v5 = CTask::operator new((CTask *)&dword_40, v3);
  CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(
    (CTaskComplexSmartFleeEntity *)v5,
    *((CEntity **)this + 4),
    0,
    30.0,
    1000000,
    1000,
    1.0);
  return v5;
}


// ============================================================

// Address: 0x5186e8
// Original: _ZN22CTaskGangHassleVehicle18CreateFirstSubTaskEP4CPed
// Demangled: CTaskGangHassleVehicle::CreateFirstSubTask(CPed *)
int __fastcall CTaskGangHassleVehicle::CreateFirstSubTask(CTaskGangHassleVehicle *this, CVehicle **a2)
{
  int v4; // r0
  CEntity *v5; // r2
  float *v6; // r1
  CTaskComplexLeaveCar *v7; // r6
  int SpareHasslePosId; // r1
  __int64 v10; // kr00_8
  float *v11; // r1
  float v12; // s4
  float v13; // s0
  float v14; // s6
  float v15; // s2
  float v16; // s0
  float v17; // s6
  float v18; // s0
  float v19; // s2
  int v20; // r6
  unsigned __int16 v21; // r0
  unsigned int v22; // r1
  bool v23; // zf

  v4 = *((_DWORD *)this + 4);
  if ( !v4 )
    return 0;
  v5 = *(CEntity **)(v4 + 1124);
  *((_DWORD *)this + 13) = v5;
  if ( v5 )
  {
    CEntity::RegisterReference(v5, (CEntity **)this + 13);
    v4 = *((_DWORD *)this + 4);
  }
  v6 = *(float **)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v4 + 38)]) + 44);
  if ( (float)(v6[3] - *v6) > 4.0 || (float)(v6[4] - v6[1]) > 8.0 )
    return 0;
  SpareHasslePosId = CVehicle::GetSpareHasslePosId((CVehicle *)v4);
  v7 = 0;
  *((_DWORD *)this + 5) = SpareHasslePosId;
  if ( SpareHasslePosId == -1 )
    return (int)v7;
  CVehicle::SetHasslePosId(*((CVehicle **)this + 4), SpareHasslePosId, 1);
  v10 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  v11 = *(float **)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v10 + 38)]) + 44);
  v12 = *v11;
  v13 = v11[1];
  v14 = v11[3];
  v15 = v11[4];
  switch ( HIDWORD(v10) )
  {
    case 0:
      v16 = v12 - *((float *)this + 8);
      goto LABEL_12;
    case 1:
      v16 = v14 + *((float *)this + 8);
LABEL_12:
      v17 = v16 + 0.0;
      v18 = v15 * 0.5;
      *((float *)this + 9) = v17;
      goto LABEL_18;
    case 2:
      v19 = v12 - *((float *)this + 8);
      goto LABEL_15;
    case 3:
      v19 = v14 + *((float *)this + 8);
LABEL_15:
      v18 = v13 * 0.5;
      *((float *)this + 9) = v19 + 0.0;
      goto LABEL_18;
    case 4:
      v18 = v13 - *((float *)this + 8);
      goto LABEL_18;
    case 5:
      v18 = v15 + *((float *)this + 8);
LABEL_18:
      *((float *)this + 10) = v18 + 0.0;
      break;
    default:
      break;
  }
  *((_BYTE *)this + 49) = 0;
  CPed::DropEntityThatThisPedIsHolding((CPed *)a2, 1u);
  v20 = CTimer::m_snTimeInMilliseconds;
  v21 = rand();
  *((_BYTE *)this + 64) = 1;
  *((_DWORD *)this + 14) = v20;
  *((_DWORD *)this + 15) = (int)(float)((float)((float)v21 * 0.000015259) * 100000.0) + 150000;
  v23 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    v23 = a2[356] == 0;
  if ( !v23 )
  {
    v7 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v22);
    CTaskComplexLeaveCar::CTaskComplexLeaveCar(v7, a2[356], 0, 0, 1, 0);
    return (int)v7;
  }
  return (*(int (__fastcall **)(CTaskGangHassleVehicle *, CVehicle **))(*(_DWORD *)this + 40))(this, a2);
}


// ============================================================

// Address: 0x5188c8
// Original: _ZN22CTaskGangHassleVehicle16CalcTargetOffsetEv
// Demangled: CTaskGangHassleVehicle::CalcTargetOffset(void)
int __fastcall CTaskGangHassleVehicle::CalcTargetOffset(int this)
{
  __int64 v1; // kr00_8
  float *v2; // r2
  float v3; // s4
  float v4; // s0
  float v5; // s6
  float v6; // s2
  float v7; // s0
  float v8; // s6
  float v9; // s0
  float v10; // s2

  v1 = *(_QWORD *)(this + 16);
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 44) = 0;
  if ( HIDWORD(v1) <= 5 )
    JUMPOUT(0x5188DA);
  v2 = *(float **)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v1 + 38)]) + 44);
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[3];
  v6 = v2[4];
  switch ( HIDWORD(v1) )
  {
    case 0:
      v7 = v3 - *(float *)(this + 32);
      goto LABEL_5;
    case 1:
      v7 = v5 + *(float *)(this + 32);
LABEL_5:
      v8 = v7 + 0.0;
      v9 = v6 * 0.5;
      *(float *)(this + 36) = v8;
      break;
    case 2:
      v10 = v3 - *(float *)(this + 32);
      goto LABEL_8;
    case 3:
      v10 = v5 + *(float *)(this + 32);
LABEL_8:
      v9 = v4 * 0.5;
      *(float *)(this + 36) = v10 + 0.0;
      break;
    case 4:
      v9 = v4 - *(float *)(this + 32);
      break;
    case 5:
      v9 = v6 + *(float *)(this + 32);
      break;
  }
  *(float *)(this + 40) = v9 + 0.0;
  return this;
}


// ============================================================

// Address: 0x51897c
// Original: _ZN22CTaskGangHassleVehicle14ControlSubTaskEP4CPed
// Demangled: CTaskGangHassleVehicle::ControlSubTask(CPed *)
int __fastcall CTaskGangHassleVehicle::ControlSubTask(CTaskGangHassleVehicle *this, const CMatrix **a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r1
  float *v7; // r0
  bool v8; // zf
  int v9; // r0
  int AnimationBlockIndex; // r0
  int v11; // r2
  char v12; // r0
  CAnimManager *v13; // r0
  int v14; // r1
  int v15; // r6
  unsigned int v16; // r0
  unsigned int v17; // r1
  unsigned int v18; // r1
  int v19; // r0
  float v20; // s16
  unsigned __int16 v21; // r0
  int v22; // r3
  int v23; // r0
  int v25; // r0
  unsigned int v26; // r1
  const CMatrix *v27; // r5
  CTaskSimpleShakeFist *v28; // r6
  unsigned int v29; // r1
  int v30; // r5
  CEntity *v31; // r4
  int v32; // r2
  __int64 v33; // kr00_8
  float32x2_t *v34; // r1
  float32x2_t v35; // d0
  __int64 v36; // kr08_8
  float32x2_t *v37; // r1
  float32x2_t v38; // d0
  CGeneral *v39; // r0
  float v40; // r1
  float v41; // s18
  const CMatrix *v42; // r0
  float v43; // s0
  int v44; // r0
  unsigned __int16 v45; // r1
  int Association; // r0
  float v47; // s16
  CGeneral *RadianAngleBetweenPoints; // r0
  float v49; // r1
  float v50; // r6
  const CMatrix *v51; // r0
  float v52; // s18
  int v53; // r0
  unsigned int v54; // r1
  const CMatrix *v55; // r6
  CTask *v56; // r5
  float v57; // s0
  unsigned __int16 v58; // r0
  unsigned int v59; // r1
  CEntity *v60; // r1
  int v61; // r9
  float *v62; // r0
  CEntity *v63; // r0
  CMatrix *v64; // r6
  int ColModel; // r0
  CVector *v66; // [sp+0h] [bp-C0h]
  _BYTE v67[48]; // [sp+20h] [bp-A0h] BYREF
  float v68; // [sp+50h] [bp-70h]
  float v69; // [sp+54h] [bp-6Ch]
  float v70; // [sp+58h] [bp-68h]
  _BYTE v71[36]; // [sp+68h] [bp-58h] BYREF
  __int16 v72; // [sp+8Ch] [bp-34h]
  char v73; // [sp+8Fh] [bp-31h]

  v4 = *((_DWORD *)this + 2);
  if ( v4 && (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) != 1000 && !*((_DWORD *)this + 4) )
  {
    v15 = 0;
    if ( !(*(int (__fastcall **)(_DWORD, const CMatrix **, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
            *((_DWORD *)this + 2),
            a2,
            1,
            0) )
      return *((_DWORD *)this + 2);
    return v15;
  }
  v5 = *((unsigned __int8 *)this + 48);
  v6 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  v7 = *(float **)(v6 + 1424);
  v8 = v7 == 0;
  if ( v7 )
  {
    v6 = *(_DWORD *)(v6 + 1156) & 0x100;
    v8 = v6 == 0;
  }
  if ( v8 || (float)((float)((float)(v7[18] * v7[18]) + (float)(v7[19] * v7[19])) + (float)(v7[20] * v7[20])) <= 0.04 )
  {
    v9 = CStreaming::IsVeryBusy((CStreaming *)v7) ^ 1;
    if ( !v5 )
    {
LABEL_9:
      if ( v9 )
      {
        AnimationBlockIndex = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", (const char *)v6);
        if ( CAnimManager::ms_aAnimBlocks[32 * AnimationBlockIndex + 16] != 1 )
        {
          CStreaming::RequestModel((CStreaming *)(AnimationBlockIndex + 25575), 8, v11);
          goto LABEL_20;
        }
        CAnimManager::AddAnimBlockRef((CAnimManager *)AnimationBlockIndex, 1);
        v12 = 1;
        goto LABEL_15;
      }
      goto LABEL_20;
    }
  }
  else
  {
    v9 = 0;
    if ( !*((_BYTE *)this + 48) )
      goto LABEL_9;
  }
  if ( !v9 )
  {
    v13 = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", (const char *)v6);
    CAnimManager::RemoveAnimBlockRef(v13, v14);
    v12 = 0;
LABEL_15:
    *((_BYTE *)this + 48) = v12;
  }
LABEL_20:
  if ( !*((_BYTE *)this + 64)
    || (!*((_BYTE *)this + 65)
      ? (v17 = *((_DWORD *)this + 14), v16 = CTimer::m_snTimeInMilliseconds)
      : (v16 = CTimer::m_snTimeInMilliseconds, *((_BYTE *)this + 65) = 0, *((_DWORD *)this + 14) = v16, v17 = v16),
        v17 + *((_DWORD *)this + 15) > v16 || !*((_BYTE *)this + 24)) )
  {
    v19 = *((_DWORD *)this + 4);
    if ( v19
      && !*(_DWORD *)(v19 + 1124)
      && *((_DWORD *)this + 13)
      && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 1212
      && (*(int (__fastcall **)(_DWORD, const CMatrix **, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) == 1 )
    {
      v30 = *((unsigned __int8 *)this + 24);
      *((_BYTE *)this + 49) = 3;
      v15 = CTask::operator new((CTask *)&word_2C, v29);
      v31 = (CEntity *)*((_DWORD *)this + 13);
      CTaskComplex::CTaskComplex((CTaskComplex *)v15);
      *(_WORD *)(v15 + 40) = 0;
      *(_DWORD *)v15 = &off_66BEA4;
      *(_DWORD *)(v15 + 32) = 0;
      *(_DWORD *)(v15 + 36) = 0;
      *(_DWORD *)(v15 + 12) = v31;
      if ( v30 )
        v32 = 2;
      else
        v32 = 1;
      *(_DWORD *)(v15 + 16) = v32;
      *(_DWORD *)(v15 + 20) = 12000;
      *(_DWORD *)(v15 + 24) = 20000;
      *(_BYTE *)(v15 + 28) = 0;
      if ( v31 )
        CEntity::RegisterReference(v31, (CEntity **)(v15 + 12));
      return v15;
    }
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 925 )
    {
      v20 = *(float *)(*((_DWORD *)this + 2) + 80);
      if ( CEntity::IsVisible((CEntity *)a2) == 1
        && v20 < 4.0
        && !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, (CPed *)a2)
        && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) >= 61 )
      {
        v21 = rand();
        v22 = *(_DWORD *)(*((_DWORD *)this + 4) + 1124);
        if ( v22 )
          IKChainManager_c::LookAt(
            (int)&g_ikChainMan,
            (int)"TaskHassleVehicle",
            (CPed *)a2,
            v22,
            (int)(float)((int)(float)((float)((float)v21 * 0.000015259) * 2000.0) + 1000),
            5,
            0,
            1,
            0.15,
            500,
            3,
            0);
      }
    }
    else
    {
      CEntity::IsVisible((CEntity *)a2);
      v20 = 100.0;
    }
    v23 = *((_DWORD *)this + 2);
    if ( !v23
      || (*(int (__fastcall **)(int))(*(_DWORD *)v23 + 20))(v23) != 925
      && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 906 )
    {
      return *((_DWORD *)this + 2);
    }
    if ( *(float *)(*((_DWORD *)this + 4) + 1228) < 250.0
      && (*(int (__fastcall **)(_DWORD, const CMatrix **, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) == 1 )
    {
      return (*(int (__fastcall **)(CTaskGangHassleVehicle *, const CMatrix **))(*(_DWORD *)this + 40))(this, a2);
    }
    v25 = *((unsigned __int8 *)this + 49);
    if ( v25 != 2 )
    {
      if ( v25 != 1 )
      {
        if ( !*((_BYTE *)this + 49) )
        {
          if ( !CTaskManager::GetTaskSecondary((const CMatrix *)((char *)a2[272] + 4), 4)
            && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) >= 61 )
          {
            v27 = a2[272];
            v28 = (CTaskSimpleShakeFist *)CTask::operator new((CTask *)&word_10, v26);
            CTaskSimpleShakeFist::CTaskSimpleShakeFist(v28);
            CTaskManager::SetTaskSecondary((const CMatrix *)((char *)v27 + 4), v28, 4);
          }
          if ( v20 <= (float)(*((float *)this + 7) * *((float *)this + 7)) )
            *((_BYTE *)this + 49) = 1;
          CPed::Say((CPed *)a2, 0x101u, 0, 1.0, 0, 0, 0);
        }
        return *((_DWORD *)this + 2);
      }
      v36 = *((_QWORD *)this + 2);
      v37 = *(float32x2_t **)(v36 + 20);
      v38.n64_u64[0] = v37->n64_u64[0];
      switch ( HIDWORD(v36) )
      {
        case 1:
        case 3:
          v38.n64_u64[0] = vneg_f32(v38).n64_u64[0];
          break;
        case 4:
          v38.n64_u64[0] = v37[2].n64_u64[0];
          break;
        case 5:
          v38.n64_u64[0] = vneg_f32(v37[2]).n64_u64[0];
          break;
        default:
          break;
      }
      RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                               (CGeneral *)v38.n64_u32[0],
                                               v38.n64_f32[1],
                                               0.0,
                                               0.0,
                                               *(float *)&v66);
      v50 = COERCE_FLOAT(CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v49));
      v51 = a2[5];
      *((float *)a2 + 344) = v50;
      if ( v51 )
        v52 = atan2f(COERCE_FLOAT(*((_DWORD *)v51 + 4) ^ 0x80000000), *((float *)v51 + 5));
      else
        v52 = *((float *)a2 + 4);
      if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 925 )
        return *((_DWORD *)this + 2);
      if ( v20 <= (float)(*((float *)this + 7) * *((float *)this + 7)) )
      {
        if ( fabsf(v52 - v50) < 0.05 )
          *((_BYTE *)this + 49) = 2;
        return *((_DWORD *)this + 2);
      }
LABEL_97:
      *((_BYTE *)this + 49) = 0;
      return *((_DWORD *)this + 2);
    }
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 925
      && v20 > (float)((float)(*((float *)this + 7) * *((float *)this + 7)) + 0.05) )
    {
      *((_BYTE *)this + 49) = 0;
    }
    v33 = *((_QWORD *)this + 2);
    v34 = *(float32x2_t **)(v33 + 20);
    v35.n64_u64[0] = v34->n64_u64[0];
    switch ( HIDWORD(v33) )
    {
      case 1:
      case 3:
        v35.n64_u64[0] = vneg_f32(v35).n64_u64[0];
        break;
      case 4:
        v35.n64_u64[0] = v34[2].n64_u64[0];
        break;
      case 5:
        v35.n64_u64[0] = vneg_f32(v34[2]).n64_u64[0];
        break;
      default:
        break;
    }
    v39 = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                        (CGeneral *)v35.n64_u32[0],
                        v35.n64_f32[1],
                        0.0,
                        0.0,
                        *(float *)&v66);
    v41 = COERCE_FLOAT(CGeneral::LimitRadianAngle(v39, v40));
    v42 = a2[5];
    if ( v42 )
      v43 = atan2f(COERCE_FLOAT(*((_DWORD *)v42 + 4) ^ 0x80000000), *((float *)v42 + 5));
    else
      v43 = *((float *)a2 + 4);
    if ( fabsf(v43 - v41) >= 0.1 )
      *((_BYTE *)this + 49) = 1;
    v44 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 3.0);
    if ( v44 == 2 )
    {
      v45 = 256;
    }
    else if ( v44 == 1 )
    {
      v45 = 255;
    }
    else
    {
      if ( v44 )
      {
LABEL_82:
        if ( !*((_BYTE *)this + 48) || (int)a2[276] > 5 )
          return *((_DWORD *)this + 2);
        if ( CTaskManager::GetTaskSecondary((const CMatrix *)((char *)a2[272] + 4), 4) )
        {
          if ( v20 > (float)(*((float *)this + 7) * *((float *)this + 7)) )
            (*(void (__fastcall **)(_DWORD, const CMatrix **, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
              *((_DWORD *)this + 2),
              a2,
              1,
              0);
          Association = RpAnimBlendClumpGetAssociation();
          v47 = 0.5;
          if ( !Association )
          {
            Association = RpAnimBlendClumpGetAssociation();
            if ( Association )
            {
              v47 = 0.7;
            }
            else
            {
              Association = RpAnimBlendClumpGetAssociation();
              if ( !Association )
                return *((_DWORD *)this + 2);
            }
          }
          v57 = *(float *)(Association + 32);
          if ( v57 > v47 && (float)(v57 - *(float *)(Association + 40)) <= v47 )
          {
            CPhysical::ApplyTurnForce();
            v60 = (CEntity *)*((_DWORD *)this + 4);
            v61 = *((_DWORD *)v60 + 307);
            CTaskSimpleFight::CTaskSimpleFight((CTaskSimpleFight *)v71, v60, 11, 0x4E20u);
            CMatrix::CMatrix((CMatrix *)v67, a2[5]);
            v62 = (float *)a2[5];
            v68 = v62[4] + v68;
            v69 = v62[5] + v69;
            v70 = v62[6] + v70;
            CTaskSimpleFight::FightSetUpCol((CTaskSimpleFight *)v71, 0.5);
            v73 = 11;
            v72 = 260;
            v63 = (CEntity *)*((_DWORD *)this + 4);
            v64 = (CMatrix *)*((_DWORD *)v63 + 5);
            ColModel = CEntity::GetColModel(v63);
            if ( CCollision::ProcessColModels(
                   (int)v67,
                   (int)CTaskSimpleFight::m_sStrikeColModel,
                   v64,
                   ColModel,
                   (int)&CWorld::m_aTempColPts,
                   0,
                   0,
                   0) >= 1 )
              CTaskSimpleFight::FightHitCar(
                (CTaskSimpleFight *)v71,
                (CPed *)a2,
                *((CVehicle **)this + 4),
                (CVector *)&CWorld::m_aTempColPts,
                (CVector *)&unk_989620,
                (unsigned __int8)byte_989634,
                byte_989633);
            *(_DWORD *)(*((_DWORD *)this + 4) + 1228) = v61;
            CAEVehicleAudioEntity::AddAudioEvent((CAEVehicleAudioEntity *)(*((_DWORD *)this + 4) + 316), 108, 0.0);
            CMatrix::~CMatrix((CMatrix *)v67);
            CTaskSimpleFight::~CTaskSimpleFight((CTaskSimpleFight *)v71);
          }
          return *((_DWORD *)this + 2);
        }
        v53 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 200.0);
        if ( v53 < 167 )
        {
          if ( v53 < 134 )
          {
            if ( v53 < 101 )
            {
              if ( v53 < 71 )
              {
                if ( v53 < 61 )
                {
                  if ( v53 < 41 )
                    return *((_DWORD *)this + 2);
                  goto LABEL_97;
                }
                if ( CPed::IsPlayingHandSignal((CPed *)a2) )
                  return *((_DWORD *)this + 2);
                v55 = a2[272];
                v56 = (CTask *)CTask::operator new((CTask *)&off_18, v59);
                CTaskComplexPlayHandSignalAnim::CTaskComplexPlayHandSignalAnim();
              }
              else
              {
                v55 = a2[272];
                v56 = (CTask *)CTask::operator new((CTask *)&dword_20, v54);
                v58 = rand();
                CTaskSimpleRunAnim::CTaskSimpleRunAnim(
                  (int)v56,
                  52,
                  (int)(float)((float)((float)v58 * 0.000015259) * 8.0) + 279,
                  1082130432,
                  0);
              }
            }
            else
            {
              v55 = a2[272];
              v56 = (CTask *)CTask::operator new((CTask *)&dword_20, v54);
              CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v56, 52, 298, 1082130432, 0);
            }
          }
          else
          {
            v55 = a2[272];
            v56 = (CTask *)CTask::operator new((CTask *)&dword_20, v54);
            CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v56, 52, 297, 1082130432, 0);
          }
        }
        else
        {
          v55 = a2[272];
          v56 = (CTask *)CTask::operator new((CTask *)&dword_20, v54);
          CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v56, 52, 296, 1082130432, 0);
        }
        CTaskManager::SetTaskSecondary((const CMatrix *)((char *)v55 + 4), v56, 4);
        return *((_DWORD *)this + 2);
      }
      v45 = 254;
    }
    CPed::Say((CPed *)a2, v45, 0, 1.0, 0, 0, 0);
    goto LABEL_82;
  }
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 1000 )
    return *((_DWORD *)this + 2);
  v15 = CTask::operator new((CTask *)&dword_38, v18);
  CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(
    (CTaskComplexKillPedOnFoot *)v15,
    *((CPed **)this + 13),
    -1,
    0,
    0,
    0,
    1);
  return v15;
}


// ============================================================

// Address: 0x519290
// Original: _ZN22CTaskGangHassleVehicle16GetTargetHeadingEP4CPed
// Demangled: CTaskGangHassleVehicle::GetTargetHeading(CPed *)
int __fastcall CTaskGangHassleVehicle::GetTargetHeading(CTaskGangHassleVehicle *this, CPed *a2)
{
  float v2; // r7
  __int64 v3; // kr00_8
  float32x2_t *v4; // r1
  float32x2_t v5; // d0
  CGeneral *RadianAngleBetweenPoints; // r0
  float v7; // r1

  v3 = *((_QWORD *)this + 2);
  v4 = *(float32x2_t **)(v3 + 20);
  v5.n64_u64[0] = v4->n64_u64[0];
  switch ( HIDWORD(v3) )
  {
    case 1:
    case 3:
      v5.n64_u64[0] = vneg_f32(v5).n64_u64[0];
      break;
    case 4:
      v5.n64_u64[0] = v4[2].n64_u64[0];
      break;
    case 5:
      v5.n64_u64[0] = vneg_f32(v4[2]).n64_u64[0];
      break;
    default:
      break;
  }
  RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                           (CGeneral *)v5.n64_u32[0],
                                           v5.n64_f32[1],
                                           0.0,
                                           0.0,
                                           v2);
  return j_CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v7);
}


// ============================================================

// Address: 0x51c440
// Original: _ZNK22CTaskGangHassleVehicle11GetTaskTypeEv
// Demangled: CTaskGangHassleVehicle::GetTaskType(void)
int __fastcall CTaskGangHassleVehicle::GetTaskType(CTaskGangHassleVehicle *this)
{
  return 1205;
}


// ============================================================


// Address: 0x18a9e8
// Original: j__ZN5CBike17ProcessRiderAnimsEP4CPedP8CVehicleP13CRideAnimDataP17tBikeHandlingDatas
// Demangled: CBike::ProcessRiderAnims(CPed *,CVehicle *,CRideAnimData *,tBikeHandlingData *,short)
// attributes: thunk
int CBike::ProcessRiderAnims()
{
  return _ZN5CBike17ProcessRiderAnimsEP4CPedP8CVehicleP13CRideAnimDataP17tBikeHandlingDatas();
}


// ============================================================

// Address: 0x18afac
// Original: j__ZN5CBikeC2Eih
// Demangled: CBike::CBike(int,uchar)
// attributes: thunk
void __fastcall CBike::CBike(CBike *this, int a2, unsigned __int8 a3)
{
  _ZN5CBikeC2Eih(this, a2, a3);
}


// ============================================================

// Address: 0x18de38
// Original: j__ZN5CBike22DoSoftGroundResistanceERj
// Demangled: CBike::DoSoftGroundResistance(uint &)
// attributes: thunk
int __fastcall CBike::DoSoftGroundResistance(CBike *this, unsigned int *a2)
{
  return _ZN5CBike22DoSoftGroundResistanceERj(this, a2);
}


// ============================================================

// Address: 0x1942a8
// Original: j__ZN5CBike29GetCorrectedWorldDoorPositionER7CVectorS0_S0_
// Demangled: CBike::GetCorrectedWorldDoorPosition(CVector &,CVector,CVector)
// attributes: thunk
int CBike::GetCorrectedWorldDoorPosition()
{
  return _ZN5CBike29GetCorrectedWorldDoorPositionER7CVectorS0_S0_();
}


// ============================================================

// Address: 0x194c1c
// Original: j__ZN5CBike14FixHandsToBarsEP4CPed
// Demangled: CBike::FixHandsToBars(CPed *)
// attributes: thunk
int __fastcall CBike::FixHandsToBars(CBike *this, CPed *a2)
{
  return _ZN5CBike14FixHandsToBarsEP4CPed(this, a2);
}


// ============================================================

// Address: 0x198504
// Original: j__ZN5CBike19DamageKnockOffRiderEP8CVehicleftP7CEntityR7CVectorS5_
// Demangled: CBike::DamageKnockOffRider(CVehicle *,float,ushort,CEntity *,CVector &,CVector &)
// attributes: thunk
int __fastcall CBike::DamageKnockOffRider(
        CBike *this,
        CVehicle *a2,
        float a3,
        unsigned __int16 a4,
        CEntity *a5,
        CVector *a6,
        CVector *a7)
{
  return _ZN5CBike19DamageKnockOffRiderEP8CVehicleftP7CEntityR7CVectorS5_(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x19b134
// Original: j__ZN5CBike14ProcessControlEv
// Demangled: CBike::ProcessControl(void)
// attributes: thunk
int __fastcall CBike::ProcessControl(CBike *this)
{
  return _ZN5CBike14ProcessControlEv(this);
}


// ============================================================

// Address: 0x19b920
// Original: j__ZN5CBike15ProcessBuoyancyEv
// Demangled: CBike::ProcessBuoyancy(void)
// attributes: thunk
int __fastcall CBike::ProcessBuoyancy(CBike *this)
{
  return _ZN5CBike15ProcessBuoyancyEv(this);
}


// ============================================================

// Address: 0x19bcd4
// Original: j__ZN5CBike19CalculateLeanMatrixEv
// Demangled: CBike::CalculateLeanMatrix(void)
// attributes: thunk
int __fastcall CBike::CalculateLeanMatrix(CBike *this)
{
  return _ZN5CBike19CalculateLeanMatrixEv(this);
}


// ============================================================

// Address: 0x19bf38
// Original: j__ZN5CBikeD2Ev
// Demangled: CBike::~CBike()
// attributes: thunk
void __fastcall CBike::~CBike(CBike *this)
{
  _ZN5CBikeD2Ev(this);
}


// ============================================================

// Address: 0x19ce70
// Original: j__ZN5CBike19PlayHornIfNecessaryEv
// Demangled: CBike::PlayHornIfNecessary(void)
// attributes: thunk
int __fastcall CBike::PlayHornIfNecessary(CBike *this)
{
  return _ZN5CBike19PlayHornIfNecessaryEv(this);
}


// ============================================================

// Address: 0x19d804
// Original: j__ZN5CBike19PlaceOnRoadProperlyEv
// Demangled: CBike::PlaceOnRoadProperly(void)
// attributes: thunk
int __fastcall CBike::PlaceOnRoadProperly(CBike *this)
{
  return _ZN5CBike19PlaceOnRoadProperlyEv(this);
}


// ============================================================

// Address: 0x19f548
// Original: j__ZN5CBike17ReduceHornCounterEv
// Demangled: CBike::ReduceHornCounter(void)
// attributes: thunk
int __fastcall CBike::ReduceHornCounter(CBike *this)
{
  return _ZN5CBike17ReduceHornCounterEv(this);
}


// ============================================================

// Address: 0x1a09e8
// Original: j__ZN5CBikeC2Eih_0
// Demangled: CBike::CBike(int,uchar)
// attributes: thunk
void __fastcall CBike::CBike(CBike *this, int a2, unsigned __int8 a3)
{
  _ZN5CBikeC2Eih(this, a2, a3);
}


// ============================================================

// Address: 0x5603e4
// Original: _ZN5CBikeC2Eih
// Demangled: CBike::CBike(int,uchar)
void __fastcall CBike::CBike(CBike *this, int a2, unsigned __int8 a3)
{
  float v5; // r9
  int v6; // r6
  int v7; // r0
  int v8; // r0
  float v9; // r1
  float v10; // r2
  int v11; // r2
  _QWORD *v12; // r1
  float v13; // r0
  int v14; // r1
  float v15; // s0
  int v16; // r0
  int v17; // r6
  int v18; // r0
  _DWORD *v19; // r0
  char v20; // r2
  int v21; // r3
  __int16 v22; // r6

  CVehicle::CVehicle(this, a3);
  *((_DWORD *)this + 392) = 0;
  *((_DWORD *)this + 393) = 0;
  *(_DWORD *)this = &off_66D800;
  CRideAnimData::CRideAnimData((CBike *)((char *)this + 1620));
  v5 = CModelInfo::ms_modelInfoPtrs[a2];
  v6 = *(unsigned __int16 *)(LODWORD(v5) + 98);
  if ( *(_DWORD *)(LODWORD(v5) + 84) == 9 )
  {
    v7 = *(_DWORD *)&CAnimManager::ms_aAnimBlocks[32
                                                * (*(int (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(v5) + 60))(LODWORD(CModelInfo::ms_modelInfoPtrs[a2]))
                                                + 28];
    if ( (unsigned int)(v7 - 2) > 4 )
      v7 = 2;
    *((_DWORD *)this + 405) = v7;
  }
  *((_DWORD *)this + 360) = 9;
  *((_DWORD *)this + 361) = 9;
  v8 = *(_DWORD *)this;
  *((_DWORD *)this + 500) = 0;
  *((_WORD *)this + 990) = 0;
  *((_BYTE *)this + 1576) = 0;
  (*(void (__fastcall **)(CBike *, int))(v8 + 24))(this, a2);
  sub_3F65CC((CPlaceName *)"ZN23CTaskSimpleTriggerEventD0Ev", v9, v10);
  *((_DWORD *)this + 404) = (char *)&mod_HandlingManager[8 * v6] + v11;
  v12 = &mod_HandlingManager[28 * v6];
  *((_DWORD *)this + 226) = (char *)v12 + 20;
  *((_DWORD *)this + 228) = *((_DWORD *)v12 + 57);
  *((_DWORD *)this + 227) = cHandlingDataMgr::GetFlyingPointer((cHandlingDataMgr *)mod_HandlingManager, v6);
  *((_DWORD *)this + 469) = 1101004800;
  CVehicleModelInfo::ChooseVehicleColour(
    (CVehicleModelInfo *)LODWORD(v5),
    (unsigned __int8 *)this + 1080,
    (unsigned __int8 *)this + 1081,
    (unsigned __int8 *)this + 1082,
    (unsigned __int8 *)this + 1083,
    1);
  *((_DWORD *)this + 491) = 0;
  *((_DWORD *)this + 492) = 0;
  *((_DWORD *)this + 493) = 0;
  v13 = tanf((float)(*(float *)(LODWORD(v5) + 112) * 3.1416) / 180.0);
  v14 = *((_DWORD *)this + 226);
  *((float *)this + 494) = v13;
  *((_WORD *)this + 996) = 0;
  *((_DWORD *)this + 36) = *(_DWORD *)(v14 + 4);
  *((_DWORD *)this + 37) = *(_DWORD *)(v14 + 12);
  *((_QWORD *)this + 21) = *(_QWORD *)(v14 + 20);
  *((_DWORD *)this + 44) = 1036831949;
  v15 = *(float *)(v14 + 16);
  if ( v15 > 0.01 )
    v15 = (float)(v15 * 0.5) / 1000.0;
  *((_DWORD *)this + 40) = 1028443341;
  *((float *)this + 39) = v15;
  v16 = *(_DWORD *)(v14 + 36);
  *(_QWORD *)((char *)this + 1892) = 0LL;
  *(_QWORD *)((char *)this + 1900) = 0LL;
  *((_DWORD *)this + 294) = 0;
  *((_DWORD *)this + 41) = v16;
  *((_DWORD *)this + 296) = 0;
  *((_DWORD *)this + 297) = 0;
  *((_DWORD *)this + 517) = 0;
  *((_DWORD *)this + 311) = 0;
  *((_DWORD *)this + 496) = 1065353216;
  *((_DWORD *)this + 497) = 0;
  *((_DWORD *)this + 499) = 0;
  *((_DWORD *)this + 519) = 0;
  *((_DWORD *)this + 520) = 0;
  *((_DWORD *)this + 521) = 0;
  *((_WORD *)this + 824) = 0;
  *((_QWORD *)this + 235) = 0LL;
  *((_QWORD *)this + 236) = 0LL;
  *((_QWORD *)this + 254) = 0LL;
  *((_QWORD *)this + 255) = 0LL;
  *((_QWORD *)this + 256) = 0LL;
  *((_QWORD *)this + 257) = 0LL;
  *((_DWORD *)this + 501) = 0;
  *((_DWORD *)this + 502) = 0;
  *((_DWORD *)this + 503) = 0;
  *((_DWORD *)this + 504) = 0;
  *((_DWORD *)this + 505) = 0;
  *((_DWORD *)this + 506) = 0;
  *((_DWORD *)this + 507) = 0;
  *((_DWORD *)this + 516) = 0;
  *((_DWORD *)this + 457) = 1065353216;
  *((_DWORD *)this + 458) = 1065353216;
  *((_DWORD *)this + 459) = 1065353216;
  *((_DWORD *)this + 460) = 1065353216;
  *((_DWORD *)this + 461) = 1065353216;
  *((_DWORD *)this + 462) = 1065353216;
  *((_DWORD *)this + 463) = 1065353216;
  *((_DWORD *)this + 464) = 1065353216;
  *((_DWORD *)this + 465) = 0;
  *((_DWORD *)this + 466) = 0;
  *((_DWORD *)this + 467) = 0;
  *((_DWORD *)this + 468) = 0;
  *((_BYTE *)this + 2074) = 0;
  *((_WORD *)this + 1036) = 0;
  *((_DWORD *)this + 489) = 0;
  *((_DWORD *)this + 490) = 1065353216;
  v17 = *(_DWORD *)(*(_DWORD *)(LODWORD(v5) + 44) + 44);
  v18 = *(_DWORD *)(v17 + 16);
  if ( !v18 )
  {
    *(_BYTE *)(v17 + 6) = 4;
    v19 = CMemoryMgr::Malloc(0x80u, (unsigned int)this + 2048);
    *(_DWORD *)(v17 + 16) = v19;
    v19[10] = 1203982335;
    v18 = *(_DWORD *)(v17 + 16);
  }
  *(_DWORD *)(v18 + 8) = 1203982335;
  (*(void (__fastcall **)(CBike *))(*(_DWORD *)this + 196))(this);
  v20 = *((_BYTE *)this + 58);
  v21 = *((_DWORD *)this + 267);
  v22 = *(_WORD *)((char *)this + 991);
  *((_WORD *)this + 479) = 0;
  *((_DWORD *)this + 236) = CTimer::m_snTimeInMilliseconds;
  *(_WORD *)((char *)this + 991) = v22 & 0xFFFB;
  *((_DWORD *)this + 267) = v21 & 0xFFFFF0FF;
  *((_BYTE *)this + 58) = v20 & 7 | 0x10;
  *((_BYTE *)this + 1160) = 0;
  *((_BYTE *)this + 1500) = 0;
  CMatrix::operator=();
  *((_DWORD *)this + 401) = 0;
  *((_DWORD *)this + 402) = 0;
  *((_DWORD *)this + 403) = 0;
  CAEVehicleAudioEntity::Initialise((CBike *)((char *)this + 316), this);
}


// ============================================================

// Address: 0x5606d4
// Original: _ZN5CBikeD2Ev
// Demangled: CBike::~CBike()
void __fastcall CBike::~CBike(CBike *this)
{
  *(_DWORD *)this = &off_66D800;
  CAEVehicleAudioEntity::Terminate((CBike *)((char *)this + 316));
  CRideAnimData::~CRideAnimData((CBike *)((char *)this + 1620));
  CMatrix::~CMatrix((CBike *)((char *)this + 1504));
  sub_195C7C(this);
}


// ============================================================

// Address: 0x56070c
// Original: _ZN5CBikeD0Ev
// Demangled: CBike::~CBike()
void __fastcall CBike::~CBike(CBike *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_66D800;
  CAEVehicleAudioEntity::Terminate((CBike *)((char *)this + 316));
  CRideAnimData::~CRideAnimData((CBike *)((char *)this + 1620));
  CMatrix::~CMatrix((CBike *)((char *)this + 1504));
  CVehicle::~CVehicle(this);
  sub_199F80(v2);
}


// ============================================================

// Address: 0x560748
// Original: _ZN5CBike13SetModelIndexEj
// Demangled: CBike::SetModelIndex(uint)
int __fastcall CBike::SetModelIndex(CBike *this, unsigned int a2)
{
  CVehicle::SetModelIndex(this, a2);
  *((_DWORD *)this + 373) = 0;
  *((_DWORD *)this + 374) = 0;
  *(_QWORD *)((char *)this + 1476) = 0LL;
  *(_QWORD *)((char *)this + 1484) = 0LL;
  *(_QWORD *)((char *)this + 1460) = 0LL;
  *(_QWORD *)((char *)this + 1468) = 0LL;
  return sub_18AB14();
}


// ============================================================

// Address: 0x56077a
// Original: _ZN5CBike15SetupModelNodesEv
// Demangled: CBike::SetupModelNodes(void)
int __fastcall CBike::SetupModelNodes(CBike *this)
{
  *((_DWORD *)this + 373) = 0;
  *((_DWORD *)this + 374) = 0;
  *(_QWORD *)((char *)this + 1476) = 0LL;
  *(_QWORD *)((char *)this + 1484) = 0LL;
  *(_QWORD *)((char *)this + 1460) = 0LL;
  *(_QWORD *)((char *)this + 1468) = 0LL;
  return sub_18AB14();
}


// ============================================================

// Address: 0x5607a0
// Original: _ZN5CBike20SetupSuspensionLinesEv
// Demangled: CBike::SetupSuspensionLines(void)
float *__fastcall CBike::SetupSuspensionLines(CBike *this)
{
  float32x2_t v1; // d1
  float32x2_t v2; // d2
  float v4; // s30
  int v5; // r8
  float v6; // r0
  float *v7; // r3
  float *v8; // r6
  __int16 *v9; // r9
  int v10; // r0
  float v11; // s20
  float v12; // s16
  int v13; // r0
  float *v14; // r2
  float v15; // s17
  float v16; // s0
  float v17; // r11
  float v18; // s2
  char *v19; // r0
  float v20; // s0
  float *v21; // r1
  int v22; // r0
  int v23; // r10
  int v24; // r6
  float v25; // s19
  float v26; // s0
  int v27; // r0
  int v28; // r6
  float *v29; // r0
  float v30; // s4
  float *v31; // r1
  float v32; // s2
  float v33; // s4
  float v34; // s6
  int v35; // r0
  int v36; // r0
  float v37; // s0
  float v38; // s2
  float *v39; // r0
  int v40; // r1
  int v41; // r10
  int v42; // r5
  float *result; // r0
  float v44; // s0
  float v45; // s2
  float v46; // s0
  float *v47; // r1
  float v48; // s0
  int v49; // r2
  float v50; // s2
  int v51; // r1
  float v52; // s0
  int v53; // r3
  float v54; // s6
  int v55; // [sp+0h] [bp-C0h]
  float *v56; // [sp+10h] [bp-B0h]
  __int16 *v57; // [sp+14h] [bp-ACh]
  float *v58; // [sp+18h] [bp-A8h]
  __int64 v59; // [sp+50h] [bp-70h]
  __int64 v60; // [sp+50h] [bp-70h]
  __int64 v61; // [sp+50h] [bp-70h]
  __int64 v62; // [sp+58h] [bp-68h]
  __int64 v63; // [sp+58h] [bp-68h]
  __int64 v64; // [sp+58h] [bp-68h]

  v4 = 0.0;
  v5 = 0;
  v6 = CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)];
  v7 = (float *)(LODWORD(v6) + 88);
  v8 = (float *)(LODWORD(v6) + 92);
  v55 = *(_DWORD *)(LODWORD(v6) + 44);
  v9 = *(__int16 **)(v55 + 44);
  v10 = *((_DWORD *)v9 + 4);
  v11 = *(float *)(v10 + 8);
  v12 = *(float *)(v10 + 40);
  v56 = v8;
  v57 = v9;
  v58 = v7;
  do
  {
    if ( v11 == 100000.0 )
    {
      v18 = -0.25;
      v19 = (char *)this + 1480;
      v20 = 0.25;
      v21 = v8;
      switch ( v5 )
      {
        case 0:
          v18 = 0.25;
          goto LABEL_6;
        case 1:
LABEL_6:
          v20 = v18;
          v19 = (char *)this + 1476;
          v21 = v7;
          goto LABEL_9;
        case 2:
          goto LABEL_9;
        case 3:
          v19 = (char *)this + 1480;
          v20 = -0.25;
          v21 = v8;
LABEL_9:
          v22 = *(_DWORD *)v19;
          v4 = v20 * *v21;
          break;
        default:
          v22 = 0;
          break;
      }
      v23 = *(_DWORD *)(*((_DWORD *)this + 6) + 4);
      v59 = *(_QWORD *)(v22 + 64);
      v62 = *(_QWORD *)(v22 + 72);
      v24 = *(_DWORD *)(v22 + 4);
      while ( v24 )
      {
        RwMatrixTransform();
        v24 = *(_DWORD *)(v24 + 4);
        if ( v24 == v23 )
          v24 = 0;
      }
      v17 = *(float *)&v62;
      v25 = *((float *)&v59 + 1);
      v15 = *(float *)&v59;
      if ( (unsigned __int16)v5 == 2 )
      {
        v26 = 0.0;
        v27 = *((_DWORD *)this + 368);
        *((_DWORD *)this + 480) = v62;
        if ( v27 )
        {
          v60 = *(_QWORD *)(v27 + 64);
          v63 = *(_QWORD *)(v27 + 72);
          v28 = *(_DWORD *)(v27 + 4);
          while ( v28 )
          {
            RwMatrixTransform();
            v28 = *(_DWORD *)(v28 + 4);
            if ( v28 == v23 )
              v28 = 0;
          }
          v26 = sqrtf(
                  (float)((float)(v25 - *((float *)&v60 + 1)) * (float)(v25 - *((float *)&v60 + 1)))
                + (float)((float)(v17 - *(float *)&v63) * (float)(v17 - *(float *)&v63)));
        }
        *((float *)this + 491) = v26;
      }
      else if ( !(_WORD)v5 )
      {
        *((_DWORD *)this + 479) = v62;
      }
      v16 = v4 + v25;
      v9 = v57;
      v8 = v56;
      v7 = v58;
      v13 = *((_DWORD *)v57 + 4);
    }
    else
    {
      v13 = *((_DWORD *)v9 + 4);
      v14 = (float *)(v13 + 32 * v5);
      v15 = *v14;
      v16 = v14[1];
      v17 = *((float *)this + (v5 > 1) + 479);
    }
    v29 = (float *)(v13 + 32 * v5);
    v30 = *(float *)(*((_DWORD *)this + 226) + 184);
    v31 = v8;
    *v29 = v15;
    v32 = v30 + v17;
    v29[1] = v16;
    v29[2] = v30 + v17;
    if ( (unsigned int)v5 < 2 )
      v31 = v7;
    v33 = *v31 * -0.5;
    v34 = *(float *)(*((_DWORD *)this + 226) + 188) - *(float *)(*((_DWORD *)this + 226) + 184);
    v35 = *((_DWORD *)v9 + 4) + 32 * v5;
    *(float *)(v35 + 16) = v15;
    *(float *)(v35 + 20) = v16;
    *(float *)(v35 + 24) = v32 + (float)(v34 + v33);
    v36 = *((_DWORD *)this + 226);
    v37 = *(float *)(v36 + 184);
    v38 = *(float *)(v36 + 188);
    v39 = (float *)((char *)this + 4 * v5);
    v39[481] = v37 - v38;
    v40 = *((_DWORD *)v9 + 4) + 32 * v5++;
    v39[485] = *(float *)(v40 + 8) - *(float *)(v40 + 24);
  }
  while ( v5 != 4 );
  if ( v11 == 100000.0 )
  {
    v41 = *((_DWORD *)this + 367);
    v61 = *(_QWORD *)(v41 + 64);
    v64 = *(_QWORD *)(v41 + 72);
    v42 = *(_DWORD *)(v41 + 4);
    while ( v42 )
    {
      RwMatrixTransform();
      v42 = *(_DWORD *)(v42 + 4);
      if ( v42 == v41 )
        v42 = 0;
    }
    *((_DWORD *)this + 492) = HIDWORD(v61);
    *((_DWORD *)this + 493) = v64;
    v7 = v58;
  }
  result = (float *)((char *)this + 1956);
  v44 = (float)(*v7 * 0.5)
      + (float)((float)(*((float *)this + 481)
                      * (float)((float)(1.0 / (float)(*(float *)(*((_DWORD *)this + 226) + 172) * -4.0)) + 1.0))
              - *(float *)(*((_DWORD *)v9 + 4) + 8));
  *((float *)this + 489) = v44;
  *((float *)this + 477) = (float)(*v7 * 0.5) - v44;
  *((float *)this + 478) = (float)(*v8 * 0.5) - v44;
  v45 = *(float *)(*((_DWORD *)v9 + 4) + 24);
  v46 = *(float *)(v55 + 8);
  v47 = (float *)v55;
  if ( v45 < v46 )
  {
    *(float *)(v55 + 8) = v45;
    v46 = v45;
  }
  if ( sqrtf(
         (float)((float)(*(float *)v55 * *(float *)v55) + (float)(*(float *)(v55 + 4) * *(float *)(v55 + 4)))
       + (float)(v46 * v46)) <= sqrtf(
                                  (float)((float)(*(float *)(v55 + 12) * *(float *)(v55 + 12))
                                        + (float)(*(float *)(v55 + 16) * *(float *)(v55 + 16)))
                                + (float)(*(float *)(v55 + 20) * *(float *)(v55 + 20))) )
    v47 = (float *)(v55 + 12);
  v48 = sqrtf((float)((float)(*v47 * *v47) + (float)(v47[1] * v47[1])) + (float)(v47[2] * v47[2]));
  if ( *(float *)(v55 + 36) < v48 )
    *(float *)(v55 + 36) = v48;
  if ( v12 == 100000.0 && (*(_DWORD *)(*((_DWORD *)this + 226) + 204) & 0x40000000) != 0 )
  {
    v49 = *v9;
    if ( v49 >= 1 )
    {
      v50 = *result;
      result = 0;
      v51 = 12;
      v52 = 0.25 - v50;
      v1.n64_u32[0] = 1053609165;
      do
      {
        v53 = *((_DWORD *)v9 + 2);
        v54 = *(float *)(v53 + v51 - 4);
        v2.n64_u32[0] = *(_DWORD *)(v53 + v51);
        if ( (float)(v54 - v2.n64_f32[0]) < v52 )
        {
          if ( v2.n64_f32[0] > 0.4 )
          {
            v2.n64_f32[0] = v54 - v52;
            v2.n64_u64[0] = vmax_f32(v2, v1).n64_u64[0];
            *(_DWORD *)(v53 + v51) = v2.n64_u32[0];
            v53 = *((_DWORD *)v9 + 2);
            v2.n64_u32[0] = *(_DWORD *)(v53 + v51);
          }
          *(float *)(v53 + v51 - 4) = v52 + v2.n64_f32[0];
          LOWORD(v49) = *v9;
        }
        v51 += 20;
        result = (float *)((char *)result + 1);
      }
      while ( (int)result < (__int16)v49 );
    }
  }
  return result;
}


// ============================================================

// Address: 0x560c74
// Original: _ZN5CBike25GetComponentWorldPositionEiR7CVector
// Demangled: CBike::GetComponentWorldPosition(int,CVector &)
int __fastcall CBike::GetComponentWorldPosition(CBike *this, int a2, CVector *a3)
{
  int result; // r0
  int LTM; // r0
  __int64 v6; // d16

  result = *((_DWORD *)this + a2 + 365);
  if ( result )
  {
    LTM = RwFrameGetLTM();
    v6 = *(_QWORD *)(LTM + 48);
    result = *(_DWORD *)(LTM + 56);
    *((_DWORD *)a3 + 2) = result;
    *(_QWORD *)a3 = v6;
  }
  return result;
}


// ============================================================

// Address: 0x560c9a
// Original: _ZNK5CBike18IsComponentPresentEi
// Demangled: CBike::IsComponentPresent(int)
bool __fastcall CBike::IsComponentPresent(CBike *this, int a2)
{
  return *((_DWORD *)this + a2 + 365) != 0;
}


// ============================================================

// Address: 0x560caa
// Original: _ZN5CBike28dmgDrawCarCollidingParticlesERK7CVectorf11eWeaponType
// Demangled: CBike::dmgDrawCarCollidingParticles(CVector const&,float,eWeaponType)
void CBike::dmgDrawCarCollidingParticles()
{
  ;
}


// ============================================================

// Address: 0x560cac
// Original: _ZN5CBike19DamageKnockOffRiderEP8CVehicleftP7CEntityR7CVectorS5_
// Demangled: CBike::DamageKnockOffRider(CVehicle *,float,ushort,CEntity *,CVector &,CVector &)
int __fastcall CBike::DamageKnockOffRider(
        CBike *this,
        CVehicle *a2,
        float a3,
        unsigned __int16 a4,
        CEntity *a5,
        CVector *a6,
        CVector *a7)
{
  float32x2_t v7; // d2
  float32x2_t v8; // d3
  float32x2_t v9; // d10
  float v12; // s18
  CPed *v13; // r0
  float v14; // s20
  char *v15; // r5
  int v16; // r1
  int result; // r0
  int ActiveTask; // r0
  float *v19; // r1
  float v20; // s22
  float v21; // s26
  float v22; // s19
  float v23; // s24
  float v24; // s17
  float v25; // s0
  float v26; // s28
  float v27; // s27
  float v28; // s2
  int v29; // r0
  float v30; // s6
  int *v31; // r2
  CPed *v32; // r0
  float v33; // r0
  float v34; // s0
  float v35; // s23
  float v36; // s30
  float v37; // s25
  float v38; // s29
  float v39; // s31
  CCullZones *IsPlayer; // r0
  int v41; // r2
  int v42; // r0
  float v43; // s0
  int LocalDirection; // r6
  int v45; // r6
  char v46; // r0
  float v47; // [sp+28h] [bp-E8h]
  float v48; // [sp+2Ch] [bp-E4h]
  _BYTE v49[60]; // [sp+30h] [bp-E0h] BYREF
  _BYTE v50[60]; // [sp+6Ch] [bp-A4h] BYREF
  float v51; // [sp+A8h] [bp-68h]
  float v52; // [sp+ACh] [bp-64h]

  v12 = (float)(*(float *)&a2 * 800.0) / *((float *)this + 36);
  if ( *((unsigned __int8 *)this + 58) <= 7u )
  {
    v13 = (CPed *)*((_DWORD *)this + 281);
    if ( !v13 )
      return 0;
    v14 = 0.5;
    v15 = (char *)this + 1124;
    v12 = v12 * 0.42;
    goto LABEL_7;
  }
  v13 = (CPed *)*((_DWORD *)this + 281);
  if ( !v13 )
    return 0;
  v15 = (char *)this + 1124;
  if ( (*((_DWORD *)v13 + 291) & 0x18000000) != 0x10000000 )
  {
    v14 = 0.6;
LABEL_7:
    v12 = v12 * (float)(1.0 - (float)(COERCE_FLOAT(CPed::GetBikeRidingSkill(v13)) * v14));
  }
  v16 = *(_DWORD *)v15;
  if ( !*(_DWORD *)v15 )
    return 0;
  result = 0;
  if ( v12 <= 10.0 || *(_DWORD *)(v16 + 1100) != 50 )
    return result;
  if ( CTaskManager::GetActiveTask((CTaskManager *)(*(_DWORD *)(v16 + 1088) + 4)) )
  {
    ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*(_DWORD *)(*(_DWORD *)v15 + 1088) + 4));
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) == 1022
      && *(_DWORD *)(*(_DWORD *)v15 + 1436) != 6 )
    {
      return 0;
    }
  }
  v19 = (float *)*((_DWORD *)this + 5);
  v20 = *(float *)a6;
  v21 = *((float *)a6 + 1);
  v22 = v19[5];
  v23 = *((float *)a6 + 2);
  v24 = v19[6];
  v48 = v19[4];
  v25 = (float)((float)(*(float *)a6 * v48) + (float)(v21 * v22)) + (float)(v23 * v24);
  if ( fabsf(v25) <= 0.85 )
  {
    v26 = 0.6;
  }
  else
  {
    v7.n64_u32[0] = 0;
    v8.n64_f32[0] = (float)((float)(v20 * 0.0) + (float)(v21 * 0.0)) + v23;
    v8.n64_f32[0] = vmax_f32(v8, v7).n64_f32[0];
    if ( v8.n64_f32[0] < 0.85 )
      v8.n64_u32[0] = 0;
    v26 = (float)(v8.n64_f32[0] * (float)(v8.n64_f32[0] * 7.0)) + 0.6;
  }
  v27 = v19[10];
  if ( v27 < 0.0 )
    v26 = 5.0;
  if ( *((_WORD *)this + 19) == 468 )
  {
    v26 = v26 * 0.65;
    v28 = 0.0375;
    v47 = 1.5;
  }
  else
  {
    v29 = *((_DWORD *)this + 361);
    v30 = 1.5;
    v31 = dword_56112C;
    if ( v29 == 2 )
    {
      v26 = v26 * 0.65;
      v30 = 3.0;
    }
    v47 = v30;
    if ( v29 == 2 )
      v31 = &dword_56112C[1];
    v28 = *(float *)v31;
  }
  v32 = *(CPed **)v15;
  if ( *(_DWORD *)v15 )
  {
    if ( v25 > 0.0 )
    {
      v33 = COERCE_FLOAT(CPed::GetBikeRidingSkill(v32));
      v19 = (float *)*((_DWORD *)this + 5);
      v34 = v33 * -0.6;
      v20 = *(float *)a6;
      v21 = *((float *)a6 + 1);
      v23 = *((float *)a6 + 2);
      v32 = *(CPed **)v15;
      v26 = v26 * (float)(v34 + 1.0);
      v48 = v19[4];
      v22 = v19[5];
      v24 = v19[6];
      v27 = v19[10];
    }
  }
  else
  {
    v32 = 0;
  }
  v35 = *v19;
  v36 = v19[1];
  v37 = v19[2];
  v38 = v19[8];
  v39 = v19[9];
  v9.n64_u32[0] = 0;
  IsPlayer = (CCullZones *)CPed::IsPlayer(v32);
  if ( !IsPlayer
    || CCullZones::CamStairsForPlayer(IsPlayer) != 1
    || !CCullZones::FindZoneWithStairsAttributeForPlayer((CCullZones *)((char *)&stderr + 1)) )
  {
    v7.n64_f32[0] = (float)((float)(v20 * v38) + (float)(v21 * v39)) + (float)(v23 * v27);
    v9.n64_f32[0] = v12
                  * (float)((float)((float)((float)(v26
                                                  * fabsf(
                                                      (float)((float)(v20 * v48) + (float)(v21 * v22))
                                                    + (float)(v23 * v24)))
                                          + (float)(fabsf(
                                                      (float)((float)(v20 * v35) + (float)(v21 * v36))
                                                    + (float)(v23 * v37))
                                                  * 0.45))
                                  + (float)(v28 * vmax_f32(v7, v9).n64_f32[0]))
                          - (float)(v47 * vmin_f32(v7, v9).n64_f32[0]));
    if ( v9.n64_f32[0] > 75.0 )
    {
      v41 = *(_DWORD *)v15;
LABEL_39:
      if ( v41 && (*(_DWORD *)(v41 + 1164) & 0x18000000) == 0x8000000 )
        return 0;
      v42 = *((_DWORD *)this + 282);
      if ( v42 )
      {
        if ( (*(_DWORD *)(v42 + 1164) & 0x18000000) == 0x8000000 )
          return 0;
      }
      v43 = -*(float *)a6;
      v52 = -*((float *)a6 + 1);
      v51 = v43;
      if ( v41 )
      {
        LocalDirection = CPed::GetLocalDirection();
        CEventKnockOffBike::CEventKnockOffBike(
          (int)v50,
          this,
          (int)this + 72,
          (int)a6,
          *(float *)&a2,
          v9.n64_f32[0] * 0.05,
          49,
          (char)LocalDirection,
          0,
          0,
          1,
          0);
        CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*(_DWORD *)v15 + 1088) + 104), (CEvent *)v50, 0);
        CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)v50);
        if ( !*((_DWORD *)this + 282) )
          return 1;
      }
      else
      {
        LocalDirection = -10;
        if ( !v42 )
          return 1;
      }
      if ( LocalDirection == -10 )
        LOBYTE(LocalDirection) = CPed::GetLocalDirection();
      CEventKnockOffBike::CEventKnockOffBike(
        (int)v50,
        this,
        (int)this + 72,
        (int)a6,
        *(float *)&a2,
        v9.n64_f32[0] * 0.05,
        49,
        (char)LocalDirection,
        0,
        0,
        0,
        0);
      CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*((_DWORD *)this + 282) + 1088) + 104), (CEvent *)v50, 0);
      v45 = *(_DWORD *)v15;
      if ( v45 == FindPlayerPed(-1) )
      {
        v46 = CPed::GetLocalDirection();
        CEventKnockOffBike::CEventKnockOffBike(
          (int)v49,
          this,
          (int)this + 72,
          (int)a6,
          *(float *)&a2,
          v9.n64_f32[0] * 0.05,
          49,
          v46,
          0,
          0,
          1,
          0);
        CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*(_DWORD *)v15 + 1088) + 104), (CEvent *)v49, 0);
        CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)v49);
      }
      CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)v50);
      return 1;
    }
  }
  result = 0;
  if ( v9.n64_f32[0] > 20.0 )
  {
    v41 = *(_DWORD *)v15;
    if ( (*(_DWORD *)(*(_DWORD *)v15 + 1164) & 0x18000000) == 0x18000000 )
      goto LABEL_39;
  }
  return result;
}


// ============================================================

// Address: 0x561148
// Original: _ZN5CBike13VehicleDamageEftP7CEntityP7CVectorS3_11eWeaponType
// Demangled: CBike::VehicleDamage(float,ushort,CEntity *,CVector *,CVector *,eWeaponType)
int __fastcall CBike::VehicleDamage(int this, float a2)
{
  int v2; // r6
  int v3; // r4
  unsigned __int16 v4; // r3
  CEntity *v5; // r0
  int v6; // r0
  float v7; // s18
  float v8; // s20
  float v9; // s22
  float *PlayerVehicle; // r0
  float *v11; // r0
  CPlayerPed *PlayerPed; // r0
  int v13; // r0
  bool v14; // zf
  int v15; // r0
  bool v16; // zf
  float *v17; // r6
  float v18; // s18
  int v19; // r0
  int v20; // r1
  float v21; // s0
  float v22; // s0
  int v23; // r5
  float v24; // s0
  float v25; // s2
  CEntity *v26; // [sp+0h] [bp-40h]
  CVector *v27; // [sp+8h] [bp-38h]
  float v28[13]; // [sp+Ch] [bp-34h] BYREF

  v3 = this;
  v28[0] = a2;
  if ( a2 <= 0.0 && *(float *)(this + 220) >= 1.0 )
  {
    this = *(unsigned __int8 *)(this + 1070) << 26;
    if ( this < 0 )
    {
      v28[0] = *(float *)(v3 + 220);
      CVehicle::ReduceVehicleDamage((CVehicle *)v3, v28);
      if ( (*(_BYTE *)(v3 + 1576) & 0x10) != 0 && v28[0] > 20.0 )
        *(_BYTE *)(v3 + 1576) &= ~0x10u;
      CBike::DamageKnockOffRider((CBike *)v3, *(CVehicle **)(v3 + 220), 0.0, v4, v26, (CVector *)(v3 + 228), v27);
      v5 = *(CEntity **)(v3 + 224);
      if ( v5 && (*((_BYTE *)v5 + 58) & 7) == 2 )
      {
        *(_DWORD *)(v3 + 1308) = v5;
        *(_BYTE *)(v3 + 1304) = 49;
        CEntity::RegisterReference(v5, (CEntity **)(v3 + 1308));
      }
      this = *(unsigned __int8 *)(v3 + 70) << 27;
      if ( (*(_BYTE *)(v3 + 70) & 0x10) == 0 )
      {
        v6 = *(_DWORD *)(v3 + 224);
        if ( !v6
          || (*(_BYTE *)(v6 + 58) & 7) != 1
          || (this = *(_DWORD *)(v3 + 20),
              (float)((float)((float)(*(float *)(v3 + 228) * *(float *)(this + 32))
                            + (float)(*(float *)(v3 + 232) * *(float *)(this + 36)))
                    + (float)(*(float *)(v3 + 236) * *(float *)(this + 40))) <= 0.6) )
        {
          if ( v28[0] <= 25.0 || (*(_BYTE *)(v3 + 58) & 0xF8) == 0x28 )
            goto LABEL_48;
          if ( *(unsigned __int8 *)(v3 + 1068) << 31 )
          {
            if ( FindPlayerVehicle(-1, 0) )
            {
              v2 = *(_DWORD *)(v3 + 224);
              if ( v2 == FindPlayerVehicle(-1, 0) && (*(_BYTE *)(v3 + 58) & 0xF8) != 0x20 )
              {
                v7 = *(float *)(v3 + 72);
                v8 = *(float *)(v3 + 76);
                v9 = *(float *)(v3 + 80);
                PlayerVehicle = (float *)FindPlayerVehicle(-1, 0);
                if ( sqrtf((float)((float)(v7 * v7) + (float)(v8 * v8)) + (float)(v9 * v9)) <= sqrtf(
                                                                                                 (float)((float)(PlayerVehicle[18] * PlayerVehicle[18]) + (float)(PlayerVehicle[19] * PlayerVehicle[19]))
                                                                                               + (float)(PlayerVehicle[20] * PlayerVehicle[20])) )
                {
                  v11 = (float *)FindPlayerVehicle(-1, 0);
                  if ( sqrtf((float)((float)(v11[18] * v11[18]) + (float)(v11[19] * v11[19])) + (float)(v11[20] * v11[20])) > 0.1 )
                  {
                    PlayerPed = (CPlayerPed *)FindPlayerPed(-1);
                    CPlayerPed::SetWantedLevelNoDrop(PlayerPed, 1);
                  }
                }
              }
            }
          }
          v28[0] = (float)(v28[0] + -25.0) * *(float *)(*(_DWORD *)(v3 + 904) + 200);
          if ( v28[0] <= 0.0 )
            goto LABEL_48;
          if ( v28[0] > 5.0 )
          {
            v13 = *(_DWORD *)(v3 + 1124);
            v14 = v13 == 0;
            if ( v13 )
            {
              v2 = *(_DWORD *)(v3 + 224);
              v14 = v2 == 0;
            }
            if ( !v14 && (*(_BYTE *)(v2 + 58) & 7) == 2 )
            {
              v15 = FindPlayerVehicle(-1, 0);
              v16 = v15 == v3;
              if ( v15 == v3 )
                v16 = *(_BYTE *)(v2 + 1192) == 2;
              if ( !v16 && *(_DWORD *)(v2 + 1124) )
                CPed::Say(*(CPed **)(v3 + 1124), 0x42u, 0, 1.0, 0, 0, 0);
            }
          }
          v17 = (float *)(v3 + 1228);
          v18 = *(float *)(v3 + 1228);
          v19 = FindPlayerVehicle(-1, 0);
          v20 = *(_DWORD *)(v3 + 1068) & 0x8000;
          if ( v3 == v19 )
          {
            v21 = 2.0;
            if ( v20 )
              v21 = 6.0;
          }
          else if ( v20 )
          {
            v21 = 12.0;
          }
          else
          {
            v23 = *(_DWORD *)(v3 + 224);
            if ( !v23 || v23 != FindPlayerVehicle(-1, 0) )
            {
              v22 = v28[0] * 0.25;
              goto LABEL_43;
            }
            v21 = 1.5;
          }
          v22 = v28[0] / v21;
LABEL_43:
          v24 = *v17 - v22;
          v25 = v24;
          if ( v24 <= 1.0 )
            v25 = 1.0;
          if ( v18 > 1.0 )
            v24 = v25;
          *v17 = v24;
LABEL_48:
          this = v3 + 1228;
          if ( *(float *)(v3 + 1228) < 250.0 )
          {
            this = *(unsigned __int8 *)(v3 + 1576);
            if ( (this & 0x40) == 0 )
            {
              *(_DWORD *)(v3 + 2000) = 0;
              *(_BYTE *)(v3 + 1576) = this | 0x40;
              this = *(_DWORD *)(v3 + 224);
              *(_DWORD *)(v3 + 2068) = this;
              if ( this )
                return CEntity::RegisterReference((CEntity *)this, (CEntity **)(v3 + 2068));
            }
          }
        }
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x5614b4
// Original: _ZN5CBike13KnockOffRiderE11eWeaponTypehP4CPedb
// Demangled: CBike::KnockOffRider(eWeaponType,uchar,CPed *,bool)
int __fastcall CBike::KnockOffRider(int a1, int a2, int a3, int a4)
{
  return a4;
}


// ============================================================

// Address: 0x5614b8
// Original: _ZN5CBike18SetRemoveAnimFlagsEP4CPed
// Demangled: CBike::SetRemoveAnimFlags(CPed *)
CAnimBlendAssociation *__fastcall CBike::SetRemoveAnimFlags(CBike *this, CPed *a2)
{
  CAnimBlendAssociation *result; // r0

  result = (CAnimBlendAssociation *)(*((_BYTE *)a2 + 58) & 7);
  if ( result == (CAnimBlendAssociation *)((char *)&stderr + 3) )
  {
    for ( result = (CAnimBlendAssociation *)RpAnimBlendClumpGetFirstAssociation();
          result;
          result = (CAnimBlendAssociation *)RpAnimBlendGetNextAssociation(result, 0x1000u) )
    {
      *((_WORD *)result + 23) |= 4u;
    }
  }
  return result;
}


// ============================================================

// Address: 0x5614ec
// Original: _ZN5CBike17ReduceHornCounterEv
// Demangled: CBike::ReduceHornCounter(void)
int __fastcall CBike::ReduceHornCounter(int this)
{
  int v1; // r1

  v1 = *(_DWORD *)(this + 1316);
  if ( v1 )
    *(_DWORD *)(this + 1316) = v1 - 1;
  return this;
}


// ============================================================

// Address: 0x5614fc
// Original: _ZN5CBike15ProcessBuoyancyEv
// Demangled: CBike::ProcessBuoyancy(void)
signed int __fastcall CBike::ProcessBuoyancy(CBike *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d2
  int v5; // r0
  int v6; // r1
  float v7; // s6
  float v8; // s4
  float32x2_t v9; // d1
  int v10; // r5
  float v11; // s18
  float v12; // r0
  float v13; // s6
  float32x4_t v14; // q0
  float v15; // s4
  int v16; // r1
  unsigned int *v17; // r6
  int v18; // r0
  int v19; // r1
  int v20; // r2
  CEventDamage *v21; // r0
  int v22; // r2
  signed int result; // r0
  int v24; // r0
  float *v25; // r6
  char *v26; // r5
  signed int v27; // r9
  int v28; // r0
  CEventDamage *v29; // r0
  char *v30; // [sp+28h] [bp-B8h]
  _BYTE v31[62]; // [sp+44h] [bp-9Ch] BYREF
  char v32; // [sp+82h] [bp-5Eh]
  _BYTE v33[20]; // [sp+84h] [bp-5Ch] BYREF
  _DWORD v34[2]; // [sp+98h] [bp-48h] BYREF
  float v35; // [sp+A0h] [bp-40h]
  int v36; // [sp+A4h] [bp-3Ch] BYREF

  v5 = cBuoyancy::ProcessBuoyancy(
         (cBuoyancy *)&mod_Buoyancy,
         this,
         *((float *)this + 41),
         (CVector *)&v36,
         (CVector *)v34);
  v6 = *((_DWORD *)this + 17);
  if ( v5 != 1 )
  {
    v22 = *((_DWORD *)this + 267);
    *((_DWORD *)this + 17) = v6 & 0xF7FFFEFF;
    result = v22 & 0xBFFFFFFF;
LABEL_29:
    *((_DWORD *)this + 267) = result;
    return result;
  }
  *((_DWORD *)this + 17) = v6 | 0x8000000;
  CPhysical::ApplyMoveForce(this, v34[0], v34[1], LODWORD(v35));
  CPhysical::ApplyTurnForce();
  v7 = *((float *)this + 36) * 0.008;
  v2.n64_u32[0] = 1008981770;
  v8 = *((float *)this + 41);
  v1.n64_u32[0] = CTimer::ms_fTimeStep;
  v9.n64_u64[0] = vmax_f32(v1, v2).n64_u64[0];
  v9.n64_f32[0] = v35 / (float)(v7 * v9.n64_f32[0]);
  if ( v8 < v7 )
    v9.n64_f32[0] = v9.n64_f32[0] * (float)((float)(v7 * 1.05) / v8);
  v10 = *((_DWORD *)this + 17);
  v11 = v9.n64_f32[0] * 1.5;
  if ( (v10 & 1) == 0 )
    v11 = v9.n64_f32[0];
  v3.n64_u32[0] = 0.5;
  v9.n64_f32[0] = (float)(v11 * -0.05) + 1.0;
  v12 = powf(vmax_f32(v9, v3).n64_f32[0], *(float *)&CTimer::ms_fTimeStep);
  v13 = v12 * *((float *)this + 22);
  v14 = vmulq_n_f32(*(float32x4_t *)((char *)this + 72), v12);
  v30 = (char *)this + 72;
  v15 = v12 * *((float *)this + 23);
  *(float32x4_t *)((char *)this + 72) = v14;
  *((float *)this + 22) = v13;
  *((float *)this + 23) = v15;
  if ( v11 <= 0.8
    && (v11 <= 0.4
     || *((float *)this + 457) != 1.0
     && *((float *)this + 458) != 1.0
     && *((float *)this + 459) != 1.0
     && *((float *)this + 460) != 1.0) )
  {
    v24 = *((_DWORD *)this + 267);
    *((_DWORD *)this + 17) = v10 & 0xFFFFFEFF;
    result = v24 & 0xBFFFFFFF;
    goto LABEL_29;
  }
  v16 = *((_DWORD *)this + 267);
  v17 = (unsigned int *)((char *)this + 1068);
  v18 = *((_DWORD *)this + 268);
  *((_DWORD *)this + 17) = v10 | 0x100;
  v19 = v16 | 0x40000000;
  *((_DWORD *)this + 267) = v19;
  if ( v14.n128_f32[2] < -0.1 )
    *((_DWORD *)this + 20) = -1110651699;
  v20 = *((_DWORD *)this + 281);
  if ( v20 )
  {
    *(_DWORD *)(v20 + 68) |= 0x8000000u;
    if ( CPed::IsPlayer(*((CPed **)this + 281)) || (*((_BYTE *)this + 1576) & 4) == 0 )
    {
      if ( CPed::IsPlayer(*((CPed **)this + 281)) == 1 )
        CPlayerPed::HandlePlayerBreath(*((CPlayerPed **)this + 281), 1, 1.0);
      if ( *((float *)this + 457) >= 1.0
        && *((float *)this + 458) >= 1.0
        && *((float *)this + 459) >= 1.0
        && *((float *)this + 460) >= 1.0 )
      {
        CEventKnockOffBike::CEventKnockOffBike(
          (int)v31,
          this,
          (int)v30,
          (int)this + 228,
          *((float *)this + 55),
          0.0,
          53,
          0,
          0,
          0,
          1,
          0);
        CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*((_DWORD *)this + 281) + 1088) + 104), (CEvent *)v31, 0);
        *v17 &= ~0x10u;
        CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)v31);
      }
      else if ( !CPed::IsPlayer(*((CPed **)this + 281)) )
      {
        CPedDamageResponseCalculator::CPedDamageResponseCalculator((int)v33, (int)this, CTimer::ms_fTimeStep, 53, 3, 0);
        v21 = (CEventDamage *)CEventDamage::CEventDamage((int)v31, this, CTimer::m_snTimeInMilliseconds, 53, 3, 0, 0, 1);
        if ( CEventDamage::AffectsPed(v21, *((CPed **)this + 281)) == 1 )
          CPedDamageResponseCalculator::ComputeDamageResponse((int)v33, *((CPed **)this + 281));
        else
          v32 = 1;
        CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*((_DWORD *)this + 281) + 1088) + 104), (CEvent *)v31, 0);
        CEventDamage::~CEventDamage((CEventDamage *)v31);
        CPedDamageResponseCalculator::~CPedDamageResponseCalculator((CPedDamageResponseCalculator *)v33);
      }
    }
  }
  else
  {
    *v17 = v19 & 0xFFFFFFEF;
    *((_DWORD *)this + 268) = v18;
  }
  result = *((unsigned __int8 *)this + 1164);
  if ( *((_BYTE *)this + 1164) )
  {
    v25 = (float *)((char *)this + 1828);
    v26 = (char *)this + 1128;
    v27 = 0;
    do
    {
      v28 = *(_DWORD *)&v26[4 * v27];
      if ( v28 )
      {
        *(_DWORD *)(v28 + 68) |= 0x8000000u;
        if ( CPed::IsPlayer(*(CPed **)&v26[4 * v27]) == 1 )
          CPlayerPed::HandlePlayerBreath(*(CPlayerPed **)&v26[4 * v27], 1, 1.0);
        if ( CPed::IsPlayer(*(CPed **)&v26[4 * v27]) || (*((_BYTE *)this + 1576) & 4) == 0 )
        {
          if ( *v25 >= 1.0
            && *((float *)this + 458) >= 1.0
            && *((float *)this + 459) >= 1.0
            && *((float *)this + 460) >= 1.0 )
          {
            CEventKnockOffBike::CEventKnockOffBike(
              (int)v31,
              this,
              (int)v30,
              (int)this + 228,
              *((float *)this + 55),
              0.0,
              53,
              0,
              0,
              0,
              0,
              0);
            CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*(_DWORD *)&v26[4 * v27] + 1088) + 104), (CEvent *)v31, 0);
            CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)v31);
          }
          else if ( !CPed::IsPlayer(*(CPed **)&v26[4 * v27]) )
          {
            CPedDamageResponseCalculator::CPedDamageResponseCalculator(
              (int)v33,
              (int)this,
              CTimer::ms_fTimeStep,
              53,
              3,
              0);
            v29 = (CEventDamage *)CEventDamage::CEventDamage(
                                    (int)v31,
                                    this,
                                    CTimer::m_snTimeInMilliseconds,
                                    53,
                                    3,
                                    0,
                                    0,
                                    1);
            if ( CEventDamage::AffectsPed(v29, *(CPed **)&v26[4 * v27]) == 1 )
              CPedDamageResponseCalculator::ComputeDamageResponse((int)v33, *(CPed **)&v26[4 * v27]);
            else
              v32 = 1;
            CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*(_DWORD *)&v26[4 * v27] + 1088) + 104), (CEvent *)v31, 0);
            CEventDamage::~CEventDamage((CEventDamage *)v31);
            CPedDamageResponseCalculator::~CPedDamageResponseCalculator((CPedDamageResponseCalculator *)v33);
            v25 = (float *)((char *)this + 1828);
          }
        }
      }
      result = *((unsigned __int8 *)this + 1164);
      ++v27;
    }
    while ( v27 < result );
  }
  return result;
}


// ============================================================

// Address: 0x561a20
// Original: _ZN5CBike14ProcessControlEv
// Demangled: CBike::ProcessControl(void)
unsigned int __fastcall CBike::ProcessControl(CBike *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x4_t v3; // q1
  unsigned __int64 v4; // d11
  float32x2_t v5; // d12
  float32x2_t v6; // d13
  CBike *v7; // r11
  int ColModel; // r0
  int v9; // r2
  float v10; // r10
  int v11; // r0
  int v12; // r1
  CPed *v13; // r0
  CPed *v14; // r0
  unsigned int result; // r0
  char v16; // r1
  int v17; // r2
  _DWORD *v18; // r4
  int v19; // r1
  int v20; // r3
  float v21; // s20
  float v22; // r6
  float v23; // s18
  float v24; // r5
  float v25; // r0
  float v26; // r9
  float v27; // r0
  float v28; // s22
  float v29; // s24
  float v30; // r6
  int v31; // r1
  __int64 v32; // d16
  int v33; // r9
  unsigned int *v34; // r5
  bool v35; // zf
  _BOOL4 v36; // r8
  float32x4_t v37; // q0
  float32x4_t v38; // q9
  int v39; // r0
  float *v40; // r3
  float32x4_t v41; // q8
  float *v42; // r2
  float v43; // s14
  float v44; // s2
  float *v45; // r1
  float v46; // s2
  _BYTE *v47; // r6
  int v48; // r0
  float *v49; // r1
  unsigned __int8 v50; // r0
  int v51; // r1
  int v52; // r0
  int v53; // r1
  int v54; // r1
  int v55; // r2
  int v56; // r1
  int v57; // r6
  float v58; // s0
  float v59; // r0
  int v60; // r1
  float v61; // s0
  bool v62; // cc
  float v63; // s2
  float v64; // s0
  float v65; // s2
  float v66; // s20
  float v67; // s0
  int v68; // r4
  float *Association; // r0
  float v70; // s0
  float v71; // s0
  float *v72; // r0
  float v73; // s0
  float v74; // s2
  float v75; // s4
  float v76; // s6
  int v77; // r5
  CPed *v78; // r0
  char *v79; // r4
  int v80; // r5
  CPed *v81; // r0
  float *v82; // r1
  float *v83; // r10
  float *v84; // r0
  float *v85; // r11
  float *v86; // r5
  int v87; // r6
  float v88; // s0
  float v89; // s6
  float v90; // s2
  float v91; // s4
  float v92; // s8
  float v93; // s4
  float v94; // s14
  float v95; // s2
  unsigned __int32 *v96; // r4
  const CVector *v97; // r1
  float v98; // s4
  float *v99; // r0
  float v100; // s10
  float v101; // s2
  float *v102; // r0
  float v103; // s0
  float v104; // s4
  float v105; // s10
  __int64 v106; // d16
  CVector *v107; // r6
  float *v108; // r5
  int v109; // r8
  int v110; // r9
  int v111; // r10
  int v112; // r11
  float v113; // s0
  float *v114; // r2
  int v115; // r0
  float v116; // s2
  float v117; // r1
  __int64 v118; // d16
  _BOOL4 v119; // r4
  int SkidmarkType; // r0
  int v121; // r4
  int i; // r6
  double v123; // d16
  float *v124; // r5
  float v125; // s2
  float v126; // s4
  float v127; // s0
  float v128; // s2
  __int16 v129; // r0
  float *v130; // r2
  float v131; // s2
  float v132; // s6
  float v133; // s8
  float v134; // s4
  float *v135; // r0
  float v136; // s8
  float v137; // s6
  __int16 v138; // r1
  float *v139; // r1
  float v140; // s6
  float v141; // s8
  float v142; // s10
  __int16 v143; // r1
  float v144; // s4
  float *v145; // r0
  float v146; // s8
  float v147; // s6
  int v148; // r4
  int j; // r6
  double v150; // d16
  float *v151; // r5
  float v152; // s2
  float v153; // s4
  float v154; // s2
  int v155; // r0
  float v156; // s6
  float v157; // s0
  float v158; // s10
  float v159; // s18
  float v160; // s16
  float v161; // s30
  float v162; // s19
  char v163; // r0
  float *v164; // r4
  char *v165; // r2
  float *v166; // r3
  CVector *v167; // r8
  int v168; // r0
  __int16 v169; // r1
  float v170; // s20
  float v171; // s17
  float v172; // s4
  int v173; // r5
  __int64 v174; // d16
  float v175; // s21
  float v176; // s4
  float v177; // s2
  float v178; // s0
  float v179; // s4
  float *v180; // r1
  float *v181; // r10
  float v182; // s2
  float v183; // s0
  int v184; // r0
  float v185; // s0
  float v186; // s2
  int v187; // r0
  int v188; // r9
  int v189; // r5
  unsigned int v190; // r0
  float v191; // s28
  _BOOL2 v192; // r10
  char *v193; // r4
  float v194; // s24
  float v195; // r0
  float32x2_t v196; // d0
  float v197; // s2
  int v198; // r0
  __int16 v199; // r5
  float v200; // s22
  float v201; // s24
  float v202; // s26
  const CVector *v203; // r4
  float *v204; // r6
  float v205; // s6
  float v206; // s8
  float v207; // s14
  float v208; // s10
  float v209; // s23
  float v210; // s23
  int v211; // r4
  float v212; // s0
  float v213; // s2
  int v214; // r0
  float *v215; // r4
  double v216; // d16
  double v217; // d16
  float v218; // s4
  float v219; // s6
  float v220; // s14
  float v221; // s8
  int v222; // r6
  float v223; // s21
  float v224; // s23
  char *v225; // r4
  float v226; // s0
  float v227; // s19
  float v228; // s19
  float v229; // s23
  int v230; // r5
  int v231; // r4
  float *v232; // r0
  float v233; // s0
  float v234; // s2
  float v235; // s25
  float v236; // s0
  float v237; // s0
  float v238; // r5
  float v239; // r0
  const CVector *v240; // r6
  float *v241; // r4
  float v242; // s6
  float v243; // s8
  float v244; // s14
  float v245; // s10
  float v246; // s17
  float v247; // s30
  float v248; // s28
  int v249; // r4
  float v250; // s0
  float v251; // s16
  int v252; // r0
  double v253; // d16
  float *v254; // r4
  float v255; // s0
  double v256; // d16
  float v257; // s2
  float v258; // s4
  float v259; // s2
  float v260; // s0
  float v261; // r5
  float v262; // s18
  float v263; // s2
  float v264; // s4
  int v265; // r0
  float v266; // s2
  float v267; // s4
  float v268; // s18
  float v269; // s4
  float v270; // r5
  float v271; // r0
  float v272; // s18
  int v273; // r0
  unsigned int v274; // r2
  int v275; // r1
  int v276; // r0
  FxSystem_c *v277; // r0
  int v278; // r0
  bool v279; // zf
  int v280; // r1
  int v281; // r3
  __int64 v282; // d16
  FxSystem_c *FxSystem; // r0
  CEventGroup *EventGlobalGroup; // r0
  float v285; // s0
  unsigned int v286; // r1
  float v287; // s28
  char *v288; // r4
  float *v289; // r6
  int v290; // r5
  unsigned int v291; // r9
  float v292; // s20
  char *v293; // r8
  float v294; // s0
  float v295; // s2
  bool v296; // fzf
  bool v297; // fnf
  unsigned int v298; // r0
  float v299; // r0
  float v300; // s0
  float v301; // s0
  float v302; // s2
  CPad *Pad; // r0
  CVehicle *v304; // r1
  int v305; // r4
  float v306; // s0
  float v307; // s2
  float v308; // s2
  float v309; // s0
  float v310; // s2
  float *v311; // [sp+34h] [bp-1CCh]
  int v312; // [sp+38h] [bp-1C8h]
  float *v313; // [sp+3Ch] [bp-1C4h]
  float v314; // [sp+40h] [bp-1C0h]
  float *v315; // [sp+44h] [bp-1BCh]
  int v316; // [sp+48h] [bp-1B8h]
  float *v317; // [sp+4Ch] [bp-1B4h]
  _QWORD *v318; // [sp+50h] [bp-1B0h]
  float *v319; // [sp+54h] [bp-1ACh]
  float *v320; // [sp+58h] [bp-1A8h]
  int v321; // [sp+5Ch] [bp-1A4h]
  _DWORD *v322; // [sp+60h] [bp-1A0h]
  SurfaceInfos_c *v323; // [sp+64h] [bp-19Ch]
  int v324; // [sp+68h] [bp-198h]
  int v325; // [sp+68h] [bp-198h]
  float *v326; // [sp+6Ch] [bp-194h]
  _BOOL4 v327; // [sp+6Ch] [bp-194h]
  int v328; // [sp+70h] [bp-190h]
  float *v329; // [sp+70h] [bp-190h]
  float *v330; // [sp+70h] [bp-190h]
  CPhysical *v331; // [sp+74h] [bp-18Ch]
  double v332; // [sp+78h] [bp-188h] BYREF
  float v333; // [sp+80h] [bp-180h]
  double v334; // [sp+88h] [bp-178h] BYREF
  float v335; // [sp+90h] [bp-170h]
  double v336; // [sp+98h] [bp-168h] BYREF
  float v337; // [sp+A0h] [bp-160h]
  double v338; // [sp+A8h] [bp-158h] BYREF
  float v339; // [sp+B0h] [bp-150h]
  char v340; // [sp+C8h] [bp-138h]
  char v341; // [sp+CBh] [bp-135h]
  double v342; // [sp+D8h] [bp-128h] BYREF
  float v343; // [sp+E0h] [bp-120h]
  double v344; // [sp+E4h] [bp-11Ch] BYREF
  float v345; // [sp+ECh] [bp-114h]
  float v346; // [sp+F4h] [bp-10Ch] BYREF
  int v347; // [sp+F8h] [bp-108h] BYREF
  _DWORD v348[2]; // [sp+FCh] [bp-104h] BYREF
  int v349; // [sp+104h] [bp-FCh] BYREF
  char v350[12]; // [sp+110h] [bp-F0h] BYREF
  int v351; // [sp+11Ch] [bp-E4h] BYREF
  __int64 v352; // [sp+128h] [bp-D8h] BYREF
  float v353; // [sp+130h] [bp-D0h]
  int v354; // [sp+134h] [bp-CCh] BYREF
  int v355; // [sp+140h] [bp-C0h] BYREF
  int v356; // [sp+14Ch] [bp-B4h] BYREF
  float v357; // [sp+15Ch] [bp-A4h] BYREF
  float v358; // [sp+160h] [bp-A0h]
  float v359; // [sp+164h] [bp-9Ch]
  float v360[3]; // [sp+168h] [bp-98h] BYREF
  float v361[3]; // [sp+174h] [bp-8Ch] BYREF
  float v362[3]; // [sp+180h] [bp-80h] BYREF
  float v363[4]; // [sp+18Ch] [bp-74h] BYREF
  int v364[25]; // [sp+19Ch] [bp-64h] BYREF

  v7 = this;
  ColModel = CEntity::GetColModel(this);
  v9 = *((__int16 *)v7 + 19);
  v324 = *(_DWORD *)(ColModel + 44);
  v364[0] = 0;
  v10 = CModelInfo::ms_modelInfoPtrs[v9];
  v11 = *((_DWORD *)v7 + 267);
  v12 = *((_DWORD *)v7 + 268);
  *((_BYTE *)v7 + 1500) = 0;
  *((_WORD *)v7 + 990) = 0;
  LOBYTE(v9) = *((_BYTE *)v7 + 1576);
  *((_DWORD *)v7 + 267) = v11 & 0xFFFFDFFF;
  *((_DWORD *)v7 + 268) = v12 & 0xFFFFFFFD;
  *((_BYTE *)v7 + 1576) = v9 & 0xDF;
  CVehicle::ProcessCarAlarm(v7);
  CVehicle::ActivateBombWhenEntered(v7);
  CVehicle::UpdateClumpAlpha(v7);
  v13 = (CPed *)*((_DWORD *)v7 + 281);
  if ( v13 && (CPed::IsPlayer(v13) || (v14 = (CPed *)*((_DWORD *)v7 + 282)) != 0 && CPed::IsPlayer(v14) == 1) )
  {
    if ( *((_BYTE *)v7 + 1994) )
    {
      if ( *((_BYTE *)v7 + 1994) == 1 )
        *((_BYTE *)v7 + 1994) = 2;
    }
    else
    {
      *((_BYTE *)v7 + 1994) = 1;
    }
  }
  else
  {
    *((_BYTE *)v7 + 1994) = 0;
  }
  (*(void (__fastcall **)(CBike *, int *))(*(_DWORD *)v7 + 268))(v7, v364);
  result = *((unsigned __int8 *)v7 + 58);
  if ( (result & 0xF8) != 0x10 )
  {
    v16 = *((_BYTE *)v7 + 1576);
    if ( (v16 & 0x10) != 0 )
    {
      v17 = *((_DWORD *)v7 + 5);
      if ( fabsf(*(float *)(v17 + 8)) > 0.35 || fabsf(*(float *)(v17 + 24)) > 0.5 )
      {
        v16 &= ~0x10u;
        *((_BYTE *)v7 + 1576) = v16;
      }
    }
    v18 = (_DWORD *)((char *)v7 + 1068);
    if ( (v364[0] & 2) == 0 && (v16 & 0x18) == 0 )
    {
      v19 = *((_DWORD *)v7 + 226);
      v20 = *((_DWORD *)v7 + 404);
      *((_DWORD *)v7 + 42) = *(_DWORD *)(v19 + 20);
      *((_DWORD *)v7 + 43) = *(_DWORD *)(v19 + 24);
      *((_DWORD *)v7 + 44) = *(_DWORD *)(v20 + 40);
      goto LABEL_36;
    }
    v21 = *(float *)algn_A01F9C;
    v22 = *(float *)&vecTestResistance;
    Multiply3x3((const CVector *)&v357, (CBike *)((char *)v7 + 84));
    if ( *((unsigned __int8 *)v7 + 58) > 7u )
    {
      v26 = v22;
      v23 = 1.0;
      goto LABEL_34;
    }
    v23 = 1.0;
    if ( *((float *)v7 + 457) >= 1.0 && *((float *)v7 + 458) >= 1.0 )
    {
      v27 = COERCE_FLOAT(CStats::GetFatAndMuscleModifier());
      v26 = 0.88;
      if ( *((float *)v7 + 459) >= 1.0 && *((float *)v7 + 460) >= 1.0 )
      {
        v23 = 88.0;
LABEL_34:
        v28 = v357;
        v29 = v358;
        v30 = *(float *)&CTimer::ms_fTimeStep;
        Multiply3x3((const CMatrix *)&v352, *((const CVector **)v7 + 5));
        powf(v21 * (float)(1.0 / (float)((float)(v29 * (float)(v29 * 1000.0)) + 1.0)), v30);
        CPhysical::ApplyTurnForce();
        Multiply3x3((const CMatrix *)&v352, *((const CVector **)v7 + 5));
        powf((float)(1.0 / (float)((float)(v28 * (float)(v23 * v28)) + 1.0)) * v26, v30);
        CPhysical::ApplyTurnForce();
        result = *((unsigned __int8 *)v7 + 58);
        if ( result >= 8 )
        {
          v31 = *((_DWORD *)v7 + 226);
          v32 = *(_QWORD *)(v31 + 20);
          *((_DWORD *)v7 + 44) = *(_DWORD *)(v31 + 28);
          *((_QWORD *)v7 + 21) = v32;
        }
LABEL_36:
        v33 = 0;
        v34 = (unsigned int *)((char *)v7 + 28);
        v35 = (*((_DWORD *)v7 + 7) & 0x10) == 0;
        if ( (*((_DWORD *)v7 + 7) & 0x10) == 0 )
          v35 = (result & 0xF0) == 32;
        if ( !v35 )
        {
LABEL_69:
          v51 = *((_DWORD *)v7 + 501);
          v52 = (unsigned __int8)CWorld::bForceProcessControl;
          if ( v51 )
          {
            *((_DWORD *)v7 + 268) |= 2u;
            if ( v52 )
            {
              if ( (*(_BYTE *)(v51 + 28) & 0x20) != 0 )
                goto LABEL_87;
            }
          }
          v53 = *((_DWORD *)v7 + 502);
          if ( v53 )
          {
            *((_DWORD *)v7 + 268) |= 2u;
            if ( v52 )
            {
              if ( (*(_BYTE *)(v53 + 28) & 0x20) != 0 )
                goto LABEL_87;
            }
          }
          if ( (v54 = *((_DWORD *)v7 + 503)) != 0
            && (*((_DWORD *)v7 + 268) |= 2u, v52)
            && (*(_BYTE *)(v54 + 28) & 0x20) != 0
            || (v55 = *((_DWORD *)v7 + 504), v56 = *((_DWORD *)v7 + 268), v55)
            && (v56 |= 2u, *v18 = *v18, *((_DWORD *)v7 + 268) = v56, v52)
            && (*(_BYTE *)(v55 + 28) & 0x20) != 0 )
          {
LABEL_87:
            result = *v34 | 0x40;
            *v34 = result;
            return result;
          }
          if ( (v56 & 2) != 0 )
          {
            v33 = 0;
            *((_BYTE *)v7 + 188) = 0;
          }
          (*(void (__fastcall **)(CBike *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v7 + 228))(
            v7,
            0,
            0,
            0,
            0,
            0,
            49);
          if ( *((float *)v7 + 55) <= 0.0
            || fabsf(
                 (float)((float)(*((float *)v7 + 57) * **((float **)v7 + 5))
                       + (float)(*((float *)v7 + 58) * *(float *)(*((_DWORD *)v7 + 5) + 4)))
               + (float)(*((float *)v7 + 59) * *(float *)(*((_DWORD *)v7 + 5) + 8))) <= 0.5
            || (float)((float)((float)(*((float *)v7 + 18) * *((float *)v7 + 18))
                             + (float)(*((float *)v7 + 19) * *((float *)v7 + 19)))
                     + (float)(*((float *)v7 + 20) * *((float *)v7 + 20))) >= 0.1 )
          {
            v57 = (*((unsigned __int8 *)v7 + 1576) >> 3) & 1;
          }
          else
          {
            v57 = 1;
          }
          v331 = v7;
          v321 = v33;
          v322 = (_DWORD *)((char *)v7 + 1068);
          if ( v33 == 1 )
          {
            CPhysical::SkipPhysics(v7);
            *v18 &= 0xDEFFFFFF;
            if ( (*((_BYTE *)v7 + 1576) & 0x10) != 0 )
            {
              v58 = *((float *)v7 + 406);
              if ( v58 < 0.34907 )
                *((float *)v7 + 406) = v58 + (float)(*(float *)&CTimer::ms_fTimeStep * 0.017453);
              v59 = powf(0.97, *(float *)&CTimer::ms_fTimeStep);
              v60 = *((_DWORD *)v7 + 5);
              v61 = *(float *)(v60 + 8);
              v62 = v61 < 1.0;
              if ( v61 <= 1.0 )
                v62 = v61 < -1.0;
              if ( v62 )
              {
                v63 = -1.0;
              }
              else
              {
                v63 = 1.0;
                if ( v61 <= 1.0 )
                  v63 = *(float *)(v60 + 8);
              }
              v66 = *((float *)v7 + 408);
              v67 = (float)(v59 * v66) - (float)((float)(1.0 - v59) * (float)(asinf(v63) + 0.2618));
              *((float *)v7 + 408) = v67;
              *((float *)v7 + 407) = v67;
            }
LABEL_353:
            v5.n64_u32[0] = 1132068864;
            if ( *((float *)v7 + 307) >= 250.0 || (*((_BYTE *)v7 + 58) & 0xF8) == 0x28 )
            {
              v277 = (FxSystem_c *)*((_DWORD *)v7 + 355);
              *((_DWORD *)v7 + 500) = 0;
              if ( v277 )
              {
                FxSystem_c::Kill(v277);
                *((_DWORD *)v7 + 355) = 0;
              }
            }
            else
            {
              v278 = *((_DWORD *)v7 + 361);
              v279 = v278 == 10;
              if ( v278 != 10 )
              {
                v278 = *((_DWORD *)v7 + 6);
                v279 = v278 == 0;
              }
              if ( !v279 && !*((_DWORD *)v7 + 355) )
              {
                v280 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)v7 + 19)]) + 116);
                v281 = *(_DWORD *)(v278 + 4) + 16;
                v282 = *(_QWORD *)(v280 + 84);
                v353 = *(float *)(v280 + 92);
                v352 = v282;
                FxSystem = (FxSystem_c *)FxManager_c::CreateFxSystem(
                                           (int)&g_fxMan,
                                           (CKeyGen *)"fire_bike",
                                           (int)&v352,
                                           v281,
                                           0);
                *((_DWORD *)v7 + 355) = FxSystem;
                if ( FxSystem )
                {
                  FxSystem_c::Play(FxSystem);
                  CEventVehicleOnFire::CEventVehicleOnFire((CEventVehicleOnFire *)&v357, v7);
                  EventGlobalGroup = (CEventGroup *)GetEventGlobalGroup();
                  CEventGroup::Add(EventGlobalGroup, (CEvent *)&v357, 0);
                  CEventVehicleOnFire::~CEventVehicleOnFire((CEventVehicleOnFire *)&v357);
                }
              }
              v285 = *((float *)v7 + 500)
                   + (float)(unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
              *((float *)v7 + 500) = v285;
              if ( v285 > 5000.0 )
                (*(void (__fastcall **)(CBike *, _DWORD, _DWORD))(*(_DWORD *)v7 + 168))(v7, *((_DWORD *)v7 + 517), 0);
            }
            CVehicle::ProcessDelayedExplosion(v7);
            v6.n64_u32[0] = 0;
            v330 = (float *)((char *)v7 + 72);
            v287 = 0.0;
            v288 = (char *)v7 + 1828;
            v289 = (float *)((char *)v7 + 1844);
            v290 = -44;
            v291 = 0;
            v292 = (float)((float)(*((float *)v7 + 18) * *((float *)v7 + 18))
                         + (float)(*((float *)v7 + 19) * *((float *)v7 + 19)))
                 + (float)(*((float *)v7 + 20) * *((float *)v7 + 20));
            do
            {
              v293 = &v288[v291];
              v294 = *(float *)&v288[v291];
              if ( v292 > 0.04 && !v291 )
              {
                v295 = *v289 - v294;
                if ( v295 > 0.3 )
                {
                  v296 = v295 == v287;
                  v297 = v295 < v287;
                  v298 = *((unsigned __int8 *)v331 + 58);
                  if ( v298 >> 3 )
                  {
                    if ( !v297 && !v296 && v298 >> 3 == 3 )
                      v287 = *v289 - v294;
                  }
                  else if ( !v297 && !v296 )
                  {
                    v287 = *v289 - v294;
                  }
                }
              }
              v299 = *(float *)&v288[v291];
              if ( v294 < 1.0 )
              {
                v286 = *((unsigned __int8 *)v331 + 58);
                if ( v286 <= 7 )
                {
                  v1.n64_f32[0] = (float)SurfaceInfos_c::GetRoughness(
                                           (SurfaceInfos_c *)&g_surfaceInfos,
                                           HIBYTE(v289[v290 + 4]));
                  v299 = *(float *)&v288[v291];
                  v1.n64_f32[0] = v1.n64_f32[0] * 0.1;
                  v6.n64_u64[0] = vmax_f32(v6, v1).n64_u64[0];
                }
              }
              v289[v291 / 4] = v299;
              v291 += 4;
              v290 += 11;
              *(_DWORD *)v293 = 1065353216;
            }
            while ( v291 != 16 );
            v300 = 0.0;
            if ( v6.n64_f32[0] < 0.29 )
              v300 = v287;
            if ( (CTimer::m_snTimeInMilliseconds & 0x7FFu) > 0x320 )
            {
              v287 = v300;
              v6.n64_u32[0] = 0;
            }
            if ( v287 > 0.0 && *((unsigned __int8 *)v331 + 58) <= 7u )
            {
              v301 = (float)((float)(*((float *)v331 + 18) * *((float *)v331 + 18))
                           + (float)(*((float *)v331 + 19) * *((float *)v331 + 19)))
                   + (float)(*((float *)v331 + 20) * *((float *)v331 + 20));
              if ( v301 > 0.01 )
              {
                v1.n64_f32[0] = sqrtf(v301);
                if ( v287 <= 0.0 )
                {
                  v3.n128_u32[0] = 1125515264;
                  v1.n64_f32[0] = (float)((float)((float)((float)(v6.n64_f32[0] * 200.0) * v1.n64_f32[0]) * 2000.0)
                                        / *((float *)v331 + 36))
                                + 40.0;
                  v302 = *(float *)&CTimer::ms_fTimeStep * 5000.0;
                  v1.n64_u32[0] = vmin_f32(v1, (float32x2_t)v3.n128_u64[0]).n64_u32[0];
                }
                else
                {
                  v1.n64_f32[0] = (float)((float)((float)((float)(v287 * 200.0) * v1.n64_f32[0]) * 2000.0)
                                        / *((float *)v331 + 36))
                                + 100.0;
                  v302 = *(float *)&CTimer::ms_fTimeStep * 20000.0;
                  v1.n64_u32[0] = vmin_f32(v1, v5).n64_u32[0];
                }
                Pad = (CPad *)CPad::GetPad(0, v286);
                CPad::StartShake(
                  Pad,
                  (unsigned int)(float)(v302 / (float)(unsigned int)v1.n64_f32[0]),
                  (unsigned int)v1.n64_f32[0],
                  0);
              }
            }
            v35 = (*v322 & 0x2000) == 0;
            v304 = (CVehicle *)(*v322 & 0xDEFFFFFF);
            *v322 = v304;
            if ( v35 )
              CCarCtrl::ScanForPedDanger(v331, v304);
            if ( (*((_DWORD *)v331 + 17) & 0xC) == 0xC )
            {
              *((_QWORD *)v7 + 13) = 0LL;
              *((_QWORD *)v7 + 14) = 0LL;
              *(_QWORD *)v330 = 0LL;
              *((_QWORD *)v7 + 10) = 0LL;
              *((_QWORD *)v7 + 11) = 0LL;
              *((_QWORD *)v7 + 12) = 0LL;
            }
            else if ( !v321
                   && (*((float *)v331 + 296) == 0.0 || (*((_BYTE *)v331 + 58) & 0xF8) == 0x28)
                   && fabsf(*v330) < 0.005
                   && fabsf(*((float *)v331 + 19)) < 0.005
                   && fabsf(*((float *)v331 + 20)) < 0.005 )
            {
              if ( *((float *)v331 + 55) <= 0.0 || (v305 = *((_DWORD *)v331 + 56), v305 != FindPlayerPed(-1)) )
              {
                *((_DWORD *)v331 + 18) = 0;
                *((_DWORD *)v331 + 19) = 0;
                *((_DWORD *)v331 + 20) = 0;
                *((_DWORD *)v331 + 23) = 0;
              }
            }
            if ( (v364[0] & 2) != 0 || (result = *((unsigned __int8 *)v331 + 1576), (result & 0x18) != 0) )
            {
              Multiply3x3((const CMatrix *)&v357, *((const CVector **)v331 + 5));
              if ( (v364[0] & 2) != 0 )
              {
                CPhysical::ApplyTurnForce();
                *((_BYTE *)v331 + 1576) &= ~0x10u;
              }
              else
              {
                CPhysical::ApplyTurnForce();
              }
              result = *((unsigned __int8 *)v331 + 58);
              if ( result <= 7 )
              {
                v306 = *((float *)v331 + 465);
                if ( v306 > 0.0
                  || *((float *)v331 + 466) > 0.0
                  || (v307 = *(float *)(*((_DWORD *)v331 + 5) + 24), v307 <= 0.0)
                  || *((float *)v331 + 467) <= 0.0 && *((float *)v331 + 468) <= 0.0 )
                {
                  result = (unsigned int)v331 + 1868;
                  if ( *((float *)v331 + 467) <= 0.0 )
                  {
                    result = (unsigned int)v331 + 1872;
                    if ( *((float *)v331 + 468) <= 0.0 )
                    {
                      result = *((_DWORD *)v331 + 5);
                      v308 = *(float *)(result + 24);
                      if ( v308 < 0.0 )
                      {
                        if ( v306 > 0.0 || (result = (unsigned int)v331 + 1864, *((float *)v331 + 466) > 0.0) )
                        {
                          CStats::GetFatAndMuscleModifier();
                          CPhysical::ApplyTurnForce();
                          v347 = 0;
                          v348[0] = 0;
                          v348[1] = 1065353216;
                          CrossProduct((const CVector *)&v352, (const CVector *)&v347);
                          CVector::Normalise((CVector *)&v352);
                          return CPhysical::ApplyTurnForce();
                        }
                      }
                    }
                  }
                }
                else
                {
                  CStats::GetFatAndMuscleModifier();
                  CPhysical::ApplyTurnForce();
                  CPhysical::ApplyTurnForce();
                  v309 = sqrtf(
                           (float)((float)(*((float *)v331 + 18) * *((float *)v331 + 18))
                                 + (float)(*((float *)v331 + 19) * *((float *)v331 + 19)))
                         + (float)(*((float *)v331 + 20) * *((float *)v331 + 20)));
                  v310 = *((float *)v331 + 36)
                       * (float)(*(float *)(*((_DWORD *)v331 + 404) + 52)
                               * (float)(*((float *)v331 + 406)
                                       * (float)(*(float *)&CTimer::ms_fTimeStep * (float)(v309 * 0.01))));
                  CPhysical::ApplyMoveForce(
                    v331,
                    v309 * (float)(**((float **)v331 + 5) * v310),
                    v309 * (float)(*(float *)(*((_DWORD *)v331 + 5) + 4) * v310),
                    v309 * (float)(v310 * *(float *)(*((_DWORD *)v331 + 5) + 8)));
                  result = (unsigned int)v331 + 1628;
                  *((float *)v331 + 407) = *((float *)v331 + 407)
                                         + (float)((float)(*(float *)&CTimer::ms_fTimeStep * -0.1)
                                                 * *((float *)v331 + 406));
                }
              }
            }
            return result;
          }
          if ( !(*((unsigned __int8 *)v7 + 1071) << 31) )
            (*(void (__fastcall **)(CBike *, int))(*(_DWORD *)v7 + 96))(v7, 1);
          if ( (v364[0] & 2) == 0 && (*((_BYTE *)v7 + 1576) & 0x18) == 0 )
          {
            v64 = *((float *)v7 + 294);
            if ( *(float *)(*((_DWORD *)v7 + 5) + 8) >= 0.0 )
            {
              if ( v64 < 0.43633 )
              {
                v65 = 0.0087266;
                goto LABEL_110;
              }
            }
            else if ( v64 > -0.43633 )
            {
              v65 = -0.0087266;
LABEL_110:
              *((float *)v7 + 294) = v64 + (float)(*(float *)&CTimer::ms_fTimeStep * v65);
            }
          }
          v68 = *((_DWORD *)v7 + 39);
          if ( *((unsigned __int8 *)v7 + 58) <= 7u )
          {
            if ( *((_DWORD *)v7 + 281) )
            {
              Association = (float *)RpAnimBlendClumpGetAssociation();
              if ( Association )
              {
                if ( Association[6] > 0.5 )
                {
                  v70 = Association[8];
                  if ( v70 > 0.06 && v70 < 0.14 )
                  {
                    v71 = 0.6;
                    if ( CCullZones::DoExtraAirResistanceForPlayer((CCullZones *)Association) )
                      v71 = 0.85;
                    v62 = *((float *)v7 + 296) <= 0.5;
                    *((float *)v7 + 39) = *((float *)v7 + 39) * v71;
                    if ( !v62 )
                    {
                      v72 = (float *)*((_DWORD *)v7 + 5);
                      v73 = v72[4];
                      v74 = v72[5];
                      v75 = v72[6];
                      if ( (float)((float)((float)(*((float *)v7 + 18) * v73) + (float)(*((float *)v7 + 19) * v74))
                                 + (float)(*((float *)v7 + 20) * v75)) > 0.25 )
                      {
                        v76 = *(float *)&CTimer::ms_fTimeStep * (float)((float)(*((float *)v7 + 36) * 0.2) * 0.008);
                        CPhysical::ApplyMoveForce(v7, v73 * v76, v74 * v76, v75 * v76);
                        *((_BYTE *)v7 + 1576) |= 0x20u;
                      }
                    }
                  }
                }
              }
            }
          }
          v318 = (_QWORD *)((char *)v7 + 2004);
          v77 = *((_DWORD *)v7 + 17);
          CPhysical::ProcessControl(v7);
          *((_DWORD *)v7 + 39) = v68;
          CBike::ProcessBuoyancy(v7);
          if ( (v77 & 0x100) == 0 && *((unsigned __int8 *)v7 + 69) << 31 )
          {
            v78 = (CPed *)*((_DWORD *)v7 + 281);
            if ( v78 && CPed::IsPlayer(v78) )
            {
              CPlayerPed::ResetPlayerBreath(*((CPlayerPed **)v7 + 281));
            }
            else if ( *((_BYTE *)v7 + 1164) )
            {
              v79 = (char *)v7 + 1128;
              v80 = 0;
              do
              {
                v81 = *(CPed **)&v79[4 * v80];
                if ( v81 && CPed::IsPlayer(v81) == 1 )
                  CPlayerPed::ResetPlayerBreath(*(CPlayerPed **)&v79[4 * v80]);
                ++v80;
              }
              while ( v80 < *((unsigned __int8 *)v7 + 1164) );
            }
          }
          v82 = (float *)v7;
          v314 = v10;
          v83 = (float *)v348;
          v84 = (float *)((char *)v7 + 1952);
          v316 = v57;
          v85 = (float *)((char *)v7 + 1660);
          v86 = &v357;
          v87 = 24;
          v88 = 1.0 - (float)(v82[484] / *v84);
          v311 = v82 + 481;
          v89 = 1.0 - (float)(v82[482] / v82[486]);
          v313 = v82 + 483;
          v90 = 1.0 - (float)(v82[481] / v82[485]);
          v91 = 1.0 - (float)(v82[483] / v82[487]);
          v326 = v82 + 457;
          v92 = v82[460] - v88;
          v1.n64_f32[1] = 1.0 - v91;
          v93 = v82[459] - v91;
          v94 = 1.0 - v88;
          v1.n64_f32[0] = (float)(v82[457] - v90) / (float)(1.0 - v90);
          v95 = (float)(v82[458] - v89) / (float)(1.0 - v89);
          v82[457] = v1.n64_f32[0];
          v96 = (unsigned __int32 *)(v82 + 458);
          v82[458] = v95;
          v320 = v82 + 459;
          v82[459] = v93 / v1.n64_f32[1];
          v317 = v82 + 460;
          v82[460] = v92 / v94;
          v319 = v82 + 458;
          while ( 1 )
          {
            if ( v1.n64_f32[0] < 1.0 )
            {
              v97 = (const CVector *)*((_DWORD *)v331 + 5);
              v98 = *v85;
              v99 = (float *)((char *)v97 + 48);
              if ( !v97 )
                v99 = (float *)((char *)v331 + 4);
              v100 = v99[2];
              v101 = *(v85 - 1) - v99[1];
              *(v83 - 1) = *(v85 - 2) - *v99;
              *v83 = v101;
              v83[1] = v98 - v100;
              v102 = (float *)(*(_DWORD *)(v324 + 16) + v87);
              v103 = *(v102 - 2) - *(v102 - 6);
              v104 = *v102;
              v105 = *(v102 - 4);
              *((float *)&v338 + 1) = *(v102 - 1) - *(v102 - 5);
              *(float *)&v338 = v103;
              v339 = v104 - v105;
              Multiply3x3((const CMatrix *)&v352, v97);
              v106 = v352;
              v86[2] = v353;
              *(_QWORD *)v86 = v106;
              CVector::Normalise((CVector *)v86);
            }
            if ( v87 == 120 )
              break;
            v1.n64_u32[0] = *v96;
            v83 += 3;
            v85 += 11;
            v87 += 32;
            v86 += 3;
            ++v96;
          }
          v107 = (CVector *)&v357;
          v108 = (float *)&v347;
          *((_DWORD *)v331 + 470) = 0;
          v109 = 16;
          *((_DWORD *)v331 + 471) = 0;
          v110 = -44;
          *((_BYTE *)v331 + 1891) = 0;
          v111 = 0;
          v328 = 0;
          v112 = 0;
          *((_BYTE *)v331 + 1890) = 0;
          do
          {
            v113 = v326[v111];
            if ( v113 >= 1.0 )
            {
              Multiply3x3((const CMatrix *)&v352, *((const CVector **)v331 + 5));
              v118 = v352;
              v108[2] = v353;
              *(_QWORD *)v108 = v118;
            }
            else
            {
              v114 = &v326[v110];
              v115 = *((_DWORD *)v331 + 226);
              v116 = *(float *)(v115 + 192);
              v117 = *(float *)(v115 + 172);
              if ( (v112 | 1) == 3 )
                v116 = 1.0 - v116;
              if ( v114[6] <= 0.35 )
                CPhysical::ApplySpringCollision(v331, v117, v107, (CVector *)v108, v113, v116, &v363[v111]);
              else
                CPhysical::ApplySpringCollisionAlt(
                  v331,
                  v117,
                  v107,
                  (CVector *)v108,
                  v113,
                  v116,
                  (CVector *)(v114 + 4),
                  &v363[v111]);
              v119 = v112 > 1;
              SkidmarkType = SurfaceInfos_c::GetSkidmarkType(
                               (SurfaceInfos_c *)&g_surfaceInfos,
                               *((unsigned __int8 *)&v326[v328 - 35] - 1));
              *((_DWORD *)v331 + v119 + 470) = SkidmarkType;
              if ( SkidmarkType == 2 )
                *((_BYTE *)v331 + v119 + 1890) = 1;
            }
            v109 += 32;
            v110 += 11;
            ++v111;
            v108 += 3;
            v107 = (CVector *)((char *)v107 + 12);
            ++v112;
            v328 += 11;
          }
          while ( v109 != 144 );
          v121 = 0;
          for ( i = 0; i != 48; i += 12 )
          {
            CPhysical::GetSpeed();
            v123 = v338;
            v124 = (float *)((char *)&v352 + i);
            v124[2] = v339;
            *(double *)v124 = v123;
            if ( *(_DWORD *)((char *)v318 + v121) )
            {
              CPhysical::GetSpeed();
              v125 = v124[1] - *((float *)&v338 + 1);
              v126 = v124[2] - v339;
              *v124 = *v124 - *(float *)&v338;
              v124[1] = v125;
              v124[2] = v126;
            }
            v121 += 4;
          }
          v127 = *v326;
          if ( *v326 < 1.0 || (v128 = *v319, *v319 < 1.0) )
          {
            v129 = 0;
            v130 = (float *)((char *)v331 + 44 * (v127 >= 1.0));
            v131 = v130[419];
            if ( v131 > 0.35 )
            {
              v132 = -v130[418];
              v133 = -v130[417];
              v359 = -v131;
              v358 = v132;
              v357 = v133;
            }
            v128 = *v319;
            if ( *v319 < 1.0 )
              v129 = 1;
            v134 = *((float *)v331 + 11 * v129 + 419);
            if ( v134 > 0.35 )
            {
              v135 = (float *)((char *)v331 + 44 * v129);
              v136 = v135[417];
              v137 = -v135[418];
              v360[2] = -v134;
              v360[1] = v137;
              v360[0] = -v136;
            }
          }
          if ( *v320 < 1.0 || *v317 < 1.0 )
          {
            v138 = 3;
            if ( *v320 < 1.0 )
              v138 = 2;
            v139 = (float *)((char *)v331 + 44 * v138);
            v140 = v139[419];
            if ( v140 > 0.35 )
            {
              v141 = -v139[418];
              v142 = -v139[417];
              v361[2] = -v140;
              v361[1] = v141;
              v361[0] = v142;
            }
            v143 = 2;
            if ( *v317 < 1.0 )
              v143 = 3;
            v144 = *((float *)v331 + 11 * v143 + 419);
            if ( v144 > 0.35 )
            {
              v145 = (float *)((char *)v331 + 44 * v143);
              v146 = v145[417];
              v147 = -v145[418];
              v362[2] = -v144;
              v362[1] = v147;
              v362[0] = -v146;
            }
          }
          if ( v127 < 1.0 )
          {
            CPhysical::ApplySpringDampening(
              v331,
              *(float *)(*((_DWORD *)v331 + 226) + 176),
              v363[0],
              (CVector *)&v357,
              (CVector *)&v347,
              (CVector *)&v352);
            v128 = *v319;
          }
          if ( v128 < 1.0 )
            CPhysical::ApplySpringDampening(
              v331,
              *(float *)(*((_DWORD *)v331 + 226) + 176),
              v363[1],
              (CVector *)v360,
              (CVector *)&v349,
              (CVector *)&v354);
          if ( *v320 < 1.0 )
            CPhysical::ApplySpringDampening(
              v331,
              *(float *)(*((_DWORD *)v331 + 226) + 176),
              v363[2],
              (CVector *)v361,
              (CVector *)v350,
              (CVector *)&v355);
          if ( *v317 < 1.0 )
            CPhysical::ApplySpringDampening(
              v331,
              *(float *)(*((_DWORD *)v331 + 226) + 176),
              v363[3],
              (CVector *)v362,
              (CVector *)&v351,
              (CVector *)&v356);
          v148 = 0;
          for ( j = 0; j != 48; j += 12 )
          {
            CPhysical::GetSpeed();
            v150 = v338;
            v151 = (float *)((char *)&v352 + j);
            v151[2] = v339;
            *(double *)v151 = v150;
            if ( *(_DWORD *)((char *)v318 + v148) )
            {
              CPhysical::GetSpeed();
              v152 = v151[1] - *((float *)&v338 + 1);
              v153 = v151[2] - v339;
              *v151 = *v151 - *(float *)&v338;
              v151[1] = v152;
              v151[2] = v153;
            }
            v148 += 4;
          }
          v346 = (float)((float)(*((float *)v331 + 18) * *(float *)(*((_DWORD *)v331 + 5) + 16))
                       + (float)(*((float *)v331 + 19) * *(float *)(*((_DWORD *)v331 + 5) + 20)))
               + (float)(*((float *)v331 + 20) * *(float *)(*((_DWORD *)v331 + 5) + 24));
          v315 = (float *)((char *)v331 + 1184);
          v154 = COERCE_FLOAT(
                   cTransmission::CalculateDriveAcceleration(
                     (cTransmission *)(*((_DWORD *)v331 + 226) + 44),
                     (const float *)v331 + 296,
                     (unsigned __int8 *)v331 + 1216,
                     (float *)v331 + 305,
                     &v346,
                     0,
                     0,
                     *((_BYTE *)v331 + 2073),
                     byte_796817));
          v155 = *((_DWORD *)v331 + 226);
          v156 = *((float *)v331 + 297) * *(float *)(v155 + 148);
          v157 = *(float *)&CTimer::ms_fTimeStep;
          if ( ((*((unsigned __int8 *)v331 + 58) >> 3) | 8) != 8 && (*(_BYTE *)(v155 + 208) & 8) != 0 )
          {
            v161 = 1.0;
            v312 = 1;
            v159 = 1.0;
            v160 = 1.0;
          }
          else
          {
            v158 = *(float *)(v155 + 152);
            v159 = v158 + v158;
            v312 = 0;
            v160 = *(float *)(v155 + 168) + *(float *)(v155 + 168);
            v161 = (float)(1.0 - v158) + (float)(1.0 - v158);
          }
          v162 = v154 / *((float *)v331 + 38);
          v163 = *((_BYTE *)v331 + 2073);
          v164 = (float *)((char *)v331 + 1860);
          *((_BYTE *)v331 + 2072) = 0;
          v165 = (char *)v331 + 1668;
          *((_BYTE *)v331 + 2073) = 0;
          *((_BYTE *)v331 + 2074) = v163;
          v166 = (float *)((char *)v331 + 1584);
          v167 = (CPhysical *)((char *)v331 + 1580);
          v329 = (float *)((char *)v331 + 1588);
          v168 = 0;
          v169 = 0;
          v323 = (CPhysical *)((char *)v331 + 1860);
          v170 = v156 * v157;
          v171 = 2.0 - v160;
          do
          {
            v172 = 4.0;
            if ( *(v164 - 8) >= 1.0 && (v172 = *v164 - v157, v172 <= 0.0) )
            {
              *v164 = 0.0;
            }
            else
            {
              *v164 = v172;
              v173 = *((unsigned __int8 *)v331 + 2072);
              *((_BYTE *)v331 + 2072) = v173 + 1;
              if ( (v169 & 0xFFFE) == 2 )
                *((_BYTE *)v331 + 2073) = 1;
              if ( v173 )
              {
                *(float *)v167 = *(float *)&v165[v168] + *(float *)v167;
                *v166 = *(float *)((char *)v331 + v168 + 1672) + *v166;
                *v329 = *(float *)&v165[v168 + 8] + *v329;
              }
              else
              {
                v174 = *(_QWORD *)&v165[v168];
                *((_DWORD *)v331 + 397) = *(_DWORD *)&v165[v168 + 8];
                *(_QWORD *)v167 = v174;
              }
            }
            v168 += 44;
            ++v164;
            ++v169;
          }
          while ( v168 != 176 );
          v175 = 1.0;
          if ( v312 )
            v171 = 1.0;
          v7 = v331;
          if ( *((_BYTE *)v331 + 2072) )
          {
            v176 = 1.0 / (float)*((unsigned __int8 *)v331 + 2072);
            v177 = v176 * *v166;
            v178 = v176 * *(float *)v167;
            v179 = v176 * *v329;
            *(float *)v167 = v178;
            *v166 = v177;
            *v329 = v179;
            v180 = (float *)*((_DWORD *)v331 + 5);
            if ( (float)((float)((float)(v178 * v180[8]) + (float)(v177 * v180[9])) + (float)(v179 * v180[10])) < -0.5 )
            {
              *(float *)v167 = -v178;
              *v166 = -v177;
              *v329 = -v179;
            }
          }
          else
          {
            *((_DWORD *)v331 + 395) = 0;
            *v166 = 0.0;
            *v329 = 1.0;
            v180 = (float *)*((_DWORD *)v331 + 5);
          }
          v181 = v326;
          v182 = *v326;
          v183 = *v319;
          LODWORD(v342) = 0;
          v184 = *(_DWORD *)(v324 + 16);
          HIDWORD(v342) = *(_DWORD *)(v184 + 4);
          v327 = v182 >= v183;
          v343 = (float)(*(float *)(v184 + 8) - (float)(v181[v327] * *v311))
               - (float)(*(float *)(LODWORD(v314) + 88) * 0.5);
          Multiply3x3((const CMatrix *)&v338, (const CVector *)v180);
          v343 = v339;
          v342 = v338;
          v185 = *v317;
          v186 = *v320;
          LODWORD(v344) = 0;
          HIDWORD(v344) = *(_DWORD *)(*(_DWORD *)(v324 + 16) + 100);
          v187 = 3;
          if ( v186 < v185 )
            v187 = 2;
          v188 = v187;
          v345 = (float)(*(float *)(*(_DWORD *)(v324 + 16) + 72) - (float)(v181[v187] * *v313))
               - (float)(*(float *)(LODWORD(v314) + 92) * 0.5);
          Multiply3x3((const CMatrix *)&v338, *((const CVector **)v331 + 5));
          v345 = v339;
          v344 = v338;
          v189 = *((_DWORD *)v331 + 226);
          v190 = *((unsigned __int8 *)v331 + 58);
          v191 = (float)((float)(*((float *)v331 + 490) * 0.004) * *(float *)(v189 + 40)) * 0.25;
          if ( v190 >= 8 && (*((_BYTE *)v331 + 1576) & 0x18) == 0x10 )
          {
            v1.n64_u32[0] = *((_DWORD *)v331 + 406);
            if ( v1.n64_f32[0] < 0.34907 )
            {
              v1.n64_f32[0] = v1.n64_f32[0] + (float)(*(float *)&CTimer::ms_fTimeStep * 0.02618);
              *((_DWORD *)v331 + 406) = v1.n64_u32[0];
            }
            v192 = v327;
          }
          else if ( fabsf(*((float *)v331 + 18)) < 0.01
                 && fabsf(*((float *)v331 + 19)) < 0.01
                 && *((float *)v331 + 294) == 0.0 )
          {
            v1.n64_f32[0] = powf(0.96, *(float *)&CTimer::ms_fTimeStep) * *((float *)v331 + 406);
            *((_DWORD *)v331 + 406) = v1.n64_u32[0];
            v192 = v327;
          }
          else
          {
            LODWORD(v4) = 1.0;
            if ( v346 <= 0.01 || *(float *)v323 <= 0.0 && *((float *)v331 + 466) <= 0.0 )
            {
              v1.n64_u64[0] = v4;
              v192 = v327;
            }
            else
            {
              v1.n64_u64[0] = v4;
              v192 = v327;
              if ( v190 <= 7 )
              {
                v341 = 1;
                v340 = 60;
                v193 = (char *)v331 + 44 * (__int16)v188;
                v194 = v191 * (float)(*(float *)(*((_DWORD *)v331 + 404) + 32) * 4.0);
                v5.n64_f32[0] = COERCE_FLOAT(SurfaceInfos_c::GetAdhesiveLimit()) * v194;
                if ( SurfaceInfos_c::GetAdhesionGroup((SurfaceInfos_c *)&g_surfaceInfos, (unsigned __int8)v193[1687]) == 3
                  || SurfaceInfos_c::GetAdhesionGroup((SurfaceInfos_c *)&g_surfaceInfos, (unsigned __int8)v193[1687]) == 4 )
                {
                  v5.n64_f32[0] = v5.n64_f32[0] * *(float *)(*((_DWORD *)v331 + 404) + 36);
                }
                v1.n64_f32[0] = v5.n64_f32[0] / (float)(v346 * v346);
                v5.n64_u32[0] = 1.0;
                v196.n64_u64[0] = vmin_f32(v1, v5).n64_u64[0];
                v195 = asinf(v196.n64_f32[0]);
                v189 = *((_DWORD *)v331 + 226);
                v196.n64_f32[0] = v195 / (float)((float)(*(float *)(v189 + 160) * 3.1416) / 180.0);
                v197 = *((float *)v331 + 294);
                if ( v197 >= 0.0 || *((float *)v331 + 407) >= 0.0 )
                {
                  if ( v197 > 0.0 && *((float *)v331 + 407) > 0.0 )
                    v196.n64_f32[0] = v196.n64_f32[0] + v196.n64_f32[0];
                }
                else
                {
                  v196.n64_f32[0] = v196.n64_f32[0] + v196.n64_f32[0];
                }
                v1.n64_u64[0] = vmin_f32(v196, v5).n64_u64[0];
                v190 = *((unsigned __int8 *)v331 + 58);
              }
            }
            if ( v190 < 8 )
              LODWORD(v4) = v1.n64_u32[0];
            v1.n64_f32[0] = *((float *)v331 + 294) * *(float *)&v4;
            *((_DWORD *)v331 + 406) = v1.n64_u32[0];
          }
          v198 = *(_DWORD *)(v189 + 208);
          v199 = v188;
          v200 = *((float *)v331 + 18);
          v201 = *((float *)v331 + 19);
          v202 = *((float *)v331 + 20);
          v325 = v198 & 0x800000;
          if ( (v198 & 0x800000) == 0 )
          {
            if ( *(float *)v323 <= 0.0 && *((float *)v331 + 466) <= 0.0 )
            {
              v212 = *((float *)v331 + 475) * 0.95;
              v213 = v212 + *((float *)v331 + 473);
              *((float *)v331 + 475) = v212;
              *((float *)v331 + 473) = v213;
            }
            else
            {
              v203 = (const CVector *)*((_DWORD *)v331 + 5);
              v335 = 0.0;
              HIDWORD(v334) = cosf(v1.n64_f32[0]);
              LODWORD(v334) = COERCE_UNSIGNED_INT(sinf(v1.n64_f32[0])) ^ 0x80000000;
              Multiply3x3((const CMatrix *)&v338, v203);
              v204 = (float *)((char *)v331 + 44 * v192);
              v337 = v339;
              v336 = v338;
              v205 = v204[418];
              v206 = v204[417];
              v207 = v204[419];
              v1.n64_f32[1] = v339 * v207;
              v208 = (float)((float)(*(float *)&v338 * v206) + (float)(*((float *)&v338 + 1) * v205))
                   + (float)(v339 * v207);
              *(float *)&v336 = *(float *)&v338 - (float)(v206 * v208);
              *((float *)&v336 + 1) = *((float *)&v338 + 1) - (float)(v205 * v208);
              v337 = v339 - (float)(v207 * v208);
              CVector::Normalise((CVector *)&v336);
              CrossProduct((const CVector *)&v338, (const CVector *)&v336);
              v335 = v339;
              v334 = v338;
              CVector::Normalise((CVector *)&v334);
              if ( v316 == 1 )
                v335 = 0.0;
              dword_A01FA4 = 0;
              *((_BYTE *)v204 + 1684) = 60;
              v209 = COERCE_FLOAT(SurfaceInfos_c::GetAdhesiveLimit());
              v192 = v327;
              if ( *((float *)v331 + 497) > 0.0 )
              {
                v175 = 1.0;
                if ( (unsigned int)(SurfaceInfos_c::GetAdhesionGroup(
                                      (SurfaceInfos_c *)&g_surfaceInfos,
                                      *((unsigned __int8 *)v331 + 44 * v327 + 1687))
                                  - 1) < 3 )
                  v175 = 0.7;
              }
              v210 = v191 * v209;
              v199 = v188;
              if ( *((unsigned __int8 *)v331 + 58) <= 7u )
                v210 = v210
                     * COERCE_FLOAT(
                         SurfaceInfos_c::GetWetMultiplier(
                           (SurfaceInfos_c *)&g_surfaceInfos,
                           *((unsigned __int8 *)v331 + 44 * v327 + 1687)));
              v211 = *((unsigned __int8 *)v331 + 1648);
              dword_A01FA8 = *((_DWORD *)v331 + 520);
              CPhysical::GetSpeed();
              if ( v211 == 1 )
                v210 = v210 * 0.4;
              v339 = v333;
              v338 = v332;
              if ( *((_DWORD *)v331 + v327 + 501) )
              {
                CPhysical::GetSpeed();
                *(float *)&v338 = *(float *)&v338 - *(float *)&v332;
                *((float *)&v338 + 1) = *((float *)&v338 + 1) - *((float *)&v332 + 1);
                v339 = v339 - v333;
              }
              CVehicle::ProcessBikeWheel(
                (int)v331,
                (int)&v336,
                (int)&v334,
                (int)&v338,
                (int)&v342,
                2,
                *(float *)&dword_A01FA4,
                v170 * v159,
                v160 * v210,
                v175,
                0,
                (int)v331 + 1900,
                (int)&dword_A01FA8,
                0,
                *((unsigned __int8 *)v331 + 1648));
              if ( (v364[0] & 4) != 0 && (unsigned int)(dword_A01FA8 - 1) <= 1 )
                dword_A01FA8 = 0;
            }
          }
          if ( *((float *)v331 + 467) > 0.0 || *((float *)v331 + 468) > 0.0 )
          {
            v214 = *((_DWORD *)v331 + 5);
            v215 = (float *)((char *)v331 + 44 * v199);
            v216 = *(double *)(v214 + 16);
            v337 = *(float *)(v214 + 24);
            v336 = v216;
            v217 = *(double *)v214;
            v335 = *(float *)(v214 + 8);
            v334 = v217;
            v218 = v215[418];
            v219 = v215[417];
            v220 = v215[419];
            v1.n64_f32[1] = v337 * v220;
            v221 = (float)((float)(*(float *)&v336 * v219) + (float)(*((float *)&v336 + 1) * v218))
                 + (float)(v337 * v220);
            v337 = v337 - (float)(v220 * v221);
            *((float *)&v336 + 1) = *((float *)&v336 + 1) - (float)(v218 * v221);
            *(float *)&v336 = *(float *)&v336 - (float)(v219 * v221);
            CVector::Normalise((CVector *)&v336);
            CrossProduct((const CVector *)&v332, (const CVector *)&v336);
            v335 = v333;
            v334 = v332;
            CVector::Normalise((CVector *)&v334);
            v222 = v316;
            if ( v316 == 1 )
              v335 = 0.0;
            if ( (*(_BYTE *)v322 & 0x20) != 0 )
            {
              v223 = 20000.0;
              *((_DWORD *)v331 + 496) = 1065353216;
              v224 = v191;
            }
            else if ( *((_WORD *)v331 + 990) )
            {
              CPhysical::ApplyTurnForce();
              v223 = 0.0;
              v224 = 0.0;
            }
            else
            {
              v223 = v170;
              v224 = v191;
              v235 = *((float *)v331 + 496);
              if ( v235 < 1.0 )
              {
                v223 = v170;
                v224 = v191;
                if ( *v315 > 0.75 )
                {
                  CPhysical::ApplyTurnForce();
                  v224 = v191 * v235;
                  v223 = v170;
                }
              }
            }
            v225 = (char *)v331 + 44 * (__int16)v188;
            v226 = *(float *)&dword_A01FA4;
            dword_A01FA4 = LODWORD(v162);
            v227 = v170;
            if ( v226 > 0.0 )
              v227 = 0.0;
            v225[1684] = 60;
            v5.n64_u32[1] = SurfaceInfos_c::GetAdhesiveLimit();
            if ( v170 > 0.0 )
              v170 = v227;
            if ( *((float *)v331 + 497) <= 0.0 )
            {
              v228 = 1.0;
            }
            else
            {
              v228 = 1.0;
              if ( (unsigned int)(SurfaceInfos_c::GetAdhesionGroup(
                                    (SurfaceInfos_c *)&g_surfaceInfos,
                                    (unsigned __int8)v225[1687])
                                - 1) < 3 )
                v228 = 0.7;
            }
            v229 = v224 * v5.n64_f32[1];
            v230 = v325;
            if ( *((unsigned __int8 *)v331 + 58) <= 7u )
              v229 = v229
                   * COERCE_FLOAT(
                       SurfaceInfos_c::GetWetMultiplier(
                         (SurfaceInfos_c *)&g_surfaceInfos,
                         *((unsigned __int8 *)v331 + 44 * (__int16)v188 + 1687)));
            v231 = *((unsigned __int8 *)v331 + 1649);
            dword_A01FAC = *((_DWORD *)v331 + 521);
            CPhysical::GetSpeed();
            if ( v231 == 1 )
              v229 = v229 * 0.4;
            v339 = v333;
            v338 = v332;
            if ( *((_DWORD *)v331 + v188 + 501) )
            {
              CPhysical::GetSpeed();
              *(float *)&v338 = *(float *)&v338 - *(float *)&v332;
              *((float *)&v338 + 1) = *((float *)&v338 + 1) - *((float *)&v332 + 1);
              v339 = v339 - v333;
            }
            CVehicle::ProcessBikeWheel(
              (int)v331,
              (int)&v336,
              (int)&v334,
              (int)&v338,
              (int)&v344,
              2,
              *(float *)&dword_A01FA4,
              v161 * v223,
              v171 * v229,
              v228,
              1,
              (int)v331 + 1904,
              (int)&dword_A01FAC,
              1,
              *((unsigned __int8 *)v331 + 1649));
            if ( (v364[0] & 4) != 0 && (unsigned int)(dword_A01FAC - 1) <= 1 )
              dword_A01FAC = 0;
LABEL_291:
            if ( *((_WORD *)v331 + 990) && *((_DWORD *)v331 + 521) == 1 )
            {
              v236 = *((float *)v331 + 496) + (float)(*(float *)&CTimer::ms_fTimeStep * -0.002);
              *((float *)v331 + 496) = v236;
              if ( v236 < 0.0 )
                *((_DWORD *)v331 + 496) = 0;
              if ( !v230 )
                goto LABEL_317;
            }
            else
            {
              v237 = *((float *)v331 + 496);
              if ( v237 < 1.0 )
                *((float *)v331 + 496) = v237 + (float)(*(float *)&CTimer::ms_fTimeStep * 0.005);
              if ( !v230 )
              {
LABEL_317:
                v251 = 0.0;
                *v318 = 0LL;
                v318[1] = 0LL;
                if ( *((_DWORD *)v331 + 281) )
                {
                  v252 = RpAnimBlendClumpGetAssociation();
                  if ( v252 )
                    v251 = *(float *)(v252 + 24) * 0.17453;
                }
                if ( v222 == 1 )
                {
                  *((_DWORD *)v331 + 395) = 0;
                  *((_DWORD *)v331 + 396) = 0;
                  *v329 = 1.0;
                  CrossProduct((const CVector *)&v336, (const CVector *)(*((_DWORD *)v331 + 5) + 16));
                  CVector::Normalise((CVector *)&v336);
                  CrossProduct((const CVector *)&v334, (const CVector *)&v336);
                  v253 = v334;
                  *((float *)v331 + 397) = v335;
                  *(double *)v167 = v253;
                  CVector::Normalise(v167);
                }
                if ( (v364[0] & 2) == 0 && (*((_BYTE *)v331 + 1576) & 8) == 0 )
                {
                  if ( (*((_BYTE *)v331 + 1576) & 0x10) != 0 )
                  {
                    v261 = powf(0.97, *(float *)&CTimer::ms_fTimeStep);
                    v254 = (float *)((char *)v331 + 1632);
                    v262 = *((float *)v331 + 408);
                    v255 = (float)(v261 * v262)
                         - (float)((float)(1.0 - v261)
                                 * (float)(v251 + (float)(asinf(*(float *)(*((_DWORD *)v331 + 5) + 8)) + 0.2618)));
                  }
                  else
                  {
                    v254 = (float *)((char *)v331 + 1632);
                    v255 = powf(0.95, *(float *)&CTimer::ms_fTimeStep) * *((float *)v331 + 408);
                  }
                  goto LABEL_345;
                }
                CrossProduct((const CVector *)&v336, (const CVector *)(*((_DWORD *)v331 + 5) + 16));
                v256 = v336;
                *((float *)v331 + 400) = v337;
                *((double *)v331 + 199) = v256;
                CVector::Normalise((CPhysical *)((char *)v331 + 1592));
                if ( *((_DWORD *)v331 + 64) )
                {
                  v257 = 0.0;
                }
                else
                {
                  if ( !*((_BYTE *)v331 + 2072) )
                  {
                    v1.n64_u32[0] = CTimer::ms_fTimeStep;
                    v257 = *(float *)&CTimer::ms_fTimeStep
                         * (float)((float)((float)(*((float *)v331 + 294)
                                                 / (float)((float)(*(float *)(*((_DWORD *)v331 + 226) + 160) * 3.1416)
                                                         / 180.0))
                                         * -0.5)
                                 * 0.008);
                    goto LABEL_336;
                  }
                  if ( (*((_BYTE *)v331 + 68) & 4) != 0 )
                  {
                    v263 = *((float *)v331 + 402);
                    v264 = *((float *)v331 + 401);
                    v260 = v202 - *((float *)v331 + 403);
                    *((float *)v331 + 403) = v202;
                    v259 = v201 - v263;
                    *((float *)v331 + 401) = v200;
                    v258 = v200 - v264;
                    *((float *)v331 + 402) = v201;
                  }
                  else
                  {
                    v258 = *((float *)v331 + 18) - v200;
                    v259 = *((float *)v331 + 19) - v201;
                    v260 = *((float *)v331 + 20) - v202;
                  }
                  v257 = (float)((float)(v258 * *((float *)v331 + 398)) + (float)(v259 * *((float *)v331 + 399)))
                       + (float)(v260 * *((float *)v331 + 400));
                }
                v1.n64_u32[0] = CTimer::ms_fTimeStep;
LABEL_336:
                v3.n128_u32[2] = 1008981770;
                v265 = *((_DWORD *)v331 + 404);
                v266 = v257 / (float)(vmax_f32(v1, *(float32x2_t *)&v3.n128_i8[8]).n64_f32[0] * 0.008);
                v267 = *(float *)(v265 + 20);
                if ( *((_BYTE *)v331 + 1648) == 1 )
                {
                  v268 = v267 * 0.4;
                  if ( v266 <= (float)(v267 * 0.4) )
                  {
                    v269 = v267 * -0.4;
                    goto LABEL_342;
                  }
                }
                else
                {
                  if ( v266 <= v267 )
                  {
                    v269 = -v267;
LABEL_342:
                    v268 = v266;
                    if ( v266 < v269 )
                      v268 = v269;
                    goto LABEL_344;
                  }
                  v268 = *(float *)(v265 + 20);
                }
LABEL_344:
                v270 = powf(*(float *)(v265 + 28), v1.n64_f32[0]);
                v271 = v268;
                v254 = (float *)((char *)v331 + 1632);
                v272 = *((float *)v331 + 408);
                v255 = (float)(v270 * v272) + (float)((float)(1.0 - v270) * (float)(asinf(v271) - v251));
LABEL_345:
                *v254 = v255;
                *((float *)v331 + 407) = v255;
                v273 = dword_A01FAC;
                v35 = dword_A01FAC == 1;
                v274 = *((unsigned __int8 *)v331 + 58);
                *((_QWORD *)v331 + 260) = *(_QWORD *)&dword_A01FA8;
                v275 = v273;
                if ( v35 )
                  v275 = 0;
                if ( *v315 >= 0.0 )
                  v275 = v273;
                *((_DWORD *)v331 + 521) = v275;
                if ( v274 > 7 )
                {
                  v276 = *((_DWORD *)v331 + 329);
                  if ( v276 )
                    *((_DWORD *)v331 + 329) = v276 - 1;
                }
                else
                {
                  CVehicle::ProcessSirenAndHorn(v331, 1);
                }
                goto LABEL_353;
              }
            }
            if ( *(float *)v323 <= 0.0 && *((float *)v331 + 466) <= 0.0 )
            {
              v250 = *((float *)v331 + 475) * 0.95;
              *((float *)v331 + 475) = v250;
              *((float *)v331 + 473) = *((float *)v331 + 473) + (float)(v250 * *(float *)&CTimer::ms_fTimeStep);
            }
            else
            {
              v238 = *((float *)v331 + 406);
              v239 = cosf(v238);
              v240 = (const CVector *)*((_DWORD *)v331 + 5);
              *((float *)&v332 + 1) = v239;
              LODWORD(v332) = COERCE_UNSIGNED_INT(sinf(v238)) ^ 0x80000000;
              v333 = 0.0;
              Multiply3x3((const CMatrix *)&v334, v240);
              v241 = (float *)((char *)v331 + 44 * v192);
              v337 = v335;
              v336 = v334;
              v242 = v241[418];
              v243 = v241[417];
              v244 = v241[419];
              v1.n64_f32[1] = v335 * v244;
              v245 = (float)((float)(*(float *)&v334 * v243) + (float)(*((float *)&v334 + 1) * v242))
                   + (float)(v335 * v244);
              *(float *)&v336 = *(float *)&v334 - (float)(v243 * v245);
              *((float *)&v336 + 1) = *((float *)&v334 + 1) - (float)(v242 * v245);
              v337 = v335 - (float)(v244 * v245);
              CVector::Normalise((CVector *)&v336);
              CrossProduct((const CVector *)&v332, (const CVector *)&v336);
              v335 = v333;
              v334 = v332;
              CVector::Normalise((CVector *)&v334);
              dword_A01FA4 = 0;
              *((_BYTE *)v241 + 1684) = 60;
              v246 = COERCE_FLOAT(SurfaceInfos_c::GetAdhesiveLimit());
              if ( *((float *)v331 + 497) <= 0.0 )
              {
                v247 = 1.0;
              }
              else
              {
                v247 = 1.0;
                if ( (unsigned int)(SurfaceInfos_c::GetAdhesionGroup(
                                      (SurfaceInfos_c *)&g_surfaceInfos,
                                      *((unsigned __int8 *)v241 + 1687))
                                  - 1) < 3 )
                  v247 = 0.7;
              }
              v248 = v191 * v246;
              v222 = v316;
              if ( *((unsigned __int8 *)v331 + 58) <= 7u )
                v248 = v248
                     * COERCE_FLOAT(
                         SurfaceInfos_c::GetWetMultiplier(
                           (SurfaceInfos_c *)&g_surfaceInfos,
                           *((unsigned __int8 *)v331 + 44 * v327 + 1687)));
              v249 = *((unsigned __int8 *)v331 + 1648);
              dword_A01FA8 = *((_DWORD *)v331 + 520);
              CPhysical::GetSpeed();
              if ( v249 == 1 )
                v248 = v248 * 0.4;
              v339 = v333;
              v338 = v332;
              if ( *((_DWORD *)v331 + v327 + 501) )
              {
                CPhysical::GetSpeed();
                *(float *)&v338 = *(float *)&v338 - *(float *)&v332;
                *((float *)&v338 + 1) = *((float *)&v338 + 1) - *((float *)&v332 + 1);
                v339 = v339 - v333;
              }
              CVehicle::ProcessBikeWheel(
                (int)v331,
                (int)&v336,
                (int)&v334,
                (int)&v338,
                (int)&v342,
                2,
                *(float *)&dword_A01FA4,
                v159 * v170,
                v160 * v248,
                v247,
                0,
                (int)v331 + 1900,
                (int)&dword_A01FA8,
                0,
                *((unsigned __int8 *)v331 + 1648));
              if ( (v364[0] & 4) != 0 && (unsigned int)(dword_A01FA8 - 1) <= 1 )
                dword_A01FA8 = 0;
            }
            goto LABEL_317;
          }
          if ( (*(_BYTE *)v322 & 0x20) != 0 )
          {
            v233 = 0.0;
            *((_DWORD *)v331 + 476) = 0;
          }
          else
          {
            v232 = (float *)((char *)v331 + 1904);
            if ( v162 != 0.0 )
            {
              v230 = v325;
              v233 = *v232;
              if ( v162 <= 0.0 )
              {
                v222 = v316;
                if ( v233 > -1.0 )
                {
                  v234 = 0.05;
                  goto LABEL_424;
                }
              }
              else
              {
                v222 = v316;
                if ( v233 < 1.0 )
                {
                  v234 = -0.1;
LABEL_424:
                  v233 = v233 + v234;
                  *v232 = v233;
                }
              }
LABEL_290:
              *((float *)v331 + 474) = *((float *)v331 + 474) + (float)(v233 * *(float *)&CTimer::ms_fTimeStep);
              goto LABEL_291;
            }
            v233 = *v232;
          }
          v222 = v316;
          v230 = v325;
          goto LABEL_290;
        }
        if ( (*((_BYTE *)v7 + 1576) & 8) != 0 )
        {
LABEL_60:
          v33 = 0;
          goto LABEL_69;
        }
        v36 = 0;
        v37.n128_u32[0] = *((_DWORD *)v7 + 18);
        if ( (*v18 & 0x1000000) == 0 && v37.n128_f32[0] == 0.0 )
          v36 = *((float *)v7 + 19) == 0.0 && *((float *)v7 + 20) == 0.0 && *((float *)v7 + 464) != 1.0;
        v38.n128_u64[0] = 0x3F0000003F000000LL;
        v38.n128_u64[1] = 0x3F0000003F000000LL;
        v37.n128_u32[1] = *((_DWORD *)v7 + 19);
        v37.n128_u64[1] = *((_QWORD *)v7 + 10);
        v39 = result & 0xF8;
        v40 = (float *)&loc_562708;
        v41 = vaddq_f32(*(float32x4_t *)((char *)v7 + 120), v37);
        v42 = (float *)&CTimer::ms_fTimeStep;
        if ( v39 == 40 )
          v40 = (float *)&loc_56270C;
        v43 = *v40;
        v3 = vmulq_f32(v41, v38);
        v44 = (float)(*((float *)v7 + 34) + *((float *)v7 + 22)) * 0.5;
        v1.n64_f32[0] = (float)(*((float *)v7 + 35) + *((float *)v7 + 23)) * 0.5;
        *(float32x4_t *)((char *)v7 + 120) = v3;
        v45 = (float *)&loc_562710;
        v1.n64_f32[1] = v3.n128_f32[2] * v3.n128_f32[2];
        *((float *)v7 + 34) = v44;
        *((float *)v7 + 35) = v1.n64_f32[0];
        if ( v39 == 40 )
          v45 = (float *)&loc_562714;
        if ( (float)((float)((float)(v3.n128_f32[0] * v3.n128_f32[0]) + (float)(v3.n128_f32[1] * v3.n128_f32[1]))
                   + v1.n64_f32[1]) > (float)((float)(v43 * *(float *)&CTimer::ms_fTimeStep)
                                            * (float)(v43 * *(float *)&CTimer::ms_fTimeStep)) )
          goto LABEL_55;
        v46 = v44 * v44;
        v42 = (float *)&loc_562718;
        if ( v39 == 40 )
          v42 = (float *)&loc_56271C;
        if ( (float)((float)((float)(v3.n128_f32[3] * v3.n128_f32[3]) + v46) + (float)(v1.n64_f32[0] * v1.n64_f32[0])) <= (float)((float)(*v42 * *(float *)&CTimer::ms_fTimeStep) * (float)(*v42 * *(float *)&CTimer::ms_fTimeStep)) )
        {
          v33 = 0;
          if ( *((float *)v7 + 54) < *v45 || v36 )
          {
            v47 = (char *)v7 + 188;
            v50 = *((_BYTE *)v7 + 188) + 1;
            *((_BYTE *)v7 + 188) = v50;
            if ( v50 <= 0xAu && !v36 )
              goto LABEL_69;
LABEL_57:
            v48 = *((_DWORD *)v7 + 5);
            v49 = (float *)(v48 + 48);
            if ( !v48 )
              v49 = (float *)((char *)v7 + 4);
            if ( !CCarCtrl::MapCouldMoveInThisArea(*(CCarCtrl **)v49, v49[1], *(float *)&v42) )
            {
              if ( !v36 || (unsigned __int8)*v47 >= 0xBu )
                *v47 = 10;
              *((_DWORD *)v7 + 18) = 0;
              v33 = 1;
              *(_QWORD *)((char *)v7 + 76) = 0LL;
              *(_QWORD *)((char *)v7 + 84) = 0LL;
              *((_DWORD *)v7 + 23) = 0;
              goto LABEL_69;
            }
            goto LABEL_60;
          }
        }
        else
        {
LABEL_55:
          if ( v36 )
          {
            v47 = (char *)v7 + 188;
            ++*((_BYTE *)v7 + 188);
            goto LABEL_57;
          }
        }
        v33 = 0;
        *((_BYTE *)v7 + 188) = 0;
        goto LABEL_69;
      }
      v23 = 88.0;
      v1.n64_u32[0] = *(_DWORD *)(*((_DWORD *)v7 + 5) + 24);
      if ( v1.n64_f32[0] <= 0.0 )
        goto LABEL_34;
      v3.n128_u32[2] = 1028443341;
      v1.n64_f32[0] = (float)(v27 * 0.2) * fabsf(*(float *)(*((_DWORD *)v7 + 404) + 44) - v1.n64_f32[0]);
      v1.n64_u64[0] = vmin_f32(v1, *(float32x2_t *)&v3.n128_i8[8]).n64_u64[0];
      v1.n64_f32[0] = v22 - v1.n64_f32[0];
    }
    else
    {
      if ( *((float *)v7 + 467) > 0.0
        || *((float *)v7 + 468) > 0.0
        || (v24 = COERCE_FLOAT(CStats::GetFatAndMuscleModifier()),
            v25 = COERCE_FLOAT(CStats::GetFatAndMuscleModifier()),
            v23 = 88.0,
            v1.n64_u32[0] = *(_DWORD *)(*((_DWORD *)v7 + 5) + 24),
            v1.n64_f32[0] >= 0.0) )
      {
        v26 = v22;
        goto LABEL_34;
      }
      v2.n64_f32[0] = v24 * 0.075;
      v1.n64_f32[0] = (float)(v25 * 0.25) * fabsf(*(float *)(*((_DWORD *)v7 + 404) + 48) - v1.n64_f32[0]);
      v1.n64_u64[0] = vmin_f32(v2, v1).n64_u64[0];
      v1.n64_f32[0] = (float)(v1.n64_f32[0] + 0.9) * v22;
    }
    v26 = v1.n64_f32[0];
    goto LABEL_34;
  }
  return result;
}


// ============================================================

// Address: 0x5649f4
// Original: _ZN5CBike9ProcessAIERj
// Demangled: CBike::ProcessAI(uint &)
int __fastcall CBike::ProcessAI(CBike *this, unsigned int *a2)
{
  __int16 v4; // r2
  float v5; // r6
  int v6; // r0
  CVehicle *v7; // r1
  int result; // r0
  CVehicle *v9; // r1
  char v10; // r2
  int v11; // r1
  int v12; // r0
  char v13; // r0
  CVehicle *v14; // r1
  int v15; // r0
  float v16; // s0
  char v17; // r2
  float v18; // s18
  float v19; // s16
  float v20; // r0
  int v21; // r1
  int v22; // r0
  int v23; // r1
  float v24; // s0
  float v25; // s4
  float v26; // s2
  int v27; // r0
  unsigned int v28; // r1
  int v29; // r1
  char v30; // r0
  _DWORD *v31; // r0
  unsigned int v32; // r0
  int v33; // r1
  int v34; // r0
  int v35; // r0
  float v36; // s0
  float v37; // s2
  float v38; // s4
  _BYTE *v39; // r2
  int v40; // r2
  bool v41; // zf
  float v42; // s4
  float v43; // s2
  CPad *Pad; // r0

  v4 = *(_WORD *)((char *)this + 991);
  v5 = CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)];
  v6 = *((char *)this + 1064);
  *(_WORD *)((char *)this + 991) = v4 & 0xFFFC;
  if ( v6 < 0 || CVehicleRecording::bUseCarAI[v6] )
  {
    v7 = (CVehicle *)(*((unsigned __int8 *)this + 58) >> 3);
    result = 1;
    switch ( (unsigned int)v7 )
    {
      case 0u:
        *a2 += 2;
        *((_BYTE *)this + 1576) &= ~8u;
        if ( *(_DWORD *)(FindPlayerPed(-1) + 1100) == 61 || *(_DWORD *)(FindPlayerPed(-1) + 1100) == 58 )
          goto LABEL_53;
        v34 = *((_DWORD *)this + 281);
        if ( v34 )
          (*(void (__fastcall **)(CBike *, _DWORD))(*(_DWORD *)this + 100))(
            this,
            (unsigned __int8)*(_DWORD *)(v34 + 1436));
        v35 = *((_DWORD *)this + 404);
        v36 = *((float *)this + 409);
        v37 = *(float *)(*((_DWORD *)this + 226) + 24);
        if ( v36 >= 0.0 )
        {
          v42 = v37 + (float)(v36 * *(float *)(v35 + 4));
          v43 = *((float *)this + 297);
          *((float *)this + 43) = v42;
          if ( v43 >= 0.0 && *((_BYTE *)this + 2072) )
            goto LABEL_50;
        }
        else
        {
          v38 = *((float *)this + 297);
          *((float *)this + 43) = v37 + (float)(v36 * *(float *)(v35 + 12));
          if ( (v38 != 0.0 || (*((_BYTE *)this + 1068) & 0x20) != 0) && *((_BYTE *)this + 2072) )
            goto LABEL_50;
        }
        CStats::GetFatAndMuscleModifier();
        CPhysical::ApplyTurnForce();
LABEL_50:
        CEntity::PruneReferences(this);
        if ( *((unsigned __int8 *)this + 58) <= 7u )
          CVehicle::DoDriveByShootings(this);
        CBike::DoSoftGroundResistance(this, a2);
LABEL_53:
        if ( (unsigned __int8)((*((_BYTE *)this + 1202) & 7) - 1) <= 1u )
        {
          Pad = (CPad *)CPad::GetPad(0, v33);
          if ( CPad::UseBomb(Pad) == 1 )
            CVehicle::ActivateBomb(this);
        }
        return 1;
      case 1u:
        *a2 += 2;
        return 1;
      case 2u:
        CCarAI::UpdateCarAI(this, v7);
        CPhysical::ProcessControl(this);
        CCarCtrl::UpdateCarOnRails(this, v14);
        v15 = *((_DWORD *)this + 226);
        v16 = *((float *)this + 243) / 50.0;
        v17 = *((_BYTE *)this + 2073);
        *((_BYTE *)this + 2072) = 2;
        *((_BYTE *)this + 2073) = 2;
        *((_BYTE *)this + 2074) = v17;
        cTransmission::CalculateGearForSimpleCar((cTransmission *)(v15 + 44), v16, (unsigned __int8 *)this + 1216);
        v18 = *(float *)&CTimer::ms_fTimeStep;
        *((float *)this + 473) = *((float *)this + 473)
                               + (float)(v18
                                       * COERCE_FLOAT(
                                           CVehicle::ProcessWheelRotation(
                                             (int)this,
                                             0,
                                             *((_DWORD *)this + 5) + 16,
                                             (int)this + 72,
                                             *(float *)(LODWORD(v5) + 88) * 0.5)));
        v19 = *(float *)&CTimer::ms_fTimeStep;
        v20 = COERCE_FLOAT(
                CVehicle::ProcessWheelRotation(
                  (int)this,
                  0,
                  *((_DWORD *)this + 5) + 16,
                  (int)this + 72,
                  *(float *)(LODWORD(v5) + 92) * 0.5));
        v21 = *((unsigned __int8 *)this + 991);
        *((float *)this + 474) = *((float *)this + 474) + (float)(v19 * v20);
        if ( v21 << 30 )
          (*(void (__fastcall **)(CBike *))(*(_DWORD *)this + 220))(this);
        v22 = *((_DWORD *)this + 329);
        if ( v22 )
          *((_DWORD *)this + 329) = v22 - 1;
        v23 = *((_DWORD *)this + 267);
        *((_BYTE *)this + 1576) &= ~0x80u;
        *((_DWORD *)this + 267) = v23 & 0xDEFFFFFF;
        return 1;
      case 3u:
      case 0xCu:
        CCarAI::UpdateCarAI(this, v7);
        CCarCtrl::SteerAICarWithPhysics(this, v9);
        if ( *((unsigned __int8 *)this + 991) << 30 )
          (*(void (__fastcall **)(CBike *))(*(_DWORD *)this + 220))(this);
        *a2 += 2;
        v10 = *((_BYTE *)this + 1576);
        v11 = *((_DWORD *)this + 267);
        v12 = *((_DWORD *)this + 268);
        *((_BYTE *)this + 1576) = v10 & 0x7F;
        if ( (v11 & 0x80000) != 0 )
        {
          *((_DWORD *)this + 296) = 0;
          *((_DWORD *)this + 297) = 1065353216;
          *((_DWORD *)this + 267) = v11 | 0x20;
          *((_DWORD *)this + 268) = v12;
        }
        else
        {
          v13 = v10 & 0x77;
LABEL_38:
          *((_BYTE *)this + 1576) = v13;
        }
        return 1;
      case 4u:
        v24 = *((float *)this + 18) * *((float *)this + 18);
        v25 = *((float *)this + 20);
        v26 = *((float *)this + 19) * *((float *)this + 19);
        *((_DWORD *)this + 297) = 0;
        if ( (float)((float)(v24 + v26) + (float)(v25 * v25)) < 0.01 || (*((_BYTE *)this + 1576) & 0x10) != 0 )
        {
          v27 = *((_DWORD *)this + 268);
          v28 = *((_DWORD *)this + 267) | 0x20;
        }
        else
        {
          v27 = *((_DWORD *)this + 268);
          v28 = *((_DWORD *)this + 267) & 0xFFFFFFDF;
        }
        *((_DWORD *)this + 267) = v28;
        *((_DWORD *)this + 329) = 0;
        *((_DWORD *)this + 296) = 0;
        if ( *((_DWORD *)this + 281) )
          goto LABEL_33;
        v40 = *((_DWORD *)this + 282);
        v41 = v40 == 0;
        if ( !v40 )
          v41 = (v28 & 0x80000) == 0;
        if ( v41 )
        {
          v39 = (char *)this + 1576;
        }
        else
        {
LABEL_33:
          v39 = (char *)this + 1576;
          if ( (*((_BYTE *)this + 1576) & 0x10) == 0 )
          {
            *a2 += 2;
            v28 = *((_DWORD *)this + 267);
            v27 = *((_DWORD *)this + 268);
          }
        }
        *((_DWORD *)this + 410) = 0;
        *((_DWORD *)this + 411) = 0;
        *v39 &= ~0x80u;
        if ( (v28 & 0x80000) != 0 )
        {
          *((_DWORD *)this + 296) = 0;
          *((_DWORD *)this + 297) = 1065353216;
          *((_DWORD *)this + 267) = v28 | 0x20;
          *((_DWORD *)this + 268) = v27;
        }
        return 1;
      case 5u:
        v29 = *((_DWORD *)this + 267);
        *((_DWORD *)this + 294) = 0;
        *((_DWORD *)this + 296) = 0;
        *((_DWORD *)this + 297) = 1028443341;
        *((_DWORD *)this + 329) = 0;
        v30 = *((_BYTE *)this + 1576);
        *((_DWORD *)this + 410) = 0;
        *((_DWORD *)this + 411) = 0;
        *((_DWORD *)this + 267) = v29 | 0x20;
        goto LABEL_37;
      case 9u:
        v31 = (_DWORD *)((char *)this + 1188);
        if ( (float)((float)((float)(*((float *)this + 18) * *((float *)this + 18))
                           + (float)(*((float *)this + 19) * *((float *)this + 19)))
                   + (float)(*((float *)this + 20) * *((float *)this + 20))) >= 0.01 )
        {
          *v31 = 0;
          v32 = *((_DWORD *)this + 267) & 0xFFFFFFDF;
        }
        else
        {
          *v31 = 1065353216;
          v32 = *((_DWORD *)this + 267) | 0x20;
        }
        *((_DWORD *)this + 267) = v32;
        *((_DWORD *)this + 296) = 0;
        *((_DWORD *)this + 294) = 0;
        *((_DWORD *)this + 329) = 0;
        *a2 += 2;
        v30 = *((_BYTE *)this + 1576);
LABEL_37:
        v13 = v30 & 0x7F;
        goto LABEL_38;
      default:
        return result;
    }
  }
  *a2 += 2;
  return 0;
}


// ============================================================

// Address: 0x564fd4
// Original: _ZN5CBike22DoSoftGroundResistanceERj
// Demangled: CBike::DoSoftGroundResistance(uint &)
int __fastcall CBike::DoSoftGroundResistance(int this, unsigned int *a2)
{
  int v2; // r4
  float *v3; // r6
  float *v5; // r0
  float v6; // s4
  float v7; // s2
  float v8; // s6
  float v9; // s8
  float v10; // s0
  float v11; // s10
  float v12; // s12
  float v13; // s0
  float v14; // s2
  float v15; // s4

  v2 = this;
  v3 = (float *)(this + 1828);
  if ( *(float *)(this + 1828) < 1.0
    && (this = SurfaceInfos_c::GetAdhesionGroup((SurfaceInfos_c *)&g_surfaceInfos, *(unsigned __int8 *)(this + 1687)),
        this == 4)
    || *(float *)(v2 + 1832) < 1.0
    && (this = SurfaceInfos_c::GetAdhesionGroup((SurfaceInfos_c *)&g_surfaceInfos, *(unsigned __int8 *)(v2 + 1731)),
        this == 4)
    || *(float *)(v2 + 1836) < 1.0
    && (this = SurfaceInfos_c::GetAdhesionGroup((SurfaceInfos_c *)&g_surfaceInfos, *(unsigned __int8 *)(v2 + 1775)),
        this == 4)
    || *(float *)(v2 + 1840) < 1.0
    && (this = SurfaceInfos_c::GetAdhesionGroup((SurfaceInfos_c *)&g_surfaceInfos, *(unsigned __int8 *)(v2 + 1819)),
        this == 4) )
  {
    v5 = *(float **)(v2 + 20);
    v6 = *(float *)(v2 + 72);
    v7 = *(float *)(v2 + 76);
    v8 = v5[8];
    v9 = v5[9];
    v10 = *(float *)(v2 + 80);
    v11 = v5[10];
    v12 = (float)((float)(v6 * v8) + (float)(v7 * v9)) + (float)(v10 * v11);
    v13 = v10 - (float)(v11 * v12);
    v14 = v7 - (float)(v9 * v12);
    v15 = v6 - (float)(v8 * v12);
    if ( *(float *)(v2 + 1184) > 0.3
      && (float)((float)(v13 * v13) + (float)((float)(v15 * v15) + (float)(v14 * v14))) < 0.09 )
    {
      *a2 += 4;
    }
    return sub_193318();
  }
  if ( *v3 < 1.0 )
  {
    this = *(unsigned __int8 *)(v2 + 1687);
    if ( this == 178 )
      return sub_193318();
  }
  if ( *(float *)(v2 + 1832) < 1.0 )
  {
    this = *(unsigned __int8 *)(v2 + 1731);
    if ( this == 178 )
      return sub_193318();
  }
  if ( *(float *)(v2 + 1836) < 1.0 )
  {
    this = *(unsigned __int8 *)(v2 + 1775);
    if ( this == 178 )
      return sub_193318();
  }
  if ( *(float *)(v2 + 1840) < 1.0 )
  {
    this = *(unsigned __int8 *)(v2 + 1819);
    if ( this == 178 )
      return sub_193318();
  }
  return this;
}


// ============================================================

// Address: 0x56528c
// Original: _ZN5CBike19PlayHornIfNecessaryEv
// Demangled: CBike::PlayHornIfNecessary(void)
unsigned __int8 *__fastcall CBike::PlayHornIfNecessary(unsigned __int8 *this)
{
  if ( this[991] << 30 )
    return (unsigned __int8 *)(*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)this + 220))(this);
  return this;
}


// ============================================================

// Address: 0x56529e
// Original: _ZN5CBike28ProcessControlCollisionCheckEb
// Demangled: CBike::ProcessControlCollisionCheck(bool)
void __fastcall CBike::ProcessControlCollisionCheck(CBike *this, int a2)
{
  unsigned int *v4; // r8
  __int64 v5; // d16
  __int64 v6; // d17
  int v7; // r0
  int v8; // r6
  unsigned int v9; // r5
  _BYTE v10[88]; // [sp+0h] [bp-58h] BYREF

  CMatrix::CMatrix((CMatrix *)v10, *((const CMatrix **)this + 5));
  v4 = (unsigned int *)((char *)this + 28);
  *((_DWORD *)this + 7) &= ~0x10u;
  CPhysical::SkipPhysics(this);
  *(float *)&v5 = 1.0;
  *((float *)&v5 + 1) = 1.0;
  *(float *)&v6 = 1.0;
  *((float *)&v6 + 1) = 1.0;
  *(_QWORD *)((char *)this + 1828) = v5;
  *(_QWORD *)((char *)this + 1836) = v6;
  v7 = *((_DWORD *)this + 17);
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 17) = v7 & 0xFFFF6FFF;
  if ( a2 == 1 )
  {
    CPhysical::ApplyMoveSpeed(this);
    CPhysical::ApplyTurnSpeed(this);
    if ( CPhysical::CheckCollision(this) == 1 )
    {
      v8 = 0;
      do
      {
        CMatrix::operator=();
        CPhysical::ApplyMoveSpeed(this);
        CPhysical::ApplyTurnSpeed(this);
        if ( CPhysical::CheckCollision(this) != 1 )
          break;
        ++v8;
      }
      while ( (unsigned __int16)v8 < 5u );
    }
  }
  else
  {
    v9 = *v4;
    *v4 &= ~1u;
    CPhysical::CheckCollision(this);
    *v4 = *v4 & 0xFFFFFFFE | v9 & 1;
  }
  *v4 = *v4 & 0xFFFFFFCF | 0x20;
  CMatrix::~CMatrix((CMatrix *)v10);
}


// ============================================================

// Address: 0x565364
// Original: _ZN5CBike8TeleportE7CVectorh
// Demangled: CBike::Teleport(CVector,uchar)
int __fastcall CBike::Teleport(int a1, CEntity *a2, int a3, int a4, int a5)
{
  int v9; // r1
  CEntity *v10; // r1
  float *v11; // r0
  float v12; // s16
  float v13; // s18
  float v14; // s20
  float *v15; // r0
  float v16; // s2
  float v17; // s4
  __int64 v18; // d16
  __int64 v19; // d17

  CWorld::Remove((CWorld *)a1, a2);
  v9 = *(_DWORD *)(a1 + 20);
  if ( v9 )
  {
    *(_DWORD *)(v9 + 48) = a2;
    *(_DWORD *)(*(_DWORD *)(a1 + 20) + 52) = a3;
    v10 = (CEntity *)(*(_DWORD *)(a1 + 20) + 56);
  }
  else
  {
    v10 = (CEntity *)(a1 + 12);
    *(_DWORD *)(a1 + 4) = a2;
    *(_DWORD *)(a1 + 8) = a3;
  }
  *(_DWORD *)v10 = a4;
  if ( a5 )
  {
    v11 = *(float **)(a1 + 20);
    if ( v11 )
    {
      v12 = v11[12];
      v13 = v11[13];
      v14 = v11[14];
      CMatrix::SetRotate((CMatrix *)v11, 0.0, 0.0, 0.0);
      v15 = *(float **)(a1 + 20);
      v16 = v13 + v15[13];
      v17 = v14 + v15[14];
      v15[12] = v12 + v15[12];
      v15[13] = v16;
      v15[14] = v17;
    }
    else
    {
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  *(_DWORD *)(a1 + 1892) = 0;
  *(float *)&v18 = 1.0;
  *((float *)&v18 + 1) = 1.0;
  *(float *)&v19 = 1.0;
  *((float *)&v19 + 1) = 1.0;
  *(_DWORD *)(a1 + 1896) = 0;
  *(_DWORD *)(a1 + 2080) = 0;
  *(_DWORD *)(a1 + 2084) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 1828) = v18;
  *(_QWORD *)(a1 + 1836) = v19;
  *(_QWORD *)(a1 + 1860) = 0LL;
  *(_QWORD *)(a1 + 1868) = 0LL;
  return sub_19B3B8((CWorld *)a1, v10);
}


// ============================================================

// Address: 0x56542c
// Original: _ZN5CBike15ResetSuspensionEv
// Demangled: CBike::ResetSuspension(void)
_QWORD *__fastcall CBike::ResetSuspension(CBike *this)
{
  __int64 v1; // d16
  __int64 v2; // d17
  _QWORD *v3; // r1
  _QWORD *result; // r0

  *(float *)&v1 = 1.0;
  *((float *)&v1 + 1) = 1.0;
  *(float *)&v2 = 1.0;
  *((float *)&v2 + 1) = 1.0;
  *((_DWORD *)this + 473) = 0;
  *((_DWORD *)this + 474) = 0;
  *((_DWORD *)this + 520) = 0;
  *((_DWORD *)this + 521) = 0;
  v3 = (_QWORD *)((char *)this + 1860);
  result = (_QWORD *)((char *)this + 1828);
  *v3 = 0LL;
  v3[1] = 0LL;
  *result = v1;
  result[1] = v2;
  return result;
}


// ============================================================

// Address: 0x565458
// Original: _ZN5CBike9PreRenderEv
// Demangled: CBike::PreRender(void)
void __fastcall CBike::PreRender(CBike *this)
{
  float32x2_t v1; // d3
  float32x2_t v2; // d4
  float32x2_t v3; // d5
  float32x2_t v4; // d6
  CBike *v5; // r9
  unsigned __int64 v6; // r0
  float v7; // s2
  float v8; // s6
  float v9; // s8
  float v10; // s0
  float v11; // s6
  float v12; // s4
  float v13; // s10
  float v14; // s2
  float v15; // s4
  float v16; // s0
  int v17; // r1
  int v18; // r8
  float v19; // s16
  int v20; // r10
  int v21; // r0
  float v22; // s24
  int v23; // r9
  float v24; // s26
  float v25; // r11
  float v26; // s0
  double *v27; // r0
  double v28; // d16
  float v29; // s0
  float *v30; // r1
  float v31; // s6
  float v32; // s2
  float v33; // s4
  int v34; // r1
  float v35; // s0
  int v36; // r4
  int v37; // r5
  int v38; // r1
  float v39; // r5
  float v40; // r11
  float v41; // r0
  const CVector *v42; // r6
  int v43; // r0
  double v44; // d16
  float v45; // r0
  float v46; // r0
  float v47; // s16
  float v48; // s18
  float v49; // s20
  float v50; // s2
  float v51; // s0
  float v52; // r5
  float v53; // r6
  float v54; // r9
  float v55; // r6
  float v56; // s16
  float v57; // s18
  float v58; // s20
  float v59; // r6
  float v60; // s6
  float v61; // s16
  float v62; // s18
  float v63; // s0
  float v64; // r0
  float v65; // s16
  float v66; // s18
  float v67; // s0
  float v68; // s20
  float v69; // r0
  float v70; // s18
  float v71; // s16
  float v72; // s20
  float v73; // s22
  float v74; // r0
  int ColModel; // [sp+44h] [bp-1D4h]
  _DWORD *v76; // [sp+48h] [bp-1D0h]
  float *v77; // [sp+4Ch] [bp-1CCh]
  unsigned int v78; // [sp+50h] [bp-1C8h]
  float *v79; // [sp+54h] [bp-1C4h]
  float *v80; // [sp+58h] [bp-1C0h]
  float *v81; // [sp+5Ch] [bp-1BCh]
  float *v82; // [sp+60h] [bp-1B8h]
  int v83; // [sp+64h] [bp-1B4h]
  int v84; // [sp+68h] [bp-1B0h]
  _DWORD v85[3]; // [sp+6Ch] [bp-1ACh] BYREF
  char v86; // [sp+88h] [bp-190h] BYREF
  _BYTE v87[64]; // [sp+C8h] [bp-150h] BYREF
  char *v88; // [sp+108h] [bp-110h]
  int v89; // [sp+10Ch] [bp-10Ch]
  double v90; // [sp+110h] [bp-108h] BYREF
  int v91; // [sp+118h] [bp-100h]
  _BYTE v92[12]; // [sp+11Ch] [bp-FCh] BYREF
  double v93; // [sp+128h] [bp-F0h] BYREF
  float v94; // [sp+130h] [bp-E8h]
  _DWORD v95[12]; // [sp+138h] [bp-E0h] BYREF
  float v96; // [sp+168h] [bp-B0h]
  float v97; // [sp+16Ch] [bp-ACh]
  float v98; // [sp+170h] [bp-A8h]
  int v99; // [sp+178h] [bp-A0h]
  int v100; // [sp+17Ch] [bp-9Ch]
  double v101; // [sp+180h] [bp-98h] BYREF
  float v102; // [sp+188h] [bp-90h]

  v5 = this;
  CVehicle::PreRender(this);
  ColModel = CEntity::GetColModel(v5);
  v78 = *(_DWORD *)(ColModel + 44);
  v76 = (_DWORD *)((char *)v5 + 1068);
  if ( *((unsigned __int8 *)v5 + 1071) << 31 )
  {
    v6 = __PAIR64__(v78, (*(int (__fastcall **)(CBike *))(*(_DWORD *)v5 + 212))(v5));
    v1.n64_u32[0] = *((_DWORD *)v5 + 457);
    v7 = *((float *)v5 + 481);
    v2.n64_u32[0] = *((_DWORD *)v5 + 458);
    v8 = vmin_f32(v2, v1).n64_f32[0];
    v9 = *((float *)v5 + 483);
    v4.n64_u32[0] = *((_DWORD *)v5 + 460);
    v10 = (float)(v8 - (float)(1.0 - (float)(v7 / *((float *)v5 + 485))))
        / (float)(1.0 - (float)(1.0 - (float)(v7 / *((float *)v5 + 485))));
    v11 = 1.0 - (float)(v9 / *((float *)v5 + 487));
    v3.n64_u32[0] = *((_DWORD *)v5 + 459);
    v12 = 1.0 - v11;
    v13 = vmin_f32(v4, v3).n64_f32[0] - v11;
    v1.n64_u32[0] = *(_DWORD *)(*(_DWORD *)(v78 + 16) + 8);
    v14 = v1.n64_f32[0] - (float)(v7 * v10);
    v15 = v13 / v12;
    if ( v10 > 0.0 )
      v1.n64_f32[0] = v14;
    *((float *)v5 + 477) = *((float *)v5 + 477) + (float)((float)(v1.n64_f32[0] - *((float *)v5 + 477)) * 0.75);
    v16 = *(float *)(*(_DWORD *)(HIDWORD(v6) + 16) + 72);
    if ( v15 > 0.0 )
      v16 = v16 - (float)(v9 * v15);
    *((float *)v5 + 478) = *((float *)v5 + 478) + (float)((float)(v16 - *((float *)v5 + 478)) * 0.75);
  }
  v84 = (int)v5;
  if ( *((unsigned __int8 *)v5 + 58) < 0x20u )
  {
    v17 = 4;
    if ( *((_DWORD *)v5 + 521) == 2 )
      v17 = 0;
    v79 = (float *)((char *)v5 + 1852);
    v81 = (float *)((char *)v5 + 1856);
    v82 = (float *)((char *)v5 + 1628);
    v18 = 0;
    v77 = (float *)((char *)v5 + 1848);
    v83 = v17;
    v80 = (float *)((char *)v5 + 1844);
    v19 = sqrtf(
            (float)((float)(*((float *)v5 + 18) * *((float *)v5 + 18))
                  + (float)(*((float *)v5 + 19) * *((float *)v5 + 19)))
          + (float)(*((float *)v5 + 20) * *((float *)v5 + 20)));
    do
    {
      if ( v18 )
      {
        if ( *v81 < 1.0 || *v79 >= 1.0 )
          v20 = 3;
        else
          v20 = 2;
      }
      else
      {
        v20 = *v80 >= 1.0 && *v77 < 1.0;
      }
      v21 = CEntity::GetColModel(v5);
      v22 = *v82;
      v23 = 44 * (__int16)v20 + v84;
      v24 = *(float *)(v21 + 8) * 0.8;
      v25 = *(float *)(v23 + 1660);
      v26 = sinf(*v82);
      v27 = (double *)(v23 + 1652);
      v5 = (CBike *)v84;
      v28 = *v27;
      v29 = v24 * v26;
      v102 = v25;
      v101 = v28;
      v30 = *(float **)(v84 + 20);
      v31 = v30[2];
      v32 = v29 * *v30;
      v33 = v29 * v30[1];
      v34 = v84 + 4 * v18;
      *(float *)&v101 = v32 + *(float *)&v28;
      *((float *)&v101 + 1) = v33 + *((float *)&v28 + 1);
      v102 = (float)(v29 * v31) + v25;
      v35 = 1.0;
      v36 = *(unsigned __int8 *)(v84 + v18 + 1888);
      v37 = *(_DWORD *)(v34 + 1880);
      v38 = *(_DWORD *)(v34 + 2080);
      if ( !v18 )
        v36 |= v83;
      if ( v22 > 0.0 )
        v35 = -1.0;
      if ( *(_BYTE *)(v84 + v18 + 1890) )
        v36 |= 2u;
      CVehicle::AddSingleWheelParticles(
        v84,
        v38,
        *(unsigned __int8 *)(v84 + v18 + 1648),
        *(_DWORD *)(v84 + 4 * v20 + 1844),
        v19,
        (int)v27,
        (int)&v101,
        SLODWORD(v35),
        v18,
        v37,
        v84 + v18 + 1888,
        v36);
      ++v18;
    }
    while ( v18 != 2 );
  }
  *((_BYTE *)v5 + 1500) = 0;
  CBike::CalculateLeanMatrix(v5);
  if ( (*v76 & 0x10) != 0
    && (*v76 & 0x40000000) == 0
    && (*(_DWORD *)(*((_DWORD *)v5 + 226) + 204) & 0x1000) == 0
    && (float)((float)((float)((float)(*((float *)v5 + 18) * *(float *)(*((_DWORD *)v5 + 5) + 16))
                             + (float)(*((float *)v5 + 19) * *(float *)(*((_DWORD *)v5 + 5) + 20)))
                     + (float)(*((float *)v5 + 20) * *(float *)(*((_DWORD *)v5 + 5) + 24)))
             / 0.0055556) < 130.0 )
  {
    CVehicle::AddExhaustParticles(v5);
  }
  CVehicle::AddDamagedVehicleParticles(v5);
  if ( *((_WORD *)v5 + 19) == 523 && !(~*v76 & 0x10 | ~v76[1] & 0x8000) && (*((_BYTE *)v5 + 71) & 0x20) == 0 )
  {
    v101 = 0.0000976562875;
    v95[1] = 1058642330;
    v102 = 0.3;
    v95[0] = -1097901015;
    v95[2] = 1050253722;
    if ( (CTimer::m_snTimeInMilliseconds & 0x1FFu) > 0xFF )
      CCoronas::RegisterCorona(
        (CBike *)((char *)v5 + 22),
        (unsigned int)v5,
        0,
        0,
        (unsigned int)(float)((float)(unk_966590 / 10.0) * 255.0),
        0xFFu,
        (unsigned __int8)&v101,
        (const CVector *)0x3ECCCCCD,
        40.0,
        0.0,
        0,
        0,
        0,
        0,
        0.0,
        0.0,
        1.5,
        0.0,
        30.0,
        0.0,
        1,
        ColModel);
    else
      CCoronas::RegisterCorona(
        (CBike *)((char *)v5 + 21),
        (unsigned int)v5,
        (CEntity *)(float)((float)(unk_966590 / 10.0) * 255.0),
        0,
        0,
        0xFFu,
        (unsigned __int8)v95,
        (const CVector *)0x3ECCCCCD,
        40.0,
        0.0,
        0,
        0,
        0,
        0,
        0.0,
        0.0,
        1.5,
        0.0,
        30.0,
        0.0,
        1,
        ColModel);
    CPointLights::AddLight();
  }
  CVehicle::DoVehicleLights(v5, (CBike *)((char *)v5 + 1504), 4u);
  CShadows::StoreShadowForVehicle(v5);
  v99 = 0;
  v100 = 0;
  v39 = *((float *)v5 + 294);
  v40 = CModelInfo::ms_modelInfoPtrs[*((__int16 *)v5 + 19)];
  v41 = cosf(v39);
  v42 = (const CVector *)*((_DWORD *)v5 + 5);
  *((float *)&v101 + 1) = v41;
  LODWORD(v101) = COERCE_UNSIGNED_INT(sinf(v39)) ^ 0x80000000;
  v102 = 0.0;
  Multiply3x3((const CMatrix *)v92, v42);
  v43 = *((_DWORD *)v5 + 5);
  v44 = *(double *)(v43 + 16);
  v91 = *(_DWORD *)(v43 + 24);
  v90 = v44;
  if ( *((float *)v5 + 465) > 0.0 || *((float *)v5 + 466) > 0.0 )
  {
    CPhysical::GetSpeed();
    v94 = v102;
    v93 = v101;
    v45 = COERCE_FLOAT(CVehicle::ProcessWheelRotation((int)v5, 0, (int)v92, (int)&v93, *(float *)(LODWORD(v40) + 88) * 0.5));
    *((float *)v5 + 475) = v45;
    *((float *)v5 + 473) = *((float *)v5 + 473) + (float)(v45 * *(float *)&CTimer::ms_fTimeStep);
  }
  if ( *((float *)v5 + 467) > 0.0 || *((float *)v5 + 468) > 0.0 )
  {
    CPhysical::GetSpeed();
    v94 = v102;
    v93 = v101;
    v46 = COERCE_FLOAT(
            CVehicle::ProcessWheelRotation(
              (int)v5,
              *((_DWORD *)v5 + 521),
              (int)&v90,
              (int)&v93,
              *(float *)(LODWORD(v40) + 92) * 0.5));
    *((float *)v5 + 476) = v46;
    *((float *)v5 + 474) = *((float *)v5 + 474) + (float)(v46 * *(float *)&CTimer::ms_fTimeStep);
  }
  if ( *((_DWORD *)v5 + 367) )
  {
    CMatrix::Attach();
    v89 = 0;
    v88 = &v86;
    v47 = v96;
    v48 = v97;
    v49 = v98;
    CMatrix::SetUnity((CMatrix *)v87);
    CMatrix::UpdateRW((CMatrix *)v87);
    v50 = *(float *)(LODWORD(v40) + 112);
    v85[0] = 0;
    v51 = (float)(v50 * 3.1416) / 180.0;
    v85[1] = sinf(v51);
    v85[2] = COERCE_UNSIGNED_INT(cosf(v51)) ^ 0x80000000;
    CVector::Normalise((CVector *)v85);
    CQuaternion::Set();
    CQuaternion::Get();
    CMatrix::Update((CMatrix *)v87);
    CMatrix::SetUnity((CMatrix *)v95);
    operator*();
    CMatrix::operator=();
    CMatrix::~CMatrix((CMatrix *)&v101);
    v5 = (CBike *)v84;
    v96 = v47 + v96;
    v97 = v48 + v97;
    v98 = v49 + v98;
    CMatrix::UpdateRW((CMatrix *)v95);
    if ( *(_DWORD *)(v84 + 1488) )
    {
      CMatrix::Attach();
      v53 = v96;
      v52 = v97;
      v54 = v98;
      if ( (*(_BYTE *)(v84 + 58) & 0xF0) == 0x20 )
      {
        CMatrix::SetUnity((CMatrix *)v95);
        operator*();
        CMatrix::operator=();
        CMatrix::~CMatrix((CMatrix *)&v101);
        v96 = v96 + v53;
        v97 = v97 + v52;
        v98 = v98 + v54;
      }
      else
      {
        CMatrix::SetTranslate((CMatrix *)v95, v96, v97, v98);
      }
      CMatrix::UpdateRW((CMatrix *)v95);
      v5 = (CBike *)v84;
    }
    CMatrix::~CMatrix((CMatrix *)v87);
  }
  if ( *((_DWORD *)v5 + 368) )
  {
    v55 = asinf((float)(*((float *)v5 + 478) - *((float *)v5 + 480)) / *((float *)v5 + 491));
    CMatrix::Attach();
    v56 = v96;
    v57 = v97;
    v58 = v98;
    CMatrix::SetRotate((CMatrix *)v95, COERCE_FLOAT(LODWORD(v55) ^ 0x80000000), 0.0, 0.0);
    v96 = v56 + v96;
    v97 = v57 + v97;
    v98 = v58 + v98;
    CMatrix::UpdateRW((CMatrix *)v95);
  }
  CMatrix::Attach();
  v59 = v96;
  v60 = *((float *)v5 + 477);
  v61 = v60 - *((float *)v5 + 493);
  v62 = (float)((float)((float)(*(float *)(*(_DWORD *)(v78 + 16) + 4) + *(float *)(*(_DWORD *)(v78 + 16) + 36)) * 0.5)
              - *((float *)v5 + 492))
      - (float)((float)(v60 - *((float *)v5 + 479)) * *((float *)v5 + 494));
  v63 = *((float *)v5 + 473);
  if ( *((_BYTE *)v5 + 1648) == 1 )
  {
    v64 = sinf(*((float *)v5 + 473));
    CMatrix::SetRotate((CMatrix *)v95, v63, 0.0, v64 * 0.05);
  }
  else
  {
    CMatrix::SetRotateX((CMatrix *)v95, *((float *)v5 + 473));
  }
  v97 = v62 + v97;
  v98 = v61 + v98;
  v96 = v96 + v59;
  CMatrix::UpdateRW((CMatrix *)v95);
  CMatrix::Attach();
  v96 = v59;
  v98 = v61;
  v97 = v62;
  CMatrix::UpdateRW((CMatrix *)v95);
  CMatrix::Attach();
  v65 = v96;
  v66 = v97;
  v67 = *((float *)v5 + 474);
  v68 = v98;
  if ( *((_BYTE *)v5 + 1649) == 1 )
  {
    v69 = sinf(*((float *)v5 + 474));
    CMatrix::SetRotate((CMatrix *)v95, v67, 0.0, v69 * 0.07);
  }
  else
  {
    CMatrix::SetRotateX((CMatrix *)v95, *((float *)v5 + 474));
  }
  v96 = v65 + v96;
  v97 = v66 + v97;
  v98 = v68 + v98;
  CMatrix::UpdateRW((CMatrix *)v95);
  if ( *((_DWORD *)v5 + 366) )
  {
    CMatrix::Attach();
    v70 = v96;
    v71 = *((float *)v5 + 407);
    v72 = v97;
    v73 = *(float *)(ColModel + 8);
    CMatrix::SetRotateX((CMatrix *)v95, fabsf(v71) * -0.05);
    CMatrix::RotateY((CMatrix *)v95, *((float *)v5 + 407));
    v74 = cosf(v71);
    v96 = v70 + v96;
    v97 = v72 + v97;
    v98 = (float)((float)(v73 * 0.9) * (float)(1.0 - v74)) + v98;
    CMatrix::UpdateRW((CMatrix *)v95);
  }
  CMatrix::~CMatrix((CMatrix *)v95);
}


// ============================================================

// Address: 0x566074
// Original: _ZN5CBike19CalculateLeanMatrixEv
// Demangled: CBike::CalculateLeanMatrix(void)
void __fastcall CBike::CalculateLeanMatrix(CBike *this)
{
  float *v2; // r5
  float v3; // s24
  float v4; // s18
  float v5; // s20
  float v6; // s22
  float v7; // r0
  float v8; // s8
  float v9; // s10
  float v10; // s6
  _DWORD v11[18]; // [sp+0h] [bp-C8h] BYREF
  _BYTE v12[128]; // [sp+48h] [bp-80h] BYREF

  if ( !*((_BYTE *)this + 1500) )
  {
    v11[16] = 0;
    v11[17] = 0;
    CMatrix::SetRotateX((CMatrix *)v11, fabsf(*((float *)this + 407)) * -0.05);
    CMatrix::RotateY((CMatrix *)v11, *((float *)this + 407));
    CMatrix::operator=();
    operator*();
    CMatrix::operator=();
    CMatrix::~CMatrix((CMatrix *)v12);
    v2 = (float *)*((_DWORD *)this + 5);
    v3 = *(float *)(CEntity::GetColModel(this) + 8);
    v4 = v2[8];
    v5 = v2[9];
    v6 = v2[10];
    v7 = cosf(*((float *)this + 407));
    v8 = *((float *)this + 389);
    v9 = *((float *)this + 390);
    v10 = *((float *)this + 388);
    *((_BYTE *)this + 1500) = 1;
    *((float *)this + 388) = v10 + (float)((float)(v3 * v4) * (float)(1.0 - v7));
    *((float *)this + 389) = (float)((float)(v3 * v5) * (float)(1.0 - v7)) + v8;
    *((float *)this + 390) = (float)((float)(v3 * v6) * (float)(1.0 - v7)) + v9;
    CMatrix::~CMatrix((CMatrix *)v11);
  }
}


// ============================================================

// Address: 0x566174
// Original: _ZN5CBike6RenderEv
// Demangled: CBike::Render(void)
int __fastcall CBike::Render(CBike *this)
{
  _DWORD v3[3]; // [sp+4h] [bp-Ch] BYREF

  v3[0] = 0;
  RwRenderStateGet(30, v3);
  RwRenderStateSet(30, 1);
  *((_DWORD *)this + 312) = CTimer::m_snTimeInMilliseconds + 3000;
  CVehicle::Render(this);
  if ( *((unsigned __int8 *)this + 1428) << 31 )
  {
    CBike::CalculateLeanMatrix(this);
    CVehicle::DoHeadLightBeam(this, 0, (CBike *)((char *)this + 1504), 1u);
  }
  return RwRenderStateSet(30, v3[0]);
}


// ============================================================

// Address: 0x5661d4
// Original: _ZN5CBike22ProcessEntityCollisionEP7CEntityP9CColPoint
// Demangled: CBike::ProcessEntityCollision(CEntity *,CColPoint *)
int __fastcall CBike::ProcessEntityCollision(int a1, int a2, int a3)
{
  int ColModel; // r10
  int v5; // r11
  __int64 v6; // d17
  CEntity *v7; // r0
  CMatrix *v8; // r6
  int v9; // r9
  int v10; // r0
  int v11; // r10
  CEntity *v12; // r0
  int v13; // lr
  bool v14; // zf
  int v15; // r6
  char v16; // r0
  int *v17; // r4
  float v18; // r0
  int v19; // r1
  int v20; // r0
  double v21; // d16
  int v22; // r0
  CEntity *v23; // r1
  int v24; // r9
  CMatrix *v25; // r6
  int v26; // r0
  int v27; // r9
  int v28; // r5
  char *v29; // r6
  int v30; // r3
  int v31; // r10
  int v32; // r9
  int v33; // r8
  int v34; // r11
  int v35; // r6
  float v36; // s0
  int v37; // r5
  int v38; // r1
  bool v39; // zf
  int v40; // r0
  float *v41; // r2
  int v42; // r0
  float v43; // s2
  float v44; // s4
  __int64 v45; // kr00_8
  unsigned int v46; // r1
  bool v47; // cc
  int v48; // r0
  int v49; // r2
  int v51; // [sp+10h] [bp-B8h]
  int *v52; // [sp+14h] [bp-B4h]
  __int64 *v53; // [sp+18h] [bp-B0h]
  int v54; // [sp+1Ch] [bp-ACh]
  double v57; // [sp+28h] [bp-A0h] BYREF
  float v58; // [sp+30h] [bp-98h]
  double v59; // [sp+38h] [bp-90h]
  float v60; // [sp+40h] [bp-88h]
  _BYTE v61[48]; // [sp+48h] [bp-80h] BYREF
  float v62; // [sp+78h] [bp-50h]
  float v63; // [sp+7Ch] [bp-4Ch]
  float v64; // [sp+80h] [bp-48h]
  _QWORD v65[2]; // [sp+90h] [bp-38h]

  if ( (*(_BYTE *)(a1 + 58) & 0xF8) != 0x10 )
    *(_DWORD *)(a1 + 1068) |= 0x1000000u;
  ColModel = CEntity::GetColModel((CEntity *)a1);
  v5 = *(_DWORD *)(ColModel + 44);
  v6 = *(_QWORD *)(a1 + 1836);
  v65[0] = *(_QWORD *)(a1 + 1828);
  v65[1] = v6;
  v7 = (CEntity *)a2;
  if ( (*(_BYTE *)(a1 + 69) & 0x90) != 0 || (*(_BYTE *)(a2 + 58) & 7) == 3 )
    *(_BYTE *)(v5 + 6) = 0;
  v8 = *(CMatrix **)(a2 + 20);
  v9 = *(_DWORD *)(a1 + 20);
  if ( !v8 )
  {
    CPlaceable::AllocateMatrix((CPlaceable *)a2);
    CSimpleTransform::UpdateMatrix((CSimpleTransform *)(a2 + 4), *(CMatrix **)(a2 + 20));
    v7 = (CEntity *)a2;
    v8 = *(CMatrix **)(a2 + 20);
  }
  v10 = CEntity::GetColModel(v7);
  v11 = CCollision::ProcessColModels(v9, ColModel, v8, v10, a3, a1 + 1652, a1 + 1828, 0);
  v12 = *(CEntity **)(a1 + 1124);
  v13 = a1;
  v14 = v12 == 0;
  if ( v12 )
    v14 = *(_BYTE *)(a1 + 1994) == 0;
  if ( v14 )
    goto LABEL_29;
  v15 = CEntity::GetColModel(v12);
  v16 = byte_A02538;
  __dmb(0xBu);
  if ( (v16 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_A02538) )
    j___cxa_guard_release((__guard *)&byte_A02538);
  v13 = a1;
  v17 = (int *)a2;
  if ( !*(_BYTE *)(*(_DWORD *)(v15 + 44) + 6) )
  {
    CMatrix::CMatrix((CMatrix *)v61, *(const CMatrix **)(a1 + 20));
    v18 = CModelInfo::ms_modelInfoPtrs[*(__int16 *)(a1 + 38)];
    v19 = *(_DWORD *)(LODWORD(v18) + 84);
    v20 = *(_DWORD *)(LODWORD(v18) + 116);
    if ( v19 != 5 )
      v20 += 48;
    v21 = *(double *)v20;
    v60 = *(float *)(v20 + 8);
    v59 = v21;
    Multiply3x3((const CMatrix *)&v57, *(const CVector **)(a1 + 20));
    v60 = v58;
    v59 = v57;
    v62 = *(float *)&v57 + v62;
    v63 = *((float *)&v57 + 1) + v63;
    v64 = v58 + v64;
    v22 = CEntity::GetColModel(*(CEntity **)(a1 + 1124));
    v23 = (CEntity *)a2;
    v24 = v22;
    v25 = *(CMatrix **)(a2 + 20);
    if ( !v25 )
    {
      CPlaceable::AllocateMatrix((CPlaceable *)a2);
      CSimpleTransform::UpdateMatrix((CSimpleTransform *)(a2 + 4), *(CMatrix **)(a2 + 20));
      v23 = (CEntity *)a2;
      v25 = *(CMatrix **)(a2 + 20);
    }
    v26 = CEntity::GetColModel(v23);
    v27 = CCollision::ProcessColModels((int)v61, v24, v25, v26, (int)&unk_A01FB8, 0, 0, 0);
    if ( v27 >= 1 )
    {
      if ( *(_BYTE *)(a1 + 1994) == 1 )
      {
        *(_BYTE *)(a1 + 1994) = 0;
      }
      else if ( v11 <= 30 )
      {
        v28 = 1;
        v29 = (char *)&unk_A01FB8;
        do
        {
          if ( v29[33] )
          {
            CColPoint::operator=();
            ++v11;
          }
          if ( v11 > 30 )
            break;
          v29 += 44;
          v47 = v28++ < v27;
        }
        while ( v47 );
      }
    }
    CMatrix::~CMatrix((CMatrix *)v61);
    v13 = a1;
LABEL_29:
    v17 = (int *)a2;
  }
  v51 = v11;
  if ( *(_BYTE *)(v5 + 6) )
  {
    v30 = v13 + 1412;
    v31 = 1412;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v53 = (__int64 *)(v13 + 28);
    v52 = v17 + 7;
    v54 = v13 + 1412;
    do
    {
      v36 = *(float *)(v30 + v34 + 416);
      if ( v36 < 1.0 && v36 < *(float *)((char *)v65 + v34) )
      {
        v37 = v13 + v33;
        ++v35;
        *(_BYTE *)(v13 + v31) = *(_BYTE *)(v13 + v33 + 1689);
        v38 = *((_BYTE *)v17 + 58) & 7;
        v39 = v38 == 4;
        if ( v38 != 4 )
          v39 = v38 == 2;
        if ( v39 )
        {
          *(_DWORD *)(v13 + v34 + 2004) = v17;
          CEntity::RegisterReference((CEntity *)v17, (CEntity **)(v30 + v34 + 592));
          v17 = (int *)a2;
          v30 = v54;
          v13 = a1;
          v40 = *(_DWORD *)(a2 + 20);
          v41 = (float *)(v40 + 48);
          if ( !v40 )
            v41 = (float *)(a2 + 4);
          v42 = v54 + v32;
          v43 = *(float *)(v37 + 1656) - v41[1];
          v44 = *(float *)(v54 + v33 + 248) - v41[2];
          *(float *)(v42 + 608) = *(float *)(v54 + v33 + 240) - *v41;
          *(float *)(a1 + v32 + 2024) = v43;
          *(float *)(v42 + 616) = v44;
          if ( (*(_BYTE *)(a2 + 58) & 7) == 2 )
            *(_BYTE *)(a1 + v31) = *(_BYTE *)(a2 + v31);
        }
        *(_BYTE *)(v13 + 190) = *(_BYTE *)(v37 + 1687);
        if ( (*((_BYTE *)v17 + 58) & 7) == 1 )
        {
          *(_DWORD *)(v13 + 1168) = v17;
          v45 = *v53;
          v46 = *(_DWORD *)v53 & 0xBFFFFFFF | ((((unsigned int)*v52 >> 30) & 1) << 30);
          *(_DWORD *)v53 = v46;
          *((_DWORD *)v53 + 1) = HIDWORD(v45);
          *(_DWORD *)v53 = v46 & 0x7FFFFFFF | ((*v52 < 0) << 31);
          *((_DWORD *)v53 + 1) = HIDWORD(v45);
          v30 = v54;
        }
      }
      v34 += 4;
      v32 += 12;
      v33 += 44;
      ++v31;
    }
    while ( v34 != 16 );
  }
  else
  {
    v35 = 0;
    *(_BYTE *)(v5 + 6) = 4;
  }
  v47 = v51 < 0;
  if ( v51 <= 0 )
    v47 = v35 < 1;
  if ( !v47 )
  {
    CPhysical::AddCollisionRecord((CPhysical *)v13, (CEntity *)v17);
    v48 = a2;
    if ( (*(_BYTE *)(a2 + 58) & 7) != 1 )
    {
      CPhysical::AddCollisionRecord((CPhysical *)a2, (CEntity *)a1);
      v48 = a2;
    }
    if ( v51 >= 1 )
    {
      v49 = *(_BYTE *)(v48 + 58) & 7;
      if ( v49 == 1 || v49 == 4 && (*(_BYTE *)(v48 + 68) & 4) != 0 )
        *(_DWORD *)(a1 + 28) |= 0x1000u;
    }
  }
  return v51;
}


// ============================================================

// Address: 0x5665b0
// Original: _ZN5CBike20ProcessControlInputsEh
// Demangled: CBike::ProcessControlInputs(uchar)
int __fastcall CBike::ProcessControlInputs(CBike *this, CPad *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d3
  float32x2_t v5; // d4
  int v8; // r1
  float v9; // s0
  float v10; // s4
  int v11; // r0
  int v12; // r0
  float v13; // s16
  CPad *Pad; // r0
  int v15; // r1
  int v16; // r0
  CPad *v17; // r0
  int v18; // r3
  CPad *v19; // r0
  int v20; // r1
  CPad *v21; // r0
  float v22; // r0
  int v23; // r1
  CPad *v24; // r0
  int Accelerate; // r6
  int v26; // r1
  CPad *v27; // r0
  int v28; // r0
  int *v29; // r1
  _DWORD *v30; // r6
  float v31; // s20
  CPad *v32; // r0
  CPad *v33; // r0
  float *v34; // r0
  float v35; // s0
  CPad *v36; // r0
  int v37; // r1
  CPad *v38; // r0
  int Brake; // r0
  int v40; // r0
  __int64 v41; // r0
  unsigned int v42; // r2
  int result; // r0
  CPlayerPed *PlayerPed; // r0
  float v45; // s0
  float v46; // s4
  float v47; // s2
  float v48; // s6
  float v49; // s6
  float v50; // [sp+20h] [bp-78h] BYREF
  float v51; // [sp+24h] [bp-74h]
  float v52; // [sp+28h] [bp-70h]
  _BYTE v53[108]; // [sp+2Ch] [bp-6Ch] BYREF

  v8 = *((_DWORD *)this + 404);
  if ( (float)(*(float *)(v8 + 48) - *(float *)(*((_DWORD *)this + 5) + 24)) <= 0.36 )
  {
    if ( (*((_BYTE *)this + 1071) & 0x40) == 0 )
      goto LABEL_14;
    v9 = -*((float *)this + 18);
    v10 = -*((float *)this + 20);
    v51 = -*((float *)this + 19);
    v50 = v9;
    v52 = v10;
    CVector::Normalise((CVector *)&v50);
    CEventKnockOffBike::CEventKnockOffBike(
      (int)v53,
      this,
      (int)this + 72,
      (int)&v50,
      *((float *)this + 36)
    * sqrtf(
        (float)((float)(*((float *)this + 18) * *((float *)this + 18))
              + (float)(*((float *)this + 19) * *((float *)this + 19)))
      + (float)(*((float *)this + 20) * *((float *)this + 20))),
      0.0,
      53,
      0,
      0,
      0,
      0,
      0);
  }
  else
  {
    if ( *((float *)this + 465) == 0.0
      && *((float *)this + 466) == 0.0
      && *((float *)this + 467) == 0.0
      && *((float *)this + 468) == 0.0 )
    {
      goto LABEL_14;
    }
    v50 = 0.0;
    v51 = 0.0;
    v52 = 1.0;
    CEventKnockOffBike::CEventKnockOffBike((int)v53, this, (int)this + 72, (int)&v50, 0.0, 0.0, 54, 1, 0, 0, 1, 0);
  }
  v11 = *((_DWORD *)this + 281);
  if ( v11 )
    CEventGroup::Add((CEventGroup *)(*(_DWORD *)(v11 + 1088) + 104), (CEvent *)v53, 0);
  v12 = *((_DWORD *)this + 282);
  if ( v12 )
    CEventGroup::Add((CEventGroup *)(*(_DWORD *)(v12 + 1088) + 104), (CEvent *)v53, 0);
  CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)v53);
LABEL_14:
  v13 = (float)((float)(*((float *)this + 18) * *(float *)(*((_DWORD *)this + 5) + 16))
              + (float)(*((float *)this + 19) * *(float *)(*((_DWORD *)this + 5) + 20)))
      + (float)(*((float *)this + 20) * *(float *)(*((_DWORD *)this + 5) + 24));
  Pad = (CPad *)CPad::GetPad(a2, v8);
  if ( CPad::GetExitVehicle(Pad) )
  {
    v16 = 32;
  }
  else
  {
    v17 = (CPad *)CPad::GetPad(a2, v15);
    v16 = 32 * (CPad::GetHandBrake(v17) != 0);
  }
  v18 = *((_DWORD *)this + 268);
  *((_DWORD *)this + 267) = v16 | *((_DWORD *)this + 267) & 0xFFFFFFDF;
  *((_DWORD *)this + 268) = v18;
  v19 = (CPad *)CPad::GetPad(a2, v18);
  *((float *)this + 359) = *((float *)this + 359)
                         + (float)(*(float *)&CTimer::ms_fTimeStep
                                 * (float)((float)((float)((float)-CPad::GetSteeringLeftRight(v19) * 0.0078125)
                                                 - *((float *)this + 359))
                                         * 0.2));
  v21 = (CPad *)CPad::GetPad(a2, v20);
  *((float *)this + 409) = *((float *)this + 409)
                         + (float)(*(float *)&CTimer::ms_fTimeStep
                                 * (float)((float)((float)((float)-CPad::GetSteeringUpDown(v21) * 0.0078125)
                                                 - *((float *)this + 409))
                                         * 0.2));
  v22 = COERCE_FLOAT(CVehicle::GetNewSteeringAmt(this));
  v2.n64_u32[0] = -1.0;
  v4.n64_u32[0] = *((_DWORD *)this + 409);
  v5.n64_u32[0] = 1.0;
  v3.n64_f32[0] = v22 + *((float *)this + 359);
  *((_DWORD *)this + 409) = vmin_f32(vmax_f32(v4, v2), v5).n64_u32[0];
  *((_DWORD *)this + 359) = vmin_f32(vmax_f32(v3, v2), v5).n64_u32[0];
  v24 = (CPad *)CPad::GetPad(a2, v23);
  Accelerate = CPad::GetAccelerate(v24);
  v27 = (CPad *)CPad::GetPad(a2, v26);
  v28 = Accelerate - CPad::GetBrake(v27);
  v30 = (_DWORD *)((char *)this + 1068);
  v31 = (float)v28 / 255.0;
  if ( fabsf(v13) >= 0.01 )
  {
    v34 = (float *)((char *)this + 1184);
    if ( v13 >= 0.0 )
    {
      if ( v31 < 0.0 )
      {
        v35 = -v31;
        v29 = 0;
        *v34 = 0.0;
LABEL_29:
        *((float *)this + 297) = v35;
        goto LABEL_30;
      }
    }
    else if ( v31 >= 0.0 )
    {
      v29 = 0;
      *v34 = 0.0;
      *((float *)this + 297) = v31;
      goto LABEL_30;
    }
    *v34 = v31;
    *((_DWORD *)this + 297) = 0;
    goto LABEL_30;
  }
  v32 = (CPad *)CPad::GetPad(a2, (int)v29);
  if ( CPad::GetAccelerate(v32) >= 151 )
  {
    v33 = (CPad *)CPad::GetPad(a2, (int)v29);
    if ( CPad::GetBrake(v33) >= 151 && *((_DWORD *)this + 361) != 10 )
    {
      v36 = (CPad *)CPad::GetPad(a2, (int)v29);
      *((float *)this + 296) = (float)CPad::GetAccelerate(v36) / 255.0;
      v38 = (CPad *)CPad::GetPad(a2, v37);
      Brake = CPad::GetBrake(v38);
      *((_WORD *)this + 990) = 1;
      v35 = (float)Brake / 255.0;
      goto LABEL_29;
    }
  }
  *((_DWORD *)this + 297) = 0;
  *((float *)this + 296) = v31;
LABEL_30:
  v40 = *((char *)this + 1064);
  if ( v40 < 0 || (v29 = (int *)CVehicleRecording::bUseCarAI, CVehicleRecording::bUseCarAI[v40]) )
    *((float *)this + 294) = *((float *)this + 359)
                           * (float)((float)(*(float *)(*((_DWORD *)this + 226) + 160) * 3.1416) / 180.0);
  if ( (*v30 & 0x1000) != 0 )
  {
    LODWORD(v41) = *v30 & 0xFFFFFFDF;
    HIDWORD(v41) = *((_DWORD *)this + 268);
    v42 = CTimer::m_snTimeInMilliseconds;
    if ( (((unsigned int)CTimer::m_snTimeInMilliseconds >> 12) & 3) != 3 )
      *((_DWORD *)this + 296) = 1065353216;
    if ( (((unsigned __int8)(v42 >> 10) + 6) & 0xCu) <= 0xB )
      *((_DWORD *)this + 297) = 0;
    *(_QWORD *)v30 = v41;
    v29 = dword_566A78;
    if ( (v42 & 0x800) != 0 )
      v29 = &dword_566A78[1];
    *((float *)this + 294) = *((float *)this + 294) + *(float *)v29;
  }
  result = *(unsigned __int16 *)(CPad::GetPad(0, (int)v29) + 272);
  if ( result )
  {
    result = CGameLogic::SkipState;
    if ( CGameLogic::SkipState != 2 )
    {
      *v30 |= 0x20u;
      *((_DWORD *)this + 296) = 0;
      *((_DWORD *)this + 297) = 1065353216;
      PlayerPed = (CPlayerPed *)FindPlayerPed(-1);
      result = CPlayerPed::KeepAreaAroundPlayerClear(PlayerPed);
      v45 = *((float *)this + 18);
      v46 = *((float *)this + 19);
      v47 = *((float *)this + 20);
      v48 = sqrtf((float)((float)(v45 * v45) + (float)(v46 * v46)) + (float)(v47 * v47));
      if ( v48 > 0.28 )
      {
        v49 = 0.28 / v48;
        *((float *)this + 18) = v45 * v49;
        *((float *)this + 19) = v46 * v49;
        *((float *)this + 20) = v47 * v49;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x566a88
// Original: _ZN5CBike21GetAllWheelsOffGroundEv
// Demangled: CBike::GetAllWheelsOffGround(void)
bool __fastcall CBike::GetAllWheelsOffGround(CBike *this)
{
  return *((_BYTE *)this + 2073) == 0;
}


// ============================================================

// Address: 0x566a96
// Original: _ZN5CBike9DebugCodeEv
// Demangled: CBike::DebugCode(void)
void __fastcall CBike::DebugCode(CBike *this)
{
  ;
}


// ============================================================

// Address: 0x566a98
// Original: _ZN5CBike9BlowUpCarEP7CEntityh
// Demangled: CBike::BlowUpCar(CEntity *,uchar)
int __fastcall CBike::BlowUpCar(CBike *this, CEntity *a2, int a3)
{
  int result; // r0
  __int64 *v7; // r11
  float v8; // s0
  int v9; // r3
  int *v10; // r5
  int v11; // r1
  float *v12; // r6
  __int64 v13; // kr00_8
  int v14; // r0
  int v15; // r2

  result = *((unsigned __int8 *)this + 1070) << 26;
  if ( result < 0 )
  {
    v7 = (__int64 *)((char *)this + 1068);
    v8 = *((float *)this + 20) + 0.13;
    v9 = *((_DWORD *)this + 17);
    *((_BYTE *)this + 58) = *((_BYTE *)this + 58) & 7 | 0x28;
    *((_DWORD *)this + 17) = v9 | 0x20000000;
    *((float *)this + 20) = v8;
    CVisibilityPlugins::SetClumpForAllAtomicsFlag();
    v10 = (int *)((char *)this + 4);
    v11 = *((_DWORD *)this + 5);
    v12 = (float *)((char *)this + 4);
    *((_WORD *)this + 631) = 0;
    *((_DWORD *)this + 307) = 0;
    if ( v11 )
      v12 = (float *)(v11 + 48);
    CCamera::CamShake((CCamera *)&TheCamera, 0.4, *v12, v12[1], v12[2]);
    CVehicle::KillPedsInVehicle(this);
    v13 = *v7;
    *((_BYTE *)this + 1202) &= 0xE7u;
    *(_DWORD *)v7 = v13 & 0xFFFFFFAF;
    *((_DWORD *)this + 268) = HIDWORD(v13);
    CVehicle::ChangeLawEnforcerState(this, 0);
    v14 = *((_DWORD *)this + 5);
    if ( v14 )
      v10 = (int *)(v14 + 48);
    CExplosion::AddExplosion((int)this, (int)a2, 4, *v10, v10[1], v10[2], 0, 1, -1.0, a3);
    return sub_18CC38(this, 0, v15);
  }
  return result;
}


// ============================================================

// Address: 0x566b94
// Original: _ZN5CBike19RemoveRefsToVehicleEP7CEntity
// Demangled: CBike::RemoveRefsToVehicle(CEntity *)
_DWORD *__fastcall CBike::RemoveRefsToVehicle(_DWORD *this, CEntity *a2)
{
  if ( (CEntity *)this[501] == a2 )
    this[501] = 0;
  if ( (CEntity *)this[502] == a2 )
    this[502] = 0;
  if ( (CEntity *)this[503] == a2 )
    this[503] = 0;
  if ( (CEntity *)this[504] == a2 )
    this[504] = 0;
  return this;
}


// ============================================================

// Address: 0x566bd0
// Original: _ZN5CBike18SetUpWheelColModelEP9CColModel
// Demangled: CBike::SetUpWheelColModel(CColModel *)
int __fastcall CBike::SetUpWheelColModel(CBike *this, CColModel *a2)
{
  int v4; // r6
  _QWORD *ColModel; // r0
  __int64 v6; // d17
  __int64 v7; // d17
  __int64 v8; // d18
  int v9; // r0
  __int64 v10; // d16
  __int64 v11; // d17
  __int64 v12; // d18
  __int64 v13; // d19
  __int64 v14; // d20
  __int64 v15; // d21
  __int64 v16; // d23
  int v17; // r8
  float v18; // s0
  CColSphere *v19; // r0
  int v20; // r0
  __int64 v21; // d16
  __int64 v22; // d17
  __int64 v23; // d18
  __int64 v24; // d19
  __int64 v25; // d20
  __int64 v26; // d21
  __int64 v27; // d23
  int v28; // r5
  int v29; // r0
  float v30; // s0
  int v32; // [sp+8h] [bp-80h]
  float v33; // [sp+Ch] [bp-7Ch]
  double v34; // [sp+10h] [bp-78h] BYREF
  int v35; // [sp+18h] [bp-70h]
  __int64 v36; // [sp+20h] [bp-68h]
  __int64 v37; // [sp+28h] [bp-60h]
  __int64 v38; // [sp+30h] [bp-58h]
  __int64 v39; // [sp+38h] [bp-50h]
  __int64 v40; // [sp+40h] [bp-48h]
  __int64 v41; // [sp+48h] [bp-40h]
  double v42; // [sp+50h] [bp-38h]
  __int64 v43; // [sp+58h] [bp-30h]

  v4 = *((_DWORD *)this + 366);
  v32 = *((_DWORD *)a2 + 11);
  v33 = CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)];
  ColModel = (_QWORD *)CEntity::GetColModel(this);
  v6 = ColModel[4];
  *((_QWORD *)a2 + 3) = ColModel[3];
  *((_QWORD *)a2 + 4) = v6;
  v7 = ColModel[1];
  v8 = ColModel[2];
  *(_QWORD *)a2 = *ColModel;
  *((_QWORD *)a2 + 1) = v7;
  *((_QWORD *)a2 + 2) = v8;
  v9 = *((_DWORD *)this + 369);
  v10 = *(_QWORD *)(v9 + 16);
  v11 = *(_QWORD *)(v9 + 24);
  v12 = *(_QWORD *)(v9 + 32);
  v13 = *(_QWORD *)(v9 + 40);
  v14 = *(_QWORD *)(v9 + 48);
  v15 = *(_QWORD *)(v9 + 56);
  v16 = *(_QWORD *)(v9 + 72);
  v42 = *(double *)(v9 + 64);
  v43 = v16;
  v40 = v14;
  v41 = v15;
  v36 = v10;
  v37 = v11;
  v38 = v12;
  v39 = v13;
  v17 = *(_DWORD *)(v9 + 4);
  while ( v17 )
  {
    RwMatrixTransform();
    v17 = *(_DWORD *)(v17 + 4);
    if ( v17 == v4 )
      v17 = 0;
  }
  v18 = *(float *)(LODWORD(v33) + 88);
  v19 = *(CColSphere **)(v32 + 8);
  v35 = v43;
  v34 = v42;
  CColSphere::Set(v19, v18 * 0.5, (const CVector *)&v34, 0x43u, 0xDu, 0xFFu);
  v20 = *((_DWORD *)this + 370);
  v21 = *(_QWORD *)(v20 + 16);
  v22 = *(_QWORD *)(v20 + 24);
  v23 = *(_QWORD *)(v20 + 32);
  v24 = *(_QWORD *)(v20 + 40);
  v25 = *(_QWORD *)(v20 + 48);
  v26 = *(_QWORD *)(v20 + 56);
  v27 = *(_QWORD *)(v20 + 72);
  v42 = *(double *)(v20 + 64);
  v43 = v27;
  v40 = v25;
  v41 = v26;
  v36 = v21;
  v37 = v22;
  v38 = v23;
  v39 = v24;
  v28 = *(_DWORD *)(v20 + 4);
  while ( v28 )
  {
    RwMatrixTransform();
    v28 = *(_DWORD *)(v28 + 4);
    if ( v28 == v4 )
      v28 = 0;
  }
  v29 = *(_DWORD *)(v32 + 8);
  v30 = *(float *)(LODWORD(v33) + 92) * 0.5;
  v35 = v43;
  v34 = v42;
  CColSphere::Set((CColSphere *)(v29 + 20), v30, (const CVector *)&v34, 0x43u, 0xFu, 0xFFu);
  *(_WORD *)v32 = 2;
  return 1;
}


// ============================================================

// Address: 0x566d60
// Original: _ZN5CBike9BurstTyreEhb
// Demangled: CBike::BurstTyre(uchar,bool)
int __fastcall CBike::BurstTyre(CBike *this, int a2, int a3)
{
  int v5; // r6
  int v6; // r5
  CVehicle *v8; // r1
  float v9; // s16
  float v10; // s0
  float v11; // s0
  float *v12; // r0
  float v13; // s0
  _BYTE v14[60]; // [sp+20h] [bp-A8h] BYREF
  _BYTE v15[108]; // [sp+5Ch] [bp-6Ch] BYREF

  v5 = a2;
  if ( *((int *)this + 267) < 0 || (*((_BYTE *)this + 71) & 0x20) != 0 )
    return 0;
  if ( a2 == 15 )
  {
    v5 = 1;
  }
  else if ( a2 == 13 )
  {
    v5 = 0;
  }
  if ( *((_BYTE *)this + v5 + 1648) )
  {
    v6 = 0;
  }
  else
  {
    *((_BYTE *)this + v5 + 1648) = 1;
    CAEVehicleAudioEntity::AddAudioEvent((CBike *)((char *)this + 316), 90, 0.0);
    if ( (*((_BYTE *)this + 58) & 0xF8) == 0x10 )
      CCarCtrl::SwitchVehicleToRealPhysics(this, v8);
    if ( a3 == 1 )
    {
      v9 = fBikeBurstForceMult;
      v10 = *((float *)this + 36) * (float)((float)((float)(v9 + v9) * (float)((float)rand() * 4.6566e-10)) - v9);
      CPhysical::ApplyMoveForce(
        this,
        **((float **)this + 5) * v10,
        *(float *)(*((_DWORD *)this + 5) + 4) * v10,
        *(float *)(*((_DWORD *)this + 5) + 8) * v10);
      rand();
      CPhysical::ApplyTurnForce();
    }
    v6 = 1;
  }
  if ( *((_DWORD *)this + 281) )
  {
    if ( v5 == 13 )
    {
      v11 = 1.0;
      if ( *((float *)this + 461) < 1.0 )
      {
LABEL_25:
        v13 = sqrtf(
                (float)((float)(*((float *)this + 18) * *((float *)this + 18))
                      + (float)(*((float *)this + 19) * *((float *)this + 19)))
              + (float)(*((float *)this + 20) * *((float *)this + 20)));
        if ( v13 > fBikeBurstFallSpeed && (*((unsigned __int8 *)this + 58) > 7u || v13 > fBikeBurstFallSpeedPlayer) )
        {
          if ( v5 == 13 )
          {
            CEventKnockOffBike::CEventKnockOffBike(
              (int)v15,
              this,
              (int)this + 72,
              (int)this + 228,
              0.0,
              0.0,
              49,
              0,
              0,
              0,
              1,
              0);
            CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*((_DWORD *)this + 281) + 1088) + 104), (CEvent *)v15, 0);
            if ( *((_DWORD *)this + 282) )
            {
              CEventKnockOffBike::CEventKnockOffBike(
                (int)v14,
                this,
                (int)this + 72,
                (int)this + 228,
                0.0,
                0.0,
                49,
                0,
                0,
                0,
                0,
                0);
              CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*((_DWORD *)this + 282) + 1088) + 104), (CEvent *)v14, 0);
              CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)v14);
            }
            CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)v15);
          }
          else
          {
            CPhysical::ApplyTurnForce();
          }
        }
        return v6;
      }
      v12 = (float *)((char *)this + 1848);
    }
    else
    {
      if ( v5 != 14 )
        return v6;
      v11 = 1.0;
      if ( *((float *)this + 463) < 1.0 )
        goto LABEL_25;
      v12 = (float *)((char *)this + 1856);
    }
    if ( *v12 >= v11 )
      return v6;
    goto LABEL_25;
  }
  return v6;
}


// ============================================================

// Address: 0x567040
// Original: _ZN5CBike26DoBurstAndSoftGroundRatiosEv
// Demangled: CBike::DoBurstAndSoftGroundRatios(void)
int __fastcall CBike::DoBurstAndSoftGroundRatios(CBike *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d8
  float32x2_t v4; // d14
  float *v5; // r5
  char *v6; // r2
  int v7; // r6
  int v8; // r8
  int v9; // r9
  int v10; // r10
  float v11; // s18
  int v12; // r0
  float *v13; // r0
  float *v14; // r1
  float *v15; // r0
  float *v16; // r4
  float v17; // s21
  float *v18; // r0
  float v19; // s0
  char *v20; // r0
  float v21; // s25
  float v22; // s27
  float v23; // s23
  float v24; // s31
  float v25; // r5
  float v26; // s25
  float v27; // s2
  float v28; // s2
  float v29; // s0
  float *v30; // r6
  unsigned __int8 *v31; // r5
  int v32; // r4
  float v33; // s18
  int result; // r0
  int v35; // [sp+4h] [bp-74h]
  float v36; // [sp+8h] [bp-70h]
  char *v38; // [sp+10h] [bp-68h]
  _DWORD v39[25]; // [sp+14h] [bp-64h]

  v5 = (float *)this;
  v39[0] = 16843009;
  v3.n64_u32[0] = 1.0;
  v6 = (char *)this + 1648;
  v7 = 1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v4.n64_u32[0] = 1045220557;
  v11 = fabsf(
          (float)((float)(v5[18] * *(float *)(*((_DWORD *)this + 5) + 16))
                + (float)(v5[19] * *(float *)(*((_DWORD *)this + 5) + 20)))
        + (float)(v5[20] * *(float *)(*((_DWORD *)this + 5) + 24)));
  v35 = LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]) + 92;
  v36 = CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)];
  v38 = (char *)this + 1648;
  do
  {
    v12 = (unsigned __int8)v6[v10];
    if ( v10 == 1 )
    {
      v9 = 2;
      v7 = 3;
    }
    if ( v12 == 1 )
    {
      if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259)
                      * (float)(int)((unsigned int)(float)(v11 * 40.0) + 98)) <= 99 )
      {
        v13 = &v5[v9];
        v2.n64_f32[0] = v13[485];
        v1.n64_f32[0] = v13[481];
        v14 = &v5[v9 + 457];
        v15 = &v5[v7 + 457];
        v1.n64_f32[0] = (float)((float)(v2.n64_f32[0] - v1.n64_f32[0]) * 0.2) / v2.n64_f32[0];
        v2.n64_f32[0] = *v14 + v1.n64_f32[0];
        v2.n64_u64[0] = vmin_f32(v2, v3).n64_u64[0];
        *v14 = v2.n64_f32[0];
        v1.n64_f32[0] = *v15 + v1.n64_f32[0];
        v1.n64_u64[0] = vmin_f32(v1, v3).n64_u64[0];
        goto LABEL_22;
      }
LABEL_23:
      v6 = v38;
LABEL_24:
      *((_BYTE *)v39 + v9) = 0;
      *((_BYTE *)v39 + v7) = 0;
      goto LABEL_25;
    }
    if ( v12 == 2 )
    {
      v5[v9 + 457] = 1.0;
      v5[v7 + 457] = 1.0;
      goto LABEL_24;
    }
    v16 = &v5[v9];
    v17 = v16[457];
    if ( v17 < 1.0 && HIBYTE(v5[11 * v9 + 421]) == 178 || v5[v7 + 457] < 1.0 && HIBYTE(v5[11 * v7 + 421]) == 178 )
    {
      v18 = (float *)v35;
      if ( !v10 )
        v18 = (float *)(LODWORD(v36) + 88);
      v19 = *v18;
      v20 = &v6[v8];
      v21 = 1.5 / (float)(v19 * 0.5);
      if ( v11 > 0.3 )
        v21 = (float)(v11 / 0.3) * v21;
      v22 = *((float *)v20 + 61);
      v23 = *((float *)v20 + 63);
      v24 = v22 / v21;
      v25 = floorf(v22 / v21);
      v26 = (float)(v22 + (float)(v23 * *(float *)&CTimer::ms_fTimeStep)) / v21;
      v27 = v25;
      v5 = (float *)this;
      v28 = v24 - v27;
      v29 = v26 - floorf(v26);
      if ( v23 > 0.0 && v29 < v28 || v23 < 0.0 && v29 > v28 )
      {
        v15 = (float *)((char *)this + 4 * v7 + 1828);
        v1.n64_f32[0] = (float)((float)(v16[485] - v16[481]) * 0.3) / v16[485];
        v2.n64_f32[0] = v17 - v1.n64_f32[0];
        v2.n64_u64[0] = vmax_f32(v2, v4).n64_u64[0];
        v16[457] = v2.n64_f32[0];
        v1.n64_f32[0] = *v15 - v1.n64_f32[0];
        v1.n64_u64[0] = vmax_f32(v1, v4).n64_u64[0];
LABEL_22:
        *v15 = v1.n64_f32[0];
      }
      goto LABEL_23;
    }
LABEL_25:
    ++v10;
    v8 += 4;
  }
  while ( v10 != 2 );
  v30 = v5 + 457;
  v31 = (unsigned __int8 *)v5 + 1687;
  v4.n64_u32[0] = 1053609165;
  v32 = 0;
  v33 = (float)((float)(v11 * -0.7) / 0.3) + 1.0;
  do
  {
    result = *((unsigned __int8 *)v39 + v32);
    if ( *((_BYTE *)v39 + v32) )
    {
      if ( *v30 < 1.0 )
      {
        result = SurfaceInfos_c::GetAdhesionGroup((SurfaceInfos_c *)&g_surfaceInfos, *v31);
        if ( result == 4 )
        {
          result = *((unsigned __int16 *)this + 19);
          if ( result != 432 )
          {
            v1.n64_u32[0] = 1036831949;
            result = *((_DWORD *)this + 228);
            if ( (result & 0x200000) == 0 )
            {
              result <<= 11;
              v1.n64_u32[0] = 1041865114;
              if ( result >= 0 )
                v1.n64_u32[0] = 0.25;
            }
            v2.n64_f32[0] = v33 + (float)(CWeather::WetRoads * -0.7);
            v2.n64_u64[0] = vmax_f32(v2, v4).n64_u64[0];
            v1.n64_f32[0] = *v30
                          + (float)((float)((float)(v30[28] - v30[24]) * (float)(v1.n64_f32[0] * v2.n64_f32[0]))
                                  / v30[28]);
            v1.n64_u64[0] = vmin_f32(v1, v3).n64_u64[0];
            *v30 = v1.n64_f32[0];
          }
        }
      }
    }
    ++v32;
    ++v30;
    v31 += 44;
  }
  while ( v32 != 4 );
  return result;
}


// ============================================================

// Address: 0x5673cc
// Original: _ZN5CBike3FixEv
// Demangled: CBike::Fix(void)
int __fastcall CBike::Fix(int this)
{
  char v1; // r1
  int v2; // r2

  v1 = *(_BYTE *)(this + 1576);
  *(_WORD *)(this + 1648) = 0;
  v2 = *(_DWORD *)(this + 1068);
  *(_BYTE *)(this + 1576) = v1 & 0xBF;
  *(_DWORD *)(this + 1068) = v2 & 0xFFFEFFFF;
  return this;
}


// ============================================================

// Address: 0x5673ec
// Original: _ZN5CBike20SetupDamageAfterLoadEv
// Demangled: CBike::SetupDamageAfterLoad(void)
void __fastcall CBike::SetupDamageAfterLoad(CBike *this)
{
  ;
}


// ============================================================

// Address: 0x5673ee
// Original: _ZN5CBike11PlayCarHornEv
// Demangled: CBike::PlayCarHorn(void)
CPed *__fastcall CBike::PlayCarHorn(CBike *this)
{
  int v2; // r0
  bool v3; // zf
  CPed *result; // r0
  char v5; // r0
  unsigned int v6; // r1
  bool v7; // zf

  v2 = *((unsigned __int16 *)this + 560);
  v3 = v2 == 0;
  if ( v2 )
    v3 = v2 == 0xFFFF;
  if ( v3 || (result = (CPed *)(*((_BYTE *)this + 58) & 0xF8), result == (CPed *)&word_28) )
  {
    result = (CPed *)*((_DWORD *)this + 329);
    if ( !result )
    {
      if ( *((_BYTE *)this + 1321) )
      {
        result = (CPed *)(*((unsigned __int8 *)this + 1321) - 1);
        *((_BYTE *)this + 1321) = (_BYTE)result;
        return result;
      }
      v5 = (rand() & 0x7F) - 106;
      *((_BYTE *)this + 1321) = v5;
      v6 = v5 & 7;
      if ( v6 > 1 )
      {
        result = (CPed *)*((_DWORD *)this + 281);
        if ( v6 > 3 )
        {
          if ( result )
            return (CPed *)CPed::Say(result, 0x16u, 0, 1.0, 0, 0, 0);
          return result;
        }
        v7 = result == 0;
        if ( result )
          v7 = *((unsigned __int8 *)this + 991) << 31 == 0;
        if ( !v7 )
          CPed::Say(result, 0x16u, 0, 1.0, 0, 0, 0);
      }
      result = (CPed *)(&word_2C + 1);
      *((_DWORD *)this + 329) = 45;
    }
  }
  return result;
}


// ============================================================

// Address: 0x567494
// Original: _ZN5CBike19PlaceOnRoadProperlyEv
// Demangled: CBike::PlaceOnRoadProperly(void)
float *__fastcall CBike::PlaceOnRoadProperly(CBike *this)
{
  float v2; // s24
  int ColModel; // r0
  float *v4; // r1
  float *v5; // r5
  float *v6; // r2
  float v7; // s0
  float v8; // s2
  float v9; // s10
  float v10; // s6
  float v11; // s8
  float v12; // s28
  float v13; // s16
  float v14; // s18
  float v15; // s22
  float v16; // s20
  float v17; // s26
  int v18; // r1
  int v19; // r0
  __int64 v20; // kr00_8
  int v21; // r3
  float *v22; // r1
  float *v23; // r1
  float v24; // s0
  float v25; // s30
  int v26; // r0
  float *v27; // r6
  __int64 v28; // r2
  float v29; // s24
  float v30; // r5
  float v31; // r0
  int v32; // r1
  int v33; // r2
  float v34; // s0
  int v35; // r0
  float v36; // s2
  float v37; // s4
  float v38; // s0
  float *result; // r0
  _DWORD v40[3]; // [sp+20h] [bp-98h] BYREF
  float v41; // [sp+2Ch] [bp-8Ch] BYREF
  float v42; // [sp+30h] [bp-88h]
  float v43; // [sp+34h] [bp-84h]
  int v44; // [sp+38h] [bp-80h] BYREF
  _BYTE v45[8]; // [sp+3Ch] [bp-7Ch] BYREF
  float v46; // [sp+44h] [bp-74h]
  unsigned __int8 v47; // [sp+61h] [bp-57h]

  v2 = *(float *)(CEntity::GetColModel(this) + 16);
  ColModel = CEntity::GetColModel(this);
  v4 = (float *)*((_DWORD *)this + 5);
  v5 = (float *)((char *)this + 4);
  v6 = (float *)((char *)this + 4);
  v7 = v4[4];
  v8 = v4[5];
  if ( v4 )
    v6 = v4 + 12;
  v9 = v6[2];
  v10 = *v6;
  v11 = v6[1];
  v12 = *(float *)(ColModel + 4);
  v13 = (float)(v2 * v7) + *v6;
  v14 = (float)(v2 * v8) + v11;
  v43 = v9 + 5.0;
  v15 = v11 + (float)(v8 * v12);
  v16 = v10 + (float)(v7 * v12);
  v42 = v14;
  v41 = (float)(v2 * v7) + v10;
  if ( CWorld::ProcessVerticalLine((CVector *)&v41, COERCE_INT(v9 + -5.0), (int)v45, (int)&v44, 1, 0, 0, 0, 0, 0, 0) == 1 )
  {
    v17 = v46;
    *((_DWORD *)this + 341) = v47;
    v18 = v44;
    *((_DWORD *)this + 292) = v44;
    v19 = *((_DWORD *)this + 5);
    v20 = *(_QWORD *)((char *)this + 28);
    v21 = v20 & 0xBFFFFFFF | (((*(_DWORD *)(v18 + 28) >> 30) & 1) << 30);
    *((_DWORD *)this + 7) = v21;
    *((_DWORD *)this + 8) = HIDWORD(v20);
    *((_DWORD *)this + 7) = *(_DWORD *)(v18 + 28) & 0x80000000 | v21 & 0x7FFFFFFF;
    *((_DWORD *)this + 8) = HIDWORD(v20);
  }
  else
  {
    v19 = *((_DWORD *)this + 5);
    v22 = (float *)((char *)this + 4);
    if ( v19 )
      v22 = (float *)(v19 + 48);
    v17 = v22[2];
  }
  v23 = (float *)((char *)this + 4);
  if ( v19 )
    v23 = (float *)(v19 + 48);
  v24 = v23[2];
  v42 = v11 + (float)(v8 * v12);
  v41 = v16;
  v43 = v24 + 5.0;
  if ( CWorld::ProcessVerticalLine((CVector *)&v41, COERCE_INT(v24 + -5.0), (int)v45, (int)&v44, 1, 0, 0, 0, 0, 0, 0) == 1 )
  {
    v25 = v46;
    *((_DWORD *)this + 352) = v47;
    v26 = v44;
    *((_DWORD *)this + 292) = v44;
    v27 = (float *)*((_DWORD *)this + 5);
    v28 = *(_QWORD *)((char *)this + 28);
    LODWORD(v28) = v28 & 0xBFFFFFFF | (((*(_DWORD *)(v26 + 28) >> 30) & 1) << 30);
    *(_QWORD *)((char *)this + 28) = v28;
    *((_DWORD *)this + 7) = *(_DWORD *)(v26 + 28) & 0x80000000 | v28 & 0x7FFFFFFF;
    *((_DWORD *)this + 8) = HIDWORD(v28);
  }
  else
  {
    v27 = (float *)*((_DWORD *)this + 5);
    if ( v27 )
      v5 = v27 + 12;
    v25 = v5[2];
  }
  v29 = v2 - v12;
  v30 = atanf((float)(v17 - v25) / v29);
  *v27 = (float)(v14 - v15) / v29;
  *(float *)(*((_DWORD *)this + 5) + 4) = (float)-(float)(v13 - v16) / v29;
  *(_DWORD *)(*((_DWORD *)this + 5) + 8) = 0;
  v31 = cosf(v30);
  *(float *)(*((_DWORD *)this + 5) + 16) = -(float)(v31 * *(float *)(*((_DWORD *)this + 5) + 4));
  *(float *)(*((_DWORD *)this + 5) + 20) = v31 * **((float **)this + 5);
  *(float *)(*((_DWORD *)this + 5) + 24) = sinf(v30);
  CrossProduct((const CVector *)v40, *((const CVector **)this + 5));
  v32 = v40[1];
  v33 = v40[2];
  *(_DWORD *)(*((_DWORD *)this + 5) + 32) = v40[0];
  *(_DWORD *)(*((_DWORD *)this + 5) + 36) = v32;
  *(_DWORD *)(*((_DWORD *)this + 5) + 40) = v33;
  v34 = COERCE_FLOAT((*(int (__fastcall **)(CBike *))(*(_DWORD *)this + 216))(this));
  v35 = *((_DWORD *)this + 5);
  v36 = (float)(v14 + v15) * 0.5;
  v37 = (float)(v13 + v16) * 0.5;
  v38 = (float)((float)(v17 + v25) * 0.5) + v34;
  if ( v35 )
  {
    *(float *)(v35 + 48) = v37;
    *(float *)(*((_DWORD *)this + 5) + 52) = v36;
    result = (float *)(*((_DWORD *)this + 5) + 56);
  }
  else
  {
    result = (float *)((char *)this + 12);
    *((float *)this + 1) = v37;
    *((float *)this + 2) = v36;
  }
  *result = v38;
  return result;
}


// ============================================================

// Address: 0x5676e2
// Original: _ZN5CBike22IsRoomForPedToLeaveCarEjP7CVector
// Demangled: CBike::IsRoomForPedToLeaveCar(uint,CVector *)
int __fastcall CBike::IsRoomForPedToLeaveCar(CBike *this, unsigned int a2, CVector *a3)
{
  return 1;
}


// ============================================================

// Address: 0x5676e8
// Original: _ZN5CBike29GetCorrectedWorldDoorPositionER7CVectorS0_S0_
// Demangled: CBike::GetCorrectedWorldDoorPosition(CVector &,CVector,CVector)
int __fastcall CBike::GetCorrectedWorldDoorPosition(
        float *a1,
        float *a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  int v10; // r0
  float *v13; // r0
  float v14; // s16
  float v15; // s18
  int ColModel; // r0
  float v17; // s0
  float v18; // s2
  bool v19; // cc
  float v20; // s6
  float v21; // s0
  float *v22; // r0
  float v23; // s0
  float v24; // s1
  float v25; // s10
  float v26; // s2
  float v27; // s0
  int result; // r0
  float *v29; // r1
  float v30; // [sp+0h] [bp-40h] BYREF
  float v31; // [sp+4h] [bp-3Ch]
  float v32; // [sp+8h] [bp-38h]
  float v33; // [sp+Ch] [bp-34h] BYREF
  float v34; // [sp+10h] [bp-30h]
  float v35; // [sp+14h] [bp-2Ch]

  v10 = *((_DWORD *)a1 + 5);
  v30 = 0.0;
  v31 = 0.0;
  v32 = 1.0;
  CrossProduct((const CVector *)&v33, (const CVector *)(v10 + 16));
  CrossProduct((const CVector *)&v30, (const CVector *)&v33);
  v13 = (float *)*((_DWORD *)a1 + 5);
  v14 = v13[10] * v35;
  v15 = (float)(v13[8] * v33) + (float)(v13[9] * v34);
  ColModel = CEntity::GetColModel((CEntity *)a1);
  v17 = *(float *)(ColModel + 12);
  v18 = *(float *)(ColModel + 20);
  v19 = v18 <= v17;
  v20 = v18 - v17;
  v21 = 0.0;
  if ( !v19 )
    v21 = v20;
  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  v22 = (float *)*((_DWORD *)a1 + 5);
  v23 = (float)(a6 - a3) + (float)((float)(v15 + v14) * v21);
  v24 = (float)(a8 - a5) * v31;
  v25 = (float)(v23 * v34) + (float)((float)((float)(a7 - a4) * v22[5]) + 0.0);
  v26 = (float)((float)(a8 - a5) * v30)
      + (float)((float)(v23 * v33) + (float)((float)((float)(a7 - a4) * v22[4]) + 0.0));
  v27 = (float)((float)(a8 - a5) * v32)
      + (float)((float)(v23 * v35) + (float)((float)((float)(a7 - a4) * v22[6]) + 0.0));
  *a2 = v26;
  a2[1] = v24 + v25;
  a2[2] = v27;
  result = *((_DWORD *)a1 + 5);
  v29 = (float *)(result + 48);
  if ( !result )
    v29 = a1 + 1;
  *a2 = *v29 + v26;
  a2[1] = v29[1] + (float)(v24 + v25);
  a2[2] = v29[2] + v27;
  return result;
}


// ============================================================

// Address: 0x567870
// Original: _ZN5CBike19ProcessDrivingAnimsEP4CPedh
// Demangled: CBike::ProcessDrivingAnims(CPed *,uchar)
unsigned int __fastcall CBike::ProcessDrivingAnims(CBike *this, CPed *a2, unsigned __int8 a3)
{
  unsigned int result; // r0

  if ( (*((_BYTE *)this + 30) & 2) == 0 )
    return CBike::ProcessRiderAnims();
  result = *((unsigned __int8 *)this + 58);
  if ( result <= 7 )
    return CBike::ProcessRiderAnims();
  return result;
}


// ============================================================

// Address: 0x5678a4
// Original: _ZN5CBike17ProcessRiderAnimsEP4CPedP8CVehicleP13CRideAnimDataP17tBikeHandlingDatas
// Demangled: CBike::ProcessRiderAnims(CPed *,CVehicle *,CRideAnimData *,tBikeHandlingData *,short)
int __fastcall CBike::ProcessRiderAnims(int *a1, int a2, int a3, float *a4)
{
  float32x2_t v4; // d0
  float32x2_t v5; // d2
  float32x2_t v6; // d10
  float32x2_t v7; // d11
  unsigned __int64 v8; // d13
  int IsPlayer; // r4
  int v14; // r0
  unsigned __int8 *v15; // r0
  int Association; // r5
  int v17; // r5
  int v18; // r0
  int v19; // r6
  int v20; // r9
  float *v21; // r0
  float v22; // s0
  float v23; // s2
  float v24; // s16
  float v25; // r0
  int *v26; // r0
  bool v27; // zf
  int v28; // r0
  float v29; // s2
  float v30; // s0
  int *v31; // r0
  bool v32; // zf
  int v33; // r9
  float v34; // s28
  float32x2_t v35; // d12
  float v36; // s2
  float v37; // r6
  float v38; // r0
  bool v39; // zf
  float v40; // r0
  float v41; // s0
  float v42; // s2
  float v43; // s20
  float *v44; // r10
  int v45; // r5
  int v46; // r6
  float v47; // s24
  int v48; // r4
  float v49; // s0
  int v50; // r0
  int v51; // r0
  float v52; // s4
  float v53; // s0
  int v54; // r0
  int result; // r0
  int v56; // r0
  int v57; // r5
  float v58; // s18
  int v59; // r0
  float v60; // s16
  int v61; // r0
  int v62; // r0
  char v63; // r0
  float v64; // s0
  float v65; // s2
  float v66; // s6
  float v67; // s0
  float v68; // s2
  float v69; // s0
  int v70; // [sp+20h] [bp-108h]
  int v71; // [sp+24h] [bp-104h]
  CAnimBlendAssociation *v72; // [sp+28h] [bp-100h]
  int v73; // [sp+2Ch] [bp-FCh]
  int v74; // [sp+30h] [bp-F8h]
  int v75; // [sp+34h] [bp-F4h]
  CAnimBlendAssociation *v76; // [sp+38h] [bp-F0h]
  int v77; // [sp+3Ch] [bp-ECh]
  float *v78; // [sp+40h] [bp-E8h]
  CAnimBlendAssociation *v79; // [sp+44h] [bp-E4h]
  int v80; // [sp+4Ch] [bp-DCh] BYREF
  int v81; // [sp+50h] [bp-D8h]
  int v82; // [sp+54h] [bp-D4h]
  int v83; // [sp+58h] [bp-D0h] BYREF
  int v84; // [sp+5Ch] [bp-CCh]
  int v85; // [sp+60h] [bp-C8h]
  _BYTE v86[148]; // [sp+94h] [bp-94h] BYREF

  IsPlayer = CPed::IsPlayer((CPed *)a1);
  v14 = *(_DWORD *)(a2 + 1440);
  v78 = a4;
  if ( !v14 )
  {
    v15 = (unsigned __int8 *)(a2 + 2420);
    v75 = 0;
    v70 = a2;
    goto LABEL_5;
  }
  if ( v14 == 9 )
  {
    v15 = (unsigned __int8 *)(a2 + 2072);
    v70 = 0;
    v75 = a2;
LABEL_5:
    v71 = *v15;
    goto LABEL_7;
  }
  v71 = 0;
  v70 = 0;
  v75 = 0;
LABEL_7:
  Association = RpAnimBlendClumpGetAssociation();
  v79 = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
  v77 = Association;
  v74 = RpAnimBlendClumpGetAssociation();
  if ( IsPlayer == 1 )
  {
    v17 = RpAnimBlendClumpGetAssociation();
    v18 = RpAnimBlendClumpGetAssociation();
  }
  else
  {
    v17 = 0;
    v18 = 0;
  }
  v76 = (CAnimBlendAssociation *)v18;
  v19 = RpAnimBlendClumpGetAssociation();
  v20 = RpAnimBlendClumpGetAssociation();
  if ( !v20 )
  {
    v20 = RpAnimBlendClumpGetAssociation();
    if ( !v20 )
      v20 = RpAnimBlendClumpGetAssociation();
  }
  v21 = *(float **)(a2 + 20);
  v22 = *(float *)(a2 + 80) * v21[6];
  v73 = a2 + 72;
  v23 = (float)(*(float *)(a2 + 72) * v21[4]) + (float)(*(float *)(a2 + 76) * v21[5]);
  if ( *(_DWORD *)(a2 + 1444) == 10 && v19 | v20 )
    *(_BYTE *)(a2 + 1993) = 0;
  v24 = v23 + v22;
  v25 = COERCE_FLOAT(CPed::GetBikeRidingSkill((CPed *)a1));
  v6.n64_u32[0] = 1.0;
  if ( (float)((float)((float)(*(float *)(a2 + 84) * *(float *)(a2 + 84))
                     + (float)(*(float *)(a2 + 88) * *(float *)(a2 + 88)))
             + (float)(*(float *)(a2 + 92) * *(float *)(a2 + 92))) > (float)((float)((float)(v25 + 1.0) * 0.3)
                                                                           * (float)((float)(v25 + 1.0) * 0.3)) )
  {
    v83 = 0;
    v84 = 0;
    v85 = 1065353216;
    CEventKnockOffBike::CEventKnockOffBike((int)v86, (CEntity *)a2, v73, (int)&v83, 0.0, 0.0, 54, 2, 0, 0, 1, 0);
    CEventGroup::Add((CEventGroup *)(a1[272] + 104), (CEvent *)v86, 0);
    v26 = *(int **)(a2 + 1128);
    v27 = v26 == 0;
    if ( v26 )
      v27 = v26 == a1;
    if ( !v27 )
    {
      v80 = 0;
      v81 = 0;
      v82 = 1065353216;
      CEventKnockOffBike::CEventKnockOffBike((int)&v83, (CEntity *)a2, v73, (int)&v80, 0.0, 0.0, 54, 2, 0, 0, 0, 0);
      CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*(_DWORD *)(a2 + 1128) + 1088) + 104), (CEvent *)&v83, 0);
      CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)&v83);
    }
    CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)v86);
  }
  if ( fabsf(v24) >= 0.02 || v20 )
  {
    if ( v24 >= 0.0 )
    {
      v28 = v74;
      if ( v74 && *(float *)(v74 + 28) >= 0.0 )
        *(_DWORD *)(v74 + 28) = -1065353216;
      LODWORD(v8) = 0;
      if ( !v19 )
      {
LABEL_128:
        v19 = 0;
        if ( v28 )
          goto LABEL_28;
        goto LABEL_49;
      }
LABEL_46:
      if ( *(float *)(v19 + 28) >= 0.0 )
        *(_DWORD *)(v19 + 28) = -1065353216;
      if ( v28 )
        goto LABEL_28;
      goto LABEL_49;
    }
    v29 = (float)(COERCE_FLOAT(CPed::GetBikeRidingSkill((CPed *)a1)) + 1.0) * 3.5;
    if ( *(_DWORD *)(a2 + 1444) == 2 )
      v29 = v29 + v29;
    v30 = *(float *)(*(_DWORD *)(a2 + 904) + 140);
    if ( v24 < (float)(v30 * v29)
      && (v71
       || *(float *)(*(_DWORD *)(a2 + 20) + 40) < -0.5
       && (unsigned int)(CTimer::m_snTimeInMilliseconds - *(_DWORD *)(a2 + 64)) <= 0x63) )
    {
      v83 = 0;
      v84 = 0;
      v85 = 1065353216;
      CEventKnockOffBike::CEventKnockOffBike((int)v86, (CEntity *)a2, v73, (int)&v83, 0.0, 0.0, 54, 2, 0, 0, 1, 0);
      CEventGroup::Add((CEventGroup *)(a1[272] + 104), (CEvent *)v86, 0);
      v31 = *(int **)(a2 + 1128);
      v32 = v31 == 0;
      if ( v31 )
        v32 = v31 == a1;
      if ( !v32 )
      {
        v80 = 0;
        v81 = 0;
        v82 = 1065353216;
        CEventKnockOffBike::CEventKnockOffBike((int)&v83, (CEntity *)a2, v73, (int)&v80, 0.0, 0.0, 54, 2, 0, 0, 0, 0);
        CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*(_DWORD *)(a2 + 1128) + 1088) + 104), (CEvent *)&v83, 0);
        CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)&v83);
      }
      CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)v86);
      LODWORD(v8) = 0;
LABEL_40:
      v28 = v74;
      if ( v74 )
        goto LABEL_28;
      goto LABEL_49;
    }
    if ( *(float *)(a2 + 1184) < 0.0 && v30 * 1.5 < v24 )
    {
      if ( !v19 || (LODWORD(v8) = 0, *(float *)(v19 + 24) < 1.0) && *(float *)(v19 + 28) <= 0.0 )
      {
        v19 = CAnimManager::BlendAnimation(a1[6], *(_DWORD *)a3, 0xC8u);
        LODWORD(v8) = 0;
      }
      goto LABEL_40;
    }
    LODWORD(v8) = 0;
    if ( IsPlayer == 1 )
    {
      v28 = v74;
      if ( v30 * 1.5 > v24 )
        LODWORD(v8) = -1.0;
      if ( !v74 )
      {
LABEL_127:
        if ( !v19 )
          goto LABEL_128;
        goto LABEL_46;
      }
    }
    else
    {
      v28 = v74;
      if ( !v74 )
        goto LABEL_127;
    }
    if ( *(float *)(v28 + 28) >= 0.0 )
      *(_DWORD *)(v28 + 28) = -1065353216;
    goto LABEL_127;
  }
  v28 = v74;
  if ( v74 )
  {
    v4.n64_u32[0] = *(_DWORD *)(v74 + 24);
    LODWORD(v8) = 0;
    if ( v4.n64_f32[0] >= 1.0 || *(float *)(v74 + 28) > 0.0 )
      goto LABEL_29;
  }
  v28 = CAnimManager::BlendAnimation(a1[6], *(_DWORD *)a3, 0xC3u);
  LODWORD(v8) = 0;
  if ( v28 )
  {
LABEL_28:
    v4.n64_u32[0] = *(_DWORD *)(v28 + 24);
LABEL_29:
    v4.n64_f32[0] = v4.n64_f32[0]
                  + (float)(*(float *)(v28 + 28) * (float)(*(float *)&CTimer::ms_fTimeStepNonClipped / 50.0));
    v4.n64_u64[0] = vmin_f32(v4, v6).n64_u64[0];
    v7.n64_f32[0] = 1.0 - v4.n64_f32[0];
    goto LABEL_50;
  }
LABEL_49:
  v7.n64_u32[0] = 1.0;
LABEL_50:
  v72 = (CAnimBlendAssociation *)v17;
  if ( v20 )
  {
    v4.n64_f32[0] = *(float *)(v20 + 24)
                  + (float)(*(float *)(v20 + 28) * (float)(*(float *)&CTimer::ms_fTimeStepNonClipped / 50.0));
    v4.n64_u64[0] = vmin_f32(v7, v4).n64_u64[0];
    v7.n64_f32[0] = v7.n64_f32[0] - v4.n64_f32[0];
  }
  v33 = v77;
  if ( v19 )
  {
    v4.n64_f32[0] = *(float *)(v19 + 24)
                  + (float)(*(float *)(v19 + 28) * (float)(*(float *)&CTimer::ms_fTimeStepNonClipped / 50.0));
    v4.n64_u64[0] = vmin_f32(v7, v4).n64_u64[0];
    v7.n64_f32[0] = v7.n64_f32[0] - v4.n64_f32[0];
  }
  v34 = 1.0;
  v35.n64_u32[0] = 0;
  v36 = *(float *)(a3 + 8) / v78[6];
  if ( *(float *)&v8 == -1.0 )
    v36 = 0.0;
  if ( v36 <= 1.0 )
  {
    v34 = v36;
    if ( v36 < -1.0 )
      v34 = -1.0;
  }
  v37 = *(float *)&CTimer::ms_fTimeStep;
  v38 = powf(0.86, *(float *)&CTimer::ms_fTimeStep);
  v39 = IsPlayer == 1;
  *(float *)(a3 + 20) = (float)(v34 * (float)(1.0 - v38)) + (float)(v38 * *(float *)(a3 + 20));
  if ( IsPlayer == 1 )
    v39 = *(_DWORD *)(a2 + 1128) == 0;
  if ( v39 )
  {
    v35.n64_u64[0] = v8;
    if ( *(float *)&v8 <= -1.0 )
      goto LABEL_65;
    v35.n64_u32[0] = *(_DWORD *)(a3 + 16);
    if ( v75 )
    {
      v63 = *(_BYTE *)(v75 + 1576);
      v64 = *(float *)(v75 + 1860);
      *(_BYTE *)(v75 + 1576) = v63 & 0x7F;
      if ( v64 > 0.0
        || *(float *)(v75 + 1864) > 0.0
        || (v65 = *(float *)(*(_DWORD *)(v75 + 20) + 24), v65 <= 0.0)
        || *(float *)(v75 + 1868) <= 0.0 && *(float *)(v75 + 1872) <= 0.0 )
      {
        if ( *(float *)(v75 + 1868) <= 0.0 && *(float *)(v75 + 1872) <= 0.0 )
        {
          v68 = *(float *)(*(_DWORD *)(v75 + 20) + 24);
          if ( v68 < 0.0
            && (v64 > 0.0 || *(float *)(v75 + 1864) > 0.0)
            && (float)(v78[12] - v68) > (float)(v78[12] * 0.6) )
          {
            *(_BYTE *)(v75 + 1576) = v63 | 0x80;
          }
        }
        goto LABEL_139;
      }
      v66 = v78[11];
      v67 = v66 - v65;
      if ( (float)(v66 - v65) < (float)(v66 * 0.5) )
        *(_BYTE *)(v75 + 1576) = v63 | 0x80;
    }
    else
    {
      if ( !v70 )
        goto LABEL_139;
      if ( *(float *)(v70 + 2056) > 0.0 )
        goto LABEL_139;
      if ( *(float *)(v70 + 2060) > 0.0 )
        goto LABEL_139;
      v69 = *(float *)(*(_DWORD *)(v70 + 20) + 24);
      if ( v69 <= 0.0 || *(float *)(v70 + 2064) <= 0.0 && *(float *)(v70 + 2068) <= 0.0 )
        goto LABEL_139;
      v67 = v78[11] - v69;
    }
    if ( v67 < 0.15 )
    {
      v4.n64_u32[0] = 0.25;
      v35.n64_u32[0] = vmax_f32(v35, v4).n64_u32[0];
LABEL_145:
      v4.n64_f32[0] = fabsf(v34);
      if ( v4.n64_f32[0] > 0.3 )
      {
        v5.n64_u32[0] = 0;
        v4.n64_f32[0] = (float)((float)(v4.n64_f32[0] + -0.3) / -0.26) + 1.0;
        v35.n64_f32[0] = vmax_f32(v4, v5).n64_f32[0] * v35.n64_f32[0];
      }
      goto LABEL_65;
    }
LABEL_139:
    if ( v24 <= 0.01 )
    {
      if ( v35.n64_f32[0] <= 0.0
        && *(float *)(a2 + 1184) > 0.5
        && v24 < (float)(*(float *)(*(_DWORD *)(a2 + 904) + 136) * 0.3) )
      {
        v4.n64_u32[0] = -1097229926;
        v35.n64_u32[0] = vmin_f32(v35, v4).n64_u32[0];
      }
    }
    else
    {
      v4.n64_u32[0] = 1036831949;
      v35.n64_u32[0] = vmax_f32(v35, v4).n64_u32[0];
    }
    goto LABEL_145;
  }
  if ( v75 )
    *(_BYTE *)(v75 + 1576) &= ~0x80u;
  if ( !IsPlayer )
  {
    v41 = 0.0;
    goto LABEL_67;
  }
LABEL_65:
  v40 = powf(0.89, v37);
  v41 = (float)(v35.n64_f32[0] * (float)(1.0 - v40)) + (float)(v40 * *(float *)(a3 + 24));
LABEL_67:
  v42 = *(float *)(a3 + 20);
  v43 = 1.0;
  v44 = (float *)(a3 + 24);
  v45 = (int)v76;
  v46 = (int)v79;
  v47 = 0.0;
  *(float *)(a3 + 24) = v41;
  if ( fabsf(v42) > 0.56 || IsPlayer != 1 )
  {
LABEL_71:
    if ( IsPlayer == 1 )
      goto LABEL_72;
LABEL_79:
    if ( !v77 )
      goto LABEL_89;
    goto LABEL_80;
  }
  v47 = fabsf(v41);
  if ( v47 > 0.56 )
  {
    v47 = 1.0;
    v43 = 0.0;
    goto LABEL_71;
  }
  v52 = sqrtf((float)(v41 * v41) + (float)(v42 * v42));
  if ( v52 > 0.01 )
  {
    v42 = v42 / v52;
    v47 = fabsf(v41 / v52);
  }
  v43 = fabsf(v42);
  if ( IsPlayer != 1 )
    goto LABEL_79;
LABEL_72:
  v48 = (int)v72;
  if ( v72 )
  {
    if ( v76 )
      goto LABEL_74;
  }
  else
  {
    v48 = CAnimManager::AddAnimation(a1[6], *(_DWORD *)a3, 0xC7u);
    if ( v76 )
      goto LABEL_74;
  }
  v45 = CAnimManager::AddAnimation(a1[6], *(_DWORD *)a3, 0xC6u);
LABEL_74:
  v49 = v7.n64_f32[0] * v47;
  if ( *v44 >= 0.0 )
  {
    v62 = *(_DWORD *)(v48 + 20);
    *(float *)(v48 + 24) = v49;
    CAnimBlendAssociation::SetCurrentTime((CAnimBlendAssociation *)v48, *(float *)(v62 + 16) * *v44);
    v51 = v48;
  }
  else
  {
    v50 = *(_DWORD *)(v45 + 20);
    *(float *)(v45 + 24) = v49;
    CAnimBlendAssociation::SetCurrentTime((CAnimBlendAssociation *)v45, -(float)(*(float *)(v50 + 16) * *v44));
    v51 = v45;
    v45 = v48;
  }
  *(_WORD *)(v51 + 46) &= ~1u;
  *(_DWORD *)(v45 + 24) = 0;
  if ( !v77 )
  {
LABEL_89:
    v33 = CAnimManager::AddAnimation(a1[6], *(_DWORD *)a3, 0xC4u);
    if ( v79 )
      goto LABEL_81;
    goto LABEL_90;
  }
LABEL_80:
  if ( v79 )
    goto LABEL_81;
LABEL_90:
  v46 = CAnimManager::AddAnimation(a1[6], *(_DWORD *)a3, 0xC5u);
LABEL_81:
  v53 = v7.n64_f32[0] * v43;
  if ( *(float *)(a3 + 20) >= 0.0 )
  {
    v56 = *(_DWORD *)(v46 + 20);
    *(float *)(v46 + 24) = v53;
    CAnimBlendAssociation::SetCurrentTime((CAnimBlendAssociation *)v46, *(float *)(v56 + 16) * *(float *)(a3 + 20));
    result = v46;
  }
  else
  {
    v54 = *(_DWORD *)(v33 + 20);
    *(float *)(v33 + 24) = v53;
    CAnimBlendAssociation::SetCurrentTime(
      (CAnimBlendAssociation *)v33,
      -(float)(*(float *)(v54 + 16) * *(float *)(a3 + 20)));
    result = v33;
    v33 = v46;
  }
  *(_WORD *)(result + 46) &= ~1u;
  *(_DWORD *)(v33 + 24) = 0;
  if ( v24 > 0.3 )
  {
    v57 = *(_DWORD *)(a1[295] + 16);
    v58 = v24 * -6.0;
    v59 = rand();
    v60 = (float)(v24 * 6.0) - (float)(v24 * -6.0);
    RtQuatRotate(v57, &CPedIK::XaxisIK, v58 + (float)(v60 * (float)((float)v59 * 4.6566e-10)), 2);
    v61 = rand();
    RtQuatRotate(v57, &CPedIK::YaxisIK, v58 + (float)(v60 * (float)((float)v61 * 4.6566e-10)), 2);
    result = a1[290] | 0x4000;
    a1[290] = result;
  }
  return result;
}


// ============================================================

// Address: 0x568388
// Original: _ZN5CBike14FixHandsToBarsEP4CPed
// Demangled: CBike::FixHandsToBars(CPed *)
void __fastcall CBike::FixHandsToBars(CBike *this, CPed *a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r0
  int v7; // r1
  double v8; // d16
  float v9; // r1
  int *v10; // r0
  int v11; // r4
  int MatrixArray; // r0
  int v13; // r0
  double v14; // d16
  float v15; // s16
  float v16; // s20
  float v17; // s18
  int v18; // r4
  float *v19; // r4
  float v20; // s0
  float v21; // s2
  float v22; // s4
  float v23; // s16
  float v24; // s20
  float v25; // s18
  int v26; // r4
  float *v27; // r4
  float v28; // s2
  float v29; // s4
  int v30; // r4
  float *v31; // r4
  float v32; // s2
  float v33; // s4
  int v34; // r4
  float *v35; // r4
  float v36; // s4
  float v37; // s0
  int v38; // r4
  float *v39; // r4
  float v40; // s16
  float v41; // s4
  float v42; // s2
  int v43; // r4
  float *v44; // r4
  float v45; // s2
  float v46; // s4
  float v47; // s16
  float v48; // s20
  float v49; // s18
  int v50; // r4
  float *v51; // r4
  float v52; // s0
  float v53; // s2
  float v54; // s4
  float v55; // s16
  float v56; // s20
  float v57; // s18
  int v58; // r4
  float *v59; // r4
  float v60; // s2
  float v61; // s4
  int v62; // r4
  float *v63; // r4
  float v64; // s2
  float v65; // s4
  int v66; // r4
  float *v67; // r4
  float v68; // s4
  float v69; // s0
  int v70; // r4
  float *v71; // r4
  float v72; // s16
  float v73; // s4
  float v74; // s2
  int v75; // r4
  float *v76; // r4
  float v77; // s2
  float v78; // s4
  double v79; // [sp+0h] [bp-140h] BYREF
  float v80; // [sp+8h] [bp-138h]
  double v81; // [sp+10h] [bp-130h] BYREF
  int v82; // [sp+18h] [bp-128h]
  double v83; // [sp+20h] [bp-120h]
  float v84; // [sp+28h] [bp-118h]
  _BYTE v85[64]; // [sp+30h] [bp-110h] BYREF
  int v86; // [sp+70h] [bp-D0h]
  int v87; // [sp+74h] [bp-CCh]
  _BYTE v88[64]; // [sp+78h] [bp-C8h] BYREF
  int v89; // [sp+B8h] [bp-88h]
  int v90; // [sp+BCh] [bp-84h]
  float v91; // [sp+C0h] [bp-80h] BYREF
  float v92; // [sp+C4h] [bp-7Ch]
  float v93; // [sp+C8h] [bp-78h]

  v4 = *((unsigned __int8 *)this + 1993);
  v5 = v4 == 0;
  if ( !v4 )
    v5 = *((_BYTE *)this + 1992) == 0;
  if ( !v5 )
  {
    v89 = 0;
    v90 = 0;
    v86 = 0;
    v87 = 0;
    if ( *((_DWORD *)this + 366) )
    {
      CMatrix::Attach();
      CMatrix::operator=();
      operator*();
      CMatrix::operator=();
      CMatrix::~CMatrix((CMatrix *)&v91);
      GetAnimHierarchyFromSkinClump();
      v6 = *((__int16 *)this + 19);
      v7 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v6]) + 116);
      v8 = *(double *)(v7 + 120);
      v9 = *(float *)(v7 + 128);
      v83 = v8;
      v84 = v9;
      if ( *(float *)&v8 == 0.0 && *((float *)&v8 + 1) == 0.0 && v84 == 0.0 )
      {
        if ( v6 == 509 )
        {
          v10 = (int *)&vecChopperHandleBarPos_ptr;
        }
        else if ( v6 == 510 )
        {
          v10 = (int *)&vecMtbHandleBarPos_ptr;
        }
        else
        {
          v10 = (int *)&vecBmxHandleBarPos_ptr;
        }
        v13 = *v10;
        v14 = *(double *)v13;
        v84 = *(float *)(v13 + 8);
        v83 = v14;
      }
      else
      {
        v11 = RpHAnimIDGetIndex();
        MatrixArray = RpHAnimHierarchyGetMatrixArray();
        TestMatrix(MatrixArray + (v11 << 6));
        v82 = dword_A02574;
        v81 = *(double *)vecTweakHandleBarPos2;
        CMatrix::CMatrix();
        Multiply3x3((const CMatrix *)&v79, (const CVector *)&v91);
        v82 = LODWORD(v80);
        v81 = v79;
        Multiply3x3((const CVector *)&v79, (const CMatrix *)&v81);
        v82 = LODWORD(v80);
        v81 = v79;
        *(float *)&v83 = *(float *)&v79 + *(float *)&v83;
        *((float *)&v83 + 1) = *((float *)&v79 + 1) + *((float *)&v83 + 1);
        v84 = v80 + v84;
        CMatrix::~CMatrix((CMatrix *)&v91);
      }
      if ( *((_BYTE *)this + 1993) )
      {
        operator*();
        v15 = v91;
        v16 = v92;
        v17 = v93;
        v18 = RpHAnimIDGetIndex();
        v19 = (float *)(RpHAnimHierarchyGetMatrixArray() + (v18 << 6));
        TestMatrix(v19);
        v20 = v19[12];
        v21 = v19[13];
        v22 = v19[14];
        v23 = v15 - v20;
        v24 = v16 - v21;
        v25 = v17 - v22;
        v19[12] = v20 + v23;
        v19[13] = v21 + v24;
        v19[14] = v22 + v25;
        v26 = RpHAnimIDGetIndex();
        v27 = (float *)(RpHAnimHierarchyGetMatrixArray() + (v26 << 6));
        TestMatrix(v27);
        v28 = v24 + v27[13];
        v29 = v25 + v27[14];
        v27[12] = v23 + v27[12];
        v27[13] = v28;
        v27[14] = v29;
        v30 = RpHAnimIDGetIndex();
        v31 = (float *)(RpHAnimHierarchyGetMatrixArray() + (v30 << 6));
        TestMatrix(v31);
        v32 = v24 + v31[13];
        v33 = v25 + v31[14];
        v31[12] = v23 + v31[12];
        v31[13] = v32;
        v31[14] = v33;
        v34 = RpHAnimIDGetIndex();
        v35 = (float *)(RpHAnimHierarchyGetMatrixArray() + (v34 << 6));
        TestMatrix(v35);
        v36 = (float)(v25 * 0.667) + v35[14];
        v37 = (float)(v24 * 0.667) + v35[13];
        v35[12] = (float)(v23 * 0.667) + v35[12];
        v35[13] = v37;
        v35[14] = v36;
        v38 = RpHAnimIDGetIndex();
        v39 = (float *)(RpHAnimHierarchyGetMatrixArray() + (v38 << 6));
        TestMatrix(v39);
        v40 = v23 * 0.333;
        v41 = (float)(v25 * 0.333) + v39[14];
        v42 = (float)(v24 * 0.333) + v39[13];
        v39[12] = v40 + v39[12];
        v39[13] = v42;
        v39[14] = v41;
        if ( CPed::IsPlayer(a2) == 1 )
        {
          v43 = RpHAnimIDGetIndex();
          v44 = (float *)(RpHAnimHierarchyGetMatrixArray() + (v43 << 6));
          TestMatrix(v44);
          v45 = (float)(v24 * 0.333) + v44[13];
          v46 = (float)(v25 * 0.333) + v44[14];
          v44[12] = v40 + v44[12];
          v44[13] = v45;
          v44[14] = v46;
        }
      }
      if ( *((_BYTE *)this + 1992) )
      {
        *(float *)&v83 = -*(float *)&v83;
        operator*();
        v47 = v91;
        v48 = v92;
        v49 = v93;
        v50 = RpHAnimIDGetIndex();
        v51 = (float *)(RpHAnimHierarchyGetMatrixArray() + (v50 << 6));
        TestMatrix(v51);
        v52 = v51[12];
        v53 = v51[13];
        v54 = v51[14];
        v55 = v47 - v52;
        v56 = v48 - v53;
        v57 = v49 - v54;
        v51[12] = v52 + v55;
        v51[13] = v53 + v56;
        v51[14] = v54 + v57;
        v58 = RpHAnimIDGetIndex();
        v59 = (float *)(RpHAnimHierarchyGetMatrixArray() + (v58 << 6));
        TestMatrix(v59);
        v60 = v56 + v59[13];
        v61 = v57 + v59[14];
        v59[12] = v55 + v59[12];
        v59[13] = v60;
        v59[14] = v61;
        v62 = RpHAnimIDGetIndex();
        v63 = (float *)(RpHAnimHierarchyGetMatrixArray() + (v62 << 6));
        TestMatrix(v63);
        v64 = v56 + v63[13];
        v65 = v57 + v63[14];
        v63[12] = v55 + v63[12];
        v63[13] = v64;
        v63[14] = v65;
        v66 = RpHAnimIDGetIndex();
        v67 = (float *)(RpHAnimHierarchyGetMatrixArray() + (v66 << 6));
        TestMatrix(v67);
        v68 = (float)(v57 * 0.75) + v67[14];
        v69 = (float)(v56 * 0.75) + v67[13];
        v67[12] = (float)(v55 * 0.75) + v67[12];
        v67[13] = v69;
        v67[14] = v68;
        v70 = RpHAnimIDGetIndex();
        v71 = (float *)(RpHAnimHierarchyGetMatrixArray() + (v70 << 6));
        TestMatrix(v71);
        v72 = v55 * 0.4;
        v73 = (float)(v57 * 0.4) + v71[14];
        v74 = (float)(v56 * 0.4) + v71[13];
        v71[12] = v72 + v71[12];
        v71[13] = v74;
        v71[14] = v73;
        if ( CPed::IsPlayer(a2) == 1 )
        {
          v75 = RpHAnimIDGetIndex();
          v76 = (float *)(RpHAnimHierarchyGetMatrixArray() + (v75 << 6));
          TestMatrix(v76);
          v77 = (float)(v56 * 0.4) + v76[13];
          v78 = (float)(v57 * 0.4) + v76[14];
          v76[12] = v72 + v76[12];
          v76[13] = v77;
          v76[14] = v78;
        }
      }
      *((_WORD *)this + 996) = 0;
    }
    CMatrix::~CMatrix((CMatrix *)v85);
    CMatrix::~CMatrix((CMatrix *)v88);
  }
}


// ============================================================

// Address: 0x568908
// Original: _ZN5CBike14FindWheelWidthEb
// Demangled: CBike::FindWheelWidth(bool)
int __fastcall CBike::FindWheelWidth(CBike *this, bool a2)
{
  return 1041865114;
}


// ============================================================

// Address: 0x568914
// Original: _ZN5CBike15ProcessOpenDoorEP4CPedjjjf
// Demangled: CBike::ProcessOpenDoor(CPed *,uint,uint,uint,float)
void __fastcall CBike::ProcessOpenDoor(
        CBike *this,
        CPed *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        float a6)
{
  ;
}


// ============================================================

// Address: 0x568916
// Original: _ZNK5CBike11IsDoorReadyE6eDoors
// Demangled: CBike::IsDoorReady(eDoors)
int CBike::IsDoorReady()
{
  return 1;
}


// ============================================================

// Address: 0x56891a
// Original: _ZNK5CBike15IsDoorFullyOpenE6eDoors
// Demangled: CBike::IsDoorFullyOpen(eDoors)
int CBike::IsDoorFullyOpen()
{
  return 0;
}


// ============================================================

// Address: 0x56891e
// Original: _ZNK5CBike12IsDoorClosedE6eDoors
// Demangled: CBike::IsDoorClosed(eDoors)
int CBike::IsDoorClosed()
{
  return 0;
}


// ============================================================

// Address: 0x568922
// Original: _ZNK5CBike13IsDoorMissingE6eDoors
// Demangled: CBike::IsDoorMissing(eDoors)
int CBike::IsDoorMissing()
{
  return 1;
}


// ============================================================

// Address: 0x56892a
// Original: _ZNK5CBike11IsDoorReadyEj
// Demangled: CBike::IsDoorReady(uint)
int __fastcall CBike::IsDoorReady(CBike *this, unsigned int a2)
{
  return 1;
}


// ============================================================

// Address: 0x56892e
// Original: _ZNK5CBike15IsDoorFullyOpenEj
// Demangled: CBike::IsDoorFullyOpen(uint)
int __fastcall CBike::IsDoorFullyOpen(CBike *this, unsigned int a2)
{
  return 0;
}


// ============================================================

// Address: 0x568932
// Original: _ZNK5CBike12IsDoorClosedEj
// Demangled: CBike::IsDoorClosed(uint)
int __fastcall CBike::IsDoorClosed(CBike *this, unsigned int a2)
{
  return 0;
}


// ============================================================

// Address: 0x568936
// Original: _ZNK5CBike13IsDoorMissingEj
// Demangled: CBike::IsDoorMissing(uint)
int __fastcall CBike::IsDoorMissing(CBike *this, unsigned int a2)
{
  return 1;
}


// ============================================================

// Address: 0x568940
// Original: _ZN5CBike15GetRideAnimDataEv
// Demangled: CBike::GetRideAnimData(void)
char *__fastcall CBike::GetRideAnimData(CBike *this)
{
  return (char *)this + 1620;
}


// ============================================================

// Address: 0x568950
// Original: _ZNK5CBike18GetHeightAboveRoadEv
// Demangled: CBike::GetHeightAboveRoad(void)
int __fastcall CBike::GetHeightAboveRoad(CBike *this)
{
  return *((_DWORD *)this + 489);
}


// ============================================================

// Address: 0x568956
// Original: _ZN5CBike19GetNumContactWheelsEv
// Demangled: CBike::GetNumContactWheels(void)
int __fastcall CBike::GetNumContactWheels(CBike *this)
{
  return *((unsigned __int8 *)this + 2072);
}


// ============================================================

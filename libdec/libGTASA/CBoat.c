
// Address: 0x194414
// Original: j__ZN5CBoat12AddWakePointE7CVector
// Demangled: CBoat::AddWakePoint(CVector)
// attributes: thunk
int CBoat::AddWakePoint()
{
  return _ZN5CBoat12AddWakePointE7CVector();
}


// ============================================================

// Address: 0x199898
// Original: j__ZN5CBoatC2Eih
// Demangled: CBoat::CBoat(int,uchar)
// attributes: thunk
void __fastcall CBoat::CBoat(CBoat *this, int a2, unsigned __int8 a3)
{
  _ZN5CBoatC2Eih(this, a2, a3);
}


// ============================================================

// Address: 0x1a08d0
// Original: j__ZN5CBoat12FillBoatListEv
// Demangled: CBoat::FillBoatList(void)
// attributes: thunk
int __fastcall CBoat::FillBoatList(CBoat *this)
{
  return _ZN5CBoat12FillBoatListEv(this);
}


// ============================================================

// Address: 0x56ae6c
// Original: _ZN5CBoatC2Eih
// Demangled: CBoat::CBoat(int,uchar)
void __fastcall CBoat::CBoat(CBoat *this, unsigned int a2, unsigned __int8 a3)
{
  CVehicleModelInfo *v5; // r8
  int v6; // r6
  int v7; // r0
  _QWORD *v8; // r0
  int v9; // r0
  __int64 v10; // d16
  float v11; // s2
  __int16 v12; // r0
  int v13; // r1
  int *v14; // r2
  int *v15; // r1
  int v16; // r0
  int v17; // s2
  __int16 v18; // r1

  CVehicle::CVehicle(this, a3);
  *((_DWORD *)this + 386) = 0;
  *(_QWORD *)((char *)this + 1524) = 0LL;
  *(_QWORD *)((char *)this + 1532) = 0LL;
  *((_DWORD *)this + 385) = 0;
  *(_DWORD *)this = &off_66DA30;
  v5 = (CVehicleModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[a2]);
  v6 = *((unsigned __int16 *)v5 + 49);
  *(_QWORD *)((char *)this + 1572) = 0LL;
  *(_QWORD *)((char *)this + 1580) = 0LL;
  *((_DWORD *)this + 397) = 0;
  *((_DWORD *)this + 398) = 0;
  *((_DWORD *)this + 360) = 5;
  *((_DWORD *)this + 361) = 5;
  *((_BYTE *)this + 1617) = 0;
  *((_DWORD *)this + 365) = 0;
  *((_DWORD *)this + 366) = 0;
  *((_DWORD *)this + 367) = 0;
  *((_DWORD *)this + 389) = CTimer::m_snTimeInMilliseconds;
  CVehicle::SetModelIndex(this, a2);
  *(_QWORD *)((char *)this + 1508) = 0LL;
  *(_QWORD *)((char *)this + 1516) = 0LL;
  *(_QWORD *)((char *)this + 1492) = 0LL;
  *(_QWORD *)((char *)this + 1500) = 0LL;
  v7 = *((_DWORD *)this + 6);
  *(_QWORD *)((char *)this + 1476) = 0LL;
  *(_QWORD *)((char *)this + 1484) = 0LL;
  CClumpModelInfo::FillFrameArray(v7);
  v8 = &mod_HandlingManager[28 * v6];
  *((_DWORD *)this + 226) = (char *)v8 + 20;
  *((_DWORD *)this + 228) = *((_DWORD *)v8 + 57);
  *((_DWORD *)this + 227) = cHandlingDataMgr::GetFlyingPointer((cHandlingDataMgr *)mod_HandlingManager, v6);
  *((_DWORD *)this + 387) = cHandlingDataMgr::GetBoatPointer((cHandlingDataMgr *)mod_HandlingManager, v6);
  CVehicleModelInfo::ChooseVehicleColour(
    v5,
    (unsigned __int8 *)this + 1080,
    (unsigned __int8 *)this + 1081,
    (unsigned __int8 *)this + 1082,
    (unsigned __int8 *)this + 1083,
    1);
  v9 = *((_DWORD *)this + 226);
  *((_DWORD *)this + 36) = *(_DWORD *)(v9 + 4);
  *((float *)this + 37) = *(float *)(v9 + 12) * 0.5;
  v10 = *(_QWORD *)(v9 + 20);
  *((_DWORD *)this + 44) = *(_DWORD *)(v9 + 28);
  *((_DWORD *)this + 40) = 1036831949;
  *((_QWORD *)this + 21) = v10;
  *((_DWORD *)this + 41) = *(_DWORD *)(v9 + 36);
  v11 = *(float *)(v9 + 16);
  if ( v11 > 0.01 )
    v11 = (float)(v11 * 0.5) / 1000.0;
  *((_DWORD *)this + 294) = 0;
  *((float *)this + 39) = v11;
  *((_DWORD *)this + 296) = 0;
  *((_DWORD *)this + 297) = 0;
  *((_DWORD *)this + 359) = 0;
  *((_BYTE *)this + 1616) = 0;
  *((_DWORD *)this + 405) = 1088421888;
  *((_DWORD *)this + 388) = -971227146;
  *((_DWORD *)this + 390) = 0;
  *((_DWORD *)this + 391) = 0;
  *((_DWORD *)this + 392) = 0;
  *((_WORD *)this + 812) = 0;
  v12 = *((unsigned __int8 *)this + 1472);
  v13 = *((_DWORD *)this + 17);
  *(_QWORD *)((char *)this + 1996) = 0LL;
  *(_QWORD *)((char *)this + 2004) = 0LL;
  *(_QWORD *)((char *)this + 1980) = 0LL;
  *(_QWORD *)((char *)this + 1988) = 0LL;
  *(_QWORD *)((char *)this + 1964) = 0LL;
  *(_QWORD *)((char *)this + 1972) = 0LL;
  *(_QWORD *)((char *)this + 1948) = 0LL;
  *(_QWORD *)((char *)this + 1956) = 0LL;
  *(_QWORD *)((char *)this + 1932) = 0LL;
  *(_QWORD *)((char *)this + 1940) = 0LL;
  *(_QWORD *)((char *)this + 1916) = 0LL;
  *(_QWORD *)((char *)this + 1924) = 0LL;
  *(_QWORD *)((char *)this + 1900) = 0LL;
  *(_QWORD *)((char *)this + 1908) = 0LL;
  *(_QWORD *)((char *)this + 1884) = 0LL;
  *(_QWORD *)((char *)this + 1892) = 0LL;
  v14 = dword_56B0D4;
  *((_DWORD *)this + 17) = v13 | 0x8000100;
  v15 = dword_56B0CC;
  *((_BYTE *)this + 1472) = v12 | 7;
  *((_BYTE *)this + 1205) = 20;
  v16 = *((unsigned __int16 *)this + 19);
  if ( v16 == 484 )
  {
    v15 = &dword_56B0CC[1];
    v14 = &dword_56B0D4[1];
  }
  v17 = *v15;
  *((_DWORD *)this + 381) = *v14;
  *((_BYTE *)this + 1534) = 2;
  *((_DWORD *)this + 382) = v17;
  v18 = 3;
  if ( v16 == 484 )
    v18 = 4;
  *((_WORD *)this + 766) = v18;
  CAEVehicleAudioEntity::Initialise((CBoat *)((char *)this + 316), this);
  *((_DWORD *)this + 399) = 0;
  *((_DWORD *)this + 400) = 0;
}


// ============================================================

// Address: 0x56b0dc
// Original: _ZN5CBoatD2Ev
// Demangled: CBoat::~CBoat()
void __fastcall CBoat::~CBoat(CBoat *this)
{
  FxSystem_c *v2; // r0
  FxSystem_c *v3; // r0
  FxSystem_c *v4; // r0

  v2 = (FxSystem_c *)*((_DWORD *)this + 355);
  *(_DWORD *)this = &off_66DA30;
  if ( v2 )
  {
    FxSystem_c::Kill(v2);
    *((_DWORD *)this + 355) = 0;
  }
  v3 = (FxSystem_c *)*((_DWORD *)this + 399);
  if ( v3 )
  {
    FxSystem_c::Kill(v3);
    *((_DWORD *)this + 399) = 0;
  }
  v4 = (FxSystem_c *)*((_DWORD *)this + 400);
  if ( v4 )
  {
    FxSystem_c::Kill(v4);
    *((_DWORD *)this + 400) = 0;
  }
  CAEVehicleAudioEntity::Terminate((CBoat *)((char *)this + 316));
  sub_195C7C(this);
}


// ============================================================

// Address: 0x56b134
// Original: _ZN5CBoatD0Ev
// Demangled: CBoat::~CBoat()
void __fastcall CBoat::~CBoat(CBoat *this)
{
  FxSystem_c *v2; // r0
  FxSystem_c *v3; // r0
  FxSystem_c *v4; // r0
  void *v5; // r0

  v2 = (FxSystem_c *)*((_DWORD *)this + 355);
  *(_DWORD *)this = &off_66DA30;
  if ( v2 )
  {
    FxSystem_c::Kill(v2);
    *((_DWORD *)this + 355) = 0;
  }
  v3 = (FxSystem_c *)*((_DWORD *)this + 399);
  if ( v3 )
  {
    FxSystem_c::Kill(v3);
    *((_DWORD *)this + 399) = 0;
  }
  v4 = (FxSystem_c *)*((_DWORD *)this + 400);
  if ( v4 )
  {
    FxSystem_c::Kill(v4);
    *((_DWORD *)this + 400) = 0;
  }
  CAEVehicleAudioEntity::Terminate((CBoat *)((char *)this + 316));
  CVehicle::~CVehicle(this);
  sub_199F80(v5);
}


// ============================================================

// Address: 0x56b190
// Original: _ZN5CBoat13SetModelIndexEj
// Demangled: CBoat::SetModelIndex(uint)
int __fastcall CBoat::SetModelIndex(CBoat *this, unsigned int a2)
{
  CVehicle::SetModelIndex(this, a2);
  *(_QWORD *)((char *)this + 1508) = 0LL;
  *(_QWORD *)((char *)this + 1516) = 0LL;
  *(_QWORD *)((char *)this + 1492) = 0LL;
  *(_QWORD *)((char *)this + 1500) = 0LL;
  *(_QWORD *)((char *)this + 1476) = 0LL;
  *(_QWORD *)((char *)this + 1484) = 0LL;
  return sub_18AB14();
}


// ============================================================

// Address: 0x56b1c0
// Original: _ZN5CBoat15SetupModelNodesEv
// Demangled: CBoat::SetupModelNodes(void)
int __fastcall CBoat::SetupModelNodes(CBoat *this)
{
  *(_QWORD *)((char *)this + 1508) = 0LL;
  *(_QWORD *)((char *)this + 1516) = 0LL;
  *(_QWORD *)((char *)this + 1492) = 0LL;
  *(_QWORD *)((char *)this + 1500) = 0LL;
  *(_QWORD *)((char *)this + 1476) = 0LL;
  *(_QWORD *)((char *)this + 1484) = 0LL;
  return sub_18AB14();
}


// ============================================================

// Address: 0x56b1e4
// Original: _ZN5CBoat25GetComponentWorldPositionEiR7CVector
// Demangled: CBoat::GetComponentWorldPosition(int,CVector &)
int __fastcall CBoat::GetComponentWorldPosition(CBoat *this, int a2, CVector *a3)
{
  int LTM; // r0
  __int64 v5; // d16
  int result; // r0

  LTM = RwFrameGetLTM();
  v5 = *(_QWORD *)(LTM + 48);
  result = *(_DWORD *)(LTM + 56);
  *((_DWORD *)a3 + 2) = result;
  *(_QWORD *)a3 = v5;
  return result;
}


// ============================================================

// Address: 0x56b204
// Original: _ZNK5CBoat18IsComponentPresentEi
// Demangled: CBoat::IsComponentPresent(int)
int __fastcall CBoat::IsComponentPresent(CBoat *this, int a2)
{
  return 1;
}


// ============================================================

// Address: 0x56b208
// Original: _ZN5CBoat9PreRenderEv
// Demangled: CBoat::PreRender(void)
void __fastcall CBoat::PreRender(CBoat *this)
{
  float32x2_t v1; // d1
  float32x2_t v2; // d8
  int v4; // r5
  int *v5; // r4
  float v6; // s0
  float v7; // s0
  int v8; // r8
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r0
  unsigned int v14; // r0
  int v15; // r1
  int *v16; // r5
  void (__fastcall *v17)(int); // r4
  int FirstObject; // r0
  float v19; // s12
  float32x4_t v20; // q0
  int v21; // r9
  int v22; // r10
  float v23; // s8
  float32x4_t v24; // q8
  float v25; // s4
  float v26; // s8
  float v27; // s4
  float v28; // s16
  int v29; // r0
  int v30; // r11
  FxSystem_c **v31; // r8
  FxSystem_c *v32; // r0
  int v33; // r5
  int LTM; // r0
  __int64 v35; // kr00_8
  int v36; // r0
  FxSystem_c *FxSystem; // r0
  int v38; // r4
  int PlayStatus; // r0
  int v40; // r0
  __int64 v41; // kr08_8
  int v42; // r0
  char *v43; // [sp+10h] [bp-A0h]
  _BYTE v44[12]; // [sp+14h] [bp-9Ch] BYREF
  float v45; // [sp+20h] [bp-90h] BYREF
  float v46; // [sp+24h] [bp-8Ch]
  float v47; // [sp+28h] [bp-88h]
  int v48; // [sp+2Ch] [bp-84h] BYREF
  double v49; // [sp+30h] [bp-80h]
  float v50; // [sp+38h] [bp-78h]
  _BYTE v51[48]; // [sp+40h] [bp-70h] BYREF
  double v52; // [sp+70h] [bp-40h]
  float v53; // [sp+78h] [bp-38h]
  int v54; // [sp+80h] [bp-30h]
  int v55; // [sp+84h] [bp-2Ch]

  CVehicle::PreRender(this);
  v4 = 0;
  *((_DWORD *)this + 76) = 1056964608;
  v54 = 0;
  v55 = 0;
  v48 = 0;
  CVehicle::SetComponentRotation((int)this, *((_DWORD *)this + 372), 2, *((_DWORD *)this + 294) ^ 0x80000000, 1);
  CVehicle::SetComponentRotation((int)this, *((_DWORD *)this + 375), 2, *((_DWORD *)this + 294) ^ 0x80000000, 1);
  CVehicle::SetComponentRotation((int)this, *((_DWORD *)this + 376), 2, *((_DWORD *)this + 294) ^ 0x80000000, 1);
  v2.n64_u32[0] = 1.0;
  v5 = (int *)((char *)this + 1468);
  v6 = *((float *)this + 366);
  v1.n64_f32[0] = (float)(v6 + v6) / 0.3927;
  v7 = *((float *)this + 367) + (float)(v6 * *(float *)&CTimer::ms_fTimeStep);
  *((float *)this + 367) = v7;
  v8 = (int)(float)((float)(1.0 - vmin_f32(v1, v2).n64_f32[0]) * 255.0);
  if ( v7 > 6.2832 )
  {
    do
      v7 = v7 + -6.2832;
    while ( v7 > 6.2832 );
    *(float *)v5 = v7;
  }
  v9 = *((_DWORD *)this + 377);
  if ( 150 - v8 > 0 )
    v4 = 150 - v8;
  if ( v9 )
  {
    CVehicle::SetComponentRotation((int)this, v9, 1, COERCE_INT(v7 + v7), 1);
    v48 = 0;
    RwFrameForAllObjects(*((_DWORD *)this + 377), GetCurrentAtomicObjectCB, &v48);
    if ( v48 )
      CVehicle::SetComponentAtomicAlpha(v48, v8);
  }
  v10 = *((_DWORD *)this + 378);
  if ( v10 )
  {
    CVehicle::SetComponentRotation((int)this, v10, 1, *v5 ^ 0x80000000, 1);
    v48 = 0;
    RwFrameForAllObjects(*((_DWORD *)this + 378), GetCurrentAtomicObjectCB, &v48);
    if ( v48 )
      CVehicle::SetComponentAtomicAlpha(v48, v4);
  }
  v11 = *((_DWORD *)this + 379);
  if ( v11 )
  {
    CVehicle::SetComponentRotation((int)this, v11, 1, COERCE_INT(*(float *)v5 * -2.0), 1);
    v48 = 0;
    RwFrameForAllObjects(*((_DWORD *)this + 379), GetCurrentAtomicObjectCB, &v48);
    if ( v48 )
      CVehicle::SetComponentAtomicAlpha(v48, v8);
  }
  v12 = *((_DWORD *)this + 380);
  if ( v12 )
  {
    CVehicle::SetComponentRotation((int)this, v12, 1, *v5, 1);
    v48 = 0;
    RwFrameForAllObjects(*((_DWORD *)this + 380), GetCurrentAtomicObjectCB, &v48);
    if ( v48 )
      CVehicle::SetComponentAtomicAlpha(v48, v4);
  }
  v13 = *((unsigned __int16 *)this + 19);
  if ( v13 == 484 )
  {
    if ( *((_DWORD *)this + 373) )
    {
      CMatrix::Attach();
      v50 = v53;
      v49 = v52;
      v45 = 0.0;
      v46 = 0.0;
      v47 = 0.0;
      Multiply3x3((const CMatrix *)v44, *((const CVector **)this + 5));
      CDoor::Process(
        (CBoat *)((char *)this + 1524),
        this,
        (CBoat *)((char *)this + 1572),
        (CBoat *)((char *)this + 1584),
        (CVector *)v44);
      *(&v45 + *((unsigned __int8 *)this + 1534)) = *((float *)this + 384);
      CMatrix::SetRotate((CMatrix *)v51, v45, v46, v47);
      *(float *)&v52 = *(float *)&v49 + *(float *)&v52;
      *((float *)&v52 + 1) = *((float *)&v49 + 1) + *((float *)&v52 + 1);
      v53 = v50 + v53;
      CMatrix::UpdateRW((CMatrix *)v51);
      LOWORD(v13) = *((_WORD *)this + 19);
    }
    else
    {
      LOWORD(v13) = 484;
    }
  }
  v14 = (__int16)v13 - 430;
  if ( v14 <= 0x18 && ((1 << v14) & 0x1800001) != 0 )
  {
    v15 = *((_DWORD *)this + 370);
    v16 = (int *)((char *)this + 1460);
    if ( v15 )
    {
      CVehicle::SetComponentRotation((int)this, v15, 2, *v16, 1);
      if ( byte_796816 )
      {
        v17 = *(void (__fastcall **)(int))(GetFirstObject() + 72);
        FirstObject = GetFirstObject();
        v17(FirstObject);
      }
    }
    *(float *)v16 = *(float *)v16 + (float)(*(float *)&CTimer::ms_fTimeStep * 0.02);
  }
  v19 = *((float *)this + 29);
  v20 = *(float32x4_t *)((char *)this + 72);
  v21 = 0;
  v22 = 0;
  v23 = v20.n128_f32[2] * v20.n128_f32[2];
  v24 = vaddq_f32(v20, *((float32x4_t *)this + 6));
  v20.n128_f32[2] = *((float *)this + 22) + *((float *)this + 28);
  v25 = (float)((float)(v20.n128_f32[0] * v20.n128_f32[0]) + (float)(v20.n128_f32[1] * v20.n128_f32[1])) + v23;
  v26 = *((float *)this + 23);
  *(float32x4_t *)((char *)this + 1572) = v24;
  v27 = sqrtf(v25);
  *((float *)this + 398) = v26 + v19;
  v20.n128_f32[0] = v27 + v27;
  *((float *)this + 397) = v20.n128_f32[2];
  v43 = (char *)this + 1596;
  LODWORD(v28) = vmin_f32((float32x2_t)v20.n128_u64[0], v2).n64_u32[0];
  do
  {
    v29 = *((_DWORD *)this + 6);
    if ( !v29 )
    {
      v33 = 0;
      v31 = (FxSystem_c **)((char *)this + 4 * v22 + 1596);
      goto LABEL_35;
    }
    v30 = *(_DWORD *)(v29 + 4);
    v31 = (FxSystem_c **)&v43[v21];
    v32 = *(FxSystem_c **)&v43[v21];
    v33 = v30 + 16;
    if ( !v32 )
    {
      if ( *(_DWORD *)((char *)this + 2 * v21 + 1508) )
      {
        v45 = 0.0;
        v46 = 0.0;
        v47 = 0.0;
        LTM = RwFrameGetLTM();
        v35 = *(_QWORD *)(LTM + 48);
        v36 = *(_DWORD *)(LTM + 56);
        *(_QWORD *)(v30 + 64) = v35;
        *(_DWORD *)(v30 + 72) = v36;
        RwMatrixUpdate(v30 + 16);
        FxSystem = (FxSystem_c *)FxManager_c::CreateFxSystem(
                                   (int)&g_fxMan,
                                   (CKeyGen *)"boat_prop",
                                   (int)&v45,
                                   v30 + 16,
                                   0);
        *v31 = FxSystem;
        if ( FxSystem )
        {
          FxSystem_c::Play(FxSystem);
          FxSystem_c::SetLocalParticles(*v31, 1u);
          FxSystem_c::CopyParentMatrix(*v31);
        }
      }
LABEL_35:
      v32 = *v31;
      if ( !*v31 )
        goto LABEL_42;
    }
    v38 = *((_DWORD *)this + 17);
    PlayStatus = FxSystem_c::GetPlayStatus(v32);
    if ( (v38 & 0x100) != 0 )
    {
      if ( PlayStatus == 1 )
        FxSystem_c::Play(*v31);
      v40 = RwFrameGetLTM();
      v41 = *(_QWORD *)(v40 + 48);
      v42 = *(_DWORD *)(v40 + 56);
      *(_QWORD *)(v33 + 48) = v41;
      *(_DWORD *)(v33 + 56) = v42;
      RwMatrixUpdate(v33);
      FxSystem_c::SetMatrix();
      FxSystem_c::SetConstTime(*v31, 1u, v28);
    }
    else if ( !PlayStatus )
    {
      FxSystem_c::Stop(*v31);
    }
LABEL_42:
    v21 += 4;
    ++v22;
  }
  while ( v21 != 8 );
  CVehicle::DoBoatSplashes(
    this,
    sqrtf(
      (float)((float)(*((float *)this + 401) * *((float *)this + 401))
            + (float)(*((float *)this + 402) * *((float *)this + 402)))
    + (float)(*((float *)this + 403) * *((float *)this + 403))));
  CMatrix::~CMatrix((CMatrix *)v51);
}


// ============================================================

// Address: 0x56b6f0
// Original: _ZN5CBoat6RenderEv
// Demangled: CBoat::Render(void)
int __fastcall CBoat::Render(CBoat *this)
{
  int result; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r5
  int v7; // r1
  int v8; // r5
  int v9; // r1
  int v10; // r2
  int v11; // r3

  *((_DWORD *)this + 312) = CTimer::m_snTimeInMilliseconds + 3000;
  if ( !byte_796816 )
    CVehicle::Render(this);
  result = *((unsigned __int16 *)this + 19);
  if ( result != 460 )
  {
    dword_A02620 = 0x20000;
    dword_A02624 = 65537;
    dword_A02628 = 196610;
    dword_A025A8 = -1;
    dword_A025CC = -1;
    dword_A025F0 = -1;
    dword_A02614 = -1;
    v3 = *((__int16 *)this + 19);
    result = v3 - 430;
    switch ( *((_WORD *)this + 19) )
    {
      case 0x1AE:
        v4 = -1078355558;
        v5 = 1064682127;
        v6 = 1069128090;
        dword_A02590 = -1078355558;
        *(_DWORD *)algn_A02594 = 1072902963;
        dword_A02598 = 1064682127;
        dword_A025B4 = 1069128090;
        unk_A025B8 = 1072902963;
        v7 = -1066401792;
        dword_A025BC = 1064682127;
        goto LABEL_16;
      case 0x1AF:
      case 0x1B0:
      case 0x1B1:
      case 0x1B2:
      case 0x1B3:
      case 0x1B4:
      case 0x1B5:
      case 0x1B6:
      case 0x1B7:
      case 0x1B8:
      case 0x1B9:
      case 0x1BA:
      case 0x1BB:
      case 0x1BC:
      case 0x1BD:
      case 0x1BF:
      case 0x1C0:
      case 0x1C1:
      case 0x1C2:
      case 0x1C3:
      case 0x1C7:
      case 0x1C8:
      case 0x1C9:
      case 0x1CA:
      case 0x1CB:
      case 0x1CC:
      case 0x1CD:
      case 0x1CE:
      case 0x1CF:
      case 0x1D0:
      case 0x1D1:
      case 0x1D2:
      case 0x1D3:
      case 0x1D4:
      case 0x1D5:
      case 0x1D6:
      case 0x1D7:
      case 0x1DA:
      case 0x1DB:
      case 0x1DC:
      case 0x1DD:
      case 0x1DE:
      case 0x1DF:
      case 0x1E0:
      case 0x1E1:
      case 0x1E2:
      case 0x1E3:
        return result;
      case 0x1BE:
        v8 = 1062769525;
        dword_A02590 = -1080268161;
        *(_DWORD *)algn_A02594 = 1073758601;
        dword_A02598 = 1068784157;
        dword_A025B4 = 1067215487;
        unk_A025B8 = 1073758601;
        v9 = -1079051813;
        v10 = -1080117166;
        dword_A025BC = 1068784157;
        v11 = 1067366482;
        goto LABEL_14;
      case 0x1C4:
        v4 = -1080872141;
        v5 = 1065604874;
        v6 = 1066611507;
        dword_A02590 = -1080872141;
        *(_DWORD *)algn_A02594 = 1080494653;
        dword_A02598 = 1065604874;
        dword_A025B4 = 1066611507;
        unk_A025B8 = 1080494653;
        v7 = 1031127695;
        dword_A025BC = 1065604874;
        goto LABEL_16;
      case 0x1C5:
        dword_A025D8 = -1074580685;
        unk_A025DC = 1077223096;
        dword_A025E0 = 1065353216;
        dword_A025FC = 1072902963;
        unk_A02600 = 1077223096;
        dword_A02604 = 1065353216;
        dword_A02590 = -1076593951;
        *(_DWORD *)algn_A02594 = -1064346583;
        dword_A02598 = 1062501089;
        dword_A025B4 = 1070889697;
        unk_A025B8 = -1064346583;
        dword_A025BC = 1062501089;
        goto LABEL_17;
      case 0x1C6:
        v4 = -1074698125;
        v6 = 1072785523;
        dword_A02590 = -1074698125;
        *(_DWORD *)algn_A02594 = -1072286401;
        dword_A02598 = 1061779669;
        dword_A025B4 = 1072785523;
        unk_A025B8 = -1072286401;
        v7 = -1063948124;
        dword_A025BC = 1061779669;
        v5 = 1062702416;
        goto LABEL_16;
      case 0x1D8:
        v8 = 1052971631;
        dword_A02590 = -1087784354;
        *(_DWORD *)algn_A02594 = 1080305910;
        dword_A02598 = 1053005185;
        dword_A025B4 = 1059699294;
        unk_A025B8 = 1080305910;
        v9 = 1062517866;
        v10 = -1081400623;
        dword_A025BC = 1053005185;
        v11 = 1066083025;
        goto LABEL_14;
      case 0x1D9:
        v8 = 1057115603;
        dword_A02590 = -1085536207;
        *(_DWORD *)algn_A02594 = 1070730314;
        dword_A02598 = 1058189345;
        dword_A025B4 = 1061947441;
        unk_A025B8 = 1070730314;
        v9 = -1078405890;
        v10 = -1084395356;
        dword_A025BC = 1058189345;
        v11 = 1063088292;
LABEL_14:
        dword_A025FC = v11;
        unk_A02600 = v9;
        dword_A02604 = v8;
        dword_A025D8 = v10;
        unk_A025DC = v9;
        dword_A025E0 = v8;
        goto LABEL_17;
      case 0x1E4:
        v5 = 1061779669;
        v6 = 1065546154;
        dword_A02590 = -1080066834;
        *(_DWORD *)algn_A02594 = -1079001481;
        dword_A02598 = 1061779669;
        dword_A025B4 = 1067416814;
        unk_A025B8 = -1079001481;
        v7 = -1062580781;
        v4 = -1081937494;
        dword_A025BC = 1061779669;
        goto LABEL_16;
      default:
        result = 595;
        if ( v3 != 595 )
          return result;
        v4 = -1082130432;
        v5 = 1050253722;
        v6 = 1065353216;
        dword_A02590 = -1082130432;
        *(_DWORD *)algn_A02594 = 1075838976;
        dword_A02598 = 1050253722;
        dword_A025B4 = 1065353216;
        unk_A025B8 = 1075838976;
        v7 = -1062417203;
        dword_A025BC = 1050253722;
LABEL_16:
        dword_A025FC = v6;
        unk_A02600 = v7;
        dword_A02604 = v5;
        dword_A025D8 = v4;
        unk_A025DC = v7;
        dword_A025E0 = v5;
LABEL_17:
        dword_A025AC = 0;
        unk_A025B0 = 0;
        dword_A025D0 = 1065353216;
        unk_A025D4 = 0;
        *(_QWORD *)&dword_A025F4 = 0x3F80000000000000LL;
        dword_A02618 = 1065353216;
        dword_A0261C = 1065353216;
        RwRenderStateSet(1, *(_DWORD *)gpWaterTex);
        RwRenderStateSet(12, 1);
        RwRenderStateSet(14, 0);
        RwRenderStateSet(10, 1);
        RwRenderStateSet(11, 2);
        if ( !byte_796816 )
        {
          CMatrix::UpdateRwMatrix();
          if ( RwIm3DTransform() )
          {
            RwIm3DRenderIndexedPrimitive();
            RwIm3DEnd();
          }
        }
        if ( *((_WORD *)this + 19) == 472 )
        {
          dword_A02590 = -1081400623;
          *(_DWORD *)algn_A02594 = 1062517866;
          dword_A02598 = 1052971631;
          dword_A025BC = 1052971631;
          dword_A025E0 = 1052971631;
          dword_A025F4 = 0;
          unk_A025F8 = 1065353216;
          dword_A025FC = 1066166911;
          unk_A02600 = -1069643989;
          dword_A02604 = 1052971631;
          dword_A0261C = 1065353216;
          *(_QWORD *)&dword_A025D0 = 1065353216LL;
          *(_QWORD *)&dword_A025D8 = 0xC03E872BBF8C6A7FLL;
          dword_A02618 = 1065353216;
          *(_QWORD *)&dword_A025AC = 0LL;
          *(_QWORD *)&dword_A025B4 = 0x3F54BC6A3F8B22D1LL;
          if ( !byte_796816 )
          {
            CMatrix::UpdateRwMatrix();
            if ( RwIm3DTransform() )
            {
              RwIm3DRenderIndexedPrimitive();
              RwIm3DEnd();
            }
          }
        }
        RwRenderStateSet(14, 1);
        RwRenderStateSet(10, 5);
        result = RwRenderStateSet(11, 6);
        break;
    }
  }
  return result;
}


// ============================================================

// Address: 0x56bc48
// Original: _ZN5CBoat20ProcessControlInputsEh
// Demangled: CBoat::ProcessControlInputs(uchar)
char *__fastcall CBoat::ProcessControlInputs(CBoat *this, CPad *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  char v7; // r0
  CPad *Pad; // r0
  int v9; // r1
  int Brake; // s0
  float *v11; // r0
  float v12; // s0
  bool v13; // cc
  CPad *v14; // r0
  CPad *v15; // r0
  int v16; // r0
  float v17; // s0
  float v18; // s4
  char *result; // r0

  v7 = (char)a2;
  if ( (unsigned int)a2 >= 3 )
    v7 = 3;
  *((_BYTE *)this + 1617) = v7;
  Pad = (CPad *)CPad::GetPad(a2, (int)a2);
  Brake = CPad::GetBrake(Pad);
  v11 = (float *)((char *)this + 1188);
  v12 = *((float *)this + 297) + (float)((float)((float)((float)Brake / 255.0) - *((float *)this + 297)) * 0.1);
  *((float *)this + 297) = v12;
  v13 = v12 <= 1.0;
  if ( v12 >= 1.0 )
    v13 = v12 <= 0.0;
  if ( v13 )
  {
    if ( v12 <= 0.0 )
    {
      *v11 = 0.0;
    }
    else
    {
      *v11 = v12;
      if ( v12 >= 0.05 )
        goto LABEL_7;
    }
    *v11 = 0.0;
    v14 = (CPad *)CPad::GetPad(a2, 0);
    v2.n64_f32[0] = (float)CPad::GetAccelerate(v14) / 255.0;
    goto LABEL_13;
  }
  v12 = 1.0;
  v9 = 1065353216;
  *v11 = 1.0;
LABEL_7:
  v2.n64_f32[0] = v12 * -0.3;
LABEL_13:
  *((_DWORD *)this + 296) = v2.n64_u32[0];
  v15 = (CPad *)CPad::GetPad(a2, v9);
  *((float *)this + 359) = *((float *)this + 359)
                         + (float)(*(float *)&CTimer::ms_fTimeStep
                                 * (float)((float)((float)((float)-CPad::GetSteeringLeftRight(v15) * 0.0078125)
                                                 - *((float *)this + 359))
                                         * 0.2));
  v3.n64_u32[0] = CVehicle::GetNewSteeringAmt(this);
  v4.n64_u32[0] = 1.0;
  v16 = *((_DWORD *)this + 226);
  v2.n64_f32[0] = v3.n64_f32[0] + *((float *)this + 359);
  v3.n64_u32[0] = -1.0;
  v17 = vmax_f32(vmin_f32(v2, v4), v3).n64_f32[0];
  *((float *)this + 359) = v17;
  v18 = *(float *)(v16 + 160);
  result = (char *)this + 1176;
  *((float *)this + 294) = v17 * (float)((float)(v18 * 3.1416) / 180.0);
  return result;
}


// ============================================================

// Address: 0x56bdc0
// Original: _ZN5CBoat9DebugCodeEv
// Demangled: CBoat::DebugCode(void)
int __fastcall CBoat::DebugCode(CBoat *this)
{
  int result; // r0
  int v3; // r1
  int v4; // r1
  int v5; // r3

  result = FindPlayerVehicle(-1, 0);
  if ( (CBoat *)result == this )
  {
    result = *(unsigned __int16 *)(CPad::GetPad((CPad *)*((unsigned __int8 *)this + 1617), v3) + 24);
    if ( !result )
    {
      result = CPad::GetPad(0, v4);
      if ( *(_WORD *)(result + 20) )
      {
        result = *(unsigned __int16 *)(result + 68);
        if ( !result )
        {
          v5 = *(unsigned __int8 *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]) + 98);
          *(_QWORD *)((char *)this + 1508) = 0LL;
          *(_QWORD *)((char *)this + 1516) = 0LL;
          *(_QWORD *)((char *)this + 1492) = 0LL;
          *(_QWORD *)((char *)this + 1500) = 0LL;
          *(_QWORD *)((char *)this + 1476) = 0LL;
          *(_QWORD *)((char *)this + 1484) = 0LL;
          *((_DWORD *)this + 226) = (char *)&mod_HandlingManager[28 * v5 + 2] + 4;
          return sub_18AB14();
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x56be50
// Original: _ZN5CBoat14ProcessControlEv
// Demangled: CBoat::ProcessControl(void)
float __fastcall CBoat::ProcessControl(CBoat *this)
{
  float *v2; // r0
  float v3; // s0
  unsigned int v4; // r1
  float v5; // s2
  float v6; // s4
  float v7; // s2
  CVehicle *PlayerVehicle; // r0
  unsigned int v9; // r0
  int v10; // r5
  int v11; // r0
  int v12; // r6
  char v13; // r1
  char *v14; // r5
  int v15; // r2
  int PlayerCentreOfWorld_NoSniperShift; // r0
  float32x2_t v17; // d16
  unsigned __int64 v18; // d1
  float result; // r0
  char v20; // r1
  int v21; // r0
  char v22; // r0
  int v23; // r1
  char v24; // r0
  CVehicle *v25; // r1
  unsigned int v26; // r0
  float v27; // s0
  float v28; // s2
  float v29; // s4
  float *v30; // r1
  float v31; // s0
  float *v32; // r5
  float v33; // s16
  CPed *v34; // r0
  float v35; // s0
  char v36; // r0
  float v37; // s2
  float v38; // s0
  float v39; // s0
  float v40; // s0
  FxSystem_c *v41; // r0
  int v42; // r1
  float *v43; // r0
  float *v44; // r1
  int v45; // r0
  float v46; // s2
  float v47; // s4
  float v48; // s6
  int v49; // r0
  FxSystem_c *FxSystem; // r0
  CEventGroup *EventGlobalGroup; // r0
  float v52; // s0
  int v53; // r5
  int v54; // r6
  CBoat *v55; // r0
  int v56; // r1
  int v57; // r5
  float v58; // s16
  float v59; // s0
  float v60; // s0
  int *v61; // r0
  int v62; // r6
  int v63; // r8
  int v64; // r9
  _BYTE v65[20]; // [sp+Ch] [bp-44h] BYREF
  float v66[3]; // [sp+20h] [bp-30h] BYREF
  float v67[9]; // [sp+2Ch] [bp-24h] BYREF

  v2 = (float *)((char *)this + 1884);
  v3 = *(float *)&CTimer::ms_fTimeStep;
  v4 = 0;
  while ( 1 )
  {
    v5 = *v2;
    if ( *v2 <= 0.0 )
      break;
    if ( v5 <= v3 )
    {
      *v2 = 0.0;
      break;
    }
    ++v4;
    *v2++ = v5 - v3;
    if ( v4 >= 0x20 )
      goto LABEL_8;
  }
  *((_WORD *)this + 812) = v4;
LABEL_8:
  CVehicle::ProcessDelayedExplosion(this);
  if ( (*((_BYTE *)this + 71) & 0x20) != 0 )
  {
    v6 = *((float *)this + 36);
    v7 = *((float *)this + 41);
    if ( v7 > (float)((float)((float)(v6 * 0.008) * 100.0) / 125.0) )
      *((float *)this + 41) = v7 + (float)((float)(v6 * -0.001) * 0.008);
  }
  if ( *(int *)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44) >= 1 && *((_WORD *)this + 19) == 430 )
  {
    PlayerVehicle = (CVehicle *)FindPlayerVehicle(-1, 0);
    if ( PlayerVehicle )
    {
      if ( CVehicle::GetVehicleAppearance(PlayerVehicle) == 4 )
      {
        v9 = *((char *)this + 958);
        if ( v9 <= 0x15 && ((1 << v9) & 0x20003C) != 0 )
        {
          v10 = CTimer::m_snTimeInMilliseconds;
          if ( (unsigned int)CTimer::m_snTimeInMilliseconds > *((_DWORD *)this + 389) )
            *((_DWORD *)this + 389) = (rand() & 0xFFF) + v10 + 4500;
        }
      }
    }
  }
  CVehicle::UpdateClumpAlpha(this);
  CVehicle::ProcessCarAlarm(this);
  switch ( *((unsigned __int8 *)this + 58) >> 3 )
  {
    case 0:
      v20 = *((_BYTE *)this + 1472);
      *((_DWORD *)this + 388) = -971227146;
      v21 = *((_DWORD *)this + 281);
      *((_BYTE *)this + 1472) = v20 & 0xFB;
      if ( v21 )
        (*(void (__fastcall **)(CBoat *, _DWORD))(*(_DWORD *)this + 100))(this, *(unsigned __int8 *)(v21 + 1436));
      if ( *((_WORD *)this + 19) == 430 )
        CVehicle::DoFixedMachineGuns(this);
      CVehicle::DoDriveByShootings(this);
      goto LABEL_31;
    case 2:
      v22 = *((_BYTE *)this + 1472) & 0xFB;
      *((_DWORD *)this + 388) = -971227146;
      *((_BYTE *)this + 1472) = v22;
      CCarAI::UpdateCarAI(this, (CVehicle *)0xC61C3FF6);
      CPhysical::ProcessControl(this);
      v23 = *((_DWORD *)this + 17);
      *((_BYTE *)this + 1472) |= 3u;
      LODWORD(result) = v23 | 0x100;
      *((_DWORD *)this + 17) = v23 | 0x100;
      return result;
    case 3:
      v24 = *((_BYTE *)this + 1472) & 0xFB;
      *((_DWORD *)this + 388) = -971227146;
      *((_BYTE *)this + 1472) = v24;
      CCarAI::UpdateCarAI(this, (CVehicle *)0xC61C3FF6);
      CCarCtrl::SteerAICarWithPhysics(this, v25);
      goto LABEL_31;
    case 4:
    case 5:
      v11 = *((_DWORD *)this + 17);
      v12 = *((_DWORD *)this + 5);
      *((_DWORD *)this + 294) = 0;
      v13 = *((_BYTE *)this + 1472);
      v14 = (char *)(v12 + 48);
      *((_DWORD *)this + 296) = 0;
      *((_DWORD *)this + 297) = 1056964608;
      v15 = *((_DWORD *)this + 267);
      *((_BYTE *)this + 1472) = v13 | 3;
      *((_DWORD *)this + 17) = v11 | 0x100;
      *((_DWORD *)this + 267) = v15 & 0xFFFFFFDF;
      PlayerCentreOfWorld_NoSniperShift = FindPlayerCentreOfWorld_NoSniperShift(0);
      if ( !v12 )
        v14 = (char *)this + 4;
      v17.n64_u64[0] = vsub_f32(*(float32x2_t *)(v14 + 4), *(float32x2_t *)(PlayerCentreOfWorld_NoSniperShift + 4)).n64_u64[0];
      v18 = vmul_f32(v17, v17).n64_u64[0];
      if ( sqrtf(
             (float)((float)((float)(*(float *)v14 - *(float *)PlayerCentreOfWorld_NoSniperShift)
                           * (float)(*(float *)v14 - *(float *)PlayerCentreOfWorld_NoSniperShift))
                   + *(float *)&v18)
           + *((float *)&v18 + 1)) <= 150.0 )
        goto LABEL_31;
      LODWORD(result) = (char *)this + 72;
      *((_DWORD *)this + 22) = 0;
      *((_DWORD *)this + 23) = 0;
      *((_QWORD *)this + 9) = 0LL;
      *((_QWORD *)this + 10) = 0LL;
      return result;
    default:
LABEL_31:
      v26 = *((unsigned __int8 *)this + 58);
      if ( v26 >> 3 <= 8 && ((1 << (*((_BYTE *)this + 58) >> 3)) & 0x109) != 0 )
      {
        v27 = CPlane::PLANE_ROC_PROP_SPEED;
        if ( *((_WORD *)this + 19) == 460 )
        {
          v28 = *((float *)this + 296);
          v29 = CPlane::PLANE_STD_PROP_SPEED;
        }
        else
        {
          v29 = 0.0;
          v28 = *((float *)this + 296);
          if ( v28 != 0.0 )
            v27 = CPlane::PLANE_ROC_PROP_SPEED * 5.0;
        }
        if ( v28 <= 0.0 )
        {
          if ( v28 < 0.0 )
            v29 = CPlane::PLANE_STD_PROP_SPEED
                + (float)(v28 * (float)(CPlane::PLANE_STD_PROP_SPEED - CPlane::PLANE_MIN_PROP_SPEED));
        }
        else
        {
          v29 = CPlane::PLANE_STD_PROP_SPEED
              + (float)(v28 * (float)(CPlane::PLANE_MAX_PROP_SPEED - CPlane::PLANE_STD_PROP_SPEED));
        }
        v30 = (float *)((char *)this + 1464);
        v31 = *((float *)this + 366)
            + (float)(*(float *)&CTimer::ms_fTimeStep * (float)(v27 * (float)(v29 - *((float *)this + 366))));
        goto LABEL_42;
      }
      v30 = (float *)((char *)this + 1464);
      v38 = *((float *)this + 366);
      if ( v38 > 0.0 )
      {
        v31 = v38 * 0.95;
LABEL_42:
        *v30 = v31;
      }
      v67[0] = *((float *)this + 55) * *(float *)(*((_DWORD *)this + 226) + 200);
      if ( v67[0] > 25.0 && (v26 & 0xF8) != 0x28 )
      {
        v32 = (float *)((char *)this + 1228);
        v33 = *((float *)this + 307);
        if ( v33 >= 250.0 )
        {
          CVehicle::ReduceVehicleDamage(this, v67);
          if ( this == (CBoat *)FindPlayerVehicle(-1, 0) )
          {
            v35 = 2.0;
            v36 = *((_BYTE *)this + 1069);
            v37 = 6.0;
          }
          else
          {
            if ( v67[0] > 60.0 )
            {
              v34 = (CPed *)*((_DWORD *)this + 281);
              if ( v34 )
                CPed::Say(v34, 0x44u, 0, 1.0, 0, 0, 0);
            }
            v35 = 4.0;
            v36 = *((_BYTE *)this + 1069);
            v37 = 12.0;
          }
          if ( v36 < 0 )
            v35 = v37;
          v39 = *v32 - (float)((float)(v67[0] + -25.0) / v35);
          *v32 = v39;
          if ( v33 > 0.0 && v39 <= 0.0 )
          {
            *v32 = 1.0;
            *((_DWORD *)this + 392) = *((_DWORD *)this + 56);
          }
        }
      }
      v40 = *((float *)this + 307);
      if ( v40 > 460.0 || (*((_BYTE *)this + 58) & 0xF8) == 0x28 )
      {
        v41 = (FxSystem_c *)*((_DWORD *)this + 355);
        *((_DWORD *)this + 391) = 0;
        if ( v41 )
        {
          FxSystem_c::Kill(v41);
          *((_DWORD *)this + 355) = 0;
        }
      }
      else
      {
        v42 = *((_DWORD *)this + 5);
        v43 = (float *)(v42 + 48);
        if ( !v42 )
          v43 = (float *)((char *)this + 4);
        v44 = (float *)(dword_951FBC + 48);
        if ( !dword_951FBC )
          v44 = (float *)&qword_951FAC;
        if ( fabsf(*v43 - *v44) < 200.0 && fabsf(v43[1] - v44[1]) < 200.0 )
        {
          v45 = *((__int16 *)this + 19);
          if ( v45 == 453 )
          {
            v46 = 1.5;
            v47 = -1.0;
            v48 = 2.0;
          }
          else if ( v45 == 452 )
          {
            v46 = 1.8;
            v47 = -2.4;
            v48 = 0.4;
          }
          else
          {
            v47 = -0.5;
            v46 = 2.2;
            v48 = -1.5;
          }
          v66[1] = v47;
          v66[0] = v48;
          v66[2] = v46;
          if ( v40 < 250.0 )
          {
            if ( !*((_DWORD *)this + 355) )
            {
              v49 = *((_DWORD *)this + 6);
              if ( v49 )
              {
                FxSystem = (FxSystem_c *)FxManager_c::CreateFxSystem(
                                           (int)&g_fxMan,
                                           (CKeyGen *)"fire_car",
                                           (int)v66,
                                           *(_DWORD *)(v49 + 4) + 16,
                                           0);
                *((_DWORD *)this + 355) = FxSystem;
                if ( FxSystem )
                {
                  FxSystem_c::Play(FxSystem);
                  CEventVehicleOnFire::CEventVehicleOnFire((CEventVehicleOnFire *)v65, this);
                  EventGlobalGroup = (CEventGroup *)GetEventGlobalGroup();
                  CEventGroup::Add(EventGlobalGroup, (CEvent *)v65, 0);
                  CEventVehicleOnFire::~CEventVehicleOnFire((CEventVehicleOnFire *)v65);
                }
              }
            }
            v52 = *((float *)this + 391)
                + (float)(unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
            *((float *)this + 391) = v52;
            if ( v52 > 5000.0 )
              (*(void (__fastcall **)(CBoat *, _DWORD, _DWORD))(*(_DWORD *)this + 168))(
                this,
                *((_DWORD *)this + 392),
                0);
          }
        }
      }
      v53 = *((_DWORD *)this + 7) & 0x1000;
      v54 = *((float *)this + 55) > 0.0 && *((float *)this + 59) > 0.1;
      CPhysical::ProcessControl(this);
      CVehicle::ProcessBoatControl(this, *((_DWORD *)this + 387), (int)this + 1620, v53 != 0, v54);
      if ( *((_WORD *)this + 19) != 460 )
      {
        if ( !byte_79681E )
          goto LABEL_91;
        v55 = this;
        v56 = 5;
        goto LABEL_90;
      }
      if ( *((float *)this + 366) > CPlane::PLANE_MIN_PROP_SPEED
        || (float)((float)((float)(*((float *)this + 18) * *((float *)this + 18))
                         + (float)(*((float *)this + 19) * *((float *)this + 19)))
                 + (float)(*((float *)this + 20) * *((float *)this + 20))) > 0.05 )
      {
        v55 = this;
        v56 = 3;
LABEL_90:
        CVehicle::FlyingControl((int)v55, v56, -971227146, -971227146, -10000.0, -10000.0);
      }
LABEL_91:
      LODWORD(result) = *((unsigned __int8 *)this + 1472) << 29;
      if ( (*((_BYTE *)this + 1472) & 4) != 0 )
      {
        v57 = *((_DWORD *)this + 5);
        result = 0.0;
        v58 = *((float *)this + 388);
        *((_DWORD *)this + 18) = 0;
        *((_DWORD *)this + 19) = 0;
        if ( v57 )
        {
          result = atan2f(COERCE_FLOAT(*(_DWORD *)(v57 + 16) ^ 0x80000000), *(float *)(v57 + 20));
          v59 = result;
        }
        else
        {
          v59 = *((float *)this + 4);
        }
        if ( v58 == -10000.0 )
        {
          *((float *)this + 388) = v59;
        }
        else
        {
          v60 = v58 - v59;
          v61 = (int *)(v57 + 48);
          if ( !v57 )
            v61 = (int *)((char *)this + 4);
          v62 = *v61;
          v63 = v61[1];
          v64 = v61[2];
          CMatrix::RotateZ((CMatrix *)v57, v60);
          *(_DWORD *)(*((_DWORD *)this + 5) + 48) = v62;
          *(_DWORD *)(*((_DWORD *)this + 5) + 52) = v63;
          result = *((float *)this + 5);
          *(_DWORD *)(LODWORD(result) + 56) = v64;
        }
      }
      return result;
  }
}


// ============================================================

// Address: 0x56c608
// Original: _ZN5CBoat14PruneWakeTrailEv
// Demangled: CBoat::PruneWakeTrail(void)
int __fastcall CBoat::PruneWakeTrail(int this)
{
  float *v1; // r1
  float v2; // s0
  unsigned int v3; // r2
  float v4; // s2

  v1 = (float *)(this + 1884);
  v2 = *(float *)&CTimer::ms_fTimeStep;
  v3 = 0;
  while ( 1 )
  {
    v4 = *v1;
    if ( *v1 <= 0.0 )
      break;
    if ( v4 <= v2 )
    {
      *v1 = 0.0;
      break;
    }
    ++v3;
    *v1++ = v4 - v2;
    if ( v3 >= 0x20 )
      return this;
  }
  *(_WORD *)(this + 1624) = v3;
  return this;
}


// ============================================================

// Address: 0x56c650
// Original: _ZN5CBoat8TeleportE7CVectorh
// Demangled: CBoat::Teleport(CVector,uchar)
int __fastcall CBoat::Teleport(int a1, CEntity *a2, int a3, int a4, int a5)
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
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  return sub_19B3B8((CWorld *)a1, v10);
}


// ============================================================

// Address: 0x56c6f4
// Original: _ZN5CBoat19DisplayHandlingDataEv
// Demangled: CBoat::DisplayHandlingData(void)
int __fastcall CBoat::DisplayHandlingData(CBoat *this)
{
  _BYTE v3[64]; // [sp+4h] [bp-4Ch] BYREF
  int v4; // [sp+44h] [bp-Ch]

  sub_5E6BC0(
    v3,
    "Thrust %3.2f",
    (float)(*(float *)(*((_DWORD *)this + 226) + 124) * *(float *)(*((_DWORD *)this + 226) + 4)));
  sub_5E6BC0(v3, "Rudder Angle  %3.2f", *(float *)(*((_DWORD *)this + 226) + 160));
  return _stack_chk_guard - v4;
}


// ============================================================

// Address: 0x56c784
// Original: _ZN5CBoat19ModifyHandlingValueERKb
// Demangled: CBoat::ModifyHandlingValue(bool const&)
int __fastcall CBoat::ModifyHandlingValue(int this, const bool *a2)
{
  float v2; // s0

  if ( *(_BYTE *)(this + 1616) == 4 )
  {
    v2 = 1.0;
    if ( !*a2 )
      v2 = -1.0;
    this = *(_DWORD *)(this + 904);
    *(float *)(this + 160) = *(float *)(this + 160) + v2;
  }
  return this;
}


// ============================================================

// Address: 0x56c7b4
// Original: _ZN5CBoat9BlowUpCarEP7CEntityh
// Demangled: CBoat::BlowUpCar(CEntity *,uchar)
void __fastcall CBoat::BlowUpCar(CBoat *this, CEntity *a2, int a3)
{
  unsigned int *v6; // r5
  float v7; // s0
  int v8; // r3
  float *v9; // r9
  int v10; // r1
  float *v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r2
  int v14; // r0
  int *v15; // r1
  int v16; // r2
  int v17; // r0
  unsigned int v18; // r1
  int v19; // r5
  __int64 *LTM; // r8
  _QWORD *v21; // r6
  __int64 v22; // d16
  __int64 v23; // d17
  __int64 v24; // d19
  __int64 v25; // d22
  __int64 v26; // d23
  __int64 v27; // d20
  __int64 v28; // d21
  int v29; // r3
  int v30; // r0
  __int64 v31; // d16
  int *v32; // r0
  float v33; // s2
  float v34; // s0
  int v35; // r0
  int v36; // r1
  float *v37; // r0
  float v38; // s4
  float v39; // s10
  float v40; // s0
  CEntity *v41; // r1
  float *v42; // r0
  float v43; // s2
  float v44; // s2
  float v45; // s0
  float v46; // s4
  float *v47; // r0
  float v48; // s4
  float v49; // s2
  float v50; // [sp+18h] [bp-28h] BYREF
  float v51; // [sp+1Ch] [bp-24h]
  float v52; // [sp+20h] [bp-20h]
  _DWORD v53[7]; // [sp+24h] [bp-1Ch] BYREF

  if ( (*((_BYTE *)this + 1070) & 0x20) != 0 )
  {
    v6 = (unsigned int *)((char *)this + 1068);
    v7 = *((float *)this + 20) + 0.13;
    v8 = *((_DWORD *)this + 17);
    *((_BYTE *)this + 58) = *((_BYTE *)this + 58) & 7 | 0x28;
    *((_DWORD *)this + 17) = v8 | 0x20000000;
    *((float *)this + 20) = v7;
    CVisibilityPlugins::SetClumpForAllAtomicsFlag();
    v9 = (float *)((char *)this + 4);
    v10 = *((_DWORD *)this + 5);
    v11 = (float *)((char *)this + 4);
    *((_WORD *)this + 631) = 0;
    *((_DWORD *)this + 307) = 0;
    if ( v10 )
      v11 = (float *)(v10 + 48);
    CCamera::CamShake((CCamera *)&TheCamera, 0.4, *v11, v11[1], v11[2]);
    CVehicle::KillPedsInVehicle(this);
    v13 = v6[1];
    v12 = *v6;
    *((_BYTE *)this + 1202) &= 0xE7u;
    *v6 = v12 & 0xFFFFFFAF;
    *((_DWORD *)this + 268) = v13;
    CVehicle::ChangeLawEnforcerState(this, 0);
    v14 = *((_DWORD *)this + 5);
    v15 = (int *)((char *)this + 4);
    if ( v14 )
      v15 = (int *)(v14 + 48);
    CExplosion::AddExplosion((int)this, (int)a2, 6, *v15, v15[1], v15[2], 0, 1, -1.0, a3);
    CDarkel::RegisterCarBlownUpByPlayer(this, 0, v16);
    v17 = *((_DWORD *)this + 370);
    if ( v17 )
    {
      v53[0] = 0;
      RwFrameForAllObjects(v17, GetBoatAtomicObjectCB, v53);
      if ( v53[0] )
      {
        v19 = CObject::operator new((CObject *)&elf_hash_bucket[34], v18);
        CObject::CObject((CObject *)v19);
        if ( v19 )
        {
          (*(void (__fastcall **)(int, int))(*(_DWORD *)v19 + 28))(v19, 379);
          CObject::RefModelInfo((CObject *)v19, *((__int16 *)this + 19));
          LTM = (__int64 *)RwFrameGetLTM();
          v21 = (_QWORD *)RwFrameCreate();
          v53[0] = RpAtomicClone();
          v22 = *LTM;
          v23 = LTM[1];
          v24 = LTM[7];
          v25 = LTM[2];
          v26 = LTM[3];
          v27 = LTM[4];
          v28 = LTM[5];
          v21[8] = LTM[6];
          v21[9] = v24;
          v21[6] = v27;
          v21[7] = v28;
          v21[2] = v22;
          v21[3] = v23;
          v21[4] = v25;
          v21[5] = v26;
          RpAtomicSetFrame();
          CVisibilityPlugins::SetAtomicRenderCallback();
          CEntity::AttachToRwObject();
          *(_DWORD *)(v19 + 144) = 1092616192;
          *(_DWORD *)(v19 + 148) = 1103626240;
          v29 = *(_DWORD *)(v19 + 28);
          *(_DWORD *)(v19 + 156) = 1065185444;
          *(_DWORD *)(v19 + 160) = 1036831949;
          *(_DWORD *)(v19 + 164) = 1037726735;
          *(_DWORD *)(v19 + 28) = v29 | 0x80000;
          ++CObject::nNoTempObjects;
          v30 = *(_DWORD *)v19;
          *(_BYTE *)(v19 + 320) = 3;
          (*(void (__fastcall **)(int, _DWORD))(v30 + 20))(v19, 0);
          *(_DWORD *)(v19 + 324) &= ~1u;
          *(_DWORD *)(v19 + 340) = CTimer::m_snTimeInMilliseconds + 20000;
          v31 = *((_QWORD *)this + 9);
          *(_DWORD *)(v19 + 80) = *((_DWORD *)this + 20);
          *(_QWORD *)(v19 + 72) = v31;
          v32 = &dword_56CB0C;
          if ( *(float *)(*((_DWORD *)this + 5) + 40) > 0.0 )
            v32 = &dword_56CB10;
          *(_DWORD *)(v19 + 80) = *v32;
          v33 = *((float *)this + 23);
          v34 = *((float *)this + 22) + *((float *)this + 22);
          *(_DWORD *)(v19 + 84) = 1056964608;
          *(float *)(v19 + 88) = v34;
          *(float *)(v19 + 92) = v33 + v33;
          v35 = *((_DWORD *)this + 5);
          v36 = *(_DWORD *)(v19 + 20);
          if ( v35 )
            v9 = (float *)(v35 + 48);
          v37 = (float *)(v36 + 48);
          v38 = v9[2];
          if ( !v36 )
            v37 = (float *)(v19 + 4);
          v39 = v37[2];
          v40 = *v37 - *v9;
          v51 = v37[1] - v9[1];
          v50 = v40;
          v52 = v39 - v38;
          CVector::Normalise((CVector *)&v50);
          v42 = (float *)*((_DWORD *)this + 5);
          v43 = v42[10];
          if ( v43 <= 0.0 )
          {
            v45 = v50;
            v46 = v51;
            v44 = v52;
          }
          else
          {
            v44 = v43 + v52;
            v45 = v42[8] + v50;
            v46 = v42[9] + v51;
            v50 = v45;
            v52 = v44;
            v51 = v46;
          }
          v47 = *(float **)(v19 + 20);
          v48 = v46 + v47[13];
          v49 = v44 + v47[14];
          v47[12] = v45 + v47[12];
          v47[13] = v48;
          v47[14] = v49;
          CWorld::Add((CWorld *)v19, v41);
          v53[0] = 0;
          RwFrameForAllObjects(*((_DWORD *)this + 370), GetBoatAtomicObjectCB, v53);
          if ( v53[0] )
            *(_BYTE *)(v53[0] + 2) = 0;
        }
      }
    }
  }
}


// ============================================================

// Address: 0x56cb18
// Original: _ZN5CBoat12AddWakePointE7CVector
// Demangled: CBoat::AddWakePoint(CVector)
int __fastcall CBoat::AddWakePoint(int result, int a2, int a3)
{
  unsigned int v3; // r12
  float32x2_t *v4; // r5
  int v5; // r9
  float32x2_t *v6; // r6
  float32x2_t v7; // d16
  unsigned __int64 v8; // d1
  unsigned int v9; // r8
  unsigned int v10; // r4
  int v11; // r1
  unsigned int v12; // r6
  int v13; // r1

  v3 = (unsigned int)(float)(sqrtf(
                               (float)((float)(*(float *)(result + 72) * *(float *)(result + 72))
                                     + (float)(*(float *)(result + 76) * *(float *)(result + 76)))
                             + (float)(*(float *)(result + 80) * *(float *)(result + 80)))
                           * 100.0);
  if ( *(float *)(result + 1884) <= 0.0 )
  {
    *(_DWORD *)(result + 1628) = a2;
    *(_DWORD *)(result + 1632) = a3;
    *(_BYTE *)(result + 2012) = v3;
    v11 = CBoat::WAKE_LIFETIME;
    *(_WORD *)(result + 1624) = 1;
    *(_DWORD *)(result + 1884) = v11;
    return result;
  }
  v4 = *(float32x2_t **)(result + 20);
  v5 = result + 1628;
  v6 = v4 + 6;
  if ( !v4 )
    v6 = (float32x2_t *)(result + 4);
  v7.n64_u64[0] = vsub_f32((float32x2_t)v6->n64_u64[0], *(float32x2_t *)(result + 1628)).n64_u64[0];
  v8 = vmul_f32(v7, v7).n64_u64[0];
  if ( (float)(*(float *)&v8 + *((float *)&v8 + 1)) > (float)(CBoat::MIN_WAKE_INTERVAL * CBoat::MIN_WAKE_INTERVAL) )
  {
    if ( *(unsigned __int8 *)(result + 58) > 7u )
    {
      v9 = *(unsigned __int16 *)(result + 1624);
      if ( *(_BYTE *)(result + 1192) == 2 )
      {
        if ( v9 >= 0x14 )
        {
          v10 = 20;
          goto LABEL_16;
        }
      }
      else if ( v9 > 0xE )
      {
        v10 = 15;
        goto LABEL_16;
      }
    }
    else
    {
      v9 = *(unsigned __int16 *)(result + 1624);
      if ( v9 >= 0x1F )
      {
        v10 = 31;
        goto LABEL_16;
      }
    }
    v10 = v9;
    if ( !v9 )
    {
LABEL_19:
      *(_DWORD *)(result + 1628) = a2;
      *(_DWORD *)(result + 1632) = a3;
      v13 = CBoat::WAKE_LIFETIME;
      *(_BYTE *)(result + 2012) = v3;
      *(_DWORD *)(result + 1884) = v13;
      if ( v10 <= 0x1F )
        *(_WORD *)(result + 1624) = v10 + 1;
      return result;
    }
LABEL_16:
    v12 = v10;
    do
    {
      --v10;
      *(_DWORD *)(v5 + 8 * v12) = *(_DWORD *)(v5 + 8 * (v12 - 1));
      *(_DWORD *)(v5 + 8 * v12 + 4) = *(_DWORD *)(v5 + 8 * (v12 - 1) + 4);
      *(_DWORD *)(result + 1884 + 4 * v12) = *(_DWORD *)(result + 1884 + 4 * (v12 - 1));
      *(_BYTE *)(result + 2012 + v12) = *(_BYTE *)(result + 2012 + v12 - 1);
      v12 = (unsigned __int16)v10;
    }
    while ( (_WORD)v10 );
    v10 = v9;
    goto LABEL_19;
  }
  return result;
}


// ============================================================

// Address: 0x56cc6c
// Original: _ZN5CBoat12FillBoatListEv
// Demangled: CBoat::FillBoatList(void)
_DWORD *__fastcall CBoat::FillBoatList(CBoat *this)
{
  float32x2_t v1; // d10
  float32x2_t v2; // d11
  float v3; // s0
  float v4; // s2
  float *v5; // r1
  float v6; // s6
  float v7; // s8
  float v8; // s4
  _DWORD *result; // r0
  int v10; // r2
  int v11; // r1
  int *v12; // r12
  int v13; // r2
  __int16 v14; // lr
  int v15; // r1
  unsigned __int64 v16; // d7
  int *v17; // r3
  int v18; // r5
  int v19; // r6
  float *v20; // r4
  float v21; // s1
  float v22; // s3
  float v23; // s5
  float v24; // s1
  int v25; // r3
  float *v26; // r8
  int v27; // r4
  float *v28; // r12
  float v29; // s3
  int v30; // r3
  float v31; // s5
  int v32; // r8
  float *v33; // r4
  float *v34; // r3
  int v35; // r6
  float v36; // s3
  float v37; // s5
  float v38; // s5
  float32x2_t v39; // d9
  float v40; // s3
  float32x2_t v41; // d12
  float v42; // s16
  int *v43; // [sp+0h] [bp-58h]
  int *v44; // [sp+4h] [bp-54h]

  v3 = *(float *)&dword_9528B8;
  v4 = *(float *)&dword_9528B4;
  *(_QWORD *)&CBoat::apFrameWakeGeneratingBoats = 0LL;
  *(_QWORD *)&dword_A02588 = 0LL;
  v5 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v5 = (float *)&qword_951FAC;
  v6 = v5[1];
  v7 = sqrtf(
         (float)(*(float *)&dword_9528B4 * *(float *)&dword_9528B4)
       + (float)(*(float *)&dword_9528B8 * *(float *)&dword_9528B8));
  v8 = *v5;
  if ( v7 > 0.0 )
  {
    v3 = *(float *)&dword_9528B8 / v7;
    v4 = *(float *)&dword_9528B4 / v7;
  }
  result = (_DWORD *)CPools::ms_pVehiclePool;
  v10 = *(_DWORD *)(CPools::ms_pVehiclePool + 8);
  if ( v10 )
  {
    v11 = 2604 * v10;
    v12 = &CBoat::apFrameWakeGeneratingBoats;
    v13 = v10 - 1;
    v14 = 0;
    v15 = v11 - 2604;
    LODWORD(v16) = 1232348158;
    v17 = &CBoat::apFrameWakeGeneratingBoats;
    do
    {
      if ( *(char *)(result[1] + v13) >= 0 )
      {
        v18 = *result + v15;
        if ( v18 )
        {
          if ( *(_DWORD *)(v18 + 1440) == 5 && *(_WORD *)(v18 + 1624) )
          {
            v19 = *(_DWORD *)(v18 + 20);
            v20 = (float *)(v19 + 48);
            if ( !v19 )
              v20 = (float *)(v18 + 4);
            v21 = *v20 - v8;
            v22 = v20[1] - v6;
            v23 = (float)(v4 * v21) + (float)(v3 * v22);
            if ( v23 <= 100.0 && v23 >= -15.0 )
            {
              v24 = (float)(v21 * v21) + (float)(v22 * v22);
              if ( v24 <= 6400.0 )
              {
                if ( v14 >= 4 )
                {
                  v43 = v17;
                  v44 = v12;
                  v25 = *(_DWORD *)(CBoat::apFrameWakeGeneratingBoats + 20);
                  v26 = (float *)(v25 + 48);
                  if ( !v25 )
                    v26 = (float *)(CBoat::apFrameWakeGeneratingBoats + 4);
                  v27 = *(_DWORD *)(dword_A02588 + 20);
                  v28 = (float *)(v27 + 48);
                  v29 = *v26 - v8;
                  v30 = *(_DWORD *)(*(_DWORD *)algn_A02584 + 20);
                  v31 = v26[1] - v6;
                  v32 = *(_DWORD *)(unk_A0258C + 20);
                  if ( !v27 )
                    v28 = (float *)(dword_A02588 + 4);
                  v33 = (float *)(v30 + 48);
                  if ( !v30 )
                    v33 = (float *)(*(_DWORD *)algn_A02584 + 4);
                  v34 = (float *)(v32 + 48);
                  v35 = 0;
                  v36 = v29 * v29;
                  v37 = v31 * v31;
                  if ( !v32 )
                    v34 = (float *)(unk_A0258C + 4);
                  v38 = v36 + v37;
                  *((float *)&v16 + 1) = (float)(*v34 - v8) * (float)(*v34 - v8);
                  v1.n64_f32[0] = (float)((float)(*v33 - v8) * (float)(*v33 - v8))
                                + (float)((float)(v33[1] - v6) * (float)(v33[1] - v6));
                  v39.n64_u64[0] = v16;
                  v2.n64_f32[0] = (float)((float)(*v28 - v8) * (float)(*v28 - v8))
                                + (float)((float)(v28[1] - v6) * (float)(v28[1] - v6));
                  v40 = *((float *)&v16 + 1) + (float)((float)(v34[1] - v6) * (float)(v34[1] - v6));
                  if ( v38 < 1000000.0 )
                    v39.n64_f32[0] = v38;
                  v41.n64_u64[0] = vmin_f32(v1, v39).n64_u64[0];
                  LODWORD(v42) = vmin_f32(v2, v41).n64_u32[0];
                  if ( v38 >= 1000000.0 )
                    v35 = -1;
                  if ( v1.n64_f32[0] < v39.n64_f32[0] )
                    v35 = 1;
                  if ( v2.n64_f32[0] < v41.n64_f32[0] )
                    v35 = 2;
                  if ( v40 < v42 )
                    v35 = 3;
                  if ( v35 == -1 )
                    goto LABEL_42;
                  if ( v40 < v42 )
                    v42 = *((float *)&v16 + 1) + (float)((float)(v34[1] - v6) * (float)(v34[1] - v6));
                  if ( v24 >= v42 && *(unsigned __int8 *)(v18 + 58) > 7u )
                  {
LABEL_42:
                    v17 = v43;
                    v12 = v44;
                  }
                  else
                  {
                    v17 = v43;
                    v12 = v44;
                    v43[v35] = v18;
                  }
                }
                else
                {
                  v12[v14++] = v18;
                }
              }
            }
          }
        }
      }
      --v13;
      v15 -= 2604;
    }
    while ( v13 != -1 );
  }
  return result;
}


// ============================================================

// Address: 0x56cf24
// Original: _ZN5CBoat22IsSectorAffectedByWakeE9CVector2DfPPS_
// Demangled: CBoat::IsSectorAffectedByWake(CVector2D,float,CBoat**)
bool __fastcall CBoat::IsSectorAffectedByWake(float a1, float a2, float a3, int a4)
{
  int v4; // r4
  int v8; // r0
  int v9; // r10
  int v10; // r1
  __int16 v11; // r2
  int v12; // r5
  int v13; // r1
  float v14; // s12

  v4 = CBoat::apFrameWakeGeneratingBoats[0];
  if ( !CBoat::apFrameWakeGeneratingBoats[0] )
    return 0;
  v8 = 0;
  LOWORD(v9) = 0;
  do
  {
    if ( *(_WORD *)(v4 + 1624) )
    {
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        v12 = v4 + 4 * v10;
        v13 = v4 + 8 * v10;
        v14 = (float)((float)(fShapeLength * (float)v11)
                    + (float)(fShapeTime * (float)(*(float *)&CBoat::WAKE_LIFETIME - *(float *)(v12 + 1884))))
            + a3;
        if ( fabsf(*(float *)(v13 + 1628) - a1) < v14 && fabsf(*(float *)(v13 + 1632) - a2) < v14 )
          break;
        v10 = ++v11;
        if ( v11 >= (int)*(unsigned __int16 *)(v4 + 1624) )
          goto LABEL_10;
      }
      *(_DWORD *)(a4 + 4 * v8++) = v4;
    }
LABEL_10:
    v9 = (__int16)(v9 + 1);
    if ( v9 > 3 )
      break;
    v4 = CBoat::apFrameWakeGeneratingBoats[v9];
  }
  while ( v4 );
  return v8 != 0;
}


// ============================================================

// Address: 0x56d034
// Original: _ZN5CBoat22IsVertexAffectedByWakeE7CVectorPS_sb
// Demangled: CBoat::IsVertexAffectedByWake(CVector,CBoat*,short,bool)
int __fastcall CBoat::IsVertexAffectedByWake(float a1, float a2, int a3, int a4, int a5, int a6)
{
  float v6; // s0
  int v7; // r2
  int v9; // r0
  float v10; // s10
  float v11; // s4
  float v12; // s8
  __int16 v13; // r4
  float32x2_t v14; // d0
  float v15; // s5
  float v16; // s3
  float32x2_t v17; // d2
  int v18; // r5
  int v19; // r6
  __int16 v20; // r0
  bool v21; // cc

  if ( a6 == 1 )
  {
    word_A02630[a5] = 0;
    word_A02638[a5] = 8;
  }
  else if ( word_A02630[a5] > 0 )
  {
    v6 = 0.0;
    return LODWORD(v6);
  }
  v7 = *(unsigned __int16 *)(a4 + 1624);
  v6 = 0.0;
  if ( *(_WORD *)(a4 + 1624) )
  {
    v9 = 0;
    v10 = fShapeLength;
    v11 = *(float *)&CBoat::WAKE_LIFETIME;
    v12 = fShapeTime;
    v13 = 0;
    while ( 1 )
    {
      v14.n64_f32[1] = v11 - *(float *)(a4 + 4 * v9 + 1884);
      v15 = (float)(v10 * (float)v13) + (float)(v12 * v14.n64_f32[1]);
      v16 = (float)((float)(*(float *)(a4 + 8 * v9 + 1628) - a1) * (float)(*(float *)(a4 + 8 * v9 + 1628) - a1))
          + (float)((float)(*(float *)(a4 + 8 * v9 + 1632) - a2) * (float)(*(float *)(a4 + 8 * v9 + 1632) - a2));
      v17.n64_f32[1] = v15 * v15;
      if ( v16 < v17.n64_f32[1] )
      {
        word_A02638[a5] = 0;
        v17.n64_u32[0] = 1.0;
        v14.n64_f32[0] = (float)(sqrtf(v16 / v17.n64_f32[1]) * fRangeMult) + (float)(fTimeMult * v14.n64_f32[1]);
        v6 = 1.0 - vmin_f32(v14, v17).n64_f32[0];
        return LODWORD(v6);
      }
      if ( (float)(v16 - v17.n64_f32[1]) > 20.0 )
        break;
      if ( (float)(v16 - v17.n64_f32[1]) > 10.0 )
      {
        v18 = word_A02638[a5];
        v19 = 0;
        v20 = 2;
        v21 = v18 <= 2;
        goto LABEL_12;
      }
LABEL_17:
      v9 = ++v13;
      if ( v13 >= v7 )
        return LODWORD(v6);
    }
    v18 = word_A02638[a5];
    v19 = 0;
    v20 = 3;
    v21 = v18 <= 3;
LABEL_12:
    if ( !v21 )
      v19 = 1;
    if ( v19 )
      LOWORD(v18) = v20;
    word_A02638[a5] = v18;
    goto LABEL_17;
  }
  return LODWORD(v6);
}


// ============================================================

// Address: 0x56d1dc
// Original: _ZN5CBoat28CheckForSkippingCalculationsEv
// Demangled: CBoat::CheckForSkippingCalculations(void)
__int16 *__fastcall CBoat::CheckForSkippingCalculations(CBoat *this)
{
  __int16 v1; // r0
  __int16 v2; // r0
  __int16 v3; // r0
  __int16 v4; // r0
  __int16 *result; // r0

  v1 = word_A02638[0];
  if ( (unsigned __int16)(word_A02638[0] - 1) > 6u )
  {
    if ( word_A02630[0] < 1 )
      goto LABEL_8;
    v1 = word_A02630[0] - 1;
  }
  else if ( word_A02630[0] > word_A02638[0] )
  {
    v1 = word_A02630[0] - 1;
  }
  word_A02630[0] = v1;
LABEL_8:
  v2 = word_A0263A;
  word_A02638[0] = 8;
  if ( (unsigned __int16)(word_A0263A - 1) >= 7u )
  {
    if ( word_A02632 < 1 )
      goto LABEL_15;
    v2 = word_A02632 - 1;
  }
  else if ( word_A02632 > word_A0263A )
  {
    v2 = word_A02632 - 1;
  }
  word_A02632 = v2;
LABEL_15:
  v3 = word_A0263C;
  word_A0263A = 8;
  if ( (unsigned __int16)(word_A0263C - 1) >= 7u )
  {
    if ( word_A02634 < 1 )
      goto LABEL_22;
    v3 = word_A02634 - 1;
  }
  else if ( word_A02634 > word_A0263C )
  {
    v3 = word_A02634 - 1;
  }
  word_A02634 = v3;
LABEL_22:
  v4 = word_A0263E;
  word_A0263C = 8;
  if ( (unsigned __int16)(word_A0263E - 1) < 7u )
  {
    if ( word_A02636 > word_A0263E )
      v4 = word_A02636 - 1;
    goto LABEL_28;
  }
  if ( word_A02636 >= 1 )
  {
    v4 = word_A02636 - 1;
LABEL_28:
    word_A02636 = v4;
  }
  result = word_A02638;
  word_A0263E = 8;
  return result;
}


// ============================================================

// Address: 0x56d2ee
// Original: _ZN5CBoat15ProcessOpenDoorEP4CPedjjjf
// Demangled: CBoat::ProcessOpenDoor(CPed *,uint,uint,uint,float)
void __fastcall CBoat::ProcessOpenDoor(
        CBoat *this,
        CPed *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        float a6)
{
  ;
}


// ============================================================


// Address: 0x18d23c
// Original: j__ZN7CClouds23VolumetricClouds_CreateEP7CVector
// Demangled: CClouds::VolumetricClouds_Create(CVector *)
// attributes: thunk
int __fastcall CClouds::VolumetricClouds_Create(CClouds *this, CVector *a2)
{
  return _ZN7CClouds23VolumetricClouds_CreateEP7CVector(this, a2);
}


// ============================================================

// Address: 0x18fbc8
// Original: j__ZN7CClouds6UpdateEv
// Demangled: CClouds::Update(void)
// attributes: thunk
int __fastcall CClouds::Update(CClouds *this)
{
  return _ZN7CClouds6UpdateEv(this);
}


// ============================================================

// Address: 0x191204
// Original: j__ZN7CClouds14RenderSkyPolysEv
// Demangled: CClouds::RenderSkyPolys(void)
// attributes: thunk
int __fastcall CClouds::RenderSkyPolys(CClouds *this)
{
  return _ZN7CClouds14RenderSkyPolysEv(this);
}


// ============================================================

// Address: 0x191ae0
// Original: j__ZN7CClouds4InitEv
// Demangled: CClouds::Init(void)
// attributes: thunk
int __fastcall CClouds::Init(CClouds *this)
{
  return _ZN7CClouds4InitEv(this);
}


// ============================================================

// Address: 0x1932b0
// Original: j__ZN7CClouds20VolumetricCloudsInitEv
// Demangled: CClouds::VolumetricCloudsInit(void)
// attributes: thunk
int __fastcall CClouds::VolumetricCloudsInit(CClouds *this)
{
  return _ZN7CClouds20VolumetricCloudsInitEv(this);
}


// ============================================================

// Address: 0x193970
// Original: j__ZN7CClouds15SetUpOneSkyPolyE7CVectorS0_S0_S0_hhhhhh
// Demangled: CClouds::SetUpOneSkyPoly(CVector,CVector,CVector,CVector,uchar,uchar,uchar,uchar,uchar,uchar)
// attributes: thunk
int CClouds::SetUpOneSkyPoly()
{
  return _ZN7CClouds15SetUpOneSkyPolyE7CVectorS0_S0_S0_hhhhhh();
}


// ============================================================

// Address: 0x19795c
// Original: j__ZN7CClouds22RenderBottomFromHeightEv
// Demangled: CClouds::RenderBottomFromHeight(void)
// attributes: thunk
int __fastcall CClouds::RenderBottomFromHeight(CClouds *this)
{
  return _ZN7CClouds22RenderBottomFromHeightEv(this);
}


// ============================================================

// Address: 0x198680
// Original: j__ZN7CClouds6RenderEv
// Demangled: CClouds::Render(void)
// attributes: thunk
int __fastcall CClouds::Render(CClouds *this)
{
  return _ZN7CClouds6RenderEv(this);
}


// ============================================================

// Address: 0x1a09c4
// Original: j__ZN7CClouds8ShutdownEv
// Demangled: CClouds::Shutdown(void)
// attributes: thunk
int __fastcall CClouds::Shutdown(CClouds *this)
{
  return _ZN7CClouds8ShutdownEv(this);
}


// ============================================================

// Address: 0x1a1000
// Original: j__ZN7CClouds16MovingFog_CreateEP7CVector
// Demangled: CClouds::MovingFog_Create(CVector *)
// attributes: thunk
int __fastcall CClouds::MovingFog_Create(CClouds *this, CVector *a2)
{
  return _ZN7CClouds16MovingFog_CreateEP7CVector(this, a2);
}


// ============================================================

// Address: 0x59e660
// Original: _ZN7CClouds4InitEv
// Demangled: CClouds::Init(void)
_QWORD *__fastcall CClouds::Init(CClouds *this)
{
  const char *v1; // r1
  CTxdStore *TxdSlot; // r0
  const char *v3; // r2
  _QWORD *result; // r0

  CTxdStore::PushCurrentTxd(this);
  TxdSlot = (CTxdStore *)CTxdStore::FindTxdSlot((CTxdStore *)"particle", v1);
  CTxdStore::SetCurrentTxd(TxdSlot, 0, v3);
  gpCloudTex = RwTextureRead("cloud1", 0);
  dword_A23DEC = RwTextureRead("cloudmasked", 0);
  gpMoonMask = RwTextureRead("lunar", "lunarm");
  dword_A25340 = RwTextureRead("cloudhigh", "cloudhighm");
  CTxdStore::PopCurrentTxd((CTxdStore *)dword_A25340);
  CClouds::CloudRotation = 0;
  CClouds::VolumetricCloudsInit((CClouds *)&CClouds::CloudRotation);
  unk_A25AB8 = 0x100000000LL;
  unk_A25AC0 = 2LL;
  qword_A254E0[2] = 0LL;
  qword_A254E0[3] = 0LL;
  dword_A25AC8 = 2;
  dword_A25ACC = 3;
  dword_A259B4 = 1031127695;
  dword_A259B8 = 1031127695;
  dword_A259BC = 0;
  word_A25500 = 0;
  CClouds::ms_mf = 0LL;
  unk_A254D8 = 0LL;
  result = qword_A254E0;
  qword_A254E0[0] = 0LL;
  qword_A254E0[1] = 0LL;
  return result;
}


// ============================================================

// Address: 0x59e780
// Original: _ZN7CClouds20VolumetricCloudsInitEv
// Demangled: CClouds::VolumetricCloudsInit(void)
void __fastcall CClouds::VolumetricCloudsInit(CClouds *this)
{
  dword_A25348 = 1065353216;
  dword_A25344 = 0;
  dword_A253B0 = 0;
  dword_A25368 = -1090519040;
  dword_A253F8 = 1056964608;
  dword_A25440 = 0;
  dword_A25488 = 0;
  dword_A2536C = 1056964608;
  dword_A253B4 = 0;
  dword_A253FC = 1056964608;
  dword_A25444 = 1065353216;
  dword_A2548C = 0;
  dword_A25370 = -1090519040;
  dword_A253B8 = 0;
  dword_A25400 = -1090519040;
  dword_A25490 = 1065353216;
  dword_A25374 = 1056964608;
  dword_A253BC = 0;
  dword_A25404 = 1056964608;
  dword_A2534C = 0;
  dword_A25378 = 1056964608;
  dword_A25494 = 0;
  dword_A253C0 = 0;
  dword_A25408 = -1090519040;
  dword_A25498 = 1065353216;
  dword_A2537C = -1090519040;
  dword_A253C4 = 0;
  dword_A2540C = -1090519040;
  dword_A2549C = 1065353216;
  dword_A25354 = 0;
  dword_A25350 = 0;
  dword_A25358 = 1065353216;
  dword_A25380 = -1090519040;
  dword_A253C8 = 1056964608;
  dword_A25410 = 0;
  dword_A25458 = 0;
  dword_A254A0 = 0;
  dword_A25384 = 1056964608;
  dword_A253CC = 1056964608;
  dword_A25414 = 0;
  dword_A2545C = 1065353216;
  dword_A254A4 = 0;
  dword_A25388 = -1090519040;
  dword_A253D0 = -1090519040;
  dword_A25460 = 0;
  dword_A254A8 = 1065353216;
  dword_A2538C = 1056964608;
  dword_A253D4 = 1056964608;
  unk_A25448 = 0x3F80000000000000LL;
  unk_A25450 = 1065353216LL;
  dword_A254AC = 0;
  dword_A25464 = 1065353216;
  dword_A25390 = 1056964608;
  dword_A253D8 = -1090519040;
  dword_A25468 = 1065353216;
  dword_A254B0 = 1065353216;
  dword_A25394 = -1090519040;
  dword_A253DC = -1090519040;
  dword_A2546C = 0;
  dword_A254B4 = 1065353216;
  dword_A25360 = 0;
  dword_A2535C = 1065353216;
  dword_A25364 = 0;
  dword_A25398 = 0;
  dword_A253E0 = -1090519040;
  dword_A25428 = 1056964608;
  dword_A25470 = 0;
  dword_A254B8 = 0;
  dword_A2539C = 0;
  dword_A253E4 = 1056964608;
  dword_A2542C = 1056964608;
  dword_A25474 = 1065353216;
  dword_A254BC = 0;
  dword_A253A0 = 0;
  dword_A25430 = -1090519040;
  dword_A25478 = 0;
  dword_A254C0 = 1065353216;
  dword_A253A4 = 0;
  dword_A25434 = 1056964608;
  unk_A25418 = 0LL;
  unk_A25420 = 0LL;
  dword_A254C4 = 0;
  dword_A2547C = 1065353216;
  dword_A253A8 = 0;
  dword_A25438 = -1090519040;
  dword_A25480 = 1065353216;
  dword_A254C8 = 1065353216;
  dword_A253AC = 0;
  dword_A2543C = -1090519040;
  dword_A25484 = 0;
  dword_A254CC = 1065353216;
  unk_A253E8 = 0x3F000000BF000000LL;
  unk_A253F0 = 0xBF0000003F000000LL;
  memset(&CClouds::ms_vc, 0, 0x168u);
}


// ============================================================

// Address: 0x59ea30
// Original: _ZN7CClouds13MovingFogInitEv
// Demangled: CClouds::MovingFogInit(void)
_QWORD *__fastcall CClouds::MovingFogInit(CClouds *this)
{
  _QWORD *result; // r0

  dword_A25AC8 = 2;
  dword_A25ACC = 3;
  dword_A259B4 = 1031127695;
  dword_A259B8 = 1031127695;
  dword_A259BC = 0;
  word_A25500 = 0;
  unk_A25AB8 = 0x100000000LL;
  unk_A25AC0 = 2LL;
  qword_A254E0[2] = 0LL;
  qword_A254E0[3] = 0LL;
  CClouds::ms_mf = 0LL;
  unk_A254D8 = 0LL;
  result = qword_A254E0;
  qword_A254E0[0] = 0LL;
  qword_A254E0[1] = 0LL;
  return result;
}


// ============================================================

// Address: 0x59ea94
// Original: _ZN7CClouds8ShutdownEv
// Demangled: CClouds::Shutdown(void)
int __fastcall CClouds::Shutdown(CClouds *this)
{
  int result; // r0

  RwTextureDestroy(gpCloudTex);
  gpCloudTex = 0;
  RwTextureDestroy(dword_A23DEC);
  dword_A23DEC = 0;
  result = RwTextureDestroy(dword_A25340);
  dword_A25340 = 0;
  return result;
}


// ============================================================

// Address: 0x59ead8
// Original: _ZN7CClouds6UpdateEv
// Demangled: CClouds::Update(void)
unsigned int *__fastcall CClouds::Update(CClouds *this)
{
  float v1; // s6
  unsigned int *result; // r0

  v1 = sinf(unk_9520F4 + -0.85);
  result = &CClouds::IndividualRotation;
  *(float *)&CClouds::CloudRotation = *(float *)&CClouds::CloudRotation
                                    + (float)((float)(v1 * 0.001) * *(float *)&CWeather::Wind);
  CClouds::IndividualRotation = (unsigned int)(float)((float)((float)((float)((float)(*(float *)&CWeather::Wind
                                                                                    * *(float *)&CTimer::ms_fTimeStep)
                                                                            * 0.5)
                                                                    + 0.3)
                                                            * 60.0)
                                                    + (float)CClouds::IndividualRotation);
  return result;
}


// ============================================================

// Address: 0x59eb88
// Original: _ZN7CClouds6RenderEv
// Demangled: CClouds::Render(void)
int __fastcall CClouds::Render(CClouds *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d10
  float32x2_t v4; // d11
  float32x2_t v5; // d12
  int result; // r0
  CSprite *v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // s20
  float *v11; // r2
  float v12; // s4
  float v13; // s6
  unsigned int v14; // r10
  float v15; // s0
  int v16; // r4
  float v17; // s0
  int v18; // r11
  float v19; // s0
  float *v20; // r2
  float v21; // s6
  float v22; // s4
  float v23; // s2
  float v24; // s0
  char v25; // r0
  float *v26; // r2
  float v27; // s6
  float v28; // s2
  char v29; // r4
  CSprite *v30; // r0
  unsigned int v31; // r8
  unsigned int v32; // r5
  unsigned int v33; // r4
  float v34; // s0
  int v35; // r6
  float v36; // s0
  float v37; // s0
  int v38; // r5
  float v39; // s4
  float v40; // s2
  __int64 *v41; // r2
  float v42; // s0
  __int64 v43; // r0
  CSprite *v44; // r0
  int i; // r8
  float *v46; // r1
  float v47; // s4
  float v48; // s6
  CSprite *v49; // r0
  unsigned int v50; // r5
  unsigned int v51; // r4
  float *v52; // r2
  float v53; // s16
  float v54; // s18
  float v55; // s20
  float v56; // s0
  float v57; // s4
  float v58; // s6
  float v59; // s2
  unsigned __int8 v60; // [sp+1Ch] [bp-ACh]
  unsigned __int8 v61; // [sp+20h] [bp-A8h]
  float v62; // [sp+2Ch] [bp-9Ch]
  float v63; // [sp+2Ch] [bp-9Ch]
  float v64; // [sp+2Ch] [bp-9Ch]
  float v65; // [sp+30h] [bp-98h]
  unsigned __int8 v66[4]; // [sp+34h] [bp-94h]
  unsigned __int8 v67[4]; // [sp+38h] [bp-90h]
  float v68; // [sp+3Ch] [bp-8Ch] BYREF
  float v69; // [sp+40h] [bp-88h]
  float v70; // [sp+44h] [bp-84h]
  float v71; // [sp+48h] [bp-80h] BYREF
  float v72; // [sp+4Ch] [bp-7Ch]
  float v73; // [sp+50h] [bp-78h]
  float v74; // [sp+54h] [bp-74h] BYREF
  float v75; // [sp+58h] [bp-70h] BYREF
  CSprite *v76; // [sp+5Ch] [bp-6Ch] BYREF
  float v77; // [sp+60h] [bp-68h]
  float v78; // [sp+64h] [bp-64h]

  result = CGame::CanSeeOutSideFromCurrArea(this);
  if ( result != 1 )
    return result;
  CCoronas::SunBlockedByClouds = 0;
  RwRenderStateSet(8, 0);
  RwRenderStateSet(6, 0);
  RwRenderStateSet(12, 1);
  RwRenderStateSet(10, 2);
  v7 = (CSprite *)RwRenderStateSet(11, 2);
  CSprite::InitSpriteBuffer(v7);
  v8 = (unsigned __int8)CClock::ms_nGameClockHours;
  v9 = (int)fabsf(
              (float)((float)((float)(unsigned __int16)CClock::ms_nGameClockSeconds / 60.0)
                    + (float)((unsigned __int8)CClock::ms_nGameClockMinutes
                            + 60 * (unsigned __int8)CClock::ms_nGameClockHours))
            + -220.0);
  if ( v9 <= 219 )
  {
    v1.n64_u32[0] = CWeather::Foggyness;
    v2.n64_u32[0] = CWeather::CloudCoverage;
    v10 = (int)(float)((float)(1.0 - vmax_f32(v2, v1).n64_f32[0]) * (float)(220 - v9));
    if ( v10 >= 1 )
    {
      v73 = 15.0;
      v11 = (float *)(dword_951FBC + 48);
      if ( !dword_951FBC )
        v11 = (float *)&qword_951FAC;
      v12 = v11[1];
      v13 = v11[2];
      v71 = *v11 + 0.0;
      v72 = v12 + -100.0;
      v73 = v13 + 15.0;
      if ( CSprite::CalcScreenCoors((int)&v71, (int)&v76, (int)&v75, (int)&v74, 0, 1) == 1 )
      {
        v14 = (unsigned __int8)CClock::ms_nGameClockDays;
        RwRenderStateSet(1, 0);
        RwRenderStateSet(10, 5);
        RwRenderStateSet(11, 2);
        CSprite::RenderOneXLUSprite(
          v76,
          v77,
          *(float *)&CDraw::ms_fFarClipZ,
          v75
        * (float)((float)((float)(unsigned int)CCoronas::MoonSize + (float)(unsigned int)CCoronas::MoonSize) + 4.0),
          v74
        * (float)((float)((float)(unsigned int)CCoronas::MoonSize + (float)(unsigned int)CCoronas::MoonSize) + 4.0),
          0.0,
          0,
          0,
          0xFFu,
          1.0 / *(float *)&CDraw::ms_fFarClipZ,
          COERCE_FLOAT(255),
          0,
          0,
          0.0,
          0.0,
          v62);
        RwRenderStateSet(1, *(_DWORD *)gpMoonMask);
        RwRenderStateSet(10, 5);
        RwRenderStateSet(11, 2);
        v15 = (float)((float)(unsigned int)CCoronas::MoonSize + (float)(unsigned int)CCoronas::MoonSize) + 4.0;
        CSprite::RenderOneXLUSprite(
          COERCE_CSPRITE_(
            *(float *)&v76
          + (float)((float)((float)((float)v14 / 31.0) + -0.5)
                  * (float)((float)((float)(v75 * v15) * 2.7) + (float)((float)(v75 * v15) * 2.7)))),
          v77 + (float)((float)(v74 * v15) * 0.7),
          *(float *)&CDraw::ms_fFarClipZ,
          v75 * (float)(v15 * 1.7),
          v74 * (float)(v15 * 1.7),
          0.0,
          0,
          0,
          0,
          1.0 / *(float *)&CDraw::ms_fFarClipZ,
          COERCE_FLOAT(255),
          0,
          0,
          0.0,
          0.0,
          v63);
        RwRenderStateSet(10, 7);
        RwRenderStateSet(11, 2);
        RwRenderStateSet(8, 0);
        RwRenderStateSet(1, *(_DWORD *)dword_A25B10);
        CSprite::RenderOneXLUSprite(
          v76,
          v77,
          *(float *)&CDraw::ms_fFarClipZ,
          v75
        * (float)((float)((float)(unsigned int)CCoronas::MoonSize + (float)(unsigned int)CCoronas::MoonSize) + 4.0),
          v74
        * (float)((float)((float)(unsigned int)CCoronas::MoonSize + (float)(unsigned int)CCoronas::MoonSize) + 4.0),
          COERCE_FLOAT((unsigned __int8)v10),
          v10,
          (unsigned int)(float)((float)v10 * 0.85),
          0xFFu,
          1.0 / *(float *)&CDraw::ms_fFarClipZ,
          COERCE_FLOAT(255),
          0,
          0,
          0.0,
          0.0,
          v64);
        RwRenderStateSet(10, 2);
        RwRenderStateSet(11, 2);
      }
      v8 = (unsigned __int8)CClock::ms_nGameClockHours;
    }
  }
  if ( (unsigned __int8)(v8 - 6) >= 0x10u )
  {
    v16 = 255;
    if ( (unsigned __int8)(v8 - 5) > 0x11u )
      goto LABEL_15;
    if ( v8 == 22 )
    {
      v16 = 255 * (unsigned int)(unsigned __int8)CClock::ms_nGameClockMinutes / 0x3C;
      if ( !v16 )
        goto LABEL_28;
LABEL_15:
      v3.n64_u32[0] = CWeather::Foggyness;
      v4.n64_u32[0] = CWeather::CloudCoverage;
      RwRenderStateSet(1, *(_DWORD *)gpCoronaTexture);
      v17 = vmax_f32(v4, v3).n64_f32[0];
      v3.n64_u32[1] = -1133133169;
      v18 = 0;
      v3.n64_f32[0] = (float)(int)(float)((float)(1.0 - v17) * (float)v16);
      do
      {
        v72 = 0.0;
        v71 = 100.0;
        v19 = 100.0;
        v73 = 10.0;
        if ( v18 >= 9 )
        {
          v71 = -100.0;
          v19 = -100.0;
        }
        v20 = (float *)(dword_951FBC + 48);
        if ( !dword_951FBC )
          v20 = (float *)&qword_951FAC;
        v21 = v20[2];
        v22 = v20[1] + 0.0;
        v23 = *(float *)&dword_59F7C0[v18 % 9];
        v71 = *v20 + v19;
        v24 = v22 + (float)(*(float *)&dword_59F7E4[v18 % 9] * -90.0);
        v73 = (float)(v21 + 10.0) + (float)(v23 * 80.0);
        v72 = v24;
        if ( CSprite::CalcScreenCoors((int)&v71, (int)&v76, (int)&v75, (int)&v74, 0, 1) == 1 )
        {
          v4.n64_f32[1] = v78;
          v5.n64_u32[1] = dword_59F808[v18 % 9];
          v25 = rand();
          CSprite::RenderBufferedOneXLUSprite(
            v76,
            v77,
            v78,
            (float)(v5.n64_f32[1] * 0.8) * v75,
            (float)(v5.n64_f32[1] * 0.8) * v74,
            COERCE_FLOAT((unsigned __int8)(int)(float)((float)((float)((float)(v25 & 0x1F) * -0.015) + 1.0)
                                                     * v3.n64_f32[0])),
            (int)(float)((float)((float)((float)(v25 & 0x1F) * -0.015) + 1.0) * v3.n64_f32[0]),
            (int)(float)((float)((float)((float)(v25 & 0x1F) * -0.015) + 1.0) * v3.n64_f32[0]),
            0xFFu,
            1.0 / v4.n64_f32[1],
            COERCE_FLOAT(255),
            v60);
        }
        ++v18;
      }
      while ( v18 != 11 );
      v73 = 10.0;
      v26 = (float *)(dword_951FBC + 48);
      if ( !dword_951FBC )
        v26 = (float *)&qword_951FAC;
      v27 = v26[2];
      v28 = v26[1] + -90.0;
      v71 = *v26 + 100.0;
      v72 = v28;
      v73 = (float)(v27 + 10.0) + 0.0;
      v29 = rand();
      v30 = (CSprite *)CSprite::CalcScreenCoors((int)&v71, (int)&v76, (int)&v75, (int)&v74, 0, 1);
      if ( v30 )
        v30 = (CSprite *)CSprite::RenderOneXLUSprite(
                           v76,
                           v77,
                           v78,
                           v75 * 5.0,
                           v74 * 5.0,
                           COERCE_FLOAT((unsigned __int8)(int)(float)((float)((float)((float)(v29 & 0x7F) * 0.0015625)
                                                                            + 0.5)
                                                                    * v3.n64_f32[0])),
                           (int)(float)((float)((float)((float)(v29 & 0x7F) * 0.0015625) + 0.5) * v3.n64_f32[0]),
                           (int)(float)((float)((float)((float)(v29 & 0x7F) * 0.0015625) + 0.5) * v3.n64_f32[0]),
                           0xFFu,
                           1.0 / v78,
                           COERCE_FLOAT(255),
                           0,
                           0,
                           0.0,
                           0.0,
                           v62);
      CSprite::FlushSpriteBuffer(v30);
      goto LABEL_28;
    }
    v16 = 255 * (60 - (unsigned __int8)CClock::ms_nGameClockMinutes) / 60;
    if ( v16 )
      goto LABEL_15;
  }
LABEL_28:
  v31 = (unsigned __int16)word_9665A8;
  v32 = (unsigned __int16)word_9665AA;
  v33 = (unsigned __int16)word_9665AC;
  v3.n64_u32[0] = CWeather::ExtraSunnyness;
  v4.n64_u32[0] = CWeather::CloudCoverage;
  v5.n64_u32[0] = CWeather::Foggyness;
  RwRenderStateSet(1, *(_DWORD *)gpCloudTex);
  v34 = 1.0 - vmax_f32(v3, vmax_f32(v5, v4)).n64_f32[0];
  v35 = dword_951FBC;
  *(_DWORD *)v67 = (unsigned int)(float)(v34 * (float)v33);
  *(_DWORD *)v66 = (unsigned int)(float)(v34 * (float)v32);
  LODWORD(v65) = (unsigned int)(float)(v34 * (float)v31);
  if ( dword_951FBC )
  {
    v36 = sqrtf(
            (float)(*(float *)dword_951FBC * *(float *)dword_951FBC)
          + (float)(*(float *)(dword_951FBC + 4) * *(float *)(dword_951FBC + 4)));
    if ( *(float *)(dword_951FBC + 40) < 0.0 )
      v36 = -v36;
    v37 = atan2f(*(float *)(dword_951FBC + 8), v36);
  }
  else
  {
    v37 = 0.0;
  }
  v38 = 0;
  CClouds::ms_cameraRoll = v37;
  while ( 1 )
  {
    v39 = *(float *)((char *)&unk_61F2FC + v38) * 60.0;
    v40 = *(float *)((char *)&unk_61F29C + v38) * 800.0;
    v41 = (__int64 *)(v35 + 48);
    v42 = *(float *)((char *)&unk_61F2CC + v38) * 800.0;
    if ( !v35 )
      v41 = &qword_951FAC;
    v43 = *v41;
    v72 = *((float *)v41 + 1);
    v71 = *(float *)&v43 + v40;
    v73 = v39 + 40.0;
    v72 = v72 + v42;
    v44 = (CSprite *)CSprite::CalcScreenCoors((int)&v71, (int)&v76, (int)&v75, (int)&v74, 0, 1);
    if ( v44 == (CSprite *)((char *)&stderr + 1) )
      v44 = (CSprite *)CSprite::RenderBufferedOneXLUSprite_Rotate_Dimension(
                         v76,
                         v77,
                         v78,
                         v75 * 320.0,
                         v74 * 40.0,
                         v65,
                         v66[0],
                         v67[0],
                         0xFFu,
                         1.0 / v78,
                         CClouds::ms_cameraRoll,
                         COERCE_FLOAT(255),
                         v61);
    if ( v38 == 44 )
      break;
    v35 = dword_951FBC;
    v38 += 4;
  }
  CSprite::FlushSpriteBuffer(v44);
  if ( CWeather::Rainbow != 0.0 )
  {
    RwRenderStateSet(1, *(_DWORD *)gpCoronaTexture);
    for ( i = 0; i != 6; ++i )
    {
      v73 = 5.0;
      v46 = (float *)(dword_951FBC + 48);
      if ( !dword_951FBC )
        v46 = (float *)&qword_951FAC;
      v47 = v46[1];
      v48 = v46[2];
      v71 = *v46 + (float)((float)i * 1.5);
      v72 = v47 + 100.0;
      v73 = v48 + 5.0;
      v49 = (CSprite *)CSprite::CalcScreenCoors((int)&v71, (int)&v76, (int)&v75, (int)&v74, 0, 1);
      if ( v49 == (CSprite *)((char *)&stderr + 1) )
        v49 = (CSprite *)CSprite::RenderBufferedOneXLUSprite(
                           v76,
                           v77,
                           v78,
                           v75 + v75,
                           v74 * 50.0,
                           COERCE_FLOAT((unsigned int)(float)(CWeather::Rainbow
                                                            * (float)*((unsigned __int8 *)dword_59F868 + i))),
                           (unsigned int)(float)(CWeather::Rainbow * (float)*((unsigned __int8 *)dword_59F878 + i)),
                           (unsigned int)(float)(CWeather::Rainbow * (float)*((unsigned __int8 *)dword_59F870 + i)),
                           0xFFu,
                           1.0 / v78,
                           COERCE_FLOAT(255),
                           v60);
    }
    CSprite::FlushSpriteBuffer(v49);
  }
  RwRenderStateSet(10, 5);
  RwRenderStateSet(11, 6);
  result = (unsigned __int8)CClock::ms_nGameClockHours;
  if ( (unsigned __int8)CClock::ms_nGameClockHours <= 4u )
  {
    result = (unsigned __int16)CWeather::OldWeatherType;
    if ( (unsigned __int16)CWeather::OldWeatherType <= 0x11u )
    {
      result = 141381;
      if ( ((1 << CWeather::OldWeatherType) & 0x22845) != 0
        && (unsigned __int16)CWeather::NewWeatherType <= 0x11u
        && ((1 << CWeather::NewWeatherType) & 0x22845) != 0 )
      {
        result = CTimer::m_snTimeInMilliseconds;
        v50 = ((unsigned int)CTimer::m_snTimeInMilliseconds >> 13) & 0x3F;
        v51 = CTimer::m_snTimeInMilliseconds & 0x1FFF;
        if ( v51 >> 5 <= 0x18 )
        {
          v52 = (float *)(dword_951FBC + 48);
          if ( !dword_951FBC )
            v52 = (float *)&qword_951FAC;
          v53 = *v52;
          v54 = v52[1];
          v55 = v52[2];
          v73 = 1.0;
          v72 = (float)(((unsigned __int16)CTimer::m_snTimeInMilliseconds >> 13) - 4) * 0.1;
          v71 = (float)(int)(v50 % 7 - 3) * 0.1;
          CVector::Normalise((CVector *)&v71);
          v69 = (float)(int)(v50 % 0xA - 5);
          v68 = (float)(int)(v50 % 9 - 5);
          v70 = 0.1;
          CVector::Normalise((CVector *)&v68);
          v56 = (float)(int)(400 - v51) + (float)(int)(400 - v51);
          v57 = v53 + (float)(v68 * 1000.0);
          dword_A5A1F0 = -503316481;
          v58 = v54 + (float)(v69 * 1000.0);
          v59 = v55 + (float)(v70 * 1000.0);
          dword_A5A214 = 0xFFFFFF;
          *(float *)TempVertexBuffer = v57 + (float)(v56 * v71);
          *(float *)&dword_A5A1DC = v58 + (float)(v56 * v72);
          *(float *)&dword_A5A1E0 = v59 + (float)(v56 * v73);
          *(float *)&dword_A5A1FC = v57 + (float)((float)(v56 + 50.0) * v71);
          *(float *)&dword_A5A200 = v58 + (float)((float)(v56 + 50.0) * v72);
          *(float *)&dword_A5A204 = v59 + (float)((float)(v56 + 50.0) * v73);
          result = RwIm3DTransform();
          if ( result )
          {
            RwIm3DRenderIndexedPrimitive();
            return RwIm3DEnd();
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x59f8b4
// Original: _ZN7CClouds15SetUpOneSkyPolyE7CVectorS0_S0_S0_hhhhhh
// Demangled: CClouds::SetUpOneSkyPoly(CVector,CVector,CVector,CVector,uchar,uchar,uchar,uchar,uchar,uchar)
int __fastcall CClouds::SetUpOneSkyPoly(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18)
{
  __int16 v18; // r4
  int v19; // r5
  int *v20; // r0
  unsigned int v21; // r1
  unsigned int v22; // r1
  int v23; // r0
  _WORD *v24; // r1
  int result; // r0
  int v26; // r2

  v18 = TempBufferVerticesStored;
  v19 = 9 * TempBufferVerticesStored;
  TempVertexBuffer[9 * TempBufferVerticesStored] = a1;
  v20 = &TempVertexBuffer[v19];
  v20[1] = a2;
  v20[2] = a3;
  v20[11] = a6;
  v20[9] = a4;
  v20[10] = a5;
  v21 = a13 | (a14 << 8) | (a15 << 16) | 0xFF000000;
  v20[6] = v21;
  v20[15] = v21;
  v20[20] = a9;
  v20[19] = a8;
  v20[18] = a7;
  v20[7] = 0;
  v20[8] = 0;
  v22 = a16 | (a17 << 8) | (a18 << 16) | 0xFF000000;
  v20[16] = 0;
  v20[17] = 0;
  v20[24] = v22;
  v20[25] = 0;
  v20[26] = 0;
  v20[29] = a12;
  v20[28] = a11;
  v20[27] = a10;
  v20[33] = v22;
  v20[34] = 0;
  v20[35] = 0;
  v23 = TempBufferIndicesStored;
  v24 = (_WORD *)TempBufferRenderIndexList + TempBufferIndicesStored;
  *v24 = v18;
  result = v23 + 6;
  v24[1] = v18 + 2;
  v24[2] = v18 + 1;
  v24[3] = v18 + 1;
  v24[4] = v18 + 2;
  v26 = TempBufferVerticesStored;
  TempBufferIndicesStored = result;
  v24[5] = TempBufferVerticesStored + 3;
  TempBufferVerticesStored = v26 + 4;
  return result;
}


// ============================================================

// Address: 0x59f9a0
// Original: _ZN7CClouds14RenderSkyPolysEv
// Demangled: CClouds::RenderSkyPolys(void)
int __fastcall CClouds::RenderSkyPolys(CClouds *this)
{
  double v1; // d16
  float v2; // r4
  int PlayerPed; // r0
  int v4; // r11
  int v5; // r0
  int v6; // r1
  float v7; // s17
  int v8; // r6
  float v9; // s2
  _BOOL4 v10; // r5
  int v11; // r0
  bool v12; // zf
  double v14; // [sp+40h] [bp-70h] BYREF
  int v15; // [sp+48h] [bp-68h]

  if ( dword_951FBC )
  {
    v1 = *(double *)(dword_951FBC + 16);
    v15 = *(_DWORD *)(dword_951FBC + 24);
    v14 = v1;
  }
  else
  {
    v15 = 0;
    v2 = *(float *)&dword_951FB8;
    HIDWORD(v14) = cosf(*(float *)&dword_951FB8);
    LODWORD(v14) = COERCE_UNSIGNED_INT(sinf(v2)) ^ 0x80000000;
  }
  v15 = 0;
  CVector::Normalise((CVector *)&v14);
  RwRenderStateSet(1, 0);
  RwRenderStateSet(6, 0);
  RwRenderStateSet(8, 0);
  RwRenderStateSet(12, 0);
  RwRenderStateSet(10, 5);
  RwRenderStateSet(11, 6);
  RwRenderStateSet(14, 0);
  RwRenderStateSet(20, 1);
  TempBufferIndicesStored = 0;
  TempBufferVerticesStored = 0;
  PlayerPed = FindPlayerPed(-1);
  v4 = PlayerPed;
  if ( PlayerPed )
  {
    v5 = *(_DWORD *)(PlayerPed + 20);
    v6 = v5 + 48;
    if ( !v5 )
      v6 = v4 + 4;
    v7 = *(float *)(v6 + 8);
  }
  else
  {
    v7 = 0.0;
  }
  CClouds::SetUpOneSkyPoly();
  CClouds::SetUpOneSkyPoly();
  CClouds::SetUpOneSkyPoly();
  CClouds::SetUpOneSkyPoly();
  if ( v4 )
  {
    v8 = 1;
    if ( v7 <= 105.0 && v7 >= 0.0 )
    {
      v9 = *(float *)(dword_952880 + 132);
      v8 = (v9 < 300.0) | (CPedIntelligence::GetTaskSwim(*(CPedIntelligence **)(v4 + 1088)) != 0);
    }
    v10 = 0;
    if ( FindPlayerVehicle(-1, 0) )
      v10 = *(_DWORD *)(FindPlayerVehicle(-1, 0) + 1444) == 4 || *(_DWORD *)(FindPlayerVehicle(-1, 0) + 1444) == 3;
    if ( CPedIntelligence::GetTaskJetPack(*(CPedIntelligence **)(v4 + 1088)) )
      goto LABEL_25;
    v11 = *(_DWORD *)(v4 + 28 * *(char *)(v4 + 1820) + 1444) == 46;
  }
  else
  {
    v8 = 0;
    v10 = 0;
    v11 = 0;
  }
  v12 = v8 == 0;
  if ( !v8 )
    v12 = !v10;
  if ( !v12 || v11 == 1 )
LABEL_25:
    v11 = CClouds::SetUpOneSkyPoly();
  return CBrightLights::RenderOutGeometryBuffer((CBrightLights *)v11);
}


// ============================================================

// Address: 0x5a01a8
// Original: _ZN7CClouds22RenderBottomFromHeightEv
// Demangled: CClouds::RenderBottomFromHeight(void)
int __fastcall CClouds::RenderBottomFromHeight(CClouds *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d2
  float32x2_t v3; // d4
  int32x2_t v4; // d11
  float32x2_t v5; // d13
  float32x2_t v6; // d14
  int result; // r0
  __int64 *v8; // r5
  float32x2_t v9; // d2
  float32x2_t v10; // d0
  int v11; // s22
  int v12; // s24
  float32x2_t v13; // d0
  int v14; // s26
  float v15; // s18
  float v16; // s0
  float v17; // s20
  float v18; // s18
  float v19; // s0
  int v20; // r5
  int v21; // r0
  float v22; // s2
  int v24; // r12
  int v25; // lr
  int v33; // r1
  float32x2_t *v34; // r6
  float32x2_t v35; // d12
  unsigned __int32 *v36; // r10
  float32x2_t v37; // d19
  float32x2_t v38; // d11
  float v39; // s11
  float32x2_t v40; // d18
  float v41; // s13
  int v42; // r6
  float v43; // s13
  float32x2_t v44; // d18
  float32x2_t v47; // d12
  float v48; // s24
  float v49; // s13
  float v50; // s15
  _WORD *v51; // r0
  float v52; // s13
  float v53; // s15
  int *v54; // r1
  float v55; // s26
  float v56; // s13
  int v57; // r0
  int v58; // r0
  float *inited; // r0
  float v60; // s20
  int i; // r4
  float v62; // s0
  float v63; // s2
  float v64; // s4
  float v65; // s6
  int v66; // s2
  int v67; // r10
  float32x2_t v68; // d0
  float v69; // s0
  unsigned __int8 v70; // [sp+1Ch] [bp-A4h]
  int v71; // [sp+20h] [bp-A0h]
  unsigned int v72; // [sp+24h] [bp-9Ch]
  unsigned int v73; // [sp+28h] [bp-98h]
  unsigned int v74; // [sp+2Ch] [bp-94h]
  int v75; // [sp+34h] [bp-8Ch]
  int v76; // [sp+38h] [bp-88h]
  int v77; // [sp+3Ch] [bp-84h]
  float v78; // [sp+40h] [bp-80h] BYREF
  float v79; // [sp+44h] [bp-7Ch] BYREF
  CSprite *v80[2]; // [sp+48h] [bp-78h] BYREF
  float v81; // [sp+50h] [bp-70h]
  unsigned __int64 v82; // [sp+54h] [bp-6Ch] BYREF
  float v83; // [sp+5Ch] [bp-64h]

  v3.n64_u32[0] = 1132396544;
  result = (unsigned __int16)word_9665AE;
  v8 = (__int64 *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v8 = &qword_951FAC;
  v1.n64_f32[0] = (float)(unsigned __int16)word_9665B2 * 1.5;
  v2.n64_f32[0] = (float)(unsigned __int16)word_9665B0 * 1.5;
  v9.n64_u64[0] = vmin_f32(v2, v3).n64_u64[0];
  v10.n64_u64[0] = vmin_f32(v1, v3).n64_u64[0];
  v11 = (int)v10.n64_f32[0];
  v10.n64_f32[0] = (float)((float)(unsigned __int16)word_9665AE + (float)(unsigned __int16)word_9665AE) + 20.0;
  v12 = (int)v9.n64_f32[0];
  v13.n64_u64[0] = vmin_f32(v10, v3).n64_u64[0];
  v14 = (int)v13.n64_f32[0];
  v15 = *((float *)v8 + 2);
  if ( v15 >= -90.0 )
  {
    v73 = (3 * (unsigned int)(unsigned __int16)word_9665B0) >> 2;
    v72 = (3 * (unsigned int)(unsigned __int16)word_9665AE) >> 2;
    v74 = (3 * (unsigned int)(unsigned __int16)word_9665B2) >> 2;
    unk_A25AD0 = unk_A25AD0 + (float)((float)(*(float *)&CWeather::Wind * *(float *)&CTimer::ms_fTimeStep) * 0.25);
    RwRenderStateSet(8, 0);
    RwRenderStateSet(6, 1);
    RwRenderStateSet(12, 1);
    RwRenderStateSet(14, 0);
    RwRenderStateSet(10, 5);
    RwRenderStateSet(11, 6);
    RwRenderStateSet(1, *(_DWORD *)dword_A23DEC);
    v16 = v15 + -190.0;
    v17 = 190.0;
    v18 = 160.0;
    v19 = (float)(v16 + -10.0) * 0.3;
    v20 = (int)unk_9665E4;
    if ( v19 > 0.0 )
    {
      v18 = v19 + 160.0;
      v17 = v19 + 190.0;
    }
    v21 = 2 * v20 / 3;
    v77 = v21;
    if ( (unsigned int)(2 * v20 + 2) >= 5 )
    {
      v71 = (int)unk_9665E4;
      v22 = unk_A25AD0;
      v9.n64_f32[0] = (float)v21;
      TempBufferVerticesStored = 0;
      TempBufferIndicesStored = 0;
      v13.n64_u32[1] = -0.75;
      _R6 = v74 << 16;
      v9.n64_u32[1] = 1114636288;
      v24 = 0;
      v25 = 0;
      _R0 = v11 << 16;
      __asm { UXTB16.W        R0, R0 }
      v75 = _R0 | (unsigned __int8)v14 | ((unsigned __int8)v12 << 8);
      __asm { UXTB16.W        R6, R6 }
      v33 = 0;
      v76 = (unsigned __int8)v72 | ((unsigned __int8)v73 << 8) | _R6;
      do
      {
        v34 = (float32x2_t *)(dword_951FBC + 48);
        if ( !dword_951FBC )
          v34 = (float32x2_t *)&qword_951FAC;
        v35.n64_u32[0] = v34->n64_u32[0];
        v36 = &v34->n64_u32[1];
        v4.n64_f32[0] = v22 * (float)((float)(*(float *)((char *)&unk_61F32C + v24 + 24) * 0.5) + 1.0);
        v37.n64_u64[0] = vdup_lane_s32(v4, 0).n64_u64[0];
        v38.n64_u64[0] = v34->n64_u64[0];
        v39 = v18 + (float)((float)(v17 - v18) * *(float *)((char *)&unk_61F32C + v24 + 8));
        v40.n64_u64[0] = vsub_f32(
                           vadd_f32(
                             vmul_f32(*(float32x2_t *)((char *)&unk_61F32C + v24), (float32x2_t)0x4400000044000000LL),
                             v37),
                           (float32x2_t)v34->n64_u64[0]).n64_u64[0];
        v83 = v39;
        v41 = v34[1].n64_f32[0];
        v42 = 2 * v20 / 3;
        v43 = v39 - v41;
        v44.n64_u64[0] = vsub_f32(
                           v40,
                           vcvt_f32_s32((int32x2_t)(vcvt_s32_f32(v40).n64_u64[0] & 0xFFFFFE00FFFFFE00LL | 0x10000000100LL))).n64_u64[0];
        if ( v43 > 0.0 )
          v42 = (int)(float)((float)((float)(v43 / -250.0) + 1.0) * v9.n64_f32[0]);
        v4.n64_u64[0] = vadd_f32(v38, v44).n64_u64[0];
        if ( v42 > 0 )
        {
          v35.n64_u32[1] = *v36;
          _D18 = vsub_f32(v35, v4).n64_i64[0];
          __asm { VCLT.F32        D12, D18, #0.0 }
          v47.n64_u64[0] = vbsl_s64(_D12, vneg_f32((float32x2_t)_D18).n64_i64[0], _D18);
          v5.n64_u32[0] = v47.n64_u32[1];
          v48 = vmax_f32(v47, v5).n64_f32[0];
          if ( (float)(v48 * 0.0039062) <= 0.75
            || (v42 = (int)(float)((float)((float)((float)((float)(v48 * 0.0039062) + -0.75) * -4.0) + 1.0) * (float)v42),
                v42 >= 1) )
          {
            v49 = *(float *)((char *)&unk_61F32C + v24 + 12) * 100.0;
            v50 = *(float *)((char *)&unk_61F32C + v24 + 16) * 100.0;
            *((_WORD *)TempBufferRenderIndexList + v25) = v33 + 2;
            v51 = (_WORD *)TempBufferRenderIndexList + v25;
            v51[3] = v33 + 2;
            v51[4] = v33 + 3;
            v52 = v49 + 60.0;
            v51[1] = v33 + 1;
            v53 = v50 + 60.0;
            v51[2] = v33;
            v51[5] = v33 + 1;
            v54 = &TempVertexBuffer[9 * v33];
            v54[6] = v75 | (v42 << 24);
            v55 = v52 + v4.n64_f32[0];
            *((float *)v54 + 2) = v39;
            v56 = v4.n64_f32[0] - v52;
            v57 = v76 | (v42 << 24);
            v54[15] = v57;
            *((float *)v54 + 11) = v39;
            v54[24] = v57;
            v54[33] = v57;
            *((float *)v54 + 1) = v53 + v4.n64_f32[1];
            *((float *)v54 + 10) = v53 + (float)(v4.n64_f32[1] + 0.0);
            *((float *)v54 + 18) = v56;
            *((float *)v54 + 19) = v4.n64_f32[1] - v53;
            *((float *)v54 + 20) = v39;
            *((float *)v54 + 27) = v55;
            *((float *)v54 + 28) = (float)(v4.n64_f32[1] + 0.0) - v53;
            *((float *)v54 + 29) = v39;
            *(float *)v54 = v56 + 0.0;
            *((float *)v54 + 9) = v55 + 0.0;
            v54[7] = 0;
            v54[8] = 0;
            v54[16] = 0;
            v54[17] = 1065353216;
            v58 = TempBufferVerticesStored;
            v54[26] = 0;
            v54[25] = 1065353216;
            v54[34] = 1065353216;
            TempVertexBuffer[9 * v58 + 35] = 1065353216;
            v33 = v58 + 4;
            TempBufferVerticesStored = v58 + 4;
            v25 = TempBufferIndicesStored + 6;
            TempBufferIndicesStored += 6;
          }
        }
        v24 += 4;
      }
      while ( v24 != 64 );
      v82 = v4.n64_u64[0];
      if ( v25 && RwIm3DTransform() )
      {
        RwIm3DRenderIndexedPrimitive();
        RwIm3DEnd();
      }
      v20 = v71;
      v21 = (int)&TempBufferVerticesStored;
      TempBufferVerticesStored = 0;
      TempBufferIndicesStored = 0;
    }
    inited = (float *)CSprite::InitSpriteBuffer((CSprite *)v21);
    if ( v20 >= 2 )
    {
      v60 = v17 - v18;
      v6.n64_u32[0] = 1.0;
      for ( i = 0; i != 120; i += 4 )
      {
        v62 = unk_A25AD0 * 0.5;
        inited = (float *)(dword_951FBC + 48);
        if ( !dword_951FBC )
          inited = (float *)&qword_951FAC;
        v63 = v62 + *(float *)((char *)&unk_61F4E4 + i);
        v64 = *(float *)((char *)&unk_61F46C + i) + v62;
        v13.n64_f32[0] = *inited;
        v65 = *inited + (float)((float)(v64 - *inited) - (float)(int)((int)(float)(v64 - *inited) & 0xFFFFFF00 | 0x80));
        v9.n64_f32[0] = inited[1]
                      + (float)((float)(v63 - inited[1])
                              - (float)(int)((int)(float)(v63 - inited[1]) & 0xFFFFFF00 | 0x80));
        v83 = v18 + (float)(v60 * *(float *)((char *)&unk_61F32C + i));
        *(float *)&v82 = v65;
        *((float *)&v82 + 1) = v9.n64_f32[0];
        v66 = (int)(float)((float)((float)(fabsf(inited[2] - v83) / -250.0) + 1.0) * (float)v77);
        v67 = v66;
        if ( v66 >= 1 )
        {
          v13.n64_f32[0] = fabsf(v13.n64_f32[0] - v65);
          v9.n64_f32[0] = fabsf(inited[1] - v9.n64_f32[0]);
          v68.n64_u64[0] = vmax_f32(v13, v9).n64_u64[0];
          v68.n64_f32[0] = v68.n64_f32[0] * 0.0078125;
          v13.n64_u64[0] = vmin_f32(v68, v6).n64_u64[0];
          if ( v13.n64_f32[0] > 0.75 )
            v67 = (int)(float)((float)((float)((float)(v13.n64_f32[0] + -0.75) * -4.0) + 1.0) * (float)v66);
          if ( v13.n64_f32[0] > 0.05 )
          {
            if ( v13.n64_f32[0] < 0.1 )
              v67 = (int)(float)((float)((float)(v13.n64_f32[0] + -0.05) * 20.0) * (float)v67);
            inited = (float *)CSprite::CalcScreenCoors((int)&v82, (int)v80, (int)&v79, (int)&v78, 0, 1);
            if ( inited == (float *)((char *)&stderr + 1) )
            {
              v69 = (float)(*(float *)((char *)&unk_61F32C + i + 4) + 1.0) * 12.0;
              inited = (float *)CSprite::RenderBufferedOneXLUSprite(
                                  v80[0],
                                  *(float *)&v80[1],
                                  v81,
                                  v69 * v79,
                                  v69 * v78,
                                  COERCE_FLOAT((unsigned __int8)v72),
                                  v73,
                                  v74,
                                  0,
                                  1.0 / v81,
                                  COERCE_FLOAT((unsigned __int8)v67),
                                  v70);
            }
          }
        }
      }
    }
    CSprite::FlushSpriteBuffer((CSprite *)inited);
    RwRenderStateSet(1, 0);
    RwRenderStateSet(12, 0);
    RwRenderStateSet(8, 1);
    return RwRenderStateSet(6, 1);
  }
  return result;
}


// ============================================================

// Address: 0x5a0954
// Original: _ZN7CClouds33VolumetricClouds_GetFirstFreeSlotEv
// Demangled: CClouds::VolumetricClouds_GetFirstFreeSlot(void)
int __fastcall CClouds::VolumetricClouds_GetFirstFreeSlot(CClouds *this)
{
  int result; // r0

  if ( CClouds::m_VolumetricCloudsUsedNum < 1 )
    return -1;
  result = 0;
  while ( CClouds::ms_vc[result] )
  {
    if ( ++result >= CClouds::m_VolumetricCloudsUsedNum )
      return -1;
  }
  return result;
}


// ============================================================

// Address: 0x5a0984
// Original: _ZN7CClouds23VolumetricClouds_DeleteEi
// Demangled: CClouds::VolumetricClouds_Delete(int)
_BYTE *__fastcall CClouds::VolumetricClouds_Delete(int this, int a2)
{
  _BYTE *result; // r0

  if ( this <= 0 )
    this = 0;
  if ( this >= 179 )
    this = (int)&dword_B0 + 3;
  CClouds::ms_vc[this] = 0;
  result = &CClouds::ms_vc[this];
  *((_BYTE *)&dword_B4 + (_DWORD)result) = 0;
  return result;
}


// ============================================================

// Address: 0x5a09a8
// Original: _ZN7CClouds23VolumetricClouds_CreateEP7CVector
// Demangled: CClouds::VolumetricClouds_Create(CVector *)
int __fastcall CClouds::VolumetricClouds_Create(CClouds *this, CVector *a2)
{
  float v3; // s4
  float v4; // s2
  float v5; // s0
  float v6; // s18
  float v7; // s22
  int v8; // r8
  int *v9; // r3
  _BYTE *v10; // r2
  int v11; // r9
  float *v12; // r0
  float v13; // s24
  float v14; // s26
  float v15; // s19
  int v16; // r4
  float v17; // s17
  int v18; // r10
  float *v19; // r4
  unsigned __int16 v20; // r0
  bool v21; // cc
  int v22; // s0
  float v23; // s26
  int v24; // r4
  int v25; // r6
  float v26; // s20
  float v27; // s22
  float v28; // s28
  float *v29; // r2
  float v30; // s17
  float v31; // s19
  float v32; // s21
  float *v33; // r5
  int *v35; // [sp+0h] [bp-68h]
  _BYTE *v36; // [sp+4h] [bp-64h]

  v3 = (float)((float)((float)rand() * 4.6566e-10) * 4.0) + 1.0;
  v4 = v3 * 40.0;
  v5 = v3 * 100.0;
  v6 = v3 * 20.0;
  if ( this )
  {
    v7 = v5 - v6;
    v8 = 0;
    v9 = &CClouds::m_VolumetricCloudsUsedNum;
    v10 = CClouds::ms_vc;
    v11 = (int)(float)(v3 * 3.0);
    v12 = (float *)((char *)this + 4);
    v13 = (float)(2 * v11);
    v14 = *((float *)this + 2);
    do
    {
      if ( *v9 < 1 )
        break;
      v15 = *(float *)this;
      v16 = 0;
      v17 = *v12;
      v18 = 0;
      while ( CClouds::ms_vc[v18] )
      {
        ++v18;
        v16 += 12;
        if ( v18 >= *v9 )
          return -1;
      }
      if ( v16 == -12 )
        break;
      v10[v18] = 1;
      CClouds::ms_vc[v18 + 180] = 1;
      v35 = v9;
      v36 = v10;
      *(_DWORD *)&CClouds::ms_vc[4 * v18 + 4680] = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259)
                                                              * 92.0)
                                                 + 36;
      v19 = (float *)&CClouds::ms_vc[v16];
      v19[630] = v6 + (float)(v7 * (float)((float)rand() * 4.6566e-10));
      v19[631] = v6 + (float)(v7 * (float)((float)rand() * 4.6566e-10));
      v19[632] = v6 + (float)((float)(v4 - v6) * (float)((float)rand() * 4.6566e-10));
      v19[90] = v15 + (float)((int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * v13) - v11);
      v19[91] = v17 + (float)((int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * v13) - v11);
      v20 = rand();
      v9 = v35;
      v10 = v36;
      v21 = v8++ < 4;
      v22 = (int)(float)((float)((float)v20 * 0.000015259) * v13) - v11;
      v12 = v19 + 91;
      v14 = v14 + (float)v22;
      v19[92] = v14;
      this = (CClouds *)(v19 + 90);
    }
    while ( v21 );
  }
  else
  {
    v23 = v5 - v6;
    v24 = 0;
    v25 = 0;
    v26 = CClouds::m_fVolumetricCloudMaxDistance;
    v27 = CClouds::m_fVolumetricCloudMaxDistance * 0.25;
    v28 = v26 + v26;
    v29 = (float *)(dword_951FBC + 48);
    if ( !dword_951FBC )
      v29 = (float *)&qword_951FAC;
    v30 = *v29;
    v31 = v29[1];
    v32 = v29[2];
    do
    {
      CClouds::ms_vc[v25] = 1;
      CClouds::ms_vc[v25 + 180] = 1;
      *(_DWORD *)&CClouds::ms_vc[4 * v25 + 4680] = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259)
                                                              * 92.0)
                                                 + 36;
      v33 = (float *)&CClouds::ms_vc[v24];
      *(float *)&CClouds::ms_vc[v24 + 2520] = v6 + (float)(v23 * (float)((float)rand() * 4.6566e-10));
      v33[631] = v6 + (float)(v23 * (float)((float)rand() * 4.6566e-10));
      v33[632] = v6 + (float)((float)(v4 - v6) * (float)((float)rand() * 4.6566e-10));
      v33[90] = v30 + (float)((float)(v28 * (float)((float)rand() * 4.6566e-10)) - v26);
      v33[91] = v31 + (float)((float)(v28 * (float)((float)rand() * 4.6566e-10)) - v26);
      ++v25;
      v24 += 12;
      v33[92] = v32 + (float)((float)((float)(v27 + v27) * (float)((float)rand() * 4.6566e-10)) - v27);
    }
    while ( v25 != 180 );
  }
  return -1;
}


// ============================================================

// Address: 0x5a0d74
// Original: _ZN7CClouds30VolumetricCloudsGetMaxDistanceEv
// Demangled: CClouds::VolumetricCloudsGetMaxDistance(void)
unsigned __int32 __fastcall CClouds::VolumetricCloudsGetMaxDistance(CClouds *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1

  v1.n64_u32[0] = 1142292480;
  v2.n64_u32[0] = *(_DWORD *)(dword_9FC93C + 132);
  return vmin_f32(v2, v1).n64_u32[0];
}


// ============================================================

// Address: 0x5a0d98
// Original: _ZN7CClouds22VolumetricCloudsRenderEv
// Demangled: CClouds::VolumetricCloudsRender(void)
int __fastcall CClouds::VolumetricCloudsRender(CClouds *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  int result; // r0
  int FxQuality; // r0
  float v5; // s0
  float *v6; // r0
  float v7; // s16
  float v8; // s18
  float v9; // s20
  char v10; // r0
  float v11; // s0
  CPostEffects *v12; // r0
  int v13; // r5
  int PlayerVehicle; // r4
  char v15; // r0
  float *v16; // r0
  float *v17; // r1
  float v18; // s8
  float v19; // s0
  float v20; // s2
  float v21; // s24
  float v22; // s22
  float v23; // s2
  CVector *v24; // r1
  CPostEffects *v25; // r0
  int v26; // lr
  int v27; // r10
  int v28; // r5
  unsigned int v29; // r1
  float *v30; // r2
  float v31; // s0
  float v32; // s2
  float v33; // s8
  float v34; // s0
  float v35; // s4
  float v36; // s0
  _BYTE *v37; // r3
  float v38; // s2
  int v39; // r1
  int v40; // r3
  int v41; // r6
  float v42; // s28
  float v43; // s30
  float v44; // s29
  float v45; // s26
  float v46; // s27
  float v47; // s25
  float *v48; // r0
  float v49; // s19
  float v50; // s21
  float v51; // s17
  float v52; // s23
  float v53; // s0
  float v54; // s4
  float v55; // s2
  __int64 v56; // r0
  int v57; // r11
  float v58; // s2
  float v59; // s4
  float v60; // s0
  float v61; // s2
  int v62; // s31
  float v63; // s0
  unsigned __int8 v64; // r6
  int v65; // r9
  float v66; // s31
  float v67; // s22
  float v68; // s24
  unsigned __int8 v69; // r0
  unsigned __int8 v70; // r6
  int v71; // r9
  int v72; // r11
  int v73; // r6
  __int64 v74; // r2
  int *v75; // r1
  int v76; // r0
  float v77; // s0
  float v78; // s4
  int v79; // r0
  int v80; // r0
  unsigned __int8 v81; // [sp+Ch] [bp-D4h]
  float v82; // [sp+64h] [bp-7Ch] BYREF
  float v83; // [sp+68h] [bp-78h] BYREF
  float v84; // [sp+6Ch] [bp-74h] BYREF
  double v85; // [sp+70h] [bp-70h] BYREF
  int v86; // [sp+78h] [bp-68h]

  result = CGame::currArea;
  if ( CGame::currArea )
    return result;
  result = *(unsigned __int8 *)(FindPlayerPed(-1) + 51);
  if ( result )
    return result;
  FxQuality = Fx_c::GetFxQuality((Fx_c *)&g_fx);
  v5 = 1.0;
  if ( FxQuality == 1 )
    v5 = 0.66;
  if ( !FxQuality )
    v5 = 0.5;
  CClouds::m_fVolumetricCloudDensity = LODWORD(v5);
  CClouds::m_VolumetricCloudsUsedNum = (int)(float)(v5 * 180.0);
  result = (int)(float)(v5 * 180.0);
  if ( result < 1 )
    return result;
  if ( result >= 181 )
    CClouds::m_VolumetricCloudsUsedNum = 180;
  v1.n64_u32[0] = 1142292480;
  v2.n64_u32[0] = *(_DWORD *)(dword_9FC93C + 132);
  LODWORD(CClouds::m_fVolumetricCloudMaxDistance) = vmin_f32(v2, v1).n64_u32[0];
  v6 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v6 = (float *)&qword_951FAC;
  v7 = *v6;
  v8 = v6[1];
  v9 = v6[2];
  v10 = byte_A25AE0;
  __dmb(0xBu);
  if ( (v10 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_A25AE0) )
    j___cxa_guard_release((__guard *)&byte_A25AE0);
  if ( !CClouds::m_bVolumetricCloudHeightSwitch )
    goto LABEL_21;
  v11 = *(float *)&CTimer::ms_fTimeStep * 4.0;
  if ( v9 >= 220.0 )
  {
    *(float *)&dword_A25AE4 = *(float *)&dword_A25AE4 - v11;
    if ( *(float *)&dword_A25AE4 >= 0.0 )
      goto LABEL_22;
LABEL_21:
    dword_A25AE4 = 0;
    goto LABEL_22;
  }
  *(float *)&dword_A25AE4 = *(float *)&dword_A25AE4 + v11;
  if ( *(float *)&dword_A25AE4 >= 255.0 )
  {
    result = (int)&dword_A25AE4;
    dword_A25AE4 = 1132396544;
    return result;
  }
LABEL_22:
  v12 = (CPostEffects *)CPostEffects::ImmediateModeRenderStatesStore((CPostEffects *)&dword_A25AE4);
  CPostEffects::ImmediateModeRenderStatesSet(v12);
  RwRenderStateSet(6, 1);
  RwRenderStateSet(1, *(_DWORD *)dword_A25340);
  RwRenderStateSet(9, 2);
  v13 = 0;
  PlayerVehicle = FindPlayerVehicle(-1, 0);
  FindPlayerCoors((int)&v85);
  v15 = byte_A25AF4;
  __dmb(0xBu);
  if ( (v15 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_A25AF4) )
    j___cxa_guard_release((__guard *)&byte_A25AF4);
  if ( v9 != flt_A25AD4[2] )
    v13 = 1;
  if ( *(float *)&v85 != flt_A25AE8[0]
    || *((float *)&v85 + 1) != flt_A25AE8[1]
    || *(float *)&v86 != *(float *)&dword_A25AF0 )
  {
    flt_A25AD4[0] = v7;
    flt_A25AD4[1] = v8;
    dword_A25AF0 = v86;
    flt_A25AD4[2] = v9;
    *(double *)flt_A25AE8 = v85;
LABEL_31:
    if ( PlayerVehicle )
    {
      v16 = *(float **)(PlayerVehicle + 20);
      v17 = v16 + 12;
      v18 = (float)(CClouds::m_fVolumetricCloudMaxDistance + 200.0) * v16[5];
      v19 = (float)(CClouds::m_fVolumetricCloudMaxDistance + 200.0) * v16[6];
      v20 = v16[4] * (float)(CClouds::m_fVolumetricCloudMaxDistance + 200.0);
      v83 = v18;
      v84 = v19;
      if ( !v16 )
        v17 = (float *)(PlayerVehicle + 4);
      v21 = *v17 + v20;
      v82 = v21;
      v22 = v17[1] + v18;
      v83 = v22;
      v23 = v17[2];
    }
    else
    {
      v19 = (float)(CClouds::m_fVolumetricCloudMaxDistance + 200.0) * *(float *)&dword_9528BC;
      v21 = v7 + (float)(*(float *)&dword_9528B4 * (float)(CClouds::m_fVolumetricCloudMaxDistance + 200.0));
      v22 = v8 + (float)((float)(CClouds::m_fVolumetricCloudMaxDistance + 200.0) * *(float *)&dword_9528B8);
      v23 = v9;
      v84 = v19;
      v82 = v21;
      v83 = v22;
    }
    v82 = v21 + (float)((float)((float)((float)rand() * 4.6566e-10) * 400.0) + -200.0);
    v83 = v22 + (float)((float)((float)((float)rand() * 4.6566e-10) * 400.0) + -200.0);
    v84 = (float)(v23 + v19) + (float)((float)((float)((float)rand() * 4.6566e-10) * 100.0) + -50.0);
    CClouds::VolumetricClouds_Create((CClouds *)&v82, v24);
    goto LABEL_37;
  }
  v80 = (v8 != flt_A25AD4[1] || v7 != flt_A25AD4[0]) | v13;
  flt_A25AD4[0] = v7;
  flt_A25AD4[1] = v8;
  dword_A25AF0 = v86;
  flt_A25AD4[2] = v9;
  *(double *)flt_A25AE8 = v85;
  if ( v80 == 1 )
    goto LABEL_31;
LABEL_37:
  v25 = (CPostEffects *)&CClouds::m_VolumetricCloudsUsedNum;
  v26 = CClouds::m_VolumetricCloudsUsedNum;
  if ( CClouds::m_VolumetricCloudsUsedNum < 1 )
    return CPostEffects::ImmediateModeRenderStatesReStore(v25);
  v27 = 0;
  v28 = 0;
  v29 = (WORD1(qword_966574)
       + (unsigned __int16)dword_966570
       + HIWORD(dword_966570)
       + (unsigned __int16)qword_966574
       + WORD2(qword_966574)
       + (unsigned int)HIWORD(qword_966574))
      / 6
      + 64;
  if ( v29 >= 0xFF )
    LOBYTE(v29) = -1;
  v81 = v29;
  v25 = (CPostEffects *)CClouds::ms_vc;
  do
  {
    if ( !CClouds::ms_vc[v27] )
      goto LABEL_81;
    v30 = (float *)&CClouds::ms_vc[12 * v27];
    v31 = v30[90];
    v32 = v30[91];
    v33 = v31 + (float)(*(float *)&CWeather::WindDir * CClouds::m_fVolumetricCloudWindMoveFactor);
    v34 = (float)((float)((float)(v31 - v7) * (float)(v31 - v7)) + (float)((float)(v32 - v8) * (float)(v32 - v8)))
        + (float)((float)(v30[92] - v9) * (float)(v30[92] - v9));
    v35 = CClouds::m_fVolumetricCloudWindMoveFactor * flt_A7D174;
    v30[90] = v33;
    v36 = sqrtf(v34);
    v30[91] = v32 + v35;
    v37 = &CClouds::ms_vc[v27 + 180];
    v38 = CClouds::m_fVolumetricCloudMaxDistance;
    if ( !*v37 && v36 > CClouds::m_fVolumetricCloudMaxDistance )
    {
      v39 = v27;
      if ( v27 >= 179 )
        v39 = 179;
      CClouds::ms_vc[v39] = 0;
      CClouds::ms_vc[v39 + 180] = 0;
      goto LABEL_81;
    }
    if ( v36 < CClouds::m_fVolumetricCloudMaxDistance )
    {
      *v37 = 0;
    }
    else if ( v36 > (float)(CClouds::m_fVolumetricCloudMaxDistance + 200.0) )
    {
      *v37 = 0;
    }
    v40 = 0;
    if ( *(_DWORD *)&CClouds::ms_vc[4 * v27 + 4680] - (int)*(float *)&dword_A25AE4 > 0 )
      v40 = *(_DWORD *)&CClouds::ms_vc[4 * v27 + 4680] - (int)*(float *)&dword_A25AE4;
    if ( v36 <= (float)(v38 + -100.0) )
    {
      v41 = v40;
    }
    else
    {
      if ( v36 > v38 || *(_DWORD *)&CClouds::ms_vc[4 * v27 + 4680] - (int)*(float *)&dword_A25AE4 < 1 )
        goto LABEL_81;
      v41 = (int)(float)(int)(float)((float)((float)((float)(v38 - (float)(v38 + -100.0))
                                                   - (float)(v36 - (float)(v38 + -100.0)))
                                           * (float)v40)
                                   / (float)(v38 - (float)(v38 + -100.0)));
      if ( v41 <= 0 )
        v41 = 0;
      if ( v41 > v40 )
        v41 = v40;
      if ( !v41 )
        goto LABEL_81;
    }
    v42 = v30[91];
    v43 = v30[90];
    v44 = v42 - v8;
    v45 = v30[92];
    v46 = v43 - v7;
    v47 = v45 - v9;
    v48 = (float *)&CClouds::ms_vc[12 * v27];
    v49 = v48[631];
    v50 = v48[630];
    v51 = v48[632];
    v52 = (float)v41;
    v83 = v42 - v8;
    v82 = v43 - v7;
    v53 = v45 - v9;
    v84 = v45 - v9;
    v54 = v42 - v8;
    v55 = v43 - v7;
    LODWORD(v56) = (float)(v42 - v8) != 0.0 || (float)(v43 - v7) != 0.0;
    HIDWORD(v56) = (float)(v45 - v9) != 0.0;
    v57 = v56 | HIDWORD(v56);
    if ( v56 )
    {
      CVector::Normalise((CVector *)&v82);
      v55 = v82;
      v54 = v83;
      v53 = v84;
    }
    v83 = v42 - v8;
    v58 = (float)(*(float *)&dword_A25344 * v55) + (float)(*(float *)&dword_A25348 * v54);
    v59 = v42 - v8;
    v60 = v58 + (float)(*(float *)&dword_A2534C * v53);
    v61 = v43 - v7;
    v62 = (int)(float)(fabsf(v60) * v52);
    v82 = v43 - v7;
    v63 = v45 - v9;
    v84 = v45 - v9;
    if ( v57 )
    {
      CVector::Normalise((CVector *)&v82);
      v61 = v82;
      v59 = v83;
      v63 = v84;
    }
    v64 = v62;
    v83 = v42 - v8;
    v82 = v43 - v7;
    v84 = v45 - v9;
    v65 = (int)(float)(fabsf(
                         (float)((float)(*(float *)&dword_A25350 * v61) + (float)(*(float *)&dword_A25354 * v59))
                       + (float)(*(float *)&dword_A25358 * v63))
                     * v52);
    if ( v57 )
    {
      CVector::Normalise((CVector *)&v82);
      v46 = v82;
      v44 = v83;
      v47 = v84;
    }
    v66 = *(float *)&dword_A25364;
    v67 = *(float *)&dword_A2535C;
    v68 = *(float *)&dword_A25360;
    v69 = v64;
    v70 = v81;
    CRGBA::CRGBA((CRGBA *)&v82, v81, v81, v81, v69);
    CRGBA::CRGBA((CRGBA *)&v83, v70, v70, v70, v65);
    CRGBA::CRGBA(
      (CRGBA *)&v84,
      v70,
      v70,
      v70,
      (int)(float)(fabsf((float)((float)(v67 * v46) + (float)(v68 * v44)) + (float)(v66 * v47)) * v52));
    v71 = 0;
    v72 = -72;
    v73 = 0;
    do
    {
      while ( 1 )
      {
        HIDWORD(v74) = *(_DWORD *)&CClouds::ms_vc[v72 + 5728];
        ++v71;
        v75 = &TempVertexBuffer[9 * v28];
        v76 = *(_DWORD *)&CClouds::ms_vc[v72 + 5800];
        *(float *)&v74 = *(&v82 + v73);
        v77 = v42 + (float)(v49 * *(float *)&CClouds::ms_vc[v72 + 5584]);
        v78 = v45 + (float)(v51 * *(float *)&CClouds::ms_vc[v72 + 5656]);
        *(float *)v75 = v43 + (float)(v50 * *(float *)&CClouds::ms_vc[v72 + 5512]);
        *((float *)v75 + 1) = v77;
        *((float *)v75 + 2) = v78;
        *((_QWORD *)v75 + 3) = v74;
        v75[8] = v76;
        v79 = v28 + 1;
        if ( v71 == 6 )
        {
          ++v73;
          v71 = 0;
        }
        if ( v28 >= 0 )
          break;
        ++v28;
        v72 += 4;
        if ( !v72 )
          goto LABEL_80;
      }
      ++v28;
      if ( v79 == 2034 )
      {
        v28 = 0;
        if ( RwIm3DTransform() )
        {
          RwIm3DRenderPrimitive();
          RwIm3DEnd();
          v28 = 0;
        }
      }
      v72 += 4;
    }
    while ( v72 );
LABEL_80:
    v26 = CClouds::m_VolumetricCloudsUsedNum;
    v25 = (CPostEffects *)CClouds::ms_vc;
LABEL_81:
    ++v27;
  }
  while ( v27 < v26 );
  if ( v28 >= 1 )
  {
    v25 = (CPostEffects *)RwIm3DTransform();
    if ( v25 )
    {
      RwIm3DRenderPrimitive();
      v25 = (CPostEffects *)RwIm3DEnd();
    }
  }
  return CPostEffects::ImmediateModeRenderStatesReStore(v25);
}


// ============================================================

// Address: 0x5a1820
// Original: _ZN7CClouds24MovingFog_GetFXIntensityEv
// Demangled: CClouds::MovingFog_GetFXIntensity(void)
int __fastcall CClouds::MovingFog_GetFXIntensity(CClouds *this)
{
  return CWeather::Foggyness_SF;
}


// ============================================================

// Address: 0x5a1830
// Original: _ZN7CClouds17MovingFog_GetWindEv
// Demangled: CClouds::MovingFog_GetWind(void)
int __fastcall CClouds::MovingFog_GetWind(int this)
{
  *(_DWORD *)(this + 8) = dword_A259BC;
  *(_QWORD *)this = *(_QWORD *)&dword_A259B4;
  return this;
}


// ============================================================

// Address: 0x5a1850
// Original: _ZN7CClouds26MovingFog_GetFirstFreeSlotEv
// Demangled: CClouds::MovingFog_GetFirstFreeSlot(void)
int __fastcall CClouds::MovingFog_GetFirstFreeSlot(CClouds *this)
{
  int result; // r0

  result = 0;
  while ( CClouds::ms_mf[result] )
  {
    if ( result++ >= 49 )
      return -1;
  }
  return result;
}


// ============================================================

// Address: 0x5a1874
// Original: _ZN7CClouds16MovingFog_DeleteEi
// Demangled: CClouds::MovingFog_Delete(int)
int __fastcall CClouds::MovingFog_Delete(int this, int a2)
{
  if ( this <= 0 )
    this = 0;
  if ( this >= 49 )
    this = (int)&word_30 + 1;
  CClouds::ms_mf[this] = 0;
  return this;
}


// ============================================================

// Address: 0x5a1890
// Original: _ZN7CClouds16MovingFog_CreateEP7CVector
// Demangled: CClouds::MovingFog_Create(CVector *)
float *__fastcall CClouds::MovingFog_Create(float *this, CVector *a2)
{
  int v2; // r5
  int v3; // r6
  int v4; // r4
  float v6; // s18
  float v7; // s20
  float v8; // s22
  float *v9; // r6
  int v10; // r0
  float v11; // s4
  int v12; // r0
  _BYTE *v13; // r5

  v2 = 0;
  v3 = 0;
  v4 = 0;
  while ( CClouds::ms_mf[v4] )
  {
    v2 += 4;
    v3 += 12;
    if ( v4++ >= 49 )
      return this;
  }
  if ( v3 != -12 )
  {
    v6 = *this;
    v7 = this[1];
    v8 = this[2];
    v9 = (float *)&CClouds::ms_mf[v3];
    v9[13] = (float)((float)((float)rand() * 4.6566e-10) * 116.0) + -58.0;
    v9[14] = (float)((float)((float)rand() * 4.6566e-10) * 116.0) + -58.0;
    v10 = rand();
    v11 = v7 + v9[14];
    v9[13] = v6 + v9[13];
    v9[14] = v11;
    v9[15] = v8 + (float)((float)((float)((float)v10 * 4.6566e-10) * 10.0) + -5.0);
    v12 = rand();
    v13 = &CClouds::ms_mf[v2];
    *((_DWORD *)v13 + 213) = 1065353216;
    *((float *)v13 + 163) = (float)((float)((float)v12 * 4.6566e-10) * 6.0) + 4.0;
    *((float *)v13 + 263) = (float)((float)((float)rand() * 4.6566e-10) * 12.0) + 8.0;
    *((float *)v13 + 316) = (float)((float)((float)rand() * 4.6566e-10) * 0.7) + 0.5;
    this = (float *)(&stderr + 1);
    CClouds::ms_mf[v4] = 1;
  }
  return this;
}


// ============================================================

// Address: 0x5a1a04
// Original: _ZN7CClouds16MovingFog_UpdateEv
// Demangled: CClouds::MovingFog_Update(void)
unsigned int __fastcall CClouds::MovingFog_Update(CClouds *this)
{
  __int64 v1; // d8
  __int64 v2; // d9
  __int64 v3; // d10
  __int64 v4; // d11
  __int64 v5; // d12
  __int64 v6; // d13
  unsigned int result; // r0
  int v8; // r5
  float v9; // s16
  int v10; // r6
  float *v11; // r1
  float v12; // s18
  double v13; // d16
  int v14; // r11
  float v15; // s20
  int v16; // r9
  float v17; // s22
  float v18; // s24
  int v19; // r8
  float *v20; // r2
  float v21; // s0
  float v22; // s2
  float v23; // s6
  float v24; // s4
  float v25; // s0
  float v26; // s0
  float v27; // s2
  double v28; // [sp+8h] [bp-68h] BYREF
  float v29; // [sp+10h] [bp-60h]
  __int64 v30; // [sp+18h] [bp-58h]
  __int64 v31; // [sp+20h] [bp-50h]
  __int64 v32; // [sp+28h] [bp-48h]
  __int64 v33; // [sp+30h] [bp-40h]
  __int64 v34; // [sp+38h] [bp-38h]
  __int64 v35; // [sp+40h] [bp-30h]

  result = (unsigned int)&CWeather::Foggyness_SF;
  if ( *(float *)&CWeather::Foggyness_SF != 0.0 )
  {
    v30 = v1;
    v31 = v2;
    v32 = v3;
    v33 = v4;
    v34 = v5;
    v35 = v6;
    v8 = 50;
    v9 = *(float *)&dword_A259B8;
    v10 = dword_951FBC + 48;
    v11 = (float *)dword_6E03FC;
    if ( !dword_951FBC )
      v10 = (int)&qword_951FAC;
    v12 = *(float *)&dword_A259B4;
    v13 = *(double *)v10;
    v29 = *(float *)&byte_8[v10];
    v28 = v13;
    if ( !dword_6E03FC )
      v8 = 25;
    result = 3 * v8;
    if ( dword_6E03FC == 1 )
      v8 = result >> 2;
    if ( v8 )
    {
      v14 = 0;
      v15 = *(float *)&v28;
      v16 = 0;
      v17 = *((float *)&v28 + 1);
      v18 = v29;
      v19 = 0;
      do
      {
        if ( CClouds::ms_mf[v19] )
        {
          v11 = (float *)&CClouds::ms_mf[v14];
          result = (unsigned int)&CClouds::ms_mf[v16];
          v20 = (float *)&CClouds::ms_mf[v16 + 1264];
          v21 = *(float *)&CClouds::ms_mf[v14 + 52];
          v22 = *(float *)&CClouds::ms_mf[v14 + 56];
          v23 = v9 * *v20;
          v24 = sqrtf(
                  (float)((float)((float)(v21 - v15) * (float)(v21 - v15))
                        + (float)((float)(v22 - v17) * (float)(v22 - v17)))
                + (float)((float)(*(float *)&CClouds::ms_mf[v14 + 60] - v18)
                        * (float)(*(float *)&CClouds::ms_mf[v14 + 60] - v18)));
          v11[13] = v21 + (float)(v12 * *v20);
          v11[14] = v23 + v22;
          v25 = *(float *)&CClouds::ms_mf[v16 + 852];
          if ( v24 <= 60.0 )
          {
            v27 = *(float *)&CTimer::ms_fTimeStep + v25;
            v11 = (float *)&CClouds::ms_mf[v16 + 1052];
            *(float *)(result + 852) = *(float *)&CTimer::ms_fTimeStep + v25;
            if ( v27 > *v11 )
              *(float *)(result + 852) = *v11;
          }
          else
          {
            v26 = v25 - *(float *)&CTimer::ms_fTimeStep;
            *(float *)(result + 852) = v26;
            if ( v26 <= 0.0 )
            {
              result = v19;
              if ( v19 >= 49 )
                result = 49;
              v11 = 0;
              CClouds::ms_mf[result] = 0;
            }
          }
        }
        else
        {
          result = CClouds::MovingFog_Create((CClouds *)&v28, (CVector *)v11);
        }
        ++v19;
        v14 += 12;
        v16 += 4;
      }
      while ( v19 < v8 );
    }
  }
  return result;
}


// ============================================================

// Address: 0x5a1bc8
// Original: _ZN7CClouds15MovingFogRenderEv
// Demangled: CClouds::MovingFogRender(void)
int *__fastcall CClouds::MovingFogRender(CClouds *this)
{
  float v1; // s19
  float v2; // s21
  float v3; // s23
  float v4; // s25
  float v5; // s27
  int *result; // r0
  float v7; // s16
  float v8; // s0
  int v9; // r1
  float v10; // r0
  float v11; // r4
  float v12; // r5
  CPostEffects *v13; // r0
  int v14; // r2
  int v15; // r4
  int v16; // r9
  unsigned int v17; // r1
  unsigned int v18; // r3
  int v19; // r1
  int v20; // r0
  int v21; // r10
  float *v22; // r0
  float v23; // s2
  float v24; // s0
  float *v25; // r0
  float v26; // s14
  float v27; // s8
  float v28; // s12
  float v29; // s4
  float v30; // s6
  float v31; // s10
  float v32; // s1
  float v33; // s3
  float v34; // s0
  float v35; // s5
  float v36; // s7
  float v37; // s9
  float v38; // s8
  float v39; // s4
  float v40; // s6
  int v41; // r6
  int *v42; // r0
  CClouds *v43; // r0
  float v44; // [sp+4h] [bp-94h]
  float v45; // [sp+8h] [bp-90h]
  float v46; // [sp+Ch] [bp-8Ch]
  float v47; // [sp+10h] [bp-88h]
  float v48; // [sp+14h] [bp-84h]
  float v49; // [sp+18h] [bp-80h]
  int v50; // [sp+24h] [bp-74h]

  result = &CWeather::Foggyness_SF;
  if ( *(float *)&CWeather::Foggyness_SF == 0.0 )
    return result;
  result = (int *)CGame::currArea;
  if ( CGame::currArea )
    return result;
  result = (int *)*(unsigned __int8 *)(FindPlayerPed(-1) + 51);
  if ( result )
    return result;
  v7 = *(float *)&CTimer::ms_fTimeStep * 0.0033333;
  if ( CCullZones::CamNoRain((CCullZones *)&CTimer::ms_fTimeStep) == 1
    && CCullZones::PlayerNoRain((CCullZones *)((char *)&stderr + 1)) )
  {
    v8 = *(float *)&dword_6B15E8 - v7;
    *(float *)&dword_6B15E8 = *(float *)&dword_6B15E8 - v7;
    if ( *(float *)&dword_6B15E8 >= 0.0 )
      goto LABEL_11;
    v9 = 0;
    v8 = 0.0;
  }
  else
  {
    v8 = v7 + *(float *)&dword_6B15E8;
    *(float *)&dword_6B15E8 = v7 + *(float *)&dword_6B15E8;
    if ( *(float *)&dword_6B15E8 <= 1.0 )
      goto LABEL_11;
    v9 = 1065353216;
    v8 = 1.0;
  }
  dword_6B15E8 = v9;
LABEL_11:
  result = &CPostEffects::m_fWaterFXStartUnderWaterness;
  if ( CWeather::UnderWaterness >= *(float *)&CPostEffects::m_fWaterFXStartUnderWaterness )
  {
    result = &dword_6B15E8;
    dword_6B15E8 = 0;
  }
  else if ( v8 != 0.0 )
  {
    v10 = *(float *)&dword_951FBC;
    if ( dword_951FBC )
    {
      v48 = *(float *)dword_951FBC;
      v49 = *(float *)(dword_951FBC + 4);
      v44 = *(float *)(dword_951FBC + 8);
      v45 = *(float *)(dword_951FBC + 32);
      v46 = *(float *)(dword_951FBC + 36);
      v47 = *(float *)(dword_951FBC + 40);
    }
    else
    {
      v11 = *(float *)&dword_951FB8;
      v12 = cosf(*(float *)&dword_951FB8);
      v10 = sinf(v11);
      v47 = 1.0;
      v49 = v10;
      v48 = v12;
      v45 = 0.0;
      v46 = 0.0;
      v44 = 0.0;
    }
    v13 = (CPostEffects *)CPostEffects::ImmediateModeRenderStatesStore((CPostEffects *)LODWORD(v10));
    CPostEffects::ImmediateModeRenderStatesSet(v13);
    RwRenderStateSet(6, 1);
    RwRenderStateSet(1, *(_DWORD *)dword_A23DEC);
    RwRenderStateSet(9, 2);
    v14 = 255;
    v15 = 0;
    v16 = 0;
    v17 = WORD2(qword_966574) + 132;
    v18 = WORD1(qword_966574) + 132;
    if ( v17 >= 0xFF )
      v17 = 255;
    if ( v18 >= 0xFF )
      v18 = 255;
    v19 = v18 | (v17 << 8);
    if ( (unsigned int)HIWORD(qword_966574) + 132 < 0xFF )
      v14 = HIWORD(qword_966574) + 132;
    v50 = v19 | (v14 << 16);
    do
    {
      v20 = (unsigned __int8)CClouds::ms_mf[v16];
      if ( CClouds::ms_mf[v16] )
      {
        v21 = 0;
        v22 = (float *)&CClouds::ms_mf[4 * v16];
        v23 = v22[213];
        v24 = v22[163] * 0.5;
        v25 = (float *)&CClouds::ms_mf[12 * v16];
        v26 = v25[15];
        v27 = v25[13];
        v28 = v25[14];
        v29 = v44 * v24;
        v30 = v49 * v24;
        v31 = v48 * v24;
        v32 = v47 * v24;
        v33 = v46 * v24;
        v34 = v45 * v24;
        v35 = v26 - v29;
        v36 = v28 - v30;
        v37 = v27 - v31;
        v38 = v27 + v31;
        v39 = v29 + v26;
        v40 = v28 + v30;
        v41 = v50 | ((int)(float)((float)(v23 * *(float *)&CWeather::Foggyness_SF) * *(float *)&dword_6B15E8) << 24);
        do
        {
          switch ( *(_DWORD *)&CClouds::ms_mf[4 * v21 + 1512] )
          {
            case 0:
              v1 = v34 + v38;
              v2 = v33 + v40;
              v3 = v32 + v39;
              v4 = 0.0;
              goto LABEL_32;
            case 1:
              v1 = v38 - v34;
              v2 = v40 - v33;
              v3 = v39 - v32;
              v4 = 0.0;
              v5 = 1.0;
              break;
            case 2:
              v1 = v37 - v34;
              v2 = v36 - v33;
              v3 = v35 - v32;
              v4 = 1.0;
              v5 = 1.0;
              break;
            case 3:
              v4 = 1.0;
              v1 = v34 + v37;
              v2 = v33 + v36;
              v3 = v32 + v35;
LABEL_32:
              v5 = 0.0;
              break;
            default:
              break;
          }
          v42 = &TempVertexBuffer[9 * v15];
          *(float *)v42 = v1;
          *((float *)v42 + 1) = v2;
          *((float *)v42 + 2) = v3;
          v42[6] = v41;
          *((float *)v42 + 7) = v5;
          *((float *)v42 + 8) = v4;
          v20 = v15 + 1;
          if ( v15 < 0 )
          {
            ++v15;
          }
          else
          {
            ++v15;
            if ( v20 == 2046 )
            {
              v15 = 0;
              v20 = RwIm3DTransform();
              if ( v20 )
              {
                RwIm3DRenderPrimitive();
                v20 = RwIm3DEnd();
                v15 = 0;
              }
            }
          }
          ++v21;
        }
        while ( v21 != 6 );
      }
      ++v16;
    }
    while ( v16 != 50 );
    if ( v15 > 0 )
    {
      v20 = RwIm3DTransform();
      if ( v20 )
      {
        RwIm3DRenderPrimitive();
        v20 = RwIm3DEnd();
      }
    }
    v43 = (CClouds *)CPostEffects::ImmediateModeRenderStatesReStore((CPostEffects *)v20);
    return (int *)CClouds::MovingFog_Update(v43);
  }
  return result;
}


// ============================================================


// Address: 0x189f40
// Original: j__ZN10CSpecialFX4InitEv
// Demangled: CSpecialFX::Init(void)
// attributes: thunk
int __fastcall CSpecialFX::Init(CSpecialFX *this)
{
  return _ZN10CSpecialFX4InitEv(this);
}


// ============================================================

// Address: 0x18d9bc
// Original: j__ZN10CSpecialFX6RenderEv
// Demangled: CSpecialFX::Render(void)
// attributes: thunk
int __fastcall CSpecialFX::Render(CSpecialFX *this)
{
  return _ZN10CSpecialFX6RenderEv(this);
}


// ============================================================

// Address: 0x18df90
// Original: j__ZN10CSpecialFX6UpdateEv
// Demangled: CSpecialFX::Update(void)
// attributes: thunk
int __fastcall CSpecialFX::Update(CSpecialFX *this)
{
  return _ZN10CSpecialFX6UpdateEv(this);
}


// ============================================================

// Address: 0x192530
// Original: j__ZN10CSpecialFX8ShutdownEv
// Demangled: CSpecialFX::Shutdown(void)
// attributes: thunk
int __fastcall CSpecialFX::Shutdown(CSpecialFX *this)
{
  return _ZN10CSpecialFX8ShutdownEv(this);
}


// ============================================================

// Address: 0x195504
// Original: j__ZN10CSpecialFX11Render2DFXsEv
// Demangled: CSpecialFX::Render2DFXs(void)
// attributes: thunk
int __fastcall CSpecialFX::Render2DFXs(CSpecialFX *this)
{
  return _ZN10CSpecialFX11Render2DFXsEv(this);
}


// ============================================================

// Address: 0x5bf860
// Original: _ZN10CSpecialFX4InitEv
// Demangled: CSpecialFX::Init(void)
int *__fastcall CSpecialFX::Init(CSpecialFX *this)
{
  int v1; // r6
  __int16 *v2; // r1
  _QWORD *v3; // r2
  const char *v4; // r1
  CTxdStore *TxdSlot; // r0
  const char *v6; // r2
  CTxdStore *v7; // r0
  int *result; // r0

  dword_A5A0C2 = (int)&elf_hash_chain[16294] + 1;
  byte_A56384 = 0;
  byte_A56358 = 0;
  byte_A563B0 = 0;
  byte_A563DC = 0;
  byte_A56408 = 0;
  byte_A56434 = 0;
  byte_A56460 = 0;
  byte_A5648C = 0;
  byte_A564B8 = 0;
  byte_A564E4 = 0;
  byte_A56510 = 0;
  byte_A5653C = 0;
  byte_A56568 = 0;
  byte_A56594 = 0;
  byte_A565C0 = 0;
  byte_A565EC = 0;
  word_A5A0C6 = 3;
  byte_A59F4C[0] = 0;
  C3dMarkers::ms_user3dMarkers[0] = 0;
  byte_A59F68[0] = 0;
  byte_A59F84 = 0;
  byte_A59FA0 = 0;
  LOBYTE(C3dMarkers::ms_directionArrows[0]) = 0;
  byte_A59FF0 = 0;
  byte_A5A020 = 0;
  byte_A5A050 = 0;
  LOBYTE(dword_A5A080) = 0;
  dword_A59EB8 = 0;
  unk_A59EBC = 0;
  unk_A5A0B0 = 0x1000200010000LL;
  unk_A5A0B8 = 0x2000000020003LL;
  word_A5A0C0 = 1;
  dword_A59EDC = 1065353216;
  unk_A59EE0 = 0;
  dword_A59F00 = 0;
  unk_A59F04 = 0;
  dword_A59F24 = 1065353216;
  unk_A59F28 = 0;
  dword_A56654 = 0;
  CMotionBlurStreaks::aStreaks = 0;
  dword_A566A8 = 0;
  dword_A566FC = 0;
  CBrightLights::NumBrightLights = 0;
  CShinyTexts::NumShinyTexts = 0;
  C3dMarkers::Init((C3dMarkers *)&CMotionBlurStreaks::aStreaks);
  v1 = 0;
  do
  {
    v2 = &CCheckpoints::m_aCheckPtArray[v1];
    CCheckpoints::m_aCheckPtArray[v1] = 257;
    v1 += 28;
    *((_BYTE *)v2 + 2) = 0;
    v3 = v2 + 20;
    *((_DWORD *)v2 + 1) = 0;
    *((_DWORD *)v2 + 2) = -1;
    v2[6] = 1024;
    v2[7] = 5;
    *((_DWORD *)v2 + 8) = 0;
    *((_DWORD *)v2 + 9) = 0;
    *((_BYTE *)v2 + 3) = 1;
    v2 += 8;
    *v3 = 0x3F8000003E800000LL;
    v3[1] = 0LL;
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
  }
  while ( v1 != 896 );
  CSpecialFX::bVideoCam = 0;
  CCheckpoints::NumActiveCPts = 0;
  CSpecialFX::bLiftCam = 0;
  CSpecialFX::SnapShotFrames = 0;
  CSpecialFX::bSnapShotActive = 0;
  CTxdStore::PushCurrentTxd((CTxdStore *)&CSpecialFX::bVideoCam);
  TxdSlot = (CTxdStore *)CTxdStore::FindTxdSlot((CTxdStore *)"particle", v4);
  CTxdStore::SetCurrentTxd(TxdSlot, 0, v6);
  v7 = (CTxdStore *)gpFinishFlagTex;
  if ( !gpFinishFlagTex )
  {
    v7 = (CTxdStore *)RwTextureRead("finishFlag", 0);
    gpFinishFlagTex = (int)v7;
  }
  CTxdStore::PopCurrentTxd(v7);
  result = &CMirrors::MirrorFlags;
  CMirrors::MirrorFlags = 0;
  CMirrors::TypeOfMirror = 0;
  return result;
}


// ============================================================

// Address: 0x5bfda4
// Original: _ZN10CSpecialFX8ShutdownEv
// Demangled: CSpecialFX::Shutdown(void)
int *__fastcall CSpecialFX::Shutdown(CSpecialFX *this)
{
  int *result; // r0

  C3dMarkers::Shutdown(this);
  if ( gpFinishFlagTex )
  {
    RwTextureDestroy(gpFinishFlagTex);
    gpFinishFlagTex = 0;
  }
  if ( CMirrors::pBuffer )
  {
    RwRasterDestroy();
    CMirrors::pBuffer = 0;
  }
  result = (int *)CMirrors::pZBuffer;
  if ( CMirrors::pZBuffer )
  {
    RwRasterDestroy();
    result = &CMirrors::pZBuffer;
    CMirrors::pZBuffer = 0;
  }
  return result;
}


// ============================================================

// Address: 0x5c003c
// Original: _ZN10CSpecialFX15AddWeaponStreakEi
// Demangled: CSpecialFX::AddWeaponStreak(int)
int __fastcall CSpecialFX::AddWeaponStreak(CSpecialFX *this, int a2)
{
  char v3; // r0
  int result; // r0
  int v5; // [sp+38h] [bp-58h] BYREF

  v3 = byte_A5A110;
  __dmb(0xBu);
  if ( (v3 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_A5A110) )
  {
    dword_A5A108 = 0;
    unk_A5A10C = 0;
    _cxa_atexit((void (*)(void *))CMatrix::~CMatrix, &unk_A5A0C8, &unk_67A000);
    j___cxa_guard_release((__guard *)&byte_A5A110);
  }
  result = FindPlayerPed(-1);
  if ( result )
  {
    result = *(_DWORD *)(FindPlayerPed(-1) + 1280);
    if ( result )
    {
      result = FindPlayerPed(-1);
      if ( this == (CSpecialFX *)((char *)&stderr + 2) || this == (CSpecialFX *)byte_8 || this == (CSpecialFX *)&byte_5 )
      {
        RwFrameGetLTM();
        CMatrix::CMatrix();
        CMatrix::operator=();
        CMatrix::~CMatrix((CMatrix *)&v5);
        operator*();
        operator*();
        return CMotionBlurStreaks::RegisterStreak();
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x5c0394
// Original: _ZN10CSpecialFX6UpdateEv
// Demangled: CSpecialFX::Update(void)
int __fastcall CSpecialFX::Update(CSpecialFX *this)
{
  int v1; // r6
  CCheckpoints *v2; // r0
  int v3; // r5
  int result; // r0

  CMotionBlurStreaks::Update(this);
  v1 = 0;
  v2 = (CCheckpoints *)CTimer::m_snTimeInMilliseconds;
  do
  {
    if ( *((_BYTE *)&CBulletTraces::aTraces + v1 + 24)
      && (unsigned int)v2 - *(_DWORD *)((char *)&CBulletTraces::aTraces + v1 + 28) >= *(_DWORD *)((char *)&CBulletTraces::aTraces
                                                                                                + v1
                                                                                                + 32) )
    {
      *((_BYTE *)&CBulletTraces::aTraces + v1 + 24) = 0;
    }
    v1 += 44;
  }
  while ( v1 != 704 );
  CCheckpoints::Update(v2);
  v3 = 0;
  *(float *)&C3dMarkers::m_angleDiamond = *(float *)&C3dMarkers::m_angleDiamond
                                        + (float)(*(float *)&CTimer::ms_fTimeStep * 5.0);
  do
  {
    result = *((unsigned __int8 *)&C3dMarkers::m_aMarkerArray + v3 + 82);
    if ( *((_BYTE *)&C3dMarkers::m_aMarkerArray + v3 + 82) )
    {
      CMatrix::UpdateRW((CMatrix *)((char *)&C3dMarkers::m_aMarkerArray + v3));
      result = RwFrameUpdateObjects(*(_DWORD *)(*(_DWORD *)((char *)&C3dMarkers::m_aMarkerArray + v3 + 72) + 4));
      *((_BYTE *)&C3dMarkers::m_aMarkerArray + v3 + 83) = 1;
    }
    v3 += 160;
  }
  while ( v3 != 5120 );
  return result;
}


// ============================================================

// Address: 0x5c0ac4
// Original: _ZN10CSpecialFX6RenderEv
// Demangled: CSpecialFX::Render(void)
int __fastcall CSpecialFX::Render(CSpecialFX *this)
{
  CMotionBlurStreaks *v1; // r0
  CShinyTexts *v2; // r0
  C3dMarkers *v3; // r0
  int i; // r4

  RwRenderStateSet(8, 0);
  RwRenderStateSet(10, 5);
  RwRenderStateSet(11, 6);
  RwRenderStateSet(20, 1);
  RwRenderStateSet(12, 1);
  v1 = (CMotionBlurStreaks *)RwRenderStateSet(1, 0);
  CMotionBlurStreaks::Render(v1);
  v2 = (CShinyTexts *)dword_6E03FC;
  if ( dword_6E03FC == 3 )
    v2 = (CShinyTexts *)CBulletTraces::Render((CBulletTraces *)((char *)&stderr + 3));
  v3 = (C3dMarkers *)CShinyTexts::Render(v2);
  C3dMarkers::Render(v3);
  for ( i = 0; i != 896; i += 28 )
  {
    if ( LOBYTE(CCheckpoints::m_aCheckPtArray[i + 1]) )
      CCheckpoint::Render((CCheckpoint *)&CCheckpoints::m_aCheckPtArray[i]);
  }
  return sub_192888();
}


// ============================================================

// Address: 0x5c151c
// Original: _ZN10CSpecialFX11Render2DFXsEv
// Demangled: CSpecialFX::Render2DFXs(void)
int __fastcall CSpecialFX::Render2DFXs(CSpecialFX *this, float a2)
{
  unsigned __int8 v2; // r2
  unsigned __int8 v3; // r1
  unsigned __int8 v4; // r1
  unsigned __int8 v5; // r1
  unsigned __int16 *v6; // r3
  int v7; // r4
  int v8; // r6
  int v9; // s0
  float v10; // s16
  int v11; // s0
  float v12; // s16
  __int16 v13; // r5
  float v14; // s16
  float v15; // r1
  float v16; // r0
  unsigned __int8 v17; // r2
  unsigned __int8 v18; // r1
  unsigned __int8 v19; // r1
  unsigned __int8 v20; // r1
  int v21; // r4
  int v22; // r5
  int v23; // s0
  float v24; // s16
  int v25; // s0
  float v26; // s16
  __int16 v27; // r5
  float v28; // s16
  float v29; // r1
  int v30; // r4
  int v31; // r6
  int v32; // r1
  int result; // r0
  char *v34; // r2
  int v35; // r4
  float v36; // s16
  float v37; // s18
  float v38; // r0
  unsigned __int8 v39; // [sp+0h] [bp-60h]
  const CRGBA *v40; // [sp+14h] [bp-4Ch] BYREF
  float v41[4]; // [sp+18h] [bp-48h] BYREF
  _BYTE v42[4]; // [sp+28h] [bp-38h] BYREF
  _BYTE v43[52]; // [sp+2Ch] [bp-34h] BYREF

  if ( CSpecialFX::bVideoCam )
  {
    CFont::SetScale(COERCE_CFONT_((float)((float)dword_9FC904 / 448.0) * 1.5), a2);
    CFont::SetBackground(0, 0, v2);
    CFont::SetProportional((CFont *)((char *)&stderr + 1), v3);
    CFont::SetOrientation((CFont *)((char *)&stderr + 1), v4);
    CRGBA::CRGBA((CRGBA *)v43, 0, 0xFFu, 0, 0xC8u);
    CFont::SetColor();
    CFont::SetFontStyle((CFont *)((char *)&stderr + 1), v5);
    sub_5E6BC0(&gString, (const char *)&dword_5C1B0C, CTimer::m_FrameCounter & 0x3F);
    AsciiToGxtChar((const char *)&gString, gGxtString);
    CFont::PrintString(
      COERCE_CFONT_((float)(8 * dword_9FC900 / 10)),
      (float)(8 * dword_9FC904 / 10),
      (CFont *)gGxtString,
      v6);
    v7 = dword_9FC904;
    if ( dword_9FC904 >= 1 )
    {
      v8 = 0;
      do
      {
        RwRenderStateSet(10, 2);
        RwRenderStateSet(11, 2);
        v9 = dword_9FC900;
        v10 = (float)dword_9FC900;
        CRGBA::CRGBA((CRGBA *)v41, 0, 0x64u, 0, 0x64u);
        CSprite2d::Draw2DPolygon(
          0,
          (float)v8,
          (float)v9,
          (float)v8,
          0.0,
          (float)(v8 + 1),
          v10,
          (float)(v8 + 1),
          COERCE_FLOAT(v41),
          v40);
        RwRenderStateSet(10, 5);
        RwRenderStateSet(11, 6);
        v11 = dword_9FC900;
        v12 = (float)dword_9FC900;
        CRGBA::CRGBA((CRGBA *)v41, 0, 0, 0, 0x96u);
        CSprite2d::Draw2DPolygon(
          0,
          (float)(v8 + 2),
          (float)v11,
          (float)(v8 + 2),
          0.0,
          (float)(v8 + 3),
          v12,
          (float)(v8 + 3),
          COERCE_FLOAT(v41),
          v40);
        v7 = dword_9FC904;
        v8 += 4;
      }
      while ( v8 < dword_9FC904 );
    }
    v13 = CTimer::m_snTimeInMilliseconds;
    RwRenderStateSet(10, 5);
    RwRenderStateSet(11, 6);
    v14 = (float)dword_9FC900;
    CRGBA::CRGBA((CRGBA *)v41, 0, 0x64u, 0, 0x3Cu);
    v15 = (float)(int)(float)((float)(int)(float)((float)((float)((float)v7 + 70.0) * 0.00048828) * (float)(v13 & 0x7FF))
                            + -70.0);
    CSprite2d::Draw2DPolygon(0, v15, v14, v15, 0.0, v15 + 70.0, v14, v15 + 70.0, v16, v40);
  }
  if ( CSpecialFX::bLiftCam )
  {
    CFont::SetScale(COERCE_CFONT_((float)((float)dword_9FC904 / 448.0) * 1.5), a2);
    CFont::SetBackground(0, 0, v17);
    CFont::SetOrientation((CFont *)((char *)&stderr + 1), v18);
    CFont::SetProportional((CFont *)((char *)&stderr + 1), v19);
    CRGBA::CRGBA((CRGBA *)v42, 0x64u, 0x64u, 0x64u, 0xC8u);
    CFont::SetColor();
    CFont::SetFontStyle((CFont *)((char *)&stderr + 1), v20);
    v21 = dword_9FC904;
    if ( dword_9FC904 >= 1 )
    {
      v22 = 0;
      do
      {
        RwRenderStateSet(10, 2);
        RwRenderStateSet(11, 2);
        v23 = dword_9FC900;
        v24 = (float)dword_9FC900;
        CRGBA::CRGBA((CRGBA *)v41, 0x64u, 0x64u, 0x64u, 0x64u);
        CSprite2d::Draw2DPolygon(
          0,
          (float)v22,
          (float)v23,
          (float)v22,
          0.0,
          (float)(v22 + 1),
          v24,
          (float)(v22 + 1),
          COERCE_FLOAT(v41),
          v40);
        RwRenderStateSet(10, 5);
        RwRenderStateSet(11, 6);
        v25 = dword_9FC900;
        v26 = (float)dword_9FC900;
        CRGBA::CRGBA((CRGBA *)v41, 0, 0, 0, 0x96u);
        CSprite2d::Draw2DPolygon(
          0,
          (float)(v22 + 2),
          (float)v25,
          (float)(v22 + 2),
          0.0,
          (float)(v22 + 3),
          v26,
          (float)(v22 + 3),
          COERCE_FLOAT(v41),
          v40);
        v21 = dword_9FC904;
        v22 += 4;
      }
      while ( v22 < dword_9FC904 );
    }
    v27 = CTimer::m_snTimeInMilliseconds;
    RwRenderStateSet(10, 5);
    RwRenderStateSet(11, 6);
    v28 = (float)dword_9FC900;
    CRGBA::CRGBA((CRGBA *)v41, 0x64u, 0x64u, 0x64u, 0x3Cu);
    v29 = (float)(int)(float)((float)(int)(float)((float)((float)((float)v21 + 70.0) * 0.00048828) * (float)(v27 & 0x7FF))
                            + -70.0);
    CSprite2d::Draw2DPolygon(0, v29, v28, v29, 0.0, v29 + 70.0, v28, v29 + 70.0, COERCE_FLOAT(v41), v40);
    v30 = 200;
    do
    {
      v31 = rand() % dword_9FC900;
      v32 = rand() % dword_9FC904;
      v41[0] = (float)v31;
      v41[2] = (float)(v31 + 20);
      v41[3] = (float)v32;
      v41[1] = (float)(v32 + 2);
      CRGBA::CRGBA((CRGBA *)&v40, 0xFFu, 0xFFu, 0xFFu, 0x40u);
      CSprite2d::DrawRect();
      --v30;
    }
    while ( v30 );
  }
  result = (unsigned __int8)CSpecialFX::bSnapShotActive;
  if ( CSpecialFX::bSnapShotActive )
  {
    v34 = (char *)&TheCamera + 528 * (unsigned __int8)byte_951FFF;
    result = 0;
    *((_DWORD *)v34 + 130) = 0;
    *((_DWORD *)v34 + 126) = 0;
    v35 = ++CSpecialFX::SnapShotFrames;
    if ( (unsigned int)CSpecialFX::SnapShotFrames < 0x15 )
    {
      CTimer::ms_fTimeScale = 0;
      if ( (unsigned int)CSpecialFX::SnapShotFrames <= 9 )
      {
        RwRenderStateSet(10, 2);
        RwRenderStateSet(11, 2);
        v36 = (float)dword_9FC900;
        v37 = (float)dword_9FC904;
        v39 = (unsigned int)(float)((float)(255 - 255 * v35 / 0xAu) * 0.65);
        CRGBA::CRGBA((CRGBA *)v41, v39, v39, v39, v39);
        CSprite2d::Draw2DPolygon(0, 0.0, v36, 0.0, 0.0, v37, v36, v37, v38, v40);
        RwRenderStateSet(10, 5);
        return RwRenderStateSet(11, 6);
      }
    }
    else
    {
      CTimer::ms_fTimeScale = 1065353216;
      CSpecialFX::bSnapShotActive = 0;
    }
  }
  return result;
}


// ============================================================

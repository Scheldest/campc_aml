
// Address: 0x18ca34
// Original: j__ZN14CLoadingScreen5PauseEv
// Demangled: CLoadingScreen::Pause(void)
// attributes: thunk
int __fastcall CLoadingScreen::Pause(CLoadingScreen *this)
{
  return _ZN14CLoadingScreen5PauseEv(this);
}


// ============================================================

// Address: 0x18f99c
// Original: j__ZN14CLoadingScreen17DisplayNextSplashEv
// Demangled: CLoadingScreen::DisplayNextSplash(void)
// attributes: thunk
int __fastcall CLoadingScreen::DisplayNextSplash(CLoadingScreen *this)
{
  return _ZN14CLoadingScreen17DisplayNextSplashEv(this);
}


// ============================================================

// Address: 0x19131c
// Original: j__ZN14CLoadingScreen8ContinueEv
// Demangled: CLoadingScreen::Continue(void)
// attributes: thunk
int __fastcall CLoadingScreen::Continue(CLoadingScreen *this)
{
  return _ZN14CLoadingScreen8ContinueEv(this);
}


// ============================================================

// Address: 0x191c4c
// Original: j__ZN14CLoadingScreen15DisplayPCScreenEv
// Demangled: CLoadingScreen::DisplayPCScreen(void)
// attributes: thunk
int __fastcall CLoadingScreen::DisplayPCScreen(CLoadingScreen *this)
{
  return _ZN14CLoadingScreen15DisplayPCScreenEv(this);
}


// ============================================================

// Address: 0x192954
// Original: j__ZN14CLoadingScreen12LoadSplashesEhh
// Demangled: CLoadingScreen::LoadSplashes(uchar,uchar)
// attributes: thunk
int __fastcall CLoadingScreen::LoadSplashes(CLoadingScreen *this, unsigned __int8 a2, unsigned __int8 a3)
{
  return _ZN14CLoadingScreen12LoadSplashesEhh(this, a2, a3);
}


// ============================================================

// Address: 0x193824
// Original: j__ZN14CLoadingScreen12RenderSplashEv
// Demangled: CLoadingScreen::RenderSplash(void)
// attributes: thunk
int __fastcall CLoadingScreen::RenderSplash(CLoadingScreen *this)
{
  return _ZN14CLoadingScreen12RenderSplashEv(this);
}


// ============================================================

// Address: 0x195940
// Original: j__ZN14CLoadingScreen16SetLoadingBarMsgEPKcS1_
// Demangled: CLoadingScreen::SetLoadingBarMsg(char const*,char const*)
// attributes: thunk
int __fastcall CLoadingScreen::SetLoadingBarMsg(CLoadingScreen *this, const char *a2, const char *a3)
{
  return _ZN14CLoadingScreen16SetLoadingBarMsgEPKcS1_(this, a2, a3);
}


// ============================================================

// Address: 0x196494
// Original: j__ZN14CLoadingScreen8ShutdownEb
// Demangled: CLoadingScreen::Shutdown(bool)
// attributes: thunk
int __fastcall CLoadingScreen::Shutdown(CLoadingScreen *this, bool a2)
{
  return _ZN14CLoadingScreen8ShutdownEb(this, a2);
}


// ============================================================

// Address: 0x199698
// Original: j__ZN14CLoadingScreen15SetChunksToLoadEib
// Demangled: CLoadingScreen::SetChunksToLoad(int,bool)
// attributes: thunk
int __fastcall CLoadingScreen::SetChunksToLoad(CLoadingScreen *this, int a2, bool a3)
{
  return _ZN14CLoadingScreen15SetChunksToLoadEib(this, a2, a3);
}


// ============================================================

// Address: 0x19e848
// Original: j__ZN14CLoadingScreen14NewChunkLoadedEv
// Demangled: CLoadingScreen::NewChunkLoaded(void)
// attributes: thunk
int __fastcall CLoadingScreen::NewChunkLoaded(CLoadingScreen *this)
{
  return _ZN14CLoadingScreen14NewChunkLoadedEv(this);
}


// ============================================================

// Address: 0x19ed20
// Original: j__ZN14CLoadingScreen16RenderLoadingBarEv
// Demangled: CLoadingScreen::RenderLoadingBar(void)
// attributes: thunk
int __fastcall CLoadingScreen::RenderLoadingBar(CLoadingScreen *this)
{
  return _ZN14CLoadingScreen16RenderLoadingBarEv(this);
}


// ============================================================

// Address: 0x1a0b44
// Original: j__ZN14CLoadingScreen16DoPCScreenChangeEjj
// Demangled: CLoadingScreen::DoPCScreenChange(uint,uint)
// attributes: thunk
int __fastcall CLoadingScreen::DoPCScreenChange(CLoadingScreen *this, unsigned int a2, unsigned int a3)
{
  return _ZN14CLoadingScreen16DoPCScreenChangeEjj(this, a2, a3);
}


// ============================================================

// Address: 0x43ab30
// Original: _ZN14CLoadingScreen4InitEbb
// Demangled: CLoadingScreen::Init(bool,bool)
char *__fastcall CLoadingScreen::Init(CLoadingScreen *this, int a2, unsigned __int8 a3)
{
  char *result; // r0
  int v4; // s0

  result = (char *)(unsigned __int8)CLoadingScreen::m_bActive;
  if ( !CLoadingScreen::m_bActive )
  {
    if ( !a2 )
      CLoadingScreen::LoadSplashes(0, 0, a3);
    CLoadingScreen::m_currDisplayedSplash = -1;
    v4 = RsTimer();
    result = &CLoadingScreen::m_bActive;
    CLoadingScreen::m_bActive = 1;
    CLoadingScreen::m_timeSinceLastScreen = (float)(unsigned int)v4 / 1000.0;
  }
  return result;
}


// ============================================================

// Address: 0x43ab9c
// Original: _ZN14CLoadingScreen12LoadSplashesEhh
// Demangled: CLoadingScreen::LoadSplashes(uchar,uchar)
int __fastcall CLoadingScreen::LoadSplashes(CLoadingScreen *this, const char *a2, unsigned __int8 a3)
{
  int v4; // r4
  bool v5; // r3
  CTxdStore *v6; // r6
  const char *v7; // r2
  int v8; // r1
  CTxdStore *v9; // r0
  const char *v10; // r2
  int v11; // r5
  const char *v12; // r1
  TextureDatabaseRuntime *Database; // r10
  TextureDatabaseRuntime *v14; // r1
  int v15; // r6
  int v16; // r2
  unsigned int v17; // lr
  int v18; // r0
  unsigned int v19; // r12
  _QWORD *v20; // r3
  unsigned int v21; // r2
  __int64 v22; // d17
  CTxdStore *v23; // r0
  TextureDatabaseRuntime *v24; // r1
  const char *v25; // r1
  int v28; // [sp+Ah] [bp-4Eh] BYREF
  __int16 v29; // [sp+Eh] [bp-4Ah]
  char v30; // [sp+10h] [bp-48h]
  _BYTE v31[7]; // [sp+11h] [bp-47h]
  _DWORD v32[16]; // [sp+18h] [bp-40h] BYREF

  CFileMgr::SetDir((CFileMgr *)"MODELS\\TXD\\", a2);
  v4 = 0;
  v6 = (CTxdStore *)CTxdStore::AddTxdSlot((CTxdStore *)"loadscs", (const char *)&off_43AD58, 0, v5);
  CTxdStore::LoadTxd(v6, (int)"loadscs.txd", v7);
  v9 = (CTxdStore *)CTxdStore::AddRef(v6, v8);
  CTxdStore::PushCurrentTxd(v9);
  CTxdStore::SetCurrentTxd(v6, 0, v10);
  v11 = 6;
  v28 = 50462976;
  v29 = 1284;
  v30 = 6;
  Database = (TextureDatabaseRuntime *)TextureDatabaseRuntime::GetDatabase((TextureDatabaseRuntime *)"menu", v12);
  TextureDatabaseRuntime::Register(Database, v14);
  v15 = 7;
  do
  {
    if ( v4 )
      v16 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * (float)v15);
    else
      v16 = 0;
    --v15;
    v31[v4] = *((_BYTE *)&v28 + v16);
    if ( v16 < v15 )
    {
      v17 = 6 - v4 - v16;
      if ( v17 < 0x10 )
      {
        v18 = v16;
        goto LABEL_14;
      }
      v19 = v17 & 0xFFFFFFF0;
      if ( (v17 & 0xFFFFFFF0) == 0 )
      {
        v18 = v16;
        do
        {
LABEL_14:
          *((_BYTE *)&v28 + v18) = *((_BYTE *)&v28 + v18 + 1);
          ++v18;
        }
        while ( v4 + v18 != 6 );
        goto LABEL_15;
      }
      v18 = v16 + v19;
      v20 = (_QWORD *)((char *)&v28 + v16);
      v21 = (v11 - v16) & 0xFFFFFFF0;
      do
      {
        v21 -= 16;
        v22 = *(_QWORD *)((char *)v20 + 9);
        *v20 = *(_QWORD *)((char *)v20 + 1);
        v20[1] = v22;
        v20 += 2;
      }
      while ( v21 );
      if ( v17 != v19 )
        goto LABEL_14;
    }
LABEL_15:
    ++v4;
    --v11;
  }
  while ( v4 != 7 );
  v31[6] = v28;
  if ( this )
  {
    if ( a2 == (_BYTE *)&stderr + 1 )
    {
      strcpy((char *)v32, "nvidia");
      v23 = (CTxdStore *)(elf_hash_bucket + 24685);
    }
    else
    {
      v23 = (CTxdStore *)&unk_786165;
      v32[0] = &unk_786165;
    }
  }
  else
  {
    CSprite2d::SetTexture((CSprite2d *)&CLoadingScreen::m_aSplashes, 0);
    sub_5E6BC0(v32, "mobilesc%d", v31[1]);
    v23 = (CTxdStore *)CSprite2d::SetTexture((CSprite2d *)&dword_9920A8, (char *)v32);
  }
  CTxdStore::PopCurrentTxd(v23);
  TextureDatabaseRuntime::Unregister(Database, v24);
  CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, v25);
  return _stack_chk_guard - v32[5];
}


// ============================================================

// Address: 0x43ad84
// Original: _ZN14CLoadingScreen12GetClockTimeEb
// Demangled: CLoadingScreen::GetClockTime(bool)
int __fastcall CLoadingScreen::GetClockTime(CLoadingScreen *this, bool a2)
{
  float v3; // s0
  float v4; // s2

  v3 = (float)(unsigned int)RsTimer() / 1000.0;
  v4 = v3 - CLoadingScreen::m_PauseTime;
  if ( this )
    v4 = v3;
  return LODWORD(v4);
}


// ============================================================

// Address: 0x43adc4
// Original: _ZN14CLoadingScreen8ShutdownEb
// Demangled: CLoadingScreen::Shutdown(bool)
int __fastcall CLoadingScreen::Shutdown(CLoadingScreen *this, bool a2)
{
  const char *v2; // r1
  int v3; // r1
  CTxdStore *TxdSlot; // r4
  int result; // r0
  int v6; // r1

  v2 = &CLoadingScreen::m_bActive;
  CLoadingScreen::m_bActive = 0;
  if ( CLoadingScreen::m_aSplashes )
    CSprite2d::Delete((CSprite2d *)&CLoadingScreen::m_aSplashes);
  if ( dword_9920A8 )
    CSprite2d::Delete((CSprite2d *)&dword_9920A8);
  TxdSlot = (CTxdStore *)CTxdStore::FindTxdSlot((CTxdStore *)"loadscs", v2);
  result = (int)TxdSlot + 1;
  if ( TxdSlot != (CTxdStore *)-1 )
  {
    CTxdStore::RemoveTxd(TxdSlot, v3);
    return j_CTxdStore::RemoveTxdSlot(TxdSlot, v6);
  }
  return result;
}


// ============================================================

// Address: 0x43ae34
// Original: _ZN14CLoadingScreen5PauseEv
// Demangled: CLoadingScreen::Pause(void)
void __fastcall CLoadingScreen::Pause(CLoadingScreen *this)
{
  ;
}


// ============================================================

// Address: 0x43ae38
// Original: _ZN14CLoadingScreen8ContinueEv
// Demangled: CLoadingScreen::Continue(void)
float *__fastcall CLoadingScreen::Continue(CLoadingScreen *this)
{
  float *result; // r0
  int v2; // s0

  result = (float *)(unsigned __int8)CLoadingScreen::m_bActive;
  if ( CLoadingScreen::m_bActive )
  {
    result = 0;
    CLoadingScreen::m_bWantToPause = 0;
    if ( CLoadingScreen::m_bPaused )
    {
      CLoadingScreen::m_bPaused = 0;
      v2 = RsTimer();
      result = &CLoadingScreen::m_PauseTime;
      CLoadingScreen::m_PauseTime = CLoadingScreen::m_PauseTime
                                  + (float)((float)((float)(unsigned int)v2 / 1000.0)
                                          - CLoadingScreen::m_ClockTimeOnPause);
    }
  }
  return result;
}


// ============================================================

// Address: 0x43aebc
// Original: _ZN14CLoadingScreen14NewChunkLoadedEv
// Demangled: CLoadingScreen::NewChunkLoaded(void)
int *__fastcall CLoadingScreen::NewChunkLoaded(CLoadingScreen *this)
{
  int *result; // r0
  float v2; // s0

  result = (int *)(unsigned __int8)CLoadingScreen::m_bActive;
  if ( CLoadingScreen::m_bActive )
  {
    result = &CLoadingScreen::m_numChunksLoaded;
    v2 = (float)CLoadingScreen::m_numChunksLoaded * 99.999;
    CLoadingScreen::m_chunkBarAppeared = 1;
    ++CLoadingScreen::m_numChunksLoaded;
    *(float *)&CLoadingScreen::m_PercentLoaded = v2 / (float)CLoadingScreen::m_nChunksToLoad;
  }
  return result;
}


// ============================================================

// Address: 0x43af28
// Original: _ZN14CLoadingScreen15DisplayPCScreenEv
// Demangled: CLoadingScreen::DisplayPCScreen(void)
int __fastcall CLoadingScreen::DisplayPCScreen(CLoadingScreen *this)
{
  int result; // r0
  CLoadingScreen *v2; // r0

  result = RwCameraBeginUpdate(dword_9FC93C);
  if ( result )
  {
    DefinedState2d();
    RwRenderStateSet(12, 1);
    v2 = (CLoadingScreen *)emu_DropAltRenderTarget();
    CLoadingScreen::RenderSplash(v2);
    if ( CLoadingScreen::m_currDisplayedSplash >= 1 )
    {
      if ( CLoadingScreen::m_currDisplayedSplash == 1 )
      {
        if ( !CLoadingScreen::m_bFading )
          CLoadingScreen::RenderLoadingBar((CLoadingScreen *)(unsigned __int8)CLoadingScreen::m_bFading);
      }
      else
      {
        CLoadingScreen::RenderLoadingBar((CLoadingScreen *)CLoadingScreen::m_currDisplayedSplash);
      }
    }
    RwCameraEndUpdate();
    return sub_18EEB0();
  }
  return result;
}


// ============================================================

// Address: 0x43afa0
// Original: _ZN14CLoadingScreen12RenderSplashEv
// Demangled: CLoadingScreen::RenderSplash(void)
int __fastcall CLoadingScreen::RenderSplash(CLoadingScreen *this)
{
  bool v1; // zf
  float v2; // s0
  float v3; // s0
  float v4; // s0
  float v5; // s0
  float v6; // s4
  float v7; // s2
  int result; // r0
  unsigned int v9; // [sp+8h] [bp-20h] BYREF
  _BYTE v10[4]; // [sp+Ch] [bp-1Ch] BYREF
  float v11; // [sp+10h] [bp-18h] BYREF
  float v12; // [sp+14h] [bp-14h]
  float v13; // [sp+18h] [bp-10h]
  float v14; // [sp+1Ch] [bp-Ch]

  CSprite2d::InitPerFrame(this);
  v11 = 0.0;
  v1 = CLoadingScreen::m_currDisplayedSplash == 0;
  v14 = 0.0;
  v13 = (float)dword_9FC900;
  v12 = (float)dword_9FC904;
  if ( CLoadingScreen::m_currDisplayedSplash )
    v1 = dword_9920A8 == 0;
  if ( v1 )
  {
    CLoadingScreen::LoadSplashes(0, 0, 0);
    CLoadingScreen::m_currDisplayedSplash = 1;
  }
  CRGBA::CRGBA((CRGBA *)v10, 0, 0, 0, 0xFFu);
  CSprite2d::DrawRect();
  if ( CLoadingScreen::m_currDisplayedSplash
    && (v2 = (float)dword_9FC900 / (float)dword_9FC904, v2 >= 1.3333)
    && v2 <= 1.8889 )
  {
    v9 = -1;
    sscanf((const char *)(CLoadingScreen::m_aSplashes[CLoadingScreen::m_currDisplayedSplash] + 16), "mobilesc%d", &v9);
    if ( v9 > 5 )
      v3 = 0.5;
    else
      v3 = *(float *)&dword_43B190[v9];
    v6 = fabsf(v12 - v14);
    v7 = v6 + (float)((float)(fabsf(v13 - v11) * -3.0) * 0.25);
    v14 = v3 * v7;
    v12 = v6 + (float)((float)(v3 + -1.0) * v7);
  }
  else
  {
    v4 = fabsf(v12 - v14);
    v5 = (float)(v4 + v4) / 3.0;
    v11 = (float)((float)dword_9FC900 * 0.5) - v5;
    v13 = (float)((float)dword_9FC900 * 0.5) + v5;
  }
  CRGBA::CRGBA((CRGBA *)&v9, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  RwRenderStateSet(2, 3);
  emu_GammaSet(0);
  result = (unsigned __int8)CLoadingScreen::m_bReadyToDelete;
  if ( !CLoadingScreen::m_bReadyToDelete )
    return CSprite2d::Draw(&CLoadingScreen::m_aSplashes[CLoadingScreen::m_currDisplayedSplash], &v11, &v9);
  return result;
}


// ============================================================

// Address: 0x43b1b4
// Original: _ZN14CLoadingScreen15DoPCTitleFadeInEv
// Demangled: CLoadingScreen::DoPCTitleFadeIn(void)
char *__fastcall CLoadingScreen::DoPCTitleFadeIn(CLoadingScreen *this)
{
  unsigned int v1; // r4
  char *result; // r0

  v1 = 0;
  CLoadingScreen::m_currDisplayedSplash = 0;
  CLoadingScreen::m_bFadeInNextSplashFromBlack = 1;
  CLoadingScreen::m_bFading = 1;
  do
  {
    CLoadingScreen::m_FadeAlpha = (unsigned int)(float)((float)v1 * 5.0);
    CLoadingScreen::DisplayPCScreen((CLoadingScreen *)(float)((float)v1++ * 5.0));
  }
  while ( v1 != 50 );
  CLoadingScreen::m_FadeAlpha = -1;
  CLoadingScreen::DisplayPCScreen((CLoadingScreen *)&CLoadingScreen::m_FadeAlpha);
  result = &CLoadingScreen::m_bFading;
  CLoadingScreen::m_bFading = 0;
  return result;
}


// ============================================================

// Address: 0x43b238
// Original: _ZN14CLoadingScreen16DoPCTitleFadeOutEv
// Demangled: CLoadingScreen::DoPCTitleFadeOut(void)
char *__fastcall CLoadingScreen::DoPCTitleFadeOut(CLoadingScreen *this)
{
  int v1; // r4
  CLoadingScreen *v2; // r0
  unsigned int v3; // r4
  char *result; // r0

  v1 = 200;
  CLoadingScreen::m_currDisplayedSplash = 0;
  CLoadingScreen::m_bFadeInNextSplashFromBlack = 1;
  CLoadingScreen::m_bFading = 1;
  v2 = (CLoadingScreen *)CLoadingScreen::m_FadeAlpha;
  do
  {
    CLoadingScreen::m_FadeAlpha = -1;
    v2 = (CLoadingScreen *)CLoadingScreen::DisplayPCScreen(v2);
    --v1;
  }
  while ( v1 );
  v3 = 50;
  do
  {
    CLoadingScreen::m_FadeAlpha = (unsigned int)(float)((float)v3 * 5.0);
    CLoadingScreen::DisplayPCScreen((CLoadingScreen *)(float)((float)v3-- * 5.0));
  }
  while ( v3 );
  result = &CLoadingScreen::m_bFadeInNextSplashFromBlack;
  CLoadingScreen::m_bFadeInNextSplashFromBlack = 1;
  return result;
}


// ============================================================

// Address: 0x43b2cc
// Original: _ZN14CLoadingScreen15SetChunksToLoadEib
// Demangled: CLoadingScreen::SetChunksToLoad(int,bool)
int __fastcall CLoadingScreen::SetChunksToLoad(int this, int a2, bool a3)
{
  if ( a2 )
    this += 140;
  CLoadingScreen::m_nChunksToLoad = this;
  return this;
}


// ============================================================

// Address: 0x43b2e0
// Original: _ZN14CLoadingScreen16DoPCScreenChangeEjj
// Demangled: CLoadingScreen::DoPCScreenChange(uint,uint)
int __fastcall CLoadingScreen::DoPCScreenChange(CLoadingScreen *this, unsigned int a2, unsigned int a3)
{
  int result; // r0
  const char *v5; // r1
  int v6; // r1
  CTxdStore *TxdSlot; // r4
  int v8; // r1

  CLoadingScreen::m_bActive = 1;
  CLoadingScreen::m_bFading = 1;
  CLoadingScreen::m_PercentLoaded = 0;
  if ( this )
  {
    CLoadingScreen::m_bFadeOutCurrSplashToBlack = 1;
    CLoadingScreen::m_nChunksToLoad = 140;
  }
  else
  {
    CLoadingScreen::m_nChunksToLoad = 140;
    CLoadingScreen::m_numChunksLoaded = -1;
    if ( a2 && CLoadingScreen::m_currDisplayedSplash <= 0 )
      ++CLoadingScreen::m_currDisplayedSplash;
  }
  CLoadingScreen::m_FadeAlpha = -1;
  CLoadingScreen::DisplayPCScreen((CLoadingScreen *)&CLoadingScreen::m_FadeAlpha);
  result = 0;
  CLoadingScreen::m_bFading = 0;
  CLoadingScreen::m_bFadeInNextSplashFromBlack = 0;
  if ( this )
  {
    v5 = (const char *)CLoadingScreen::m_aSplashes[0];
    CLoadingScreen::m_bActive = 0;
    if ( CLoadingScreen::m_aSplashes[0] )
      CSprite2d::Delete((CSprite2d *)CLoadingScreen::m_aSplashes);
    if ( dword_9920A8 )
      CSprite2d::Delete((CSprite2d *)&dword_9920A8);
    TxdSlot = (CTxdStore *)CTxdStore::FindTxdSlot((CTxdStore *)"loadscs", v5);
    result = (int)TxdSlot + 1;
    if ( TxdSlot != (CTxdStore *)-1 )
    {
      CTxdStore::RemoveTxd(TxdSlot, v6);
      return j_CTxdStore::RemoveTxdSlot(TxdSlot, v8);
    }
  }
  return result;
}


// ============================================================

// Address: 0x43b410
// Original: _ZN14CLoadingScreen16RenderLoadingBarEv
// Demangled: CLoadingScreen::RenderLoadingBar(void)
int *__fastcall CLoadingScreen::RenderLoadingBar(CLoadingScreen *this)
{
  int v1; // r5
  int v2; // r6
  int v3; // r4
  int *result; // r0
  float v5; // s0
  _BYTE v6[4]; // [sp+1Ch] [bp-54h] BYREF
  unsigned int v7; // [sp+20h] [bp-50h]
  _BYTE v8[76]; // [sp+24h] [bp-4Ch] BYREF

  CHudColours::GetRGBA((CHudColours *)v8, (unsigned __int8)HudColour);
  v1 = v8[0];
  CHudColours::GetRGBA((CHudColours *)v8, (unsigned __int8)HudColour);
  v2 = v8[1];
  CHudColours::GetRGBA((CHudColours *)v8, (unsigned __int8)HudColour);
  v3 = v8[2];
  CWidget::DrawTitleSafeArea((CWidget *)&RsGlobal);
  result = &CLoadingScreen::m_PercentLoaded;
  if ( *(float *)&CLoadingScreen::m_PercentLoaded <= 100.0 )
  {
    result = (int *)(unsigned __int8)CLoadingScreen::m_bLegalScreen;
    if ( !CLoadingScreen::m_bLegalScreen && *(float *)&CLoadingScreen::m_PercentLoaded >= 0.0 )
    {
      v7 = v1 | (v2 << 8) | (v3 << 16) | 0xFF000000;
      CRGBA::CRGBA((CRGBA *)v6, 0, 0, 0, 0);
      CSprite2d::DrawBarChart();
      result = (int *)&CLoadingScreen::m_TimeBarAppeared;
      if ( CLoadingScreen::m_TimeBarAppeared == 0.0 )
      {
        v5 = (float)((float)(unsigned int)RsTimer() / 1000.0) - CLoadingScreen::m_PauseTime;
        result = (int *)&CLoadingScreen::m_TimeBarAppeared;
        CLoadingScreen::m_TimeBarAppeared = v5;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x43b5ac
// Original: _ZN14CLoadingScreen17DisplayNextSplashEv
// Demangled: CLoadingScreen::DisplayNextSplash(void)
int *__fastcall CLoadingScreen::DisplayNextSplash(CLoadingScreen *this)
{
  int *result; // r0
  CLoadingScreen *v2; // r0
  CLoadingScreen *v3; // r0

  result = (int *)CLoadingScreen::m_currDisplayedSplash;
  if ( CLoadingScreen::m_currDisplayedSplash != 1 )
  {
    result = (int *)(unsigned __int8)CLoadingScreen::m_bFading;
    if ( !CLoadingScreen::m_bFading )
    {
      CLoadingScreen::m_FadeAlpha = -1;
      if ( RwCameraBeginUpdate(dword_9FC93C) )
      {
        v2 = (CLoadingScreen *)DefinedState2d();
        v3 = (CLoadingScreen *)CLoadingScreen::RenderSplash(v2);
        CLoadingScreen::RenderLoadingBar(v3);
        RwCameraEndUpdate();
        RsCameraShowRaster(dword_9FC93C);
      }
      result = &CLoadingScreen::m_currDisplayedSplash;
      ++CLoadingScreen::m_currDisplayedSplash;
    }
  }
  return result;
}


// ============================================================

// Address: 0x43b62c
// Original: _ZN14CLoadingScreen14DisplayMessageEPKc
// Demangled: CLoadingScreen::DisplayMessage(char const*)
char *__fastcall CLoadingScreen::DisplayMessage(CLoadingScreen *this, const char *a2)
{
  return j_strcpy(CLoadingScreen::m_PopUpMessage, (const char *)this);
}


// ============================================================

// Address: 0x43b63c
// Original: _ZN14CLoadingScreen16SetLoadingBarMsgEPKcS1_
// Demangled: CLoadingScreen::SetLoadingBarMsg(char const*,char const*)
__int16 *__fastcall CLoadingScreen::SetLoadingBarMsg(CLoadingScreen *this, const char *a2, const char *a3)
{
  __int16 *result; // r0

  if ( this )
  {
    AsciiToGxtChar((const char *)this, CLoadingScreen::m_LoadingGxtMsg1);
    if ( a2 )
      return (__int16 *)sub_19642C(a2, CLoadingScreen::m_LoadingGxtMsg2);
  }
  else
  {
    CLoadingScreen::m_LoadingGxtMsg1[0] = 0;
    if ( a2 )
      return (__int16 *)sub_19642C(a2, CLoadingScreen::m_LoadingGxtMsg2);
  }
  result = (__int16 *)CLoadingScreen::m_LoadingGxtMsg2;
  CLoadingScreen::m_LoadingGxtMsg2[0] = 0;
  return result;
}


// ============================================================

// Address: 0x43b68c
// Original: _ZN14CLoadingScreen6UpdateEv
// Demangled: CLoadingScreen::Update(void)
int __fastcall CLoadingScreen::Update(CLoadingScreen *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d3
  int v3; // r0
  float v4; // s0
  float v5; // s2
  unsigned int v6; // r1
  bool v7; // zf
  int result; // r0
  float v9; // s0
  float v10; // s0

  if ( CLoadingScreen::m_TimeBarAppeared > 0.0 )
  {
    v2.n64_u32[0] = 1120403456;
    v1.n64_f32[0] = (float)((float)((float)((float)((float)(unsigned int)RsTimer() / 1000.0)
                                          - CLoadingScreen::m_PauseTime)
                                  - CLoadingScreen::m_TimeBarAppeared)
                          * 100.0)
                  / (float)(36.0 - (float)(CLoadingScreen::m_TimeBarAppeared - CLoadingScreen::m_TimeStartedLoading));
    CLoadingScreen::m_PercentLoaded = vmin_f32(v1, v2).n64_u32[0];
  }
  if ( CLoadingScreen::m_bReadyToDelete )
    goto LABEL_4;
  if ( CLoadingScreen::m_bLegalScreen
    && (float)((float)((float)((float)(unsigned int)RsTimer() / 1000.0) - CLoadingScreen::m_PauseTime)
             - CLoadingScreen::m_TimeStartedLoading) > 5.5 )
  {
    CLoadingScreen::DisplayNextSplash((CLoadingScreen *)&CLoadingScreen::m_TimeStartedLoading);
  }
  if ( !CLoadingScreen::m_bSignalDelete )
    goto LABEL_4;
  v3 = (unsigned __int8)CLoadingScreen::m_bFading;
  if ( !CLoadingScreen::m_bFading && *(float *)&CLoadingScreen::m_PercentLoaded >= 100.0 )
  {
    CLoadingScreen::m_bFadeOutCurrSplashToBlack = 1;
    CLoadingScreen::m_bReadyToDelete = 1;
    CLoadingScreen::m_bFading = 1;
    CLoadingScreen::m_FadeAlpha = 0;
    CLoadingScreen::m_StartFadeTime = (float)((float)(unsigned int)RsTimer() / 1000.0) - CLoadingScreen::m_PauseTime;
LABEL_4:
    v3 = (unsigned __int8)CLoadingScreen::m_bFading;
  }
  if ( !v3 )
  {
    LOBYTE(v6) = -1;
LABEL_25:
    CLoadingScreen::m_FadeAlpha = v6;
    goto LABEL_26;
  }
  v4 = (float)((float)((float)(unsigned int)RsTimer() / 1000.0) - CLoadingScreen::m_PauseTime)
     - CLoadingScreen::m_StartFadeTime;
  if ( CLoadingScreen::m_currDisplayedSplash < 0 )
  {
    v5 = 2.0;
  }
  else
  {
    v5 = 0.6;
    if ( !(((unsigned __int8)CLoadingScreen::m_bLegalScreen | (unsigned __int8)CLoadingScreen::m_bFadeInNextSplashFromBlack) << 24) )
      v5 = 2.0;
  }
  if ( v4 <= v5 )
  {
    v6 = (unsigned int)(float)((float)(v4 / v5) * 255.0);
    goto LABEL_25;
  }
  CLoadingScreen::m_FadeAlpha = -1;
  v7 = CLoadingScreen::m_bLegalScreen == 0;
  CLoadingScreen::m_bFading = 0;
  if ( CLoadingScreen::m_bLegalScreen )
    v7 = CLoadingScreen::m_bFadeOutCurrSplashToBlack == 0;
  if ( v7 )
  {
    CLoadingScreen::m_bFadeOutCurrSplashToBlack = 0;
    CLoadingScreen::m_bFadeInNextSplashFromBlack = 0;
  }
  else
  {
    CLoadingScreen::m_bFadeInNextSplashFromBlack = 1;
    CLoadingScreen::m_bFadeOutCurrSplashToBlack = 0;
    CLoadingScreen::m_bLegalScreen = 0;
    CLoadingScreen::DisplayNextSplash(0);
  }
LABEL_26:
  result = (unsigned __int8)CLoadingScreen::m_bLegalScreen;
  if ( CLoadingScreen::m_bLegalScreen )
    return result;
  if ( CLoadingScreen::m_bFadeInNextSplashFromBlack )
  {
    v9 = (float)(unsigned __int8)CLoadingScreen::m_FadeAlpha;
  }
  else
  {
    if ( !CLoadingScreen::m_bFadeOutCurrSplashToBlack )
    {
      v10 = 1.0;
      return sub_18BBCC((CAudioEngine *)&AudioEngine, v10);
    }
    v9 = 255.0 - (float)(unsigned __int8)CLoadingScreen::m_FadeAlpha;
  }
  v10 = v9 / 255.0;
  return sub_18BBCC((CAudioEngine *)&AudioEngine, v10);
}


// ============================================================

// Address: 0x43ba10
// Original: _ZN14CLoadingScreen11StartFadingEv
// Demangled: CLoadingScreen::StartFading(void)
_DWORD *__fastcall CLoadingScreen::StartFading(CLoadingScreen *this)
{
  float v1; // s0
  _DWORD *result; // r0

  CLoadingScreen::m_FadeAlpha = 0;
  CLoadingScreen::m_bFading = 1;
  v1 = (float)((float)(unsigned int)RsTimer() / 1000.0) - CLoadingScreen::m_PauseTime;
  result = &CLoadingScreen::m_StartFadeTime;
  CLoadingScreen::m_StartFadeTime = LODWORD(v1);
  return result;
}


// ============================================================


// Address: 0x190e2c
// Original: j__ZN11CPlayerSkin8ShutdownEv
// Demangled: CPlayerSkin::Shutdown(void)
// attributes: thunk
int __fastcall CPlayerSkin::Shutdown(CPlayerSkin *this)
{
  return _ZN11CPlayerSkin8ShutdownEv(this);
}


// ============================================================

// Address: 0x19d2d0
// Original: j__ZN11CPlayerSkin14GetSkinTextureEPKc
// Demangled: CPlayerSkin::GetSkinTexture(char const*)
// attributes: thunk
int __fastcall CPlayerSkin::GetSkinTexture(CPlayerSkin *this, const char *a2)
{
  return _ZN11CPlayerSkin14GetSkinTextureEPKc(this, a2);
}


// ============================================================

// Address: 0x19d668
// Original: j__ZN11CPlayerSkin10InitialiseEv
// Demangled: CPlayerSkin::Initialise(void)
// attributes: thunk
int __fastcall CPlayerSkin::Initialise(CPlayerSkin *this)
{
  return _ZN11CPlayerSkin10InitialiseEv(this);
}


// ============================================================

// Address: 0x5b1118
// Original: _ZN11CPlayerSkin10InitialiseEv
// Demangled: CPlayerSkin::Initialise(void)
int __fastcall CPlayerSkin::Initialise(CPlayerSkin *this, int a2, int a3, bool a4)
{
  int v4; // r1

  CPlayerSkin::m_txdSlot = CTxdStore::AddTxdSlot((CTxdStore *)"skin", "player", 0, a4);
  CTxdStore::Create((CTxdStore *)CPlayerSkin::m_txdSlot, (int)&CPlayerSkin::m_txdSlot);
  return j_CTxdStore::AddRef((CTxdStore *)CPlayerSkin::m_txdSlot, v4);
}


// ============================================================

// Address: 0x5b1150
// Original: _ZN11CPlayerSkin8ShutdownEv
// Demangled: CPlayerSkin::Shutdown(void)
int __fastcall CPlayerSkin::Shutdown(CPlayerSkin *this, int a2)
{
  return j_CTxdStore::RemoveTxdSlot((CTxdStore *)CPlayerSkin::m_txdSlot, a2);
}


// ============================================================

// Address: 0x5b1160
// Original: _ZN11CPlayerSkin14GetSkinTextureEPKc
// Demangled: CPlayerSkin::GetSkinTexture(char const*)
CTxdStore *__fastcall CPlayerSkin::GetSkinTexture(CPlayerSkin *this, const char *a2)
{
  const char *v3; // r2
  CTxdStore *v4; // r5
  int v6; // r0
  bool v7; // zf

  CTxdStore::PushCurrentTxd(this);
  CTxdStore::SetCurrentTxd((CTxdStore *)CPlayerSkin::m_txdSlot, 0, v3);
  v4 = (CTxdStore *)RwTextureRead((const char *)this, 0);
  CTxdStore::PopCurrentTxd(v4);
  if ( v4 )
    return v4;
  v6 = strcmp((const char *)this, "$$\"\"");
  v7 = v6 == 0;
  if ( v6 )
    v7 = *(_BYTE *)this == 0;
  if ( v7 )
    sub_5E6BC0(&gString, "models\\generic\\player.bmp");
  else
    sub_5E6BC0(&gString, "skins\\%s.bmp", this);
  return 0;
}


// ============================================================

// Address: 0x5b11f8
// Original: _ZN11CPlayerSkin21BeginFrontendSkinEditEv
// Demangled: CPlayerSkin::BeginFrontendSkinEdit(void)
void __fastcall CPlayerSkin::BeginFrontendSkinEdit(CPlayerSkin *this)
{
  ;
}


// ============================================================

// Address: 0x5b11fa
// Original: _ZN11CPlayerSkin19EndFrontendSkinEditEv
// Demangled: CPlayerSkin::EndFrontendSkinEdit(void)
void __fastcall CPlayerSkin::EndFrontendSkinEdit(CPlayerSkin *this)
{
  ;
}


// ============================================================

// Address: 0x5b11fc
// Original: _ZN11CPlayerSkin22RenderFrontendSkinEditEv
// Demangled: CPlayerSkin::RenderFrontendSkinEdit(void)
int __fastcall CPlayerSkin::RenderFrontendSkinEdit(CPlayerSkin *this)
{
  float v1; // s0

  if ( (unsigned int)(CTimer::m_snTimeInMillisecondsPauseMode - dword_A46E6C) >= 8 )
  {
    v1 = *(float *)&dword_A46E68 + 2.0;
    if ( (float)(*(float *)&dword_A46E68 + 2.0) > 360.0 )
      v1 = (float)(*(float *)&dword_A46E68 + 2.0) + -360.0;
    dword_A46E6C = CTimer::m_snTimeInMillisecondsPauseMode;
    dword_A46E68 = LODWORD(v1);
  }
  RwFrameTransform();
  RwFrameTranslate();
  RwFrameRotate();
  RwFrameUpdateObjects(65793);
  SetAmbientColours();
  return RpClumpRender();
}


// ============================================================

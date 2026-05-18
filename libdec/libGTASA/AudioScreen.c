
// Address: 0x18b988
// Original: j__ZN11AudioScreen14RadioSelectionC2Ev
// Demangled: AudioScreen::RadioSelection::RadioSelection(void)
// attributes: thunk
int __fastcall AudioScreen::RadioSelection::RadioSelection(AudioScreen::RadioSelection *this)
{
  return _ZN11AudioScreen14RadioSelectionC2Ev(this);
}


// ============================================================

// Address: 0x18e3d0
// Original: j__ZN11AudioScreenC2Ev
// Demangled: AudioScreen::AudioScreen(void)
// attributes: thunk
void __fastcall AudioScreen::AudioScreen(AudioScreen *this)
{
  _ZN11AudioScreenC2Ev(this);
}


// ============================================================

// Address: 0x19692c
// Original: j__ZN11AudioScreen14RadioSelectionD2Ev
// Demangled: AudioScreen::RadioSelection::~RadioSelection()
// attributes: thunk
void __fastcall AudioScreen::RadioSelection::~RadioSelection(AudioScreen::RadioSelection *this)
{
  _ZN11AudioScreen14RadioSelectionD2Ev(this);
}


// ============================================================

// Address: 0x2a4c34
// Original: _ZN11AudioScreenC2Ev
// Demangled: AudioScreen::AudioScreen(void)
void __fastcall AudioScreen::AudioScreen(AudioScreen *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  SelectScreen::MenuSelection *v4; // r0

  CharSelectScreen::CharSelectScreen(this, "FEH_AUD", 1);
  *(_DWORD *)this = &off_66292C;
  v2 = (_DWORD *)operator new(0x1Cu);
  v2[1] = dword_6E0554;
  v2[2] = 11;
  *(_DWORD *)((char *)v2 + 21) = 0;
  *(_DWORD *)((char *)v2 + 17) = 0;
  v2[3] = 0;
  v2[4] = 0;
  *v2 = &off_662848;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v2);
  v3 = (_DWORD *)operator new(0x1Cu);
  v3[1] = dword_6E0814;
  v3[2] = 33;
  *(_DWORD *)((char *)v3 + 21) = 0;
  *(_DWORD *)((char *)v3 + 17) = 0;
  v3[3] = 0;
  v3[4] = 0;
  *v3 = &off_662848;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v3);
  v4 = (SelectScreen::MenuSelection *)operator new(0x10u);
  *(_DWORD *)v4 = &off_66281C;
  *((_DWORD *)v4 + 1) = "MOB_RTD";
  *((_DWORD *)v4 + 2) = AudioScreen::OnRestoreDefaults;
  *((_DWORD *)v4 + 3) = 0;
  SelectScreen::AddItem(this, v4);
  *((_BYTE *)this + 48) = 1;
  if ( dword_6E05BC <= 12 )
  {
    CAudioEngine::StartRadio((CAudioEngine *)&AudioEngine, dword_6E05BC, 0);
    CAudioEngine::Service((CAudioEngine *)&AudioEngine);
    CAudioEngine::StopRadio();
    CAudioEngine::Service((CAudioEngine *)&AudioEngine);
    CAudioEngine::RetuneRadio((CAudioEngine *)&AudioEngine, dword_6E05BC);
  }
}


// ============================================================

// Address: 0x2a4dd4
// Original: _ZN11AudioScreen14RadioSelectionC2Ev
// Demangled: AudioScreen::RadioSelection::RadioSelection(void)
AudioScreen::RadioSelection *__fastcall AudioScreen::RadioSelection::RadioSelection(AudioScreen::RadioSelection *this)
{
  TextureDatabaseRuntime *Database; // r0
  TextureDatabaseRuntime *v3; // r1
  const char *v4; // r1
  int Texture; // r0
  const char *v6; // r1
  int v7; // r0
  const char *v8; // r1
  int v9; // r0
  const char *v10; // r1
  int v11; // r0
  const char *v12; // r1
  int v13; // r0
  const char *v14; // r1
  int v15; // r0
  const char *v16; // r1
  int v17; // r0
  const char *v18; // r1
  int v19; // r0
  const char *v20; // r1
  int v21; // r0
  const char *v22; // r1
  int v23; // r0
  const char *v24; // r1
  int v25; // r0

  *((_DWORD *)this + 1) = dword_6E05B4;
  *((_DWORD *)this + 2) = 14;
  *(_DWORD *)((char *)this + 21) = 0;
  *(_DWORD *)((char *)this + 17) = 0;
  *(_DWORD *)this = &off_662988;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  Database = (TextureDatabaseRuntime *)TextureDatabaseRuntime::GetDatabase(
                                         (TextureDatabaseRuntime *)&off_2A4EB8,
                                         `vtable for'AudioScreen::RadioSelection);
  TextureDatabaseRuntime::Register(Database, v3);
  Texture = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"radio_playback", v4);
  v6 = (const char *)(*(_DWORD *)(Texture + 84) + 1);
  *(_DWORD *)(Texture + 84) = v6;
  *((_DWORD *)this + 7) = Texture;
  v7 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"radio_krose", v6);
  v8 = (const char *)(*(_DWORD *)(v7 + 84) + 1);
  *(_DWORD *)(v7 + 84) = v8;
  *((_DWORD *)this + 8) = v7;
  v9 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"radio_KDST", v8);
  v10 = (const char *)(*(_DWORD *)(v9 + 84) + 1);
  *(_DWORD *)(v9 + 84) = v10;
  *((_DWORD *)this + 9) = v9;
  v11 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"radio_bounce", v10);
  v12 = (const char *)(*(_DWORD *)(v11 + 84) + 1);
  *(_DWORD *)(v11 + 84) = v12;
  *((_DWORD *)this + 10) = v11;
  v13 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"radio_SFUR", v12);
  v14 = (const char *)(*(_DWORD *)(v13 + 84) + 1);
  *(_DWORD *)(v13 + 84) = v14;
  *((_DWORD *)this + 11) = v13;
  v15 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"radio_RLS", v14);
  v16 = (const char *)(*(_DWORD *)(v15 + 84) + 1);
  *(_DWORD *)(v15 + 84) = v16;
  *((_DWORD *)this + 12) = v15;
  v17 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"radio_RADIOX", v16);
  v18 = (const char *)(*(_DWORD *)(v17 + 84) + 1);
  *(_DWORD *)(v17 + 84) = v18;
  *((_DWORD *)this + 13) = v17;
  v19 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"radio_csr", v18);
  v20 = (const char *)(*(_DWORD *)(v19 + 84) + 1);
  *(_DWORD *)(v19 + 84) = v20;
  *((_DWORD *)this + 14) = v19;
  v21 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"radio_kjah", v20);
  v22 = (const char *)(*(_DWORD *)(v21 + 84) + 1);
  *(_DWORD *)(v21 + 84) = v22;
  *((_DWORD *)this + 15) = v21;
  v23 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"radio_mastersounds", v22);
  v24 = (const char *)(*(_DWORD *)(v23 + 84) + 1);
  *(_DWORD *)(v23 + 84) = v24;
  *((_DWORD *)this + 16) = v23;
  v25 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"radio_WCTR", v24);
  ++*(_DWORD *)(v25 + 84);
  *((_DWORD *)this + 17) = v25;
  *((_DWORD *)this + 18) = 0;
  return this;
}


// ============================================================

// Address: 0x2a4f54
// Original: _ZN11AudioScreen17OnRestoreDefaultsEP12SelectScreeni
// Demangled: AudioScreen::OnRestoreDefaults(SelectScreen *,int)
int __fastcall AudioScreen::OnRestoreDefaults(AudioScreen *this, SelectScreen *a2, int a3)
{
  SelectScreen::OnRestoreDefaults(this, a2, a3);
  Menu_ApplyAudioSettings();
  return j_CAudioEngine::RetuneRadio((CAudioEngine *)&AudioEngine, dword_6E05BC);
}


// ============================================================

// Address: 0x2a4f80
// Original: _ZN11AudioScreenD0Ev
// Demangled: AudioScreen::~AudioScreen()
void __fastcall AudioScreen::~AudioScreen(AudioScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2a4f90
// Original: _ZN11AudioScreen6UpdateEf
// Demangled: AudioScreen::Update(float)
// attributes: thunk
int __fastcall AudioScreen::Update(CharSelectScreen *this, float a2)
{
  return j_CharSelectScreen::Update(this, a2);
}


// ============================================================

// Address: 0x2a4f94
// Original: _ZN11AudioScreen6RenderEi
// Demangled: AudioScreen::Render(int)
// attributes: thunk
int __fastcall AudioScreen::Render(CharSelectScreen *this, int a2)
{
  return j_CharSelectScreen::Render(this, a2);
}


// ============================================================

// Address: 0x2a4f98
// Original: _ZN11AudioScreen6OnBackEv
// Demangled: AudioScreen::OnBack(void)
int __fastcall AudioScreen::OnBack(AudioScreen *this)
{
  if ( (unsigned int)dword_6E0090 >= 2 )
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_6E0094 + 4 * dword_6E0090 - 8) + 20))(
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 8),
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  MobileMenu::RemoveTopScreen((MobileMenu *)&gMobileMenu, 0, 0);
  CAudioEngine::StopRadio();
  CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 35, 0.0, 1.0);
  return j_Menu_ApplyAudioSettings();
}


// ============================================================

// Address: 0x2a5004
// Original: _ZN11AudioScreen14RadioSelectionD2Ev
// Demangled: AudioScreen::RadioSelection::~RadioSelection()
void __fastcall AudioScreen::RadioSelection::~RadioSelection(AudioScreen::RadioSelection *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0

  v2 = *((_DWORD *)this + 7);
  *(_DWORD *)this = &off_662988;
  if ( v2 )
  {
    RwTextureDestroy(v2);
    *((_DWORD *)this + 7) = 0;
  }
  v3 = *((_DWORD *)this + 8);
  if ( v3 )
  {
    RwTextureDestroy(v3);
    *((_DWORD *)this + 8) = 0;
  }
  v4 = *((_DWORD *)this + 9);
  if ( v4 )
  {
    RwTextureDestroy(v4);
    *((_DWORD *)this + 9) = 0;
  }
  v5 = *((_DWORD *)this + 10);
  if ( v5 )
  {
    RwTextureDestroy(v5);
    *((_DWORD *)this + 10) = 0;
  }
  v6 = *((_DWORD *)this + 11);
  if ( v6 )
  {
    RwTextureDestroy(v6);
    *((_DWORD *)this + 11) = 0;
  }
  v7 = *((_DWORD *)this + 12);
  if ( v7 )
  {
    RwTextureDestroy(v7);
    *((_DWORD *)this + 12) = 0;
  }
  v8 = *((_DWORD *)this + 13);
  if ( v8 )
  {
    RwTextureDestroy(v8);
    *((_DWORD *)this + 13) = 0;
  }
  v9 = *((_DWORD *)this + 14);
  if ( v9 )
  {
    RwTextureDestroy(v9);
    *((_DWORD *)this + 14) = 0;
  }
  v10 = *((_DWORD *)this + 15);
  if ( v10 )
  {
    RwTextureDestroy(v10);
    *((_DWORD *)this + 15) = 0;
  }
  v11 = *((_DWORD *)this + 16);
  if ( v11 )
  {
    RwTextureDestroy(v11);
    *((_DWORD *)this + 16) = 0;
  }
  v12 = *((_DWORD *)this + 17);
  if ( v12 )
  {
    RwTextureDestroy(v12);
    *((_DWORD *)this + 17) = 0;
  }
  v13 = *((_DWORD *)this + 18);
  if ( v13 )
  {
    RwTextureDestroy(v13);
    *((_DWORD *)this + 18) = 0;
  }
}


// ============================================================

// Address: 0x2a50ac
// Original: _ZN11AudioScreen14RadioSelectionD0Ev
// Demangled: AudioScreen::RadioSelection::~RadioSelection()
void __fastcall AudioScreen::RadioSelection::~RadioSelection(AudioScreen::RadioSelection *this)
{
  void *v1; // r0

  AudioScreen::RadioSelection::~RadioSelection(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2a50bc
// Original: _ZN11AudioScreen14RadioSelection6RenderEP12SelectScreen9CVector2DS3_f
// Demangled: AudioScreen::RadioSelection::Render(SelectScreen *,CVector2D,CVector2D,float)
int __fastcall AudioScreen::RadioSelection::Render(float *a1, int a2, float a3, float a4, float a5, float a6)
{
  float32x2_t v6; // d0
  float32x2_t v7; // d3
  float v9; // s18
  float v10; // s20
  float v11; // s29
  float v12; // s22
  int v13; // r8
  int v14; // r6
  int v15; // r10
  unsigned __int8 v16; // r0
  float v17; // s23
  int result; // r0
  float v19; // s6
  float v20; // s31
  float v21; // s17
  float v22; // s27
  float v23; // s6
  float v24; // s17
  float v25; // s21
  float v26; // s31
  float v27; // s29
  float v28; // s6
  float v29; // s17
  float v30; // s21
  float v31; // s6
  float v32; // s17
  float v33; // s21
  float v34; // s8
  float v35; // s17
  float v36; // s21
  float *v37; // [sp+18h] [bp-98h]
  int v38; // [sp+24h] [bp-8Ch]
  _BYTE v40[4]; // [sp+2Ch] [bp-84h] BYREF
  int v41; // [sp+30h] [bp-80h] BYREF
  int v42; // [sp+34h] [bp-7Ch] BYREF
  int v43; // [sp+38h] [bp-78h] BYREF
  int v44; // [sp+3Ch] [bp-74h] BYREF
  int v45; // [sp+40h] [bp-70h] BYREF
  int v46; // [sp+44h] [bp-6Ch] BYREF
  int v47; // [sp+48h] [bp-68h] BYREF
  int v48; // [sp+4Ch] [bp-64h] BYREF

  v6.n64_f32[0] = a6 + 2.0;
  v7.n64_f32[0] = (float)(a5 + 2.0) / 12.0;
  v9 = vmin_f32(v6, v7).n64_f32[0];
  v10 = (float)((float)(a6 * 0.5) + a4) - (float)(v9 * 0.5);
  v11 = (float)((float)(a5 * 0.5) + a3) + (float)(v9 * -6.0);
  v12 = v9 + v10;
  a1[19] = v11;
  a1[20] = v10;
  a1[21] = (float)(v9 * 12.0) + v11;
  a1[22] = v9 + v10;
  CRGBA::CRGBA((CRGBA *)&v45, 0, 0, 0, 0);
  CRGBA::CRGBA((CRGBA *)&v46, 0, 0, 0, 0);
  CRGBA::CRGBA((CRGBA *)&v47, 0xF0u, 0xF0u, 0xF0u, 0x60u);
  CRGBA::CRGBA((CRGBA *)&v48, 0xF0u, 0xF0u, 0xF0u, 0x60u);
  CRGBA::CRGBA((CRGBA *)&v41, 0xFFu, 0xFFu, 0xFFu, 0x80u);
  CRGBA::CRGBA((CRGBA *)&v42, 0xFFu, 0xFFu, 0xFFu, 0x80u);
  CRGBA::CRGBA((CRGBA *)&v43, 0xFFu, 0xFFu, 0xFFu, 0x80u);
  CRGBA::CRGBA((CRGBA *)&v44, 0xFFu, 0xFFu, 0xFFu, 0x80u);
  v13 = 0;
  v38 = (int)a1;
  v37 = a1 + 7;
  do
  {
    v14 = LODWORD(v37[v13]);
    v15 = MobileSettings::settings[8 * *(_DWORD *)(v38 + 8) + 2] - 1;
    v16 = -116;
    if ( v13 == v15 )
      v16 = -1;
    CRGBA::CRGBA((CRGBA *)v40, 0xFFu, 0xFFu, 0xFFu, v16);
    v17 = v9 + v11;
    result = MenuScreen::DrawSprite(
               a2,
               v14,
               (int)v40,
               SLODWORD(v11),
               SLODWORD(v10),
               COERCE_INT(v9 + v11),
               COERCE_INT(v9 + v10),
               0);
    if ( v13 == v15 )
    {
      v19 = *(float *)(a2 + 8);
      v20 = (float)dword_9FC900;
      v21 = (float)dword_9FC904;
      HIBYTE(v45) = (unsigned int)(float)(v19 * (float)HIBYTE(v45));
      HIBYTE(v46) = (unsigned int)(float)(v19 * (float)HIBYTE(v46));
      HIBYTE(v47) = (unsigned int)(float)(v19 * (float)HIBYTE(v47));
      HIBYTE(v48) = (unsigned int)(float)(v19 * (float)HIBYTE(v48));
      RwRenderStateSet(1, 0);
      v22 = v11 + -320.0;
      dword_6E0148 = v45;
      dword_6E0140 = 1065353216;
      dword_6E0144 = 1065353216;
      qword_6E014C = 0LL;
      dword_6E015C = 1065353216;
      dword_6E0160 = 1065353216;
      qword_6E0168 = 1065353216LL;
      *(float *)maVertices = (float)(v20 * 0.5) + (float)((float)((float)(v11 + -320.0) * v21) / 480.0);
      *(float *)&dword_6E013C = (float)(v10 * v21) / 480.0;
      *(float *)&qword_6E0154 = (float)(v20 * 0.5) + (float)((float)((float)(v17 + -320.0) * v21) / 480.0);
      *((float *)&qword_6E0154 + 1) = (float)(v10 * v21) / 480.0;
      dword_6E0164 = v46;
      dword_6E0178 = 1065353216;
      dword_6E017C = 1065353216;
      qword_6E0184 = 0x3F80000000000000LL;
      *(float *)&qword_6E0170 = *(float *)maVertices;
      *((float *)&qword_6E0170 + 1) = (float)(v12 * v21) / 480.0;
      dword_6E0180 = v47;
      dword_6E0194 = 1065353216;
      dword_6E0198 = 1065353216;
      qword_6E01A0 = 0x3F8000003F800000LL;
      *(float *)&qword_6E018C = *(float *)&qword_6E0154;
      *((float *)&qword_6E018C + 1) = (float)(v12 * v21) / 480.0;
      dword_6E019C = v48;
      RwIm2DRenderPrimitive_BUGFIX(4, maVertices, 4);
      v23 = *(float *)(a2 + 8);
      v24 = (float)dword_9FC900;
      v25 = (float)dword_9FC904;
      HIBYTE(v41) = (unsigned int)(float)(v23 * (float)HIBYTE(v41));
      HIBYTE(v44) = (unsigned int)(float)(v23 * (float)HIBYTE(v44));
      HIBYTE(v43) = (unsigned int)(float)(v23 * (float)HIBYTE(v43));
      HIBYTE(v42) = (unsigned int)(float)(v23 * (float)HIBYTE(v42));
      RwRenderStateSet(1, 0);
      dword_6E0148 = v41;
      dword_6E0140 = 1065353216;
      dword_6E0144 = 1065353216;
      qword_6E014C = 0LL;
      dword_6E015C = 1065353216;
      dword_6E0160 = 1065353216;
      qword_6E0168 = 1065353216LL;
      v26 = (float)(v11 + 1.0) + -320.0;
      v27 = (float)(v17 + -1.0) + -320.0;
      *(float *)maVertices = (float)(v24 * 0.5) + (float)((float)(v26 * v25) / 480.0);
      *(float *)&dword_6E013C = (float)(v10 * v25) / 480.0;
      *(float *)&qword_6E0154 = (float)(v24 * 0.5) + (float)((float)(v27 * v25) / 480.0);
      *((float *)&qword_6E0154 + 1) = (float)(v10 * v25) / 480.0;
      dword_6E0164 = v42;
      dword_6E0178 = 1065353216;
      dword_6E017C = 1065353216;
      qword_6E0184 = 0x3F80000000000000LL;
      *(float *)&qword_6E0170 = *(float *)maVertices;
      *((float *)&qword_6E0170 + 1) = (float)((float)(v10 + 0.75) * v25) / 480.0;
      dword_6E0180 = v43;
      dword_6E0194 = 1065353216;
      dword_6E0198 = 1065353216;
      qword_6E01A0 = 0x3F8000003F800000LL;
      *(float *)&qword_6E018C = *(float *)&qword_6E0154;
      *((float *)&qword_6E018C + 1) = (float)((float)(v10 + 0.75) * v25) / 480.0;
      dword_6E019C = v44;
      RwIm2DRenderPrimitive_BUGFIX(4, maVertices, 4);
      v28 = *(float *)(a2 + 8);
      v29 = (float)dword_9FC904;
      v30 = (float)dword_9FC900;
      HIBYTE(v41) = (unsigned int)(float)(v28 * (float)HIBYTE(v41));
      HIBYTE(v42) = (unsigned int)(float)(v28 * (float)HIBYTE(v42));
      HIBYTE(v43) = (unsigned int)(float)(v28 * (float)HIBYTE(v43));
      HIBYTE(v44) = (unsigned int)(float)(v28 * (float)HIBYTE(v44));
      RwRenderStateSet(1, 0);
      dword_6E0148 = v41;
      dword_6E0140 = 1065353216;
      dword_6E0144 = 1065353216;
      qword_6E014C = 0LL;
      dword_6E015C = 1065353216;
      dword_6E0160 = 1065353216;
      qword_6E0168 = 1065353216LL;
      *(float *)maVertices = (float)(v30 * 0.5) + (float)((float)(v26 * v29) / 480.0);
      *(float *)&dword_6E013C = (float)((float)(v12 + -0.75) * v29) / 480.0;
      *(float *)&qword_6E0154 = (float)(v30 * 0.5) + (float)((float)(v27 * v29) / 480.0);
      *((float *)&qword_6E0154 + 1) = (float)((float)(v12 + -0.75) * v29) / 480.0;
      dword_6E0164 = v42;
      dword_6E0178 = 1065353216;
      dword_6E017C = 1065353216;
      qword_6E0184 = 0x3F80000000000000LL;
      *(float *)&qword_6E0170 = *(float *)maVertices;
      *((float *)&qword_6E0170 + 1) = (float)(v12 * v29) / 480.0;
      dword_6E0180 = v43;
      dword_6E0194 = 1065353216;
      dword_6E0198 = 1065353216;
      qword_6E01A0 = 0x3F8000003F800000LL;
      *(float *)&qword_6E018C = *(float *)&qword_6E0154;
      *((float *)&qword_6E018C + 1) = (float)(v12 * v29) / 480.0;
      dword_6E019C = v44;
      RwIm2DRenderPrimitive_BUGFIX(4, maVertices, 4);
      v31 = *(float *)(a2 + 8);
      v32 = (float)dword_9FC904;
      v33 = (float)dword_9FC900;
      HIBYTE(v41) = (unsigned int)(float)(v31 * (float)HIBYTE(v41));
      HIBYTE(v42) = (unsigned int)(float)(v31 * (float)HIBYTE(v42));
      HIBYTE(v43) = (unsigned int)(float)(v31 * (float)HIBYTE(v43));
      HIBYTE(v44) = (unsigned int)(float)(v31 * (float)HIBYTE(v44));
      RwRenderStateSet(1, 0);
      dword_6E0148 = v41;
      dword_6E0140 = 1065353216;
      dword_6E0144 = 1065353216;
      qword_6E014C = 0LL;
      dword_6E015C = 1065353216;
      dword_6E0160 = 1065353216;
      qword_6E0168 = 1065353216LL;
      *(float *)maVertices = (float)(v33 * 0.5) + (float)((float)(v22 * v32) / 480.0);
      *(float *)&dword_6E013C = (float)(v10 * v32) / 480.0;
      *(float *)&qword_6E0154 = (float)(v33 * 0.5) + (float)((float)(v26 * v32) / 480.0);
      *((float *)&qword_6E0154 + 1) = (float)(v10 * v32) / 480.0;
      dword_6E0164 = v42;
      dword_6E0178 = 1065353216;
      dword_6E017C = 1065353216;
      qword_6E0184 = 0x3F80000000000000LL;
      *(float *)&qword_6E0170 = *(float *)maVertices;
      *((float *)&qword_6E0170 + 1) = (float)(v12 * v32) / 480.0;
      dword_6E0180 = v43;
      dword_6E0194 = 1065353216;
      dword_6E0198 = 1065353216;
      qword_6E01A0 = 0x3F8000003F800000LL;
      *(float *)&qword_6E018C = *(float *)&qword_6E0154;
      *((float *)&qword_6E018C + 1) = (float)(v12 * v32) / 480.0;
      dword_6E019C = v44;
      RwIm2DRenderPrimitive_BUGFIX(4, maVertices, 4);
      v34 = *(float *)(a2 + 8);
      v35 = (float)dword_9FC904;
      v36 = (float)dword_9FC900;
      HIBYTE(v41) = (unsigned int)(float)(v34 * (float)HIBYTE(v41));
      HIBYTE(v42) = (unsigned int)(float)(v34 * (float)HIBYTE(v42));
      HIBYTE(v43) = (unsigned int)(float)(v34 * (float)HIBYTE(v43));
      HIBYTE(v44) = (unsigned int)(float)(v34 * (float)HIBYTE(v44));
      RwRenderStateSet(1, 0);
      dword_6E0140 = 1065353216;
      dword_6E0144 = 1065353216;
      qword_6E014C = 0LL;
      dword_6E015C = 1065353216;
      dword_6E0160 = 1065353216;
      qword_6E0168 = 1065353216LL;
      dword_6E0148 = v41;
      *(float *)maVertices = (float)(v36 * 0.5) + (float)((float)(v27 * v35) / 480.0);
      *(float *)&dword_6E013C = (float)(v10 * v35) / 480.0;
      *(float *)&qword_6E0154 = (float)(v36 * 0.5) + (float)((float)((float)(v17 + -320.0) * v35) / 480.0);
      *((float *)&qword_6E0154 + 1) = (float)(v10 * v35) / 480.0;
      dword_6E0164 = v42;
      dword_6E0178 = 1065353216;
      dword_6E017C = 1065353216;
      qword_6E0184 = 0x3F80000000000000LL;
      *(float *)&qword_6E0170 = *(float *)maVertices;
      *((float *)&qword_6E0170 + 1) = (float)(v12 * v35) / 480.0;
      dword_6E0180 = v43;
      dword_6E0194 = 1065353216;
      dword_6E0198 = 1065353216;
      qword_6E01A0 = 0x3F8000003F800000LL;
      *(float *)&qword_6E018C = *(float *)&qword_6E0154;
      *((float *)&qword_6E018C + 1) = (float)(v12 * v35) / 480.0;
      dword_6E019C = v44;
      result = RwIm2DRenderPrimitive_BUGFIX(4, maVertices, 4);
    }
    v11 = v17;
    ++v13;
  }
  while ( v13 != 11 );
  return result;
}


// ============================================================

// Address: 0x2a5a30
// Original: _ZN11AudioScreen14RadioSelection11HandleInputEP12SelectScreenf
// Demangled: AudioScreen::RadioSelection::HandleInput(SelectScreen *,float)
float *__fastcall AudioScreen::RadioSelection::HandleInput(float *this, SelectScreen *a2, float a3)
{
  float v3; // s0
  float v4; // s2
  float v5; // s4
  float v6; // s6
  int v7; // s0
  int v8; // r1

  if ( *((_DWORD *)&gMobileMenu + lastDevice + 36) )
    return (float *)j_SelectScreen::SettingSelection::HandleInput((SelectScreen::SettingSelection *)this, a2, a3);
  v3 = this[19];
  v4 = *((float *)&gMobileMenu + 2 * lastDevice + 28);
  if ( v4 >= v3 )
  {
    v5 = this[21];
    if ( v4 <= v5 )
    {
      v6 = *((float *)&gMobileMenu + 2 * lastDevice + 29);
      if ( v6 >= this[20] && v6 <= this[22] )
      {
        v7 = (int)(float)((float)((float)(v4 - v3) * 12.0) / (float)(v5 - v3));
        this = (float *)v7;
        v8 = v7 + 1;
        if ( v7 != 11 )
        {
          this = (float *)dword_6E05BC;
          if ( v8 != dword_6E05BC )
          {
            dword_6E05BC = v7 + 1;
            return (float *)j_CAudioEngine::RetuneRadio((CAudioEngine *)&AudioEngine, v8);
          }
        }
      }
    }
  }
  return this;
}


// ============================================================

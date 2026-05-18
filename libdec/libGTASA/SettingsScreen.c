
// Address: 0x19b894
// Original: j__ZN14SettingsScreenC2Ev
// Demangled: SettingsScreen::SettingsScreen(void)
// attributes: thunk
void __fastcall SettingsScreen::SettingsScreen(SettingsScreen *this)
{
  _ZN14SettingsScreenC2Ev(this);
}


// ============================================================

// Address: 0x29de98
// Original: _ZN14SettingsScreenC2Ev
// Demangled: SettingsScreen::SettingsScreen(void)
void __fastcall SettingsScreen::SettingsScreen(SettingsScreen *this)
{
  const char *v2; // r1
  int Texture; // r9
  int v4; // r5
  unsigned int v5; // r10
  _DWORD *v6; // r0
  void *v7; // r8
  _DWORD *v8; // r6
  __int64 v9; // r0
  int v10; // r9
  int v11; // r5
  unsigned int v12; // r10
  _DWORD *v13; // r0
  void *v14; // r8
  _DWORD *v15; // r6
  __int64 v16; // r0
  int v17; // r9
  int v18; // r5
  unsigned int v19; // r10
  _DWORD *v20; // r0
  void *v21; // r8
  _DWORD *v22; // r6
  char *v23; // r1
  int v24; // r9
  int v25; // r5
  unsigned int v26; // r10
  _DWORD *v27; // r0
  void *v28; // r8
  _DWORD *v29; // r6
  char *v30; // r1
  int v31; // r9
  int v32; // r5
  unsigned int v33; // r10
  _DWORD *v34; // r0
  void *v35; // r8
  _DWORD *v36; // r6
  char *v37; // r1

  FlowScreen::FlowScreen(this, 1, 0);
  *(_DWORD *)this = &off_662648;
  Texture = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_maincontrols", v2);
  ++*(_DWORD *)(Texture + 84);
  v4 = *((_DWORD *)this + 16);
  if ( *((_DWORD *)this + 15) >= (unsigned int)(v4 + 1) )
  {
    v8 = (_DWORD *)*((_DWORD *)this + 17);
  }
  else
  {
    v5 = 4 * (v4 + 1) / 3u + 3;
    v6 = malloc(12 * v5);
    v7 = (void *)*((_DWORD *)this + 17);
    v8 = v6;
    if ( v7 )
    {
      memcpy_0(v6, *((const void **)this + 17), 12 * v4);
      free(v7);
      v4 = *((_DWORD *)this + 16);
    }
    *((_DWORD *)this + 17) = v8;
    *((_DWORD *)this + 15) = v5;
  }
  v8[3 * v4] = Texture;
  HIDWORD(v9) = SettingsScreen::OnAdjustControls;
  LODWORD(v9) = "FEC_RED";
  *(_QWORD *)&v8[3 * v4 + 1] = v9;
  HIDWORD(v9) = *((_DWORD *)this + 16) + 1;
  *((_DWORD *)this + 16) = HIDWORD(v9);
  v10 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainsettings", (const char *)HIDWORD(v9));
  ++*(_DWORD *)(v10 + 84);
  v11 = *((_DWORD *)this + 16);
  if ( *((_DWORD *)this + 15) >= (unsigned int)(v11 + 1) )
  {
    v15 = (_DWORD *)*((_DWORD *)this + 17);
  }
  else
  {
    v12 = 4 * (v11 + 1) / 3u + 3;
    v13 = malloc(12 * v12);
    v14 = (void *)*((_DWORD *)this + 17);
    v15 = v13;
    if ( v14 )
    {
      memcpy_0(v13, *((const void **)this + 17), 12 * v11);
      free(v14);
      v11 = *((_DWORD *)this + 16);
    }
    *((_DWORD *)this + 17) = v15;
    *((_DWORD *)this + 15) = v12;
  }
  v15[3 * v11] = v10;
  HIDWORD(v16) = SettingsScreen::OnGameOptions;
  LODWORD(v16) = "FEH_LOA";
  *(_QWORD *)&v15[3 * v11 + 1] = v16;
  ++*((_DWORD *)this + 16);
  v17 = TextureDatabaseRuntime::GetTexture(
          (TextureDatabaseRuntime *)"menu_maindisplay",
          (const char *)SettingsScreen::OnGameOptions);
  ++*(_DWORD *)(v17 + 84);
  v18 = *((_DWORD *)this + 16);
  if ( *((_DWORD *)this + 15) >= (unsigned int)(v18 + 1) )
  {
    v22 = (_DWORD *)*((_DWORD *)this + 17);
  }
  else
  {
    v19 = 4 * (v18 + 1) / 3u + 3;
    v20 = malloc(12 * v19);
    v21 = (void *)*((_DWORD *)this + 17);
    v22 = v20;
    if ( v21 )
    {
      memcpy_0(v20, *((const void **)this + 17), 12 * v18);
      free(v21);
      v18 = *((_DWORD *)this + 16);
    }
    *((_DWORD *)this + 17) = v22;
    *((_DWORD *)this + 15) = v19;
  }
  v22[3 * v18] = v17;
  v23 = (char *)&v22[3 * v18];
  *((_DWORD *)v23 + 1) = "FEO_DIS";
  *((_DWORD *)v23 + 2) = SettingsScreen::OnDisplayOptions;
  ++*((_DWORD *)this + 16);
  v24 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainaudio", v23);
  ++*(_DWORD *)(v24 + 84);
  v25 = *((_DWORD *)this + 16);
  if ( *((_DWORD *)this + 15) >= (unsigned int)(v25 + 1) )
  {
    v29 = (_DWORD *)*((_DWORD *)this + 17);
  }
  else
  {
    v26 = 4 * (v25 + 1) / 3u + 3;
    v27 = malloc(12 * v26);
    v28 = (void *)*((_DWORD *)this + 17);
    v29 = v27;
    if ( v28 )
    {
      memcpy_0(v27, *((const void **)this + 17), 12 * v25);
      free(v28);
      v25 = *((_DWORD *)this + 16);
    }
    *((_DWORD *)this + 17) = v29;
    *((_DWORD *)this + 15) = v26;
  }
  v29[3 * v25] = v24;
  v30 = (char *)&v29[3 * v25];
  *((_DWORD *)v30 + 1) = "FEO_AUD";
  *((_DWORD *)v30 + 2) = SettingsScreen::OnSoundOptions;
  ++*((_DWORD *)this + 16);
  v31 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainlanguage", v30);
  ++*(_DWORD *)(v31 + 84);
  v32 = *((_DWORD *)this + 16);
  if ( *((_DWORD *)this + 15) >= (unsigned int)(v32 + 1) )
  {
    v36 = (_DWORD *)*((_DWORD *)this + 17);
  }
  else
  {
    v33 = 4 * (v32 + 1) / 3u + 3;
    v34 = malloc(12 * v33);
    v35 = (void *)*((_DWORD *)this + 17);
    v36 = v34;
    if ( v35 )
    {
      memcpy_0(v34, *((const void **)this + 17), 12 * v32);
      free(v35);
      v32 = *((_DWORD *)this + 16);
    }
    *((_DWORD *)this + 17) = v36;
    *((_DWORD *)this + 15) = v33;
  }
  v36[3 * v32] = v31;
  v37 = (char *)&v36[3 * v32];
  *((_DWORD *)v37 + 1) = "FEO_LAN";
  *((_DWORD *)v37 + 2) = SettingsScreen::OnLanguageOptions;
  *((_DWORD *)this + 16) = *((_DWORD *)this + 16);
}


// ============================================================

// Address: 0x29e1e0
// Original: _ZN14SettingsScreen16OnAdjustControlsEv
// Demangled: SettingsScreen::OnAdjustControls(void)
void *__fastcall SettingsScreen::OnAdjustControls(SettingsScreen *this)
{
  ControlsScreen *v1; // r4
  void *result; // r0

  AddMenuStat(9, 1);
  v1 = (ControlsScreen *)operator new(0x44u);
  ControlsScreen::ControlsScreen(v1);
  if ( dword_6E0090 )
    (*(void (__fastcall **)(ControlsScreen *, _DWORD))(*(_DWORD *)v1 + 20))(
      v1,
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  if ( dword_6E0098 )
    MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
  result = &gMobileMenu;
  dword_6E0098 = (int)v1;
  return result;
}


// ============================================================

// Address: 0x29e24c
// Original: _ZN14SettingsScreen13OnGameOptionsEv
// Demangled: SettingsScreen::OnGameOptions(void)
void *__fastcall SettingsScreen::OnGameOptions(SettingsScreen *this)
{
  GameScreen *v1; // r4
  void *result; // r0

  AddMenuStat(10, 1);
  v1 = (GameScreen *)operator new(0x44u);
  GameScreen::GameScreen(v1);
  if ( dword_6E0090 )
    (*(void (__fastcall **)(GameScreen *, _DWORD))(*(_DWORD *)v1 + 20))(
      v1,
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  if ( dword_6E0098 )
    MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
  result = &gMobileMenu;
  dword_6E0098 = (int)v1;
  return result;
}


// ============================================================

// Address: 0x29e2b8
// Original: _ZN14SettingsScreen16OnDisplayOptionsEv
// Demangled: SettingsScreen::OnDisplayOptions(void)
void *__fastcall SettingsScreen::OnDisplayOptions(SettingsScreen *this)
{
  DisplayScreen *v1; // r4
  void *result; // r0

  AddMenuStat(11, 1);
  v1 = (DisplayScreen *)operator new(0x44u);
  DisplayScreen::DisplayScreen(v1);
  if ( dword_6E0090 )
    (*(void (__fastcall **)(DisplayScreen *, _DWORD))(*(_DWORD *)v1 + 20))(
      v1,
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  if ( dword_6E0098 )
    MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
  result = &gMobileMenu;
  dword_6E0098 = (int)v1;
  return result;
}


// ============================================================

// Address: 0x29e324
// Original: _ZN14SettingsScreen14OnSoundOptionsEv
// Demangled: SettingsScreen::OnSoundOptions(void)
void *__fastcall SettingsScreen::OnSoundOptions(SettingsScreen *this)
{
  AudioScreen *v1; // r4
  void *result; // r0

  AddMenuStat(12, 1);
  v1 = (AudioScreen *)operator new(0x44u);
  AudioScreen::AudioScreen(v1);
  if ( dword_6E0090 )
    (*(void (__fastcall **)(AudioScreen *, _DWORD))(*(_DWORD *)v1 + 20))(
      v1,
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  if ( dword_6E0098 )
    MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
  result = &gMobileMenu;
  dword_6E0098 = (int)v1;
  return result;
}


// ============================================================

// Address: 0x29e390
// Original: _ZN14SettingsScreen17OnLanguageOptionsEv
// Demangled: SettingsScreen::OnLanguageOptions(void)
void *__fastcall SettingsScreen::OnLanguageOptions(SettingsScreen *this)
{
  LanguageScreen *v1; // r4
  void *result; // r0

  AddMenuStat(13, 1);
  v1 = (LanguageScreen *)operator new(0x44u);
  LanguageScreen::LanguageScreen(v1);
  if ( dword_6E0090 )
    (*(void (__fastcall **)(LanguageScreen *, _DWORD))(*(_DWORD *)v1 + 20))(
      v1,
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  if ( dword_6E0098 )
    MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
  result = &gMobileMenu;
  dword_6E0098 = (int)v1;
  return result;
}


// ============================================================

// Address: 0x29e3fc
// Original: _ZN14SettingsScreenD0Ev
// Demangled: SettingsScreen::~SettingsScreen()
void __fastcall SettingsScreen::~SettingsScreen(SettingsScreen *this)
{
  void *v1; // r0

  FlowScreen::~FlowScreen(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x29e40c
// Original: _ZN14SettingsScreen6OnBackEv
// Demangled: SettingsScreen::OnBack(void)
int __fastcall SettingsScreen::OnBack(SettingsScreen *this)
{
  Menu_SaveSettings();
  if ( (unsigned int)dword_6E0090 >= 2 )
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_6E0094 + 4 * dword_6E0090 - 8) + 20))(
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 8),
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  return j_MobileMenu::RemoveTopScreen((MobileMenu *)&gMobileMenu, 0, 0);
}


// ============================================================

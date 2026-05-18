
// Address: 0x196da4
// Original: j__ZN14MainMenuScreen9HasCPSaveEv
// Demangled: MainMenuScreen::HasCPSave(void)
// attributes: thunk
int __fastcall MainMenuScreen::HasCPSave(MainMenuScreen *this)
{
  return _ZN14MainMenuScreen9HasCPSaveEv(this);
}


// ============================================================

// Address: 0x199e28
// Original: j__ZN14MainMenuScreen11AddAllItemsEv
// Demangled: MainMenuScreen::AddAllItems(void)
// attributes: thunk
int __fastcall MainMenuScreen::AddAllItems(MainMenuScreen *this)
{
  return _ZN14MainMenuScreen11AddAllItemsEv(this);
}


// ============================================================

// Address: 0x29b9d4
// Original: _ZN14MainMenuScreen11AddAllItemsEv
// Demangled: MainMenuScreen::AddAllItems(void)
int __fastcall MainMenuScreen::AddAllItems(MainMenuScreen *this, const char *a2)
{
  int Texture; // r5
  int v4; // r4
  _DWORD *v5; // r9
  unsigned int *v6; // r11
  unsigned int v7; // r10
  _DWORD *v8; // r0
  void *v9; // r11
  _DWORD *v10; // r6
  const char *v11; // r1
  int v12; // r5
  int v13; // r4
  unsigned int v14; // r10
  _DWORD *v15; // r0
  void *v16; // r11
  _DWORD *v17; // r6
  char *v18; // r1
  const char *v19; // r1
  int v20; // r5
  int v21; // r4
  unsigned int v22; // r0
  unsigned int v23; // r10
  _DWORD *v24; // r0
  void *v25; // r11
  _DWORD *v26; // r6
  char *v27; // r1
  int v28; // r5
  int v29; // r4
  unsigned int v30; // r0
  unsigned int v31; // r10
  _DWORD *v32; // r0
  void *v33; // r11
  _DWORD *v34; // r6
  char *v35; // r3
  __int64 v36; // r0
  int v37; // r5
  int v38; // r4
  unsigned int v39; // r0
  unsigned int v40; // r10
  _DWORD *v41; // r0
  void *v42; // r11
  _DWORD *v43; // r6
  int v44; // r5
  int v45; // r4
  unsigned int v46; // r0
  unsigned int v47; // r10
  _DWORD *v48; // r0
  void *v49; // r11
  _DWORD *v50; // r6
  int v51; // r1
  const char *v52; // r2
  _DWORD *v53; // r0
  int v54; // r5
  int v55; // r4
  unsigned int v56; // r0
  unsigned int v57; // r10
  _DWORD *v58; // r0
  void *v59; // r11
  _DWORD *v60; // r6
  char *v61; // r1
  const char *v62; // r1
  int v63; // r5
  int v64; // r4
  unsigned int v65; // r0
  unsigned int v66; // r10
  _DWORD *v67; // r0
  void *v68; // r11
  char *v69; // r1
  int v70; // r5
  int v71; // r4
  unsigned int v72; // r0
  unsigned int v73; // r11
  _DWORD *v74; // r0
  void *v75; // r10
  _DWORD *v76; // r6
  char *v77; // r1
  int result; // r0
  unsigned int *v79; // [sp+0h] [bp-20h]

  if ( *((_BYTE *)this + 13) )
  {
    Texture = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainresume", a2);
    ++*(_DWORD *)(Texture + 84);
    v5 = (_DWORD *)((char *)this + 64);
    v4 = *((_DWORD *)this + 16);
    v6 = (unsigned int *)((char *)this + 60);
    if ( *((_DWORD *)this + 15) >= (unsigned int)(v4 + 1) )
    {
      v10 = (_DWORD *)*((_DWORD *)this + 17);
    }
    else
    {
      v7 = 4 * (v4 + 1) / 3u + 3;
      v8 = malloc(12 * v7);
      v9 = (void *)*((_DWORD *)this + 17);
      v10 = v8;
      if ( v9 )
      {
        memcpy_0(v8, *((const void **)this + 17), 12 * v4);
        free(v9);
        v4 = *v5;
      }
      v6 = (unsigned int *)((char *)this + 60);
      *((_DWORD *)this + 17) = v10;
      *((_DWORD *)this + 15) = v7;
    }
    v10[3 * v4] = Texture;
    v18 = (char *)&v10[3 * v4];
    *((_DWORD *)v18 + 1) = "FEP_RES";
    *((_DWORD *)v18 + 2) = MainMenuScreen::OnResume;
    v19 = (const char *)(*v5 + 1);
    *v5 = v19;
    v20 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainsettings", v19);
    ++*(_DWORD *)(v20 + 84);
    v21 = *v5;
    v22 = *v5 + 1;
    if ( *v6 >= v22 )
    {
      v26 = (_DWORD *)*((_DWORD *)this + 17);
    }
    else
    {
      v23 = 4 * v22 / 3 + 3;
      v24 = malloc(12 * v23);
      v25 = (void *)*((_DWORD *)this + 17);
      v26 = v24;
      if ( v25 )
      {
        memcpy_0(v24, *((const void **)this + 17), 12 * v21);
        free(v25);
        v21 = *v5;
      }
      v6 = (unsigned int *)((char *)this + 60);
      *((_DWORD *)this + 17) = v26;
      *((_DWORD *)this + 15) = v23;
    }
    v26[3 * v21] = v20;
    v27 = (char *)&v26[3 * v21];
    *((_DWORD *)v27 + 1) = "FEP_OPT";
    *((_DWORD *)v27 + 2) = MainMenuScreen::OnSettings;
    ++*v5;
    v28 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainstats", v27);
    ++*(_DWORD *)(v28 + 84);
    v29 = *v5;
    v30 = *v5 + 1;
    if ( *v6 >= v30 )
    {
      v34 = (_DWORD *)*((_DWORD *)this + 17);
    }
    else
    {
      v31 = 4 * v30 / 3 + 3;
      v32 = malloc(12 * v31);
      v33 = (void *)*((_DWORD *)this + 17);
      v34 = v32;
      if ( v33 )
      {
        memcpy_0(v32, *((const void **)this + 17), 12 * v29);
        free(v33);
        v29 = *v5;
      }
      v6 = (unsigned int *)((char *)this + 60);
      *((_DWORD *)this + 17) = v34;
      *((_DWORD *)this + 15) = v31;
    }
    v34[3 * v29] = v28;
    v35 = (char *)&v34[3 * v29];
    HIDWORD(v36) = "FEH_STA";
    *((_DWORD *)v35 + 1) = "FEH_STA";
    *((_DWORD *)v35 + 2) = FlowScreen::OnStats;
    *v5 = *v5;
    if ( dword_A00450 )
    {
      v37 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainbriefs", "FEH_STA");
      ++*(_DWORD *)(v37 + 84);
      v38 = *v5;
      v39 = *v5 + 1;
      if ( *v6 >= v39 )
      {
        v43 = (_DWORD *)*((_DWORD *)this + 17);
      }
      else
      {
        v40 = 4 * v39 / 3 + 3;
        v41 = malloc(12 * v40);
        v42 = (void *)*((_DWORD *)this + 17);
        v43 = v41;
        if ( v42 )
        {
          memcpy_0(v41, *((const void **)this + 17), 12 * v38);
          free(v42);
          v38 = *v5;
        }
        v6 = (unsigned int *)((char *)this + 60);
        *((_DWORD *)this + 17) = v43;
        *((_DWORD *)this + 15) = v40;
      }
      v43[3 * v38] = v37;
      HIDWORD(v36) = FlowScreen::OnBriefs;
      LODWORD(v36) = "FEH_BRI";
      *(_QWORD *)&v43[3 * v38 + 1] = v36;
      ++*v5;
    }
    v44 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainplay", (const char *)HIDWORD(v36));
    ++*(_DWORD *)(v44 + 84);
    v45 = *v5;
    v46 = *v5 + 1;
    if ( *v6 >= v46 )
    {
      v50 = (_DWORD *)*((_DWORD *)this + 17);
    }
    else
    {
      v47 = 4 * v46 / 3 + 3;
      v48 = malloc(12 * v47);
      v49 = (void *)*((_DWORD *)this + 17);
      v50 = v48;
      if ( v49 )
      {
        memcpy_0(v48, *((const void **)this + 17), 12 * v45);
        free(v49);
        v45 = *v5;
      }
      v6 = (unsigned int *)((char *)this + 60);
      *((_DWORD *)this + 17) = v50;
      *((_DWORD *)this + 15) = v47;
    }
    v51 = 3 * v45;
    v52 = "FEP_STG";
    v50[3 * v45] = v44;
    v53 = &MainMenuScreen::OnStartGame;
  }
  else
  {
    if ( MainMenuScreen::HasCPSave(this) )
    {
      v12 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainresume", v11);
      ++*(_DWORD *)(v12 + 84);
      v5 = (_DWORD *)((char *)this + 64);
      v13 = *((_DWORD *)this + 16);
      v6 = (unsigned int *)((char *)this + 60);
      if ( *((_DWORD *)this + 15) >= (unsigned int)(v13 + 1) )
      {
        v17 = (_DWORD *)*((_DWORD *)this + 17);
      }
      else
      {
        v14 = 4 * (v13 + 1) / 3u + 3;
        v15 = malloc(12 * v14);
        v16 = (void *)*((_DWORD *)this + 17);
        v17 = v15;
        if ( v16 )
        {
          memcpy_0(v15, *((const void **)this + 17), 12 * v13);
          free(v16);
          v13 = *v5;
        }
        *((_DWORD *)this + 17) = v17;
        *((_DWORD *)this + 15) = v14;
        v6 = (unsigned int *)((char *)this + 60);
      }
      v17[3 * v13] = v12;
      v11 = (const char *)&v17[3 * v13];
      *((_DWORD *)v11 + 1) = "FEP_RES";
      *((_DWORD *)v11 + 2) = MainMenuScreen::OnResume;
      ++*v5;
    }
    else
    {
      v6 = (unsigned int *)((char *)this + 60);
      v5 = (_DWORD *)((char *)this + 64);
    }
    v54 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainplay", v11);
    ++*(_DWORD *)(v54 + 84);
    v55 = *v5;
    v56 = *v5 + 1;
    v79 = v6;
    if ( *v6 >= v56 )
    {
      v60 = (_DWORD *)*((_DWORD *)this + 17);
    }
    else
    {
      v57 = 4 * v56 / 3 + 3;
      v58 = malloc(12 * v57);
      v59 = (void *)*((_DWORD *)this + 17);
      v60 = v58;
      if ( v59 )
      {
        memcpy_0(v58, *((const void **)this + 17), 12 * v55);
        free(v59);
        v55 = *v5;
      }
      v6 = v79;
      *((_DWORD *)this + 17) = v60;
      *((_DWORD *)this + 15) = v57;
    }
    v60[3 * v55] = v54;
    v61 = (char *)&v60[3 * v55];
    *((_DWORD *)v61 + 1) = "FEP_STG";
    *((_DWORD *)v61 + 2) = MainMenuScreen::OnStartGame;
    v62 = (const char *)(*v5 + 1);
    *v5 = v62;
    v63 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainsettings", v62);
    ++*(_DWORD *)(v63 + 84);
    v64 = *v5;
    v65 = *v5 + 1;
    if ( *v6 >= v65 )
    {
      v50 = (_DWORD *)*((_DWORD *)this + 17);
    }
    else
    {
      v66 = 4 * v65 / 3 + 3;
      v67 = malloc(12 * v66);
      v68 = (void *)*((_DWORD *)this + 17);
      v50 = v67;
      if ( v68 )
      {
        memcpy_0(v67, *((const void **)this + 17), 12 * v64);
        free(v68);
        v64 = *v5;
      }
      v6 = v79;
      *((_DWORD *)this + 17) = v50;
      *((_DWORD *)this + 15) = v66;
    }
    v51 = 3 * v64;
    v52 = "FEP_OPT";
    v50[3 * v64] = v63;
    v53 = &MainMenuScreen::OnSettings;
  }
  v69 = (char *)&v50[v51];
  *((_DWORD *)v69 + 1) = v52;
  v69 += 8;
  *(_DWORD *)v69 = *v53;
  *v5 = *v5;
  v70 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainquit", v69);
  ++*(_DWORD *)(v70 + 84);
  v71 = *v5;
  v72 = *v5 + 1;
  if ( *v6 >= v72 )
  {
    v76 = (_DWORD *)*((_DWORD *)this + 17);
  }
  else
  {
    v73 = 4 * v72 / 3 + 3;
    v74 = malloc(12 * v73);
    v75 = (void *)*((_DWORD *)this + 17);
    v76 = v74;
    if ( v75 )
    {
      memcpy_0(v74, *((const void **)this + 17), 12 * v71);
      free(v75);
      v71 = *v5;
    }
    *((_DWORD *)this + 17) = v76;
    *((_DWORD *)this + 15) = v73;
  }
  v76[3 * v71] = v70;
  v77 = (char *)&v76[3 * v71];
  *((_DWORD *)v77 + 1) = "FEP_QUI";
  *((_DWORD *)v77 + 2) = MainMenuScreen::OnExit;
  result = *v5 + 1;
  *v5 = result;
  return result;
}


// ============================================================

// Address: 0x29bfec
// Original: _ZN14MainMenuScreenD0Ev
// Demangled: MainMenuScreen::~MainMenuScreen()
void __fastcall MainMenuScreen::~MainMenuScreen(MainMenuScreen *this)
{
  void *v1; // r0

  FlowScreen::~FlowScreen(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x29bffc
// Original: _ZN14MainMenuScreen6UpdateEf
// Demangled: MainMenuScreen::Update(float)
int *__fastcall MainMenuScreen::Update(MainMenuScreen *this, float a2)
{
  int *result; // r0

  if ( *((_BYTE *)this + 13) || LIB_KeyboardState() != 3 )
    return (int *)j_FlowScreen::Update(this, a2);
  result = &RsGlobal;
  dword_9FC90C = 1;
  return result;
}


// ============================================================

// Address: 0x29d1b4
// Original: _ZN14MainMenuScreen6OnBackEv
// Demangled: MainMenuScreen::OnBack(void)
int *__fastcall MainMenuScreen::OnBack(MainMenuScreen *this)
{
  int v1; // r1
  int v2; // r0
  int *result; // r0

  if ( *((_BYTE *)this + 13) )
  {
    MobileMenu::Unload((MobileMenu *)&gMobileMenu);
    v1 = dword_6E0090;
    dword_6E0098 = 0;
    byte_6E00D9 = 0;
    while ( v1 )
    {
      --v1;
      v2 = *(_DWORD *)(dword_6E0094 + 4 * v1);
      dword_6E0090 = v1;
      if ( v2 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
        v1 = dword_6E0090;
      }
    }
    Menu_SwitchOffToGame();
    result = (int *)Menu_IsPlayingGame(1);
    if ( result == (int *)((char *)&stderr + 1) )
    {
      result = &skipFrame;
      skipFrame = 2;
    }
  }
  else
  {
    result = &RsGlobal;
    dword_9FC90C = 1;
  }
  return result;
}


// ============================================================

// Address: 0x29d918
// Original: _ZN14MainMenuScreen8OnResumeEv
// Demangled: MainMenuScreen::OnResume(void)
void *__fastcall MainMenuScreen::OnResume(MainMenuScreen *this)
{
  bool v1; // r2
  int v2; // r1
  int v3; // r0
  int v4; // r1
  int v5; // r0
  void *result; // r0

  AddMenuStat(1, 1);
  if ( Menu_IsPlayingGame(1)
    || CGenericGameStorage::CheckSlotDataValid((CGenericGameStorage *)lastSaveForResume, 1, v1) != 1 )
  {
    MobileMenu::Unload((MobileMenu *)&gMobileMenu);
    v4 = dword_6E0090;
    dword_6E0098 = 0;
    byte_6E00D9 = 0;
    while ( v4 )
    {
      --v4;
      v5 = *(_DWORD *)(dword_6E0094 + 4 * v4);
      dword_6E0090 = v4;
      if ( v5 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
        v4 = dword_6E0090;
      }
    }
    Menu_SwitchOffToGame();
    if ( Menu_IsPlayingGame(1) == 1 )
      goto LABEL_14;
  }
  else
  {
    Menu_LoadSlot(lastSaveForResume);
    MobileMenu::Unload((MobileMenu *)&gMobileMenu);
    v2 = dword_6E0090;
    dword_6E0098 = 0;
    byte_6E00D9 = 0;
    while ( v2 )
    {
      --v2;
      v3 = *(_DWORD *)(dword_6E0094 + 4 * v2);
      dword_6E0090 = v2;
      if ( v3 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
        v2 = dword_6E0090;
      }
    }
    Menu_SwitchOffToGame();
    if ( Menu_IsPlayingGame(1) == 1 )
LABEL_14:
      skipFrame = 2;
  }
  result = &gMobileMenu;
  LOBYTE(word_6E00C0) = 0;
  return result;
}


// ============================================================

// Address: 0x29da2c
// Original: _ZN14MainMenuScreen10OnSettingsEv
// Demangled: MainMenuScreen::OnSettings(void)
int __fastcall MainMenuScreen::OnSettings(MainMenuScreen *this)
{
  SettingsScreen *v1; // r0
  MenuScreen *v2; // r0
  bool v3; // r2

  AddMenuStat(2, 1);
  v1 = (SettingsScreen *)operator new(0x58u);
  SettingsScreen::SettingsScreen(v1);
  return sub_19721C(v2, (MenuScreen *)((char *)&stderr + 1), v3);
}


// ============================================================

// Address: 0x29db14
// Original: _ZN14MainMenuScreen11OnStartGameEv
// Demangled: MainMenuScreen::OnStartGame(void)
int *__fastcall MainMenuScreen::OnStartGame(MainMenuScreen *this)
{
  unsigned __int8 IsPlayingGame; // r0
  int v2; // r2
  int v3; // r4
  int Texture; // r9
  int v5; // r5
  unsigned int v6; // r10
  _DWORD *v7; // r0
  void *v8; // r8
  _DWORD *v9; // r6
  int v10; // r1
  int v11; // r0
  int *result; // r0
  char *v13; // r1
  const char *v14; // r1
  int v15; // r9
  int v16; // r5
  unsigned int v17; // r10
  _DWORD *v18; // r0
  void *v19; // r8
  _DWORD *v20; // r6
  __int64 v21; // r0
  int v22; // r9
  int v23; // r5
  unsigned int v24; // r10
  _DWORD *v25; // r0
  void *v26; // r8
  _DWORD *v27; // r6
  char *v28; // r2
  __int64 v29; // r0

  AddMenuStat(5, 1);
  Menu_PopulateSaves(0);
  IsPlayingGame = Menu_IsPlayingGame(1);
  if ( GameToSKip <= 8 )
  {
    v2 = 0;
    while ( CGenericGameStorage::ms_Slots[v2] )
    {
      if ( ++v2 >= 9 - GameToSKip )
        goto LABEL_5;
    }
    goto LABEL_6;
  }
LABEL_5:
  if ( (IsPlayingGame & ((_BYTE)word_6E00C0 == 0)) == 1 )
  {
LABEL_6:
    v3 = operator new(0x58u);
    FlowScreen::FlowScreen((FlowScreen *)v3, 1, 0);
    *(_DWORD *)v3 = &off_662AC8;
    Texture = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainplay", (const char *)&off_662AC8);
    ++*(_DWORD *)(Texture + 84);
    v5 = *(_DWORD *)(v3 + 64);
    if ( *(_DWORD *)(v3 + 60) >= (unsigned int)(v5 + 1) )
    {
      v9 = *(_DWORD **)(v3 + 68);
    }
    else
    {
      v6 = 4 * (v5 + 1) / 3u + 3;
      v7 = malloc(12 * v6);
      v8 = *(void **)(v3 + 68);
      v9 = v7;
      if ( v8 )
      {
        memcpy_0(v7, *(const void **)(v3 + 68), 12 * v5);
        free(v8);
        v5 = *(_DWORD *)(v3 + 64);
      }
      *(_DWORD *)(v3 + 68) = v9;
      *(_DWORD *)(v3 + 60) = v6;
    }
    v9[3 * v5] = Texture;
    v13 = (char *)&v9[3 * v5];
    *((_DWORD *)v13 + 1) = "FES_NGA";
    *((_DWORD *)v13 + 2) = StartGameScreen::OnNewGameCheck;
    v14 = (const char *)(*(_DWORD *)(v3 + 64) + 1);
    *(_DWORD *)(v3 + 64) = v14;
    v15 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainresume", v14);
    ++*(_DWORD *)(v15 + 84);
    v16 = *(_DWORD *)(v3 + 64);
    if ( *(_DWORD *)(v3 + 60) >= (unsigned int)(v16 + 1) )
    {
      v20 = *(_DWORD **)(v3 + 68);
    }
    else
    {
      v17 = 4 * (v16 + 1) / 3u + 3;
      v18 = malloc(12 * v17);
      v19 = *(void **)(v3 + 68);
      v20 = v18;
      if ( v19 )
      {
        memcpy_0(v18, *(const void **)(v3 + 68), 12 * v16);
        free(v19);
        v16 = *(_DWORD *)(v3 + 64);
      }
      *(_DWORD *)(v3 + 68) = v20;
      *(_DWORD *)(v3 + 60) = v17;
    }
    v20[3 * v16] = v15;
    HIDWORD(v21) = StartGameScreen::OnLoadGame;
    LODWORD(v21) = "FET_LG";
    *(_QWORD *)&v20[3 * v16 + 1] = v21;
    ++*(_DWORD *)(v3 + 64);
    v22 = TextureDatabaseRuntime::GetTexture(
            (TextureDatabaseRuntime *)"menu_maindelete",
            (const char *)StartGameScreen::OnLoadGame);
    ++*(_DWORD *)(v22 + 84);
    v23 = *(_DWORD *)(v3 + 64);
    if ( *(_DWORD *)(v3 + 60) >= (unsigned int)(v23 + 1) )
    {
      v27 = *(_DWORD **)(v3 + 68);
    }
    else
    {
      v24 = 4 * (v23 + 1) / 3u + 3;
      v25 = malloc(12 * v24);
      v26 = *(void **)(v3 + 68);
      v27 = v25;
      if ( v26 )
      {
        memcpy_0(v25, *(const void **)(v3 + 68), 12 * v23);
        free(v26);
        v23 = *(_DWORD *)(v3 + 64);
      }
      *(_DWORD *)(v3 + 68) = v27;
      *(_DWORD *)(v3 + 60) = v24;
    }
    v27[3 * v23] = v22;
    v28 = (char *)&v27[3 * v23];
    HIDWORD(v29) = StartGameScreen::OnDeleteGame;
    LODWORD(v29) = "FES_DEL";
    *(_QWORD *)(v28 + 4) = v29;
    ++*(_DWORD *)(v3 + 64);
    return (int *)sub_19721C((MenuScreen *)v3, (MenuScreen *)((char *)&stderr + 1), (bool)v28);
  }
  Menu_NewGame();
  MobileMenu::Unload((MobileMenu *)&gMobileMenu);
  v10 = dword_6E0090;
  dword_6E0098 = 0;
  byte_6E00D9 = 0;
  while ( v10 )
  {
    --v10;
    v11 = *(_DWORD *)(dword_6E0094 + 4 * v10);
    dword_6E0090 = v10;
    if ( v11 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 4))(v11);
      v10 = dword_6E0090;
    }
  }
  Menu_SwitchOffToGame();
  result = (int *)Menu_IsPlayingGame(1);
  if ( result == (int *)((char *)&stderr + 1) )
  {
    result = &skipFrame;
    skipFrame = 2;
  }
  return result;
}


// ============================================================

// Address: 0x29dde0
// Original: _ZN14MainMenuScreen9HasCPSaveEv
// Demangled: MainMenuScreen::HasCPSave(void)
int __fastcall MainMenuScreen::HasCPSave(MainMenuScreen *this, int a2, int *a3)
{
  CGenericGameStorage *v3; // r4
  int Date; // r6
  unsigned int v5; // r1
  unsigned int v6; // r9
  __int64 v7; // r0
  char v9[260]; // [sp+0h] [bp-120h] BYREF

  v3 = (CGenericGameStorage *)lastSaveForResume;
  if ( lastSaveForResume == -1 )
  {
    C_PcSave::GenerateGameFilename((C_PcSave *)&PcSaveHelper, 9, v9);
    Date = OS_FileGetDate(1, v9);
    v6 = v5;
    v3 = (CGenericGameStorage *)byte_8;
    C_PcSave::GenerateGameFilename((C_PcSave *)&PcSaveHelper, 8, v9);
    LODWORD(v7) = OS_FileGetDate(1, v9);
    if ( !(HIDWORD(v7) | v6 | (unsigned int)v7 | Date) )
      v3 = (CGenericGameStorage *)byte_9;
    a3 = &lastSaveForResume;
    if ( v7 < __SPAIR64__(v6, Date) )
      v3 = (CGenericGameStorage *)byte_9;
    lastSaveForResume = (int)v3;
  }
  return CGenericGameStorage::CheckSlotDataValid(v3, 1, (bool)a3);
}


// ============================================================

// Address: 0x29de88
// Original: _ZN14MainMenuScreen6OnExitEv
// Demangled: MainMenuScreen::OnExit(void)
int *__fastcall MainMenuScreen::OnExit(MainMenuScreen *this)
{
  int *result; // r0

  result = &RsGlobal;
  dword_9FC90C = 1;
  return result;
}


// ============================================================


// Address: 0x2a7200
// Original: _ZN15StartGameScreen14OnNewGameCheckEv
// Demangled: StartGameScreen::OnNewGameCheck(void)
void *__fastcall StartGameScreen::OnNewGameCheck(StartGameScreen *this)
{
  int v1; // r1
  int v2; // r0
  void *result; // r0

  Menu_NewGame();
  if ( Menu_IsPlayingGame(1) == 1 )
    Menu_DrawLoadScreen(1, 0);
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
  if ( Menu_IsPlayingGame(1) == 1 )
    skipFrame = 2;
  result = &gMobileMenu;
  LOBYTE(word_6E00C0) = 0;
  return result;
}


// ============================================================

// Address: 0x2a7294
// Original: _ZN15StartGameScreen10OnLoadGameEv
// Demangled: StartGameScreen::OnLoadGame(void)
void *__fastcall StartGameScreen::OnLoadGame(StartGameScreen *this)
{
  LoadScreen *v1; // r4
  char IsPlayingGame; // r0
  void *result; // r0

  UpdateCloudSaves();
  Menu_PopulateSaves(0);
  AddMenuStat(6, 1);
  v1 = (LoadScreen *)operator new(0x44u);
  IsPlayingGame = Menu_IsPlayingGame(1);
  LoadScreen::LoadScreen(v1, IsPlayingGame);
  if ( dword_6E0090 )
    (*(void (__fastcall **)(LoadScreen *, _DWORD))(*(_DWORD *)v1 + 20))(
      v1,
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  if ( dword_6E0098 )
    MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
  result = &gMobileMenu;
  dword_6E0098 = (int)v1;
  return result;
}


// ============================================================

// Address: 0x2a7314
// Original: _ZN15StartGameScreen12OnDeleteGameEv
// Demangled: StartGameScreen::OnDeleteGame(void)
void *__fastcall StartGameScreen::OnDeleteGame(StartGameScreen *this)
{
  CharSelectScreen *v1; // r10
  int v2; // r0
  int v3; // r5
  int v4; // r0
  void *result; // r0

  AddMenuStat(8, 1);
  v1 = (CharSelectScreen *)operator new(0x44u);
  CharSelectScreen::CharSelectScreen(v1, "FES_DEL", 1);
  *(_DWORD *)v1 = &off_662B5C;
  Menu_PopulateSaves(0);
  v2 = GameToSKip;
  *(_DWORD *)v1 = &off_662BE4;
  if ( v2 <= 7 )
  {
    v3 = 0;
    do
    {
      if ( (v3 | 1) != 7 || !UseCloudSaves )
      {
        v4 = operator new(0x10u);
        *(_BYTE *)(v4 + 12) = 0;
        *(_DWORD *)v4 = &off_662C40;
        *(_DWORD *)(v4 + 4) = &byte_61CD7E;
        *(_DWORD *)(v4 + 8) = v3;
        SelectScreen::AddItem(v1, (SelectScreen::MenuSelection *)v4);
        v2 = GameToSKip;
      }
      ++v3;
    }
    while ( v3 < 8 - v2 );
  }
  if ( dword_6E0090 )
    (*(void (__fastcall **)(CharSelectScreen *, _DWORD))(*(_DWORD *)v1 + 20))(
      v1,
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  if ( dword_6E0098 )
    MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
  result = &gMobileMenu;
  dword_6E0098 = (int)v1;
  return result;
}


// ============================================================

// Address: 0x2a7434
// Original: _ZN15StartGameScreenD0Ev
// Demangled: StartGameScreen::~StartGameScreen()
void __fastcall StartGameScreen::~StartGameScreen(StartGameScreen *this)
{
  void *v1; // r0

  FlowScreen::~FlowScreen(this);
  operator delete(v1);
}


// ============================================================

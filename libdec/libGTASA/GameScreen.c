
// Address: 0x19c1d8
// Original: j__ZN10GameScreenC2Ev
// Demangled: GameScreen::GameScreen(void)
// attributes: thunk
void __fastcall GameScreen::GameScreen(GameScreen *this)
{
  _ZN10GameScreenC2Ev(this);
}


// ============================================================

// Address: 0x2a48d0
// Original: _ZN10GameScreenC2Ev
// Demangled: GameScreen::GameScreen(void)
void __fastcall GameScreen::GameScreen(GameScreen *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  SelectScreen::MenuSelection *v7; // r0
  SelectScreen::MenuSelection *v8; // r0

  CharSelectScreen::CharSelectScreen(this, "FEH_LOA", 1);
  *(_DWORD *)this = &off_662874;
  v2 = (_DWORD *)operator new(0x1Cu);
  v2[1] = dword_6E0474;
  v2[2] = 4;
  *(_DWORD *)((char *)v2 + 21) = 0;
  *(_DWORD *)((char *)v2 + 17) = 0;
  v2[3] = 0;
  v2[4] = 0;
  *v2 = &off_662848;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v2);
  v3 = (_DWORD *)operator new(0x1Cu);
  v3[1] = dword_6E04B4;
  v3[2] = 6;
  *(_DWORD *)((char *)v3 + 21) = 0;
  *(_DWORD *)((char *)v3 + 17) = 0;
  v3[3] = 0;
  v3[4] = 0;
  *v3 = &off_662848;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v3);
  v4 = (_DWORD *)operator new(0x1Cu);
  v4[1] = dword_6E0534;
  v4[2] = 10;
  *(_DWORD *)((char *)v4 + 21) = 0;
  *(_DWORD *)((char *)v4 + 17) = 0;
  v4[3] = 0;
  v4[4] = 0;
  *v4 = &off_662848;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v4);
  v5 = (_DWORD *)operator new(0x1Cu);
  v5[1] = dword_6E0794;
  v5[2] = 29;
  *(_DWORD *)((char *)v5 + 21) = 0;
  *(_DWORD *)((char *)v5 + 17) = 0;
  v5[3] = 0;
  v5[4] = 0;
  *v5 = &off_662848;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v5);
  v6 = (_DWORD *)operator new(0x1Cu);
  v6[1] = dword_6E07B4;
  v6[2] = 30;
  *(_DWORD *)((char *)v6 + 21) = 0;
  *(_DWORD *)((char *)v6 + 17) = 0;
  v6[3] = 0;
  v6[4] = 0;
  *v6 = &off_662848;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v6);
  if ( hasTouchScreen )
  {
    v7 = (SelectScreen::MenuSelection *)operator new(0x10u);
    *((_DWORD *)v7 + 1) = "MOB_SCI";
    *((_DWORD *)v7 + 2) = SelectScreen::OnSocialClub;
    *((_DWORD *)v7 + 3) = 0;
    *(_DWORD *)v7 = &off_66281C;
    SelectScreen::AddItem(this, v7);
  }
  v8 = (SelectScreen::MenuSelection *)operator new(0x10u);
  *((_DWORD *)v8 + 1) = "MOB_RTD";
  *((_DWORD *)v8 + 2) = SelectScreen::OnRestoreDefaults;
  *((_DWORD *)v8 + 3) = 0;
  *(_DWORD *)v8 = &off_66281C;
  SelectScreen::AddItem(this, v8);
  *((_BYTE *)this + 48) = 1;
}


// ============================================================

// Address: 0x2a4a84
// Original: _ZN10GameScreenD0Ev
// Demangled: GameScreen::~GameScreen()
void __fastcall GameScreen::~GameScreen(GameScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

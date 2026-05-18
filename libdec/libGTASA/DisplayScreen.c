
// Address: 0x19ee28
// Original: j__ZN13DisplayScreenC2Ev
// Demangled: DisplayScreen::DisplayScreen(void)
// attributes: thunk
void __fastcall DisplayScreen::DisplayScreen(DisplayScreen *this)
{
  _ZN13DisplayScreenC2Ev(this);
}


// ============================================================

// Address: 0x2a4a94
// Original: _ZN13DisplayScreenC2Ev
// Demangled: DisplayScreen::DisplayScreen(void)
void __fastcall DisplayScreen::DisplayScreen(DisplayScreen *this)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  SelectScreen::MenuSelection *v10; // r0

  CharSelectScreen::CharSelectScreen(this, "FEH_DIS", 1);
  *(_DWORD *)this = &off_6628D0;
  v2 = (_DWORD *)operator new(0x1Cu);
  v2[1] = dword_6E05F4;
  v2[2] = 16;
  *(_DWORD *)((char *)v2 + 21) = 0;
  *(_DWORD *)((char *)v2 + 17) = 0;
  v2[3] = 0;
  v2[4] = 0;
  *v2 = &off_662848;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v2);
  v3 = operator new(0x1Cu);
  v4 = MobileSettings::settings[0];
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_DWORD *)v3 = &off_662848;
  *(_DWORD *)(v3 + 4) = v4;
  *(_BYTE *)(v3 + 24) = 0;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v3);
  v5 = (_DWORD *)operator new(0x1Cu);
  v5[1] = dword_6E0414;
  v5[2] = 1;
  *(_DWORD *)((char *)v5 + 21) = 0;
  *(_DWORD *)((char *)v5 + 17) = 0;
  v5[3] = 0;
  v5[4] = 0;
  *v5 = &off_662848;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v5);
  v6 = (_DWORD *)operator new(0x1Cu);
  v6[1] = dword_6E0434;
  v6[2] = 2;
  *(_DWORD *)((char *)v6 + 21) = 0;
  *(_DWORD *)((char *)v6 + 17) = 0;
  v6[3] = 0;
  v6[4] = 0;
  *v6 = &off_662848;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v6);
  v7 = (_DWORD *)operator new(0x1Cu);
  v7[1] = dword_6E0494;
  v7[2] = 5;
  *(_DWORD *)((char *)v7 + 21) = 0;
  *(_DWORD *)((char *)v7 + 17) = 0;
  v7[3] = 0;
  v7[4] = 0;
  *v7 = &off_662848;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v7);
  v8 = (_DWORD *)operator new(0x1Cu);
  v8[1] = dword_6E04D4;
  v8[2] = 7;
  *(_DWORD *)((char *)v8 + 21) = 0;
  *(_DWORD *)((char *)v8 + 17) = 0;
  v8[3] = 0;
  v8[4] = 0;
  *v8 = &off_662848;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v8);
  v9 = (_DWORD *)operator new(0x1Cu);
  v9[1] = dword_6E06F4;
  v9[2] = 24;
  *(_DWORD *)((char *)v9 + 21) = 0;
  *(_DWORD *)((char *)v9 + 17) = 0;
  v9[3] = 0;
  v9[4] = 0;
  *v9 = &off_662848;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v9);
  v10 = (SelectScreen::MenuSelection *)operator new(0x10u);
  *(_DWORD *)v10 = &off_66281C;
  *((_DWORD *)v10 + 1) = "MOB_RTD";
  *((_DWORD *)v10 + 2) = SelectScreen::OnRestoreDefaults;
  *((_DWORD *)v10 + 3) = 0;
  SelectScreen::AddItem(this, v10);
  *((_BYTE *)this + 48) = 1;
}


// ============================================================

// Address: 0x2a4c24
// Original: _ZN13DisplayScreenD0Ev
// Demangled: DisplayScreen::~DisplayScreen()
void __fastcall DisplayScreen::~DisplayScreen(DisplayScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

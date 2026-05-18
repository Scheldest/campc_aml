
// Address: 0x1a1428
// Original: j__ZN14LanguageScreenC2Ev
// Demangled: LanguageScreen::LanguageScreen(void)
// attributes: thunk
void __fastcall LanguageScreen::LanguageScreen(LanguageScreen *this)
{
  _ZN14LanguageScreenC2Ev(this);
}


// ============================================================

// Address: 0x2a5b1c
// Original: _ZN14LanguageScreenC2Ev
// Demangled: LanguageScreen::LanguageScreen(void)
void __fastcall LanguageScreen::LanguageScreen(LanguageScreen *this)
{
  SelectScreen::MenuSelection *v2; // r0
  __int64 v3; // r2
  SelectScreen::MenuSelection *v4; // r0
  SelectScreen::MenuSelection *v5; // r0
  SelectScreen::MenuSelection *v6; // r0
  SelectScreen::MenuSelection *v7; // r0
  SelectScreen::MenuSelection *v8; // r0
  SelectScreen::MenuSelection *v9; // r0

  CharSelectScreen::CharSelectScreen(this, "FEH_LAN", 1);
  *(_DWORD *)this = &off_6629B4;
  v2 = (SelectScreen::MenuSelection *)operator new(0x10u);
  HIDWORD(v3) = "FEL_ENG";
  LODWORD(v3) = &off_66281C;
  *(_QWORD *)v2 = v3;
  *((_DWORD *)v2 + 2) = LanguageScreen::English;
  *((_DWORD *)v2 + 3) = 0;
  SelectScreen::AddItem(this, v2);
  if ( !ForceGermanBuild )
  {
    v4 = (SelectScreen::MenuSelection *)operator new(0x10u);
    *((_DWORD *)v4 + 1) = "FEL_FRE";
    *((_DWORD *)v4 + 2) = LanguageScreen::French;
    *((_DWORD *)v4 + 3) = 0;
    *(_DWORD *)v4 = &off_66281C;
    SelectScreen::AddItem(this, v4);
    v5 = (SelectScreen::MenuSelection *)operator new(0x10u);
    *(_DWORD *)v5 = &off_66281C;
    *((_DWORD *)v5 + 1) = "FEL_ITA";
    *((_DWORD *)v5 + 2) = LanguageScreen::Italian;
    *((_DWORD *)v5 + 3) = 0;
    SelectScreen::AddItem(this, v5);
  }
  v6 = (SelectScreen::MenuSelection *)operator new(0x10u);
  *((_DWORD *)v6 + 1) = "FEL_GER";
  *((_DWORD *)v6 + 2) = LanguageScreen::German;
  *((_DWORD *)v6 + 3) = 0;
  *(_DWORD *)v6 = &off_66281C;
  SelectScreen::AddItem(this, v6);
  if ( !ForceGermanBuild )
  {
    v7 = (SelectScreen::MenuSelection *)operator new(0x10u);
    *((_DWORD *)v7 + 1) = "FEL_SPA";
    *((_DWORD *)v7 + 2) = LanguageScreen::Spanish;
    *((_DWORD *)v7 + 3) = 0;
    *(_DWORD *)v7 = &off_66281C;
    SelectScreen::AddItem(this, v7);
    v8 = (SelectScreen::MenuSelection *)operator new(0x10u);
    *(_DWORD *)v8 = &off_66281C;
    *((_DWORD *)v8 + 1) = "FEL_JPN";
    *((_DWORD *)v8 + 2) = LanguageScreen::Japenese;
    *((_DWORD *)v8 + 3) = 0;
    SelectScreen::AddItem(this, v8);
    v9 = (SelectScreen::MenuSelection *)operator new(0x10u);
    *(_DWORD *)v9 = &off_66281C;
    *((_DWORD *)v9 + 1) = "FEL_RUS";
    *((_DWORD *)v9 + 2) = LanguageScreen::Russian;
    *((_DWORD *)v9 + 3) = 0;
    SelectScreen::AddItem(this, v9);
  }
}


// ============================================================

// Address: 0x2a5cc8
// Original: _ZN14LanguageScreen7EnglishEP12SelectScreeni
// Demangled: LanguageScreen::English(SelectScreen *,int)
int __fastcall LanguageScreen::English(LanguageScreen *this, SelectScreen *a2, int a3)
{
  dword_6E061C = 0;
  OS_ServiceAppCommand("SetLocale", (const char *)&dword_2A5CF4);
  return j_Menu_ApplyLanguage();
}


// ============================================================

// Address: 0x2a5cf8
// Original: _ZN14LanguageScreen8JapeneseEP12SelectScreeni
// Demangled: LanguageScreen::Japenese(SelectScreen *,int)
int __fastcall LanguageScreen::Japenese(LanguageScreen *this, SelectScreen *a2, int a3)
{
  dword_6E061C = 6;
  OS_ServiceAppCommand("SetLocale", (const char *)&dword_2A5D24);
  return j_Menu_ApplyLanguage();
}


// ============================================================

// Address: 0x2a5d28
// Original: _ZN14LanguageScreen6FrenchEP12SelectScreeni
// Demangled: LanguageScreen::French(SelectScreen *,int)
int __fastcall LanguageScreen::French(LanguageScreen *this, SelectScreen *a2, int a3)
{
  dword_6E061C = 1;
  OS_ServiceAppCommand("SetLocale", (const char *)&dword_2A5D54);
  return j_Menu_ApplyLanguage();
}


// ============================================================

// Address: 0x2a5d58
// Original: _ZN14LanguageScreen7ItalianEP12SelectScreeni
// Demangled: LanguageScreen::Italian(SelectScreen *,int)
int __fastcall LanguageScreen::Italian(LanguageScreen *this, SelectScreen *a2, int a3)
{
  dword_6E061C = 3;
  OS_ServiceAppCommand("SetLocale", (const char *)&dword_2A5D84);
  return j_Menu_ApplyLanguage();
}


// ============================================================

// Address: 0x2a5d88
// Original: _ZN14LanguageScreen6GermanEP12SelectScreeni
// Demangled: LanguageScreen::German(SelectScreen *,int)
int __fastcall LanguageScreen::German(LanguageScreen *this, SelectScreen *a2, int a3)
{
  dword_6E061C = 2;
  OS_ServiceAppCommand("SetLocale", (const char *)&dword_2A5DB4);
  return j_Menu_ApplyLanguage();
}


// ============================================================

// Address: 0x2a5db8
// Original: _ZN14LanguageScreen7SpanishEP12SelectScreeni
// Demangled: LanguageScreen::Spanish(SelectScreen *,int)
int __fastcall LanguageScreen::Spanish(LanguageScreen *this, SelectScreen *a2, int a3)
{
  dword_6E061C = 4;
  OS_ServiceAppCommand("SetLocale", (const char *)&dword_2A5DE4);
  return j_Menu_ApplyLanguage();
}


// ============================================================

// Address: 0x2a5de8
// Original: _ZN14LanguageScreen7RussianEP12SelectScreeni
// Demangled: LanguageScreen::Russian(SelectScreen *,int)
int __fastcall LanguageScreen::Russian(LanguageScreen *this, SelectScreen *a2, int a3)
{
  dword_6E061C = 5;
  OS_ServiceAppCommand("SetLocale", (const char *)&dword_2A5E14);
  return j_Menu_ApplyLanguage();
}


// ============================================================

// Address: 0x2a5e18
// Original: _ZN14LanguageScreenD0Ev
// Demangled: LanguageScreen::~LanguageScreen()
void __fastcall LanguageScreen::~LanguageScreen(LanguageScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

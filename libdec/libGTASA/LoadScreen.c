
// Address: 0x18de48
// Original: j__ZN10LoadScreen19LoadScreenSelection4LoadEv
// Demangled: LoadScreen::LoadScreenSelection::Load(void)
// attributes: thunk
LoadScreen *__fastcall LoadScreen::LoadScreenSelection::Load(LoadScreen::LoadScreenSelection *this)
{
  return _ZN10LoadScreen19LoadScreenSelection4LoadEv(this);
}


// ============================================================

// Address: 0x1929f8
// Original: j__ZN10LoadScreenC2Eb
// Demangled: LoadScreen::LoadScreen(bool)
// attributes: thunk
void __fastcall LoadScreen::LoadScreen(LoadScreen *this, bool a2)
{
  _ZN10LoadScreenC2Eb(this, a2);
}


// ============================================================

// Address: 0x2a7444
// Original: _ZN10LoadScreenC2Eb
// Demangled: LoadScreen::LoadScreen(bool)
void __fastcall LoadScreen::LoadScreen(LoadScreen *this, bool a2)
{
  int v4; // r0
  int v5; // r4
  int v6; // r0

  CharSelectScreen::CharSelectScreen(this, "FET_LG", 1);
  *(_DWORD *)this = &off_662B5C;
  Menu_PopulateSaves(0);
  *(_DWORD *)this = &off_662B00;
  v4 = operator new(0x10u);
  *(_BYTE *)(v4 + 12) = 1;
  *(_DWORD *)v4 = &off_662BB8;
  *(_DWORD *)(v4 + 4) = &byte_61CD7E;
  *(_DWORD *)(v4 + 8) = 8;
  *(_BYTE *)(v4 + 13) = a2;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v4);
  if ( GameToSKip <= 7 )
  {
    v5 = 0;
    do
    {
      v6 = operator new(0x10u);
      *(_BYTE *)(v6 + 12) = 0;
      *(_BYTE *)(v6 + 13) = a2;
      *(_DWORD *)v6 = &off_662BB8;
      *(_DWORD *)(v6 + 4) = &byte_61CD7E;
      *(_DWORD *)(v6 + 8) = v5;
      SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v6);
      ++v5;
    }
    while ( v5 < 8 - GameToSKip );
  }
}


// ============================================================

// Address: 0x2a7520
// Original: _ZN10LoadScreenD0Ev
// Demangled: LoadScreen::~LoadScreen()
void __fastcall LoadScreen::~LoadScreen(LoadScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2a754a
// Original: _ZN10LoadScreen19LoadScreenSelectionD0Ev
// Demangled: LoadScreen::LoadScreenSelection::~LoadScreenSelection()
// attributes: thunk
void __fastcall LoadScreen::LoadScreenSelection::~LoadScreenSelection(LoadScreen::LoadScreenSelection *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x2a7748
// Original: _ZN10LoadScreen19LoadScreenSelection11HandleInputEP12SelectScreenf
// Demangled: LoadScreen::LoadScreenSelection::HandleInput(SelectScreen *,float)
LoadScreen *__fastcall LoadScreen::LoadScreenSelection::HandleInput(
        LoadScreen::LoadScreenSelection *this,
        SelectScreen *a2,
        float a3)
{
  LoadScreen *result; // r0
  CharSelectScreen *v5; // r4
  SelectScreen::MenuSelection *v6; // r0
  SelectScreen::MenuSelection *v7; // r0

  if ( CHID::Implements() == 1 && CHID::IsReleased(64)
    || (result = (LoadScreen *)*((_DWORD *)&gMobileMenu + lastDevice + 36)) == 0 )
  {
    result = (LoadScreen *)CGenericGameStorage::ms_Slots[*((_DWORD *)this + 2)];
    if ( !result )
    {
      if ( !NeedsAmazonDownload() )
        CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 1, 0.0, 1.0);
      if ( *((_BYTE *)this + 13) )
      {
        v5 = (CharSelectScreen *)operator new(0x54u);
        CharSelectScreen::CharSelectScreen(v5, "FET_LG", 1);
        *((_DWORD *)v5 + 17) = "FESZ_QL";
        *((_DWORD *)v5 + 19) = this;
        *((_DWORD *)v5 + 20) = 0;
        *((_DWORD *)v5 + 18) = LoadScreen::LoadScreenSelection::ConfirmLoad;
        *(_DWORD *)v5 = &off_662DAC;
        CachePlayerControls();
        v6 = (SelectScreen::MenuSelection *)operator new(0x10u);
        *(_DWORD *)v6 = &off_66281C;
        *((_DWORD *)v6 + 1) = "FEM_NO";
        *((_DWORD *)v6 + 2) = YesNoScreen::NoFunc;
        *((_DWORD *)v6 + 3) = 0;
        SelectScreen::AddItem(v5, v6);
        v7 = (SelectScreen::MenuSelection *)operator new(0x10u);
        *(_DWORD *)v7 = &off_66281C;
        *((_DWORD *)v7 + 1) = "FEM_YES";
        *((_DWORD *)v7 + 2) = YesNoScreen::YesFunc;
        *((_DWORD *)v7 + 3) = 0;
        SelectScreen::AddItem(v5, v7);
        if ( dword_6E0090 )
          (*(void (__fastcall **)(CharSelectScreen *, _DWORD))(*(_DWORD *)v5 + 20))(
            v5,
            *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
        if ( dword_6E0098 )
          MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
        result = (LoadScreen *)&gMobileMenu;
        dword_6E0098 = (int)v5;
      }
      else
      {
        return j_LoadScreen::LoadScreenSelection::Load(this);
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x2a78cc
// Original: _ZN10LoadScreen19LoadScreenSelection11ConfirmLoadEPv
// Demangled: LoadScreen::LoadScreenSelection::ConfirmLoad(void *)
// attributes: thunk
LoadScreen *__fastcall LoadScreen::LoadScreenSelection::ConfirmLoad(LoadScreen::LoadScreenSelection *this, void *a2)
{
  return j_LoadScreen::LoadScreenSelection::Load(this);
}


// ============================================================

// Address: 0x2a78d0
// Original: _ZN10LoadScreen19LoadScreenSelection4LoadEv
// Demangled: LoadScreen::LoadScreenSelection::Load(void)
LoadScreen *__fastcall LoadScreen::LoadScreenSelection::Load(LoadScreen::LoadScreenSelection *this)
{
  int v1; // r1
  int v2; // r0
  LoadScreen *result; // r0
  CharSelectScreen *v4; // r4
  SelectScreen::MenuSelection *v5; // r0

  if ( Menu_LoadSlot(*((_DWORD *)this + 2)) == 1 )
  {
    if ( Menu_IsPlayingGame(1) == 1 )
      Menu_DrawLoadScreen(0, 30);
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
    if ( Menu_IsPlayingGame(1) == 1 )
      skipFrame = 2;
    result = (LoadScreen *)&gMobileMenu;
    LOBYTE(word_6E00C0) = 0;
  }
  else
  {
    v4 = (CharSelectScreen *)operator new(0x50u);
    CharSelectScreen::CharSelectScreen(v4, "FET_LG", 1);
    *((_DWORD *)v4 + 17) = "FES_LCE";
    *((_DWORD *)v4 + 18) = LoadScreen::LoadScreenSelection::LoadFailed;
    *((_DWORD *)v4 + 19) = 0;
    *(_DWORD *)v4 = &off_662E08;
    v5 = (SelectScreen::MenuSelection *)operator new(0x10u);
    *(_DWORD *)v5 = &off_66281C;
    *((_DWORD *)v5 + 1) = "FEM_OK";
    *((_DWORD *)v5 + 2) = OkScreen::OkFunc;
    *((_DWORD *)v5 + 3) = 0;
    SelectScreen::AddItem(v4, v5);
    if ( dword_6E0090 )
      (*(void (__fastcall **)(CharSelectScreen *, _DWORD))(*(_DWORD *)v4 + 20))(
        v4,
        *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
    if ( dword_6E0098 )
      MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
    result = (LoadScreen *)&gMobileMenu;
    dword_6E0098 = (int)v4;
  }
  return result;
}


// ============================================================

// Address: 0x2a7a30
// Original: _ZN10LoadScreen19LoadScreenSelection10LoadFailedEPv
// Demangled: LoadScreen::LoadScreenSelection::LoadFailed(void *)
void __fastcall LoadScreen::LoadScreenSelection::LoadFailed(LoadScreen::LoadScreenSelection *this, void *a2)
{
  ;
}


// ============================================================

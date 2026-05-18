
// Address: 0x2a7a32
// Original: _ZN12DeleteScreenD0Ev
// Demangled: DeleteScreen::~DeleteScreen()
void __fastcall DeleteScreen::~DeleteScreen(DeleteScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2a7a42
// Original: _ZN12DeleteScreen21DeleteScreenSelectionD0Ev
// Demangled: DeleteScreen::DeleteScreenSelection::~DeleteScreenSelection()
// attributes: thunk
void __fastcall DeleteScreen::DeleteScreenSelection::~DeleteScreenSelection(DeleteScreen::DeleteScreenSelection *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x2a7a48
// Original: _ZN12DeleteScreen21DeleteScreenSelection11HandleInputEP12SelectScreenf
// Demangled: DeleteScreen::DeleteScreenSelection::HandleInput(SelectScreen *,float)
void *__fastcall DeleteScreen::DeleteScreenSelection::HandleInput(
        DeleteScreen::DeleteScreenSelection *this,
        SelectScreen *a2,
        float a3)
{
  void *result; // r0
  CharSelectScreen *v5; // r4
  SelectScreen::MenuSelection *v6; // r0
  SelectScreen::MenuSelection *v7; // r0

  if ( CHID::Implements() == 1 && CHID::IsReleased(64)
    || (result = (void *)*((_DWORD *)&gMobileMenu + lastDevice + 36)) == 0 )
  {
    result = (void *)CGenericGameStorage::ms_Slots[*((_DWORD *)this + 2)];
    if ( !result )
    {
      if ( !NeedsAmazonDownload() )
        CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 1, 0.0, 1.0);
      v5 = (CharSelectScreen *)operator new(0x54u);
      CharSelectScreen::CharSelectScreen(v5, "FES_DEL", 1);
      *((_DWORD *)v5 + 17) = "FESZ_QD";
      *((_DWORD *)v5 + 19) = this;
      *((_DWORD *)v5 + 20) = 0;
      *((_DWORD *)v5 + 18) = DeleteScreen::DeleteScreenSelection::ConfirmDelete;
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
      result = &gMobileMenu;
      dword_6E0098 = (int)v5;
    }
  }
  return result;
}


// ============================================================

// Address: 0x2a7bb8
// Original: _ZN12DeleteScreen21DeleteScreenSelection13ConfirmDeleteEPv
// Demangled: DeleteScreen::DeleteScreenSelection::ConfirmDelete(void *)
int __fastcall DeleteScreen::DeleteScreenSelection::ConfirmDelete(DeleteScreen::DeleteScreenSelection *this, void *a2)
{
  int result; // r0

  result = Menu_DeleteSlot(*((_DWORD *)this + 2));
  if ( result == 1 )
    return j_Menu_PopulateSaves(1);
  return result;
}


// ============================================================

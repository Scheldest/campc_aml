
// Address: 0x199e60
// Original: j__ZN10SaveScreen19SaveScreenSelection4SaveEv
// Demangled: SaveScreen::SaveScreenSelection::Save(void)
// attributes: thunk
SaveScreen *__fastcall SaveScreen::SaveScreenSelection::Save(SaveScreen::SaveScreenSelection *this)
{
  return _ZN10SaveScreen19SaveScreenSelection4SaveEv(this);
}


// ============================================================

// Address: 0x2a80fc
// Original: _ZN10SaveScreenD0Ev
// Demangled: SaveScreen::~SaveScreen()
void __fastcall SaveScreen::~SaveScreen(SaveScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2a810c
// Original: _ZN10SaveScreen19SaveScreenSelectionD0Ev
// Demangled: SaveScreen::SaveScreenSelection::~SaveScreenSelection()
// attributes: thunk
void __fastcall SaveScreen::SaveScreenSelection::~SaveScreenSelection(SaveScreen::SaveScreenSelection *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x2a8110
// Original: _ZN10SaveScreen19SaveScreenSelection11HandleInputEP12SelectScreenf
// Demangled: SaveScreen::SaveScreenSelection::HandleInput(SelectScreen *,float)
SaveScreen *__fastcall SaveScreen::SaveScreenSelection::HandleInput(
        SaveScreen::SaveScreenSelection *this,
        SelectScreen *a2,
        float a3)
{
  SaveScreen *result; // r0
  CharSelectScreen *v5; // r5
  SelectScreen::MenuSelection *v6; // r0
  SelectScreen::MenuSelection *v7; // r0

  if ( CHID::Implements() == 1 && CHID::IsReleased(64)
    || (result = (SaveScreen *)*((_DWORD *)&gMobileMenu + lastDevice + 36)) == 0 )
  {
    if ( (*((_DWORD *)this + 2) | 1) != 7
      || !UseCloudSaves
      || (result = (SaveScreen *)IsSCCloudAvailable(), result == (SaveScreen *)((char *)&stderr + 1)) )
    {
      if ( !NeedsAmazonDownload() )
        CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 1, 0.0, 1.0);
      if ( CGenericGameStorage::ms_Slots[*((_DWORD *)this + 2)] )
      {
        return j_SaveScreen::SaveScreenSelection::Save(this);
      }
      else
      {
        v5 = (CharSelectScreen *)operator new(0x54u);
        CharSelectScreen::CharSelectScreen(v5, "FET_SG", 1);
        *((_DWORD *)v5 + 17) = "FESZ_QO";
        *((_DWORD *)v5 + 19) = this;
        *((_DWORD *)v5 + 20) = 0;
        *((_DWORD *)v5 + 18) = SaveScreen::SaveScreenSelection::ConfirmSave;
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
        result = (SaveScreen *)&gMobileMenu;
        dword_6E0098 = (int)v5;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x2a82ac
// Original: _ZN10SaveScreen19SaveScreenSelection11ConfirmSaveEPv
// Demangled: SaveScreen::SaveScreenSelection::ConfirmSave(void *)
// attributes: thunk
SaveScreen *__fastcall SaveScreen::SaveScreenSelection::ConfirmSave(SaveScreen::SaveScreenSelection *this, void *a2)
{
  return j_SaveScreen::SaveScreenSelection::Save(this);
}


// ============================================================

// Address: 0x2a82b0
// Original: _ZN10SaveScreen19SaveScreenSelection4SaveEv
// Demangled: SaveScreen::SaveScreenSelection::Save(void)
SaveScreen *__fastcall SaveScreen::SaveScreenSelection::Save(SaveScreen::SaveScreenSelection *this)
{
  _DWORD *v1; // r5
  int v2; // r6
  int v3; // r4
  __int64 v4; // r0
  SelectScreen::MenuSelection *v5; // r0
  SelectScreen::MenuSelection *v6; // r0
  SaveScreen *result; // r0

  SaveGameStateType = 6;
  v1 = (_DWORD *)((char *)this + 8);
  v2 = C_PcSave::SaveSlot((C_PcSave *)&PcSaveHelper, (CGenericGameStorage *)*((char *)this + 8), 0);
  if ( (*v1 | 1) == 7 && UseCloudSaves )
  {
    v3 = operator new(0x58u);
    CharSelectScreen::CharSelectScreen((CharSelectScreen *)v3, "FET_SG", 0);
    *(_DWORD *)(v3 + 68) = "FESZ_WR";
    *(_DWORD *)(v3 + 72) = SaveScreen::SaveScreenSelection::SaveDone;
    *(_DWORD *)(v3 + 76) = v1;
    *(_DWORD *)v3 = &off_662D50;
    LODWORD(v4) = OS_TimeAccurate();
    *(_QWORD *)(v3 + 80) = v4;
    if ( dword_6E0090 )
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 20))(v3, *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
    if ( dword_6E0098 )
LABEL_15:
      MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
  }
  else
  {
    v3 = operator new(0x50u);
    CharSelectScreen::CharSelectScreen((CharSelectScreen *)v3, "FET_SG", 1);
    if ( v2 )
    {
      *(_DWORD *)(v3 + 68) = "FES_SVF";
      *(_DWORD *)(v3 + 72) = SaveScreen::SaveScreenSelection::SaveFailed;
      *(_DWORD *)(v3 + 76) = 0;
      *(_DWORD *)v3 = &off_662E08;
      v5 = (SelectScreen::MenuSelection *)operator new(0x10u);
      *(_DWORD *)v5 = &off_66281C;
      *((_DWORD *)v5 + 1) = "FEM_OK";
      *((_DWORD *)v5 + 2) = OkScreen::OkFunc;
      *((_DWORD *)v5 + 3) = 0;
      SelectScreen::AddItem((SelectScreen *)v3, v5);
      if ( dword_6E0090 )
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 20))(v3, *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
      if ( dword_6E0098 )
        goto LABEL_15;
    }
    else
    {
      *(_DWORD *)(v3 + 68) = "FES_SSC";
      *(_DWORD *)(v3 + 72) = SaveScreen::SaveScreenSelection::SaveDone;
      *(_DWORD *)(v3 + 76) = 0;
      *(_DWORD *)v3 = &off_662E08;
      v6 = (SelectScreen::MenuSelection *)operator new(0x10u);
      *(_DWORD *)v6 = &off_66281C;
      *((_DWORD *)v6 + 1) = "FEM_OK";
      *((_DWORD *)v6 + 2) = OkScreen::OkFunc;
      *((_DWORD *)v6 + 3) = 0;
      SelectScreen::AddItem((SelectScreen *)v3, v6);
      if ( dword_6E0090 )
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 20))(v3, *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
      if ( dword_6E0098 )
        goto LABEL_15;
    }
  }
  result = (SaveScreen *)&gMobileMenu;
  dword_6E0098 = v3;
  return result;
}


// ============================================================

// Address: 0x2a84f4
// Original: _ZN10SaveScreen19SaveScreenSelection8SaveDoneEPv
// Demangled: SaveScreen::SaveScreenSelection::SaveDone(void *)
int __fastcall SaveScreen::SaveScreenSelection::SaveDone(SaveScreen::SaveScreenSelection *this, void *a2)
{
  if ( (unsigned int)dword_6E0090 >= 2 )
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_6E0094 + 4 * dword_6E0090 - 8) + 20))(
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 8),
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  return j_MobileMenu::RemoveTopScreen((MobileMenu *)&gMobileMenu, 0, 0);
}


// ============================================================

// Address: 0x2a8538
// Original: _ZN10SaveScreen19SaveScreenSelection10SaveFailedEPv
// Demangled: SaveScreen::SaveScreenSelection::SaveFailed(void *)
void __fastcall SaveScreen::SaveScreenSelection::SaveFailed(SaveScreen::SaveScreenSelection *this, void *a2)
{
  ;
}


// ============================================================

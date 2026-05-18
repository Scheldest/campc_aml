
// Address: 0x1a11e8
// Original: j__ZN14ControlsScreenC2Ev
// Demangled: ControlsScreen::ControlsScreen(void)
// attributes: thunk
void __fastcall ControlsScreen::ControlsScreen(ControlsScreen *this)
{
  _ZN14ControlsScreenC2Ev(this);
}


// ============================================================

// Address: 0x29e454
// Original: _ZN14ControlsScreenC2Ev
// Demangled: ControlsScreen::ControlsScreen(void)
void __fastcall ControlsScreen::ControlsScreen(ControlsScreen *this)
{
  int InputType; // r5
  SelectScreen::MenuSelection *v3; // r1
  const char *v4; // r3
  int *v5; // r2
  int v6; // r2
  _DWORD *v7; // r0
  int v8; // r2
  _DWORD *v9; // r1
  int v10; // r0
  _DWORD *v11; // r1
  int v12; // r0
  _DWORD *v13; // r1
  int v14; // r0
  CHID *v15; // r0
  CHID *v16; // r0
  _DWORD *v17; // r0
  int v18; // r2
  _DWORD *v19; // r1
  int v20; // r0
  CHID *v21; // r0
  _DWORD *v22; // r0
  int v23; // r2
  int v24; // r0
  int v25; // r0
  _DWORD *v26; // r0
  int v27; // r2
  int v28; // r0
  _DWORD *v29; // r0
  SelectScreen::MenuSelection *v30; // r0

  CharSelectScreen::CharSelectScreen(this, "FEC_RED", 1);
  *(_DWORD *)this = &off_662680;
  InputType = CHID::GetInputType((CHID *)&off_662680);
  v3 = (SelectScreen::MenuSelection *)operator new(0x10u);
  if ( InputType == 2 )
  {
    v4 = "FEC_KEY";
    v5 = (int *)&ControlsScreen::OnKeyboardControls;
  }
  else
  {
    v4 = "FEC_ADJ";
    v5 = (int *)&ControlsScreen::DoAdjustableHUD;
  }
  *((_DWORD *)v3 + 1) = v4;
  v6 = *v5;
  *((_DWORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 2) = v6;
  *(_DWORD *)v3 = &off_66281C;
  SelectScreen::AddItem(this, v3);
  v7 = (_DWORD *)operator new(0x1Cu);
  v8 = dword_6E0514;
  *v7 = &off_662848;
  v7[1] = v8;
  v7[2] = 9;
  *(_DWORD *)((char *)v7 + 21) = 0;
  *(_DWORD *)((char *)v7 + 17) = 0;
  v7[3] = 0;
  v7[4] = 0;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v7);
  v9 = (_DWORD *)operator new(0x1Cu);
  v10 = dword_6E0454;
  *v9 = &off_662848;
  v9[1] = v10;
  v9[2] = 3;
  *(_DWORD *)((char *)v9 + 21) = 0;
  *(_DWORD *)((char *)v9 + 17) = 0;
  v9[3] = 0;
  v9[4] = 0;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v9);
  v11 = (_DWORD *)operator new(0x1Cu);
  v12 = dword_6E04F4;
  *v11 = &off_662848;
  v11[1] = v12;
  v11[2] = 8;
  *(_DWORD *)((char *)v11 + 21) = 0;
  *(_DWORD *)((char *)v11 + 17) = 0;
  v11[3] = 0;
  v11[4] = 0;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v11);
  v13 = (_DWORD *)operator new(0x1Cu);
  v14 = dword_6E05D4;
  *v13 = &off_662848;
  v13[1] = v14;
  v13[2] = 15;
  *(_DWORD *)((char *)v13 + 21) = 0;
  *(_DWORD *)((char *)v13 + 17) = 0;
  v13[3] = 0;
  v13[4] = 0;
  v15 = (CHID *)SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v13);
  v16 = (CHID *)CHID::GetInputType(v15);
  if ( v16 == (CHID *)((char *)&stderr + 1) )
  {
    v17 = (_DWORD *)operator new(0x1Cu);
    v18 = dword_6E0714;
    *v17 = &off_662848;
    v17[1] = v18;
    v17[2] = 25;
    *(_DWORD *)((char *)v17 + 21) = 0;
    *(_DWORD *)((char *)v17 + 17) = 0;
    v17[3] = 0;
    v17[4] = 0;
    SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v17);
    v19 = (_DWORD *)operator new(0x1Cu);
    v20 = dword_6E0734;
    *v19 = &off_662848;
    v19[1] = v20;
    v19[2] = 26;
    *(_DWORD *)((char *)v19 + 21) = 0;
    *(_DWORD *)((char *)v19 + 17) = 0;
    v19[3] = 0;
    v19[4] = 0;
LABEL_11:
    SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v19);
    goto LABEL_12;
  }
  v21 = (CHID *)CHID::GetInputType(v16);
  if ( v21 == (CHID *)((char *)&stderr + 2) )
  {
    v22 = (_DWORD *)operator new(0x1Cu);
    v23 = dword_6E07D4;
    *v22 = &off_662848;
    v22[1] = v23;
    v22[2] = 31;
    *(_DWORD *)((char *)v22 + 21) = 0;
    *(_DWORD *)((char *)v22 + 17) = 0;
    v22[3] = 0;
    v22[4] = 0;
    SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v22);
    v19 = (_DWORD *)operator new(0x1Cu);
    v24 = dword_6E07F4;
    *v19 = &off_662848;
    v19[1] = v24;
    v25 = 32;
LABEL_10:
    v19[2] = v25;
    *(_DWORD *)((char *)v19 + 21) = 0;
    *(_DWORD *)((char *)v19 + 17) = 0;
    v19[4] = 0;
    v19[3] = 0;
    goto LABEL_11;
  }
  if ( !CHID::GetInputType(v21) )
  {
    v26 = (_DWORD *)operator new(0x1Cu);
    v27 = dword_6E0634;
    *v26 = &off_662848;
    v26[1] = v27;
    v26[2] = 18;
    *(_DWORD *)((char *)v26 + 21) = 0;
    *(_DWORD *)((char *)v26 + 17) = 0;
    v26[3] = 0;
    v26[4] = 0;
    SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v26);
    v19 = (_DWORD *)operator new(0x1Cu);
    v28 = dword_6E06D4;
    *v19 = &off_662848;
    v19[1] = v28;
    v25 = 23;
    goto LABEL_10;
  }
LABEL_12:
  v29 = (_DWORD *)operator new(0x1Cu);
  v29[1] = dword_6E0854;
  v29[2] = 35;
  *(_DWORD *)((char *)v29 + 21) = 0;
  *(_DWORD *)((char *)v29 + 17) = 0;
  v29[3] = 0;
  v29[4] = 0;
  *v29 = &off_662848;
  SelectScreen::AddItem(this, (SelectScreen::MenuSelection *)v29);
  v30 = (SelectScreen::MenuSelection *)operator new(0x10u);
  *(_DWORD *)v30 = &off_66281C;
  *((_DWORD *)v30 + 1) = "MOB_RTD";
  *((_DWORD *)v30 + 2) = SelectScreen::OnRestoreDefaults;
  *((_DWORD *)v30 + 3) = 0;
  SelectScreen::AddItem(this, v30);
  *((_BYTE *)this + 48) = 1;
}


// ============================================================

// Address: 0x29e920
// Original: _ZN14ControlsScreen18OnKeyboardControlsEP12SelectScreeni
// Demangled: ControlsScreen::OnKeyboardControls(SelectScreen *,int)
void *__fastcall ControlsScreen::OnKeyboardControls(ControlsScreen *this, SelectScreen *a2, int a3)
{
  KeyboardControlsScreen *v3; // r4
  void *result; // r0

  v3 = (KeyboardControlsScreen *)operator new(0x294u);
  KeyboardControlsScreen::KeyboardControlsScreen(v3);
  if ( dword_6E0090 )
    (*(void (__fastcall **)(KeyboardControlsScreen *, _DWORD))(*(_DWORD *)v3 + 20))(
      v3,
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  if ( dword_6E0098 )
    MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
  result = &gMobileMenu;
  dword_6E0098 = (int)v3;
  return result;
}


// ============================================================

// Address: 0x29e988
// Original: _ZN14ControlsScreen15DoAdjustableHUDEP12SelectScreeni
// Demangled: ControlsScreen::DoAdjustableHUD(SelectScreen *,int)
// attributes: thunk
int __fastcall ControlsScreen::DoAdjustableHUD(CAdjustableHUD *this, SelectScreen *a2, int a3)
{
  return sub_18EF90(this);
}


// ============================================================

// Address: 0x29ea08
// Original: _ZN14ControlsScreenD0Ev
// Demangled: ControlsScreen::~ControlsScreen()
void __fastcall ControlsScreen::~ControlsScreen(ControlsScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

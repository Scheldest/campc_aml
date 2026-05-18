
// Address: 0x2a853a
// Original: _ZN15CloudWaitScreenD0Ev
// Demangled: CloudWaitScreen::~CloudWaitScreen()
void __fastcall CloudWaitScreen::~CloudWaitScreen(CloudWaitScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2a854c
// Original: _ZN15CloudWaitScreen6RenderEi
// Demangled: CloudWaitScreen::Render(int)
int __fastcall CloudWaitScreen::Render(CloudWaitScreen *this, int a2)
{
  CKeyGen *v3; // r6
  int v4; // r5
  float v5; // s16
  int v6; // r0
  int CloudUploadResult; // r5
  double v8; // d8
  double v9; // r0
  CharSelectScreen *v10; // r4
  SelectScreen::MenuSelection *v11; // r0
  SelectScreen::MenuSelection *v12; // r0
  _BYTE v14[8]; // [sp+28h] [bp-28h] BYREF
  int v15; // [sp+30h] [bp-20h] BYREF
  _DWORD v16[7]; // [sp+34h] [bp-1Ch] BYREF

  CharSelectScreen::Render(this, a2);
  v3 = (CKeyGen *)*((_DWORD *)this + 17);
  CRGBA::CRGBA((CRGBA *)&v15, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
  v4 = (*(int (__fastcall **)(CloudWaitScreen *))(*(_DWORD *)this + 48))(this);
  v5 = COERCE_FLOAT((*(int (__fastcall **)(CloudWaitScreen *))(*(_DWORD *)this + 48))(this));
  v6 = CText::Get((CText *)TheText, v3);
  v16[0] = v15;
  MenuScreen::DrawTextDirect(
    (int)v14,
    (int)this,
    v6,
    0,
    1,
    (int)v16,
    1,
    v4,
    1116471296,
    COERCE_INT(630.0 - v5),
    1099956224,
    1,
    0);
  CloudUploadResult = GetCloudUploadResult();
  if ( CloudUploadResult || (v8 = *((double *)this + 10) + 20.0, LODWORD(v9) = OS_TimeAccurate(), v8 < v9) )
  {
    if ( (unsigned int)dword_6E0090 >= 2 )
      (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_6E0094 + 4 * dword_6E0090 - 8) + 20))(
        *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 8),
        *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
    MobileMenu::RemoveTopScreen((MobileMenu *)&gMobileMenu, 0, 0);
    v10 = (CharSelectScreen *)operator new(0x50u);
    CharSelectScreen::CharSelectScreen(v10, "FET_SG", 1);
    if ( CloudUploadResult == 1 )
    {
      *((_DWORD *)v10 + 17) = "FES_SSC";
      *((_DWORD *)v10 + 18) = CloudWaitScreen::SaveDone;
      *((_DWORD *)v10 + 19) = 0;
      *(_DWORD *)v10 = &off_662E08;
      v11 = (SelectScreen::MenuSelection *)operator new(0x10u);
      *(_DWORD *)v11 = &off_66281C;
      *((_DWORD *)v11 + 1) = "FEM_OK";
      *((_DWORD *)v11 + 2) = OkScreen::OkFunc;
      *((_DWORD *)v11 + 3) = 0;
      SelectScreen::AddItem(v10, v11);
      if ( dword_6E0090 )
        (*(void (__fastcall **)(CharSelectScreen *, _DWORD))(*(_DWORD *)v10 + 20))(
          v10,
          *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
      if ( !dword_6E0098 )
        goto LABEL_14;
    }
    else
    {
      *((_DWORD *)v10 + 17) = "FES_SVF";
      *((_DWORD *)v10 + 18) = CloudWaitScreen::SaveDone;
      *((_DWORD *)v10 + 19) = 0;
      *(_DWORD *)v10 = &off_662E08;
      v12 = (SelectScreen::MenuSelection *)operator new(0x10u);
      *(_DWORD *)v12 = &off_66281C;
      *((_DWORD *)v12 + 1) = "FEM_OK";
      *((_DWORD *)v12 + 2) = OkScreen::OkFunc;
      *((_DWORD *)v12 + 3) = 0;
      SelectScreen::AddItem(v10, v12);
      if ( dword_6E0090 )
        (*(void (__fastcall **)(CharSelectScreen *, _DWORD))(*(_DWORD *)v10 + 20))(
          v10,
          *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
      if ( !dword_6E0098 )
        goto LABEL_14;
    }
    MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
LABEL_14:
    LODWORD(v9) = &gMobileMenu;
    dword_6E0098 = (int)v10;
  }
  return LODWORD(v9);
}


// ============================================================

// Address: 0x2a8858
// Original: _ZN15CloudWaitScreen8SaveDoneEPv
// Demangled: CloudWaitScreen::SaveDone(void *)
int __fastcall CloudWaitScreen::SaveDone(CloudWaitScreen *this, void *a2)
{
  if ( (unsigned int)dword_6E0090 >= 2 )
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_6E0094 + 4 * dword_6E0090 - 8) + 20))(
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 8),
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  return j_MobileMenu::RemoveTopScreen((MobileMenu *)&gMobileMenu, 0, 0);
}


// ============================================================

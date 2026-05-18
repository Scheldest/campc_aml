
// Address: 0x1911a8
// Original: j__ZN14DownloadScreenC2Ev
// Demangled: DownloadScreen::DownloadScreen(void)
// attributes: thunk
void __fastcall DownloadScreen::DownloadScreen(DownloadScreen *this)
{
  _ZN14DownloadScreenC2Ev(this);
}


// ============================================================

// Address: 0x29b6f8
// Original: _ZN14DownloadScreenC2Ev
// Demangled: DownloadScreen::DownloadScreen(void)
void __fastcall DownloadScreen::DownloadScreen(DownloadScreen *this)
{
  int v1; // r4
  _DWORD *v2; // r0
  int *v3; // r5
  int v4; // r0
  unsigned int v5; // r1
  bool v6; // zf
  int *v7; // r0
  int v8; // r1
  _DWORD *v9; // [sp+4h] [bp-6Ch]
  char v10[64]; // [sp+10h] [bp-60h] BYREF

  CharSelectScreen::CharSelectScreen(this, "MOB_DNL", 1);
  v1 = 0;
  v2[18] = 0;
  v9 = v2;
  *v2 = &off_662C6C;
  DownloadFileCount = 12;
  TotalDownloadSizeMB = 0;
  v3 = dword_68572C;
  TotalDownloadPayloadMB = 0;
  TotalSizeDownloadedMB = 0;
  do
  {
    sub_5E6BC0(v10, "%s;%d", (const char *)*(v3 - 1), *v3);
    ++v1;
    if ( OS_ServiceAppCommand("IsDownloaded", v10) )
    {
      v4 = 1;
      *((_BYTE *)v3 + 4) = 1;
    }
    else
    {
      v4 = *((unsigned __int8 *)v3 + 4);
    }
    v5 = *v3;
    v3 += 4;
    v6 = v4 == 0;
    v7 = &TotalSizeDownloadedMB;
    v8 = (v5 >> 20) + 1;
    TotalDownloadPayloadMB += v8;
    if ( v6 )
    {
      needsAmazonDownload = 1;
      v7 = &TotalDownloadSizeMB;
    }
    *v7 += v8;
  }
  while ( v1 < DownloadFileCount );
  v9[17] = 0;
}


// ============================================================

// Address: 0x2a7d90
// Original: _ZN14DownloadScreenD0Ev
// Demangled: DownloadScreen::~DownloadScreen()
void __fastcall DownloadScreen::~DownloadScreen(DownloadScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2a7da0
// Original: _ZN14DownloadScreen6RenderEi
// Demangled: DownloadScreen::Render(int)
int *__fastcall DownloadScreen::Render(DownloadScreen *this, int a2)
{
  int v3; // r8
  float v4; // r6
  float v5; // r4
  int v6; // r0
  int v7; // r4
  int v8; // r0
  int *result; // r0
  int v10; // r6
  CharSelectScreen *v11; // r4
  SelectScreen::MenuSelection *v12; // r0
  SelectScreen::MenuSelection *v13; // r0
  SelectScreen::MenuSelection *v14; // r0
  SelectScreen::MenuSelection *v15; // r0
  _BYTE v16[8]; // [sp+24h] [bp-2Ch] BYREF
  int v17; // [sp+2Ch] [bp-24h] BYREF
  _DWORD v18[8]; // [sp+30h] [bp-20h] BYREF

  IsDownloadBack = 1;
  CharSelectScreen::Render(this, a2);
  IsDownloadBack = 0;
  CRGBA::CRGBA((CRGBA *)&v17, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
  v3 = (*(int (__fastcall **)(DownloadScreen *))(*(_DWORD *)this + 48))(this);
  v4 = COERCE_FLOAT((*(int (__fastcall **)(DownloadScreen *))(*(_DWORD *)this + 52))(this));
  v5 = COERCE_FLOAT((*(int (__fastcall **)(DownloadScreen *))(*(_DWORD *)this + 48))(this));
  v6 = CText::Get((CText *)TheText, (CKeyGen *)"FES_WP8");
  v18[0] = v17;
  MenuScreen::DrawTextDirect(
    (int)v16,
    (int)this,
    v6,
    0,
    1,
    (int)v18,
    1,
    v3,
    1117782016,
    COERCE_INT(v4 - v5),
    1102577664,
    1,
    0);
  v7 = (*(int (__fastcall **)(DownloadScreen *))(*(_DWORD *)this + 48))(this);
  v8 = (*(int (__fastcall **)(DownloadScreen *))(*(_DWORD *)this + 52))(this);
  MenuScreen::DrawSlider((int)this, v7, 1133903872, v8, 330.0, (float)*((int *)this + 17) * 0.01, 0, 0xFFu);
  result = &CurrentDownloadingError;
  v10 = CurrentDownloadingError;
  if ( CurrentDownloadingError )
  {
    result = (int *)*((_DWORD *)this + 18);
    if ( !result )
    {
      *((_DWORD *)this + 18) = 1;
      v11 = (CharSelectScreen *)operator new(0x54u);
      CharSelectScreen::CharSelectScreen(v11, "FES_DLE", 0);
      if ( v10 == 4 )
      {
        *((_DWORD *)v11 + 17) = "FES_R81";
        *((_DWORD *)v11 + 18) = DownloadScreen::RetryDownload;
        *((_DWORD *)v11 + 19) = this;
        *((_DWORD *)v11 + 20) = DownloadScreen::CancelDownload;
        *(_DWORD *)v11 = &off_662DAC;
        CachePlayerControls();
        v12 = (SelectScreen::MenuSelection *)operator new(0x10u);
        *(_DWORD *)v12 = &off_66281C;
        *((_DWORD *)v12 + 1) = "FEM_NO";
        *((_DWORD *)v12 + 2) = YesNoScreen::NoFunc;
        *((_DWORD *)v12 + 3) = 0;
        SelectScreen::AddItem(v11, v12);
        v13 = (SelectScreen::MenuSelection *)operator new(0x10u);
        *(_DWORD *)v13 = &off_66281C;
        *((_DWORD *)v13 + 1) = "FEM_YES";
        *((_DWORD *)v13 + 2) = YesNoScreen::YesFunc;
        *((_DWORD *)v13 + 3) = 0;
        SelectScreen::AddItem(v11, v13);
        if ( dword_6E0090 )
          (*(void (__fastcall **)(CharSelectScreen *, _DWORD))(*(_DWORD *)v11 + 20))(
            v11,
            *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
        if ( dword_6E0098 )
          MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
      }
      else
      {
        *((_DWORD *)v11 + 17) = "FES_RTY";
        *((_DWORD *)v11 + 18) = DownloadScreen::RetryDownload;
        *((_DWORD *)v11 + 19) = this;
        *((_DWORD *)v11 + 20) = DownloadScreen::CancelDownload;
        *(_DWORD *)v11 = &off_662DAC;
        CachePlayerControls();
        v14 = (SelectScreen::MenuSelection *)operator new(0x10u);
        *(_DWORD *)v14 = &off_66281C;
        *((_DWORD *)v14 + 1) = "FEM_NO";
        *((_DWORD *)v14 + 2) = YesNoScreen::NoFunc;
        *((_DWORD *)v14 + 3) = 0;
        SelectScreen::AddItem(v11, v14);
        v15 = (SelectScreen::MenuSelection *)operator new(0x10u);
        *(_DWORD *)v15 = &off_66281C;
        *((_DWORD *)v15 + 1) = "FEM_YES";
        *((_DWORD *)v15 + 2) = YesNoScreen::YesFunc;
        *((_DWORD *)v15 + 3) = 0;
        SelectScreen::AddItem(v11, v15);
        if ( dword_6E0090 )
          (*(void (__fastcall **)(CharSelectScreen *, _DWORD))(*(_DWORD *)v11 + 20))(
            v11,
            *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
        if ( dword_6E0098 )
          MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
      }
      result = (int *)&gMobileMenu;
      dword_6E0098 = (int)v11;
    }
  }
  return result;
}


// ============================================================

// Address: 0x2a80b4
// Original: _ZN14DownloadScreen6OnBackEv
// Demangled: DownloadScreen::OnBack(void)
int *__fastcall DownloadScreen::OnBack(DownloadScreen *this)
{
  int *result; // r0

  result = &RsGlobal;
  dword_9FC90C = 1;
  return result;
}


// ============================================================

// Address: 0x2a80c4
// Original: _ZN14DownloadScreen13RetryDownloadEPv
// Demangled: DownloadScreen::RetryDownload(void *)
int __fastcall DownloadScreen::RetryDownload(DownloadScreen *this, void *a2)
{
  int result; // r0

  *((_DWORD *)this + 18) = 0;
  CurrentDownloadingError = 0;
  result = OS_TimeMS();
  startDownloadTime = result;
  return result;
}


// ============================================================

// Address: 0x2a80ec
// Original: _ZN14DownloadScreen14CancelDownloadEPv
// Demangled: DownloadScreen::CancelDownload(void *)
int *__fastcall DownloadScreen::CancelDownload(DownloadScreen *this, void *a2)
{
  int *result; // r0

  result = &RsGlobal;
  dword_9FC90C = 1;
  return result;
}


// ============================================================

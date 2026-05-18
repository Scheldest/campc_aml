
// Address: 0x18e228
// Original: j__ZN12SelectScreen6RenderEi
// Demangled: SelectScreen::Render(int)
// attributes: thunk
int __fastcall SelectScreen::Render(SelectScreen *this, int a2)
{
  return _ZN12SelectScreen6RenderEi(this, a2);
}


// ============================================================

// Address: 0x191cbc
// Original: j__ZN12SelectScreen6UpdateEf
// Demangled: SelectScreen::Update(float)
// attributes: thunk
int __fastcall SelectScreen::Update(SelectScreen *this, float a2)
{
  return _ZN12SelectScreen6UpdateEf(this, a2);
}


// ============================================================

// Address: 0x19b7cc
// Original: j__ZN12SelectScreenD2Ev
// Demangled: SelectScreen::~SelectScreen()
// attributes: thunk
void __fastcall SelectScreen::~SelectScreen(SelectScreen *this)
{
  _ZN12SelectScreenD2Ev(this);
}


// ============================================================

// Address: 0x19c840
// Original: j__ZN12SelectScreen7AddItemEPNS_13MenuSelectionE
// Demangled: SelectScreen::AddItem(SelectScreen::MenuSelection *)
// attributes: thunk
int __fastcall SelectScreen::AddItem(SelectScreen *this, SelectScreen::MenuSelection *a2)
{
  return _ZN12SelectScreen7AddItemEPNS_13MenuSelectionE(this, a2);
}


// ============================================================

// Address: 0x19cd10
// Original: j__ZN12SelectScreen17OnRestoreDefaultsEPS_i
// Demangled: SelectScreen::OnRestoreDefaults(SelectScreen*,int)
// attributes: thunk
int __fastcall SelectScreen::OnRestoreDefaults(SelectScreen *this, SelectScreen *a2, int a3)
{
  return _ZN12SelectScreen17OnRestoreDefaultsEPS_i(this, a2, a3);
}


// ============================================================

// Address: 0x19fd30
// Original: j__ZN12SelectScreen16SettingSelection11HandleInputEPS_f
// Demangled: SelectScreen::SettingSelection::HandleInput(SelectScreen*,float)
// attributes: thunk
int __fastcall SelectScreen::SettingSelection::HandleInput(
        SelectScreen::SettingSelection *this,
        SelectScreen *a2,
        float a3)
{
  return _ZN12SelectScreen16SettingSelection11HandleInputEPS_f(this, a2, a3);
}


// ============================================================

// Address: 0x29e85c
// Original: _ZN12SelectScreen7AddItemEPNS_13MenuSelectionE
// Demangled: SelectScreen::AddItem(SelectScreen::MenuSelection *)
int __fastcall SelectScreen::AddItem(int a1, int a2)
{
  int v4; // r5
  unsigned int v5; // r10
  _DWORD *v6; // r0
  void *v7; // r9
  _DWORD *v8; // r6
  unsigned int v9; // r1
  int v10; // r6
  unsigned int v11; // r9
  _DWORD *v12; // r0
  void *v13; // r8
  _DWORD *v14; // r5
  int result; // r0

  v4 = *(_DWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(v4 + 1) )
  {
    v8 = *(_DWORD **)(a1 + 28);
  }
  else
  {
    v5 = 4 * (v4 + 1) / 3u + 3;
    v6 = malloc(4 * v5);
    v7 = *(void **)(a1 + 28);
    v8 = v6;
    if ( v7 )
    {
      memcpy_0(v6, *(const void **)(a1 + 28), 4 * v4);
      free(v7);
      v4 = *(_DWORD *)(a1 + 24);
    }
    *(_DWORD *)(a1 + 28) = v8;
    *(_DWORD *)(a1 + 20) = v5;
  }
  v8[v4] = a2;
  v10 = *(_DWORD *)(a1 + 36);
  v9 = *(_DWORD *)(a1 + 32);
  ++*(_DWORD *)(a1 + 24);
  if ( v9 >= v10 + 1 )
  {
    v14 = *(_DWORD **)(a1 + 40);
  }
  else
  {
    v11 = 4 * (v10 + 1) / 3u + 3;
    v12 = malloc(4 * v11);
    v13 = *(void **)(a1 + 40);
    v14 = v12;
    if ( v13 )
    {
      memcpy_0(v12, *(const void **)(a1 + 40), 4 * v10);
      free(v13);
      v10 = *(_DWORD *)(a1 + 36);
    }
    *(_DWORD *)(a1 + 40) = v14;
    *(_DWORD *)(a1 + 32) = v11;
  }
  v14[v10] = 0;
  result = *(_DWORD *)(a1 + 36) + 1;
  *(_DWORD *)(a1 + 36) = result;
  return result;
}


// ============================================================

// Address: 0x29e98c
// Original: _ZN12SelectScreen17OnRestoreDefaultsEPS_i
// Demangled: SelectScreen::OnRestoreDefaults(SelectScreen*,int)
unsigned int __fastcall SelectScreen::OnRestoreDefaults(SelectScreen *this, SelectScreen *a2, int a3)
{
  const char *v4; // r5
  int v5; // r0
  unsigned int result; // r0
  unsigned int i; // r5
  int v8; // r0

  v4 = (const char *)*((_DWORD *)this + 4);
  if ( !strcmp(v4, "FEH_LOA") )
  {
    v5 = 25;
  }
  else if ( !strcmp(v4, "FEC_RED") )
  {
    v5 = 26;
  }
  else if ( !strcmp(v4, "FEH_DIS") )
  {
    v5 = 24;
  }
  else
  {
    if ( strcmp(v4, "FEH_AUD") )
      goto LABEL_10;
    v5 = 23;
  }
  AddMenuStat(v5, 1);
LABEL_10:
  result = *((_DWORD *)this + 6);
  if ( result )
  {
    for ( i = 0; i < result; ++i )
    {
      v8 = *(_DWORD *)(*((_DWORD *)this + 7) + 4 * i);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 28))(v8);
      result = *((_DWORD *)this + 6);
    }
  }
  return result;
}


// ============================================================

// Address: 0x29ed70
// Original: _ZN12SelectScreen12GetMenuRightEv
// Demangled: SelectScreen::GetMenuRight(void)
unsigned __int32 __fastcall SelectScreen::GetMenuRight(SelectScreen *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d2

  v2.n64_u32[0] = 1142784000;
  v1.n64_f32[0] = (float)((float)((float)((float)((float)dword_9FC900 + (float)((float)dword_9FC900 * -0.0)) * 480.0)
                                + (float)((float)dword_9FC900 * -240.0))
                        / (float)dword_9FC904)
                + 320.0;
  return vmin_f32(v1, v2).n64_u32[0];
}


// ============================================================

// Address: 0x29edd8
// Original: _ZN12SelectScreen14LoopSelectionsEv
// Demangled: SelectScreen::LoopSelections(void)
int __fastcall SelectScreen::LoopSelections(SelectScreen *this)
{
  return 1;
}


// ============================================================

// Address: 0x29eddc
// Original: _ZN12SelectScreen10GetScrollYEv
// Demangled: SelectScreen::GetScrollY(void)
int __fastcall SelectScreen::GetScrollY(SelectScreen *this)
{
  return 0;
}


// ============================================================

// Address: 0x29ede0
// Original: _ZN12SelectScreen9GetStartYEv
// Demangled: SelectScreen::GetStartY(void)
int __fastcall SelectScreen::GetStartY(SelectScreen *this)
{
  return 1116471296;
}


// ============================================================

// Address: 0x29ede8
// Original: _ZN12SelectScreen8GetYSizeEi
// Demangled: SelectScreen::GetYSize(int)
float __fastcall SelectScreen::GetYSize(SelectScreen *this, int a2)
{
  float v3; // s18
  float v4; // s16
  float v5; // r0

  v3 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 72))(this));
  v4 = 9.0;
  v5 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 64))(this));
  if ( *((_DWORD *)this + 6) > 9u )
    v4 = (float)*((unsigned int *)this + 6);
  return (float)(v3 - v5) / v4;
}


// ============================================================

// Address: 0x29ee32
// Original: _ZN12SelectScreen7GetEndYEv
// Demangled: SelectScreen::GetEndY(void)
int __fastcall SelectScreen::GetEndY(SelectScreen *this)
{
  return 1138163712;
}


// ============================================================

// Address: 0x29ee3a
// Original: _ZN12SelectScreen14GetScissorRectEv
// Demangled: SelectScreen::GetScissorRect(void)
_QWORD *__fastcall SelectScreen::GetScissorRect(_QWORD *this)
{
  *this = 0LL;
  this[1] = 0LL;
  return this;
}


// ============================================================

// Address: 0x29ee44
// Original: _ZN12SelectScreen11IsScrollingEv
// Demangled: SelectScreen::IsScrolling(void)
int __fastcall SelectScreen::IsScrolling(SelectScreen *this)
{
  return 0;
}


// ============================================================

// Address: 0x29ee58
// Original: _ZN12SelectScreenD0Ev
// Demangled: SelectScreen::~SelectScreen()
void __fastcall SelectScreen::~SelectScreen(SelectScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x29ee68
// Original: _ZN12SelectScreen6UpdateEf
// Demangled: SelectScreen::Update(float)
int __fastcall SelectScreen::Update(SelectScreen *this, float a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d3
  int result; // r0
  float v8; // s16
  unsigned int v9; // r1
  int v10; // r0
  int v11; // r2
  unsigned int *v12; // r6
  unsigned int v13; // r1
  int v14; // r0
  unsigned int v15; // r1
  float *v16; // r2
  unsigned __int32 v17; // s8
  float v18; // r5
  float v19; // r0
  float v20; // s24
  int v21; // r6
  int v22; // r11
  float v23; // s26
  _BOOL4 v24; // r5
  float v25; // r5
  float v26; // s28
  float v27; // r5
  float v28; // s28
  int v29; // r0
  bool v30; // zf
  float *v31; // r0
  float v32; // s30
  float v33; // s28
  float v34; // s17
  float v35; // r0
  int v36; // r0
  bool v37; // zf
  int v38; // r0
  char *v39; // r0
  _DWORD *v40; // r0
  int v41; // t1
  float v42; // s2
  float v43; // s2
  bool v44; // zf
  int v45; // r0
  int *v46; // [sp+0h] [bp-78h]
  float v47; // [sp+4h] [bp-74h]
  float v48; // [sp+8h] [bp-70h] BYREF
  float v49; // [sp+Ch] [bp-6Ch]
  float v50; // [sp+14h] [bp-64h]

  if ( *((_BYTE *)this + 12) && BackPressed() == 1 )
  {
    (*(void (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 36))(this);
    result = NeedsAmazonDownload();
    if ( !result )
      return j_CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 2, 0.0, 1.0);
  }
  else
  {
    v8 = a2;
    if ( *((_DWORD *)this + 6) )
    {
      if ( DownPressed() == 1 )
      {
        if ( (*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 56))(this) == 1 )
        {
          v9 = (unsigned int)(*((_DWORD *)this + 11) + 1) % *((_DWORD *)this + 6);
        }
        else
        {
          v2.n64_f32[0] = (float)(*((_DWORD *)this + 11) + 1);
          v3.n64_f32[0] = (float)(unsigned int)(*((_DWORD *)this + 6) - 1);
          v2.n64_u64[0] = vmin_f32(v2, v3).n64_u64[0];
          v9 = (int)v2.n64_f32[0];
        }
        *((_DWORD *)this + 11) = v9;
        if ( !NeedsAmazonDownload() )
          CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 3, 0.0, 1.0);
      }
      if ( UpPressed() )
      {
        v10 = (*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 56))(this);
        v12 = (unsigned int *)((char *)this + 44);
        v11 = *((_DWORD *)this + 11);
        if ( v10 == 1 )
        {
          v13 = (unsigned int)(v11 + *((_DWORD *)this + 6) - 1) % *((_DWORD *)this + 6);
        }
        else
        {
          v2.n64_u32[0] = 0;
          v3.n64_f32[0] = (float)(v11 - 1);
          v13 = (int)vmax_f32(v3, v2).n64_f32[0];
        }
        *v12 = v13;
        if ( !NeedsAmazonDownload() )
          CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 3, 0.0, 1.0);
      }
      else
      {
        v12 = (unsigned int *)((char *)this + 44);
      }
      if ( *v12 != -1 )
        *(float *)(*((_DWORD *)this + 10) + 4 * *v12) = (float)(a2 + a2) + *(float *)(*((_DWORD *)this + 10) + 4 * *v12);
      if ( *((_DWORD *)this + 9) )
      {
        v3.n64_u32[0] = 1053609165;
        v14 = 0;
        v15 = 0;
        do
        {
          ++v15;
          v16 = (float *)(*((_DWORD *)this + 10) + v14);
          v14 += 4;
          v4.n64_f32[0] = *v16 - (float)(a2 * 0.5);
          v17 = vmin_f32(v4, v3).n64_u32[0];
          if ( v4.n64_f32[0] < 0.0 )
            v17 = 0;
          *(_DWORD *)v16 = v17;
        }
        while ( v15 < *((_DWORD *)this + 9) );
      }
      if ( byte_6E00DA && *((_DWORD *)&gMobileMenu + lastDevice + 36) != 3 )
      {
        v46 = (int *)v12;
        v47 = a2;
        v18 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 64))(this));
        v19 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 60))(this));
        if ( *((_DWORD *)this + 6) )
        {
          v20 = v18 + v19;
          v21 = 0;
          v22 = -1;
          do
          {
            v23 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *, int))(*(_DWORD *)this + 68))(this, v21));
            if ( v21 == *((_DWORD *)this + 6) - 1 && v21 <= 7 && *((_BYTE *)this + 48) )
              v20 = (*(float (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 72))(this) + (float)(v23 * -1.5);
            (*(void (__fastcall **)(float *, SelectScreen *))(*(_DWORD *)this + 76))(&v48, this);
            v24 = 0;
            if ( v49 != 0.0 || v50 != 0.0 )
            {
              v25 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *, int))(*(_DWORD *)this + 68))(this, v21));
              v26 = v50;
              if ( (float)(v20 + (float)(v25 * 0.5)) < (float)(v26
                                                             * (float)(480.0 / (float)(unsigned int)OS_ScreenGetHeight()))
                || (v27 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *, int))(*(_DWORD *)this + 68))(this, v21)),
                    v28 = v49,
                    (float)(v20 + (float)(v27 * 0.5)) > (float)(v28
                                                              * (float)(480.0 / (float)(unsigned int)OS_ScreenGetHeight()))) )
              {
                v24 = 1;
              }
            }
            v29 = (*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 80))(this);
            v30 = !v24;
            if ( !v24 )
              v30 = v29 == 0;
            if ( v30 )
            {
              v31 = (float *)((char *)&gMobileMenu + 8 * lastDevice);
              v32 = v31[28];
              v33 = v31[29];
              v34 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 48))(this));
              v35 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 52))(this));
              if ( v32 >= v34 && v32 <= v35 )
              {
                v36 = v22;
                if ( v33 <= (float)(v23 + v20) )
                  v36 = v21;
                if ( v33 >= v20 )
                  v22 = v36;
              }
            }
            v20 = v23 + v20;
            ++v21;
          }
          while ( (unsigned int)v21 < *((_DWORD *)this + 6) );
        }
        else
        {
          v22 = -1;
        }
        a2 = v47;
        v37 = byte_6E00DA == 0;
        if ( byte_6E00DA )
          v37 = *v46 == v22;
        if ( !v37 )
        {
          if ( v22 != -1 )
          {
            if ( !NeedsAmazonDownload() )
              CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 3, 0.0, 1.0);
            if ( *v46 != -1 )
            {
              v38 = *(_DWORD *)(*((_DWORD *)this + 7) + 4 * *v46);
              (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 32))(v38);
            }
          }
          *v46 = v22;
          v39 = (char *)&gMobileMenu + 4 * lastDevice;
          v41 = *((_DWORD *)v39 + 36);
          v40 = v39 + 144;
          if ( !v41 )
            *v40 = 1;
        }
      }
    }
    v42 = *((float *)this + 2);
    if ( v42 < 1.0 )
    {
      v43 = (float)(v8 * 5.0) + v42;
      *((float *)this + 2) = v43;
      if ( v43 > 1.0 )
        *((_DWORD *)this + 2) = 1065353216;
    }
    result = *((_DWORD *)this + 6);
    v44 = result == 0;
    if ( result )
    {
      result = *((_DWORD *)this + 11);
      v44 = result == -1;
    }
    if ( !v44 )
    {
      v45 = *(_DWORD *)(*((_DWORD *)this + 7) + 4 * result);
      return (*(int (__fastcall **)(int, SelectScreen *, _DWORD))(*(_DWORD *)v45 + 24))(v45, this, LODWORD(a2));
    }
  }
  return result;
}


// ============================================================

// Address: 0x29f2d8
// Original: _ZN12SelectScreen6RenderEi
// Demangled: SelectScreen::Render(int)
int __fastcall SelectScreen::Render(SelectScreen *this, int a2)
{
  CKeyGen *v3; // r6
  int v4; // r5
  float v5; // s16
  float v6; // s18
  int v7; // r0
  CFont *v8; // r0
  float v9; // r5
  float v10; // r0
  float v11; // s23
  int v12; // r4
  int v13; // r8
  float v14; // s16
  float v15; // s22
  float v16; // s23
  double v17; // r0
  float v18; // s0
  float v19; // s0
  float v20; // r9
  float v21; // r4
  float v22; // s6
  float v23; // s26
  float v24; // s28
  int v25; // r6
  void (__fastcall *v26)(int, SelectScreen *, int, _DWORD, _DWORD, _DWORD, _DWORD); // r10
  int v27; // r9
  float v28; // r4
  float v29; // s22
  float v30; // s2
  float v31; // s0
  int result; // r0
  int v33; // [sp+34h] [bp-8Ch]
  int v34; // [sp+38h] [bp-88h] BYREF
  int v35; // [sp+3Ch] [bp-84h] BYREF
  int v36; // [sp+40h] [bp-80h] BYREF
  int v37; // [sp+44h] [bp-7Ch] BYREF
  _BYTE v38[20]; // [sp+48h] [bp-78h] BYREF
  int v39[25]; // [sp+5Ch] [bp-64h] BYREF

  v3 = (CKeyGen *)*((_DWORD *)this + 4);
  CRGBA::CRGBA((CRGBA *)v39, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
  v4 = (*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 48))(this);
  v5 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 52))(this));
  v6 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 48))(this));
  v7 = CText::Get((CText *)TheText, v3);
  v34 = v39[0];
  v8 = (CFont *)MenuScreen::DrawTextDirect(
                  (int)v38,
                  (int)this,
                  v7,
                  0,
                  0,
                  (int)&v34,
                  1,
                  v4,
                  1106247680,
                  COERCE_INT(v5 - v6),
                  1108869120,
                  0,
                  0);
  CFont::RenderFontBuffer(v8);
  (*(void (__fastcall **)(_BYTE *, SelectScreen *))(*(_DWORD *)this + 76))(v38, this);
  CWidget::SetScissor();
  v9 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 64))(this));
  v10 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 60))(this));
  if ( *((_DWORD *)this + 6) )
  {
    v11 = v9 + v10;
    v12 = 0;
    v13 = 0;
    do
    {
      v14 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *, int))(*(_DWORD *)this + 68))(this, v13));
      if ( v13 == *((_DWORD *)this + 6) - 1 && v13 <= 7 )
      {
        v15 = v11;
        if ( *((_BYTE *)this + 48) )
          v15 = (*(float (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 72))(this) + (float)(v14 * -1.5);
      }
      else
      {
        v15 = v11;
      }
      v16 = 1.0;
      if ( byte_6E01A8 == 1 )
      {
        v16 = 0.0;
        if ( v13 == *((_DWORD *)this + 11) )
        {
          LODWORD(v17) = OS_TimeAccurate();
          v18 = v17 * 4.0;
          v16 = (float)((float)((float)(sinf(v18) + 1.0) * 0.5) * 0.67) + 0.33;
        }
      }
      v19 = *(float *)(*((_DWORD *)this + 10) + v12);
      v33 = v12;
      if ( v19 == 0.0 )
      {
        v11 = v14 + v15;
      }
      else
      {
        CRGBA::CRGBA((CRGBA *)&v34, 0xF0u, 0xF0u, 0xF0u, (unsigned int)(float)(v16 * (float)(v19 * 255.0)));
        CRGBA::CRGBA(
          (CRGBA *)&v35,
          0xF0u,
          0xF0u,
          0xF0u,
          (unsigned int)(float)(v16 * (float)(*(float *)(*((_DWORD *)this + 10) + v12) * 255.0)));
        CRGBA::CRGBA(
          (CRGBA *)&v36,
          0xF0u,
          0xF0u,
          0xF0u,
          (unsigned int)(float)(v16 * (float)(*(float *)(*((_DWORD *)this + 10) + v12) * 127.0)));
        CRGBA::CRGBA(
          (CRGBA *)&v37,
          0xF0u,
          0xF0u,
          0xF0u,
          (unsigned int)(float)(v16 * (float)(*(float *)(*((_DWORD *)this + 10) + v12) * 127.0)));
        v20 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 48))(this));
        v21 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 52))(this));
        v22 = *((float *)this + 2);
        v23 = (float)dword_9FC900;
        v24 = (float)dword_9FC904;
        HIBYTE(v34) = (unsigned int)(float)(v22 * (float)HIBYTE(v34));
        HIBYTE(v37) = (unsigned int)(float)(v22 * (float)HIBYTE(v37));
        HIBYTE(v36) = (unsigned int)(float)(v22 * (float)HIBYTE(v36));
        HIBYTE(v35) = (unsigned int)(float)(v22 * (float)HIBYTE(v35));
        RwRenderStateSet(1, 0);
        v11 = v14 + v15;
        dword_6E0140 = 1065353216;
        dword_6E0144 = 1065353216;
        qword_6E014C = 0LL;
        dword_6E015C = 1065353216;
        dword_6E0160 = 1065353216;
        qword_6E0168 = 1065353216LL;
        dword_6E0148 = v34;
        *(float *)&qword_6E0154 = (float)(v23 * 0.5) + (float)((float)((float)(v21 + -320.0) * v24) / 480.0);
        *((float *)&qword_6E0154 + 1) = (float)((float)(v15 + 4.0) * v24) / 480.0;
        *(float *)maVertices = (float)(v23 * 0.5)
                             + (float)((float)((float)((float)(v20 + -5.0) + -320.0) * v24) / 480.0);
        *(float *)&dword_6E013C = (float)((float)(v15 + 4.0) * v24) / 480.0;
        dword_6E0164 = v35;
        dword_6E0178 = 1065353216;
        dword_6E017C = 1065353216;
        qword_6E0184 = 0x3F80000000000000LL;
        *(float *)&qword_6E0170 = *(float *)maVertices;
        *((float *)&qword_6E0170 + 1) = (float)((float)((float)(v14 + v15) + -4.0) * v24) / 480.0;
        dword_6E0180 = v36;
        dword_6E0194 = 1065353216;
        dword_6E0198 = 1065353216;
        qword_6E01A0 = 0x3F8000003F800000LL;
        *(float *)&qword_6E018C = *(float *)&qword_6E0154;
        *((float *)&qword_6E018C + 1) = *((float *)&qword_6E0170 + 1);
        dword_6E019C = v37;
        RwIm2DRenderPrimitive_BUGFIX(4, maVertices, 4);
      }
      v25 = *(_DWORD *)(*((_DWORD *)this + 7) + 4 * v13);
      v26 = *(void (__fastcall **)(int, SelectScreen *, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v25 + 8);
      v27 = (*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 48))(this);
      v28 = v15;
      v29 = COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 52))(this));
      v30 = 0.0;
      v31 = v29 - COERCE_FLOAT((*(int (__fastcall **)(SelectScreen *))(*(_DWORD *)this + 48))(this));
      if ( v13 == *((_DWORD *)this + 11) )
        v30 = 1.0;
      v26(v25, this, v27, LODWORD(v28), v31 + -10.0, LODWORD(v14), LODWORD(v30));
      ++v13;
      v10 = *((float *)this + 6);
      v12 = v33 + 4;
    }
    while ( (unsigned int)v13 < LODWORD(v10) );
  }
  CFont::RenderFontBuffer((CFont *)LODWORD(v10));
  memset(v38, 0, 16);
  CWidget::SetScissor();
  result = *((unsigned __int8 *)this + 12);
  if ( *((_BYTE *)this + 12) )
    return (*(int (__fastcall **)(SelectScreen *, int))(*(_DWORD *)this + 40))(this, 1);
  return result;
}


// ============================================================

// Address: 0x29f7f0
// Original: _ZN12SelectScreen11GetMenuLeftEv
// Demangled: SelectScreen::GetMenuLeft(void)
unsigned __int32 __fastcall SelectScreen::GetMenuLeft(SelectScreen *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d2

  v2.n64_u32[0] = 20.0;
  v1.n64_f32[0] = (float)((float)((float)((float)((float)dword_9FC900 * 0.0) * 480.0)
                                + (float)((float)dword_9FC900 * -240.0))
                        / (float)dword_9FC904)
                + 320.0;
  return vmax_f32(v1, v2).n64_u32[0];
}


// ============================================================

// Address: 0x2a396c
// Original: _ZN12SelectScreen13MenuSelection14GetTextPercentEv
// Demangled: SelectScreen::MenuSelection::GetTextPercent(void)
int __fastcall SelectScreen::MenuSelection::GetTextPercent(SelectScreen::MenuSelection *this)
{
  return 1058642330;
}


// ============================================================

// Address: 0x2a3976
// Original: _ZN12SelectScreen13MenuSelection8GetColorEv
// Demangled: SelectScreen::MenuSelection::GetColor(void)
void __fastcall SelectScreen::MenuSelection::GetColor(SelectScreen::MenuSelection *this)
{
  CRGBA::CRGBA(this, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
}


// ============================================================

// Address: 0x2a3990
// Original: _ZN12SelectScreen13MenuSelection8GetTitleEv
// Demangled: SelectScreen::MenuSelection::GetTitle(void)
int __fastcall SelectScreen::MenuSelection::GetTitle(SelectScreen::MenuSelection *this)
{
  char *v1; // r4

  v1 = (char *)*((_DWORD *)this + 1);
  if ( !strcmp(v1, "MOB_SCI") )
  {
    v1 = "MOB_SCO";
    if ( !IsSCCloudAvailable() )
      v1 = "MOB_SCI";
  }
  return j_CText::Get((CText *)TheText, (CKeyGen *)v1);
}


// ============================================================

// Address: 0x2a3a40
// Original: _ZN12SelectScreen13MenuSelection10SetDefaultEv
// Demangled: SelectScreen::MenuSelection::SetDefault(void)
void __fastcall SelectScreen::MenuSelection::SetDefault(SelectScreen::MenuSelection *this)
{
  ;
}


// ============================================================

// Address: 0x2a3a42
// Original: _ZN12SelectScreen13MenuSelection10DeselectedEv
// Demangled: SelectScreen::MenuSelection::Deselected(void)
void __fastcall SelectScreen::MenuSelection::Deselected(SelectScreen::MenuSelection *this)
{
  ;
}


// ============================================================

// Address: 0x2a3a44
// Original: _ZN12SelectScreen13MenuSelection6RenderEPS_9CVector2DS2_f
// Demangled: SelectScreen::MenuSelection::Render(SelectScreen*,CVector2D,CVector2D,float)
int __fastcall SelectScreen::MenuSelection::Render(int a1, int a2, int a3, float a4, float a5, float a6, float a7)
{
  float v11; // r6
  int v12; // r10
  _BYTE v14[8]; // [sp+28h] [bp-28h] BYREF
  _BYTE v15[32]; // [sp+30h] [bp-20h] BYREF

  v11 = COERCE_FLOAT((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1));
  v12 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
  (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 16))(v15, a1);
  return MenuScreen::DrawTextDirect(
           (int)v14,
           a2,
           v12,
           0,
           2,
           (int)v15,
           1,
           a3,
           COERCE_INT((float)((float)((float)(a6 * 0.5) + a4) + -8.0) - a7),
           COERCE_INT(v11 * a5),
           COERCE_INT((float)(a7 + a7) + 16.0),
           0,
           0);
}


// ============================================================

// Address: 0x2a41c4
// Original: _ZN12SelectScreen15ActionSelectionD0Ev
// Demangled: SelectScreen::ActionSelection::~ActionSelection()
// attributes: thunk
void __fastcall SelectScreen::ActionSelection::~ActionSelection(SelectScreen::ActionSelection *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x2a41c8
// Original: _ZN12SelectScreen15ActionSelection14GetTextPercentEv
// Demangled: SelectScreen::ActionSelection::GetTextPercent(void)
int __fastcall SelectScreen::ActionSelection::GetTextPercent(SelectScreen::ActionSelection *this)
{
  return 1065353216;
}


// ============================================================

// Address: 0x2a41d0
// Original: _ZN12SelectScreen15ActionSelection11HandleInputEPS_f
// Demangled: SelectScreen::ActionSelection::HandleInput(SelectScreen*,float)
int __fastcall SelectScreen::ActionSelection::HandleInput(
        SelectScreen::ActionSelection *this,
        SelectScreen *a2,
        float a3)
{
  int result; // r0

  if ( CHID::Implements() == 1 && CHID::IsReleased(64) || (result = *((_DWORD *)&gMobileMenu + lastDevice + 36)) == 0 )
  {
    if ( !NeedsAmazonDownload() )
      CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 1, 0.0, 1.0);
    return (*((int (__fastcall **)(SelectScreen *, _DWORD))this + 2))(a2, *((_DWORD *)this + 3));
  }
  return result;
}


// ============================================================

// Address: 0x2a4238
// Original: _ZN12SelectScreen16SettingSelectionD0Ev
// Demangled: SelectScreen::SettingSelection::~SettingSelection()
// attributes: thunk
void __fastcall SelectScreen::SettingSelection::~SettingSelection(SelectScreen::SettingSelection *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x2a423c
// Original: _ZN12SelectScreen16SettingSelection6RenderEPS_9CVector2DS2_f
// Demangled: SelectScreen::SettingSelection::Render(SelectScreen*,CVector2D,CVector2D,float)
int __fastcall SelectScreen::SettingSelection::Render(int a1, int a2, int a3, float a4, float a5, float a6, float a7)
{
  float32x2_t v7; // d0
  float32x2_t v8; // d2
  float v13; // r4
  int v14; // r11
  float v15; // s20
  int result; // r0
  float v17; // s18
  int v18; // r1
  int *v19; // r2
  int v20; // r1
  int v21; // r2
  CKeyGen *v22; // r4
  int v23; // r0
  float v24; // s16
  float v25; // s18
  int v26; // [sp+28h] [bp-58h] BYREF
  _BYTE v27[8]; // [sp+2Ch] [bp-54h] BYREF
  _DWORD v28[19]; // [sp+34h] [bp-4Ch] BYREF

  v13 = COERCE_FLOAT((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1));
  v14 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
  (*(void (__fastcall **)(_DWORD *, int))(*(_DWORD *)a1 + 16))(v28, a1);
  v15 = (float)(a6 * 0.5) + a4;
  MenuScreen::DrawTextDirect(
    (int)v27,
    a2,
    v14,
    0,
    2,
    (int)v28,
    1,
    a3,
    COERCE_INT((float)(v15 + -8.0) - a7),
    COERCE_INT(v13 * a5),
    COERCE_INT((float)(a7 + a7) + 16.0),
    0,
    0);
  result = *(_DWORD *)(a1 + 8);
  v17 = a5 * 0.6;
  v18 = MobileSettings::settings[8 * result + 7];
  if ( v18 == 1 )
  {
    v24 = *(float *)&a3 + a5;
    v25 = v17 + *(float *)&a3;
    v7.n64_f32[0] = (float)((float)MobileSettings::settings[8 * result + 2]
                          - (float)MobileSettings::settings[8 * result + 4])
                  / (float)((float)MobileSettings::settings[8 * result + 5]
                          - (float)MobileSettings::settings[8 * result + 4]);
    v8.n64_u32[0] = 1.0;
    v8.n64_u32[0] = vmin_f32(v7, v8).n64_u32[0];
    if ( v7.n64_f32[0] < 0.0 )
      v8.n64_u32[0] = 0;
    result = MenuScreen::DrawSlider(
               a2,
               SLODWORD(v25),
               COERCE_INT(v15 + -9.0),
               SLODWORD(v24),
               v15 + 9.0,
               v8.n64_f32[0],
               1,
               0xFFu);
    *(float *)(a1 + 16) = v25;
    *(float *)(a1 + 20) = v24;
  }
  else if ( !v18 )
  {
    v19 = &MobileSettings::settings[8 * result];
    v20 = v19[2];
    v21 = v19[4];
    if ( v20 >= v21 && v20 <= MobileSettings::settings[8 * result + 5] )
    {
      v22 = *(CKeyGen **)(MobileSettings::settings[8 * result + 1] + 4 * (v20 - v21));
      CRGBA::CRGBA((CRGBA *)&v26, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
      v23 = CText::Get((CText *)TheText, v22);
      v28[0] = v26;
      return MenuScreen::DrawTextDirect(
               (int)v27,
               a2,
               v23,
               2,
               2,
               (int)v28,
               1,
               COERCE_INT(v17 + *(float *)&a3),
               COERCE_INT((float)(v15 + -8.0) - a7),
               COERCE_INT(a5 - v17),
               COERCE_INT((float)(a7 + a7) + 16.0),
               0,
               0);
    }
  }
  return result;
}


// ============================================================

// Address: 0x2a444c
// Original: _ZN12SelectScreen16SettingSelection11HandleInputEPS_f
// Demangled: SelectScreen::SettingSelection::HandleInput(SelectScreen*,float)
char *__fastcall SelectScreen::SettingSelection::HandleInput(
        SelectScreen::SettingSelection *this,
        SelectScreen *a2,
        float a3)
{
  float32x2_t v3; // d8
  float32x2_t v4; // d9
  float v7; // s18
  int v8; // r5
  int v9; // r0
  int *v10; // r1
  _DWORD *v11; // r1
  int v12; // t1
  int v13; // r3
  float v14; // s20
  float *v15; // r6
  float v16; // s0
  int *v17; // r1
  _DWORD *v18; // r1
  int v19; // r2
  int v20; // t1
  int v21; // r5
  int *v22; // r1
  _DWORD *v23; // r1
  int v24; // r2
  int v25; // t1
  int v26; // r0
  float v27; // s0
  int *v28; // r0
  int *v29; // r0
  int v30; // r2
  int v31; // t1
  int v32; // r1
  int v33; // r1
  int *v34; // r0
  int *v35; // r0
  int v36; // r2
  int v37; // t1
  int v38; // r1
  char *result; // r0

  if ( MobileSettings::settings[8 * *((_DWORD *)this + 2) + 7] == 1 )
  {
    if ( (CHID::Implements() || CHID::Implements() == 1) && (CHID::IsPressed(62, 0) || CHID::IsPressedNegative(30) == 1) )
      v7 = -1.0;
    else
      v7 = 0.0;
    if ( !CHID::Implements() && CHID::Implements() != 1
      || (v14 = 1.0, !CHID::IsPressed(63, 0)) && !CHID::IsPressedPositive(30) )
    {
      if ( v7 == 0.0 )
      {
        v15 = (float *)((char *)this + 12);
        goto LABEL_27;
      }
      v14 = v7;
    }
    v15 = (float *)((char *)this + 12);
    if ( *((float *)this + 3) == 0.0 && !NeedsAmazonDownload() )
      CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 1, 0.0, 1.0);
    v7 = v14;
LABEL_27:
    v3.n64_u32[0] = 1.0;
    v16 = (float)((float)(v7 * a3) * 20.0) + *v15;
    *v15 = v16;
    if ( v16 <= 1.0 )
    {
      v21 = 0;
    }
    else
    {
      do
      {
        v17 = &MobileSettings::settings[8 * *((_DWORD *)this + 2)];
        v20 = v17[2];
        v18 = v17 + 2;
        v19 = v20;
        if ( v20 != v18[3] )
        {
          *v18 = v19 + 1;
          v16 = *v15;
        }
        v16 = v16 + -1.0;
        *v15 = v16;
      }
      while ( v16 > 1.0 );
      v21 = 1;
    }
    if ( v16 < -1.0 )
    {
      do
      {
        v22 = &MobileSettings::settings[8 * *((_DWORD *)this + 2)];
        v25 = v22[2];
        v23 = v22 + 2;
        v24 = v25;
        if ( v25 != v23[2] )
        {
          *v23 = v24 - 1;
          v16 = *v15;
        }
        v16 = v16 + 1.0;
        *v15 = v16;
      }
      while ( v16 < -1.0 );
      v21 = 1;
    }
    if ( byte_6E00DA )
    {
      v4.n64_f32[0] = (float)(*((float *)&gMobileMenu + 2 * lastDevice + 28) - *((float *)this + 4))
                    / (float)(*((float *)this + 5) - *((float *)this + 4));
      if ( v4.n64_f32[0] < 1.0 && *((_DWORD *)&gMobileMenu + lastDevice + 36) == 2 && v4.n64_f32[0] > 0.0 )
      {
        *((_BYTE *)this + 24) = 1;
        if ( !NeedsAmazonDownload() )
          CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 1, 0.0, 1.0);
      }
      if ( *((_BYTE *)this + 24) )
      {
        v26 = *((_DWORD *)&gMobileMenu + lastDevice + 36);
        if ( !v26 )
        {
          (*(void (__fastcall **)(SelectScreen::SettingSelection *))(*(_DWORD *)this + 32))(this);
          if ( !v21 )
            goto LABEL_71;
          goto LABEL_64;
        }
        if ( v26 == 3 )
        {
          LODWORD(v27) = vmin_f32(v4, v3).n64_u32[0];
          v28 = &MobileSettings::settings[8 * *((_DWORD *)this + 2)];
          v31 = v28[2];
          v29 = v28 + 2;
          v30 = v31;
          if ( v4.n64_f32[0] < 0.0 )
            v27 = 0.0;
          v32 = v29[2] + (int)(float)(v27 * (float)(v29[3] - v29[2]));
          if ( v32 != v30 )
          {
            *v29 = v32;
            goto LABEL_64;
          }
        }
      }
    }
    else if ( *((_BYTE *)this + 24) )
    {
      *((_BYTE *)this + 24) = 0;
    }
    if ( !v21 )
      goto LABEL_71;
    goto LABEL_64;
  }
  if ( CHID::Implements() == 1 && CHID::IsReleased(64) || RightPressed() || !*((_DWORD *)&gMobileMenu + lastDevice + 36) )
  {
    v9 = *((_DWORD *)this + 2);
    v10 = &MobileSettings::settings[8 * v9];
    v12 = v10[2];
    v11 = v10 + 2;
    v13 = v11[3];
    *v11 = v12 + 1;
    if ( v12 >= v13 )
      *v11 = MobileSettings::settings[8 * v9 + 4];
    v8 = 1;
    if ( !NeedsAmazonDownload() )
      CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 1, 0.0, 1.0);
  }
  else
  {
    v8 = 0;
  }
  if ( LeftPressed() == 1 )
  {
    v33 = *((_DWORD *)this + 2);
    v34 = &MobileSettings::settings[8 * v33];
    v37 = v34[2];
    v35 = v34 + 2;
    v36 = v37;
    if ( v37 <= v35[2] )
      v38 = MobileSettings::settings[8 * v33 + 5];
    else
      v38 = v36 - 1;
    *v35 = v38;
    if ( !NeedsAmazonDownload() )
      CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 1, 0.0, 1.0);
  }
  else if ( v8 != 1 )
  {
    goto LABEL_71;
  }
LABEL_64:
  switch ( *((_DWORD *)this + 2) )
  {
    case 9:
      CTouchInterface::SetupLayoutObjects((CTouchInterface *)(*((_DWORD *)this + 2) - 9));
      break;
    case 0xB:
    case 0xC:
      Menu_ApplyAudioSettings();
      break;
    case 0xE:
      CAudioEngine::RetuneRadio((CAudioEngine *)&AudioEngine, dword_6E05BC);
      break;
    case 0x21:
      CAEAudioHardware::SetHRTF((CAEAudioHardware *)AEAudioHardware, dword_6E081C);
      break;
    default:
      break;
  }
LABEL_71:
  result = (char *)(unsigned __int8)SelectScreen::SettingSelection::HandleInput(SelectScreen*,float)::WaitingForScreenRecordingResponse;
  if ( SelectScreen::SettingSelection::HandleInput(SelectScreen*,float)::WaitingForScreenRecordingResponse )
  {
    result = &SelectScreen::SettingSelection::HandleInput(SelectScreen*,float)::WaitingForScreenRecordingResponse;
    SelectScreen::SettingSelection::HandleInput(SelectScreen*,float)::WaitingForScreenRecordingResponse = 0;
    dword_6E087C = 0;
  }
  return result;
}


// ============================================================

// Address: 0x2a487c
// Original: _ZN12SelectScreen16SettingSelection10SetDefaultEv
// Demangled: SelectScreen::SettingSelection::SetDefault(void)
int __fastcall SelectScreen::SettingSelection::SetDefault(SelectScreen::SettingSelection *this)
{
  int result; // r0

  MobileSettings::settings[8 * *((_DWORD *)this + 2) + 2] = MobileSettings::settings[8 * *((_DWORD *)this + 2) + 3];
  result = *((_DWORD *)this + 2);
  if ( result == 9 )
    return j_CTouchInterface::SetupLayoutObjects((CTouchInterface *)byte_9);
  return result;
}


// ============================================================

// Address: 0x2a489c
// Original: _ZN12SelectScreen16SettingSelection10DeselectedEv
// Demangled: SelectScreen::SettingSelection::Deselected(void)
int __fastcall SelectScreen::SettingSelection::Deselected(int this)
{
  if ( *(_BYTE *)(this + 24) )
  {
    *(_BYTE *)(this + 24) = 0;
    this = NeedsAmazonDownload();
    if ( !this )
      return j_CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 1, 0.0, 1.0);
  }
  return this;
}


// ============================================================

// Address: 0x2a4a58
// Original: _ZN12SelectScreen12OnSocialClubEPS_i
// Demangled: SelectScreen::OnSocialClub(SelectScreen*,int)
int __fastcall SelectScreen::OnSocialClub(SelectScreen *this, SelectScreen *a2, int a3)
{
  AddMenuStat(22, 1);
  SetAndroidPaused(1);
  SigningOutfromApp = 1;
  IsSCCloudAvailable();
  return EnterSocialCLub();
}


// ============================================================

// Address: 0x2a7548
// Original: _ZN12SelectScreen13MenuSelectionD2Ev
// Demangled: SelectScreen::MenuSelection::~MenuSelection()
void __fastcall SelectScreen::MenuSelection::~MenuSelection(SelectScreen::MenuSelection *this)
{
  ;
}


// ============================================================

// Address: 0x2a7d1c
// Original: _ZN12SelectScreenD2Ev
// Demangled: SelectScreen::~SelectScreen()
void __fastcall SelectScreen::~SelectScreen(SelectScreen *this)
{
  unsigned int v2; // r1
  unsigned int i; // r5
  int v4; // r0
  void *v5; // r0
  void *v6; // r0
  int v7; // r0

  v2 = *((_DWORD *)this + 6);
  *(_DWORD *)this = &off_662738;
  if ( v2 )
  {
    for ( i = 0; i < v2; ++i )
    {
      v4 = *(_DWORD *)(*((_DWORD *)this + 7) + 4 * i);
      if ( v4 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
        v2 = *((_DWORD *)this + 6);
      }
    }
  }
  v5 = (void *)*((_DWORD *)this + 10);
  *((_DWORD *)this + 9) = 0;
  if ( v5 )
  {
    free(v5);
    *((_DWORD *)this + 10) = 0;
  }
  v6 = (void *)*((_DWORD *)this + 7);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = 0;
  if ( v6 )
  {
    free(v6);
    *((_DWORD *)this + 7) = 0;
  }
  *((_DWORD *)this + 5) = 0;
  v7 = *((_DWORD *)this + 1);
  *(_DWORD *)this = &off_6625A0;
  if ( v7 )
  {
    RwTextureDestroy(v7);
    *((_DWORD *)this + 1) = 0;
  }
}


// ============================================================

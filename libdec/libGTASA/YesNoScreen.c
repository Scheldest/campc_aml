
// Address: 0x2a889c
// Original: _ZN11YesNoScreen6NoFuncEP12SelectScreeni
// Demangled: YesNoScreen::NoFunc(SelectScreen *,int)
int __fastcall YesNoScreen::NoFunc(YesNoScreen *this, SelectScreen *a2, int a3)
{
  int (__fastcall *v3)(_DWORD); // r4
  int result; // r0

  v3 = (int (__fastcall *)(_DWORD))*((_DWORD *)this + 20);
  if ( (unsigned int)dword_6E0090 >= 2 )
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_6E0094 + 4 * dword_6E0090 - 8) + 20))(
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 8),
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  result = MobileMenu::RemoveTopScreen((MobileMenu *)&gMobileMenu, 0, 0);
  if ( v3 )
    return v3(0);
  return result;
}


// ============================================================

// Address: 0x2a88f0
// Original: _ZN11YesNoScreen7YesFuncEP12SelectScreeni
// Demangled: YesNoScreen::YesFunc(SelectScreen *,int)
int __fastcall YesNoScreen::YesFunc(YesNoScreen *this, SelectScreen *a2, int a3)
{
  __int64 v3; // kr00_8

  v3 = *((_QWORD *)this + 9);
  if ( (unsigned int)dword_6E0090 >= 2 )
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_6E0094 + 4 * dword_6E0090 - 8) + 20))(
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 8),
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  MobileMenu::RemoveTopScreen((MobileMenu *)&gMobileMenu, 0, 0);
  return ((int (__fastcall *)(_DWORD))v3)(HIDWORD(v3));
}


// ============================================================

// Address: 0x2a8940
// Original: _ZN11YesNoScreenD0Ev
// Demangled: YesNoScreen::~YesNoScreen()
void __fastcall YesNoScreen::~YesNoScreen(YesNoScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2a8950
// Original: _ZN11YesNoScreen6RenderEi
// Demangled: YesNoScreen::Render(int)
int __fastcall YesNoScreen::Render(YesNoScreen *this, int a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  CKeyGen *v5; // r6
  int v6; // r5
  float v7; // s16
  int v8; // r0
  int result; // r0
  float v10; // s16
  float v11; // s18
  int v12; // r2
  int v13; // r10
  _BYTE v14[4]; // [sp+28h] [bp-48h] BYREF
  int v15; // [sp+2Ch] [bp-44h] BYREF
  int v16; // [sp+30h] [bp-40h]
  int v17; // [sp+34h] [bp-3Ch] BYREF
  int v18; // [sp+38h] [bp-38h]
  int v19; // [sp+3Ch] [bp-34h] BYREF
  float v20[12]; // [sp+40h] [bp-30h] BYREF

  CharSelectScreen::Render(this, a2);
  v5 = (CKeyGen *)*((_DWORD *)this + 17);
  CRGBA::CRGBA((CRGBA *)&v15, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
  v6 = (*(int (__fastcall **)(YesNoScreen *))(*(_DWORD *)this + 48))(this);
  v7 = COERCE_FLOAT((*(int (__fastcall **)(YesNoScreen *))(*(_DWORD *)this + 48))(this));
  v8 = CText::Get((CText *)TheText, v5);
  v17 = v15;
  MenuScreen::DrawTextDirect(
    (int)v20,
    (int)this,
    v8,
    0,
    1,
    (int)&v17,
    1,
    v6,
    1116471296,
    COERCE_INT(630.0 - v7),
    1099956224,
    1,
    0);
  result = *((unsigned __int8 *)this + 12);
  if ( !*((_BYTE *)this + 12) )
  {
    result = CHID::Implements();
    if ( result == 1 )
    {
      result = CHID::GetInputType((CHID *)((char *)&stderr + 1));
      if ( result == 1 )
      {
        v10 = (float)dword_9FC904;
        v11 = (float)dword_9FC900;
        CRGBA::CRGBA((CRGBA *)&v19, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
        v3.n64_u32[0] = 12.5;
        v2.n64_f32[0] = v11 * 0.0;
        v12 = CText::Get((CText *)TheText, (CKeyGen *)"FEH_SEL");
        v17 = v19;
        MenuScreen::DrawTextDirect(
          (int)v20,
          (int)this,
          v12,
          2,
          0,
          (int)&v17,
          1,
          COERCE_INT(
            (float)((float)((float)((float)((float)(v11 - vmax_f32(v2, v3).n64_f32[0]) * 480.0) + (float)(v11 * -240.0))
                          / v10)
                  + 320.0)
          + -120.0),
          1138196480,
          1123024896,
          1104674816,
          0,
          0);
        v17 = 0;
        v18 = 0;
        v15 = 1065353216;
        v16 = 1065353216;
        result = CHID::GetHelpSprite();
        if ( result )
        {
          v13 = *(_DWORD *)result;
          CRGBA::CRGBA((CRGBA *)v14, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
          return MenuScreen::DrawSprite(
                   (int)this,
                   v13,
                   (int)v14,
                   COERCE_INT(v20[0] + -25.0),
                   436.0,
                   v20[0] + -5.0,
                   456.0,
                   v17,
                   v18,
                   v15,
                   v16);
        }
      }
    }
  }
  return result;
}


// ============================================================


// Address: 0x18a0f0
// Original: j__ZN11BriefScreenC2Ev
// Demangled: BriefScreen::BriefScreen(void)
// attributes: thunk
void __fastcall BriefScreen::BriefScreen(BriefScreen *this)
{
  _ZN11BriefScreenC2Ev(this);
}


// ============================================================

// Address: 0x194adc
// Original: j__ZN11BriefScreen18ComputeTotalHeightEv
// Demangled: BriefScreen::ComputeTotalHeight(void)
// attributes: thunk
int __fastcall BriefScreen::ComputeTotalHeight(BriefScreen *this)
{
  return _ZN11BriefScreen18ComputeTotalHeightEv(this);
}


// ============================================================

// Address: 0x2a6b84
// Original: _ZN11BriefScreenC2Ev
// Demangled: BriefScreen::BriefScreen(void)
void __fastcall BriefScreen::BriefScreen(BriefScreen *this)
{
  int v2; // r0

  CharSelectScreen::CharSelectScreen(this, "FEH_BRI", 1);
  *((_DWORD *)this + 18) = 20;
  *(_DWORD *)this = &off_662A6C;
  if ( !dword_A00450 )
  {
    v2 = 0;
    goto LABEL_41;
  }
  if ( !dword_A00478 )
  {
    v2 = 1;
    goto LABEL_41;
  }
  if ( !dword_A004A0 )
  {
    v2 = 2;
    goto LABEL_41;
  }
  if ( !dword_A004C8 )
  {
    v2 = 3;
    goto LABEL_41;
  }
  if ( !dword_A004F0 )
  {
    v2 = 4;
    goto LABEL_41;
  }
  if ( !dword_A00518 )
  {
    v2 = 5;
    goto LABEL_41;
  }
  if ( !dword_A00540 )
  {
    v2 = 6;
    goto LABEL_41;
  }
  if ( !dword_A00568 )
  {
    v2 = 7;
    goto LABEL_41;
  }
  if ( !dword_A00590 )
  {
    v2 = 8;
    goto LABEL_41;
  }
  if ( !dword_A005B8 )
  {
    v2 = 9;
    goto LABEL_41;
  }
  if ( !dword_A005E0 )
  {
    v2 = 10;
    goto LABEL_41;
  }
  if ( !dword_A00608 )
  {
    v2 = 11;
    goto LABEL_41;
  }
  if ( !dword_A00630 )
  {
    v2 = 12;
    goto LABEL_41;
  }
  if ( !dword_A00658 )
  {
    v2 = 13;
    goto LABEL_41;
  }
  if ( !dword_A00680 )
  {
    v2 = 14;
    goto LABEL_41;
  }
  if ( !dword_A006A8 )
  {
    v2 = 15;
    goto LABEL_41;
  }
  if ( !dword_A006D0 )
  {
    v2 = 16;
    goto LABEL_41;
  }
  if ( !dword_A006F8 )
  {
    v2 = 17;
    goto LABEL_41;
  }
  if ( !dword_A00720 )
  {
    v2 = 18;
    goto LABEL_41;
  }
  if ( !dword_A00748 )
  {
    v2 = 19;
LABEL_41:
    *((_DWORD *)this + 18) = v2;
  }
  *((float *)this + 17) = 200.0 - COERCE_FLOAT(BriefScreen::ComputeTotalHeight(this));
}


// ============================================================

// Address: 0x2a6d70
// Original: _ZN11BriefScreen18ComputeTotalHeightEv
// Demangled: BriefScreen::ComputeTotalHeight(void)
int __fastcall BriefScreen::ComputeTotalHeight(BriefScreen *this)
{
  int v2; // r5
  float v3; // s16
  unsigned __int16 *v4; // r2
  int v5; // r6
  float v6; // r0
  int v7; // r4
  bool v8; // r1
  int *v9; // r1
  CMessages *v10; // r0
  unsigned __int16 **v11; // r6
  unsigned __int16 *v13; // [sp+10h] [bp-68h]
  char v14[8]; // [sp+28h] [bp-50h] BYREF
  char v15[4]; // [sp+30h] [bp-48h] BYREF
  int v16[17]; // [sp+34h] [bp-44h] BYREF

  v2 = *((_DWORD *)this + 18);
  v3 = 0.0;
LABEL_2:
  v9 = &CMessages::PreviousBriefs[10 * v2 + 9];
  while ( v2 > 0 )
  {
    v10 = (CMessages *)*(v9 - 17);
    v11 = (unsigned __int16 **)(v9 - 10);
    --v2;
    v9 -= 10;
    if ( v10 )
    {
      CMessages::InsertNumberInString(
        v10,
        *(v11 - 6),
        (int)*(v11 - 5),
        (int)*(v11 - 4),
        (int)*(v11 - 3),
        (int)*(v11 - 2),
        (int)*(v11 - 1),
        (int)gGxtString,
        v13);
      CMessages::InsertStringInString((CMessages *)gGxtString, *v11, v4);
      v16[0] = 0;
      CRGBA::CRGBA((CRGBA *)v15, 0xFFu, 0xFFu, 0xFFu, 0);
      v5 = (*(int (__fastcall **)(BriefScreen *))(*(_DWORD *)this + 48))(this);
      v6 = (*(float (__fastcall **)(BriefScreen *))(*(_DWORD *)this + 48))(this);
      MenuScreen::DrawTextDirect(
        (int)v14,
        (int)this,
        (int)gGxtString,
        0,
        1,
        (int)v15,
        1,
        v5,
        SLODWORD(v3),
        COERCE_INT(630.0 - v6),
        1101004800,
        1,
        (int)v16);
      v7 = v16[0];
      v3 = v3
         + (float)((float)(COERCE_FLOAT(CFont::GetHeight(0, v8)) * (float)((float)v7 + 1.5))
                 / (float)((float)dword_9FC904 / 448.0));
      goto LABEL_2;
    }
  }
  return LODWORD(v3);
}


// ============================================================

// Address: 0x2a6ea4
// Original: _ZN11BriefScreenD0Ev
// Demangled: BriefScreen::~BriefScreen()
void __fastcall BriefScreen::~BriefScreen(BriefScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2a6eb4
// Original: _ZN11BriefScreen6UpdateEf
// Demangled: BriefScreen::Update(float)
int __fastcall BriefScreen::Update(BriefScreen *this, float a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d8
  float v8; // s0
  float v9; // s0
  char *v10; // r0

  if ( (!CHID::Implements() && CHID::Implements() != 1 || !CHID::IsPressed(60, 0) && !CHID::IsPressedPositive(31))
    && CHID::IsPressedPositive(29) != 1 )
  {
    if ( (CHID::Implements() || CHID::Implements() == 1) && (CHID::IsPressed(61, 0) || CHID::IsPressedNegative(31))
      || CHID::IsPressedNegative(29) == 1 )
    {
      v8 = 1.5;
    }
    else
    {
      if ( byte_6E00DA
        && *((_DWORD *)&gMobileMenu + lastDevice + 36) == 3
        && *((float *)&gMobileMenu + 2 * lastDevice + 28) > 200.0 )
      {
        v9 = *((float *)&gMobileMenu + 2 * lastDevice + 29) - *((float *)this + 20);
        goto LABEL_14;
      }
      v8 = 0.15;
    }
    v9 = (float)(a2 * v8) * 70.0;
LABEL_14:
    v4.n64_f32[0] = v9 + *((float *)this + 17);
    goto LABEL_15;
  }
  v4.n64_f32[0] = *((float *)this + 17) + (float)((float)(a2 * -1.5) * 70.0);
LABEL_15:
  *((_DWORD *)this + 17) = v4.n64_u32[0];
  v3.n64_u32[0] = 1120403456;
  v2.n64_f32[0] = 150.0 - COERCE_FLOAT(BriefScreen::ComputeTotalHeight(this));
  *((_DWORD *)this + 17) = vmax_f32(vmin_f32(v4, v3), v2).n64_u32[0];
  v10 = (char *)&gMobileMenu + 8 * lastDevice;
  *((_DWORD *)this + 19) = *((_DWORD *)v10 + 28);
  *((_DWORD *)this + 20) = *((_DWORD *)v10 + 29);
  return j_CharSelectScreen::Update(this, a2);
}


// ============================================================

// Address: 0x2a7034
// Original: _ZN11BriefScreen6RenderEi
// Demangled: BriefScreen::Render(int)
int __fastcall BriefScreen::Render(BriefScreen *this, int a2)
{
  float32x2_t v2; // d11
  int v4; // r10
  int v5; // s16
  int *v6; // r3
  unsigned __int16 *v7; // r2
  __int64 v8; // d0
  int v9; // r4
  float v10; // r0
  int v11; // r4
  bool v12; // r1
  float v13; // r0
  int v14; // r2
  CMessages *v15; // r0
  unsigned __int16 **v16; // r4
  unsigned __int16 *v18; // [sp+10h] [bp-98h]
  int *v19; // [sp+2Ch] [bp-7Ch]
  int v20; // [sp+34h] [bp-74h]
  _BYTE v21[8]; // [sp+38h] [bp-70h] BYREF
  _BYTE v22[4]; // [sp+40h] [bp-68h] BYREF
  int v23[25]; // [sp+44h] [bp-64h] BYREF

  v4 = *((_DWORD *)this + 18);
  v5 = *((int *)this + 17);
  v6 = CMessages::PreviousBriefs;
  v2.n64_u32[0] = 0;
LABEL_7:
  v14 = (int)&v6[10 * v4 + 9];
  while ( v4 >= 1 )
  {
    v15 = *(CMessages **)(v14 - 68);
    v16 = (unsigned __int16 **)(v14 - 40);
    --v4;
    v14 -= 40;
    if ( v15 )
    {
      v19 = v6;
      v20 = a2;
      CMessages::InsertNumberInString(
        v15,
        *(v16 - 6),
        (int)*(v16 - 5),
        (int)*(v16 - 4),
        (int)*(v16 - 3),
        (int)*(v16 - 2),
        (int)*(v16 - 1),
        (int)gGxtString,
        v18);
      CMessages::InsertStringInString((CMessages *)gGxtString, *v16, v7);
      v8 = COERCE_UNSIGNED_INT(1.0) | 0x441D800000000000LL;
      if ( *(float *)&v5 < 100.0 )
        *(float *)&v8 = (float)(*(float *)&v5 / 50.0) + -1.0;
      if ( *(float *)&v5 > 410.0 )
        *(float *)&v8 = (float)((float)(410.0 - *(float *)&v5) / 20.0) + 1.0;
      v23[0] = 0;
      CRGBA::CRGBA(
        (CRGBA *)v22,
        0xFFu,
        0xFFu,
        0xFFu,
        (unsigned int)(float)(vmax_f32((float32x2_t)v8, v2).n64_f32[0] * 255.0));
      v9 = (*(int (__fastcall **)(BriefScreen *))(*(_DWORD *)this + 48))(this);
      v10 = (*(float (__fastcall **)(BriefScreen *))(*(_DWORD *)this + 48))(this);
      MenuScreen::DrawTextDirect(
        (int)v21,
        (int)this,
        (int)gGxtString,
        0,
        1,
        (int)v22,
        1,
        v9,
        v5,
        COERCE_INT(630.0 - v10),
        1101004800,
        1,
        (int)v23);
      v11 = v23[0];
      v13 = COERCE_FLOAT(CFont::GetHeight(0, v12));
      a2 = v20;
      v6 = v19;
      *(float *)&v5 = *(float *)&v5
                    + (float)((float)(v13 * (float)((float)v11 + 1.5)) / (float)((float)dword_9FC904 / 448.0));
      goto LABEL_7;
    }
  }
  return CharSelectScreen::Render(this, a2);
}


// ============================================================

// Address: 0x2a71f8
// Original: _ZN11BriefScreen8DrawBackEb
// Demangled: BriefScreen::DrawBack(bool)
int __fastcall BriefScreen::DrawBack(BriefScreen *this, bool a2)
{
  return j_MenuScreen::DrawBack(this, 0);
}


// ============================================================

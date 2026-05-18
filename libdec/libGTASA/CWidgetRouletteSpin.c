
// Address: 0x19cae8
// Original: j__ZN19CWidgetRouletteSpinC2Ev
// Demangled: CWidgetRouletteSpin::CWidgetRouletteSpin(void)
// attributes: thunk
void __fastcall CWidgetRouletteSpin::CWidgetRouletteSpin(CWidgetRouletteSpin *this)
{
  _ZN19CWidgetRouletteSpinC2Ev(this);
}


// ============================================================

// Address: 0x2c6640
// Original: _ZN19CWidgetRouletteSpinC2Ev
// Demangled: CWidgetRouletteSpin::CWidgetRouletteSpin(void)
void __fastcall CWidgetRouletteSpin::CWidgetRouletteSpin(CWidgetRouletteSpin *this)
{
  _QWORD v2[3]; // [sp+10h] [bp-28h] BYREF

  v2[0] = 0LL;
  v2[1] = 0x4120000041200000LL;
  CWidget::CWidget((int)this, 0, (int)v2, 20, 0);
  *(_DWORD *)this = &off_664F7C;
  CSprite2d::CSprite2d((CWidgetRouletteSpin *)((char *)this + 144));
  *((_DWORD *)this + 37) = 0;
  CWidget::SetTexture(this, (CWidgetRouletteSpin *)((char *)this + 144), "roulred", 1);
}


// ============================================================

// Address: 0x2c66c8
// Original: _ZN19CWidgetRouletteSpin6UpdateEv
// Demangled: CWidgetRouletteSpin::Update(void)
int __fastcall CWidgetRouletteSpin::Update(CWidgetRouletteSpin *this)
{
  CWidget::Update(this);
  return j_CWidget::ManageAlpha(this);
}


// ============================================================

// Address: 0x2c66dc
// Original: _ZN19CWidgetRouletteSpin4DrawEv
// Demangled: CWidgetRouletteSpin::Draw(void)
int __fastcall CWidgetRouletteSpin::Draw(CWidgetRouletteSpin *this)
{
  unsigned __int8 v2; // r2
  unsigned __int8 v3; // r1
  unsigned __int8 v4; // r1
  unsigned __int8 v5; // r1
  float v6; // r1
  signed __int8 v7; // r1
  float v8; // r1
  float v9; // s16
  float v10; // s18
  float v11; // s22
  bool v12; // r1
  float v13; // r0
  unsigned __int16 *v14; // r3
  unsigned __int16 v16[256]; // [sp+8h] [bp-338h] BYREF
  _BYTE v17[4]; // [sp+208h] [bp-138h] BYREF
  char v18[256]; // [sp+20Ch] [bp-134h] BYREF
  int v19; // [sp+30Ch] [bp-34h]

  if ( *((_BYTE *)this + 76) )
  {
    CSprite2d::Draw((char *)this + 144, (char *)this + 32, (char *)this + 73);
    CFont::SetBackground(0, 0, v2);
    CFont::SetProportional((CFont *)((char *)&stderr + 1), v3);
    CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v4);
    CFont::SetOrientation(0, v5);
    CFont::SetRightJustifyWrap(0, v6);
    CFont::SetEdge(0, v7);
    CRGBA::CRGBA((CRGBA *)v17, 0xFFu, 0xFFu, 0xFFu, *((_BYTE *)this + 76));
    CFont::SetColor();
    CFont::SetScale(COERCE_CFONT_(fabsf(*((float *)this + 9) - *((float *)this + 11)) * 0.0175), v8);
    sub_5E6BC0(v18, (const char *)&dword_2C67F0, *((_DWORD *)this + 37));
    AsciiToGxtChar(v18, v16);
    v9 = *((float *)this + 8);
    v10 = *((float *)this + 10);
    v11 = *((float *)this + 9) + *((float *)this + 11);
    v13 = COERCE_FLOAT(CFont::GetHeight(0, v12));
    CFont::PrintString(
      COERCE_CFONT_((float)(v9 + v10) * 0.5),
      (float)(v11 * 0.5) - (float)(v13 * 0.5),
      (CFont *)v16,
      v14);
  }
  return _stack_chk_guard - v19;
}


// ============================================================

// Address: 0x2c67f8
// Original: _ZN19CWidgetRouletteSpin15SetWidgetValue2Eff
// Demangled: CWidgetRouletteSpin::SetWidgetValue2(float,float)
int __fastcall CWidgetRouletteSpin::SetWidgetValue2(int this, float a2, float a3)
{
  _DWORD *v5; // r4

  v5 = (_DWORD *)this;
  if ( a2 == 1.0 )
    this = CWidget::SetTexture((CWidget *)this, (CSprite2d *)(this + 144), "roulbla", 1);
  if ( a2 == 2.0 )
    this = CWidget::SetTexture((CWidget *)v5, (CSprite2d *)(v5 + 36), "roulred", 1);
  if ( a2 == 3.0 )
    this = CWidget::SetTexture((CWidget *)v5, (CSprite2d *)(v5 + 36), "roulgre", 1);
  v5[37] = (int)a3;
  return this;
}


// ============================================================

// Address: 0x2c6884
// Original: _ZN19CWidgetRouletteSpinD2Ev
// Demangled: CWidgetRouletteSpin::~CWidgetRouletteSpin()
void __fastcall CWidgetRouletteSpin::~CWidgetRouletteSpin(CWidgetRouletteSpin *this)
{
  *(_DWORD *)this = &off_664F7C;
  CSprite2d::~CSprite2d((CWidgetRouletteSpin *)((char *)this + 144));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2c68ac
// Original: _ZN19CWidgetRouletteSpinD0Ev
// Demangled: CWidgetRouletteSpin::~CWidgetRouletteSpin()
void __fastcall CWidgetRouletteSpin::~CWidgetRouletteSpin(CWidgetRouletteSpin *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_664F7C;
  CSprite2d::~CSprite2d((CWidgetRouletteSpin *)((char *)this + 144));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2c68d8
// Original: _ZN19CWidgetRouletteSpin7GetNameEv
// Demangled: CWidgetRouletteSpin::GetName(void)
char *__fastcall CWidgetRouletteSpin::GetName(CWidgetRouletteSpin *this)
{
  return "Rte Spin";
}


// ============================================================


// Address: 0x197180
// Original: j__ZN27CWidgetButtonAnimatedArcadeC2EPKcS1_RK14WidgetPositionjjS1_10HIDMapping
// Demangled: CWidgetButtonAnimatedArcade::CWidgetButtonAnimatedArcade(char const*,char const*,WidgetPosition const&,uint,uint,char const*,HIDMapping)
// attributes: thunk
int __fastcall CWidgetButtonAnimatedArcade::CWidgetButtonAnimatedArcade(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return _ZN27CWidgetButtonAnimatedArcadeC2EPKcS1_RK14WidgetPositionjjS1_10HIDMapping(a1, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x2b4c70
// Original: _ZN27CWidgetButtonAnimatedArcadeC2EPKcS1_RK14WidgetPositionjjS1_10HIDMapping
// Demangled: CWidgetButtonAnimatedArcade::CWidgetButtonAnimatedArcade(char const*,char const*,WidgetPosition const&,uint,uint,char const*,HIDMapping)
_DWORD *__fastcall CWidgetButtonAnimatedArcade::CWidgetButtonAnimatedArcade(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char *a7,
        int a8)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetButtonAnimated::CWidgetButtonAnimated(a1, a2, a3, a4, a5, a6, a7, a8);
  *result = &off_663038;
  return result;
}


// ============================================================

// Address: 0x2b4c9c
// Original: _ZN27CWidgetButtonAnimatedArcade14SetWidgetValueEf
// Demangled: CWidgetButtonAnimatedArcade::SetWidgetValue(float)
int __fastcall CWidgetButtonAnimatedArcade::SetWidgetValue(int this, float a2)
{
  int v3; // r4

  v3 = this;
  if ( a2 == 0.0 )
  {
    CWidget::SetTexture((CWidget *)this, (CSprite2d *)(this + 8), "ArcadeGreenReleased", 1);
    this = CWidget::SetTexture((CWidget *)v3, (CSprite2d *)(v3 + 176), "ArcadeGreenPressed", 1);
  }
  if ( a2 == 1.0 )
  {
    CWidget::SetTexture((CWidget *)v3, (CSprite2d *)(v3 + 8), "ArcadeYellowReleased", 1);
    this = CWidget::SetTexture((CWidget *)v3, (CSprite2d *)(v3 + 176), "ArcadeYellowPressed", 1);
  }
  if ( a2 == 2.0 )
  {
    CWidget::SetTexture((CWidget *)v3, (CSprite2d *)(v3 + 8), "ArcadeRedReleased", 1);
    this = CWidget::SetTexture((CWidget *)v3, (CSprite2d *)(v3 + 176), "ArcadeRedPressed", 1);
  }
  if ( a2 == 3.0 )
  {
    CWidget::SetTexture((CWidget *)v3, (CSprite2d *)(v3 + 8), "ArcadeBlackReleased", 1);
    return j_CWidget::SetTexture((CWidget *)v3, (CSprite2d *)(v3 + 176), "ArcadeBlackPressed", 1);
  }
  return this;
}


// ============================================================

// Address: 0x2b4df4
// Original: _ZN27CWidgetButtonAnimatedArcadeD0Ev
// Demangled: CWidgetButtonAnimatedArcade::~CWidgetButtonAnimatedArcade()
void __fastcall CWidgetButtonAnimatedArcade::~CWidgetButtonAnimatedArcade(CWidgetButtonAnimatedArcade *this)
{
  void *v1; // r0

  CWidgetButtonAnimated::~CWidgetButtonAnimated(this);
  operator delete(v1);
}


// ============================================================

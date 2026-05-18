
// Address: 0x18b1dc
// Original: j__ZN23CWidgetRegionSwipeRadioC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionSwipeRadio::CWidgetRegionSwipeRadio(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionSwipeRadio::CWidgetRegionSwipeRadio()
{
  return _ZN23CWidgetRegionSwipeRadioC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c51fc
// Original: _ZN23CWidgetRegionSwipeRadioC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionSwipeRadio::CWidgetRegionSwipeRadio(char const*,WidgetPosition const&)
_DWORD *CWidgetRegionSwipeRadio::CWidgetRegionSwipeRadio()
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetRegion::CWidgetRegion();
  *result = &off_664DC0;
  return result;
}


// ============================================================

// Address: 0x2c5220
// Original: _ZN23CWidgetRegionSwipeRadio12IsSwipedLeftEv
// Demangled: CWidgetRegionSwipeRadio::IsSwipedLeft(void)
int __fastcall CWidgetRegionSwipeRadio::IsSwipedLeft(CWidgetRegionSwipeRadio *this)
{
  if ( CHID::Replaces() == 1 )
    return j_CHID::IsReleased();
  if ( CHID::Implements() == 1 && CHID::IsReleased(12) )
    return 1;
  return j_CWidget::IsSwipedLeft(this);
}


// ============================================================

// Address: 0x2c525c
// Original: _ZN23CWidgetRegionSwipeRadio13IsSwipedRightEv
// Demangled: CWidgetRegionSwipeRadio::IsSwipedRight(void)
int __fastcall CWidgetRegionSwipeRadio::IsSwipedRight(CWidgetRegionSwipeRadio *this)
{
  if ( CHID::Replaces() == 1 )
    return j_CHID::IsReleased();
  if ( CHID::Implements() == 1 && CHID::IsReleased(13) )
    return 1;
  return j_CWidget::IsSwipedRight(this);
}


// ============================================================

// Address: 0x2c5298
// Original: _ZN23CWidgetRegionSwipeRadio12DrawHelpIconEPKcfffi
// Demangled: CWidgetRegionSwipeRadio::DrawHelpIcon(char const*,float,float,float,int)
int __fastcall CWidgetRegionSwipeRadio::DrawHelpIcon(
        CWidgetRegionSwipeRadio *this,
        const char *haystack,
        int a3,
        int a4,
        float a5,
        int a6)
{
  int v9; // r1

  if ( strstr(haystack, "widget_swipe_radio_up") )
    v9 = 12;
  else
    v9 = 13;
  return CHID::DrawHelpIcon((int)haystack, v9, a3, a4, a5, a6, 0);
}


// ============================================================

// Address: 0x2c52f4
// Original: _ZN23CWidgetRegionSwipeRadioD0Ev
// Demangled: CWidgetRegionSwipeRadio::~CWidgetRegionSwipeRadio()
void __fastcall CWidgetRegionSwipeRadio::~CWidgetRegionSwipeRadio(CWidgetRegionSwipeRadio *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2c5304
// Original: _ZN23CWidgetRegionSwipeRadio7GetNameEv
// Demangled: CWidgetRegionSwipeRadio::GetName(void)
char *__fastcall CWidgetRegionSwipeRadio::GetName(CWidgetRegionSwipeRadio *this)
{
  return "Radio";
}


// ============================================================

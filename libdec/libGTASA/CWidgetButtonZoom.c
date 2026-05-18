
// Address: 0x19d788
// Original: j__ZN17CWidgetButtonZoomC2EPKcRK14WidgetPosition10HIDMapping
// Demangled: CWidgetButtonZoom::CWidgetButtonZoom(char const*,WidgetPosition const&,HIDMapping)
// attributes: thunk
int CWidgetButtonZoom::CWidgetButtonZoom()
{
  return _ZN17CWidgetButtonZoomC2EPKcRK14WidgetPosition10HIDMapping();
}


// ============================================================

// Address: 0x2b6cf8
// Original: _ZN17CWidgetButtonZoomC2EPKcRK14WidgetPosition10HIDMapping
// Demangled: CWidgetButtonZoom::CWidgetButtonZoom(char const*,WidgetPosition const&,HIDMapping)
_DWORD *__fastcall CWidgetButtonZoom::CWidgetButtonZoom(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetButton::CWidgetButton(a1, a2, a3, 1, 3072, a4);
  *result = &off_663BC8;
  return result;
}


// ============================================================

// Address: 0x2b6d20
// Original: _ZN17CWidgetButtonZoom6UpdateEv
// Demangled: CWidgetButtonZoom::Update(void)
unsigned int __fastcall CWidgetButtonZoom::Update(CWidgetButtonZoom *this)
{
  CHID *v2; // r0
  unsigned int result; // r0

  CWidgetButton::Update(this);
  v2 = (CHID *)(*((_DWORD *)this + 32) | 0xC00);
  *((_DWORD *)this + 32) = v2;
  result = CHID::GetInputType(v2);
  if ( result == 2 )
  {
    result = *((_DWORD *)this + 32) & 0xFFFFF3FF;
    *((_DWORD *)this + 32) = result;
  }
  return result;
}


// ============================================================

// Address: 0x2b6d4c
// Original: _ZN17CWidgetButtonZoomD0Ev
// Demangled: CWidgetButtonZoom::~CWidgetButtonZoom()
void __fastcall CWidgetButtonZoom::~CWidgetButtonZoom(CWidgetButtonZoom *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonZoom *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b6d78
// Original: _ZN17CWidgetButtonZoom7GetNameEv
// Demangled: CWidgetButtonZoom::GetName(void)
char *__fastcall CWidgetButtonZoom::GetName(CWidgetButtonZoom *this)
{
  return "BT Zoom";
}


// ============================================================

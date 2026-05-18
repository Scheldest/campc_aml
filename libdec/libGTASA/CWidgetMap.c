
// Address: 0x18f128
// Original: j__ZN10CWidgetMapC2EPKcRK14WidgetPosition
// Demangled: CWidgetMap::CWidgetMap(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetMap::CWidgetMap()
{
  return _ZN10CWidgetMapC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2bbf58
// Original: _ZN10CWidgetMapC2EPKcRK14WidgetPosition
// Demangled: CWidgetMap::CWidgetMap(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetMap::CWidgetMap(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidget::CWidget(a1, a2, a3, 4, 0);
  *result = &off_663FE0;
  return result;
}


// ============================================================

// Address: 0x2bbf7c
// Original: _ZN10CWidgetMap9IsTouchedEP9CVector2D
// Demangled: CWidgetMap::IsTouched(CVector2D *)
bool __fastcall CWidgetMap::IsTouched(int a1, _QWORD *a2)
{
  __int64 v5; // [sp+0h] [bp-10h] BYREF

  if ( a2 )
  {
    CTouchInterface::GetTouchDelta((CTouchInterface *)&v5, *(_DWORD *)(a1 + 120));
    *a2 = v5;
  }
  return a1 == CWidget::m_pInitialTouchWidget[*(_DWORD *)(a1 + 120)];
}


// ============================================================

// Address: 0x2bbfb4
// Original: _ZN10CWidgetMapD0Ev
// Demangled: CWidgetMap::~CWidgetMap()
void __fastcall CWidgetMap::~CWidgetMap(CWidgetMap *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2bbfc4
// Original: _ZN10CWidgetMap7GetNameEv
// Demangled: CWidgetMap::GetName(void)
int __fastcall CWidgetMap::GetName(CWidgetMap *this)
{
  return 2867144;
}


// ============================================================

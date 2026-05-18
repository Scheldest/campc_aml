
// Address: 0x1964d0
// Original: j__ZN24CWidgetRegionPoolEnglishC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionPoolEnglish::CWidgetRegionPoolEnglish(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionPoolEnglish::CWidgetRegionPoolEnglish()
{
  return _ZN24CWidgetRegionPoolEnglishC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c1db8
// Original: _ZN24CWidgetRegionPoolEnglishC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionPoolEnglish::CWidgetRegionPoolEnglish(char const*,WidgetPosition const&)
_DWORD *CWidgetRegionPoolEnglish::CWidgetRegionPoolEnglish()
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetRegion::CWidgetRegion();
  *result = &off_6649B4;
  return result;
}


// ============================================================

// Address: 0x2c1ddc
// Original: _ZN24CWidgetRegionPoolEnglish15GetWidgetValue2EPfS0_
// Demangled: CWidgetRegionPoolEnglish::GetWidgetValue2(float *,float *)
int __fastcall CWidgetRegionPoolEnglish::GetWidgetValue2(CWidgetRegionPoolEnglish *this, float *a2, float *a3)
{
  int result; // r0
  int v7; // [sp+0h] [bp-18h] BYREF
  int v8; // [sp+4h] [bp-14h]

  CTouchInterface::GetTouchDelta((CTouchInterface *)&v7, *((_DWORD *)this + 30));
  *(_DWORD *)a2 = v7;
  CTouchInterface::GetTouchDelta((CTouchInterface *)&v7, *((_DWORD *)this + 30));
  result = v8;
  *(_DWORD *)a3 = v8;
  return result;
}


// ============================================================

// Address: 0x2c1e0c
// Original: _ZN24CWidgetRegionPoolEnglish9IsTouchedEP9CVector2D
// Demangled: CWidgetRegionPoolEnglish::IsTouched(CVector2D *)
bool __fastcall CWidgetRegionPoolEnglish::IsTouched(int a1)
{
  return a1 == CWidget::m_pInitialTouchWidget[*(_DWORD *)(a1 + 120)];
}


// ============================================================

// Address: 0x2c1e28
// Original: _ZN24CWidgetRegionPoolEnglishD0Ev
// Demangled: CWidgetRegionPoolEnglish::~CWidgetRegionPoolEnglish()
void __fastcall CWidgetRegionPoolEnglish::~CWidgetRegionPoolEnglish(CWidgetRegionPoolEnglish *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2c1e38
// Original: _ZN24CWidgetRegionPoolEnglish7GetNameEv
// Demangled: CWidgetRegionPoolEnglish::GetName(void)
char *__fastcall CWidgetRegionPoolEnglish::GetName(CWidgetRegionPoolEnglish *this)
{
  return "Pool English";
}


// ============================================================

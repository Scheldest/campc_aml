
// Address: 0x192b44
// Original: j__ZN24CWidgetRegionColorPickerC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionColorPicker::CWidgetRegionColorPicker(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionColorPicker::CWidgetRegionColorPicker()
{
  return _ZN24CWidgetRegionColorPickerC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2bff2c
// Original: _ZN24CWidgetRegionColorPickerC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionColorPicker::CWidgetRegionColorPicker(char const*,WidgetPosition const&)
_DWORD *CWidgetRegionColorPicker::CWidgetRegionColorPicker()
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetRegion::CWidgetRegion();
  *result = &off_6645A8;
  return result;
}


// ============================================================

// Address: 0x2bff50
// Original: _ZN24CWidgetRegionColorPicker14GetWidgetValueEv
// Demangled: CWidgetRegionColorPicker::GetWidgetValue(void)
int __fastcall CWidgetRegionColorPicker::GetWidgetValue(CWidgetRegionColorPicker *this)
{
  float v2; // s16
  float v3; // s18
  float v4; // s20
  float v5; // s0
  float v7[10]; // [sp+0h] [bp-28h] BYREF

  if ( (*(int (__fastcall **)(CWidgetRegionColorPicker *, _DWORD))(*(_DWORD *)this + 80))(this, 0) == 1 )
  {
    CTouchInterface::GetTouchPosition((CTouchInterface *)v7, *((_DWORD *)this + 30));
    v2 = *((float *)this + 8);
    v3 = *((float *)this + 10);
    v4 = v7[0];
    CTouchInterface::GetTouchPosition((CTouchInterface *)v7, *((_DWORD *)this + 30));
    v5 = (float)((int)(float)((float)((float)(v4 - v2) / fabsf(v3 - v2)) * 8.0)
               + 8
               * (int)(float)((float)((float)(v7[1] - *((float *)this + 11))
                                    / fabsf(*((float *)this + 9) - *((float *)this + 11)))
                            * 8.0));
  }
  else
  {
    v5 = 0.0;
  }
  return LODWORD(v5);
}


// ============================================================

// Address: 0x2bfff0
// Original: _ZN24CWidgetRegionColorPickerD0Ev
// Demangled: CWidgetRegionColorPicker::~CWidgetRegionColorPicker()
void __fastcall CWidgetRegionColorPicker::~CWidgetRegionColorPicker(CWidgetRegionColorPicker *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2c0000
// Original: _ZN24CWidgetRegionColorPicker7GetNameEv
// Demangled: CWidgetRegionColorPicker::GetName(void)
char *__fastcall CWidgetRegionColorPicker::GetName(CWidgetRegionColorPicker *this)
{
  return "Color Pick";
}


// ============================================================


// Address: 0x18c178
// Original: j__ZN25CWidgetButtonSkipCutsceneC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonSkipCutscene::CWidgetButtonSkipCutscene(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetButtonSkipCutscene::CWidgetButtonSkipCutscene()
{
  return _ZN25CWidgetButtonSkipCutsceneC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2b5c70
// Original: _ZN25CWidgetButtonSkipCutsceneC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonSkipCutscene::CWidgetButtonSkipCutscene(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetButtonSkipCutscene::CWidgetButtonSkipCutscene(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetButton::CWidgetButton(a1, a2, a3, 1, 8196, 41);
  *result = &off_6634D8;
  return result;
}


// ============================================================

// Address: 0x2b5c9c
// Original: _ZN25CWidgetButtonSkipCutscene6UpdateEv
// Demangled: CWidgetButtonSkipCutscene::Update(void)
int __fastcall CWidgetButtonSkipCutscene::Update(CWidgetButtonSkipCutscene *this)
{
  int InputType; // r0
  int v3; // r1
  unsigned int v4; // r2

  InputType = CHID::GetInputType(this);
  v3 = *((_DWORD *)this + 32);
  v4 = v3 | 0x800;
  if ( InputType == 2 )
    v4 = v3 & 0xFFFFF7FF;
  *((_DWORD *)this + 32) = v4;
  return j_CWidgetButton::Update(this);
}


// ============================================================

// Address: 0x2b5cc4
// Original: _ZN25CWidgetButtonSkipCutsceneD0Ev
// Demangled: CWidgetButtonSkipCutscene::~CWidgetButtonSkipCutscene()
void __fastcall CWidgetButtonSkipCutscene::~CWidgetButtonSkipCutscene(CWidgetButtonSkipCutscene *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonSkipCutscene *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b5cf0
// Original: _ZN25CWidgetButtonSkipCutscene7GetNameEv
// Demangled: CWidgetButtonSkipCutscene::GetName(void)
int __fastcall CWidgetButtonSkipCutscene::GetName(CWidgetButtonSkipCutscene *this)
{
  return 2841844;
}


// ============================================================

// Address: 0x2b5cfc
// Original: _ZN25CWidgetButtonSkipCutscene4DrawEv
// Demangled: CWidgetButtonSkipCutscene::Draw(void)
void __fastcall CWidgetButtonSkipCutscene::Draw(CWidgetButtonSkipCutscene *this)
{
  ;
}


// ============================================================

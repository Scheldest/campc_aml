
// Address: 0x194f54
// Original: j__ZN27CWidgetRegionBasketBallJumpC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionBasketBallJump::CWidgetRegionBasketBallJump(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionBasketBallJump::CWidgetRegionBasketBallJump()
{
  return _ZN27CWidgetRegionBasketBallJumpC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2bfea8
// Original: _ZN27CWidgetRegionBasketBallJumpC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionBasketBallJump::CWidgetRegionBasketBallJump(char const*,WidgetPosition const&)
int CWidgetRegionBasketBallJump::CWidgetRegionBasketBallJump()
{
  int result; // r0
  int v1; // r2

  result = CWidgetRegion::CWidgetRegion();
  *(_BYTE *)(result + 144) = 0;
  v1 = *(_DWORD *)(result + 128);
  *(_DWORD *)result = &off_664514;
  *(_DWORD *)(result + 128) = v1 | 4;
  return result;
}


// ============================================================

// Address: 0x2bfedc
// Original: _ZN27CWidgetRegionBasketBallJump6UpdateEv
// Demangled: CWidgetRegionBasketBallJump::Update(void)
int __fastcall CWidgetRegionBasketBallJump::Update(CTouchInterface **this)
{
  int v2; // r1
  int result; // r0

  CWidgetRegion::Update((CWidgetRegion *)this);
  result = CTouchInterface::IsTouchDown(this[30], v2);
  if ( !result )
  {
    result = 0;
    *((_BYTE *)this + 144) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x2bfef8
// Original: _ZN27CWidgetRegionBasketBallJump14OnInitialTouchEv
// Demangled: CWidgetRegionBasketBallJump::OnInitialTouch(void)
int __fastcall CWidgetRegionBasketBallJump::OnInitialTouch(CWidgetRegionBasketBallJump *this)
{
  int result; // r0

  CWidget::OnInitialTouch(this);
  result = 1;
  *((_BYTE *)this + 144) = 1;
  return result;
}


// ============================================================

// Address: 0x2bff0a
// Original: _ZN27CWidgetRegionBasketBallJump9IsTouchedEP9CVector2D
// Demangled: CWidgetRegionBasketBallJump::IsTouched(CVector2D *)
int __fastcall CWidgetRegionBasketBallJump::IsTouched(int a1)
{
  return *(unsigned __int8 *)(a1 + 144);
}


// ============================================================

// Address: 0x2bff10
// Original: _ZN27CWidgetRegionBasketBallJumpD0Ev
// Demangled: CWidgetRegionBasketBallJump::~CWidgetRegionBasketBallJump()
void __fastcall CWidgetRegionBasketBallJump::~CWidgetRegionBasketBallJump(CWidgetRegionBasketBallJump *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2bff20
// Original: _ZN27CWidgetRegionBasketBallJump7GetNameEv
// Demangled: CWidgetRegionBasketBallJump::GetName(void)
int __fastcall CWidgetRegionBasketBallJump::GetName(CWidgetRegionBasketBallJump *this)
{
  return 2883364;
}


// ============================================================


// Address: 0x18da8c
// Original: j__ZN27CWidgetRegionPoolBallInHandC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionPoolBallInHand::CWidgetRegionPoolBallInHand(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionPoolBallInHand::CWidgetRegionPoolBallInHand()
{
  return _ZN27CWidgetRegionPoolBallInHandC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c1c20
// Original: _ZN27CWidgetRegionPoolBallInHandC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionPoolBallInHand::CWidgetRegionPoolBallInHand(char const*,WidgetPosition const&)
_DWORD *CWidgetRegionPoolBallInHand::CWidgetRegionPoolBallInHand()
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetRegion::CWidgetRegion();
  *result = &off_664920;
  return result;
}


// ============================================================

// Address: 0x2c1c48
// Original: _ZN27CWidgetRegionPoolBallInHand15GetWidgetValue2EPfS0_
// Demangled: CWidgetRegionPoolBallInHand::GetWidgetValue2(float *,float *)
int __fastcall CWidgetRegionPoolBallInHand::GetWidgetValue2(CWidgetRegionPoolBallInHand *this, float *a2, float *a3)
{
  CWidget *TouchDelta; // r0
  float v7; // s16
  float v8; // s0
  CWidget *v9; // r0
  float v10; // s16
  int result; // r0
  float v12; // s0
  float v13[10]; // [sp+0h] [bp-28h] BYREF

  TouchDelta = (CWidget *)CTouchInterface::GetTouchDelta((CTouchInterface *)v13, *((_DWORD *)this + 30));
  v7 = v13[0];
  v8 = v7 * 0.2 * (float)(1024.0 / (float)(unsigned int)CWidget::GetScreenWidth(TouchDelta));
  *a2 = v8;
  v9 = (CWidget *)CTouchInterface::GetTouchDelta((CTouchInterface *)v13, *((_DWORD *)this + 30));
  v10 = v13[1];
  result = CWidget::GetScreenWidth(v9);
  v12 = v10 * -0.2 * (float)(1024.0 / (float)(unsigned int)result);
  *a3 = v12;
  return result;
}


// ============================================================

// Address: 0x2c1cf4
// Original: _ZN27CWidgetRegionPoolBallInHand9IsTouchedEP9CVector2D
// Demangled: CWidgetRegionPoolBallInHand::IsTouched(CVector2D *)
bool __fastcall CWidgetRegionPoolBallInHand::IsTouched(int a1)
{
  return a1 == CWidget::m_pInitialTouchWidget[*(_DWORD *)(a1 + 120)];
}


// ============================================================

// Address: 0x2c1d10
// Original: _ZN27CWidgetRegionPoolBallInHand15SetWidgetValue3Efff
// Demangled: CWidgetRegionPoolBallInHand::SetWidgetValue3(float,float,float)
int __fastcall CWidgetRegionPoolBallInHand::SetWidgetValue3(
        CWidgetRegionPoolBallInHand *this,
        float a2,
        float a3,
        float a4)
{
  float v5; // s0
  float v6; // s2
  float v8; // [sp+Ch] [bp-24h] BYREF
  float v9; // [sp+10h] [bp-20h]
  float v10; // [sp+14h] [bp-1Ch]
  float v11; // [sp+18h] [bp-18h]
  float v12; // [sp+1Ch] [bp-14h] BYREF
  float v13; // [sp+20h] [bp-10h]
  int v14; // [sp+24h] [bp-Ch]

  v12 = 0.0;
  v13 = 0.0;
  v14 = 0;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  CSprite::CalcScreenCoors((int)&v8, (int)&v12, 0, 0, 1, 1);
  v5 = fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.5;
  v6 = fabsf(*((float *)this + 9) - *((float *)this + 11)) * 0.5;
  v8 = v12 - v5;
  v11 = v13 - v5;
  v10 = v12 + v6;
  v9 = v13 + v6;
  return CWidget::SetScreenRect();
}


// ============================================================

// Address: 0x2c1d96
// Original: _ZN27CWidgetRegionPoolBallInHandD0Ev
// Demangled: CWidgetRegionPoolBallInHand::~CWidgetRegionPoolBallInHand()
void __fastcall CWidgetRegionPoolBallInHand::~CWidgetRegionPoolBallInHand(CWidgetRegionPoolBallInHand *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2c1da8
// Original: _ZN27CWidgetRegionPoolBallInHand7GetNameEv
// Demangled: CWidgetRegionPoolBallInHand::GetName(void)
char *__fastcall CWidgetRegionPoolBallInHand::GetName(CWidgetRegionPoolBallInHand *this)
{
  return "Pool BIH";
}


// ============================================================

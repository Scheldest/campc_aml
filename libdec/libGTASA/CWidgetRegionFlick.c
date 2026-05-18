
// Address: 0x1906f0
// Original: j__ZN18CWidgetRegionFlickC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionFlick::CWidgetRegionFlick(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionFlick::CWidgetRegionFlick()
{
  return _ZN18CWidgetRegionFlickC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c0570
// Original: _ZN18CWidgetRegionFlickC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionFlick::CWidgetRegionFlick(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetRegionFlick::CWidgetRegionFlick(_DWORD *a1)
{
  CWidgetRegion::CWidgetRegion();
  *a1 = &off_6646D0;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 37));
  a1[36] = 0;
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 37), "Arrow", 1);
  return a1;
}


// ============================================================

// Address: 0x2c05c0
// Original: _ZN18CWidgetRegionFlick6UpdateEv
// Demangled: CWidgetRegionFlick::Update(void)
char *__fastcall CWidgetRegionFlick::Update(CWidgetRegionFlick *this)
{
  char *result; // r0
  float v3; // s0
  int v4; // r1
  char *v5; // r2
  float v6[4]; // [sp+0h] [bp-10h] BYREF

  CWidgetRegion::Update(this);
  if ( CWidget::IsTouched(this, 0) == 1 )
  {
    result = (char *)*((_DWORD *)this + 36);
    if ( !result )
    {
      CTouchInterface::GetTouchPosition((CTouchInterface *)v6, *((_DWORD *)this + 30));
      result = (char *)&CWidget::m_vecTouchAnchor[2 * *((_DWORD *)this + 30)];
      v3 = (float)dword_9FC900 * 0.004883;
      if ( v6[0] > (float)(*(float *)result + v3) )
      {
        v4 = 128;
        result = &byte_70B619;
        v5 = &byte_70B618;
LABEL_9:
        *v5 = 1;
        *result = 0;
        *((_DWORD *)this + 36) = v4;
        return result;
      }
      if ( v6[0] < (float)(*(float *)result - v3) )
      {
        v4 = -128;
        result = &byte_70B618;
        v5 = &byte_70B619;
        goto LABEL_9;
      }
    }
  }
  else
  {
    result = &byte_70B619;
    byte_70B619 = 0;
    byte_70B618 = 0;
    *((_DWORD *)this + 36) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x2c0690
// Original: _ZN18CWidgetRegionFlick4DrawEv
// Demangled: CWidgetRegionFlick::Draw(void)
int __fastcall CWidgetRegionFlick::Draw(CWidgetRegionFlick *this)
{
  int v2; // r1
  int result; // r0
  float v4; // s0
  float v5; // s2
  float v6; // s4
  float v7; // s0
  float v8; // s2
  float v9; // s4
  _BYTE v10[4]; // [sp+4h] [bp-24h] BYREF
  float v11; // [sp+8h] [bp-20h] BYREF
  float v12; // [sp+Ch] [bp-1Ch]
  float v13; // [sp+10h] [bp-18h]
  float v14; // [sp+14h] [bp-14h]
  float v15; // [sp+18h] [bp-10h] BYREF
  float v16; // [sp+1Ch] [bp-Ch]

  CWidgetRegion::Draw(this);
  result = *(unsigned __int16 *)(CPad::GetPad(0, v2) + 272);
  if ( !result )
  {
    result = CWidget::IsTouched(this, 0);
    if ( result == 1 )
    {
      CTouchInterface::GetTouchPosition((CTouchInterface *)&v15, *((_DWORD *)this + 30));
      if ( byte_70B618 )
      {
        v4 = (float)dword_9FC900 * 0.03125;
        v5 = v16 + (float)((float)dword_9FC904 * -0.065104);
        v6 = v15 + (float)((float)dword_9FC900 * 0.032227);
        v14 = v5 - v4;
        v11 = v6 - v4;
        v13 = v6 + v4;
        v12 = v5 + v4;
        CRGBA::CRGBA((CRGBA *)v10, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
        return CSprite2d::Draw((char *)this + 148, &v11, v10);
      }
      else
      {
        result = (unsigned __int8)byte_70B619;
        if ( byte_70B619 )
        {
          v7 = (float)dword_9FC900 * 0.03125;
          v8 = v16 + (float)((float)dword_9FC904 * -0.065104);
          v9 = v15 + (float)((float)dword_9FC900 * -0.032227);
          v14 = v8 - v7;
          v11 = v9 - v7;
          v13 = v9 + v7;
          v12 = v8 + v7;
          CRGBA::CRGBA((CRGBA *)v10, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
          return CSprite2d::DrawRotated((int)this + 148, (int)&v11, 3.14);
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x2c0800
// Original: _ZN18CWidgetRegionFlick9IsTouchedEP9CVector2D
// Demangled: CWidgetRegionFlick::IsTouched(CVector2D *)
int __fastcall CWidgetRegionFlick::IsTouched(int a1, float *a2)
{
  float *v4; // r1
  float v5; // s0
  int result; // r0
  float v7; // s0

  if ( !CHID::Implements() && CHID::Implements() != 1 )
    goto LABEL_10;
  CHID::IsPressed(24, a2);
  v4 = a2;
  if ( a2 )
    v4 = a2 + 1;
  CHID::IsPressed(25, v4);
  if ( CHID::IsPressed(24, 0) || CHID::IsPressed(25, 0) == 1 )
  {
    if ( a2 )
    {
      v5 = a2[1] * 128.0;
      *a2 = *a2 * 128.0;
      a2[1] = v5;
    }
    return 1;
  }
  else
  {
LABEL_10:
    result = CWidget::IsTouched(a1, 0);
    if ( a2 )
    {
      v7 = (float)*(int *)(a1 + 144);
      a2[1] = 0.0;
      *a2 = v7;
    }
  }
  return result;
}


// ============================================================

// Address: 0x2c089c
// Original: _ZN18CWidgetRegionFlickD2Ev
// Demangled: CWidgetRegionFlick::~CWidgetRegionFlick()
void __fastcall CWidgetRegionFlick::~CWidgetRegionFlick(CWidgetRegionFlick *this)
{
  *(_DWORD *)this = &off_6646D0;
  CSprite2d::~CSprite2d((CWidgetRegionFlick *)((char *)this + 148));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2c08c4
// Original: _ZN18CWidgetRegionFlickD0Ev
// Demangled: CWidgetRegionFlick::~CWidgetRegionFlick()
void __fastcall CWidgetRegionFlick::~CWidgetRegionFlick(CWidgetRegionFlick *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_6646D0;
  CSprite2d::~CSprite2d((CWidgetRegionFlick *)((char *)this + 148));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2c08f0
// Original: _ZN18CWidgetRegionFlick7GetNameEv
// Demangled: CWidgetRegionFlick::GetName(void)
int __fastcall CWidgetRegionFlick::GetName(CWidgetRegionFlick *this)
{
  return 2885876;
}


// ============================================================

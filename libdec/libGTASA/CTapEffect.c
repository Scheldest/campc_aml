
// Address: 0x18d3b8
// Original: j__ZN10CTapEffectC2EPKc9CVector2D
// Demangled: CTapEffect::CTapEffect(char const*,CVector2D)
// attributes: thunk
int CTapEffect::CTapEffect()
{
  return _ZN10CTapEffectC2EPKc9CVector2D();
}


// ============================================================

// Address: 0x197424
// Original: j__ZN10CTapEffect6UpdateEv
// Demangled: CTapEffect::Update(void)
// attributes: thunk
int __fastcall CTapEffect::Update(CTapEffect *this)
{
  return _ZN10CTapEffect6UpdateEv(this);
}


// ============================================================

// Address: 0x19af10
// Original: j__ZN10CTapEffect9UpdateAllEv
// Demangled: CTapEffect::UpdateAll(void)
// attributes: thunk
int __fastcall CTapEffect::UpdateAll(CTapEffect *this)
{
  return _ZN10CTapEffect9UpdateAllEv(this);
}


// ============================================================

// Address: 0x19d464
// Original: j__ZN10CTapEffect7DrawAllEv
// Demangled: CTapEffect::DrawAll(void)
// attributes: thunk
int __fastcall CTapEffect::DrawAll(CTapEffect *this)
{
  return _ZN10CTapEffect7DrawAllEv(this);
}


// ============================================================

// Address: 0x2ac230
// Original: _ZN10CTapEffectC2EPKc9CVector2D
// Demangled: CTapEffect::CTapEffect(char const*,CVector2D)
int __fastcall CTapEffect::CTapEffect(int a1, CSprite2d *a2, float a3, float a4)
{
  CWidget *v8; // r0
  int v9; // r3
  int *v10; // r5
  int v11; // s0
  int v12; // s2

  CSprite2d::CSprite2d((CSprite2d *)(a1 + 8));
  *(_QWORD *)(a1 + 28) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 36) = 0x49742400C9742400LL;
  v9 = CTapEffect::m_pChainTail;
  *(_DWORD *)a1 = CTapEffect::m_pChainTail;
  *(_DWORD *)(a1 + 4) = 0;
  v10 = (int *)(v9 + 4);
  if ( !v9 )
    v10 = &CTapEffect::m_pChainHead;
  *v10 = a1;
  v11 = dword_9FC900;
  v12 = dword_9FC904;
  CTapEffect::m_pChainTail = a1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 1128792064;
  *(float *)(a1 + 12) = (float)(a3 / (float)v11) * 640.0;
  *(float *)(a1 + 16) = (float)(a4 / (float)v12) * 448.0;
  if ( a2 )
    CWidget::SetTextureStatic(v8, a2, (char *)&CTapEffect::m_pChainTail);
  return a1;
}


// ============================================================

// Address: 0x2ac304
// Original: _ZN10CTapEffectD2Ev
// Demangled: CTapEffect::~CTapEffect()
void __fastcall CTapEffect::~CTapEffect(CTapEffect *this)
{
  int *v2; // r3
  __int64 v3; // r0

  v2 = (int *)(*(_DWORD *)this + 4);
  if ( !*(_DWORD *)this )
    v2 = &CTapEffect::m_pChainHead;
  *v2 = *((_DWORD *)this + 1);
  v3 = *(_QWORD *)this;
  if ( !*((_DWORD *)this + 1) )
    HIDWORD(v3) = &CTapEffect::m_pChainTail;
  *(_DWORD *)HIDWORD(v3) = v3;
  CSprite2d::~CSprite2d((CTapEffect *)((char *)this + 8));
}


// ============================================================

// Address: 0x2ac348
// Original: _ZN10CTapEffect6UpdateEv
// Demangled: CTapEffect::Update(void)
void __fastcall CTapEffect::Update(CTapEffect *this)
{
  float32x2_t v1; // d3
  float32x2_t v2; // d4
  double v4; // d18
  float v5; // s0
  float v6; // s2
  float v7; // s4
  float v8; // s6
  float v9; // s2
  float v10; // s4
  int *v11; // r3
  __int64 v12; // r0

  v2.n64_u32[0] = 25.0;
  v4 = *((float *)this + 6);
  v1.n64_f32[0] = v4 + CWidget::m_fElapsedTime * -250.0;
  v5 = CWidget::m_fElapsedTime * v4 + *((float *)this + 5);
  v6 = *((float *)this + 3);
  v7 = *((float *)this + 4);
  *((float *)this + 5) = v5;
  *((_DWORD *)this + 6) = vmax_f32(v1, v2).n64_u32[0];
  v8 = (float)dword_9FC900 / 640.0;
  v9 = v6 * v8;
  v10 = v7 * (float)((float)dword_9FC904 / 448.0);
  *((float *)this + 7) = v9 - (float)(v8 * v5);
  *((float *)this + 9) = v9 + (float)(v8 * v5);
  *((float *)this + 8) = (float)(v8 * v5) + v10;
  *((float *)this + 10) = v10 - (float)(v8 * v5);
  if ( this && v5 > 60.0 )
  {
    v11 = (int *)(*(_DWORD *)this + 4);
    if ( !*(_DWORD *)this )
      v11 = &CTapEffect::m_pChainHead;
    *v11 = *((_DWORD *)this + 1);
    v12 = *(_QWORD *)this;
    if ( !*((_DWORD *)this + 1) )
      HIDWORD(v12) = &CTapEffect::m_pChainTail;
    *(_DWORD *)HIDWORD(v12) = v12;
    CSprite2d::~CSprite2d((CTapEffect *)((char *)this + 8));
    operator delete(this);
  }
}


// ============================================================

// Address: 0x2ac464
// Original: _ZN10CTapEffect4DrawEv
// Demangled: CTapEffect::Draw(void)
int __fastcall CTapEffect::Draw(CTapEffect *this)
{
  int result; // r0
  char *v3; // r4
  float v4; // s0
  unsigned int v5; // r0
  _BYTE v6[20]; // [sp+4h] [bp-14h] BYREF

  v3 = (char *)this + 8;
  result = *((_DWORD *)this + 2);
  if ( result )
  {
    v4 = *((float *)this + 5);
    if ( v4 <= 30.0 )
      LOBYTE(v5) = 0x80;
    else
      v5 = (unsigned int)(float)((float)((float)((float)(v4 + -30.0) / -30.0) + 1.0) * 128.0);
    CRGBA::CRGBA((CRGBA *)v6, 0xFFu, 0xFFu, 0xFFu, v5);
    return CSprite2d::Draw(v3, (char *)this + 28, v6);
  }
  return result;
}


// ============================================================

// Address: 0x2ac4dc
// Original: _ZN10CTapEffect9UpdateAllEv
// Demangled: CTapEffect::UpdateAll(void)
CTapEffect *__fastcall CTapEffect::UpdateAll(CTapEffect *this)
{
  CTapEffect *result; // r0
  CTapEffect *v2; // r4

  result = (CTapEffect *)CTapEffect::m_pChainHead;
  if ( CTapEffect::m_pChainHead )
  {
    do
    {
      v2 = (CTapEffect *)*((_DWORD *)result + 1);
      CTapEffect::Update(result);
      result = v2;
    }
    while ( v2 );
  }
  return result;
}


// ============================================================

// Address: 0x2ac500
// Original: _ZN10CTapEffect7DrawAllEv
// Demangled: CTapEffect::DrawAll(void)
int *__fastcall CTapEffect::DrawAll(CTapEffect *this)
{
  int *result; // r0
  int i; // r6
  float v3; // s0
  unsigned int v4; // r0
  _BYTE v5[52]; // [sp+4h] [bp-34h] BYREF

  result = &CTapEffect::m_pChainHead;
  for ( i = CTapEffect::m_pChainHead; i; i = *(_DWORD *)(i + 4) )
  {
    result = *(int **)(i + 8);
    if ( result )
    {
      v3 = *(float *)(i + 20);
      if ( v3 <= 30.0 )
        LOBYTE(v4) = 0x80;
      else
        v4 = (unsigned int)(float)((float)((float)((float)(v3 + -30.0) / -30.0) + 1.0) * 128.0);
      CRGBA::CRGBA((CRGBA *)v5, 0xFFu, 0xFFu, 0xFFu, v4);
      result = (int *)CSprite2d::Draw(i + 8, i + 28, v5);
    }
  }
  return result;
}


// ============================================================

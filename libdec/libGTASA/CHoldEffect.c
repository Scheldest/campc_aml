
// Address: 0x18b1f8
// Original: j__ZN11CHoldEffect9UpdateAllEv
// Demangled: CHoldEffect::UpdateAll(void)
// attributes: thunk
int __fastcall CHoldEffect::UpdateAll(CHoldEffect *this)
{
  return _ZN11CHoldEffect9UpdateAllEv(this);
}


// ============================================================

// Address: 0x18d290
// Original: j__ZN11CHoldEffectD2Ev
// Demangled: CHoldEffect::~CHoldEffect()
// attributes: thunk
void __fastcall CHoldEffect::~CHoldEffect(CHoldEffect *this)
{
  _ZN11CHoldEffectD2Ev(this);
}


// ============================================================

// Address: 0x1910e4
// Original: j__ZN11CHoldEffect7DrawAllEv
// Demangled: CHoldEffect::DrawAll(void)
// attributes: thunk
int __fastcall CHoldEffect::DrawAll(CHoldEffect *this)
{
  return _ZN11CHoldEffect7DrawAllEv(this);
}


// ============================================================

// Address: 0x1950a8
// Original: j__ZN11CHoldEffect4DrawEv
// Demangled: CHoldEffect::Draw(void)
// attributes: thunk
int __fastcall CHoldEffect::Draw(CHoldEffect *this)
{
  return _ZN11CHoldEffect4DrawEv(this);
}


// ============================================================

// Address: 0x198fa4
// Original: j__ZN11CHoldEffectC2EPKcb5CRGBAb
// Demangled: CHoldEffect::CHoldEffect(char const*,bool,CRGBA,bool)
// attributes: thunk
int CHoldEffect::CHoldEffect()
{
  return _ZN11CHoldEffectC2EPKcb5CRGBAb();
}


// ============================================================

// Address: 0x2962d0
// Original: _ZN11CHoldEffectC2EPKcb5CRGBAb
// Demangled: CHoldEffect::CHoldEffect(char const*,bool,CRGBA,bool)
int __fastcall CHoldEffect::CHoldEffect(int a1, CSprite2d *a2, char a3, _BYTE *a4, char *a5)
{
  CWidget *v9; // r0
  int v10; // r3
  int *v11; // r5
  char v12; // r1

  CSprite2d::CSprite2d((CSprite2d *)(a1 + 8));
  *(_QWORD *)(a1 + 12) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 20) = 0x49742400C9742400LL;
  v10 = CHoldEffect::m_pChainTail;
  *(_DWORD *)a1 = CHoldEffect::m_pChainTail;
  *(_DWORD *)(a1 + 4) = 0;
  v11 = (int *)(v10 + 4);
  if ( !v10 )
    v11 = &CHoldEffect::m_pChainHead;
  *v11 = a1;
  CHoldEffect::m_pChainTail = a1;
  *(_BYTE *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 28) = 0;
  *(_BYTE *)(a1 + 33) = *a4;
  *(_BYTE *)(a1 + 34) = a4[1];
  *(_BYTE *)(a1 + 35) = a4[2];
  v12 = a4[3];
  *(_BYTE *)(a1 + 37) = (_BYTE)a5;
  *(_BYTE *)(a1 + 36) = v12;
  if ( a2 )
    CWidget::SetTextureStatic(v9, a2, a5);
  return a1;
}


// ============================================================

// Address: 0x296368
// Original: _ZN11CHoldEffectD2Ev
// Demangled: CHoldEffect::~CHoldEffect()
void __fastcall CHoldEffect::~CHoldEffect(CHoldEffect *this)
{
  int *v2; // r3
  __int64 v3; // r0

  v2 = (int *)(*(_DWORD *)this + 4);
  if ( !*(_DWORD *)this )
    v2 = &CHoldEffect::m_pChainHead;
  *v2 = *((_DWORD *)this + 1);
  v3 = *(_QWORD *)this;
  if ( !*((_DWORD *)this + 1) )
    HIDWORD(v3) = &CHoldEffect::m_pChainTail;
  *(_DWORD *)HIDWORD(v3) = v3;
  CSprite2d::~CSprite2d((CHoldEffect *)((char *)this + 8));
}


// ============================================================

// Address: 0x2963a8
// Original: _ZN11CHoldEffect4DrawEv
// Demangled: CHoldEffect::Draw(void)
CSprite2d *__fastcall CHoldEffect::Draw(CSprite2d *this)
{
  float32x2_t v1; // d2
  float32x2_t v2; // d8
  CSprite2d *v3; // r4
  float v4; // s2
  int v5; // r1
  float v6; // s18
  int v7; // r8
  float v8; // s6
  int v9; // r11
  float v10; // s4
  float v11; // s20
  float v12; // s22
  float v13; // s24
  float v14; // s26
  float v15; // s28
  float v16; // s30
  float v17; // s23
  float v18; // s25
  float v19; // r5
  float v20; // r0
  _BYTE *v21; // r1
  float v22; // s0
  float *v23; // r0
  float v24; // s4
  float v25; // s0
  float v26; // s2
  int v27; // r8
  int *v28; // r1
  int *v29; // r0
  float v30; // s0
  int v31; // r12
  float *v32; // r3
  int v33; // r6
  int v34; // r2
  int v35; // r5
  int v36; // r2
  int v37; // r5
  int v38; // [sp+Ch] [bp-364h]
  _BYTE v39[4]; // [sp+10h] [bp-360h] BYREF
  _BYTE v40[384]; // [sp+14h] [bp-35Ch] BYREF
  int v41; // [sp+194h] [bp-1DCh] BYREF

  v3 = this;
  v1.n64_u32[0] = *((_DWORD *)this + 7);
  if ( v1.n64_f32[0] > 0.0 )
  {
    this = (CSprite2d *)((char *)this + 8);
    if ( *((_DWORD *)v3 + 2) )
    {
      v2.n64_u32[0] = 1.0;
      v4 = 0.5;
      if ( *((_BYTE *)v3 + 32) )
        v4 = 0.6;
      v1.n64_f32[0] = v1.n64_f32[0] * 16.0;
      v5 = (int)vmax_f32(v1, v2).n64_f32[0];
      if ( v5 <= 0 )
      {
        v27 = 3 * v5;
      }
      else
      {
        v6 = *((float *)v3 + 3);
        v7 = 0;
        v8 = *((float *)v3 + 5);
        v9 = 0;
        v10 = *((float *)v3 + 4);
        v11 = *((float *)v3 + 6);
        v38 = v5;
        v12 = fabsf(v8 - v6);
        v13 = v12 * v4;
        v14 = (float)(v6 + v8) * 0.5;
        v15 = (float)(v10 + v11) * 0.5;
        v16 = fabsf(v10 - v11);
        do
        {
          v17 = cosf((float)((float)(v9 + 1) * 0.3927) + -1.5708);
          v18 = v13 * sinf((float)((float)(v9 + 1) * 0.3927) + -1.5708);
          v19 = cosf((float)((float)v9 * 0.3927) + -1.5708);
          v20 = sinf((float)((float)v9 * 0.3927) + -1.5708);
          v21 = &v39[v7];
          *(_DWORD *)&v39[v7] = 1056964608;
          v22 = v13 * v20;
          *((_DWORD *)v21 + 1) = 1056964608;
          v23 = (float *)&v40[v7 + 380];
          v7 += 24;
          ++v9;
          *v23 = v14;
          v23[1] = v15;
          v24 = v14 + (float)(v13 * v17);
          v25 = v15 + v22;
          v26 = v14 + (float)(v13 * v19);
          v23[2] = v24;
          v23[3] = v15 + v18;
          v23[4] = v26;
          *((float *)v21 + 2) = (float)(v24 - v6) / v12;
          *((float *)v21 + 3) = (float)((float)(v15 + v18) - v11) / v16;
          *((float *)v21 + 4) = (float)(v26 - v6) / v12;
          *((float *)v21 + 5) = (float)(v25 - v11) / v16;
          v23[5] = v25;
        }
        while ( v38 != v9 );
        v27 = 3 * v38;
        v28 = &v41;
        v29 = (int *)v40;
        v30 = *(float *)&CSprite2d::NearScreenZ + 1.0;
        v31 = CSprite2d::RecipNearClip;
        v32 = (float *)((char *)v3 + 64);
        v33 = 3 * v38;
        do
        {
          v34 = *v28;
          --v33;
          v35 = *(v28 - 1);
          v28 += 2;
          *(v32 - 4) = v30;
          *((_DWORD *)v32 - 6) = v35;
          *((_DWORD *)v32 - 5) = v34;
          *((_DWORD *)v32 - 3) = v31;
          v36 = *(v29 - 1);
          v37 = *v29;
          v29 += 2;
          *((_DWORD *)v32 - 1) = v36;
          *(_DWORD *)v32 = v37;
          *((_BYTE *)v32 - 8) = *((_BYTE *)v3 + 33);
          *((_BYTE *)v32 - 7) = *((_BYTE *)v3 + 34);
          *((_BYTE *)v32 - 6) = *((_BYTE *)v3 + 35);
          *((_BYTE *)v32 - 5) = *((_BYTE *)v3 + 36);
          v32 += 7;
        }
        while ( v33 );
        this = (CSprite2d *)((char *)v3 + 8);
      }
      CSprite2d::SetRenderState(this);
      RwIm2DRenderPrimitive_BUGFIX(3, (char *)v3 + 40, v27);
      return (CSprite2d *)RwRenderStateSet(1, 0);
    }
  }
  return this;
}


// ============================================================

// Address: 0x296604
// Original: _ZN11CHoldEffect11SetVerticesEiPfS0_RK5CRGBA
// Demangled: CHoldEffect::SetVertices(int,float *,float *,CRGBA const&)
int __fastcall CHoldEffect::SetVertices(int result, int a2, int a3, int a4, _BYTE *a5)
{
  int *v5; // r3
  int *v6; // r2
  int v7; // lr
  float v8; // s0
  int v9; // r4
  int v10; // r4

  if ( a2 >= 1 )
  {
    v5 = (int *)(a4 + 4);
    v6 = (int *)(a3 + 4);
    result += 40;
    v7 = CSprite2d::RecipNearClip;
    v8 = *(float *)&CSprite2d::NearScreenZ + 1.0;
    do
    {
      --a2;
      *(_DWORD *)result = *(v6 - 1);
      v9 = *v6;
      v6 += 2;
      *(float *)(result + 8) = v8;
      *(_DWORD *)(result + 4) = v9;
      *(_DWORD *)(result + 12) = v7;
      *(_DWORD *)(result + 20) = *(v5 - 1);
      v10 = *v5;
      v5 += 2;
      *(_DWORD *)(result + 24) = v10;
      *(_BYTE *)(result + 16) = *a5;
      *(_BYTE *)(result + 17) = a5[1];
      *(_BYTE *)(result + 18) = a5[2];
      *(_BYTE *)(result + 19) = a5[3];
      result += 28;
    }
    while ( a2 );
  }
  return result;
}


// ============================================================

// Address: 0x296688
// Original: _ZN11CHoldEffect9UpdateAllEv
// Demangled: CHoldEffect::UpdateAll(void)
int *__fastcall CHoldEffect::UpdateAll(CHoldEffect *this)
{
  int *result; // r0
  int v2; // r1

  result = &CHoldEffect::m_pChainHead;
  do
  {
    v2 = *result;
    result = (int *)(*result + 4);
  }
  while ( v2 );
  return result;
}


// ============================================================

// Address: 0x29669c
// Original: _ZN11CHoldEffect7DrawAllEv
// Demangled: CHoldEffect::DrawAll(void)
int __fastcall CHoldEffect::DrawAll(CHoldEffect *this)
{
  int result; // r0
  int i; // r4

  result = (int)&CHoldEffect::m_pChainHead;
  for ( i = CHoldEffect::m_pChainHead; i; i = *(_DWORD *)(i + 4) )
  {
    result = *(unsigned __int8 *)(i + 37);
    if ( !*(_BYTE *)(i + 37) )
      result = CHoldEffect::Draw((CHoldEffect *)i);
  }
  return result;
}


// ============================================================

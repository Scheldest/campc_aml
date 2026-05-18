
// Address: 0x19f3c0
// Original: j__ZN11CWidgetPoolC2EPKcRK14WidgetPosition
// Demangled: CWidgetPool::CWidgetPool(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetPool::CWidgetPool()
{
  return _ZN11CWidgetPoolC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2be4b4
// Original: _ZN11CWidgetPoolC2EPKcRK14WidgetPosition
// Demangled: CWidgetPool::CWidgetPool(char const*,WidgetPosition const&)
int __fastcall CWidgetPool::CWidgetPool(int a1, int a2, int a3)
{
  int result; // r0

  result = CWidget::CWidget(a1, a2, a3, 4, 0);
  *(_BYTE *)(result + 144) = 0;
  *(_BYTE *)(result + 272) = 0;
  *(_DWORD *)(result + 668) = 0;
  *(_DWORD *)(result + 672) = 0;
  *(_DWORD *)(result + 676) = 0;
  *(_DWORD *)(result + 400) = 0;
  *(_DWORD *)(result + 409) = 0;
  *(_DWORD *)(result + 405) = 0;
  *(_DWORD *)(result + 404) = 0;
  *(_BYTE *)(result + 540) = 0;
  *(_DWORD *)result = &off_66419C;
  return result;
}


// ============================================================

// Address: 0x2be4fc
// Original: _ZN11CWidgetPool6UpdateEv
// Demangled: CWidgetPool::Update(void)
int __fastcall CWidgetPool::Update(CWidgetPool *this)
{
  CWidget::Update(this);
  return j_CWidget::ManageAlpha(this);
}


// ============================================================

// Address: 0x2be510
// Original: _ZN11CWidgetPool4DrawEv
// Demangled: CWidgetPool::Draw(void)
size_t __fastcall CWidgetPool::Draw(size_t this)
{
  unsigned int v1; // r6
  char *v2; // r11
  int v3; // r5
  unsigned __int8 v4; // r2
  float v5; // s16
  float v6; // s18
  unsigned __int8 v7; // r1
  unsigned __int8 v8; // r1
  unsigned __int8 v9; // r1
  float v10; // r1
  signed __int8 v11; // r1
  float v12; // s20
  float v13; // r1
  float v14; // r1
  float v15; // s18
  float v16; // s22
  float v17; // r1
  int v18; // r6
  char *v19; // r4
  float v20; // s0
  bool v21; // zf
  int *v22; // r0
  float v23; // s26
  CFont *v24; // r0
  unsigned __int8 v25; // r3
  float v26; // r0
  float v27; // r1
  CFont *v28; // r0
  unsigned __int8 v29; // r3
  float v30; // r0
  float v31; // r1
  float v32; // s22
  float v33; // r0
  float v34; // r1
  int v35; // r0
  unsigned __int8 v36; // r1
  float v37; // s26
  float v38; // s28
  float v39; // s30
  bool v40; // r1
  float v41; // s0
  CFont *v42; // r0
  unsigned __int16 *v43; // r3
  unsigned __int8 v44; // r1
  float v45; // s26
  float v46; // s28
  float v47; // s30
  bool v48; // r1
  float v49; // s0
  CFont *v50; // r0
  unsigned __int16 *v51; // r3
  CFont *v52; // r0
  float v53; // s26
  float v54; // s28
  float v55; // s30
  bool v56; // r1
  float v57; // s0
  CFont *v58; // r0
  unsigned __int16 *v59; // r3
  unsigned int v60; // [sp+4h] [bp-A4h]
  CText *v61; // [sp+10h] [bp-98h]
  size_t v62; // [sp+14h] [bp-94h]
  _BYTE v63[4]; // [sp+18h] [bp-90h] BYREF
  _BYTE v64[4]; // [sp+1Ch] [bp-8Ch] BYREF
  _BYTE v65[4]; // [sp+20h] [bp-88h] BYREF
  _BYTE v66[4]; // [sp+24h] [bp-84h] BYREF
  _BYTE v67[4]; // [sp+28h] [bp-80h] BYREF
  _BYTE v68[4]; // [sp+2Ch] [bp-7Ch] BYREF
  _BYTE v69[4]; // [sp+30h] [bp-78h] BYREF
  float v70; // [sp+34h] [bp-74h] BYREF
  float v71; // [sp+38h] [bp-70h]
  float v72; // [sp+3Ch] [bp-6Ch]
  float v73; // [sp+40h] [bp-68h]
  _BYTE v74[100]; // [sp+44h] [bp-64h] BYREF

  v62 = this;
  v1 = *(unsigned __int8 *)(this + 76);
  if ( *(_BYTE *)(this + 76) )
  {
    v2 = (char *)(this + 144);
    if ( strlen((const char *)(this + 144)) )
      v3 = strcasecmp(v2, "DUMMY") != 0;
    else
      v3 = 0;
    this = strlen((const char *)(v62 + 412));
    if ( this )
    {
      this = strcasecmp((const char *)(v62 + 412), "DUMMY");
      if ( this )
        ++v3;
    }
    if ( v3 )
    {
      v5 = *(float *)(v62 + 36);
      v6 = *(float *)(v62 + 44);
      CFont::SetBackground(0, 0, v4);
      CFont::SetProportional((CFont *)((char *)&stderr + 1), v7);
      CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v8);
      CFont::SetOrientation((CFont *)((char *)&stderr + 1), v9);
      CFont::SetRightJustifyWrap(0, v10);
      CFont::SetEdge(0, v11);
      v12 = (float)v1 / 255.0;
      CRGBA::CRGBA((CRGBA *)v74, 0, 0, 0, (unsigned int)(float)(v12 * 255.0));
      CFont::SetDropColor();
      CFont::SetWrapx(COERCE_CFONT_((float)dword_9FC900), v13);
      CFont::SetCentreSize(COERCE_CFONT_((float)dword_9FC900), v14);
      v15 = (float)(fabsf(v5 - v6) + -1.0) * 0.5;
      v16 = v15 * 0.0325;
      this = CFont::SetScale(COERCE_CFONT_(v15 * 0.0325), v17);
      if ( v3 >= 1 )
      {
        v60 = (unsigned int)(float)(v12 * 255.0);
        v18 = v3;
        v19 = (char *)(v62 + 272);
        do
        {
          v20 = 0.9;
          if ( strlen(v19) )
          {
            v21 = strcasecmp(v19, "DUMMY") == 0;
            v22 = dword_2BE944;
            if ( !v21 )
              v22 = &dword_2BE944[1];
            v20 = *(float *)v22;
          }
          v23 = v20 * fabsf(*(float *)(v62 + 40) - *(float *)(v62 + 32));
          if ( strlen(v19 - 128) )
          {
            if ( strcasecmp(v19 - 128, "DUMMY") )
            {
              v24 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)(v19 - 128));
              v26 = COERCE_FLOAT(CFont::GetStringWidth(v24, (unsigned __int16 *)((char *)&stderr + 1), 0, v25));
              if ( v26 > v23 )
              {
                v16 = v16 * (float)(v23 / v26);
                CFont::SetScale((CFont *)LODWORD(v16), v27);
              }
            }
          }
          if ( strlen(v19) )
          {
            if ( strcasecmp(v19, "DUMMY") )
            {
              v28 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)v19);
              v30 = COERCE_FLOAT(CFont::GetStringWidth(v28, (unsigned __int16 *)((char *)&stderr + 1), 0, v29));
              if ( v30 > v23 )
              {
                v16 = v16 * (float)(v23 / v30);
                CFont::SetScale((CFont *)LODWORD(v16), v31);
              }
            }
          }
          v19 += 268;
          --v18;
        }
        while ( v18 );
        v32 = *(float *)(v62 + 44);
        v61 = (CText *)(float)(v12 * 128.0);
        do
        {
          v33 = *(float *)(v62 + 32);
          v34 = *(float *)(v62 + 40);
          v73 = v32;
          v70 = v33;
          v72 = v34;
          v71 = v15 + v32;
          CRGBA::CRGBA((CRGBA *)v69, 0, 0, 0, (unsigned __int8)v61);
          CRGBA::CRGBA((CRGBA *)v68, 0, 0, 0, (unsigned __int8)v61);
          CRGBA::CRGBA((CRGBA *)v67, 0, 0, 0, v60);
          CRGBA::CRGBA((CRGBA *)v66, 0, 0, 0, v60);
          CSprite2d::DrawRect((int)&v70, (int)v69, (int)v68, (int)v67, v35);
          if ( !strlen(v2 + 128) || !strcasecmp(v2 + 128, "DUMMY") )
          {
            CFont::SetOrientation(0, v36);
            CRGBA::CRGBA((CRGBA *)v63, 0x5Du, 0x8Eu, 0xBEu, v60);
            CFont::SetColor();
            v53 = v70;
            v54 = v72;
            v55 = v71 + v73;
            v57 = COERCE_FLOAT(CFont::GetHeight(0, v56));
            v58 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)v2);
            this = CFont::PrintString(
                     COERCE_CFONT_((float)(v53 + v54) * 0.5),
                     (float)(v55 * 0.5) - (float)(v57 * 0.5),
                     v58,
                     v59);
          }
          else
          {
            CFont::SetOrientation((CFont *)((char *)&stderr + 1), v36);
            CRGBA::CRGBA((CRGBA *)v65, 0xFFu, 0xFFu, 0xFFu, v60);
            CFont::SetColor();
            v37 = v70;
            v38 = v71 + v73;
            v39 = fabsf(v72 - v70);
            v41 = COERCE_FLOAT(CFont::GetHeight(0, v40)) * 0.5;
            v42 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)v2);
            CFont::PrintString(COERCE_CFONT_(v37 + (float)(v39 * 0.03)), (float)(v38 * 0.5) - v41, v42, v43);
            CFont::SetOrientation((CFont *)((char *)&stderr + 2), v44);
            CRGBA::CRGBA((CRGBA *)v64, 0x5Du, 0x8Eu, 0xBEu, v60);
            CFont::SetColor();
            v45 = v72;
            v46 = v71 + v73;
            v47 = fabsf(v72 - v70);
            v49 = COERCE_FLOAT(CFont::GetHeight(0, v48));
            v50 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)(v2 + 128));
            v52 = (CFont *)CFont::PrintString(
                             COERCE_CFONT_(v45 - (float)(v47 * 0.03)),
                             (float)(v46 * 0.5) - (float)(v49 * 0.5),
                             v50,
                             v51);
            this = CFont::RenderFontBuffer(v52);
          }
          v32 = (float)(v15 + 1.0) + v32;
          v2 += 268;
          --v3;
        }
        while ( v3 );
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x2be964
// Original: _ZN11CWidgetPool14SetWidgetInfo2EiiiiPcS0_
// Demangled: CWidgetPool::SetWidgetInfo2(int,int,int,int,char *,char *)
int __fastcall CWidgetPool::SetWidgetInfo2(
        CWidgetPool *this,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        char *a6,
        char *a7)
{
  const char *v9; // r1
  const char *v10; // r6
  char v12[128]; // [sp+0h] [bp-128h] BYREF
  char v13[128]; // [sp+80h] [bp-A8h] BYREF
  int v14; // [sp+100h] [bp-28h]
  int v15; // [sp+104h] [bp-24h]
  int v16; // [sp+108h] [bp-20h]
  int v17; // [sp+10Ch] [bp-1Ch]

  if ( a2 <= 1 )
  {
    v9 = a6;
    v10 = &byte_61CD7E;
    if ( !a6 )
      v9 = &byte_61CD7E;
    strcpy(v12, v9);
    if ( a7 )
      v10 = a7;
    strcpy(v13, v10);
    v14 = 0;
    v15 = 0;
    v16 = 0;
    memcpy_0((char *)this + 268 * a2 + 144, v12, 0x10Cu);
  }
  return _stack_chk_guard - v17;
}


// ============================================================

// Address: 0x2be9ec
// Original: _ZN11CWidgetPoolD0Ev
// Demangled: CWidgetPool::~CWidgetPool()
void __fastcall CWidgetPool::~CWidgetPool(CWidgetPool *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2be9fc
// Original: _ZN11CWidgetPool7GetNameEv
// Demangled: CWidgetPool::GetName(void)
char *__fastcall CWidgetPool::GetName(CWidgetPool *this)
{
  return "Pool";
}


// ============================================================

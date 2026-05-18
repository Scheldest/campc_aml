
// Address: 0x189f7c
// Original: j__ZN18CWidgetRaceResultsC2EPKcRK14WidgetPosition
// Demangled: CWidgetRaceResults::CWidgetRaceResults(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRaceResults::CWidgetRaceResults()
{
  return _ZN18CWidgetRaceResultsC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x1990cc
// Original: j__ZN18CWidgetRaceResults15RenderTitleTextE5CRectf
// Demangled: CWidgetRaceResults::RenderTitleText(CRect,float)
// attributes: thunk
int __fastcall CWidgetRaceResults::RenderTitleText(int a1, int a2, int a3, int a4, float a5, float a6)
{
  return _ZN18CWidgetRaceResults15RenderTitleTextE5CRectf(a1, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x2bea10
// Original: _ZN18CWidgetRaceResultsC2EPKcRK14WidgetPosition
// Demangled: CWidgetRaceResults::CWidgetRaceResults(char const*,WidgetPosition const&)
int __fastcall CWidgetRaceResults::CWidgetRaceResults(int a1, int a2, int a3)
{
  int result; // r0

  result = CWidget::CWidget(a1, a2, a3, 4, 0);
  *(_BYTE *)(result + 144) = 0;
  *(_BYTE *)(result + 272) = 0;
  *(_DWORD *)(result + 400) = 0;
  *(_DWORD *)(result + 409) = 0;
  *(_DWORD *)(result + 405) = 0;
  *(_DWORD *)(result + 404) = 0;
  *(_BYTE *)(result + 540) = 0;
  *(_DWORD *)(result + 673) = 0;
  *(_DWORD *)(result + 668) = 0;
  *(_DWORD *)(result + 672) = 0;
  *(_DWORD *)result = &off_664230;
  *(_DWORD *)(result + 677) = 0;
  *(_BYTE *)(result + 808) = 0;
  *(_DWORD *)(result + 936) = 0;
  *(_DWORD *)(result + 940) = 0;
  *(_DWORD *)(result + 945) = 0;
  *(_DWORD *)(result + 941) = 0;
  *(_DWORD *)(result + 1204) = 0;
  *(_DWORD *)(result + 1208) = 0;
  *(_BYTE *)(result + 1076) = 0;
  *(_DWORD *)(result + 1213) = 0;
  *(_DWORD *)(result + 1209) = 0;
  *(_QWORD *)(result + 1472) = 0LL;
  *(_QWORD *)(result + 1480) = 0x46545700000000LL;
  *(_BYTE *)(result + 1344) = 0;
  return result;
}


// ============================================================

// Address: 0x2beaa4
// Original: _ZN18CWidgetRaceResults6UpdateEv
// Demangled: CWidgetRaceResults::Update(void)
int __fastcall CWidgetRaceResults::Update(CWidgetRaceResults *this)
{
  CWidget::Update(this);
  return j_CWidget::ManageAlpha(this);
}


// ============================================================

// Address: 0x2beab8
// Original: _ZN18CWidgetRaceResults4DrawEv
// Demangled: CWidgetRaceResults::Draw(void)
int __fastcall CWidgetRaceResults::Draw(CWidgetRaceResults *this)
{
  CWidgetRaceResults *v1; // r4
  unsigned int v2; // r8
  int v3; // r9
  unsigned __int8 v4; // r2
  float v5; // s16
  float v6; // s20
  unsigned __int8 v7; // r1
  unsigned __int8 v8; // r1
  float v9; // r1
  signed __int8 v10; // r1
  float v11; // s18
  unsigned int v12; // r5
  float v13; // r1
  int v14; // r0
  float v15; // s16
  float v16; // s4
  int v17; // r0
  unsigned __int8 v18; // r1
  float v19; // s18
  float v20; // r1
  _DWORD *v21; // r11
  const char *v22; // r8
  int v23; // r5
  float v24; // s24
  CKeyGen *v25; // r10
  float v26; // s26
  float v27; // s24
  CFont *v28; // r0
  unsigned __int8 v29; // r3
  float v30; // r0
  float v31; // r1
  const char *v32; // r1
  float v33; // s24
  unsigned __int8 v34; // r3
  float v35; // r0
  float v36; // r1
  float v37; // s20
  float v38; // r0
  float v39; // r1
  int v40; // r0
  unsigned __int8 v41; // r1
  float v42; // s28
  float v43; // s30
  float v44; // s17
  bool v45; // r1
  float v46; // s0
  CFont *v47; // r0
  unsigned __int16 *v48; // r3
  unsigned __int8 v49; // r1
  float v50; // s28
  float v51; // s30
  float v52; // s17
  bool v53; // r1
  float v54; // r0
  unsigned __int16 *v55; // r3
  CFont *v56; // r0
  unsigned __int8 v58; // [sp+Ch] [bp-3BCh]
  unsigned __int8 v59[4]; // [sp+14h] [bp-3B4h]
  CText *v60; // [sp+18h] [bp-3B0h]
  CWidgetRaceResults *v61; // [sp+1Ch] [bp-3ACh]
  _BYTE v62[4]; // [sp+20h] [bp-3A8h] BYREF
  _BYTE v63[4]; // [sp+24h] [bp-3A4h] BYREF
  _BYTE v64[4]; // [sp+28h] [bp-3A0h] BYREF
  _BYTE v65[4]; // [sp+2Ch] [bp-39Ch] BYREF
  _BYTE v66[4]; // [sp+30h] [bp-398h] BYREF
  _BYTE v67[4]; // [sp+34h] [bp-394h] BYREF
  _BYTE v68[4]; // [sp+38h] [bp-390h] BYREF
  float v69; // [sp+3Ch] [bp-38Ch] BYREF
  float v70; // [sp+40h] [bp-388h]
  float v71; // [sp+44h] [bp-384h]
  float v72; // [sp+48h] [bp-380h]
  unsigned __int16 v73[256]; // [sp+4Ch] [bp-37Ch] BYREF
  _BYTE v74[4]; // [sp+24Ch] [bp-17Ch] BYREF
  int v75; // [sp+250h] [bp-178h] BYREF
  int v76; // [sp+254h] [bp-174h]
  int v77; // [sp+258h] [bp-170h]
  float v78; // [sp+25Ch] [bp-16Ch]
  _BYTE v79[4]; // [sp+260h] [bp-168h] BYREF
  char v80[256]; // [sp+264h] [bp-164h] BYREF
  int v81; // [sp+364h] [bp-64h]

  v1 = this;
  v2 = *((unsigned __int8 *)this + 76);
  if ( *((_BYTE *)this + 76) )
  {
    if ( strlen((const char *)this + 144) )
      v3 = strcasecmp((const char *)v1 + 144, "DUMMY") != 0;
    else
      v3 = 0;
    if ( strlen((const char *)v1 + 412) && strcasecmp((const char *)v1 + 412, "DUMMY") )
      ++v3;
    if ( strlen((const char *)v1 + 680) && strcasecmp((const char *)v1 + 680, "DUMMY") )
      ++v3;
    if ( strlen((const char *)v1 + 948) && strcasecmp((const char *)v1 + 948, "DUMMY") )
      ++v3;
    if ( strlen((const char *)v1 + 1216) && strcasecmp((const char *)v1 + 1216, "DUMMY") )
      ++v3;
    if ( v3 )
    {
      v5 = *((float *)v1 + 9);
      v6 = *((float *)v1 + 11);
      CFont::SetBackground(0, 0, v4);
      CFont::SetProportional((CFont *)((char *)&stderr + 1), v7);
      CFont::SetOrientation((CFont *)((char *)&stderr + 1), v8);
      CFont::SetRightJustifyWrap(0, v9);
      CFont::SetEdge(0, v10);
      v11 = (float)v2 / 255.0;
      v12 = (unsigned int)(float)(v11 * 255.0);
      CRGBA::CRGBA((CRGBA *)v79, 0, 0, 0, v12);
      CFont::SetDropColor();
      CFont::SetWrapx(COERCE_CFONT_((float)dword_9FC900), v13);
      v14 = *((_DWORD *)v1 + 10);
      v15 = (float)(fabsf(v5 - v6) - (float)v3) / 6.5;
      v16 = *((float *)v1 + 11);
      v75 = *((_DWORD *)v1 + 8);
      v77 = v14;
      v78 = v16;
      *(float *)&v76 = (float)(v15 * 1.5) + v16;
      CRGBA::CRGBA((CRGBA *)v73, 0, 0, 0, (unsigned int)(float)(v11 * 128.0));
      *(_DWORD *)v59 = (unsigned int)(float)(v11 * 128.0);
      CRGBA::CRGBA((CRGBA *)v80, 0, 0, 0, v59[0]);
      CRGBA::CRGBA((CRGBA *)&v69, 0, 0, 0, v12);
      CRGBA::CRGBA((CRGBA *)v74, 0, 0, 0, v12);
      CSprite2d::DrawRect((int)&v75, (int)v73, (int)v80, (int)&v69, v17);
      CWidgetRaceResults::RenderTitleText((int)v1, v75, v76, v77, v78, v11);
      CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v18);
      v19 = v15 * 0.021;
      CFont::SetScale(COERCE_CFONT_(v15 * 0.021), v20);
      if ( v3 >= 1 )
      {
        v21 = (_DWORD *)((char *)v1 + 408);
        v58 = v12;
        v22 = (char *)v1 + 408;
        v23 = v3;
        v61 = v1;
        do
        {
          v24 = *((float *)v1 + 8);
          v25 = (CKeyGen *)(v22 - 264);
          v26 = *((float *)v1 + 10);
          if ( strlen(v22 - 264) )
          {
            if ( strcasecmp((const char *)v25, "DUMMY") )
            {
              v27 = fabsf(v26 - v24) * 0.625;
              v28 = (CFont *)CText::Get((CText *)TheText, v25);
              v30 = COERCE_FLOAT(CFont::GetStringWidth(v28, (unsigned __int16 *)((char *)&stderr + 1), 0, v29));
              if ( v30 > v27 )
              {
                v19 = v19 * (float)(v27 / v30);
                CFont::SetScale((CFont *)LODWORD(v19), v31);
              }
            }
          }
          if ( *(_DWORD *)v22 == 1 )
            v32 = "$~1~%d";
          else
            v32 = (const char *)&dword_2BF004;
          v33 = fabsf(*((float *)v1 + 10) - *((float *)v1 + 8)) * 0.25;
          sub_5E6BC0(v80, v32, *((_DWORD *)v22 - 2));
          AsciiToGxtChar(v80, v73);
          v35 = COERCE_FLOAT(CFont::GetStringWidth((CFont *)v73, (unsigned __int16 *)((char *)&stderr + 1), 0, v34));
          if ( v35 > v33 )
          {
            v19 = v19 * (float)(v33 / v35);
            CFont::SetScale((CFont *)LODWORD(v19), v36);
          }
          v1 = v61;
          v22 += 268;
          --v23;
        }
        while ( v23 );
        v37 = *(float *)&v76 + 1.0;
        do
        {
          v60 = (CText *)v3;
          v38 = *((float *)v1 + 8);
          v39 = *((float *)v1 + 10);
          v72 = v37;
          v69 = v38;
          v71 = v39;
          v70 = v15 + v37;
          CRGBA::CRGBA((CRGBA *)v74, 0, 0, 0, v59[0]);
          CRGBA::CRGBA((CRGBA *)v68, 0, 0, 0, v59[0]);
          CRGBA::CRGBA((CRGBA *)v67, 0, 0, 0, v58);
          CRGBA::CRGBA((CRGBA *)v66, 0, 0, 0, v58);
          CSprite2d::DrawRect((int)&v69, (int)v74, (int)v68, (int)v67, v40);
          CFont::SetOrientation((CFont *)((char *)&stderr + 1), v41);
          CRGBA::CRGBA((CRGBA *)v65, 0xFFu, 0xFFu, 0xFFu, v58);
          CFont::SetColor();
          v42 = v69;
          v43 = v70 + v72;
          v44 = fabsf(v71 - v69);
          v46 = COERCE_FLOAT(CFont::GetHeight(0, v45));
          v47 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)(v21 - 66));
          CFont::PrintString(
            COERCE_CFONT_(v42 + (float)(v44 * 0.03)),
            (float)(v43 * 0.5) - (float)(v46 * 0.5),
            v47,
            v48);
          if ( *v21 == 1 )
          {
            CRGBA::CRGBA((CRGBA *)v64, 0, 0x67u, 0, v58);
            CFont::SetColor();
            sub_5E6BC0(v80, "$~1~%d", *(v21 - 2));
          }
          else if ( *(v21 - 1) == 1 )
          {
            CRGBA::CRGBA((CRGBA *)v63, 0x5Du, 0x8Eu, 0xBEu, v58);
            CFont::SetColor();
            sub_5E6BC0(v80, "%d:%.2d", *(v21 - 2) / 60, *(v21 - 2) % 60);
          }
          else
          {
            CRGBA::CRGBA((CRGBA *)v62, 0x5Du, 0x8Eu, 0xBEu, v58);
            CFont::SetColor();
            sub_5E6BC0(v80, (const char *)&dword_2BF004, *(v21 - 2));
          }
          v1 = v61;
          AsciiToGxtChar(v80, v73);
          CFont::SetOrientation((CFont *)((char *)&stderr + 2), v49);
          v50 = v71;
          v51 = v70 + v72;
          v52 = fabsf(v71 - v69);
          v54 = COERCE_FLOAT(CFont::GetHeight(0, v53));
          v56 = (CFont *)CFont::PrintString(
                           COERCE_CFONT_(v50 + (float)(v52 * -0.03)),
                           (float)(v51 * 0.5) - (float)(v54 * 0.5),
                           (CFont *)v73,
                           v55);
          v37 = (float)(v15 + 1.0) + v37;
          CFont::RenderFontBuffer(v56);
          v21 += 67;
          --v3;
        }
        while ( v60 != (CText *)((char *)&stderr + 1) );
      }
    }
  }
  return _stack_chk_guard - v81;
}


// ============================================================

// Address: 0x2bf028
// Original: _ZN18CWidgetRaceResults15RenderTitleTextE5CRectf
// Demangled: CWidgetRaceResults::RenderTitleText(CRect,float)
int __fastcall CWidgetRaceResults::RenderTitleText(int a1, float a2, float a3, float a4, float a5, float a6)
{
  unsigned __int8 v10; // r1
  float v11; // s20
  float v12; // r1
  CKeyGen *v13; // r6
  CFont *v14; // r0
  unsigned __int8 v15; // r3
  float v16; // r0
  _BOOL4 v17; // r1
  float v18; // s0
  float v19; // s0
  CFont *v20; // r0
  unsigned __int16 *v21; // r3
  CFont *v22; // r0
  _BYTE v24[60]; // [sp+4h] [bp-3Ch] BYREF

  CFont::SetOrientation(0, LOBYTE(a2));
  CFont::SetFontStyle(0, v10);
  CRGBA::CRGBA((CRGBA *)v24, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(a6 * 255.0));
  CFont::SetColor();
  v11 = fabsf(a3 - a5) * 0.0325;
  CFont::SetScale((CFont *)LODWORD(v11), v12);
  v13 = (CKeyGen *)(a1 + 1484);
  v14 = (CFont *)CText::Get((CText *)TheText, v13);
  v16 = COERCE_FLOAT(CFont::GetStringWidth(v14, (unsigned __int16 *)((char *)&stderr + 1), 0, v15));
  v18 = fabsf(a4 - a2) * 0.875;
  if ( v16 > v18 )
    CFont::SetScale(COERCE_CFONT_(v11 * (float)(v18 / v16)), *(float *)&v17);
  v19 = COERCE_FLOAT(CFont::GetHeight(0, v17)) * 0.5;
  v20 = (CFont *)CText::Get((CText *)TheText, v13);
  v22 = (CFont *)CFont::PrintString(
                   COERCE_CFONT_((float)(a2 + a4) * 0.5),
                   (float)((float)(a3 + a5) * 0.5) - v19,
                   v20,
                   v21);
  return CFont::RenderFontBuffer(v22);
}


// ============================================================

// Address: 0x2bf140
// Original: _ZN18CWidgetRaceResults14SetWidgetInfo2EiiiiPcS0_
// Demangled: CWidgetRaceResults::SetWidgetInfo2(int,int,int,int,char *,char *)
int __fastcall CWidgetRaceResults::SetWidgetInfo2(
        CWidgetRaceResults *this,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        char *a6,
        char *a7)
{
  const char *v11; // r1
  const char *v12; // r5
  char v14[128]; // [sp+0h] [bp-130h] BYREF
  char v15[128]; // [sp+80h] [bp-B0h] BYREF
  int v16; // [sp+100h] [bp-30h]
  int v17; // [sp+104h] [bp-2Ch]
  int v18; // [sp+108h] [bp-28h]
  int v19; // [sp+110h] [bp-20h]

  if ( a2 <= 4 )
  {
    v11 = a6;
    v12 = &byte_61CD7E;
    if ( !a6 )
      v11 = &byte_61CD7E;
    strcpy(v14, v11);
    if ( a7 )
      v12 = a7;
    strcpy(v15, v12);
    v16 = a3;
    v17 = a4;
    v18 = a5;
    memcpy_0((char *)this + 268 * a2 + 144, v14, 0x10Cu);
  }
  return _stack_chk_guard - v19;
}


// ============================================================

// Address: 0x2bf1cc
// Original: _ZN18CWidgetRaceResultsD0Ev
// Demangled: CWidgetRaceResults::~CWidgetRaceResults()
void __fastcall CWidgetRaceResults::~CWidgetRaceResults(CWidgetRaceResults *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2bf1dc
// Original: _ZN18CWidgetRaceResults7GetNameEv
// Demangled: CWidgetRaceResults::GetName(void)
char *__fastcall CWidgetRaceResults::GetName(CWidgetRaceResults *this)
{
  return "Race Results";
}


// ============================================================

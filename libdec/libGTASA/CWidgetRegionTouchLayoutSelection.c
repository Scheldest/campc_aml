
// Address: 0x193b10
// Original: j__ZN33CWidgetRegionTouchLayoutSelection18DrawClassicButtonsEv
// Demangled: CWidgetRegionTouchLayoutSelection::DrawClassicButtons(void)
// attributes: thunk
int __fastcall CWidgetRegionTouchLayoutSelection::DrawClassicButtons(CWidgetRegionTouchLayoutSelection *this)
{
  return _ZN33CWidgetRegionTouchLayoutSelection18DrawClassicButtonsEv(this);
}


// ============================================================

// Address: 0x197150
// Original: j__ZN33CWidgetRegionTouchLayoutSelectionC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionTouchLayoutSelection::CWidgetRegionTouchLayoutSelection(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionTouchLayoutSelection::CWidgetRegionTouchLayoutSelection()
{
  return _ZN33CWidgetRegionTouchLayoutSelectionC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x1975ec
// Original: j__ZN33CWidgetRegionTouchLayoutSelection18DrawAdaptedButtonsEv
// Demangled: CWidgetRegionTouchLayoutSelection::DrawAdaptedButtons(void)
// attributes: thunk
int __fastcall CWidgetRegionTouchLayoutSelection::DrawAdaptedButtons(CWidgetRegionTouchLayoutSelection *this)
{
  return _ZN33CWidgetRegionTouchLayoutSelection18DrawAdaptedButtonsEv(this);
}


// ============================================================

// Address: 0x2c5310
// Original: _ZN33CWidgetRegionTouchLayoutSelectionC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionTouchLayoutSelection::CWidgetRegionTouchLayoutSelection(char const*,WidgetPosition const&)
int __fastcall CWidgetRegionTouchLayoutSelection::CWidgetRegionTouchLayoutSelection(int a1)
{
  float v2; // s2
  float v3; // s0
  int v4; // r0
  int v5; // r1
  float v6; // s0
  float v7; // s6
  float v8; // s4

  CWidgetRegion::CWidgetRegion();
  *(_QWORD *)(a1 + 152) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 160) = 0x49742400C9742400LL;
  *(_DWORD *)a1 = &off_664E54;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 168));
  *(_QWORD *)(a1 + 172) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 180) = 0x49742400C9742400LL;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 188));
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 192));
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 196));
  *(_QWORD *)(a1 + 200) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 208) = 0x49742400C9742400LL;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 216));
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 220));
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 224));
  *(_DWORD *)(a1 + 28) = 1149239296;
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 168), "white", 1);
  *(_DWORD *)(a1 + 144) = -1;
  *(_DWORD *)(a1 + 148) = -1;
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 224), "punch", 1);
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 188), "hud_crouch", 1);
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 192), "sprint", 1);
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 196), "hud_circle", 1);
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 216), "sprint", 1);
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 220), "CornerGradient", 1);
  v2 = *(float *)(a1 + 44);
  v3 = *(float *)(a1 + 36) - v2;
  v4 = *(_DWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 152) = v4;
  *(_DWORD *)(a1 + 160) = v5;
  *(_DWORD *)(a1 + 180) = v5;
  *(_DWORD *)(a1 + 172) = v4;
  v6 = fabsf(v3);
  v7 = v2 + (float)(v6 * 0.15);
  v8 = v2 + (float)(v6 * 0.5625);
  *(float *)(a1 + 156) = v7;
  *(float *)(a1 + 164) = v2 + (float)(v6 * 0.0);
  *(float *)(a1 + 176) = v8;
  *(float *)(a1 + 184) = v7;
  *(_DWORD *)(a1 + 208) = v5;
  *(float *)(a1 + 204) = v2 + v6;
  *(float *)(a1 + 212) = v8;
  *(_DWORD *)(a1 + 200) = v4;
  return a1;
}


// ============================================================

// Address: 0x2c54dc
// Original: _ZN33CWidgetRegionTouchLayoutSelection10BuildRectsEv
// Demangled: CWidgetRegionTouchLayoutSelection::BuildRects(void)
int __fastcall CWidgetRegionTouchLayoutSelection::BuildRects(int this)
{
  float v1; // s2
  float v2; // s0
  int v3; // r1
  int v4; // r2
  float v5; // s0
  float v6; // s6
  float v7; // s4

  v1 = *(float *)(this + 44);
  v2 = *(float *)(this + 36) - v1;
  v3 = *(_DWORD *)(this + 32);
  v4 = *(_DWORD *)(this + 40);
  *(_DWORD *)(this + 152) = v3;
  *(_DWORD *)(this + 160) = v4;
  *(_DWORD *)(this + 180) = v4;
  *(_DWORD *)(this + 172) = v3;
  v5 = fabsf(v2);
  v6 = v1 + (float)(v5 * 0.15);
  v7 = v1 + (float)(v5 * 0.5625);
  *(float *)(this + 156) = v6;
  *(float *)(this + 164) = v1 + (float)(v5 * 0.0);
  *(float *)(this + 176) = v7;
  *(float *)(this + 184) = v6;
  *(_DWORD *)(this + 208) = v4;
  *(float *)(this + 204) = v1 + v5;
  *(float *)(this + 212) = v7;
  *(_DWORD *)(this + 200) = v3;
  return this;
}


// ============================================================

// Address: 0x2c5554
// Original: _ZN33CWidgetRegionTouchLayoutSelection4DrawEv
// Demangled: CWidgetRegionTouchLayoutSelection::Draw(void)
unsigned int __fastcall CWidgetRegionTouchLayoutSelection::Draw(CWidgetRegionTouchLayoutSelection *this)
{
  unsigned int result; // r0
  float v3; // s0
  float v4; // s16
  unsigned int v5; // r5
  unsigned __int8 v6; // r2
  float v7; // r1
  float v8; // r1
  unsigned __int8 v9; // r1
  signed __int8 v10; // r1
  unsigned __int8 v11; // r1
  float v12; // s18
  float v13; // r1
  float v14; // s20
  CFont *v15; // r0
  unsigned __int8 v16; // r3
  float v17; // r0
  float v18; // r1
  CFont *v19; // r0
  unsigned __int8 v20; // r3
  float v21; // r0
  float v22; // r1
  CFont *v23; // r0
  unsigned __int8 v24; // r3
  float v25; // r0
  float v26; // r1
  float v27; // s18
  float v28; // s20
  float v29; // s24
  bool v30; // r1
  float v31; // s0
  CFont *v32; // r0
  unsigned __int16 *v33; // r3
  CFont *v34; // r0
  unsigned __int8 v35; // r1
  float v36; // s0
  float v37; // s6
  float v38; // s4
  float v39; // s2
  CFont *v40; // r0
  unsigned __int16 *v41; // r3
  CFont *v42; // r0
  float v43; // s0
  float v44; // s6
  float v45; // s4
  float v46; // s2
  CFont *v47; // r0
  unsigned __int16 *v48; // r3
  CFont *v49; // r0
  unsigned __int8 v50; // r1
  float v51; // s20
  float v52; // r1
  float v53; // s22
  CFont *v54; // r0
  unsigned __int8 v55; // r3
  float v56; // r0
  float v57; // r1
  CFont *v58; // r0
  unsigned __int8 v59; // r3
  float v60; // r0
  float v61; // r1
  float v62; // s0
  float v63; // s6
  float v64; // s4
  float v65; // s2
  CFont *v66; // r0
  unsigned __int16 *v67; // r3
  CFont *v68; // r0
  float v69; // s0
  float v70; // s6
  float v71; // s4
  float v72; // s2
  CFont *v73; // r0
  unsigned __int16 *v74; // r3
  CFont *v75; // r0
  char *v76; // r0
  char *v77; // r1
  _BYTE v78[4]; // [sp+8h] [bp-60h] BYREF
  _BYTE v79[4]; // [sp+Ch] [bp-5Ch] BYREF
  _BYTE v80[4]; // [sp+10h] [bp-58h] BYREF
  _BYTE v81[4]; // [sp+14h] [bp-54h] BYREF
  _BYTE v82[4]; // [sp+18h] [bp-50h] BYREF
  _BYTE v83[76]; // [sp+1Ch] [bp-4Ch] BYREF

  result = *((unsigned __int8 *)this + 76);
  if ( result )
  {
    v3 = (float)result;
    v4 = (float)result / 255.0;
    v5 = (unsigned int)(float)(v4 * 150.0);
    CRGBA::CRGBA((CRGBA *)v83, 0, 0, 0, v5);
    CRGBA::CRGBA((CRGBA *)v82, 0, 0, 0, (unsigned int)(float)((float)(v3 / 255.0) * 150.0));
    CRGBA::CRGBA((CRGBA *)v81, 0, 0, 0, (unsigned int)(float)(v4 * 255.0));
    CRGBA::CRGBA((CRGBA *)v80, 0, 0, 0, (unsigned int)(float)(v4 * 255.0));
    CSprite2d::DrawRectXLU((int)this + 152, (int)v83, (int)v82, (int)v81, (int)v80);
    CRGBA::CRGBA((CRGBA *)v83, 0, 0, 0, v5);
    CRGBA::CRGBA((CRGBA *)v82, 0, 0, 0, v5);
    CRGBA::CRGBA((CRGBA *)v81, 0, 0, 0, (unsigned int)(float)(v4 * 255.0));
    CRGBA::CRGBA((CRGBA *)v80, 0, 0, 0, (unsigned int)(float)(v4 * 255.0));
    CSprite2d::DrawRectXLU((int)this + 172, (int)v83, (int)v82, (int)v81, (int)v80);
    CRGBA::CRGBA((CRGBA *)v83, 0, 0, 0, v5);
    CRGBA::CRGBA((CRGBA *)v82, 0, 0, 0, v5);
    CRGBA::CRGBA((CRGBA *)v81, 0, 0, 0, (unsigned int)(float)(v4 * 255.0));
    CRGBA::CRGBA((CRGBA *)v80, 0, 0, 0, (unsigned int)(float)(v4 * 255.0));
    CSprite2d::DrawRectXLU((int)this + 200, (int)v83, (int)v82, (int)v81, (int)v80);
    CFont::SetBackground(0, 0, v6);
    CFont::SetWrapx(COERCE_CFONT_((float)dword_9FC900), v7);
    CFont::SetCentreSize(COERCE_CFONT_((float)((float)dword_9FC900 / 640.0) * 640.0), v8);
    CFont::SetProportional((CFont *)((char *)&stderr + 1), v9);
    CRGBA::CRGBA((CRGBA *)v79, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(v4 * 255.0));
    CFont::SetColor();
    CRGBA::CRGBA((CRGBA *)v78, 0, 0, 0, (unsigned int)(float)(v4 * 255.0));
    CFont::SetDropColor();
    CFont::SetEdge((CFont *)((char *)&stderr + 1), v10);
    CFont::SetFontStyle((CFont *)((char *)&stderr + 3), v11);
    v12 = fabsf(*((float *)this + 39) - *((float *)this + 41)) * 0.02125;
    CFont::SetScale((CFont *)LODWORD(v12), v13);
    v14 = fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.66;
    v15 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"TOU_HEA");
    v17 = COERCE_FLOAT(CFont::GetStringWidth(v15, (unsigned __int16 *)((char *)&stderr + 1), 0, v16));
    if ( v17 > v14 )
    {
      v12 = v12 * (float)(v14 / v17);
      CFont::SetScale((CFont *)LODWORD(v12), v18);
    }
    v19 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"TOU_C");
    v21 = COERCE_FLOAT(CFont::GetStringWidth(v19, (unsigned __int16 *)((char *)&stderr + 1), 0, v20));
    if ( v21 > v14 )
    {
      v12 = v12 * (float)(v14 / v21);
      CFont::SetScale((CFont *)LODWORD(v12), v22);
    }
    v23 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"TOU_A");
    v25 = COERCE_FLOAT(CFont::GetStringWidth(v23, (unsigned __int16 *)((char *)&stderr + 1), 0, v24));
    if ( v25 > v14 )
      CFont::SetScale(COERCE_CFONT_(v12 * (float)(v14 / v25)), v26);
    CFont::SetOrientation(0, LOBYTE(v26));
    v27 = *((float *)this + 38);
    v28 = *((float *)this + 40);
    v29 = *((float *)this + 39) + *((float *)this + 41);
    v31 = COERCE_FLOAT(CFont::GetHeight(0, v30)) * 0.5;
    v32 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"TOU_HEA");
    v34 = (CFont *)CFont::PrintString(COERCE_CFONT_((float)(v27 + v28) * 0.5), (float)(v29 * 0.5) - v31, v32, v33);
    CFont::RenderFontBuffer(v34);
    CFont::SetOrientation((CFont *)((char *)&stderr + 1), v35);
    v36 = *((float *)this + 43);
    v37 = *((float *)this + 46);
    v38 = fabsf(*((float *)this + 45) - v36);
    v39 = fabsf(*((float *)this + 44) - v37);
    v40 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"TOU_C");
    v42 = (CFont *)CFont::PrintString(COERCE_CFONT_(v36 + (float)(v38 * 0.05)), v37 + (float)(v39 * 0.1), v40, v41);
    CFont::RenderFontBuffer(v42);
    v43 = *((float *)this + 50);
    v44 = *((float *)this + 53);
    v45 = fabsf(*((float *)this + 52) - v43);
    v46 = fabsf(*((float *)this + 51) - v44);
    v47 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"TOU_A");
    v49 = (CFont *)CFont::PrintString(COERCE_CFONT_(v43 + (float)(v45 * 0.05)), v44 + (float)(v46 * 0.1), v47, v48);
    CFont::RenderFontBuffer(v49);
    CFont::SetFontStyle((CFont *)((char *)&stderr + 1), v50);
    v51 = fabsf(*((float *)this + 39) - *((float *)this + 41)) * 0.019;
    CFont::SetScale((CFont *)LODWORD(v51), v52);
    v53 = (float)(fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.625) * 3.0;
    v54 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"TOU_CLA");
    v56 = COERCE_FLOAT(CFont::GetStringWidth(v54, (unsigned __int16 *)((char *)&stderr + 1), 0, v55));
    if ( v56 > v53 )
    {
      v51 = v51 * (float)(v53 / v56);
      CFont::SetScale((CFont *)LODWORD(v51), v57);
    }
    v58 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"TOU_ADV");
    v60 = COERCE_FLOAT(CFont::GetStringWidth(v58, (unsigned __int16 *)((char *)&stderr + 1), 0, v59));
    if ( v60 > v53 )
      CFont::SetScale(COERCE_CFONT_(v51 * (float)(v53 / v60)), v61);
    CFont::SetWrapx(
      COERCE_CFONT_(*((float *)this + 8) + (float)(fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.675)),
      v61);
    v62 = *((float *)this + 43);
    v63 = *((float *)this + 46);
    v64 = fabsf(*((float *)this + 45) - v62);
    v65 = fabsf(*((float *)this + 44) - v63);
    v66 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"TOU_CLA");
    v68 = (CFont *)CFont::PrintString(COERCE_CFONT_(v62 + (float)(v64 * 0.05)), v63 + (float)(v65 * 0.35), v66, v67);
    CFont::RenderFontBuffer(v68);
    v69 = *((float *)this + 50);
    v70 = *((float *)this + 53);
    v71 = fabsf(*((float *)this + 52) - v69);
    v72 = fabsf(*((float *)this + 51) - v70);
    v73 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"TOU_ADV");
    v75 = (CFont *)CFont::PrintString(COERCE_CFONT_(v69 + (float)(v71 * 0.05)), v70 + (float)(v72 * 0.35), v73, v74);
    CFont::RenderFontBuffer(v75);
    CWidgetRegionTouchLayoutSelection::DrawClassicButtons(this);
    CWidgetRegionTouchLayoutSelection::DrawAdaptedButtons(this);
    result = *((_DWORD *)this + 36);
    if ( result == 1 )
    {
      CRGBA::CRGBA((CRGBA *)v83, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(v4 * 75.0));
      v76 = (char *)this + 168;
      v77 = (char *)this + 200;
    }
    else
    {
      if ( result )
        return result;
      CRGBA::CRGBA((CRGBA *)v83, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(v4 * 75.0));
      v76 = (char *)this + 168;
      v77 = (char *)this + 172;
    }
    return CSprite2d::Draw(v76, v77, v83);
  }
  return result;
}


// ============================================================

// Address: 0x2c5b48
// Original: _ZN33CWidgetRegionTouchLayoutSelection18DrawClassicButtonsEv
// Demangled: CWidgetRegionTouchLayoutSelection::DrawClassicButtons(void)
int __fastcall CWidgetRegionTouchLayoutSelection::DrawClassicButtons(CWidgetRegionTouchLayoutSelection *this)
{
  float *v1; // r4
  float v2; // s2
  float v3; // s4
  float v4; // s0
  float v5; // s16
  float v6; // s18
  float v7; // s2
  unsigned int v8; // r9
  float v9; // s2
  float v10; // s0
  float v11; // s4
  float v12; // s0
  float v13; // s0
  _BYTE v15[4]; // [sp+4h] [bp-6Ch] BYREF
  float v16[2]; // [sp+8h] [bp-68h] BYREF
  float v17; // [sp+10h] [bp-60h]
  float v18; // [sp+14h] [bp-5Ch]
  float v19[4]; // [sp+18h] [bp-58h] BYREF
  float v20[2]; // [sp+28h] [bp-48h] BYREF
  float v21; // [sp+30h] [bp-40h]
  float v22; // [sp+34h] [bp-3Ch]

  v1 = (float *)this;
  v2 = *((float *)this + 46);
  v3 = (float)*((unsigned __int8 *)this + 76);
  v4 = fabsf(*((float *)this + 44) - v2);
  v5 = v4 * 0.2125;
  v6 = v4 * 0.04;
  v7 = v2 + (float)(v4 * 0.275);
  v21 = *((float *)this + 45) - (float)(v4 * 0.04);
  v8 = (unsigned int)(float)((float)(v3 / 255.0) * 255.0);
  v22 = v7 - (float)(v4 * 0.2125);
  v20[0] = v21 - (float)(v5 + v5);
  v20[1] = (float)(v4 * 0.2125) + v7;
  CRGBA::CRGBA((CRGBA *)v19, 0xFFu, 0xFFu, 0xFFu, v8);
  CSprite2d::Draw(v1 + 47, v20, v19);
  CRGBA::CRGBA((CRGBA *)v19, 0xFFu, 0xFFu, 0xFFu, v8);
  CSprite2d::Draw(v1 + 47, v20, v19);
  v9 = v1[45] - (float)(v6 + v6);
  v10 = v1[46] + (float)(fabsf(v1[44] - v1[46]) * 0.275);
  v19[0] = v9 + (float)(v5 * -4.0);
  v19[2] = v9 - (float)(v5 + v5);
  v19[3] = v10 - v5;
  v19[1] = v5 + v10;
  CRGBA::CRGBA((CRGBA *)v16, 0xFFu, 0xFFu, 0xFFu, v8);
  CSprite2d::Draw(v1 + 56, v19, v16);
  CRGBA::CRGBA((CRGBA *)v16, 0xFFu, 0xFFu, 0xFFu, v8);
  CSprite2d::Draw(v1 + 56, v19, v16);
  v11 = v1[46];
  v12 = fabsf(v1[44] - v11);
  v17 = v1[45] - v6;
  v13 = v11 + (float)(v12 * 0.75);
  v16[0] = v17 - (float)(v5 + v5);
  v18 = v13 - v5;
  v16[1] = v5 + v13;
  CRGBA::CRGBA((CRGBA *)v15, 0xFFu, 0xFFu, 0xFFu, v8);
  CSprite2d::Draw(v1 + 49, v16, v15);
  CRGBA::CRGBA((CRGBA *)v15, 0xFFu, 0xFFu, 0xFFu, v8);
  CSprite2d::Draw(v1 + 49, v16, v15);
  CRGBA::CRGBA((CRGBA *)v15, 0xFFu, 0xFFu, 0xFFu, v8);
  v1 += 48;
  CSprite2d::Draw(v1, v16, v15);
  CRGBA::CRGBA((CRGBA *)v15, 0xFFu, 0xFFu, 0xFFu, v8);
  return CSprite2d::Draw(v1, v16, v15);
}


// ============================================================

// Address: 0x2c5d70
// Original: _ZN33CWidgetRegionTouchLayoutSelection18DrawAdaptedButtonsEv
// Demangled: CWidgetRegionTouchLayoutSelection::DrawAdaptedButtons(void)
int __fastcall CWidgetRegionTouchLayoutSelection::DrawAdaptedButtons(CWidgetRegionTouchLayoutSelection *this)
{
  float v2; // s2
  float v3; // s0
  float v4; // s16
  float v5; // s18
  float v6; // s20
  float v7; // s2
  float v8; // s0
  unsigned int v9; // r5
  float v10; // s4
  float v11; // s0
  float v12; // s0
  float v13; // s0
  float v14; // s4
  float v15; // s4
  _BYTE v17[4]; // [sp+4h] [bp-6Ch] BYREF
  float v18[2]; // [sp+8h] [bp-68h] BYREF
  float v19; // [sp+10h] [bp-60h]
  float v20; // [sp+14h] [bp-5Ch]
  float v21[2]; // [sp+18h] [bp-58h] BYREF
  float v22; // [sp+20h] [bp-50h]
  float v23; // [sp+24h] [bp-4Ch]
  float v24[18]; // [sp+28h] [bp-48h] BYREF

  v2 = *((float *)this + 53);
  v3 = fabsf(*((float *)this + 51) - v2);
  v4 = (float)*((unsigned __int8 *)this + 76) / 255.0;
  v5 = v3 * 0.04;
  v6 = v3 * 0.2125;
  v7 = v2 + (float)(v3 * 0.275);
  v8 = *((float *)this + 52) + (float)((float)(v3 * 0.04) * -2.0);
  v24[3] = v7 - v6;
  v24[1] = v6 + v7;
  v24[0] = v8 + (float)(v6 * -4.0);
  v24[2] = v8 - (float)(v6 + v6);
  v9 = (unsigned int)(float)(v4 * 255.0);
  CRGBA::CRGBA((CRGBA *)v21, 0xFFu, 0xFFu, 0xFFu, v9);
  CSprite2d::Draw((char *)this + 224, v24, v21);
  CRGBA::CRGBA((CRGBA *)v21, 0xFFu, 0xFFu, 0xFFu, v9);
  CSprite2d::Draw((char *)this + 224, v24, v21);
  v10 = *((float *)this + 53);
  v11 = fabsf(*((float *)this + 51) - v10);
  v22 = *((float *)this + 52) - v5;
  v12 = v10 + (float)(v11 * 0.75);
  v21[0] = v22 - (float)((float)(v6 * 1.5) + (float)(v6 * 1.5));
  v23 = v12 - (float)(v6 * 1.5);
  v21[1] = (float)(v6 * 1.5) + v12;
  CRGBA::CRGBA((CRGBA *)v18, 0xFFu, 0xFFu, 0xFFu, v9);
  CSprite2d::Draw((char *)this + 216, v21, v18);
  CRGBA::CRGBA((CRGBA *)v18, 0xFFu, 0xFFu, 0xFFu, v9);
  CSprite2d::Draw((char *)this + 216, v21, v18);
  v13 = *((float *)this + 51);
  v14 = v13 - *((float *)this + 53);
  v19 = *((float *)this + 52);
  v18[1] = v13;
  v15 = fabsf(v14) * 0.75;
  v20 = v13 - v15;
  v18[0] = v19 - v15;
  CRGBA::CRGBA((CRGBA *)v17, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(v4 * 100.0));
  return CSprite2d::Draw((char *)this + 220, v18, v17);
}


// ============================================================

// Address: 0x2c5f50
// Original: _ZN33CWidgetRegionTouchLayoutSelection14OnInitialTouchEv
// Demangled: CWidgetRegionTouchLayoutSelection::OnInitialTouch(void)
int __fastcall CWidgetRegionTouchLayoutSelection::OnInitialTouch(CWidgetRegionTouchLayoutSelection *this)
{
  int result; // r0
  float v3; // [sp+0h] [bp-10h] BYREF
  float v4; // [sp+4h] [bp-Ch]

  CTouchInterface::GetTouchPosition((CTouchInterface *)&v3, *((_DWORD *)this + 30));
  if ( v3 >= *((float *)this + 43)
    && v3 <= *((float *)this + 45)
    && v4 >= *((float *)this + 46)
    && v4 <= *((float *)this + 44) )
  {
    result = 0;
  }
  else
  {
    CTouchInterface::GetTouchPosition((CTouchInterface *)&v3, *((_DWORD *)this + 30));
    if ( v3 >= *((float *)this + 50)
      && v3 <= *((float *)this + 52)
      && v4 >= *((float *)this + 53)
      && v4 <= *((float *)this + 51) )
    {
      result = 1;
    }
    else
    {
      result = -1;
    }
  }
  *((_DWORD *)this + 37) = result;
  return result;
}


// ============================================================

// Address: 0x2c5ffc
// Original: _ZN33CWidgetRegionTouchLayoutSelection6UpdateEv
// Demangled: CWidgetRegionTouchLayoutSelection::Update(void)
int __fastcall CWidgetRegionTouchLayoutSelection::Update(CWidgetRegionTouchLayoutSelection *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d8
  float v4; // s2
  float v5; // s0
  int v6; // r0
  int v7; // r1
  float v8; // s0
  float v9; // s6
  float v10; // s8
  float v11; // s4
  float v12; // s0
  float v13; // s6
  float v14; // s8
  float v15; // s2
  double v16; // r0
  int v17; // r0
  int v18; // r0
  double v19; // r0
  double v20; // r0
  float v21; // s0
  float v22; // s0
  float v24; // [sp+0h] [bp-18h] BYREF
  float v25; // [sp+4h] [bp-14h]

  v4 = *((float *)this + 11);
  v5 = *((float *)this + 9) - v4;
  v2.n64_u32[0] = 0;
  v6 = *((_DWORD *)this + 10);
  v7 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 38) = v7;
  *((_DWORD *)this + 40) = v6;
  *((_DWORD *)this + 43) = v7;
  *((_DWORD *)this + 45) = v6;
  v8 = fabsf(v5);
  *((_DWORD *)this + 52) = v6;
  *((_DWORD *)this + 50) = v7;
  v9 = v8 * 0.15;
  v10 = v8 * 0.0;
  v11 = v8 * 0.5625;
  v12 = v4 + v8;
  v13 = v4 + v9;
  v14 = v4 + v10;
  v15 = v4 + v11;
  *((float *)this + 51) = v12;
  *((float *)this + 39) = v13;
  *((float *)this + 41) = v14;
  *((float *)this + 44) = v15;
  *((float *)this + 46) = v13;
  *((float *)this + 53) = v15;
  CWidget::ManageAlpha(this);
  CWidgetRegion::Update(this);
  LODWORD(v16) = *((unsigned __int8 *)this + 77);
  if ( !*((_BYTE *)this + 77) )
    return LODWORD(v16);
  if ( this == (CWidgetRegionTouchLayoutSelection *)CWidget::m_pInitialTouchWidget[*((_DWORD *)this + 30)] )
  {
    if ( (*(int (__fastcall **)(CWidgetRegionTouchLayoutSelection *, _DWORD))(*(_DWORD *)this + 80))(this, 0) != 1 )
    {
      if ( (*(int (__fastcall **)(CWidgetRegionTouchLayoutSelection *, _DWORD))(*(_DWORD *)this + 52))(this, 0) )
        goto LABEL_20;
      goto LABEL_18;
    }
    v17 = *((_DWORD *)this + 37);
    if ( v17 )
    {
      if ( v17 != 1 )
        goto LABEL_18;
    }
    else
    {
      CTouchInterface::GetTouchPosition((CTouchInterface *)&v24, *((_DWORD *)this + 30));
      if ( v24 >= *((float *)this + 43)
        && v24 <= *((float *)this + 45)
        && v25 >= *((float *)this + 46)
        && v25 <= *((float *)this + 44) )
      {
        v18 = 0;
        goto LABEL_19;
      }
      if ( *((_DWORD *)this + 37) != 1 )
        goto LABEL_18;
    }
    CTouchInterface::GetTouchPosition((CTouchInterface *)&v24, *((_DWORD *)this + 30));
    if ( v24 >= *((float *)this + 50)
      && v24 <= *((float *)this + 52)
      && v25 >= *((float *)this + 53)
      && v25 <= *((float *)this + 51) )
    {
      v18 = 1;
      goto LABEL_19;
    }
LABEL_18:
    v18 = -1;
LABEL_19:
    *((_DWORD *)this + 36) = v18;
  }
LABEL_20:
  if ( CHID::Implements() || CHID::Implements() || (LODWORD(v16) = CHID::Implements(), LODWORD(v16) == 1) )
  {
    if ( CHID::Replaces() || CHID::Replaces() || CHID::Replaces() == 1 )
    {
      v1.n64_f32[0] = (float)*((int *)this + 36);
      *((_DWORD *)this + 36) = (int)vmax_f32(v1, v2).n64_f32[0];
    }
    if ( CHID::IsReleased(61)
      || (LODWORD(v19) = OS_TimeAccurate(), v19 - flt_70B630 > 0.25) && CHID::IsPressedNegative(31) == 1 )
    {
      --*((_DWORD *)this + 36);
      LODWORD(v20) = OS_TimeAccurate();
      v21 = v20;
      flt_70B630 = v21;
      if ( *((int *)this + 36) <= -1 )
        *((_DWORD *)this + 36) = 1;
    }
    if ( CHID::IsReleased(60)
      || (LODWORD(v16) = OS_TimeAccurate(), v16 - flt_70B630 > 0.25)
      && (LODWORD(v16) = CHID::IsPressedPositive(31), LODWORD(v16) == 1) )
    {
      ++*((_DWORD *)this + 36);
      LODWORD(v16) = OS_TimeAccurate();
      v22 = v16;
      flt_70B630 = v22;
      LODWORD(v16) = *((_DWORD *)this + 36);
      if ( SLODWORD(v16) >= 2 )
      {
        LODWORD(v16) = 0;
        *((_DWORD *)this + 36) = 0;
      }
    }
  }
  return LODWORD(v16);
}


// ============================================================

// Address: 0x2c62a8
// Original: _ZN33CWidgetRegionTouchLayoutSelection10IsReleasedEP9CVector2D
// Demangled: CWidgetRegionTouchLayoutSelection::IsReleased(CVector2D *)
bool __fastcall CWidgetRegionTouchLayoutSelection::IsReleased(int a1, int a2)
{
  return CWidget::IsReleased(a1, a2) || CHID::Implements() == 1 && CHID::IsReleased(56);
}


// ============================================================

// Address: 0x2c62cc
// Original: _ZN33CWidgetRegionTouchLayoutSelectionD2Ev
// Demangled: CWidgetRegionTouchLayoutSelection::~CWidgetRegionTouchLayoutSelection()
void __fastcall CWidgetRegionTouchLayoutSelection::~CWidgetRegionTouchLayoutSelection(
        CWidgetRegionTouchLayoutSelection *this)
{
  CSprite2d *v2; // r5

  *(_DWORD *)this = &off_664E54;
  v2 = (CWidgetRegionTouchLayoutSelection *)((char *)this + 168);
  CSprite2d::~CSprite2d((CWidgetRegionTouchLayoutSelection *)((char *)this + 224));
  CSprite2d::~CSprite2d((CWidgetRegionTouchLayoutSelection *)((char *)this + 220));
  CSprite2d::~CSprite2d((CWidgetRegionTouchLayoutSelection *)((char *)this + 216));
  CSprite2d::~CSprite2d((CWidgetRegionTouchLayoutSelection *)((char *)this + 196));
  CSprite2d::~CSprite2d((CWidgetRegionTouchLayoutSelection *)((char *)this + 192));
  CSprite2d::~CSprite2d((CWidgetRegionTouchLayoutSelection *)((char *)this + 188));
  CSprite2d::~CSprite2d(v2);
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2c6324
// Original: _ZN33CWidgetRegionTouchLayoutSelectionD0Ev
// Demangled: CWidgetRegionTouchLayoutSelection::~CWidgetRegionTouchLayoutSelection()
void __fastcall CWidgetRegionTouchLayoutSelection::~CWidgetRegionTouchLayoutSelection(
        CWidgetRegionTouchLayoutSelection *this)
{
  CSprite2d *v2; // r5
  void *v3; // r0

  *(_DWORD *)this = &off_664E54;
  v2 = (CWidgetRegionTouchLayoutSelection *)((char *)this + 168);
  CSprite2d::~CSprite2d((CWidgetRegionTouchLayoutSelection *)((char *)this + 224));
  CSprite2d::~CSprite2d((CWidgetRegionTouchLayoutSelection *)((char *)this + 220));
  CSprite2d::~CSprite2d((CWidgetRegionTouchLayoutSelection *)((char *)this + 216));
  CSprite2d::~CSprite2d((CWidgetRegionTouchLayoutSelection *)((char *)this + 196));
  CSprite2d::~CSprite2d((CWidgetRegionTouchLayoutSelection *)((char *)this + 192));
  CSprite2d::~CSprite2d((CWidgetRegionTouchLayoutSelection *)((char *)this + 188));
  CSprite2d::~CSprite2d(v2);
  CWidget::~CWidget(this);
  operator delete(v3);
}


// ============================================================

// Address: 0x2c6380
// Original: _ZN33CWidgetRegionTouchLayoutSelection7GetNameEv
// Demangled: CWidgetRegionTouchLayoutSelection::GetName(void)
char *__fastcall CWidgetRegionTouchLayoutSelection::GetName(CWidgetRegionTouchLayoutSelection *this)
{
  return "Touch Layout Selection";
}


// ============================================================

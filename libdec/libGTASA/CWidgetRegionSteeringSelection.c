
// Address: 0x18b4e0
// Original: j__ZN30CWidgetRegionSteeringSelectionC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionSteeringSelection::CWidgetRegionSteeringSelection(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionSteeringSelection::CWidgetRegionSteeringSelection()
{
  return _ZN30CWidgetRegionSteeringSelectionC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x19b18c
// Original: j__ZN30CWidgetRegionSteeringSelection11DrawButtonsEv
// Demangled: CWidgetRegionSteeringSelection::DrawButtons(void)
// attributes: thunk
int __fastcall CWidgetRegionSteeringSelection::DrawButtons(CWidgetRegionSteeringSelection *this)
{
  return _ZN30CWidgetRegionSteeringSelection11DrawButtonsEv(this);
}


// ============================================================

// Address: 0x2c3c50
// Original: _ZN30CWidgetRegionSteeringSelectionC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionSteeringSelection::CWidgetRegionSteeringSelection(char const*,WidgetPosition const&)
int __fastcall CWidgetRegionSteeringSelection::CWidgetRegionSteeringSelection(int a1)
{
  float v2; // s2
  float v3; // s0
  int v4; // r0
  int v5; // r1
  float v6; // s0
  float v7; // s4
  float v8; // s8
  float v9; // s12
  float v10; // s0
  float v11; // s4
  float v12; // s8
  float v13; // s12
  float v14; // s3
  int result; // r0

  CWidgetRegion::CWidgetRegion();
  *(_QWORD *)(a1 + 152) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 160) = 0x49742400C9742400LL;
  *(_DWORD *)a1 = &off_664D2C;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 168));
  *(_QWORD *)(a1 + 188) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 196) = 0x49742400C9742400LL;
  *(_QWORD *)(a1 + 172) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 180) = 0x49742400C9742400LL;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 204));
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 208));
  *(_QWORD *)(a1 + 212) = 0xC974240049742400LL;
  *(_DWORD *)(a1 + 220) = -915135488;
  *(_DWORD *)(a1 + 224) = 1232348160;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 228));
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 232));
  *(_QWORD *)(a1 + 236) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 244) = 0x49742400C9742400LL;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 252));
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 168), "white", 1);
  *(_DWORD *)(a1 + 144) = -1;
  *(_DWORD *)(a1 + 148) = -1;
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 204), "hud_analognub", 1);
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 208), "hud_circle", 1);
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 228), "hud_left", 1);
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 232), "hud_right", 1);
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 252), "Arrow", 1);
  v2 = *(float *)(a1 + 44);
  v3 = *(float *)(a1 + 36) - v2;
  v4 = *(_DWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 152) = v4;
  *(_DWORD *)(a1 + 160) = v5;
  *(_DWORD *)(a1 + 180) = v5;
  *(_DWORD *)(a1 + 172) = v4;
  *(float *)(a1 + 164) = v2;
  v6 = fabsf(v3) + -4.0;
  v7 = v6 * 0.175;
  v8 = v6 * 0.1;
  v9 = v6 * 0.275;
  v10 = v6 * 0.225;
  v11 = v2 + v7;
  *(float *)(a1 + 156) = v11;
  v12 = v8 + (float)(v11 + 1.0);
  *(float *)(a1 + 184) = v11 + 1.0;
  *(float *)(a1 + 176) = v12;
  *(_DWORD *)(a1 + 196) = v5;
  *(_DWORD *)(a1 + 188) = v4;
  v13 = v9 + (float)(v12 + 1.0);
  *(float *)(a1 + 200) = v12 + 1.0;
  *(float *)(a1 + 192) = v13;
  *(_DWORD *)(a1 + 220) = v5;
  *(_DWORD *)(a1 + 212) = v4;
  v14 = v10 + (float)(v13 + 1.0);
  *(float *)(a1 + 224) = v13 + 1.0;
  *(float *)(a1 + 216) = v14;
  *(_DWORD *)(a1 + 244) = v5;
  *(_DWORD *)(a1 + 236) = v4;
  result = a1;
  *(float *)(a1 + 248) = v14 + 1.0;
  *(float *)(a1 + 240) = v10 + (float)(v14 + 1.0);
  return result;
}


// ============================================================

// Address: 0x2c3e78
// Original: _ZN30CWidgetRegionSteeringSelection10BuildRectsEv
// Demangled: CWidgetRegionSteeringSelection::BuildRects(void)
int __fastcall CWidgetRegionSteeringSelection::BuildRects(int this)
{
  float v1; // s2
  float v2; // s0
  int v3; // r1
  int v4; // r2
  float v5; // s0
  float v6; // s4
  float v7; // s8
  float v8; // s12
  float v9; // s0
  float v10; // s4
  float v11; // s8
  float v12; // s12
  float v13; // s3

  v1 = *(float *)(this + 44);
  v2 = *(float *)(this + 36) - v1;
  v3 = *(_DWORD *)(this + 32);
  v4 = *(_DWORD *)(this + 40);
  *(_DWORD *)(this + 152) = v3;
  *(_DWORD *)(this + 160) = v4;
  *(_DWORD *)(this + 180) = v4;
  *(_DWORD *)(this + 172) = v3;
  *(float *)(this + 164) = v1;
  v5 = fabsf(v2) + -4.0;
  v6 = v5 * 0.175;
  v7 = v5 * 0.1;
  v8 = v5 * 0.275;
  v9 = v5 * 0.225;
  v10 = v1 + v6;
  *(float *)(this + 156) = v10;
  v11 = v7 + (float)(v10 + 1.0);
  *(float *)(this + 184) = v10 + 1.0;
  *(float *)(this + 176) = v11;
  *(_DWORD *)(this + 196) = v4;
  *(_DWORD *)(this + 188) = v3;
  v12 = v8 + (float)(v11 + 1.0);
  *(float *)(this + 200) = v11 + 1.0;
  *(float *)(this + 192) = v12;
  *(_DWORD *)(this + 220) = v4;
  *(_DWORD *)(this + 212) = v3;
  v13 = v9 + (float)(v12 + 1.0);
  *(float *)(this + 224) = v12 + 1.0;
  *(float *)(this + 216) = v13;
  *(_DWORD *)(this + 244) = v4;
  *(_DWORD *)(this + 236) = v3;
  *(float *)(this + 248) = v13 + 1.0;
  *(float *)(this + 240) = v9 + (float)(v13 + 1.0);
  return this;
}


// ============================================================

// Address: 0x2c3f40
// Original: _ZN30CWidgetRegionSteeringSelection4DrawEv
// Demangled: CWidgetRegionSteeringSelection::Draw(void)
unsigned int __fastcall CWidgetRegionSteeringSelection::Draw(CWidgetRegionSteeringSelection *this)
{
  unsigned int result; // r0
  float v3; // s0
  float v4; // s18
  float v5; // s20
  float v6; // s16
  unsigned int v7; // r9
  unsigned int v8; // r10
  unsigned __int8 v9; // r2
  float v10; // r1
  float v11; // r1
  unsigned __int8 v12; // r1
  signed __int8 v13; // r1
  unsigned __int8 v14; // r1
  unsigned __int8 v15; // r1
  float v16; // s24
  float v17; // r1
  float v18; // s18
  float v19; // s20
  CFont *v20; // r0
  unsigned __int8 v21; // r3
  float v22; // r0
  _BOOL4 v23; // r1
  float v24; // s24
  float v25; // s26
  float v26; // s0
  CFont *v27; // r0
  unsigned __int16 *v28; // r3
  CFont *v29; // r0
  unsigned __int8 v30; // r1
  float v31; // s24
  float v32; // r1
  float v33; // s22
  CFont *v34; // r0
  unsigned __int8 v35; // r3
  float v36; // r0
  _BOOL4 v37; // r1
  float v38; // s22
  float v39; // s24
  float v40; // s0
  CFont *v41; // r0
  unsigned __int16 *v42; // r3
  CFont *v43; // r0
  unsigned __int8 v44; // r1
  float v45; // s20
  float v46; // r1
  float v47; // s22
  CFont *v48; // r0
  unsigned __int8 v49; // r3
  float v50; // r0
  float v51; // r1
  CFont *v52; // r0
  unsigned __int8 v53; // r3
  float v54; // r0
  float v55; // r1
  CFont *v56; // r0
  unsigned __int8 v57; // r3
  float v58; // r0
  float v59; // r1
  float v60; // s4
  float v61; // s0
  float v62; // s2
  CFont *v63; // r0
  unsigned __int16 *v64; // r3
  CFont *v65; // r0
  float v66; // s4
  float v67; // s0
  float v68; // s2
  CFont *v69; // r0
  unsigned __int16 *v70; // r3
  CFont *v71; // r0
  float v72; // s4
  float v73; // s0
  float v74; // s2
  CFont *v75; // r0
  unsigned __int16 *v76; // r3
  CFont *v77; // r0
  unsigned __int8 v78; // r1
  float v79; // s20
  float v80; // r1
  float v81; // r1
  float v82; // s4
  float v83; // s0
  float v84; // s2
  int v85; // r0
  unsigned __int16 *v86; // r3
  int NumberLines; // r6
  bool v88; // r1
  float v89; // r0
  float v90; // r1
  float v91; // s2
  float v92; // s0
  float v93; // s4
  int v94; // r0
  unsigned __int16 *v95; // r3
  int v96; // r5
  bool v97; // r1
  float v98; // r0
  float v99; // r1
  float v100; // s2
  float v101; // s0
  float v102; // s4
  int v103; // r0
  unsigned __int16 *v104; // r3
  int v105; // r5
  bool v106; // r1
  float v107; // r1
  float v108; // s4
  float v109; // s0
  float v110; // s2
  CFont *v111; // r0
  unsigned __int16 *v112; // r3
  CFont *v113; // r0
  float v114; // s4
  float v115; // s0
  float v116; // s2
  CFont *v117; // r0
  unsigned __int16 *v118; // r3
  CFont *v119; // r0
  float v120; // s4
  float v121; // s0
  float v122; // s2
  CFont *v123; // r0
  unsigned __int16 *v124; // r3
  CFont *v125; // r0
  char *v126; // r0
  char *v127; // r1
  _BYTE v128[4]; // [sp+Ch] [bp-7Ch] BYREF
  _BYTE v129[4]; // [sp+10h] [bp-78h] BYREF
  _BYTE v130[4]; // [sp+14h] [bp-74h] BYREF
  _BYTE v131[4]; // [sp+18h] [bp-70h] BYREF
  _BYTE v132[4]; // [sp+1Ch] [bp-6Ch] BYREF
  _BYTE v133[4]; // [sp+20h] [bp-68h] BYREF
  _BYTE v134[100]; // [sp+24h] [bp-64h] BYREF

  result = *((unsigned __int8 *)this + 76);
  if ( result )
  {
    v3 = (float)result;
    v4 = *((float *)this + 8);
    v5 = *((float *)this + 10);
    v6 = (float)result / 255.0;
    v7 = (unsigned int)(float)(v6 * 150.0);
    CRGBA::CRGBA((CRGBA *)v134, 0, 0, 0, v7);
    CRGBA::CRGBA((CRGBA *)v133, 0, 0, 0, (unsigned int)(float)((float)(v3 / 255.0) * 150.0));
    v8 = (unsigned int)(float)(v6 * 255.0);
    CRGBA::CRGBA((CRGBA *)v132, 0, 0, 0, v8);
    CRGBA::CRGBA((CRGBA *)v131, 0, 0, 0, v8);
    CSprite2d::DrawRectXLU((int)this + 152, (int)v134, (int)v133, (int)v132, (int)v131);
    CRGBA::CRGBA((CRGBA *)v134, 0, 0, 0, v7);
    CRGBA::CRGBA((CRGBA *)v133, 0, 0, 0, v7);
    CRGBA::CRGBA((CRGBA *)v132, 0, 0, 0, v8);
    CRGBA::CRGBA((CRGBA *)v131, 0, 0, 0, v8);
    CSprite2d::DrawRectXLU((int)this + 172, (int)v134, (int)v133, (int)v132, (int)v131);
    CRGBA::CRGBA((CRGBA *)v134, 0, 0, 0, v7);
    CRGBA::CRGBA((CRGBA *)v133, 0, 0, 0, v7);
    CRGBA::CRGBA((CRGBA *)v132, 0, 0, 0, v8);
    CRGBA::CRGBA((CRGBA *)v131, 0, 0, 0, v8);
    CSprite2d::DrawRectXLU((int)this + 188, (int)v134, (int)v133, (int)v132, (int)v131);
    CRGBA::CRGBA((CRGBA *)v134, 0, 0, 0, v7);
    CRGBA::CRGBA((CRGBA *)v133, 0, 0, 0, v7);
    CRGBA::CRGBA((CRGBA *)v132, 0, 0, 0, v8);
    CRGBA::CRGBA((CRGBA *)v131, 0, 0, 0, v8);
    CSprite2d::DrawRectXLU((int)this + 212, (int)v134, (int)v133, (int)v132, (int)v131);
    CRGBA::CRGBA((CRGBA *)v134, 0, 0, 0, v7);
    CRGBA::CRGBA((CRGBA *)v133, 0, 0, 0, v7);
    CRGBA::CRGBA((CRGBA *)v132, 0, 0, 0, v8);
    CRGBA::CRGBA((CRGBA *)v131, 0, 0, 0, v8);
    CSprite2d::DrawRectXLU((int)this + 236, (int)v134, (int)v133, (int)v132, (int)v131);
    CFont::SetBackground(0, 0, v9);
    CFont::SetWrapx(COERCE_CFONT_((float)dword_9FC900), v10);
    CFont::SetCentreSize(COERCE_CFONT_((float)((float)dword_9FC900 / 640.0) * 640.0), v11);
    CFont::SetProportional((CFont *)((char *)&stderr + 1), v12);
    CRGBA::CRGBA((CRGBA *)v130, 0xFFu, 0xFFu, 0xFFu, v8);
    CFont::SetColor();
    CRGBA::CRGBA((CRGBA *)v129, 0, 0, 0, v8);
    CFont::SetDropColor();
    CFont::SetEdge((CFont *)((char *)&stderr + 1), v13);
    CFont::SetOrientation((CFont *)((char *)&stderr + 1), v14);
    CFont::SetFontStyle(0, v15);
    v16 = fabsf(*((float *)this + 39) - *((float *)this + 41)) * 0.0265;
    CFont::SetScale((CFont *)LODWORD(v16), v17);
    v18 = fabsf(v5 - v4) * 0.035;
    v19 = fabsf(*((float *)this + 10) - *((float *)this + 8)) - (float)(v18 + v18);
    v20 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"STR_HEA");
    v22 = COERCE_FLOAT(CFont::GetStringWidth(v20, (unsigned __int16 *)((char *)&stderr + 1), 0, v21));
    if ( v22 > v19 )
      CFont::SetScale(COERCE_CFONT_(v16 * (float)(v19 / v22)), *(float *)&v23);
    v24 = *((float *)this + 38);
    v25 = *((float *)this + 39) + *((float *)this + 41);
    v26 = COERCE_FLOAT(CFont::GetHeight(0, v23)) * 0.5;
    v27 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"STR_HEA");
    v29 = (CFont *)CFont::PrintString(COERCE_CFONT_(v18 + v24), (float)(v25 * 0.5) - v26, v27, v28);
    CFont::RenderFontBuffer(v29);
    CFont::SetFontStyle((CFont *)((char *)&stderr + 1), v30);
    v31 = fabsf(*((float *)this + 39) - *((float *)this + 41)) * 0.015;
    CFont::SetScale((CFont *)LODWORD(v31), v32);
    v33 = fabsf(*((float *)this + 10) - *((float *)this + 8)) - (float)(v18 + v18);
    v34 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"STR_TXT");
    v36 = COERCE_FLOAT(CFont::GetStringWidth(v34, (unsigned __int16 *)((char *)&stderr + 1), 0, v35));
    if ( v36 > v33 )
      CFont::SetScale(COERCE_CFONT_(v31 * (float)(v33 / v36)), *(float *)&v37);
    v38 = *((float *)this + 43);
    v39 = *((float *)this + 44) + *((float *)this + 46);
    v40 = COERCE_FLOAT(CFont::GetHeight(0, v37)) * 0.5;
    v41 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"STR_TXT");
    v43 = (CFont *)CFont::PrintString(COERCE_CFONT_(v18 + v38), (float)(v39 * 0.5) - v40, v41, v42);
    CFont::RenderFontBuffer(v43);
    CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v44);
    v45 = fabsf(*((float *)this + 39) - *((float *)this + 41)) * 0.0165;
    CFont::SetScale((CFont *)LODWORD(v45), v46);
    v47 = fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.62;
    v48 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"STR_A");
    v50 = COERCE_FLOAT(CFont::GetStringWidth(v48, (unsigned __int16 *)((char *)&stderr + 1), 0, v49));
    if ( v50 > v47 )
    {
      v45 = v45 * (float)(v47 / v50);
      CFont::SetScale((CFont *)LODWORD(v45), v51);
    }
    v52 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"STR_B");
    v54 = COERCE_FLOAT(CFont::GetStringWidth(v52, (unsigned __int16 *)((char *)&stderr + 1), 0, v53));
    if ( v54 > v47 )
    {
      v45 = v45 * (float)(v47 / v54);
      CFont::SetScale((CFont *)LODWORD(v45), v55);
    }
    v56 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"STR_F");
    v58 = COERCE_FLOAT(CFont::GetStringWidth(v56, (unsigned __int16 *)((char *)&stderr + 1), 0, v57));
    if ( v58 > v47 )
      CFont::SetScale(COERCE_CFONT_(v45 * (float)(v47 / v58)), v59);
    v60 = *((float *)this + 50);
    v61 = *((float *)this + 47);
    v62 = fabsf(*((float *)this + 48) - v60);
    v63 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"STR_A");
    v65 = (CFont *)CFont::PrintString(COERCE_CFONT_(v18 + v61), v60 + (float)(v62 * 0.1), v63, v64);
    CFont::RenderFontBuffer(v65);
    v66 = *((float *)this + 56);
    v67 = *((float *)this + 53);
    v68 = fabsf(*((float *)this + 54) - v66);
    v69 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"STR_B");
    v71 = (CFont *)CFont::PrintString(COERCE_CFONT_(v18 + v67), v66 + (float)(v68 * 0.1), v69, v70);
    CFont::RenderFontBuffer(v71);
    v72 = *((float *)this + 62);
    v73 = *((float *)this + 59);
    v74 = fabsf(*((float *)this + 60) - v72);
    v75 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"STR_F");
    v77 = (CFont *)CFont::PrintString(COERCE_CFONT_(v18 + v73), v72 + (float)(v74 * 0.1), v75, v76);
    CFont::RenderFontBuffer(v77);
    CFont::SetFontStyle((CFont *)((char *)&stderr + 1), v78);
    v79 = (float)((float)(fabsf(*((float *)this + 54) - *((float *)this + 56)) * 0.05) * 0.65) * 0.25;
    CFont::SetScale((CFont *)LODWORD(v79), v80);
    CFont::SetWrapx(
      COERCE_CFONT_(*((float *)this + 8) + (float)(fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.65)),
      v81);
    while ( 1 )
    {
      v82 = *((float *)this + 56);
      v83 = *((float *)this + 53);
      v84 = fabsf(*((float *)this + 54) - v82);
      v85 = CText::Get((CText *)TheText, (CKeyGen *)"STR_ANA");
      NumberLines = CFont::GetNumberLines(COERCE_CFONT_(v18 + v83), v82 + (float)(v84 * 0.35), *(float *)&v85, v86);
      v89 = COERCE_FLOAT(CFont::GetHeight(0, v88));
      v91 = *((float *)this + 54);
      v92 = *((float *)this + 56);
      if ( (float)(v89 * (float)NumberLines) < (float)(fabsf(v91 - v92) * 0.575) )
        break;
      v79 = v79 * 0.98;
      CFont::SetScale((CFont *)LODWORD(v79), v90);
    }
    while ( 1 )
    {
      v93 = *((float *)this + 53);
      v94 = CText::Get((CText *)TheText, (CKeyGen *)"STR_BUT");
      v96 = CFont::GetNumberLines(COERCE_CFONT_(v18 + v93), v92 + (float)(fabsf(v91 - v92) * 0.35), *(float *)&v94, v95);
      v98 = COERCE_FLOAT(CFont::GetHeight(0, v97));
      v100 = *((float *)this + 54);
      v101 = *((float *)this + 56);
      if ( (float)(v98 * (float)v96) < (float)(fabsf(v100 - v101) * 0.575) )
        break;
      v79 = v79 * 0.98;
      CFont::SetScale((CFont *)LODWORD(v79), v99);
      v91 = *((float *)this + 54);
      v92 = *((float *)this + 56);
    }
    while ( 1 )
    {
      v102 = *((float *)this + 53);
      v103 = CText::Get((CText *)TheText, (CKeyGen *)"STR_FLI");
      v105 = CFont::GetNumberLines(
               COERCE_CFONT_(v18 + v102),
               v101 + (float)(fabsf(v100 - v101) * 0.35),
               *(float *)&v103,
               v104);
      if ( (float)(COERCE_FLOAT(CFont::GetHeight(0, v106)) * (float)v105) < (float)(fabsf(
                                                                                      *((float *)this + 54)
                                                                                    - *((float *)this + 56))
                                                                                  * 0.575) )
        break;
      v79 = v79 * 0.98;
      CFont::SetScale((CFont *)LODWORD(v79), v107);
      v100 = *((float *)this + 54);
      v101 = *((float *)this + 56);
    }
    CRGBA::CRGBA((CRGBA *)v128, 0x80u, 0x80u, 0x80u, v8);
    CFont::SetColor();
    v108 = *((float *)this + 50);
    v109 = *((float *)this + 47);
    v110 = fabsf(*((float *)this + 48) - v108);
    v111 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"STR_ANA");
    v113 = (CFont *)CFont::PrintString(COERCE_CFONT_(v18 + v109), v108 + (float)(v110 * 0.395), v111, v112);
    CFont::RenderFontBuffer(v113);
    v114 = *((float *)this + 56);
    v115 = *((float *)this + 53);
    v116 = fabsf(*((float *)this + 54) - v114);
    v117 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"STR_BUT");
    v119 = (CFont *)CFont::PrintString(COERCE_CFONT_(v18 + v115), v114 + (float)(v116 * 0.395), v117, v118);
    CFont::RenderFontBuffer(v119);
    v120 = *((float *)this + 62);
    v121 = *((float *)this + 59);
    v122 = fabsf(*((float *)this + 60) - v120);
    v123 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"STR_FLI");
    v125 = (CFont *)CFont::PrintString(COERCE_CFONT_(v18 + v121), v120 + (float)(v122 * 0.395), v123, v124);
    CFont::RenderFontBuffer(v125);
    CWidgetRegionSteeringSelection::DrawButtons(this);
    result = *((_DWORD *)this + 36);
    if ( result )
    {
      if ( result == 1 )
      {
        CRGBA::CRGBA((CRGBA *)v134, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(v6 * 75.0));
        v126 = (char *)this + 168;
        v127 = (char *)this + 212;
      }
      else
      {
        if ( result != 2 )
          return result;
        CRGBA::CRGBA((CRGBA *)v134, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(v6 * 75.0));
        v126 = (char *)this + 168;
        v127 = (char *)this + 236;
      }
    }
    else
    {
      CRGBA::CRGBA((CRGBA *)v134, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(v6 * 75.0));
      v126 = (char *)this + 168;
      v127 = (char *)this + 188;
    }
    return CSprite2d::Draw(v126, v127, v134);
  }
  return result;
}


// ============================================================

// Address: 0x2c4908
// Original: _ZN30CWidgetRegionSteeringSelection11DrawButtonsEv
// Demangled: CWidgetRegionSteeringSelection::DrawButtons(void)
int __fastcall CWidgetRegionSteeringSelection::DrawButtons(CWidgetRegionSteeringSelection *this)
{
  float *v1; // r4
  float v2; // s4
  float v3; // s2
  float v4; // s6
  float v5; // s8
  float v6; // s18
  float v7; // s0
  float v8; // s20
  unsigned __int8 v9; // r10
  float v10; // s4
  float v11; // s0
  float v12; // s4
  float v13; // s20
  float v14; // s22
  float v15; // s2
  float v16; // s18
  float v17; // s0
  float v18; // s2
  float v19; // s4
  float v20; // s6
  float v21; // s18
  float v22; // s4
  float v23; // s0
  float v24; // s0
  float v25; // s2
  _BYTE v27[4]; // [sp+4h] [bp-7Ch] BYREF
  float v28[4]; // [sp+8h] [bp-78h] BYREF
  float v29; // [sp+18h] [bp-68h] BYREF
  float v30; // [sp+1Ch] [bp-64h]
  float v31; // [sp+20h] [bp-60h]
  float v32; // [sp+24h] [bp-5Ch]
  float v33; // [sp+28h] [bp-58h] BYREF
  float v34; // [sp+2Ch] [bp-54h]
  float v35; // [sp+30h] [bp-50h]
  float v36; // [sp+34h] [bp-4Ch]
  float v37; // [sp+38h] [bp-48h] BYREF
  float v38; // [sp+3Ch] [bp-44h]
  float v39; // [sp+40h] [bp-40h]
  float v40; // [sp+44h] [bp-3Ch]

  v1 = (float *)this;
  v2 = *((float *)this + 55);
  v3 = *((float *)this + 54);
  v4 = *((float *)this + 56);
  v5 = (float)*((unsigned __int8 *)this + 76);
  v6 = fabsf(v2 - *((float *)this + 53)) * 0.035;
  v7 = (float)(v3 + v4) * 0.5;
  v8 = fabsf(v3 - v4) * 0.325;
  v40 = v7 - v8;
  v39 = v2 - v6;
  v38 = v8 + v7;
  v9 = (unsigned int)(float)((float)(v5 / 255.0) * 255.0);
  v37 = (float)(v2 - v6) - (float)(v8 + v8);
  CRGBA::CRGBA((CRGBA *)&v33, 0xFFu, 0xFFu, 0xFFu, v9);
  CSprite2d::Draw(v1 + 58, &v37, &v33);
  CRGBA::CRGBA((CRGBA *)&v33, 0xFFu, 0xFFu, 0xFFu, v9);
  CSprite2d::Draw(v1 + 58, &v37, &v33);
  v10 = (float)(v1[54] + v1[56]) * 0.5;
  v11 = v1[55] + (float)(v6 * -1.5);
  v33 = v11 + (float)(v8 * -4.0);
  v35 = v11 - (float)(v8 + v8);
  v36 = v10 - v8;
  v34 = v8 + v10;
  CRGBA::CRGBA((CRGBA *)&v29, 0xFFu, 0xFFu, 0xFFu, v9);
  CSprite2d::Draw(v1 + 57, &v33, &v29);
  CRGBA::CRGBA((CRGBA *)&v29, 0xFFu, 0xFFu, 0xFFu, v9);
  CSprite2d::Draw(v1 + 57, &v33, &v29);
  v12 = v1[60] + v1[62];
  v13 = v35;
  v14 = v33;
  v15 = (float)(v37 + v39) * 0.5;
  v16 = fabsf(v1[54] - v1[56]) * 0.26;
  v39 = v15 + v16;
  v37 = v15 - v16;
  v38 = v16 + (float)(v12 * 0.5);
  v40 = (float)(v12 * 0.5) - v16;
  CRGBA::CRGBA((CRGBA *)&v29, 0xFFu, 0xFFu, 0xFFu, v9);
  CSprite2d::DrawRotated((int)(v1 + 63), (int)&v37, 0.0);
  v17 = (float)(v14 + v13) * 0.5;
  v18 = (float)(v1[60] + v1[62]) * 0.5;
  v33 = v17 - v16;
  v35 = v16 + v17;
  v34 = v16 + v18;
  v36 = v18 - v16;
  CRGBA::CRGBA((CRGBA *)&v29, 0xFFu, 0xFFu, 0xFFu, v9);
  CSprite2d::DrawRotated((int)(v1 + 63), (int)&v33, 3.14);
  v19 = v1[48];
  v20 = v1[50];
  v21 = fabsf(v19 - v20);
  v22 = (float)(v19 + v20) * 0.5;
  v23 = (float)((float)((float)(v33 + v35) * 0.5) + (float)((float)(v37 + v39) * 0.5)) * 0.5;
  v32 = v22 - (float)(v21 * 0.4125);
  v30 = (float)(v21 * 0.4125) + v22;
  v29 = v23 - (float)(v21 * 0.4125);
  v31 = (float)(v21 * 0.4125) + v23;
  CRGBA::CRGBA((CRGBA *)v28, 0xFFu, 0xFFu, 0xFFu, v9);
  CSprite2d::Draw(v1 + 52, &v29, v28);
  CRGBA::CRGBA((CRGBA *)v28, 0xFFu, 0xFFu, 0xFFu, v9);
  CSprite2d::Draw(v1 + 52, &v29, v28);
  v24 = v29 + (float)(fabsf(v31 - v29) * 0.35);
  v25 = v32 + (float)(fabsf(v30 - v32) * 0.35);
  v28[0] = v24 - (float)(v21 * 0.15);
  v28[3] = v25 - (float)(v21 * 0.15);
  v28[2] = (float)(v21 * 0.15) + v24;
  v28[1] = (float)(v21 * 0.15) + v25;
  CRGBA::CRGBA((CRGBA *)v27, 0xFFu, 0xFFu, 0xFFu, v9);
  v1 += 51;
  CSprite2d::Draw(v1, v28, v27);
  CRGBA::CRGBA((CRGBA *)v27, 0xFFu, 0xFFu, 0xFFu, v9);
  return CSprite2d::Draw(v1, v28, v27);
}


// ============================================================

// Address: 0x2c4ca8
// Original: _ZN30CWidgetRegionSteeringSelection14OnInitialTouchEv
// Demangled: CWidgetRegionSteeringSelection::OnInitialTouch(void)
int __fastcall CWidgetRegionSteeringSelection::OnInitialTouch(CWidgetRegionSteeringSelection *this)
{
  int result; // r0
  float v3; // [sp+0h] [bp-10h] BYREF
  float v4; // [sp+4h] [bp-Ch]

  CTouchInterface::GetTouchPosition((CTouchInterface *)&v3, *((_DWORD *)this + 30));
  if ( v3 >= *((float *)this + 47)
    && v3 <= *((float *)this + 49)
    && v4 >= *((float *)this + 50)
    && v4 <= *((float *)this + 48) )
  {
    result = 0;
  }
  else
  {
    CTouchInterface::GetTouchPosition((CTouchInterface *)&v3, *((_DWORD *)this + 30));
    if ( v3 >= *((float *)this + 53)
      && v3 <= *((float *)this + 55)
      && v4 >= *((float *)this + 56)
      && v4 <= *((float *)this + 54) )
    {
      result = 1;
    }
    else
    {
      CTouchInterface::GetTouchPosition((CTouchInterface *)&v3, *((_DWORD *)this + 30));
      if ( v3 >= *((float *)this + 59)
        && v3 <= *((float *)this + 61)
        && v4 >= *((float *)this + 62)
        && v4 <= *((float *)this + 60) )
      {
        result = 2;
      }
      else
      {
        result = -1;
      }
    }
  }
  *((_DWORD *)this + 37) = result;
  return result;
}


// ============================================================

// Address: 0x2c4da0
// Original: _ZN30CWidgetRegionSteeringSelection6UpdateEv
// Demangled: CWidgetRegionSteeringSelection::Update(void)
int __fastcall CWidgetRegionSteeringSelection::Update(CWidgetRegionSteeringSelection *this)
{
  float v2; // s0
  int v3; // r0
  int v4; // r1
  float v5; // s0
  float v6; // s4
  float v7; // s8
  float v8; // s12
  float v9; // s0
  float v10; // s4
  float v11; // s8
  float v12; // s12
  float32x2_t v13; // d1
  double v14; // r0
  int v15; // r0
  int v16; // r0
  float32x2_t v17; // d0
  double v18; // r0
  double v19; // r0
  float v20; // s0
  float v21; // s0
  float v23; // [sp+0h] [bp-10h] BYREF
  float v24; // [sp+4h] [bp-Ch]

  v13.n64_u32[0] = *((_DWORD *)this + 11);
  v2 = *((float *)this + 9) - v13.n64_f32[0];
  v3 = *((_DWORD *)this + 8);
  v4 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 38) = v3;
  *((_DWORD *)this + 40) = v4;
  *((_DWORD *)this + 43) = v3;
  *((_DWORD *)this + 45) = v4;
  *((_DWORD *)this + 49) = v4;
  *((_DWORD *)this + 47) = v3;
  *((_DWORD *)this + 55) = v4;
  *((_DWORD *)this + 53) = v3;
  *((_DWORD *)this + 41) = v13.n64_u32[0];
  v5 = fabsf(v2) + -4.0;
  v6 = v5 * 0.175;
  v7 = v5 * 0.1;
  v8 = v5 * 0.275;
  v9 = v5 * 0.225;
  v10 = v13.n64_f32[0] + v6;
  *((float *)this + 39) = v10;
  v11 = v7 + (float)(v10 + 1.0);
  *((float *)this + 46) = v10 + 1.0;
  *((float *)this + 44) = v11;
  v12 = v8 + (float)(v11 + 1.0);
  *((float *)this + 50) = v11 + 1.0;
  *((float *)this + 48) = v12;
  v13.n64_f32[1] = v9 + (float)(v12 + 1.0);
  *((float *)this + 56) = v12 + 1.0;
  *((_DWORD *)this + 54) = v13.n64_u32[1];
  *((_DWORD *)this + 61) = v4;
  *((_DWORD *)this + 59) = v3;
  *((float *)this + 62) = v13.n64_f32[1] + 1.0;
  *((float *)this + 60) = v9 + (float)(v13.n64_f32[1] + 1.0);
  CWidget::ManageAlpha(this);
  CWidgetRegion::Update(this);
  LODWORD(v14) = *((unsigned __int8 *)this + 77);
  if ( !*((_BYTE *)this + 77) )
    return LODWORD(v14);
  if ( this == (CWidgetRegionSteeringSelection *)CWidget::m_pInitialTouchWidget[*((_DWORD *)this + 30)] )
  {
    if ( (*(int (__fastcall **)(CWidgetRegionSteeringSelection *, _DWORD))(*(_DWORD *)this + 80))(this, 0) != 1 )
    {
      if ( (*(int (__fastcall **)(CWidgetRegionSteeringSelection *, _DWORD))(*(_DWORD *)this + 52))(this, 0) )
        goto LABEL_26;
      goto LABEL_24;
    }
    v15 = *((_DWORD *)this + 37);
    if ( v15 )
    {
      if ( v15 != 1 )
        goto LABEL_6;
    }
    else
    {
      CTouchInterface::GetTouchPosition((CTouchInterface *)&v23, *((_DWORD *)this + 30));
      if ( v23 >= *((float *)this + 47)
        && v23 <= *((float *)this + 49)
        && v24 >= *((float *)this + 50)
        && v24 <= *((float *)this + 48) )
      {
        v16 = 0;
        goto LABEL_25;
      }
      v15 = *((_DWORD *)this + 37);
      if ( v15 != 1 )
      {
LABEL_6:
        if ( v15 != 2 )
          goto LABEL_24;
        goto LABEL_20;
      }
    }
    CTouchInterface::GetTouchPosition((CTouchInterface *)&v23, *((_DWORD *)this + 30));
    if ( v23 >= *((float *)this + 53)
      && v23 <= *((float *)this + 55)
      && v24 >= *((float *)this + 56)
      && v24 <= *((float *)this + 54) )
    {
      v16 = 1;
      goto LABEL_25;
    }
    if ( *((_DWORD *)this + 37) != 2 )
    {
LABEL_24:
      v16 = -1;
LABEL_25:
      *((_DWORD *)this + 36) = v16;
      goto LABEL_26;
    }
LABEL_20:
    CTouchInterface::GetTouchPosition((CTouchInterface *)&v23, *((_DWORD *)this + 30));
    if ( v23 >= *((float *)this + 59)
      && v23 <= *((float *)this + 61)
      && v24 >= *((float *)this + 62)
      && v24 <= *((float *)this + 60) )
    {
      v16 = 2;
      goto LABEL_25;
    }
    goto LABEL_24;
  }
LABEL_26:
  if ( CHID::Implements() || CHID::Implements() || (LODWORD(v14) = CHID::Implements(), LODWORD(v14) == 1) )
  {
    if ( CHID::Replaces() || CHID::Replaces() || CHID::Replaces() == 1 )
    {
      v13.n64_u32[0] = 0;
      v17.n64_f32[0] = (float)*((int *)this + 36);
      v17.n64_f32[1] = v12 + 1.0;
      *((_DWORD *)this + 36) = (int)vmax_f32(v17, v13).n64_f32[0];
    }
    if ( CHID::IsReleased(61)
      || (LODWORD(v18) = OS_TimeAccurate(), v18 - flt_70B62C > 0.25) && CHID::IsPressedNegative(31) == 1 )
    {
      --*((_DWORD *)this + 36);
      LODWORD(v19) = OS_TimeAccurate();
      v20 = v19;
      flt_70B62C = v20;
      if ( *((int *)this + 36) <= -1 )
        *((_DWORD *)this + 36) = 2;
    }
    if ( CHID::IsReleased(60)
      || (LODWORD(v14) = OS_TimeAccurate(), v14 - flt_70B62C > 0.25)
      && (LODWORD(v14) = CHID::IsPressedPositive(31), LODWORD(v14) == 1) )
    {
      ++*((_DWORD *)this + 36);
      LODWORD(v14) = OS_TimeAccurate();
      v21 = v14;
      flt_70B62C = v21;
      LODWORD(v14) = *((_DWORD *)this + 36);
      if ( SLODWORD(v14) >= 3 )
      {
        LODWORD(v14) = 0;
        *((_DWORD *)this + 36) = 0;
      }
    }
  }
  return LODWORD(v14);
}


// ============================================================

// Address: 0x2c50f8
// Original: _ZN30CWidgetRegionSteeringSelection10IsReleasedEP9CVector2D
// Demangled: CWidgetRegionSteeringSelection::IsReleased(CVector2D *)
bool __fastcall CWidgetRegionSteeringSelection::IsReleased(int a1, int a2)
{
  if ( !LIB_KeyboardState() )
    *(_DWORD *)(a1 + 144) = 0;
  return CWidget::IsReleased(a1, a2) || CHID::Implements() == 1 && CHID::IsReleased(56);
}


// ============================================================

// Address: 0x2c5140
// Original: _ZN30CWidgetRegionSteeringSelectionD2Ev
// Demangled: CWidgetRegionSteeringSelection::~CWidgetRegionSteeringSelection()
void __fastcall CWidgetRegionSteeringSelection::~CWidgetRegionSteeringSelection(CWidgetRegionSteeringSelection *this)
{
  CSprite2d *v2; // r5

  *(_DWORD *)this = &off_664D2C;
  v2 = (CWidgetRegionSteeringSelection *)((char *)this + 168);
  CSprite2d::~CSprite2d((CWidgetRegionSteeringSelection *)((char *)this + 252));
  CSprite2d::~CSprite2d((CWidgetRegionSteeringSelection *)((char *)this + 232));
  CSprite2d::~CSprite2d((CWidgetRegionSteeringSelection *)((char *)this + 228));
  CSprite2d::~CSprite2d((CWidgetRegionSteeringSelection *)((char *)this + 208));
  CSprite2d::~CSprite2d((CWidgetRegionSteeringSelection *)((char *)this + 204));
  CSprite2d::~CSprite2d(v2);
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2c5190
// Original: _ZN30CWidgetRegionSteeringSelectionD0Ev
// Demangled: CWidgetRegionSteeringSelection::~CWidgetRegionSteeringSelection()
void __fastcall CWidgetRegionSteeringSelection::~CWidgetRegionSteeringSelection(CWidgetRegionSteeringSelection *this)
{
  CSprite2d *v2; // r5
  void *v3; // r0

  *(_DWORD *)this = &off_664D2C;
  v2 = (CWidgetRegionSteeringSelection *)((char *)this + 168);
  CSprite2d::~CSprite2d((CWidgetRegionSteeringSelection *)((char *)this + 252));
  CSprite2d::~CSprite2d((CWidgetRegionSteeringSelection *)((char *)this + 232));
  CSprite2d::~CSprite2d((CWidgetRegionSteeringSelection *)((char *)this + 228));
  CSprite2d::~CSprite2d((CWidgetRegionSteeringSelection *)((char *)this + 208));
  CSprite2d::~CSprite2d((CWidgetRegionSteeringSelection *)((char *)this + 204));
  CSprite2d::~CSprite2d(v2);
  CWidget::~CWidget(this);
  operator delete(v3);
}


// ============================================================

// Address: 0x2c51e4
// Original: _ZN30CWidgetRegionSteeringSelection7GetNameEv
// Demangled: CWidgetRegionSteeringSelection::GetName(void)
char *__fastcall CWidgetRegionSteeringSelection::GetName(CWidgetRegionSteeringSelection *this)
{
  return "Steering Selection";
}


// ============================================================

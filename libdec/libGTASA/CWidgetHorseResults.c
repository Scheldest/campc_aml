
// Address: 0x194648
// Original: j__ZN19CWidgetHorseResultsC2EPKcRK14WidgetPosition
// Demangled: CWidgetHorseResults::CWidgetHorseResults(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetHorseResults::CWidgetHorseResults()
{
  return _ZN19CWidgetHorseResultsC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2b8770
// Original: _ZN19CWidgetHorseResultsC2EPKcRK14WidgetPosition
// Demangled: CWidgetHorseResults::CWidgetHorseResults(char const*,WidgetPosition const&)
int __fastcall CWidgetHorseResults::CWidgetHorseResults(int a1, int a2, int a3)
{
  int result; // r0

  result = CWidget::CWidget(a1, a2, a3, 20, 0);
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
  *(_DWORD *)result = &off_663CF0;
  *(_DWORD *)(result + 677) = 0;
  *(_BYTE *)(result + 808) = 0;
  *(_DWORD *)(result + 936) = 0;
  *(_DWORD *)(result + 940) = 0;
  *(_DWORD *)(result + 945) = 0;
  *(_DWORD *)(result + 941) = 0;
  *(_BYTE *)(result + 1076) = 0;
  *(_DWORD *)(result + 1204) = 0;
  *(_DWORD *)(result + 1208) = 0;
  *(_DWORD *)(result + 1213) = 0;
  *(_DWORD *)(result + 1209) = 0;
  *(_BYTE *)(result + 1344) = 0;
  *(_DWORD *)(result + 1472) = 0;
  *(_DWORD *)(result + 1476) = 0;
  *(_DWORD *)(result + 1481) = 0;
  *(_DWORD *)(result + 1477) = 0;
  *(_BYTE *)(result + 1612) = 0;
  *(_DWORD *)(result + 1740) = 0;
  *(_DWORD *)(result + 1744) = 0;
  *(_DWORD *)(result + 1749) = 0;
  *(_DWORD *)(result + 1745) = 0;
  *(_BYTE *)(result + 1880) = 0;
  *(_DWORD *)(result + 2008) = 0;
  *(_DWORD *)(result + 2012) = 0;
  *(_DWORD *)(result + 2016) = 0;
  return result;
}


// ============================================================

// Address: 0x2b8818
// Original: _ZN19CWidgetHorseResults6UpdateEv
// Demangled: CWidgetHorseResults::Update(void)
int __fastcall CWidgetHorseResults::Update(CWidgetHorseResults *this)
{
  CWidget::Update(this);
  return j_CWidget::ManageAlpha(this);
}


// ============================================================

// Address: 0x2b882c
// Original: _ZN19CWidgetHorseResults4DrawEv
// Demangled: CWidgetHorseResults::Draw(void)
int __fastcall CWidgetHorseResults::Draw(CWidgetHorseResults *this)
{
  CWidgetHorseResults *v1; // r4
  unsigned int v2; // r9
  CKeyGen *v3; // r5
  int v4; // r8
  unsigned __int8 v5; // r2
  float v6; // s16
  float v7; // s18
  unsigned __int8 v8; // r1
  unsigned __int8 v9; // r1
  float v10; // r1
  signed __int8 v11; // r1
  float v12; // s20
  float v13; // r1
  unsigned __int8 v14; // r1
  float v15; // s16
  float v16; // s18
  float v17; // r1
  int v18; // r6
  float v19; // s24
  float v20; // s26
  float v21; // s24
  CFont *v22; // r0
  unsigned __int8 v23; // r3
  float v24; // r0
  float v25; // r1
  _DWORD *v26; // r8
  unsigned int v27; // r6
  float v28; // s24
  float v29; // r0
  bool v30; // zf
  float v31; // r1
  int v32; // r0
  int v33; // r0
  float v34; // s6
  float v35; // r1
  unsigned __int8 v36; // r1
  float v37; // s27
  float v38; // s26
  float v39; // s17
  bool v40; // r1
  float v41; // s0
  CFont *v42; // r0
  unsigned __int16 *v43; // r3
  unsigned __int8 v44; // r1
  char *v45; // r1
  const unsigned __int16 *v46; // r0
  unsigned __int16 *v47; // r0
  float v48; // r1
  unsigned __int8 v49; // r1
  float v50; // s26
  float v51; // s17
  float v52; // s27
  bool v53; // r1
  float v54; // r0
  unsigned __int16 *v55; // r3
  CFont *v56; // r0
  float v57; // s0
  const unsigned __int16 *v58; // r0
  CMessages *v59; // r0
  CMessages *v60; // r0
  float v61; // s26
  float v62; // s17
  float v63; // s27
  bool v64; // r1
  float v65; // r0
  unsigned __int16 *v66; // r3
  CFont *v67; // r0
  unsigned __int16 *v69; // [sp+10h] [bp-5D0h]
  float *v70; // [sp+30h] [bp-5B0h]
  unsigned int v71; // [sp+34h] [bp-5ACh]
  unsigned __int8 v72[4]; // [sp+38h] [bp-5A8h]
  unsigned int v73; // [sp+3Ch] [bp-5A4h]
  _BYTE v74[4]; // [sp+40h] [bp-5A0h] BYREF
  unsigned __int16 v75; // [sp+44h] [bp-59Ch] BYREF
  char v76; // [sp+46h] [bp-59Ah]
  char v77; // [sp+47h] [bp-599h]
  _BYTE v78[4]; // [sp+244h] [bp-39Ch] BYREF
  __int64 v79; // [sp+248h] [bp-398h] BYREF
  __int64 v80; // [sp+250h] [bp-390h]
  _BYTE v81[4]; // [sp+25Ch] [bp-384h] BYREF
  unsigned __int16 v82; // [sp+260h] [bp-380h] BYREF
  char v83; // [sp+262h] [bp-37Eh]
  char v84; // [sp+263h] [bp-37Dh]
  float v85; // [sp+264h] [bp-37Ch] BYREF
  float v86; // [sp+268h] [bp-378h]
  float v87; // [sp+26Ch] [bp-374h]
  float v88; // [sp+270h] [bp-370h]
  unsigned __int16 v89[256]; // [sp+274h] [bp-36Ch] BYREF
  _BYTE v90[4]; // [sp+474h] [bp-16Ch] BYREF
  char v91[256]; // [sp+478h] [bp-168h] BYREF
  int v92; // [sp+578h] [bp-68h]

  v1 = this;
  v2 = *((unsigned __int8 *)this + 76);
  if ( *((_BYTE *)this + 76) )
  {
    v3 = (CWidgetHorseResults *)((char *)this + 144);
    if ( strlen((const char *)this + 144) )
      v4 = strcasecmp((const char *)v1 + 144, "DUMMY") != 0;
    else
      v4 = 0;
    if ( strlen((const char *)v1 + 412) && strcasecmp((const char *)v1 + 412, "DUMMY") )
      ++v4;
    if ( strlen((const char *)v1 + 680) && strcasecmp((const char *)v1 + 680, "DUMMY") )
      ++v4;
    if ( strlen((const char *)v1 + 948) && strcasecmp((const char *)v1 + 948, "DUMMY") )
      ++v4;
    if ( strlen((const char *)v1 + 1216) && strcasecmp((const char *)v1 + 1216, "DUMMY") )
      ++v4;
    if ( strlen((const char *)v1 + 1484) && strcasecmp((const char *)v1 + 1484, "DUMMY") )
      ++v4;
    if ( strlen((const char *)v1 + 1752) && strcasecmp((const char *)v1 + 1752, "DUMMY") )
      ++v4;
    if ( v4 == 7 )
    {
      v6 = *((float *)v1 + 9);
      v7 = *((float *)v1 + 11);
      CFont::SetBackground(0, 0, v5);
      CFont::SetProportional((CFont *)((char *)&stderr + 1), v8);
      CFont::SetOrientation((CFont *)((char *)&stderr + 1), v9);
      CFont::SetRightJustifyWrap(0, v10);
      CFont::SetEdge(0, v11);
      v12 = (float)v2 / 255.0;
      v71 = (unsigned int)(float)(v12 * 255.0);
      CRGBA::CRGBA((CRGBA *)v90, 0, 0, 0, v71);
      CFont::SetDropColor();
      CFont::SetWrapx(COERCE_CFONT_((float)dword_9FC900), v13);
      CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v14);
      v15 = (float)(fabsf(v6 - v7) + -6.0) * 0.125;
      v16 = v15 * 0.021;
      CFont::SetScale(COERCE_CFONT_(v15 * 0.021), v17);
      v18 = -1;
      do
      {
        v19 = *((float *)v1 + 8);
        v20 = *((float *)v1 + 10);
        if ( strlen((const char *)v3) )
        {
          if ( strcasecmp((const char *)v3, "DUMMY") )
          {
            v21 = fabsf(v20 - v19) * 0.625;
            v22 = (CFont *)CText::Get((CText *)TheText, v3);
            v24 = COERCE_FLOAT(CFont::GetStringWidth(v22, (unsigned __int16 *)((char *)&stderr + 1), 0, v23));
            if ( v24 > v21 )
            {
              v16 = v16 * (float)(v21 / v24);
              CFont::SetScale((CFont *)LODWORD(v16), v25);
            }
          }
        }
        ++v18;
        v3 = (CKeyGen *)((char *)v3 + 268);
      }
      while ( v18 < 6 );
      v26 = (_DWORD *)((char *)v1 + 400);
      v27 = -1;
      *(_DWORD *)v72 = (unsigned int)(float)(v12 * 128.0);
      v28 = *((float *)v1 + 11);
      v70 = (float *)v1;
      do
      {
        v29 = *((float *)v1 + 8);
        v30 = v27 == 5;
        v31 = *((float *)v1 + 10);
        v88 = v28;
        v85 = v29;
        v87 = v31;
        v86 = v15 + v28;
        if ( v27 != 5 )
          v30 = v27 == -1;
        if ( v30 )
        {
          v85 = v29;
          v87 = v31;
          v88 = v28;
          v86 = (float)(v15 * 1.5) + v28;
        }
        v73 = v27 + 1;
        CRGBA::CRGBA((CRGBA *)&v75, 0, 0, 0, v72[0]);
        CRGBA::CRGBA((CRGBA *)&v79, 0, 0, 0, v72[0]);
        CRGBA::CRGBA((CRGBA *)&v82, 0, 0, 0, v71);
        CRGBA::CRGBA((CRGBA *)v81, 0, 0, 0, v71);
        CSprite2d::DrawRect((int)&v85, (int)&v75, (int)&v79, (int)&v82, v32);
        v79 = 0LL;
        v80 = 0LL;
        if ( v27 > 4 )
        {
          v46 = (const unsigned __int16 *)CText::Get((CText *)TheText, (CKeyGen *)(v26 - 64));
          GxtCharStrcpy(v89, v46);
          strcpy(v91, "~g~ ");
          AsciiToGxtChar(v91, &v75);
          GxtCharStrcat(v89, &v75);
          v47 = (unsigned __int16 *)CText::Get((CText *)TheText, (CKeyGen *)"DOLLAR");
          GxtCharStrcat(v89, v47);
          sub_5E6BC0(v91, "%d", *v26);
          AsciiToGxtChar(v91, &v75);
          GxtCharStrcat(v89, &v75);
          CFont::SetScale(COERCE_CFONT_(v16 * 1.5), v48);
          CRGBA::CRGBA((CRGBA *)v74, 0xFFu, 0xFFu, 0xFFu, v71);
          CFont::SetColor();
          CFont::SetOrientation(0, v49);
          v50 = v85;
          v51 = v87;
          v52 = v86 + v88;
          v54 = COERCE_FLOAT(CFont::GetHeight(0, v53));
          v56 = (CFont *)CFont::PrintString(
                           COERCE_CFONT_((float)(v50 + v51) * 0.5),
                           (float)(v52 * 0.5) - (float)(v54 * 0.5),
                           (CFont *)v89,
                           v55);
          CFont::RenderFontBuffer(v56);
          v1 = (CWidgetHorseResults *)v70;
          ++v27;
          if ( v73 != 6 )
            goto LABEL_47;
          goto LABEL_60;
        }
        v33 = *v26;
        if ( !*v26 )
        {
          CRGBA::CRGBA((CRGBA *)&v82, 0x2Au, 0x60u, 0xE4u, v71);
          v75 = v82;
          v76 = v83;
          v77 = v84;
          v33 = *v26;
        }
        v1 = (CWidgetHorseResults *)v70;
        ++v27;
        if ( v33 == 1 )
        {
          CRGBA::CRGBA((CRGBA *)&v82, 0xD1u, 0x74u, 0x74u, v71);
          v75 = v82;
          v76 = v83;
          v77 = v84;
          v33 = *v26;
          if ( *v26 != 2 )
          {
LABEL_41:
            if ( v33 != 3 )
              goto LABEL_42;
            goto LABEL_52;
          }
        }
        else if ( v33 != 2 )
        {
          goto LABEL_41;
        }
        CRGBA::CRGBA((CRGBA *)&v82, 0xDEu, 0xB9u, 0x67u, v71);
        v75 = v82;
        v76 = v83;
        v77 = v84;
        v33 = *v26;
        if ( *v26 != 3 )
        {
LABEL_42:
          if ( v33 != 4 )
            goto LABEL_44;
LABEL_43:
          CRGBA::CRGBA((CRGBA *)&v82, 0x41u, 0xBEu, 0x97u, v71);
          v75 = v82;
          v76 = v83;
          v77 = v84;
          goto LABEL_44;
        }
LABEL_52:
        CRGBA::CRGBA((CRGBA *)&v82, 0x85u, 0x41u, 0xBEu, v71);
        v75 = v82;
        v76 = v83;
        v77 = v84;
        if ( *v26 == 4 )
          goto LABEL_43;
LABEL_44:
        v34 = fabsf(v86 - v88);
        *(float *)&v79 = v85 + (float)(v34 * 0.15);
        *((float *)&v79 + 1) = v86 - (float)(v34 * 0.15);
        *((float *)&v80 + 1) = v88 + (float)(v34 * 0.15);
        *(float *)&v80 = *(float *)&v79 + (float)(v34 + (float)((float)(v34 * 0.15) * -2.0));
        CSprite2d::DrawRect();
        CFont::SetScale((CFont *)LODWORD(v16), v35);
        CFont::SetOrientation((CFont *)((char *)&stderr + 1), v36);
        CRGBA::CRGBA((CRGBA *)v78, 0xFFu, 0xFFu, 0xFFu, v71);
        CFont::SetColor();
        v37 = *(float *)&v80;
        v38 = v86 + v88;
        v39 = fabsf(v70[10] - v70[8]);
        v41 = COERCE_FLOAT(CFont::GetHeight(0, v40));
        v42 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)(v26 - 64));
        CFont::PrintString(COERCE_CFONT_(v37 + (float)(v39 * 0.03)), (float)(v38 * 0.5) - (float)(v41 * 0.5), v42, v43);
        switch ( v73 )
        {
          case 1u:
            v45 = "FIRST";
            goto LABEL_56;
          case 2u:
            v45 = "SECOND";
            goto LABEL_56;
          case 3u:
            v45 = "THIRD";
LABEL_56:
            v58 = (const unsigned __int16 *)CText::Get((CText *)TheText, (CKeyGen *)v45);
            GxtCharStrcpy(v89, v58);
            break;
          case 4u:
            v59 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)&dword_2B8FA0);
            CMessages::InsertNumberInString(v59, (unsigned __int16 *)&byte_4, -1, -1, -1, -1, -1, (int)v89, v69);
            break;
          case 5u:
            v60 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)&dword_2B8FA0);
            CMessages::InsertNumberInString(v60, (unsigned __int16 *)&byte_5, -1, -1, -1, -1, -1, (int)v89, v69);
            break;
          default:
            break;
        }
        CFont::SetOrientation((CFont *)((char *)&stderr + 2), v44);
        v61 = v87;
        v62 = v86 + v88;
        v63 = fabsf(v87 - v85);
        v65 = COERCE_FLOAT(CFont::GetHeight(0, v64));
        v67 = (CFont *)CFont::PrintString(
                         COERCE_CFONT_(v61 + (float)(v63 * -0.03)),
                         (float)(v62 * 0.5) - (float)(v65 * 0.5),
                         (CFont *)v89,
                         v66);
        CFont::RenderFontBuffer(v67);
        if ( v73 != 6 )
        {
LABEL_47:
          v57 = v15;
          if ( !v27 )
            v57 = v15 * 1.5;
          goto LABEL_61;
        }
LABEL_60:
        v57 = v15 * 1.5;
LABEL_61:
        v26 += 67;
        v28 = v28 + (float)(v57 + 1.0);
      }
      while ( v27 != 6 );
    }
  }
  return _stack_chk_guard - v92;
}


// ============================================================

// Address: 0x2b8fd0
// Original: _ZN19CWidgetHorseResults14SetWidgetInfo2EiiiiPcS0_
// Demangled: CWidgetHorseResults::SetWidgetInfo2(int,int,int,int,char *,char *)
int __fastcall CWidgetHorseResults::SetWidgetInfo2(
        CWidgetHorseResults *this,
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

  if ( a2 <= 6 )
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

// Address: 0x2b905c
// Original: _ZN19CWidgetHorseResultsD0Ev
// Demangled: CWidgetHorseResults::~CWidgetHorseResults()
void __fastcall CWidgetHorseResults::~CWidgetHorseResults(CWidgetHorseResults *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2b906c
// Original: _ZN19CWidgetHorseResults7GetNameEv
// Demangled: CWidgetHorseResults::GetName(void)
char *__fastcall CWidgetHorseResults::GetName(CWidgetHorseResults *this)
{
  return "Horse Results";
}


// ============================================================

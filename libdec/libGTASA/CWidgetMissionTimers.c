
// Address: 0x19dfbc
// Original: j__ZN20CWidgetMissionTimersC2EPKcRK14WidgetPosition
// Demangled: CWidgetMissionTimers::CWidgetMissionTimers(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetMissionTimers::CWidgetMissionTimers()
{
  return _ZN20CWidgetMissionTimersC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2bbfd0
// Original: _ZN20CWidgetMissionTimersC2EPKcRK14WidgetPosition
// Demangled: CWidgetMissionTimers::CWidgetMissionTimers(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetMissionTimers::CWidgetMissionTimers(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidget::CWidget(a1, a2, a3, 4, 0);
  *result = &off_664074;
  return result;
}


// ============================================================

// Address: 0x2bbff4
// Original: _ZN20CWidgetMissionTimers6UpdateEv
// Demangled: CWidgetMissionTimers::Update(void)
int __fastcall CWidgetMissionTimers::Update(CWidgetMissionTimers *this)
{
  int v2; // r5
  const char *v3; // r5
  float v4; // r0
  float v5; // r1
  float v7; // [sp+8h] [bp-18h] BYREF
  float v8; // [sp+Ch] [bp-14h] BYREF
  float v9; // [sp+10h] [bp-10h] BYREF
  unsigned int v10[3]; // [sp+14h] [bp-Ch] BYREF

  if ( CHud::bDrawingVitalStats )
    CWidget::SetEnabled(this, 0);
  v2 = dword_6F3938;
  if ( dword_6F3938 && CWidget::GetEnabled((CWidget *)dword_6F3938) == 1 && *((float *)this + 10) > *(float *)(v2 + 32) )
    CWidget::SetEnabled(this, 0);
  v9 = 0.0;
  v10[0] = 0;
  v7 = 0.0;
  v8 = 0.0;
  CTouchInterface::GetWidgetPosition(124, (int)v10, (int)&v9, (int)&v8, (int)&v7);
  if ( CTheScripts::pActiveScripts )
  {
    v3 = (const char *)(CTheScripts::pActiveScripts + 8);
    if ( !strcasecmp((const char *)(CTheScripts::pActiveScripts + 8), "gymls")
      || !strcasecmp(v3, "gymbike")
      || !strcasecmp(v3, "gymdumb") )
    {
      *(float *)v10 = v8 + 10.0;
      v9 = v7 + 10.0;
    }
  }
  v4 = v7;
  v5 = v8;
  *(_QWORD *)((char *)this + 12) = __PAIR64__(LODWORD(v9), v10[0]);
  *((float *)this + 5) = v5;
  *((float *)this + 6) = v4;
  CWidget::Update(this);
  return CWidget::ManageAlpha(this);
}


// ============================================================

// Address: 0x2bc0e8
// Original: _ZN20CWidgetMissionTimers4DrawEv
// Demangled: CWidgetMissionTimers::Draw(void)
int __fastcall CWidgetMissionTimers::Draw(int this)
{
  __int64 v1; // d8
  __int64 v2; // d9
  __int64 v3; // d10
  __int64 v4; // d11
  __int64 v5; // d12
  __int64 v6; // d13
  __int64 v7; // d14
  __int64 v8; // d15
  unsigned __int16 *v9; // r5
  unsigned __int16 *v10; // r4
  int v11; // r10
  unsigned __int8 v12; // r2
  int v13; // r8
  const unsigned __int16 *v14; // r0
  int i; // r6
  const unsigned __int16 *v16; // r0
  _DWORD *v17; // r1
  int v18; // r1
  const char *v19; // r0
  int v20; // r0
  char *v21; // r1
  const unsigned __int16 *v22; // r0
  unsigned __int8 v23; // r1
  unsigned __int8 v24; // r1
  float v25; // r1
  signed __int8 v26; // r1
  float v27; // r1
  unsigned int v28; // r4
  float v29; // s16
  float v30; // s20
  float v31; // r1
  unsigned __int8 v32; // r3
  unsigned __int16 *v33; // r5
  unsigned __int16 *v34; // r6
  float v35; // s18
  int v36; // r4
  float v37; // s28
  float v38; // r0
  float v39; // r1
  unsigned __int8 v40; // r3
  float v41; // s28
  float v42; // s30
  float v43; // r0
  float v44; // r1
  float v45; // s0
  int v46; // r0
  int v47; // r1
  float v48; // s20
  int v49; // r11
  float v50; // s28
  float v51; // s30
  int v52; // r0
  unsigned __int8 v53; // r1
  float v54; // s21
  bool v55; // r1
  float v56; // r0
  unsigned __int16 *v57; // r3
  unsigned __int8 v58; // r1
  float v59; // s21
  bool v60; // r1
  float v61; // r0
  unsigned __int16 *v62; // r3
  int v63; // [sp+58h] [bp-14F8h]
  CText *v64; // [sp+68h] [bp-14E8h]
  unsigned __int8 v65[4]; // [sp+6Ch] [bp-14E4h]
  CFont *j; // [sp+70h] [bp-14E0h]
  _BYTE v67[4]; // [sp+74h] [bp-14DCh] BYREF
  int v68; // [sp+78h] [bp-14D8h]
  _BYTE v69[4]; // [sp+7Ch] [bp-14D4h] BYREF
  _BYTE v70[4]; // [sp+80h] [bp-14D0h] BYREF
  _BYTE v71[4]; // [sp+84h] [bp-14CCh] BYREF
  _BYTE v72[4]; // [sp+88h] [bp-14C8h] BYREF
  _BYTE v73[4]; // [sp+8Ch] [bp-14C4h] BYREF
  _BYTE v74[4]; // [sp+90h] [bp-14C0h] BYREF
  _BYTE v75[4]; // [sp+94h] [bp-14BCh] BYREF
  _DWORD v76[19]; // [sp+98h] [bp-14B8h] BYREF
  unsigned __int16 v77[1280]; // [sp+E4h] [bp-146Ch] BYREF
  unsigned __int16 v78[1282]; // [sp+AE4h] [bp-A6Ch] BYREF
  __int64 v79; // [sp+14E8h] [bp-68h]
  __int64 v80; // [sp+14F0h] [bp-60h]
  __int64 v81; // [sp+14F8h] [bp-58h]
  __int64 v82; // [sp+1500h] [bp-50h]
  __int64 v83; // [sp+1508h] [bp-48h]
  __int64 v84; // [sp+1510h] [bp-40h]
  __int64 v85; // [sp+1518h] [bp-38h]
  __int64 v86; // [sp+1520h] [bp-30h]

  if ( !*(_BYTE *)(this + 76) )
    return this;
  v79 = v1;
  v80 = v2;
  v81 = v3;
  v82 = v4;
  v83 = v5;
  v84 = v6;
  v85 = v7;
  v86 = v8;
  v9 = v78;
  v10 = v77;
  v11 = 0;
  v63 = this;
  do
  {
    AsciiToGxtChar(&byte_61CD7E, v9);
    AsciiToGxtChar(&byte_61CD7E, v10);
    CRGBA::CRGBA((CRGBA *)v76, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    v76[v11 + 14] = v76[0];
    v76[v11 + 9] = 0;
    CRGBA::CRGBA((CRGBA *)v76, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    v76[v11 + 4] = v76[0];
    ++v11;
    v10 += 256;
    v9 += 256;
  }
  while ( v11 != 5 );
  v13 = 0;
  if ( byte_96B578 && byte_96B544[0] )
  {
    v14 = (const unsigned __int16 *)CText::Get((CText *)TheText, (CKeyGen *)byte_96B544);
    GxtCharStrcpy(v78, v14);
    AsciiToGxtChar(byte_96B54E, v77);
    v13 = 1;
  }
  for ( i = 0; i != 272; i += 68 )
  {
    if ( !*((_BYTE *)&CUserDisplay::OnscnTimer + i + 126) )
      continue;
    if ( *((_BYTE *)&CUserDisplay::OnscnTimer + i + 72) )
    {
      CHudColours::GetRGBA((CHudColours *)v76, (unsigned __int8)HudColour);
      v76[v13 + 14] = v76[0];
      v16 = (const unsigned __int16 *)CText::Get(
                                        (CText *)TheText,
                                        (CKeyGen *)((char *)&CUserDisplay::OnscnTimer + i + 72));
      GxtCharStrcpy(&v78[256 * v13], v16);
    }
    if ( *(_WORD *)((char *)&CUserDisplay::OnscnTimer + i + 82) == 1 )
    {
      v76[v13 + 9] = atoi((const char *)&CUserDisplay::OnscnTimer + i + 84);
      CHudColours::GetRGBA((CHudColours *)v76, (unsigned __int8)HudColour);
      v17 = &v76[v13 + 4];
      *v17 = v76[0];
    }
    else
    {
      v18 = strcasecmp((const char *)&CUserDisplay::OnscnTimer + i + 72, "GYM1_72");
      v19 = (char *)&CUserDisplay::OnscnTimer + i + 84;
      if ( v18 )
      {
        AsciiToGxtChar(v19, &v77[256 * v13]);
      }
      else
      {
        v20 = atoi(v19);
        if ( v20 <= 159 )
        {
          switch ( v20 )
          {
            case 20:
              v21 = "GYM1_26";
              goto LABEL_39;
            case 30:
              v21 = "GYM1_27";
              goto LABEL_39;
            case 40:
              v21 = "GYM1_8";
              goto LABEL_39;
            case 50:
              v21 = "GYM1_29";
              goto LABEL_39;
            case 60:
              v21 = "GYM1_9";
              goto LABEL_39;
            case 70:
              v21 = "GYM1_31";
              goto LABEL_39;
            case 80:
              v21 = "GYM1_10";
              goto LABEL_39;
            case 90:
              v21 = "GYM1_33";
              goto LABEL_39;
            case 100:
              v21 = "GYM1_11";
              goto LABEL_39;
            case 110:
              v21 = "GYM1_35";
              goto LABEL_39;
            case 120:
              v21 = "GYM1_12";
              goto LABEL_39;
            default:
              goto LABEL_40;
          }
          goto LABEL_40;
        }
        if ( v20 <= 239 )
        {
          if ( v20 == 160 )
          {
            v21 = "GYM1_13";
          }
          else
          {
            if ( v20 != 200 )
              goto LABEL_40;
            v21 = "GYM1_14";
          }
LABEL_39:
          v22 = (const unsigned __int16 *)CText::Get((CText *)TheText, (CKeyGen *)v21);
          GxtCharStrcpy(&v77[256 * v13], v22);
          goto LABEL_40;
        }
        switch ( v20 )
        {
          case 240:
            v21 = "GYM1_15";
            goto LABEL_39;
          case 280:
            v21 = "GYM1_16";
            goto LABEL_39;
          case 320:
            v21 = "GYM1_17";
            goto LABEL_39;
        }
      }
    }
LABEL_40:
    ++v13;
  }
  CFont::SetBackground(0, 0, v12);
  CFont::SetProportional((CFont *)((char *)&stderr + 1), v23);
  CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v24);
  CFont::SetRightJustifyWrap(0, v25);
  CFont::SetEdge(0, v26);
  CFont::SetWrapx(COERCE_CFONT_((float)dword_9FC900), v27);
  v28 = *(unsigned __int8 *)(v63 + 76);
  v29 = (float)(fabsf(*(float *)(v63 + 36) - *(float *)(v63 + 44)) + -2.0) / 3.0;
  v30 = v29 * 0.0325;
  this = CFont::SetScale(COERCE_CFONT_(v29 * 0.0325), v31);
  if ( v13 >= 1 )
  {
    v33 = v78;
    v34 = v77;
    v35 = (float)v28 / 255.0;
    v36 = v13;
    v37 = fabsf(*(float *)(v63 + 40) - *(float *)(v63 + 32));
    do
    {
      v38 = COERCE_FLOAT(CFont::GetStringWidth((CFont *)v33, (unsigned __int16 *)((char *)&stderr + 1), 0, v32));
      if ( v38 > (float)(v37 * 0.55) )
      {
        v30 = v30 * (float)((float)(v37 * 0.55) / v38);
        CFont::SetScale((CFont *)LODWORD(v30), v39);
      }
      v41 = *(float *)(v63 + 32);
      v42 = *(float *)(v63 + 40);
      v43 = COERCE_FLOAT(CFont::GetStringWidth((CFont *)v34, (unsigned __int16 *)((char *)&stderr + 1), 0, v40));
      v45 = fabsf(v42 - v41) * 0.425;
      if ( v43 > v45 )
      {
        v30 = v30 * (float)(v45 / v43);
        CFont::SetScale((CFont *)LODWORD(v30), v44);
      }
      v34 += 256;
      v33 += 256;
      --v36;
      v37 = fabsf(*(float *)(v63 + 40) - *(float *)(v63 + 32));
    }
    while ( v36 );
    v46 = *(_DWORD *)(v63 + 40);
    v47 = *(_DWORD *)(v63 + 32);
    v48 = v37 * 0.03;
    v49 = 0;
    v50 = v29 * 0.5;
    *(_DWORD *)v65 = v13 - 1;
    v51 = *(float *)(v63 + 44);
    v64 = (CText *)v78;
    for ( j = (CFont *)v77; ; j = (CFont *)((char *)j + 512) )
    {
      *(float *)&v76[3] = v51;
      v76[0] = v47;
      v76[2] = v46;
      *(float *)&v76[1] = v29 + v51;
      CRGBA::CRGBA((CRGBA *)v75, 0, 0, 0, (unsigned int)(float)(v35 * 128.0));
      CRGBA::CRGBA((CRGBA *)v74, 0, 0, 0, (unsigned int)(float)(v35 * 128.0));
      CRGBA::CRGBA((CRGBA *)v73, 0, 0, 0, (unsigned int)(float)(v35 * 255.0));
      CRGBA::CRGBA((CRGBA *)v72, 0, 0, 0, (unsigned int)(float)(v35 * 255.0));
      CSprite2d::DrawRect((int)v76, (int)v75, (int)v74, (int)v73, v52);
      CRGBA::CRGBA(
        (CRGBA *)v71,
        v76[v49 + 14],
        BYTE1(v76[v49 + 14]),
        BYTE2(v76[v49 + 14]),
        (unsigned int)(float)(v35 * (float)HIBYTE(v76[v49 + 14])));
      CFont::SetColor();
      CRGBA::CRGBA((CRGBA *)v70, 0, 0, 0, (unsigned int)(float)(v35 * 255.0));
      CFont::SetDropColor();
      CFont::SetOrientation((CFont *)((char *)&stderr + 1), v53);
      v54 = *(float *)(v63 + 32);
      v56 = COERCE_FLOAT(CFont::GetHeight(0, v55));
      CFont::PrintString(COERCE_CFONT_(v48 + v54), (float)(v50 + v51) + (float)(v56 * -0.5), v64, v57);
      if ( *(_WORD *)j )
      {
        CFont::SetOrientation((CFont *)((char *)&stderr + 2), v58);
        CRGBA::CRGBA((CRGBA *)v69, 0x5Du, 0x8Eu, 0xBEu, (unsigned int)(float)(v35 * 255.0));
        CFont::SetColor();
        v59 = *(float *)(v63 + 40);
        v61 = COERCE_FLOAT(CFont::GetHeight(0, v60));
        CFont::PrintString(COERCE_CFONT_(v59 - v48), (float)(v50 + v51) + (float)(v61 * -0.5), j, v62);
      }
      else
      {
        v68 = v76[v49 + 4];
        CRGBA::CRGBA((CRGBA *)v67, 0, 0, 0, 0);
        CSprite2d::DrawBarChart();
      }
      this = *(_DWORD *)v65;
      if ( !*(_DWORD *)v65 )
        break;
      v51 = (float)(v29 + 1.0) + v51;
      v47 = *(_DWORD *)(v63 + 32);
      ++v49;
      v46 = *(_DWORD *)(v63 + 40);
      v64 = (CText *)((char *)v64 + 512);
      --*(_DWORD *)v65;
    }
  }
  return this;
}


// ============================================================

// Address: 0x2bca38
// Original: _ZN20CWidgetMissionTimersD0Ev
// Demangled: CWidgetMissionTimers::~CWidgetMissionTimers()
void __fastcall CWidgetMissionTimers::~CWidgetMissionTimers(CWidgetMissionTimers *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2bca48
// Original: _ZN20CWidgetMissionTimers7GetNameEv
// Demangled: CWidgetMissionTimers::GetName(void)
char *__fastcall CWidgetMissionTimers::GetName(CWidgetMissionTimers *this)
{
  return "Timers";
}


// ============================================================

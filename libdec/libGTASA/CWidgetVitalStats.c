
// Address: 0x195854
// Original: j__ZN17CWidgetVitalStatsC2EPKcRK14WidgetPosition
// Demangled: CWidgetVitalStats::CWidgetVitalStats(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetVitalStats::CWidgetVitalStats()
{
  return _ZN17CWidgetVitalStatsC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c84b0
// Original: _ZN17CWidgetVitalStatsC2EPKcRK14WidgetPosition
// Demangled: CWidgetVitalStats::CWidgetVitalStats(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetVitalStats::CWidgetVitalStats(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidget::CWidget(a1, a2, a3, 0, 0);
  result[7] = 1157627904;
  *result = &off_665260;
  return result;
}


// ============================================================

// Address: 0x2c84d8
// Original: _ZN17CWidgetVitalStats6UpdateEv
// Demangled: CWidgetVitalStats::Update(void)
int __fastcall CWidgetVitalStats::Update(CWidgetVitalStats *this)
{
  CWidget::Update(this);
  return j_CWidget::ManageAlpha(this);
}


// ============================================================

// Address: 0x2c84ec
// Original: _ZN17CWidgetVitalStats4DrawEv
// Demangled: CWidgetVitalStats::Draw(void)
int __fastcall CWidgetVitalStats::Draw(CWidgetVitalStats *this)
{
  float32x2_t v1; // d2
  float32x2_t v2; // d8
  int result; // r0
  int PlayerPed; // r0
  int v6; // r4
  int PlayerVehicle; // r0
  int v8; // r0
  const char *v9; // r0
  int v10; // r0
  int v11; // r6
  float v12; // s0
  float v13; // r0
  float v14; // s2
  int v15; // r0
  float v16; // s2
  float v17; // r1
  float v18; // s2
  int v19; // r0
  float v20; // s24
  float v21; // s26
  unsigned __int8 v22; // r1
  unsigned __int8 v23; // r1
  signed __int8 v24; // r1
  unsigned __int8 v25; // r1
  float v26; // r1
  float v27; // s0
  float v28; // s26
  float v29; // s28
  bool v30; // r1
  float v31; // s24
  float v32; // s0
  CFont *v33; // r0
  unsigned __int16 *v34; // r3
  CFont *v35; // r0
  unsigned __int8 v36; // r1
  unsigned __int8 v37; // r1
  float v38; // r1
  CFont *v39; // r4
  float v40; // s20
  float v41; // s26
  bool v42; // r1
  float v43; // r0
  unsigned __int16 *v44; // r3
  CFont *v45; // r0
  float v46; // s28
  float v47; // s20
  float v48; // s30
  float v49; // s22
  float v50; // s26
  float v51; // r1
  unsigned __int8 v52; // r1
  float v53; // s23
  float v54; // s28
  float v55; // r1
  CFont *v56; // r0
  unsigned __int8 v57; // r3
  float v58; // r0
  float v59; // r1
  int v60; // r11
  unsigned __int16 v61; // r1
  bool v62; // r1
  int SkillStatIndex; // r0
  float *v64; // r4
  float v65; // s25
  float v66; // s27
  float v67; // r0
  float v68; // s0
  CFont *v69; // r0
  unsigned __int16 *v70; // r3
  bool v71; // r1
  int v72; // r0
  const char *v73; // r2
  bool v74; // zf
  char *v75; // [sp+24h] [bp-E4h]
  unsigned __int8 v76[4]; // [sp+30h] [bp-D8h]
  int v77; // [sp+34h] [bp-D4h]
  char v78[4]; // [sp+38h] [bp-D0h] BYREF
  char v79[4]; // [sp+3Ch] [bp-CCh] BYREF
  char v80[4]; // [sp+40h] [bp-C8h] BYREF
  char v81[4]; // [sp+44h] [bp-C4h] BYREF
  char v82[4]; // [sp+48h] [bp-C0h] BYREF
  float v83; // [sp+4Ch] [bp-BCh] BYREF
  float v84; // [sp+50h] [bp-B8h]
  float v85; // [sp+54h] [bp-B4h]
  float v86; // [sp+58h] [bp-B0h]
  char v87[4]; // [sp+5Ch] [bp-ACh] BYREF
  char v88[4]; // [sp+60h] [bp-A8h] BYREF
  char v89[4]; // [sp+64h] [bp-A4h] BYREF
  float v90; // [sp+68h] [bp-A0h] BYREF
  float v91; // [sp+6Ch] [bp-9Ch]
  float v92; // [sp+70h] [bp-98h]
  float v93; // [sp+74h] [bp-94h]
  _QWORD v94[3]; // [sp+78h] [bp-90h]
  _QWORD v95[2]; // [sp+90h] [bp-78h]
  __int64 v96; // [sp+A0h] [bp-68h]

  result = *((unsigned __int8 *)this + 76);
  if ( !result )
    return result;
  if ( FindPlayerPed(-1) )
  {
    PlayerPed = FindPlayerPed(-1);
    v6 = *(_DWORD *)(PlayerPed + 28 * *(char *)(PlayerPed + 1820) + 1444);
  }
  else
  {
    v6 = 0;
  }
  v95[0] = *(_QWORD *)off_6652F0;
  v95[1] = *(_QWORD *)off_6652F8;
  v96 = *(_QWORD *)off_665300;
  v94[0] = *(_QWORD *)"@";
  v94[1] = unk_60F098;
  v94[2] = unk_60F0A0;
  PlayerVehicle = FindPlayerVehicle(-1, 0);
  if ( v6 == 32 )
    v6 = 28;
  if ( PlayerVehicle )
  {
    if ( *(_DWORD *)(FindPlayerVehicle(-1, 0) + 1444) == 4 || *(_DWORD *)(FindPlayerVehicle(-1, 0) + 1444) == 3 )
    {
      HIDWORD(v95[0]) = "STAT223";
      v8 = 223;
    }
    else if ( *(_DWORD *)(FindPlayerVehicle(-1, 0) + 1444) == 9 )
    {
      HIDWORD(v95[0]) = "STAT229";
      v8 = 229;
    }
    else
    {
      v72 = FindPlayerVehicle(-1, 0);
      v73 = "STAT230";
      v74 = *(_DWORD *)(v72 + 1444) == 10;
      v8 = 160;
      if ( !v74 )
        v73 = "STAT160";
      HIDWORD(v95[0]) = v73;
      if ( v74 )
        v8 = 230;
    }
    HIDWORD(v94[0]) = v8;
  }
  if ( CPedIntelligence::GetTaskSwim(*(CPedIntelligence **)(CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus]
                                                          + 1088)) )
  {
    v9 = "STAT225";
LABEL_16:
    HIDWORD(v96) = v9;
    v10 = 6;
    goto LABEL_17;
  }
  if ( (unsigned int)(v6 - 22) <= 0xA )
  {
    v9 = "CURWSKL";
    goto LABEL_16;
  }
  v10 = 5;
LABEL_17:
  v77 = v10;
  v11 = 0;
  v12 = (float)*((unsigned __int8 *)this + 76);
  v1.n64_u32[0] = *((_DWORD *)this + 11);
  v13 = *((float *)this + 10);
  v14 = *((float *)this + 9) - v1.n64_f32[0];
  v90 = *((float *)this + 8);
  v92 = v13;
  v93 = v1.n64_f32[0];
  v91 = v1.n64_f32[0] + (float)(fabsf(v14) * 0.2);
  CRGBA::CRGBA((CRGBA *)&v83, 0, 0, 0, (unsigned int)(float)((float)(v12 / 255.0) * 120.0));
  CRGBA::CRGBA((CRGBA *)v89, 0, 0, 0, (unsigned int)(float)((float)(v12 / 255.0) * 120.0));
  CRGBA::CRGBA((CRGBA *)v88, 0, 0, 0, (unsigned int)(float)((float)(v12 / 255.0) * 220.0));
  CRGBA::CRGBA((CRGBA *)v87, 0, 0, 0, (unsigned int)(float)((float)(v12 / 255.0) * 220.0));
  CSprite2d::DrawRect((int)&v90, (int)&v83, (int)v89, (int)v88, v15);
  v2.n64_u32[0] = 2.0;
  v16 = *((float *)this + 9) - *((float *)this + 11);
  v17 = *((float *)this + 10);
  v83 = *((float *)this + 8);
  v85 = v17;
  v18 = fabsf(v16);
  v1.n64_f32[0] = v18 * 0.01;
  v86 = v91 + vmax_f32(v1, v2).n64_f32[0];
  v84 = v86 + (float)((float)((float)v77 / 6.0) * v18);
  CRGBA::CRGBA((CRGBA *)v89, 0, 0, 0, (unsigned int)(float)((float)(v12 / 255.0) * 120.0));
  CRGBA::CRGBA((CRGBA *)v88, 0, 0, 0, (unsigned int)(float)((float)(v12 / 255.0) * 120.0));
  CRGBA::CRGBA((CRGBA *)v87, 0, 0, 0, (unsigned int)(float)((float)(v12 / 255.0) * 220.0));
  CRGBA::CRGBA((CRGBA *)v82, 0, 0, 0, (unsigned int)(float)((float)(v12 / 255.0) * 220.0));
  CSprite2d::DrawRect((int)&v83, (int)v89, (int)v88, (int)v87, v19);
  v20 = v84;
  v21 = v86;
  CFont::SetFontStyle(0, v22);
  CFont::SetOrientation((CFont *)((char *)&stderr + 1), v23);
  CFont::SetEdge((CFont *)((char *)&stderr + 1), v24);
  CRGBA::CRGBA((CRGBA *)v81, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)((float)(v12 / 255.0) * 255.0));
  CFont::SetColor();
  *(_DWORD *)v76 = (unsigned int)(float)((float)(v12 / 255.0) * 255.0);
  CRGBA::CRGBA((CRGBA *)v80, 0, 0, 0, v76[0]);
  CFont::SetDropColor();
  CFont::SetProportional((CFont *)((char *)&stderr + 1), v25);
  CFont::SetScale(COERCE_CFONT_(fabsf(v91 - v93) * 0.035), v26);
  v27 = v20 - v21;
  v28 = v90;
  v29 = v91 + v93;
  v31 = fabsf(v27) * 0.075;
  v32 = COERCE_FLOAT(CFont::GetHeight(0, v30)) * 0.5;
  v33 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"FEH_STA");
  v35 = (CFont *)CFont::PrintString(COERCE_CFONT_(v31 + v28), (float)(v29 * 0.5) - v32, v33, v34);
  CFont::RenderFontBuffer(v35);
  CFont::SetOrientation((CFont *)((char *)&stderr + 2), v36);
  CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v37);
  CFont::SetScale(COERCE_CFONT_(fabsf(v91 - v93) * 0.0275), v38);
  sub_5E6BC0(&gString, "DAY_%d", (unsigned __int8)CClock::CurrentDay);
  v39 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)&gString);
  v40 = v92;
  v41 = v91 + v93;
  v43 = COERCE_FLOAT(CFont::GetHeight(0, v42));
  v45 = (CFont *)CFont::PrintString(COERCE_CFONT_(v40 - v31), (float)(v41 * 0.5) - (float)(v43 * 0.5), v39, v44);
  CFont::RenderFontBuffer(v45);
  v46 = v83;
  v47 = v31 + v86;
  v48 = v85;
  v49 = fabsf((float)(v84 - v31) - (float)(v31 + v86)) / (float)v77;
  v50 = v49 * 0.04;
  CFont::SetScale(COERCE_CFONT_(v49 * 0.04), v51);
  CFont::SetOrientation((CFont *)((char *)&stderr + 1), v52);
  v53 = v31 + v46;
  v54 = fabsf((float)(v48 - v31) - (float)(v31 + v46)) * 0.5;
  CFont::SetWrapx(COERCE_CFONT_(v53 + v54), v55);
  do
  {
    v56 = (CFont *)CText::Get((CText *)TheText, *((CKeyGen **)v95 + v11));
    v58 = COERCE_FLOAT(CFont::GetStringWidth(v56, (unsigned __int16 *)((char *)&stderr + 1), 0, v57));
    if ( v58 > v54 )
    {
      v50 = v50 * (float)(v54 / v58);
      CFont::SetScale((CFont *)LODWORD(v50), v59);
    }
    ++v11;
  }
  while ( v11 < v77 );
  v60 = 0;
  v75 = (char *)HIDWORD(v96);
  v61 = LOWORD(v53);
  do
  {
    CStats::GetStatValue((CStats *)*((unsigned __int16 *)v94 + 2 * v60), v61);
    if ( v60 == 5 && !strcasecmp(v75, "CURWSKL") )
    {
      SkillStatIndex = CWeaponInfo::GetSkillStatIndex();
      v64 = (float *)((char *)&CStats::StatReactionValue + 4 * SkillStatIndex);
      v65 = *(v64 - 23);
      v66 = *(v64 - 57);
      v67 = COERCE_FLOAT(
              CStats::GetStatValue(
                (CStats *)(unsigned __int16)SkillStatIndex,
                (unsigned __int16)&CStats::StatReactionValue));
      if ( v67 <= 999.0 )
        floorf((float)(v67 + (float)(*(v64 - 57) * 0.1)) / (float)(v65 * v66));
    }
    v68 = COERCE_FLOAT(CFont::GetHeight(0, v62));
    v69 = (CFont *)CText::Get((CText *)TheText, *((CKeyGen **)v95 + v60));
    CFont::PrintString(
      (CFont *)LODWORD(v53),
      (float)(v47 + (float)(v49 * (float)v60)) + (float)((float)(v49 - v68) * 0.5),
      v69,
      v70);
    CFont::GetHeight(0, v71);
    CRGBA::CRGBA((CRGBA *)v79, 0xC8u, 0xC8u, 0xC8u, v76[0]);
    CRGBA::CRGBA((CRGBA *)v78, 0, 0, 0, 0);
    CSprite2d::DrawBarChart();
    result = v77;
    ++v60;
  }
  while ( v60 < v77 );
  return result;
}


// ============================================================

// Address: 0x2c8bc4
// Original: _ZN17CWidgetVitalStatsD0Ev
// Demangled: CWidgetVitalStats::~CWidgetVitalStats()
void __fastcall CWidgetVitalStats::~CWidgetVitalStats(CWidgetVitalStats *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2c8bd4
// Original: _ZN17CWidgetVitalStats7GetNameEv
// Demangled: CWidgetVitalStats::GetName(void)
int __fastcall CWidgetVitalStats::GetName(CWidgetVitalStats *this)
{
  return 2919384;
}


// ============================================================

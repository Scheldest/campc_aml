
// Address: 0x18ea40
// Original: j__ZN17CWidgetPlayerInfo10DrawWantedEv
// Demangled: CWidgetPlayerInfo::DrawWanted(void)
// attributes: thunk
int __fastcall CWidgetPlayerInfo::DrawWanted(CWidgetPlayerInfo *this)
{
  return _ZN17CWidgetPlayerInfo10DrawWantedEv(this);
}


// ============================================================

// Address: 0x193efc
// Original: j__ZN17CWidgetPlayerInfo14DrawWeaponIconEP4CPed5CRectf
// Demangled: CWidgetPlayerInfo::DrawWeaponIcon(CPed *,CRect,float)
// attributes: thunk
int __fastcall CWidgetPlayerInfo::DrawWeaponIcon(int a1, int a2, float a3, int a4, int a5, int a6, float a7)
{
  return _ZN17CWidgetPlayerInfo14DrawWeaponIconEP4CPed5CRectf(a1, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x194208
// Original: j__ZN17CWidgetPlayerInfoC2EPKcRK14WidgetPosition
// Demangled: CWidgetPlayerInfo::CWidgetPlayerInfo(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetPlayerInfo::CWidgetPlayerInfo()
{
  return _ZN17CWidgetPlayerInfoC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x19827c
// Original: j__ZN17CWidgetPlayerInfo15RenderBreathBarEif
// Demangled: CWidgetPlayerInfo::RenderBreathBar(int,float)
// attributes: thunk
int __fastcall CWidgetPlayerInfo::RenderBreathBar(CWidgetPlayerInfo *this, int a2, float a3)
{
  return _ZN17CWidgetPlayerInfo15RenderBreathBarEif(this, a2, a3);
}


// ============================================================

// Address: 0x19a308
// Original: j__ZN17CWidgetPlayerInfo15RenderHealthBarEif
// Demangled: CWidgetPlayerInfo::RenderHealthBar(int,float)
// attributes: thunk
int __fastcall CWidgetPlayerInfo::RenderHealthBar(CWidgetPlayerInfo *this, int a2, float a3)
{
  return _ZN17CWidgetPlayerInfo15RenderHealthBarEif(this, a2, a3);
}


// ============================================================

// Address: 0x19ed7c
// Original: j__ZN17CWidgetPlayerInfo14RenderArmorBarEif
// Demangled: CWidgetPlayerInfo::RenderArmorBar(int,float)
// attributes: thunk
int __fastcall CWidgetPlayerInfo::RenderArmorBar(CWidgetPlayerInfo *this, int a2, float a3)
{
  return _ZN17CWidgetPlayerInfo14RenderArmorBarEif(this, a2, a3);
}


// ============================================================

// Address: 0x1a09d0
// Original: j__ZN17CWidgetPlayerInfo8DrawAmmoEP4CPed5CRectf
// Demangled: CWidgetPlayerInfo::DrawAmmo(CPed *,CRect,float)
// attributes: thunk
int __fastcall CWidgetPlayerInfo::DrawAmmo(int a1, int a2, int a3, int a4, int a5, int a6, float a7)
{
  return _ZN17CWidgetPlayerInfo8DrawAmmoEP4CPed5CRectf(a1, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x1a0e6c
// Original: j__ZN17CWidgetPlayerInfo23PassesDisplayConditionsEv
// Demangled: CWidgetPlayerInfo::PassesDisplayConditions(void)
// attributes: thunk
int __fastcall CWidgetPlayerInfo::PassesDisplayConditions(CWidgetPlayerInfo *this)
{
  return _ZN17CWidgetPlayerInfo23PassesDisplayConditionsEv(this);
}


// ============================================================

// Address: 0x2bca60
// Original: _ZN17CWidgetPlayerInfoC2EPKcRK14WidgetPosition
// Demangled: CWidgetPlayerInfo::CWidgetPlayerInfo(char const*,WidgetPosition const&)
int __fastcall CWidgetPlayerInfo::CWidgetPlayerInfo(int a1, int a2, int a3)
{
  _BYTE v5[20]; // [sp+4h] [bp-14h] BYREF

  CWidget::CWidget(a1, a2, a3, 1026, 14);
  *(_QWORD *)(a1 + 152) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 160) = 0x49742400C9742400LL;
  *(_DWORD *)a1 = &off_664108;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 176));
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 176), "SwipeArrow", 1);
  CRGBA::CRGBA((CRGBA *)v5, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  CWidget::CreateHoldEffect();
  *(_BYTE *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 140) = 1056964608;
  return a1;
}


// ============================================================

// Address: 0x2bcb20
// Original: _ZN17CWidgetPlayerInfo6UpdateEv
// Demangled: CWidgetPlayerInfo::Update(void)
int __fastcall CWidgetPlayerInfo::Update(CWidgetPlayerInfo *this)
{
  float v2; // s6
  float v3; // s2
  float v4; // s0
  int *v5; // r0
  float v6; // s8
  float v7; // s10
  float *v8; // r0
  float v9; // s4
  float v10; // s10
  float v11; // s6
  float v12; // s8
  float v13; // s2
  float v14; // s6
  float v15; // s2
  float v16; // s0
  int result; // r0

  CWidget::Update(this);
  CWidget::ManageAlpha(this);
  v2 = *((float *)this + 8);
  v3 = *((float *)this + 10);
  v4 = *((float *)this + 11);
  v5 = dword_2BCC2C;
  v6 = fabsf(v3 - v2);
  if ( *(float *)&CDraw::ms_fAspectRatio > 1.9 )
    v5 = &dword_2BCC2C[1];
  v7 = *(float *)v5;
  v8 = (float *)*((_DWORD *)this + 34);
  v9 = 1.0 - v7;
  v10 = v7 * v6;
  v11 = v2 + (float)(v6 * v9);
  *((float *)this + 38) = v11;
  *((float *)this + 39) = v4 + v10;
  *((float *)this + 40) = v3;
  *((float *)this + 41) = v4;
  if ( v8 )
  {
    v12 = v3 - v11;
    v13 = v11 + v3;
    v14 = fabsf(v12);
    v15 = v13 * 0.5;
    v16 = (float)((float)(v4 + v10) + v4) * 0.5;
    v8[3] = v15 - (float)(v14 * 0.52);
    v8[4] = (float)(v14 * 0.52) + v16;
    v8[5] = v15 + (float)(v14 * 0.52);
    v8[6] = v16 - (float)(v14 * 0.52);
    if ( *((float *)this + 17) >= 0.5 || CHID::Use360ClassicVitalStatsHack((CHID *)v8) == 1 )
      *(_DWORD *)(*((_DWORD *)this + 34) + 28) = 0;
  }
  *((_BYTE *)this + 180) = 0;
  result = dword_6F3A64;
  if ( dword_6F3A64 )
  {
    result = CWidget::GetEnabled((CWidget *)dword_6F3A64);
    if ( result == 1 )
    {
      result = 1;
      *((_BYTE *)this + 180) = 1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x2bcc3c
// Original: _ZN17CWidgetPlayerInfo21CoordsAreInsideWidgetERK9CVector2Db
// Demangled: CWidgetPlayerInfo::CoordsAreInsideWidget(CVector2D const&,bool)
bool __fastcall CWidgetPlayerInfo::CoordsAreInsideWidget(float *a1, float *a2)
{
  float v2; // s0
  _BOOL4 result; // r0

  result = 0;
  if ( *a2 >= a1[38] && *a2 <= a1[40] )
  {
    v2 = a2[1];
    if ( v2 >= a1[41] && v2 <= a1[39] )
      return 1;
  }
  return result;
}


// ============================================================

// Address: 0x2bcc88
// Original: _ZN17CWidgetPlayerInfo4DrawEv
// Demangled: CWidgetPlayerInfo::Draw(void)
int __fastcall CWidgetPlayerInfo::Draw(CWidgetPlayerInfo *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d8
  int v4; // r1
  int v5; // r1
  int PlayerPed; // r0
  int v7; // r5
  int v8; // r0
  bool v9; // zf
  void *v10; // r1
  int v11; // r0
  int v12; // r6
  int v13; // r0
  bool v14; // zf
  int v15; // r0
  bool v16; // zf
  int v17; // r0
  bool v18; // zf
  int v19; // r0
  bool v20; // zf
  int v21; // r0
  bool v22; // zf
  float v23; // s0
  float v24; // s2
  float v25; // s4
  float v26; // s8
  float v27; // s6
  float v28; // s10
  float v29; // s0
  float v30; // s4
  float v31; // s2
  float v32; // s6
  float v33; // s0
  float v34; // s8
  int v35; // r8
  unsigned __int8 v36; // r1
  unsigned __int8 v37; // r1
  CFont *v38; // r0
  unsigned __int8 v39; // r1
  float v40; // r1
  signed __int8 v41; // r1
  float v42; // s0
  float v43; // r1
  unsigned __int16 *v44; // r3
  float v45; // s0
  unsigned __int8 v46; // r1
  unsigned __int8 v47; // r2
  unsigned __int8 v48; // r1
  float v49; // r1
  CFont *v50; // r0
  signed __int8 v51; // r1
  signed __int8 v52; // r1
  float v53; // r1
  CHudColours *v54; // r5
  unsigned __int8 v55; // r2
  unsigned __int16 *v56; // r3
  float v57; // s0
  CHoldEffect *v58; // r0
  float v59; // s0
  int v61; // r0
  bool v62; // zf
  float v63; // s16
  char v64; // [sp+10h] [bp-298h] BYREF
  char v65; // [sp+14h] [bp-294h] BYREF
  char v66[4]; // [sp+18h] [bp-290h] BYREF
  char v67[4]; // [sp+1Ch] [bp-28Ch] BYREF
  char v68[4]; // [sp+20h] [bp-288h] BYREF
  unsigned __int16 v69[2]; // [sp+24h] [bp-284h] BYREF
  float v70; // [sp+28h] [bp-280h]
  float v71; // [sp+2Ch] [bp-27Ch]
  float v72; // [sp+30h] [bp-278h]
  char v73[200]; // [sp+1B4h] [bp-F4h] BYREF
  int v74; // [sp+27Ch] [bp-2Ch]

  emu_GammaSet(1u);
  v4 = *((_DWORD *)this + 30);
  if ( this == (CWidgetPlayerInfo *)CWidget::m_pInitialTouchWidget[v4] )
  {
    CTouchInterface::GetTouchPosition((CTouchInterface *)v69, v4);
    v5 = *((_DWORD *)this + 30);
    if ( *(float *)v69 < (float)(*(float *)&CWidget::m_vecTouchAnchor[2 * v5] - CWidget::SWIPE_DISTANCE) )
      *((_DWORD *)this + 42) = 1059648963;
    CTouchInterface::GetTouchPosition((CTouchInterface *)v69, v5);
    if ( *(float *)v69 > (float)(*(float *)&CWidget::m_vecTouchAnchor[2 * *((_DWORD *)this + 30)]
                               + CWidget::SWIPE_DISTANCE) )
      *((_DWORD *)this + 43) = 1059648963;
  }
  v2.n64_u32[0] = 0;
  v1.n64_f32[0] = *((float *)this + 42) - CWidget::m_fElapsedTime;
  *((_DWORD *)this + 42) = vmax_f32(v1, v2).n64_u32[0];
  PlayerPed = FindPlayerPed(-1);
  v7 = PlayerPed;
  if ( !PlayerPed )
    goto LABEL_43;
  v8 = *(_DWORD *)(PlayerPed + 1444);
  v9 = v8 == 0;
  if ( !v8 )
    v9 = *(_DWORD *)(v7 + 1472) == 0;
  if ( v9 && !*(_DWORD *)(v7 + 1500) )
  {
    v13 = *(_DWORD *)(v7 + 1528);
    v14 = v13 == 0;
    if ( !v13 )
      v14 = *(_DWORD *)(v7 + 1556) == 0;
    if ( v14 )
    {
      v15 = *(_DWORD *)(v7 + 1584);
      v16 = v15 == 0;
      if ( !v15 )
        v16 = *(_DWORD *)(v7 + 1612) == 0;
      if ( v16 )
      {
        v17 = *(_DWORD *)(v7 + 1640);
        v18 = v17 == 0;
        if ( !v17 )
          v18 = *(_DWORD *)(v7 + 1668) == 0;
        if ( v18 )
        {
          v19 = *(_DWORD *)(v7 + 1696);
          v20 = v19 == 0;
          if ( !v19 )
            v20 = *(_DWORD *)(v7 + 1724) == 0;
          if ( v20 )
          {
            v21 = *(_DWORD *)(v7 + 1752);
            v22 = v21 == 0;
            if ( !v21 )
              v22 = *(_DWORD *)(v7 + 1780) == 0;
            if ( v22 )
              goto LABEL_43;
          }
        }
      }
    }
  }
  if ( CPed::IsPedShootable((CPed *)v7) != 1
    || *(_DWORD *)(v7 + 1100) == 36
    || CWorld::Players[101 * CWorld::FindPlayerSlotWithPedPointer((CWorld *)v7, v10) + 44]
    || CDarkel::FrenzyOnGoing(0)
    || *(_DWORD *)(v7 + 256)
    || CPedIntelligence::GetTaskJetPack(*(CPedIntelligence **)(v7 + 1088))
    || *(_DWORD *)(v7 + 1824)
    || (v11 = *(_DWORD *)(v7 + 1092), (*(_WORD *)(v11 + 52) & 8) != 0) )
  {
LABEL_43:
    v12 = 1;
  }
  else
  {
    v12 = 1;
    if ( (*(_WORD *)(v11 + 52) & 0x800) == 0 && !*(_BYTE *)(v11 + 133) )
    {
      v12 = 1;
      switch ( word_95275C )
      {
        case 7:
        case 8:
        case 34:
        case 39:
        case 40:
        case 42:
        case 46:
        case 51:
        case 52:
          break;
        default:
          v12 = 0;
          break;
      }
    }
  }
  v23 = *((float *)this + 42);
  if ( v23 > 0.0 )
  {
    v24 = *((float *)this + 38);
    v25 = *((float *)this + 39);
    v26 = *((float *)this + 41);
    v27 = *((float *)this + 40) - v24;
    v71 = v24;
    v28 = fabsf(v25 - v26) * 0.1;
    v72 = v26 + v28;
    *(float *)v69 = v24 + (float)(fabsf(v27) * -0.2);
    v70 = v25 - v28;
    if ( v12 == 1 )
      CRGBA::CRGBA((CRGBA *)v73, 0xFFu, 0, 0, (unsigned int)(float)(v23 * (float)*((unsigned __int8 *)this + 76)));
    else
      CRGBA::CRGBA(
        (CRGBA *)v73,
        0xFFu,
        0xFFu,
        0xFFu,
        (unsigned int)(float)(v23 * (float)*((unsigned __int8 *)this + 76)));
    CSprite2d::Draw((char *)this + 176, v69, v73);
  }
  v29 = *((float *)this + 43) - CWidget::m_fElapsedTime;
  if ( v29 > 0.0 )
    v2.n64_f32[0] = *((float *)this + 43) - CWidget::m_fElapsedTime;
  *((_DWORD *)this + 43) = v2.n64_u32[0];
  if ( v29 > 0.0 )
  {
    v30 = *((float *)this + 40);
    v31 = *((float *)this + 39);
    v32 = *((float *)this + 41);
    v33 = v30 - *((float *)this + 38);
    v71 = v30;
    v34 = fabsf(v31 - v32) * 0.1;
    v72 = v32 + v34;
    *(float *)v69 = v30 + (float)(fabsf(v33) * 0.2);
    v70 = v31 - v34;
    if ( v12 == 1 )
      CRGBA::CRGBA(
        (CRGBA *)v73,
        0xFFu,
        0,
        0,
        (unsigned int)(float)(v2.n64_f32[0] * (float)*((unsigned __int8 *)this + 76)));
    else
      CRGBA::CRGBA(
        (CRGBA *)v73,
        0xFFu,
        0xFFu,
        0xFFu,
        (unsigned int)(float)(v2.n64_f32[0] * (float)*((unsigned __int8 *)this + 76)));
    CSprite2d::Draw((char *)this + 176, v69, v73);
  }
  if ( !byte_98F111 || !CTheScripts::bDisplayHud )
    goto LABEL_82;
  v35 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  CFont::SetBackground(0, 0, 0x94u);
  CFont::SetProportional(0, v36);
  v38 = (CFont *)&byte_5;
  if ( CFont::UsingEFIGSLanguage )
    v38 = (CFont *)((char *)&stderr + 3);
  CFont::SetFontStyle(v38, v37);
  CFont::SetOrientation((CFont *)((char *)&stderr + 2), v39);
  CFont::SetRightJustifyWrap(0, v40);
  CFont::SetEdge((CFont *)((char *)&stderr + 1), v41);
  v42 = fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.006;
  CFont::SetScale((CFont *)LODWORD(v42), v43);
  CRGBA::CRGBA((CRGBA *)v68, 0, 0, 0, *((_BYTE *)this + 76));
  CFont::SetDropColor();
  CHudColours::GetRGB((CHudColours *)v67, (unsigned __int8)HudColour, 5u);
  CFont::SetColor();
  sub_5E6BC0(
    v73,
    "%02d:%02d",
    (unsigned __int8)CClock::ms_nGameClockHours,
    (unsigned __int8)CClock::ms_nGameClockMinutes);
  AsciiToGxtChar(v73, v69);
  if ( *((_BYTE *)this + 180) )
    v45 = *((float *)this + 10);
  else
    v45 = *((float *)this + 8) + (float)(fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.55);
  CFont::PrintString(
    (CFont *)LODWORD(v45),
    *((float *)this + 11) + (float)(fabsf(*((float *)this + 9) - *((float *)this + 11)) * 0.05),
    (CFont *)v69,
    v44);
  CFont::SetProportional(0, v46);
  CFont::SetBackground(0, 0, v47);
  CFont::SetOrientation((CFont *)((char *)&stderr + 2), v48);
  CFont::SetRightJustifyWrap(0, v49);
  v50 = (CFont *)&byte_5;
  if ( CFont::UsingEFIGSLanguage )
    v50 = (CFont *)((char *)&stderr + 3);
  CFont::SetFontStyle(v50, CFont::UsingEFIGSLanguage);
  CFont::SetDropShadowPosition(0, v51);
  CRGBA::CRGBA((CRGBA *)v66, 0, 0, 0, *((_BYTE *)this + 76));
  CFont::SetDropColor();
  CFont::SetEdge((CFont *)((char *)&stderr + 1), v52);
  CFont::SetScale(COERCE_CFONT_(fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.00525), v53);
  if ( CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus + 47] < 0 )
  {
    v54 = (CHudColours *)&v64;
    v55 = 0;
  }
  else
  {
    v54 = (CHudColours *)&v65;
    v55 = 1;
  }
  CHudColours::GetRGB(v54, (unsigned __int8)HudColour, v55);
  CFont::SetColor();
  sub_5E6BC0(v73, (const char *)&off_2BD5D0, CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus + 47]);
  AsciiToGxtChar(v73, v69);
  if ( CWorld::Players[101 * (unsigned __int8)CWorld::PlayerInFocus + 47] >= (int)&unk_989680 )
    CFont::SetScale(
      COERCE_CFONT_(fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.00485),
      COERCE_FLOAT(&unk_989680));
  CFont::PrintString(
    (CFont *)LODWORD(v45),
    *((float *)this + 11) + (float)(fabsf(*((float *)this + 9) - *((float *)this + 11)) * 0.255),
    (CFont *)v69,
    v56);
  if ( !*((_BYTE *)this + 180) )
  {
    CWidgetPlayerInfo::RenderHealthBar(
      this,
      *(int *)&CWorld::PlayerInFocus,
      *((float *)this + 11) + (float)(fabsf(*((float *)this + 9) - *((float *)this + 11)) * 0.455));
    CWidgetPlayerInfo::RenderArmorBar(
      this,
      (unsigned __int8)CWorld::PlayerInFocus,
      *((float *)this + 11) + (float)(fabsf(*((float *)this + 9) - *((float *)this + 11)) * 0.565));
    if ( dword_96B830 )
    {
      CWidgetPlayerInfo::RenderHealthBar(
        this,
        1,
        *((float *)this + 11) + (float)(fabsf(*((float *)this + 9) - *((float *)this + 11)) * 1.455));
      CWidgetPlayerInfo::RenderArmorBar(
        this,
        1,
        *((float *)this + 11) + (float)(fabsf(*((float *)this + 9) - *((float *)this + 11)) * 1.565));
    }
    if ( CPedIntelligence::GetTaskSwim(*(CPedIntelligence **)(v35 + 1088)) )
      goto LABEL_74;
    if ( *(unsigned __int8 *)(v35 + 1157) << 31 )
    {
      v61 = *(_DWORD *)(v35 + 1424);
      v62 = v61 == 0;
      if ( v61 )
        v62 = *(unsigned __int8 *)(v61 + 69) << 31 == 0;
      if ( !v62 && (*(_BYTE *)(v61 + 1071) & 0x40) != 0 )
        goto LABEL_74;
    }
    v63 = *(float *)(*(_DWORD *)(v35 + 1092) + 68);
    if ( v63 < COERCE_FLOAT(CStats::GetFatAndMuscleModifier())
      && *((_DWORD *)this + 37) + 500 > (unsigned int)CTimer::m_snTimeInMilliseconds )
    {
LABEL_74:
      CWidgetPlayerInfo::RenderBreathBar(
        this,
        *(int *)&CWorld::PlayerInFocus,
        *((float *)this + 11) + (float)(fabsf(*((float *)this + 9) - *((float *)this + 11)) * 0.675));
      *((_DWORD *)this + 37) = CTimer::m_snTimeInMilliseconds;
    }
    CWidgetPlayerInfo::DrawWeaponIcon(
      *((_DWORD *)this + 40),
      v35,
      *((float *)this + 38),
      *((_DWORD *)this + 39),
      *((_DWORD *)this + 40),
      *((_DWORD *)this + 41),
      (float)*((unsigned __int8 *)this + 76));
    if ( dword_96B830 )
    {
      v57 = fabsf(*((float *)this + 9) - *((float *)this + 11));
      CWidgetPlayerInfo::DrawWeaponIcon(
        *((_DWORD *)this + 40),
        dword_96B830,
        *((float *)this + 38),
        COERCE_INT(*((float *)this + 39) + v57),
        *((_DWORD *)this + 40),
        COERCE_INT(*((float *)this + 41) + v57),
        (float)*((unsigned __int8 *)this + 76));
    }
    v58 = (CHoldEffect *)*((_DWORD *)this + 34);
    if ( v58 )
      CHoldEffect::Draw(v58);
    CWidgetPlayerInfo::DrawAmmo(
      (int)this,
      v35,
      *((_DWORD *)this + 38),
      *((_DWORD *)this + 39),
      *((_DWORD *)this + 40),
      *((_DWORD *)this + 41),
      (float)*((unsigned __int8 *)this + 76));
    if ( dword_96B830 )
    {
      v59 = fabsf(*((float *)this + 9) - *((float *)this + 11));
      CWidgetPlayerInfo::DrawAmmo(
        (int)this,
        dword_96B830,
        *((_DWORD *)this + 38),
        COERCE_INT(*((float *)this + 39) + v59),
        *((_DWORD *)this + 40),
        COERCE_INT(*((float *)this + 41) + v59),
        (float)*((unsigned __int8 *)this + 76));
    }
    CWidgetPlayerInfo::DrawWanted(this);
LABEL_82:
    emu_GammaSet(0);
  }
  return _stack_chk_guard - v74;
}


// ============================================================

// Address: 0x2bd610
// Original: _ZN17CWidgetPlayerInfo15RenderHealthBarEif
// Demangled: CWidgetPlayerInfo::RenderHealthBar(int,float)
unsigned int __fastcall CWidgetPlayerInfo::RenderHealthBar(CWidgetPlayerInfo *this, int a2, float a3)
{
  unsigned int result; // r0
  _BYTE v4[4]; // [sp+18h] [bp-50h] BYREF
  _BYTE v5[76]; // [sp+1Ch] [bp-4Ch] BYREF

  if ( CHud::m_ItemToFlash != 4
    || (result = CTimer::m_snTimeInMilliseconds % 0x15Eu, CTimer::m_snTimeInMilliseconds % 0x15Eu >= 0x97) )
  {
    if ( (int)*(float *)(CWorld::Players[101 * a2] + 1348) > 9
      || (result = CTimer::m_snTimeInMilliseconds % 0x15Eu, CTimer::m_snTimeInMilliseconds % 0x15Eu >= 0x97) )
    {
      CStats::GetStatValue((CStats *)&off_18, a2);
      CHudColours::GetRGB((CHudColours *)v5, (unsigned __int8)HudColour, 0);
      CRGBA::CRGBA((CRGBA *)v4, 0, 0, 0, 0);
      return CSprite2d::DrawBarChart();
    }
  }
  return result;
}


// ============================================================

// Address: 0x2bd7c8
// Original: _ZN17CWidgetPlayerInfo14RenderArmorBarEif
// Demangled: CWidgetPlayerInfo::RenderArmorBar(int,float)
int __fastcall CWidgetPlayerInfo::RenderArmorBar(CWidgetPlayerInfo *this, int a2, float a3)
{
  int result; // r0
  _BYTE v4[4]; // [sp+18h] [bp-48h] BYREF
  _BYTE v5[68]; // [sp+1Ch] [bp-44h] BYREF

  if ( CHud::m_ItemToFlash == 3 )
  {
    if ( CTimer::m_snTimeInMilliseconds % 0x15Eu < 0x97 )
      return result;
  }
  else if ( *(float *)(CWorld::Players[101 * a2] + 1356) <= 1.0 )
  {
    return result;
  }
  CHudColours::GetRGB((CHudColours *)v5, (unsigned __int8)HudColour, 5u);
  CRGBA::CRGBA((CRGBA *)v4, 0, 0, 0, 0);
  return CSprite2d::DrawBarChart();
}


// ============================================================

// Address: 0x2bd95c
// Original: _ZN17CWidgetPlayerInfo15RenderBreathBarEif
// Demangled: CWidgetPlayerInfo::RenderBreathBar(int,float)
unsigned int __fastcall CWidgetPlayerInfo::RenderBreathBar(CWidgetPlayerInfo *this, int a2, float a3)
{
  unsigned int result; // r0
  _BYTE v5[4]; // [sp+18h] [bp-48h] BYREF
  _BYTE v6[68]; // [sp+1Ch] [bp-44h] BYREF

  if ( CHud::m_ItemToFlash != 10
    || (result = CTimer::m_snTimeInMilliseconds % 0x15Eu, CTimer::m_snTimeInMilliseconds % 0x15Eu >= 0x97) )
  {
    CStats::GetFatAndMuscleModifier();
    CRGBA::CRGBA((CRGBA *)v6, 0x89u, 0xA2u, 0xC0u, *((_BYTE *)this + 76));
    CRGBA::CRGBA((CRGBA *)v5, 0, 0, 0, 0);
    return CSprite2d::DrawBarChart();
  }
  return result;
}


// ============================================================

// Address: 0x2bda90
// Original: _ZN17CWidgetPlayerInfo14DrawWeaponIconEP4CPed5CRectf
// Demangled: CWidgetPlayerInfo::DrawWeaponIcon(CPed *,CRect,float)
int __fastcall CWidgetPlayerInfo::DrawWeaponIcon(int a1, int a2, float a3, float a4, __int64 a5, float a6)
{
  const char *v6; // r1
  int WeaponInfo; // r4
  TextureDatabaseRuntime *Database; // r0
  TextureDatabaseRuntime *v9; // r1
  _DWORD *v10; // r4
  float v11; // s2
  float v12; // r3
  float v14; // [sp+2Ch] [bp-84h] BYREF
  float v15; // [sp+30h] [bp-80h]
  __int64 v16; // [sp+34h] [bp-7Ch]
  char v17[32]; // [sp+3Ch] [bp-74h] BYREF
  char v18[64]; // [sp+5Ch] [bp-54h] BYREF
  int v19; // [sp+9Ch] [bp-14h]

  v15 = a4;
  v16 = a5;
  v14 = a3;
  RwRenderStateSet(9, 2);
  WeaponInfo = CWeaponInfo::GetWeaponInfo();
  if ( *(int *)(WeaponInfo + 12) < 1 )
  {
    CRGBA::CRGBA((CRGBA *)v18, 0xFFu, 0xFFu, 0xFFu, (unsigned int)a6);
    CSprite2d::Draw(&CHud::Sprites, &v14, v18);
  }
  else
  {
    Database = (TextureDatabaseRuntime *)TextureDatabaseRuntime::GetDatabase((TextureDatabaseRuntime *)"gta3", v6);
    TextureDatabaseRuntime::Register(Database, v9);
    strcpy(v17, (const char *)(CModelInfo::ms_modelInfoPtrs[*(_DWORD *)(WeaponInfo + 12)] + 8));
    sub_5E6B74(v18, 64, "%sicon", v17);
    v10 = (_DWORD *)RwTextureRead(v18, &byte_61CD7E);
    if ( v10
      || ((*((void (__fastcall **)(char *))RwEngineInstance + 71))(v17),
          sub_5E6B74(v18, 64, "%sicon", v17),
          (v10 = (_DWORD *)RwTextureRead(v18, &byte_61CD7E)) != 0) )
    {
      RwRenderStateSet(6, 0);
      RwRenderStateSet(1, *v10);
      v11 = fabsf(v15 - *((float *)&v16 + 1)) * 0.5;
      v12 = fabsf(*(float *)&v16 - v14) * 0.5;
      CSprite::RenderOneXLUSprite(
        COERCE_CSPRITE_(v14 + v12),
        *((float *)&v16 + 1) + v11,
        10.0,
        v12,
        v11,
        COERCE_FLOAT(255),
        0xFFu,
        0xFFu,
        0xFFu,
        1.0,
        COERCE_FLOAT((unsigned __int8)(int)a6),
        0,
        0,
        0.0,
        0.0,
        v14);
      RwRenderStateSet(8, 0);
    }
  }
  return _stack_chk_guard - v19;
}


// ============================================================

// Address: 0x2bdc48
// Original: _ZN17CWidgetPlayerInfo8DrawAmmoEP4CPed5CRectf
// Demangled: CWidgetPlayerInfo::DrawAmmo(CPed *,CRect,float)
CDarkel *__fastcall CWidgetPlayerInfo::DrawAmmo(int a1, char *a2, float a3, float a4, int a5, int a6, float a7)
{
  float32x2_t v7; // d0
  float32x2_t v8; // d1
  char *v13; // r0
  int v14; // r4
  CDarkel *result; // r0
  char *v16; // r0
  int v17; // r3
  int v18; // r2
  unsigned __int8 v19; // r2
  unsigned __int8 v20; // r1
  float v21; // r1
  unsigned __int8 v22; // r1
  CFont *v23; // r0
  signed __int8 v24; // r1
  float v25; // s16
  float v26; // r1
  float v27; // s18
  float v28; // s20
  unsigned __int8 v29; // r3
  float v30; // r0
  float v31; // r1
  unsigned __int16 *v32; // r3
  float v33; // s0
  float v34; // s2
  _BYTE v35[4]; // [sp+8h] [bp-40h] BYREF
  _BYTE v36[60]; // [sp+Ch] [bp-3Ch] BYREF

  v7.n64_u32[0] = 1176255488;
  v13 = &a2[28 * a2[1820]];
  v14 = *((_DWORD *)v13 + 364);
  result = (CDarkel *)(v14 - *((_DWORD *)v13 + 363));
  v8.n64_f32[0] = (float)(int)result;
  if ( vmin_f32(v8, v7).n64_f32[0] != 9999.0 )
  {
    result = (CDarkel *)CDarkel::FrenzyOnGoing(result);
    if ( !result )
    {
      result = *(CDarkel **)&a2[28 * a2[1820] + 1444];
      switch ( (unsigned int)result )
      {
        case 0u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x28u:
        case 0x2Eu:
          return result;
        default:
          result = *(CDarkel **)CWeaponInfo::GetWeaponInfo();
          if ( result != (CDarkel *)&byte_5 )
          {
            result = *(CDarkel **)(CWeaponInfo::GetWeaponInfo() + 20);
            if ( (int)result >= 2 )
            {
              CPed::GetWeaponSkill((CPed *)a2);
              if ( (unsigned __int16)(*(_WORD *)(CWeaponInfo::GetWeaponInfo() + 32) - 2) > 0x3E5u )
              {
                sub_5E6BC0(&gString, (const char *)&dword_2BDF10, v14);
              }
              else
              {
                v16 = &a2[28 * a2[1820]];
                v17 = *((_DWORD *)v16 + 363);
                v18 = v14 - v17;
                if ( *((_DWORD *)v16 + 361) == 37 )
                  sub_5E6BC0(&gString, "%d-%d", v18 / 10, v17 / 10);
                else
                  sub_5E6BC0(&gString, "%d-%d", v18, v17);
              }
              AsciiToGxtChar((const char *)&gString, gGxtString);
              CFont::SetBackground(0, 0, v19);
              CFont::SetOrientation(0, v20);
              CFont::SetCentreSize(COERCE_CFONT_((float)((float)dword_9FC900 / 640.0) * 640.0), v21);
              CFont::SetProportional((CFont *)((char *)&stderr + 1), v22);
              v23 = (CFont *)byte_6;
              if ( CFont::UsingEFIGSLanguage )
                v23 = (CFont *)((char *)&stderr + 1);
              CFont::SetFontStyle(v23, CFont::UsingEFIGSLanguage);
              CFont::SetEdge((CFont *)((char *)&stderr + 1), v24);
              CHudColours::GetRGB((CHudColours *)v36, (unsigned __int8)HudColour, 3u);
              CFont::SetColor();
              CRGBA::CRGBA((CRGBA *)v35, 0, 0, 0, (unsigned int)a7);
              CFont::SetDropColor();
              v25 = fabsf(*(float *)(a1 + 40) - *(float *)(a1 + 32)) * 0.0055;
              CFont::SetScale((CFont *)LODWORD(v25), v26);
              v27 = *(float *)(a1 + 32);
              v28 = *(float *)(a1 + 40);
              v30 = COERCE_FLOAT(CFont::GetStringWidth((CFont *)gGxtString, (unsigned __int16 *)((char *)&stderr + 1), 0, v29));
              v33 = fabsf(v28 - v27) * 0.425;
              if ( v30 > v33 )
                CFont::SetScale(COERCE_CFONT_((float)(v33 / v30) * v25), v31);
              v34 = fabsf(*(float *)&a5 - a3) * 0.5 + a3;
              result = (CDarkel *)CFont::PrintString(
                                    (CFont *)LODWORD(v34),
                                    (float)(fabsf(a4 - *(float *)&a6) * 0.9) + *(float *)&a6,
                                    (CFont *)gGxtString,
                                    v32);
            }
          }
          break;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x2bdf48
// Original: _ZN17CWidgetPlayerInfo10DrawWantedEv
// Demangled: CWidgetPlayerInfo::DrawWanted(void)
int __fastcall CWidgetPlayerInfo::DrawWanted(CWidgetPlayerInfo *this)
{
  int v2; // r11
  int PlayerWanted; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r9
  unsigned __int8 v7; // r1
  unsigned __int8 v8; // r1
  CFont *v9; // r0
  float v10; // s18
  float v11; // s16
  bool v12; // r1
  float v13; // s0
  unsigned int v14; // r1
  float v15; // r8
  float v16; // s0
  float v17; // r1
  unsigned int v18; // r10
  unsigned __int16 *v19; // r3
  float v20; // s0
  float v21; // r1
  CFont *v22; // r0
  unsigned __int8 v24[4]; // [sp+1Ch] [bp-A4h]
  _BYTE v25[4]; // [sp+20h] [bp-A0h] BYREF
  _BYTE v26[4]; // [sp+24h] [bp-9Ch] BYREF
  _BYTE v27[4]; // [sp+28h] [bp-98h] BYREF
  _BYTE v28[4]; // [sp+2Ch] [bp-94h] BYREF
  unsigned __int16 v29[20]; // [sp+30h] [bp-90h] BYREF
  char v30[20]; // [sp+58h] [bp-68h] BYREF
  int v31; // [sp+6Ch] [bp-54h]

  v2 = *(_DWORD *)(FindPlayerWanted(-1) + 44);
  PlayerWanted = FindPlayerWanted(-1);
  v4 = 0;
  *(_DWORD *)v24 = *(_DWORD *)(PlayerWanted + 48);
  if ( *((_DWORD *)this + 36) == v2 )
  {
    v5 = 1;
  }
  else
  {
    *((_DWORD *)this + 36) = v2;
    v5 = 0;
  }
  if ( v2 > 0 )
    v4 = 1;
  if ( *(int *)v24 > 0 || (v5 & v4) == 1 )
  {
    v6 = 0;
    CFont::SetBackground(0, 0, v24[0]);
    CFont::SetOrientation((CFont *)((char *)&stderr + 2), v7);
    CFont::SetProportional((CFont *)((char *)&stderr + 1), v8);
    v9 = (CFont *)&byte_4;
    if ( CFont::UsingEFIGSLanguage )
      v9 = 0;
    CFont::SetFontStyle(v9, CFont::UsingEFIGSLanguage);
    strcpy(v30, "]");
    AsciiToGxtChar(v30, v29);
    v10 = *((float *)this + 9);
    v11 = *((float *)this + 10);
    v13 = v10 - COERCE_FLOAT(CFont::GetHeight(0, v12));
    v14 = (unsigned int)&CDraw::ms_fAspectRatio;
    if ( *(float *)&CDraw::ms_fAspectRatio > 1.9 )
      v13 = v13 + -30.0;
    v15 = v13;
    while ( 1 )
    {
      CFont::SetEdge((CFont *)((char *)&stderr + 1), v14);
      CRGBA::CRGBA((CRGBA *)v28, 0, 0, 0, *((_BYTE *)this + 76));
      CFont::SetDropColor();
      v16 = fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.007;
      CFont::SetScale((CFont *)LODWORD(v16), v17);
      if ( v2 > v6 )
      {
        v18 = CTimer::m_snTimeInMilliseconds;
        if ( v18 > *(_DWORD *)(FindPlayerWanted(-1) + 12) + 2000 )
          break;
        v14 = CTimer::m_snTimeInMilliseconds / 0x15Eu;
        if ( CTimer::m_snTimeInMilliseconds % 0x15Eu >= 0x97 )
          break;
      }
      if ( *(int *)v24 > v6 )
      {
        CRGBA::CRGBA(
          (CRGBA *)v26,
          (unsigned int)(float)((float)(unsigned __int8)byte_992079 * 0.8),
          (unsigned int)(float)((float)(unsigned __int8)word_99207A * 0.8),
          (unsigned int)(float)((float)HIBYTE(word_99207A) * 0.8),
          *((_BYTE *)this + 76));
        CFont::SetColor();
        goto LABEL_21;
      }
      if ( v2 <= v6 )
      {
        CFont::SetEdge(0, v14);
        CRGBA::CRGBA((CRGBA *)v25, 0, 0, 0, (unsigned int)(float)((float)*((unsigned __int8 *)this + 76) * 0.7));
        CFont::SetColor();
        v20 = fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.0075;
        CFont::SetScale((CFont *)LODWORD(v20), v21);
        goto LABEL_21;
      }
LABEL_22:
      ++v6;
      v11 = v11 + (float)(fabsf(*((float *)this + 10) - *((float *)this + 8)) * -0.15);
      if ( v6 == 6 )
      {
        CFont::SetEdge(0, v14);
        return _stack_chk_guard - v31;
      }
    }
    CHudColours::GetRGB((CHudColours *)v27, (unsigned __int8)HudColour, 7u);
    CFont::SetColor();
LABEL_21:
    v22 = (CFont *)CFont::PrintString((CFont *)LODWORD(v11), v15, (CFont *)v29, v19);
    CFont::RenderFontBuffer(v22);
    goto LABEL_22;
  }
  return _stack_chk_guard - v31;
}


// ============================================================

// Address: 0x2be268
// Original: _ZN17CWidgetPlayerInfo23PassesDisplayConditionsEv
// Demangled: CWidgetPlayerInfo::PassesDisplayConditions(void)
bool __fastcall CWidgetPlayerInfo::PassesDisplayConditions(CWidgetPlayerInfo *this)
{
  _BOOL4 result; // r0
  bool v2; // zf

  if ( dword_6E06BC && ((unsigned __int8)CTimer::m_UserPause | (unsigned __int8)CTimer::m_CodePause) << 24 )
    return *((_DWORD *)this + 31) > 5;
  result = 0;
  if ( !dword_6E0098 && byte_98F111 && CTheScripts::bDisplayHud )
  {
    v2 = CWeapon::ms_bTakePhoto == 0;
    if ( !CWeapon::ms_bTakePhoto )
      v2 = dword_6E0090 == 0;
    if ( v2 )
    {
      result = 0;
      if ( gbCineyCamProcessedOnFrame != CTimer::m_FrameCounter )
        return byte_951FE3 == 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x2be31c
// Original: _ZN17CWidgetPlayerInfo10IsHeldDownEv
// Demangled: CWidgetPlayerInfo::IsHeldDown(void)
bool __fastcall CWidgetPlayerInfo::IsHeldDown(CWidgetPlayerInfo *this)
{
  CHID::Implements();
  return *((float *)this + 17) >= *((float *)this + 35);
}


// ============================================================

// Address: 0x2be340
// Original: _ZN17CWidgetPlayerInfo12IsSwipedLeftEv
// Demangled: CWidgetPlayerInfo::IsSwipedLeft(void)
int __fastcall CWidgetPlayerInfo::IsSwipedLeft(CWidgetPlayerInfo *this)
{
  if ( CHID::Replaces() == 1 )
    return j_CHID::IsJustPressed();
  if ( CHID::Implements() == 1 && CHID::IsJustPressed(16) )
    return 1;
  return j_CWidget::IsSwipedLeft(this);
}


// ============================================================

// Address: 0x2be37c
// Original: _ZN17CWidgetPlayerInfo13IsSwipedRightEv
// Demangled: CWidgetPlayerInfo::IsSwipedRight(void)
int __fastcall CWidgetPlayerInfo::IsSwipedRight(CWidgetPlayerInfo *this)
{
  CHID *IsJustPressed; // r0

  if ( CHID::Replaces() == 1 )
    return j_CHID::IsJustPressed();
  IsJustPressed = (CHID *)CHID::Implements();
  if ( IsJustPressed == (CHID *)((char *)&stderr + 1) )
  {
    IsJustPressed = (CHID *)CHID::IsJustPressed(15);
    if ( IsJustPressed )
      return 1;
  }
  if ( !CHID::GetInputType(IsJustPressed)
    && (*(int (__fastcall **)(CWidgetPlayerInfo *, _DWORD))(*(_DWORD *)this + 52))(this, 0) )
  {
    return 1;
  }
  else
  {
    return j_CWidget::IsSwipedRight(this);
  }
}


// ============================================================

// Address: 0x2be3c8
// Original: _ZN17CWidgetPlayerInfo12DrawHelpIconEPKcfffi
// Demangled: CWidgetPlayerInfo::DrawHelpIcon(char const*,float,float,float,int)
int __fastcall CWidgetPlayerInfo::DrawHelpIcon(
        CWidgetPlayerInfo *this,
        const char *a2,
        int a3,
        int a4,
        float a5,
        int a6)
{
  int result; // r0

  if ( CHID::Implements() == 1 )
    return CHID::DrawHelpIcon((int)a2, *((_DWORD *)this + 1), a3, a4, a5, a6, 0);
  result = FindPlayerPed(-1);
  if ( result )
    return CWidgetPlayerInfo::DrawWeaponIcon(
             result,
             result,
             *(float *)&a3,
             COERCE_INT(*(float *)&a4 + a5),
             COERCE_INT(*(float *)&a3 + a5),
             a4,
             (float)a6);
  return result;
}


// ============================================================

// Address: 0x2be450
// Original: _ZN17CWidgetPlayerInfoD2Ev
// Demangled: CWidgetPlayerInfo::~CWidgetPlayerInfo()
void __fastcall CWidgetPlayerInfo::~CWidgetPlayerInfo(CWidgetPlayerInfo *this)
{
  *(_DWORD *)this = &off_664108;
  CSprite2d::~CSprite2d((CWidgetPlayerInfo *)((char *)this + 176));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2be478
// Original: _ZN17CWidgetPlayerInfoD0Ev
// Demangled: CWidgetPlayerInfo::~CWidgetPlayerInfo()
void __fastcall CWidgetPlayerInfo::~CWidgetPlayerInfo(CWidgetPlayerInfo *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_664108;
  CSprite2d::~CSprite2d((CWidgetPlayerInfo *)((char *)this + 176));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2be4a4
// Original: _ZN17CWidgetPlayerInfo7GetNameEv
// Demangled: CWidgetPlayerInfo::GetName(void)
char *__fastcall CWidgetPlayerInfo::GetName(CWidgetPlayerInfo *this)
{
  return "PlayerInfo";
}


// ============================================================


// Address: 0x18bc40
// Original: j__ZN19CWidgetRegionSprintC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionSprint::CWidgetRegionSprint(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionSprint::CWidgetRegionSprint()
{
  return _ZN19CWidgetRegionSprintC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c2968
// Original: _ZN19CWidgetRegionSprintC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionSprint::CWidgetRegionSprint(char const*,WidgetPosition const&)
int __fastcall CWidgetRegionSprint::CWidgetRegionSprint(int a1)
{
  CWidgetRegion::CWidgetRegion();
  *(_DWORD *)a1 = &off_664B70;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 156));
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 160));
  *(_DWORD *)(a1 + 148) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 156), "CornerGradient", 1);
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 160), "sprint", 1);
  *(_DWORD *)(a1 + 128) |= 8u;
  return a1;
}


// ============================================================

// Address: 0x2c29f8
// Original: _ZN19CWidgetRegionSprint6UpdateEv
// Demangled: CWidgetRegionSprint::Update(void)
int __fastcall CWidgetRegionSprint::Update(CTouchInterface **this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  int PlayerPed; // r0
  char *v5; // r2
  int v6; // r1
  CPlayerPed *v7; // r0
  CPad *PadFromPlayer; // r0
  CPlayerPed *v9; // r0
  CPad *v10; // r0
  CEntity *v11; // r0
  int result; // r0
  float v13; // r5

  CWidgetRegion::Update((CWidgetRegion *)this);
  PlayerPed = FindPlayerPed(-1);
  if ( CPedIntelligence::GetTaskSwim(*(CPedIntelligence **)(PlayerPed + 1088)) )
    v5 = "hud_swim";
  else
    v5 = "sprint";
  CWidget::SetTexture((CWidget *)this, (CSprite2d *)(this + 40), v5, 0);
  if ( !CTouchInterface::IsTouchDown(this[30], v6) )
  {
    *((_BYTE *)this + 144) = 0;
LABEL_12:
    v1.n64_f32[0] = (double)(int)this[37] + CWidget::m_fElapsedTime * *((float *)this + 7) * -0.689999998;
    v2.n64_u32[0] = 0;
    v1.n64_u32[0] = vmax_f32(v1, v2).n64_u32[0];
    goto LABEL_13;
  }
  if ( !*((_BYTE *)this + 144) )
    goto LABEL_12;
  if ( !FindPlayerPed(-1) )
    goto LABEL_12;
  v7 = (CPlayerPed *)FindPlayerPed(-1);
  PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(v7);
  if ( !CPad::GetPedWalkLeftRight(PadFromPlayer) )
  {
    v9 = (CPlayerPed *)FindPlayerPed(-1);
    v10 = (CPad *)CPlayerPed::GetPadFromPlayer(v9);
    if ( !CPad::GetPedWalkUpDown(v10) )
      goto LABEL_12;
  }
  v11 = (CEntity *)FindPlayerPed(-1);
  CPed::GetTransformedBonePosition(v11);
  if ( unk_A0664C > 0.1 )
    goto LABEL_14;
  v1.n64_f32[0] = CWidget::m_fElapsedTime * *((float *)this + 7) * 0.389999986 + (double)(int)this[37];
  v2.n64_u32[0] = 1120403456;
  v1.n64_u32[0] = vmin_f32(v1, v2).n64_u32[0];
LABEL_13:
  this[37] = (CTouchInterface *)(int)v1.n64_f32[0];
LABEL_14:
  result = FindPlayerPed(-1);
  if ( result )
  {
    v13 = COERCE_FLOAT(CStats::GetFatAndMuscleModifier());
    result = *(_DWORD *)(FindPlayerPed(-1) + 1092);
    *((float *)this + 38) = (float)(*(float *)(result + 24) + 150.0) / (float)(v13 + 150.0);
  }
  return result;
}


// ============================================================

// Address: 0x2c2bac
// Original: _ZN19CWidgetRegionSprint14OnInitialTouchEv
// Demangled: CWidgetRegionSprint::OnInitialTouch(void)
int __fastcall CWidgetRegionSprint::OnInitialTouch(CWidgetRegionSprint *this)
{
  int result; // r0

  CWidget::OnInitialTouch(this);
  result = 1;
  *((_BYTE *)this + 144) = 1;
  return result;
}


// ============================================================

// Address: 0x2c2bbe
// Original: _ZN19CWidgetRegionSprint9IsTouchedEP9CVector2D
// Demangled: CWidgetRegionSprint::IsTouched(CVector2D *)
int __fastcall CWidgetRegionSprint::IsTouched(int a1)
{
  if ( CHID::Implements() == 1 )
    return j_CWidget::IsTouched();
  else
    return *(unsigned __int8 *)(a1 + 144);
}


// ============================================================

// Address: 0x2c2be2
// Original: _ZN19CWidgetRegionSprint14IsDoubleTappedEv
// Demangled: CWidgetRegionSprint::IsDoubleTapped(void)
int __fastcall CWidgetRegionSprint::IsDoubleTapped(CWidgetRegionSprint *this)
{
  if ( CHID::Implements() == 1 )
    return j_CHID::IsReleased();
  else
    return sub_196C88(this);
}


// ============================================================

// Address: 0x2c2c08
// Original: _ZN19CWidgetRegionSprint4DrawEv
// Demangled: CWidgetRegionSprint::Draw(void)
int __fastcall CWidgetRegionSprint::Draw(CWidgetRegionSprint *this)
{
  int result; // r0
  float v3; // s4
  float v4; // s6
  float v5; // s16
  float v6; // s18
  float v7; // s2
  _BYTE v8[4]; // [sp+1Ch] [bp-64h] BYREF
  float v9[4]; // [sp+20h] [bp-60h] BYREF
  float v10; // [sp+30h] [bp-50h] BYREF
  float v11; // [sp+34h] [bp-4Ch]
  float v12; // [sp+38h] [bp-48h]
  float v13; // [sp+3Ch] [bp-44h]

  CWidgetRegion::Draw(this);
  result = *((unsigned __int8 *)this + 77);
  if ( *((_BYTE *)this + 77) )
  {
    result = *((_DWORD *)this + 37);
    if ( result >= 2 )
    {
      v3 = *((float *)this + 38);
      v4 = (float)dword_9FC900 * 0.1;
      v5 = (float)dword_9FC904 + (float)((float)dword_9FC904 * -0.02);
      v6 = (float)dword_9FC900 + (float)((float)dword_9FC900 * -0.015);
      v12 = v6;
      v7 = v5 - (1.0 - v3) * v4;
      v10 = v6 - v4;
      v11 = v7;
      v13 = v7 - (float)(v4 * v3);
      CRGBA::CRGBA((CRGBA *)v9, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)((float)result * 2.55));
      CSprite2d::Draw(
        (int)this + 160,
        (int)&v10,
        (int)v9,
        0,
        0.0,
        1.0,
        0.0,
        0.0,
        *((float *)this + 38),
        1.0,
        *((float *)this + 38));
      v12 = v6;
      v10 = v6 - v4;
      v13 = v11;
      v11 = v5;
      CRGBA::CRGBA((CRGBA *)v9, 0x99u, 0xCCu, 0x99u, (unsigned int)(float)((float)*((int *)this + 37) * 2.55));
      CSprite2d::Draw(
        (int)this + 160,
        (int)&v10,
        (int)v9,
        0,
        *((float *)this + 38),
        1.0,
        *((float *)this + 38),
        0.0,
        1.0,
        1.0,
        1.0);
      v9[2] = (float)dword_9FC900;
      v9[1] = (float)dword_9FC904;
      v9[0] = (float)dword_9FC900 - (float)((float)dword_9FC900 * 0.125);
      v9[3] = (float)dword_9FC904 - (float)((float)dword_9FC900 * 0.125);
      CRGBA::CRGBA((CRGBA *)v8, 0xFFu, 0xFFu, 0xFFu, *((_BYTE *)this + 148));
      return CSprite2d::Draw((char *)this + 156, v9, v8);
    }
  }
  return result;
}


// ============================================================

// Address: 0x2c2dd4
// Original: _ZN19CWidgetRegionSprintD2Ev
// Demangled: CWidgetRegionSprint::~CWidgetRegionSprint()
void __fastcall CWidgetRegionSprint::~CWidgetRegionSprint(CWidgetRegionSprint *this)
{
  CSprite2d *v2; // r5

  *(_DWORD *)this = &off_664B70;
  v2 = (CWidgetRegionSprint *)((char *)this + 156);
  CSprite2d::~CSprite2d((CWidgetRegionSprint *)((char *)this + 160));
  CSprite2d::~CSprite2d(v2);
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2c2e04
// Original: _ZN19CWidgetRegionSprintD0Ev
// Demangled: CWidgetRegionSprint::~CWidgetRegionSprint()
void __fastcall CWidgetRegionSprint::~CWidgetRegionSprint(CWidgetRegionSprint *this)
{
  CSprite2d *v2; // r5
  void *v3; // r0

  *(_DWORD *)this = &off_664B70;
  v2 = (CWidgetRegionSprint *)((char *)this + 156);
  CSprite2d::~CSprite2d((CWidgetRegionSprint *)((char *)this + 160));
  CSprite2d::~CSprite2d(v2);
  CWidget::~CWidget(this);
  operator delete(v3);
}


// ============================================================

// Address: 0x2c2e38
// Original: _ZN19CWidgetRegionSprint7GetNameEv
// Demangled: CWidgetRegionSprint::GetName(void)
char *__fastcall CWidgetRegionSprint::GetName(CWidgetRegionSprint *this)
{
  return "Sprint";
}


// ============================================================

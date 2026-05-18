
// Address: 0x197ea4
// Original: j__ZN19CWidgetButtonAttackC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonAttack::CWidgetButtonAttack(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetButtonAttack::CWidgetButtonAttack()
{
  return _ZN19CWidgetButtonAttackC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2b4e04
// Original: _ZN19CWidgetButtonAttackC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonAttack::CWidgetButtonAttack(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetButtonAttack::CWidgetButtonAttack(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetButton::CWidgetButton(a1, a2, a3, 1, 256, 1);
  *result = &off_6630CC;
  return result;
}


// ============================================================

// Address: 0x2b4e30
// Original: _ZN19CWidgetButtonAttack6UpdateEv
// Demangled: CWidgetButtonAttack::Update(void)
int __fastcall CWidgetButtonAttack::Update(CWidgetButtonAttack *this)
{
  int PlayerPed; // r0
  char *v3; // r2
  int v4; // r1
  char *v5; // r0
  int v6; // r6
  CHID *v7; // r0
  int result; // r0
  int v9; // r0

  CWidgetButton::Update(this);
  PlayerPed = FindPlayerPed(-1);
  if ( PlayerPed )
  {
    v3 = "shoot";
    v4 = *(_DWORD *)(PlayerPed + 28 * *(char *)(PlayerPed + 1820) + 1444);
    v5 = "hud_throw";
    switch ( v4 )
    {
      case 0:
        v5 = "punch";
        goto LABEL_28;
      case 1:
        v5 = "brassknuckle";
        goto LABEL_28;
      case 2:
        v5 = "hud_golfclub";
        goto LABEL_28;
      case 3:
        v5 = "hud_nightstick";
        goto LABEL_28;
      case 4:
        v5 = "hud_knife";
        goto LABEL_28;
      case 5:
        v5 = "hud_bat";
        goto LABEL_28;
      case 6:
        v5 = "shovel";
        goto LABEL_28;
      case 7:
        v5 = "hud_poolcue";
        goto LABEL_28;
      case 8:
        v5 = "hud_katana";
        goto LABEL_28;
      case 9:
        v5 = "hud_chainsaw";
        goto LABEL_28;
      case 10:
        v5 = "hud_dildo1";
        goto LABEL_28;
      case 11:
        v5 = "hud_dildo1";
        goto LABEL_28;
      case 12:
        v5 = "hud_dildo2";
        goto LABEL_28;
      case 13:
        v5 = "hud_dildo2";
        goto LABEL_28;
      case 14:
        v5 = "hud_flowers";
        goto LABEL_28;
      case 15:
        v5 = "hud_cane";
        goto LABEL_28;
      case 16:
      case 18:
      case 39:
        goto LABEL_28;
      case 17:
        v5 = "hud_teargas";
        goto LABEL_28;
      case 37:
        v5 = "flamethrower";
        goto LABEL_28;
      case 40:
        v5 = "hud_detonator";
        goto LABEL_28;
      case 41:
        v5 = "hud_spraycan";
        goto LABEL_28;
      case 42:
        v5 = "hud_extinguisher";
        goto LABEL_28;
      case 44:
        v5 = "goggles";
        goto LABEL_28;
      case 45:
        v5 = "goggles";
        goto LABEL_28;
      case 46:
        v5 = "punch";
LABEL_28:
        v3 = v5;
        break;
      default:
        break;
    }
  }
  else
  {
    v3 = "shoot";
  }
  v6 = 1;
  v7 = (CHID *)CWidget::SetTexture(this, (CWidgetButtonAttack *)((char *)this + 8), v3, 1);
  result = CHID::GetInputType(v7);
  if ( result == 2 )
  {
    result = FindPlayerPed(-1);
    v6 = 1;
    if ( result )
    {
      v9 = FindPlayerPed(-1);
      result = CPedIntelligence::GetTaskJetPack(*(CPedIntelligence **)(v9 + 1088));
      if ( result )
        v6 = 88;
    }
  }
  *((_DWORD *)this + 1) = v6;
  return result;
}


// ============================================================

// Address: 0x2b4fe0
// Original: _ZN19CWidgetButtonAttack14GetTextureNameEv
// Demangled: CWidgetButtonAttack::GetTextureName(void)
char *__fastcall CWidgetButtonAttack::GetTextureName(CWidgetButtonAttack *this)
{
  int PlayerPed; // r1
  char *result; // r0
  unsigned int v3; // r2
  char *v4; // r1

  PlayerPed = FindPlayerPed(-1);
  if ( !PlayerPed )
    return "shoot";
  result = "shoot";
  v3 = *(_DWORD *)(PlayerPed + 28 * *(char *)(PlayerPed + 1820) + 1444);
  if ( v3 <= 0x2E )
    JUMPOUT(0x2B500C);
  v4 = "hud_throw";
  switch ( v3 )
  {
    case 0u:
      v4 = "punch";
      goto LABEL_29;
    case 1u:
      v4 = "brassknuckle";
      goto LABEL_29;
    case 2u:
      v4 = "hud_golfclub";
      goto LABEL_29;
    case 3u:
      v4 = "hud_nightstick";
      goto LABEL_29;
    case 4u:
      v4 = "hud_knife";
      goto LABEL_29;
    case 5u:
      v4 = "hud_bat";
      goto LABEL_29;
    case 6u:
      v4 = "shovel";
      goto LABEL_29;
    case 7u:
      v4 = "hud_poolcue";
      goto LABEL_29;
    case 8u:
      v4 = "hud_katana";
      goto LABEL_29;
    case 9u:
      v4 = "hud_chainsaw";
      goto LABEL_29;
    case 0xAu:
      v4 = "hud_dildo1";
      goto LABEL_29;
    case 0xBu:
      v4 = "hud_dildo1";
      goto LABEL_29;
    case 0xCu:
      v4 = "hud_dildo2";
      goto LABEL_29;
    case 0xDu:
      v4 = "hud_dildo2";
      goto LABEL_29;
    case 0xEu:
      v4 = "hud_flowers";
      goto LABEL_29;
    case 0xFu:
      v4 = "hud_cane";
      goto LABEL_29;
    case 0x10u:
    case 0x12u:
    case 0x27u:
      goto LABEL_29;
    case 0x11u:
      v4 = "hud_teargas";
      goto LABEL_29;
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
    case 0x1Fu:
    case 0x20u:
    case 0x21u:
    case 0x22u:
    case 0x23u:
    case 0x24u:
    case 0x26u:
    case 0x2Bu:
      return result;
    case 0x25u:
      v4 = "flamethrower";
      goto LABEL_29;
    case 0x28u:
      v4 = "hud_detonator";
      goto LABEL_29;
    case 0x29u:
      v4 = "hud_spraycan";
      goto LABEL_29;
    case 0x2Au:
      v4 = "hud_extinguisher";
      goto LABEL_29;
    case 0x2Cu:
      v4 = "goggles";
      goto LABEL_29;
    case 0x2Du:
      v4 = "goggles";
      goto LABEL_29;
    case 0x2Eu:
      v4 = "punch";
LABEL_29:
      result = v4;
      break;
  }
  return result;
}


// ============================================================

// Address: 0x2b5148
// Original: _ZN19CWidgetButtonAttackD0Ev
// Demangled: CWidgetButtonAttack::~CWidgetButtonAttack()
void __fastcall CWidgetButtonAttack::~CWidgetButtonAttack(CWidgetButtonAttack *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonAttack *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b5174
// Original: _ZN19CWidgetButtonAttack7GetNameEv
// Demangled: CWidgetButtonAttack::GetName(void)
int __fastcall CWidgetButtonAttack::GetName(CWidgetButtonAttack *this)
{
  return 2838904;
}


// ============================================================

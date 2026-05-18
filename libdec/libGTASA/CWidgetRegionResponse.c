
// Address: 0x193108
// Original: j__ZN21CWidgetRegionResponseC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionResponse::CWidgetRegionResponse(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionResponse::CWidgetRegionResponse()
{
  return _ZN21CWidgetRegionResponseC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c1e4c
// Original: _ZN21CWidgetRegionResponseC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionResponse::CWidgetRegionResponse(char const*,WidgetPosition const&)
int CWidgetRegionResponse::CWidgetRegionResponse()
{
  int result; // r0

  result = CWidgetRegion::CWidgetRegion();
  *(_WORD *)(result + 144) = 0;
  *(_DWORD *)result = &off_664A48;
  return result;
}


// ============================================================

// Address: 0x2c1e74
// Original: _ZN21CWidgetRegionResponse6UpdateEv
// Demangled: CWidgetRegionResponse::Update(void)
int __fastcall CWidgetRegionResponse::Update(CWidgetRegionResponse *this)
{
  int result; // r0
  CPed *PlayerPed; // r0
  int v4; // [sp+8h] [bp-40h] BYREF
  int v5; // [sp+Ch] [bp-3Ch]
  int v6; // [sp+10h] [bp-38h]
  int v7; // [sp+14h] [bp-34h] BYREF
  int v8; // [sp+18h] [bp-30h]
  int v9; // [sp+1Ch] [bp-2Ch]
  _DWORD v10[3]; // [sp+20h] [bp-28h] BYREF
  _DWORD v11[7]; // [sp+2Ch] [bp-1Ch] BYREF

  CWidgetRegion::Update(this);
  *(_BYTE *)(dword_6F3A10 + 148) = *((_BYTE *)this + 77);
  result = *((unsigned __int8 *)this + 77);
  if ( !*((_BYTE *)this + 77) )
    return result;
  result = FindPlayerPed(-1);
  if ( !result )
    return result;
  *((_WORD *)this + 72) = 0;
  if ( !CTouchInterface::IsDoubleTapped(157, 0, 1) )
  {
    if ( !byte_70B61C )
    {
      if ( byte_70B61D == 1 )
      {
        byte_70B61D = 0;
        *((_BYTE *)this + 144) = 1;
      }
      goto LABEL_11;
    }
    goto LABEL_7;
  }
  byte_70B61D = 0;
  *((_BYTE *)this + 145) = 1;
  if ( byte_70B61C == 1 )
  {
LABEL_7:
    *(float *)&dword_70B620 = *(float *)&dword_70B620 + (float)(*(float *)&CTimer::ms_fTimeStep / 50.0);
    if ( *(float *)&dword_70B620 > 0.33 )
    {
      byte_70B61C = 0;
      dword_70B620 = 0;
    }
  }
LABEL_11:
  if ( CTouchInterface::IsReleased(157, 0, 1) == 1 )
  {
    byte_70B61D = 1;
    byte_70B61C = 1;
  }
  memset(v10, 0, sizeof(v10));
  memset(v11, 0, 12);
  v8 = 0;
  v9 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  PlayerPed = (CPed *)FindPlayerPed(-1);
  CPed::GetHeadAndFootPositions(PlayerPed, (CVector *)v11, (CVector *)v10, 1);
  result = CSprite::CalcScreenCoors((int)v11, (int)&v7, 0, 0, 1, 1);
  if ( result == 1 )
  {
    result = CSprite::CalcScreenCoors((int)v10, (int)&v4, 0, 0, 1, 1);
    if ( result == 1 )
    {
      dword_685F6C = v7;
      unk_685F70 = v5;
      dword_685F74 = v4;
      unk_685F78 = v8;
      return CWidget::SetScreenRect();
    }
  }
  return result;
}


// ============================================================

// Address: 0x2c200c
// Original: _ZN21CWidgetRegionResponse4DrawEv
// Demangled: CWidgetRegionResponse::Draw(void)
void __fastcall CWidgetRegionResponse::Draw(CWidgetRegionResponse *this)
{
  ;
}


// ============================================================

// Address: 0x2c200e
// Original: _ZN21CWidgetRegionResponseD0Ev
// Demangled: CWidgetRegionResponse::~CWidgetRegionResponse()
void __fastcall CWidgetRegionResponse::~CWidgetRegionResponse(CWidgetRegionResponse *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2c2020
// Original: _ZN21CWidgetRegionResponse7GetNameEv
// Demangled: CWidgetRegionResponse::GetName(void)
char *__fastcall CWidgetRegionResponse::GetName(CWidgetRegionResponse *this)
{
  return "Response";
}


// ============================================================

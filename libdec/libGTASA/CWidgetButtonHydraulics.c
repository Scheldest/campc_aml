
// Address: 0x1942c0
// Original: j__ZN23CWidgetButtonHydraulicsC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonHydraulics::CWidgetButtonHydraulics(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetButtonHydraulics::CWidgetButtonHydraulics()
{
  return _ZN23CWidgetButtonHydraulicsC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2b53c4
// Original: _ZN23CWidgetButtonHydraulicsC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonHydraulics::CWidgetButtonHydraulics(char const*,WidgetPosition const&)
int __fastcall CWidgetButtonHydraulics::CWidgetButtonHydraulics(int a1, int a2, int a3)
{
  CWidgetButton::CWidgetButton(a1, a2, a3, 1, 0, 85);
  *(_DWORD *)a1 = &off_663288;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 200));
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(a1 + 168) = 0;
  *(_WORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 1078530011;
  *(_DWORD *)(a1 + 180) = 1078530011;
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 200), "lock", 1);
  return a1;
}


// ============================================================

// Address: 0x2b5438
// Original: _ZN23CWidgetButtonHydraulics4DrawEv
// Demangled: CWidgetButtonHydraulics::Draw(void)
int __fastcall CWidgetButtonHydraulics::Draw(CWidgetButtonHydraulics *this)
{
  int result; // r0
  float v3; // s4
  float v4; // s6
  float v5; // s0
  float v6; // s2
  _BYTE v7[12]; // [sp+4h] [bp-Ch] BYREF

  result = *((unsigned __int8 *)this + 173);
  if ( result )
  {
    CWidgetButton::Draw(this);
    result = *((unsigned __int8 *)this + 172);
    if ( *((_BYTE *)this + 172) )
    {
      v3 = *((float *)this + 10);
      v4 = *((float *)this + 11);
      v5 = *((float *)this + 8) + (float)(fabsf(v3 - *((float *)this + 8)) * 0.25);
      v6 = *((float *)this + 9) - (float)(fabsf(*((float *)this + 9) - v4) * 0.25);
      *((float *)this + 8) = v5;
      *((float *)this + 9) = v6;
      *((float *)this + 10) = v3 - (float)(fabsf(v3 - v5) * 0.25);
      *((float *)this + 11) = v4 + (float)(fabsf(v6 - v4) * 0.25);
      CRGBA::CRGBA((CRGBA *)v7, 0xFFu, 0xFFu, 0xFFu, *((_BYTE *)this + 76));
      return CSprite2d::Draw((char *)this + 200, (char *)this + 32, v7);
    }
  }
  return result;
}


// ============================================================

// Address: 0x2b54e0
// Original: _ZN23CWidgetButtonHydraulics6UpdateEv
// Demangled: CWidgetButtonHydraulics::Update(void)
int __fastcall CWidgetButtonHydraulics::Update(CWidgetButtonHydraulics *this)
{
  int result; // r0
  int v3; // r1
  CPad *Pad; // r0
  int v5; // r0
  bool v6; // zf
  int v7; // r1
  float v8; // s2
  float v9; // r0
  float v10; // r0
  float v11; // s0
  int v12; // r0
  int v13; // r1
  float v14[2]; // [sp+0h] [bp-20h] BYREF
  float v15; // [sp+8h] [bp-18h] BYREF
  float v16; // [sp+Ch] [bp-14h]

  CWidgetButton::Update(this);
  *((_BYTE *)this + 173) = 1;
  result = FindPlayerVehicle(-1, 0);
  if ( !result )
  {
    *((_DWORD *)this + 42) = 0;
    *((_WORD *)this + 86) = 0;
    return result;
  }
  if ( (*(_BYTE *)(result + 914) & 2) == 0 )
  {
    result = 0;
    *((_DWORD *)this + 42) = 0;
    *((_WORD *)this + 86) = 0;
    return result;
  }
  Pad = (CPad *)CPad::GetPad(0, v3);
  if ( CPad::GetExitVehicle(Pad) == 1 )
  {
    *((_DWORD *)this + 42) = 0;
    *((_WORD *)this + 86) = 0;
  }
  if ( (*(int (__fastcall **)(CWidgetButtonHydraulics *, _DWORD))(*(_DWORD *)this + 52))(this, 0) == 1
    && (CHID::GetInputType((CHID *)((char *)&stderr + 1)) || CWidget::GetNumTapsInTime(this, 0.42) >= 1) )
  {
    v5 = *((unsigned __int8 *)this + 172);
    *((_BYTE *)this + 172) = v5 ^ 1;
    if ( v5 )
      *((_DWORD *)this + 42) = 0;
LABEL_12:
    byte_6FA2F5 = 0;
    result = -1;
    byte_6FA2F4 = 0;
    dword_685F68 = -1;
    return result;
  }
  result = (*(int (__fastcall **)(CWidgetButtonHydraulics *, _DWORD))(*(_DWORD *)this + 80))(this, 0);
  v6 = result == 0;
  v7 = dword_685F68;
  if ( !result )
  {
    result = dword_685F68 + 1;
    v6 = dword_685F68 == -1;
  }
  if ( !v6 )
  {
    if ( !byte_6FA2F4 )
    {
      v7 = *((_DWORD *)this + 30);
      dword_685F68 = v7;
      v8 = (float)(*((float *)this + 9) + *((float *)this + 11)) * 0.5;
      *((float *)this + 46) = (float)(*((float *)this + 8) + *((float *)this + 10)) * 0.5;
      *((float *)this + 47) = v8;
      byte_6FA2F4 = 1;
    }
    CTouchInterface::GetTouchDelta((CTouchInterface *)&v15, v7);
    if ( fabsf(v15) > 2.5 || (CTouchInterface::GetTouchDelta((CTouchInterface *)v14, dword_685F68), fabsf(v14[1]) > 2.5) )
      byte_6FA2F5 = 1;
    if ( (*(int (__fastcall **)(CWidgetButtonHydraulics *, _DWORD))(*(_DWORD *)this + 80))(this, 0) != 1
      || byte_6FA2F5 == 1 )
    {
      CTouchInterface::GetTouchPosition((CTouchInterface *)&v15, dword_685F68);
      *((float *)this + 48) = v15;
      CTouchInterface::GetTouchPosition((CTouchInterface *)&v15, dword_685F68);
      v9 = v16;
      *((float *)this + 49) = v16;
      v10 = atan2f(-(float)(*((float *)this + 48) - *((float *)this + 46)), v9 - *((float *)this + 47));
      *((float *)this + 44) = v10;
      v11 = (float)(v10 * 180.0) / 3.1416;
      if ( unk_6FA2F8 == v11 )
      {
        *(float *)&dword_6FA2FC = *(float *)&dword_6FA2FC + (float)(*(float *)&CTimer::ms_fTimeStep / 50.0);
        if ( *(float *)&dword_6FA2FC > 2.0 )
          *((_BYTE *)this + 172) = 1;
      }
      else
      {
        dword_6FA2FC = 0;
        unk_6FA2F8 = (float)(v10 * 180.0) / 3.1416;
      }
      if ( v11 < 22.5 && v11 > -22.5 )
      {
        v12 = 2;
LABEL_50:
        *((_DWORD *)this + 42) = v12;
        goto LABEL_51;
      }
      if ( v11 > 22.5 && v11 < 67.5 )
      {
        v12 = 7;
        goto LABEL_50;
      }
      if ( v11 > 67.5 && v11 < 112.5 )
      {
        v12 = 3;
        goto LABEL_50;
      }
      if ( v11 > 112.5 && v11 < 157.5 )
      {
        v12 = 5;
        goto LABEL_50;
      }
      v12 = 1;
      if ( v11 > 157.5 || v11 < -157.5 )
        goto LABEL_50;
      if ( v11 > -157.5 && v11 < -112.5 )
      {
        v12 = 6;
        goto LABEL_50;
      }
      if ( v11 > -112.5 && v11 < -67.5 )
      {
        v12 = 4;
        goto LABEL_50;
      }
      if ( v11 > -67.5 && v11 < -22.5 )
      {
        v12 = 8;
        goto LABEL_50;
      }
    }
LABEL_51:
    result = (*(int (__fastcall **)(CWidgetButtonHydraulics *, _DWORD))(*(_DWORD *)this + 80))(this, 0);
    if ( !result )
    {
      result = CTouchInterface::IsTouchDown((CTouchInterface *)dword_685F68, v13);
      if ( !result )
      {
        if ( !*((_BYTE *)this + 172) )
          *((_DWORD *)this + 42) = 0;
        goto LABEL_12;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x2b58b8
// Original: _ZN23CWidgetButtonHydraulicsD2Ev
// Demangled: CWidgetButtonHydraulics::~CWidgetButtonHydraulics()
void __fastcall CWidgetButtonHydraulics::~CWidgetButtonHydraulics(CWidgetButtonHydraulics *this)
{
  *(_DWORD *)this = &off_663288;
  CSprite2d::~CSprite2d((CWidgetButtonHydraulics *)((char *)this + 200));
  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonHydraulics *)((char *)this + 152));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2b58f8
// Original: _ZN23CWidgetButtonHydraulicsD0Ev
// Demangled: CWidgetButtonHydraulics::~CWidgetButtonHydraulics()
void __fastcall CWidgetButtonHydraulics::~CWidgetButtonHydraulics(CWidgetButtonHydraulics *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_663288;
  CSprite2d::~CSprite2d((CWidgetButtonHydraulics *)((char *)this + 200));
  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonHydraulics *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b593c
// Original: _ZN23CWidgetButtonHydraulics7GetNameEv
// Demangled: CWidgetButtonHydraulics::GetName(void)
char *__fastcall CWidgetButtonHydraulics::GetName(CWidgetButtonHydraulics *this)
{
  return "Hydraulics";
}


// ============================================================

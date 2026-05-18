
// Address: 0x2c3390
// Original: _ZN23CWidgetRegionHydraulicsC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionHydraulics::CWidgetRegionHydraulics(char const*,WidgetPosition const&)
int __fastcall CWidgetRegionHydraulics::CWidgetRegionHydraulics(int a1)
{
  double v2; // d16
  int v3; // r1
  float v4; // s0

  CWidgetRegion::CWidgetRegion();
  *(_QWORD *)(a1 + 176) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 184) = 0x49742400C9742400LL;
  *(_DWORD *)a1 = &off_664C98;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 192));
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 196) = 0LL;
  *(_QWORD *)(a1 + 204) = 0LL;
  v2 = CWidget::m_fElapsedTime * -0.5 + 0.0;
  if ( v2 <= 0.075000003 )
    v2 = 0.075000003;
  v3 = *(unsigned __int8 *)(a1 + 172);
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  v4 = v2;
  *(float *)(a1 + 160) = v4;
  if ( !v3 )
    *(_DWORD *)(a1 + 148) = 0;
  *(_BYTE *)(a1 + 172) = 0;
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 8), "fadeinbox", 1);
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 192), "lock", 1);
  return a1;
}


// ============================================================

// Address: 0x2c3488
// Original: _ZN23CWidgetRegionHydraulics20ResetHydraulicRegionEv
// Demangled: CWidgetRegionHydraulics::ResetHydraulicRegion(void)
int __fastcall CWidgetRegionHydraulics::ResetHydraulicRegion(int this)
{
  double v1; // d16
  int v2; // r2
  float v3; // s0

  *(_BYTE *)(this + 144) = 0;
  *(_DWORD *)(this + 152) = 0;
  *(_DWORD *)(this + 156) = 0;
  v1 = *(float *)(this + 160) + CWidget::m_fElapsedTime * -0.5;
  if ( v1 <= 0.075000003 )
    v1 = 0.075000003;
  v2 = *(unsigned __int8 *)(this + 172);
  *(_DWORD *)(this + 164) = 0;
  *(_DWORD *)(this + 168) = 0;
  v3 = v1;
  *(float *)(this + 160) = v3;
  if ( !v2 )
    *(_DWORD *)(this + 148) = 0;
  return this;
}


// ============================================================

// Address: 0x2c34ec
// Original: _ZN23CWidgetRegionHydraulics4DrawEv
// Demangled: CWidgetRegionHydraulics::Draw(void)
int __fastcall CWidgetRegionHydraulics::Draw(CWidgetRegionHydraulics *this)
{
  int result; // r0
  float v3; // s0
  float v4; // s2
  float v5; // s4
  float v6; // s16
  float v7; // s0
  float v8; // s6
  unsigned __int8 v9; // r6
  char *v10; // r5
  float v11; // s2
  float v12; // s4
  int v13; // r0
  char *v14; // r4
  _BYTE v15[4]; // [sp+4h] [bp-2Ch] BYREF
  float v16; // [sp+8h] [bp-28h] BYREF
  float v17; // [sp+Ch] [bp-24h]
  float v18; // [sp+10h] [bp-20h]
  float v19; // [sp+14h] [bp-1Ch]

  result = *((unsigned __int8 *)this + 77);
  if ( result )
  {
    v3 = *((float *)this + 8);
    v4 = *((float *)this + 10);
    v5 = *((float *)this + 40) * 255.0;
    v6 = fabsf(v4 - v3);
    v17 = *((float *)this + 9);
    v7 = (float)(v3 + v4) * 0.5;
    v8 = v6 * 0.5 + v7;
    v9 = (int)v5;
    v19 = v17 + (float)(v6 * -0.625);
    v16 = v7 - (float)(v6 * 0.5);
    v18 = v8;
    CRGBA::CRGBA((CRGBA *)v15, 0xFFu, 0xFFu, 0xFFu, v9);
    CSprite2d::Draw((char *)this + 8, &v16, v15);
    v10 = (char *)this + 192;
    v11 = v16;
    v12 = v17;
    *((float *)this + 44) = v16;
    *((float *)this + 45) = v12;
    *((float *)this + 46) = (float)(v6 * 0.175) + v11;
    *((float *)this + 47) = v12 - (float)(v6 * 0.175);
    v13 = *((unsigned __int8 *)this + 172);
    v14 = (char *)this + 176;
    if ( v13 )
      CRGBA::CRGBA((CRGBA *)v15, 0xFFu, 0, 0, 0x7Au);
    else
      CRGBA::CRGBA((CRGBA *)v15, 0xFFu, 0xFFu, 0xFFu, v9);
    return CSprite2d::Draw(v10, v14, v15);
  }
  return result;
}


// ============================================================

// Address: 0x2c3608
// Original: _ZN23CWidgetRegionHydraulics6UpdateEv
// Demangled: CWidgetRegionHydraulics::Update(void)
char *__fastcall CWidgetRegionHydraulics::Update(CWidgetRegionHydraulics *this)
{
  int PlayerVehicle; // r0
  int v3; // r1
  int v4; // r0
  int v5; // r5
  bool v6; // zf
  int v7; // r1
  int v8; // r1
  int v9; // r1
  float v10; // s0
  float v11; // s2
  float v12; // s4
  float v13; // s6
  float v14; // s8
  float v15; // s0
  float v16; // s0
  float v17; // s2
  float v18; // s4
  float v19; // s6
  float v20; // s8
  float v21; // s0
  float v22; // s0
  double v23; // d16
  double v24; // d18
  int v25; // r0
  float v26; // s0
  float v27; // s0
  float v28; // s4
  float v29; // s6
  float v30; // s3
  float v31; // s10
  float v32; // s2
  bool v33; // fzf
  bool v34; // fnf
  float v35; // s10
  int v36; // r0
  double v37; // d16
  int v38; // r1
  float v39; // s0
  float v40; // r0
  int v41; // r1
  int v42; // r1
  double v43; // d16
  int v44; // r0
  float v45; // s0
  int v46; // r1
  char *result; // r0
  float v48[6]; // [sp+0h] [bp-18h] BYREF

  CWidgetRegion::Update(this);
  PlayerVehicle = FindPlayerVehicle(-1, 0);
  if ( !PlayerVehicle )
    goto LABEL_78;
  v3 = *(unsigned __int8 *)(PlayerVehicle + 914) << 30;
  if ( (*(_BYTE *)(PlayerVehicle + 914) & 2) != 0 )
  {
    v5 = 0;
    goto LABEL_11;
  }
  v4 = *(__int16 *)(PlayerVehicle + 38);
  if ( v4 >= 486 )
  {
    v3 = v4 - 486;
    v5 = 0;
    switch ( v4 )
    {
      case 486:
      case 525:
      case 531:
        goto LABEL_10;
      case 487:
      case 488:
      case 489:
      case 490:
      case 491:
      case 492:
      case 493:
      case 494:
      case 495:
      case 496:
      case 497:
      case 498:
      case 499:
      case 500:
      case 501:
      case 502:
      case 503:
      case 504:
      case 505:
      case 506:
      case 507:
      case 508:
      case 509:
      case 510:
      case 511:
      case 512:
      case 513:
      case 514:
      case 515:
      case 516:
      case 517:
      case 518:
      case 519:
      case 521:
      case 522:
      case 523:
      case 524:
      case 526:
      case 527:
      case 528:
      case 529:
        goto LABEL_78;
      case 520:
      case 530:
        goto LABEL_11;
      default:
        if ( v4 == 592 )
          goto LABEL_11;
        break;
    }
    goto LABEL_78;
  }
  v6 = v4 == 406;
  if ( v4 != 406 )
  {
    v3 = 443;
    v6 = v4 == 443;
  }
  if ( v6 )
  {
LABEL_10:
    v5 = 1;
LABEL_11:
    if ( CTouchInterface::IsTouchDown(0, v3) == 1 )
    {
      byte_70B62A = 1;
      CTouchInterface::GetTouchPosition((CTouchInterface *)v48, 0);
      v7 = LODWORD(v48[1]);
      *(_QWORD *)((char *)this + 196) = *(_QWORD *)v48;
    }
    if ( CTouchInterface::IsTouchDown((CTouchInterface *)((char *)&stderr + 1), v7) == 1 )
    {
      byte_70B62B = 1;
      CTouchInterface::GetTouchPosition((CTouchInterface *)v48, 1);
      v8 = LODWORD(v48[1]);
      *(_QWORD *)((char *)this + 204) = *(_QWORD *)v48;
    }
    if ( !CTouchInterface::IsTouchDown(0, v8) && byte_70B62A == 1 )
    {
      v10 = *((float *)this + 44);
      if ( *(float *)CWidget::m_vecTouchAnchor >= v10 )
      {
        v11 = *((float *)this + 46);
        if ( *(float *)CWidget::m_vecTouchAnchor <= v11 )
        {
          v12 = *((float *)this + 47);
          if ( *(float *)algn_6FA2C4 >= v12 )
          {
            v13 = *((float *)this + 45);
            if ( *(float *)algn_6FA2C4 <= v13 )
            {
              v14 = *((float *)this + 49);
              if ( v14 >= v10 && v14 <= v11 )
              {
                v15 = *((float *)this + 50);
                if ( v15 >= v12 && v15 <= v13 )
                  *((_BYTE *)this + 172) ^= 1u;
              }
            }
          }
        }
      }
      v9 = 0;
      byte_70B62A = 0;
    }
    if ( !CTouchInterface::IsTouchDown((CTouchInterface *)((char *)&stderr + 1), v9) && byte_70B62B == 1 )
    {
      v16 = *((float *)this + 44);
      if ( *(float *)&dword_6FA2C8 >= v16 )
      {
        v17 = *((float *)this + 46);
        if ( *(float *)&dword_6FA2C8 <= v17 )
        {
          v18 = *((float *)this + 47);
          if ( flt_6FA2CC[0] >= v18 )
          {
            v19 = *((float *)this + 45);
            if ( flt_6FA2CC[0] <= v19 )
            {
              v20 = *((float *)this + 51);
              if ( v20 >= v16 && v20 <= v17 )
              {
                v21 = *((float *)this + 52);
                if ( v21 >= v18 && v21 <= v19 )
                  *((_BYTE *)this + 172) ^= 1u;
              }
            }
          }
        }
      }
      byte_70B62B = 0;
    }
    if ( (*(int (__fastcall **)(CWidgetRegionHydraulics *, _DWORD))(*(_DWORD *)this + 80))(this, 0) != 1 )
      goto LABEL_78;
    v22 = *((float *)this + 40);
    v23 = CWidget::m_fElapsedTime;
    v24 = 0.25;
    if ( v23 + v23 + v22 < 0.25 )
      v24 = CWidget::m_fElapsedTime + CWidget::m_fElapsedTime + v22;
    v25 = *((unsigned __int8 *)this + 144);
    v26 = v24;
    *((float *)this + 40) = v26;
    if ( !v25 )
    {
      v37 = v26 + v23 * -0.5;
      if ( v37 <= 0.075000003 )
        v37 = 0.075000003;
      v38 = *((unsigned __int8 *)this + 172);
      *((_DWORD *)this + 38) = 0;
      *((_DWORD *)this + 39) = 0;
      *((_BYTE *)this + 144) = 0;
      *((_DWORD *)this + 41) = 0;
      *((_DWORD *)this + 42) = 0;
      v39 = v37;
      *((float *)this + 40) = v39;
      if ( !v38 )
        *((_DWORD *)this + 37) = 0;
      if ( FindPlayerPed(-1) && *(unsigned __int8 *)(FindPlayerPed(-1) + 1157) << 31 )
      {
        if ( (*(int (__fastcall **)(CWidgetRegionHydraulics *, int *, _DWORD))(*(_DWORD *)this + 12))(
               this,
               CWidget::m_vecTouchAnchor,
               0) == 1 )
        {
          *((_BYTE *)this + 144) = 1;
          v40 = *(float *)algn_6FA2C4;
          v41 = CWidget::m_vecTouchAnchor[0];
        }
        else
        {
          if ( (*(int (__fastcall **)(CWidgetRegionHydraulics *, int *, _DWORD))(*(_DWORD *)this + 12))(
                 this,
                 &dword_6FA2C8,
                 0) != 1 )
            goto LABEL_78;
          *((_BYTE *)this + 144) = 1;
          v40 = flt_6FA2CC[0];
          v41 = dword_6FA2C8;
        }
        *((_DWORD *)this + 41) = v41;
        *((float *)this + 42) = v40;
        goto LABEL_78;
      }
      goto LABEL_78;
    }
    CTouchInterface::GetTouchPosition((CTouchInterface *)v48, *((_DWORD *)this + 30));
    v27 = v48[0];
    v28 = *((float *)this + 42);
    v29 = v48[0] - *((float *)this + 41);
    v30 = -1.0;
    *((float *)this + 38) = v29;
    v31 = fabsf(v29);
    v32 = v48[1];
    if ( v29 > 0.0 )
      v30 = 1.0;
    v33 = v31 == 10.0;
    v34 = v31 < 10.0;
    v35 = 0.0;
    if ( !v34 && !v33 )
      v35 = v30;
    if ( v5 )
      v35 = -v35;
    *((float *)this + 39) = v48[1] - v28;
    if ( v35 == -1.0 )
    {
      v36 = 3;
    }
    else if ( v35 == -1.0 )
    {
      v36 = 5;
    }
    else if ( v35 == -1.0 )
    {
      v36 = 7;
    }
    else if ( v35 == 1.0 )
    {
      v36 = 4;
    }
    else
    {
      if ( v35 != 0.0 )
        goto LABEL_77;
      v36 = 1;
    }
    *((_DWORD *)this + 37) = v36;
LABEL_77:
    *((float *)this + 41) = v27;
    *((float *)this + 42) = v32;
  }
LABEL_78:
  if ( (*(int (__fastcall **)(CWidgetRegionHydraulics *, _DWORD))(*(_DWORD *)this + 80))(this, 0) != 1
    || CTheScripts::pActiveScripts && !strcmp((const char *)(CTheScripts::pActiveScripts + 8), "lowgame") )
  {
    *((_BYTE *)this + 144) = 0;
    *((_DWORD *)this + 38) = 0;
    *((_DWORD *)this + 39) = 0;
    v43 = *((float *)this + 40) + CWidget::m_fElapsedTime * -0.5;
    if ( v43 <= 0.075000003 )
      v43 = 0.075000003;
    v44 = *((unsigned __int8 *)this + 172);
    *((_DWORD *)this + 41) = 0;
    *((_DWORD *)this + 42) = 0;
    v45 = v43;
    *((float *)this + 40) = v45;
    if ( !v44 )
      *((_DWORD *)this + 37) = 0;
  }
  if ( !*((_BYTE *)this + 77) )
    *((_BYTE *)this + 172) = 0;
  if ( !CTouchInterface::IsTouchDown(0, v42) )
  {
    byte_70B62A = 0;
    *((_DWORD *)this + 49) = 0;
    *((_DWORD *)this + 50) = 0;
  }
  result = (char *)CTouchInterface::IsTouchDown((CTouchInterface *)((char *)&stderr + 1), v46);
  if ( !result )
  {
    result = &byte_70B62B;
    byte_70B62B = 0;
    *((_DWORD *)this + 51) = 0;
    *((_DWORD *)this + 52) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x2c3be8
// Original: _ZN23CWidgetRegionHydraulicsD2Ev
// Demangled: CWidgetRegionHydraulics::~CWidgetRegionHydraulics()
void __fastcall CWidgetRegionHydraulics::~CWidgetRegionHydraulics(CWidgetRegionHydraulics *this)
{
  *(_DWORD *)this = &off_664C98;
  CSprite2d::~CSprite2d((CWidgetRegionHydraulics *)((char *)this + 192));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2c3c10
// Original: _ZN23CWidgetRegionHydraulicsD0Ev
// Demangled: CWidgetRegionHydraulics::~CWidgetRegionHydraulics()
void __fastcall CWidgetRegionHydraulics::~CWidgetRegionHydraulics(CWidgetRegionHydraulics *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_664C98;
  CSprite2d::~CSprite2d((CWidgetRegionHydraulics *)((char *)this + 192));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2c3c3c
// Original: _ZN23CWidgetRegionHydraulics7GetNameEv
// Demangled: CWidgetRegionHydraulics::GetName(void)
char *__fastcall CWidgetRegionHydraulics::GetName(CWidgetRegionHydraulics *this)
{
  return "Hydraulics";
}


// ============================================================

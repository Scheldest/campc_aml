
// Address: 0x2c2030
// Original: _ZN25CWidgetRegionRhythmSelectC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionRhythmSelect::CWidgetRegionRhythmSelect(char const*,WidgetPosition const&)
int __fastcall CWidgetRegionRhythmSelect::CWidgetRegionRhythmSelect(int a1, int a2, int a3)
{
  int result; // r0
  _BYTE v5[4]; // [sp+8h] [bp-20h] BYREF
  _BYTE v6[28]; // [sp+Ch] [bp-1Ch] BYREF

  CWidgetButton::CWidgetButton(a1, a2, a3, 0, 4, 0);
  *(_DWORD *)a1 = &off_664ADC;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 216));
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 220));
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 224));
  CSprite2d::SetTexture((CSprite2d *)(a1 + 8), "cring");
  CSprite2d::SetTexture((CSprite2d *)(a1 + 216), "up");
  CSprite2d::SetTexture((CSprite2d *)(a1 + 224), "up");
  CSprite2d::SetTexture((CSprite2d *)(a1 + 220), "up");
  *(_DWORD *)(a1 + 168) = -1;
  *(_DWORD *)(a1 + 184) = 1078530011;
  *(_DWORD *)(a1 + 188) = 1078530011;
  *(_BYTE *)(a1 + 180) = 0;
  CRGBA::CRGBA((CRGBA *)v6, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  *(_BYTE *)(a1 + 192) = v6[0];
  *(_BYTE *)(a1 + 193) = v6[1];
  *(_BYTE *)(a1 + 194) = v6[2];
  *(_BYTE *)(a1 + 195) = v6[3];
  CRGBA::CRGBA((CRGBA *)v5, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  *(_BYTE *)(a1 + 196) = v5[0];
  *(_BYTE *)(a1 + 197) = v5[1];
  *(_BYTE *)(a1 + 198) = v5[2];
  *(_BYTE *)(a1 + 199) = v5[3];
  result = a1;
  *(_DWORD *)(a1 + 176) = 0;
  return result;
}


// ============================================================

// Address: 0x2c2130
// Original: _ZN25CWidgetRegionRhythmSelect6UpdateEv
// Demangled: CWidgetRegionRhythmSelect::Update(void)
int __fastcall CWidgetRegionRhythmSelect::Update(CWidgetRegionRhythmSelect *this)
{
  int *BeatInfo; // r9
  int v3; // r5
  int v4; // r4
  int v5; // r8
  int v6; // r10
  const char *v7; // r6
  int result; // r0
  char v9; // r0
  unsigned __int8 v10; // r1
  unsigned __int8 v11; // r1
  unsigned __int8 v12; // r2
  char v13; // r0
  unsigned __int8 v14; // r3
  char v15; // r0
  int v16; // r1
  char v17; // r0
  float v18; // s0
  float v19; // s2
  float v20; // s4
  float v21; // s4
  float v22; // s6
  float v23; // s0
  int v24; // r0
  int v25; // [sp+4h] [bp-24h] BYREF
  int v26[8]; // [sp+8h] [bp-20h] BYREF

  CWidgetButton::Update(this);
  BeatInfo = (int *)CAudioEngine::GetBeatInfo((CAudioEngine *)&AudioEngine);
  if ( BeatInfo[40] )
  {
    v3 = 1;
    v5 = BeatInfo[21];
    v4 = BeatInfo[20];
    dword_685F7C = v4;
    v6 = BeatInfo[42];
  }
  else
  {
    v3 = 0;
    v5 = -1;
    v6 = -1;
    v4 = dword_685F7C;
  }
  *((_BYTE *)this + 180) = 0;
  if ( v4 <= 3499
    && CTheScripts::pActiveScripts
    && ((v7 = (const char *)(CTheScripts::pActiveScripts + 8),
         !strcmp((const char *)(CTheScripts::pActiveScripts + 8), "lowgame"))
     || !strcmp(v7, "bdisply"))
    || (result = v5 + 1, v5 != -1) && (result = v4 - 1, (unsigned int)(v4 - 1) <= 0xDAA) )
  {
    *((_BYTE *)this + 180) = 1;
    if ( v3 == 1 )
    {
      if ( dword_70B624 != v6 )
      {
        byte_70B628 = 0;
        *((_DWORD *)this + 43) = -1;
        dword_70B624 = v6;
      }
      CRGBA::CRGBA((CRGBA *)v26, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
      *((_DWORD *)this + 48) = v26[0];
      if ( byte_70B628 == 1 )
      {
        switch ( *((_DWORD *)this + 43) )
        {
          case 0:
            CRGBA::CRGBA((CRGBA *)v26, 0xFFu, 0xFFu, 0, 0xFFu);
            v9 = v26[0];
            v10 = -1;
            goto LABEL_18;
          case 1:
            CRGBA::CRGBA((CRGBA *)v26, 0, 0, 0xFFu, 0xFFu);
            v11 = 0;
            *((_BYTE *)this + 192) = v26[0];
            v12 = 0;
            v13 = BYTE1(v26[0]);
            v14 = -1;
            goto LABEL_20;
          case 2:
            CRGBA::CRGBA((CRGBA *)v26, 0, 0xFFu, 0, 0xFFu);
            v9 = v26[0];
            v10 = 0;
LABEL_18:
            *((_BYTE *)this + 192) = v9;
            *(_WORD *)((char *)this + 193) = *(_WORD *)((char *)v26 + 1);
            *((_BYTE *)this + 195) = HIBYTE(v26[0]);
            CRGBA::CRGBA((CRGBA *)v26, v10, 0xFFu, 0, 0xFFu);
            goto LABEL_21;
          case 3:
            CRGBA::CRGBA((CRGBA *)v26, 0xFFu, 0xA5u, 0, 0xFFu);
            v11 = -1;
            *((_BYTE *)this + 192) = v26[0];
            v12 = -91;
            v13 = BYTE1(v26[0]);
            v14 = 0;
LABEL_20:
            *((_BYTE *)this + 193) = v13;
            *((_WORD *)this + 97) = HIWORD(v26[0]);
            CRGBA::CRGBA((CRGBA *)v26, v11, v12, v14, 0xFFu);
LABEL_21:
            *((_DWORD *)this + 49) = v26[0];
            *((_DWORD *)this + 44) = 255;
            break;
          default:
            break;
        }
      }
      switch ( v5 )
      {
        case 1:
        case 14:
          CSprite2d::SetTexture((CWidgetRegionRhythmSelect *)((char *)this + 216), "down");
          if ( (unsigned int)(dword_685F7C - 1) <= 0x1386 && *((_DWORD *)this + 42) == 1 )
          {
            CSprite2d::SetTexture((CWidgetRegionRhythmSelect *)((char *)this + 220), "down");
            *((_DWORD *)this + 43) = *((_DWORD *)this + 42);
            CRGBA::CRGBA((CRGBA *)v26, 0, 0, 0xFFu, 0xFFu);
            *((_DWORD *)this + 48) = v26[0];
            CRGBA::CRGBA((CRGBA *)v26, 0, 0, 0xFFu, 0xFFu);
            *((_WORD *)this + 98) = v26[0];
            v15 = BYTE2(v26[0]);
            goto LABEL_35;
          }
          break;
        case 2:
        case 9:
          CSprite2d::SetTexture((CWidgetRegionRhythmSelect *)((char *)this + 216), "left");
          if ( (unsigned int)(dword_685F7C - 1) <= 0x1386 && *((_DWORD *)this + 42) == 2 )
          {
            CSprite2d::SetTexture((CWidgetRegionRhythmSelect *)((char *)this + 220), "left");
            *((_DWORD *)this + 43) = *((_DWORD *)this + 42);
            CRGBA::CRGBA((CRGBA *)v26, 0, 0xFFu, 0, 0xFFu);
            *((_DWORD *)this + 48) = v26[0];
            CRGBA::CRGBA((CRGBA *)v26, 0, 0xFFu, 0, 0xFFu);
            *((_WORD *)this + 98) = v26[0];
            v15 = BYTE2(v26[0]);
            goto LABEL_35;
          }
          break;
        case 3:
        case 13:
          CSprite2d::SetTexture((CWidgetRegionRhythmSelect *)((char *)this + 216), (char *)&dword_2C2778);
          if ( (unsigned int)(dword_685F7C - 1) <= 0x1386 && !*((_DWORD *)this + 42) )
          {
            CSprite2d::SetTexture((CWidgetRegionRhythmSelect *)((char *)this + 220), (char *)&dword_2C2778);
            *((_DWORD *)this + 43) = *((_DWORD *)this + 42);
            CRGBA::CRGBA((CRGBA *)v26, 0xFFu, 0xFFu, 0, 0xFFu);
            *((_DWORD *)this + 48) = v26[0];
            CRGBA::CRGBA((CRGBA *)v26, 0xFFu, 0xFFu, 0, 0xFFu);
            *((_WORD *)this + 98) = v26[0];
            v15 = BYTE2(v26[0]);
            goto LABEL_35;
          }
          break;
        case 4:
        case 10:
          CSprite2d::SetTexture((CWidgetRegionRhythmSelect *)((char *)this + 216), "right");
          if ( (unsigned int)(dword_685F7C - 1) <= 0x1386 && *((_DWORD *)this + 42) == 3 )
          {
            CSprite2d::SetTexture((CWidgetRegionRhythmSelect *)((char *)this + 220), "right");
            *((_DWORD *)this + 43) = *((_DWORD *)this + 42);
            CRGBA::CRGBA((CRGBA *)v26, 0xFFu, 0xA5u, 0, 0xFFu);
            *((_DWORD *)this + 48) = v26[0];
            CRGBA::CRGBA((CRGBA *)v26, 0xFFu, 0xA5u, 0, 0xFFu);
            *((_WORD *)this + 98) = v26[0];
            v15 = BYTE2(v26[0]);
LABEL_35:
            *((_BYTE *)this + 198) = v15;
            *((_BYTE *)this + 199) = HIBYTE(v26[0]);
            *((_DWORD *)this + 44) = 255;
            byte_70B628 = 1;
          }
          break;
        default:
          break;
      }
      v16 = *((_DWORD *)this + 44);
      if ( v16 )
      {
        if ( BeatInfo[18] > 0 || (v17 = v16 - 10, *((_DWORD *)this + 44) = v16 - 10, v16 <= 9) )
        {
          v17 = 0;
          *((_DWORD *)this + 44) = 0;
        }
      }
      else
      {
        v17 = 0;
      }
      *((_BYTE *)this + 199) = v17;
    }
    v25 = 0;
    v26[0] = 0;
    if ( LIB_PointerGetButton(0, 0) == 3 )
    {
      LIB_PointerGetCoordinates(0, v26, &v25, 0);
      v18 = (float)v26[0];
      *((float *)this + 52) = (float)v26[0];
      v19 = (float)v25;
      *((float *)this + 53) = (float)v25;
      if ( byte_70B629 == 1 )
      {
        v20 = *((float *)this + 50);
      }
      else
      {
        v20 = v18;
        *((float *)this + 50) = v18;
        *((float *)this + 51) = v19;
        byte_70B629 = 1;
      }
      v21 = v18 - v20;
      v22 = *((float *)this + 51);
      if ( fabsf(v21) > 22.0 || fabsf(v19 - v22) > 22.0 )
      {
        *((float *)this + 50) = v18;
        *((float *)this + 51) = v19;
        *((float *)this + 46) = atan2f(COERCE_FLOAT(LODWORD(v21) ^ 0x80000000), v19 - v22);
      }
    }
    else
    {
      byte_70B629 = 0;
      *((_DWORD *)this + 42) = -1;
    }
    v23 = *((float *)this + 46);
    if ( v23 < 1.3 || v23 > 1.9 )
    {
      if ( v23 > -1.3 || v23 < -1.9 )
      {
        if ( v23 < -0.3 || v23 > 0.3 )
          v24 = -(v23 >= -3.0 && v23 < 2.9);
        else
          v24 = 1;
      }
      else
      {
        v24 = 3;
      }
    }
    else
    {
      v24 = 2;
    }
    *((_DWORD *)this + 42) = v24;
    result = LIB_PointerGetButton(0, 0);
    if ( result != 3 )
    {
      result = -1;
      *((_DWORD *)this + 42) = -1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x2c27c8
// Original: _ZN25CWidgetRegionRhythmSelect4DrawEv
// Demangled: CWidgetRegionRhythmSelect::Draw(void)
int __fastcall CWidgetRegionRhythmSelect::Draw(CWidgetRegionRhythmSelect *this)
{
  int result; // r0
  __int64 v3; // d17
  float v4; // s0
  float v5; // r5
  _BYTE v6[4]; // [sp+4h] [bp-24h] BYREF
  __int64 v7; // [sp+8h] [bp-20h] BYREF
  __int64 v8; // [sp+10h] [bp-18h]

  result = *((unsigned __int8 *)this + 180);
  if ( result )
  {
    *((_BYTE *)this + 76) = -1;
    CWidgetButton::Draw(this);
    v3 = *((_QWORD *)this + 5);
    v7 = *((_QWORD *)this + 4);
    v8 = v3;
    v4 = fabsf(*((float *)this + 9) - *((float *)this + 11));
    *(float *)&v7 = *(float *)&v7 + (float)(v4 * 0.08);
    *((float *)&v8 + 1) = *((float *)&v3 + 1) + (float)(v4 * 0.08);
    *(float *)&v8 = *(float *)&v7 + (float)(v4 * 0.85);
    *((float *)&v7 + 1) = *((float *)&v8 + 1) + (float)(fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.85);
    CSprite2d::Draw((char *)this + 216, &v7, (char *)this + 192);
    if ( *((_BYTE *)this + 199) )
      CSprite2d::Draw((char *)this + 220, &v7, (char *)this + 196);
    result = LIB_PointerGetButton(0, 0);
    if ( result == 3 )
    {
      v5 = *((float *)this + 46);
      CRGBA::CRGBA((CRGBA *)v6, 0xFFu, 0xFFu, 0xFFu, 0x80u);
      return CSprite2d::DrawRotated((int)this + 224, (int)&v7, v5);
    }
  }
  return result;
}


// ============================================================

// Address: 0x2c28b4
// Original: _ZN25CWidgetRegionRhythmSelectD2Ev
// Demangled: CWidgetRegionRhythmSelect::~CWidgetRegionRhythmSelect()
void __fastcall CWidgetRegionRhythmSelect::~CWidgetRegionRhythmSelect(CWidgetRegionRhythmSelect *this)
{
  CSprite2d *v2; // r5

  *(_DWORD *)this = &off_664ADC;
  v2 = (CWidgetRegionRhythmSelect *)((char *)this + 216);
  CSprite2d::~CSprite2d((CWidgetRegionRhythmSelect *)((char *)this + 224));
  CSprite2d::~CSprite2d((CWidgetRegionRhythmSelect *)((char *)this + 220));
  CSprite2d::~CSprite2d(v2);
  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetRegionRhythmSelect *)((char *)this + 152));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2c2904
// Original: _ZN25CWidgetRegionRhythmSelectD0Ev
// Demangled: CWidgetRegionRhythmSelect::~CWidgetRegionRhythmSelect()
void __fastcall CWidgetRegionRhythmSelect::~CWidgetRegionRhythmSelect(CWidgetRegionRhythmSelect *this)
{
  CSprite2d *v2; // r5
  void *v3; // r0

  *(_DWORD *)this = &off_664ADC;
  v2 = (CWidgetRegionRhythmSelect *)((char *)this + 216);
  CSprite2d::~CSprite2d((CWidgetRegionRhythmSelect *)((char *)this + 224));
  CSprite2d::~CSprite2d((CWidgetRegionRhythmSelect *)((char *)this + 220));
  CSprite2d::~CSprite2d(v2);
  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetRegionRhythmSelect *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v3);
}


// ============================================================

// Address: 0x2c2958
// Original: _ZN25CWidgetRegionRhythmSelect7GetNameEv
// Demangled: CWidgetRegionRhythmSelect::GetName(void)
char *__fastcall CWidgetRegionRhythmSelect::GetName(CWidgetRegionRhythmSelect *this)
{
  return "Rhythm";
}


// ============================================================

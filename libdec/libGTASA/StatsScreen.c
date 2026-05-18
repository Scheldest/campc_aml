
// Address: 0x194098
// Original: j__ZN11StatsScreenC2Ev
// Demangled: StatsScreen::StatsScreen(void)
// attributes: thunk
void __fastcall StatsScreen::StatsScreen(StatsScreen *this)
{
  _ZN11StatsScreenC2Ev(this);
}


// ============================================================

// Address: 0x2a5e28
// Original: _ZN11StatsScreenC2Ev
// Demangled: StatsScreen::StatsScreen(void)
void __fastcall StatsScreen::StatsScreen(StatsScreen *this)
{
  int Texture; // r0
  SelectScreen::MenuSelection *v3; // r0
  SelectScreen::MenuSelection *v4; // r0
  SelectScreen::MenuSelection *v5; // r0
  SelectScreen::MenuSelection *v6; // r0
  SelectScreen::MenuSelection *v7; // r0
  SelectScreen::MenuSelection *v8; // r0
  SelectScreen::MenuSelection *v9; // r0
  SelectScreen::MenuSelection *v10; // r0

  *((_BYTE *)this + 12) = 1;
  *(_DWORD *)this = &off_6625A0;
  Texture = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_selector", (const char *)&off_6625A0);
  ++*(_DWORD *)(Texture + 84);
  *(_QWORD *)((char *)this + 33) = 0LL;
  *(_QWORD *)((char *)this + 41) = 0LL;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 4) = "FEH_STA";
  *(_DWORD *)this = &off_662A10;
  *((_DWORD *)this + 1) = Texture;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 13) = -1018691584;
  *((_DWORD *)this + 14) = 0;
  AddMenuStat(3, 1);
  AddMenuStat(*((_DWORD *)this + 14) + 14, 1);
  v3 = (SelectScreen::MenuSelection *)operator new(0x10u);
  *((_DWORD *)v3 + 1) = "FES_PLA";
  *(_DWORD *)v3 = &off_66281C;
  *((_DWORD *)v3 + 2) = StatsScreen::StatsCat;
  *((_DWORD *)v3 + 3) = 0;
  SelectScreen::AddItem(this, v3);
  v4 = (SelectScreen::MenuSelection *)operator new(0x10u);
  *(_DWORD *)v4 = &off_66281C;
  *((_DWORD *)v4 + 1) = "FES_MON";
  *((_DWORD *)v4 + 2) = StatsScreen::StatsCat;
  *((_DWORD *)v4 + 3) = 1;
  SelectScreen::AddItem(this, v4);
  v5 = (SelectScreen::MenuSelection *)operator new(0x10u);
  *(_DWORD *)v5 = &off_66281C;
  *((_DWORD *)v5 + 1) = "FES_WEA";
  *((_DWORD *)v5 + 2) = StatsScreen::StatsCat;
  *((_DWORD *)v5 + 3) = 2;
  SelectScreen::AddItem(this, v5);
  v6 = (SelectScreen::MenuSelection *)operator new(0x10u);
  *(_DWORD *)v6 = &off_66281C;
  *((_DWORD *)v6 + 1) = "FES_CRI";
  *((_DWORD *)v6 + 2) = StatsScreen::StatsCat;
  *((_DWORD *)v6 + 3) = 3;
  SelectScreen::AddItem(this, v6);
  v7 = (SelectScreen::MenuSelection *)operator new(0x10u);
  *(_DWORD *)v7 = &off_66281C;
  *((_DWORD *)v7 + 1) = "FES_GAN";
  *((_DWORD *)v7 + 2) = StatsScreen::StatsCat;
  *((_DWORD *)v7 + 3) = 4;
  SelectScreen::AddItem(this, v7);
  v8 = (SelectScreen::MenuSelection *)operator new(0x10u);
  *(_DWORD *)v8 = &off_66281C;
  *((_DWORD *)v8 + 1) = "FES_ACH";
  *((_DWORD *)v8 + 2) = StatsScreen::StatsCat;
  *((_DWORD *)v8 + 3) = 5;
  SelectScreen::AddItem(this, v8);
  v9 = (SelectScreen::MenuSelection *)operator new(0x10u);
  *(_DWORD *)v9 = &off_66281C;
  *((_DWORD *)v9 + 1) = "FES_MIS";
  *((_DWORD *)v9 + 2) = StatsScreen::StatsCat;
  *((_DWORD *)v9 + 3) = 6;
  SelectScreen::AddItem(this, v9);
  v10 = (SelectScreen::MenuSelection *)operator new(0x10u);
  *(_DWORD *)v10 = &off_66281C;
  *((_DWORD *)v10 + 1) = "FES_MSC";
  *((_DWORD *)v10 + 2) = StatsScreen::StatsCat;
  *((_DWORD *)v10 + 3) = 7;
  SelectScreen::AddItem(this, v10);
}


// ============================================================

// Address: 0x2a5fdc
// Original: _ZN11StatsScreen8StatsCatEP12SelectScreeni
// Demangled: StatsScreen::StatsCat(SelectScreen *,int)
int __fastcall StatsScreen::StatsCat(int this, SelectScreen *a2, int a3)
{
  if ( *(SelectScreen **)(this + 56) != a2 )
  {
    *(_DWORD *)(this + 52) = -1018691584;
    *(_DWORD *)(this + 56) = a2;
    return j_AddMenuStat();
  }
  return this;
}


// ============================================================

// Address: 0x2a5ff8
// Original: _ZN11StatsScreenD0Ev
// Demangled: StatsScreen::~StatsScreen()
void __fastcall StatsScreen::~StatsScreen(StatsScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2a6008
// Original: _ZN11StatsScreen6UpdateEf
// Demangled: StatsScreen::Update(float)
int __fastcall StatsScreen::Update(StatsScreen *this, float a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d2
  float v6; // s0
  float v7; // s2
  float v8; // s0
  float *v9; // r0
  char *v10; // r0
  int result; // r0

  SelectScreen::Update(this, a2);
  if ( CHID::IsPressedPositive(29) == 1 )
  {
    v6 = 150.0;
  }
  else
  {
    if ( CHID::IsPressedNegative(29) == 1 )
    {
      v2.n64_f32[0] = *((float *)this + 13) + (float)(a2 * -150.0);
      goto LABEL_11;
    }
    if ( byte_6E00DA
      && *((_DWORD *)&gMobileMenu + lastDevice + 36) == 3
      && *((float *)&gMobileMenu + 2 * lastDevice + 28) > 200.0 )
    {
      v3.n64_u32[0] = -30.0;
      v2.n64_u32[0] = *((_DWORD *)this + 13);
      v7 = *((float *)this + 16);
      v8 = vmax_f32(v2, v3).n64_f32[0];
      v9 = (float *)((char *)&gMobileMenu + 8 * lastDevice);
      *((float *)this + 13) = v8;
      v2.n64_f32[0] = v8 - (float)(v9[29] - v7);
      goto LABEL_11;
    }
    v6 = 20.0;
  }
  v2.n64_f32[0] = (float)(a2 * v6) + *((float *)this + 13);
LABEL_11:
  *((_DWORD *)this + 13) = v2.n64_u32[0];
  if ( v2.n64_f32[0] < -200.0 )
    *((_DWORD *)this + 13) = -1018691584;
  v10 = (char *)&gMobileMenu + 8 * lastDevice;
  *((_DWORD *)this + 15) = *((_DWORD *)v10 + 28);
  result = *((_DWORD *)v10 + 29);
  *((_DWORD *)this + 16) = result;
  return result;
}


// ============================================================

// Address: 0x2a6130
// Original: _ZN11StatsScreen6RenderEi
// Demangled: StatsScreen::Render(int)
int __fastcall StatsScreen::Render(StatsScreen *this, int a2, unsigned __int8 a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d1
  float32x2_t v5; // d2
  float32x2_t v6; // d13
  int v8; // r5
  int v9; // r0
  unsigned __int8 v10; // r2
  int v11; // r8
  float v12; // s20
  float v13; // s31
  CMessages *v14; // r0
  unsigned __int16 v15; // r3
  CMessages *v16; // r0
  unsigned __int16 v17; // r3
  CMessages *v18; // r0
  unsigned __int16 v19; // r3
  CMessages *v20; // r0
  unsigned __int16 v21; // r3
  CMessages *v22; // r0
  unsigned __int16 v23; // r3
  CMessages *v24; // r0
  unsigned __int16 v25; // r3
  CMessages *v26; // r0
  unsigned __int16 v27; // r3
  CMessages *v28; // r0
  unsigned __int16 v29; // r3
  CMessages *v30; // r0
  unsigned __int16 v31; // r3
  CMessages *v32; // r0
  unsigned __int16 v33; // r3
  bool v34; // zf
  float v35; // s25
  float i; // s29
  float v37; // s2
  float v38; // s2
  int v39; // s0
  float32x2_t v40; // d0
  unsigned int v41; // r11
  int v42; // r0
  unsigned __int16 v43; // r1
  __int64 v44; // r0
  CMessages *v45; // r0
  unsigned __int16 v46; // r3
  unsigned __int8 v47; // r2
  CMessages *v48; // r0
  unsigned __int16 v49; // r3
  CMessages *v50; // r0
  unsigned __int16 v51; // r3
  CMessages *v52; // r0
  unsigned __int16 v53; // r3
  unsigned __int8 v54; // r3
  CMessages *v55; // r0
  unsigned __int16 v56; // r3
  CPed *PlayerPed; // r0
  int WeaponSkill; // r0
  char *v59; // r1
  const unsigned __int16 *v60; // r1
  unsigned __int8 v61; // r2
  int CriminalRatingNumber; // r0
  CStats *v63; // r0
  const unsigned __int16 *CriminalRatingString; // r0
  float v65; // r1
  float v66; // s22
  bool v67; // r1
  float v68; // r1
  float v69; // r6
  float v70; // s18
  bool v71; // r1
  int v72; // r0
  int v73; // r0
  unsigned int v76; // [sp+C8h] [bp-2A8h]
  unsigned __int16 v77[4]; // [sp+DCh] [bp-294h] BYREF
  _BYTE v78[4]; // [sp+E4h] [bp-28Ch] BYREF
  _BYTE v79[4]; // [sp+E8h] [bp-288h] BYREF
  int v80; // [sp+ECh] [bp-284h] BYREF
  int v81; // [sp+F0h] [bp-280h] BYREF
  int v82; // [sp+F4h] [bp-27Ch] BYREF
  _BYTE v83[4]; // [sp+F8h] [bp-278h] BYREF
  float v84; // [sp+FCh] [bp-274h]
  int v85; // [sp+100h] [bp-270h] BYREF
  unsigned __int16 v86[256]; // [sp+104h] [bp-26Ch] BYREF
  int v87; // [sp+304h] [bp-6Ch] BYREF
  int v88; // [sp+308h] [bp-68h] BYREF
  int v89; // [sp+30Ch] [bp-64h] BYREF

  v8 = CStats::ConstructStatLine((CStats *)((char *)&elf_hash_chain[8525] + 3), *((unsigned __int8 *)this + 56), a3);
  CRGBA::CRGBA((CRGBA *)&v89, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
  CRGBA::CRGBA((CRGBA *)&v88, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  if ( v8 >= 1 )
  {
    v4.n64_u32[0] = -30.0;
    v3.n64_u32[0] = *((_DWORD *)this + 13);
    v11 = 0;
    v6.n64_u32[0] = 1132396544;
    v12 = (float)(v8 + 7) * 34.0;
    v13 = (float)(50.0 - vmax_f32(v3, v4).n64_f32[0]) + -34.0;
    v76 = 0;
    while ( 1 )
    {
      CStats::ConstructStatLine((CStats *)v11, *((unsigned __int8 *)this + 56), v10);
      v9 = gGxtString[0];
      v35 = v13 + 34.0;
      if ( !gGxtString[0] )
        v35 = v13;
      for ( i = v35; i < 50.0; i = v12 + i )
        ;
      while ( i > (float)((float)dword_9FC904 + -50.0) )
        i = i - v12;
      if ( i <= 20.0 || i >= 450.0 )
      {
        v13 = v35;
        goto LABEL_71;
      }
      v37 = 0.0;
      v5.n64_u32[0] = 0;
      if ( i > 390.0 )
        v37 = (float)(420.0 - i) * 8.0;
      if ( i < 420.0 )
        v5.n64_f32[0] = v37;
      v38 = v5.n64_f32[0];
      if ( i < 80.0 )
        v38 = (float)(i + -50.0) * 8.0;
      if ( i > 50.0 )
        v5.n64_f32[0] = v38;
      v39 = v5.n64_u32[0];
      if ( i <= 390.0 )
        v39 = 1132396544;
      if ( i >= 80.0 )
        v5.n64_u32[0] = v39;
      v40.n64_u64[0] = vmin_f32(v5, v6).n64_u64[0];
      v41 = (unsigned int)v40.n64_f32[0];
      HIBYTE(v89) = (unsigned int)v40.n64_f32[0];
      v87 = v89;
      HIBYTE(v88) = HIBYTE(v89);
      v42 = 1131413504;
      if ( !*((_DWORD *)this + 14) )
        v42 = 1129447424;
      MenuScreen::DrawTextDirect(
        (int)v86,
        (int)this,
        (int)gGxtString,
        0,
        1,
        (int)&v87,
        1,
        1129447424,
        COERCE_INT(i + 8.5),
        v42,
        1099431936,
        0,
        0);
      if ( CStats::m_ThisStatIsABarChart[0] )
      {
        v44 = (unsigned int)CStats::GetStatValue((CStats *)CStats::m_ThisStatIsABarChart[0], v43) | 0x43E6000000000000LL;
        v5.n64_u32[0] = 1.0;
        v40.n64_f32[0] = *(float *)&v44 / 1000.0;
        v5.n64_u64[0] = vmin_f32(v40, v5).n64_u64[0];
        if ( (float)(*(float *)&v44 / 1000.0) < 0.0 )
          v5.n64_u32[0] = 0;
        v9 = MenuScreen::DrawSlider(
               (int)this,
               SHIDWORD(v44),
               COERCE_INT(i + 8.5),
               1142456320,
               i + 25.5,
               v5.n64_f32[0],
               0,
               v41);
        goto LABEL_51;
      }
      v45 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"STAT328");
      if ( CMessages::GxtStringCompare(v45, gGxtString, (unsigned __int16 *)&elf_hash_bucket[37], v46)
        || (v48 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"ST_LAB0"),
            CMessages::GxtStringCompare(v48, gGxtString, (unsigned __int16 *)&elf_hash_bucket[37], v49))
        || (v50 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"ST_LAB1"),
            CMessages::GxtStringCompare(v50, gGxtString, (unsigned __int16 *)&elf_hash_bucket[37], v51))
        || (v52 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"ST_LAB2"),
            CMessages::GxtStringCompare(v52, gGxtString, (unsigned __int16 *)&elf_hash_bucket[37], v53)) )
      {
        CStats::ConstructStatLine((CStats *)v11, *((unsigned __int8 *)this + 56), v47);
        v55 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"STAT328");
        if ( CMessages::GxtStringCompare(v55, gGxtString, (unsigned __int16 *)&elf_hash_bucket[37], v56) )
        {
          PlayerPed = (CPed *)FindPlayerPed(-1);
          WeaponSkill = CPed::GetWeaponSkill(PlayerPed);
          switch ( WeaponSkill )
          {
            case 0:
              goto LABEL_65;
            case 2:
              v59 = "WS_PRO";
              break;
            case 1:
              v59 = "WS_STD";
              break;
            default:
LABEL_65:
              v59 = "WS_POOR";
              break;
          }
          v60 = (const unsigned __int16 *)CText::Get((CText *)TheText, (CKeyGen *)v59);
        }
        else
        {
          v60 = gGxtString2;
        }
        GxtCharStrcpy(v86, v60);
        AsciiToGxtChar((const char *)&dword_2A6AA4, v77);
        GxtCharStrcat(v86, v77);
        CStats::ConstructStatLine((CStats *)(v11 + 1), *((unsigned __int8 *)this + 56), v61);
        GxtCharStrcat(v86, gGxtString2);
        if ( byte_98F140 == 5 )
        {
          v85 = v88;
          MenuScreen::DrawTextDirect(
            (int)v83,
            (int)this,
            (int)v86,
            2,
            1,
            (int)&v85,
            1,
            1135869952,
            COERCE_INT(i + 8.5),
            1132068864,
            1099431936,
            0,
            0);
        }
        else
        {
          v82 = v88;
          MenuScreen::DrawTextDirect(
            (int)v83,
            (int)this,
            (int)v86,
            2,
            1,
            (int)&v82,
            1,
            1139146752,
            COERCE_INT(i + 8.5),
            1125515264,
            1099431936,
            0,
            0);
        }
        v9 = (int)&stderr + 1;
        v13 = v35;
        v76 = (unsigned int)&stderr + 1;
        goto LABEL_71;
      }
      if ( COERCE_FLOAT(CFont::GetStringWidth((CFont *)gGxtString2, (unsigned __int16 *)((char *)&stderr + 1), 0, v54)) <= 200.0 )
        break;
      v14 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"NOSTUC");
      if ( !CMessages::GxtStringCompare(v14, gGxtString2, (unsigned __int16 *)&elf_hash_bucket[37], v15) )
      {
        v16 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"INSTUN");
        if ( !CMessages::GxtStringCompare(v16, gGxtString2, (unsigned __int16 *)&elf_hash_bucket[37], v17) )
        {
          v18 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"PRINST");
          if ( !CMessages::GxtStringCompare(v18, gGxtString2, (unsigned __int16 *)&elf_hash_bucket[37], v19) )
          {
            v20 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"DBINST");
            if ( !CMessages::GxtStringCompare(v20, gGxtString2, (unsigned __int16 *)&elf_hash_bucket[37], v21) )
            {
              v22 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"DBPINS");
              if ( !CMessages::GxtStringCompare(v22, gGxtString2, (unsigned __int16 *)&elf_hash_bucket[37], v23) )
              {
                v24 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"TRINST");
                if ( !CMessages::GxtStringCompare(v24, gGxtString2, (unsigned __int16 *)&elf_hash_bucket[37], v25) )
                {
                  v26 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"PRTRST");
                  if ( !CMessages::GxtStringCompare(v26, gGxtString2, (unsigned __int16 *)&elf_hash_bucket[37], v27) )
                  {
                    v28 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"QUINST");
                    if ( !CMessages::GxtStringCompare(v28, gGxtString2, (unsigned __int16 *)&elf_hash_bucket[37], v29) )
                    {
                      v30 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"PQUINS");
                      if ( !CMessages::GxtStringCompare(v30, gGxtString2, (unsigned __int16 *)&elf_hash_bucket[37], v31) )
                      {
                        v32 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"NOSTUC");
                        if ( !CMessages::GxtStringCompare(
                                v32,
                                gGxtString2,
                                (unsigned __int16 *)&elf_hash_bucket[37],
                                v33) )
                          break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v81 = v88;
      v9 = MenuScreen::DrawTextDirect(
             (int)v86,
             (int)this,
             (int)gGxtString2,
             2,
             1,
             (int)&v81,
             1,
             1134886912,
             COERCE_INT((float)(i + 8.5) + 17.0),
             1133248512,
             1099431936,
             0,
             0);
      v13 = v35 + 17.0;
LABEL_71:
      if ( ++v11 == v8 )
        goto LABEL_72;
    }
    v10 = v76;
    v34 = v8 == 16;
    if ( v8 == 16 )
      v34 = v11 == 1;
    if ( v34 )
    {
      v9 = *((_DWORD *)this + 14) == 2;
      if ( (v76 | v9) << 31 )
      {
        v10 = v76 & v9;
        v76 &= v9;
LABEL_51:
        v13 = v35;
        goto LABEL_71;
      }
    }
    else if ( v76 << 31 )
    {
      v9 = 0;
      v76 = 0;
      goto LABEL_51;
    }
    v80 = v88;
    v76 = 0;
    v9 = MenuScreen::DrawTextDirect(
           (int)v86,
           (int)this,
           (int)gGxtString2,
           2,
           1,
           (int)&v80,
           1,
           1139146752,
           COERCE_INT(i + 8.5),
           1125515264,
           1099431936,
           0,
           0);
    goto LABEL_51;
  }
LABEL_72:
  CriminalRatingNumber = CStats::FindCriminalRatingNumber((CStats *)v9);
  sub_5E6BC0(&gString, (const char *)&dword_2A6B58, CriminalRatingNumber);
  v63 = (CStats *)AsciiToGxtChar((const char *)&gString, v86);
  CriminalRatingString = (const unsigned __int16 *)CStats::FindCriminalRatingString(v63);
  GxtCharStrcpy(gGxtString, CriminalRatingString);
  CFont::SetScale(COERCE_CFONT_((float)((float)dword_9FC904 * 1.35) / 480.0), v65);
  v66 = (float)dword_9FC904 + (float)((float)dword_9FC904 * -0.0);
  if ( (float)((float)((float)(v66 - COERCE_FLOAT(CFont::GetHeight(0, v67))) * 480.0) / (float)dword_9FC904) <= 449.5 )
  {
    CFont::SetScale(COERCE_CFONT_((float)((float)dword_9FC904 * 1.35) / 480.0), v68);
    v70 = (float)dword_9FC904 + (float)((float)dword_9FC904 * -0.0);
    v69 = (float)((float)(v70 - COERCE_FLOAT(CFont::GetHeight(0, v71))) * 480.0) / (float)dword_9FC904;
  }
  else
  {
    v69 = 449.5;
  }
  CRGBA::CRGBA((CRGBA *)v79, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
  v72 = (*(int (__fastcall **)(StatsScreen *))(*(_DWORD *)this + 48))(this);
  MenuScreen::DrawTextDirect(
    (int)v83,
    (int)this,
    (int)gGxtString,
    0,
    3,
    (int)v79,
    1,
    v72,
    SLODWORD(v69),
    1128792064,
    1099956224,
    0,
    0);
  CRGBA::CRGBA((CRGBA *)v78, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  MenuScreen::DrawTextDirect(
    (int)v77,
    (int)this,
    (int)v86,
    0,
    3,
    v73,
    1,
    COERCE_INT(v84 + 10.0),
    SLODWORD(v69),
    1128792064,
    1099956224,
    0,
    0);
  return SelectScreen::Render(this, a2);
}


// ============================================================

// Address: 0x2a6b7c
// Original: _ZN11StatsScreen12GetMenuRightEv
// Demangled: StatsScreen::GetMenuRight(void)
int __fastcall StatsScreen::GetMenuRight(StatsScreen *this)
{
  return 1128792064;
}


// ============================================================

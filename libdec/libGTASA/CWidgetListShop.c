
// Address: 0x18d45c
// Original: j__ZN15CWidgetListShop12LoadFromFileEv
// Demangled: CWidgetListShop::LoadFromFile(void)
// attributes: thunk
int __fastcall CWidgetListShop::LoadFromFile(CWidgetListShop *this)
{
  return _ZN15CWidgetListShop12LoadFromFileEv(this);
}


// ============================================================

// Address: 0x18eafc
// Original: j__ZN15CWidgetListShopC2EPKcS1_RK14WidgetPositionPS1_ib
// Demangled: CWidgetListShop::CWidgetListShop(char const*,char const*,WidgetPosition const&,char const**,int,bool)
// attributes: thunk
int __fastcall CWidgetListShop::CWidgetListShop(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return _ZN15CWidgetListShopC2EPKcS1_RK14WidgetPositionPS1_ib(a1, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x19447c
// Original: j__ZN15CWidgetListShop11AssignImageEi
// Demangled: CWidgetListShop::AssignImage(int)
// attributes: thunk
int __fastcall CWidgetListShop::AssignImage(CWidgetListShop *this, int a2)
{
  return _ZN15CWidgetListShop11AssignImageEi(this, a2);
}


// ============================================================

// Address: 0x2bab90
// Original: _ZN15CWidgetListShopC2EPKcS1_RK14WidgetPositionPS1_ib
// Demangled: CWidgetListShop::CWidgetListShop(char const*,char const*,WidgetPosition const&,char const**,int,bool)
int __fastcall CWidgetListShop::CWidgetListShop(int a1, const char *a2, int a3, int a4, int a5, int a6, char a7)
{
  int v9; // r2
  int v10; // r5
  char v12; // [sp+14h] [bp-14h] BYREF
  char v13; // [sp+15h] [bp-13h]
  char v14; // [sp+16h] [bp-12h]
  char v15; // [sp+17h] [bp-11h]

  CWidgetList::CWidgetList(a1, a3, a4, a5, a6, 0, 1, 0);
  *(_BYTE *)(a1 + 72918) = 1;
  v9 = *(_DWORD *)(a1 + 128);
  *(int *)((char *)&elf_hash_chain[1750] + a1) = 0;
  *(_DWORD *)a1 = &off_663EB0;
  *(_DWORD *)(a1 + 128) = v9 | 4;
  if ( !a2 )
    a2 = &byte_61CD7E;
  strcpy((char *)(a1 + 72944), a2);
  *(float *)(a1 + 72884) = (float)((float)dword_9FC904 / 448.0) * 40.0;
  CRGBA::CRGBA((CRGBA *)&v12, 0, 0, 0, 0);
  *((_BYTE *)&elf_hash_chain[1756] + a1) = v12;
  *(_BYTE *)(a1 + 72921) = v13;
  *(_BYTE *)(a1 + 72922) = v14;
  *(_BYTE *)(a1 + 72923) = v15;
  CRGBA::CRGBA((CRGBA *)&v12, 0xFFu, 0xFFu, 0xFFu, 0x40u);
  *((_BYTE *)&elf_hash_chain[1757] + a1) = v12;
  *(_BYTE *)(a1 + 72925) = v13;
  *(_BYTE *)(a1 + 72926) = v14;
  *(_BYTE *)(a1 + 72927) = v15;
  CRGBA::CRGBA((CRGBA *)&v12, 0xFFu, 0xFFu, 0xFFu, 0x20u);
  *((_BYTE *)&elf_hash_chain[1758] + a1) = v12;
  *(_BYTE *)(a1 + 72929) = v13;
  *(_BYTE *)(a1 + 72930) = v14;
  *(_BYTE *)(a1 + 72931) = v15;
  CRGBA::CRGBA((CRGBA *)&v12, 0xFFu, 0xFFu, 0xFFu, 0);
  *((_BYTE *)&elf_hash_chain[1759] + a1) = v12;
  *(_BYTE *)(a1 + 72933) = v13;
  *(_BYTE *)(a1 + 72934) = v14;
  *(_BYTE *)(a1 + 72935) = v15;
  CRGBA::CRGBA((CRGBA *)&v12, 0xFFu, 0xFFu, 0xFFu, 0);
  *((_BYTE *)&elf_hash_chain[1760] + a1) = v12;
  *(_BYTE *)(a1 + 72937) = v13;
  *(_BYTE *)(a1 + 72938) = v14;
  *(_BYTE *)(a1 + 72939) = v15;
  *((_BYTE *)&elf_hash_chain[1826] + a1) = a7;
  if ( *(int *)(a1 + 72880) >= 1 )
  {
    v10 = 0;
    do
      CWidgetListShop::AssignImage((CWidgetListShop *)a1, v10++);
    while ( v10 < *(_DWORD *)(a1 + 72880) );
  }
  return a1;
}


// ============================================================

// Address: 0x2baddc
// Original: _ZN15CWidgetListShop12AssignImagesEv
// Demangled: CWidgetListShop::AssignImages(void)
int __fastcall CWidgetListShop::AssignImages(CWidgetListShop *this)
{
  int result; // r0
  int *v3; // r6
  int v4; // r5

  result = 72880;
  if ( *((int *)this + 18220) >= 1 )
  {
    v3 = (int *)((char *)this + 72880);
    v4 = 0;
    do
    {
      CWidgetListShop::AssignImage(this, v4);
      result = *v3;
      ++v4;
    }
    while ( v4 < *v3 );
  }
  return result;
}


// ============================================================

// Address: 0x2bae0e
// Original: _ZN15CWidgetListShop6UpdateEv
// Demangled: CWidgetListShop::Update(void)
char *__fastcall CWidgetListShop::Update(CWidgetListShop *this)
{
  float v2; // s10
  float v3; // s0
  float v4; // s8
  float v5; // s6
  char *result; // r0

  CWidget::SetEnabled(this, 1);
  CWidgetList::Update(this);
  v2 = *((float *)this + 11);
  v3 = *((float *)this + 10) + -2.0;
  v4 = *((float *)this + 18221);
  v5 = v4 + (float)(*((float *)this + 9) + -2.0);
  *((float *)this + 18216) = *((float *)this + 8) + 2.0;
  *((float *)this + 18218) = v3;
  *((float *)this + 18217) = v5;
  result = (char *)this + 72876;
  *((float *)this + 18219) = (float)(v2 + 2.0) - v4;
  return result;
}


// ============================================================

// Address: 0x2bae88
// Original: _ZN15CWidgetListShop4DrawEv
// Demangled: CWidgetListShop::Draw(void)
int __fastcall CWidgetListShop::Draw(CWidgetListShop *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d2
  float32x2_t v4; // d4
  unsigned int v6; // r1
  int v7; // r0
  unsigned __int8 v8; // r2
  float v9; // r1
  unsigned __int8 v10; // r1
  float v11; // r1
  unsigned __int8 v12; // r1
  signed __int8 v13; // r1
  int v14; // s0
  float *v15; // r4
  float v16; // s18
  CFont *v17; // r0
  char *v18; // r6
  int v19; // r8
  float *v20; // r9
  float *v21; // r5
  float *v22; // r2
  float v23; // s18
  float v24; // s20
  int v25; // r1
  float v26; // s27
  float v27; // s29
  float v28; // s0
  int v29; // r0
  char *v30; // r11
  bool v31; // zf
  int PlayerPed; // r0
  bool v33; // zf
  int v34; // r0
  unsigned __int8 *v35; // r1
  unsigned __int8 v36; // r1
  float v37; // r0
  float v38; // r1
  float v39; // s31
  bool v40; // r1
  float v41; // s16
  float v42; // s23
  bool v43; // r1
  float v44; // s2
  float v45; // s16
  float v46; // s23
  CFont *v47; // r0
  unsigned __int16 *v48; // r3
  CFont *v49; // r0
  const unsigned __int16 *v50; // r0
  unsigned __int16 *v51; // r3
  float v52; // s16
  float v53; // s27
  float v54; // s16
  CFont *v55; // r0
  unsigned __int16 *v56; // r3
  CFont *v57; // r0
  unsigned __int8 v58; // r1
  float v59; // r0
  float v60; // s16
  float v61; // s18
  CFont *v62; // s16
  CFont *v63; // r0
  char *v64; // r1
  unsigned __int8 v65; // r3
  float v66; // r0
  float v67; // s0
  float v68; // r0
  float v69; // s20
  float v70; // s0
  CFont *v71; // r0
  unsigned __int16 *v72; // r3
  CFont *v73; // r0
  _BYTE *v75; // [sp+44h] [bp-494h]
  _BYTE v76[4]; // [sp+48h] [bp-490h] BYREF
  _BYTE v77[4]; // [sp+4Ch] [bp-48Ch] BYREF
  unsigned __int16 v78[256]; // [sp+50h] [bp-488h] BYREF
  __int64 v79; // [sp+250h] [bp-288h] BYREF
  __int64 v80; // [sp+258h] [bp-280h]
  _BYTE v81[4]; // [sp+450h] [bp-88h] BYREF
  _BYTE v82[4]; // [sp+454h] [bp-84h] BYREF
  _BYTE v83[4]; // [sp+458h] [bp-80h] BYREF
  float v84; // [sp+45Ch] [bp-7Ch] BYREF
  float v85; // [sp+460h] [bp-78h]
  float v86; // [sp+464h] [bp-74h]
  float v87; // [sp+468h] [bp-70h]
  _BYTE v88[4]; // [sp+46Ch] [bp-6Ch] BYREF
  _BYTE v89[104]; // [sp+470h] [bp-68h] BYREF

  CFont::RenderFontBuffer(this);
  v6 = *((_DWORD *)this + 10);
  LODWORD(v79) = *((_DWORD *)this + 8);
  v80 = v6;
  *((float *)&v79 + 1) = (float)dword_9FC904;
  CRGBA::CRGBA((CRGBA *)v78, 0, 0, 0, 0xFFu);
  CRGBA::CRGBA((CRGBA *)&v84, 0, 0, 0, 0x64u);
  CRGBA::CRGBA((CRGBA *)v89, 0, 0, 0, 0xFFu);
  CRGBA::CRGBA((CRGBA *)v88, 0, 0, 0, 0x64u);
  CSprite2d::DrawRect((int)&v79, (int)v78, (int)&v84, (int)v89, v7);
  CFont::SetBackground(0, 0, v8);
  CFont::SetWrapx(COERCE_CFONT_((float)dword_9FC900), v9);
  CFont::SetOrientation((CFont *)((char *)&stderr + 1), v10);
  CFont::SetCentreSize(COERCE_CFONT_((float)((float)dword_9FC900 / 640.0) * 640.0), v11);
  CFont::SetProportional((CFont *)((char *)&stderr + 1), v12);
  CFont::SetEdge((CFont *)((char *)&stderr + 1), v13);
  CWidgetList::Draw(this);
  v14 = dword_9FC900;
  v15 = (float *)((char *)this + 72884);
  v16 = *((float *)this + 18221);
  CWidget::SetScissor();
  v17 = (CFont *)*((_DWORD *)this + 18220);
  if ( (int)v17 <= 0 )
  {
    v20 = (float *)((char *)this + 72904);
    v17 = (CWidgetListShop *)((char *)this + 69632);
    v21 = (float *)((char *)this + 72848);
  }
  else
  {
    v75 = (char *)this + 73200;
    v18 = (char *)this + 272;
    v19 = 0;
    v20 = (float *)((char *)this + 72904);
    v21 = (float *)((char *)this + 72848);
    v22 = (float *)((char *)this + 72860);
    v23 = v16 * 0.875;
    v24 = (float)((float)v14 / 640.0) * 3.0;
    do
    {
      v25 = v19++;
      v26 = *v22 + (float)(*v15 * (float)v25);
      if ( v26 > (float)((float)(*((float *)this + 11) - *v15) + 2.0)
        && (float)(*v22 + (float)(*v15 * (float)v19)) < (float)((float)(*v15 + *((float *)this + 9)) + -2.0) )
      {
        v27 = COERCE_FLOAT(CWidgetList::GetAlphaAtIndex(this, v25));
        v3.n64_f32[0] = v24 + *v21;
        v2.n64_f32[0] = (float)dword_9FC900 * 0.0;
        v4.n64_f32[0] = v23 + v3.n64_f32[0];
        v28 = v26 + (float)((float)(*v15 - v23) * 0.5);
        v3.n64_u64[0] = vmax_f32(v3, v2).n64_u64[0];
        v2.n64_f32[0] = v23 + v2.n64_f32[0];
        v84 = v3.n64_f32[0];
        v2.n64_u64[0] = vmax_f32(v4, v2).n64_u64[0];
        v86 = v2.n64_f32[0];
        v87 = v28;
        v85 = v23 + v28;
        v30 = v18 + 128;
        v29 = *((_DWORD *)v18 + 32);
        v31 = v29 == 0;
        if ( v29 )
          v31 = *v75 == 0;
        if ( !v31 )
        {
          if ( v18[152] )
          {
            CRGBA::CRGBA(
              (CRGBA *)&v79,
              0,
              0,
              0,
              (unsigned int)(float)(v27
                                  * (float)((float)((float)(unsigned __int8)v18[151] / 255.0)
                                          * (float)*((unsigned __int8 *)this + 76))));
            CSprite2d::DrawRect();
            v84 = v24 + v84;
            v85 = v85 - v24;
            v86 = v86 - v24;
            v87 = v24 + v87;
          }
          if ( !strcasecmp(v18 - 128, "CARCOL1") || !strcasecmp(v18 - 128, "CARCOL2") )
          {
            PlayerPed = FindPlayerPed(0);
            v33 = PlayerPed == 0;
            if ( PlayerPed )
            {
              v30 = *(char **)(PlayerPed + 1424);
              v33 = v30 == 0;
            }
            if ( !v33 )
            {
              v34 = strcasecmp(v18 - 128, "CARCOL1");
              v35 = (unsigned __int8 *)(v30 + 1081);
              if ( !v34 )
                v35 = (unsigned __int8 *)(v30 + 1080);
              CRGBA::CRGBA(
                (CRGBA *)&v79,
                CVehicleModelInfo::ms_vehicleColourTable[4 * *v35],
                CVehicleModelInfo::ms_vehicleColourTable[4 * *v35 + 1],
                CVehicleModelInfo::ms_vehicleColourTable[4 * *v35 + 2],
                (unsigned int)(float)(v27
                                    * (float)((float)((float)(unsigned __int8)v18[151] / 255.0)
                                            * (float)*((unsigned __int8 *)this + 76))));
              CSprite2d::DrawRect();
            }
          }
          else
          {
            CRGBA::CRGBA(
              (CRGBA *)&v79,
              (unsigned int)(float)((float)((float)(unsigned __int8)v18[148] / 255.0)
                                  * (float)*((unsigned __int8 *)this + 73)),
              (unsigned int)(float)((float)((float)(unsigned __int8)v18[149] / 255.0)
                                  * (float)*((unsigned __int8 *)this + 74)),
              (unsigned int)(float)((float)((float)(unsigned __int8)v18[150] / 255.0)
                                  * (float)*((unsigned __int8 *)this + 75)),
              (unsigned int)(float)(v27
                                  * (float)((float)((float)(unsigned __int8)v18[151] / 255.0)
                                          * (float)*((unsigned __int8 *)this + 76))));
            CSprite2d::Draw(
              (int)(v18 + 128),
              (int)&v84,
              (int)&v79,
              *((_DWORD *)v18 + 33),
              *((float *)v18 + 36),
              *((float *)v18 + 35),
              *((float *)v18 + 36),
              *((float *)v18 + 33),
              *((float *)v18 + 34),
              *((float *)v18 + 35),
              *((float *)v18 + 34));
          }
        }
        CRGBA::CRGBA(
          (CRGBA *)v83,
          0xFFu,
          0xFFu,
          0xFFu,
          (unsigned int)(float)(v27 * (float)*((unsigned __int8 *)this + 76)));
        CFont::SetColor();
        CRGBA::CRGBA((CRGBA *)v82, 0, 0, 0, (unsigned int)(float)(v27 * (float)*((unsigned __int8 *)this + 76)));
        CFont::SetDropColor();
        CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v36);
        v20 = (float *)((char *)this + 72904);
        v37 = *v15 * 0.0225;
        *((float *)this + 18226) = v37;
        CFont::SetScale((CFont *)LODWORD(v37), v38);
        CWidgetList::ShrinkTextToFit(this, (float)(*((float *)this + 18214) - v86) - (float)(v24 * 4.0));
        v39 = v23 * 0.5;
        if ( *v75 )
          v39 = v23;
        if ( !strcasecmp(v18, (const char *)&dword_2BB698) )
        {
          v52 = *v15 * 0.5;
          v53 = (float)(v26 + v52) - (float)(COERCE_FLOAT(CFont::GetHeight(0, v40)) * 0.5);
          v54 = (float)(v24 + v24) + (float)(v39 + v84);
          v55 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)(v18 - 128));
          v57 = (CFont *)CFont::PrintString((CFont *)LODWORD(v54), v53, v55, v56);
          CFont::RenderFontBuffer(v57);
        }
        else
        {
          v41 = COERCE_FLOAT(CFont::GetHeight(0, v40));
          v42 = v26 + (float)(*v15 * 0.5);
          v44 = v42 - COERCE_FLOAT(CFont::GetHeight(0, v43));
          v45 = v41 * 0.1;
          v46 = v24 + (float)(v39 + v84);
          v47 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)(v18 - 128));
          v49 = (CFont *)CFont::PrintString((CFont *)LODWORD(v46), v44 - v45, v47, v48);
          CFont::RenderFontBuffer(v49);
          CRGBA::CRGBA(
            (CRGBA *)v81,
            0x51u,
            0x9Cu,
            0x42u,
            (unsigned int)(float)(v27 * (float)*((unsigned __int8 *)this + 76)));
          CFont::SetColor();
          v50 = (const unsigned __int16 *)CText::Get((CText *)TheText, (CKeyGen *)"DOLLAR");
          GxtCharStrcpy((unsigned __int16 *)&v79, v50);
          AsciiToGxtChar(v18, v78);
          GxtCharStrcat((unsigned __int16 *)&v79, v78);
          CFont::PrintString(
            COERCE_CFONT_(v24 + (float)(v39 + v84)),
            v45 + (float)(v26 + (float)(*v15 * 0.5)),
            (CFont *)&v79,
            v51);
        }
        v22 = (float *)((char *)this + 72860);
        v21 = (float *)((char *)this + 72848);
        v17 = (CFont *)*((_DWORD *)this + 18220);
      }
      v18 += 284;
    }
    while ( v19 < (int)v17 );
  }
  CFont::RenderFontBuffer(v17);
  v79 = 0LL;
  v80 = 0LL;
  CWidget::SetScissor();
  CFont::SetFontStyle(0, v58);
  CRGBA::CRGBA((CRGBA *)v77, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  CFont::SetColor();
  CRGBA::CRGBA((CRGBA *)v76, 0, 0, 0, 0xFFu);
  CFont::SetDropColor();
  v59 = *v15 * 0.08;
  v60 = (float)dword_9FC900;
  v61 = *v21;
  *v20 = v59;
  CFont::SetScale((CFont *)LODWORD(v59), COERCE_FLOAT(&RsGlobal));
  v2.n64_f32[0] = v60 * 0.0;
  v1.n64_f32[0] = v61 + (float)((float)(v60 / 640.0) * 5.0);
  v62 = (CFont *)vmax_f32(v1, v2).n64_u32[0];
  v63 = (CFont *)CText::Get((CText *)TheText, (CWidgetListShop *)((char *)this + 72944));
  if ( v63 )
  {
    v66 = COERCE_FLOAT(CFont::GetStringWidth(v63, (unsigned __int16 *)((char *)&stderr + 1), 0, v65));
    v64 = (char *)this + 72856;
    v67 = (float)(*((float *)this + 18214) - *(float *)&v62) + (float)((float)((float)dword_9FC900 / -640.0) * 10.0);
    if ( v66 > v67 )
    {
      v68 = (float)(v67 / v66) * *v20;
      *v20 = v68;
      CFont::SetScale((CFont *)LODWORD(v68), *(float *)&v64);
    }
  }
  v69 = (float)dword_9FC904;
  v70 = COERCE_FLOAT(CFont::GetHeight(0, (bool)v64)) * -0.5;
  v71 = (CFont *)CText::Get((CText *)TheText, (CWidgetListShop *)((char *)this + 72944));
  v73 = (CFont *)CFont::PrintString(v62, (float)(v69 * 0.1) + v70, v71, v72);
  return CFont::RenderFontBuffer(v73);
}


// ============================================================

// Address: 0x2bb6d0
// Original: _ZN15CWidgetListShop12LoadFromFileEv
// Demangled: CWidgetListShop::LoadFromFile(void)
int __fastcall CWidgetListShop::LoadFromFile(CWidgetListShop *this)
{
  int v1; // r5
  _QWORD *v2; // r4
  CRGBA *v3; // r0
  const char *v4; // r1
  const char *v5; // r2
  CFileLoader *v6; // r4
  const char *v7; // r1
  __int64 *v8; // r1
  char *v9; // r8
  int v10; // r10
  const char *Line; // r0
  const char *v12; // r11
  int v13; // r6
  const char *v14; // r5
  int v15; // r8
  int v16; // r5
  int v17; // r11
  char *v18; // r6
  char v19; // r9
  int v20; // r0
  unsigned __int64 v22; // [sp+24h] [bp-3E4h]
  char *v23; // [sp+2Ch] [bp-3DCh]
  char v24; // [sp+54h] [bp-3B4h] BYREF
  char v25; // [sp+55h] [bp-3B3h]
  char v26; // [sp+56h] [bp-3B2h]
  char v27; // [sp+57h] [bp-3B1h]
  __int64 v28; // [sp+58h] [bp-3B0h] BYREF
  __int64 v29; // [sp+60h] [bp-3A8h] BYREF
  __int64 v30; // [sp+68h] [bp-3A0h] BYREF
  __int64 v31; // [sp+70h] [bp-398h] BYREF
  char v32[32]; // [sp+78h] [bp-390h] BYREF
  char v33[32]; // [sp+98h] [bp-370h] BYREF
  int v34; // [sp+B8h] [bp-350h]
  int v35; // [sp+BCh] [bp-34Ch]
  unsigned __int64 v36; // [sp+C0h] [bp-348h]
  char v37; // [sp+C8h] [bp-340h]
  char v38; // [sp+C9h] [bp-33Fh]
  char v39; // [sp+CAh] [bp-33Eh]
  char v40; // [sp+CBh] [bp-33Dh]
  bool v41; // [sp+CCh] [bp-33Ch]
  char v42[256]; // [sp+D0h] [bp-338h] BYREF
  char v43[256]; // [sp+1D0h] [bp-238h] BYREF
  char v44[260]; // [sp+2D0h] [bp-138h] BYREF
  int v45; // [sp+3D4h] [bp-34h]

  v1 = 800;
  v2 = &unk_6FA354;
  v3 = (CRGBA *)v44;
  do
  {
    *((_BYTE *)v2 - 32) = 0;
    *((_BYTE *)v2 - 64) = 0;
    *v2 = loc_2BB970;
    v2[1] = loc_2BB978;
    CRGBA::CRGBA(v3, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    --v1;
    *((_BYTE *)v2 + 16) = v44[0];
    *((_BYTE *)v2 + 17) = v44[1];
    *((_BYTE *)v2 + 18) = v44[2];
    v4 = (const char *)(unsigned __int8)v44[3];
    *((_BYTE *)v2 + 19) = v44[3];
    *((_BYTE *)v2 + 20) = 0;
    v2 += 11;
  }
  while ( v1 );
  CFileMgr::SetDir((CFileMgr *)"data", v4);
  v6 = (CFileLoader *)CFileMgr::OpenFile((CFileMgr *)"ShopUVs.dat", "r", v5);
  CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, v7);
  v8 = &v31;
  v9 = (char *)&v29 + 4;
  v10 = 0;
  while ( 1 )
  {
    Line = (const char *)CFileLoader::LoadLine(v6, (unsigned int)v8);
    v12 = Line;
    if ( !Line )
      break;
    if ( *Line && !strchr(Line, 59) )
    {
      memset(v44, 0, 0x100u);
      memset(v43, 0, sizeof(v43));
      v30 = unk_60F038;
      v31 = unk_60F040;
      v28 = unk_60F048;
      v29 = unk_60F050;
      memset(v42, 0, sizeof(v42));
      v23 = v9;
      sscanf(
        v12,
        "%s %s %f %f %f %f %d %d %d %d %s",
        v44,
        v43,
        &v30,
        (char *)&v30 + 4,
        &v31,
        (char *)&v31 + 4,
        &v28,
        (char *)&v28 + 4,
        &v29,
        v9,
        v42);
      if ( v10 >= 1 )
      {
        v13 = 0;
        v14 = CWidgetListShop::m_FileEntry;
        while ( strcasecmp(v14, v44) )
        {
          ++v13;
          v14 += 88;
          if ( v13 >= v10 )
            goto LABEL_11;
        }
LABEL_13:
        v20 = 1;
        goto LABEL_14;
      }
LABEL_11:
      v15 = v30;
      v16 = HIDWORD(v31);
      v22 = __PAIR64__(HIDWORD(v30), v31);
      CRGBA::CRGBA((CRGBA *)&v24, v28, BYTE4(v28), v29, BYTE4(v29));
      v17 = strcasecmp(v42, "TRUE");
      strcpy(v32, v44);
      strcpy(v33, v43);
      v18 = &CWidgetListShop::m_FileEntry[88 * v10];
      v34 = v15;
      v35 = v16;
      v36 = v22;
      LOBYTE(v16) = v17 == 0;
      v41 = v17 == 0;
      BYTE4(v22) = v24;
      v37 = v24;
      v19 = v25;
      LOBYTE(v15) = v26;
      LOBYTE(v17) = v27;
      v38 = v25;
      v39 = v26;
      v40 = v27;
      memcpy_0(v18, v32, 0x50u);
      ++v10;
      v18[82] = v15;
      v18[81] = v19;
      v18[83] = v17;
      v18[80] = BYTE4(v22);
      v18[84] = v16;
      if ( v10 != 800 )
        goto LABEL_13;
      v10 = 800;
      v20 = 0;
LABEL_14:
      v9 = v23;
      if ( !v20 )
        break;
    }
  }
  CFileMgr::CloseFile(v6, (unsigned int)v8);
  return _stack_chk_guard - v45;
}


// ============================================================

// Address: 0x2bb9fc
// Original: _ZN15CWidgetListShop11AssignImageEi
// Demangled: CWidgetListShop::AssignImage(int)
int __fastcall CWidgetListShop::AssignImage(CWidgetListShop *this, int a2)
{
  CTouchInterface *v4; // r0
  const char *v5; // r6
  int v6; // r5
  char *i; // r4
  int v8; // r0
  char *v9; // r5
  __int64 v10; // d17

  v4 = (CWidgetListShop *)((char *)this + 284 * a2);
  v5 = (char *)v4 + 144;
  CTouchInterface::LoadAllTextureDBs(v4);
  v6 = -1;
  for ( i = &byte_6FA368; ; i += 88 )
  {
    v8 = strcasecmp(i - 84, v5);
    if ( !v8 )
      break;
    if ( ++v6 >= 799 )
      return j_CTouchInterface::UnloadAllTextureDBs((CTouchInterface *)v8);
  }
  v9 = (char *)this + 284 * a2;
  CSprite2d::SetTexture((CSprite2d *)(v9 + 400), i - 52);
  v10 = *(_QWORD *)(i - 12);
  *(_QWORD *)(v9 + 404) = *(_QWORD *)(i - 20);
  *(_QWORD *)(v9 + 412) = v10;
  v9[420] = *(i - 4);
  v9[421] = *(i - 3);
  v9[422] = *(i - 2);
  v9[423] = *(i - 1);
  v8 = (unsigned __int8)*i;
  v9[424] = v8;
  return j_CTouchInterface::UnloadAllTextureDBs((CTouchInterface *)v8);
}


// ============================================================

// Address: 0x2bba9c
// Original: _ZN15CWidgetListShop7AddItemEPKcS1_
// Demangled: CWidgetListShop::AddItem(char const*,char const*)
int __fastcall CWidgetListShop::AddItem(CWidgetListShop *this, const char *a2, const char *a3)
{
  if ( a2 && !strcasecmp("REMCLT", a2) )
    *((_BYTE *)&elf_hash_chain[1826] + (_DWORD)this) = 0;
  CWidgetList::AddItem(this, a2, a3);
  return CWidgetListShop::AssignImage(this, *((_DWORD *)this + 18220) - 1);
}


// ============================================================

// Address: 0x2bbaec
// Original: _ZN15CWidgetListShopD0Ev
// Demangled: CWidgetListShop::~CWidgetListShop()
void __fastcall CWidgetListShop::~CWidgetListShop(CWidgetListShop *this)
{
  int *v2; // r5
  void *v3; // r0

  v2 = &elf_hash_chain[1731];
  *(_DWORD *)this = &off_663E18;
  do
  {
    CSprite2d::~CSprite2d((CSprite2d *)((char *)v2 + (_DWORD)this));
    v2 -= 71;
  }
  while ( v2 != &dword_74 );
  CWidget::~CWidget(this);
  operator delete(v3);
}


// ============================================================

// Address: 0x2bbb24
// Original: _ZN15CWidgetListShop7GetNameEv
// Demangled: CWidgetListShop::GetName(void)
char *__fastcall CWidgetListShop::GetName(CWidgetListShop *this)
{
  return "ListShop";
}


// ============================================================

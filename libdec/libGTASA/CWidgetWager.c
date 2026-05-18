
// Address: 0x19160c
// Original: j__ZN12CWidgetWager13RenderRowTextEPtS0_5CRectif
// Demangled: CWidgetWager::RenderRowText(ushort *,ushort *,CRect,int,float)
// attributes: thunk
int __fastcall CWidgetWager::RenderRowText(
        int a1,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        int a8,
        float a9)
{
  return _ZN12CWidgetWager13RenderRowTextEPtS0_5CRectif(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================

// Address: 0x193cf4
// Original: j__ZN12CWidgetWager15RenderTitleTextE5CRectf
// Demangled: CWidgetWager::RenderTitleText(CRect,float)
// attributes: thunk
int __fastcall CWidgetWager::RenderTitleText(int a1, int a2, int a3, int a4, float a5, float a6)
{
  return _ZN12CWidgetWager15RenderTitleTextE5CRectf(a1, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19fdec
// Original: j__ZN12CWidgetWagerC2EPKcRK14WidgetPosition
// Demangled: CWidgetWager::CWidgetWager(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetWager::CWidgetWager()
{
  return _ZN12CWidgetWagerC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c8be4
// Original: _ZN12CWidgetWagerC2EPKcRK14WidgetPosition
// Demangled: CWidgetWager::CWidgetWager(char const*,WidgetPosition const&)
int __fastcall CWidgetWager::CWidgetWager(int a1, int a2, int a3)
{
  _BYTE v5[128]; // [sp+8h] [bp-120h] BYREF
  char v6; // [sp+88h] [bp-A0h]
  int v7; // [sp+108h] [bp-20h]
  int v8; // [sp+10Ch] [bp-1Ch]
  int v9; // [sp+110h] [bp-18h]

  CWidget::CWidget(a1, a2, a3, 4, 0);
  *(_BYTE *)(a1 + 1076) = 0;
  *(_DWORD *)a1 = &off_665310;
  *(_DWORD *)(a1 + 1332) = 0;
  *(_BYTE *)(a1 + 1204) = 0;
  strcpy((char *)(a1 + 144), "WAGER1");
  *(_BYTE *)(a1 + 1344) = 0;
  v6 = 0;
  v5[0] = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  memcpy_0((void *)(a1 + 272), v5, 0x10Cu);
  v6 = 0;
  v5[0] = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  memcpy_0((void *)(a1 + 540), v5, 0x10Cu);
  v6 = 0;
  v5[0] = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  memcpy_0((void *)(a1 + 808), v5, 0x10Cu);
  v6 = 0;
  v5[0] = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  memcpy_0((void *)(a1 + 1076), v5, 0x10Cu);
  return a1;
}


// ============================================================

// Address: 0x2c8cd4
// Original: _ZN12CWidgetWager6UpdateEv
// Demangled: CWidgetWager::Update(void)
int __fastcall CWidgetWager::Update(CWidgetWager *this)
{
  CWidget::Update(this);
  return j_CWidget::ManageAlpha(this);
}


// ============================================================

// Address: 0x2c8ce8
// Original: _ZN12CWidgetWager4DrawEv
// Demangled: CWidgetWager::Draw(void)
int __fastcall CWidgetWager::Draw(CWidgetWager *this)
{
  CWidgetWager *v1; // r4
  unsigned int v2; // r8
  int v3; // r6
  unsigned __int8 v4; // r2
  float v5; // s22
  float v6; // s18
  unsigned __int8 v7; // r1
  unsigned __int8 v8; // r1
  unsigned __int8 v9; // r1
  float v10; // r1
  signed __int8 v11; // r1
  float v12; // s16
  float v13; // s18
  float v14; // s20
  float v15; // r1
  const char *v16; // r11
  int v17; // r10
  float v18; // s0
  float v19; // s26
  CFont *v20; // r0
  unsigned __int8 v21; // r3
  float v22; // r0
  float v23; // r1
  unsigned __int16 *v24; // r0
  unsigned __int8 v25; // r3
  int v26; // r2
  float v27; // r0
  float v28; // r1
  float v29; // r1
  float v30; // s20
  int v31; // r0
  float v32; // s4
  float v33; // s24
  float v34; // s22
  float v35; // s0
  float v36; // s0
  float v37; // s0
  float v38; // s0
  float v39; // s0
  float v40; // s2
  float v41; // s4
  int v42; // r9
  CRGBA *v43; // r8
  int *v44; // r5
  float v45; // r1
  int v46; // r0
  CRGBA *v47; // r6
  int v48; // r8
  int v49; // r0
  int v50; // r1
  int v51; // r2
  int v52; // r0
  int v53; // r1
  int v54; // r0
  CWidgetWager *v56; // [sp+24h] [bp-484h]
  CText *v57; // [sp+28h] [bp-480h]
  unsigned __int8 v58[4]; // [sp+2Ch] [bp-47Ch]
  _BYTE v59[4]; // [sp+30h] [bp-478h] BYREF
  _BYTE v60[4]; // [sp+34h] [bp-474h] BYREF
  int v61; // [sp+38h] [bp-470h] BYREF
  float v62; // [sp+3Ch] [bp-46Ch]
  float v63; // [sp+40h] [bp-468h]
  float v64; // [sp+44h] [bp-464h]
  _BYTE v65[4]; // [sp+48h] [bp-460h] BYREF
  unsigned __int16 v66[2]; // [sp+4Ch] [bp-45Ch] BYREF
  float v67; // [sp+50h] [bp-458h]
  float v68; // [sp+54h] [bp-454h]
  float v69; // [sp+58h] [bp-450h]
  _BYTE v70[4]; // [sp+24Ch] [bp-25Ch] BYREF
  int v71; // [sp+250h] [bp-258h] BYREF
  int v72; // [sp+254h] [bp-254h]
  int v73; // [sp+258h] [bp-250h]
  float v74; // [sp+25Ch] [bp-24Ch]
  float v75; // [sp+350h] [bp-158h] BYREF
  float v76; // [sp+354h] [bp-154h]
  float v77; // [sp+358h] [bp-150h]
  float v78; // [sp+35Ch] [bp-14Ch]
  int v79; // [sp+450h] [bp-58h]

  v1 = this;
  v2 = *((unsigned __int8 *)this + 76);
  if ( *((_BYTE *)this + 76) )
  {
    if ( strlen((const char *)this + 272) )
      v3 = strcasecmp((const char *)v1 + 272, "DUMMY") != 0;
    else
      v3 = 0;
    if ( strlen((const char *)v1 + 540) && strcasecmp((const char *)v1 + 540, "DUMMY") )
      ++v3;
    if ( strlen((const char *)v1 + 808) && strcasecmp((const char *)v1 + 808, "DUMMY") )
      ++v3;
    if ( strlen((const char *)v1 + 1076) && strcasecmp((const char *)v1 + 1076, "DUMMY") )
      ++v3;
    if ( v3 )
    {
      v5 = *((float *)v1 + 9);
      v6 = *((float *)v1 + 11);
      CFont::SetBackground(0, 0, v4);
      CFont::SetProportional((CFont *)((char *)&stderr + 1), v7);
      CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v8);
      CFont::SetOrientation((CFont *)((char *)&stderr + 1), v9);
      CFont::SetRightJustifyWrap(0, v10);
      CFont::SetEdge(0, v11);
      v12 = (float)v2 / 255.0;
      *(_DWORD *)v58 = (unsigned int)(float)(v12 * 255.0);
      CRGBA::CRGBA((CRGBA *)v70, 0, 0, 0, v58[0]);
      CFont::SetDropColor();
      v13 = (float)(fabsf(v5 - v6) - (float)v3) / 5.25;
      v14 = v13 * 0.0175;
      CFont::SetScale(COERCE_CFONT_(v13 * 0.0175), v15);
      if ( v3 >= 1 )
      {
        v16 = (char *)v1 + 536;
        v17 = v3;
        do
        {
          v18 = fabsf(*((float *)v1 + 10) - *((float *)v1 + 8));
          v19 = v18 + (float)((float)(v18 * -0.0675) + (float)(v18 * -0.0675));
          v20 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)(v16 - 264));
          v22 = COERCE_FLOAT(CFont::GetStringWidth(v20, (unsigned __int16 *)((char *)&stderr + 1), 0, v21));
          if ( v22 > v19 )
          {
            v14 = v14 * (float)(v19 / v22);
            CFont::SetScale((CFont *)LODWORD(v14), v23);
          }
          if ( !strlen(v16 - 264) || !strcasecmp(v16 - 136, "DUMMY") )
          {
            v26 = *((_DWORD *)v16 - 2);
            if ( *(_DWORD *)v16 == 1 )
              sub_5E6BC0(&v75, "$~1~%d", v26);
            else
              sub_5E6BC0(&v75, (const char *)&dword_2C93D8, v26);
            AsciiToGxtChar((const char *)&v75, v66);
            v24 = v66;
          }
          else
          {
            v24 = (unsigned __int16 *)CText::Get((CText *)TheText, (CKeyGen *)(v16 - 136));
          }
          v27 = COERCE_FLOAT(CFont::GetStringWidth((CFont *)v24, (unsigned __int16 *)((char *)&stderr + 1), 0, v25));
          if ( v27 > v19 )
          {
            v14 = v14 * (float)(v19 / v27);
            CFont::SetScale((CFont *)LODWORD(v14), v28);
          }
          v16 += 268;
          --v17;
        }
        while ( v17 );
      }
      if ( *((_BYTE *)v1 + 1344) )
      {
        v29 = *((float *)v1 + 10);
        *(float *)v66 = *((float *)v1 + 8);
        v68 = v29;
        v67 = v5;
        v30 = v5 + (float)(v13 * -2.5);
        v69 = v30;
        CRGBA::CRGBA((CRGBA *)&v75, 0, 0, 0, (unsigned int)(float)(v12 * 128.0));
        CRGBA::CRGBA((CRGBA *)&v71, 0, 0, 0, (unsigned int)(float)(v12 * 128.0));
        CRGBA::CRGBA((CRGBA *)&v61, 0, 0, 0, v58[0]);
        CRGBA::CRGBA((CRGBA *)v65, 0, 0, 0, v58[0]);
        CSprite2d::DrawRect((int)v66, (int)&v75, (int)&v71, (int)&v61, v31);
        v32 = fabsf(v67 - v69);
        v33 = v32 * 0.05;
        v34 = v32 * 0.425;
        if ( dword_6F3884 )
        {
          v35 = (float)(v67 + v69) * 0.5;
          v75 = v33 + *(float *)v66;
          v77 = v34 + (float)(v33 + *(float *)v66);
          v78 = v35 - (float)(v34 * 0.5);
          v76 = (float)(v34 * 0.5) + v35;
          CWidget::SetScreenRect();
        }
        if ( dword_6F3888 )
        {
          v36 = (float)(v67 + v69) * 0.5;
          v77 = v68 - v33;
          v75 = (float)(v68 - v33) - v34;
          v78 = v36 - (float)(v34 * 0.5);
          v76 = (float)(v34 * 0.5) + v36;
          CWidget::SetScreenRect();
        }
        if ( dword_6F387C )
        {
          v37 = (float)(*(float *)v66 + v68) * 0.5;
          v78 = v33 + v69;
          v76 = v34 + (float)(v33 + v69);
          v75 = v37 - (float)(v34 * 0.5);
          v77 = (float)(v34 * 0.5) + v37;
          CWidget::SetScreenRect();
        }
        if ( dword_6F3880 )
        {
          v38 = (float)(*(float *)v66 + v68) * 0.5;
          v76 = v67 - v33;
          v78 = (float)(v67 - v33) - v34;
          v75 = v38 - (float)(v34 * 0.5);
          v77 = (float)(v34 * 0.5) + v38;
          CWidget::SetScreenRect();
        }
        if ( dword_6F3A74 )
        {
          v39 = (float)(v67 + v69) * 0.5;
          v40 = (float)(*(float *)v66 + v68) * 0.5;
          v41 = (float)(fabsf(v67 - v69) * 0.85) * 0.5;
          v75 = v40 - v41;
          v78 = v39 - v41;
          v77 = v41 + v40;
          v76 = v41 + v39;
          CWidget::SetScreenRect();
        }
        if ( v3 > 0 )
          goto LABEL_41;
      }
      else
      {
        v30 = v5;
        if ( v3 > 0 )
        {
LABEL_41:
          v42 = v3 + 1;
          v43 = (CRGBA *)&v71;
          v44 = (int *)((char *)v1 + 268 * v3 + 268);
          v56 = v1;
          v57 = (CText *)(float)(v12 * 128.0);
          while ( 1 )
          {
            v45 = *((float *)v1 + 10);
            v61 = *((_DWORD *)v1 + 8);
            v63 = v45;
            v62 = v30;
            v64 = v30 - v13;
            CRGBA::CRGBA(v43, 0, 0, 0, (unsigned __int8)v57);
            CRGBA::CRGBA((CRGBA *)v65, 0, 0, 0, (unsigned __int8)v57);
            CRGBA::CRGBA((CRGBA *)v60, 0, 0, 0, v58[0]);
            CRGBA::CRGBA((CRGBA *)v59, 0, 0, 0, v58[0]);
            CSprite2d::DrawRect((int)&v61, (int)v43, (int)v65, (int)v60, v46);
            if ( !strlen((const char *)v44 - 264) || !strcasecmp((const char *)v44 - 136, "DUMMY") )
              break;
            if ( !strcasecmp((const char *)v44 - 136, "BJ_OR2") )
            {
              sub_5E6BC0(v43, "%d/%d", *(v44 - 2), *(v44 - 1));
              AsciiToGxtChar((const char *)v43, v66);
LABEL_51:
              v52 = CText::Get((CText *)TheText, (CKeyGen *)(v44 - 66));
              CWidgetWager::RenderRowText(v52, v52, (int)v66, v61, v62, v63, v64, *v44, v12);
              goto LABEL_52;
            }
            v47 = v43;
            v48 = CText::Get((CText *)TheText, (CKeyGen *)(v44 - 66));
            v49 = CText::Get((CText *)TheText, (CKeyGen *)(v44 - 34));
            v50 = v48;
            v43 = v47;
            CWidgetWager::RenderRowText(v49, v50, v49, v61, v62, v63, v64, *v44, v12);
LABEL_52:
            v30 = v30 - (float)(v13 + 1.0);
            v1 = v56;
            --v42;
            v44 -= 67;
            if ( v42 <= 1 )
              goto LABEL_56;
          }
          v51 = *(v44 - 2);
          if ( *v44 == 1 )
            sub_5E6BC0(&v75, "$~1~%d", v51);
          else
            sub_5E6BC0(&v75, (const char *)&dword_2C93D8, v51);
          AsciiToGxtChar((const char *)&v75, v66);
          goto LABEL_51;
        }
      }
      v57 = (CText *)(float)(v12 * 128.0);
LABEL_56:
      v53 = *((_DWORD *)v1 + 10);
      v71 = *((_DWORD *)v1 + 8);
      v73 = v53;
      v72 = LODWORD(v30);
      v74 = v30 + (float)(v13 * -1.25);
      CRGBA::CRGBA((CRGBA *)&v61, 0, 0, 0, (unsigned __int8)v57);
      CRGBA::CRGBA((CRGBA *)v65, 0, 0, 0, (unsigned __int8)v57);
      CRGBA::CRGBA((CRGBA *)v60, 0, 0, 0, v58[0]);
      CRGBA::CRGBA((CRGBA *)v59, 0, 0, 0, v58[0]);
      CSprite2d::DrawRect((int)&v71, (int)&v61, (int)v65, (int)v60, v54);
      CWidgetWager::RenderTitleText((int)v1, v71, v72, v73, v74, v12);
    }
  }
  return _stack_chk_guard - v79;
}


// ============================================================

// Address: 0x2c9420
// Original: _ZN12CWidgetWager13RenderRowTextEPtS0_5CRectif
// Demangled: CWidgetWager::RenderRowText(ushort *,ushort *,CRect,int,float)
int __fastcall CWidgetWager::RenderRowText(
        int a1,
        CFont *a2,
        CFont *a3,
        float a4,
        float a5,
        float a6,
        float a7,
        int a8,
        float a9)
{
  float v12; // s22
  bool v13; // r1
  float v14; // r0
  float v15; // s18
  unsigned __int16 *v16; // r3
  CFont *v17; // r0
  unsigned __int8 v18; // r1
  unsigned __int8 v19; // r2
  unsigned __int8 v20; // r3
  unsigned int v21; // r0
  bool v22; // r1
  float v23; // r0
  unsigned __int16 *v24; // r3
  CFont *v25; // r0
  _BYTE v27[4]; // [sp+8h] [bp-40h] BYREF
  unsigned __int8 v28; // [sp+Ch] [bp-3Ch] BYREF
  unsigned __int8 v29; // [sp+Dh] [bp-3Bh]
  unsigned __int8 v30; // [sp+Eh] [bp-3Ah]
  unsigned __int8 v31; // [sp+Fh] [bp-39h]
  unsigned __int8 v32; // [sp+10h] [bp-38h] BYREF
  unsigned __int8 v33; // [sp+11h] [bp-37h]
  unsigned __int8 v34; // [sp+12h] [bp-36h]
  unsigned __int8 v35; // [sp+13h] [bp-35h]
  _BYTE v36[52]; // [sp+14h] [bp-34h] BYREF

  CRGBA::CRGBA((CRGBA *)v36, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(a9 * 255.0));
  CFont::SetColor();
  v12 = fabsf(a6 - a4);
  v14 = COERCE_FLOAT(CFont::GetHeight(0, v13));
  v15 = (float)(a5 + a7) * 0.5;
  v17 = (CFont *)CFont::PrintString(COERCE_CFONT_((float)(v12 * 0.0675) + a4), v15 + (float)(v14 * -1.25), a2, v16);
  CFont::RenderFontBuffer(v17);
  CRGBA::CRGBA((CRGBA *)&v32, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  if ( a8 == 1 )
  {
    CRGBA::CRGBA((CRGBA *)&v28, 0, 0x67u, 0, 0xFFu);
  }
  else
  {
    if ( a8 != 2 )
    {
      v18 = v32;
      v19 = v33;
      v20 = v34;
      v21 = v35;
      goto LABEL_7;
    }
    CRGBA::CRGBA((CRGBA *)&v28, 0x5Du, 0x8Eu, 0xBEu, 0xFFu);
  }
  v18 = v28;
  v19 = v29;
  v20 = v30;
  v21 = v31;
  v32 = v28;
  v33 = v29;
  v34 = v30;
  v35 = v31;
LABEL_7:
  CRGBA::CRGBA((CRGBA *)v27, v18, v19, v20, (unsigned int)(float)((float)v21 * a9));
  CFont::SetColor();
  v23 = COERCE_FLOAT(CFont::GetHeight(0, v22));
  v25 = (CFont *)CFont::PrintString(COERCE_CFONT_((float)(v12 * 0.0675) + a4), v15 + (float)(v23 * 0.25), a3, v24);
  return CFont::RenderFontBuffer(v25);
}


// ============================================================

// Address: 0x2c9578
// Original: _ZN12CWidgetWager15RenderTitleTextE5CRectf
// Demangled: CWidgetWager::RenderTitleText(CRect,float)
int __fastcall CWidgetWager::RenderTitleText(int a1, float a2, float a3, float a4, float a5, float a6)
{
  float v10; // s0
  float v11; // r1
  CKeyGen *v12; // r6
  CFont *v13; // r0
  unsigned __int8 v14; // r3
  float v15; // r0
  _BOOL4 v16; // r1
  float v17; // s24
  float v18; // s2
  CFont *v19; // r0
  unsigned __int16 *v20; // r3
  CFont *v21; // r0
  _BYTE v23[60]; // [sp+4h] [bp-3Ch] BYREF

  CFont::SetFontStyle(0, LOBYTE(a2));
  CRGBA::CRGBA((CRGBA *)v23, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(a6 * 255.0));
  CFont::SetColor();
  v10 = fabsf(a3 - a5);
  CFont::SetScale(COERCE_CFONT_(v10 * 0.0325), v11);
  v12 = (CKeyGen *)(a1 + 144);
  v13 = (CFont *)CText::Get((CText *)TheText, v12);
  v15 = COERCE_FLOAT(CFont::GetStringWidth(v13, (unsigned __int16 *)((char *)&stderr + 1), 0, v14));
  v17 = fabsf(a4 - a2);
  if ( v15 > (float)(v17 * 0.875) )
    CFont::SetScale(COERCE_CFONT_((float)(v10 * 0.0325) * (float)((float)(v17 * 0.875) / v15)), *(float *)&v16);
  v18 = COERCE_FLOAT(CFont::GetHeight(0, v16)) * 0.5;
  v19 = (CFont *)CText::Get((CText *)TheText, v12);
  v21 = (CFont *)CFont::PrintString(
                   COERCE_CFONT_((float)(v17 * 0.0675) + a2),
                   (float)((float)(a3 + a5) * 0.5) - v18,
                   v19,
                   v20);
  return CFont::RenderFontBuffer(v21);
}


// ============================================================

// Address: 0x2c9690
// Original: _ZN12CWidgetWager14SetWidgetInfo2EiiiiPcS0_
// Demangled: CWidgetWager::SetWidgetInfo2(int,int,int,int,char *,char *)
int __fastcall CWidgetWager::SetWidgetInfo2(
        CWidgetWager *this,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        char *a6,
        char *a7)
{
  const char *v11; // r1
  const char *v12; // r5
  char v14[128]; // [sp+0h] [bp-130h] BYREF
  char v15[128]; // [sp+80h] [bp-B0h] BYREF
  int v16; // [sp+100h] [bp-30h]
  int v17; // [sp+104h] [bp-2Ch]
  int v18; // [sp+108h] [bp-28h]
  int v19; // [sp+110h] [bp-20h]

  if ( a2 <= 3 )
  {
    v11 = a6;
    v12 = &byte_61CD7E;
    if ( !a6 )
      v11 = &byte_61CD7E;
    strcpy(v14, v11);
    if ( a7 )
      v12 = a7;
    strcpy(v15, v12);
    v16 = a3;
    v17 = a4;
    v18 = a5;
    memcpy_0((char *)this + 268 * a2 + 272, v14, 0x10Cu);
  }
  return _stack_chk_guard - v19;
}


// ============================================================

// Address: 0x2c971c
// Original: _ZN12CWidgetWagerD0Ev
// Demangled: CWidgetWager::~CWidgetWager()
void __fastcall CWidgetWager::~CWidgetWager(CWidgetWager *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2c972c
// Original: _ZN12CWidgetWager7GetNameEv
// Demangled: CWidgetWager::GetName(void)
char *__fastcall CWidgetWager::GetName(CWidgetWager *this)
{
  return "Wager";
}


// ============================================================

// Address: 0x2c9738
// Original: _ZN12CWidgetWager14SetWidgetValueEf
// Demangled: CWidgetWager::SetWidgetValue(float)
__int64 __fastcall CWidgetWager::SetWidgetValue(__int64 this)
{
  HIDWORD(this) = *((float *)&this + 1) == 1.0;
  *(_BYTE *)(this + 1344) = BYTE4(this);
  return this;
}


// ============================================================

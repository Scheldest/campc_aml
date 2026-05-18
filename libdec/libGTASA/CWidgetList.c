
// Address: 0x18c574
// Original: j__ZN11CWidgetListC2EPKcRK14WidgetPositionPS1_ibbb
// Demangled: CWidgetList::CWidgetList(char const*,WidgetPosition const&,char const**,int,bool,bool,bool)
// attributes: thunk
int __fastcall CWidgetList::CWidgetList(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return _ZN11CWidgetListC2EPKcRK14WidgetPositionPS1_ibbb(a1, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x192abc
// Original: j__ZN11CWidgetList15GetAlphaAtIndexEi
// Demangled: CWidgetList::GetAlphaAtIndex(int)
// attributes: thunk
int __fastcall CWidgetList::GetAlphaAtIndex(CWidgetList *this, int a2)
{
  return _ZN11CWidgetList15GetAlphaAtIndexEi(this, a2);
}


// ============================================================

// Address: 0x193594
// Original: j__ZN11CWidgetList4DrawEv
// Demangled: CWidgetList::Draw(void)
// attributes: thunk
int __fastcall CWidgetList::Draw(CWidgetList *this)
{
  return _ZN11CWidgetList4DrawEv(this);
}


// ============================================================

// Address: 0x195218
// Original: j__ZN11CWidgetList16GetSelectedEntryEPc
// Demangled: CWidgetList::GetSelectedEntry(char *)
// attributes: thunk
int __fastcall CWidgetList::GetSelectedEntry(CWidgetList *this, char *a2)
{
  return _ZN11CWidgetList16GetSelectedEntryEPc(this, a2);
}


// ============================================================

// Address: 0x19bcac
// Original: j__ZN11CWidgetList7AddItemEPKcS1_
// Demangled: CWidgetList::AddItem(char const*,char const*)
// attributes: thunk
int __fastcall CWidgetList::AddItem(CWidgetList *this, const char *a2, const char *a3)
{
  return _ZN11CWidgetList7AddItemEPKcS1_(this, a2, a3);
}


// ============================================================

// Address: 0x19e9c0
// Original: j__ZN11CWidgetList15ShrinkTextToFitEf
// Demangled: CWidgetList::ShrinkTextToFit(float)
// attributes: thunk
int __fastcall CWidgetList::ShrinkTextToFit(CWidgetList *this, float a2)
{
  return _ZN11CWidgetList15ShrinkTextToFitEf(this, a2);
}


// ============================================================

// Address: 0x19fb5c
// Original: j__ZN11CWidgetList6UpdateEv
// Demangled: CWidgetList::Update(void)
// attributes: thunk
int __fastcall CWidgetList::Update(CWidgetList *this)
{
  return _ZN11CWidgetList6UpdateEv(this);
}


// ============================================================

// Address: 0x2b9690
// Original: _ZN11CWidgetListC2EPKcRK14WidgetPositionPS1_ibbb
// Demangled: CWidgetList::CWidgetList(char const*,WidgetPosition const&,char const**,int,bool,bool,bool)
_DWORD *__fastcall CWidgetList::CWidgetList(
        int a1,
        int a2,
        int a3,
        const char **a4,
        signed int a5,
        int a6,
        char a7,
        char a8)
{
  float32x2_t v8; // d0
  float32x2_t v9; // d1
  _DWORD *v11; // r0
  _DWORD *v12; // r8
  _DWORD *v13; // r4
  _QWORD *v14; // r6
  _QWORD *v15; // r0
  int *v16; // r10
  int v17; // r0
  char *v18; // r4
  signed int v19; // r6
  const char *v20; // t1
  char *v21; // r4
  char *v22; // r5
  int v23; // r6
  int v24; // r11
  const char *v25; // r6
  char v26; // r6
  char v27; // r4
  char v28; // r9
  char v29; // r10
  __int64 v30; // d16
  __int64 v31; // d17
  float v32; // s0
  _DWORD *v34; // [sp+8h] [bp-8050h]
  const char **v35; // [sp+14h] [bp-8044h]
  char v36; // [sp+1Ch] [bp-803Ch] BYREF
  char v37; // [sp+1Dh] [bp-803Bh]
  char v38; // [sp+1Eh] [bp-803Ah]
  char v39; // [sp+1Fh] [bp-8039h]
  char v40; // [sp+20h] [bp-8038h] BYREF
  char v41; // [sp+21h] [bp-8037h]
  char v42; // [sp+22h] [bp-8036h]
  char v43; // [sp+23h] [bp-8035h]
  __int16 v44; // [sp+A0h] [bp-7FB8h]
  int v45; // [sp+120h] [bp-7F38h] BYREF
  __int64 v46; // [sp+124h] [bp-7F34h]
  __int64 v47; // [sp+12Ch] [bp-7F2Ch]
  char v48; // [sp+134h] [bp-7F24h]
  char v49; // [sp+135h] [bp-7F23h]
  char v50; // [sp+136h] [bp-7F22h]
  char v51; // [sp+137h] [bp-7F21h]
  char v52; // [sp+138h] [bp-7F20h]

  v11 = (_DWORD *)CWidget::CWidget(a1, a2, a3, 0, 0);
  v12 = v11 + 100;
  v13 = v11 + 100;
  *v11 = &off_663E18;
  v34 = v11;
  v14 = v11 + 18212;
  do
  {
    CSprite2d::CSprite2d((CSprite2d *)v13);
    *((_WORD *)v13 - 128) = 48;
    *((_WORD *)v13 - 64) = 48;
    *(_QWORD *)(v13 + 1) = 0x3F80000000000000LL;
    *(_QWORD *)(v13 + 3) = 1065353216LL;
    CRGBA::CRGBA((CRGBA *)&v40, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    *((_BYTE *)v13 + 20) = v40;
    *((_BYTE *)v13 + 21) = v41;
    *((_BYTE *)v13 + 22) = v42;
    *((_BYTE *)v13 + 23) = v43;
    *((_BYTE *)v13 + 24) = 0;
    v15 = v13 + 7;
    v13 += 71;
  }
  while ( v15 != v14 );
  v9.n64_f32[0] = (float)a5;
  v8.n64_u32[0] = 1132462080;
  *((_BYTE *)&elf_hash_chain[1755] + (_DWORD)v34 + 1) = a7;
  *((_BYTE *)v34 + 72918) = 0;
  v34[18228] = 0;
  *((_BYTE *)v34 + 72916) = 0;
  *((_BYTE *)v34 + 72919) = a8;
  v34[18227] = 0;
  v16 = v34 + 18220;
  v17 = (int)vmin_f32(v9, v8).n64_f32[0];
  v34[18220] = v17;
  *((_QWORD *)v34 + 9108) = 0xC974240049742400LL;
  *((_QWORD *)v34 + 9109) = 0x49742400C9742400LL;
  *v14 = 0xC974240049742400LL;
  v14[1] = 0x49742400C9742400LL;
  if ( a6 )
  {
    if ( a5 >= 1 )
    {
      v18 = &v40;
      v19 = a5;
      do
      {
        v20 = *a4++;
        strcpy(v18, v20);
        v18 += 128;
        --v19;
      }
      while ( v19 );
    }
    qsort(&v40, a5, 0x80u, (int (*)(const void *, const void *))CWidgetList::AlphabetizeSort);
    if ( *v16 >= 1 )
    {
      v21 = (char *)(v34 + 36);
      v22 = &v40;
      v23 = 0;
      do
      {
        strcpy(v21, v22);
        ++v23;
        v21 += 284;
        v22 += 128;
      }
      while ( v23 < *v16 );
    }
  }
  else if ( v17 >= 1 )
  {
    v24 = 0;
    v35 = a4;
    do
    {
      v25 = a4[v24];
      CRGBA::CRGBA((CRGBA *)&v36, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
      CSprite2d::CSprite2d((CSprite2d *)&v45);
      v46 = 0xC974240049742400LL;
      v47 = 0x49742400C9742400LL;
      if ( !v25 )
        v25 = (const char *)&dword_2B9B78;
      strcpy(&v40, v25);
      v44 = 48;
      v26 = v36;
      v46 = 0x3F80000000000000LL;
      v47 = 1065353216LL;
      v52 = 0;
      v27 = v37;
      v28 = v38;
      v29 = v39;
      v48 = v36;
      v49 = v37;
      v50 = v38;
      v51 = v39;
      memcpy_0(v12 - 64, &v40, 0x100u);
      *v12 = v45;
      v30 = v46;
      v31 = v47;
      *((_BYTE *)v12 + 20) = v26;
      *((_BYTE *)v12 + 21) = v27;
      *((_BYTE *)v12 + 22) = v28;
      *((_BYTE *)v12 + 23) = v29;
      a4 = v35;
      *((_BYTE *)v12 + 24) = 0;
      *(_QWORD *)(v12 + 1) = v30;
      *(_QWORD *)(v12 + 3) = v31;
      CSprite2d::~CSprite2d((CSprite2d *)&v45);
      ++v24;
      v12 += 71;
    }
    while ( v24 < v34[18220] );
  }
  v32 = (float)dword_9FC904;
  v34[18222] = 0;
  v34[18223] = 0;
  v34[18224] = -1;
  v34[18225] = -1;
  *((float *)v34 + 18221) = (float)(v32 / 448.0) * 15.0;
  CRGBA::CRGBA((CRGBA *)&v40, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  *((_BYTE *)&elf_hash_chain[1756] + (_DWORD)v34) = v40;
  *((_BYTE *)v34 + 72921) = v41;
  *((_BYTE *)v34 + 72922) = v42;
  *((_BYTE *)v34 + 72923) = v43;
  CRGBA::CRGBA((CRGBA *)&v40, 0xC0u, 0xC0u, 0xC0u, 0xC0u);
  *((_BYTE *)&elf_hash_chain[1757] + (_DWORD)v34) = v40;
  *((_BYTE *)v34 + 72925) = v41;
  *((_BYTE *)v34 + 72926) = v42;
  *((_BYTE *)v34 + 72927) = v43;
  CRGBA::CRGBA((CRGBA *)&v40, 0xC0u, 0xC0u, 0xC0u, 0xC0u);
  *((_BYTE *)&elf_hash_chain[1758] + (_DWORD)v34) = v40;
  *((_BYTE *)v34 + 72929) = v41;
  *((_BYTE *)v34 + 72930) = v42;
  *((_BYTE *)v34 + 72931) = v43;
  CRGBA::CRGBA((CRGBA *)&v40, 0xFFu, 0, 0, 0xC0u);
  *((_BYTE *)&elf_hash_chain[1759] + (_DWORD)v34) = v40;
  *((_BYTE *)v34 + 72933) = v41;
  *((_BYTE *)v34 + 72934) = v42;
  *((_BYTE *)v34 + 72935) = v43;
  CRGBA::CRGBA((CRGBA *)&v40, 0xC0u, 0, 0, 0xC0u);
  *((_BYTE *)&elf_hash_chain[1760] + (_DWORD)v34) = v40;
  *((_BYTE *)v34 + 72937) = v41;
  *((_BYTE *)v34 + 72938) = v42;
  *((_BYTE *)v34 + 72939) = v43;
  CRGBA::CRGBA((CRGBA *)&v40, 0xC0u, 0xC0u, 0, 0xFFu);
  *((_BYTE *)&elf_hash_chain[1761] + (_DWORD)v34) = v40;
  *((_BYTE *)v34 + 72941) = v41;
  *((_BYTE *)v34 + 72942) = v42;
  *((_BYTE *)v34 + 72943) = v43;
  return v34;
}


// ============================================================

// Address: 0x2b9b8c
// Original: _ZN11CWidgetList11AlphebetizeEPPKci
// Demangled: CWidgetList::Alphebetize(char const**,int)
int __fastcall CWidgetList::Alphebetize(CWidgetList *this, const char **a2, signed int a3)
{
  char *v6; // r4
  signed int v7; // r5
  const char *v8; // t1
  int result; // r0
  int *v10; // r9
  char *v11; // r4
  int v12; // r6
  const char *v13; // r5
  _BYTE v14[32792]; // [sp+0h] [bp-8018h] BYREF

  if ( a3 >= 1 )
  {
    v6 = v14;
    v7 = a3;
    do
    {
      v8 = *a2++;
      strcpy(v6, v8);
      v6 += 128;
      --v7;
    }
    while ( v7 );
  }
  qsort(v14, a3, 0x80u, (int (*)(const void *, const void *))CWidgetList::AlphabetizeSort);
  result = 72880;
  if ( *((int *)this + 18220) >= 1 )
  {
    v10 = (int *)((char *)this + 72880);
    v11 = (char *)this + 144;
    v12 = 0;
    v13 = v14;
    do
    {
      strcpy(v11, v13);
      result = *v10;
      ++v12;
      v13 += 128;
      v11 += 284;
    }
    while ( v12 < *v10 );
  }
  return result;
}


// ============================================================

// Address: 0x2b9c0c
// Original: _ZN11CWidgetList6UpdateEv
// Demangled: CWidgetList::Update(void)
int __fastcall CWidgetList::Update(CWidgetList *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d2
  float32x2_t v3; // d3
  float32x2_t v4; // d10
  _DWORD *v6; // r5
  float *v7; // r6
  float v8; // s6
  float v9; // s2
  float v10; // s4
  float *v11; // r9
  float v12; // s6
  __int64 v13; // d17
  float v14; // s8
  float v15; // s6
  float *v16; // r8
  float32x2_t v17; // d11
  double v18; // d16
  float *v19; // r0
  float v20; // s0
  int v21; // r1
  int v22; // r2
  int v23; // r1
  double v24; // d16
  float *v25; // r0
  int *v26; // r1
  float v27; // s0
  int v28; // r1
  float v29; // s0
  int v30; // r1
  int v31; // r1
  int Pad; // r0
  int v33; // r1
  int v34; // r0
  float v35; // s2
  _DWORD *v36; // r0
  float32x2_t v37; // d0
  double v38; // d16
  float v39; // s0
  int v40; // r0
  int v41; // r1
  int v42; // r0
  int result; // r0
  float v44; // s0
  float v45; // s2
  float v46; // s4
  float v47; // s0
  float v48; // s4
  int v49; // [sp+0h] [bp-40h] BYREF
  float v50; // [sp+4h] [bp-3Ch]

  if ( CHID::GetInputType(this) == 1 && *((_DWORD *)this + 18224) == -1 )
    *((_DWORD *)this + 18224) = 0;
  CWidget::Update(this);
  CWidget::ManageAlpha(this);
  v6 = (_DWORD *)((char *)this + 72880);
  v7 = (float *)((char *)this + 72888);
  v8 = *((float *)this + 11);
  v9 = *((float *)this + 9) - v8;
  v10 = *((float *)this + 10);
  v11 = (float *)((char *)this + 72884);
  v12 = v8 - *((float *)this + 18222);
  v1.n64_f32[0] = *((float *)this + 8) + 2.0;
  v13 = *((_QWORD *)this + 5);
  v4.n64_u32[0] = 0;
  v14 = *((float *)this + 18221) * (float)*((int *)this + 18220);
  *((_QWORD *)this + 9108) = *((_QWORD *)this + 4);
  *((_QWORD *)this + 9109) = v13;
  v15 = v12 + 2.0;
  *((_DWORD *)this + 18212) = v1.n64_u32[0];
  *((float *)this + 18214) = v10 + -2.0;
  v16 = (float *)((char *)this + 72860);
  *((float *)this + 18215) = v15;
  v1.n64_f32[0] = (float)(v14 - fabsf(v9)) + 4.0;
  *((float *)this + 18213) = v15 + v14;
  v17.n64_u64[0] = vmax_f32(v1, v4).n64_u64[0];
  if ( CHID::IsReleased(60) == 1 )
  {
    v18 = *(double *)&CWidget::m_fTime;
    v19 = (float *)((char *)this + 72908);
  }
  else
  {
    if ( CHID::IsPressedPositive(31) != 1 )
      goto LABEL_12;
    v19 = (float *)((char *)this + 72908);
    v18 = *(double *)&CWidget::m_fTime;
    if ( *(double *)&CWidget::m_fTime - *((float *)this + 18227) <= 0.25 )
      goto LABEL_12;
  }
  v20 = v18;
  *v19 = v20;
  v21 = *((_DWORD *)this + 18224);
  v22 = v21 + 2;
  v23 = v21 + 1;
  *((_DWORD *)this + 18224) = v23;
  if ( (float)(*v16 + (float)(*v11 * (float)v22)) > (float)(*((float *)this + 9) + 2.0) )
    *((float *)this + 18223) = *v11 * 10.0;
  if ( v23 >= *v6 )
  {
    *((_DWORD *)this + 18224) = 0;
    *v7 = 0.0;
    *((_DWORD *)this + 18223) = 0;
  }
LABEL_12:
  if ( CHID::IsReleased(61) == 1 )
  {
    v24 = *(double *)&CWidget::m_fTime;
    v25 = (float *)((char *)this + 72908);
  }
  else
  {
    if ( CHID::IsPressedNegative(31) != 1 )
      goto LABEL_20;
    v25 = (float *)((char *)this + 72908);
    v26 = &CWidget::m_fTime;
    v24 = *(double *)&CWidget::m_fTime;
    if ( *(double *)&CWidget::m_fTime - *((float *)this + 18227) <= 0.25 )
      goto LABEL_20;
  }
  v27 = v24;
  *v25 = v27;
  v26 = (int *)*((_DWORD *)this + 18224);
  *((_DWORD *)this + 18224) = (char *)v26 - 1;
  if ( (float)(*v16 + (float)(*v11 * (float)((int)v26 - 1))) < (float)(*((float *)this + 11) + 2.0) )
    *((float *)this + 18223) = *v11 * -10.0;
  if ( (int)v26 <= 0 )
  {
    *((_DWORD *)this + 18224) = *v6 - 1;
    v26 = 0;
    *v7 = v17.n64_f32[0];
    *(int *)((char *)&elf_hash_chain[1749] + (_DWORD)this) = 0;
  }
LABEL_20:
  if ( CTouchInterface::IsTouchDown(*((CTouchInterface **)this + 30), (int)v26) != 1 )
    goto LABEL_29;
  v28 = *((_DWORD *)this + 30);
  if ( this != (CWidgetList *)CWidget::m_pInitialTouchWidget[v28] )
    goto LABEL_29;
  byte_6FA310 = 0;
  CTouchInterface::GetTouchPosition((CTouchInterface *)&v49, v28);
  v29 = v50 - *((float *)this + 18228);
  v28 = *((unsigned __int8 *)this + 72916);
  if ( fabsf(v29) <= (float)((float)dword_9FC904 * 0.01) )
  {
    if ( !*((_BYTE *)this + 72916) )
      goto LABEL_29;
    goto LABEL_26;
  }
  if ( *((_BYTE *)this + 72916) )
LABEL_26:
    *v7 = *v7 - v29;
  CTouchInterface::GetTouchPosition((CTouchInterface *)&v49, *((_DWORD *)this + 30));
  *((float *)this + 18228) = v50;
  *((_BYTE *)this + 72916) = 1;
  if ( !*((_BYTE *)this + 72918) )
  {
    v28 = -1;
    *(int *)((char *)&elf_hash_chain[1750] + (_DWORD)this) = -1;
  }
LABEL_29:
  CPad::GetPad(0, v28);
  if ( *(float *)&dword_959AFC != 0.0 )
  {
    CPad::GetPad(0, v30);
    *((float *)this + 18223) = *((float *)this + 18223)
                             + (float)((float)((float)(*(float *)&dword_959AFC / -120.0) * *v11) * 10.0);
  }
  CPad::GetPad(0, v30);
  if ( LIB_KeyboardPressed()
    || IsCheatMenuOpen() == 1
    && (Pad = CPad::GetPad(0, v31), v31 = *(unsigned __int16 *)(Pad + 8), *(_WORD *)(Pad + 8))
    && !*(_WORD *)(Pad + 56) )
  {
    *v7 = *v7 + (float)(fabsf(*((float *)this + 9) - *((float *)this + 11)) * -0.5);
  }
  CPad::GetPad(0, v31);
  if ( LIB_KeyboardPressed()
    || IsCheatMenuOpen() == 1 && (v34 = CPad::GetPad(0, v33), *(_WORD *)(v34 + 12)) && !*(_WORD *)(v34 + 60) )
  {
    *v7 = *v7 + (float)(fabsf(*((float *)this + 9) - *((float *)this + 11)) * 0.5);
  }
  v35 = *v11;
  v36 = (_DWORD *)((char *)this + 72892);
  v2.n64_f32[0] = -(float)(*v11 * 50.0);
  v3.n64_u32[0] = *((_DWORD *)this + 18223);
  v1.n64_f32[0] = *v11 * 50.0;
  v37.n64_u64[0] = vmin_f32(vmax_f32(v3, v2), v1).n64_u64[0];
  *((_DWORD *)this + 18223) = v37.n64_u32[0];
  if ( v37.n64_f32[0] <= 0.0 )
  {
    if ( v37.n64_f32[0] >= 0.0 )
    {
      v38 = CWidget::m_fElapsedTime;
      goto LABEL_47;
    }
    v38 = CWidget::m_fElapsedTime;
    v37.n64_f32[0] = CWidget::m_fElapsedTime * (float)(v35 * 35.0) + v37.n64_f32[0];
    v37.n64_u64[0] = vmin_f32(v37, v4).n64_u64[0];
  }
  else
  {
    v38 = CWidget::m_fElapsedTime;
    v37.n64_f32[0] = v37.n64_f32[0] + CWidget::m_fElapsedTime * (float)(v35 * -35.0);
    v37.n64_u64[0] = vmax_f32(v37, v4).n64_u64[0];
  }
  *v36 = v37.n64_u32[0];
LABEL_47:
  v37.n64_f32[0] = v38 * v37.n64_f32[0] + *v7;
  v39 = vmin_f32(vmax_f32(v37, v4), v17).n64_f32[0];
  *v7 = v39;
  if ( v39 == 0.0 )
    *v36 = 0;
  v40 = IsCheatMenuOpen();
  if ( v40 == 1 )
  {
    if ( (v42 = CPad::GetPad(0, v41), *(_WORD *)(v42 + 8)) && !*(_WORD *)(v42 + 56)
      || (v40 = CPad::GetPad(0, *(unsigned __int16 *)(v42 + 8)), *(_WORD *)(v40 + 12))
      && (v40 = *(unsigned __int16 *)(v40 + 60)) == 0 )
    {
      v40 = (int)&byte_6FA310;
      byte_6FA310 = 1;
    }
  }
  result = CHID::GetInputType((CHID *)v40);
  if ( result == 1 )
  {
    result = IsCheatMenuOpen();
    if ( result == 1 )
    {
      result = (unsigned __int8)byte_6FA310;
      if ( byte_6FA310 == 1 )
      {
        result = (int)this + 72896;
        v44 = *v11;
        v45 = *v16;
        v46 = (float)(*((float *)this + 11) - *v11) + 2.0;
        if ( (float)(*v16 + (float)(*v11 * (float)*((int *)this + 18224))) >= v46 )
        {
          v48 = (float)(v44 + *((float *)this + 9)) + -2.0;
          if ( (float)(v45 + (float)(v44 * (float)(*((_DWORD *)this + 18224) + 1))) <= v48 )
            return result;
          v47 = (float)((float)(v48 - v45) / v44) + -2.0;
        }
        else
        {
          v47 = (float)((float)(v46 - v45) / v44) + 2.0;
        }
        *(_DWORD *)result = (int)v47;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x2ba210
// Original: _ZN11CWidgetList4DrawEv
// Demangled: CWidgetList::Draw(void)
int __fastcall CWidgetList::Draw(CWidgetList *this)
{
  float32x2_t v1; // d2
  float32x2_t v2; // d3
  float32x4_t *v4; // r5
  unsigned int v5; // r1
  unsigned int v6; // r0
  bool v7; // zf
  float32x4_t v8; // q8
  int v9; // r0
  int v10; // r5
  _DWORD *v11; // r11
  unsigned __int32 *v12; // r10
  float *v13; // r9
  int v14; // r8
  float v15; // s6
  float v16; // s0
  float v17; // s8
  float v18; // s2
  float v19; // s22
  float v20; // r0
  float v21; // r1
  float v22; // s0
  unsigned __int8 v23; // r3
  float v24; // s2
  unsigned __int8 v25; // r2
  unsigned __int8 *v26; // r0
  float v27; // s2
  float v28; // s0
  float v29; // s6
  float *v31; // [sp+60h] [bp-98h]
  float *v32; // [sp+64h] [bp-94h]
  int v33; // [sp+68h] [bp-90h] BYREF
  int v34; // [sp+6Ch] [bp-8Ch] BYREF
  float v35; // [sp+70h] [bp-88h] BYREF
  float v36; // [sp+74h] [bp-84h]
  float v37; // [sp+78h] [bp-80h]
  float v38; // [sp+7Ch] [bp-7Ch]
  float32x4_t v39; // [sp+80h] [bp-78h] BYREF

  v4 = (float32x4_t *)((char *)this + 72864);
  CWidget::SetScissor();
  v6 = *((unsigned __int8 *)this + 72923);
  v7 = v6 == 0;
  if ( *((_BYTE *)this + 72923) )
  {
    v5 = *((unsigned __int8 *)this + 76);
    v7 = v5 == 0;
  }
  if ( !v7 )
  {
    CRGBA::CRGBA(
      (CRGBA *)&v39,
      *((_BYTE *)this + 72920),
      *((_BYTE *)this + 72921),
      *((_BYTE *)this + 72922),
      (unsigned int)(float)((float)((float)v5 / 255.0) * (float)v6));
    CSprite2d::DrawRect();
  }
  v8.n128_u64[0] = 0xC000000040000000LL;
  v8.n128_u64[1] = 0x40000000C0000000LL;
  v39 = vaddq_f32(*v4, v8);
  CWidget::SetScissor();
  v9 = *((_DWORD *)this + 18220);
  if ( v9 >= 1 )
  {
    v10 = 0;
    v11 = (_DWORD *)((char *)this + 72896);
    v32 = (float *)((char *)this + 72856);
    v12 = (unsigned __int32 *)((char *)this + 72884);
    v13 = (float *)((char *)this + 72860);
    v31 = (float *)((char *)this + 72848);
    while ( 1 )
    {
      v14 = v10++;
      v1.n64_u32[0] = *v12;
      v15 = *((float *)this + 11);
      v16 = *v13 + (float)(*(float *)v12 * (float)v14);
      if ( v16 > (float)((float)(v15 - *(float *)v12) + 2.0) )
      {
        v17 = *((float *)this + 9);
        v18 = *v13 + (float)(v1.n64_f32[0] * (float)v10);
        if ( v18 < (float)((float)(v1.n64_f32[0] + v17) + -2.0) )
          break;
      }
LABEL_25:
      if ( v10 >= v9 )
        goto LABEL_26;
    }
    if ( v16 >= v15 )
    {
      v19 = 1.0;
      if ( v18 <= v17 )
      {
LABEL_14:
        if ( v14 == *((_DWORD *)this + 18225) )
        {
          v20 = *v32;
          v21 = *v31;
          v38 = *v13 + (float)(*(float *)v12 * (float)v14);
          v35 = v21;
          v37 = v20;
          v36 = v18;
          CRGBA::CRGBA(
            (CRGBA *)&v34,
            *((_BYTE *)this + 72940),
            *((_BYTE *)this + 72941),
            *((_BYTE *)this + 72942),
            (unsigned int)(float)((float)(v19 * (float)*((unsigned __int8 *)this + 72943))
                                * (float)((float)*((unsigned __int8 *)this + 76) / 255.0)));
          CSprite2d::DrawRect();
        }
        if ( v14 == *v11 )
        {
          v22 = (float)*((unsigned __int8 *)this + 76) / 255.0;
          v23 = *((_BYTE *)this + 72926);
          v24 = v19 * (float)*((unsigned __int8 *)this + 72927);
          v25 = *((_BYTE *)this + 72925);
          v26 = (unsigned __int8 *)this + 72924;
        }
        else
        {
          v22 = (float)*((unsigned __int8 *)this + 76) / 255.0;
          if ( v14 << 31 )
          {
            v23 = *((_BYTE *)this + 72938);
            v24 = v19 * (float)*((unsigned __int8 *)this + 72939);
            v25 = *((_BYTE *)this + 72937);
            v26 = (unsigned __int8 *)this + 72936;
          }
          else
          {
            v23 = *((_BYTE *)this + 72934);
            v24 = v19 * (float)*((unsigned __int8 *)this + 72935);
            v25 = *((_BYTE *)this + 72933);
            v26 = (unsigned __int8 *)this + 72932;
          }
        }
        CRGBA::CRGBA((CRGBA *)&v34, *v26, v25, v23, (unsigned int)(float)(v24 * v22));
        if ( v14 == *v11 )
          CRGBA::CRGBA(
            (CRGBA *)&v33,
            *((_BYTE *)this + 72928),
            *((_BYTE *)this + 72929),
            *((_BYTE *)this + 72930),
            (unsigned int)(float)((float)(v19 * (float)*((unsigned __int8 *)this + 72931))
                                * (float)((float)*((unsigned __int8 *)this + 76) / 255.0)));
        else
          v33 = v34;
        v27 = *v13 + (float)(*(float *)v12 * (float)v14);
        v28 = *v13 + (float)(*(float *)v12 * (float)v10);
        v29 = *v32;
        v35 = *v31 + 1.0;
        v37 = v29 + -1.0;
        v38 = v27 + 1.0;
        v36 = v28 + -1.0;
        CSprite2d::DrawRect((int)&v35, (int)&v34, (int)&v33, (int)&v34, (int)&v33);
        v9 = *((_DWORD *)this + 18220);
        goto LABEL_25;
      }
      v2.n64_f32[0] = v18 - v17;
    }
    else
    {
      v2.n64_f32[0] = v15 - v16;
    }
    v1.n64_f32[0] = (float)(1.0 / v1.n64_f32[0]) * v2.n64_f32[0];
    v2.n64_u32[0] = 0;
    v1.n64_f32[0] = 1.0 - v1.n64_f32[0];
    LODWORD(v19) = vmax_f32(v1, v2).n64_u32[0];
    goto LABEL_14;
  }
LABEL_26:
  v39 = 0uLL;
  return CWidget::SetScissor();
}


// ============================================================

// Address: 0x2ba648
// Original: _ZN11CWidgetList15GetAlphaAtIndexEi
// Demangled: CWidgetList::GetAlphaAtIndex(int)
unsigned __int32 __fastcall CWidgetList::GetAlphaAtIndex(CWidgetList *this, int a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float v4; // s8
  float v5; // s4
  float v6; // s6
  float v7; // s2
  float v8; // s4

  v4 = *((float *)this + 11);
  v2.n64_u32[0] = *((_DWORD *)this + 18221);
  v5 = *((float *)this + 18215);
  v6 = v5 + (float)(v2.n64_f32[0] * (float)a2);
  if ( v6 >= v4 )
  {
    v7 = v5 + (float)(v2.n64_f32[0] * (float)(a2 + 1));
    v8 = *((float *)this + 9);
    if ( v7 <= v8 )
      return 1.0;
    v3.n64_f32[0] = v7 - v8;
  }
  else
  {
    v3.n64_f32[0] = v4 - v6;
  }
  v2.n64_f32[0] = (float)(1.0 / v2.n64_f32[0]) * v3.n64_f32[0];
  v3.n64_u32[0] = 0;
  v2.n64_f32[0] = 1.0 - v2.n64_f32[0];
  return vmax_f32(v2, v3).n64_u32[0];
}


// ============================================================

// Address: 0x2ba6d0
// Original: _ZN11CWidgetList14OnInitialTouchEv
// Demangled: CWidgetList::OnInitialTouch(void)
int __fastcall CWidgetList::OnInitialTouch(CWidgetList *this)
{
  float32x2_t v1; // d1
  float32x2_t v2; // d2
  float32x2_t v3; // d4
  float32x2_t v4; // d5
  int v6; // r0
  int v7; // r1
  float v8; // s0
  float *v9; // r5
  int v10; // r2
  float v11; // s6
  _BOOL4 v12; // r3
  float *v13; // r4
  int v14; // r5
  int result; // r0
  _DWORD v16[6]; // [sp+0h] [bp-18h] BYREF

  CWidget::OnInitialTouch(this);
  v6 = *((_DWORD *)this + 18220);
  if ( v6 <= 0 )
  {
    v7 = *((_DWORD *)this + 30);
  }
  else
  {
    v7 = *((_DWORD *)this + 30);
    v8 = *((float *)this + 18221);
    v9 = (float *)&CWidget::m_vecTouchAnchor[2 * v7];
    v10 = 0;
    v11 = *((float *)this + 18215);
    v12 = *v9 > *((float *)this + 18214) || *v9 < *((float *)this + 18212);
    v13 = v9 + 1;
    while ( 1 )
    {
      v14 = v10++;
      if ( !v12 )
      {
        v4.n64_f32[0] = v11 + (float)(v8 * (float)v14);
        v2.n64_f32[0] = *((float *)this + 11) + 2.0;
        if ( *v13 >= vmax_f32(v4, v2).n64_f32[0] )
        {
          v3.n64_f32[0] = v11 + (float)(v8 * (float)v10);
          v1.n64_f32[0] = *((float *)this + 9) + -2.0;
          v3.n64_u64[0] = vmin_f32(v3, v1).n64_u64[0];
          if ( *v13 <= v3.n64_f32[0] )
            break;
        }
      }
      if ( v10 >= v6 )
        goto LABEL_10;
    }
    *((_DWORD *)this + 18224) = v14;
  }
LABEL_10:
  CTouchInterface::GetTouchPosition((CTouchInterface *)v16, v7);
  *(int *)((char *)&elf_hash_chain[1754] + (_DWORD)this) = v16[1];
  result = 72916;
  *((_BYTE *)this + 72916) = 0;
  return result;
}


// ============================================================

// Address: 0x2ba7f0
// Original: _ZN11CWidgetList12IsSwipedLeftEv
// Demangled: CWidgetList::IsSwipedLeft(void)
int __fastcall CWidgetList::IsSwipedLeft(CWidgetList *this)
{
  int (__fastcall *v2)(CWidgetList *, _BYTE *, _DWORD); // r6
  _BYTE v4[24]; // [sp+0h] [bp-18h] BYREF

  if ( CWidget::IsSwipedLeft(this) != 1 )
    return 0;
  v2 = *(int (__fastcall **)(CWidgetList *, _BYTE *, _DWORD))(*(_DWORD *)this + 12);
  CTouchInterface::GetTouchPosition((CTouchInterface *)v4, *((_DWORD *)this + 30));
  return v2(this, v4, 0) ^ 1;
}


// ============================================================

// Address: 0x2ba82a
// Original: _ZN11CWidgetList13IsSwipedRightEv
// Demangled: CWidgetList::IsSwipedRight(void)
int __fastcall CWidgetList::IsSwipedRight(CWidgetList *this)
{
  int (__fastcall *v2)(CWidgetList *, _BYTE *, _DWORD); // r6
  _BYTE v4[24]; // [sp+0h] [bp-18h] BYREF

  if ( CWidget::IsSwipedRight(this) != 1 )
    return 0;
  v2 = *(int (__fastcall **)(CWidgetList *, _BYTE *, _DWORD))(*(_DWORD *)this + 12);
  CTouchInterface::GetTouchPosition((CTouchInterface *)v4, *((_DWORD *)this + 30));
  return v2(this, v4, 0) ^ 1;
}


// ============================================================

// Address: 0x2ba864
// Original: _ZN11CWidgetList16GetSelectedEntryEPc
// Demangled: CWidgetList::GetSelectedEntry(char *)
int __fastcall CWidgetList::GetSelectedEntry(CWidgetList *this, char *a2)
{
  char *v2; // r2
  bool v3; // zf
  char *v4; // r4

  v2 = (char *)this + 0x10000;
  v3 = a2 == 0;
  v4 = (char *)this + 72896;
  if ( a2 )
  {
    v2 = *(char **)v4;
    v3 = *(_DWORD *)v4 == -1;
  }
  if ( !v3 )
    strcpy(a2, (const char *)this + 284 * (_DWORD)v2 + 144);
  return *(_DWORD *)v4;
}


// ============================================================

// Address: 0x2ba894
// Original: _ZN11CWidgetList15AlphabetizeSortEPKvS1_
// Demangled: CWidgetList::AlphabetizeSort(void const*,void const*)
int __fastcall CWidgetList::AlphabetizeSort(CWidgetList *this, const char *a2, const void *a3)
{
  int v3; // r0
  int v4; // r1

  v3 = strcmp((const char *)this, a2);
  v4 = -1;
  if ( v3 > 0 )
    return 1;
  return v4;
}


// ============================================================

// Address: 0x2ba8ac
// Original: _ZN11CWidgetList15ShrinkTextToFitEf
// Demangled: CWidgetList::ShrinkTextToFit(float)
int __fastcall CWidgetList::ShrinkTextToFit(int this, float a2)
{
  float *v3; // r11
  int *v4; // r10
  CKeyGen *v5; // r4
  _BYTE *v6; // r5
  int i; // r6
  CFont *v8; // r0
  float v9; // r1
  unsigned __int8 v10; // r3
  float v11; // s0
  float v12; // r0
  unsigned __int16 v13[152]; // [sp+0h] [bp-130h] BYREF

  if ( *(int *)(this + 72880) >= 1 )
  {
    v3 = (float *)(this + 72904);
    v4 = (int *)(this + 72880);
    v5 = (CKeyGen *)(this + 144);
    v6 = (_BYTE *)(this + 72917);
    for ( i = 0; i < *v4; ++i )
    {
      if ( *v6 )
      {
        v8 = (CFont *)CText::Get((CText *)TheText, v5);
        v11 = 0.0;
        if ( !v8 )
          goto LABEL_8;
      }
      else
      {
        AsciiToGxtChar((const char *)v5, v13);
        v8 = (CFont *)v13;
      }
      v11 = COERCE_FLOAT(CFont::GetStringWidth(v8, (unsigned __int16 *)((char *)&stderr + 1), 0, v10));
LABEL_8:
      if ( v11 > a2 )
      {
        v12 = (float)(a2 / v11) * *v3;
        *v3 = v12;
        CFont::SetScale((CFont *)LODWORD(v12), v9);
      }
      this = *v4;
      v5 = (CKeyGen *)((char *)v5 + 284);
    }
  }
  return this;
}


// ============================================================

// Address: 0x2ba970
// Original: _ZN11CWidgetList7AddItemEPKcS1_
// Demangled: CWidgetList::AddItem(char const*,char const*)
int __fastcall CWidgetList::AddItem(CWidgetList *this, const char *a2, const char *a3)
{
  const char *v6; // r4
  char v7; // r5
  char v8; // r11
  char v9; // r4
  char v10; // r8
  char *v11; // r9
  __int64 v12; // d16
  __int64 v13; // d17
  char v15; // [sp+Ch] [bp-144h] BYREF
  char v16; // [sp+Dh] [bp-143h]
  __int16 v17; // [sp+Eh] [bp-142h]
  char v18[128]; // [sp+10h] [bp-140h] BYREF
  char v19[128]; // [sp+90h] [bp-C0h] BYREF
  int v20; // [sp+110h] [bp-40h] BYREF
  __int64 v21; // [sp+114h] [bp-3Ch]
  __int64 v22; // [sp+11Ch] [bp-34h]
  char v23; // [sp+124h] [bp-2Ch]
  char v24; // [sp+125h] [bp-2Bh]
  __int16 v25; // [sp+126h] [bp-2Ah]
  char v26; // [sp+128h] [bp-28h]
  int v27; // [sp+130h] [bp-20h]

  CRGBA::CRGBA((CRGBA *)&v15, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  CSprite2d::CSprite2d((CSprite2d *)&v20);
  v6 = (const char *)&dword_2BAAA4;
  v21 = 0xC974240049742400LL;
  v22 = 0x49742400C9742400LL;
  if ( !a2 )
    a2 = (const char *)&dword_2BAAA4;
  strcpy(v18, a2);
  if ( a3 )
    v6 = a3;
  strcpy(v19, v6);
  v7 = v15;
  v8 = v16;
  v9 = v17;
  v21 = 0x3F80000000000000LL;
  v22 = 1065353216LL;
  v23 = v15;
  v24 = v16;
  v25 = v17;
  v26 = 0;
  v10 = HIBYTE(v17);
  v11 = (char *)this + 284 * *(int *)((char *)&elf_hash_chain[1746] + (_DWORD)this);
  memcpy_0(v11 + 144, v18, 0x100u);
  *((_DWORD *)v11 + 100) = v20;
  v12 = v21;
  v13 = v22;
  v11[420] = v7;
  v11[424] = 0;
  v11[422] = v9;
  v11[421] = v8;
  v11[423] = v10;
  *(_QWORD *)(v11 + 404) = v12;
  *(_QWORD *)(v11 + 412) = v13;
  CSprite2d::~CSprite2d((CSprite2d *)&v20);
  ++*((_DWORD *)this + 18220);
  return _stack_chk_guard - v27;
}


// ============================================================

// Address: 0x2baaac
// Original: _ZN11CWidgetList10IsReleasedEP9CVector2D
// Demangled: CWidgetList::IsReleased(CVector2D *)
int __fastcall CWidgetList::IsReleased(int a1)
{
  if ( *(_DWORD *)(a1 + 72896) == -1 )
    return 0;
  else
    return j_CWidget::IsReleased();
}


// ============================================================

// Address: 0x2baac2
// Original: _ZN11CWidgetList9VisualizeEv
// Demangled: CWidgetList::Visualize(void)
int __fastcall CWidgetList::Visualize(CWidgetList *this)
{
  _BYTE v2[12]; // [sp+4h] [bp-Ch] BYREF

  CWidget::Visualize(this);
  CRGBA::CRGBA((CRGBA *)v2, 0, 0, 0xFFu, 0x80u);
  return CSprite2d::DrawRect();
}


// ============================================================

// Address: 0x2baaf4
// Original: _ZN11CWidgetListD2Ev
// Demangled: CWidgetList::~CWidgetList()
void __fastcall CWidgetList::~CWidgetList(CWidgetList *this)
{
  int *v2; // r5

  v2 = &elf_hash_chain[1731];
  *(_DWORD *)this = &off_663E18;
  do
  {
    CSprite2d::~CSprite2d((CSprite2d *)((char *)v2 + (_DWORD)this));
    v2 -= 71;
  }
  while ( v2 != &dword_74 );
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2bab28
// Original: _ZN11CWidgetListD0Ev
// Demangled: CWidgetList::~CWidgetList()
void __fastcall __noreturn CWidgetList::~CWidgetList(CWidgetList *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x2bab2a
// Original: _ZN11CWidgetList14GetWidgetValueEv
// Demangled: CWidgetList::GetWidgetValue(void)
float __fastcall CWidgetList::GetWidgetValue(CWidgetList *this)
{
  return (float)*((int *)this + 18224);
}


// ============================================================

// Address: 0x2bab40
// Original: _ZN11CWidgetList8IsSwipedEv
// Demangled: CWidgetList::IsSwiped(void)
int __fastcall CWidgetList::IsSwiped(CWidgetList *this)
{
  if ( (*(int (__fastcall **)(CWidgetList *))(*(_DWORD *)this + 68))(this) )
    return 1;
  else
    return (*(int (__fastcall **)(CWidgetList *))(*(_DWORD *)this + 72))(this);
}


// ============================================================

// Address: 0x2bab62
// Original: _ZN11CWidgetList15SetEquippedItemEi
// Demangled: CWidgetList::SetEquippedItem(int)
int __fastcall CWidgetList::SetEquippedItem(int this, int a2)
{
  *(_DWORD *)(this + 72900) = a2;
  return this;
}


// ============================================================

// Address: 0x2bab6e
// Original: _ZN11CWidgetList14SetWidgetValueEf
// Demangled: CWidgetList::SetWidgetValue(float)
int __fastcall CWidgetList::SetWidgetValue(int this, float a2)
{
  *(_DWORD *)(this + 72896) = (int)a2;
  return this;
}


// ============================================================


// Address: 0x199150
// Original: j__ZN15CWidgetListTextC2EPKcRK14WidgetPositionPS1_ibbb
// Demangled: CWidgetListText::CWidgetListText(char const*,WidgetPosition const&,char const**,int,bool,bool,bool)
// attributes: thunk
void CWidgetListText::CWidgetListText()
{
  JUMPOUT(0x2BBB34);
}


// ============================================================

// Address: 0x2bbbc0
// Original: _ZN15CWidgetListText6UpdateEv
// Demangled: CWidgetListText::Update(void)
int *__fastcall CWidgetListText::Update(CWidgetListText *this)
{
  int *result; // r0

  CWidgetList::Update(this);
  result = &CWidgetListText::m_fLastScroll;
  CWidgetListText::m_fLastScroll = *((_DWORD *)this + 18222);
  return result;
}


// ============================================================

// Address: 0x2bbbe4
// Original: _ZN15CWidgetListText4DrawEv
// Demangled: CWidgetListText::Draw(void)
int __fastcall CWidgetListText::Draw(CFont **this)
{
  CFont *v2; // r0
  float *v3; // r10
  float *v4; // r9
  CKeyGen *v5; // r5
  int v6; // r6
  int v7; // r1
  float v8; // s17
  float v9; // r11
  float v10; // r1
  unsigned __int8 v11; // r1
  unsigned __int8 v12; // r2
  float v13; // r1
  unsigned __int8 v14; // r1
  float v15; // r1
  unsigned __int8 v16; // r1
  signed __int8 v17; // r1
  bool v18; // r2
  float v19; // s19
  float v20; // s0
  const unsigned __int16 *v21; // r0
  bool v22; // r1
  float v23; // s2
  float v24; // s17
  float v25; // s21
  unsigned __int16 *v26; // r3
  float v27; // s17
  unsigned __int16 *v28; // r3
  float v29; // r1
  float v30; // s0
  float *v32; // [sp+20h] [bp-1A8h]
  _BYTE *v33; // [sp+24h] [bp-1A4h]
  unsigned __int16 v34[16]; // [sp+28h] [bp-1A0h] BYREF
  _QWORD v35[32]; // [sp+48h] [bp-180h] BYREF
  _BYTE v36[4]; // [sp+14Ch] [bp-7Ch] BYREF
  _BYTE v37[4]; // [sp+150h] [bp-78h] BYREF
  char v38[16]; // [sp+154h] [bp-74h] BYREF
  int v39; // [sp+164h] [bp-64h]

  CWidgetList::Draw((CWidgetList *)this);
  CWidget::SetScissor();
  v2 = this[18220];
  if ( (int)v2 >= 1 )
  {
    v32 = (float *)(this + 18212);
    v33 = (char *)this + 72919;
    v3 = (float *)(this + 18221);
    v4 = (float *)(this + 18215);
    v5 = (CKeyGen *)(this + 36);
    v6 = 0;
    do
    {
      v7 = v6++;
      v8 = (float)v7;
      if ( (float)(*v4 + (float)(*v3 * (float)v7)) > (float)((float)(*((float *)this + 11) - *v3) + 2.0)
        && (float)(*v4 + (float)(*v3 * (float)v6)) < (float)((float)(*v3 + *((float *)this + 9)) + -2.0) )
      {
        v9 = COERCE_FLOAT(CWidgetList::GetAlphaAtIndex((CWidgetList *)this, v7));
        CFont::SetWrapx(COERCE_CFONT_((float)dword_9FC900), v10);
        CFont::SetFontStyle((CFont *)((char *)&stderr + 1), v11);
        CFont::SetBackground(0, 0, v12);
        CFont::SetScale(this[18226], v13);
        CFont::SetOrientation((CFont *)((char *)&stderr + 1), v14);
        CFont::SetCentreSize(COERCE_CFONT_((float)((float)dword_9FC900 / 640.0) * 640.0), v15);
        CFont::SetProportional((CFont *)((char *)&stderr + 1), v16);
        CRGBA::CRGBA(
          (CRGBA *)v37,
          0xFFu,
          0xFFu,
          0xFFu,
          (unsigned int)(float)(v9 * (float)*((unsigned __int8 *)this + 76)));
        CFont::SetColor();
        CRGBA::CRGBA((CRGBA *)v36, 0, 0, 0, (unsigned int)(float)(v9 * (float)*((unsigned __int8 *)this + 76)));
        CFont::SetDropColor();
        CFont::SetEdge(0, v17);
        v19 = COERCE_FLOAT(CFont::GetCharacterSize((CFont *)((char *)&dword_38 + 1), 0, v18)) * 3.0;
        v20 = fabsf(*((float *)this + 18214) - *v32);
        if ( v19 < 10.0 )
          v19 = 30.0;
        if ( *v33 )
          v20 = v20 - v19;
        CWidgetList::ShrinkTextToFit((CWidgetList *)this, v20 + -2.0);
        if ( *((_BYTE *)this + 72917) )
        {
          v21 = (const unsigned __int16 *)CText::Get((CText *)TheText, v5);
          GxtCharStrcpy((unsigned __int16 *)v35, v21);
        }
        else
        {
          AsciiToGxtChar((const char *)v5, (unsigned __int16 *)v35);
        }
        v23 = *v3 * v8;
        v24 = *v3 * 0.5;
        v25 = *v4 + v23;
        v27 = (float)(v24 + v25) - (float)(COERCE_FLOAT(CFont::GetHeight(0, v22)) * 0.5);
        if ( *v33 )
        {
          sub_5E6BC0(v38, (const char *)&dword_2BBF08, v6);
          AsciiToGxtChar(v38, v34);
          v4 = (float *)(this + 18215);
          CFont::PrintString(COERCE_CFONT_(*v32 + 1.0), v27, (CFont *)v34, v28);
          v29 = v27;
          v30 = v19 + (float)(*v32 + 1.0);
        }
        else
        {
          v29 = v27;
          v30 = *v32 + 1.0;
        }
        CFont::PrintString((CFont *)LODWORD(v30), v29, (CFont *)v35, v26);
        v2 = this[18220];
      }
      v5 = (CKeyGen *)((char *)v5 + 284);
    }
    while ( v6 < (int)v2 );
  }
  CFont::RenderFontBuffer(v2);
  memset(v35, 0, 16);
  CWidget::SetScissor();
  return _stack_chk_guard - v39;
}


// ============================================================

// Address: 0x2bbf10
// Original: _ZN15CWidgetListTextD0Ev
// Demangled: CWidgetListText::~CWidgetListText()
void __fastcall CWidgetListText::~CWidgetListText(CWidgetListText *this)
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

// Address: 0x2bbf48
// Original: _ZN15CWidgetListText7GetNameEv
// Demangled: CWidgetListText::GetName(void)
char *__fastcall CWidgetListText::GetName(CWidgetListText *this)
{
  return "ListText";
}


// ============================================================

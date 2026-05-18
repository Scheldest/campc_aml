
// Address: 0x18bf80
// Original: j__ZN19CWidgetButtonSchoolC2EPKcRK14WidgetPositionS1_i10HIDMapping
// Demangled: CWidgetButtonSchool::CWidgetButtonSchool(char const*,WidgetPosition const&,char const*,int,HIDMapping)
// attributes: thunk
int __fastcall CWidgetButtonSchool::CWidgetButtonSchool(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return _ZN19CWidgetButtonSchoolC2EPKcRK14WidgetPositionS1_i10HIDMapping(a1, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x2b5a60
// Original: _ZN19CWidgetButtonSchoolC2EPKcRK14WidgetPositionS1_i10HIDMapping
// Demangled: CWidgetButtonSchool::CWidgetButtonSchool(char const*,WidgetPosition const&,char const*,int,HIDMapping)
int __fastcall CWidgetButtonSchool::CWidgetButtonSchool(int a1, int a2, int a3, const char *a4, int a5, int a6)
{
  const char *v8; // r1
  unsigned int v9; // r0

  CWidgetButton::CWidgetButton(a1, a2, a3, 1, a5, a6);
  v8 = &byte_61CD7E;
  *(_DWORD *)a1 = &off_663444;
  if ( a4 )
    v8 = a4;
  strcpy((char *)(a1 + 168), v8);
  v9 = *(_DWORD *)(a1 + 128) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 28) = 1159725056;
  *(_DWORD *)(a1 + 128) = v9;
  return a1;
}


// ============================================================

// Address: 0x2b5ac0
// Original: _ZN19CWidgetButtonSchool4DrawEv
// Demangled: CWidgetButtonSchool::Draw(void)
size_t __fastcall CWidgetButtonSchool::Draw(CWidgetButtonSchool *this)
{
  size_t result; // r0
  unsigned __int8 v3; // r2
  unsigned __int8 v4; // r1
  unsigned __int8 v5; // r1
  unsigned __int8 v6; // r1
  signed __int8 v7; // r1
  float v8; // s16
  float v9; // r1
  CFont *v10; // r0
  unsigned __int8 v11; // r3
  float v12; // r0
  _BOOL4 v13; // r1
  float v14; // s18
  float v15; // s20
  float v16; // s0
  float v17; // s22
  float v18; // s0
  CFont *v19; // r0
  unsigned __int16 *v20; // r3
  _BYTE v21[4]; // [sp+4h] [bp-34h] BYREF
  _BYTE v22[4]; // [sp+8h] [bp-30h] BYREF
  _BYTE v23[44]; // [sp+Ch] [bp-2Ch] BYREF

  CWidgetButton::Draw(this);
  result = *((unsigned __int8 *)this + 76);
  if ( *((_BYTE *)this + 76) )
  {
    result = strlen((const char *)this + 168);
    if ( result )
    {
      CFont::SetBackground(0, 0, v3);
      CFont::SetProportional((CFont *)((char *)&stderr + 1), v4);
      CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v5);
      CFont::SetOrientation(0, v6);
      CFont::SetEdge(0, v7);
      CRGBA::CRGBA((CRGBA *)v23, 0, 0, 0, *((_BYTE *)this + 76));
      CFont::SetDropColor();
      if ( (*(int (__fastcall **)(CWidgetButtonSchool *, _DWORD))(*(_DWORD *)this + 80))(this, 0) == 1 )
        CRGBA::CRGBA((CRGBA *)v22, 0xFFu, 0, 0, *((_BYTE *)this + 76));
      else
        CRGBA::CRGBA((CRGBA *)v21, 0xFFu, 0xFFu, 0xFFu, *((_BYTE *)this + 76));
      CFont::SetColor();
      v8 = fabsf(*((float *)this + 9) - *((float *)this + 11)) * 0.01;
      CFont::SetScale((CFont *)LODWORD(v8), v9);
      v10 = (CFont *)CText::Get((CText *)TheText, (CWidgetButtonSchool *)((char *)this + 168));
      v12 = COERCE_FLOAT(CFont::GetStringWidth(v10, (unsigned __int16 *)((char *)&stderr + 1), 0, v11));
      v14 = *((float *)this + 8);
      v15 = *((float *)this + 10);
      v16 = fabsf(v15 - v14) * 0.65;
      if ( v12 > v16 )
      {
        CFont::SetScale(COERCE_CFONT_((float)(v16 / v12) * v8), *(float *)&v13);
        v14 = *((float *)this + 8);
        v15 = *((float *)this + 10);
      }
      v17 = *((float *)this + 9) + *((float *)this + 11);
      v18 = COERCE_FLOAT(CFont::GetHeight(0, v13)) * 0.5;
      v19 = (CFont *)CText::Get((CText *)TheText, (CWidgetButtonSchool *)((char *)this + 168));
      return CFont::PrintString(COERCE_CFONT_((float)(v14 + v15) * 0.5), (float)(v17 * 0.5) - v18, v19, v20);
    }
  }
  return result;
}


// ============================================================

// Address: 0x2b5c34
// Original: _ZN19CWidgetButtonSchoolD0Ev
// Demangled: CWidgetButtonSchool::~CWidgetButtonSchool()
void __fastcall CWidgetButtonSchool::~CWidgetButtonSchool(CWidgetButtonSchool *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonSchool *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b5c60
// Original: _ZN19CWidgetButtonSchool7GetNameEv
// Demangled: CWidgetButtonSchool::GetName(void)
char *__fastcall CWidgetButtonSchool::GetName(CWidgetButtonSchool *this)
{
  return "BTN SCHOOL";
}


// ============================================================

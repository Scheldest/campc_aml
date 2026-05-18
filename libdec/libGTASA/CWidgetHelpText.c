
// Address: 0x18bb08
// Original: j__ZN15CWidgetHelpText18ConditionSatisfiedEj
// Demangled: CWidgetHelpText::ConditionSatisfied(uint)
// attributes: thunk
int __fastcall CWidgetHelpText::ConditionSatisfied(CWidgetHelpText *this, unsigned int a2)
{
  return _ZN15CWidgetHelpText18ConditionSatisfiedEj(this, a2);
}


// ============================================================

// Address: 0x18cb60
// Original: j__ZN15CWidgetHelpText10RenderStatEffbf
// Demangled: CWidgetHelpText::RenderStat(float,float,bool,float)
// attributes: thunk
int __fastcall CWidgetHelpText::RenderStat(CWidgetHelpText *this, float a2, float a3, bool a4, float a5)
{
  return _ZN15CWidgetHelpText10RenderStatEffbf(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x18f3f0
// Original: j__ZN15CWidgetHelpText20GetNumQueuedMessagesEv
// Demangled: CWidgetHelpText::GetNumQueuedMessages(void)
// attributes: thunk
int __fastcall CWidgetHelpText::GetNumQueuedMessages(CWidgetHelpText *this)
{
  return _ZN15CWidgetHelpText20GetNumQueuedMessagesEv(this);
}


// ============================================================

// Address: 0x18f49c
// Original: j__ZN15CWidgetHelpText14IsStringQueuedEPt
// Demangled: CWidgetHelpText::IsStringQueued(ushort *)
// attributes: thunk
int __fastcall CWidgetHelpText::IsStringQueued(CWidgetHelpText *this, CMessages *a2)
{
  return _ZN15CWidgetHelpText14IsStringQueuedEPt(this, a2);
}


// ============================================================

// Address: 0x191414
// Original: j__ZN15CWidgetHelpText10ClearQueueEb
// Demangled: CWidgetHelpText::ClearQueue(bool)
// attributes: thunk
int __fastcall CWidgetHelpText::ClearQueue(CWidgetHelpText *this, bool a2)
{
  return _ZN15CWidgetHelpText10ClearQueueEb(this, a2);
}


// ============================================================

// Address: 0x194bf8
// Original: j__ZN15CWidgetHelpText7ProcessEv
// Demangled: CWidgetHelpText::Process(void)
// attributes: thunk
int __fastcall CWidgetHelpText::Process(CWidgetHelpText *this)
{
  return _ZN15CWidgetHelpText7ProcessEv(this);
}


// ============================================================

// Address: 0x196fbc
// Original: j__ZN15CWidgetHelpText17AddMessageToQueueEPtbtffj
// Demangled: CWidgetHelpText::AddMessageToQueue(ushort *,bool,ushort,float,float,uint)
// attributes: thunk
int __fastcall CWidgetHelpText::AddMessageToQueue(
        CWidgetHelpText *this,
        unsigned __int16 *a2,
        bool a3,
        unsigned __int16 a4,
        float a5,
        float a6,
        unsigned int a7)
{
  return _ZN15CWidgetHelpText17AddMessageToQueueEPtbtffj(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x199d28
// Original: j__ZN15CWidgetHelpText11UseTopStyleEv
// Demangled: CWidgetHelpText::UseTopStyle(void)
// attributes: thunk
int __fastcall CWidgetHelpText::UseTopStyle(CWidgetHelpText *this)
{
  return _ZN15CWidgetHelpText11UseTopStyleEv(this);
}


// ============================================================

// Address: 0x19aca0
// Original: j__ZN15CWidgetHelpText12SetFontPropsEPt
// Demangled: CWidgetHelpText::SetFontProps(ushort *)
// attributes: thunk
int __fastcall CWidgetHelpText::SetFontProps(CWidgetHelpText *this, unsigned __int16 *a2)
{
  return _ZN15CWidgetHelpText12SetFontPropsEPt(this, a2);
}


// ============================================================

// Address: 0x19dd9c
// Original: j__ZN15CWidgetHelpTextC2EPKcRK14WidgetPosition
// Demangled: CWidgetHelpText::CWidgetHelpText(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetHelpText::CWidgetHelpText()
{
  return _ZN15CWidgetHelpTextC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2b6d90
// Original: _ZN15CWidgetHelpTextC2EPKcRK14WidgetPosition
// Demangled: CWidgetHelpText::CWidgetHelpText(char const*,WidgetPosition const&)
int __fastcall CWidgetHelpText::CWidgetHelpText(int a1, int a2, int a3)
{
  int result; // r0
  float v5; // [sp+8h] [bp-20h] BYREF
  int v6; // [sp+Ch] [bp-1Ch] BYREF
  int v7; // [sp+10h] [bp-18h] BYREF
  _DWORD v8[5]; // [sp+14h] [bp-14h] BYREF

  CWidget::CWidget(a1, a2, a3, 4, 0);
  *(_QWORD *)(a1 + 168) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 176) = 0x49742400C9742400LL;
  *(_DWORD *)a1 = &off_663C5C;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)(a1 + 184));
  *(_WORD *)(a1 + 988) = 0;
  *(_DWORD *)(a1 + 984) = 0;
  *(_DWORD *)(a1 + 992) = 0;
  *(_DWORD *)(a1 + 996) = 0;
  *(_DWORD *)(a1 + 1000) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)(a1 + 1004));
  *(_WORD *)(a1 + 1808) = 0;
  *(_DWORD *)(a1 + 1804) = 0;
  *(_DWORD *)(a1 + 1812) = 0;
  *(_DWORD *)(a1 + 1816) = 0;
  *(_DWORD *)(a1 + 1820) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)(a1 + 1824));
  *(_WORD *)(a1 + 2628) = 0;
  *(_DWORD *)(a1 + 2624) = 0;
  *(_DWORD *)(a1 + 2632) = 0;
  *(_DWORD *)(a1 + 2636) = 0;
  *(_DWORD *)(a1 + 2640) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)(a1 + 2644));
  *(_WORD *)(a1 + 3448) = 0;
  *(_DWORD *)(a1 + 3444) = 0;
  *(_DWORD *)(a1 + 3452) = 0;
  *(_DWORD *)(a1 + 3456) = 0;
  *(_DWORD *)(a1 + 3460) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)(a1 + 3464));
  *(_WORD *)(a1 + 4268) = 0;
  *(_DWORD *)(a1 + 4264) = 0;
  *(_DWORD *)(a1 + 4272) = 0;
  *(_DWORD *)(a1 + 4276) = 0;
  *(_DWORD *)(a1 + 4280) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)(a1 + 4284));
  *(_WORD *)(a1 + 5088) = 0;
  *(_DWORD *)(a1 + 5084) = 0;
  *(_DWORD *)(a1 + 5092) = 0;
  *(_DWORD *)(a1 + 5096) = 0;
  *(_DWORD *)(a1 + 5100) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)(a1 + 5104));
  *(_WORD *)(a1 + 5908) = 0;
  *(_DWORD *)(a1 + 5904) = 0;
  *(_DWORD *)(a1 + 5912) = 0;
  *(_DWORD *)(a1 + 5916) = 0;
  *(_DWORD *)(a1 + 5920) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)(a1 + 5924));
  *(_WORD *)(a1 + 6728) = 0;
  *(_DWORD *)(a1 + 6724) = 0;
  *(_DWORD *)(a1 + 6732) = 0;
  *(_DWORD *)(a1 + 6736) = 0;
  *(_DWORD *)(a1 + 6740) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)(a1 + 6744));
  *(_WORD *)(a1 + 7548) = 0;
  *(_DWORD *)(a1 + 7544) = 0;
  *(_DWORD *)(a1 + 7552) = 0;
  *(_DWORD *)(a1 + 7556) = 0;
  *(_DWORD *)(a1 + 7560) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)(a1 + 7564));
  *(_WORD *)(a1 + 8368) = 0;
  *(_DWORD *)(a1 + 8364) = 0;
  *(_DWORD *)(a1 + 8372) = 0;
  *(_DWORD *)(a1 + 8376) = 0;
  *(_DWORD *)(a1 + 8380) = 0;
  CWidgetHelpText::m_pInstance = a1;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 164) = 0;
  v7 = 0;
  v8[0] = 0;
  v5 = 0.0;
  v6 = 0;
  CTouchInterface::GetWidgetPosition(114, (int)v8, (int)&v7, (int)&v6, (int)&v5);
  result = a1;
  *(float *)(a1 + 160) = v5 * (float)((float)dword_9FC904 / 448.0);
  return result;
}


// ============================================================

// Address: 0x2b6fb4
// Original: _ZN15CWidgetHelpTextD2Ev
// Demangled: CWidgetHelpText::~CWidgetHelpText()
void __fastcall CWidgetHelpText::~CWidgetHelpText(CWidgetHelpText *this)
{
  *(_DWORD *)this = &off_663C5C;
  CWidgetHelpText::m_pInstance = 0;
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2b6fd4
// Original: _ZN15CWidgetHelpTextD0Ev
// Demangled: CWidgetHelpText::~CWidgetHelpText()
void __fastcall CWidgetHelpText::~CWidgetHelpText(CWidgetHelpText *this)
{
  void *v1; // r0

  *(_DWORD *)this = &off_663C5C;
  CWidgetHelpText::m_pInstance = 0;
  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2b7000
// Original: _ZN15CWidgetHelpText17AddMessageToQueueEPtbtffj
// Demangled: CWidgetHelpText::AddMessageToQueue(ushort *,bool,ushort,float,float,uint)
void *__fastcall CWidgetHelpText::AddMessageToQueue(
        CWidgetHelpText *this,
        unsigned __int16 *a2,
        int a3,
        int a4,
        float a5,
        float a6,
        unsigned int a7)
{
  void *result; // r0
  unsigned __int16 *v12; // r1
  char *v13; // r5
  unsigned __int16 *v14; // r1
  unsigned __int16 *v15; // r1
  unsigned __int16 *v16; // r1
  unsigned __int16 *v17; // r1
  unsigned __int16 *v18; // r1
  unsigned __int16 *v19; // r1
  unsigned __int16 *v20; // r1
  unsigned __int16 *v21; // r1
  unsigned __int16 *v22; // r1
  unsigned __int16 v23; // r3
  float v24; // s0
  unsigned __int16 v25[400]; // [sp+0h] [bp-360h] BYREF
  float v26; // [sp+320h] [bp-40h]
  __int16 v27; // [sp+324h] [bp-3Ch]
  float v28; // [sp+328h] [bp-38h]
  float v29; // [sp+32Ch] [bp-34h]
  unsigned int v30; // [sp+330h] [bp-30h]

  result = (void *)CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 7564), a2);
  if ( !result && (a4 || (result = (void *)CWidgetHelpText::IsStringQueued(this, (CMessages *)a2)) == 0) )
  {
    v13 = (char *)this + 184;
    if ( !CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 184), v12) )
      goto LABEL_14;
    v13 = (char *)this + 1004;
    if ( !CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 1004), v14) )
      goto LABEL_14;
    v13 = (char *)this + 1824;
    if ( !CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 1824), v15) )
      goto LABEL_14;
    v13 = (char *)this + 2644;
    if ( !CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 2644), v16)
      || (v13 = (char *)this + 3464, !CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 3464), v17))
      || (v13 = (char *)this + 4284, !CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 4284), v18))
      || (v13 = (char *)this + 5104, !CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 5104), v19))
      || (v13 = (char *)this + 5924, !CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 5924), v20))
      || (v13 = (char *)this + 6744, !CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 6744), v21))
      || (v13 = (char *)this + 7564,
          (result = (void *)CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 7564), v22)) == 0) )
    {
LABEL_14:
      AsciiToGxtChar(&byte_61CD7E, v25);
      CMessages::GxtStringCopy((CMessages *)v25, a2, (unsigned __int16 *)&elf_hash_bucket[37], v23);
      v24 = 5.0;
      if ( a3 )
        v24 = 9.0;
      v27 = a4;
      v28 = a5;
      v29 = a6;
      v30 = a7;
      v26 = v24;
      return memcpy_0(v13, v25, 0x334u);
    }
  }
  return result;
}


// ============================================================

// Address: 0x2b7120
// Original: _ZN15CWidgetHelpText14IsStringQueuedEPt
// Demangled: CWidgetHelpText::IsStringQueued(ushort *)
bool __fastcall CWidgetHelpText::IsStringQueued(CWidgetHelpText *this, CMessages *a2, int a3, unsigned __int16 a4)
{
  unsigned __int16 v6; // r3
  unsigned __int16 v7; // r3
  unsigned __int16 v8; // r3
  unsigned __int16 v9; // r3
  unsigned __int16 v10; // r3
  unsigned __int16 v11; // r3
  unsigned __int16 v12; // r3
  unsigned __int16 v13; // r3
  unsigned __int16 v14; // r3

  return CMessages::GxtStringCompare(a2, (unsigned __int16 *)this + 92, (unsigned __int16 *)&elf_hash_bucket[37], a4)
      || CMessages::GxtStringCompare(a2, (unsigned __int16 *)this + 502, (unsigned __int16 *)&elf_hash_bucket[37], v6)
      || CMessages::GxtStringCompare(a2, (unsigned __int16 *)this + 912, (unsigned __int16 *)&elf_hash_bucket[37], v7)
      || CMessages::GxtStringCompare(a2, (unsigned __int16 *)this + 1322, (unsigned __int16 *)&elf_hash_bucket[37], v8)
      || CMessages::GxtStringCompare(a2, (unsigned __int16 *)this + 1732, (unsigned __int16 *)&elf_hash_bucket[37], v9)
      || CMessages::GxtStringCompare(a2, (unsigned __int16 *)this + 2142, (unsigned __int16 *)&elf_hash_bucket[37], v10)
      || CMessages::GxtStringCompare(a2, (unsigned __int16 *)this + 2552, (unsigned __int16 *)&elf_hash_bucket[37], v11)
      || CMessages::GxtStringCompare(a2, (unsigned __int16 *)this + 2962, (unsigned __int16 *)&elf_hash_bucket[37], v12)
      || CMessages::GxtStringCompare(a2, (unsigned __int16 *)this + 3372, (unsigned __int16 *)&elf_hash_bucket[37], v13)
      || CMessages::GxtStringCompare(a2, (unsigned __int16 *)this + 3782, (unsigned __int16 *)&elf_hash_bucket[37], v14) != 0;
}


// ============================================================

// Address: 0x2b71de
// Original: _ZN15CWidgetHelpText7ProcessEv
// Demangled: CWidgetHelpText::Process(void)
int __fastcall CWidgetHelpText::Process(CWidgetHelpText *this)
{
  if ( CWidgetHelpText::UseTopStyle(this) == 1 )
    return CWidgetHelpText::ProcessTopStyle(this);
  else
    return CWidgetHelpText::ProcessMidScreenStyle(this);
}


// ============================================================

// Address: 0x2b71fc
// Original: _ZN15CWidgetHelpText11UseTopStyleEv
// Demangled: CWidgetHelpText::UseTopStyle(void)
bool __fastcall CWidgetHelpText::UseTopStyle(CWidgetHelpText *this)
{
  return CWidgetInfoFrame::AnyObjectEnabled(this)
      || CWidgetButtonAnimated::AnyObjectEnabled(0)
      || dword_6F3894 && CWidget::GetEnabled((CWidget *)dword_6F3894)
      || dword_6F3898 && CWidget::GetEnabled((CWidget *)dword_6F3898)
      || dword_6F3A64 && CWidget::GetEnabled((CWidget *)dword_6F3A64)
      || dword_6F3A58 && CWidget::GetEnabled((CWidget *)dword_6F3A58)
      || dword_6F3A68 && CWidget::GetEnabled((CWidget *)dword_6F3A68)
      || dword_6F3A54 && CWidget::GetEnabled((CWidget *)dword_6F3A54)
      || dword_6F3A70 && CWidget::GetEnabled((CWidget *)dword_6F3A70)
      || dword_6F3A04 && CWidget::GetEnabled((CWidget *)dword_6F3A04);
}


// ============================================================

// Address: 0x2b72c8
// Original: _ZN15CWidgetHelpText15ProcessTopStyleEv
// Demangled: CWidgetHelpText::ProcessTopStyle(void)
int __fastcall CWidgetHelpText::ProcessTopStyle(CWidgetHelpText *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d2
  float32x2_t v4; // d3
  float32x2_t v5; // d4
  float32x2_t v6; // d8
  unsigned __int16 *v8; // r1
  int v9; // r6
  float v10; // s2
  double v11; // d16
  float v12; // s2
  int v13; // r1
  float v14; // s16
  double v15; // d16
  unsigned __int16 *v16; // r1
  float v17; // r0
  float v18; // s2
  float v19; // s4
  float v20; // s2
  double v21; // d16
  float v22; // s4
  float v23; // s2
  int GxtStringLength; // r0
  int result; // r0

  v9 = CWidgetHelpText::SetFontProps(this, (unsigned __int16 *)this + 410 * (*((_DWORD *)this + 39) == 3) + 92);
  v6.n64_u32[0] = 0;
  switch ( *((_DWORD *)this + 39) )
  {
    case 0:
      *((_DWORD *)this + 36) = 0;
      *((_DWORD *)this + 37) = 0;
      if ( CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 184), v8) )
      {
        *((_DWORD *)this + 38) = 0;
        *((_DWORD *)this + 39) = 1;
        goto LABEL_14;
      }
      goto LABEL_23;
    case 1:
      v5.n64_u32[0] = 1.0;
      v3.n64_u32[0] = 1051092582;
      v1.n64_f32[0] = CWidget::m_fElapsedTime + *((float *)this + 38);
      v1.n64_u64[0] = vmin_f32(v1, v3).n64_u64[0];
      v6.n64_f32[0] = *((float *)this + 40) * (float)v9;
      v3.n64_f32[0] = v1.n64_f32[0] / 0.325;
      LODWORD(v12) = vmin_f32(v3, v5).n64_u32[0];
      *((float *)this + 36) = v12;
      *((float *)this + 37) = v12;
      *((_DWORD *)this + 38) = v1.n64_u32[0];
      goto LABEL_6;
    case 2:
      v2.n64_u32[0] = *((_DWORD *)this + 246);
      v14 = *((float *)this + 40);
      v15 = CWidget::m_fElapsedTime + *((float *)this + 38);
      *((_DWORD *)this + 36) = 1065353216;
      *((_DWORD *)this + 37) = 1065353216;
      v1.n64_f32[0] = v15;
      v1.n64_u64[0] = vmin_f32(v2, v1).n64_u64[0];
      *((_DWORD *)this + 38) = v1.n64_u32[0];
      if ( CTouchInterface::IsReleased(162, 0, 1) )
      {
        v17 = *((float *)this + 246);
        *((float *)this + 38) = v17;
        v18 = v17;
        v19 = v17;
      }
      else
      {
        v19 = *((float *)this + 38);
        v18 = *((float *)this + 246);
      }
      v6.n64_f32[0] = v14 * (float)v9;
      if ( v19 != v18 )
        goto LABEL_23;
      GxtStringLength = CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 1004), v16);
      v13 = 5;
      if ( GxtStringLength )
        v13 = 3;
      break;
    case 3:
      v4.n64_u32[0] = 1.0;
      v3.n64_u32[0] = 1051092582;
      v20 = *((float *)this + 40);
      v21 = CWidget::m_fElapsedTime + *((float *)this + 38);
      *((_DWORD *)this + 37) = 1065353216;
      v1.n64_f32[0] = v21;
      v1.n64_u64[0] = vmin_f32(v1, v3).n64_u64[0];
      v6.n64_f32[0] = v20 * (float)v9;
      v3.n64_f32[0] = v1.n64_f32[0] / 0.325;
      *((_DWORD *)this + 38) = v1.n64_u32[0];
      v22 = 1.0 - vmin_f32(v3, v4).n64_f32[0];
      *((float *)this + 36) = v22;
      if ( v22 == 0.0 )
      {
        *((_DWORD *)this + 38) = 0;
        *((_DWORD *)this + 39) = 4;
        memcpy_0((char *)this + 184, (char *)this + 1004, 0x334u);
        memcpy_0((char *)this + 1004, (char *)this + 1824, 0x334u);
        memcpy_0((char *)this + 1824, (char *)this + 2644, 0x334u);
        memcpy_0((char *)this + 2644, (char *)this + 3464, 0x334u);
        memcpy_0((char *)this + 3464, (char *)this + 4284, 0x334u);
        memcpy_0((char *)this + 4284, (char *)this + 5104, 0x334u);
        memcpy_0((char *)this + 5104, (char *)this + 5924, 0x334u);
        memcpy_0((char *)this + 5924, (char *)this + 6744, 0x334u);
        memcpy_0((char *)this + 6744, (char *)this + 7564, 0x334u);
        AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)this + 3782);
        *((_WORD *)this + 4184) = 0;
        *((_DWORD *)this + 2091) = 0;
        *((_DWORD *)this + 2093) = 0;
        *((_DWORD *)this + 2094) = 0;
        *((_DWORD *)this + 2095) = 0;
LABEL_14:
        CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 32, 0.0, 1.0);
      }
      goto LABEL_23;
    case 4:
      v5.n64_u32[0] = 1.0;
      v3.n64_u32[0] = 1051092582;
      v10 = *((float *)this + 40);
      v11 = CWidget::m_fElapsedTime + *((float *)this + 38);
      *((_DWORD *)this + 37) = 1065353216;
      v1.n64_f32[0] = v11;
      v1.n64_u64[0] = vmin_f32(v1, v3).n64_u64[0];
      v6.n64_f32[0] = v10 * (float)v9;
      v3.n64_f32[0] = v1.n64_f32[0] / 0.325;
      LODWORD(v12) = vmin_f32(v3, v5).n64_u32[0];
      *((_DWORD *)this + 38) = v1.n64_u32[0];
      *((float *)this + 36) = v12;
LABEL_6:
      if ( v12 != v5.n64_f32[0] )
        goto LABEL_23;
      v13 = 2;
      break;
    case 5:
      v3.n64_u32[0] = 1.0;
      v2.n64_u32[0] = 1051092582;
      v1.n64_f32[0] = CWidget::m_fElapsedTime + *((float *)this + 38);
      v1.n64_u64[0] = vmin_f32(v1, v2).n64_u64[0];
      v2.n64_f32[0] = v1.n64_f32[0] / 0.325;
      v23 = 1.0 - vmin_f32(v2, v3).n64_f32[0];
      *((float *)this + 36) = v23;
      *((float *)this + 37) = v23;
      *((_DWORD *)this + 38) = v1.n64_u32[0];
      if ( v23 == 0.0 )
      {
        *((_DWORD *)this + 38) = 0;
        *((_DWORD *)this + 39) = 0;
        AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)this + 92);
      }
      goto LABEL_23;
    default:
      goto LABEL_23;
  }
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = v13;
LABEL_23:
  v1.n64_u32[0] = *((_DWORD *)this + 41);
  if ( v6.n64_f32[0] <= v1.n64_f32[0] )
  {
    if ( v6.n64_f32[0] >= v1.n64_f32[0] )
      goto LABEL_28;
    v1.n64_f32[0] = v1.n64_f32[0] + CWidget::m_fElapsedTime * -0.224999994 * (double)dword_9FC904;
    v1.n64_u32[0] = vmax_f32(v6, v1).n64_u32[0];
  }
  else
  {
    v1.n64_f32[0] = CWidget::m_fElapsedTime * 0.224999994 * (double)dword_9FC904 + v1.n64_f32[0];
    v1.n64_u32[0] = vmin_f32(v6, v1).n64_u32[0];
  }
  *((_DWORD *)this + 41) = v1.n64_u32[0];
LABEL_28:
  result = *((_DWORD *)this + 39);
  *((float *)this + 9) = *((float *)this + 11) + v1.n64_f32[0];
  if ( result )
    return CWidgetHelpText::RenderTopStyle(this);
  return result;
}


// ============================================================

// Address: 0x2b7740
// Original: _ZN15CWidgetHelpText21ProcessMidScreenStyleEv
// Demangled: CWidgetHelpText::ProcessMidScreenStyle(void)
int __fastcall CWidgetHelpText::ProcessMidScreenStyle(CWidgetHelpText *this, unsigned __int16 *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  float v6; // s0
  CMessages *v7; // r9
  float v8; // s4
  float v9; // s2
  float v10; // s8
  float v11; // s6
  int result; // r0
  unsigned __int16 *v13; // r1
  float *v14; // r5
  double v15; // d16
  double v16; // d17
  double v17; // d16
  double v18; // d17
  float v19; // r0
  float v20; // s0
  float v21; // s2
  double v22; // d16
  double v23; // d17
  int GxtStringLength; // r0
  unsigned __int8 v25; // r1
  unsigned __int8 v26; // r1
  unsigned __int8 v27; // r1
  unsigned __int8 v28; // r2
  signed __int8 v29; // r1
  float v30; // r1
  float v31; // s20
  bool v32; // r1
  float v33; // s20
  float v34; // r1
  float v35; // r1
  _BOOL4 v36; // r1
  float v37; // s24
  float v38; // s22
  unsigned __int16 *v39; // r3
  int NumberLines; // r5
  bool v41; // r1
  float v42; // r0
  unsigned __int16 *v43; // r3
  int v44; // r5
  bool v45; // r1
  float v46; // r0
  float v47; // s0
  int v48; // r0
  unsigned __int16 *v49; // r3
  _BYTE v50[4]; // [sp+4h] [bp-64h] BYREF
  _BYTE v51[4]; // [sp+8h] [bp-60h] BYREF
  _BYTE v52[4]; // [sp+Ch] [bp-5Ch] BYREF
  _BYTE v53[4]; // [sp+10h] [bp-58h] BYREF
  _BYTE v54[84]; // [sp+14h] [bp-54h] BYREF

  v6 = *((float *)this + 8);
  v7 = (CWidgetHelpText *)((char *)this + 184);
  v8 = *((float *)this + 10);
  v9 = *((float *)this + 9);
  v10 = fabsf(v8 - v6);
  v11 = *((float *)this + 11) + (float)(v10 * 0.025);
  *((float *)this + 42) = v6 + (float)(v10 * 0.025);
  *((float *)this + 43) = v9 - (float)(v10 * 0.025);
  *((float *)this + 44) = v8 - (float)(v10 * 0.025);
  *((float *)this + 45) = v11;
  result = CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 184), a2);
  if ( result )
  {
    switch ( *((_DWORD *)this + 39) )
    {
      case 0:
        *((_DWORD *)this + 36) = 0;
        v14 = (float *)((char *)this + 144);
        *((_DWORD *)this + 37) = 0;
        if ( CMessages::GetGxtStringLength(v7, v13) )
        {
          *((_DWORD *)this + 38) = 0;
          *((_DWORD *)this + 39) = 1;
          goto LABEL_14;
        }
        goto LABEL_22;
      case 1:
        v4.n64_u32[0] = 1.0;
        v3.n64_u32[0] = 1051092582;
        v2.n64_f32[0] = CWidget::m_fElapsedTime + *((float *)this + 38);
        v2.n64_u64[0] = vmin_f32(v2, v3).n64_u64[0];
        v3.n64_f32[0] = v2.n64_f32[0] / 0.325;
        v3.n64_u64[0] = vmin_f32(v3, v4).n64_u64[0];
        *((_DWORD *)this + 36) = v3.n64_u32[0];
        *((_DWORD *)this + 37) = v3.n64_u32[0];
        *((_DWORD *)this + 38) = v2.n64_u32[0];
        goto LABEL_8;
      case 2:
        v17 = CWidget::m_fElapsedTime;
        *((_DWORD *)this + 36) = 1065353216;
        v14 = (float *)((char *)this + 144);
        v3.n64_u32[0] = *((_DWORD *)this + 246);
        v18 = *((float *)this + 38);
        *((_DWORD *)this + 37) = 1065353216;
        v2.n64_f32[0] = v17 + v18;
        v2.n64_u64[0] = vmin_f32(v3, v2).n64_u64[0];
        *((_DWORD *)this + 38) = v2.n64_u32[0];
        if ( CTouchInterface::IsReleased(162, 0, 1) )
        {
          v19 = *((float *)this + 246);
          *((float *)this + 38) = v19;
          v20 = v19;
          v21 = v19;
        }
        else
        {
          v21 = *((float *)this + 38);
          v20 = *((float *)this + 246);
        }
        if ( v21 != v20 )
          goto LABEL_22;
        GxtStringLength = CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 1004), v13);
        v13 = (_WORD *)&byte_5;
        if ( GxtStringLength )
          v13 = (_WORD *)(&stderr + 3);
        break;
      case 3:
        v4.n64_u32[0] = 1.0;
        v14 = (float *)((char *)this + 144);
        v3.n64_u32[0] = 1051092582;
        v22 = *((float *)this + 38);
        v23 = CWidget::m_fElapsedTime;
        *((_DWORD *)this + 37) = 1065353216;
        v2.n64_f32[0] = v23 + v22;
        v2.n64_u64[0] = vmin_f32(v2, v3).n64_u64[0];
        v3.n64_f32[0] = v2.n64_f32[0] / 0.325;
        v3.n64_u64[0] = vmin_f32(v3, v4).n64_u64[0];
        *((_DWORD *)this + 38) = v2.n64_u32[0];
        v3.n64_f32[0] = 1.0 - v3.n64_f32[0];
        *((_DWORD *)this + 36) = v3.n64_u32[0];
        if ( v3.n64_f32[0] == 0.0 )
        {
          *((_DWORD *)this + 38) = 0;
          *((_DWORD *)this + 39) = 4;
          memcpy_0(v7, (char *)this + 1004, 0x334u);
          memcpy_0((char *)this + 1004, (char *)this + 1824, 0x334u);
          memcpy_0((char *)this + 1824, (char *)this + 2644, 0x334u);
          memcpy_0((char *)this + 2644, (char *)this + 3464, 0x334u);
          memcpy_0((char *)this + 3464, (char *)this + 4284, 0x334u);
          memcpy_0((char *)this + 4284, (char *)this + 5104, 0x334u);
          memcpy_0((char *)this + 5104, (char *)this + 5924, 0x334u);
          memcpy_0((char *)this + 5924, (char *)this + 6744, 0x334u);
          memcpy_0((char *)this + 6744, (char *)this + 7564, 0x334u);
          AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)this + 3782);
          *((_WORD *)this + 4184) = 0;
          *((_DWORD *)this + 2091) = 0;
          *((_DWORD *)this + 2093) = 0;
          *((_DWORD *)this + 2094) = 0;
          *((_DWORD *)this + 2095) = 0;
LABEL_14:
          CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 32, 0.0, 1.0);
        }
        goto LABEL_22;
      case 4:
        v4.n64_u32[0] = 1.0;
        v3.n64_u32[0] = 1051092582;
        v15 = *((float *)this + 38);
        v16 = CWidget::m_fElapsedTime;
        *((_DWORD *)this + 37) = 1065353216;
        v2.n64_f32[0] = v16 + v15;
        v2.n64_u64[0] = vmin_f32(v2, v3).n64_u64[0];
        v3.n64_f32[0] = v2.n64_f32[0] / 0.325;
        v3.n64_u64[0] = vmin_f32(v3, v4).n64_u64[0];
        *((_DWORD *)this + 38) = v2.n64_u32[0];
        *((_DWORD *)this + 36) = v3.n64_u32[0];
LABEL_8:
        v14 = (float *)((char *)this + 144);
        if ( v3.n64_f32[0] != v4.n64_f32[0] )
          goto LABEL_22;
        v13 = (_WORD *)(&stderr + 2);
        break;
      case 5:
        v4.n64_u32[0] = 1.0;
        v14 = (float *)((char *)this + 144);
        v3.n64_u32[0] = 1051092582;
        v2.n64_f32[0] = CWidget::m_fElapsedTime + *((float *)this + 38);
        v2.n64_u64[0] = vmin_f32(v2, v3).n64_u64[0];
        v3.n64_f32[0] = v2.n64_f32[0] / 0.325;
        v3.n64_u64[0] = vmin_f32(v3, v4).n64_u64[0];
        v3.n64_f32[0] = 1.0 - v3.n64_f32[0];
        *((_DWORD *)this + 36) = v3.n64_u32[0];
        *((_DWORD *)this + 37) = v3.n64_u32[0];
        *((_DWORD *)this + 38) = v2.n64_u32[0];
        if ( v3.n64_f32[0] == 0.0 )
        {
          *((_DWORD *)this + 38) = 0;
          *((_DWORD *)this + 39) = 0;
          AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)v7);
        }
        goto LABEL_22;
      default:
        v14 = (float *)((char *)this + 144);
        goto LABEL_22;
    }
    *((_DWORD *)this + 38) = 0;
    *((_DWORD *)this + 39) = v13;
LABEL_22:
    CFont::SetProportional((CFont *)((char *)&stderr + 1), (unsigned __int8)v13);
    CFont::SetOrientation((CFont *)((char *)&stderr + 1), v25);
    CFont::SetJustify(0, v26);
    CFont::SetFontStyle((CFont *)((char *)&stderr + 1), v27);
    CFont::SetBackground(0, 0, v28);
    CFont::SetDropShadowPosition(0, v29);
    CRGBA::CRGBA((CRGBA *)v54, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(*v14 * 255.0));
    CFont::SetColor();
    CFont::SetScale((CFont *)0x3F800000, v30);
    v31 = *((float *)this + 40);
    v2.n64_u32[0] = 1.0;
    v3.n64_u32[0] = CFont::GetHeight(0, v32);
    v33 = (float)(v31 / vmax_f32(v3, v2).n64_f32[0]) * 0.75;
    CFont::SetScale((CFont *)LODWORD(v33), v34);
    if ( *((_WORD *)this + 494) )
    {
      CFont::SetWrapx(COERCE_CFONT_((float)dword_9FC900), v35);
      v37 = 2.0;
      v38 = *((float *)this + 45);
    }
    else
    {
      CFont::SetWrapx(*((CFont **)this + 44), v35);
      NumberLines = CFont::GetNumberLines(*((CFont **)this + 42), *((float *)this + 45), *(float *)&v7, v39);
      v42 = COERCE_FLOAT(CFont::GetHeight(0, v41));
      v38 = *((float *)this + 45);
      v37 = (float)NumberLines;
      if ( (float)(v42 * (float)NumberLines) >= fabsf(*((float *)this + 43) - v38) )
      {
        do
        {
          v33 = v33 * 0.98;
          CFont::SetScale((CFont *)LODWORD(v33), *(float *)&v36);
          v44 = CFont::GetNumberLines(*((CFont **)this + 42), *((float *)this + 45), *(float *)&v7, v43);
          v46 = COERCE_FLOAT(CFont::GetHeight(0, v45));
          v38 = *((float *)this + 45);
          v37 = (float)v44;
        }
        while ( (float)(v46 * (float)v44) >= fabsf(*((float *)this + 43) - v38) );
      }
    }
    v47 = v38 + (float)(v37 * COERCE_FLOAT(CFont::GetHeight(0, v36)));
    *((float *)this + 43) = v47;
    *((float *)this + 9) = (float)(v10 * 0.025) + v47;
    CRGBA::CRGBA((CRGBA *)v53, 0, 0, 0, (unsigned int)(float)(*((float *)this + 37) * 128.0));
    CRGBA::CRGBA((CRGBA *)v52, 0, 0, 0, (unsigned int)(float)(*((float *)this + 37) * 128.0));
    CRGBA::CRGBA((CRGBA *)v51, 0, 0, 0, (unsigned int)(float)(*((float *)this + 37) * 255.0));
    CRGBA::CRGBA((CRGBA *)v50, 0, 0, 0, (unsigned int)(float)(*((float *)this + 37) * 255.0));
    CSprite2d::DrawRect((int)this + 32, (int)v53, (int)v52, (int)v51, v48);
    if ( *((_WORD *)this + 494) )
      return CWidgetHelpText::RenderStat(this, *((float *)this + 42), *((float *)this + 45), 1, v33);
    else
      return CFont::PrintString(*((CFont **)this + 42), *((float *)this + 45), v7, v49);
  }
  return result;
}


// ============================================================

// Address: 0x2b7d14
// Original: _ZN15CWidgetHelpText10RenderStatEffbf
// Demangled: CWidgetHelpText::RenderStat(float,float,bool,float)
int __fastcall CWidgetHelpText::RenderStat(CWidgetHelpText *this, CFont *a2, float a3, int a4, float a5)
{
  float32x2_t v5; // d0
  float32x2_t v6; // d3
  unsigned int v9; // r2
  float v12; // s16
  CFont *v13; // r0
  unsigned __int16 *v14; // r3
  CFont *v15; // r2
  float v16; // r0
  _BOOL4 v17; // r1
  float v18; // s0
  float v19; // s22
  float v20; // s0
  bool v21; // r1
  float v22; // s0
  float v23; // r1
  CFont *v24; // r0
  unsigned __int16 v25; // r1
  CStats *v26; // r0
  int PlayerPed; // r0
  CFont *v28; // r0
  unsigned __int8 v29; // r3
  float v30; // r0
  int v31; // r11
  float v32; // r0
  float v33; // s22
  float v34; // s24
  unsigned __int16 v35; // r3
  int v36; // r6
  unsigned __int16 *v37; // r3
  char v39[4]; // [sp+18h] [bp-68h] BYREF
  char v40[100]; // [sp+1Ch] [bp-64h] BYREF

  v9 = *((unsigned __int16 *)this + 494);
  if ( v9 > 9 )
  {
    if ( v9 > 0x63 )
      sub_5E6BC0(&gString, "STAT%d");
    else
      sub_5E6BC0(&gString, "STAT0%d");
  }
  else
  {
    sub_5E6BC0(&gString, "STAT00%d");
  }
  v12 = *(float *)&a2;
  v13 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)&gString);
  v15 = v13;
  if ( a4 == 1 )
  {
    v16 = COERCE_FLOAT(CFont::GetStringWidth(v13, (unsigned __int16 *)((char *)&stderr + 1), 0, (unsigned __int8)v14));
    v18 = fabsf(*((float *)this + 44) - *((float *)this + 42));
    if ( v16 > v18 )
      CFont::SetScale(COERCE_CFONT_((float)(v18 / v16) * a5), *(float *)&v17);
    v19 = COERCE_FLOAT(CFont::GetHeight(0, v17));
    v20 = *((float *)this + 43) + *((float *)this + 45);
    v22 = (float)(v20 * 0.5) - COERCE_FLOAT(CFont::GetHeight(0, v21));
    v15 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)&gString);
    v23 = v22 + (float)(v19 * -0.1);
    v24 = a2;
  }
  else
  {
    v24 = a2;
    v23 = a3;
  }
  CFont::PrintString(v24, v23, v15, v14);
  v26 = (CStats *)*((unsigned __int16 *)this + 494);
  if ( v26 == (CStats *)&elf_hash_bucket[21] )
  {
    PlayerPed = FindPlayerPed(-1);
    CPedGroupMembership::CountMembersExcludingLeader((CPedGroupMembership *)&CPedGroups::ms_groups[181
                                                                                                 * *(_DWORD *)(*(_DWORD *)(PlayerPed + 1092) + 56)
                                                                                                 + 2]);
  }
  else
  {
    CStats::GetStatValue(v26, v25);
  }
  v28 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)&gString);
  v30 = COERCE_FLOAT(CFont::GetStringWidth(v28, (unsigned __int16 *)((char *)&stderr + 1), 0, v29));
  v31 = dword_9FC900;
  if ( a4 == 1 )
  {
    v32 = COERCE_FLOAT(CFont::GetHeight(0, (bool)&RsGlobal));
    v31 = dword_9FC900;
    v33 = (float)(v32 * 0.1) + (float)((float)(*((float *)this + 43) + *((float *)this + 45)) * 0.5);
  }
  else
  {
    v33 = (float)((float)(*((float *)this + 9) + *((float *)this + 11)) * 0.5)
        + (float)((float)(*((float *)this + 40) * -0.7) * 0.5);
    v12 = (float)(v30 + *(float *)&a2) + (float)((float)((float)dword_9FC900 / 640.0) * 5.0);
  }
  v34 = *((float *)this + 10);
  AsciiToGxtChar((const char *)&dword_2B808C, gGxtString);
  v36 = CMessages::GxtStringCompare(
          (CMessages *)gGxtString,
          (unsigned __int16 *)this + 92,
          (unsigned __int16 *)&elf_hash_bucket[37],
          v35);
  CHudColours::GetRGB((CHudColours *)v40, (unsigned __int8)HudColour, 5u);
  CHudColours::GetRGB((CHudColours *)v39, (unsigned __int8)HudColour, v36 != 0);
  v5.n64_f32[0] = (float)v31 / 640.0;
  v6.n64_f32[0] = v5.n64_f32[0] * -14.0;
  v5.n64_f32[0] = v5.n64_f32[0] * 75.0;
  v6.n64_f32[0] = (float)(v34 - v12) + v6.n64_f32[0];
  CSprite2d::DrawBarChart();
  return CFont::PrintString(
           COERCE_CFONT_(
             (float)(v12 + vmin_f32(v5, v6).n64_f32[0])
           + (float)((float)((float)dword_9FC900 / 640.0) + (float)((float)dword_9FC900 / 640.0))),
           v33,
           (CWidgetHelpText *)((char *)this + 184),
           v37);
}


// ============================================================

// Address: 0x2b80a8
// Original: _ZN15CWidgetHelpText12SetFontPropsEPt
// Demangled: CWidgetHelpText::SetFontProps(ushort *)
int __fastcall CWidgetHelpText::SetFontProps(CWidgetHelpText *this, float a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  unsigned __int16 *v5; // r4
  unsigned __int8 v6; // r1
  unsigned __int8 v7; // r1
  unsigned __int8 v8; // r1
  unsigned __int8 v9; // r1
  unsigned __int8 v10; // r2
  signed __int8 v11; // r1
  float v12; // r1
  float v13; // s18
  bool v14; // r1
  float v15; // r1
  unsigned __int16 *v16; // r3
  _BYTE v18[28]; // [sp+4h] [bp-1Ch] BYREF

  v2.n64_u32[0] = 0;
  v5 = (unsigned __int16 *)LODWORD(a2);
  if ( dword_6F3838 )
  {
    LODWORD(a2) = *(unsigned __int8 *)(dword_6F3838 + 78);
    if ( *(_BYTE *)(dword_6F3838 + 78) )
      v2.n64_f32[0] = fabsf(*(float *)(dword_6F3838 + 40) - *(float *)(dword_6F3838 + 32));
  }
  CFont::SetWrapx(
    COERCE_CFONT_(
      (float)(*((float *)this + 10) - (float)(fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.0125))
    - v2.n64_f32[0]),
    a2);
  CFont::SetProportional((CFont *)((char *)&stderr + 1), v6);
  CFont::SetOrientation((CFont *)((char *)&stderr + 1), v7);
  CFont::SetJustify(0, v8);
  CFont::SetFontStyle((CFont *)((char *)&stderr + 1), v9);
  CFont::SetBackground(0, 0, v10);
  CFont::SetDropShadowPosition(0, v11);
  CRGBA::CRGBA((CRGBA *)v18, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(*((float *)this + 36) * 255.0));
  CFont::SetColor();
  CFont::SetScale((CFont *)0x3F800000, v12);
  v13 = *((float *)this + 40);
  v2.n64_u32[0] = 1.0;
  v3.n64_u32[0] = CFont::GetHeight(0, v14);
  CFont::SetScale(COERCE_CFONT_((float)(v13 / vmax_f32(v3, v2).n64_f32[0]) * 0.75), v15);
  return CFont::GetNumberLines(
           COERCE_CFONT_(*((float *)this + 8) + (float)(fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.0125)),
           *((float *)this + 11),
           *(float *)&v5,
           v16);
}


// ============================================================

// Address: 0x2b81c0
// Original: _ZN15CWidgetHelpText14RenderTopStyleEv
// Demangled: CWidgetHelpText::RenderTopStyle(void)
int __fastcall CWidgetHelpText::RenderTopStyle(CWidgetHelpText *this)
{
  __int64 *v2; // r0
  __int64 v3; // d17
  int v4; // r6
  float v5; // s16
  bool v6; // r1
  float v7; // r0
  unsigned __int16 *v8; // r3
  float v9; // s2
  _BYTE v11[4]; // [sp+Ch] [bp-2Ch] BYREF
  __int64 v12; // [sp+10h] [bp-28h]
  __int64 v13; // [sp+18h] [bp-20h]

  v2 = (__int64 *)((char *)this + 32);
  v3 = v2[1];
  v12 = *v2;
  v13 = v3;
  CRGBA::CRGBA((CRGBA *)v11, 0, 0, 0, (unsigned int)(float)(*((float *)this + 37) * 255.0));
  CSprite2d::DrawRect();
  v4 = CWidgetHelpText::SetFontProps(this, (unsigned __int16 *)this + 92);
  v5 = *((float *)this + 9);
  v7 = COERCE_FLOAT(CFont::GetHeight(0, v6));
  v9 = *((float *)this + 8) + (float)(fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.0125);
  if ( *((_WORD *)this + 494) )
    return CWidgetHelpText::RenderStat(this, v9, v5 + (float)((float)(v7 * (float)v4) * -1.2), 0, 1.0);
  else
    return CFont::PrintString(
             (CFont *)LODWORD(v9),
             v5 + (float)((float)(v7 * (float)v4) * -1.2),
             (CWidgetHelpText *)((char *)this + 184),
             v8);
}


// ============================================================

// Address: 0x2b82ac
// Original: _ZN15CWidgetHelpText9VisualizeEv
// Demangled: CWidgetHelpText::Visualize(void)
int __fastcall CWidgetHelpText::Visualize(CWidgetHelpText *this)
{
  _BYTE v2[4]; // [sp+8h] [bp-18h] BYREF
  _BYTE v3[20]; // [sp+Ch] [bp-14h] BYREF

  CRGBA::CRGBA((CRGBA *)v3, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  CSprite2d::DrawRect();
  CRGBA::CRGBA((CRGBA *)v2, 0x80u, 0x80u, 0x80u, 0xFFu);
  return CSprite2d::DrawRect();
}


// ============================================================

// Address: 0x2b82f6
// Original: _ZN15CWidgetHelpText20GetNumQueuedMessagesEv
// Demangled: CWidgetHelpText::GetNumQueuedMessages(void)
int __fastcall CWidgetHelpText::GetNumQueuedMessages(CWidgetHelpText *this, unsigned __int16 *a2)
{
  int GxtStringLength; // r6
  unsigned __int16 *v4; // r1
  unsigned __int16 *v5; // r1
  int v6; // r5
  unsigned __int16 *v7; // r1
  unsigned __int16 *v8; // r1
  unsigned __int16 *v9; // r1
  unsigned __int16 *v10; // r1
  unsigned __int16 *v11; // r1
  unsigned __int16 *v12; // r1
  unsigned __int16 *v13; // r1

  GxtStringLength = CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 184), a2);
  v6 = CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 1004), v4) != 0;
  if ( GxtStringLength )
    ++v6;
  if ( CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 1824), v5) )
    ++v6;
  if ( CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 2644), v7) )
    ++v6;
  if ( CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 3464), v8) )
    ++v6;
  if ( CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 4284), v9) )
    ++v6;
  if ( CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 5104), v10) )
    ++v6;
  if ( CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 5924), v11) )
    ++v6;
  if ( CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 6744), v12) )
    ++v6;
  if ( CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 7564), v13) )
    ++v6;
  return v6;
}


// ============================================================

// Address: 0x2b83a4
// Original: _ZN15CWidgetHelpText18ConditionSatisfiedEj
// Demangled: CWidgetHelpText::ConditionSatisfied(uint)
int __fastcall CWidgetHelpText::ConditionSatisfied(int this, unsigned int a2)
{
  _DWORD *v2; // r1

  v2 = (_DWORD *)CWidgetHelpText::m_pInstance;
  if ( CWidgetHelpText::m_pInstance )
  {
    if ( *(_DWORD *)(CWidgetHelpText::m_pInstance + 1000) == this )
      *(_DWORD *)(CWidgetHelpText::m_pInstance + 984) = 1084227584;
    if ( v2[455] == this )
      v2[451] = 1084227584;
    if ( v2[660] == this )
      v2[656] = 1084227584;
    if ( v2[865] == this )
      v2[861] = 1084227584;
    if ( v2[1070] == this )
      v2[1066] = 1084227584;
    if ( v2[1275] == this )
      v2[1271] = 1084227584;
    if ( v2[1480] == this )
      v2[1476] = 1084227584;
    if ( v2[1685] == this )
      v2[1681] = 1084227584;
    if ( v2[1890] == this )
      v2[1886] = 1084227584;
    if ( v2[2095] == this )
    {
      this = 8364;
      v2[2091] = 1084227584;
    }
  }
  return this;
}


// ============================================================

// Address: 0x2b8484
// Original: _ZN15CWidgetHelpText26ConditionSatisfiedInstanceEj
// Demangled: CWidgetHelpText::ConditionSatisfiedInstance(uint)
_DWORD *__fastcall CWidgetHelpText::ConditionSatisfiedInstance(_DWORD *this, unsigned int a2)
{
  if ( this[250] == a2 )
    this[246] = 1084227584;
  if ( this[455] == a2 )
    this[451] = 1084227584;
  if ( this[660] == a2 )
    this[656] = 1084227584;
  if ( this[865] == a2 )
    this[861] = 1084227584;
  if ( this[1070] == a2 )
    this[1066] = 1084227584;
  if ( this[1275] == a2 )
    this[1271] = 1084227584;
  if ( this[1480] == a2 )
    this[1476] = 1084227584;
  if ( this[1685] == a2 )
    this[1681] = 1084227584;
  if ( this[1890] == a2 )
    this[1886] = 1084227584;
  if ( this[2095] == a2 )
    this[2091] = 1084227584;
  return this;
}


// ============================================================

// Address: 0x2b8554
// Original: _ZN15CWidgetHelpText10ClearQueueEb
// Demangled: CWidgetHelpText::ClearQueue(bool)
int __fastcall CWidgetHelpText::ClearQueue(CWidgetHelpText *this, int a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  unsigned __int16 *v6; // r1
  int result; // r0

  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)this + 502);
  *((_WORD *)this + 904) = 0;
  *((_DWORD *)this + 451) = 0;
  *((_DWORD *)this + 453) = 0;
  *((_DWORD *)this + 454) = 0;
  *((_DWORD *)this + 455) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)this + 912);
  *((_WORD *)this + 1314) = 0;
  *((_DWORD *)this + 656) = 0;
  *((_DWORD *)this + 658) = 0;
  *((_DWORD *)this + 659) = 0;
  *((_DWORD *)this + 660) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)this + 1322);
  *((_WORD *)this + 1724) = 0;
  *((_DWORD *)this + 861) = 0;
  *((_DWORD *)this + 863) = 0;
  *((_DWORD *)this + 864) = 0;
  *((_DWORD *)this + 865) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)this + 1732);
  *((_WORD *)this + 2134) = 0;
  *((_DWORD *)this + 1066) = 0;
  *((_DWORD *)this + 1068) = 0;
  *((_DWORD *)this + 1069) = 0;
  *((_DWORD *)this + 1070) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)this + 2142);
  *((_WORD *)this + 2544) = 0;
  *((_DWORD *)this + 1271) = 0;
  *((_DWORD *)this + 1273) = 0;
  *((_DWORD *)this + 1274) = 0;
  *((_DWORD *)this + 1275) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)this + 2552);
  *((_WORD *)this + 2954) = 0;
  *((_DWORD *)this + 1476) = 0;
  *((_DWORD *)this + 1478) = 0;
  *((_DWORD *)this + 1479) = 0;
  *((_DWORD *)this + 1480) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)this + 2962);
  *((_WORD *)this + 3364) = 0;
  *((_DWORD *)this + 1681) = 0;
  *((_DWORD *)this + 1683) = 0;
  *((_DWORD *)this + 1684) = 0;
  *((_DWORD *)this + 1685) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)this + 3372);
  *((_WORD *)this + 3774) = 0;
  *((_DWORD *)this + 1886) = 0;
  *((_DWORD *)this + 1888) = 0;
  *((_DWORD *)this + 1889) = 0;
  *((_DWORD *)this + 1890) = 0;
  AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)this + 3782);
  *((_WORD *)this + 4184) = 0;
  *((_DWORD *)this + 2091) = 0;
  *((_DWORD *)this + 2093) = 0;
  *((_DWORD *)this + 2094) = 0;
  *((_DWORD *)this + 2095) = 0;
  if ( a2 || !CMessages::GetGxtStringLength((CWidgetHelpText *)((char *)this + 184), v6) )
  {
    result = AsciiToGxtChar(&byte_61CD7E, (unsigned __int16 *)this + 92);
    *((_WORD *)this + 494) = 0;
    *((_DWORD *)this + 246) = 0;
    *((_DWORD *)this + 248) = 0;
    *((_DWORD *)this + 249) = 0;
    *((_DWORD *)this + 250) = 0;
    *((_DWORD *)this + 38) = 0;
    *((_DWORD *)this + 39) = 0;
  }
  else
  {
    result = *((_DWORD *)this + 39);
    if ( result == 2 )
    {
      v3.n64_u32[0] = *((_DWORD *)this + 38);
      v2.n64_f32[0] = *((float *)this + 246) + -0.125;
      *((_DWORD *)this + 38) = vmax_f32(v3, v2).n64_u32[0];
    }
    else
    {
      result = 1040187392;
      *((_DWORD *)this + 246) = 1040187392;
    }
  }
  return result;
}


// ============================================================

// Address: 0x2b872c
// Original: _ZN15CWidgetHelpText6UpdateEv
// Demangled: CWidgetHelpText::Update(void)
int __fastcall CWidgetHelpText::Update(CWidgetHelpText *this)
{
  int v2; // r0

  if ( CWidgetHelpText::UseTopStyle(this) == 1 )
    v2 = 114;
  else
    v2 = 115;
  CTouchInterface::GetWidgetPosition(v2, (int)this + 12, (int)this + 16, (int)this + 20, (int)this + 24);
  return j_CWidget::Update(this);
}


// ============================================================

// Address: 0x2b8764
// Original: _ZN15CWidgetHelpText7GetNameEv
// Demangled: CWidgetHelpText::GetName(void)
char *__fastcall CWidgetHelpText::GetName(CWidgetHelpText *this)
{
  return "Help";
}


// ============================================================

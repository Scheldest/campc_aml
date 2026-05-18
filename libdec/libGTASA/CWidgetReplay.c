
// Address: 0x1926cc
// Original: j__ZN13CWidgetReplayC2EPKcRK14WidgetPosition
// Demangled: CWidgetReplay::CWidgetReplay(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetReplay::CWidgetReplay()
{
  return _ZN13CWidgetReplayC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c639c
// Original: _ZN13CWidgetReplayC2EPKcRK14WidgetPosition
// Demangled: CWidgetReplay::CWidgetReplay(char const*,WidgetPosition const&)
int __fastcall CWidgetReplay::CWidgetReplay(int a1, int a2, int a3)
{
  _BYTE v5[12]; // [sp+4h] [bp-Ch] BYREF

  CWidget::CWidget(a1, a2, a3, 1026, 108);
  *(_DWORD *)a1 = &off_664EE8;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 144));
  CRGBA::CRGBA((CRGBA *)v5, 0xFFu, 0, 0, 0);
  *(_BYTE *)(a1 + 73) = v5[0];
  *(_BYTE *)(a1 + 74) = v5[1];
  *(_BYTE *)(a1 + 75) = v5[2];
  *(_BYTE *)(a1 + 76) = v5[3];
  *(_BYTE *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 48) = 1082130432;
  return a1;
}


// ============================================================

// Address: 0x2c640c
// Original: _ZN13CWidgetReplay6UpdateEv
// Demangled: CWidgetReplay::Update(void)
int __fastcall CWidgetReplay::Update(CWidgetReplay *this)
{
  bool v2; // zf
  CTimer *v3; // r0
  int result; // r0
  bool v5; // zf

  CWidget::Update(this);
  CWidget::ManageAlpha(this);
  v3 = (CTimer *)(((unsigned __int8)CTimer::m_UserPause | (unsigned __int8)CTimer::m_CodePause) << 24);
  v2 = v3 == 0;
  if ( v3 )
  {
    v3 = (CTimer *)*((unsigned __int8 *)this + 150);
    v2 = v3 == 0;
  }
  if ( !v2 )
  {
    CTimer::EndUserPause(v3);
    *((_BYTE *)this + 150) = 0;
  }
  result = dword_6E087C;
  v5 = dword_6E087C == 0;
  if ( dword_6E087C )
  {
    result = *((unsigned __int8 *)this + 152);
    v5 = result == 0;
  }
  if ( !v5 )
  {
    CWidget::SetTexture(this, (CWidgetReplay *)((char *)this + 8), "circle", 1);
    result = 0;
    *(_WORD *)((char *)this + 151) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x2c6484
// Original: _ZN13CWidgetReplay18ForceStopRecordingEv
// Demangled: CWidgetReplay::ForceStopRecording(void)
char *__fastcall CWidgetReplay::ForceStopRecording(CWidgetReplay *this)
{
  char *result; // r0

  CWidget::SetTexture(this, (CWidgetReplay *)((char *)this + 8), "circle", 1);
  result = &isRecording;
  isRecording = 0;
  *((_BYTE *)this + 151) = 0;
  return result;
}


// ============================================================

// Address: 0x2c64b0
// Original: _ZN13CWidgetReplay15OnReleasedTouchEv
// Demangled: CWidgetReplay::OnReleasedTouch(void)
int __fastcall CWidgetReplay::OnReleasedTouch(CWidgetReplay *this)
{
  CTimer *v2; // r0
  int result; // r0
  bool v4; // zf
  CTimer *v5; // r0

  v2 = (CTimer *)(((unsigned __int8)CTimer::m_UserPause | (unsigned __int8)CTimer::m_CodePause) << 24);
  if ( v2 )
  {
    CTimer::EndUserPause(v2);
    result = 0;
    *((_BYTE *)this + 150) = 0;
  }
  else
  {
    result = *((unsigned __int8 *)this + 148);
    v4 = result == 0;
    if ( !*((_BYTE *)this + 148) )
    {
      result = *((unsigned __int8 *)this + 149);
      v4 = result == 0;
    }
    if ( v4 )
    {
      result = dword_6E087C;
      if ( dword_6E087C )
      {
        if ( isRecording )
        {
          v5 = (CTimer *)CWidget::SetTexture(this, (CWidgetReplay *)((char *)this + 8), "circle", 1);
          *((_BYTE *)this + 152) = 0;
          CTimer::StartUserPause(v5);
          *((_BYTE *)this + 151) = 0;
          result = (int)&isRecording;
          isRecording = 0;
          *((_BYTE *)this + 150) = 1;
        }
        else if ( *((_BYTE *)this + 151) )
        {
          return j_OS_TimeMS();
        }
        else
        {
          CWidget::SetTexture(this, (CWidgetReplay *)((char *)this + 8), "white", 1);
          isRecording = 1;
          *((_DWORD *)this + 39) = OS_TimeMS();
          result = 257;
          *(_WORD *)((char *)this + 151) = 257;
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x2c65a4
// Original: _ZN13CWidgetReplay4DrawEv
// Demangled: CWidgetReplay::Draw(void)
int __fastcall CWidgetReplay::Draw(int this)
{
  bool v1; // zf
  bool v2; // zf

  v1 = *(_BYTE *)(this + 148) == 0;
  if ( !*(_BYTE *)(this + 148) )
    v1 = *(_BYTE *)(this + 149) == 0;
  if ( v1 )
  {
    v2 = *(_BYTE *)(this + 76) == 0;
    if ( *(_BYTE *)(this + 76) )
      v2 = *(_DWORD *)(this + 8) == 0;
    if ( !v2 )
      return j_CSprite2d::Draw();
  }
  return this;
}


// ============================================================

// Address: 0x2c65d8
// Original: _ZN13CWidgetReplayD2Ev
// Demangled: CWidgetReplay::~CWidgetReplay()
void __fastcall CWidgetReplay::~CWidgetReplay(CWidgetReplay *this)
{
  *(_DWORD *)this = &off_664EE8;
  CSprite2d::~CSprite2d((CWidgetReplay *)((char *)this + 144));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2c6600
// Original: _ZN13CWidgetReplayD0Ev
// Demangled: CWidgetReplay::~CWidgetReplay()
void __fastcall CWidgetReplay::~CWidgetReplay(CWidgetReplay *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_664EE8;
  CSprite2d::~CSprite2d((CWidgetReplay *)((char *)this + 144));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2c662c
// Original: _ZN13CWidgetReplay7GetNameEv
// Demangled: CWidgetReplay::GetName(void)
char *__fastcall CWidgetReplay::GetName(CWidgetReplay *this)
{
  return "Replay";
}


// ============================================================

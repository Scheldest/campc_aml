
// Address: 0x18e8d4
// Original: j__ZN6CTimer8ShutdownEv
// Demangled: CTimer::Shutdown(void)
// attributes: thunk
int __fastcall CTimer::Shutdown(CTimer *this)
{
  return _ZN6CTimer8ShutdownEv(this);
}


// ============================================================

// Address: 0x18fc4c
// Original: j__ZN6CTimer4StopEv
// Demangled: CTimer::Stop(void)
// attributes: thunk
int __fastcall CTimer::Stop(CTimer *this)
{
  return _ZN6CTimer4StopEv(this);
}


// ============================================================

// Address: 0x19023c
// Original: j__ZN6CTimer12EndUserPauseEv
// Demangled: CTimer::EndUserPause(void)
// attributes: thunk
int __fastcall CTimer::EndUserPause(CTimer *this)
{
  return _ZN6CTimer12EndUserPauseEv(this);
}


// ============================================================

// Address: 0x190ad0
// Original: j__ZN6CTimer23GetCyclesPerMillisecondEv
// Demangled: CTimer::GetCyclesPerMillisecond(void)
// attributes: thunk
int __fastcall CTimer::GetCyclesPerMillisecond(CTimer *this)
{
  return _ZN6CTimer23GetCyclesPerMillisecondEv(this);
}


// ============================================================

// Address: 0x19292c
// Original: j__ZN6CTimer6UpdateEv
// Demangled: CTimer::Update(void)
// attributes: thunk
int __fastcall CTimer::Update(CTimer *this)
{
  return _ZN6CTimer6UpdateEv(this);
}


// ============================================================

// Address: 0x196838
// Original: j__ZN6CTimer14StartUserPauseEv
// Demangled: CTimer::StartUserPause(void)
// attributes: thunk
int __fastcall CTimer::StartUserPause(CTimer *this)
{
  return _ZN6CTimer14StartUserPauseEv(this);
}


// ============================================================

// Address: 0x196974
// Original: j__ZN6CTimer7SuspendEv
// Demangled: CTimer::Suspend(void)
// attributes: thunk
int __fastcall CTimer::Suspend(CTimer *this)
{
  return _ZN6CTimer7SuspendEv(this);
}


// ============================================================

// Address: 0x199640
// Original: j__ZN6CTimer10InitialiseEv
// Demangled: CTimer::Initialise(void)
// attributes: thunk
int __fastcall CTimer::Initialise(CTimer *this)
{
  return _ZN6CTimer10InitialiseEv(this);
}


// ============================================================

// Address: 0x19d650
// Original: j__ZN6CTimer21GetIsSlowMotionActiveEv
// Demangled: CTimer::GetIsSlowMotionActive(void)
// attributes: thunk
int __fastcall CTimer::GetIsSlowMotionActive(CTimer *this)
{
  return _ZN6CTimer21GetIsSlowMotionActiveEv(this);
}


// ============================================================

// Address: 0x19e71c
// Original: j__ZN6CTimer22GetCurrentTimeInCyclesEv
// Demangled: CTimer::GetCurrentTimeInCycles(void)
// attributes: thunk
int __fastcall CTimer::GetCurrentTimeInCycles(CTimer *this)
{
  return _ZN6CTimer22GetCurrentTimeInCyclesEv(this);
}


// ============================================================

// Address: 0x19f7d0
// Original: j__ZN6CTimer6ResumeEv
// Demangled: CTimer::Resume(void)
// attributes: thunk
int __fastcall CTimer::Resume(CTimer *this)
{
  return _ZN6CTimer6ResumeEv(this);
}


// ============================================================

// Address: 0x420a78
// Original: _ZN6CTimer10InitialiseEv
// Demangled: CTimer::Initialise(void)
unsigned __int64 __fastcall CTimer::Initialise(CTimer *this)
{
  double v1; // r0
  unsigned __int64 result; // r0

  dword_96B520 = 0;
  byte_96B524 = 0;
  CTimer::m_CodePause = 0;
  CTimer::m_snTimeInMilliseconds = 0;
  CTimer::m_FrameCounter = 0;
  CTimer::game_FPS = 0;
  CTimer::m_UserPause = 0;
  CTimer::bSlowMotionActive = 0;
  CTimer::bSkipProcessThisFrame = 0;
  CTimer::m_snTimeInMillisecondsNonClipped = 1;
  CTimer::m_snTimeInMillisecondsPauseMode = 1;
  CTimer::m_snPPPPreviousTimeInMilliseconds = 0;
  CTimer::m_snPPPreviousTimeInMilliseconds = 0;
  CTimer::m_snPPreviousTimeInMilliseconds = 0;
  CTimer::m_snPreviousTimeInMilliseconds = 0;
  CTimer::m_snPreviousTimeInMillisecondsNonClipped = 0;
  CTimer::ms_fTimeScale = 1065353216;
  CTimer::ms_fOldTimeStep = 1065353216;
  CTimer::ms_fTimeStep = 1065353216;
  CTimer::ms_fSlowMotionScale = -1082130432;
  timerDef = GetOSWPerformanceTime;
  dword_96B51C = 1000;
  LODWORD(v1) = OS_TimeAccurate();
  result = (unsigned __int64)(v1 * 1000000.0);
  *(_QWORD *)&qword_96B528 = result;
  return result;
}


// ============================================================

// Address: 0x420bd4
// Original: _ZN6CTimer8ShutdownEv
// Demangled: CTimer::Shutdown(void)
char *__fastcall CTimer::Shutdown(CTimer *this)
{
  char *result; // r0

  result = &byte_96B524;
  byte_96B524 = 0;
  return result;
}


// ============================================================

// Address: 0x420be4
// Original: _ZN6CTimer6UpdateEv
// Demangled: CTimer::Update(void)
__int64 (*__fastcall CTimer::Update(CTimer *this))(void)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d2
  __int64 (*result)(void); // r0
  float v5; // s0
  int v6; // r2
  __int64 v7; // r4
  float v8; // s2
  float v9; // s0
  float v10; // s4
  float v11; // s4
  unsigned int v12; // s8
  unsigned int v13; // r6

  result = timerDef;
  if ( timerDef )
  {
    byte_96B524 = 1;
    CTimer::m_snPPPPreviousTimeInMilliseconds = CTimer::m_snPPPreviousTimeInMilliseconds;
    v5 = (float)(unsigned int)(CTimer::m_snTimeInMillisecondsNonClipped
                             - CTimer::m_snPreviousTimeInMillisecondsNonClipped);
    CTimer::m_snPreviousTimeInMillisecondsNonClipped = CTimer::m_snTimeInMillisecondsNonClipped;
    CTimer::m_snPPPreviousTimeInMilliseconds = CTimer::m_snPPreviousTimeInMilliseconds;
    v6 = CTimer::m_snPreviousTimeInMilliseconds;
    CTimer::m_snPreviousTimeInMilliseconds = CTimer::m_snTimeInMilliseconds;
    CTimer::m_snPPreviousTimeInMilliseconds = v6;
    *(float *)&CTimer::game_FPS = 1000.0 / v5;
    v7 = timerDef();
    v8 = (float)(unsigned __int64)(v7 - qword_96B528);
    v9 = *(float *)&CTimer::ms_fTimeScale * v8;
    v10 = 0.0;
    if ( !__PAIR16__(CTimer::m_CodePause, CTimer::m_UserPause) )
    {
      v8 = *(float *)&CTimer::ms_fTimeScale * v8;
      v10 = v9;
    }
    v11 = v10 / (float)(unsigned int)dword_96B51C;
    v1.n64_f32[0] = v11 / 20.0;
    v12 = (unsigned int)(float)((float)(v8 / (float)(unsigned int)dword_96B51C)
                              + (float)(unsigned int)CTimer::m_snTimeInMillisecondsPauseMode);
    qword_96B528 = v7;
    v13 = (unsigned int)v11;
    v2.n64_u32[0] = 1008981770;
    if ( (unsigned int)v11 >= 0x12C )
      v13 = 300;
    CTimer::m_snTimeInMilliseconds += v13;
    CTimer::m_snTimeInMillisecondsPauseMode = v12;
    CTimer::m_snTimeInMillisecondsNonClipped = (unsigned int)(float)(v11
                                                                   + (float)(unsigned int)CTimer::m_snTimeInMillisecondsNonClipped);
    *(float *)&CTimer::ms_fTimeStepNonClipped = v11 / 20.0;
    if ( v1.n64_f32[0] < 0.01
      && !(((unsigned __int8)CTimer::m_CodePause | (unsigned __int8)CTimer::m_UserPause | (unsigned __int8)CSpecialFX::bSnapShotActive) << 24) )
    {
      v1.n64_u64[0] = v2.n64_u64[0];
      CTimer::ms_fTimeStepNonClipped = 1008981770;
    }
    v2.n64_u32[0] = 3.0;
    v3.n64_u32[0] = 925353388;
    CTimer::ms_fOldTimeStep = CTimer::ms_fTimeStep;
    CTimer::ms_fTimeStep = vmax_f32(vmin_f32(v1, v2), v3).n64_u32[0];
    return (__int64 (*)(void))++CTimer::m_FrameCounter;
  }
  return result;
}


// ============================================================

// Address: 0x420e08
// Original: _ZN6CTimer15UpdateVariablesEf
// Demangled: CTimer::UpdateVariables(float)
int *__fastcall CTimer::UpdateVariables(CTimer *this, float a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  float v5; // s2
  unsigned int v6; // s4
  unsigned int v7; // r4
  int *result; // r0

  v5 = *(float *)&this / (float)(unsigned int)dword_96B51C;
  v2.n64_f32[0] = v5 / 20.0;
  v6 = (unsigned int)(float)(v5 + (float)(unsigned int)CTimer::m_snTimeInMillisecondsNonClipped);
  v7 = (unsigned int)v5;
  v3.n64_u32[0] = 1008981770;
  if ( v7 >= 0x12C )
    v7 = 300;
  CTimer::m_snTimeInMilliseconds += v7;
  CTimer::m_snTimeInMillisecondsNonClipped = v6;
  CTimer::ms_fTimeStepNonClipped = v2.n64_u32[0];
  if ( v2.n64_f32[0] < 0.01
    && !(((unsigned __int8)CTimer::m_CodePause | (unsigned __int8)CTimer::m_UserPause | (unsigned __int8)CSpecialFX::bSnapShotActive) << 24) )
  {
    v2.n64_u64[0] = v3.n64_u64[0];
    CTimer::ms_fTimeStepNonClipped = 1008981770;
  }
  v3.n64_u32[0] = 3.0;
  v4.n64_u32[0] = 925353388;
  result = &CTimer::ms_fTimeStep;
  CTimer::ms_fOldTimeStep = CTimer::ms_fTimeStep;
  CTimer::ms_fTimeStep = vmax_f32(vmin_f32(v2, v3), v4).n64_u32[0];
  return result;
}


// ============================================================

// Address: 0x420f14
// Original: _ZN6CTimer7SuspendEv
// Demangled: CTimer::Suspend(void)
int __fastcall CTimer::Suspend(CTimer *this)
{
  __int64 v1; // r0

  LODWORD(v1) = (unsigned __int8)byte_96B524;
  if ( byte_96B524 == 1 )
  {
    LODWORD(v1) = &dword_96B520;
    if ( (unsigned int)++dword_96B520 <= 1 )
    {
      v1 = timerDef();
      *(_QWORD *)&qword_96B530 = v1;
    }
  }
  return v1;
}


// ============================================================

// Address: 0x420f5c
// Original: _ZN6CTimer6ResumeEv
// Demangled: CTimer::Resume(void)
int __fastcall CTimer::Resume(CTimer *this)
{
  __int64 v1; // r0

  LODWORD(v1) = (unsigned __int8)byte_96B524;
  if ( byte_96B524 == 1 )
  {
    LODWORD(v1) = &dword_96B520;
    if ( !--dword_96B520 )
    {
      v1 = timerDef();
      qword_96B528 += v1 - qword_96B530;
    }
  }
  return v1;
}


// ============================================================

// Address: 0x420fbc
// Original: _ZN6CTimer23GetCyclesPerMillisecondEv
// Demangled: CTimer::GetCyclesPerMillisecond(void)
int __fastcall CTimer::GetCyclesPerMillisecond(CTimer *this)
{
  return dword_96B51C;
}


// ============================================================

// Address: 0x420fcc
// Original: _ZN6CTimer17GetCyclesPerFrameEv
// Demangled: CTimer::GetCyclesPerFrame(void)
unsigned int __fastcall CTimer::GetCyclesPerFrame(CTimer *this)
{
  return (unsigned int)(float)((float)(unsigned int)dword_96B51C * 20.0);
}


// ============================================================

// Address: 0x420ff0
// Original: _ZN6CTimer22GetCurrentTimeInCyclesEv
// Demangled: CTimer::GetCurrentTimeInCycles(void)
int __fastcall CTimer::GetCurrentTimeInCycles(CTimer *this)
{
  double v1; // r0

  LODWORD(v1) = OS_TimeAccurate();
  return (unsigned __int64)(v1 * 1000000.0) - qword_96B528;
}


// ============================================================

// Address: 0x421024
// Original: _ZN6CTimer4StopEv
// Demangled: CTimer::Stop(void)
int __fastcall CTimer::Stop(CTimer *this)
{
  int result; // r0

  result = CTimer::m_snTimeInMilliseconds;
  byte_96B524 = 0;
  CTimer::m_snPPPPreviousTimeInMilliseconds = CTimer::m_snTimeInMilliseconds;
  CTimer::m_snPPPreviousTimeInMilliseconds = CTimer::m_snTimeInMilliseconds;
  CTimer::m_snPPreviousTimeInMilliseconds = CTimer::m_snTimeInMilliseconds;
  CTimer::m_snPreviousTimeInMilliseconds = CTimer::m_snTimeInMilliseconds;
  CTimer::m_snPreviousTimeInMillisecondsNonClipped = CTimer::m_snTimeInMillisecondsNonClipped;
  return result;
}


// ============================================================

// Address: 0x4210a4
// Original: _ZN6CTimer21GetIsSlowMotionActiveEv
// Demangled: CTimer::GetIsSlowMotionActive(void)
bool __fastcall CTimer::GetIsSlowMotionActive(CTimer *this)
{
  return *(float *)&CTimer::ms_fTimeScale < 1.0;
}


// ============================================================

// Address: 0x4210c8
// Original: _ZN6CTimer14StartUserPauseEv
// Demangled: CTimer::StartUserPause(void)
char *__fastcall CTimer::StartUserPause(CTimer *this)
{
  char *result; // r0

  result = &CTimer::m_UserPause;
  CTimer::m_UserPause = 1;
  return result;
}


// ============================================================

// Address: 0x4210d8
// Original: _ZN6CTimer12EndUserPauseEv
// Demangled: CTimer::EndUserPause(void)
char *__fastcall CTimer::EndUserPause(CTimer *this)
{
  char *result; // r0

  result = &CTimer::m_UserPause;
  CTimer::m_UserPause = 0;
  return result;
}


// ============================================================

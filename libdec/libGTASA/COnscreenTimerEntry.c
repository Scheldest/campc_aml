
// Address: 0x314ba0
// Original: _ZN19COnscreenTimerEntry22ProcessForDisplayClockEv
// Demangled: COnscreenTimerEntry::ProcessForDisplayClock(void)
int __fastcall COnscreenTimerEntry::ProcessForDisplayClock(COnscreenTimerEntry *this)
{
  return sub_5E6BC0(
           (char *)this + 14,
           "%02d:%02d",
           *(_DWORD *)((char *)&CTheScripts::ScriptSpace + *(_DWORD *)this) / 60000 % 100,
           *(_DWORD *)((char *)&CTheScripts::ScriptSpace + *(_DWORD *)this) / 1000 % 60);
}


// ============================================================

// Address: 0x314c6c
// Original: _ZN19COnscreenTimerEntry7ProcessEv
// Demangled: COnscreenTimerEntry::Process(void)
unsigned int __fastcall COnscreenTimerEntry::Process(unsigned int this)
{
  int v1; // r1
  int v2; // r12
  unsigned int v3; // r3

  v1 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    v2 = *(_DWORD *)((char *)&CTheScripts::ScriptSpace + v1);
    v3 = (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
    if ( *(_BYTE *)(this + 57) )
    {
      *(_DWORD *)((char *)&CTheScripts::ScriptSpace + v1) = v2 - v3;
      if ( *(int *)((char *)&CTheScripts::ScriptSpace + *(_DWORD *)this) <= -1 )
      {
        *(_DWORD *)((char *)&CTheScripts::ScriptSpace + *(_DWORD *)this) = 0;
        *(_BYTE *)(this + 4) = 0;
        *(_DWORD *)this = 0;
        *(_BYTE *)(this + 56) = 0;
      }
      else
      {
        this = *(_DWORD *)(this + 60);
        if ( v2 / 1000 < this )
        {
          this = (unsigned __int8)byte_951FE3;
          if ( !byte_951FE3 )
            return j_CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 33, 0.0, 1.0);
        }
      }
    }
    else
    {
      this = (unsigned int)&CTheScripts::ScriptSpace;
      *(_DWORD *)((char *)&CTheScripts::ScriptSpace + v1) = v2 + v3;
    }
  }
  return this;
}


// ============================================================


// Address: 0x1951a8
// Original: j__ZN29CSimpleVariablesSaveStructure9ConstructEv
// Demangled: CSimpleVariablesSaveStructure::Construct(void)
// attributes: thunk
int __fastcall CSimpleVariablesSaveStructure::Construct(CSimpleVariablesSaveStructure *this)
{
  return _ZN29CSimpleVariablesSaveStructure9ConstructEv(this);
}


// ============================================================

// Address: 0x197a60
// Original: j__ZN29CSimpleVariablesSaveStructure7ExtractERj
// Demangled: CSimpleVariablesSaveStructure::Extract(uint &)
// attributes: thunk
int __fastcall CSimpleVariablesSaveStructure::Extract(CSimpleVariablesSaveStructure *this, unsigned int *a2)
{
  return _ZN29CSimpleVariablesSaveStructure7ExtractERj(this, a2);
}


// ============================================================

// Address: 0x483d70
// Original: _ZN29CSimpleVariablesSaveStructure9ConstructEv
// Demangled: CSimpleVariablesSaveStructure::Construct(void)
int __fastcall CSimpleVariablesSaveStructure::Construct(CSimpleVariablesSaveStructure *this)
{
  const char *v2; // r0
  int v3; // r0
  __int64 v4; // d16
  char v5; // r1
  char v6; // r1
  char v7; // r0
  char v8; // r0
  char v9; // r0
  char v10; // r0
  int result; // r0
  unsigned __int16 v12[6]; // [sp+4h] [bp-3Ch] BYREF
  char v13[8]; // [sp+10h] [bp-30h] BYREF
  unsigned __int16 v14[20]; // [sp+18h] [bp-28h] BYREF

  if ( (_BYTE)CStats::LastMissionPassedName )
    v2 = (const char *)&CStats::LastMissionPassedName;
  else
    v2 = "ITBEG";
  AsciiToGxtChar(v2, v14);
  strcpy(v13, "...'");
  AsciiToGxtChar(v13, v12);
  v12[3] = 0;
  TextCopy((unsigned __int16 *)this + 2, v14);
  v3 = GxtCharStrlen((const unsigned __int16 *)this + 2);
  *((_WORD *)this + v3 + 2) = 0;
  if ( v3 >= 23 )
    TextCopy((unsigned __int16 *)this + 20, v12);
  *((_WORD *)this + 25) = 0;
  *(_DWORD *)this = CGenericGameStorage::GetCurrentVersionNumber((CGenericGameStorage *)CGame::bMissionPackGame);
  *((_BYTE *)this + 204) = CGame::bMissionPackGame;
  *((_DWORD *)this + 52) = CGame::currLevel;
  v4 = *(_QWORD *)&dword_9528D4;
  *((_DWORD *)this + 55) = dword_9528DC;
  *(_QWORD *)((char *)this + 212) = v4;
  *((_DWORD *)this + 56) = CClock::ms_nMillisecondsPerGameMinute;
  *((_DWORD *)this + 57) = CClock::ms_nLastClockTick;
  *((_BYTE *)this + 232) = CClock::ms_nGameClockMonths;
  *((_BYTE *)this + 233) = CClock::ms_nGameClockDays;
  *((_BYTE *)this + 234) = CClock::ms_nGameClockHours;
  *((_BYTE *)this + 235) = CClock::ms_nGameClockMinutes;
  *((_BYTE *)this + 236) = CClock::CurrentDay;
  *((_BYTE *)this + 237) = CClock::ms_Stored_nGameClockMonths;
  *((_BYTE *)this + 238) = CClock::ms_Stored_nGameClockDays;
  *((_BYTE *)this + 239) = CClock::ms_Stored_nGameClockHours;
  *((_BYTE *)this + 240) = CClock::ms_Stored_nGameClockMinutes;
  v5 = CClock::bClockHasBeenStored;
  *((_WORD *)this + 121) = 0;
  *((_BYTE *)this + 241) = v5;
  v6 = CCheat::m_bHasPlayerCheated;
  if ( CCheat::m_bHasPlayerCheated )
    v6 = 1;
  *((_BYTE *)this + 244) = v6;
  *((_DWORD *)this + 62) = CTimer::m_snTimeInMilliseconds;
  *((_DWORD *)this + 63) = CTimer::ms_fTimeScale;
  *((_DWORD *)this + 64) = CTimer::ms_fTimeStep;
  *((_DWORD *)this + 65) = CTimer::ms_fTimeStepNonClipped;
  *((_DWORD *)this + 66) = CTimer::m_FrameCounter;
  *((_WORD *)this + 134) = CWeather::OldWeatherType;
  *((_WORD *)this + 135) = CWeather::NewWeatherType;
  *((_WORD *)this + 136) = CWeather::ForcedWeatherType;
  *((_DWORD *)this + 69) = CWeather::InterpolationValue;
  *((_DWORD *)this + 70) = CWeather::WeatherTypeInList;
  *((_DWORD *)this + 71) = CWeather::Rain;
  *((_DWORD *)this + 72) = dword_952058;
  *((_DWORD *)this + 73) = dword_95206C;
  *((_BYTE *)this + 384) = gbCineyCamMessageDisplayed;
  *((_DWORD *)this + 74) = CGame::currArea;
  v7 = dword_6E05DC;
  if ( dword_6E05DC )
    v7 = 1;
  *((_BYTE *)this + 300) = v7;
  *((_DWORD *)this + 76) = CTimeCycle::m_ExtraColour;
  v8 = CTimeCycle::m_bExtraColourOn;
  if ( CTimeCycle::m_bExtraColourOn )
    v8 = 1;
  *((_BYTE *)this + 308) = v8;
  *((_DWORD *)this + 78) = CTimeCycle::m_ExtraColourInter;
  *((_DWORD *)this + 79) = CTimeCycle::m_ExtraColourWeatherType;
  *((_DWORD *)this + 80) = CWaterLevel::m_nWaterConfiguration;
  *((_BYTE *)this + 324) = gbLARiots;
  *((_BYTE *)this + 325) = gbLARiots_NoPoliceCars;
  *((_DWORD *)this + 82) = CWanted::MaximumWantedLevel;
  *((_DWORD *)this + 83) = CWanted::nMaximumWantedLevel;
  *((_BYTE *)this + 337) = CLocalisation::germanGame;
  *((_BYTE *)this + 336) = CLocalisation::frenchGame;
  *((_BYTE *)this + 338) = CLocalisation::nastyGame;
  *((_BYTE *)this + 385) = CMBlur::BlurOn;
  *((_BYTE *)this + 386) = byte_98F12B;
  *((_BYTE *)this + 387) = byte_98F12A;
  *((_BYTE *)this + 388) = byte_98F110;
  *((_BYTE *)this + 389) = byte_98F12D;
  *((_BYTE *)this + 390) = byte_98F124;
  *((_BYTE *)this + 391) = byte_98F140;
  *((_BYTE *)this + 392) = byte_98F126;
  *((_BYTE *)this + 404) = byte_98F111;
  *((_BYTE *)this + 412) = byte_98F12C;
  *((_BYTE *)this + 413) = byte_98F128;
  *((_BYTE *)this + 414) = byte_98F129;
  *((_DWORD *)this + 104) = dword_6E00B4;
  *((_BYTE *)this + 420) = CPlayerPed::bHasDisplayedPlayerQuitEnterCarHelpText;
  v9 = byte_796857;
  if ( byte_796857 )
    v9 = 1;
  *((_BYTE *)this + 421) = v9;
  v10 = byte_796856;
  if ( byte_796856 )
    v10 = 1;
  *((_BYTE *)this + 422) = v10;
  result = CPIndex;
  *((_DWORD *)this + 106) = CPIndex;
  return result;
}


// ============================================================

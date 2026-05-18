
// Address: 0x18a520
// Original: j__ZN8CWeather21AddSandStormParticlesEv
// Demangled: CWeather::AddSandStormParticles(void)
// attributes: thunk
int __fastcall CWeather::AddSandStormParticles(CWeather *this)
{
  return _ZN8CWeather21AddSandStormParticlesEv(this);
}


// ============================================================

// Address: 0x18d1dc
// Original: j__ZN8CWeather15ForecastWeatherEii
// Demangled: CWeather::ForecastWeather(int,int)
// attributes: thunk
int __fastcall CWeather::ForecastWeather(CWeather *this, int a2, int a3)
{
  return _ZN8CWeather15ForecastWeatherEii(this, a2, a3);
}


// ============================================================

// Address: 0x18e404
// Original: j__ZN8CWeather12ForceWeatherEs
// Demangled: CWeather::ForceWeather(short)
// attributes: thunk
int __fastcall CWeather::ForceWeather(CWeather *this, __int16 a2)
{
  return _ZN8CWeather12ForceWeatherEs(this, a2);
}


// ============================================================

// Address: 0x18e534
// Original: j__ZN8CWeather7AddRainEv
// Demangled: CWeather::AddRain(void)
// attributes: thunk
int __fastcall CWeather::AddRain(CWeather *this)
{
  return _ZN8CWeather7AddRainEv(this);
}


// ============================================================

// Address: 0x194e60
// Original: j__ZN8CWeather6UpdateEv
// Demangled: CWeather::Update(void)
// attributes: thunk
int __fastcall CWeather::Update(CWeather *this)
{
  return _ZN8CWeather6UpdateEv(this);
}


// ============================================================

// Address: 0x1953a8
// Original: j__ZN8CWeather30SetWeatherToAppropriateTypeNowEv
// Demangled: CWeather::SetWeatherToAppropriateTypeNow(void)
// attributes: thunk
int __fastcall CWeather::SetWeatherToAppropriateTypeNow(CWeather *this)
{
  return _ZN8CWeather30SetWeatherToAppropriateTypeNowEv(this);
}


// ============================================================

// Address: 0x195934
// Original: j__ZN8CWeather15ForceWeatherNowEs
// Demangled: CWeather::ForceWeatherNow(short)
// attributes: thunk
int __fastcall CWeather::ForceWeatherNow(CWeather *this, __int16 a2)
{
  return _ZN8CWeather15ForceWeatherNowEs(this, a2);
}


// ============================================================

// Address: 0x197650
// Original: j__ZN8CWeather4InitEv
// Demangled: CWeather::Init(void)
// attributes: thunk
int __fastcall CWeather::Init(CWeather *this)
{
  return _ZN8CWeather4InitEv(this);
}


// ============================================================

// Address: 0x1987e4
// Original: j__ZN8CWeather18UpdateInTunnelnessEv
// Demangled: CWeather::UpdateInTunnelness(void)
// attributes: thunk
int __fastcall CWeather::UpdateInTunnelness(CWeather *this)
{
  return _ZN8CWeather18UpdateInTunnelnessEv(this);
}


// ============================================================

// Address: 0x19ab4c
// Original: j__ZN8CWeather17RenderRainStreaksEv
// Demangled: CWeather::RenderRainStreaks(void)
// attributes: thunk
int __fastcall CWeather::RenderRainStreaks(CWeather *this)
{
  return _ZN8CWeather17RenderRainStreaksEv(this);
}


// ============================================================

// Address: 0x19ca50
// Original: j__ZN8CWeather14ReleaseWeatherEv
// Demangled: CWeather::ReleaseWeather(void)
// attributes: thunk
int __fastcall CWeather::ReleaseWeather(CWeather *this)
{
  return _ZN8CWeather14ReleaseWeatherEv(this);
}


// ============================================================

// Address: 0x5cc1c4
// Original: _ZN8CWeather4InitEv
// Demangled: CWeather::Init(void)
int __fastcall CWeather::Init(CWeather *this)
{
  int result; // r0

  result = 0;
  CWeather::OldWeatherType = 0;
  CWeather::NewWeatherType = 0;
  CWeather::InTunnelness = 0;
  CWeather::Sandstorm = 0;
  CWeather::CurrentRainParticleStrength = 0;
  CWeather::WeatherRegion = 0;
  CWeather::LightningStartX = 0;
  CWeather::LightningStartY = 0;
  CWeather::StreamAfterRainTimer = 0;
  CWeather::InterpolationValue = 0;
  CWeather::WeatherTypeInList = 0;
  CWeather::ForcedWeatherType = -1;
  CWeather::WhenToPlayLightningSound = 0;
  CWeather::bScriptsForceRain = 0;
  CWeather::Rain = 0;
  return result;
}


// ============================================================

// Address: 0x5cc298
// Original: _ZN8CWeather6UpdateEv
// Demangled: CWeather::Update(void)
int __fastcall CWeather::Update(CWeather *this)
{
  float32x2_t v1; // d3
  float32x2_t v2; // d4
  float32x2_t v3; // d9
  float32x2_t v4; // d11
  float *v5; // r2
  float v6; // s2
  float v7; // s0
  __int16 v8; // r0
  float *v9; // r0
  float v10; // s4
  float v11; // s2
  __int16 v12; // r1
  __int16 v13; // r2
  bool v14; // zf
  bool v15; // zf
  int v16; // r0
  int v17; // r4
  __int16 v18; // r0
  unsigned int v19; // r0
  int v20; // r2
  unsigned int v21; // r1
  bool v22; // cc
  int v23; // r1
  CPad *Pad; // r0
  float v25; // s4
  float v26; // s6
  float v27; // s2
  float v28; // s10
  unsigned int v29; // r0
  float v30; // s8
  bool v31; // zf
  float v32; // s8
  float v33; // s10
  float v34; // s6
  float v35; // s14
  float v36; // s10
  float v37; // s12
  float v38; // s8
  float v39; // s14
  float32x2_t v40; // d0
  float v41; // s8
  float v42; // s6
  bool v43; // zf
  bool v44; // zf
  float v45; // s4
  float v46; // s6
  float v47; // s4
  float v48; // s6
  float32x2_t v49; // d0
  int v50; // s0
  float v51; // s0
  int v52; // r11
  int v53; // r10
  int v54; // s22
  int v55; // r8
  int v56; // r9
  _BOOL4 v57; // r4
  _BOOL4 v58; // r5
  float v59; // s0
  float v60; // s2
  unsigned int v61; // r4
  float v62; // s30
  float v63; // s28
  int *v64; // r11
  float v65; // s0
  float32x2_t v66; // d2
  float32x2_t v67; // d1
  float v68; // s10
  float v69; // s8
  float v70; // s28
  float v71; // s30
  float32x2_t v72; // d0
  float v73; // s20
  float v74; // s17
  float v75; // s4
  float v76; // r0
  int v77; // s6
  float v78; // s4
  float v79; // s10
  float32x2_t v80; // d0
  float32x2_t v81; // d1
  int PlayerPed; // r0
  int v83; // r0
  int SimplestActiveTask; // r0
  _BOOL4 v85; // r1
  int v86; // r0
  int v87; // r0
  int v89; // r1
  int v90; // r5
  int v91; // r0

  if ( !((unsigned __int8)CTimer::m_FrameCounter << 28) )
  {
    v5 = (float *)(dword_951FBC + 48);
    if ( !dword_951FBC )
      v5 = (float *)&qword_951FAC;
    v6 = *v5;
    v7 = v5[1];
    if ( *v5 <= 1000.0 )
    {
      if ( v6 <= -850.0 || v6 >= 1000.0 || v7 <= 1280.0 )
      {
        if ( v7 >= 1430.0 || v7 <= -580.0 )
          v8 = v7 < -850.0 && v6 < 3000.0 && v6 > 250.0 && v7 > -3000.0;
        else
          v8 = 2;
      }
      else
      {
        v8 = 4;
      }
    }
    else
    {
      v8 = 3;
    }
    CWeather::WeatherRegion = v8;
  }
  if ( (float)((float)((float)((float)(unsigned __int8)CClock::ms_nGameClockSeconds / 60.0)
                     + (float)(unsigned __int8)CClock::ms_nGameClockMinutes)
             / 60.0) >= *(float *)&CWeather::InterpolationValue )
  {
    v13 = CWeather::NewWeatherType;
  }
  else
  {
    v9 = (float *)(dword_951FBC + 48);
    if ( !dword_951FBC )
      v9 = (float *)&qword_951FAC;
    v10 = *v9;
    v11 = v9[1];
    if ( *v9 <= 1000.0 )
    {
      if ( v10 <= -850.0 || v10 >= 1000.0 || v11 <= 1280.0 )
      {
        if ( v11 >= 1430.0 || v11 <= -580.0 )
          v12 = v11 < -850.0 && v10 < 3000.0 && v10 > 250.0 && v11 > -3000.0;
        else
          v12 = 2;
      }
      else
      {
        v12 = 4;
      }
    }
    else
    {
      v12 = 3;
    }
    v13 = CWeather::NewWeatherType;
    CWeather::WeatherRegion = v12;
    CWeather::OldWeatherType = CWeather::NewWeatherType;
    if ( CWeather::ForcedWeatherType <= -1 )
    {
      if ( v9[2] < 950.0 )
      {
        v89 = (int)*(&off_66E370 + ((unsigned __int16)v12 ^ 4));
        CWeather::WeatherTypeInList = (CWeather::WeatherTypeInList + 1) % 64;
        v13 = *(char *)(v89 + CWeather::WeatherTypeInList);
        CWeather::NewWeatherType = v13;
      }
    }
    else
    {
      v13 = CWeather::ForcedWeatherType;
      CWeather::NewWeatherType = CWeather::ForcedWeatherType;
    }
  }
  *(float *)&CWeather::InterpolationValue = (float)((float)((float)(unsigned __int8)CClock::ms_nGameClockSeconds / 60.0)
                                                  + (float)(unsigned __int8)CClock::ms_nGameClockMinutes)
                                          / 60.0;
  v14 = v13 == 16;
  if ( v13 != 16 )
    v14 = v13 == 8;
  if ( !v14 )
    goto LABEL_34;
  v15 = CWeather::OldWeatherType == 16;
  if ( CWeather::OldWeatherType != 16 )
    v15 = CWeather::OldWeatherType == 8;
  if ( !v15
    || CCullZones::CamNoRain((CCullZones *)(unsigned __int16)CWeather::OldWeatherType)
    || (v16 = CCullZones::PlayerNoRain((CCullZones *)&CWeather::UnderWaterness), CWeather::UnderWaterness > 0.0)
    || v16
    || CGame::currArea )
  {
LABEL_34:
    CWeather::LightningBurst = 0;
    CWeather::LightningFlash = 0;
LABEL_35:
    v19 = CTimer::m_snTimeInMilliseconds;
    v21 = CWeather::WhenToPlayLightningSound;
    goto LABEL_36;
  }
  v17 = (unsigned __int8)CWeather::LightningBurst;
  v18 = rand();
  if ( !v17 )
  {
    if ( (v18 & 0xFFF8u) > 0xC7 )
    {
      CWeather::LightningFlash = 0;
    }
    else
    {
      CWeather::LightningBurst = 1;
      CWeather::LightningFlash = 1;
      CWeather::LightningStart = CTimer::m_FrameCounter;
      CWeather::LightningFlashLastChange = CTimer::m_snTimeInMilliseconds;
    }
    goto LABEL_35;
  }
  if ( (v18 & 0xF8u) > 0x17 )
  {
    if ( (unsigned int)(CTimer::m_snTimeInMilliseconds - CWeather::LightningFlashLastChange) >= 0x33 )
    {
      v90 = (unsigned __int8)CWeather::LightningFlash;
      v91 = rand() & 1;
      CWeather::LightningFlash = v91;
      if ( v91 != v90 )
        CWeather::LightningFlashLastChange = CTimer::m_snTimeInMilliseconds;
    }
    goto LABEL_35;
  }
  v19 = CTimer::m_snTimeInMilliseconds;
  v20 = CTimer::m_FrameCounter - CWeather::LightningStart;
  if ( (unsigned int)(CTimer::m_FrameCounter - CWeather::LightningStart) >= 0x14 )
    v20 = 20;
  v21 = CTimer::m_snTimeInMilliseconds + 150 * (20 - v20);
  CWeather::LightningBurst = 0;
  CWeather::LightningFlash = 0;
  CWeather::LightningDuration = v20;
  CWeather::WhenToPlayLightningSound = v21;
LABEL_36:
  v22 = v21 != 0;
  if ( v21 )
    v22 = v19 > v21;
  if ( v22 )
  {
    CAEWeatherAudioEntity::AddAudioEvent((CAEWeatherAudioEntity *)CWeather::m_WeatherAudioEntity, 141);
    Pad = (CPad *)CPad::GetPad(0, v23);
    CPad::StartShake(Pad, 40 * CWeather::LightningDuration + 100, 2 * CWeather::LightningDuration + 80, 0);
    CWeather::WhenToPlayLightningSound = 0;
  }
  v3.n64_u32[0] = 1.0;
  v25 = 0.0;
  v26 = 0.0;
  v27 = 1.0 - *(float *)&CWeather::InterpolationValue;
  if ( CWeather::NewWeatherType == 16 || CWeather::NewWeatherType == 8 )
    v26 = *(float *)&CWeather::InterpolationValue;
  v28 = v26;
  v29 = (unsigned __int16)CWeather::OldWeatherType;
  v30 = 1.0 - *(float *)&CWeather::InterpolationValue;
  if ( CWeather::NewWeatherType == 16 || CWeather::NewWeatherType == 8 )
    v30 = 1.0;
  if ( CWeather::OldWeatherType == 8 )
    v28 = v30;
  if ( CWeather::OldWeatherType == 16 )
    v28 = v30;
  v31 = CWeather::OldWeatherType == 16;
  CWeather::WetRoads = v28;
  if ( CWeather::OldWeatherType != 16 )
    v31 = CWeather::OldWeatherType == 8;
  if ( v31 )
    v26 = v27 + v26;
  v32 = (float)((float)(((unsigned int)CTimer::m_snTimeInMilliseconds >> 13) & 3) * 0.1) + 0.7;
  v33 = v26 * v32;
  v34 = *(float *)&CTimer::ms_fTimeStep * 0.005;
  v35 = v33 - *(float *)&CWeather::Rain;
  if ( fabsf(v33 - *(float *)&CWeather::Rain) >= (float)(*(float *)&CTimer::ms_fTimeStep * 0.005) )
  {
    v36 = -v34;
    if ( v35 > 0.0 )
      v36 = *(float *)&CTimer::ms_fTimeStep * 0.005;
    v33 = *(float *)&CWeather::Rain + v36;
  }
  v37 = 0.0;
  if ( CWeather::NewWeatherType == 19 )
    v37 = *(float *)&CWeather::InterpolationValue;
  if ( CWeather::OldWeatherType == 19 )
    v37 = v37 + v27;
  v38 = v37 * v32;
  v39 = v38 - *(float *)&CWeather::Sandstorm;
  CWeather::Rain = LODWORD(v33);
  v40.n64_f32[1] = fabsf(v38 - *(float *)&CWeather::Sandstorm);
  if ( v40.n64_f32[1] >= v34 )
  {
    v41 = -v34;
    if ( v39 > 0.0 )
      v41 = *(float *)&CTimer::ms_fTimeStep * 0.005;
    v38 = *(float *)&CWeather::Sandstorm + v41;
  }
  v42 = 1.0 - *(float *)&CWeather::InterpolationValue;
  CWeather::Sandstorm = LODWORD(v38);
  if ( (unsigned __int16)CWeather::OldWeatherType <= 0x12u )
  {
    v42 = 1.0 - *(float *)&CWeather::InterpolationValue;
    if ( ((unsigned int)&stru_66C68.st_value + 3) >> CWeather::OldWeatherType << 31 )
      v42 = 0.0;
  }
  CWeather::CloudCoverage = v42;
  if ( (unsigned __int16)CWeather::NewWeatherType > 0x12u
    || ((1 << CWeather::NewWeatherType) & ((unsigned int)&stru_66C68.st_value + 3)) == 0 )
  {
    CWeather::CloudCoverage = *(float *)&CWeather::InterpolationValue + v42;
  }
  v43 = CWeather::OldWeatherType == 19;
  if ( CWeather::OldWeatherType != 19 )
    v43 = CWeather::OldWeatherType == 9;
  if ( v43 )
    v25 = 1.0 - *(float *)&CWeather::InterpolationValue;
  v44 = CWeather::NewWeatherType == 19;
  CWeather::Foggyness = v25;
  if ( CWeather::NewWeatherType != 19 )
    v44 = CWeather::NewWeatherType == 9;
  if ( v44 )
    CWeather::Foggyness = *(float *)&CWeather::InterpolationValue + v25;
  v45 = 0.0;
  v46 = 0.0;
  if ( CWeather::OldWeatherType == 9 )
    v46 = 1.0 - *(float *)&CWeather::InterpolationValue;
  if ( CWeather::NewWeatherType == 9 )
    v46 = v46 + *(float *)&CWeather::InterpolationValue;
  CWeather::Foggyness_SF = LODWORD(v46);
  if ( (unsigned __int16)CWeather::OldWeatherType <= 0x11u
    && ((1 << CWeather::OldWeatherType) & ((unsigned int)&elf_hash_chain[18871] + 1)) != 0 )
  {
    v45 = 1.0 - *(float *)&CWeather::InterpolationValue;
  }
  CWeather::ExtraSunnyness = v45;
  if ( (unsigned __int16)CWeather::NewWeatherType <= 0x11u
    && ((1 << CWeather::NewWeatherType) & ((unsigned int)&elf_hash_chain[18871] + 1)) != 0 )
  {
    CWeather::ExtraSunnyness = *(float *)&CWeather::InterpolationValue + v45;
  }
  v47 = 0.0;
  v48 = 0.0;
  if ( (unsigned __int16)CWeather::OldWeatherType <= 0xFu )
  {
    v48 = 0.0;
    if ( ((1 << CWeather::OldWeatherType) & 0x9090) != 0 )
    {
      v48 = 0.0;
      if ( (unsigned __int16)CWeather::NewWeatherType <= 0x12u )
      {
        v48 = 0.0;
        if ( ((1 << CWeather::NewWeatherType) & ((unsigned int)&stru_44428.st_name + 2)) != 0 )
        {
          v48 = 0.0;
          if ( *(float *)&CWeather::InterpolationValue < 0.5 )
          {
            v48 = 0.0;
            if ( (unsigned __int8)(CClock::ms_nGameClockHours - 7) <= 0xDu )
              v48 = (float)(fabsf(*(float *)&CWeather::InterpolationValue + -0.25) * -4.0) + 1.0;
          }
        }
      }
    }
  }
  CWeather::Rainbow = LODWORD(v48);
  if ( (unsigned __int16)CWeather::OldWeatherType <= 0x12u
    && ((1 << CWeather::OldWeatherType) & ((unsigned int)&stru_66C68.st_value + 3)) != 0 )
  {
    v47 = 1.0 - *(float *)&CWeather::InterpolationValue;
  }
  CWeather::SunGlare = v47;
  if ( (unsigned __int16)CWeather::NewWeatherType <= 0x12u && ((1 << CWeather::NewWeatherType) & 0x66C6F) != 0 )
  {
    v47 = *(float *)&CWeather::InterpolationValue + v47;
    CWeather::SunGlare = v47;
  }
  if ( v47 > 0.0 )
  {
    v4.n64_u32[0] = 1.0;
    v1.n64_u32[0] = 0;
    v40.n64_f32[0] = CTimeCycle::m_VectorToSun[3 * CTimeCycle::m_CurrentStoredValue + 2] * 7.0;
    v49.n64_u64[0] = vmin_f32(v40, v4).n64_u64[0];
    v49.n64_f32[0] = v47 * v49.n64_f32[0];
    v40.n64_u64[0] = vmin_f32(vmax_f32(v49, v1), v4).n64_u64[0];
    CWeather::SunGlare = v40.n64_f32[0];
    if ( !CSpecialFX::bSnapShotActive )
    {
      v50 = rand() & 0x1F;
      v29 = (unsigned __int16)CWeather::OldWeatherType;
      CWeather::SunGlare = CWeather::SunGlare * (float)((float)((float)v50 * -0.007) + 1.0);
    }
  }
  v51 = 0.0;
  if ( v29 <= 0x12 && ((1 << v29) & 0x60801) != 0 )
    v51 = 1.0 - *(float *)&CWeather::InterpolationValue;
  CWeather::HeatHaze = v51;
  if ( (unsigned __int16)CWeather::NewWeatherType <= 0x12u && ((1 << CWeather::NewWeatherType) & 0x60801) != 0 )
  {
    v51 = *(float *)&CWeather::InterpolationValue + v51;
    CWeather::HeatHaze = v51;
  }
  if ( v51 > 0.0 )
  {
    v52 = (unsigned __int8)CClock::ms_nGameClockHours;
    v53 = CPostEffects::m_HeatHazeFXHourOfDayEnd;
    v54 = CPostEffects::m_fHeatHazeFXFadeSpeed;
    v55 = (unsigned __int8)CClock::ms_nGameClockMinutes;
    CWeather::HeatHazeFXControl = 0;
    v56 = dword_6B2550;
    v57 = CPostEffects::m_HeatHazeFXHourOfDayEnd > (unsigned __int8)CClock::ms_nGameClockHours;
    v58 = CPostEffects::m_HeatHazeFXHourOfDayStart <= (unsigned __int8)CClock::ms_nGameClockHours;
    if ( CGame::currArea
      || *(_BYTE *)(FindPlayerPed(-1) + 51)
      || CCullZones::CamNoRain(0)
      || CCullZones::PlayerNoRain(0) == 1 )
    {
      v54 = CPostEffects::m_fHeatHazeFXInsideBuildingFadeSpeed;
    }
    else
    {
      if ( v58 && v57 )
      {
        v59 = *(float *)&dword_A7D1F4;
        if ( v56 != v55 )
        {
          v59 = *(float *)&v54 + *(float *)&dword_A7D1F4;
          *(float *)&dword_A7D1F4 = *(float *)&v54 + *(float *)&dword_A7D1F4;
        }
        if ( v59 > 1.0 )
        {
          v59 = 1.0;
          dword_A7D1F4 = 1065353216;
        }
        goto LABEL_123;
      }
      if ( v53 > v52 )
      {
        v59 = *(float *)&CWeather::HeatHazeFXControl;
        goto LABEL_124;
      }
    }
    v59 = *(float *)&dword_A7D1F4;
    if ( v56 != v55 )
    {
      v59 = *(float *)&dword_A7D1F4 - *(float *)&v54;
      *(float *)&dword_A7D1F4 = *(float *)&dword_A7D1F4 - *(float *)&v54;
    }
    if ( v59 < 0.0 )
    {
      v59 = 0.0;
      dword_A7D1F4 = 0;
    }
LABEL_123:
    CWeather::HeatHazeFXControl = LODWORD(v59);
LABEL_124:
    dword_6B2550 = v55;
    *(float *)&CWeather::HeatHazeFXControl = CWeather::HeatHaze * v59;
  }
  v60 = (float)(unsigned __int16)word_9665EC / 100.0;
  if ( word_9665EC )
  {
    if ( (unsigned __int16)word_9665EC >= 0x5Fu )
    {
      v40.n64_u32[0] = dword_A7D1FC;
      byte_A7D1F8 = 1;
LABEL_130:
      if ( v60 < v40.n64_f32[0] )
      {
        v40.n64_f32[0] = (float)(unsigned __int16)word_9665EC / 100.0;
        dword_A7D1FC = v40.n64_i32[0];
      }
      if ( v40.n64_f32[0] <= 0.0 )
        byte_A7D1F8 = 0;
      goto LABEL_136;
    }
  }
  else
  {
    dword_A7D1FC = 0;
  }
  v40.n64_u32[0] = dword_A7D1FC;
  if ( byte_A7D1F8 )
    goto LABEL_130;
  if ( v60 > *(float *)&dword_A7D1FC )
  {
    v40.n64_f32[0] = (float)(unsigned __int16)word_9665EC / 100.0;
    dword_A7D1FC = v40.n64_i32[0];
  }
LABEL_136:
  v4.n64_u32[0] = 0;
  v61 = CTimer::m_snTimeInMilliseconds;
  v62 = Windyness[CWeather::NewWeatherType];
  v63 = Windyness[CWeather::OldWeatherType];
  v40.n64_f32[0] = v40.n64_f32[0] * 1.4;
  CWeather::WaterFogFXControl = vmin_f32(vmax_f32(v40, v4), v3).n64_u32[0];
  v64 = &dword_5CD46C[((unsigned __int8)((unsigned int)CTimer::m_snTimeInMilliseconds >> 10) + 6) & 0xF];
  v65 = 0.5 - (float)(cosf((float)((float)(CTimer::m_snTimeInMilliseconds & 0x3FF) * 0.00097656) * 3.1416) * 0.5);
  v67.n64_u32[1] = *v64;
  v66.n64_u32[1] = 1045220557;
  v72.n64_u32[1] = 1053609165;
  v67.n64_f32[0] = (float)(v62 * *(float *)&CWeather::InterpolationValue)
                 + (float)(v63 * (float)(1.0 - *(float *)&CWeather::InterpolationValue));
  v68 = (float)(*(float *)&dword_5CD46C[(v61 >> 10) & 0xF] * (float)(1.0 - v65))
      + (float)(v65 * *(float *)&dword_5CD46C[((unsigned __int8)(v61 >> 10) + 1) & 0xF]);
  v69 = (float)((float)(1.0 - v65) * *(float *)&dword_5CD46C[((unsigned __int8)(v61 >> 10) + 3) & 0xF])
      + (float)(v65 * *(float *)&dword_5CD46C[((v61 >> 10) + 4) & 0xF]);
  v70 = vmin_f32(v67, v3).n64_f32[0];
  v72.n64_f32[0] = (float)((float)(1.0 - v65) * *(float *)v64)
                 + (float)(v65 * *(float *)&dword_5CD46C[((unsigned __int8)(v61 >> 10) + 7) & 0xF]);
  CWeather::Wind = v67.n64_u32[0];
  CWeather::WindClipped = LODWORD(v70);
  v71 = (float)((float)(v70 * 0.2) * v72.n64_f32[0]) + 0.0;
  v72.n64_f32[0] = (float)(v70 + -0.5) * 0.4;
  v73 = (float)(v70 * 0.7) + (float)((float)(v70 * 0.4) * v68);
  v74 = (float)(v70 * 0.7) + (float)((float)(v70 * 0.4) * v69);
  *(float *)&CWeather::WindDir = v73;
  flt_A7D174 = v74;
  unk_A7D178 = LODWORD(v71);
  if ( v72.n64_f32[0] > 0.0 )
  {
    v75 = (float)(unsigned __int8)v61 * 0.0039062;
    v72.n64_u32[1] = dword_5CD46C[(BYTE1(v61) + 6) & 0xF];
    v74 = v74
        + (float)(v72.n64_f32[0]
                * (float)((float)((float)(1.0 - v75) * *(float *)&dword_5CD46C[(BYTE1(v61) + 3) & 0xF])
                        + (float)(v75 * *(float *)&dword_5CD46C[(BYTE1(v61) + 4) & 0xF])));
    v73 = v73
        + (float)(v72.n64_f32[0]
                * (float)((float)(*(float *)&dword_5CD46C[(BYTE1(v61) + 1) & 0xF] * v75)
                        + (float)(*(float *)&dword_5CD46C[(v61 >> 8) & 0xF] * (float)(1.0 - v75))));
    v71 = v71
        + (float)(v72.n64_f32[0]
                * (float)((float)((float)(1.0 - v75) * v72.n64_f32[1])
                        + (float)(v75 * *(float *)&dword_5CD46C[(BYTE1(v61) + 7) & 0xF])));
    CWeather::WindDir = LODWORD(v73);
    flt_A7D174 = v74;
    unk_A7D178 = LODWORD(v71);
  }
  v76 = cosf((float)((float)(v61 & 0x7FF) * 0.00048828) * 3.1416);
  v2.n64_f32[0] = 1.0 - CWeather::UnderWaterness;
  v72.n64_f32[0] = (float)(*(float *)&dword_5CD4C0[((unsigned __int8)(v61 >> 11) + 1) & 0xF]
                         * (float)(0.5 - (float)(v76 * 0.5)))
                 + (float)(*(float *)&dword_5CD4C0[(v61 >> 11) & 0xF] * (float)(1.0 - (float)(0.5 - (float)(v76 * 0.5))));
  v67.n64_f32[0] = v70 + 0.3;
  *(float *)&v77 = v73 * v72.n64_f32[0];
  v78 = v74 * v72.n64_f32[0];
  v79 = v72.n64_f32[0] * v71;
  v72.n64_u32[0] = CWeather::Rain;
  v80.n64_u64[0] = vmin_f32(v72, v2).n64_u64[0];
  CWeather::Wavyness = vmin_f32(v67, v3).n64_u32[0];
  v81.n64_u64[0] = v3.n64_u64[0];
  CWeather::WindDir = v77;
  flt_A7D174 = v78;
  unk_A7D178 = LODWORD(v79);
  CWeather::Rain = v80.n64_u32[0];
  if ( (unsigned __int8)CClock::ms_nGameClockHours <= 0x14u )
  {
    if ( CClock::ms_nGameClockHours == 20 )
    {
      v81.n64_f32[0] = (float)(unsigned __int8)CClock::ms_nGameClockMinutes / 60.0;
    }
    else
    {
      v81.n64_u64[0] = v4.n64_u64[0];
      if ( (unsigned __int8)CClock::ms_nGameClockHours <= 6u )
      {
        v81.n64_u64[0] = v3.n64_u64[0];
        if ( CClock::ms_nGameClockHours == 6 )
          v81.n64_f32[0] = (float)((float)(unsigned __int8)CClock::ms_nGameClockMinutes / -60.0) + 1.0;
      }
    }
  }
  v1.n64_f32[0] = CWeather::WetRoads;
  v66.n64_f32[0] = CWeather::Foggyness;
  LODWORD(CWeather::HeadLightsSpectrum) = vmin_f32(vmax_f32(v66, v80), v3).n64_u32[0];
  CWeather::TrafficLightsBrightness = vmax_f32(vmax_f32(vmax_f32(v81, v1), v66), v80).n64_u32[0];
  CWeather::AddRain((CWeather *)&CWeather::HeadLightsSpectrum);
  PlayerPed = FindPlayerPed(-1);
  if ( CTaskManager::GetSimplestActiveTask((CTaskManager *)(*(_DWORD *)(PlayerPed + 1088) + 4)) )
  {
    v83 = FindPlayerPed(-1);
    SimplestActiveTask = CTaskManager::GetSimplestActiveTask((CTaskManager *)(*(_DWORD *)(v83 + 1088) + 4));
    v85 = (*(int (__fastcall **)(int))(*(_DWORD *)SimplestActiveTask + 20))(SimplestActiveTask) != 254;
  }
  else
  {
    v85 = 1;
  }
  v86 = (unsigned __int16)CWeather::NewWeatherType;
  if ( (unsigned __int16)CWeather::NewWeatherType <= 0x12u )
  {
    v86 = 1 << CWeather::NewWeatherType;
    if ( ((1 << CWeather::NewWeatherType) & 0x22845) != 0 )
    {
      v86 = CGame::currArea;
      if ( CGame::currArea )
        goto LABEL_158;
    }
    else
    {
      if ( (v86 & 0x4442A) == 0 )
        goto LABEL_158;
      v86 = CGame::currArea;
      if ( CGame::currArea )
        goto LABEL_158;
    }
    v86 = (unsigned __int8)CCutsceneMgr::ms_running;
    if ( !CCutsceneMgr::ms_running )
    {
      v87 = CTimer::m_FrameCounter & 7;
      if ( (CTimer::m_FrameCounter & 7) != 0 )
        v87 = 1;
      v86 = v87 | v85;
      if ( !v86 )
        v86 = FindPlayerPed(-1);
    }
  }
LABEL_158:
  CWeather::UpdateInTunnelness((CWeather *)v86);
  return sub_18EB60((CAEWeatherAudioEntity *)CWeather::m_WeatherAudioEntity);
}


// ============================================================

// Address: 0x5cd548
// Original: _ZN8CWeather19UpdateWeatherRegionEP7CVector
// Demangled: CWeather::UpdateWeatherRegion(CVector *)
int __fastcall CWeather::UpdateWeatherRegion(CWeather *this, CVector *a2)
{
  float *v2; // r3
  float v3; // s2
  float v4; // s0
  int result; // r0

  v2 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v2 = (float *)&qword_951FAC;
  if ( this )
    v2 = (float *)this;
  v3 = *v2;
  v4 = v2[1];
  if ( *v2 <= 1000.0 )
  {
    if ( v3 <= -850.0 || v3 >= 1000.0 || v4 <= 1280.0 )
    {
      if ( v4 >= 1430.0 || v4 <= -580.0 )
        result = v4 < -850.0 && v3 < 3000.0 && v3 > 250.0 && v4 > -3000.0;
      else
        result = 2;
    }
    else
    {
      result = 4;
    }
  }
  else
  {
    result = 3;
  }
  CWeather::WeatherRegion = result;
  return result;
}


// ============================================================

// Address: 0x5cd66c
// Original: _ZN8CWeather20FindWeatherTypesListEv
// Demangled: CWeather::FindWeatherTypesList(void)
void *__fastcall CWeather::FindWeatherTypesList(CWeather *this)
{
  unsigned int v1; // r0

  v1 = CWeather::WeatherRegion - 1;
  if ( v1 > 3 )
    return &WeatherTypesListDefault;
  else
    return *(&off_66E390 + v1);
}


// ============================================================

// Address: 0x5cd69c
// Original: _ZN8CWeather7AddRainEv
// Demangled: CWeather::AddRain(void)
int __fastcall CWeather::AddRain(CWeather *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d2
  int result; // r0
  __int64 *v5; // r2
  CVehicle *PlayerVehicle; // r0
  char v7; // r2
  int v8; // r0
  float v9; // s0
  int v10; // r4
  float v11; // s20
  float v12; // s19
  unsigned __int8 v13; // r0
  float v14; // s0
  float v15; // r8
  float v16; // s0
  float *v17; // r6
  float v18; // s21
  float v19; // s0
  float v20; // s2
  int v21; // r6
  float v22; // s2
  float v23; // s24
  float *v24; // r1
  float v25; // s20
  float v26; // s26
  float v27; // s22
  float v28; // s18
  int v29; // [sp+24h] [bp-FCh]
  int v30; // [sp+34h] [bp-ECh]
  int v31; // [sp+38h] [bp-E8h]
  float v32[3]; // [sp+3Ch] [bp-E4h] BYREF
  float v33; // [sp+48h] [bp-D8h] BYREF
  float v34; // [sp+4Ch] [bp-D4h]
  float v35; // [sp+50h] [bp-D0h]
  _BYTE v36[28]; // [sp+54h] [bp-CCh] BYREF
  _BYTE v37[4]; // [sp+70h] [bp-B0h] BYREF
  _BYTE v38[8]; // [sp+74h] [bp-ACh] BYREF
  float v39; // [sp+7Ch] [bp-A4h]
  double v40; // [sp+A0h] [bp-80h] BYREF
  float v41; // [sp+A8h] [bp-78h]
  double v42; // [sp+B0h] [bp-70h] BYREF
  float v43; // [sp+B8h] [bp-68h]
  _BYTE v44[100]; // [sp+BCh] [bp-64h] BYREF

  result = CCullZones::CamNoRain(this);
  if ( !result )
  {
    result = CCullZones::PlayerNoRain(0);
    if ( !result )
    {
      result = (int)&CWeather::UnderWaterness;
      if ( CWeather::UnderWaterness <= 0.0 )
      {
        result = CGame::currArea;
        if ( !CGame::currArea && (!FindPlayerPed(-1) || (result = *(unsigned __int8 *)(FindPlayerPed(-1) + 51)) == 0) )
        {
          result = (int)&TheCamera;
          v5 = (__int64 *)(dword_951FBC + 48);
          if ( !dword_951FBC )
            v5 = &qword_951FAC;
          if ( *((float *)v5 + 2) <= 900.0
            && (CCamera::GetLookingLRBFirstPerson((CCamera *)&TheCamera) != 1
             || (PlayerVehicle = (CVehicle *)FindPlayerVehicle(-1, 0)) == 0
             || (result = CVehicle::CarHasRoof(PlayerVehicle)) == 0) )
          {
            if ( *(float *)&CWeather::Rain > 0.0 )
            {
              v7 = 1;
LABEL_15:
              byte_A7D200 = v7;
              CWeather::StreamAfterRainTimer = 800;
              goto LABEL_19;
            }
            if ( byte_A7D200 == 1 )
            {
              if ( CWeather::StreamAfterRainTimer < 1 )
              {
                v7 = 0;
                goto LABEL_15;
              }
              --CWeather::StreamAfterRainTimer;
            }
LABEL_19:
            if ( *(float *)&CWeather::Wind > 1.01 && !CCullZones::CamNoRain((CCullZones *)&CWeather::Wind) )
            {
              v8 = CCullZones::PlayerNoRain((CCullZones *)&CWeather::UnderWaterness);
              if ( CWeather::UnderWaterness <= 0.0 && !v8 )
                CWeather::AddSandStormParticles(0);
            }
            if ( *(float *)&CWeather::Rain > 0.1 || (result = (int)&flt_A7D204, flt_A7D204 != 0.0) )
            {
              CRGBA::CRGBA((CRGBA *)v44, 0, 0, 0, 0);
              v9 = *(float *)&CWeather::Rain;
              v30 = (int)(float)(*(float *)&CWeather::Rain * 5.0);
              if ( v30 >= 1 )
              {
                v3.n64_u32[0] = 1109393408;
                v1.n64_f32[0] = *(float *)&CWeather::Rain * 10.0;
                v10 = 0;
                v1.n64_u64[0] = vmax_f32(v1, v3).n64_u64[0];
                v11 = v1.n64_f32[0] * 0.5;
                v29 = (int)(float)(*(float *)&CWeather::Rain + *(float *)&CWeather::Rain);
                do
                {
                  FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)v36, 1.0, 1.0, 1.0, 0.25, 0.02, 0.0, 0.03);
                  v33 = 0.0;
                  v34 = 0.0;
                  v35 = 0.0;
                  v12 = (float)(v11 * (float)((float)rand() * 4.6566e-10)) + 0.0;
                  v13 = rand();
                  v31 = v10;
                  if ( (v13 & 1) != 0 )
                    v14 = (float)(unsigned __int8)rand() * 0.024531;
                  else
                    v14 = (float)((float)(v13 - 128) * 0.00625) + unk_9520F4;
                  v15 = v14;
                  v16 = v12 * sinf(v14);
                  v17 = (float *)(dword_951FBC + 48);
                  if ( !dword_951FBC )
                    v17 = (float *)&qword_951FAC;
                  v18 = *v17 + v16;
                  v19 = cosf(v15);
                  *(float *)&v42 = v18;
                  v20 = v17[1];
                  v43 = 0.0;
                  *((float *)&v42 + 1) = v20 + (float)(v12 * v19);
                  v32[0] = v18 + 0.0;
                  v32[2] = 40.0;
                  v32[1] = *((float *)&v42 + 1) + 0.0;
                  if ( CWorld::ProcessVerticalLine((CVector *)v32, -1038090240, (int)v38, (int)v37, 1, 0, 0, 0, 1, 0, 0) == 1 )
                  {
                    v43 = v39 + 0.1;
                    if ( v29 >= -14 )
                    {
                      v21 = -1;
                      do
                      {
                        v41 = v43;
                        v40 = v42;
                        *(float *)&v40 = *(float *)&v40
                                       + (float)((float)((float)((float)rand() * 4.6566e-10) * 30.0) + -15.0);
                        *((float *)&v40 + 1) = *((float *)&v40 + 1)
                                             + (float)((float)((float)((float)rand() * 4.6566e-10) * 30.0) + -15.0);
                        rand();
                        FxSystem_c::AddParticle(dword_820550, (int)&v40, (int)&v33, 0, (int)v36, -1.0, 1.2, 0.6, 0);
                        ++v21;
                      }
                      while ( v21 < v29 + 14 );
                    }
                  }
                  ++v10;
                }
                while ( v31 + 1 != v30 );
                v9 = *(float *)&CWeather::Rain;
              }
              v22 = v9 * 0.2;
              v1.n64_f32[0] = flt_A7D204;
              if ( flt_A7D204 < v22 )
              {
                v1.n64_f32[0] = flt_A7D204 + 0.0025;
                flt_A7D204 = flt_A7D204 + 0.0025;
              }
              if ( v1.n64_f32[0] > v22 )
              {
                v1.n64_f32[0] = v1.n64_f32[0] + -0.0025;
                flt_A7D204 = v1.n64_f32[0];
              }
              v2.n64_u32[0] = 0;
              v3.n64_u32[0] = 1.0;
              LODWORD(flt_A7D204) = vmin_f32(vmax_f32(v1, v2), v3).n64_u32[0];
              FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)v36, 0.9, 0.9, 1.0, flt_A7D204, 1.0, 0.0, 0.2);
              v23 = *(float *)&dword_9528B4;
              v24 = (float *)(dword_951FBC + 48);
              v25 = *(float *)&dword_9528B8;
              if ( !dword_951FBC )
                v24 = (float *)&qword_951FAC;
              v26 = *v24;
              v27 = v24[1];
              v28 = v24[2];
              result = rand() % 3;
              if ( !result )
              {
                *(float *)&v42 = (float)(v26 + (float)(v23 * 10.0))
                               + (float)((float)((float)((float)rand() * 4.6566e-10) * 40.0) + -20.0);
                *((float *)&v42 + 1) = (float)(v27 + (float)(v25 * 10.0))
                                     + (float)((float)((float)((float)rand() * 4.6566e-10) * 40.0) + -20.0);
                v43 = (float)((float)((float)((float)rand() * 4.6566e-10) * 7.0) + -2.0) + v28;
                v33 = *(float *)&CWeather::WindDir * 15.0;
                v34 = flt_A7D174 * 15.0;
                v35 = unk_A7D178 * 15.0;
                return FxSystem_c::AddParticle(dword_82053C, (int)&v42, (int)&v33, 0, (int)v36, -1.0, 1.2, 0.6, 0);
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x5cdd18
// Original: _ZN8CWeather11AddHeatHazeEv
// Demangled: CWeather::AddHeatHaze(void)
void __fastcall CWeather::AddHeatHaze(CWeather *this)
{
  ;
}


// ============================================================

// Address: 0x5cdd1c
// Original: _ZN8CWeather18UpdateInTunnelnessEv
// Demangled: CWeather::UpdateInTunnelness(void)
int __fastcall CWeather::UpdateInTunnelness(CWeather *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d8
  __int64 v4; // d9
  float v5; // s0
  __int64 *v6; // r2
  double v7; // d16
  float v8; // r4
  const CVector *v9; // r3
  char v10; // r0
  char v11; // r0
  float32x2_t v12; // d9
  const CVector *v13; // r3
  int result; // r0
  float32x2_t v15; // d0
  float v16; // s6
  double v17; // [sp+0h] [bp-40h] BYREF
  float v18; // [sp+8h] [bp-38h]
  __int64 v19; // [sp+10h] [bp-30h] BYREF
  int v20; // [sp+18h] [bp-28h]
  unsigned __int64 v21; // [sp+20h] [bp-20h]
  __int64 v22; // [sp+28h] [bp-18h]

  if ( (byte_A7D3A1 & 0x20) != 0 )
  {
    v21 = v3.n64_u64[0];
    v22 = v4;
    v6 = (__int64 *)(dword_951FBC + 48);
    if ( !dword_951FBC )
      v6 = &qword_951FAC;
    v19 = *v6;
    v20 = 0;
    if ( dword_951FBC )
    {
      v7 = *(double *)(dword_951FBC + 16);
      v18 = *(float *)(dword_951FBC + 24);
      v17 = v7;
    }
    else
    {
      v18 = 0.0;
      v8 = *(float *)&dword_951FB8;
      HIDWORD(v17) = cosf(*(float *)&dword_951FB8);
      LODWORD(v17) = COERCE_UNSIGNED_INT(sinf(v8)) ^ 0x80000000;
    }
    v18 = 0.0;
    CVector::Normalise((CVector *)&v17);
    v3.n64_u32[0] = 1120403456;
    *(float *)&v17 = *(float *)&v19 + (float)(*(float *)&v17 * 100.0);
    *((float *)&v17 + 1) = *((float *)&v19 + 1) + (float)(*((float *)&v17 + 1) * 100.0);
    v18 = (float)(v18 * 100.0) + 0.0;
    v10 = byte_A7D218;
    __dmb(0xBu);
    if ( (v10 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_A7D218) )
    {
      dword_A7D20C = 1118437376;
      unk_A7D210 = -998309888;
      dword_A7D214 = 0;
      j___cxa_guard_release((__guard *)&byte_A7D218);
    }
    v11 = byte_A7D228;
    __dmb(0xBu);
    if ( (v11 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_A7D228) )
    {
      dword_A7D21C = 1154637824;
      unk_A7D220 = -990609408;
      dword_A7D224 = 0;
      j___cxa_guard_release((__guard *)&byte_A7D228);
    }
    v1.n64_u32[0] = CCollision::DistToLine(
                      (CCollision *)&v19,
                      (const CVector *)&v17,
                      (const CVector *)&dword_A7D20C,
                      v9);
    v12.n64_u64[0] = vmin_f32(v1, v3).n64_u64[0];
    result = CCollision::DistToLine((CCollision *)&v19, (const CVector *)&v17, (const CVector *)&dword_A7D21C, v13);
    v1.n64_u32[0] = result;
    v15.n64_u64[0] = vmin_f32(v12, v1).n64_u64[0];
    v2.n64_u32[0] = 1.0;
    v15.n64_f32[0] = v15.n64_f32[0] / 100.0;
    LODWORD(v5) = vmin_f32(v15, v2).n64_u32[0];
  }
  else
  {
    v5 = 0.0;
  }
  v16 = *(float *)&CTimer::ms_fTimeStep * 0.01;
  if ( fabsf(v5 - *(float *)&CWeather::InTunnelness) >= (float)(*(float *)&CTimer::ms_fTimeStep * 0.01) )
  {
    if ( (float)(v5 - *(float *)&CWeather::InTunnelness) < 0.0 )
      v16 = -v16;
    v5 = *(float *)&CWeather::InTunnelness + v16;
  }
  CWeather::InTunnelness = LODWORD(v5);
  return result;
}


// ============================================================

// Address: 0x5cdf28
// Original: _ZN8CWeather12ForceWeatherEs
// Demangled: CWeather::ForceWeather(short)
__int16 __fastcall CWeather::ForceWeather(__int16 this, __int16 a2)
{
  CWeather::ForcedWeatherType = this;
  return this;
}


// ============================================================

// Address: 0x5cdf38
// Original: _ZN8CWeather15ForceWeatherNowEs
// Demangled: CWeather::ForceWeatherNow(short)
__int16 __fastcall CWeather::ForceWeatherNow(__int16 this, __int16 a2)
{
  CWeather::OldWeatherType = this;
  CWeather::ForcedWeatherType = this;
  CWeather::NewWeatherType = this;
  return this;
}


// ============================================================

// Address: 0x5cdf60
// Original: _ZN8CWeather30SetWeatherToAppropriateTypeNowEv
// Demangled: CWeather::SetWeatherToAppropriateTypeNow(void)
__int16 *__fastcall CWeather::SetWeatherToAppropriateTypeNow(CWeather *this)
{
  __int16 v1; // r6
  char *v2; // r2
  __int16 *result; // r0
  float v4; // [sp+4h] [bp-1Ch] BYREF
  float v5; // [sp+8h] [bp-18h]

  FindPlayerCoors((int)&v4);
  if ( v4 <= 1000.0 )
  {
    if ( v4 <= -850.0 || v4 >= 1000.0 || v5 <= 1280.0 )
    {
      if ( v5 >= 1430.0 || v5 <= -580.0 )
        v1 = v5 < -850.0 && v4 < 3000.0 && v4 > 250.0 && v5 > -3000.0;
      else
        v1 = 2;
    }
    else
    {
      v1 = 4;
    }
  }
  else
  {
    v1 = 3;
  }
  v2 = (char *)*(&off_66E370 + ((unsigned __int16)v1 ^ 4));
  result = &CWeather::NewWeatherType;
  CWeather::ForcedWeatherType = -1;
  CWeather::WeatherRegion = v1;
  CWeather::NewWeatherType = *v2;
  CWeather::OldWeatherType = CWeather::NewWeatherType;
  return result;
}


// ============================================================

// Address: 0x5ce0cc
// Original: _ZN8CWeather14ReleaseWeatherEv
// Demangled: CWeather::ReleaseWeather(void)
__int16 *__fastcall CWeather::ReleaseWeather(CWeather *this)
{
  __int16 *result; // r0

  result = &CWeather::ForcedWeatherType;
  CWeather::ForcedWeatherType = -1;
  return result;
}


// ============================================================

// Address: 0x5ce0e0
// Original: _ZN8CWeather18AddStreamAfterRainEv
// Demangled: CWeather::AddStreamAfterRain(void)
void __fastcall CWeather::AddStreamAfterRain(CWeather *this)
{
  ;
}


// ============================================================

// Address: 0x5ce0e4
// Original: _ZN8CWeather21AddSandStormParticlesEv
// Demangled: CWeather::AddSandStormParticles(void)
int __fastcall CWeather::AddSandStormParticles(CWeather *this)
{
  float v1; // s18
  float *v2; // r3
  float v3; // s20
  float v4; // s22
  float v5; // s24
  float v6; // s16
  int result; // r0
  float v8[3]; // [sp+14h] [bp-6Ch] BYREF
  float v9[3]; // [sp+20h] [bp-60h] BYREF
  _BYTE v10[84]; // [sp+2Ch] [bp-54h] BYREF

  FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)v10, 0.67, 0.65, 0.55, 0.25, 1.0, 0.0, 0.2);
  v1 = *(float *)&dword_9528B8;
  v2 = (float *)(dword_951FBC + 48);
  v3 = *(float *)&dword_9528B4;
  if ( !dword_951FBC )
    v2 = (float *)&qword_951FAC;
  v4 = *v2;
  v5 = v2[1];
  v6 = v2[2];
  if ( dword_6E03FC || (result = rand(), (result & 1) != 0) )
  {
    result = rand() % 3;
    if ( !result )
    {
      v9[0] = (float)(v4 + (float)(v3 * 10.0)) + (float)((float)((float)((float)rand() * 4.6566e-10) * 40.0) + -20.0);
      v9[1] = (float)(v5 + (float)(v1 * 10.0)) + (float)((float)((float)((float)rand() * 4.6566e-10) * 40.0) + -20.0);
      v9[2] = (float)((float)((float)((float)rand() * 4.6566e-10) * 7.0) + -2.0) + v6;
      v8[0] = *(float *)&CWeather::WindDir * 25.0;
      v8[1] = flt_A7D174 * 25.0;
      v8[2] = unk_A7D178 * 25.0;
      return FxSystem_c::AddParticle(dword_82053C, (int)v9, (int)v8, 0, (int)v10, -1.0, 1.2, 0.6, 0);
    }
  }
  return result;
}


// ============================================================

// Address: 0x5ce294
// Original: _ZN8CWeather17RenderRainStreaksEv
// Demangled: CWeather::RenderRainStreaks(void)
int __fastcall CWeather::RenderRainStreaks(CWeather *this)
{
  int result; // r0
  int v2; // r1
  int v3; // r2
  int v4; // r4
  __int64 *v5; // r1
  int v6; // r11
  int v7; // r10
  int v8; // r0
  float *v9; // r1
  float v10; // s24
  float v11; // s26
  __int64 *v12; // r4
  int v13; // s0
  float v14; // s24
  __int64 *v15; // r1
  float v16; // s26
  float v17; // s24
  float v18; // s26
  float v19; // s31
  float v20; // s24
  float v21; // s26
  int *v22; // r4
  float v23; // s19
  float v24; // s21
  float v25; // s23
  float v26; // s29
  int v27; // r0
  __int16 v28; // r1
  int v29; // r6
  int v30; // r0
  int v31; // r12
  int v32; // s2
  int *v33; // r2
  int v34; // r3
  int *v35; // r4
  float v36; // s4
  float v37; // s0
  float v38; // s12
  float v39; // s10
  float v40; // s8
  float v41; // s0
  int v42; // r0
  int v43; // s0
  bool v44; // cc
  unsigned __int8 v45; // r0
  int v46; // [sp+38h] [bp-68h]
  int v47; // [sp+3Ch] [bp-64h]

  result = (unsigned __int8)CTimer::m_CodePause;
  if ( !CTimer::m_CodePause )
  {
    result = CWeather::CurrentRainParticleStrength;
    v2 = (int)(float)((float)((float)(64.0 - (float)CTimeCycle::m_FogReduction) * 0.015625)
                    * (float)(int)(float)(*(float *)&CWeather::Rain * 110.0));
    if ( CWeather::CurrentRainParticleStrength < v2 )
      result = ++CWeather::CurrentRainParticleStrength;
    if ( result > v2 )
      CWeather::CurrentRainParticleStrength = --result;
    v3 = result;
    if ( result <= 0 )
      v3 = 0;
    CWeather::CurrentRainParticleStrength = v3;
    if ( result >= 1 )
    {
      result = CCullZones::CamNoRain((CCullZones *)result);
      if ( !result )
      {
        result = CCullZones::PlayerNoRain(0);
        if ( !result )
        {
          result = (int)&CWeather::UnderWaterness;
          if ( CWeather::UnderWaterness <= 0.0 )
          {
            result = CGame::currArea;
            if ( !CGame::currArea )
            {
              result = (int)&TheCamera;
              v4 = dword_951FBC;
              v5 = (__int64 *)(dword_951FBC + 48);
              if ( !dword_951FBC )
                v5 = &qword_951FAC;
              if ( *((float *)v5 + 2) <= 900.0 )
              {
                TempBufferVerticesStored = 0;
                TempBufferIndicesStored = 0;
                if ( !byte_A7D208 )
                {
                  byte_A7D208 = 1;
                  memset(dword_6B2560, 0, sizeof(dword_6B2560));
                  memset(dword_6B2760, 0, sizeof(dword_6B2760));
                  memset(dword_6B2960, 0, sizeof(dword_6B2960));
                  memset(
                    byte_6B2B60,
                    (unsigned int)(float)((float)CWeather::CurrentRainParticleStrength * 0.6),
                    sizeof(byte_6B2B60));
                }
                v6 = 0;
                while ( 1 )
                {
                  v7 = dword_6B2960[v6];
                  v8 = dword_6B2760[v6];
                  v9 = (float *)(v4 + 48);
                  if ( !v4 )
                    v9 = (float *)&qword_951FAC;
                  v10 = *v9;
                  if ( v7 < 1
                    || !byte_6B2B60[v6]
                    || sqrtf(
                         (float)((float)((float)((float)dword_6B2760[v6] - v10) * (float)((float)dword_6B2760[v6] - v10))
                               + (float)((float)((float)dword_6B2560[v6] - v9[1])
                                       * (float)((float)dword_6B2560[v6] - v9[1])))
                       + (float)((float)((float)dword_6B2960[v6] - v9[2]) * (float)((float)dword_6B2960[v6] - v9[2]))) > 8.0 )
                  {
                    v11 = *(float *)&dword_9528B4;
                    v12 = &qword_951FAC;
                    v13 = (int)(float)((float)(v10 + (float)(v11 * 6.0))
                                     + (float)((float)((float)((float)rand() * 4.6566e-10) * 5.0) + -2.5));
                    v14 = *(float *)&dword_9528B8;
                    v15 = &qword_951FAC;
                    dword_6B2760[v6] = v13;
                    if ( dword_951FBC )
                      v15 = (__int64 *)(dword_951FBC + 48);
                    v16 = *((float *)v15 + 1);
                    dword_6B2560[v6] = (int)(float)((float)(v16 + (float)(v14 * 6.0))
                                                  + (float)((float)((float)((float)rand() * 4.6566e-10) * 5.0) + -2.5));
                    if ( dword_951FBC )
                      v12 = (__int64 *)(dword_951FBC + 48);
                    v18 = *((float *)v12 + 2);
                    v17 = *(float *)&dword_9528BC;
                    v7 = (int)(float)((float)(v18 + (float)(v17 * 6.0))
                                    + (float)((float)((float)((float)rand() * 4.6566e-10) * 5.0) + -2.5));
                    dword_6B2960[v6] = v7;
                    byte_6B2B60[v6] = (unsigned int)(float)((float)CWeather::CurrentRainParticleStrength * 0.6);
                    v8 = dword_6B2760[v6];
                  }
                  v19 = (float)v8;
                  if ( v6 << 31 )
                  {
                    v21 = 0.1;
                    v20 = *(float *)&CWeather::Wind;
                  }
                  else
                  {
                    v20 = *(float *)&CWeather::Rain * 0.1;
                    v21 = *(float *)&CWeather::Wind;
                  }
                  v22 = &dword_6B2560[v6];
                  v23 = *(float *)&CWeather::WindDir;
                  v24 = flt_A7D174;
                  v25 = unk_A7D178;
                  v26 = (float)*v22;
                  v47 = rand();
                  v27 = TempBufferIndicesStored;
                  v28 = TempBufferVerticesStored;
                  *((_WORD *)TempBufferRenderIndexList + TempBufferIndicesStored) = TempBufferVerticesStored;
                  *((_WORD *)TempBufferRenderIndexList + v27 + 1) = v28 + 1;
                  v46 = rand();
                  v29 = rand();
                  v30 = rand();
                  v31 = TempBufferVerticesStored;
                  v32 = *v22;
                  v33 = &TempVertexBuffer[9 * TempBufferVerticesStored];
                  v34 = byte_6B2B60[v6];
                  v33[6] = (v34 << 24) | 0xE6D2D2;
                  v35 = &dword_6B2960[v6];
                  v36 = (float)*v35;
                  v37 = (float)dword_6B2760[v6];
                  v33[15] = (v34 << 23) & 0x7F000000 | 0xE6D2D2;
                  TempBufferVerticesStored = v31 + 2;
                  TempBufferIndicesStored += 2;
                  v38 = (float)((float)((float)v46 * 4.6566e-10) * 0.4) + -0.2;
                  v39 = (float)((float)((float)v29 * 4.6566e-10) * 0.4) + -0.2;
                  v40 = (float)((float)((float)v30 * 4.6566e-10) * 0.2) + -0.1;
                  *(float *)v33 = v38 + v37;
                  *((float *)v33 + 1) = v39 + (float)v32;
                  *((float *)v33 + 2) = v40 + v36;
                  *((float *)v33 + 9) = (float)(v19 - (float)((float)(v21 * v20) * v23)) + v38;
                  *((float *)v33 + 10) = (float)(v26 - (float)((float)(v21 * v20) * v24)) + v39;
                  *((float *)v33 + 11) = (float)((float)((float)v7 - (float)((float)(v21 * v20) * v25))
                                               + (float)((float)((float)((float)v47 * 4.6566e-10) * 0.4) + 0.1))
                                       + v40;
                  *v35 = (int)(float)((float)*v35 - (float)((float)((float)((float)rand() * 4.6566e-10) * 0.09) + 0.01));
                  v41 = (float)(unsigned __int16)rand();
                  v42 = byte_6B2B60[v6];
                  v43 = (int)(float)((float)(v41 * 0.000015259) * 3.0);
                  v44 = v42 <= v43 + 2;
                  v45 = v42 - (v43 + 2);
                  if ( v44 )
                    v45 = 0;
                  byte_6B2B60[v6] = v45;
                  if ( !dword_6E03FC )
                    ++v6;
                  if ( ++v6 > 127 )
                    break;
                  v4 = dword_951FBC;
                }
                if ( TempBufferIndicesStored )
                {
                  RwRenderStateSet(8, 0);
                  RwRenderStateSet(6, 1);
                  RwRenderStateSet(14, 0);
                  RwRenderStateSet(16, 1);
                  RwRenderStateSet(10, 5);
                  RwRenderStateSet(11, 6);
                  RwRenderStateSet(12, 1);
                  RwRenderStateSet(1, 0);
                  if ( RwIm3DTransform() )
                  {
                    RwIm3DRenderIndexedPrimitive();
                    RwIm3DEnd();
                  }
                  RwRenderStateSet(8, 1);
                  RwRenderStateSet(6, 1);
                  RwRenderStateSet(10, 5);
                  RwRenderStateSet(11, 6);
                  RwRenderStateSet(14, 0);
                  RwRenderStateSet(12, 0);
                }
                result = (int)&TempBufferVerticesStored;
                TempBufferVerticesStored = 0;
                TempBufferIndicesStored = 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x5cea58
// Original: _ZN8CWeather15ForecastWeatherEii
// Demangled: CWeather::ForecastWeather(int,int)
int __fastcall CWeather::ForecastWeather(CWeather *this, int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r2
  char *v5; // r6

  if ( a2 < 0 )
    return 0;
  v3 = CWeather::WeatherRegion - 1;
  v4 = -1;
  while ( 1 )
  {
    v5 = (char *)&WeatherTypesListDefault;
    if ( v3 <= 3 )
      v5 = (char *)*(&off_66E390 + v3);
    if ( (CWeather *)v5[(CWeather::WeatherTypeInList + v4 + 1) % 64] == this )
      break;
    if ( ++v4 >= a2 )
      return 0;
  }
  return 1;
}


// ============================================================

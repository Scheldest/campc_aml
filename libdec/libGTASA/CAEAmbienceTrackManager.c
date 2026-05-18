
// Address: 0x18c0c0
// Original: j__ZN23CAEAmbienceTrackManager28UpdateAmbienceTrackAndVolumeEv
// Demangled: CAEAmbienceTrackManager::UpdateAmbienceTrackAndVolume(void)
// attributes: thunk
int __fastcall CAEAmbienceTrackManager::UpdateAmbienceTrackAndVolume(CAEAmbienceTrackManager *this)
{
  return _ZN23CAEAmbienceTrackManager28UpdateAmbienceTrackAndVolumeEv(this);
}


// ============================================================

// Address: 0x18cbc0
// Original: j__ZN23CAEAmbienceTrackManager7ServiceEi
// Demangled: CAEAmbienceTrackManager::Service(int)
// attributes: thunk
int __fastcall CAEAmbienceTrackManager::Service(CAEAmbienceTrackManager *this, int a2)
{
  return _ZN23CAEAmbienceTrackManager7ServiceEi(this, a2);
}


// ============================================================

// Address: 0x18f3e4
// Original: j__ZN23CAEAmbienceTrackManager5ResetEv
// Demangled: CAEAmbienceTrackManager::Reset(void)
// attributes: thunk
int __fastcall CAEAmbienceTrackManager::Reset(CAEAmbienceTrackManager *this)
{
  return _ZN23CAEAmbienceTrackManager5ResetEv(this);
}


// ============================================================

// Address: 0x191c8c
// Original: j__ZN23CAEAmbienceTrackManager31StopSpecialMissionAmbienceTrackEv
// Demangled: CAEAmbienceTrackManager::StopSpecialMissionAmbienceTrack(void)
// attributes: thunk
int __fastcall CAEAmbienceTrackManager::StopSpecialMissionAmbienceTrack(CAEAmbienceTrackManager *this)
{
  return _ZN23CAEAmbienceTrackManager31StopSpecialMissionAmbienceTrackEv(this);
}


// ============================================================

// Address: 0x19313c
// Original: j__ZN23CAEAmbienceTrackManager21IsAmbienceRadioActiveEv
// Demangled: CAEAmbienceTrackManager::IsAmbienceRadioActive(void)
// attributes: thunk
int __fastcall CAEAmbienceTrackManager::IsAmbienceRadioActive(CAEAmbienceTrackManager *this)
{
  return _ZN23CAEAmbienceTrackManager21IsAmbienceRadioActiveEv(this);
}


// ============================================================

// Address: 0x1960ec
// Original: j__ZN23CAEAmbienceTrackManager31PlaySpecialMissionAmbienceTrackEi
// Demangled: CAEAmbienceTrackManager::PlaySpecialMissionAmbienceTrack(int)
// attributes: thunk
int __fastcall CAEAmbienceTrackManager::PlaySpecialMissionAmbienceTrack(CAEAmbienceTrackManager *this, int a2)
{
  return _ZN23CAEAmbienceTrackManager31PlaySpecialMissionAmbienceTrackEi(this, a2);
}


// ============================================================

// Address: 0x198d30
// Original: j__ZN23CAEAmbienceTrackManager17StopAmbienceTrackEv
// Demangled: CAEAmbienceTrackManager::StopAmbienceTrack(void)
// attributes: thunk
int __fastcall CAEAmbienceTrackManager::StopAmbienceTrack(CAEAmbienceTrackManager *this)
{
  return _ZN23CAEAmbienceTrackManager17StopAmbienceTrackEv(this);
}


// ============================================================

// Address: 0x19fde0
// Original: j__ZN23CAEAmbienceTrackManager21IsAmbienceTrackActiveEv
// Demangled: CAEAmbienceTrackManager::IsAmbienceTrackActive(void)
// attributes: thunk
int __fastcall CAEAmbienceTrackManager::IsAmbienceTrackActive(CAEAmbienceTrackManager *this)
{
  return _ZN23CAEAmbienceTrackManager21IsAmbienceTrackActiveEv(this);
}


// ============================================================

// Address: 0x390d8c
// Original: _ZN23CAEAmbienceTrackManager7ServiceEi
// Demangled: CAEAmbienceTrackManager::Service(int)
int __fastcall CAEAmbienceTrackManager::Service(CAEAmbienceTrackManager *this, int a2)
{
  int result; // r0
  int v5; // r2
  unsigned int RandomNumberInRange; // r3
  int v7; // r0
  int v8; // r2
  int v9; // r1
  float v10; // s0
  int v11; // r0
  bool v12; // zf

  if ( !((CAudioEngine::IsCutsceneTrackActive((CAudioEngine *)&AudioEngine) | (unsigned __int8)CTimer::m_UserPause) << 24)
    && !(((unsigned __int8)CTimer::m_CodePause | (unsigned __int8)byte_98F1A5) << 24)
    && !CLoadingScreen::m_bActive )
  {
    CAEAmbienceTrackManager::UpdateAmbienceTrackAndVolume(this);
  }
  result = *((_DWORD *)this + 2);
  switch ( result )
  {
    case 0:
      result = IsPostLoading();
      if ( !result )
      {
        RandomNumberInRange = 0;
        if ( !*((_BYTE *)this + 2) )
        {
          v7 = *((_DWORD *)this + 4);
          if ( v7 < 0 )
          {
            RandomNumberInRange = CAEAudioUtility::GetRandomNumberInRange(0, (int)"usedi", v5);
          }
          else
          {
            v8 = *((_DWORD *)this + 5);
            v9 = *((_DWORD *)this + 4);
            if ( v8 )
              v9 = CTimer::m_snTimeInMilliseconds + v7 - v8;
            RandomNumberInRange = v7 + 7000;
            if ( v9 > v7 + 7000 )
              RandomNumberInRange = v9;
          }
        }
        CAEAudioHardware::PlayTrack(
          (CAEAudioHardware *)AEAudioHardware,
          *((_DWORD *)this + 8),
          -1,
          RandomNumberInRange,
          *((_BYTE *)this + 40),
          0,
          0);
        result = 1;
        goto LABEL_32;
      }
      return result;
    case 1:
      result = a2 + 2;
      if ( a2 == -2 )
      {
        result = 2;
        goto LABEL_32;
      }
      return result;
    case 2:
      CAEAudioHardware::DisableBassEq((CAEAudioHardware *)AEAudioHardware);
      CAEAudioHardware::SetChannelVolume(
        (CAEAudioHardware *)AEAudioHardware,
        *((_WORD *)this + 2),
        0,
        *((float *)this + 6),
        0);
      CAEAudioHardware::SetChannelFlags((CAEAudioHardware *)AEAudioHardware, *((_WORD *)this + 2), 0, 33);
      CAEAudioHardware::StartTrackPlayback((CAEAudioHardware *)AEAudioHardware);
      result = 3;
      goto LABEL_32;
    case 3:
      v10 = 0.0;
      if ( !CTimer::m_UserPause && !(((unsigned __int8)CTimer::m_CodePause | (unsigned __int8)byte_98F1A5) << 24) )
        v10 = *((float *)this + 7);
      CAEAudioHardware::SetChannelFrequencyScalingFactor(
        (CAEAudioHardware *)AEAudioHardware,
        *((_WORD *)this + 2),
        0,
        v10);
      CAEAudioHardware::SetChannelFrequencyScalingFactor(
        (CAEAudioHardware *)AEAudioHardware,
        *((_WORD *)this + 2),
        0,
        v10);
      return CAEAudioHardware::SetChannelVolume(
               (CAEAudioHardware *)AEAudioHardware,
               *((_WORD *)this + 2),
               0,
               *((float *)this + 6),
               0);
    case 4:
      if ( *((_DWORD *)this + 8) == *((_DWORD *)this + 3) )
      {
        *((_DWORD *)this + 4) = -1;
        v11 = 0;
      }
      else
      {
        *((_DWORD *)this + 4) = a2;
        v11 = CTimer::m_snTimeInMilliseconds;
      }
      *((_DWORD *)this + 5) = v11;
      *((_DWORD *)this + 6) = -1027080192;
      goto LABEL_31;
    case 5:
      CAEAudioHardware::StopSound((CAEAudioHardware *)AEAudioHardware, *((_WORD *)this + 2), 0);
      result = 6;
      goto LABEL_32;
    case 6:
LABEL_31:
      CAEAudioHardware::StopTrack((CAEAudioHardware *)AEAudioHardware);
      result = 7;
      goto LABEL_32;
    case 7:
      v12 = a2 == -7;
      if ( a2 != -7 )
        v12 = a2 == -2;
      if ( v12 )
        return j_CAEAudioHardware::StopTrack((CAEAudioHardware *)AEAudioHardware);
      result = a2 + 6;
      if ( a2 == -6 )
      {
        result = 8;
LABEL_32:
        *((_DWORD *)this + 2) = result;
      }
      return result;
    default:
      return result;
  }
}


// ============================================================

// Address: 0x390fcc
// Original: _ZN23CAEAmbienceTrackManager28UpdateAmbienceTrackAndVolumeEv
// Demangled: CAEAmbienceTrackManager::UpdateAmbienceTrackAndVolume(void)
int __fastcall CAEAmbienceTrackManager::UpdateAmbienceTrackAndVolume(
        CAEAmbienceTrackManager *this,
        int a2,
        CVector *a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d2
  float32x2_t v5; // d8
  float32x2_t v6; // d9
  int v8; // r5
  int v9; // r6
  int v10; // r8
  __int64 v11; // r0
  char *v12; // r1
  double v13; // d16
  __int16 v14; // r0
  int v15; // r1
  char *v16; // r0
  char MostFavoriteRadioStation; // r0
  __int64 *v18; // r2
  float v19; // r0
  float v20; // s0
  __int64 *v21; // r2
  float v22; // s2
  float v23; // r1
  float v24; // r0
  float v25; // s0
  float v26; // r1
  float v27; // r1
  float v28; // r0
  float v29; // s0
  signed __int8 CurrentRadioStationID; // r0
  float v32; // [sp+4h] [bp-44h] BYREF
  float v33; // [sp+8h] [bp-40h]
  float v34; // [sp+Ch] [bp-3Ch]
  double v35; // [sp+10h] [bp-38h] BYREF
  int v36; // [sp+18h] [bp-30h]

  *((_BYTE *)this + 2) = 0;
  *(_BYTE *)this = 0;
  v8 = *((_DWORD *)this + 3);
  v9 = *((char *)this + 3);
  *((_BYTE *)this + 3) = -1;
  if ( v8 >= 0 )
  {
    v5.n64_u32[0] = -6.0;
    *(_BYTE *)this = 1;
    v10 = 0;
LABEL_3:
    *((_BYTE *)this + 2) = 1;
LABEL_25:
    MostFavoriteRadioStation = *((_BYTE *)this + 3);
LABEL_4:
    if ( MostFavoriteRadioStation > -1 )
      goto LABEL_5;
    LODWORD(v11) = CAudioEngine::IsRadioOn((CAudioEngine *)&AudioEngine);
    if ( v9 >= 0 )
    {
      if ( !(_DWORD)v11 )
        return v11;
      goto LABEL_15;
    }
    if ( (_DWORD)v11 )
    {
      if ( *(_BYTE *)this )
      {
        CAudioEngine::StopRadio();
        CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 35, 0.0, 1.0);
        LODWORD(v11) = *(unsigned __int8 *)this;
        *((_BYTE *)this + 1) = v11;
      }
      else
      {
        LODWORD(v11) = 0;
        *((_BYTE *)this + 1) = 0;
      }
      return v11;
    }
    if ( v8 >= 0 )
    {
      v11 = *((_QWORD *)this + 1);
      if ( v8 == HIDWORD(v11) )
      {
        if ( (_DWORD)v11 != 8 )
        {
          if ( *((_DWORD *)this + 8) == v8 )
            return v11;
          goto LABEL_112;
        }
        *((_DWORD *)this + 2) = 0;
        LODWORD(v11) = -1073741824;
LABEL_56:
        *((_DWORD *)this + 6) = v11;
        *((_DWORD *)this + 7) = 1065353216;
        *((_DWORD *)this + 8) = v8;
        return v11;
      }
      if ( (_DWORD)v11 == 8 )
      {
        *((_DWORD *)this + 2) = 0;
        LODWORD(v11) = -1039663104;
        goto LABEL_56;
      }
      v3.n64_u32[0] = *((_DWORD *)this + 6);
      if ( *((_DWORD *)this + 8) == v8 )
      {
        v3.n64_f32[0] = v3.n64_f32[0] + 1.0;
        *((_DWORD *)this + 6) = vmin_f32(v3, v5).n64_u32[0];
        return v11;
      }
      if ( v3.n64_f32[0] <= -40.0 )
      {
LABEL_112:
        if ( (unsigned int)v11 > 3 )
        {
LABEL_114:
          LODWORD(v11) = 0;
          *((_BYTE *)this + 2) = 0;
          *(_WORD *)this = 0;
          return v11;
        }
LABEL_113:
        *((_DWORD *)this + 2) = 4;
        goto LABEL_114;
      }
LABEL_123:
      *((float *)this + 6) = v3.n64_f32[0] + -0.4;
      return v11;
    }
    if ( CWeather::UnderWaterness >= 0.5 )
    {
      v6.n64_u32[0] = 14.0;
      v5.n64_u32[0] = 1031798784;
    }
    else
    {
      v18 = (__int64 *)(dword_951FBC + 48);
      if ( !dword_951FBC )
        v18 = &qword_951FAC;
      v19 = COERCE_FLOAT(
              CAEAudioEnvironment::GetDistanceAttenuation(
                COERCE_CAEAUDIOENVIRONMENT_(
                  sqrtf(
                    (float)(*(float *)&dword_952088 * *(float *)&dword_952088)
                  + (float)((float)(*((float *)v18 + 2) - unk_95208C) * (float)(*((float *)v18 + 2) - unk_95208C)))
                / 1.75),
                *(float *)&dword_951FBC));
      v6.n64_f32[0] = v19 + -12.0;
      if ( (float)(v19 + -12.0) <= -34.0 )
      {
LABEL_49:
        LODWORD(v11) = CGameLogic::LaRiotsActiveHere((CGameLogic *)LODWORD(v19));
        HIDWORD(v11) = *((_DWORD *)this + 2);
        if ( (_DWORD)v11 != 1 || (LODWORD(v11) = CGame::currArea) != 0 )
        {
          if ( HIDWORD(v11) != 8 )
          {
            if ( *((_DWORD *)this + 8) == 174 )
            {
              if ( v6.n64_f32[0] < -40.0 )
              {
                if ( HIDWORD(v11) <= 3 )
                  *((_DWORD *)this + 2) = 4;
                *((_BYTE *)this + 2) = 0;
                *(_WORD *)this = 0;
              }
              *((_DWORD *)this + 6) = -1027080192;
            }
            else if ( v10 && (v29 = *((float *)this + 6), v29 > -40.0) )
            {
              *((float *)this + 6) = v29 + -0.4;
            }
            else
            {
              if ( HIDWORD(v11) <= 3 )
                *((_DWORD *)this + 2) = 4;
              *((_BYTE *)this + 2) = 0;
              *(_WORD *)this = 0;
              if ( CAudioEngine::IsVehicleRadioActive((CAudioEngine *)&AudioEngine) )
              {
                CurrentRadioStationID = CAudioEngine::GetCurrentRadioStationID((CAudioEngine *)&AudioEngine);
                CAudioEngine::StartRadio((CAudioEngine *)&AudioEngine, CurrentRadioStationID, 0);
              }
            }
            LODWORD(v11) = 1065353216;
            *((_DWORD *)this + 7) = 1065353216;
          }
          return v11;
        }
        if ( HIDWORD(v11) == 8 )
        {
          *((_DWORD *)this + 2) = 0;
          LODWORD(v11) = 166;
          *((_DWORD *)this + 6) = -1039663104;
          *((_DWORD *)this + 7) = 1065353216;
          *((_DWORD *)this + 8) = 166;
          return v11;
        }
        LODWORD(v11) = *((_DWORD *)this + 8);
        v3.n64_u32[0] = *((_DWORD *)this + 6);
        if ( (_DWORD)v11 == 166 )
        {
          v4.n64_u32[0] = -12.0;
          v3.n64_f32[0] = v3.n64_f32[0] + 1.0;
          *((_DWORD *)this + 6) = vmin_f32(v3, v4).n64_u32[0];
          return v11;
        }
        if ( v3.n64_f32[0] <= -40.0 )
        {
          if ( HIDWORD(v11) > 3 )
            goto LABEL_114;
          goto LABEL_113;
        }
        goto LABEL_123;
      }
      v5.n64_u32[0] = 1.0;
    }
    v19 = COERCE_FLOAT(IsPostLoading());
    if ( v19 != 0.0 )
      goto LABEL_49;
    LODWORD(v11) = *((_DWORD *)this + 2);
    if ( (_DWORD)v11 == 8 )
    {
      *((_DWORD *)this + 2) = 0;
      *((_DWORD *)this + 8) = 174;
      LODWORD(v11) = &CWeather::UnderWaterness;
      *((_DWORD *)this + 6) = -1039663104;
      v20 = 1.0;
      if ( CWeather::UnderWaterness >= 0.5 )
        v20 = 0.0625;
      *((float *)this + 7) = v20;
      goto LABEL_138;
    }
    v3.n64_u32[0] = *((_DWORD *)this + 6);
    if ( *((_DWORD *)this + 8) != 174 )
    {
      if ( v3.n64_f32[0] <= -40.0 )
      {
        if ( (unsigned int)v11 <= 3 )
          *((_DWORD *)this + 2) = 4;
        LODWORD(v11) = 0;
        *((_BYTE *)this + 2) = 0;
        *(_WORD *)this = 0;
      }
      else
      {
        *((float *)this + 6) = v3.n64_f32[0] + -0.4;
      }
      goto LABEL_138;
    }
    if ( v6.n64_f32[0] <= v3.n64_f32[0] )
    {
      if ( v6.n64_f32[0] >= v3.n64_f32[0] )
        goto LABEL_138;
      v3.n64_f32[0] = v3.n64_f32[0] + -1.0;
      v3.n64_u64[0] = vmax_f32(v3, v6).n64_u64[0];
    }
    else
    {
      v3.n64_f32[0] = v3.n64_f32[0] + 1.0;
      v3.n64_u64[0] = vmin_f32(v3, v6).n64_u64[0];
    }
    *((_DWORD *)this + 6) = v3.n64_u32[0];
LABEL_138:
    v3.n64_u32[0] = *((_DWORD *)this + 7);
    if ( v5.n64_f32[0] <= v3.n64_f32[0] )
    {
      if ( v5.n64_f32[0] < v3.n64_f32[0] )
      {
        v3.n64_f32[0] = v3.n64_f32[0] + -0.25;
        *((_DWORD *)this + 7) = vmax_f32(v3, v5).n64_u32[0];
      }
    }
    else
    {
      v3.n64_f32[0] = v3.n64_f32[0] + 0.25;
      *((_DWORD *)this + 7) = vmin_f32(v3, v5).n64_u32[0];
    }
    return v11;
  }
  if ( *(float *)&CWeather::Sandstorm <= 0.0 )
  {
    v10 = 0;
  }
  else
  {
    if ( !CGame::currArea && !CCullZones::PlayerNoRain(0) && !CCullZones::CamNoRain(0) )
    {
      v8 = 167;
      v10 = 1;
      v5.n64_f32[0] = (float)(log10f(*(float *)&CWeather::Sandstorm) * 20.0) + -6.0;
      goto LABEL_25;
    }
    v10 = 1;
  }
  if ( CAudioZones::m_NumActiveSpheres < 1 )
  {
    if ( CAudioZones::m_NumActiveBoxes < 1 )
    {
      v5.n64_u32[0] = -6.0;
      v8 = -1;
      goto LABEL_25;
    }
    v14 = *((_WORD *)&CAudioZones::m_aBoxes + 12 * CAudioZones::m_aActiveBoxes + 4);
  }
  else
  {
    v12 = (char *)&CAudioZones::m_aSpheres + 28 * CAudioZones::m_aActiveSpheres;
    v13 = *(double *)(v12 + 12);
    v14 = *((_WORD *)v12 + 4);
    v36 = *((_DWORD *)v12 + 5);
    v35 = v13;
  }
  v5.n64_u32[0] = -6.0;
  if ( v14 < 0 )
  {
    v8 = -1;
    goto LABEL_25;
  }
  v15 = v14 - 4;
  v8 = -1;
  v16 = (char *)&stderr + 2;
  switch ( v15 )
  {
    case 0:
      v21 = (__int64 *)(dword_951FBC + 48);
      if ( !dword_951FBC )
        v21 = &qword_951FAC;
      v22 = *((float *)v21 + 2);
      v8 = 143;
      if ( v22 <= 1372.0 )
        v5.n64_f32[0] = (float)((float)(1372.0 - v22) * -9.0) + -6.0;
      goto LABEL_25;
    case 1:
      CAEAudioEnvironment::GetPositionRelativeToCamera((CAEAudioEnvironment *)&v32, (CVector *)&v35, a3);
      v24 = COERCE_FLOAT(
              CAEAudioEnvironment::GetDistanceAttenuation(
                COERCE_CAEAUDIOENVIRONMENT_(sqrtf((float)((float)(v32 * v32) + (float)(v33 * v33)) + (float)(v34 * v34)) / 5.0),
                v23));
      v25 = -6.0;
      v8 = 140;
      goto LABEL_75;
    case 4:
      v8 = 165;
      goto LABEL_25;
    case 6:
      CAEAudioEnvironment::GetPositionRelativeToCamera((CAEAudioEnvironment *)&v32, (CVector *)&v35, a3);
      v24 = COERCE_FLOAT(
              CAEAudioEnvironment::GetDistanceAttenuation(
                COERCE_CAEAUDIOENVIRONMENT_(sqrtf((float)((float)(v32 * v32) + (float)(v33 * v33)) + (float)(v34 * v34)) / 5.0),
                v26));
      v25 = -6.0;
      v8 = 139;
LABEL_75:
      v5.n64_f32[0] = v24 + v25;
      goto LABEL_25;
    case 8:
      v8 = 168;
      goto LABEL_25;
    case 9:
      CAEAudioEnvironment::GetPositionRelativeToCamera((CAEAudioEnvironment *)&v32, (CVector *)&v35, a3);
      v28 = COERCE_FLOAT(
              CAEAudioEnvironment::GetDistanceAttenuation(
                COERCE_CAEAUDIOENVIRONMENT_(sqrtf((float)((float)(v32 * v32) + (float)(v33 * v33)) + (float)(v34 * v34)) / 5.0),
                v27));
      v8 = 157;
      *(_BYTE *)this = 1;
      v5.n64_f32[0] = v28 + -6.0;
      goto LABEL_25;
    case 11:
      v8 = 164;
      goto LABEL_25;
    case 13:
      v8 = 146;
      goto LABEL_25;
    case 15:
      v8 = 138;
      goto LABEL_25;
    case 16:
      v8 = 136;
      goto LABEL_25;
    case 17:
      v8 = 135;
      goto LABEL_25;
    case 19:
      v8 = 148;
      goto LABEL_25;
    case 20:
      v8 = 159;
      goto LABEL_25;
    case 21:
      v8 = 158;
      goto LABEL_25;
    case 22:
      v8 = 154;
      goto LABEL_25;
    case 24:
    case 25:
      v8 = 147;
      goto LABEL_25;
    case 26:
      MostFavoriteRadioStation = CStats::FindMostFavoriteRadioStation((CStats *)((char *)&stderr + 2));
      v5.n64_u32[0] = -6.0;
      *((_BYTE *)this + 3) = MostFavoriteRadioStation;
      v8 = -1;
      goto LABEL_4;
    case 30:
      v8 = 162;
      goto LABEL_25;
    case 32:
      v8 = 155;
      goto LABEL_25;
    case 33:
      v8 = 144;
      goto LABEL_3;
    case 35:
      v8 = 163;
      goto LABEL_25;
    case 37:
      v8 = 169;
      *(_BYTE *)this = 1;
      goto LABEL_25;
    case 40:
      v8 = 152;
      goto LABEL_25;
    case 44:
      v8 = 137;
      goto LABEL_25;
    case 46:
      v8 = 173;
      goto LABEL_25;
    case 47:
      v8 = 156;
      goto LABEL_25;
    case 48:
      LOBYTE(v16) = 1;
      goto LABEL_107;
    case 49:
      goto LABEL_107;
    case 50:
      LOBYTE(v16) = 3;
      goto LABEL_107;
    case 51:
      LOBYTE(v16) = 4;
      goto LABEL_107;
    case 52:
      LOBYTE(v16) = 5;
      goto LABEL_107;
    case 53:
      LOBYTE(v16) = 6;
      goto LABEL_107;
    case 54:
      LOBYTE(v16) = 7;
      goto LABEL_107;
    case 55:
      LOBYTE(v16) = 8;
      goto LABEL_107;
    case 56:
      LOBYTE(v16) = 9;
      goto LABEL_107;
    case 57:
      LOBYTE(v16) = 10;
      goto LABEL_107;
    case 58:
      LOBYTE(v16) = 11;
LABEL_107:
      *((_BYTE *)this + 3) = (_BYTE)v16;
      break;
    case 60:
      v8 = 151;
      goto LABEL_25;
    case 62:
      v8 = 170;
      goto LABEL_25;
    case 63:
      v8 = 171;
      goto LABEL_25;
    default:
      goto LABEL_25;
  }
LABEL_5:
  if ( !CAudioEngine::IsRadioOn((CAudioEngine *)&AudioEngine) )
  {
    LODWORD(v11) = CAudioEngine::StartRadio((CAudioEngine *)&AudioEngine, *((_BYTE *)this + 3), 2);
    return v11;
  }
  LODWORD(v11) = (unsigned __int8)CAudioEngine::GetCurrentRadioStationID((CAudioEngine *)&AudioEngine);
  if ( (unsigned __int8)v11 != *((unsigned __int8 *)this + 3) )
LABEL_15:
    LODWORD(v11) = CAudioEngine::StopRadio();
  return v11;
}


// ============================================================

// Address: 0x391748
// Original: _ZN23CAEAmbienceTrackManager18StartTrackPlaybackEv
// Demangled: CAEAmbienceTrackManager::StartTrackPlayback(void)
int __fastcall CAEAmbienceTrackManager::StartTrackPlayback(CAEAmbienceTrackManager *this)
{
  CAEAudioHardware::DisableBassEq((CAEAudioHardware *)AEAudioHardware);
  CAEAudioHardware::SetChannelVolume(
    (CAEAudioHardware *)AEAudioHardware,
    *((_WORD *)this + 2),
    0,
    *((float *)this + 6),
    0);
  CAEAudioHardware::SetChannelFlags((CAEAudioHardware *)AEAudioHardware, *((_WORD *)this + 2), 0, 33);
  return sub_1952A0((CAEAudioHardware *)AEAudioHardware);
}


// ============================================================

// Address: 0x39178c
// Original: _ZN23CAEAmbienceTrackManager13CheckForPauseEv
// Demangled: CAEAmbienceTrackManager::CheckForPause(void)
int __fastcall CAEAmbienceTrackManager::CheckForPause(CAEAmbienceTrackManager *this)
{
  float v2; // s0

  v2 = 0.0;
  if ( !CTimer::m_UserPause && !(((unsigned __int8)CTimer::m_CodePause | (unsigned __int8)byte_98F1A5) << 24) )
    v2 = *((float *)this + 7);
  CAEAudioHardware::SetChannelFrequencyScalingFactor((CAEAudioHardware *)AEAudioHardware, *((_WORD *)this + 2), 0, v2);
  return j_CAEAudioHardware::SetChannelFrequencyScalingFactor(
           (CAEAudioHardware *)AEAudioHardware,
           *((_WORD *)this + 2),
           0,
           v2);
}


// ============================================================

// Address: 0x391804
// Original: _ZN23CAEAmbienceTrackManager5ResetEv
// Demangled: CAEAmbienceTrackManager::Reset(void)
_DWORD *__fastcall CAEAmbienceTrackManager::Reset(_DWORD *this)
{
  this[3] = -1;
  this[4] = -1;
  this[5] = 0;
  *this = -16777216;
  return this;
}


// ============================================================

// Address: 0x391818
// Original: _ZN23CAEAmbienceTrackManager17StopAmbienceTrackEv
// Demangled: CAEAmbienceTrackManager::StopAmbienceTrack(void)
int __fastcall CAEAmbienceTrackManager::StopAmbienceTrack(int this)
{
  if ( *(_DWORD *)(this + 8) <= 3u )
    *(_DWORD *)(this + 8) = 4;
  *(_BYTE *)(this + 2) = 0;
  *(_WORD *)this = 0;
  return this;
}


// ============================================================

// Address: 0x39182a
// Original: _ZN23CAEAmbienceTrackManager21IsAmbienceTrackActiveEv
// Demangled: CAEAmbienceTrackManager::IsAmbienceTrackActive(void)
bool __fastcall CAEAmbienceTrackManager::IsAmbienceTrackActive(CAEAmbienceTrackManager *this)
{
  return *((_DWORD *)this + 2) != 8;
}


// ============================================================

// Address: 0x391838
// Original: _ZN23CAEAmbienceTrackManager22GetAmbienceTrackStatusEv
// Demangled: CAEAmbienceTrackManager::GetAmbienceTrackStatus(void)
int __fastcall CAEAmbienceTrackManager::GetAmbienceTrackStatus(CAEAmbienceTrackManager *this)
{
  int v1; // r1
  int result; // r0

  v1 = *((_DWORD *)this + 2);
  result = 1;
  switch ( v1 )
  {
    case 0:
    case 1:
      return result;
    case 2:
      result = 2;
      break;
    case 3:
      result = 3;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      result = 4;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// ============================================================

// Address: 0x39185c
// Original: _ZN23CAEAmbienceTrackManager21IsAmbienceRadioActiveEv
// Demangled: CAEAmbienceTrackManager::IsAmbienceRadioActive(void)
int __fastcall CAEAmbienceTrackManager::IsAmbienceRadioActive(CAEAmbienceTrackManager *this)
{
  return (*((unsigned __int8 *)this + 3) >> 7) ^ 1;
}


// ============================================================

// Address: 0x391866
// Original: _ZN23CAEAmbienceTrackManager31PlaySpecialMissionAmbienceTrackEi
// Demangled: CAEAmbienceTrackManager::PlaySpecialMissionAmbienceTrack(int)
int __fastcall CAEAmbienceTrackManager::PlaySpecialMissionAmbienceTrack(int this, int a2)
{
  *(_DWORD *)(this + 12) = a2;
  return this;
}


// ============================================================

// Address: 0x39186a
// Original: _ZN23CAEAmbienceTrackManager31StopSpecialMissionAmbienceTrackEv
// Demangled: CAEAmbienceTrackManager::StopSpecialMissionAmbienceTrack(void)
_DWORD *__fastcall CAEAmbienceTrackManager::StopSpecialMissionAmbienceTrack(_DWORD *this)
{
  if ( this[2] <= 3u )
    this[2] = 4;
  this[3] = -1;
  this[4] = -1;
  this[5] = 0;
  *this = -16777216;
  return this;
}


// ============================================================

// Address: 0x46d2d0
// Original: _ZN23CAEAmbienceTrackManager10InitialiseEi
// Demangled: CAEAmbienceTrackManager::Initialise(int)
int __fastcall CAEAmbienceTrackManager::Initialise(CAEAmbienceTrackManager *this, int a2)
{
  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 2) = 8;
  *((_BYTE *)this + 40) = 3;
  *((_DWORD *)this + 6) = -1027080192;
  *((_DWORD *)this + 7) = 1065353216;
  *((_DWORD *)this + 8) = -1;
  *((_DWORD *)this + 9) = -1;
  return 1;
}


// ============================================================

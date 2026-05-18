
// Address: 0x18eb64
// Original: j__ZN21CAEWeatherAudioEntity7ServiceEv
// Demangled: CAEWeatherAudioEntity::Service(void)
// attributes: thunk
int __fastcall CAEWeatherAudioEntity::Service(CAEWeatherAudioEntity *this)
{
  return _ZN21CAEWeatherAudioEntity7ServiceEv(this);
}


// ============================================================

// Address: 0x190adc
// Original: j__ZN21CAEWeatherAudioEntity13AddAudioEventEi
// Demangled: CAEWeatherAudioEntity::AddAudioEvent(int)
// attributes: thunk
int __fastcall CAEWeatherAudioEntity::AddAudioEvent(CAEWeatherAudioEntity *this, int a2)
{
  return _ZN21CAEWeatherAudioEntity13AddAudioEventEi(this, a2);
}


// ============================================================

// Address: 0x191490
// Original: j__ZN21CAEWeatherAudioEntity11StaticResetEv
// Demangled: CAEWeatherAudioEntity::StaticReset(void)
// attributes: thunk
int __fastcall CAEWeatherAudioEntity::StaticReset(CAEWeatherAudioEntity *this)
{
  return _ZN21CAEWeatherAudioEntity11StaticResetEv(this);
}


// ============================================================

// Address: 0x3bb480
// Original: _ZN21CAEWeatherAudioEntity11StaticResetEv
// Demangled: CAEWeatherAudioEntity::StaticReset(void)
int __fastcall CAEWeatherAudioEntity::StaticReset(CAEWeatherAudioEntity *this)
{
  int result; // r0

  CAEWeatherAudioEntity::m_sfRainVolume = -1027080192;
  if ( word_94EBBC )
    CAETwinLoopSoundEntity::StopSoundAndForget((CAETwinLoopSoundEntity *)CAEWeatherAudioEntity::m_sRainSoundL);
  result = (unsigned __int16)word_94EC64;
  if ( word_94EC64 )
    return sub_197778((CAETwinLoopSoundEntity *)CAEWeatherAudioEntity::m_sRainSoundR);
  return result;
}


// ============================================================

// Address: 0x3bb4dc
// Original: _ZN21CAEWeatherAudioEntity7ServiceEv
// Demangled: CAEWeatherAudioEntity::Service(void)
void __fastcall CAEWeatherAudioEntity::Service(CAEWeatherAudioEntity *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d3
  float32x2_t v4; // d8
  float32x2_t v6; // d0
  float v7; // r0
  int v8; // r4
  float v9; // r2
  int v10; // r11
  float v11; // r1
  __int16 v12; // r4
  float v13; // r2
  int v14; // r11
  float v15; // r1
  __int16 v16; // r4
  CEntity *v17[3]; // [sp+2Ch] [bp-A4h] BYREF
  int v18; // [sp+38h] [bp-98h]
  __int16 v19; // [sp+82h] [bp-4Eh]

  v17[2] = 0;
  if ( !CGame::currArea )
  {
    if ( !CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 3, this) )
    {
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
      {
        CAESound::Initialise();
        v18 = 3;
        CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v17);
        CAESound::Initialise();
        v18 = 3;
        CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v17);
      }
      else
      {
        CAEAudioHardware::LoadSoundBank((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0);
      }
    }
    if ( !CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 4, this) )
    {
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
      {
        CAESound::Initialise();
        v18 = 4;
        CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v17);
      }
      else
      {
        CAEAudioHardware::LoadSoundBank((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0);
      }
    }
    if ( !CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 5, this) )
    {
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
      {
        CAESound::Initialise();
        v18 = 5;
        CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v17);
      }
      else
      {
        CAEAudioHardware::LoadSoundBank((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0);
      }
    }
  }
  v4.n64_u32[0] = -1027080192;
  if ( *(float *)&CWeather::Rain > 0.0
    && !CCullZones::PlayerNoRain((CCullZones *)&CWeather::Rain)
    && !CCullZones::CamNoRain(0)
    && !CGame::currArea )
  {
    v3.n64_u32[0] = 0;
    v1.n64_f32[0] = *(float *)&CWeather::Rain + -0.2;
    v2.n64_u32[0] = CAEWeatherAudioEntity::m_sfRainVolume;
    v6.n64_u64[0] = vmax_f32(v1, v3).n64_u64[0];
    v7 = v6.n64_f32[0] / 0.8;
    v6.n64_u32[0] = -1035468800;
    v1.n64_u64[0] = vmax_f32(v2, v6).n64_u64[0];
    CAEWeatherAudioEntity::m_sfRainVolume = v1.n64_u32[0];
    v8 = *(char *)(CAEAudioEntity::m_pAudioEventVolumes + 143);
    v4.n64_f32[0] = (float)(log10f(v7) * 20.0) + (float)v8;
  }
  v1.n64_u32[0] = CAEWeatherAudioEntity::m_sfRainVolume;
  if ( v4.n64_f32[0] < *(float *)&CAEWeatherAudioEntity::m_sfRainVolume )
  {
    v1.n64_f32[0] = *(float *)&CAEWeatherAudioEntity::m_sfRainVolume + -0.5;
    v1.n64_u32[0] = vmax_f32(v1, v4).n64_u32[0];
LABEL_23:
    CAEWeatherAudioEntity::m_sfRainVolume = v1.n64_u32[0];
    goto LABEL_24;
  }
  if ( v4.n64_f32[0] > *(float *)&CAEWeatherAudioEntity::m_sfRainVolume )
  {
    v1.n64_f32[0] = *(float *)&CAEWeatherAudioEntity::m_sfRainVolume + 0.5;
    v1.n64_u32[0] = vmin_f32(v1, v4).n64_u32[0];
    goto LABEL_23;
  }
LABEL_24:
  if ( v4.n64_f32[0] == -100.0 && v1.n64_f32[0] <= -50.0 )
  {
    CAEWeatherAudioEntity::m_sfRainVolume = -1027080192;
    if ( word_94EBBC )
      CAETwinLoopSoundEntity::StopSoundAndForget((CAETwinLoopSoundEntity *)CAEWeatherAudioEntity::m_sRainSoundL);
    if ( word_94EC64 )
      CAETwinLoopSoundEntity::StopSoundAndForget((CAETwinLoopSoundEntity *)CAEWeatherAudioEntity::m_sRainSoundR);
    goto LABEL_45;
  }
  if ( word_94EBBC )
  {
    CAETwinLoopSoundEntity::UpdateTwinLoopSound();
    if ( CAETwinLoopSoundEntity::DoSoundsSwitchThisFrame((CAETwinLoopSoundEntity *)CAEWeatherAudioEntity::m_sRainSoundL) )
    {
      v10 = (unsigned __int16)CAEWeatherAudioEntity::m_snLastRainDropSoundID;
      CAEAudioUtility::GetRandomNumberInRange((CAEAudioUtility *)0xC0C00000, 6.0, v9);
      CAEAudioUtility::ResolveProbability((CAEAudioUtility *)0x3F000000, v11);
      v12 = v10 + 1;
      if ( (v10 + 1) << 16 > 720896 )
        v12 = 2;
      CAESound::Initialise();
      v19 = 3;
      CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v17);
      CAEWeatherAudioEntity::m_snLastRainDropSoundID = v12;
    }
  }
  else
  {
    if ( !CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x69u, 6) )
      goto LABEL_44;
    CAETwinLoopSoundEntity::Initialise(
      (CAETwinLoopSoundEntity *)CAEWeatherAudioEntity::m_sRainSoundL,
      6,
      1,
      0,
      this,
      0x41u,
      0x15Eu,
      0,
      0);
    CAETwinLoopSoundEntity::PlayTwinLoopSound();
  }
  if ( !word_94EC64 )
  {
    if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x69u, 6) )
    {
      CAETwinLoopSoundEntity::Initialise(
        (CAETwinLoopSoundEntity *)CAEWeatherAudioEntity::m_sRainSoundR,
        6,
        0,
        1,
        this,
        0x41u,
        0x15Eu,
        50,
        50);
      CAETwinLoopSoundEntity::PlayTwinLoopSound();
      goto LABEL_45;
    }
LABEL_44:
    CAEAudioHardware::LoadSoundBank((CAEAudioHardware *)AEAudioHardware, 0x69u, 6);
    goto LABEL_45;
  }
  CAETwinLoopSoundEntity::UpdateTwinLoopSound();
  if ( CAETwinLoopSoundEntity::DoSoundsSwitchThisFrame((CAETwinLoopSoundEntity *)CAEWeatherAudioEntity::m_sRainSoundR) )
  {
    v14 = (unsigned __int16)CAEWeatherAudioEntity::m_snLastRainDropSoundID;
    CAEAudioUtility::GetRandomNumberInRange((CAEAudioUtility *)0xC0C00000, 6.0, v13);
    CAEAudioUtility::ResolveProbability((CAEAudioUtility *)0x3F000000, v15);
    v16 = v14 + 1;
    if ( (v14 + 1) << 16 > 720896 )
      v16 = 2;
    CAESound::Initialise();
    v19 = 3;
    CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v17);
    CAEWeatherAudioEntity::m_snLastRainDropSoundID = v16;
  }
LABEL_45:
  CAESound::~CAESound(v17);
}


// ============================================================

// Address: 0x3bbbb8
// Original: _ZN21CAEWeatherAudioEntity16UpdateParametersEP8CAESounds
// Demangled: CAEWeatherAudioEntity::UpdateParameters(CAESound *,short)
void __fastcall CAEWeatherAudioEntity::UpdateParameters(
        CAEWeatherAudioEntity *this,
        CAESound *a2,
        int a3,
        float (*a4)[2])
{
  float32x2_t v4; // d0
  float32x2_t v5; // d1
  float32x2_t v6; // d2
  float32x2_t v7; // d3
  float32x2_t v8; // d8
  float32x2_t v9; // d9
  int v12; // r0
  unsigned int v13; // r6
  int v14; // r4
  float v15; // s0
  unsigned int v16; // r0
  unsigned int v17; // r6
  float v18; // r0
  __int64 *v19; // r2
  float v20; // s0
  float v21; // s20
  float (*v22)[2]; // r3
  float v23; // r0
  float v24; // s16
  float v25; // r1
  int v26; // r0
  int v27; // r1
  float v28; // s4
  float v29; // s4
  unsigned __int32 v30; // s4
  float *v31; // r3
  float v32; // s18
  float v33; // s20
  float v34; // r5
  int PlayerPed; // r0
  int v36; // r8
  int v37; // r0
  int v38; // r1
  double v39; // d16
  float v40; // r6
  float v41; // s22
  float v42; // s0
  float v43; // s8
  float v44; // s4
  float v45; // s0
  float v46; // s2
  __int64 *v47; // r3
  float v48; // s24
  float v49; // s26
  float v50; // s28
  float v51; // s30
  float *v52; // r2
  float v53; // s21
  float v54; // s19
  double v55; // d16
  __int64 *v56; // r3
  float v57; // s24
  float v58; // s26
  float v59; // s28
  float v60; // s30
  float *v61; // r2
  float v62; // s21
  float v63; // s19
  double v64; // d16
  float v65; // r5
  float v66; // s6
  float v67; // s8
  float v68; // s0
  float v69; // s2
  float v70; // s18
  float v71; // s6
  float *v72; // r1
  int *v73; // r0
  float *v74; // r1
  float v75; // r5
  float v76; // s6
  float v77; // s8
  float v78; // s0
  float v79; // s2
  float v80; // s18
  float v81; // s6
  float v82; // s4
  float v83; // [sp+24h] [bp-B4h] BYREF
  float v84; // [sp+28h] [bp-B0h]
  float v85; // [sp+2Ch] [bp-ACh]
  double v86; // [sp+30h] [bp-A8h] BYREF
  float v87; // [sp+38h] [bp-A0h]
  float v88; // [sp+40h] [bp-98h] BYREF
  float v89; // [sp+44h] [bp-94h]
  float v90; // [sp+48h] [bp-90h]
  int v91; // [sp+6Ch] [bp-6Ch] BYREF
  double v92; // [sp+70h] [bp-68h] BYREF
  float v93; // [sp+78h] [bp-60h]

  if ( a3 < 1 )
    return;
  v12 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v12 - 4) < 2 )
  {
    v9.n64_u32[0] = 1.0;
    v8.n64_u32[0] = 0;
    v19 = (__int64 *)(dword_951FBC + 48);
    if ( !dword_951FBC )
      v19 = &qword_951FAC;
    v20 = *((float *)v19 + 2) / 500.0;
    if ( v20 > 1.0 || (v5.n64_u32[0] = 0, v20 >= 0.0) )
    {
      v5.n64_u32[0] = 1.0;
      if ( v20 <= 1.0 )
        v5.n64_f32[0] = *((float *)v19 + 2) / 500.0;
    }
    v21 = COERCE_FLOAT(
            CAEAudioUtility::GetPiecewiseLinear(
              (CAEAudioUtility *)v5.n64_u32[0],
              COERCE_FLOAT(3),
              (__int16)&unk_6A9DD8,
              a4));
    v23 = COERCE_FLOAT(
            CAEAudioUtility::GetPiecewiseLinear(
              (CAEAudioUtility *)v5.n64_u32[0],
              COERCE_FLOAT(3),
              (__int16)&unk_6A9DF0,
              v22));
    v5.n64_u32[0] = CWeather::WindClipped;
    v5.n64_u64[0] = vmax_f32(vmin_f32(v5, v9), v8).n64_u64[0];
    v24 = v21 + (float)((float)(v23 - v21) * v5.n64_f32[0]);
    v26 = CAEAudioUtility::ResolveProbability((CAEAudioUtility *)0x3D8F5C29, v25);
    v27 = (unsigned __int8)byte_6A9E08;
    if ( v26 )
    {
      v27 = (unsigned __int8)byte_6A9E08 ^ 1;
      byte_6A9E08 ^= 1u;
    }
    v4.n64_u32[0] = 1.0;
    v28 = 0.0;
    if ( v27 )
      v28 = 1.0;
    v5.n64_f32[0] = (float)(v24 * 1.2) * v28;
    v29 = (float)(v24 * 21.0) * v28;
    unk_94EC98 = v5.n64_u32[0];
    unk_94EC94 = LODWORD(v29);
    if ( CGame::currArea )
      goto LABEL_23;
    v6.n64_f32[0] = v29 + -33.0;
    v7.n64_u32[0] = *((_DWORD *)a2 + 5);
    if ( v7.n64_f32[0] >= v6.n64_f32[0] )
    {
      if ( v7.n64_f32[0] <= v6.n64_f32[0] )
        goto LABEL_30;
      v7.n64_f32[0] = v7.n64_f32[0] + -0.6;
      v30 = vmax_f32(v7, v6).n64_u32[0];
    }
    else
    {
      v7.n64_f32[0] = v7.n64_f32[0] + 0.6;
      v30 = vmin_f32(v7, v6).n64_u32[0];
    }
    *((_DWORD *)a2 + 5) = v30;
LABEL_30:
    if ( flt_6A9E0C >= v5.n64_f32[0] )
    {
      if ( flt_6A9E0C <= v5.n64_f32[0] )
      {
        *((float *)a2 + 7) = flt_6A9E0C;
        return;
      }
      if ( (float)(flt_6A9E0C + -0.1) > 1.0 )
        v4.n64_f32[0] = flt_6A9E0C + -0.1;
    }
    else
    {
      v4.n64_f32[0] = flt_6A9E0C + 0.1;
      v4.n64_u32[0] = vmin_f32(v4, v5).n64_u32[0];
    }
    flt_6A9E0C = v4.n64_f32[0];
    *((_DWORD *)a2 + 7) = v4.n64_u32[0];
    return;
  }
  if ( v12 == 3 )
  {
    if ( CGame::currArea )
    {
LABEL_23:
      v4.n64_u32[0] = -1035468800;
      v5.n64_u32[0] = *((_DWORD *)a2 + 5);
      if ( v5.n64_f32[0] <= -50.0 )
      {
        j_CAESound::StopSoundAndForget(a2);
        return;
      }
      v5.n64_f32[0] = v5.n64_f32[0] + -0.6;
      v4.n64_u32[0] = vmax_f32(v5, v4).n64_u32[0];
LABEL_45:
      *((_DWORD *)a2 + 5) = v4.n64_u32[0];
      return;
    }
    v31 = (float *)(dword_951FBC + 48);
    if ( !dword_951FBC )
      v31 = (float *)&qword_951FAC;
    v32 = *v31;
    v33 = v31[1];
    v8.n64_f32[0] = (float)*(char *)(CAEAudioEntity::m_pAudioEventVolumes + 144);
    v34 = *(float *)&byte_8[(_DWORD)v31];
    PlayerPed = FindPlayerPed(-1);
    v36 = PlayerPed;
    if ( PlayerPed )
    {
      v37 = *(_DWORD *)(PlayerPed + 20);
      v38 = v37 + 48;
      if ( !v37 )
        v38 = v36 + 4;
      v34 = *(float *)(v38 + 8);
    }
    if ( dword_951FBC )
    {
      v39 = *(double *)dword_951FBC;
      v93 = *(float *)(dword_951FBC + 8);
      v92 = v39;
    }
    else
    {
      v93 = 0.0;
      v40 = *(float *)&dword_951FB8;
      HIDWORD(v92) = sinf(*(float *)&dword_951FB8);
      LODWORD(v92) = cosf(v40);
    }
    v41 = v34;
    CVector::Normalise((CVector *)&v92);
    v91 = 0;
    v42 = v93 * 4.0;
    v43 = *((float *)&v92 + 1) * 4.0;
    v44 = *(float *)&v92 * 4.0;
    if ( *((float *)a2 + 9) == -0.906 && *((float *)a2 + 10) == 0.423 )
    {
      *((float *)&v86 + 1) = v33 + *((float *)&v92 + 1);
      v84 = v33 + v43;
      *(float *)&v86 = v32 + *(float *)&v92;
      v87 = v93 + v34;
      v83 = v32 + v44;
      v85 = v42 + v34;
      CWorld::ProcessLineOfSight((int)&v86, (int)&v83, (int)&v88, (int)&v91, 1, 1, 0, 1, 1, 0, 0, 0);
      v45 = 1.0;
      v46 = 0.0;
      if ( v91 && v91 != dword_94EC8C )
      {
        v47 = (__int64 *)(dword_951FBC + 48);
        if ( !dword_951FBC )
          v47 = &qword_951FAC;
        if ( fabsf(*((float *)v47 + 2) - v34) < 6.0 )
        {
          v48 = 0.0;
          v49 = 0.0;
          v50 = 0.0;
          v51 = 0.0;
          if ( v36 )
          {
            v49 = 0.0;
            v50 = 0.0;
            v51 = 0.0;
            if ( *(unsigned __int8 *)(v36 + 1157) << 31 )
            {
              v52 = *(float **)(v36 + 1424);
              v49 = 0.0;
              v50 = 0.0;
              v51 = 0.0;
              if ( v52 )
              {
                v49 = v52[18];
                v50 = v52[19];
                v51 = v52[20];
              }
            }
          }
          v53 = 0.0;
          v54 = 0.0;
          if ( (unsigned __int8)((*(_BYTE *)(v91 + 58) & 7) - 2) <= 2u )
          {
            v48 = *(float *)(v91 + 72);
            v53 = *(float *)(v91 + 76);
            v54 = *(float *)(v91 + 80);
          }
          if ( dword_951FBC )
          {
            v55 = *(double *)(dword_951FBC + 16);
            v87 = *(float *)(dword_951FBC + 24);
            v86 = v55;
          }
          else
          {
            v87 = 0.0;
            v75 = *(float *)&dword_951FB8;
            HIDWORD(v86) = cosf(*(float *)&dword_951FB8);
            LODWORD(v86) = COERCE_UNSIGNED_INT(sinf(v75)) ^ 0x80000000;
          }
          CVector::Normalise((CVector *)&v86);
          v76 = (float)((float)(v48 * *(float *)&v86) + (float)(v53 * *((float *)&v86 + 1))) + (float)(v54 * v87);
          v77 = (float)((float)(v49 * *(float *)&v86) + (float)(v50 * *((float *)&v86 + 1))) + (float)(v51 * v87);
          v78 = sqrtf(
                  (float)((float)((float)(v87 * v77) - (float)(v87 * v76))
                        * (float)((float)(v87 * v77) - (float)(v87 * v76)))
                + (float)((float)((float)((float)(*(float *)&v86 * v77) - (float)(*(float *)&v86 * v76))
                                * (float)((float)(*(float *)&v86 * v77) - (float)(*(float *)&v86 * v76)))
                        + (float)((float)((float)(*((float *)&v86 + 1) * v77) - (float)(*((float *)&v86 + 1) * v76))
                                * (float)((float)(*((float *)&v86 + 1) * v77) - (float)(*((float *)&v86 + 1) * v76)))));
          if ( v78 <= 0.35 )
          {
            v45 = 1.0;
            v46 = 0.0;
          }
          else
          {
            v79 = sqrtf(
                    (float)((float)((float)((float)(v32 + *(float *)&v92) - v88)
                                  * (float)((float)(v32 + *(float *)&v92) - v88))
                          + (float)((float)((float)(v33 + *((float *)&v92 + 1)) - v89)
                                  * (float)((float)(v33 + *((float *)&v92 + 1)) - v89)))
                  + (float)((float)((float)(v93 + v41) - v90) * (float)((float)(v93 + v41) - v90)))
                / -6.0;
            v80 = (float)(v78 + -0.35) / 0.95;
            v45 = (float)(v80 * 1.75) + 1.75;
            v46 = (float)(log10f(v80 * (float)(v79 + 1.0)) * 20.0) + 30.0;
          }
        }
      }
      v6.n64_f32[0] = v46 + v8.n64_f32[0];
      v81 = *((float *)a2 + 5);
      if ( v81 < (float)(v46 + v8.n64_f32[0]) )
      {
        v7.n64_f32[0] = v81 + 0.3;
        v72 = &flt_94EC84;
        v73 = &dword_94EC8C;
        goto LABEL_95;
      }
      if ( v81 <= v6.n64_f32[0] )
      {
        v73 = &dword_94EC8C;
        goto LABEL_96;
      }
      v5.n64_f32[0] = v81 + -0.3;
      v6.n64_f32[0] = flt_94EC84;
      if ( flt_94EC84 > 0.0 )
      {
        v7.n64_u32[0] = 1067869798;
        v7.n64_u32[0] = vmin_f32(v6, v7).n64_u32[0];
        v74 = &flt_94EC84;
        v73 = &dword_94EC8C;
        goto LABEL_101;
      }
      v73 = &dword_94EC8C;
    }
    else
    {
      *((float *)&v86 + 1) = v33 - *((float *)&v92 + 1);
      v84 = v33 - v43;
      *(float *)&v86 = v32 - *(float *)&v92;
      v87 = v34 - v93;
      v83 = v32 - v44;
      v85 = v34 - v42;
      CWorld::ProcessLineOfSight((int)&v86, (int)&v83, (int)&v88, (int)&v91, 1, 1, 0, 1, 1, 0, 0, 0);
      v45 = 1.0;
      v46 = 0.0;
      if ( v91 && v91 != dword_94EC90 )
      {
        v56 = (__int64 *)(dword_951FBC + 48);
        if ( !dword_951FBC )
          v56 = &qword_951FAC;
        if ( fabsf(*((float *)v56 + 2) - v34) < 6.0 )
        {
          v57 = 0.0;
          v58 = 0.0;
          v59 = 0.0;
          v60 = 0.0;
          if ( v36 )
          {
            v58 = 0.0;
            v59 = 0.0;
            v60 = 0.0;
            if ( *(unsigned __int8 *)(v36 + 1157) << 31 )
            {
              v61 = *(float **)(v36 + 1424);
              v58 = 0.0;
              v59 = 0.0;
              v60 = 0.0;
              if ( v61 )
              {
                v58 = v61[18];
                v59 = v61[19];
                v60 = v61[20];
              }
            }
          }
          v62 = 0.0;
          v63 = 0.0;
          if ( (unsigned __int8)((*(_BYTE *)(v91 + 58) & 7) - 2) <= 2u )
          {
            v57 = *(float *)(v91 + 72);
            v62 = *(float *)(v91 + 76);
            v63 = *(float *)(v91 + 80);
          }
          if ( dword_951FBC )
          {
            v64 = *(double *)(dword_951FBC + 16);
            v87 = *(float *)(dword_951FBC + 24);
            v86 = v64;
          }
          else
          {
            v87 = 0.0;
            v65 = *(float *)&dword_951FB8;
            HIDWORD(v86) = cosf(*(float *)&dword_951FB8);
            LODWORD(v86) = COERCE_UNSIGNED_INT(sinf(v65)) ^ 0x80000000;
          }
          CVector::Normalise((CVector *)&v86);
          v66 = (float)((float)(v57 * *(float *)&v86) + (float)(v62 * *((float *)&v86 + 1))) + (float)(v63 * v87);
          v67 = (float)((float)(v58 * *(float *)&v86) + (float)(v59 * *((float *)&v86 + 1))) + (float)(v60 * v87);
          v68 = sqrtf(
                  (float)((float)((float)(v87 * v67) - (float)(v87 * v66))
                        * (float)((float)(v87 * v67) - (float)(v87 * v66)))
                + (float)((float)((float)((float)(*(float *)&v86 * v67) - (float)(*(float *)&v86 * v66))
                                * (float)((float)(*(float *)&v86 * v67) - (float)(*(float *)&v86 * v66)))
                        + (float)((float)((float)(*((float *)&v86 + 1) * v67) - (float)(*((float *)&v86 + 1) * v66))
                                * (float)((float)(*((float *)&v86 + 1) * v67) - (float)(*((float *)&v86 + 1) * v66)))));
          if ( v68 <= 0.35 )
          {
            v45 = 1.0;
            v46 = 0.0;
          }
          else
          {
            v69 = sqrtf(
                    (float)((float)((float)((float)(v32 + *(float *)&v92) - v88)
                                  * (float)((float)(v32 + *(float *)&v92) - v88))
                          + (float)((float)((float)(v33 + *((float *)&v92 + 1)) - v89)
                                  * (float)((float)(v33 + *((float *)&v92 + 1)) - v89)))
                  + (float)((float)((float)(v93 + v41) - v90) * (float)((float)(v93 + v41) - v90)))
                / -6.0;
            v70 = (float)(v68 + -0.35) / 0.95;
            v45 = (float)(v70 * 1.75) + 1.75;
            v46 = (float)(log10f(v70 * (float)(v69 + 1.0)) * 20.0) + 30.0;
          }
        }
      }
      v6.n64_f32[0] = v46 + v8.n64_f32[0];
      v71 = *((float *)a2 + 5);
      if ( v71 < (float)(v46 + v8.n64_f32[0]) )
      {
        v7.n64_f32[0] = v71 + 0.3;
        v72 = &flt_94EC88;
        v73 = &dword_94EC90;
LABEL_95:
        v7.n64_f32[0] = v46 + v7.n64_f32[0];
        *((_DWORD *)a2 + 5) = vmin_f32(v7, v6).n64_u32[0];
        *v72 = v46;
        goto LABEL_96;
      }
      if ( v71 <= v6.n64_f32[0] )
      {
        v73 = &dword_94EC90;
LABEL_96:
        *v73 = v91;
        *((float *)a2 + 7) = v45;
        return;
      }
      v5.n64_f32[0] = v71 + -0.3;
      v6.n64_f32[0] = flt_94EC88;
      if ( flt_94EC88 > 0.0 )
      {
        v7.n64_u32[0] = 1067869798;
        v7.n64_u32[0] = vmin_f32(v6, v7).n64_u32[0];
        v74 = &flt_94EC88;
        v73 = &dword_94EC90;
LABEL_101:
        v82 = v6.n64_f32[0] - v7.n64_f32[0];
        if ( (float)(v5.n64_f32[0] - v7.n64_f32[0]) > (float)(v8.n64_f32[0] - v7.n64_f32[0]) )
          v8.n64_u32[0] = v5.n64_u32[0];
        *((float *)a2 + 5) = v8.n64_f32[0] - v7.n64_f32[0];
        *v74 = v82;
        goto LABEL_96;
      }
      v73 = &dword_94EC90;
    }
    *((_DWORD *)a2 + 5) = vmax_f32(v5, v8).n64_u32[0];
    goto LABEL_96;
  }
  if ( v12 == 1 )
  {
    v13 = CWeather::LightningDuration;
    v14 = *(char *)(CAEAudioEntity::m_pAudioEventVolumes + 141);
    v15 = log10f((float)((float)((float)(unsigned int)CWeather::LightningDuration * 0.75) / 20.0) + 0.25) * 20.0;
    v16 = 500 * (1 - v13 / 0x14);
    v9.n64_f32[0] = v15 + (float)v14;
    v17 = v16 + 100;
    if ( v16 + 100 >= a3 )
    {
      *((float *)a2 + 5) = v9.n64_f32[0] + (float)(log10f((float)a3 / (float)v17) * 20.0);
      return;
    }
    if ( v9.n64_f32[0] > 0.0 && v16 + 300 >= a3 )
    {
      v18 = powf(10.0, v9.n64_f32[0] / 20.0);
      *((float *)a2 + 5) = log10f(v18 + (float)((float)((float)(1.0 - v18) * (float)(a3 - v17)) / 200.0)) * 20.0;
      return;
    }
    v4.n64_u32[0] = 0;
    v4.n64_u32[0] = vmin_f32(v9, v4).n64_u32[0];
    goto LABEL_45;
  }
}


// ============================================================

// Address: 0x3bc684
// Original: _ZN21CAEWeatherAudioEntity13AddAudioEventEi
// Demangled: CAEWeatherAudioEntity::AddAudioEvent(int)
void __fastcall CAEWeatherAudioEntity::AddAudioEvent(CAEWeatherAudioEntity *this, int a2)
{
  bool v3; // zf
  CEntity *v4[3]; // [sp+34h] [bp-ACh] BYREF
  int v5; // [sp+40h] [bp-A0h]

  v3 = a2 == 141;
  v4[2] = 0;
  if ( a2 == 141 )
    v3 = CGame::currArea == 0;
  if ( v3 && !CCullZones::PlayerNoRain((CCullZones *)CGame::currArea) && !CCullZones::CamNoRain(0) )
  {
    if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x34u, 4) )
    {
      log10f((float)((float)((float)(unsigned int)CWeather::LightningDuration * 0.75) / 20.0) + 0.25);
      *((_BYTE *)this + 124) = (char)(*((_BYTE *)this + 124) + 1) % 3;
      CAESound::Initialise();
      v5 = 1;
      CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v4);
      CAESound::Initialise();
      v5 = 1;
      CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v4);
      CAESound::Initialise();
      v5 = 2;
      CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v4);
      CAESound::Initialise();
      v5 = 2;
      CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v4);
    }
    else
    {
      CAEAudioHardware::LoadSoundBank((CAEAudioHardware *)AEAudioHardware, 0x34u, 4);
    }
  }
  CAESound::~CAESound(v4);
}


// ============================================================

// Address: 0x46d7e8
// Original: _ZN21CAEWeatherAudioEntity16StaticInitialiseEv
// Demangled: CAEWeatherAudioEntity::StaticInitialise(void)
int __fastcall CAEWeatherAudioEntity::StaticInitialise(CAEWeatherAudioEntity *this)
{
  return sub_18B078((CAEAudioHardware *)AEAudioHardware, 0x69u, 6);
}


// ============================================================

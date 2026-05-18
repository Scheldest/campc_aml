
// Address: 0x195f98
// Original: j__ZN23CAEExplosionAudioEntity13AddAudioEventEiR7CVectorf
// Demangled: CAEExplosionAudioEntity::AddAudioEvent(int,CVector &,float)
// attributes: thunk
int __fastcall CAEExplosionAudioEntity::AddAudioEvent(CAEExplosionAudioEntity *this, int a2, CVector *a3, float a4)
{
  return _ZN23CAEExplosionAudioEntity13AddAudioEventEiR7CVectorf(this, a2, a3, a4);
}


// ============================================================

// Address: 0x3958c8
// Original: _ZN23CAEExplosionAudioEntity13AddAudioEventEiR7CVectorf
// Demangled: CAEExplosionAudioEntity::AddAudioEvent(int,CVector &,float)
void __fastcall CAEExplosionAudioEntity::AddAudioEvent(CAEExplosionAudioEntity *this, int a2, CVector *a3, float a4)
{
  CVector *v6; // r2
  float v7; // r1
  float v8; // r1
  CEntity *v9[29]; // [sp+30h] [bp-B8h] BYREF
  float v10; // [sp+A4h] [bp-44h] BYREF
  float v11; // [sp+A8h] [bp-40h]
  float v12; // [sp+ACh] [bp-3Ch]

  v9[2] = 0;
  if ( a2 == 129 )
  {
    if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x34u, 4) )
    {
      *((_BYTE *)this + 124) = (char)(*((_BYTE *)this + 124) + 1) % 3;
      CAESound::Initialise();
      CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v9);
      CAESound::Initialise();
      CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v9);
      CAESound::Initialise();
      CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v9);
      CAEAudioEnvironment::GetPositionRelativeToCamera((CAEAudioEnvironment *)&v10, a3, v6);
      CAEAudioEnvironment::GetDistanceAttenuation(
        COERCE_CAEAUDIOENVIRONMENT_(sqrtf((float)((float)(v10 * v10) + (float)(v11 * v11)) + (float)(v12 * v12)) / 12.0),
        v7);
      CAEAudioUtility::ResolveProbability((CAEAudioUtility *)0x3F000000, v8);
      CAESound::Initialise();
      CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v9);
      CAESound::Initialise();
      CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v9);
    }
    else
    {
      CAEAudioHardware::LoadSoundBank((CAEAudioHardware *)AEAudioHardware, 0x34u, 4);
    }
  }
  CAESound::~CAESound(v9);
}


// ============================================================

// Address: 0x395b48
// Original: _ZN23CAEExplosionAudioEntity16UpdateParametersEP8CAESounds
// Demangled: CAEExplosionAudioEntity::UpdateParameters(CAESound *,short)
void __fastcall CAEExplosionAudioEntity::UpdateParameters(CAEExplosionAudioEntity *this, CAESound *a2, int a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d2
  bool v5; // cc

  v5 = a3 <= 1;
  if ( a3 >= 1 )
  {
    v3.n64_u32[0] = *((_DWORD *)a2 + 5);
    v5 = v3.n64_f32[0] <= 0.0;
  }
  if ( !v5 )
  {
    v4.n64_u32[0] = 0;
    v3.n64_f32[0] = v3.n64_f32[0] + -1.0;
    *((_DWORD *)a2 + 5) = vmax_f32(v3, v4).n64_u32[0];
  }
}


// ============================================================

// Address: 0x46d7d4
// Original: _ZN23CAEExplosionAudioEntity16StaticInitialiseEv
// Demangled: CAEExplosionAudioEntity::StaticInitialise(void)
int __fastcall CAEExplosionAudioEntity::StaticInitialise(CAEExplosionAudioEntity *this)
{
  return sub_18B078((CAEAudioHardware *)AEAudioHardware, 0x34u, 4);
}


// ============================================================

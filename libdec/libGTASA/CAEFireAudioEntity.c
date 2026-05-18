
// Address: 0x18c8b0
// Original: j__ZN18CAEFireAudioEntity9TerminateEv
// Demangled: CAEFireAudioEntity::Terminate(void)
// attributes: thunk
int __fastcall CAEFireAudioEntity::Terminate(CAEFireAudioEntity *this)
{
  return _ZN18CAEFireAudioEntity9TerminateEv(this);
}


// ============================================================

// Address: 0x18fe7c
// Original: j__ZN18CAEFireAudioEntity10InitialiseEP10FxSystem_c
// Demangled: CAEFireAudioEntity::Initialise(FxSystem_c *)
// attributes: thunk
int __fastcall CAEFireAudioEntity::Initialise(CAEFireAudioEntity *this, FxSystem_c *a2)
{
  return _ZN18CAEFireAudioEntity10InitialiseEP10FxSystem_c(this, a2);
}


// ============================================================

// Address: 0x19aaac
// Original: j__ZN18CAEFireAudioEntity13AddAudioEventEiR7CVector
// Demangled: CAEFireAudioEntity::AddAudioEvent(int,CVector &)
// attributes: thunk
int __fastcall CAEFireAudioEntity::AddAudioEvent(CAEFireAudioEntity *this, int a2, CVector *a3)
{
  return _ZN18CAEFireAudioEntity13AddAudioEventEiR7CVector(this, a2, a3);
}


// ============================================================

// Address: 0x395b78
// Original: _ZN18CAEFireAudioEntity10InitialiseEP10FxSystem_c
// Demangled: CAEFireAudioEntity::Initialise(FxSystem_c *)
_DWORD *__fastcall CAEFireAudioEntity::Initialise(_DWORD *this, FxSystem_c *a2)
{
  this[31] = 0;
  this[32] = 0;
  this[33] = a2;
  return this;
}


// ============================================================

// Address: 0x395b84
// Original: _ZN18CAEFireAudioEntity9TerminateEv
// Demangled: CAEFireAudioEntity::Terminate(void)
int __fastcall CAEFireAudioEntity::Terminate(CAEFireAudioEntity *this)
{
  int result; // r0

  CAESoundManager::CancelSoundsOwnedByAudioEntity((CAESoundManager *)&AESoundManager, this, 1u);
  result = 0;
  *((_DWORD *)this + 33) = 0;
  return result;
}


// ============================================================

// Address: 0x395ba4
// Original: _ZN18CAEFireAudioEntity13AddAudioEventEiR7CVector
// Demangled: CAEFireAudioEntity::AddAudioEvent(int,CVector &)
CAEFireAudioEntity *__fastcall CAEFireAudioEntity::AddAudioEvent(CAEFireAudioEntity *this, int a2, CVector *a3)
{
  int v3; // r1
  bool v4; // zf

  if ( (unsigned int)(a2 - 138) >= 3 )
  {
    if ( a2 == 137 )
    {
      if ( *((_DWORD *)this + 33) )
      {
        v3 = *((_DWORD *)this + 31);
        v4 = v3 == 0;
        if ( !v3 )
          v4 = *((_DWORD *)this + 32) == 0;
        if ( v4 )
          return (CAEFireAudioEntity *)CAEFireAudioEntity::PlayWaterSounds(this, 137, a3);
      }
    }
    else if ( *((_DWORD *)this + 33) && !*((_DWORD *)this + 31) )
    {
      return (CAEFireAudioEntity *)CAEFireAudioEntity::PlayFireSounds(this, a2, a3);
    }
  }
  return this;
}


// ============================================================

// Address: 0x395bdc
// Original: _ZN18CAEFireAudioEntity15PlayWaterSoundsEiR7CVector
// Demangled: CAEFireAudioEntity::PlayWaterSounds(int,CVector &)
void __fastcall CAEFireAudioEntity::PlayWaterSounds(CAEFireAudioEntity *this, int a2, CVector *a3)
{
  CEntity *v4[3]; // [sp+2Ch] [bp-9Ch] BYREF
  int v5; // [sp+38h] [bp-90h]
  int v6; // [sp+4Ch] [bp-7Ch]

  v4[2] = 0;
  CAESound::Initialise();
  v5 = 3;
  v6 = 1031127696;
  *((_DWORD *)this + 31) = CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v4);
  CAESound::Initialise();
  v5 = 4;
  v6 = 1031127696;
  *((_DWORD *)this + 32) = CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v4);
  CAESound::~CAESound(v4);
}


// ============================================================

// Address: 0x395cdc
// Original: _ZN18CAEFireAudioEntity14PlayFireSoundsEiR7CVector
// Demangled: CAEFireAudioEntity::PlayFireSounds(int,CVector &)
void __fastcall CAEFireAudioEntity::PlayFireSounds(CAEFireAudioEntity *this, int a2, CVector *a3)
{
  float v4; // s16
  CEntity *v5[39]; // [sp+2Ch] [bp-9Ch] BYREF

  v5[2] = 0;
  CAEFireAudioEntity::m_snLastFireFrequencyIndex = (char)(CAEFireAudioEntity::m_snLastFireFrequencyIndex + 1) % 5;
  v4 = (float)*(char *)(CAEAudioEntity::m_pAudioEventVolumes + a2);
  CAESound::Initialise();
  *((_DWORD *)this + 31) = CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v5);
  if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x8Au, 19) )
  {
    CAESound::Initialise();
    *(float *)&v5[4] = (float)(v4 + 3.0) + 0.0;
    v5[3] = (CEntity *)(&stderr + 1);
    CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v5);
  }
  else
  {
    CAEAudioHardware::LoadSoundBank((CAEAudioHardware *)AEAudioHardware, 0x8Au, 19);
  }
  CAESound::~CAESound(v5);
}


// ============================================================

// Address: 0x395e54
// Original: _ZN18CAEFireAudioEntity16UpdateParametersEP8CAESounds
// Demangled: CAEFireAudioEntity::UpdateParameters(CAESound *,short)
int __fastcall CAEFireAudioEntity::UpdateParameters(CAEFireAudioEntity *this, CAESound *a2, int a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d1
  int result; // r0
  float v8; // s0
  float v9; // s2

  if ( a3 < 1 )
  {
    result = a3 + 1;
    if ( a3 == -1 )
    {
      if ( *((CAESound **)this + 31) == a2 )
      {
        result = 0;
        *((_DWORD *)this + 31) = 0;
      }
      else
      {
        result = *((_DWORD *)this + 32);
        if ( (CAESound *)result == a2 )
        {
          result = 0;
          *((_DWORD *)this + 32) = 0;
        }
      }
    }
  }
  else
  {
    if ( *((_DWORD *)this + 33) )
    {
      FxSystem_c::GetCompositeMatrix();
      ((void (__fastcall *)(CAESound *))CAESound::SetPosition)(a2);
    }
    result = *((_DWORD *)a2 + 3) - 1;
    switch ( *((_DWORD *)a2 + 3) )
    {
      case 1:
        v3.n64_u32[0] = *((_DWORD *)a2 + 4);
        v4.n64_u32[0] = *((_DWORD *)a2 + 5);
        if ( v4.n64_f32[0] >= v3.n64_f32[0] )
        {
          result = 2;
          *((_DWORD *)a2 + 3) = 2;
        }
        else
        {
          v4.n64_f32[0] = v4.n64_f32[0] + 2.0;
          *((_DWORD *)a2 + 5) = vmin_f32(v4, v3).n64_u32[0];
        }
        break;
      case 2:
        v8 = *((float *)a2 + 5);
        if ( v8 > -30.0 )
        {
          v9 = -0.75;
          goto LABEL_18;
        }
        result = CAESound::StopSoundAndForget(a2);
        break;
      case 3:
        result = *((_DWORD *)this + 33);
        if ( result )
        {
          result = FxSystem_c::GetPlayStatus((FxSystem_c *)result);
          if ( result == 1 )
          {
            v8 = *((float *)a2 + 5);
            if ( v8 > -100.0 )
            {
              v9 = -1.0;
LABEL_18:
              *((float *)a2 + 5) = v8 + v9;
            }
          }
        }
        break;
      case 4:
        result = *((_DWORD *)this + 33);
        if ( result )
        {
          result = FxSystem_c::GetPlayStatus((FxSystem_c *)result);
          if ( result == 1 )
          {
            result = -1027080192;
            *((_DWORD *)a2 + 5) = -1027080192;
          }
        }
        break;
      default:
        return result;
    }
  }
  return result;
}


// ============================================================

// Address: 0x46d810
// Original: _ZN18CAEFireAudioEntity16StaticInitialiseEv
// Demangled: CAEFireAudioEntity::StaticInitialise(void)
int __fastcall CAEFireAudioEntity::StaticInitialise(CAEFireAudioEntity *this)
{
  return sub_18B078((CAEAudioHardware *)AEAudioHardware, 0x34u, 4);
}


// ============================================================

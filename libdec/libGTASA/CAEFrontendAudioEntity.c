
// Address: 0x18aebc
// Original: j__ZN22CAEFrontendAudioEntity10InitialiseEv
// Demangled: CAEFrontendAudioEntity::Initialise(void)
// attributes: thunk
int __fastcall CAEFrontendAudioEntity::Initialise(CAEFrontendAudioEntity *this)
{
  return _ZN22CAEFrontendAudioEntity10InitialiseEv(this);
}


// ============================================================

// Address: 0x18eb18
// Original: j__ZN22CAEFrontendAudioEntity19IsLoadingTuneActiveEv
// Demangled: CAEFrontendAudioEntity::IsLoadingTuneActive(void)
// attributes: thunk
int __fastcall CAEFrontendAudioEntity::IsLoadingTuneActive(CAEFrontendAudioEntity *this)
{
  return _ZN22CAEFrontendAudioEntity19IsLoadingTuneActiveEv(this);
}


// ============================================================

// Address: 0x191484
// Original: j__ZN22CAEFrontendAudioEntity5ResetEv
// Demangled: CAEFrontendAudioEntity::Reset(void)
// attributes: thunk
int __fastcall CAEFrontendAudioEntity::Reset(CAEFrontendAudioEntity *this)
{
  return _ZN22CAEFrontendAudioEntity5ResetEv(this);
}


// ============================================================

// Address: 0x197920
// Original: j__ZN22CAEFrontendAudioEntity13AddAudioEventEiff
// Demangled: CAEFrontendAudioEntity::AddAudioEvent(int,float,float)
// attributes: thunk
int __fastcall CAEFrontendAudioEntity::AddAudioEvent(CAEFrontendAudioEntity *this, int a2, float a3, float a4)
{
  return _ZN22CAEFrontendAudioEntity13AddAudioEventEiff(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19fc54
// Original: j__ZN22CAEFrontendAudioEntity22IsRadioTuneSoundActiveEv
// Demangled: CAEFrontendAudioEntity::IsRadioTuneSoundActive(void)
// attributes: thunk
int __fastcall CAEFrontendAudioEntity::IsRadioTuneSoundActive(CAEFrontendAudioEntity *this)
{
  return _ZN22CAEFrontendAudioEntity22IsRadioTuneSoundActiveEv(this);
}


// ============================================================

// Address: 0x395f4c
// Original: _ZN22CAEFrontendAudioEntity9TerminateEv
// Demangled: CAEFrontendAudioEntity::Terminate(void)
int __fastcall CAEFrontendAudioEntity::Terminate(CAEFrontendAudioEntity *this)
{
  return j_CAESoundManager::CancelSoundsOwnedByAudioEntity((CAESoundManager *)&AESoundManager, this, 0);
}


// ============================================================

// Address: 0x395f60
// Original: _ZN22CAEFrontendAudioEntity5ResetEv
// Demangled: CAEFrontendAudioEntity::Reset(void)
int __fastcall CAEFrontendAudioEntity::Reset(CAEFrontendAudioEntity *this)
{
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *(_DWORD *)((char *)this + 126) = 0xFFFF;
  return j_CAESoundManager::CancelSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 47, this);
}


// ============================================================

// Address: 0x395f84
// Original: _ZN22CAEFrontendAudioEntity19IsLoadingTuneActiveEv
// Demangled: CAEFrontendAudioEntity::IsLoadingTuneActive(void)
int __fastcall CAEFrontendAudioEntity::IsLoadingTuneActive(CAEFrontendAudioEntity *this)
{
  return (unsigned __int8)CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity(
                            (CAESoundManager *)&AESoundManager,
                            50,
                            this);
}


// ============================================================

// Address: 0x395fa0
// Original: _ZN22CAEFrontendAudioEntity13AddAudioEventEiff
// Demangled: CAEFrontendAudioEntity::AddAudioEvent(int,float,float)
void __fastcall CAEFrontendAudioEntity::AddAudioEvent(CAEFrontendAudioEntity *this, int a2, float a3, float a4)
{
  __int16 v6; // r9
  __int16 v7; // r1
  float v8; // r1
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // r2
  signed __int16 v13; // r1
  int v14; // r0
  int v15; // r4
  __int16 v16; // r1
  __int16 v17; // r1
  int v18; // r1
  CEntity *v19[3]; // [sp+2Ch] [bp-ACh] BYREF
  int v20; // [sp+38h] [bp-A0h]
  float v21; // [sp+48h] [bp-90h]
  int v22; // [sp+4Ch] [bp-8Ch]
  __int16 v23; // [sp+82h] [bp-56h]

  v19[2] = 0;
  switch ( a2 )
  {
    case 0:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
        goto LABEL_78;
      goto LABEL_101;
    case 1:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Cu, 1) )
        goto LABEL_78;
      goto LABEL_101;
    case 2:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Cu, 1) )
        goto LABEL_78;
      goto LABEL_101;
    case 3:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Cu, 1) )
      {
        CAESound::Initialise();
        v6 = 4379;
        v23 = 4379;
        v21 = a4;
        CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v19);
        goto LABEL_79;
      }
      goto LABEL_101;
    case 4:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Cu, 1) )
        goto LABEL_78;
      goto LABEL_101;
    case 5:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Cu, 1) )
      {
        CAESound::Initialise();
        v7 = 283;
        goto LABEL_74;
      }
      goto LABEL_101;
    case 6:
    case 18:
    case 19:
    case 20:
    case 40:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0)
        && CTimer::m_FrameCounter >= (unsigned int)(*((_DWORD *)this + 33) + 5) )
      {
        goto LABEL_4;
      }
      goto LABEL_101;
    case 7:
    case 8:
    case 9:
    case 10:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0)
        && CTimer::m_FrameCounter >= (unsigned int)(*((_DWORD *)this + 33) + 5) )
      {
LABEL_4:
        *((_DWORD *)this + 33) = CTimer::m_FrameCounter;
        CAESound::Initialise();
        v6 = 4379;
        v23 = 4379;
        v21 = a4;
        CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v19);
        goto LABEL_79;
      }
      goto LABEL_101;
    case 11:
    case 32:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
        goto LABEL_78;
      goto LABEL_101;
    case 12:
    case 13:
    case 43:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0)
        && CTimer::m_FrameCounter >= (unsigned int)(*((_DWORD *)this + 34) + 5) )
      {
        *((_DWORD *)this + 34) = CTimer::m_FrameCounter;
        CAESound::Initialise();
        v6 = 5403;
        v23 = 5403;
        v21 = a4;
        CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v19);
        goto LABEL_79;
      }
      goto LABEL_101;
    case 14:
    case 15:
    case 17:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0)
        && CTimer::m_FrameCounter >= (unsigned int)(*((_DWORD *)this + 33) + 5) )
      {
        *((_DWORD *)this + 33) = CTimer::m_FrameCounter;
        CAESound::Initialise();
        v23 = 4379;
        CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v19);
        CAESound::Initialise();
        v23 = 4379;
        goto LABEL_100;
      }
      goto LABEL_101;
    case 16:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x8Fu, 5) )
      {
        CAEAudioUtility::ResolveProbability((CAEAudioUtility *)0x3F000000, v8);
        CAESound::Initialise();
        v20 = 16;
        v23 = 4367;
        CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v19);
        CAESound::Initialise();
        v20 = 16;
        v23 = 4367;
        CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v19);
        *((_DWORD *)this + 36) = CTimer::m_snTimeInMilliseconds;
      }
      goto LABEL_101;
    case 27:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, *((_WORD *)this + 65), 42)
        && CTimer::m_FrameCounter >= (unsigned int)(*((_DWORD *)this + 35) + 5) )
      {
        if ( *((__int16 *)this + 64) < 11 )
        {
          *((_DWORD *)this + 35) = CTimer::m_FrameCounter;
          CAEAudioUtility::GetRandomNumberInRange(0, 2, v9);
          CAESound::Initialise();
          v23 = 7;
          v22 = 1023410176;
          v18 = 27;
          goto LABEL_111;
        }
        if ( !CAESoundManager::AreSoundsPlayingInBankSlot((CAESoundManager *)&AESoundManager, 42) )
          goto LABEL_49;
      }
      goto LABEL_101;
    case 28:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, *((_WORD *)this + 65), 42)
        && CTimer::m_FrameCounter >= (unsigned int)(*((_DWORD *)this + 35) + 5) )
      {
        if ( *((__int16 *)this + 64) < 11 )
        {
          *((_DWORD *)this + 35) = CTimer::m_FrameCounter;
          CAEAudioUtility::GetRandomNumberInRange(0, 2, v10);
          CAESound::Initialise();
          v23 = 7;
          v22 = 1023410176;
          v18 = 28;
          goto LABEL_111;
        }
        if ( !CAESoundManager::AreSoundsPlayingInBankSlot((CAESoundManager *)&AESoundManager, 42) )
          goto LABEL_49;
      }
      goto LABEL_101;
    case 29:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, *((_WORD *)this + 65), 42)
        && CTimer::m_FrameCounter >= (unsigned int)(*((_DWORD *)this + 35) + 5) )
      {
        if ( *((__int16 *)this + 64) < 11 )
        {
          *((_DWORD *)this + 35) = CTimer::m_FrameCounter;
          CAEAudioUtility::GetRandomNumberInRange(0, 2, v11);
          CAESound::Initialise();
          v23 = 7;
          v22 = 1023410176;
          v18 = 29;
          goto LABEL_111;
        }
        if ( !CAESoundManager::AreSoundsPlayingInBankSlot((CAESoundManager *)&AESoundManager, 42) )
          goto LABEL_49;
      }
      goto LABEL_101;
    case 30:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, *((_WORD *)this + 65), 42)
        && CTimer::m_FrameCounter >= (unsigned int)(*((_DWORD *)this + 35) + 5) )
      {
        if ( *((__int16 *)this + 64) < 11 )
        {
          *((_DWORD *)this + 35) = CTimer::m_FrameCounter;
          CAEAudioUtility::GetRandomNumberInRange(0, 2, v12);
          CAESound::Initialise();
          v23 = 7;
          v22 = 1023410176;
          v18 = 30;
LABEL_111:
          v20 = v18;
          CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v19);
          ++*((_WORD *)this + 64);
        }
        else if ( !CAESoundManager::AreSoundsPlayingInBankSlot((CAESoundManager *)&AESoundManager, 42) )
        {
LABEL_49:
          v13 = *((_WORD *)this + 65) + 1;
          if ( v13 > 31 )
            v13 = 28;
          *((_WORD *)this + 65) = v13;
          CAEAudioHardware::LoadSoundBank((CAEAudioHardware *)AEAudioHardware, v13, 42);
          *((_WORD *)this + 64) = 0;
        }
      }
      goto LABEL_101;
    case 31:
      if ( !*((_BYTE *)this + 124) && CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
      {
        CAESound::Initialise();
        v23 = 287;
        v21 = a4;
        v14 = CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v19);
        *((_DWORD *)this + 38) = v14;
        *((_BYTE *)this + 124) = v14 != 0;
      }
      goto LABEL_101;
    case 33:
      if ( CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 33, this) )
        goto LABEL_58;
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
      {
        CAESound::Initialise();
        v23 = 4367;
        v21 = a4;
        v20 = 33;
        CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v19);
        CAESound::Initialise();
        v23 = 4367;
        v21 = a4;
        v20 = 33;
        CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v19);
LABEL_58:
        *((_DWORD *)this + 37) = CTimer::m_snTimeInMilliseconds;
      }
      goto LABEL_101;
    case 34:
      if ( !CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
        goto LABEL_101;
      if ( ((unsigned __int8)CTimer::m_UserPause | (unsigned __int8)CTimer::m_CodePause) << 24 )
      {
        if ( *((_WORD *)this + 230) )
          goto LABEL_101;
        CAETwinLoopSoundEntity::Initialise(
          (CAEFrontendAudioEntity *)((char *)this + 324),
          0,
          2,
          1,
          this,
          0xC8u,
          0x28Au,
          -1,
          -1);
      }
      else
      {
        if ( *((_WORD *)this + 146) )
          goto LABEL_101;
        CAETwinLoopSoundEntity::Initialise(
          (CAEFrontendAudioEntity *)((char *)this + 156),
          0,
          2,
          1,
          this,
          0xC8u,
          0x28Au,
          -1,
          -1);
      }
      CAETwinLoopSoundEntity::PlayTwinLoopSound();
LABEL_101:
      CAESound::~CAESound(v19);
      return;
    case 35:
      if ( ((unsigned __int8)CTimer::m_UserPause | (unsigned __int8)CTimer::m_CodePause) << 24 )
        goto LABEL_64;
      if ( *((_WORD *)this + 146) )
        CAETwinLoopSoundEntity::StopSoundAndForget((CAEFrontendAudioEntity *)((char *)this + 156));
      goto LABEL_101;
    case 36:
LABEL_64:
      if ( *((_WORD *)this + 230) )
        CAETwinLoopSoundEntity::StopSoundAndForget((CAEFrontendAudioEntity *)((char *)this + 324));
      goto LABEL_101;
    case 37:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
        goto LABEL_67;
      goto LABEL_101;
    case 38:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
      {
LABEL_67:
        CAESound::Initialise();
        goto LABEL_82;
      }
      goto LABEL_101;
    case 41:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
        goto LABEL_73;
      goto LABEL_101;
    case 42:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
      {
LABEL_73:
        CAESound::Initialise();
        v7 = 3;
LABEL_74:
        v23 = v7;
        v21 = a4;
        goto LABEL_100;
      }
      goto LABEL_101;
    case 44:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
        goto LABEL_78;
      goto LABEL_101;
    case 45:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
      {
LABEL_78:
        CAESound::Initialise();
        v6 = 5403;
        v23 = 5403;
        v21 = a4;
        CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v19);
LABEL_79:
        CAESound::Initialise();
        v23 = v6;
        v21 = a4;
        goto LABEL_100;
      }
      goto LABEL_101;
    case 46:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
      {
        CAESound::Initialise();
        v22 = 1030805573;
LABEL_82:
        v23 = 283;
        goto LABEL_100;
      }
      goto LABEL_101;
    case 47:
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
      {
        v15 = 47;
        if ( !CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 47, this) )
          goto LABEL_89;
      }
      goto LABEL_101;
    case 48:
      v16 = 47;
      goto LABEL_95;
    case 49:
      if ( !CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
        goto LABEL_101;
      v15 = 49;
      if ( CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 49, this) )
        goto LABEL_101;
LABEL_89:
      CAESound::Initialise();
      v17 = 259;
      goto LABEL_99;
    case 50:
      if ( !CAEAudioHardware::IsSoundLoaded((CAEAudioHardware *)AEAudioHardware, 0x52u, 2 * *((char *)this + 125), 2)
        || !CAEAudioHardware::IsSoundLoaded(
              (CAEAudioHardware *)AEAudioHardware,
              0x52u,
              (2 * *((char *)this + 125)) | 1,
              5)
        || CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 50, this) )
      {
        goto LABEL_101;
      }
      CAESound::Initialise();
      v23 = 4379;
      v21 = a4;
      v20 = 50;
      CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v19);
      CAESound::Initialise();
      v23 = 4379;
      v21 = a4;
      v20 = 50;
      goto LABEL_100;
    case 51:
      v16 = 50;
LABEL_95:
      CAESoundManager::CancelSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, v16, this);
      goto LABEL_101;
    case 101:
      if ( !CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0) )
        goto LABEL_101;
      v15 = 101;
      if ( CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 101, this) )
        goto LABEL_101;
      CAESound::Initialise();
      v17 = 257;
LABEL_99:
      v23 = v17;
      v21 = a4;
      v20 = v15;
LABEL_100:
      CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v19);
      goto LABEL_101;
    default:
      goto LABEL_101;
  }
}


// ============================================================

// Address: 0x3972d0
// Original: _ZN22CAEFrontendAudioEntity16UpdateParametersEP8CAESounds
// Demangled: CAEFrontendAudioEntity::UpdateParameters(CAESound *,short)
unsigned int __fastcall CAEFrontendAudioEntity::UpdateParameters(unsigned int this, CAESound *a2, int a3)
{
  if ( a2 )
  {
    switch ( *((_DWORD *)a2 + 3) )
    {
      case 0x10:
        if ( a3 < 1 )
          goto LABEL_18;
        this = *(_DWORD *)(this + 144) + 1900;
        if ( CTimer::m_snTimeInMilliseconds > this )
          goto LABEL_5;
        return this;
      case 0x1B:
        if ( (unsigned __int16)a3 > 0x15Eu )
          goto LABEL_18;
        goto LABEL_14;
      case 0x1C:
        if ( (unsigned __int16)a3 <= 0x15Eu )
          goto LABEL_14;
        goto LABEL_18;
      case 0x1D:
        if ( (unsigned __int16)a3 <= 0x15Eu )
          goto LABEL_14;
        goto LABEL_18;
      case 0x1E:
        if ( (unsigned __int16)a3 > 0x15Eu )
          goto LABEL_18;
LABEL_14:
        this = j_CAESound::SetPosition();
        break;
      case 0x21:
        if ( a3 < 1 )
          goto LABEL_18;
        this = *(_DWORD *)(this + 148) + 100;
        if ( CTimer::m_snTimeInMilliseconds > this )
LABEL_5:
          this = j_CAESound::StopSoundAndForget(a2);
        break;
      default:
LABEL_18:
        if ( a3 == -1 && *(CAESound **)(this + 152) == a2 )
        {
          *(_BYTE *)(this + 124) = 0;
          *(_DWORD *)(this + 152) = 0;
        }
        break;
    }
  }
  return this;
}


// ============================================================

// Address: 0x397400
// Original: _ZN22CAEFrontendAudioEntity22IsRadioTuneSoundActiveEv
// Demangled: CAEFrontendAudioEntity::IsRadioTuneSoundActive(void)
int __fastcall CAEFrontendAudioEntity::IsRadioTuneSoundActive(CAEFrontendAudioEntity *this)
{
  char *v1; // r1

  v1 = (char *)this + 324;
  if ( !(((unsigned __int8)CTimer::m_UserPause | (unsigned __int8)CTimer::m_CodePause) << 24) )
    v1 = (char *)this + 156;
  return (unsigned __int8)v1[136];
}


// ============================================================

// Address: 0x46d40c
// Original: _ZN22CAEFrontendAudioEntity10InitialiseEv
// Demangled: CAEFrontendAudioEntity::Initialise(void)
int __fastcall CAEFrontendAudioEntity::Initialise(CAEFrontendAudioEntity *this)
{
  int v2; // r2
  char RandomNumberInRange; // r0

  *((_WORD *)this + 65) = 28;
  *(_DWORD *)((char *)this + 126) = 0xFFFF;
  *((_BYTE *)this + 124) = 0;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  CAEAudioHardware::LoadSoundBank((CAEAudioHardware *)AEAudioHardware, 0x3Cu, 1);
  CAEAudioHardware::LoadSoundBank((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0);
  CAEAudioHardware::LoadSoundBank((CAEAudioHardware *)AEAudioHardware, 0x1Cu, 42);
  RandomNumberInRange = CAEAudioUtility::GetRandomNumberInRange(0, 3, v2);
  *((_BYTE *)this + 125) = RandomNumberInRange;
  CAEAudioHardware::LoadSound((CAEAudioHardware *)AEAudioHardware, 0x52u, 2 * RandomNumberInRange, 2);
  return sub_193458((CAEAudioHardware *)AEAudioHardware, 0x52u, (2 * *((char *)this + 125)) | 1, 5);
}


// ============================================================


// Address: 0x18e328
// Original: j__ZN18CAEDoorAudioEntity13AddAudioEventEiR7CVectorff
// Demangled: CAEDoorAudioEntity::AddAudioEvent(int,CVector &,float,float)
// attributes: thunk
int __fastcall CAEDoorAudioEntity::AddAudioEvent(CAEDoorAudioEntity *this, int a2, CVector *a3, float a4, float a5)
{
  return _ZN18CAEDoorAudioEntity13AddAudioEventEiR7CVectorff(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x190b78
// Original: j__ZN18CAEDoorAudioEntity5ResetEv
// Demangled: CAEDoorAudioEntity::Reset(void)
// attributes: thunk
int __fastcall CAEDoorAudioEntity::Reset(CAEDoorAudioEntity *this)
{
  return _ZN18CAEDoorAudioEntity5ResetEv(this);
}


// ============================================================

// Address: 0x196b50
// Original: j__ZN18CAEDoorAudioEntity13PlayDoorSoundEsiR7CVectorff
// Demangled: CAEDoorAudioEntity::PlayDoorSound(short,int,CVector &,float,float)
// attributes: thunk
int __fastcall CAEDoorAudioEntity::PlayDoorSound(
        CAEDoorAudioEntity *this,
        __int16 a2,
        int a3,
        CVector *a4,
        float a5,
        float a6)
{
  return _ZN18CAEDoorAudioEntity13PlayDoorSoundEsiR7CVectorff(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19d410
// Original: j__ZN18CAEDoorAudioEntity13AddAudioEventEiP9CPhysical
// Demangled: CAEDoorAudioEntity::AddAudioEvent(int,CPhysical *)
// attributes: thunk
int __fastcall CAEDoorAudioEntity::AddAudioEvent(CAEDoorAudioEntity *this, int a2, CPhysical *a3)
{
  return _ZN18CAEDoorAudioEntity13AddAudioEventEiP9CPhysical(this, a2, a3);
}


// ============================================================

// Address: 0x395458
// Original: _ZN18CAEDoorAudioEntity5ResetEv
// Demangled: CAEDoorAudioEntity::Reset(void)
int __fastcall CAEDoorAudioEntity::Reset(CAEDoorAudioEntity *this)
{
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  return j_CAESoundManager::CancelSoundsOwnedByAudioEntity((CAESoundManager *)&AESoundManager, this, 1u);
}


// ============================================================

// Address: 0x395470
// Original: _ZN18CAEDoorAudioEntity13AddAudioEventEiR7CVectorff
// Demangled: CAEDoorAudioEntity::AddAudioEvent(int,CVector &,float,float)
int __fastcall CAEDoorAudioEntity::AddAudioEvent(CAEDoorAudioEntity *this, int a2, CVector *a3, float a4, float a5)
{
  int result; // r0
  unsigned int v9; // r6

  result = a2 - 159;
  v9 = CTimer::m_snTimeInMilliseconds;
  switch ( a2 )
  {
    case 159:
      result = CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 159, this);
      if ( !result )
      {
        CAESoundManager::CancelSoundsOwnedByAudioEntity((CAESoundManager *)&AESoundManager, this, 1u);
        if ( v9 > *((_DWORD *)this + 31) + 300 )
          CAEDoorAudioEntity::PlayDoorSound(this, 2, 159, a3, a4, 0.79);
        result = CAEDoorAudioEntity::PlayDoorSound(this, 0, 159, a3, a4, a5);
      }
      goto LABEL_16;
    case 160:
      result = CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 160, this);
      if ( !result )
      {
        result = CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity(
                   (CAESoundManager *)&AESoundManager,
                   159,
                   this);
        if ( result )
        {
          CAESoundManager::CancelSoundsOwnedByAudioEntity((CAESoundManager *)&AESoundManager, this, 1u);
          result = CAEDoorAudioEntity::PlayDoorSound(this, 2, 160, a3, a4, 1.0);
        }
      }
      goto LABEL_16;
    case 161:
      result = CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 161, this);
      if ( !result )
      {
        if ( v9 > *((_DWORD *)this + 31) + 300 )
          CAEDoorAudioEntity::PlayDoorSound(this, 2, 161, a3, a4, 1.0);
        result = CAEDoorAudioEntity::PlayDoorSound(this, 0, 161, a3, a4, a5);
      }
      goto LABEL_16;
    case 162:
      result = CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 162, this);
      if ( !result )
      {
        result = CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity(
                   (CAESoundManager *)&AESoundManager,
                   161,
                   this);
        if ( result )
        {
          CAESoundManager::CancelSoundsOwnedByAudioEntity((CAESoundManager *)&AESoundManager, this, 1u);
          result = CAEDoorAudioEntity::PlayDoorSound(this, 2, 162, a3, a4, 0.79);
        }
      }
LABEL_16:
      *((_DWORD *)this + 31) = v9;
      break;
    default:
      return result;
  }
  return result;
}


// ============================================================

// Address: 0x3955fc
// Original: _ZN18CAEDoorAudioEntity13PlayDoorSoundEsiR7CVectorff
// Demangled: CAEDoorAudioEntity::PlayDoorSound(short,int,CVector &,float,float)
void __fastcall CAEDoorAudioEntity::PlayDoorSound(
        CAEDoorAudioEntity *this,
        __int16 a2,
        CEntity *a3,
        CVector *a4,
        float a5,
        float a6)
{
  unsigned __int16 v8; // r5
  CEntity *v9[35]; // [sp+2Ch] [bp-8Ch] BYREF

  v9[2] = 0;
  if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x33u, 31) )
  {
    v8 = *(float *)a4 == -1000.0 && *((float *)a4 + 1) == -1000.0 || *(float *)a4 == 0.0 && *((float *)a4 + 1) == 0.0;
    CAESound::Initialise();
    CAESound::SetIndividualEnvironment((CAESound *)v9, 1u, v8);
    v9[3] = a3;
    CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v9);
  }
  else
  {
    CAEAudioHardware::LoadSoundBank((CAEAudioHardware *)AEAudioHardware, 0x33u, 31);
  }
  CAESound::~CAESound(v9);
}


// ============================================================

// Address: 0x395734
// Original: _ZN18CAEDoorAudioEntity13AddAudioEventEiP9CPhysical
// Demangled: CAEDoorAudioEntity::AddAudioEvent(int,CPhysical *)
CAEAudioEntity *__fastcall CAEDoorAudioEntity::AddAudioEvent(CAEAudioEntity *this, int a2, CPhysical *a3)
{
  CAEDoorAudioEntity *v4; // r4
  unsigned int v5; // r6
  int v6; // r0
  CVector *v7; // r3

  v4 = this;
  if ( a2 == 163 )
  {
    v5 = CTimer::m_snTimeInMilliseconds;
    this = (CAEAudioEntity *)CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity(
                               (CAESoundManager *)&AESoundManager,
                               163,
                               this);
    if ( !this )
    {
      this = (CAEAudioEntity *)(*((_DWORD *)v4 + 32) + 4000);
      if ( v5 > (unsigned int)this )
      {
        v6 = *((_DWORD *)a3 + 5);
        v7 = (CVector *)(v6 + 48);
        if ( !v6 )
          v7 = (CPhysical *)((char *)a3 + 4);
        this = (CAEAudioEntity *)CAEDoorAudioEntity::PlayDoorSound(v4, 1, 163, v7, 0.0, 1.0);
        *((_DWORD *)v4 + 32) = v5;
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x3957a0
// Original: _ZN18CAEDoorAudioEntity16UpdateParametersEP8CAESounds
// Demangled: CAEDoorAudioEntity::UpdateParameters(CAESound *,short)
int __fastcall CAEDoorAudioEntity::UpdateParameters(int this, CAESound *a2, int a3)
{
  CAEAudioEntity *v4; // r5
  int v5; // r6
  __int16 v6; // r1

  v4 = (CAEAudioEntity *)this;
  if ( a3 >= 1 )
  {
    v5 = CTimer::m_snTimeInMilliseconds;
    this = *((_DWORD *)a2 + 3);
    if ( this == 161 )
    {
      if ( CTimer::m_snTimeInMilliseconds > (unsigned int)(*((_DWORD *)v4 + 31) + 10000) )
      {
        if ( !CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 162, v4)
          && CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 161, v4) )
        {
          CAESoundManager::CancelSoundsOwnedByAudioEntity((CAESoundManager *)&AESoundManager, v4, 1u);
          CAEDoorAudioEntity::PlayDoorSound(v4, 2, 162, (CAESound *)((char *)a2 + 36), 0.0, 0.79);
        }
        goto LABEL_12;
      }
      v6 = 162;
    }
    else
    {
      if ( this != 159 )
        return this;
      if ( CTimer::m_snTimeInMilliseconds > (unsigned int)(*((_DWORD *)v4 + 31) + 10000) )
      {
        if ( !CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 160, v4) )
        {
          if ( CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, 159, v4) )
          {
            CAESoundManager::CancelSoundsOwnedByAudioEntity((CAESoundManager *)&AESoundManager, v4, 1u);
            CAEDoorAudioEntity::PlayDoorSound(v4, 2, 160, (CAESound *)((char *)a2 + 36), 0.0, 1.0);
          }
        }
LABEL_12:
        *((_DWORD *)v4 + 31) = v5;
        return j_CAESound::StopSoundAndForget(a2);
      }
      v6 = 160;
    }
    this = CAESoundManager::AreSoundsOfThisEventPlayingForThisEntity((CAESoundManager *)&AESoundManager, v6, v4);
    if ( !this )
      return this;
    return j_CAESound::StopSoundAndForget(a2);
  }
  return this;
}


// ============================================================

// Address: 0x46d7fc
// Original: _ZN18CAEDoorAudioEntity16StaticInitialiseEv
// Demangled: CAEDoorAudioEntity::StaticInitialise(void)
int __fastcall CAEDoorAudioEntity::StaticInitialise(CAEDoorAudioEntity *this)
{
  return sub_18B078((CAEAudioHardware *)AEAudioHardware, 0x33u, 31);
}


// ============================================================

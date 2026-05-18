
// Address: 0x18eca4
// Original: j__ZN22CAETwinLoopSoundEntityD2Ev
// Demangled: CAETwinLoopSoundEntity::~CAETwinLoopSoundEntity()
// attributes: thunk
void __fastcall CAETwinLoopSoundEntity::~CAETwinLoopSoundEntity(CAETwinLoopSoundEntity *this)
{
  _ZN22CAETwinLoopSoundEntityD2Ev(this);
}


// ============================================================

// Address: 0x195800
// Original: j__ZN22CAETwinLoopSoundEntity17PlayTwinLoopSoundE7CVectorfffft
// Demangled: CAETwinLoopSoundEntity::PlayTwinLoopSound(CVector,float,float,float,float,ushort)
// attributes: thunk
int CAETwinLoopSoundEntity::PlayTwinLoopSound()
{
  return _ZN22CAETwinLoopSoundEntity17PlayTwinLoopSoundE7CVectorfffft();
}


// ============================================================

// Address: 0x19777c
// Original: j__ZN22CAETwinLoopSoundEntity18StopSoundAndForgetEv
// Demangled: CAETwinLoopSoundEntity::StopSoundAndForget(void)
// attributes: thunk
int __fastcall CAETwinLoopSoundEntity::StopSoundAndForget(CAETwinLoopSoundEntity *this)
{
  return _ZN22CAETwinLoopSoundEntity18StopSoundAndForgetEv(this);
}


// ============================================================

// Address: 0x199044
// Original: j__ZN22CAETwinLoopSoundEntity19UpdateTwinLoopSoundE7CVectorff
// Demangled: CAETwinLoopSoundEntity::UpdateTwinLoopSound(CVector,float,float)
// attributes: thunk
int CAETwinLoopSoundEntity::UpdateTwinLoopSound()
{
  return _ZN22CAETwinLoopSoundEntity19UpdateTwinLoopSoundE7CVectorff();
}


// ============================================================

// Address: 0x19e064
// Original: j__ZN22CAETwinLoopSoundEntity23DoSoundsSwitchThisFrameEv
// Demangled: CAETwinLoopSoundEntity::DoSoundsSwitchThisFrame(void)
// attributes: thunk
int __fastcall CAETwinLoopSoundEntity::DoSoundsSwitchThisFrame(CAETwinLoopSoundEntity *this)
{
  return _ZN22CAETwinLoopSoundEntity23DoSoundsSwitchThisFrameEv(this);
}


// ============================================================

// Address: 0x19e90c
// Original: j__ZN22CAETwinLoopSoundEntity10InitialiseEsssP14CAEAudioEntityttss
// Demangled: CAETwinLoopSoundEntity::Initialise(short,short,short,CAEAudioEntity *,ushort,ushort,short,short)
// attributes: thunk
int __fastcall CAETwinLoopSoundEntity::Initialise(
        CAETwinLoopSoundEntity *this,
        __int16 a2,
        __int16 a3,
        __int16 a4,
        CAEAudioEntity *a5,
        unsigned __int16 a6,
        unsigned __int16 a7,
        __int16 a8,
        __int16 a9)
{
  return _ZN22CAETwinLoopSoundEntity10InitialiseEsssP14CAEAudioEntityttss(this, a2, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================

// Address: 0x3aa778
// Original: _ZN22CAETwinLoopSoundEntityC2EsssP14CAEAudioEntityttss
// Demangled: CAETwinLoopSoundEntity::CAETwinLoopSoundEntity(short,short,short,CAEAudioEntity *,ushort,ushort,short,short)
void __fastcall CAETwinLoopSoundEntity::CAETwinLoopSoundEntity(
        CAETwinLoopSoundEntity *this,
        __int16 a2,
        __int16 a3,
        __int16 a4,
        CAEAudioEntity *a5,
        unsigned __int16 a6,
        unsigned __int16 a7,
        __int16 a8,
        __int16 a9)
{
  *((_WORD *)this + 62) = a2;
  *((_WORD *)this + 63) = a3;
  *((_WORD *)this + 64) = a4;
  *((_DWORD *)this + 33) = a5;
  *((_WORD *)this + 71) = a6;
  *((_WORD *)this + 72) = a7;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_WORD *)this + 77) = a8;
  *((_WORD *)this + 78) = a9;
  *((_DWORD *)this + 34) = -65535;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 152) = 1;
  *((_WORD *)this + 70) = -1;
  *(_DWORD *)this = &off_667900;
}


// ============================================================

// Address: 0x3aa7e4
// Original: _ZN22CAETwinLoopSoundEntityD2Ev
// Demangled: CAETwinLoopSoundEntity::~CAETwinLoopSoundEntity()
void __fastcall CAETwinLoopSoundEntity::~CAETwinLoopSoundEntity(CAETwinLoopSoundEntity *this)
{
  int v2; // r1
  CAESound *v3; // r0
  CAESound *v4; // r0

  v2 = *((unsigned __int16 *)this + 68);
  *(_DWORD *)this = &off_667900;
  if ( v2 )
  {
    v3 = (CAESound *)*((_DWORD *)this + 40);
    if ( v3 )
    {
      CAESound::StopSoundAndForget(v3);
      *((_DWORD *)this + 40) = 0;
    }
    v4 = (CAESound *)*((_DWORD *)this + 41);
    if ( v4 )
    {
      CAESound::StopSoundAndForget(v4);
      *((_DWORD *)this + 41) = 0;
    }
    *((_WORD *)this + 68) = 0;
  }
  *(_DWORD *)this = &off_6677A8;
  CAESound::~CAESound((CEntity **)this + 2);
}


// ============================================================

// Address: 0x3aa844
// Original: _ZN22CAETwinLoopSoundEntity18StopSoundAndForgetEv
// Demangled: CAETwinLoopSoundEntity::StopSoundAndForget(void)
int __fastcall CAETwinLoopSoundEntity::StopSoundAndForget(CAETwinLoopSoundEntity *this)
{
  CAESound *v2; // r0
  CAESound *v3; // r0
  int result; // r0

  v2 = (CAESound *)*((_DWORD *)this + 40);
  if ( v2 )
  {
    CAESound::StopSoundAndForget(v2);
    *((_DWORD *)this + 40) = 0;
  }
  v3 = (CAESound *)*((_DWORD *)this + 41);
  if ( v3 )
  {
    CAESound::StopSoundAndForget(v3);
    *((_DWORD *)this + 41) = 0;
  }
  result = 0;
  *((_WORD *)this + 68) = 0;
  return result;
}


// ============================================================

// Address: 0x3aa872
// Original: _ZN22CAETwinLoopSoundEntity10InitialiseEsssP14CAEAudioEntityttss
// Demangled: CAETwinLoopSoundEntity::Initialise(short,short,short,CAEAudioEntity *,ushort,ushort,short,short)
int __fastcall CAETwinLoopSoundEntity::Initialise(
        int this,
        __int16 a2,
        __int16 a3,
        __int16 a4,
        CAEAudioEntity *a5,
        unsigned __int16 a6,
        unsigned __int16 a7,
        __int16 a8,
        __int16 a9)
{
  *(_WORD *)(this + 126) = a3;
  *(_WORD *)(this + 124) = a2;
  *(_WORD *)(this + 128) = a4;
  *(_DWORD *)(this + 132) = a5;
  *(_WORD *)(this + 142) = a6;
  *(_WORD *)(this + 144) = a7;
  *(_BYTE *)(this + 152) = 1;
  *(_WORD *)(this + 140) = -1;
  *(_DWORD *)(this + 160) = 0;
  *(_DWORD *)(this + 164) = 0;
  *(_WORD *)(this + 154) = a8;
  *(_WORD *)(this + 156) = a9;
  *(_DWORD *)(this + 136) = -65535;
  return this;
}


// ============================================================

// Address: 0x3aa8cc
// Original: _ZN22CAETwinLoopSoundEntity16UpdateParametersEP8CAESounds
// Demangled: CAETwinLoopSoundEntity::UpdateParameters(CAESound *,short)
char *__fastcall CAETwinLoopSoundEntity::UpdateParameters(CAETwinLoopSoundEntity *this, CAESound *a2, int a3)
{
  char *result; // r0
  CAESound *v5; // r3
  CAESound *v6; // t1
  int v7; // r6
  CAESound *v8; // r3
  int v9; // r12
  CAESound *v10; // r5
  int v11; // r5
  CAEAudioUtility *v12; // r0
  int v13; // r1
  _BOOL4 v14; // r2

  v6 = (CAESound *)*((_DWORD *)this + 40);
  result = (char *)this + 160;
  v5 = v6;
  if ( a3 != -1 )
  {
    if ( v5 != a2 )
      return result;
    goto LABEL_3;
  }
  if ( v5 == a2 )
  {
    v5 = 0;
    *(_DWORD *)result = 0;
  }
  if ( *((CAESound **)this + 41) == a2 )
    *((_DWORD *)this + 41) = 0;
  if ( v5 == a2 )
  {
LABEL_3:
    if ( a2 )
    {
      v7 = CTimer::m_snTimeInMillisecondsPauseMode;
      if ( (unsigned int)CTimer::m_snTimeInMillisecondsPauseMode > *((_DWORD *)this + 37) )
      {
        v8 = (CAESound *)*((_DWORD *)this + 41);
        if ( v8 )
        {
          v9 = *((unsigned __int8 *)this + 152);
          v10 = a2;
          if ( !*((_BYTE *)this + 152) )
            v10 = (CAESound *)*((_DWORD *)this + 41);
          v11 = *((_DWORD *)v10 + 5);
          if ( !*((_BYTE *)this + 152) )
            v8 = a2;
          *((_DWORD *)v8 + 5) = v11;
          if ( !v9 )
            result = (char *)this + 164;
          *(_DWORD *)(*(_DWORD *)result + 20) = -1027080192;
          v12 = (CAEAudioUtility *)*((unsigned __int16 *)this + 71);
          v13 = *((unsigned __int16 *)this + 72);
          v14 = v9 == 0;
          *((_BYTE *)this + 152) = v14;
          result = (char *)(CAEAudioUtility::GetRandomNumberInRange(v12, v13, v14) + v7);
          *((_DWORD *)this + 37) = result;
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x3aa96c
// Original: _ZN22CAETwinLoopSoundEntity10SwapSoundsEv
// Demangled: CAETwinLoopSoundEntity::SwapSounds(void)
char *__fastcall CAETwinLoopSoundEntity::SwapSounds(CAETwinLoopSoundEntity *this, int a2, char *a3, int a4)
{
  char *result; // r0
  int v6; // r1
  int v7; // t1
  bool v8; // zf
  int v9; // r12
  int v10; // r5
  int v11; // r5
  CAEAudioUtility *v12; // r0
  int v13; // r1
  int v14; // r5

  v7 = *((_DWORD *)this + 40);
  result = (char *)this + 160;
  v6 = v7;
  v8 = v7 == 0;
  if ( v7 )
  {
    a3 = (char *)this + 164;
    a4 = *((_DWORD *)this + 41);
    v8 = a4 == 0;
  }
  if ( !v8 )
  {
    v9 = *((unsigned __int8 *)this + 152);
    v10 = v6;
    if ( !*((_BYTE *)this + 152) )
      v10 = a4;
    v11 = *(_DWORD *)(v10 + 20);
    if ( !*((_BYTE *)this + 152) )
      a4 = v6;
    *(_DWORD *)(a4 + 20) = v11;
    if ( !v9 )
      result = a3;
    *(_DWORD *)(*(_DWORD *)result + 20) = -1027080192;
    v12 = (CAEAudioUtility *)*((unsigned __int16 *)this + 71);
    v13 = *((unsigned __int16 *)this + 72);
    *((_BYTE *)this + 152) = v9 == 0;
    v14 = CTimer::m_snTimeInMillisecondsPauseMode;
    result = (char *)(CAEAudioUtility::GetRandomNumberInRange(v12, v13, (int)&CTimer::m_snTimeInMillisecondsPauseMode)
                    + v14);
    *((_DWORD *)this + 37) = result;
  }
  return result;
}


// ============================================================

// Address: 0x3aa9dc
// Original: _ZN22CAETwinLoopSoundEntity23DoSoundsSwitchThisFrameEv
// Demangled: CAETwinLoopSoundEntity::DoSoundsSwitchThisFrame(void)
bool __fastcall CAETwinLoopSoundEntity::DoSoundsSwitchThisFrame(CAETwinLoopSoundEntity *this)
{
  return (unsigned int)CTimer::m_snTimeInMillisecondsPauseMode > *((_DWORD *)this + 37);
}


// ============================================================

// Address: 0x3aa9f8
// Original: _ZN22CAETwinLoopSoundEntity9StopSoundEv
// Demangled: CAETwinLoopSoundEntity::StopSound(void)
CAESound *__fastcall CAETwinLoopSoundEntity::StopSound(CAETwinLoopSoundEntity *this)
{
  CAESound *v2; // r0
  CAESound *result; // r0

  v2 = (CAESound *)*((_DWORD *)this + 40);
  if ( v2 )
    CAESound::StopSound(v2);
  result = (CAESound *)*((_DWORD *)this + 41);
  if ( result )
    return (CAESound *)sub_18EA4C(result);
  return result;
}


// ============================================================

// Address: 0x3aaa1c
// Original: _ZN22CAETwinLoopSoundEntity17PlayTwinLoopSoundE7CVectorfffft
// Demangled: CAETwinLoopSoundEntity::PlayTwinLoopSound(CVector,float,float,float,float,ushort)
void __fastcall CAETwinLoopSoundEntity::PlayTwinLoopSound(int a1, int a2, int a3)
{
  CAESound *v4; // r0
  CAESound *v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r2
  int v9; // r6
  int v10; // r0
  int v11; // r2
  int v12; // r1
  int v13; // r6
  CEntity *v14[23]; // [sp+34h] [bp-B4h] BYREF
  __int16 v15; // [sp+90h] [bp-58h]

  v14[2] = 0;
  v4 = *(CAESound **)(a1 + 160);
  if ( v4 )
    CAESound::StopSoundAndForget(v4);
  v5 = *(CAESound **)(a1 + 164);
  if ( v5 )
    CAESound::StopSoundAndForget(v5);
  v6 = *(unsigned __int16 *)(a1 + 154);
  if ( v6 == 0xFFFF )
    LOWORD(v6) = CAEAudioUtility::GetRandomNumberInRange(0, 99, a3);
  CAESound::Initialise();
  v15 = v6;
  v7 = CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v14);
  v9 = *(unsigned __int16 *)(a1 + 156);
  *(_DWORD *)(a1 + 160) = v7;
  if ( v9 == 0xFFFF )
    LOWORD(v9) = CAEAudioUtility::GetRandomNumberInRange(0, 99, v8);
  CAESound::Initialise();
  v15 = v9;
  v10 = CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)v14);
  v11 = *(unsigned __int16 *)(a1 + 142);
  v12 = *(unsigned __int16 *)(a1 + 144);
  *(_DWORD *)(a1 + 164) = v10;
  v13 = CTimer::m_snTimeInMillisecondsPauseMode;
  *(_DWORD *)(a1 + 148) = CAEAudioUtility::GetRandomNumberInRange((CAEAudioUtility *)v11, v12, v11) + v13;
  *(_BYTE *)(a1 + 152) = 1;
  CAESound::~CAESound(v14);
}


// ============================================================

// Address: 0x3aab78
// Original: _ZN22CAETwinLoopSoundEntity19UpdateTwinLoopSoundE7CVectorff
// Demangled: CAETwinLoopSoundEntity::UpdateTwinLoopSound(CVector,float,float)
int __fastcall CAETwinLoopSoundEntity::UpdateTwinLoopSound(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  int result; // r0

  v7 = *(_DWORD *)(a1 + 160);
  if ( v7 )
  {
    CAESound::SetPosition(v7, a2, a3, a4);
    if ( *(_BYTE *)(a1 + 152) )
      *(_DWORD *)(*(_DWORD *)(a1 + 160) + 20) = a5;
    *(_DWORD *)(*(_DWORD *)(a1 + 160) + 28) = a6;
  }
  result = *(_DWORD *)(a1 + 164);
  if ( result )
  {
    CAESound::SetPosition(result, a2, a3, a4);
    if ( !*(_BYTE *)(a1 + 152) )
      *(_DWORD *)(*(_DWORD *)(a1 + 164) + 20) = a5;
    result = *(_DWORD *)(a1 + 164);
    *(_DWORD *)(result + 28) = a6;
  }
  return result;
}


// ============================================================

// Address: 0x3aabee
// Original: _ZN22CAETwinLoopSoundEntity16SetEmittedVolumeEf
// Demangled: CAETwinLoopSoundEntity::SetEmittedVolume(float)
int __fastcall CAETwinLoopSoundEntity::SetEmittedVolume(int this, float a2)
{
  int v2; // r2
  int v4; // r1

  v2 = *(_DWORD *)(this + 160);
  if ( v2 && *(_BYTE *)(this + 152) )
    *(float *)(v2 + 20) = a2;
  v4 = *(_DWORD *)(this + 164);
  if ( v4 )
  {
    this = *(unsigned __int8 *)(this + 152);
    if ( !this )
      *(float *)(v4 + 20) = a2;
  }
  return this;
}


// ============================================================

// Address: 0x3aac1c
// Original: _ZN22CAETwinLoopSoundEntity16GetEmittedVolumeEv
// Demangled: CAETwinLoopSoundEntity::GetEmittedVolume(void)
int __fastcall CAETwinLoopSoundEntity::GetEmittedVolume(CAETwinLoopSoundEntity *this)
{
  int v1; // r1
  bool v2; // zf
  int v3; // r1
  int v4; // s0

  v1 = *((_DWORD *)this + 40);
  v2 = v1 == 0;
  if ( v1 )
    v2 = *((_BYTE *)this + 152) == 0;
  if ( !v2 )
    return *(_DWORD *)(v1 + 20);
  v3 = *((_DWORD *)this + 41);
  v4 = -1027080192;
  if ( v3 )
  {
    if ( !*((_BYTE *)this + 152) )
      return *(_DWORD *)(v3 + 20);
  }
  return v4;
}


// ============================================================

// Address: 0x3aac58
// Original: _ZN22CAETwinLoopSoundEntity17IsTwinLoopPlayingEv
// Demangled: CAETwinLoopSoundEntity::IsTwinLoopPlaying(void)
bool __fastcall CAETwinLoopSoundEntity::IsTwinLoopPlaying(CAETwinLoopSoundEntity *this)
{
  return *((_DWORD *)this + 40) || *((_DWORD *)this + 41) != 0;
}


// ============================================================

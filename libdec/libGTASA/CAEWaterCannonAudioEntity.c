
// Address: 0x193cac
// Original: j__ZN25CAEWaterCannonAudioEntity10InitialiseEP12CWaterCannon
// Demangled: CAEWaterCannonAudioEntity::Initialise(CWaterCannon *)
// attributes: thunk
int __fastcall CAEWaterCannonAudioEntity::Initialise(CAEWaterCannonAudioEntity *this, CWaterCannon *a2)
{
  return _ZN25CAEWaterCannonAudioEntity10InitialiseEP12CWaterCannon(this, a2);
}


// ============================================================

// Address: 0x1946c0
// Original: j__ZN25CAEWaterCannonAudioEntity15ClearSplashInfoEv
// Demangled: CAEWaterCannonAudioEntity::ClearSplashInfo(void)
// attributes: thunk
int __fastcall CAEWaterCannonAudioEntity::ClearSplashInfo(CAEWaterCannonAudioEntity *this)
{
  return _ZN25CAEWaterCannonAudioEntity15ClearSplashInfoEv(this);
}


// ============================================================

// Address: 0x197ffc
// Original: j__ZN25CAEWaterCannonAudioEntity13SetSplashInfoE7CVectorf
// Demangled: CAEWaterCannonAudioEntity::SetSplashInfo(CVector,float)
// attributes: thunk
int __fastcall CAEWaterCannonAudioEntity::SetSplashInfo(int a1, int a2, int a3, int a4, float a5)
{
  return _ZN25CAEWaterCannonAudioEntity13SetSplashInfoE7CVectorf(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19e648
// Original: j__ZN25CAEWaterCannonAudioEntity9TerminateEv
// Demangled: CAEWaterCannonAudioEntity::Terminate(void)
// attributes: thunk
int __fastcall CAEWaterCannonAudioEntity::Terminate(CAEWaterCannonAudioEntity *this)
{
  return _ZN25CAEWaterCannonAudioEntity9TerminateEv(this);
}


// ============================================================

// Address: 0x19e660
// Original: j__ZN25CAEWaterCannonAudioEntity7ServiceEv
// Demangled: CAEWaterCannonAudioEntity::Service(void)
// attributes: thunk
int __fastcall CAEWaterCannonAudioEntity::Service(CAEWaterCannonAudioEntity *this)
{
  return _ZN25CAEWaterCannonAudioEntity7ServiceEv(this);
}


// ============================================================

// Address: 0x3b9390
// Original: _ZN25CAEWaterCannonAudioEntity10InitialiseEP12CWaterCannon
// Demangled: CAEWaterCannonAudioEntity::Initialise(CWaterCannon *)
_QWORD *__fastcall CAEWaterCannonAudioEntity::Initialise(int a1, int a2)
{
  _QWORD *result; // r0

  *(_DWORD *)(a1 + 4) = a2;
  *(_WORD *)(a1 + 124) = 1;
  result = (_QWORD *)(a1 + 128);
  *result = 0LL;
  result[1] = 0LL;
  return result;
}


// ============================================================

// Address: 0x3b93a4
// Original: _ZN25CAEWaterCannonAudioEntity15ClearSplashInfoEv
// Demangled: CAEWaterCannonAudioEntity::ClearSplashInfo(void)
_QWORD *__fastcall CAEWaterCannonAudioEntity::ClearSplashInfo(CAEWaterCannonAudioEntity *this)
{
  _QWORD *result; // r0

  *((_BYTE *)this + 125) = 0;
  result = (_QWORD *)((char *)this + 128);
  *result = 0LL;
  result[1] = 0LL;
  return result;
}


// ============================================================

// Address: 0x3b93b6
// Original: _ZN25CAEWaterCannonAudioEntity9TerminateEv
// Demangled: CAEWaterCannonAudioEntity::Terminate(void)
CAESound *__fastcall CAEWaterCannonAudioEntity::Terminate(CAEWaterCannonAudioEntity *this)
{
  CAESound *v2; // r0
  CAESound *v3; // r0
  CAESound *v4; // r0
  CAESound *result; // r0

  v2 = (CAESound *)*((_DWORD *)this + 36);
  if ( v2 )
    CAESound::StopSound(v2);
  v3 = (CAESound *)*((_DWORD *)this + 37);
  if ( v3 )
    CAESound::StopSound(v3);
  v4 = (CAESound *)*((_DWORD *)this + 38);
  if ( v4 )
    CAESound::StopSound(v4);
  result = (CAESound *)*((_DWORD *)this + 39);
  if ( result )
    return (CAESound *)sub_18EA4C(result);
  return result;
}


// ============================================================

// Address: 0x3b93f4
// Original: _ZN25CAEWaterCannonAudioEntity29UpdateGenericWaterCannonSoundEhsssff7CVectorf
// Demangled: CAEWaterCannonAudioEntity::UpdateGenericWaterCannonSound(uchar,short,short,short,float,float,CVector,float)
CAESound *__fastcall CAEWaterCannonAudioEntity::UpdateGenericWaterCannonSound(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // r6
  CAESound *result; // r0
  int v14; // r6
  CAESound *v15; // t1

  v12 = a1 + 4 * a3;
  v15 = *(CAESound **)(v12 + 144);
  v14 = v12 + 144;
  result = v15;
  if ( a2 )
  {
    if ( result )
    {
      *((_DWORD *)result + 5) = a7;
      *(_DWORD *)(*(_DWORD *)v14 + 28) = a6;
      return (CAESound *)j_CAESound::SetPosition();
    }
    else
    {
      CAESound::Initialise();
      *(_DWORD *)(a1 + 28) = a7;
      *(_DWORD *)(a1 + 32) = a11;
      *(_DWORD *)(a1 + 36) = a6;
      *(_WORD *)(a1 + 94) = 4;
      result = (CAESound *)CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)(a1 + 8));
      *(_DWORD *)v14 = result;
    }
  }
  else if ( result )
  {
    return (CAESound *)sub_18EA4C(result);
  }
  return result;
}


// ============================================================

// Address: 0x3b94bc
// Original: _ZN25CAEWaterCannonAudioEntity13AddAudioEventEiR7CVector
// Demangled: CAEWaterCannonAudioEntity::AddAudioEvent(int,CVector &)
void CAEWaterCannonAudioEntity::AddAudioEvent()
{
  ;
}


// ============================================================

// Address: 0x3b94be
// Original: _ZN25CAEWaterCannonAudioEntity16UpdateParametersEP8CAESounds
// Demangled: CAEWaterCannonAudioEntity::UpdateParameters(CAESound *,short)
_DWORD *__fastcall CAEWaterCannonAudioEntity::UpdateParameters(_DWORD *this, CAESound *a2, int a3)
{
  if ( a3 == -1 )
  {
    if ( (CAESound *)this[36] == a2 )
      this[36] = 0;
    if ( (CAESound *)this[37] == a2 )
      this[37] = 0;
    if ( (CAESound *)this[38] == a2 )
      this[38] = 0;
    if ( (CAESound *)this[39] == a2 )
      this[39] = 0;
  }
  return this;
}


// ============================================================

// Address: 0x3b9500
// Original: _ZN25CAEWaterCannonAudioEntity7ServiceEv
// Demangled: CAEWaterCannonAudioEntity::Service(void)
int __fastcall CAEWaterCannonAudioEntity::Service(CAEWaterCannonAudioEntity *this)
{
  int result; // r0
  int v3; // r6
  int v4; // r1
  _BOOL4 v5; // r10
  CAESound *v6; // r0
  int *v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r3
  CAESound *v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  CAESound *v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3

  result = *((unsigned __int8 *)this + 124);
  if ( result )
  {
    v3 = *((_DWORD *)this + 1);
    result = CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x3Bu, 0);
    if ( result )
    {
      result = CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x27u, 2);
      if ( result )
      {
        v4 = *(__int16 *)(v3 + 4);
        if ( *(_BYTE *)(v3 + v4 + 780) )
          v5 = *(_DWORD *)v3 == 0;
        else
          v5 = 1;
        v6 = (CAESound *)*((_DWORD *)this + 36);
        if ( v5 )
        {
          if ( v6 )
            CAESound::StopSound(v6);
        }
        else
        {
          v7 = (int *)(v3 + 12 * v4 + 12);
          v8 = *v7;
          v9 = v7[1];
          v10 = v7[2];
          if ( v6 )
          {
            *((_DWORD *)v6 + 5) = 1086324736;
            *(_DWORD *)(*((_DWORD *)this + 36) + 28) = 1071896330;
            CAESound::SetPosition(*((_DWORD *)this + 36), v8, v9, v10);
          }
          else
          {
            CAESound::Initialise();
            *((_DWORD *)this + 7) = 1086324736;
            *((_DWORD *)this + 8) = 0x40000000;
            *((_DWORD *)this + 9) = 1071896330;
            *((_WORD *)this + 47) = 4;
            *((_DWORD *)this + 36) = CAESoundManager::RequestNewSound(
                                       (CAESoundManager *)&AESoundManager,
                                       (CAEWaterCannonAudioEntity *)((char *)this + 8));
          }
        }
        v11 = (CAESound *)*((_DWORD *)this + 37);
        if ( v5 )
        {
          if ( v11 )
            CAESound::StopSound(v11);
        }
        else
        {
          v12 = *(_DWORD *)(v3 + 12 * *(__int16 *)(v3 + 4) + 12);
          v13 = *(_DWORD *)(v3 + 12 * *(__int16 *)(v3 + 4) + 16);
          v14 = *(_DWORD *)(v3 + 12 * *(__int16 *)(v3 + 4) + 20);
          if ( v11 )
          {
            *((_DWORD *)v11 + 5) = -1055916032;
            *(_DWORD *)(*((_DWORD *)this + 37) + 28) = 1056964608;
            CAESound::SetPosition(*((_DWORD *)this + 37), v12, v13, v14);
          }
          else
          {
            CAESound::Initialise();
            *((_DWORD *)this + 7) = -1055916032;
            *((_DWORD *)this + 8) = 0x40000000;
            *((_DWORD *)this + 9) = 1056964608;
            *((_WORD *)this + 47) = 4;
            *((_DWORD *)this + 37) = CAESoundManager::RequestNewSound(
                                       (CAESoundManager *)&AESoundManager,
                                       (CAEWaterCannonAudioEntity *)((char *)this + 8));
          }
        }
        v15 = (CAESound *)*((_DWORD *)this + 38);
        if ( *((_BYTE *)this + 125) )
        {
          v16 = *((_DWORD *)this + 32);
          v17 = *((_DWORD *)this + 33);
          v18 = *((_DWORD *)this + 34);
          if ( v15 )
          {
            *((_DWORD *)v15 + 5) = -1069547520;
            *(_DWORD *)(*((_DWORD *)this + 38) + 28) = 1065353216;
            CAESound::SetPosition(*((_DWORD *)this + 38), v16, v17, v18);
          }
          else
          {
            CAESound::Initialise();
            *((_DWORD *)this + 7) = -1069547520;
            *((_DWORD *)this + 8) = 0x40000000;
            *((_DWORD *)this + 9) = 1065353216;
            *((_WORD *)this + 47) = 4;
            *((_DWORD *)this + 38) = CAESoundManager::RequestNewSound(
                                       (CAESoundManager *)&AESoundManager,
                                       (CAEWaterCannonAudioEntity *)((char *)this + 8));
          }
        }
        else if ( v15 )
        {
          CAESound::StopSound(v15);
        }
        result = *((_DWORD *)this + 39);
        if ( *((_BYTE *)this + 125) )
        {
          if ( result )
          {
            *(_DWORD *)(result + 20) = -1055916032;
            *(_DWORD *)(*((_DWORD *)this + 39) + 28) = 1056964608;
            return j_CAESound::SetPosition();
          }
          else
          {
            CAESound::Initialise();
            *((_DWORD *)this + 7) = -1055916032;
            *((_DWORD *)this + 8) = 0x40000000;
            *((_DWORD *)this + 9) = 1056964608;
            *((_WORD *)this + 47) = 4;
            result = CAESoundManager::RequestNewSound(
                       (CAESoundManager *)&AESoundManager,
                       (CAEWaterCannonAudioEntity *)((char *)this + 8));
            *((_DWORD *)this + 39) = result;
          }
        }
        else if ( result )
        {
          return sub_18EA4C((CAESound *)result);
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x3b97dc
// Original: _ZN25CAEWaterCannonAudioEntity13SetSplashInfoE7CVectorf
// Demangled: CAEWaterCannonAudioEntity::SetSplashInfo(CVector,float)
int __fastcall CAEWaterCannonAudioEntity::SetSplashInfo(int result, int a2, int a3, int a4, float a5)
{
  *(_BYTE *)(result + 125) = 1;
  *(_DWORD *)(result + 128) = a2;
  *(_DWORD *)(result + 132) = a3;
  *(_DWORD *)(result + 136) = a4;
  *(float *)(result + 140) = a5;
  return result;
}


// ============================================================

// Address: 0x46d824
// Original: _ZN25CAEWaterCannonAudioEntity16StaticInitialiseEv
// Demangled: CAEWaterCannonAudioEntity::StaticInitialise(void)
void __fastcall CAEWaterCannonAudioEntity::StaticInitialise(CAEWaterCannonAudioEntity *this)
{
  ;
}


// ============================================================

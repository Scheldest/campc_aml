
// Address: 0x18a6dc
// Original: j__ZN23CAECutsceneTrackManager17StopCutsceneTrackEv
// Demangled: CAECutsceneTrackManager::StopCutsceneTrack(void)
// attributes: thunk
int __fastcall CAECutsceneTrackManager::StopCutsceneTrack(CAECutsceneTrackManager *this)
{
  return _ZN23CAECutsceneTrackManager17StopCutsceneTrackEv(this);
}


// ============================================================

// Address: 0x18d6a0
// Original: j__ZN23CAECutsceneTrackManager7ServiceEi
// Demangled: CAECutsceneTrackManager::Service(int)
// attributes: thunk
int __fastcall CAECutsceneTrackManager::Service(CAECutsceneTrackManager *this, int a2)
{
  return _ZN23CAECutsceneTrackManager7ServiceEi(this, a2);
}


// ============================================================

// Address: 0x18d864
// Original: j__ZN23CAECutsceneTrackManager20PreloadCutsceneTrackEsh
// Demangled: CAECutsceneTrackManager::PreloadCutsceneTrack(short,uchar)
// attributes: thunk
int __fastcall CAECutsceneTrackManager::PreloadCutsceneTrack(
        CAECutsceneTrackManager *this,
        __int16 a2,
        unsigned __int8 a3)
{
  return _ZN23CAECutsceneTrackManager20PreloadCutsceneTrackEsh(this, a2, a3);
}


// ============================================================

// Address: 0x1912f4
// Original: j__ZN23CAECutsceneTrackManager10PauseTrackEh
// Demangled: CAECutsceneTrackManager::PauseTrack(uchar)
// attributes: thunk
int __fastcall CAECutsceneTrackManager::PauseTrack(CAECutsceneTrackManager *this, unsigned __int8 a2)
{
  return _ZN23CAECutsceneTrackManager10PauseTrackEh(this, a2);
}


// ============================================================

// Address: 0x193224
// Original: j__ZN23CAECutsceneTrackManager26PlayPreloadedCutsceneTrackEv
// Demangled: CAECutsceneTrackManager::PlayPreloadedCutsceneTrack(void)
// attributes: thunk
int __fastcall CAECutsceneTrackManager::PlayPreloadedCutsceneTrack(CAECutsceneTrackManager *this)
{
  return _ZN23CAECutsceneTrackManager26PlayPreloadedCutsceneTrackEv(this);
}


// ============================================================

// Address: 0x195e98
// Original: j__ZN23CAECutsceneTrackManager21IsCutsceneTrackActiveEv
// Demangled: CAECutsceneTrackManager::IsCutsceneTrackActive(void)
// attributes: thunk
int __fastcall CAECutsceneTrackManager::IsCutsceneTrackActive(CAECutsceneTrackManager *this)
{
  return _ZN23CAECutsceneTrackManager21IsCutsceneTrackActiveEv(this);
}


// ============================================================

// Address: 0x19b840
// Original: j__ZN23CAECutsceneTrackManager16PreloadBeatTrackEsh
// Demangled: CAECutsceneTrackManager::PreloadBeatTrack(short,uchar)
// attributes: thunk
int __fastcall CAECutsceneTrackManager::PreloadBeatTrack(CAECutsceneTrackManager *this, __int16 a2, unsigned __int8 a3)
{
  return _ZN23CAECutsceneTrackManager16PreloadBeatTrackEsh(this, a2, a3);
}


// ============================================================

// Address: 0x19d740
// Original: j__ZN23CAECutsceneTrackManager22GetCutsceneTrackStatusEv
// Demangled: CAECutsceneTrackManager::GetCutsceneTrackStatus(void)
// attributes: thunk
int __fastcall CAECutsceneTrackManager::GetCutsceneTrackStatus(CAECutsceneTrackManager *this)
{
  return _ZN23CAECutsceneTrackManager22GetCutsceneTrackStatusEv(this);
}


// ============================================================

// Address: 0x395034
// Original: _ZN23CAECutsceneTrackManager7ServiceEi
// Demangled: CAECutsceneTrackManager::Service(int)
int __fastcall CAECutsceneTrackManager::Service(CAECutsceneTrackManager *this, int a2)
{
  int result; // r0
  int v4; // r1
  float v5; // s0
  int v6; // r0
  bool v7; // zf

  *((_DWORD *)this + 10) = a2;
  *((_DWORD *)this + 11) = CAEAudioHardware::GetTrackLengthMs((CAEAudioHardware *)AEAudioHardware);
  result = CAEAudioHardware::GetPlayingTrackID((CAEAudioHardware *)AEAudioHardware);
  v4 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 9) = result;
  switch ( v4 )
  {
    case 0:
      CAEAudioHardware::PlayTrack(
        (CAEAudioHardware *)AEAudioHardware,
        *((_DWORD *)this + 3),
        -1,
        *((_DWORD *)this + 5),
        *((_BYTE *)this + 28),
        0,
        0);
      result = 1;
      goto LABEL_20;
    case 1:
      result = *((_DWORD *)this + 10) + 2;
      if ( *((_DWORD *)this + 10) != -2 )
        return result;
      result = 2;
      goto LABEL_20;
    case 2:
      result = *(unsigned __int8 *)this;
      if ( !*(_BYTE *)this )
        return result;
      CAEAudioHardware::DisableBassEq((CAEAudioHardware *)AEAudioHardware);
      CAEAudioHardware::SetChannelFlags((CAEAudioHardware *)AEAudioHardware, *((_WORD *)this + 2), 0, 39);
      CAEAudioHardware::SetChannelVolume((CAEAudioHardware *)AEAudioHardware, *((_WORD *)this + 2), 0, -3.0, 0);
      CAEAudioHardware::StartTrackPlayback((CAEAudioHardware *)AEAudioHardware);
      *(_BYTE *)this = 0;
      result = 3;
      goto LABEL_20;
    case 3:
      v5 = 0.0;
      if ( !(((unsigned __int8)CTimer::m_UserPause | (unsigned __int8)CTimer::m_CodePause) << 24)
        && !*((_BYTE *)this + 1) )
      {
        v5 = 1.0;
      }
      CAEAudioHardware::SetChannelFrequencyScalingFactor(
        (CAEAudioHardware *)AEAudioHardware,
        *((_WORD *)this + 2),
        0,
        v5);
      v6 = *((_DWORD *)this + 10);
      goto LABEL_18;
    case 4:
    case 6:
      CAEAudioHardware::StopTrack((CAEAudioHardware *)AEAudioHardware);
      result = 7;
      goto LABEL_20;
    case 5:
      CAEAudioHardware::StopSound((CAEAudioHardware *)AEAudioHardware, *((_WORD *)this + 2), 0);
      result = 6;
      goto LABEL_20;
    case 7:
      v6 = *((_DWORD *)this + 10);
      v7 = v6 == -7;
      if ( v6 != -7 )
        v7 = v6 == -2;
      if ( v7 )
        return j_CAEAudioHardware::StopTrack((CAEAudioHardware *)AEAudioHardware);
LABEL_18:
      result = v6 + 6;
      if ( !result )
      {
        result = 8;
LABEL_20:
        *((_DWORD *)this + 2) = result;
      }
      return result;
    default:
      return result;
  }
}


// ============================================================

// Address: 0x39519c
// Original: _ZN23CAECutsceneTrackManager18StartTrackPlaybackEv
// Demangled: CAECutsceneTrackManager::StartTrackPlayback(void)
int __fastcall CAECutsceneTrackManager::StartTrackPlayback(CAECutsceneTrackManager *this)
{
  CAEAudioHardware::DisableBassEq((CAEAudioHardware *)AEAudioHardware);
  CAEAudioHardware::SetChannelFlags((CAEAudioHardware *)AEAudioHardware, *((_WORD *)this + 2), 0, 39);
  CAEAudioHardware::SetChannelVolume((CAEAudioHardware *)AEAudioHardware, *((_WORD *)this + 2), 0, -3.0, 0);
  return sub_1952A0((CAEAudioHardware *)AEAudioHardware);
}


// ============================================================

// Address: 0x3951ec
// Original: _ZN23CAECutsceneTrackManager13CheckForPauseEv
// Demangled: CAECutsceneTrackManager::CheckForPause(void)
int __fastcall CAECutsceneTrackManager::CheckForPause(CAECutsceneTrackManager *this)
{
  float v1; // s0

  v1 = 0.0;
  if ( !(((unsigned __int8)CTimer::m_UserPause | (unsigned __int8)CTimer::m_CodePause) << 24) && !*((_BYTE *)this + 1) )
    v1 = 1.0;
  return j_CAEAudioHardware::SetChannelFrequencyScalingFactor(
           (CAEAudioHardware *)AEAudioHardware,
           *((_WORD *)this + 2),
           0,
           v1);
}


// ============================================================

// Address: 0x395238
// Original: _ZN23CAECutsceneTrackManager20PreloadCutsceneTrackEsh
// Demangled: CAECutsceneTrackManager::PreloadCutsceneTrack(short,uchar)
int __fastcall CAECutsceneTrackManager::PreloadCutsceneTrack(__int64 this, int a2)
{
  int v2; // r4
  bool v4; // zf
  int TrackPlayTime; // r0

  v2 = this;
  LODWORD(this) = 0;
  *(_QWORD *)(v2 + 8) = this;
  *(_DWORD *)(v2 + 20) = 0;
  SetPostLoadingTimer(30000);
  CAEAudioHardware::StopTrack((CAEAudioHardware *)AEAudioHardware);
  CAEAudioHardware::Service((CAEAudioHardware *)AEAudioHardware);
  v4 = a2 == 0;
  if ( a2 )
    v4 = *(_DWORD *)(v2 + 8) == 2;
  if ( !v4 )
  {
    do
    {
      TrackPlayTime = CAEAudioHardware::GetTrackPlayTime((CAEAudioHardware *)AEAudioHardware);
      CAECutsceneTrackManager::Service((CAECutsceneTrackManager *)v2, TrackPlayTime);
      CAEAudioHardware::Service((CAEAudioHardware *)AEAudioHardware);
      OS_ThreadSleep(0x3E8u);
    }
    while ( *(_DWORD *)(v2 + 8) != 2 );
  }
  return sub_19F5C4(30000);
}


// ============================================================

// Address: 0x3952b0
// Original: _ZN23CAECutsceneTrackManager26PlayPreloadedCutsceneTrackEv
// Demangled: CAECutsceneTrackManager::PlayPreloadedCutsceneTrack(void)
_WORD *__fastcall CAECutsceneTrackManager::PlayPreloadedCutsceneTrack(_WORD *this)
{
  *this = 1;
  return this;
}


// ============================================================

// Address: 0x3952b6
// Original: _ZN23CAECutsceneTrackManager17StopCutsceneTrackEv
// Demangled: CAECutsceneTrackManager::StopCutsceneTrack(void)
int __fastcall CAECutsceneTrackManager::StopCutsceneTrack(int this)
{
  if ( *(_DWORD *)(this + 8) <= 3u )
    *(_DWORD *)(this + 8) = 4;
  *(_WORD *)this = 0;
  return this;
}


// ============================================================

// Address: 0x3952c6
// Original: _ZN23CAECutsceneTrackManager21IsCutsceneTrackActiveEv
// Demangled: CAECutsceneTrackManager::IsCutsceneTrackActive(void)
bool __fastcall CAECutsceneTrackManager::IsCutsceneTrackActive(CAECutsceneTrackManager *this)
{
  return *((_DWORD *)this + 2) != 8;
}


// ============================================================

// Address: 0x3952d4
// Original: _ZN23CAECutsceneTrackManager22GetCutsceneTrackStatusEv
// Demangled: CAECutsceneTrackManager::GetCutsceneTrackStatus(void)
int __fastcall CAECutsceneTrackManager::GetCutsceneTrackStatus(CAECutsceneTrackManager *this)
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

// Address: 0x3952f8
// Original: _ZN23CAECutsceneTrackManager16PreloadBeatTrackEsh
// Demangled: CAECutsceneTrackManager::PreloadBeatTrack(short,uchar)
int __fastcall CAECutsceneTrackManager::PreloadBeatTrack(__int64 this, unsigned __int8 a2)
{
  HIDWORD(this) = gBeatTrackLookup[HIDWORD(this)];
  return CAECutsceneTrackManager::PreloadCutsceneTrack(this, a2);
}


// ============================================================

// Address: 0x395308
// Original: _ZN23CAECutsceneTrackManager10PauseTrackEh
// Demangled: CAECutsceneTrackManager::PauseTrack(uchar)
int __fastcall CAECutsceneTrackManager::PauseTrack(int this, unsigned __int8 a2)
{
  *(_BYTE *)(this + 1) = a2;
  return this;
}


// ============================================================

// Address: 0x46d2a0
// Original: _ZN23CAECutsceneTrackManager10InitialiseEi
// Demangled: CAECutsceneTrackManager::Initialise(int)
int __fastcall CAECutsceneTrackManager::Initialise(CAECutsceneTrackManager *this, int a2)
{
  _QWORD *v2; // r0

  *((_DWORD *)this + 1) = a2;
  *(_WORD *)this = 0;
  *((_BYTE *)this + 28) = 0;
  *((_DWORD *)this + 6) = 0;
  v2 = (_QWORD *)((char *)this + 8);
  *v2 = 0xFFFFFFFF00000008LL;
  v2[1] = 0xFFFFFFFFLL;
  return 1;
}


// ============================================================

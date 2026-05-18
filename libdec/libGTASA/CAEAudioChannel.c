
// Address: 0x18abf4
// Original: j__ZN15CAEAudioChannel20SetOriginalFrequencyEj
// Demangled: CAEAudioChannel::SetOriginalFrequency(uint)
// attributes: thunk
int __fastcall CAEAudioChannel::SetOriginalFrequency(CAEAudioChannel *this, unsigned int a2)
{
  return _ZN15CAEAudioChannel20SetOriginalFrequencyEj(this, a2);
}


// ============================================================

// Address: 0x1921cc
// Original: j__ZN15CAEAudioChannel26GetCurrentPlaybackPositionEv
// Demangled: CAEAudioChannel::GetCurrentPlaybackPosition(void)
// attributes: thunk
int __fastcall CAEAudioChannel::GetCurrentPlaybackPosition(CAEAudioChannel *this)
{
  return _ZN15CAEAudioChannel26GetCurrentPlaybackPositionEv(this);
}


// ============================================================

// Address: 0x192948
// Original: j__ZN15CAEAudioChannelD2Ev
// Demangled: CAEAudioChannel::~CAEAudioChannel()
// attributes: thunk
void __fastcall CAEAudioChannel::~CAEAudioChannel(CAEAudioChannel *this)
{
  _ZN15CAEAudioChannelD2Ev(this);
}


// ============================================================

// Address: 0x192e54
// Original: j__ZN15CAEAudioChannel15IsBufferPlayingEv
// Demangled: CAEAudioChannel::IsBufferPlaying(void)
// attributes: thunk
int __fastcall CAEAudioChannel::IsBufferPlaying(CAEAudioChannel *this)
{
  return _ZN15CAEAudioChannel15IsBufferPlayingEv(this);
}


// ============================================================

// Address: 0x193894
// Original: j__ZN15CAEAudioChannel20ConvertFromBytesToMSEj
// Demangled: CAEAudioChannel::ConvertFromBytesToMS(uint)
// attributes: thunk
int __fastcall CAEAudioChannel::ConvertFromBytesToMS(CAEAudioChannel *this, CAEAudioUtility *a2)
{
  return _ZN15CAEAudioChannel20ConvertFromBytesToMSEj(this, a2);
}


// ============================================================

// Address: 0x194df0
// Original: j__ZN15CAEAudioChannel9SetVolumeEf
// Demangled: CAEAudioChannel::SetVolume(float)
// attributes: thunk
int __fastcall CAEAudioChannel::SetVolume(CAEAudioChannel *this, float a2)
{
  return _ZN15CAEAudioChannel9SetVolumeEf(this, a2);
}


// ============================================================

// Address: 0x19628c
// Original: j__ZN15CAEAudioChannel12SetFrequencyEj
// Demangled: CAEAudioChannel::SetFrequency(uint)
// attributes: thunk
int __fastcall CAEAudioChannel::SetFrequency(CAEAudioChannel *this, unsigned int a2)
{
  return _ZN15CAEAudioChannel12SetFrequencyEj(this, a2);
}


// ============================================================

// Address: 0x197cb8
// Original: j__ZN15CAEAudioChannel12UpdateStatusEv
// Demangled: CAEAudioChannel::UpdateStatus(void)
// attributes: thunk
int __fastcall CAEAudioChannel::UpdateStatus(CAEAudioChannel *this)
{
  return _ZN15CAEAudioChannel12UpdateStatusEv(this);
}


// ============================================================

// Address: 0x197d00
// Original: j__ZN15CAEAudioChannel20ConvertFromMsToBytesEj
// Demangled: CAEAudioChannel::ConvertFromMsToBytes(uint)
// attributes: thunk
int __fastcall CAEAudioChannel::ConvertFromMsToBytes(CAEAudioChannel *this, CAEAudioUtility *a2)
{
  return _ZN15CAEAudioChannel20ConvertFromMsToBytesEj(this, a2);
}


// ============================================================

// Address: 0x1983b4
// Original: j__ZN15CAEAudioChannelC2Etjt
// Demangled: CAEAudioChannel::CAEAudioChannel(ushort,uint,ushort)
// attributes: thunk
void __fastcall CAEAudioChannel::CAEAudioChannel(
        CAEAudioChannel *this,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  _ZN15CAEAudioChannelC2Etjt(this, a2, a3, a4);
}


// ============================================================

// Address: 0x199e38
// Original: j__ZN15CAEAudioChannel11SetPositionEP7CVector
// Demangled: CAEAudioChannel::SetPosition(CVector *)
// attributes: thunk
int __fastcall CAEAudioChannel::SetPosition(CAEAudioChannel *this, CVector *a2)
{
  return _ZN15CAEAudioChannel11SetPositionEP7CVector(this, a2);
}


// ============================================================

// Address: 0x391888
// Original: _ZN15CAEAudioChannelC2Etjt
// Demangled: CAEAudioChannel::CAEAudioChannel(ushort,uint,ushort)
void __fastcall CAEAudioChannel::CAEAudioChannel(
        CAEAudioChannel *this,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  *((_DWORD *)this + 3) = 0;
  *((_WORD *)this + 15) = a2;
  *((_DWORD *)this + 8) = a3;
  *((_DWORD *)this + 9) = a3;
  *((_DWORD *)this + 6) = -1027080192;
  *((_BYTE *)this + 28) = 0;
  *((_BYTE *)this + 40) = 0;
  *((_BYTE *)this + 41) = 0;
  *(_DWORD *)this = &off_667778;
  *((_DWORD *)this + 1) = 0;
}


// ============================================================

// Address: 0x3918bc
// Original: _ZN15CAEAudioChannelD2Ev
// Demangled: CAEAudioChannel::~CAEAudioChannel()
void __fastcall CAEAudioChannel::~CAEAudioChannel(CAEAudioChannel *this)
{
  int v2; // r5
  int v3; // r0
  int v4; // r6
  unsigned int v5; // r10
  void *v6; // r8
  void *v7; // r9

  v2 = *((_DWORD *)this + 1);
  *(_DWORD *)this = &off_667778;
  if ( v2 )
  {
    --g_numSoundChannelsUsed;
    v3 = *(_DWORD *)(v2 + 4) - 1;
    *(_DWORD *)(v2 + 4) = v3;
    if ( !v3 )
    {
      OS_MutexObtain((pthread_mutex_t *)trashMutex);
      v4 = dword_6DFD60;
      if ( OALBase::trashCan >= (unsigned int)(dword_6DFD60 + 1) )
      {
        v6 = (void *)dword_6DFD64;
      }
      else
      {
        v5 = 4 * (dword_6DFD60 + 1) / 3u + 3;
        v6 = malloc(4 * v5);
        v7 = (void *)dword_6DFD64;
        if ( dword_6DFD64 )
        {
          memcpy_0(v6, (const void *)dword_6DFD64, 4 * v4);
          free(v7);
          v4 = dword_6DFD60;
        }
        dword_6DFD64 = (int)v6;
        OALBase::trashCan = v5;
      }
      *((_DWORD *)v6 + v4) = v2;
      ++dword_6DFD60;
      OS_MutexRelease((pthread_mutex_t *)trashMutex);
    }
  }
  *((_DWORD *)this + 1) = 0;
}


// ============================================================

// Address: 0x3919b8
// Original: _ZN15CAEAudioChannelD0Ev
// Demangled: CAEAudioChannel::~CAEAudioChannel()
void __fastcall __noreturn CAEAudioChannel::~CAEAudioChannel(CAEAudioChannel *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x3919bc
// Original: _ZN15CAEAudioChannel9SetVolumeEf
// Demangled: CAEAudioChannel::SetVolume(float)
int __fastcall CAEAudioChannel::SetVolume(int this, float a2)
{
  int v2; // r4
  int v4; // r6
  int v5; // r0
  float v6; // s0
  OALSource *v7; // r1

  v2 = this;
  v4 = *(_DWORD *)(this + 4);
  if ( v4 && *(float *)(this + 24) != a2 )
  {
    OALSource::ObtainSource(*(OALSource **)(this + 4));
    v5 = *(_DWORD *)(v4 + 40);
    if ( !v5 )
    {
      *(_DWORD *)(v4 + 40) = 4116;
      j_alGetSourcei();
      v5 = *(_DWORD *)(v4 + 40);
    }
    if ( v5 == 4114 )
    {
      v6 = *(float *)(v2 + 24);
      if ( fabsf(a2 - v6) > 60.0 )
      {
        v7 = *(OALSource **)(v2 + 4);
        if ( v6 >= a2 )
        {
          this = CAESmoothFadeThread::RequestFade((CAESmoothFadeThread *)&AESmoothFadeThread, v7, a2, -1, 0);
          if ( this )
            goto LABEL_10;
        }
        else
        {
          this = CAESmoothFadeThread::RequestFade((CAESmoothFadeThread *)&AESmoothFadeThread, v7, a2, -2, 0);
          if ( this )
          {
LABEL_10:
            *(float *)(v2 + 24) = a2;
            return this;
          }
        }
      }
    }
    this = CAESmoothFadeThread::SetBufferVolume((CAESmoothFadeThread *)&AESmoothFadeThread, *(OALSource **)(v2 + 4), a2);
    goto LABEL_10;
  }
  return this;
}


// ============================================================

// Address: 0x391aa8
// Original: _ZN15CAEAudioChannel15IsBufferPlayingEv
// Demangled: CAEAudioChannel::IsBufferPlaying(void)
bool __fastcall CAEAudioChannel::IsBufferPlaying(CAEAudioChannel *this)
{
  int v1; // r4
  int v2; // r1

  v1 = *((_DWORD *)this + 1);
  if ( !v1 )
    return 0;
  OALSource::ObtainSource(*((OALSource **)this + 1));
  v2 = *(_DWORD *)(v1 + 40);
  if ( !v2 )
  {
    *(_DWORD *)(v1 + 40) = 4116;
    j_alGetSourcei();
    v2 = *(_DWORD *)(v1 + 40);
  }
  return v2 == 4114;
}


// ============================================================

// Address: 0x391ae2
// Original: _ZN15CAEAudioChannel11SetPositionEP7CVector
// Demangled: CAEAudioChannel::SetPosition(CVector *)
int __fastcall CAEAudioChannel::SetPosition(int this, CVector *a2)
{
  int v2; // r5

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
  {
    OALSource::ObtainSource(*(OALSource **)(this + 4));
    return j_alSource3f(*(_DWORD *)(v2 + 8), 4100, *(_DWORD *)a2, *((_DWORD *)a2 + 1), *((float *)a2 + 2));
  }
  return this;
}


// ============================================================

// Address: 0x391b0e
// Original: _ZN15CAEAudioChannel9GetVolumeEv
// Demangled: CAEAudioChannel::GetVolume(void)
int __fastcall CAEAudioChannel::GetVolume(CAEAudioChannel *this)
{
  return *((_DWORD *)this + 6);
}


// ============================================================

// Address: 0x391b12
// Original: _ZN15CAEAudioChannel26GetCurrentPlaybackPositionEv
// Demangled: CAEAudioChannel::GetCurrentPlaybackPosition(void)
int __fastcall CAEAudioChannel::GetCurrentPlaybackPosition(CAEAudioChannel *this)
{
  int v1; // r4
  int v3; // [sp+4h] [bp-Ch]

  v1 = *((_DWORD *)this + 1);
  if ( !v1 )
    return 0;
  j_alGetSourcei();
  return *(_DWORD *)(v1 + 32) + v3;
}


// ============================================================

// Address: 0x391b38
// Original: _ZN15CAEAudioChannel20ConvertFromBytesToMSEj
// Demangled: CAEAudioChannel::ConvertFromBytesToMS(uint)
int __fastcall CAEAudioChannel::ConvertFromBytesToMS(
        CAEAudioChannel *this,
        CAEAudioUtility *a2,
        int a3,
        unsigned __int16 a4)
{
  return (__int16)CAEAudioUtility::ConvertFromBytesToMS(a2, *((_DWORD *)this + 9), 1u, a4);
}


// ============================================================

// Address: 0x391b4c
// Original: _ZN15CAEAudioChannel20ConvertFromMsToBytesEj
// Demangled: CAEAudioChannel::ConvertFromMsToBytes(uint)
int __fastcall CAEAudioChannel::ConvertFromMsToBytes(
        CAEAudioChannel *this,
        CAEAudioUtility *a2,
        int a3,
        unsigned __int16 a4)
{
  return sub_1956DC(a2, *((_DWORD *)this + 9), 1u, a4);
}


// ============================================================

// Address: 0x391b58
// Original: _ZN15CAEAudioChannel25SetFrequencyScalingFactorEf
// Demangled: CAEAudioChannel::SetFrequencyScalingFactor(float)
int __fastcall CAEAudioChannel::SetFrequencyScalingFactor(int this, float a2)
{
  int v2; // r4
  int v3; // r5
  char *v4; // r8
  char v5; // r5
  float v6; // s16
  unsigned int v7; // s18
  OALSource *v8; // r5
  int v9; // r6
  int v10; // r5
  int v11; // r4

  v2 = this;
  if ( a2 == 0.0 )
  {
    v3 = *(_DWORD *)(this + 4);
    v4 = (char *)(this + 28);
    if ( v3 && (this = (unsigned __int8)*v4, !*v4) )
    {
      OALSource::ObtainSource(*(OALSource **)(v2 + 4));
      this = *(_DWORD *)(v3 + 40);
      if ( !this )
      {
        *(_DWORD *)(v3 + 40) = 4116;
        j_alGetSourcei();
        this = *(_DWORD *)(v3 + 40);
      }
      v5 = 1;
      if ( this == 4114 )
      {
        this = CAESmoothFadeThread::RequestFade(
                 (CAESmoothFadeThread *)&AESmoothFadeThread,
                 *(OALSource **)(v2 + 4),
                 -100.0,
                 -1,
                 1);
        if ( !this )
        {
          v11 = *(_DWORD *)(v2 + 4);
          if ( *(_DWORD *)(v11 + 12) == 2 )
            OALSource::UnqueueBuffers((OALSource *)v11);
          j_alSourceStop();
          v5 = 1;
          *(_DWORD *)(v11 + 40) = 4116;
          this = 0;
          *(_DWORD *)(v11 + 32) = 0;
          *(_BYTE *)(v11 + 44) = 1;
        }
      }
    }
    else
    {
      v5 = 1;
    }
LABEL_21:
    *v4 = v5;
    return this;
  }
  v6 = (float)*(unsigned int *)(this + 36);
  v7 = (unsigned int)(float)(v6 * a2);
  if ( *(_DWORD *)(this + 32) != v7 )
  {
    v8 = *(OALSource **)(this + 4);
    *(_DWORD *)(this + 32) = v7;
    if ( v8 )
    {
      OALSource::ObtainSource(v8);
      j_alSourcef(*((_DWORD *)v8 + 2), 4099, (float)v7 / v6);
    }
  }
  v4 = (char *)(v2 + 28);
  this = *(unsigned __int8 *)(v2 + 28);
  if ( *(_BYTE *)(v2 + 28) )
  {
    v9 = *(_DWORD *)(v2 + 4);
    if ( v9 )
    {
      v10 = *(unsigned __int8 *)(v2 + 40);
      OALSource::ObtainSource(*(OALSource **)(v2 + 4));
      if ( *(_DWORD *)(v9 + 12) != 2 )
        j_alSourcei(*(_DWORD *)(v9 + 8), 4103, v10 != 0);
      this = OALSource::Play(*(OALSource **)(v2 + 4));
    }
    v5 = 0;
    goto LABEL_21;
  }
  return this;
}


// ============================================================

// Address: 0x391c7c
// Original: _ZN15CAEAudioChannel12SetFrequencyEj
// Demangled: CAEAudioChannel::SetFrequency(uint)
int __fastcall CAEAudioChannel::SetFrequency(int this, unsigned int a2)
{
  OALSource *v2; // r5

  if ( *(_DWORD *)(this + 32) != a2 )
  {
    v2 = *(OALSource **)(this + 4);
    *(_DWORD *)(this + 32) = a2;
    if ( v2 )
    {
      OALSource::ObtainSource(v2);
      return sub_198FC8();
    }
  }
  return this;
}


// ============================================================

// Address: 0x391cca
// Original: _ZN15CAEAudioChannel20SetOriginalFrequencyEj
// Demangled: CAEAudioChannel::SetOriginalFrequency(uint)
int __fastcall CAEAudioChannel::SetOriginalFrequency(int this, unsigned int a2)
{
  if ( *(_DWORD *)(this + 32) != a2 )
    *(_DWORD *)(this + 32) = a2;
  *(_DWORD *)(this + 36) = a2;
  return this;
}


// ============================================================

// Address: 0x391cd6
// Original: _ZN15CAEAudioChannel12UpdateStatusEv
// Demangled: CAEAudioChannel::UpdateStatus(void)
void __fastcall CAEAudioChannel::UpdateStatus(CAEAudioChannel *this)
{
  ;
}


// ============================================================

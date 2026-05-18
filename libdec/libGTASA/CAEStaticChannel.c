
// Address: 0x196464
// Original: j__ZN16CAEStaticChannel14SetAudioBufferEP9OALBuffertsst
// Demangled: CAEStaticChannel::SetAudioBuffer(OALBuffer *,ushort,short,short,ushort)
// attributes: thunk
int __fastcall CAEStaticChannel::SetAudioBuffer(
        CAEStaticChannel *this,
        OALBuffer *a2,
        unsigned __int16 a3,
        __int16 a4,
        __int16 a5,
        unsigned __int16 a6)
{
  return _ZN16CAEStaticChannel14SetAudioBufferEP9OALBuffertsst(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19e554
// Original: j__ZN16CAEStaticChannelC2Etjt
// Demangled: CAEStaticChannel::CAEStaticChannel(ushort,uint,ushort)
// attributes: thunk
void __fastcall CAEStaticChannel::CAEStaticChannel(
        CAEStaticChannel *this,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  _ZN16CAEStaticChannelC2Etjt(this, a2, a3, a4);
}


// ============================================================

// Address: 0x3a9034
// Original: _ZN16CAEStaticChannelC2Etjt
// Demangled: CAEStaticChannel::CAEStaticChannel(ushort,uint,ushort)
void __fastcall CAEStaticChannel::CAEStaticChannel(
        CAEStaticChannel *this,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  int v4; // r0

  CAEAudioChannel::CAEAudioChannel(this, a2, a3, a4);
  *(_BYTE *)(v4 + 43) = 0;
  *(_BYTE *)(v4 + 45) = 0;
  *(_DWORD *)v4 = &off_667870;
}


// ============================================================

// Address: 0x3a9058
// Original: _ZN16CAEStaticChannelD2Ev
// Demangled: CAEStaticChannel::~CAEStaticChannel()
void __fastcall CAEStaticChannel::~CAEStaticChannel(CAEStaticChannel *this)
{
  OALBase *v2; // r0

  v2 = (OALBase *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &off_667870;
  if ( v2 )
  {
    --g_numSoundChannelsUsed;
    OALBase::Release(v2);
  }
  *((_DWORD *)this + 1) = 0;
  j_CAEAudioChannel::~CAEAudioChannel(this);
}


// ============================================================

// Address: 0x3a9094
// Original: _ZN16CAEStaticChannelD0Ev
// Demangled: CAEStaticChannel::~CAEStaticChannel()
void __fastcall CAEStaticChannel::~CAEStaticChannel(CAEStaticChannel *this)
{
  OALBase *v2; // r0
  void *v3; // r0

  v2 = (OALBase *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &off_667870;
  if ( v2 )
  {
    --g_numSoundChannelsUsed;
    OALBase::Release(v2);
  }
  *((_DWORD *)this + 1) = 0;
  CAEAudioChannel::~CAEAudioChannel(this);
  operator delete(v3);
}


// ============================================================

// Address: 0x3a90d4
// Original: _ZN16CAEStaticChannel4PlayEsaf
// Demangled: CAEStaticChannel::Play(short,signed char,float)
int __fastcall CAEStaticChannel::Play(CAEStaticChannel *this, CAEAudioUtility *a2, signed __int8 a3, float a4)
{
  char v6; // r0
  OALSource *v7; // r5
  int v8; // r6
  int result; // r0

  if ( !*((_BYTE *)this + 40) )
  {
    if ( !a2 )
    {
      v6 = 0;
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  v6 = 0;
  if ( a2 && !*((_DWORD *)this + 12) )
  {
LABEL_6:
    v7 = (OALSource *)*((_DWORD *)this + 1);
    v8 = CAEAudioChannel::ConvertFromMsToBytes(this, a2);
    OALSource::ObtainSource(v7);
    j_alSourcei(*((_DWORD *)v7 + 2), 4134, v8);
    *((_DWORD *)v7 + 8) = v8;
    v6 = 1;
  }
LABEL_8:
  *((_BYTE *)this + 28) = a4 == 0.0;
  *((_BYTE *)this + 44) = v6;
  result = 1;
  *((_BYTE *)this + 45) = 1;
  return result;
}


// ============================================================

// Address: 0x3a9140
// Original: _ZN16CAEStaticChannel12SetAudioDataEPvjtsst
// Demangled: CAEStaticChannel::SetAudioData(void *,uint,ushort,short,short,ushort)
int __fastcall CAEStaticChannel::SetAudioData(
        CAEStaticChannel *this,
        void *a2,
        size_t a3,
        unsigned __int16 a4,
        __int16 a5,
        int a6,
        unsigned int a7)
{
  unsigned int v7; // r8
  bool v9; // zf
  int v13; // r6
  OALBase *v14; // r0
  int v15; // r0
  size_t v16; // r6
  size_t v17; // r0
  int v18; // r0
  OALSource *v19; // r0
  size_t v20; // r6
  int v21; // r0
  char *v22; // r9
  size_t v23; // r2
  size_t v24; // r10
  CAEAudioUtility *v25; // r6
  size_t v26; // r5
  int v27; // r11
  int v28; // r8
  int v29; // r0
  int v30; // r0
  int v31; // r5
  int v32; // r0
  char v33; // r1
  unsigned int v34; // r1
  __int64 v35; // kr00_8
  OALSource *v36; // r5
  OALSource *v37; // r0

  v9 = a3 == 0;
  if ( a3 )
  {
    v7 = a7;
    v9 = a7 == 0;
  }
  v13 = 0;
  if ( !v9 )
  {
    v14 = (OALBase *)*((_DWORD *)this + 1);
    if ( v14 )
    {
      --g_numSoundChannelsUsed;
      OALBase::Release(v14);
    }
    *((_DWORD *)this + 1) = 0;
    *((_BYTE *)this + 40) = 0;
    *((_BYTE *)this + 43) = 0;
    *((_BYTE *)this + 28) = 0;
    *((_DWORD *)this + 12) = 0;
    *((_DWORD *)this + 13) = 0;
    *((_DWORD *)this + 14) = 0;
    v15 = a3;
    *((_DWORD *)this + 20) = a2;
    *((_DWORD *)this + 4) = a3;
    *((_WORD *)this + 42) = a4;
    *((_WORD *)this + 44) = a5;
    if ( a6 != -1 )
    {
      *((_BYTE *)this + 40) = 1;
      v15 = a3;
      *((_DWORD *)this + 12) = 2 * a6;
      *((_DWORD *)this + 13) = a3;
      if ( a6 )
      {
        v16 = a3 - 2 * a6;
        v17 = 24000;
        if ( a3 > 0x5DC0 )
          v17 = a3;
        v18 = v17 / v16;
        *((_DWORD *)this + 18) = v16;
        *((_DWORD *)this + 14) = v18 + 1;
        v15 = (v18 + 1) * v16;
      }
    }
    *((_DWORD *)this + 2) = v15;
    *((_DWORD *)this + 8) = v7;
    *((_DWORD *)this + 9) = v7;
    v19 = (OALSource *)operator new(0x30u);
    OALSource::OALSource(v19);
    v20 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 1) = v21;
    v22 = (char *)malloc(v20);
    memset(v22, 0, v20);
    ++g_numSoundChannelsUsed;
    v23 = *((_DWORD *)this + 12);
    if ( v23 )
    {
      v24 = v20 - v23;
      memcpy_1(&v22[v20 - v23], *((const void **)this + 20), v23);
      v25 = (CAEAudioUtility *)*((_DWORD *)this + 12);
      v26 = *((_DWORD *)this + 18);
      v27 = *((_DWORD *)this + 2);
      v28 = *((_DWORD *)this + 14);
      v29 = (unsigned int)v25 / v26 + 1;
      *((_WORD *)this + 38) = v29;
      *((_DWORD *)this + 17) = v27 - v26 * (unsigned __int16)v29;
      if ( v28 != (unsigned __int16)v29 )
      {
        memcpy_1(v22, (char *)v25 + *((_DWORD *)this + 20), v26);
        if ( *((_DWORD *)this + 14) - (unsigned int)*((unsigned __int16 *)this + 38) >= 2 )
        {
          v30 = 1;
          v31 = 1;
          do
          {
            memcpy_1(
              &v22[*((_DWORD *)this + 18) * v30],
              (const void *)(*((_DWORD *)this + 12) + *((_DWORD *)this + 20)),
              *((_DWORD *)this + 18));
            v30 = (unsigned __int16)++v31;
          }
          while ( *((_DWORD *)this + 14) - (unsigned int)*((unsigned __int16 *)this + 38) > (unsigned __int16)v31 );
        }
        v25 = (CAEAudioUtility *)*((_DWORD *)this + 12);
      }
      v7 = a7;
      v32 = CAEAudioChannel::ConvertFromBytesToMS(this, v25);
      v33 = 1;
      *((_DWORD *)this + 16) = v32;
    }
    else
    {
      memcpy_1(v22, *((const void **)this + 20), a3);
      v34 = *((_DWORD *)this + 4);
      if ( v34 > a3 )
        memset(&v22[a3], 0, v34 - a3);
      v24 = 0;
      v33 = 0;
    }
    v35 = *(_QWORD *)((char *)this + 4);
    v13 = 1;
    *((_BYTE *)this + 43) = v33;
    OALSource::SetData((OALSource *)v35, v22, HIDWORD(v35), v7, 1u);
    v36 = (OALSource *)*((_DWORD *)this + 1);
    OALSource::ObtainSource(v36);
    j_alSourcei(*((_DWORD *)v36 + 2), 4134, v24);
    *((_DWORD *)v36 + 8) = v24;
    free(v22);
    v37 = (OALSource *)*((_DWORD *)this + 1);
    *((_DWORD *)this + 6) = -1027080192;
    OALSource::SetVolume(v37, -100.0);
  }
  return v13;
}


// ============================================================

// Address: 0x3a9300
// Original: _ZN16CAEStaticChannel14SetAudioBufferEP9OALBuffertsst
// Demangled: CAEStaticChannel::SetAudioBuffer(OALBuffer *,ushort,short,short,ushort)
int __fastcall CAEStaticChannel::SetAudioBuffer(
        CAEStaticChannel *this,
        OALBuffer *a2,
        unsigned __int16 a3,
        __int16 a4,
        int a5,
        int a6)
{
  OALBase *v10; // r0
  int v11; // r0
  OALSource *v12; // r0
  OALSource *v13; // r0
  OALSource *v14; // r5
  OALSource *v15; // r0

  if ( !a6 )
    return 0;
  v10 = (OALBase *)*((_DWORD *)this + 1);
  if ( v10 )
  {
    --g_numSoundChannelsUsed;
    OALBase::Release(v10);
  }
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 40) = 0;
  *((_BYTE *)this + 43) = 0;
  *((_BYTE *)this + 28) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 20) = a2;
  v11 = *((_DWORD *)a2 + 4);
  *((_WORD *)this + 42) = a3;
  *((_DWORD *)this + 4) = v11;
  *((_WORD *)this + 44) = a4;
  if ( a5 != -1 )
  {
    *((_BYTE *)this + 40) = 1;
    *((_DWORD *)this + 12) = 2 * a5;
    *((_DWORD *)this + 13) = v11;
  }
  *((_DWORD *)this + 2) = v11;
  *((_DWORD *)this + 8) = a6;
  *((_DWORD *)this + 9) = a6;
  v12 = (OALSource *)operator new(0x30u);
  OALSource::OALSource(v12);
  *((_DWORD *)this + 1) = v13;
  ++g_numSoundChannelsUsed;
  OALSource::SetBuffer(v13, a2);
  v14 = (OALSource *)*((_DWORD *)this + 1);
  OALSource::ObtainSource(v14);
  j_alSourcei(*((_DWORD *)v14 + 2), 4134, 0);
  *((_DWORD *)v14 + 8) = 0;
  v15 = (OALSource *)*((_DWORD *)this + 1);
  *((_DWORD *)this + 6) = -1027080192;
  OALSource::SetVolume(v15, -100.0);
  return 1;
}


// ============================================================

// Address: 0x3a93c8
// Original: _ZN16CAEStaticChannel13SynchPlaybackEv
// Demangled: CAEStaticChannel::SynchPlayback(void)
OALSource *__fastcall CAEStaticChannel::SynchPlayback(CAEStaticChannel *this)
{
  OALSource *result; // r0
  bool v3; // zf
  OALSource *v4; // r6
  int v5; // r5

  result = (OALSource *)*((_DWORD *)this + 1);
  v3 = result == 0;
  if ( result )
    v3 = *((_BYTE *)this + 45) == 0;
  if ( !v3 && !*((_BYTE *)this + 28) )
  {
    if ( *((_BYTE *)this + 44) )
    {
      OALSource::SetVolume(result, 0.0);
      if ( !CAESmoothFadeThread::RequestFade(
              (CAESmoothFadeThread *)&AESmoothFadeThread,
              *((OALSource **)this + 1),
              *((float *)this + 6),
              -2,
              0) )
        OALSource::SetVolume(*((OALSource **)this + 1), *((float *)this + 6));
    }
    v4 = (OALSource *)*((_DWORD *)this + 1);
    v5 = *((unsigned __int8 *)this + 40);
    OALSource::ObtainSource(v4);
    if ( *((_DWORD *)v4 + 3) != 2 )
      j_alSourcei(*((_DWORD *)v4 + 2), 4103, v5 != 0);
    OALSource::Play(*((OALSource **)this + 1));
    result = (OALSource *)CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 45) = 0;
    *((_DWORD *)this + 15) = result;
  }
  return result;
}


// ============================================================

// Address: 0x3a945c
// Original: _ZN16CAEStaticChannel7ServiceEv
// Demangled: CAEStaticChannel::Service(void)
int __fastcall CAEStaticChannel::Service(CAEStaticChannel *this)
{
  int result; // r0
  OALSource *v3; // r5
  OALBase *v4; // r0

  result = *((_DWORD *)this + 1);
  if ( result )
  {
    CAEAudioChannel::UpdateStatus(this);
    result = *((unsigned __int8 *)this + 28);
    if ( !*((_BYTE *)this + 28) )
    {
      v3 = (OALSource *)*((_DWORD *)this + 1);
      OALSource::ObtainSource(v3);
      result = *((_DWORD *)v3 + 10);
      if ( !result )
      {
        *((_DWORD *)v3 + 10) = 4116;
        j_alGetSourcei();
        result = *((_DWORD *)v3 + 10);
      }
      if ( result != 4114 )
      {
        v4 = (OALBase *)*((_DWORD *)this + 1);
        if ( v4 )
        {
          --g_numSoundChannelsUsed;
          OALBase::Release(v4);
        }
        result = 0;
        *((_DWORD *)this + 1) = 0;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x3a94bc
// Original: _ZN16CAEStaticChannel14IsSoundPlayingEv
// Demangled: CAEStaticChannel::IsSoundPlaying(void)
bool __fastcall CAEStaticChannel::IsSoundPlaying(CAEStaticChannel *this)
{
  OALSource *v1; // r4
  bool v2; // zf
  int v4; // r1

  v1 = (OALSource *)*((_DWORD *)this + 1);
  if ( !v1 )
    return 0;
  v2 = *((_BYTE *)this + 28) == 0;
  if ( !*((_BYTE *)this + 28) )
    v2 = *((_BYTE *)this + 45) == 0;
  if ( !v2 )
    return 1;
  OALSource::ObtainSource(v1);
  v4 = *((_DWORD *)v1 + 10);
  if ( !v4 )
  {
    *((_DWORD *)v1 + 10) = 4116;
    j_alGetSourcei();
    v4 = *((_DWORD *)v1 + 10);
  }
  return v4 == 4114;
}


// ============================================================

// Address: 0x3a9508
// Original: _ZN16CAEStaticChannel11GetPlayTimeEv
// Demangled: CAEStaticChannel::GetPlayTime(void)
int __fastcall CAEStaticChannel::GetPlayTime(CAEStaticChannel *this)
{
  CAEAudioUtility *CurrentPlaybackPosition; // r0

  if ( !(*(int (__fastcall **)(CAEStaticChannel *))(*(_DWORD *)this + 12))(this) )
    return -1;
  CurrentPlaybackPosition = (CAEAudioUtility *)CAEAudioChannel::GetCurrentPlaybackPosition(this);
  return CAEAudioChannel::ConvertFromBytesToMS(this, CurrentPlaybackPosition);
}


// ============================================================

// Address: 0x3a952e
// Original: _ZN16CAEStaticChannel9GetLengthEv
// Demangled: CAEStaticChannel::GetLength(void)
int __fastcall CAEStaticChannel::GetLength(CAEAudioUtility **this)
{
  return CAEAudioChannel::ConvertFromBytesToMS((CAEAudioChannel *)this, this[4]);
}


// ============================================================

// Address: 0x3a953c
// Original: _ZN16CAEStaticChannel4StopEv
// Demangled: CAEStaticChannel::Stop(void)
int __fastcall CAEStaticChannel::Stop(CAEStaticChannel *this)
{
  int v2; // r5
  int v3; // r0
  int v4; // r5
  OALBase *v5; // r0
  int result; // r0

  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    OALSource::ObtainSource(*((OALSource **)this + 1));
    v3 = *(_DWORD *)(v2 + 40);
    if ( !v3 )
    {
      *(_DWORD *)(v2 + 40) = 4116;
      j_alGetSourcei();
      v3 = *(_DWORD *)(v2 + 40);
    }
    if ( v3 == 4114
      && !CAESmoothFadeThread::RequestFade(
            (CAESmoothFadeThread *)&AESmoothFadeThread,
            *((OALSource **)this + 1),
            -100.0,
            -1,
            1) )
    {
      v4 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(v4 + 12) == 2 )
        OALSource::UnqueueBuffers(*((OALSource **)this + 1));
      j_alSourceStop();
      *(_DWORD *)(v4 + 40) = 4116;
      *(_DWORD *)(v4 + 32) = 0;
      *(_BYTE *)(v4 + 44) = 1;
    }
    v5 = (OALBase *)*((_DWORD *)this + 1);
    if ( v5 )
    {
      --g_numSoundChannelsUsed;
      OALBase::Release(v5);
    }
  }
  result = 0;
  *((_BYTE *)this + 28) = 0;
  *((_DWORD *)this + 1) = 0;
  return result;
}


// ============================================================

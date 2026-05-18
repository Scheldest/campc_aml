
// Address: 0x18bd9c
// Original: j__ZN19CAEStreamingChannel14UpdatePlayTimeEv
// Demangled: CAEStreamingChannel::UpdatePlayTime(void)
// attributes: thunk
int __fastcall CAEStreamingChannel::UpdatePlayTime(CAEStreamingChannel *this)
{
  return _ZN19CAEStreamingChannel14UpdatePlayTimeEv(this);
}


// ============================================================

// Address: 0x18e930
// Original: j__ZN19CAEStreamingChannel13SetNextStreamEP19CAEStreamingDecoder
// Demangled: CAEStreamingChannel::SetNextStream(CAEStreamingDecoder *)
// attributes: thunk
int __fastcall CAEStreamingChannel::SetNextStream(CAEStreamingChannel *this, CAEStreamingDecoder *a2)
{
  return _ZN19CAEStreamingChannel13SetNextStreamEP19CAEStreamingDecoder(this, a2);
}


// ============================================================

// Address: 0x190930
// Original: j__ZN19CAEStreamingChannel9SetBassEQEaf
// Demangled: CAEStreamingChannel::SetBassEQ(signed char,float)
// attributes: thunk
int __fastcall CAEStreamingChannel::SetBassEQ(CAEStreamingChannel *this, signed __int8 a2, float a3)
{
  return _ZN19CAEStreamingChannel9SetBassEQEaf(this, a2, a3);
}


// ============================================================

// Address: 0x191a3c
// Original: j__ZN19CAEStreamingChannelC2Et
// Demangled: CAEStreamingChannel::CAEStreamingChannel(ushort)
// attributes: thunk
void __fastcall CAEStreamingChannel::CAEStreamingChannel(CAEStreamingChannel *this, unsigned __int16 a2)
{
  _ZN19CAEStreamingChannelC2Et(this, a2);
}


// ============================================================

// Address: 0x192708
// Original: j__ZN19CAEStreamingChannel10FillBufferEPvm
// Demangled: CAEStreamingChannel::FillBuffer(void *,ulong)
// attributes: thunk
int __fastcall CAEStreamingChannel::FillBuffer(CAEStreamingChannel *this, void *a2, unsigned int a3)
{
  return _ZN19CAEStreamingChannel10FillBufferEPvm(this, a2, a3);
}


// ============================================================

// Address: 0x19ae0c
// Original: j__ZN19CAEStreamingChannelD2Ev
// Demangled: CAEStreamingChannel::~CAEStreamingChannel()
// attributes: thunk
void __fastcall CAEStreamingChannel::~CAEStreamingChannel(CAEStreamingChannel *this)
{
  _ZN19CAEStreamingChannelD2Ev(this);
}


// ============================================================

// Address: 0x19b4fc
// Original: j__ZN19CAEStreamingChannel13PrepareStreamEP19CAEStreamingDecoderab
// Demangled: CAEStreamingChannel::PrepareStream(CAEStreamingDecoder *,signed char,bool)
// attributes: thunk
int __fastcall CAEStreamingChannel::PrepareStream(
        CAEStreamingChannel *this,
        CAEStreamingDecoder *a2,
        signed __int8 a3,
        bool a4)
{
  return _ZN19CAEStreamingChannel13PrepareStreamEP19CAEStreamingDecoderab(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19d224
// Original: j__ZN19CAEStreamingChannel17GetPlayingTrackIDEv
// Demangled: CAEStreamingChannel::GetPlayingTrackID(void)
// attributes: thunk
int __fastcall CAEStreamingChannel::GetPlayingTrackID(CAEStreamingChannel *this)
{
  return _ZN19CAEStreamingChannel17GetPlayingTrackIDEv(this);
}


// ============================================================

// Address: 0x19dec0
// Original: j__ZN19CAEStreamingChannel16GetActiveTrackIDEv
// Demangled: CAEStreamingChannel::GetActiveTrackID(void)
// attributes: thunk
int __fastcall CAEStreamingChannel::GetActiveTrackID(CAEStreamingChannel *this)
{
  return _ZN19CAEStreamingChannel16GetActiveTrackIDEv(this);
}


// ============================================================

// Address: 0x19e600
// Original: j__ZN19CAEStreamingChannel10InitialiseEv
// Demangled: CAEStreamingChannel::Initialise(void)
// attributes: thunk
int __fastcall CAEStreamingChannel::Initialise(CAEStreamingChannel *this)
{
  return _ZN19CAEStreamingChannel10InitialiseEv(this);
}


// ============================================================

// Address: 0x19f888
// Original: j__ZN19CAEStreamingChannel8SetReadyEv
// Demangled: CAEStreamingChannel::SetReady(void)
// attributes: thunk
int __fastcall CAEStreamingChannel::SetReady(CAEStreamingChannel *this)
{
  return _ZN19CAEStreamingChannel8SetReadyEv(this);
}


// ============================================================

// Address: 0x3a95d8
// Original: _ZN19CAEStreamingChannelC2Et
// Demangled: CAEStreamingChannel::CAEStreamingChannel(ushort)
void __fastcall CAEStreamingChannel::CAEStreamingChannel(CAEStreamingChannel *this, unsigned __int16 a2)
{
  _DWORD *v2; // r0

  CAEAudioChannel::CAEAudioChannel(this, a2, 0xBB80u, 0x10u);
  *(int *)((char *)&elf_hash_chain[20404] + (_DWORD)v2) = 0;
  v2[36879] = 0;
  v2[36880] = -6;
  v2[36881] = 0;
  *(int *)((char *)&elf_hash_chain[20410] + (_DWORD)v2) = 0;
  *(int *)((char *)&elf_hash_chain[20415] + (_DWORD)v2) = 1065353216;
  v2[13] = 0;
  v2[12] = 0;
  *(_DWORD *)((char *)v2 + 47) = 0;
  *(_DWORD *)((char *)v2 + 43) = 0;
  *v2 = &off_6678A0;
}


// ============================================================

// Address: 0x3a9650
// Original: _ZN19CAEStreamingChannelD2Ev
// Demangled: CAEStreamingChannel::~CAEStreamingChannel()
void __fastcall CAEStreamingChannel::~CAEStreamingChannel(CAEStreamingChannel *this)
{
  OALSource *v2; // r1
  int v3; // r5
  OALBase *v4; // r0
  int v5; // r0
  int v6; // r0

  v2 = (OALSource *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &off_6678A0;
  if ( !CAESmoothFadeThread::RequestFade((CAESmoothFadeThread *)&AESmoothFadeThread, v2, -100.0, 35, 1) )
  {
    v3 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(v3 + 12) == 2 )
      OALSource::UnqueueBuffers(*((OALSource **)this + 1));
    j_alSourceStop();
    *(_DWORD *)(v3 + 40) = 4116;
    *(_DWORD *)(v3 + 32) = 0;
    *(_BYTE *)(v3 + 44) = 1;
  }
  v4 = (OALBase *)*((_DWORD *)this + 1);
  *(int *)((char *)&elf_hash_chain[20410] + (_DWORD)this) = 0;
  *(int *)((char *)&elf_hash_chain[20406] + (_DWORD)this) = -5;
  if ( v4 )
    OALBase::Release(v4);
  *((_DWORD *)this + 1) = 0;
  v5 = *(int *)((char *)&elf_hash_chain[20404] + (_DWORD)this);
  if ( v5 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 28))(v5);
    *(int *)((char *)&elf_hash_chain[20404] + (_DWORD)this) = 0;
  }
  v6 = *((_DWORD *)this + 36879);
  if ( v6 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 28))(v6);
    *((_DWORD *)this + 36879) = 0;
  }
  j_CAEAudioChannel::~CAEAudioChannel(this);
}


// ============================================================

// Address: 0x3a970c
// Original: _ZN19CAEStreamingChannelD0Ev
// Demangled: CAEStreamingChannel::~CAEStreamingChannel()
void __fastcall CAEStreamingChannel::~CAEStreamingChannel(CAEStreamingChannel *this)
{
  void *v1; // r0

  CAEStreamingChannel::~CAEStreamingChannel(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x3a971c
// Original: _ZN19CAEStreamingChannel9GetLengthEv
// Demangled: CAEStreamingChannel::GetLength(void)
int __fastcall CAEStreamingChannel::GetLength(CAEStreamingChannel *this)
{
  int v1; // r0

  v1 = *((_DWORD *)this + 36878);
  if ( v1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
  else
    return -1;
}


// ============================================================

// Address: 0x3a9736
// Original: _ZN19CAEStreamingChannel14UpdatePlayTimeEv
// Demangled: CAEStreamingChannel::UpdatePlayTime(void)
int __fastcall CAEStreamingChannel::UpdatePlayTime(CAEStreamingChannel *this)
{
  int result; // r0
  int v3; // r5
  unsigned int v4; // r0
  int CurrentTimeInMilliseconds; // r2
  int v6; // r1
  int v7; // [sp+4h] [bp-Ch]

  result = *((_DWORD *)this + 36880);
  if ( (result | 2) == 0xFFFFFFFF )
  {
    v3 = *((_DWORD *)this + 1);
    j_alGetSourcei();
    v4 = (unsigned int)(500 * (*(_DWORD *)(v3 + 32) + v7)) / *((_DWORD *)this + 8);
    *((_DWORD *)this + 36882) = v4;
    CurrentTimeInMilliseconds = CAEAudioUtility::GetCurrentTimeInMilliseconds((CAEAudioUtility *)v4);
    *((_DWORD *)this + 36887) = v6;
    result = *((_DWORD *)this + 36882);
    *((_DWORD *)this + 36886) = CurrentTimeInMilliseconds;
    if ( result <= 0 )
      return 0;
  }
  else
  {
    *((_DWORD *)this + 36882) = result;
  }
  return result;
}


// ============================================================

// Address: 0x3a97ae
// Original: _ZN19CAEStreamingChannel11GetPlayTimeEv
// Demangled: CAEStreamingChannel::GetPlayTime(void)
int __fastcall CAEStreamingChannel::GetPlayTime(CAEStreamingChannel *this)
{
  int result; // r0
  int v3; // r5
  unsigned int v4; // r0
  int CurrentTimeInMilliseconds; // r2
  int v6; // r1
  int v7; // [sp+4h] [bp-Ch]

  result = *((_DWORD *)this + 36880);
  if ( (result | 2) == 0xFFFFFFFF )
  {
    v3 = *((_DWORD *)this + 1);
    j_alGetSourcei();
    v4 = (unsigned int)(500 * (*(_DWORD *)(v3 + 32) + v7)) / *((_DWORD *)this + 8);
    *((_DWORD *)this + 36882) = v4;
    CurrentTimeInMilliseconds = CAEAudioUtility::GetCurrentTimeInMilliseconds((CAEAudioUtility *)v4);
    *((_DWORD *)this + 36887) = v6;
    result = *((_DWORD *)this + 36882);
    *((_DWORD *)this + 36886) = CurrentTimeInMilliseconds;
    if ( result <= 0 )
      return 0;
  }
  return result;
}


// ============================================================

// Address: 0x3a9818
// Original: _ZN19CAEStreamingChannel16GetActiveTrackIDEv
// Demangled: CAEStreamingChannel::GetActiveTrackID(void)
int __fastcall CAEStreamingChannel::GetActiveTrackID(CAEStreamingChannel *this)
{
  int v1; // r0

  v1 = *((_DWORD *)this + 36878);
  if ( v1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 32))(v1);
  else
    return -1;
}


// ============================================================

// Address: 0x3a9832
// Original: _ZN19CAEStreamingChannel17GetPlayingTrackIDEv
// Demangled: CAEStreamingChannel::GetPlayingTrackID(void)
int __fastcall CAEStreamingChannel::GetPlayingTrackID(CAEStreamingChannel *this)
{
  int v2; // r0
  unsigned int v3; // r1

  v2 = *((_DWORD *)this + 36878);
  if ( !v2 )
    return -1;
  v3 = *((_DWORD *)this + 36880) + 5;
  if ( v3 > 4 || v3 == 3 )
    return -1;
  else
    return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 32))(v2);
}


// ============================================================

// Address: 0x3a9860
// Original: _ZN19CAEStreamingChannel4StopEb
// Demangled: CAEStreamingChannel::Stop(bool)
int __fastcall CAEStreamingChannel::Stop(OALSource **this, int a2)
{
  int result; // r0
  OALSource *v5; // r6

  result = CAESmoothFadeThread::RequestFade((CAESmoothFadeThread *)&AESmoothFadeThread, this[1], -100.0, 35, 1);
  if ( !result )
  {
    v5 = this[1];
    if ( *((_DWORD *)v5 + 3) == 2 )
      OALSource::UnqueueBuffers(this[1]);
    j_alSourceStop();
    *((_DWORD *)v5 + 10) = 4116;
    *((_DWORD *)v5 + 8) = 0;
    result = 1;
    *((_BYTE *)v5 + 44) = 1;
  }
  if ( a2 == 1 )
  {
    *(int *)((char *)&elf_hash_chain[20410] + (_DWORD)this) = 0;
    result = 147520;
    this[36880] = (OALSource *)-5;
  }
  return result;
}


// ============================================================

// Address: 0x3a98d8
// Original: _ZN19CAEStreamingChannel10InitialiseEv
// Demangled: CAEStreamingChannel::Initialise(void)
int __fastcall CAEStreamingChannel::Initialise(CAEStreamingChannel *this)
{
  OALSource *v2; // r0
  OALSource *v3; // r0

  CAEAudioChannel::SetOriginalFrequency(this, 0x5622u);
  *((_BYTE *)this + 40) = 0;
  *((_DWORD *)this + 13) = (char *)this + 56;
  v2 = (OALSource *)operator new(0x30u);
  OALSource::OALSource(v2);
  *((_DWORD *)this + 1) = v3;
  OALSource::SetStream(v3);
  return 0;
}


// ============================================================

// Address: 0x3a9906
// Original: _ZN19CAEStreamingChannel17InitialiseSilenceEv
// Demangled: CAEStreamingChannel::InitialiseSilence(void)
void __fastcall CAEStreamingChannel::InitialiseSilence(CAEStreamingChannel *this)
{
  ;
}


// ============================================================

// Address: 0x3a9908
// Original: _ZN19CAEStreamingChannel13PrepareStreamEP19CAEStreamingDecoderab
// Demangled: CAEStreamingChannel::PrepareStream(CAEStreamingDecoder *,signed char,bool)
int __fastcall CAEStreamingChannel::PrepareStream(
        CAEStreamingChannel *this,
        CAEStreamingDecoder *a2,
        signed __int8 a3,
        int a4)
{
  OALSource *v7; // r1
  int v8; // r2
  int v9; // r8
  _DWORD *v10; // r8
  int v11; // r0
  int v12; // r0
  void *v13; // r5
  OALBuffer *v14; // r6
  unsigned int v15; // r0
  unsigned int v16; // r1
  int v17; // r5
  unsigned int v18; // r0
  OALSource *v19; // r6

  if ( !a2 )
    return -1;
  v7 = (OALSource *)*((_DWORD *)this + 1);
  if ( !v7 )
    return -1;
  if ( a4 == 1 )
  {
    v8 = *((_DWORD *)this + 36880);
    if ( (unsigned int)(v8 + 4) <= 3
      && v8 != -2
      && !CAESmoothFadeThread::RequestFade((CAESmoothFadeThread *)&AESmoothFadeThread, v7, -100.0, 35, 1) )
    {
      v9 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(v9 + 12) == 2 )
        OALSource::UnqueueBuffers(*((OALSource **)this + 1));
      j_alSourceStop();
      *(_DWORD *)(v9 + 40) = 4116;
      *(_DWORD *)(v9 + 32) = 0;
      *(_BYTE *)(v9 + 44) = 1;
    }
    *((_DWORD *)this + 36880) = -6;
  }
  v10 = (_DWORD *)((char *)this + 147512);
  v11 = *((_DWORD *)this + 36878);
  if ( v11 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 28))(v11);
    *v10 = 0;
  }
  *v10 = a2;
  *((_BYTE *)this + 44) = a3 & 1;
  *((_BYTE *)&elf_hash_chain[20414] + (_DWORD)this) = *(_DWORD *)(*((_DWORD *)a2 + 1) + 24) < 0x12000u;
  v12 = CAEStreamingChannel::FillBuffer(this, (void *)dword_94EAE8, 0x24000u);
  v13 = (void *)dword_94EAE8;
  if ( v12 != 147456 )
    memset((void *)(dword_94EAE8 + v12), 0, 147456 - v12);
  *((_BYTE *)this + 47) = 0;
  v14 = (OALBuffer *)operator new(0x14u);
  v15 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v10 + 20))(*v10);
  OALBuffer::OALBuffer(v14, v13, 0x24000u, v15, 1u);
  OALSource::QueueBuffer(*((OALSource **)this + 1), v14);
  OALBase::Release(v14);
  v16 = *((_DWORD *)this + 36880) + 7;
  if ( v16 > 6 || ((1 << v16) & 0x51) == 0 )
    *((_DWORD *)this + 36880) = -2;
  v17 = 0;
  *((_BYTE *)this + 51) = 1;
  *((_BYTE *)this + 49) = 0;
  v18 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v10 + 20))(*v10);
  CAEAudioChannel::SetOriginalFrequency(this, v18);
  v19 = (OALSource *)*((_DWORD *)this + 1);
  *((_BYTE *)this + 45) = 0;
  *((_BYTE *)this + 46) = 0;
  *((_BYTE *)this + 41) = 0;
  OALSource::ObtainSource(v19);
  j_alSourcei(*((_DWORD *)v19 + 2), 4134, 0);
  *((_DWORD *)v19 + 8) = 0;
  return v17;
}


// ============================================================

// Address: 0x3a9aac
// Original: _ZN19CAEStreamingChannel10FillBufferEPvm
// Demangled: CAEStreamingChannel::FillBuffer(void *,ulong)
unsigned int __fastcall CAEStreamingChannel::FillBuffer(CAEStreamingChannel *this, char *a2, unsigned int a3)
{
  unsigned int v6; // r5
  _DWORD *v7; // r10
  _DWORD *v8; // r11
  int v9; // r4
  int v10; // r0
  char *v11; // r1
  int v12; // r3
  char *v13; // r9
  unsigned int v14; // r6
  unsigned int v15; // r4
  int v16; // r1
  OALSource *v17; // r4
  _DWORD v19[8]; // [sp+0h] [bp-20h] BYREF

  v6 = (*(int (__fastcall **)(_DWORD, char *, unsigned int, _DWORD *))(**(_DWORD **)((char *)&elf_hash_chain[20404]
                                                                                   + (_DWORD)this)
                                                                     + 4))(
         *(int *)((char *)&elf_hash_chain[20404] + (_DWORD)this),
         a2,
         a3,
         v19);
  v7 = (int *)((char *)&elf_hash_chain[20404] + (_DWORD)this);
  if ( v19[0] )
  {
    if ( *((_BYTE *)this + 44) )
    {
      v19[0] = 0;
      if ( v6 < a3 )
      {
        do
        {
          (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v7 + 16))(*v7, 1);
          v6 += (*(int (__fastcall **)(_DWORD, char *, unsigned int, _DWORD *))(*(_DWORD *)*v7 + 4))(
                  *v7,
                  &a2[v6],
                  a3 - v6,
                  v19);
        }
        while ( v6 < a3 && !v19[0] );
      }
    }
    else if ( *((_DWORD *)this + 36879) )
    {
      v8 = (_DWORD *)((char *)this + 147516);
      v9 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v7 + 20))(*v7);
      if ( v9 == (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v8 + 20))(*v8) )
      {
        if ( *v7 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v7 + 28))(*v7);
        v10 = *v8;
        *v7 = *v8;
        *v8 = 0;
        if ( v6 >= 2 )
        {
          v11 = &a2[v6 - 2];
          do
          {
            v12 = *(unsigned __int16 *)v11;
            if ( (v12 & 0xFFFFFF00) <= 0xF800
              && (v12 & 0xFFFFFF00) >= 0x800
              && (unsigned int)(unsigned __int8)v12 - 8 < 0xF1 )
            {
              break;
            }
            v6 -= 2;
            v11 -= 2;
          }
          while ( v6 > 1 );
        }
        if ( a3 - v6 >= 0x480 )
        {
          v13 = &a2[v6];
          v14 = (*(int (__fastcall **)(int, char *, unsigned int, _DWORD *))(*(_DWORD *)v10 + 4))(
                  v10,
                  v13,
                  1152 * ((a3 - v6) / 0x480),
                  v19);
          if ( v14 )
          {
            v15 = 0;
            while ( 1 )
            {
              v16 = *(unsigned __int16 *)&v13[v15];
              if ( (v16 & 0xFFFFFF00) <= 0xF800
                && (v16 & 0xFFFFFF00) >= 0x800
                && (unsigned int)(unsigned __int8)v16 - 8 < 0xF1 )
              {
                break;
              }
              v15 += 2;
              if ( v14 <= v15 )
                goto LABEL_28;
            }
            memmove_0(v13, &v13[v15], v14 - v15);
            v6 = v14 + v6 - v15;
          }
        }
      }
      else
      {
        memset(&a2[v6], 0, a3 - v6);
        v6 = a3;
        *((_BYTE *)this + 46) = 1;
      }
    }
    else
    {
      v17 = (OALSource *)*((_DWORD *)this + 1);
      OALSource::ObtainSource(v17);
      *((_DWORD *)v17 + 10) = 4116;
      j_alGetSourcei();
      if ( *((_DWORD *)v17 + 10) != 4114 )
        *(int *)((char *)&elf_hash_chain[20406] + (_DWORD)this) = -4;
    }
  }
LABEL_28:
  if ( *v7 )
    *((_DWORD *)this + 36881) = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v7 + 12))(*v7);
  return v6;
}


// ============================================================

// Address: 0x3a9c74
// Original: _ZN19CAEStreamingChannel4PlayEsaf
// Demangled: CAEStreamingChannel::Play(short,signed char,float)
int __fastcall CAEStreamingChannel::Play(CAEStreamingChannel *this, __int16 a2, signed __int8 a3, float a4)
{
  int result; // r0
  bool v7; // zf
  unsigned int v8; // r0
  _DWORD *v9; // r6
  int v10; // r0
  int v11; // r5

  result = *((_DWORD *)this + 36878);
  v7 = result == 0;
  if ( result )
    v7 = *((_DWORD *)this + 1) == 0;
  if ( !v7 )
  {
    v8 = (*(int (__fastcall **)(int, _DWORD, signed __int8, _DWORD))(*(_DWORD *)result + 20))(
           result,
           *(_DWORD *)(*(_DWORD *)result + 20),
           a3,
           LODWORD(a4));
    CAEAudioChannel::SetOriginalFrequency(this, v8);
    v9 = (_DWORD *)((char *)this + 147520);
    v10 = *((_DWORD *)this + 36880);
    if ( v10 != -7 )
    {
      *((_BYTE *)this + 44) = a3 & 1;
      if ( v10 == -5 )
      {
        CAESmoothFadeThread::CancelFade((CAESmoothFadeThread *)&AESmoothFadeThread, *((OALSource **)this + 1));
        v11 = *((_DWORD *)this + 1);
        if ( *(_DWORD *)(v11 + 12) == 2 )
          OALSource::UnqueueBuffers(*((OALSource **)this + 1));
        j_alSourceStop();
        *(_DWORD *)(v11 + 40) = 4116;
        *(_DWORD *)(v11 + 32) = 0;
        *(_BYTE *)(v11 + 44) = 1;
        *v9 = -6;
      }
    }
    *v9 = -1;
    OALSource::SetVolume(*((OALSource **)this + 1), *((float *)this + 6));
    return j_OALSource::Play(*((OALSource **)this + 1));
  }
  return result;
}


// ============================================================

// Address: 0x3a9d1c
// Original: _ZN19CAEStreamingChannel13SetNextStreamEP19CAEStreamingDecoder
// Demangled: CAEStreamingChannel::SetNextStream(CAEStreamingDecoder *)
int __fastcall CAEStreamingChannel::SetNextStream(CAEStreamingChannel *this, CAEStreamingDecoder *a2)
{
  int v4; // r0
  _DWORD *v5; // r5
  int result; // r0

  v4 = *(int *)((char *)&elf_hash_chain[20405] + (_DWORD)this);
  v5 = (int *)((char *)&elf_hash_chain[20405] + (_DWORD)this);
  if ( v4 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 28))(v4);
    *v5 = 0;
  }
  result = 0;
  *v5 = a2;
  return result;
}


// ============================================================

// Address: 0x3a9d44
// Original: _ZN19CAEStreamingChannel7ServiceEv
// Demangled: CAEStreamingChannel::Service(void)
unsigned int __fastcall CAEStreamingChannel::Service(CAEStreamingChannel *this)
{
  int v2; // r5
  int *v3; // r8
  int v4; // r0
  unsigned int result; // r0
  _DWORD *v6; // r1
  int v8; // r5
  OALSource *v9; // r5
  int v10; // r0
  int *v11; // r1
  bool v12; // zf
  _DWORD *v13; // r10
  unsigned int v14; // r0
  int v15; // r5
  unsigned int v16; // r9
  _BYTE *v17; // r6
  int v18; // r0
  OALBuffer *v19; // r5
  int v20; // r0
  void *v21; // r10
  unsigned int v22; // r0
  int v23; // r5
  CAEStreamingDecoder *v24; // r5
  int v25; // r6
  OALSource *v26; // r4
  int v27; // [sp+4h] [bp-1Ch]

  CAEAudioChannel::UpdateStatus(this);
  v2 = *((_DWORD *)this + 1);
  if ( !v2
    || (OALSource::ObtainSource(*((OALSource **)this + 1)),
        *(_DWORD *)(v2 + 40) = 4116,
        j_alGetSourcei(),
        *(_DWORD *)(v2 + 40) != 4114) )
  {
    v3 = (int *)((char *)this + 147520);
    v4 = *((_DWORD *)this + 36880);
    if ( v4 == -5 )
    {
      result = -6;
      *v3 = -6;
      return result;
    }
LABEL_14:
    if ( v4 != -3 )
      goto LABEL_22;
    goto LABEL_15;
  }
  v3 = (int *)((char *)this + 147520);
  v4 = *((_DWORD *)this + 36880);
  if ( (unsigned int)(v4 + 4) < 2 )
    goto LABEL_14;
  if ( v4 != -1 )
  {
    v6 = (_DWORD *)((char *)this + 147536);
    if ( v4 == -5 )
    {
      if ( (*v6)++ >= 6 )
      {
LABEL_10:
        v8 = *((_DWORD *)this + 1);
        if ( *(_DWORD *)(v8 + 12) == 2 )
          OALSource::UnqueueBuffers(*((OALSource **)this + 1));
        j_alSourceStop();
        *(_DWORD *)(v8 + 40) = 4116;
        *(_DWORD *)(v8 + 32) = 0;
        *(_BYTE *)(v8 + 44) = 1;
      }
    }
    else
    {
      *v6 = 0;
      if ( v4 == -6 )
        goto LABEL_10;
    }
    v4 = *v3;
    goto LABEL_14;
  }
  *v3 = -3;
LABEL_15:
  v9 = (OALSource *)*((_DWORD *)this + 1);
  OALSource::ObtainSource(v9);
  v10 = *((_DWORD *)v9 + 10);
  if ( !v10 )
  {
    *((_DWORD *)v9 + 10) = 4116;
    j_alGetSourcei();
    v10 = *((_DWORD *)v9 + 10);
  }
  if ( v10 == 4114 )
  {
    v4 = *v3;
  }
  else
  {
    v4 = -6;
    if ( *(_BYTE *)(*((_DWORD *)this + 1) + 44) )
      v4 = -7;
    *v3 = v4;
  }
LABEL_22:
  result = v4 + 7;
  if ( result <= 4 )
  {
    v11 = &stderr + 1;
    result = 1 << result;
    v12 = (result & 0x19) == 0;
    if ( (result & 0x19) != 0 )
    {
      v11 = &elf_hash_chain[20404];
      result = *(int *)((char *)&elf_hash_chain[20404] + (_DWORD)this);
      v12 = result == 0;
    }
    if ( !v12 )
    {
      v13 = (int *)((char *)v11 + (_DWORD)this);
      if ( (*(int (__fastcall **)(unsigned int))(*(_DWORD *)result + 20))(result) != *((_DWORD *)this + 9) )
      {
        v14 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v13 + 20))(*v13);
        CAEAudioChannel::SetOriginalFrequency(this, v14);
      }
      v15 = *((_DWORD *)this + 1);
      j_alGetSourcei();
      v16 = (*(_DWORD *)(v15 + 32) + v27) / 0x24000u;
      if ( *((_BYTE *)this + 51) == 7 )
      {
        v17 = (char *)this + 49;
        result = 6;
      }
      else
      {
        v18 = CAEStreamingChannel::FillBuffer(this, *((void **)this + 13), 0x24000u);
        v17 = (char *)this + 49;
        *((_BYTE *)this + 50) = *((_BYTE *)this + 49);
        if ( v18 != 147456 )
          memset((void *)(*((_DWORD *)this + 13) + v18), 0, 147456 - v18);
        v19 = (OALBuffer *)operator new(0x14u);
        v20 = *v13;
        v21 = (void *)*((_DWORD *)this + 13);
        v22 = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 20))(v20);
        OALBuffer::OALBuffer(v19, v21, 0x24000u, v22, 1u);
        OALSource::QueueBuffer(*((OALSource **)this + 1), v19);
        OALBase::Release(v19);
        result = *((unsigned __int8 *)this + 51);
        *((_BYTE *)this + 51) = result + 1;
      }
      if ( (unsigned __int8)*v17 != (unsigned __int8)v16 )
      {
        if ( *v3 == -4 )
        {
          if ( *((_BYTE *)this + 41) )
          {
            v23 = *((_DWORD *)this + 1);
            if ( *(_DWORD *)(v23 + 12) == 2 )
              OALSource::UnqueueBuffers(*((OALSource **)this + 1));
            j_alSourceStop();
            *(_BYTE *)(v23 + 44) = 1;
            *(_DWORD *)(v23 + 40) = 4116;
            result = 0;
            *(_DWORD *)(v23 + 32) = 0;
            *v3 = -6;
            *((_BYTE *)this + 41) = 0;
            return result;
          }
          result = 1;
          *((_BYTE *)this + 41) = 1;
LABEL_42:
          *v17 = v16;
          return result;
        }
        if ( *((_BYTE *)this + 46) )
        {
          result = 1;
          *(_WORD *)((char *)this + 45) = 1;
          goto LABEL_42;
        }
        if ( *((_BYTE *)this + 45) )
        {
          v24 = (CAEStreamingDecoder *)*((_DWORD *)this + 36879);
          *((_DWORD *)this + 36879) = 0;
          *v3 = -7;
          if ( !CAESmoothFadeThread::RequestFade(
                  (CAESmoothFadeThread *)&AESmoothFadeThread,
                  *((OALSource **)this + 1),
                  -100.0,
                  35,
                  1) )
          {
            v25 = *((_DWORD *)this + 1);
            if ( *(_DWORD *)(v25 + 12) == 2 )
              OALSource::UnqueueBuffers(*((OALSource **)this + 1));
            j_alSourceStop();
            *(_DWORD *)(v25 + 40) = 4116;
            *(_DWORD *)(v25 + 32) = 0;
            *(_BYTE *)(v25 + 44) = 1;
          }
          CAEStreamingChannel::PrepareStream(this, v24, 0, 0);
          return (*(int (__fastcall **)(CAEStreamingChannel *, _DWORD, _DWORD, int))(*(_DWORD *)this + 24))(
                   this,
                   0,
                   0,
                   1065353216);
        }
        else
        {
          if ( !*((_BYTE *)this + 47) )
          {
            *((_BYTE *)this + 51) = result;
            goto LABEL_42;
          }
          v26 = (OALSource *)*((_DWORD *)this + 1);
          OALSource::ObtainSource(v26);
          *((_DWORD *)v26 + 10) = 4116;
          j_alGetSourcei();
          result = *((_DWORD *)v26 + 10);
          if ( result != 4114 )
          {
            result = -4;
            *v3 = -4;
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x3aa05c
// Original: _ZN19CAEStreamingChannel9SetBassEQEaf
// Demangled: CAEStreamingChannel::SetBassEQ(signed char,float)
void __fastcall CAEStreamingChannel::SetBassEQ(CAEStreamingChannel *this, signed __int8 a2, float a3)
{
  ;
}


// ============================================================

// Address: 0x3aa060
// Original: _ZN19CAEStreamingChannel8SetReadyEv
// Demangled: CAEStreamingChannel::SetReady(void)
int __fastcall CAEStreamingChannel::SetReady(OALSource **this)
{
  _DWORD *v2; // r6
  int v3; // r0
  int result; // r0
  OALSource *v5; // r5

  v2 = (int *)((char *)&elf_hash_chain[20406] + (_DWORD)this);
  v3 = *(int *)((char *)&elf_hash_chain[20406] + (_DWORD)this);
  if ( v3 != -6 )
  {
    result = v3 + 5;
    if ( result )
      return result;
    CAESmoothFadeThread::CancelFade((CAESmoothFadeThread *)&AESmoothFadeThread, this[1]);
    v5 = this[1];
    if ( *((_DWORD *)v5 + 3) == 2 )
      OALSource::UnqueueBuffers(this[1]);
    j_alSourceStop();
    *((_DWORD *)v5 + 10) = 4116;
    *((_DWORD *)v5 + 8) = 0;
    *((_BYTE *)v5 + 44) = 1;
    *v2 = -6;
  }
  result = (int)this[36878];
  if ( result )
  {
    result = -2;
    *v2 = -2;
  }
  return result;
}


// ============================================================

// Address: 0x3aa0d4
// Original: _ZN19CAEStreamingChannel14IsSoundPlayingEv
// Demangled: CAEStreamingChannel::IsSoundPlaying(void)
bool __fastcall CAEStreamingChannel::IsSoundPlaying(CAEStreamingChannel *this)
{
  int v1; // r0

  v1 = *((_DWORD *)this + 36880);
  return (unsigned int)(v1 + 5) <= 4 && v1 != -2 || v1 == -7;
}


// ============================================================

// Address: 0x3aa0f8
// Original: _ZN19CAEStreamingChannel25SetFrequencyScalingFactorEf
// Demangled: CAEStreamingChannel::SetFrequencyScalingFactor(float)
int __fastcall CAEStreamingChannel::SetFrequencyScalingFactor(CAEStreamingChannel *this, float a2)
{
  int *v2; // r5
  int result; // r0
  bool v5; // zf
  _DWORD *v6; // r5
  OALSource *v7; // r0
  OALSource *v8; // r6
  int v9; // r5

  if ( a2 == 0.0 )
  {
    result = *((_DWORD *)this + 1);
    v5 = result == 0;
    if ( result )
    {
      v2 = &elf_hash_chain[20406];
      result = *(int *)((char *)&elf_hash_chain[20406] + (_DWORD)this) + 7;
      v5 = result == 0;
    }
    if ( !v5 )
    {
      result = CAEAudioChannel::IsBufferPlaying(this);
      if ( result )
      {
        v6 = (_DWORD *)((char *)this + (_DWORD)v2);
        if ( !CAESmoothFadeThread::RequestFade(
                (CAESmoothFadeThread *)&AESmoothFadeThread,
                *((OALSource **)this + 1),
                -100.0,
                35,
                1) )
          OALSource::Pause(*((OALSource **)this + 1));
        result = -7;
        *v6 = -7;
      }
    }
  }
  else
  {
    CAEAudioChannel::SetFrequency(this, (unsigned int)(float)((float)*((unsigned int *)this + 9) * a2));
    result = 147520;
    if ( *((_DWORD *)this + 36880) == -7 )
    {
      v7 = (OALSource *)*((_DWORD *)this + 1);
      if ( v7 )
      {
        OALSource::SetVolume(v7, *((float *)this + 6));
        v8 = (OALSource *)*((_DWORD *)this + 1);
        v9 = *((unsigned __int8 *)this + 40);
        OALSource::ObtainSource(v8);
        if ( *((_DWORD *)v8 + 3) != 2 )
          j_alSourcei(*((_DWORD *)v8 + 2), 4103, v9 != 0);
        OALSource::Play(*((OALSource **)this + 1));
      }
      wasPlaylistPlaying = 0;
      result = -1;
      *((_DWORD *)this + 36880) = -1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x3aa1e4
// Original: _ZN19CAEStreamingChannel5PauseEv
// Demangled: CAEStreamingChannel::Pause(void)
int *__fastcall CAEStreamingChannel::Pause(CAEStreamingChannel *this)
{
  int *result; // r0
  int v3; // r5

  result = (int *)*((_DWORD *)this + 1);
  if ( result )
  {
    result = (int *)CAEAudioChannel::IsBufferPlaying(this);
    if ( result )
    {
      if ( !CAESmoothFadeThread::RequestFade(
              (CAESmoothFadeThread *)&AESmoothFadeThread,
              *((OALSource **)this + 1),
              -100.0,
              35,
              1) )
      {
        v3 = *((_DWORD *)this + 1);
        if ( *(_DWORD *)(v3 + 12) == 2 )
          OALSource::UnqueueBuffers(*((OALSource **)this + 1));
        j_alSourceStop();
        *(_DWORD *)(v3 + 40) = 4116;
        *(_DWORD *)(v3 + 32) = 0;
        *(_BYTE *)(v3 + 44) = 1;
      }
      result = &elf_hash_chain[20406];
      *(int *)((char *)&elf_hash_chain[20406] + (_DWORD)this) = -7;
    }
  }
  return result;
}


// ============================================================

// Address: 0x3aa24c
// Original: _ZN19CAEStreamingChannel13SynchPlaybackEv
// Demangled: CAEStreamingChannel::SynchPlayback(void)
void __fastcall CAEStreamingChannel::SynchPlayback(CAEStreamingChannel *this)
{
  ;
}


// ============================================================

// Address: 0x3aa250
// Original: _ZN19CAEStreamingChannel4StopEv
// Demangled: CAEStreamingChannel::Stop(void)
int __fastcall CAEStreamingChannel::Stop(CAEStreamingChannel *this)
{
  int v2; // r5
  int result; // r0

  if ( !CAESmoothFadeThread::RequestFade(
          (CAESmoothFadeThread *)&AESmoothFadeThread,
          *((OALSource **)this + 1),
          -100.0,
          35,
          1) )
  {
    v2 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(v2 + 12) == 2 )
      OALSource::UnqueueBuffers(*((OALSource **)this + 1));
    j_alSourceStop();
    *(_DWORD *)(v2 + 40) = 4116;
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 44) = 1;
  }
  *(int *)((char *)&elf_hash_chain[20410] + (_DWORD)this) = 0;
  result = 147520;
  *((_DWORD *)this + 36880) = -5;
  return result;
}


// ============================================================

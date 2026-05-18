
// Address: 0x18cc48
// Original: j__ZN19CAESmoothFadeThread11WaitForExitEv
// Demangled: CAESmoothFadeThread::WaitForExit(void)
// attributes: thunk
int __fastcall CAESmoothFadeThread::WaitForExit(CAESmoothFadeThread *this)
{
  return _ZN19CAESmoothFadeThread11WaitForExitEv(this);
}


// ============================================================

// Address: 0x18d7e0
// Original: j__ZN19CAESmoothFadeThread15SetBufferVolumeEP9OALSourcef
// Demangled: CAESmoothFadeThread::SetBufferVolume(OALSource *,float)
// attributes: thunk
int __fastcall CAESmoothFadeThread::SetBufferVolume(CAESmoothFadeThread *this, OALSource *a2, float a3)
{
  return _ZN19CAESmoothFadeThread15SetBufferVolumeEP9OALSourcef(this, a2, a3);
}


// ============================================================

// Address: 0x1949d4
// Original: j__ZN19CAESmoothFadeThreadC2Ev
// Demangled: CAESmoothFadeThread::CAESmoothFadeThread(void)
// attributes: thunk
void __fastcall CAESmoothFadeThread::CAESmoothFadeThread(CAESmoothFadeThread *this)
{
  _ZN19CAESmoothFadeThreadC2Ev(this);
}


// ============================================================

// Address: 0x195760
// Original: j__ZN19CAESmoothFadeThread7ServiceEv
// Demangled: CAESmoothFadeThread::Service(void)
// attributes: thunk
int __fastcall CAESmoothFadeThread::Service(CAESmoothFadeThread *this)
{
  return _ZN19CAESmoothFadeThread7ServiceEv(this);
}


// ============================================================

// Address: 0x195f50
// Original: j__ZN19CAESmoothFadeThread11RequestFadeEP9OALSourcefsb
// Demangled: CAESmoothFadeThread::RequestFade(OALSource *,float,short,bool)
// attributes: thunk
int __fastcall CAESmoothFadeThread::RequestFade(
        CAESmoothFadeThread *this,
        OALSource *a2,
        float a3,
        __int16 a4,
        bool a5)
{
  return _ZN19CAESmoothFadeThread11RequestFadeEP9OALSourcefsb(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19bc94
// Original: j__ZN19CAESmoothFadeThread10CancelFadeEP9OALSource
// Demangled: CAESmoothFadeThread::CancelFade(OALSource *)
// attributes: thunk
int __fastcall CAESmoothFadeThread::CancelFade(CAESmoothFadeThread *this, OALSource *a2)
{
  return _ZN19CAESmoothFadeThread10CancelFadeEP9OALSource(this, a2);
}


// ============================================================

// Address: 0x19beec
// Original: j__ZN19CAESmoothFadeThread10InitialiseEv
// Demangled: CAESmoothFadeThread::Initialise(void)
// attributes: thunk
int __fastcall CAESmoothFadeThread::Initialise(CAESmoothFadeThread *this)
{
  return _ZN19CAESmoothFadeThread10InitialiseEv(this);
}


// ============================================================

// Address: 0x1a080c
// Original: j__ZN19CAESmoothFadeThread5StartEv
// Demangled: CAESmoothFadeThread::Start(void)
// attributes: thunk
int __fastcall CAESmoothFadeThread::Start(CAESmoothFadeThread *this)
{
  return _ZN19CAESmoothFadeThread5StartEv(this);
}


// ============================================================

// Address: 0x1a0890
// Original: j__ZN19CAESmoothFadeThread4StopEv
// Demangled: CAESmoothFadeThread::Stop(void)
// attributes: thunk
int __fastcall CAESmoothFadeThread::Stop(CAESmoothFadeThread *this)
{
  return _ZN19CAESmoothFadeThread4StopEv(this);
}


// ============================================================

// Address: 0x3a72b8
// Original: _ZN19CAESmoothFadeThreadC2Ev
// Demangled: CAESmoothFadeThread::CAESmoothFadeThread(void)
void __fastcall CAESmoothFadeThread::CAESmoothFadeThread(CAESmoothFadeThread *this)
{
  *((_DWORD *)this + 515) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 517) = 0;
  *((_WORD *)this + 1028) = 0;
  *((_DWORD *)this + 513) = 0;
}


// ============================================================

// Address: 0x3a72ce
// Original: _ZN19CAESmoothFadeThreadD2Ev
// Demangled: CAESmoothFadeThread::~CAESmoothFadeThread()
void __fastcall CAESmoothFadeThread::~CAESmoothFadeThread(CAESmoothFadeThread *this)
{
  ;
}


// ============================================================

// Address: 0x3a72d0
// Original: _ZN19CAESmoothFadeThread22InitialiseRequestSlotsEv
// Demangled: CAESmoothFadeThread::InitialiseRequestSlots(void)
__int64 __fastcall CAESmoothFadeThread::InitialiseRequestSlots(__int64 this)
{
  int i; // r2
  int v2; // r3

  HIDWORD(this) = 0;
  for ( i = 0; i != 2048; i += 32 )
  {
    v2 = this + i;
    *(_DWORD *)(v2 + 4) = 0;
    *(_DWORD *)(v2 + 28) = 0;
  }
  return this;
}


// ============================================================

// Address: 0x3a72e4
// Original: _ZN19CAESmoothFadeThread10InitialiseEv
// Demangled: CAESmoothFadeThread::Initialise(void)
int __fastcall CAESmoothFadeThread::Initialise(CAESmoothFadeThread *this)
{
  int i; // r2
  char *v2; // r3

  for ( i = 0; i != 2048; i += 32 )
  {
    v2 = (char *)this + i;
    *((_DWORD *)v2 + 1) = 0;
    *((_DWORD *)v2 + 7) = 0;
  }
  *((_BYTE *)this + 2052) = 1;
  *((_BYTE *)this + 2064) = 1;
  return 1;
}


// ============================================================

// Address: 0x3a7304
// Original: _ZN19CAESmoothFadeThread5StartEv
// Demangled: CAESmoothFadeThread::Start(void)
int __fastcall CAESmoothFadeThread::Start(int this)
{
  *(_BYTE *)(this + 2053) = 1;
  return this;
}


// ============================================================

// Address: 0x3a730c
// Original: _ZN19CAESmoothFadeThread4StopEv
// Demangled: CAESmoothFadeThread::Stop(void)
int __fastcall CAESmoothFadeThread::Stop(int this)
{
  *(_BYTE *)(this + 2053) = 0;
  return this;
}


// ============================================================

// Address: 0x3a7314
// Original: _ZN19CAESmoothFadeThread11WaitForExitEv
// Demangled: CAESmoothFadeThread::WaitForExit(void)
void *__fastcall CAESmoothFadeThread::WaitForExit(void **this)
{
  void *result; // r0

  result = *this;
  if ( result )
    return (void *)sub_196824(result);
  return result;
}


// ============================================================

// Address: 0x3a7320
// Original: _ZN19CAESmoothFadeThread11RequestFadeEP9OALSourcefsb
// Demangled: CAESmoothFadeThread::RequestFade(OALSource *,float,short,bool)
int __fastcall CAESmoothFadeThread::RequestFade(CAESmoothFadeThread *this, OALSource *a2, float a3, int a4, int a5)
{
  int v9; // r0
  float v10; // r0
  int v11; // r12
  float v12; // s0
  int result; // r0
  int v14; // r3
  _DWORD *v15; // r1
  int v16; // r0
  int v17; // lr
  bool v18; // zf
  char *v19; // r0
  char *v20; // r3
  _BYTE *v21; // r3
  int v22; // t1
  float *v23; // r0

  if ( !*((_BYTE *)this + 2052) || *((_BYTE *)this + 2064) )
    return 0;
  OALSource::ObtainSource(a2);
  v9 = *((_DWORD *)a2 + 10);
  if ( !v9 )
  {
    *((_DWORD *)a2 + 10) = 4116;
    j_alGetSourcei();
    v9 = *((_DWORD *)a2 + 10);
  }
  if ( v9 != 4114 )
    return 0;
  v10 = COERCE_FLOAT(OALSource::GetVolume(a2));
  v12 = v10;
  if ( v10 == a3 || fabsf(v10 - a3) < 0.01 )
  {
    if ( a5 != 1 )
      return 1;
    if ( *((_DWORD *)a2 + 3) == 2 )
      OALSource::UnqueueBuffers(a2);
    j_alSourceStop();
    *((_DWORD *)a2 + 10) = 4116;
    *((_DWORD *)a2 + 8) = 0;
    result = 1;
    *((_BYTE *)a2 + 44) = 1;
    return result;
  }
  v14 = *((_DWORD *)this + 517);
  if ( v14 < 1 )
    return 0;
  v15 = (_DWORD *)((char *)this + 28);
  v16 = 0;
  v17 = 0;
  do
  {
    if ( *v15 == 1 )
    {
      if ( (OALSource *)*(v15 - 6) == a2 && (unsigned int)(a4 - *((_DWORD *)this + 515) + v15[1]) > 1 )
        goto LABEL_25;
    }
    else if ( !*v15 )
    {
      v18 = v17 << 31 == 0;
      v17 = 1;
      if ( v18 )
        v11 = v16;
    }
    ++v16;
    v15 += 8;
  }
  while ( v16 < v14 );
  if ( !(v17 << 31) )
    return 0;
  v19 = (char *)this + 32 * v11;
  v15 = v19 + 28;
  if ( *((_DWORD *)v19 + 7) != 1 )
  {
    ++g_numSoundChannelsUsed;
    v21 = v19 + 24;
    ++*((_DWORD *)a2 + 1);
    *((_DWORD *)v19 + 1) = a2;
    v16 = v11;
    goto LABEL_29;
  }
  v16 = v11;
LABEL_25:
  v20 = (char *)this + 32 * v16;
  v22 = (unsigned __int8)v20[24];
  v21 = v20 + 24;
  if ( v22 )
    return 1;
LABEL_29:
  v23 = (float *)((char *)this + 32 * v16);
  v23[2] = v12;
  v23[3] = a3;
  v23[4] = a3 - v12;
  v23[5] = v12;
  *v21 = a5;
  if ( a4 == -2 )
  {
    LOWORD(a4) = 28;
  }
  else if ( a4 == -1 )
  {
    LOWORD(a4) = 30;
  }
  *((_WORD *)v23 + 13) = a4;
  v23[8] = *((float *)this + 515);
  result = 1;
  *v15 = 1;
  return result;
}


// ============================================================

// Address: 0x3a74a4
// Original: _ZN19CAESmoothFadeThread10CancelFadeEP9OALSource
// Demangled: CAESmoothFadeThread::CancelFade(OALSource *)
int __fastcall CAESmoothFadeThread::CancelFade(int this, OALSource *a2)
{
  int i; // r2
  int v3; // lr

  if ( !*(_BYTE *)(this + 2064) )
  {
    for ( i = 0; i != 2048; i += 32 )
    {
      v3 = this + i;
      if ( *(_DWORD *)(this + i + 28) == 1 && *(OALSource **)(v3 + 4) == a2 )
        *(_DWORD *)(v3 + 28) = 2;
    }
  }
  return this;
}


// ============================================================

// Address: 0x3a74dc
// Original: _ZN19CAESmoothFadeThread15SetBufferVolumeEP9OALSourcef
// Demangled: CAESmoothFadeThread::SetBufferVolume(OALSource *,float)
int __fastcall CAESmoothFadeThread::SetBufferVolume(CAESmoothFadeThread *this, OALSource *a2, float a3)
{
  float *v3; // r12
  int v4; // r3
  bool v5; // zf
  int result; // r0
  float v7; // s2

  if ( *((_BYTE *)this + 2064) )
    return sub_195AE0(a2, a3);
  v3 = (float *)((char *)this + 28);
  v4 = -1;
  while ( 1 )
  {
    v5 = *(_DWORD *)v3 == 1;
    if ( *(_DWORD *)v3 == 1 )
      v5 = *((_DWORD *)v3 - 6) == (_DWORD)a2;
    if ( v5 )
      break;
    ++v4;
    v3 += 8;
    if ( v4 >= 63 )
      return sub_195AE0(a2, a3);
  }
  result = *((unsigned __int8 *)v3 - 4);
  if ( !*((_BYTE *)v3 - 4) )
  {
    v7 = *(v3 - 4);
    if ( v7 != a3 && fabsf(v7 - a3) >= 0.01 )
    {
      *(_DWORD *)v3 = 2;
      return sub_195AE0(a2, a3);
    }
  }
  return result;
}


// ============================================================

// Address: 0x3a754c
// Original: _ZN19CAESmoothFadeThread14SmoothFadeProcEPv
// Demangled: CAESmoothFadeThread::SmoothFadeProc(void *)
int __fastcall CAESmoothFadeThread::SmoothFadeProc(CAESmoothFadeThread *this, void *a2)
{
  while ( *((_BYTE *)this + 2053) )
  {
    CAESmoothFadeThread::Service(this);
    OS_ThreadSleep(0x3E8u);
  }
  return 0;
}


// ============================================================

// Address: 0x3a7570
// Original: _ZN19CAESmoothFadeThread7ServiceEv
// Demangled: CAESmoothFadeThread::Service(void)
OALBase *__fastcall CAESmoothFadeThread::Service(CAESmoothFadeThread *this)
{
  int i; // r11
  float v3; // r0
  float v4; // s2
  int v5; // r6
  char *v6; // r8
  OALBase *result; // r0
  OALSource *v8; // r6
  unsigned int v9; // r1
  unsigned int v10; // r9
  unsigned int v11; // r10
  float v12; // s24
  float v13; // r0
  float v14; // r1

  *((_DWORD *)this + 515) = CAEAudioUtility::GetCurrentTimeInMilliseconds(this);
  for ( i = 0; i != 2048; i += 32 )
  {
    v6 = (char *)this + i;
    result = *(OALBase **)((char *)this + i + 28);
    if ( result == (OALBase *)((char *)&stderr + 2) )
    {
      --g_numSoundChannelsUsed;
    }
    else
    {
      if ( result != (OALBase *)((char *)&stderr + 1) )
        continue;
      v8 = (OALSource *)*((_DWORD *)v6 + 1);
      if ( !v8 )
        continue;
      result = (OALBase *)*((_DWORD *)this + 515);
      v9 = *((_DWORD *)v6 + 8);
      if ( (unsigned int)result < v9 )
        continue;
      v10 = *((unsigned __int16 *)v6 + 13);
      v11 = (unsigned int)result - v9;
      if ( (unsigned int)result - v9 < v10 )
      {
        v12 = *((float *)v6 + 2);
        v13 = powf(10.0, *((float *)v6 + 4) / 20.0);
        v14 = v12 + (float)(log10f((float)((float)((float)v11 / (float)v10) * (float)(v13 + -1.0)) + 1.0) * 20.0);
        *((float *)v6 + 5) = v14;
        result = (OALBase *)OALSource::SetVolume(v8, v14);
        continue;
      }
      v3 = COERCE_FLOAT(OALSource::GetVolume(*((OALSource **)v6 + 1)));
      if ( v6[24] || (v4 = *((float *)v6 + 5), v3 == v4) || fabsf(v3 - v4) < 0.01 )
      {
        OALSource::SetVolume(*((OALSource **)v6 + 1), *((float *)v6 + 3));
        if ( v6[24] )
        {
          v5 = *((_DWORD *)v6 + 1);
          if ( *(_DWORD *)(v5 + 12) == 2 )
            OALSource::UnqueueBuffers(*((OALSource **)v6 + 1));
          j_alSourceStop();
          *(_DWORD *)(v5 + 40) = 4116;
          *(_DWORD *)(v5 + 32) = 0;
          *(_BYTE *)(v5 + 44) = 1;
        }
      }
      --g_numSoundChannelsUsed;
    }
    result = (OALBase *)*((_DWORD *)v6 + 1);
    if ( result )
      result = (OALBase *)OALBase::Release(result);
    *((_DWORD *)v6 + 1) = 0;
    *((_DWORD *)v6 + 7) = 0;
  }
  return result;
}


// ============================================================

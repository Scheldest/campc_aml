
// Address: 0x18a490
// Original: j__ZN15CAEStreamThread10InitialiseEP19CAEStreamingChannel
// Demangled: CAEStreamThread::Initialise(CAEStreamingChannel *)
// attributes: thunk
int __fastcall CAEStreamThread::Initialise(CAEStreamThread *this, CAEStreamingChannel *a2)
{
  return _ZN15CAEStreamThread10InitialiseEP19CAEStreamingChannel(this, a2);
}


// ============================================================

// Address: 0x18ad94
// Original: j__ZN15CAEStreamThread9StopTrackEv
// Demangled: CAEStreamThread::StopTrack(void)
// attributes: thunk
int __fastcall CAEStreamThread::StopTrack(CAEStreamThread *this)
{
  return _ZN15CAEStreamThread9StopTrackEv(this);
}


// ============================================================

// Address: 0x18b4ac
// Original: j__ZN15CAEStreamThread11WaitForExitEv
// Demangled: CAEStreamThread::WaitForExit(void)
// attributes: thunk
int __fastcall CAEStreamThread::WaitForExit(CAEStreamThread *this)
{
  return _ZN15CAEStreamThread11WaitForExitEv(this);
}


// ============================================================

// Address: 0x18d6ac
// Original: j__ZN15CAEStreamThreadD2Ev
// Demangled: CAEStreamThread::~CAEStreamThread()
// attributes: thunk
void __fastcall CAEStreamThread::~CAEStreamThread(CAEStreamThread *this)
{
  _ZN15CAEStreamThreadD2Ev(this);
}


// ============================================================

// Address: 0x18dee4
// Original: j__ZN15CAEStreamThread7ServiceEv
// Demangled: CAEStreamThread::Service(void)
// attributes: thunk
int __fastcall CAEStreamThread::Service(CAEStreamThread *this)
{
  return _ZN15CAEStreamThread7ServiceEv(this);
}


// ============================================================

// Address: 0x192558
// Original: j__ZN15CAEStreamThread9PlayTrackEjijcbb
// Demangled: CAEStreamThread::PlayTrack(uint,int,uint,char,bool,bool)
// attributes: thunk
int __fastcall CAEStreamThread::PlayTrack(
        CAEStreamThread *this,
        unsigned int a2,
        int a3,
        unsigned int a4,
        char a5,
        bool a6,
        bool a7)
{
  return _ZN15CAEStreamThread9PlayTrackEjijcbb(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x1967f4
// Original: j__ZN15CAEStreamThread16GetActiveTrackIDEv
// Demangled: CAEStreamThread::GetActiveTrackID(void)
// attributes: thunk
int __fastcall CAEStreamThread::GetActiveTrackID(CAEStreamThread *this)
{
  return _ZN15CAEStreamThread16GetActiveTrackIDEv(this);
}


// ============================================================

// Address: 0x196a64
// Original: j__ZN15CAEStreamThread5CheckEv
// Demangled: CAEStreamThread::Check(void)
// attributes: thunk
int __fastcall CAEStreamThread::Check(CAEStreamThread *this)
{
  return _ZN15CAEStreamThread5CheckEv(this);
}


// ============================================================

// Address: 0x19830c
// Original: j__ZN15CAEStreamThread5StartEv
// Demangled: CAEStreamThread::Start(void)
// attributes: thunk
int __fastcall CAEStreamThread::Start(CAEStreamThread *this)
{
  return _ZN15CAEStreamThread5StartEv(this);
}


// ============================================================

// Address: 0x198514
// Original: j__ZN15CAEStreamThread17GetPlayingTrackIDEv
// Demangled: CAEStreamThread::GetPlayingTrackID(void)
// attributes: thunk
int __fastcall CAEStreamThread::GetPlayingTrackID(CAEStreamThread *this)
{
  return _ZN15CAEStreamThread17GetPlayingTrackIDEv(this);
}


// ============================================================

// Address: 0x1986e8
// Original: j__ZN15CAEStreamThread16GetTrackPlayTimeEv
// Demangled: CAEStreamThread::GetTrackPlayTime(void)
// attributes: thunk
int __fastcall CAEStreamThread::GetTrackPlayTime(CAEStreamThread *this)
{
  return _ZN15CAEStreamThread16GetTrackPlayTimeEv(this);
}


// ============================================================

// Address: 0x19e47c
// Original: j__ZN15CAEStreamThreadC2Ev
// Demangled: CAEStreamThread::CAEStreamThread(void)
// attributes: thunk
void __fastcall CAEStreamThread::CAEStreamThread(CAEStreamThread *this)
{
  _ZN15CAEStreamThreadC2Ev(this);
}


// ============================================================

// Address: 0x19eb70
// Original: j__ZN15CAEStreamThread16GetTrackLengthMsEv
// Demangled: CAEStreamThread::GetTrackLengthMs(void)
// attributes: thunk
int __fastcall CAEStreamThread::GetTrackLengthMs(CAEStreamThread *this)
{
  return _ZN15CAEStreamThread16GetTrackLengthMsEv(this);
}


// ============================================================

// Address: 0x19ef90
// Original: j__ZN15CAEStreamThread4StopEv
// Demangled: CAEStreamThread::Stop(void)
// attributes: thunk
int __fastcall CAEStreamThread::Stop(CAEStreamThread *this)
{
  return _ZN15CAEStreamThread4StopEv(this);
}


// ============================================================

// Address: 0x3aa30c
// Original: _ZN15CAEStreamThreadC2Ev
// Demangled: CAEStreamThread::CAEStreamThread(void)
void __fastcall CAEStreamThread::CAEStreamThread(CAEStreamThread *this)
{
  ;
}


// ============================================================

// Address: 0x3aa30e
// Original: _ZN15CAEStreamThreadD2Ev
// Demangled: CAEStreamThread::~CAEStreamThread()
void __fastcall CAEStreamThread::~CAEStreamThread(void **this)
{
  sem_t *v2; // r0

  OS_MutexDelete(this[1]);
  OS_MutexDelete(this[3]);
  v2 = (sem_t *)this[2];
  if ( v2 )
    OS_SemaphoreDelete(v2);
}


// ============================================================

// Address: 0x3aa330
// Original: _ZN15CAEStreamThread10InitialiseEP19CAEStreamingChannel
// Demangled: CAEStreamThread::Initialise(CAEStreamingChannel *)
int __fastcall CAEStreamThread::Initialise(CAEStreamThread *this, CAEStreamingChannel *a2)
{
  int v4; // r6
  CAEMP3TrackLoader *v5; // r0
  CAEMP3TrackLoader *v6; // r0

  v4 = 1;
  *((_BYTE *)this + 26) = 0;
  *((_WORD *)this + 12) = 1;
  *((_BYTE *)this + 29) = 0;
  *((_BYTE *)this + 30) = 0;
  if ( a2 )
  {
    *((_DWORD *)this + 15) = CAEStreamingChannel::GetPlayingTrackID(a2);
    *((_DWORD *)this + 12) = (*(int (__fastcall **)(CAEStreamingChannel *))(*(_DWORD *)a2 + 16))(a2);
    *((_DWORD *)this + 14) = CAEStreamingChannel::GetActiveTrackID(a2);
    *((_DWORD *)this + 13) = (*(int (__fastcall **)(CAEStreamingChannel *))(*(_DWORD *)a2 + 20))(a2);
    *((_BYTE *)this + 25) = 1;
    *((_DWORD *)this + 2) = OS_SemaphoreCreate();
    *((_DWORD *)this + 1) = OS_MutexCreate("StreamMutex");
    *((_DWORD *)this + 3) = OS_MutexCreate("StreamPauseMutex");
    *(_DWORD *)this = OS_ThreadLaunch((int)CAEStreamThread::MainLoop, (int)this, 3, (int)"StreamThread", 0, 1);
    *((_DWORD *)this + 4) = a2;
    v5 = (CAEMP3TrackLoader *)operator new(0x24u);
    CAEMP3TrackLoader::CAEMP3TrackLoader(v5);
    *((_DWORD *)this + 5) = v6;
    CAEMP3TrackLoader::Initialise(v6);
    v4 = *((unsigned __int8 *)this + 24);
    if ( *((_BYTE *)this + 24) )
      return 1;
  }
  return v4;
}


// ============================================================

// Address: 0x3aa404
// Original: _ZN15CAEStreamThread8MainLoopEPv
// Demangled: CAEStreamThread::MainLoop(void *)
int __fastcall CAEStreamThread::MainLoop(CAEStreamThread *this, void *a2)
{
  int CurrentTimeInMilliseconds; // r5
  CAEAudioUtility *v4; // r0

  OS_SemaphoreWait(*((sem_t **)this + 2));
  while ( *((_BYTE *)this + 25) )
  {
    CurrentTimeInMilliseconds = CAEAudioUtility::GetCurrentTimeInMilliseconds((CAEAudioUtility *)*((unsigned __int8 *)this
                                                                                                 + 25));
    OS_MutexObtain(*((pthread_mutex_t **)this + 1));
    CAEStreamThread::Service(this);
    (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 4) + 8))(*((_DWORD *)this + 4));
    v4 = (CAEAudioUtility *)OS_MutexRelease(*((pthread_mutex_t **)this + 1));
    if ( (unsigned int)(CAEAudioUtility::GetCurrentTimeInMilliseconds(v4) - CurrentTimeInMilliseconds) <= 4 )
      OS_ThreadSleep(0x1388u);
    OS_MutexObtain(*((pthread_mutex_t **)this + 3));
    OS_MutexRelease(*((pthread_mutex_t **)this + 3));
  }
  return 0;
}


// ============================================================

// Address: 0x3aa45a
// Original: _ZN15CAEStreamThread5StartEv
// Demangled: CAEStreamThread::Start(void)
int __fastcall CAEStreamThread::Start(CAEStreamThread *this)
{
  sem_t *v1; // r1

  v1 = (sem_t *)*((_DWORD *)this + 2);
  *((_BYTE *)this + 25) = 1;
  return j_OS_SemaphorePost(v1);
}


// ============================================================

// Address: 0x3aa466
// Original: _ZN15CAEStreamThread4StopEv
// Demangled: CAEStreamThread::Stop(void)
int __fastcall CAEStreamThread::Stop(CAEStreamThread *this)
{
  CAEMP3TrackLoader *v2; // r0
  bool v3; // zf
  void *v4; // r0
  void *v5; // r0
  int result; // r0

  v2 = (CAEMP3TrackLoader *)*((unsigned __int8 *)this + 24);
  *((_BYTE *)this + 25) = 0;
  v3 = v2 == 0;
  if ( v2 )
  {
    v2 = (CAEMP3TrackLoader *)*((_DWORD *)this + 5);
    v3 = v2 == 0;
  }
  if ( !v3 )
  {
    CAEMP3TrackLoader::~CAEMP3TrackLoader(v2);
    operator delete(v4);
  }
  v5 = *(void **)this;
  *((_BYTE *)this + 24) = 0;
  result = OS_ThreadClose(v5);
  *(_DWORD *)this = 0;
  return result;
}


// ============================================================

// Address: 0x3aa490
// Original: _ZN15CAEStreamThread5PauseEv
// Demangled: CAEStreamThread::Pause(void)
int __fastcall CAEStreamThread::Pause(pthread_mutex_t **this)
{
  return j_OS_MutexObtain(this[3]);
}


// ============================================================

// Address: 0x3aa496
// Original: _ZN15CAEStreamThread6ResumeEv
// Demangled: CAEStreamThread::Resume(void)
int __fastcall CAEStreamThread::Resume(pthread_mutex_t **this)
{
  return j_OS_MutexRelease(this[3]);
}


// ============================================================

// Address: 0x3aa49c
// Original: _ZN15CAEStreamThread11WaitForExitEv
// Demangled: CAEStreamThread::WaitForExit(void)
void *__fastcall CAEStreamThread::WaitForExit(void **this)
{
  void *result; // r0

  result = *this;
  if ( result )
    return (void *)sub_196824(result);
  return result;
}


// ============================================================

// Address: 0x3aa4a8
// Original: _ZN15CAEStreamThread5CheckEv
// Demangled: CAEStreamThread::Check(void)
int __fastcall CAEStreamThread::Check(pthread_mutex_t **this)
{
  OS_MutexObtain(this[1]);
  CAEStreamThread::Service((CAEStreamThread *)this);
  (*(void (__fastcall **)(pthread_mutex_t *))(this[4]->__lock + 8))(this[4]);
  return j_OS_MutexRelease(this[1]);
}


// ============================================================

// Address: 0x3aa4cc
// Original: _ZN15CAEStreamThread7ServiceEv
// Demangled: CAEStreamThread::Service(void)
int __fastcall CAEStreamThread::Service(CAEStreamingChannel **this)
{
  CAEStreamingChannel *v2; // r0
  unsigned int v3; // r8
  unsigned int v4; // r9
  unsigned int v5; // r10
  unsigned int v6; // r6
  signed __int8 v7; // r1
  CAEMP3Decoder *v8; // r5
  CAEMP3TrackLoader **v9; // r11
  CAEDataStream *DataStream; // r0
  int result; // r0
  int PlayingTrackID; // r0
  CAEStreamingChannel *v13; // r1
  int v14; // r0
  CAEStreamingChannel *v15; // r1
  int ActiveTrackID; // r0
  CAEStreamingChannel *v17; // r1
  int v18; // r0
  CAEStreamingChannel *v19; // r1
  int v20; // r0
  CAEStreamingChannel *v21; // r1
  int v22; // r0
  CAEStreamingChannel *v23; // r1
  int v24; // r1
  CAEStreamingChannel *v25; // r5
  CAEMP3Decoder *v26; // r6
  CAEDataStream *v27; // r0
  void (__fastcall *v28)(CAEMP3Decoder *, unsigned int); // r11
  unsigned int v29; // r1
  CAEStreamingDecoder *v30; // r1
  CAEStreamingChannel *v31; // r0
  signed __int8 v32; // r2
  CAEStreamingDecoder *v33; // r1
  unsigned int v34; // [sp+4h] [bp-24h]
  signed __int8 v35; // [sp+8h] [bp-20h]

  CAEStreamingChannel::UpdatePlayTime(this[4]);
  if ( *((_BYTE *)this + 30) )
  {
    v2 = this[4];
    *((_BYTE *)this + 30) = 0;
    (*(void (__fastcall **)(CAEStreamingChannel *))(*(_DWORD *)v2 + 32))(v2);
  }
  if ( *((_BYTE *)this + 26) )
  {
    v3 = (unsigned int)this[8];
    v4 = (unsigned int)this[9];
    v5 = (unsigned int)this[10];
    v6 = v5 + 1;
    v7 = *((_BYTE *)this + 44);
    *((_BYTE *)this + 26) = 0;
    v35 = v7;
    if ( v5 == -1 )
    {
      v34 = 0;
      v8 = 0;
      CAEStreamingChannel::SetNextStream(this[4], 0);
      v9 = this + 5;
    }
    else
    {
      v8 = (CAEMP3Decoder *)operator new(0x5Cu);
      v9 = this + 5;
      DataStream = (CAEDataStream *)CAEMP3TrackLoader::GetDataStream(this[5], v5);
      CAEMP3Decoder::CAEMP3Decoder(v8, DataStream, 0);
      if ( !(**(int (__fastcall ***)(CAEMP3Decoder *))v8)(v8) )
      {
        (*(void (__fastcall **)(CAEMP3Decoder *))(*(_DWORD *)v8 + 28))(v8);
        v8 = 0;
      }
      if ( CAEStreamingChannel::GetPlayingTrackID(this[4]) == v3 )
      {
        if ( v8 )
          CAEStreamingChannel::SetNextStream(this[4], v8);
        CAEStreamingChannel::SetReady(this[4]);
        result = *((unsigned __int8 *)this + 29);
        if ( !*((_BYTE *)this + 29) )
          goto LABEL_11;
LABEL_29:
        if ( !v6 )
          v5 = v3;
        this[14] = (CAEStreamingChannel *)v5;
        this[15] = (CAEStreamingChannel *)v5;
        return result;
      }
      v34 = v5 + 1;
    }
    v26 = (CAEMP3Decoder *)operator new(0x5Cu);
    v27 = (CAEDataStream *)CAEMP3TrackLoader::GetDataStream(*v9, v3);
    CAEMP3Decoder::CAEMP3Decoder(v26, v27, 0);
    if ( (**(int (__fastcall ***)(CAEMP3Decoder *))v26)(v26) == 1 )
    {
      v28 = *(void (__fastcall **)(CAEMP3Decoder *, unsigned int))(*(_DWORD *)v26 + 16);
      v29 = v4 % (*(int (__fastcall **)(CAEMP3Decoder *))(*(_DWORD *)v26 + 8))(v26);
      v28(v26, v29);
      if ( v8 )
        v30 = v8;
      else
        v30 = 0;
      CAEStreamingChannel::SetNextStream(this[4], v30);
      v31 = this[4];
      v32 = v35;
      v33 = v26;
    }
    else
    {
      (*(void (__fastcall **)(CAEMP3Decoder *))(*(_DWORD *)v26 + 28))(v26);
      CAEStreamingChannel::SetNextStream(this[4], 0);
      if ( !v8 )
      {
        result = 1;
LABEL_28:
        v6 = v34;
        *((_BYTE *)this + 29) = result;
        if ( !result )
        {
LABEL_11:
          PlayingTrackID = CAEStreamingChannel::GetPlayingTrackID(this[4]);
          v13 = this[4];
          this[15] = (CAEStreamingChannel *)PlayingTrackID;
          v14 = (*(int (__fastcall **)(CAEStreamingChannel *))(*(_DWORD *)v13 + 16))(v13);
          v15 = this[4];
          this[12] = (CAEStreamingChannel *)v14;
          ActiveTrackID = CAEStreamingChannel::GetActiveTrackID(v15);
          v17 = this[4];
          this[14] = (CAEStreamingChannel *)ActiveTrackID;
          result = (*(int (__fastcall **)(CAEStreamingChannel *))(*(_DWORD *)v17 + 20))(v17);
          this[13] = (CAEStreamingChannel *)result;
          return result;
        }
        goto LABEL_29;
      }
      v31 = this[4];
      v32 = v35;
      v33 = v8;
    }
    CAEStreamingChannel::PrepareStream(v31, v33, v32, 1);
    result = 0;
    goto LABEL_28;
  }
  result = *((unsigned __int8 *)this + 29);
  if ( !*((_BYTE *)this + 29) )
  {
    v18 = CAEStreamingChannel::GetPlayingTrackID(this[4]);
    v19 = this[4];
    this[15] = (CAEStreamingChannel *)v18;
    v20 = (*(int (__fastcall **)(CAEStreamingChannel *))(*(_DWORD *)v19 + 16))(v19);
    v21 = this[4];
    this[12] = (CAEStreamingChannel *)v20;
    v22 = CAEStreamingChannel::GetActiveTrackID(v21);
    v23 = this[4];
    this[14] = (CAEStreamingChannel *)v22;
    result = (*(int (__fastcall **)(CAEStreamingChannel *))(*(_DWORD *)v23 + 20))(v23);
    v24 = *((unsigned __int8 *)this + 27);
    this[13] = (CAEStreamingChannel *)result;
    if ( !v24 )
    {
      v25 = this[12];
      result = (*(int (__fastcall **)(CAEStreamingChannel *))(*(_DWORD *)this[4] + 20))(this[4]);
      if ( (int)v25 > result )
      {
        result = *((unsigned __int8 *)this[4] + 147552);
        if ( *((_BYTE *)this[4] + 147552) )
        {
          result = 1;
          *((_BYTE *)this + 30) = 1;
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x3aa696
// Original: _ZN15CAEStreamThread9PlayTrackEjijcbb
// Demangled: CAEStreamThread::PlayTrack(uint,int,uint,char,bool,bool)
int __fastcall CAEStreamThread::PlayTrack(
        pthread_mutex_t **this,
        int a2,
        pthread_mutex_t *a3,
        pthread_mutex_t *a4,
        char a5,
        bool a6,
        bool a7)
{
  int result; // r0
  pthread_mutex_t *v12; // r0

  result = IsRemovedTrack(a2);
  if ( !result )
  {
    OS_MutexObtain(this[1]);
    if ( (*(int (__fastcall **)(pthread_mutex_t *))(this[4]->__lock + 16))(this[4]) == -2 )
      (*(void (__fastcall **)(pthread_mutex_t *))(this[4]->__lock + 32))(this[4]);
    this[8] = (pthread_mutex_t *)a2;
    this[9] = a4;
    this[10] = a3;
    *((_BYTE *)this + 44) = a5;
    *((_BYTE *)this + 27) = a6;
    *((_BYTE *)this + 28) = a7;
    v12 = this[1];
    *((_BYTE *)this + 26) = 1;
    return j_OS_MutexRelease(v12);
  }
  return result;
}


// ============================================================

// Address: 0x3aa702
// Original: _ZN15CAEStreamThread11IsUserTrackEv
// Demangled: CAEStreamThread::IsUserTrack(void)
int __fastcall CAEStreamThread::IsUserTrack(CAEStreamThread *this)
{
  return *((unsigned __int8 *)this + 27);
}


// ============================================================

// Address: 0x3aa706
// Original: _ZN15CAEStreamThread16GetTrackPlayTimeEv
// Demangled: CAEStreamThread::GetTrackPlayTime(void)
int __fastcall CAEStreamThread::GetTrackPlayTime(CAEStreamThread *this)
{
  int v2; // r0

  if ( *((_BYTE *)this + 29) )
    return -8;
  v2 = *((_DWORD *)this + 4);
  if ( !v2 )
    return -8;
  else
    return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 16))(v2);
}


// ============================================================

// Address: 0x3aa71c
// Original: _ZN15CAEStreamThread16GetTrackLengthMsEv
// Demangled: CAEStreamThread::GetTrackLengthMs(void)
int __fastcall CAEStreamThread::GetTrackLengthMs(CAEStreamThread *this)
{
  return *((_DWORD *)this + 13);
}


// ============================================================

// Address: 0x3aa720
// Original: _ZN15CAEStreamThread16GetActiveTrackIDEv
// Demangled: CAEStreamThread::GetActiveTrackID(void)
int __fastcall CAEStreamThread::GetActiveTrackID(CAEStreamThread *this)
{
  return *((_DWORD *)this + 14);
}


// ============================================================

// Address: 0x3aa724
// Original: _ZN15CAEStreamThread17GetPlayingTrackIDEv
// Demangled: CAEStreamThread::GetPlayingTrackID(void)
int __fastcall CAEStreamThread::GetPlayingTrackID(CAEStreamThread *this)
{
  return *((_DWORD *)this + 15);
}


// ============================================================

// Address: 0x3aa728
// Original: _ZN15CAEStreamThread9StopTrackEv
// Demangled: CAEStreamThread::StopTrack(void)
int __fastcall CAEStreamThread::StopTrack(int this)
{
  *(_BYTE *)(this + 30) = 1;
  return this;
}


// ============================================================

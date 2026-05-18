
// Address: 0x194250
// Original: j__ZN11RenderQueue4KillEv
// Demangled: RenderQueue::Kill(void)
// attributes: thunk
int __fastcall RenderQueue::Kill(RenderQueue *this)
{
  return _ZN11RenderQueue4KillEv(this);
}


// ============================================================

// Address: 0x19a838
// Original: j__ZN11RenderQueue7ProcessEv
// Demangled: RenderQueue::Process(void)
// attributes: thunk
int __fastcall RenderQueue::Process(RenderQueue *this)
{
  return _ZN11RenderQueue7ProcessEv(this);
}


// ============================================================

// Address: 0x19aa7c
// Original: j__ZN11RenderQueue10InitializeEv
// Demangled: RenderQueue::Initialize(void)
// attributes: thunk
int __fastcall RenderQueue::Initialize(RenderQueue *this)
{
  return _ZN11RenderQueue10InitializeEv(this);
}


// ============================================================

// Address: 0x19ac10
// Original: j__ZN11RenderQueue6FinishEv
// Demangled: RenderQueue::Finish(void)
// attributes: thunk
int __fastcall RenderQueue::Finish(RenderQueue *this)
{
  return _ZN11RenderQueue6FinishEv(this);
}


// ============================================================

// Address: 0x19d26c
// Original: j__ZN11RenderQueueC2Ev
// Demangled: RenderQueue::RenderQueue(void)
// attributes: thunk
void __fastcall RenderQueue::RenderQueue(RenderQueue *this)
{
  _ZN11RenderQueueC2Ev(this);
}


// ============================================================

// Address: 0x1a1520
// Original: j__ZN11RenderQueue5FlushEv
// Demangled: RenderQueue::Flush(void)
// attributes: thunk
int __fastcall RenderQueue::Flush(RenderQueue *this)
{
  return _ZN11RenderQueue5FlushEv(this);
}


// ============================================================

// Address: 0x1d1730
// Original: _ZN11RenderQueueC2Ev
// Demangled: RenderQueue::RenderQueue(void)
void __fastcall RenderQueue::RenderQueue(RenderQueue *this)
{
  bool v2; // zf
  size_t v3; // r0
  int v4; // r6
  char *v5; // r11
  __int64 v6; // d11
  __int64 v7; // d10
  __int64 v8; // d13
  __int64 v9; // d9
  __int64 v10; // d12
  int v11; // r0
  __int64 v12; // d8
  __int64 v13; // d17
  __int64 v14; // d16
  __int128 v15; // q9
  __int64 v16; // d15
  __int64 v17; // d14
  __int128 v18; // q14
  __int128 v19; // q13
  __int64 v20; // d23
  __int128 v21; // q12
  __int64 v22; // d22
  __int128 v23; // q9
  char *v24; // r1
  int v25; // r6
  __int64 v26; // d21
  __int64 v27; // d20
  __int64 v28; // d23
  __int64 v29; // d27
  __int64 v30; // d29
  __int64 v31; // d28
  __int64 v32; // d31
  __int64 v33; // d30
  __int64 v34; // d0
  __int64 v35; // d1
  __int64 v36; // r0

  *((_WORD *)this + 300) = 257;
  *((_DWORD *)this + 151) = OS_MutexCreate("RenderCommand");
  v2 = IsLowSpecDevice() == 0;
  v3 = 0x1000000;
  if ( !v2 )
    v3 = 0x80000;
  v4 = 0x1000000;
  v5 = (char *)malloc(v3);
  LODWORD(v6) = RQ_Command_rqVertexBufferDelete;
  LODWORD(v7) = RQ_Command_rqVertexBufferUpdate;
  HIDWORD(v6) = RQ_Command_rqIndexBufferSelect;
  HIDWORD(v7) = RQ_Command_rqVertexBufferCPU;
  LODWORD(v16) = RQ_Command_rqTargetCreate;
  LODWORD(v17) = RQ_Command_rqSelectTexture;
  LODWORD(v8) = "rqVertexBufferDelete";
  HIDWORD(v8) = "rqIndexBufferSelect";
  LODWORD(v9) = RQ_Command_rqDebugMarker;
  LODWORD(v10) = "rqVertexBufferUpdate";
  *((_DWORD *)this + 152) = v5;
  v11 = IsLowSpecDevice();
  LODWORD(v12) = RQ_Command_rqReadPixels;
  *((_QWORD *)this + 26) = -1LL;
  *((_QWORD *)this + 27) = 0x400000004LL;
  LODWORD(v13) = RQ_Command_rqFree;
  HIDWORD(v10) = "rqVertexBufferCPU";
  LODWORD(v14) = RQ_Command_rqSetZBias;
  *((_QWORD *)this + 1) = v7;
  *((_QWORD *)this + 2) = v6;
  LODWORD(v22) = "rqIndexBufferUpdate";
  *((_QWORD *)this + 51) = v10;
  *((_QWORD *)this + 52) = v8;
  LODWORD(v15) = 1891565;
  *((_QWORD *)&v15 + 1) = __PAIR64__(RQ_Command_rqTextureWrap, 1901521);
  LODWORD(v20) = "rqIndexBufferDelete";
  HIDWORD(v16) = RQ_Command_rqTargetSelect;
  HIDWORD(v17) = RQ_Command_rqDeleteTexture;
  DWORD1(v15) = RQ_Command_rqInitTexture;
  v18 = v15;
  LODWORD(v15) = 1883557;
  *((_QWORD *)&v15 + 1) = __PAIR64__(RQ_Command_rqBuildShader, 1884393);
  DWORD1(v15) = RQ_Command_rqDrawIndexed;
  v19 = v15;
  LODWORD(v23) = 1883137;
  *((_QWORD *)&v23 + 1) = __PAIR64__(RQ_Command_rqVertexStateApply, 1883517);
  DWORD1(v23) = RQ_Command_rqIndexBufferDelete;
  HIDWORD(v20) = "rqVertexStateCreate";
  *(_DWORD *)this = RQ_Command_rqVertexBufferSelect;
  v21 = v23;
  HIDWORD(v22) = "rqIndexBufferCPU";
  DWORD2(v23) = RQ_Command_rqDepthFunc;
  *((_DWORD *)this + 100) = "rqVertexBufferSelect";
  *((_DWORD *)this + 1) = RQ_Command_rqVertexBufferCreate;
  *((_DWORD *)this + 101) = "rqVertexBufferCreate";
  *((_DWORD *)this + 6) = RQ_Command_rqIndexBufferCreate;
  if ( v11 )
    v4 = 0x80000;
  v24 = &v5[v4];
  v25 = *((_DWORD *)this + 152);
  *((_WORD *)this + 310) = 0;
  *((_DWORD *)this + 153) = v24;
  *((_DWORD *)this + 154) = v25;
  *((_DWORD *)this + 156) = v25;
  *((_DWORD *)this + 157) = v25;
  *((_DWORD *)this + 50) = 4;
  *((_DWORD *)this + 51) = 4;
  *((_DWORD *)this + 56) = 4;
  *((_DWORD *)this + 106) = "rqIndexBufferCreate";
  *(_QWORD *)((char *)this + 228) = -1LL;
  *(_QWORD *)((char *)this + 236) = 0x9800000004LL;
  LODWORD(v23) = RQ_Command_rqEnableBlend;
  LODWORD(v26) = RQ_Command_rqTargetScissor;
  *((_DWORD *)this + 7) = RQ_Command_rqIndexBufferUpdate;
  *(_QWORD *)((char *)this + 428) = v22;
  *(_QWORD *)((char *)this + 436) = v20;
  LODWORD(v27) = RQ_Command_rqTargetViewport;
  LODWORD(v28) = "rqDrawIndexed";
  HIDWORD(v28) = "rqDrawNonIndexed";
  *((_OWORD *)this + 2) = v21;
  *((_DWORD *)this + 61) = 4;
  *((_DWORD *)this + 111) = "rqVertexStateApply";
  *((_DWORD *)this + 12) = RQ_Command_rqVertexStateDelete;
  *((_DWORD *)this + 62) = 4;
  *((_QWORD *)this + 56) = __PAIR64__("rqSetVertexDescription", "rqVertexStateDelete");
  *((_QWORD *)this + 57) = v28;
  *(_QWORD *)((char *)this + 252) = 0xC00000090LL;
  *(_QWORD *)((char *)this + 260) = 0x100000000CLL;
  *(_OWORD *)((char *)this + 52) = v19;
  LODWORD(v29) = "rqTextureMipMode";
  *((_DWORD *)this + 67) = -1;
  *((_DWORD *)this + 17) = RQ_Command_rqSelectShader;
  *((_DWORD *)this + 116) = "rqBuildShader";
  *((_DWORD *)this + 117) = "rqSelectShader";
  HIDWORD(v29) = "rqTextureWrap";
  *((_QWORD *)this + 34) = 0x400000004LL;
  *((_QWORD *)this + 35) = 0xC00000008LL;
  *(_OWORD *)((char *)this + 72) = v18;
  LODWORD(v30) = "rqDeleteTexture";
  *((_QWORD *)this + 59) = __PAIR64__("rqInitTexture", "rqDeleteShader");
  *((_QWORD *)this + 60) = v29;
  LODWORD(v31) = "rqTextureAniso";
  *((_DWORD *)this + 72) = -1;
  HIDWORD(v30) = "rqTargetCreate";
  *((_DWORD *)this + 22) = RQ_Command_rqTextureMip;
  HIDWORD(v31) = "rqSelectTexture";
  *((_DWORD *)this + 122) = "rqTextureMip";
  LODWORD(v32) = "rqTargetClear";
  LODWORD(v33) = "rqTargetDelete";
  *(_QWORD *)((char *)this + 292) = 0x800000008LL;
  *(_QWORD *)((char *)this + 300) = 0x400000004LL;
  *((_DWORD *)this + 23) = RQ_Command_rqTextureAniso;
  HIDWORD(v32) = "rqTargetScissor";
  *(_QWORD *)((char *)this + 492) = v31;
  *(_QWORD *)((char *)this + 500) = v30;
  HIDWORD(v33) = "rqTargetViewport";
  LODWORD(v34) = "rqEnableBlend";
  LODWORD(v35) = "rqDepthFunc";
  *((_QWORD *)this + 12) = v17;
  *((_QWORD *)this + 13) = v16;
  *((_DWORD *)this + 77) = 4;
  LODWORD(v31) = "rqSetAlphaTest";
  *((_DWORD *)this + 127) = "rqTargetSelect";
  *((_DWORD *)this + 78) = 4;
  LODWORD(v30) = "rqSetWindingOrder";
  *((_DWORD *)this + 28) = RQ_Command_rqTargetDelete;
  *((_QWORD *)this + 64) = v33;
  *((_QWORD *)this + 65) = v32;
  LODWORD(v33) = "rqInit";
  *(_QWORD *)((char *)this + 316) = 0x1C00000010LL;
  *(_QWORD *)((char *)this + 324) = 0x400000010LL;
  LODWORD(v32) = "rqSwapBuffers";
  HIDWORD(v9) = RQ_Command_rqShutdown;
  HIDWORD(v12) = RQ_Command_rqSwapBuffers;
  HIDWORD(v13) = RQ_Command_rqCopy;
  HIDWORD(v14) = RQ_Command_rqSetWindingOrder;
  HIDWORD(v23) = RQ_Command_rqSetCull;
  DWORD1(v23) = RQ_Command_rqBlendFunc;
  HIDWORD(v26) = RQ_Command_rqEnableDepthRead;
  HIDWORD(v27) = RQ_Command_rqTargetClear;
  HIDWORD(v32) = "rqDebugMarker";
  HIDWORD(v33) = "rqReadPixels";
  HIDWORD(v30) = "rqFree";
  HIDWORD(v31) = "rqSetZBias";
  HIDWORD(v35) = "rqSetCull";
  HIDWORD(v34) = "rqBlendFunc";
  *(_QWORD *)((char *)this + 116) = v27;
  *(_QWORD *)((char *)this + 124) = v26;
  *((_DWORD *)this + 132) = "rqEnableDepthRead";
  *((_DWORD *)this + 83) = 4;
  *((_DWORD *)this + 33) = RQ_Command_rqEnableDepthWrite;
  *((_DWORD *)this + 133) = "rqEnableDepthWrite";
  *((_QWORD *)this + 42) = 0x800000004LL;
  *((_QWORD *)this + 43) = 0x400000004LL;
  *(_OWORD *)((char *)this + 136) = v23;
  *((_QWORD *)this + 67) = v34;
  *((_QWORD *)this + 68) = v35;
  *((_DWORD *)this + 88) = 4;
  *((_DWORD *)this + 138) = "rqDisableCull";
  *(_QWORD *)((char *)this + 356) = 0x400000008LL;
  *(_QWORD *)((char *)this + 364) = 0x400000004LL;
  *((_DWORD *)this + 38) = RQ_Command_rqDisableCull;
  *((_DWORD *)this + 39) = RQ_Command_rqSetAlphaTest;
  *(_QWORD *)((char *)this + 556) = v31;
  *(_QWORD *)((char *)this + 564) = v30;
  *((_QWORD *)this + 20) = v14;
  *((_QWORD *)this + 21) = v13;
  *((_DWORD *)this + 143) = "rqCopy";
  *((_DWORD *)this + 93) = 12;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 44) = RQ_Command_rqInit;
  *((_QWORD *)this + 72) = v33;
  *((_QWORD *)this + 73) = v32;
  HIDWORD(v36) = "rqCleanup";
  *(_QWORD *)((char *)this + 380) = 20LL;
  *(_QWORD *)((char *)this + 388) = 0LL;
  *(_QWORD *)((char *)this + 180) = v12;
  *(_QWORD *)((char *)this + 188) = v9;
  LODWORD(v36) = "rqShutdown";
  *((_DWORD *)this + 99) = 0;
  *((_DWORD *)this + 49) = RQ_Command_rqCleanup;
  *((_QWORD *)this + 74) = v36;
}


// ============================================================

// Address: 0x1d1fe6
// Original: _ZN11RenderQueueD2Ev
// Demangled: RenderQueue::~RenderQueue()
void __fastcall RenderQueue::~RenderQueue(void **this)
{
  free(this[152]);
  this[152] = 0;
  this[153] = 0;
}


// ============================================================

// Address: 0x1d1ffe
// Original: _ZN11RenderQueue14ProcessCommandEPc
// Demangled: RenderQueue::ProcessCommand(char *)
char *__fastcall RenderQueue::ProcessCommand(void (__fastcall **this)(char **), char *a2)
{
  int v2; // r2
  char *v4; // [sp+4h] [bp-Ch] BYREF

  v2 = *(unsigned __int16 *)a2;
  v4 = a2 + 4;
  this[v2](&v4);
  return v4;
}


// ============================================================

// Address: 0x1d2018
// Original: _ZN11RenderQueue5ResetEv
// Demangled: RenderQueue::Reset(void)
int __fastcall RenderQueue::Reset(pthread_mutex_t **this)
{
  pthread_mutex_t *v2; // r1
  unsigned int *v3; // r0
  pthread_mutex_t *v4; // r2
  int v5; // r1
  unsigned int v6; // r2
  unsigned int *v7; // r0
  pthread_mutex_t *v8; // r1
  pthread_mutex_t *v9; // r2
  int v10; // r1
  unsigned int v11; // r2
  unsigned int *v12; // r0
  pthread_mutex_t *v13; // r1
  pthread_mutex_t *v14; // r2
  int v15; // r1
  unsigned int v16; // r2
  int result; // r0

  if ( *((_BYTE *)this + 601) )
    OS_MutexObtain(this[151]);
  v2 = this[152];
  v3 = (unsigned int *)(this + 156);
  v4 = this[156];
  __dmb(0xBu);
  v5 = (char *)v4 - (char *)v2;
  do
    v6 = __ldrex(v3);
  while ( __strex(v6 - v5, v3) );
  __dmb(0xBu);
  v7 = (unsigned int *)(this + 157);
  v8 = this[152];
  v9 = this[157];
  __dmb(0xBu);
  v10 = (char *)v9 - (char *)v8;
  do
    v11 = __ldrex(v7);
  while ( __strex(v11 - v10, v7) );
  __dmb(0xBu);
  v12 = (unsigned int *)(this + 154);
  v13 = this[152];
  v14 = this[154];
  __dmb(0xBu);
  v15 = (char *)v14 - (char *)v13;
  do
    v16 = __ldrex(v12);
  while ( __strex(v16 - v15, v12) );
  __dmb(0xBu);
  result = *((unsigned __int8 *)this + 601);
  if ( *((_BYTE *)this + 601) )
    return j_OS_MutexRelease(this[151]);
  return result;
}


// ============================================================

// Address: 0x1d20b0
// Original: _ZN11RenderQueue7ProcessEv
// Demangled: RenderQueue::Process(void)
int __fastcall RenderQueue::Process(pthread_mutex_t **this)
{
  char i; // r6
  int v3; // t1
  int v4; // r0
  unsigned __int16 *v5; // r1
  pthread_mutex_t *v7; // [sp+4h] [bp-14h] BYREF

  for ( i = 0; ; i = 1 )
  {
    if ( *((_BYTE *)this + 601) )
    {
      OS_MutexObtain(this[151]);
      v4 = *((unsigned __int8 *)this + 601);
    }
    else
    {
      v4 = 0;
    }
    v5 = (unsigned __int16 *)this[154];
    if ( v5 >= (unsigned __int16 *)this[156] )
      break;
    if ( v4 )
    {
      OS_MutexRelease(this[151]);
      v5 = (unsigned __int16 *)this[154];
    }
    v3 = *v5;
    v7 = (pthread_mutex_t *)(v5 + 2);
    ((void (__fastcall *)(pthread_mutex_t **))this[v3])(&v7);
    this[154] = v7;
  }
  if ( v4 )
    OS_MutexRelease(this[151]);
  return i & 1;
}


// ============================================================

// Address: 0x1d2124
// Original: _ZN11RenderQueue5FlushEv
// Demangled: RenderQueue::Flush(void)
int __fastcall RenderQueue::Flush(RenderQueue *this)
{
  int result; // r0
  int v3; // r1
  unsigned int *v4; // r0
  int v5; // r2
  int v6; // r1
  unsigned int v7; // r2
  unsigned int *v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r1
  unsigned int v12; // r2
  unsigned int *v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r1
  unsigned int v17; // r2

  if ( *((_BYTE *)this + 600) )
  {
    *((_BYTE *)this + 620) = 1;
    return j_OS_SemaphoreWait((sem_t *)GraphicsFlushSemaphore);
  }
  else
  {
    if ( *((_BYTE *)this + 601) )
      OS_MutexObtain(*((pthread_mutex_t **)this + 151));
    v3 = *((_DWORD *)this + 152);
    v4 = (unsigned int *)((char *)this + 624);
    v5 = *((_DWORD *)this + 156);
    __dmb(0xBu);
    v6 = v5 - v3;
    do
      v7 = __ldrex(v4);
    while ( __strex(v7 - v6, v4) );
    __dmb(0xBu);
    v8 = (unsigned int *)((char *)this + 628);
    v9 = *((_DWORD *)this + 152);
    v10 = *((_DWORD *)this + 157);
    __dmb(0xBu);
    v11 = v10 - v9;
    do
      v12 = __ldrex(v8);
    while ( __strex(v12 - v11, v8) );
    __dmb(0xBu);
    v13 = (unsigned int *)((char *)this + 616);
    v14 = *((_DWORD *)this + 152);
    v15 = *((_DWORD *)this + 154);
    __dmb(0xBu);
    v16 = v15 - v14;
    do
      v17 = __ldrex(v13);
    while ( __strex(v17 - v16, v13) );
    __dmb(0xBu);
    result = *((unsigned __int8 *)this + 601);
    if ( *((_BYTE *)this + 601) )
      return j_OS_MutexRelease(*((pthread_mutex_t **)this + 151));
  }
  return result;
}


// ============================================================

// Address: 0x1d21dc
// Original: _ZN11RenderQueue6FinishEv
// Demangled: RenderQueue::Finish(void)
int __fastcall RenderQueue::Finish(int this)
{
  if ( *(_BYTE *)(this + 600) )
  {
    *(_BYTE *)(this + 621) = 1;
    return j_OS_SemaphoreWait((sem_t *)GraphicsFinishSemaphore);
  }
  return this;
}


// ============================================================

// Address: 0x1d24e0
// Original: _ZN11RenderQueue10InitializeEv
// Demangled: RenderQueue::Initialize(void)
int __fastcall RenderQueue::Initialize(RenderQueue *this)
{
  RenderQueue *v1; // r0
  int v2; // r0
  int result; // r0

  v1 = (RenderQueue *)operator new(0x27Cu);
  RenderQueue::RenderQueue(v1);
  renderQueue = v2;
  result = *(unsigned __int8 *)(v2 + 600);
  if ( result )
  {
    OS_ThreadUnmakeCurrent();
    GraphicsFlushSemaphore = OS_SemaphoreCreate();
    GraphicsFinishSemaphore = OS_SemaphoreCreate();
    result = OS_ThreadLaunch((int)GraphicsThread, 0, 2, (int)"RenderQueue", 0, 3);
    GraphicsThreadHandle = result;
  }
  return result;
}


// ============================================================

// Address: 0x1d2560
// Original: _ZN11RenderQueue4KillEv
// Demangled: RenderQueue::Kill(void)
void __fastcall RenderQueue::Kill(RenderQueue *this)
{
  void **v1; // r4

  v1 = (void **)renderQueue;
  if ( *(_BYTE *)(renderQueue + 600) )
  {
    KillGraphicsThread = 1;
    OS_ThreadWait((void *)GraphicsThreadHandle);
    OS_ThreadClose((void *)GraphicsThreadHandle);
    v1 = (void **)renderQueue;
    GraphicsThreadHandle = 0;
  }
  if ( v1 )
  {
    free(v1[152]);
    operator delete(v1);
  }
}


// ============================================================

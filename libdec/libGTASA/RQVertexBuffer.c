
// Address: 0x18a0b4
// Original: j__ZN14RQVertexBuffer6DeleteEPS_
// Demangled: RQVertexBuffer::Delete(RQVertexBuffer*)
// attributes: thunk
int __fastcall RQVertexBuffer::Delete(RQVertexBuffer *this, RQVertexBuffer *a2)
{
  return _ZN14RQVertexBuffer6DeleteEPS_(this, a2);
}


// ============================================================

// Address: 0x1954ec
// Original: j__ZN14RQVertexBuffer3SetEPKvjPFvvE
// Demangled: RQVertexBuffer::Set(void const*,uint,void (*)(void))
// attributes: thunk
int __fastcall RQVertexBuffer::Set(RQVertexBuffer *this, const void *a2, unsigned int a3, void (*a4)(void))
{
  return _ZN14RQVertexBuffer3SetEPKvjPFvvE(this, a2, a3, a4);
}


// ============================================================

// Address: 0x197674
// Original: j__ZN14RQVertexBuffer3SetEPS_
// Demangled: RQVertexBuffer::Set(RQVertexBuffer*)
// attributes: thunk
int __fastcall RQVertexBuffer::Set(RQVertexBuffer *this, RQVertexBuffer *a2)
{
  return _ZN14RQVertexBuffer3SetEPS_(this, a2);
}


// ============================================================

// Address: 0x1977c4
// Original: j__ZN14RQVertexBuffer6UpdateEPKvj
// Demangled: RQVertexBuffer::Update(void const*,uint)
// attributes: thunk
int __fastcall RQVertexBuffer::Update(RQVertexBuffer *this, const void *a2, unsigned int a3)
{
  return _ZN14RQVertexBuffer6UpdateEPKvj(this, a2, a3);
}


// ============================================================

// Address: 0x197d24
// Original: j__ZN14RQVertexBuffer6CreateEPKvj
// Demangled: RQVertexBuffer::Create(void const*,uint)
// attributes: thunk
int __fastcall RQVertexBuffer::Create(RQVertexBuffer *this, const void *a2, unsigned int a3)
{
  return _ZN14RQVertexBuffer6CreateEPKvj(this, a2, a3);
}


// ============================================================

// Address: 0x199f74
// Original: j__ZN14RQVertexBuffer7SetSafeEv
// Demangled: RQVertexBuffer::SetSafe(void)
// attributes: thunk
int __fastcall RQVertexBuffer::SetSafe(RQVertexBuffer *this)
{
  return _ZN14RQVertexBuffer7SetSafeEv(this);
}


// ============================================================

// Address: 0x1cb734
// Original: _ZN14RQVertexBuffer6CreateEPKvj
// Demangled: RQVertexBuffer::Create(void const*,uint)
RQVertexBuffer *__fastcall RQVertexBuffer::Create(RQVertexBuffer *this, unsigned int a2, unsigned int a3)
{
  RQVertexBuffer *v5; // r6
  int v6; // r1
  _DWORD *v7; // r2
  int v8; // r1
  int v9; // r4
  __int64 v10; // kr00_8
  unsigned int *v11; // r0
  unsigned int v12; // r2

  v5 = (RQVertexBuffer *)operator new(0xCu);
  *((_DWORD *)v5 + 1) = 0;
  *((_DWORD *)v5 + 2) = 0;
  *(_DWORD *)v5 = &off_660880;
  v6 = renderQueue;
  RQVertexBuffer::curBuffer = (int)v5;
  v7 = *(_DWORD **)(renderQueue + 628);
  *(_DWORD *)(renderQueue + 632) = 1;
  *v7 = 1;
  *(_DWORD *)(v6 + 628) += 4;
  v8 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = v5;
  *(_DWORD *)(v8 + 628) += 4;
  v9 = renderQueue;
  if ( *(_BYTE *)(renderQueue + 601) )
    OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
  v10 = *(_QWORD *)(v9 + 624);
  v11 = (unsigned int *)(v9 + 624);
  __dmb(0xBu);
  do
    v12 = __ldrex(v11);
  while ( __strex(v12 + HIDWORD(v10) - v10, v11) );
  __dmb(0xBu);
  if ( *(_BYTE *)(v9 + 601) )
    OS_MutexRelease(*(pthread_mutex_t **)(v9 + 604));
  if ( !*(_BYTE *)(v9 + 600) )
    RenderQueue::Process((RenderQueue *)v9);
  if ( (unsigned int)(*(_DWORD *)(v9 + 624) + 1024) > *(_DWORD *)(v9 + 612) )
    RenderQueue::Flush((RenderQueue *)v9);
  RQVertexBuffer::Update(v5, this, a2);
  return v5;
}


// ============================================================

// Address: 0x1cb814
// Original: _ZN14RQVertexBuffer7SetSafeEv
// Demangled: RQVertexBuffer::SetSafe(void)
int *__fastcall RQVertexBuffer::SetSafe(RQVertexBuffer *this)
{
  int *result; // r0
  const void *v2; // r4
  void *v3; // r0
  size_t v4; // r5

  result = &ES2VertexBuffer::curCPUBuffer;
  v2 = (const void *)ES2VertexBuffer::curCPUBuffer;
  if ( ES2VertexBuffer::curCPUBuffer )
  {
    v3 = (void *)ES2VertexBuffer::safeCPUBuffer;
    v4 = ES2VertexBuffer::curCPUSize;
    if ( ES2VertexBuffer::safeCPUSize < (unsigned int)ES2VertexBuffer::curCPUSize )
    {
      if ( ES2VertexBuffer::safeCPUBuffer )
      {
        free((void *)ES2VertexBuffer::safeCPUBuffer);
        v2 = (const void *)ES2VertexBuffer::curCPUBuffer;
        v4 = ES2VertexBuffer::curCPUSize;
      }
      ES2VertexBuffer::safeCPUSize = 4 * v4 / 3;
      v3 = malloc(ES2VertexBuffer::safeCPUSize);
      ES2VertexBuffer::safeCPUBuffer = (int)v3;
    }
    memcpy_1(v3, v2, v4);
    result = (int *)ES2VertexBuffer::safeCPUBuffer;
    ES2VertexBuffer::curCPUBuffer = ES2VertexBuffer::safeCPUBuffer;
  }
  return result;
}


// ============================================================

// Address: 0x1cc156
// Original: _ZN14RQVertexBufferD2Ev
// Demangled: RQVertexBuffer::~RQVertexBuffer()
void __fastcall RQVertexBuffer::~RQVertexBuffer(RQVertexBuffer *this)
{
  ;
}


// ============================================================

// Address: 0x1d25c8
// Original: _ZN14RQVertexBuffer6UpdateEPKvj
// Demangled: RQVertexBuffer::Update(void const*,uint)
unsigned int __fastcall RQVertexBuffer::Update(RQVertexBuffer *this, RQVertexBuffer *a2, size_t a3)
{
  int v6; // r0
  _DWORD *v7; // r2
  int v8; // r0
  int v9; // r0
  int v10; // r6
  void *v11; // r0
  int v12; // r4
  __int64 v13; // kr00_8
  unsigned int *v14; // r0
  unsigned int v15; // r2
  unsigned int result; // r0

  RQVertexBuffer::Set(this, a2);
  v6 = renderQueue;
  if ( *(_DWORD *)(renderQueue + 624) + a3 + 67 > *(_DWORD *)(renderQueue + 612) )
  {
    RenderQueue::Flush((RenderQueue *)renderQueue);
    v6 = renderQueue;
  }
  v7 = *(_DWORD **)(v6 + 628);
  *(_DWORD *)(v6 + 632) = 2;
  *v7 = 2;
  *(_DWORD *)(v6 + 628) += 4;
  v8 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = this;
  *(_DWORD *)(v8 + 628) += 4;
  v9 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = a3;
  *(_DWORD *)(v9 + 628) += 4;
  if ( a3 )
  {
    v10 = renderQueue;
    v11 = (void *)((*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC);
    *(_DWORD *)(renderQueue + 628) = v11;
    memcpy_1(v11, a2, a3);
    if ( (a3 & 3) != 0 )
      a3 = (a3 + 3) & 0xFFFFFFFC;
    *(_DWORD *)(v10 + 628) += a3;
  }
  v12 = renderQueue;
  if ( *(_BYTE *)(renderQueue + 601) )
    OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
  v13 = *(_QWORD *)(v12 + 624);
  v14 = (unsigned int *)(v12 + 624);
  __dmb(0xBu);
  do
    v15 = __ldrex(v14);
  while ( __strex(v15 + HIDWORD(v13) - v13, v14) );
  __dmb(0xBu);
  if ( *(_BYTE *)(v12 + 601) )
    OS_MutexRelease(*(pthread_mutex_t **)(v12 + 604));
  if ( !*(_BYTE *)(v12 + 600) )
    RenderQueue::Process((RenderQueue *)v12);
  result = *(_DWORD *)(v12 + 612);
  if ( *(_DWORD *)(v12 + 624) + 1024 > result )
    return j_RenderQueue::Flush((RenderQueue *)v12);
  return result;
}


// ============================================================

// Address: 0x1d270c
// Original: _ZN14RQVertexBuffer3SetEPS_
// Demangled: RQVertexBuffer::Set(RQVertexBuffer*)
unsigned int __fastcall RQVertexBuffer::Set(RQVertexBuffer *this, RQVertexBuffer *a2)
{
  unsigned int result; // r0
  int v4; // r3
  _DWORD *v5; // r1
  int v6; // r1
  int v7; // r4
  __int64 v8; // kr00_8
  unsigned int *v9; // r0
  unsigned int v10; // r2

  if ( RQVertexState::curState )
    RQVertexState::Apply(0, a2);
  result = RQVertexBuffer::curBuffer;
  if ( (RQVertexBuffer *)RQVertexBuffer::curBuffer != this )
  {
    v4 = renderQueue;
    RQVertexBuffer::curBuffer = (int)this;
    bufferChanged = 1;
    v5 = *(_DWORD **)(renderQueue + 628);
    *(_DWORD *)(renderQueue + 632) = 0;
    *v5 = 0;
    *(_DWORD *)(v4 + 628) += 4;
    v6 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = this;
    *(_DWORD *)(v6 + 628) += 4;
    v7 = renderQueue;
    if ( *(_BYTE *)(renderQueue + 601) )
      OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
    v8 = *(_QWORD *)(v7 + 624);
    v9 = (unsigned int *)(v7 + 624);
    __dmb(0xBu);
    do
      v10 = __ldrex(v9);
    while ( __strex(v10 + HIDWORD(v8) - v8, v9) );
    __dmb(0xBu);
    if ( *(_BYTE *)(v7 + 601) )
      OS_MutexRelease(*(pthread_mutex_t **)(v7 + 604));
    if ( !*(_BYTE *)(v7 + 600) )
      RenderQueue::Process((RenderQueue *)v7);
    result = *(_DWORD *)(v7 + 612);
    if ( *(_DWORD *)(v7 + 624) + 1024 > result )
      return j_RenderQueue::Flush((RenderQueue *)v7);
  }
  return result;
}


// ============================================================

// Address: 0x1d28e4
// Original: _ZN14RQVertexBuffer3SetEPKvjPFvvE
// Demangled: RQVertexBuffer::Set(void const*,uint,void (*)(void))
char *__fastcall RQVertexBuffer::Set(RQVertexBuffer *this, RQVertexState *a2, void (*a3)(void), void (*a4)(void))
{
  size_t v6; // r4
  int v7; // r2
  _DWORD *v8; // r1
  int v9; // r1
  int v10; // r5
  __int64 v11; // kr00_8
  unsigned int *v12; // r0
  unsigned int v13; // r2
  int v14; // r0
  _DWORD *v15; // r2
  int v16; // r0
  int v17; // r5
  void *v18; // r0
  int v19; // r4
  __int64 v20; // kr08_8
  unsigned int *v21; // r0
  unsigned int v22; // r2
  char *result; // r0

  v6 = (size_t)a2;
  if ( RQVertexState::curState )
    RQVertexState::Apply(0, a2);
  if ( RQVertexBuffer::curBuffer )
  {
    v7 = renderQueue;
    RQVertexBuffer::curBuffer = 0;
    v8 = *(_DWORD **)(renderQueue + 628);
    *(_DWORD *)(renderQueue + 632) = 0;
    *v8 = 0;
    *(_DWORD *)(v7 + 628) += 4;
    v9 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = 0;
    *(_DWORD *)(v9 + 628) += 4;
    v10 = renderQueue;
    if ( *(_BYTE *)(renderQueue + 601) )
      OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
    v11 = *(_QWORD *)(v10 + 624);
    v12 = (unsigned int *)(v10 + 624);
    __dmb(0xBu);
    do
      v13 = __ldrex(v12);
    while ( __strex(v13 + HIDWORD(v11) - v11, v12) );
    __dmb(0xBu);
    if ( *(_BYTE *)(v10 + 601) )
      OS_MutexRelease(*(pthread_mutex_t **)(v10 + 604));
    if ( !*(_BYTE *)(v10 + 600) )
      RenderQueue::Process((RenderQueue *)v10);
    if ( (unsigned int)(*(_DWORD *)(v10 + 624) + 1024) > *(_DWORD *)(v10 + 612) )
      RenderQueue::Flush((RenderQueue *)v10);
  }
  v14 = renderQueue;
  if ( *(_DWORD *)(renderQueue + 624) + v6 + 27 > *(_DWORD *)(renderQueue + 612) )
  {
    RenderQueue::Flush((RenderQueue *)renderQueue);
    v14 = renderQueue;
  }
  v15 = *(_DWORD **)(v14 + 628);
  *(_DWORD *)(v14 + 632) = 3;
  *v15 = 3;
  *(_DWORD *)(v14 + 628) += 4;
  v16 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = v6;
  *(_DWORD *)(v16 + 628) += 4;
  if ( a3 )
  {
    a3();
  }
  else
  {
    v17 = renderQueue;
    v18 = (void *)((*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC);
    *(_DWORD *)(renderQueue + 628) = v18;
    memcpy_1(v18, this, v6);
    if ( (v6 & 3) != 0 )
      v6 = (v6 + 3) & 0xFFFFFFFC;
    *(_DWORD *)(v17 + 628) += v6;
  }
  v19 = renderQueue;
  if ( *(_BYTE *)(renderQueue + 601) )
    OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
  v20 = *(_QWORD *)(v19 + 624);
  v21 = (unsigned int *)(v19 + 624);
  __dmb(0xBu);
  do
    v22 = __ldrex(v21);
  while ( __strex(v22 + HIDWORD(v20) - v20, v21) );
  __dmb(0xBu);
  if ( *(_BYTE *)(v19 + 601) )
    OS_MutexRelease(*(pthread_mutex_t **)(v19 + 604));
  if ( !*(_BYTE *)(v19 + 600) )
    RenderQueue::Process((RenderQueue *)v19);
  if ( (unsigned int)(*(_DWORD *)(v19 + 624) + 1024) > *(_DWORD *)(v19 + 612) )
    RenderQueue::Flush((RenderQueue *)v19);
  result = &bufferChanged;
  bufferChanged = 1;
  return result;
}


// ============================================================

// Address: 0x1d2ae4
// Original: _ZN14RQVertexBuffer6DeleteEPS_
// Demangled: RQVertexBuffer::Delete(RQVertexBuffer*)
unsigned int __fastcall RQVertexBuffer::Delete(RQVertexBuffer *this, RQVertexBuffer *a2)
{
  int v3; // r2
  _DWORD *v4; // r1
  int v5; // r1
  int v6; // r5
  __int64 v7; // kr00_8
  unsigned int *v8; // r0
  unsigned int v9; // r2
  int v10; // r1
  _DWORD *v11; // r2
  int v12; // r1
  int v13; // r4
  __int64 v14; // kr08_8
  unsigned int *v15; // r0
  unsigned int v16; // r2
  unsigned int result; // r0

  if ( (RQVertexBuffer *)RQVertexBuffer::curBuffer == this )
  {
    v3 = renderQueue;
    RQVertexBuffer::curBuffer = 0;
    v4 = *(_DWORD **)(renderQueue + 628);
    *(_DWORD *)(renderQueue + 632) = 0;
    *v4 = 0;
    *(_DWORD *)(v3 + 628) += 4;
    v5 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = 0;
    *(_DWORD *)(v5 + 628) += 4;
    v6 = renderQueue;
    if ( *(_BYTE *)(renderQueue + 601) )
      OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
    v7 = *(_QWORD *)(v6 + 624);
    v8 = (unsigned int *)(v6 + 624);
    __dmb(0xBu);
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 + HIDWORD(v7) - v7, v8) );
    __dmb(0xBu);
    if ( *(_BYTE *)(v6 + 601) )
      OS_MutexRelease(*(pthread_mutex_t **)(v6 + 604));
    if ( !*(_BYTE *)(v6 + 600) )
      RenderQueue::Process((RenderQueue *)v6);
    if ( (unsigned int)(*(_DWORD *)(v6 + 624) + 1024) > *(_DWORD *)(v6 + 612) )
      RenderQueue::Flush((RenderQueue *)v6);
  }
  v10 = renderQueue;
  v11 = *(_DWORD **)(renderQueue + 628);
  *(_DWORD *)(renderQueue + 632) = 4;
  *v11 = 4;
  *(_DWORD *)(v10 + 628) += 4;
  v12 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = this;
  *(_DWORD *)(v12 + 628) += 4;
  v13 = renderQueue;
  if ( *(_BYTE *)(renderQueue + 601) )
    OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
  v14 = *(_QWORD *)(v13 + 624);
  v15 = (unsigned int *)(v13 + 624);
  __dmb(0xBu);
  do
    v16 = __ldrex(v15);
  while ( __strex(v16 + HIDWORD(v14) - v14, v15) );
  __dmb(0xBu);
  if ( *(_BYTE *)(v13 + 601) )
    OS_MutexRelease(*(pthread_mutex_t **)(v13 + 604));
  if ( !*(_BYTE *)(v13 + 600) )
    RenderQueue::Process((RenderQueue *)v13);
  result = *(_DWORD *)(v13 + 612);
  if ( *(_DWORD *)(v13 + 624) + 1024 > result )
    return j_RenderQueue::Flush((RenderQueue *)v13);
  return result;
}


// ============================================================

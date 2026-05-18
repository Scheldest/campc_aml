
// Address: 0x18bb68
// Original: j__ZN13RQIndexBuffer6DeleteEPS_
// Demangled: RQIndexBuffer::Delete(RQIndexBuffer*)
// attributes: thunk
int __fastcall RQIndexBuffer::Delete(RQIndexBuffer *this, RQIndexBuffer *a2)
{
  return _ZN13RQIndexBuffer6DeleteEPS_(this, a2);
}


// ============================================================

// Address: 0x18ef5c
// Original: j__ZN13RQIndexBuffer6CreateE19RQIndexBufferFormatPKvj
// Demangled: RQIndexBuffer::Create(RQIndexBufferFormat,void const*,uint)
// attributes: thunk
int RQIndexBuffer::Create()
{
  return _ZN13RQIndexBuffer6CreateE19RQIndexBufferFormatPKvj();
}


// ============================================================

// Address: 0x1922b4
// Original: j__ZN13RQIndexBuffer7SetSafeEv
// Demangled: RQIndexBuffer::SetSafe(void)
// attributes: thunk
int __fastcall RQIndexBuffer::SetSafe(RQIndexBuffer *this)
{
  return _ZN13RQIndexBuffer7SetSafeEv(this);
}


// ============================================================

// Address: 0x19be98
// Original: j__ZN13RQIndexBuffer3SetEPKvj
// Demangled: RQIndexBuffer::Set(void const*,uint)
// attributes: thunk
int __fastcall RQIndexBuffer::Set(RQIndexBuffer *this, const void *a2, unsigned int a3)
{
  return _ZN13RQIndexBuffer3SetEPKvj(this, a2, a3);
}


// ============================================================

// Address: 0x19fcfc
// Original: j__ZN13RQIndexBuffer3SetEPS_
// Demangled: RQIndexBuffer::Set(RQIndexBuffer*)
// attributes: thunk
int __fastcall RQIndexBuffer::Set(RQIndexBuffer *this, RQIndexBuffer *a2)
{
  return _ZN13RQIndexBuffer3SetEPS_(this, a2);
}


// ============================================================

// Address: 0x1a1458
// Original: j__ZN13RQIndexBuffer6UpdateEPKvj
// Demangled: RQIndexBuffer::Update(void const*,uint)
// attributes: thunk
int __fastcall RQIndexBuffer::Update(RQIndexBuffer *this, const void *a2, unsigned int a3)
{
  return _ZN13RQIndexBuffer6UpdateEPKvj(this, a2, a3);
}


// ============================================================

// Address: 0x1cb9d4
// Original: _ZN13RQIndexBuffer6CreateE19RQIndexBufferFormatPKvj
// Demangled: RQIndexBuffer::Create(RQIndexBufferFormat,void const*,uint)
RQIndexBuffer *__fastcall RQIndexBuffer::Create(int a1, const void *a2, unsigned int a3)
{
  RQIndexBuffer *v6; // r6
  int v7; // r1
  _DWORD *v8; // r2
  int v9; // r1
  int v10; // r4
  __int64 v11; // kr00_8
  unsigned int *v12; // r0
  unsigned int v13; // r2

  v6 = (RQIndexBuffer *)operator new(0x10u);
  *((_DWORD *)v6 + 1) = a1;
  *((_DWORD *)v6 + 2) = 0;
  *((_DWORD *)v6 + 3) = 0;
  *(_DWORD *)v6 = &off_660890;
  v7 = renderQueue;
  RQIndexBuffer::curBuffer = (int)v6;
  v8 = *(_DWORD **)(renderQueue + 628);
  *(_DWORD *)(renderQueue + 632) = 6;
  *v8 = 6;
  *(_DWORD *)(v7 + 628) += 4;
  v9 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = v6;
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
  RQIndexBuffer::Update(v6, a2, a3);
  return v6;
}


// ============================================================

// Address: 0x1cbab8
// Original: _ZN13RQIndexBuffer7SetSafeEv
// Demangled: RQIndexBuffer::SetSafe(void)
int *__fastcall RQIndexBuffer::SetSafe(RQIndexBuffer *this)
{
  int *result; // r0
  const void *v2; // r4
  void *v3; // r0
  size_t v4; // r5

  result = &ES2IndexBuffer::curCPUBuffer;
  v2 = (const void *)ES2IndexBuffer::curCPUBuffer;
  if ( ES2IndexBuffer::curCPUBuffer )
  {
    v3 = (void *)ES2IndexBuffer::safeCPUBuffer;
    v4 = ES2IndexBuffer::curCPUSize;
    if ( ES2IndexBuffer::safeCPUSize < (unsigned int)ES2IndexBuffer::curCPUSize )
    {
      if ( ES2IndexBuffer::safeCPUBuffer )
      {
        free((void *)ES2IndexBuffer::safeCPUBuffer);
        v2 = (const void *)ES2IndexBuffer::curCPUBuffer;
        v4 = ES2IndexBuffer::curCPUSize;
      }
      ES2IndexBuffer::safeCPUSize = 4 * v4 / 3;
      v3 = malloc(ES2IndexBuffer::safeCPUSize);
      ES2IndexBuffer::safeCPUBuffer = (int)v3;
    }
    memcpy_1(v3, v2, v4);
    result = (int *)ES2IndexBuffer::safeCPUBuffer;
    ES2IndexBuffer::curCPUBuffer = ES2IndexBuffer::safeCPUBuffer;
  }
  return result;
}


// ============================================================

// Address: 0x1cc15c
// Original: _ZN13RQIndexBufferD2Ev
// Demangled: RQIndexBuffer::~RQIndexBuffer()
void __fastcall RQIndexBuffer::~RQIndexBuffer(RQIndexBuffer *this)
{
  ;
}


// ============================================================

// Address: 0x1d2c40
// Original: _ZN13RQIndexBuffer6UpdateEPKvj
// Demangled: RQIndexBuffer::Update(void const*,uint)
unsigned int __fastcall RQIndexBuffer::Update(RQIndexBuffer *this, RQIndexBuffer *a2, size_t a3)
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

  RQIndexBuffer::Set(this, a2);
  v6 = renderQueue;
  if ( (a3 & 3) != 0 )
    a3 = (a3 + 3) & 0xFFFFFFFC;
  if ( *(_DWORD *)(renderQueue + 624) + a3 + 67 > *(_DWORD *)(renderQueue + 612) )
  {
    RenderQueue::Flush((RenderQueue *)renderQueue);
    v6 = renderQueue;
  }
  v7 = *(_DWORD **)(v6 + 628);
  *(_DWORD *)(v6 + 632) = 7;
  *v7 = 7;
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

// Address: 0x1d2d90
// Original: _ZN13RQIndexBuffer3SetEPS_
// Demangled: RQIndexBuffer::Set(RQIndexBuffer*)
unsigned int __fastcall RQIndexBuffer::Set(RQIndexBuffer *this, RQIndexBuffer *a2)
{
  unsigned int result; // r0
  int v4; // r2
  _DWORD *v5; // r1
  int v6; // r1
  int v7; // r4
  __int64 v8; // kr00_8
  unsigned int *v9; // r0
  unsigned int v10; // r2

  if ( RQVertexState::curState )
    RQVertexState::Apply(0, a2);
  result = RQIndexBuffer::curBuffer;
  if ( (RQIndexBuffer *)RQIndexBuffer::curBuffer != this )
  {
    v4 = renderQueue;
    RQIndexBuffer::curBuffer = (int)this;
    v5 = *(_DWORD **)(renderQueue + 628);
    *(_DWORD *)(renderQueue + 632) = 5;
    *v5 = 5;
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

// Address: 0x1d2e6c
// Original: _ZN13RQIndexBuffer3SetEPKvj
// Demangled: RQIndexBuffer::Set(void const*,uint)
unsigned int __fastcall RQIndexBuffer::Set(RQIndexBuffer *this, char *a2, unsigned int a3)
{
  RQVertexState *v5; // r1
  unsigned int v6; // r10
  char *v7; // r5
  int v8; // r2
  _DWORD *v9; // r1
  int v10; // r1
  int v11; // r6
  __int64 v12; // kr00_8
  unsigned int *v13; // r0
  unsigned int v14; // r2
  int v15; // r0
  _DWORD *v16; // r2
  int v17; // r0
  int v18; // r5
  void *v19; // r0
  int v20; // r4
  __int64 v21; // kr08_8
  unsigned int *v22; // r0
  unsigned int v23; // r2
  unsigned int result; // r0

  v5 = (RQVertexState *)(a2 + 3);
  v6 = (unsigned int)v5 & 0xFFFFFFFC;
  v7 = (char *)((unsigned int)v5 & 0xFFFFFFFC);
  if ( ((unsigned __int8)a2 & 3) == 0 )
    v7 = a2;
  if ( RQVertexState::curState )
    RQVertexState::Apply(0, v5);
  if ( RQIndexBuffer::curBuffer )
  {
    v8 = renderQueue;
    RQIndexBuffer::curBuffer = 0;
    v9 = *(_DWORD **)(renderQueue + 628);
    *(_DWORD *)(renderQueue + 632) = 5;
    *v9 = 5;
    *(_DWORD *)(v8 + 628) += 4;
    v10 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = 0;
    *(_DWORD *)(v10 + 628) += 4;
    v11 = renderQueue;
    if ( *(_BYTE *)(renderQueue + 601) )
      OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
    v12 = *(_QWORD *)(v11 + 624);
    v13 = (unsigned int *)(v11 + 624);
    __dmb(0xBu);
    do
      v14 = __ldrex(v13);
    while ( __strex(v14 + HIDWORD(v12) - v12, v13) );
    __dmb(0xBu);
    if ( *(_BYTE *)(v11 + 601) )
      OS_MutexRelease(*(pthread_mutex_t **)(v11 + 604));
    if ( !*(_BYTE *)(v11 + 600) )
      RenderQueue::Process((RenderQueue *)v11);
    if ( (unsigned int)(*(_DWORD *)(v11 + 624) + 1024) > *(_DWORD *)(v11 + 612) )
      RenderQueue::Flush((RenderQueue *)v11);
  }
  v15 = renderQueue;
  if ( (unsigned int)&v7[*(_DWORD *)(renderQueue + 624) + 15] > *(_DWORD *)(renderQueue + 612) )
  {
    RenderQueue::Flush((RenderQueue *)renderQueue);
    v15 = renderQueue;
  }
  v16 = *(_DWORD **)(v15 + 628);
  *(_DWORD *)(v15 + 632) = 8;
  *v16 = 8;
  *(_DWORD *)(v15 + 628) += 4;
  v17 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = v7;
  *(_DWORD *)(v17 + 628) += 4;
  v18 = renderQueue;
  v19 = (void *)((*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC);
  *(_DWORD *)(renderQueue + 628) = v19;
  memcpy_1(v19, this, (size_t)a2);
  if ( ((unsigned __int8)a2 & 3) == 0 )
    v6 = (unsigned int)a2;
  *(_DWORD *)(v18 + 628) += v6;
  v20 = renderQueue;
  if ( *(_BYTE *)(renderQueue + 601) )
    OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
  v21 = *(_QWORD *)(v20 + 624);
  v22 = (unsigned int *)(v20 + 624);
  __dmb(0xBu);
  do
    v23 = __ldrex(v22);
  while ( __strex(v23 + HIDWORD(v21) - v21, v22) );
  __dmb(0xBu);
  if ( *(_BYTE *)(v20 + 601) )
    OS_MutexRelease(*(pthread_mutex_t **)(v20 + 604));
  if ( !*(_BYTE *)(v20 + 600) )
    RenderQueue::Process((RenderQueue *)v20);
  result = *(_DWORD *)(v20 + 612);
  if ( *(_DWORD *)(v20 + 624) + 1024 > result )
    return j_RenderQueue::Flush((RenderQueue *)v20);
  return result;
}


// ============================================================

// Address: 0x1d3054
// Original: _ZN13RQIndexBuffer6DeleteEPS_
// Demangled: RQIndexBuffer::Delete(RQIndexBuffer*)
unsigned int __fastcall RQIndexBuffer::Delete(RQIndexBuffer *this, RQIndexBuffer *a2)
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

  if ( (RQIndexBuffer *)RQIndexBuffer::curBuffer == this )
  {
    v3 = renderQueue;
    RQIndexBuffer::curBuffer = 0;
    v4 = *(_DWORD **)(renderQueue + 628);
    *(_DWORD *)(renderQueue + 632) = 5;
    *v4 = 5;
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
  *(_DWORD *)(renderQueue + 632) = 9;
  *v11 = 9;
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

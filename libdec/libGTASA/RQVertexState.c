
// Address: 0x192ed8
// Original: j__ZN13RQVertexState5ApplyEPS_
// Demangled: RQVertexState::Apply(RQVertexState*)
// attributes: thunk
int __fastcall RQVertexState::Apply(RQVertexState *this, RQVertexState *a2)
{
  return _ZN13RQVertexState5ApplyEPS_(this, a2);
}


// ============================================================

// Address: 0x1a0090
// Original: j__ZN13RQVertexState6DeleteEPS_
// Demangled: RQVertexState::Delete(RQVertexState*)
// attributes: thunk
int __fastcall RQVertexState::Delete(RQVertexState *this, RQVertexState *a2)
{
  return _ZN13RQVertexState6DeleteEPS_(this, a2);
}


// ============================================================

// Address: 0x1cbc74
// Original: _ZN13RQVertexState6CreateEP14RQVertexBufferP13RQIndexBufferP25RQVertexBufferDescription
// Demangled: RQVertexState::Create(RQVertexBuffer *,RQIndexBuffer *,RQVertexBufferDescription *)
_QWORD *__fastcall RQVertexState::Create(int a1, int a2, const void *a3)
{
  _QWORD *v6; // r4
  int v7; // r0
  _DWORD *v8; // r1
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r5
  int v13; // r5
  __int64 v14; // kr00_8
  unsigned int *v15; // r0
  unsigned int v16; // r2

  v6 = (_QWORD *)operator new(8u);
  *v6 = (unsigned int)&off_6608A0;
  v7 = renderQueue;
  v8 = *(_DWORD **)(renderQueue + 628);
  *(_DWORD *)(renderQueue + 632) = 10;
  *v8 = 10;
  *(_DWORD *)(v7 + 628) += 4;
  v9 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = v6;
  *(_DWORD *)(v9 + 628) += 4;
  v10 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = a1;
  *(_DWORD *)(v10 + 628) += 4;
  v11 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = a2;
  *(_DWORD *)(v11 + 628) += 4;
  v12 = renderQueue;
  memcpy_1(*(void **)(renderQueue + 628), a3, 0x8Cu);
  *(_DWORD *)(v12 + 628) += 140;
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
  if ( (unsigned int)(*(_DWORD *)(v13 + 624) + 1024) > *(_DWORD *)(v13 + 612) )
    RenderQueue::Flush((RenderQueue *)v13);
  return v6;
}


// ============================================================

// Address: 0x1cc166
// Original: _ZN13RQVertexStateD2Ev
// Demangled: RQVertexState::~RQVertexState()
void __fastcall RQVertexState::~RQVertexState(RQVertexState *this)
{
  ;
}


// ============================================================

// Address: 0x1d27f4
// Original: _ZN13RQVertexState5ApplyEPS_
// Demangled: RQVertexState::Apply(RQVertexState*)
int *__fastcall RQVertexState::Apply(RQVertexState *this, RQVertexState *a2)
{
  int *result; // r0
  int v4; // r1
  _DWORD *v5; // r2
  int v6; // r1
  int v7; // r5
  __int64 v8; // kr00_8
  unsigned int *v9; // r0
  unsigned int v10; // r2

  result = (int *)RQVertexState::curState;
  if ( (RQVertexState *)RQVertexState::curState != this )
  {
    v4 = renderQueue;
    v5 = *(_DWORD **)(renderQueue + 628);
    *(_DWORD *)(renderQueue + 632) = 11;
    *v5 = 11;
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
    if ( (unsigned int)(*(_DWORD *)(v7 + 624) + 1024) > *(_DWORD *)(v7 + 612) )
      RenderQueue::Flush((RenderQueue *)v7);
    result = &RQVertexState::curState;
    RQVertexState::curState = (int)this;
    if ( this )
    {
      RQVertexBuffer::curBuffer = -1;
      result = elf_hash_bucket + 65283;
      dword_6BCC68 = 0xFFFF;
      RQIndexBuffer::curBuffer = -1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x1d32d4
// Original: _ZN13RQVertexState6DeleteEPS_
// Demangled: RQVertexState::Delete(RQVertexState*)
unsigned int __fastcall RQVertexState::Delete(RQVertexState *this, RQVertexState *a2)
{
  int v3; // r1
  _DWORD *v4; // r2
  int v5; // r1
  int v6; // r4
  __int64 v7; // kr00_8
  unsigned int *v8; // r0
  unsigned int v9; // r2
  unsigned int result; // r0

  if ( (RQVertexState *)RQVertexState::curState == this )
    RQVertexState::Apply(0, a2);
  v3 = renderQueue;
  v4 = *(_DWORD **)(renderQueue + 628);
  *(_DWORD *)(renderQueue + 632) = 12;
  *v4 = 12;
  *(_DWORD *)(v3 + 628) += 4;
  v5 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = this;
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
  result = *(_DWORD *)(v6 + 612);
  if ( *(_DWORD *)(v6 + 624) + 1024 > result )
    return j_RenderQueue::Flush((RenderQueue *)v6);
  return result;
}


// ============================================================

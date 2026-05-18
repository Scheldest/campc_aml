
// Address: 0x18d2f4
// Original: j__ZN14RQRenderTarget6CreateEjj17RQTargetColorTypePS_
// Demangled: RQRenderTarget::Create(uint,uint,RQTargetColorType,RQRenderTarget*)
// attributes: thunk
int RQRenderTarget::Create()
{
  return _ZN14RQRenderTarget6CreateEjj17RQTargetColorTypePS_();
}


// ============================================================

// Address: 0x18d31c
// Original: j__ZN14RQRenderTarget8ViewportEiijj
// Demangled: RQRenderTarget::Viewport(int,int,uint,uint)
// attributes: thunk
int __fastcall RQRenderTarget::Viewport(RQRenderTarget *this, int a2, int a3, unsigned int a4, unsigned int a5)
{
  return _ZN14RQRenderTarget8ViewportEiijj(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x195598
// Original: j__ZN14RQRenderTarget6SelectEPS_b
// Demangled: RQRenderTarget::Select(RQRenderTarget*,bool)
// attributes: thunk
int __fastcall RQRenderTarget::Select(RQRenderTarget *this, RQRenderTarget *a2, bool a3)
{
  return _ZN14RQRenderTarget6SelectEPS_b(this, a2, a3);
}


// ============================================================

// Address: 0x198634
// Original: j__ZN14RQRenderTarget5ClearEjPffi
// Demangled: RQRenderTarget::Clear(uint,float *,float,int)
// attributes: thunk
int __fastcall RQRenderTarget::Clear(RQRenderTarget *this, unsigned int a2, float *a3, float a4, int a5)
{
  return _ZN14RQRenderTarget5ClearEjPffi(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19b068
// Original: j__ZN14RQRenderTarget6DeleteEPS_
// Demangled: RQRenderTarget::Delete(RQRenderTarget*)
// attributes: thunk
int __fastcall RQRenderTarget::Delete(RQRenderTarget *this, RQRenderTarget *a2)
{
  return _ZN14RQRenderTarget6DeleteEPS_(this, a2);
}


// ============================================================

// Address: 0x19c910
// Original: j__ZN14RQRenderTarget6CreateEjj17RQTargetColorType17RQTargetDepthType
// Demangled: RQRenderTarget::Create(uint,uint,RQTargetColorType,RQTargetDepthType)
// attributes: thunk
int RQRenderTarget::Create()
{
  return _ZN14RQRenderTarget6CreateEjj17RQTargetColorType17RQTargetDepthType();
}


// ============================================================

// Address: 0x1d0790
// Original: _ZN14RQRenderTarget6CreateEjj17RQTargetColorType17RQTargetDepthType
// Demangled: RQRenderTarget::Create(uint,uint,RQTargetColorType,RQTargetDepthType)
int __fastcall RQRenderTarget::Create(int a1, int a2, int a3, int a4)
{
  int v8; // r4
  int v9; // r0
  int v10; // r6
  _QWORD *v11; // r2
  int v12; // r0
  _DWORD *v13; // r2
  int v14; // r0
  int v15; // r5
  __int64 v16; // kr00_8
  unsigned int *v17; // r0
  unsigned int v18; // r2

  v8 = operator new(0x1Cu);
  *(_DWORD *)(v8 + 4) = a3;
  *(_DWORD *)(v8 + 8) = a4;
  *(_QWORD *)(v8 + 12) = 0LL;
  *(_QWORD *)(v8 + 20) = 0LL;
  v9 = operator new(0x2Cu);
  v10 = 0;
  *(_BYTE *)(v9 + 12) = 0;
  if ( !a3 )
    v10 = 2;
  *(_DWORD *)(v9 + 16) = v10;
  *(_DWORD *)v9 = &off_6608EC;
  *(_DWORD *)(v9 + 4) = a1;
  v11 = (_QWORD *)(v9 + 20);
  *(_DWORD *)(v9 + 8) = a2;
  *(_DWORD *)(v9 + 36) = v8;
  *(_DWORD *)(v9 + 40) = 0;
  *(_DWORD *)v8 = v9;
  v12 = renderQueue;
  *v11 = 0x100000001LL;
  v11[1] = 0LL;
  v13 = *(_DWORD **)(v12 + 628);
  *(_DWORD *)(v12 + 632) = 26;
  *v13 = 26;
  *(_DWORD *)(v12 + 628) += 4;
  v14 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = v8;
  *(_DWORD *)(v14 + 628) += 4;
  v15 = renderQueue;
  if ( *(_BYTE *)(renderQueue + 601) )
    OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
  v16 = *(_QWORD *)(v15 + 624);
  v17 = (unsigned int *)(v15 + 624);
  __dmb(0xBu);
  do
    v18 = __ldrex(v17);
  while ( __strex(v18 + HIDWORD(v16) - v16, v17) );
  __dmb(0xBu);
  if ( *(_BYTE *)(v15 + 601) )
    OS_MutexRelease(*(pthread_mutex_t **)(v15 + 604));
  if ( !*(_BYTE *)(v15 + 600) )
    RenderQueue::Process((RenderQueue *)v15);
  if ( (unsigned int)(*(_DWORD *)(v15 + 624) + 1024) > *(_DWORD *)(v15 + 612) )
    RenderQueue::Flush((RenderQueue *)v15);
  return v8;
}


// ============================================================

// Address: 0x1d08c0
// Original: _ZN14RQRenderTarget6CreateEjj17RQTargetColorTypePS_
// Demangled: RQRenderTarget::Create(uint,uint,RQTargetColorType,RQRenderTarget*)
int *__fastcall RQRenderTarget::Create(int a1, int a2, int a3, int a4)
{
  int *v8; // r4
  int v9; // r0
  int v10; // r0
  int v11; // r3
  _QWORD *v12; // r2
  int v13; // r0
  _DWORD *v14; // r2
  int v15; // r0
  int v16; // r5
  __int64 v17; // kr00_8
  unsigned int *v18; // r0
  unsigned int v19; // r2

  v8 = (int *)operator new(0x1Cu);
  v9 = *(_DWORD *)(a4 + 8);
  v8[1] = a3;
  v8[2] = v9;
  v8[3] = a4;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v10 = operator new(0x2Cu);
  v11 = 0;
  *(_BYTE *)(v10 + 12) = 0;
  if ( !a3 )
    v11 = 2;
  *(_DWORD *)(v10 + 16) = v11;
  *(_DWORD *)v10 = &off_6608EC;
  *(_DWORD *)(v10 + 4) = a1;
  v12 = (_QWORD *)(v10 + 20);
  *(_DWORD *)(v10 + 8) = a2;
  *(_DWORD *)(v10 + 36) = v8;
  *(_DWORD *)(v10 + 40) = 0;
  *v8 = v10;
  v13 = renderQueue;
  *v12 = 0x100000001LL;
  v12[1] = 0LL;
  v14 = *(_DWORD **)(v13 + 628);
  *(_DWORD *)(v13 + 632) = 26;
  *v14 = 26;
  *(_DWORD *)(v13 + 628) += 4;
  v15 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = v8;
  *(_DWORD *)(v15 + 628) += 4;
  v16 = renderQueue;
  if ( *(_BYTE *)(renderQueue + 601) )
    OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
  v17 = *(_QWORD *)(v16 + 624);
  v18 = (unsigned int *)(v16 + 624);
  __dmb(0xBu);
  do
    v19 = __ldrex(v18);
  while ( __strex(v19 + HIDWORD(v17) - v17, v18) );
  __dmb(0xBu);
  if ( *(_BYTE *)(v16 + 601) )
    OS_MutexRelease(*(pthread_mutex_t **)(v16 + 604));
  if ( !*(_BYTE *)(v16 + 600) )
    RenderQueue::Process((RenderQueue *)v16);
  if ( (unsigned int)(*(_DWORD *)(v16 + 624) + 1024) > *(_DWORD *)(v16 + 612) )
    RenderQueue::Flush((RenderQueue *)v16);
  return v8;
}


// ============================================================

// Address: 0x1d09d8
// Original: _ZN14RQRenderTarget6SelectEPS_b
// Demangled: RQRenderTarget::Select(RQRenderTarget*,bool)
unsigned int __fastcall RQRenderTarget::Select(RQRenderTarget *this, RQRenderTarget *a2, bool a3)
{
  unsigned int result; // r0
  int v5; // r2
  _DWORD *v6; // r1
  int v7; // r1
  int v8; // r5
  __int64 v9; // kr00_8
  unsigned int *v10; // r0
  unsigned int v11; // r2
  int v12; // r1
  _DWORD *v13; // r2
  int v14; // r1
  int v15; // r4
  __int64 v16; // kr08_8
  unsigned int *v17; // r0
  unsigned int v18; // r2
  int v19; // r1
  _DWORD *v20; // r2
  int v21; // r1
  __int64 v22; // kr10_8
  unsigned int *v23; // r0
  unsigned int v24; // r2

  result = RQRenderTarget::selected;
  if ( (RQRenderTarget *)RQRenderTarget::selected != this || a2 == (RQRenderTarget *)((char *)&stderr + 1) )
  {
    v5 = renderQueue;
    RQRenderTarget::selected = (int)this;
    v6 = *(_DWORD **)(renderQueue + 628);
    *(_DWORD *)(renderQueue + 632) = 27;
    *v6 = 27;
    *(_DWORD *)(v5 + 628) += 4;
    v7 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = this;
    *(_DWORD *)(v7 + 628) += 4;
    v8 = renderQueue;
    if ( *(_BYTE *)(renderQueue + 601) )
      OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
    v9 = *(_QWORD *)(v8 + 624);
    v10 = (unsigned int *)(v8 + 624);
    __dmb(0xBu);
    do
      v11 = __ldrex(v10);
    while ( __strex(v11 + HIDWORD(v9) - v9, v10) );
    __dmb(0xBu);
    if ( *(_BYTE *)(v8 + 601) )
      OS_MutexRelease(*(pthread_mutex_t **)(v8 + 604));
    if ( !*(_BYTE *)(v8 + 600) )
      RenderQueue::Process((RenderQueue *)v8);
    if ( (unsigned int)(*(_DWORD *)(v8 + 624) + 1024) > *(_DWORD *)(v8 + 612) )
      RenderQueue::Flush((RenderQueue *)v8);
    if ( this && *(_DWORD *)(*(_DWORD *)this + 4) == *(_DWORD *)(*(_DWORD *)this + 8) )
    {
      v12 = renderQueue;
      v13 = *(_DWORD **)(renderQueue + 628);
      *(_DWORD *)(renderQueue + 632) = 38;
      *v13 = 38;
      *(_DWORD *)(v12 + 628) += 4;
      v14 = renderQueue;
      **(_DWORD **)(renderQueue + 628) = 1;
      *(_DWORD *)(v14 + 628) += 4;
      v15 = renderQueue;
      if ( *(_BYTE *)(renderQueue + 601) )
        OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
      v16 = *(_QWORD *)(v15 + 624);
      v17 = (unsigned int *)(v15 + 624);
      __dmb(0xBu);
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 + HIDWORD(v16) - v16, v17) );
    }
    else
    {
      v19 = renderQueue;
      v20 = *(_DWORD **)(renderQueue + 628);
      *(_DWORD *)(renderQueue + 632) = 38;
      *v20 = 38;
      *(_DWORD *)(v19 + 628) += 4;
      v21 = renderQueue;
      **(_DWORD **)(renderQueue + 628) = 0;
      *(_DWORD *)(v21 + 628) += 4;
      v15 = renderQueue;
      if ( *(_BYTE *)(renderQueue + 601) )
        OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
      v22 = *(_QWORD *)(v15 + 624);
      v23 = (unsigned int *)(v15 + 624);
      __dmb(0xBu);
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 + HIDWORD(v22) - v22, v23) );
    }
    __dmb(0xBu);
    if ( *(_BYTE *)(v15 + 601) )
      OS_MutexRelease(*(pthread_mutex_t **)(v15 + 604));
    if ( !*(_BYTE *)(v15 + 600) )
      RenderQueue::Process((RenderQueue *)v15);
    result = *(_DWORD *)(v15 + 612);
    if ( *(_DWORD *)(v15 + 624) + 1024 > result )
      return j_RenderQueue::Flush((RenderQueue *)v15);
  }
  return result;
}


// ============================================================

// Address: 0x1d0bb0
// Original: _ZN14RQRenderTarget6DeleteEPS_
// Demangled: RQRenderTarget::Delete(RQRenderTarget*)
unsigned int __fastcall RQRenderTarget::Delete(RQRenderTarget *this, RQRenderTarget *a2)
{
  int v3; // r1
  _DWORD *v4; // r2
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

  if ( (RQRenderTarget *)RQRenderTarget::selected == this )
  {
    v3 = renderQueue;
    v4 = *(_DWORD **)(renderQueue + 628);
    *(_DWORD *)(renderQueue + 632) = 27;
    *v4 = 27;
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
    RQRenderTarget::selected = 0;
  }
  v10 = renderQueue;
  v11 = *(_DWORD **)(renderQueue + 628);
  *(_DWORD *)(renderQueue + 632) = 28;
  *v11 = 28;
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

// Address: 0x1d3bb8
// Original: _ZN14RQRenderTarget8ViewportEiijj
// Demangled: RQRenderTarget::Viewport(int,int,uint,uint)
unsigned int __fastcall RQRenderTarget::Viewport(
        RQRenderTarget *this,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  int v5; // r4
  _DWORD *v6; // lr
  int v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r4
  __int64 v12; // kr00_8
  unsigned int *v13; // r0
  unsigned int v14; // r2
  unsigned int result; // r0

  v5 = renderQueue;
  v6 = *(_DWORD **)(renderQueue + 628);
  *(_DWORD *)(renderQueue + 632) = 29;
  *v6 = 29;
  *(_DWORD *)(v5 + 628) += 4;
  v7 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = this;
  *(_DWORD *)(v7 + 628) += 4;
  v8 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = a2;
  *(_DWORD *)(v8 + 628) += 4;
  v9 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = a3;
  *(_DWORD *)(v9 + 628) += 4;
  v10 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = a4;
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
  result = *(_DWORD *)(v11 + 612);
  if ( *(_DWORD *)(v11 + 624) + 1024 > result )
    return j_RenderQueue::Flush((RenderQueue *)v11);
  return result;
}


// ============================================================

// Address: 0x1d3ca4
// Original: _ZN14RQRenderTarget5ClearEjPffi
// Demangled: RQRenderTarget::Clear(uint,float *,float,int)
unsigned int __fastcall RQRenderTarget::Clear(RQRenderTarget *this, __int64 *a2, float *a3, float a4, int a5)
{
  int v5; // r4
  _DWORD *v6; // lr
  int v7; // r5
  int v8; // r0
  _QWORD *v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r4
  __int64 v13; // kr00_8
  unsigned int *v14; // r0
  unsigned int v15; // r2
  unsigned int result; // r0
  __int64 v17; // [sp+0h] [bp-18h]
  __int64 v18; // [sp+8h] [bp-10h]

  v5 = renderQueue;
  v6 = *(_DWORD **)(renderQueue + 628);
  *(_DWORD *)(renderQueue + 632) = 30;
  *v6 = 30;
  *(_DWORD *)(v5 + 628) += 4;
  v7 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = this;
  *(_DWORD *)(v7 + 628) += 4;
  v8 = renderQueue;
  v17 = *a2;
  v18 = a2[1];
  v9 = *(_QWORD **)(renderQueue + 628);
  *v9 = v17;
  v9[1] = v18;
  *(_DWORD *)(v8 + 628) += 16;
  v10 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = a3;
  *(_DWORD *)(v10 + 628) += 4;
  v11 = renderQueue;
  **(float **)(renderQueue + 628) = a4;
  *(_DWORD *)(v11 + 628) += 4;
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

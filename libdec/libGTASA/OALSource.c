
// Address: 0x18a084
// Original: j__ZN9OALSourceC2Ev
// Demangled: OALSource::OALSource(void)
// attributes: thunk
void __fastcall OALSource::OALSource(OALSource *this)
{
  _ZN9OALSourceC2Ev(this);
}


// ============================================================

// Address: 0x18a97c
// Original: j__ZN9OALSource7SetDataEPvjjj
// Demangled: OALSource::SetData(void *,uint,uint,uint)
// attributes: thunk
int __fastcall OALSource::SetData(OALSource *this, void *a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  return _ZN9OALSource7SetDataEPvjjj(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x18c4fc
// Original: j__ZN9OALSource9SetBufferEP9OALBuffer
// Demangled: OALSource::SetBuffer(OALBuffer *)
// attributes: thunk
int __fastcall OALSource::SetBuffer(OALSource *this, OALBuffer *a2)
{
  return _ZN9OALSource9SetBufferEP9OALBuffer(this, a2);
}


// ============================================================

// Address: 0x18c7d8
// Original: j__ZN9OALSource9SetStreamEv
// Demangled: OALSource::SetStream(void)
// attributes: thunk
int __fastcall OALSource::SetStream(OALSource *this)
{
  return _ZN9OALSource9SetStreamEv(this);
}


// ============================================================

// Address: 0x18cb48
// Original: j__ZN9OALSource5PauseEv
// Demangled: OALSource::Pause(void)
// attributes: thunk
int __fastcall OALSource::Pause(OALSource *this)
{
  return _ZN9OALSource5PauseEv(this);
}


// ============================================================

// Address: 0x18eb30
// Original: j__ZN9OALSource9GetVolumeEv
// Demangled: OALSource::GetVolume(void)
// attributes: thunk
int __fastcall OALSource::GetVolume(OALSource *this)
{
  return _ZN9OALSource9GetVolumeEv(this);
}


// ============================================================

// Address: 0x193274
// Original: j__ZN9OALSource12ObtainSourceEv
// Demangled: OALSource::ObtainSource(void)
// attributes: thunk
int __fastcall OALSource::ObtainSource(OALSource *this)
{
  return _ZN9OALSource12ObtainSourceEv(this);
}


// ============================================================

// Address: 0x195ae4
// Original: j__ZN9OALSource9SetVolumeEf
// Demangled: OALSource::SetVolume(float)
// attributes: thunk
int __fastcall OALSource::SetVolume(OALSource *this, float a2)
{
  return _ZN9OALSource9SetVolumeEf(this, a2);
}


// ============================================================

// Address: 0x19e5c4
// Original: j__ZN9OALSource14UnqueueBuffersEv
// Demangled: OALSource::UnqueueBuffers(void)
// attributes: thunk
int __fastcall OALSource::UnqueueBuffers(OALSource *this)
{
  return _ZN9OALSource14UnqueueBuffersEv(this);
}


// ============================================================

// Address: 0x1a041c
// Original: j__ZN9OALSource11QueueBufferEP9OALBuffer
// Demangled: OALSource::QueueBuffer(OALBuffer *)
// attributes: thunk
int __fastcall OALSource::QueueBuffer(OALSource *this, OALBuffer *a2)
{
  return _ZN9OALSource11QueueBufferEP9OALBuffer(this, a2);
}


// ============================================================

// Address: 0x1a1340
// Original: j__ZN9OALSource4PlayEv
// Demangled: OALSource::Play(void)
// attributes: thunk
int __fastcall OALSource::Play(OALSource *this)
{
  return _ZN9OALSource4PlayEv(this);
}


// ============================================================

// Address: 0x1a1658
// Original: j__ZN9OALSourceD2Ev
// Demangled: OALSource::~OALSource()
// attributes: thunk
void __fastcall OALSource::~OALSource(OALSource *this)
{
  _ZN9OALSourceD2Ev(this);
}


// ============================================================

// Address: 0x27f674
// Original: _ZN9OALSource6UpdateEv
// Demangled: OALSource::Update(void)
int __fastcall OALSource::Update(OALSource *this)
{
  int result; // r0
  int v3; // r1

  result = 0;
  v3 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 10) = 0;
  if ( v3 == 2 )
  {
    j_alGetSourcei();
    return 0;
  }
  return result;
}


// ============================================================

// Address: 0x27f914
// Original: _ZN9OALSourceC2Ev
// Demangled: OALSource::OALSource(void)
void __fastcall OALSource::OALSource(OALSource *this)
{
  __int64 v1; // r2

  HIDWORD(v1) = 1;
  LODWORD(v1) = &off_661FB8;
  *(_QWORD *)this = v1;
  ++OALBase::livingCount;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_DWORD *)this = &off_661FA8;
  *((_DWORD *)this + 9) = 1065353216;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 44) = 0;
}


// ============================================================

// Address: 0x27f970
// Original: _ZN9OALSourceD2Ev
// Demangled: OALSource::~OALSource()
void __fastcall OALSource::~OALSource(OALSource *this)
{
  OALBase *v2; // r0
  bool v3; // zf
  OALBase *v4; // r0
  int v5; // r3
  void *v6; // r0

  v2 = (OALBase *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_661FA8;
  v3 = v2 == 0;
  if ( v2 )
    v3 = *((_DWORD *)this + 3) == 2;
  if ( !v3 )
  {
    if ( *((_DWORD *)this + 2) )
    {
      j_alSourcei(*((_DWORD *)this + 2), 4105, 0);
      v4 = (OALBase *)*((_DWORD *)this + 4);
      if ( v4 )
        OALBase::Release(v4);
    }
    else
    {
      OALBase::Release(v2);
    }
    *((_DWORD *)this + 4) = 0;
  }
  if ( *((_DWORD *)this + 2) )
  {
    if ( (*((_DWORD *)this + 3) & 0xFFFFFFFE) == 2 )
      OALSource::UnqueueBuffers(this);
    if ( dword_6DFD74 )
    {
      v5 = 0;
      while ( *(OALSource **)(dword_6DFD78 + 4 * v5) != this )
      {
        if ( ++v5 >= (unsigned int)dword_6DFD74 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      v5 = -1;
    }
    memmove_1(
      (void *)(dword_6DFD78 + 4 * v5),
      (const void *)(dword_6DFD78 + 4 * v5 + 4),
      4 * (dword_6DFD74 + 0x3FFFFFFF - v5));
    --dword_6DFD74;
    j_alDeleteSources();
    *((_DWORD *)this + 2) = 0;
  }
  v6 = (void *)*((_DWORD *)this + 7);
  *((_DWORD *)this + 6) = 0;
  if ( v6 )
  {
    free(v6);
    *((_DWORD *)this + 7) = 0;
  }
  *((_DWORD *)this + 5) = 0;
  *(_DWORD *)this = &off_661FB8;
  --OALBase::livingCount;
}


// ============================================================

// Address: 0x27fa5c
// Original: _ZN9OALSource14UnqueueBuffersEv
// Demangled: OALSource::UnqueueBuffers(void)
int __fastcall OALSource::UnqueueBuffers(OALSource *this)
{
  j_alGetSourcei();
  return 0;
}


// ============================================================

// Address: 0x27fb0a
// Original: _ZN9OALSourceD0Ev
// Demangled: OALSource::~OALSource()
void __fastcall OALSource::~OALSource(OALSource *this)
{
  void *v1; // r0

  OALSource::~OALSource(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x27fb1c
// Original: _ZN9OALSource12ObtainSourceEv
// Demangled: OALSource::ObtainSource(void)
int __fastcall OALSource::ObtainSource(OALSource *this)
{
  int result; // r0
  int v3; // r6
  unsigned int v4; // r10
  void *v5; // r8
  void *v6; // r9
  bool v7; // zf

  result = *((_DWORD *)this + 2);
  if ( !result )
  {
    j_alGenSources();
    v3 = dword_6DFD74;
    if ( OALSource::activeSources >= (unsigned int)(dword_6DFD74 + 1) )
    {
      v5 = (void *)dword_6DFD78;
    }
    else
    {
      v4 = 4 * (dword_6DFD74 + 1) / 3u + 3;
      v5 = malloc(4 * v4);
      v6 = (void *)dword_6DFD78;
      if ( dword_6DFD78 )
      {
        memcpy_0(v5, (const void *)dword_6DFD78, 4 * v3);
        free(v6);
        v3 = dword_6DFD74;
      }
      dword_6DFD78 = (int)v5;
      OALSource::activeSources = v4;
    }
    *((_DWORD *)v5 + v3) = this;
    ++dword_6DFD74;
    result = *((_DWORD *)this + 4);
    v7 = result == 0;
    if ( result )
      v7 = *((_DWORD *)this + 3) == 2;
    if ( !v7 )
      return j_j_alSourcei();
  }
  return result;
}


// ============================================================

// Address: 0x27fbf8
// Original: _ZN9OALSource7SetDataEPvjjj
// Demangled: OALSource::SetData(void *,uint,uint,uint)
int __fastcall OALSource::SetData(OALSource *this, int a2, int a3, int a4, unsigned int a5)
{
  OALBase *v9; // r5
  int v10; // r6
  int v11; // r1
  OALBase *v12; // r0
  int v13; // r0

  v9 = (OALBase *)operator new(0x14u);
  v10 = 1;
  *((_DWORD *)v9 + 1) = 1;
  ++OALBase::livingCount;
  *((_DWORD *)v9 + 3) = 0;
  *(_DWORD *)v9 = &off_661F98;
  j_alGenBuffers();
  v11 = 4355;
  if ( a5 == 1 )
    v11 = 4353;
  j_alBufferData(*((_DWORD *)v9 + 2), v11, a2, a3, a4);
  *((_DWORD *)v9 + 4) = a3;
  v12 = (OALBase *)*((_DWORD *)this + 4);
  if ( v12 )
    OALBase::Release(v12);
  v13 = *((_DWORD *)this + 2);
  if ( *((_DWORD *)v9 + 3) )
    v10 = 2;
  *((_DWORD *)this + 3) = v10;
  *((_DWORD *)this + 4) = 0;
  if ( v13 )
    j_alSourcei(v13, 4105, *((_DWORD *)v9 + 2));
  *((_DWORD *)this + 4) = v9;
  ++*((_DWORD *)v9 + 1);
  return j_OALBase::Release(v9);
}


// ============================================================

// Address: 0x27fcac
// Original: _ZN9OALSource9SetBufferEP9OALBuffer
// Demangled: OALSource::SetBuffer(OALBuffer *)
int __fastcall OALSource::SetBuffer(OALSource *this, OALBuffer *a2)
{
  OALBase *v4; // r0
  int v5; // r2
  int v6; // r0
  int result; // r0

  v4 = (OALBase *)*((_DWORD *)this + 4);
  if ( v4 )
    OALBase::Release(v4);
  v5 = 1;
  *((_DWORD *)this + 4) = 0;
  v6 = *((_DWORD *)this + 2);
  if ( *((_DWORD *)a2 + 3) )
    v5 = 2;
  *((_DWORD *)this + 3) = v5;
  if ( v6 )
    j_alSourcei(v6, 4105, *((_DWORD *)a2 + 2));
  *((_DWORD *)this + 4) = a2;
  result = *((_DWORD *)a2 + 1) + 1;
  *((_DWORD *)a2 + 1) = result;
  return result;
}


// ============================================================

// Address: 0x27fce8
// Original: _ZN9OALSource7SetZeroEjj
// Demangled: OALSource::SetZero(uint,uint)
void __fastcall OALSource::SetZero(OALSource *this, size_t byte_count, unsigned int a3)
{
  void *v6; // r4

  v6 = malloc(byte_count);
  memset(v6, 0, byte_count);
  OALSource::SetData(this, v6, byte_count, a3, 1u);
  j_free(v6);
}


// ============================================================

// Address: 0x27fd26
// Original: _ZN9OALSource9SetStreamEv
// Demangled: OALSource::SetStream(void)
int __fastcall OALSource::SetStream(int this)
{
  *(_DWORD *)(this + 12) = 3;
  return this;
}


// ============================================================

// Address: 0x27fd2c
// Original: _ZN9OALSource11QueueBufferEP9OALBuffer
// Demangled: OALSource::QueueBuffer(OALBuffer *)
int __fastcall OALSource::QueueBuffer(const void **this, OALBuffer *a2)
{
  const void *v4; // r6
  unsigned int v5; // r10
  void *v6; // r0
  void *v7; // r8
  const void *v8; // r9
  int result; // r0

  OALSource::ObtainSource((OALSource *)this);
  OALSource::UnqueueBuffers((OALSource *)this);
  j_alSourceQueueBuffers();
  v4 = this[6];
  if ( this[5] >= (char *)v4 + 1 )
  {
    v8 = this[7];
  }
  else
  {
    v5 = 4 * ((int)v4 + 1) / 3u + 3;
    v6 = malloc(4 * v5);
    v7 = (void *)this[7];
    v8 = v6;
    if ( v7 )
    {
      memcpy_0(v6, this[7], 4 * (_DWORD)v4);
      free(v7);
      v4 = this[6];
    }
    this[7] = v8;
    this[5] = (const void *)v5;
  }
  *((_DWORD *)v8 + (_DWORD)v4) = a2;
  this[6] = (char *)this[6] + 1;
  result = *((_DWORD *)a2 + 1) + 1;
  *((_DWORD *)a2 + 1) = result;
  return result;
}


// ============================================================

// Address: 0x27fdb6
// Original: _ZN9OALSource5PauseEv
// Demangled: OALSource::Pause(void)
int __fastcall OALSource::Pause(OALSource *this)
{
  OALSource::ObtainSource(this);
  return j_j_alSourcePause();
}


// ============================================================

// Address: 0x27fdca
// Original: _ZN9OALSource4PlayEv
// Demangled: OALSource::Play(void)
int __fastcall OALSource::Play(OALSource *this)
{
  int result; // r0

  OALSource::ObtainSource(this);
  if ( *((_DWORD *)this + 3) == 2 )
  {
    OALSource::UnqueueBuffers(this);
    j_alSourceQueueBuffers();
    j_alSourceQueueBuffers();
    j_alSourceQueueBuffers();
    j_alSourceQueueBuffers();
    j_alSourceQueueBuffers();
    j_alSourceQueueBuffers();
    j_alSourceQueueBuffers();
    j_alSourceQueueBuffers();
    j_alSourceQueueBuffers();
    j_alSourceQueueBuffers();
    j_alSourceQueueBuffers();
  }
  j_alSourcePlay();
  *((_BYTE *)this + 44) = 0;
  result = 4114;
  *((_DWORD *)this + 10) = 4114;
  return result;
}


// ============================================================

// Address: 0x27fe90
// Original: _ZN9OALSource9GetVolumeEv
// Demangled: OALSource::GetVolume(void)
float __fastcall OALSource::GetVolume(OALSource *this)
{
  return logf(1.0 / *((float *)this + 9)) * -8.6562;
}


// ============================================================

// Address: 0x27fec0
// Original: _ZN9OALSource9SetVolumeEf
// Demangled: OALSource::SetVolume(float)
float __fastcall OALSource::SetVolume(OALSource *this, float a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float result; // r0

  OALSource::ObtainSource(this);
  result = COERCE_FLOAT(exp2f());
  v2.n64_u32[0] = 1.0;
  v3.n64_f32[0] = 1.0 / result;
  v2.n64_f32[0] = vmin_f32(v3, v2).n64_f32[0];
  if ( *((float *)this + 9) != v2.n64_f32[0] )
  {
    *((_DWORD *)this + 9) = v2.n64_u32[0];
    return COERCE_FLOAT(sub_198FC8());
  }
  return result;
}


// ============================================================


// Address: 0x18a400
// Original: j__ZN10ES2Texture18BindActiveTexturesEv
// Demangled: ES2Texture::BindActiveTextures(void)
// attributes: thunk
int __fastcall ES2Texture::BindActiveTextures(ES2Texture *this)
{
  return _ZN10ES2Texture18BindActiveTexturesEv(this);
}


// ============================================================

// Address: 0x18c5c8
// Original: j__ZN10ES2TextureD2Ev
// Demangled: ES2Texture::~ES2Texture()
// attributes: thunk
void __fastcall ES2Texture::~ES2Texture(ES2Texture *this)
{
  _ZN10ES2TextureD2Ev(this);
}


// ============================================================

// Address: 0x1d1208
// Original: _ZN10ES2Texture18BindActiveTexturesEv
// Demangled: ES2Texture::BindActiveTextures(void)
int *__fastcall ES2Texture::BindActiveTextures(ES2Texture *this)
{
  GLuint v1; // r4
  GLuint v2; // r4
  int *result; // r0
  GLuint v4; // r4

  v1 = ES2Texture::activeTextures[0];
  if ( ES2Texture::activeTextures[0] && ES2Texture::boundTextures != ES2Texture::activeTextures[0] )
  {
    if ( ES2Texture::curActiveTexture )
    {
      glActiveTexture(0x84C0u);
      ES2Texture::curActiveTexture = 0;
    }
    glBindTexture(0xDE1u, v1);
    ES2Texture::boundTextures = v1;
  }
  v2 = dword_6BCC1C;
  if ( dword_6BCC1C && dword_67A27C != dword_6BCC1C )
  {
    if ( ES2Texture::curActiveTexture != 1 )
    {
      glActiveTexture(0x84C1u);
      ES2Texture::curActiveTexture = 1;
    }
    glBindTexture(0xDE1u, v2);
    dword_67A27C = v2;
  }
  result = ES2Texture::activeTextures;
  v4 = dword_6BCC20;
  if ( dword_6BCC20 )
  {
    result = (int *)dword_67A280;
    if ( dword_67A280 != dword_6BCC20 )
    {
      if ( ES2Texture::curActiveTexture != 2 )
      {
        glActiveTexture(0x84C2u);
        ES2Texture::curActiveTexture = 2;
      }
      glBindTexture(0xDE1u, v4);
      result = &ES2Texture::boundTextures;
      dword_67A280 = v4;
    }
  }
  return result;
}


// ============================================================

// Address: 0x1d1330
// Original: _ZN10ES2TextureD2Ev
// Demangled: ES2Texture::~ES2Texture()
void __fastcall ES2Texture::~ES2Texture(ES2Texture *this)
{
  int v1; // r11
  const GLuint *v2; // r10
  int v3; // r0
  unsigned int v4; // r6
  unsigned int TextureSize; // r0

  v1 = 0;
  *(_DWORD *)this = &off_6608EC;
  v2 = (const GLuint *)((char *)this + 40);
  do
  {
    v3 = ES2Texture::boundTextures[v1];
    if ( v3 && v3 == *v2 )
    {
      if ( v1 != ES2Texture::curActiveTexture )
      {
        glActiveTexture(v1 + 33984);
        ES2Texture::curActiveTexture = v1;
      }
      glBindTexture(0xDE1u, 0);
      ES2Texture::boundTextures[v1] = 0;
    }
    ++v1;
  }
  while ( v1 != 8 );
  v4 = *v2;
  if ( ES2Texture::activeTextures[0] == *v2 )
    ES2Texture::activeTextures[0] = 0;
  if ( dword_6BCC1C == v4 )
    dword_6BCC1C = 0;
  if ( dword_6BCC20 == v4 )
    dword_6BCC20 = 0;
  if ( *((_DWORD *)this + 9) )
  {
    glDeleteTextures(1, v2);
  }
  else
  {
    TextureSize = RQTexture::GetTextureSize();
    ES2ResourceContainer::PutResource((ES2ResourceContainer *)&es2TexPool, v4, TextureSize);
  }
}


// ============================================================

// Address: 0x1d1450
// Original: _ZN10ES2TextureD0Ev
// Demangled: ES2Texture::~ES2Texture()
void __fastcall ES2Texture::~ES2Texture(ES2Texture *this)
{
  void *v1; // r0

  ES2Texture::~ES2Texture(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x1d1460
// Original: _ZN10ES2Texture9UploadMipEjPKv
// Demangled: ES2Texture::UploadMip(uint,void const*)
unsigned int __fastcall ES2Texture::UploadMip(ES2Texture *this, unsigned int a2, const void *a3)
{
  size_t MipSize; // r5
  int v7; // r2
  unsigned int v8; // r12
  __int64 v9; // kr00_8
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r1
  _DWORD *v15; // r2
  int v16; // r4
  __int64 v17; // kr08_8
  unsigned int *v18; // r0
  unsigned int v19; // r2
  unsigned int result; // r0
  unsigned int v21; // r6
  unsigned int v22; // r2
  int v23; // r0
  int v24; // r4
  void *v25; // r0
  int v26; // r4
  __int64 v27; // kr10_8
  unsigned int *v28; // r0
  unsigned int v29; // r2

  MipSize = RQTexture::GetMipSize(this, a2);
  v7 = renderQueue;
  v8 = *(_DWORD *)(renderQueue + 612);
  v9 = *(_QWORD *)(renderQueue + 624);
  *(_DWORD *)(renderQueue + 632) = 22;
  *(_DWORD *)HIDWORD(v9) = 22;
  *(_DWORD *)(v7 + 628) += 4;
  v10 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = this;
  *(_DWORD *)(v10 + 628) += 4;
  v11 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = a2;
  *(_DWORD *)(v11 + 628) += 4;
  v12 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = MipSize;
  *(_DWORD *)(v12 + 628) += 4;
  if ( (unsigned int)v9 + MipSize + 67 <= v8 )
  {
    v21 = (MipSize + 3) & 0xFFFFFFFC;
    v22 = v21;
    v23 = renderQueue;
    if ( (MipSize & 3) == 0 )
      v22 = MipSize;
    **(_DWORD **)(renderQueue + 628) = v22;
    *(_DWORD *)(v23 + 628) += 4;
    v24 = renderQueue;
    v25 = (void *)((*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC);
    *(_DWORD *)(renderQueue + 628) = v25;
    memcpy_1(v25, a3, MipSize);
    if ( (MipSize & 3) == 0 )
      v21 = MipSize;
    *(_DWORD *)(v24 + 628) += v21;
    v26 = renderQueue;
    if ( *(_BYTE *)(renderQueue + 601) )
      OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
    v27 = *(_QWORD *)(v26 + 624);
    v28 = (unsigned int *)(v26 + 624);
    __dmb(0xBu);
    do
      v29 = __ldrex(v28);
    while ( __strex(v29 + HIDWORD(v27) - v27, v28) );
    __dmb(0xBu);
    if ( *(_BYTE *)(v26 + 601) )
      OS_MutexRelease(*(pthread_mutex_t **)(v26 + 604));
    if ( !*(_BYTE *)(v26 + 600) )
      RenderQueue::Process((RenderQueue *)v26);
    result = *(_DWORD *)(v26 + 612);
    if ( *(_DWORD *)(v26 + 624) + 1024 > result )
      return j_RenderQueue::Flush((RenderQueue *)v26);
  }
  else
  {
    v13 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = 0;
    *(_DWORD *)(v13 + 628) += 4;
    v14 = renderQueue;
    v15 = (_DWORD *)((*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC);
    *(_DWORD *)(renderQueue + 628) = v15;
    *v15 = a3;
    *(_DWORD *)(v14 + 628) += 4;
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
    return j_RenderQueue::Flush((RenderQueue *)renderQueue);
  }
  return result;
}


// ============================================================

// Address: 0x1d165c
// Original: _ZN10ES2Texture6SelectEj
// Demangled: ES2Texture::Select(uint)
unsigned int __fastcall ES2Texture::Select(ES2Texture *this, unsigned int a2)
{
  int v2; // r2
  _DWORD *v3; // r4
  int v4; // r2
  int v5; // r0
  int v6; // r4
  __int64 v7; // kr00_8
  unsigned int *v8; // r0
  unsigned int v9; // r2
  unsigned int result; // r0

  RQTexture::selected[a2] = (int)this;
  v2 = renderQueue;
  v3 = *(_DWORD **)(renderQueue + 628);
  *(_DWORD *)(renderQueue + 632) = 24;
  *v3 = 24;
  *(_DWORD *)(v2 + 628) += 4;
  v4 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = this;
  *(_DWORD *)(v4 + 628) += 4;
  v5 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = a2;
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

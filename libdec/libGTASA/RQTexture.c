
// Address: 0x18a0c0
// Original: j__ZN9RQTexture6CreateE15RQTextureFormatjjb
// Demangled: RQTexture::Create(RQTextureFormat,uint,uint,bool)
// attributes: thunk
int RQTexture::Create()
{
  return _ZN9RQTexture6CreateE15RQTextureFormatjjb();
}


// ============================================================

// Address: 0x18e2d4
// Original: j__ZN9RQTexture6DeleteEPS_
// Demangled: RQTexture::Delete(RQTexture*)
// attributes: thunk
int __fastcall RQTexture::Delete(RQTexture *this, RQTexture *a2)
{
  return _ZN9RQTexture6DeleteEPS_(this, a2);
}


// ============================================================

// Address: 0x18f80c
// Original: j__ZN9RQTexture14GetTextureSizeEjj15RQTextureFormat
// Demangled: RQTexture::GetTextureSize(uint,uint,RQTextureFormat)
// attributes: thunk
int RQTexture::GetTextureSize()
{
  return _ZN9RQTexture14GetTextureSizeEjj15RQTextureFormat();
}


// ============================================================

// Address: 0x1943c0
// Original: j__ZNK9RQTexture16GetNumComponentsEv
// Demangled: RQTexture::GetNumComponents(void)
// attributes: thunk
int __fastcall RQTexture::GetNumComponents(RQTexture *this)
{
  return _ZNK9RQTexture16GetNumComponentsEv(this);
}


// ============================================================

// Address: 0x19c208
// Original: j__ZN9RQTexture14ConvertToRaw32EPhS0_jj15RQTextureFormat
// Demangled: RQTexture::ConvertToRaw32(uchar *,uchar *,uint,uint,RQTextureFormat)
// attributes: thunk
int __fastcall RQTexture::ConvertToRaw32(void *a1, void *a2, int a3, int a4, int a5)
{
  return _ZN9RQTexture14ConvertToRaw32EPhS0_jj15RQTextureFormat(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19ca2c
// Original: j__ZNK9RQTexture10GetMipSizeEj
// Demangled: RQTexture::GetMipSize(uint)
// attributes: thunk
int __fastcall RQTexture::GetMipSize(RQTexture *this, unsigned int a2)
{
  return _ZNK9RQTexture10GetMipSizeEj(this, a2);
}


// ============================================================

// Address: 0x1d0020
// Original: _ZN9RQTexture6CreateE15RQTextureFormatjjb
// Demangled: RQTexture::Create(RQTextureFormat,uint,uint,bool)
int __fastcall RQTexture::Create(int a1, int a2, int a3, char a4)
{
  int v8; // r4
  int v9; // r0
  _DWORD *v10; // r2
  int v11; // r0
  int v12; // r5
  __int64 v13; // kr00_8
  unsigned int *v14; // r0
  unsigned int v15; // r2

  v8 = operator new(0x2Cu);
  *(_DWORD *)(v8 + 4) = a2;
  *(_DWORD *)(v8 + 8) = a3;
  *(_BYTE *)(v8 + 12) = a4;
  *(_DWORD *)(v8 + 16) = a1;
  *(_DWORD *)(v8 + 36) = 0;
  *(_QWORD *)(v8 + 20) = 0x100000001LL;
  *(_QWORD *)(v8 + 28) = 0LL;
  *(_DWORD *)(v8 + 40) = 0;
  *(_DWORD *)v8 = &off_6608EC;
  v9 = renderQueue;
  v10 = *(_DWORD **)(renderQueue + 628);
  *(_DWORD *)(renderQueue + 632) = 19;
  *v10 = 19;
  *(_DWORD *)(v9 + 628) += 4;
  v11 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = v8;
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
  if ( (unsigned int)(*(_DWORD *)(v12 + 624) + 1024) > *(_DWORD *)(v12 + 612) )
    RenderQueue::Flush((RenderQueue *)v12);
  return v8;
}


// ============================================================

// Address: 0x1d0118
// Original: _ZN9RQTexture6DeleteEPS_
// Demangled: RQTexture::Delete(RQTexture*)
unsigned int __fastcall RQTexture::Delete(RQTexture *this, RQTexture *a2)
{
  int v2; // r2
  _DWORD *v3; // r3
  int v4; // r2
  int v5; // r4
  __int64 v6; // kr00_8
  unsigned int *v7; // r0
  unsigned int v8; // r2
  unsigned int result; // r0

  if ( (RQTexture *)RQTexture::selected == this )
    RQTexture::selected = 0;
  if ( (RQTexture *)dword_6BCCF4 == this )
    dword_6BCCF4 = 0;
  if ( (RQTexture *)dword_6BCCF8 == this )
    dword_6BCCF8 = 0;
  if ( (RQTexture *)dword_6BCCFC == this )
    dword_6BCCFC = 0;
  v2 = renderQueue;
  v3 = *(_DWORD **)(renderQueue + 628);
  *(_DWORD *)(renderQueue + 632) = 25;
  *v3 = 25;
  *(_DWORD *)(v2 + 628) += 4;
  v4 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = this;
  *(_DWORD *)(v4 + 628) += 4;
  v5 = renderQueue;
  if ( *(_BYTE *)(renderQueue + 601) )
    OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
  v6 = *(_QWORD *)(v5 + 624);
  v7 = (unsigned int *)(v5 + 624);
  __dmb(0xBu);
  do
    v8 = __ldrex(v7);
  while ( __strex(v8 + HIDWORD(v6) - v6, v7) );
  __dmb(0xBu);
  if ( *(_BYTE *)(v5 + 601) )
    OS_MutexRelease(*(pthread_mutex_t **)(v5 + 604));
  if ( !*(_BYTE *)(v5 + 600) )
    RenderQueue::Process((RenderQueue *)v5);
  result = *(_DWORD *)(v5 + 612);
  if ( *(_DWORD *)(v5 + 624) + 1024 > result )
    return j_RenderQueue::Flush((RenderQueue *)v5);
  return result;
}


// ============================================================

// Address: 0x1d3578
// Original: _ZN9RQTexture8SetAnisoE11RQAnisoMode
// Demangled: RQTexture::SetAniso(RQAnisoMode)
unsigned int __fastcall RQTexture::SetAniso(unsigned int result, int a2)
{
  int v2; // r3
  _DWORD *v3; // r4
  int v4; // r3
  int v5; // r0
  int v6; // r4
  __int64 v7; // kr00_8
  unsigned int *v8; // r0
  unsigned int v9; // r2

  if ( *(_DWORD *)(result + 32) != a2 )
  {
    *(_DWORD *)(result + 32) = a2;
    if ( byte_6B8BA3 )
    {
      v2 = renderQueue;
      v3 = *(_DWORD **)(renderQueue + 628);
      *(_DWORD *)(renderQueue + 632) = 23;
      *v3 = 23;
      *(_DWORD *)(v2 + 628) += 4;
      v4 = renderQueue;
      **(_DWORD **)(renderQueue + 628) = result;
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
    }
  }
  return result;
}


// ============================================================

// Address: 0x1d364c
// Original: _ZN9RQTexture7SetWrapE10RQWrapModeS0_
// Demangled: RQTexture::SetWrap(RQWrapMode,RQWrapMode)
unsigned int __fastcall RQTexture::SetWrap(unsigned int result, int a2, int a3)
{
  int v3; // r3
  bool v4; // zf
  int v5; // r1
  _DWORD *v6; // r2
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r4
  __int64 v11; // kr00_8
  unsigned int *v12; // r0
  unsigned int v13; // r2

  v3 = *(_DWORD *)(result + 20);
  v4 = v3 == a2;
  if ( v3 == a2 )
    v4 = *(_DWORD *)(result + 24) == a3;
  if ( !v4 )
  {
    *(_DWORD *)(result + 20) = a2;
    *(_DWORD *)(result + 24) = a3;
    v5 = renderQueue;
    v6 = *(_DWORD **)(renderQueue + 628);
    *(_DWORD *)(renderQueue + 632) = 21;
    *v6 = 21;
    *(_DWORD *)(v5 + 628) += 4;
    v7 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = result;
    *(_DWORD *)(v7 + 628) += 4;
    v8 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = *(_DWORD *)(result + 20);
    *(_DWORD *)(v8 + 628) += 4;
    v9 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = *(_DWORD *)(result + 24);
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
    result = *(_DWORD *)(v10 + 612);
    if ( *(_DWORD *)(v10 + 624) + 1024 > result )
      return j_RenderQueue::Flush((RenderQueue *)v10);
  }
  return result;
}


// ============================================================

// Address: 0x1d372c
// Original: _ZN9RQTexture10SetMipModeE9RQMipMode
// Demangled: RQTexture::SetMipMode(RQMipMode)
unsigned int __fastcall RQTexture::SetMipMode(unsigned int result, int a2)
{
  int v2; // r3
  _DWORD *v3; // r4
  int v4; // r3
  int v5; // r0
  int v6; // r4
  __int64 v7; // kr00_8
  unsigned int *v8; // r0
  unsigned int v9; // r2

  if ( *(_BYTE *)(result + 12) )
    a2 = 2;
  if ( a2 != *(_DWORD *)(result + 28) )
  {
    *(_DWORD *)(result + 28) = a2;
    v2 = renderQueue;
    v3 = *(_DWORD **)(renderQueue + 628);
    *(_DWORD *)(renderQueue + 632) = 20;
    *v3 = 20;
    *(_DWORD *)(v2 + 628) += 4;
    v4 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = result;
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
  }
  return result;
}


// ============================================================

// Address: 0x1d37f8
// Original: _ZNK9RQTexture16GetMipDimensionsEjRiS0_
// Demangled: RQTexture::GetMipDimensions(uint,int &,int &)
int __fastcall RQTexture::GetMipDimensions(RQTexture *this, char a2, int *a3, int *a4)
{
  __int64 v4; // kr00_8
  int v5; // lr
  int v6; // r12
  unsigned int v7; // r4
  int result; // r0
  signed int v9; // r1
  int v10; // r4
  bool v11; // cc
  int v12; // r4

  v4 = *(_QWORD *)((char *)this + 4);
  v5 = 1;
  v6 = HIDWORD(v4) >> a2;
  v7 = *((_DWORD *)this + 4);
  result = 1;
  if ( (int)(HIDWORD(v4) >> a2) > 1 )
    v5 = HIDWORD(v4) >> a2;
  v9 = (unsigned int)v4 >> a2;
  if ( v9 > 1 )
    result = v9;
  if ( v7 > 0x12 )
    goto LABEL_24;
  if ( ((1 << v7) & (unsigned int)&stru_43F78.st_size) != 0 )
  {
    v10 = 4;
    if ( result <= 4 )
      v9 = 4;
    v11 = v5 <= 4;
LABEL_15:
    *a3 = v9;
    if ( v11 )
      v6 = v10;
    v5 = v6;
    goto LABEL_18;
  }
  v12 = 1 << v7;
  if ( (v12 & 0xC000) == 0 )
  {
    if ( (v12 & 0x30000) != 0 )
    {
      v10 = 8;
      if ( result <= 8 )
        v9 = 8;
      v11 = v5 <= 8;
      goto LABEL_15;
    }
LABEL_24:
    *a3 = result;
    goto LABEL_18;
  }
  if ( result <= 16 )
    v9 = 16;
  *a3 = v9;
  if ( v5 <= 8 )
    v6 = 8;
  v5 = v6;
LABEL_18:
  *a4 = v5;
  return result;
}


// ============================================================

// Address: 0x1d3894
// Original: _ZN9RQTexture14GetTextureSizeEjj15RQTextureFormat
// Demangled: RQTexture::GetTextureSize(uint,uint,RQTextureFormat)
unsigned int __fastcall RQTexture::GetTextureSize(int a1, int a2, int a3)
{
  unsigned int result; // r0
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r2

  switch ( a3 )
  {
    case 0:
      result = 4 * a1 * a2;
      break;
    case 1:
      result = 3 * a1 * a2;
      break;
    case 2:
    case 3:
    case 4:
    case 6:
      result = 2 * a1 * a2;
      break;
    case 5:
      result = a1 * a2;
      break;
    case 7:
    case 8:
    case 11:
    case 18:
      v4 = 4;
      if ( (unsigned int)a1 <= 4 )
        a1 = 4;
      if ( (unsigned int)a2 > 4 )
        v4 = a2;
      result = (unsigned int)(a1 * v4) >> 1;
      break;
    case 9:
    case 10:
    case 12:
    case 13:
      v5 = 4;
      if ( (unsigned int)a1 <= 4 )
        a1 = 4;
      if ( (unsigned int)a2 > 4 )
        v5 = a2;
      result = a1 * v5;
      break;
    case 14:
    case 15:
      v6 = 8;
      if ( a2 <= 8 )
        a2 = 8;
      if ( a1 > 8 )
        v6 = a1;
      result = (unsigned int)(2 * v6 * a2 + 7) >> 3;
      break;
    case 16:
    case 17:
      v7 = 8;
      if ( a2 <= 8 )
        a2 = 8;
      if ( a1 > 8 )
        v7 = a1;
      result = (unsigned int)(4 * v7 * a2 + 7) >> 3;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// ============================================================

// Address: 0x1d392c
// Original: _ZN9RQTexture12GetMipOffsetEjj15RQTextureFormatj
// Demangled: RQTexture::GetMipOffset(uint,uint,RQTextureFormat,uint)
int __fastcall RQTexture::GetMipOffset(unsigned int a1, unsigned int a2, int a3, unsigned int a4)
{
  int result; // r0
  unsigned int v6; // r11
  unsigned int v7; // r8
  int v8; // r5
  int v9; // r9
  int v10; // r6
  int v11; // r10
  int v12; // r4
  int v13; // r5
  int v14; // r4
  int v15; // r5
  int v16; // r4

  result = 0;
  if ( a4 && (int)(a2 * a1) >= 2 )
  {
    result = 0;
    v6 = 0;
    do
    {
      v8 = a2 >> v6;
      v9 = 1;
      v10 = a1 >> v6;
      if ( (int)(a2 >> v6) > 1 )
        v9 = a2 >> v6;
      v11 = 1;
      if ( v10 > 1 )
        v11 = a1 >> v6;
      switch ( a3 )
      {
        case 0:
          v7 = 4 * v11 * v9;
          break;
        case 1:
          v7 = 3 * v11 * v9;
          break;
        case 2:
        case 3:
        case 4:
        case 6:
          v7 = 2 * v11 * v9;
          break;
        case 5:
          v7 = v9 * v11;
          break;
        case 7:
        case 8:
        case 11:
        case 18:
          v12 = 4;
          if ( (unsigned int)v11 > 4 )
            v12 = v11;
          v13 = 4;
          if ( (unsigned int)v9 > 4 )
            v13 = v9;
          v7 = (unsigned int)(v12 * v13) >> 1;
          break;
        case 9:
        case 10:
        case 12:
        case 13:
          v14 = 4;
          if ( (unsigned int)v11 > 4 )
            v14 = v11;
          v15 = 4;
          if ( (unsigned int)v9 > 4 )
            v15 = v9;
          v7 = v15 * v14;
          break;
        case 14:
        case 15:
          v16 = 16;
          if ( v9 <= 8 )
            v8 = 8;
          if ( v11 > 8 )
            v16 = 2 * v10;
          goto LABEL_35;
        case 16:
        case 17:
          v16 = 32;
          if ( v9 <= 8 )
            v8 = 8;
          if ( v11 > 8 )
            v16 = 4 * v10;
LABEL_35:
          v7 = (unsigned int)(v16 * v8 + 7) >> 3;
          break;
        default:
          v7 = 0;
          break;
      }
      ++v6;
      result += v7;
    }
    while ( v6 < a4 && (unsigned int)(v9 * v11) > 1 );
  }
  return result;
}


// ============================================================

// Address: 0x1d3a44
// Original: _ZNK9RQTexture10GetMipSizeEj
// Demangled: RQTexture::GetMipSize(uint)
unsigned int __fastcall RQTexture::GetMipSize(RQTexture *this, char a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // r2
  int v5; // lr
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r4
  int v9; // r0
  unsigned int result; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0

  v2 = 1;
  v3 = *((_DWORD *)this + 4);
  v4 = *((_DWORD *)this + 2) >> a2;
  v5 = 1;
  if ( v4 > 1 )
    v2 = *((_DWORD *)this + 2) >> a2;
  v6 = *((_DWORD *)this + 1) >> a2;
  v7 = v3 - 7;
  if ( v6 > 1 )
    v5 = v6;
  if ( v7 <= 0xB )
  {
    v8 = dword_1D3B40[v7];
    v9 = dword_1D3B70[v7];
    if ( v2 <= v8 )
      v4 = v8;
    if ( v5 <= v9 )
      v6 = v9;
    v2 = v4;
    v5 = v6;
  }
  switch ( v3 )
  {
    case 0:
      result = 4 * v5 * v2;
      break;
    case 1:
      result = 3 * v5 * v2;
      break;
    case 2:
    case 3:
    case 4:
    case 6:
      result = 2 * v5 * v2;
      break;
    case 5:
      result = v2 * v5;
      break;
    case 7:
    case 8:
    case 11:
    case 18:
      v11 = 4;
      if ( (unsigned int)v5 <= 4 )
        v5 = 4;
      if ( (unsigned int)v2 > 4 )
        v11 = v2;
      result = (unsigned int)(v11 * v5) >> 1;
      break;
    case 9:
    case 10:
    case 12:
    case 13:
      v12 = 4;
      if ( (unsigned int)v5 <= 4 )
        v5 = 4;
      if ( (unsigned int)v2 > 4 )
        v12 = v2;
      result = v12 * v5;
      break;
    case 14:
    case 15:
      v13 = 8;
      if ( v2 <= 8 )
        v2 = 8;
      if ( v5 > 8 )
        v13 = v5;
      result = (unsigned int)(2 * v13 * v2 + 7) >> 3;
      break;
    case 16:
    case 17:
      v14 = 8;
      if ( v2 <= 8 )
        v2 = 8;
      if ( v5 > 8 )
        v14 = v5;
      result = (unsigned int)(4 * v14 * v2 + 7) >> 3;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// ============================================================

// Address: 0x1d3ba0
// Original: _ZNK9RQTexture16GetNumComponentsEv
// Demangled: RQTexture::GetNumComponents(void)
int __fastcall RQTexture::GetNumComponents(RQTexture *this)
{
  unsigned int v1; // r0

  v1 = *((_DWORD *)this + 4);
  if ( v1 <= 0x12 )
    return dword_5ECAA0[v1];
  else
    return 0;
}


// ============================================================

// Address: 0x1d3da0
// Original: _ZN9RQTexture14ConvertToRaw32EPhS0_jj15RQTextureFormat
// Demangled: RQTexture::ConvertToRaw32(uchar *,uchar *,uint,uint,RQTextureFormat)
// local variable allocation has failed, the output may be wrong!
void __fastcall RQTexture::ConvertToRaw32(char *a1, char *a2, unsigned int a3, unsigned int a4, int a5)
{
  char *v5; // r5
  unsigned int v6; // r6
  void *v7; // r4
  unsigned int v8; // r4
  char *v9; // r0
  bool v10; // cc
  __int128 v11; // q8
  char *v12; // r0
  char *v13; // r2
  unsigned int v14; // r3
  const char *v15; // r1
  __int128 v16; // q12 OVERLAPPED
  char *v17; // r5
  unsigned int v18; // lr
  char *v19; // r0
  bool v20; // cc
  __int64 v21; // d30 OVERLAPPED
  __int64 v22; // d31 OVERLAPPED
  unsigned __int8 *v23; // r2
  char *v24; // r0
  unsigned int v25; // r3
  const char *v26; // r4
  int64x2_t v27; // q8
  int64x2_t v28; // q6
  int8x16_t v29; // q7
  uint16x8_t v30; // q9
  int64x2_t v31; // q11
  uint16x8_t v32; // q10
  uint16x8_t v33; // q8
  int64x2_t v34; // q2
  uint16x8_t v35; // q11
  int64x2_t v36; // q9
  uint16x8_t v37; // q10
  int32x4_t v38; // q6
  uint16x8_t v39; // q9
  int64x2_t v40; // q7
  int64x2_t v41; // q5
  int64x2_t v42; // q5
  int64x2_t v43; // q2
  int16x8_t v44; // q9
  int64x2_t v45; // q8
  uint32x4_t v46; // q7
  int64x2_t v47; // q10
  int16x8_t v48; // q11
  unsigned __int64 v49; // d25
  unsigned __int64 v50; // d24
  unsigned __int64 v51; // d29
  unsigned __int64 v52; // d28
  unsigned __int64 v53; // d27
  unsigned __int64 v54; // d26
  char *v55; // r5
  int v56; // r0
  unsigned int v57; // r4
  char *v58; // r0
  bool v59; // cc
  int64x2_t v60; // q10
  char *v61; // r12
  int64x2_t v62; // q11
  char *v63; // lr
  unsigned int v64; // r0
  const char *v65; // r2
  int64x2_t v66; // q8
  const char *v67; // r3
  int64x2_t v68; // q2
  int64x2_t v69; // q4
  uint16x8_t v70; // q6
  uint32x4_t v71; // q8
  int64x2_t v72; // q1
  int32x4_t v73; // q0
  uint16x8_t v74; // q1
  uint16x8_t v75; // q8
  int32x4_t v76; // q3
  int32x4_t v77; // q5 OVERLAPPED
  uint16x8_t v78; // q8
  int32x4_t v79; // q2
  uint32x4_t v80; // q4
  uint16x8_t v81; // q9
  int32x4_t v82; // q8
  int16x8_t v83; // q4
  int64x2_t v84; // q9
  uint16x8_t v85; // q9
  int16x8_t v86; // q12
  int64x2_t v87; // q9
  int16x8_t v88; // q15
  int64x2_t v89; // q9
  int8x16_t v90; // q9
  int8x16_t v91; // q8
  char *v92; // r5
  int v93; // r0
  unsigned int v94; // r4
  char *v95; // r0
  bool v96; // cc
  int64x2_t v97; // q8
  char *v98; // r12
  char *v99; // r3
  unsigned int v100; // r0
  const char *v101; // r2
  int64x2_t v102; // q0 OVERLAPPED
  int8x16_t v103; // q1
  int64x2_t v104; // q2
  int8x16_t v105; // q3
  char *v106; // r5
  unsigned int v107; // r1
  char v108; // r6
  unsigned int v109; // r1
  unsigned int v110; // r6
  unsigned int v111; // r0
  char v112; // t1
  unsigned int v113; // r0
  char v114; // t1
  int64x2_t v115; // [sp+0h] [bp-68h]
  int8x8x3_t v116; // 0:d18.8,8:d20.8,16:d22.8 OVERLAPPED
  int8x8x3_t v117; // 0:d19.8,8:d21.8,16:d23.8 OVERLAPPED
  int8x8x4_t v118; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  int8x8x4_t v119; // 0:d6.8,8:d7.8,16:d8.8,24:d9.8
  int8x8x4_t v120; // 0:d12.8,8:d13.8,16:d14.8,24:d15.8
  int8x8x4_t v121; // 0:d18.8,8:d19.8,16:d20.8,24:d21.8
  int8x8x4_t v122; // 0:d22.8,8:d23.8,16:d24.8,24:d25.8
  int8x8x4_t v123; // 0:d26.8,8:d27.8,16:d28.8,24:d29.8 OVERLAPPED

  v5 = a1;
  v6 = a4 * a3;
  switch ( a5 )
  {
    case 0:
      j_memcpy_1(a1, a2, 4 * v6);
      return;
    case 1:
      if ( !v6 )
        return;
      if ( v6 <= 0xF )
        goto LABEL_46;
      v8 = v6 - (v6 & 0xF);
      if ( v6 == (v6 & 0xF) )
        goto LABEL_46;
      v9 = &a2[3 * v6];
      v10 = v9 > v5;
      if ( v9 > v5 )
        v10 = &v5[4 * v6] > a2;
      if ( v10 )
      {
LABEL_46:
        v8 = 0;
        v12 = v5;
        v13 = a2;
      }
      else
      {
        *(_QWORD *)&v11 = -1LL;
        *((_QWORD *)&v11 + 1) = -1LL;
        v12 = &v5[4 * v8];
        v13 = &a2[3 * v8];
        v14 = v6 - (v6 & 0xF);
        do
        {
          v116 = vld3_s8(a2);
          v15 = a2 + 24;
          v14 -= 16;
          v117 = vld3_s8(v15);
          a2 = (char *)(v15 + 24);
          v16 = v11;
          vst4_s8(v5, *(int8x8x4_t *)v116.val[0].n64_u64);
          v17 = v5 + 32;
          vst4_s8(v17, *(int8x8x4_t *)v117.val[0].n64_u64);
          v5 = v17 + 32;
        }
        while ( v14 );
        if ( (v6 & 0xF) == 0 )
          return;
      }
      v107 = v6 - v8;
      do
      {
        --v107;
        *v12 = *v13;
        v12[1] = v13[1];
        v108 = v13[2];
        v13 += 3;
        v12[3] = -1;
        v12[2] = v108;
        v12 += 4;
      }
      while ( v107 );
      return;
    case 2:
      if ( !v6 )
        return;
      if ( v6 <= 0xF )
        goto LABEL_50;
      v18 = v6 - (v6 & 0xF);
      if ( v6 == (v6 & 0xF) )
        goto LABEL_50;
      v19 = &a2[2 * v6];
      v20 = v19 > v5;
      if ( v19 > v5 )
        v20 = &v5[4 * v6] > a2;
      if ( v20 )
      {
LABEL_50:
        v18 = 0;
        v24 = v5;
        v23 = (unsigned __int8 *)a2;
LABEL_51:
        v109 = v6 - v18;
        do
        {
          --v109;
          *v24 = *v23 & 0xF8 | (*v23 >> 5);
          v24[1] = (*v23 >> 1) & 3 | (32 * *v23) | ((unsigned __int8)(v23[1] & 0xE0) >> 3);
          v110 = v23[1];
          v23 += 2;
          v24[3] = -1;
          v24[2] = (v110 >> 2) & 7 | (8 * v110);
          v24 += 4;
        }
        while ( v109 );
        return;
      }
      v21 = -1LL;
      v22 = -1LL;
      v23 = (unsigned __int8 *)&a2[2 * v18];
      v24 = &v5[4 * v18];
      v25 = v6 - (v6 & 0xF);
      v26 = a2;
      do
      {
        v118 = vld2q_s8(v26);
        v26 += 32;
        v27.n128_u64[0] = 0x606060606060606LL;
        v27.n128_u64[1] = 0x606060606060606LL;
        v25 -= 16;
        v28 = vandq_s64(*(int64x2_t *)v118.val[0].n64_u64, v27);
        v119 = vld2q_s8(a2);
        v29 = vshlq_n_s8(*(int8x16_t *)v118.val[0].n64_u64, 5u);
        a2 = (char *)v26;
        v27.n128_u64[0] = 0xE0E0E0E0E0E0E0E0LL;
        v27.n128_u64[1] = 0xE0E0E0E0E0E0E0E0LL;
        v30 = vmovl_u8(*(uint8x8_t *)&v28.n128_i8[8]);
        v31 = vandq_s64(*(int64x2_t *)v119.val[2].n64_u64, v27);
        v32 = vmovl_u8(*(uint8x8_t *)&v29.n128_i8[8]);
        *(int8x16_t *)v118.val[0].n64_u64 = vshlq_n_s8(*(int8x16_t *)v118.val[2].n64_u64, 3u);
        v33 = vmovl_u8(*(uint8x8_t *)&v31.n128_i8[8]);
        v34 = vorrq_s64(
                vshrq_n_u32(vmovl_u16(*(uint16x4_t *)&v30.n128_i8[8]), 1u),
                vmovl_u16(*(uint16x4_t *)&v32.n128_i8[8]));
        v35 = vmovl_u8((uint8x8_t)v31.n128_u64[0]);
        v36 = vorrq_s64(vshrq_n_u32(vmovl_u16((uint16x4_t)v30.n128_u64[0]), 1u), vmovl_u16((uint16x4_t)v32.n128_u64[0]));
        v37 = vmovl_u8((uint8x8_t)v28.n128_u64[0]);
        v38 = vorrq_s64(v36, vshrq_n_u32(vmovl_u16((uint16x4_t)v33.n128_u64[0]), 3u));
        v39 = vmovl_u8((uint8x8_t)v29.n128_u64[0]);
        v40 = vmovl_u16((uint16x4_t)v39.n128_u64[0]);
        v115 = vorrq_s64(v34, vshrq_n_u32(vmovl_u16(*(uint16x4_t *)&v33.n128_i8[8]), 3u));
        v41.n128_u64[0] = 0xF8F8F8F8F8F8F8F8LL;
        v41.n128_u64[1] = 0xF8F8F8F8F8F8F8F8LL;
        v42 = vandq_s64(*(int64x2_t *)v119.val[0].n64_u64, v41);
        v34.n128_u64[0] = 0x1C1C1C1C1C1C1C1CLL;
        v34.n128_u64[1] = 0x1C1C1C1C1C1C1C1CLL;
        v43 = vandq_s64(*(int64x2_t *)v118.val[2].n64_u64, v34);
        v44 = vorrq_s64(
                vorrq_s64(
                  vshrq_n_u32(vmovl_u16(*(uint16x4_t *)&v37.n128_i8[8]), 1u),
                  vmovl_u16(*(uint16x4_t *)&v39.n128_i8[8])),
                vshrq_n_u32(vmovl_u16(*(uint16x4_t *)&v35.n128_i8[8]), 3u));
        v45 = vorrq_s64(vshrq_n_u32(vmovl_u16((uint16x4_t)v37.n128_u64[0]), 1u), v40);
        v46 = vmovl_u16((uint16x4_t)v35.n128_u64[0]);
        v47 = vshrq_n_u16(vmovl_u8(v119.val[1]), 5u);
        *(int64x2_t *)v118.val[2].n64_u64 = vorrq_s64(
                                              vshrq_n_u16(vmovl_u8(v119.val[0]), 5u),
                                              vmovl_u8((uint8x8_t)v42.n128_u64[0]));
        *(uint16x8_t *)v119.val[0].n64_u64 = vmovl_u8(v118.val[1]);
        v48 = vorrq_s64(vshrq_n_u16(vmovl_u8((uint8x8_t)v43.n128_u64[0]), 2u), vmovl_u8(v118.val[0]));
        v118.val[0].n64_u64[0] = v115.n128_u64[0];
        v118.val[1].n64_u64[0] = v115.n128_u64[1];
        v49 = vmovn_s16(vorrq_s64(v47, vmovl_u8(*(uint8x8_t *)&v42.n128_i8[8]))).n64_u64[0];
        v118.val[1] = vmovn_s32(*(int32x4_t *)v118.val[0].n64_u64);
        v50 = vmovn_s16(*(int16x8_t *)v118.val[2].n64_u64).n64_u64[0];
        *(int16x4_t *)&v44.n128_i8[8] = vmovn_s32(v44);
        v51 = vmovn_s16(vorrq_s64(vshrq_n_u16(vmovl_u8(*(uint8x8_t *)&v43.n128_i8[8]), 2u), *(int64x2_t *)v119.val[0].n64_u64)).n64_u64[0];
        v118.val[0] = vmovn_s32(v38);
        v52 = vmovn_s16(v48).n64_u64[0];
        v44.n128_u64[0] = vmovn_s32(vorrq_s64(v45, vshrq_n_u32(v46, 3u))).n64_u64[0];
        v53 = vmovn_s16(*(int16x8_t *)v118.val[0].n64_u64).n64_u64[0];
        v54 = vmovn_s16(v44).n64_u64[0];
        vst4_s8(v5, *(int8x8x4_t *)(&v21 - 3));
        v55 = v5 + 32;
        vst4_s8(v55, *(int8x8x4_t *)(&v22 - 3));
        v5 = v55 + 32;
      }
      while ( v25 );
      if ( (v6 & 0xF) != 0 )
        goto LABEL_51;
      return;
    case 3:
      if ( v6 )
      {
        if ( v6 <= 0xF )
          goto LABEL_54;
        v56 = v6 & 0xF;
        if ( (v6 & 0xF) == 0 )
          v56 = 16;
        v57 = v6 - v56;
        if ( v6 == v56 )
          goto LABEL_54;
        v58 = &a2[(2 * v6) | 1];
        v59 = v58 > v5;
        if ( v58 > v5 )
          v59 = &v5[4 * v6] > a2;
        if ( v59 )
        {
LABEL_54:
          v57 = 0;
        }
        else
        {
          v60.n128_u64[0] = 0xF8000000F8LL;
          v60.n128_u64[1] = 0xF8000000F8LL;
          v61 = &a2[2 * v57];
          v62.n128_u64[0] = 0x700000007LL;
          v62.n128_u64[1] = 0x700000007LL;
          v63 = &v5[4 * v57];
          v64 = v57;
          v65 = a2;
          do
          {
            v123 = vld2q_s8(v65);
            v65 += 32;
            v66.n128_u64[0] = 0xC0C0C0C0C0C0C0C0LL;
            v66.n128_u64[1] = 0xC0C0C0C0C0C0C0C0LL;
            v67 = a2 + 1;
            v64 -= 16;
            v68 = vandq_s64(*(int64x2_t *)v123.val[2].n64_u64, v66);
            v66.n128_u64[0] = 0x707070707070707LL;
            v66.n128_u64[1] = 0x707070707070707LL;
            *(uint16x8_t *)v123.val[2].n64_u64 = vmovl_u8(*(uint8x8_t *)&v68.n128_i8[8]);
            v69 = vorrq_s64(
                    vandq_s64(*(int64x2_t *)v123.val[0].n64_u64, v66),
                    vshlq_n_s8(*(int8x16_t *)v123.val[0].n64_u64, 5u));
            v70 = vmovl_u8((uint8x8_t)v68.n128_u64[0]);
            *(uint16x8_t *)v123.val[0].n64_u64 = vmovl_u8(*(uint8x8_t *)&v69.n128_i8[8]);
            v71 = vmovl_u16(v123.val[2]);
            v72 = vshrq_n_u32(vmovl_u16(v123.val[3]), 3u);
            *(int8x8x4_t *)((char *)&v123 + 16) = vld2q_s8(v67);
            v73 = vorrq_s64(v72, vmovl_u16(v123.val[1]));
            v74 = vmovl_u8(v123.val[2]);
            v123.val[1] = vmovn_s32(v73);
            v123.val[0] = vmovn_s32(vorrq_s64(vshrq_n_u32(v71, 3u), vmovl_u16(v123.val[0])));
            v75 = vmovl_u8(v123.val[3]);
            v76 = vorrq_s64(
                    vandq_s64(vshll_n_u16((uint16x4_t)v75.n128_u64[0], 2u), v60),
                    vandq_s64(vshrq_n_u32(vmovl_u16((uint16x4_t)v75.n128_u64[0]), 3u), v62));
            v77 = vorrq_s64(
                    vandq_s64(vshll_n_u16(*(uint16x4_t *)&v75.n128_i8[8], 2u), v60),
                    vandq_s64(vshrq_n_u32(vmovl_u16(*(uint16x4_t *)&v75.n128_i8[8]), 3u), v62));
            v78 = vmovl_u8((uint8x8_t)v69.n128_u64[0]);
            v79 = vorrq_s64(
                    vshrq_n_u32(vmovl_u16((uint16x4_t)v70.n128_u64[0]), 3u),
                    vmovl_u16((uint16x4_t)v78.n128_u64[0]));
            v80 = vmovl_u16(*(uint16x4_t *)&v70.n128_i8[8]);
            v120 = vld2q_s8(a2);
            a2 = (char *)v65;
            v81 = vmovl_u8(v120.val[0]);
            v82 = vorrq_s64(vshrq_n_u32(v80, 3u), vmovl_u16(*(uint16x4_t *)&v78.n128_i8[8]));
            v83 = vmovl_u16(*(uint16x4_t *)&v81.n128_i8[8]);
            v84 = vmovl_u16((uint16x4_t)v81.n128_u64[0]);
            *(int16x4_t *)&v83.n128_i8[8] = vmovn_s32(vorrq_s64(vandq_s64(v83, v60), vshrq_n_u32(v83, 5u)));
            v83.n128_u64[0] = vmovn_s32(vorrq_s64(vandq_s64(v84, v60), vshrq_n_u32(v84, 5u))).n64_u64[0];
            v85 = vmovl_u8(v120.val[1]);
            v86 = vmovl_u16(*(uint16x4_t *)&v85.n128_i8[8]);
            v87 = vmovl_u16((uint16x4_t)v85.n128_u64[0]);
            *(int16x4_t *)&v86.n128_i8[8] = vmovn_s32(vorrq_s64(vandq_s64(v86, v60), vshrq_n_u32(v86, 5u)));
            v86.n128_u64[0] = vmovn_s32(vorrq_s64(vandq_s64(v87, v60), vshrq_n_u32(v87, 5u))).n64_u64[0];
            v89 = v88;
            v123.val[2].n64_u64[0] = 0x101010101010101LL;
            v123.val[3].n64_u64[0] = 0x101010101010101LL;
            *(int16x4_t *)&v88.n128_i8[8] = vmovn_s32(v77);
            v90 = vandq_s64(v89, *(int64x2_t *)v123.val[2].n64_u64);
            v123.val[3] = vmovn_s32(v82);
            v123.val[2] = vmovn_s32(v79);
            v91 = vnegq_s8(v90);
            *(int8x8_t *)&v77.n128_i8[8] = vmovn_s16(v86);
            v77.n128_u64[0] = vmovn_s16(v83).n64_u64[0];
            v120.val[1] = vmovn_s16(*(int16x8_t *)v123.val[0].n64_u64);
            *(int16x4_t *)&v90.n128_i8[8] = vmovn_s32(
                                              vorrq_s64(
                                                vandq_s64(vshll_n_u16(*(uint16x4_t *)&v74.n128_i8[8], 2u), v60),
                                                vandq_s64(
                                                  vshrq_n_u32(vmovl_u16(*(uint16x4_t *)&v74.n128_i8[8]), 3u),
                                                  v62)));
            v88.n128_u64[0] = vmovn_s32(v76).n64_u64[0];
            v120.val[0] = vmovn_s16(*(int16x8_t *)v123.val[2].n64_u64);
            v90.n128_u64[0] = vmovn_s32(
                                vorrq_s64(
                                  vandq_s64(vshll_n_u16((uint16x4_t)v74.n128_u64[0], 2u), v60),
                                  vandq_s64(vshrq_n_u32(vmovl_u16((uint16x4_t)v74.n128_u64[0]), 3u), v62))).n64_u64[0];
            v120.val[3] = vmovn_s16(v88);
            v120.val[2] = vmovn_s16(v90);
            vst4_s8(v5, *(int8x8x4_t *)v77.n128_u64);
            v92 = v5 + 32;
            vst4_s8(v92, *(int8x8x4_t *)&v77.n128_i8[8]);
            v5 = v92 + 32;
          }
          while ( v64 );
          v5 = v63;
          a2 = v61;
        }
        v111 = v6 - v57;
        do
        {
          --v111;
          *v5 = *a2 & 0xF8 | ((unsigned __int8)*a2 >> 5);
          v5[1] = *a2 & 7 | (32 * *a2) | ((unsigned __int8)(a2[1] & 0xC0) >> 3);
          v5[2] = ((unsigned __int8)a2[1] >> 3) & 7 | (4 * a2[1]) & 0xF8;
          v112 = a2[2];
          a2 += 2;
          v5[3] = -(v112 & 1);
          v5 += 4;
        }
        while ( v111 );
      }
      return;
    case 4:
      if ( v6 )
      {
        if ( v6 <= 0xF )
          goto LABEL_58;
        v93 = v6 & 0xF;
        if ( (v6 & 0xF) == 0 )
          v93 = 16;
        v94 = v6 - v93;
        if ( v6 == v93 )
          goto LABEL_58;
        v95 = &a2[(2 * v6) | 1];
        v96 = v95 > v5;
        if ( v95 > v5 )
          v96 = &v5[4 * v6] > a2;
        if ( v96 )
        {
LABEL_58:
          v94 = 0;
        }
        else
        {
          v97.n128_u64[0] = 0xF0F0F0F0F0F0F0F0LL;
          v97.n128_u64[1] = 0xF0F0F0F0F0F0F0F0LL;
          v98 = &a2[2 * v94];
          v99 = &v5[4 * v94];
          v100 = v94;
          do
          {
            v101 = a2 + 1;
            v121 = vld2q_s8(a2);
            a2 += 32;
            v100 -= 16;
            v122 = vld2q_s8(v101);
            v102 = vandq_s64(*(int64x2_t *)v121.val[0].n64_u64, v97);
            v103 = vshlq_n_s8(*(int8x16_t *)v121.val[0].n64_u64, 4u);
            v104 = vandq_s64(*(int64x2_t *)v122.val[0].n64_u64, v97);
            v105 = vshlq_n_s8(*(int8x16_t *)v122.val[2].n64_u64, 4u);
            vst4_s8(v5, *(int8x8x4_t *)v102.n128_u64);
            v106 = v5 + 32;
            vst4_s8(v106, *(int8x8x4_t *)&v102.n128_i8[8]);
            v5 = v106 + 32;
          }
          while ( v100 );
          v5 = v99;
          a2 = v98;
        }
        v113 = v6 - v94;
        do
        {
          --v113;
          *v5 = *a2 & 0xF0;
          v5[1] = 16 * *a2;
          v5[2] = a2[1] & 0xF0;
          v114 = a2[2];
          a2 += 2;
          v5[3] = 16 * v114;
          v5 += 4;
        }
        while ( v113 );
      }
      return;
    case 7:
    case 8:
    case 9:
    case 10:
      v7 = (void *)ConvertDXTToRaw8888(a2, a5, a3, a4);
      memcpy_1(v5, v7, 4 * v6);
      j_free(v7);
      return;
    default:
      return;
  }
}


// ============================================================

// Address: 0x1d4340
// Original: _ZN9RQTexture14ConvertToRaw16EPhS0_jj15RQTextureFormat
// Demangled: RQTexture::ConvertToRaw16(uchar *,uchar *,uint,uint,RQTextureFormat)
// local variable allocation has failed, the output may be wrong!
void __fastcall RQTexture::ConvertToRaw16(int16x4_t *a1, char *a2, unsigned int a3, unsigned int a4, int a5)
{
  int16x4_t *v5; // r5
  unsigned int v6; // r6
  void *v7; // r4
  unsigned int v8; // r4
  char *v9; // r0
  bool v10; // cc
  int16x4_t *v11; // r2
  char *v12; // r0
  unsigned int v13; // r3
  unsigned __int64 v14; // d17
  unsigned __int64 v15; // d22
  uint16x8_t v16; // q13
  uint16x8_t v17; // q12
  unsigned int v18; // r4
  char *v19; // r0
  bool v20; // cc
  int16x4_t *v21; // r2
  char *v22; // r0
  unsigned int v23; // r3
  unsigned __int64 v24; // d22
  unsigned __int64 v25; // d23
  uint16x8_t v26; // q11
  uint16x4_t v27; // d21
  unsigned int v28; // r1
  char v29; // r5
  __int16 v30; // r3
  unsigned int v31; // r4
  __int16 v32; // r6
  unsigned int v33; // r1
  unsigned int v34; // r5
  __int16 v35; // r3
  __int16 v36; // r6
  int8x8x3_t v37; // 0:d18.8,8:d19.8,16:d20.8 OVERLAPPED
  int8x8x4_t v38; // 0:d18.8,8:d19.8,16:d20.8,24:d21.8

  v5 = a1;
  v6 = a4 * a3;
  switch ( a5 )
  {
    case 0:
      if ( !v6 )
        return;
      if ( v6 < 8 )
        goto LABEL_24;
      v8 = v6 - (v6 & 7);
      if ( v6 == (v6 & 7) )
        goto LABEL_24;
      v9 = &a2[4 * v6];
      v10 = v9 > (char *)v5;
      if ( v9 > (char *)v5 )
        v10 = (char *)v5 + 2 * v6 > a2;
      if ( v10 )
      {
LABEL_24:
        v8 = 0;
        v12 = a2;
        v11 = v5;
      }
      else
      {
        v11 = (int16x4_t *)((char *)v5 + 2 * v8);
        v12 = &a2[4 * v8];
        v13 = v6 - (v6 & 7);
        do
        {
          v38 = vld4_s8(a2);
          a2 += 32;
          v13 -= 8;
          v14 = v38.val[0].n64_u64[0] & 0xF0F0F0F0F0F0F0F0LL;
          v15 = v38.val[1].n64_u64[0] & 0xF0F0F0F0F0F0F0F0LL;
          *(uint16x8_t *)v38.val[0].n64_u64 = vmovl_u8(v38.val[3]);
          v16 = vmovl_u8((uint8x8_t)v15);
          v17 = vmovl_u8((uint8x8_t)v14);
          *(uint16x8_t *)v38.val[2].n64_u64 = vmovl_u8((uint8x8_t)(v38.val[2].n64_u64[0] & 0xF0F0F0F0F0F0F0F0LL));
          v5->n64_u64[0] = vmovn_s32(
                             vorrq_s64(
                               vorrq_s64(
                                 vorrq_s64(
                                   vshll_n_u16((uint16x4_t)v16.n128_u64[0], 4u),
                                   vshll_n_u16((uint16x4_t)v17.n128_u64[0], 8u)),
                                 vmovl_u16(v38.val[2])),
                               vshrq_n_u32(vmovl_u16(v38.val[0]), 4u))).n64_u64[0];
          v5[1].n64_u64[0] = vmovn_s32(
                               vorrq_s64(
                                 vorrq_s64(
                                   vorrq_s64(
                                     vshll_n_u16(*(uint16x4_t *)&v16.n128_i8[8], 4u),
                                     vshll_n_u16(*(uint16x4_t *)&v17.n128_i8[8], 8u)),
                                   vmovl_u16(v38.val[3])),
                                 vshrq_n_u32(vmovl_u16(v38.val[1]), 4u))).n64_u64[0];
          v5 += 2;
        }
        while ( v13 );
        if ( (v6 & 7) == 0 )
          return;
      }
      v28 = v6 - v8;
      do
      {
        --v28;
        v29 = v12[2];
        v30 = *v12 & 0xF0;
        v31 = (unsigned __int8)v12[3];
        v32 = 16 * (v12[1] & 0xF0);
        v12 += 4;
        v11->n64_u16[0] = v32 | (v30 << 8) | v29 & 0xF0 | (v31 >> 4);
        v11 = (int16x4_t *)((char *)v11 + 2);
      }
      while ( v28 );
      return;
    case 1:
      if ( !v6 )
        return;
      if ( v6 <= 7 )
        goto LABEL_28;
      v18 = v6 - (v6 & 7);
      if ( v6 == (v6 & 7) )
        goto LABEL_28;
      v19 = &a2[3 * v6];
      v20 = v19 > (char *)v5;
      if ( v19 > (char *)v5 )
        v20 = (char *)v5 + 2 * v6 > a2;
      if ( v20 )
      {
LABEL_28:
        v18 = 0;
        v22 = a2;
        v21 = v5;
LABEL_29:
        v33 = v6 - v18;
        do
        {
          --v33;
          v34 = (unsigned __int8)v22[2];
          v35 = *v22 & 0xF8;
          v36 = v22[1] & 0xFC;
          v22 += 3;
          v21->n64_u16[0] = (8 * v36) | (v35 << 8) | (v34 >> 3);
          v21 = (int16x4_t *)((char *)v21 + 2);
        }
        while ( v33 );
        return;
      }
      v21 = (int16x4_t *)((char *)v5 + 2 * v18);
      v22 = &a2[3 * v18];
      v23 = v6 - (v6 & 7);
      do
      {
        v37 = vld3_s8(a2);
        a2 += 24;
        v23 -= 8;
        v24 = v37.val[0].n64_u64[0] & 0xF8F8F8F8F8F8F8F8LL;
        v25 = v37.val[1].n64_u64[0] & 0xFCFCFCFCFCFCFCFCLL;
        *(uint16x8_t *)v37.val[0].n64_u64 = vmovl_u8(v37.val[2]);
        *(uint16x8_t *)v37.val[2].n64_u64 = vmovl_u8((uint8x8_t)v24);
        v26 = vmovl_u8((uint8x8_t)v25);
        v5->n64_u64[0] = vmovn_s32(
                           vorrq_s64(
                             vorrq_s64(vshll_n_u16((uint16x4_t)v26.n128_u64[0], 3u), vshll_n_u16(v37.val[2], 8u)),
                             vshrq_n_u32(vmovl_u16(v37.val[0]), 3u))).n64_u64[0];
        v5[1].n64_u64[0] = vmovn_s32(
                             vorrq_s64(
                               vorrq_s64(vshll_n_u16(*(uint16x4_t *)&v26.n128_i8[8], 3u), vshll_n_u16(v27, 8u)),
                               vshrq_n_u32(vmovl_u16(v37.val[1]), 3u))).n64_u64[0];
        v5 += 2;
      }
      while ( v23 );
      if ( (v6 & 7) != 0 )
        goto LABEL_29;
      return;
    case 2:
    case 3:
    case 4:
      j_memcpy_1(a1, a2, 2 * v6);
      return;
    case 7:
    case 8:
    case 9:
    case 10:
      v7 = (void *)ConvertDXTToRaw16(a2, a5, a3, a4);
      memcpy_1(v5, v7, 2 * v6);
      j_free(v7);
      return;
    default:
      return;
  }
}


// ============================================================

// Address: 0x1d4558
// Original: _ZN9RQTextureD2Ev
// Demangled: RQTexture::~RQTexture()
void __fastcall RQTexture::~RQTexture(RQTexture *this)
{
  ;
}


// ============================================================

// Address: 0x1d455a
// Original: _ZN9RQTextureD0Ev
// Demangled: RQTexture::~RQTexture()
void __fastcall __noreturn RQTexture::~RQTexture(RQTexture *this)
{
  __debugbreak();
}


// ============================================================

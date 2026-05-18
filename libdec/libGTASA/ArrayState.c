
// Address: 0x197984
// Original: j__ZN10ArrayStateD2Ev
// Demangled: ArrayState::~ArrayState()
// attributes: thunk
void __fastcall ArrayState::~ArrayState(ArrayState *this)
{
  _ZN10ArrayStateD2Ev(this);
}


// ============================================================

// Address: 0x199bcc
// Original: j__ZN10ArrayState14SetupDrawStateEv
// Demangled: ArrayState::SetupDrawState(void)
// attributes: thunk
int __fastcall ArrayState::SetupDrawState(ArrayState *this)
{
  return _ZN10ArrayState14SetupDrawStateEv(this);
}


// ============================================================

// Address: 0x19b0c8
// Original: j__ZN10ArrayState16SetupVertexStateEPS_b
// Demangled: ArrayState::SetupVertexState(ArrayState*,bool)
// attributes: thunk
int __fastcall ArrayState::SetupVertexState(ArrayState *this, ArrayState *a2, bool a3)
{
  return _ZN10ArrayState16SetupVertexStateEPS_b(this, a2, a3);
}


// ============================================================

// Address: 0x1bcf14
// Original: _ZN10ArrayState4DrawEj
// Demangled: ArrayState::Draw(uint)
int __fastcall ArrayState::Draw(ArrayState *this, unsigned int a2)
{
  int result; // r0

  result = (unsigned __int8)sharingGPUResource;
  if ( !sharingGPUResource )
  {
    ArrayState::SetupVertexState(this, this, *((_DWORD *)this + 2) != 0);
    ArrayState::SetupDrawState(this);
    if ( *((_DWORD *)this + 2) )
      return j_RQDrawIndexed();
    else
      return j_RQDrawNonIndexed();
  }
  return result;
}


// ============================================================

// Address: 0x1bcfb4
// Original: _ZN10ArrayState13DrawWithIndexEPS_jjj
// Demangled: ArrayState::DrawWithIndex(ArrayState*,uint,uint,uint)
int __fastcall ArrayState::DrawWithIndex(
        ArrayState *this,
        ArrayState *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  int result; // r0

  result = (unsigned __int8)sharingGPUResource;
  if ( !sharingGPUResource )
  {
    ArrayState::SetupVertexState(this, a2, 1);
    ArrayState::SetupDrawState(this);
    if ( a2 )
      return j_RQDrawIndexed();
    else
      return j_RQDrawNonIndexed();
  }
  return result;
}


// ============================================================

// Address: 0x1bd11c
// Original: _ZN10ArrayStateC2ERKS_hh
// Demangled: ArrayState::ArrayState(ArrayState const&,uchar,uchar)
void __fastcall ArrayState::ArrayState(ArrayState *this, const ArrayState *a2, int a3, int a4)
{
  int32x4_t *v7; // r11
  unsigned int v8; // r6
  int16x4_t *v9; // r0
  unsigned int v10; // r1
  int16x4_t *v11; // r2
  bool v12; // cf
  unsigned int v13; // r2
  int16x4_t *v14; // r3
  int32x4_t *v15; // r5
  int32x4_t v16; // q8
  size_t v17; // r9
  void *v18; // r6
  const void *v19; // r5
  size_t v20; // r9
  void *v21; // r6
  int *v22; // r0
  int v23; // r1
  SharedGPUResource *v24; // r0
  SharedGPUResource *v25; // r0
  SharedGPUResource *v26; // r0
  _DWORD *v27; // r0

  *((_BYTE *)this + 88) = 0;
  *((_BYTE *)this + 68) = 0;
  *((_BYTE *)this + 108) = 0;
  *((_BYTE *)this + 128) = 0;
  *((_BYTE *)this + 148) = 0;
  *((_BYTE *)this + 168) = 0;
  *((_BYTE *)this + 48) = 0;
  memcpy_0(this, a2, 0xBCu);
  *((_BYTE *)this + 32) = 1;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 47) = 0;
  v7 = *(int32x4_t **)this;
  if ( *(_DWORD *)this )
  {
    if ( *((_DWORD *)this + 1) == 5125 )
    {
      v8 = *((_DWORD *)this + 2);
      v9 = (int16x4_t *)malloc(2 * v8);
      if ( !v8 )
        goto LABEL_19;
      if ( v8 <= 3 )
        goto LABEL_17;
      v10 = v8 & 0xFFFFFFFC;
      if ( (v8 & 0xFFFFFFFC) == 0 )
        goto LABEL_17;
      v11 = (int16x4_t *)((char *)v7 + 4 * v8);
      v12 = v9 >= v11;
      if ( v9 < v11 )
        v12 = v7 >= (int32x4_t *)((char *)v9 + 2 * v8);
      if ( v12 )
      {
        v13 = v8 & 0xFFFFFFFC;
        v14 = v9;
        v15 = v7;
        do
        {
          v16 = *v15++;
          v13 -= 4;
          v14->n64_u64[0] = vmovn_s32(v16).n64_u64[0];
          ++v14;
        }
        while ( v13 );
        if ( v8 == v10 )
        {
LABEL_19:
          *((_DWORD *)this + 3) = 2 * v8;
          *(_DWORD *)this = v9;
          if ( a4 )
            goto LABEL_22;
          goto LABEL_20;
        }
      }
      else
      {
LABEL_17:
        v10 = 0;
      }
      do
      {
        v9->n64_u16[v10] = v7->n128_u32[v10];
        ++v10;
      }
      while ( v10 < v8 );
      goto LABEL_19;
    }
    v17 = *((_DWORD *)this + 3);
    v18 = malloc(v17);
    memcpy_1(v18, v7, v17);
    *(_DWORD *)this = v18;
  }
  if ( a4 )
    goto LABEL_22;
LABEL_20:
  v19 = (const void *)*((_DWORD *)this + 4);
  if ( v19 )
  {
    v20 = *((_DWORD *)this + 5);
    v21 = malloc(v20);
    memcpy_1(v21, v19, v20);
    *((_DWORD *)this + 4) = v21;
  }
LABEL_22:
  if ( !a3 )
  {
    v22 = (int *)curGPUResource;
    if ( sharingGPUResource )
    {
      if ( curGPUResource )
      {
        *((_DWORD *)this + 10) = *(_DWORD *)(curGPUResource + 16);
        v23 = *v22;
        v22[4] = (int)this;
        *v22 = v23 + 1;
      }
      else
      {
        v26 = (SharedGPUResource *)operator new(0x14u);
        SharedGPUResource::SharedGPUResource(v26);
        curGPUResource = (int)v27;
        *v27 = 1;
        v27[4] = this;
      }
    }
    else
    {
      if ( curGPUResource )
      {
        SharedGPUResource::Construct((SharedGPUResource *)curGPUResource);
        curGPUResource = 0;
      }
      v24 = (SharedGPUResource *)operator new(0x14u);
      SharedGPUResource::SharedGPUResource(v24);
      *(_DWORD *)v25 = 1;
      *((_DWORD *)v25 + 4) = this;
      curGPUResource = (int)v25;
      SharedGPUResource::Construct(v25);
      curGPUResource = 0;
    }
  }
}


// ============================================================

// Address: 0x1bd29c
// Original: _ZN10ArrayStateD2Ev
// Demangled: ArrayState::~ArrayState()
void __fastcall ArrayState::~ArrayState(void **this, RQVertexState *a2)
{
  void *v3; // r0
  void *v4; // r5
  void *v5; // r0
  int v6; // r0
  RQVertexState *v7; // r0
  _DWORD *v8; // r0
  ArrayState *v9; // r2
  ArrayState **v10; // r3
  ArrayState *v11; // r1
  bool v12; // zf

  if ( *((_BYTE *)this + 32) )
  {
    if ( *this )
    {
      free(*this);
      *this = 0;
    }
    v3 = this[4];
    if ( v3 )
    {
      free(v3);
      this[4] = 0;
    }
    v4 = this[9];
    if ( v4 )
    {
      v12 = (*(_DWORD *)v4)-- == 1;
      if ( v12 )
      {
        if ( PreallocatedBuffers::ForceDeallocate(
               *((PreallocatedBuffers **)v4 + 1),
               *((RQIndexBuffer **)v4 + 3),
               *((RQVertexBuffer **)v4 + 2)) == 1 )
        {
          v5 = (void *)*((_DWORD *)v4 + 1);
          if ( v5 )
          {
            operator delete(v5);
            v6 = *((_DWORD *)v4 + 1);
          }
          else
          {
            v6 = 0;
          }
          if ( v6 == curPreallocSource )
            curPreallocSource = 0;
        }
        operator delete(v4);
      }
      this[9] = 0;
    }
    v7 = (RQVertexState *)this[47];
    if ( v7 )
      RQVertexState::Delete(v7, a2);
    if ( curGPUResource )
    {
      v8 = (_DWORD *)(curGPUResource + 16);
      v9 = 0;
      v10 = (ArrayState **)(curGPUResource + 16);
      do
      {
        v11 = v9;
        v9 = *v10;
        v12 = *v10 == 0;
        if ( *v10 )
        {
          v10 = (ArrayState **)((char *)v9 + 40);
          v12 = v9 == (ArrayState *)this;
        }
      }
      while ( !v12 );
      if ( v9 == (ArrayState *)this )
      {
        if ( v11 )
          v8 = (_DWORD *)((char *)v11 + 40);
        *v8 = this[10];
      }
    }
  }
}


// ============================================================

// Address: 0x1bd35c
// Original: _ZN10ArrayState16SetupVertexStateEPS_b
// Demangled: ArrayState::SetupVertexState(ArrayState*,bool)
int __fastcall ArrayState::SetupVertexState(ArrayState *this, ArrayState *a2, int a3, void (*a4)(void))
{
  int v7; // r0
  int v8; // r0
  RQIndexBuffer *v9; // r1
  unsigned int v10; // r2
  int v11; // r0
  RQIndexBuffer *v12; // r0
  int v13; // r1

  if ( !*((_DWORD *)this + 14) )
  {
    v7 = *((_DWORD *)this + 7);
    *((_DWORD *)this + 14) = v7;
    *((_DWORD *)this + 19) = v7;
    *((_DWORD *)this + 24) = v7;
    *((_DWORD *)this + 29) = v7;
    *((_DWORD *)this + 34) = v7;
    *((_DWORD *)this + 39) = v7;
    *((_DWORD *)this + 44) = v7;
  }
  v8 = *((_DWORD *)this + 9);
  if ( !v8 )
  {
    RQVertexBuffer::Set(
      *((RQVertexBuffer **)this + 4),
      (const void *)(*((_DWORD *)this + 6) * *((_DWORD *)this + 7)),
      0,
      a4);
    if ( !a3 )
    {
      v12 = *(RQIndexBuffer **)this;
      if ( !*(_DWORD *)this )
        goto LABEL_16;
      v13 = *((_DWORD *)this + 2);
      goto LABEL_15;
    }
LABEL_8:
    if ( !a2 || a3 != 1 )
      goto LABEL_16;
    v11 = *((_DWORD *)a2 + 9);
    if ( v11 )
      goto LABEL_11;
    v12 = *(RQIndexBuffer **)a2;
    v13 = *((_DWORD *)a2 + 2);
LABEL_15:
    RQIndexBuffer::Set(v12, (const void *)(2 * v13), v10);
    goto LABEL_16;
  }
  RQVertexBuffer::Set(*(RQVertexBuffer **)(v8 + 8), a2);
  if ( a3 )
    goto LABEL_8;
  if ( *(_DWORD *)this )
  {
    v11 = *((_DWORD *)this + 9);
LABEL_11:
    RQIndexBuffer::Set(*(RQIndexBuffer **)(v11 + 12), v9);
  }
LABEL_16:
  RQSetDescription();
  return 0;
}


// ============================================================

// Address: 0x1bd3e0
// Original: _ZN10ArrayState14SetupDrawStateEv
// Demangled: ArrayState::SetupDrawState(void)
int __fastcall ArrayState::SetupDrawState(ArrayState *this)
{
  int v1; // r1
  int v2; // r2
  EmuShader *v3; // r1
  int v4; // lr
  unsigned int v5; // r2
  unsigned int v6; // r2
  bool v7; // zf
  int v8; // r3

  if ( !*((_BYTE *)this + 68) )
  {
    v1 = curShaderStateFlags & 0xFFFBFFFF;
    curShaderStateFlags &= ~0x40000u;
LABEL_7:
    v2 = v1 & 0xFFFDFFFF;
    goto LABEL_8;
  }
  v1 = curShaderStateFlags & 0xFFFBFFFF;
  if ( *((_DWORD *)this + 18) == 4 )
    v1 = curShaderStateFlags | 0x40000;
  curShaderStateFlags = v1;
  if ( *((_DWORD *)this + 21) != 3 )
    goto LABEL_7;
  v2 = v1 | 0x20000;
LABEL_8:
  curShaderStateFlags = v2;
  v3 = (EmuShader *)*((unsigned __int8 *)this + 88);
  if ( *((_BYTE *)this + 88) && *((_DWORD *)this + 26) == 2 )
    v4 = v2 | 0x400000;
  else
    v4 = v2 & 0xFFBFFFFF;
  curShaderStateFlags = v4;
  if ( *((_BYTE *)this + 108) )
  {
    curEmulatorStateFlags |= 0x800000u;
    v5 = v4 & 0xFFDFFFFF;
  }
  else
  {
    curEmulatorStateFlags &= ~0x800000u;
    v5 = v4 | 0x200000;
  }
  v6 = v5 & 0xFFFFFE7F;
  curShaderStateFlags = v6;
  v7 = *((_BYTE *)this + 148) == 0;
  if ( *((_BYTE *)this + 148) )
    v7 = *((_BYTE *)this + 128) == 0;
  if ( !v7 )
  {
    v8 = 128;
    if ( *((_DWORD *)this + 33) == 4 )
      v8 = 256;
    curShaderStateFlags = v8 | v6;
  }
  if ( v3 )
    v3 = (EmuShader *)((char *)&stderr + 1);
  return j_EmuShader::AssignShader(v3, (bool)v3);
}


// ============================================================

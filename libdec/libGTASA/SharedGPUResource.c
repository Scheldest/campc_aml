
// Address: 0x1912d8
// Original: j__ZN17SharedGPUResource9ConstructEv
// Demangled: SharedGPUResource::Construct(void)
// attributes: thunk
int __fastcall SharedGPUResource::Construct(SharedGPUResource *this)
{
  return _ZN17SharedGPUResource9ConstructEv(this);
}


// ============================================================

// Address: 0x19544c
// Original: j__ZN17SharedGPUResourceC2Ev
// Demangled: SharedGPUResource::SharedGPUResource(void)
// attributes: thunk
void __fastcall SharedGPUResource::SharedGPUResource(SharedGPUResource *this)
{
  _ZN17SharedGPUResourceC2Ev(this);
}


// ============================================================

// Address: 0x1bcc72
// Original: _ZN17SharedGPUResource14GetCurrentSizeEv
// Demangled: SharedGPUResource::GetCurrentSize(void)
int __fastcall SharedGPUResource::GetCurrentSize(SharedGPUResource *this)
{
  _DWORD *v1; // r1
  int v2; // r2
  int v3; // r0
  int v4; // r12

  v1 = (_DWORD *)*((_DWORD *)this + 4);
  if ( !v1 )
    return 0;
  v2 = 0;
  v3 = 0;
  do
  {
    v4 = v1[5];
    v2 += v1[2];
    v1 = (_DWORD *)v1[10];
    v3 += (v4 + 15) & 0xFFFFFFF0;
  }
  while ( v1 );
  return v3 + 2 * v2;
}


// ============================================================

// Address: 0x1bcca0
// Original: _ZN17SharedGPUResource9ConstructEv
// Demangled: SharedGPUResource::Construct(void)
int __fastcall SharedGPUResource::Construct(SharedGPUResource *this)
{
  int v1; // r6
  size_t v2; // r8
  _DWORD *v3; // r0
  int v4; // r11
  int v5; // r2
  int v6; // r10
  size_t v7; // r5
  int v8; // r9
  __int64 v9; // kr00_8
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r4
  int v14; // r12
  size_t v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r0
  void *v19; // r0
  int result; // r0
  char *v21; // [sp+0h] [bp-28h]
  char *v22; // [sp+4h] [bp-24h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v2 = 0;
    v3 = (_DWORD *)*((_DWORD *)this + 4);
    v4 = 0;
    do
    {
      v5 = v3[5];
      v4 += v3[2];
      v3 = (_DWORD *)v3[10];
      v2 += (v5 + 15) & 0xFFFFFFF0;
    }
    while ( v3 );
  }
  else
  {
    v4 = 0;
    v2 = 0;
  }
  v22 = (char *)malloc(v2);
  v21 = (char *)malloc(2 * ((v4 & 1) + v4));
  if ( v1 )
  {
    v6 = v4;
    v7 = v2;
    do
    {
      v8 = *(_DWORD *)(v1 + 8);
      if ( *(_DWORD *)(v1 + 24) )
      {
        v9 = *(_QWORD *)(v1 + 16);
        v7 -= (HIDWORD(v9) + 15) & 0xFFFFFFF0;
        memcpy_1(&v22[v7], (const void *)v9, HIDWORD(v9));
        v10 = *(_DWORD *)(v1 + 80);
        v11 = *(_DWORD *)(v1 + 100);
        v12 = *(_DWORD *)(v1 + 120);
        v13 = *(_DWORD *)(v1 + 140);
        v14 = *(_DWORD *)(v1 + 160);
        *(_DWORD *)(v1 + 60) += v7;
        v15 = v10 + v7;
        v16 = *(_DWORD *)(v1 + 180);
        *(_DWORD *)(v1 + 80) = v15;
        *(_DWORD *)(v1 + 100) = v11 + v7;
        *(_DWORD *)(v1 + 120) = v12 + v7;
        *(_DWORD *)(v1 + 140) = v13 + v7;
        *(_DWORD *)(v1 + 160) = v14 + v7;
        *(_DWORD *)(v1 + 180) = v16 + v7;
      }
      v6 -= v8;
      if ( *(_DWORD *)v1 )
      {
        memcpy_1(&v21[2 * v6], *(const void **)v1, 2 * *(_DWORD *)(v1 + 8));
        *(_DWORD *)(v1 + 44) = 2 * v6;
      }
      if ( !*(_DWORD *)(v1 + 56) )
      {
        v17 = *(_DWORD *)(v1 + 28);
        *(_DWORD *)(v1 + 56) = v17;
        *(_DWORD *)(v1 + 76) = v17;
        *(_DWORD *)(v1 + 96) = v17;
        *(_DWORD *)(v1 + 116) = v17;
        *(_DWORD *)(v1 + 136) = v17;
        *(_DWORD *)(v1 + 156) = v17;
        *(_DWORD *)(v1 + 176) = v17;
      }
      v18 = *(unsigned __int8 *)(v1 + 32);
      *(_DWORD *)(v1 + 36) = this;
      if ( v18 )
      {
        if ( *(_DWORD *)v1 )
        {
          free(*(void **)v1);
          *(_DWORD *)v1 = 0;
        }
        v19 = *(void **)(v1 + 16);
        if ( v19 )
        {
          free(v19);
          *(_DWORD *)(v1 + 16) = 0;
        }
      }
      v1 = *(_DWORD *)(v1 + 40);
    }
    while ( v1 );
  }
  RQIndexBuffer::Update(*((RQIndexBuffer **)this + 3), v21, 2 * v4);
  RQVertexBuffer::Update(*((RQVertexBuffer **)this + 2), v22, v2);
  free(v22);
  free(v21);
  result = 0;
  *((_DWORD *)this + 4) = 0;
  return result;
}


// ============================================================

// Address: 0x1bd4f0
// Original: _ZN17SharedGPUResourceC2Ev
// Demangled: SharedGPUResource::SharedGPUResource(void)
void __fastcall SharedGPUResource::SharedGPUResource(SharedGPUResource *this)
{
  _DWORD *v2; // r5
  int i; // r6
  _DWORD *v4; // r4
  unsigned int v5; // r2
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int v10; // r1
  bool v11; // zf

  v2 = (_DWORD *)curPreallocSource;
  if ( !curPreallocSource )
  {
    v2 = (_DWORD *)operator new(0x8Cu);
    for ( i = 0; i != 16; ++i )
    {
      v2[i] = RQIndexBuffer::Create();
      v4 = &v2[i];
      v4[16] = RQVertexBuffer::Create(0, 0, v5);
    }
    v2[32] = 0;
    v2[33] = 0;
    v2[34] = 0;
    curPreallocSource = (int)v2;
  }
  *((_DWORD *)this + 1) = v2;
  v6 = v2[32];
  v2[32] = v6 + 1;
  v7 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 2) = v2[v6 + 16];
  v8 = *(_DWORD *)(v7 + 132);
  *(_DWORD *)(v7 + 132) = v8 + 1;
  v9 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 3) = *(_DWORD *)(v7 + 4 * v8);
  v10 = *(_DWORD *)(v9 + 128);
  v11 = v10 == 16;
  if ( v10 != 16 )
    v11 = *(_DWORD *)(v9 + 132) == 16;
  if ( v11 )
    curPreallocSource = 0;
}


// ============================================================

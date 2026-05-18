
// Address: 0x19fc6c
// Original: j__ZN19PreallocatedBuffers15ForceDeallocateEP13RQIndexBufferP14RQVertexBuffer
// Demangled: PreallocatedBuffers::ForceDeallocate(RQIndexBuffer *,RQVertexBuffer *)
// attributes: thunk
int __fastcall PreallocatedBuffers::ForceDeallocate(PreallocatedBuffers *this, RQIndexBuffer *a2, RQVertexBuffer *a3)
{
  return _ZN19PreallocatedBuffers15ForceDeallocateEP13RQIndexBufferP14RQVertexBuffer(this, a2, a3);
}


// ============================================================

// Address: 0x1bd5a4
// Original: _ZN19PreallocatedBuffers15ForceDeallocateEP13RQIndexBufferP14RQVertexBuffer
// Demangled: PreallocatedBuffers::ForceDeallocate(RQIndexBuffer *,RQVertexBuffer *)
int __fastcall PreallocatedBuffers::ForceDeallocate(PreallocatedBuffers *this, RQIndexBuffer *a2, RQVertexBuffer *a3)
{
  int v5; // r1
  RQIndexBuffer *v7; // r0
  RQIndexBuffer *v8; // r1
  int i; // r6
  RQIndexBuffer *v10; // r0
  char *v11; // r5
  RQVertexBuffer *v12; // r0
  int j; // r5
  char *v15; // r6

  v5 = *((_DWORD *)this + 34);
  v7 = (RQIndexBuffer *)*((_DWORD *)this + 32);
  v8 = (RQIndexBuffer *)(v5 + 1);
  *((_DWORD *)this + 34) = v8;
  if ( v8 == v7 )
  {
    for ( i = 0; i != 16; ++i )
    {
      v10 = (RQIndexBuffer *)*((_DWORD *)this + i);
      if ( v10 )
      {
        RQIndexBuffer::Delete(v10, v8);
        *((_DWORD *)this + i) = 0;
      }
      v11 = (char *)this + 4 * i;
      v12 = (RQVertexBuffer *)*((_DWORD *)v11 + 16);
      if ( v12 )
      {
        RQVertexBuffer::Delete(v12, v8);
        *((_DWORD *)v11 + 16) = 0;
      }
    }
    return 1;
  }
  else
  {
    for ( j = 0; j != 16; ++j )
    {
      if ( *((RQIndexBuffer **)this + j) == a2 )
      {
        RQIndexBuffer::Delete(a2, v8);
        *((_DWORD *)this + j) = 0;
      }
      v15 = (char *)this + 4 * j;
      if ( *((RQVertexBuffer **)v15 + 16) == a3 )
      {
        RQVertexBuffer::Delete(a3, v8);
        *((_DWORD *)v15 + 16) = 0;
      }
    }
    return 0;
  }
}


// ============================================================


// Address: 0x194e90
// Original: j__ZN12RenderBuffer19RenderStuffInBufferEv
// Demangled: RenderBuffer::RenderStuffInBuffer(void)
// attributes: thunk
int __fastcall RenderBuffer::RenderStuffInBuffer(RenderBuffer *this)
{
  return _ZN12RenderBuffer19RenderStuffInBufferEv(this);
}


// ============================================================

// Address: 0x5bad94
// Original: _ZN12RenderBuffer17ClearRenderBufferEv
// Demangled: RenderBuffer::ClearRenderBuffer(void)
int *__fastcall RenderBuffer::ClearRenderBuffer(RenderBuffer *this)
{
  int *result; // r0

  result = &TempBufferVerticesStored;
  TempBufferVerticesStored = 0;
  TempBufferIndicesStored = 0;
  return result;
}


// ============================================================

// Address: 0x5bb258
// Original: _ZN12RenderBuffer19RenderStuffInBufferEv
// Demangled: RenderBuffer::RenderStuffInBuffer(void)
int *__fastcall RenderBuffer::RenderStuffInBuffer(RenderBuffer *this)
{
  int *result; // r0

  if ( TempBufferVerticesStored )
  {
    if ( RwIm3DTransform() )
      goto LABEL_5;
  }
  else if ( RwIm3DTransform() )
  {
LABEL_5:
    RwIm3DRenderIndexedPrimitive();
    RwIm3DEnd();
  }
  result = &TempBufferVerticesStored;
  TempBufferVerticesStored = 0;
  TempBufferIndicesStored = 0;
  return result;
}


// ============================================================

// Address: 0x5bba30
// Original: _ZN12RenderBuffer12StartStoringEiiPPtPP18RxObjSpace3DVertex
// Demangled: RenderBuffer::StartStoring(int,int,ushort **,RxObjSpace3DVertex **)
int *__fastcall RenderBuffer::StartStoring(int a1, int a2, _DWORD *a3, int **a4)
{
  RenderBuffer *v8; // r0
  int *result; // r0

  v8 = (RenderBuffer *)(TempBufferIndicesStored + a1);
  if ( (int)v8 >= 4096 )
    RenderBuffer::RenderStuffInBuffer(v8);
  if ( TempBufferVerticesStored + a2 >= 2048 )
    RenderBuffer::RenderStuffInBuffer((RenderBuffer *)(TempBufferVerticesStored + a2));
  *a3 = (char *)TempBufferRenderIndexList + 2 * TempBufferIndicesStored;
  result = &TempVertexBuffer[9 * TempBufferVerticesStored];
  *a4 = result;
  RenderBuffer::VerticesToBeStored = a2;
  RenderBuffer::IndicesToBeStored = a1;
  return result;
}


// ============================================================

// Address: 0x5bbad4
// Original: _ZN12RenderBuffer11StopStoringEv
// Demangled: RenderBuffer::StopStoring(void)
int __fastcall RenderBuffer::StopStoring(RenderBuffer *this)
{
  int v1; // r0
  int v2; // r1
  int v3; // r2
  int v4; // lr
  unsigned int v5; // r12
  int v6; // r2
  uint32x4_t v7; // q8
  uint16x4_t *v8; // r3
  unsigned int v9; // r4
  unsigned __int64 v10; // d21
  int result; // r0

  v1 = TempBufferVerticesStored;
  v2 = RenderBuffer::IndicesToBeStored + TempBufferIndicesStored;
  if ( RenderBuffer::IndicesToBeStored >= 1 )
  {
    v3 = TempBufferIndicesStored + 1;
    if ( v2 > TempBufferIndicesStored + 1 )
      v3 = RenderBuffer::IndicesToBeStored + TempBufferIndicesStored;
    v4 = v3 - TempBufferIndicesStored;
    if ( (unsigned int)(v3 - TempBufferIndicesStored) > 7 && (v5 = v4 & 0xFFFFFFF8, (v4 & 0xFFFFFFF8) != 0) )
    {
      v6 = TempBufferIndicesStored + v5;
      v7 = vdupq_n_s32(TempBufferVerticesStored);
      v8 = (uint16x4_t *)((char *)TempBufferRenderIndexList + 2 * TempBufferIndicesStored);
      v9 = v4 & 0xFFFFFFF8;
      do
      {
        v9 -= 8;
        v10 = vmovn_s32(vaddw_u16(v7, v8[1])).n64_u64[0];
        v8->n64_u64[0] = vmovn_s32(vaddw_u16(v7, (uint16x4_t)v8->n64_u64[0])).n64_u64[0];
        v8[1].n64_u64[0] = v10;
        v8 += 2;
      }
      while ( v9 );
      if ( v4 == v5 )
        goto LABEL_12;
    }
    else
    {
      v6 = TempBufferIndicesStored;
    }
    do
      *((_WORD *)TempBufferRenderIndexList + v6++) += v1;
    while ( v6 < v2 );
  }
LABEL_12:
  TempBufferIndicesStored = v2;
  result = v1 + RenderBuffer::VerticesToBeStored;
  TempBufferVerticesStored = result;
  return result;
}


// ============================================================

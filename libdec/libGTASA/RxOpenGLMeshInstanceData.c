
// Address: 0x1a17ec
// Original: j__ZN24RxOpenGLMeshInstanceData10DrawStoredEv
// Demangled: RxOpenGLMeshInstanceData::DrawStored(void)
// attributes: thunk
int __fastcall RxOpenGLMeshInstanceData::DrawStored(RxOpenGLMeshInstanceData *this)
{
  return _ZN24RxOpenGLMeshInstanceData10DrawStoredEv(this);
}


// ============================================================

// Address: 0x222c00
// Original: _ZN24RxOpenGLMeshInstanceData10DrawStoredEv
// Demangled: RxOpenGLMeshInstanceData::DrawStored(void)
unsigned int *__fastcall RxOpenGLMeshInstanceData::DrawStored(unsigned int *this)
{
  bool v1; // zf
  ArrayState *v2; // r1
  ArrayState *v3; // r12
  unsigned int v4; // r2

  v1 = skipBlendRender == 0;
  if ( skipBlendRender )
    v1 = emu_InternalBlendEnabled == 0;
  if ( v1 && (!skipNonblendRender || emu_InternalBlendEnabled) )
  {
    v2 = (ArrayState *)this[7];
    if ( v2 )
    {
      v3 = (ArrayState *)this[8];
      v4 = *this;
      if ( v3 )
        return (unsigned int *)emu_ArraysDrawStoredSeparate(v3, v2, v4, this[9], this[10]);
      else
        return (unsigned int *)j_emu_ArraysDrawStored(this[7], v4);
    }
    else
    {
      return (unsigned int *)j_emu_ArraysDrawStored(this[5], *this);
    }
  }
  return this;
}


// ============================================================

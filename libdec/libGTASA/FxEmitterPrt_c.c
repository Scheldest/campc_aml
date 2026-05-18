
// Address: 0x18f7c0
// Original: j__ZN14FxEmitterPrt_cnaEj
// Demangled: FxEmitterPrt_c::operator new[](uint)
// attributes: thunk
int __fastcall FxEmitterPrt_c::operator new[](FxEmitterPrt_c *this, unsigned int a2)
{
  return _ZN14FxEmitterPrt_cnaEj(this, a2);
}


// ============================================================

// Address: 0x366cac
// Original: _ZN14FxEmitterPrt_cnaEj
// Demangled: FxEmitterPrt_c::operator new[](uint)
int __fastcall FxEmitterPrt_c::operator new[](FxEmitterPrt_c *this, unsigned int a2)
{
  return j_FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, (int)this, 4);
}


// ============================================================

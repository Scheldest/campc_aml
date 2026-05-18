
// Address: 0x19d7f4
// Original: j__ZN10FxSphere_cC2Ev
// Demangled: FxSphere_c::FxSphere_c(void)
// attributes: thunk
void __fastcall FxSphere_c::FxSphere_c(FxSphere_c *this)
{
  _ZN10FxSphere_cC2Ev(this);
}


// ============================================================

// Address: 0x36dd20
// Original: _ZN10FxSphere_cC2Ev
// Demangled: FxSphere_c::FxSphere_c(void)
void __fastcall FxSphere_c::FxSphere_c(FxSphere_c *this)
{
  *((_DWORD *)this + 4) = 0;
}


// ============================================================

// Address: 0x36dd28
// Original: _ZN10FxSphere_cnwEji
// Demangled: FxSphere_c::operator new(uint,int)
void *__fastcall FxSphere_c::operator new(size_t byte_count, unsigned int a2, int a3)
{
  if ( a2 )
    return sub_19CF58(byte_count, a2);
  else
    return (void *)j_FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, byte_count, 4);
}


// ============================================================

// Address: 0x36dd48
// Original: _ZN10FxSphere_cdlEPv
// Demangled: FxSphere_c::operator delete(void *)
// attributes: thunk
void __fastcall FxSphere_c::operator delete(CMemoryMgr *this, void *a2)
{
  j_CMemoryMgr::Free(this, a2);
}


// ============================================================

// Address: 0x36dd4c
// Original: _ZN10FxSphere_c11IsCollisionEPS_
// Demangled: FxSphere_c::IsCollision(FxSphere_c*)
bool __fastcall FxSphere_c::IsCollision(FxSphere_c *this, FxSphere_c *a2)
{
  float32x2_t v2; // d16
  float v3; // s2
  unsigned __int64 v4; // d2

  v2.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)a2 + 4), *(float32x2_t *)((char *)this + 4)).n64_u64[0];
  v3 = *((float *)this + 3) + *((float *)a2 + 3);
  v4 = vmul_f32(v2, v2).n64_u64[0];
  return (float)((float)((float)((float)(*(float *)a2 - *(float *)this) * (float)(*(float *)a2 - *(float *)this))
                       + *(float *)&v4)
               + *((float *)&v4 + 1)) < (float)(v3 * v3);
}


// ============================================================

// Address: 0x36dd94
// Original: _ZN10FxSphere_c14GetDistToPlaneEP9FxPlane_c
// Demangled: FxSphere_c::GetDistToPlane(FxPlane_c *)
float __fastcall FxSphere_c::GetDistToPlane(float *a1, float *a2)
{
  return (float)((float)((float)(*a2 * *a1) + (float)(a2[1] * a1[1])) + (float)(a2[2] * a1[2])) - a2[3];
}


// ============================================================

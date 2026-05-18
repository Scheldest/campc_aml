
// Address: 0x18a290
// Original: j__ZN14FxMemoryPool_c6GetMemEii
// Demangled: FxMemoryPool_c::GetMem(int,int)
// attributes: thunk
int __fastcall FxMemoryPool_c::GetMem(FxMemoryPool_c *this, int a2, int a3)
{
  return _ZN14FxMemoryPool_c6GetMemEii(this, a2, a3);
}


// ============================================================

// Address: 0x18a390
// Original: j__ZN14FxMemoryPool_c5ResetEv
// Demangled: FxMemoryPool_c::Reset(void)
// attributes: thunk
int __fastcall FxMemoryPool_c::Reset(FxMemoryPool_c *this)
{
  return _ZN14FxMemoryPool_c5ResetEv(this);
}


// ============================================================

// Address: 0x18bb5c
// Original: j__ZN14FxMemoryPool_c4InitEv
// Demangled: FxMemoryPool_c::Init(void)
// attributes: thunk
int __fastcall FxMemoryPool_c::Init(FxMemoryPool_c *this)
{
  return _ZN14FxMemoryPool_c4InitEv(this);
}


// ============================================================

// Address: 0x19009c
// Original: j__ZN14FxMemoryPool_c8OptimiseEv
// Demangled: FxMemoryPool_c::Optimise(void)
// attributes: thunk
int __fastcall FxMemoryPool_c::Optimise(FxMemoryPool_c *this)
{
  return _ZN14FxMemoryPool_c8OptimiseEv(this);
}


// ============================================================

// Address: 0x19621c
// Original: j__ZN14FxMemoryPool_c4ExitEv
// Demangled: FxMemoryPool_c::Exit(void)
// attributes: thunk
int __fastcall FxMemoryPool_c::Exit(FxMemoryPool_c *this)
{
  return _ZN14FxMemoryPool_c4ExitEv(this);
}


// ============================================================

// Address: 0x1970e0
// Original: j__ZN14FxMemoryPool_cC2Ev
// Demangled: FxMemoryPool_c::FxMemoryPool_c(void)
// attributes: thunk
void __fastcall FxMemoryPool_c::FxMemoryPool_c(FxMemoryPool_c *this)
{
  _ZN14FxMemoryPool_cC2Ev(this);
}


// ============================================================

// Address: 0x19ff20
// Original: j__ZN14FxMemoryPool_cD2Ev
// Demangled: FxMemoryPool_c::~FxMemoryPool_c()
// attributes: thunk
void __fastcall FxMemoryPool_c::~FxMemoryPool_c(FxMemoryPool_c *this)
{
  _ZN14FxMemoryPool_cD2Ev(this);
}


// ============================================================

// Address: 0x36daa4
// Original: _ZN14FxMemoryPool_cC2Ev
// Demangled: FxMemoryPool_c::FxMemoryPool_c(void)
void __fastcall FxMemoryPool_c::FxMemoryPool_c(FxMemoryPool_c *this)
{
  ;
}


// ============================================================

// Address: 0x36daa6
// Original: _ZN14FxMemoryPool_cD2Ev
// Demangled: FxMemoryPool_c::~FxMemoryPool_c()
void __fastcall FxMemoryPool_c::~FxMemoryPool_c(FxMemoryPool_c *this)
{
  ;
}


// ============================================================

// Address: 0x36daa8
// Original: _ZN14FxMemoryPool_c4InitEv
// Demangled: FxMemoryPool_c::Init(void)
int __fastcall FxMemoryPool_c::Init(FxMemoryPool_c *this, unsigned int a2)
{
  int v3; // r4
  void *v4; // r0

  v3 = 0;
  *((_DWORD *)this + 1) = 0x80000;
  *((_DWORD *)this + 2) = 0;
  v4 = CMemoryMgr::Malloc(0x80000u, a2);
  *(_DWORD *)this = v4;
  if ( v4 )
  {
    memset(v4, 0, *((_DWORD *)this + 1));
    return 1;
  }
  return v3;
}


// ============================================================

// Address: 0x36dad2
// Original: _ZN14FxMemoryPool_c4ExitEv
// Demangled: FxMemoryPool_c::Exit(void)
CMemoryMgr *__fastcall FxMemoryPool_c::Exit(CMemoryMgr **this, void *a2)
{
  CMemoryMgr *result; // r0

  result = *this;
  if ( result )
    return (CMemoryMgr *)j_CMemoryMgr::Free(result, a2);
  return result;
}


// ============================================================

// Address: 0x36dade
// Original: _ZN14FxMemoryPool_c5ResetEv
// Demangled: FxMemoryPool_c::Reset(void)
int __fastcall FxMemoryPool_c::Reset(int this)
{
  *(_DWORD *)(this + 8) = 0;
  return this;
}


// ============================================================

// Address: 0x36dae4
// Original: _ZN14FxMemoryPool_c6GetMemEii
// Demangled: FxMemoryPool_c::GetMem(int,int)
int __fastcall FxMemoryPool_c::GetMem(FxMemoryPool_c *this, int a2, unsigned int a3)
{
  unsigned int v4; // r6
  int v5; // r0

  v4 = *((_DWORD *)this + 2);
  if ( (int)(v4 % a3) >= 1 )
  {
    v4 = v4 + a3 - v4 % a3;
    *((_DWORD *)this + 2) = v4;
  }
  v5 = *(_DWORD *)this;
  *((_DWORD *)this + 2) = v4 + a2;
  return v5 + v4;
}


// ============================================================

// Address: 0x36db16
// Original: _ZN14FxMemoryPool_c8OptimiseEv
// Demangled: FxMemoryPool_c::Optimise(void)
void __fastcall FxMemoryPool_c::Optimise(FxMemoryPool_c *this)
{
  ;
}


// ============================================================

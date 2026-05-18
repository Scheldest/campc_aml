
// Address: 0x18c274
// Original: j__ZN8FxPrim_c6EnableEh
// Demangled: FxPrim_c::Enable(uchar)
// attributes: thunk
int __fastcall FxPrim_c::Enable(FxPrim_c *this, unsigned __int8 a2)
{
  return _ZN8FxPrim_c6EnableEh(this, a2);
}


// ============================================================

// Address: 0x18f974
// Original: j__ZN8FxPrim_cD2Ev
// Demangled: FxPrim_c::~FxPrim_c()
// attributes: thunk
void __fastcall FxPrim_c::~FxPrim_c(FxPrim_c *this)
{
  _ZN8FxPrim_cD2Ev(this);
}


// ============================================================

// Address: 0x197b14
// Original: j__ZN8FxPrim_cC2Ev
// Demangled: FxPrim_c::FxPrim_c(void)
// attributes: thunk
void __fastcall FxPrim_c::FxPrim_c(FxPrim_c *this)
{
  _ZN8FxPrim_cC2Ev(this);
}


// ============================================================

// Address: 0x36dcd8
// Original: _ZN8FxPrim_cC2Ev
// Demangled: FxPrim_c::FxPrim_c(void)
void __fastcall FxPrim_c::FxPrim_c(FxPrim_c *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 12) = 1;
  *(_DWORD *)this = &off_665D40;
}


// ============================================================

// Address: 0x36dcf4
// Original: _ZN8FxPrim_cD2Ev
// Demangled: FxPrim_c::~FxPrim_c()
void __fastcall FxPrim_c::~FxPrim_c(FxPrim_c *this)
{
  *(_DWORD *)this = &off_665D40;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
}


// ============================================================

// Address: 0x36dd0c
// Original: _ZN8FxPrim_cD0Ev
// Demangled: FxPrim_c::~FxPrim_c()
void __fastcall __noreturn FxPrim_c::~FxPrim_c(FxPrim_c *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x36dd0e
// Original: _ZN8FxPrim_c6EnableEh
// Demangled: FxPrim_c::Enable(uchar)
int __fastcall FxPrim_c::Enable(int this, unsigned __int8 a2)
{
  *(_BYTE *)(this + 12) = a2;
  return this;
}


// ============================================================

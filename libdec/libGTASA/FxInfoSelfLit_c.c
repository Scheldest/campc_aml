
// Address: 0x36b928
// Original: _ZN15FxInfoSelfLit_cC2Ev
// Demangled: FxInfoSelfLit_c::FxInfoSelfLit_c(void)
void __fastcall FxInfoSelfLit_c::FxInfoSelfLit_c(FxInfoSelfLit_c *this)
{
  *(_DWORD *)this = &off_665C6C;
  FxInterpInfoU255_c::FxInterpInfoU255_c((FxInfoSelfLit_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 2) = 16896;
}


// ============================================================

// Address: 0x36b954
// Original: _ZN15FxInfoSelfLit_c4LoadEji
// Demangled: FxInfoSelfLit_c::Load(uint,int)
void __fastcall FxInfoSelfLit_c::Load(FxInfoSelfLit_c *this, unsigned int a2, int a3)
{
  ;
}


// ============================================================

// Address: 0x36b956
// Original: _ZN15FxInfoSelfLit_c8GetValueEffffhPv
// Demangled: FxInfoSelfLit_c::GetValue(float,float,float,float,uchar,void *)
_BYTE *__fastcall FxInfoSelfLit_c::GetValue(
        FxInfoSelfLit_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        _BYTE *a7)
{
  _BYTE *result; // r0

  result = a7;
  a7[55] = 1;
  return result;
}


// ============================================================

// Address: 0x36c360
// Original: _ZN15FxInfoSelfLit_cD2Ev
// Demangled: FxInfoSelfLit_c::~FxInfoSelfLit_c()
void __fastcall FxInfoSelfLit_c::~FxInfoSelfLit_c(FxInfoSelfLit_c *this)
{
  *(_DWORD *)this = &off_665C6C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoSelfLit_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36c384
// Original: _ZN15FxInfoSelfLit_cD0Ev
// Demangled: FxInfoSelfLit_c::~FxInfoSelfLit_c()
void __fastcall FxInfoSelfLit_c::~FxInfoSelfLit_c(FxInfoSelfLit_c *this)
{
  *(_DWORD *)this = &off_665C6C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoSelfLit_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

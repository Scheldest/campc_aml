
// Address: 0x36b36c
// Original: _ZN18FxInfoUnderwater_cC2Ev
// Demangled: FxInfoUnderwater_c::FxInfoUnderwater_c(void)
void __fastcall FxInfoUnderwater_c::FxInfoUnderwater_c(FxInfoUnderwater_c *this)
{
  *(_DWORD *)this = &off_665B7C;
  FxInterpInfoU255_c::FxInterpInfoU255_c((FxInfoUnderwater_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 2) = 9216;
}


// ============================================================

// Address: 0x36b398
// Original: _ZN18FxInfoUnderwater_c4LoadEji
// Demangled: FxInfoUnderwater_c::Load(uint,int)
int __fastcall FxInfoUnderwater_c::Load(FxInfoUnderwater_c *this, unsigned int a2, int a3)
{
  return sub_190B40((FxInfoUnderwater_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b39e
// Original: _ZN18FxInfoUnderwater_c8GetValueEffffhPv
// Demangled: FxInfoUnderwater_c::GetValue(float,float,float,float,uchar,void *)
_BYTE *__fastcall FxInfoUnderwater_c::GetValue(
        FxInfoUnderwater_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        _BYTE *a7)
{
  _BYTE *result; // r0

  result = a7;
  a7[41] = 1;
  return result;
}


// ============================================================

// Address: 0x36c068
// Original: _ZN18FxInfoUnderwater_cD2Ev
// Demangled: FxInfoUnderwater_c::~FxInfoUnderwater_c()
void __fastcall FxInfoUnderwater_c::~FxInfoUnderwater_c(FxInfoUnderwater_c *this)
{
  *(_DWORD *)this = &off_665B7C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoUnderwater_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36c08c
// Original: _ZN18FxInfoUnderwater_cD0Ev
// Demangled: FxInfoUnderwater_c::~FxInfoUnderwater_c()
void __fastcall FxInfoUnderwater_c::~FxInfoUnderwater_c(FxInfoUnderwater_c *this)
{
  *(_DWORD *)this = &off_665B7C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoUnderwater_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

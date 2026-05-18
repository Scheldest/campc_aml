
// Address: 0x36b330
// Original: _ZN13FxInfoFloat_cC2Ev
// Demangled: FxInfoFloat_c::FxInfoFloat_c(void)
void __fastcall FxInfoFloat_c::FxInfoFloat_c(FxInfoFloat_c *this)
{
  *(_DWORD *)this = &off_665B64;
  FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInfoFloat_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 2) = 8704;
}


// ============================================================

// Address: 0x36b35c
// Original: _ZN13FxInfoFloat_c4LoadEji
// Demangled: FxInfoFloat_c::Load(uint,int)
int __fastcall FxInfoFloat_c::Load(FxInfoFloat_c *this, unsigned int a2, int a3)
{
  return j_FxInterpInfoFloat_c::Load((FxInfoFloat_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b362
// Original: _ZN13FxInfoFloat_c8GetValueEffffhPv
// Demangled: FxInfoFloat_c::GetValue(float,float,float,float,uchar,void *)
_BYTE *__fastcall FxInfoFloat_c::GetValue(
        FxInfoFloat_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        _BYTE *a7)
{
  _BYTE *result; // r0

  result = a7;
  a7[40] = 1;
  return result;
}


// ============================================================

// Address: 0x36c01c
// Original: _ZN13FxInfoFloat_cD2Ev
// Demangled: FxInfoFloat_c::~FxInfoFloat_c()
void __fastcall FxInfoFloat_c::~FxInfoFloat_c(FxInfoFloat_c *this)
{
  *(_DWORD *)this = &off_665B64;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoFloat_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36c040
// Original: _ZN13FxInfoFloat_cD0Ev
// Demangled: FxInfoFloat_c::~FxInfoFloat_c()
void __fastcall FxInfoFloat_c::~FxInfoFloat_c(FxInfoFloat_c *this)
{
  *(_DWORD *)this = &off_665B64;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoFloat_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

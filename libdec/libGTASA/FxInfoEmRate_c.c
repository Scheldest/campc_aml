
// Address: 0x36a360
// Original: _ZN14FxInfoEmRate_cC2Ev
// Demangled: FxInfoEmRate_c::FxInfoEmRate_c(void)
void __fastcall FxInfoEmRate_c::FxInfoEmRate_c(FxInfoEmRate_c *this)
{
  *(_DWORD *)this = &off_6659B4;
  FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInfoEmRate_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 1;
  *((_WORD *)this + 2) = 4097;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 4, 4);
}


// ============================================================

// Address: 0x36a3a0
// Original: _ZN14FxInfoEmRate_c4LoadEji
// Demangled: FxInfoEmRate_c::Load(uint,int)
int __fastcall FxInfoEmRate_c::Load(FxInfoEmRate_c *this, unsigned int a2, int a3)
{
  return j_FxInterpInfoFloat_c::Load((FxInfoEmRate_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36a3a6
// Original: _ZN14FxInfoEmRate_c8GetValueEffffhPv
// Demangled: FxInfoEmRate_c::GetValue(float,float,float,float,uchar,void *)
float __fastcall FxInfoEmRate_c::GetValue(
        FxInfoEmRate_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float *a7)
{
  FxInterpInfoFloat_c *v7; // r5
  float result; // r0
  float v11[24]; // [sp+0h] [bp-60h] BYREF

  v7 = (FxInfoEmRate_c *)((char *)this + 8);
  FxInterpInfoFloat_c::GetVal((FxInfoEmRate_c *)((char *)this + 8), v11, a2);
  result = a6;
  if ( a6 == 0.0 )
  {
    if ( (float)(a2 - a4) >= 0.0 )
    {
      result = COERCE_FLOAT(FxInterpInfoFloat_c::GetVal(v7, 0, a2, a4));
      *a7 = result;
    }
    else
    {
      *(_DWORD *)a7 = FxInterpInfoFloat_c::GetVal(v7, 0, a5, -(float)(a2 - a4));
      result = COERCE_FLOAT(FxInterpInfoFloat_c::GetVal(v7, 0, a2, (float)(a2 - a4) + a4));
      *a7 = result + *a7;
    }
  }
  else
  {
    *a7 = v11[0] * a4;
  }
  return result;
}


// ============================================================

// Address: 0x36bac4
// Original: _ZN14FxInfoEmRate_cD2Ev
// Demangled: FxInfoEmRate_c::~FxInfoEmRate_c()
void __fastcall FxInfoEmRate_c::~FxInfoEmRate_c(FxInfoEmRate_c *this)
{
  *(_DWORD *)this = &off_6659B4;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmRate_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bae8
// Original: _ZN14FxInfoEmRate_cD0Ev
// Demangled: FxInfoEmRate_c::~FxInfoEmRate_c()
void __fastcall FxInfoEmRate_c::~FxInfoEmRate_c(FxInfoEmRate_c *this)
{
  *(_DWORD *)this = &off_6659B4;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmRate_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

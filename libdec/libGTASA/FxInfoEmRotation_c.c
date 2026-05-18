
// Address: 0x36a724
// Original: _ZN18FxInfoEmRotation_cC2Ev
// Demangled: FxInfoEmRotation_c::FxInfoEmRotation_c(void)
void __fastcall FxInfoEmRotation_c::FxInfoEmRotation_c(FxInfoEmRotation_c *this)
{
  *(_DWORD *)this = &off_665A74;
  FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInfoEmRotation_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 2;
  *((_WORD *)this + 2) = 4608;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 8, 4);
}


// ============================================================

// Address: 0x36a764
// Original: _ZN18FxInfoEmRotation_c4LoadEji
// Demangled: FxInfoEmRotation_c::Load(uint,int)
int __fastcall FxInfoEmRotation_c::Load(FxInfoEmRotation_c *this, unsigned int a2, int a3)
{
  return j_FxInterpInfoFloat_c::Load((FxInfoEmRotation_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36a76a
// Original: _ZN18FxInfoEmRotation_c8GetValueEffffhPv
// Demangled: FxInfoEmRotation_c::GetValue(float,float,float,float,uchar,void *)
float *__fastcall FxInfoEmRotation_c::GetValue(
        FxInfoEmRotation_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        float *a7)
{
  float *result; // r0
  float v8; // r2
  float v9[18]; // [sp+0h] [bp-48h] BYREF

  FxInterpInfoFloat_c::GetVal((FxInfoEmRotation_c *)((char *)this + 8), v9, a2);
  result = a7;
  v8 = v9[1];
  a7[20] = v9[0];
  a7[21] = v8;
  return result;
}


// ============================================================

// Address: 0x36bd24
// Original: _ZN18FxInfoEmRotation_cD2Ev
// Demangled: FxInfoEmRotation_c::~FxInfoEmRotation_c()
void __fastcall FxInfoEmRotation_c::~FxInfoEmRotation_c(FxInfoEmRotation_c *this)
{
  *(_DWORD *)this = &off_665A74;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmRotation_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bd48
// Original: _ZN18FxInfoEmRotation_cD0Ev
// Demangled: FxInfoEmRotation_c::~FxInfoEmRotation_c()
void __fastcall FxInfoEmRotation_c::~FxInfoEmRotation_c(FxInfoEmRotation_c *this)
{
  *(_DWORD *)this = &off_665A74;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmRotation_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

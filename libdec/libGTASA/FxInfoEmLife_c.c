
// Address: 0x36a5f4
// Original: _ZN14FxInfoEmLife_cC2Ev
// Demangled: FxInfoEmLife_c::FxInfoEmLife_c(void)
void __fastcall FxInfoEmLife_c::FxInfoEmLife_c(FxInfoEmLife_c *this)
{
  *(_DWORD *)this = &off_665A2C;
  FxInterpInfoU255_c::FxInterpInfoU255_c((FxInfoEmLife_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 2;
  *((_WORD *)this + 2) = 4160;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 8, 4);
}


// ============================================================

// Address: 0x36a634
// Original: _ZN14FxInfoEmLife_c4LoadEji
// Demangled: FxInfoEmLife_c::Load(uint,int)
int __fastcall FxInfoEmLife_c::Load(FxInfoEmLife_c *this, unsigned int a2, int a3)
{
  return sub_190B40((FxInfoEmLife_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36a63a
// Original: _ZN14FxInfoEmLife_c8GetValueEffffhPv
// Demangled: FxInfoEmLife_c::GetValue(float,float,float,float,uchar,void *)
float *__fastcall FxInfoEmLife_c::GetValue(
        FxInfoEmLife_c *this,
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

  FxInterpInfoU255_c::GetVal((FxInfoEmLife_c *)((char *)this + 8), v9, a2);
  result = a7;
  v8 = v9[1];
  a7[15] = v9[0];
  a7[16] = v8;
  return result;
}


// ============================================================

// Address: 0x36bc40
// Original: _ZN14FxInfoEmLife_cD2Ev
// Demangled: FxInfoEmLife_c::~FxInfoEmLife_c()
void __fastcall FxInfoEmLife_c::~FxInfoEmLife_c(FxInfoEmLife_c *this)
{
  *(_DWORD *)this = &off_665A2C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmLife_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bc64
// Original: _ZN14FxInfoEmLife_cD0Ev
// Demangled: FxInfoEmLife_c::~FxInfoEmLife_c()
void __fastcall FxInfoEmLife_c::~FxInfoEmLife_c(FxInfoEmLife_c *this)
{
  *(_DWORD *)this = &off_665A2C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmLife_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

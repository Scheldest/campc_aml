
// Address: 0x36a590
// Original: _ZN15FxInfoEmAngle_cC2Ev
// Demangled: FxInfoEmAngle_c::FxInfoEmAngle_c(void)
void __fastcall FxInfoEmAngle_c::FxInfoEmAngle_c(FxInfoEmAngle_c *this)
{
  *(_DWORD *)this = &off_665A14;
  FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInfoEmAngle_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 2;
  *((_WORD *)this + 2) = 4128;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 8, 4);
}


// ============================================================

// Address: 0x36a5d0
// Original: _ZN15FxInfoEmAngle_c4LoadEji
// Demangled: FxInfoEmAngle_c::Load(uint,int)
int __fastcall FxInfoEmAngle_c::Load(FxInfoEmAngle_c *this, unsigned int a2, int a3)
{
  return j_FxInterpInfoFloat_c::Load((FxInfoEmAngle_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36a5d6
// Original: _ZN15FxInfoEmAngle_c8GetValueEffffhPv
// Demangled: FxInfoEmAngle_c::GetValue(float,float,float,float,uchar,void *)
float *__fastcall FxInfoEmAngle_c::GetValue(
        FxInfoEmAngle_c *this,
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

  FxInterpInfoFloat_c::GetVal((FxInfoEmAngle_c *)((char *)this + 8), v9, a2);
  result = a7;
  v8 = v9[1];
  a7[13] = v9[0];
  a7[14] = v8;
  return result;
}


// ============================================================

// Address: 0x36bbf4
// Original: _ZN15FxInfoEmAngle_cD2Ev
// Demangled: FxInfoEmAngle_c::~FxInfoEmAngle_c()
void __fastcall FxInfoEmAngle_c::~FxInfoEmAngle_c(FxInfoEmAngle_c *this)
{
  *(_DWORD *)this = &off_665A14;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmAngle_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bc18
// Original: _ZN15FxInfoEmAngle_cD0Ev
// Demangled: FxInfoEmAngle_c::~FxInfoEmAngle_c()
void __fastcall FxInfoEmAngle_c::~FxInfoEmAngle_c(FxInfoEmAngle_c *this)
{
  *(_DWORD *)this = &off_665A14;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmAngle_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

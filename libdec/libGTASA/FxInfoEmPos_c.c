
// Address: 0x36a658
// Original: _ZN13FxInfoEmPos_cC2Ev
// Demangled: FxInfoEmPos_c::FxInfoEmPos_c(void)
void __fastcall FxInfoEmPos_c::FxInfoEmPos_c(FxInfoEmPos_c *this)
{
  *(_DWORD *)this = &off_665A44;
  FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInfoEmPos_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 3;
  *((_WORD *)this + 2) = 4224;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 12, 4);
}


// ============================================================

// Address: 0x36a698
// Original: _ZN13FxInfoEmPos_c4LoadEji
// Demangled: FxInfoEmPos_c::Load(uint,int)
int __fastcall FxInfoEmPos_c::Load(FxInfoEmPos_c *this, unsigned int a2, int a3)
{
  return j_FxInterpInfoFloat_c::Load((FxInfoEmPos_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36a69e
// Original: _ZN13FxInfoEmPos_c8GetValueEffffhPv
// Demangled: FxInfoEmPos_c::GetValue(float,float,float,float,uchar,void *)
float *__fastcall FxInfoEmPos_c::GetValue(
        FxInfoEmPos_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        float *a7)
{
  float v7; // r2
  float v8; // r3
  float v10[18]; // [sp+0h] [bp-48h] BYREF

  FxInterpInfoFloat_c::GetVal((FxInfoEmPos_c *)((char *)this + 8), v10, a2);
  v7 = v10[1];
  v8 = v10[2];
  a7[17] = v10[0];
  a7[18] = v7;
  a7[19] = v8;
  return a7 + 20;
}


// ============================================================

// Address: 0x36bc8c
// Original: _ZN13FxInfoEmPos_cD2Ev
// Demangled: FxInfoEmPos_c::~FxInfoEmPos_c()
void __fastcall FxInfoEmPos_c::~FxInfoEmPos_c(FxInfoEmPos_c *this)
{
  *(_DWORD *)this = &off_665A44;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmPos_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bcb0
// Original: _ZN13FxInfoEmPos_cD0Ev
// Demangled: FxInfoEmPos_c::~FxInfoEmPos_c()
void __fastcall FxInfoEmPos_c::~FxInfoEmPos_c(FxInfoEmPos_c *this)
{
  *(_DWORD *)this = &off_665A44;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmPos_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================


// Address: 0x36a52c
// Original: _ZN13FxInfoEmDir_cC2Ev
// Demangled: FxInfoEmDir_c::FxInfoEmDir_c(void)
void __fastcall FxInfoEmDir_c::FxInfoEmDir_c(FxInfoEmDir_c *this)
{
  *(_DWORD *)this = &off_6659FC;
  FxInterpInfo32_c::FxInterpInfo32_c((FxInfoEmDir_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 3;
  *((_WORD *)this + 2) = 4112;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 12, 4);
}


// ============================================================

// Address: 0x36a56c
// Original: _ZN13FxInfoEmDir_c4LoadEji
// Demangled: FxInfoEmDir_c::Load(uint,int)
int __fastcall FxInfoEmDir_c::Load(FxInfoEmDir_c *this, unsigned int a2, int a3)
{
  return sub_198CC4((FxInfoEmDir_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36a572
// Original: _ZN13FxInfoEmDir_c8GetValueEffffhPv
// Demangled: FxInfoEmDir_c::GetValue(float,float,float,float,uchar,void *)
float *__fastcall FxInfoEmDir_c::GetValue(
        FxInfoEmDir_c *this,
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

  FxInterpInfo32_c::GetVal((FxInfoEmDir_c *)((char *)this + 8), v10, a2);
  v7 = v10[1];
  v8 = v10[2];
  a7[10] = v10[0];
  a7[11] = v7;
  a7[12] = v8;
  return a7 + 13;
}


// ============================================================

// Address: 0x36bba8
// Original: _ZN13FxInfoEmDir_cD2Ev
// Demangled: FxInfoEmDir_c::~FxInfoEmDir_c()
void __fastcall FxInfoEmDir_c::~FxInfoEmDir_c(FxInfoEmDir_c *this)
{
  *(_DWORD *)this = &off_6659FC;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmDir_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bbcc
// Original: _ZN13FxInfoEmDir_cD0Ev
// Demangled: FxInfoEmDir_c::~FxInfoEmDir_c()
void __fastcall FxInfoEmDir_c::~FxInfoEmDir_c(FxInfoEmDir_c *this)
{
  *(_DWORD *)this = &off_6659FC;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmDir_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

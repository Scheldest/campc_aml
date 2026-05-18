
// Address: 0x36a4c8
// Original: _ZN15FxInfoEmSpeed_cC2Ev
// Demangled: FxInfoEmSpeed_c::FxInfoEmSpeed_c(void)
void __fastcall FxInfoEmSpeed_c::FxInfoEmSpeed_c(FxInfoEmSpeed_c *this)
{
  *(_DWORD *)this = &off_6659E4;
  FxInterpInfo32_c::FxInterpInfo32_c((FxInfoEmSpeed_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 2;
  *((_WORD *)this + 2) = 4104;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 8, 4);
}


// ============================================================

// Address: 0x36a508
// Original: _ZN15FxInfoEmSpeed_c4LoadEji
// Demangled: FxInfoEmSpeed_c::Load(uint,int)
int __fastcall FxInfoEmSpeed_c::Load(FxInfoEmSpeed_c *this, unsigned int a2, int a3)
{
  return sub_198CC4((FxInfoEmSpeed_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36a50e
// Original: _ZN15FxInfoEmSpeed_c8GetValueEffffhPv
// Demangled: FxInfoEmSpeed_c::GetValue(float,float,float,float,uchar,void *)
float *__fastcall FxInfoEmSpeed_c::GetValue(
        FxInfoEmSpeed_c *this,
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

  FxInterpInfo32_c::GetVal((FxInfoEmSpeed_c *)((char *)this + 8), v9, a2);
  result = a7;
  v8 = v9[1];
  a7[8] = v9[0];
  a7[9] = v8;
  return result;
}


// ============================================================

// Address: 0x36bb5c
// Original: _ZN15FxInfoEmSpeed_cD2Ev
// Demangled: FxInfoEmSpeed_c::~FxInfoEmSpeed_c()
void __fastcall FxInfoEmSpeed_c::~FxInfoEmSpeed_c(FxInfoEmSpeed_c *this)
{
  *(_DWORD *)this = &off_6659E4;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmSpeed_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bb80
// Original: _ZN15FxInfoEmSpeed_cD0Ev
// Demangled: FxInfoEmSpeed_c::~FxInfoEmSpeed_c()
void __fastcall FxInfoEmSpeed_c::~FxInfoEmSpeed_c(FxInfoEmSpeed_c *this)
{
  *(_DWORD *)this = &off_6659E4;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmSpeed_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

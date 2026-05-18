
// Address: 0x36a44c
// Original: _ZN14FxInfoEmSize_cC2Ev
// Demangled: FxInfoEmSize_c::FxInfoEmSize_c(void)
void __fastcall FxInfoEmSize_c::FxInfoEmSize_c(FxInfoEmSize_c *this)
{
  *(_DWORD *)this = &off_6659CC;
  FxInterpInfo32_c::FxInterpInfo32_c((FxInfoEmSize_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 7;
  *((_WORD *)this + 2) = 4100;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 28, 4);
}


// ============================================================

// Address: 0x36a48c
// Original: _ZN14FxInfoEmSize_c4LoadEji
// Demangled: FxInfoEmSize_c::Load(uint,int)
int __fastcall FxInfoEmSize_c::Load(FxInfoEmSize_c *this, unsigned int a2, int a3)
{
  return sub_198CC4((FxInfoEmSize_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36a492
// Original: _ZN14FxInfoEmSize_c8GetValueEffffhPv
// Demangled: FxInfoEmSize_c::GetValue(float,float,float,float,uchar,void *)
float *__fastcall FxInfoEmSize_c::GetValue(
        FxInfoEmSize_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        float *a7)
{
  float *result; // r0
  float v8; // r2
  float v9; // r12
  float v10; // r3
  float v11; // lr
  float v12; // r4
  float v13; // r5
  float v14[18]; // [sp+0h] [bp-48h] BYREF

  FxInterpInfo32_c::GetVal((FxInfoEmSize_c *)((char *)this + 8), v14, a2);
  result = a7;
  v8 = v14[1];
  v9 = v14[2];
  v10 = v14[3];
  v11 = v14[4];
  v12 = v14[5];
  v13 = v14[6];
  a7[1] = v14[0];
  a7[2] = v8;
  a7[3] = v10;
  a7[4] = v12;
  a7[5] = v9;
  a7[6] = v11;
  a7[7] = v13;
  return result;
}


// ============================================================

// Address: 0x36bb10
// Original: _ZN14FxInfoEmSize_cD2Ev
// Demangled: FxInfoEmSize_c::~FxInfoEmSize_c()
void __fastcall FxInfoEmSize_c::~FxInfoEmSize_c(FxInfoEmSize_c *this)
{
  *(_DWORD *)this = &off_6659CC;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmSize_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bb34
// Original: _ZN14FxInfoEmSize_cD0Ev
// Demangled: FxInfoEmSize_c::~FxInfoEmSize_c()
void __fastcall FxInfoEmSize_c::~FxInfoEmSize_c(FxInfoEmSize_c *this)
{
  *(_DWORD *)this = &off_6659CC;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmSize_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================


// Address: 0x36aa10
// Original: _ZN16FxInfoFriction_cC2Ev
// Demangled: FxInfoFriction_c::FxInfoFriction_c(void)
void __fastcall FxInfoFriction_c::FxInfoFriction_c(FxInfoFriction_c *this)
{
  *(_DWORD *)this = &off_665ABC;
  FxInterpInfo32_c::FxInterpInfo32_c((FxInfoFriction_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 1;
  *((_WORD *)this + 2) = 8196;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 4, 4);
}


// ============================================================

// Address: 0x36aa50
// Original: _ZN16FxInfoFriction_c4LoadEji
// Demangled: FxInfoFriction_c::Load(uint,int)
int __fastcall FxInfoFriction_c::Load(FxInfoFriction_c *this, unsigned int a2, int a3)
{
  return sub_198CC4((FxInfoFriction_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36aa58
// Original: _ZN16FxInfoFriction_c8GetValueEffffhPv
// Demangled: FxInfoFriction_c::GetValue(float,float,float,float,uchar,void *)
float __fastcall FxInfoFriction_c::GetValue(
        FxInfoFriction_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        float *a7)
{
  int v8; // r1
  FxInterpInfo32_c *v9; // r0
  float v10; // s0
  float result; // r0
  float v14; // s2
  float v15; // s4
  float x[18]; // [sp+0h] [bp-48h] BYREF

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoFriction_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfo32_c::GetVal(v9, x, a3);
  result = powf(x[0], a4 * 50.0);
  v14 = result * a7[4];
  v15 = result * a7[5];
  a7[3] = result * a7[3];
  a7[4] = v14;
  a7[5] = v15;
  return result;
}


// ============================================================

// Address: 0x36be08
// Original: _ZN16FxInfoFriction_cD2Ev
// Demangled: FxInfoFriction_c::~FxInfoFriction_c()
void __fastcall FxInfoFriction_c::~FxInfoFriction_c(FxInfoFriction_c *this)
{
  *(_DWORD *)this = &off_665ABC;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoFriction_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36be2c
// Original: _ZN16FxInfoFriction_cD0Ev
// Demangled: FxInfoFriction_c::~FxInfoFriction_c()
void __fastcall FxInfoFriction_c::~FxInfoFriction_c(FxInfoFriction_c *this)
{
  *(_DWORD *)this = &off_665ABC;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoFriction_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================


// Address: 0x36aad0
// Original: _ZN17FxInfoAttractPt_cC2Ev
// Demangled: FxInfoAttractPt_c::FxInfoAttractPt_c(void)
void __fastcall FxInfoAttractPt_c::FxInfoAttractPt_c(FxInfoAttractPt_c *this)
{
  *(_DWORD *)this = &off_665AD4;
  FxInterpInfo32_c::FxInterpInfo32_c((FxInfoAttractPt_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 4;
  *((_WORD *)this + 2) = 8200;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 16, 4);
}


// ============================================================

// Address: 0x36ab10
// Original: _ZN17FxInfoAttractPt_c4LoadEji
// Demangled: FxInfoAttractPt_c::Load(uint,int)
int __fastcall FxInfoAttractPt_c::Load(FxInfoAttractPt_c *this, unsigned int a2, int a3)
{
  return sub_198CC4((FxInfoAttractPt_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36ab18
// Original: _ZN17FxInfoAttractPt_c8GetValueEffffhPv
// Demangled: FxInfoAttractPt_c::GetValue(float,float,float,float,uchar,void *)
float __fastcall FxInfoAttractPt_c::GetValue(
        FxInfoAttractPt_c *this,
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
  float v14; // s16
  float v15; // s4
  float v16; // s0
  float v17; // [sp+4h] [bp-5Ch]
  float v18; // [sp+8h] [bp-58h]
  float v19; // [sp+Ch] [bp-54h]
  float v20[20]; // [sp+10h] [bp-50h] BYREF

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoAttractPt_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfo32_c::GetVal(v9, v20, a3);
  v17 = v20[0] - *a7;
  v18 = v20[1] - a7[1];
  v19 = v20[2] - a7[2];
  result = COERCE_FLOAT(RwV3dLength());
  v14 = result;
  if ( result > 0.0 )
    result = COERCE_FLOAT(RwV3dNormalize());
  if ( v14 > 0.1 )
  {
    v15 = a7[4] + (float)((float)(v20[0] * a4) * v18);
    v16 = a7[5] + (float)(v19 * (float)(v20[0] * a4));
    a7[3] = a7[3] + (float)(v17 * (float)(v20[0] * a4));
    a7[4] = v15;
    a7[5] = v16;
  }
  return result;
}


// ============================================================

// Address: 0x36be54
// Original: _ZN17FxInfoAttractPt_cD2Ev
// Demangled: FxInfoAttractPt_c::~FxInfoAttractPt_c()
void __fastcall FxInfoAttractPt_c::~FxInfoAttractPt_c(FxInfoAttractPt_c *this)
{
  *(_DWORD *)this = &off_665AD4;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoAttractPt_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36be78
// Original: _ZN17FxInfoAttractPt_cD0Ev
// Demangled: FxInfoAttractPt_c::~FxInfoAttractPt_c()
void __fastcall FxInfoAttractPt_c::~FxInfoAttractPt_c(FxInfoAttractPt_c *this)
{
  *(_DWORD *)this = &off_665AD4;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoAttractPt_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================


// Address: 0x36b13c
// Original: _ZN14FxInfoJitter_cC2Ev
// Demangled: FxInfoJitter_c::FxInfoJitter_c(void)
void __fastcall FxInfoJitter_c::FxInfoJitter_c(FxInfoJitter_c *this)
{
  *(_DWORD *)this = &off_665B34;
  FxInterpInfo32_c::FxInterpInfo32_c((FxInfoJitter_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 1;
  *((_WORD *)this + 2) = 8320;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 4, 4);
}


// ============================================================

// Address: 0x36b17c
// Original: _ZN14FxInfoJitter_c4LoadEji
// Demangled: FxInfoJitter_c::Load(uint,int)
int __fastcall FxInfoJitter_c::Load(FxInfoJitter_c *this, unsigned int a2, int a3)
{
  return sub_198CC4((FxInfoJitter_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b184
// Original: _ZN14FxInfoJitter_c8GetValueEffffhPv
// Demangled: FxInfoJitter_c::GetValue(float,float,float,float,uchar,void *)
float *__fastcall FxInfoJitter_c::GetValue(
        FxInfoJitter_c *this,
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
  float *result; // r0
  float v14; // s4
  float v15; // s0
  float v16; // [sp+4h] [bp-6Ch]
  float v17; // [sp+8h] [bp-68h]
  float v18; // [sp+Ch] [bp-64h]
  float v19[24]; // [sp+10h] [bp-60h] BYREF

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoJitter_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfo32_c::GetVal(v9, v19, a3);
  v16 = (float)((float)(rand() % 10000) * 0.0002) + -1.0;
  v17 = (float)((float)(rand() % 10000) * 0.0002) + -1.0;
  v18 = (float)((float)(rand() % 10000) * 0.0002) + -1.0;
  RwV3dNormalize();
  result = a7;
  v14 = a7[1] + (float)((float)(v19[0] * a4) * v17);
  v15 = a7[2] + (float)(v18 * (float)(v19[0] * a4));
  *a7 = *a7 + (float)(v16 * (float)(v19[0] * a4));
  a7[1] = v14;
  a7[2] = v15;
  return result;
}


// ============================================================

// Address: 0x36bf84
// Original: _ZN14FxInfoJitter_cD2Ev
// Demangled: FxInfoJitter_c::~FxInfoJitter_c()
void __fastcall FxInfoJitter_c::~FxInfoJitter_c(FxInfoJitter_c *this)
{
  *(_DWORD *)this = &off_665B34;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoJitter_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bfa8
// Original: _ZN14FxInfoJitter_cD0Ev
// Demangled: FxInfoJitter_c::~FxInfoJitter_c()
void __fastcall FxInfoJitter_c::~FxInfoJitter_c(FxInfoJitter_c *this)
{
  *(_DWORD *)this = &off_665B34;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoJitter_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

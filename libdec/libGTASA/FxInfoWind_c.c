
// Address: 0x36b05c
// Original: _ZN12FxInfoWind_cC2Ev
// Demangled: FxInfoWind_c::FxInfoWind_c(void)
void __fastcall FxInfoWind_c::FxInfoWind_c(FxInfoWind_c *this)
{
  *(_DWORD *)this = &off_665B1C;
  FxInterpInfo32_c::FxInterpInfo32_c((FxInfoWind_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 1;
  *((_WORD *)this + 2) = 8256;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 4, 4);
}


// ============================================================

// Address: 0x36b09c
// Original: _ZN12FxInfoWind_c4LoadEji
// Demangled: FxInfoWind_c::Load(uint,int)
int __fastcall FxInfoWind_c::Load(FxInfoWind_c *this, unsigned int a2, int a3)
{
  return sub_198CC4((FxInfoWind_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b0a4
// Original: _ZN12FxInfoWind_c8GetValueEffffhPv
// Demangled: FxInfoWind_c::GetValue(float,float,float,float,uchar,void *)
int __fastcall FxInfoWind_c::GetValue(
        FxInfoWind_c *this,
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
  float v13; // s0
  float v14; // s6
  float v15; // s8
  int result; // r0
  float v17[18]; // [sp+0h] [bp-48h] BYREF

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoWind_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfo32_c::GetVal(v9, v17, a3);
  v13 = (float)(*unk_8205C4 * v17[0]) * a4;
  v14 = a7[4];
  v15 = a7[5];
  a7[3] = a7[3] + (float)(*(float *)dword_8205C0 * v13);
  a7[4] = v14 + (float)(v13 * *(float *)(dword_8205C0 + 4));
  result = dword_8205C0;
  a7[5] = v15 + (float)(v13 * *(float *)(dword_8205C0 + 8));
  return result;
}


// ============================================================

// Address: 0x36bf38
// Original: _ZN12FxInfoWind_cD2Ev
// Demangled: FxInfoWind_c::~FxInfoWind_c()
void __fastcall FxInfoWind_c::~FxInfoWind_c(FxInfoWind_c *this)
{
  *(_DWORD *)this = &off_665B1C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoWind_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bf5c
// Original: _ZN12FxInfoWind_cD0Ev
// Demangled: FxInfoWind_c::~FxInfoWind_c()
void __fastcall FxInfoWind_c::~FxInfoWind_c(FxInfoWind_c *this)
{
  *(_DWORD *)this = &off_665B1C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoWind_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

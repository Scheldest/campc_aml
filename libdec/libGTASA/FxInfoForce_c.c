
// Address: 0x36a954
// Original: _ZN13FxInfoForce_cC2Ev
// Demangled: FxInfoForce_c::FxInfoForce_c(void)
void __fastcall FxInfoForce_c::FxInfoForce_c(FxInfoForce_c *this)
{
  *(_DWORD *)this = &off_665AA4;
  FxInterpInfo32_c::FxInterpInfo32_c((FxInfoForce_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 3;
  *((_WORD *)this + 2) = 8194;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 12, 4);
}


// ============================================================

// Address: 0x36a994
// Original: _ZN13FxInfoForce_c4LoadEji
// Demangled: FxInfoForce_c::Load(uint,int)
int __fastcall FxInfoForce_c::Load(FxInfoForce_c *this, unsigned int a2, int a3)
{
  return sub_198CC4((FxInfoForce_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36a99a
// Original: _ZN13FxInfoForce_c8GetValueEffffhPv
// Demangled: FxInfoForce_c::GetValue(float,float,float,float,uchar,void *)
float *__fastcall FxInfoForce_c::GetValue(
        FxInfoForce_c *this,
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
  float v14; // s8
  float v15; // s4
  float v16; // s6
  float v17[18]; // [sp+0h] [bp-48h] BYREF

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoForce_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfo32_c::GetVal(v9, v17, a3);
  result = a7;
  v14 = a7[5];
  v15 = a7[4] + (float)(v17[1] * a4);
  v16 = v17[2];
  a7[3] = a7[3] + (float)(v17[0] * a4);
  a7[4] = v15;
  a7[5] = v14 + (float)(v16 * a4);
  return result;
}


// ============================================================

// Address: 0x36bdbc
// Original: _ZN13FxInfoForce_cD2Ev
// Demangled: FxInfoForce_c::~FxInfoForce_c()
void __fastcall FxInfoForce_c::~FxInfoForce_c(FxInfoForce_c *this)
{
  *(_DWORD *)this = &off_665AA4;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoForce_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bde0
// Original: _ZN13FxInfoForce_cD0Ev
// Demangled: FxInfoForce_c::~FxInfoForce_c()
void __fastcall FxInfoForce_c::~FxInfoForce_c(FxInfoForce_c *this)
{
  *(_DWORD *)this = &off_665AA4;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoForce_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

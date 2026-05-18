
// Address: 0x36b458
// Original: _ZN12FxInfoSize_cC2Ev
// Demangled: FxInfoSize_c::FxInfoSize_c(void)
void __fastcall FxInfoSize_c::FxInfoSize_c(FxInfoSize_c *this)
{
  *(_DWORD *)this = &off_665BAC;
  FxInterpInfo32_c::FxInterpInfo32_c((FxInfoSize_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 4;
  *((_WORD *)this + 2) = 16386;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 16, 4);
}


// ============================================================

// Address: 0x36b498
// Original: _ZN12FxInfoSize_c4LoadEji
// Demangled: FxInfoSize_c::Load(uint,int)
int __fastcall FxInfoSize_c::Load(FxInfoSize_c *this, unsigned int a2, int a3)
{
  if ( a3 <= 104 )
    *((_BYTE *)this + 14) = 2;
  return sub_198CC4((FxInfoSize_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b4a8
// Original: _ZN12FxInfoSize_c8GetValueEffffhPv
// Demangled: FxInfoSize_c::GetValue(float,float,float,float,uchar,void *)
float *__fastcall FxInfoSize_c::GetValue(
        FxInfoSize_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        float *a7)
{
  bool v8; // zf
  FxInterpInfo32_c *v9; // r0
  float *result; // r0
  float v12; // r2
  float v13; // s0
  float v14[18]; // [sp+0h] [bp-48h] BYREF

  v8 = *((_BYTE *)this + 6) == 0;
  v9 = (FxInfoSize_c *)((char *)this + 8);
  if ( v8 )
    a3 = a2 / a5;
  FxInterpInfo32_c::GetVal(v9, v14, a3);
  result = a7;
  v12 = v14[1];
  a7[3] = v14[0];
  a7[4] = v12;
  if ( *((_BYTE *)this + 14) == 4 )
  {
    a7[5] = v14[2];
    v13 = v14[3];
  }
  else
  {
    v13 = 0.0;
    a7[5] = 0.0;
  }
  a7[6] = v13;
  return result;
}


// ============================================================

// Address: 0x36c100
// Original: _ZN12FxInfoSize_cD2Ev
// Demangled: FxInfoSize_c::~FxInfoSize_c()
void __fastcall FxInfoSize_c::~FxInfoSize_c(FxInfoSize_c *this)
{
  *(_DWORD *)this = &off_665BAC;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoSize_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36c124
// Original: _ZN12FxInfoSize_cD0Ev
// Demangled: FxInfoSize_c::~FxInfoSize_c()
void __fastcall FxInfoSize_c::~FxInfoSize_c(FxInfoSize_c *this)
{
  *(_DWORD *)this = &off_665BAC;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoSize_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

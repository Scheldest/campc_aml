
// Address: 0x36b70c
// Original: _ZN11FxInfoDir_cC2Ev
// Demangled: FxInfoDir_c::FxInfoDir_c(void)
void __fastcall FxInfoDir_c::FxInfoDir_c(FxInfoDir_c *this)
{
  *(_DWORD *)this = &off_665C24;
  FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInfoDir_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 3;
  *((_WORD *)this + 2) = 16448;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 12, 4);
}


// ============================================================

// Address: 0x36b74c
// Original: _ZN11FxInfoDir_c4LoadEji
// Demangled: FxInfoDir_c::Load(uint,int)
int __fastcall FxInfoDir_c::Load(FxInfoDir_c *this, unsigned int a2, int a3)
{
  return j_FxInterpInfoFloat_c::Load((FxInfoDir_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b754
// Original: _ZN11FxInfoDir_c8GetValueEffffhPv
// Demangled: FxInfoDir_c::GetValue(float,float,float,float,uchar,void *)
float __fastcall FxInfoDir_c::GetValue(
        FxInfoDir_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        float *a7)
{
  int v8; // r1
  FxInterpInfoFloat_c *v9; // r0
  float v10; // s0
  float v12; // r1
  float v13; // r2
  float result; // r0
  float v15[18]; // [sp+0h] [bp-48h] BYREF

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoDir_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfoFloat_c::GetVal(v9, v15, a3);
  *((_BYTE *)a7 + 121) = 1;
  v12 = v15[1];
  v13 = v15[2];
  a7[31] = v15[0];
  a7[32] = v12;
  a7[33] = v13;
  result = COERCE_FLOAT(RwV3dLength());
  if ( result < 0.001 )
    *((_BYTE *)a7 + 122) = 1;
  return result;
}


// ============================================================

// Address: 0x36c27c
// Original: _ZN11FxInfoDir_cD2Ev
// Demangled: FxInfoDir_c::~FxInfoDir_c()
void __fastcall FxInfoDir_c::~FxInfoDir_c(FxInfoDir_c *this)
{
  *(_DWORD *)this = &off_665C24;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoDir_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36c2a0
// Original: _ZN11FxInfoDir_cD0Ev
// Demangled: FxInfoDir_c::~FxInfoDir_c()
void __fastcall FxInfoDir_c::~FxInfoDir_c(FxInfoDir_c *this)
{
  *(_DWORD *)this = &off_665C24;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoDir_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

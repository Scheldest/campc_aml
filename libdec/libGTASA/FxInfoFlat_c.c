
// Address: 0x36b664
// Original: _ZN12FxInfoFlat_cC2Ev
// Demangled: FxInfoFlat_c::FxInfoFlat_c(void)
void __fastcall FxInfoFlat_c::FxInfoFlat_c(FxInfoFlat_c *this)
{
  *(_DWORD *)this = &off_665C0C;
  FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInfoFlat_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 9;
  *((_WORD *)this + 2) = 16416;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 36, 4);
}


// ============================================================

// Address: 0x36b6a4
// Original: _ZN12FxInfoFlat_c4LoadEji
// Demangled: FxInfoFlat_c::Load(uint,int)
int __fastcall FxInfoFlat_c::Load(FxInfoFlat_c *this, unsigned int a2, int a3)
{
  return j_FxInterpInfoFloat_c::Load((FxInfoFlat_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b6aa
// Original: _ZN12FxInfoFlat_c8GetValueEffffhPv
// Demangled: FxInfoFlat_c::GetValue(float,float,float,float,uchar,void *)
int __fastcall FxInfoFlat_c::GetValue(
        FxInfoFlat_c *this,
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
  float v12; // r2
  float v13; // r3
  float v14; // r2
  float v15; // r3
  float v16; // r2
  float v17; // r3
  float v19[18]; // [sp+0h] [bp-48h] BYREF

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoFlat_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfoFloat_c::GetVal(v9, v19, a3);
  *((_BYTE *)a7 + 120) = 1;
  v12 = v19[1];
  v13 = v19[2];
  a7[14] = v19[0];
  a7[15] = v12;
  a7[16] = v13;
  v14 = v19[4];
  v15 = v19[5];
  a7[18] = v19[3];
  a7[19] = v14;
  a7[20] = v15;
  v16 = v19[7];
  v17 = v19[8];
  a7[22] = v19[6];
  a7[23] = v16;
  a7[24] = v17;
  return RwMatrixUpdate(a7 + 14);
}


// ============================================================

// Address: 0x36c230
// Original: _ZN12FxInfoFlat_cD2Ev
// Demangled: FxInfoFlat_c::~FxInfoFlat_c()
void __fastcall FxInfoFlat_c::~FxInfoFlat_c(FxInfoFlat_c *this)
{
  *(_DWORD *)this = &off_665C0C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoFlat_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36c254
// Original: _ZN12FxInfoFlat_cD0Ev
// Demangled: FxInfoFlat_c::~FxInfoFlat_c()
void __fastcall FxInfoFlat_c::~FxInfoFlat_c(FxInfoFlat_c *this)
{
  *(_DWORD *)this = &off_665C0C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoFlat_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

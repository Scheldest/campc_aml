
// Address: 0x36b5c8
// Original: _ZN13FxInfoTrail_cC2Ev
// Demangled: FxInfoTrail_c::FxInfoTrail_c(void)
void __fastcall FxInfoTrail_c::FxInfoTrail_c(FxInfoTrail_c *this)
{
  *(_DWORD *)this = &off_665BF4;
  FxInterpInfoU255_c::FxInterpInfoU255_c((FxInfoTrail_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 2;
  *((_WORD *)this + 2) = 16400;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 8, 4);
}


// ============================================================

// Address: 0x36b608
// Original: _ZN13FxInfoTrail_c4LoadEji
// Demangled: FxInfoTrail_c::Load(uint,int)
int __fastcall FxInfoTrail_c::Load(FxInfoTrail_c *this, unsigned int a2, int a3)
{
  return sub_190B40((FxInfoTrail_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b610
// Original: _ZN13FxInfoTrail_c8GetValueEffffhPv
// Demangled: FxInfoTrail_c::GetValue(float,float,float,float,uchar,void *)
_DWORD *__fastcall FxInfoTrail_c::GetValue(
        FxInfoTrail_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        _DWORD *a7)
{
  int v8; // r1
  FxInterpInfoU255_c *v9; // r0
  float v10; // s0
  _DWORD *result; // r0
  float v13; // r1
  float v14[18]; // [sp+0h] [bp-48h] BYREF

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoTrail_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfoU255_c::GetVal(v9, v14, a3);
  result = a7;
  v13 = v14[0];
  a7[11] = 1;
  *((float *)a7 + 12) = v13;
  if ( v14[1] > 0.1 )
    a7[11] = 2;
  return result;
}


// ============================================================

// Address: 0x36c1e4
// Original: _ZN13FxInfoTrail_cD2Ev
// Demangled: FxInfoTrail_c::~FxInfoTrail_c()
void __fastcall FxInfoTrail_c::~FxInfoTrail_c(FxInfoTrail_c *this)
{
  *(_DWORD *)this = &off_665BF4;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoTrail_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36c208
// Original: _ZN13FxInfoTrail_cD0Ev
// Demangled: FxInfoTrail_c::~FxInfoTrail_c()
void __fastcall FxInfoTrail_c::~FxInfoTrail_c(FxInfoTrail_c *this)
{
  *(_DWORD *)this = &off_665BF4;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoTrail_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================


// Address: 0x36b3a8
// Original: _ZN14FxInfoColour_cC2Ev
// Demangled: FxInfoColour_c::FxInfoColour_c(void)
void __fastcall FxInfoColour_c::FxInfoColour_c(FxInfoColour_c *this)
{
  *(_DWORD *)this = &off_665B94;
  FxInterpInfoU255_c::FxInterpInfoU255_c((FxInfoColour_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 4;
  *((_WORD *)this + 2) = 16385;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 16, 4);
}


// ============================================================

// Address: 0x36b3e8
// Original: _ZN14FxInfoColour_c4LoadEji
// Demangled: FxInfoColour_c::Load(uint,int)
int __fastcall FxInfoColour_c::Load(FxInfoColour_c *this, unsigned int a2, int a3)
{
  return sub_190B40((FxInfoColour_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b3ee
// Original: _ZN14FxInfoColour_c8GetValueEffffhPv
// Demangled: FxInfoColour_c::GetValue(float,float,float,float,uchar,void *)
_BYTE *__fastcall FxInfoColour_c::GetValue(
        FxInfoColour_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        _BYTE *a7)
{
  int v8; // r1
  FxInterpInfoU255_c *v9; // r0
  float v10; // s0
  _BYTE *result; // r0
  float v13[18]; // [sp+0h] [bp-48h] BYREF

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoColour_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfoU255_c::GetVal(v9, v13, a3);
  result = a7;
  *a7 = (int)v13[0];
  a7[1] = (int)v13[1];
  a7[2] = (int)v13[2];
  a7[3] = (int)v13[3];
  return result;
}


// ============================================================

// Address: 0x36c0b4
// Original: _ZN14FxInfoColour_cD2Ev
// Demangled: FxInfoColour_c::~FxInfoColour_c()
void __fastcall FxInfoColour_c::~FxInfoColour_c(FxInfoColour_c *this)
{
  *(_DWORD *)this = &off_665B94;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoColour_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36c0d8
// Original: _ZN14FxInfoColour_cD0Ev
// Demangled: FxInfoColour_c::~FxInfoColour_c()
void __fastcall FxInfoColour_c::~FxInfoColour_c(FxInfoColour_c *this)
{
  *(_DWORD *)this = &off_665B94;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoColour_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

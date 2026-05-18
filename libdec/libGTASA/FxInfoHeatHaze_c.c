
// Address: 0x36b58c
// Original: _ZN16FxInfoHeatHaze_cC2Ev
// Demangled: FxInfoHeatHaze_c::FxInfoHeatHaze_c(void)
void __fastcall FxInfoHeatHaze_c::FxInfoHeatHaze_c(FxInfoHeatHaze_c *this)
{
  *(_DWORD *)this = &off_665BDC;
  FxInterpInfo255_c::FxInterpInfo255_c((FxInfoHeatHaze_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 2) = 16392;
}


// ============================================================

// Address: 0x36b5b8
// Original: _ZN16FxInfoHeatHaze_c4LoadEji
// Demangled: FxInfoHeatHaze_c::Load(uint,int)
int __fastcall FxInfoHeatHaze_c::Load(FxInfoHeatHaze_c *this, unsigned int a2, int a3)
{
  return j_FxInterpInfo255_c::Load((FxInfoHeatHaze_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b5be
// Original: _ZN16FxInfoHeatHaze_c8GetValueEffffhPv
// Demangled: FxInfoHeatHaze_c::GetValue(float,float,float,float,uchar,void *)
_BYTE *__fastcall FxInfoHeatHaze_c::GetValue(
        FxInfoHeatHaze_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        _BYTE *a7)
{
  _BYTE *result; // r0

  result = a7;
  a7[54] = 1;
  return result;
}


// ============================================================

// Address: 0x36c198
// Original: _ZN16FxInfoHeatHaze_cD2Ev
// Demangled: FxInfoHeatHaze_c::~FxInfoHeatHaze_c()
void __fastcall FxInfoHeatHaze_c::~FxInfoHeatHaze_c(FxInfoHeatHaze_c *this)
{
  *(_DWORD *)this = &off_665BDC;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoHeatHaze_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36c1bc
// Original: _ZN16FxInfoHeatHaze_cD0Ev
// Demangled: FxInfoHeatHaze_c::~FxInfoHeatHaze_c()
void __fastcall FxInfoHeatHaze_c::~FxInfoHeatHaze_c(FxInfoHeatHaze_c *this)
{
  *(_DWORD *)this = &off_665BDC;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoHeatHaze_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================

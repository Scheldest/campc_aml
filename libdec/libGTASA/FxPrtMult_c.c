
// Address: 0x194cbc
// Original: j__ZN11FxPrtMult_c5SetUpEfffffff
// Demangled: FxPrtMult_c::SetUp(float,float,float,float,float,float,float)
// attributes: thunk
int __fastcall FxPrtMult_c::SetUp(
        FxPrtMult_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  return _ZN11FxPrtMult_c5SetUpEfffffff(this, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x19eddc
// Original: j__ZN11FxPrtMult_cC2Ev
// Demangled: FxPrtMult_c::FxPrtMult_c(void)
// attributes: thunk
void __fastcall FxPrtMult_c::FxPrtMult_c(FxPrtMult_c *this)
{
  _ZN11FxPrtMult_cC2Ev(this);
}


// ============================================================

// Address: 0x1a033c
// Original: j__ZN11FxPrtMult_cC2Efffffff
// Demangled: FxPrtMult_c::FxPrtMult_c(float,float,float,float,float,float,float)
// attributes: thunk
void __fastcall FxPrtMult_c::FxPrtMult_c(
        FxPrtMult_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  _ZN11FxPrtMult_cC2Efffffff(this, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x36f32e
// Original: _ZN11FxPrtMult_cC2Ev
// Demangled: FxPrtMult_c::FxPrtMult_c(void)
void __fastcall FxPrtMult_c::FxPrtMult_c(FxPrtMult_c *this)
{
  __int64 v1; // d16
  __int64 v2; // d17

  *(float *)&v1 = 1.0;
  *((float *)&v1 + 1) = 1.0;
  *(float *)&v2 = 1.0;
  *((float *)&v2 + 1) = 1.0;
  *((_DWORD *)this + 5) = 1065353216;
  *((_DWORD *)this + 6) = 1065353216;
  *(_QWORD *)this = v1;
  *((_QWORD *)this + 1) = v2;
  *((_DWORD *)this + 4) = 1065353216;
}


// ============================================================

// Address: 0x36f344
// Original: _ZN11FxPrtMult_cC2Efffffff
// Demangled: FxPrtMult_c::FxPrtMult_c(float,float,float,float,float,float,float)
void __fastcall FxPrtMult_c::FxPrtMult_c(
        FxPrtMult_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  *(float *)this = a2;
  *((float *)this + 1) = a3;
  *((float *)this + 2) = a4;
  *((float *)this + 3) = a5;
  *((float *)this + 4) = a6;
  *((float *)this + 5) = a7;
  *((float *)this + 6) = a8;
}


// ============================================================

// Address: 0x36f36a
// Original: _ZN11FxPrtMult_c5SetUpEfffffff
// Demangled: FxPrtMult_c::SetUp(float,float,float,float,float,float,float)
float *__fastcall FxPrtMult_c::SetUp(float *this, float a2, float a3, float a4, float a5, float a6, float a7, float a8)
{
  *this = a2;
  this[1] = a3;
  this[2] = a4;
  this[3] = a5;
  this[4] = a6;
  this[5] = a7;
  this[6] = a8;
  return this;
}


// ============================================================


// Address: 0x18e984
// Original: j__ZN5CDraw20CalculateAspectRatioEv
// Demangled: CDraw::CalculateAspectRatio(void)
// attributes: thunk
int __fastcall CDraw::CalculateAspectRatio(CDraw *this)
{
  return _ZN5CDraw20CalculateAspectRatioEv(this);
}


// ============================================================

// Address: 0x19b198
// Original: j__ZN5CDraw6SetFOVEfb
// Demangled: CDraw::SetFOV(float,bool)
// attributes: thunk
int __fastcall CDraw::SetFOV(CDraw *this, float a2, bool a3)
{
  return _ZN5CDraw6SetFOVEfb(this, a2, a3);
}


// ============================================================

// Address: 0x5a6184
// Original: _ZN5CDraw6SetFOVEfb
// Demangled: CDraw::SetFOV(float,bool)
float *__fastcall CDraw::SetFOV(CDraw *this, float a2, bool a3)
{
  float v3; // s0
  float *result; // r0

  v3 = (float)((float)((float)(*(float *)&CDraw::ms_fAspectRatio + -1.3333) * 11.0) / 0.44444) + *(float *)&this;
  result = &CDraw::ms_fFOV;
  CDraw::ms_fFOV = v3;
  return result;
}


// ============================================================

// Address: 0x5a61cc
// Original: _ZN5CDraw20CalculateAspectRatioEv
// Demangled: CDraw::CalculateAspectRatio(void)
float __fastcall CDraw::CalculateAspectRatio(CDraw *this)
{
  float Width; // s16
  float result; // r0

  CDraw::ms_fAspectRatio = 0;
  Width = (float)(unsigned int)OS_ScreenGetWidth();
  result = Width / (float)(unsigned int)OS_ScreenGetHeight();
  CDraw::ms_fAspectRatio = LODWORD(result);
  return result;
}


// ============================================================

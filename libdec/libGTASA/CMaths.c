
// Address: 0x190664
// Original: j__ZN6CMaths15InitMathsTablesEv
// Demangled: CMaths::InitMathsTables(void)
// attributes: thunk
int __fastcall CMaths::InitMathsTables(CMaths *this)
{
  return _ZN6CMaths15InitMathsTablesEv(this);
}


// ============================================================

// Address: 0x44ea48
// Original: _ZN6CMaths15InitMathsTablesEv
// Demangled: CMaths::InitMathsTables(void)
float __fastcall CMaths::InitMathsTables(CMaths *this)
{
  int v1; // r5
  float *v2; // r4
  float result; // r0

  v1 = 0;
  v2 = CMaths::ms_SinTable;
  do
  {
    result = sinf((float)v1++ * 0.024544);
    *v2++ = result;
  }
  while ( v1 != 256 );
  return result;
}


// ============================================================


// Address: 0x3614a8
// Original: _ZN9CBoundBox13IsPointWithinERK7CVector
// Demangled: CBoundBox::IsPointWithin(CVector const&)
bool __fastcall CBoundBox::IsPointWithin(float *a1, float *a2)
{
  float v2; // s2
  float v3; // s4
  _BOOL4 result; // r0

  result = 0;
  if ( *a2 >= *a1 )
  {
    v2 = a2[1];
    if ( v2 >= a1[1] )
    {
      v3 = a2[2];
      if ( v3 >= a1[2] && *a2 <= a1[3] && v2 <= a1[4] && v3 <= a1[5] )
        return 1;
    }
  }
  return result;
}


// ============================================================

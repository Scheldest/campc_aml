// ADDR: 0x1192ec
// SYMBOL: sub_1192EC
float __fastcall sub_1192EC(float *a1, _DWORD *a2)
{
  float result; // r0

  result = COERCE_FLOAT((*(int (__fastcall **)(float *, _DWORD *, _DWORD *))(a2[4] + 8))(a1, a2 + 4, a2 + 5));
  if ( *a1 == 0.0 )
  {
    result = (*(float (__fastcall **)(_DWORD *))(*a2 + 4))(a2);
    *a1 = result * 512.0;
    a1[1] = result * 512.0;
  }
  return result;
}


// ======================================================================

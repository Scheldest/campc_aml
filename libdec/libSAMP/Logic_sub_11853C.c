// ADDR: 0x1184d0
// SYMBOL: sub_1184D0
float __fastcall sub_1184D0(float *a1, _DWORD *a2)
{
  float result; // r0
  float v5; // s2
  int v6; // r0

  result = COERCE_FLOAT((*(int (__fastcall **)(float *, _DWORD *, _DWORD *))(a2[4] + 8))(a1, a2 + 4, a2 + 5));
  if ( *a1 == 0.0 )
  {
    v5 = COERCE_FLOAT((*(int (__fastcall **)(_DWORD *))(*a2 + 4))(a2));
    v6 = *a2;
    *a1 = v5 * 1024.0;
    result = (*(float (__fastcall **)(_DWORD *))(v6 + 4))(a2);
    a1[1] = result * 512.0;
  }
  return result;
}


// ======================================================================

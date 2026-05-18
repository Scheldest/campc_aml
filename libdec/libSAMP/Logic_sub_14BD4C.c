// ADDR: 0x13e766
// SYMBOL: sub_13E766
float *__fastcall sub_13E766(int a1, int a2, int a3, int a4, float a5, float a6, int a7)
{
  void *v8; // r0
  float *result; // r0

  v8 = *(void **)(a1 + 4 * a2);
  if ( v8 )
  {
    operator delete(v8);
    *(_DWORD *)(a1 + 4 * a2) = 0;
    *(_BYTE *)(a1 + a2 + 4096) = 0;
  }
  result = (float *)malloc(0x18u);
  if ( result )
  {
    *(_DWORD *)(a1 + 4 * a2) = result;
    *(_BYTE *)(a1 + a2 + 4096) = 1;
    *((_DWORD *)result + 4) = a7;
    *((_DWORD *)result + 5) = a7;
    *(_DWORD *)result = a3;
    result[1] = a6;
    result[2] = a5;
    *((_DWORD *)result + 3) = a4;
  }
  return result;
}


// ======================================================================

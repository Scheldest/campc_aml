// ADDR: 0x14b5e4
// SYMBOL: sub_14B5E4
int __fastcall sub_14B5E4(int a1, int a2, int a3, int a4)
{
  int result; // r0

  *(_BYTE *)(a1 + 304) = 1;
  if ( *(_DWORD *)(a1 + 300) )
  {
    sub_F9A3C(dword_23DEF0);
    *(_DWORD *)(a1 + 300) = 0;
  }
  result = *(_DWORD *)(a1 + 296);
  if ( result )
  {
    result = sub_F9904(dword_23DEF0, 0, (float)a2, COERCE_INT((float)a3), (float)a4, *(unsigned __int16 *)(a1 + 20), 0);
    *(float *)(a1 + 308) = (float)a2;
    *(float *)(a1 + 312) = (float)a3;
    *(float *)(a1 + 316) = (float)a4;
    *(_DWORD *)(a1 + 300) = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0x14b674
// SYMBOL: sub_14B674
int __fastcall sub_14B674(int a1)
{
  int result; // r0

  if ( *(_DWORD *)(a1 + 300) )
  {
    sub_F9A3C(dword_23DEF0);
    *(_DWORD *)(a1 + 300) = 0;
  }
  result = 0;
  *(_BYTE *)(a1 + 304) = 0;
  return result;
}


// ======================================================================

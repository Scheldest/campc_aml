// ADDR: 0x109ffc
// SYMBOL: sub_109FFC
__int64 __fastcall sub_109FFC(__int64 result)
{
  HIDWORD(result) = HIDWORD(result) != 0;
  *(_DWORD *)(*(_DWORD *)(result + 12) + 1288) = 2 * HIDWORD(result);
  *(_BYTE *)(result + 34) = BYTE4(result);
  return result;
}


// ======================================================================
// ADDR: 0x10a010
// SYMBOL: sub_10A010
int *__fastcall sub_10A010(int a1, int a2, int a3, int a4)
{
  int *result; // r0

  result = *(int **)(a1 + 12);
  if ( result )
  {
    result = (int *)sub_10837C(result);
    if ( result == (int *)((char *)&dword_0 + 1) )
      return (int *)((int (__fastcall *)(_DWORD, _DWORD, int, int, int, int))(dword_23DF24 + 5572485))(
                      *(_DWORD *)(a1 + 12),
                      0,
                      a3,
                      a2,
                      a4,
                      1);
  }
  return result;
}


// ======================================================================
// ADDR: 0x10a064
// SYMBOL: sub_10A064
int __fastcall sub_10A064(int a1, char a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 12);
  *(_BYTE *)(result + 1073) = *(_BYTE *)(result + 1073) & 0x7F | (a2 << 7);
  return result;
}


// ======================================================================
// ADDR: 0x10a078
// SYMBOL: sub_10A078
int __fastcall sub_10A078(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 12);
  if ( result )
    return ((int (*)(void))(dword_23DF24 + 5817773))();
  return result;
}


// ======================================================================
// ADDR: 0x10a098
// SYMBOL: sub_10A098
int __fastcall sub_10A098(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 12);
  if ( result )
    return ((int (*)(void))(dword_23DF24 + 5817813))();
  return result;
}


// ======================================================================

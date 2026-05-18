// ADDR: 0x1f3040
// SYMBOL: sub_1F3040
_DWORD *__fastcall sub_1F3040(_DWORD *result, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r4
  unsigned int v5; // r4

  v4 = a2[1];
  if ( v4 < a3 )
    sub_EE13C((int)"string_view::substr");
  v5 = v4 - a3;
  if ( v5 < a4 )
    a4 = v5;
  *result = *a2 + a3;
  result[1] = a4;
  return result;
}


// ======================================================================
// ADDR: 0x1f3068
// SYMBOL: sub_1F3068
int __fastcall sub_1F3068(_DWORD *a1, int a2, int a3)
{
  return sub_1F307E(*a1, a1[1], a2, a3);
}


// ======================================================================

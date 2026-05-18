// ADDR: 0x105696
// SYMBOL: sub_105696
int __fastcall sub_105696(int a1, unsigned int a2)
{
  int result; // r0
  int v3; // r2

  if ( a2 > 9 )
    return 0;
  v3 = a1 + 52 * a2;
  result = *(unsigned __int8 *)(a1 + a2 + 116);
  if ( result )
    return v3 + 128;
  return result;
}


// ======================================================================
// ADDR: 0x134d18
// SYMBOL: sub_134D18
int __fastcall sub_134D18(int a1, int a2)
{
  int result; // r0

  *(_DWORD *)(a1 + 84) = a2;
  sub_134D40();
  if ( *(_BYTE *)(a1 + 80) != 1 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 36))(a1, 1);
  result = 1;
  *(_BYTE *)(a1 + 80) = 1;
  return result;
}


// ======================================================================

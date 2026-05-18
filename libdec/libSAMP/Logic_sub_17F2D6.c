// ADDR: 0x1820c0
// SYMBOL: sub_1820C0
int __fastcall sub_1820C0(int a1, int (__fastcall ***a2)(_DWORD, int))
{
  int v3; // r0
  int v5; // r1
  int result; // r0

  v3 = *(_DWORD *)(a1 + 900);
  if ( !v3 )
    goto LABEL_7;
  v5 = 0;
  while ( *(int (__fastcall ****)(_DWORD, int))(*(_DWORD *)(a1 + 896) + 4 * v5) != a2 )
  {
    if ( v3 == ++v5 )
      goto LABEL_7;
  }
  result = v5 + 1;
  if ( v5 == -1 )
  {
LABEL_7:
    sub_182102(a1 + 896, a2);
    return (**a2)(a2, a1);
  }
  return result;
}


// ======================================================================

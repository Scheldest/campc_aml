// ADDR: 0xe09b0
// SYMBOL: sub_E09B0
int __fastcall sub_E09B0(int a1, __int64 *a2, int a3, int a4)
{
  int v6; // r0
  int result; // r0

  v6 = sub_E0408((int)a2, a3, a4);
  if ( v6 >= 0 )
    return sub_DCD26(a1, a2, v6);
  result = 0;
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}


// ======================================================================

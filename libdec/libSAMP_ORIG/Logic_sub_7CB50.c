// ADDR: 0x7157c
// SYMBOL: sub_7157C
int __fastcall sub_7157C(int a1, int a2, int a3, int a4, int a5, float a6)
{
  int v6; // r6
  int v9; // r3

  v6 = *(_DWORD *)(a1 + 4);
  v9 = sub_88A34(a4, a2, a3);
  if ( a5 )
    return sub_9D624(v6, a2, a3, v9, 0.0, 15);
  else
    return sub_9D568(v6, a2, a3, v9, 0.0, 15, a6);
}


// ======================================================================
// ADDR: 0x7c960
// SYMBOL: sub_7C960
_DWORD *__fastcall sub_7C960(_DWORD *result, int a2)
{
  int i; // r5
  int v3; // r6

  v3 = result[19];
  for ( i = result[18]; i != v3; i += 4 )
  {
    result = *(_DWORD **)i;
    if ( *(_BYTE *)(*(_DWORD *)i + 8) )
      result = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int))(*result + 4))(result, a2);
  }
  return result;
}


// ======================================================================

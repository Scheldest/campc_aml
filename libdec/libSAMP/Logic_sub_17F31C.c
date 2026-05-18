// ADDR: 0x181aca
// SYMBOL: sub_181ACA
unsigned __int8 *__fastcall sub_181ACA(int a1, int a2, int a3, const void *a4, signed int a5)
{
  unsigned __int8 *v7; // r6
  unsigned __int8 *result; // r0
  int v9; // [sp+8h] [bp-18h] BYREF
  int v10; // [sp+Ch] [bp-14h]

  v9 = a2;
  v10 = a3;
  if ( !sub_17E580((int)&v9, a1 + 564) )
  {
    result = (unsigned __int8 *)sub_181978(a1, v9, v10, 0, 1);
    if ( !result )
      return result;
    v7 = result + 1796;
    sub_17D55E((_DWORD *)result + 449);
    return sub_17D566(v7, a4, a5);
  }
  v7 = (unsigned __int8 *)(a1 + 12);
  result = (unsigned __int8 *)sub_17D55E(v7);
  if ( a4 && a5 >= 1 )
    return sub_17D566(v7, a4, a5);
  return result;
}


// ======================================================================

// ADDR: 0xebf22
// SYMBOL: sub_EBF22
_DWORD *__fastcall sub_EBF22(int **a1, int a2, int a3, int a4)
{
  _DWORD *v6; // r6
  _DWORD *result; // r0
  _DWORD *v8; // [sp+4h] [bp-24h] BYREF
  _BYTE v9[4]; // [sp+10h] [bp-18h] BYREF
  int v10[5]; // [sp+14h] [bp-14h] BYREF

  v6 = (_DWORD *)sub_EBF60(a1, a2, v10, v9, a3);
  result = (_DWORD *)*v6;
  if ( !*v6 )
  {
    sub_EC07A(&v8, a1, a4);
    sub_EA246(a1, v10[0], v6, v8);
    return v8;
  }
  return result;
}


// ======================================================================

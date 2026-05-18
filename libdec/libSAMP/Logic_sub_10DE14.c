// ADDR: 0x10e0bc
// SYMBOL: sub_10E0BC
int __fastcall sub_10E0BC(int a1, int a2, int a3, int a4)
{
  int *v6; // r6
  int result; // r0
  _DWORD v8[3]; // [sp+4h] [bp-24h] BYREF
  _BYTE v9[4]; // [sp+10h] [bp-18h] BYREF
  _DWORD v10[5]; // [sp+14h] [bp-14h] BYREF

  v6 = (int *)sub_10E0FA(a1, a2, v10, v9, a3);
  result = *v6;
  if ( !*v6 )
  {
    sub_10E1CC(v8, a1, a4);
    sub_10E21C(a1, v10[0], v6, v8[0]);
    return v8[0];
  }
  return result;
}


// ======================================================================

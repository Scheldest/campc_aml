// ADDR: 0x1eeba0
// SYMBOL: sub_1EEBA0
int __fastcall sub_1EEBA0(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r0
  _DWORD v9[3]; // [sp+4h] [bp-24h] BYREF
  char v10; // [sp+10h] [bp-18h] BYREF
  int v11; // [sp+14h] [bp-14h]

  v6 = operator new(0x30u);
  v9[2] = 1;
  v9[1] = &v10;
  v7 = sub_1EEC10(v6, a2, a3);
  *a1 = v7 + 12;
  a1[1] = v7;
  v9[0] = 0;
  sub_1EE95C((int)v9);
  return v11;
}


// ======================================================================

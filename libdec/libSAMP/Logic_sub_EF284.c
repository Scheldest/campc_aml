// ADDR: 0xefce0
// SYMBOL: sub_EFCE0
int __fastcall sub_EFCE0(int a1, int a2, int a3)
{
  int v5; // r4
  _UNKNOWN **v7; // [sp+8h] [bp-218h] BYREF
  void *v8; // [sp+Ch] [bp-214h]
  int v9; // [sp+10h] [bp-210h]
  int v10; // [sp+14h] [bp-20Ch]
  _BYTE v11[520]; // [sp+18h] [bp-208h] BYREF

  v10 = 500;
  v8 = v11;
  v9 = 0;
  v7 = &off_22A5C8;
  sub_EFD50(&v7);
  v5 = sub_EFEA0(a1, v8, v9, a3);
  if ( v8 != v11 )
    operator delete(v8);
  return v5;
}


// ======================================================================

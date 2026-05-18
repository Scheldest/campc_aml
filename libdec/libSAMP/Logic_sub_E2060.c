// ADDR: 0xe211c
// SYMBOL: sub_E211C
int __fastcall sub_E211C(int a1, char *a2, int a3, int a4, int a5, unsigned __int8 *a6)
{
  int v8; // r4
  _UNKNOWN **v10; // [sp+8h] [bp-220h] BYREF
  void *v11; // [sp+Ch] [bp-21Ch]
  int v12; // [sp+10h] [bp-218h]
  int v13; // [sp+14h] [bp-214h]
  _BYTE v14[528]; // [sp+18h] [bp-210h] BYREF

  if ( !a6[12] )
    return sub_E1E70(a1, a2, a3, a4, a5);
  v13 = 500;
  v11 = v14;
  v12 = 0;
  v10 = &off_22A5C8;
  sub_E1E70((int)&v10, a2, a3, a4, a5);
  sub_DDA0C(a6, a1, (char *)v11, a4);
  v8 = sub_DCF1C((int)v11 + a4, (int)v11 + v12, a1);
  if ( v11 != v14 )
    operator delete(v11);
  return v8;
}


// ======================================================================

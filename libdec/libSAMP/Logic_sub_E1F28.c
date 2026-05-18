// ADDR: 0xe1fbc
// SYMBOL: sub_E1FBC
int __fastcall sub_E1FBC(int a1, char *a2, int a3, int a4, unsigned __int8 *a5)
{
  int v7; // r4
  char v9; // [sp+7h] [bp-221h] BYREF
  _UNKNOWN **v10; // [sp+8h] [bp-220h] BYREF
  void *v11; // [sp+Ch] [bp-21Ch]
  int v12; // [sp+10h] [bp-218h]
  int v13; // [sp+14h] [bp-214h]
  _BYTE v14[528]; // [sp+18h] [bp-210h] BYREF

  if ( a5[12] )
  {
    v13 = 500;
    v11 = v14;
    v12 = 0;
    v10 = &off_22A5C8;
    sub_DCF30((int)&v10, a2, &a2[a3]);
    v9 = 48;
    sub_DE834((int)&v10, a4, &v9);
    v7 = sub_DDA0C(a5, a1, (char *)v11, v12);
    if ( v11 != v14 )
      operator delete(v11);
  }
  else
  {
    sub_DCF30(a1, a2, &a2[a3]);
    LOBYTE(v10) = 48;
    return sub_DE834(a1, a4, (char *)&v10);
  }
  return v7;
}


// ======================================================================

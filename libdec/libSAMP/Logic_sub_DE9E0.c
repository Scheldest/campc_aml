// ADDR: 0xdea74
// SYMBOL: sub_DEA74
int __fastcall sub_DEA74(int a1, unsigned int a2, int a3, int a4, unsigned __int8 *a5)
{
  int v7; // r4
  int v8; // r0
  _UNKNOWN **v10; // [sp+4h] [bp-234h] BYREF
  void *v11; // [sp+8h] [bp-230h]
  int v12; // [sp+Ch] [bp-22Ch]
  int v13; // [sp+10h] [bp-228h]
  _BYTE v14[504]; // [sp+14h] [bp-224h] BYREF
  _DWORD v15[2]; // [sp+20Ch] [bp-2Ch] BYREF
  _DWORD v16[9]; // [sp+214h] [bp-24h] BYREF

  if ( a5[12] )
  {
    v13 = 500;
    v11 = v14;
    v12 = 0;
    v10 = &off_22A5C8;
    sub_DCEB4(v15, (int)v16, a2, a3);
    sub_DCF1C((int)v16, v15[1], (int)&v10);
    LOBYTE(v16[0]) = 48;
    sub_DE834((int)&v10, a4, (char *)v16);
    v7 = sub_DDA0C(a5, a1, (char *)v11, v12);
    if ( v11 != v14 )
      operator delete(v11);
  }
  else
  {
    sub_DCEB4(v16, (int)&v10, a2, a3);
    v8 = sub_DCF1C((int)&v10, v16[1], a1);
    LOBYTE(v10) = 48;
    return sub_DE834(v8, a4, (char *)&v10);
  }
  return v7;
}


// ======================================================================

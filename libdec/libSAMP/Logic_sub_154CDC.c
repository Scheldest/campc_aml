// ADDR: 0x154d48
// SYMBOL: sub_154D48
int __fastcall sub_154D48(int a1, int a2)
{
  _BYTE v5[284]; // [sp+4h] [bp-11Ch] BYREF

  sub_17D4A8(v5);
  if ( a2 )
    sub_17D84A(v5);
  else
    sub_17D828(v5);
  sub_15535A(a1, 4, v5);
  return sub_17D542(v5);
}


// ======================================================================
// ADDR: 0x157b34
// SYMBOL: sub_157B34
int __fastcall sub_157B34(int a1, int a2, size_t a3)
{
  int v6; // r6
  int v7; // r1
  int v8; // r2
  int v9; // r1
  int v10; // r1
  int *v11; // r8
  int v12; // t1
  int v13; // r1
  int v15; // [sp+4h] [bp-24h] BYREF
  int v16; // [sp+8h] [bp-20h] BYREF
  _DWORD v17[7]; // [sp+Ch] [bp-1Ch] BYREF

  sub_157C88();
  sub_159258(v17);
  v6 = 0;
  if ( v17[0] != v17[1] )
  {
    v16 = 0;
    sub_1592BC((int)&v15, (int)v17, a2, a3);
    v7 = v15;
    v8 = v16;
    v15 = 0;
    v16 = v7;
    if ( v8 )
    {
      sub_15614C((int)&v16, v8);
      v9 = v15;
      v15 = 0;
      if ( v9 )
        sub_15614C((int)&v15, v9);
      v7 = v16;
    }
    if ( v7 )
    {
      sub_157CB8(a1);
      v12 = *(_DWORD *)(a1 + 4);
      v11 = (int *)(a1 + 4);
      v10 = v12;
      *v11 = v16;
      v16 = 0;
      if ( v12 )
      {
        sub_15614C((int)v11, v10);
        v13 = v16;
        v16 = 0;
        if ( v13 )
          sub_15614C((int)&v16, v13);
      }
      v6 = 1;
    }
    else
    {
      v6 = 0;
    }
  }
  sub_157F44(v17);
  return v6;
}


// ======================================================================

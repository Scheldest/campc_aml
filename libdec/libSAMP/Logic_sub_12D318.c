// ADDR: 0x12d3e0
// SYMBOL: sub_12D3E0
void __fastcall sub_12D3E0(int a1, int a2, __int64 *a3)
{
  __int64 v5; // d17
  int v6; // r0
  double v7; // [sp+0h] [bp-70h] BYREF
  void *v8; // [sp+8h] [bp-68h]
  int v9; // [sp+10h] [bp-60h] BYREF
  _BYTE v10[8]; // [sp+14h] [bp-5Ch] BYREF
  void *v11; // [sp+1Ch] [bp-54h]
  unsigned __int8 v12; // [sp+20h] [bp-50h]
  void *v13; // [sp+28h] [bp-48h]
  double v14; // [sp+2Ch] [bp-44h]
  void *v15; // [sp+34h] [bp-3Ch]
  __int64 v16; // [sp+38h] [bp-38h]
  __int64 v17; // [sp+40h] [bp-30h]

  sub_22178C((int)v10, 0x44u);
  v9 = 1;
  std::string::operator=(v10);
  v5 = a3[1];
  v16 = *a3;
  v17 = v5;
  sub_12D67C(&v7);
  if ( LOBYTE(v14) << 31 )
    operator delete(v15);
  v15 = v8;
  v14 = v7;
  v6 = sub_12D6B4(a1 + 96, &v9);
  sub_12D75C(v6, v10);
  if ( LOBYTE(v14) << 31 )
    operator delete(v15);
  if ( v12 << 31 )
    operator delete(v13);
  if ( v10[0] << 31 )
    operator delete(v11);
}


// ======================================================================

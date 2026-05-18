// ADDR: 0x1524f4
// SYMBOL: sub_1524F4
int __fastcall sub_1524F4(_DWORD *a1, char a2, int a3)
{
  int v6; // r0
  _BYTE v8[279]; // [sp+0h] [bp-128h] BYREF
  _BYTE v9[17]; // [sp+117h] [bp-11h] BYREF

  v6 = sub_17D4A8(v8);
  v9[0] = a2;
  sub_17D628(v6, v9, 8, 1);
  if ( a3 )
    sub_17D84A(v8);
  else
    sub_17D828(v8);
  sub_15535A(*a1, 5, v8);
  return sub_17D542(v8);
}


// ======================================================================
// ADDR: 0x15e468
// SYMBOL: sub_15E468
int sub_15E468()
{
  if ( dword_23DEEC && *(_DWORD *)(dword_23DEEC + 132) )
    return (unsigned __int8)word_3141DC;
  else
    return 0;
}


// ======================================================================
// ADDR: 0x15e484
// SYMBOL: sub_15E484
int sub_15E484()
{
  if ( dword_23DEEC && *(_DWORD *)(dword_23DEEC + 132) )
    return (unsigned __int8)byte_3141E4;
  else
    return 0;
}


// ======================================================================
// ADDR: 0x15e4a0
// SYMBOL: sub_15E4A0
int __fastcall sub_15E4A0(int a1)
{
  int v1; // r1
  unsigned int v2; // r0

  if ( !dword_23DEEC || !*(_DWORD *)(dword_23DEEC + 132) )
    return 0;
  v1 = (unsigned __int8)byte_3141E4;
  v2 = __clz((unsigned __int8)word_3141DC - a1);
  if ( byte_3141E4 )
    v1 = 1;
  return (v2 >> 5) & v1;
}


// ======================================================================

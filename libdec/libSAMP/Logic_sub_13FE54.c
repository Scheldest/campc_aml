// ADDR: 0x1028c8
// SYMBOL: sub_1028C8
int __fastcall sub_1028C8(int a1)
{
  unsigned int v1; // r1
  int v3; // r0

  v1 = *(unsigned __int16 *)(a1 + 14);
  if ( v1 == 0xFFFF )
  {
    if ( *(unsigned __int16 *)(a1 + 12) != 0xFFFF )
      return 1;
    return *(_BYTE *)(a1 + 708) & 1;
  }
  if ( dword_23DEF4 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 16);
    if ( v3 )
    {
      if ( v1 <= 0x3E8 )
      {
        if ( *(_BYTE *)(v3 + v1 + 4) )
        {
          a1 = *(_DWORD *)(v3 + 4 * v1 + 1004);
          if ( a1 )
            return *(_BYTE *)(a1 + 708) & 1;
        }
      }
    }
  }
  return 0;
}


// ======================================================================
// ADDR: 0x104330
// SYMBOL: sub_104330
int __fastcall sub_104330(int a1)
{
  int v2; // r0
  int v3; // r1
  int result; // r0
  int v5; // r1
  float v6; // s2
  int v7; // [sp+20h] [bp-58h] BYREF
  _BYTE v8[44]; // [sp+24h] [bp-54h] BYREF
  double v9; // [sp+50h] [bp-28h] BYREF
  float v10; // [sp+58h] [bp-20h]
  double v11; // [sp+60h] [bp-18h] BYREF
  float v12; // [sp+68h] [bp-10h]

  v2 = *(_DWORD *)(a1 + 92);
  if ( !v2 || *(unsigned __int8 *)(v2 + 1157) << 31 )
    return 0;
  v3 = sub_1082F4(*(_DWORD *)(a1 + 8));
  result = 0;
  if ( v3 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 92) + 20);
    v12 = *(float *)(v5 + 56);
    v9 = *(double *)(v5 + 48);
    v7 = 0;
    v6 = (float)(v12 + -0.25) + -1.75;
    v11 = v9;
    v12 = v12 + -0.25;
    v10 = v6;
    off_24754C(&v11, &v9, v8, &v7, 0, 1, 0, 1, 0, 0, 0, 0);
    return v7;
  }
  return result;
}


// ======================================================================
// ADDR: 0x106ab0
// SYMBOL: sub_106AB0
int __fastcall sub_106AB0(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  int result; // r0
  int v6; // r0

  if ( !sub_1082F4(*(_DWORD *)(a1 + 8)) )
    return 0;
  v2 = *(_DWORD *)(a1 + 92);
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(v2 + 1088);
  if ( !v3 || !*(_DWORD *)(v3 + 16) )
    return 0;
  v4 = sub_10944E();
  result = 2;
  if ( v4 >= 712 )
  {
    if ( v4 == 712 )
      return result;
    v6 = 713;
  }
  else
  {
    if ( v4 == 700 )
      return result;
    v6 = 701;
  }
  return v4 == v6;
}


// ======================================================================
// ADDR: 0x106af8
// SYMBOL: sub_106AF8
bool __fastcall sub_106AF8(int a1)
{
  int v2; // r0
  int v3; // r0
  _BOOL4 result; // r0

  result = 0;
  if ( sub_1082F4(*(_DWORD *)(a1 + 8)) )
  {
    v2 = *(_DWORD *)(a1 + 92);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 1088);
      if ( v3 )
      {
        if ( *(_DWORD *)(v3 + 16) && sub_10944E() == 704 )
          return 1;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x106b26
// SYMBOL: sub_106B26
bool __fastcall sub_106B26(int a1)
{
  int v1; // r0
  int v2; // r0
  _BOOL4 result; // r0

  v1 = *(_DWORD *)(a1 + 92);
  result = 0;
  if ( v1 )
  {
    if ( !(*(unsigned __int8 *)(v1 + 1157) << 31) )
    {
      v2 = *(_DWORD *)(v1 + 1088);
      if ( v2 )
      {
        if ( *(_DWORD *)(v2 + 4) && sub_10944E() == 208 )
          return 1;
      }
    }
  }
  return result;
}


// ======================================================================

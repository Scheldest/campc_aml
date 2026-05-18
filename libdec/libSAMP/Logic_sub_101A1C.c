// ADDR: 0xf885c
// SYMBOL: sub_F885C
int __fastcall sub_F885C(int a1, int a2)
{
  int result; // r0
  _BYTE v3[48]; // [sp+8h] [bp-50h] BYREF
  float v4; // [sp+38h] [bp-20h] BYREF
  float v5; // [sp+3Ch] [bp-1Ch]
  float v6; // [sp+40h] [bp-18h]

  *(_DWORD *)(a1 + 12) = a2;
  result = *(_DWORD *)(a1 + 12);
  if ( result )
  {
    result = sub_F8910(result, v3);
    if ( v4 > -20000.0 && v4 < 20000.0 && v5 > -20000.0 && v5 < 20000.0 && v6 > -10000.0 && v6 < 100000.0 )
      return sub_F871C(1, &v4, &v4, 100, 1);
  }
  return result;
}


// ======================================================================
// ADDR: 0x108454
// SYMBOL: sub_108454
int __fastcall sub_108454(unsigned int a1)
{
  unsigned __int16 *v1; // r0

  if ( a1 <= 0x4E20 )
    v1 = (unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(dword_23DF24 + 6788820) + 4 * a1) + 30);
  else
    v1 = (_WORD *)(&dword_1C + 2);
  return *v1;
}


// ======================================================================
// ADDR: 0x108cb8
// SYMBOL: sub_108CB8
int sub_108CB8()
{
  return ((int (*)(void))(dword_23DF24 + 1947493))();
}


// ======================================================================

// ADDR: 0xf60b0
// SYMBOL: sub_F60B0
int __fastcall sub_F60B0(int a1)
{
  int v2; // r5
  _BOOL4 v3; // r1

  v2 = dword_23FCE0[0];
  v3 = sub_163C02(dword_23FCE0[0]) && *(float *)(v2 + 172) != 0.0 && byte_237998;
  return sub_163C08(a1, v3);
}


// ======================================================================
// ADDR: 0x103960
// SYMBOL: sub_103960
int sub_103960()
{
  return ((int (*)(void))(dword_23DF24 + 4164773))();
}


// ======================================================================
// ADDR: 0x163c02
// SYMBOL: sub_163C02
int __fastcall sub_163C02(int a1)
{
  return *(unsigned __int8 *)(a1 + 77);
}


// ======================================================================
// ADDR: 0x163c08
// SYMBOL: sub_163C08
int __fastcall sub_163C08(int result, char a2)
{
  *(_BYTE *)(result + 77) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x163c0e
// SYMBOL: sub_163C0E
int __fastcall sub_163C0E(int a1)
{
  return *(_DWORD *)(a1 + 128);
}


// ======================================================================

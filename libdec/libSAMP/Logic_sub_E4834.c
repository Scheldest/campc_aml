// ADDR: 0xea114
// SYMBOL: sub_EA114
int __fastcall sub_EA114(int a1)
{
  int v2; // r4

  v2 = operator new(0xCu);
  std::string::basic_string(v2, a1);
  return v2;
}


// ======================================================================
// ADDR: 0xebe7c
// SYMBOL: sub_EBE7C
int __fastcall sub_EBE7C(int a1)
{
  int v2; // r4

  v2 = operator new(0xCu);
  sub_EBE9E(v2, a1);
  return v2;
}


// ======================================================================
// ADDR: 0xec0ec
// SYMBOL: sub_EC0EC
int __fastcall sub_EC0EC(int a1)
{
  int v2; // r4

  v2 = operator new(0xCu);
  sub_EC10E(v2, a1);
  return v2;
}


// ======================================================================
// ADDR: 0xec194
// SYMBOL: sub_EC194
int __fastcall sub_EC194(int a1)
{
  int v2; // r4
  __int64 v3; // d16
  int result; // r0

  v2 = operator new(0x20u);
  sub_EC1C2(v2);
  v3 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(v2 + 24) = *(_BYTE *)(a1 + 24);
  result = v2;
  *(_QWORD *)(v2 + 16) = v3;
  return result;
}


// ======================================================================

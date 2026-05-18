// ADDR: 0xe0acc
// SYMBOL: sub_E0ACC
int __fastcall sub_E0ACC(int a1, int a2)
{
  int result; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  sub_E093C((int)v4, a1, a2);
  result = sub_E0AF0(v4[0], v4[1], v4[2], v4[3]);
  *(_DWORD *)(*(_DWORD *)a1 + 4) = result;
  return result;
}


// ======================================================================
// ADDR: 0xe0b5c
// SYMBOL: sub_E0B5C
int __fastcall sub_E0B5C(int *a1)
{
  int result; // r0
  unsigned __int64 v3; // [sp+0h] [bp-18h] BYREF
  int v4; // [sp+8h] [bp-10h]

  sub_E098C((int)&v3, a1[2]);
  result = sub_E0AF0(v3, v4);
  *(_DWORD *)(*a1 + 4) = result;
  return result;
}


// ======================================================================

// ADDR: 0xe08ac
// SYMBOL: sub_E08AC
int __fastcall sub_E08AC(int **a1, int a2)
{
  int result; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  sub_E093C(v4, a1, a2);
  result = sub_E08D0(v4[0], v4[1], v4[2], v4[3]);
  **a1 = result;
  return result;
}


// ======================================================================
// ADDR: 0xe0968
// SYMBOL: sub_E0968
int __fastcall sub_E0968(int a1, int a2, int a3)
{
  int result; // r0
  unsigned __int64 v5; // [sp+0h] [bp-18h] BYREF
  int v6; // [sp+8h] [bp-10h]

  sub_E098C(&v5, *(_DWORD *)(a1 + 8), a2, a3);
  result = sub_E08D0(v5, v6);
  **(_DWORD **)a1 = result;
  return result;
}


// ======================================================================

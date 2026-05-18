// ADDR: 0x7e314
// SYMBOL: sub_7E314
int __fastcall sub_7E314(int a1, int a2)
{
  void *v4; // r6
  int v5; // r0

  sub_85278();
  v4 = off_1ABF5C;
  v5 = sub_7DB44(a2);
  return ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD, int, int, int))v4)(
           v5,
           0,
           *(float *)(a1 + 88) * 0.1,
           *(_DWORD *)(a1 + 88),
           -1,
           -1,
           -1082130432);
}


// ======================================================================

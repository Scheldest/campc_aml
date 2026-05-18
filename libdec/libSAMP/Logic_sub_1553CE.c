// ADDR: 0x152400
// SYMBOL: sub_152400
int __fastcall sub_152400(int a1, int a2)
{
  *(_DWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_WORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 28) = 1065353216;
  *(_DWORD *)(a1 + 48) = 1065353216;
  sub_15E264(a1 + 52, 48000, 2);
  *(_WORD *)(a1 + 82) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  return a1;
}


// ======================================================================
// ADDR: 0x15246e
// SYMBOL: sub_15246E
int __fastcall sub_15246E(int a1, int a2)
{
  int v2; // r4

  v2 = a1 + 52;
  *(_DWORD *)(a1 + 8) = a2;
  sub_15E2E2(a1 + 52, 0);
  sub_15E2EE(v2, 1);
  sub_15E2FA(v2, 8000);
  return sub_15E312(v2, 9);
}


// ======================================================================

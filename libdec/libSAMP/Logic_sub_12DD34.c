// ADDR: 0x12e3be
// SYMBOL: sub_12E3BE
int __fastcall sub_12E3BE(int a1, int a2)
{
  int v2; // r4
  _DWORD *v5; // r0

  v2 = a1 + 4;
  std::mutex::lock((std::mutex *)(a1 + 4));
  v5 = (_DWORD *)sub_12E0BA((unsigned int **)(a1 + 8));
  *(_DWORD *)(*(_DWORD *)a2 + 4) = (v5[1] - *v5) >> 3;
  sub_12E5A0(v5, a2);
  return sub_224304(v2);
}


// ======================================================================
// ADDR: 0x12e404
// SYMBOL: sub_12E404
int __fastcall sub_12E404(int a1, int a2, int a3)
{
  *(_DWORD *)(a1 + 28) = a2;
  *(_WORD *)(a1 + 24) = 1;
  *(_DWORD *)a1 = &off_22DC10;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = &off_22DC38;
  *(_DWORD *)(a1 + 20) = 0;
  sub_12E574(a1 + 32, a3);
  return a1;
}


// ======================================================================

// ADDR: 0x149210
// SYMBOL: sub_149210
int __fastcall sub_149210(int a1)
{
  int v2; // r0

  *(_BYTE *)(a1 + 284) = 1;
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 20) = 0xFFFF;
  *(_DWORD *)(a1 + 24) = 0;
  *(_WORD *)(a1 + 17) = -256;
  v2 = a1 + 76;
  *(_QWORD *)v2 = 1065353216LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  v2 += 58;
  *(_QWORD *)v2 = 1065353216LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  v2 += 58;
  *(_QWORD *)v2 = 1065353216LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 300) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(a1 + 288) = sub_F0B30();
  sub_149278(a1);
  return a1;
}


// ======================================================================

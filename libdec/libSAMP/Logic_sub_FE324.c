// ADDR: 0xfe350
// SYMBOL: sub_FE350
int __fastcall sub_FE350(std::mutex *a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r2
  int v6; // r3

  std::mutex::lock(a1);
  v4 = (_DWORD *)operator new(0xCu);
  v5 = *((_DWORD *)a1 + 1);
  v6 = *((_DWORD *)a1 + 3);
  *v4 = v5;
  v4[1] = (char *)a1 + 4;
  *((_DWORD *)a1 + 1) = v4;
  v4[2] = a2;
  *(_DWORD *)(v5 + 4) = v4;
  *((_DWORD *)a1 + 3) = v6 + 1;
  return sub_224304(a1);
}


// ======================================================================

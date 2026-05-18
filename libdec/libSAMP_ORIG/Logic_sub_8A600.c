// ADDR: 0x8aa58
// SYMBOL: sub_8AA58
int __fastcall sub_8AA58(int a1, int a2)
{
  *(_DWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 44) = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 1;
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  sub_9BAD4(a1);
  return a1;
}


// ======================================================================
// ADDR: 0xaea38
// SYMBOL: sub_AEA38
_DWORD *__fastcall sub_AEA38(_DWORD *result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  return result;
}


// ======================================================================

// ADDR: 0x7b698
// SYMBOL: sub_7B698
int __fastcall sub_7B698(int a1, __int64 *a2, int a3)
{
  int v6; // r0
  __int64 v7; // r0
  __int64 v8; // d17

  v6 = sub_7C360();
  sub_71C4C(v6 + 84, a2, a3);
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 84) = &off_110FDC;
  *(_DWORD *)a1 = &off_110F98;
  sub_7C0F8(a2);
  v7 = *a2;
  v8 = *a2;
  *(_QWORD *)(a1 + 20) = *a2;
  *(_QWORD *)(a1 + 28) = v8;
  *(_QWORD *)(a1 + 36) = v7;
  return a1;
}


// ======================================================================

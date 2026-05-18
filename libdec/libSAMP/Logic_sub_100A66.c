// ADDR: 0xfb4ac
// SYMBOL: sub_FB4AC
int __fastcall sub_FB4AC(int a1)
{
  int v2; // r0
  __int64 v3; // kr00_8

  v3 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)a1 = &off_22AF88;
  while ( v2 != (_DWORD)v3 )
    v2 = sub_100ABA(v2 - 8);
  *(_DWORD *)(a1 + 12) = v3;
  sub_100AF0(a1 + 8);
  return a1;
}


// ======================================================================

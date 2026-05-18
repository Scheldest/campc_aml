// ADDR: 0x113328
// SYMBOL: sub_113328
int __fastcall sub_113328(int a1)
{
  int v2; // r0
  __int64 v3; // kr00_8

  v3 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)a1 = &off_22B7A0;
  while ( v2 != (_DWORD)v3 )
    v2 = sub_1133AC(v2 - 8);
  *(_DWORD *)(a1 + 12) = v3;
  sub_1133E2(a1 + 8);
  return a1;
}


// ======================================================================

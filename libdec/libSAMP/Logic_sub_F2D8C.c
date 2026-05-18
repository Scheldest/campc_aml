// ADDR: 0xf250c
// SYMBOL: sub_F250C
int __fastcall sub_F250C(int a1)
{
  int v2; // r0
  __int64 v3; // kr00_8

  v3 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)a1 = &off_22ABB8;
  while ( v2 != (_DWORD)v3 )
    v2 = sub_F2DE0(v2 - 8);
  *(_DWORD *)(a1 + 12) = v3;
  sub_F2E16(a1 + 8);
  return a1;
}


// ======================================================================

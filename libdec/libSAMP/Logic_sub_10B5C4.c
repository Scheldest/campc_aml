// ADDR: 0x116bb0
// SYMBOL: sub_116BB0
int __fastcall sub_116BB0(int a1)
{
  void *v3[5]; // [sp+4h] [bp-14h] BYREF

  sub_DC6DC(v3, "arzhud_bg_new");
  sub_11754C(a1, v3);
  if ( LOBYTE(v3[0]) << 31 )
    operator delete(v3[2]);
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)a1 = &off_22BCB8;
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_QWORD *)(a1 + 44) = 0LL;
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_QWORD *)(a1 + 60) = 0LL;
  *(_DWORD *)(a1 + 68) = 0;
  return a1;
}


// ======================================================================

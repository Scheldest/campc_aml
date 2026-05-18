// ADDR: 0x133f78
// SYMBOL: sub_133F78
int __fastcall sub_133F78(int a1, int a2, _QWORD *a3, _QWORD *a4)
{
  void *v9[9]; // [sp+4h] [bp-24h] BYREF

  sub_DC6DC(v9, &byte_8F794);
  sub_13CE34(a1, v9, 0);
  if ( LOBYTE(v9[0]) << 31 )
    operator delete(v9[2]);
  *(_DWORD *)(a1 + 112) = a2;
  *(_DWORD *)a1 = &off_22E1DC;
  *(_QWORD *)(a1 + 116) = *a3;
  *(_QWORD *)(a1 + 124) = *a4;
  return a1;
}


// ======================================================================
// ADDR: 0x134570
// SYMBOL: sub_134570
void __fastcall sub_134570(_DWORD **a1, _DWORD *a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  const std::nothrow_t *v5; // r1

  v3 = *a1;
  *a1 = a2;
  if ( v3 )
  {
    v4 = sub_133FF0(v3);
    operator delete(v4, v5);
  }
}


// ======================================================================

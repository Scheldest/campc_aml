// ADDR: 0x12ea0c
// SYMBOL: sub_12EA0C
int __fastcall sub_12EA0C(int a1, int a2, _QWORD *a3, _QWORD *a4)
{
  void *v9[9]; // [sp+4h] [bp-24h] BYREF

  sub_DC6DC(v9, &byte_8F794);
  sub_13CE34(a1, v9, 0);
  if ( LOBYTE(v9[0]) << 31 )
    operator delete(v9[2]);
  *(_DWORD *)(a1 + 112) = a2;
  *(_DWORD *)a1 = &off_22DCA4;
  *(_QWORD *)(a1 + 116) = *a3;
  *(_QWORD *)(a1 + 124) = *a4;
  return a1;
}


// ======================================================================
// ADDR: 0x12eb2c
// SYMBOL: sub_12EB2C
int __fastcall sub_12EB2C(int a1, int a2, _QWORD *a3, _QWORD *a4)
{
  void *v9[9]; // [sp+4h] [bp-24h] BYREF

  sub_DC6DC(v9, &byte_8F794);
  sub_13CE34(a1, v9, 0);
  if ( LOBYTE(v9[0]) << 31 )
    operator delete(v9[2]);
  *(_DWORD *)(a1 + 112) = a2;
  *(_DWORD *)a1 = &off_22DCDC;
  *(_QWORD *)(a1 + 116) = *a3;
  *(_QWORD *)(a1 + 124) = *a4;
  return a1;
}


// ======================================================================
// ADDR: 0x12ec4a
// SYMBOL: sub_12EC4A
void __fastcall sub_12EC4A(_DWORD **a1, _DWORD *a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  const std::nothrow_t *v5; // r1

  v3 = *a1;
  *a1 = a2;
  if ( v3 )
  {
    v4 = sub_12EA84(v3);
    operator delete(v4, v5);
  }
}


// ======================================================================
// ADDR: 0x12ec64
// SYMBOL: sub_12EC64
void __fastcall sub_12EC64(_DWORD **a1, _DWORD *a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  const std::nothrow_t *v5; // r1

  v3 = *a1;
  *a1 = a2;
  if ( v3 )
  {
    v4 = sub_12EBA4(v3);
    operator delete(v4, v5);
  }
}


// ======================================================================

// ADDR: 0xf84a0
// SYMBOL: sub_F84A0
int sub_F84A0()
{
  int v0; // r0

  v0 = dword_2402E0;
  *(_DWORD *)(dword_2402E0 + 312) = 1148829696;
  *(_DWORD *)(v0 + 316) = 1148829696;
  v0 += 276;
  *(_QWORD *)v0 = 0x4479C0004479C000LL;
  *(_QWORD *)(v0 + 8) = 0x4479C0004479C000LL;
  v0 += 16;
  *(_QWORD *)v0 = 0x4479C0004479C000LL;
  *(_QWORD *)(v0 + 8) = 0x4479C0004479C000LL;
  *(_DWORD *)(v0 + 16) = 1148829696;
  return sub_F83C8();
}


// ======================================================================
// ADDR: 0xf9b50
// SYMBOL: sub_F9B50
int *__fastcall sub_F9B50(int a1, int a2)
{
  int *result; // r0

  result = &dword_23799C;
  dword_23799C = a2 ^ 0x80000000;
  return result;
}


// ======================================================================
// ADDR: 0xfa2a8
// SYMBOL: sub_FA2A8
int __fastcall sub_FA2A8(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(dword_25C9C8 + 4);
  *(_DWORD *)(result + 48) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x10431c
// SYMBOL: sub_10431C
int __fastcall sub_10431C(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 92);
  if ( result )
    *(_DWORD *)(result + 1356) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x12d490
// SYMBOL: sub_12D490
void sub_12D490(int a1, const char *a2, ...)
{
  __int64 v3[2]; // [sp+8h] [bp-230h] BYREF
  void *v4[4]; // [sp+18h] [bp-220h] BYREF
  char var210[536]; // [sp+28h] [bp-210h] BYREF
  va_list va; // [sp+240h] [bp+8h] BYREF

  va_start(va, a2);
  va_copy(&v4[3], va);
  _vsprintf_chk(var210, 0, 512, a2, va);
  sub_DC6DC(v4, var210);
  v3[0] = 0x3F48C8CA00000000LL;
  v3[1] = 0x3F8000003F48C8CALL;
  sub_12D3E0(a1, (int)v4, v3);
  if ( LOBYTE(v4[0]) << 31 )
    operator delete(v4[2]);
}


// ======================================================================
// ADDR: 0x13f01c
// SYMBOL: sub_13F01C
int __fastcall sub_13F01C(int a1, int a2)
{
  char v3; // r5
  int result; // r0

  v3 = a2;
  if ( *(_BYTE *)(a1 + 432) && !a2 )
    sub_140610(a1);
  *(_BYTE *)(a1 + 432) = v3;
  *(_BYTE *)(a1 + 17) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  result = -1;
  *(_DWORD *)(a1 + 4) = -1;
  return result;
}


// ======================================================================
// ADDR: 0x143520
// SYMBOL: sub_143520
int __fastcall sub_143520(int a1)
{
  void *v2; // r0
  int v3; // r5
  int result; // r0

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 944) + 4) )
  {
    v2 = (void *)sub_14FE70();
    operator delete(v2);
  }
  v3 = operator new(0xEA6Cu);
  sub_14FE50();
  result = *(_DWORD *)(a1 + 944);
  *(_DWORD *)(result + 4) = v3;
  return result;
}


// ======================================================================
// ADDR: 0x143556
// SYMBOL: sub_143556
int __fastcall sub_143556(int a1)
{
  int v2; // r0
  void *v3; // r0
  int v4; // r5
  int result; // r0

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 944) + 28);
  if ( v2 )
  {
    v3 = (void *)sub_13E5A2(v2);
    operator delete(v3);
  }
  v4 = operator new(0x2328u);
  sub_13E590(v4);
  result = *(_DWORD *)(a1 + 944);
  *(_DWORD *)(result + 28) = v4;
  return result;
}


// ======================================================================
// ADDR: 0x14358c
// SYMBOL: sub_14358C
int __fastcall sub_14358C(int a1)
{
  void *v2; // r0
  int v3; // r5
  int result; // r0

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 944) + 24) )
  {
    v2 = (void *)sub_14F20C();
    operator delete(v2);
  }
  v3 = operator new(0x2410u);
  sub_14F138();
  result = *(_DWORD *)(a1 + 944);
  *(_DWORD *)(result + 24) = v3;
  return result;
}


// ======================================================================
// ADDR: 0x1435c2
// SYMBOL: sub_1435C2
int __fastcall sub_1435C2(int a1)
{
  int v2; // r0
  void *v3; // r0
  int v4; // r5
  int result; // r0

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 944) + 8);
  if ( v2 )
  {
    v3 = (void *)sub_13E73A(v2);
    operator delete(v3);
  }
  v4 = operator new(0x1400u);
  sub_13E728(v4);
  result = *(_DWORD *)(a1 + 944);
  *(_DWORD *)(result + 8) = v4;
  return result;
}


// ======================================================================
// ADDR: 0x1435f8
// SYMBOL: sub_1435F8
int __fastcall sub_1435F8(int a1)
{
  void *v2; // r0
  int v3; // r5
  int result; // r0

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 944) + 20) )
  {
    v2 = (void *)sub_14F7D8();
    operator delete(v2);
  }
  v3 = operator new(0x14800u);
  sub_14F738();
  result = *(_DWORD *)(a1 + 944);
  *(_DWORD *)(result + 20) = v3;
  return result;
}


// ======================================================================
// ADDR: 0x14362e
// SYMBOL: sub_14362E
int __fastcall sub_14362E(int a1)
{
  void *v2; // r0
  int v3; // r5
  int result; // r0

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 944) + 12) )
  {
    v2 = (void *)sub_148820();
    operator delete(v2);
  }
  v3 = operator new(0x23008u);
  sub_1487C6();
  result = *(_DWORD *)(a1 + 944);
  *(_DWORD *)(result + 12) = v3;
  return result;
}


// ======================================================================
// ADDR: 0x143668
// SYMBOL: sub_143668
int __fastcall sub_143668(int a1)
{
  void *v2; // r0
  int v3; // r5
  int result; // r0

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 944) + 16) )
  {
    v2 = (void *)sub_1484DA();
    operator delete(v2);
  }
  v3 = operator new(0x138Cu);
  sub_1484C8();
  result = *(_DWORD *)(a1 + 944);
  *(_DWORD *)(result + 16) = v3;
  return result;
}


// ======================================================================
// ADDR: 0x14369e
// SYMBOL: sub_14369E
int __fastcall sub_14369E(int a1)
{
  void *v2; // r0
  int v3; // r5
  int result; // r0

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 944) + 32) )
  {
    nullsub_12();
    operator delete(v2);
  }
  v3 = operator new(1u);
  nullsub_11();
  result = *(_DWORD *)(a1 + 944);
  *(_DWORD *)(result + 32) = v3;
  return result;
}


// ======================================================================
// ADDR: 0x149014
// SYMBOL: sub_149014
int __fastcall sub_149014(int a1)
{
  int v1; // r1
  int v2; // r6
  int v3; // r5
  int result; // r0
  _BYTE *v5; // r4

  v1 = *(_DWORD *)(a1 + 5052);
  v2 = a1 + 4020;
  v3 = 0;
  *(_DWORD *)(v1 + 20) = 0;
  *(_BYTE *)(v1 + 19) = 0;
  do
  {
    result = *(unsigned __int8 *)(v2 + v3);
    if ( *(_BYTE *)(v2 + v3) )
    {
      result = *(_DWORD *)(v2 + 4 * v3 - 4016);
      if ( result )
      {
        v5 = *(_BYTE **)result;
        if ( *(_DWORD *)result )
        {
          if ( v5[25] )
          {
            result = sub_14B6A0(*(_DWORD *)result, 0);
            v5[25] = 0;
          }
          *v5 = 1;
        }
      }
    }
    ++v3;
  }
  while ( v3 != 1004 );
  return result;
}


// ======================================================================
// ADDR: 0x149278
// SYMBOL: sub_149278
int __fastcall sub_149278(int a1)
{
  int v2; // r1
  int result; // r0

  *(_WORD *)(a1 + 22) = 0;
  *(_BYTE *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_WORD *)(a1 + 27) = 0;
  *(_BYTE *)(a1 + 16) = 1;
  sub_22178C(a1 + 116, 0x44u);
  v2 = *(_DWORD *)(a1 + 300);
  *(_DWORD *)(a1 + 268) = 0;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 231) = 0LL;
  *(_QWORD *)(a1 + 239) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_DWORD *)(a1 + 264) = 0;
  if ( v2 )
  {
    sub_F9A3C(dword_23DEF0);
    *(_DWORD *)(a1 + 300) = 0;
  }
  result = dword_23DEF4;
  if ( dword_23DEF4 )
  {
    result = sub_F0B30();
    *(_DWORD *)(a1 + 292) = result;
  }
  return result;
}


// ======================================================================

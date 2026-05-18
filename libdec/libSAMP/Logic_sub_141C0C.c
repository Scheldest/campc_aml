// ADDR: 0x13e590
// SYMBOL: sub_13E590
int __fastcall sub_13E590(int a1)
{
  sub_22178C(a1, 0x2328u);
  return a1;
}


// ======================================================================
// ADDR: 0x13e728
// SYMBOL: sub_13E728
int __fastcall sub_13E728(int a1)
{
  sub_22178C(a1, 0x1400u);
  return a1;
}


// ======================================================================
// ADDR: 0x1484c8
// SYMBOL: sub_1484C8
int __fastcall sub_1484C8(int a1)
{
  sub_22178C(a1, 0x138Cu);
  return a1;
}


// ======================================================================
// ADDR: 0x1487c6
// SYMBOL: sub_1487C6
int __fastcall sub_1487C6(int a1)
{
  int i; // r1
  _QWORD *v3; // r2

  *(_DWORD *)(a1 + 143364) = -1;
  sub_22178C(a1 + 61444, 0x14000u);
  sub_22178C(a1, 0x4004u);
  sub_22177C(a1 + 16388, 0x4000u, 255);
  for ( i = 0; i != 0x4000; i += 16 )
  {
    v3 = (_QWORD *)(a1 + 32772 + i);
    *v3 = 0LL;
    v3[1] = 0LL;
  }
  return a1;
}


// ======================================================================
// ADDR: 0x148c3c
// SYMBOL: sub_148C3C
int __fastcall sub_148C3C(int a1)
{
  int v2; // r5
  int result; // r0

  *(_DWORD *)(a1 + 6076) = 0;
  *(_DWORD *)(a1 + 6072) = 0;
  *(_DWORD *)(a1 + 6068) = 0;
  sub_22178C(a1 + 4, 0x139Cu);
  v2 = operator new(0x1E8u);
  sub_13E888(v2);
  *(_DWORD *)(a1 + 5052) = v2;
  *(_DWORD *)(a1 + 5056) = 0;
  result = a1;
  *(_DWORD *)(a1 + 5060) = 0;
  *(_WORD *)(a1 + 5024) = 0;
  *(_DWORD *)a1 = 0;
  return result;
}


// ======================================================================
// ADDR: 0x14f138
// SYMBOL: sub_14F138
int __fastcall sub_14F138(int a1)
{
  sub_22178C(a1, 0x240Cu);
  sub_14F170(a1 + 9216, 2304);
  sub_108C20();
  *(_DWORD *)(a1 + 9228) = 0;
  return a1;
}


// ======================================================================
// ADDR: 0x14f738
// SYMBOL: sub_14F738
int __fastcall sub_14F738(int a1)
{
  int i; // r1
  int v3; // r2
  int v4; // r5
  int v5; // r4
  int v6; // r6

  for ( i = 0; i != 81920; i += 40 )
  {
    v3 = a1 + i;
    *(_DWORD *)(a1 + i) = 0;
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = 0;
  }
  v4 = 81920;
  v5 = 0;
  do
  {
    v6 = a1 + v5;
    std::string::assign(a1 + v5, &byte_8F794);
    *(_DWORD *)(v6 + 29) = 0;
    *(_QWORD *)(v6 + 12) = 0LL;
    *(_QWORD *)(v6 + 20) = 0LL;
    v5 += 40;
    *(_DWORD *)(v6 + 25) = 0;
    *(_BYTE *)(a1 + v4++) = 0;
    *(_DWORD *)(v6 + 34) = 0;
  }
  while ( v4 != 83968 );
  return a1;
}


// ======================================================================
// ADDR: 0x14fe50
// SYMBOL: sub_14FE50
int __fastcall sub_14FE50(int a1)
{
  sub_22178C(a1, 0x3E80u);
  sub_22178C(a1 + 40000, 0x4E2Cu);
  return a1;
}


// ======================================================================

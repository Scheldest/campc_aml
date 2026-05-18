// ADDR: 0x17e0b0
// SYMBOL: sub_17E0B0
int __fastcall sub_17E0B0(int result)
{
  *(_BYTE *)(result + 600) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x17e3a0
// SYMBOL: sub_17E3A0
int __fastcall sub_17E3A0(int a1)
{
  int v2; // r6
  _DWORD v4[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 12) = 16;
  *(_QWORD *)a1 = (unsigned int)operator new[](0x40u);
  *(_DWORD *)(a1 + 8) = 0;
  sub_17E3FA(a1, 64);
  v2 = 64;
  do
  {
    v4[0] = operator new(0x40u);
    sub_17E430(a1, v4);
    --v2;
  }
  while ( v2 );
  return a1;
}


// ======================================================================
// ADDR: 0x187396
// SYMBOL: sub_187396
int __fastcall sub_187396(int a1)
{
  _QWORD *v2; // r0
  __int64 v3; // r0
  int v4; // r2
  __int64 v5; // r0
  int v6; // r2
  bool v7; // cf
  unsigned int v8; // r0
  int v9; // r1
  __int64 v10; // r2

  v2 = (_QWORD *)(a1 + 468);
  *v2 = 0LL;
  v2[1] = 0LL;
  v2 += 2;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2 += 2;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2 += 2;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2 += 2;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2 += 2;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2 += 2;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2 += 2;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2 += 2;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2 += 2;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2 += 2;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2 += 2;
  *(_QWORD *)(a1 + 660) = 0LL;
  *(_QWORD *)(a1 + 668) = 0LL;
  *(_QWORD *)(a1 + 676) = 0LL;
  *(_QWORD *)(a1 + 684) = 0LL;
  *v2 = 0LL;
  v2[1] = 0LL;
  *(_QWORD *)(a1 + 692) = 0LL;
  *(_QWORD *)(a1 + 700) = 0LL;
  *(_QWORD *)(a1 + 708) = 0LL;
  *(_QWORD *)(a1 + 716) = 0LL;
  sub_22178C(a1 + 744, 0xC8u);
  *(_DWORD *)(a1 + 936) = sub_17E2E4();
  *(_WORD *)(a1 + 732) = 0;
  *(_DWORD *)(a1 + 1032) = 0;
  *(_DWORD *)(a1 + 1036) = 0;
  *(_WORD *)(a1 + 180) = 0;
  v3 = sub_17E348();
  v4 = *(_DWORD *)(a1 + 728);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 936);
  *(_QWORD *)(a1 + 968) = v3;
  *(_QWORD *)(a1 + 992) = 0LL;
  *(_QWORD *)(a1 + 1000) = 0LL;
  *(_DWORD *)(a1 + 1008) = 0;
  *(_DWORD *)(a1 + 1012) = 1088167936;
  v5 = v3 + (unsigned int)(2000 * v4);
  *(_DWORD *)(a1 + 984) = (char *)&unk_7A120 + v5;
  *(_DWORD *)(a1 + 976) = &`typeinfo name for'descent_builder::builder_t<AutomobileZR350>[v5 + 20];
  *(_DWORD *)(a1 + 988) = __CFADD__(&unk_7A120, (_DWORD)v5) + HIDWORD(v5);
  *(_DWORD *)(a1 + 980) = __CFADD__((_DWORD)v5, "uilder_tI15AutomobileZR350EE") + HIDWORD(v5);
  HIDWORD(v5) = *(_DWORD *)(a1 + 1688);
  v6 = *(_DWORD *)(a1 + 1692);
  v7 = *(_DWORD *)(a1 + 736) >= 0x3E8u;
  *(_WORD *)(a1 + 724) = 0;
  v8 = 1000;
  v9 = HIDWORD(v5) + v6;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 1016) = 0;
  *(_DWORD *)(a1 + 1020) = 0;
  *(_DWORD *)(a1 + 1024) = 0;
  *(_DWORD *)(a1 + 1028) = 1088167936;
  *(_BYTE *)(a1 + 1040) = 0;
  *(_DWORD *)(a1 + 1652) = 0;
  *(_BYTE *)(a1 + 962) = 1;
  *(_WORD *)(a1 + 960) = 0;
  *(_DWORD *)(a1 + 1648) = 0;
  if ( !v7 )
    v8 = 500;
  if ( v8 < 2 * v9 )
    v8 = 2 * v9;
  *(_DWORD *)(a1 + 728) = v8;
  v10 = 3000LL * v8;
  if ( 3 * v8 < 0x1E )
    LODWORD(v10) = 30000;
  *(_DWORD *)(a1 + 1656) = v10;
  if ( 3 * v8 < 0x1E )
    HIDWORD(v10) = 0;
  *(_DWORD *)(a1 + 1660) = HIDWORD(v10);
  return sub_18A1E0(a1 + 64, 64);
}


// ======================================================================

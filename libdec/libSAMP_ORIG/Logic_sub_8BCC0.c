// ADDR: 0x88140
// SYMBOL: sub_88140
int __fastcall sub_88140(int a1)
{
  int v2; // r0
  __int64 v3; // d16
  __int64 v4; // d17
  int v5; // r2
  _QWORD *v6; // r0
  __int64 v7; // d16
  __int64 v8; // d17
  int result; // r0

  *(_DWORD *)(a1 + 5380) = 0;
  *(_DWORD *)(a1 + 5384) = 0;
  *(_DWORD *)(a1 + 5376) = 0;
  v2 = a1 + 1044;
  *(_QWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  v2 += 16;
  *(_QWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  *(_DWORD *)(v2 + 16) = 0;
  *(_QWORD *)(a1 + 876) = 0LL;
  *(_QWORD *)(a1 + 884) = 0LL;
  *(_QWORD *)(a1 + 892) = 0LL;
  *(_QWORD *)(a1 + 900) = 0LL;
  *(_QWORD *)(a1 + 908) = 0LL;
  *(_QWORD *)(a1 + 916) = 0LL;
  *(_DWORD *)(a1 + 924) = 0;
  *(_DWORD *)(a1 + 1080) = 0;
  *(_DWORD *)(a1 + 928) = 0;
  sub_10967C(a1, 0x1510u);
  *(_DWORD *)(a1 + 20) = 1084227584;
  *(_DWORD *)(a1 + 24) = "imgui.ini";
  *(_DWORD *)(a1 + 28) = "imgui_log.txt";
  *(_DWORD *)(a1 + 32) = 1050253722;
  *(_DWORD *)(a1 + 36) = 1086324736;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0xBF800000BF800000LL;
  *(_DWORD *)(a1 + 16) = 1015580809;
  sub_10966C(a1 + 44, 0x54u, 255);
  *(float *)&v3 = -1.0;
  *((float *)&v3 + 1) = -1.0;
  *(float *)&v4 = -1.0;
  *((float *)&v4 + 1) = -1.0;
  *(_DWORD *)(a1 + 128) = 1048576000;
  *(_DWORD *)(a1 + 132) = 1028443341;
  *(_DWORD *)(a1 + 884) = -8388609;
  *(_DWORD *)(a1 + 888) = -8388609;
  *(_DWORD *)(a1 + 216) = -8388609;
  *(_DWORD *)(a1 + 220) = -8388609;
  *(_QWORD *)(a1 + 172) = 0LL;
  *(_QWORD *)(a1 + 180) = 0LL;
  *(_DWORD *)(a1 + 188) = 0;
  *(_QWORD *)(a1 + 1004) = v3;
  *(_QWORD *)(a1 + 1012) = v4;
  *(_QWORD *)(a1 + 1020) = v3;
  *(_QWORD *)(a1 + 1028) = v4;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 204) = nullsub_26;
  *(_DWORD *)(a1 + 192) = sub_882E4;
  *(_DWORD *)(a1 + 196) = sub_88300;
  v5 = 1104;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 1065353216;
  *(_BYTE *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 1065353216;
  *(_DWORD *)(a1 + 160) = 1065353216;
  *(_DWORD *)(a1 + 164) = 16842752;
  *(_BYTE *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 40) = 1086324736;
  *(_DWORD *)(a1 + 1036) = -1082130432;
  *(_DWORD *)(a1 + 1040) = -1082130432;
  do
  {
    v6 = (_QWORD *)(a1 + v5);
    v5 += 16;
    *v6 = v3;
    v6[1] = v4;
    v6 += 256;
    *v6 = v3;
    v6[1] = v4;
  }
  while ( v5 != 3152 );
  *(float *)&v7 = -1.0;
  *((float *)&v7 + 1) = -1.0;
  *(float *)&v8 = -1.0;
  *((float *)&v8 + 1) = -1.0;
  *(_DWORD *)(a1 + 5284) = -1082130432;
  result = a1;
  *(_QWORD *)(a1 + 5200) = v7;
  *(_QWORD *)(a1 + 5208) = v8;
  *(_QWORD *)(a1 + 5216) = v7;
  *(_QWORD *)(a1 + 5224) = v8;
  *(_QWORD *)(a1 + 5232) = v7;
  *(_QWORD *)(a1 + 5240) = v8;
  *(_QWORD *)(a1 + 5248) = v7;
  *(_QWORD *)(a1 + 5256) = v8;
  *(_QWORD *)(a1 + 5264) = v7;
  *(_QWORD *)(a1 + 5272) = v8;
  *(_DWORD *)(a1 + 5280) = -1082130432;
  return result;
}


// ======================================================================
// ADDR: 0x9ba20
// SYMBOL: sub_9BA20
int __fastcall sub_9BA20(int a1)
{
  int v2; // r4
  _DWORD *v3; // r5
  int v4; // r0
  int v5; // r1
  int v7; // [sp+0h] [bp-30h] BYREF
  _DWORD v8[11]; // [sp+4h] [bp-2Ch] BYREF

  v2 = 0;
  v3 = (_DWORD *)(a1 + 44);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  v4 = a1 + 20;
  *(_QWORD *)v4 = 0xC6000000C6000000LL;
  *(_QWORD *)(v4 + 8) = 0x4600000046000000LL;
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  do
  {
    sincosf((float)((float)((float)v2 + (float)v2) * 3.1416) / 12.0, v8, &v7);
    v5 = v8[0];
    ++v2;
    *(v3 - 1) = v7;
    *v3 = v5;
    v3 += 2;
  }
  while ( v2 != 12 );
  return a1;
}


// ======================================================================
// ADDR: 0x9e6b2
// SYMBOL: sub_9E6B2
int __fastcall sub_9E6B2(int result)
{
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 1;
  *(_BYTE *)result = 0;
  *(_DWORD *)(result + 88) = -1;
  *(_QWORD *)(result + 20) = 0LL;
  *(_QWORD *)(result + 28) = 0LL;
  *(_QWORD *)(result + 36) = 0LL;
  *(_QWORD *)(result + 44) = 0LL;
  *(_QWORD *)(result + 52) = 0LL;
  *(_QWORD *)(result + 60) = 0LL;
  *(_QWORD *)(result + 68) = 0LL;
  *(_QWORD *)(result + 76) = 0LL;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 84) = 0;
  return result;
}


// ======================================================================
// ADDR: 0xa35fc
// SYMBOL: sub_A35FC
int __fastcall sub_A35FC(int result)
{
  *(_WORD *)(result + 66) = 63;
  *(_DWORD *)(result + 68) = 1065353216;
  *(_DWORD *)(result + 72) = 0;
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 8) = 0LL;
  *(_QWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 24) = 0LL;
  *(_QWORD *)(result + 28) = 0LL;
  *(_QWORD *)(result + 36) = 0LL;
  *(_QWORD *)(result + 44) = 0LL;
  *(_QWORD *)(result + 52) = 0LL;
  *(_BYTE *)(result + 84) = 0;
  *(_DWORD *)(result + 62) = 0;
  *(_DWORD *)(result + 76) = 0;
  *(_DWORD *)(result + 80) = 0;
  *(_DWORD *)(result + 58) = 0;
  return result;
}


// ======================================================================

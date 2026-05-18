// ADDR: 0x164f00
// SYMBOL: sub_164F00
int __fastcall sub_164F00(int a1)
{
  sub_22178C(a1 + 172, 0x300u);
  *(_DWORD *)(a1 + 8) = 1090519040;
  *(_DWORD *)(a1 + 12) = 1088421888;
  *(_QWORD *)(a1 + 72) = 0x4080000041000000LL;
  *(_QWORD *)(a1 + 80) = 0x4080000040800000LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 168) = 1067450368;
  *(_DWORD *)a1 = 1065353216;
  *(_DWORD *)(a1 + 4) = 1090519040;
  *(_QWORD *)(a1 + 40) = 0x3F80000000000000LL;
  *(_QWORD *)(a1 + 48) = 0x3F80000000000000LL;
  *(_WORD *)(a1 + 164) = 257;
  *(_DWORD *)(a1 + 56) = 1082130432;
  *(_DWORD *)(a1 + 60) = 1077936128;
  *(_QWORD *)(a1 + 20) = 0x4200000042000000LL;
  *(_QWORD *)(a1 + 28) = 0x3F00000000000000LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 96) = 0x40C0000041A80000LL;
  *(_QWORD *)(a1 + 104) = 0x4110000041800000LL;
  *(_QWORD *)(a1 + 112) = 1092616192LL;
  *(_QWORD *)(a1 + 120) = 1082130432LL;
  *(_QWORD *)(a1 + 128) = 0x3F0000003F000000LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0x4198000041980000LL;
  *(_QWORD *)(a1 + 152) = 0x4040000040400000LL;
  *(_DWORD *)(a1 + 160) = 1065353216;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 16) = 1065353216;
  sub_172280(a1);
  return a1;
}


// ======================================================================
// ADDR: 0x165030
// SYMBOL: sub_165030
int __fastcall sub_165030(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  __int64 v5; // d16
  __int64 v6; // d17
  int v7; // r1
  _QWORD *v8; // r3
  int i; // r2

  v2 = 0;
  *(_DWORD *)(a1 + 5376) = 0;
  v3 = a1 + 5376;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)(a1 + 1044) = 0LL;
  *(_QWORD *)(a1 + 1052) = 0LL;
  *(_QWORD *)(a1 + 1060) = 0LL;
  *(_QWORD *)(a1 + 1068) = 0LL;
  *(_DWORD *)(a1 + 1076) = 0;
  *(_QWORD *)(a1 + 876) = 0LL;
  *(_QWORD *)(a1 + 884) = 0LL;
  *(_QWORD *)(a1 + 892) = 0LL;
  *(_QWORD *)(a1 + 900) = 0LL;
  *(_QWORD *)(a1 + 908) = 0LL;
  *(_QWORD *)(a1 + 916) = 0LL;
  *(_DWORD *)(a1 + 924) = 0;
  *(_DWORD *)(a1 + 1080) = 0;
  *(_DWORD *)(a1 + 928) = 0;
  sub_22178C(a1, 0x1510u);
  *(_DWORD *)(a1 + 20) = 1084227584;
  *(_DWORD *)(a1 + 24) = "imgui.ini";
  *(_DWORD *)(a1 + 28) = "imgui_log.txt";
  *(_DWORD *)(a1 + 32) = 1050253722;
  *(_DWORD *)(a1 + 36) = 1086324736;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0xBF800000BF800000LL;
  *(_DWORD *)(a1 + 16) = 1015580809;
  sub_22177C(a1 + 44, 0x54u, 255);
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 204) = nullsub_45;
  *(_QWORD *)(a1 + 172) = 0LL;
  *(_QWORD *)(a1 + 180) = 0LL;
  *(_DWORD *)(a1 + 128) = 1048576000;
  *(_DWORD *)(a1 + 132) = 1028443341;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 144) = 1065353216;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 1065353216;
  *(_DWORD *)(a1 + 160) = 1065353216;
  *(_DWORD *)(a1 + 164) = 16842752;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_BYTE *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 884) = -8388609;
  *(_DWORD *)(a1 + 888) = -8388609;
  *(_DWORD *)(a1 + 192) = sub_1651AC;
  *(_DWORD *)(a1 + 196) = sub_1651C8;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 216) = -8388609;
  *(_DWORD *)(a1 + 220) = -8388609;
  *(_DWORD *)(a1 + 40) = 1086324736;
  do
  {
    v4 = a1 + v2;
    v2 += 4;
    *(_DWORD *)(v4 + 1004) = -1082130432;
    *(_DWORD *)(v4 + 1024) = -1082130432;
  }
  while ( v2 != 20 );
  *(float *)&v5 = -1.0;
  *((float *)&v5 + 1) = -1.0;
  *(float *)&v6 = -1.0;
  *((float *)&v6 + 1) = -1.0;
  v7 = 1104;
  do
  {
    v8 = (_QWORD *)(a1 + v7);
    v7 += 16;
    *v8 = v5;
    v8[1] = v6;
    v8 += 256;
    *v8 = v5;
    v8[1] = v6;
  }
  while ( v7 != 3152 );
  for ( i = 0; i != 88; i += 4 )
    *(_DWORD *)(a1 + 5200 + i) = -1082130432;
  return a1;
}


// ======================================================================
// ADDR: 0x1726f8
// SYMBOL: sub_1726F8
int __fastcall sub_1726F8(int a1)
{
  int v2; // r4
  _DWORD *v3; // r5
  int v4; // r1
  int v6; // [sp+0h] [bp-30h] BYREF
  _DWORD v7[11]; // [sp+4h] [bp-2Ch] BYREF

  sub_22178C(a1 + 40, 0x60u);
  v2 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = (_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 20) = 0xC6000000C6000000LL;
  *(_QWORD *)(a1 + 28) = 0x4600000046000000LL;
  *(_DWORD *)(a1 + 36) = 0;
  do
  {
    sincosf((float)((float)((float)v2 + (float)v2) * 3.1416) / 12.0, v7, &v6);
    v4 = v7[0];
    ++v2;
    *(v3 - 1) = v6;
    *v3 = v4;
    v3 += 2;
  }
  while ( v2 != 12 );
  return a1;
}


// ======================================================================
// ADDR: 0x175016
// SYMBOL: sub_175016
int __fastcall sub_175016(int result)
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
// ADDR: 0x178828
// SYMBOL: sub_178828
int __fastcall sub_178828(int result)
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

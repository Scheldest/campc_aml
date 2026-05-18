// ADDR: 0x7c9b0
// SYMBOL: sub_7C9B0
int __fastcall sub_7C9B0(int a1, int a2, float a3)
{
  __int64 v6; // d16
  __int64 v7; // d17
  int v8; // r6
  __int64 v9; // d17
  __int64 v10; // d18
  __int64 v11; // d19
  _QWORD v13[2]; // [sp+8h] [bp-30h] BYREF

  sub_7C360(a1);
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)a1 = &off_111058;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(float *)&v6 = 1.0;
  *((float *)&v6 + 1) = 1.0;
  *(float *)&v7 = 1.0;
  *((float *)&v7 + 1) = 1.0;
  v8 = operator new(0x78u);
  v13[0] = v6;
  v13[1] = v7;
  sub_7D380(v8, a2, (int)v13, 0, a3);
  *(_DWORD *)(a1 + 84) = v8;
  sub_7C73C(a1, v8);
  v9 = unk_116DA8;
  v10 = unk_116DB0;
  v11 = unk_116DB8;
  *(_QWORD *)(a1 + 112) = unk_116DA0;
  *(_QWORD *)(a1 + 120) = v9;
  *(_QWORD *)(a1 + 128) = v10;
  *(_QWORD *)(a1 + 136) = v11;
  return a1;
}


// ======================================================================

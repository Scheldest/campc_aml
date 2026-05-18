// ADDR: 0x13e888
// SYMBOL: sub_13E888
int __fastcall sub_13E888(int a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r0
  unsigned int v5; // r0

  *(_QWORD *)(a1 + 176) = 1065353216LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 234) = 1065353216LL;
  *(_QWORD *)(a1 + 242) = 0LL;
  v2 = a1 + 361;
  *(_BYTE *)(a1 + 34) = 0;
  *(_BYTE *)(a1 + 9) = 0;
  v3 = dword_23DEF0;
  *(_QWORD *)v2 = 1065353216LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  *(_BYTE *)(a1 + 26) = 0;
  v4 = sub_E35A0(v3);
  *(_DWORD *)(a1 + 28) = v4;
  *(_DWORD *)(v4 + 88) = a1 + 26;
  *(_DWORD *)(a1 + 436) = 0;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 19) = 0;
  v5 = sub_F0B30();
  *(_DWORD *)(a1 + 4) = -1;
  *(int32x4_t *)(a1 + 440) = vdupq_n_s32(v5);
  *(_DWORD *)(a1 + 456) = v5;
  *(_BYTE *)(v2 + 71) = 0;
  *(_BYTE *)(a1 + 17) = 0;
  *(_BYTE *)(a1 + 45) = 0;
  sub_13E934(a1);
  sub_22178C(a1 + 47, 0x41u);
  *(_BYTE *)(a1 + 18) = -1;
  return a1;
}


// ======================================================================

// ADDR: 0x103b88
// SYMBOL: sub_103B88
int __fastcall sub_103B88(int a1, int a2, int a3, int a4)
{
  _QWORD *v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r3
  int v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r2
  int v19; // [sp+0h] [bp-18h]
  int v20; // [sp+0h] [bp-18h]
  int v21; // [sp+4h] [bp-14h]
  int v22; // [sp+4h] [bp-14h]
  int v23; // [sp+8h] [bp-10h]
  int v24; // [sp+8h] [bp-10h]
  int v25; // [sp+Ch] [bp-Ch]
  int v26; // [sp+Ch] [bp-Ch]
  int v27; // [sp+10h] [bp-8h]
  int v28; // [sp+10h] [bp-8h]
  int v29; // [sp+14h] [bp-4h]
  int v30; // [sp+14h] [bp-4h]
  int savedregs; // [sp+18h] [bp+0h]
  int savedregsa; // [sp+18h] [bp+0h]

  *(_DWORD *)a1 = &off_22B0F0;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = (_QWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 56) = -1;
  *v5 = 0LL;
  v5[1] = 0LL;
  v5 += 2;
  *(_DWORD *)(a1 + 108) = -1;
  *(_DWORD *)(a1 + 112) = -1;
  *(_DWORD *)(a1 + 61) = 0;
  *(_DWORD *)(a1 + 57) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)v5 = 0;
  v6 = sub_1082E4(v5, 1, a3, a4);
  *(_DWORD *)(a1 + 92) = v6;
  v10 = sub_1082E4(v6, v7, v8, v9);
  v11 = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(a1 + 4) = v10;
  *(_BYTE *)(a1 + 96) = 0;
  sub_108D34(0, v11);
  sub_107188("~\bii", *(_DWORD *)(a1 + 8), 1, v12, v19, v21, v23, v25, v27, v29, savedregs);
  sub_107188(&unk_B3636, *(_DWORD *)(a1 + 8), 0, v13, v20, v22, v24, v26, v28, v30, savedregsa);
  v14 = 32;
  v15 = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  do
  {
    *(_BYTE *)(a1 + v15 + 116) = 0;
    v16 = a1 + 4 * v14;
    *(_QWORD *)v16 = 0LL;
    *(_QWORD *)(v16 + 8) = 0LL;
    v16 += 16;
    v14 += 13;
    *(_QWORD *)v16 = 0LL;
    *(_QWORD *)(v16 + 8) = 0LL;
    v16 += 16;
    *(_QWORD *)v16 = 0LL;
    *(_QWORD *)(v16 + 8) = 0LL;
    *(_DWORD *)(v16 + 16) = 0;
    v17 = a1 + 4 * v15++;
    *(_DWORD *)(v17 + 648) = 0;
  }
  while ( v14 != 162 );
  return a1;
}


// ======================================================================

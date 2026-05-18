// ADDR: 0x18da3c
// SYMBOL: sub_18DA3C
int __fastcall sub_18DA3C(_DWORD *a1, int *a2, int a3)
{
  int v4; // r3
  _DWORD *v5; // r2
  unsigned int v6; // r8
  unsigned int v7; // r6
  unsigned int v8; // r4
  unsigned int v9; // r9
  int v10; // lr
  int v11; // r0
  int v12; // r0
  int v13; // r10
  int v14; // r0
  int v15; // r4
  _DWORD *v16; // r6
  int v17; // r1
  int *v18; // r3
  int v19; // r0
  int v20; // r4
  _DWORD *v21; // r1
  int v22; // r0
  _DWORD *v23; // r9
  int *v24; // r12
  unsigned int v25; // r6
  unsigned int v26; // r4
  unsigned int v27; // r5
  unsigned int v28; // r3
  int v29; // r0
  int v30; // r2
  int v31; // r2
  int v32; // r2
  __int64 v33; // kr08_8
  __int64 v34; // kr10_8
  int v35; // r1
  int v38; // [sp+Ch] [bp-28h]
  int v39; // [sp+10h] [bp-24h]
  int v40; // [sp+14h] [bp-20h]

  v4 = *(_DWORD *)(a3 + 16 * dword_382770);
  v5 = (_DWORD *)(a3 + 16 * dword_382770);
  v6 = v4 ^ *a1;
  v7 = v5[2] ^ a1[2];
  v8 = v5[3] ^ a1[3];
  v9 = a1[1] ^ v5[1];
  v10 = dword_23A9B8[BYTE1(v8)] ^ dword_23A5B8[(unsigned __int8)(v4 ^ *a1)] ^ dword_23ADB8[BYTE2(v7)] ^ dword_23B1B8[HIBYTE(v9)];
  *a2 = v10;
  v11 = dword_23A5B8[(unsigned __int8)v9] ^ dword_23A9B8[BYTE1(v6)] ^ dword_23ADB8[BYTE2(v8)] ^ dword_23B1B8[HIBYTE(v7)];
  a2[1] = v11;
  v40 = v11;
  v12 = dword_23A5B8[(unsigned __int8)v7] ^ dword_23A9B8[BYTE1(v9)] ^ dword_23ADB8[BYTE2(v6)] ^ dword_23B1B8[HIBYTE(v8)];
  a2[2] = v12;
  v13 = v12;
  v14 = dword_23A5B8[(unsigned __int8)v8];
  v15 = BYTE1(v7);
  v16 = dword_23A9B8;
  v17 = dword_23A9B8[v15] ^ v14 ^ dword_23ADB8[BYTE2(v9)];
  v18 = a2;
  v19 = dword_382770;
  v20 = v17 ^ dword_23B1B8[HIBYTE(v6)];
  a2[3] = v20;
  if ( v19 >= 3 )
  {
    v21 = (_DWORD *)(a3 + 16 * v19 - 8);
    v22 = v19 + 1;
    do
    {
      v23 = v16;
      v39 = v22;
      v24 = v18;
      v25 = v21[1] ^ v20;
      v26 = *(v21 - 2) ^ v10;
      v27 = *v21 ^ v13;
      v28 = *(v21 - 1);
      v21 -= 4;
      v29 = v40 ^ v28;
      v30 = dword_23ADB8[BYTE2(v27)] ^ dword_23A5B8[(unsigned __int8)v26] ^ v23[BYTE1(v25)] ^ dword_23B1B8[(v40 ^ v28) >> 24];
      *v24 = v30;
      v38 = v30;
      v31 = dword_23A5B8[(unsigned __int8)(v40 ^ v28)] ^ v23[BYTE1(v26)] ^ dword_23ADB8[BYTE2(v25)] ^ dword_23B1B8[HIBYTE(v27)];
      v24[1] = v31;
      v40 = v31;
      v13 = dword_23A5B8[(unsigned __int8)v27] ^ v23[BYTE1(v29)] ^ dword_23ADB8[BYTE2(v26)] ^ dword_23B1B8[HIBYTE(v25)];
      v24[2] = v13;
      v32 = dword_23A5B8[(unsigned __int8)v25];
      v16 = v23;
      v10 = v38;
      v20 = dword_23ADB8[BYTE2(v29)] ^ v32 ^ v23[BYTE1(v27)] ^ dword_23B1B8[HIBYTE(v26)];
      v18 = v24;
      v24[3] = v20;
      v22 = v39 - 1;
    }
    while ( (unsigned int)(v39 - 1) > 3 );
  }
  v33 = *(_QWORD *)(a3 + 16);
  v34 = *(_QWORD *)(a3 + 24);
  *(_BYTE *)v18 = byte_23B5B8[(unsigned __int8)(v33 ^ v10)];
  *((_BYTE *)v18 + 1) = byte_23B5B8[(unsigned __int16)(WORD2(v34) ^ v20) >> 8];
  *((_BYTE *)v18 + 2) = byte_23B5B8[(unsigned __int8)(((unsigned int)v34 ^ v13) >> 16)];
  *((_BYTE *)v18 + 3) = byte_23B5B8[(HIDWORD(v33) ^ (unsigned int)v40) >> 24];
  *((_BYTE *)v18 + 4) = byte_23B5B8[(unsigned __int8)(BYTE4(v33) ^ v40)];
  *((_BYTE *)v18 + 5) = byte_23B5B8[(unsigned __int16)(v33 ^ v10) >> 8];
  *((_BYTE *)v18 + 6) = byte_23B5B8[(unsigned __int8)((HIDWORD(v34) ^ (unsigned int)v20) >> 16)];
  *((_BYTE *)v18 + 7) = byte_23B5B8[((unsigned int)v34 ^ v13) >> 24];
  *((_BYTE *)v18 + 8) = byte_23B5B8[(unsigned __int8)(v34 ^ v13)];
  *((_BYTE *)v18 + 9) = byte_23B5B8[(unsigned __int16)(WORD2(v33) ^ v40) >> 8];
  *((_BYTE *)v18 + 10) = byte_23B5B8[(unsigned __int8)(((unsigned int)v33 ^ v10) >> 16)];
  *((_BYTE *)v18 + 11) = byte_23B5B8[(HIDWORD(v34) ^ (unsigned int)v20) >> 24];
  *((_BYTE *)v18 + 12) = byte_23B5B8[(unsigned __int8)(BYTE4(v34) ^ v20)];
  *((_BYTE *)v18 + 13) = byte_23B5B8[(unsigned __int16)(v34 ^ v13) >> 8];
  *((_BYTE *)v18 + 14) = byte_23B5B8[(unsigned __int8)((HIDWORD(v33) ^ (unsigned int)v40) >> 16)];
  *((_BYTE *)v18 + 15) = byte_23B5B8[((unsigned int)v33 ^ v10) >> 24];
  v35 = v18[3];
  *v18 ^= *(_DWORD *)a3;
  *(_QWORD *)(v18 + 1) ^= *(_QWORD *)(a3 + 4);
  v18[3] = *(_DWORD *)(a3 + 12) ^ v35;
  return 0;
}


// ======================================================================

// ADDR: 0x18d6e0
// SYMBOL: sub_18D6E0
int __fastcall sub_18D6E0(_DWORD *a1, int *a2, _DWORD *a3)
{
  int v4; // r2
  int v5; // r10
  unsigned int v6; // r11
  unsigned int v7; // r4
  int v8; // r0
  unsigned int v9; // r2
  unsigned int v10; // r3
  int *v11; // r8
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r5
  int v16; // r1
  int v17; // r2
  int v18; // r10
  _DWORD *v19; // r3
  int v20; // r6
  int v21; // r10
  _DWORD *v22; // r5
  int v23; // r1
  int v24; // r11
  int v25; // r4
  int *v26; // r12
  _DWORD *v27; // r8
  unsigned int v28; // r4
  int v29; // r0
  unsigned int v30; // r3
  int v31; // r9
  unsigned int v32; // r2
  __int16 v33; // r1
  int v34; // r9
  int v35; // r0
  int v36; // r1
  int v37; // r1
  int v38; // r0
  unsigned int v39; // r1
  int v40; // r2
  int v41; // r2
  int v42; // r12
  unsigned int v43; // r0
  _DWORD *v44; // r1
  __int64 v45; // kr08_8
  unsigned int v46; // r1
  int v47; // r2
  _DWORD *v48; // r0
  _DWORD *v50; // [sp+0h] [bp-3Ch]
  int v51; // [sp+4h] [bp-38h]
  int v52; // [sp+14h] [bp-28h]
  int v53; // [sp+14h] [bp-28h]
  int v54; // [sp+18h] [bp-24h]
  int v55; // [sp+18h] [bp-24h]

  v4 = a1[1];
  v5 = a1[2];
  v54 = a1[3];
  v6 = *a3 ^ *a1;
  v7 = a3[1] ^ v4;
  v8 = *((_DWORD *)&unk_2395B8 + (unsigned __int8)(*(_QWORD *)a3 ^ *a1)) ^ dword_2399B8[(unsigned __int8)((unsigned __int16)(a3[1] ^ v4) >> 8)];
  v9 = a3[2] ^ v5;
  v10 = a3[3] ^ v54;
  v11 = a2;
  v12 = v8 ^ dword_239DB8[BYTE2(v9)] ^ dword_23A1B8[HIBYTE(v10)];
  *a2 = v12;
  v55 = v12;
  v13 = *((_DWORD *)&unk_2395B8 + (unsigned __int8)v7) ^ dword_2399B8[BYTE1(v9)] ^ dword_239DB8[BYTE2(v10)] ^ dword_23A1B8[HIBYTE(v6)];
  a2[1] = v13;
  v51 = v13;
  v14 = *((_DWORD *)&unk_2395B8 + (unsigned __int8)v9) ^ dword_2399B8[BYTE1(v10)] ^ dword_239DB8[BYTE2(v6)] ^ dword_23A1B8[HIBYTE(v7)];
  a2[2] = v14;
  v15 = dword_23A1B8[HIBYTE(v9)];
  v52 = v14;
  v16 = dword_2399B8[BYTE1(v6)] ^ *((_DWORD *)&unk_2395B8 + (unsigned __int8)v10) ^ dword_239DB8[BYTE2(v7)];
  v17 = dword_382770;
  v18 = v16 ^ v15;
  v11[3] = v16 ^ v15;
  if ( v17 < 3 )
  {
    v41 = v17 - 1;
    v42 = v51;
  }
  else
  {
    v19 = dword_2399B8;
    v20 = v16 ^ v15;
    v21 = v51;
    v22 = a3 + 4;
    v24 = v14;
    v23 = v55;
    v25 = 1;
    v50 = a3;
    do
    {
      v53 = v25;
      v26 = v11;
      v27 = v19;
      v28 = v22[1] ^ v21;
      v29 = v22[2];
      v30 = *v22 ^ v23;
      v31 = v22[3];
      v22 += 4;
      v32 = v29 ^ v24;
      v33 = v31 ^ v20;
      v55 = dword_239DB8[(unsigned __int8)((v29 ^ (unsigned int)v24) >> 16)] ^ v27[BYTE1(v28)] ^ *((_DWORD *)&unk_2395B8
                                                                                                 + (unsigned __int8)v30) ^ dword_23A1B8[(v31 ^ (unsigned int)v20) >> 24];
      *v26 = v55;
      v34 = *((_DWORD *)&unk_2395B8 + (unsigned __int8)v28) ^ v27[(unsigned __int8)((unsigned __int16)(v29 ^ v24) >> 8)] ^ dword_239DB8[(unsigned __int8)((v31 ^ (unsigned int)v20) >> 16)] ^ dword_23A1B8[HIBYTE(v30)];
      v26[1] = v34;
      v24 = *((_DWORD *)&unk_2395B8 + (unsigned __int8)(v29 ^ v24)) ^ v27[HIBYTE(v33)] ^ dword_239DB8[BYTE2(v30)] ^ dword_23A1B8[HIBYTE(v28)];
      v26[2] = v24;
      v35 = *((_DWORD *)&unk_2395B8 + (unsigned __int8)v33);
      v36 = BYTE1(v30);
      v19 = v27;
      v37 = v27[v36];
      v11 = v26;
      v38 = v35 ^ v37;
      v39 = HIBYTE(v32);
      v40 = BYTE2(v28);
      v21 = v34;
      v25 = v53 + 1;
      v20 = v38 ^ dword_239DB8[v40] ^ dword_23A1B8[v39];
      v23 = v55;
      v26[3] = v20;
      v41 = dword_382770 - 1;
    }
    while ( v53 + 1 < dword_382770 - 1 );
    a3 = v50;
    v42 = v21;
    v18 = v20;
    v52 = v24;
  }
  v43 = a3[4 * v41];
  v44 = &a3[4 * v41];
  v45 = *(_QWORD *)(v44 + 1);
  v46 = v44[3] ^ v18;
  *(_BYTE *)v11 = *((_BYTE *)&unk_2395B8 + 4 * (unsigned __int8)(v55 ^ v43) + 1);
  *((_BYTE *)v11 + 1) = *((_BYTE *)&unk_2395B8 + 4 * (unsigned __int8)((unsigned __int16)(v45 ^ v42) >> 8) + 1);
  *((_BYTE *)v11 + 2) = *((_BYTE *)&unk_2395B8 + 4 * (unsigned __int8)(((unsigned int)v52 ^ HIDWORD(v45)) >> 16) + 1);
  *((_BYTE *)v11 + 3) = *((_BYTE *)&unk_2395B8 + 4 * HIBYTE(v46) + 1);
  *((_BYTE *)v11 + 4) = *((_BYTE *)&unk_2395B8 + 4 * (unsigned __int8)(v45 ^ v42) + 1);
  *((_BYTE *)v11 + 5) = *((_BYTE *)&unk_2395B8 + 4 * (unsigned __int8)((unsigned __int16)(v52 ^ WORD2(v45)) >> 8) + 1);
  *((_BYTE *)v11 + 6) = *((_BYTE *)&unk_2395B8 + 4 * BYTE2(v46) + 1);
  *((_BYTE *)v11 + 7) = *((_BYTE *)&unk_2395B8 + 4 * ((v55 ^ v43) >> 24) + 1);
  *((_BYTE *)v11 + 8) = *((_BYTE *)&unk_2395B8 + 4 * (unsigned __int8)(v52 ^ BYTE4(v45)) + 1);
  *((_BYTE *)v11 + 9) = *((_BYTE *)&unk_2395B8 + 4 * BYTE1(v46) + 1);
  *((_BYTE *)v11 + 10) = *((_BYTE *)&unk_2395B8 + 4 * (unsigned __int8)((v55 ^ v43) >> 16) + 1);
  *((_BYTE *)v11 + 11) = *((_BYTE *)&unk_2395B8 + 4 * (((unsigned int)v45 ^ v42) >> 24) + 1);
  *((_BYTE *)v11 + 12) = *((_BYTE *)&unk_2395B8 + 4 * (unsigned __int8)v46 + 1);
  *((_BYTE *)v11 + 13) = *((_BYTE *)&unk_2395B8 + 4 * (unsigned __int8)((unsigned __int16)(v55 ^ v43) >> 8) + 1);
  *((_BYTE *)v11 + 14) = *((_BYTE *)&unk_2395B8 + 4 * (unsigned __int8)(((unsigned int)v45 ^ v42) >> 16) + 1);
  *((_BYTE *)v11 + 15) = *((_BYTE *)&unk_2395B8 + 4 * (((unsigned int)v52 ^ HIDWORD(v45)) >> 24) + 1);
  v47 = v11[3];
  *v11 ^= a3[4 * dword_382770];
  v48 = &a3[4 * dword_382770];
  *(_QWORD *)(v11 + 1) ^= *(_QWORD *)(v48 + 1);
  v11[3] = v48[3] ^ v47;
  return 0;
}


// ======================================================================

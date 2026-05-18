// ADDR: 0x13dfa2
// SYMBOL: sub_13DFA2
int __fastcall sub_13DFA2(_QWORD *a1, int a2)
{
  int v4; // r6
  int v5; // r8
  _BYTE v7[17]; // [sp+7h] [bp-11h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v4 = (int)a1 + 44;
  *((_DWORD *)a1 + 13) = 0;
  *((_DWORD *)a1 + 14) = 0;
  *((_BYTE *)a1 + 44) = 0;
  *((_DWORD *)a1 + 12) = -1;
  v5 = (int)(a1 + 6);
  sub_17D786(a2, (int)v7);
  sub_17D744(a2, a1);
  sub_17D786(a2, (int)(a1 + 4));
  sub_17D786(a2, (int)a1 + 36);
  sub_17D786(a2, (int)(a1 + 5));
  sub_17D786(a2, v4);
  return sub_17D786(a2, v5);
}


// ======================================================================
// ADDR: 0x13e044
// SYMBOL: sub_13E044
int __fastcall sub_13E044(int a1, _DWORD *a2)
{
  __int64 v2; // kr00_8
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r3
  int v9; // r4
  int v10; // r5
  int v11; // r6
  int v12; // r3
  int v13; // r4
  int v14; // r5
  int v15; // r6
  int v16; // r1
  int result; // r0
  _DWORD *v18; // r12
  int v19; // r3
  int v20; // r4
  int v21; // r5
  _DWORD *v22; // r1
  int v23; // r3
  int v24; // r4
  int v25; // r5
  int v26; // r6
  int v27; // r3
  int v28; // r4
  int v29; // r5
  int v30; // r6
  _DWORD *v31; // r5
  int v32; // r6
  _DWORD *v33; // r8
  _DWORD *v34; // r11
  _DWORD *v35; // r10
  _DWORD *v36; // r5
  bool v37; // zf
  int v38; // r1
  int v39; // r2
  int v40; // r4
  _DWORD *v41; // r5
  int v42; // r1
  int v43; // r2
  int v44; // r3
  int v45; // r4
  _DWORD *v46; // r5
  int v47; // r1
  int v48; // r2
  int v49; // r3
  int v50; // r4
  int v51; // r0
  _DWORD *v52; // r2
  int v53; // r0
  int v54; // r1
  _DWORD *v55; // [sp+0h] [bp-30h] BYREF
  _DWORD *v56; // [sp+4h] [bp-2Ch]
  _DWORD *v57; // [sp+8h] [bp-28h]
  int v58; // [sp+Ch] [bp-24h]

  v2 = *(_QWORD *)(a1 + 4);
  if ( (unsigned int)v2 >= HIDWORD(v2) )
  {
    if ( (unsigned int)(-286331153 * (((int)v2 - *(_DWORD *)a1) >> 2) + 1) > 0x4444444 )
      std::__vector_base_common<true>::__throw_length_error(a1);
    sub_13E50C(&v55);
    v18 = v57;
    v19 = a2[1];
    v20 = a2[2];
    v21 = a2[3];
    v22 = v57;
    *v57 = *a2;
    v22[1] = v19;
    v22[2] = v20;
    v22[3] = v21;
    v22 += 4;
    v23 = a2[5];
    v24 = a2[6];
    v25 = a2[7];
    v26 = a2[8];
    *v22 = a2[4];
    v22[1] = v23;
    v22[2] = v24;
    v22[3] = v25;
    v22[4] = v26;
    v22 += 5;
    v27 = a2[10];
    v28 = a2[11];
    v29 = a2[12];
    v30 = a2[13];
    *v22 = a2[9];
    v22[1] = v27;
    v22[2] = v28;
    v22[3] = v29;
    v22[4] = v30;
    v31 = v18 + 15;
    v32 = a2[14];
    a2[14] = 0;
    v34 = *(_DWORD **)(a1 + 4);
    v33 = *(_DWORD **)a1;
    v35 = v56;
    v18[14] = v32;
    v57 = v18 + 15;
    if ( v34 == v33 )
    {
      v52 = v33;
    }
    else
    {
      do
      {
        v36 = v35 - 15;
        v37 = v34 - 15 == v33;
        v38 = *(v34 - 14);
        v39 = *(v34 - 13);
        v40 = *(v34 - 12);
        *v36 = *(v34 - 15);
        v36[1] = v38;
        v36[2] = v39;
        v36[3] = v40;
        v41 = v35 - 11;
        v42 = *(v34 - 10);
        v43 = *(v34 - 9);
        v44 = *(v34 - 8);
        v45 = *(v34 - 7);
        *v41 = *(v34 - 11);
        v41[1] = v42;
        v41[2] = v43;
        v41[3] = v44;
        v41[4] = v45;
        v46 = v35 - 6;
        v47 = *(v34 - 5);
        v48 = *(v34 - 4);
        v49 = *(v34 - 3);
        v50 = *(v34 - 2);
        *v46 = *(v34 - 6);
        v46[1] = v47;
        v46[2] = v48;
        v46[3] = v49;
        v46[4] = v50;
        v51 = *(v34 - 1);
        *(v34 - 1) = 0;
        v34 -= 15;
        *(v35 - 1) = v51;
        v35 = v56 - 15;
        v56 -= 15;
      }
      while ( !v37 );
      v31 = v57;
      v33 = *(_DWORD **)(a1 + 4);
      v52 = *(_DWORD **)a1;
    }
    v53 = v58;
    v54 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)a1 = v35;
    *(_DWORD *)(a1 + 4) = v31;
    *(_DWORD *)(a1 + 8) = v53;
    v55 = v52;
    v56 = v52;
    v57 = v33;
    v58 = v54;
    return sub_13E564(&v55);
  }
  else
  {
    v5 = a2[1];
    v6 = a2[2];
    v7 = a2[3];
    *(_DWORD *)v2 = *a2;
    *(_DWORD *)(v2 + 4) = v5;
    *(_DWORD *)(v2 + 8) = v6;
    *(_DWORD *)(v2 + 12) = v7;
    v8 = a2[5];
    v9 = a2[6];
    v10 = a2[7];
    v11 = a2[8];
    *(_DWORD *)(v2 + 16) = a2[4];
    *(_DWORD *)(v2 + 20) = v8;
    *(_DWORD *)(v2 + 24) = v9;
    *(_DWORD *)(v2 + 28) = v10;
    *(_DWORD *)(v2 + 32) = v11;
    v12 = a2[10];
    v13 = a2[11];
    v14 = a2[12];
    v15 = a2[13];
    *(_DWORD *)(v2 + 36) = a2[9];
    *(_DWORD *)(v2 + 40) = v12;
    *(_DWORD *)(v2 + 44) = v13;
    *(_DWORD *)(v2 + 48) = v14;
    *(_DWORD *)(v2 + 52) = v15;
    v16 = a2[14];
    a2[14] = 0;
    result = v2 + 60;
    *(_DWORD *)(a1 + 4) = v2 + 60;
    *(_DWORD *)(v2 + 56) = v16;
  }
  return result;
}


// ======================================================================
// ADDR: 0x163020
// SYMBOL: sub_163020
int __fastcall sub_163020(int a1)
{
  if ( *(_BYTE *)(*(_DWORD *)a1 + 85) != 2 )
    ((void (*)(void))(dword_23DF24 + 3596973))();
  return a1;
}


// ======================================================================

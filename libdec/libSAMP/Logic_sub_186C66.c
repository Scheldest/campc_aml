// ADDR: 0x186dda
// SYMBOL: sub_186DDA
_QWORD *__fastcall sub_186DDA(_DWORD *a1)
{
  int v1; // r3
  int v2; // r4
  int v3; // r5
  int v4; // r6
  int v6; // r3
  int v7; // r4
  int v8; // r5
  int v9; // r6
  int v10; // r2
  int v11; // r3
  int v12; // r4
  int v13; // r5
  int v14; // r6
  int v15; // r3
  int v16; // r4
  int v17; // r5
  int v18; // r6
  int v19; // r3
  int v20; // r4
  int v21; // r5
  int v22; // r6
  int v23; // r2
  int v24; // r3
  int v25; // r4
  int v26; // r5
  int v27; // r6
  unsigned int v28; // r1
  int v29; // r6
  _QWORD *v30; // r0
  _QWORD *result; // r0
  unsigned int v32; // r4
  unsigned __int16 i; // r5
  _DWORD v34[16]; // [sp+0h] [bp-98h] BYREF
  _DWORD v35[22]; // [sp+40h] [bp-58h]

  v1 = a1[1];
  v2 = a1[2];
  v3 = a1[3];
  v4 = a1[4];
  v35[0] = *a1;
  v35[1] = v1;
  v35[2] = v2;
  v35[3] = v3;
  v35[4] = v4;
  v6 = a1[6];
  v7 = a1[7];
  v8 = a1[8];
  v9 = a1[9];
  v35[5] = a1[5];
  v35[6] = v6;
  v35[7] = v7;
  v35[8] = v8;
  v35[9] = v9;
  v10 = a1[11];
  v11 = a1[12];
  v12 = a1[13];
  v13 = a1[14];
  v14 = a1[15];
  v35[10] = a1[10];
  v35[11] = v10;
  v35[12] = v11;
  v35[13] = v12;
  v35[14] = v13;
  v35[15] = v14;
  v15 = a1[1];
  v16 = a1[2];
  v17 = a1[3];
  v18 = a1[4];
  v34[0] = *a1;
  v34[1] = v15;
  v34[2] = v16;
  v34[3] = v17;
  v34[4] = v18;
  v19 = a1[6];
  v20 = a1[7];
  v21 = a1[8];
  v22 = a1[9];
  v34[5] = a1[5];
  v34[6] = v19;
  v34[7] = v20;
  v34[8] = v21;
  v34[9] = v22;
  v23 = a1[11];
  v24 = a1[12];
  v25 = a1[13];
  v26 = a1[14];
  v27 = a1[15];
  v28 = 0;
  v34[10] = a1[10];
  v34[11] = v23;
  v34[12] = v24;
  v34[13] = v25;
  v34[14] = v26;
  v34[15] = v27;
  v29 = 0;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  v30 = a1 + 4;
  *v30 = 0LL;
  v30[1] = 0LL;
  v30 += 2;
  *v30 = 0LL;
  v30[1] = 0LL;
  result = v30 + 2;
  *result = 0LL;
  result[1] = 0LL;
  do
  {
    v32 = v35[v29];
    for ( i = 32; v32; v32 >>= 1 )
    {
      result = (_QWORD *)(v32 << 31);
      if ( v32 << 31 )
      {
        if ( v28 )
          sub_185E5E((int)v34, v28);
        result = (_QWORD *)sub_185EC4((int)a1, (int)v34);
        v28 = 0;
      }
      --i;
      ++v28;
    }
    ++v29;
    v28 += i;
  }
  while ( v29 != 16 );
  return result;
}


// ======================================================================
// ADDR: 0x186e6e
// SYMBOL: sub_186E6E
int __fastcall sub_186E6E(int *a1, int a2, _QWORD *a3)
{
  int *v4; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r4
  int v8; // r5
  int v9; // r6
  int v11; // r10
  int v12; // r2
  int v13; // r3
  int v14; // r4
  int v15; // r5
  int v16; // r6
  int v17; // r3
  int v18; // r4
  int v19; // r5
  int v20; // r6
  int v21; // r12
  unsigned int v22; // r1
  int result; // r0
  unsigned int v24; // r5
  unsigned __int16 i; // r6
  _DWORD v26[24]; // [sp+0h] [bp-60h] BYREF

  v5 = *a1;
  v6 = a1[1];
  v7 = a1[2];
  v8 = a1[3];
  v9 = a1[4];
  v4 = a1 + 5;
  v26[0] = v5;
  v26[1] = v6;
  v26[2] = v7;
  v26[3] = v8;
  v26[4] = v9;
  v11 = 0;
  v12 = *v4;
  v13 = v4[1];
  v14 = v4[2];
  v15 = v4[3];
  v16 = v4[4];
  v4 += 5;
  v26[5] = v12;
  v26[6] = v13;
  v26[7] = v14;
  v26[8] = v15;
  v26[9] = v16;
  v17 = v4[1];
  v18 = v4[2];
  v19 = v4[3];
  v20 = v4[4];
  v21 = v4[5];
  v26[10] = *v4;
  v26[11] = v17;
  v26[12] = v18;
  v26[13] = v19;
  v26[14] = v20;
  v26[15] = v21;
  v22 = 0;
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  a3[3] = 0LL;
  a3[4] = 0LL;
  a3[5] = 0LL;
  result = (int)(a3 + 6);
  a3[6] = 0LL;
  a3[7] = 0LL;
  do
  {
    v24 = *(_DWORD *)(a2 + 4 * v11);
    for ( i = 32; v24; v24 >>= 1 )
    {
      result = v24 << 31;
      if ( v24 << 31 )
      {
        if ( v22 )
          sub_185E5E((int)v26, v22);
        result = sub_185EC4((int)a3, (int)v26);
        v22 = 0;
      }
      --i;
      ++v22;
    }
    ++v11;
    v22 += i;
  }
  while ( v11 != 16 );
  return result;
}


// ======================================================================

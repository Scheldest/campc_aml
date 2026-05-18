// ADDR: 0x1a0eb0
// SYMBOL: sub_1A0EB0
__int16 *__fastcall sub_1A0EB0(__int16 *result, __int16 *a2, __int16 **a3, int a4)
{
  __int16 v4; // r5
  __int16 *v5; // r11
  __int16 v6; // r9
  __int16 v7; // r12
  int v8; // r4
  int v9; // r6
  unsigned int v10; // r3
  unsigned int v11; // r1
  int v12; // r3
  __int16 v13; // r2
  __int16 *v14; // r2
  __int16 v15; // r10
  __int16 v16; // r1
  __int16 v17; // r8
  __int16 v18; // r0
  __int16 v19; // r4
  int v20; // r5
  __int16 *v21; // r6
  __int16 v22; // r12
  __int16 v23; // lr
  int v24; // r0
  int v25; // r1
  int v26; // r6
  int v27; // lr
  __int16 v28; // r4
  __int16 v29; // t1
  __int16 v30; // t1
  __int64 v31; // kr08_8
  int v32; // r9
  __int16 v33; // t1
  __int64 v34; // kr10_8
  int v35; // lr
  __int16 v36; // r8
  int v37; // r4
  __int16 v38; // r3
  __int64 v39; // kr18_8
  int v40; // lr
  int v41; // r1
  unsigned int v42; // [sp+0h] [bp-54h]
  unsigned int v44; // [sp+8h] [bp-4Ch]
  int v45; // [sp+Ch] [bp-48h]
  int *v46; // [sp+10h] [bp-44h]
  int v47; // [sp+14h] [bp-40h]
  __int16 *v48; // [sp+18h] [bp-3Ch]
  __int16 *v49; // [sp+1Ch] [bp-38h]
  __int16 *v50; // [sp+1Ch] [bp-38h]
  __int16 v51; // [sp+20h] [bp-34h]
  int v52; // [sp+28h] [bp-2Ch]
  __int16 v53; // [sp+28h] [bp-2Ch]
  int v54; // [sp+28h] [bp-2Ch]
  __int16 *v55; // [sp+2Ch] [bp-28h]
  __int16 *v56; // [sp+30h] [bp-24h]
  __int16 v57; // [sp+30h] [bp-24h]
  __int16 v58; // [sp+34h] [bp-20h]
  __int16 v59; // [sp+34h] [bp-20h]

  v4 = a2[2];
  v5 = a2 + 3;
  v6 = a2[1];
  v7 = *a2;
  if ( a4 < 4 )
  {
    v26 = 0;
    v59 = *a2;
    v53 = 0;
  }
  else
  {
    v47 = a4 - 3;
    v8 = (int)*a3;
    v55 = a3[1];
    v9 = (int)a3[2];
    v46 = (int *)a3;
    v45 = a4;
    v10 = (a4 - 4) & 0xFFFFFFFC;
    v56 = a3[3];
    v11 = v10 + 7;
    v44 = v10 + 4;
    v12 = 0;
    v13 = v7;
    v42 = v11;
    v48 = result;
    v49 = v5;
    do
    {
      v58 = v13;
      v14 = &result[v12];
      v52 = v8;
      v15 = v4;
      v16 = *v14;
      v17 = v5[v12];
      v18 = v14[1];
      v19 = v14[2];
      LOWORD(v14) = v14[3];
      v20 = v18 * v17 + v16 * v4 + v9;
      v21 = &v5[v12];
      v12 += 4;
      v22 = v21[1];
      v23 = v21[2];
      v51 = v21[3];
      v56 = (__int16 *)((char *)v56 + v51 * (__int16)v14 + v23 * v19 + v22 * v18 + v17 * v16);
      v5 = v49;
      v55 = (__int16 *)((char *)v55 + (__int16)v14 * v22 + v19 * v17 + v18 * v15 + v16 * v6);
      v9 = (__int16)v14 * v23 + v19 * v22 + v20;
      v24 = v18 * v6 + v16 * v58 + v52;
      v6 = v23;
      v25 = v19 * v15 + v24;
      result = v48;
      v8 = (__int16)v14 * v17 + v25;
      v13 = v22;
      v4 = v51;
    }
    while ( v12 < v47 );
    v59 = v22;
    a3 = (__int16 **)v46;
    v53 = v17;
    *v46 = v8;
    v46[1] = (int)v55;
    v46[2] = v9;
    v46[3] = (int)v56;
    v26 = v44;
    v5 = &a2[v42];
    a4 = v45;
    result = &v48[v44];
  }
  v27 = v26 | 1;
  v57 = v6;
  if ( v26 < a4 )
  {
    v29 = *result++;
    v28 = v29;
    v30 = *v5++;
    v31 = *(_QWORD *)(a3 + 1);
    v54 = (int)a3[3] + v30 * v28;
    *a3 = (__int16 *)((char *)*a3 + v28 * v59);
    a3[1] = (__int16 *)(v28 * v6 + v31);
    a3[2] = (__int16 *)(v28 * v4 + HIDWORD(v31));
    a3[3] = (__int16 *)v54;
    v53 = v30;
  }
  v32 = v27 + 1;
  if ( v27 >= a4 )
  {
    v50 = v5;
    v36 = v59;
    if ( v32 >= a4 )
      return result;
    goto LABEL_12;
  }
  v33 = *result++;
  v50 = v5 + 1;
  v34 = *((_QWORD *)a3 + 1);
  v35 = *v5 * v33 + HIDWORD(v34);
  v36 = *v5;
  v37 = (int)a3[1] + v33 * v4;
  *a3 = (__int16 *)((char *)*a3 + v33 * v57);
  a3[1] = (__int16 *)v37;
  a3[2] = (__int16 *)(v33 * v53 + v34);
  a3[3] = (__int16 *)v35;
  if ( v32 < a4 )
  {
LABEL_12:
    v38 = *result;
    v39 = *((_QWORD *)a3 + 1);
    v40 = (int)a3[1] + *result * v53;
    v41 = *v50 * *result + HIDWORD(v39);
    result = (__int16 *)((char *)*a3 + *result * v4);
    *a3 = result;
    a3[1] = (__int16 *)v40;
    a3[2] = (__int16 *)(v38 * v36 + v39);
    a3[3] = (__int16 *)v41;
  }
  return result;
}


// ======================================================================

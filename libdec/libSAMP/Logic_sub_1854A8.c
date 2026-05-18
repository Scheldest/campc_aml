// ADDR: 0x186258
// SYMBOL: sub_186258
__int64 *__fastcall sub_186258(__int64 *a1, __int64 *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r1
  __int64 *v7; // r5
  __int64 v8; // d16
  __int64 v9; // d17
  __int64 v10; // d18
  __int64 v11; // d19
  unsigned int v12; // r2
  unsigned int v13; // r1
  __int64 *v15; // r8
  unsigned int v16; // r1
  unsigned int v17; // r0
  unsigned int v19; // r1
  unsigned int v20; // r0
  unsigned int v22; // r1
  unsigned int v23; // r0
  unsigned int v25; // r1
  unsigned int v26; // r0
  unsigned int v28; // r1
  unsigned int v29; // r0
  unsigned int v31; // r1
  unsigned int v32; // r0
  __int64 *v34; // r0
  __int64 *result; // r0
  __int64 v36; // d16
  __int64 v37; // d17
  __int64 v38; // d18
  __int64 v39; // d19
  _QWORD *v40; // r9
  __int64 *v41; // [sp+14h] [bp-E4h]
  __int64 v42[4]; // [sp+18h] [bp-E0h] BYREF
  __int64 v43[4]; // [sp+38h] [bp-C0h] BYREF
  __int64 v44[4]; // [sp+58h] [bp-A0h] BYREF
  __int64 v45[4]; // [sp+78h] [bp-80h] BYREF
  __int64 v46[4]; // [sp+98h] [bp-60h] BYREF
  int v47; // [sp+BCh] [bp-3Ch] BYREF
  __int64 v48; // [sp+C0h] [bp-38h]
  int v49; // [sp+C8h] [bp-30h]
  __int64 v50; // [sp+CCh] [bp-2Ch]
  __int64 v51; // [sp+D4h] [bp-24h]

  v48 = 0LL;
  v49 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v47 = 1;
  sub_18553A(a1, v44);
  sub_185988(a1, v44, v42, (int)v43);
  if ( LODWORD(v43[0]) )
    goto LABEL_6;
  v4 = 0;
  do
  {
    v5 = v4;
    if ( v4 == 7 )
      break;
  }
  while ( !*((_DWORD *)v43 + ++v4) );
  if ( v5 <= 6 )
  {
LABEL_6:
    v41 = a1;
    v8 = *a1;
    v9 = a1[1];
    v7 = a1 + 2;
    v10 = *v7;
    v11 = v7[1];
    v46[0] = v8;
    v46[1] = v9;
    v46[2] = v10;
    v46[3] = v11;
    sub_185174((int)v46, (int)v42);
    sub_185988(v44, v43, v42, (int)v44);
    if ( LODWORD(v44[0]) )
      goto LABEL_11;
    v12 = 0;
    do
    {
      v13 = v12;
      if ( v12 == 7 )
        break;
    }
    while ( !*((_DWORD *)v44 + ++v12) );
    if ( v13 <= 6 )
    {
LABEL_11:
      v15 = v41;
      while ( 1 )
      {
        sub_185B6C(v42, (int)v46, (__int64 *)&v47, v15, v45);
        sub_185988(v43, v44, v42, (int)v43);
        if ( !LODWORD(v43[0]) )
        {
          v16 = 0;
          do
          {
            v17 = v16;
            if ( v16 == 7 )
              break;
          }
          while ( !*((_DWORD *)v43 + ++v16) );
          v15 = v41;
          if ( v17 > 6 )
          {
LABEL_43:
            v34 = v45;
            goto LABEL_47;
          }
        }
        sub_185B6C(v42, (int)v45, v46, v15, &v47);
        sub_185988(v44, v43, v42, (int)v44);
        if ( !LODWORD(v44[0]) )
        {
          v19 = 0;
          do
          {
            v20 = v19;
            if ( v19 == 7 )
              break;
          }
          while ( !*((_DWORD *)v44 + ++v19) );
          v15 = v41;
          if ( v20 > 6 )
            break;
        }
        sub_185B6C(v42, (int)&v47, v45, v15, v46);
        sub_185988(v43, v44, v42, (int)v43);
        if ( !LODWORD(v43[0]) )
        {
          v22 = 0;
          do
          {
            v23 = v22;
            if ( v22 == 7 )
              break;
          }
          while ( !*((_DWORD *)v43 + ++v22) );
          v15 = v41;
          if ( v23 > 6 )
          {
LABEL_42:
            v34 = v46;
            goto LABEL_47;
          }
        }
        sub_185B6C(v42, (int)v46, (__int64 *)&v47, v15, v45);
        sub_185988(v44, v43, v42, (int)v44);
        if ( !LODWORD(v44[0]) )
        {
          v25 = 0;
          do
          {
            v26 = v25;
            if ( v25 == 7 )
              break;
          }
          while ( !*((_DWORD *)v44 + ++v25) );
          v15 = v41;
          if ( v26 > 6 )
            goto LABEL_43;
        }
        sub_185B6C(v42, (int)v45, v46, v15, &v47);
        sub_185988(v43, v44, v42, (int)v43);
        if ( !LODWORD(v43[0]) )
        {
          v28 = 0;
          do
          {
            v29 = v28;
            if ( v28 == 7 )
              break;
          }
          while ( !*((_DWORD *)v43 + ++v28) );
          v15 = v41;
          if ( v29 > 6 )
            break;
        }
        sub_185B6C(v42, (int)&v47, v45, v15, v46);
        sub_185988(v44, v43, v42, (int)v44);
        if ( !LODWORD(v44[0]) )
        {
          v31 = 0;
          do
          {
            v32 = v31;
            if ( v31 == 7 )
              break;
          }
          while ( !*((_DWORD *)v44 + ++v31) );
          v15 = v41;
          if ( v32 >= 7 )
            goto LABEL_42;
        }
      }
      v34 = (__int64 *)&v47;
    }
    else
    {
      v34 = v46;
    }
  }
  else
  {
    v34 = (__int64 *)&v47;
  }
LABEL_47:
  v36 = *v34;
  v37 = v34[1];
  result = v34 + 2;
  v38 = *result;
  v39 = result[1];
  *a2 = v36;
  a2[1] = v37;
  v40 = a2 + 2;
  *v40 = v38;
  v40[1] = v39;
  return result;
}


// ======================================================================
// ADDR: 0x186522
// SYMBOL: sub_186522
int __fastcall sub_186522(int *a1, int *a2, _QWORD *a3, _DWORD *a4)
{
  int *v5; // r1
  int v6; // r3
  int v7; // r4
  int v8; // r5
  int v9; // r6
  int v10; // r12
  int v12; // r3
  int v13; // r4
  int v14; // r5
  int v15; // r6
  int v16; // r12
  int v17; // r4
  int v18; // r5
  int v19; // r6
  int v20; // r12
  int v21; // lr
  int *v22; // r0
  int v23; // r2
  int v24; // r3
  int v25; // r4
  int v26; // r5
  int v27; // r6
  int v28; // r2
  int v29; // r3
  int v30; // r4
  int v31; // r5
  int v32; // r6
  int v33; // r3
  int v34; // r4
  int v35; // r5
  int v36; // r6
  int v37; // r12
  unsigned int v38; // r0
  unsigned int v39; // r2
  int v40; // r1
  unsigned int v41; // r3
  int v42; // r2
  int v43; // r1
  unsigned int v44; // r2
  int v45; // r1
  unsigned int v46; // r3
  int v47; // r9
  int i; // r1
  unsigned int v49; // r2
  int v50; // r3
  unsigned int v52; // r1
  int v53; // r2
  unsigned int v54; // r3
  int v55; // r0
  unsigned int v56; // r2
  unsigned int v57; // r3
  int v58; // r0
  unsigned int v59; // r1
  unsigned int v60; // r2
  bool v61; // zf
  int v62; // r1
  int j; // r0
  unsigned int v64; // r2
  unsigned int v65; // r4
  int v66; // r0
  unsigned int v67; // r1
  unsigned int v68; // r2
  int v69; // r1
  int k; // r0
  unsigned int v71; // r2
  unsigned int v73; // r4
  _DWORD v74[15]; // [sp+0h] [bp-60h] BYREF
  int v75; // [sp+3Ch] [bp-24h]

  v6 = *a2;
  v7 = a2[1];
  v8 = a2[2];
  v9 = a2[3];
  v10 = a2[4];
  v5 = a2 + 5;
  v74[0] = v6;
  v74[1] = v7;
  v74[2] = v8;
  v74[3] = v9;
  v74[4] = v10;
  v12 = *v5;
  v13 = v5[1];
  v14 = v5[2];
  v15 = v5[3];
  v16 = v5[4];
  v5 += 5;
  v74[5] = v12;
  v74[6] = v13;
  v74[7] = v14;
  v74[8] = v15;
  v74[9] = v16;
  v17 = v5[1];
  v18 = v5[2];
  v19 = v5[3];
  v20 = v5[4];
  v21 = v5[5];
  v74[10] = *v5;
  v74[11] = v17;
  v74[12] = v18;
  v74[13] = v19;
  v74[14] = v20;
  v75 = v21;
  v23 = *a1;
  v24 = a1[1];
  v25 = a1[2];
  v26 = a1[3];
  v27 = a1[4];
  v22 = a1 + 5;
  *a4 = v23;
  a4[1] = v24;
  a4[2] = v25;
  a4[3] = v26;
  a4[4] = v27;
  v28 = *v22;
  v29 = v22[1];
  v30 = v22[2];
  v31 = v22[3];
  v32 = v22[4];
  v22 += 5;
  a4[5] = v28;
  a4[6] = v29;
  a4[7] = v30;
  a4[8] = v31;
  a4[9] = v32;
  v33 = v22[1];
  v34 = v22[2];
  v35 = v22[3];
  v36 = v22[4];
  v37 = v22[5];
  a4[10] = *v22;
  a4[11] = v33;
  a4[12] = v34;
  a4[13] = v35;
  a4[14] = v36;
  a4[15] = v37;
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  a3[3] = 0LL;
  v38 = v75;
  a3[4] = 0LL;
  a3[5] = 0LL;
  a3[6] = 0LL;
  a3[7] = 0LL;
  if ( (v38 & 0x80000000) != 0 )
  {
LABEL_11:
    v44 = a4[15];
    if ( v38 <= v44 )
    {
      v45 = 14;
      v46 = v38;
      v47 = 1;
      while ( v46 >= v44 && v45 != -1 )
      {
        v44 = a4[v45];
        v46 = v74[v45--];
        if ( v46 > v44 )
          goto LABEL_16;
      }
      goto LABEL_47;
    }
LABEL_16:
    v75 = v38 >> 1;
    for ( i = 14; i != -1; --i )
    {
      v49 = v74[i];
      v74[i] = (v38 << 31) | (v49 >> 1);
      v38 = v49;
    }
LABEL_58:
    v65 = 0;
    return sub_185E5E((int)a3, v65);
  }
  v39 = a4[15];
  if ( v39 <= v38 )
  {
    v40 = 14;
    v41 = v38;
    while ( v39 >= v41 && v40 != -1 )
    {
      v39 = a4[v40];
      v41 = v74[v40--];
      if ( v39 > v41 )
        goto LABEL_7;
    }
    goto LABEL_11;
  }
LABEL_7:
  v42 = 15;
  v43 = 480;
  while ( !a4[v42] )
  {
    --v42;
    v43 -= 32;
    if ( v42 == -1 )
      goto LABEL_26;
  }
  if ( v42 < 0 )
    goto LABEL_26;
  v50 = v42;
  while ( !v74[v50] )
  {
    if ( v50-- <= 0 )
    {
      v50 = -1;
      break;
    }
  }
  if ( v50 == v42 )
  {
LABEL_26:
    v47 = 1;
    goto LABEL_27;
  }
  v73 = v43 - 32 * v50;
  sub_185E5E((int)v74, v73);
  v38 = v75;
  v47 = v73 + 1;
LABEL_27:
  if ( (v38 & 0x80000000) == 0 )
  {
    v52 = a4[15];
    while ( v52 > v38 )
    {
LABEL_34:
      v55 = 0;
      v56 = 0;
      do
      {
        v57 = v74[v55];
        v74[v55++] = v56 | (2 * v57);
        v56 = v57 >> 31;
      }
      while ( v55 != 16 );
      v38 = v75;
      ++v47;
      if ( v75 <= -1 )
        goto LABEL_37;
    }
    v53 = 14;
    v54 = v52;
    while ( v54 >= v38 && v53 != -1 )
    {
      v54 = a4[v53];
      v38 = v74[v53--];
      if ( v54 > v38 )
        goto LABEL_34;
    }
  }
LABEL_37:
  v58 = 15;
  do
  {
    v59 = a4[v58];
    v60 = v74[v58];
    if ( v60 > v59 )
    {
      v62 = 0;
      for ( j = 15; j != -1; --j )
      {
        v64 = v74[j];
        v74[j] = v62 | (v64 >> 1);
        v62 = v64 << 31;
      }
      --v47;
      goto LABEL_37;
    }
    if ( v60 < v59 )
      break;
    v61 = v58-- == 0;
  }
  while ( !v61 );
  if ( !v47 )
    goto LABEL_58;
LABEL_47:
  v65 = 0;
  do
  {
    ++v65;
    --v47;
    v66 = 15;
    while ( 1 )
    {
      v67 = a4[v66];
      v68 = v74[v66];
      if ( v68 > v67 )
        break;
      if ( v68 >= v67 )
      {
        v61 = v66-- == 0;
        if ( !v61 )
          continue;
      }
      sub_185F02((int)a4, (int)v74);
      sub_185E5E((int)a3, v65);
      v65 = 0;
      *(_DWORD *)a3 |= 1u;
      break;
    }
    v69 = 0;
    for ( k = 15; k != -1; --k )
    {
      v71 = v74[k];
      v74[k] = v69 | (v71 >> 1);
      v69 = v71 << 31;
    }
  }
  while ( v47 );
  return sub_185E5E((int)a3, v65);
}


// ======================================================================

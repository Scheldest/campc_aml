// ADDR: 0x185cb0
// SYMBOL: sub_185CB0
unsigned int __fastcall sub_185CB0(int *a1, int *a2, _DWORD *a3)
{
  int *v3; // r1
  int v4; // r3
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r12
  int v10; // r3
  int v11; // r4
  int v12; // r5
  int v13; // r6
  int v14; // r12
  int v15; // r4
  int v16; // r5
  int v17; // r6
  int v18; // r12
  int v19; // lr
  int *v20; // r0
  int v21; // r2
  int v22; // r3
  int v23; // r4
  int v24; // r5
  int v25; // r6
  int v26; // r2
  int v27; // r3
  int v28; // r4
  int v29; // r5
  int v30; // r6
  int v31; // r3
  int v32; // r4
  int v33; // r5
  int v34; // r6
  int v35; // r12
  unsigned int result; // r0
  unsigned int v37; // r2
  int v38; // r1
  unsigned int v39; // r3
  int v40; // r2
  int v41; // r1
  unsigned int v42; // r2
  int v43; // r1
  unsigned int v44; // r3
  int v45; // r6
  int i; // r1
  unsigned int v47; // r2
  int v48; // r3
  unsigned int v50; // r1
  int v51; // r2
  unsigned int v52; // r3
  int v53; // r0
  unsigned int v54; // r2
  unsigned int v55; // r3
  unsigned int v56; // r1
  unsigned int v57; // r2
  bool v58; // zf
  int v59; // r1
  int j; // r0
  unsigned int v61; // r2
  int v62; // r6
  int v63; // r0
  unsigned int v64; // r1
  unsigned int v65; // r2
  int v66; // r1
  unsigned int v67; // r2
  _DWORD v68[15]; // [sp+0h] [bp-58h] BYREF
  int v69; // [sp+3Ch] [bp-1Ch]

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v8 = a2[4];
  v3 = a2 + 5;
  v68[0] = v4;
  v68[1] = v5;
  v68[2] = v6;
  v68[3] = v7;
  v68[4] = v8;
  v10 = *v3;
  v11 = v3[1];
  v12 = v3[2];
  v13 = v3[3];
  v14 = v3[4];
  v3 += 5;
  v68[5] = v10;
  v68[6] = v11;
  v68[7] = v12;
  v68[8] = v13;
  v68[9] = v14;
  v15 = v3[1];
  v16 = v3[2];
  v17 = v3[3];
  v18 = v3[4];
  v19 = v3[5];
  v68[10] = *v3;
  v68[11] = v15;
  v68[12] = v16;
  v68[13] = v17;
  v68[14] = v18;
  v69 = v19;
  v21 = *a1;
  v22 = a1[1];
  v23 = a1[2];
  v24 = a1[3];
  v25 = a1[4];
  v20 = a1 + 5;
  *a3 = v21;
  a3[1] = v22;
  a3[2] = v23;
  a3[3] = v24;
  a3[4] = v25;
  v26 = *v20;
  v27 = v20[1];
  v28 = v20[2];
  v29 = v20[3];
  v30 = v20[4];
  v20 += 5;
  a3[5] = v26;
  a3[6] = v27;
  a3[7] = v28;
  a3[8] = v29;
  a3[9] = v30;
  v31 = v20[1];
  v32 = v20[2];
  v33 = v20[3];
  v34 = v20[4];
  v35 = v20[5];
  a3[10] = *v20;
  a3[11] = v31;
  a3[12] = v32;
  a3[13] = v33;
  a3[14] = v34;
  a3[15] = v35;
  result = v69;
  if ( v69 < 0 )
  {
LABEL_11:
    v42 = a3[15];
    if ( v69 <= v42 )
    {
      v43 = 14;
      v44 = v69;
      v45 = 1;
      do
      {
        if ( v44 < v42 || v43 == -1 )
          goto LABEL_48;
        v42 = a3[v43];
        v44 = v68[v43--];
      }
      while ( v44 <= v42 );
    }
    v69 = (unsigned int)v69 >> 1;
    for ( i = 14; i != -1; --i )
    {
      v47 = v68[i];
      v68[i] = (result << 31) | (v47 >> 1);
      result = v47;
    }
    return result;
  }
  v37 = a3[15];
  if ( v37 <= v69 )
  {
    v38 = 14;
    v39 = v69;
    while ( v37 >= v39 && v38 != -1 )
    {
      v37 = a3[v38];
      v39 = v68[v38--];
      if ( v37 > v39 )
        goto LABEL_7;
    }
    goto LABEL_11;
  }
LABEL_7:
  v40 = 15;
  v41 = 480;
  while ( !a3[v40] )
  {
    --v40;
    v41 -= 32;
    if ( v40 == -1 )
      goto LABEL_26;
  }
  if ( v40 < 0 )
    goto LABEL_26;
  v48 = v40;
  while ( !v68[v48] )
  {
    if ( v48-- <= 0 )
    {
      v48 = -1;
      break;
    }
  }
  if ( v48 == v40 )
  {
LABEL_26:
    v45 = 1;
    goto LABEL_27;
  }
  v62 = v41 - 32 * v48;
  sub_185E5E((int)v68);
  result = v69;
  v45 = v62 + 1;
LABEL_27:
  if ( (result & 0x80000000) == 0 )
  {
    v50 = a3[15];
    while ( v50 > result )
    {
LABEL_34:
      v53 = 0;
      v54 = 0;
      do
      {
        v55 = v68[v53];
        v68[v53++] = v54 | (2 * v55);
        v54 = v55 >> 31;
      }
      while ( v53 != 16 );
      result = v69;
      ++v45;
      if ( v69 <= -1 )
        goto LABEL_37;
    }
    v51 = 14;
    v52 = v50;
    while ( v52 >= result && v51 != -1 )
    {
      v52 = a3[v51];
      result = v68[v51--];
      if ( v52 > result )
        goto LABEL_34;
    }
  }
LABEL_37:
  result = 60;
  do
  {
    v56 = *(_DWORD *)((char *)a3 + result);
    v57 = *(_DWORD *)((char *)v68 + result);
    if ( v57 > v56 )
    {
      v59 = 0;
      for ( j = 15; j != -1; --j )
      {
        v61 = v68[j];
        v68[j] = v59 | (v61 >> 1);
        v59 = v61 << 31;
      }
      --v45;
      goto LABEL_37;
    }
    if ( v57 < v56 )
      break;
    v58 = result == 0;
    result -= 4;
  }
  while ( !v58 );
  while ( v45 )
  {
LABEL_48:
    --v45;
    v63 = 15;
    while ( 1 )
    {
      v64 = a3[v63];
      v65 = v68[v63];
      if ( v65 > v64 )
        break;
      if ( v65 >= v64 )
      {
        v58 = v63-- == 0;
        if ( !v58 )
          continue;
      }
      sub_185F02(a3, v68);
      break;
    }
    v66 = 0;
    for ( result = 15; result != -1; --result )
    {
      v67 = v68[result];
      v68[result] = v66 | (v67 >> 1);
      v66 = v67 << 31;
    }
  }
  return result;
}


// ======================================================================

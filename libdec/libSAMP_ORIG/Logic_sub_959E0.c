// ADDR: 0x8a1f8
// SYMBOL: sub_8A1F8
int __fastcall sub_8A1F8(unsigned __int64 *a1, int a2, int a3)
{
  float *v4; // r2
  int v5; // r6
  float v6; // s16
  unsigned __int64 v7; // d17
  float v8; // s6
  float v9; // s4
  float v10; // s8
  float v11; // s2
  float v12; // s0
  float v13; // s10
  float v14; // s12
  float v15; // s14
  _BOOL4 v16; // r9
  int v17; // r0
  float v18; // s4
  float v19; // s6
  float v20; // s4
  float v21; // s2
  float v22; // s8
  float v23; // s10
  float v24; // s12
  float v25; // s14
  float v26; // s1
  float v27; // s6
  float v28; // s2
  float v29; // s4
  float v30; // s8
  float v31; // s10
  float v32; // s12
  float v33; // s14
  float v34; // s1
  float v36[2]; // [sp+10h] [bp-68h] BYREF
  float v37[2]; // [sp+18h] [bp-60h] BYREF
  unsigned __int64 v38; // [sp+20h] [bp-58h] BYREF
  unsigned __int64 v39; // [sp+28h] [bp-50h] BYREF
  int v40; // [sp+34h] [bp-44h]

  v4 = (float *)dword_1ACF68;
  if ( *(_DWORD *)(dword_1ACF68 + 6840) == a2 && ((a3 & 4) != 0 || !*(_BYTE *)(dword_1ACF68 + 6934)) )
  {
    v5 = *(_DWORD *)(dword_1ACF68 + 6572);
    if ( !*(_BYTE *)(v5 + 320) )
    {
      if ( (a3 & 8) != 0 )
        v6 = 0.0;
      else
        v6 = *(float *)(dword_1ACF68 + 5464);
      v7 = a1[1];
      v38 = *a1;
      v39 = v7;
      v8 = *(float *)(v5 + 532);
      v9 = *(float *)(v5 + 528);
      v10 = v8;
      v11 = *(float *)(v5 + 536);
      v12 = *(float *)(v5 + 540);
      if ( *((float *)&v38 + 1) >= v8 )
        v10 = *((float *)&v38 + 1);
      v13 = *(float *)(v5 + 528);
      if ( *(float *)&v38 >= v9 )
        LODWORD(v13) = v38;
      v14 = *(float *)(v5 + 536);
      if ( *(float *)&v39 < v11 )
        LODWORD(v14) = v39;
      v15 = *(float *)(v5 + 540);
      if ( *((float *)&v39 + 1) < v12 )
        v15 = *((float *)&v39 + 1);
      v38 = __PAIR64__(LODWORD(v10), LODWORD(v13));
      v39 = __PAIR64__(LODWORD(v15), LODWORD(v14));
      if ( a3 << 31 )
      {
        *((float *)&v38 + 1) = v10 + -4.0;
        *((float *)&v39 + 1) = v15 + 4.0;
        *(float *)&v39 = v14 + 4.0;
        *(float *)&v38 = v13 + -4.0;
        v16 = (float)(v10 + -4.0) >= v8
           && (float)(v13 + -4.0) >= v9
           && (float)(v14 + 4.0) <= v11
           && (float)(v15 + 4.0) <= v12;
        if ( (float)(v10 + -4.0) < v8
          || (float)(v13 + -4.0) < v9
          || (float)(v14 + 4.0) > v11
          || (float)(v15 + 4.0) > v12 )
        {
          sub_9BFD8(
            *(_DWORD *)(v5 + 636),
            COERCE_INT(v13 + -4.0),
            COERCE_INT(v10 + -4.0),
            COERCE_INT(v14 + 4.0),
            v15 + 4.0,
            0);
          v4 = (float *)dword_1ACF68;
        }
        v17 = *(_DWORD *)(v5 + 636);
        v37[1] = (float)(v10 + -4.0) + 1.0;
        v37[0] = (float)(v13 + -4.0) + 1.0;
        v18 = v4[1350];
        v36[1] = (float)(v15 + 4.0) + -1.0;
        v36[0] = (float)(v14 + 4.0) + -1.0;
        v19 = v4[1570];
        v20 = v4[1572] * v18;
        v21 = v4[1569];
        v22 = v4[1571];
        v23 = v19;
        if ( v19 > 1.0 )
          v23 = 1.0;
        v24 = v4[1569];
        if ( v21 > 1.0 )
          v24 = 1.0;
        v25 = v4[1571];
        if ( v22 > 1.0 )
          v25 = 1.0;
        v26 = v20;
        if ( v20 > 1.0 )
          v26 = 1.0;
        if ( v19 < 0.0 )
          v23 = 0.0;
        if ( v21 < 0.0 )
          v24 = 0.0;
        if ( v22 < 0.0 )
          v25 = 0.0;
        if ( v20 < 0.0 )
          v26 = 0.0;
        sub_9D568(
          v17,
          (int)v37,
          (int)v36,
          (int)(float)((float)(v24 * 255.0) + 0.5) | ((int)(float)((float)(v23 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v25 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v26 * 255.0) + 0.5) << 24),
          v6,
          15,
          2.0);
        if ( !v16 )
          sub_9C12E(*(_DWORD *)(v5 + 636));
      }
      if ( (a3 & 2) != 0 )
      {
        v27 = *(float *)(dword_1ACF68 + 6280);
        v28 = *(float *)(dword_1ACF68 + 6288) * *(float *)(dword_1ACF68 + 5400);
        v29 = *(float *)(dword_1ACF68 + 6276);
        v30 = *(float *)(dword_1ACF68 + 6284);
        v31 = v27;
        if ( v27 > 1.0 )
          v31 = 1.0;
        v32 = *(float *)(dword_1ACF68 + 6276);
        if ( v29 > 1.0 )
          v32 = 1.0;
        v33 = *(float *)(dword_1ACF68 + 6284);
        if ( v30 > 1.0 )
          v33 = 1.0;
        v34 = *(float *)(dword_1ACF68 + 6288) * *(float *)(dword_1ACF68 + 5400);
        if ( v28 > 1.0 )
          v34 = 1.0;
        if ( v27 < 0.0 )
          v31 = 0.0;
        if ( v29 < 0.0 )
          v32 = 0.0;
        if ( v30 < 0.0 )
          v33 = 0.0;
        if ( v28 < 0.0 )
          v34 = 0.0;
        sub_9D568(
          *(_DWORD *)(v5 + 636),
          (int)&v38,
          (int)&v39,
          (int)(float)((float)(v32 * 255.0) + 0.5) | ((int)(float)((float)(v31 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v33 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v34 * 255.0) + 0.5) << 24),
          v6,
          -1,
          1.0);
      }
    }
  }
  return v40;
}


// ======================================================================
// ADDR: 0x8b314
// SYMBOL: sub_8B314
int __fastcall sub_8B314(float *a1, int a2, float *a3)
{
  int v5; // r8
  int v6; // r4
  int v7; // r6
  int v8; // r1
  float *v9; // r9
  int v10; // lr
  __int64 v11; // d17
  int v12; // r0
  float *v13; // r1
  float v14; // s2
  float v15; // s0
  float *v16; // r2
  float v17; // s6
  float v18; // s8
  float v19; // s6
  int result; // r0
  float v21; // s12
  float v22; // s2
  float v23; // s0
  float v24; // s0
  float v25; // s2
  float v26; // s22
  float v27; // s20
  float v28; // s18
  float v29; // s16
  int v30; // r12
  char v31; // r2
  int *v32; // r12
  int v33; // r0
  int v34; // r0
  int v35; // r0
  float v36; // s0
  float v37; // s10
  float v38; // s2
  float v39; // s8
  float v40; // s12
  float v41; // s14
  int v42; // r2
  int v43; // r1
  int v44; // r8
  int v45; // r3
  int *v46; // r9
  int v47; // r0
  __int64 v48; // r0
  int v49; // [sp+4h] [bp-4Ch]

  v5 = dword_1ACF68;
  v6 = dword_1ACF68 + 6572;
  v7 = *(_DWORD *)(dword_1ACF68 + 6572);
  if ( !a2 )
    goto LABEL_5;
  v8 = *(_DWORD *)(dword_1ACF68 + 6840);
  v9 = a3;
  *(_DWORD *)(v7 + 316) |= *(_DWORD *)(v7 + 308);
  if ( v8 != a2 && !*(_BYTE *)(v6 + 364) )
    goto LABEL_5;
  v10 = *(_DWORD *)(v6 + 264);
  if ( *(_DWORD *)(v10 + 772) != *(_DWORD *)(v7 + 772)
    || v7 != v10 && ((*(_DWORD *)(v7 + 8) | *(_DWORD *)(v10 + 8)) & 0x800000) == 0 )
  {
    goto LABEL_5;
  }
  v24 = *(float *)(v7 + 12);
  v25 = *(float *)(v7 + 16);
  if ( !a3 )
    v9 = a1;
  v26 = *v9 - v24;
  v27 = v9[1] - v25;
  v28 = v9[2] - v24;
  v29 = v9[3] - v25;
  v30 = *(_DWORD *)(v7 + 364);
  if ( *(_BYTE *)(v6 + 365) && *(_DWORD *)(v6 + 352) == *(_DWORD *)(v7 + 304) )
  {
    if ( (v30 & 0x10) != 0 )
    {
      if ( !*(_DWORD *)(v6 + 368) )
      {
        *(float *)(v6 + 372) = v26;
        *(float *)(v6 + 376) = v27;
        *(float *)(v6 + 380) = v28;
        *(float *)(v6 + 384) = v29;
        *(_DWORD *)(v6 + 368) = a2;
      }
    }
    else
    {
      v31 = *(_BYTE *)(v6 + 389);
      *(float *)(v6 + 372) = v26;
      *(float *)(v6 + 376) = v27;
      *(float *)(v6 + 380) = v28;
      *(float *)(v6 + 384) = v29;
      *(_DWORD *)(v6 + 368) = a2;
      *(_BYTE *)(v6 + 365) = 0;
      *(_BYTE *)(v6 + 364) = v31;
    }
  }
  if ( v8 != a2 )
  {
    if ( (v30 & 0xC) != 0 )
      goto LABEL_62;
LABEL_41:
    v32 = (int *)(v5 + 11488);
    v33 = v5 + 7064;
    if ( v7 == v10 )
      v33 = v5 + 6984;
    if ( *(_BYTE *)(v6 + 389) )
    {
      v49 = v33;
      v34 = sub_9AF40(v33, *(_DWORD *)v9, *((_DWORD *)v9 + 1), *((_DWORD *)v9 + 2), v9[3]);
      v32 = (int *)(v5 + 11488);
      if ( v34 )
      {
        v35 = *(_DWORD *)(v5 + 11488);
        *(_DWORD *)v49 = a2;
        *(_DWORD *)(v49 + 8) = v7;
        *(float *)(v49 + 24) = v26;
        *(float *)(v49 + 28) = v27;
        *(float *)(v49 + 32) = v28;
        *(float *)(v49 + 36) = v29;
        *(_DWORD *)(v49 + 4) = v35;
      }
    }
    if ( (*(_BYTE *)(v6 + 392) & 0x20) != 0 )
    {
      v36 = v9[1];
      v37 = *(float *)(v7 + 540);
      if ( v36 < v37 )
      {
        v38 = v9[3];
        v39 = *(float *)(v7 + 532);
        if ( v38 > v39 && *v9 < *(float *)(v7 + 536) && v9[2] > *(float *)(v7 + 528) )
        {
          v40 = v9[1];
          if ( v36 > v37 )
            v40 = *(float *)(v7 + 540);
          v41 = v9[3];
          if ( v38 > v37 )
            v41 = *(float *)(v7 + 540);
          if ( v36 < v39 )
            v40 = *(float *)(v7 + 532);
          if ( v38 < v39 )
            v41 = *(float *)(v7 + 532);
          if ( (float)(v41 - v40) >= (float)((float)(v38 - v36) * 0.7) )
          {
            v42 = *((_DWORD *)v9 + 1);
            v43 = *(_DWORD *)v9;
            v44 = v5 + 7024;
            v45 = *((_DWORD *)v9 + 2);
            v46 = v32;
            if ( sub_9AF40(v44, v43, v42, v45, v38) )
            {
              v47 = *v46;
              *(float *)(v44 + 24) = v26;
              *(float *)(v44 + 28) = v27;
              *(float *)(v44 + 32) = v28;
              *(float *)(v44 + 36) = v29;
              *(_DWORD *)v44 = a2;
              *(_DWORD *)(v44 + 4) = v47;
              *(_DWORD *)(v44 + 8) = v7;
            }
          }
        }
      }
    }
    goto LABEL_62;
  }
  if ( (*(_BYTE *)(v6 + 392) & 0x10) != 0 && (v30 & 0xC) == 0 )
    goto LABEL_41;
LABEL_62:
  if ( *(_DWORD *)(v6 + 268) == a2 )
  {
    LODWORD(v48) = *(_DWORD *)(v7 + 304);
    HIDWORD(v48) = *(_DWORD *)(v7 + 360);
    *(_DWORD *)(v6 + 264) = v7;
    *(_BYTE *)(v6 + 360) = 1;
    *(_QWORD *)(v6 + 352) = v48;
    LODWORD(v48) = v7 + 16 * v48;
    *(float *)(v48 + 788) = v26;
    *(float *)(v48 + 792) = v27;
    *(float *)(v48 + 796) = v28;
    *(float *)(v48 + 800) = v29;
  }
LABEL_5:
  *(_DWORD *)(v7 + 264) = a2;
  v11 = *((_QWORD *)a1 + 1);
  v12 = dword_1ACF68;
  *(_QWORD *)(v7 + 272) = *(_QWORD *)a1;
  *(_QWORD *)(v7 + 280) = v11;
  v13 = *(float **)(v12 + 6572);
  v14 = a1[3];
  *(_DWORD *)(v7 + 268) = 0;
  *(_DWORD *)(v6 + 188) = 0;
  v15 = v13[133];
  v16 = (float *)(v12 + 5488);
  if ( (v15 >= v14 || v13[135] <= a1[1] || v13[132] >= a1[2] || v13[134] <= *a1)
    && (!a2 || *(_DWORD *)(v12 + 6608) != a2)
    && !*(_BYTE *)(v12 + 11552) )
  {
    return 0;
  }
  v17 = v13[132];
  if ( *a1 >= v17 )
    v17 = *a1;
  v18 = v17 - *v16;
  v19 = *(float *)(v12 + 224);
  if ( v19 < v18 )
    return 1;
  v21 = v13[134];
  if ( a1[1] >= v15 )
    v15 = a1[1];
  v22 = v15 - *(float *)(v12 + 5492);
  if ( a1[2] < v21 )
    v21 = a1[2];
  v23 = *(float *)(v12 + 228);
  result = 1;
  if ( v23 >= v22 && v19 < (float)(v21 + *v16) )
  {
    result = 1;
    *(_DWORD *)(v7 + 268) = 1;
  }
  return result;
}


// ======================================================================

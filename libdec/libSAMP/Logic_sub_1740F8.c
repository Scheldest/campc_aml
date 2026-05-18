// ADDR: 0x173cbc
// SYMBOL: sub_173CBC
int __fastcall sub_173CBC(int a1, float *a2, float *a3, float a4, int a5)
{
  float v5; // s4
  float v6; // s0
  float v7; // s2
  float v11; // s12
  float v12; // s6
  float v13; // s10
  float v14; // s16
  float v15; // s4
  float v16; // s0
  float v17; // s4
  float v18; // s0
  float v19; // s2
  float v20; // s2
  int result; // r0
  __int64 v22; // r0
  int v23; // r5
  int v24; // r1
  void *v25; // r0
  const void *v26; // r1
  void *v27; // r8
  int v28; // r1
  int v29; // r2
  int v30; // r0
  float v31; // r3
  int v32; // r5
  int v33; // r1
  void *v34; // r0
  const void *v35; // r1
  void *v36; // r8
  int v37; // r1
  float v38; // r3
  int v39; // r1
  int v40; // r2
  int v41; // r0
  int v42; // r5
  int v43; // r1
  void *v44; // r0
  const void *v45; // r1
  void *v46; // r8
  int v47; // r1
  int v48; // r2
  int v49; // r0
  float v50; // r3
  int v51; // r6
  int v52; // r1
  void *v53; // r0
  const void *v54; // r1
  void *v55; // r5
  int v56; // r1
  float v57; // r3
  float v58; // [sp+8h] [bp-30h] BYREF
  float v59; // [sp+Ch] [bp-2Ch]

  v5 = 1.0;
  v6 = *a2;
  v7 = a2[1];
  v11 = 1.0;
  if ( (a5 & 0xC) == 0xC )
    v11 = 0.5;
  if ( (a5 & 0xA) == 0xA )
    v5 = 0.5;
  v12 = fabsf(*a3 - *a2);
  if ( (a5 & 3) == 3 )
    v11 = 0.5;
  if ( (a5 & 5) == 5 )
    v5 = 0.5;
  v13 = (float)(v12 * v11) + -1.0;
  v14 = (float)(fabsf(a3[1] - v7) * v5) + -1.0;
  if ( v13 > a4 )
    v13 = a4;
  if ( v13 < v14 )
    v14 = v13;
  if ( a5 && v14 > 0.0 )
  {
    v15 = v14;
    if ( !(a5 << 31) )
      v15 = 0.0;
    v59 = v7 + v15;
    v58 = v6 + v15;
    sub_1739BC((_DWORD *)a1, (int)&v58, v15, 6, 9);
    v16 = v14;
    if ( (a5 & 2) == 0 )
      v16 = 0.0;
    v17 = *a3;
    v59 = v16 + a2[1];
    v58 = v17 - v16;
    sub_1739BC((_DWORD *)a1, (int)&v58, v16, 9, 12);
    v18 = v14;
    if ( (a5 & 8) == 0 )
      v18 = 0.0;
    v19 = *a3;
    v59 = a3[1] - v18;
    v58 = v19 - v18;
    sub_1739BC((_DWORD *)a1, (int)&v58, v18, 0, 3);
    if ( (a5 & 4) == 0 )
      v14 = 0.0;
    v20 = v14 + *a2;
    v59 = a3[1] - v14;
    v58 = v20;
    return sub_1739BC((_DWORD *)a1, (int)&v58, v14, 3, 6);
  }
  else
  {
    v22 = *(_QWORD *)(a1 + 88);
    if ( (_DWORD)v22 == HIDWORD(v22) )
    {
      v23 = v22 + 1;
      if ( (_DWORD)v22 )
        v24 = v22 + (int)v22 / 2;
      else
        v24 = 8;
      if ( v24 > v23 )
        v23 = v24;
      if ( (int)v22 < v23 )
      {
        v25 = (void *)sub_1654B0(8 * v23);
        v26 = *(const void **)(a1 + 96);
        v27 = v25;
        if ( v26 )
        {
          j_memcpy(v25, v26, 8 * *(_DWORD *)(a1 + 88));
          sub_165578(*(_DWORD *)(a1 + 96));
        }
        LODWORD(v22) = *(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 92) = v23;
        *(_DWORD *)(a1 + 96) = v27;
      }
    }
    *(_QWORD *)(*(_DWORD *)(a1 + 96) + 8 * v22) = *(_QWORD *)a2;
    v28 = *(_DWORD *)(a1 + 88);
    v29 = *(_DWORD *)(a1 + 92);
    v30 = v28 + 1;
    *(_DWORD *)(a1 + 88) = v28 + 1;
    v31 = a2[1];
    v58 = *a3;
    v59 = v31;
    if ( v28 + 1 == v29 )
    {
      v32 = v28 + 2;
      if ( v28 == -1 )
        v33 = 8;
      else
        v33 = v30 + v30 / 2;
      if ( v33 > v32 )
        v32 = v33;
      if ( v30 < v32 )
      {
        v34 = (void *)sub_1654B0(8 * v32);
        v35 = *(const void **)(a1 + 96);
        v36 = v34;
        if ( v35 )
        {
          j_memcpy(v34, v35, 8 * *(_DWORD *)(a1 + 88));
          sub_165578(*(_DWORD *)(a1 + 96));
        }
        v30 = *(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 92) = v32;
        *(_DWORD *)(a1 + 96) = v36;
      }
    }
    v37 = *(_DWORD *)(a1 + 96);
    v38 = v59;
    *(float *)(v37 + 8 * v30) = v58;
    *(float *)(v37 + 8 * v30 + 4) = v38;
    v39 = *(_DWORD *)(a1 + 88);
    v40 = *(_DWORD *)(a1 + 92);
    v41 = v39 + 1;
    *(_DWORD *)(a1 + 88) = v39 + 1;
    if ( v39 + 1 == v40 )
    {
      v42 = v39 + 2;
      if ( v39 == -1 )
        v43 = 8;
      else
        v43 = v41 + v41 / 2;
      if ( v43 > v42 )
        v42 = v43;
      if ( v41 < v42 )
      {
        v44 = (void *)sub_1654B0(8 * v42);
        v45 = *(const void **)(a1 + 96);
        v46 = v44;
        if ( v45 )
        {
          j_memcpy(v44, v45, 8 * *(_DWORD *)(a1 + 88));
          sub_165578(*(_DWORD *)(a1 + 96));
        }
        v41 = *(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 92) = v42;
        *(_DWORD *)(a1 + 96) = v46;
      }
    }
    *(_QWORD *)(*(_DWORD *)(a1 + 96) + 8 * v41) = *(_QWORD *)a3;
    v47 = *(_DWORD *)(a1 + 88);
    v48 = *(_DWORD *)(a1 + 92);
    v49 = v47 + 1;
    *(_DWORD *)(a1 + 88) = v47 + 1;
    v50 = a3[1];
    v58 = *a2;
    v59 = v50;
    if ( v47 + 1 == v48 )
    {
      v51 = v47 + 2;
      if ( v47 == -1 )
        v52 = 8;
      else
        v52 = v49 + v49 / 2;
      if ( v52 > v51 )
        v51 = v52;
      if ( v49 < v51 )
      {
        v53 = (void *)sub_1654B0(8 * v51);
        v54 = *(const void **)(a1 + 96);
        v55 = v53;
        if ( v54 )
        {
          j_memcpy(v53, v54, 8 * *(_DWORD *)(a1 + 88));
          sub_165578(*(_DWORD *)(a1 + 96));
        }
        v49 = *(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 92) = v51;
        *(_DWORD *)(a1 + 96) = v55;
      }
    }
    v56 = *(_DWORD *)(a1 + 96);
    v57 = v59;
    *(float *)(v56 + 8 * v49) = v58;
    *(float *)(v56 + 8 * v49 + 4) = v57;
    result = *(_DWORD *)(a1 + 88) + 1;
    *(_DWORD *)(a1 + 88) = result;
  }
  return result;
}


// ======================================================================

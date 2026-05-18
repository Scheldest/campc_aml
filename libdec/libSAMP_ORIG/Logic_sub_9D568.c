// ADDR: 0x9d108
// SYMBOL: sub_9D108
int __fastcall sub_9D108(int a1, float *a2, float *a3, float a4, int a5)
{
  float v6; // s4
  float v9; // s0
  float v10; // s12
  float v11; // s2
  float v12; // s10
  float v13; // s16
  bool v14; // cc
  __int64 v15; // r0
  int v16; // r5
  int v17; // r1
  void *v18; // r0
  const void *v19; // r1
  void *v20; // r8
  int v21; // r1
  int v22; // r2
  int v23; // r0
  float v24; // r3
  int v25; // r5
  int v26; // r1
  void *v27; // r0
  const void *v28; // r1
  void *v29; // r8
  int v30; // r1
  float v31; // r3
  int v32; // r1
  int v33; // r2
  int v34; // r0
  int v35; // r5
  int v36; // r1
  void *v37; // r0
  const void *v38; // r1
  void *v39; // r8
  int v40; // r1
  int v41; // r2
  int v42; // r0
  float v43; // r3
  int v44; // r6
  int v45; // r1
  void *v46; // r0
  const void *v47; // r1
  void *v48; // r5
  int v49; // r1
  float v50; // r3
  float v51; // s4
  float v52; // s0
  float v53; // s4
  float v54; // s0
  float v55; // s2
  float v56; // s2
  float v58; // [sp+8h] [bp-38h] BYREF
  float v59; // [sp+Ch] [bp-34h]
  int v60; // [sp+14h] [bp-2Ch]

  v6 = 1.0;
  v9 = *a2;
  v10 = 1.0;
  v11 = a2[1];
  if ( (a5 & 0xC) == 0xC )
    v10 = 0.5;
  if ( (a5 & 0xA) == 0xA )
    v6 = 0.5;
  if ( (a5 & 3) == 3 )
    v10 = 0.5;
  if ( (a5 & 5) == 5 )
    v6 = 0.5;
  v12 = (float)(fabsf(*a3 - *a2) * v10) + -1.0;
  v13 = (float)(fabsf(a3[1] - v11) * v6) + -1.0;
  if ( v12 > a4 )
    v12 = a4;
  if ( v12 < v13 )
    v13 = v12;
  v14 = a5 != 0;
  if ( a5 )
    v14 = v13 > 0.0;
  if ( v14 )
  {
    v51 = v13;
    if ( !(a5 << 31) )
      v51 = 0.0;
    v59 = v11 + v51;
    v58 = v9 + v51;
    sub_9CE08((_DWORD *)a1, (int)&v58, v51, 6, 9);
    v52 = v13;
    if ( (a5 & 2) == 0 )
      v52 = 0.0;
    v53 = *a3;
    v59 = v52 + a2[1];
    v58 = v53 - v52;
    sub_9CE08((_DWORD *)a1, (int)&v58, v52, 9, 12);
    v54 = v13;
    if ( (a5 & 8) == 0 )
      v54 = 0.0;
    v55 = *a3;
    v59 = a3[1] - v54;
    v58 = v55 - v54;
    sub_9CE08((_DWORD *)a1, (int)&v58, v54, 0, 3);
    if ( (a5 & 4) == 0 )
      v13 = 0.0;
    v56 = v13 + *a2;
    v59 = a3[1] - v13;
    v58 = v56;
    sub_9CE08((_DWORD *)a1, (int)&v58, v13, 3, 6);
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 88);
    if ( (_DWORD)v15 == HIDWORD(v15) )
    {
      v16 = v15 + 1;
      if ( (_DWORD)v15 )
        v17 = v15 + (int)v15 / 2;
      else
        v17 = 8;
      if ( v17 > v16 )
        v16 = v17;
      if ( (int)v15 < v16 )
      {
        v18 = (void *)sub_885E4(8 * v16);
        v19 = *(const void **)(a1 + 96);
        v20 = v18;
        if ( v19 )
        {
          j_memcpy(v18, v19, 8 * *(_DWORD *)(a1 + 88));
          sub_88614(*(_DWORD *)(a1 + 96));
        }
        LODWORD(v15) = *(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 92) = v16;
        *(_DWORD *)(a1 + 96) = v20;
      }
    }
    *(_QWORD *)(*(_DWORD *)(a1 + 96) + 8 * v15) = *(_QWORD *)a2;
    v21 = *(_DWORD *)(a1 + 88);
    v22 = *(_DWORD *)(a1 + 92);
    v23 = v21 + 1;
    *(_DWORD *)(a1 + 88) = v21 + 1;
    v24 = a2[1];
    v58 = *a3;
    v59 = v24;
    if ( v21 + 1 == v22 )
    {
      v25 = v21 + 2;
      if ( v21 == -1 )
        v26 = 8;
      else
        v26 = v23 + v23 / 2;
      if ( v26 > v25 )
        v25 = v26;
      if ( v23 < v25 )
      {
        v27 = (void *)sub_885E4(8 * v25);
        v28 = *(const void **)(a1 + 96);
        v29 = v27;
        if ( v28 )
        {
          j_memcpy(v27, v28, 8 * *(_DWORD *)(a1 + 88));
          sub_88614(*(_DWORD *)(a1 + 96));
        }
        v23 = *(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 92) = v25;
        *(_DWORD *)(a1 + 96) = v29;
      }
    }
    v30 = *(_DWORD *)(a1 + 96);
    v31 = v59;
    *(float *)(v30 + 8 * v23) = v58;
    *(float *)(v30 + 8 * v23 + 4) = v31;
    v32 = *(_DWORD *)(a1 + 88);
    v33 = *(_DWORD *)(a1 + 92);
    v34 = v32 + 1;
    *(_DWORD *)(a1 + 88) = v32 + 1;
    if ( v32 + 1 == v33 )
    {
      v35 = v32 + 2;
      if ( v32 == -1 )
        v36 = 8;
      else
        v36 = v34 + v34 / 2;
      if ( v36 > v35 )
        v35 = v36;
      if ( v34 < v35 )
      {
        v37 = (void *)sub_885E4(8 * v35);
        v38 = *(const void **)(a1 + 96);
        v39 = v37;
        if ( v38 )
        {
          j_memcpy(v37, v38, 8 * *(_DWORD *)(a1 + 88));
          sub_88614(*(_DWORD *)(a1 + 96));
        }
        v34 = *(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 92) = v35;
        *(_DWORD *)(a1 + 96) = v39;
      }
    }
    *(_QWORD *)(*(_DWORD *)(a1 + 96) + 8 * v34) = *(_QWORD *)a3;
    v40 = *(_DWORD *)(a1 + 88);
    v41 = *(_DWORD *)(a1 + 92);
    v42 = v40 + 1;
    *(_DWORD *)(a1 + 88) = v40 + 1;
    v43 = a3[1];
    v58 = *a2;
    v59 = v43;
    if ( v40 + 1 == v41 )
    {
      v44 = v40 + 2;
      if ( v40 == -1 )
        v45 = 8;
      else
        v45 = v42 + v42 / 2;
      if ( v45 > v44 )
        v44 = v45;
      if ( v42 < v44 )
      {
        v46 = (void *)sub_885E4(8 * v44);
        v47 = *(const void **)(a1 + 96);
        v48 = v46;
        if ( v47 )
        {
          j_memcpy(v46, v47, 8 * *(_DWORD *)(a1 + 88));
          sub_88614(*(_DWORD *)(a1 + 96));
        }
        v42 = *(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 92) = v44;
        *(_DWORD *)(a1 + 96) = v48;
      }
    }
    v49 = *(_DWORD *)(a1 + 96);
    v50 = v59;
    *(float *)(v49 + 8 * v42) = v58;
    *(float *)(v49 + 8 * v42 + 4) = v50;
    ++*(_DWORD *)(a1 + 88);
  }
  return v60;
}


// ======================================================================

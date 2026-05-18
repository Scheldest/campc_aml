// ADDR: 0x9d9c8
// SYMBOL: sub_9D9C8
int __fastcall sub_9D9C8(
        int a1,
        int a2,
        float a3,
        float a4,
        float a5,
        int a6,
        float *a7,
        const char *a8,
        unsigned int a9,
        float a10,
        int a11)
{
  unsigned int v12; // r5
  char *v14; // r6
  float v17; // s26
  float v18; // s18
  float v19; // s2
  int v20; // s20
  float v21; // s22
  float v22; // s24
  float v23; // s0
  float v24; // s28
  char *v25; // r0
  char *v26; // r4
  float v27; // s28
  char *v28; // r0
  float v29; // s0
  unsigned int v30; // r10
  float v31; // s24
  float v32; // s30
  float v33; // s19
  unsigned int v34; // r5
  float v35; // s17
  unsigned int v36; // r0
  char *v37; // r0
  unsigned __int8 *v38; // r1
  int v39; // r2
  int v40; // t1
  bool v41; // zf
  int v42; // r0
  int v43; // r1
  int v44; // r0
  float *v45; // r0
  int v46; // r2
  bool v47; // zf
  float v48; // s0
  float v49; // s14
  float v50; // s2
  float v51; // s3
  float v52; // s4
  float v53; // s7
  float v54; // s6
  float v55; // s12
  float v56; // s10
  float v57; // s8
  float v58; // s1
  float v59; // s5
  float v60; // s14
  float v61; // s3
  __int64 v62; // r0
  int v63; // r5
  int v64; // r1
  int v65; // r6
  void *v66; // r0
  const void *v67; // r1
  void *v68; // r8
  __int64 v69; // r0
  int v70; // r5
  int v71; // r6
  void *v72; // r0
  const void *v73; // r1
  void *v74; // r8
  int v75; // r1
  int v76; // r0
  int v78; // [sp+4h] [bp-7Ch]
  int v79; // [sp+8h] [bp-78h]
  int v80; // [sp+Ch] [bp-74h]
  _WORD *v81; // [sp+10h] [bp-70h]
  int v82; // [sp+14h] [bp-6Ch]
  int v83[26]; // [sp+18h] [bp-68h] BYREF

  v12 = a9;
  v14 = (char *)a8;
  if ( !a9 )
    v12 = (unsigned int)&a8[strlen(a8)];
  v17 = a7[3];
  v18 = *(float *)(a1 + 52) + (float)(int)a5;
  if ( v18 > v17 )
    return v83[1];
  v19 = *(float *)(a1 + 16);
  *(float *)&v20 = a3 / v19;
  v21 = v19 * (float)(a3 / v19);
  v22 = *(float *)(a1 + 48);
  if ( a10 <= 0.0 )
  {
    v23 = v18 + v21;
    v24 = a7[1];
    if ( (float)(v18 + v21) < v24 && v12 > (unsigned int)a8 )
    {
      do
      {
        v18 = v23;
        v25 = (char *)memchr(v14, 10, v12 - (_DWORD)v14);
        v23 = v21 + v23;
        v14 = (char *)v12;
        if ( v25 )
          v14 = v25 + 1;
      }
      while ( v23 < v24 && (unsigned int)v14 < v12 );
    }
  }
  if ( a10 > 0.0 )
  {
    v26 = (char *)v12;
    if ( v14 == (char *)v12 )
      return v83[1];
    goto LABEL_25;
  }
  if ( (int)(v12 - (_DWORD)v14) < 10001 )
  {
    v26 = (char *)v12;
  }
  else
  {
    if ( v18 >= v17 )
      return v83[1];
    v26 = v14;
    if ( (unsigned int)v14 < v12 )
    {
      v27 = v18;
      v26 = v14;
      do
      {
        v28 = (char *)memchr(v26, 10, v12 - (_DWORD)v26);
        v27 = v21 + v27;
        v26 = (char *)v12;
        if ( v28 )
          v26 = v28 + 1;
      }
      while ( v27 < v17 && (unsigned int)v26 < v12 );
    }
  }
  if ( v14 != v26 )
  {
LABEL_25:
    v79 = *(_DWORD *)(a2 + 12);
    v78 = 6 * (v26 - v14);
    sub_9C1B4(a2, v78, 4 * (v26 - v14));
    v80 = *(_DWORD *)(a2 + 52);
    v82 = *(_DWORD *)(a2 + 56);
    v81 = *(_WORD **)(a2 + 60);
    if ( v14 < v26 )
    {
      v29 = a4;
      v30 = 0;
      v31 = v22 + (float)(int)v29;
      v32 = v31;
      while ( 1 )
      {
        v33 = v32;
        v34 = (unsigned int)v14;
        v35 = v18;
        v36 = v30;
        while ( a10 > 0.0 )
        {
          if ( !v36 )
          {
            v36 = sub_A37F4(a1, v20, v34, (int)v26, a10 - (float)(v33 - v31));
            if ( v36 == v34 )
              ++v36;
          }
          if ( v34 < v36 )
          {
            v32 = v33;
            v14 = (char *)v34;
            v18 = v35;
            v30 = v36;
            break;
          }
          if ( v34 < (unsigned int)v26 )
          {
            v37 = &v26[-v34];
            v38 = (unsigned __int8 *)v34;
            while ( 1 )
            {
              v40 = *v38++;
              v39 = v40;
              v41 = v40 == 32;
              if ( v40 != 32 )
                v41 = v39 == 9;
              if ( !v41 )
                break;
              --v37;
              v34 = (unsigned int)v38;
              if ( !v37 )
              {
                v34 = (unsigned int)v26;
                goto LABEL_30;
              }
            }
            if ( v39 == 10 )
              ++v34;
          }
LABEL_30:
          v35 = v21 + v35;
          v36 = 0;
          v33 = v31;
          if ( v34 >= (unsigned int)v26 )
            goto LABEL_85;
        }
        v42 = *v14;
        v43 = (unsigned __int8)v42;
        v83[0] = (unsigned __int8)v42;
        if ( v42 < 0 )
        {
          v44 = sub_88448(v83, (unsigned __int8 *)v14, (int)v26);
          v43 = v83[0];
          if ( !v83[0] )
            break;
          v14 += v44;
          if ( v83[0] <= 0x1Fu )
            goto LABEL_50;
LABEL_56:
          if ( *(_DWORD *)(a1 + 20) <= (int)(unsigned __int16)v43 )
          {
            v45 = *(float **)(a1 + 44);
            if ( !v45 )
              goto LABEL_69;
          }
          else
          {
            v45 = *(float **)(a1 + 44);
            v46 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 28) + 2 * (unsigned __int16)v43);
            if ( v46 != 0xFFFF )
              v45 = (float *)(*(_DWORD *)(a1 + 40) + 40 * v46);
            if ( !v45 )
            {
LABEL_69:
              v48 = 0.0;
              goto LABEL_70;
            }
          }
          v47 = v43 == 9;
          if ( v43 != 9 )
            v47 = v43 == 32;
          v48 = *(float *)&v20 * v45[1];
          if ( v47 )
            goto LABEL_70;
          v49 = v32 + (float)(v45[2] * *(float *)&v20);
          v50 = a7[2];
          if ( v49 > v50 )
            goto LABEL_70;
          v51 = v32 + (float)(v45[4] * *(float *)&v20);
          v52 = *a7;
          if ( v51 < *a7 )
            goto LABEL_70;
          v53 = v45[3];
          v54 = v45[6];
          v55 = v45[7];
          v56 = v45[8];
          v57 = v45[9];
          v58 = v18 + (float)(v45[5] * *(float *)&v20);
          v59 = v18 + (float)(v53 * *(float *)&v20);
          if ( a11 )
          {
            if ( v49 >= v52 )
              v52 = v32 + (float)(v45[2] * *(float *)&v20);
            else
              v54 = v54 + (float)((float)(1.0 - (float)((float)(v51 - v52) / (float)(v51 - v49))) * (float)(v56 - v54));
            v60 = a7[1];
            if ( v59 >= v60 )
              v60 = v18 + (float)(v53 * *(float *)&v20);
            else
              v55 = v55 + (float)((float)(1.0 - (float)((float)(v58 - v60) / (float)(v58 - v59))) * (float)(v57 - v55));
            if ( v51 <= v50 )
              v50 = v32 + (float)(v45[4] * *(float *)&v20);
            else
              v56 = v54 + (float)((float)((float)(v50 - v52) / (float)(v51 - v52)) * (float)(v56 - v54));
            v61 = a7[3];
            if ( v58 <= v61 )
              v61 = v18 + (float)(v45[5] * *(float *)&v20);
            else
              v57 = v55 + (float)((float)((float)(v61 - v60) / (float)(v58 - v60)) * (float)(v57 - v55));
            if ( v60 >= v61 )
              goto LABEL_70;
          }
          else
          {
            v52 = v32 + (float)(v45[2] * *(float *)&v20);
            v50 = v32 + (float)(v45[4] * *(float *)&v20);
            v60 = v18 + (float)(v53 * *(float *)&v20);
            v61 = v18 + (float)(v45[5] * *(float *)&v20);
          }
          v81[5] = v80 + 3;
          v81[4] = v80 + 2;
          v81[2] = v80 + 2;
          v81[1] = v80 + 1;
          v81[3] = v80;
          *v81 = v80;
          *(_DWORD *)(v82 + 16) = a6;
          *(_DWORD *)(v82 + 36) = a6;
          *(float *)v82 = v52;
          *(float *)(v82 + 4) = v60;
          *(float *)(v82 + 8) = v54;
          *(float *)(v82 + 12) = v55;
          *(_DWORD *)(v82 + 56) = a6;
          *(float *)(v82 + 20) = v50;
          *(float *)(v82 + 24) = v60;
          *(float *)(v82 + 28) = v56;
          *(float *)(v82 + 32) = v55;
          *(_DWORD *)(v82 + 76) = a6;
          *(float *)(v82 + 40) = v50;
          *(float *)(v82 + 44) = v61;
          *(float *)(v82 + 48) = v56;
          *(float *)(v82 + 52) = v57;
          *(float *)(v82 + 60) = v52;
          *(float *)(v82 + 64) = v61;
          *(float *)(v82 + 68) = v54;
          *(float *)(v82 + 72) = v57;
          v81 += 6;
          v80 += 4;
          v82 += 80;
LABEL_70:
          v32 = v32 + v48;
          if ( v14 >= v26 )
            break;
        }
        else
        {
          ++v14;
          if ( (unsigned __int8)v42 > 0x1Fu )
            goto LABEL_56;
LABEL_50:
          if ( v43 != 13 )
          {
            if ( v43 != 10 )
              goto LABEL_56;
            v18 = v21 + v18;
            if ( v18 > a7[3] )
              break;
            v32 = v31;
          }
          if ( v14 >= v26 )
            break;
        }
      }
    }
LABEL_85:
    v62 = *(_QWORD *)(a2 + 28);
    v63 = -858993459 * ((v82 - HIDWORD(v62)) >> 2);
    if ( (int)v62 < v63 )
    {
      if ( (_DWORD)v62 )
        v64 = v62 + (int)v62 / 2;
      else
        v64 = 8;
      v65 = v63;
      if ( v64 > v63 )
        v65 = v64;
      if ( (int)v62 < v65 )
      {
        v66 = (void *)sub_885E4(20 * v65);
        v67 = *(const void **)(a2 + 32);
        v68 = v66;
        if ( v67 )
        {
          j_memcpy(v66, v67, 20 * *(_DWORD *)(a2 + 24));
          sub_88614(*(_DWORD *)(a2 + 32));
        }
        *(_DWORD *)(a2 + 28) = v65;
        *(_DWORD *)(a2 + 32) = v68;
      }
    }
    v69 = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 24) = v63;
    v70 = ((int)v81 - HIDWORD(v69)) >> 1;
    if ( (int)v69 < v70 )
    {
      if ( (_DWORD)v69 )
        v71 = v69 + (int)v69 / 2;
      else
        v71 = 8;
      if ( v71 <= v70 )
        v71 = ((int)v81 - HIDWORD(v69)) >> 1;
      if ( (int)v69 < v71 )
      {
        v72 = (void *)sub_885E4(2 * v71);
        v73 = *(const void **)(a2 + 20);
        v74 = v72;
        if ( v73 )
        {
          j_memcpy(v72, v73, 2 * *(_DWORD *)(a2 + 12));
          sub_88614(*(_DWORD *)(a2 + 20));
        }
        *(_DWORD *)(a2 + 16) = v71;
        *(_DWORD *)(a2 + 20) = v74;
      }
    }
    v75 = *(_DWORD *)(a2 + 8);
    v76 = 5 * *(_DWORD *)a2;
    *(_DWORD *)(a2 + 52) = v80;
    *(_DWORD *)(a2 + 56) = v82;
    *(_DWORD *)(a2 + 12) = v70;
    *(_DWORD *)(a2 + 60) = v81;
    *(_DWORD *)(v75 + 8 * v76 - 40) += v70 - (v79 + v78);
  }
  return v83[1];
}


// ======================================================================

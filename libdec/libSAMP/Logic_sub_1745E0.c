// ADDR: 0x1746e4
// SYMBOL: sub_1746E4
int __fastcall sub_1746E4(
        int result,
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
  unsigned int v11; // r5
  char *v13; // r6
  int v16; // r9
  float v17; // s26
  float v18; // s18
  float v19; // s2
  int v20; // s20
  float v21; // s22
  float v22; // s24
  float v23; // s0
  float v24; // s28
  char *v25; // r4
  float v26; // s28
  int v27; // r5
  float v28; // s0
  unsigned int v29; // r10
  float v30; // s24
  float v31; // s30
  float v32; // s19
  unsigned int v33; // r5
  float v34; // s17
  unsigned int v35; // r0
  char *v36; // r0
  unsigned __int8 *v37; // r1
  int v38; // r2
  int v39; // t1
  bool v40; // zf
  int v41; // r0
  unsigned int v42; // r1
  int v43; // r0
  float *v44; // r0
  int v45; // r2
  bool v46; // zf
  float v47; // s0
  float v48; // s14
  float v49; // s2
  float v50; // s3
  float v51; // s4
  float v52; // s7
  float v53; // s6
  float v54; // s12
  float v55; // s10
  float v56; // s8
  float v57; // s1
  float v58; // s5
  float v59; // s14
  float v60; // s3
  __int64 v61; // r0
  int v62; // r5
  int v63; // r1
  int v64; // r6
  void *v65; // r0
  const void *v66; // r1
  void *v67; // r8
  __int64 v68; // r0
  int v69; // r5
  int v70; // r6
  void *v71; // r0
  const void *v72; // r1
  void *v73; // r8
  int v74; // r1
  int v75; // r0
  int v76; // [sp+8h] [bp-78h]
  int v77; // [sp+Ch] [bp-74h]
  int v78; // [sp+10h] [bp-70h]
  _WORD *v79; // [sp+14h] [bp-6Ch]
  int v80; // [sp+18h] [bp-68h]
  unsigned int v81[25]; // [sp+1Ch] [bp-64h] BYREF

  v11 = a9;
  v13 = (char *)a8;
  v16 = result;
  if ( !a9 )
  {
    result = strlen(a8);
    v11 = (unsigned int)&a8[result];
  }
  v17 = a7[3];
  v18 = *(float *)(v16 + 52) + (float)(int)a5;
  if ( v18 <= v17 )
  {
    v19 = *(float *)(v16 + 16);
    *(float *)&v20 = a3 / v19;
    v21 = v19 * (float)(a3 / v19);
    v22 = *(float *)(v16 + 48);
    if ( a10 <= 0.0 )
    {
      v23 = v18 + v21;
      v24 = a7[1];
      if ( (float)(v18 + v21) < v24 && v11 > (unsigned int)a8 )
      {
        do
        {
          v18 = v23;
          result = (int)memchr(v13, 10, v11 - (_DWORD)v13);
          v23 = v21 + v23;
          v13 = (char *)v11;
          if ( result )
            v13 = (char *)(result + 1);
        }
        while ( v23 < v24 && (unsigned int)v13 < v11 );
      }
    }
    if ( a10 > 0.0 || (result = v11 - (_DWORD)v13, (int)(v11 - (_DWORD)v13) < 10001) )
    {
      v25 = (char *)v11;
    }
    else if ( v18 >= v17 )
    {
      v25 = v13;
    }
    else
    {
      v25 = v13;
      if ( (unsigned int)v13 < v11 )
      {
        v26 = v18;
        v25 = v13;
        do
        {
          result = (int)memchr(v25, 10, v11 - (_DWORD)v25);
          v26 = v21 + v26;
          v25 = (char *)v11;
          if ( result )
            v25 = (char *)(result + 1);
        }
        while ( v26 < v17 && (unsigned int)v25 < v11 );
      }
    }
    if ( v13 != v25 )
    {
      v27 = *(_DWORD *)(a2 + 12);
      v76 = 6 * (v25 - v13);
      sub_172DC0(a2, v76, 4 * (v25 - v13));
      v78 = *(_DWORD *)(a2 + 52);
      v80 = *(_DWORD *)(a2 + 56);
      v79 = *(_WORD **)(a2 + 60);
      v77 = v27;
      if ( v13 < v25 )
      {
        v28 = a4;
        v29 = 0;
        v30 = v22 + (float)(int)v28;
        v31 = v30;
        while ( 1 )
        {
          v32 = v31;
          v33 = (unsigned int)v13;
          v34 = v18;
          v35 = v29;
          while ( a10 > 0.0 )
          {
            if ( !v35 )
            {
              v35 = sub_1789B4(v16, v20, v33, (int)v25, a10 - (float)(v32 - v30));
              if ( v35 == v33 )
                ++v35;
            }
            if ( v33 < v35 )
            {
              v31 = v32;
              v13 = (char *)v33;
              v18 = v34;
              v29 = v35;
              break;
            }
            if ( v33 < (unsigned int)v25 )
            {
              v36 = &v25[-v33];
              v37 = (unsigned __int8 *)v33;
              while ( 1 )
              {
                v39 = *v37++;
                v38 = v39;
                v40 = v39 == 32;
                if ( v39 != 32 )
                  v40 = v38 == 9;
                if ( !v40 )
                  break;
                --v36;
                v33 = (unsigned int)v37;
                if ( !v36 )
                {
                  v33 = (unsigned int)v25;
                  goto LABEL_41;
                }
              }
              if ( v38 == 10 )
                ++v33;
            }
LABEL_41:
            v34 = v21 + v34;
            v35 = 0;
            v32 = v30;
            if ( v33 >= (unsigned int)v25 )
              goto LABEL_84;
          }
          v41 = *v13;
          v42 = (unsigned __int8)v41;
          v81[0] = (unsigned __int8)v41;
          if ( v41 < 0 )
          {
            v43 = sub_165308((int *)v81, (unsigned __int8 *)v13, (int)v25);
            v42 = v81[0];
            if ( !v81[0] )
              goto LABEL_84;
            v13 += v43;
          }
          else
          {
            ++v13;
          }
          if ( v42 > 0x1F )
            goto LABEL_53;
          if ( v42 != 13 )
            break;
LABEL_69:
          if ( v13 >= v25 )
            goto LABEL_84;
        }
        if ( v42 == 10 )
        {
          v18 = v21 + v18;
          if ( v18 > a7[3] )
            goto LABEL_84;
          v31 = v30;
          goto LABEL_69;
        }
LABEL_53:
        if ( *(_DWORD *)(v16 + 20) <= (int)(unsigned __int16)v42 )
        {
          v44 = *(float **)(v16 + 44);
        }
        else
        {
          v44 = *(float **)(v16 + 44);
          v45 = *(unsigned __int16 *)(*(_DWORD *)(v16 + 28) + 2 * (unsigned __int16)v42);
          if ( v45 != 0xFFFF )
            v44 = (float *)(*(_DWORD *)(v16 + 40) + 40 * v45);
        }
        if ( v44 )
        {
          v46 = v42 == 9;
          if ( v42 != 9 )
            v46 = v42 == 32;
          v47 = *(float *)&v20 * v44[1];
          if ( v46 )
            goto LABEL_68;
          v48 = v31 + (float)(v44[2] * *(float *)&v20);
          v49 = a7[2];
          if ( v48 > v49 )
            goto LABEL_68;
          v50 = v31 + (float)(v44[4] * *(float *)&v20);
          v51 = *a7;
          if ( v50 < *a7 )
            goto LABEL_68;
          v52 = v44[3];
          v53 = v44[6];
          v54 = v44[7];
          v55 = v44[8];
          v56 = v44[9];
          v57 = v18 + (float)(v44[5] * *(float *)&v20);
          v58 = v18 + (float)(v52 * *(float *)&v20);
          if ( a11 )
          {
            if ( v48 >= v51 )
              v51 = v31 + (float)(v44[2] * *(float *)&v20);
            else
              v53 = v53 + (float)((float)(1.0 - (float)((float)(v50 - v51) / (float)(v50 - v48))) * (float)(v55 - v53));
            v59 = a7[1];
            if ( v58 >= v59 )
              v59 = v18 + (float)(v52 * *(float *)&v20);
            else
              v54 = v54 + (float)((float)(1.0 - (float)((float)(v57 - v59) / (float)(v57 - v58))) * (float)(v56 - v54));
            if ( v50 <= v49 )
              v49 = v31 + (float)(v44[4] * *(float *)&v20);
            else
              v55 = v53 + (float)((float)((float)(v49 - v51) / (float)(v50 - v51)) * (float)(v55 - v53));
            v60 = a7[3];
            if ( v57 <= v60 )
              v60 = v18 + (float)(v44[5] * *(float *)&v20);
            else
              v56 = v54 + (float)((float)((float)(v60 - v59) / (float)(v57 - v59)) * (float)(v56 - v54));
            if ( v59 >= v60 )
              goto LABEL_68;
          }
          else
          {
            v51 = v31 + (float)(v44[2] * *(float *)&v20);
            v49 = v31 + (float)(v44[4] * *(float *)&v20);
            v59 = v18 + (float)(v52 * *(float *)&v20);
            v60 = v18 + (float)(v44[5] * *(float *)&v20);
          }
          v79[5] = v78 + 3;
          v79[4] = v78 + 2;
          v79[2] = v78 + 2;
          v79[1] = v78 + 1;
          v79[3] = v78;
          *v79 = v78;
          *(_DWORD *)(v80 + 16) = a6;
          *(_DWORD *)(v80 + 36) = a6;
          *(float *)v80 = v51;
          *(float *)(v80 + 4) = v59;
          *(float *)(v80 + 8) = v53;
          *(float *)(v80 + 12) = v54;
          *(_DWORD *)(v80 + 56) = a6;
          *(float *)(v80 + 20) = v49;
          *(float *)(v80 + 24) = v59;
          *(float *)(v80 + 28) = v55;
          *(float *)(v80 + 32) = v54;
          *(_DWORD *)(v80 + 76) = a6;
          *(float *)(v80 + 40) = v49;
          *(float *)(v80 + 44) = v60;
          *(float *)(v80 + 48) = v55;
          *(float *)(v80 + 52) = v56;
          *(float *)(v80 + 60) = v51;
          *(float *)(v80 + 64) = v60;
          *(float *)(v80 + 68) = v53;
          *(float *)(v80 + 72) = v56;
          v79 += 6;
          v78 += 4;
          v80 += 80;
        }
        else
        {
          v47 = 0.0;
        }
LABEL_68:
        v31 = v31 + v47;
        goto LABEL_69;
      }
LABEL_84:
      v61 = *(_QWORD *)(a2 + 28);
      v62 = -858993459 * ((v80 - HIDWORD(v61)) >> 2);
      if ( (int)v61 < v62 )
      {
        if ( (_DWORD)v61 )
          v63 = v61 + (int)v61 / 2;
        else
          v63 = 8;
        v64 = v62;
        if ( v63 > v62 )
          v64 = v63;
        if ( (int)v61 < v64 )
        {
          v65 = (void *)sub_1654B0(20 * v64);
          v66 = *(const void **)(a2 + 32);
          v67 = v65;
          if ( v66 )
          {
            j_memcpy(v65, v66, 20 * *(_DWORD *)(a2 + 24));
            sub_165578(*(_DWORD *)(a2 + 32));
          }
          *(_DWORD *)(a2 + 28) = v64;
          *(_DWORD *)(a2 + 32) = v67;
        }
      }
      v68 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(a2 + 24) = v62;
      v69 = ((int)v79 - HIDWORD(v68)) >> 1;
      if ( (int)v68 < v69 )
      {
        if ( (_DWORD)v68 )
          v70 = v68 + (int)v68 / 2;
        else
          v70 = 8;
        if ( v70 <= v69 )
          v70 = ((int)v79 - HIDWORD(v68)) >> 1;
        if ( (int)v68 < v70 )
        {
          v71 = (void *)sub_1654B0(2 * v70);
          v72 = *(const void **)(a2 + 20);
          v73 = v71;
          if ( v72 )
          {
            j_memcpy(v71, v72, 2 * *(_DWORD *)(a2 + 12));
            sub_165578(*(_DWORD *)(a2 + 20));
          }
          *(_DWORD *)(a2 + 16) = v70;
          *(_DWORD *)(a2 + 20) = v73;
        }
      }
      v74 = *(_DWORD *)(a2 + 8);
      v75 = 5 * *(_DWORD *)a2;
      *(_DWORD *)(a2 + 52) = v78;
      *(_DWORD *)(a2 + 56) = v80;
      result = v74 + 8 * v75;
      *(_DWORD *)(a2 + 12) = v69;
      *(_DWORD *)(a2 + 60) = v79;
      *(_DWORD *)(result - 40) += v69 - (v77 + v76);
    }
  }
  return result;
}


// ======================================================================

// ADDR: 0x9ec48
// SYMBOL: sub_9EC48
int __fastcall sub_9EC48(int a1, unsigned int *a2, int a3, float a4, int a5, int a6)
{
  unsigned int v7; // r11
  int v8; // s2
  int v9; // r10
  int v10; // r8
  char v11; // r0
  char v12; // r11
  float v13; // s4
  int v14; // r9
  int v15; // r1
  unsigned __int8 *v17; // r10
  unsigned int v18; // r3
  unsigned int v19; // r8
  char *v20; // r3
  unsigned int v21; // r4
  char *v22; // r0
  unsigned int v23; // r2
  unsigned int v24; // lr
  int v25; // r4
  int v26; // r6
  char *v27; // r1
  unsigned int v28; // r3
  bool v29; // cf
  int v30; // r2
  unsigned int v31; // r4
  __int64 v32; // d17
  unsigned int v33; // r2
  unsigned int v34; // lr
  int v35; // r4
  int v36; // r6
  char *v37; // r1
  unsigned int v38; // r3
  bool v39; // cf
  int v40; // r2
  unsigned int v41; // r4
  __int64 v42; // d17
  unsigned int v43; // r2
  unsigned int v44; // lr
  int v45; // r4
  int v46; // r6
  char *v47; // r1
  unsigned int v48; // r3
  bool v49; // cf
  int v50; // r2
  unsigned int v51; // r4
  __int64 v52; // d17
  unsigned int v53; // r5
  char *v54; // r2
  int v55; // r12
  int v56; // lr
  char *v57; // r1
  unsigned int v58; // r3
  bool v59; // cf
  int v60; // r2
  unsigned int v61; // r4
  __int64 v62; // d17
  char *v63; // r5
  int v64; // r0
  int v65; // r6
  char *v66; // r4
  unsigned int v67; // r6
  char *v68; // r4
  char v69; // t1
  char v70; // t1
  char v71; // t1
  char v72; // t1
  unsigned int v73; // r2
  unsigned int v74; // lr
  int v75; // r4
  int v76; // r6
  char *v77; // r1
  char *v78; // r3
  bool v79; // cf
  int v80; // r2
  unsigned int v81; // r4
  __int64 v82; // d17
  unsigned int v83; // r2
  unsigned int v84; // lr
  int v85; // r4
  int v86; // r6
  char *v87; // r1
  char *v88; // r3
  bool v89; // cf
  int v90; // r2
  unsigned int v91; // r4
  __int64 v92; // d17
  char v93; // t1
  char v94; // t1
  const void *v96; // [sp+8h] [bp-F8h]
  int v98; // [sp+10h] [bp-F0h]
  const void *v99; // [sp+14h] [bp-ECh]
  __int16 v100; // [sp+18h] [bp-E8h]
  char v101; // [sp+1Ah] [bp-E6h]
  __int16 v102; // [sp+1Ch] [bp-E4h]
  char v103; // [sp+1Eh] [bp-E2h]
  __int64 v104; // [sp+20h] [bp-E0h]
  __int64 v105; // [sp+28h] [bp-D8h]
  __int64 v106; // [sp+30h] [bp-D0h]
  __int64 v107; // [sp+38h] [bp-C8h]
  __int64 v108; // [sp+40h] [bp-C0h]
  _BYTE v109[19]; // [sp+48h] [bp-B8h] BYREF
  __int64 v110; // [sp+5Bh] [bp-A5h]
  const void *src[2]; // [sp+68h] [bp-98h] BYREF
  char v112; // [sp+70h] [bp-90h]
  __int16 v113; // [sp+71h] [bp-8Fh]
  char v114; // [sp+73h] [bp-8Dh]
  int v115; // [sp+74h] [bp-8Ch]
  float v116; // [sp+78h] [bp-88h]
  int v117; // [sp+7Ch] [bp-84h]
  int v118; // [sp+80h] [bp-80h]
  char v119; // [sp+84h] [bp-7Ch]
  __int64 v120; // [sp+85h] [bp-7Bh]
  _BYTE v121[11]; // [sp+8Dh] [bp-73h]
  __int64 v122; // [sp+98h] [bp-68h]
  int v123; // [sp+A0h] [bp-60h]
  char v124; // [sp+A4h] [bp-5Ch]
  __int16 v125; // [sp+A5h] [bp-5Bh]
  char v126; // [sp+A7h] [bp-59h]
  int v127; // [sp+A8h] [bp-58h]
  float v128; // [sp+ACh] [bp-54h]
  __int64 v129; // [sp+B0h] [bp-50h]
  __int64 v130; // [sp+B8h] [bp-48h]
  __int64 v131; // [sp+C0h] [bp-40h]
  __int64 v132; // [sp+C8h] [bp-38h]
  __int64 v133; // [sp+D0h] [bp-30h]
  int v134; // [sp+D8h] [bp-28h]

  v96 = (const void *)bswap32(a2[2]);
  v7 = sub_885E4((int)v96);
  if ( bswap32(*a2) == 1471938560 && !bswap32(a2[1]) )
  {
    v17 = (unsigned __int8 *)(a2 + 4);
    v18 = a2[2];
    dword_1AEE7C = v7;
    dword_1AEE74 = (int)a2;
    v19 = v7 + bswap32(v18);
    v20 = (char *)v7;
    dword_1AEE78 = v19;
    dword_1AEE80 = v7;
    while ( 1 )
    {
      v21 = *v17;
      v22 = v20;
      if ( v21 < 0x20 )
      {
        if ( v21 >= 0x18 )
        {
          v33 = v17[3];
          v34 = v33 + 1;
          v20 += v33 + 1;
          if ( (unsigned int)v20 <= v19 )
          {
            v35 = v17[2] | (v21 << 16) | (v17[1] << 8);
            v20 = (char *)(v19 + 1);
            v36 = 1572863 - v35;
            v37 = &v22[1572863 - v35];
            if ( (unsigned int)v37 >= v7 )
            {
              if ( v33 < 0xF )
                goto LABEL_83;
              v38 = (unsigned int)&v22[v33 - v35 + 1572864];
              v39 = (unsigned int)v22 >= v38;
              if ( (unsigned int)v22 < v38 )
                v39 = v37 >= &v22[v33 + 1];
              if ( !v39 )
              {
LABEL_83:
                v40 = v33 + 1;
                v20 = v22;
                goto LABEL_84;
              }
              v40 = v34 & 0xF;
              v20 = &v22[v34 & 0xFFFFFFF0];
              v37 += v34 & 0xFFFFFFF0;
              v41 = v34 & 0xFFFFFFF0;
              do
              {
                v41 -= 16;
                v42 = *(_QWORD *)&v22[v36 + 8];
                *(_QWORD *)v22 = *(_QWORD *)&v22[v36];
                *((_QWORD *)v22 + 1) = v42;
                v22 += 16;
              }
              while ( v41 );
              if ( v34 != (v34 & 0xFFFFFFF0) )
              {
                do
                {
LABEL_84:
                  v69 = *v37++;
                  --v40;
                  *v20++ = v69;
                }
                while ( v40 );
              }
            }
          }
          dword_1AEE80 = (int)v20;
          v17 += 4;
          goto LABEL_11;
        }
        if ( v21 >= 0x10 )
        {
          v43 = bswap32(*(unsigned __int16 *)(v17 + 3) << 16);
          v44 = v43 + 1;
          v20 += v43 + 1;
          if ( (unsigned int)v20 > v19 )
            goto LABEL_120;
          v45 = v17[2] | (v21 << 16) | (v17[1] << 8);
          v46 = 0xFFFFF - v45;
          v20 = (char *)(v19 + 1);
          v47 = &v22[0xFFFFF - v45];
          if ( (unsigned int)v47 < v7 )
            goto LABEL_120;
          if ( v43 < 0xF )
            goto LABEL_89;
          v48 = (unsigned int)&v22[v43 - v45 + 0x100000];
          v49 = (unsigned int)v22 >= v48;
          if ( (unsigned int)v22 < v48 )
            v49 = v47 >= &v22[v43 + 1];
          if ( v49 )
          {
            v50 = v44 & 0xF;
            v20 = &v22[v44 & 0xFFFFFFF0];
            v47 += v44 & 0xFFFFFFF0;
            v51 = v44 & 0xFFFFFFF0;
            do
            {
              v51 -= 16;
              v52 = *(_QWORD *)&v22[v46 + 8];
              *(_QWORD *)v22 = *(_QWORD *)&v22[v46];
              *((_QWORD *)v22 + 1) = v52;
              v22 += 16;
            }
            while ( v51 );
            if ( v44 == (v44 & 0xFFFFFFF0) )
              goto LABEL_120;
          }
          else
          {
LABEL_89:
            v50 = v43 + 1;
            v20 = v22;
          }
          do
          {
            v71 = *v47++;
            --v50;
            *v20++ = v71;
          }
          while ( v50 );
LABEL_120:
          dword_1AEE80 = (int)v20;
          v17 += 5;
          goto LABEL_11;
        }
        if ( v21 < 8 )
        {
          if ( v21 == 4 )
          {
            v83 = bswap32(*((unsigned __int16 *)v17 + 2) << 16);
            v84 = v83 + 1;
            v20 += v83 + 1;
            if ( (unsigned int)v20 <= v19 )
            {
              v85 = v17[3] | (v17[1] << 16) | (v17[2] << 8);
              v20 = (char *)(v19 + 1);
              v86 = ~v85;
              v87 = &v22[~v85];
              if ( (unsigned int)v87 >= v7 )
              {
                if ( v83 < 0xF )
                  goto LABEL_121;
                v88 = &v22[v83 - v85];
                v89 = v22 >= v88;
                if ( v22 < v88 )
                  v89 = v87 >= &v22[v83 + 1];
                if ( !v89 )
                {
LABEL_121:
                  v90 = v83 + 1;
                  v20 = v22;
                  goto LABEL_122;
                }
                v90 = v84 & 0xF;
                v20 = &v22[v84 & 0xFFFFFFF0];
                v87 += v84 & 0xFFFFFFF0;
                v91 = v84 & 0xFFFFFFF0;
                do
                {
                  v91 -= 16;
                  v92 = *(_QWORD *)&v22[v86 + 8];
                  *(_QWORD *)v22 = *(_QWORD *)&v22[v86];
                  *((_QWORD *)v22 + 1) = v92;
                  v22 += 16;
                }
                while ( v91 );
                if ( v84 != (v84 & 0xFFFFFFF0) )
                {
                  do
                  {
LABEL_122:
                    v94 = *v87++;
                    --v90;
                    *v20++ = v94;
                  }
                  while ( v90 );
                }
              }
            }
            v17 += 6;
            dword_1AEE80 = (int)v20;
            goto LABEL_11;
          }
          if ( v21 == 6 )
          {
            v73 = v17[4];
            v74 = v73 + 1;
            v20 += v73 + 1;
            if ( (unsigned int)v20 <= v19 )
            {
              v75 = v17[3] | (v17[1] << 16) | (v17[2] << 8);
              v20 = (char *)(v19 + 1);
              v76 = ~v75;
              v77 = &v22[~v75];
              if ( (unsigned int)v77 >= v7 )
              {
                if ( v73 < 0xF )
                  goto LABEL_118;
                v78 = &v22[v73 - v75];
                v79 = v22 >= v78;
                if ( v22 < v78 )
                  v79 = v77 >= &v22[v73 + 1];
                if ( !v79 )
                {
LABEL_118:
                  v80 = v73 + 1;
                  v20 = v22;
                  goto LABEL_119;
                }
                v80 = v74 & 0xF;
                v20 = &v22[v74 & 0xFFFFFFF0];
                v77 += v74 & 0xFFFFFFF0;
                v81 = v74 & 0xFFFFFFF0;
                do
                {
                  v81 -= 16;
                  v82 = *(_QWORD *)&v22[v76 + 8];
                  *(_QWORD *)v22 = *(_QWORD *)&v22[v76];
                  *((_QWORD *)v22 + 1) = v82;
                  v22 += 16;
                }
                while ( v81 );
                if ( v74 != (v74 & 0xFFFFFFF0) )
                {
                  do
                  {
LABEL_119:
                    v93 = *v77++;
                    --v80;
                    *v20++ = v93;
                  }
                  while ( v80 );
                }
              }
            }
            goto LABEL_120;
          }
          if ( v21 != 7 )
            goto LABEL_3;
          v67 = bswap32(*(unsigned __int16 *)(v17 + 1) << 16);
          v68 = &v20[v67 + 1];
          if ( (unsigned int)v68 > v19 )
          {
LABEL_81:
            v20 = v68;
          }
          else
          {
            v20 = (char *)(v19 + 1);
            if ( v17 + 3 >= (unsigned __int8 *)a2 )
            {
              j_memcpy(v22, v17 + 3, v67 + 1);
              v67 = bswap32(*(unsigned __int16 *)(v17 + 1) << 16);
              goto LABEL_81;
            }
          }
          dword_1AEE80 = (int)v20;
          v17 += v67 + 4;
          goto LABEL_11;
        }
        v65 = v17[1] | (v21 << 8);
        v66 = &v20[v65 - 2047];
        if ( (unsigned int)v66 > v19 )
        {
LABEL_71:
          v20 = v66;
        }
        else
        {
          v20 = (char *)(v19 + 1);
          if ( v17 + 2 >= (unsigned __int8 *)a2 )
          {
            j_memcpy(v22, v17 + 2, v65 - 2047);
            v65 = bswap32(*(unsigned __int16 *)v17 << 16);
            goto LABEL_71;
          }
        }
        v64 = v65 - 2045;
        goto LABEL_73;
      }
      if ( (char)v21 <= -1 )
      {
        v53 = v21 - 127;
        v20 += v21 - 127;
        v54 = v20;
        if ( (unsigned int)v20 <= v19 )
        {
          v55 = v17[1];
          v20 = (char *)(v19 + 1);
          v56 = ~v55;
          v57 = &v22[~v55];
          if ( (unsigned int)v57 >= v7 )
          {
            if ( v21 == 127 )
            {
              v20 = v22;
              v17 += 2;
              goto LABEL_11;
            }
            if ( v53 < 0x10 )
              goto LABEL_92;
            v58 = (unsigned int)&v22[v21 - v55 - 128];
            v59 = (unsigned int)v22 >= v58;
            if ( (unsigned int)v22 < v58 )
              v59 = v57 >= v54;
            if ( !v59 )
            {
LABEL_92:
              v60 = v21 - 127;
              v20 = v22;
              goto LABEL_93;
            }
            v60 = v53 & 0xF;
            v20 = &v22[v53 & 0xFFFFFFF0];
            v57 += v53 & 0xFFFFFFF0;
            v61 = v53 & 0xFFFFFFF0;
            do
            {
              v61 -= 16;
              v62 = *(_QWORD *)&v22[v56 + 8];
              *(_QWORD *)v22 = *(_QWORD *)&v22[v56];
              *((_QWORD *)v22 + 1) = v62;
              v22 += 16;
            }
            while ( v61 );
            if ( v53 != (v53 & 0xFFFFFFF0) )
            {
              do
              {
LABEL_93:
                v72 = *v57++;
                --v60;
                *v20++ = v72;
              }
              while ( v60 );
            }
          }
        }
        v17 += 2;
        dword_1AEE80 = (int)v20;
        goto LABEL_11;
      }
      if ( v21 >= 0x40 )
      {
        v23 = v17[2];
        v24 = v23 + 1;
        v20 += v23 + 1;
        if ( (unsigned int)v20 <= v19 )
        {
          v20 = (char *)(v19 + 1);
          v25 = v17[1] | (v21 << 8);
          v26 = 0x3FFF - v25;
          v27 = &v22[0x3FFF - v25];
          if ( (unsigned int)v27 >= v7 )
          {
            if ( v23 < 0xF )
              goto LABEL_86;
            v28 = (unsigned int)&v22[v23 - v25 + 0x4000];
            v29 = (unsigned int)v22 >= v28;
            if ( (unsigned int)v22 < v28 )
              v29 = v27 >= &v22[v23 + 1];
            if ( !v29 )
            {
LABEL_86:
              v30 = v23 + 1;
              v20 = v22;
              goto LABEL_87;
            }
            v30 = v24 & 0xF;
            v20 = &v22[v24 & 0xFFFFFFF0];
            v27 += v24 & 0xFFFFFFF0;
            v31 = v24 & 0xFFFFFFF0;
            do
            {
              v31 -= 16;
              v32 = *(_QWORD *)&v22[v26 + 8];
              *(_QWORD *)v22 = *(_QWORD *)&v22[v26];
              *((_QWORD *)v22 + 1) = v32;
              v22 += 16;
            }
            while ( v31 );
            if ( v24 != (v24 & 0xFFFFFFF0) )
            {
              do
              {
LABEL_87:
                v70 = *v27++;
                --v30;
                *v20++ = v70;
              }
              while ( v30 );
            }
          }
        }
        dword_1AEE80 = (int)v20;
        v17 += 3;
        goto LABEL_11;
      }
      v63 = &v20[v21 - 31];
      if ( (unsigned int)v63 > v19 )
        goto LABEL_65;
      v20 = (char *)(v19 + 1);
      if ( v17 + 1 >= (unsigned __int8 *)a2 )
        break;
LABEL_66:
      v64 = v21 - 30;
LABEL_73:
      dword_1AEE80 = (int)v20;
      if ( !v64 )
        goto LABEL_3;
      v17 += v64;
LABEL_11:
      if ( (unsigned int)v20 > v19 )
        goto LABEL_3;
    }
    j_memcpy(v22, v17 + 1, v21 - 31);
    v21 = *v17;
LABEL_65:
    v20 = v63;
    goto LABEL_66;
  }
LABEL_3:
  v99 = (const void *)v7;
  if ( a5 )
  {
    *(_QWORD *)v109 = *(_QWORD *)(a5 + 29);
    *(_DWORD *)&v109[8] = *(_DWORD *)(a5 + 37);
    v98 = *(_DWORD *)(a5 + 20);
    v101 = *(_BYTE *)(a5 + 63);
    v104 = *(_QWORD *)(a5 + 72);
    v105 = *(_QWORD *)(a5 + 80);
    v106 = *(_QWORD *)(a5 + 88);
    v107 = *(_QWORD *)(a5 + 96);
    v8 = *(_DWORD *)(a5 + 56);
    v103 = *(_BYTE *)(a5 + 11);
    v9 = *(_DWORD *)(a5 + 12);
    v10 = *(_DWORD *)(a5 + 24);
    *(_QWORD *)&v109[11] = *(_QWORD *)(a5 + 40);
    v110 = *(_QWORD *)(a5 + 48);
    v11 = *(_BYTE *)(a5 + 28);
    v100 = *(_WORD *)(a5 + 61);
    v12 = *(_BYTE *)(a5 + 60);
    v13 = *(float *)(a5 + 68);
    v14 = *(_DWORD *)(a5 + 64);
    v102 = *(_WORD *)(a5 + 9);
    v15 = *(_DWORD *)(a5 + 112);
    v108 = *(_QWORD *)(a5 + 104);
  }
  else
  {
    v15 = 0;
    v13 = 1.0;
    v8 = 2139095039;
    memset(&v109[3], 0, 16);
    v10 = 1;
    v14 = 0;
    v12 = 0;
    v110 = 0LL;
    v104 = 0LL;
    v105 = 0LL;
    v9 = 0;
    v106 = 0LL;
    v107 = 0LL;
    v108 = 0LL;
    v98 = 3;
    v11 = 0;
  }
  v119 = v11;
  v117 = v98;
  v120 = *(_QWORD *)v109;
  *(_DWORD *)v121 = *(_DWORD *)&v109[8];
  *(_QWORD *)&v121[3] = *(_QWORD *)&v109[11];
  v122 = v110;
  v129 = v104;
  v130 = v105;
  v131 = v106;
  v132 = v107;
  v133 = v108;
  src[0] = v99;
  src[1] = v96;
  v134 = v15;
  v123 = v8;
  v112 = 1;
  v113 = v102;
  v114 = v103;
  v118 = v10;
  v115 = v9;
  v124 = v12;
  v125 = v100;
  v126 = v101;
  v128 = v13;
  v127 = v14;
  v116 = a4;
  if ( a6 )
    LODWORD(v122) = a6;
  return sub_9E8A4(a1, src);
}


// ======================================================================

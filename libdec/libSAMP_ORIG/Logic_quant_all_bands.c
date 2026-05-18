// ADDR: 0xbf198
// SYMBOL: sub_BF198
unsigned int __fastcall sub_BF198(
        int *a1,
        __int16 *a2,
        int a3,
        int a4,
        int a5,
        __int16 *src,
        int a7,
        _WORD *a8,
        int a9,
        __int16 *dest,
        int a11)
{
  int v11; // r6
  int v14; // r0
  int v15; // r10
  int v16; // r5
  __int64 v17; // r0
  int v18; // r5
  __int16 *v19; // r1
  int v20; // r4
  int v21; // r2
  __int16 *v22; // r9
  int v23; // r0
  __int16 v24; // r0
  int v25; // r2
  int v27; // r11
  int v28; // r5
  __int16 *v29; // r2
  int v30; // r6
  int v31; // r12
  __int16 *v32; // r4
  int v33; // r3
  int v34; // r10
  int v35; // r0
  bool v36; // zf
  int v37; // r8
  __int16 *v38; // r1
  int v39; // r3
  int v40; // r4
  __int16 *v41; // r6
  int v42; // r0
  int v43; // r5
  int v44; // r2
  int v45; // r2
  bool v46; // zf
  __int16 *v47; // r1
  int v48; // r11
  int v49; // r6
  int v50; // r12
  __int16 *v51; // r4
  int v52; // r3
  int v53; // r5
  int v54; // r0
  int v55; // r9
  int v56; // r10
  int v57; // r12
  bool v58; // cc
  __int16 *v59; // r8
  int v60; // lr
  __int16 *v61; // r2
  int v62; // r4
  int v63; // r5
  int v64; // r6
  bool v65; // cc
  __int16 *v66; // r8
  int v67; // lr
  __int16 *v68; // r2
  int v69; // r4
  int v70; // r0
  int v71; // r5
  __int16 v72; // r1
  unsigned int v73; // r4
  char v74; // r1
  int v75; // lr
  __int16 *v76; // r11
  int v77; // r8
  __int16 *v78; // r6
  int v79; // r4
  int v80; // r0
  int v81; // r3
  __int16 *v82; // r1
  int v83; // r5
  int v84; // r5
  int v85; // r3
  int v86; // lr
  bool v87; // cc
  __int16 *v88; // r11
  int v89; // r8
  __int16 *v90; // r0
  int v91; // r3
  int v92; // r5
  int v93; // r4
  int v94; // r10
  __int16 *v95; // r3
  int v96; // r1
  int v97; // r8
  int v98; // r12
  __int16 *v99; // r4
  int v100; // r2
  int v101; // r9
  int v102; // r3
  int v103; // r5
  _WORD *v104; // r9
  __int16 *v105; // r6
  __int16 v106; // r0
  __int16 v107; // t1
  int v109; // [sp+14h] [bp-54h]
  int v110; // [sp+18h] [bp-50h]
  int v111; // [sp+1Ch] [bp-4Ch]
  int v112; // [sp+20h] [bp-48h]
  int v113; // [sp+24h] [bp-44h]
  int v114; // [sp+28h] [bp-40h]
  int v115; // [sp+2Ch] [bp-3Ch]
  int v116; // [sp+30h] [bp-38h]
  int v117; // [sp+34h] [bp-34h]
  int v118; // [sp+34h] [bp-34h]
  int v119; // [sp+34h] [bp-34h]
  int v120; // [sp+34h] [bp-34h]
  __int16 *v121; // [sp+38h] [bp-30h]
  int v122; // [sp+38h] [bp-30h]
  unsigned int v123; // [sp+38h] [bp-30h]
  int v125; // [sp+44h] [bp-24h]
  int v126; // [sp+44h] [bp-24h]
  int v127; // [sp+48h] [bp-20h]
  int v128; // [sp+48h] [bp-20h]
  __int16 *v129; // [sp+48h] [bp-20h]

  v11 = a3;
  v14 = sub_108874(a3, a5);
  v15 = *a1;
  v16 = a5;
  if ( a5 != 1 )
    v16 = 0;
  if ( v11 == 1 )
  {
    v17 = *(_QWORD *)(a1 + 7);
    if ( v15 )
    {
      if ( SHIDWORD(v17) < 8 )
      {
        v18 = 0;
        v19 = a2;
      }
      else
      {
        v18 = (unsigned __int16)*a2 >> 15;
        j_ec_enc_bits(v17, v18, 1);
        v19 = a2;
        a1[8] -= 8;
      }
      if ( a1[1] )
      {
        v24 = 0x4000;
        if ( v18 )
          v24 = -16384;
        *v19 = v24;
      }
    }
    else
    {
      if ( SHIDWORD(v17) < 8 )
      {
        v23 = 0;
      }
      else
      {
        v23 = j_ec_dec_bits(v17, 1u);
        a1[8] -= 8;
      }
      v19 = a2;
      if ( a1[1] )
      {
        v72 = 0x4000;
        if ( v23 )
          v72 = -16384;
        *a2 = v72;
        v19 = a2;
      }
    }
    v73 = 1;
    if ( a8 )
      *a8 = (unsigned int)*v19 >> 4;
  }
  else
  {
    v111 = a4;
    v20 = a1[6];
    v21 = v20;
    if ( v20 <= 0 )
      v21 = 0;
    v116 = v21;
    v110 = v14;
    if ( !src )
      goto LABEL_24;
    v22 = dest;
    if ( !dest )
      goto LABEL_24;
    if ( v20 > 0 )
      goto LABEL_12;
    v25 = a1[6];
    if ( v20 )
      LOBYTE(v25) = 1;
    if ( a5 > 1 || ((unsigned __int8)v25 & (v14 << 31 == 0)) == 1 )
LABEL_12:
      j_memcpy(dest, src, 2 * v11);
    else
LABEL_24:
      v22 = src;
    v121 = v22;
    v114 = v20;
    v115 = v11;
    v112 = v16;
    v113 = (int)a1;
    v109 = v15;
    if ( v20 >= 1 )
    {
      if ( v15 )
      {
        v27 = 0;
        do
        {
          v125 = 1 << v27;
          v117 = a11;
          v127 = v11 >> v27 >> 1;
          if ( v27 != 31 && v127 >= 1 )
          {
            v28 = 0;
            v29 = a2;
            do
            {
              v30 = v127;
              v31 = 1;
              v32 = v29;
              do
              {
                v33 = (v31 << v27) + v28;
                v31 += 2;
                --v30;
                v34 = a2[v33];
                v35 = 23170 * *v32 + 0x4000;
                *v32 = (unsigned int)(23170 * (__int16)v34 + v35) >> 15;
                v32 += 2 * v125;
                a2[v33] = (unsigned int)(v35 - 23170 * v34) >> 15;
              }
              while ( v30 );
              ++v28;
              ++v29;
            }
            while ( v28 != v125 );
          }
          v36 = v22 == 0;
          if ( v22 )
            v36 = v27 == 31;
          if ( !v36 && v127 >= 1 )
          {
            v37 = 0;
            v38 = v22;
            do
            {
              v39 = v127;
              v40 = 1;
              v41 = v38;
              do
              {
                v42 = (v40 << v27) + v37;
                v40 += 2;
                --v39;
                v43 = v22[v42];
                v44 = 23170 * *v41 + 0x4000;
                *v41 = (unsigned int)(23170 * (__int16)v43 + v44) >> 15;
                v41 += 2 * v125;
                v22[v42] = (unsigned int)(v44 - 23170 * v43) >> 15;
              }
              while ( v39 );
              ++v37;
              ++v38;
            }
            while ( v37 != v125 );
          }
          v11 = v115;
          ++v27;
          a11 = *((unsigned __int8 *)dword_BF824 + (v117 & 0xF)) | (4 * *((unsigned __int8 *)dword_BF824 + (v117 >> 4)));
        }
        while ( v27 < v116 );
      }
      else
      {
        v45 = 0;
        do
        {
          v118 = a11;
          v46 = v22 == 0;
          if ( v22 )
            v46 = v45 == 31;
          if ( !v46 && v115 >> v45 >> 1 >= 1 )
          {
            v47 = v22;
            v48 = 0;
            do
            {
              v49 = v115 >> v45 >> 1;
              v50 = 1;
              v51 = v47;
              do
              {
                v52 = (v50 << v45) + v48;
                v53 = v22[v52];
                v50 += 2;
                --v49;
                v54 = 23170 * *v51 + 0x4000;
                *v51 = (unsigned int)(23170 * (__int16)v53 + v54) >> 15;
                v51 += 2 * (1 << v45);
                v22[v52] = (unsigned int)(v54 - 23170 * v53) >> 15;
              }
              while ( v49 );
              ++v48;
              ++v47;
            }
            while ( v48 != 1 << v45 );
          }
          ++v45;
          a11 = *((unsigned __int8 *)dword_BF824 + (v118 & 0xF)) | (4 * *((unsigned __int8 *)dword_BF824 + (v118 >> 4)));
        }
        while ( v45 < v116 );
      }
    }
    v55 = v110 << v116;
    v56 = a5 >> v116;
    v128 = 0;
    if ( ((v110 << v116) & 1) == 0 && v114 <= -1 )
    {
      if ( v109 )
      {
        v128 = 0;
        v57 = v114;
        do
        {
          v58 = v56 < 1;
          v55 >>= 1;
          if ( v56 >= 1 )
            v58 = v55 < 1;
          if ( !v58 )
          {
            v59 = a2;
            v60 = 0;
            do
            {
              v61 = v59;
              v62 = v55;
              do
              {
                --v62;
                v63 = v61[v56];
                v64 = 23170 * *v61 + 0x4000;
                *v61 = (unsigned int)(23170 * (__int16)v63 + v64) >> 15;
                v61[v56] = (unsigned int)(v64 - 23170 * v63) >> 15;
                v61 += 2 * v56;
              }
              while ( v62 );
              ++v60;
              ++v59;
            }
            while ( v60 != v56 );
          }
          if ( v121 )
          {
            v65 = v56 < 1;
            if ( v56 >= 1 )
              v65 = v55 < 1;
            if ( !v65 )
            {
              v66 = v121;
              v67 = 0;
              do
              {
                v68 = v66;
                v69 = v55;
                do
                {
                  --v69;
                  v70 = v68[v56];
                  v71 = 23170 * *v68 + 0x4000;
                  *v68 = (unsigned int)(23170 * (__int16)v70 + v71) >> 15;
                  v68[v56] = (unsigned int)(v71 - 23170 * v70) >> 15;
                  v68 += 2 * v56;
                }
                while ( v69 );
                ++v67;
                ++v66;
              }
              while ( v67 != v56 );
            }
          }
          a11 |= a11 << v56;
          v56 *= 2;
          ++v128;
          if ( v55 << 31 )
            break;
          v58 = v57++ < -1;
        }
        while ( v58 );
      }
      else
      {
        v74 = (char)v121;
        v75 = v114;
        if ( v121 )
          v74 = 1;
        v128 = 0;
        do
        {
          v119 = a11;
          v55 >>= 1;
          if ( ((v56 > 0) & (unsigned __int8)v74) == 1 && v55 >= 1 )
          {
            v76 = v121;
            v77 = 0;
            do
            {
              v78 = v76;
              v79 = v55;
              do
              {
                --v79;
                v80 = v78[v56];
                v81 = 23170 * *v78 + 0x4000;
                *v78 = (unsigned int)(23170 * (__int16)v80 + v81) >> 15;
                v78[v56] = (unsigned int)(v81 - 23170 * v80) >> 15;
                v78 += 2 * v56;
              }
              while ( v79 );
              ++v77;
              ++v76;
            }
            while ( v77 != v56 );
          }
          a11 = v119 | (v119 << v56);
          v56 *= 2;
          ++v128;
          if ( v55 << 31 )
            break;
          v58 = v75++ < -1;
        }
        while ( v58 );
      }
    }
    v82 = a2;
    if ( v56 >= 2 )
    {
      if ( v109 )
      {
        v83 = a11;
        sub_BFDD4(a2, v55 >> v116, v56 << v116, v112);
        v82 = a2;
        a11 = v83;
      }
      if ( v121 )
      {
        v84 = a11;
        sub_BFDD4(v121, v55 >> v116, v56 << v116, v112);
        v82 = a2;
        a11 = v84;
      }
    }
    v73 = sub_BFEBC(v113, v82, v115, v111, v56, v121, a7, a9, a11);
    if ( *(_DWORD *)(v113 + 4) )
    {
      if ( v56 >= 2 )
        sub_C0324(a2, v55 >> v116, v56 << v116, v112);
      if ( v128 >= 1 )
      {
        v85 = 0;
        do
        {
          v56 >>= 1;
          v126 = v85;
          v122 = v73 | (v73 >> v56);
          v86 = (2 * v55) >> 1;
          v87 = v56 < 1;
          v55 *= 2;
          if ( v56 >= 1 )
            v87 = v55 < 1;
          if ( !v87 )
          {
            v88 = a2;
            v89 = 0;
            do
            {
              v90 = v88;
              v91 = v86;
              do
              {
                --v91;
                v92 = v90[v56];
                v93 = 23170 * *v90 + 0x4000;
                *v90 = (unsigned int)(23170 * (__int16)v92 + v93) >> 15;
                v90[v56] = (unsigned int)(v93 - 23170 * v92) >> 15;
                v90 += 2 * v56;
              }
              while ( v91 );
              ++v89;
              ++v88;
            }
            while ( v89 != v56 );
          }
          v73 = v122;
          v85 = v126 + 1;
        }
        while ( v126 + 1 != v128 );
      }
      v120 = v56;
      if ( v114 >= 1 )
      {
        v94 = 0;
        do
        {
          v123 = *((unsigned __int8 *)dword_BF834 + v73);
          if ( v94 != 31 && v115 >> v94 >> 1 >= 1 )
          {
            v95 = a2;
            v96 = 0;
            do
            {
              v97 = v115 >> v94 >> 1;
              v98 = 1;
              v99 = v95;
              v129 = v95;
              do
              {
                v100 = (v98 << v94) + v96;
                v98 += 2;
                --v97;
                v101 = a2[v100];
                v102 = 23170 * *v99 + 0x4000;
                *v99 = (unsigned int)(23170 * (__int16)v101 + v102) >> 15;
                v99 += 2 * (1 << v94);
                a2[v100] = (unsigned int)(v102 - 23170 * v101) >> 15;
              }
              while ( v97 );
              ++v96;
              v95 = v129 + 1;
            }
            while ( v96 != 1 << v94 );
          }
          ++v94;
          v73 = v123;
        }
        while ( v94 < v116 );
      }
      v103 = v115;
      v104 = a8;
      v105 = a2;
      if ( a8 )
      {
        v106 = j_celt_sqrt(v115 << 22);
        if ( v115 >= 1 )
        {
          do
          {
            v107 = *v105++;
            --v103;
            *v104++ = (unsigned int)(v106 * v107) >> 15;
          }
          while ( v103 );
        }
      }
      v73 &= (1 << (v120 << v116)) - 1;
    }
  }
  return v73;
}


// ======================================================================
// ADDR: 0xbf844
// SYMBOL: sub_BF844
unsigned int __fastcall sub_BF844(
        int *a1,
        __int16 *a2,
        __int16 *a3,
        int a4,
        int a5,
        int a6,
        __int16 *a7,
        int a8,
        _WORD *a9,
        __int16 *a10,
        int a11)
{
  __int16 *v12; // r4
  int v13; // r10
  __int16 *v14; // r8
  int v15; // r0
  int v16; // r9
  int v17; // r1
  int v18; // r10
  int v19; // r6
  __int16 v20; // r6
  int v21; // r5
  int v22; // r0
  int v23; // r2
  __int16 v24; // r6
  __int16 *v25; // r1
  int v26; // r3
  bool v27; // zf
  __int16 *v28; // r5
  int v29; // r0
  int v30; // r2
  int v31; // r9
  unsigned int v32; // r1
  int v33; // r1
  int v34; // kr00_4
  int v35; // r4
  int v36; // r1
  int v37; // r6
  int v38; // r3
  int v39; // r0
  __int16 *v40; // r4
  int *v41; // r0
  __int16 *v42; // r1
  int v43; // r0
  int v44; // r0
  __int16 v45; // r2
  int v46; // r5
  int v47; // r6
  __int16 v48; // r2
  int v49; // r0
  unsigned int v50; // r9
  int v51; // r1
  __int16 *v52; // r3
  __int16 *v53; // r5
  int v54; // r6
  int v55; // r2
  __int16 v56; // r4
  __int16 v57; // t1
  __int16 v58; // t1
  int v59; // r2
  __int16 v60; // r3
  int v61; // r5
  int v62; // r0
  __int16 v63; // r0
  int v64; // r5
  signed int v65; // r1
  int v66; // r2
  signed int v67; // r4
  bool v68; // cc
  int v69; // r0
  signed int v70; // r11
  int v71; // r0
  __int16 v72; // r0
  int v73; // r3
  int v74; // r6
  __int16 *v75; // r12
  char v76; // r1
  __int16 *v77; // r4
  int v78; // r6
  __int16 v79; // r9
  int v80; // r1
  unsigned int v81; // r1
  unsigned int v82; // r0
  unsigned int v83; // r1
  __int16 v84; // r2
  int v86; // [sp+0h] [bp-78h]
  __int16 *v87; // [sp+4h] [bp-74h]
  int v88; // [sp+8h] [bp-70h]
  _WORD *v89; // [sp+Ch] [bp-6Ch]
  int v90; // [sp+10h] [bp-68h]
  __int16 *dest; // [sp+14h] [bp-64h]
  int v92; // [sp+18h] [bp-60h]
  unsigned int v93; // [sp+20h] [bp-58h]
  int v94; // [sp+24h] [bp-54h]
  __int16 v95; // [sp+24h] [bp-54h]
  int v96; // [sp+28h] [bp-50h]
  __int16 *src; // [sp+2Ch] [bp-4Ch]
  __int16 v98; // [sp+30h] [bp-48h]
  int v99; // [sp+30h] [bp-48h]
  char v100; // [sp+30h] [bp-48h]
  int v101; // [sp+34h] [bp-44h]
  unsigned int v102; // [sp+34h] [bp-44h]
  int v103; // [sp+38h] [bp-40h]
  int v104; // [sp+38h] [bp-40h]
  int v105; // [sp+38h] [bp-40h]
  __int16 v106; // [sp+3Ch] [bp-3Ch]
  signed int v107; // [sp+3Ch] [bp-3Ch]
  int v108; // [sp+40h] [bp-38h] BYREF
  int v109; // [sp+44h] [bp-34h]
  int v110; // [sp+48h] [bp-30h]
  int v111; // [sp+4Ch] [bp-2Ch]
  int v112; // [sp+50h] [bp-28h]
  int v113; // [sp+54h] [bp-24h]

  v12 = a2;
  v13 = a4;
  v14 = a3;
  v15 = *a1;
  v16 = a1[7];
  if ( a4 == 1 )
  {
    v17 = a1[8];
    v18 = 1;
    if ( a3 )
      v18 = 2;
    if ( v15 )
    {
      if ( v17 < 8 )
      {
        v19 = 0;
      }
      else
      {
        v19 = (unsigned __int16)*v12 >> 15;
        j_ec_enc_bits(a1[7], v19, 1);
        v17 = a1[8] - 8;
        a1[8] = v17;
      }
      v44 = a1[1];
      if ( v44 )
      {
        v45 = 0x4000;
        if ( v19 )
          v45 = -16384;
        *v12 = v45;
      }
      if ( v14 )
      {
        v46 = 1;
        while ( 1 )
        {
          if ( v17 < 8 )
          {
            v47 = 0;
            if ( v44 )
            {
LABEL_40:
              v48 = 0x4000;
              if ( v47 )
                v48 = -16384;
              *v14 = v48;
            }
          }
          else
          {
            v47 = (unsigned __int16)*v14 >> 15;
            j_ec_enc_bits(v16, v47, 1);
            v44 = a1[1];
            v17 = a1[8] - 8;
            a1[8] = v17;
            if ( v44 )
              goto LABEL_40;
          }
          if ( ++v46 >= v18 )
            goto LABEL_70;
        }
      }
      goto LABEL_70;
    }
    if ( v17 < 8 )
    {
      v43 = 0;
    }
    else
    {
      v43 = j_ec_dec_bits(a1[7], 1u);
      v17 = a1[8] - 8;
      a1[8] = v17;
    }
    v59 = a1[1];
    if ( v59 )
    {
      v60 = 0x4000;
      if ( v43 )
        v60 = -16384;
      *v12 = v60;
    }
    if ( !v14 )
    {
LABEL_70:
      v50 = 1;
      if ( a9 )
        *a9 = (unsigned int)*v12 >> 4;
      return v50;
    }
    v61 = 1;
    while ( 1 )
    {
      if ( v17 < 8 )
      {
        v62 = 0;
        if ( v59 )
        {
LABEL_66:
          v27 = v62 == 0;
          v63 = 0x4000;
          if ( !v27 )
            v63 = -16384;
          *v14 = v63;
        }
      }
      else
      {
        v62 = j_ec_dec_bits(v16, 1u);
        v59 = a1[1];
        v17 = a1[8] - 8;
        a1[8] = v17;
        if ( v59 )
          goto LABEL_66;
      }
      if ( ++v61 >= v18 )
        goto LABEL_70;
    }
  }
  v101 = v15;
  v103 = a11;
  sub_C040C(a1, &v108, a2, a3, a4, &a5, a6, a6, a8, 1, &a11);
  v96 = v108;
  v106 = v109;
  v20 = v110;
  v21 = v112;
  v22 = a5;
  src = v12;
  if ( v13 == 2 )
  {
    v23 = 0;
    v98 = v110;
    if ( v112 != 0x4000 )
      v23 = 8;
    if ( !v112 )
      v23 = 0;
    v24 = 0;
    a1[8] -= v113 + v23;
    v25 = v14;
    v26 = v22 - v23;
    if ( v21 > 0x2000 )
    {
      v25 = v12;
      v12 = v14;
    }
    v27 = (v21 | 0x4000) == 0x4000;
    v28 = v25;
    if ( !v27 )
    {
      v94 = v22 - v23;
      if ( v101 )
      {
        v29 = v25[1] * *v12;
        v30 = *v25 * v12[1];
        v24 = v29 < v30;
        j_ec_enc_bits(v16, v29 < v30, 1);
      }
      else
      {
        v24 = j_ec_dec_bits(v16, 1u);
      }
      v26 = v94;
    }
    v50 = sub_BF198(a1, v12, 2, v26, a6, a7, a8, a9, 0x7FFF, a10, v103);
    *v28 = v12[1] * (2 * v24 - 1);
    v28[1] = (1 - 2 * v24) * *v12;
    if ( a1[1] )
    {
      v81 = v106 * src[1];
      *src = (unsigned int)(v106 * *src) >> 15;
      src[1] = v81 >> 15;
      v82 = v98 * *v14;
      v83 = (unsigned int)(v98 * v14[1]) >> 15;
      *v14 = v82 >> 15;
      v14[1] = v83;
      LOWORD(v83) = *src;
      *src -= v82 >> 15;
      v84 = v14[1];
      *v14 += v83;
      LOWORD(v82) = src[1];
      src[1] = v82 - v84;
      v14[1] += v82;
      goto LABEL_95;
    }
  }
  else
  {
    v31 = a5;
    v104 = a1[8] - v113;
    v32 = a5 - v111;
    a1[8] = v104;
    v34 = v32;
    v33 = v32 + (v32 >> 31);
    if ( v22 >= v34 / 2 )
      v31 = v33 >> 1;
    if ( v31 <= 0 )
      v31 = 0;
    v35 = v22 - v31;
    if ( v31 >= v22 - v31 )
    {
      v99 = a11;
      v102 = sub_BF198(a1, src, v13, v31, a6, a7, a8, a9, 0x7FFF, a10, a11);
      v86 = a6;
      v87 = 0;
      v88 = a8;
      v89 = 0;
      v90 = v20;
      dest = 0;
      v38 = v35;
      v92 = v99 >> a6;
      v49 = a1[8] - v104 + v31;
      if ( v49 > 24 )
        v38 = v35 + v49 - 24;
      if ( !v21 )
        v38 = v35;
      v40 = src;
      v41 = a1;
      v42 = v14;
    }
    else
    {
      v36 = v20;
      v37 = a11;
      v102 = sub_BF198(a1, v14, v13, v22 - v31, a6, 0, a8, 0, v36, 0, a11 >> a6);
      v38 = v31;
      v86 = a6;
      v87 = a7;
      v88 = a8;
      v89 = a9;
      v90 = 0x7FFF;
      dest = a10;
      v92 = v37;
      v39 = a1[8] - v104 + v35;
      if ( v39 > 24 )
        v38 = v31 + v39 - 24;
      if ( v21 == 0x4000 )
        v38 = v31;
      v40 = src;
      v41 = a1;
      v42 = src;
    }
    v50 = v102 | sub_BF198(v41, v42, v13, v38, v86, v87, v88, v89, v90, dest, v92);
    if ( a1[1] )
    {
      if ( v13 < 1 )
      {
        v55 = 0;
        v51 = 0;
      }
      else
      {
        v51 = 0;
        v52 = v14;
        v53 = v40;
        v54 = v13;
        v55 = 0;
        do
        {
          v57 = *v52++;
          v56 = v57;
          --v54;
          v58 = *v53++;
          v51 += v56 * v56;
          v55 += v58 * v56;
        }
        while ( v54 );
      }
      v64 = 2 * v106;
      v65 = (v106 >> 1) * (v106 >> 1) + v51;
      v66 = (v55 >> 16) * v64 + (((unsigned __int16)v55 * v106) >> 15);
      v67 = v65 + 2 * v66;
      v68 = v67 < (int)"__ndk114collate_bynameIwEE";
      if ( v67 >= (int)"__ndk114collate_bynameIwEE" )
      {
        v65 -= 2 * v66;
        v68 = v65 < (int)"__ndk114collate_bynameIwEE";
      }
      if ( v68 )
      {
        j_memcpy(v14, src, 2 * v13);
      }
      else
      {
        v107 = 31 - __clz(v65);
        v69 = v65 << (14 - (v107 & 0xFE));
        if ( v107 >> 1 > 7 )
          v69 = v65 >> ((v107 & 0xFE) - 14);
        v95 = j_celt_rsqrt_norm(v69);
        v70 = 31 - __clz(v67);
        v71 = v67 << (14 - (v70 & 0xFE));
        if ( v70 >> 1 > 7 )
          v71 = v67 >> ((v70 & 0xFE) - 14);
        v72 = j_celt_rsqrt_norm(v71);
        LOBYTE(v73) = 7;
        LOBYTE(v74) = 7;
        if ( v70 >> 1 > 7 )
          v73 = v70 >> 1;
        if ( v107 >> 1 > 7 )
          v74 = v107 >> 1;
        if ( v13 < 1 )
          return v50;
        v75 = src;
        v105 = 2 << v74 >> 1;
        v76 = v74 + 1;
        v77 = v14;
        v78 = v13;
        v93 = v50;
        v100 = v76;
        do
        {
          --v78;
          v79 = *v77;
          v80 = v64 * *v75 + 0x8000;
          *v75++ = ((__int16)(HIWORD(v80) - *v77) * v95 + v105) >> v100;
          *v77++ = ((__int16)(v79 + HIWORD(v80)) * v72 + (2 << v73 >> 1)) >> (v73 + 1);
        }
        while ( v78 );
        v50 = v93;
      }
LABEL_95:
      if ( v96 && v13 >= 1 )
      {
        do
        {
          --v13;
          *v14 = -*v14;
          ++v14;
        }
        while ( v13 );
      }
    }
  }
  return v50;
}


// ======================================================================

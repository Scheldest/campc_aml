// ADDR: 0xc040c
// SYMBOL: sub_C040C
int __fastcall sub_C040C(
        int *a1,
        int *a2,
        __int16 *a3,
        __int16 *a4,
        int a5,
        int *a6,
        char a7,
        int a8,
        int a9,
        int a10,
        _DWORD *a11)
{
  int v14; // r1
  int v15; // r4
  int v16; // r5
  int v17; // r2
  int v18; // r1
  int v19; // r6
  int v20; // r0
  int v21; // r5
  unsigned int v22; // r0
  int v23; // r6
  signed int v24; // r9
  bool v25; // cc
  _DWORD *v26; // r4
  int v27; // r6
  char v28; // r9
  int v29; // r0
  _WORD *v30; // r1
  int v31; // r3
  int v32; // r4
  int v33; // r0
  int v34; // r0
  int v35; // r2
  int *v36; // r6
  int v37; // r5
  int v38; // r8
  int *v39; // r11
  int v40; // r0
  int v41; // r4
  __int16 v42; // r0
  int v43; // r1
  unsigned int v44; // r1
  __int16 v45; // r3
  __int16 v46; // r9
  unsigned int v47; // r1
  int v48; // r0
  unsigned int v49; // r0
  __int16 v50; // r5
  unsigned int v51; // r0
  __int16 v52; // r2
  int v53; // r1
  int v54; // r5
  int v55; // r4
  int v56; // r10
  int v57; // r3
  int v58; // r1
  int v59; // r4
  int v60; // r5
  int v61; // r10
  int v62; // r3
  unsigned int v63; // r9
  signed int v64; // r0
  int v65; // r8
  int v66; // r0
  unsigned int v67; // r1
  int *v68; // r0
  int v69; // r2
  int *v70; // r5
  signed int v71; // r0
  unsigned int v72; // r1
  int v73; // r0
  unsigned int v74; // r4
  bool v75; // zf
  int v76; // r1
  int v77; // r3
  int v78; // r2
  int v79; // r2
  int v80; // r3
  int result; // r0
  unsigned int v82; // r2
  int v83; // r3
  unsigned int v84; // r1
  unsigned int v85; // r2
  int v86; // r1
  __int16 v87; // r2
  __int16 v88; // r8
  unsigned int v89; // r12
  int v90; // r2
  unsigned int v91; // r4
  int v92; // [sp+Ch] [bp-3Ch]
  int v93; // [sp+10h] [bp-38h]
  int v94; // [sp+14h] [bp-34h]
  int v96; // [sp+1Ch] [bp-2Ch]
  int v97; // [sp+20h] [bp-28h]
  int *v98; // [sp+24h] [bp-24h]
  int v99; // [sp+28h] [bp-20h]

  v14 = 4;
  if ( a5 == 2 && a10 != 0 )
    v14 = 16;
  v99 = *a1;
  v15 = a1[4];
  v94 = a1[2];
  v97 = a1[3];
  v16 = *(__int16 *)(*(_DWORD *)(v94 + 48) + 2 * v97) + 8 * a9;
  v17 = (v16 >> 1) - v14;
  v18 = -1;
  if ( a5 == 2 && a10 != 0 )
    v18 = -2;
  v19 = *a6;
  v20 = sub_108848(*a6 + v17 * (v18 + 2 * a5), v18 + 2 * a5);
  if ( v19 - v16 - 32 < v20 )
    v20 = v19 - v16 - 32;
  if ( v20 >= 64 )
    v20 = 64;
  v21 = a1[7];
  if ( v20 >= 4 )
    v22 = ((*((__int16 *)sub_C0B2C + (v20 & 7)) >> (14 - ((unsigned int)v20 >> 3))) + 1) & 0xFFFFFFFE;
  else
    v22 = 1;
  v23 = v22;
  if ( a10 )
    v23 = 1;
  if ( v97 < v15 )
    v23 = v22;
  v93 = a1[9];
  if ( v99 )
    v24 = j_stereo_itheta(a3, a4);
  else
    v24 = 0;
  v96 = j_ec_tell_frac(v21);
  v98 = (int *)v21;
  if ( v23 != 1 )
  {
    v31 = a10;
    if ( v99 )
    {
      if ( !a10 )
      {
        v41 = (v24 * v23 + 0x2000) >> 14;
        if ( v41 < v23 && v41 >= 1 )
        {
          v24 = (v24 * v23 + 0x2000) >> 14;
          if ( !a1[14] )
            goto LABEL_59;
          v42 = sub_108874(v41 << 14, v23);
          v43 = v42 * 8 * v42;
          v44 = (__int16)(0x8000
                        - ((unsigned int)(v43 + 0x8000) >> 16)
                        + ((unsigned int)((__int16)((((2
                                                     * (__int16)((((0x8000
                                                                  - 1252 * (__int16)((unsigned int)(v43 + 0x8000) >> 16)) & 0xFFFF0000)
                                                                + 542441472) >> 16)
                                                     * (__int16)((unsigned int)(v43 + 0x8000) >> 16)
                                                     + 0x8000) & 0xFFFF0000)
                                                   - 501415936) >> 16)
                                        * (__int16)((unsigned int)(v43 + 0x8000) >> 16)
                                        + 0x4000) >> 15));
          v45 = __clz(v44);
          v46 = 32 - v45;
          v47 = v44 << (v45 - 17);
          v48 = 8 * (__int16)(0x4000 - v42) * (__int16)(0x4000 - v42) + 0x8000;
          v49 = (__int16)(0x8000
                        - HIWORD(v48)
                        + ((unsigned int)((__int16)((((2
                                                     * (__int16)((((0x8000 - 1252 * SHIWORD(v48)) & 0xFFFF0000)
                                                                + 542441472) >> 16)
                                                     * SHIWORD(v48)
                                                     + 0x8000) & 0xFFFF0000)
                                                   - 501415936) >> 16)
                                        * SHIWORD(v48)
                                        + 0x4000) >> 15));
          v50 = 32 - __clz(v49);
          v31 = 0;
          v51 = (__int16)(v49 << (15 - v50))
              * (__int16)((((0x8000 - 5194 * (__int16)(v49 << (15 - v50))) & 0xFFFF0000) + 519831552) >> 16)
              + 0x4000;
          v52 = v50 - v46;
          v21 = (int)v98;
          v24 = v23;
          v53 = ((__int16)((v52 << 11)
                         - ((unsigned int)((__int16)v47
                                         * (__int16)((((0x8000 - 5194 * (__int16)v47) & 0xFFFF0000) + 519831552) >> 16)
                                         + 0x4000) >> 15)
                         + (v51 >> 15))
               * (__int16)((unsigned int)((a5 << 23) - 0x800000) >> 16)
               + 0x4000) >> 15;
          if ( v53 > *a6 )
            goto LABEL_59;
          if ( v53 < -*a6 )
            v41 = 0;
        }
        v24 = v41;
LABEL_59:
        if ( a8 > 1 || v31 )
        {
          if ( v99 )
          {
            j_ec_enc_uint(v21, v24, v23 + 1);
            goto LABEL_80;
          }
          v65 = j_ec_dec_uint(v21, v23 + 1);
          v39 = a2;
          v70 = a6;
LABEL_99:
          v24 = sub_108874(v65 << 14, v23);
          goto LABEL_100;
        }
        v59 = (v23 >> 1) + 1;
        v60 = v23 >> 1;
        v61 = v59 * v59;
        if ( v99 )
        {
          v62 = v23 + 1 - v24;
          if ( v24 > v60 )
          {
            v58 = v61 - (((v23 + 1 - v24) * (v23 + 2 - v24)) >> 1);
          }
          else
          {
            v62 = v24 + 1;
            v58 = ((v24 + 1) * v24) >> 1;
          }
          v68 = v98;
          v69 = v58 + v62;
          v57 = v59 * v59;
LABEL_79:
          j_ec_encode(v68, v58, v69, v57);
LABEL_80:
          v74 = v24 << 14;
          v24 = sub_108874(v24 << 14, v23);
          v75 = a10 == 0;
          if ( a10 )
            v75 = v99 == 0;
          if ( !v75 )
          {
            if ( v23 > v74 )
            {
              sub_C0B3C(*(_DWORD *)(v94 + 8), a3, a4, v93, v97, a5);
              v39 = a2;
              v37 = 0;
              v28 = a7;
              v36 = a6;
              v26 = a11;
              v38 = v96;
LABEL_95:
              result = j_ec_tell_frac(v98) - v38;
              *v36 -= result;
              goto LABEL_103;
            }
            v76 = a5;
            if ( a5 >= 1 )
            {
              do
              {
                --v76;
                v77 = *a3;
                v78 = 23170 * *a4;
                *a3++ = (unsigned int)(23170 * (__int16)v77 + v78) >> 15;
                *a4++ = (unsigned int)(v78 - 23170 * v77) >> 15;
              }
              while ( v76 );
            }
          }
          goto LABEL_87;
        }
        v71 = j_ec_decode(v98, v59 * v59);
        if ( v71 >= (v59 * v60) >> 1 )
        {
          v82 = 2 * (v23 + 1) - j_isqrt32(8 * (v61 - v71) - 7);
          v73 = v23 + 1 - (v82 >> 1);
          v65 = v82 >> 1;
          v67 = v61 - ((int)(v73 * (v23 + 2 - (v82 >> 1))) >> 1);
        }
        else
        {
          v72 = j_isqrt32((8 * v71) | 1) - 1;
          v73 = (v72 >> 1) + 1;
          v65 = v72 >> 1;
          v67 = (v73 * (v72 >> 1)) >> 1;
        }
        v79 = v67 + v73;
        v39 = a2;
        v70 = a6;
        v80 = v59 * v59;
LABEL_98:
        j_ec_dec_update(v98, v67, v79, v80);
        goto LABEL_99;
      }
      v32 = a1[12];
      if ( v32 )
      {
        v33 = -32767;
        if ( v24 > 0x2000 )
          v33 = 0x7FFF;
        v34 = sub_108848(v33, v23) + v24 * v23;
        v35 = 0;
        v31 = a10;
        if ( v34 >> 14 > 0 )
          v35 = v34 >> 14;
        if ( v23 <= v35 )
          v35 = v23 - 1;
        v24 = v35 + (v32 >= 0);
      }
      else
      {
        v24 = (v24 * v23 + 0x2000) >> 14;
      }
    }
    if ( a5 >= 3 && v31 )
    {
      v54 = v23 / 2 + 1;
      v55 = v23 / 2;
      v56 = 3 * v54;
      v57 = 3 * v54 + v23 / 2;
      if ( v99 )
      {
        if ( v24 > v55 )
          v58 = ~v55 + v56 + v24;
        else
          v58 = 3 * v24;
        v68 = v98;
        v69 = v56 - v55 + v24;
        if ( v24 <= v55 )
          v69 = 3 * v24 + 3;
        goto LABEL_79;
      }
      v63 = 3 * v54 + v23 / 2;
      v64 = j_ec_decode(v98, v63);
      v65 = v64 - 2 * v54;
      if ( v64 < v56 )
        v65 = v64 / 3;
      if ( v65 > v55 )
      {
        v67 = ~v55 + v56 + v65;
        v66 = 3 * v65;
      }
      else
      {
        v66 = 3 * v65;
        v67 = 3 * v65;
      }
      v79 = v56 - v55 + v65;
      v39 = a2;
      if ( v65 <= v55 )
        v79 = v66 + 3;
      v70 = a6;
      v80 = v63;
      goto LABEL_98;
    }
    goto LABEL_59;
  }
  if ( a10 )
  {
    if ( v99 )
    {
      v25 = v24 <= 0x2000;
      v26 = a11;
      v27 = 0;
      v28 = a7;
      if ( !v25 && !a1[13] )
      {
        v27 = 1;
        if ( a5 >= 1 )
        {
          v29 = a5;
          v30 = a4;
          do
          {
            --v29;
            *v30 = -*v30;
            ++v30;
          }
          while ( v29 );
        }
      }
      v92 = v27;
      sub_C0B3C(*(_DWORD *)(v94 + 8), a3, a4, v93, v97, a5);
    }
    else
    {
      v26 = a11;
      v92 = 0;
      v28 = a7;
    }
    v36 = a6;
    v37 = 0;
    v39 = a2;
    v38 = v96;
    v40 = 0;
    if ( *a6 >= 17 )
    {
      if ( a1[8] < 17 )
      {
        v40 = 0;
      }
      else if ( v99 )
      {
        j_ec_enc_bit_logp(v98, v92, 2);
        v40 = v92;
      }
      else
      {
        v40 = j_ec_dec_bit_logp(v98, 2);
      }
    }
    if ( !a1[13] )
      v37 = v40;
    goto LABEL_95;
  }
LABEL_87:
  v39 = a2;
  v70 = a6;
LABEL_100:
  result = j_ec_tell_frac(v98) - v96;
  *v70 -= result;
  if ( v24 == 0x4000 )
  {
    v37 = 0;
    v24 = 0x4000;
    *a11 &= ((1 << a7) - 1) << a7;
    v85 = 0x7FFF;
    v84 = 0;
    v83 = 0x4000;
    goto LABEL_106;
  }
  if ( v24 )
  {
    v86 = (__int16)v24 * 8 * (__int16)v24 + 0x8000;
    v84 = (__int16)(0x8000
                  - HIWORD(v86)
                  + ((unsigned int)((__int16)((((2
                                               * (__int16)((((0x8000 - 1252 * SHIWORD(v86)) & 0xFFFF0000) + 542441472) >> 16)
                                               * SHIWORD(v86)
                                               + 0x8000) & 0xFFFF0000)
                                             - 501415936) >> 16)
                                  * SHIWORD(v86)
                                  + 0x4000) >> 15));
    v87 = __clz(v84);
    v88 = 32 - v87;
    v89 = (__int16)(v84 << (v87 - 17))
        * (__int16)((((0x8000 - 5194 * (__int16)(v84 << (v87 - 17))) & 0xFFFF0000) + 519831552) >> 16)
        + 0x4000;
    v90 = ((0x4000 - v24) << 16 >> 13) * (__int16)(0x4000 - v24) + 0x8000;
    v85 = (__int16)(0x8000
                  - HIWORD(v90)
                  + ((unsigned int)((__int16)((((2
                                               * (__int16)((((0x8000 - 1252 * SHIWORD(v90)) & 0xFFFF0000) + 542441472) >> 16)
                                               * SHIWORD(v90)
                                               + 0x8000) & 0xFFFF0000)
                                             - 501415936) >> 16)
                                  * SHIWORD(v90)
                                  + 0x4000) >> 15));
    v91 = 32 - __clz(v85);
    v37 = 0;
    v83 = ((__int16)((((_WORD)v91 - v88) << 11)
                   - (v89 >> 15)
                   + ((unsigned int)((__int16)(v85 << (15 - v91))
                                   * (__int16)((((0x8000 - 5194 * (__int16)(v85 << (15 - v91))) & 0xFFFF0000) + 519831552) >> 16)
                                   + 0x4000) >> 15))
         * (__int16)((unsigned int)((a5 << 23) - 0x800000) >> 16)
         + 0x4000) >> 15;
    goto LABEL_106;
  }
  v37 = 0;
  v26 = a11;
  v28 = a7;
LABEL_103:
  v83 = -16384;
  *v26 &= (1 << v28) - 1;
  v84 = 0x7FFF;
  v24 = 0;
  v85 = 0;
LABEL_106:
  *v39 = v37;
  v39[1] = v84;
  v39[2] = v85;
  v39[3] = v83;
  v39[4] = v24;
  v39[5] = result;
  return result;
}


// ======================================================================

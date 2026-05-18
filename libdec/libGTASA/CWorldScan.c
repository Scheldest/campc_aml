
// Address: 0x191ecc
// Original: j__ZN10CWorldScan9ScanWorldEP5RwV2diPFviiE
// Demangled: CWorldScan::ScanWorld(RwV2d *,int,void (*)(int,int))
// attributes: thunk
int CWorldScan::ScanWorld()
{
  return _ZN10CWorldScan9ScanWorldEP5RwV2diPFviiE();
}


// ============================================================

// Address: 0x5ced84
// Original: _ZN10CWorldScan9ScanWorldEP5RwV2diPFviiE
// Demangled: CWorldScan::ScanWorld(RwV2d *,int,void (*)(int,int))
int *__fastcall CWorldScan::ScanWorld(int a1, int a2, __int64 a3)
{
  int v3; // r4
  float32x2_t v4; // d0
  float32x2_t v5; // d1
  unsigned __int64 v6; // d9
  int v7; // r5
  int v8; // r6
  int v10; // lr
  int v11; // r0
  float *v12; // r10
  int v13; // r6
  int v14; // r1
  int v15; // r0
  unsigned int v16; // r9
  __int64 v17; // d17
  __int64 v18; // d18
  __int64 v19; // d19
  _QWORD *v20; // r4
  __int64 *v21; // r1
  int v22; // r0
  unsigned __int32 *v23; // r0
  int v24; // r1
  bool v25; // nf
  float v26; // s16
  float32x2_t v27; // d12
  int i; // r8
  int *result; // r0
  int v30; // r11
  float v31; // s16
  float *v32; // r0
  int v33; // r2
  int v34; // r9
  float v35; // s0
  int v36; // r1
  float v37; // r4
  float v38; // s22
  int v39; // r10
  float v40; // s18
  int v41; // r6
  int v42; // r5
  float *v43; // r4
  int v44; // r5
  float v45; // s24
  float v46; // s20
  float *v47; // r8
  float v48; // r4
  float v49; // s16
  int v50; // s0
  int v51; // r6
  int v52; // r0
  float *v53; // r4
  int v54; // r5
  float v55; // s26
  float v56; // s22
  float v57; // r11
  float *v58; // r9
  float v59; // s18
  int v60; // s0
  int v61; // s2
  float v62; // s28
  float v63; // s30
  float v64; // s17
  float v65; // r4
  float v66; // s0
  float v67; // s20
  float v68; // s2
  float v69; // s22
  float v70; // s24
  int v71; // r6
  float v72; // s26
  int v73; // r0
  int v74; // r11
  int v75; // r0
  int v76; // r8
  int v77; // r0
  int v78; // r2
  int v79; // r1
  bool v80; // zf
  int v81; // r3
  int v82; // r1
  unsigned int v83; // r12
  _QWORD *v84; // r6
  _QWORD *v85; // r2
  unsigned int v86; // r4
  __int64 v87; // d17
  __int64 v88; // d17
  _DWORD *v89; // r3
  _DWORD *v90; // r2
  float *v92; // r4
  int v93; // r11
  float v94; // s28
  float v95; // s30
  float v96; // r4
  float v97; // r0
  float v98; // r0
  float v99; // s0
  int v100; // r6
  float *v101; // r4
  float v102; // s24
  float v103; // r0
  float *v104; // r11
  float v105; // s20
  int v106; // s28
  int v107; // s0
  float v108; // s28
  float v109; // s30
  float v110; // r0
  int v111; // r0
  float v112; // s0
  float v113; // s0
  int v114; // r6
  float *v115; // r5
  float v116; // s26
  float v117; // r0
  float *v118; // r4
  float v119; // s22
  int v120; // s28
  int v121; // s0
  float v122; // s28
  float v123; // s30
  float v124; // r0
  int v125; // r0
  int v126; // r6
  float v127; // r0
  int v128; // r4
  float *v129; // [sp+4h] [bp-CCh]
  int v130; // [sp+Ch] [bp-C4h]
  int v131; // [sp+10h] [bp-C0h]
  int v132; // [sp+14h] [bp-BCh]
  int v133; // [sp+18h] [bp-B8h]
  int v134; // [sp+18h] [bp-B8h]
  int v135; // [sp+18h] [bp-B8h]
  void (__fastcall *v136)(int, int); // [sp+30h] [bp-A0h]
  int v137; // [sp+34h] [bp-9Ch]
  int v138; // [sp+3Ch] [bp-94h]
  int v139; // [sp+3Ch] [bp-94h]
  int v140; // [sp+40h] [bp-90h] BYREF
  float v141; // [sp+44h] [bp-8Ch]
  int v142; // [sp+4Ch] [bp-84h] BYREF
  int v143; // [sp+68h] [bp-68h]
  char v144; // [sp+6Ch] [bp-64h]

  v7 = a2;
  v8 = 0;
  v144 = 0;
  v136 = (void (__fastcall *)(int, int))a3;
  v143 = 0;
  if ( a2 >= 2 )
  {
    v10 = 0;
    do
    {
      v11 = v10++;
      if ( v10 < v7 )
      {
        v12 = (float *)(a1 + 8 * v11);
        v13 = v10;
        do
        {
          v3 = a1 + 8 * v13;
          if ( *v12 == *(float *)v3 && v12[1] == *(float *)(v3 + 4) )
          {
            if ( v13 < --v7 )
            {
              v14 = v7 - v13;
              v15 = v13;
              if ( (unsigned int)(v7 - v13) < 4 )
                goto LABEL_13;
              v16 = v14 & 0xFFFFFFFC;
              v15 = v13;
              if ( (v14 & 0xFFFFFFFC) == 0 )
                goto LABEL_13;
              v15 = v13 + v16;
              HIDWORD(a3) = v14 & 0xFFFFFFFC;
              do
              {
                HIDWORD(a3) -= 4;
                v17 = *(_QWORD *)(v3 + 16);
                v18 = *(_QWORD *)(v3 + 24);
                v19 = *(_QWORD *)(v3 + 32);
                LODWORD(a3) = v3 + 32;
                *(_QWORD *)v3 = *(_QWORD *)(v3 + 8);
                *(_QWORD *)(v3 + 8) = v17;
                v20 = (_QWORD *)(v3 + 16);
                *v20 = v18;
                v20[1] = v19;
                v3 = a3;
              }
              while ( HIDWORD(a3) );
              if ( v14 != v16 )
              {
LABEL_13:
                v21 = (__int64 *)(a1 + 8 + 8 * v15);
                v22 = v7 - v15;
                do
                {
                  a3 = *v21;
                  --v22;
                  *(v21 - 1) = *v21;
                  ++v21;
                }
                while ( v22 );
              }
            }
            --v13;
          }
          ++v13;
        }
        while ( v13 < v7 );
      }
    }
    while ( v10 < v7 - 1 );
    if ( v7 < 2 )
    {
      v8 = 0;
    }
    else
    {
      v23 = (unsigned __int32 *)(a1 + 12);
      v4.n64_u32[0] = *(_DWORD *)(a1 + 4);
      v24 = 1;
      v8 = 0;
      do
      {
        v5.n64_u32[0] = *v23;
        v23 += 2;
        v25 = v5.n64_f32[0] < v4.n64_f32[0];
        v4.n64_u64[0] = vmin_f32(v5, v4).n64_u64[0];
        if ( v25 )
          v8 = v24;
        ++v24;
      }
      while ( v7 != v24 );
    }
  }
  v26 = 0.0;
  v140 = *(_DWORD *)(a1 + 8 * v8);
  LODWORD(v6) = 1203982323;
  v141 = *(float *)(a1 + 8 * v8 + 4);
  *((_BYTE *)&v143 + v8) = 1;
  v138 = 0;
  v137 = 1;
  if ( v7 >= 1 )
    goto LABEL_28;
LABEL_40:
  v27.n64_u32[0] = 1203982323;
  while ( 1 )
  {
    result = (int *)*((unsigned __int8 *)&v143 + v3);
    if ( *((_BYTE *)&v143 + v3) )
      break;
    v26 = v26 + v27.n64_f32[0];
    v8 = v3;
    *(&v140 + 2 * v137) = *(_DWORD *)(a1 + 8 * v3);
    LODWORD(a3) = v137 + 1;
    *(&v140 + 2 * v137 + 1) = *(_DWORD *)(a1 + 8 * v3 + 4);
    *((_BYTE *)&v143 + v3) = 1;
    ++v137;
    ++v138;
    if ( v7 < 1 )
      goto LABEL_40;
LABEL_28:
    v27.n64_u64[0] = v6;
    for ( i = 0; i != v7; ++i )
    {
      if ( i != v8 )
      {
        for ( v4.n64_f32[0] = COERCE_FLOAT(
                                CGeneral::GetATanOfXY(
                                  COERCE_CGENERAL_(*(float *)(a1 + 8 * i) - *(float *)(a1 + 8 * v8)),
                                  *(float *)(a1 + 8 * i + 4) - *(float *)(a1 + 8 * v8 + 4),
                                  *(float *)&a3))
                            - v26; v4.n64_f32[0] < 0.0; v4.n64_f32[0] = v4.n64_f32[0] + 6.2832 )
          ;
        while ( v4.n64_f32[0] >= 6.2832 )
          v4.n64_f32[0] = v4.n64_f32[0] + -6.2832;
        v25 = v4.n64_f32[0] < v27.n64_f32[0];
        v27.n64_u64[0] = vmin_f32(v4, v27).n64_u64[0];
        if ( v25 )
          v3 = i;
      }
    }
  }
  v30 = v137;
  if ( v137 < 3 )
    return result;
  v31 = v141;
  v32 = (float *)&v142;
  v33 = v138;
  v34 = 0;
  v35 = v141;
  v36 = 1;
  do
  {
    if ( *v32 >= v35 )
    {
      if ( *v32 > v31 )
        v31 = *v32;
    }
    else
    {
      v34 = v36;
      v35 = *v32;
    }
    v32 += 2;
    --v33;
    ++v36;
  }
  while ( v33 );
  v37 = floorf(v35);
  v38 = floorf(v31);
  v39 = 9999;
  v40 = v37;
  v41 = 1;
  v132 = v34;
  do
  {
    v42 = v132;
    v43 = (float *)(&v140 + 2 * v132);
    if ( v132 < 1 )
      v42 = v137;
    v44 = v42 - 1;
    v45 = *v43;
    if ( *v43 < (float)v39 )
      v39 = (int)floorf(*v43);
    v46 = v43[1];
    v47 = (float *)(&v140 + 2 * v44);
    v48 = floorf(v46);
    v132 = v44;
    v49 = v47[1];
    v50 = (int)floorf(v49);
    if ( v41 >= v137 )
      break;
    ++v41;
  }
  while ( (int)v48 == v50 );
  v131 = v34;
  v51 = 1;
  v130 = (int)v38;
  v133 = (int)v40;
  v139 = -9999;
  do
  {
    v52 = v139;
    v53 = (float *)(&v140 + 2 * v131);
    v54 = v131 + 1;
    v55 = *v53;
    if ( v131 + 1 == v30 )
      v54 = 0;
    if ( v55 > (float)v139 )
      v52 = (int)floorf(*v53);
    v56 = v53[1];
    v139 = v52;
    v57 = floorf(v56);
    v58 = (float *)(&v140 + 2 * v54);
    v131 = v54;
    v59 = v58[1];
    v60 = (int)floorf(v59);
    v61 = (int)v57;
    v30 = v137;
    if ( v51 >= v137 )
      break;
    ++v51;
  }
  while ( v61 == v60 );
  v62 = (float)(*v58 - v55) / (float)(v59 - v56);
  v63 = (float)(*v47 - v45) / (float)(v49 - v46);
  v64 = fabsf(v62);
  v65 = ceilf(v56);
  v66 = ceilf(v46) - v46;
  v67 = 0.0;
  v68 = v65 - v56;
  v69 = 0.0;
  if ( fabsf(v63) != INFINITY )
    v67 = v63;
  v70 = v45 + (float)(v66 * v67);
  if ( v64 != INFINITY )
    v69 = v62;
  v71 = v133;
  v72 = v55 + (float)(v68 * v69);
  if ( v133 == v130 )
    goto LABEL_72;
  if ( v67 < 0.0 )
  {
    v73 = (int)floorf(v70);
    if ( v39 > v73 )
      v39 = v73;
  }
  if ( v69 < 0.0 )
  {
LABEL_72:
    v74 = v139;
  }
  else
  {
    v74 = v139;
    v75 = (int)floorf(v72);
    if ( v139 < v75 )
      v74 = v75;
  }
  if ( v133 > v130 )
    goto LABEL_154;
LABEL_76:
  while ( 2 )
  {
    v129 = (float *)(&v140 + 2 * v131);
    while ( 1 )
    {
      v76 = v71;
      if ( v39 <= v74 )
      {
        while ( 1 )
        {
          v136(v39, v76);
          v77 = NumExtraBlocks;
          if ( NumExtraBlocks >= 1 )
            break;
LABEL_97:
          if ( v39++ >= v74 )
            goto LABEL_98;
        }
        v78 = 0;
        while ( 1 )
        {
          v79 = ExtraBlocksX[v78];
          v80 = v39 == v79;
          if ( v39 == v79 )
            v80 = v76 == ExtraBlocksY[v78];
          if ( !v80 )
            goto LABEL_96;
          if ( v78 < --v77 )
          {
            v81 = v77 - v78;
            if ( (unsigned int)(v77 - v78) > 3 )
            {
              v83 = v81 & 0xFFFFFFFC;
              if ( (v81 & 0xFFFFFFFC) != 0 )
              {
                v82 = v78 + v83;
                v84 = &ExtraBlocksX[v78];
                v85 = &ExtraBlocksY[v78];
                v86 = v81 & 0xFFFFFFFC;
                do
                {
                  v86 -= 4;
                  v87 = *(_QWORD *)((char *)v84 + 12);
                  *v84 = *(_QWORD *)((char *)v84 + 4);
                  v84[1] = v87;
                  v84 += 2;
                  v88 = *(_QWORD *)((char *)v85 + 12);
                  *v85 = *(_QWORD *)((char *)v85 + 4);
                  v85[1] = v88;
                  v85 += 2;
                }
                while ( v86 );
                if ( v81 == v83 )
                  goto LABEL_95;
              }
              else
              {
                v82 = v78;
              }
            }
            else
            {
              v82 = v78;
            }
            v89 = &ExtraBlocksY[v82 + 1];
            v90 = &ExtraBlocksX[v82 + 1];
            do
            {
              ++v82;
              *(v90 - 1) = *v90;
              ++v90;
              *(v89 - 1) = *v89;
              ++v89;
            }
            while ( v82 < v77 );
          }
LABEL_95:
          v78 = 4;
          NumExtraBlocks = v77;
LABEL_96:
          if ( ++v78 >= v77 )
            goto LABEL_97;
        }
      }
LABEL_98:
      v92 = (float *)(&v140 + 2 * v132);
      v71 = v76 + 1;
      v70 = v67 + v70;
      if ( v76 + 1 != (int)floorf(v92[1]) )
      {
        if ( v67 >= 0.0 )
LABEL_108:
          v98 = v70 - v67;
        else
          v98 = v70;
        v39 = (int)floorf(v98);
        goto LABEL_125;
      }
      if ( v71 == v130 )
      {
        if ( v67 >= 0.0 )
          goto LABEL_108;
        v134 = v76 + 1;
        v93 = v132;
        v94 = *v92;
        do
        {
          if ( v93 < 1 )
            v93 = v137;
          --v93;
          v95 = *((float *)&v140 + 2 * v93);
          v96 = floorf(v95);
          v97 = floorf(v94);
          v94 = v95;
          v39 = (int)v97;
        }
        while ( (int)v97 > (int)v96 );
        v132 = v93;
      }
      else
      {
        v99 = v67 < 0.0 ? *v92 : v70 - v67;
        v134 = v76 + 1;
        v100 = v132;
        v39 = (int)floorf(v99);
        do
        {
          v101 = (float *)(&v140 + 2 * v100);
          v102 = *v101;
          if ( v100 < 1 )
            v100 = v137;
          --v100;
          v103 = floorf(*v101);
          v104 = (float *)(&v140 + 2 * v100);
          v105 = v104[1];
          v106 = (int)v103;
          v107 = (int)floorf(v105);
          if ( v39 > v106 )
            v39 = v106;
        }
        while ( v134 == v107 );
        v108 = v101[1];
        v132 = v100;
        v109 = (float)(*v104 - v102) / (float)(v105 - v108);
        v110 = ceilf(v108);
        v67 = 0.0;
        if ( fabsf(v109) != INFINITY )
          v67 = v109;
        v70 = v102 + (float)((float)(v110 - v108) * v67);
        if ( v67 < 0.0 )
        {
          v111 = (int)floorf(v70);
          if ( v39 > v111 )
            v39 = v111;
        }
      }
      v71 = v134;
LABEL_125:
      v72 = v69 + v72;
      if ( v71 != (int)floorf(v129[1]) )
      {
        v112 = v72;
        if ( v69 < 0.0 )
          v112 = v72 - v69;
        goto LABEL_132;
      }
      if ( v71 != v130 )
        break;
      if ( v69 >= 0.0 )
      {
        v126 = v131;
        do
        {
          v127 = floorf(*((float *)&v140 + 2 * v126++));
          if ( v126 == v137 )
            v126 = 0;
          v74 = (int)v127;
        }
        while ( (int)v127 < (int)floorf(*((float *)&v140 + 2 * v126)) );
        v131 = v126;
        v71 = v130;
        if ( v76 >= v130 )
          goto LABEL_154;
        goto LABEL_76;
      }
      v112 = v72 - v69;
LABEL_132:
      v74 = (int)floorf(v112);
      if ( v76 >= v130 )
        goto LABEL_154;
    }
    if ( v69 >= 0.0 )
      v113 = *v129;
    else
      v113 = v72 - v69;
    v135 = v71;
    v114 = v131;
    v74 = (int)floorf(v113);
    do
    {
      v115 = (float *)(&v140 + 2 * v114++);
      v116 = *v115;
      if ( v114 == v137 )
        v114 = 0;
      v117 = floorf(*v115);
      v118 = (float *)(&v140 + 2 * v114);
      v119 = v118[1];
      v120 = (int)v117;
      v121 = (int)floorf(v119);
      if ( v74 < v120 )
        v74 = v120;
    }
    while ( v135 == v121 );
    v122 = v115[1];
    v131 = v114;
    v123 = (float)(*v118 - v116) / (float)(v119 - v122);
    v124 = ceilf(v122);
    v69 = 0.0;
    if ( fabsf(v123) != INFINITY )
      v69 = v123;
    v72 = v116 + (float)((float)(v124 - v122) * v69);
    if ( v69 >= 0.0 )
    {
      v125 = (int)floorf(v72);
      if ( v74 < v125 )
        v74 = v125;
    }
    v71 = v135;
    if ( v76 < v130 )
      continue;
    break;
  }
LABEL_154:
  if ( NumExtraBlocks >= 1 )
  {
    v128 = 0;
    do
    {
      v136(ExtraBlocksX[v128], ExtraBlocksY[v128]);
      ++v128;
    }
    while ( v128 < NumExtraBlocks );
  }
  result = &NumExtraBlocks;
  NumExtraBlocks = 0;
  return result;
}


// ============================================================

// Address: 0x5cf6f0
// Original: _ZN10CWorldScan23SetExtraRectangleToScanEffff
// Demangled: CWorldScan::SetExtraRectangleToScan(float,float,float,float)
float __fastcall CWorldScan::SetExtraRectangleToScan(CWorldScan *this, float a2, float a3, float a4, float a5)
{
  float v8; // s16
  float result; // r0
  int v10; // r8
  unsigned int v11; // r4
  float v12; // s16
  int32x4_t v13; // q8
  int v14; // r1
  unsigned int v15; // r2
  unsigned int v16; // r9
  int32x4_t v17; // q8
  int32x4_t v18; // q9
  _DWORD *v19; // lr
  int v20; // r10
  unsigned int v21; // r0
  int v22; // r12
  int32x4_t v23; // q11
  _DWORD *v24; // r5
  int32x4_t v25; // q10
  int32x4_t *v26; // lr
  int32x4_t *v27; // r0
  unsigned int v28; // r3
  _DWORD *v29; // r5
  unsigned int *v30; // r3

  v8 = floorf(*(float *)&this);
  result = ceilf(a2);
  v10 = (int)result;
  v11 = (int)v8;
  if ( (int)v8 < (int)result )
  {
    v12 = floorf(a3);
    v13.n128_u64[0] = 0x100000000LL;
    v13.n128_u64[1] = 0x300000002LL;
    v14 = (int)ceilf(a4);
    v15 = v14 - (int)v12;
    v16 = v15 & 0xFFFFFFFC;
    v17 = vaddq_s32(vdupq_n_s32((int)v12), v13);
    v18.n128_u64[0] = 0x400000004LL;
    v18.n128_u64[1] = 0x400000004LL;
    v19 = ExtraBlocksY;
    result = COERCE_FLOAT(ExtraBlocksY);
    do
    {
      if ( v14 > (int)v12 )
      {
        v20 = NumExtraBlocks;
        v21 = (int)v12;
        v22 = NumExtraBlocks;
        if ( v15 < 4 )
          goto LABEL_9;
        v22 = NumExtraBlocks;
        v21 = (int)v12;
        if ( !v16 )
          goto LABEL_9;
        v23 = v17;
        v24 = v19;
        v22 = NumExtraBlocks + v16;
        v25 = vdupq_n_s32(v11);
        v26 = (int32x4_t *)&ExtraBlocksY[NumExtraBlocks];
        v27 = (int32x4_t *)&ExtraBlocksX[NumExtraBlocks];
        v28 = v15 & 0xFFFFFFFC;
        do
        {
          *v26++ = v23;
          v28 -= 4;
          v23 = vaddq_s32(v23, v18);
          *v27++ = v25;
        }
        while ( v28 );
        v21 = (v15 & 0xFFFFFFFC) + (int)v12;
        v19 = v24;
        if ( v15 != v16 )
        {
LABEL_9:
          v29 = &v19[v22];
          v30 = &ExtraBlocksX[v22];
          do
          {
            *v29++ = v21++;
            *v30++ = v11;
          }
          while ( v14 != v21 );
        }
        LODWORD(result) = v15 + v20;
        NumExtraBlocks = v15 + v20;
      }
      ++v11;
    }
    while ( v11 != v10 );
  }
  return result;
}


// ============================================================

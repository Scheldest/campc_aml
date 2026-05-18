// ADDR: 0x183a60
// SYMBOL: sub_183A60
int __fastcall sub_183A60(int a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r6
  int v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r0
  __int64 v11; // r0
  int v12; // r9
  void *v13; // r0
  int v14; // r0
  int v15; // r4
  int v16; // r0
  _DWORD *v17; // r6
  _DWORD *v18; // r0
  bool v19; // zf
  int v20; // r11
  int v21; // r5
  unsigned int v22; // r4
  __int64 v23; // kr00_8
  int v24; // r11
  _BOOL4 v25; // r0
  _BOOL4 v26; // r5
  char v27; // r1
  int v28; // r1
  unsigned int v29; // r5
  int v30; // r0
  _DWORD *v31; // r0
  bool v32; // zf
  void *v33; // r0
  bool v34; // zf
  int v35; // r0
  int v36; // r1
  bool v37; // zf
  int v38; // r0
  _DWORD *v39; // r1
  int v40; // r2
  bool v41; // zf
  int v42; // r0
  _BYTE *v43; // r5
  int v44; // r3
  __int16 v45; // r1
  int v46; // r0
  int v47; // r1
  int v48; // r1
  int v49; // r1
  int v50; // r0
  _DWORD *v51; // r2
  _DWORD *v52; // r4
  _DWORD *v53; // r6
  __int16 v54; // t1
  __int64 v55; // kr08_8
  unsigned int v56; // r0
  unsigned int v57; // r0
  unsigned int v58; // r0
  _DWORD *v59; // r10
  __int64 v60; // r0
  int v61; // r0
  int v62; // r2
  unsigned int v63; // r4
  _BYTE *v64; // r6
  char v65; // r1
  __int16 v66; // r0
  int v67; // r2
  int v68; // r0
  int v69; // r1
  int v70; // r0
  int v71; // r0
  int v72; // r0
  unsigned int v73; // r0
  unsigned int v74; // r0
  _BYTE *v75; // r6
  int v76; // r0
  __int16 v77; // r1
  int v78; // r0
  int v79; // r1
  int v80; // r0
  int v81; // r1
  int v82; // r10
  int *v83; // r0
  _DWORD *v84; // r0
  int v85; // r6
  int v86; // r0
  int v87; // r4
  size_t v88; // r9
  void *v89; // r11
  void *v90; // r0
  signed int v91; // r6
  void *v92; // r5
  unsigned int v93; // r4
  int v94; // r9
  void *v95; // r0
  int v96; // r5
  int v97; // r0
  bool v98; // zf
  bool v99; // zf
  bool v100; // zf
  int v101; // r0
  int v102; // r0
  unsigned __int16 v103; // r0
  void *v104; // r4
  _BYTE *v105; // r5
  __int16 v106; // r1
  int v107; // r2
  int v108; // r1
  int v109; // r2
  int v110; // r1
  int v111; // r0
  __int64 v112; // kr10_8
  unsigned int v113; // r0
  unsigned __int32 v114; // r5
  unsigned int v115; // r2
  int v116; // r1
  bool v117; // cf
  int v118; // r6
  signed int v119; // r0
  int v120; // r1
  int *v121; // r4
  int v122; // r0
  int v123; // r0
  __int64 v124; // kr18_8
  int v125; // r0
  bool v126; // cc
  void *v127; // r4
  _DWORD *v128; // r5
  __int16 v129; // r3
  int v130; // r1
  int v131; // r0
  int v132; // r1
  bool v133; // zf
  bool v134; // zf
  bool v135; // zf
  bool v136; // zf
  _BYTE *v137; // r0
  int v138; // r2
  int v139; // r4
  int v140; // r0
  const void *v141; // r0
  char *v142; // r5
  const void *v143; // r0
  __int64 v144; // d17
  __int64 v145; // d18
  __int64 v146; // d19
  int v147; // r0
  unsigned __int16 v148; // r0
  void *v149; // r6
  _BYTE *v150; // r5
  __int64 v151; // kr20_8
  __int16 v152; // r0
  int v153; // r0
  __int64 v154; // kr28_8
  int v155; // r4
  unsigned __int8 *v156; // r10
  int v157; // r0
  int v159; // [sp+4h] [bp-30Ch]
  unsigned __int8 *v160; // [sp+40h] [bp-2D0h]
  _WORD *v161; // [sp+48h] [bp-2C8h]
  _DWORD *v162; // [sp+50h] [bp-2C0h]
  unsigned __int16 *v163; // [sp+54h] [bp-2BCh]
  int *v164; // [sp+58h] [bp-2B8h]
  int *v165; // [sp+60h] [bp-2B0h]
  int *v166; // [sp+64h] [bp-2ACh]
  int v167; // [sp+68h] [bp-2A8h]
  unsigned int v168; // [sp+6Ch] [bp-2A4h]
  int *v169; // [sp+70h] [bp-2A0h]
  _DWORD *v170; // [sp+74h] [bp-29Ch]
  int v171; // [sp+74h] [bp-29Ch]
  int v172; // [sp+78h] [bp-298h]
  int v173; // [sp+78h] [bp-298h]
  int v174; // [sp+7Ch] [bp-294h]
  int v175; // [sp+80h] [bp-290h]
  int v176; // [sp+80h] [bp-290h]
  char v177[2]; // [sp+86h] [bp-28Ah] BYREF
  _QWORD v178[4]; // [sp+88h] [bp-288h] BYREF
  int64x2_t v179; // [sp+A8h] [bp-268h] BYREF
  int64x2_t v180[17]; // [sp+BCh] [bp-254h] BYREF
  int v181[3]; // [sp+1D0h] [bp-140h] BYREF
  void *src; // [sp+1DCh] [bp-134h]
  __int64 v183; // [sp+2E4h] [bp-2Ch] BYREF
  int v184; // [sp+2ECh] [bp-24h]
  void *v185[8]; // [sp+2F0h] [bp-20h] BYREF

  do
  {
    v2 = sub_18CC74((int)&unk_382751, *(_DWORD *)(a1 + 2028));
    v3 = v2 == -1;
    if ( v2 == -1 )
      v3 = v184 == -1;
    if ( v3 )
    {
      v16 = *(_DWORD *)a1;
      *(_BYTE *)(a1 + 4) = 1;
      v15 = 0;
      (*(void (__fastcall **)(int, _DWORD, _DWORD))(v16 + 40))(a1, 0, 0);
      return v15;
    }
    if ( *(_BYTE *)(a1 + 4) )
      return 0;
  }
  while ( v2 > 0 );
  v4 = *(_DWORD *)(a1 + 1980);
  v5 = 0;
  if ( v4 == *(_DWORD *)(a1 + 1992) )
  {
    v172 = 0;
  }
  else
  {
    v172 = 0;
    do
    {
      if ( !*(_BYTE *)(v4 + 56) )
        break;
      v6 = *(_DWORD *)(v4 + 52);
      *(_DWORD *)(a1 + 1980) = *(_DWORD *)(v4 + 60);
      if ( v6 )
      {
        sub_181338(a1, *(_DWORD *)(v4 + 16), *(_DWORD *)(v4 + 20), 0, 1, *(unsigned __int8 *)(v4 + 12));
      }
      else
      {
        HIDWORD(v11) = v172;
        v12 = v5;
        if ( !(v5 | v172) )
        {
          v11 = sub_17E348();
          v12 = v11;
        }
        v172 = HIDWORD(v11);
        v5 = v12;
        if ( !sub_1825E8(
                a1,
                *(unsigned __int8 **)(v4 + 48),
                *(_DWORD *)v4,
                *(_DWORD *)(v4 + 4),
                *(_DWORD *)(v4 + 8),
                *(unsigned __int8 *)(v4 + 12),
                *(_QWORD *)(v4 + 16),
                *(unsigned __int8 *)(v4 + 24),
                1,
                v12,
                SHIDWORD(v11)) )
        {
          v13 = *(void **)(v4 + 48);
          if ( v13 )
            operator delete(v13);
        }
        if ( *(_DWORD *)(v4 + 28) )
        {
          if ( sub_17E596(v4 + 16, (int)&unk_BE944) )
          {
            v14 = sub_181978(a1, *(_DWORD *)(v4 + 16), *(_DWORD *)(v4 + 20), 1, 1);
            if ( v14 )
              *(_DWORD *)(v14 + 2108) = *(_DWORD *)(v4 + 28);
          }
        }
      }
      v7 = *(_DWORD *)(a1 + 1988);
      v4 = *(_DWORD *)(a1 + 1980);
      v8 = *(_DWORD *)(a1 + 1992);
      v9 = *(_DWORD *)(a1 + 1996);
      *(_BYTE *)(v7 + 56) = 0;
      v10 = *(_DWORD *)(v7 + 60);
      *(_DWORD *)(a1 + 1996) = v9 + 1;
      *(_DWORD *)(a1 + 1988) = v10;
    }
    while ( v4 != v8 );
  }
  v17 = *(_DWORD **)(a1 + 908);
  v18 = *(_DWORD **)(a1 + 920);
  v19 = v17 == v18;
  if ( v17 != v18 )
    v19 = *((_BYTE *)v17 + 284) == 0;
  if ( v19 )
  {
    v166 = (int *)(a1 + 2484);
    v165 = (int *)(a1 + 2492);
    v167 = a1 + 2472;
    v20 = v5;
    v168 = 0;
LABEL_30:
    v21 = v172;
    goto LABEL_66;
  }
  *(_DWORD *)(a1 + 908) = v17[72];
  v166 = (int *)(a1 + 2484);
  v165 = (int *)(a1 + 2492);
  v167 = a1 + 2472;
  v20 = v5;
  v168 = 0;
  if ( !v17 )
    goto LABEL_30;
  v22 = 0;
  v170 = v17;
  while ( 1 )
  {
    if ( !(v172 | v20) )
    {
      v23 = sub_17E348();
      v172 = HIDWORD(v23);
      v20 = v23;
      v22 = sub_221404(v23, HIDWORD(v23), 1000, 0);
    }
    if ( v17[2] >= v22 )
      goto LABEL_42;
    v175 = v20;
    v24 = *((unsigned __int8 *)v17 + 12);
    v25 = sub_17E580((int)v17, (int)&unk_BE944);
    v26 = v25;
    if ( v24 == 6 || v25 )
      break;
    v27 = *((_BYTE *)v17 + 12);
    v17[2] = v22 + 1000;
    *((_BYTE *)v17 + 12) = v27 + 1;
    LOBYTE(v181[0]) = 24;
    v28 = *(_DWORD *)(a1 + 900);
    *(_WORD *)((char *)v181 + 1) = word_381C0C ^ 0x6969;
    if ( v28 )
    {
      v29 = 0;
      do
      {
        v30 = *(_DWORD *)(*(_DWORD *)(a1 + 896) + 4 * v29);
        (*(void (__fastcall **)(int, int *, int, _DWORD, _DWORD))(*(_DWORD *)v30 + 28))(v30, v181, 24, *v17, v17[1]);
        ++v29;
      }
      while ( v29 < *(_DWORD *)(a1 + 900) );
    }
    sub_18CCDC(&unk_382751, *(_DWORD *)(a1 + 2028), v181, 3, *v17, *((unsigned __int16 *)v17 + 2));
    v20 = v175;
LABEL_42:
    v17 = *(_DWORD **)(a1 + 908);
    v31 = *(_DWORD **)(a1 + 920);
    v32 = v17 == v31;
    if ( v17 != v31 )
      v32 = *((_BYTE *)v17 + 284) == 0;
    if ( v32 )
      goto LABEL_63;
    *(_DWORD *)(a1 + 908) = v17[72];
LABEL_46:
    if ( !v17 )
      goto LABEL_63;
  }
  v33 = (void *)v17[4];
  if ( v33 )
  {
    operator delete[](v33);
    v17[4] = 0;
  }
  v34 = v24 == 6 && !v26;
  if ( v24 == 6 && !v26 )
    v34 = v17[70] == 1;
  if ( v34 )
  {
    v43 = malloc(0x1Du);
    v43[28] = 29;
    v43[24] = 0;
    *((_DWORD *)v43 + 3) = 1;
    *((_DWORD *)v43 + 4) = 8;
    *((_DWORD *)v43 + 5) = v43 + 28;
    v44 = *v17;
    v45 = *((_WORD *)v17 + 2);
    *(_WORD *)v43 = -1;
    *((_WORD *)v43 + 4) = v45;
    *((_DWORD *)v43 + 1) = v44;
    EnterCriticalSection_0((pthread_mutex_t *)&unk_381C10);
    *(_DWORD *)sub_184892(v167) = v43;
    v46 = *v166;
    v47 = *v165;
    *(_BYTE *)(v46 + 4) = 1;
    *v166 = *(_DWORD *)(v46 + 8);
    *v165 = v47 + 1;
    LeaveCriticalSection_0((pthread_mutex_t *)&unk_381C10);
  }
  v20 = v175;
  if ( v17 == v170 )
  {
    v17 = *(_DWORD **)(a1 + 908);
    v38 = *(_DWORD *)(a1 + 916);
    v39 = *(_DWORD **)(a1 + 920);
    v40 = *(_DWORD *)(a1 + 924) + 1;
    v41 = v17 == v39;
    *(_BYTE *)(v38 + 284) = 0;
    v42 = *(_DWORD *)(v38 + 288);
    *(_DWORD *)(a1 + 924) = v40;
    *(_DWORD *)(a1 + 916) = v42;
    if ( v17 != v39 )
      v41 = *((_BYTE *)v17 + 284) == 0;
    if ( v41 )
    {
      v168 = v22;
      goto LABEL_30;
    }
    *(_DWORD *)(a1 + 908) = v17[72];
    v170 = v17;
    goto LABEL_46;
  }
  v35 = *(_DWORD *)(a1 + 908);
  v36 = *(_DWORD *)(a1 + 920);
  *((_WORD *)v17 + 2) = -1;
  *v17 = -1;
  v37 = v35 == v36;
  if ( v35 != v36 )
    v37 = *(_BYTE *)(v35 + 284) == 0;
  if ( !v37 )
  {
    v17 = (_DWORD *)v35;
    *(_DWORD *)(a1 + 908) = *(_DWORD *)(v35 + 288);
    goto LABEL_46;
  }
LABEL_63:
  v21 = v172;
  if ( v170 )
    *(_DWORD *)(a1 + 908) = v170;
  v168 = v22;
LABEL_66:
  if ( *(_WORD *)(a1 + 8) )
  {
    v48 = 0;
    do
    {
      v171 = v48;
      v49 = 33 * v48;
      v50 = *(_DWORD *)(a1 + 832);
      if ( *(_BYTE *)(v50 + (v49 << 6)) )
      {
        v51 = (_DWORD *)(v50 + (v49 << 6));
        v176 = (int)v51;
        v52 = v51 + 1;
        v54 = *((_WORD *)v51 + 4);
        v53 = v51 + 2;
        LODWORD(v183) = v51[1];
        WORD2(v183) = v54;
        if ( !(v20 | v21) )
        {
          v55 = sub_17E348();
          v21 = HIDWORD(v55);
          v20 = v55;
          v56 = sub_221404(v55, HIDWORD(v55), 1000, 0);
          v51 = (_DWORD *)v176;
          v168 = v56;
        }
        v57 = v51[448];
        v117 = v168 >= v57;
        v58 = v168 - v57;
        if ( v58 != 0 && v117 && v58 >= 0x1389 && v51[527] == 8 )
        {
          v59 = v51 + 6;
          if ( !*(_DWORD *)(sub_18A0A4(v51 + 6) + 96) )
          {
            LODWORD(v60) = *v52;
            HIDWORD(v60) = *v53;
            LOBYTE(v181[0]) = 23;
            sub_1825E8(a1, (unsigned __int8 *)v181, 8, 3, 8, 0, v60, 0, 0, v20, v21);
            *(_DWORD *)(v176 + 1792) = sub_1876DC(v59) + v168;
          }
        }
        sub_188D78(
          v176 + 24,
          *(_DWORD *)(a1 + 2028),
          v183,
          HIDWORD(v183),
          *(_DWORD *)(a1 + 2016),
          v159,
          v20,
          v21,
          a1 + 896);
        v174 = v176 + 24;
        v61 = sub_18A09E(v176 + 24);
        v62 = v176;
        v173 = v21;
        if ( v61 )
          goto LABEL_78;
        v70 = *(_DWORD *)(v176 + 2108);
        v169 = (int *)(v176 + 2108);
        if ( (unsigned int)(v70 - 1) <= 1 )
        {
          v71 = sub_189CCA(v174);
          v62 = v176;
          if ( !v71 )
            goto LABEL_78;
          v70 = *v169;
        }
        if ( v70 == 3 )
        {
          v72 = sub_189D32(v174);
          v62 = v176;
          if ( !v72 )
            goto LABEL_78;
          v70 = *v169;
        }
        if ( (v70 & 0xFFFFFFFC) == 4 )
        {
          v73 = *(_DWORD *)(v62 + 2072);
          v117 = v168 >= v73;
          v74 = v168 - v73;
          if ( v74 != 0 && v117 && v74 >= 0x2711 )
          {
LABEL_78:
            v63 = *(_DWORD *)(v62 + 2108);
            if ( v63 <= 8 && ((1 << v63) & 0x11A) != 0 )
            {
              v64 = malloc(0x1Du);
              v65 = 32;
              v64[24] = 0;
              *(_WORD *)v64 = v171;
              v66 = WORD2(v183);
              if ( v63 == 8 )
                v65 = 33;
              v67 = v183;
              if ( v63 == 4 )
                v65 = 29;
              v64[28] = v65;
              *((_WORD *)v64 + 4) = v66;
              *((_DWORD *)v64 + 3) = 1;
              *((_DWORD *)v64 + 4) = 8;
              *((_DWORD *)v64 + 5) = v64 + 28;
              *((_DWORD *)v64 + 1) = v67;
              EnterCriticalSection_0((pthread_mutex_t *)&unk_381C10);
              *(_DWORD *)sub_184892(v167) = v64;
              v68 = *v166;
              v69 = *v165;
              *(_BYTE *)(v68 + 4) = 1;
              *v166 = *(_DWORD *)(v68 + 8);
              *v165 = v69 + 1;
              LeaveCriticalSection_0((pthread_mutex_t *)&unk_381C10);
            }
            sub_181338(a1, v183, SHIDWORD(v183), 0, 1, 0);
            goto LABEL_87;
          }
        }
        if ( !sub_18A098(v174) )
        {
          if ( *v169 == 8
            && v168 > *(_DWORD *)(v176 + 1788)
            && (*(_BYTE *)(a1 + 6) || *(unsigned __int16 *)(v176 + 1784) == 0xFFFF) )
          {
            *(_DWORD *)(v176 + 1788) = v168 + 5000;
            ((void (__fastcall *)(int, _DWORD, _DWORD, int))loc_1817A2)(a1, v183, HIDWORD(v183), 1);
          }
          v80 = sub_188832(v174, v185);
          if ( v80 < 1 )
            goto LABEL_87;
          v81 = v176;
          v82 = v80;
          v161 = (_WORD *)(v176 + 1784);
          v164 = (int *)(v176 + 1780);
          v163 = (unsigned __int16 *)(v176 + 16);
          v162 = (_DWORD *)(v176 + 12);
          v160 = (unsigned __int8 *)(v176 + 1796);
          v83 = v181;
          while ( 2 )
          {
            if ( *(_DWORD *)(a1 + 1956) )
            {
              v84 = (_DWORD *)sub_17D4C0((int)v181, 560);
              sub_17D55E(v84);
              sub_17D89E((unsigned __int8 *)v181, v185[0], (unsigned int)(v82 + 7) >> 3);
              v85 = v181[0];
              v86 = v181[0] + 7;
              *(_DWORD *)(a1 + 1968) += (v181[0] + 7) >> 3;
              if ( v85 )
              {
                v87 = v20;
                v88 = v86 >> 3;
                v89 = (void *)operator new[](v86 >> 3);
                j_memcpy(v89, src, v88);
                sub_17D55E(v181);
                sub_17DEFA(*(_DWORD *)(a1 + 1956), v89, v85, (int)v181);
                *(_DWORD *)(a1 + 1976) += (v181[0] + 7) >> 3;
                operator delete[](v89);
                v90 = v185[0];
                v91 = (v181[0] + 7) >> 3;
                if ( (int)((unsigned int)(v82 + 7) >> 3) < v91 )
                {
                  if ( v185[0] )
                    operator delete[](v185[0]);
                  v90 = (void *)operator new[](v91);
                  v185[0] = v90;
                }
                v20 = v87;
                j_memcpy(v90, src, v91);
              }
              else
              {
                v91 = 0;
              }
              v83 = (int *)sub_17D542((int)v181);
              v81 = v176;
            }
            else
            {
              v91 = (unsigned int)(v82 + 7) >> 3;
            }
            v92 = v185[0];
            v93 = *(unsigned __int8 *)v185[0];
            v94 = *v169;
            if ( *v169 == 6 )
            {
              if ( v93 == 11 )
              {
                sub_182516((unsigned __int8 *)a1, v176, v183, SHIDWORD(v183), (int)v185[0], v91);
              }
              else
              {
                sub_181338(a1, v183, SHIDWORD(v183), 0, 1, 0);
                v96 = (*(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 188))(a1, v183, HIDWORD(v183));
                v97 = sub_1876DC(v174);
                (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 104))(a1, v96, v97);
              }
              goto LABEL_126;
            }
            if ( v93 == 11 )
            {
              if ( v94 == 8 )
                goto LABEL_124;
              sub_182516((unsigned __int8 *)a1, v81, v183, SHIDWORD(v183), (int)v185[0], v91);
              v92 = v185[0];
              if ( v185[0] )
                goto LABEL_124;
LABEL_164:
              v125 = sub_188832(v174, v185);
              v81 = v176;
              v82 = v125;
              v126 = v125 <= 0;
              v83 = v181;
              if ( v126 )
                goto LABEL_87;
              continue;
            }
            break;
          }
          v98 = v93 == 30;
          if ( v93 == 30 )
            v98 = v91 == 7;
          if ( v98 )
          {
            if ( (v94 | 2) == 7 || sub_17E580((int)&v183, a1 + 564) )
            {
              *v169 = 8;
              ((void (__fastcall *)(int, _DWORD, _DWORD, int))loc_1817A2)(a1, v183, HIDWORD(v183), 1);
              ((void (__fastcall *)(int, _DWORD, _DWORD, int))loc_181B30)(a1, v183, HIDWORD(v183), 1);
              v102 = sub_17D4F2((int)v181, v185[0], 7u, 0);
              sub_17DA96(v102, 8);
              sub_17D786(v181, v180, 32, 1);
              sub_17D786(v181, &v180[0].n128_u8[4], 16, 1);
              v103 = v180[0].n128_u16[2];
              v104 = v185[0];
              *v162 = v180[0].n128_u32[0];
              *v163 = v103;
              v105 = malloc(0x1Cu);
              v105[24] = 1;
              v106 = WORD2(v183);
              *((_DWORD *)v105 + 3) = 7;
              *((_DWORD *)v105 + 4) = v82;
              v107 = v183;
              *((_DWORD *)v105 + 5) = v104;
              *(_WORD *)v105 = v171;
              *((_DWORD *)v105 + 1) = v107;
              *((_WORD *)v105 + 4) = v106;
              EnterCriticalSection_0((pthread_mutex_t *)&unk_381C10);
              *(_DWORD *)sub_184892(v167) = v105;
              v108 = *v166;
              v109 = *v165;
              *(_BYTE *)(v108 + 4) = 1;
              v110 = *(_DWORD *)(v108 + 8);
              *v165 = v109 + 1;
              *v166 = v110;
              LeaveCriticalSection_0((pthread_mutex_t *)&unk_381C10);
              goto LABEL_163;
            }
LABEL_126:
            v95 = v185[0];
            if ( !v185[0] )
              goto LABEL_164;
          }
          else
          {
            v99 = v93 == 9;
            if ( v93 == 9 )
              v99 = v91 == 9;
            if ( v99 )
            {
              v111 = sub_17D4F2((int)v83, v185[0], 9u, 0);
              sub_17DA96(v111, 8);
              sub_17D786(v181, v180, 32, 1);
              sub_17D786(v181, v178, 32, 1);
              v112 = sub_17E348();
              v20 = v112;
              v113 = sub_221404(v112, HIDWORD(v112), 1000, 0);
              v114 = v180[0].n128_u32[0];
              v168 = v113;
              v115 = v113 - v180[0].n128_u32[0];
              if ( v113 < v180[0].n128_u32[0] )
                v115 = 0;
              v116 = v176 + 8 * *v164;
              if ( !*(_WORD *)(v116 + 1740) )
                goto LABEL_151;
              v117 = v115 >> 4 >= 0x4A;
              if ( v115 >> 4 <= 0x4A )
                v117 = v115 >= 3 * (unsigned int)*(unsigned __int16 *)(v116 + 1740);
              if ( !v117 )
              {
LABEL_151:
                v118 = v178[0];
                *(_WORD *)(v116 + 1740) = v115;
                v119 = (unsigned __int16)*v161;
                *(_DWORD *)(v116 + 1744) = v118 - ((v114 + v168) >> 1);
                if ( v119 == 0xFFFF || (int)v115 < v119 )
                  *v161 = v115;
                sub_1876E2(v174, (unsigned __int16)v115);
                v120 = *v164 - 4;
                if ( *v164 != 4 )
                  v120 = *v164 + 1;
                *v164 = v120;
              }
              if ( v185[0] )
                operator delete[](v185[0]);
              v173 = HIDWORD(v112);
              goto LABEL_163;
            }
            v100 = v93 == 6;
            if ( v93 == 6 )
              v100 = v91 == 5;
            if ( v100 )
            {
              v121 = v83;
              v122 = sub_17D4F2((int)v83, v185[0], 5u, 0);
              sub_17DA96(v122, 8);
              sub_17D786(v121, &v179, 32, 1);
              v123 = sub_17D4A8((int)v180);
              LOBYTE(v178[0]) = 9;
              sub_17D628(v123, v178, 8, 1);
              LODWORD(v178[0]) = v179.n128_u32[0];
              sub_17D628((int)v180, v178, 32, 1);
              v168 = sub_17E2E4();
              v124 = sub_17E348();
              v20 = v124;
              LODWORD(v178[0]) = v168;
              sub_17D628((int)v180, v178, 32, 1);
              sub_1825E8(a1, (unsigned __int8 *)v180[0].n128_u32[3], v180[0].n128_i32[0], 0, 6, 0, v183, 0, 0, v168, 0);
              v173 = HIDWORD(v124);
              if ( v185[0] )
                operator delete[](v185[0]);
              goto LABEL_162;
            }
            if ( *(unsigned __int8 *)v185[0] > 0x1Fu )
            {
              if ( v93 == 41 )
              {
                sub_17D55E(v160);
                sub_17D566(v160, (char *)v185[0] + 1, v91 - 1);
                v127 = v185[0];
                v128 = malloc(0x1Cu);
                v129 = WORD2(v183);
                v130 = v183;
                v128[5] = v127;
                *((_BYTE *)v128 + 24) = 1;
                v128[3] = v91;
                v128[4] = v82;
                *(_WORD *)v128 = v171;
                v128[1] = v130;
                *((_WORD *)v128 + 4) = v129;
                EnterCriticalSection_0((pthread_mutex_t *)&unk_381C10);
                *(_DWORD *)sub_184892(v167) = v128;
                v131 = *v166;
                v132 = *v165;
                *(_BYTE *)(v131 + 4) = 1;
                *v166 = *(_DWORD *)(v131 + 8);
                *v165 = v132 + 1;
                LeaveCriticalSection_0((pthread_mutex_t *)&unk_381C10);
                goto LABEL_164;
              }
              if ( v93 != 32 )
                goto LABEL_176;
              if ( dword_23DF1C != 4
                || !dword_239034
                && ((14392 - (unsigned __int16)word_239038) ^ (4 * (unsigned __int16)word_239038)) == 0x7627
                || byte_23903A )
              {
                *v169 = 3;
              }
            }
            else
            {
              if ( v93 == 10 )
              {
                ((void (__fastcall *)(int, _DWORD, _DWORD, int))loc_181B30)(a1, v183, HIDWORD(v183), 1);
                goto LABEL_126;
              }
              if ( v93 == 17 )
              {
                v101 = sub_17D4F2((int)v83, v185[0], v91, 0);
                sub_17DA96(v101, 8);
                sub_17D9C0(v181, v180, 8, 1);
                sub_17E75C((char *)(v176 + 2096), v180[0].n128_u8[0]);
                if ( v185[0] )
                  operator delete[](v185[0]);
                goto LABEL_163;
              }
LABEL_176:
              v133 = v93 == 15;
              if ( v93 == 15 )
                v133 = v91 == 57;
              if ( v133 )
              {
                sub_182C30(a1, v81, (int)v185[0]);
                goto LABEL_126;
              }
              v134 = v93 == 16;
              if ( v93 == 16 )
                v134 = v91 == 53;
              if ( v134 )
              {
                v139 = (int)v83;
                v140 = sub_18BA18(v83);
                sub_18BA58(v140);
                sub_18C9EC(v139, &v183);
                sub_18C9EC(v139, (char *)&v183 + 4);
                sub_18C9EC(v139, (void *)(a1 + 2420));
                sub_18CA7C(v139);
                v141 = (const void *)sub_18CB50(v139);
                v142 = (char *)v185[0];
                if ( !memcmp(v141, (char *)v185[0] + 1, 0x14u)
                  || (sub_18BA58(v181),
                      sub_18C9EC((int)v181, &v183),
                      sub_18C9EC((int)v181, (char *)&v183 + 4),
                      sub_18C9EC((int)v181, (void *)(a1 + 2440)),
                      sub_18CA7C((int)v181),
                      v143 = (const void *)sub_18CB50(v181),
                      v142 = (char *)v185[0],
                      !memcmp(v143, (char *)v185[0] + 1, 0x14u)) )
                {
                  v144 = *(_QWORD *)(v142 + 29);
                  v145 = *(_QWORD *)(v142 + 37);
                  v146 = *(_QWORD *)(v142 + 45);
                  v178[0] = *(_QWORD *)(v142 + 21);
                  v178[1] = v144;
                  v178[2] = v145;
                  v178[3] = v146;
                  sub_18483C(a1 + 2068, v178, v180);
                  v179 = veorq_s64(v180[0], *(int64x2_t *)((char *)v185[0] + 1));
                  sub_1828B4(a1, v176, &v179, 1);
                  v142 = (char *)v185[0];
                }
                if ( v142 )
                  operator delete[](v142);
                sub_18BA88(v181);
                goto LABEL_164;
              }
              v135 = v93 == 23;
              if ( v93 == 23 )
                v135 = v91 == 1;
              if ( !v135 )
              {
                v136 = v93 == 34;
                if ( v93 == 34 )
                  v136 = v91 == 13;
                if ( !v136 )
                {
                  if ( (unsigned int)v91 >= 3 && v93 == 12 || v93 >= 0x14 )
                  {
                    v137 = malloc(0x1Cu);
                    v137[24] = 1;
                    v138 = v183;
                    *((_WORD *)v137 + 4) = WORD2(v183);
                    *((_DWORD *)v137 + 3) = v91;
                    *((_DWORD *)v137 + 4) = v82;
                    *((_DWORD *)v137 + 5) = v92;
                    *(_WORD *)v137 = v171;
                    *((_DWORD *)v137 + 1) = v138;
                    sub_182DE8(a1, (int)v137);
                  }
                  goto LABEL_164;
                }
                if ( (v94 & 0xFFFFFFFE) != 4 && !*(_BYTE *)(a1 + 2460) )
                {
                  sub_1804E8(a1, v183, SHIDWORD(v183), 1, 0);
                  goto LABEL_126;
                }
                v147 = sub_17D4F2((int)v83, v185[0], 0xDu, 0);
                sub_17DA96(v147, 8);
                sub_17D786(v181, v178, 32, 1);
                sub_17D786(v181, (_BYTE *)v178 + 4, 16, 1);
                sub_17D786(v181, v177, 16, 1);
                v148 = WORD2(v178[0]);
                *v162 = v178[0];
                *v163 = v148;
                *v169 = 8;
                if ( v94 != 5 )
                {
                  if ( *(_BYTE *)(v176 + 2092) )
                    sub_1876C8(v174, v176 + 2076);
                  else
                    sub_1876C8(v174, 0);
                }
                v149 = v185[0];
                v150 = malloc(0x1Cu);
                v151 = v183;
                v150[24] = 1;
                v152 = WORD2(v183);
                *((_DWORD *)v150 + 3) = 13;
                *((_DWORD *)v150 + 4) = 104;
                *((_DWORD *)v150 + 5) = v149;
                *((_DWORD *)v150 + 1) = v151;
                *((_WORD *)v150 + 4) = v152;
                *(_WORD *)v150 = sub_1811B4(a1, v151, SHIDWORD(v151), 1);
                sub_182DE8(a1, (int)v150);
                v153 = sub_17D4C0((int)v180, 7);
                v179.n128_u8[0] = 30;
                sub_17D628(v153, &v179, 8, 1);
                v179.n128_u32[0] = v183;
                sub_17D628((int)v180, &v179, 32, 1);
                v179.n128_u16[0] = WORD2(v183);
                sub_17D628((int)v180, &v179, 16, 1);
                v154 = v183;
                v155 = v180[0].n128_u32[0];
                v156 = (unsigned __int8 *)v180[0].n128_u32[3];
                v157 = sub_17E2E4();
                sub_1825E8(a1, v156, v155, 0, 8, 0, v154, 0, 0, v157, 0);
                if ( v94 != 5 )
                {
                  ((void (__fastcall *)(int, _DWORD, _DWORD, int))loc_1817A2)(a1, v183, HIDWORD(v183), 1);
                  ((void (__fastcall *)(int, _DWORD, _DWORD, int))loc_181B30)(a1, v183, HIDWORD(v183), 1);
                }
LABEL_162:
                sub_17D542((int)v180);
LABEL_163:
                sub_17D542((int)v181);
                goto LABEL_164;
              }
            }
LABEL_124:
            v95 = v92;
          }
          operator delete[](v95);
          goto LABEL_164;
        }
        v75 = malloc(0x1Du);
        v75[28] = 38;
        *((_DWORD *)v75 + 4) = 8;
        *((_DWORD *)v75 + 5) = v75 + 28;
        v76 = v183;
        v75[24] = 0;
        v77 = WORD2(v183);
        *((_DWORD *)v75 + 1) = v76;
        *((_DWORD *)v75 + 3) = 1;
        *(_WORD *)v75 = v171;
        *((_WORD *)v75 + 4) = v77;
        EnterCriticalSection_0((pthread_mutex_t *)&unk_381C10);
        *(_DWORD *)sub_184892(v167) = v75;
        v78 = *v166;
        v79 = *v165;
        *(_BYTE *)(v78 + 4) = 1;
        *v166 = *(_DWORD *)(v78 + 8);
        *v165 = v79 + 1;
        LeaveCriticalSection_0((pthread_mutex_t *)&unk_381C10);
      }
      else
      {
        v173 = v21;
      }
LABEL_87:
      v21 = v173;
      v48 = v171 + 1;
    }
    while ( v171 + 1 < (unsigned int)*(unsigned __int16 *)(a1 + 8) );
  }
  return 1;
}


// ======================================================================

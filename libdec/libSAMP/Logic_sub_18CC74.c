// ADDR: 0x183004
// SYMBOL: sub_183004
unsigned int __fastcall sub_183004(int a1, unsigned __int16 a2, unsigned __int8 *a3, unsigned int a4, _DWORD *a5)
{
  unsigned __int16 v7; // r11
  int v9; // r0
  int v10; // r0
  int v11; // r5
  unsigned int v12; // r4
  int v13; // r0
  unsigned int v14; // r0
  unsigned int v15; // r5
  int v16; // r0
  signed int v17; // r8
  int v18; // r5
  int v19; // r0
  bool v20; // zf
  int v21; // r0
  int v22; // r5
  int v23; // r0
  bool v24; // zf
  int v25; // r1
  int v26; // r4
  int v27; // r11
  bool v28; // zf
  int v29; // r2
  int v30; // r2
  bool v31; // zf
  int v32; // r1
  int v33; // r2
  int v34; // r1
  bool v35; // zf
  unsigned int v36; // r5
  int v37; // r0
  int v38; // r6
  unsigned int result; // r0
  bool v40; // zf
  int v41; // r5
  int v42; // r8
  __int64 v43; // r0
  int v44; // r9
  int v45; // r6
  int v46; // r0
  bool v47; // zf
  int v48; // r0
  int v49; // r1
  int v50; // r2
  bool v51; // zf
  int v52; // r5
  int v53; // r0
  bool v54; // zf
  int v55; // r1
  int v56; // r4
  int v57; // r11
  bool v58; // zf
  int v59; // r2
  int v60; // r2
  bool v61; // zf
  int v62; // r1
  int v63; // r2
  int v64; // r1
  bool v65; // zf
  int v66; // r1
  int v67; // r4
  int v68; // r11
  bool v69; // zf
  int v70; // r2
  int v71; // r2
  bool v72; // zf
  int v73; // r1
  int v74; // r2
  int v75; // r1
  bool v76; // zf
  bool v77; // zf
  bool v78; // zf
  unsigned int v79; // r4
  int v80; // r0
  unsigned int v81; // r4
  int v82; // r0
  int v83; // r0
  unsigned int v84; // r0
  int v85; // r0
  unsigned int v86; // r5
  int v87; // r0
  unsigned __int8 v88; // r0
  unsigned int v89; // r5
  int v90; // r0
  _BYTE *v91; // r6
  __int16 v92; // r0
  int v93; // r1
  int v94; // r0
  int v95; // r1
  int v96; // r0
  int v97; // r4
  bool v98; // zf
  unsigned int i; // r4
  int v100; // r0
  unsigned int v101; // r4
  bool v102; // zf
  char *v103; // r4
  int v104; // r1
  __int16 v105; // r0
  int v106; // r2
  int v107; // r0
  unsigned int v108; // r4
  int v109; // r0
  int v110; // r6
  int v111; // r4
  int v112; // r5
  char *cp; // r0
  __int16 v114; // r6
  _BYTE *v115; // r6
  __int16 v116; // r0
  int v117; // r1
  int v118; // r0
  int v119; // r1
  _BYTE *v120; // r5
  __int16 v121; // r0
  int v122; // r1
  int v123; // [sp+20h] [bp-258h]
  unsigned __int8 v124[12]; // [sp+24h] [bp-254h] BYREF
  int v125; // [sp+30h] [bp-248h]
  int v126; // [sp+138h] [bp-140h] BYREF
  int v127[69]; // [sp+13Ch] [bp-13Ch] BYREF
  __int64 v128; // [sp+250h] [bp-28h] BYREF
  _DWORD v129[8]; // [sp+258h] [bp-20h] BYREF

  WORD2(v128) = a2;
  v7 = a2;
  v9 = *a5;
  LODWORD(v128) = a1;
  v10 = (*(int (__fastcall **)(_DWORD *, int, _DWORD))(v9 + 188))(a5, a1, HIDWORD(v128));
  if ( (*(int (__fastcall **)(_DWORD *, int))(*a5 + 116))(a5, v10) )
  {
    if ( a5[225] )
    {
      v11 = 8 * a4;
      v12 = 0;
      do
      {
        v13 = *(_DWORD *)(a5[224] + 4 * v12);
        (*(void (__fastcall **)(int, unsigned __int8 *, int, int, _DWORD))(*(_DWORD *)v13 + 32))(
          v13,
          a3,
          v11,
          a1,
          HIDWORD(v128));
        v14 = a5[225];
        ++v12;
      }
      while ( v12 < v14 );
      LOWORD(v127[0]) = 36;
      if ( v14 )
      {
        (*(void (__fastcall **)(_DWORD, int *, int, int, _DWORD))(**(_DWORD **)a5[224] + 28))(
          *(_DWORD *)a5[224],
          v127,
          16,
          a1,
          HIDWORD(v128));
        a1 = v128;
        if ( a5[225] >= 2u )
        {
          v15 = 1;
          do
          {
            v16 = *(_DWORD *)(a5[224] + 4 * v15);
            (*(void (__fastcall **)(int, int *, int, int, _DWORD))(*(_DWORD *)v16 + 28))(
              v16,
              v127,
              16,
              a1,
              HIDWORD(v128));
            ++v15;
            a1 = v128;
          }
          while ( v15 < a5[225] );
        }
        v7 = WORD2(v128);
      }
    }
    else
    {
      LOWORD(v127[0]) = 36;
    }
    return sub_18CCDC(&unk_382751, a5[507], v127, 2, a1, v7);
  }
  v17 = a4;
  if ( a4 > 2 || *a3 != 36 )
    goto LABEL_16;
  v18 = a5[227];
  v19 = a5[230];
  v20 = v18 == v19;
  if ( v18 != v19 )
    v20 = *(_BYTE *)(v18 + 284) == 0;
  if ( v20 )
    goto LABEL_16;
  v66 = *(_DWORD *)(v18 + 288);
  a5[227] = v66;
  if ( !v18 )
    goto LABEL_16;
  v67 = v18;
  v68 = 0;
  while ( 1 )
  {
    while ( *(_DWORD *)(v67 + 280) != 1 )
    {
LABEL_106:
      v69 = v66 == v19;
      if ( v66 != v19 )
        v69 = *(_BYTE *)(v66 + 284) == 0;
      if ( !v69 )
      {
        v70 = *(_DWORD *)(v66 + 288);
        v67 = v66;
        v20 = v66 == 0;
        a5[227] = v70;
        v66 = v70;
        if ( !v20 )
          continue;
      }
      goto LABEL_199;
    }
    if ( !sub_17E580(v67, (int)&v128) )
    {
      v66 = a5[227];
      v19 = a5[230];
      goto LABEL_106;
    }
    if ( v67 != v18 )
      break;
    v19 = a5[230];
    v73 = a5[229];
    v74 = a5[231];
    v67 = a5[227];
    *(_BYTE *)(v73 + 284) = 0;
    v75 = *(_DWORD *)(v73 + 288);
    v76 = v67 == v19;
    a5[231] = v74 + 1;
    a5[229] = v75;
    if ( v67 != v19 )
      v76 = *(_BYTE *)(v67 + 284) == 0;
    if ( v76 )
      goto LABEL_202;
    v66 = *(_DWORD *)(v67 + 288);
    v18 = v67;
LABEL_121:
    a5[227] = v66;
    v68 = 1;
    if ( !v67 )
      goto LABEL_199;
  }
  v71 = a5[227];
  v19 = a5[230];
  *(_WORD *)(v67 + 4) = -1;
  *(_DWORD *)v67 = -1;
  v72 = v71 == v19;
  if ( v71 != v19 )
    v72 = *(_BYTE *)(v71 + 284) == 0;
  if ( !v72 )
  {
    v66 = *(_DWORD *)(v71 + 288);
    v67 = v71;
    goto LABEL_121;
  }
  v68 = 1;
LABEL_199:
  if ( v18 )
    a5[227] = v18;
  if ( v68 << 31 )
  {
LABEL_202:
    v115 = malloc(0x1Du);
    v115[28] = 36;
    v115[24] = 0;
    *((_DWORD *)v115 + 3) = 1;
    *((_DWORD *)v115 + 4) = 8;
    v116 = WORD2(v128);
    *((_DWORD *)v115 + 5) = v115 + 28;
    v117 = v128;
    *((_WORD *)v115 + 4) = v116;
    *(_WORD *)v115 = -1;
    *((_DWORD *)v115 + 1) = v117;
    EnterCriticalSection_0((pthread_mutex_t *)&unk_381C10);
    *(_DWORD *)sub_184892(a5 + 618) = v115;
    v118 = a5[621];
    v119 = a5[623];
    *(_BYTE *)(v118 + 4) = 1;
    a5[621] = *(_DWORD *)(v118 + 8);
    a5[623] = v119 + 1;
    LeaveCriticalSection_0((pthread_mutex_t *)&unk_381C10);
  }
LABEL_16:
  v21 = *a3;
  if ( (unsigned int)v17 > 2 || v21 != 31 )
  {
    if ( (unsigned int)v17 <= 2 && v21 == 25 )
    {
      if ( a5[225] )
      {
        v36 = 0;
        do
        {
          v37 = *(_DWORD *)(a5[224] + 4 * v36);
          (*(void (__fastcall **)(int, unsigned __int8 *, int, _DWORD, _DWORD))(*(_DWORD *)v37 + 32))(
            v37,
            a3,
            8 * v17,
            v128,
            HIDWORD(v128));
          ++v36;
        }
        while ( v36 < a5[225] );
      }
      v38 = a5[227];
      result = a5[230];
      v40 = v38 == result;
      if ( v38 != result )
      {
        result = *(unsigned __int8 *)(v38 + 284);
        v40 = result == 0;
      }
      if ( v40 )
        return result;
      result = *(_DWORD *)(v38 + 288);
      a5[227] = result;
      if ( !v38 )
        return result;
LABEL_52:
      v41 = v38;
      v123 = v38;
      while ( 1 )
      {
        if ( sub_17E580(v41, (int)&v128) )
        {
          v42 = sub_181978((int)a5, v128, SHIDWORD(v128), 1, 1);
          if ( v42 || (v42 = sub_182A98((int)a5, v128, SHIDWORD(v128), 6)) != 0 )
          {
            v43 = sub_17E348();
            v44 = v43;
            *(_DWORD *)(v42 + 2108) = 4;
            *(_BYTE *)(v42 + 1736) = 1;
            v45 = HIDWORD(v43);
            v46 = sub_17D4A8((int)v127);
            v124[0] = 11;
            sub_17D628(v46, v124, 8, 1);
            if ( *(_BYTE *)(v41 + 278) )
              sub_17D566((unsigned __int8 *)v127, (const void *)(v41 + 22), *(unsigned __int8 *)(v41 + 278));
            sub_1825E8((int)a5, (unsigned __int8 *)v127[3], v127[0], 0, 8, 0, v128, 0, 0, v44, v45);
            sub_17D542((int)v127);
            v38 = v123;
          }
          if ( v41 == v38 )
          {
            v38 = a5[227];
            v48 = a5[229];
            v49 = a5[230];
            v50 = a5[231] + 1;
            v51 = v38 == v49;
            *(_BYTE *)(v48 + 284) = 0;
            result = *(_DWORD *)(v48 + 288);
            a5[231] = v50;
            a5[229] = result;
            if ( v38 != v49 )
            {
              result = *(unsigned __int8 *)(v38 + 284);
              v51 = result == 0;
            }
            if ( v51 )
              return result;
            result = *(_DWORD *)(v38 + 288);
            a5[227] = result;
            if ( !v38 )
              return result;
            goto LABEL_52;
          }
          *(_WORD *)(v41 + 4) = -1;
          *(_DWORD *)v41 = -1;
        }
        v41 = a5[227];
        result = a5[230];
        v47 = v41 == result;
        if ( v41 != result )
        {
          result = *(unsigned __int8 *)(v41 + 284);
          v47 = result == 0;
        }
        if ( !v47 )
        {
          result = *(_DWORD *)(v41 + 288);
          a5[227] = result;
          if ( v41 )
            continue;
        }
        a5[227] = v38;
        return result;
      }
    }
    if ( (unsigned int)v17 <= 2 && v21 == 29 )
    {
      v52 = a5[227];
      v53 = a5[230];
      v54 = v52 == v53;
      if ( v52 != v53 )
        v54 = *(_BYTE *)(v52 + 284) == 0;
      if ( v54 )
        goto LABEL_159;
      v55 = *(_DWORD *)(v52 + 288);
      a5[227] = v55;
      if ( !v52 )
        goto LABEL_159;
      v56 = v52;
      v57 = 0;
      while ( 1 )
      {
        while ( *(_DWORD *)(v56 + 280) != 1 )
        {
LABEL_84:
          v58 = v55 == v53;
          if ( v55 != v53 )
            v58 = *(_BYTE *)(v55 + 284) == 0;
          if ( !v58 )
          {
            v59 = *(_DWORD *)(v55 + 288);
            v56 = v55;
            v20 = v55 == 0;
            a5[227] = v59;
            v55 = v59;
            if ( !v20 )
              continue;
          }
          goto LABEL_204;
        }
        if ( !sub_17E580(v56, (int)&v128) )
        {
          v55 = a5[227];
          v53 = a5[230];
          goto LABEL_84;
        }
        if ( v56 == v52 )
        {
          v53 = a5[230];
          v62 = a5[229];
          v63 = a5[231];
          v56 = a5[227];
          *(_BYTE *)(v62 + 284) = 0;
          v64 = *(_DWORD *)(v62 + 288);
          v65 = v56 == v53;
          a5[231] = v63 + 1;
          a5[229] = v64;
          if ( v56 != v53 )
            v65 = *(_BYTE *)(v56 + 284) == 0;
          if ( v65 )
            goto LABEL_207;
          v55 = *(_DWORD *)(v56 + 288);
          v52 = v56;
        }
        else
        {
          v60 = a5[227];
          v53 = a5[230];
          *(_WORD *)(v56 + 4) = -1;
          *(_DWORD *)v56 = -1;
          v61 = v60 == v53;
          if ( v60 != v53 )
            v61 = *(_BYTE *)(v60 + 284) == 0;
          if ( v61 )
          {
            v57 = 1;
LABEL_204:
            if ( v52 )
              a5[227] = v52;
            if ( !(v57 << 31) )
              goto LABEL_159;
LABEL_207:
            v120 = malloc(0x1Du);
            v120[28] = 29;
            v120[24] = 0;
            *((_DWORD *)v120 + 5) = v120 + 28;
            v121 = WORD2(v128);
            *((_DWORD *)v120 + 3) = 1;
            *((_DWORD *)v120 + 4) = 8;
            v122 = v128;
            *((_WORD *)v120 + 4) = v121;
            *(_WORD *)v120 = -1;
            *((_DWORD *)v120 + 1) = v122;
            EnterCriticalSection_0((pthread_mutex_t *)&unk_381C10);
            *(_DWORD *)sub_184892(a5 + 618) = v120;
            v94 = a5[621];
            v95 = a5[623];
            *(_BYTE *)(v94 + 4) = 1;
LABEL_158:
            a5[621] = *(_DWORD *)(v94 + 8);
            a5[623] = v95 + 1;
            LeaveCriticalSection_0((pthread_mutex_t *)&unk_381C10);
            goto LABEL_159;
          }
          v55 = *(_DWORD *)(v60 + 288);
          v56 = v60;
        }
        a5[227] = v55;
        v57 = 1;
        if ( !v56 )
          goto LABEL_204;
      }
    }
    v77 = v17 == 3;
    if ( v17 == 3 )
      v77 = v21 == 24;
    if ( !v77 )
    {
      v78 = v17 == 3;
      if ( v17 == 3 )
        v78 = v21 == 26;
      if ( !v78 )
        goto LABEL_159;
      if ( a5[225] )
      {
        v79 = 0;
        do
        {
          v80 = *(_DWORD *)(a5[224] + 4 * v79);
          (*(void (__fastcall **)(int, unsigned __int8 *, int, _DWORD, _DWORD))(*(_DWORD *)v80 + 32))(
            v80,
            a3,
            24,
            v128,
            HIDWORD(v128));
          ++v79;
        }
        while ( v79 < a5[225] );
      }
      result = (unsigned int)&word_381C0C;
      word_381C0C = *(_WORD *)(a3 + 1);
      return result;
    }
    if ( a5[225] )
    {
      v81 = 0;
      do
      {
        v82 = *(_DWORD *)(a5[224] + 4 * v81);
        (*(void (__fastcall **)(int, unsigned __int8 *, int, _DWORD, _DWORD))(*(_DWORD *)v82 + 32))(
          v82,
          a3,
          24,
          v128,
          HIDWORD(v128));
        ++v81;
      }
      while ( v81 < a5[225] );
    }
    v83 = sub_181978((int)a5, v128, SHIDWORD(v128), 1, 1);
    if ( v83 )
    {
      if ( !*(_BYTE *)(v83 + 1736) )
      {
        v84 = *(_DWORD *)(v83 + 2108);
        if ( v84 <= 8 && ((1 << v84) & 0x106) != 0 )
        {
          v85 = a5[225];
          LOWORD(v127[0]) = 29;
          if ( v85 )
          {
            v86 = 0;
            do
            {
              v87 = *(_DWORD *)(a5[224] + 4 * v86);
              (*(void (__fastcall **)(int, int *, int, _DWORD, _DWORD))(*(_DWORD *)v87 + 28))(
                v87,
                v127,
                16,
                v128,
                HIDWORD(v128));
              ++v86;
            }
            while ( v86 < a5[225] );
          }
          sub_18CCDC(&unk_382751, a5[507], v127, 2, v128, WORD2(v128));
        }
        goto LABEL_159;
      }
    }
    else if ( !sub_182A98((int)a5, v128, SHIDWORD(v128), 6) )
    {
      v88 = 31;
      goto LABEL_148;
    }
    v88 = 25;
LABEL_148:
    LOWORD(v127[0]) = v88;
    if ( a5[225] )
    {
      v89 = 0;
      do
      {
        v90 = *(_DWORD *)(a5[224] + 4 * v89);
        (*(void (__fastcall **)(int, int *, int, _DWORD, _DWORD))(*(_DWORD *)v90 + 28))(
          v90,
          v127,
          16,
          v128,
          HIDWORD(v128));
        ++v89;
      }
      while ( v89 < a5[225] );
    }
    return sub_18CCDC(&unk_382751, a5[507], v127, 2, v128, WORD2(v128));
  }
  v22 = a5[227];
  v23 = a5[230];
  v24 = v22 == v23;
  if ( v22 != v23 )
    v24 = *(_BYTE *)(v22 + 284) == 0;
  if ( v24 )
    goto LABEL_159;
  v25 = *(_DWORD *)(v22 + 288);
  a5[227] = v25;
  if ( !v22 )
    goto LABEL_159;
  v26 = v22;
  v27 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( *(_DWORD *)(v26 + 280) != 1 )
      {
LABEL_26:
        v28 = v25 == v23;
        if ( v25 != v23 )
          v28 = *(_BYTE *)(v25 + 284) == 0;
        if ( v28 )
          goto LABEL_154;
        v29 = *(_DWORD *)(v25 + 288);
        v26 = v25;
        v20 = v25 == 0;
        a5[227] = v29;
        v25 = v29;
        if ( v20 )
          goto LABEL_154;
        continue;
      }
      break;
    }
    if ( !sub_17E580(v26, (int)&v128) )
    {
      v25 = a5[227];
      v23 = a5[230];
      goto LABEL_26;
    }
    if ( v26 == v22 )
    {
      v23 = a5[230];
      v32 = a5[229];
      v33 = a5[231];
      v26 = a5[227];
      *(_BYTE *)(v32 + 284) = 0;
      v34 = *(_DWORD *)(v32 + 288);
      v35 = v26 == v23;
      a5[231] = v33 + 1;
      a5[229] = v34;
      if ( v26 != v23 )
        v35 = *(_BYTE *)(v26 + 284) == 0;
      if ( v35 )
        goto LABEL_157;
      v25 = *(_DWORD *)(v26 + 288);
      v22 = v26;
      goto LABEL_41;
    }
    v30 = a5[227];
    v23 = a5[230];
    *(_WORD *)(v26 + 4) = -1;
    *(_DWORD *)v26 = -1;
    v31 = v30 == v23;
    if ( v30 != v23 )
      v31 = *(_BYTE *)(v30 + 284) == 0;
    if ( !v31 )
    {
      v25 = *(_DWORD *)(v30 + 288);
      v26 = v30;
LABEL_41:
      a5[227] = v25;
      v27 = 1;
      if ( !v26 )
        goto LABEL_154;
      continue;
    }
    break;
  }
  v27 = 1;
LABEL_154:
  if ( v22 )
    a5[227] = v22;
  if ( v27 << 31 )
  {
LABEL_157:
    v91 = malloc(0x1Du);
    v91[28] = 31;
    v91[24] = 0;
    *((_DWORD *)v91 + 3) = 1;
    *((_DWORD *)v91 + 4) = 8;
    v92 = WORD2(v128);
    *((_DWORD *)v91 + 5) = v91 + 28;
    v93 = v128;
    *((_WORD *)v91 + 4) = v92;
    *(_WORD *)v91 = -1;
    *((_DWORD *)v91 + 1) = v93;
    EnterCriticalSection_0((pthread_mutex_t *)&unk_381C10);
    *(_DWORD *)sub_184892(a5 + 618) = v91;
    v94 = a5[621];
    v95 = a5[623];
    *(_BYTE *)(v94 + 4) = 1;
    goto LABEL_158;
  }
LABEL_159:
  v96 = sub_181978((int)a5, v128, SHIDWORD(v128), 1, 1);
  if ( !v96 )
  {
    result = a5[225];
    if ( result )
    {
      for ( i = 0; i < result; ++i )
      {
        v100 = *(_DWORD *)(a5[224] + 4 * i);
        (*(void (__fastcall **)(int, unsigned __int8 *, int, _DWORD, _DWORD))(*(_DWORD *)v100 + 32))(
          v100,
          a3,
          8 * v17,
          v128,
          HIDWORD(v128));
        result = a5[225];
      }
    }
    if ( v17 > 512 )
      return result;
    result = *a3;
    if ( result == 8 )
    {
      if ( v17 != 5 )
        return result;
      v101 = sub_182A56((int)a5);
      result = (*(int (__fastcall **)(_DWORD *))(*a5 + 24))(a5);
      if ( v101 >= result )
        return result;
    }
    else
    {
      v102 = v17 == 5;
      if ( v17 == 5 )
        v102 = result == 7;
      if ( !v102 )
      {
        if ( ((unsigned int)(v17 - 5) >> 4 > 0x18 || result != 39)
          && ((unsigned int)(v17 - 2) >> 4 > 0x18 || result != 55) )
        {
          return result;
        }
        v103 = (char *)malloc(v17 + 28);
        v103[24] = 0;
        *((_DWORD *)v103 + 5) = v103 + 28;
        *((_DWORD *)v103 + 3) = v17;
        j_memcpy(v103 + 28, a3, v17);
        v104 = v128;
        v105 = WORD2(v128);
        v106 = HIDWORD(v128);
        *((_DWORD *)v103 + 4) = 8 * v17;
        *((_DWORD *)v103 + 1) = v104;
        *((_WORD *)v103 + 4) = v105;
LABEL_197:
        *(_WORD *)v103 = sub_1811B4((int)a5, v104, v106, 1);
        return sub_182DE8((int)a5, (int)v103);
      }
    }
    v107 = sub_17D4F2((int)v127, a3, v17, 0);
    sub_17DA96(v107, 8);
    sub_17D786(v127, &v126, 32, 1);
    sub_17D4A8((int)v124);
    LOBYTE(v129[0]) = 39;
    sub_17D628((int)v124, v129, 8, 1);
    v129[0] = v126;
    sub_17D628((int)v124, v129, 32, 1);
    sub_18CB76(a5 + 212);
    sub_17D566(v124, (const void *)a5[75], (a5[72] + 7) >> 3);
    sub_18CB7A(a5 + 212);
    if ( a5[225] )
    {
      v108 = 0;
      do
      {
        v109 = *(_DWORD *)(a5[224] + 4 * v108);
        (*(void (__fastcall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)v109 + 28))(
          v109,
          v125,
          (*(_DWORD *)v124 + 7) >> 3,
          v128,
          HIDWORD(v128));
        ++v108;
      }
      while ( v108 < a5[225] );
    }
    v110 = *(_DWORD *)v124;
    v111 = v125;
    v112 = a5[507];
    cp = (char *)(*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD))(*a5 + 188))(a5, v128, HIDWORD(v128));
    sub_18CD80((int)&unk_382751, v112, v111, (v110 + 7) >> 3, cp, WORD2(v128));
    sub_17D542((int)v124);
    return sub_17D542((int)v127);
  }
  v97 = v96;
  v98 = (v17 & 0x80000007) == 0;
  if ( (v17 & 0x80000007) == 0 )
    v98 = *(_DWORD *)(v96 + 2108) == 7;
  if ( v98 )
    sub_1876C8(v96 + 24, v96 + 2076);
  result = sub_187A22(v97 + 24, a3, v17, v128, HIDWORD(v128), a5 + 224, a5[504]);
  if ( result )
    return result;
  result = *a3;
  if ( v17 <= 3 && (result & 0xFD) == 0x18 )
    return result;
  if ( v17 <= 2 && (result & 0xFB) == 0x19 )
    return result;
  if ( result - 7 >= 2 )
  {
    if ( (unsigned int)v17 >= 5 && result == 39 || v17 < 400 && result == 55 )
      return result;
LABEL_196:
    v103 = (char *)malloc(0x1Du);
    v106 = HIDWORD(v128);
    v104 = v128;
    v103[28] = 38;
    v103[24] = 0;
    v114 = WORD2(v128);
    *((_DWORD *)v103 + 3) = 1;
    *((_DWORD *)v103 + 4) = 8;
    *((_DWORD *)v103 + 5) = v103 + 28;
    *((_DWORD *)v103 + 1) = v104;
    *((_WORD *)v103 + 4) = v114;
    goto LABEL_197;
  }
  if ( (unsigned int)v17 <= 4 )
    goto LABEL_196;
  return result;
}


// ======================================================================

// ADDR: 0xffbb4
// SYMBOL: sub_FFBB4
int __fastcall sub_FFBB4(__int64 *a1)
{
  __int64 v2; // r0
  _BYTE *v3; // r2
  int v4; // r1
  __int64 v5; // r0
  int v6; // r5
  __int64 v7; // r0
  __int64 v8; // kr00_8
  int v10; // r0
  int v11; // r0
  int v12; // r6
  int v13; // [sp+0h] [bp-18h] BYREF

  v2 = *a1;
  if ( (_DWORD)v2 == HIDWORD(v2) || *(_BYTE *)v2 != 83 )
    return 0;
  v3 = (_BYTE *)(v2 + 1);
  *(_DWORD *)a1 = v2 + 1;
  if ( HIDWORD(v2) == (_DWORD)v2 + 1 )
    goto LABEL_8;
  v4 = (unsigned __int8)*v3;
  if ( (unsigned int)(v4 - 123) < 0xFFFFFFE6 )
  {
    if ( *v3 == 95 )
    {
      *(_DWORD *)a1 = v2 + 2;
      v5 = *(__int64 *)((char *)a1 + 148);
      if ( (_DWORD)v5 != HIDWORD(v5) )
        return *(_DWORD *)v5;
      return 0;
    }
LABEL_8:
    v6 = 0;
    v13 = 0;
    if ( sub_FFA38((unsigned __int8 **)a1, (unsigned int *)&v13) )
      return v6;
    v7 = *a1;
    if ( (_DWORD)v7 != HIDWORD(v7) && *(_BYTE *)v7 == 95 )
    {
      *(_DWORD *)a1 = v7 + 1;
      v8 = *(__int64 *)((char *)a1 + 148);
      if ( v13 + 1 < (unsigned int)((HIDWORD(v8) - (int)v8) >> 2) )
        return *(_DWORD *)(v8 + 4 * (v13 + 1));
    }
    return 0;
  }
  v6 = 0;
  switch ( *v3 )
  {
    case 'a':
      *(_DWORD *)a1 = v2 + 2;
      v10 = 0;
      goto LABEL_24;
    case 'b':
      *(_DWORD *)a1 = v2 + 2;
      v10 = 1;
      goto LABEL_24;
    case 'c':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
      return v6;
    case 'd':
      *(_DWORD *)a1 = v2 + 2;
      v10 = 5;
      goto LABEL_24;
    case 'i':
      *(_DWORD *)a1 = v2 + 2;
      v10 = 3;
      goto LABEL_24;
    default:
      if ( v4 == 111 )
      {
        *(_DWORD *)a1 = v2 + 2;
        v10 = 4;
      }
      else
      {
        if ( v4 != 115 )
          return v6;
        *(_DWORD *)a1 = v2 + 2;
        v10 = 2;
      }
LABEL_24:
      v13 = v10;
      v6 = sub_105530(a1, &v13);
      v11 = sub_1002A4(a1, v6);
      v13 = v11;
      if ( v11 != v6 )
      {
        v12 = v11;
        sub_FF894((int)a1 + 148, &v13);
        v6 = v12;
      }
      break;
  }
  return v6;
}


// ======================================================================
// ADDR: 0xffcd8
// SYMBOL: sub_FFCD8
_DWORD *__fastcall sub_FFCD8(int a1, int a2)
{
  __int64 v4; // r0
  char *v5; // r8
  __int64 v6; // r0
  char *v7; // r0
  __int64 v8; // kr00_8
  __int64 v9; // r0
  _DWORD *v10; // r9
  __int64 v11; // r0
  int v12; // r2
  _BYTE *v13; // r2
  int v14; // r0
  int v15; // r2
  int v16; // r0
  unsigned int v17; // r6
  int *v18; // r10
  _DWORD *v19; // r0
  int *v20; // r3
  int v21; // r1
  int v22; // r2
  int v23; // r6
  int v24; // r2
  int *v25; // r3
  int v26; // r6
  int v27; // t1
  _DWORD *result; // r0
  int v29; // r2
  int v30; // [sp+4h] [bp-6Ch]
  int v31; // [sp+8h] [bp-68h]
  int v32; // [sp+Ch] [bp-64h]
  int v33; // [sp+10h] [bp-60h]
  _DWORD *v34; // [sp+18h] [bp-58h] BYREF
  _DWORD *v35; // [sp+1Ch] [bp-54h] BYREF
  char *v36; // [sp+20h] [bp-50h] BYREF
  __int64 v37; // [sp+24h] [bp-4Ch]
  _BYTE v38[16]; // [sp+2Ch] [bp-44h] BYREF
  _DWORD v39[13]; // [sp+3Ch] [bp-34h] BYREF

  v4 = *(_QWORD *)a1;
  if ( (_DWORD)v4 != HIDWORD(v4) && *(_BYTE *)v4 == 73 )
  {
    *(_DWORD *)a1 = v4 + 1;
    if ( a2 )
    {
      *(_DWORD *)(a1 + 336) = *(_DWORD *)(a1 + 332);
      v36 = (char *)(a1 + 288);
      sub_1004F2(a1 + 332, &v36);
      *(_DWORD *)(a1 + 292) = *(_DWORD *)(a1 + 288);
    }
    v5 = (char *)(a1 + 344);
    v30 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
    v32 = a1 + 408;
    v33 = a1 + 360;
    v31 = a2;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)a1;
        if ( (_DWORD)v6 != HIDWORD(v6) && *(_BYTE *)v6 == 69 )
        {
          *(_DWORD *)a1 = v6 + 1;
          sub_FF908((int)&v36, a1, v30);
          result = sub_FFA98(v32, 16);
          result[1] = 16843043;
          *result = &off_113C78;
          v29 = v37;
          result[2] = v36;
          result[3] = v29;
          return result;
        }
        if ( a2 )
          break;
        v36 = (char *)sub_FF754(a1);
        if ( !v36 )
          return 0;
        sub_FF894(a1 + 8, (int *)&v36);
      }
      HIDWORD(v37) = v39;
      v7 = *(char **)(a1 + 332);
      memset(v38, 0, sizeof(v38));
      v36 = v38;
      LODWORD(v37) = v38;
      if ( v7 == v5 )
      {
        sub_1006C6((void *)(a1 + 344), *(_DWORD *)(a1 + 336), v38);
        v9 = *(_QWORD *)(a1 + 332);
        *(_DWORD *)(a1 + 336) = v9;
        LODWORD(v37) = &v36[HIDWORD(v9) - v9];
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 336);
        *(_DWORD *)(a1 + 332) = v5;
        *(_DWORD *)(a1 + 336) = v5;
        *(_DWORD *)(a1 + 340) = v33;
        v36 = v7;
        v37 = v8;
      }
      v10 = sub_FF754(a1);
      v35 = v10;
      LODWORD(v11) = *(_DWORD *)(a1 + 332);
      if ( v36 == v38 )
      {
        v13 = v38;
        if ( (char *)v11 != v5 )
        {
          free((void *)v11);
          v13 = v36;
          *(_DWORD *)(a1 + 332) = v5;
          *(_DWORD *)(a1 + 336) = v5;
          *(_DWORD *)(a1 + 340) = v33;
        }
        sub_1006C6(v13, v37, (void *)(a1 + 344));
        v14 = *(_DWORD *)(a1 + 332);
        v15 = v37 - (_DWORD)v36;
        LODWORD(v37) = v36;
        *(_DWORD *)(a1 + 336) = v14 + v15;
      }
      else
      {
        *(_DWORD *)(a1 + 332) = v36;
        if ( (char *)v11 == v5 )
        {
          *(_QWORD *)(a1 + 336) = v37;
          HIDWORD(v37) = v39;
          v36 = v38;
          LODWORD(v37) = v38;
        }
        else
        {
          v12 = HIDWORD(v37);
          *(_DWORD *)(a1 + 336) = v37;
          HIDWORD(v11) = *(_DWORD *)(a1 + 340);
          *(_DWORD *)(a1 + 340) = v12;
          v36 = (char *)v11;
          v37 = v11;
        }
      }
      if ( !v10 )
        break;
      sub_FF894(a1 + 8, (int *)&v35);
      v16 = *((unsigned __int8 *)v10 + 4);
      v34 = v10;
      if ( v16 == 33 )
      {
        v17 = v10[3];
        v18 = (int *)v10[2];
        v19 = sub_FFA98(v32, 16);
        *((_QWORD *)v19 + 1) = __PAIR64__(v17, (unsigned int)v18);
        *((_BYTE *)v19 + 4) = 32;
        v20 = v18;
        *v19 = &off_113C40;
        *((_BYTE *)v19 + 7) = 2;
        *(_WORD *)((char *)v19 + 5) = 514;
        v21 = 4 * v17;
        v22 = 4 * v17;
        while ( v22 )
        {
          v23 = *v20++;
          v22 -= 4;
          if ( *(_BYTE *)(v23 + 6) != 1 )
            goto LABEL_28;
        }
        *((_BYTE *)v19 + 6) = 1;
LABEL_28:
        v24 = v21;
        v25 = v18;
        do
        {
          if ( !v24 )
          {
            *((_BYTE *)v19 + 7) = 1;
            break;
          }
          v26 = *v25++;
          v24 -= 4;
        }
        while ( *(_BYTE *)(v26 + 7) == 1 );
        while ( v21 )
        {
          v27 = *v18++;
          v21 -= 4;
          if ( *(_BYTE *)(v27 + 5) != 1 )
            goto LABEL_37;
        }
        *((_BYTE *)v19 + 5) = 1;
LABEL_37:
        a2 = v31;
        v34 = v19;
      }
      sub_1035B8(*(_DWORD *)(*(_DWORD *)(a1 + 336) - 4), &v34);
      sub_FE11A((void **)&v36);
    }
    sub_FE11A((void **)&v36);
  }
  return 0;
}


// ======================================================================
// ADDR: 0xfff64
// SYMBOL: sub_FFF64
_DWORD *__fastcall sub_FFF64(int a1, int *a2, int *a3)
{
  _DWORD *result; // r0
  int v6; // r2
  int v7; // r1

  result = sub_FFA98(a1 + 408, 16);
  result[1] = 16843045;
  v6 = *a2;
  *result = &off_113CB0;
  v7 = *a3;
  result[2] = v6;
  result[3] = v7;
  return result;
}


// ======================================================================
// ADDR: 0xfffd8
// SYMBOL: sub_FFFD8
_DWORD *__fastcall sub_FFFD8(int a1, const char *a2)
{
  _DWORD *v3; // r5
  size_t v4; // r0
  _DWORD *result; // r0

  v3 = sub_FFA98(a1 + 408, 16);
  v4 = strlen(a2);
  v3[2] = a2;
  v3[3] = &a2[v4];
  result = v3;
  *v3 = &off_113118;
  v3[1] = 16843015;
  return result;
}


// ======================================================================
// ADDR: 0x100070
// SYMBOL: sub_100070
int __fastcall sub_100070(__int64 *a1)
{
  __int64 v2; // r0
  _BYTE *v3; // r2
  _DWORD *v4; // r5
  unsigned int v5; // r5
  int v6; // r2
  unsigned int v7; // r6
  __int64 v8; // r0
  char *v9; // r9
  signed int v10; // r8
  char *v11; // r6
  __int64 v12; // kr08_8
  __int64 *v13; // r2
  __int64 v14; // kr10_8
  unsigned int v15; // r0
  char *v17; // r0
  int v18; // [sp+0h] [bp-28h] BYREF
  int v19; // [sp+4h] [bp-24h] BYREF
  int v20; // [sp+8h] [bp-20h] BYREF

  HIDWORD(v2) = *((_DWORD *)a1 + 1);
  v3 = *(_BYTE **)a1;
  if ( *(_DWORD *)a1 == HIDWORD(v2) )
    return 0;
  v4 = 0;
  if ( *v3 != 84 )
    return (int)v4;
  LODWORD(v2) = v3 + 1;
  *(_DWORD *)a1 = v3 + 1;
  v20 = 0;
  if ( v3 + 1 == (_BYTE *)HIDWORD(v2) )
  {
    v5 = 0;
    v19 = 0;
  }
  else
  {
    v5 = 0;
    if ( *(_BYTE *)v2 == 76 )
    {
      *(_DWORD *)a1 = v3 + 2;
      if ( sub_10049E(a1, &v20) )
        return 0;
      v2 = *a1;
      if ( (_DWORD)v2 == HIDWORD(v2) || *(_BYTE *)v2 != 95 )
        return 0;
      v6 = v20;
      LODWORD(v2) = v2 + 1;
      *(_DWORD *)a1 = v2;
      v5 = v6 + 1;
    }
    v19 = 0;
    if ( (_DWORD)v2 != HIDWORD(v2) && *(_BYTE *)v2 == 95 )
    {
      v7 = 0;
      goto LABEL_16;
    }
  }
  if ( sub_10049E(a1, &v19) )
    return 0;
  v7 = v19 + 1;
  v2 = *a1;
  ++v19;
  if ( (_DWORD)v2 == HIDWORD(v2) || *(_BYTE *)v2 != 95 )
    return 0;
LABEL_16:
  *(_DWORD *)a1 = v2 + 1;
  if ( !*((_BYTE *)a1 + 389) || v5 )
  {
    v12 = *(__int64 *)((char *)a1 + 332);
    if ( v5 < (HIDWORD(v12) - (int)v12) >> 2 )
    {
      v13 = *(__int64 **)(v12 + 4 * v5);
      if ( v13 )
      {
        v14 = *v13;
        if ( v7 < (HIDWORD(v14) - (int)v14) >> 2 )
          return *(_DWORD *)(v14 + 4 * v7);
      }
    }
    if ( *((_DWORD *)a1 + 98) == v5 )
    {
      v15 = (HIDWORD(v12) - (int)v12) >> 2;
      if ( v5 <= v15 )
      {
        if ( v5 == v15 )
        {
          v18 = 0;
          sub_1004F2((char *)a1 + 332, &v18);
        }
        return sub_100568(a1, "auto");
      }
    }
    return 0;
  }
  v4 = sub_FFA98((int)(a1 + 51), 20);
  *((_BYTE *)v4 + 16) = 0;
  v4[2] = v7;
  v4[3] = 0;
  *v4 = &off_113188;
  v4[1] = 33686052;
  v8 = *(__int64 *)((char *)a1 + 364);
  if ( (_DWORD)v8 == HIDWORD(v8) )
  {
    v9 = (char *)*((_DWORD *)a1 + 90);
    v10 = v8 - (_DWORD)v9;
    if ( v9 == (char *)a1 + 372 )
    {
      v17 = (char *)malloc(2 * v10);
      if ( !v17 )
        goto LABEL_39;
      v11 = v17;
      if ( v10 )
        j_memmove(v17, v9, v10);
      *((_DWORD *)a1 + 90) = v11;
    }
    else
    {
      v11 = (char *)realloc(*((void **)a1 + 90), 2 * v10);
      *((_DWORD *)a1 + 90) = v11;
      if ( !v11 )
LABEL_39:
        std::terminate();
    }
    *((_DWORD *)a1 + 92) = &v11[4 * (v10 >> 1)];
    LODWORD(v8) = &v11[4 * (v10 >> 2)];
  }
  *((_DWORD *)a1 + 91) = v8 + 4;
  *(_DWORD *)v8 = v4;
  return (int)v4;
}


// ======================================================================
// ADDR: 0x100224
// SYMBOL: sub_100224
int __fastcall sub_100224(__int64 *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  __int64 v6; // r0
  _DWORD v8[4]; // [sp+0h] [bp-10h] BYREF

  v8[0] = a3;
  v8[1] = a4;
  v5 = *a1;
  if ( (_DWORD)v5 == HIDWORD(v5) )
    return 0;
  if ( *(_BYTE *)v5 != 68 )
    return 0;
  *(_DWORD *)a1 = v5 + 1;
  if ( (_DWORD)v5 + 1 == HIDWORD(v5) )
    return 0;
  if ( (*(unsigned __int8 *)(v5 + 1) | 0x20) != 0x74 )
    return 0;
  *(_DWORD *)a1 = v5 + 2;
  v8[0] = sub_1006E0(a1);
  if ( !v8[0] )
    return 0;
  v6 = *a1;
  if ( (_DWORD)v6 == HIDWORD(v6) || *(_BYTE *)v6 != 69 )
    return 0;
  *(_DWORD *)a1 = v6 + 1;
  return sub_101EF4(a1, "decltype(", v8);
}


// ======================================================================
// ADDR: 0x100568
// SYMBOL: sub_100568
_DWORD *__fastcall sub_100568(int a1, const char *a2)
{
  _DWORD *v3; // r5
  size_t v4; // r0
  _DWORD *result; // r0

  v3 = sub_FFA98(a1 + 408, 16);
  v4 = strlen(a2);
  v3[2] = a2;
  v3[3] = &a2[v4];
  result = v3;
  *v3 = &off_113118;
  v3[1] = 16843015;
  return result;
}


// ======================================================================
// ADDR: 0x1006e0
// SYMBOL: sub_1006E0
int __fastcall sub_1006E0(int a1)
{
  __int64 v2; // r0
  unsigned __int8 *v3; // r12
  _DWORD *v4; // r5
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r1
  char *v9; // r1
  int v10; // r2
  int v11; // r4
  int v12; // r2
  int v13; // r0
  int v14; // r4
  int v15; // r0
  int v16; // r6
  int v17; // r1
  int v18; // r1
  int v19; // r6
  int v20; // r0
  int v21; // r4
  int v22; // r0
  int v23; // r8
  const char *v24; // r1
  char *v25; // r2
  int v26; // r0
  int v27; // r4
  int v28; // r0
  int v29; // r6
  int v30; // r0
  int v31; // r9
  int v32; // r0
  int v33; // r1
  int v34; // r1
  int v35; // r4
  int v36; // r1
  _DWORD *v37; // r0
  unsigned __int8 *v38; // r3
  int v39; // r4
  bool v40; // zf
  int v41; // r4
  int v42; // r0
  int v43; // r8
  char *v44; // r5
  int v45; // r1
  int v46; // r0
  int v47; // r4
  int v48; // r0
  int v49; // r6
  const char *v50; // r1
  char *v51; // r2
  int v52; // r2
  int v53; // r0
  int v54; // r0
  int v55; // r1
  int v56; // r1
  int v57; // r11
  __int64 v58; // r0
  _BOOL4 v59; // r9
  int v61; // r3
  int v62; // r2
  int v63; // r8
  char *v64; // r2
  char *v65; // r1
  int v66; // r0
  int v67; // r8
  int v68; // r9
  __int64 v69; // r0
  int v70; // r0
  const char *v71; // r1
  char v72; // r4
  int v73; // r8
  _BYTE *v74; // r0
  _BYTE *v75; // r1
  int v76; // r3
  int v77; // r2
  _BYTE *v78; // r1
  int v79; // r9
  int v80; // r0
  int v81; // r8
  int v82; // r9
  __int64 v83; // r0
  int v84; // r0
  int v85; // r4
  _DWORD *v86; // r0
  int v87; // r1
  int *v88; // r2
  int v89; // r4
  const char *v90; // r2
  char *v91; // r2
  int v92; // r0
  int v93; // r0
  int v94; // r4
  int v95; // r4
  __int64 v96; // r0
  int *v97; // r0
  _DWORD *v98; // r0
  _DWORD *v99; // r0
  int v100; // r3
  int v101; // r2
  int v102; // r8
  int v103; // r0
  int v104; // r0
  const char *v105; // r2
  int v106; // r0
  int v107; // r4
  int v108; // r0
  int v109; // r6
  int v110; // r0
  int v111; // r0
  int v112; // r0
  int v113; // r10
  int v114; // r6
  __int64 v115; // r0
  _DWORD *v116; // r0
  int v117; // r2
  int *v118; // r1
  int v119; // r2
  char *v120; // r10
  __int64 v121; // r0
  _DWORD *v122; // r0
  int v123; // r0
  int v124; // r6
  bool v125; // zf
  int v126; // r0
  char *v127; // r11
  int v128; // r8
  _DWORD *v129; // r0
  int v130; // [sp+14h] [bp-4Ch]
  char v131; // [sp+18h] [bp-48h]
  int v132; // [sp+28h] [bp-38h]
  char v133; // [sp+2Fh] [bp-31h] BYREF
  _DWORD *v134; // [sp+30h] [bp-30h] BYREF
  int v135; // [sp+34h] [bp-2Ch]
  _DWORD *v136; // [sp+38h] [bp-28h] BYREF
  int v137; // [sp+3Ch] [bp-24h] BYREF

  LOBYTE(v2) = sub_FE18C((__int64 *)a1, (int)"gs", (int)"");
  HIDWORD(v2) = *(_DWORD *)(a1 + 4);
  v3 = *(unsigned __int8 **)a1;
  v133 = v2;
  if ( (unsigned int)(HIDWORD(v2) - (_DWORD)v3) < 2 )
    return 0;
  v132 = a1;
  switch ( *v3 )
  {
    case 'L':
      return sub_101F48(a1, _stack_chk_guard);
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '[':
    case '\\':
    case ']':
    case '^':
    case '_':
    case '`':
    case 'b':
    case 'h':
    case 'j':
    case 'k':
      goto LABEL_9;
    case 'T':
      return sub_100070((__int64 *)a1);
    case 'a':
      v32 = v3[1];
      switch ( v32 )
      {
        case 'N':
          *(_DWORD *)a1 = v3 + 2;
          return sub_102614(a1, "&=", "");
        case 'S':
          *(_DWORD *)a1 = v3 + 2;
          return sub_102614(a1, "=", "");
        case 'z':
          *(_DWORD *)a1 = v3 + 2;
          v98 = (_DWORD *)sub_1006E0(a1);
          break;
        case 'd':
          *(_DWORD *)a1 = v3 + 2;
          return sub_102664(a1, "&", "");
        case 'n':
          *(_DWORD *)a1 = v3 + 2;
          return sub_102614(a1, "&", "");
        case 't':
          *(_DWORD *)a1 = v3 + 2;
          v98 = (_DWORD *)sub_FE7F0((unsigned __int8 **)a1);
          break;
        case 'a':
          *(_DWORD *)a1 = v3 + 2;
          return sub_102614(a1, "&&", "");
        default:
          return 0;
      }
      v134 = v98;
      if ( !v98 )
        return 0;
      return sub_101EF4(a1, "alignof (", &v134);
    case 'c':
      v18 = v3[1];
      if ( v18 != 118 )
      {
        v19 = a1;
        switch ( v18 )
        {
          case 'l':
            *(_DWORD *)a1 = v3 + 2;
            v66 = sub_1006E0(a1);
            if ( !v66 )
              return 0;
            v67 = v66;
            v68 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
            while ( 1 )
            {
              v69 = *(_QWORD *)a1;
              if ( (_DWORD)v69 != HIDWORD(v69) && *(_BYTE *)v69 == 69 )
                break;
              v134 = (_DWORD *)sub_1006E0(a1);
              if ( !v134 )
                return 0;
              sub_FF894(a1 + 8, (int *)&v134);
            }
            *(_DWORD *)a1 = v69 + 1;
            sub_FF908((int)&v134, a1, v68);
            v4 = sub_FFA98(a1 + 408, 20);
            v4[1] = 16843063;
            v4[2] = v67;
            v97 = &`vtable for'`anonymous namespace'::itanium_demangle::CallExpr;
            goto LABEL_303;
          case 'm':
            *(_DWORD *)a1 = v3 + 2;
            return sub_102614(a1, ",", "");
          case 'o':
            *(_DWORD *)a1 = v3 + 2;
            v65 = "~";
LABEL_252:
            v91 = v65 + 1;
            v92 = v19;
            return sub_102664(v92, v65, v91);
        }
        if ( v18 != 99 )
          return 0;
        *(_DWORD *)a1 = v3 + 2;
        v20 = sub_FE7F0((unsigned __int8 **)a1);
        if ( !v20 )
          return 0;
        v21 = v20;
        v22 = sub_1006E0(a1);
        if ( !v22 )
          return 0;
        v23 = v22;
        v4 = sub_FFA98(a1 + 408, 24);
        v24 = "const_cast";
        v25 = "";
LABEL_250:
        *v4 = &off_113620;
        v4[1] = 16843061;
        v4[2] = v24;
        v4[3] = v25;
        v4[4] = v21;
        v4[5] = v23;
        return (int)v4;
      }
      v4 = 0;
      if ( !sub_FE18C((__int64 *)v132, (int)"cv", (int)"") )
        return (int)v4;
      v72 = *(_BYTE *)(v132 + 388);
      *(_BYTE *)(v132 + 388) = 0;
      v73 = sub_FE7F0((unsigned __int8 **)v132);
      *(_BYTE *)(v132 + 388) = v72;
      if ( !v73 )
        return 0;
      v74 = *(_BYTE **)(v132 + 4);
      v75 = *(_BYTE **)v132;
      if ( *(_BYTE **)v132 == v74 || *v75 != 95 )
      {
        v136 = (_DWORD *)sub_1006E0(v132);
        if ( !v136 )
          return 0;
        sub_103E18(&v134, v132, &v136, &v137);
      }
      else
      {
        v76 = *(_DWORD *)(v132 + 12);
        v77 = *(_DWORD *)(v132 + 8);
        v78 = v75 + 1;
        *(_DWORD *)v132 = v78;
        v79 = (v76 - v77) >> 2;
        while ( v78 == v74 || *v78 != 69 )
        {
          v134 = (_DWORD *)sub_1006E0(v132);
          if ( !v134 )
            return 0;
          sub_FF894(v132 + 8, (int *)&v134);
          v74 = *(_BYTE **)(v132 + 4);
          v78 = *(_BYTE **)v132;
        }
        *(_DWORD *)v132 = v78 + 1;
        sub_FF908((int)&v134, v132, v79);
      }
      v4 = sub_FFA98(v132 + 408, 20);
      v4[1] = 16843068;
      v4[2] = v73;
      v97 = &`vtable for'`anonymous namespace'::itanium_demangle::ConversionExpr;
      goto LABEL_303;
    case 'd':
      v34 = v3[1];
      v4 = 0;
      switch ( v3[1] )
      {
        case 'l':
          v35 = v132;
          *(_DWORD *)v132 = v3 + 2;
          v4 = 0;
          v134 = (_DWORD *)sub_1006E0(v132);
          if ( !v134 )
            return (int)v4;
          LOBYTE(v136) = 0;
          return sub_1026A8(v35, &v134, &v133, &v136);
        case 'm':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 'u':
          return (int)v4;
        case 'n':
          goto LABEL_7;
        case 's':
          v89 = v132;
          *(_DWORD *)v132 = v3 + 2;
          v134 = (_DWORD *)sub_1006E0(v132);
          if ( !v134 )
            return 0;
          v136 = (_DWORD *)sub_1006E0(v132);
          if ( !v136 )
            return 0;
          v90 = ".*";
          return sub_102880(v89, &v134, v90, &v136);
        case 't':
          *(_DWORD *)v132 = v3 + 2;
          v106 = sub_1006E0(v132);
          if ( !v106 )
            return 0;
          v107 = v106;
          v108 = sub_1006E0(v132);
          if ( !v108 )
            return 0;
          v109 = v108;
          v4 = sub_FFA98(v132 + 408, 24);
          v4[2] = v107;
          v4[3] = ".";
          *v4 = &off_113818;
          v4[1] = 16843059;
          v4[4] = "";
          v4[5] = v109;
          return (int)v4;
        case 'v':
          *(_DWORD *)v132 = v3 + 2;
          return sub_102614(v132, "/", "");
        default:
          if ( v34 == 86 )
          {
            v6 = v132;
            *(_DWORD *)v132 = v3 + 2;
            v9 = "/=";
            goto LABEL_256;
          }
          v19 = v132;
          switch ( v34 )
          {
            case 'e':
              *(_DWORD *)v132 = v3 + 2;
              v65 = &byte_4CC4A;
              goto LABEL_252;
            case 'c':
              *(_DWORD *)v132 = v3 + 2;
              v110 = sub_FE7F0((unsigned __int8 **)v132);
              if ( v110 )
              {
                v21 = v110;
                v111 = sub_1006E0(v132);
                if ( v111 )
                {
                  v23 = v111;
                  v4 = sub_FFA98(v132 + 408, 24);
                  v24 = "dynamic_cast";
                  v25 = "";
                  goto LABEL_250;
                }
              }
              break;
            case 'a':
              v35 = v132;
              *(_DWORD *)v132 = v3 + 2;
              v134 = (_DWORD *)sub_1006E0(v132);
              if ( v134 )
              {
                LOBYTE(v136) = 1;
                return sub_1026A8(v35, &v134, &v133, &v136);
              }
              break;
            default:
              return (int)v4;
          }
          break;
      }
      return 0;
    case 'e':
      v17 = v3[1];
      if ( v17 == 79 )
      {
        v6 = a1;
        *(_DWORD *)a1 = v3 + 2;
        v9 = "^=";
        break;
      }
      v6 = a1;
      if ( v17 == 113 )
      {
        *(_DWORD *)a1 = v3 + 2;
        v9 = "==";
        break;
      }
      if ( v17 != 111 )
        return 0;
      *(_DWORD *)a1 = v3 + 2;
      v9 = "^";
      goto LABEL_137;
    case 'f':
      v38 = v3 + 1;
      v39 = v3[1];
      if ( v39 == 112
        || v39 == 76 && (unsigned int)(HIDWORD(v2) - (_DWORD)v3) >= 3 && (unsigned int)v3[2] - 58 >= 0xFFFFFFF6 )
      {
        return sub_102564(a1);
      }
      v40 = v3 == (unsigned __int8 *)HIDWORD(v2);
      v41 = a1;
      if ( v3 != (unsigned __int8 *)HIDWORD(v2) )
      {
        *(_DWORD *)a1 = v38;
        v40 = HIDWORD(v2) == (_DWORD)v38;
      }
      if ( v40 )
        return 0;
      v42 = *v38;
      v43 = 1;
      if ( v42 == 76 )
      {
        v44 = "&&";
      }
      else
      {
        v44 = "&&";
        if ( v42 != 114 )
        {
          if ( v42 == 108 )
            goto LABEL_272;
          if ( v42 != 82 )
            return 0;
        }
        v43 = 0;
      }
LABEL_272:
      v130 = *v38;
      *(_DWORD *)v132 = v3 + 2;
      v131 = v43;
      if ( sub_FE18C((__int64 *)v132, (int)"aa", (int)"") )
        goto LABEL_273;
      if ( sub_FE18C((__int64 *)v132, (int)"an", (int)"") )
      {
        v120 = "";
        v44 = "&";
        goto LABEL_291;
      }
      if ( sub_FE18C((__int64 *)v132, (int)"aN", (int)"") )
      {
        v120 = "";
        v44 = "&=";
        goto LABEL_291;
      }
      if ( sub_FE18C((__int64 *)v132, (int)"aS", (int)"") )
      {
        v44 = "=";
LABEL_290:
        v120 = v44 + 1;
        goto LABEL_291;
      }
      if ( sub_FE18C((__int64 *)v132, (int)"cm", (int)"") )
      {
        v44 = ",";
        goto LABEL_290;
      }
      if ( sub_FE18C((__int64 *)v132, (int)"ds", (int)"") )
      {
        v44 = ".*";
LABEL_273:
        v120 = v44 + 2;
        goto LABEL_291;
      }
      if ( sub_FE18C((__int64 *)v132, (int)"dv", (int)"") )
      {
        v44 = "/";
LABEL_308:
        v120 = v44 + 1;
LABEL_312:
        v41 = v132;
LABEL_291:
        v123 = sub_1006E0(v41);
        if ( !v123 )
          return 0;
        v124 = v123;
        v125 = v130 == 82;
        if ( v130 != 82 )
          v125 = v130 == 76;
        if ( v125 )
        {
          v126 = sub_1006E0(v41);
          if ( !v126 )
            return 0;
          v127 = v44;
          if ( v43 )
          {
            v128 = v124;
            v124 = v126;
          }
          else
          {
            v128 = v126;
          }
        }
        else
        {
          v127 = v44;
          v128 = 0;
        }
        v4 = sub_FFA98(v41 + 408, 28);
        *((_BYTE *)v4 + 24) = v131;
        v4[5] = v120;
        *v4 = &off_113540;
        v4[1] = 16843070;
        v4[2] = v124;
        v4[3] = v128;
        v4[4] = v127;
        return (int)v4;
      }
      if ( sub_FE18C((__int64 *)v132, (int)"dV", (int)"") )
      {
        v44 = "/=";
      }
      else
      {
        if ( sub_FE18C((__int64 *)v132, (int)"eo", (int)"") )
        {
          v44 = "^";
          goto LABEL_308;
        }
        if ( sub_FE18C((__int64 *)v132, (int)"eO", (int)"") )
        {
          v44 = "^=";
        }
        else if ( sub_FE18C((__int64 *)v132, (int)"eq", (int)"") )
        {
          v44 = "==";
        }
        else if ( sub_FE18C((__int64 *)v132, (int)"ge", (int)"") )
        {
          v44 = ">=";
        }
        else
        {
          if ( sub_FE18C((__int64 *)v132, (int)"gt", (int)"") )
          {
            v44 = ">";
            goto LABEL_308;
          }
          if ( sub_FE18C((__int64 *)v132, (int)"le", (int)"") )
          {
            v44 = "<=";
          }
          else
          {
            if ( !sub_FE18C((__int64 *)v132, (int)"ls", (int)"") )
            {
              if ( sub_FE18C((__int64 *)v132, (int)"lS", (int)"") )
              {
                v44 = "<<=";
              }
              else
              {
                if ( sub_FE18C((__int64 *)v132, (int)"lt", (int)"") )
                {
                  v44 = "<";
                  goto LABEL_308;
                }
                if ( sub_FE18C((__int64 *)v132, (int)"mi", (int)"") )
                {
                  v44 = "-";
                  goto LABEL_308;
                }
                if ( sub_FE18C((__int64 *)v132, (int)"mI", (int)"") )
                {
                  v44 = "-=";
                  goto LABEL_311;
                }
                if ( sub_FE18C((__int64 *)v132, (int)"ml", (int)"") )
                {
                  v44 = &byte_4CC4A;
                  goto LABEL_308;
                }
                if ( sub_FE18C((__int64 *)v132, (int)"mL", (int)"") )
                {
                  v44 = "*=";
                  goto LABEL_311;
                }
                if ( sub_FE18C((__int64 *)v132, (int)"ne", (int)"") )
                {
                  v44 = "!=";
                  goto LABEL_311;
                }
                if ( sub_FE18C((__int64 *)v132, (int)"oo", (int)"") )
                {
                  v44 = "||";
                  goto LABEL_311;
                }
                if ( sub_FE18C((__int64 *)v132, (int)"or", (int)"") )
                {
                  v44 = "|";
                  goto LABEL_308;
                }
                if ( sub_FE18C((__int64 *)v132, (int)"oR", (int)"") )
                {
                  v44 = "|=";
                  goto LABEL_311;
                }
                if ( sub_FE18C((__int64 *)v132, (int)"pl", (int)"") )
                {
                  v44 = "+";
                  goto LABEL_308;
                }
                if ( sub_FE18C((__int64 *)v132, (int)"pL", (int)"") )
                {
                  v44 = "+=";
                  goto LABEL_311;
                }
                if ( sub_FE18C((__int64 *)v132, (int)"rm", (int)"") )
                {
                  v44 = "%";
                  goto LABEL_308;
                }
                if ( sub_FE18C((__int64 *)v132, (int)"rM", (int)"") )
                {
                  v44 = "%=";
                  goto LABEL_311;
                }
                if ( sub_FE18C((__int64 *)v132, (int)"rs", (int)"") )
                {
                  v44 = ">>";
                  goto LABEL_311;
                }
                if ( !sub_FE18C((__int64 *)v132, (int)"rS", (int)"") )
                  return 0;
                v44 = ">>=";
              }
              v120 = v44 + 3;
              goto LABEL_312;
            }
            v44 = "<<";
          }
        }
      }
LABEL_311:
      v120 = v44 + 2;
      goto LABEL_312;
    case 'g':
      v33 = v3[1];
      if ( v33 == 116 )
      {
        v6 = a1;
        *(_DWORD *)a1 = v3 + 2;
        v9 = ">";
        goto LABEL_137;
      }
      v6 = a1;
      if ( v33 != 101 )
        return 0;
      *(_DWORD *)a1 = v3 + 2;
      v9 = ">=";
      break;
    case 'i':
      v12 = v3[1];
      if ( v12 != 108 )
      {
        if ( v12 == 120 )
        {
          *(_DWORD *)a1 = v3 + 2;
          v13 = sub_1006E0(a1);
          if ( v13 )
          {
            v14 = v13;
            v15 = sub_1006E0(a1);
            if ( v15 )
            {
              v16 = v15;
              v4 = sub_FFA98(a1 + 408, 16);
              v4[2] = v14;
              v4[3] = v16;
              *v4 = &off_113850;
              v4[1] = 16843056;
              return (int)v4;
            }
          }
        }
        return 0;
      }
      LODWORD(v2) = v3 + 2;
      v61 = *(_DWORD *)(a1 + 12);
      v62 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)a1 = v3 + 2;
      v63 = (v61 - v62) >> 2;
      while ( (_DWORD)v2 == HIDWORD(v2) || *(_BYTE *)v2 != 69 )
      {
        v134 = (_DWORD *)sub_1028CC(a1);
        if ( !v134 )
          return 0;
        sub_FF894(a1 + 8, (int *)&v134);
        v2 = *(_QWORD *)a1;
      }
      *(_DWORD *)a1 = v2 + 1;
      sub_FF908((int)&v134, a1, v63);
      v4 = sub_FFA98(a1 + 408, 20);
      v4[1] = 16843069;
      v4[2] = 0;
      v97 = &`vtable for'`anonymous namespace'::itanium_demangle::InitListExpr;
LABEL_303:
      *v4 = v97 + 2;
      v129 = v134;
      v4[4] = v135;
      v4[3] = v129;
      return (int)v4;
    case 'l':
      v8 = v3[1];
      if ( v8 == 83 )
      {
        v6 = a1;
        *(_DWORD *)a1 = v3 + 2;
        v9 = "<<=";
LABEL_191:
        v64 = v9 + 3;
        return sub_102614(v6, v9, v64);
      }
      v6 = a1;
      switch ( v8 )
      {
        case 't':
          *(_DWORD *)a1 = v3 + 2;
          v9 = "<";
          goto LABEL_137;
        case 's':
          *(_DWORD *)a1 = v3 + 2;
          v9 = "<<";
          break;
        case 'e':
          *(_DWORD *)a1 = v3 + 2;
          v9 = "<=";
          break;
        default:
          return 0;
      }
      break;
    case 'm':
      v10 = v3[1];
      if ( v10 != 73 )
      {
        v11 = a1;
        if ( v10 == 76 )
        {
          *(_DWORD *)a1 = v3 + 2;
          v9 = "*=";
          v64 = "";
LABEL_143:
          v6 = a1;
          return sub_102614(v6, v9, v64);
        }
        if ( v10 != 109 )
        {
          if ( v10 == 108 )
          {
            *(_DWORD *)a1 = v3 + 2;
            v9 = &byte_4CC4A;
          }
          else
          {
            if ( v10 != 105 )
              return 0;
            *(_DWORD *)a1 = v3 + 2;
            v9 = "-";
          }
          v64 = v9 + 1;
          goto LABEL_143;
        }
        *(_DWORD *)a1 = v3 + 2;
        if ( v3 + 2 != (unsigned __int8 *)HIDWORD(v2) && v3[2] == 95 )
        {
          *(_DWORD *)a1 = v3 + 3;
          v65 = "--";
LABEL_189:
          v91 = v65 + 2;
          v92 = v11;
          return sub_102664(v92, v65, v91);
        }
        v134 = (_DWORD *)sub_1006E0(a1);
        if ( !v134 )
          return 0;
        v105 = "--";
        return sub_1029E8(v11, &v134, v105);
      }
      v6 = a1;
      *(_DWORD *)a1 = v3 + 2;
      v9 = "-=";
      break;
    case 'n':
      v56 = v3[1];
      if ( v56 == 97 )
        goto LABEL_109;
      if ( v56 != 101 )
      {
        switch ( v56 )
        {
          case 'g':
            *(_DWORD *)a1 = v3 + 2;
            v65 = "-";
            break;
          case 't':
            *(_DWORD *)a1 = v3 + 2;
            v65 = "!";
            break;
          case 'x':
            *(_DWORD *)a1 = v3 + 2;
            v93 = sub_1006E0(a1);
            if ( !v93 )
              return 0;
            v94 = v93;
            v4 = sub_FFA98(a1 + 408, 28);
            *v4 = &off_1139A0;
            v4[1] = 16843060;
            v4[2] = "noexcept (";
            v4[3] = "";
            v4[4] = v94;
            v4[5] = ")";
            v4[6] = "";
            return (int)v4;
          case 'w':
LABEL_109:
            v57 = sub_FE18C((__int64 *)a1, (int)"gs", (int)"");
            v58 = *(_QWORD *)a1;
            v59 = (unsigned int)(HIDWORD(v58) - v58) >= 2 && *(unsigned __int8 *)(v58 + 1) == 97;
            if ( !sub_FE18C((__int64 *)a1, (int)"nw", (int)"") && !sub_FE18C((__int64 *)a1, (int)"na", (int)"") )
              return 0;
            v95 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
            while ( 1 )
            {
              v96 = *(_QWORD *)a1;
              if ( (_DWORD)v96 != HIDWORD(v96) && *(_BYTE *)v96 == 95 )
                break;
              v134 = (_DWORD *)sub_1006E0(a1);
              if ( !v134 )
                return 0;
              sub_FF894(a1 + 8, (int *)&v134);
            }
            *(_DWORD *)a1 = v96 + 1;
            sub_FF908((int)&v134, a1, v95);
            v112 = sub_FE7F0((unsigned __int8 **)a1);
            if ( !v112 )
              return 0;
            v113 = v112;
            if ( sub_FE18C((__int64 *)a1, (int)"pi", (int)"") )
            {
              v114 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
              while ( 1 )
              {
                v115 = *(_QWORD *)a1;
                if ( (_DWORD)v115 != HIDWORD(v115) && *(_BYTE *)v115 == 69 )
                  break;
                v136 = (_DWORD *)sub_1006E0(a1);
                if ( !v136 )
                  return 0;
                sub_FF894(a1 + 8, (int *)&v136);
              }
              *(_DWORD *)a1 = v115 + 1;
              sub_FF908((int)&v136, a1, v114);
              v4 = sub_FFA98(a1 + 408, 32);
              sub_104FE0(v4, v134, v135, v113, v136, v137, v57, v59);
              return (int)v4;
            }
            v121 = *(_QWORD *)a1;
            if ( (_DWORD)v121 == HIDWORD(v121) )
              return 0;
            v4 = 0;
            if ( *(_BYTE *)v121 != 69 )
              return (int)v4;
            *(_DWORD *)v132 = v121 + 1;
            v122 = sub_FFA98(v132 + 408, 32);
            return sub_104FE0(v122, v134, v135, v113, 0, 0, v57, v59);
          default:
            return 0;
        }
        v91 = v65 + 1;
        v92 = a1;
        return sub_102664(v92, v65, v91);
      }
      *(_DWORD *)a1 = v3 + 2;
      v6 = a1;
      v9 = "!=";
      break;
    case 'o':
      v55 = v3[1];
      if ( v55 == 82 )
      {
        v6 = a1;
        *(_DWORD *)a1 = v3 + 2;
        v9 = "|=";
        break;
      }
      v6 = a1;
      if ( v55 == 114 )
      {
        *(_DWORD *)a1 = v3 + 2;
        v9 = "|";
LABEL_137:
        v64 = v9 + 1;
        return sub_102614(v6, v9, v64);
      }
      if ( v55 == 111 )
      {
        *(_DWORD *)a1 = v3 + 2;
        v9 = "||";
        break;
      }
      if ( v55 != 110 )
        return 0;
      return sub_1026E8(v6);
    case 'p':
      v4 = 0;
      switch ( v3[1] )
      {
        case 'l':
          v6 = v132;
          *(_DWORD *)v132 = v3 + 2;
          v9 = "+";
          goto LABEL_137;
        case 'm':
          v6 = v132;
          *(_DWORD *)v132 = v3 + 2;
          v9 = "->*";
          goto LABEL_191;
        case 'n':
        case 'o':
        case 'q':
        case 'r':
          return (int)v4;
        case 'p':
          v11 = v132;
          *(_DWORD *)v132 = v3 + 2;
          if ( v3 + 2 != (unsigned __int8 *)HIDWORD(v2) && v3[2] == 95 )
          {
            *(_DWORD *)v132 = v3 + 3;
            v65 = "++";
            goto LABEL_189;
          }
          v134 = (_DWORD *)sub_1006E0(v132);
          if ( !v134 )
            return 0;
          v105 = "++";
          break;
        case 's':
          *(_DWORD *)v132 = v3 + 2;
          return sub_102664(v132, "+", "");
        case 't':
          v89 = v132;
          *(_DWORD *)v132 = v3 + 2;
          v134 = (_DWORD *)sub_1006E0(v132);
          if ( !v134 )
            return 0;
          v136 = (_DWORD *)sub_1006E0(v132);
          if ( !v136 )
            return 0;
          v90 = "->";
          return sub_102880(v89, &v134, v90, &v136);
        default:
          if ( v3[1] != 76 )
            return (int)v4;
          v6 = v132;
          *(_DWORD *)v132 = v3 + 2;
          v9 = "+=";
          goto LABEL_256;
      }
      return sub_1029E8(v11, &v134, v105);
    case 'q':
      if ( v3[1] != 117 )
        return 0;
      *(_DWORD *)a1 = v3 + 2;
      v26 = sub_1006E0(a1);
      if ( !v26 )
        return 0;
      v27 = v26;
      v28 = sub_1006E0(a1);
      if ( !v28 )
        return 0;
      v29 = v28;
      v30 = sub_1006E0(a1);
      if ( !v30 )
        return 0;
      v31 = v30;
      v4 = sub_FFA98(a1 + 408, 20);
      *v4 = &off_1139D8;
      v4[1] = 16843058;
      v4[2] = v27;
      v4[3] = v29;
      v4[4] = v31;
      return (int)v4;
    case 'r':
      v45 = v3[1];
      if ( v45 != 77 )
      {
        if ( v45 == 83 )
        {
          *(_DWORD *)a1 = v3 + 2;
          v9 = ">>=";
          v64 = "";
        }
        else if ( v45 == 115 )
        {
          *(_DWORD *)a1 = v3 + 2;
          v9 = ">>";
          v64 = "";
        }
        else
        {
          if ( v45 != 109 )
          {
            if ( v45 == 99 )
            {
              *(_DWORD *)a1 = v3 + 2;
              v46 = sub_FE7F0((unsigned __int8 **)a1);
              if ( v46 )
              {
                v47 = v46;
                v48 = sub_1006E0(a1);
                if ( v48 )
                {
                  v49 = v48;
                  v4 = sub_FFA98(a1 + 408, 24);
                  v50 = "reinterpret_cast";
                  v51 = "";
                  goto LABEL_97;
                }
              }
            }
            return 0;
          }
          *(_DWORD *)a1 = v3 + 2;
          v9 = "%";
          v64 = "";
        }
        v6 = a1;
        return sub_102614(v6, v9, v64);
      }
      v6 = a1;
      *(_DWORD *)a1 = v3 + 2;
      v9 = "%=";
      break;
    case 's':
      v52 = v3[1];
      if ( v52 == 80 )
      {
        LODWORD(v2) = v3 + 2;
        v100 = *(_DWORD *)(a1 + 12);
        v101 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)a1 = v3 + 2;
        v102 = (v100 - v101) >> 2;
        while ( (_DWORD)v2 == HIDWORD(v2) || *(_BYTE *)v2 != 69 )
        {
          v134 = sub_FF754(a1);
          if ( !v134 )
            return 0;
          sub_FF894(a1 + 8, (int *)&v134);
          v2 = *(_QWORD *)a1;
        }
        *(_DWORD *)a1 = v2 + 1;
        sub_FF908((int)&v134, a1, v102);
        v116 = sub_FFA98(a1 + 408, 16);
        v116[1] = 16843008;
        *v116 = &off_113A48;
        v117 = v135;
        v116[2] = v134;
        v116[3] = v117;
        v136 = v116;
        v118 = (int *)&v136;
      }
      else
      {
        if ( v52 != 90 )
        {
          if ( v52 == 122 )
          {
            *(_DWORD *)a1 = v3 + 2;
            v99 = (_DWORD *)sub_1006E0(a1);
          }
          else
          {
            if ( v52 == 112 )
            {
              *(_DWORD *)a1 = v3 + 2;
              v134 = (_DWORD *)sub_1006E0(a1);
              if ( !v134 )
                return 0;
              return sub_102A2C(a1, &v134);
            }
            if ( v52 == 114 )
              return sub_1026E8(a1);
            if ( v52 != 116 )
            {
              if ( v52 == 99 )
              {
                *(_DWORD *)a1 = v3 + 2;
                v53 = sub_FE7F0((unsigned __int8 **)a1);
                if ( v53 )
                {
                  v47 = v53;
                  v54 = sub_1006E0(a1);
                  if ( v54 )
                  {
                    v49 = v54;
                    v4 = sub_FFA98(a1 + 408, 24);
                    v50 = "static_cast";
                    v51 = "";
LABEL_97:
                    *v4 = &off_113620;
                    v4[1] = 16843061;
                    v4[2] = v50;
                    v4[3] = v51;
                    v4[4] = v47;
                    v4[5] = v49;
                    return (int)v4;
                  }
                }
              }
              return 0;
            }
            *(_DWORD *)a1 = v3 + 2;
            v99 = (_DWORD *)sub_FE7F0((unsigned __int8 **)a1);
          }
          v134 = v99;
          if ( !v99 )
            return 0;
          v70 = a1;
          v71 = "sizeof (";
          return sub_102A58(v70, v71, &v134);
        }
        *(_DWORD *)a1 = v3 + 2;
        if ( (unsigned __int8 *)HIDWORD(v2) == v3 + 2 )
          return 0;
        v103 = v3[2];
        if ( v103 != 102 )
        {
          if ( v103 == 84 )
          {
            v104 = sub_100070((__int64 *)a1);
            if ( v104 )
            {
              v85 = v104;
              v86 = sub_FFA98(a1 + 408, 12);
              v4 = v86;
              v87 = 16843062;
              v88 = &`vtable for'`anonymous namespace'::itanium_demangle::SizeofParamPackExpr;
              goto LABEL_179;
            }
          }
          return 0;
        }
        v134 = (_DWORD *)sub_102564(a1);
        if ( !v134 )
          return 0;
        v118 = (int *)&v134;
      }
      return sub_102AAC(a1, v118);
    case 't':
      v36 = v3[1];
      switch ( v36 )
      {
        case 'w':
          *(_DWORD *)a1 = v3 + 2;
          v84 = sub_1006E0(a1);
          if ( !v84 )
            return 0;
          v85 = v84;
          v86 = sub_FFA98(a1 + 408, 12);
          v4 = v86;
          v87 = 16843071;
          v88 = &`vtable for'`anonymous namespace'::itanium_demangle::ThrowExpr;
LABEL_179:
          *v86 = v88 + 2;
          v86[1] = v87;
          v86[2] = v85;
          return (int)v4;
        case 'i':
          *(_DWORD *)a1 = v3 + 2;
          v37 = (_DWORD *)sub_FE7F0((unsigned __int8 **)a1);
          break;
        case 'l':
          *(_DWORD *)a1 = v3 + 2;
          v80 = sub_FE7F0((unsigned __int8 **)a1);
          if ( !v80 )
            return 0;
          v81 = v80;
          v82 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
          while ( 1 )
          {
            v83 = *(_QWORD *)a1;
            if ( (_DWORD)v83 != HIDWORD(v83) && *(_BYTE *)v83 == 69 )
              break;
            v134 = (_DWORD *)sub_1028CC(a1);
            if ( !v134 )
              return 0;
            sub_FF894(a1 + 8, (int *)&v134);
          }
          *(_DWORD *)a1 = v83 + 1;
          sub_FF908((int)&v134, a1, v82);
          v4 = sub_FFA98(a1 + 408, 20);
          v4[1] = 16843069;
          v4[2] = v81;
          *v4 = &off_1138F8;
          v119 = v135;
          v4[3] = v134;
          v4[4] = v119;
          return (int)v4;
        case 'r':
          *(_DWORD *)a1 = v3 + 2;
          return sub_102AF4(a1, "throw");
        case 'e':
          *(_DWORD *)a1 = v3 + 2;
          v37 = (_DWORD *)sub_1006E0(a1);
          break;
        default:
          return 0;
      }
      v134 = v37;
      if ( !v37 )
        return 0;
      v70 = a1;
      v71 = "typeid (";
      return sub_102A58(v70, v71, &v134);
    default:
      if ( (unsigned int)*v3 - 49 < 9 )
      {
LABEL_7:
        v6 = v132;
        return sub_1026E8(v6);
      }
LABEL_9:
      if ( sub_FE18C((__int64 *)a1, (int)"u8__uuidoft", (int)"") )
      {
        v7 = (_DWORD *)sub_FE7F0((unsigned __int8 **)a1);
      }
      else
      {
        if ( !sub_FE18C((__int64 *)a1, (int)"u8__uuidofz", (int)"") )
          return 0;
        v7 = (_DWORD *)sub_1006E0(a1);
      }
      v134 = v7;
      if ( v7 )
        return sub_102B2C(a1, &v134);
      return 0;
  }
LABEL_256:
  v64 = v9 + 2;
  return sub_102614(v6, v9, v64);
}


// ======================================================================
// ADDR: 0x102a2c
// SYMBOL: sub_102A2C
_DWORD *__fastcall sub_102A2C(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  result = sub_FFA98(a1 + 408, 12);
  result[1] = 16843042;
  *result = &off_113578;
  result[2] = *a2;
  return result;
}


// ======================================================================
// ADDR: 0x102af4
// SYMBOL: sub_102AF4
_DWORD *__fastcall sub_102AF4(int a1, const char *a2)
{
  _DWORD *v3; // r5
  size_t v4; // r0
  _DWORD *result; // r0

  v3 = sub_FFA98(a1 + 408, 16);
  v4 = strlen(a2);
  v3[2] = a2;
  v3[3] = &a2[v4];
  result = v3;
  *v3 = &off_113118;
  v3[1] = 16843015;
  return result;
}


// ======================================================================
// ADDR: 0x102c10
// SYMBOL: sub_102C10
_DWORD *__fastcall sub_102C10(int a1, const char *a2)
{
  _DWORD *v3; // r5
  size_t v4; // r0
  _DWORD *result; // r0

  v3 = sub_FFA98(a1 + 408, 16);
  v4 = strlen(a2);
  v3[2] = a2;
  v3[3] = &a2[v4];
  result = v3;
  *v3 = &off_113118;
  v3[1] = 16843015;
  return result;
}


// ======================================================================
// ADDR: 0x10420c
// SYMBOL: sub_10420C
_DWORD *__fastcall sub_10420C(int a1, _QWORD *a2)
{
  _DWORD *result; // r0

  result = sub_FFA98(a1 + 408, 16);
  *((_QWORD *)result + 1) = *a2;
  *result = &off_113118;
  result[1] = 16843015;
  return result;
}


// ======================================================================
// ADDR: 0x104bc8
// SYMBOL: sub_104BC8
_DWORD *__fastcall sub_104BC8(int a1, const char *a2)
{
  _DWORD *v3; // r5
  size_t v4; // r0
  _DWORD *result; // r0

  v3 = sub_FFA98(a1 + 408, 16);
  v4 = strlen(a2);
  v3[2] = a2;
  v3[3] = &a2[v4];
  result = v3;
  *v3 = &off_113118;
  v3[1] = 16843015;
  return result;
}


// ======================================================================
// ADDR: 0x104c00
// SYMBOL: sub_104C00
_DWORD *__fastcall sub_104C00(int a1, const char *a2)
{
  _DWORD *v3; // r5
  size_t v4; // r0
  _DWORD *result; // r0

  v3 = sub_FFA98(a1 + 408, 16);
  v4 = strlen(a2);
  v3[2] = a2;
  v3[3] = &a2[v4];
  result = v3;
  *v3 = &off_113118;
  v3[1] = 16843015;
  return result;
}


// ======================================================================
// ADDR: 0x104c64
// SYMBOL: sub_104C64
_DWORD *__fastcall sub_104C64(int a1, const char *a2)
{
  _DWORD *v3; // r5
  size_t v4; // r0
  _DWORD *result; // r0

  v3 = sub_FFA98(a1 + 408, 16);
  v4 = strlen(a2);
  v3[2] = a2;
  v3[3] = &a2[v4];
  result = v3;
  *v3 = &off_113118;
  v3[1] = 16843015;
  return result;
}


// ======================================================================
// ADDR: 0x104c9c
// SYMBOL: sub_104C9C
_DWORD *__fastcall sub_104C9C(int a1, const char *a2)
{
  _DWORD *v3; // r5
  size_t v4; // r0
  _DWORD *result; // r0

  v3 = sub_FFA98(a1 + 408, 16);
  v4 = strlen(a2);
  v3[2] = a2;
  v3[3] = &a2[v4];
  result = v3;
  *v3 = &off_113118;
  v3[1] = 16843015;
  return result;
}


// ======================================================================
// ADDR: 0x104cd4
// SYMBOL: sub_104CD4
_DWORD *__fastcall sub_104CD4(int a1, const char *a2)
{
  _DWORD *v3; // r5
  size_t v4; // r0
  _DWORD *result; // r0

  v3 = sub_FFA98(a1 + 408, 16);
  v4 = strlen(a2);
  v3[2] = a2;
  v3[3] = &a2[v4];
  result = v3;
  *v3 = &off_113118;
  v3[1] = 16843015;
  return result;
}


// ======================================================================
// ADDR: 0x104d0c
// SYMBOL: sub_104D0C
_DWORD *__fastcall sub_104D0C(int a1, const char *a2)
{
  _DWORD *v3; // r5
  size_t v4; // r0
  _DWORD *result; // r0

  v3 = sub_FFA98(a1 + 408, 16);
  v4 = strlen(a2);
  v3[2] = a2;
  v3[3] = &a2[v4];
  result = v3;
  *v3 = &off_113118;
  v3[1] = 16843015;
  return result;
}


// ======================================================================
// ADDR: 0x10538c
// SYMBOL: sub_10538C
int __fastcall sub_10538C(_DWORD *a1, unsigned __int8 **a2)
{
  __int64 v4; // r0
  int v6[6]; // [sp+0h] [bp-18h] BYREF

  v6[0] = 0;
  if ( sub_10049E(a2, v6) || (v4 = *(_QWORD *)a2, (unsigned int)(HIDWORD(v4) - v4) < v6[0]) )
  {
    *a1 = 0;
    a1[1] = 0;
  }
  else
  {
    HIDWORD(v4) = v6[0] + v4;
    *a2 = (unsigned __int8 *)(v6[0] + v4);
    *(_QWORD *)a1 = v4;
  }
  return v6[1];
}


// ======================================================================
// ADDR: 0x10591c
// SYMBOL: sub_10591C
_DWORD *__fastcall sub_10591C(int a1)
{
  int v2; // r9
  _DWORD *v3; // r11
  __int64 v4; // r0
  int v5; // r0
  int v6; // r10
  __int64 v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r4
  __int64 v11; // r0
  int v12; // r0
  _UNKNOWN **v13; // r1
  int v14; // r8
  __int64 v15; // r0
  _DWORD *result; // r0
  char v17; // r4
  __int64 v18; // kr00_8
  int v19; // [sp+0h] [bp-30h]
  __int64 v20; // [sp+8h] [bp-28h] BYREF

  v2 = sub_FFF94((__int64 *)a1);
  if ( sub_FE18C((__int64 *)a1, (int)"Do", (int)"") )
  {
    v3 = (_DWORD *)sub_105CBC(a1, "noexcept");
    goto LABEL_3;
  }
  if ( sub_FE18C((__int64 *)a1, (int)"DO", (int)"") )
  {
    v9 = sub_1006E0(a1);
    if ( !v9 )
      return 0;
    v10 = v9;
    v11 = *(_QWORD *)a1;
    if ( (_DWORD)v11 == HIDWORD(v11) || *(_BYTE *)v11 != 69 )
      return 0;
    *(_DWORD *)a1 = v11 + 1;
    v3 = sub_FFA98(a1 + 408, 12);
    v12 = 16843024;
    v3[2] = v10;
    v13 = &off_113E00;
  }
  else
  {
    if ( !sub_FE18C((__int64 *)a1, (int)"Dw", (int)"") )
    {
      v3 = 0;
      goto LABEL_3;
    }
    v14 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
    while ( 1 )
    {
      v15 = *(_QWORD *)a1;
      if ( (_DWORD)v15 != HIDWORD(v15) && *(_BYTE *)v15 == 69 )
        break;
      LODWORD(v20) = sub_FE7F0((unsigned __int8 **)a1);
      if ( !(_DWORD)v20 )
        return 0;
      sub_FF894(a1 + 8, (int *)&v20);
    }
    *(_DWORD *)a1 = v15 + 1;
    sub_FF908((int)&v20, a1, v14);
    v3 = sub_FFA98(a1 + 408, 16);
    v12 = 16843025;
    v13 = &off_113E38;
    *((_QWORD *)v3 + 1) = v20;
  }
  *v3 = v13;
  v3[1] = v12;
LABEL_3:
  sub_FE18C((__int64 *)a1, (int)"Dx", (int)"");
  v4 = *(_QWORD *)a1;
  if ( (_DWORD)v4 == HIDWORD(v4) || *(_BYTE *)v4 != 70 )
    return 0;
  *(_DWORD *)a1 = v4 + 1;
  if ( (_DWORD)v4 + 1 != HIDWORD(v4) && *(_BYTE *)(v4 + 1) == 89 )
    *(_DWORD *)a1 = v4 + 2;
  v5 = sub_FE7F0((unsigned __int8 **)a1);
  if ( !v5 )
    return 0;
  v6 = v5;
  v19 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)a1;
      if ( (_DWORD)v7 == HIDWORD(v7) )
        goto LABEL_13;
      v8 = *(unsigned __int8 *)v7;
      if ( v8 != 118 )
        break;
      *(_DWORD *)a1 = v7 + 1;
    }
    if ( v8 == 69 )
      break;
LABEL_13:
    if ( sub_FE18C((__int64 *)a1, (int)"RE", (int)"") )
    {
      v17 = 1;
      goto LABEL_36;
    }
    if ( sub_FE18C((__int64 *)a1, (int)"OE", (int)"") )
    {
      v17 = 2;
      goto LABEL_36;
    }
    LODWORD(v20) = sub_FE7F0((unsigned __int8 **)a1);
    if ( !(_DWORD)v20 )
      return 0;
    sub_FF894(a1 + 8, (int *)&v20);
  }
  v17 = 0;
  *(_DWORD *)a1 = v7 + 1;
LABEL_36:
  sub_FF908((int)&v20, a1, v19);
  result = sub_FFA98(a1 + 408, 32);
  result[7] = v3;
  *((_BYTE *)result + 24) = v17;
  v18 = v20;
  *result = &off_113E70;
  result[1] = 65551;
  result[2] = v6;
  *(_QWORD *)(result + 3) = v18;
  result[5] = v2;
  return result;
}


// ======================================================================
// ADDR: 0x105b54
// SYMBOL: sub_105B54
_DWORD *__fastcall sub_105B54(unsigned __int8 **a1, int a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  __int64 v5; // r0
  unsigned __int8 *v6; // r5
  unsigned __int8 *v7; // r6
  int v8; // r0
  __int64 v9; // r8
  int v10; // r0
  int v11; // r8
  char v12; // r10
  int *v13; // r0
  int v14; // r6
  _DWORD *result; // r0
  _DWORD *v16; // r5
  int v17; // r0
  int *v18; // r9
  unsigned __int8 *v19; // [sp+0h] [bp-30h] BYREF
  unsigned __int8 *v20; // [sp+4h] [bp-2Ch]
  __int64 v21; // [sp+Ch] [bp-24h] BYREF

  v19 = a3;
  v20 = a4;
  v5 = *(_QWORD *)a1;
  if ( (_DWORD)v5 != HIDWORD(v5) && *(_BYTE *)v5 == 85 )
  {
    *a1 = (unsigned __int8 *)(v5 + 1);
    sub_10538C(&v21, a1);
    v6 = (unsigned __int8 *)HIDWORD(v21);
    v7 = (unsigned __int8 *)v21;
    if ( (_DWORD)v21 != HIDWORD(v21) )
    {
      if ( sub_FF274(&v21, (int)"objcproto", (int)"") )
      {
        v8 = v6 - v7;
        v9 = *(_QWORD *)a1;
        if ( (unsigned int)(v6 - v7) >= 9 )
          v8 = 9;
        *a1 = &v7[v8];
        a1[1] = v6;
        sub_10538C(&v19, a1);
        v7 = v19;
        v6 = v20;
        *(_QWORD *)a1 = v9;
        if ( v7 != v6 )
        {
          v10 = sub_105B54(a1);
          if ( v10 )
          {
            v11 = v10;
            v12 = 10;
            v13 = &`vtable for'`anonymous namespace'::itanium_demangle::ObjCProtoName;
LABEL_16:
            v18 = v13 + 2;
            result = sub_FFA98((int)(a1 + 102), 20);
            *((_BYTE *)result + 4) = v12;
            *((_BYTE *)result + 7) = 1;
            *(_WORD *)((char *)result + 5) = 257;
            result[2] = v11;
            result[3] = v7;
            result[4] = v6;
            *result = v18;
            return result;
          }
        }
      }
      else
      {
        v17 = sub_105B54(a1);
        if ( v17 )
        {
          v11 = v17;
          v12 = 2;
          v13 = &`vtable for'`anonymous namespace'::itanium_demangle::VendorExtQualType;
          goto LABEL_16;
        }
      }
    }
    return 0;
  }
  v14 = sub_FFF94((__int64 *)a1);
  result = (_DWORD *)sub_FE7F0(a1);
  if ( !result )
    return 0;
  v16 = result;
  if ( v14 )
  {
    result = sub_FFA98((int)(a1 + 102), 16);
    result[2] = v14;
    result[3] = v16;
    *((_BYTE *)result + 4) = 3;
    *result = &off_113F18;
    *((_BYTE *)result + 5) = *((_BYTE *)v16 + 5);
    *((_WORD *)result + 3) = *((_WORD *)v16 + 3);
  }
  return result;
}


// ======================================================================
// ADDR: 0x105c84
// SYMBOL: sub_105C84
_DWORD *__fastcall sub_105C84(int a1, const char *a2)
{
  _DWORD *v3; // r5
  size_t v4; // r0
  _DWORD *result; // r0

  v3 = sub_FFA98(a1 + 408, 16);
  v4 = strlen(a2);
  v3[2] = a2;
  v3[3] = &a2[v4];
  result = v3;
  *v3 = &off_113118;
  v3[1] = 16843015;
  return result;
}


// ======================================================================
// ADDR: 0x105cbc
// SYMBOL: sub_105CBC
_DWORD *__fastcall sub_105CBC(int a1, const char *a2)
{
  _DWORD *v3; // r5
  size_t v4; // r0
  _DWORD *result; // r0

  v3 = sub_FFA98(a1 + 408, 16);
  v4 = strlen(a2);
  v3[2] = a2;
  v3[3] = &a2[v4];
  result = v3;
  *v3 = &off_113118;
  v3[1] = 16843015;
  return result;
}


// ======================================================================
// ADDR: 0x105cf4
// SYMBOL: sub_105CF4
_DWORD *__fastcall sub_105CF4(__int64 *a1)
{
  const char *v2; // r0
  char *v3; // r8
  char *v4; // r9
  _DWORD *v5; // r5
  int v6; // r0
  int v7; // r6

  if ( sub_FE18C(a1, (int)"Ts", (int)"") )
  {
    v2 = "struct";
    v3 = "";
LABEL_7:
    v4 = (char *)v2;
    goto LABEL_8;
  }
  if ( sub_FE18C(a1, (int)"Tu", (int)"") )
  {
    v2 = "union";
    v3 = "";
    goto LABEL_7;
  }
  if ( sub_FE18C(a1, (int)"Te", (int)"") )
  {
    v2 = "enum";
    v3 = "";
    goto LABEL_7;
  }
  v4 = 0;
  v3 = 0;
LABEL_8:
  v5 = 0;
  v6 = sub_FF2B8(a1, 0);
  if ( v6 )
  {
    v7 = v6;
    if ( v4 == v3 )
    {
      return (_DWORD *)v6;
    }
    else
    {
      v5 = sub_FFA98((int)(a1 + 51), 20);
      v5[2] = v4;
      v5[3] = v3;
      v5[4] = v7;
      *v5 = &off_114030;
      v5[1] = 16843014;
    }
  }
  return v5;
}


// ======================================================================
// ADDR: 0x105dac
// SYMBOL: sub_105DAC
_DWORD *__fastcall sub_105DAC(int a1, int *a2, int *a3)
{
  _DWORD *result; // r0
  int v6; // r2
  int v7; // r1

  result = sub_FFA98(a1 + 408, 20);
  v6 = *a2;
  *result = &off_1140A0;
  v7 = *a3;
  result[2] = v6;
  result[3] = v7;
  *((_WORD *)result + 3) = 257;
  *((_BYTE *)result + 4) = 12;
  *((_BYTE *)result + 16) = 0;
  *((_BYTE *)result + 5) = *(_BYTE *)(v6 + 5);
  return result;
}


// ======================================================================
// ADDR: 0x106048
// SYMBOL: sub_106048
_DWORD *__fastcall sub_106048(int a1, _QWORD *a2)
{
  _DWORD *result; // r0

  result = sub_FFA98(a1 + 408, 16);
  *((_QWORD *)result + 1) = *a2;
  *result = &off_113118;
  result[1] = 16843015;
  return result;
}


// ======================================================================
// ADDR: 0x106078
// SYMBOL: sub_106078
_DWORD *__fastcall sub_106078(int a1, int *a2, int *a3)
{
  _DWORD *result; // r0
  int v6; // r2
  int v7; // r1

  result = sub_FFA98(a1 + 408, 16);
  result[1] = 16843033;
  v6 = *a2;
  *result = &off_113F88;
  v7 = *a3;
  result[2] = v6;
  result[3] = v7;
  return result;
}


// ======================================================================

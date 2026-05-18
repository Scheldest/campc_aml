// ADDR: 0xe0498
// SYMBOL: sub_E0498
int __fastcall sub_E0498(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = a1 - 97;
  result = 1;
  switch ( v1 )
  {
    case 0:
      result = 7;
      break;
    case 1:
      result = 5;
      break;
    case 2:
      result = 15;
      break;
    case 3:
      return result;
    case 4:
      result = 9;
      break;
    case 5:
      result = 11;
      break;
    case 6:
      result = 13;
      break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 16:
    case 17:
    case 19:
    case 20:
    case 21:
    case 22:
      goto LABEL_5;
    case 14:
      result = 2;
      break;
    case 15:
      result = 17;
      break;
    case 18:
      result = 16;
      break;
    case 23:
      result = 3;
      break;
    default:
      if ( &jpt_E04CE == (char *)&dword_58 )
        result = 4;
      else
LABEL_5:
        result = 0;
      break;
  }
  return result;
}


// ======================================================================
// ADDR: 0xe0524
// SYMBOL: sub_E0524
unsigned __int8 *__fastcall sub_E0524(unsigned __int8 *a1, int a2, int a3)
{
  unsigned __int8 *v4; // r3
  unsigned int v5; // r0
  unsigned __int8 *v6; // r6
  int v7; // r1
  bool v8; // zf
  int v9; // r5
  char v11[20]; // [sp+4h] [bp-14h] BYREF

  v4 = a1;
  v5 = *a1;
  v6 = &v4[byte_91EB0[v5 >> 3] + ((0x80FF0000 >> (v5 >> 3)) & 1)];
  if ( a2 - (int)v6 < 1 )
    v6 = v4;
  while ( 1 )
  {
    v7 = *v6;
    if ( v7 == 94 )
    {
      v9 = 3;
      goto LABEL_12;
    }
    if ( v7 == 62 )
    {
      v9 = 2;
      goto LABEL_12;
    }
    if ( v7 == 60 )
      break;
    v8 = v6 == v4;
    v6 = v4;
    if ( v8 )
      return v4;
  }
  v9 = 1;
LABEL_12:
  if ( v6 == v4 )
  {
    v6 = v4;
  }
  else
  {
    if ( v5 == 123 )
      fmt::v8::detail::error_handler::on_error(
        (fmt::v8::detail::error_handler *)v11,
        (fmt::v8::detail *)"invalid fill character '{'");
    sub_E079C(a3, v4, v6 - v4);
  }
  sub_E07D0(a3, v9);
  return v6 + 1;
}


// ======================================================================
// ADDR: 0xe05b4
// SYMBOL: sub_E05B4
int __fastcall sub_E05B4(int *a1, char a2)
{
  unsigned int v2; // r2
  int result; // r0
  int v4; // [sp+0h] [bp-10h] BYREF
  char v5; // [sp+4h] [bp-Ch] BYREF

  v2 = a1[3];
  if ( v2 - 1 >= 0xB )
    fmt::v8::detail::error_handler::on_error(
      (fmt::v8::detail::error_handler *)&v4,
      (fmt::v8::detail *)"format specifier requires numeric argument");
  if ( v2 - 1 <= 7 && (v2 > 8 || ((1 << v2) & 0x12A) == 0) )
    fmt::v8::detail::error_handler::on_error(
      (fmt::v8::detail::error_handler *)&v5,
      (fmt::v8::detail *)"format specifier requires signed argument");
  result = *a1;
  *(_WORD *)(result + 9) = *(_WORD *)(result + 9) & 0xFF8F | (16 * (a2 & 7));
  return result;
}


// ======================================================================
// ADDR: 0xe060c
// SYMBOL: sub_E060C
int __fastcall sub_E060C(_DWORD *a1)
{
  int v1; // r1
  int v2; // r2
  int result; // r0
  char v4; // [sp+4h] [bp-Ch] BYREF

  if ( (unsigned int)(a1[3] - 1) >= 0xB )
    fmt::v8::detail::error_handler::on_error(
      (fmt::v8::detail::error_handler *)&v4,
      (fmt::v8::detail *)"format specifier requires numeric argument");
  v1 = *a1;
  v2 = *(unsigned __int16 *)(*a1 + 9);
  if ( !(v2 << 28) )
  {
    *(_WORD *)(v1 + 9) = v2 & 0xFFF0 | 4;
    v1 = *a1;
  }
  result = 48;
  *(_BYTE *)(v1 + 11) = 48;
  return result;
}


// ======================================================================
// ADDR: 0xe0648
// SYMBOL: sub_E0648
unsigned __int8 *__fastcall sub_E0648(unsigned __int8 *result, unsigned __int8 *a2, int **a3)
{
  int v4; // r1
  int v6; // r1
  unsigned __int8 *v7; // r6
  int v8; // r0
  bool v9; // zf
  int **v10; // [sp+0h] [bp-20h] BYREF
  unsigned __int8 *v11; // [sp+4h] [bp-1Ch] BYREF
  _BYTE v12[4]; // [sp+8h] [bp-18h] BYREF
  _BYTE v13[20]; // [sp+Ch] [bp-14h] BYREF

  v4 = *result;
  v11 = result;
  if ( (unsigned int)(v4 - 48) > 9 )
  {
    if ( v4 == 123 )
    {
      v7 = result + 1;
      if ( result + 1 == a2 )
        goto LABEL_15;
      v8 = *v7;
      v10 = a3;
      v9 = v8 == 58;
      if ( v8 != 58 )
        v9 = v8 == 125;
      if ( v9 )
        sub_E09D8(a3);
      else
        v7 = (unsigned __int8 *)sub_E0804(v7, a2, &v10);
      if ( v7 == a2 || *v7 != 125 )
LABEL_15:
        fmt::v8::detail::error_handler::on_error(
          (fmt::v8::detail::error_handler *)v13,
          (fmt::v8::detail *)"invalid format string");
      result = v7 + 1;
      v11 = v7 + 1;
    }
  }
  else
  {
    v6 = sub_E036C(&v11, a2, -1);
    if ( v6 == -1 )
      fmt::v8::detail::error_handler::on_error(
        (fmt::v8::detail::error_handler *)v12,
        (fmt::v8::detail *)"number is too big");
    result = v11;
    **a3 = v6;
  }
  return result;
}


// ======================================================================
// ADDR: 0xe06d8
// SYMBOL: sub_E06D8
unsigned __int8 *__fastcall sub_E06D8(int a1, unsigned __int8 *a2, _DWORD *a3)
{
  int v4; // r1
  int v6; // r0
  unsigned __int8 *v7; // r6
  int v8; // r0
  bool v9; // zf
  unsigned int v10; // r0
  _DWORD *v12; // [sp+0h] [bp-28h] BYREF
  unsigned __int8 *v13; // [sp+4h] [bp-24h] BYREF
  _BYTE v14[4]; // [sp+8h] [bp-20h] BYREF
  _BYTE v15[4]; // [sp+Ch] [bp-1Ch] BYREF
  _BYTE v16[4]; // [sp+10h] [bp-18h] BYREF
  _BYTE v17[20]; // [sp+14h] [bp-14h] BYREF

  v13 = (unsigned __int8 *)(a1 + 1);
  if ( (unsigned __int8 *)(a1 + 1) == a2 )
    goto LABEL_18;
  v4 = *(unsigned __int8 *)(a1 + 1);
  if ( (unsigned int)(v4 - 48) <= 9 )
  {
    v6 = sub_E036C(&v13, a2, -1);
    if ( v6 == -1 )
      fmt::v8::detail::error_handler::on_error(
        (fmt::v8::detail::error_handler *)v14,
        (fmt::v8::detail *)"number is too big");
    *(_DWORD *)(*a3 + 4) = v6;
    goto LABEL_14;
  }
  if ( v4 != 123 )
LABEL_18:
    fmt::v8::detail::error_handler::on_error(
      (fmt::v8::detail::error_handler *)v16,
      (fmt::v8::detail *)"missing precision specifier");
  v7 = (unsigned __int8 *)(a1 + 2);
  if ( (unsigned __int8 *)(a1 + 2) == a2 )
    goto LABEL_19;
  v8 = *v7;
  v12 = a3;
  v9 = v8 == 58;
  if ( v8 != 58 )
    v9 = v8 == 125;
  if ( v9 )
    sub_E0B80(a3);
  else
    v7 = (unsigned __int8 *)sub_E0A24(v7, a2, &v12);
  if ( v7 == a2 || (v13 = v7 + 1, *v7 != 125) )
LABEL_19:
    fmt::v8::detail::error_handler::on_error(
      (fmt::v8::detail::error_handler *)v15,
      (fmt::v8::detail *)"invalid format string");
LABEL_14:
  v10 = a3[3];
  if ( v10 <= 0xE && ((1 << v10) & 0x41FE) != 0 )
    fmt::v8::detail::error_handler::on_error(
      (fmt::v8::detail::error_handler *)v17,
      (fmt::v8::detail *)"precision not allowed for this argument type");
  return v13;
}


// ======================================================================
// ADDR: 0xe0ba0
// SYMBOL: sub_E0BA0
int __fastcall sub_E0BA0(int a1, const char *a2, __int64 a3, unsigned int a4, int a5, int a6, int a7)
{
  unsigned int v7; // r4
  unsigned int v8; // r5
  int v9; // r10
  int v10; // r11
  unsigned int v11; // r8
  unsigned int v12; // r6
  unsigned int v13; // r9
  __int16 v14; // r0
  int v15; // r1
  int v16; // r4
  unsigned int v17; // r1
  unsigned int v18; // r2
  __int64 v19; // kr00_8
  unsigned int v20; // r5
  int v21; // r0
  __int16 v22; // r0
  int v23; // r1
  int v24; // r4
  unsigned int v25; // r1
  unsigned int v26; // r2
  int v27; // r3
  __int64 v28; // kr08_8
  unsigned int v29; // r5
  int v30; // r2
  int v31; // r0
  int v32; // r4
  __int64 v33; // r0
  int v34; // r2
  __int16 v35; // r2
  int v36; // r12
  int v37; // r1
  int v38; // r0
  unsigned int v39; // r3
  unsigned int v40; // r0
  unsigned int v41; // r2
  char v42; // cf
  int v43; // r3
  bool v45; // zf
  int v46; // r0
  int v47; // r1
  int v48; // r2
  __int64 v49; // kr18_8
  int v50; // r0
  int v51; // r3
  _BYTE *v52; // r0
  bool v53; // zf
  int v54; // r0
  int v55; // r1
  int v56; // r2
  __int64 v57; // r2
  int v58; // r1
  _BYTE *v59; // r1
  const char *v60; // r0
  int v61; // r2
  int v62; // r3
  char *v63; // r0
  char *v64; // r1
  char *v65; // r0
  const char *v66; // r2
  int v67; // r3
  int v68; // r5
  unsigned int v69; // r1
  int v70; // r10
  __int64 v71; // r0
  unsigned int v72; // r2
  int v73; // r3
  bool v74; // zf
  int v75; // r0
  int v76; // r1
  int v77; // r2
  bool v78; // zf
  int v79; // r0
  int v80; // r1
  int v81; // r2
  __int64 v82; // kr38_8
  int v83; // r0
  int v84; // r3
  _BYTE *v85; // r0
  int v86; // r2
  char *v87; // r0
  int v88; // r3
  int v90; // [sp+Ch] [bp-6Ch] BYREF
  unsigned int v91; // [sp+10h] [bp-68h] BYREF
  unsigned int v92; // [sp+14h] [bp-64h]
  int v93; // [sp+18h] [bp-60h]
  unsigned int v94; // [sp+20h] [bp-58h]
  unsigned int v95; // [sp+24h] [bp-54h]
  int v96; // [sp+28h] [bp-50h]
  bool v97; // [sp+2Ch] [bp-4Ch]
  _DWORD v98[9]; // [sp+54h] [bp-24h] BYREF

  v90 = a1;
  v9 = *(unsigned __int8 *)(a6 + 8);
  v10 = a1;
  v11 = HIDWORD(a3);
  v12 = a3;
  v13 = a4;
  switch ( *(_BYTE *)(a6 + 8) )
  {
    case 0:
    case 1:
      if ( (*(_WORD *)(a6 + 9) & 0x100) == 0 )
        goto LABEL_87;
      v7 = a6;
      if ( sub_DD6FC(&v90, (int)a2, a3, SHIDWORD(a3), a4, a6, a7) )
        return v90;
      v10 = v90;
LABEL_87:
      v69 = __clz(v12 | 1) + 32;
      if ( v11 )
        v69 = __clz(v11);
      v70 = byte_91BF8[v69 ^ 0x3F];
      v71 = *(_QWORD *)a6;
      if ( __PAIR64__(v11, v12) < qword_91C38[v70] )
        --v70;
      if ( (HIDWORD(v71) + 1) | (unsigned int)v71 )
      {
        v72 = v70 + HIBYTE(a4);
        if ( (*(_WORD *)(a6 + 9) & 0xF) == 4 )
        {
          v73 = v71 - v72;
          if ( (unsigned int)v71 < v72 )
            v73 = 0;
          if ( (unsigned int)v71 > v72 )
            v72 = *(_DWORD *)a6;
        }
        else if ( SHIDWORD(v71) <= v70 )
        {
          v73 = 0;
        }
        else
        {
          v73 = HIDWORD(v71) - v70;
          v72 = HIDWORD(v71) + HIBYTE(a4);
        }
        v93 = v73;
        v94 = v12;
        v95 = v11;
        v96 = v70;
        v91 = a4;
        v92 = v72;
        return sub_E1110(v10, a6);
      }
      v74 = a4 == 0;
      if ( a4 )
      {
        v7 = a4 & 0xFFFFFF;
        v74 = (a4 & 0xFFFFFF) == 0;
      }
      if ( !v74 )
      {
        do
        {
          v75 = *(_DWORD *)(v10 + 8);
          v76 = v75 + 1;
          if ( *(_DWORD *)(v10 + 12) < (unsigned int)(v75 + 1) )
          {
            (**(void (__fastcall ***)(int))v10)(v10);
            v75 = *(_DWORD *)(v10 + 8);
            v76 = v75 + 1;
          }
          v77 = *(_DWORD *)(v10 + 4);
          *(_DWORD *)(v10 + 8) = v76;
          *(_BYTE *)(v77 + v75) = v7;
          v7 >>= 8;
        }
        while ( v7 );
      }
      sub_DD0CC(v98, (int)&v91, __PAIR64__(v11, v12), v70);
      v64 = (char *)v98[1];
      return sub_DCF1C((int)&v91, (int)v64, v10);
    case 2:
      v32 = 0;
      v33 = a3;
      do
      {
        --v32;
        LODWORD(v33) = v33 >> 3;
        v34 = v33 | (HIDWORD(v33) >> 3);
        HIDWORD(v33) >>= 3;
      }
      while ( v34 );
      v35 = *(_WORD *)(a6 + 9);
      v36 = -v32;
      v37 = *(_DWORD *)(a6 + 4);
      if ( (v35 & 0x80) != 0 && v37 <= v36 && v12 | HIDWORD(a3) )
      {
        v38 = 12288;
        if ( !a4 )
          v38 = 48;
        v13 = (v38 | a4) + 0x1000000;
      }
      v39 = *(_DWORD *)a6;
      if ( (v37 + 1) | *(_DWORD *)a6 )
      {
        v40 = HIBYTE(v13) - v32;
        if ( (v35 & 0xF) == 4 )
        {
          v41 = HIBYTE(v13) - v32;
          v42 = v39 >= v40;
          if ( v39 > v40 )
            v41 = *(_DWORD *)a6;
          v43 = v39 - v40;
          if ( !v42 )
            v43 = 0;
        }
        else if ( v37 <= v36 )
        {
          v43 = 0;
          v41 = HIBYTE(v13) - v32;
        }
        else
        {
          v43 = v37 + v32;
          v41 = HIBYTE(v13) + v37;
        }
        v93 = v43;
        v94 = v12;
        v95 = v11;
        v96 = -v32;
        v91 = v13;
        v92 = v41;
        return sub_E140C(v10, a6);
      }
      v78 = v13 == 0;
      if ( v13 )
      {
        v8 = v13 & 0xFFFFFF;
        v78 = (v13 & 0xFFFFFF) == 0;
      }
      if ( !v78 )
      {
        do
        {
          v79 = *(_DWORD *)(v10 + 8);
          v80 = v79 + 1;
          if ( *(_DWORD *)(v10 + 12) < (unsigned int)(v79 + 1) )
          {
            (**(void (__fastcall ***)(int))v10)(v10);
            v79 = *(_DWORD *)(v10 + 8);
            v80 = v79 + 1;
          }
          v81 = *(_DWORD *)(v10 + 4);
          *(_DWORD *)(v10 + 8) = v80;
          *(_BYTE *)(v81 + v79) = v8;
          v8 >>= 8;
        }
        while ( v8 );
      }
      v82 = *(_QWORD *)(v10 + 8);
      v83 = ~v32;
      if ( HIDWORD(v82) >= (unsigned int)(v82 - v32) )
      {
        v84 = *(_DWORD *)(v10 + 4);
        *(_DWORD *)(v10 + 8) = v82 - v32;
        if ( v84 )
        {
          v85 = (_BYTE *)(v83 + v82 + HIDWORD(v82));
          do
          {
            *v85-- = v12 & 7 | 0x30;
            v12 = (v12 >> 3) | (v11 << 29);
            v86 = v12 | (v11 >> 3);
            v11 >>= 3;
          }
          while ( v86 );
          return v10;
        }
      }
      v87 = (char *)&v91 + v83;
      v64 = (char *)&v91 - v32;
      do
      {
        *v87-- = v12 & 7 | 0x30;
        v12 = (v12 >> 3) | (v11 << 29);
        v88 = v12 | (v11 >> 3);
        v11 >>= 3;
      }
      while ( v88 );
      return sub_DCF1C((int)&v91, (int)v64, v10);
    case 3:
    case 4:
      v22 = *(_WORD *)(a6 + 9);
      if ( (v22 & 0x80) != 0 )
      {
        v23 = 30768;
        if ( v9 == 4 )
          v23 = 22576;
        if ( a4 )
          v23 <<= 8;
        v13 = (v23 | a4) + 0x2000000;
      }
      v24 = 0;
      v25 = a3;
      v26 = HIDWORD(a3);
      do
      {
        --v24;
        v25 = (v25 >> 4) | (v26 << 28);
        v27 = v25 | (v26 >> 4);
        v26 >>= 4;
      }
      while ( v27 );
      v28 = *(_QWORD *)a6;
      if ( (*(_DWORD *)(a6 + 4) + 1) | *(_DWORD *)a6 )
      {
        v29 = HIBYTE(v13) - v24;
        if ( (v22 & 0xF) == 4 )
        {
          v30 = HIBYTE(v13) - v24;
          v31 = v28 - v29;
          if ( (unsigned int)v28 > v29 )
            v30 = *(_DWORD *)a6;
          if ( (unsigned int)v28 < v29 )
            v31 = 0;
        }
        else if ( SHIDWORD(v28) <= -v24 )
        {
          v31 = 0;
          v30 = HIBYTE(v13) - v24;
        }
        else
        {
          v31 = HIDWORD(v28) + v24;
          v30 = HIDWORD(v28) + HIBYTE(v13);
        }
        v96 = -v24;
        v93 = v31;
        v94 = v12;
        v91 = v13;
        v92 = v30;
        v97 = v9 == 4;
        v95 = v11;
        return sub_E11C8(v10, a6);
      }
      v53 = v13 == 0;
      if ( v13 )
      {
        v8 = v13 & 0xFFFFFF;
        v53 = (v13 & 0xFFFFFF) == 0;
      }
      if ( !v53 )
      {
        do
        {
          v54 = *(_DWORD *)(v10 + 8);
          v55 = v54 + 1;
          if ( *(_DWORD *)(v10 + 12) < (unsigned int)(v54 + 1) )
          {
            (**(void (__fastcall ***)(int))v10)(v10);
            v54 = *(_DWORD *)(v10 + 8);
            v55 = v54 + 1;
          }
          v56 = *(_DWORD *)(v10 + 4);
          *(_DWORD *)(v10 + 8) = v55;
          *(_BYTE *)(v56 + v54) = v8;
          v8 >>= 8;
        }
        while ( v8 );
      }
      v57 = *(_QWORD *)(v10 + 8);
      v58 = ~v24;
      if ( HIDWORD(v57) >= (unsigned int)(v57 - v24) )
      {
        HIDWORD(v57) = *(_DWORD *)(v10 + 4);
        *(_DWORD *)(v10 + 8) = v57 - v24;
        if ( HIDWORD(v57) )
        {
          v59 = (_BYTE *)(v58 + v57 + HIDWORD(v57));
          v60 = "0123456789ABCDEF";
          if ( v9 != 4 )
            v60 = "0123456789abcdef";
          do
          {
            v61 = v12 & 0xF;
            v12 = (v12 >> 4) | (v11 << 28);
            v62 = v12 | (v11 >> 4);
            v11 >>= 4;
            *v59-- = v60[v61];
          }
          while ( v62 );
          return v10;
        }
      }
      v65 = (char *)&v91 + v58;
      v66 = "0123456789ABCDEF";
      if ( v9 != 4 )
        v66 = "0123456789abcdef";
      v64 = (char *)&v91 - v24;
      do
      {
        v67 = v12 & 0xF;
        v12 = (v12 >> 4) | (v11 << 28);
        v68 = v12 | (v11 >> 4);
        v11 >>= 4;
        *v65-- = v66[v67];
      }
      while ( v68 );
      return sub_DCF1C((int)&v91, (int)v64, v10);
    case 5:
    case 6:
      v14 = *(_WORD *)(a6 + 9);
      if ( (v14 & 0x80) != 0 )
      {
        v15 = 25136;
        if ( v9 == 6 )
          v15 = 16944;
        if ( a4 )
          v15 <<= 8;
        v13 = (v15 | a4) + 0x2000000;
      }
      v16 = 0;
      v17 = a3;
      v18 = HIDWORD(a3);
      do
      {
        v42 = v18 & 1;
        v18 >>= 1;
        --v16;
        v17 = (v17 >> 1) | (v42 << 31);
      }
      while ( v17 | v18 );
      v19 = *(_QWORD *)a6;
      if ( (*(_DWORD *)(a6 + 4) + 1) | *(_DWORD *)a6 )
      {
        v20 = HIBYTE(v13) - v16;
        if ( (v14 & 0xF) == 4 )
        {
          LODWORD(a3) = HIBYTE(v13) - v16;
          v21 = v19 - v20;
          if ( (unsigned int)v19 > v20 )
            LODWORD(a3) = *(_DWORD *)a6;
          if ( (unsigned int)v19 < v20 )
            v21 = 0;
        }
        else if ( SHIDWORD(v19) <= -v16 )
        {
          v21 = 0;
          LODWORD(a3) = HIBYTE(v13) - v16;
        }
        else
        {
          v21 = HIDWORD(v19) + v16;
          LODWORD(a3) = HIDWORD(v19) + HIBYTE(v13);
        }
        v93 = v21;
        v96 = -v16;
        v91 = v13;
        v92 = a3;
        v94 = v12;
        v95 = HIDWORD(a3);
        return sub_E1304(v10, a6);
      }
      v45 = v13 == 0;
      if ( v13 )
      {
        v8 = v13 & 0xFFFFFF;
        v45 = (v13 & 0xFFFFFF) == 0;
      }
      if ( !v45 )
      {
        do
        {
          v46 = *(_DWORD *)(v10 + 8);
          v47 = v46 + 1;
          if ( *(_DWORD *)(v10 + 12) < (unsigned int)(v46 + 1) )
          {
            (**(void (__fastcall ***)(int))v10)(v10);
            v46 = *(_DWORD *)(v10 + 8);
            v47 = v46 + 1;
          }
          v48 = *(_DWORD *)(v10 + 4);
          *(_DWORD *)(v10 + 8) = v47;
          *(_BYTE *)(v48 + v46) = v8;
          v8 >>= 8;
        }
        while ( v8 );
      }
      v49 = *(_QWORD *)(v10 + 8);
      v50 = ~v16;
      if ( HIDWORD(v49) < (unsigned int)(v49 - v16)
        || (v51 = *(_DWORD *)(v10 + 4), *(_DWORD *)(v10 + 8) = v49 - v16, !v51) )
      {
        v63 = (char *)&v91 + v50;
        v64 = (char *)&v91 - v16;
        do
        {
          v42 = v11 & 1;
          v11 >>= 1;
          *v63-- = v12 & 1 | 0x30;
          v12 = (v12 >> 1) | (v42 << 31);
        }
        while ( v12 | v11 );
        return sub_DCF1C((int)&v91, (int)v64, v10);
      }
      v52 = (_BYTE *)(v50 + v49 + HIDWORD(v49));
      do
      {
        v42 = v11 & 1;
        v11 >>= 1;
        *v52-- = v12 & 1 | 0x30;
        v12 = (v12 >> 1) | (v42 << 31);
      }
      while ( v12 | v11 );
      return v10;
    case 0xF:
      LOBYTE(v91) = 0;
      BYTE1(v91) = a3;
      return sub_DDF34(a1, a6, 1, 1u, &v91);
    default:
      fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid type specifier", a2);
  }
}


// ======================================================================
// ADDR: 0xe1510
// SYMBOL: sub_E1510
int __fastcall sub_E1510(int a1, unsigned int a2, int a3, int a4)
{
  int v8; // r0
  _BYTE v10[4]; // [sp+8h] [bp-18h] BYREF
  _BYTE v11[20]; // [sp+Ch] [bp-14h] BYREF

  if ( !sub_E157C(a3, (fmt::v8::detail::error_handler *)v10) )
    return sub_DD260(
             a1,
             a2,
             *(_DWORD *)((char *)&unk_91DB0 + ((*(unsigned __int16 *)(a3 + 9) >> 2) & 0x1C)),
             (__int64 *)a3,
             a4);
  v8 = *(unsigned __int8 *)(a3 + 8);
  v11[1] = a2;
  v11[0] = v8 == 18;
  return sub_DDF34(a1, a3, 1, 1u, v11);
}


// ======================================================================
// ADDR: 0xe15d8
// SYMBOL: sub_E15D8
int __fastcall sub_E15D8(int a1, float a2, int a3, int a4, __int64 a5, std::locale *a6)
{
  float v8; // s16
  int v9; // r2
  unsigned int v10; // r4
  int v11; // r1
  float v12; // s0
  int v13; // r0
  char v14; // r4
  int v15; // r1
  int v16; // r2
  char v17; // r0
  int v18; // r0
  int v19; // r4
  int v20; // r0
  size_t v21; // r6
  int v22; // r0
  void *v24; // [sp+10h] [bp-250h] BYREF
  int v25; // [sp+14h] [bp-24Ch]
  int v26; // [sp+18h] [bp-248h]
  _UNKNOWN **v27; // [sp+20h] [bp-240h] BYREF
  void *v28; // [sp+24h] [bp-23Ch]
  int v29; // [sp+28h] [bp-238h]
  int v30; // [sp+2Ch] [bp-234h]
  _BYTE v31[504]; // [sp+30h] [bp-230h] BYREF
  int v32; // [sp+228h] [bp-38h] BYREF
  int v33; // [sp+22Ch] [bp-34h]
  int v34; // [sp+230h] [bp-30h] BYREF
  int v35; // [sp+234h] [bp-2Ch]
  __int64 v36; // [sp+238h] [bp-28h]

  v36 = a5;
  v34 = a3;
  v35 = a4;
  sub_E17E4((int)&v32, (int)&v34, (fmt::v8::detail::error_handler *)&v27);
  v8 = a2;
  v9 = (16 * *(unsigned __int16 *)((char *)&v36 + 1)) & 0x700;
  v10 = v33 & 0xFFFF00FF;
  v11 = (v33 & 0xFFFF00FF) + v9;
  v33 = v11;
  if ( SLODWORD(a2) <= -1 )
  {
    v8 = -a2;
    v10 |= 0x100u;
    goto LABEL_5;
  }
  if ( v9 == 256 )
  {
LABEL_5:
    v33 = v10;
    goto LABEL_6;
  }
  v10 = v11;
LABEL_6:
  v12 = fabsf(v8);
  if ( v12 >= INFINITY && v12 <= INFINITY )
    return sub_DE2CC(a1, 0, v34, v35, v36, (int)&v32);
  if ( (BYTE1(v36) & 0xF) == 4 && (v10 & 0xFF00) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 8);
    v14 = byte_91D45[BYTE1(v10)];
    v15 = v13 + 1;
    if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v13 + 1) )
    {
      (**(void (__fastcall ***)(int))a1)(a1);
      v13 = *(_DWORD *)(a1 + 8);
      v15 = v13 + 1;
    }
    v16 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 8) = v15;
    *(_BYTE *)(v16 + v13) = v14;
    v10 = v33 & 0xFFFF00FF;
    v33 &= 0xFFFF00FF;
    if ( v34 )
      --v34;
  }
  v30 = 500;
  v29 = 0;
  v28 = v31;
  v27 = &off_22A5C8;
  if ( (unsigned __int8)v10 == 3 )
  {
    if ( (v10 & 0xFF00) != 0 )
    {
      v17 = byte_91D45[BYTE1(v10)];
      v29 = 1;
      v31[0] = v17;
    }
    sub_E1894(COERCE_UNSIGNED_INT64(v8), HIDWORD(COERCE_UNSIGNED_INT64(v8)), v35, v32, v10, &v27);
    v24 = v28;
    v25 = v29;
    v18 = sub_E1A8C(a1, &v34, v29, v29, &v24);
  }
  else
  {
    v20 = v35;
    if ( (_BYTE)v36 )
      v20 = 6;
    if ( v35 > -1 )
      v20 = v35;
    if ( (unsigned __int8)v10 == 1 )
    {
      if ( v20 == 0x7FFFFFFF )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"number is too big", (const char *)0x7FFFFFFF);
      v21 = v20 + 1;
    }
    else
    {
      v21 = v20;
      if ( !v20 )
        v21 = 1;
      if ( (unsigned __int8)v10 == 2 )
        v21 = v20;
    }
    v33 = v10 | 0x40000;
    v22 = fmt::v8::detail::format_float<double>(
            COERCE_UNSIGNED_INT64(v8),
            HIDWORD(COERCE_UNSIGNED_INT64(v8)),
            v21,
            v32,
            v10 | 0x40000,
            (int)&v27);
    v32 = v21;
    v26 = v22;
    v24 = v28;
    v25 = v29;
    v18 = sub_E1AF4(a1, (int)&v24, (int)&v34, v21, v33, a6);
  }
  v19 = v18;
  if ( v28 != v31 )
    operator delete(v28);
  return v19;
}


// ======================================================================
// ADDR: 0xe22b8
// SYMBOL: sub_E22B8
int __fastcall sub_E22B8(int a1, double a2, __int64 a3, __int64 a4, std::locale *a5)
{
  double v8; // d8
  int v9; // r2
  unsigned int v10; // r4
  int v11; // r1
  double v12; // d17
  int v13; // r0
  char v14; // r4
  int v15; // r1
  int v16; // r2
  char v17; // r0
  int v18; // r0
  int v19; // r4
  int v20; // r0
  size_t v21; // r6
  int v22; // r0
  void *v24; // [sp+10h] [bp-250h] BYREF
  int v25; // [sp+14h] [bp-24Ch]
  int v26; // [sp+18h] [bp-248h]
  _UNKNOWN **v27; // [sp+20h] [bp-240h] BYREF
  void *v28; // [sp+24h] [bp-23Ch]
  int v29; // [sp+28h] [bp-238h]
  int v30; // [sp+2Ch] [bp-234h]
  _BYTE v31[504]; // [sp+30h] [bp-230h] BYREF
  int v32; // [sp+228h] [bp-38h] BYREF
  int v33; // [sp+22Ch] [bp-34h]
  __int64 v34; // [sp+230h] [bp-30h] BYREF
  __int64 v35; // [sp+238h] [bp-28h]

  v35 = a4;
  v34 = a3;
  sub_E17E4(&v32, (int)&v34, (fmt::v8::detail::error_handler *)&v27);
  v8 = a2;
  v9 = (16 * *(unsigned __int16 *)((char *)&v35 + 1)) & 0x700;
  v10 = v33 & 0xFFFF00FF;
  v11 = (v33 & 0xFFFF00FF) + v9;
  v33 = v11;
  if ( SHIDWORD(a2) <= -1 )
  {
    v8 = -v8;
    v10 |= 0x100u;
    goto LABEL_5;
  }
  if ( v9 == 256 )
  {
LABEL_5:
    v33 = v10;
    goto LABEL_6;
  }
  v10 = v11;
LABEL_6:
  v12 = fabs(v8);
  if ( v12 >= INFINITY && v12 <= INFINITY )
    return sub_DE2CC(a1, 0, v34, SHIDWORD(v34), v35, (int)&v32);
  if ( (BYTE1(v35) & 0xF) == 4 && (v10 & 0xFF00) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 8);
    v14 = byte_91D45[BYTE1(v10)];
    v15 = v13 + 1;
    if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v13 + 1) )
    {
      (**(void (__fastcall ***)(int))a1)(a1);
      v13 = *(_DWORD *)(a1 + 8);
      v15 = v13 + 1;
    }
    v16 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 8) = v15;
    *(_BYTE *)(v16 + v13) = v14;
    v10 = v33 & 0xFFFF00FF;
    v33 &= 0xFFFF00FF;
    if ( (_DWORD)v34 )
      LODWORD(v34) = v34 - 1;
  }
  v30 = 500;
  v29 = 0;
  v28 = v31;
  v27 = &off_22A5C8;
  if ( (unsigned __int8)v10 == 3 )
  {
    if ( (v10 & 0xFF00) != 0 )
    {
      v17 = byte_91D45[BYTE1(v10)];
      v29 = 1;
      v31[0] = v17;
    }
    sub_E1894(SLODWORD(v8), SHIDWORD(v8), SHIDWORD(v34), v32, v10, (int)&v27);
    v24 = v28;
    v25 = v29;
    v18 = sub_E1A8C(a1, (int)&v34, v29, v29, (int)&v24);
  }
  else
  {
    v20 = HIDWORD(v34);
    if ( (_BYTE)v35 )
      v20 = 6;
    if ( SHIDWORD(v34) > -1 )
      v20 = HIDWORD(v34);
    if ( (unsigned __int8)v10 == 1 )
    {
      if ( v20 == 0x7FFFFFFF )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"number is too big", (const char *)0x7FFFFFFF);
      v21 = v20 + 1;
    }
    else
    {
      v21 = v20;
      if ( !v20 )
        v21 = 1;
      if ( (unsigned __int8)v10 == 2 )
        v21 = v20;
    }
    v22 = fmt::v8::detail::format_float<double>(SLODWORD(v8), SHIDWORD(v8), v21, v32, v10, (int)&v27);
    v32 = v21;
    v26 = v22;
    v24 = v28;
    v25 = v29;
    v18 = sub_E1AF4(a1, (int *)&v24, (int *)&v34, v21, v33, a5);
  }
  v19 = v18;
  if ( v28 != v31 )
    operator delete(v28);
  return v19;
}


// ======================================================================
// ADDR: 0xe24c0
// SYMBOL: sub_E24C0
int __fastcall sub_E24C0(int a1, double a2, __int64 a3, __int64 a4, std::locale *a5)
{
  double v8; // d8
  int v9; // r2
  unsigned int v10; // r4
  int v11; // r1
  double v12; // d17
  int v13; // r0
  char v14; // r4
  int v15; // r1
  int v16; // r2
  char v17; // r0
  int v18; // r0
  int v19; // r4
  int v20; // r0
  size_t v21; // r6
  int v22; // r0
  void *v24; // [sp+10h] [bp-250h] BYREF
  int v25; // [sp+14h] [bp-24Ch]
  int v26; // [sp+18h] [bp-248h]
  _UNKNOWN **v27; // [sp+20h] [bp-240h] BYREF
  void *v28; // [sp+24h] [bp-23Ch]
  int v29; // [sp+28h] [bp-238h]
  int v30; // [sp+2Ch] [bp-234h]
  _BYTE v31[504]; // [sp+30h] [bp-230h] BYREF
  int v32; // [sp+228h] [bp-38h] BYREF
  int v33; // [sp+22Ch] [bp-34h]
  __int64 v34; // [sp+230h] [bp-30h] BYREF
  __int64 v35; // [sp+238h] [bp-28h]

  v35 = a4;
  v34 = a3;
  sub_E17E4(&v32, (int)&v34, (fmt::v8::detail::error_handler *)&v27);
  v8 = a2;
  v9 = (16 * *(unsigned __int16 *)((char *)&v35 + 1)) & 0x700;
  v10 = v33 & 0xFFFF00FF;
  v11 = (v33 & 0xFFFF00FF) + v9;
  v33 = v11;
  if ( SHIDWORD(a2) <= -1 )
  {
    v8 = -v8;
    v10 |= 0x100u;
    goto LABEL_5;
  }
  if ( v9 == 256 )
  {
LABEL_5:
    v33 = v10;
    goto LABEL_6;
  }
  v10 = v11;
LABEL_6:
  v12 = fabs(v8);
  if ( v12 >= INFINITY && v12 <= INFINITY )
    return sub_DE2CC(a1, 0, v34, SHIDWORD(v34), v35, (int)&v32);
  if ( (BYTE1(v35) & 0xF) == 4 && (v10 & 0xFF00) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 8);
    v14 = byte_91D45[BYTE1(v10)];
    v15 = v13 + 1;
    if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v13 + 1) )
    {
      (**(void (__fastcall ***)(int))a1)(a1);
      v13 = *(_DWORD *)(a1 + 8);
      v15 = v13 + 1;
    }
    v16 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 8) = v15;
    *(_BYTE *)(v16 + v13) = v14;
    v10 = v33 & 0xFFFF00FF;
    v33 &= 0xFFFF00FF;
    if ( (_DWORD)v34 )
      LODWORD(v34) = v34 - 1;
  }
  v30 = 500;
  v29 = 0;
  v28 = v31;
  v27 = &off_22A5C8;
  if ( (unsigned __int8)v10 == 3 )
  {
    if ( (v10 & 0xFF00) != 0 )
    {
      v17 = byte_91D45[BYTE1(v10)];
      v29 = 1;
      v31[0] = v17;
    }
    sub_E1894(SLODWORD(v8), SHIDWORD(v8), SHIDWORD(v34), v32, v10, (int)&v27);
    v24 = v28;
    v25 = v29;
    v18 = sub_E1A8C(a1, (int)&v34, v29, v29, (int)&v24);
  }
  else
  {
    v20 = HIDWORD(v34);
    if ( (_BYTE)v35 )
      v20 = 6;
    if ( SHIDWORD(v34) > -1 )
      v20 = HIDWORD(v34);
    if ( (unsigned __int8)v10 == 1 )
    {
      if ( v20 == 0x7FFFFFFF )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"number is too big", (const char *)0x7FFFFFFF);
      v21 = v20 + 1;
    }
    else
    {
      v21 = v20;
      if ( !v20 )
        v21 = 1;
      if ( (unsigned __int8)v10 == 2 )
        v21 = v20;
    }
    v22 = fmt::v8::detail::format_float<double>(SLODWORD(v8), SHIDWORD(v8), v21, v32, v10, (int)&v27);
    v32 = v21;
    v26 = v22;
    v24 = v28;
    v25 = v29;
    v18 = sub_E1AF4(a1, (int *)&v24, (int *)&v34, v21, v33, a5);
  }
  v19 = v18;
  if ( v28 != v31 )
    operator delete(v28);
  return v19;
}


// ======================================================================
// ADDR: 0xe26c8
// SYMBOL: sub_E26C8
int __fastcall sub_E26C8(int a1, char *s, int a3)
{
  int v4; // r0
  unsigned int v7; // r0
  size_t v9; // r2
  unsigned int v10; // r0
  _BYTE v11[4]; // [sp+8h] [bp-20h] BYREF
  _BYTE v12[4]; // [sp+Ch] [bp-1Ch] BYREF
  __int64 v13; // [sp+10h] [bp-18h] BYREF

  v4 = *(unsigned __int8 *)(a3 + 8);
  if ( (unsigned int)(v4 - 16) >= 2 && *(_BYTE *)(a3 + 8) )
    fmt::v8::detail::error_handler::on_error(
      (fmt::v8::detail::error_handler *)v11,
      (fmt::v8::detail *)"invalid type specifier");
  if ( (v4 & 0xEF) != 0 )
  {
    v7 = __clz((unsigned int)s | 1);
    LODWORD(v13) = s;
    HIDWORD(v13) = 8 - (v7 >> 2);
    return sub_DFB10(a1, a3, 10 - (v7 >> 2), 10 - (v7 >> 2), &v13);
  }
  else
  {
    v9 = strlen(s);
    v10 = *(unsigned __int8 *)(a3 + 8);
    if ( v10 > 0x12 || ((1 << v10) & 0x50001) == 0 )
      fmt::v8::detail::error_handler::on_error(
        (fmt::v8::detail::error_handler *)v12,
        (fmt::v8::detail *)"invalid type specifier");
    return sub_E2768(a1, s, v9, a3);
  }
}


// ======================================================================
// ADDR: 0xe2768
// SYMBOL: sub_E2768
int __fastcall sub_E2768(int a1, int a2, unsigned int a3, __int64 *a4)
{
  __int64 v6; // r0
  int v7; // r10
  unsigned int v8; // r6
  int v11; // r3
  _DWORD v13[11]; // [sp+4h] [bp-2Ch] BYREF

  v6 = *a4;
  v7 = *((unsigned __int8 *)a4 + 8);
  v8 = a3;
  if ( *((_DWORD *)a4 + 1) < a3 )
    v8 = *((_DWORD *)a4 + 1);
  if ( SHIDWORD(v6) <= -1 )
    v8 = a3;
  if ( (_DWORD)v6 )
  {
    if ( v7 == 18 )
    {
      v11 = sub_E27E6(0, a2, a3);
    }
    else
    {
      v13[0] = 0;
      sub_E2B90(a2, v8, v13);
      v11 = v13[0];
    }
  }
  else
  {
    v11 = 0;
  }
  v13[3] = a2;
  v13[4] = v8;
  v13[1] = a2;
  v13[2] = a3;
  LOBYTE(v13[0]) = v7 == 18;
  return ((int (__fastcall *)(int, __int64 *, unsigned int, int, _DWORD *))sub_E284C)(a1, a4, v8, v11, v13);
}


// ======================================================================

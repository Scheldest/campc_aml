// ADDR: 0xe17e4
// SYMBOL: sub_E17E4
_DWORD *__fastcall sub_E17E4(_DWORD *result, int a2, fmt::v8::detail::error_handler *this)
{
  unsigned int v3; // r4
  int v4; // r3
  int v5; // lr
  int v6; // r12
  unsigned int v7; // r1

  v3 = *(unsigned __int16 *)(a2 + 9);
  v4 = *(unsigned __int8 *)(a2 + 8);
  v5 = ((v3 >> 7) & 1) << 19;
  v6 = v5 | (((v3 >> 8) & 1) << 17);
  *result = 0;
  result[1] = v6;
  switch ( v4 )
  {
    case 0:
      return result;
    case 7:
      goto LABEL_3;
    case 8:
      v6 |= 0x10000u;
LABEL_3:
      v7 = v6 & 0xFFFFFF00 | 3;
      goto LABEL_14;
    case 9:
      goto LABEL_5;
    case 10:
      v6 |= 0x10000u;
LABEL_5:
      if ( *(_DWORD *)(a2 + 4) )
        v5 = 0x80000;
      v7 = v6 & 0xFFF7FF00 | v5 | 1;
      goto LABEL_14;
    case 11:
      goto LABEL_9;
    case 12:
      v6 |= 0x10000u;
LABEL_9:
      if ( *(_DWORD *)(a2 + 4) )
        v5 = 0x80000;
      v7 = v6 & 0xFFF7FF00 | v5 | 2;
      goto LABEL_14;
    case 13:
      goto LABEL_13;
    case 14:
      v6 |= 0x10000u;
LABEL_13:
      v7 = v6 & 0xFFFFFF00;
LABEL_14:
      result[1] = v7;
      return result;
    default:
      fmt::v8::detail::error_handler::on_error(this, (fmt::v8::detail *)"invalid type specifier");
  }
}


// ======================================================================
// ADDR: 0xe1894
// SYMBOL: sub_E1894
int __fastcall sub_E1894(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r10
  char *v7; // r2
  int v8; // r3
  int v11; // r11
  int v12; // r6
  unsigned int v13; // r5
  int v14; // r0
  unsigned int v15; // r4
  unsigned int v16; // r0
  int v17; // r0
  int v18; // r5
  int v19; // r1
  unsigned int v20; // r0
  unsigned int v21; // r4
  int result; // r0
  int v23; // r0
  int v24; // r1
  int v25; // r3
  unsigned int v26; // r2
  size_t v27; // r4
  int v28; // r5
  int v29; // r12
  int v30; // r3
  int v31; // r3
  int v32; // r1
  unsigned int v33; // r0
  unsigned int v34; // r6
  int v35; // [sp+Ch] [bp-34h]
  char format; // [sp+11h] [bp-2Fh] BYREF
  char v37; // [sp+12h] [bp-2Eh] BYREF
  char v38; // [sp+13h] [bp-2Dh] BYREF

  v6 = 5;
  format = 37;
  if ( a3 > -1 )
    v6 = a3 - 1;
  if ( (unsigned __int8)a5 >= 2u )
    v6 = a3;
  v7 = &v37;
  if ( (a5 & 0x80000) != 0 && (unsigned __int8)a5 == 3 )
  {
    v37 = 35;
    v7 = &v38;
  }
  if ( v6 >= 0 )
  {
    *(_WORD *)v7 = 10798;
    v7 += 2;
  }
  if ( (unsigned __int8)a5 == 3 )
  {
    v8 = 65;
    if ( (a5 & 0x10000) == 0 )
      v8 = 97;
  }
  else
  {
    v8 = 101;
    if ( (unsigned __int8)a5 == 2 )
      v8 = 102;
  }
  v7[1] = 0;
  *v7 = v8;
  v11 = *(_DWORD *)(a6 + 8);
  v35 = v11 + 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(a6 + 4) + v11;
      v13 = *(_DWORD *)(a6 + 12) - v11;
      v14 = v6 < 0
          ? snprintf((char *)(*(_DWORD *)(a6 + 4) + v11), *(_DWORD *)(a6 + 12) - v11, &format, v8, a1, a2)
          : snprintf((char *)(*(_DWORD *)(a6 + 4) + v11), *(_DWORD *)(a6 + 12) - v11, &format, v6, a1, a2);
      v15 = v14;
      if ( v14 > -1 )
        break;
      if ( *(_DWORD *)(a6 + 12) != -1 )
        goto LABEL_25;
    }
    if ( v14 < v13 )
      break;
    if ( *(_DWORD *)(a6 + 12) < (unsigned int)(v35 + v14) )
LABEL_25:
      (**(void (__fastcall ***)(int))a6)(a6);
  }
  if ( (unsigned __int8)a5 == 2 )
  {
    if ( v6 )
    {
      v17 = v12 + v14;
      v18 = 0;
      do
        v19 = v17 + v18--;
      while ( (unsigned int)*(unsigned __int8 *)(v19 - 1) - 48 < 0xA );
      j_memmove((void *)(v17 + v18), (const void *)(v17 + v18 + 1), ~v18);
      v20 = *(_DWORD *)(a6 + 12);
      v21 = v15 - 1;
      if ( v20 < v21 )
      {
        (**(void (__fastcall ***)(int, unsigned int))a6)(a6, v21);
        v20 = *(_DWORD *)(a6 + 12);
      }
      if ( v20 < v21 )
        v21 = v20;
      *(_DWORD *)(a6 + 8) = v21;
      return v18 + 1;
    }
    else
    {
      v16 = *(_DWORD *)(a6 + 12);
LABEL_53:
      if ( v16 < v15 )
      {
        (**(void (__fastcall ***)(int, unsigned int))a6)(a6, v15);
        v16 = *(_DWORD *)(a6 + 12);
      }
      if ( v16 < v15 )
        v15 = v16;
      *(_DWORD *)(a6 + 8) = v15;
      return 0;
    }
  }
  else
  {
    if ( (unsigned __int8)a5 == 3 )
    {
      v16 = *(_DWORD *)(a6 + 12);
      v15 += v11;
      goto LABEL_53;
    }
    v23 = v12 + v14;
    v24 = 2;
    do
      v25 = v12 + v15 - 1 + v24--;
    while ( *(_BYTE *)(v25 - 2) != 101 );
    v26 = v15 + v24;
    v27 = v15 + v24 - 3;
    v28 = 0;
    v29 = *(unsigned __int8 *)(v23 + v24 - 1);
    do
    {
      v30 = *(unsigned __int8 *)(v23 + v24++);
      v31 = v30 + 10 * v28;
      v28 = v31 - 48;
    }
    while ( v24 );
    if ( v29 == 45 )
      v28 = 48 - v31;
    if ( v26 == 3 )
    {
      v27 = 0;
    }
    else
    {
      do
        v32 = *(unsigned __int8 *)(v12 + v27--);
      while ( v32 == 48 );
      j_memmove((void *)(v12 + 1), (const void *)(v12 + 2), v27);
    }
    v33 = *(_DWORD *)(a6 + 12);
    v34 = v35 + v27;
    if ( v33 < v35 + v27 )
    {
      (**(void (__fastcall ***)(int, int))a6)(a6, v35 + v27);
      v33 = *(_DWORD *)(a6 + 12);
    }
    if ( v33 < v34 )
      v34 = v33;
    result = v28 - v27;
    *(_DWORD *)(a6 + 8) = v34;
  }
  return result;
}


// ======================================================================
// ADDR: 0xe1a8c
// SYMBOL: sub_E1A8C
int __fastcall sub_E1A8C(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r8
  bool v7; // cf
  unsigned int v8; // r3
  char v9; // r0
  int v10; // r5
  int result; // r0

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 >= a4;
  v8 = *(_DWORD *)a2 - a4;
  v9 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( !v7 )
    v8 = 0;
  v10 = v8 - (v8 >> v9);
  if ( v8 >> v9 )
    a1 = sub_DD992(a1, v8 >> v9, v6);
  sub_DCF30(a1, *(char **)a5, (char *)(*(_DWORD *)a5 + *(_DWORD *)(a5 + 4)));
  result = a1;
  if ( v10 )
    return sub_DD992(a1, v10, v6);
  return result;
}


// ======================================================================
// ADDR: 0xe1af4
// SYMBOL: sub_E1AF4
int __fastcall sub_E1AF4(int a1, int *a2, int *a3, int a4, unsigned int a5, std::locale *a6)
{
  unsigned __int64 v8; // kr00_8
  int v9; // r11
  int v10; // r0
  int v11; // r2
  int v12; // r5
  int v13; // r3
  int v14; // r0
  int v15; // r8
  int v16; // r2
  int v17; // r3
  char v18; // r1
  int v19; // r1
  bool v20; // zf
  int v21; // r0
  int v22; // r1
  int v24; // r5
  unsigned __int8 *v25; // r0
  int v26; // r0
  int v27; // r0
  unsigned __int8 *v28; // r0
  int v29; // r0
  int v30; // r4
  int v31; // r3
  int v32; // r0
  int v33; // r1
  int *v36; // [sp+8h] [bp-78h] BYREF
  unsigned __int64 v37; // [sp+Ch] [bp-74h]
  int *v38; // [sp+14h] [bp-6Ch]
  char *v39; // [sp+18h] [bp-68h]
  int *v40; // [sp+1Ch] [bp-64h]
  int *v41; // [sp+20h] [bp-60h]
  char *v42; // [sp+24h] [bp-5Ch]
  char *v43; // [sp+28h] [bp-58h]
  _DWORD v44[4]; // [sp+2Ch] [bp-54h] BYREF
  int v45; // [sp+3Ch] [bp-44h] BYREF
  int v46; // [sp+40h] [bp-40h] BYREF
  char v47; // [sp+47h] [bp-39h] BYREF
  int v48; // [sp+48h] [bp-38h] BYREF
  char v49; // [sp+4Fh] [bp-31h] BYREF
  int v50; // [sp+50h] [bp-30h] BYREF
  int v51; // [sp+54h] [bp-2Ch] BYREF
  int v52; // [sp+58h] [bp-28h] BYREF
  unsigned int v53; // [sp+5Ch] [bp-24h]

  v8 = *(_QWORD *)a2;
  v9 = a2[1];
  v52 = a4;
  v53 = a5;
  v50 = HIDWORD(v8);
  v51 = v8;
  v49 = 48;
  v48 = BYTE1(a5);
  if ( BYTE1(a5) )
    v9 = HIDWORD(v8) + 1;
  if ( (a5 & 0x20000) != 0 )
    v10 = fmt::v8::detail::decimal_point_impl<char>(a6);
  else
    v10 = 46;
  v11 = a2[2];
  v12 = HIDWORD(v8) + v11;
  v47 = v10;
  if ( (unsigned __int8)v53 == 1 )
    goto LABEL_17;
  if ( !(_BYTE)v53 )
  {
    v13 = v52;
    if ( v52 <= 0 )
      v13 = 16;
    if ( v12 < -3 || v12 > v13 )
    {
LABEL_17:
      v16 = v12 - 1;
      if ( (v53 & 0x80000) != 0 )
      {
        v17 = (v52 - HIDWORD(v8)) & ~((v52 - HIDWORD(v8)) >> 31);
        v9 += v17;
      }
      else
      {
        v17 = 0;
        if ( HIDWORD(v8) == 1 )
        {
          v47 = 0;
          v10 = 0;
        }
      }
      v41 = (int *)(v12 - 1);
      v18 = 69;
      if ( (v53 & 0x10000) == 0 )
        v18 = 101;
      BYTE1(v40) = v18;
      LOBYTE(v40) = 48;
      v19 = *a3;
      v39 = (char *)v17;
      LOBYTE(v38) = v10;
      v36 = (int *)BYTE1(a5);
      v37 = v8;
      if ( v12 <= 0 )
        v16 = 1 - v12;
      if ( v19 < 1 )
        return sub_E1D84(&v36, a1, v16);
      v20 = v10 == 0;
      v21 = 3;
      v22 = 3;
      if ( v20 )
        v21 = 2;
      if ( v16 >= 1000 )
        v22 = 4;
      if ( v16 <= 99 )
        v22 = 2;
      return sub_E1E10(a1, a3, v22 + v9 + v21, v22 + v9 + v21, &v36);
    }
  }
  v46 = HIDWORD(v8) + v11;
  if ( v11 < 0 )
  {
    if ( v12 >= 1 )
    {
      v24 = (v52 - HIDWORD(v8)) & ((int)(v53 << 12) >> 31);
      v45 = v24;
      v25 = sub_DD758((unsigned __int8 *)v44, (int)a6, (v53 >> 17) & 1);
      v26 = sub_DD86C(v25, SHIDWORD(v8));
      v42 = &v49;
      v40 = v44;
      v41 = &v45;
      v39 = &v47;
      v38 = &v46;
      HIDWORD(v37) = &v50;
      LODWORD(v37) = &v51;
      v36 = &v48;
      if ( v24 > 0 )
        v9 += v24;
      v27 = sub_E2060(a1, a3, v26 + v9 + 1, v26 + v9 + 1, &v36);
      goto LABEL_42;
    }
    v31 = -v12;
    if ( v52 < -v12 )
      v31 = v52;
    if ( v52 <= -1 )
      v31 = -v12;
    if ( HIDWORD(v8) )
      v31 = -v12;
    v44[0] = v31;
    if ( v31 | HIDWORD(v8) )
    {
      v32 = a1;
      LOBYTE(v45) = 1;
    }
    else
    {
      v32 = a1;
      LOBYTE(v45) = (v53 & 0x80000) != 0;
      if ( (v53 & 0x80000) == 0 )
      {
        v33 = 1;
LABEL_55:
        v41 = &v50;
        v40 = &v51;
        v39 = (char *)v44;
        v38 = (int *)&v47;
        HIDWORD(v37) = &v45;
        LODWORD(v37) = &v49;
        v36 = &v48;
        return sub_E21B0(v32, a3, v31 + v9 + v33, v31 + v9 + v33, &v36);
      }
    }
    v33 = 2;
    goto LABEL_55;
  }
  v14 = v52 - v12;
  v15 = v11 + v9;
  v45 = v52 - v12;
  if ( (v53 & 0x80000) != 0 )
  {
    ++v15;
    if ( v14 > 0 || (unsigned __int8)v53 == 2 )
    {
      if ( v14 >= 1 )
        v15 += v14;
    }
    else
    {
      ++v15;
      v45 = 1;
    }
  }
  v28 = sub_DD758((unsigned __int8 *)v44, (int)a6, (v53 >> 17) & 1);
  v29 = sub_DD86C(v28, v12);
  v43 = &v49;
  v42 = (char *)&v45;
  v41 = (int *)&v47;
  v40 = &v52;
  HIDWORD(v37) = &v50;
  LODWORD(v37) = &v51;
  v38 = a2;
  v39 = (char *)v44;
  v36 = &v48;
  v27 = sub_E1EC8(a1, a3, v29 + v15, v29 + v15, &v36);
LABEL_42:
  v30 = v27;
  if ( LOBYTE(v44[0]) << 31 )
    operator delete((void *)v44[2]);
  return v30;
}


// ======================================================================

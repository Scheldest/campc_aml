// ADDR: 0xdff58
// SYMBOL: sub_DFF58
unsigned __int8 *__fastcall sub_DFF58(_DWORD *a1, int a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  int *v4; // r8
  unsigned __int8 **v8; // r6
  int v9; // t1
  char *v10; // r0
  char *v11; // r3
  int v12; // r1
  unsigned __int8 *v13; // r9
  int v14; // r0
  int v15; // r0
  unsigned __int8 *v16; // r0
  unsigned __int8 *v17; // r5
  int v18; // r0
  int v19; // r1
  int v20; // r0
  unsigned __int8 *v21; // r0
  int v22; // r0
  unsigned __int8 *v23; // r0
  int v24; // r0
  int v25; // r3
  unsigned int v26; // r1
  unsigned int v27; // r2
  unsigned int v28; // r2
  char *v29; // r1
  int v30; // r2
  int v31; // r6
  _DWORD v33[3]; // [sp+18h] [bp-50h] BYREF
  int v34; // [sp+24h] [bp-44h]
  __int64 v35; // [sp+28h] [bp-40h] BYREF
  __int64 v36; // [sp+30h] [bp-38h]
  char *s[2]; // [sp+38h] [bp-30h] BYREF
  int v38; // [sp+40h] [bp-28h]
  _BYTE v39[28]; // [sp+4Ch] [bp-1Ch] BYREF

  v4 = a1 + 4;
  sub_E0290(s, a1 + 4, a2);
  if ( v38 == 15 )
  {
    v9 = a1[1];
    v8 = (unsigned __int8 **)(a1 + 1);
    v10 = s[0];
    v11 = s[1];
    v12 = (int)&v8[1][v9 - (_DWORD)a3];
    *v8 = a3;
    v8[1] = (unsigned __int8 *)v12;
    ((void (__fastcall *)(char *, unsigned __int8 **, int *))v11)(v10, v8, v4);
    return *v8;
  }
  v33[2] = v4;
  v34 = v38;
  v36 = 0x100000020000000LL;
  v33[1] = a1 + 1;
  v35 = 0xFFFFFFFF00000000LL;
  v33[0] = &v35;
  if ( a4 - a3 >= 2 )
  {
    v13 = a3 + 1;
    if ( a3[1] == 125 )
    {
      v14 = *a3;
      if ( (v14 & 0xDFu) - 91 >= 0xFFFFFFE6 && v14 != 76 )
      {
        v15 = sub_E0498();
        if ( !v15 )
LABEL_65:
          fmt::v8::detail::error_handler::on_error(
            (fmt::v8::detail::error_handler *)v39,
            (fmt::v8::detail *)"invalid type specifier");
        goto LABEL_36;
      }
    }
  }
  if ( a3 == a4 )
    goto LABEL_63;
  v16 = (unsigned __int8 *)sub_E0524(a3, a4, v33);
  if ( v16 == a4 )
    goto LABEL_63;
  v17 = v16;
  v18 = *v16;
  switch ( v18 )
  {
    case ' ':
      v19 = 3;
      break;
    case '+':
      v19 = 2;
      break;
    case '-':
      v19 = 1;
      break;
    default:
      goto LABEL_18;
  }
  sub_E05B4(v33, v19);
  ++v17;
LABEL_18:
  if ( v17 == a4 )
    goto LABEL_63;
  v20 = *v17;
  if ( v20 == 35 )
  {
    if ( (unsigned int)(v34 - 1) >= 0xB )
      goto LABEL_64;
    ++v17;
    *(_WORD *)(v33[0] + 9) |= 0x80u;
    if ( v17 == a4 )
      goto LABEL_63;
    v20 = *v17;
  }
  if ( v20 == 48 && (sub_E060C(v33), ++v17, v17 == a4) || (v21 = (unsigned __int8 *)sub_E0648(v17, a4, v33), v21 == a4) )
LABEL_63:
    fmt::v8::detail::error_handler::on_error(
      (fmt::v8::detail::error_handler *)a1,
      (fmt::v8::detail *)"missing '}' in format string");
  v13 = v21;
  v22 = *v21;
  if ( v22 == 46 )
  {
    v23 = (unsigned __int8 *)sub_E06D8(v13, a4, v33);
    if ( v23 == a4 )
      goto LABEL_63;
    v13 = v23;
    v22 = *v23;
  }
  if ( v22 == 76 )
  {
    if ( (unsigned int)(v34 - 1) < 0xB )
    {
      ++v13;
      *(_WORD *)(v33[0] + 9) |= 0x100u;
      goto LABEL_32;
    }
LABEL_64:
    fmt::v8::detail::error_handler::on_error(
      (fmt::v8::detail::error_handler *)v39,
      (fmt::v8::detail *)"format specifier requires numeric argument");
  }
LABEL_32:
  if ( v13 == a4 )
    goto LABEL_63;
  if ( *v13 != 125 )
  {
    v15 = sub_E0498();
    if ( !v15 )
      goto LABEL_65;
    ++v13;
LABEL_36:
    *(_BYTE *)(v33[0] + 8) = v15;
  }
  if ( v13 == a4 || *v13 != 125 )
    goto LABEL_63;
  v24 = a1[4];
  v25 = a1[10];
  switch ( v38 )
  {
    case 1:
      v26 = (unsigned int)s[0];
      if ( (int)s[0] <= -1 )
      {
        v28 = 16777261;
        v26 = -(int)s[0];
      }
      else
      {
        v27 = *(unsigned __int16 *)((char *)&v36 + 1);
LABEL_43:
        v28 = *(_DWORD *)((char *)&unk_91DB0 + ((v27 >> 2) & 0x1C));
      }
      v24 = sub_DD260(v24, v26, v28, &v35, v25);
      break;
    case 2:
      v27 = *(unsigned __int16 *)((char *)&v36 + 1);
      v26 = (unsigned int)s[0];
      goto LABEL_43;
    case 3:
      v30 = (int)s[0];
      v29 = s[1];
      if ( (int)s[1] <= -1 )
      {
        v30 = -(int)s[0];
        v29 = (char *)(-*(_QWORD *)s >> 32);
        v31 = 16777261;
      }
      else
      {
        v31 = *(_DWORD *)((char *)&unk_91DB0 + ((*(unsigned __int16 *)((char *)&v36 + 1) >> 2) & 0x1C));
      }
      v24 = sub_E0BA0(v24, v29, v30, v29, v31, 0, &v35, v25);
      break;
    case 4:
      v24 = sub_E0BA0(
              v24,
              s[1],
              s[0],
              s[1],
              *(_DWORD *)((char *)&unk_91DB0 + ((*(unsigned __int16 *)((char *)&v36 + 1) >> 2) & 0x1C)),
              0,
              &v35,
              v25);
      break;
    case 7:
      v24 = sub_DD1E8(v24, LOBYTE(s[0]), (int)&v35);
      break;
    case 8:
      v24 = sub_E1510(v24, LOBYTE(s[0]), (int)&v35);
      break;
    case 9:
      v24 = sub_E15D8(v24, s[0], v35, HIDWORD(v35), v36, HIDWORD(v36), v25);
      break;
    case 10:
      v24 = sub_E22B8(v24, HIDWORD(v36), s[0], s[1], v35, HIDWORD(v35), v36, HIDWORD(v36), v25);
      break;
    case 11:
      v24 = sub_E24C0(v24, HIDWORD(v36), s[0], s[1], v35, HIDWORD(v35), v36, HIDWORD(v36), v25);
      break;
    case 12:
      v24 = sub_E26C8(v24, s[0]);
      break;
    case 13:
      if ( (unsigned __int8)v36 > 0x12u || ((1 << v36) & 0x50001) == 0 )
        goto LABEL_65;
      v24 = sub_E2768(v24, s[0], s[1], &v35);
      break;
    case 14:
      v24 = sub_DFACC(v24, (int)s[0], (int)&v35);
      break;
    default:
      break;
  }
  *v4 = v24;
  return v13;
}


// ======================================================================
// ADDR: 0xe0290
// SYMBOL: sub_E0290
int __fastcall sub_E0290(int a1, int a2, int a3)
{
  int result; // r0
  _BYTE v5[12]; // [sp+4h] [bp-Ch] BYREF

  sub_DCD26(a1, (__int64 *)(a2 + 8), a3);
  result = *(_DWORD *)(a1 + 8);
  if ( !result )
    fmt::v8::detail::error_handler::on_error(
      (fmt::v8::detail::error_handler *)v5,
      (fmt::v8::detail *)"argument not found");
  return result;
}


// ======================================================================
// ADDR: 0xe02b4
// SYMBOL: sub_E02B4
unsigned __int8 *__fastcall sub_E02B4(unsigned __int8 *a1, unsigned __int8 *a2, fmt::v8::detail::error_handler **a3)
{
  int v5; // r0
  unsigned __int8 *v7; // r6
  int v8; // r0
  unsigned __int8 *v9; // r0
  int v10; // r2
  int v11; // t1
  int v12; // r1
  bool v13; // zf
  fmt::v8::detail::error_handler *v14; // r2
  unsigned __int8 *v16; // [sp+4h] [bp-14h] BYREF

  v5 = *a1;
  v16 = a1;
  if ( (unsigned int)(v5 - 48) > 9 )
  {
    if ( v5 != 95 && (v5 & 0xDFu) - 65 > 0x19 )
      goto LABEL_23;
    v9 = a1 + 1;
    while ( v9 != a2 )
    {
      v11 = *v9++;
      v10 = v11;
      if ( (unsigned int)(v11 - 48) >= 0xA && v10 != 95 && (v10 & 0xDFu) - 65 >= 0x1A )
      {
        v7 = v9 - 1;
        goto LABEL_13;
      }
    }
    v7 = a2;
LABEL_13:
    v8 = sub_E03E4(*a3, a1, v7 - a1);
  }
  else
  {
    if ( v5 == 48 )
    {
      v7 = a1 + 1;
      v8 = 0;
      v16 = a1 + 1;
    }
    else
    {
      v8 = sub_E036C(&v16, a2, 0x7FFFFFFF);
      v7 = v16;
    }
    if ( v7 == a2 )
      goto LABEL_23;
    v12 = *v7;
    v13 = v12 == 58;
    if ( v12 != 58 )
      v13 = v12 == 125;
    if ( !v13 )
LABEL_23:
      fmt::v8::detail::error_handler::on_error(*a3, (fmt::v8::detail *)"invalid format string");
    v14 = *a3;
    if ( *((int *)*a3 + 3) >= 1 )
      fmt::v8::detail::error_handler::on_error(
        (fmt::v8::detail::error_handler *)((char *)v14 + 4),
        (fmt::v8::detail *)"cannot switch from automatic to manual argument indexing");
    *((_DWORD *)v14 + 3) = -1;
  }
  a3[1] = (fmt::v8::detail::error_handler *)v8;
  return v7;
}


// ======================================================================

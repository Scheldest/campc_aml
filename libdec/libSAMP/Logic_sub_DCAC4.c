// ADDR: 0xdcd9a
// SYMBOL: sub_DCD9A
int __fastcall sub_DCD9A(int *a1, int a2)
{
  int v2; // r0
  _DWORD v4[2]; // [sp+0h] [bp-18h] BYREF
  char v5; // [sp+8h] [bp-10h]
  __int16 v6; // [sp+9h] [bp-Fh]
  int v7; // [sp+Bh] [bp-Dh]
  char v8; // [sp+Fh] [bp-9h]

  v2 = *a1;
  v8 = 1;
  v7 = 32;
  v6 = 0;
  v4[0] = 0;
  v4[1] = -1;
  v5 = 0;
  return ((int (__fastcall *)(int, int, _DWORD *, _DWORD))sub_DD1E8)(v2, a2, v4, 0);
}


// ======================================================================
// ADDR: 0xdcdcc
// SYMBOL: sub_DCDCC
int __fastcall sub_DCDCC(int *a1, int a2)
{
  int v2; // r0
  _DWORD v4[2]; // [sp+0h] [bp-18h] BYREF
  char v5; // [sp+8h] [bp-10h]
  __int16 v6; // [sp+9h] [bp-Fh]
  int v7; // [sp+Bh] [bp-Dh]
  char v8; // [sp+Fh] [bp-9h]

  v2 = *a1;
  v8 = 1;
  v7 = 32;
  v6 = 0;
  v4[0] = 0;
  v4[1] = -1;
  v5 = 0;
  return ((int (__fastcall *)(int, int, _DWORD *, _DWORD))sub_DFACC)(v2, a2, v4, 0);
}


// ======================================================================
// ADDR: 0xdce00
// SYMBOL: sub_DCE00
int __fastcall sub_DCE00(int a1, int a2)
{
  int v2; // r4
  __int64 v3; // kr00_8
  int v4; // r5
  unsigned int v5; // r6
  unsigned int v6; // r0
  unsigned int v7; // r6
  unsigned int v8; // r2
  unsigned int v9; // r8
  int v10; // r6
  _BYTE *v11; // r2
  unsigned int v12; // r1
  int v13; // r0
  _BYTE v15[4]; // [sp+4h] [bp-24h] BYREF
  int v16; // [sp+8h] [bp-20h]
  _BYTE v17[28]; // [sp+Ch] [bp-1Ch] BYREF

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2;
  if ( a2 < 0 )
    v4 = -a2;
  v5 = __clz(v4 | 1) ^ 0x1F;
  v6 = dword_91AF8[2 * v5];
  v7 = dword_91AF8[2 * v5 + 1];
  v8 = (__PAIR64__((unsigned int)v3 + ((unsigned int)a2 >> 31), v6) + __PAIR64__(v7, v4)) >> 32;
  v9 = __CFADD__(v6, v4) + v7;
  if ( HIDWORD(v3) < v8 )
  {
    v8 = v3;
LABEL_9:
    if ( a2 <= -1 )
    {
      v12 = v8 + 1;
      if ( HIDWORD(v3) < v8 + 1 )
      {
        (**(void (__fastcall ***)(int))v2)(v2);
        v8 = *(_DWORD *)(v2 + 8);
        v12 = v8 + 1;
      }
      v13 = *(_DWORD *)(v2 + 4);
      *(_DWORD *)(v2 + 8) = v12;
      *(_BYTE *)(v13 + v8) = 45;
    }
    sub_DCEB4(v15, v17, v4, v9);
    return sub_DCF1C(v17, v16, v2);
  }
  v10 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v2 + 8) = v8;
  if ( !v10 )
    goto LABEL_9;
  v11 = (_BYTE *)(v10 + v3);
  if ( a2 <= -1 )
    *v11++ = 45;
  sub_DCEB4(v17, v11, v4, v9);
  return v2;
}


// ======================================================================
// ADDR: 0xdcf8c
// SYMBOL: sub_DCF8C
int __fastcall sub_DCF8C(int a1, int a2)
{
  int v2; // r4
  unsigned int v3; // r5
  unsigned int v4; // r12
  unsigned int v5; // r0
  bool v6; // cf
  __int64 v7; // r0
  __int64 v8; // r2
  int v9; // r5
  _DWORD v11[2]; // [sp+4h] [bp-1Ch] BYREF
  _DWORD v12[5]; // [sp+Ch] [bp-14h] BYREF

  LODWORD(v8) = a2;
  v2 = a1;
  HIDWORD(v8) = __clz(a2 | 1) ^ 0x1F;
  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = dword_91AF8[2 * HIDWORD(v8)];
  HIDWORD(v8) = dword_91AF8[2 * HIDWORD(v8) + 1];
  v6 = __CFADD__(v5, a2);
  v7 = __PAIR64__(v4, v5) + v8;
  HIDWORD(v8) += v6;
  if ( v3 >= HIDWORD(v7) && (v9 = *(_DWORD *)(v2 + 4), *(_DWORD *)(v2 + 8) = HIDWORD(v7), v9) )
  {
    sub_DCEB4(v12, v9 + v4, v8, SHIDWORD(v8));
  }
  else
  {
    sub_DCEB4(v11, (int)v12, v8, SHIDWORD(v8));
    return sub_DCF1C((int)v12, v11[1], v2);
  }
  return v2;
}


// ======================================================================
// ADDR: 0xdcff4
// SYMBOL: sub_DCFF4
int __fastcall sub_DCFF4(int a1, __int64 a2)
{
  unsigned int v3; // r9
  int v4; // r4
  unsigned int v5; // r10
  unsigned int v6; // r2
  int v7; // r5
  __int64 v8; // kr10_8
  unsigned int v9; // r0
  int v10; // r6
  _BYTE *v11; // r1
  unsigned int v12; // r1
  int v13; // r2
  _BYTE v15[4]; // [sp+4h] [bp-34h] BYREF
  int v16; // [sp+8h] [bp-30h]
  _BYTE v17[44]; // [sp+Ch] [bp-2Ch] BYREF

  v3 = (a2 + (SHIDWORD(a2) >> 31)) ^ (SHIDWORD(a2) >> 31);
  v4 = a1;
  v5 = ((a2 + __PAIR64__(SHIDWORD(a2) >> 31, SHIDWORD(a2) >> 31)) >> 32) ^ (SHIDWORD(a2) >> 31);
  v6 = __clz(v3 | 1) + 32;
  if ( v5 )
    v6 = __clz(v5);
  v7 = byte_91BF8[v6 ^ 0x3F];
  if ( __PAIR64__(v5, v3) < qword_91C38[v7] )
    --v7;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = v8 + (HIDWORD(a2) >> 31) + v7;
  if ( HIDWORD(v8) < v9 )
  {
    v9 = v8;
LABEL_11:
    if ( SHIDWORD(a2) <= -1 )
    {
      v12 = v9 + 1;
      if ( HIDWORD(v8) < v9 + 1 )
      {
        (**(void (__fastcall ***)(int))v4)(v4);
        v9 = *(_DWORD *)(v4 + 8);
        v12 = v9 + 1;
      }
      v13 = *(_DWORD *)(v4 + 4);
      *(_DWORD *)(v4 + 8) = v12;
      *(_BYTE *)(v13 + v9) = 45;
    }
    sub_DD0CC(v15, v17, v3, v5, v7);
    return sub_DCF1C((int)v17, v16, v4);
  }
  v10 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 8) = v9;
  if ( !v10 )
    goto LABEL_11;
  v11 = (_BYTE *)(v8 + v10);
  if ( SHIDWORD(a2) <= -1 )
    *v11++ = 45;
  sub_DD0CC(v17, v11, v3, v5, v7);
  return v4;
}


// ======================================================================
// ADDR: 0xdd160
// SYMBOL: sub_DD160
int __fastcall sub_DD160(int a1, unsigned __int64 a2)
{
  int v3; // r4
  unsigned int v4; // r5
  __int64 v5; // kr00_8
  int v6; // r0
  int v7; // r12
  _DWORD v9[2]; // [sp+4h] [bp-24h] BYREF
  _DWORD v10[7]; // [sp+Ch] [bp-1Ch] BYREF

  v3 = a1;
  v4 = __clz(a2 | 1) + 32;
  if ( HIDWORD(a2) )
    v4 = __clz(HIDWORD(a2));
  v5 = *(_QWORD *)(a1 + 8);
  v6 = byte_91BF8[v4 ^ 0x3F];
  if ( a2 < qword_91C38[v6] )
    --v6;
  if ( HIDWORD(v5) >= (unsigned int)(v6 + v5) && (v7 = *(_DWORD *)(v3 + 4), *(_DWORD *)(v3 + 8) = v6 + v5, v7) )
  {
    sub_DD0CC(v10, HIDWORD(v5) + v5, a2, v6);
  }
  else
  {
    sub_DD0CC(v9, (int)v10, a2, v6);
    return sub_DCF1C((int)v10, v9[1], v3);
  }
  return v3;
}


// ======================================================================
// ADDR: 0xde234
// SYMBOL: sub_DE234
int __fastcall sub_DE234(int a1, float a2)
{
  float v2; // s0
  int v3; // r6
  _BYTE v6[8]; // [sp+10h] [bp-30h] BYREF
  _QWORD v7[2]; // [sp+18h] [bp-28h] BYREF
  int v8; // [sp+28h] [bp-18h] BYREF
  int v9; // [sp+2Ch] [bp-14h]

  v2 = a2;
  v3 = 0;
  v8 = 0;
  v9 = 0;
  if ( SLODWORD(a2) <= -1 )
  {
    v2 = -a2;
    v3 = 256;
    v9 = 256;
    a2 = -a2;
  }
  v7[0] = unk_91DD0;
  v7[1] = unk_91DD8;
  if ( (LODWORD(a2) & 0x7F800000) == 0x7F800000 )
    return sub_DE2CC(a1, 0, 0, -1, 0x20000000, 0x1000000, &v8);
  fmt::v8::detail::dragonbox::to_decimal<float>(v6, LODWORD(v2));
  return sub_DE3F0(a1, (int)v6, (int)v7, 0, v3, 0);
}


// ======================================================================
// ADDR: 0xdef2c
// SYMBOL: sub_DEF2C
int __fastcall sub_DEF2C(int a1, double a2)
{
  double v3; // d16
  int v4; // r6
  double v6; // kr00_8
  _BYTE v8[16]; // [sp+10h] [bp-38h] BYREF
  _QWORD v9[2]; // [sp+20h] [bp-28h] BYREF
  int v10; // [sp+30h] [bp-18h] BYREF
  int v11; // [sp+34h] [bp-14h]

  v3 = a2;
  v4 = 0;
  v10 = 0;
  v11 = 0;
  if ( SHIDWORD(a2) <= -1 )
  {
    v3 = -a2;
    v4 = 256;
    v11 = 256;
    v6 = -a2;
    HIDWORD(a2) = HIDWORD(v6);
  }
  v9[0] = unk_91DD0;
  v9[1] = unk_91DD8;
  if ( (~HIDWORD(a2) & 0x7FF00000) == 0 )
    return sub_DE2CC(a1, 0, 0, -1, 0x100000020000000LL, (int)&v10);
  fmt::v8::detail::dragonbox::to_decimal<double>(v8, 2146435072, LODWORD(v3), HIDWORD(v3));
  return sub_DEFC8(a1, (int)v8, (int)v9, 0, v4, 0);
}


// ======================================================================
// ADDR: 0xdf9f0
// SYMBOL: sub_DF9F0
int __fastcall sub_DF9F0(int a1, double a2)
{
  double v3; // d16
  unsigned int v4; // r6
  double v6; // kr00_8
  int v8[4]; // [sp+10h] [bp-38h] BYREF
  _QWORD v9[2]; // [sp+20h] [bp-28h] BYREF
  int v10; // [sp+30h] [bp-18h] BYREF
  int v11; // [sp+34h] [bp-14h]

  v3 = a2;
  v4 = 0;
  v10 = 0;
  v11 = 0;
  if ( SHIDWORD(a2) <= -1 )
  {
    v3 = -a2;
    v4 = 256;
    v11 = 256;
    v6 = -a2;
    HIDWORD(a2) = HIDWORD(v6);
  }
  v9[0] = unk_91DD0;
  v9[1] = unk_91DD8;
  if ( (~HIDWORD(a2) & 0x7FF00000) == 0 )
    return sub_DE2CC(a1, 0, 0, -1, 0x100000020000000LL, (int)&v10);
  fmt::v8::detail::dragonbox::to_decimal<double>(v8, 2146435072, LODWORD(v3), HIDWORD(v3));
  return sub_DEFC8(a1, v8, (int *)v9, 0, v4, 0);
}


// ======================================================================
// ADDR: 0xdfa8c
// SYMBOL: sub_DFA8C
int __fastcall sub_DFA8C(int a1, char *s)
{
  char *v4; // r1
  int v5; // r3

  if ( !s )
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"string pointer is null", 0);
  v4 = &s[strlen(s)];
  return sub_DFAB8(s, v4, a1, v5);
}


// ======================================================================
// ADDR: 0xdfab8
// SYMBOL: sub_DFAB8
int __fastcall sub_DFAB8(char *a1, char *a2, int a3)
{
  sub_DCF30(a3, a1, a2);
  return a3;
}


// ======================================================================
// ADDR: 0xdfc00
// SYMBOL: sub_DFC00
unsigned __int8 *__fastcall sub_DFC00(int a1, unsigned __int8 *a2, fmt::v8::detail::error_handler *this)
{
  unsigned __int8 *v3; // r4
  int v6; // r1
  int v7; // r2
  int *v8; // r8
  int v9; // r6
  char *v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r1
  double v14; // d16
  int v15; // r0
  unsigned __int8 *v16; // r0
  char *v17; // r1
  __int64 v18; // r2
  unsigned __int64 v19; // r2
  int v20; // r0
  unsigned int v21; // r2
  char v22; // r5
  char *v23; // r1
  double v24; // d16
  double v25; // d16
  char *v26; // r1
  double v27; // r0
  unsigned int v28; // r3
  int v29; // r1
  int v30; // r2
  fmt::v8::detail::error_handler *v32; // [sp+0h] [bp-78h] BYREF
  int v33; // [sp+4h] [bp-74h]
  double v34; // [sp+8h] [bp-70h] BYREF
  double v35; // [sp+10h] [bp-68h]
  __int64 v36; // [sp+18h] [bp-60h]
  int v37; // [sp+20h] [bp-58h]
  char *s[2]; // [sp+28h] [bp-50h] BYREF
  int v39; // [sp+30h] [bp-48h]
  int v40; // [sp+38h] [bp-40h] BYREF
  int v41; // [sp+3Ch] [bp-3Ch]
  double v42; // [sp+40h] [bp-38h]
  __int64 v43; // [sp+48h] [bp-30h]
  int v44; // [sp+50h] [bp-28h]
  _DWORD v45[7]; // [sp+5Ch] [bp-1Ch] BYREF

  v3 = (unsigned __int8 *)(a1 + 1);
  if ( (unsigned __int8 *)(a1 + 1) == a2 )
    fmt::v8::detail::error_handler::on_error(this, (fmt::v8::detail *)"invalid format string");
  v6 = *v3;
  if ( v6 == 123 )
  {
    *((_DWORD *)this + 4) = sub_DFAB8((char *)(a1 + 1), (char *)(a1 + 2), *((_DWORD *)this + 4));
  }
  else
  {
    if ( v6 == 125 )
    {
      v7 = *((_DWORD *)this + 3);
      if ( v7 > -1 )
      {
        v8 = (int *)((char *)this + 16);
        *((_DWORD *)this + 3) = v7 + 1;
        sub_E0290(&v34, (char *)this + 16, v7);
        v9 = *((_DWORD *)this + 4);
        switch ( LODWORD(v35) )
        {
          case 1:
            v10 = (char *)LODWORD(v34);
            goto LABEL_17;
          case 2:
            v17 = (char *)LODWORD(v34);
            goto LABEL_34;
          case 3:
            v18 = *(_QWORD *)&v34;
            goto LABEL_36;
          case 4:
            v19 = *(_QWORD *)&v34;
            goto LABEL_38;
          case 7:
            v42 = 7.29112289e-304;
            v40 = 0;
            v41 = -1;
            v15 = sub_DD1E8(v9, LOBYTE(v34), (int)&v40);
            goto LABEL_55;
          case 8:
            v21 = *(_DWORD *)(v9 + 12);
            v20 = *(_DWORD *)(v9 + 8);
            v22 = LOBYTE(v34);
            goto LABEL_41;
          case 9:
            v23 = (char *)LODWORD(v34);
            goto LABEL_45;
          case 0xA:
            v24 = v34;
            goto LABEL_47;
          case 0xB:
            v25 = v34;
            goto LABEL_49;
          case 0xC:
            v26 = (char *)LODWORD(v34);
            goto LABEL_51;
          case 0xD:
            v27 = v34;
            goto LABEL_53;
          case 0xE:
            v42 = 7.29112289e-304;
            v40 = 0;
            v41 = -1;
            v15 = sub_DFACC(v9, SLODWORD(v34), (int)&v40);
            goto LABEL_55;
          case 0xF:
            v28 = *((_DWORD *)this + 8);
            v42 = *((double *)this + 3);
            v39 = 0;
            s[0] = 0;
            s[1] = 0;
            v43 = v28;
            v44 = *((_DWORD *)this + 10);
            v40 = v9;
            ((void (__fastcall *)(_DWORD, char **, int *))HIDWORD(v34))(LODWORD(v34), s, &v40);
            goto LABEL_59;
          default:
            break;
        }
LABEL_56:
        *v8 = v9;
        return v3 + 1;
      }
LABEL_61:
      fmt::v8::detail::error_handler::on_error(
        (fmt::v8::detail::error_handler *)((char *)this + 4),
        (fmt::v8::detail *)"cannot switch from manual to automatic argument indexing");
    }
    v32 = this;
    v33 = 0;
    if ( v6 == 58 )
    {
      v11 = *((_DWORD *)this + 3);
      if ( v11 <= -1 )
        goto LABEL_61;
      *((_DWORD *)this + 3) = v11 + 1;
      v33 = v11;
    }
    else
    {
      v3 = (unsigned __int8 *)sub_E02B4(v3, a2, &v32);
    }
    if ( v3 == a2 )
LABEL_62:
      fmt::v8::detail::error_handler::on_error(this, (fmt::v8::detail *)"missing '}' in format string");
    v12 = *v3;
    if ( v12 != 58 )
    {
      if ( v12 == 125 )
      {
        v8 = (int *)((char *)this + 16);
        sub_E0290(s, (char *)this + 16, v33);
        v9 = *((_DWORD *)this + 4);
        v13 = *((_DWORD *)this + 10);
        v14 = *((double *)this + 3);
        LODWORD(v36) = *((_DWORD *)this + 8);
        LODWORD(v34) = v9;
        v37 = v13;
        v35 = v14;
        switch ( v39 )
        {
          case 1:
            v10 = s[0];
LABEL_17:
            v15 = sub_DCE00(v9, (int)v10);
            goto LABEL_55;
          case 2:
            v17 = s[0];
LABEL_34:
            v15 = sub_DCF8C(v9, (int)v17);
            goto LABEL_55;
          case 3:
            v18 = *(_QWORD *)s;
LABEL_36:
            v15 = sub_DCFF4(v9, v18);
            goto LABEL_55;
          case 4:
            v19 = *(_QWORD *)s;
LABEL_38:
            v15 = sub_DD160(v9, v19);
            goto LABEL_55;
          case 7:
            v15 = sub_DCD9A((int *)&v34, LOBYTE(s[0]));
            goto LABEL_55;
          case 8:
            v21 = *(_DWORD *)(v9 + 12);
            v20 = *(_DWORD *)(v9 + 8);
            v22 = (char)s[0];
LABEL_41:
            v29 = v20 + 1;
            if ( v21 < v20 + 1 )
            {
              (**(void (__fastcall ***)(int))v9)(v9);
              v20 = *(_DWORD *)(v9 + 8);
              v29 = v20 + 1;
            }
            v30 = *(_DWORD *)(v9 + 4);
            *(_DWORD *)(v9 + 8) = v29;
            *(_BYTE *)(v30 + v20) = v22;
            goto LABEL_56;
          case 9:
            v23 = s[0];
LABEL_45:
            v15 = sub_DE234(v9, *(float *)&v23);
            goto LABEL_55;
          case 10:
            v24 = *(double *)s;
LABEL_47:
            v15 = sub_DEF2C(v9, v24);
            goto LABEL_55;
          case 11:
            v25 = *(double *)s;
LABEL_49:
            v15 = sub_DF9F0(v9, v25);
            goto LABEL_55;
          case 12:
            v26 = s[0];
LABEL_51:
            v15 = sub_DFA8C(v9, v26);
            goto LABEL_55;
          case 13:
            v27 = *(double *)s;
LABEL_53:
            v15 = sub_DFAB8((char *)LODWORD(v27), (char *)(HIDWORD(v27) + LODWORD(v27)), v9);
            goto LABEL_55;
          case 14:
            v15 = sub_DCDCC((int *)&v34, (int)s[0]);
LABEL_55:
            v9 = v15;
            break;
          case 15:
            v40 = v9;
            memset(v45, 0, 12);
            v42 = v35;
            v43 = v36;
            v44 = v13;
            ((void (__fastcall *)(char *, _DWORD *))s[1])(s[0], v45);
LABEL_59:
            v9 = v40;
            break;
          default:
            goto LABEL_56;
        }
        goto LABEL_56;
      }
      goto LABEL_62;
    }
    v16 = (unsigned __int8 *)sub_DFF58(this, v33, v3 + 1, a2, v32);
    if ( v16 == a2 || (v3 = v16, *v16 != 125) )
      fmt::v8::detail::error_handler::on_error(this, (fmt::v8::detail *)"unknown format specifier");
  }
  return v3 + 1;
}


// ======================================================================
// ADDR: 0xdfedc
// SYMBOL: sub_DFEDC
fmt::v8::detail::error_handler **__fastcall sub_DFEDC(fmt::v8::detail::error_handler **result, char *s, char *a3)
{
  size_t v3; // r6
  fmt::v8::detail::error_handler **v5; // r8
  char *v6; // r5
  char *v7; // r0
  char *v8; // r4
  char *v9; // r0
  fmt::v8::detail::error_handler *v10; // r6
  int v11; // r0
  fmt::v8::detail::error_handler *v12; // r4

  if ( s != a3 )
  {
    v3 = a3 - s;
    v5 = result;
    v6 = s;
    v7 = (char *)memchr(s, 125, a3 - s);
    if ( v7 )
    {
      v8 = v7;
      do
      {
        v9 = v8 + 1;
        if ( v8 + 1 == a3 || *v9 != 125 )
          fmt::v8::detail::error_handler::on_error(*v5, (fmt::v8::detail *)"unmatched '}' in format string");
        v10 = *v5;
        v11 = sub_DFAB8(v6, v9, *((_DWORD *)*v5 + 4));
        v6 = v8 + 2;
        *((_DWORD *)v10 + 4) = v11;
        v3 = a3 - (v8 + 2);
        v8 = (char *)memchr(v8 + 2, 125, v3);
      }
      while ( v8 );
    }
    v12 = *v5;
    result = (fmt::v8::detail::error_handler **)sub_DFAB8(v6, &v6[v3], *((_DWORD *)*v5 + 4));
    *((_DWORD *)v12 + 4) = result;
  }
  return result;
}


// ======================================================================

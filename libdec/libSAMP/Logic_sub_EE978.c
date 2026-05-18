// ADDR: 0xeea04
// SYMBOL: sub_EEA04
int __fastcall sub_EEA04(int result)
{
  int v1; // r0
  std::locale *v2; // r0

  if ( !*(_BYTE *)(result + 4) )
  {
    v1 = (unsigned __int8)byte_23DECC;
    __dmb(0xBu);
    if ( !(v1 << 31) )
    {
      v2 = (std::locale *)j___cxa_guard_acquire((__guard *)&byte_23DECC);
      if ( v2 )
      {
        dword_23DEC8 = std::locale::classic(v2);
        j___cxa_guard_release((__guard *)&byte_23DECC);
      }
    }
    return dword_23DEC8;
  }
  return result;
}


// ======================================================================
// ADDR: 0xeea64
// SYMBOL: sub_EEA64
int __fastcall sub_EEA64(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int result; // r0
  std::locale *v10; // r0

  *(_DWORD *)a1 = a2;
  v8 = (unsigned __int8)byte_23DECC;
  __dmb(0xBu);
  if ( !(v8 << 31) )
  {
    v10 = (std::locale *)j___cxa_guard_acquire((__guard *)&byte_23DECC);
    if ( v10 )
    {
      dword_23DEC8 = std::locale::classic(v10);
      j___cxa_guard_release((__guard *)&byte_23DECC);
    }
  }
  *(_BYTE *)(a1 + 4) = std::locale::operator==(a2, dword_23DEC8);
  result = a1;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  return result;
}


// ======================================================================
// ADDR: 0xeeadc
// SYMBOL: sub_EEADC
int __fastcall sub_EEADC(int a1)
{
  int v1; // r1
  __int64 v3; // r2
  int v4; // kr00_4
  unsigned __int64 v5; // r2
  int v6; // r12
  unsigned int v7; // r2
  __int64 v8; // kr08_8
  int v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r0
  int v12; // r5
  unsigned int v13; // r1
  int v14; // kr04_4
  signed __int64 v15; // kr18_8
  int result; // r0
  __int16 v17; // [sp+6h] [bp-1Ah] BYREF
  int v18; // [sp+8h] [bp-18h]
  int v19; // [sp+Ch] [bp-14h]
  char v20[16]; // [sp+10h] [bp-10h] BYREF

  v1 = *(_DWORD *)(a1 + 12);
  LODWORD(v3) = 1900;
  v4 = *(_DWORD *)(v1 + 20);
  HIDWORD(v3) = v4 >> 31;
  v5 = v3 + (unsigned int)v4;
  if ( v5 > 0x270F )
  {
    sub_EF194(a1);
    v1 = *(_DWORD *)(a1 + 12);
    v7 = 0;
    v6 = 4;
  }
  else
  {
    v6 = 0;
    v17 = *(_WORD *)&a00010203040506[2 * ((unsigned int)(5243 * ((unsigned __int16)v5 >> 2)) >> 17)];
    v7 = (unsigned __int16)v5 % 0x64u;
  }
  v8 = *(_QWORD *)(v1 + 12);
  v9 = (v7 | (HIDWORD(v8) << 24)) + 0x1000000;
  v10 = 205 * v9;
  v11 = ((205 * (unsigned __int64)(unsigned int)v9) >> 32) + 13434880 * v8;
  v12 = *(_DWORD *)(a1 + 8);
  v14 = v9;
  v13 = v9 + 6 * ((((unsigned int)(205 * v9) >> 11) | (v11 << 21)) & 0xF00000F);
  v18 = (v13 >> 4) & 0xF00000F | ((v13 & 0xF) << 8) | 0x302D3030;
  v15 = __PAIR64__(6 * ((v11 >> 11) & 0xF0000), v14)
      + __PAIR64__((_DWORD)v8 << 16, 6 * (((v10 >> 11) | (v11 << 21)) & 0xF00000F));
  v19 = (((v15 >> 24) & 0xF00000F) + ((HIDWORD(v15) >> 4) & 0xF0000)) | 0x30302D30;
  result = sub_DCF30(v12, (char *)&v17 + v6, v20);
  *(_DWORD *)(a1 + 8) = v12;
  return result;
}


// ======================================================================
// ADDR: 0xeebd8
// SYMBOL: sub_EEBD8
int __fastcall sub_EEBD8(int a1)
{
  __int64 v2; // kr00_8
  __int64 v3; // kr08_8
  int v4; // r0
  __int64 v5; // r2
  bool v6; // cf
  __int64 v7; // r0
  int result; // r0
  _DWORD v9[2]; // [sp+0h] [bp-18h] BYREF
  char v10[16]; // [sp+8h] [bp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)HIDWORD(v2);
  v4 = *(_DWORD *)(HIDWORD(v2) + 8) | (*(_DWORD *)(HIDWORD(v2) + 4) << 24);
  LODWORD(v5) = 205 * v4;
  HIDWORD(v5) = 13434880 * *(_DWORD *)HIDWORD(v2) + ((205 * (unsigned __int64)(unsigned int)v4) >> 32);
  LODWORD(v5) = 3 * ((v5 >> 11) & 0xF00000F);
  v6 = __CFADD__(v4, 2 * v5);
  LODWORD(v7) = v4 + 2 * v5;
  v9[0] = ((unsigned int)v7 >> 4) & 0xF00000F | ((v7 & 0xF) << 8) | 0x303A3030;
  HIDWORD(v7) = ((_DWORD)v3 << 16) + v6 + 6 * ((HIDWORD(v5) >> 11) & 0xF0000);
  v9[1] = (((v7 >> 24) & 0xF00000F) + ((HIDWORD(v7) >> 4) & 0xF0000)) | 0x30303A30;
  result = sub_DCF30(v2, (char *)v9, v10);
  *(_DWORD *)(a1 + 8) = v2;
  return result;
}


// ======================================================================
// ADDR: 0xeec74
// SYMBOL: sub_EEC74
char *__fastcall sub_EEC74(char *a1, unsigned __int8 *a2, int a3)
{
  char *v5; // r6
  char *v6; // r5
  int v7; // r0
  int v8; // r4
  char *v9; // r1
  int v10; // r0
  int v11; // r1
  __int64 v12; // r0
  int v13; // r4
  char *v14; // r2
  int v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  __int64 v18; // r2
  __int64 v19; // r0
  int v20; // r1
  int v21; // r0
  unsigned int v22; // r0
  int v23; // r0
  __int64 v24; // kr08_8
  int v25; // r2
  int v26; // r0
  int v27; // r1
  int v28; // r0
  int v29; // r1
  int v30; // r0
  int v31; // r1
  int v32; // r5
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r4
  std::runtime_error *exception; // r4
  char v39; // [sp+2h] [bp-1Eh] BYREF
  char v40; // [sp+3h] [bp-1Dh] BYREF
  int v41; // [sp+4h] [bp-1Ch] BYREF

  if ( a1 == (char *)a2 )
    return a1;
  v5 = a1;
  do
  {
    v6 = a1;
    v7 = (unsigned __int8)*a1;
    if ( v7 == 37 )
    {
      if ( v5 != v6 )
      {
        v8 = *(_DWORD *)(a3 + 8);
        sub_DCF30(v8, v5, v6);
        *(_DWORD *)(a3 + 8) = v8;
      }
      v9 = v6 + 1;
      if ( v6 + 1 == (char *)a2 )
      {
LABEL_110:
        exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
        sub_EE924(exception, "invalid format");
        j___cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'fmt::v8::format_error,
          (void (*)(void *))fmt::v8::format_error::~format_error);
      }
      v5 = v6 + 2;
      a1 = v6 + 2;
      switch ( v6[1] )
      {
        case '%':
          v13 = *(_DWORD *)(a3 + 8);
          v14 = v6 + 2;
          goto LABEL_77;
        case 'A':
          sub_EF430(a3);
          goto LABEL_73;
        case 'B':
          sub_EF528(a3);
          goto LABEL_73;
        case 'C':
          v15 = a3;
          v16 = 0;
          goto LABEL_21;
        case 'D':
          sub_EF980(a3);
          goto LABEL_73;
        case 'E':
          if ( v5 == (char *)a2 )
            goto LABEL_110;
          v17 = (unsigned __int8)v6[2];
          v5 = v6 + 3;
          if ( v17 > 0x62 )
          {
            switch ( v17 )
            {
              case 'c':
                v28 = a3;
                v29 = 1;
LABEL_54:
                sub_EF82E(v28, v29);
                break;
              case 'x':
                v10 = a3;
                v11 = 1;
LABEL_12:
                sub_EF918(v10, v11);
                break;
              case 'y':
                sub_EFBD0(a3);
                break;
              default:
                goto LABEL_110;
            }
          }
          else
          {
            switch ( v17 )
            {
              case 'C':
                v15 = a3;
                v16 = 1;
LABEL_21:
                sub_EF316(v15, v16);
                break;
              case 'X':
                v26 = a3;
                v27 = 1;
LABEL_50:
                sub_EF94C(v26, v27);
                break;
              case 'Y':
                sub_EF284(a3, 1);
                break;
              default:
                goto LABEL_110;
            }
          }
          goto LABEL_73;
        case 'F':
          sub_EEADC(a3);
          goto LABEL_73;
        case 'G':
          v19 = sub_F029C(a3);
          v18 = v19;
          LODWORD(v19) = a3;
          goto LABEL_52;
        case 'H':
          v20 = *(_DWORD *)(*(_DWORD *)(a3 + 12) + 8);
          goto LABEL_72;
        case 'I':
          v21 = *(_DWORD *)(*(_DWORD *)(a3 + 12) + 8);
          v20 = v21 - 12;
          if ( v21 < 12 )
            v20 = *(_DWORD *)(*(_DWORD *)(a3 + 12) + 8);
          if ( !v20 )
            v20 = 12;
          goto LABEL_72;
        case 'M':
          v20 = *(_DWORD *)(*(_DWORD *)(a3 + 12) + 4);
          goto LABEL_72;
        case 'O':
          if ( v5 == (char *)a2 )
            goto LABEL_110;
          v22 = (unsigned __int8)v6[2];
          v5 = v6 + 3;
          if ( v22 <= 0x63 )
          {
            switch ( v6[2] )
            {
              case 'H':
                sub_EF750(a3, 1);
                goto LABEL_73;
              case 'I':
                sub_EF784(a3, 1);
                goto LABEL_73;
              case 'M':
                sub_EF7C6(a3, 1);
                goto LABEL_73;
              case 'S':
                sub_EF7FA(a3, 1);
                goto LABEL_73;
              case 'U':
                sub_EF5A2(a3, 1);
                goto LABEL_73;
              case 'V':
                sub_EF646(a3, 1);
                goto LABEL_73;
              case 'W':
                sub_EF5EE(a3, 1);
                goto LABEL_73;
              default:
                goto LABEL_110;
            }
          }
          if ( (unsigned __int8)v6[2] > 0x74u )
          {
            switch ( v22 )
            {
              case 'u':
                sub_EF4A8(a3, 1);
                break;
              case 'w':
                sub_EF474(a3, 1);
                break;
              case 'y':
                sub_EF2C6(a3, 1);
                break;
              default:
                goto LABEL_110;
            }
          }
          else
          {
            switch ( v22 )
            {
              case 'd':
                sub_EF67E(a3, 1);
                break;
              case 'e':
                v30 = a3;
                v31 = 1;
LABEL_56:
                sub_EF6B4(v30, v31);
                break;
              case 'm':
                sub_EF56C(a3, 1);
                break;
              default:
                goto LABEL_110;
            }
          }
LABEL_73:
          a1 = v5;
          break;
        case 'Q':
        case 'q':
          break;
        case 'R':
          sub_EFB1C(a3);
          goto LABEL_73;
        case 'S':
          v20 = **(_DWORD **)(a3 + 12);
          goto LABEL_72;
        case 'T':
          sub_EEBD8(a3);
          goto LABEL_73;
        case 'U':
          v23 = *(_DWORD *)(*(_DWORD *)(a3 + 12) + 28) - *(_DWORD *)(*(_DWORD *)(a3 + 12) + 24);
          goto LABEL_48;
        case 'V':
          v20 = sub_F0418(a3);
          goto LABEL_72;
        case 'W':
          v24 = *(_QWORD *)(*(_DWORD *)(a3 + 12) + 24);
          v25 = 1 - v24;
          if ( !(_DWORD)v24 )
            v25 = -6;
          v23 = HIDWORD(v24) + v25;
LABEL_48:
          v20 = (v23 + 7) / 7;
          goto LABEL_72;
        case 'X':
          v26 = a3;
          v27 = 0;
          goto LABEL_50;
        case 'Y':
          v19 = *(int *)(*(_DWORD *)(a3 + 12) + 20);
          v18 = (int)v19 + 1900LL;
          LODWORD(v19) = a3;
LABEL_52:
          sub_EFC1E(v19, HIDWORD(v19), v18, HIDWORD(v18));
          goto LABEL_73;
        case 'Z':
          sub_F0670(a3, *(_DWORD *)(a3 + 12));
          goto LABEL_73;
        case 'a':
          sub_EF3EC(a3);
          goto LABEL_73;
        case 'b':
        case 'h':
          sub_EF4E4(a3);
          goto LABEL_73;
        case 'c':
          v28 = a3;
          v29 = 0;
          goto LABEL_54;
        case 'd':
          v20 = *(_DWORD *)(*(_DWORD *)(a3 + 12) + 12);
          goto LABEL_72;
        case 'e':
          v30 = a3;
          v31 = 0;
          goto LABEL_56;
        case 'g':
          v12 = sub_F029C(a3);
          goto LABEL_70;
        case 'j':
          v32 = *(_DWORD *)(*(_DWORD *)(a3 + 12) + 28) + 1;
          sub_F03D8(a3, v32 / 100);
          v20 = v32 % 100;
          goto LABEL_72;
        case 'm':
          v20 = *(_DWORD *)(*(_DWORD *)(a3 + 12) + 16) + 1;
          goto LABEL_72;
        case 'n':
          v13 = *(_DWORD *)(a3 + 8);
          v40 = 10;
          v9 = &v40;
          v14 = (char *)&v41;
          goto LABEL_77;
        case 'p':
          sub_EFB5A(a3);
          goto LABEL_73;
        case 'r':
          sub_EFA38(a3);
          goto LABEL_73;
        case 't':
          v13 = *(_DWORD *)(a3 + 8);
          v39 = 9;
          v9 = &v39;
          v14 = &v40;
LABEL_77:
          sub_DCF30(v13, v9, v14);
          *(_DWORD *)(a3 + 8) = v13;
          goto LABEL_73;
        case 'u':
          v33 = *(_DWORD *)(*(_DWORD *)(a3 + 12) + 24);
          if ( !v33 )
            v33 = 7;
          goto LABEL_64;
        case 'w':
          v33 = *(_DWORD *)(*(_DWORD *)(a3 + 12) + 24);
LABEL_64:
          sub_F03D8(a3, v33);
          goto LABEL_73;
        case 'x':
          v10 = a3;
          v11 = 0;
          goto LABEL_12;
        case 'y':
          v12 = *(int *)(*(_DWORD *)(a3 + 12) + 20) + 1900LL;
LABEL_70:
          sub_221404(v12, HIDWORD(v12), 100, 0);
          v20 = v34;
          if ( v35 < 0 )
            v20 = -v34;
LABEL_72:
          sub_EFC70(a3, v20);
          goto LABEL_73;
        case 'z':
          sub_F05E2(a3, *(_DWORD *)(*(_DWORD *)(a3 + 12) + 36));
          goto LABEL_73;
        default:
          goto LABEL_110;
      }
    }
    else
    {
      if ( v7 == 125 )
        goto LABEL_106;
      a1 = v6 + 1;
    }
  }
  while ( a1 != (char *)a2 );
  v6 = (char *)a2;
LABEL_106:
  if ( v5 != v6 )
  {
    v36 = *(_DWORD *)(a3 + 8);
    sub_DCF30(v36, v5, v6);
    *(_DWORD *)(a3 + 8) = v36;
  }
  return v6;
}


// ======================================================================

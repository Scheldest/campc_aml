// ADDR: 0x2199bc
// SYMBOL: sub_2199BC
int __fastcall sub_2199BC(__int64 *a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int v5; // r5
  __int64 v6; // r0
  __int64 v7; // r0
  unsigned __int8 *v9; // [sp+4h] [bp-14h] BYREF
  unsigned __int8 *v10; // [sp+8h] [bp-10h]
  int v11; // [sp+Ch] [bp-Ch]

  v9 = a2;
  v10 = a3;
  v11 = a4;
  if ( !sub_2155E4(a1, (int)"fp", (int)"") )
  {
    if ( !sub_2155E4(a1, (int)"fL", (int)"") )
      return 0;
    v5 = 0;
    sub_215BB4(&v9, (unsigned __int8 **)a1, 0);
    if ( v9 == v10 )
      return v5;
    v7 = *a1;
    if ( (_DWORD)v7 == HIDWORD(v7) || *(_BYTE *)v7 != 112 )
      return 0;
    *(_DWORD *)a1 = v7 + 1;
  }
  sub_2173EC(a1);
  v5 = 0;
  sub_215BB4(&v9, (unsigned __int8 **)a1, 0);
  v6 = *a1;
  if ( (_DWORD)v6 != HIDWORD(v6) )
  {
    if ( *(_BYTE *)v6 == 95 )
    {
      *(_DWORD *)a1 = v6 + 1;
      return sub_21AE0C(a1, &v9);
    }
    return 0;
  }
  return v5;
}


// ======================================================================
// ADDR: 0x219a6c
// SYMBOL: sub_219A6C
_DWORD *__fastcall sub_219A6C(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r4
  _DWORD *result; // r0

  v6 = sub_217B38(a1);
  if ( !v6 )
    return 0;
  v7 = v6;
  v8 = sub_217B38(a1);
  if ( !v8 )
    return 0;
  v9 = v8;
  result = sub_216EF0(a1 + 408, 24);
  result[2] = v7;
  result[3] = a2;
  result[4] = a3;
  result[5] = v9;
  *result = &off_23338C;
  result[1] = 16843055;
  return result;
}


// ======================================================================
// ADDR: 0x219abc
// SYMBOL: sub_219ABC
_DWORD *__fastcall sub_219ABC(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r6
  _DWORD *result; // r0

  v6 = sub_217B38(a1);
  if ( !v6 )
    return 0;
  v7 = v6;
  result = sub_216EF0(a1 + 408, 20);
  result[2] = a2;
  result[3] = a3;
  result[4] = v7;
  *result = &off_2333C4;
  result[1] = 16843066;
  return result;
}


// ======================================================================
// ADDR: 0x219b00
// SYMBOL: sub_219B00
_DWORD *__fastcall sub_219B00(int a1, _DWORD *a2, char *a3, char *a4)
{
  _DWORD *result; // r0
  char v8; // r2
  char v9; // r1

  result = sub_216EF0(a1 + 408, 16);
  result[1] = 16843065;
  v8 = *a3;
  *result = &off_2334A4;
  result[2] = *a2;
  v9 = *a4;
  *((_BYTE *)result + 12) = v8;
  *((_BYTE *)result + 13) = v9;
  return result;
}


// ======================================================================
// ADDR: 0x219b40
// SYMBOL: sub_219B40
_DWORD *__fastcall sub_219B40(__int64 *a1)
{
  __int64 v2; // r0
  __int64 v3; // r0
  int v4; // r5
  __int64 v5; // r0
  __int64 v6; // r0
  _DWORD *result; // r0
  _DWORD *v8; // r6
  _DWORD *v9; // r0
  _DWORD *v10; // [sp+4h] [bp-24h] BYREF
  _DWORD *v11; // [sp+8h] [bp-20h] BYREF

  v11 = 0;
  if ( sub_2155E4(a1, (int)"srN", (int)"") )
  {
    v11 = (_DWORD *)sub_21B354(a1);
    if ( v11 )
    {
      v2 = *a1;
      if ( HIDWORD(v2) != (_DWORD)v2 && *(_BYTE *)v2 == 73 )
      {
        v10 = sub_217130((int)a1, 0);
        if ( v10 )
        {
          v11 = sub_2173BC((int)a1, (int *)&v11, (int *)&v10);
          goto LABEL_7;
        }
        return 0;
      }
LABEL_7:
      while ( 1 )
      {
        v3 = *a1;
        if ( (_DWORD)v3 != HIDWORD(v3) && *(_BYTE *)v3 == 69 )
          break;
        v10 = (_DWORD *)sub_21B3E0(a1);
        if ( !v10 )
          return 0;
        v11 = (_DWORD *)sub_21B448(a1, &v11, &v10);
      }
LABEL_29:
      *(_DWORD *)a1 = v3 + 1;
LABEL_30:
      v10 = (_DWORD *)sub_21B478(a1);
      if ( v10 )
        return (_DWORD *)sub_21B448(a1, &v11, &v10);
      return 0;
    }
    return 0;
  }
  v4 = sub_2155E4(a1, (int)"gs", (int)"");
  if ( sub_2155E4(a1, (int)"sr", (int)"") )
  {
    v5 = *a1;
    if ( HIDWORD(v5) != (_DWORD)v5 && (unsigned int)*(unsigned __int8 *)v5 - 58 >= 0xFFFFFFF6 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = (_DWORD *)sub_21B3E0(a1);
        v10 = v9;
        if ( !v9 )
          return 0;
        if ( v8 )
        {
          v9 = (_DWORD *)sub_21B448(a1, &v11, &v10);
        }
        else if ( v4 )
        {
          v9 = (_DWORD *)sub_21B590(a1, &v10);
        }
        v8 = v9;
        v11 = v9;
        v3 = *a1;
        if ( (_DWORD)v3 != HIDWORD(v3) && *(_BYTE *)v3 == 69 )
          goto LABEL_29;
      }
    }
    v11 = (_DWORD *)sub_21B354(a1);
    if ( v11 )
    {
      v6 = *a1;
      if ( HIDWORD(v6) == (_DWORD)v6 || *(_BYTE *)v6 != 73 )
        goto LABEL_30;
      v10 = sub_217130((int)a1, 0);
      if ( v10 )
      {
        v11 = sub_2173BC((int)a1, (int *)&v11, (int *)&v10);
        goto LABEL_30;
      }
    }
    return 0;
  }
  result = (_DWORD *)sub_21B478(a1);
  v11 = result;
  if ( !(v4 ^ 1 | (result == 0)) )
    return (_DWORD *)sub_21B590(a1, &v11);
  return result;
}


// ======================================================================
// ADDR: 0x219cd8
// SYMBOL: sub_219CD8
_DWORD *__fastcall sub_219CD8(int a1, int *a2, const char *a3, int *a4)
{
  _DWORD *v7; // r4
  int v8; // r6
  size_t v9; // r0
  int v10; // r1
  _DWORD *result; // r0

  v7 = sub_216EF0(a1 + 408, 24);
  v8 = *a2;
  v9 = strlen(a3);
  v7[1] = 16843059;
  *v7 = &off_2335F4;
  v10 = *a4;
  v7[4] = &a3[v9];
  result = v7;
  v7[5] = v10;
  v7[2] = v8;
  v7[3] = a3;
  return result;
}


// ======================================================================
// ADDR: 0x219d24
// SYMBOL: sub_219D24
_DWORD *__fastcall sub_219D24(__int64 *a1)
{
  __int64 v2; // r0
  int v3; // r1
  _DWORD *result; // r0
  int v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r6
  int v9; // r0
  int v10; // r8
  char v11; // [sp+3h] [bp-1Dh] BYREF
  int v12; // [sp+4h] [bp-1Ch] BYREF
  int v13; // [sp+8h] [bp-18h] BYREF

  v2 = *a1;
  HIDWORD(v2) -= v2;
  if ( !HIDWORD(v2) || *(_BYTE *)v2 != 100 || HIDWORD(v2) == 1 )
    return (_DWORD *)sub_217B38((int)a1);
  v3 = *(unsigned __int8 *)(v2 + 1);
  if ( v3 == 88 )
  {
    *(_DWORD *)a1 = v2 + 2;
    v5 = sub_217B38((int)a1);
    if ( v5 )
    {
      v6 = v5;
      v7 = sub_217B38((int)a1);
      if ( v7 )
      {
        v8 = v7;
        v9 = sub_219D24(a1);
        if ( v9 )
        {
          v10 = v9;
          result = sub_216EF0((int)(a1 + 51), 20);
          *result = &off_23369C;
          result[1] = 16843082;
          result[2] = v6;
          result[3] = v8;
          result[4] = v10;
          return result;
        }
      }
    }
    return 0;
  }
  if ( v3 == 120 )
  {
    *(_DWORD *)a1 = v2 + 2;
    v13 = sub_217B38((int)a1);
    if ( v13 )
    {
      v12 = sub_219D24(a1);
      if ( v12 )
      {
        LOBYTE(result) = 1;
        goto LABEL_18;
      }
    }
    return 0;
  }
  if ( v3 != 105 )
    return (_DWORD *)sub_217B38((int)a1);
  *(_DWORD *)a1 = v2 + 2;
  v13 = sub_21B5BC(a1);
  if ( !v13 )
    return 0;
  v12 = sub_219D24(a1);
  result = 0;
  if ( v12 )
  {
LABEL_18:
    v11 = (char)result;
    return (_DWORD *)sub_21C2B0(a1, &v13, &v12, &v11);
  }
  return result;
}


// ======================================================================
// ADDR: 0x219e40
// SYMBOL: sub_219E40
_DWORD *__fastcall sub_219E40(int a1, int *a2, const char *a3)
{
  _DWORD *v5; // r6
  int v6; // r5

  v5 = sub_216EF0(a1 + 408, 20);
  v6 = *a2;
  v5[4] = &a3[strlen(a3)];
  v5[2] = v6;
  v5[3] = a3;
  *v5 = &off_23370C;
  v5[1] = 16843057;
  return v5;
}


// ======================================================================
// ADDR: 0x219eb0
// SYMBOL: sub_219EB0
_DWORD *__fastcall sub_219EB0(int a1, const char *a2, _DWORD *a3)
{
  _DWORD *v5; // r6
  size_t v6; // r0

  v5 = sub_216EF0(a1 + 408, 28);
  v6 = strlen(a2);
  v5[1] = 16843060;
  *v5 = &off_23377C;
  v5[4] = *a3;
  v5[2] = a2;
  v5[3] = &a2[v6];
  v5[5] = ")";
  v5[6] = "";
  return v5;
}


// ======================================================================
// ADDR: 0x219f04
// SYMBOL: sub_219F04
_DWORD *__fastcall sub_219F04(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  result = sub_216EF0(a1 + 408, 28);
  result[1] = 16843060;
  *result = &off_23377C;
  result[4] = *a2;
  result[2] = "sizeof... (";
  result[3] = "";
  result[5] = ")";
  result[6] = "";
  return result;
}


// ======================================================================
// ADDR: 0x219f84
// SYMBOL: sub_219F84
_DWORD *__fastcall sub_219F84(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  result = sub_216EF0(a1 + 408, 12);
  result[1] = 16843072;
  *result = &off_233894;
  result[2] = *a2;
  return result;
}


// ======================================================================
// ADDR: 0x21c438
// SYMBOL: sub_21C438
int __fastcall sub_21C438(int result, int a2, int a3, int a4, int a5, int a6, char a7, char a8)
{
  *(_DWORD *)(result + 4) = 16843064;
  *(_BYTE *)(result + 29) = a8;
  *(_BYTE *)(result + 28) = a7;
  *(_DWORD *)(result + 24) = a6;
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 16) = a4;
  *(_DWORD *)(result + 20) = a5;
  *(_DWORD *)result = &off_233744;
  return result;
}


// ======================================================================

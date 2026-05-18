// ADDR: 0x21a0a0
// SYMBOL: sub_21A0A0
int __fastcall sub_21A0A0(int a1, int a2)
{
  _DWORD *v3; // r5
  __int64 v4; // r0
  int v5; // r10
  int v6; // r8
  __int64 v7; // r0
  size_t v8; // r2
  __int64 v9; // r0
  int v10; // r1
  _BYTE *v11; // r0
  __int64 v12; // r0
  int v14; // r9
  size_t v15; // r0
  __int64 v16; // r0
  __int64 v17; // r0
  unsigned __int8 *v18; // r12
  unsigned __int8 *v19; // lr
  int v20; // r2
  int v21; // r6
  int v22; // r3
  unsigned __int8 *v23[2]; // [sp+0h] [bp-68h] BYREF
  int v24[2]; // [sp+8h] [bp-60h] BYREF
  int v25; // [sp+10h] [bp-58h] BYREF
  int v26; // [sp+14h] [bp-54h]
  _QWORD v27[6]; // [sp+18h] [bp-50h] BYREF

  if ( a2 )
    *(_DWORD *)(a1 + 336) = *(_DWORD *)(a1 + 332);
  if ( !sub_2155E4((__int64 *)a1, (int)"Ut", (int)"") )
  {
    if ( sub_2155E4((__int64 *)a1, (int)"Ul", (int)"") )
    {
      v5 = *(_DWORD *)(a1 + 392);
      *(_DWORD *)(a1 + 392) = (*(_DWORD *)(a1 + 336) - *(_DWORD *)(a1 + 332)) >> 2;
      sub_21A6C0(v27, a1);
      v6 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
      while ( 1 )
      {
        v7 = *(_QWORD *)a1;
        if ( HIDWORD(v7) == (_DWORD)v7 || *(_BYTE *)v7 != 84 )
          break;
        v8 = _strlen_chk("yptn", 5u);
        v9 = *(_QWORD *)a1;
        v10 = (unsigned int)(HIDWORD(v9) - v9) < 2 ? 0 : *(unsigned __int8 *)(v9 + 1);
        if ( !v8 )
          break;
        v11 = memchr("yptn", v10, v8);
        if ( !v11 || v11 - "yptn" == -1 )
          break;
        v25 = sub_21A724(a1);
        if ( !v25 )
          goto LABEL_34;
        sub_216CEC(a1 + 8, &v25);
      }
      sub_216D60((int)&v25, a1, v6);
      v14 = v26;
      if ( !v26 )
        *(_DWORD *)(a1 + 336) -= 4;
      v15 = _strlen_chk("vE", 3u);
      if ( sub_2155E4((__int64 *)a1, (int)"vE", (int)&aVe[v15]) )
      {
LABEL_31:
        sub_216D60((int)v24, a1, v6);
        v3 = 0;
        sub_215BB4(v23, (unsigned __int8 **)a1, 0);
        v17 = *(_QWORD *)a1;
        if ( (_DWORD)v17 == HIDWORD(v17) )
          goto LABEL_35;
        if ( *(_BYTE *)v17 == 95 )
        {
          *(_DWORD *)a1 = v17 + 1;
          v3 = sub_216EF0(a1 + 408, 32);
          v18 = v23[0];
          v19 = v23[1];
          v21 = v24[0];
          v20 = v24[1];
          v22 = v25;
          *v3 = &off_23323C;
          v3[1] = 16843053;
          v3[2] = v22;
          v3[3] = v14;
          v3[4] = v21;
          v3[5] = v20;
          v3[6] = v18;
          v3[7] = v19;
          goto LABEL_35;
        }
      }
      else
      {
        while ( 1 )
        {
          v24[0] = sub_215C48((unsigned __int8 **)a1);
          if ( !v24[0] )
            break;
          sub_216CEC(a1 + 8, v24);
          v16 = *(_QWORD *)a1;
          if ( (_DWORD)v16 != HIDWORD(v16) && *(_BYTE *)v16 == 69 )
          {
            *(_DWORD *)a1 = v16 + 1;
            goto LABEL_31;
          }
        }
      }
LABEL_34:
      v3 = 0;
LABEL_35:
      sub_21A8EC(v27);
      *(_DWORD *)(a1 + 392) = v5;
      return (int)v3;
    }
    if ( sub_2155E4((__int64 *)a1, (int)"Ub", (int)"") )
    {
      v3 = 0;
      sub_215BB4((unsigned __int8 **)v27, (unsigned __int8 **)a1, 0);
      v12 = *(_QWORD *)a1;
      if ( (_DWORD)v12 == HIDWORD(v12) )
        return (int)v3;
      if ( *(_BYTE *)v12 == 95 )
      {
        *(_DWORD *)a1 = v12 + 1;
        return sub_21A910(a1, "'block-literal'");
      }
    }
    return 0;
  }
  v3 = 0;
  sub_215BB4((unsigned __int8 **)v27, (unsigned __int8 **)a1, 0);
  v4 = *(_QWORD *)a1;
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    if ( *(_BYTE *)v4 == 95 )
    {
      *(_DWORD *)a1 = v4 + 1;
      v3 = sub_216EF0(a1 + 408, 16);
      v3[1] = 16843052;
      *v3 = &off_2330EC;
      *((_QWORD *)v3 + 1) = v27[0];
      return (int)v3;
    }
    return 0;
  }
  return (int)v3;
}


// ======================================================================
// ADDR: 0x21b5bc
// SYMBOL: sub_21B5BC
int __fastcall sub_21B5BC(__int64 a1, int a2, int a3)
{
  __int64 *v3; // r4
  _DWORD *v4; // r5
  __int64 v5; // r0
  int v6; // r0
  __int64 v8; // [sp+0h] [bp-18h] BYREF
  int v9[4]; // [sp+8h] [bp-10h] BYREF

  v8 = a1;
  v9[1] = a3;
  v3 = (__int64 *)a1;
  v4 = 0;
  v9[0] = 0;
  if ( !sub_2178F6((unsigned __int8 **)a1, v9) )
  {
    v5 = *v3;
    if ( (unsigned int)(HIDWORD(v5) - v5) >= v9[0] && v9[0] )
    {
      LODWORD(v8) = *(_DWORD *)v3;
      v6 = v5 + v9[0];
      *(_DWORD *)v3 = v6;
      HIDWORD(v8) = v6;
      if ( sub_2166CC(&v8, (int)"_GLOBAL__N", (int)"") )
      {
        v4 = sub_216EF0((int)(v3 + 51), 16);
        *v4 = &off_232EF4;
        v4[1] = 16843015;
        v4[2] = "(anonymous namespace)";
        v4[3] = "";
      }
      else
      {
        return sub_21B664(v3, &v8);
      }
    }
    else
    {
      return 0;
    }
  }
  return (int)v4;
}


// ======================================================================
// ADDR: 0x21b6d4
// SYMBOL: sub_21B6D4
_DWORD *__fastcall sub_21B6D4(int a1, unsigned int a2)
{
  __int64 v4; // r0
  __int64 v5; // kr00_8
  unsigned int v6; // r2
  int v7; // r3
  _DWORD *result; // r0
  int v9; // r0
  bool v10; // zf
  const char *v11; // r1
  int v12; // r0
  const char *v13; // r1
  int v14; // r0
  const char *v15; // r1
  int v16; // r2
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  char v23; // r8
  int v24; // r6
  char v25; // r0
  int v26; // r0
  int v27; // r5
  int v28; // [sp+4h] [bp-1Ch] BYREF
  int v29; // [sp+8h] [bp-18h] BYREF

  v5 = *(_QWORD *)a1;
  LODWORD(v4) = *(_DWORD *)(a1 + 4);
  HIDWORD(v4) = v5;
  v6 = v4 - v5;
  if ( (_DWORD)v4 == (_DWORD)v5 )
    return 0;
  v7 = *(unsigned __int8 *)v5 - 97;
  result = 0;
  switch ( *(_BYTE *)v5 )
  {
    case 'a':
      if ( v6 < 2 )
        return 0;
      v9 = *(unsigned __int8 *)(v5 + 1);
      if ( v9 == 78 )
      {
        *(_DWORD *)a1 = v5 + 2;
        v13 = "operator&=";
        return (_DWORD *)sub_21C020(a1, v13);
      }
      if ( v9 == 83 )
      {
        *(_DWORD *)a1 = v5 + 2;
        v11 = "operator=";
        return (_DWORD *)sub_21C058(a1, v11);
      }
      v10 = v9 == 110;
      if ( v9 != 110 )
        v10 = v9 == 100;
      if ( v10 )
      {
        *(_DWORD *)a1 = v5 + 2;
        v11 = "operator&";
        return (_DWORD *)sub_21C058(a1, v11);
      }
      if ( v9 == 97 )
      {
        *(_DWORD *)a1 = v5 + 2;
        v13 = "operator&&";
        return (_DWORD *)sub_21C020(a1, v13);
      }
      return 0;
    case 'c':
      if ( v6 < 2 )
        return 0;
      v16 = *(unsigned __int8 *)(v5 + 1);
      result = 0;
      switch ( v16 )
      {
        case 'v':
          v23 = *(_BYTE *)(a1 + 388);
          v24 = *(unsigned __int8 *)(a1 + 389);
          *(_BYTE *)(a1 + 388) = 0;
          v25 = a2 | v24;
          *(_DWORD *)a1 = v5 + 2;
          if ( a2 | v24 )
            v25 = 1;
          *(_BYTE *)(a1 + 389) = v25;
          v29 = sub_215C48((unsigned __int8 **)a1);
          if ( v29 )
          {
            if ( a2 )
              *(_BYTE *)a2 = 1;
            result = (_DWORD *)sub_21C090(a1, &v29);
          }
          else
          {
            result = 0;
          }
          *(_BYTE *)(a1 + 388) = v23;
          *(_BYTE *)(a1 + 389) = v24;
          return result;
        case 'm':
          *(_DWORD *)a1 = v5 + 2;
          v11 = "operator,";
          return (_DWORD *)sub_21C058(a1, v11);
        case 'o':
          *(_DWORD *)a1 = v5 + 2;
          v11 = "operator~";
          return (_DWORD *)sub_21C058(a1, v11);
      }
      if ( v16 != 108 )
        return result;
      *(_DWORD *)a1 = v5 + 2;
      v13 = "operator()";
      return (_DWORD *)sub_21C020(a1, v13);
    case 'd':
      if ( v6 < 2 )
        return 0;
      v12 = *(unsigned __int8 *)(v5 + 1);
      switch ( v12 )
      {
        case 'V':
          *(_DWORD *)a1 = v5 + 2;
          v13 = "operator/=";
          return (_DWORD *)sub_21C020(a1, v13);
        case 'v':
          *(_DWORD *)a1 = v5 + 2;
          v11 = "operator/";
          return (_DWORD *)sub_21C058(a1, v11);
        case 'e':
          goto LABEL_82;
        case 'l':
          *(_DWORD *)a1 = v5 + 2;
          return sub_21A910(a1, "operator delete");
        case 'a':
          *(_DWORD *)a1 = v5 + 2;
          return (_DWORD *)sub_21C0BC(a1, "operator delete[]");
        default:
          return 0;
      }
    case 'e':
      if ( v6 < 2 )
        return 0;
      v17 = *(unsigned __int8 *)(v5 + 1);
      if ( v17 == 79 )
      {
        *(_DWORD *)a1 = v5 + 2;
        v13 = "operator^=";
        return (_DWORD *)sub_21C020(a1, v13);
      }
      if ( v17 == 113 )
      {
        *(_DWORD *)a1 = v5 + 2;
        v13 = "operator==";
        return (_DWORD *)sub_21C020(a1, v13);
      }
      if ( v17 != 111 )
        return 0;
      *(_DWORD *)a1 = v5 + 2;
      v11 = "operator^";
      return (_DWORD *)sub_21C058(a1, v11);
    case 'g':
      if ( v6 < 2 )
        return 0;
      v18 = *(unsigned __int8 *)(v5 + 1);
      if ( v18 == 116 )
      {
        *(_DWORD *)a1 = v5 + 2;
        v11 = "operator>";
        return (_DWORD *)sub_21C058(a1, v11);
      }
      if ( v18 != 101 )
        return 0;
      *(_DWORD *)a1 = v5 + 2;
      v13 = "operator>=";
      return (_DWORD *)sub_21C020(a1, v13);
    case 'i':
      if ( v6 < 2 || *(_BYTE *)(v5 + 1) != 120 )
        return 0;
      *(_DWORD *)a1 = v5 + 2;
      v13 = "operator[]";
      return (_DWORD *)sub_21C020(a1, v13);
    case 'l':
      if ( v6 < 2 )
        return 0;
      v19 = *(unsigned __int8 *)(v5 + 1);
      if ( v19 == 83 )
      {
        *(_DWORD *)a1 = v5 + 2;
        v15 = "operator<<=";
        return (_DWORD *)sub_21C0F4(a1, v15);
      }
      if ( v19 == 116 )
      {
        *(_DWORD *)a1 = v5 + 2;
        v11 = "operator<";
        return (_DWORD *)sub_21C058(a1, v11);
      }
      if ( v19 != 105 )
      {
        if ( v19 == 115 )
        {
          *(_DWORD *)a1 = v5 + 2;
          v13 = "operator<<";
        }
        else
        {
          if ( v19 != 101 )
            return 0;
          *(_DWORD *)a1 = v5 + 2;
          v13 = "operator<=";
        }
        return (_DWORD *)sub_21C020(a1, v13);
      }
      *(_DWORD *)a1 = v5 + 2;
      LODWORD(v4) = a1;
      v26 = sub_21B5BC(v4, v6, v7);
      if ( !v26 )
        return 0;
      v27 = v26;
      result = sub_216EF0(a1 + 408, 12);
      result[2] = v27;
      *result = &off_233584;
      result[1] = 16843027;
      return result;
    case 'm':
      if ( v6 < 2 )
        return 0;
      v20 = *(unsigned __int8 *)(v5 + 1);
      switch ( v20 )
      {
        case 'I':
          *(_DWORD *)a1 = v5 + 2;
          v13 = "operator-=";
          return (_DWORD *)sub_21C020(a1, v13);
        case 'L':
          *(_DWORD *)a1 = v5 + 2;
          v13 = "operator*=";
          return (_DWORD *)sub_21C020(a1, v13);
        case 'm':
          *(_DWORD *)a1 = v5 + 2;
          v13 = "operator--";
          return (_DWORD *)sub_21C020(a1, v13);
        case 'l':
LABEL_82:
          *(_DWORD *)a1 = v5 + 2;
          v11 = "operator*";
          return (_DWORD *)sub_21C058(a1, v11);
        case 'i':
          goto LABEL_83;
      }
      return 0;
    case 'n':
      if ( v6 < 2 )
        return 0;
      v21 = *(unsigned __int8 *)(v5 + 1);
      switch ( v21 )
      {
        case 'w':
          *(_DWORD *)a1 = v5 + 2;
          return (_DWORD *)sub_21C164(a1, "operator new");
        case 'e':
          *(_DWORD *)a1 = v5 + 2;
          v13 = "operator!=";
          return (_DWORD *)sub_21C020(a1, v13);
        case 'g':
LABEL_83:
          *(_DWORD *)a1 = v5 + 2;
          v11 = "operator-";
          return (_DWORD *)sub_21C058(a1, v11);
        case 't':
          *(_DWORD *)a1 = v5 + 2;
          v11 = "operator!";
          return (_DWORD *)sub_21C058(a1, v11);
      }
      if ( v21 != 97 )
        return 0;
      *(_DWORD *)a1 = v5 + 2;
      return (_DWORD *)sub_21C12C(a1, "operator new[]");
    case 'o':
      if ( v6 < 2 )
        return 0;
      v22 = *(unsigned __int8 *)(v5 + 1);
      if ( v22 == 82 )
      {
        *(_DWORD *)a1 = v5 + 2;
        v13 = "operator|=";
        return (_DWORD *)sub_21C020(a1, v13);
      }
      if ( v22 == 114 )
      {
        *(_DWORD *)a1 = v5 + 2;
        v11 = "operator|";
        return (_DWORD *)sub_21C058(a1, v11);
      }
      if ( v22 != 111 )
        return 0;
      *(_DWORD *)a1 = v5 + 2;
      v13 = "operator||";
      return (_DWORD *)sub_21C020(a1, v13);
    case 'p':
      if ( v6 < 2 )
        return 0;
      result = 0;
      switch ( *(_BYTE *)(v5 + 1) )
      {
        case 'l':
        case 's':
          *(_DWORD *)a1 = v5 + 2;
          v11 = "operator+";
          return (_DWORD *)sub_21C058(a1, v11);
        case 'm':
          *(_DWORD *)a1 = v5 + 2;
          v15 = "operator->*";
          return (_DWORD *)sub_21C0F4(a1, v15);
        case 'n':
        case 'o':
        case 'q':
        case 'r':
          return result;
        case 'p':
          *(_DWORD *)a1 = v5 + 2;
          v13 = "operator++";
          return (_DWORD *)sub_21C020(a1, v13);
        case 't':
          *(_DWORD *)a1 = v5 + 2;
          v13 = "operator->";
          return (_DWORD *)sub_21C020(a1, v13);
        default:
          if ( *(_BYTE *)(v5 + 1) != 76 )
            return result;
          *(_DWORD *)a1 = v5 + 2;
          v13 = "operator+=";
          break;
      }
      return (_DWORD *)sub_21C020(a1, v13);
    case 'q':
      if ( v6 < 2 || *(_BYTE *)(v5 + 1) != 117 )
        return 0;
      *(_DWORD *)a1 = v5 + 2;
      v11 = "operator?";
      return (_DWORD *)sub_21C058(a1, v11);
    case 'r':
      if ( v6 < 2 )
        return 0;
      v14 = *(unsigned __int8 *)(v5 + 1);
      switch ( v14 )
      {
        case 'M':
          *(_DWORD *)a1 = v5 + 2;
          v13 = "operator%=";
          return (_DWORD *)sub_21C020(a1, v13);
        case 'S':
          *(_DWORD *)a1 = v5 + 2;
          v15 = "operator>>=";
          return (_DWORD *)sub_21C0F4(a1, v15);
        case 's':
          *(_DWORD *)a1 = v5 + 2;
          v13 = "operator>>";
          return (_DWORD *)sub_21C020(a1, v13);
      }
      if ( v14 != 109 )
        return 0;
      *(_DWORD *)a1 = v5 + 2;
      v11 = "operator%";
      return (_DWORD *)sub_21C058(a1, v11);
    case 's':
      if ( v6 < 2 || *(_BYTE *)(v5 + 1) != 115 )
        return 0;
      *(_DWORD *)a1 = v5 + 2;
      v15 = "operator<=>";
      return (_DWORD *)sub_21C0F4(a1, v15);
    case 'v':
      if ( v6 < 2 )
        return 0;
      if ( (unsigned int)*(unsigned __int8 *)(v5 + 1) - 58 < 0xFFFFFFF6 )
        return 0;
      *(_DWORD *)a1 = v5 + 2;
      LODWORD(v4) = a1;
      v28 = sub_21B5BC(v4, v6, v7);
      if ( !v28 )
        return 0;
      return (_DWORD *)sub_21C090(a1, &v28);
    default:
      return result;
  }
}


// ======================================================================

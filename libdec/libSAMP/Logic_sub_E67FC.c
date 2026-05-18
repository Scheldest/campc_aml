// ADDR: 0xe698c
// SYMBOL: sub_E698C
bool __fastcall sub_E698C(int a1)
{
  if ( sub_E71D0(a1) == 239 )
  {
    return sub_E71D0(a1) == 187 && sub_E71D0(a1) == 191;
  }
  else
  {
    sub_E7238(a1);
    return 1;
  }
}


// ======================================================================
// ADDR: 0xe69c4
// SYMBOL: sub_E69C4
int __fastcall sub_E69C4(int a1)
{
  int v2; // r0
  int v3; // r0
  unsigned int v4; // r0
  const char *v6; // r0

  v2 = sub_E71D0(a1);
  if ( v2 == 47 )
  {
    do
    {
      do
        v4 = sub_E71D0(a1) + 1;
      while ( v4 >= 0xF );
    }
    while ( !(0x4803u >> v4 << 31) );
    return 1;
  }
  else
  {
    if ( v2 == 42 )
    {
      do
      {
        while ( 1 )
        {
          v3 = sub_E71D0(a1);
          if ( v3 != 42 )
            break;
          if ( sub_E71D0(a1) == 47 )
            return 1;
          sub_E7238(a1);
        }
      }
      while ( (unsigned int)(v3 + 1) >= 2 );
      v6 = "invalid comment; missing closing '*/'";
    }
    else
    {
      v6 = "invalid comment; expecting '/' or '*' after '/'";
    }
    *(_DWORD *)(a1 + 56) = v6;
    return 0;
  }
}


// ======================================================================
// ADDR: 0xe6a30
// SYMBOL: sub_E6A30
int __fastcall sub_E6A30(int a1)
{
  int v2; // r2
  int v3; // r3
  int result; // r0
  const char *v5; // r1
  unsigned int v6; // r11
  int v7; // r0
  int v8; // r2
  __int64 v9; // d16
  __int64 v10; // d17
  __int64 *v11; // r0
  int v12; // r0
  int *v13; // r0
  __int64 v14; // d17
  __int64 v15; // d18
  int v16; // r1
  int v17; // r0
  int v18; // r1
  int v19; // r1
  __int64 v20; // [sp+0h] [bp-38h] BYREF
  __int64 v21; // [sp+8h] [bp-30h]
  __int64 v22; // [sp+10h] [bp-28h]

  sub_E7374();
  while ( 2 )
  {
    while ( 2 )
    {
      v2 = sub_E71D0(a1) + 1;
      result = 4;
      v5 = "invalid string: missing closing quote";
      switch ( v2 )
      {
        case 0:
          goto LABEL_81;
        case 1:
          v5 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
          goto LABEL_81;
        case 2:
          v5 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
          goto LABEL_81;
        case 3:
          v5 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
          goto LABEL_81;
        case 4:
          v5 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
          goto LABEL_81;
        case 5:
          v5 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
          goto LABEL_81;
        case 6:
          v5 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
          goto LABEL_81;
        case 7:
          v5 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
          goto LABEL_81;
        case 8:
          v5 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
          goto LABEL_81;
        case 9:
          v5 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
          goto LABEL_81;
        case 10:
          v5 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
          goto LABEL_81;
        case 11:
          v5 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
          goto LABEL_81;
        case 12:
          v5 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
          goto LABEL_81;
        case 13:
          v5 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
          goto LABEL_81;
        case 14:
          v5 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
          goto LABEL_81;
        case 15:
          v5 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
          goto LABEL_81;
        case 16:
          v5 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
          goto LABEL_81;
        case 17:
          v5 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
          goto LABEL_81;
        case 18:
          v5 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
          goto LABEL_81;
        case 19:
          v5 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
          goto LABEL_81;
        case 20:
          v5 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
          goto LABEL_81;
        case 21:
          v5 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
          goto LABEL_81;
        case 22:
          v5 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
          goto LABEL_81;
        case 23:
          v5 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
          goto LABEL_81;
        case 24:
          v5 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
          goto LABEL_81;
        case 25:
          v5 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
          goto LABEL_81;
        case 26:
          v5 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
          goto LABEL_81;
        case 27:
          v5 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
          goto LABEL_81;
        case 28:
          v5 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
          goto LABEL_81;
        case 29:
          v5 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
          goto LABEL_81;
        case 30:
          v5 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
          goto LABEL_81;
        case 31:
          v5 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
          goto LABEL_81;
        case 32:
          v5 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
          goto LABEL_81;
        case 33:
        case 34:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 94:
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
        case 112:
        case 113:
        case 114:
        case 115:
        case 116:
        case 117:
        case 118:
        case 119:
        case 120:
        case 121:
        case 122:
        case 123:
        case 124:
        case 125:
        case 126:
        case 127:
        case 128:
          v6 = *(_DWORD *)(a1 + 12);
          goto LABEL_4;
        case 35:
          return result;
        case 93:
          v12 = sub_E71D0(a1);
          v5 = "invalid string: forbidden character after backslash";
          if ( v12 <= 97 )
          {
            switch ( v12 )
            {
              case '"':
                LOBYTE(v6) = 34;
                break;
              case '/':
                LOBYTE(v6) = 47;
                break;
              case '\\':
                LOBYTE(v6) = 92;
                break;
              default:
                goto LABEL_81;
            }
            goto LABEL_4;
          }
          break;
        case 195:
        case 196:
        case 197:
        case 198:
        case 199:
        case 200:
        case 201:
        case 202:
        case 203:
        case 204:
        case 205:
        case 206:
        case 207:
        case 208:
        case 209:
        case 210:
        case 211:
        case 212:
        case 213:
        case 214:
        case 215:
        case 216:
        case 217:
        case 218:
        case 219:
        case 220:
        case 221:
        case 222:
        case 223:
        case 224:
          v20 = 0xBF00000080LL;
          v7 = a1;
          v8 = 2;
          goto LABEL_20;
        case 225:
          v13 = dword_E6F08;
          goto LABEL_16;
        case 226:
        case 227:
        case 228:
        case 229:
        case 230:
        case 231:
        case 232:
        case 233:
        case 234:
        case 235:
        case 236:
        case 237:
        case 239:
        case 240:
          v9 = 0xBF00000080LL;
          v10 = 0xBF00000080LL;
          v7 = a1;
          goto LABEL_7;
        case 238:
          v13 = dword_E6EE8;
LABEL_16:
          v9 = *(_QWORD *)v13;
          v10 = *((_QWORD *)v13 + 1);
          v7 = a1;
LABEL_7:
          v20 = v9;
          v21 = v10;
          v8 = 4;
          goto LABEL_20;
        case 241:
          v11 = (__int64 *)&unk_920C0;
          goto LABEL_19;
        case 242:
        case 243:
        case 244:
          v11 = (__int64 *)&unk_920D8;
          goto LABEL_19;
        case 245:
          v11 = (__int64 *)&unk_920F0;
LABEL_19:
          v14 = v11[1];
          v15 = v11[2];
          v20 = *v11;
          v21 = v14;
          v22 = v15;
          v7 = a1;
          v8 = 6;
LABEL_20:
          if ( !sub_E7440(v7, &v20, v8, v3, v20, HIDWORD(v20), v21, HIDWORD(v21), v22, HIDWORD(v22)) )
            return 14;
          continue;
        default:
          v5 = "invalid string: ill-formed UTF-8 byte";
          goto LABEL_81;
      }
      break;
    }
    switch ( v12 )
    {
      case 'n':
        LOBYTE(v6) = 10;
        goto LABEL_4;
      case 'o':
      case 'p':
      case 'q':
      case 's':
        goto LABEL_81;
      case 'r':
        LOBYTE(v6) = 13;
        goto LABEL_4;
      case 't':
        LOBYTE(v6) = 9;
        goto LABEL_4;
      case 'u':
        v6 = sub_E73C0(a1, "invalid string: forbidden character after backslash");
        if ( v6 == -1 )
          goto LABEL_83;
        if ( (v6 & 0xFFFFFC00) != 0xD800 )
        {
          if ( (v6 & 0xFFFFFC00) == 0xDC00 )
          {
            v5 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
            goto LABEL_81;
          }
          if ( (int)v6 > 127 )
          {
            if ( !(v6 >> 11) )
            {
              v19 = (unsigned __int8)(v6 >> 6) | 0xC0;
              goto LABEL_40;
            }
            if ( !HIWORD(v6) )
            {
              v18 = (unsigned __int8)(v6 >> 12) | 0xE0;
              goto LABEL_39;
            }
LABEL_38:
            std::string::push_back(a1 + 44, (unsigned __int8)(v6 >> 18) | 0xF0);
            v18 = (v6 >> 12) & 0x3F | 0x80;
LABEL_39:
            std::string::push_back(a1 + 44, v18);
            v19 = (v6 >> 6) & 0x3F | 0x80;
LABEL_40:
            std::string::push_back(a1 + 44, v19);
            LOBYTE(v6) = v6 & 0x3F | 0x80;
          }
LABEL_4:
          std::string::push_back(a1 + 44, (unsigned __int8)v6);
          continue;
        }
        if ( sub_E71D0(a1) != 92 || sub_E71D0(a1) != 117 )
        {
LABEL_84:
          v5 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
          goto LABEL_81;
        }
        v17 = sub_E73C0(a1, v16);
        if ( v17 != -1 )
        {
          if ( (v17 & 0xFFFFFC00) != 0xDC00 )
            goto LABEL_84;
          v6 = v17 + (v6 << 10) - 56613888;
          goto LABEL_38;
        }
LABEL_83:
        v5 = "invalid string: '\\u' must be followed by 4 hex digits";
LABEL_81:
        *(_DWORD *)(a1 + 56) = v5;
        return 14;
      default:
        if ( v12 == 98 )
        {
          LOBYTE(v6) = 8;
        }
        else
        {
          if ( v12 != 102 )
            goto LABEL_81;
          LOBYTE(v6) = 12;
        }
        goto LABEL_4;
    }
  }
}


// ======================================================================
// ADDR: 0xe6fb8
// SYMBOL: sub_E6FB8
int __fastcall sub_E6FB8(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r5
  int i; // r1
  int v6; // r0
  bool v7; // zf
  int v8; // r0
  int v9; // r5
  int v10; // r0
  const char *v11; // r0
  int v13; // r0
  bool v14; // zf
  int v15; // r0
  bool v16; // zf
  const char *v17; // r0
  int v18; // r0
  int v19; // r0
  _DWORD *v20; // r8
  const char *v21; // r0
  unsigned __int64 v22; // r0
  const char *v23; // r0
  __int64 v24; // r0
  char *endptr[5]; // [sp+4h] [bp-14h] BYREF

  sub_E7374();
  v2 = *(_DWORD *)(a1 + 12);
  if ( (unsigned int)(v2 - 49) >= 9 )
  {
    if ( v2 == 48 )
    {
      std::string::push_back(a1 + 44, 48);
      v3 = 5;
    }
    else
    {
      if ( v2 == 45 )
        std::string::push_back(a1 + 44, 45);
      v13 = sub_E71D0(a1);
      if ( (unsigned int)(v13 - 49) < 9 )
      {
        v2 = *(_DWORD *)(a1 + 12);
        v3 = 6;
        goto LABEL_3;
      }
      if ( v13 != 48 )
      {
        v17 = "invalid number; expected digit after '-'";
        goto LABEL_50;
      }
      std::string::push_back(a1 + 44, *(unsigned __int8 *)(a1 + 12));
      v3 = 6;
    }
    v15 = sub_E71D0(a1);
    v16 = v15 == 101;
    if ( v15 != 101 )
      v16 = v15 == 69;
    if ( v16 )
    {
      v4 = a1 + 44;
      goto LABEL_11;
    }
    if ( v15 != 46 )
      goto LABEL_44;
    v4 = a1 + 44;
LABEL_38:
    std::string::push_back(v4, *(unsigned __int8 *)(a1 + 88));
    if ( (unsigned int)(sub_E71D0(a1) - 48) > 9 )
    {
      v17 = "invalid number; expected digit after '.'";
      goto LABEL_50;
    }
    v4 = a1 + 44;
    do
    {
      std::string::push_back(a1 + 44, *(unsigned __int8 *)(a1 + 12));
      v18 = sub_E71D0(a1);
    }
    while ( (unsigned int)(v18 - 48) < 0xA );
    if ( v18 != 101 && v18 != 69 )
    {
LABEL_15:
      v10 = sub_E7238(a1);
      endptr[0] = 0;
      *(_DWORD *)_errno(v10) = 0;
      goto LABEL_16;
    }
LABEL_11:
    std::string::push_back(v4, *(unsigned __int8 *)(a1 + 12));
    v8 = sub_E71D0(a1);
    if ( (unsigned int)(v8 - 48) < 0xA )
    {
      v9 = a1 + 44;
      goto LABEL_13;
    }
    v14 = v8 == 45;
    if ( v8 != 45 )
      v14 = v8 == 43;
    if ( v14 )
    {
      v9 = a1 + 44;
      std::string::push_back(a1 + 44, *(unsigned __int8 *)(a1 + 12));
      if ( (unsigned int)(sub_E71D0(a1) - 48) < 0xA )
      {
LABEL_13:
        std::string::push_back(v9, *(unsigned __int8 *)(a1 + 12));
        if ( (unsigned int)(sub_E71D0(a1) - 48) <= 9 )
        {
          do
            std::string::push_back(a1 + 44, *(unsigned __int8 *)(a1 + 12));
          while ( (unsigned int)(sub_E71D0(a1) - 48) < 0xA );
        }
        goto LABEL_15;
      }
      v17 = "invalid number; expected digit after exponent sign";
    }
    else
    {
      v17 = "invalid number; expected '+', '-', or digit after exponent";
    }
LABEL_50:
    *(_DWORD *)(a1 + 56) = v17;
    return 14;
  }
  v3 = 5;
LABEL_3:
  v4 = a1 + 44;
  for ( i = (unsigned __int8)v2; ; i = *(unsigned __int8 *)(a1 + 12) )
  {
    std::string::push_back(a1 + 44, i);
    v6 = sub_E71D0(a1);
    if ( (unsigned int)(v6 - 48) >= 0xA )
      break;
  }
  if ( v6 == 46 )
    goto LABEL_38;
  v7 = v6 == 69;
  if ( v6 != 69 )
    v7 = v6 == 101;
  if ( v7 )
    goto LABEL_11;
LABEL_44:
  v19 = sub_E7238(a1);
  endptr[0] = 0;
  v20 = (_DWORD *)_errno(v19);
  *v20 = 0;
  if ( v3 == 6 )
  {
    v23 = *(const char **)(a1 + 52);
    if ( !(*(unsigned __int8 *)(a1 + 44) << 31) )
      v23 = (const char *)(a1 + 45);
    v24 = strtoll(v23, endptr, 10);
    if ( !*v20 )
    {
      *(_QWORD *)(a1 + 64) = v24;
      return 6;
    }
  }
  else
  {
    v21 = *(const char **)(a1 + 52);
    if ( !(*(unsigned __int8 *)(a1 + 44) << 31) )
      v21 = (const char *)(a1 + 45);
    v22 = strtoull(v21, endptr, 10);
    if ( !*v20 )
    {
      *(_QWORD *)(a1 + 72) = v22;
      return 5;
    }
  }
LABEL_16:
  v11 = *(const char **)(a1 + 52);
  if ( !(*(unsigned __int8 *)(a1 + 44) << 31) )
    v11 = (const char *)(a1 + 45);
  *(double *)(a1 + 80) = strtod(v11, endptr);
  return 7;
}


// ======================================================================
// ADDR: 0xe71d0
// SYMBOL: sub_E71D0
int __fastcall sub_E71D0(int a1)
{
  __int64 v2; // r0
  int v3; // r2
  int v4; // r0
  __int64 v5; // kr00_8
  int result; // r0
  int v7; // r0
  _BYTE v8[9]; // [sp+7h] [bp-9h] BYREF

  HIDWORD(v2) = *(_DWORD *)(a1 + 24);
  v3 = *(unsigned __int8 *)(a1 + 16);
  LODWORD(v2) = *(_DWORD *)(a1 + 20) + 1;
  ++HIDWORD(v2);
  *(_QWORD *)(a1 + 20) = v2;
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 12);
    *(_BYTE *)(a1 + 16) = 0;
  }
  else
  {
    v4 = sub_E7264(a1);
    *(_DWORD *)(a1 + 12) = v4;
  }
  if ( v4 == -1 )
    return -1;
  v5 = *(_QWORD *)(a1 + 36);
  v8[0] = v4;
  if ( (unsigned int)v5 >= HIDWORD(v5) )
  {
    sub_E72A2(a1 + 32, v8);
  }
  else
  {
    *(_BYTE *)v5 = v4;
    *(_DWORD *)(a1 + 36) = v5 + 1;
  }
  result = *(_DWORD *)(a1 + 12);
  if ( result == 10 )
  {
    v7 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 28) = v7 + 1;
    return 10;
  }
  return result;
}


// ======================================================================

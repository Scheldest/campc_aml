// ADDR: 0x2193a0
// SYMBOL: sub_2193A0
int __fastcall sub_2193A0(unsigned __int8 **a1)
{
  __int64 v2; // kr00_8
  _DWORD *v3; // r11
  int v4; // r0
  int v5; // r6
  __int64 v6; // r0
  int v7; // r0
  int *v8; // r1
  int v9; // r0
  int v10; // r6
  unsigned __int8 *v11; // r4
  unsigned __int8 *v12; // r9
  __int64 v13; // r0
  int v15; // r0
  __int64 v16; // r0
  int v17; // r0
  __int64 v18; // r0
  const char *v19; // r1
  char *v20; // r2
  unsigned __int8 *v21; // r0
  int v22; // r9
  unsigned __int8 *v23; // r10
  int v24; // r5
  int v26; // r5
  int v28; // r5
  int v30; // r0
  int *v31; // r1
  unsigned __int8 *v32; // [sp+0h] [bp-28h] BYREF
  unsigned __int8 *v33; // [sp+4h] [bp-24h]

  v2 = *(_QWORD *)a1;
  if ( (_DWORD)v2 == HIDWORD(v2) || *(_BYTE *)v2 != 76 )
    return 0;
  *a1 = (unsigned __int8 *)(v2 + 1);
  if ( HIDWORD(v2) == (_DWORD)v2 + 1 )
  {
LABEL_9:
    v9 = sub_215C48(a1);
    if ( v9 )
    {
      v10 = v9;
      v3 = 0;
      sub_215BB4(&v32, a1, 0);
      v11 = v32;
      v12 = v33;
      if ( v32 == v33 )
        return (int)v3;
      v13 = *(_QWORD *)a1;
      if ( (_DWORD)v13 != HIDWORD(v13) && *(_BYTE *)v13 == 69 )
      {
        *a1 = (unsigned __int8 *)(v13 + 1);
        v3 = sub_216EF0((int)(a1 + 102), 20);
        v3[2] = v10;
        v3[3] = v11;
        v3[4] = v12;
        *v3 = &off_2332AC;
        v3[1] = 16843076;
        return (int)v3;
      }
    }
    return 0;
  }
  v3 = 0;
  switch ( *(_BYTE *)(v2 + 1) )
  {
    case 'A':
      v4 = sub_215C48(a1);
      if ( !v4 )
        return 0;
      v5 = v4;
      v6 = *(_QWORD *)a1;
      if ( (_DWORD)v6 == HIDWORD(v6) || *(_BYTE *)v6 != 69 )
        return 0;
      *a1 = (unsigned __int8 *)(v6 + 1);
      v3 = sub_216EF0((int)(a1 + 102), 12);
      v7 = 16843074;
      v8 = &`vtable for'`anonymous namespace'::itanium_demangle::StringLiteral;
      goto LABEL_22;
    case 'D':
      if ( !sub_2155E4((__int64 *)a1, (int)"DnE", (int)"") )
        return 0;
      return sub_21A068(a1, "nullptr");
    case 'T':
      return (int)v3;
    case 'U':
      if ( (unsigned int)(HIDWORD(v2) - (v2 + 1)) < 2 || *(_BYTE *)(v2 + 2) != 108 )
        return 0;
      v3 = 0;
      v15 = sub_21A0A0(a1, 0);
      if ( !v15 )
        return (int)v3;
      v5 = v15;
      v16 = *(_QWORD *)a1;
      if ( (_DWORD)v16 == HIDWORD(v16) || *(_BYTE *)v16 != 69 )
        return 0;
      *a1 = (unsigned __int8 *)(v16 + 1);
      v3 = sub_216EF0((int)(a1 + 102), 12);
      v7 = 16843075;
      v8 = &`vtable for'`anonymous namespace'::itanium_demangle::LambdaExpr;
LABEL_22:
      *v3 = v8 + 2;
      v3[1] = v7;
      v3[2] = v5;
      return (int)v3;
    case '_':
      if ( !sub_2155E4((__int64 *)a1, (int)"_Z", (int)"") )
        return 0;
      v17 = sub_215654((int)a1);
      if ( !v17 )
        return 0;
      v3 = (_DWORD *)v17;
      v18 = *(_QWORD *)a1;
      if ( (_DWORD)v18 == HIDWORD(v18) || *(_BYTE *)v18 != 69 )
        return 0;
      *a1 = (unsigned __int8 *)(v18 + 1);
      return (int)v3;
    case 'a':
      *a1 = (unsigned __int8 *)(v2 + 2);
      v19 = "signed char";
      v20 = "";
      return sub_219FB0(a1, v19, v20);
    case 'b':
      if ( sub_2155E4((__int64 *)a1, (int)"b0E", (int)"") )
      {
        v21 = 0;
      }
      else
      {
        if ( !sub_2155E4((__int64 *)a1, (int)"b1E", (int)"") )
          return 0;
        v21 = (_BYTE *)(&dword_0 + 1);
      }
      v32 = v21;
      return sub_21A038(a1, &v32);
    case 'c':
      *a1 = (unsigned __int8 *)(v2 + 2);
      v19 = "char";
      v20 = "";
      return sub_219FB0(a1, v19, v20);
    case 'd':
      v22 = v2 + 2;
      *a1 = (unsigned __int8 *)(v2 + 2);
      if ( (unsigned int)(HIDWORD(v2) - (v2 + 2)) < 0x11 )
        return 0;
      v23 = (unsigned __int8 *)(v2 + 18);
      v24 = 0;
      v3 = 0;
      while ( v24 != 16 )
      {
        if ( !sub_21A3DC(*(unsigned __int8 *)(v22 + v24++)) )
          return (int)v3;
      }
      *a1 = v23;
      if ( v23 == (unsigned __int8 *)HIDWORD(v2) || *v23 != 69 )
        return 0;
      *a1 = (unsigned __int8 *)(v2 + 19);
      v3 = sub_216EF0((int)(a1 + 102), 16);
      v30 = 16843079;
      v31 = &`vtable for'`anonymous namespace'::itanium_demangle::FloatLiteralImpl<double>;
      goto LABEL_75;
    case 'e':
      v22 = v2 + 2;
      *a1 = (unsigned __int8 *)(v2 + 2);
      if ( (unsigned int)(HIDWORD(v2) - (v2 + 2)) < 0x11 )
        return 0;
      v23 = (unsigned __int8 *)(v2 + 18);
      v26 = 0;
      v3 = 0;
      while ( v26 != 16 )
      {
        if ( !sub_21A3DC(*(unsigned __int8 *)(v22 + v26++)) )
          return (int)v3;
      }
      *a1 = v23;
      if ( v23 == (unsigned __int8 *)HIDWORD(v2) || *v23 != 69 )
        return 0;
      *a1 = (unsigned __int8 *)(v2 + 19);
      v3 = sub_216EF0((int)(a1 + 102), 16);
      v30 = 16843080;
      v31 = &`vtable for'`anonymous namespace'::itanium_demangle::FloatLiteralImpl<long double>;
      goto LABEL_75;
    case 'f':
      v22 = v2 + 2;
      *a1 = (unsigned __int8 *)(v2 + 2);
      if ( (unsigned int)(HIDWORD(v2) - (v2 + 2)) < 9 )
        return 0;
      v23 = (unsigned __int8 *)(v2 + 10);
      v28 = 0;
      v3 = 0;
      break;
    case 'h':
      *a1 = (unsigned __int8 *)(v2 + 2);
      v19 = "unsigned char";
      v20 = "";
      return sub_219FB0(a1, v19, v20);
    case 'i':
      *a1 = (unsigned __int8 *)(v2 + 2);
      return sub_219FB0(a1, &byte_8F794, &byte_8F794);
    case 'j':
      *a1 = (unsigned __int8 *)(v2 + 2);
      v19 = "u";
      goto LABEL_51;
    case 'l':
      *a1 = (unsigned __int8 *)(v2 + 2);
      v19 = "l";
LABEL_51:
      v20 = (char *)(v19 + 1);
      return sub_219FB0(a1, v19, v20);
    case 'm':
      *a1 = (unsigned __int8 *)(v2 + 2);
      v19 = "ul";
      goto LABEL_59;
    case 'n':
      *a1 = (unsigned __int8 *)(v2 + 2);
      v19 = "__int128";
      v20 = "";
      return sub_219FB0(a1, v19, v20);
    case 'o':
      *a1 = (unsigned __int8 *)(v2 + 2);
      v19 = "unsigned __int128";
      v20 = "";
      return sub_219FB0(a1, v19, v20);
    case 's':
      *a1 = (unsigned __int8 *)(v2 + 2);
      v19 = "short";
      v20 = "";
      return sub_219FB0(a1, v19, v20);
    case 't':
      *a1 = (unsigned __int8 *)(v2 + 2);
      v19 = "unsigned short";
      v20 = "";
      return sub_219FB0(a1, v19, v20);
    case 'w':
      *a1 = (unsigned __int8 *)(v2 + 2);
      v19 = "wchar_t";
      v20 = "";
      return sub_219FB0(a1, v19, v20);
    case 'x':
      *a1 = (unsigned __int8 *)(v2 + 2);
      v19 = "ll";
LABEL_59:
      v20 = (char *)(v19 + 2);
      return sub_219FB0(a1, v19, v20);
    case 'y':
      *a1 = (unsigned __int8 *)(v2 + 2);
      v19 = "ull";
      v20 = "";
      return sub_219FB0(a1, v19, v20);
    default:
      goto LABEL_9;
  }
  while ( v28 != 8 )
  {
    if ( !sub_21A3DC(*(unsigned __int8 *)(v22 + v28++)) )
      return (int)v3;
  }
  *a1 = v23;
  if ( v23 == (unsigned __int8 *)HIDWORD(v2) || *v23 != 69 )
    return 0;
  *a1 = (unsigned __int8 *)(v2 + 11);
  v3 = sub_216EF0((int)(a1 + 102), 16);
  v30 = 16843078;
  v31 = &`vtable for'`anonymous namespace'::itanium_demangle::FloatLiteralImpl<float>;
LABEL_75:
  *v3 = v31 + 2;
  v3[1] = v30;
  v3[2] = v22;
  v3[3] = v23;
  return (int)v3;
}


// ======================================================================

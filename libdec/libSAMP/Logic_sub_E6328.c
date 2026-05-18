// ADDR: 0xe67b8
// SYMBOL: sub_E67B8
int __fastcall sub_E67B8(int a1, int a2)
{
  int v3; // r0
  int v4; // r0

  v3 = *(_DWORD *)(a2 + 16);
  if ( v3 )
  {
    if ( a2 == v3 )
    {
      *(_DWORD *)(a1 + 16) = a1;
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a2 + 16) + 12))(*(_DWORD *)(a2 + 16), a1);
      return a1;
    }
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
  }
  else
  {
    v4 = 0;
  }
  *(_DWORD *)(a1 + 16) = v4;
  return a1;
}


// ======================================================================
// ADDR: 0xe67fc
// SYMBOL: sub_E67FC
int __fastcall sub_E67FC(int a1)
{
  int v2; // r0
  int result; // r0
  const char *v4; // r0
  int v5; // r5
  int v6; // r5
  int v7; // r6
  int v8; // r5
  int v9; // [sp+0h] [bp-18h]
  _DWORD v10[5]; // [sp+4h] [bp-14h]

  if ( !*(_DWORD *)(a1 + 20) && !sub_E698C(a1) )
  {
    v4 = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
LABEL_16:
    *(_DWORD *)(a1 + 56) = v4;
    return 14;
  }
  do
  {
    sub_E71D0(a1);
    v2 = *(_DWORD *)(a1 + 12);
  }
  while ( (unsigned int)(v2 - 9) <= 0x17 && ((1 << (v2 - 9)) & 0x800013) != 0 );
  if ( *(_BYTE *)(a1 + 8) && v2 == 47 )
  {
    while ( sub_E69C4(a1) )
    {
      do
      {
        sub_E71D0(a1);
        v2 = *(_DWORD *)(a1 + 12);
      }
      while ( (unsigned int)(v2 - 9) <= 0x17 && ((1 << (v2 - 9)) & 0x800013) != 0 );
      if ( !*(_BYTE *)(a1 + 8) || v2 != 47 )
        goto LABEL_12;
    }
    return 14;
  }
LABEL_12:
  if ( v2 > 90 )
  {
    if ( v2 <= 109 )
    {
      switch ( v2 )
      {
        case '[':
          return 8;
        case ']':
          return 10;
        case 'f':
          v6 = 0;
          while ( 1 )
          {
            v7 = (unsigned __int8)aFalse_0[v6 + 1];
            if ( v7 != (unsigned __int8)sub_E71D0(a1) )
              break;
            if ( ++v6 == 4 )
              return 2;
          }
          break;
      }
    }
    else if ( v2 > 122 )
    {
      if ( v2 == 123 )
        return 9;
      if ( v2 == 125 )
        return 11;
    }
    else if ( v2 == 110 )
    {
      v8 = 1;
      v9 = 1819047278;
      while ( *((unsigned __int8 *)&v10[-1] + v8) == (unsigned __int8)sub_E71D0(a1) )
      {
        if ( ++v8 == 4 )
          return 3;
      }
    }
    else if ( v2 == 116 )
    {
      v5 = 1;
      v10[0] = 1702195828;
      while ( *((unsigned __int8 *)v10 + v5) == (unsigned __int8)sub_E71D0(a1) )
      {
        if ( ++v5 == 4 )
          return 1;
      }
    }
LABEL_46:
    v4 = "invalid literal";
    goto LABEL_16;
  }
  switch ( v2 )
  {
    case '"':
      result = sub_E6A30(a1);
      break;
    case '#':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
    case '.':
    case '/':
      goto LABEL_46;
    case ',':
      result = 13;
      break;
    case '-':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      result = sub_E6FB8(a1);
      break;
    case ':':
      result = 12;
      break;
    default:
      if ( (unsigned int)(v2 + 1) >= 2 )
        goto LABEL_46;
      result = 15;
      break;
  }
  return result;
}


// ======================================================================
// ADDR: 0xe749c
// SYMBOL: sub_E749C
int __fastcall sub_E749C(int a1, int a2, int a3, char a4)
{
  int v6; // r9
  char v8[29]; // [sp+3h] [bp-1Dh] BYREF

  *(_QWORD *)(a1 + 4) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)a1 = a2;
  v6 = a1 + 16;
  *(_QWORD *)(a1 + 29) = 0LL;
  *(_QWORD *)(a1 + 37) = 0LL;
  sub_E67B8(a1 + 48, a3);
  *(_BYTE *)(a1 + 80) = 9;
  *(_DWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 72) = a4;
  v8[0] = 1;
  sub_E8994(v6, v8);
  return a1;
}


// ======================================================================
// ADDR: 0xe7540
// SYMBOL: sub_E7540
int __fastcall sub_E7540(int a1, int a2)
{
  int v2; // r5
  int v3; // r9
  int v6; // r0
  int v7; // r0
  int v8; // r0
  double v9; // d17
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v19; // r9
  double v20; // d16
  int v21; // r0
  int v22; // r9
  double v23; // d16
  int v24; // r9
  double v25; // d16
  int v26; // r9
  double v27; // d16
  int v28; // r9
  double v29; // d16
  int v30; // r9
  double v31; // d16
  int v32; // r6
  int v33; // r0
  double v34; // d16
  int v35; // r0
  double v36; // d16
  int v37; // r4
  unsigned __int8 v38[8]; // [sp+8h] [bp-98h] BYREF
  int v39; // [sp+10h] [bp-90h]
  void *v40[3]; // [sp+1Ch] [bp-84h] BYREF
  double v41; // [sp+28h] [bp-78h] BYREF
  void *v42; // [sp+30h] [bp-70h]
  double v43; // [sp+38h] [bp-68h] BYREF
  void *v44; // [sp+40h] [bp-60h]
  double v45; // [sp+48h] [bp-58h] BYREF
  _BYTE v46[16]; // [sp+50h] [bp-50h] BYREF
  _BYTE v47[8]; // [sp+60h] [bp-40h] BYREF
  void *v48; // [sp+68h] [bp-38h]
  void *v49; // [sp+6Ch] [bp-34h] BYREF
  int v50; // [sp+70h] [bp-30h]
  int v51; // [sp+74h] [bp-2Ch]

  v2 = a1 + 32;
  v3 = a1 + 76;
  v51 = 0;
  v49 = 0;
  v50 = 0;
  while ( 2 )
  {
    switch ( *(_DWORD *)(a1 + 24) )
    {
      case 1:
        v38[0] = 1;
        sub_EA68C(&v45, a2, v38, 0);
        goto LABEL_21;
      case 2:
        v38[0] = 0;
        sub_EA68C(&v45, a2, v38, 0);
        goto LABEL_21;
      case 3:
        *(_DWORD *)v38 = 0;
        sub_EA882(&v45, a2, v38, 0);
        goto LABEL_21;
      case 4:
        sub_EAC4C(&v45, a2, v3, 0);
        goto LABEL_21;
      case 5:
        v45 = *(double *)(a1 + 104);
        sub_EAE24(v38, a2, &v45, 0);
        goto LABEL_21;
      case 6:
        v45 = *(double *)(a1 + 96);
        sub_EAA4C(v38, a2, &v45, 0);
        goto LABEL_21;
      case 7:
        v9 = fabs(*(double *)(a1 + 112));
        if ( v9 < INFINITY || v9 > INFINITY )
        {
          v45 = *(double *)(a1 + 112);
          sub_EA484(v38, a2, &v45, 0);
          goto LABEL_21;
        }
        v32 = *(_DWORD *)(a1 + 52);
        sub_E7C78(v47, v2);
        sub_E7C78(v40, v2);
        v33 = std::string::insert((int)v40, 0, "number overflow parsing '");
        v34 = *(double *)v33;
        v42 = *(void **)(v33 + 8);
        v41 = v34;
        *(_DWORD *)v33 = 0;
        *(_DWORD *)(v33 + 4) = 0;
        *(_DWORD *)(v33 + 8) = 0;
        v35 = std::string::append((int)&v41, "'");
        v36 = *(double *)v35;
        v44 = *(void **)(v35 + 8);
        v43 = v36;
        *(_DWORD *)v35 = 0;
        *(_DWORD *)(v35 + 4) = 0;
        *(_DWORD *)(v35 + 8) = 0;
        v39 = 0;
        v38[0] = 0;
        sub_E92EC(&v45, 406, &v43, v38);
        v37 = sub_E92B4(a2, v32, v47, &v45);
        LODWORD(v45) = &off_22A820;
        std::underflow_error::~underflow_error((std::underflow_error *)v46);
        std::exception::~exception((std::exception *)&v45);
        sub_E3F7A(v38);
        if ( LOBYTE(v43) << 31 )
          operator delete(v44);
        goto LABEL_50;
      case 8:
        if ( !sub_E90DC(a2, -1) )
          goto LABEL_56;
        v6 = sub_E67FC(v2);
        *(_DWORD *)(a1 + 24) = v6;
        if ( v6 == 10 )
        {
          v7 = sub_E9214(a2);
          goto LABEL_13;
        }
        LOBYTE(v45) = 1;
        sub_E8994(&v49, &v45);
        continue;
      case 9:
        if ( !sub_E8DD4(a2, -1) )
          goto LABEL_56;
        v8 = sub_E67FC(v2);
        *(_DWORD *)(a1 + 24) = v8;
        if ( v8 != 11 )
        {
          if ( v8 != 4 )
            goto LABEL_59;
          if ( !sub_E9018(a2, v3) )
            goto LABEL_56;
          v17 = sub_E67FC(v2);
          *(_DWORD *)(a1 + 24) = v17;
          if ( v17 != 12 )
            goto LABEL_60;
          LOBYTE(v45) = 0;
          sub_E8994(&v49, &v45);
          v16 = sub_E67FC(v2);
LABEL_37:
          *(_DWORD *)(a1 + 24) = v16;
          continue;
        }
        v7 = sub_E8F0C(a2);
LABEL_13:
        if ( !v7 )
        {
LABEL_56:
          v37 = 0;
          goto LABEL_44;
        }
LABEL_21:
        v10 = v50;
        if ( !v50 )
        {
LABEL_43:
          v37 = 1;
          goto LABEL_44;
        }
        while ( 2 )
        {
          if ( *((_DWORD *)v49 + ((unsigned int)(v10 - 1) >> 5)) >> ((v10 - 1) & 0x1F) << 31 )
          {
            v11 = sub_E67FC(v2);
            *(_DWORD *)(a1 + 24) = v11;
            if ( v11 == 13 )
              goto LABEL_36;
            if ( v11 != 10 )
            {
              v24 = *(_DWORD *)(a1 + 52);
              sub_E7C78(v47, v2);
              v25 = *(double *)(a1 + 52);
              v44 = *(void **)(a1 + 60);
              v43 = v25;
              sub_DC6DC(v40, "array");
              sub_E7F28(&v41, a1, 10, v40);
              v39 = 0;
              v38[0] = 0;
              sub_E7CE4(&v45, 101, &v43, &v41, v38);
              v21 = sub_E7C40(a2, v24, v47, &v45);
              goto LABEL_49;
            }
            v12 = sub_E9214(a2);
LABEL_29:
            if ( !v12 )
              goto LABEL_56;
            v10 = --v50;
            if ( !v50 )
              goto LABEL_43;
            continue;
          }
          break;
        }
        v13 = sub_E67FC(v2);
        *(_DWORD *)(a1 + 24) = v13;
        if ( v13 != 13 )
        {
          if ( v13 != 11 )
          {
            v26 = *(_DWORD *)(a1 + 52);
            sub_E7C78(v47, v2);
            v27 = *(double *)(a1 + 52);
            v44 = *(void **)(a1 + 60);
            v43 = v27;
            sub_DC6DC(v40, "object");
            sub_E7F28(&v41, a1, 11, v40);
            v39 = 0;
            v38[0] = 0;
            sub_E7CE4(&v45, 101, &v43, &v41, v38);
            v21 = sub_E7C40(a2, v26, v47, &v45);
            goto LABEL_49;
          }
          v12 = sub_E8F0C(a2);
          goto LABEL_29;
        }
        v14 = sub_E67FC(v2);
        *(_DWORD *)(a1 + 24) = v14;
        if ( v14 != 4 )
        {
LABEL_59:
          v28 = *(_DWORD *)(a1 + 52);
          sub_E7C78(v47, v2);
          v29 = *(double *)(a1 + 52);
          v44 = *(void **)(a1 + 60);
          v43 = v29;
          sub_DC6DC(v40, "object key");
          sub_E7F28(&v41, a1, 4, v40);
          v39 = 0;
          v38[0] = 0;
          sub_E7CE4(&v45, 101, &v43, &v41, v38);
          v21 = sub_E7C40(a2, v28, v47, &v45);
          goto LABEL_49;
        }
        if ( !sub_E9018(a2, v3) )
          goto LABEL_56;
        v15 = sub_E67FC(v2);
        *(_DWORD *)(a1 + 24) = v15;
        if ( v15 == 12 )
        {
LABEL_36:
          v16 = sub_E67FC(v2);
          goto LABEL_37;
        }
LABEL_60:
        v30 = *(_DWORD *)(a1 + 52);
        sub_E7C78(v47, v2);
        v31 = *(double *)(a1 + 52);
        v44 = *(void **)(a1 + 60);
        v43 = v31;
        sub_DC6DC(v40, "object separator");
        sub_E7F28(&v41, a1, 12, v40);
        v39 = 0;
        v38[0] = 0;
        sub_E7CE4(&v45, 101, &v43, &v41, v38);
        v21 = sub_E7C40(a2, v30, v47, &v45);
LABEL_49:
        v37 = v21;
        LODWORD(v45) = &off_22A820;
        std::underflow_error::~underflow_error((std::underflow_error *)v46);
        std::exception::~exception((std::exception *)&v45);
        sub_E3F7A(v38);
LABEL_50:
        if ( LOBYTE(v41) << 31 )
          operator delete(v42);
        if ( LOBYTE(v40[0]) << 31 )
          operator delete(v40[2]);
        if ( v47[0] << 31 )
          operator delete(v48);
LABEL_44:
        if ( v49 )
          operator delete(v49);
        return v37;
      case 0xE:
        v19 = *(_DWORD *)(a1 + 52);
        sub_E7C78(v47, v2);
        v20 = *(double *)(a1 + 52);
        v44 = *(void **)(a1 + 60);
        v43 = v20;
        sub_DC6DC(v40, "value");
        sub_E7F28(&v41, a1, 0, v40);
        v39 = 0;
        v38[0] = 0;
        sub_E7CE4(&v45, 101, &v43, &v41, v38);
        v21 = sub_E7C40(a2, v19, v47, &v45);
        goto LABEL_49;
      default:
        v22 = *(_DWORD *)(a1 + 52);
        sub_E7C78(v47, v2);
        v23 = *(double *)(a1 + 52);
        v44 = *(void **)(a1 + 60);
        v43 = v23;
        sub_DC6DC(v40, "value");
        sub_E7F28(&v41, a1, 16, v40);
        v39 = 0;
        v38[0] = 0;
        sub_E7CE4(&v45, 101, &v43, &v41, v38);
        v21 = sub_E7C40(a2, v22, v47, &v45);
        goto LABEL_49;
    }
  }
}


// ======================================================================
// ADDR: 0xe7c40
// SYMBOL: sub_E7C40
int __fastcall sub_E7C40(int a1, int a2, int a3, int a4)
{
  int v4; // r1
  void *exception; // r0
  void *v8; // r0

  v4 = *(unsigned __int8 *)(a1 + 72);
  *(_BYTE *)(a1 + 44) = 1;
  if ( v4 )
  {
    exception = j___cxa_allocate_exception(0x14u);
    v8 = (void *)sub_EB024(exception, a4);
    j___cxa_throw(v8, (struct type_info *)&`typeinfo for'nlohmann::detail::parse_error, (void (*)(void *))sub_E9438);
  }
  return 0;
}


// ======================================================================
// ADDR: 0xe7c78
// SYMBOL: sub_E7C78
_DWORD *__fastcall sub_E7C78(_DWORD *result, int a2)
{
  unsigned __int8 *v2; // r5
  unsigned __int8 *v3; // r6
  int v4; // r4
  unsigned int v5; // r1
  _DWORD v6[2]; // [sp+8h] [bp-28h] BYREF
  char v7; // [sp+10h] [bp-20h]

  v2 = *(unsigned __int8 **)(a2 + 36);
  v3 = *(unsigned __int8 **)(a2 + 32);
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  if ( v3 != v2 )
  {
    v4 = (int)result;
    do
    {
      v5 = *v3;
      if ( v5 > 0x1F )
      {
        result = (_DWORD *)std::string::push_back(v4, v5);
      }
      else
      {
        v6[0] = 0;
        v6[1] = 0;
        v7 = 0;
        sub_EB088(v6);
        result = (_DWORD *)std::string::append(v4, (char *)v6);
      }
      ++v3;
    }
    while ( v3 != v2 );
  }
  return result;
}


// ======================================================================
// ADDR: 0xe7ce4
// SYMBOL: sub_E7CE4
void __fastcall sub_E7CE4(_DWORD *a1, int a2, int *a3, unsigned __int8 *a4)
{
  int v8; // r0
  double v9; // d16
  _BYTE *v10; // r1
  int v11; // r2
  int v12; // r0
  double v13; // d16
  int v14; // r0
  double v15; // d16
  _DWORD *v16; // r0
  void *v17; // r1
  void *v18; // r2
  int v19; // r0
  double v20; // d16
  unsigned int v21; // r0
  unsigned __int8 *v22; // r1
  unsigned int v23; // r2
  int v24; // r0
  double v25; // d16
  int v26; // r5
  char *v27; // r2
  int v28; // r1
  void *v29[2]; // [sp+0h] [bp-98h] BYREF
  void *v30; // [sp+8h] [bp-90h]
  unsigned __int8 v31; // [sp+Ch] [bp-8Ch] BYREF
  _BYTE v32[7]; // [sp+Dh] [bp-8Bh] BYREF
  void *v33; // [sp+14h] [bp-84h]
  void *v34[3]; // [sp+18h] [bp-80h] BYREF
  _BYTE v35[8]; // [sp+24h] [bp-74h] BYREF
  void *v36; // [sp+2Ch] [bp-6Ch]
  double v37; // [sp+30h] [bp-68h] BYREF
  void *v38; // [sp+38h] [bp-60h]
  double v39; // [sp+40h] [bp-58h] BYREF
  void *v40; // [sp+48h] [bp-50h]
  double v41; // [sp+50h] [bp-48h] BYREF
  void *v42; // [sp+58h] [bp-40h]
  double v43; // [sp+60h] [bp-38h] BYREF
  void *v44; // [sp+68h] [bp-30h]
  double v45; // [sp+70h] [bp-28h] BYREF
  void *v46; // [sp+78h] [bp-20h]

  sub_DC6DC(v34, "parse_error");
  sub_E5F8C((int)v35, (int)v34, a2);
  v8 = std::string::append((int)v35, "parse error");
  v9 = *(double *)v8;
  v38 = *(void **)(v8 + 8);
  v37 = v9;
  *(_DWORD *)v8 = 0;
  *(_DWORD *)(v8 + 4) = 0;
  *(_DWORD *)(v8 + 8) = 0;
  sub_EB0B0(&v31, a3);
  v11 = *(_DWORD *)&v32[3];
  v10 = v33;
  if ( (v31 & 1) == 0 )
  {
    v10 = v32;
    v11 = v31 >> 1;
  }
  v12 = std::string::append(&v37, v10, v11, v31 & 1);
  v13 = *(double *)v12;
  v40 = *(void **)(v12 + 8);
  v39 = v13;
  *(_DWORD *)v12 = 0;
  *(_DWORD *)(v12 + 4) = 0;
  *(_DWORD *)(v12 + 8) = 0;
  v14 = std::string::append((int)&v39, ": ");
  v15 = *(double *)v14;
  v42 = *(void **)(v14 + 8);
  v41 = v15;
  *(_DWORD *)v14 = 0;
  *(_DWORD *)(v14 + 4) = 0;
  *(_DWORD *)(v14 + 8) = 0;
  v16 = sub_DC6DC(v29, &byte_8F794);
  v18 = v29[1];
  v17 = v30;
  if ( ((int)v29[0] & 1) == 0 )
  {
    v17 = (char *)v16 + 1;
    v18 = (void *)(LOBYTE(v29[0]) >> 1);
  }
  v19 = std::string::append(&v41, v17, v18, LOBYTE(v29[0]));
  v20 = *(double *)v19;
  v44 = *(void **)(v19 + 8);
  v43 = v20;
  *(_DWORD *)v19 = 0;
  *(_DWORD *)(v19 + 4) = 0;
  *(_DWORD *)(v19 + 8) = 0;
  v21 = *a4;
  v22 = (unsigned __int8 *)*((_DWORD *)a4 + 2);
  v23 = *((_DWORD *)a4 + 1);
  if ( (v21 & 1) == 0 )
  {
    v22 = a4 + 1;
    v23 = v21 >> 1;
  }
  v24 = std::string::append(&v43, v22, v23, v21 & 1);
  v25 = *(double *)v24;
  v46 = *(void **)(v24 + 8);
  v45 = v25;
  *(_DWORD *)v24 = 0;
  *(_DWORD *)(v24 + 4) = 0;
  *(_DWORD *)(v24 + 8) = 0;
  if ( LOBYTE(v43) << 31 )
    operator delete(v44);
  if ( LOBYTE(v29[0]) << 31 )
    operator delete(v30);
  if ( LOBYTE(v41) << 31 )
    operator delete(v42);
  if ( LOBYTE(v39) << 31 )
    operator delete(v40);
  if ( v31 << 31 )
    operator delete(v33);
  if ( LOBYTE(v37) << 31 )
    operator delete(v38);
  if ( v35[0] << 31 )
    operator delete(v36);
  if ( LOBYTE(v34[0]) << 31 )
    operator delete(v34[2]);
  v26 = *a3;
  v27 = (char *)v46;
  if ( !(LOBYTE(v45) << 31) )
    v27 = (char *)&v45 + 1;
  sub_E60A8(__SPAIR64__(a2, (unsigned int)a1), v27);
  v28 = LOBYTE(v45);
  a1[4] = v26;
  *a1 = &off_22A8A0;
  if ( v28 << 31 )
    operator delete(v46);
}


// ======================================================================
// ADDR: 0xe7f28
// SYMBOL: sub_E7F28
void __fastcall sub_E7F28(_DWORD *a1, int a2, int a3, unsigned __int8 *a4)
{
  unsigned int v8; // r0
  unsigned int v9; // r1
  int v10; // r0
  double v11; // d16
  char *v12; // r1
  int v13; // r2
  int v14; // r0
  double v15; // d16
  char *v16; // r1
  void *v17; // r2
  int v18; // r0
  double v19; // d16
  int v20; // r0
  double v21; // d16
  char *v22; // r1
  int v23; // r2
  void *v24; // r0
  char *v25; // r0
  int v26; // r0
  double v27; // d16
  char *v28; // r1
  int v29; // r2
  char *v30; // r0
  int v31; // r0
  double v32; // d16
  char *v33; // r1
  int v34; // r2
  void *v35[2]; // [sp+0h] [bp-58h] BYREF
  void *v36; // [sp+8h] [bp-50h]
  _DWORD v37[3]; // [sp+Ch] [bp-4Ch] BYREF
  double v38; // [sp+18h] [bp-40h] BYREF
  void *v39; // [sp+20h] [bp-38h]
  double v40; // [sp+28h] [bp-30h] BYREF
  void *v41; // [sp+30h] [bp-28h]
  double v42; // [sp+38h] [bp-20h] BYREF
  void *v43; // [sp+40h] [bp-18h]

  sub_DC6DC(a1, "syntax error ");
  v8 = *a4;
  v9 = *((_DWORD *)a4 + 1);
  if ( !(v8 << 31) )
    v9 = v8 >> 1;
  if ( v9 )
  {
    std::operator+<char>(&v40, "while parsing ", a4);
    v10 = std::string::append((int)&v40, " ");
    v11 = *(double *)v10;
    v43 = *(void **)(v10 + 8);
    v42 = v11;
    *(_DWORD *)v10 = 0;
    *(_DWORD *)(v10 + 4) = 0;
    *(_DWORD *)(v10 + 8) = 0;
    v13 = HIDWORD(v42);
    v12 = (char *)v43;
    if ( (LOBYTE(v42) & 1) == 0 )
    {
      v12 = (char *)&v42 + 1;
      v13 = LOBYTE(v42) >> 1;
    }
    std::string::append(a1, v12, v13, &v42);
    if ( LOBYTE(v42) << 31 )
      operator delete(v43);
    if ( LOBYTE(v40) << 31 )
      operator delete(v41);
  }
  std::string::append((int)a1, "- ");
  if ( *(_DWORD *)(a2 + 24) == 14 )
  {
    sub_DC6DC(v37, *(char **)(a2 + 88));
    v14 = std::string::append((int)v37, "; last read: '");
    v15 = *(double *)v14;
    v39 = *(void **)(v14 + 8);
    v38 = v15;
    *(_DWORD *)v14 = 0;
    *(_DWORD *)(v14 + 4) = 0;
    *(_DWORD *)(v14 + 8) = 0;
    sub_E7C78(v35, a2 + 32);
    v17 = v35[1];
    v16 = (char *)v36;
    if ( ((int)v35[0] & 1) == 0 )
    {
      v16 = (char *)v35 + 1;
      v17 = (void *)(LOBYTE(v35[0]) >> 1);
    }
    v18 = std::string::append(&v38, v16, v17, (int)v35[0] & 1);
    v19 = *(double *)v18;
    v41 = *(void **)(v18 + 8);
    v40 = v19;
    *(_DWORD *)v18 = 0;
    *(_DWORD *)(v18 + 4) = 0;
    *(_DWORD *)(v18 + 8) = 0;
    v20 = std::string::append((int)&v40, "'");
    v21 = *(double *)v20;
    v43 = *(void **)(v20 + 8);
    v42 = v21;
    *(_DWORD *)v20 = 0;
    *(_DWORD *)(v20 + 4) = 0;
    *(_DWORD *)(v20 + 8) = 0;
    v23 = HIDWORD(v42);
    v22 = (char *)v43;
    if ( (LOBYTE(v42) & 1) == 0 )
    {
      v22 = (char *)&v42 + 1;
      v23 = LOBYTE(v42) >> 1;
    }
    std::string::append(a1, v22, v23, &v42);
    if ( LOBYTE(v42) << 31 )
      operator delete(v43);
    if ( LOBYTE(v40) << 31 )
      operator delete(v41);
    if ( LOBYTE(v35[0]) << 31 )
      operator delete(v36);
    if ( LOBYTE(v38) << 31 )
      operator delete(v39);
    if ( LOBYTE(v37[0]) << 31 )
    {
      v24 = (void *)v37[2];
LABEL_31:
      operator delete(v24);
    }
  }
  else
  {
    v25 = (char *)((int (*)(void))sub_EB1CC)();
    sub_DC6DC(&v40, v25);
    v26 = std::string::insert((int)&v40, 0, "unexpected ");
    v27 = *(double *)v26;
    v43 = *(void **)(v26 + 8);
    v42 = v27;
    *(_DWORD *)v26 = 0;
    *(_DWORD *)(v26 + 4) = 0;
    *(_DWORD *)(v26 + 8) = 0;
    v29 = HIDWORD(v42);
    v28 = (char *)v43;
    if ( (LOBYTE(v42) & 1) == 0 )
    {
      v28 = (char *)&v42 + 1;
      v29 = LOBYTE(v42) >> 1;
    }
    std::string::append(a1, v28, v29, &v42);
    if ( LOBYTE(v42) << 31 )
      operator delete(v43);
    if ( LOBYTE(v40) << 31 )
    {
      v24 = v41;
      goto LABEL_31;
    }
  }
  if ( a3 )
  {
    v30 = (char *)sub_EB1CC(a3);
    sub_DC6DC(&v40, v30);
    v31 = std::string::insert((int)&v40, 0, "; expected ");
    v32 = *(double *)v31;
    v43 = *(void **)(v31 + 8);
    v42 = v32;
    *(_DWORD *)v31 = 0;
    *(_DWORD *)(v31 + 4) = 0;
    *(_DWORD *)(v31 + 8) = 0;
    v34 = HIDWORD(v42);
    v33 = (char *)v43;
    if ( (LOBYTE(v42) & 1) == 0 )
    {
      v33 = (char *)&v42 + 1;
      v34 = LOBYTE(v42) >> 1;
    }
    std::string::append(a1, v33, v34, &v42);
    if ( LOBYTE(v42) << 31 )
      operator delete(v43);
    if ( LOBYTE(v40) << 31 )
      operator delete(v41);
  }
}


// ======================================================================
// ADDR: 0xe8218
// SYMBOL: sub_E8218
int __fastcall sub_E8218(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0

  sub_E3F7A((unsigned __int8 *)(a1 + 80));
  v2 = *(_DWORD **)(a1 + 64);
  if ( (_DWORD *)(a1 + 48) == v2 )
  {
    v3 = 4;
  }
  else
  {
    if ( !v2 )
      goto LABEL_6;
    v3 = 5;
  }
  (*(void (**)(void))(*v2 + 4 * v3))();
LABEL_6:
  v4 = *(void **)(a1 + 28);
  if ( v4 )
    operator delete(v4);
  v5 = *(void **)(a1 + 16);
  if ( v5 )
    operator delete(v5);
  v6 = *(void **)(a1 + 4);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 8) = v6;
    operator delete(v6);
  }
  return a1;
}


// ======================================================================
// ADDR: 0xe8260
// SYMBOL: sub_E8260
int __fastcall sub_E8260(int a1, int a2)
{
  int v3; // r6
  int v4; // r8
  int v6; // r0
  int v7; // r0
  double v8; // d17
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r0
  int v20; // r8
  double v21; // d16
  int v22; // r8
  double v23; // d16
  int v24; // r8
  double v25; // d16
  int v26; // r0
  int v27; // r8
  double v28; // d16
  int v29; // r8
  double v30; // d16
  int v31; // r8
  double v32; // d16
  int v33; // r5
  int v34; // r0
  double v35; // d16
  int v36; // r0
  double v37; // d16
  int v38; // r4
  unsigned __int8 v39[8]; // [sp+8h] [bp-98h] BYREF
  int v40; // [sp+10h] [bp-90h]
  void *v41[3]; // [sp+1Ch] [bp-84h] BYREF
  double v42; // [sp+28h] [bp-78h] BYREF
  void *v43; // [sp+30h] [bp-70h]
  double v44; // [sp+38h] [bp-68h] BYREF
  void *v45; // [sp+40h] [bp-60h]
  double v46; // [sp+48h] [bp-58h] BYREF
  _BYTE v47[16]; // [sp+50h] [bp-50h] BYREF
  void *v48[3]; // [sp+60h] [bp-40h] BYREF
  void *v49; // [sp+6Ch] [bp-34h] BYREF
  int v50; // [sp+70h] [bp-30h]
  int v51; // [sp+74h] [bp-2Ch]

  v51 = 0;
  v3 = a1 + 32;
  v49 = 0;
  v50 = 0;
  v4 = a1 + 76;
  while ( 2 )
  {
    switch ( *(_DWORD *)(a1 + 24) )
    {
      case 1:
        LOBYTE(v46) = 1;
        sub_EB7B0(a2, &v46);
        goto LABEL_19;
      case 2:
        LOBYTE(v46) = 0;
        sub_EB7B0(a2, &v46);
        goto LABEL_19;
      case 3:
        LODWORD(v46) = 0;
        sub_EB90A(a2, &v46);
        goto LABEL_19;
      case 4:
        sub_EBB6E(a2, v4);
        goto LABEL_19;
      case 5:
        v46 = *(double *)(a1 + 104);
        sub_EBCB6(a2, &v46);
        goto LABEL_19;
      case 6:
        v46 = *(double *)(a1 + 96);
        sub_EBA0C(a2, &v46);
        goto LABEL_19;
      case 7:
        v8 = fabs(*(double *)(a1 + 112));
        if ( v8 < INFINITY || v8 > INFINITY )
        {
          v46 = *(double *)(a1 + 112);
          sub_EB63E(a2, &v46);
          goto LABEL_19;
        }
        v33 = *(_DWORD *)(a1 + 52);
        sub_E7C78(v48, v3);
        sub_E7C78(v41, v3);
        v34 = std::string::insert((int)v41, 0, "number overflow parsing '");
        v35 = *(double *)v34;
        v43 = *(void **)(v34 + 8);
        v42 = v35;
        *(_DWORD *)v34 = 0;
        *(_DWORD *)(v34 + 4) = 0;
        *(_DWORD *)(v34 + 8) = 0;
        v36 = std::string::append((int)&v42, "'");
        v37 = *(double *)v36;
        v45 = *(void **)(v36 + 8);
        v44 = v37;
        *(_DWORD *)v36 = 0;
        *(_DWORD *)(v36 + 4) = 0;
        *(_DWORD *)(v36 + 8) = 0;
        v40 = 0;
        v39[0] = 0;
        sub_E92EC(&v46, 406, &v44, v39);
        v38 = sub_EB3E8(a2, v33, v48, &v46);
        LODWORD(v46) = &off_22A820;
        std::underflow_error::~underflow_error((std::underflow_error *)v47);
        std::exception::~exception((std::exception *)&v46);
        sub_E3F7A(v39);
        if ( LOBYTE(v44) << 31 )
          operator delete(v45);
        goto LABEL_43;
      case 8:
        if ( !sub_EB2E8(a2, -1) )
          goto LABEL_52;
        v6 = sub_E67FC(v3);
        *(_DWORD *)(a1 + 24) = v6;
        if ( v6 == 10 )
          goto LABEL_12;
        LOBYTE(v46) = 1;
        sub_E8994(&v49, &v46);
        continue;
      case 9:
        if ( !sub_EB1E8(a2, -1) )
        {
LABEL_52:
          v38 = 0;
          goto LABEL_37;
        }
        v7 = sub_E67FC(v3);
        *(_DWORD *)(a1 + 24) = v7;
        if ( v7 != 11 )
        {
          if ( v7 != 4 )
            goto LABEL_50;
          v17 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 8) - 4) + 8);
          *(_DWORD *)v39 = v4;
          ((void (__fastcall *)(double *, int, int, void *, unsigned __int8 *, void **))sub_EA136)(
            &v46,
            v17,
            v4,
            &unk_9216D,
            v39,
            v48);
          *(_DWORD *)(a2 + 16) = LODWORD(v46) + 32;
          v18 = sub_E67FC(v3);
          *(_DWORD *)(a1 + 24) = v18;
          if ( v18 != 12 )
            goto LABEL_51;
          LOBYTE(v46) = 0;
          sub_E8994(&v49, &v46);
          v16 = sub_E67FC(v3);
LABEL_32:
          *(_DWORD *)(a1 + 24) = v16;
          continue;
        }
LABEL_12:
        *(_DWORD *)(a2 + 8) -= 4;
LABEL_19:
        v9 = v50;
        if ( !v50 )
        {
LABEL_36:
          v38 = 1;
          goto LABEL_37;
        }
        while ( 2 )
        {
          if ( *((_DWORD *)v49 + ((unsigned int)(v9 - 1) >> 5)) >> ((v9 - 1) & 0x1F) << 31 )
          {
            v10 = sub_E67FC(v3);
            *(_DWORD *)(a1 + 24) = v10;
            if ( v10 == 13 )
              goto LABEL_31;
            if ( v10 != 10 )
            {
              v24 = *(_DWORD *)(a1 + 52);
              sub_E7C78(v48, v3);
              v25 = *(double *)(a1 + 52);
              v45 = *(void **)(a1 + 60);
              v44 = v25;
              sub_DC6DC(v41, "array");
              sub_E7F28(&v42, a1, 10, (unsigned __int8 *)v41);
              v40 = 0;
              v39[0] = 0;
              sub_E7CE4(&v46, 101, (int *)&v44, (unsigned __int8 *)&v42);
              v26 = sub_E8960(a2, v24, v48, &v46);
              goto LABEL_42;
            }
LABEL_26:
            v12 = v50;
            *(_DWORD *)(a2 + 8) -= 4;
            v9 = v12 - 1;
            v50 = v12 - 1;
            if ( v12 == 1 )
              goto LABEL_36;
            continue;
          }
          break;
        }
        v11 = sub_E67FC(v3);
        *(_DWORD *)(a1 + 24) = v11;
        if ( v11 != 13 )
        {
          if ( v11 != 11 )
          {
            v27 = *(_DWORD *)(a1 + 52);
            sub_E7C78(v48, v3);
            v28 = *(double *)(a1 + 52);
            v45 = *(void **)(a1 + 60);
            v44 = v28;
            sub_DC6DC(v41, "object");
            sub_E7F28(&v42, a1, 11, (unsigned __int8 *)v41);
            v40 = 0;
            v39[0] = 0;
            sub_E7CE4(&v46, 101, (int *)&v44, (unsigned __int8 *)&v42);
            v26 = sub_E8960(a2, v27, v48, &v46);
            goto LABEL_42;
          }
          goto LABEL_26;
        }
        v13 = sub_E67FC(v3);
        *(_DWORD *)(a1 + 24) = v13;
        if ( v13 != 4 )
        {
LABEL_50:
          v29 = *(_DWORD *)(a1 + 52);
          sub_E7C78(v48, v3);
          v30 = *(double *)(a1 + 52);
          v45 = *(void **)(a1 + 60);
          v44 = v30;
          sub_DC6DC(v41, "object key");
          sub_E7F28(&v42, a1, 4, (unsigned __int8 *)v41);
          v40 = 0;
          v39[0] = 0;
          sub_E7CE4(&v46, 101, (int *)&v44, (unsigned __int8 *)&v42);
          v26 = sub_E8960(a2, v29, v48, &v46);
          goto LABEL_42;
        }
        v14 = *(_DWORD *)(*(_DWORD *)(a2 + 8) - 4);
        *(_DWORD *)v39 = v4;
        ((void (__fastcall *)(double *, _DWORD, int, void *, unsigned __int8 *, void **))sub_EA136)(
          &v46,
          *(_DWORD *)(v14 + 8),
          v4,
          &unk_9216D,
          v39,
          v48);
        *(_DWORD *)(a2 + 16) = LODWORD(v46) + 32;
        v15 = sub_E67FC(v3);
        *(_DWORD *)(a1 + 24) = v15;
        if ( v15 == 12 )
        {
LABEL_31:
          v16 = sub_E67FC(v3);
          goto LABEL_32;
        }
LABEL_51:
        v31 = *(_DWORD *)(a1 + 52);
        sub_E7C78(v48, v3);
        v32 = *(double *)(a1 + 52);
        v45 = *(void **)(a1 + 60);
        v44 = v32;
        sub_DC6DC(v41, "object separator");
        sub_E7F28(&v42, a1, 12, (unsigned __int8 *)v41);
        v40 = 0;
        v39[0] = 0;
        sub_E7CE4(&v46, 101, (int *)&v44, (unsigned __int8 *)&v42);
        v26 = sub_E8960(a2, v31, v48, &v46);
LABEL_42:
        v38 = v26;
        LODWORD(v46) = &off_22A820;
        std::underflow_error::~underflow_error((std::underflow_error *)v47);
        std::exception::~exception((std::exception *)&v46);
        sub_E3F7A(v39);
LABEL_43:
        if ( LOBYTE(v42) << 31 )
          operator delete(v43);
        if ( LOBYTE(v41[0]) << 31 )
          operator delete(v41[2]);
        if ( LOBYTE(v48[0]) << 31 )
          operator delete(v48[2]);
LABEL_37:
        if ( v49 )
          operator delete(v49);
        return v38;
      case 0xE:
        v20 = *(_DWORD *)(a1 + 52);
        sub_E7C78(v48, v3);
        v21 = *(double *)(a1 + 52);
        v45 = *(void **)(a1 + 60);
        v44 = v21;
        sub_DC6DC(v41, "value");
        sub_E7F28(&v42, a1, 0, (unsigned __int8 *)v41);
        v40 = 0;
        v39[0] = 0;
        sub_E7CE4(&v46, 101, (int *)&v44, (unsigned __int8 *)&v42);
        v26 = sub_E8960(a2, v20, v48, &v46);
        goto LABEL_42;
      default:
        v22 = *(_DWORD *)(a1 + 52);
        sub_E7C78(v48, v3);
        v23 = *(double *)(a1 + 52);
        v45 = *(void **)(a1 + 60);
        v44 = v23;
        sub_DC6DC(v41, "value");
        sub_E7F28(&v42, a1, 16, (unsigned __int8 *)v41);
        v40 = 0;
        v39[0] = 0;
        sub_E7CE4(&v46, 101, (int *)&v44, (unsigned __int8 *)&v42);
        v26 = sub_E8960(a2, v22, v48, &v46);
        goto LABEL_42;
    }
  }
}


// ======================================================================
// ADDR: 0xe8960
// SYMBOL: sub_E8960
int __fastcall sub_E8960(int a1, int a2, int a3, int a4)
{
  int v4; // r1
  void *exception; // r0
  void *v8; // r0

  v4 = *(unsigned __int8 *)(a1 + 21);
  *(_BYTE *)(a1 + 20) = 1;
  if ( v4 )
  {
    exception = j___cxa_allocate_exception(0x14u);
    v8 = (void *)sub_EB024(exception, a4);
    j___cxa_throw(v8, (struct type_info *)&`typeinfo for'nlohmann::detail::parse_error, (void (*)(void *))sub_E9438);
  }
  return 0;
}


// ======================================================================

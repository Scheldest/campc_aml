// ADDR: 0xe3fe0
// SYMBOL: sub_E3FE0
int sub_E3FE0()
{
  int v0; // r0
  double v1; // d16
  int v2; // r0
  int v3; // r0
  int v4; // r5
  int v5; // r6
  std::runtime_error *exception; // r4
  char *v7; // r0
  int v8; // r0
  char *v9; // r0
  double v10; // d16
  char *v11; // r0
  __int16 v12; // r5
  char *v14; // r0
  double v15; // d16
  std::runtime_error *v16; // r4
  void *v17[3]; // [sp+8h] [bp-150h] BYREF
  void *v18[2]; // [sp+14h] [bp-144h] BYREF
  void *v19; // [sp+1Ch] [bp-13Ch]
  double v20; // [sp+20h] [bp-138h] BYREF
  void *v21; // [sp+28h] [bp-130h]
  double v22; // [sp+30h] [bp-128h] BYREF
  void *v23; // [sp+38h] [bp-120h]
  double v24; // [sp+40h] [bp-118h] BYREF
  void *v25; // [sp+48h] [bp-110h]
  void *v26[2]; // [sp+50h] [bp-108h] BYREF
  void *v27; // [sp+58h] [bp-100h]
  _DWORD v28[4]; // [sp+60h] [bp-F8h] BYREF
  double v29; // [sp+70h] [bp-E8h] BYREF
  void *v30; // [sp+78h] [bp-E0h]
  unsigned __int8 v31[20]; // [sp+80h] [bp-D8h] BYREF
  _DWORD v32[2]; // [sp+94h] [bp-C4h] BYREF
  int v33; // [sp+9Ch] [bp-BCh] BYREF
  _UNKNOWN **v34; // [sp+F8h] [bp-60h] BYREF

  sub_E45B4(v32, &dword_23DBF8, 8);
  if ( (*((_BYTE *)&v32[4] + *(_DWORD *)(v32[0] - 12)) & 5) == 0 )
  {
    sub_E4664(v32, &byte_23DC08);
    v0 = sub_E4710(&byte_23DC08, "launcher");
    sub_E4834(v31, v0);
    sub_DC6DC(v28, "nickname");
    sub_DC6DC(v26, &byte_8F794);
    sub_E4890(&v29, v31, v28, v26);
    if ( (unsigned __int8)dword_23DC38 << 31 )
      operator delete((void *)dword_23DC40);
    v1 = v29;
    dword_23DC40 = (int)v30;
    LOWORD(v29) = 0;
    *(double *)&dword_23DC38 = v1;
    if ( LOBYTE(v26[0]) << 31 )
      operator delete(v27);
    if ( LOBYTE(v28[0]) << 31 )
      operator delete((void *)v28[2]);
    sub_DC6DC(&v29, "chat_pagesize");
    v28[0] = 1;
    dword_237518 = 5 * sub_E49A8(v31, &v29, v28) + 5;
    if ( LOBYTE(v29) << 31 )
      operator delete(v30);
    sub_DC6DC(&v29, "chat_print_timestamp");
    LOBYTE(v28[0]) = 0;
    byte_23DC44 = sub_E4ABC(v31, &v29, v28);
    if ( LOBYTE(v29) << 31 )
      operator delete(v30);
    sub_DC6DC(&v29, "chat_fontsize");
    v28[0] = 2;
    dword_23751C = dword_92020[sub_E4BDC(v31, &v29, v28)];
    if ( LOBYTE(v29) << 31 )
      operator delete(v30);
    v2 = sub_E4710(&byte_23DC08, "client");
    sub_E4834(&v29, v2);
    v3 = sub_E4710(&v29, "server");
    sub_E4834(v28, v3);
    sub_DC6DC(v26, "id");
    LODWORD(v24) = 0;
    v4 = sub_E49A8(v28, v26, &v24);
    if ( LOBYTE(v26[0]) << 31 )
      operator delete(v27);
    sub_DC6DC(v26, "serverid");
    LODWORD(v24) = 1;
    v5 = sub_E49A8(v28, v26, &v24);
    if ( LOBYTE(v26[0]) << 31 )
      operator delete(v27);
    dword_23DF1C = v4;
    dword_23DEE8 = v5;
    if ( v5 | v4 )
    {
      if ( !sub_E4E08(v4, v5) )
      {
        _android_log_print(6, "AXL", "INVALID SERVER (%d:%d)", v4, v5);
        exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
        std::runtime_error::runtime_error(exception, "invalid server");
        j___cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::runtime_error,
          (void (*)(void *))std::underflow_error::~underflow_error);
      }
    }
    else
    {
      if ( LOBYTE(v29) != 1 || (v7 = (char *)sub_EC70C((int)v30, "test"), (char *)v30 + 4 == v7) )
      {
        v16 = (std::runtime_error *)j___cxa_allocate_exception(8u);
        std::runtime_error::runtime_error(v16, "json does not contain test server");
        j___cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::runtime_error,
          (void (*)(void *))std::underflow_error::~underflow_error);
      }
      v8 = sub_E4710(&v29, "test");
      sub_E4834(v26, v8);
      sub_DC6DC(&v24, "127.0.0.1");
      if ( LOBYTE(v26[0]) != 1 )
        goto LABEL_35;
      v9 = (char *)sub_EC75A((int)v27, "ip");
      if ( (char *)v27 + 4 != v9 )
      {
        sub_DC6DC(&v20, "ip");
        sub_DC6DC(v18, "127.0.0.1");
        sub_E4890(&v22, v26, &v20, v18);
        if ( LOBYTE(v24) << 31 )
          operator delete(v25);
        v10 = v22;
        v25 = v23;
        LOWORD(v22) = 0;
        v24 = v10;
        if ( LOBYTE(v18[0]) << 31 )
          operator delete(v19);
        if ( LOBYTE(v20) << 31 )
          operator delete(v21);
      }
      if ( LOBYTE(v26[0]) == 1 )
      {
        v11 = (char *)sub_EC70C((int)v27, "port");
        if ( (char *)v27 + 4 == v11 )
        {
          v12 = 7777;
        }
        else
        {
          sub_DC6DC(&v22, "port");
          LOWORD(v20) = 7777;
          v12 = sub_E4CF0(v26, &v22, &v20);
          if ( LOBYTE(v22) << 31 )
            operator delete(v23);
        }
        v22 = 0.0;
        v23 = 0;
        if ( LOBYTE(v26[0]) == 1 )
        {
          v14 = (char *)sub_EC70C((int)v27, "pass");
          if ( (char *)v27 + 4 != v14 )
          {
            sub_DC6DC(v18, "pass");
            sub_DC6DC(v17, &byte_8F794);
            sub_E4890(&v20, v26, v18, v17);
            v15 = v20;
            LOWORD(v20) = 0;
            v23 = v21;
            v22 = v15;
            if ( LOBYTE(v17[0]) << 31 )
              operator delete(v17[2]);
            if ( LOBYTE(v18[0]) << 31 )
              operator delete(v19);
          }
        }
      }
      else
      {
LABEL_35:
        v12 = 7777;
        v22 = 0.0;
        v23 = 0;
      }
      std::string::operator=(&dword_23DC18);
      word_23DC24 = v12;
      std::string::operator=(&dword_23DC28);
      if ( LOBYTE(v22) << 31 )
        operator delete(v23);
      if ( LOBYTE(v24) << 31 )
        operator delete(v25);
      sub_E3F7A((unsigned __int8 *)v26);
    }
    sub_E3F7A((unsigned __int8 *)v28);
    sub_E3F7A((unsigned __int8 *)&v29);
    sub_E3F7A(v31);
  }
  v32[0] = &off_22A760;
  v34 = &off_22A774;
  sub_E50B0(&v33);
  std::istream::~istream(v32, off_22A780);
  return std::ios::~ios(&v34);
}


// ======================================================================

// ADDR: 0xefd50
// SYMBOL: sub_EFD50
int __fastcall sub_EFD50(int a1, int a2, std::locale *a3, int a4, int a5)
{
  int v9; // r4
  const std::locale *v10; // r4
  int v11; // r0
  std::runtime_error *exception; // r4
  _BYTE v14[4]; // [sp+Ch] [bp-9Ch] BYREF
  _UNKNOWN **v15; // [sp+10h] [bp-98h] BYREF
  _DWORD v16[6]; // [sp+14h] [bp-94h] BYREF
  int v17; // [sp+2Ch] [bp-7Ch]
  int v18; // [sp+5Ch] [bp-4Ch]
  int v19; // [sp+60h] [bp-48h]
  _DWORD v20[9]; // [sp+64h] [bp-44h] BYREF
  _BYTE v21[4]; // [sp+88h] [bp-20h] BYREF
  _BYTE v22[28]; // [sp+8Ch] [bp-1Ch] BYREF

  std::streambuf::basic_streambuf(v20);
  v20[8] = a1;
  v20[0] = &off_22A98C;
  v16[0] = &off_2313D4;
  v15 = &off_2313C0;
  std::ios_base::init((std::ios_base *)v16, v20);
  v19 = -1;
  v18 = 0;
  std::ios_base::getloc((std::ios_base *)v14);
  std::ios_base::imbue((std::ios_base *)v22, (const std::locale *)v16);
  std::locale::~locale((std::locale *)v22);
  v9 = v17;
  if ( v17 )
  {
    (*(void (__fastcall **)(int, std::locale *))(*(_DWORD *)v17 + 8))(v17, a3);
    v10 = (const std::locale *)(v9 + 4);
    std::locale::locale((std::locale *)v21, v10);
    std::locale::operator=(v10, a3);
    std::locale::~locale((std::locale *)v21);
  }
  std::locale::~locale((std::locale *)v14);
  v11 = std::locale::use_facet(a3, (std::locale::id *)&std::time_put<char,std::ostreambuf_iterator<char>>::id);
  if ( !(*(int (__fastcall **)(int, _DWORD, char *, int, int, int, int))(*(_DWORD *)v11 + 12))(
          v11,
          *(_DWORD *)((char *)&v16[5] + (_DWORD)*(v15 - 3)),
          (char *)&v16[-1] + (_DWORD)*(v15 - 3),
          32,
          a2,
          a4,
          a5) )
  {
    exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
    std::runtime_error::runtime_error(exception, "failed to format time");
    *(_DWORD *)exception = &off_23113C;
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'fmt::v8::format_error,
      (void (*)(void *))fmt::v8::format_error::~format_error);
  }
  std::ostream::~ostream(&v15);
  return std::streambuf::~streambuf(v20);
}


// ======================================================================
// ADDR: 0xefea0
// SYMBOL: sub_EFEA0
int __fastcall sub_EFEA0(int a1, char *a2, int a3, std::locale *a4)
{
  int v8; // r0
  unsigned int v9; // r4
  unsigned int *v10; // r6
  unsigned int v11; // r10
  unsigned int v12; // r0
  unsigned int v13; // r1
  unsigned int v14; // r0
  unsigned int v15; // r1
  char v16; // r2
  unsigned int v17; // r0
  unsigned int v18; // r1
  unsigned int v19; // r0
  unsigned int v20; // r1
  unsigned int v21; // r0
  unsigned int v22; // r1
  unsigned int v23; // r2
  unsigned int v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r0
  unsigned int v27; // r1
  unsigned int v28; // r2
  char *v29; // r1
  std::runtime_error *exception; // r4
  std::locale *v32; // r0
  void (__fastcall **v33)(int, unsigned int); // [sp+4h] [bp-134h] BYREF
  void *v34; // [sp+8h] [bp-130h]
  unsigned int v35; // [sp+Ch] [bp-12Ch]
  unsigned int v36; // [sp+10h] [bp-128h]
  _BYTE v37[132]; // [sp+14h] [bp-124h] BYREF
  _BYTE v38[128]; // [sp+98h] [bp-A0h] BYREF
  unsigned int *v39; // [sp+118h] [bp-20h]

  v8 = (unsigned __int8)byte_23DECC;
  __dmb(0xBu);
  if ( !(v8 << 31) )
  {
    v32 = (std::locale *)j___cxa_guard_acquire((__guard *)&byte_23DECC);
    if ( v32 )
    {
      dword_23DEC8 = std::locale::classic(v32);
      j___cxa_guard_release((__guard *)&byte_23DECC);
    }
  }
  if ( std::locale::operator==(a4, dword_23DEC8) )
  {
    sub_DCF30(a1, a2, &a2[a3]);
    return a1;
  }
  sub_F01C4((int)v38, (int)a2, a3, a4);
  v9 = 0;
  v36 = 128;
  v34 = v37;
  v33 = (void (__fastcall **)(int, unsigned int))&off_22A9D8;
  v35 = 0;
  if ( v38 == (_BYTE *)v39 )
  {
    v29 = v37;
    goto LABEL_34;
  }
  v10 = (unsigned int *)v38;
  do
  {
    v11 = *v10;
    if ( *v10 <= 0x7F )
    {
      v12 = v35;
      v13 = v35 + 1;
      if ( v36 >= v35 + 1 )
        goto LABEL_31;
LABEL_30:
      (*v33)((int)&v33, v13);
      v12 = v35;
      v13 = v35 + 1;
      goto LABEL_31;
    }
    if ( v11 >> 11 )
    {
      if ( v11 < 0xD800 || (v11 & 0xFFFFE000) == 0xE000 )
      {
        v24 = v35;
        v25 = v35 + 1;
        if ( v36 < v35 + 1 )
        {
          (*v33)((int)&v33, v25);
          v24 = v35;
          v25 = v35 + 1;
        }
        v35 = v25;
        *((_BYTE *)v34 + v24) = (v11 >> 12) | 0xE0;
        v26 = v35;
        v27 = v35 + 1;
        if ( v36 < v35 + 1 )
        {
          (*v33)((int)&v33, v27);
          v26 = v35;
          v27 = v35 + 1;
        }
        v28 = (v11 >> 6) & 0x3F | 0xFFFFFF80;
        v35 = v27;
        LOBYTE(v11) = v11 & 0x3F | 0x80;
        *((_BYTE *)v34 + v26) = v28;
        v12 = v35;
        v13 = v35 + 1;
        if ( v36 < v35 + 1 )
          goto LABEL_30;
      }
      else
      {
        if ( (v11 - 0x10000) >> 20 )
        {
          exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
          std::runtime_error::runtime_error(exception, "failed to format time");
          *(_DWORD *)exception = &off_23113C;
          j___cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'fmt::v8::format_error,
            (void (*)(void *))fmt::v8::format_error::~format_error);
        }
        v17 = v35;
        v18 = v35 + 1;
        if ( v36 < v35 + 1 )
        {
          (*v33)((int)&v33, v18);
          v17 = v35;
          v18 = v35 + 1;
        }
        v35 = v18;
        *((_BYTE *)v34 + v17) = (v11 >> 18) | 0xF0;
        v19 = v35;
        v20 = v35 + 1;
        if ( v36 < v35 + 1 )
        {
          (*v33)((int)&v33, v20);
          v19 = v35;
          v20 = v35 + 1;
        }
        v35 = v20;
        *((_BYTE *)v34 + v19) = (v11 >> 12) & 0x3F | 0x80;
        v21 = v35;
        v22 = v35 + 1;
        if ( v36 < v35 + 1 )
        {
          (*v33)((int)&v33, v22);
          v21 = v35;
          v22 = v35 + 1;
        }
        v23 = (v11 >> 6) & 0x3F | 0xFFFFFF80;
        v35 = v22;
        LOBYTE(v11) = v11 & 0x3F | 0x80;
        *((_BYTE *)v34 + v21) = v23;
        v12 = v35;
        v13 = v35 + 1;
        if ( v36 < v35 + 1 )
          goto LABEL_30;
      }
    }
    else
    {
      v14 = v35;
      v15 = v35 + 1;
      if ( v36 < v35 + 1 )
      {
        (*v33)((int)&v33, v15);
        v14 = v35;
        v15 = v35 + 1;
      }
      v16 = (v11 >> 6) | 0xC0;
      v35 = v15;
      LOBYTE(v11) = v11 & 0x3F | 0x80;
      *((_BYTE *)v34 + v14) = v16;
      v12 = v35;
      v13 = v35 + 1;
      if ( v36 < v35 + 1 )
        goto LABEL_30;
    }
LABEL_31:
    ++v10;
    v35 = v13;
    *((_BYTE *)v34 + v12) = v11;
  }
  while ( v10 != v39 );
  v29 = (char *)v34;
  v9 = v35;
LABEL_34:
  sub_DCF30(a1, v29, &v29[v9]);
  if ( v34 != v37 )
    operator delete(v34);
  return a1;
}


// ======================================================================

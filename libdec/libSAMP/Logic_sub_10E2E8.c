// ADDR: 0x10d8f4
// SYMBOL: sub_10D8F4
int __fastcall sub_10D8F4(int a1)
{
  int v2; // r1
  void *v3; // r2
  unsigned __int8 v4; // r3
  int v5; // r0
  unsigned int *v6; // r1
  unsigned int *v7; // r2
  unsigned int v8; // r3
  int v9; // r8
  int v10; // r0
  char *v11; // r11
  int v12; // r1
  int v13; // r2
  _BYTE *v14; // r3
  int v15; // r0
  int v16; // r1
  char *v17; // r4
  char *v18; // r0
  char *v19; // r0
  char *v20; // r9
  _BOOL4 v21; // r4
  int v22; // r1
  char *v23; // r0
  int v24; // r1
  const char *v25; // r3
  int v26; // r2
  _BYTE *v27; // r3
  unsigned int v28; // r1
  unsigned __int8 *v29; // r2
  int v30; // r0
  int v31; // r2
  bool v32; // zf
  unsigned int v33; // r2
  _BYTE *v34; // r4
  std::__shared_weak_count *v35; // r4
  unsigned int *v36; // r0
  unsigned int v37; // r1
  std::__shared_weak_count *v38; // r4
  unsigned int *v39; // r0
  unsigned int v40; // r1
  std::__shared_weak_count *v41; // r4
  unsigned int *v42; // r0
  unsigned int v43; // r1
  size_t v45; // [sp+14h] [bp-94h]
  size_t v46; // [sp+18h] [bp-90h]
  int v47; // [sp+1Ch] [bp-8Ch]
  _DWORD v48[3]; // [sp+20h] [bp-88h] BYREF
  char v49[4]; // [sp+2Ch] [bp-7Ch] BYREF
  int v50; // [sp+30h] [bp-78h]
  int v51; // [sp+34h] [bp-74h] BYREF
  unsigned __int8 v52[8]; // [sp+38h] [bp-70h] BYREF
  void *v53; // [sp+40h] [bp-68h]
  int v54; // [sp+44h] [bp-64h]
  unsigned int *v55; // [sp+48h] [bp-60h]
  int v56; // [sp+4Ch] [bp-5Ch] BYREF
  unsigned int *v57; // [sp+50h] [bp-58h]
  __int64 v58; // [sp+54h] [bp-54h] BYREF
  void *v59; // [sp+5Ch] [bp-4Ch]
  int v60; // [sp+60h] [bp-48h] BYREF
  unsigned int *v61; // [sp+64h] [bp-44h]
  __int64 v62; // [sp+68h] [bp-40h] BYREF
  void *v63; // [sp+70h] [bp-38h]
  int v64; // [sp+78h] [bp-30h] BYREF
  unsigned __int8 v65; // [sp+7Ch] [bp-2Ch]
  _BYTE v66[7]; // [sp+7Dh] [bp-2Bh]
  void *v67; // [sp+84h] [bp-24h]

  sub_DC6DC(&v62, "DATA\\water.dat");
  LODWORD(v58) = *(_DWORD *)((char *)&v62 + 1);
  *(_DWORD *)((char *)&v58 + 3) = HIDWORD(v62);
  v2 = HIDWORD(v62);
  v3 = v63;
  v4 = v62;
  *(_DWORD *)v66 = v58;
  v63 = 0;
  v62 = 0LL;
  v65 = v4;
  v64 = 0;
  v67 = v3;
  *(_DWORD *)&v66[3] = v2;
  sub_10DE14(a1, &v64, 1, v52);
  if ( v65 << 31 )
    operator delete(v67);
  if ( (unsigned __int8)v62 << 31 )
    operator delete(v63);
  *(_DWORD *)(a1 + 12) = 0;
  dword_263278 = a1;
  v47 = a1;
  v46 = _strlen_chk("water", 6u);
  v45 = _strlen_chk(".dat", 5u);
  LODWORD(v62) = sub_F97EC();
  std::__fs::filesystem::path::path<char const*,void>((int)&v64);
  std::__fs::filesystem::path::path<char [5],void>((int)&v58);
  sub_F1DD4((int)&v62, (int)&v64, (int)&v58);
  std::__fs::filesystem::directory_iterator::directory_iterator(&v60, &v62, 0, 0);
  if ( (unsigned __int8)v62 << 31 )
    operator delete(v63);
  if ( (unsigned __int8)v58 << 31 )
    operator delete(v59);
  v5 = v60;
  v6 = v61;
  if ( v61 )
  {
    v7 = v61 + 1;
    do
      v8 = __ldrex(v7);
    while ( __strex(v8 + 1, v7) );
  }
  v56 = v5;
  v57 = v6;
  v54 = 0;
  v55 = 0;
  if ( v5 )
  {
    do
    {
      v9 = std::__fs::filesystem::directory_iterator::__dereference((std::__fs::filesystem::directory_iterator *)&v56);
      sub_EC968((int)&v58);
      std::string::basic_string(&v62, &v58);
      if ( (unsigned __int8)v58 << 31 )
        operator delete(v59);
      v10 = HIDWORD(v62);
      v11 = (char *)v63;
      v12 = HIDWORD(v62);
      v13 = v62 & 1;
      v14 = v63;
      if ( !v13 )
      {
        v12 = (unsigned __int8)v62 >> 1;
        v14 = (char *)&v62 + 1;
      }
      if ( v12 )
      {
        do
        {
          v15 = (unsigned __int8)*v14;
          if ( (unsigned int)(v15 - 65) < 0x1A )
            LOBYTE(v15) = v15 | 0x20;
          *v14++ = v15;
          --v12;
        }
        while ( v12 );
        v10 = HIDWORD(v62);
        v11 = (char *)v63;
        v13 = v62 & 1;
        v16 = (unsigned __int8)v62 >> 1;
      }
      else
      {
        v16 = (unsigned __int8)v62 >> 1;
      }
      if ( v13 )
        v16 = v10;
      else
        v11 = (char *)&v62 + 1;
      if ( v16 >= 5 )
      {
        v17 = &v11[v16];
        v18 = v11;
        do
        {
          v19 = (char *)memchr(v18, 119, v16 - 4);
          if ( !v19 )
            break;
          v20 = v19;
          if ( !memcmp(v19, "water", 5u) )
          {
            if ( v20 != v17 && v20 == v11 )
            {
              sub_10DE90(&v58, v9);
              std::__fs::filesystem::path::path<char const*,void>((int)v52);
              if ( sub_10E096(&v58, v52) )
              {
                v21 = 1;
              }
              else
              {
                v22 = HIDWORD(v62);
                if ( !((unsigned __int8)v62 << 31) )
                  v22 = (unsigned __int8)v62 >> 1;
                v21 = v22 == v46 + v45;
              }
              if ( v52[0] << 31 )
                operator delete(v53);
              if ( (unsigned __int8)v58 << 31 )
                operator delete(v59);
              if ( !v21 )
              {
                v24 = HIDWORD(v62);
                v23 = (char *)v63;
                v51 = 0;
                if ( (v62 & 1) == 0 )
                {
                  v23 = (char *)&v62 + 1;
                  v24 = (unsigned __int8)v62 >> 1;
                }
                sub_10E370(v49, &v23[v46], &v23[v24 - v45], &v51);
                if ( v50 )
                {
                  v25 = (const char *)v63;
                  if ( !((unsigned __int8)v62 << 31) )
                    v25 = (char *)&v62 + 1;
                  _android_log_print(
                    6,
                    "AXL",
                    "Invalid interior water file \"%s\". File must be named - \"waterN.dat\", N - interior id",
                    v25);
                }
                else
                {
                  std::string::basic_string(v52, v9);
                  std::string::basic_string(v48, &v64);
                  v26 = v48[1];
                  if ( !(LOBYTE(v48[0]) << 31) )
                    v26 = LOBYTE(v48[0]) >> 1;
                  std::string::basic_string(&v58, v52, v26, -1, v52);
                  if ( LOBYTE(v48[0]) << 31 )
                    operator delete((void *)v48[2]);
                  if ( v52[0] << 31 )
                    operator delete(v53);
                  v27 = v59;
                  v28 = (unsigned __int8)v58;
                  v29 = (unsigned __int8 *)v59;
                  v30 = v58 & 1;
                  if ( !v30 )
                    v29 = (unsigned __int8 *)&v58 + 1;
                  v31 = *v29;
                  v32 = v31 == 92;
                  if ( v31 != 92 )
                    v32 = v31 == 47;
                  if ( v32 )
                  {
                    std::string::erase(&v58, 0, 1);
                    v28 = (unsigned __int8)v58;
                    v27 = v59;
                    v30 = v58 & 1;
                  }
                  v33 = HIDWORD(v58);
                  v34 = v27;
                  if ( !v30 )
                  {
                    v34 = (char *)&v58 + 1;
                    v33 = v28 >> 1;
                  }
                  for ( ; v33; ++v34 )
                  {
                    if ( *v34 == 47 )
                      *v34 = 92;
                    --v33;
                  }
                  _android_log_print(3, "AXL", "Add water file %s for interior %d");
                  v48[0] = &v51;
                  sub_10E4D0(v52, v47);
                  std::string::operator=(*(_DWORD *)v52 + 20);
                  if ( (unsigned __int8)v58 << 31 )
                    operator delete(v59);
                }
              }
            }
            break;
          }
          v18 = v20 + 1;
          v16 = v17 - (v20 + 1);
        }
        while ( v16 >= 5 );
      }
      if ( (unsigned __int8)v62 << 31 )
        operator delete(v63);
      std::__fs::filesystem::directory_iterator::__increment((std::__fs::filesystem::directory_iterator *)&v56, 0);
      a1 = v47;
    }
    while ( v56 != v54 );
  }
  v35 = (std::__shared_weak_count *)v55;
  if ( v55 )
  {
    v36 = v55 + 1;
    __dmb(0xBu);
    do
      v37 = __ldrex(v36);
    while ( __strex(v37 - 1, v36) );
    __dmb(0xBu);
    if ( !v37 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v35 + 8))(v35);
      std::__shared_weak_count::__release_weak(v35);
    }
  }
  v38 = (std::__shared_weak_count *)v57;
  if ( v57 )
  {
    v39 = v57 + 1;
    __dmb(0xBu);
    do
      v40 = __ldrex(v39);
    while ( __strex(v40 - 1, v39) );
    __dmb(0xBu);
    if ( !v40 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v38 + 8))(v38);
      std::__shared_weak_count::__release_weak(v38);
    }
  }
  v41 = (std::__shared_weak_count *)v61;
  if ( v61 )
  {
    v42 = v61 + 1;
    __dmb(0xBu);
    do
      v43 = __ldrex(v42);
    while ( __strex(v43 - 1, v42) );
    __dmb(0xBu);
    if ( !v43 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v41 + 8))(v41);
      std::__shared_weak_count::__release_weak(v41);
    }
  }
  if ( (unsigned __int8)v64 << 31 )
    operator delete(*(void **)&v66[3]);
  return a1;
}


// ======================================================================

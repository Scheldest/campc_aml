// ADDR: 0x1e255c
// SYMBOL: posix_detail::getMemInfo(std::__ndk1::function<bool ()(posix_detail::memInfo const&)> const&,bool)
int __fastcall posix_detail::getMemInfo(int a1, int a2)
{
  int i; // r4
  int v4; // r6
  int v5; // r0
  unsigned __int8 *v6; // r5
  int v7; // r0
  int v8; // r6
  _DWORD *v9; // r0
  int v10; // r2
  char *v11; // r3
  unsigned int v12; // r11
  unsigned int v13; // r6
  int v14; // r0
  bool v15; // r3
  const char *v16; // r9
  posix_detail *v17; // r0
  void *v18; // r1
  char *v19; // r0
  unsigned int v20; // r4
  unsigned int v21; // r2
  unsigned int v22; // r1
  int v23; // r3
  int v24; // r6
  char *v25; // r2
  unsigned int v26; // r1
  int v27; // r2
  int v28; // r2
  unsigned __int8 *v29; // lr
  char *v30; // r12
  unsigned int v31; // r2
  unsigned int v32; // r3
  int v33; // r5
  int v34; // r1
  unsigned int v35; // r1
  unsigned int v36; // r3
  int v37; // r5
  unsigned int v38; // r2
  int v39; // r1
  unsigned int v40; // r2
  char *v41; // r1
  int v42; // r0
  int v43; // t1
  int v44; // r6
  unsigned int v45; // r5
  unsigned int v46; // r2
  int v47; // r0
  int v48; // r4
  __int64 v49; // d17
  int v50; // r0
  int v52; // [sp+18h] [bp-138h]
  double v53; // [sp+28h] [bp-128h] BYREF
  int v54; // [sp+30h] [bp-120h]
  _QWORD v55[4]; // [sp+38h] [bp-118h] BYREF
  int v56; // [sp+58h] [bp-F8h] BYREF
  unsigned int v57; // [sp+5Ch] [bp-F4h]
  void *v58; // [sp+60h] [bp-F0h]
  _DWORD v59[2]; // [sp+68h] [bp-E8h] BYREF
  _DWORD v60[16]; // [sp+70h] [bp-E0h] BYREF
  FILE *v61; // [sp+B0h] [bp-A0h]
  int v62; // [sp+C0h] [bp-90h]
  _DWORD v63[33]; // [sp+CCh] [bp-84h] BYREF

  if ( a2 )
  {
    v4 = dword_382D40;
    for ( i = posix_detail::memCache; i != v4; i += 28 )
    {
      v5 = *(_DWORD *)(a1 + 16);
      if ( !v5 )
        sub_DC92C();
      if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 24))(v5, i) )
        return v63[20];
    }
  }
  sub_1E2F2E();
  v59[1] = 0;
  v63[0] = &off_22A7AC;
  std::ios_base::init((std::ios_base *)v63, v60);
  v63[18] = 0;
  v63[19] = -1;
  v63[0] = &off_22A774;
  v59[0] = &off_22A760;
  sub_E6108((int)v60);
  if ( v61 || (v61 = fopen("/proc/self/maps", "re")) == 0 )
    std::ios_base::clear(
      (std::ios_base *)((char *)v59 + *(_DWORD *)(v59[0] - 12)),
      *(_DWORD *)((char *)&v59[4] + *(_DWORD *)(v59[0] - 12)) | 4);
  else
    v62 = 8;
  v52 = a1;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v6 = (unsigned __int8 *)&v56;
  std::string::reserve(&v56, 256);
  while ( 1 )
  {
LABEL_12:
    std::ios_base::getloc((std::ios_base *)v55);
    v7 = std::locale::use_facet((std::locale *)v55, (std::locale::id *)&std::ctype<char>::id);
    v8 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 28))(v7, 10);
    std::locale::~locale((std::locale *)v55);
    v9 = sub_E384C(v59, v6, v8);
    if ( (*((_BYTE *)v9 + *(_DWORD *)(*v9 - 12) + 16) & 5) != 0 )
      break;
    v10 = v57;
    if ( (v56 & 1) == 0 )
      v10 = (unsigned __int8)v56 >> 1;
    if ( v10 )
    {
      v11 = (char *)v58;
      v12 = 0;
      v13 = 1;
      if ( (v56 & 1) == 0 )
        v11 = (char *)&v56 + 1;
      while ( 1 )
      {
        v14 = (unsigned __int8)v11[v12];
        if ( v14 == 32 || (unsigned int)(v14 - 14) > 0xFFFFFFFA )
          break;
        ++v12;
        ++v13;
        if ( v10 == v12 )
          goto LABEL_12;
      }
      if ( v10 != v12 )
      {
        v16 = (const char *)std::string::find(v6, 45, 0);
        if ( v16 != (const char *)-1 && (unsigned int)v16 <= v12 )
        {
          memset(v55, 0, 28);
          if ( v16 )
          {
            v17 = (posix_detail *)v58;
            if ( !((unsigned __int8)v56 << 31) )
              v17 = (posix_detail *)((char *)&v56 + 1);
            LODWORD(v55[0]) = posix_detail::str2int(v17, v16, 1u, v15);
          }
          if ( v12 - (_DWORD)v16 != 1 )
          {
            v18 = v58;
            if ( !((unsigned __int8)v56 << 31) )
              v18 = (char *)&v56 + 1;
            HIDWORD(v55[0]) = posix_detail::str2int(
                                (posix_detail *)&v16[(_DWORD)v18 + 1],
                                (const char *)(~(unsigned int)v16 + v12),
                                1u,
                                v15);
          }
          v19 = (char *)v58;
          v20 = v57;
          v21 = v12 + 1;
          if ( (v56 & 1) == 0 )
          {
            v19 = (char *)&v56 + 1;
            v20 = (unsigned __int8)v56 >> 1;
          }
          if ( v20 > v21 )
            v21 = v20;
          v22 = v21 - 1;
          while ( v13 < v20 )
          {
            v23 = (unsigned __int8)v19[v13++];
            if ( v23 != 32 && (unsigned int)(v23 - 14) <= 0xFFFFFFFA )
            {
              v21 = v13 - 1;
              v22 = v13 - 2;
              break;
            }
          }
          if ( v22 + 4 <= v20 )
          {
            if ( v19[v21] == 114 )
              LODWORD(v55[1]) |= 1u;
            v25 = &v19[v22];
            v26 = v22 + 5;
            if ( v25[2] == 119 )
              LODWORD(v55[1]) |= 2u;
            if ( v25[3] == 120 )
              LODWORD(v55[1]) |= 4u;
            if ( v26 < v20 )
            {
              while ( 1 )
              {
                v27 = (unsigned __int8)v19[v26];
                if ( v27 != 32 && (unsigned int)(v27 - 14) < 0xFFFFFFFB )
                  break;
                if ( v20 == ++v26 )
                {
LABEL_59:
                  v29 = v6;
                  v26 = v20;
                  goto LABEL_61;
                }
              }
            }
            if ( v26 < v20 )
            {
              while ( 1 )
              {
                v28 = (unsigned __int8)v19[v26];
                if ( v28 == 32 || (unsigned int)(v28 - 14) > 0xFFFFFFFA )
                  break;
                if ( v20 == ++v26 )
                  goto LABEL_59;
              }
            }
            v29 = v6;
LABEL_61:
            v30 = v19 + 1;
            v31 = v26 + 1;
            if ( v20 > v26 + 1 )
              v31 = v20;
            while ( 1 )
            {
              v32 = v26 + 1;
              if ( v26 + 1 >= v20 )
                break;
              v33 = (unsigned __int8)v30[v26++];
              if ( v33 != 32 )
              {
                v26 = v32;
                if ( (unsigned int)(v33 - 14) <= 0xFFFFFFFA )
                {
                  if ( v32 < v20 )
                  {
                    while ( 1 )
                    {
                      v34 = (unsigned __int8)v19[v32];
                      if ( v34 == 32 || (unsigned int)(v34 - 14) > 0xFFFFFFFA )
                        break;
                      if ( v20 == ++v32 )
                      {
                        v31 = v20;
                        goto LABEL_72;
                      }
                    }
                  }
                  v31 = v32;
                  break;
                }
              }
            }
LABEL_72:
            v35 = v31 + 1;
            if ( v20 > v31 + 1 )
              v35 = v20;
            while ( 1 )
            {
              v36 = v31 + 1;
              if ( v31 + 1 >= v20 )
              {
                v36 = v35;
                goto LABEL_86;
              }
              v37 = (unsigned __int8)v30[v31++];
              if ( v37 != 32 )
              {
                v31 = v36;
                if ( (unsigned int)(v37 - 14) <= 0xFFFFFFFA )
                  break;
              }
            }
            if ( v36 >= v20 )
            {
              v35 = v36;
            }
            else
            {
              v38 = v36;
              while ( 1 )
              {
                v39 = (unsigned __int8)v19[v38];
                if ( v39 == 32 || (unsigned int)(v39 - 14) > 0xFFFFFFFA )
                  break;
                if ( v20 == ++v38 )
                {
                  v35 = v36;
                  v36 = v20;
                  goto LABEL_86;
                }
              }
              v35 = v36;
              v36 = v38;
            }
LABEL_86:
            v40 = v36 - v35;
            if ( v36 == v35 )
            {
              v42 = 0;
            }
            else
            {
              v41 = &v19[v35];
              v42 = 0;
              do
              {
                v43 = (unsigned __int8)*v41++;
                v44 = v43 + 10 * v42;
                if ( (unsigned int)(v43 - 48) < 0xA )
                  v42 = v44 - 48;
                --v40;
              }
              while ( v40 );
            }
            v45 = v36 + 1;
            HIDWORD(v55[1]) = v42;
            if ( v20 > v36 + 1 )
              v45 = v20;
            while ( 1 )
            {
              v46 = v36 + 1;
              if ( v36 + 1 >= v20 )
                break;
              v47 = (unsigned __int8)v30[v36++];
              if ( v47 != 32 )
              {
                v36 = v46;
                if ( (unsigned int)(v47 - 14) < 0xFFFFFFFB )
                  goto LABEL_100;
              }
            }
            v46 = v45;
LABEL_100:
            v6 = v29;
            if ( v46 != v20 )
            {
              std::string::basic_string(&v53, v29, v46, -1, v29);
              if ( LOBYTE(v55[2]) << 31 )
                operator delete((void *)v55[3]);
              LODWORD(v55[3]) = v54;
              *(double *)&v55[2] = v53;
            }
            v48 = dword_382D40;
            if ( dword_382D40 == dword_382D44 )
            {
              std::vector<posix_detail::memInfo>::__push_back_slow_path<posix_detail::memInfo const&>(
                &posix_detail::memCache,
                v55);
            }
            else
            {
              v49 = v55[1];
              *(_QWORD *)dword_382D40 = v55[0];
              *(_QWORD *)(v48 + 8) = v49;
              std::string::basic_string(v48 + 16, &v55[2]);
              dword_382D40 = v48 + 28;
            }
            v50 = *(_DWORD *)(v52 + 16);
            if ( !v50 )
              sub_DC92C();
            v24 = (*(int (__fastcall **)(int, _QWORD *))(*(_DWORD *)v50 + 24))(v50, v55);
            if ( v24 )
              v24 = 5;
          }
          else
          {
            v24 = 4;
          }
          if ( LOBYTE(v55[2]) << 31 )
            operator delete((void *)v55[3]);
          if ( v24 == 5 )
            break;
        }
      }
    }
  }
  if ( !sub_E5108(v60) )
    std::ios_base::clear(
      (std::ios_base *)((char *)v59 + *(_DWORD *)(v59[0] - 12)),
      *(_DWORD *)((char *)&v59[4] + *(_DWORD *)(v59[0] - 12)) | 4);
  if ( (unsigned __int8)v56 << 31 )
    operator delete(v58);
  v63[0] = &off_22A774;
  v59[0] = &off_22A760;
  sub_E50B0((int)v60);
  std::istream::~istream(v59, off_22A780);
  std::ios::~ios(v63);
  return v63[20];
}


// ======================================================================
// ADDR: 0x1e2a6c
// SYMBOL: posix_detail::str2int(char const*,uint,bool)
int __fastcall posix_detail::str2int(posix_detail *this, const char *a2, unsigned int a3, bool a4)
{
  int v4; // r12
  int i; // lr
  int v6; // r3

  v4 = 10;
  if ( a3 )
    v4 = 16;
  for ( i = 0; a2; --a2 )
  {
    v6 = *(unsigned __int8 *)this;
    if ( (unsigned int)(v6 - 48) > 9 )
    {
      if ( a3 )
      {
        if ( (unsigned int)(v6 - 97) > 5 )
        {
          if ( (unsigned int)(v6 - 65) <= 5 )
            i = v6 + 16 * i - 55;
        }
        else
        {
          i = v6 + 16 * i - 87;
        }
      }
    }
    else
    {
      i = v6 + i * v4 - 48;
    }
    this = (posix_detail *)((char *)this + 1);
  }
  return i;
}


// ======================================================================
// ADDR: 0x2271d0
// SYMBOL: posix_detail::getMemInfo(std::__ndk1::function<bool ()(posix_detail::memInfo const&)> const&,bool)
// attributes: thunk
int __fastcall posix_detail::getMemInfo(int a1, int a2)
{
  return _ZN12posix_detail10getMemInfoERKNSt6__ndk18functionIFbRKNS_7memInfoEEEEb(a1, a2);
}


// ======================================================================
// ADDR: 0x2271e0
// SYMBOL: posix_detail::str2int(char const*,uint,bool)
// attributes: thunk
int __fastcall posix_detail::str2int(posix_detail *this, const char *a2, unsigned int a3, bool a4)
{
  return _ZN12posix_detail7str2intEPKcjb(this, a2, a3, a4);
}


// ======================================================================

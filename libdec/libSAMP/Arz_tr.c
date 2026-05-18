// ADDR: 0x1e346c
// SYMBOL: Arz_tr::Arz_tr(std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>> const&,std::__ndk1::__fs::filesystem::path const&)
_DWORD *__fastcall Arz_tr::Arz_tr(_DWORD *a1, unsigned __int8 **a2, unsigned __int8 *a3)
{
  unsigned __int8 *v4; // r6
  std::ios_base *v5; // r2
  std::ios_base *v6; // r8
  unsigned int v7; // r0
  unsigned int v8; // r1
  double v9; // d16
  char *v10; // r1
  void *v11; // r0
  unsigned __int8 *v12; // r5
  unsigned __int8 *v13; // r0
  int v14; // r0
  bool v15; // zf
  int v16; // r1
  unsigned __int8 *v17; // t1
  unsigned __int8 *v19; // [sp+18h] [bp-120h]
  char v21[4]; // [sp+28h] [bp-110h] BYREF
  unsigned int v22; // [sp+2Ch] [bp-10Ch] BYREF
  int v23[2]; // [sp+30h] [bp-108h] BYREF
  void *v24; // [sp+38h] [bp-100h]
  double v25; // [sp+40h] [bp-F8h] BYREF
  void *v26; // [sp+48h] [bp-F0h]
  char v27[4]; // [sp+50h] [bp-E8h] BYREF
  unsigned int *v28; // [sp+54h] [bp-E4h] BYREF
  double v29; // [sp+58h] [bp-E0h] BYREF
  void *v30; // [sp+60h] [bp-D8h]
  _DWORD v31[2]; // [sp+64h] [bp-D4h] BYREF
  _DWORD v32[23]; // [sp+6Ch] [bp-CCh] BYREF
  _DWORD v33[20]; // [sp+C8h] [bp-70h] BYREF

  a1[1] = 0;
  *a1 = a1 + 1;
  a1[2] = 0;
  v4 = *a2;
  v19 = a2[1];
  if ( *a2 != v19 )
  {
    v5 = (std::ios_base *)v33;
    while ( 1 )
    {
      v31[1] = 0;
      v33[0] = &off_22A7AC;
      v31[0] = &off_22A798;
      v6 = v5;
      std::ios_base::init(v5, v32);
      v33[18] = 0;
      v33[19] = -1;
      v33[0] = &off_22A774;
      v31[0] = &off_22A760;
      sub_E6108((int)v32);
      v7 = *a3;
      v8 = *((_DWORD *)a3 + 1);
      if ( !(v7 << 31) )
        v8 = v7 >> 1;
      if ( v8 )
        break;
      sub_EE094(v23, v4, ".json");
      std::ifstream::open(v31, v23, 8);
      if ( LOBYTE(v23[0]) << 31 )
      {
        v11 = v24;
LABEL_16:
        operator delete(v11);
      }
LABEL_17:
      if ( v32[16] )
      {
        v24 = 0;
        LOBYTE(v23[0]) = 0;
        sub_E4664(v31, (int)v23);
        if ( !sub_E5108(v32) )
          std::ios_base::clear(
            (std::ios_base *)((char *)v31 + *(_DWORD *)(v31[0] - 12)),
            *(_DWORD *)((char *)&v31[4] + *(_DWORD *)(v31[0] - 12)) | 4);
        v26 = 0;
        *(_QWORD *)&v25 = (unsigned int)&v25 + 4;
        nlohmann::detail::from_json<nlohmann::basic_json<std::map,std::vector,std::string,bool,long long,unsigned long long,double,std::allocator,nlohmann::adl_serializer,std::vector<unsigned char>>,std::map<std::string,std::string>,0>(
          v23,
          &v25);
        v12 = (unsigned __int8 *)LODWORD(v25);
        while ( v12 != (unsigned __int8 *)((char *)&v25 + 4) )
        {
          v22 = sub_12DE18((int)v21, v12 + 16);
          v28 = &v22;
          std::__tree<std::__value_type<unsigned int,std::string>,std::__map_value_compare<unsigned int,std::__value_type<unsigned int,std::string>,std::less<unsigned int>,true>,std::allocator<std::__value_type<unsigned int,std::string>>>::__emplace_unique_key_args<unsigned int,std::piecewise_construct_t const&,std::tuple<unsigned int &&>,std::tuple<>>(
            &v29,
            a1,
            &v22,
            &unk_D65EE,
            &v28,
            v27);
          std::string::operator=(LODWORD(v29) + 20);
          v13 = (unsigned __int8 *)*((_DWORD *)v12 + 1);
          if ( v13 )
          {
            do
            {
              v12 = v13;
              v13 = *(unsigned __int8 **)v13;
            }
            while ( v13 );
          }
          else
          {
            v14 = (int)(v12 + 8);
            v15 = **((_DWORD **)v12 + 2) == (_DWORD)v12;
            v12 = (unsigned __int8 *)*((_DWORD *)v12 + 2);
            if ( !v15 )
            {
              do
              {
                v16 = *(_DWORD *)v14;
                v17 = *(unsigned __int8 **)(*(_DWORD *)v14 + 8);
                v14 = *(_DWORD *)v14 + 8;
                v12 = v17;
              }
              while ( *(_DWORD *)v17 != v16 );
            }
          }
        }
        std::__tree<std::__value_type<std::string,std::string>,std::__map_value_compare<std::string,std::__value_type<std::string,std::string>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,std::string>>>::destroy(
          &v25,
          HIDWORD(v25));
        sub_E3F7A((unsigned __int8 *)v23);
        v6 = (std::ios_base *)v33;
      }
      v33[0] = &off_22A774;
      v31[0] = &off_22A760;
      sub_E50B0((int)v32);
      std::istream::~istream(v31, off_22A780);
      std::ios::~ios(v6);
      v4 += 12;
      v5 = v6;
      if ( v4 == v19 )
        return a1;
    }
    sub_EE094((int *)&v29, v4, ".json");
    v9 = v29;
    v29 = 0.0;
    v26 = v30;
    v30 = 0;
    v25 = v9;
    sub_F1DD4((int)v23, (int)a3, (int)&v25);
    v10 = (char *)v24;
    if ( !(LOBYTE(v23[0]) << 31) )
      v10 = (char *)v23 + 1;
    std::ifstream::open(v31, v10, 8);
    if ( LOBYTE(v23[0]) << 31 )
      operator delete(v24);
    if ( LOBYTE(v25) << 31 )
      operator delete(v26);
    if ( !(LOBYTE(v29) << 31) )
      goto LABEL_17;
    v11 = v30;
    goto LABEL_16;
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1e377c
// SYMBOL: Arz_tr::tr(std::__ndk1::basic_string_view<char,std::__ndk1::char_traits<char>>)
int __fastcall Arz_tr::tr(unsigned __int8 **a1, int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v7; // r5
  unsigned int v8; // r0
  _DWORD *v9; // r6
  _DWORD *v10; // r2
  unsigned int v11; // r4
  _DWORD *v12; // r3
  _DWORD *v13; // r3
  unsigned __int8 *v14; // r0
  unsigned int v15; // r2
  unsigned __int8 *v16; // r1
  char v18[4]; // [sp+4h] [bp-24h] BYREF
  _DWORD v19[8]; // [sp+8h] [bp-20h] BYREF

  v7 = a4;
  v8 = sub_12DC50((int)v18, a3, a4);
  v19[0] = v8;
  v9 = *(_DWORD **)(a2 + 4);
  if ( !v9 )
    goto LABEL_10;
  v10 = (_DWORD *)(a2 + 4);
  do
  {
    v11 = v9[4];
    v12 = v9;
    if ( v11 < v8 )
      v12 = v9 + 1;
    v13 = (_DWORD *)*v12;
    if ( v11 >= v8 )
      v10 = v9;
    v9 = v13;
  }
  while ( v13 );
  if ( v10 != (_DWORD *)(a2 + 4) && v8 >= v10[4] )
  {
    v14 = (unsigned __int8 *)std::map<unsigned int,std::string>::at(a2, v19);
    v15 = *v14;
    v16 = (unsigned __int8 *)*((_DWORD *)v14 + 2);
    v7 = *((_DWORD *)v14 + 1);
    if ( (v15 & 1) == 0 )
      v16 = v14 + 1;
    *a1 = v16;
    if ( (v15 & 1) == 0 )
      v7 = v15 >> 1;
  }
  else
  {
LABEL_10:
    *a1 = a3;
  }
  a1[1] = (unsigned __int8 *)v7;
  return v19[1];
}


// ======================================================================
// ADDR: 0x225310
// SYMBOL: Arz_tr::tr(std::__ndk1::basic_string_view<char,std::__ndk1::char_traits<char>>)
// attributes: thunk
int __fastcall Arz_tr::tr(unsigned __int8 **a1, int a2, unsigned __int8 *a3, unsigned int a4)
{
  return _ZNK6Arz_tr2trENSt6__ndk117basic_string_viewIcNS0_11char_traitsIcEEEE(a1, a2, a3, a4);
}


// ======================================================================

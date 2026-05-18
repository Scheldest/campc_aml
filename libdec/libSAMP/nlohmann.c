// ADDR: 0x1e38f0
// SYMBOL: nlohmann::detail::from_json<nlohmann::basic_json<std::__ndk1::map,std::__ndk1::vector,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool,long long,ulong long,double,std::__ndk1::allocator,nlohmann::adl_serializer,std::__ndk1::vector<uchar,std::__ndk1::allocator<uchar>>>,std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>,0>(nlohmann::basic_json<std::__ndk1::map,std::__ndk1::vector,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool,long long,ulong long,double,std::__ndk1::allocator,nlohmann::adl_serializer,std::__ndk1::vector<uchar,std::__ndk1::allocator<uchar>>> const&,std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>> &)
int __fastcall nlohmann::detail::from_json<nlohmann::basic_json<std::map,std::vector,std::string,bool,long long,unsigned long long,double,std::allocator,nlohmann::adl_serializer,std::vector<unsigned char>>,std::map<std::string,std::string>,0>(
        int a1,
        int a2)
{
  int *v3; // r2
  int v5; // t1
  int v6; // r6
  int v7; // r1
  int v8; // r2
  _DWORD *exception; // r4
  char *v11; // r0
  int v12; // r0
  double v13; // d16
  _DWORD v14[3]; // [sp+4h] [bp-2Ch] BYREF
  double v15; // [sp+10h] [bp-20h] BYREF
  int v16; // [sp+18h] [bp-18h]
  int v17; // [sp+1Ch] [bp-14h]

  if ( *(_BYTE *)a1 != 1 )
  {
    exception = j___cxa_allocate_exception(0x10u);
    v11 = (char *)sub_E9DFC((char *)a1);
    sub_DC6DC(v14, v11);
    v12 = std::string::insert((int)v14, 0, "type must be object, but is ");
    v13 = *(double *)v12;
    v16 = *(_DWORD *)(v12 + 8);
    v15 = v13;
    *(_DWORD *)v12 = 0;
    *(_DWORD *)(v12 + 4) = 0;
    *(_DWORD *)(v12 + 8) = 0;
    sub_E9CB0(exception, 302, (unsigned __int8 *)&v15);
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::detail::type_error,
      (void (*)(void *))sub_E9438);
  }
  v3 = *(int **)(a1 + 8);
  *(_QWORD *)&v15 = (unsigned int)&v15 + 4;
  v5 = *v3;
  v16 = 0;
  sub_1E3A24(v14, v5, v3 + 1);
  v6 = a2 + 4;
  std::__tree<std::__value_type<std::string,std::string>,std::__map_value_compare<std::string,std::__value_type<std::string,std::string>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,std::string>>>::destroy(
    a2,
    *(_DWORD *)(a2 + 4));
  v7 = HIDWORD(v15);
  v8 = v16;
  *(double *)a2 = v15;
  *(_DWORD *)(a2 + 8) = v8;
  if ( v8 )
  {
    *(_DWORD *)(v7 + 8) = v6;
    v7 = 0;
    v16 = 0;
    *(_QWORD *)&v15 = (unsigned int)&v15 + 4;
  }
  else
  {
    *(_DWORD *)a2 = v6;
  }
  std::__tree<std::__value_type<std::string,std::string>,std::__map_value_compare<std::string,std::__value_type<std::string,std::string>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,std::string>>>::destroy(
    &v15,
    v7);
  return v17;
}


// ======================================================================
// ADDR: 0x227280
// SYMBOL: nlohmann::detail::from_json<nlohmann::basic_json<std::__ndk1::map,std::__ndk1::vector,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool,long long,ulong long,double,std::__ndk1::allocator,nlohmann::adl_serializer,std::__ndk1::vector<uchar,std::__ndk1::allocator<uchar>>>,std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>,0>(nlohmann::basic_json<std::__ndk1::map,std::__ndk1::vector,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool,long long,ulong long,double,std::__ndk1::allocator,nlohmann::adl_serializer,std::__ndk1::vector<uchar,std::__ndk1::allocator<uchar>>> const&,std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>> &)
// attributes: thunk
int __fastcall nlohmann::detail::from_json<nlohmann::basic_json<std::map,std::vector,std::string,bool,long long,unsigned long long,double,std::allocator,nlohmann::adl_serializer,std::vector<unsigned char>>,std::map<std::string,std::string>,0>(
        int a1,
        int a2)
{
  return _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt6__ndk13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerENS5_IhNS9_IhEEEEEENS4_ISB_SB_NS3_4lessISB_EENS9_INS3_4pairIKSB_SB_EEEEEELi0EEEvRKT_RT0_(
           a1,
           a2);
}


// ======================================================================

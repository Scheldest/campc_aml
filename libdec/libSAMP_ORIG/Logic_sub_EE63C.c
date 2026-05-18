// ADDR: 0xee5e8
// SYMBOL: sub_EE5E8
int __fastcall sub_EE5E8(int a1)
{
  unsigned int v2; // r6
  __int64 v3; // r0
  std::__shared_count *v4; // r0

  v2 = 0;
  *(_DWORD *)a1 = &off_111BE4;
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v2 >= (HIDWORD(v3) - (int)v3) >> 2 )
      break;
    v4 = *(std::__shared_count **)(v3 + 4 * v2);
    if ( v4 )
      std::__shared_count::__release_shared(v4);
    ++v2;
  }
  std::string::~string(a1 + 144);
  sub_F62FE(a1 + 8);
  return std::collate<char>::~collate(a1);
}


// ======================================================================

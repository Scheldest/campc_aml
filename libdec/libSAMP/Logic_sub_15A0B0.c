// ADDR: 0x15a02c
// SYMBOL: sub_15A02C
void __fastcall sub_15A02C(int a1)
{
  _BYTE v2[8]; // [sp+4h] [bp-14h] BYREF
  void *v3; // [sp+Ch] [bp-Ch]

  std::__fs::filesystem::path::path<char [14],void>((int)v2);
  sub_F1DD4(a1, (int)&dword_381A30, (int)v2);
  if ( v2[0] << 31 )
    operator delete(v3);
}


// ======================================================================

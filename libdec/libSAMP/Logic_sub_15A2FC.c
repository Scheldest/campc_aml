// ADDR: 0x15a0b0
// SYMBOL: sub_15A0B0
void __fastcall sub_15A0B0(int a1)
{
  _BYTE v2[8]; // [sp+0h] [bp-20h] BYREF
  void *v3; // [sp+8h] [bp-18h]
  _BYTE v4[8]; // [sp+Ch] [bp-14h] BYREF
  void *v5; // [sp+14h] [bp-Ch]

  sub_15A02C((int)v4);
  std::__fs::filesystem::path::path<char [11],void>((int)v2);
  sub_F1DD4(a1, (int)v4, (int)v2);
  if ( v2[0] << 31 )
    operator delete(v3);
  if ( v4[0] << 31 )
    operator delete(v5);
}


// ======================================================================
